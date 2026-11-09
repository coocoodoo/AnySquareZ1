// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/printer   functions: 126
/* k3c/internal/pkg/printer.init @ 00449ab4 (size 236) */

void k3c_internal_pkg_printer_init(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  undefined4 extraout_r1_01;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_003edf64();
  uVar1 = uStack_4;
  if (*(int *)PTR_DAT_00449ba8 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_00449bac;
    uVar1 = extraout_r1;
  }
  *(undefined4 *)PTR_DAT_00449bac = uVar1;
  FUN_003edf64();
  uVar1 = uStack_4;
  if (*(int *)PTR_DAT_00449ba8 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_00449bb4;
    uVar1 = extraout_r1_00;
  }
  *(undefined4 *)PTR_DAT_00449bb4 = uVar1;
  FUN_003edf64();
  if (*(int *)PTR_DAT_00449ba8 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_01;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_00449bbc;
    uStack_4 = extraout_r1_01;
  }
  *(undefined4 *)PTR_DAT_00449bbc = uStack_4;
  return;
}



/* k3c/internal/pkg/printer.(*GcodeRunException).Error @ 00449bc0 (size 24) */

void k3c_internal_pkg_printer___GcodeRunException__Error(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = *in_stack_00000004;
  uStack0000000c = in_stack_00000004[1];
                    /* WARNING: Could not recover jumptable at 0x00449bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Fileconfig @ 00449bd8 (size 16) */

void k3c_internal_pkg_printer___ConfigWrapper__Fileconfig(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00449be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Get_printer @ 00449be8 (size 16) */

void k3c_internal_pkg_printer___ConfigWrapper__Get_printer(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x00449bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Get_name @ 00449bf8 (size 24) */

void k3c_internal_pkg_printer___ConfigWrapper__Get_name(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
  uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00449c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Get @ 00449c10 (size 1376) */

void k3c_internal_pkg_printer___ConfigWrapper__Get(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int extraout_r1;
  undefined4 uVar6;
  undefined4 extraout_r2;
  int extraout_r2_00;
  int iVar7;
  undefined4 uVar8;
  undefined4 extraout_r3;
  undefined4 uVar9;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  bool bVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0x70) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      piVar5 = *(int **)(iVar2 + 4);
      uVar6 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x34) = uVar6;
      uVar8 = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar8;
      iVar2 = *piVar5;
      *(int *)((int)register0x00000054 + -0x2c) = iVar2;
      uVar9 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0044a174;
      *(undefined4 *)((int)register0x00000054 + -0x68) = uVar9;
      *(undefined4 *)((int)register0x00000054 + -100) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0x60) = uVar8;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x58) == '\0') {
        iVar2 = 0;
        iVar3 = 0;
        bVar11 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0x4d) = *(char *)((int)register0x00000054 + -0x58);
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x2c) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0044a174;
        *(undefined4 *)((int)register0x00000054 + -0x68) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        FUN_00025f60();
        iVar2 = **(int **)((int)register0x00000054 + -0x5c);
        iVar3 = (*(int **)((int)register0x00000054 + -0x5c))[1];
        bVar11 = *(char *)((int)register0x00000054 + -0x4d) == '\0';
      }
      if (bVar11) {
        cVar1 = '\0';
LAB_00449cec:
        if (cVar1 == '\0') {
          iVar2 = *(int *)((int)register0x00000054 + 0x10);
          if (iVar2 == DAT_0044a17c) {
            bVar11 = true;
          }
          else {
            bVar11 = false;
            if (iVar2 == DAT_0044a180) {
              bVar11 = true;
            }
          }
          uVar12 = 0;
          if (!bVar11) {
            if ((*(char *)((int)register0x00000054 + 0x18) == '\0') || (iVar2 == 0)) {
              uVar6 = *(undefined4 *)((int)register0x00000054 + 0x14);
            }
            else {
              uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x68) = uVar6;
              FUN_00150c8c();
              *(undefined4 *)((int)register0x00000054 + -4) =
                   *(undefined4 *)((int)register0x00000054 + -100);
              *(undefined4 *)((int)register0x00000054 + -0x40) =
                   *(undefined4 *)((int)register0x00000054 + -0x60);
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x68) =
                   *(undefined4 *)((int)register0x00000054 + 0xc);
              FUN_00150c8c();
              FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x18),
                           *(undefined4 *)((int)register0x00000054 + -0x60),
                           *(undefined4 *)((int)register0x00000054 + -100));
              *(undefined4 *)((int)register0x00000054 + -0x14) =
                   *(undefined4 *)((int)register0x00000054 + -0x40);
              *(undefined4 *)((int)register0x00000054 + -0x18) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(undefined4 *)((int)register0x00000054 + -0xc) = extraout_r2;
              *(undefined4 *)((int)register0x00000054 + -0x10) = extraout_r3;
              *(undefined1 **)((int)register0x00000054 + -0x6c) =
                   (undefined1 *)((int)register0x00000054 + -0x18);
              *(undefined4 *)((int)register0x00000054 + -0x68) = 2;
              *(undefined4 *)((int)register0x00000054 + -100) = 2;
              *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_0044a184;
              *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
              FUN_0014f8fc();
              uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
              *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0044a174;
              *(undefined4 *)((int)register0x00000054 + -0x68) = uVar6;
              *(undefined4 *)((int)register0x00000054 + -100) =
                   *(undefined4 *)((int)register0x00000054 + -0x58);
              *(undefined4 *)((int)register0x00000054 + -0x60) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              FUN_00093a08();
              uVar13 = CONCAT44(*(undefined4 *)((int)register0x00000054 + 0x10),
                                *(undefined4 **)((int)register0x00000054 + -0x5c));
              **(undefined4 **)((int)register0x00000054 + -0x5c) =
                   *(undefined4 *)((int)register0x00000054 + 0x10);
              if (*DAT_0044a188 == 0) {
                uVar6 = *(undefined4 *)((int)register0x00000054 + 0x14);
              }
              else {
                uVar13 = FUN_0009db64();
                uVar6 = *(undefined4 *)((int)register0x00000054 + 0x14);
                *unaff_r8 = uVar6;
                unaff_r8[1] = *(undefined4 *)((int)uVar13 + 4);
              }
              iVar2 = (int)((ulonglong)uVar13 >> 0x20);
              *(undefined4 *)((int)uVar13 + 4) = uVar6;
            }
            *(int *)((int)register0x00000054 + 0x1c) = iVar2;
            *(undefined4 *)((int)register0x00000054 + 0x20) = uVar6;
            return;
          }
        }
        else {
          iVar2 = *(int *)((int)register0x00000054 + 4);
          piVar5 = *(int **)(iVar2 + 4);
          uVar6 = *(undefined4 *)(iVar2 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x38) = uVar6;
          uVar8 = *(undefined4 *)(iVar2 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar8;
          iVar2 = *piVar5;
          *(int *)((int)register0x00000054 + -0x30) = iVar2;
          uVar9 = *(undefined4 *)(iVar2 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0044a174;
          *(undefined4 *)((int)register0x00000054 + -0x68) = uVar9;
          *(undefined4 *)((int)register0x00000054 + -100) = uVar6;
          *(undefined4 *)((int)register0x00000054 + -0x60) = uVar8;
          FUN_00093560();
          if (*(char *)((int)register0x00000054 + -0x58) == '\0') {
            iVar3 = 0;
            iVar2 = 0;
            bVar11 = true;
          }
          else {
            *(char *)((int)register0x00000054 + -0x4e) = *(char *)((int)register0x00000054 + -0x58);
            uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x30) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0044a174;
            *(undefined4 *)((int)register0x00000054 + -0x68) = uVar6;
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + -0x38);
            *(undefined4 *)((int)register0x00000054 + -0x60) =
                 *(undefined4 *)((int)register0x00000054 + -0x4c);
            FUN_00025f60();
            iVar3 = **(int **)((int)register0x00000054 + -0x5c);
            iVar2 = (*(int **)((int)register0x00000054 + -0x5c))[1];
            bVar11 = *(char *)((int)register0x00000054 + -0x4e) == '\0';
          }
          uVar6 = DAT_0044a18c;
          if (bVar11) {
LAB_00449f40:
            if (*(char *)((int)register0x00000054 + 0x18) != '\0') {
              *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar6;
              uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x68) = uVar6;
              FUN_00150c8c();
              *(undefined4 *)((int)register0x00000054 + -4) =
                   *(undefined4 *)((int)register0x00000054 + -100);
              *(undefined4 *)((int)register0x00000054 + -0x40) =
                   *(undefined4 *)((int)register0x00000054 + -0x60);
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x68) =
                   *(undefined4 *)((int)register0x00000054 + 0xc);
              FUN_00150c8c();
              *(undefined4 *)((int)register0x00000054 + -8) =
                   *(undefined4 *)((int)register0x00000054 + -100);
              *(undefined4 *)((int)register0x00000054 + -0x44) =
                   *(undefined4 *)((int)register0x00000054 + -0x60);
              FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x28));
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(undefined4 *)((int)register0x00000054 + -0x68) =
                   *(undefined4 *)((int)register0x00000054 + -0x40);
              FUN_0008f77c();
              *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_0044a190;
              *(undefined4 *)((int)register0x00000054 + -0x24) =
                   *(undefined4 *)((int)register0x00000054 + -100);
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)((int)register0x00000054 + -8);
              *(undefined4 *)((int)register0x00000054 + -0x68) =
                   *(undefined4 *)((int)register0x00000054 + -0x44);
              FUN_0008f77c();
              *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0044a190;
              *(undefined4 *)((int)register0x00000054 + -0x1c) =
                   *(undefined4 *)((int)register0x00000054 + -100);
              *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0044a194;
              *(undefined4 *)((int)register0x00000054 + -0x68) = 5;
              *(undefined1 **)((int)register0x00000054 + -100) =
                   (undefined1 *)((int)register0x00000054 + -0x28);
              *(undefined4 *)((int)register0x00000054 + -0x60) = 2;
              *(undefined4 *)((int)register0x00000054 + -0x5c) = 2;
              FUN_0013b72c();
              uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
              *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0044a174;
              *(undefined4 *)((int)register0x00000054 + -0x68) = uVar6;
              *(undefined4 *)((int)register0x00000054 + -100) =
                   *(undefined4 *)((int)register0x00000054 + -0x58);
              *(undefined4 *)((int)register0x00000054 + -0x60) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              FUN_00093a08();
              puVar4 = *(undefined4 **)((int)register0x00000054 + -0x5c);
              *puVar4 = DAT_0044a190;
              if (*DAT_0044a188 == 0) {
                uVar6 = *(undefined4 *)((int)register0x00000054 + -0x3c);
              }
              else {
                puVar4 = (undefined4 *)FUN_0009db64();
                uVar6 = *(undefined4 *)((int)register0x00000054 + -0x3c);
                *unaff_r8 = uVar6;
                unaff_r8[1] = puVar4[1];
              }
              puVar4[1] = uVar6;
            }
            *(undefined4 *)((int)register0x00000054 + 0x1c) = DAT_0044a190;
            *(undefined4 *)((int)register0x00000054 + 0x20) = uVar6;
            return;
          }
          uVar12 = iVar3 == DAT_0044a178;
          if ((bool)uVar12) {
            *(int *)((int)register0x00000054 + -0x6c) = DAT_0044a178;
            *(int *)((int)register0x00000054 + -0x68) = iVar2;
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x60) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_00093560();
            uVar6 = DAT_0044a18c;
            if (*(char *)((int)register0x00000054 + -0x58) != '\0') {
              uVar6 = (*(undefined4 **)((int)register0x00000054 + -0x5c))[1];
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   **(undefined4 **)((int)register0x00000054 + -0x5c);
              *(undefined4 *)((int)register0x00000054 + -0x68) = uVar6;
              FUN_0008f77c();
              uVar6 = *(undefined4 *)((int)register0x00000054 + -100);
            }
            goto LAB_00449f40;
          }
          *(int *)((int)register0x00000054 + -0x6c) = iVar3;
          *(int *)((int)register0x00000054 + -0x68) = DAT_0044a178;
          *(undefined4 *)((int)register0x00000054 + -100) = DAT_0044a198;
          FUN_000209b4();
        }
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x28));
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_0044a190;
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -100);
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x68) = uVar6;
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0044a190;
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -100);
        *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0044a19c;
        *(undefined4 *)((int)register0x00000054 + -0x68) = 0x2d;
        *(undefined1 **)((int)register0x00000054 + -100) =
             (undefined1 *)((int)register0x00000054 + -0x28);
        *(undefined4 *)((int)register0x00000054 + -0x60) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 2;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0044a190;
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -100);
        FUN_00095b00();
        iVar2 = extraout_r1;
        iVar7 = extraout_r2_00;
      }
      else {
        uVar12 = 0;
        iVar7 = DAT_0044a178;
        if (iVar2 == DAT_0044a178) {
          *(int *)((int)register0x00000054 + -0x6c) = DAT_0044a178;
          *(int *)((int)register0x00000054 + -0x68) = iVar3;
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093560();
          cVar1 = *(char *)((int)register0x00000054 + -0x58);
          goto LAB_00449cec;
        }
      }
      *(int *)((int)register0x00000054 + -0x6c) = iVar2;
      *(int *)((int)register0x00000054 + -0x68) = iVar7;
      *(undefined4 *)((int)register0x00000054 + -100) = DAT_0044a198;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x70);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x44a16c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).GetStr @ 0044a1a0 (size 308) */

void k3c_internal_pkg_printer___ConfigWrapper__GetStr(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  bool bVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x34) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 4);
      piVar4 = *(int **)(iVar1 + 4);
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x10) = uVar6;
      uVar2 = *(undefined4 *)(iVar1 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x14) = uVar2;
      iVar1 = *piVar4;
      *(int *)((int)register0x00000054 + -0xc) = iVar1;
      uVar7 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_0044a2d8;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0x28) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0x24) = uVar2;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x1c) == '\0') {
        puVar5 = (undefined *)0x0;
        uVar2 = 0;
        bVar9 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0x15) = *(char *)((int)register0x00000054 + -0x1c);
        uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xc) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_0044a2d8;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        FUN_00025f60();
        puVar5 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x20);
        uVar2 = (*(undefined4 **)((int)register0x00000054 + -0x20))[1];
        bVar9 = *(char *)((int)register0x00000054 + -0x15) == '\0';
      }
      puVar3 = (undefined4 *)PTR_SUB_0044a2e0;
      if (bVar9) goto LAB_0044a29c;
      bVar9 = puVar5 == PTR_DAT_0044a2dc;
      if (bVar9) {
        *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_0044a2dc;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00093560();
        puVar3 = (undefined4 *)PTR_SUB_0044a2e0;
        if (*(char *)((int)register0x00000054 + -0x1c) != '\0') {
          uVar2 = (*(undefined4 **)((int)register0x00000054 + -0x20))[1];
          *(undefined4 *)((int)register0x00000054 + -8) =
               **(undefined4 **)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -4) = uVar2;
          puVar3 = (undefined4 *)((int)register0x00000054 + -8);
        }
LAB_0044a29c:
        uVar2 = puVar3[1];
        *(undefined4 *)((int)register0x00000054 + 0x10) = *puVar3;
        *(undefined4 *)((int)register0x00000054 + 0x14) = uVar2;
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x30) = puVar5;
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0044a2dc;
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0044a2e4;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x34);
      if (bVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x44a2d0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Getint @ 0044a2e8 (size 1320) */

void k3c_internal_pkg_printer___ConfigWrapper__Getint(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int extraout_r1;
  undefined4 uVar5;
  undefined4 extraout_r2;
  undefined4 *puVar6;
  int extraout_r2_00;
  int iVar7;
  undefined4 uVar8;
  undefined4 extraout_r3;
  undefined4 uVar9;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  bool bVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0x70) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      piVar4 = *(int **)(iVar2 + 4);
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x44) = uVar5;
      uVar8 = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar8;
      iVar2 = *piVar4;
      *(int *)((int)register0x00000054 + -0x40) = iVar2;
      uVar9 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0044a814;
      *(undefined4 *)((int)register0x00000054 + -0x68) = uVar9;
      *(undefined4 *)((int)register0x00000054 + -100) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x60) = uVar8;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x58) == '\0') {
        iVar2 = 0;
        iVar3 = 0;
        bVar11 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0x4d) = *(char *)((int)register0x00000054 + -0x58);
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x40) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0044a814;
        *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        FUN_00025f60();
        iVar2 = **(int **)((int)register0x00000054 + -0x5c);
        iVar3 = (*(int **)((int)register0x00000054 + -0x5c))[1];
        bVar11 = *(char *)((int)register0x00000054 + -0x4d) == '\0';
      }
      if (bVar11) {
        cVar1 = '\0';
LAB_0044a3c4:
        if (cVar1 == '\0') {
          iVar2 = *(int *)((int)register0x00000054 + 0x10);
          if (iVar2 == DAT_0044a81c) {
            bVar11 = true;
          }
          else {
            bVar11 = false;
            if (iVar2 == DAT_0044a820) {
              bVar11 = true;
            }
          }
          uVar12 = 0;
          if (!bVar11) {
            if ((*(char *)((int)register0x00000054 + 0x20) == '\0') || (iVar2 == 0)) {
              puVar6 = *(undefined4 **)((int)register0x00000054 + 0x14);
            }
            else {
              uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
              FUN_00150c8c();
              *(undefined4 *)((int)register0x00000054 + -4) =
                   *(undefined4 *)((int)register0x00000054 + -100);
              *(undefined4 *)((int)register0x00000054 + -0x48) =
                   *(undefined4 *)((int)register0x00000054 + -0x60);
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x68) =
                   *(undefined4 *)((int)register0x00000054 + 0xc);
              FUN_00150c8c();
              FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x14),
                           *(undefined4 *)((int)register0x00000054 + -0x60),
                           *(undefined4 *)((int)register0x00000054 + -100));
              *(undefined4 *)((int)register0x00000054 + -0x10) =
                   *(undefined4 *)((int)register0x00000054 + -0x48);
              *(undefined4 *)((int)register0x00000054 + -0x14) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(undefined4 *)((int)register0x00000054 + -8) = extraout_r2;
              *(undefined4 *)((int)register0x00000054 + -0xc) = extraout_r3;
              *(undefined1 **)((int)register0x00000054 + -0x6c) =
                   (undefined1 *)((int)register0x00000054 + -0x14);
              *(undefined4 *)((int)register0x00000054 + -0x68) = 2;
              *(undefined4 *)((int)register0x00000054 + -100) = 2;
              *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_0044a824;
              *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
              FUN_0014f8fc();
              uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
              *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0044a814;
              *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
              *(undefined4 *)((int)register0x00000054 + -100) =
                   *(undefined4 *)((int)register0x00000054 + -0x58);
              *(undefined4 *)((int)register0x00000054 + -0x60) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              FUN_00093a08();
              uVar13 = CONCAT44(*(undefined4 *)((int)register0x00000054 + 0x10),
                                *(undefined4 **)((int)register0x00000054 + -0x5c));
              **(undefined4 **)((int)register0x00000054 + -0x5c) =
                   *(undefined4 *)((int)register0x00000054 + 0x10);
              if (*DAT_0044a828 == 0) {
                puVar6 = *(undefined4 **)((int)register0x00000054 + 0x14);
              }
              else {
                uVar13 = FUN_0009db64();
                puVar6 = *(undefined4 **)((int)register0x00000054 + 0x14);
                *unaff_r8 = puVar6;
                unaff_r8[1] = *(undefined4 *)((int)uVar13 + 4);
              }
              iVar2 = (int)((ulonglong)uVar13 >> 0x20);
              *(undefined4 **)((int)uVar13 + 4) = puVar6;
            }
            if (iVar2 != DAT_0044a82c) {
              *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
              return;
            }
            *(undefined4 *)((int)register0x00000054 + 0x24) = *puVar6;
            return;
          }
        }
        else {
          iVar2 = *(int *)((int)register0x00000054 + 4);
          uVar5 = *(undefined4 *)(iVar2 + 0xc);
          uVar8 = *(undefined4 *)(iVar2 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x6c) = *(undefined4 *)(iVar2 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -100) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          k3c_internal_pkg_printer___RawConfigParser__Getint();
          uVar13 = CONCAT44(DAT_0044a82c,*(int *)((int)register0x00000054 + -0x58));
          uVar12 = 0;
          if (*(int *)((int)register0x00000054 + -0x58) == DAT_0044a82c) {
            iVar2 = **(int **)((int)register0x00000054 + -0x54);
            if ((*(int *)((int)register0x00000054 + 0x18) == 0) ||
               (*(int *)((int)register0x00000054 + 0x18) <= iVar2)) {
              if ((*(int *)((int)register0x00000054 + 0x1c) == 0) ||
                 (iVar2 <= *(int *)((int)register0x00000054 + 0x1c))) {
                *(int *)((int)register0x00000054 + 0x24) = iVar2;
                return;
              }
              FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x3c));
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x68) =
                   *(undefined4 *)((int)register0x00000054 + 0xc);
              FUN_0008f77c();
              *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_0044a830;
              *(undefined4 *)((int)register0x00000054 + -0x38) =
                   *(undefined4 *)((int)register0x00000054 + -100);
              uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
              FUN_0008f77c();
              *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_0044a830;
              *(undefined4 *)((int)register0x00000054 + -0x30) =
                   *(undefined4 *)((int)register0x00000054 + -100);
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)((int)register0x00000054 + 0x1c);
              FUN_00020ce0();
              *(int *)((int)register0x00000054 + -0x2c) = DAT_0044a82c;
              *(undefined4 *)((int)register0x00000054 + -0x28) =
                   *(undefined4 *)((int)register0x00000054 + -0x68);
              *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0044a834;
              *(undefined4 *)((int)register0x00000054 + -0x68) = 0x33;
              *(undefined1 **)((int)register0x00000054 + -100) =
                   (undefined1 *)((int)register0x00000054 + -0x3c);
              *(undefined4 *)((int)register0x00000054 + -0x60) = 3;
              *(undefined4 *)((int)register0x00000054 + -0x5c) = 3;
              FUN_001386c4();
              uVar5 = 0;
              if (*(int *)((int)register0x00000054 + -0x58) != 0) {
                uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x58) + 4);
              }
              *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
              *(undefined4 *)((int)register0x00000054 + -0x68) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              FUN_00095b00();
            }
            FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x3c));
            *(undefined4 *)((int)register0x00000054 + -0x6c) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_0044a830;
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x6c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_0044a830;
            *(undefined4 *)((int)register0x00000054 + -0x30) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + -0x6c) =
                 *(undefined4 *)((int)register0x00000054 + 0x18);
            FUN_00020ce0();
            *(int *)((int)register0x00000054 + -0x2c) = DAT_0044a82c;
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x68);
            *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0044a838;
            *(undefined4 *)((int)register0x00000054 + -0x68) = 0x33;
            *(undefined1 **)((int)register0x00000054 + -100) =
                 (undefined1 *)((int)register0x00000054 + -0x3c);
            *(undefined4 *)((int)register0x00000054 + -0x60) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x5c) = 3;
            FUN_001386c4();
            uVar12 = *(int *)((int)register0x00000054 + -0x58) == 0;
            uVar5 = 0;
            if (!(bool)uVar12) {
              uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x58) + 4);
            }
            *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            uVar13 = FUN_00095b00();
          }
          *(undefined8 *)((int)register0x00000054 + -0x6c) = uVar13;
          *(undefined4 *)((int)register0x00000054 + -100) = DAT_0044a83c;
          FUN_000209b4();
        }
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0044a830;
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + -100);
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0044a830;
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -100);
        *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0044a840;
        *(undefined4 *)((int)register0x00000054 + -0x68) = 0x2d;
        *(undefined1 **)((int)register0x00000054 + -100) =
             (undefined1 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x60) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 2;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0044a830;
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -100);
        FUN_00095b00();
        iVar2 = extraout_r1;
        iVar7 = extraout_r2_00;
      }
      else {
        uVar12 = 0;
        iVar7 = DAT_0044a818;
        if (iVar2 == DAT_0044a818) {
          *(int *)((int)register0x00000054 + -0x6c) = DAT_0044a818;
          *(int *)((int)register0x00000054 + -0x68) = iVar3;
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093560();
          cVar1 = *(char *)((int)register0x00000054 + -0x58);
          goto LAB_0044a3c4;
        }
      }
      *(int *)((int)register0x00000054 + -0x6c) = iVar2;
      *(int *)((int)register0x00000054 + -0x68) = iVar7;
      *(undefined4 *)((int)register0x00000054 + -100) = DAT_0044a83c;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x70);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x44a80c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Getint64 @ 0044a844 (size 1504) */

void k3c_internal_pkg_printer___ConfigWrapper__Getint64(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *extraout_r1;
  undefined4 uVar5;
  undefined4 extraout_r2;
  undefined4 *puVar6;
  uint uVar7;
  undefined *extraout_r2_00;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 extraout_r3;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar14;
  undefined4 unaff_lr;
  undefined1 uVar15;
  bool bVar16;
  undefined8 uVar17;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar14 = (undefined1 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0x70) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      piVar3 = *(int **)(iVar2 + 4);
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x44) = uVar5;
      uVar9 = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar9;
      iVar2 = *piVar3;
      *(int *)((int)register0x00000054 + -0x40) = iVar2;
      uVar11 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_0044ae28;
      *(undefined4 *)((int)register0x00000054 + -0x68) = uVar11;
      *(undefined4 *)((int)register0x00000054 + -100) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x60) = uVar9;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x58) == '\0') {
        puVar4 = (undefined *)0x0;
        uVar5 = 0;
        bVar16 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0x4d) = *(char *)((int)register0x00000054 + -0x58);
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x40) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_0044ae28;
        *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        FUN_00025f60();
        puVar4 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x5c);
        uVar5 = (*(undefined4 **)((int)register0x00000054 + -0x5c))[1];
        bVar16 = *(char *)((int)register0x00000054 + -0x4d) == '\0';
      }
      if (bVar16) {
        cVar1 = '\0';
LAB_0044a920:
        if (cVar1 == '\0') {
          puVar4 = *(undefined **)((int)register0x00000054 + 0x10);
          if (puVar4 == PTR_DAT_0044ae30) {
            bVar16 = true;
          }
          else {
            bVar16 = false;
            if (puVar4 == PTR_DAT_0044ae34) {
              bVar16 = true;
            }
          }
          uVar15 = 0;
          if (!bVar16) {
            if ((*(char *)((int)register0x00000054 + 0x28) == '\0') || (puVar4 == (undefined *)0x0))
            {
              puVar6 = *(undefined4 **)((int)register0x00000054 + 0x14);
            }
            else {
              uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
              FUN_00150c8c();
              *(undefined4 *)((int)register0x00000054 + -4) =
                   *(undefined4 *)((int)register0x00000054 + -100);
              *(undefined4 *)((int)register0x00000054 + -0x48) =
                   *(undefined4 *)((int)register0x00000054 + -0x60);
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x68) =
                   *(undefined4 *)((int)register0x00000054 + 0xc);
              FUN_00150c8c();
              FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x14),
                           *(undefined4 *)((int)register0x00000054 + -0x60),
                           *(undefined4 *)((int)register0x00000054 + -100));
              *(undefined4 *)((int)register0x00000054 + -0x10) =
                   *(undefined4 *)((int)register0x00000054 + -0x48);
              *(undefined4 *)((int)register0x00000054 + -0x14) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(undefined4 *)((int)register0x00000054 + -8) = extraout_r2;
              *(undefined4 *)((int)register0x00000054 + -0xc) = extraout_r3;
              *(undefined1 **)((int)register0x00000054 + -0x6c) =
                   (undefined1 *)((int)register0x00000054 + -0x14);
              *(undefined4 *)((int)register0x00000054 + -0x68) = 2;
              *(undefined4 *)((int)register0x00000054 + -100) = 2;
              *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0044ae38;
              *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
              FUN_0014f8fc();
              uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
              *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_0044ae28;
              *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
              *(undefined4 *)((int)register0x00000054 + -100) =
                   *(undefined4 *)((int)register0x00000054 + -0x58);
              *(undefined4 *)((int)register0x00000054 + -0x60) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              FUN_00093a08();
              uVar17 = CONCAT44(*(undefined4 *)((int)register0x00000054 + 0x10),
                                *(undefined4 **)((int)register0x00000054 + -0x5c));
              **(undefined4 **)((int)register0x00000054 + -0x5c) =
                   *(undefined4 *)((int)register0x00000054 + 0x10);
              if (*(int *)PTR_DAT_0044ae3c == 0) {
                puVar6 = *(undefined4 **)((int)register0x00000054 + 0x14);
              }
              else {
                uVar17 = FUN_0009db64();
                puVar6 = *(undefined4 **)((int)register0x00000054 + 0x14);
                *unaff_r8 = puVar6;
                unaff_r8[1] = *(undefined4 *)((int)uVar17 + 4);
              }
              puVar4 = (undefined *)((ulonglong)uVar17 >> 0x20);
              *(undefined4 **)((int)uVar17 + 4) = puVar6;
            }
            if (puVar4 != PTR_DAT_0044ae40) {
              *(undefined4 *)((int)register0x00000054 + 0x2c) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x30) = 0;
              return;
            }
            uVar5 = puVar6[1];
            *(undefined4 *)((int)register0x00000054 + 0x2c) = *puVar6;
            *(undefined4 *)((int)register0x00000054 + 0x30) = uVar5;
            return;
          }
        }
        else {
          iVar2 = *(int *)((int)register0x00000054 + 4);
          uVar5 = *(undefined4 *)(iVar2 + 0xc);
          uVar9 = *(undefined4 *)(iVar2 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x6c) = *(undefined4 *)(iVar2 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -100) = uVar9;
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          k3c_internal_pkg_printer___RawConfigParser__Getint();
          uVar17 = CONCAT44(PTR_DAT_0044ae40,*(undefined **)((int)register0x00000054 + -0x58));
          uVar15 = 0;
          if (*(undefined **)((int)register0x00000054 + -0x58) == PTR_DAT_0044ae40) {
            uVar10 = **(uint **)((int)register0x00000054 + -0x54);
            uVar7 = (*(uint **)((int)register0x00000054 + -0x54))[1];
            uVar12 = *(uint *)((int)register0x00000054 + 0x1c);
            uVar13 = *(uint *)((int)register0x00000054 + 0x18);
            if ((uVar13 == 0 && uVar12 == 0) ||
               (bVar16 = uVar10 < uVar13,
               (int)uVar12 <= (int)uVar7 && (uVar13 <= uVar10 || uVar12 != uVar7))) {
              uVar12 = *(uint *)((int)register0x00000054 + 0x24);
              if ((*(uint *)((int)register0x00000054 + 0x20) == 0 && uVar12 == 0) ||
                 (bVar16 = *(uint *)((int)register0x00000054 + 0x20) < uVar10,
                 (!bVar16 || uVar12 != uVar7) && (int)uVar7 <= (int)uVar12)) {
                *(uint *)((int)register0x00000054 + 0x2c) = uVar10;
                *(uint *)((int)register0x00000054 + 0x30) = uVar7;
                return;
              }
              FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x3c));
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x68) =
                   *(undefined4 *)((int)register0x00000054 + 0xc);
              FUN_0008f77c();
              *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0044ae44;
              *(undefined4 *)((int)register0x00000054 + -0x38) =
                   *(undefined4 *)((int)register0x00000054 + -100);
              uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
              FUN_0008f77c();
              *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0044ae44;
              *(undefined4 *)((int)register0x00000054 + -0x30) =
                   *(undefined4 *)((int)register0x00000054 + -100);
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)((int)register0x00000054 + 0x20);
              *(undefined4 *)((int)register0x00000054 + -0x68) =
                   *(undefined4 *)((int)register0x00000054 + 0x24);
              FUN_0008f6c0();
              *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0044ae40;
              *(undefined4 *)((int)register0x00000054 + -0x28) =
                   *(undefined4 *)((int)register0x00000054 + -100);
              *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_0044ae48;
              *(undefined4 *)((int)register0x00000054 + -0x68) = 0x33;
              *(undefined1 **)((int)register0x00000054 + -100) =
                   (undefined1 *)((int)register0x00000054 + -0x3c);
              *(undefined4 *)((int)register0x00000054 + -0x60) = 3;
              *(undefined4 *)((int)register0x00000054 + -0x5c) = 3;
              FUN_001386c4();
              uVar5 = 0;
              if (*(int *)((int)register0x00000054 + -0x58) != 0) {
                uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x58) + 4);
              }
              *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
              *(undefined4 *)((int)register0x00000054 + -0x68) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              FUN_00095b00();
            }
            unaff_r8 = (undefined4 *)(uint)bVar16;
            FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x3c));
            *(undefined4 *)((int)register0x00000054 + -0x6c) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0044ae44;
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x6c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0044ae44;
            *(undefined4 *)((int)register0x00000054 + -0x30) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + -0x6c) =
                 *(undefined4 *)((int)register0x00000054 + 0x18);
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + 0x1c);
            FUN_0008f6c0();
            *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0044ae40;
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_0044ae4c;
            *(undefined4 *)((int)register0x00000054 + -0x68) = 0x33;
            *(undefined1 **)((int)register0x00000054 + -100) =
                 (undefined1 *)((int)register0x00000054 + -0x3c);
            *(undefined4 *)((int)register0x00000054 + -0x60) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x5c) = 3;
            FUN_001386c4();
            uVar15 = *(int *)((int)register0x00000054 + -0x58) == 0;
            uVar5 = 0;
            if (!(bool)uVar15) {
              uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x58) + 4);
            }
            *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            uVar17 = FUN_00095b00();
          }
          *(undefined8 *)((int)register0x00000054 + -0x6c) = uVar17;
          *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0044ae50;
          FUN_000209b4();
        }
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0044ae44;
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + -100);
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0044ae44;
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -100);
        *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_0044ae54;
        *(undefined4 *)((int)register0x00000054 + -0x68) = 0x2d;
        *(undefined1 **)((int)register0x00000054 + -100) =
             (undefined1 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x60) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 2;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_0044ae44;
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -100);
        FUN_00095b00();
        puVar4 = extraout_r1;
        puVar8 = extraout_r2_00;
      }
      else {
        uVar15 = 0;
        puVar8 = PTR_DAT_0044ae2c;
        if (puVar4 == PTR_DAT_0044ae2c) {
          *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_0044ae2c;
          *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093560();
          cVar1 = *(char *)((int)register0x00000054 + -0x58);
          goto LAB_0044a920;
        }
      }
      *(undefined **)((int)register0x00000054 + -0x6c) = puVar4;
      *(undefined **)((int)register0x00000054 + -0x68) = puVar8;
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0044ae50;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x70);
      if ((bool)uVar15) {
        register0x00000054 = (BADSPACEBASE *)puVar14;
      }
    }
    unaff_lr = 0x44ae20;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).GetintNone @ 0044ae58 (size 1248) */

void k3c_internal_pkg_printer___ConfigWrapper__GetintNone(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *extraout_r1;
  undefined4 uVar5;
  undefined4 extraout_r2;
  undefined *extraout_r2_00;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 extraout_r3;
  undefined4 uVar8;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  bool bVar11;
  undefined8 uVar12;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x74);
      *(undefined4 *)((int)register0x00000054 + -0x74) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      piVar3 = *(int **)(iVar2 + 4);
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x44) = uVar5;
      uVar7 = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar7;
      iVar2 = *piVar3;
      *(int *)((int)register0x00000054 + -0x40) = iVar2;
      uVar8 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0044b33c;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -100) = uVar7;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x5c) == '\0') {
        puVar4 = (undefined *)0x0;
        uVar5 = 0;
        bVar11 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0x51) = *(char *)((int)register0x00000054 + -0x5c);
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x40) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0044b33c;
        *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        FUN_00025f60();
        puVar4 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x60);
        uVar5 = (*(undefined4 **)((int)register0x00000054 + -0x60))[1];
        bVar11 = *(char *)((int)register0x00000054 + -0x51) == '\0';
      }
      if (bVar11) {
        cVar1 = '\0';
LAB_0044af34:
        if (cVar1 != '\0') {
          iVar2 = *(int *)((int)register0x00000054 + 4);
          uVar5 = *(undefined4 *)(iVar2 + 0xc);
          uVar7 = *(undefined4 *)(iVar2 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x70) = *(undefined4 *)(iVar2 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x68) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          k3c_internal_pkg_printer___RawConfigParser__Getint();
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          k3c_internal_pkg_util_cast_ToIntE();
          iVar2 = *(int *)((int)register0x00000054 + -0x68);
          *(int *)((int)register0x00000054 + -0x50) = iVar2;
          if ((*(int *)((int)register0x00000054 + 0x18) != 0) &&
             (iVar2 < *(int *)((int)register0x00000054 + 0x18))) {
            FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x3c));
            *(undefined4 *)((int)register0x00000054 + -0x70) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x6c) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0044b354;
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x68);
            uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x70) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0044b354;
            *(undefined4 *)((int)register0x00000054 + -0x30) =
                 *(undefined4 *)((int)register0x00000054 + -0x68);
            *(undefined4 *)((int)register0x00000054 + -0x70) =
                 *(undefined4 *)((int)register0x00000054 + 0x18);
            FUN_00020ce0();
            *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0044b358;
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x6c);
            *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0044b35c;
            *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x33;
            *(undefined1 **)((int)register0x00000054 + -0x68) =
                 (undefined1 *)((int)register0x00000054 + -0x3c);
            *(undefined4 *)((int)register0x00000054 + -100) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x60) = 3;
            k3c_internal_pkg_logger_Errorf();
            iVar2 = *(int *)((int)register0x00000054 + -0x50);
          }
          if ((*(int *)((int)register0x00000054 + 0x1c) != 0) &&
             (*(int *)((int)register0x00000054 + 0x1c) < iVar2)) {
            FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x3c));
            *(undefined4 *)((int)register0x00000054 + -0x70) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x6c) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0044b354;
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x68);
            uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x70) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0044b354;
            *(undefined4 *)((int)register0x00000054 + -0x30) =
                 *(undefined4 *)((int)register0x00000054 + -0x68);
            *(undefined4 *)((int)register0x00000054 + -0x70) =
                 *(undefined4 *)((int)register0x00000054 + 0x1c);
            FUN_00020ce0();
            *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0044b358;
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x6c);
            *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0044b360;
            *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x33;
            *(undefined1 **)((int)register0x00000054 + -0x68) =
                 (undefined1 *)((int)register0x00000054 + -0x3c);
            *(undefined4 *)((int)register0x00000054 + -100) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x60) = 3;
            k3c_internal_pkg_logger_Errorf();
            iVar2 = *(int *)((int)register0x00000054 + -0x50);
          }
          *(int *)((int)register0x00000054 + -0x70) = iVar2;
          FUN_00020ce0();
          *(undefined **)((int)register0x00000054 + 0x24) = PTR_DAT_0044b358;
          *(undefined4 *)((int)register0x00000054 + 0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x6c);
                    /* WARNING: Could not recover jumptable at 0x0044b268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x74))();
          return;
        }
        puVar4 = *(undefined **)((int)register0x00000054 + 0x10);
        if (puVar4 == PTR_DAT_0044b344) {
          bVar11 = true;
        }
        else {
          bVar11 = false;
          if (puVar4 == PTR_DAT_0044b348) {
            bVar11 = true;
          }
        }
        uVar10 = !bVar11;
        if ((bool)uVar10) {
          if ((*(char *)((int)register0x00000054 + 0x20) == '\0') || (puVar4 == (undefined *)0x0)) {
            uVar5 = *(undefined4 *)((int)register0x00000054 + 0x14);
          }
          else {
            uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x70) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
            FUN_00150c8c();
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0x68);
            *(undefined4 *)((int)register0x00000054 + -0x48) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + -0x70) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x6c) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_00150c8c();
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x14),
                         *(undefined4 *)((int)register0x00000054 + -100),
                         *(undefined4 *)((int)register0x00000054 + -0x68));
            *(undefined4 *)((int)register0x00000054 + -0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x48);
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            *(undefined4 *)((int)register0x00000054 + -8) = extraout_r2;
            *(undefined4 *)((int)register0x00000054 + -0xc) = extraout_r3;
            *(undefined1 **)((int)register0x00000054 + -0x70) =
                 (undefined1 *)((int)register0x00000054 + -0x14);
            *(undefined4 *)((int)register0x00000054 + -0x6c) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x68) = 2;
            *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0044b34c;
            *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
            FUN_0014f8fc();
            uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
            *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0044b33c;
            *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            FUN_00093a08();
            uVar12 = CONCAT44(*(undefined4 *)((int)register0x00000054 + 0x10),
                              *(undefined4 **)((int)register0x00000054 + -0x60));
            **(undefined4 **)((int)register0x00000054 + -0x60) =
                 *(undefined4 *)((int)register0x00000054 + 0x10);
            if (*(int *)PTR_DAT_0044b350 == 0) {
              uVar5 = *(undefined4 *)((int)register0x00000054 + 0x14);
            }
            else {
              uVar12 = FUN_0009db64();
              uVar5 = *(undefined4 *)((int)register0x00000054 + 0x14);
              *unaff_r8 = uVar5;
              unaff_r8[1] = *(undefined4 *)((int)uVar12 + 4);
            }
            puVar4 = (undefined *)((ulonglong)uVar12 >> 0x20);
            *(undefined4 *)((int)uVar12 + 4) = uVar5;
          }
          *(undefined **)((int)register0x00000054 + 0x24) = puVar4;
          *(undefined4 *)((int)register0x00000054 + 0x28) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0044b094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x74))();
          return;
        }
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0044b354;
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0044b354;
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0044b364;
        *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x2d;
        *(undefined1 **)((int)register0x00000054 + -0x68) =
             (undefined1 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -100) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x60) = 2;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0x5c);
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0044b354;
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        FUN_00095b00();
        puVar4 = extraout_r1;
        puVar6 = extraout_r2_00;
      }
      else {
        uVar10 = 0;
        puVar6 = PTR_DAT_0044b340;
        if (puVar4 == PTR_DAT_0044b340) {
          *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0044b340;
          *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093560();
          cVar1 = *(char *)((int)register0x00000054 + -0x5c);
          goto LAB_0044af34;
        }
      }
      *(undefined **)((int)register0x00000054 + -0x70) = puVar4;
      *(undefined **)((int)register0x00000054 + -0x6c) = puVar6;
      *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_0044b368;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x74);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x44b334;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Getfloat @ 0044b36c (size 2328) */

void k3c_internal_pkg_printer___ConfigWrapper__Getfloat(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int extraout_r1;
  undefined4 uVar6;
  undefined4 extraout_r2;
  undefined8 *puVar7;
  undefined4 extraout_r2_00;
  int extraout_r2_01;
  int iVar8;
  undefined4 uVar9;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar10;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  undefined1 uVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x20)) {
      puVar11 = (undefined1 *)((int)register0x00000054 + -0xa0);
      *(undefined4 *)((int)register0x00000054 + -0xa0) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      piVar5 = *(int **)(iVar2 + 4);
      uVar6 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x44) = uVar6;
      uVar9 = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x78) = uVar9;
      iVar2 = *piVar5;
      *(int *)((int)register0x00000054 + -0x40) = iVar2;
      uVar10 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_0044bc84;
      *(undefined4 *)((int)register0x00000054 + -0x98) = uVar10;
      *(undefined4 *)((int)register0x00000054 + -0x94) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0x90) = uVar9;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x88) == '\0') {
        iVar2 = 0;
        iVar3 = 0;
        bVar13 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0x7d) = *(char *)((int)register0x00000054 + -0x88);
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x40) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_0044bc84;
        *(undefined4 *)((int)register0x00000054 + -0x98) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x94) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -0x90) =
             *(undefined4 *)((int)register0x00000054 + -0x78);
        FUN_00025f60();
        iVar2 = **(int **)((int)register0x00000054 + -0x8c);
        iVar3 = (*(int **)((int)register0x00000054 + -0x8c))[1];
        bVar13 = *(char *)((int)register0x00000054 + -0x7d) == '\0';
      }
      if (bVar13) {
        cVar1 = '\0';
LAB_0044b44c:
        if (cVar1 == '\0') {
          iVar2 = *(int *)((int)register0x00000054 + 0x10);
          if (iVar2 == DAT_0044bc8c) {
            bVar13 = true;
          }
          else {
            bVar13 = false;
            if (iVar2 == DAT_0044bc90) {
              bVar13 = true;
            }
          }
          uVar12 = 0;
          if (!bVar13) {
            if ((*(char *)((int)register0x00000054 + 0x38) == '\0') || (iVar2 == 0)) {
              puVar7 = *(undefined8 **)((int)register0x00000054 + 0x14);
            }
            else {
              uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x9c) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x98) = uVar6;
              FUN_00150c8c();
              *(undefined4 *)((int)register0x00000054 + -4) =
                   *(undefined4 *)((int)register0x00000054 + -0x94);
              *(undefined4 *)((int)register0x00000054 + -100) =
                   *(undefined4 *)((int)register0x00000054 + -0x90);
              *(undefined4 *)((int)register0x00000054 + -0x9c) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x98) =
                   *(undefined4 *)((int)register0x00000054 + 0xc);
              FUN_00150c8c();
              FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x14),
                           *(undefined4 *)((int)register0x00000054 + -0x90),
                           *(undefined4 *)((int)register0x00000054 + -0x94));
              *(undefined4 *)((int)register0x00000054 + -0x10) =
                   *(undefined4 *)((int)register0x00000054 + -100);
              *(undefined4 *)((int)register0x00000054 + -0x14) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(undefined4 *)((int)register0x00000054 + -8) = extraout_r2;
              *(undefined4 *)((int)register0x00000054 + -0xc) = extraout_r3;
              *(undefined1 **)((int)register0x00000054 + -0x9c) =
                   (undefined1 *)((int)register0x00000054 + -0x14);
              *(undefined4 *)((int)register0x00000054 + -0x98) = 2;
              *(undefined4 *)((int)register0x00000054 + -0x94) = 2;
              *(undefined4 *)((int)register0x00000054 + -0x90) = DAT_0044bc94;
              *(undefined4 *)((int)register0x00000054 + -0x8c) = 1;
              FUN_0014f8fc();
              uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
              *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_0044bc84;
              *(undefined4 *)((int)register0x00000054 + -0x98) = uVar6;
              *(undefined4 *)((int)register0x00000054 + -0x94) =
                   *(undefined4 *)((int)register0x00000054 + -0x88);
              *(undefined4 *)((int)register0x00000054 + -0x90) =
                   *(undefined4 *)((int)register0x00000054 + -0x84);
              FUN_00093a08();
              uVar16 = CONCAT44(*(undefined4 *)((int)register0x00000054 + 0x10),
                                *(undefined4 **)((int)register0x00000054 + -0x8c));
              **(undefined4 **)((int)register0x00000054 + -0x8c) =
                   *(undefined4 *)((int)register0x00000054 + 0x10);
              if (*DAT_0044bc98 == 0) {
                puVar7 = *(undefined8 **)((int)register0x00000054 + 0x14);
              }
              else {
                uVar16 = FUN_0009db64();
                puVar7 = *(undefined8 **)((int)register0x00000054 + 0x14);
                *unaff_r8 = puVar7;
                unaff_r8[1] = *(undefined4 *)((int)uVar16 + 4);
              }
              iVar2 = (int)((ulonglong)uVar16 >> 0x20);
              *(undefined8 **)((int)uVar16 + 4) = puVar7;
            }
            if (iVar2 != DAT_0044bc9c) {
              *(undefined8 *)((int)register0x00000054 + 0x3c) = 0;
              return;
            }
            *(undefined8 *)((int)register0x00000054 + 0x3c) = *puVar7;
            return;
          }
        }
        else {
          iVar2 = *(int *)((int)register0x00000054 + 4);
          uVar6 = *(undefined4 *)(iVar2 + 0xc);
          uVar9 = *(undefined4 *)(iVar2 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x9c) = *(undefined4 *)(iVar2 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x98) = uVar6;
          *(undefined4 *)((int)register0x00000054 + -0x94) = uVar9;
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          k3c_internal_pkg_printer___RawConfigParser__Getfloat();
          uVar12 = 0;
          if (*(int *)((int)register0x00000054 + -0x88) == DAT_0044bc9c) {
            dVar14 = **(double **)((int)register0x00000054 + -0x84);
            if (*(char *)((int)register0x00000054 + 0x38) != '\0') {
              *(double *)((int)register0x00000054 + -0x74) = dVar14;
              *(double **)((int)register0x00000054 + -0x48) =
                   *(double **)((int)register0x00000054 + -0x84);
              *(int *)((int)register0x00000054 + -0x7c) = *(int *)((int)register0x00000054 + -0x88);
              uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x9c) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x98) = uVar6;
              FUN_00150c8c();
              *(undefined4 *)((int)register0x00000054 + -4) =
                   *(undefined4 *)((int)register0x00000054 + -0x94);
              *(undefined4 *)((int)register0x00000054 + -100) =
                   *(undefined4 *)((int)register0x00000054 + -0x90);
              *(undefined4 *)((int)register0x00000054 + -0x9c) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x98) =
                   *(undefined4 *)((int)register0x00000054 + 0xc);
              FUN_00150c8c();
              FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x14),
                           *(undefined4 *)((int)register0x00000054 + -0x90),
                           *(undefined4 *)((int)register0x00000054 + -0x94));
              *(undefined4 *)((int)register0x00000054 + -0x10) =
                   *(undefined4 *)((int)register0x00000054 + -100);
              *(undefined4 *)((int)register0x00000054 + -0x14) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(undefined4 *)((int)register0x00000054 + -8) = extraout_r2_00;
              *(undefined4 *)((int)register0x00000054 + -0xc) = extraout_r3_00;
              *(undefined1 **)((int)register0x00000054 + -0x9c) =
                   (undefined1 *)((int)register0x00000054 + -0x14);
              *(undefined4 *)((int)register0x00000054 + -0x98) = 2;
              *(undefined4 *)((int)register0x00000054 + -0x94) = 2;
              *(undefined4 *)((int)register0x00000054 + -0x90) = DAT_0044bc94;
              *(undefined4 *)((int)register0x00000054 + -0x8c) = 1;
              FUN_0014f8fc();
              uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
              *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_0044bc84;
              *(undefined4 *)((int)register0x00000054 + -0x98) = uVar6;
              *(undefined4 *)((int)register0x00000054 + -0x94) =
                   *(undefined4 *)((int)register0x00000054 + -0x88);
              *(undefined4 *)((int)register0x00000054 + -0x90) =
                   *(undefined4 *)((int)register0x00000054 + -0x84);
              FUN_00093a08();
              puVar4 = *(undefined4 **)((int)register0x00000054 + -0x8c);
              *puVar4 = *(undefined4 *)((int)register0x00000054 + -0x7c);
              if (*DAT_0044bc98 == 0) {
                uVar6 = *(undefined4 *)((int)register0x00000054 + -0x48);
              }
              else {
                puVar4 = (undefined4 *)FUN_0009db64();
                uVar6 = *(undefined4 *)((int)register0x00000054 + -0x48);
                *unaff_r8 = uVar6;
                unaff_r8[1] = puVar4[1];
              }
              puVar4[1] = uVar6;
              dVar14 = *(double *)((int)register0x00000054 + -0x74);
            }
            dVar15 = *(double *)((int)register0x00000054 + 0x18);
            if ((dVar15 == 0.0) || (uVar12 = dVar15 == dVar14, dVar15 <= dVar14)) {
              dVar15 = *(double *)((int)register0x00000054 + 0x20);
              if ((dVar15 == 0.0) || (uVar12 = dVar14 == dVar15, dVar14 <= dVar15)) {
                dVar15 = *(double *)((int)register0x00000054 + 0x28);
                if ((dVar15 == 0.0) || (uVar12 = dVar15 == dVar14, dVar15 < dVar14)) {
                  dVar15 = *(double *)((int)register0x00000054 + 0x30);
                  if ((dVar15 == 0.0) || (uVar12 = dVar14 == dVar15, dVar14 < dVar15)) {
                    *(double *)((int)register0x00000054 + 0x3c) = dVar14;
                    return;
                  }
                  FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x3c),DAT_0044bc9c);
                  *(undefined4 *)((int)register0x00000054 + -0x9c) =
                       *(undefined4 *)((int)register0x00000054 + 8);
                  *(undefined4 *)((int)register0x00000054 + -0x98) =
                       *(undefined4 *)((int)register0x00000054 + 0xc);
                  FUN_0008f77c();
                  *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_0044bca0;
                  *(undefined4 *)((int)register0x00000054 + -0x38) =
                       *(undefined4 *)((int)register0x00000054 + -0x94);
                  uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
                  *(undefined4 *)((int)register0x00000054 + -0x9c) =
                       *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
                  *(undefined4 *)((int)register0x00000054 + -0x98) = uVar6;
                  FUN_0008f77c();
                  *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_0044bca0;
                  *(undefined4 *)((int)register0x00000054 + -0x30) =
                       *(undefined4 *)((int)register0x00000054 + -0x94);
                  *(undefined8 *)((int)register0x00000054 + -0x60) =
                       *(undefined8 *)((int)register0x00000054 + 0x30);
                  *(undefined4 *)((int)register0x00000054 + -0x9c) =
                       *(undefined4 *)((int)register0x00000054 + -0x60);
                  *(undefined4 *)((int)register0x00000054 + -0x98) =
                       *(undefined4 *)((int)register0x00000054 + -0x5c);
                  FUN_0008f6c0();
                  *(int *)((int)register0x00000054 + -0x2c) = DAT_0044bc9c;
                  *(undefined4 *)((int)register0x00000054 + -0x28) =
                       *(undefined4 *)((int)register0x00000054 + -0x94);
                  *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_0044bca4;
                  *(undefined4 *)((int)register0x00000054 + -0x98) = 0x2c;
                  *(undefined1 **)((int)register0x00000054 + -0x94) =
                       (undefined1 *)((int)register0x00000054 + -0x3c);
                  *(undefined4 *)((int)register0x00000054 + -0x90) = 3;
                  *(undefined4 *)((int)register0x00000054 + -0x8c) = 3;
                  FUN_0013b72c();
                  *(undefined4 *)((int)register0x00000054 + -0x9c) =
                       *(undefined4 *)((int)register0x00000054 + -0x88);
                  *(undefined4 *)((int)register0x00000054 + -0x98) =
                       *(undefined4 *)((int)register0x00000054 + -0x84);
                  FUN_0008f77c();
                  *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_0044bca0;
                  *(undefined4 *)((int)register0x00000054 + -0x98) =
                       *(undefined4 *)((int)register0x00000054 + -0x94);
                  FUN_00095b00();
                }
                FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x3c));
                *(undefined4 *)((int)register0x00000054 + -0x9c) =
                     *(undefined4 *)((int)register0x00000054 + 8);
                *(undefined4 *)((int)register0x00000054 + -0x98) =
                     *(undefined4 *)((int)register0x00000054 + 0xc);
                FUN_0008f77c();
                *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_0044bca0;
                *(undefined4 *)((int)register0x00000054 + -0x38) =
                     *(undefined4 *)((int)register0x00000054 + -0x94);
                uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
                *(undefined4 *)((int)register0x00000054 + -0x9c) =
                     *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
                *(undefined4 *)((int)register0x00000054 + -0x98) = uVar6;
                FUN_0008f77c();
                *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_0044bca0;
                *(undefined4 *)((int)register0x00000054 + -0x30) =
                     *(undefined4 *)((int)register0x00000054 + -0x94);
                *(undefined8 *)((int)register0x00000054 + -0x58) =
                     *(undefined8 *)((int)register0x00000054 + 0x28);
                *(undefined4 *)((int)register0x00000054 + -0x9c) =
                     *(undefined4 *)((int)register0x00000054 + -0x58);
                *(undefined4 *)((int)register0x00000054 + -0x98) =
                     *(undefined4 *)((int)register0x00000054 + -0x54);
                FUN_0008f6c0();
                *(int *)((int)register0x00000054 + -0x2c) = DAT_0044bc9c;
                *(undefined4 *)((int)register0x00000054 + -0x28) =
                     *(undefined4 *)((int)register0x00000054 + -0x94);
                *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_0044bca8;
                *(undefined4 *)((int)register0x00000054 + -0x98) = 0x2c;
                *(undefined1 **)((int)register0x00000054 + -0x94) =
                     (undefined1 *)((int)register0x00000054 + -0x3c);
                *(undefined4 *)((int)register0x00000054 + -0x90) = 3;
                *(undefined4 *)((int)register0x00000054 + -0x8c) = 3;
                FUN_0013b72c();
                *(undefined4 *)((int)register0x00000054 + -0x9c) =
                     *(undefined4 *)((int)register0x00000054 + -0x88);
                *(undefined4 *)((int)register0x00000054 + -0x98) =
                     *(undefined4 *)((int)register0x00000054 + -0x84);
                FUN_0008f77c();
                *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_0044bca0;
                *(undefined4 *)((int)register0x00000054 + -0x98) =
                     *(undefined4 *)((int)register0x00000054 + -0x94);
                FUN_00095b00();
              }
              FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x3c));
              *(undefined4 *)((int)register0x00000054 + -0x9c) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x98) =
                   *(undefined4 *)((int)register0x00000054 + 0xc);
              FUN_0008f77c();
              *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_0044bca0;
              *(undefined4 *)((int)register0x00000054 + -0x38) =
                   *(undefined4 *)((int)register0x00000054 + -0x94);
              uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x9c) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x98) = uVar6;
              FUN_0008f77c();
              *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_0044bca0;
              *(undefined4 *)((int)register0x00000054 + -0x30) =
                   *(undefined4 *)((int)register0x00000054 + -0x94);
              *(undefined8 *)((int)register0x00000054 + -0x50) =
                   *(undefined8 *)((int)register0x00000054 + 0x20);
              *(undefined4 *)((int)register0x00000054 + -0x9c) =
                   *(undefined4 *)((int)register0x00000054 + -0x50);
              *(undefined4 *)((int)register0x00000054 + -0x98) =
                   *(undefined4 *)((int)register0x00000054 + -0x4c);
              FUN_0008f6c0();
              *(int *)((int)register0x00000054 + -0x2c) = DAT_0044bc9c;
              *(undefined4 *)((int)register0x00000054 + -0x28) =
                   *(undefined4 *)((int)register0x00000054 + -0x94);
              *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_0044bcac;
              *(undefined4 *)((int)register0x00000054 + -0x98) = 0x33;
              *(undefined1 **)((int)register0x00000054 + -0x94) =
                   (undefined1 *)((int)register0x00000054 + -0x3c);
              *(undefined4 *)((int)register0x00000054 + -0x90) = 3;
              *(undefined4 *)((int)register0x00000054 + -0x8c) = 3;
              FUN_0013b72c();
              *(undefined4 *)((int)register0x00000054 + -0x9c) =
                   *(undefined4 *)((int)register0x00000054 + -0x88);
              *(undefined4 *)((int)register0x00000054 + -0x98) =
                   *(undefined4 *)((int)register0x00000054 + -0x84);
              FUN_0008f77c();
              *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_0044bca0;
              *(undefined4 *)((int)register0x00000054 + -0x98) =
                   *(undefined4 *)((int)register0x00000054 + -0x94);
              FUN_00095b00();
            }
            FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x3c));
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_0044bca0;
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x98) = uVar6;
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_0044bca0;
            *(undefined4 *)((int)register0x00000054 + -0x30) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            *(undefined8 *)((int)register0x00000054 + -0x6c) =
                 *(undefined8 *)((int)register0x00000054 + 0x18);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + -0x6c);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + -0x68);
            FUN_0008f6c0();
            *(int *)((int)register0x00000054 + -0x2c) = DAT_0044bc9c;
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_0044bcb0;
            *(undefined4 *)((int)register0x00000054 + -0x98) = 0x33;
            *(undefined1 **)((int)register0x00000054 + -0x94) =
                 (undefined1 *)((int)register0x00000054 + -0x3c);
            *(undefined4 *)((int)register0x00000054 + -0x90) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x8c) = 3;
            FUN_0013b72c();
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + -0x88);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_0044bca0;
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            FUN_00095b00();
          }
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x24));
          *(undefined4 *)((int)register0x00000054 + -0x9c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x98) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0044bca0;
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x9c) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x98) = uVar6;
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0044bca0;
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_0044bcb4;
          *(undefined4 *)((int)register0x00000054 + -0x98) = 0x2b;
          *(undefined1 **)((int)register0x00000054 + -0x94) =
               (undefined1 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -0x90) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = 2;
          FUN_0013b72c();
          *(undefined4 *)((int)register0x00000054 + -0x9c) =
               *(undefined4 *)((int)register0x00000054 + -0x88);
          *(undefined4 *)((int)register0x00000054 + -0x98) =
               *(undefined4 *)((int)register0x00000054 + -0x84);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_0044bca0;
          *(undefined4 *)((int)register0x00000054 + -0x98) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          FUN_00095b00();
        }
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0x9c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0044bca0;
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x9c) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x98) = uVar6;
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0044bca0;
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_0044bcb8;
        *(undefined4 *)((int)register0x00000054 + -0x98) = 0x2d;
        *(undefined1 **)((int)register0x00000054 + -0x94) =
             (undefined1 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x90) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = 2;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x9c) =
             *(undefined4 *)((int)register0x00000054 + -0x88);
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + -0x84);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_0044bca0;
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        FUN_00095b00();
        iVar2 = extraout_r1;
        iVar8 = extraout_r2_01;
      }
      else {
        uVar12 = 0;
        iVar8 = DAT_0044bc88;
        if (iVar2 == DAT_0044bc88) {
          *(int *)((int)register0x00000054 + -0x9c) = DAT_0044bc88;
          *(int *)((int)register0x00000054 + -0x98) = iVar3;
          *(undefined4 *)((int)register0x00000054 + -0x94) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093560();
          cVar1 = *(char *)((int)register0x00000054 + -0x88);
          goto LAB_0044b44c;
        }
      }
      *(int *)((int)register0x00000054 + -0x9c) = iVar2;
      *(int *)((int)register0x00000054 + -0x98) = iVar8;
      *(undefined4 *)((int)register0x00000054 + -0x94) = DAT_0044bcbc;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xa0);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar11;
      }
    }
    unaff_lr = 0x44bc80;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).GetfloatNone @ 0044bcc0 (size 2036) */

void k3c_internal_pkg_printer___ConfigWrapper__GetfloatNone(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *extraout_r1;
  undefined4 uVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined *extraout_r2_01;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar8;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  bool bVar11;
  double dVar12;
  undefined8 uVar13;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x20)) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0xa0);
      *(undefined4 *)((int)register0x00000054 + -0xa0) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      piVar3 = *(int **)(iVar2 + 4);
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x44) = uVar5;
      uVar7 = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x78) = uVar7;
      iVar2 = *piVar3;
      *(int *)((int)register0x00000054 + -0x40) = iVar2;
      uVar8 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_0044c4b8;
      *(undefined4 *)((int)register0x00000054 + -0x98) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x94) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x90) = uVar7;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x88) == '\0') {
        puVar4 = (undefined *)0x0;
        uVar5 = 0;
        bVar11 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0x7d) = *(char *)((int)register0x00000054 + -0x88);
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x40) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_0044c4b8;
        *(undefined4 *)((int)register0x00000054 + -0x98) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x94) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -0x90) =
             *(undefined4 *)((int)register0x00000054 + -0x78);
        FUN_00025f60();
        puVar4 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x8c);
        uVar5 = (*(undefined4 **)((int)register0x00000054 + -0x8c))[1];
        bVar11 = *(char *)((int)register0x00000054 + -0x7d) == '\0';
      }
      if (bVar11) {
        cVar1 = '\0';
LAB_0044bda0:
        if (cVar1 != '\0') {
          iVar2 = *(int *)((int)register0x00000054 + 4);
          uVar5 = *(undefined4 *)(iVar2 + 0xc);
          uVar7 = *(undefined4 *)(iVar2 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x9c) = *(undefined4 *)(iVar2 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x98) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x94) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          k3c_internal_pkg_printer___RawConfigParser__Getfloat64None();
          iVar2 = *(int *)((int)register0x00000054 + -0x88);
          if (iVar2 == 0) {
            *(undefined4 *)((int)register0x00000054 + 0x3c) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x40) = 0;
            return;
          }
          *(int *)((int)register0x00000054 + -0x7c) = iVar2;
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x84);
          *(undefined4 *)((int)register0x00000054 + -0x48) = uVar5;
          if (*(char *)((int)register0x00000054 + 0x38) != '\0') {
            uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x98) = uVar5;
            FUN_00150c8c();
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            *(undefined4 *)((int)register0x00000054 + -0x5c) =
                 *(undefined4 *)((int)register0x00000054 + -0x90);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_00150c8c();
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x14),
                         *(undefined4 *)((int)register0x00000054 + -0x90),
                         *(undefined4 *)((int)register0x00000054 + -0x94));
            *(undefined4 *)((int)register0x00000054 + -0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            *(undefined4 *)((int)register0x00000054 + -8) = extraout_r2_00;
            *(undefined4 *)((int)register0x00000054 + -0xc) = extraout_r3_00;
            *(undefined1 **)((int)register0x00000054 + -0x9c) =
                 (undefined1 *)((int)register0x00000054 + -0x14);
            *(undefined4 *)((int)register0x00000054 + -0x98) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x94) = 2;
            *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_0044c4c8;
            *(undefined4 *)((int)register0x00000054 + -0x8c) = 1;
            FUN_0014f8fc();
            uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
            *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_0044c4b8;
            *(undefined4 *)((int)register0x00000054 + -0x98) = uVar5;
            *(undefined4 *)((int)register0x00000054 + -0x94) =
                 *(undefined4 *)((int)register0x00000054 + -0x88);
            *(undefined4 *)((int)register0x00000054 + -0x90) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            FUN_00093a08();
            uVar13 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x7c),
                              *(undefined4 **)((int)register0x00000054 + -0x8c));
            **(undefined4 **)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            if (*(int *)PTR_DAT_0044c4cc == 0) {
              uVar5 = *(undefined4 *)((int)register0x00000054 + -0x48);
            }
            else {
              uVar13 = FUN_0009db64();
              uVar5 = *(undefined4 *)((int)register0x00000054 + -0x48);
              *unaff_r8 = uVar5;
              unaff_r8[1] = *(undefined4 *)((int)uVar13 + 4);
            }
            iVar2 = (int)((ulonglong)uVar13 >> 0x20);
            *(undefined4 *)((int)uVar13 + 4) = uVar5;
          }
          *(int *)((int)register0x00000054 + -0x9c) = iVar2;
          *(undefined4 *)((int)register0x00000054 + -0x98) = uVar5;
          k3c_internal_pkg_util_cast_ToFloat64E();
          dVar12 = *(double *)((int)register0x00000054 + -0x94);
          *(double *)((int)register0x00000054 + -0x74) = dVar12;
          if ((*(double *)((int)register0x00000054 + 0x18) != 0.0) &&
             (dVar12 < *(double *)((int)register0x00000054 + 0x18))) {
            FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x3c));
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0044c4d0;
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x98) = uVar5;
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0044c4d0;
            *(undefined4 *)((int)register0x00000054 + -0x30) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            *(undefined8 *)((int)register0x00000054 + -100) =
                 *(undefined8 *)((int)register0x00000054 + 0x18);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + -0x60);
            FUN_0008f6c0();
            *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0044c4d4;
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_0044c4d8;
            *(undefined4 *)((int)register0x00000054 + -0x98) = 0x33;
            *(undefined1 **)((int)register0x00000054 + -0x94) =
                 (undefined1 *)((int)register0x00000054 + -0x3c);
            *(undefined4 *)((int)register0x00000054 + -0x90) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x8c) = 3;
            k3c_internal_pkg_logger_Errorf();
            dVar12 = *(double *)((int)register0x00000054 + -0x74);
          }
          if ((*(double *)((int)register0x00000054 + 0x20) != 0.0) &&
             (*(double *)((int)register0x00000054 + 0x20) < dVar12)) {
            FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x3c));
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0044c4d0;
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x98) = uVar5;
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0044c4d0;
            *(undefined4 *)((int)register0x00000054 + -0x30) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            *(undefined8 *)((int)register0x00000054 + -0x6c) =
                 *(undefined8 *)((int)register0x00000054 + 0x20);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + -0x6c);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + -0x68);
            FUN_0008f6c0();
            *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0044c4d4;
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_0044c4dc;
            *(undefined4 *)((int)register0x00000054 + -0x98) = 0x33;
            *(undefined1 **)((int)register0x00000054 + -0x94) =
                 (undefined1 *)((int)register0x00000054 + -0x3c);
            *(undefined4 *)((int)register0x00000054 + -0x90) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x8c) = 3;
            k3c_internal_pkg_logger_Errorf();
            dVar12 = *(double *)((int)register0x00000054 + -0x74);
          }
          if ((*(double *)((int)register0x00000054 + 0x28) != 0.0) &&
             (dVar12 <= *(double *)((int)register0x00000054 + 0x28))) {
            FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x3c));
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0044c4d0;
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x98) = uVar5;
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0044c4d0;
            *(undefined4 *)((int)register0x00000054 + -0x30) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            *(undefined8 *)((int)register0x00000054 + -0x50) =
                 *(undefined8 *)((int)register0x00000054 + 0x28);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + -0x4c);
            FUN_0008f6c0();
            *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0044c4d4;
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_0044c4e0;
            *(undefined4 *)((int)register0x00000054 + -0x98) = 0x2c;
            *(undefined1 **)((int)register0x00000054 + -0x94) =
                 (undefined1 *)((int)register0x00000054 + -0x3c);
            *(undefined4 *)((int)register0x00000054 + -0x90) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x8c) = 3;
            k3c_internal_pkg_logger_Errorf();
            dVar12 = *(double *)((int)register0x00000054 + -0x74);
          }
          if ((*(double *)((int)register0x00000054 + 0x30) != 0.0) &&
             (*(double *)((int)register0x00000054 + 0x30) <= dVar12)) {
            FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x3c));
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0044c4d0;
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x98) = uVar5;
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0044c4d0;
            *(undefined4 *)((int)register0x00000054 + -0x30) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            *(undefined8 *)((int)register0x00000054 + -0x58) =
                 *(undefined8 *)((int)register0x00000054 + 0x30);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            FUN_0008f6c0();
            *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0044c4d4;
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_0044c4e4;
            *(undefined4 *)((int)register0x00000054 + -0x98) = 0x2c;
            *(undefined1 **)((int)register0x00000054 + -0x94) =
                 (undefined1 *)((int)register0x00000054 + -0x3c);
            *(undefined4 *)((int)register0x00000054 + -0x90) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x8c) = 3;
            k3c_internal_pkg_logger_Errorf();
          }
          *(undefined4 *)((int)register0x00000054 + 0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0x7c);
          *(undefined4 *)((int)register0x00000054 + 0x40) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          return;
        }
        puVar4 = *(undefined **)((int)register0x00000054 + 0x10);
        if (puVar4 == PTR_DAT_0044c4c0) {
          bVar11 = true;
        }
        else {
          bVar11 = false;
          if (puVar4 == PTR_DAT_0044c4c4) {
            bVar11 = true;
          }
        }
        uVar10 = !bVar11;
        if ((bool)uVar10) {
          if ((*(char *)((int)register0x00000054 + 0x38) == '\0') || (puVar4 == (undefined *)0x0)) {
            uVar5 = *(undefined4 *)((int)register0x00000054 + 0x14);
          }
          else {
            uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x98) = uVar5;
            FUN_00150c8c();
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            *(undefined4 *)((int)register0x00000054 + -0x5c) =
                 *(undefined4 *)((int)register0x00000054 + -0x90);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_00150c8c();
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x14),
                         *(undefined4 *)((int)register0x00000054 + -0x90),
                         *(undefined4 *)((int)register0x00000054 + -0x94));
            *(undefined4 *)((int)register0x00000054 + -0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            *(undefined4 *)((int)register0x00000054 + -8) = extraout_r2;
            *(undefined4 *)((int)register0x00000054 + -0xc) = extraout_r3;
            *(undefined1 **)((int)register0x00000054 + -0x9c) =
                 (undefined1 *)((int)register0x00000054 + -0x14);
            *(undefined4 *)((int)register0x00000054 + -0x98) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x94) = 2;
            *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_0044c4c8;
            *(undefined4 *)((int)register0x00000054 + -0x8c) = 1;
            FUN_0014f8fc();
            uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
            *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_0044c4b8;
            *(undefined4 *)((int)register0x00000054 + -0x98) = uVar5;
            *(undefined4 *)((int)register0x00000054 + -0x94) =
                 *(undefined4 *)((int)register0x00000054 + -0x88);
            *(undefined4 *)((int)register0x00000054 + -0x90) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            FUN_00093a08();
            uVar13 = CONCAT44(*(undefined4 *)((int)register0x00000054 + 0x10),
                              *(undefined4 **)((int)register0x00000054 + -0x8c));
            **(undefined4 **)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + 0x10);
            if (*(int *)PTR_DAT_0044c4cc == 0) {
              uVar5 = *(undefined4 *)((int)register0x00000054 + 0x14);
            }
            else {
              uVar13 = FUN_0009db64();
              uVar5 = *(undefined4 *)((int)register0x00000054 + 0x14);
              *unaff_r8 = uVar5;
              unaff_r8[1] = *(undefined4 *)((int)uVar13 + 4);
            }
            puVar4 = (undefined *)((ulonglong)uVar13 >> 0x20);
            *(undefined4 *)((int)uVar13 + 4) = uVar5;
          }
          *(undefined **)((int)register0x00000054 + 0x3c) = puVar4;
          *(undefined4 *)((int)register0x00000054 + 0x40) = uVar5;
          return;
        }
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0x9c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0044c4d0;
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x9c) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x98) = uVar5;
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0044c4d0;
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_0044c4e8;
        *(undefined4 *)((int)register0x00000054 + -0x98) = 0x2d;
        *(undefined1 **)((int)register0x00000054 + -0x94) =
             (undefined1 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x90) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = 2;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x9c) =
             *(undefined4 *)((int)register0x00000054 + -0x88);
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + -0x84);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_0044c4d0;
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        FUN_00095b00();
        puVar4 = extraout_r1;
        puVar6 = extraout_r2_01;
      }
      else {
        uVar10 = 0;
        puVar6 = PTR_DAT_0044c4bc;
        if (puVar4 == PTR_DAT_0044c4bc) {
          *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_0044c4bc;
          *(undefined4 *)((int)register0x00000054 + -0x98) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x94) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093560();
          cVar1 = *(char *)((int)register0x00000054 + -0x88);
          goto LAB_0044bda0;
        }
      }
      *(undefined **)((int)register0x00000054 + -0x9c) = puVar4;
      *(undefined **)((int)register0x00000054 + -0x98) = puVar6;
      *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_0044c4ec;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xa0);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x44c4b0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Getboolean @ 0044c4f0 (size 904) */

void k3c_internal_pkg_printer___ConfigWrapper__Getboolean(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *extraout_r1;
  undefined4 uVar5;
  undefined4 extraout_r2;
  undefined1 *puVar6;
  undefined *extraout_r2_00;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 extraout_r3;
  undefined4 uVar9;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  bool bVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x58) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      piVar3 = *(int **)(iVar2 + 4);
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar5;
      uVar8 = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x34) = uVar8;
      iVar2 = *piVar3;
      *(int *)((int)register0x00000054 + -0x28) = iVar2;
      uVar9 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0044c87c;
      *(undefined4 *)((int)register0x00000054 + -0x50) = uVar9;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar8;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x40) == '\0') {
        puVar4 = (undefined *)0x0;
        uVar5 = 0;
        bVar11 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0x35) = *(char *)((int)register0x00000054 + -0x40);
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0044c87c;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        FUN_00025f60();
        puVar4 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x44);
        uVar5 = (*(undefined4 **)((int)register0x00000054 + -0x44))[1];
        bVar11 = *(char *)((int)register0x00000054 + -0x35) == '\0';
      }
      if (bVar11) {
        cVar1 = '\0';
LAB_0044c5cc:
        if (cVar1 == '\0') {
          puVar4 = *(undefined **)((int)register0x00000054 + 0x10);
          if (puVar4 == PTR_DAT_0044c884) {
            bVar11 = true;
          }
          else {
            bVar11 = false;
            if (puVar4 == PTR_DAT_0044c888) {
              bVar11 = true;
            }
          }
          uVar12 = 0;
          if (!bVar11) {
            if ((*(char *)((int)register0x00000054 + 0x18) == '\0') || (puVar4 == (undefined *)0x0))
            {
              puVar6 = *(undefined1 **)((int)register0x00000054 + 0x14);
            }
            else {
              uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x54) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x50) = uVar5;
              FUN_00150c8c();
              *(undefined4 *)((int)register0x00000054 + -0x24) =
                   *(undefined4 *)((int)register0x00000054 + -0x4c);
              *(undefined4 *)((int)register0x00000054 + -0x30) =
                   *(undefined4 *)((int)register0x00000054 + -0x48);
              *(undefined4 *)((int)register0x00000054 + -0x54) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x50) =
                   *(undefined4 *)((int)register0x00000054 + 0xc);
              FUN_00150c8c();
              FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10),
                           *(undefined4 *)((int)register0x00000054 + -0x48),
                           *(undefined4 *)((int)register0x00000054 + -0x4c));
              *(undefined4 *)((int)register0x00000054 + -0xc) =
                   *(undefined4 *)((int)register0x00000054 + -0x30);
              *(undefined4 *)((int)register0x00000054 + -0x10) =
                   *(undefined4 *)((int)register0x00000054 + -0x24);
              *(undefined4 *)((int)register0x00000054 + -4) = extraout_r2;
              *(undefined4 *)((int)register0x00000054 + -8) = extraout_r3;
              *(undefined1 **)((int)register0x00000054 + -0x54) =
                   (undefined1 *)((int)register0x00000054 + -0x10);
              *(undefined4 *)((int)register0x00000054 + -0x50) = 2;
              *(undefined4 *)((int)register0x00000054 + -0x4c) = 2;
              *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_0044c88c;
              *(undefined4 *)((int)register0x00000054 + -0x44) = 1;
              FUN_0014f8fc();
              uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
              *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0044c87c;
              *(undefined4 *)((int)register0x00000054 + -0x50) = uVar5;
              *(undefined4 *)((int)register0x00000054 + -0x4c) =
                   *(undefined4 *)((int)register0x00000054 + -0x40);
              *(undefined4 *)((int)register0x00000054 + -0x48) =
                   *(undefined4 *)((int)register0x00000054 + -0x3c);
              FUN_00093a08();
              uVar13 = CONCAT44(*(undefined4 *)((int)register0x00000054 + 0x10),
                                *(undefined4 **)((int)register0x00000054 + -0x44));
              **(undefined4 **)((int)register0x00000054 + -0x44) =
                   *(undefined4 *)((int)register0x00000054 + 0x10);
              if (*(int *)PTR_DAT_0044c890 == 0) {
                puVar6 = *(undefined1 **)((int)register0x00000054 + 0x14);
              }
              else {
                uVar13 = FUN_0009db64();
                puVar6 = *(undefined1 **)((int)register0x00000054 + 0x14);
                *unaff_r8 = puVar6;
                unaff_r8[1] = *(undefined4 *)((int)uVar13 + 4);
              }
              puVar4 = (undefined *)((ulonglong)uVar13 >> 0x20);
              *(undefined1 **)((int)uVar13 + 4) = puVar6;
            }
            if (puVar4 != PTR_DAT_0044c894) {
              *(undefined1 *)((int)register0x00000054 + 0x1c) = 0;
              return;
            }
            *(undefined1 *)((int)register0x00000054 + 0x1c) = *puVar6;
            return;
          }
        }
        else {
          iVar2 = *(int *)((int)register0x00000054 + 4);
          uVar8 = *(undefined4 *)(iVar2 + 0xc);
          uVar5 = *(undefined4 *)(iVar2 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x54) = *(undefined4 *)(iVar2 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x50) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          k3c_internal_pkg_printer___RawConfigParser__Getboolean();
          uVar12 = *(undefined **)((int)register0x00000054 + -0x40) == PTR_DAT_0044c894;
          if ((bool)uVar12) {
            *(undefined1 *)((int)register0x00000054 + 0x1c) =
                 **(undefined1 **)((int)register0x00000054 + -0x3c);
            return;
          }
          *(undefined **)((int)register0x00000054 + -0x54) =
               *(undefined **)((int)register0x00000054 + -0x40);
          *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_0044c894;
          *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0044c898;
          FUN_000209b4();
        }
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x20));
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0044c89c;
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar5;
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0044c89c;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0044c8a0;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 0x2d;
        *(undefined1 **)((int)register0x00000054 + -0x4c) =
             (undefined1 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x48) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 2;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0044c89c;
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        FUN_00095b00();
        puVar4 = extraout_r1;
        puVar7 = extraout_r2_00;
      }
      else {
        uVar12 = 0;
        puVar7 = PTR_DAT_0044c880;
        if (puVar4 == PTR_DAT_0044c880) {
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0044c880;
          *(undefined4 *)((int)register0x00000054 + -0x50) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093560();
          cVar1 = *(char *)((int)register0x00000054 + -0x40);
          goto LAB_0044c5cc;
        }
      }
      *(undefined **)((int)register0x00000054 + -0x54) = puVar4;
      *(undefined **)((int)register0x00000054 + -0x50) = puVar7;
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0044c898;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x58);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x44c874;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).GetListChoice @ 0044c8a4 (size 356) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___ConfigWrapper__GetListChoice(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000014;
  undefined4 *puStack_dc;
  undefined4 *puStack_d8;
  undefined4 uStack_b4;
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [76];
  undefined1 auStack_1c [12];
  undefined1 *puStack_10;
  
  while (auStack_68 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x44ca04;
    FUN_0009bf64();
  }
  uVar1 = FUN_0009def8(0,auStack_1c);
  FUN_0009de88(uVar1,auStack_a8);
  puStack_10 = auStack_a8;
  FUN_0006aa3c();
  for (iVar2 = 0; iVar2 < in_stack_00000014; iVar2 = iVar2 + 1) {
    FUN_0008f77c();
    uStack_b4 = _UNK_0044ca0c;
    puStack_b0 = puStack_dc;
    FUN_0008f77c();
    puStack_ac = puStack_dc;
    puStack_dc = &uStack_b4;
    FUN_00090d70();
    *puStack_d8 = _UNK_0044ca0c;
    puVar3 = puStack_d8;
    if (*_UNK_0044ca14 != 0) {
      puVar3 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = (int)puStack_ac;
      unaff_r8[1] = puVar3[1];
    }
    puVar3[1] = puStack_ac;
  }
  k3c_internal_pkg_printer___ConfigWrapper__Getchoice();
                    /* WARNING: Could not recover jumptable at 0x0044c9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Getchoice @ 0044ca18 (size 1440) */

void k3c_internal_pkg_printer___ConfigWrapper__Getchoice(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 extraout_r2;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 extraout_r3;
  undefined4 uVar9;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  bool bVar11;
  undefined8 uVar12;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x48)) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -200);
      *(undefined4 *)((int)register0x00000054 + -200) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      piVar3 = *(int **)(iVar2 + 4);
      uVar6 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar6;
      uVar8 = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x9c) = uVar8;
      iVar2 = *piVar3;
      *(int *)((int)register0x00000054 + -0x84) = iVar2;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      uVar9 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0044cfbc;
      *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar9;
      *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0xb8) = uVar8;
      FUN_00093560();
      uVar6 = (*(undefined4 **)((int)register0x00000054 + -0xb4))[1];
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           **(undefined4 **)((int)register0x00000054 + -0xb4);
      *(undefined4 *)((int)register0x00000054 + -8) = uVar6;
      if (*(char *)((int)register0x00000054 + -0xb0) == '\0') {
        puVar4 = (undefined *)0x0;
        uVar6 = 0;
        bVar11 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0x9d) = *(char *)((int)register0x00000054 + -0xb0);
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x84) + 0xc);
        *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0044cfbc;
        *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0xbc) =
             *(undefined4 *)((int)register0x00000054 + -0x8c);
        *(undefined4 *)((int)register0x00000054 + -0xb8) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        FUN_00025f60();
        puVar4 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0xb4);
        uVar6 = (*(undefined4 **)((int)register0x00000054 + -0xb4))[1];
        bVar11 = *(char *)((int)register0x00000054 + -0x9d) == '\0';
      }
      if (bVar11) {
        cVar1 = '\0';
        goto LAB_0044cb1c;
      }
      bVar11 = puVar4 == PTR_DAT_0044cfc0;
      if (bVar11) {
        *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0044cfc0;
        *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0xbc) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0xb8) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00093560();
        cVar1 = *(char *)((int)register0x00000054 + -0xb0);
LAB_0044cb1c:
        if (cVar1 != '\0') {
          FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x5c));
          *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0044cfc4;
          *(undefined4 *)((int)register0x00000054 + -0xc0) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined1 **)((int)register0x00000054 + -0xbc) =
               (undefined1 *)((int)register0x00000054 + -0x5c);
          FUN_00091764();
          uVar6 = 0;
          uVar8 = 0;
          goto LAB_0044cdb0;
        }
        puVar4 = *(undefined **)((int)register0x00000054 + 0x14);
        if (puVar4 == PTR_DAT_0044cfc8) {
          bVar11 = true;
        }
        else {
          bVar11 = false;
          if (puVar4 == PTR_DAT_0044cfcc) {
            bVar11 = true;
          }
        }
        if (!bVar11) {
          if ((*(char *)((int)register0x00000054 + 0x1c) == '\0') || (puVar4 == (undefined *)0x0)) {
            puVar7 = *(undefined4 **)((int)register0x00000054 + 0x18);
          }
          else {
            uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0xc4) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar6;
            FUN_00150c8c();
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0xbc);
            *(undefined4 *)((int)register0x00000054 + -0x90) =
                 *(undefined4 *)((int)register0x00000054 + -0xb8);
            *(undefined4 *)((int)register0x00000054 + -0xc4) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0xc0) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_00150c8c();
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x1c),
                         *(undefined4 *)((int)register0x00000054 + -0xb8),
                         *(undefined4 *)((int)register0x00000054 + -0xbc));
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -0x90);
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            *(undefined4 *)((int)register0x00000054 + -0x10) = extraout_r2;
            *(undefined4 *)((int)register0x00000054 + -0x14) = extraout_r3;
            *(undefined1 **)((int)register0x00000054 + -0xc4) =
                 (undefined1 *)((int)register0x00000054 + -0x1c);
            *(undefined4 *)((int)register0x00000054 + -0xc0) = 2;
            *(undefined4 *)((int)register0x00000054 + -0xbc) = 2;
            *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0044cfd0;
            *(undefined4 *)((int)register0x00000054 + -0xb4) = 1;
            FUN_0014f8fc();
            uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
            *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0044cfbc;
            *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar6;
            *(undefined4 *)((int)register0x00000054 + -0xbc) =
                 *(undefined4 *)((int)register0x00000054 + -0xb0);
            *(undefined4 *)((int)register0x00000054 + -0xb8) =
                 *(undefined4 *)((int)register0x00000054 + -0xac);
            FUN_00093a08();
            uVar12 = CONCAT44(*(undefined4 *)((int)register0x00000054 + 0x14),
                              *(undefined4 **)((int)register0x00000054 + -0xb4));
            **(undefined4 **)((int)register0x00000054 + -0xb4) =
                 *(undefined4 *)((int)register0x00000054 + 0x14);
            if (*(int *)PTR_DAT_0044cfd4 == 0) {
              puVar7 = *(undefined4 **)((int)register0x00000054 + 0x18);
            }
            else {
              uVar12 = FUN_0009db64();
              puVar7 = *(undefined4 **)((int)register0x00000054 + 0x18);
              *unaff_r8 = puVar7;
              unaff_r8[1] = *(undefined4 *)((int)uVar12 + 4);
            }
            puVar4 = (undefined *)((ulonglong)uVar12 >> 0x20);
            *(undefined4 **)((int)uVar12 + 4) = puVar7;
          }
          if (puVar4 == PTR_DAT_0044cfd8) {
            uVar6 = puVar7[1];
            *(undefined4 *)((int)register0x00000054 + -0xc4) = *puVar7;
            *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar6;
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + 0x20) = PTR_DAT_0044cfd8;
            *(undefined4 *)((int)register0x00000054 + 0x24) =
                 *(undefined4 *)((int)register0x00000054 + -0xbc);
            return;
          }
          *(undefined **)((int)register0x00000054 + 0x20) = PTR_DAT_0044cfd8;
          *(undefined **)((int)register0x00000054 + 0x24) = PTR_SUB_0044cfdc;
          return;
        }
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x2c));
        *(undefined4 *)((int)register0x00000054 + -0xc4) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0044cfd8;
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0xbc);
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0xc4) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar6;
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0044cfd8;
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + -0xbc);
        *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0044cfe0;
        *(undefined4 *)((int)register0x00000054 + -0xc0) = 0x2d;
        *(undefined1 **)((int)register0x00000054 + -0xbc) =
             (undefined1 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0xb8) = 2;
        *(undefined4 *)((int)register0x00000054 + -0xb4) = 2;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0xc4) =
             *(undefined4 *)((int)register0x00000054 + -0xb0);
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + -0xac);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0044cfd8;
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + -0xbc);
        uVar12 = FUN_00095b00();
        while( true ) {
          *(int *)((int)register0x00000054 + -0x94) = (int)((ulonglong)uVar12 >> 0x20);
          *(int *)((int)register0x00000054 + -0x80) = (int)uVar12;
          *(undefined1 **)((int)register0x00000054 + -0xc4) =
               (undefined1 *)((int)register0x00000054 + -0x5c);
          FUN_000919c8();
          uVar6 = *(undefined4 *)((int)register0x00000054 + -0x94);
          uVar8 = *(undefined4 *)((int)register0x00000054 + -0x80);
LAB_0044cdb0:
          puVar7 = *(undefined4 **)((int)register0x00000054 + -0x5c);
          if (puVar7 == (undefined4 *)0x0) break;
          uVar6 = puVar7[1];
          *(undefined4 *)((int)register0x00000054 + -0x7c) = *puVar7;
          *(undefined4 *)((int)register0x00000054 + -0x78) = uVar6;
          iVar2 = *(int *)((int)register0x00000054 + -0x7c);
          puVar4 = PTR_DAT_0044cfe4;
          if (iVar2 == 0) {
            iVar2 = 0;
            puVar4 = (undefined *)0x0;
          }
          pcVar5 = *(code **)(puVar4 + 0x54);
          *(int *)((int)register0x00000054 + -0xc4) = iVar2;
          (*pcVar5)();
          if (*(int *)((int)register0x00000054 + -0xc0) == 2) {
            *(undefined4 *)((int)register0x00000054 + -0xc4) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0xc0) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0xbc) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0xb8) =
                 *(undefined4 *)((int)register0x00000054 + 0x14);
            *(undefined4 *)((int)register0x00000054 + -0xb4) =
                 *(undefined4 *)((int)register0x00000054 + 0x18);
            *(undefined4 *)((int)register0x00000054 + -0xb0) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xac) = 0;
            *(undefined1 *)((int)register0x00000054 + -0xa8) = 1;
            k3c_internal_pkg_printer___ConfigWrapper__Getint();
            *(undefined4 *)((int)register0x00000054 + -0xc4) =
                 *(undefined4 *)((int)register0x00000054 + -0xa4);
            FUN_00020ce0();
            uVar12 = CONCAT44(PTR_DAT_0044cfe8,*(undefined4 *)((int)register0x00000054 + -0xc0));
          }
          else {
            *(undefined4 *)((int)register0x00000054 + -0xc4) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0xc0) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0xbc) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0xb8) =
                 *(undefined4 *)((int)register0x00000054 + 0x14);
            *(undefined4 *)((int)register0x00000054 + -0xb4) =
                 *(undefined4 *)((int)register0x00000054 + 0x18);
            *(undefined1 *)((int)register0x00000054 + -0xb0) = 1;
            k3c_internal_pkg_printer___ConfigWrapper__Get();
            uVar12 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0xac),
                              *(undefined4 *)((int)register0x00000054 + -0xa8));
          }
        }
        *(undefined4 *)((int)register0x00000054 + -0x94) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x80) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0xc) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar8;
        *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0044cfc4;
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined1 **)((int)register0x00000054 + -0xbc) =
             (undefined1 *)((int)register0x00000054 + -0xc);
        FUN_00090af8();
        uVar8 = **(undefined4 **)((int)register0x00000054 + -0xb8);
        uVar6 = (*(undefined4 **)((int)register0x00000054 + -0xb8))[1];
        if (*(char *)((int)register0x00000054 + -0xb4) == '\0') {
          *(undefined4 *)((int)register0x00000054 + -0x98) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x88) = uVar6;
          FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x74));
          *(undefined4 *)((int)register0x00000054 + -0x74) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -0x80);
          *(undefined4 *)((int)register0x00000054 + -0xc4) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0xc0) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_0044cfd8;
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)((int)register0x00000054 + -0xbc);
          uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0xc4) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar6;
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0044cfd8;
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + -0xbc);
          *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0044cfec;
          *(undefined4 *)((int)register0x00000054 + -0xc0) = 0x41;
          *(undefined1 **)((int)register0x00000054 + -0xbc) =
               (undefined1 *)((int)register0x00000054 + -0x74);
          *(undefined4 *)((int)register0x00000054 + -0xb8) = 3;
          *(undefined4 *)((int)register0x00000054 + -0xb4) = 3;
          k3c_internal_pkg_logger_Errorf();
          uVar6 = *(undefined4 *)((int)register0x00000054 + -0x88);
          uVar8 = *(undefined4 *)((int)register0x00000054 + -0x98);
        }
        *(undefined4 *)((int)register0x00000054 + 0x20) = uVar8;
        *(undefined4 *)((int)register0x00000054 + 0x24) = uVar6;
        return;
      }
      *(undefined **)((int)register0x00000054 + -0xc4) = puVar4;
      *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0044cfc0;
      *(undefined **)((int)register0x00000054 + -0xbc) = PTR_DAT_0044cff0;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -200);
      if (bVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x44cfb4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).GetFloatMat @ 0044cff4 (size 640) */

void k3c_internal_pkg_printer___ConfigWrapper__GetFloatMat(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  uint uVar4;
  uint extraout_r2;
  undefined *extraout_r2_00;
  int iVar5;
  int extraout_r3;
  undefined *extraout_r3_00;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int unaff_r10;
  int *piVar13;
  undefined1 *puVar14;
  undefined4 unaff_lr;
  undefined1 uVar15;
  undefined8 uVar16;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar14 = (undefined1 *)((int)register0x00000054 + -0x7c);
      *(undefined4 *)((int)register0x00000054 + -0x7c) = unaff_lr;
      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x14));
      *(undefined4 *)((int)register0x00000054 + -0x10) = 1;
      *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_0044d278;
      *(undefined4 *)((int)register0x00000054 + -8) = 1;
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0044d27c;
      *(undefined4 *)((int)register0x00000054 + -0x78) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x70) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x6c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
      *(undefined1 **)((int)register0x00000054 + -100) =
           (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x60) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 3;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 0xe;
      *(undefined1 *)((int)register0x00000054 + -0x50) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getlists();
      puVar3 = *(undefined **)((int)register0x00000054 + -0x4c);
      uVar15 = 0;
      puVar6 = PTR_DAT_0044d280;
      if (puVar3 == PTR_DAT_0044d280) {
        piVar2 = (int *)**(int **)((int)register0x00000054 + -0x48);
        iVar1 = (*(int **)((int)register0x00000054 + -0x48))[1];
        uVar4 = 0;
        iVar5 = 0;
        uVar7 = 0;
        do {
          if (iVar1 < 1) {
            *(int *)((int)register0x00000054 + 0x10) = iVar5;
            *(uint *)((int)register0x00000054 + 0x14) = uVar7;
            *(uint *)((int)register0x00000054 + 0x18) = uVar4;
            return;
          }
          *(int *)((int)register0x00000054 + -0x24) = iVar1;
          *(int *)((int)register0x00000054 + -0x18) = iVar5;
          *(uint *)((int)register0x00000054 + -0x38) = uVar7;
          *(uint *)((int)register0x00000054 + -0x34) = uVar4;
          *(int **)((int)register0x00000054 + -4) = piVar2;
          iVar8 = *piVar2;
          *(int *)((int)register0x00000054 + -0x20) = iVar8;
          iVar9 = piVar2[1];
          *(int *)((int)register0x00000054 + -0x44) = iVar9;
          piVar11 = (int *)0x0;
          iVar12 = 0;
          piVar13 = (int *)0x0;
          for (iVar10 = 0; iVar10 < iVar9; iVar10 = iVar10 + 1) {
            puVar3 = *(undefined **)(iVar8 + iVar10 * 8);
            uVar15 = puVar3 == PTR_DAT_0044d28c;
            if (!(bool)uVar15) {
              *(undefined **)((int)register0x00000054 + -0x78) = puVar3;
              *(undefined **)((int)register0x00000054 + -0x74) = PTR_DAT_0044d28c;
              *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0044d290;
              FUN_000209b4();
              puVar3 = extraout_r2_00;
              puVar6 = extraout_r3_00;
              goto LAB_0044d250;
            }
            piVar13 = (int *)((int)piVar13 + 1);
            uVar16 = **(undefined8 **)(iVar8 + iVar10 * 8 + 4);
            if (piVar11 < piVar13) {
              *(int *)((int)register0x00000054 + -0x28) = iVar10;
              *(undefined8 *)((int)register0x00000054 + -0x30) = uVar16;
              *(int *)((int)register0x00000054 + -0x78) = iVar12;
              *(int **)((int)register0x00000054 + -0x74) = piVar13;
              *(int **)((int)register0x00000054 + -0x70) = piVar11;
              *(undefined4 *)((int)register0x00000054 + -0x6c) = 1;
              *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_0044d28c;
              FUN_000987f4();
              iVar12 = *(int *)((int)register0x00000054 + -100);
              piVar13 = *(int **)((int)register0x00000054 + -0x60);
              piVar11 = *(int **)((int)register0x00000054 + -0x5c);
              uVar4 = *(uint *)((int)register0x00000054 + -0x34);
              iVar5 = *(int *)((int)register0x00000054 + -0x18);
              uVar7 = *(uint *)((int)register0x00000054 + -0x38);
              iVar8 = *(int *)((int)register0x00000054 + -0x20);
              iVar9 = *(int *)((int)register0x00000054 + -0x44);
              iVar10 = *(int *)((int)register0x00000054 + -0x28);
              uVar16 = *(undefined8 *)((int)register0x00000054 + -0x30);
            }
            *(undefined8 *)(iVar12 + ((int)piVar13 + -1) * 8) = uVar16;
            iVar1 = *(int *)((int)register0x00000054 + -0x24);
            piVar2 = *(int **)((int)register0x00000054 + -4);
          }
          uVar7 = uVar7 + 1;
          if (uVar4 < uVar7) {
            *(int *)((int)register0x00000054 + -0x1c) = iVar12;
            *(int **)((int)register0x00000054 + -0x40) = piVar13;
            *(int **)((int)register0x00000054 + -0x3c) = piVar11;
            *(int *)((int)register0x00000054 + -0x78) = iVar5;
            *(uint *)((int)register0x00000054 + -0x74) = uVar7;
            *(uint *)((int)register0x00000054 + -0x70) = uVar4;
            *(undefined4 *)((int)register0x00000054 + -0x6c) = 1;
            *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_0044d284;
            FUN_000987f4();
            iVar5 = *(int *)((int)register0x00000054 + -100);
            uVar7 = *(uint *)((int)register0x00000054 + -0x60);
            uVar4 = *(uint *)((int)register0x00000054 + -0x5c);
            iVar1 = *(int *)((int)register0x00000054 + -0x24);
            piVar2 = *(int **)((int)register0x00000054 + -4);
            piVar11 = *(int **)((int)register0x00000054 + -0x3c);
            iVar12 = *(int *)((int)register0x00000054 + -0x1c);
            piVar13 = *(int **)((int)register0x00000054 + -0x40);
          }
          uVar16 = CONCAT44(piVar2,iVar1);
          iVar1 = uVar7 * 0xc + -0xc;
          *(int **)(iVar5 + iVar1 + 4) = piVar13;
          *(int **)(iVar5 + iVar1 + 8) = piVar11;
          if (*(int *)PTR_DAT_0044d288 != 0) {
            uVar16 = FUN_0009db64();
            *piVar11 = iVar12;
            piVar11[1] = *(int *)(extraout_r3 + iVar1);
            uVar4 = extraout_r2;
            iVar5 = extraout_r3;
          }
          *(int *)(iVar5 + iVar1) = iVar12;
          piVar2 = (int *)((int)((ulonglong)uVar16 >> 0x20) + 0xc);
          iVar1 = (int)uVar16 + -1;
        } while( true );
      }
LAB_0044d250:
      *(undefined **)((int)register0x00000054 + -0x78) = puVar3;
      *(undefined **)((int)register0x00000054 + -0x74) = puVar6;
      *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0044d290;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x7c);
      if ((bool)uVar15) {
        register0x00000054 = (BADSPACEBASE *)puVar14;
      }
    }
    unaff_lr = 0x44d270;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Getlists @ 0044d294 (size 2912) */

void k3c_internal_pkg_printer___ConfigWrapper__Getlists(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int extraout_r1;
  undefined4 uVar9;
  int iVar10;
  undefined4 extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  undefined4 uVar11;
  undefined4 extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  int extraout_r3_04;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int unaff_r7;
  undefined4 *unaff_r8;
  int *piVar16;
  uint *puVar17;
  int unaff_r10;
  undefined1 *puVar18;
  undefined4 unaff_lr;
  bool bVar19;
  undefined1 uVar20;
  undefined8 uVar21;
  
  do {
    uVar14 = DAT_0044dab0;
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x80)) {
      puVar18 = (undefined1 *)((int)register0x00000054 + -0x100);
      *(undefined4 *)((int)register0x00000054 + -0x100) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      piVar5 = *(int **)(iVar2 + 4);
      uVar9 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x54) = uVar9;
      uVar11 = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0xb4) = uVar11;
      iVar2 = *piVar5;
      *(int *)((int)register0x00000054 + -0x40) = iVar2;
      uVar12 = *(undefined4 *)(iVar2 + 0xc);
      *(uint *)((int)register0x00000054 + -0xfc) = DAT_0044dab0;
      *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar12;
      *(undefined4 *)((int)register0x00000054 + -0xf4) = uVar9;
      *(undefined4 *)((int)register0x00000054 + -0xf0) = uVar11;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0xe8) == '\0') {
        iVar2 = 0;
        iVar3 = 0;
        bVar19 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0xd5) = *(char *)((int)register0x00000054 + -0xe8);
        uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x40) + 0xc);
        *(uint *)((int)register0x00000054 + -0xfc) = DAT_0044dab0;
        *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar9;
        *(undefined4 *)((int)register0x00000054 + -0xf4) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined4 *)((int)register0x00000054 + -0xf0) =
             *(undefined4 *)((int)register0x00000054 + -0xb4);
        FUN_00025f60();
        iVar2 = **(int **)((int)register0x00000054 + -0xec);
        iVar3 = (*(int **)((int)register0x00000054 + -0xec))[1];
        bVar19 = *(char *)((int)register0x00000054 + -0xd5) == '\0';
      }
      if (bVar19) {
        cVar1 = '\0';
LAB_0044d374:
        if (cVar1 == '\0') {
          iVar2 = *(int *)((int)register0x00000054 + 0x10);
          if (iVar2 == DAT_0044dac8) {
            bVar19 = true;
          }
          else {
            bVar19 = false;
            if (iVar2 == DAT_0044dacc) {
              bVar19 = true;
            }
          }
          if (bVar19) {
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x20));
            *(undefined4 *)((int)register0x00000054 + -0xfc) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0xf8) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0044dad8;
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0xf4);
            iVar2 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(int *)((int)register0x00000054 + -0xfc) = iVar2;
            *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar9;
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_0044dad8;
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0xf4);
            *(undefined4 *)((int)register0x00000054 + -0xfc) = DAT_0044dadc;
            *(undefined4 *)((int)register0x00000054 + -0xf8) = 0x2d;
            *(undefined1 **)((int)register0x00000054 + -0xf4) =
                 (undefined1 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)((int)register0x00000054 + -0xf0) = 2;
            *(undefined4 *)((int)register0x00000054 + -0xec) = 2;
            FUN_0013b72c();
            *(undefined4 *)((int)register0x00000054 + -0xfc) =
                 *(undefined4 *)((int)register0x00000054 + -0xe8);
            *(undefined4 *)((int)register0x00000054 + -0xf8) =
                 *(undefined4 *)((int)register0x00000054 + -0xe4);
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0xfc) = DAT_0044dad8;
            *(undefined4 *)((int)register0x00000054 + -0xf8) =
                 *(undefined4 *)((int)register0x00000054 + -0xf4);
            FUN_00095b00();
            uVar13 = extraout_r3_00;
            goto LAB_0044d828;
          }
          if ((*(char *)((int)register0x00000054 + 0x2c) == '\0') || (iVar2 == 0)) {
            uVar9 = *(undefined4 *)((int)register0x00000054 + 0x14);
          }
          else {
            uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0xfc) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar9;
            FUN_00150c8c();
            *(undefined4 *)((int)register0x00000054 + -0x34) =
                 *(undefined4 *)((int)register0x00000054 + -0xf4);
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + -0xf0);
            *(undefined4 *)((int)register0x00000054 + -0xfc) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0xf8) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_00150c8c();
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10),
                         *(undefined4 *)((int)register0x00000054 + -0xf0),
                         *(undefined4 *)((int)register0x00000054 + -0xf4));
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x8c);
            *(undefined4 *)((int)register0x00000054 + -0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x34);
            *(undefined4 *)((int)register0x00000054 + -4) = extraout_r2;
            *(undefined4 *)((int)register0x00000054 + -8) = extraout_r3;
            *(undefined1 **)((int)register0x00000054 + -0xfc) =
                 (undefined1 *)((int)register0x00000054 + -0x10);
            *(undefined4 *)((int)register0x00000054 + -0xf8) = 2;
            *(undefined4 *)((int)register0x00000054 + -0xf4) = 2;
            *(undefined4 *)((int)register0x00000054 + -0xf0) = DAT_0044dad0;
            *(undefined4 *)((int)register0x00000054 + -0xec) = 1;
            FUN_0014f8fc();
            uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
            *(uint *)((int)register0x00000054 + -0xfc) = DAT_0044dab0;
            *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar9;
            *(undefined4 *)((int)register0x00000054 + -0xf4) =
                 *(undefined4 *)((int)register0x00000054 + -0xe8);
            *(undefined4 *)((int)register0x00000054 + -0xf0) =
                 *(undefined4 *)((int)register0x00000054 + -0xe4);
            FUN_00093a08();
            uVar21 = CONCAT44(*(undefined4 *)((int)register0x00000054 + 0x10),
                              *(undefined4 **)((int)register0x00000054 + -0xec));
            **(undefined4 **)((int)register0x00000054 + -0xec) =
                 *(undefined4 *)((int)register0x00000054 + 0x10);
            if (*DAT_0044dad4 == 0) {
              uVar9 = *(undefined4 *)((int)register0x00000054 + 0x14);
            }
            else {
              uVar21 = FUN_0009db64();
              uVar9 = *(undefined4 *)((int)register0x00000054 + 0x14);
              *unaff_r8 = uVar9;
              unaff_r8[1] = *(undefined4 *)((int)uVar21 + 4);
            }
            iVar2 = (int)((ulonglong)uVar21 >> 0x20);
            *(undefined4 *)((int)uVar21 + 4) = uVar9;
          }
          *(int *)((int)register0x00000054 + 0x30) = iVar2;
          *(undefined4 *)((int)register0x00000054 + 0x34) = uVar9;
          return;
        }
        if ((((*(int *)((int)register0x00000054 + 0x1c) != 2) ||
             (puVar6 = *(undefined4 **)((int)register0x00000054 + 0x18), puVar6[1] != 1)) ||
            (*(char *)*puVar6 != ',')) || ((puVar6[3] != 1 || (*(char *)puVar6[2] != '\n')))) {
          iVar2 = *(int *)((int)register0x00000054 + 4);
          piVar5 = *(int **)(iVar2 + 4);
          uVar11 = *(undefined4 *)(iVar2 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar11;
          uVar9 = *(undefined4 *)(iVar2 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar9;
          iVar2 = *piVar5;
          *(int *)((int)register0x00000054 + -0x48) = iVar2;
          uVar12 = *(undefined4 *)(iVar2 + 0xc);
          *(uint *)((int)register0x00000054 + -0xfc) = DAT_0044dab0;
          *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar12;
          *(undefined4 *)((int)register0x00000054 + -0xf4) = uVar11;
          *(undefined4 *)((int)register0x00000054 + -0xf0) = uVar9;
          FUN_00093560();
          if (*(char *)((int)register0x00000054 + -0xe8) == '\0') {
            iVar3 = 0;
            iVar2 = 0;
            bVar19 = true;
          }
          else {
            *(char *)((int)register0x00000054 + -0xd7) = *(char *)((int)register0x00000054 + -0xe8);
            uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x48) + 0xc);
            *(uint *)((int)register0x00000054 + -0xfc) = DAT_0044dab0;
            *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar9;
            *(undefined4 *)((int)register0x00000054 + -0xf4) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 *)((int)register0x00000054 + -0xf0) =
                 *(undefined4 *)((int)register0x00000054 + -0xbc);
            FUN_00025f60();
            iVar3 = **(int **)((int)register0x00000054 + -0xec);
            iVar2 = (*(int **)((int)register0x00000054 + -0xec))[1];
            bVar19 = *(char *)((int)register0x00000054 + -0xd7) == '\0';
          }
          puVar6 = DAT_0044dac4;
          if (!bVar19) {
            if (iVar3 != DAT_0044dab4) {
              *(int *)((int)register0x00000054 + -0xfc) = iVar3;
              *(int *)((int)register0x00000054 + -0xf8) = DAT_0044dab4;
              *(undefined4 *)((int)register0x00000054 + -0xf4) = DAT_0044de3c;
              uVar21 = FUN_000209b4();
              iVar2 = extraout_r3_02;
              goto LAB_0044db08;
            }
            *(int *)((int)register0x00000054 + -0xfc) = DAT_0044dab4;
            *(int *)((int)register0x00000054 + -0xf8) = iVar2;
            *(undefined4 *)((int)register0x00000054 + -0xf4) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0xf0) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_00093560();
            puVar6 = DAT_0044dac4;
            if (*(char *)((int)register0x00000054 + -0xe8) != '\0') {
              uVar9 = (*(undefined4 **)((int)register0x00000054 + -0xec))[1];
              *(undefined4 *)((int)register0x00000054 + -0x30) =
                   **(undefined4 **)((int)register0x00000054 + -0xec);
              *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar9;
              puVar6 = (undefined4 *)((int)register0x00000054 + -0x30);
            }
          }
          *(undefined4 **)((int)register0x00000054 + -0x6c) = puVar6;
          uVar13 = 0;
          uVar14 = 0;
          iVar3 = 0;
          iVar2 = DAT_0044dac0;
          while (iVar3 < *(int *)((int)register0x00000054 + 0x1c)) {
            *(int *)((int)register0x00000054 + -0x8c) = iVar3;
            *(int *)((int)register0x00000054 + -0x50) = iVar2;
            *(uint *)((int)register0x00000054 + -0xb0) = uVar13;
            *(uint *)((int)register0x00000054 + -0xa8) = uVar14;
            *(undefined4 *)((int)register0x00000054 + -0x60) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 0x18) + iVar3 * 8);
            *(undefined4 *)((int)register0x00000054 + -0xc0) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 0x18) + iVar3 * 8 + 4);
            uVar9 = puVar6[1];
            *(undefined4 *)((int)register0x00000054 + -0xfc) = *puVar6;
            *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar9;
            FUN_00151ce4();
            *(undefined4 *)((int)register0x00000054 + -0xfc) =
                 *(undefined4 *)((int)register0x00000054 + -0xf4);
            *(undefined4 *)((int)register0x00000054 + -0xf8) =
                 *(undefined4 *)((int)register0x00000054 + -0xf0);
            *(undefined4 *)((int)register0x00000054 + -0xf4) = DAT_0044dae0;
            *(undefined4 *)((int)register0x00000054 + -0xf0) = 1;
            *(undefined4 *)((int)register0x00000054 + -0xec) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xe8) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xe4) = 0xffffffff;
            FUN_00151e6c();
            *(undefined4 *)((int)register0x00000054 + -0xfc) =
                 *(undefined4 *)((int)register0x00000054 + -0xe0);
            *(undefined4 *)((int)register0x00000054 + -0xf8) =
                 *(undefined4 *)((int)register0x00000054 + -0xdc);
            *(undefined4 *)((int)register0x00000054 + -0xf4) =
                 *(undefined4 *)((int)register0x00000054 + -0x60);
            *(undefined4 *)((int)register0x00000054 + -0xf0) =
                 *(undefined4 *)((int)register0x00000054 + -0xc0);
            *(undefined4 *)((int)register0x00000054 + -0xec) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xe8) = 0xffffffff;
            FUN_0014f168();
            *(undefined4 *)((int)register0x00000054 + -0x78) =
                 *(undefined4 *)((int)register0x00000054 + -0xe4);
            uVar21 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0xe0),
                              *(undefined4 *)((int)register0x00000054 + -0xe4));
            *(undefined4 *)((int)register0x00000054 + -0xd4) =
                 *(undefined4 *)((int)register0x00000054 + -0xe0);
            iVar3 = *(int *)((int)register0x00000054 + 0x28);
            uVar13 = *(uint *)((int)register0x00000054 + -0xb0);
            iVar2 = *(int *)((int)register0x00000054 + -0x50);
            uVar14 = *(uint *)((int)register0x00000054 + -0xa8);
            uVar9 = 0;
            piVar5 = (int *)0x0;
            for (iVar7 = 0; iVar7 < (int)((ulonglong)uVar21 >> 0x20); iVar7 = iVar7 + 1) {
              *(int *)((int)register0x00000054 + -0x90) = iVar7;
              *(int *)((int)register0x00000054 + -0x38) = iVar2;
              *(uint *)((int)register0x00000054 + -0x94) = uVar13;
              *(uint *)((int)register0x00000054 + -0x98) = uVar14;
              uVar12 = *(undefined4 *)((int)uVar21 + iVar7 * 8);
              uVar11 = *(undefined4 *)((int)uVar21 + iVar7 * 8 + 4);
              if (iVar3 == 2) {
                *(undefined4 *)((int)register0x00000054 + -0xfc) = uVar12;
                *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar11;
                FUN_000b6cc4();
                *(undefined4 *)((int)register0x00000054 + -0xfc) =
                     *(undefined4 *)((int)register0x00000054 + -0xf4);
                FUN_00020ce0();
                piVar16 = *(int **)((int)register0x00000054 + -0xf8);
                uVar21 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0xd4),
                                  *(undefined4 *)((int)register0x00000054 + -0x78));
                iVar3 = *(int *)((int)register0x00000054 + 0x28);
                uVar13 = *(uint *)((int)register0x00000054 + -0x94);
                iVar2 = *(int *)((int)register0x00000054 + -0x38);
                uVar14 = *(uint *)((int)register0x00000054 + -0x98);
                iVar7 = *(int *)((int)register0x00000054 + -0x90);
                uVar9 = DAT_0044daec;
              }
              else {
                piVar16 = piVar5;
                if (iVar3 == 0xe) {
                  *(undefined4 *)((int)register0x00000054 + -0xfc) = uVar12;
                  *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar11;
                  *(undefined4 *)((int)register0x00000054 + -0xf4) = 0x40;
                  FUN_000b5538();
                  *(undefined8 *)((int)register0x00000054 + -0x88) =
                       *(undefined8 *)((int)register0x00000054 + -0xf0);
                  *(undefined4 *)((int)register0x00000054 + -0xfc) =
                       *(undefined4 *)((int)register0x00000054 + -0x88);
                  *(undefined4 *)((int)register0x00000054 + -0xf8) =
                       *(undefined4 *)((int)register0x00000054 + -0x84);
                  FUN_0008f6c0();
                  piVar16 = *(int **)((int)register0x00000054 + -0xf4);
                  uVar21 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0xd4),
                                    *(undefined4 *)((int)register0x00000054 + -0x78));
                  iVar3 = *(int *)((int)register0x00000054 + 0x28);
                  uVar13 = *(uint *)((int)register0x00000054 + -0x94);
                  iVar2 = *(int *)((int)register0x00000054 + -0x38);
                  uVar14 = *(uint *)((int)register0x00000054 + -0x98);
                  iVar7 = *(int *)((int)register0x00000054 + -0x90);
                  uVar9 = DAT_0044dae8;
                }
              }
              *(int **)((int)register0x00000054 + -0x68) = piVar16;
              uVar13 = uVar13 + 1;
              if (uVar14 < uVar13) {
                *(undefined4 *)((int)register0x00000054 + -200) = uVar9;
                *(int *)((int)register0x00000054 + -0xfc) = iVar2;
                *(uint *)((int)register0x00000054 + -0xf8) = uVar13;
                *(uint *)((int)register0x00000054 + -0xf4) = uVar14;
                *(undefined4 *)((int)register0x00000054 + -0xf0) = 1;
                *(undefined4 *)((int)register0x00000054 + -0xec) = DAT_0044daf0;
                FUN_000987f4();
                iVar2 = *(int *)((int)register0x00000054 + -0xe8);
                uVar13 = *(uint *)((int)register0x00000054 + -0xe4);
                uVar14 = *(uint *)((int)register0x00000054 + -0xe0);
                uVar21 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0xd4),
                                  *(undefined4 *)((int)register0x00000054 + -0x78));
                iVar3 = *(int *)((int)register0x00000054 + 0x28);
                iVar7 = *(int *)((int)register0x00000054 + -0x90);
                uVar9 = *(undefined4 *)((int)register0x00000054 + -200);
                piVar16 = *(int **)((int)register0x00000054 + -0x68);
              }
              *(undefined4 *)(iVar2 + (uVar13 - 1) * 8) = uVar9;
              iVar10 = iVar2 + (uVar13 - 1) * 8;
              piVar5 = piVar16;
              if (*DAT_0044dad4 != 0) {
                uVar21 = FUN_0009db64();
                piVar5 = *(int **)((int)register0x00000054 + -0x68);
                *piVar16 = (int)piVar5;
                piVar16[1] = *(int *)(iVar10 + 4);
                iVar3 = extraout_r2_00;
                uVar13 = extraout_r3_01;
              }
              *(int **)(iVar10 + 4) = piVar5;
            }
LAB_0044d828:
            puVar6 = *(undefined4 **)((int)register0x00000054 + -0x6c);
            iVar3 = *(int *)((int)register0x00000054 + -0x8c) + 1;
          }
          *(int *)((int)register0x00000054 + -0xfc) = iVar2;
          *(uint *)((int)register0x00000054 + -0xf8) = uVar13;
          *(uint *)((int)register0x00000054 + -0xf4) = uVar14;
          FUN_0008f820();
          *(undefined4 *)((int)register0x00000054 + 0x30) = DAT_0044dae4;
          *(undefined4 *)((int)register0x00000054 + 0x34) =
               *(undefined4 *)((int)register0x00000054 + -0xf0);
          return;
        }
        iVar2 = *(int *)((int)register0x00000054 + 4);
        piVar5 = *(int **)(iVar2 + 4);
        uVar11 = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x58) = uVar11;
        uVar9 = *(undefined4 *)(iVar2 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0xb8) = uVar9;
        iVar2 = *piVar5;
        *(int *)((int)register0x00000054 + -0x44) = iVar2;
        uVar12 = *(undefined4 *)(iVar2 + 0xc);
        *(uint *)((int)register0x00000054 + -0xfc) = DAT_0044dab0;
        *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar12;
        *(undefined4 *)((int)register0x00000054 + -0xf4) = uVar11;
        *(undefined4 *)((int)register0x00000054 + -0xf0) = uVar9;
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0xe8) == '\0') {
          iVar3 = 0;
          iVar2 = 0;
          bVar19 = true;
        }
        else {
          *(char *)((int)register0x00000054 + -0xd6) = *(char *)((int)register0x00000054 + -0xe8);
          uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x44) + 0xc);
          *(uint *)((int)register0x00000054 + -0xfc) = DAT_0044dab0;
          *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar9;
          *(undefined4 *)((int)register0x00000054 + -0xf4) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          *(undefined4 *)((int)register0x00000054 + -0xf0) =
               *(undefined4 *)((int)register0x00000054 + -0xb8);
          FUN_00025f60();
          iVar3 = **(int **)((int)register0x00000054 + -0xec);
          iVar2 = (*(int **)((int)register0x00000054 + -0xec))[1];
          bVar19 = *(char *)((int)register0x00000054 + -0xd6) == '\0';
        }
        puVar6 = DAT_0044dab8;
        if (bVar19) goto LAB_0044d4b0;
        uVar20 = iVar3 == DAT_0044dab4;
        if ((bool)uVar20) {
          *(int *)((int)register0x00000054 + -0xfc) = DAT_0044dab4;
          *(int *)((int)register0x00000054 + -0xf8) = iVar2;
          *(undefined4 *)((int)register0x00000054 + -0xf4) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0xf0) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093560();
          puVar6 = DAT_0044dab8;
          if (*(char *)((int)register0x00000054 + -0xe8) != '\0') {
            uVar9 = (*(undefined4 **)((int)register0x00000054 + -0xec))[1];
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 **(undefined4 **)((int)register0x00000054 + -0xec);
            *(undefined4 *)((int)register0x00000054 + -0x24) = uVar9;
            puVar6 = (undefined4 *)((int)register0x00000054 + -0x28);
          }
LAB_0044d4b0:
          uVar9 = puVar6[1];
          *(undefined4 *)((int)register0x00000054 + -0xfc) = *puVar6;
          *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar9;
          FUN_00151ce4();
          *(undefined4 *)((int)register0x00000054 + -0xfc) =
               *(undefined4 *)((int)register0x00000054 + -0xf4);
          *(undefined4 *)((int)register0x00000054 + -0xf8) =
               *(undefined4 *)((int)register0x00000054 + -0xf0);
          *(undefined4 *)((int)register0x00000054 + -0xf4) = DAT_0044dabc;
          *(undefined4 *)((int)register0x00000054 + -0xf0) = 1;
          *(undefined4 *)((int)register0x00000054 + -0xec) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xe8) = 0xffffffff;
          FUN_0014f168();
          iVar3 = *(int *)((int)register0x00000054 + -0xe4);
          *(int *)((int)register0x00000054 + -0x70) = iVar3;
          iVar7 = *(int *)((int)register0x00000054 + -0xe0);
          *(int *)((int)register0x00000054 + -0xcc) = iVar7;
          iVar10 = 0;
          uVar21 = 0;
          iVar2 = DAT_0044dac0;
          while( true ) {
            if (iVar7 <= iVar10) break;
            *(int *)((int)register0x00000054 + -0xa4) = (int)((ulonglong)uVar21 >> 0x20);
            *(int *)((int)register0x00000054 + -0xac) = (int)uVar21;
            *(int *)((int)register0x00000054 + -0x4c) = iVar2;
            *(int *)((int)register0x00000054 + -0x8c) = iVar10;
            uVar9 = *(undefined4 *)(iVar3 + iVar10 * 8 + 4);
            *(undefined4 *)((int)register0x00000054 + -0xfc) = *(undefined4 *)(iVar3 + iVar10 * 8);
            *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar9;
            *(undefined4 *)((int)register0x00000054 + -0xf4) = DAT_0044de40;
            *(undefined4 *)((int)register0x00000054 + -0xf0) = 1;
            *(undefined4 *)((int)register0x00000054 + -0xec) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xe8) = 0xffffffff;
            FUN_0014f168(iVar3);
            *(undefined4 *)((int)register0x00000054 + -0x74) =
                 *(undefined4 *)((int)register0x00000054 + -0xe4);
            uVar21 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0xe0),
                              *(undefined4 *)((int)register0x00000054 + -0xe4));
            *(undefined4 *)((int)register0x00000054 + -0xd0) =
                 *(undefined4 *)((int)register0x00000054 + -0xe0);
            iVar2 = *(int *)((int)register0x00000054 + 0x28);
            iVar3 = 0;
            uVar13 = 0;
            uVar15 = 0;
            uVar14 = DAT_0044de44;
            while( true ) {
              *(uint *)((int)register0x00000054 + -0x9c) = uVar13;
              *(uint *)((int)register0x00000054 + -0xa0) = uVar15;
              *(uint *)((int)register0x00000054 + -0x3c) = uVar14;
              if ((int)((ulonglong)uVar21 >> 0x20) <= iVar3) break;
              *(int *)((int)register0x00000054 + -0x90) = iVar3;
              uVar11 = *(undefined4 *)((int)uVar21 + iVar3 * 8);
              uVar9 = *(undefined4 *)((int)uVar21 + iVar3 * 8 + 4);
              if (iVar2 == 2) {
                *(undefined4 *)((int)register0x00000054 + -0xfc) = uVar11;
                *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar9;
                FUN_00151ce4();
                *(undefined4 *)((int)register0x00000054 + -0xfc) =
                     *(undefined4 *)((int)register0x00000054 + -0xf4);
                *(undefined4 *)((int)register0x00000054 + -0xf8) =
                     *(undefined4 *)((int)register0x00000054 + -0xf0);
                FUN_000b6cc4();
                *(undefined4 *)((int)register0x00000054 + -0xfc) =
                     *(undefined4 *)((int)register0x00000054 + -0xf4);
                FUN_00020ce0();
                uVar11 = *(undefined4 *)((int)register0x00000054 + -0xf8);
                iVar2 = *(int *)((int)register0x00000054 + 0x28);
                iVar3 = *(int *)((int)register0x00000054 + -0x90);
                uVar13 = *(uint *)((int)register0x00000054 + -0x9c);
                uVar14 = *(uint *)((int)register0x00000054 + -0x3c);
                uVar15 = *(uint *)((int)register0x00000054 + -0xa0);
                uVar21 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0xd0),
                                  *(undefined4 *)((int)register0x00000054 + -0x74));
                uVar9 = DAT_0044de58;
              }
              else if (iVar2 == 0xe) {
                *(undefined4 *)((int)register0x00000054 + -0xfc) = uVar11;
                *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar9;
                FUN_00151ce4();
                *(undefined4 *)((int)register0x00000054 + -0xfc) =
                     *(undefined4 *)((int)register0x00000054 + -0xf4);
                *(undefined4 *)((int)register0x00000054 + -0xf8) =
                     *(undefined4 *)((int)register0x00000054 + -0xf0);
                *(undefined4 *)((int)register0x00000054 + -0xf4) = 0x40;
                FUN_000b5538();
                *(undefined8 *)((int)register0x00000054 + -0x80) =
                     *(undefined8 *)((int)register0x00000054 + -0xf0);
                *(undefined4 *)((int)register0x00000054 + -0xfc) =
                     *(undefined4 *)((int)register0x00000054 + -0x80);
                *(undefined4 *)((int)register0x00000054 + -0xf8) =
                     *(undefined4 *)((int)register0x00000054 + -0x7c);
                FUN_0008f6c0();
                uVar11 = *(undefined4 *)((int)register0x00000054 + -0xf4);
                iVar2 = *(int *)((int)register0x00000054 + 0x28);
                iVar3 = *(int *)((int)register0x00000054 + -0x90);
                uVar13 = *(uint *)((int)register0x00000054 + -0x9c);
                uVar14 = *(uint *)((int)register0x00000054 + -0x3c);
                uVar15 = *(uint *)((int)register0x00000054 + -0xa0);
                uVar21 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0xd0),
                                  *(undefined4 *)((int)register0x00000054 + -0x74));
                uVar9 = DAT_0044de54;
              }
              else {
                uVar11 = 0;
                uVar9 = 0;
              }
              uVar15 = uVar15 + 1;
              if (uVar13 < uVar15) {
                *(undefined4 *)((int)register0x00000054 + -100) = uVar11;
                *(undefined4 *)((int)register0x00000054 + -0xc4) = uVar9;
                *(uint *)((int)register0x00000054 + -0xfc) = uVar14;
                *(uint *)((int)register0x00000054 + -0xf8) = uVar15;
                *(uint *)((int)register0x00000054 + -0xf4) = uVar13;
                *(undefined4 *)((int)register0x00000054 + -0xf0) = 1;
                *(undefined4 *)((int)register0x00000054 + -0xec) = DAT_0044de3c;
                FUN_000987f4();
                uVar14 = *(uint *)((int)register0x00000054 + -0xe8);
                uVar15 = *(uint *)((int)register0x00000054 + -0xe4);
                uVar13 = *(uint *)((int)register0x00000054 + -0xe0);
                uVar21 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0xd0),
                                  *(undefined4 *)((int)register0x00000054 + -0x74));
                iVar2 = *(int *)((int)register0x00000054 + 0x28);
                iVar3 = *(int *)((int)register0x00000054 + -0x90);
                uVar11 = *(undefined4 *)((int)register0x00000054 + -100);
                uVar9 = *(undefined4 *)((int)register0x00000054 + -0xc4);
              }
              *(undefined4 *)(uVar14 + (uVar15 - 1) * 8) = uVar9;
              puVar6 = (undefined4 *)*DAT_0044de4c;
              iVar7 = uVar14 + (uVar15 - 1) * 8;
              if (puVar6 != (undefined4 *)0x0) {
                uVar21 = FUN_0009db64();
                *puVar6 = uVar11;
                puVar6[1] = *(undefined4 *)(iVar7 + 4);
                iVar2 = extraout_r2_01;
                iVar3 = extraout_r3_04;
              }
              *(undefined4 *)(iVar7 + 4) = uVar11;
              iVar3 = iVar3 + 1;
            }
            uVar4 = *(int *)((int)register0x00000054 + -0xac) + 1;
            uVar8 = *(uint *)((int)register0x00000054 + -0xa4);
            if (uVar8 < uVar4) {
              *(undefined4 *)((int)register0x00000054 + -0xfc) =
                   *(undefined4 *)((int)register0x00000054 + -0x4c);
              *(uint *)((int)register0x00000054 + -0xf8) = uVar4;
              *(uint *)((int)register0x00000054 + -0xf4) = uVar8;
              *(undefined4 *)((int)register0x00000054 + -0xf0) = 1;
              *(undefined4 *)((int)register0x00000054 + -0xec) = DAT_0044de48;
              FUN_000987f4();
              iVar2 = *(int *)((int)register0x00000054 + -0xe8);
              uVar4 = *(uint *)((int)register0x00000054 + -0xe4);
              uVar8 = *(uint *)((int)register0x00000054 + -0xe0);
              uVar14 = *(uint *)((int)register0x00000054 + -0x3c);
              uVar15 = *(uint *)((int)register0x00000054 + -0xa0);
              uVar13 = *(uint *)((int)register0x00000054 + -0x9c);
            }
            else {
              iVar2 = *(int *)((int)register0x00000054 + -0x4c);
            }
            uVar21 = CONCAT44(uVar8,uVar4);
            unaff_r7 = uVar4 * 0xc + -0xc;
            puVar17 = (uint *)(iVar2 + unaff_r7);
            puVar17[1] = uVar15;
            puVar17[2] = uVar13;
            if (*DAT_0044de4c != 0) {
              uVar21 = FUN_0009db64();
              *puVar17 = uVar14;
              puVar17[1] = *(uint *)(extraout_r3_03 + unaff_r7);
              iVar2 = extraout_r3_03;
            }
LAB_0044db08:
            *(uint *)(iVar2 + unaff_r7) = uVar14;
            iVar10 = *(int *)((int)register0x00000054 + -0x8c) + 1;
            iVar3 = *(int *)((int)register0x00000054 + -0x70);
            iVar7 = *(int *)((int)register0x00000054 + -0xcc);
          }
          *(int *)((int)register0x00000054 + -0xfc) = iVar2;
          *(undefined8 *)((int)register0x00000054 + -0xf8) = uVar21;
          FUN_0008f820();
          *(undefined4 *)((int)register0x00000054 + 0x30) = DAT_0044de50;
          *(undefined4 *)((int)register0x00000054 + 0x34) =
               *(undefined4 *)((int)register0x00000054 + -0xf0);
          return;
        }
        *(int *)((int)register0x00000054 + -0xfc) = iVar3;
        *(int *)((int)register0x00000054 + -0xf8) = DAT_0044dab4;
        *(undefined4 *)((int)register0x00000054 + -0xf4) = DAT_0044de3c;
        FUN_000209b4();
        iVar2 = extraout_r1;
        iVar7 = extraout_r2_02;
      }
      else {
        uVar20 = 0;
        iVar7 = DAT_0044dab4;
        if (iVar2 == DAT_0044dab4) {
          *(int *)((int)register0x00000054 + -0xfc) = DAT_0044dab4;
          *(int *)((int)register0x00000054 + -0xf8) = iVar3;
          *(undefined4 *)((int)register0x00000054 + -0xf4) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0xf0) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093560();
          cVar1 = *(char *)((int)register0x00000054 + -0xe8);
          goto LAB_0044d374;
        }
      }
      *(int *)((int)register0x00000054 + -0xfc) = iVar2;
      *(int *)((int)register0x00000054 + -0xf8) = iVar7;
      *(undefined4 *)((int)register0x00000054 + -0xf4) = DAT_0044de3c;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x100);
      if ((bool)uVar20) {
        register0x00000054 = (BADSPACEBASE *)puVar18;
      }
    }
    unaff_lr = 0x44de34;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Getlist @ 0044de5c (size 1516) */

void k3c_internal_pkg_printer___ConfigWrapper__Getlist(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined *extraout_r1;
  undefined4 uVar7;
  undefined4 extraout_r2;
  undefined4 *puVar8;
  int extraout_r2_00;
  int extraout_r2_01;
  undefined *extraout_r2_02;
  undefined *extraout_r2_03;
  undefined4 uVar9;
  undefined4 extraout_r3;
  undefined *extraout_r3_00;
  undefined *extraout_r3_01;
  undefined *extraout_r3_02;
  undefined4 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  bool bVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  
  do {
    puVar5 = PTR_DAT_0044e44c;
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -8)) {
      puVar13 = (undefined1 *)((int)register0x00000054 + -0x88);
      *(undefined4 *)((int)register0x00000054 + -0x88) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      piVar3 = *(int **)(iVar2 + 4);
      uVar7 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar7;
      uVar9 = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x54) = uVar9;
      iVar2 = *piVar3;
      *(int *)((int)register0x00000054 + -0x30) = iVar2;
      uVar10 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0044e44c;
      *(undefined4 *)((int)register0x00000054 + -0x80) = uVar10;
      *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0x78) = uVar9;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x70) == '\0') {
        puVar4 = (undefined *)0x0;
        uVar7 = 0;
        bVar14 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0x5e) = *(char *)((int)register0x00000054 + -0x70);
        uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x30) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0044e44c;
        *(undefined4 *)((int)register0x00000054 + -0x80) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x7c) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        FUN_00025f60();
        puVar4 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x74);
        uVar7 = (*(undefined4 **)((int)register0x00000054 + -0x74))[1];
        bVar14 = *(char *)((int)register0x00000054 + -0x5e) == '\0';
      }
      if (bVar14) {
        cVar1 = '\0';
LAB_0044df3c:
        if (cVar1 == '\0') {
          puVar4 = *(undefined **)((int)register0x00000054 + 0x10);
          if (puVar4 == PTR_DAT_0044e45c) {
            bVar14 = true;
          }
          else {
            bVar14 = false;
            if (puVar4 == PTR_DAT_0044e460) {
              bVar14 = true;
            }
          }
          if (bVar14) {
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x2c));
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x80) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0044e470;
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            puVar11 = *(undefined **)(*(int *)((int)register0x00000054 + 4) + 0xc);
            uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined **)((int)register0x00000054 + -0x84) = puVar11;
            *(undefined4 *)((int)register0x00000054 + -0x80) = uVar7;
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0044e470;
            *(undefined4 *)((int)register0x00000054 + -0x20) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0044e474;
            *(undefined4 *)((int)register0x00000054 + -0x80) = 0x2d;
            *(undefined1 **)((int)register0x00000054 + -0x7c) =
                 (undefined1 *)((int)register0x00000054 + -0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x78) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x74) = 2;
            FUN_0013b72c();
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + -0x70);
            *(undefined4 *)((int)register0x00000054 + -0x80) =
                 *(undefined4 *)((int)register0x00000054 + -0x6c);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0044e470;
            *(undefined4 *)((int)register0x00000054 + -0x80) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            uVar16 = FUN_00095b00();
            iVar2 = extraout_r2_00;
            puVar4 = extraout_r3_00;
            goto LAB_0044e2b8;
          }
          if ((*(char *)((int)register0x00000054 + 0x24) != '\0') && (puVar4 != (undefined *)0x0)) {
            uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x80) = uVar7;
            FUN_00150c8c();
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            *(undefined4 *)((int)register0x00000054 + -0x48) =
                 *(undefined4 *)((int)register0x00000054 + -0x78);
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x80) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_00150c8c();
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x1c),
                         *(undefined4 *)((int)register0x00000054 + -0x78),
                         *(undefined4 *)((int)register0x00000054 + -0x7c));
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -0x48);
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0x10) = extraout_r2;
            *(undefined4 *)((int)register0x00000054 + -0x14) = extraout_r3;
            *(undefined1 **)((int)register0x00000054 + -0x84) =
                 (undefined1 *)((int)register0x00000054 + -0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x80) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 2;
            *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_0044e464;
            *(undefined4 *)((int)register0x00000054 + -0x74) = 1;
            FUN_0014f8fc();
            uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
            *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0044e44c;
            *(undefined4 *)((int)register0x00000054 + -0x80) = uVar7;
            *(undefined4 *)((int)register0x00000054 + -0x7c) =
                 *(undefined4 *)((int)register0x00000054 + -0x70);
            *(undefined4 *)((int)register0x00000054 + -0x78) =
                 *(undefined4 *)((int)register0x00000054 + -0x6c);
            FUN_00093a08();
            uVar16 = CONCAT44(*(undefined4 *)((int)register0x00000054 + 0x10),
                              *(undefined4 **)((int)register0x00000054 + -0x74));
            **(undefined4 **)((int)register0x00000054 + -0x74) =
                 *(undefined4 *)((int)register0x00000054 + 0x10);
            if (*(int *)PTR_DAT_0044e468 == 0) {
              puVar8 = *(undefined4 **)((int)register0x00000054 + 0x14);
            }
            else {
              uVar16 = FUN_0009db64();
              puVar8 = *(undefined4 **)((int)register0x00000054 + 0x14);
              *unaff_r8 = puVar8;
              unaff_r8[1] = *(undefined4 *)((int)uVar16 + 4);
            }
            *(undefined4 **)((int)uVar16 + 4) = puVar8;
            if ((undefined *)((ulonglong)uVar16 >> 0x20) == PTR_DAT_0044e46c) {
              uVar7 = puVar8[1];
              uVar9 = puVar8[2];
              *(undefined4 *)((int)register0x00000054 + 0x28) = *puVar8;
              *(undefined4 *)((int)register0x00000054 + 0x2c) = uVar7;
              *(undefined4 *)((int)register0x00000054 + 0x30) = uVar9;
              return;
            }
          }
          *(undefined **)((int)register0x00000054 + 0x28) = PTR_DAT_0044e458;
          *(undefined4 *)((int)register0x00000054 + 0x2c) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x30) = 0;
          return;
        }
        iVar2 = *(int *)((int)register0x00000054 + 4);
        piVar3 = *(int **)(iVar2 + 4);
        uVar9 = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x40) = uVar9;
        uVar7 = *(undefined4 *)(iVar2 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x58) = uVar7;
        iVar2 = *piVar3;
        *(int *)((int)register0x00000054 + -0x34) = iVar2;
        uVar10 = *(undefined4 *)(iVar2 + 0xc);
        *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0044e44c;
        *(undefined4 *)((int)register0x00000054 + -0x80) = uVar10;
        *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar9;
        *(undefined4 *)((int)register0x00000054 + -0x78) = uVar7;
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x70) == '\0') {
          puVar5 = (undefined *)0x0;
          uVar7 = 0;
          bVar14 = true;
        }
        else {
          *(char *)((int)register0x00000054 + -0x5d) = *(char *)((int)register0x00000054 + -0x70);
          uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x34) + 0xc);
          *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0044e44c;
          *(undefined4 *)((int)register0x00000054 + -0x80) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + -0x40);
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          FUN_00025f60();
          puVar5 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x74);
          uVar7 = (*(undefined4 **)((int)register0x00000054 + -0x74))[1];
          bVar14 = *(char *)((int)register0x00000054 + -0x5d) == '\0';
        }
        puVar8 = (undefined4 *)PTR_SUB_0044e454;
        if (bVar14) goto LAB_0044e030;
        uVar15 = puVar5 == PTR_DAT_0044e450;
        if ((bool)uVar15) {
          *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0044e450;
          *(undefined4 *)((int)register0x00000054 + -0x80) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093560();
          puVar8 = (undefined4 *)PTR_SUB_0044e454;
          if (*(char *)((int)register0x00000054 + -0x70) != '\0') {
            uVar7 = (*(undefined4 **)((int)register0x00000054 + -0x74))[1];
            *(undefined4 *)((int)register0x00000054 + -8) =
                 **(undefined4 **)((int)register0x00000054 + -0x74);
            *(undefined4 *)((int)register0x00000054 + -4) = uVar7;
            puVar8 = (undefined4 *)((int)register0x00000054 + -8);
          }
LAB_0044e030:
          uVar7 = puVar8[1];
          *(undefined4 *)((int)register0x00000054 + -0x84) = *puVar8;
          *(undefined4 *)((int)register0x00000054 + -0x80) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + 0x18);
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)((int)register0x00000054 + 0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x74) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x70) = 0xffffffff;
          FUN_0014f168();
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -0x6c);
          uVar16 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x68),
                            *(undefined4 *)((int)register0x00000054 + -0x6c));
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          puVar4 = (undefined *)0x0;
          puVar5 = (undefined *)0x0;
          puVar11 = PTR_DAT_0044e458;
          for (iVar2 = 0; iVar2 < (int)((ulonglong)uVar16 >> 0x20); iVar2 = iVar2 + 1) {
            puVar5 = puVar5 + 1;
            unaff_r7 = *(undefined4 *)((int)uVar16 + iVar2 * 8);
            uVar7 = *(undefined4 *)((int)uVar16 + iVar2 * 8 + 4);
            if (puVar4 < puVar5) {
              *(int *)((int)register0x00000054 + -0x48) = iVar2;
              *(undefined4 *)((int)register0x00000054 + -0x38) = unaff_r7;
              *(undefined4 *)((int)register0x00000054 + -0x50) = uVar7;
              *(undefined **)((int)register0x00000054 + -0x84) = puVar11;
              *(undefined **)((int)register0x00000054 + -0x80) = puVar5;
              *(undefined **)((int)register0x00000054 + -0x7c) = puVar4;
              *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
              *(undefined **)((int)register0x00000054 + -0x74) = PTR_DAT_0044e470;
              FUN_000987f4();
              puVar11 = *(undefined **)((int)register0x00000054 + -0x70);
              puVar5 = *(undefined **)((int)register0x00000054 + -0x6c);
              puVar4 = *(undefined **)((int)register0x00000054 + -0x68);
              uVar16 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x5c),
                                *(undefined4 *)((int)register0x00000054 + -0x44));
              iVar2 = *(int *)((int)register0x00000054 + -0x48);
              uVar7 = *(undefined4 *)((int)register0x00000054 + -0x50);
              unaff_r7 = *(undefined4 *)((int)register0x00000054 + -0x38);
            }
            unaff_r8 = (undefined4 *)(puVar5 + -1);
            *(undefined4 *)(puVar11 + (int)unaff_r8 * 8 + 4) = uVar7;
            if (*(int *)PTR_DAT_0044e468 != 0) {
              uVar16 = FUN_0009db64();
              *unaff_r8 = unaff_r7;
              *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar11 + (int)unaff_r8 * 8);
              iVar2 = extraout_r2_01;
              puVar4 = extraout_r3_01;
            }
LAB_0044e2b8:
            *(undefined4 *)(puVar11 + (int)unaff_r8 * 8) = unaff_r7;
          }
          iVar2 = *(int *)((int)register0x00000054 + 0x20);
          iVar6 = 0;
          while (iVar6 < iVar2 - (int)puVar5) {
            puVar5 = puVar5 + 1;
            if (puVar4 < puVar5) {
              *(int *)((int)register0x00000054 + -0x4c) = iVar6;
              *(undefined **)((int)register0x00000054 + -0x84) = puVar11;
              *(undefined **)((int)register0x00000054 + -0x80) = puVar5;
              *(undefined **)((int)register0x00000054 + -0x7c) = puVar4;
              *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
              *(undefined **)((int)register0x00000054 + -0x74) = PTR_DAT_0044e470;
              FUN_000987f4();
              puVar11 = *(undefined **)((int)register0x00000054 + -0x70);
              puVar5 = *(undefined **)((int)register0x00000054 + -0x6c);
              puVar4 = *(undefined **)((int)register0x00000054 + -0x68);
              iVar2 = *(int *)((int)register0x00000054 + 0x20);
              iVar6 = *(int *)((int)register0x00000054 + -0x4c);
            }
            uVar16 = CONCAT44(iVar6,iVar2);
            puVar12 = puVar5 + -1;
            *(undefined4 *)(puVar11 + (int)puVar12 * 8 + 4) = 0;
            if (*(int *)PTR_DAT_0044e468 != 0) {
              uVar7 = *(undefined4 *)(puVar11 + (int)puVar12 * 8);
              uVar16 = FUN_0009db54();
              *unaff_r8 = uVar7;
              puVar5 = extraout_r2_02;
              puVar4 = extraout_r3_02;
            }
            iVar2 = (int)uVar16;
            *(undefined4 *)(puVar11 + (int)puVar12 * 8) = 0;
            iVar6 = (int)((ulonglong)uVar16 >> 0x20) + 1;
          }
          *(undefined **)((int)register0x00000054 + 0x28) = puVar11;
          *(undefined **)((int)register0x00000054 + 0x2c) = puVar5;
          *(undefined **)((int)register0x00000054 + 0x30) = puVar4;
          return;
        }
        *(undefined **)((int)register0x00000054 + -0x84) = puVar5;
        *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_0044e450;
        *(undefined **)((int)register0x00000054 + -0x7c) = PTR_DAT_0044e478;
        FUN_000209b4();
        puVar4 = extraout_r1;
        puVar11 = extraout_r2_03;
      }
      else {
        uVar15 = 0;
        puVar11 = PTR_DAT_0044e450;
        if (puVar4 == PTR_DAT_0044e450) {
          *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0044e450;
          *(undefined4 *)((int)register0x00000054 + -0x80) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093560();
          cVar1 = *(char *)((int)register0x00000054 + -0x70);
          goto LAB_0044df3c;
        }
      }
      *(undefined **)((int)register0x00000054 + -0x84) = puVar4;
      *(undefined **)((int)register0x00000054 + -0x80) = puVar11;
      *(undefined **)((int)register0x00000054 + -0x7c) = PTR_DAT_0044e478;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x88);
      if ((bool)uVar15) {
        register0x00000054 = (BADSPACEBASE *)puVar13;
      }
    }
    unaff_lr = 0x44e444;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Getintlist @ 0044e47c (size 1636) */

void k3c_internal_pkg_printer___ConfigWrapper__Getintlist(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  int extraout_r1;
  undefined4 uVar7;
  int iVar8;
  undefined4 extraout_r2;
  undefined4 *puVar9;
  uint extraout_r2_00;
  int extraout_r2_01;
  undefined4 uVar10;
  uint uVar11;
  undefined4 extraout_r3;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar14;
  undefined4 unaff_lr;
  bool bVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x18)) {
      puVar14 = (undefined1 *)((int)register0x00000054 + -0x98);
      *(undefined4 *)((int)register0x00000054 + -0x98) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      piVar5 = *(int **)(iVar2 + 4);
      uVar7 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x44) = uVar7;
      uVar10 = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -100) = uVar10;
      iVar2 = *piVar5;
      *(int *)((int)register0x00000054 + -0x38) = iVar2;
      uVar12 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x94) = DAT_0044eae4;
      *(undefined4 *)((int)register0x00000054 + -0x90) = uVar12;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0x88) = uVar10;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x80) == '\0') {
        iVar2 = 0;
        iVar3 = 0;
        bVar15 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0x6e) = *(char *)((int)register0x00000054 + -0x80);
        uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x38) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x94) = DAT_0044eae4;
        *(undefined4 *)((int)register0x00000054 + -0x90) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)((int)register0x00000054 + -100);
        FUN_00025f60();
        iVar2 = **(int **)((int)register0x00000054 + -0x84);
        iVar3 = (*(int **)((int)register0x00000054 + -0x84))[1];
        bVar15 = *(char *)((int)register0x00000054 + -0x6e) == '\0';
      }
      if (bVar15) {
        cVar1 = '\0';
LAB_0044e55c:
        if (cVar1 == '\0') {
          iVar2 = *(int *)((int)register0x00000054 + 0x10);
          if (iVar2 == DAT_0044eaf4) {
            bVar15 = true;
          }
          else {
            bVar15 = false;
            if (iVar2 == DAT_0044eaf8) {
              bVar15 = true;
            }
          }
          if (bVar15) {
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x2c));
            *(undefined4 *)((int)register0x00000054 + -0x94) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x90) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_0044eb08;
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x8c);
            iVar2 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(int *)((int)register0x00000054 + -0x94) = iVar2;
            *(undefined4 *)((int)register0x00000054 + -0x90) = uVar7;
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0044eb08;
            *(undefined4 *)((int)register0x00000054 + -0x20) =
                 *(undefined4 *)((int)register0x00000054 + -0x8c);
            *(undefined4 *)((int)register0x00000054 + -0x94) = DAT_0044eb0c;
            *(undefined4 *)((int)register0x00000054 + -0x90) = 0x2d;
            *(undefined1 **)((int)register0x00000054 + -0x8c) =
                 (undefined1 *)((int)register0x00000054 + -0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x88) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x84) = 2;
            FUN_0013b72c();
            *(undefined4 *)((int)register0x00000054 + -0x94) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            *(undefined4 *)((int)register0x00000054 + -0x90) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x94) = DAT_0044eb08;
            *(undefined4 *)((int)register0x00000054 + -0x90) =
                 *(undefined4 *)((int)register0x00000054 + -0x8c);
            uVar13 = FUN_00095b00();
            uVar11 = extraout_r2_00;
            goto LAB_0044e8e4;
          }
          if ((*(char *)((int)register0x00000054 + 0x24) == '\0') || (iVar2 == 0)) {
            puVar9 = *(undefined4 **)((int)register0x00000054 + 0x14);
          }
          else {
            uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x94) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x90) = uVar7;
            FUN_00150c8c();
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x8c);
            *(undefined4 *)((int)register0x00000054 + -0x50) =
                 *(undefined4 *)((int)register0x00000054 + -0x88);
            *(undefined4 *)((int)register0x00000054 + -0x94) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x90) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_00150c8c();
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x1c),
                         *(undefined4 *)((int)register0x00000054 + -0x88),
                         *(undefined4 *)((int)register0x00000054 + -0x8c));
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0x10) = extraout_r2;
            *(undefined4 *)((int)register0x00000054 + -0x14) = extraout_r3;
            *(undefined1 **)((int)register0x00000054 + -0x94) =
                 (undefined1 *)((int)register0x00000054 + -0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x90) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x8c) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0044eafc;
            *(undefined4 *)((int)register0x00000054 + -0x84) = 1;
            FUN_0014f8fc();
            uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
            *(undefined4 *)((int)register0x00000054 + -0x94) = DAT_0044eae4;
            *(undefined4 *)((int)register0x00000054 + -0x90) = uVar7;
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            FUN_00093a08();
            uVar17 = CONCAT44(*(undefined4 *)((int)register0x00000054 + 0x10),
                              *(undefined4 **)((int)register0x00000054 + -0x84));
            **(undefined4 **)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + 0x10);
            if (*DAT_0044eb00 == 0) {
              puVar9 = *(undefined4 **)((int)register0x00000054 + 0x14);
            }
            else {
              uVar17 = FUN_0009db64();
              puVar9 = *(undefined4 **)((int)register0x00000054 + 0x14);
              *unaff_r8 = puVar9;
              unaff_r8[1] = *(undefined4 *)((int)uVar17 + 4);
            }
            iVar2 = (int)((ulonglong)uVar17 >> 0x20);
            *(undefined4 **)((int)uVar17 + 4) = puVar9;
          }
          if (iVar2 != DAT_0044eb04) {
            *(undefined4 *)((int)register0x00000054 + 0x28) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x2c) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x30) = 0;
            return;
          }
          uVar7 = puVar9[1];
          uVar10 = puVar9[2];
          *(undefined4 *)((int)register0x00000054 + 0x28) = *puVar9;
          *(undefined4 *)((int)register0x00000054 + 0x2c) = uVar7;
          *(undefined4 *)((int)register0x00000054 + 0x30) = uVar10;
          return;
        }
        iVar2 = *(int *)((int)register0x00000054 + 4);
        piVar5 = *(int **)(iVar2 + 4);
        uVar10 = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x48) = uVar10;
        uVar7 = *(undefined4 *)(iVar2 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x68) = uVar7;
        iVar2 = *piVar5;
        *(int *)((int)register0x00000054 + -0x3c) = iVar2;
        uVar12 = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x94) = DAT_0044eae4;
        *(undefined4 *)((int)register0x00000054 + -0x90) = uVar12;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar10;
        *(undefined4 *)((int)register0x00000054 + -0x88) = uVar7;
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x80) == '\0') {
          iVar3 = 0;
          iVar2 = 0;
          bVar15 = true;
        }
        else {
          *(char *)((int)register0x00000054 + -0x6d) = *(char *)((int)register0x00000054 + -0x80);
          uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x3c) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x94) = DAT_0044eae4;
          *(undefined4 *)((int)register0x00000054 + -0x90) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          FUN_00025f60();
          iVar3 = **(int **)((int)register0x00000054 + -0x84);
          iVar2 = (*(int **)((int)register0x00000054 + -0x84))[1];
          bVar15 = *(char *)((int)register0x00000054 + -0x6d) == '\0';
        }
        puVar9 = DAT_0044eaec;
        if (bVar15) goto LAB_0044e650;
        uVar16 = iVar3 == DAT_0044eae8;
        if ((bool)uVar16) {
          *(int *)((int)register0x00000054 + -0x94) = DAT_0044eae8;
          *(int *)((int)register0x00000054 + -0x90) = iVar2;
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093560();
          puVar9 = DAT_0044eaec;
          if (*(char *)((int)register0x00000054 + -0x80) != '\0') {
            uVar7 = (*(undefined4 **)((int)register0x00000054 + -0x84))[1];
            *(undefined4 *)((int)register0x00000054 + -8) =
                 **(undefined4 **)((int)register0x00000054 + -0x84);
            *(undefined4 *)((int)register0x00000054 + -4) = uVar7;
            puVar9 = (undefined4 *)((int)register0x00000054 + -8);
          }
LAB_0044e650:
          uVar7 = puVar9[1];
          *(undefined4 *)((int)register0x00000054 + -0x94) = *puVar9;
          *(undefined4 *)((int)register0x00000054 + -0x90) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + 0x18);
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + 0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 0xffffffff;
          FUN_0014f168();
          iVar3 = *(int *)((int)register0x00000054 + -0x7c);
          *(int *)((int)register0x00000054 + -0x4c) = iVar3;
          iVar6 = *(int *)((int)register0x00000054 + -0x78);
          *(int *)((int)register0x00000054 + -0x6c) = iVar6;
          uVar11 = 0;
          uVar13 = 0;
          iVar8 = 0;
          iVar2 = DAT_0044eaf0;
          while (iVar8 < iVar6) {
            *(int *)((int)register0x00000054 + -0x50) = iVar8;
            *(int *)((int)register0x00000054 + -0x40) = iVar2;
            *(uint *)((int)register0x00000054 + -0x5c) = uVar13;
            *(uint *)((int)register0x00000054 + -0x58) = uVar11;
            uVar7 = *(undefined4 *)(iVar3 + iVar8 * 8 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x94) = *(undefined4 *)(iVar3 + iVar8 * 8);
            *(undefined4 *)((int)register0x00000054 + -0x90) = uVar7;
            FUN_00151ce4();
            *(undefined4 *)((int)register0x00000054 + -0x94) =
                 *(undefined4 *)((int)register0x00000054 + -0x8c);
            *(undefined4 *)((int)register0x00000054 + -0x90) =
                 *(undefined4 *)((int)register0x00000054 + -0x88);
            FUN_000b6cc4();
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x8c);
            if (*(int *)((int)register0x00000054 + -0x88) == 0) {
              uVar13 = *(int *)((int)register0x00000054 + -0x5c) + 1;
              uVar11 = *(uint *)((int)register0x00000054 + -0x58);
              if (uVar11 < uVar13) {
                *(undefined4 *)((int)register0x00000054 + -0x60) = uVar7;
                *(undefined4 *)((int)register0x00000054 + -0x94) =
                     *(undefined4 *)((int)register0x00000054 + -0x40);
                *(uint *)((int)register0x00000054 + -0x90) = uVar13;
                *(uint *)((int)register0x00000054 + -0x8c) = uVar11;
                *(undefined4 *)((int)register0x00000054 + -0x88) = 1;
                *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0044eb10;
                FUN_000987f4();
                iVar2 = *(int *)((int)register0x00000054 + -0x80);
                uVar13 = *(uint *)((int)register0x00000054 + -0x7c);
                uVar11 = *(uint *)((int)register0x00000054 + -0x78);
                uVar7 = *(undefined4 *)((int)register0x00000054 + -0x60);
              }
              else {
                iVar2 = *(int *)((int)register0x00000054 + -0x40);
              }
              *(undefined4 *)(iVar2 + (uVar13 - 1) * 4) = uVar7;
            }
            else {
              pcVar4 = *(code **)(*(int *)((int)register0x00000054 + -0x88) + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x94) =
                   *(undefined4 *)((int)register0x00000054 + -0x84);
              (*pcVar4)();
              *(undefined4 *)((int)register0x00000054 + -0x34) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x94) =
                   *(undefined4 *)((int)register0x00000054 + -0x90);
              *(undefined4 *)((int)register0x00000054 + -0x90) =
                   *(undefined4 *)((int)register0x00000054 + -0x8c);
              FUN_0008f77c();
              *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_0044eb08;
              *(undefined4 *)((int)register0x00000054 + -0x30) =
                   *(undefined4 *)((int)register0x00000054 + -0x8c);
              *(undefined1 **)((int)register0x00000054 + -0x94) =
                   (undefined1 *)((int)register0x00000054 + -0x34);
              *(undefined4 *)((int)register0x00000054 + -0x90) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x8c) = 1;
              k3c_internal_pkg_logger_Error();
              uVar13 = *(uint *)((int)register0x00000054 + -0x5c);
              uVar11 = *(uint *)((int)register0x00000054 + -0x58);
              iVar2 = *(int *)((int)register0x00000054 + -0x40);
            }
LAB_0044e8e4:
            iVar6 = *(int *)((int)register0x00000054 + -0x6c);
            iVar3 = *(int *)((int)register0x00000054 + -0x4c);
            iVar8 = *(int *)((int)register0x00000054 + -0x50) + 1;
          }
          iVar3 = *(int *)((int)register0x00000054 + 0x20);
          for (iVar6 = 0; iVar6 < (int)(iVar3 - uVar13); iVar6 = iVar6 + 1) {
            uVar13 = uVar13 + 1;
            if (uVar11 < uVar13) {
              *(int *)((int)register0x00000054 + -0x54) = iVar6;
              *(int *)((int)register0x00000054 + -0x94) = iVar2;
              *(uint *)((int)register0x00000054 + -0x90) = uVar13;
              *(uint *)((int)register0x00000054 + -0x8c) = uVar11;
              *(undefined4 *)((int)register0x00000054 + -0x88) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0044eb10;
              FUN_000987f4();
              iVar2 = *(int *)((int)register0x00000054 + -0x80);
              uVar13 = *(uint *)((int)register0x00000054 + -0x7c);
              uVar11 = *(uint *)((int)register0x00000054 + -0x78);
              iVar3 = *(int *)((int)register0x00000054 + 0x20);
              iVar6 = *(int *)((int)register0x00000054 + -0x54);
            }
            *(undefined4 *)(iVar2 + (uVar13 - 1) * 4) = 0;
          }
          *(int *)((int)register0x00000054 + 0x28) = iVar2;
          *(uint *)((int)register0x00000054 + 0x2c) = uVar13;
          *(uint *)((int)register0x00000054 + 0x30) = uVar11;
          return;
        }
        *(int *)((int)register0x00000054 + -0x94) = iVar3;
        *(int *)((int)register0x00000054 + -0x90) = DAT_0044eae8;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0044eb14;
        FUN_000209b4();
        iVar2 = extraout_r1;
        iVar6 = extraout_r2_01;
      }
      else {
        uVar16 = 0;
        iVar6 = DAT_0044eae8;
        if (iVar2 == DAT_0044eae8) {
          *(int *)((int)register0x00000054 + -0x94) = DAT_0044eae8;
          *(int *)((int)register0x00000054 + -0x90) = iVar3;
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093560();
          cVar1 = *(char *)((int)register0x00000054 + -0x80);
          goto LAB_0044e55c;
        }
      }
      *(int *)((int)register0x00000054 + -0x94) = iVar2;
      *(int *)((int)register0x00000054 + -0x90) = iVar6;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0044eb14;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x98);
      if ((bool)uVar16) {
        register0x00000054 = (BADSPACEBASE *)puVar14;
      }
    }
    unaff_lr = 0x44eadc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Getfloatlist @ 0044eb18 (size 1652) */

void k3c_internal_pkg_printer___ConfigWrapper__Getfloatlist(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int extraout_r1;
  undefined4 uVar9;
  int iVar10;
  undefined4 extraout_r2;
  undefined4 *puVar11;
  int extraout_r2_00;
  undefined4 uVar12;
  undefined4 extraout_r3;
  undefined4 uVar13;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar14;
  undefined4 unaff_lr;
  bool bVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x1c)) {
      puVar14 = (undefined1 *)((int)register0x00000054 + -0x9c);
      *(undefined4 *)((int)register0x00000054 + -0x9c) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      piVar6 = *(int **)(iVar2 + 4);
      uVar9 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x44) = uVar9;
      uVar12 = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x68) = uVar12;
      iVar2 = *piVar6;
      *(int *)((int)register0x00000054 + -0x38) = iVar2;
      uVar13 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x98) = DAT_0044f190;
      *(undefined4 *)((int)register0x00000054 + -0x94) = uVar13;
      *(undefined4 *)((int)register0x00000054 + -0x90) = uVar9;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar12;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x84) == '\0') {
        iVar2 = 0;
        iVar3 = 0;
        bVar15 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0x72) = *(char *)((int)register0x00000054 + -0x84);
        uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x38) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x98) = DAT_0044f190;
        *(undefined4 *)((int)register0x00000054 + -0x94) = uVar9;
        *(undefined4 *)((int)register0x00000054 + -0x90) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        FUN_00025f60();
        iVar2 = **(int **)((int)register0x00000054 + -0x88);
        iVar3 = (*(int **)((int)register0x00000054 + -0x88))[1];
        bVar15 = *(char *)((int)register0x00000054 + -0x72) == '\0';
      }
      if (bVar15) {
        cVar1 = '\0';
LAB_0044ebf8:
        if (cVar1 == '\0') {
          iVar2 = *(int *)((int)register0x00000054 + 0x10);
          if (iVar2 == DAT_0044f1a0) {
            bVar15 = true;
          }
          else {
            bVar15 = false;
            if (iVar2 == DAT_0044f1a4) {
              bVar15 = true;
            }
          }
          if (bVar15) {
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x2c));
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x94) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_0044f1b4;
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x90);
            iVar2 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(int *)((int)register0x00000054 + -0x98) = iVar2;
            *(undefined4 *)((int)register0x00000054 + -0x94) = uVar9;
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0044f1b4;
            *(undefined4 *)((int)register0x00000054 + -0x20) =
                 *(undefined4 *)((int)register0x00000054 + -0x90);
            *(undefined4 *)((int)register0x00000054 + -0x98) = DAT_0044f1b8;
            *(undefined4 *)((int)register0x00000054 + -0x94) = 0x2d;
            *(undefined1 **)((int)register0x00000054 + -0x90) =
                 (undefined1 *)((int)register0x00000054 + -0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x8c) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x88) = 2;
            FUN_0013b72c();
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            *(undefined4 *)((int)register0x00000054 + -0x94) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x98) = DAT_0044f1b4;
            *(undefined4 *)((int)register0x00000054 + -0x94) =
                 *(undefined4 *)((int)register0x00000054 + -0x90);
            uVar18 = FUN_00095b00();
            goto LAB_0044ef80;
          }
          if ((*(char *)((int)register0x00000054 + 0x24) == '\0') || (iVar2 == 0)) {
            puVar11 = *(undefined4 **)((int)register0x00000054 + 0x14);
          }
          else {
            uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x94) = uVar9;
            FUN_00150c8c();
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x90);
            *(undefined4 *)((int)register0x00000054 + -0x50) =
                 *(undefined4 *)((int)register0x00000054 + -0x8c);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x94) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_00150c8c();
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x1c),
                         *(undefined4 *)((int)register0x00000054 + -0x8c),
                         *(undefined4 *)((int)register0x00000054 + -0x90));
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0x10) = extraout_r2;
            *(undefined4 *)((int)register0x00000054 + -0x14) = extraout_r3;
            *(undefined1 **)((int)register0x00000054 + -0x98) =
                 (undefined1 *)((int)register0x00000054 + -0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x94) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x90) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0044f1a8;
            *(undefined4 *)((int)register0x00000054 + -0x88) = 1;
            FUN_0014f8fc();
            uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
            *(undefined4 *)((int)register0x00000054 + -0x98) = DAT_0044f190;
            *(undefined4 *)((int)register0x00000054 + -0x94) = uVar9;
            *(undefined4 *)((int)register0x00000054 + -0x90) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            FUN_00093a08();
            uVar18 = CONCAT44(*(undefined4 *)((int)register0x00000054 + 0x10),
                              *(undefined4 **)((int)register0x00000054 + -0x88));
            **(undefined4 **)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + 0x10);
            if (*DAT_0044f1ac == 0) {
              puVar11 = *(undefined4 **)((int)register0x00000054 + 0x14);
            }
            else {
              uVar18 = FUN_0009db64();
              puVar11 = *(undefined4 **)((int)register0x00000054 + 0x14);
              *unaff_r8 = puVar11;
              unaff_r8[1] = *(undefined4 *)((int)uVar18 + 4);
            }
            iVar2 = (int)((ulonglong)uVar18 >> 0x20);
            *(undefined4 **)((int)uVar18 + 4) = puVar11;
          }
          if (iVar2 != DAT_0044f1b0) {
            *(undefined4 *)((int)register0x00000054 + 0x28) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x2c) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x30) = 0;
            return;
          }
          uVar9 = puVar11[1];
          uVar12 = puVar11[2];
          *(undefined4 *)((int)register0x00000054 + 0x28) = *puVar11;
          *(undefined4 *)((int)register0x00000054 + 0x2c) = uVar9;
          *(undefined4 *)((int)register0x00000054 + 0x30) = uVar12;
          return;
        }
        iVar2 = *(int *)((int)register0x00000054 + 4);
        piVar6 = *(int **)(iVar2 + 4);
        uVar12 = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x48) = uVar12;
        uVar9 = *(undefined4 *)(iVar2 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar9;
        iVar2 = *piVar6;
        *(int *)((int)register0x00000054 + -0x3c) = iVar2;
        uVar13 = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x98) = DAT_0044f190;
        *(undefined4 *)((int)register0x00000054 + -0x94) = uVar13;
        *(undefined4 *)((int)register0x00000054 + -0x90) = uVar12;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar9;
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x84) == '\0') {
          iVar3 = 0;
          iVar2 = 0;
          bVar15 = true;
        }
        else {
          *(char *)((int)register0x00000054 + -0x71) = *(char *)((int)register0x00000054 + -0x84);
          uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x3c) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x98) = DAT_0044f190;
          *(undefined4 *)((int)register0x00000054 + -0x94) = uVar9;
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + -0x6c);
          FUN_00025f60();
          iVar3 = **(int **)((int)register0x00000054 + -0x88);
          iVar2 = (*(int **)((int)register0x00000054 + -0x88))[1];
          bVar15 = *(char *)((int)register0x00000054 + -0x71) == '\0';
        }
        puVar11 = DAT_0044f198;
        if (bVar15) goto LAB_0044ecec;
        uVar16 = iVar3 == DAT_0044f194;
        if ((bool)uVar16) {
          *(int *)((int)register0x00000054 + -0x98) = DAT_0044f194;
          *(int *)((int)register0x00000054 + -0x94) = iVar2;
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093560();
          puVar11 = DAT_0044f198;
          if (*(char *)((int)register0x00000054 + -0x84) != '\0') {
            uVar9 = (*(undefined4 **)((int)register0x00000054 + -0x88))[1];
            *(undefined4 *)((int)register0x00000054 + -8) =
                 **(undefined4 **)((int)register0x00000054 + -0x88);
            *(undefined4 *)((int)register0x00000054 + -4) = uVar9;
            puVar11 = (undefined4 *)((int)register0x00000054 + -8);
          }
LAB_0044ecec:
          uVar9 = puVar11[1];
          *(undefined4 *)((int)register0x00000054 + -0x98) = *puVar11;
          *(undefined4 *)((int)register0x00000054 + -0x94) = uVar9;
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + 0x18);
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + 0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x88) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x84) = 0xffffffff;
          FUN_0014f168();
          iVar3 = *(int *)((int)register0x00000054 + -0x80);
          *(int *)((int)register0x00000054 + -0x4c) = iVar3;
          iVar7 = *(int *)((int)register0x00000054 + -0x7c);
          *(int *)((int)register0x00000054 + -0x70) = iVar7;
          uVar18 = 0;
          iVar10 = 0;
          iVar2 = DAT_0044f19c;
          while (iVar10 < iVar7) {
            *(int *)((int)register0x00000054 + -0x50) = iVar10;
            *(int *)((int)register0x00000054 + -0x40) = iVar2;
            *(undefined8 *)((int)register0x00000054 + -0x5c) = uVar18;
            uVar9 = *(undefined4 *)(iVar3 + iVar10 * 8 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x98) = *(undefined4 *)(iVar3 + iVar10 * 8);
            *(undefined4 *)((int)register0x00000054 + -0x94) = uVar9;
            FUN_00151ce4();
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + -0x90);
            *(undefined4 *)((int)register0x00000054 + -0x94) =
                 *(undefined4 *)((int)register0x00000054 + -0x8c);
            *(undefined4 *)((int)register0x00000054 + -0x90) = 0x40;
            FUN_000b5538();
            uVar17 = *(undefined8 *)((int)register0x00000054 + -0x8c);
            if (*(int *)((int)register0x00000054 + -0x84) == 0) {
              uVar4 = *(int *)((int)register0x00000054 + -0x5c) + 1;
              uVar8 = *(uint *)((int)register0x00000054 + -0x58);
              if (uVar8 < uVar4) {
                *(undefined8 *)((int)register0x00000054 + -100) = uVar17;
                *(undefined4 *)((int)register0x00000054 + -0x98) =
                     *(undefined4 *)((int)register0x00000054 + -0x40);
                *(uint *)((int)register0x00000054 + -0x94) = uVar4;
                *(uint *)((int)register0x00000054 + -0x90) = uVar8;
                *(undefined4 *)((int)register0x00000054 + -0x8c) = 1;
                *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0044f1bc;
                FUN_000987f4();
                iVar2 = *(int *)((int)register0x00000054 + -0x84);
                uVar4 = *(uint *)((int)register0x00000054 + -0x80);
                uVar8 = *(uint *)((int)register0x00000054 + -0x7c);
                uVar17 = *(undefined8 *)((int)register0x00000054 + -100);
              }
              else {
                iVar2 = *(int *)((int)register0x00000054 + -0x40);
              }
              uVar18 = CONCAT44(uVar8,uVar4);
              *(undefined8 *)(iVar2 + (uVar4 - 1) * 8) = uVar17;
            }
            else {
              pcVar5 = *(code **)(*(int *)((int)register0x00000054 + -0x84) + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x98) =
                   *(undefined4 *)((int)register0x00000054 + -0x80);
              (*pcVar5)();
              *(undefined4 *)((int)register0x00000054 + -0x34) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x98) =
                   *(undefined4 *)((int)register0x00000054 + -0x94);
              *(undefined4 *)((int)register0x00000054 + -0x94) =
                   *(undefined4 *)((int)register0x00000054 + -0x90);
              FUN_0008f77c();
              *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_0044f1b4;
              *(undefined4 *)((int)register0x00000054 + -0x30) =
                   *(undefined4 *)((int)register0x00000054 + -0x90);
              *(undefined1 **)((int)register0x00000054 + -0x98) =
                   (undefined1 *)((int)register0x00000054 + -0x34);
              *(undefined4 *)((int)register0x00000054 + -0x94) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x90) = 1;
              k3c_internal_pkg_logger_Error();
              uVar18 = *(undefined8 *)((int)register0x00000054 + -0x5c);
              iVar2 = *(int *)((int)register0x00000054 + -0x40);
            }
LAB_0044ef80:
            iVar3 = *(int *)((int)register0x00000054 + -0x4c);
            iVar7 = *(int *)((int)register0x00000054 + -0x70);
            iVar10 = *(int *)((int)register0x00000054 + -0x50) + 1;
          }
          iVar3 = *(int *)((int)register0x00000054 + 0x20);
          iVar7 = 0;
          while( true ) {
            uVar4 = (uint)((ulonglong)uVar18 >> 0x20);
            if (iVar3 - (int)uVar18 <= iVar7) break;
            uVar8 = (int)uVar18 + 1;
            if (uVar4 < uVar8) {
              *(int *)((int)register0x00000054 + -0x54) = iVar7;
              *(int *)((int)register0x00000054 + -0x98) = iVar2;
              *(uint *)((int)register0x00000054 + -0x94) = uVar8;
              *(uint *)((int)register0x00000054 + -0x90) = uVar4;
              *(undefined4 *)((int)register0x00000054 + -0x8c) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0044f1bc;
              FUN_000987f4();
              iVar2 = *(int *)((int)register0x00000054 + -0x84);
              uVar8 = *(uint *)((int)register0x00000054 + -0x80);
              uVar4 = *(uint *)((int)register0x00000054 + -0x7c);
              iVar3 = *(int *)((int)register0x00000054 + 0x20);
              iVar7 = *(int *)((int)register0x00000054 + -0x54);
            }
            uVar18 = CONCAT44(uVar4,uVar8);
            *(undefined8 *)(iVar2 + (uVar8 - 1) * 8) = 0;
            iVar7 = iVar7 + 1;
          }
          *(int *)((int)register0x00000054 + 0x28) = iVar2;
          *(undefined8 *)((int)register0x00000054 + 0x2c) = uVar18;
          return;
        }
        *(int *)((int)register0x00000054 + -0x98) = iVar3;
        *(int *)((int)register0x00000054 + -0x94) = DAT_0044f194;
        *(undefined4 *)((int)register0x00000054 + -0x90) = DAT_0044f1c0;
        FUN_000209b4();
        iVar2 = extraout_r1;
        iVar7 = extraout_r2_00;
      }
      else {
        uVar16 = 0;
        iVar7 = DAT_0044f194;
        if (iVar2 == DAT_0044f194) {
          *(int *)((int)register0x00000054 + -0x98) = DAT_0044f194;
          *(int *)((int)register0x00000054 + -0x94) = iVar3;
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093560();
          cVar1 = *(char *)((int)register0x00000054 + -0x84);
          goto LAB_0044ebf8;
        }
      }
      *(int *)((int)register0x00000054 + -0x98) = iVar2;
      *(int *)((int)register0x00000054 + -0x94) = iVar7;
      *(undefined4 *)((int)register0x00000054 + -0x90) = DAT_0044f1c0;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x9c);
      if ((bool)uVar16) {
        register0x00000054 = (BADSPACEBASE *)puVar14;
      }
    }
    unaff_lr = 0x44f188;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Getsection @ 0044f1c4 (size 180) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___ConfigWrapper__Getsection(void)

{
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  undefined4 *extraout_r1_01;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *puVar1;
  undefined4 extraout_r2_01;
  undefined4 uVar2;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *in_stack_00000010;
  undefined4 *puStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x44f274;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  uVar2 = *in_stack_00000004;
  puVar1 = in_stack_00000004;
  if (*_UNK_0044f280 != 0) {
    FUN_0009db54();
    *unaff_r8 = extraout_r3;
    puStack_8 = extraout_r1;
    puVar1 = extraout_r2;
    uVar2 = extraout_r3;
  }
  *puStack_8 = uVar2;
  uVar2 = puVar1[1];
  if (*_UNK_0044f280 != 0) {
    FUN_0009db54();
    *unaff_r8 = extraout_r3_00;
    puStack_8 = extraout_r1_00;
    puVar1 = extraout_r2_00;
    uVar2 = extraout_r3_00;
  }
  puStack_8[1] = uVar2;
  uVar2 = puVar1[2];
  if (*_UNK_0044f280 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r2_01;
    unaff_r8[1] = in_stack_00000008;
    puStack_8 = extraout_r1_01;
    uVar2 = extraout_r2_01;
  }
  puStack_8[2] = uVar2;
  puStack_8[4] = in_stack_0000000c;
  puStack_8[3] = in_stack_00000008;
  in_stack_00000010 = puStack_8;
                    /* WARNING: Could not recover jumptable at 0x0044f268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Has_section @ 0044f284 (size 148) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___ConfigWrapper__Has_section(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 in_stack_00000010;
  undefined1 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x44f314;
    FUN_0009bf64();
  }
  FUN_00093560();
  if (uStack_c != '\0') {
    FUN_00025f60();
  }
                    /* WARNING: Could not recover jumptable at 0x0044f308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Get_prefix_sections @ 0044f320 (size 812) */

void k3c_internal_pkg_printer___ConfigWrapper__Get_prefix_sections(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  undefined4 *extraout_r1_01;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int extraout_r2;
  undefined4 *puVar7;
  undefined4 *extraout_r2_00;
  undefined4 *extraout_r2_01;
  int iVar8;
  int extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 *extraout_r3_03;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 *puVar17;
  uint uVar18;
  int unaff_r10;
  undefined8 uVar19;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 *local_58;
  undefined4 *local_50;
  int local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  
  puVar7 = local_50;
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  puVar2 = *(uint **)in_stack_00000004[1];
  uVar4 = puVar2[1];
  FUN_000986b8();
  uVar5 = *puVar2;
  local_58 = local_50;
  FUN_00093f5c();
  iVar8 = 0;
  puVar9 = (undefined4 *)0x0;
  puVar11 = (undefined4 *)0x0;
  uVar18 = uVar4;
  puVar17 = local_50;
  local_50 = (undefined4 *)uVar5;
  for (iVar6 = 0; iVar6 < (int)uVar18; iVar6 = iVar6 + 1) {
    puVar12 = (undefined4 *)((int)puVar11 + 1);
    uVar15 = puVar17[iVar6 * 2];
    uVar13 = puVar17[iVar6 * 2 + 1];
    puVar11 = puVar12;
    if (puVar9 < puVar12) {
      local_50 = (undefined4 *)0x1;
      FUN_000987f4();
      uVar18 = uVar4;
      puVar17 = puVar7;
      iVar8 = local_48;
      puVar9 = local_40;
      puVar11 = local_44;
      local_58 = puVar12;
    }
    uVar19 = CONCAT44(puVar17,uVar18);
    puVar12 = (undefined4 *)((int)puVar11 - 1);
    *(undefined4 *)(iVar8 + (int)puVar12 * 8 + 4) = uVar13;
    if (*DAT_0044f654 != 0) {
      uVar19 = FUN_0009db64();
      *puVar12 = uVar15;
      *(undefined4 *)((int)puVar11 + 3) = *(undefined4 *)(extraout_r3 + (int)puVar12 * 8);
      iVar6 = extraout_r2;
      iVar8 = extraout_r3;
    }
    puVar17 = (undefined4 *)((ulonglong)uVar19 >> 0x20);
    uVar18 = (uint)uVar19;
    *(undefined4 *)(iVar8 + (int)puVar12 * 8) = uVar15;
  }
  puVar7 = (undefined4 *)0x0;
  iVar14 = 0;
  iVar6 = in_stack_0000000c;
  iVar10 = DAT_0044f658;
  for (iVar3 = 0; iVar3 < (int)puVar11; iVar3 = iVar3 + 1) {
    iVar16 = *(int *)(iVar8 + iVar3 * 8 + 4);
    puVar17 = *(undefined4 **)(iVar8 + iVar3 * 8);
    if (iVar16 < iVar6) {
      uVar18 = 0;
    }
    else {
      local_58 = in_stack_00000008;
      FUN_00018250();
      uVar18 = (uint)local_50 & 0xff;
      iVar6 = in_stack_0000000c;
    }
    if (uVar18 != 0) {
      FUN_00022cf8();
      uVar13 = *in_stack_00000004;
      puVar9 = local_58;
      puVar12 = in_stack_00000004;
      if (*DAT_0044f654 != 0) {
        FUN_0009db54();
        *puVar17 = extraout_r3_00;
        puVar9 = extraout_r1;
        puVar12 = extraout_r2_00;
        uVar13 = extraout_r3_00;
      }
      *puVar9 = uVar13;
      uVar13 = puVar12[1];
      if (*DAT_0044f654 != 0) {
        FUN_0009db54();
        *puVar17 = extraout_r3_01;
        puVar9 = extraout_r1_00;
        puVar12 = extraout_r2_01;
        uVar13 = extraout_r3_01;
      }
      puVar9[1] = uVar13;
      uVar13 = puVar12[2];
      if (*DAT_0044f654 != 0) {
        FUN_0009db64();
        *puVar17 = extraout_r3_02;
        puVar17[1] = puVar17;
        puVar9 = extraout_r1_01;
        uVar13 = extraout_r3_02;
      }
      puVar9[2] = uVar13;
      puVar9[4] = iVar16;
      puVar9[3] = puVar17;
      puVar1 = (undefined4 *)(iVar14 + 1);
      puVar12 = puVar1;
      if (puVar7 < puVar1) {
        local_50 = (undefined4 *)0x1;
        FUN_000987f4();
        puVar12 = local_44;
        puVar7 = local_40;
        iVar10 = local_48;
        local_58 = puVar1;
      }
      uVar19 = CONCAT44(puVar9,puVar12);
      if (*DAT_0044f654 != 0) {
        uVar19 = FUN_0009db64();
        *puVar17 = (int)((ulonglong)uVar19 >> 0x20);
        puVar17[1] = *(undefined4 *)(iVar10 + ((int)puVar12 - 1U) * 4);
        puVar7 = extraout_r3_03;
      }
      iVar14 = (int)uVar19;
      *(int *)(iVar10 + ((int)puVar12 - 1U) * 4) = (int)((ulonglong)uVar19 >> 0x20);
      iVar6 = in_stack_0000000c;
    }
  }
  return;
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Get_prefix_options @ 0044f664 (size 532) */

void k3c_internal_pkg_printer___ConfigWrapper__Get_prefix_options(void)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r2;
  int iVar5;
  uint extraout_r3;
  undefined4 uVar6;
  int iVar7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  uint local_68;
  undefined *local_60;
  uint local_5c;
  uint local_58;
  undefined4 *local_30 [12];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_printer___RawConfigParser__Options();
  FUN_0009dee4(0,local_30,local_68);
  FUN_00091764();
  uVar1 = 0;
  uVar3 = 0;
  puVar2 = PTR_DAT_0044f880;
  while (local_30[0] != (undefined4 *)0x0) {
    uVar6 = *local_30[0];
    iVar5 = local_30[0][1];
    if (in_stack_0000000c == 9) {
      FUN_00018250();
      if ((char)local_68 != '\0') {
        if (iVar5 < in_stack_0000000c) {
          uVar4 = 0;
        }
        else {
          FUN_00018250();
          uVar4 = local_68 & 0xff;
        }
        if (uVar4 != 0) {
          uVar3 = uVar3 + 1;
          if (uVar1 < uVar3) {
            local_68 = 1;
            FUN_000987f4();
            uVar3 = local_5c;
            uVar1 = local_58;
            puVar2 = local_60;
          }
          iVar7 = uVar3 - 1;
          *(int *)(puVar2 + iVar7 * 8 + 4) = iVar5;
          if (*(int *)PTR_DAT_0044f88c != 0) {
            FUN_0009db64(in_stack_0000000c);
            *unaff_r8 = uVar6;
            unaff_r8[1] = *(undefined4 *)(puVar2 + iVar7 * 8);
            uVar3 = extraout_r2;
            uVar1 = extraout_r3;
          }
          *(undefined4 *)(puVar2 + iVar7 * 8) = uVar6;
        }
      }
    }
    FUN_000919c8();
  }
  return;
}



/* k3c/internal/pkg/printer.(*ConfigWrapper).Deprecate @ 0044f890 (size 776) */

void k3c_internal_pkg_printer___ConfigWrapper__Deprecate(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *extraout_r1;
  undefined4 uVar5;
  undefined4 extraout_r2;
  undefined *extraout_r2_00;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  bool bVar10;
  undefined1 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x6c);
      *(undefined4 *)((int)register0x00000054 + -0x6c) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 4);
      piVar3 = *(int **)(iVar1 + 4);
      uVar5 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x38) = uVar5;
      uVar7 = *(undefined4 *)(iVar1 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x40) = uVar7;
      iVar1 = *piVar3;
      *(int *)((int)register0x00000054 + -0x2c) = iVar1;
      uVar8 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_0044fb9c;
      *(undefined4 *)((int)register0x00000054 + -100) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x60) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar7;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x54) == '\0') {
        puVar4 = (undefined *)0x0;
        uVar5 = 0;
        bVar10 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0x41) = *(char *)((int)register0x00000054 + -0x54);
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x2c) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_0044fb9c;
        *(undefined4 *)((int)register0x00000054 + -100) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        FUN_00025f60();
        puVar4 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x58);
        uVar5 = (*(undefined4 **)((int)register0x00000054 + -0x58))[1];
        bVar10 = *(char *)((int)register0x00000054 + -0x41) == '\0';
      }
      if (bVar10) {
        return;
      }
      uVar11 = 0;
      puVar6 = PTR_DAT_0044fba0;
      if (puVar4 == PTR_DAT_0044fba0) {
        *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_0044fba0;
        *(undefined4 *)((int)register0x00000054 + -100) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x54) == '\0') {
          return;
        }
        if (*(int *)((int)register0x00000054 + 0x14) == 0) {
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0044fba4;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -100) = uVar5;
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0044fba4;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_0044fba8;
          *(undefined4 *)((int)register0x00000054 + -100) = 0x2a;
          *(undefined1 **)((int)register0x00000054 + -0x60) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x5c) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x58) = 2;
          FUN_0013b72c();
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x54);
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0x50);
        }
        else {
          FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x28));
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -100) = extraout_r2;
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0044fba4;
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0044fba4;
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -100) = uVar5;
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0044fba4;
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_0044fbac;
          *(undefined4 *)((int)register0x00000054 + -100) = 0x38;
          *(undefined1 **)((int)register0x00000054 + -0x60) =
               (undefined1 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x5c) = 3;
          *(undefined4 *)((int)register0x00000054 + -0x58) = 3;
          FUN_0013b72c();
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x54);
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0x50);
        }
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -100) =
             PTR_s_configfileprint_sizemodel_name_d_00823504_0xf4e_0044fbb0;
        *(undefined4 *)((int)register0x00000054 + -0x60) = 10;
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0044fbb4;
        *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_0044fbb8;
        k3c_internal_pkg_printer___Printer__Lookup_object();
        uVar11 = *(int *)((int)register0x00000054 + -0x54) == 0;
        if (!(bool)uVar11) {
          *(undefined4 *)((int)register0x00000054 + -0x34) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_0044fbbc;
          *(int *)((int)register0x00000054 + -100) = *(int *)((int)register0x00000054 + -0x54);
          FUN_00020dac();
          pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x60) + 0xc);
          uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
          uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -100) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x60) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + -0x3c);
          (*pcVar2)();
          return;
        }
        *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_0044fbc0;
        FUN_00020b18();
        puVar4 = extraout_r1;
        puVar6 = extraout_r2_00;
      }
      *(undefined **)((int)register0x00000054 + -0x68) = puVar4;
      *(undefined **)((int)register0x00000054 + -100) = puVar6;
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0044fbc4;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x6c);
      if ((bool)uVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x44fb94;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*PrinterConfig).Deprecate @ 0044fbc8 (size 336) */

void k3c_internal_pkg_printer___PrinterConfig__Deprecate(void)

{
  int iVar1;
  int extraout_r2;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined *apuStack_1c [2];
  undefined *puStack_14;
  undefined *puStack_c;
  undefined **ppuStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x44fd14;
    FUN_0009bf64();
  }
  FUN_0009defc(0,apuStack_1c);
  FUN_0008f77c();
  apuStack_1c[0] = PTR_DAT_0044fd1c;
  FUN_0008f77c();
  puStack_14 = PTR_DAT_0044fd1c;
  FUN_0008f77c();
  puStack_c = PTR_DAT_0044fd1c;
  FUN_0013b72c();
  FUN_0008f77c();
  ppuStack_4 = apuStack_1c;
  FUN_00093a08();
  iVar1 = 3;
  puRam00000003 = PTR_DAT_0044fd1c;
  if (*(int *)PTR_DAT_0044fd28 != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)ppuStack_4;
    unaff_r8[1] = *(int *)(extraout_r2 + 4);
    iVar1 = extraout_r2;
  }
  *(undefined ***)(iVar1 + 4) = ppuStack_4;
                    /* WARNING: Could not recover jumptable at 0x0044fd08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*PrinterConfig).Get_printer @ 0044fd2c (size 16) */

void k3c_internal_pkg_printer___PrinterConfig__Get_printer(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0044fd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*PrinterConfig).Set @ 0044fd3c (size 1316) */

void k3c_internal_pkg_printer___PrinterConfig__Set(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_r1;
  undefined4 uVar5;
  int extraout_r2;
  char cVar6;
  int iVar7;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  bool bVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x54);
      *(undefined4 *)((int)register0x00000054 + -0x54) = unaff_lr;
      iVar2 = **(int **)(*(int *)(*(int *)((int)register0x00000054 + 4) + 4) + 4);
      *(int *)((int)register0x00000054 + -0x28) = iVar2;
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      *(int *)((int)register0x00000054 + -0x50) = DAT_00450264;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x3c) == '\0') {
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 4) + 4);
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        k3c_internal_pkg_printer___RawConfigParser__Add_section();
      }
      else {
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + 0xc);
        *(int *)((int)register0x00000054 + -0x50) = DAT_00450264;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00025f60();
      }
      piVar3 = *(int **)(*(int *)(*(int *)((int)register0x00000054 + 4) + 4) + 4);
      iVar2 = *(int *)((int)register0x00000054 + 0xc);
      if (iVar2 == 0) {
        cVar6 = '\x01';
      }
      else if (iVar2 == 7) {
        *(int **)((int)register0x00000054 + -0x34) = piVar3;
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_00450268;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 7;
        FUN_00018250();
        cVar6 = *(char *)((int)register0x00000054 + -0x44);
        piVar3 = *(int **)((int)register0x00000054 + -0x34);
        iVar2 = *(int *)((int)register0x00000054 + 0xc);
      }
      else {
        cVar6 = '\0';
      }
      if (cVar6 == '\0') {
        iVar7 = *piVar3;
        *(int *)((int)register0x00000054 + -0x2c) = iVar7;
        uVar5 = *(undefined4 *)(iVar7 + 0xc);
        *(int *)((int)register0x00000054 + -0x50) = DAT_00450264;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(int *)((int)register0x00000054 + -0x44) = iVar2;
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x3c) == '\0') {
          iVar7 = 0;
          iVar4 = 0;
          bVar9 = true;
        }
        else {
          *(char *)((int)register0x00000054 + -0x35) = *(char *)((int)register0x00000054 + -0x3c);
          uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x2c) + 0xc);
          *(int *)((int)register0x00000054 + -0x50) = DAT_00450264;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00025f60();
          iVar7 = **(int **)((int)register0x00000054 + -0x40);
          iVar4 = (*(int **)((int)register0x00000054 + -0x40))[1];
          bVar9 = *(char *)((int)register0x00000054 + -0x35) == '\0';
        }
        iVar2 = DAT_0045026c;
        if (bVar9) {
          iVar4 = 0;
          goto LAB_0044fef4;
        }
        if (iVar7 == DAT_0045026c) goto LAB_0044fef4;
        uVar10 = 0;
      }
      else {
        iVar4 = piVar3[6];
LAB_0044fef4:
        *(int *)((int)register0x00000054 + -0x50) = DAT_0045026c;
        *(int *)((int)register0x00000054 + -0x4c) = iVar4;
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        FUN_00093a08(*(undefined4 *)((int)register0x00000054 + 0x10),
                     *(undefined4 *)((int)register0x00000054 + 0x14),iVar2);
        piVar3 = *(int **)((int)register0x00000054 + -0x40);
        piVar3[1] = *(int *)((int)register0x00000054 + 0x1c);
        if (*DAT_00450270 == 0) {
          iVar2 = *(int *)((int)register0x00000054 + 0x18);
        }
        else {
          piVar3 = (int *)FUN_0009db64();
          iVar2 = *(int *)((int)register0x00000054 + 0x18);
          *unaff_r8 = iVar2;
          unaff_r8[1] = *piVar3;
        }
        *piVar3 = iVar2;
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar5;
        *(int *)((int)register0x00000054 + -0x50) = DAT_00450264;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x3c) == '\0') {
LAB_0044ffd0:
          FUN_000908bc();
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          *(int *)((int)register0x00000054 + -0x50) = DAT_00450264;
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093a08();
          uVar11 = CONCAT44(DAT_00450264,*(int **)((int)register0x00000054 + -0x40));
          **(int **)((int)register0x00000054 + -0x40) = DAT_00450264;
          if (*DAT_00450270 == 0) {
            iVar2 = *(int *)((int)register0x00000054 + -0x1c);
          }
          else {
            uVar11 = FUN_0009db64();
            iVar2 = *(int *)((int)register0x00000054 + -0x1c);
            *unaff_r8 = iVar2;
            unaff_r8[1] = *(int *)((int)uVar11 + 4);
          }
          *(int *)((int)uVar11 + 4) = iVar2;
          iVar2 = (int)((ulonglong)uVar11 >> 0x20);
        }
        else {
          *(int *)((int)register0x00000054 + -0x50) = DAT_00450264;
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00025f60();
          uVar5 = (*(undefined4 **)((int)register0x00000054 + -0x40))[1];
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               **(undefined4 **)((int)register0x00000054 + -0x40);
          *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar5;
          k3c_internal_pkg_util_value_IsNone();
          iVar2 = DAT_00450264;
          if (*(char *)((int)register0x00000054 + -0x48) != '\0') goto LAB_0044ffd0;
        }
        *(int *)((int)register0x00000054 + -0x50) = iVar2;
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00025f60();
        iVar2 = **(int **)((int)register0x00000054 + -0x40);
        uVar10 = iVar2 == DAT_00450264;
        if ((bool)uVar10) {
          *(int *)((int)register0x00000054 + -0x20) =
               (*(int **)((int)register0x00000054 + -0x40))[1];
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + 0x18);
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + 0x1c);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(int *)((int)register0x00000054 + -0x50) = DAT_00450264;
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + 0x14);
          FUN_00093a08();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x40);
          *puVar1 = DAT_00450274;
          if (*DAT_00450270 == 0) {
            iVar2 = *(int *)((int)register0x00000054 + -0x24);
          }
          else {
            puVar1 = (undefined4 *)FUN_0009db64();
            iVar2 = *(int *)((int)register0x00000054 + -0x24);
            *unaff_r8 = iVar2;
            unaff_r8[1] = puVar1[1];
          }
          puVar1[1] = iVar2;
          *(int *)((int)register0x00000054 + -0x50) = DAT_00450264;
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093a08();
          piVar3 = *(int **)((int)register0x00000054 + -0x40);
          *piVar3 = DAT_00450264;
          if (*DAT_00450270 == 0) {
            iVar2 = *(int *)((int)register0x00000054 + -0x20);
            iVar7 = *(int *)((int)register0x00000054 + -0x30);
            iVar4 = *(int *)((int)register0x00000054 + 4);
          }
          else {
            piVar3 = (int *)FUN_0009db84();
            iVar2 = *(int *)((int)register0x00000054 + -0x20);
            *unaff_r8 = iVar2;
            unaff_r8[1] = piVar3[1];
            iVar7 = *(int *)((int)register0x00000054 + -0x30);
            unaff_r8[2] = iVar7;
            iVar4 = *(int *)((int)register0x00000054 + 4);
            unaff_r8[3] = *(int *)(iVar4 + 0x10);
          }
          piVar3[1] = iVar2;
          *(int *)(iVar4 + 0x10) = iVar7;
          *(undefined1 *)(iVar4 + 0x24) = 1;
          FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_00450274;
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + 0x14);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00450274;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + 0x18);
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + 0x1c);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -8) = DAT_00450274;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined4 *)((int)register0x00000054 + -0x50) = DAT_00450278;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = 0x1d;
          *(undefined1 **)((int)register0x00000054 + -0x48) =
               (undefined1 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x44) = 3;
          *(undefined4 *)((int)register0x00000054 + -0x40) = 3;
          k3c_internal_pkg_logger_Infof();
          return;
        }
        *(int *)((int)register0x00000054 + -0x50) = iVar2;
        *(int *)((int)register0x00000054 + -0x4c) = DAT_00450264;
        *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_0045027c;
        FUN_000209b4();
        iVar7 = extraout_r1;
        iVar2 = extraout_r2;
      }
      *(int *)((int)register0x00000054 + -0x50) = iVar7;
      *(int *)((int)register0x00000054 + -0x4c) = iVar2;
      *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_0045027c;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x54);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x45025c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.MustLookupConfigfile @ 00450280 (size 200) */

void k3c_internal_pkg_printer_MustLookupConfigfile(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x28) =
           PTR_s_configfileprint_sizemodel_name_d_00823504_0xf4e_0045034c;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 10;
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00450350;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_00450354;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      if (*(undefined **)((int)register0x00000054 + -0x18) == PTR_DAT_00450358) {
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0045035c;
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00450360;
      *(undefined **)((int)register0x00000054 + -8) =
           *(undefined **)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_00450364;
      *(undefined4 *)((int)register0x00000054 + -0x28) = 0x22;
      *(undefined1 **)((int)register0x00000054 + -0x24) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x20) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = 2;
      FUN_001386c4();
      bVar3 = *(int *)((int)register0x00000054 + -0x18) == 0;
      uVar1 = 0;
      if (!bVar3) {
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x18) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x450344;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.NewPrinterConfig @ 00450368 (size 500) */

void k3c_internal_pkg_printer_NewPrinterConfig(void)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  undefined4 extraout_r1_00;
  undefined *extraout_r1_01;
  undefined *extraout_r1_02;
  undefined *extraout_r1_03;
  undefined *puVar2;
  undefined *extraout_r1_04;
  undefined *puVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 *puStack_c;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x450558;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  FUN_003edf64();
  uVar1 = uStack_8;
  if (*(int *)PTR_DAT_00450568 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = puStack_c[10];
    uVar1 = extraout_r1;
  }
  puStack_c[10] = uVar1;
  puVar3 = PTR_s___A_Za_z0_9_____deprecated_value_008262d0_0x397a_0045056c;
  FUN_003edf64();
  if (*(int *)PTR_DAT_00450568 != 0) {
    FUN_0009db94();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = puStack_c[0xb];
    unaff_r8[2] = in_stack_00000004;
    unaff_r8[3] = *puStack_c;
    unaff_r8[4] = puStack_c[1];
    uStack_8 = extraout_r1_00;
  }
  puStack_c[0xb] = uStack_8;
  *puStack_c = in_stack_00000004;
  puStack_c[1] = 0;
  FUN_000908bc();
  puVar2 = puVar3;
  if (*(int *)PTR_DAT_00450568 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_01;
    unaff_r8[1] = puStack_c[2];
    puVar2 = extraout_r1_01;
  }
  puStack_c[2] = puVar2;
  FUN_000908bc();
  puVar2 = puVar3;
  if (*(int *)PTR_DAT_00450568 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_02;
    unaff_r8[1] = puStack_c[3];
    puVar2 = extraout_r1_02;
  }
  puStack_c[3] = puVar2;
  FUN_000908bc();
  puVar2 = puVar3;
  if (*(int *)PTR_DAT_00450568 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_03;
    unaff_r8[1] = puStack_c[4];
    puVar2 = extraout_r1_03;
  }
  puStack_c[4] = puVar2;
  FUN_000908bc();
  if (*(int *)PTR_DAT_00450568 != 0) {
    FUN_0009db74();
    *unaff_r8 = extraout_r1_04;
    unaff_r8[1] = puStack_c[5];
    unaff_r8[2] = puStack_c[6];
    puVar3 = extraout_r1_04;
  }
  puStack_c[5] = puVar3;
  puStack_c[7] = 0;
  puStack_c[8] = 0;
  puStack_c[6] = PTR_DAT_00450570;
  *(undefined1 *)(puStack_c + 9) = 0;
                    /* WARNING: Could not recover jumptable at 0x0045054c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*PrinterConfig)._read_config_file @ 00450574 (size 324) */

void k3c_internal_pkg_printer___PrinterConfig___read_config_file(void)

{
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_common_utils_file_GetBytes();
  if (local_20 != 0) {
    FUN_0008f77c();
    k3c_internal_pkg_logger_Errorf();
    return;
  }
  FUN_00099104();
  FUN_00151e6c();
  return;
}



/* k3c/internal/pkg/printer.(*PrinterConfig)._find_autosave_data @ 004506cc (size 1240) */

void k3c_internal_pkg_printer___PrinterConfig___find_autosave_data(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int extraout_r2;
  int extraout_r2_00;
  undefined4 extraout_r2_01;
  int iVar8;
  int extraout_r3;
  int extraout_r3_00;
  undefined1 *puVar9;
  int iVar10;
  undefined4 *unaff_r8;
  int iVar11;
  undefined4 *puVar12;
  char cVar13;
  byte bVar14;
  int iVar15;
  int unaff_r10;
  undefined1 *puVar16;
  undefined4 unaff_lr;
  undefined1 uVar17;
  undefined8 uVar18;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar16 = (undefined1 *)((int)register0x00000054 + -0x6c);
      *(undefined4 *)((int)register0x00000054 + -0x6c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -100) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00450ba8;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = 0x8b;
      internal_stringslite_Index();
      uVar4 = *(uint *)((int)register0x00000054 + -0x58);
      if ((int)uVar4 < 0) {
        uVar3 = *(undefined4 *)((int)register0x00000054 + 0xc);
        uVar5 = 0;
        uVar2 = 0;
LAB_00450770:
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x14) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -100) = uVar3;
        *(undefined **)((int)register0x00000054 + -0x60) =
             PTR_s______tempempty_s__s_procstatechd_00820821_0x618_00450bac;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 5;
        internal_stringslite_Index();
        if (*(int *)((int)register0x00000054 + -0x58) != -1) {
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00450bb4;
          *(undefined **)((int)register0x00000054 + -4) = PTR_DAT_00450bb8;
          *(undefined1 **)((int)register0x00000054 + -0x68) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -100) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
          k3c_internal_pkg_logger_Debug();
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00450bb0;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 0xffffffff;
        FUN_0014f168();
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        uVar18 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x4c),
                          *(undefined4 *)((int)register0x00000054 + -0x50));
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        iVar7 = *(int *)((int)register0x00000054 + -0x2c);
        iVar8 = 0;
        uVar6 = 1;
        puVar9 = (undefined1 *)((int)register0x00000054 + -0x10);
        uVar4 = 1;
        while( true ) {
          if ((int)((ulonglong)uVar18 >> 0x20) <= iVar8) {
            uVar4 = uVar4 + 1;
            if (uVar6 < uVar4) {
              *(undefined1 **)((int)register0x00000054 + -0x68) = puVar9;
              *(uint *)((int)register0x00000054 + -100) = uVar4;
              *(uint *)((int)register0x00000054 + -0x60) = uVar6;
              *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
              *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00450bb4;
              FUN_000987f4();
              puVar9 = *(undefined1 **)((int)register0x00000054 + -0x54);
              uVar4 = *(uint *)((int)register0x00000054 + -0x50);
              uVar6 = *(uint *)((int)register0x00000054 + -0x4c);
            }
            iVar7 = uVar4 - 1;
            uVar18 = CONCAT44(iVar7,uVar4);
            *(undefined4 *)(puVar9 + iVar7 * 8 + 4) = 0;
            if (*(int *)PTR_DAT_00450bc4 != 0) {
              uVar18 = FUN_0009db54(uVar4,iVar7,*(undefined4 *)(puVar9 + iVar7 * 8));
              *unaff_r8 = extraout_r2_01;
            }
            *(undefined4 *)(puVar9 + (int)((ulonglong)uVar18 >> 0x20) * 8) = 0;
            *(undefined1 **)((int)register0x00000054 + -0x68) = puVar9;
            *(int *)((int)register0x00000054 + -100) = (int)uVar18;
            *(uint *)((int)register0x00000054 + -0x60) = uVar6;
            *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00450bb0;
            *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
            FUN_0014f8fc();
            *(undefined4 *)((int)register0x00000054 + 0x10) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + 0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            *(undefined4 *)((int)register0x00000054 + 0x18) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            *(undefined4 *)((int)register0x00000054 + 0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            return;
          }
          *(undefined1 **)((int)register0x00000054 + -0x1c) = puVar9;
          *(uint *)((int)register0x00000054 + -0x34) = uVar6;
          *(uint *)((int)register0x00000054 + -0x38) = uVar4;
          *(int *)((int)register0x00000054 + -0x24) = iVar8;
          iVar10 = *(int *)((int)uVar18 + iVar8 * 8 + 4);
          *(int *)((int)register0x00000054 + -0x30) = iVar10;
          iVar11 = *(int *)((int)uVar18 + iVar8 * 8);
          *(int *)((int)register0x00000054 + -0x18) = iVar11;
          if (iVar10 < 3) {
            cVar13 = '\0';
          }
          else {
            *(int *)((int)register0x00000054 + -0x68) = iVar11;
            *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00450bbc;
            *(undefined4 *)((int)register0x00000054 + -0x60) = 3;
            FUN_00018250();
            cVar13 = *(char *)((int)register0x00000054 + -0x5c);
            iVar7 = *(int *)((int)register0x00000054 + -0x2c);
            iVar8 = *(int *)((int)register0x00000054 + -0x24);
            uVar6 = *(uint *)((int)register0x00000054 + -0x34);
            puVar9 = *(undefined1 **)((int)register0x00000054 + -0x1c);
            uVar4 = *(uint *)((int)register0x00000054 + -0x38);
            iVar10 = *(int *)((int)register0x00000054 + -0x30);
            iVar11 = *(int *)((int)register0x00000054 + -0x18);
            uVar18 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x44),
                              *(undefined4 *)((int)register0x00000054 + -0x20));
          }
          if (cVar13 == '\0') {
            bVar14 = 1;
          }
          else if (iVar10 < 4) {
            bVar14 = 0;
          }
          else {
            if (iVar10 < 4) {
              bVar14 = 0;
            }
            else {
              *(int *)((int)register0x00000054 + -0x68) = iVar11;
              *(undefined **)((int)register0x00000054 + -100) =
                   PTR_s_____type_cfg___waitstatcodeunixi_00820821_0xc9_00450bc0;
              *(undefined4 *)((int)register0x00000054 + -0x60) = 4;
              FUN_00018250();
              bVar14 = *(byte *)((int)register0x00000054 + -0x5c);
              iVar7 = *(int *)((int)register0x00000054 + -0x2c);
              iVar8 = *(int *)((int)register0x00000054 + -0x24);
              uVar6 = *(uint *)((int)register0x00000054 + -0x34);
              puVar9 = *(undefined1 **)((int)register0x00000054 + -0x1c);
              uVar4 = *(uint *)((int)register0x00000054 + -0x38);
              iVar10 = *(int *)((int)register0x00000054 + -0x30);
              iVar11 = *(int *)((int)register0x00000054 + -0x18);
              uVar18 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x44),
                                *(undefined4 *)((int)register0x00000054 + -0x20));
            }
            bVar14 = bVar14 ^ 1;
          }
          if ((bVar14 != 0) && (iVar7 == 0)) break;
          if (iVar10 < 5) {
            uVar4 = uVar4 + 1;
            if (uVar6 < uVar4) {
              *(undefined1 **)((int)register0x00000054 + -0x68) = puVar9;
              *(uint *)((int)register0x00000054 + -100) = uVar4;
              *(uint *)((int)register0x00000054 + -0x60) = uVar6;
              *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
              *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00450bb4;
              FUN_000987f4();
              puVar9 = *(undefined1 **)((int)register0x00000054 + -0x54);
              uVar4 = *(uint *)((int)register0x00000054 + -0x50);
              uVar6 = *(uint *)((int)register0x00000054 + -0x4c);
              uVar18 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x44),
                                *(undefined4 *)((int)register0x00000054 + -0x20));
              iVar7 = *(int *)((int)register0x00000054 + -0x2c);
              iVar8 = *(int *)((int)register0x00000054 + -0x24);
            }
            iVar10 = uVar4 - 1;
            *(undefined4 *)(puVar9 + iVar10 * 8 + 4) = 0;
            if (*(int *)PTR_DAT_00450bc4 != 0) {
              puVar12 = *(undefined4 **)(puVar9 + iVar10 * 8);
              *(undefined4 **)((int)register0x00000054 + -0x28) = puVar12;
              uVar18 = FUN_0009db54();
              *puVar12 = *(undefined4 *)((int)register0x00000054 + -0x28);
              iVar7 = extraout_r2_00;
              iVar8 = extraout_r3_00;
            }
            unaff_r8 = (undefined4 *)0x0;
            *(undefined4 *)(puVar9 + iVar10 * 8) = 0;
          }
          else {
            uVar4 = uVar4 + 1;
            if (uVar6 < uVar4) {
              *(undefined1 **)((int)register0x00000054 + -0x68) = puVar9;
              *(uint *)((int)register0x00000054 + -100) = uVar4;
              *(uint *)((int)register0x00000054 + -0x60) = uVar6;
              *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
              *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00450bb4;
              FUN_000987f4();
              puVar9 = *(undefined1 **)((int)register0x00000054 + -0x54);
              uVar4 = *(uint *)((int)register0x00000054 + -0x50);
              uVar6 = *(uint *)((int)register0x00000054 + -0x4c);
              uVar18 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x44),
                                *(undefined4 *)((int)register0x00000054 + -0x20));
              iVar7 = *(int *)((int)register0x00000054 + -0x2c);
              iVar8 = *(int *)((int)register0x00000054 + -0x24);
              iVar10 = *(int *)((int)register0x00000054 + -0x30);
              iVar11 = *(int *)((int)register0x00000054 + -0x18);
            }
            iVar15 = uVar4 - 1;
            *(int *)(puVar9 + iVar15 * 8 + 4) = iVar10 + -4;
            unaff_r8 = (undefined4 *)(iVar11 + 4);
            if (*(int *)PTR_DAT_00450bc4 != 0) {
              uVar18 = FUN_0009db64();
              *unaff_r8 = unaff_r8;
              *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(puVar9 + iVar15 * 8);
              iVar7 = extraout_r2;
              iVar8 = extraout_r3;
            }
            *(undefined4 **)(puVar9 + iVar15 * 8) = unaff_r8;
          }
          iVar8 = iVar8 + 1;
        }
        *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00450bb4;
        *(undefined **)((int)register0x00000054 + -4) = PTR_DAT_00450bc8;
        *(undefined1 **)((int)register0x00000054 + -0x68) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -100) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
        k3c_internal_pkg_logger_Warn();
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
        return;
      }
      uVar6 = *(uint *)((int)register0x00000054 + 0xc);
      uVar17 = uVar6 == uVar4;
      if (uVar4 <= uVar6) {
        uVar1 = uVar4 + 0x8b;
        uVar17 = uVar6 == uVar1;
        if (uVar1 <= uVar6) {
          *(uint *)((int)register0x00000054 + -0x40) = uVar4;
          *(uint *)((int)register0x00000054 + -0x68) =
               *(int *)((int)register0x00000054 + 8) +
               (uVar1 & (int)(0x8b - (uVar6 - uVar4)) >> 0x1f);
          *(uint *)((int)register0x00000054 + -100) = (uVar6 - uVar4) + -0x8b;
          FUN_00151ce4();
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x60);
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x5c);
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x40);
          goto LAB_00450770;
        }
        FUN_0009dc34(uVar1,uVar6);
      }
      param_1 = FUN_0009dbf4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x6c);
      if ((bool)uVar17) {
        register0x00000054 = (BADSPACEBASE *)puVar16;
      }
    }
    unaff_lr = 0x450ba0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*PrinterConfig)._parse_config_buffer @ 00451058 (size 204) */

void k3c_internal_pkg_printer___PrinterConfig___parse_config_buffer(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 *local_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if ((in_stack_00000008 != 0) && (in_stack_0000000c != 0)) {
    FUN_00022cf8();
    *local_c = DAT_0045112c;
    if (*DAT_00451130 != 0) {
      local_c = (undefined4 *)FUN_0009db74();
      *unaff_r8 = in_stack_0000001c;
      unaff_r8[1] = in_stack_00000008;
      unaff_r8[2] = in_stack_00000014;
    }
    local_c[1] = in_stack_0000001c;
    local_c[3] = in_stack_0000000c;
    local_c[4] = in_stack_00000010;
    local_c[2] = in_stack_00000008;
    local_c[6] = in_stack_00000018;
    local_c[5] = in_stack_00000014;
    k3c_internal_pkg_reactor___Reactor__Async_wait_complete();
    return;
  }
  return;
}



/* k3c/internal/pkg/printer.(*PrinterConfig)._parse_config_buffer.func1 @ 00451134 (size 260) */

void k3c_internal_pkg_printer___PrinterConfig___parse_config_buffer_func1(void)

{
  undefined4 *puVar1;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  puVar1 = *(undefined4 **)(unaff_r7 + 0xc);
  FUN_0014f8fc();
  FUN_00022cf8();
  puVar1[1] = uStack_18;
  if (*(int *)PTR_DAT_00451244 != 0) {
    puVar1 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = uStack_1c;
  }
  *puVar1 = uStack_1c;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0xffffffff;
  k3c_internal_pkg_printer___RawConfigParser__Readfp();
  return;
}



/* k3c/internal/pkg/printer.(*PrinterConfig)._parse_config @ 0045124c (size 964) */

/* WARNING: Removing unreachable block (ram,0x00451458) */

void k3c_internal_pkg_printer___PrinterConfig___parse_config(undefined4 param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 extraout_r2;
  int iVar9;
  uint extraout_r2_00;
  uint uVar10;
  int extraout_r3;
  undefined *puVar11;
  uint uVar12;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  undefined1 uVar14;
  ulonglong uVar15;
  
code_r0x0045124c:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar13 = (undefined1 *)((int)register0x00000054 + -0x58);
    *(undefined4 *)((int)register0x00000054 + -0x58) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -0x54) =
         *(undefined4 *)((int)register0x00000054 + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x50) =
         *(undefined4 *)((int)register0x00000054 + 0x14);
    FUN_0027fdb0();
    uVar5 = *(undefined4 *)((int)register0x00000054 + -0x4c);
    *(undefined4 *)((int)register0x00000054 + -0x14) = uVar5;
    uVar8 = *(undefined4 *)((int)register0x00000054 + -0x48);
    *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar8;
    if (*(int *)((int)register0x00000054 + -0x44) != 0) {
      pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x44) + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      (*pcVar2)();
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00451614;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      *(undefined1 **)((int)register0x00000054 + -0x54) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 1;
      k3c_internal_pkg_logger_Error();
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x14);
      uVar8 = *(undefined4 *)((int)register0x00000054 + -0x2c);
    }
    *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00451618;
    *(undefined4 *)((int)register0x00000054 + -0x50) =
         *(undefined4 *)((int)register0x00000054 + 0x1c);
    *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar5;
    *(undefined4 *)((int)register0x00000054 + -0x48) = uVar8;
    FUN_00093560();
    uVar14 = 0;
    if (*(char *)((int)register0x00000054 + -0x40) == '\0') {
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00451618;
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + 0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x2c);
      FUN_00093a08();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x44);
      uVar15 = ZEXT48(puVar3);
      puVar3[1] = 0;
      if (*(int *)PTR_DAT_0045161c != 0) {
        uVar15 = FUN_0009db54(puVar3,0,*puVar3);
        *unaff_r8 = extraout_r2;
      }
      *(undefined4 *)uVar15 = 0;
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00451620;
      *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
      *(int *)((int)register0x00000054 + -0x44) = (int)(uVar15 >> 0x20);
      *(undefined4 *)((int)register0x00000054 + -0x40) = 0xffffffff;
      FUN_0014f168();
      iVar4 = *(int *)((int)register0x00000054 + -0x3c);
      *(int *)((int)register0x00000054 + -0x18) = iVar4;
      iVar6 = *(int *)((int)register0x00000054 + -0x38);
      *(int *)((int)register0x00000054 + -0x30) = iVar6;
      iVar9 = 0;
      uVar10 = 0;
      uVar12 = 0;
      puVar11 = PTR_DAT_00451624;
      do {
        if (iVar6 <= iVar9) {
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined **)((int)register0x00000054 + -0x50) = puVar11;
          *(uint *)((int)register0x00000054 + -0x4c) = uVar12;
          *(uint *)((int)register0x00000054 + -0x48) = uVar10;
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)((int)register0x00000054 + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + 0x18);
          k3c_internal_pkg_printer___PrinterConfig___parse_config_buffer();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = iVar9;
        *(undefined **)((int)register0x00000054 + -0xc) = puVar11;
        *(uint *)((int)register0x00000054 + -0x24) = uVar12;
        *(uint *)((int)register0x00000054 + -0x20) = uVar10;
        uVar5 = *(undefined4 *)(iVar4 + iVar9 * 8);
        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar5;
        uVar8 = *(undefined4 *)(iVar4 + iVar9 * 8 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x28) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar8;
        *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00451628;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
        internal_stringslite_Index(iVar4);
        uVar7 = *(uint *)((int)register0x00000054 + -0x44);
        if ((int)uVar7 < 0) {
          uVar7 = *(uint *)((int)register0x00000054 + -0x28);
        }
        else {
          uVar14 = uVar7 == *(uint *)((int)register0x00000054 + -0x28);
          if (*(uint *)((int)register0x00000054 + -0x28) < uVar7) goto LAB_00451578;
        }
        *(uint *)((int)register0x00000054 + -0x28) = uVar7;
        if (uVar7 == 0) {
          cVar1 = '\0';
        }
        else if ((int)uVar7 < 8) {
          cVar1 = '\0';
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          *(undefined **)((int)register0x00000054 + -0x50) =
               PTR_s_include_settingswarnings_____cfg_008216f7_0xff5_0045162c;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = 8;
          FUN_00018250();
          cVar1 = *(char *)((int)register0x00000054 + -0x48);
          uVar7 = *(uint *)((int)register0x00000054 + -0x28);
        }
        if (cVar1 == '\0') {
          uVar12 = *(int *)((int)register0x00000054 + -0x24) + 1;
          uVar10 = *(uint *)((int)register0x00000054 + -0x20);
          if (uVar10 < uVar12) {
            *(undefined4 *)((int)register0x00000054 + -0x54) =
                 *(undefined4 *)((int)register0x00000054 + -0xc);
            *(uint *)((int)register0x00000054 + -0x50) = uVar12;
            *(uint *)((int)register0x00000054 + -0x4c) = uVar10;
            *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
            *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_00451614;
            FUN_000987f4();
            puVar11 = *(undefined **)((int)register0x00000054 + -0x40);
            uVar12 = *(uint *)((int)register0x00000054 + -0x3c);
            uVar10 = *(uint *)((int)register0x00000054 + -0x38);
            uVar7 = *(uint *)((int)register0x00000054 + -0x28);
          }
          else {
            puVar11 = *(undefined **)((int)register0x00000054 + -0xc);
          }
          iVar4 = uVar12 - 1;
          *(uint *)(puVar11 + iVar4 * 8 + 4) = uVar7;
          if (*(int *)PTR_DAT_0045161c == 0) {
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x10);
          }
          else {
            uVar12 = FUN_0009db64();
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x10);
            *unaff_r8 = uVar5;
            unaff_r8[1] = *(undefined4 *)(puVar11 + extraout_r3 * 8);
            uVar10 = extraout_r2_00;
            iVar4 = extraout_r3;
          }
          *(undefined4 *)(puVar11 + iVar4 * 8) = uVar5;
        }
        else {
          uVar12 = *(uint *)((int)register0x00000054 + -0x24);
          uVar10 = *(uint *)((int)register0x00000054 + -0x20);
          puVar11 = *(undefined **)((int)register0x00000054 + -0xc);
        }
        iVar9 = *(int *)((int)register0x00000054 + -0x1c) + 1;
        iVar6 = *(int *)((int)register0x00000054 + -0x30);
        iVar4 = *(int *)((int)register0x00000054 + -0x18);
      } while( true );
    }
    goto LAB_0045157c;
  }
  goto LAB_00451604;
LAB_00451578:
  FUN_0009dbf4();
LAB_0045157c:
  *(undefined4 *)((int)register0x00000054 + -8) = 0;
  *(undefined4 *)((int)register0x00000054 + -4) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = *(undefined4 *)((int)register0x00000054 + 0x10)
  ;
  *(undefined4 *)((int)register0x00000054 + -0x50) = *(undefined4 *)((int)register0x00000054 + 0x14)
  ;
  FUN_0008f77c();
  *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00451614;
  *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00451630;
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0x25;
  *(undefined1 **)((int)register0x00000054 + -0x4c) = (undefined1 *)((int)register0x00000054 + -8);
  *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
  *(undefined4 *)((int)register0x00000054 + -0x44) = 1;
  FUN_0013b72c();
  *(undefined4 *)((int)register0x00000054 + -0x54) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x50) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  FUN_0008f77c();
  *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00451614;
  *(undefined4 *)((int)register0x00000054 + -0x50) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  param_1 = FUN_00095b00();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x58);
  if ((bool)uVar14) {
    register0x00000054 = (BADSPACEBASE *)puVar13;
  }
LAB_00451604:
  unaff_lr = 0x45160c;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x0045124c;
}



/* k3c/internal/pkg/printer.(*PrinterConfig)._build_config_wrapper @ 00451634 (size 280) */

void k3c_internal_pkg_printer___PrinterConfig___build_config_wrapper(void)

{
  undefined4 uVar1;
  undefined4 *extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 local_d0;
  undefined1 auStack_a8 [84];
  undefined1 auStack_54 [56];
  undefined1 auStack_1c [12];
  undefined1 *local_10;
  
  while (auStack_54 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_printer_NewRawConfigParser();
  uVar1 = FUN_0009def8(0,auStack_1c);
  FUN_0009de88(uVar1,auStack_a8);
  local_10 = auStack_a8;
  FUN_0006aa3c();
  k3c_internal_pkg_printer___PrinterConfig___parse_config();
  uVar1 = *in_stack_00000004;
  FUN_000908bc();
  FUN_00022cf8();
  if (*DAT_00451754 != 0) {
    FUN_0009db74();
    *unaff_r8 = uVar1;
    unaff_r8[1] = local_d0;
    unaff_r8[2] = in_stack_00000004;
    in_stack_00000008 = extraout_r1;
  }
  *in_stack_00000008 = uVar1;
  in_stack_00000008[1] = local_d0;
  in_stack_00000008[2] = in_stack_00000004;
  in_stack_00000008[4] = 7;
  in_stack_00000008[3] = DAT_00451758;
  return;
}



/* k3c/internal/pkg/printer.(*PrinterConfig).Read_config @ 0045175c (size 112) */

void k3c_internal_pkg_printer___PrinterConfig__Read_config(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_printer___PrinterConfig___read_config_file();
  k3c_internal_pkg_printer___PrinterConfig___build_config_wrapper();
  return;
}



/* k3c/internal/pkg/printer.(*PrinterConfig).Read_main_config @ 004517cc (size 936) */

void k3c_internal_pkg_printer___PrinterConfig__Read_main_config(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 extraout_r1;
  undefined *extraout_r1_00;
  undefined *extraout_r1_01;
  undefined4 uVar6;
  undefined4 extraout_r2;
  undefined *extraout_r2_00;
  undefined *puVar7;
  undefined *extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 uVar8;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0x5c) = unaff_lr;
      uVar4 = *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 8);
      *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00451b78;
      *(undefined4 *)((int)register0x00000054 + -0x54) = uVar4;
      *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_00451b7c;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 0xb;
      FUN_00025f60();
      puVar5 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x48);
      uVar10 = 0;
      puVar7 = PTR_DAT_00451b80;
      if (puVar5 == PTR_DAT_00451b80) {
        puVar1 = (undefined4 *)(*(undefined4 **)((int)register0x00000054 + -0x48))[1];
        *(undefined4 **)((int)register0x00000054 + -0x20) = puVar1;
        uVar4 = *puVar1;
        uVar6 = puVar1[1];
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar6;
        k3c_internal_pkg_printer___PrinterConfig___read_config_file();
        iVar2 = *(int *)((int)register0x00000054 + -0x44);
        uVar10 = 0;
        if (iVar2 == 0) {
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + -0x4c);
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          k3c_internal_pkg_printer___PrinterConfig___find_autosave_data();
          uVar4 = *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 8);
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x4c);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          *(undefined4 *)((int)register0x00000054 + -0x34) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -0x40);
          *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00451b78;
          *(undefined4 *)((int)register0x00000054 + -0x54) = uVar4;
          *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_00451b7c;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = 0xb;
          FUN_00025f60();
          puVar5 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x48);
          uVar10 = 0;
          puVar7 = PTR_DAT_00451b80;
          if (puVar5 == PTR_DAT_00451b80) {
            puVar1 = (undefined4 *)(*(undefined4 **)((int)register0x00000054 + -0x48))[1];
            uVar4 = puVar1[1];
            *(undefined4 *)((int)register0x00000054 + -0x58) = *puVar1;
            *(undefined4 *)((int)register0x00000054 + -0x54) = uVar4;
            internal_filepathlite_Dir();
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10),
                         *(undefined4 *)((int)register0x00000054 + -0x4c),
                         *(undefined4 *)((int)register0x00000054 + -0x50));
            *(undefined4 *)((int)register0x00000054 + -0xc) = extraout_r2;
            *(undefined4 *)((int)register0x00000054 + -0x10) = extraout_r3;
            *(undefined4 *)((int)register0x00000054 + -4) = 0x13;
            *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00451b84;
            *(undefined1 **)((int)register0x00000054 + -0x58) =
                 (undefined1 *)((int)register0x00000054 + -0x10);
            *(undefined4 *)((int)register0x00000054 + -0x54) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x50) = 2;
            FUN_0028054c();
            *(undefined4 *)((int)register0x00000054 + -0x58) =
                 *(undefined4 *)((int)register0x00000054 + -0x4c);
            *(undefined4 *)((int)register0x00000054 + -0x54) =
                 *(undefined4 *)((int)register0x00000054 + -0x48);
            *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
            *(undefined1 *)((int)register0x00000054 + -0x4c) = 0;
            *(undefined1 *)((int)register0x00000054 + -0x4b) = 1;
            k3c_internal_pkg_printer_NewMutableConfig();
            uVar10 = *(int *)((int)register0x00000054 + -0x44) == 0;
            if ((bool)uVar10) {
              *(undefined4 *)((int)register0x00000054 + -0x58) =
                   *(undefined4 *)((int)register0x00000054 + -0x48);
              k3c_internal_pkg_printer___MutableConfig__ToInIString();
              iVar2 = *(int *)((int)register0x00000054 + -0x50);
              uVar4 = *(undefined4 *)((int)register0x00000054 + -0x54);
              if (iVar2 == 0) {
                iVar2 = *(int *)((int)register0x00000054 + -0x30);
                uVar4 = *(undefined4 *)((int)register0x00000054 + -0x1c);
              }
              *(undefined4 *)((int)register0x00000054 + -0x18) = uVar4;
              *(int *)((int)register0x00000054 + -0x2c) = iVar2;
              uVar6 = **(undefined4 **)((int)register0x00000054 + -0x20);
              uVar8 = (*(undefined4 **)((int)register0x00000054 + -0x20))[1];
              *(undefined4 *)((int)register0x00000054 + -0x58) =
                   *(undefined4 *)((int)register0x00000054 + 4);
              *(undefined4 *)((int)register0x00000054 + -0x54) = uVar4;
              *(int *)((int)register0x00000054 + -0x50) = iVar2;
              *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar6;
              *(undefined4 *)((int)register0x00000054 + -0x48) = uVar8;
              k3c_internal_pkg_printer___PrinterConfig___build_config_wrapper();
              uVar4 = *(undefined4 *)((int)register0x00000054 + -0x44);
              if (*(int *)PTR_DAT_00451b88 == 0) {
                iVar2 = *(int *)((int)register0x00000054 + 4);
              }
              else {
                FUN_0009db64();
                *unaff_r8 = extraout_r1;
                iVar2 = *(int *)((int)register0x00000054 + 4);
                unaff_r8[1] = *(undefined4 *)(iVar2 + 4);
                uVar4 = extraout_r1;
              }
              *(undefined4 *)(iVar2 + 4) = uVar4;
              *(undefined4 *)((int)register0x00000054 + -0x14) =
                   **(undefined4 **)((int)register0x00000054 + -0x20);
              *(undefined4 *)((int)register0x00000054 + -0x28) =
                   (*(undefined4 **)((int)register0x00000054 + -0x20))[1];
              *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x54) =
                   *(undefined4 *)((int)register0x00000054 + -0x24);
              *(undefined4 *)((int)register0x00000054 + -0x50) =
                   *(undefined4 *)((int)register0x00000054 + -0x34);
              *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00451b8c;
              *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x44) =
                   *(undefined4 *)((int)register0x00000054 + -0x18);
              *(undefined4 *)((int)register0x00000054 + -0x40) =
                   *(undefined4 *)((int)register0x00000054 + -0x2c);
              FUN_000763e8();
              *(undefined4 *)((int)register0x00000054 + -0x58) =
                   *(undefined4 *)((int)register0x00000054 + 4);
              *(undefined4 *)((int)register0x00000054 + -0x54) =
                   *(undefined4 *)((int)register0x00000054 + -0x3c);
              *(undefined4 *)((int)register0x00000054 + -0x50) =
                   *(undefined4 *)((int)register0x00000054 + -0x38);
              *(undefined4 *)((int)register0x00000054 + -0x4c) =
                   *(undefined4 *)((int)register0x00000054 + -0x14);
              *(undefined4 *)((int)register0x00000054 + -0x48) =
                   *(undefined4 *)((int)register0x00000054 + -0x28);
              k3c_internal_pkg_printer___PrinterConfig___build_config_wrapper();
              *(undefined4 *)((int)register0x00000054 + 8) =
                   *(undefined4 *)((int)register0x00000054 + -0x44);
              return;
            }
            pcVar3 = *(code **)(*(int *)((int)register0x00000054 + -0x44) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x58) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            (*pcVar3)();
            uVar4 = *(undefined4 *)((int)register0x00000054 + -0x54);
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x50);
            *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
            *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00451b90;
            *(undefined4 *)((int)register0x00000054 + -0x50) = 0x26;
            *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar4;
            *(undefined4 *)((int)register0x00000054 + -0x48) = uVar6;
            FUN_0007636c();
            *(undefined4 *)((int)register0x00000054 + -0x58) =
                 *(undefined4 *)((int)register0x00000054 + -0x44);
            *(undefined4 *)((int)register0x00000054 + -0x54) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00451b80;
            *(undefined4 *)((int)register0x00000054 + -0x54) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            FUN_00095b00();
            puVar5 = extraout_r1_00;
            puVar7 = extraout_r2_00;
          }
          *(undefined **)((int)register0x00000054 + -0x58) = puVar5;
          *(undefined **)((int)register0x00000054 + -0x54) = puVar7;
          *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_00451b94;
          iVar2 = FUN_000209b4();
        }
        pcVar3 = *(code **)(iVar2 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        (*pcVar3)();
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x54);
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00451b98;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 0x26;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x48) = uVar6;
        FUN_0007636c();
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00451b80;
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        FUN_00095b00();
        puVar5 = extraout_r1_01;
        puVar7 = extraout_r2_01;
      }
      *(undefined **)((int)register0x00000054 + -0x58) = puVar5;
      *(undefined **)((int)register0x00000054 + -0x54) = puVar7;
      *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_00451b94;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x5c);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x451b70;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*PrinterConfig).Check_unused_options @ 00451b9c (size 52) */

void k3c_internal_pkg_printer___PrinterConfig__Check_unused_options(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x451bcc;
    FUN_0009bf64();
  }
  k3c_internal_pkg_printer___PrinterConfig___build_status();
                    /* WARNING: Could not recover jumptable at 0x00451bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*PrinterConfig)._build_status @ 00451bd0 (size 2532) */

/* WARNING: Removing unreachable block (ram,0x00451f04) */
/* WARNING: Removing unreachable block (ram,0x00451f54) */
/* WARNING: Removing unreachable block (ram,0x00451f4c) */
/* WARNING: Removing unreachable block (ram,0x00451f68) */
/* WARNING: Removing unreachable block (ram,0x00451fb8) */
/* WARNING: Removing unreachable block (ram,0x00451fb0) */
/* WARNING: Removing unreachable block (ram,0x00451fcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___PrinterConfig___build_status(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined *extraout_r1;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;
  uint extraout_r1_00;
  int extraout_r1_01;
  undefined *extraout_r1_02;
  uint extraout_r2;
  int iVar11;
  undefined *puVar12;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint *extraout_r2_03;
  undefined *extraout_r2_04;
  uint extraout_r3;
  uint uVar13;
  int extraout_r3_00;
  int extraout_r3_01;
  int iVar14;
  uint *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar15;
  int in_stack_00000004;
  undefined *in_stack_00000008;
  uint in_stack_ffffff30;
  uint **ppuVar16;
  uint uVar17;
  undefined *puVar18;
  undefined *puVar19;
  uint **ppuVar20;
  int in_stack_ffffff3c;
  undefined4 uVar21;
  undefined4 *puStack_c0;
  uint *puStack_b8;
  uint uStack_b4;
  int iStack_80;
  undefined4 *puStack_7c;
  int iStack_78;
  undefined4 *puStack_74;
  undefined *puStack_6c;
  uint **ppuStack_54;
  undefined *puStack_50;
  uint *puStack_4c;
  uint uStack_48;
  undefined *puStack_44;
  uint *puStack_40;
  int *piStack_3c;
  uint uStack_10;
  int iStack_8;
  int iStack_4;
  
  while (&ppuStack_54 <= *(uint ****)(unaff_r10 + 8)) {
    unaff_lr = 0x4525e8;
    FUN_0009bf64();
  }
  FUN_000908bc();
  iVar1 = in_stack_00000004;
  if (*(int *)PTR_DAT_00452464 != 0) {
    iVar1 = FUN_0009db64();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(uint *)(iVar1 + 0xc);
    in_stack_ffffff30 = extraout_r2;
  }
  *(uint *)(iVar1 + 0xc) = in_stack_ffffff30;
  puVar18 = (undefined *)0x0;
  puVar19 = (undefined *)0x0;
  puVar8 = in_stack_00000008;
  k3c_internal_pkg_printer___ConfigWrapper__Get_prefix_sections();
  puStack_74 = puStack_c0;
  iVar1 = 0;
  iStack_4 = in_stack_ffffff3c;
  do {
    if (iVar1 < (int)puStack_74) {
      puVar7 = *(undefined **)(iStack_4 + iVar1 * 4);
      FUN_000908bc();
      iVar14 = *(int *)(puVar7 + 0x10);
      FUN_00093a08();
      *puStack_c0 = PTR_DAT_00452468;
      puVar2 = puStack_c0;
      if (*(int *)PTR_DAT_00452464 != 0) {
        puVar2 = (undefined4 *)FUN_0009db64();
        *unaff_r8 = (uint)puVar8;
        unaff_r8[1] = puVar2[1];
      }
      puVar2[1] = puVar8;
      puVar18 = (undefined *)0x0;
      puVar19 = (undefined *)0x0;
      k3c_internal_pkg_printer___ConfigWrapper__Get_prefix_options();
      puStack_7c = puStack_c0;
      iVar11 = 0;
      iStack_78 = iVar1;
      puStack_6c = puVar8;
      iStack_8 = iVar14;
      goto LAB_00452524;
    }
    FUN_000908bc();
    puVar7 = puVar8;
    if (*(int *)PTR_DAT_00452464 != 0) {
      FUN_0009db64();
      *unaff_r8 = (uint)extraout_r1;
      unaff_r8[1] = *(uint *)(in_stack_00000004 + 0x14);
      puVar8 = extraout_r1;
    }
    *(undefined **)(in_stack_00000004 + 0x14) = puVar8;
    FUN_0009dee4(0,&puStack_40,in_stack_00000004,*(undefined4 *)(in_stack_00000008 + 8),unaff_lr,
                 puVar7,puVar18,puVar19);
    ppuVar20 = &puStack_40;
    ppuVar16 = (uint **)PTR_DAT_00452468;
    uVar3 = extraout_r3;
    FUN_00091764();
    while (puStack_40 != (uint *)0x0) {
      puVar7 = (undefined *)*puStack_40;
      puVar8 = (undefined *)puStack_40[1];
      uVar13 = piStack_3c[1];
      puVar12 = (undefined *)*piStack_3c;
      puVar18 = puVar8;
      puVar19 = PTR_DAT_0045246c;
      puStack_44 = puVar7;
      FUN_0014f168();
      if (uStack_b4 == 0) goto LAB_00452504;
      puVar7 = puStack_44;
      puVar19 = PTR_DAT_0045246c;
      FUN_0014f168();
      if (uStack_b4 < 2) goto LAB_004524fc;
      ppuStack_54 = (uint **)puStack_b8[2];
      FUN_00093560();
      puVar7 = puRam00000000;
      puVar8 = PTR_DAT_00452468;
      if (puRam00000000 != PTR_DAT_00452468) goto LAB_004524e8;
      uVar3 = (uint)_DAT_00000004;
      ppuVar20 = ppuStack_54;
      FUN_00093a08();
      iVar1 = 0;
      puRam00000000 = puVar12;
      if (*(int *)PTR_DAT_00452464 != 0) {
        iVar1 = FUN_0009db64();
        *unaff_r8 = uVar13;
        unaff_r8[1] = *(uint *)(iVar1 + 4);
      }
      *(uint *)(iVar1 + 4) = uVar13;
      ppuVar16 = &puStack_40;
      FUN_000919c8();
    }
    *(undefined4 *)(in_stack_00000004 + 0x1c) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x20) = 0;
    iVar1 = in_stack_00000004;
    if (*(int *)PTR_DAT_00452464 != 0) {
      uVar13 = *(uint *)(in_stack_00000004 + 0x18);
      FUN_0009db54();
      *unaff_r8 = uVar13;
      iVar1 = extraout_r3_00;
    }
    *(undefined **)(iVar1 + 0x18) = PTR_DAT_00452470;
    FUN_0009dee4(0,&puStack_40,*(undefined4 *)(iVar1 + 8),iVar1,unaff_lr,ppuVar16,uVar3,ppuVar20);
    FUN_00091764();
    while( true ) {
      if (puStack_40 == (uint *)0x0) {
        return;
      }
      uStack_48 = *puStack_40;
      puVar8 = (undefined *)*piStack_3c;
      puStack_4c = (uint *)piStack_3c[1];
      FUN_0014f168();
      if (uStack_b4 == 0) goto LAB_004524dc;
      uVar13 = *puStack_b8;
      uVar3 = puStack_b8[1];
      FUN_0014f168();
      if (uStack_b4 < 2) goto LAB_004524d4;
      uVar9 = puStack_b8[2];
      uVar4 = puStack_b8[3];
      uVar17 = uStack_48;
      FUN_0014f168();
      if (uStack_b4 < 3) goto LAB_004524cc;
      uVar5 = puStack_b8[5];
      FUN_000908bc();
      if (uVar5 == 0) {
        uVar21 = 4;
        FUN_00093a08();
        uVar15 = 0x1100000000;
        _DAT_00000004 = (undefined4 *)0x11;
        if (*(int *)PTR_DAT_00452464 != 0) {
          uVar15 = FUN_0009db54(0,0x11,puRam00000000);
          *unaff_r8 = extraout_r2_00;
        }
        puVar18 = PTR_DAT_0045247c;
        uVar10 = (undefined4)((ulonglong)uVar15 >> 0x20);
        *(undefined4 *)uVar15 = PTR_DAT_0045247c;
      }
      else {
        FUN_00093a08();
        puVar2 = (undefined4 *)0x0;
        _DAT_00000004 = (undefined4 *)0x10;
        if (*(int *)PTR_DAT_00452464 != 0) {
          puVar2 = (undefined4 *)FUN_0009db54(0,0x10,puRam00000000);
          *unaff_r8 = extraout_r2_01;
        }
        *puVar2 = PTR_s_deprecated_value_20060102_150405_008262d0_0x398a_00452480;
        uVar21 = 5;
        FUN_00093a08();
        puVar2 = (undefined4 *)0x0;
        _DAT_00000004 = (undefined4 *)0x5;
        if (*(int *)PTR_DAT_00452464 != 0) {
          puVar2 = (undefined4 *)FUN_0009db54(0,5,puRam00000000);
          *unaff_r8 = extraout_r2_02;
        }
        *puVar2 = PTR_s_valuefloat___s_nil_ErrorsvqxXblo_00820821_0x5a0_00452484;
        uVar10 = 0x11;
        puVar18 = PTR_DAT_0045247c;
      }
      if (puVar8 != PTR_DAT_00452488) break;
      puStack_74 = (undefined4 *)puStack_4c[1];
      uStack_10 = *puStack_4c;
      FUN_00093a08();
      puVar6 = (uint *)0x0;
      _DAT_00000004 = puStack_74;
      if (*(int *)PTR_DAT_00452464 != 0) {
        puVar6 = (uint *)FUN_0009db64();
        *unaff_r8 = uStack_10;
        unaff_r8[1] = *puVar6;
      }
      *puVar6 = uStack_10;
      FUN_00093a08();
      puVar6 = (uint *)0x0;
      _DAT_00000004 = (undefined4 *)uVar3;
      if (*(int *)PTR_DAT_00452464 != 0) {
        puVar6 = (uint *)FUN_0009db64();
        *unaff_r8 = uVar13;
        unaff_r8[1] = *puVar6;
      }
      *puVar6 = uVar13;
      FUN_00093a08();
      puVar6 = (uint *)0x0;
      _DAT_00000004 = (undefined4 *)uVar4;
      if (*(int *)PTR_DAT_00452464 != 0) {
        puVar6 = (uint *)FUN_0009db64();
        *unaff_r8 = uVar9;
        unaff_r8[1] = *puVar6;
      }
      *puVar6 = uVar9;
      puVar6 = (uint *)(*(int *)(in_stack_00000004 + 0x1c) + 1);
      uVar3 = *(uint *)(in_stack_00000004 + 0x18);
      iVar1 = in_stack_00000004;
      if (*(uint **)(in_stack_00000004 + 0x20) < puVar6) {
        FUN_000987f4();
        uVar3 = 0xffffffff;
        *(uint *)(in_stack_00000004 + 0x20) = uStack_b4;
        puVar6 = puStack_b8;
        if (*(int *)PTR_DAT_00452464 != 0) {
          FUN_0009db64();
          *unaff_r8 = extraout_r1_00;
          unaff_r8[1] = *(uint *)(extraout_r3_01 + 0x18);
          uVar3 = extraout_r1_00;
          puVar6 = extraout_r2_03;
          iVar1 = extraout_r3_01;
        }
        *(uint *)(iVar1 + 0x18) = uVar3;
      }
      *(uint **)(iVar1 + 0x1c) = puVar6;
      *(undefined **)(uVar3 + ((int)puVar6 + -1) * 8) = PTR_DAT_00452474;
      iVar1 = uVar3 + ((int)puVar6 + -1) * 8;
      if (*(int *)PTR_DAT_00452464 != 0) {
        FUN_0009db64();
        *unaff_r8 = uVar17;
        unaff_r8[1] = *(uint *)(extraout_r1_01 + 4);
        iVar1 = extraout_r1_01;
      }
      *(uint *)(iVar1 + 4) = uVar17;
      FUN_000919c8();
    }
    FUN_000209b4(PTR_DAT_004525f0,uVar10,puVar18,PTR_DAT_00452488,unaff_lr,puVar8,PTR_DAT_00452488,
                 PTR_DAT_004525f0,uVar21);
LAB_004524cc:
    FUN_0009dbd4(2);
LAB_004524d4:
    FUN_0009dbd4(1);
LAB_004524dc:
    FUN_0009dbd4(0,0);
    puVar7 = extraout_r1_02;
    puVar8 = extraout_r2_04;
LAB_004524e8:
    puVar19 = PTR_DAT_004525f0;
    FUN_000209b4();
LAB_004524fc:
    FUN_0009dbd4(1);
    puVar18 = puVar8;
LAB_00452504:
    puStack_c0 = (undefined4 *)0x0;
    uVar15 = FUN_0009dbd4(0,0);
    while( true ) {
      *(int *)((int)uVar15 + 4) = (int)((ulonglong)uVar15 >> 0x20);
      iVar11 = iStack_80 + 1;
LAB_00452524:
      puVar8 = PTR_DAT_004525f8;
      if ((int)puStack_7c <= iVar11) break;
      puStack_50 = *(undefined **)(iStack_8 + iVar11 * 8);
      puStack_c0 = (undefined4 *)PTR_DAT_004525f8;
      k3c_internal_pkg_printer___ConfigWrapper__Get();
      uStack_10 = uStack_b4;
      puVar7 = PTR_DAT_004525fc;
      puVar18 = puStack_6c;
      puVar19 = puStack_50;
      FUN_00093a08();
      uVar15 = CONCAT44(uStack_10,puVar8);
      *(uint **)puVar8 = puStack_b8;
      iStack_80 = iVar11;
      if (*(int *)PTR_DAT_00452600 != 0) {
        iVar1 = FUN_0009db64();
        uVar15 = CONCAT44(uStack_10,iVar1);
        *unaff_r8 = uStack_10;
        unaff_r8[1] = *(uint *)(iVar1 + 4);
      }
    }
    iVar1 = iStack_78 + 1;
    puVar8 = puVar7;
  } while( true );
}



/* k3c/internal/pkg/printer.(*PrinterConfig).Get_status @ 00452604 (size 608) */

void k3c_internal_pkg_printer___PrinterConfig__Get_status(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  int in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 *puStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x452860;
    FUN_0009bf64();
  }
  FUN_000908bc();
  uVar3 = *(undefined4 *)(in_stack_00000004 + 0xc);
  FUN_00093a08();
  *puStack_14 = PTR_DAT_00452868;
  puVar2 = puStack_14;
  if (*(int *)PTR_DAT_00452870 != 0) {
    puVar2 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = uVar3;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = uVar3;
  uVar3 = *(undefined4 *)(in_stack_00000004 + 0x14);
  FUN_00093a08();
  *puStack_14 = PTR_DAT_00452868;
  puVar2 = puStack_14;
  if (*(int *)PTR_DAT_00452870 != 0) {
    puVar2 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = uVar3;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = uVar3;
  FUN_0008f820();
  FUN_00093a08();
  *puStack_14 = PTR_DAT_0045287c;
  puVar2 = puStack_14;
  if (*(int *)PTR_DAT_00452870 != 0) {
    puVar2 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = 8;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = 8;
  bVar1 = *(byte *)(in_stack_00000004 + 0x24);
  FUN_00093a08();
  *puStack_14 = PTR_DAT_00452884;
  puVar4 = PTR_DAT_00452888 + (uint)bVar1 * 8;
  puVar2 = puStack_14;
  if (*(int *)PTR_DAT_00452870 != 0) {
    uVar5 = FUN_0009db54(puStack_14,puStack_14[1]);
    puVar2 = (undefined4 *)uVar5;
    *unaff_r8 = (int)((ulonglong)uVar5 >> 0x20);
    puVar4 = extraout_r2;
  }
  puVar2[1] = puVar4;
  uVar3 = *(undefined4 *)(in_stack_00000004 + 0x10);
  FUN_00093a08();
  *puStack_14 = PTR_DAT_00452868;
  if (*(int *)PTR_DAT_00452870 != 0) {
    puStack_14 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = uVar3;
    unaff_r8[1] = puStack_14[1];
  }
  puStack_14[1] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00452854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*PrinterConfig).Remove_section @ 00452890 (size 884) */

/* WARNING: Removing unreachable block (ram,0x00452a24) */

void k3c_internal_pkg_printer___PrinterConfig__Remove_section(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_r2;
  int iVar5;
  int extraout_r2_00;
  uint uVar6;
  uint extraout_r3;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int *unaff_r8;
  int iVar10;
  int unaff_r10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int *in_stack_0000000c;
  int *local_44;
  int local_3c;
  uint local_38;
  uint local_34;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00093560();
  if ((char)local_3c == '\0') {
    FUN_00093560();
  }
  else {
    FUN_00025f60();
    piVar2 = (int *)**(undefined4 **)(*(int *)(in_stack_00000004 + 4) + 4);
    FUN_00093560();
    if ((char)local_3c != '\0') {
      local_44 = in_stack_0000000c;
      FUN_000263c8();
      iVar3 = piVar2[1];
      uVar12 = CONCAT44(iVar3,piVar2);
      if (iVar3 == 1) {
        piVar2[1] = 0;
        piVar2[2] = 0;
        if (*DAT_00452c0c != 0) {
          uVar12 = FUN_0009db54(piVar2,*piVar2);
          piVar2 = (int *)uVar12;
          *unaff_r8 = (int)((ulonglong)uVar12 >> 0x20);
        }
        *piVar2 = 0;
      }
      else {
        iVar4 = *piVar2;
        uVar6 = piVar2[2];
        uVar9 = 0;
        iVar5 = iVar4;
        piVar7 = in_stack_0000000c;
        for (iVar8 = 0; piVar1 = (int *)uVar12, iVar8 < (int)((ulonglong)uVar12 >> 0x20);
            iVar8 = iVar8 + 1) {
          unaff_r8 = *(int **)(iVar4 + iVar8 * 8 + 4);
          iVar10 = *(int *)(iVar4 + iVar8 * 8);
          uVar13 = uVar12;
          if (piVar7 == unaff_r8) {
            FUN_00018250();
            piVar7 = in_stack_0000000c;
            uVar12 = CONCAT44(iVar3,piVar2);
            uVar13 = CONCAT44(iVar3,piVar2);
            if ((char)local_44 == '\0') goto LAB_00452b38;
          }
          else {
LAB_00452b38:
            uVar9 = uVar9 + 1;
            if (uVar6 < uVar9) {
              local_44 = (int *)0x1;
              FUN_000987f4();
              iVar5 = local_3c;
              uVar6 = local_34;
              piVar7 = in_stack_0000000c;
              uVar9 = local_38;
              uVar13 = CONCAT44(iVar3,piVar2);
            }
            iVar11 = uVar9 - 1;
            *(int **)(iVar5 + iVar11 * 8 + 4) = unaff_r8;
            unaff_r8 = (int *)*DAT_00452c0c;
            if (unaff_r8 != (int *)0x0) {
              uVar13 = FUN_0009db64();
              *unaff_r8 = iVar10;
              unaff_r8[1] = *(int *)(extraout_r2 + iVar11 * 8);
              iVar5 = extraout_r2;
              uVar6 = extraout_r3;
            }
            *(int *)(iVar5 + iVar11 * 8) = iVar10;
            uVar12 = uVar13;
          }
        }
        piVar1[1] = uVar9;
        piVar1[2] = uVar6;
        if (*DAT_00452c0c != 0) {
          piVar1 = (int *)FUN_0009db64();
          *unaff_r8 = extraout_r2_00;
          unaff_r8[1] = *piVar1;
          iVar5 = extraout_r2_00;
        }
        *piVar1 = iVar5;
      }
    }
    FUN_000263c8();
    *(undefined1 *)(in_stack_00000004 + 0x24) = 1;
  }
  return;
}



/* k3c/internal/pkg/printer.(*PrinterConfig)._disallow_include_conflicts @ 00452c14 (size 1140) */

void k3c_internal_pkg_printer___PrinterConfig___disallow_include_conflicts(undefined4 param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 *puVar7;
  undefined4 *extraout_r2_01;
  int iVar8;
  int extraout_r3;
  uint uVar9;
  uint uVar10;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  bool bVar12;
  undefined8 uVar13;
  
  while( true ) {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x34)) break;
LAB_0045307c:
    unaff_lr = 0x453084;
    param_1 = FUN_0009bf64(param_1);
  }
  puVar11 = (undefined1 *)((int)register0x00000054 + -0xb4);
  *(undefined4 *)((int)register0x00000054 + -0xb4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -0xb0) = *(undefined4 *)((int)register0x00000054 + 4);
  *(undefined4 *)((int)register0x00000054 + -0xac) = *(undefined4 *)((int)register0x00000054 + 8);
  *(undefined4 *)((int)register0x00000054 + -0xa8) = *(undefined4 *)((int)register0x00000054 + 0xc);
  *(undefined4 *)((int)register0x00000054 + -0xa4) = *(undefined4 *)((int)register0x00000054 + 0x10)
  ;
  *(undefined4 *)((int)register0x00000054 + -0xa0) = *(undefined4 *)((int)register0x00000054 + 0x14)
  ;
  k3c_internal_pkg_printer___PrinterConfig___build_config_wrapper();
  iVar3 = **(int **)(*(int *)(*(int *)((int)register0x00000054 + 4) + 4) + 4);
  *(int *)((int)register0x00000054 + -0x54) = iVar3;
  uVar5 = *(undefined4 *)(iVar3 + 4);
  *(undefined4 *)((int)register0x00000054 + -0x74) = uVar5;
  *(undefined4 *)((int)register0x00000054 + -0x50) =
       *(undefined4 *)((int)register0x00000054 + -0x9c);
  *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_0045308c;
  *(undefined4 *)((int)register0x00000054 + -0xac) = uVar5;
  *(undefined4 *)((int)register0x00000054 + -0xa8) = uVar5;
  FUN_000986b8();
  *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -0xa4);
  uVar6 = **(undefined4 **)((int)register0x00000054 + -0x54);
  uVar5 = (*(undefined4 **)((int)register0x00000054 + -0x54))[1];
  *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_0045308c;
  *(undefined4 *)((int)register0x00000054 + -0xac) =
       *(undefined4 *)((int)register0x00000054 + -0xa4);
  *(undefined4 *)((int)register0x00000054 + -0xa8) =
       *(undefined4 *)((int)register0x00000054 + -0x74);
  *(undefined4 *)((int)register0x00000054 + -0xa4) = uVar6;
  *(undefined4 *)((int)register0x00000054 + -0xa0) = uVar5;
  FUN_00093f5c();
  uVar13 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x74),
                    *(undefined4 *)((int)register0x00000054 + -4));
  iVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  for (iVar3 = 0; iVar3 < (int)((ulonglong)uVar13 >> 0x20); iVar3 = iVar3 + 1) {
    uVar10 = uVar10 + 1;
    uVar6 = *(undefined4 *)((int)uVar13 + iVar3 * 8);
    uVar5 = *(undefined4 *)((int)uVar13 + iVar3 * 8 + 4);
    if (uVar9 < uVar10) {
      *(int *)((int)register0x00000054 + -0x70) = iVar3;
      *(undefined4 *)((int)register0x00000054 + -100) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0x80) = uVar5;
      *(int *)((int)register0x00000054 + -0xb0) = iVar8;
      *(uint *)((int)register0x00000054 + -0xac) = uVar10;
      *(uint *)((int)register0x00000054 + -0xa8) = uVar9;
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 1;
      *(undefined **)((int)register0x00000054 + -0xa0) = PTR_DAT_0045308c;
      FUN_000987f4();
      iVar8 = *(int *)((int)register0x00000054 + -0x9c);
      uVar10 = *(uint *)((int)register0x00000054 + -0x98);
      uVar9 = *(uint *)((int)register0x00000054 + -0x94);
      uVar13 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x74),
                        *(undefined4 *)((int)register0x00000054 + -4));
      iVar3 = *(int *)((int)register0x00000054 + -0x70);
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x80);
      uVar6 = *(undefined4 *)((int)register0x00000054 + -100);
    }
    unaff_r8 = (undefined4 *)(uVar10 - 1);
    *(undefined4 *)(iVar8 + (int)unaff_r8 * 8 + 4) = uVar5;
    if (*(int *)PTR_DAT_00453090 != 0) {
      uVar13 = FUN_0009db64();
      *unaff_r8 = uVar6;
      *(undefined4 *)(uVar10 + 3) = *(undefined4 *)(extraout_r3 + (int)unaff_r8 * 8);
      iVar3 = extraout_r2;
      iVar8 = extraout_r3;
    }
    *(undefined4 *)(iVar8 + (int)unaff_r8 * 8) = uVar6;
  }
  *(int *)((int)register0x00000054 + -0x6c) = iVar8;
  *(uint *)((int)register0x00000054 + -0x88) = uVar10;
  iVar3 = 0;
  do {
    if ((int)uVar10 <= iVar3) {
      *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
      *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
      return;
    }
    *(int *)((int)register0x00000054 + -0x70) = iVar3;
    uVar5 = *(undefined4 *)(iVar8 + iVar3 * 8);
    *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
    uVar6 = *(undefined4 *)(iVar8 + iVar3 * 8 + 4);
    *(undefined4 *)((int)register0x00000054 + -0x84) = uVar6;
    *(undefined4 *)((int)register0x00000054 + -0xb0) =
         *(undefined4 *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 4) + 4);
    *(undefined4 *)((int)register0x00000054 + -0xac) = uVar5;
    *(undefined4 *)((int)register0x00000054 + -0xa8) = uVar6;
    k3c_internal_pkg_printer___RawConfigParser__Options();
    if (*(int *)((int)register0x00000054 + -0xa0) == 0) {
      FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x3c),
                   *(undefined4 *)((int)register0x00000054 + -0xa4));
      *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_00453094;
      *(undefined4 *)((int)register0x00000054 + -0xac) = extraout_r2_00;
      *(undefined1 **)((int)register0x00000054 + -0xa8) =
           (undefined1 *)((int)register0x00000054 + -0x3c);
      FUN_00091764();
      while (*(int *)((int)register0x00000054 + -0x3c) != 0) {
        iVar3 = **(int **)(*(int *)((int)register0x00000054 + -0x50) + 4);
        *(int *)((int)register0x00000054 + -0x58) = iVar3;
        uVar5 = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             **(undefined4 **)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -0x7c) =
             (*(undefined4 **)((int)register0x00000054 + -0x38))[1];
        *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_00453098;
        *(undefined4 *)((int)register0x00000054 + -0xac) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0xa8) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0x84);
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x9c) == '\0') {
          puVar4 = (undefined *)0x0;
          uVar5 = 0;
          bVar12 = true;
        }
        else {
          *(char *)((int)register0x00000054 + -0x89) = *(char *)((int)register0x00000054 + -0x9c);
          uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x58) + 0xc);
          *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_00453098;
          *(undefined4 *)((int)register0x00000054 + -0xac) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0xa8) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          *(undefined4 *)((int)register0x00000054 + -0xa4) =
               *(undefined4 *)((int)register0x00000054 + -0x84);
          FUN_00025f60();
          puVar4 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0xa0);
          uVar5 = (*(undefined4 **)((int)register0x00000054 + -0xa0))[1];
          bVar12 = *(char *)((int)register0x00000054 + -0x89) == '\0';
        }
        if (bVar12) {
          cVar1 = '\0';
        }
        else {
          bVar12 = puVar4 == PTR_DAT_00453094;
          if (!bVar12) {
            *(undefined **)((int)register0x00000054 + -0xb0) = puVar4;
            *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_00453094;
            *(undefined **)((int)register0x00000054 + -0xa8) = PTR_DAT_004530a8;
            param_1 = FUN_000209b4();
            register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xb4);
            if (bVar12) {
              register0x00000054 = (BADSPACEBASE *)puVar11;
            }
            goto LAB_0045307c;
          }
          *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_00453094;
          *(undefined4 *)((int)register0x00000054 + -0xac) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0xa8) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          *(undefined4 *)((int)register0x00000054 + -0xa4) =
               *(undefined4 *)((int)register0x00000054 + -0x7c);
          FUN_00093560();
          cVar1 = *(char *)((int)register0x00000054 + -0x9c);
        }
        if (cVar1 != '\0') {
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x4c));
          *(undefined4 *)((int)register0x00000054 + -0xb0) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          *(undefined4 *)((int)register0x00000054 + -0xac) =
               *(undefined4 *)((int)register0x00000054 + -0x84);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0045308c;
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + -0xa8);
          *(undefined4 *)((int)register0x00000054 + -0xb0) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          *(undefined4 *)((int)register0x00000054 + -0xac) =
               *(undefined4 *)((int)register0x00000054 + -0x7c);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0045308c;
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)((int)register0x00000054 + -0xa8);
          *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_0045309c;
          *(undefined4 *)((int)register0x00000054 + -0xac) = 0x42;
          *(undefined1 **)((int)register0x00000054 + -0xa8) =
               (undefined1 *)((int)register0x00000054 + -0x4c);
          *(undefined4 *)((int)register0x00000054 + -0xa4) = 2;
          *(undefined4 *)((int)register0x00000054 + -0xa0) = 2;
          FUN_0013b72c();
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)((int)register0x00000054 + -0x98);
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x9c);
          *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_004530a0;
          FUN_00022cf8();
          puVar7 = *(undefined4 **)((int)register0x00000054 + -0xac);
          puVar7[1] = *(undefined4 *)((int)register0x00000054 + -0x78);
          if (*(int *)PTR_DAT_00453090 == 0) {
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x5c);
          }
          else {
            FUN_0009db54();
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x5c);
            *unaff_r8 = uVar5;
            puVar7 = extraout_r2_01;
          }
          *puVar7 = uVar5;
          *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_004530a4;
          *(undefined4 **)((int)register0x00000054 + 0x1c) = puVar7;
          return;
        }
        *(undefined1 **)((int)register0x00000054 + -0xb0) =
             (undefined1 *)((int)register0x00000054 + -0x3c);
        FUN_000919c8();
      }
    }
    else {
      pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0xa0) + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0xb0) =
           *(undefined4 *)((int)register0x00000054 + -0x9c);
      (*pcVar2)();
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xb0) =
           *(undefined4 *)((int)register0x00000054 + -0xac);
      *(undefined4 *)((int)register0x00000054 + -0xac) =
           *(undefined4 *)((int)register0x00000054 + -0xa8);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0045308c;
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -0xa8);
      *(undefined1 **)((int)register0x00000054 + -0xb0) =
           (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xac) = 1;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = 1;
      k3c_internal_pkg_logger_Error();
    }
    iVar3 = *(int *)((int)register0x00000054 + -0x70) + 1;
    iVar8 = *(int *)((int)register0x00000054 + -0x6c);
    uVar10 = *(uint *)((int)register0x00000054 + -0x88);
  } while( true );
}



/* k3c/internal/pkg/printer.(*PrinterConfig).Cmd_SAVE_CONFIG @ 004530ac (size 2772) */

/* WARNING: Removing unreachable block (ram,0x00453108) */
/* WARNING: Removing unreachable block (ram,0x00453b8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___PrinterConfig__Cmd_SAVE_CONFIG(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined *extraout_r1;
  undefined4 uVar7;
  int extraout_r2;
  undefined4 extraout_r2_00;
  uint uVar8;
  undefined4 extraout_r2_01;
  undefined4 *extraout_r2_02;
  uint extraout_r2_03;
  undefined *extraout_r2_04;
  undefined *puVar9;
  char cVar10;
  int iVar11;
  int extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  uint uVar12;
  undefined4 uVar13;
  uint extraout_r3_02;
  undefined4 uVar14;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar15;
  undefined4 unaff_lr;
  undefined1 uVar16;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x84)) {
      puVar15 = (undefined1 *)((int)register0x00000054 + -0x104);
      *(undefined4 *)((int)register0x00000054 + -0x104) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_004538ac;
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_004538b0;
      *(undefined1 **)((int)register0x00000054 + -0x100) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0xfc) = 1;
      *(undefined4 *)((int)register0x00000054 + -0xf8) = 1;
      k3c_internal_pkg_logger_Debug();
      if (*(int *)(**(int **)(*(int *)(*(int *)((int)register0x00000054 + 4) + 4) + 4) + 4) == 0) {
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_004538ac;
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_004538c4;
        *(undefined1 **)((int)register0x00000054 + -0x100) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0xfc) = 1;
        *(undefined4 *)((int)register0x00000054 + -0xf8) = 1;
        k3c_internal_pkg_logger_Debug();
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        return;
      }
      *(int *)((int)register0x00000054 + -4) = *(int *)(*(int *)((int)register0x00000054 + 4) + 4);
      *(undefined **)((int)register0x00000054 + -0x100) = PTR_DAT_004538b4;
      FUN_00022cf8();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0xfc);
      *(undefined4 **)((int)register0x00000054 + -0xa0) = puVar1;
      *puVar1 = 0;
      *(undefined4 *)((int)register0x00000054 + -0x100) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 4);
      *(undefined **)((int)register0x00000054 + -0xfc) = PTR_DAT_004538b8;
      *(undefined4 **)((int)register0x00000054 + -0xf8) = puVar1;
      k3c_internal_pkg_printer___RawConfigParser__Write();
      *(undefined **)((int)register0x00000054 + -0x100) = PTR_DAT_004538bc;
      *(undefined4 *)((int)register0x00000054 + -0xfc) =
           *(undefined4 *)((int)register0x00000054 + -0xa0);
      FUN_000ae540();
      *(undefined4 *)((int)register0x00000054 + -0x100) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xfc) =
           *(undefined4 *)((int)register0x00000054 + -0xf8);
      *(undefined4 *)((int)register0x00000054 + -0xf8) =
           *(undefined4 *)((int)register0x00000054 + -0xf4);
      FUN_00099104();
      *(undefined4 *)((int)register0x00000054 + -0x100) =
           *(undefined4 *)((int)register0x00000054 + -0xf4);
      *(undefined4 *)((int)register0x00000054 + -0xfc) =
           *(undefined4 *)((int)register0x00000054 + -0xf0);
      *(undefined **)((int)register0x00000054 + -0xf8) = PTR_DAT_004538c0;
      *(undefined4 *)((int)register0x00000054 + -0xf4) = 1;
      FUN_00151ab0();
      *(undefined4 *)((int)register0x00000054 + -0x100) =
           *(undefined4 *)((int)register0x00000054 + -0xf0);
      *(undefined4 *)((int)register0x00000054 + -0xfc) =
           *(undefined4 *)((int)register0x00000054 + -0xec);
      *(undefined **)((int)register0x00000054 + -0xf8) = PTR_DAT_004538c0;
      *(undefined4 *)((int)register0x00000054 + -0xf4) = 1;
      *(undefined4 *)((int)register0x00000054 + -0xf0) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xec) = 0xffffffff;
      FUN_0014f168();
      iVar2 = *(int *)((int)register0x00000054 + -0xe8);
      *(int *)((int)register0x00000054 + -0xa4) = iVar2;
      iVar4 = *(int *)((int)register0x00000054 + -0xe4);
      *(int *)((int)register0x00000054 + -0xd4) = iVar4;
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0xe0);
      *(undefined4 *)((int)register0x00000054 + -0xd0) = uVar7;
      for (iVar11 = 0; iVar11 < iVar4; iVar11 = iVar11 + 1) {
        *(int *)((int)register0x00000054 + -0xc4) = iVar11;
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x20),iVar2);
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 4;
        *(undefined **)((int)register0x00000054 + -0x20) =
             PTR_s_____type_cfg___waitstatcodeunixi_00820821_0xc9_004538c8;
        uVar7 = *(undefined4 *)(extraout_r2 + extraout_r3 * 8);
        iVar2 = extraout_r2 + extraout_r3 * 8;
        *(int *)((int)register0x00000054 + -8) = iVar2;
        *(undefined4 *)((int)register0x00000054 + -0x14) = *(undefined4 *)(iVar2 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x18) = uVar7;
        *(undefined1 **)((int)register0x00000054 + -0x100) =
             (undefined1 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0xfc) = 2;
        *(undefined4 *)((int)register0x00000054 + -0xf8) = 2;
        unaff_r8 = (undefined4 *)0x0;
        *(undefined4 *)((int)register0x00000054 + -0xf4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xf0) = 0;
        FUN_0014f8fc();
        uVar7 = *(undefined4 *)((int)register0x00000054 + -0xec);
        *(undefined4 *)(*(int *)((int)register0x00000054 + -8) + 4) =
             *(undefined4 *)((int)register0x00000054 + -0xe8);
        if (*(int *)PTR_DAT_004538cc == 0) {
          iVar11 = *(int *)((int)register0x00000054 + -0xc4);
          iVar2 = *(int *)((int)register0x00000054 + -0xa4);
        }
        else {
          FUN_0009db64();
          iVar11 = *(int *)((int)register0x00000054 + -0xc4);
          iVar2 = *(int *)((int)register0x00000054 + -0xa4);
          _DAT_00000004 = *(undefined4 *)(iVar2 + iVar11 * 8);
          uVar7 = extraout_r3_00;
          uRam00000000 = extraout_r3_00;
        }
        *(undefined4 *)(iVar2 + iVar11 * 8) = uVar7;
        iVar4 = *(int *)((int)register0x00000054 + -0xd4);
        uVar7 = *(undefined4 *)((int)register0x00000054 + -0xd0);
      }
      *(int *)((int)register0x00000054 + -0x100) = iVar2;
      *(int *)((int)register0x00000054 + -0xfc) = iVar4;
      *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar7;
      *(undefined **)((int)register0x00000054 + -0xf4) = PTR_DAT_004538c0;
      *(undefined4 *)((int)register0x00000054 + -0xf0) = 1;
      FUN_0014f8fc();
      uVar7 = *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x78) =
           *(undefined4 *)((int)register0x00000054 + -0xec);
      *(undefined4 *)((int)register0x00000054 + -0xac) =
           *(undefined4 *)((int)register0x00000054 + -0xe8);
      *(undefined **)((int)register0x00000054 + -0x100) = PTR_DAT_004538d0;
      *(undefined4 *)((int)register0x00000054 + -0xfc) = uVar7;
      *(undefined **)((int)register0x00000054 + -0xf8) = PTR_DAT_004538d4;
      *(undefined4 *)((int)register0x00000054 + -0xf4) = 0xb;
      FUN_00025f60();
      puVar5 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0xf0);
      uVar16 = 0;
      puVar9 = PTR_DAT_004538ac;
      if (puVar5 == PTR_DAT_004538ac) {
        puVar1 = (undefined4 *)(*(undefined4 **)((int)register0x00000054 + -0xf0))[1];
        uVar6 = puVar1[1];
        *(undefined4 *)((int)register0x00000054 + -0xb4) = uVar6;
        uVar7 = *puVar1;
        *(undefined4 *)((int)register0x00000054 + -0x80) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x100) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0xfc) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar6;
        k3c_internal_pkg_printer___PrinterConfig___read_config_file();
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + -0xec);
        *(undefined4 *)((int)register0x00000054 + -0x100) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0xfc) =
             *(undefined4 *)((int)register0x00000054 + -0xf4);
        *(undefined4 *)((int)register0x00000054 + -0xf8) =
             *(undefined4 *)((int)register0x00000054 + -0xf0);
        k3c_internal_pkg_printer___PrinterConfig___find_autosave_data();
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + -0xf4);
        *(undefined4 *)((int)register0x00000054 + -200) =
             *(undefined4 *)((int)register0x00000054 + -0xf0);
        *(undefined4 *)((int)register0x00000054 + -0x100) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0xfc) =
             *(undefined4 *)((int)register0x00000054 + -0xf4);
        *(undefined4 *)((int)register0x00000054 + -0xf8) =
             *(undefined4 *)((int)register0x00000054 + -0xf0);
        *(undefined4 *)((int)register0x00000054 + -0xf4) =
             *(undefined4 *)((int)register0x00000054 + -0x80);
        *(undefined4 *)((int)register0x00000054 + -0xf0) =
             *(undefined4 *)((int)register0x00000054 + -0xb4);
        k3c_internal_pkg_printer___PrinterConfig___build_config_wrapper();
        if (*(int *)((int)register0x00000054 + -0xc0) != 0) {
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
          *(undefined **)((int)register0x00000054 + -0x100) = PTR_DAT_00453c00;
          *(undefined4 *)((int)register0x00000054 + -0xfc) = 0x2e;
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00453bdc;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0xf8);
          *(undefined1 **)((int)register0x00000054 + -0x100) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0xfc) = 1;
          *(undefined4 *)((int)register0x00000054 + -0xf8) = 1;
          k3c_internal_pkg_logger_Error();
          *(undefined **)((int)register0x00000054 + -0x100) = PTR_DAT_00453c04;
          FUN_00022cf8();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0xfc);
          puVar1[1] = 0x2e;
          *puVar1 = PTR_DAT_00453c00;
          *(undefined **)((int)register0x00000054 + 0x10) = PTR_DAT_00453c08;
          *(undefined4 **)((int)register0x00000054 + 0x14) = puVar1;
          return;
        }
        uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
        *(int *)((int)register0x00000054 + -0x100) = *(int *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0xfc) =
             *(undefined4 *)((int)register0x00000054 + -0x98);
        *(undefined4 *)((int)register0x00000054 + -0xf8) =
             *(undefined4 *)((int)register0x00000054 + -200);
        *(undefined4 *)((int)register0x00000054 + -0xf4) = uVar7;
        k3c_internal_pkg_printer___PrinterConfig___strip_duplicates();
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + -0xf0);
        *(undefined4 *)((int)register0x00000054 + -200) =
             *(undefined4 *)((int)register0x00000054 + -0xec);
        *(undefined4 *)((int)register0x00000054 + -0x100) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0xfc) =
             *(undefined4 *)((int)register0x00000054 + -0xf0);
        *(undefined4 *)((int)register0x00000054 + -0xf8) =
             *(undefined4 *)((int)register0x00000054 + -0xec);
        *(undefined4 *)((int)register0x00000054 + -0xf4) =
             *(undefined4 *)((int)register0x00000054 + -0x80);
        *(undefined4 *)((int)register0x00000054 + -0xf0) =
             *(undefined4 *)((int)register0x00000054 + -0xb4);
        k3c_internal_pkg_printer___PrinterConfig___disallow_include_conflicts();
        *(undefined4 *)((int)register0x00000054 + -0x100) =
             *(undefined4 *)((int)register0x00000054 + -0x98);
        *(undefined4 *)((int)register0x00000054 + -0xfc) =
             *(undefined4 *)((int)register0x00000054 + -200);
        FUN_00151ce4();
        FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x50),
                     *(undefined4 *)((int)register0x00000054 + -0xf4),
                     *(undefined4 *)((int)register0x00000054 + -0xf8));
        *(undefined4 *)((int)register0x00000054 + -0x4c) = extraout_r2_00;
        *(undefined4 *)((int)register0x00000054 + -0x50) = extraout_r3_01;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 1;
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_004538c0;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 0x8b;
        *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_004538d8;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004538c0;
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0xac);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -0x78);
        *(undefined4 *)((int)register0x00000054 + -0x24) = 1;
        *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_004538c0;
        *(undefined4 *)((int)register0x00000054 + -0x100) = 0;
        *(undefined1 **)((int)register0x00000054 + -0xfc) =
             (undefined1 *)((int)register0x00000054 + -0x50);
        *(undefined4 *)((int)register0x00000054 + -0xf8) = 6;
        *(undefined4 *)((int)register0x00000054 + -0xf4) = 6;
        FUN_00076130();
        *(undefined4 *)((int)register0x00000054 + -0x84) =
             *(undefined4 *)((int)register0x00000054 + -0xf0);
        *(undefined4 *)((int)register0x00000054 + -0xb8) =
             *(undefined4 *)((int)register0x00000054 + -0xec);
        k3c_internal_pkg_printer_UseMutableConfig();
        if (*(char *)((int)register0x00000054 + -0x100) != '\0') {
          *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_004538ac;
          *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_004538dc;
          *(undefined1 **)((int)register0x00000054 + -0x100) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0xfc) = 1;
          *(undefined4 *)((int)register0x00000054 + -0xf8) = 1;
          k3c_internal_pkg_logger_Debug();
          uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
          *(int *)((int)register0x00000054 + -0x100) = *(int *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0xfc) = uVar7;
          k3c_internal_pkg_printer___PrinterConfig___build_mutable_config();
          *(undefined4 *)((int)register0x00000054 + -0x94) =
               *(undefined4 *)((int)register0x00000054 + -0xf8);
          *(undefined **)((int)register0x00000054 + -0x100) = PTR_DAT_004538e0;
          FUN_00022cf8();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0xfc);
          *puVar1 = PTR_k3c_internal_pkg_printer___PrinterConfig__Cmd_SAVE_CONFIG_func2_004538e4;
          if (*(int *)PTR_DAT_004538cc == 0) {
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x94);
          }
          else {
            puVar1 = (undefined4 *)FUN_0009db54();
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x94);
            *unaff_r8 = uVar7;
          }
          puVar1[1] = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x100) =
               *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 0xc);
          *(undefined4 **)((int)register0x00000054 + -0xfc) = puVar1;
          k3c_internal_pkg_reactor___Reactor__Async_wait_complete();
          if (*(int *)((int)register0x00000054 + -0xf8) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x100) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            k3c_internal_pkg_printer___MutableConfig__SyncFile();
          }
          else {
            *(undefined4 *)((int)register0x00000054 + -0x90) =
                 *(undefined4 *)((int)register0x00000054 + -0xf4);
            *(undefined **)((int)register0x00000054 + -0x100) = PTR_DAT_004538e8;
            *(int *)((int)register0x00000054 + -0xfc) = *(int *)((int)register0x00000054 + -0xf8);
            FUN_00020dac();
            pcVar3 = *(code **)(*(int *)((int)register0x00000054 + -0xf8) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x100) =
                 *(undefined4 *)((int)register0x00000054 + -0x90);
            (*pcVar3)();
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0xfc);
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0xf8);
            *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x100) = 0;
            *(undefined **)((int)register0x00000054 + -0xfc) = PTR_DAT_004538ec;
            *(undefined4 *)((int)register0x00000054 + -0xf8) = 0x20;
            *(undefined4 *)((int)register0x00000054 + -0xf4) = uVar7;
            *(undefined4 *)((int)register0x00000054 + -0xf0) = uVar6;
            FUN_0007636c();
            *(undefined4 *)((int)register0x00000054 + -0x100) =
                 *(undefined4 *)((int)register0x00000054 + -0xec);
            *(undefined4 *)((int)register0x00000054 + -0xfc) =
                 *(undefined4 *)((int)register0x00000054 + -0xe8);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_004538ac;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0xf8);
            *(undefined1 **)((int)register0x00000054 + -0x100) =
                 (undefined1 *)((int)register0x00000054 + -0x10);
            *(undefined4 *)((int)register0x00000054 + -0xfc) = 1;
            *(undefined4 *)((int)register0x00000054 + -0xf8) = 1;
            k3c_internal_pkg_logger_Error();
          }
          *(undefined4 *)((int)register0x00000054 + -0x100) =
               *(undefined4 *)((int)register0x00000054 + 4);
          k3c_internal_pkg_printer___PrinterConfig__save_default_data();
          if (*(int *)((int)register0x00000054 + -0xf8) != 0) {
            pcVar3 = *(code **)(*(int *)((int)register0x00000054 + -0xf8) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x100) =
                 *(undefined4 *)((int)register0x00000054 + -0xf4);
            (*pcVar3)();
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0xfc);
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0xf8);
            *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x100) = 0;
            *(undefined **)((int)register0x00000054 + -0xfc) = PTR_DAT_004538f0;
            *(undefined4 *)((int)register0x00000054 + -0xf8) = 0x19;
            *(undefined4 *)((int)register0x00000054 + -0xf4) = uVar7;
            *(undefined4 *)((int)register0x00000054 + -0xf0) = uVar6;
            FUN_0007636c();
            *(undefined4 *)((int)register0x00000054 + -0x100) =
                 *(undefined4 *)((int)register0x00000054 + -0xec);
            *(undefined4 *)((int)register0x00000054 + -0xfc) =
                 *(undefined4 *)((int)register0x00000054 + -0xe8);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_004538ac;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0xf8);
            *(undefined1 **)((int)register0x00000054 + -0x100) =
                 (undefined1 *)((int)register0x00000054 + -0x10);
            *(undefined4 *)((int)register0x00000054 + -0xfc) = 1;
            *(undefined4 *)((int)register0x00000054 + -0xf8) = 1;
            k3c_internal_pkg_logger_Error();
          }
          goto LAB_00453a78;
        }
        uVar7 = FUN_001160a8();
        uVar7 = FUN_0009e2f0(uVar7,(undefined1 *)((int)register0x00000054 + -0x100),
                             (undefined1 *)((int)register0x00000054 + -100));
        FUN_0009e2f0(uVar7,(undefined1 *)((int)register0x00000054 + -100),
                     (undefined1 *)((int)register0x00000054 + -0x100));
        *(undefined **)((int)register0x00000054 + -0xec) =
             PTR_s__20060102_150405invalid_checksum_008262d0_0x399a_004538f4;
        *(undefined4 *)((int)register0x00000054 + -0xe8) = 0x10;
        FUN_00101cdc();
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)((int)register0x00000054 + -0xe4);
        *(undefined4 *)((int)register0x00000054 + -0xbc) =
             *(undefined4 *)((int)register0x00000054 + -0xe0);
        *(undefined4 *)((int)register0x00000054 + -0x100) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xfc) =
             *(undefined4 *)((int)register0x00000054 + -0x80);
        *(undefined4 *)((int)register0x00000054 + -0xf8) =
             *(undefined4 *)((int)register0x00000054 + -0xb4);
        *(undefined4 *)((int)register0x00000054 + -0xf4) =
             *(undefined4 *)((int)register0x00000054 + -0xe4);
        *(undefined4 *)((int)register0x00000054 + -0xf0) =
             *(undefined4 *)((int)register0x00000054 + -0xe0);
        FUN_0007636c();
        *(undefined4 *)((int)register0x00000054 + -0x7c) =
             *(undefined4 *)((int)register0x00000054 + -0xec);
        *(undefined4 *)((int)register0x00000054 + -0xb0) =
             *(undefined4 *)((int)register0x00000054 + -0xe8);
        *(undefined4 *)((int)register0x00000054 + -0x100) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xfc) =
             *(undefined4 *)((int)register0x00000054 + -0x80);
        *(undefined4 *)((int)register0x00000054 + -0xf8) =
             *(undefined4 *)((int)register0x00000054 + -0xb4);
        *(undefined **)((int)register0x00000054 + -0xf4) =
             PTR_s__autosave_adaptiveprocessorendpo_00823504_0x140_004538f8;
        *(undefined4 *)((int)register0x00000054 + -0xf0) = 9;
        FUN_0007636c();
        uVar7 = *(undefined4 *)((int)register0x00000054 + -0xec);
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0xe8);
        uVar8 = *(uint *)((int)register0x00000054 + -0xb4);
        if ((int)uVar8 < 4) {
          cVar10 = '\0';
LAB_00453808:
          if (cVar10 == '\0') {
            uVar13 = *(undefined4 *)((int)register0x00000054 + -0x7c);
            uVar14 = *(undefined4 *)((int)register0x00000054 + -0xb0);
            goto LAB_0045390c;
          }
          uVar12 = uVar8 - 4;
          uVar16 = uVar8 == uVar12;
          if (uVar12 <= uVar8) {
            *(uint *)((int)register0x00000054 + -0xa8) = uVar12;
            *(undefined4 *)((int)register0x00000054 + -0x100) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xfc) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            *(uint *)((int)register0x00000054 + -0xf8) = uVar12;
            *(undefined4 *)((int)register0x00000054 + -0xf4) =
                 *(undefined4 *)((int)register0x00000054 + -0x88);
            *(undefined4 *)((int)register0x00000054 + -0xf0) =
                 *(undefined4 *)((int)register0x00000054 + -0xbc);
            *(undefined **)((int)register0x00000054 + -0xec) =
                 PTR_s__cfg___waitstatcodeunixinforeads_00820821_0xd1_004538fc;
            *(undefined4 *)((int)register0x00000054 + -0xe8) = 4;
            FUN_000763e8();
            *(undefined4 *)((int)register0x00000054 + -0x7c) =
                 *(undefined4 *)((int)register0x00000054 + -0xe4);
            *(undefined4 *)((int)register0x00000054 + -0xb0) =
                 *(undefined4 *)((int)register0x00000054 + -0xe0);
            *(undefined4 *)((int)register0x00000054 + -0x100) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xfc) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            *(undefined4 *)((int)register0x00000054 + -0xf8) =
                 *(undefined4 *)((int)register0x00000054 + -0xa8);
            *(undefined **)((int)register0x00000054 + -0xf4) =
                 PTR_s__autosave_cfgempty_section_proc__008262d0_0xd7d_00453900;
            *(undefined4 *)((int)register0x00000054 + -0xf0) = 0xd;
            FUN_0007636c();
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0xec);
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0xe8);
            uVar8 = *(uint *)((int)register0x00000054 + -0xb4);
            uVar13 = *(undefined4 *)((int)register0x00000054 + -0x7c);
            uVar14 = *(undefined4 *)((int)register0x00000054 + -0xb0);
LAB_0045390c:
            *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar13;
            *(undefined4 *)((int)register0x00000054 + -0xb0) = uVar14;
            *(undefined4 *)((int)register0x00000054 + -0x9c) = uVar7;
            *(undefined4 *)((int)register0x00000054 + -0xcc) = uVar6;
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x74),uVar8);
            *(undefined4 *)((int)register0x00000054 + -0x100) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            *(undefined4 *)((int)register0x00000054 + -0xfc) = extraout_r2_01;
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x74) = PTR_DAT_00453bdc;
            *(undefined4 *)((int)register0x00000054 + -0x70) =
                 *(undefined4 *)((int)register0x00000054 + -0xf8);
            *(undefined4 *)((int)register0x00000054 + -0x100) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            *(undefined4 *)((int)register0x00000054 + -0xfc) =
                 *(undefined4 *)((int)register0x00000054 + -0xb0);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_00453bdc;
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + -0xf8);
            *(undefined **)((int)register0x00000054 + -0x100) = PTR_DAT_00453be0;
            *(undefined4 *)((int)register0x00000054 + -0xfc) = 0x24;
            *(undefined1 **)((int)register0x00000054 + -0xf8) =
                 (undefined1 *)((int)register0x00000054 + -0x74);
            *(undefined4 *)((int)register0x00000054 + -0xf4) = 2;
            *(undefined4 *)((int)register0x00000054 + -0xf0) = 2;
            k3c_internal_pkg_logger_Debugf();
            *(undefined **)((int)register0x00000054 + -0x100) = PTR_DAT_00453be4;
            FUN_00022cf8();
            puVar1 = *(undefined4 **)((int)register0x00000054 + -0xfc);
            *puVar1 = PTR_k3c_internal_pkg_printer___PrinterConfig__Cmd_SAVE_CONFIG_func1_00453be8;
            puVar1[2] = *(undefined4 *)((int)register0x00000054 + -0xcc);
            if (*(int *)PTR_DAT_00453bec == 0) {
              uVar7 = *(undefined4 *)((int)register0x00000054 + -0x9c);
              uVar6 = *(undefined4 *)((int)register0x00000054 + -0x84);
              uVar13 = *(undefined4 *)((int)register0x00000054 + -0x80);
              uVar14 = *(undefined4 *)((int)register0x00000054 + -0x7c);
            }
            else {
              FUN_0009db84();
              uVar7 = *(undefined4 *)((int)register0x00000054 + -0x9c);
              *unaff_r8 = uVar7;
              uVar6 = *(undefined4 *)((int)register0x00000054 + -0x84);
              unaff_r8[1] = uVar6;
              uVar13 = *(undefined4 *)((int)register0x00000054 + -0x80);
              unaff_r8[2] = uVar13;
              uVar14 = *(undefined4 *)((int)register0x00000054 + -0x7c);
              unaff_r8[3] = uVar14;
              puVar1 = extraout_r2_02;
            }
            puVar1[1] = uVar7;
            puVar1[4] = *(undefined4 *)((int)register0x00000054 + -0xb8);
            puVar1[3] = uVar6;
            puVar1[6] = *(undefined4 *)((int)register0x00000054 + -0xb4);
            puVar1[5] = uVar13;
            puVar1[8] = *(undefined4 *)((int)register0x00000054 + -0xb0);
            puVar1[7] = uVar14;
            *(undefined4 *)((int)register0x00000054 + -0x100) =
                 *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 **)((int)register0x00000054 + -0xfc) = puVar1;
            k3c_internal_pkg_reactor___Reactor__Async_wait_complete();
            if (*(int *)((int)register0x00000054 + -0xf8) != 0) {
              *(undefined4 *)((int)register0x00000054 + -0x8c) =
                   *(undefined4 *)((int)register0x00000054 + -0xf4);
              *(undefined **)((int)register0x00000054 + -0x100) = PTR_DAT_00453bf0;
              *(int *)((int)register0x00000054 + -0xfc) = *(int *)((int)register0x00000054 + -0xf8);
              FUN_00020dac();
              *(undefined4 *)((int)register0x00000054 + 0x10) =
                   *(undefined4 *)((int)register0x00000054 + -0xf8);
              *(undefined4 *)((int)register0x00000054 + 0x14) =
                   *(undefined4 *)((int)register0x00000054 + -0x8c);
              return;
            }
LAB_00453a78:
            *(undefined4 *)((int)register0x00000054 + -0x100) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            k3c_internal_pkg_printer___PrinterConfig__Read_main_config();
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0xfc);
            *(undefined **)((int)register0x00000054 + -0x100) = PTR_DAT_00453bf4;
            FUN_00022cf8();
            puVar1 = *(undefined4 **)((int)register0x00000054 + -0xfc);
            *puVar1 = PTR_DAT_00453bf8;
            if (*(int *)PTR_DAT_00453bec == 0) {
              uVar7 = *(undefined4 *)((int)register0x00000054 + -4);
            }
            else {
              puVar1 = (undefined4 *)FUN_0009db54();
              uVar7 = *(undefined4 *)((int)register0x00000054 + -4);
              *unaff_r8 = uVar7;
            }
            puVar1[1] = uVar7;
            *(undefined4 *)((int)register0x00000054 + -0x100) =
                 **(undefined4 **)((int)register0x00000054 + 4);
            *(undefined **)((int)register0x00000054 + -0xfc) = PTR_DAT_00453bfc;
            *(undefined4 *)((int)register0x00000054 + -0xf8) = 0x14;
            *(undefined4 **)((int)register0x00000054 + -0xf4) = puVar1;
            *(undefined4 *)((int)register0x00000054 + -0xf0) = 1;
            *(undefined4 *)((int)register0x00000054 + -0xec) = 1;
            k3c_internal_pkg_printer___Printer__Send_event();
            *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            return;
          }
          FUN_0009dbf4();
          uVar8 = extraout_r2_03;
          uVar12 = extraout_r3_02;
        }
        else {
          uVar12 = uVar8 - 4;
          uVar16 = uVar8 == uVar12;
          if (uVar12 <= uVar8) {
            *(undefined4 *)((int)register0x00000054 + -0xcc) = uVar6;
            *(undefined4 *)((int)register0x00000054 + -0x9c) = uVar7;
            *(uint *)((int)register0x00000054 + -0x100) =
                 *(int *)((int)register0x00000054 + -0x80) + uVar12;
            *(undefined **)((int)register0x00000054 + -0xfc) =
                 PTR_s__cfg___waitstatcodeunixinforeads_00820821_0xd1_004538fc;
            *(undefined4 *)((int)register0x00000054 + -0xf8) = 4;
            FUN_00018250();
            cVar10 = *(char *)((int)register0x00000054 + -0xf4);
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0xcc);
            uVar8 = *(uint *)((int)register0x00000054 + -0xb4);
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x9c);
            goto LAB_00453808;
          }
        }
        FUN_0009dc34(uVar12,uVar8);
        *(undefined **)((int)register0x00000054 + -0x100) = PTR_DAT_00453c0c;
        FUN_00020b18();
        puVar5 = extraout_r1;
        puVar9 = extraout_r2_04;
      }
      *(undefined **)((int)register0x00000054 + -0x100) = puVar5;
      *(undefined **)((int)register0x00000054 + -0xfc) = puVar9;
      *(undefined **)((int)register0x00000054 + -0xf8) = PTR_DAT_00453c10;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x104);
      if ((bool)uVar16) {
        register0x00000054 = (BADSPACEBASE *)puVar15;
      }
    }
    unaff_lr = 0x453bd4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*PrinterConfig).Cmd_SAVE_CONFIG.func2 @ 00453c14 (size 72) */

void k3c_internal_pkg_printer___PrinterConfig__Cmd_SAVE_CONFIG_func2(void)

{
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  k3c_internal_pkg_printer___MutableConfig__SaveAndBackup();
  return;
}



/* k3c/internal/pkg/printer.(*PrinterConfig).Cmd_SAVE_CONFIG.func1 @ 00453c5c (size 420) */

void k3c_internal_pkg_printer___PrinterConfig__Cmd_SAVE_CONFIG_func1(void)

{
  undefined4 uVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_ffffff9c;
  undefined4 in_stack_ffffffa0;
  undefined4 in_stack_ffffffa4;
  undefined4 uVar2;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x453dfc;
    FUN_0009bf00();
  }
  uVar1 = *(undefined4 *)(unaff_r7 + 8);
  FUN_000766e8();
  uVar2 = 0x1b6;
  FUN_0012e52c();
  if (iStack_58 == 0) {
    FUN_0012eed4();
    FUN_0012eed4();
    return;
  }
  (**(code **)(iStack_58 + 0xc))();
  FUN_0009df04(0,&uStack_10,in_stack_ffffff9c,uVar1,unaff_lr,uStack_54,uVar1,in_stack_ffffff9c,
               in_stack_ffffffa0,in_stack_ffffffa4,uVar2);
  uStack_10 = DAT_00453e04;
  uStack_c = DAT_00453e08;
  FUN_0008f77c();
  uStack_8 = DAT_00453e04;
  k3c_internal_pkg_logger_Error();
  return;
}



/* k3c/internal/pkg/printer.(*PrinterConfig).save_default_data @ 00453e0c (size 2828) */

/* WARNING: Removing unreachable block (ram,0x00453eec) */
/* WARNING: Removing unreachable block (ram,0x00454134) */
/* WARNING: Removing unreachable block (ram,0x00454914) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___PrinterConfig__save_default_data(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  undefined *puVar5;
  undefined *extraout_r1_01;
  int iVar6;
  uint extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  undefined4 extraout_r2_02;
  uint uVar7;
  undefined4 extraout_r2_03;
  undefined4 *extraout_r2_04;
  uint extraout_r2_05;
  undefined *extraout_r2_06;
  undefined *puVar8;
  char cVar9;
  undefined4 uVar10;
  int *extraout_r3;
  int extraout_r3_00;
  int iVar11;
  int extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  uint uVar12;
  undefined4 uVar13;
  uint extraout_r3_04;
  undefined4 uVar14;
  int iVar15;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar16;
  undefined4 unaff_lr;
  bool bVar17;
  undefined1 uVar18;
  undefined8 uVar19;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x90)) {
      puVar16 = (undefined1 *)((int)register0x00000054 + -0x110);
      *(undefined4 *)((int)register0x00000054 + -0x110) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x10c) = PTR_DAT_004545f8;
      FUN_00022cf8();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x108);
      *(undefined4 **)((int)register0x00000054 + -0xa0) = puVar1;
      *puVar1 = 0;
      puVar1[3] = 0;
      iVar6 = **(int **)(*(int *)(*(int *)((int)register0x00000054 + 4) + 4) + 4);
      *(int *)((int)register0x00000054 + -0x90) = iVar6;
      uVar10 = *(undefined4 *)(iVar6 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x10c) = PTR_DAT_004545fc;
      *(undefined4 *)((int)register0x00000054 + -0x108) = uVar10;
      *(undefined **)((int)register0x00000054 + -0x104) =
           PTR_s_leviQ2_default20060102150405jump_008262d0_0x1c5a_00454600;
      *(undefined4 *)((int)register0x00000054 + -0x100) = 0xe;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0xf8) == '\0') {
        uVar10 = 0;
        uVar3 = 0;
        bVar17 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0xe5) = *(char *)((int)register0x00000054 + -0xf8);
        uVar10 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x90) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x10c) = PTR_DAT_004545fc;
        *(undefined4 *)((int)register0x00000054 + -0x108) = uVar10;
        *(undefined **)((int)register0x00000054 + -0x104) =
             PTR_s_leviQ2_default20060102150405jump_008262d0_0x1c5a_00454600;
        *(undefined4 *)((int)register0x00000054 + -0x100) = 0xe;
        FUN_00025f60();
        uVar3 = **(undefined4 **)((int)register0x00000054 + -0xfc);
        uVar10 = (*(undefined4 **)((int)register0x00000054 + -0xfc))[1];
        bVar17 = *(char *)((int)register0x00000054 + -0xe5) == '\0';
      }
      if (!bVar17) {
        *(undefined4 *)((int)register0x00000054 + -0xe4) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0xa8) = uVar10;
        iVar6 = *(int *)((int)register0x00000054 + -0xa0);
        if (*(int *)(iVar6 + 0xc) == 0) {
          FUN_000908bc(uVar10);
          iVar4 = *(int *)((int)register0x00000054 + -0x10c);
          if (*(int *)PTR_DAT_00454604 == 0) {
            iVar6 = *(int *)((int)register0x00000054 + -0xa0);
          }
          else {
            FUN_0009db64();
            *unaff_r8 = extraout_r1;
            iVar6 = *(int *)((int)register0x00000054 + -0xa0);
            unaff_r8[1] = *(int *)(iVar6 + 0xc);
            iVar4 = extraout_r1;
          }
          *(int *)(iVar6 + 0xc) = iVar4;
        }
        uVar10 = *(undefined4 *)(iVar6 + 0xc);
        *(undefined **)((int)register0x00000054 + -0x10c) = PTR_DAT_004545fc;
        *(undefined4 *)((int)register0x00000054 + -0x108) = uVar10;
        *(undefined **)((int)register0x00000054 + -0x104) =
             PTR_s_leviQ2_default20060102150405jump_008262d0_0x1c5a_00454600;
        *(undefined4 *)((int)register0x00000054 + -0x100) = 0xe;
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0xf8) == '\0') {
          piVar2 = *(int **)((int)register0x00000054 + -0xa0);
          uVar12 = piVar2[2];
          uVar7 = piVar2[1] + 1;
          iVar6 = *piVar2;
          if (uVar12 < uVar7) {
            *(int *)((int)register0x00000054 + -0x10c) = iVar6;
            *(uint *)((int)register0x00000054 + -0x108) = uVar7;
            *(uint *)((int)register0x00000054 + -0x104) = uVar12;
            *(undefined4 *)((int)register0x00000054 + -0x100) = 1;
            *(undefined **)((int)register0x00000054 + -0xfc) = PTR_DAT_00454608;
            FUN_000987f4();
            iVar6 = *(int *)((int)register0x00000054 + -0xf8);
            uVar7 = *(uint *)((int)register0x00000054 + -0xf4);
            piVar2 = *(int **)((int)register0x00000054 + -0xa0);
            piVar2[2] = *(int *)((int)register0x00000054 + -0xf0);
            if (*(int *)PTR_DAT_00454604 != 0) {
              FUN_0009db64();
              *unaff_r8 = extraout_r1_00;
              unaff_r8[1] = *extraout_r3;
              iVar6 = extraout_r1_00;
              uVar7 = extraout_r2;
              piVar2 = extraout_r3;
            }
            *piVar2 = iVar6;
          }
          piVar2[1] = uVar7;
          iVar4 = uVar7 - 1;
          uVar19 = CONCAT44(iVar4,piVar2);
          *(undefined4 *)(iVar6 + iVar4 * 8 + 4) = 0xe;
          if (*(int *)PTR_DAT_00454604 != 0) {
            uVar19 = FUN_0009db54(piVar2,iVar4,*(undefined4 *)(iVar6 + iVar4 * 8));
            *unaff_r8 = extraout_r2_00;
            iVar6 = extraout_r3_00;
          }
          puVar5 = PTR_s_leviQ2_default20060102150405jump_008262d0_0x1c5a_00454600;
          iVar4 = (int)uVar19;
          *(undefined **)(iVar6 + (int)((ulonglong)uVar19 >> 0x20) * 8) =
               PTR_s_leviQ2_default20060102150405jump_008262d0_0x1c5a_00454600;
        }
        else {
          iVar4 = *(int *)((int)register0x00000054 + -0xa0);
          puVar5 = PTR_s_leviQ2_default20060102150405jump_008262d0_0x1c5a_00454600;
        }
        uVar10 = *(undefined4 *)(iVar4 + 0xc);
        *(undefined **)((int)register0x00000054 + -0x10c) = PTR_DAT_004545fc;
        *(undefined4 *)((int)register0x00000054 + -0x108) = uVar10;
        *(undefined **)((int)register0x00000054 + -0x104) = puVar5;
        *(undefined4 *)((int)register0x00000054 + -0x100) = 0xe;
        FUN_00093a08();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0xfc);
        *puVar1 = *(undefined4 *)((int)register0x00000054 + -0xe4);
        if (*(int *)PTR_DAT_00454604 == 0) {
          iVar6 = *(int *)((int)register0x00000054 + -0xa8);
        }
        else {
          puVar1 = (undefined4 *)FUN_0009db64();
          iVar6 = *(int *)((int)register0x00000054 + -0xa8);
          *unaff_r8 = iVar6;
          unaff_r8[1] = puVar1[1];
        }
        puVar1[1] = iVar6;
      }
      uVar19 = CONCAT44(*(undefined4 *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 4) + 4),
                        *(int *)((int)register0x00000054 + 4));
      if (*(int *)PTR_DAT_00454604 == 0) {
        iVar6 = *(int *)((int)register0x00000054 + -0xa0);
      }
      else {
        uVar19 = FUN_0009db64();
        iVar6 = *(int *)((int)register0x00000054 + -0xa0);
        *unaff_r8 = iVar6;
        unaff_r8[1] = *(int *)((ulonglong)uVar19 >> 0x20);
      }
      *(int *)((ulonglong)uVar19 >> 0x20) = iVar6;
      iVar6 = **(int **)(*(int *)((int)uVar19 + 4) + 4);
      *(int *)((int)register0x00000054 + -0x94) = iVar6;
      uVar10 = *(undefined4 *)(iVar6 + 4);
      *(undefined4 *)((int)register0x00000054 + -200) = uVar10;
      *(undefined **)((int)register0x00000054 + -0x10c) = PTR_DAT_00454608;
      *(undefined4 *)((int)register0x00000054 + -0x108) = uVar10;
      *(undefined4 *)((int)register0x00000054 + -0x104) = uVar10;
      FUN_000986b8();
      uVar3 = **(undefined4 **)((int)register0x00000054 + -0x94);
      uVar10 = (*(undefined4 **)((int)register0x00000054 + -0x94))[1];
      *(undefined **)((int)register0x00000054 + -0x10c) = PTR_DAT_00454608;
      *(undefined4 *)((int)register0x00000054 + -0x108) =
           *(undefined4 *)((int)register0x00000054 + -0x100);
      *(undefined4 *)((int)register0x00000054 + -0x104) =
           *(undefined4 *)((int)register0x00000054 + -200);
      *(undefined4 *)((int)register0x00000054 + -0x100) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0xfc) = uVar10;
      FUN_00093f5c();
      if (*(int *)((int)register0x00000054 + -200) == 0) {
        *(undefined1 *)((int)register0x00000054 + 8) = 0;
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x80) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
      *(undefined **)((int)register0x00000054 + -0x10c) = PTR_DAT_0045460c;
      FUN_00022cf8(*(int *)((int)register0x00000054 + 4));
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x108);
      *(undefined4 **)((int)register0x00000054 + -0xa4) = puVar1;
      *puVar1 = 0;
      *(undefined4 *)((int)register0x00000054 + -0x10c) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + -0x80) + 4);
      *(undefined **)((int)register0x00000054 + -0x108) = PTR_DAT_00454610;
      *(undefined4 **)((int)register0x00000054 + -0x104) = puVar1;
      k3c_internal_pkg_printer___RawConfigParser__Write();
      *(undefined **)((int)register0x00000054 + -0x10c) = PTR_DAT_00454614;
      *(undefined4 *)((int)register0x00000054 + -0x108) =
           *(undefined4 *)((int)register0x00000054 + -0xa4);
      FUN_000ae540();
      *(undefined4 *)((int)register0x00000054 + -0x10c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x108) =
           *(undefined4 *)((int)register0x00000054 + -0x104);
      *(undefined4 *)((int)register0x00000054 + -0x104) =
           *(undefined4 *)((int)register0x00000054 + -0x100);
      FUN_00099104();
      *(undefined4 *)((int)register0x00000054 + -0x10c) =
           *(undefined4 *)((int)register0x00000054 + -0x100);
      *(undefined4 *)((int)register0x00000054 + -0x108) =
           *(undefined4 *)((int)register0x00000054 + -0xfc);
      *(undefined **)((int)register0x00000054 + -0x104) = PTR_DAT_00454618;
      *(undefined4 *)((int)register0x00000054 + -0x100) = 1;
      FUN_00151ab0();
      *(undefined4 *)((int)register0x00000054 + -0x10c) =
           *(undefined4 *)((int)register0x00000054 + -0xfc);
      *(undefined4 *)((int)register0x00000054 + -0x108) =
           *(undefined4 *)((int)register0x00000054 + -0xf8);
      *(undefined **)((int)register0x00000054 + -0x104) = PTR_DAT_00454618;
      *(undefined4 *)((int)register0x00000054 + -0x100) = 1;
      *(undefined4 *)((int)register0x00000054 + -0xfc) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xf8) = 0xffffffff;
      FUN_0014f168();
      iVar6 = *(int *)((int)register0x00000054 + -0xf4);
      *(int *)((int)register0x00000054 + -0xac) = iVar6;
      iVar4 = *(int *)((int)register0x00000054 + -0xf0);
      *(int *)((int)register0x00000054 + -0xe0) = iVar4;
      uVar10 = *(undefined4 *)((int)register0x00000054 + -0xec);
      *(undefined4 *)((int)register0x00000054 + -0xdc) = uVar10;
      for (iVar11 = 0; iVar11 < iVar4; iVar11 = iVar11 + 1) {
        *(int *)((int)register0x00000054 + -0xd0) = iVar11;
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x14),iVar6);
        *(undefined4 *)((int)register0x00000054 + -0x10) = 4;
        *(undefined **)((int)register0x00000054 + -0x14) =
             PTR_s_____type_cfg___waitstatcodeunixi_00820821_0xc9_0045461c;
        uVar10 = *(undefined4 *)(extraout_r2_01 + extraout_r3_01 * 8);
        iVar6 = extraout_r2_01 + extraout_r3_01 * 8;
        *(int *)((int)register0x00000054 + -4) = iVar6;
        *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)(iVar6 + 4);
        *(undefined4 *)((int)register0x00000054 + -0xc) = uVar10;
        *(undefined1 **)((int)register0x00000054 + -0x10c) =
             (undefined1 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x108) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x104) = 2;
        unaff_r8 = (int *)0x0;
        *(undefined4 *)((int)register0x00000054 + -0x100) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xfc) = 0;
        FUN_0014f8fc();
        uVar10 = *(undefined4 *)((int)register0x00000054 + -0xf8);
        *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 4) =
             *(undefined4 *)((int)register0x00000054 + -0xf4);
        if (*(int *)PTR_DAT_00454604 == 0) {
          iVar11 = *(int *)((int)register0x00000054 + -0xd0);
          iVar6 = *(int *)((int)register0x00000054 + -0xac);
        }
        else {
          FUN_0009db64();
          iVar11 = *(int *)((int)register0x00000054 + -0xd0);
          iVar6 = *(int *)((int)register0x00000054 + -0xac);
          _DAT_00000004 = *(undefined4 *)(iVar6 + iVar11 * 8);
          uVar10 = extraout_r3_02;
          uRam00000000 = extraout_r3_02;
        }
        *(undefined4 *)(iVar6 + iVar11 * 8) = uVar10;
        iVar4 = *(int *)((int)register0x00000054 + -0xe0);
        uVar10 = *(undefined4 *)((int)register0x00000054 + -0xdc);
      }
      *(int *)((int)register0x00000054 + -0x10c) = iVar6;
      *(int *)((int)register0x00000054 + -0x108) = iVar4;
      *(undefined4 *)((int)register0x00000054 + -0x104) = uVar10;
      *(undefined **)((int)register0x00000054 + -0x100) = PTR_DAT_00454618;
      *(undefined4 *)((int)register0x00000054 + -0xfc) = 1;
      FUN_0014f8fc();
      uVar10 = *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + -0xf8);
      *(undefined4 *)((int)register0x00000054 + -0xb4) =
           *(undefined4 *)((int)register0x00000054 + -0xf4);
      *(undefined **)((int)register0x00000054 + -0x10c) = PTR_DAT_004545fc;
      *(undefined4 *)((int)register0x00000054 + -0x108) = uVar10;
      *(undefined **)((int)register0x00000054 + -0x104) = PTR_DAT_00454620;
      *(undefined4 *)((int)register0x00000054 + -0x100) = 0xb;
      FUN_00025f60();
      puVar5 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0xfc);
      uVar18 = 0;
      puVar8 = PTR_DAT_00454608;
      if (puVar5 == PTR_DAT_00454608) {
        puVar1 = (undefined4 *)(*(undefined4 **)((int)register0x00000054 + -0xfc))[1];
        uVar3 = puVar1[1];
        *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar3;
        uVar10 = *puVar1;
        *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar10;
        *(undefined4 *)((int)register0x00000054 + -0x10c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x108) = uVar10;
        *(undefined4 *)((int)register0x00000054 + -0x104) = uVar3;
        k3c_internal_pkg_printer___PrinterConfig___read_config_file();
        *(undefined4 *)((int)register0x00000054 + -0xcc) =
             *(undefined4 *)((int)register0x00000054 + -0xf8);
        *(undefined4 *)((int)register0x00000054 + -0x10c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x108) =
             *(undefined4 *)((int)register0x00000054 + -0x100);
        *(undefined4 *)((int)register0x00000054 + -0x104) =
             *(undefined4 *)((int)register0x00000054 + -0xfc);
        k3c_internal_pkg_printer___PrinterConfig___find_autosave_data();
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + -0x100);
        *(undefined4 *)((int)register0x00000054 + -0xd4) =
             *(undefined4 *)((int)register0x00000054 + -0xfc);
        *(undefined4 *)((int)register0x00000054 + -0x10c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x108) =
             *(undefined4 *)((int)register0x00000054 + -0x100);
        *(undefined4 *)((int)register0x00000054 + -0x104) =
             *(undefined4 *)((int)register0x00000054 + -0xfc);
        *(undefined4 *)((int)register0x00000054 + -0x100) =
             *(undefined4 *)((int)register0x00000054 + -0x7c);
        *(undefined4 *)((int)register0x00000054 + -0xfc) =
             *(undefined4 *)((int)register0x00000054 + -0xbc);
        k3c_internal_pkg_printer___PrinterConfig___build_config_wrapper();
        if (*(int *)((int)register0x00000054 + -0xcc) != 0) {
          *(undefined4 *)((int)register0x00000054 + -0x1c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
          *(undefined **)((int)register0x00000054 + -0x10c) = PTR_DAT_00454978;
          *(undefined4 *)((int)register0x00000054 + -0x108) = 0x2e;
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_00454960;
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x104);
          *(undefined1 **)((int)register0x00000054 + -0x10c) =
               (undefined1 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x108) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x104) = 1;
          k3c_internal_pkg_logger_Error();
          *(undefined **)((int)register0x00000054 + -0x10c) = PTR_DAT_0045497c;
          FUN_00022cf8();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x108);
          puVar1[1] = 0x2e;
          *puVar1 = PTR_DAT_00454978;
          *(undefined1 *)((int)register0x00000054 + 8) = 0;
          *(undefined **)((int)register0x00000054 + 0xc) = PTR_DAT_00454980;
          *(undefined4 **)((int)register0x00000054 + 0x10) = puVar1;
          return;
        }
        uVar10 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
        *(int *)((int)register0x00000054 + -0x10c) = *(int *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x108) =
             *(undefined4 *)((int)register0x00000054 + -0x98);
        *(undefined4 *)((int)register0x00000054 + -0x104) =
             *(undefined4 *)((int)register0x00000054 + -0xd4);
        *(undefined4 *)((int)register0x00000054 + -0x100) = uVar10;
        k3c_internal_pkg_printer___PrinterConfig___strip_duplicates();
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + -0xfc);
        *(undefined4 *)((int)register0x00000054 + -0xd4) =
             *(undefined4 *)((int)register0x00000054 + -0xf8);
        *(undefined4 *)((int)register0x00000054 + -0x10c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x108) =
             *(undefined4 *)((int)register0x00000054 + -0xfc);
        *(undefined4 *)((int)register0x00000054 + -0x104) =
             *(undefined4 *)((int)register0x00000054 + -0xf8);
        *(undefined4 *)((int)register0x00000054 + -0x100) =
             *(undefined4 *)((int)register0x00000054 + -0x7c);
        *(undefined4 *)((int)register0x00000054 + -0xfc) =
             *(undefined4 *)((int)register0x00000054 + -0xbc);
        k3c_internal_pkg_printer___PrinterConfig___disallow_include_conflicts();
        *(undefined4 *)((int)register0x00000054 + -0x10c) =
             *(undefined4 *)((int)register0x00000054 + -0x98);
        *(undefined4 *)((int)register0x00000054 + -0x108) =
             *(undefined4 *)((int)register0x00000054 + -0xd4);
        FUN_00151ce4();
        FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x4c),
                     *(undefined4 *)((int)register0x00000054 + -0x100),
                     *(undefined4 *)((int)register0x00000054 + -0x104));
        *(undefined4 *)((int)register0x00000054 + -0x48) = extraout_r2_02;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = extraout_r3_03;
        *(undefined4 *)((int)register0x00000054 + -0x40) = 1;
        *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_00454618;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 0x8b;
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_00454624;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 1;
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_00454618;
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0xb4);
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0x74);
        *(undefined4 *)((int)register0x00000054 + -0x20) = 1;
        *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_00454618;
        *(undefined4 *)((int)register0x00000054 + -0x10c) = 0;
        *(undefined1 **)((int)register0x00000054 + -0x108) =
             (undefined1 *)((int)register0x00000054 + -0x4c);
        *(undefined4 *)((int)register0x00000054 + -0x104) = 6;
        *(undefined4 *)((int)register0x00000054 + -0x100) = 6;
        FUN_00076130();
        *(undefined4 *)((int)register0x00000054 + -0x84) =
             *(undefined4 *)((int)register0x00000054 + -0xfc);
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + -0xf8);
        uVar10 = FUN_001160a8();
        uVar10 = FUN_0009e2f0(uVar10,(undefined1 *)((int)register0x00000054 + -0x10c),
                              (undefined1 *)((int)register0x00000054 + -0x60));
        FUN_0009e2f0(uVar10,(undefined1 *)((int)register0x00000054 + -0x60),
                     (undefined1 *)((int)register0x00000054 + -0x10c));
        *(undefined **)((int)register0x00000054 + -0xf8) =
             PTR_s__20060102_150405invalid_checksum_008262d0_0x399a_00454628;
        *(undefined4 *)((int)register0x00000054 + -0xf4) = 0x10;
        FUN_00101cdc();
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)((int)register0x00000054 + -0xf0);
        *(undefined4 *)((int)register0x00000054 + -0xc4) =
             *(undefined4 *)((int)register0x00000054 + -0xec);
        *(undefined4 *)((int)register0x00000054 + -0x10c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x108) =
             *(undefined4 *)((int)register0x00000054 + -0x7c);
        *(undefined4 *)((int)register0x00000054 + -0x104) =
             *(undefined4 *)((int)register0x00000054 + -0xbc);
        *(undefined4 *)((int)register0x00000054 + -0x100) =
             *(undefined4 *)((int)register0x00000054 + -0xf0);
        *(undefined4 *)((int)register0x00000054 + -0xfc) =
             *(undefined4 *)((int)register0x00000054 + -0xec);
        FUN_0007636c();
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)((int)register0x00000054 + -0xf8);
        *(undefined4 *)((int)register0x00000054 + -0xb8) =
             *(undefined4 *)((int)register0x00000054 + -0xf4);
        *(undefined4 *)((int)register0x00000054 + -0x10c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x108) =
             *(undefined4 *)((int)register0x00000054 + -0x7c);
        *(undefined4 *)((int)register0x00000054 + -0x104) =
             *(undefined4 *)((int)register0x00000054 + -0xbc);
        *(undefined **)((int)register0x00000054 + -0x100) =
             PTR_s__autosave_adaptiveprocessorendpo_00823504_0x140_0045462c;
        *(undefined4 *)((int)register0x00000054 + -0xfc) = 9;
        FUN_0007636c();
        uVar10 = *(undefined4 *)((int)register0x00000054 + -0xf8);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0xf4);
        uVar7 = *(uint *)((int)register0x00000054 + -0xbc);
        if ((int)uVar7 < 4) {
          cVar9 = '\0';
LAB_00454638:
          if (cVar9 == '\0') {
            uVar13 = *(undefined4 *)((int)register0x00000054 + -0x78);
            uVar14 = *(undefined4 *)((int)register0x00000054 + -0xb8);
            goto LAB_004546e4;
          }
          uVar12 = uVar7 - 4;
          uVar18 = uVar7 == uVar12;
          if (uVar12 <= uVar7) {
            *(uint *)((int)register0x00000054 + -0xb0) = uVar12;
            *(undefined4 *)((int)register0x00000054 + -0x10c) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x108) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            *(uint *)((int)register0x00000054 + -0x104) = uVar12;
            *(undefined4 *)((int)register0x00000054 + -0x100) =
                 *(undefined4 *)((int)register0x00000054 + -0x88);
            *(undefined4 *)((int)register0x00000054 + -0xfc) =
                 *(undefined4 *)((int)register0x00000054 + -0xc4);
            *(undefined **)((int)register0x00000054 + -0xf8) =
                 PTR_s__cfg___waitstatcodeunixinforeads_00820821_0xd1_00454958;
            *(undefined4 *)((int)register0x00000054 + -0xf4) = 4;
            FUN_000763e8();
            *(undefined4 *)((int)register0x00000054 + -0x78) =
                 *(undefined4 *)((int)register0x00000054 + -0xf0);
            *(undefined4 *)((int)register0x00000054 + -0xb8) =
                 *(undefined4 *)((int)register0x00000054 + -0xec);
            *(undefined4 *)((int)register0x00000054 + -0x10c) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x108) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            *(undefined4 *)((int)register0x00000054 + -0x104) =
                 *(undefined4 *)((int)register0x00000054 + -0xb0);
            *(undefined **)((int)register0x00000054 + -0x100) =
                 PTR_s__autosave_cfgempty_section_proc__008262d0_0xd7d_0045495c;
            *(undefined4 *)((int)register0x00000054 + -0xfc) = 0xd;
            FUN_0007636c();
            uVar10 = *(undefined4 *)((int)register0x00000054 + -0xf8);
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0xf4);
            uVar7 = *(uint *)((int)register0x00000054 + -0xbc);
            uVar13 = *(undefined4 *)((int)register0x00000054 + -0x78);
            uVar14 = *(undefined4 *)((int)register0x00000054 + -0xb8);
LAB_004546e4:
            *(undefined4 *)((int)register0x00000054 + -0x78) = uVar13;
            *(undefined4 *)((int)register0x00000054 + -0xb8) = uVar14;
            *(undefined4 *)((int)register0x00000054 + -0x9c) = uVar10;
            *(undefined4 *)((int)register0x00000054 + -0xd8) = uVar3;
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x70),uVar7);
            *(undefined4 *)((int)register0x00000054 + -0x10c) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            *(undefined4 *)((int)register0x00000054 + -0x108) = extraout_r2_03;
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_00454960;
            *(undefined4 *)((int)register0x00000054 + -0x6c) =
                 *(undefined4 *)((int)register0x00000054 + -0x104);
            *(undefined4 *)((int)register0x00000054 + -0x10c) =
                 *(undefined4 *)((int)register0x00000054 + -0x78);
            *(undefined4 *)((int)register0x00000054 + -0x108) =
                 *(undefined4 *)((int)register0x00000054 + -0xb8);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_00454960;
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + -0x104);
            *(undefined **)((int)register0x00000054 + -0x10c) = PTR_DAT_00454964;
            *(undefined4 *)((int)register0x00000054 + -0x108) = 0x24;
            *(undefined1 **)((int)register0x00000054 + -0x104) =
                 (undefined1 *)((int)register0x00000054 + -0x70);
            *(undefined4 *)((int)register0x00000054 + -0x100) = 2;
            *(undefined4 *)((int)register0x00000054 + -0xfc) = 2;
            k3c_internal_pkg_logger_Debugf();
            *(undefined **)((int)register0x00000054 + -0x10c) = PTR_DAT_00454968;
            FUN_00022cf8();
            puVar1 = *(undefined4 **)((int)register0x00000054 + -0x108);
            *puVar1 = PTR_k3c_internal_pkg_printer___PrinterConfig__save_default_data_func1_0045496c
            ;
            puVar1[2] = *(undefined4 *)((int)register0x00000054 + -0xd8);
            if (*(int *)PTR_DAT_00454970 == 0) {
              iVar6 = *(int *)((int)register0x00000054 + -0x9c);
              iVar4 = *(int *)((int)register0x00000054 + -0x84);
              iVar11 = *(int *)((int)register0x00000054 + -0x7c);
              iVar15 = *(int *)((int)register0x00000054 + -0x78);
            }
            else {
              FUN_0009db84();
              iVar6 = *(int *)((int)register0x00000054 + -0x9c);
              *unaff_r8 = iVar6;
              iVar4 = *(int *)((int)register0x00000054 + -0x84);
              unaff_r8[1] = iVar4;
              iVar11 = *(int *)((int)register0x00000054 + -0x7c);
              unaff_r8[2] = iVar11;
              iVar15 = *(int *)((int)register0x00000054 + -0x78);
              unaff_r8[3] = iVar15;
              puVar1 = extraout_r2_04;
            }
            puVar1[1] = iVar6;
            puVar1[4] = *(undefined4 *)((int)register0x00000054 + -0xc0);
            puVar1[3] = iVar4;
            puVar1[6] = *(undefined4 *)((int)register0x00000054 + -0xbc);
            puVar1[5] = iVar11;
            puVar1[8] = *(undefined4 *)((int)register0x00000054 + -0xb8);
            puVar1[7] = iVar15;
            *(undefined4 *)((int)register0x00000054 + -0x10c) =
                 *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 **)((int)register0x00000054 + -0x108) = puVar1;
            k3c_internal_pkg_reactor___Reactor__Async_wait_complete();
            if (*(int *)((int)register0x00000054 + -0x104) != 0) {
              *(undefined4 *)((int)register0x00000054 + -0x8c) =
                   *(undefined4 *)((int)register0x00000054 + -0x100);
              *(undefined **)((int)register0x00000054 + -0x10c) = PTR_DAT_00454974;
              *(int *)((int)register0x00000054 + -0x108) =
                   *(int *)((int)register0x00000054 + -0x104);
              FUN_00020dac();
              *(undefined1 *)((int)register0x00000054 + 8) = 0;
              *(undefined4 *)((int)register0x00000054 + 0xc) =
                   *(undefined4 *)((int)register0x00000054 + -0x104);
              *(undefined4 *)((int)register0x00000054 + 0x10) =
                   *(undefined4 *)((int)register0x00000054 + -0x8c);
              return;
            }
            *(undefined4 *)((int)register0x00000054 + -0x10c) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            *(undefined4 *)((int)register0x00000054 + -0x108) =
                 *(undefined4 *)((int)register0x00000054 + -0xbc);
            *(undefined4 *)((int)register0x00000054 + -0x104) = 3;
            k3c_internal_pkg_printer_cleanOldMainConfigBackupFile();
            *(undefined1 *)((int)register0x00000054 + 8) = 1;
            *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
            return;
          }
          FUN_0009dbf4();
          uVar7 = extraout_r2_05;
          uVar12 = extraout_r3_04;
        }
        else {
          uVar12 = uVar7 - 4;
          uVar18 = uVar7 == uVar12;
          if (uVar12 <= uVar7) {
            *(undefined4 *)((int)register0x00000054 + -0x9c) = uVar10;
            *(undefined4 *)((int)register0x00000054 + -0xd8) = uVar3;
            *(uint *)((int)register0x00000054 + -0x10c) =
                 *(int *)((int)register0x00000054 + -0x7c) + uVar12;
            *(undefined **)((int)register0x00000054 + -0x108) =
                 PTR_s__cfg___waitstatcodeunixinforeads_00820821_0xd1_00454630;
            *(undefined4 *)((int)register0x00000054 + -0x104) = 4;
            FUN_00018250();
            cVar9 = *(char *)((int)register0x00000054 + -0x100);
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0xd8);
            uVar7 = *(uint *)((int)register0x00000054 + -0xbc);
            uVar10 = *(undefined4 *)((int)register0x00000054 + -0x9c);
            goto LAB_00454638;
          }
        }
        FUN_0009dc34(uVar12,uVar7);
        puVar5 = extraout_r1_01;
        puVar8 = extraout_r2_06;
      }
      *(undefined **)((int)register0x00000054 + -0x10c) = puVar5;
      *(undefined **)((int)register0x00000054 + -0x108) = puVar8;
      *(undefined **)((int)register0x00000054 + -0x104) = PTR_DAT_00454988;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x110);
      if ((bool)uVar18) {
        register0x00000054 = (BADSPACEBASE *)puVar16;
      }
    }
    unaff_lr = 0x454950;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*PrinterConfig).save_default_data.func1 @ 0045498c (size 420) */

void k3c_internal_pkg_printer___PrinterConfig__save_default_data_func1(void)

{
  undefined4 uVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_ffffff9c;
  undefined4 in_stack_ffffffa0;
  undefined4 in_stack_ffffffa4;
  undefined4 uVar2;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x454b2c;
    FUN_0009bf00();
  }
  uVar1 = *(undefined4 *)(unaff_r7 + 8);
  FUN_000766e8();
  uVar2 = 0x1b6;
  FUN_0012e52c();
  if (iStack_58 == 0) {
    FUN_0012eed4();
    FUN_0012eed4();
    return;
  }
  (**(code **)(iStack_58 + 0xc))();
  FUN_0009df04(0,&uStack_10,in_stack_ffffff9c,uVar1,unaff_lr,uStack_54,uVar1,in_stack_ffffff9c,
               in_stack_ffffffa0,in_stack_ffffffa4,uVar2);
  uStack_10 = DAT_00454b34;
  uStack_c = DAT_00454b38;
  FUN_0008f77c();
  uStack_8 = DAT_00454b34;
  k3c_internal_pkg_logger_Error();
  return;
}



/* k3c/internal/pkg/printer.(*PrinterConfig).SaveConfig @ 00454b3c (size 1012) */

/* WARNING: Removing unreachable block (ram,0x00454f14) */
/* WARNING: Removing unreachable block (ram,0x00454f20) */

void k3c_internal_pkg_printer___PrinterConfig__SaveConfig(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int extraout_r2;
  uint uVar7;
  uint extraout_r3;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint *unaff_r8;
  int unaff_r10;
  undefined8 uVar12;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 *local_54;
  uint local_50;
  int local_4c;
  int local_44;
  uint local_40;
  uint local_3c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_0009bf64(param_1);
  }
  uVar5 = *(uint *)(**(int **)(*(int *)(in_stack_00000004 + 4) + 4) + 4);
  FUN_000986b8();
  FUN_00093f5c();
  uVar7 = 0;
  iVar8 = 0;
  uVar9 = 0;
  iVar2 = local_4c;
  uVar4 = uVar5;
  local_50 = uVar5;
  for (iVar6 = 0; iVar6 < (int)uVar4; iVar6 = iVar6 + 1) {
    uVar9 = uVar9 + 1;
    uVar11 = *(uint *)(iVar2 + iVar6 * 8);
    uVar10 = *(undefined4 *)(iVar2 + iVar6 * 8 + 4);
    uVar1 = uVar7;
    if (uVar7 < uVar9) {
      FUN_000987f4();
      iVar2 = local_4c;
      uVar4 = uVar5;
      uVar1 = local_3c;
      iVar8 = local_44;
      uVar9 = local_40;
      local_50 = uVar7;
    }
    uVar7 = uVar1;
    uVar12 = CONCAT44(uVar4,iVar2);
    unaff_r8 = (uint *)(uVar9 - 1);
    *(undefined4 *)(iVar8 + (int)unaff_r8 * 8 + 4) = uVar10;
    if (*(int *)PTR_DAT_00454f38 != 0) {
      uVar12 = FUN_0009db64();
      *unaff_r8 = uVar11;
      *(undefined4 *)(uVar9 + 3) = *(undefined4 *)(iVar8 + (int)unaff_r8 * 8);
      iVar6 = extraout_r2;
      uVar7 = extraout_r3;
    }
    uVar4 = (uint)((ulonglong)uVar12 >> 0x20);
    iVar2 = (int)uVar12;
    *(uint *)(iVar8 + (int)unaff_r8 * 8) = uVar11;
  }
  if (iVar8 == 0) {
    return;
  }
  local_54 = *(undefined4 **)(in_stack_00000004 + 4);
  k3c_internal_pkg_printer___PrinterConfig___build_mutable_config();
  FUN_00022cf8();
  *local_54 = PTR_k3c_internal_pkg_printer___PrinterConfig__SaveConfig_func1_00454f40;
  if (*(int *)PTR_DAT_00454f38 != 0) {
    local_54 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = local_50;
  }
  local_54[1] = local_50;
  k3c_internal_pkg_reactor___Reactor__Async_wait_complete();
  if (local_50 == 0) {
    k3c_internal_pkg_printer___MutableConfig__SyncFile();
  }
  else {
    FUN_00020dac();
    (**(code **)(local_50 + 0xc))();
    FUN_0007636c();
    FUN_0008f77c();
    local_54 = (undefined4 *)0x1;
    local_50 = 1;
    k3c_internal_pkg_logger_Error();
  }
  k3c_internal_pkg_printer___PrinterConfig__save_default_data();
  if (local_50 != 0) {
    (**(code **)(local_50 + 0xc))();
    FUN_0007636c();
    FUN_0008f77c();
    local_54 = (undefined4 *)0x1;
    k3c_internal_pkg_logger_Error();
  }
  k3c_internal_pkg_printer___PrinterConfig__Read_main_config();
  FUN_00022cf8();
  *local_54 = PTR_DAT_00454f54;
  puVar3 = local_54;
  if (*(int *)PTR_DAT_00454f38 != 0) {
    puVar3 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = (uint)local_54;
  }
  puVar3[1] = local_54;
  k3c_internal_pkg_printer___Printer__Send_event();
  return;
}



/* k3c/internal/pkg/printer.(*PrinterConfig).SaveConfig.func1 @ 00454f60 (size 72) */

void k3c_internal_pkg_printer___PrinterConfig__SaveConfig_func1(void)

{
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  k3c_internal_pkg_printer___MutableConfig__SaveAndBackup();
  return;
}



/* k3c/internal/pkg/printer.(*PrinterConfig)._build_mutable_config @ 00454fa8 (size 1208) */

/* WARNING: Removing unreachable block (ram,0x00455208) */

void k3c_internal_pkg_printer___PrinterConfig___build_mutable_config(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined *extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined *extraout_r2_01;
  undefined *puVar7;
  undefined4 extraout_r3;
  undefined4 uVar8;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0xec)) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x16c);
      *(undefined4 *)((int)register0x00000054 + -0x16c) = unaff_lr;
      uVar1 = *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 8);
      *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_00455464;
      *(undefined4 *)((int)register0x00000054 + -0x164) = uVar1;
      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00455468;
      *(undefined4 *)((int)register0x00000054 + -0x15c) = 0xb;
      FUN_00025f60();
      puVar5 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x158);
      uVar10 = 0;
      puVar7 = PTR_DAT_0045546c;
      if (puVar5 == PTR_DAT_0045546c) {
        puVar2 = (undefined4 *)(*(undefined4 **)((int)register0x00000054 + -0x158))[1];
        uVar1 = puVar2[1];
        *(undefined4 *)((int)register0x00000054 + -0x168) = *puVar2;
        *(undefined4 *)((int)register0x00000054 + -0x164) = uVar1;
        internal_filepathlite_Dir();
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x70),
                     *(undefined4 *)((int)register0x00000054 + -0x15c),
                     *(undefined4 *)((int)register0x00000054 + -0x160));
        *(undefined4 *)((int)register0x00000054 + -0x6c) = extraout_r2;
        *(undefined4 *)((int)register0x00000054 + -0x70) = extraout_r3;
        *(undefined4 *)((int)register0x00000054 + -100) = 0x13;
        *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_00455470;
        *(undefined1 **)((int)register0x00000054 + -0x168) =
             (undefined1 *)((int)register0x00000054 + -0x70);
        *(undefined4 *)((int)register0x00000054 + -0x164) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x160) = 2;
        FUN_0028054c();
        *(undefined4 *)((int)register0x00000054 + -0x168) =
             *(undefined4 *)((int)register0x00000054 + -0x15c);
        *(undefined4 *)((int)register0x00000054 + -0x164) =
             *(undefined4 *)((int)register0x00000054 + -0x158);
        *(undefined4 *)((int)register0x00000054 + -0x160) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x15c) = 1;
        *(undefined1 *)((int)register0x00000054 + -0x15b) = 0;
        k3c_internal_pkg_printer_NewMutableConfig();
        iVar3 = *(int *)((int)register0x00000054 + -0x154);
        uVar10 = 0;
        if (iVar3 == 0) {
          *(undefined4 *)((int)register0x00000054 + -0x124) =
               *(undefined4 *)((int)register0x00000054 + -0x158);
          *(undefined4 *)((int)register0x00000054 + -0x128) =
               **(undefined4 **)(*(int *)((int)register0x00000054 + 8) + 4);
          uVar1 = FUN_0009def8(0,(undefined1 *)((int)register0x00000054 + -0x8c));
          FUN_0009de88(uVar1,(undefined1 *)((int)register0x00000054 + -0x118));
          *(undefined1 **)((int)register0x00000054 + -0x80) =
               (undefined1 *)((int)register0x00000054 + -0x118);
          FUN_0006aa3c();
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x168);
          FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x30),
                       *(undefined4 *)(*(int *)((int)register0x00000054 + -0x128) + 0xc));
          *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_00455464;
          *(undefined4 *)((int)register0x00000054 + -0x164) = extraout_r2_00;
          *(undefined1 **)((int)register0x00000054 + -0x160) =
               (undefined1 *)((int)register0x00000054 + -0x30);
          FUN_00091764();
          while (puVar2 = *(undefined4 **)((int)register0x00000054 + -0x30),
                puVar2 != (undefined4 *)0x0) {
            uVar1 = *puVar2;
            uVar6 = puVar2[1];
            *(undefined4 *)((int)register0x00000054 + -0x14c) =
                 **(undefined4 **)((int)register0x00000054 + -0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x138) =
                 (*(undefined4 **)((int)register0x00000054 + -0x2c))[1];
            *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_00455464;
            *(undefined1 **)((int)register0x00000054 + -0x164) =
                 (undefined1 *)((int)register0x00000054 + -0x8c);
            *(undefined4 *)((int)register0x00000054 + -0x160) = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar6;
            FUN_00093a08();
            puVar2 = *(undefined4 **)((int)register0x00000054 + -0x158);
            *puVar2 = *(undefined4 *)((int)register0x00000054 + -0x14c);
            if (*(int *)PTR_DAT_00455474 == 0) {
              uVar1 = *(undefined4 *)((int)register0x00000054 + -0x138);
            }
            else {
              puVar2 = (undefined4 *)FUN_0009db64();
              uVar1 = *(undefined4 *)((int)register0x00000054 + -0x138);
              *unaff_r8 = uVar1;
              unaff_r8[1] = puVar2[1];
            }
            puVar2[1] = uVar1;
            *(undefined1 **)((int)register0x00000054 + -0x168) =
                 (undefined1 *)((int)register0x00000054 + -0x30);
            FUN_000919c8();
          }
          FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x30));
          *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_00455464;
          *(undefined1 **)((int)register0x00000054 + -0x164) =
               (undefined1 *)((int)register0x00000054 + -0x8c);
          *(undefined1 **)((int)register0x00000054 + -0x160) =
               (undefined1 *)((int)register0x00000054 + -0x30);
          FUN_00091764();
          while( true ) {
            puVar2 = *(undefined4 **)((int)register0x00000054 + -0x30);
            if (puVar2 == (undefined4 *)0x0) {
              *(undefined4 *)((int)register0x00000054 + 0xc) =
                   *(undefined4 *)((int)register0x00000054 + -0x124);
              return;
            }
            uVar6 = *puVar2;
            *(undefined4 *)((int)register0x00000054 + -0x134) = uVar6;
            uVar1 = puVar2[1];
            *(undefined4 *)((int)register0x00000054 + -0x148) = uVar1;
            uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x124) + 8);
            *(undefined4 *)((int)register0x00000054 + -0x144) =
                 **(undefined4 **)((int)register0x00000054 + -0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x130) =
                 (*(undefined4 **)((int)register0x00000054 + -0x2c))[1];
            *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_00455478;
            *(undefined4 *)((int)register0x00000054 + -0x164) = uVar8;
            *(undefined4 *)((int)register0x00000054 + -0x160) = uVar6;
            *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
            FUN_00093560();
            if (*(char *)((int)register0x00000054 + -0x154) == '\0') {
              FUN_000908bc();
              uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x124) + 8);
              *(undefined4 *)((int)register0x00000054 + -0x11c) =
                   *(undefined4 *)((int)register0x00000054 + -0x168);
              *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_00455478;
              *(undefined4 *)((int)register0x00000054 + -0x164) = uVar1;
              *(undefined4 *)((int)register0x00000054 + -0x160) =
                   *(undefined4 *)((int)register0x00000054 + -0x134);
              *(undefined4 *)((int)register0x00000054 + -0x15c) =
                   *(undefined4 *)((int)register0x00000054 + -0x148);
              FUN_00093a08();
              puVar2 = *(undefined4 **)((int)register0x00000054 + -0x158);
              if (*(int *)PTR_DAT_00455474 == 0) {
                uVar1 = *(undefined4 *)((int)register0x00000054 + -0x11c);
              }
              else {
                puVar2 = (undefined4 *)FUN_0009db64();
                uVar1 = *(undefined4 *)((int)register0x00000054 + -0x11c);
                *unaff_r8 = uVar1;
                unaff_r8[1] = *puVar2;
              }
              *puVar2 = uVar1;
            }
            uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x124) + 8);
            *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_00455478;
            *(undefined4 *)((int)register0x00000054 + -0x164) = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x160) =
                 *(undefined4 *)((int)register0x00000054 + -0x134);
            *(undefined4 *)((int)register0x00000054 + -0x15c) =
                 *(undefined4 *)((int)register0x00000054 + -0x148);
            FUN_00025f60();
            uVar10 = *(undefined **)((int)register0x00000054 + -0x144) == PTR_DAT_0045547c;
            if (!(bool)uVar10) break;
            *(undefined4 *)((int)register0x00000054 + -0x13c) =
                 **(undefined4 **)((int)register0x00000054 + -0x158);
            FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x60));
            *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_0045547c;
            *(undefined4 *)((int)register0x00000054 + -0x164) =
                 *(undefined4 *)((int)register0x00000054 + -0x130);
            *(undefined1 **)((int)register0x00000054 + -0x160) =
                 (undefined1 *)((int)register0x00000054 + -0x60);
            FUN_00091764();
            while (puVar2 = *(undefined4 **)((int)register0x00000054 + -0x60),
                  puVar2 != (undefined4 *)0x0) {
              *(undefined4 *)((int)register0x00000054 + -300) = *puVar2;
              *(undefined4 *)((int)register0x00000054 + -0x140) = puVar2[1];
              uVar1 = (*(undefined4 **)((int)register0x00000054 + -0x5c))[1];
              *(undefined4 *)((int)register0x00000054 + -0x168) =
                   **(undefined4 **)((int)register0x00000054 + -0x5c);
              *(undefined4 *)((int)register0x00000054 + -0x164) = uVar1;
              FUN_0008f77c();
              *(undefined4 *)((int)register0x00000054 + -0x120) =
                   *(undefined4 *)((int)register0x00000054 + -0x160);
              *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_00455480;
              *(undefined4 *)((int)register0x00000054 + -0x164) =
                   *(undefined4 *)((int)register0x00000054 + -0x13c);
              *(undefined4 *)((int)register0x00000054 + -0x160) =
                   *(undefined4 *)((int)register0x00000054 + -300);
              *(undefined4 *)((int)register0x00000054 + -0x15c) =
                   *(undefined4 *)((int)register0x00000054 + -0x140);
              FUN_00093a08();
              puVar2 = *(undefined4 **)((int)register0x00000054 + -0x158);
              *puVar2 = PTR_DAT_0045546c;
              if (*(int *)PTR_DAT_00455474 == 0) {
                uVar1 = *(undefined4 *)((int)register0x00000054 + -0x120);
              }
              else {
                puVar2 = (undefined4 *)FUN_0009db64();
                uVar1 = *(undefined4 *)((int)register0x00000054 + -0x120);
                *unaff_r8 = uVar1;
                unaff_r8[1] = puVar2[1];
              }
              puVar2[1] = uVar1;
              *(undefined1 **)((int)register0x00000054 + -0x168) =
                   (undefined1 *)((int)register0x00000054 + -0x60);
              FUN_000919c8();
            }
            *(undefined1 **)((int)register0x00000054 + -0x168) =
                 (undefined1 *)((int)register0x00000054 + -0x30);
            FUN_000919c8();
          }
          *(undefined **)((int)register0x00000054 + -0x168) =
               *(undefined **)((int)register0x00000054 + -0x144);
          *(undefined **)((int)register0x00000054 + -0x164) = PTR_DAT_0045547c;
          *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00455484;
          iVar3 = FUN_000209b4();
        }
        pcVar4 = *(code **)(iVar3 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x168) =
             *(undefined4 *)((int)register0x00000054 + -0x150);
        (*pcVar4)();
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x164);
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x160);
        *(undefined4 *)((int)register0x00000054 + -0x168) = 0;
        *(undefined **)((int)register0x00000054 + -0x164) = PTR_DAT_00455488;
        *(undefined4 *)((int)register0x00000054 + -0x160) = 0x29;
        *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x158) = uVar6;
        FUN_0007636c();
        *(undefined4 *)((int)register0x00000054 + -0x168) =
             *(undefined4 *)((int)register0x00000054 + -0x154);
        *(undefined4 *)((int)register0x00000054 + -0x164) =
             *(undefined4 *)((int)register0x00000054 + -0x150);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_0045546c;
        *(undefined4 *)((int)register0x00000054 + -0x164) =
             *(undefined4 *)((int)register0x00000054 + -0x160);
        FUN_00095b00();
        puVar5 = extraout_r1;
        puVar7 = extraout_r2_01;
      }
      *(undefined **)((int)register0x00000054 + -0x168) = puVar5;
      *(undefined **)((int)register0x00000054 + -0x164) = puVar7;
      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00455484;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x16c);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x45545c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.UseMutableConfig @ 0045548c (size 136) */

void k3c_internal_pkg_printer_UseMutableConfig(void)

{
  int unaff_r10;
  undefined1 in_stack_00000004;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0012accc();
  if (local_4 != 0) {
    FUN_0012accc();
  }
  return;
}



/* k3c/internal/pkg/printer.cleanOldMainConfigBackupFile @ 0045551c (size 464) */

void k3c_internal_pkg_printer_cleanOldMainConfigBackupFile(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x54);
      *(undefined4 *)((int)register0x00000054 + -0x54) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      internal_filepathlite_Dir();
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      internal_filepathlite_Base();
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_004556f0;
      *(undefined4 *)((int)register0x00000054 + -0x44) = 1;
      FUN_0014eb18();
      uVar2 = *(uint *)((int)register0x00000054 + -0x40);
      if ((int)uVar2 < 0) {
        uVar2 = *(uint *)((int)register0x00000054 + -0x30);
LAB_004555b8:
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10),uVar2);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x48) = extraout_r2;
        *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_004556f4;
        *(undefined4 *)((int)register0x00000054 + -0x40) = 8;
        FUN_0007636c();
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined1 **)((int)register0x00000054 + -0x50) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 2;
        FUN_0028054c();
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
        FUN_0027f5bc();
        iVar3 = *(int *)((int)register0x00000054 + -0x40);
        if (iVar3 <= *(int *)((int)register0x00000054 + 0xc)) {
          return;
        }
        iVar1 = iVar3 - *(int *)((int)register0x00000054 + 0xc);
        *(int *)((int)register0x00000054 + -0x20) = iVar1;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(int *)((int)register0x00000054 + -0x4c) = iVar3;
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        FUN_001898d8(iVar1);
        uVar2 = *(uint *)((int)register0x00000054 + -0x20);
        uVar6 = *(uint *)((int)register0x00000054 + -0x28) == uVar2;
        if (uVar2 <= *(uint *)((int)register0x00000054 + -0x28)) {
          iVar3 = 0;
          while (iVar3 < (int)uVar2) {
            *(int *)((int)register0x00000054 + -0x24) = iVar3;
            uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x14) + iVar3 * 8 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x50) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -0x14) + iVar3 * 8);
            *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar4;
            FUN_0012ffc0();
            uVar2 = *(uint *)((int)register0x00000054 + -0x20);
            iVar3 = *(int *)((int)register0x00000054 + -0x24) + 1;
          }
          return;
        }
        FUN_0009dc14();
      }
      else {
        uVar6 = *(uint *)((int)register0x00000054 + -0x30) == uVar2;
        if (uVar2 <= *(uint *)((int)register0x00000054 + -0x30)) goto LAB_004555b8;
      }
      param_1 = FUN_0009dbf4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x54);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x4556e8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.NewMutableConfig @ 004556f8 (size 672) */

void k3c_internal_pkg_printer_NewMutableConfig(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 in_stack_0000000c;
  byte bStack00000010;
  char cStack00000011;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x455994;
    FUN_0009bf64();
  }
  FUN_00132cc8();
  if (local_28 != 0) {
    uVar2 = local_28;
    FUN_0012ae4c();
    if ((local_28 & 0xff) == 0) {
      return;
    }
    FUN_000908bc();
    FUN_00022cf8();
    local_24[1] = in_stack_00000008;
    if (*(int *)PTR_DAT_004559a8 != 0) {
      local_24 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = in_stack_00000004;
      unaff_r8[1] = uVar2;
    }
    *local_24 = in_stack_00000004;
    local_24[2] = uVar2;
    local_24[5] = in_stack_0000000c;
    *(byte *)(local_24 + 6) = bStack00000010;
    local_24[3] = in_stack_0000000c;
    *(byte *)(local_24 + 4) = bStack00000010;
    return;
  }
  uVar2 = (uint)bStack00000010;
  uVar3 = in_stack_00000004;
  puVar1 = in_stack_00000008;
  uVar4 = in_stack_0000000c;
  k3c_internal_pkg_printer_loadBinaryConfig();
  if (cStack00000011 == '\0') {
    return;
  }
  FUN_0009df04(0,&local_10,local_20,cStack00000011,unaff_lr,uVar3,puVar1,uVar4,uVar2);
  FUN_0008f77c();
  local_10 = PTR_DAT_004559ac;
  if (local_24 == (undefined4 *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = local_24[1];
  }
  local_c = uVar4;
  k3c_internal_pkg_logger_Errorf();
  uVar3 = in_stack_00000004;
  puVar1 = in_stack_00000008;
  FUN_0012ffc0();
  FUN_000908bc();
  FUN_00022cf8();
  puVar1[1] = in_stack_00000008;
  if (*(int *)PTR_DAT_004559a8 != 0) {
    puVar1 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = in_stack_00000004;
    unaff_r8[1] = uVar3;
  }
  *puVar1 = in_stack_00000004;
  puVar1[2] = uVar3;
  puVar1[5] = in_stack_0000000c;
  *(byte *)(puVar1 + 6) = bStack00000010;
  puVar1[3] = in_stack_0000000c;
  *(byte *)(puVar1 + 4) = bStack00000010;
  return;
}



/* k3c/internal/pkg/printer.loadPlaintextConfig @ 004559b4 (size 432) */

void k3c_internal_pkg_printer_loadPlaintextConfig(void)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 *local_28;
  undefined4 *local_20;
  int local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_28 = in_stack_00000008;
  FUN_0012e1dc();
  if (3 < (int)local_20) {
    local_28 = (undefined4 *)PTR_DAT_00455b68;
    FUN_00018250();
    if ((char)local_20 != '\0') {
      k3c_internal_pkg_printer_loadBinaryConfig();
      return;
    }
  }
  FUN_00022cf8();
  FUN_001574a4();
  if (local_18 != 0) {
    return;
  }
  FUN_00022cf8();
  local_20[1] = in_stack_00000008;
  if (*(int *)PTR_DAT_00455b78 != 0) {
    local_20 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
  }
  *local_20 = in_stack_00000004;
  uVar1 = *local_28;
  if (*(int *)PTR_DAT_00455b78 != 0) {
    local_20 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = extraout_r2;
    uVar1 = extraout_r2;
  }
  local_20[2] = uVar1;
  local_20[5] = in_stack_0000000c;
  *(undefined1 *)(local_20 + 6) = in_stack_00000010;
  local_20[3] = 0;
  *(undefined1 *)(local_20 + 4) = 1;
  return;
}



/* k3c/internal/pkg/printer.loadBinaryConfig @ 00455b7c (size 2396) */

/* WARNING: Removing unreachable block (ram,0x0045640c) */
/* WARNING: Removing unreachable block (ram,0x00455fb4) */
/* WARNING: Removing unreachable block (ram,0x004560a4) */
/* WARNING: Removing unreachable block (ram,0x00455e90) */

void k3c_internal_pkg_printer_loadBinaryConfig(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 in_stack_00000010;
  undefined4 *local_90;
  undefined4 local_84;
  undefined4 *local_80;
  int local_78;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 *local_c;
  undefined4 *local_8;
  undefined **local_4;
  
  while (local_18 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = (undefined **)0x0;
  FUN_0012dc78(0);
  if (local_80 != (undefined4 *)0x0) {
    return;
  }
  local_1c = PTR_k3c_internal_pkg_printer_loadBinaryConfig_deferwrap1_004563b8;
  local_4 = &local_1c;
  FUN_00022cf8(local_84);
  FUN_000986b8();
  FUN_0009dee8(0,local_48,0);
  local_44 = 0x1000;
  local_40 = 0x1000;
  local_3c = PTR_DAT_004563c4;
  local_24 = 0xffffffff;
  local_20 = 0xffffffff;
  uVar2 = 0;
  if (*(int *)PTR_DAT_004563c8 != 0) {
    uVar2 = FUN_00026c00();
  }
  FUN_0009e2c0(uVar2,local_48,in_stack_00000008);
  FUN_000986b8();
  FUN_000ad4fc();
  if (cRam00000000 == '{') {
    k3c_internal_pkg_printer_loadPlaintextConfig();
    (*(code *)*local_4)();
    return;
  }
  FUN_00018250();
  FUN_000986b8();
  FUN_000ad4fc();
  if (local_78 != 0) {
    local_14 = *(undefined4 *)(local_78 + 4);
    FUN_001386c4();
    (*(code *)*local_4)();
    return;
  }
  iVar3 = CONCAT13(uRam00000003,CONCAT12(DAT_00000004,CONCAT11(DAT_00000005,DAT_00000006)));
  FUN_000986b8();
  FUN_000ad4fc();
  FUN_00022cf8();
  puVar1 = PTR_DAT_004563e0;
  local_8 = in_stack_00000008;
  FUN_001574a4();
  if (iVar3 == 0) {
    FUN_000986b8();
    puVar4 = (undefined4 *)local_8[2];
    local_90 = in_stack_00000008;
    FUN_000ad4fc();
    if (local_8[5] != 0) {
      FUN_00022cf8();
      in_stack_00000008[1] = 0x1a;
      *in_stack_00000008 = PTR_DAT_00456408;
      (*(code *)*local_4)();
      return;
    }
    local_80 = puVar4;
    if (*(char *)(local_8 + 6) != '\0') {
      FUN_000986b8();
      local_80 = (undefined4 *)&DAT_00000004;
      FUN_000ad4fc();
      iVar3 = CONCAT13(*(undefined1 *)puVar4,
                       CONCAT12(*(undefined1 *)((int)puVar4 + 1),
                                CONCAT11(*(undefined1 *)((int)puVar4 + 2),
                                         *(undefined1 *)((int)puVar4 + 3))));
      local_90 = (undefined4 *)puVar1;
      FUN_0042dc1c(iVar3);
      if (iVar3 != 4) {
        FUN_00022cf8();
        *(undefined4 *)(puVar1 + 4) = 0x10;
        *(undefined **)puVar1 = PTR_s_invalid_checksumAnycubic_Kobra_3_008262d0_0x39aa_00456400;
        (*(code *)*local_4)();
        return;
      }
    }
    FUN_00022cf8();
    local_c = local_90;
    FUN_001574a4();
    if (local_80 == (undefined4 *)0x0) {
      FUN_00022cf8();
      puVar4[1] = in_stack_00000008;
      if (*(int *)PTR_DAT_004563c8 != 0) {
        puVar4 = (undefined4 *)FUN_0009db54();
        *unaff_r8 = in_stack_00000004;
      }
      *puVar4 = in_stack_00000004;
      uVar2 = *local_c;
      if (*(int *)PTR_DAT_004563c8 != 0) {
        puVar4 = (undefined4 *)FUN_0009db54();
        *unaff_r8 = extraout_r2;
        uVar2 = extraout_r2;
      }
      puVar4[2] = uVar2;
      puVar4[5] = in_stack_0000000c;
      *(undefined1 *)(puVar4 + 6) = in_stack_00000010;
      puVar4[3] = local_8[5];
      *(undefined1 *)(puVar4 + 4) = 0;
      (*(code *)*local_4)();
      return;
    }
    local_14 = local_80[1];
    FUN_001386c4();
    (*(code *)*local_4)();
    return;
  }
  (*(code *)*local_4)();
  return;
}



/* k3c/internal/pkg/printer.loadBinaryConfig.deferwrap1 @ 00456540 (size 96) */

void k3c_internal_pkg_printer_loadBinaryConfig_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if (*(undefined4 **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = **(undefined4 **)(unaff_r7 + 4);
    FUN_0012fb5c();
  }
  return;
}



/* k3c/internal/pkg/printer.(*MutableConfig).SaveAndBackup @ 004565a0 (size 1092) */

void k3c_internal_pkg_printer___MutableConfig__SaveAndBackup(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x3c)) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0xbc);
      *(undefined4 *)((int)register0x00000054 + -0xbc) = unaff_lr;
      uVar2 = (*(undefined4 **)((int)register0x00000054 + 4))[1];
      *(undefined4 *)((int)register0x00000054 + -0xb8) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0xb4) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0xb0) = DAT_004569e8;
      *(undefined4 *)((int)register0x00000054 + -0xac) = 4;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = 3;
      k3c_common_utils_file_DeleteBackFileNameWhileMore();
      if (*(int *)((int)register0x00000054 + -0xa4) != 0) {
        *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -0xa4) + 4);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0xa0);
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_004569ec;
        *(undefined4 *)((int)register0x00000054 + -0xc) = 1;
        *(undefined4 *)((int)register0x00000054 + -8) = 1;
        *(undefined1 **)((int)register0x00000054 + -0x10) =
             (undefined1 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + -0xb8) = *DAT_004569f0;
        *(undefined4 *)((int)register0x00000054 + -0xb4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xb0) = 2;
        *(undefined1 **)((int)register0x00000054 + -0xac) =
             (undefined1 *)((int)register0x00000054 + -0x14);
        FUN_00178514();
      }
      uVar2 = (*(undefined4 **)((int)register0x00000054 + 4))[1];
      *(undefined4 *)((int)register0x00000054 + -0xb8) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0xb4) = uVar2;
      FUN_0027fdb0();
      *(undefined4 *)((int)register0x00000054 + -0xb8) =
           *(undefined4 *)((int)register0x00000054 + -0xb0);
      *(undefined4 *)((int)register0x00000054 + -0xb4) =
           *(undefined4 *)((int)register0x00000054 + -0xac);
      internal_filepathlite_Dir();
      uVar2 = **(undefined4 **)((int)register0x00000054 + 4);
      uVar3 = (*(undefined4 **)((int)register0x00000054 + 4))[1];
      *(undefined4 *)((int)register0x00000054 + -0x70) =
           *(undefined4 *)((int)register0x00000054 + -0xb0);
      *(undefined4 *)((int)register0x00000054 + -0x88) =
           *(undefined4 *)((int)register0x00000054 + -0xac);
      *(undefined4 *)((int)register0x00000054 + -0xb8) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = uVar3;
      internal_filepathlite_Base();
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + -0xb0);
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           *(undefined4 *)((int)register0x00000054 + -0xac);
      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x58),
                   *(undefined4 *)((int)register0x00000054 + -0xac),
                   *(undefined4 *)((int)register0x00000054 + -0xb0));
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + -0x88);
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0xb8) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = extraout_r3;
      *(undefined4 *)((int)register0x00000054 + -0xb0) = extraout_r2;
      *(undefined4 *)((int)register0x00000054 + -0xac) = DAT_004569f4;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = 5;
      FUN_0007636c();
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + -0xa0);
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + -0xa4);
      *(undefined1 **)((int)register0x00000054 + -0xb8) =
           (undefined1 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0xb4) = 2;
      *(undefined4 *)((int)register0x00000054 + -0xb0) = 2;
      FUN_0028054c();
      *(undefined4 *)((int)register0x00000054 + -0x78) =
           *(undefined4 *)((int)register0x00000054 + -0xac);
      *(undefined4 *)((int)register0x00000054 + -0x90) =
           *(undefined4 *)((int)register0x00000054 + -0xa8);
      *(undefined4 *)((int)register0x00000054 + -0xb8) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0xb4) =
           *(undefined4 *)((int)register0x00000054 + -0xac);
      *(undefined4 *)((int)register0x00000054 + -0xb0) =
           *(undefined4 *)((int)register0x00000054 + -0xa8);
      k3c_internal_pkg_printer___MutableConfig__SaveAs();
      if (*(int *)((int)register0x00000054 + -0xac) != 0) {
        *(int *)((int)register0x00000054 + 8) = *(int *)((int)register0x00000054 + -0xac);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xa8);
        return;
      }
      uVar2 = (*(undefined4 **)((int)register0x00000054 + 4))[1];
      *(undefined4 *)((int)register0x00000054 + -0xb8) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0xb4) = uVar2;
      FUN_00132cc8();
      if (*(int *)((int)register0x00000054 + -0xa8) != 0) goto LAB_0045696c;
      *(undefined4 *)((int)register0x00000054 + -0xb8) =
           *(undefined4 *)((int)register0x00000054 + -0x74);
      *(undefined4 *)((int)register0x00000054 + -0xb4) =
           *(undefined4 *)((int)register0x00000054 + -0x8c);
      *(undefined4 *)((int)register0x00000054 + -0xb0) = DAT_004569f8;
      *(undefined4 *)((int)register0x00000054 + -0xac) = 1;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 0xffffffff;
      FUN_0014f168();
      *(int *)((int)register0x00000054 + -0x94) = *(int *)((int)register0x00000054 + -0x9c);
      iVar1 = *(int *)((int)register0x00000054 + -0xa0);
      *(int *)((int)register0x00000054 + -0x7c) = iVar1;
      if (*(int *)((int)register0x00000054 + -0x9c) < 2) {
        uVar3 = 3;
        uVar2 = DAT_004569fc;
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + 0xc);
        uVar2 = *(undefined4 *)(iVar1 + 8);
      }
      *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x84) = uVar3;
      uVar2 = FUN_001160a8();
      uVar2 = FUN_0009e2f0(uVar2,(undefined1 *)((int)register0x00000054 + -0xb8),
                           (undefined1 *)((int)register0x00000054 + -0x28));
      FUN_0009e2f0(uVar2,(undefined1 *)((int)register0x00000054 + -0x28),
                   (undefined1 *)((int)register0x00000054 + -0xb8));
      *(undefined4 *)((int)register0x00000054 + -0xa4) = DAT_00456a00;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 0xe;
      FUN_00101cdc();
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x40),
                   *(undefined4 *)((int)register0x00000054 + -0x98),
                   *(undefined4 *)((int)register0x00000054 + -0x9c));
      bVar5 = *(int *)((int)register0x00000054 + -0x94) == 0;
      if (!bVar5) {
        *(undefined4 *)((int)register0x00000054 + -4) = extraout_r3_00;
        *(undefined4 *)((int)register0x00000054 + -0x80) = extraout_r2_00;
        uVar2 = (*(undefined4 **)((int)register0x00000054 + -0x7c))[1];
        *(undefined4 *)((int)register0x00000054 + -0xb8) =
             **(undefined4 **)((int)register0x00000054 + -0x7c);
        *(undefined4 *)((int)register0x00000054 + -0xb4) = uVar2;
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_00456a04;
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + -0xb0);
        *(undefined4 *)((int)register0x00000054 + -0xb8) =
             *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0xb4) =
             *(undefined4 *)((int)register0x00000054 + -0x80);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_00456a04;
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0xb0);
        *(undefined4 *)((int)register0x00000054 + -0xb8) =
             *(undefined4 *)((int)register0x00000054 + -0x6c);
        *(undefined4 *)((int)register0x00000054 + -0xb4) =
             *(undefined4 *)((int)register0x00000054 + -0x84);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_00456a04;
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0xb0);
        *(undefined4 *)((int)register0x00000054 + -0xb8) = DAT_00456a08;
        *(undefined4 *)((int)register0x00000054 + -0xb4) = 8;
        *(undefined1 **)((int)register0x00000054 + -0xb0) =
             (undefined1 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0xac) = 3;
        *(undefined4 *)((int)register0x00000054 + -0xa8) = 3;
        FUN_0013b72c();
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x68),
                     *(undefined4 *)((int)register0x00000054 + -0xa0),
                     *(undefined4 *)((int)register0x00000054 + -0xa4));
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x88);
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x70);
        *(undefined4 *)((int)register0x00000054 + -0x5c) = extraout_r2_01;
        *(undefined4 *)((int)register0x00000054 + -0x60) = extraout_r3_01;
        *(undefined1 **)((int)register0x00000054 + -0xb8) =
             (undefined1 *)((int)register0x00000054 + -0x68);
        *(undefined4 *)((int)register0x00000054 + -0xb4) = 2;
        *(undefined4 *)((int)register0x00000054 + -0xb0) = 2;
        FUN_0028054c();
        uVar2 = (*(undefined4 **)((int)register0x00000054 + 4))[1];
        *(undefined4 *)((int)register0x00000054 + -0xb8) =
             **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0xb4) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0xb0) =
             *(undefined4 *)((int)register0x00000054 + -0xac);
        *(undefined4 *)((int)register0x00000054 + -0xac) =
             *(undefined4 *)((int)register0x00000054 + -0xa8);
        FUN_0012eed4();
        if (*(int *)((int)register0x00000054 + -0xa8) != 0) {
          *(int *)((int)register0x00000054 + 8) = *(int *)((int)register0x00000054 + -0xa8);
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -0xa4);
          return;
        }
LAB_0045696c:
        uVar3 = **(undefined4 **)((int)register0x00000054 + 4);
        uVar2 = (*(undefined4 **)((int)register0x00000054 + 4))[1];
        *(undefined4 *)((int)register0x00000054 + -0xb8) =
             *(undefined4 *)((int)register0x00000054 + -0x78);
        *(undefined4 *)((int)register0x00000054 + -0xb4) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
        *(undefined4 *)((int)register0x00000054 + -0xb0) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0xac) = uVar2;
        FUN_0012eed4();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0xa8);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xa4);
        return;
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xbc);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x4569e0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*MutableConfig).SaveAndBackup.Println.func1 @ 00456a0c (size 108) */

void k3c_internal_pkg_printer___MutableConfig__SaveAndBackup_Println_func1(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  FUN_0013bc78();
  return;
}



/* k3c/internal/pkg/printer.(*MutableConfig).SaveBinaryFormatAs @ 00456a78 (size 796) */

/* WARNING: Removing unreachable block (ram,0x00456cf4) */
/* WARNING: Removing unreachable block (ram,0x00456d64) */

void k3c_internal_pkg_printer___MutableConfig__SaveBinaryFormatAs(void)

{
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int local_70;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined1 auStack_18 [16];
  undefined1 auStack_8 [4];
  undefined4 *local_4;
  
  while (auStack_8 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x456d98;
    FUN_0009bf64();
  }
  local_4 = (undefined4 *)0x0;
  FUN_0009df00(0,auStack_18,0,0,unaff_lr);
  FUN_00152f6c();
  FUN_0009def0(0,&local_48);
  local_48 = in_stack_00000008;
  local_44 = in_stack_0000000c;
  FUN_0015db30();
  if (local_70 != 0) {
    return;
  }
  local_24 = 3;
  local_40 = 3;
  local_34 = 0;
  local_3c = DAT_00456da8;
  local_38 = 3;
  local_30 = 1;
  FUN_00020b9c();
  FUN_0015db30();
  FUN_00152f6c(3);
  FUN_00152f6c();
  FUN_00152f6c();
  FUN_0042dc1c();
  FUN_00152f6c();
  FUN_0012dc78();
  local_20[0] = DAT_00456db0;
  local_4 = local_20;
  FUN_001534a0();
  (*(code *)*local_4)();
  return;
}



/* k3c/internal/pkg/printer.(*MutableConfig).SaveBinaryFormatAs.deferwrap1 @ 00456db8 (size 96) */

void k3c_internal_pkg_printer___MutableConfig__SaveBinaryFormatAs_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if (*(undefined4 **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = **(undefined4 **)(unaff_r7 + 4);
    FUN_0012fb5c();
  }
  return;
}



/* k3c/internal/pkg/printer.(*MutableConfig).SaveAs @ 00456e18 (size 132) */

void k3c_internal_pkg_printer___MutableConfig__SaveAs(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (*(char *)(in_stack_00000004 + 0x18) != '\0') {
    k3c_internal_pkg_printer___MutableConfig__SavePlainTextFormatAs();
    return;
  }
  k3c_internal_pkg_printer___MutableConfig__SaveBinaryFormatAs();
  return;
}



/* k3c/internal/pkg/printer.(*MutableConfig).SavePlainTextFormatAs @ 00456e9c (size 184) */

void k3c_internal_pkg_printer___MutableConfig__SavePlainTextFormatAs(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0015dd98();
  if (local_8 != 0) {
    return;
  }
  FUN_0012e52c();
  return;
}



/* k3c/internal/pkg/printer.(*MutableConfig).ToInIString @ 00456f60 (size 1724) */

/* WARNING: Removing unreachable block (ram,0x00457188) */

void k3c_internal_pkg_printer___MutableConfig__ToInIString(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint extraout_r2;
  undefined4 uVar6;
  int iVar7;
  int extraout_r2_00;
  undefined4 extraout_r3;
  int iVar8;
  int extraout_r3_00;
  int extraout_r3_01;
  uint uVar9;
  int unaff_r5;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  undefined1 uVar11;
  undefined8 uVar12;
  
code_r0x00456f60:
  if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0xec)) {
    puVar10 = (undefined1 *)((int)register0x00000054 + -0x16c);
    *(undefined4 *)((int)register0x00000054 + -0x16c) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -0x74) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x70) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x6c) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
    FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x34),0,
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8));
    *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_00457620;
    *(undefined4 *)((int)register0x00000054 + -0x164) = extraout_r3;
    *(undefined1 **)((int)register0x00000054 + -0x160) =
         (undefined1 *)((int)register0x00000054 + -0x34);
    FUN_00091764();
    do {
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x34);
      if (puVar1 == (undefined4 *)0x0) {
        iVar5 = *(int *)((int)register0x00000054 + -0x70);
        if (*(uint *)((int)register0x00000054 + -0x6c) <= (uint)-iVar5) {
          *(int *)((int)register0x00000054 + 8) = iVar5;
          *(uint *)((int)register0x00000054 + 0xc) = *(uint *)((int)register0x00000054 + -0x6c);
          return;
        }
        if (iVar5 != 0) {
          FUN_0008a908();
        }
        uVar12 = FUN_0008a948();
        uVar3 = extraout_r2;
        iVar5 = extraout_r3_00;
        goto LAB_00457140;
      }
      uVar4 = *puVar1;
      uVar2 = puVar1[1];
      *(undefined4 *)((int)register0x00000054 + -0x7c) =
           **(undefined4 **)((int)register0x00000054 + -0x30);
      *(undefined1 **)((int)register0x00000054 + -0x168) =
           (undefined1 *)((int)register0x00000054 + -0xdc);
      *(undefined **)((int)register0x00000054 + -0x164) = PTR_DAT_00457624;
      *(undefined4 *)((int)register0x00000054 + -0x160) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0x158) = uVar2;
      *(undefined **)((int)register0x00000054 + -0x154) = PTR_DAT_00457628;
      *(undefined4 *)((int)register0x00000054 + -0x150) = 2;
      FUN_000763e8();
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x14c);
      iVar5 = *(int *)((int)register0x00000054 + -0x148);
      if (*(undefined1 **)((int)register0x00000054 + -0x74) == (undefined1 *)0x0) {
        *(undefined1 **)((int)register0x00000054 + -0x74) =
             (undefined1 *)((int)register0x00000054 + -0x74);
      }
      else {
        uVar11 = *(undefined1 **)((int)register0x00000054 + -0x74) ==
                 (undefined1 *)((int)register0x00000054 + -0x74);
        if (!(bool)uVar11) goto LAB_004575f8;
      }
      uVar3 = *(uint *)((int)register0x00000054 + -0x68);
      iVar8 = *(int *)((int)register0x00000054 + -0x6c);
      uVar9 = iVar5 + iVar8;
      unaff_r5 = *(int *)((int)register0x00000054 + -0x70);
      if (uVar3 < uVar9) {
        *(int *)((int)register0x00000054 + -0x98) = iVar8;
        *(int *)((int)register0x00000054 + -0xa8) = iVar5;
        *(undefined4 *)((int)register0x00000054 + -0x80) = uVar2;
        *(int *)((int)register0x00000054 + -0x168) = unaff_r5;
        *(uint *)((int)register0x00000054 + -0x164) = uVar9;
        *(uint *)((int)register0x00000054 + -0x160) = uVar3;
        *(int *)((int)register0x00000054 + -0x15c) = iVar5;
        *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_0045762c;
        FUN_000987f4();
        unaff_r5 = *(int *)((int)register0x00000054 + -0x154);
        uVar9 = *(uint *)((int)register0x00000054 + -0x150);
        uVar3 = *(uint *)((int)register0x00000054 + -0x14c);
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x80);
        iVar5 = *(int *)((int)register0x00000054 + -0xa8);
        iVar8 = *(int *)((int)register0x00000054 + -0x98);
      }
      *(uint *)((int)register0x00000054 + -0x98) = uVar3;
      *(uint *)((int)register0x00000054 + -0x9c) = uVar9;
      *(int *)((int)register0x00000054 + -4) = unaff_r5;
      *(int *)((int)register0x00000054 + -0x168) = unaff_r5 + iVar8;
      *(undefined4 *)((int)register0x00000054 + -0x164) = uVar2;
      *(int *)((int)register0x00000054 + -0x160) = iVar5;
      FUN_0009e3a4();
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           *(undefined4 *)((int)register0x00000054 + -0x9c);
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + -0x98);
      *(undefined4 *)((int)register0x00000054 + -0x70) =
           *(undefined4 *)((int)register0x00000054 + -4);
      FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -100));
      *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_00457630;
      *(undefined4 *)((int)register0x00000054 + -0x164) =
           *(undefined4 *)((int)register0x00000054 + -0x7c);
      *(undefined1 **)((int)register0x00000054 + -0x160) =
           (undefined1 *)((int)register0x00000054 + -100);
      FUN_00091764();
      while (puVar1 = *(undefined4 **)((int)register0x00000054 + -100), puVar1 != (undefined4 *)0x0)
      {
        uVar6 = **(undefined4 **)((int)register0x00000054 + -0x60);
        uVar4 = (*(undefined4 **)((int)register0x00000054 + -0x60))[1];
        *(undefined4 *)((int)register0x00000054 + -0x78) = *puVar1;
        uVar2 = puVar1[1];
        *(undefined4 *)((int)register0x00000054 + -0xa4) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x168) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x164) = uVar4;
        k3c_internal_pkg_util_cast_ToStringE(uVar2);
        *(undefined4 *)((int)register0x00000054 + -0x90) =
             *(undefined4 *)((int)register0x00000054 + -0x160);
        *(undefined4 *)((int)register0x00000054 + -0xb8) =
             *(undefined4 *)((int)register0x00000054 + -0x15c);
        *(undefined4 *)((int)register0x00000054 + -0x168) =
             *(undefined4 *)((int)register0x00000054 + -0x160);
        *(undefined4 *)((int)register0x00000054 + -0x164) =
             *(undefined4 *)((int)register0x00000054 + -0x15c);
        *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00457634;
        *(undefined4 *)((int)register0x00000054 + -0x15c) = 1;
        internal_stringslite_Index();
        if (*(int *)((int)register0x00000054 + -0x158) == -1) {
          *(undefined1 **)((int)register0x00000054 + -0x168) =
               (undefined1 *)((int)register0x00000054 + -0x13c);
          *(undefined4 *)((int)register0x00000054 + -0x164) =
               *(undefined4 *)((int)register0x00000054 + -0x78);
          *(undefined4 *)((int)register0x00000054 + -0x160) =
               *(undefined4 *)((int)register0x00000054 + -0xa4);
          *(undefined **)((int)register0x00000054 + -0x15c) = PTR_DAT_0082060b_3_00457638;
          *(undefined4 *)((int)register0x00000054 + -0x158) = 3;
          *(undefined4 *)((int)register0x00000054 + -0x154) =
               *(undefined4 *)((int)register0x00000054 + -0x90);
          *(undefined4 *)((int)register0x00000054 + -0x150) =
               *(undefined4 *)((int)register0x00000054 + -0xb8);
          *(undefined **)((int)register0x00000054 + -0x14c) = PTR_DAT_00457634;
          *(undefined4 *)((int)register0x00000054 + -0x148) = 1;
          FUN_00076474();
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x144);
          iVar5 = *(int *)((int)register0x00000054 + -0x140);
          if (*(undefined1 **)((int)register0x00000054 + -0x74) == (undefined1 *)0x0) {
            *(undefined1 **)((int)register0x00000054 + -0x74) =
                 (undefined1 *)((int)register0x00000054 + -0x74);
          }
          else if (*(undefined1 **)((int)register0x00000054 + -0x74) !=
                   (undefined1 *)((int)register0x00000054 + -0x74)) goto LAB_004574ac;
          uVar3 = *(uint *)((int)register0x00000054 + -0x68);
          iVar8 = *(int *)((int)register0x00000054 + -0x6c);
          uVar9 = iVar5 + iVar8;
          unaff_r5 = *(int *)((int)register0x00000054 + -0x70);
          if (uVar3 < uVar9) {
            *(int *)((int)register0x00000054 + -0x98) = iVar8;
            *(int *)((int)register0x00000054 + -0xb4) = iVar5;
            *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar2;
            *(int *)((int)register0x00000054 + -0x168) = unaff_r5;
            *(uint *)((int)register0x00000054 + -0x164) = uVar9;
            *(uint *)((int)register0x00000054 + -0x160) = uVar3;
            *(int *)((int)register0x00000054 + -0x15c) = iVar5;
            *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_0045762c;
            FUN_000987f4();
            unaff_r5 = *(int *)((int)register0x00000054 + -0x154);
            uVar9 = *(uint *)((int)register0x00000054 + -0x150);
            uVar3 = *(uint *)((int)register0x00000054 + -0x14c);
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x8c);
            iVar5 = *(int *)((int)register0x00000054 + -0xb4);
            iVar8 = *(int *)((int)register0x00000054 + -0x98);
          }
          *(uint *)((int)register0x00000054 + -0x98) = uVar9;
          *(int *)((int)register0x00000054 + -4) = unaff_r5;
          *(uint *)((int)register0x00000054 + -0x9c) = uVar3;
          *(int *)((int)register0x00000054 + -0x168) = unaff_r5 + iVar8;
          *(undefined4 *)((int)register0x00000054 + -0x164) = uVar2;
          *(int *)((int)register0x00000054 + -0x160) = iVar5;
          FUN_0009e3a4();
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x98);
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)((int)register0x00000054 + -0x9c);
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -4);
          goto LAB_0045741c;
        }
        *(undefined1 **)((int)register0x00000054 + -0x168) =
             (undefined1 *)((int)register0x00000054 + -0xfc);
        *(undefined4 *)((int)register0x00000054 + -0x164) =
             *(undefined4 *)((int)register0x00000054 + -0x78);
        *(undefined4 *)((int)register0x00000054 + -0x160) =
             *(undefined4 *)((int)register0x00000054 + -0xa4);
        *(undefined **)((int)register0x00000054 + -0x15c) = PTR_DAT_0082060b_3_00457638;
        *(undefined4 *)((int)register0x00000054 + -0x158) = 3;
        FUN_0007636c();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x154);
        iVar5 = *(int *)((int)register0x00000054 + -0x150);
        if (*(undefined1 **)((int)register0x00000054 + -0x74) == (undefined1 *)0x0) {
          *(undefined1 **)((int)register0x00000054 + -0x74) =
               (undefined1 *)((int)register0x00000054 + -0x74);
        }
        else {
          uVar11 = *(undefined1 **)((int)register0x00000054 + -0x74) ==
                   (undefined1 *)((int)register0x00000054 + -0x74);
          if (!(bool)uVar11) {
LAB_004575e4:
            *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_0045763c;
            *(undefined **)((int)register0x00000054 + -0x164) = PTR_DAT_00457650;
            FUN_00095b00();
            goto LAB_004575f8;
          }
        }
        uVar3 = *(uint *)((int)register0x00000054 + -0x68);
        iVar8 = *(int *)((int)register0x00000054 + -0x6c);
        uVar9 = iVar5 + iVar8;
        unaff_r5 = *(int *)((int)register0x00000054 + -0x70);
        if (uVar3 < uVar9) {
          *(int *)((int)register0x00000054 + -0x98) = iVar8;
          *(int *)((int)register0x00000054 + -0xac) = iVar5;
          *(undefined4 *)((int)register0x00000054 + -0x84) = uVar2;
          *(int *)((int)register0x00000054 + -0x168) = unaff_r5;
          *(uint *)((int)register0x00000054 + -0x164) = uVar9;
          *(uint *)((int)register0x00000054 + -0x160) = uVar3;
          *(int *)((int)register0x00000054 + -0x15c) = iVar5;
          *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_0045762c;
          FUN_000987f4();
          unaff_r5 = *(int *)((int)register0x00000054 + -0x154);
          uVar9 = *(uint *)((int)register0x00000054 + -0x150);
          uVar3 = *(uint *)((int)register0x00000054 + -0x14c);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x84);
          iVar5 = *(int *)((int)register0x00000054 + -0xac);
          iVar8 = *(int *)((int)register0x00000054 + -0x98);
        }
        *(uint *)((int)register0x00000054 + -0x98) = uVar3;
        *(uint *)((int)register0x00000054 + -0x9c) = uVar9;
        *(int *)((int)register0x00000054 + -4) = unaff_r5;
        *(int *)((int)register0x00000054 + -0x168) = unaff_r5 + iVar8;
        *(undefined4 *)((int)register0x00000054 + -0x164) = uVar2;
        *(int *)((int)register0x00000054 + -0x160) = iVar5;
        FUN_0009e3a4();
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x98);
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x168) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
        *(undefined4 *)((int)register0x00000054 + -0x164) =
             *(undefined4 *)((int)register0x00000054 + -0xb8);
        *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00457634;
        *(undefined4 *)((int)register0x00000054 + -0x15c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x158) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x154) = 0xffffffff;
        FUN_0014f168();
        iVar5 = *(int *)((int)register0x00000054 + -0x150);
        *(int *)((int)register0x00000054 + -0x94) = iVar5;
        iVar8 = *(int *)((int)register0x00000054 + -0x14c);
        *(int *)((int)register0x00000054 + -0xbc) = iVar8;
        iVar7 = 0;
LAB_00457508:
        if (iVar7 < iVar8) {
          *(int *)((int)register0x00000054 + -0x98) = iVar7;
          uVar2 = *(undefined4 *)(iVar5 + iVar7 * 8);
          uVar4 = *(undefined4 *)(iVar5 + iVar7 * 8 + 4);
          *(undefined1 **)((int)register0x00000054 + -0x168) =
               (undefined1 *)((int)register0x00000054 + -0x11c);
          *(undefined **)((int)register0x00000054 + -0x164) =
               PTR_s_panic_resultparamsmethodscriptst_008214ab_0x2a_00457648;
          unaff_r5 = 6;
          *(undefined4 *)((int)register0x00000054 + -0x160) = 6;
          *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -0x158) = uVar4;
          FUN_0007636c();
          iVar5 = *(int *)((int)register0x00000054 + -0x150);
          if (*(undefined1 **)((int)register0x00000054 + -0x74) == (undefined1 *)0x0) {
            *(undefined1 **)((int)register0x00000054 + -0x74) =
                 (undefined1 *)((int)register0x00000054 + -0x74);
          }
          else {
            uVar11 = *(undefined1 **)((int)register0x00000054 + -0x74) ==
                     (undefined1 *)((int)register0x00000054 + -0x74);
            if (!(bool)uVar11) {
              *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_0045763c;
              *(undefined **)((int)register0x00000054 + -0x164) = PTR_DAT_0045764c;
              FUN_00095b00();
              goto LAB_004575e4;
            }
          }
          uVar3 = *(uint *)((int)register0x00000054 + -0x68);
          uVar12 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x154),uVar3);
          iVar8 = *(int *)((int)register0x00000054 + -0x6c);
          uVar9 = iVar5 + iVar8;
          unaff_r5 = *(int *)((int)register0x00000054 + -0x70);
          if (uVar3 < uVar9) {
            *(int *)((int)register0x00000054 + -0x9c) = iVar8;
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x154);
            *(int *)((int)register0x00000054 + -0xb0) = iVar5;
            *(int *)((int)register0x00000054 + -0x168) = unaff_r5;
            *(uint *)((int)register0x00000054 + -0x164) = uVar9;
            *(uint *)((int)register0x00000054 + -0x160) = uVar3;
            *(int *)((int)register0x00000054 + -0x15c) = iVar5;
            *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_0045762c;
            FUN_000987f4();
            unaff_r5 = *(int *)((int)register0x00000054 + -0x154);
            uVar9 = *(uint *)((int)register0x00000054 + -0x150);
            uVar12 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x88),
                              *(undefined4 *)((int)register0x00000054 + -0x14c));
            iVar5 = *(int *)((int)register0x00000054 + -0xb0);
            iVar8 = *(int *)((int)register0x00000054 + -0x9c);
          }
LAB_004574c0:
          *(int *)((int)register0x00000054 + -0x9c) = (int)uVar12;
          *(uint *)((int)register0x00000054 + -0xa0) = uVar9;
          *(int *)((int)register0x00000054 + -4) = unaff_r5;
          *(int *)((int)register0x00000054 + -0x168) = unaff_r5 + iVar8;
          *(int *)((int)register0x00000054 + -0x164) = (int)((ulonglong)uVar12 >> 0x20);
          *(int *)((int)register0x00000054 + -0x160) = iVar5;
          FUN_0009e3a4();
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0xa0);
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)((int)register0x00000054 + -0x9c);
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -4);
          iVar7 = *(int *)((int)register0x00000054 + -0x98) + 1;
          iVar5 = *(int *)((int)register0x00000054 + -0x94);
          iVar8 = *(int *)((int)register0x00000054 + -0xbc);
          goto LAB_00457508;
        }
LAB_0045741c:
        if (*(undefined1 **)((int)register0x00000054 + -0x74) != (undefined1 *)0x0) {
          if (*(undefined1 **)((int)register0x00000054 + -0x74) ==
              (undefined1 *)((int)register0x00000054 + -0x74)) goto LAB_00457448;
          *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_0045763c;
          *(undefined **)((int)register0x00000054 + -0x164) = PTR_DAT_00457640;
          FUN_00095b00();
LAB_004574ac:
          *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_0045763c;
          *(undefined **)((int)register0x00000054 + -0x164) = PTR_DAT_00457644;
          uVar12 = FUN_00095b00();
          iVar5 = extraout_r2_00;
          iVar8 = extraout_r3_01;
          goto LAB_004574c0;
        }
        *(undefined1 **)((int)register0x00000054 + -0x74) =
             (undefined1 *)((int)register0x00000054 + -0x74);
LAB_00457448:
        uVar9 = *(uint *)((int)register0x00000054 + -0x68);
        iVar8 = *(int *)((int)register0x00000054 + -0x6c);
        uVar12 = CONCAT44(iVar8,uVar9);
        uVar3 = iVar8 + 1;
        iVar5 = *(int *)((int)register0x00000054 + -0x70);
        if (uVar9 < uVar3) {
          *(int *)((int)register0x00000054 + -0x98) = iVar8;
          *(int *)((int)register0x00000054 + -0x168) = iVar5;
          *(uint *)((int)register0x00000054 + -0x164) = uVar3;
          *(uint *)((int)register0x00000054 + -0x160) = uVar9;
          *(undefined4 *)((int)register0x00000054 + -0x15c) = 1;
          *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_0045762c;
          FUN_000987f4();
          iVar5 = *(int *)((int)register0x00000054 + -0x154);
          uVar3 = *(uint *)((int)register0x00000054 + -0x150);
          uVar12 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x98),
                            *(undefined4 *)((int)register0x00000054 + -0x14c));
        }
LAB_00457140:
        uVar9 = 10;
        *(undefined1 *)(iVar5 + (int)((ulonglong)uVar12 >> 0x20)) = 10;
        *(uint *)((int)register0x00000054 + -0x6c) = uVar3;
        *(int *)((int)register0x00000054 + -0x68) = (int)uVar12;
        *(int *)((int)register0x00000054 + -0x70) = iVar5;
        *(undefined1 **)((int)register0x00000054 + -0x168) =
             (undefined1 *)((int)register0x00000054 + -100);
        FUN_000919c8();
      }
      *(undefined1 **)((int)register0x00000054 + -0x168) =
           (undefined1 *)((int)register0x00000054 + -0x34);
      FUN_000919c8();
    } while( true );
  }
  goto LAB_00457610;
LAB_004575f8:
  *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_0045763c;
  *(undefined **)((int)register0x00000054 + -0x164) = PTR_DAT_00457654;
  param_1 = FUN_00095b00();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x16c);
  if ((bool)uVar11) {
    register0x00000054 = (BADSPACEBASE *)puVar10;
  }
LAB_00457610:
  unaff_lr = 0x457618;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x00456f60;
}



/* k3c/internal/pkg/printer.(*MutableConfig).SyncFile @ 00457658 (size 104) */

void k3c_internal_pkg_printer___MutableConfig__SyncFile(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 *local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *local_8 = DAT_004576c8;
  if (*DAT_004576cc != 0) {
    local_8 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
  }
  local_8[1] = in_stack_00000004;
  FUN_00062dd0();
  return;
}



/* k3c/internal/pkg/printer.(*MutableConfig).SyncFile.func1 @ 004576d0 (size 216) */

void k3c_internal_pkg_printer___MutableConfig__SyncFile_func1(void)

{
  int unaff_r10;
  int iStack_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  FUN_0012dc78();
  if (iStack_1c != 0) {
    FUN_0012eb1c();
    FUN_0012fb5c();
    FUN_0008f77c();
    k3c_internal_pkg_logger_Debugf();
  }
  return;
}



/* k3c/internal/pkg/printer.Section.Get @ 004577b4 (size 88) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer_Section_Get(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x457808;
    FUN_0009bf64();
  }
  FUN_00025f60();
  in_stack_00000010 = *puStack_4;
  in_stack_00000014 = puStack_4[1];
                    /* WARNING: Could not recover jumptable at 0x004577fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.Section.Has @ 00457814 (size 76) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer_Section_Has(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45785c;
    FUN_0009bf64();
  }
  FUN_00093560();
                    /* WARNING: Could not recover jumptable at 0x00457850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.Section.Set @ 00457868 (size 128) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer_Section_Set(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4578e4;
    FUN_0009bf64();
  }
  FUN_00093a08();
  *puStack_4 = in_stack_00000010;
  if (*_UNK_004578f0 != 0) {
    puStack_4 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = in_stack_00000014;
    unaff_r8[1] = puStack_4[1];
  }
  puStack_4[1] = in_stack_00000014;
                    /* WARNING: Could not recover jumptable at 0x004578d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.NewRawConfigParser @ 004578f4 (size 280) */

void k3c_internal_pkg_printer_NewRawConfigParser(void)

{
  undefined4 *puVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 extraout_r1_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 *local_c;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  FUN_00022cf8();
  *local_c = 0;
  local_c[3] = 0;
  puVar1 = local_c;
  if (*(int *)PTR_DAT_00457a18 != 0) {
    puVar1 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *local_c;
  }
  *local_c = puVar1;
  FUN_003edf64();
  uVar2 = local_8;
  if (*(int *)PTR_DAT_00457a18 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = local_c[4];
    uVar2 = extraout_r1;
  }
  local_c[4] = uVar2;
  FUN_003edf64();
  if (*(int *)PTR_DAT_00457a18 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = local_c[5];
    local_8 = extraout_r1_00;
  }
  local_c[5] = local_8;
  return;
}



/* k3c/internal/pkg/printer.(*RawConfigParser).Options @ 00457a24 (size 348) */

void k3c_internal_pkg_printer___RawConfigParser__Options(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      iVar1 = **(int **)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0xc) = iVar1;
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_00457b84;
      *(undefined4 *)((int)register0x00000054 + -0x28) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x18) == '\0') {
        puVar3 = (undefined *)0x0;
        uVar2 = 0;
        bVar5 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0xd) = *(char *)((int)register0x00000054 + -0x18);
        uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xc) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_00457b84;
        *(undefined4 *)((int)register0x00000054 + -0x28) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00025f60();
        puVar3 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x1c);
        uVar2 = (*(undefined4 **)((int)register0x00000054 + -0x1c))[1];
        bVar5 = *(char *)((int)register0x00000054 + -0xd) == '\0';
      }
      if (bVar5) {
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00457b8c;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_00457b90;
        *(undefined4 *)((int)register0x00000054 + -0x28) = 0x14;
        *(undefined1 **)((int)register0x00000054 + -0x24) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x20) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 1;
        FUN_001386c4();
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        return;
      }
      bVar5 = puVar3 == PTR_DAT_00457b88;
      if (bVar5) {
        *(undefined4 *)((int)register0x00000054 + 0x10) = uVar2;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x2c) = puVar3;
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_00457b88;
      *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_00457b94;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x457b7c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*RawConfigParser).Has_option @ 00457b98 (size 228) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___RawConfigParser__Has_option(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      iVar1 = **(int **)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -4) = iVar1;
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = _UNK_00457c80;
      *(undefined4 *)((int)register0x00000054 + -0x18) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -8) == '\0') {
        *(undefined1 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00457c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = _UNK_00457c80;
      *(undefined4 *)((int)register0x00000054 + -0x18) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00025f60();
      iVar1 = **(int **)((int)register0x00000054 + -0xc);
      bVar4 = iVar1 == _UNK_00457c84;
      if (bVar4) {
        iVar1 = (*(int **)((int)register0x00000054 + -0xc))[1];
        *(int *)((int)register0x00000054 + -0x1c) = _UNK_00457c84;
        *(int *)((int)register0x00000054 + -0x18) = iVar1;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        FUN_00093560();
        *(undefined1 *)((int)register0x00000054 + 0x18) =
             *(undefined1 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x00457c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      *(int *)((int)register0x00000054 + -0x1c) = iVar1;
      *(int *)((int)register0x00000054 + -0x18) = _UNK_00457c84;
      *(undefined4 *)((int)register0x00000054 + -0x14) = _UNK_00457c88;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x457c78;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*RawConfigParser).IsEmpty @ 00457c8c (size 32) */

void k3c_internal_pkg_printer___RawConfigParser__IsEmpty(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(int *)(*in_stack_00000004 + 4) == 0;
                    /* WARNING: Could not recover jumptable at 0x00457ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*RawConfigParser).Sections @ 00457cac (size 336) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___RawConfigParser__Sections(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_r2;
  uint uVar5;
  uint extraout_r3;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar11;
  int *in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  int iStack_30;
  int iStack_28;
  uint uStack_24;
  uint uStack_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x457df8;
    FUN_0009bf64();
  }
  iVar2 = *(int *)(*in_stack_00000004 + 4);
  FUN_000986b8();
  FUN_00093f5c();
  uVar5 = 0;
  iVar6 = 0;
  uVar7 = 0;
  iVar1 = iStack_30;
  iVar3 = iVar2;
  for (iVar4 = 0; iVar4 < iVar3; iVar4 = iVar4 + 1) {
    uVar7 = uVar7 + 1;
    uVar9 = *(undefined4 *)(iVar1 + iVar4 * 8);
    uVar8 = *(undefined4 *)(iVar1 + iVar4 * 8 + 4);
    if (uVar5 < uVar7) {
      FUN_000987f4();
      iVar1 = iStack_30;
      iVar3 = iVar2;
      uVar5 = uStack_20;
      iVar6 = iStack_28;
      uVar7 = uStack_24;
    }
    uVar11 = CONCAT44(iVar3,iVar1);
    puVar10 = (undefined4 *)(uVar7 - 1);
    *(undefined4 *)(iVar6 + (int)puVar10 * 8 + 4) = uVar8;
    if (*_UNK_00457e04 != 0) {
      uVar11 = FUN_0009db64();
      *puVar10 = uVar9;
      *(undefined4 *)(uVar7 + 3) = *(undefined4 *)(iVar6 + (int)puVar10 * 8);
      iVar4 = extraout_r2;
      uVar5 = extraout_r3;
    }
    iVar3 = (int)((ulonglong)uVar11 >> 0x20);
    iVar1 = (int)uVar11;
    *(undefined4 *)(iVar6 + (int)puVar10 * 8) = uVar9;
  }
  in_stack_00000008 = iVar6;
  in_stack_0000000c = uVar7;
  in_stack_00000010 = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00457dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*RawConfigParser).Write @ 00457e08 (size 1292) */

void k3c_internal_pkg_printer___RawConfigParser__Write(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 extraout_r2;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  bool bVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x170)) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x1f0);
      *(undefined4 *)((int)register0x00000054 + -0x1f0) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x10c) =
           **(undefined4 **)((int)register0x00000054 + 4);
      uVar1 = FUN_0009def8(0,(undefined1 *)((int)register0x00000054 + -0x7c));
      FUN_0009de88(uVar1,(undefined1 *)((int)register0x00000054 + -0x108));
      *(undefined1 **)((int)register0x00000054 + -0x70) =
           (undefined1 *)((int)register0x00000054 + -0x108);
      FUN_0006aa3c();
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + -0x1ec);
      FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x30),
                   *(undefined4 *)(*(int *)((int)register0x00000054 + -0x10c) + 0xc));
      *(undefined **)((int)register0x00000054 + -0x1ec) = PTR_DAT_00458318;
      *(undefined4 *)((int)register0x00000054 + -0x1e8) = extraout_r2;
      *(undefined1 **)((int)register0x00000054 + -0x1e4) =
           (undefined1 *)((int)register0x00000054 + -0x30);
      FUN_00091764();
      while (puVar6 = *(undefined4 **)((int)register0x00000054 + -0x30), puVar6 != (undefined4 *)0x0
            ) {
        uVar1 = *puVar6;
        uVar3 = puVar6[1];
        *(undefined4 *)((int)register0x00000054 + -0x138) =
             **(undefined4 **)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x118) =
             (*(undefined4 **)((int)register0x00000054 + -0x2c))[1];
        *(undefined **)((int)register0x00000054 + -0x1ec) = PTR_DAT_00458318;
        *(undefined1 **)((int)register0x00000054 + -0x1e8) =
             (undefined1 *)((int)register0x00000054 + -0x7c);
        *(undefined4 *)((int)register0x00000054 + -0x1e4) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x1e0) = uVar3;
        FUN_00093a08();
        puVar6 = *(undefined4 **)((int)register0x00000054 + -0x1dc);
        *puVar6 = *(undefined4 *)((int)register0x00000054 + -0x138);
        if (*(int *)PTR_DAT_0045831c == 0) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x118);
        }
        else {
          puVar6 = (undefined4 *)FUN_0009db64();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x118);
          *unaff_r8 = uVar1;
          unaff_r8[1] = puVar6[1];
        }
        puVar6[1] = uVar1;
        *(undefined1 **)((int)register0x00000054 + -0x1ec) =
             (undefined1 *)((int)register0x00000054 + -0x30);
        FUN_000919c8();
      }
      FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x30));
      *(undefined **)((int)register0x00000054 + -0x1ec) = PTR_DAT_00458318;
      *(undefined1 **)((int)register0x00000054 + -0x1e8) =
           (undefined1 *)((int)register0x00000054 + -0x7c);
      *(undefined1 **)((int)register0x00000054 + -0x1e4) =
           (undefined1 *)((int)register0x00000054 + -0x30);
      FUN_00091764();
      while( true ) {
        puVar6 = *(undefined4 **)((int)register0x00000054 + -0x30);
        if (puVar6 == (undefined4 *)0x0) {
          uVar1 = 0;
          if (*(int *)((int)register0x00000054 + 8) != 0) {
            uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 4);
            *(undefined **)((int)register0x00000054 + -0x1ec) = PTR_DAT_0045832c;
            *(undefined4 *)((int)register0x00000054 + -0x1e8) = uVar1;
            FUN_00020dac();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -0x1e4);
          }
          *(undefined4 *)((int)register0x00000054 + 0x10) = uVar1;
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          return;
        }
        uVar3 = *puVar6;
        uVar1 = puVar6[1];
        *(undefined4 *)((int)register0x00000054 + -0x130) =
             **(undefined4 **)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x114) =
             (*(undefined4 **)((int)register0x00000054 + -0x2c))[1];
        *(undefined1 **)((int)register0x00000054 + -0x1ec) =
             (undefined1 *)((int)register0x00000054 + -0x160);
        *(undefined **)((int)register0x00000054 + -0x1e8) = PTR_DAT_00458320;
        *(undefined4 *)((int)register0x00000054 + -0x1e4) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x1e0) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x1dc) = uVar1;
        *(undefined **)((int)register0x00000054 + -0x1d8) = PTR_DAT_00458324;
        *(undefined4 *)((int)register0x00000054 + -0x1d4) = 2;
        FUN_000763e8();
        *(undefined4 *)((int)register0x00000054 + -0x1ec) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x1e8) =
             *(undefined4 *)((int)register0x00000054 + -0x1d0);
        *(undefined4 *)((int)register0x00000054 + -0x1e4) =
             *(undefined4 *)((int)register0x00000054 + -0x1cc);
        FUN_000766e8();
        pcVar4 = *(code **)(*(int *)((int)register0x00000054 + 8) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x1ec) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x1e8) =
             *(undefined4 *)((int)register0x00000054 + -0x1e0);
        *(undefined4 *)((int)register0x00000054 + -0x1e4) =
             *(undefined4 *)((int)register0x00000054 + -0x1dc);
        *(undefined4 *)((int)register0x00000054 + -0x1e0) =
             *(undefined4 *)((int)register0x00000054 + -0x1d8);
        (*pcVar4)();
        bVar9 = *(undefined **)((int)register0x00000054 + -0x130) == PTR_DAT_00458328;
        if (!bVar9) break;
        FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x60));
        *(undefined **)((int)register0x00000054 + -0x1ec) = PTR_DAT_00458328;
        *(undefined4 *)((int)register0x00000054 + -0x1e8) =
             *(undefined4 *)((int)register0x00000054 + -0x114);
        *(undefined1 **)((int)register0x00000054 + -0x1e4) =
             (undefined1 *)((int)register0x00000054 + -0x60);
        FUN_00091764();
        while (puVar6 = *(undefined4 **)((int)register0x00000054 + -0x60),
              puVar6 != (undefined4 *)0x0) {
          uVar3 = **(undefined4 **)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -0x120) = uVar3;
          uVar1 = (*(undefined4 **)((int)register0x00000054 + -0x5c))[1];
          *(undefined4 *)((int)register0x00000054 + -0x13c) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x110) = *puVar6;
          *(undefined4 *)((int)register0x00000054 + -300) = puVar6[1];
          *(undefined4 *)((int)register0x00000054 + -0x1ec) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x1e8) = uVar1;
          *(undefined **)((int)register0x00000054 + -0x1e4) = PTR_DAT_00458330;
          *(undefined4 *)((int)register0x00000054 + -0x1e0) = 1;
          internal_stringslite_Index();
          if (*(int *)((int)register0x00000054 + -0x1dc) == -1) {
            *(undefined1 **)((int)register0x00000054 + -0x1ec) =
                 (undefined1 *)((int)register0x00000054 + -0x1c0);
            *(undefined4 *)((int)register0x00000054 + -0x1e8) =
                 *(undefined4 *)((int)register0x00000054 + -0x110);
            *(undefined4 *)((int)register0x00000054 + -0x1e4) =
                 *(undefined4 *)((int)register0x00000054 + -300);
            *(undefined **)((int)register0x00000054 + -0x1e0) = PTR_DAT_0082060b_3_00458338;
            *(undefined4 *)((int)register0x00000054 + -0x1dc) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x1d8) =
                 *(undefined4 *)((int)register0x00000054 + -0x120);
            *(undefined4 *)((int)register0x00000054 + -0x1d4) =
                 *(undefined4 *)((int)register0x00000054 + -0x13c);
            *(undefined **)((int)register0x00000054 + -0x1d0) = PTR_DAT_00458330;
            *(undefined4 *)((int)register0x00000054 + -0x1cc) = 1;
            FUN_00076474();
            *(undefined4 *)((int)register0x00000054 + -0x1ec) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x1e8) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c8);
            *(undefined4 *)((int)register0x00000054 + -0x1e4) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c4);
            FUN_000766e8();
            pcVar4 = *(code **)(*(int *)((int)register0x00000054 + 8) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x1ec) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x1e8) =
                 *(undefined4 *)((int)register0x00000054 + -0x1e0);
            *(undefined4 *)((int)register0x00000054 + -0x1e4) =
                 *(undefined4 *)((int)register0x00000054 + -0x1dc);
            *(undefined4 *)((int)register0x00000054 + -0x1e0) =
                 *(undefined4 *)((int)register0x00000054 + -0x1d8);
            (*pcVar4)();
          }
          else {
            *(undefined1 **)((int)register0x00000054 + -0x1ec) =
                 (undefined1 *)((int)register0x00000054 + -0x180);
            *(undefined4 *)((int)register0x00000054 + -0x1e8) =
                 *(undefined4 *)((int)register0x00000054 + -0x110);
            *(undefined4 *)((int)register0x00000054 + -0x1e4) =
                 *(undefined4 *)((int)register0x00000054 + -300);
            *(undefined **)((int)register0x00000054 + -0x1e0) =
                 PTR_s___waitstatcodeunixinforeadseekop_00820821_0xd5_00458334;
            *(undefined4 *)((int)register0x00000054 + -0x1dc) = 4;
            FUN_0007636c();
            *(undefined4 *)((int)register0x00000054 + -0x1ec) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x1e8) =
                 *(undefined4 *)((int)register0x00000054 + -0x1d8);
            *(undefined4 *)((int)register0x00000054 + -0x1e4) =
                 *(undefined4 *)((int)register0x00000054 + -0x1d4);
            FUN_000766e8();
            pcVar4 = *(code **)(*(int *)((int)register0x00000054 + 8) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x1ec) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x1e8) =
                 *(undefined4 *)((int)register0x00000054 + -0x1e0);
            *(undefined4 *)((int)register0x00000054 + -0x1e4) =
                 *(undefined4 *)((int)register0x00000054 + -0x1dc);
            *(undefined4 *)((int)register0x00000054 + -0x1e0) =
                 *(undefined4 *)((int)register0x00000054 + -0x1d8);
            (*pcVar4)();
            *(undefined4 *)((int)register0x00000054 + -0x1ec) =
                 *(undefined4 *)((int)register0x00000054 + -0x120);
            *(undefined4 *)((int)register0x00000054 + -0x1e8) =
                 *(undefined4 *)((int)register0x00000054 + -0x13c);
            *(undefined **)((int)register0x00000054 + -0x1e4) = PTR_DAT_00458330;
            *(undefined4 *)((int)register0x00000054 + -0x1e0) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x1dc) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x1d8) = 0xffffffff;
            FUN_0014f168();
            iVar2 = *(int *)((int)register0x00000054 + -0x1d4);
            *(int *)((int)register0x00000054 + -0x124) = iVar2;
            iVar5 = *(int *)((int)register0x00000054 + -0x1d0);
            *(int *)((int)register0x00000054 + -0x140) = iVar5;
            iVar7 = 0;
            while (iVar7 < iVar5) {
              *(int *)((int)register0x00000054 + -0x128) = iVar7;
              *(undefined4 *)((int)register0x00000054 + -0x11c) = *(undefined4 *)(iVar2 + iVar7 * 8)
              ;
              *(undefined4 *)((int)register0x00000054 + -0x134) =
                   *(undefined4 *)(iVar2 + iVar7 * 8 + 4);
              *(undefined **)((int)register0x00000054 + -0x1ec) = PTR_DAT_0045833c;
              *(undefined4 *)((int)register0x00000054 + -0x1e8) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x1e4) = 4;
              FUN_00150208();
              *(undefined1 **)((int)register0x00000054 + -0x1ec) =
                   (undefined1 *)((int)register0x00000054 + -0x1a0);
              *(undefined4 *)((int)register0x00000054 + -0x1e8) =
                   *(undefined4 *)((int)register0x00000054 + -0x1e0);
              *(undefined4 *)((int)register0x00000054 + -0x1e4) =
                   *(undefined4 *)((int)register0x00000054 + -0x1dc);
              *(undefined4 *)((int)register0x00000054 + -0x1e0) =
                   *(undefined4 *)((int)register0x00000054 + -0x11c);
              *(undefined4 *)((int)register0x00000054 + -0x1dc) =
                   *(undefined4 *)((int)register0x00000054 + -0x134);
              *(undefined **)((int)register0x00000054 + -0x1d8) = PTR_DAT_00458330;
              *(undefined4 *)((int)register0x00000054 + -0x1d4) = 1;
              FUN_000763e8();
              *(undefined4 *)((int)register0x00000054 + -0x1ec) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x1e8) =
                   *(undefined4 *)((int)register0x00000054 + -0x1d0);
              *(undefined4 *)((int)register0x00000054 + -0x1e4) =
                   *(undefined4 *)((int)register0x00000054 + -0x1cc);
              FUN_000766e8();
              pcVar4 = *(code **)(*(int *)((int)register0x00000054 + 8) + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x1ec) =
                   *(undefined4 *)((int)register0x00000054 + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x1e8) =
                   *(undefined4 *)((int)register0x00000054 + -0x1e0);
              *(undefined4 *)((int)register0x00000054 + -0x1e4) =
                   *(undefined4 *)((int)register0x00000054 + -0x1dc);
              *(undefined4 *)((int)register0x00000054 + -0x1e0) =
                   *(undefined4 *)((int)register0x00000054 + -0x1d8);
              (*pcVar4)();
              iVar2 = *(int *)((int)register0x00000054 + -0x124);
              iVar5 = *(int *)((int)register0x00000054 + -0x140);
              iVar7 = *(int *)((int)register0x00000054 + -0x128) + 1;
            }
          }
          *(undefined1 **)((int)register0x00000054 + -0x1ec) =
               (undefined1 *)((int)register0x00000054 + -0x60);
          FUN_000919c8();
        }
        *(undefined1 **)((int)register0x00000054 + -0x1ec) =
             (undefined1 *)((int)register0x00000054 + -0x30);
        FUN_000919c8();
      }
      *(undefined **)((int)register0x00000054 + -0x1ec) =
           *(undefined **)((int)register0x00000054 + -0x130);
      *(undefined **)((int)register0x00000054 + -0x1e8) = PTR_DAT_00458328;
      *(undefined **)((int)register0x00000054 + -0x1e4) = PTR_DAT_00458340;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1f0);
      if (bVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x458310;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*RawConfigParser).Has_section @ 00458344 (size 144) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___RawConfigParser__Has_section(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 in_stack_00000010;
  undefined1 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4583d0;
    FUN_0009bf64();
  }
  FUN_00093560();
  if (uStack_c != '\0') {
    FUN_00025f60();
  }
                    /* WARNING: Could not recover jumptable at 0x004583c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*RawConfigParser).Get @ 004583dc (size 308) */

void k3c_internal_pkg_printer___RawConfigParser__Get(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      iVar1 = **(int **)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -4) = iVar1;
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00458514;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        puVar3 = (undefined *)0x0;
        uVar2 = 0;
        bVar5 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -5) = *(char *)((int)register0x00000054 + -0xc);
        uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00458514;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00025f60();
        puVar3 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x10);
        uVar2 = (*(undefined4 **)((int)register0x00000054 + -0x10))[1];
        bVar5 = *(char *)((int)register0x00000054 + -5) == '\0';
      }
      if (bVar5) goto LAB_004584d8;
      bVar5 = puVar3 == PTR_DAT_00458518;
      if (bVar5) {
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00458518;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0xc) != '\0') {
          uVar2 = (*(undefined4 **)((int)register0x00000054 + -0x10))[1];
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               **(undefined4 **)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar2;
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_0045851c;
          *(undefined4 *)((int)register0x00000054 + 0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x004584d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x24))();
          return;
        }
LAB_004584d8:
        *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_0045851c;
        *(undefined **)((int)register0x00000054 + 0x1c) = PTR_SUB_00458520;
                    /* WARNING: Could not recover jumptable at 0x004584e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x20) = puVar3;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_00458518;
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00458524;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x45850c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*RawConfigParser).Getint @ 00458528 (size 428) */

void k3c_internal_pkg_printer___RawConfigParser__Getint(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  bool bVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = unaff_lr;
      iVar1 = **(int **)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0xc) = iVar1;
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_004586d8;
      *(undefined4 *)((int)register0x00000054 + -0x24) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x14) == '\0') {
        iVar4 = 0;
        iVar1 = 0;
        bVar6 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0xd) = *(char *)((int)register0x00000054 + -0x14);
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xc) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_004586d8;
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00025f60();
        iVar4 = **(int **)((int)register0x00000054 + -0x18);
        iVar1 = (*(int **)((int)register0x00000054 + -0x18))[1];
        bVar6 = *(char *)((int)register0x00000054 + -0xd) == '\0';
      }
      if (bVar6) goto LAB_0045869c;
      bVar6 = iVar4 == DAT_004586dc;
      if (bVar6) {
        *(int *)((int)register0x00000054 + -0x28) = DAT_004586dc;
        *(int *)((int)register0x00000054 + -0x24) = iVar1;
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x14) != '\0') {
          uVar3 = (*(undefined4 **)((int)register0x00000054 + -0x18))[1];
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               **(undefined4 **)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x24) = uVar3;
          FUN_000b6cc4();
          if (*(int *)((int)register0x00000054 + -0x1c) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x20);
            FUN_00020ce0();
            *(undefined4 *)((int)register0x00000054 + 0x18) = DAT_004586e4;
            *(undefined4 *)((int)register0x00000054 + 0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0x24);
            return;
          }
          pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x1c) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          (*pcVar2)();
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -8) = DAT_004586e0;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined1 **)((int)register0x00000054 + -0x28) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x24) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x20) = 1;
          k3c_internal_pkg_logger_Error();
        }
LAB_0045869c:
        *(undefined4 *)((int)register0x00000054 + 0x18) = DAT_004586e4;
        *(undefined4 *)((int)register0x00000054 + 0x1c) = DAT_004586e8;
        return;
      }
      *(int *)((int)register0x00000054 + -0x28) = iVar4;
      *(int *)((int)register0x00000054 + -0x24) = DAT_004586dc;
      *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_004586ec;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x2c);
      if (bVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x4586d0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*RawConfigParser).Getfloat @ 004586f0 (size 452) */

void k3c_internal_pkg_printer___RawConfigParser__Getfloat(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  bool bVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x38) = unaff_lr;
      iVar1 = **(int **)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0xc) = iVar1;
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_004588b8;
      *(undefined4 *)((int)register0x00000054 + -0x30) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x20) == '\0') {
        iVar4 = 0;
        iVar1 = 0;
        bVar6 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0x15) = *(char *)((int)register0x00000054 + -0x20);
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xc) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_004588b8;
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00025f60();
        iVar4 = **(int **)((int)register0x00000054 + -0x24);
        iVar1 = (*(int **)((int)register0x00000054 + -0x24))[1];
        bVar6 = *(char *)((int)register0x00000054 + -0x15) == '\0';
      }
      if (bVar6) goto LAB_0045887c;
      bVar6 = iVar4 == DAT_004588bc;
      if (bVar6) {
        *(int *)((int)register0x00000054 + -0x34) = DAT_004588bc;
        *(int *)((int)register0x00000054 + -0x30) = iVar1;
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x20) != '\0') {
          uVar3 = (*(undefined4 **)((int)register0x00000054 + -0x24))[1];
          *(undefined4 *)((int)register0x00000054 + -0x34) =
               **(undefined4 **)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -0x30) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 0x40;
          FUN_000b5538();
          if (*(int *)((int)register0x00000054 + -0x20) == 0) {
            *(undefined8 *)((int)register0x00000054 + -0x14) =
                 *(undefined8 *)((int)register0x00000054 + -0x28);
            *(undefined4 *)((int)register0x00000054 + -0x34) =
                 *(undefined4 *)((int)register0x00000054 + -0x14);
            *(undefined4 *)((int)register0x00000054 + -0x30) =
                 *(undefined4 *)((int)register0x00000054 + -0x10);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + 0x18) = DAT_004588c4;
            *(undefined4 *)((int)register0x00000054 + 0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0x2c);
            return;
          }
          pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x20) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x34) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          (*pcVar2)();
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x34) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -8) = DAT_004588c0;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined1 **)((int)register0x00000054 + -0x34) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x30) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 1;
          k3c_internal_pkg_logger_Error();
        }
LAB_0045887c:
        *(undefined4 *)((int)register0x00000054 + 0x18) = DAT_004588c8;
        *(undefined4 *)((int)register0x00000054 + 0x1c) = DAT_004588cc;
        return;
      }
      *(int *)((int)register0x00000054 + -0x34) = iVar4;
      *(int *)((int)register0x00000054 + -0x30) = DAT_004588bc;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_004588d0;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x38);
      if (bVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x4588b0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*RawConfigParser).Getfloat64None @ 004588d4 (size 336) */

void k3c_internal_pkg_printer___RawConfigParser__Getfloat64None(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = unaff_lr;
      iVar1 = **(int **)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -4) = iVar1;
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_00458a28;
      *(undefined4 *)((int)register0x00000054 + -0x24) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x14) == '\0') {
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
        return;
      }
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0xc);
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_00458a28;
      *(undefined4 *)((int)register0x00000054 + -0x24) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00025f60();
      puVar3 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x18);
      bVar5 = puVar3 == PTR_DAT_00458a2c;
      if (bVar5) {
        uVar2 = (*(undefined4 **)((int)register0x00000054 + -0x18))[1];
        *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_00458a2c;
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x14) != '\0') {
          uVar2 = (*(undefined4 **)((int)register0x00000054 + -0x18))[1];
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               **(undefined4 **)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x24) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -0x20) = 0x40;
          FUN_000b5538();
          *(undefined8 *)((int)register0x00000054 + -0xc) =
               *(undefined8 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + -8);
          FUN_0008f6c0();
          *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_00458a30;
          *(undefined4 *)((int)register0x00000054 + 0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          return;
        }
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x28) = puVar3;
      *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_00458a2c;
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00458a34;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x2c);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x458a20;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*RawConfigParser).Getboolean @ 00458a38 (size 1148) */

void k3c_internal_pkg_printer___RawConfigParser__Getboolean(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *extraout_r1;
  uint uVar8;
  undefined4 extraout_r2;
  undefined *extraout_r2_00;
  undefined *puVar9;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  bool bVar11;
  undefined1 uVar12;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      iVar2 = **(int **)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x10) = iVar2;
      uVar6 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_00458eb8;
      *(undefined4 *)((int)register0x00000054 + -0x38) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x28) == '\0') {
        puVar7 = (undefined *)0x0;
        uVar6 = 0;
        bVar11 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0x21) = *(char *)((int)register0x00000054 + -0x28);
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x10) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_00458eb8;
        *(undefined4 *)((int)register0x00000054 + -0x38) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00025f60();
        puVar7 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x2c);
        uVar6 = (*(undefined4 **)((int)register0x00000054 + -0x2c))[1];
        bVar11 = *(char *)((int)register0x00000054 + -0x21) == '\0';
      }
      if (bVar11) goto LAB_00458e78;
      uVar12 = 0;
      puVar9 = PTR_DAT_00458ebc;
      if (puVar7 == PTR_DAT_00458ebc) {
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_00458ebc;
        *(undefined4 *)((int)register0x00000054 + -0x38) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x28) != '\0') {
          iVar2 = (*(undefined4 **)((int)register0x00000054 + -0x2c))[1];
          pcVar3 = (char *)**(undefined4 **)((int)register0x00000054 + -0x2c);
          if (iVar2 == 1) {
            if (*pcVar3 < 'G') {
              cVar1 = *pcVar3;
              if (cVar1 != '0') {
                if (cVar1 == '1') goto LAB_00458c08;
                if (cVar1 != 'F') goto code_r0x00458cf8;
              }
LAB_00458ce4:
              puVar7 = (undefined *)0x0;
              iVar2 = 0;
              puVar4 = (undefined4 *)0x0;
            }
            else {
              cVar1 = *pcVar3;
              if (cVar1 != 'T') {
                if (cVar1 == 'f') goto LAB_00458ce4;
                if (cVar1 != 't') goto code_r0x00458cf8;
              }
LAB_00458c08:
              puVar7 = (undefined *)0x0;
              iVar2 = 1;
              puVar4 = (undefined4 *)0x0;
            }
          }
          else {
            if (iVar2 == 4) {
              cVar1 = *pcVar3;
              if (((((cVar1 == 'T') && ((pcVar3[1] == 'R' && (pcVar3[2] == 'U')))) &&
                   (pcVar3[3] == 'E')) ||
                  ((((cVar1 == 'T' && (pcVar3[1] == 'r')) && (pcVar3[2] == 'u')) &&
                   (pcVar3[3] == 'e')))) ||
                 (((cVar1 == 't' && (pcVar3[1] == 'r')) &&
                  ((pcVar3[2] == 'u' && (pcVar3[3] == 'e')))))) goto LAB_00458c08;
            }
            else if ((iVar2 == 5) &&
                    (((((cVar1 = *pcVar3, cVar1 == 'F' && (pcVar3[1] == 'A')) && (pcVar3[2] == 'L'))
                      && ((pcVar3[3] == 'S' && (pcVar3[4] == 'E')))) ||
                     ((((cVar1 == 'F' && ((pcVar3[1] == 'a' && (pcVar3[2] == 'l')))) &&
                       ((pcVar3[3] == 's' && (pcVar3[4] == 'e')))) ||
                      ((((cVar1 == 'f' && (pcVar3[1] == 'a')) && (pcVar3[2] == 'l')) &&
                       ((pcVar3[3] == 's' && (pcVar3[4] == 'e')))))))))) goto LAB_00458ce4;
code_r0x00458cf8:
            if (iVar2 == 0) {
              uVar8 = 0;
              iVar2 = 0;
            }
            else {
              *(char **)((int)register0x00000054 + -0x14) = pcVar3;
              *(int *)((int)register0x00000054 + -0x1c) = iVar2;
              *(int *)((int)register0x00000054 + -0x3c) = iVar2;
              *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
              *(undefined1 *)((int)register0x00000054 + -0x34) = 0;
              FUN_0008fab4();
              *(undefined4 *)((int)register0x00000054 + -0xc) =
                   *(undefined4 *)((int)register0x00000054 + -0x30);
              *(undefined4 *)((int)register0x00000054 + -0x3c) =
                   *(undefined4 *)((int)register0x00000054 + -0x30);
              *(undefined4 *)((int)register0x00000054 + -0x38) =
                   *(undefined4 *)((int)register0x00000054 + -0x14);
              *(undefined4 *)((int)register0x00000054 + -0x34) =
                   *(undefined4 *)((int)register0x00000054 + -0x1c);
              FUN_0009e3a4();
              iVar2 = *(int *)((int)register0x00000054 + -0xc);
              uVar8 = *(uint *)((int)register0x00000054 + -0x1c);
              uVar12 = uVar8 == -iVar2;
              if ((uint)-iVar2 <= uVar8 && !(bool)uVar12) {
                FUN_0008a908();
                puVar7 = extraout_r1;
                puVar9 = extraout_r2_00;
                goto LAB_00458e90;
              }
            }
            *(uint *)((int)register0x00000054 + -0x20) = uVar8;
            *(int *)((int)register0x00000054 + -0x18) = iVar2;
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_00458ec0;
            FUN_00022cf8();
            puVar4 = *(undefined4 **)((int)register0x00000054 + -0x38);
            puVar4[1] = 9;
            *puVar4 = PTR_s_ParseBool_method___MISSING____EX_00823504_0xf8_00458ec4;
            puVar4[3] = *(undefined4 *)((int)register0x00000054 + -0x20);
            if (*(int *)PTR_DAT_00458ec8 == 0) {
              uVar6 = *(undefined4 *)((int)register0x00000054 + -0x18);
            }
            else {
              puVar4 = (undefined4 *)FUN_0009db54();
              uVar6 = *(undefined4 *)((int)register0x00000054 + -0x18);
              *unaff_r8 = uVar6;
            }
            puVar4[2] = uVar6;
            uVar6 = *(undefined4 *)PTR_DAT_00458ed0;
            puVar4[4] = *(undefined4 *)PTR_DAT_00458ecc;
            if (*(int *)PTR_DAT_00458ec8 != 0) {
              puVar4 = (undefined4 *)FUN_0009db54();
              *unaff_r8 = extraout_r2;
              uVar6 = extraout_r2;
            }
            puVar4[5] = uVar6;
            iVar2 = 0;
            puVar7 = PTR_DAT_00458ed4;
          }
          if (puVar7 == (undefined *)0x0) {
            *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_00458edc;
            *(undefined **)((int)register0x00000054 + 0x1c) = PTR_DAT_00458ee0 + iVar2 * 8;
            return;
          }
          pcVar5 = *(code **)(puVar7 + 0xc);
          *(undefined4 **)((int)register0x00000054 + -0x3c) = puVar4;
          (*pcVar5)();
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0x38);
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00458ed8;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined1 **)((int)register0x00000054 + -0x3c) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
          k3c_internal_pkg_logger_Error();
        }
LAB_00458e78:
        *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_00458ee4;
        *(undefined **)((int)register0x00000054 + 0x1c) = PTR_SUB_00458ee8;
        return;
      }
LAB_00458e90:
      *(undefined **)((int)register0x00000054 + -0x3c) = puVar7;
      *(undefined **)((int)register0x00000054 + -0x38) = puVar9;
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_00458eec;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x458eb0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*RawConfigParser).Set @ 00458ef0 (size 404) */

void k3c_internal_pkg_printer___RawConfigParser__Set(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  bool bVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 0xc);
      if (iVar1 == 0) {
        cVar4 = '\x01';
      }
      else if (iVar1 == 7) {
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined **)((int)register0x00000054 + -0x1c) =
             PTR_s_DEFAULT_______printersectionmodu_008216f7_0x5ae_00459088;
        *(undefined4 *)((int)register0x00000054 + -0x18) = 7;
        FUN_00018250();
        cVar4 = *(char *)((int)register0x00000054 + -0x14);
        iVar1 = *(int *)((int)register0x00000054 + 0xc);
      }
      else {
        cVar4 = '\0';
      }
      if (cVar4 != '\0') {
        uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x18);
LAB_00459000:
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00459090;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        FUN_00093a08();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x10);
        puVar3[1] = *(undefined4 *)((int)register0x00000054 + 0x1c);
        if (*(int *)PTR_DAT_00459094 == 0) {
          uVar2 = *(undefined4 *)((int)register0x00000054 + 0x18);
        }
        else {
          puVar3 = (undefined4 *)FUN_0009db64();
          uVar2 = *(undefined4 *)((int)register0x00000054 + 0x18);
          *unaff_r8 = uVar2;
          unaff_r8[1] = *puVar3;
        }
        *puVar3 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0045905c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      iVar5 = **(int **)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -4) = iVar5;
      uVar2 = *(undefined4 *)(iVar5 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0045908c;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(int *)((int)register0x00000054 + -0x14) = iVar1;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        puVar6 = (undefined *)0x0;
        uVar2 = 0;
        bVar8 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -5) = *(char *)((int)register0x00000054 + -0xc);
        uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0045908c;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00025f60();
        puVar6 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x10);
        uVar2 = (*(undefined4 **)((int)register0x00000054 + -0x10))[1];
        bVar8 = *(char *)((int)register0x00000054 + -5) == '\0';
      }
      if (bVar8) {
        uVar2 = 0;
        goto LAB_00459000;
      }
      bVar8 = puVar6 == PTR_DAT_00459090;
      if (bVar8) goto LAB_00459000;
      *(undefined **)((int)register0x00000054 + -0x20) = puVar6;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_00459090;
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00459098;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      if (bVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x459080;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*RawConfigParser).Add_section @ 0045909c (size 844) */

void k3c_internal_pkg_printer___RawConfigParser__Add_section(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int extraout_r1;
  uint uVar7;
  int extraout_r1_00;
  undefined4 uVar8;
  uint uVar9;
  uint extraout_r2;
  int *extraout_r3;
  int extraout_r3_00;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  undefined1 uVar11;
  undefined8 uVar12;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x38) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 0xc);
      if (iVar1 == 7) {
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_004593ec;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 7;
        FUN_00018250();
        uVar11 = 0;
        if (*(char *)((int)register0x00000054 + -0x28) == '\0') {
          iVar1 = *(int *)((int)register0x00000054 + 0xc);
          goto LAB_004590e4;
        }
      }
      else {
LAB_004590e4:
        uVar8 = *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_004593f0;
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(int *)((int)register0x00000054 + -0x28) = iVar1;
        FUN_00093560();
        uVar11 = *(char *)((int)register0x00000054 + -0x20) == '\0';
        if ((bool)uVar11) {
          FUN_000908bc();
          iVar1 = **(int **)((int)register0x00000054 + 4);
          *(int *)((int)register0x00000054 + -0x10) = iVar1;
          iVar6 = *(int *)(iVar1 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          if (iVar6 == 0) {
            FUN_000908bc();
            iVar6 = *(int *)((int)register0x00000054 + -0x34);
            if (*DAT_004593f4 == 0) {
              iVar1 = *(int *)((int)register0x00000054 + -0x10);
            }
            else {
              FUN_0009db64();
              *unaff_r8 = extraout_r1;
              iVar1 = *(int *)((int)register0x00000054 + -0x10);
              unaff_r8[1] = *(int *)(iVar1 + 0xc);
              iVar6 = extraout_r1;
            }
            *(int *)(iVar1 + 0xc) = iVar6;
          }
          uVar8 = *(undefined4 *)(iVar1 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_004593f0;
          *(undefined4 *)((int)register0x00000054 + -0x30) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093560();
          if (*(char *)((int)register0x00000054 + -0x20) == '\0') {
            piVar3 = *(int **)((int)register0x00000054 + -0x10);
            uVar7 = piVar3[2];
            uVar9 = piVar3[1] + 1;
            iVar1 = *piVar3;
            if (uVar7 < uVar9) {
              *(int *)((int)register0x00000054 + -0x34) = iVar1;
              *(uint *)((int)register0x00000054 + -0x30) = uVar9;
              *(uint *)((int)register0x00000054 + -0x2c) = uVar7;
              *(undefined4 *)((int)register0x00000054 + -0x28) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_004593f8;
              FUN_000987f4();
              iVar1 = *(int *)((int)register0x00000054 + -0x20);
              uVar9 = *(uint *)((int)register0x00000054 + -0x1c);
              piVar3 = *(int **)((int)register0x00000054 + -0x10);
              piVar3[2] = *(int *)((int)register0x00000054 + -0x18);
              if (*DAT_004593f4 != 0) {
                FUN_0009db64();
                *unaff_r8 = extraout_r1_00;
                unaff_r8[1] = *extraout_r3;
                iVar1 = extraout_r1_00;
                uVar9 = extraout_r2;
                piVar3 = extraout_r3;
              }
              *piVar3 = iVar1;
            }
            piVar3[1] = uVar9;
            uVar12 = CONCAT44(uVar9 - 1,piVar3);
            uVar8 = *(undefined4 *)((int)register0x00000054 + 0xc);
            *(undefined4 *)(iVar1 + (uVar9 - 1) * 8 + 4) = uVar8;
            if (*DAT_004593f4 == 0) {
              iVar6 = *(int *)((int)register0x00000054 + 8);
            }
            else {
              uVar12 = FUN_0009db64();
              iVar6 = *(int *)((int)register0x00000054 + 8);
              *unaff_r8 = iVar6;
              unaff_r8[1] = *(int *)(extraout_r3_00 + (int)((ulonglong)uVar12 >> 0x20) * 8);
              iVar1 = extraout_r3_00;
            }
            iVar2 = (int)uVar12;
            *(int *)(iVar1 + (int)((ulonglong)uVar12 >> 0x20) * 8) = iVar6;
          }
          else {
            iVar2 = *(int *)((int)register0x00000054 + -0x10);
            iVar6 = *(int *)((int)register0x00000054 + 8);
            uVar8 = *(undefined4 *)((int)register0x00000054 + 0xc);
          }
          uVar4 = *(undefined4 *)(iVar2 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_004593f0;
          *(undefined4 *)((int)register0x00000054 + -0x30) = uVar4;
          *(int *)((int)register0x00000054 + -0x2c) = iVar6;
          *(undefined4 *)((int)register0x00000054 + -0x28) = uVar8;
          FUN_00093a08();
          puVar5 = *(undefined4 **)((int)register0x00000054 + -0x24);
          *puVar5 = DAT_004593fc;
          if (*DAT_004593f4 == 0) {
            iVar1 = *(int *)((int)register0x00000054 + -0xc);
          }
          else {
            puVar5 = (undefined4 *)FUN_0009db64();
            iVar1 = *(int *)((int)register0x00000054 + -0xc);
            *unaff_r8 = iVar1;
            unaff_r8[1] = puVar5[1];
          }
          puVar5[1] = iVar1;
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_004593f8;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_00459400;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 0x1a;
        *(undefined1 **)((int)register0x00000054 + -0x2c) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x28) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x24) = 1;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_004593f8;
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        FUN_00095b00();
      }
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_004593f8;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_00459404;
      *(undefined4 *)((int)register0x00000054 + -0x30) = 0x18;
      *(undefined1 **)((int)register0x00000054 + -0x2c) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x28) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 1;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_004593f8;
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + -0x2c);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x38);
      if ((bool)uVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x4593e4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*RawConfigParser).Remove_section @ 00459408 (size 588) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___RawConfigParser__Remove_section(void)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r2;
  uint uVar5;
  uint extraout_r2_00;
  uint uVar6;
  uint extraout_r3;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint *unaff_r8;
  uint uVar10;
  int unaff_r10;
  int iVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  uint *in_stack_0000000c;
  uint *puStack_3c;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x459650;
    FUN_0009bf64();
  }
  puVar1 = (uint *)*in_stack_00000004;
  FUN_00093560();
  if ((uStack_34 & 0xff) != 0) {
    puStack_3c = in_stack_0000000c;
    FUN_000263c8();
    uVar3 = puVar1[1];
    uVar12 = CONCAT44(uVar3,puVar1);
    if (uVar3 == 1) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      if (*_UNK_0045965c != 0) {
        uVar12 = FUN_0009db54(puVar1,*puVar1);
        puVar1 = (uint *)uVar12;
        *unaff_r8 = (uint)((ulonglong)uVar12 >> 0x20);
      }
      *puVar1 = 0;
    }
    else {
      uVar4 = *puVar1;
      uVar6 = puVar1[2];
      uVar9 = 0;
      uVar5 = uVar4;
      puVar7 = in_stack_0000000c;
      for (iVar8 = 0; puVar2 = (uint *)uVar12, iVar8 < (int)((ulonglong)uVar12 >> 0x20);
          iVar8 = iVar8 + 1) {
        unaff_r8 = *(uint **)(uVar4 + iVar8 * 8 + 4);
        uVar10 = *(uint *)(uVar4 + iVar8 * 8);
        uVar13 = uVar12;
        if (puVar7 == unaff_r8) {
          FUN_00018250();
          puVar7 = in_stack_0000000c;
          uVar12 = CONCAT44(uVar3,puVar1);
          uVar13 = CONCAT44(uVar3,puVar1);
          if ((char)puStack_3c == '\0') goto LAB_00459588;
        }
        else {
LAB_00459588:
          uVar9 = uVar9 + 1;
          if (uVar6 < uVar9) {
            puStack_3c = (uint *)0x1;
            FUN_000987f4();
            uVar5 = uStack_34;
            uVar6 = uStack_2c;
            puVar7 = in_stack_0000000c;
            uVar9 = uStack_30;
            uVar13 = CONCAT44(uVar3,puVar1);
          }
          iVar11 = uVar9 - 1;
          *(uint **)(uVar5 + iVar11 * 8 + 4) = unaff_r8;
          unaff_r8 = (uint *)*_UNK_0045965c;
          if (unaff_r8 != (uint *)0x0) {
            uVar13 = FUN_0009db64();
            *unaff_r8 = uVar10;
            unaff_r8[1] = *(uint *)(extraout_r2 + iVar11 * 8);
            uVar5 = extraout_r2;
            uVar6 = extraout_r3;
          }
          *(uint *)(uVar5 + iVar11 * 8) = uVar10;
          uVar12 = uVar13;
        }
      }
      puVar2[1] = uVar9;
      puVar2[2] = uVar6;
      if (*_UNK_0045965c != 0) {
        puVar2 = (uint *)FUN_0009db64();
        *unaff_r8 = extraout_r2_00;
        unaff_r8[1] = *puVar2;
        uVar5 = extraout_r2_00;
      }
      *puVar2 = uVar5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004594e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*RawConfigParser).Readfp @ 00459664 (size 552) */

/* WARNING: Removing unreachable block (ram,0x004596a4) */

void k3c_internal_pkg_printer___RawConfigParser__Readfp(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x48) = unaff_lr;
      if (*(int *)((int)register0x00000054 + 8) == 0) {
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
        FUN_0012dc78();
        if (*(int *)((int)register0x00000054 + -0x30) == 0) {
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_004598b4;
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          k3c_internal_pkg_printer___RawConfigParser__InitFromReader();
                    /* WARNING: Could not recover jumptable at 0x0045986c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x48))();
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(int *)((int)register0x00000054 + -0x28) = *(int *)((int)register0x00000054 + -0x30);
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x20));
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_004598ac;
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        if (*(int *)((int)register0x00000054 + -0x28) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + 4);
        }
        *(undefined4 *)((int)register0x00000054 + -0x18) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004598b0;
        *(undefined4 *)((int)register0x00000054 + -0x40) = 0x16;
        *(undefined1 **)((int)register0x00000054 + -0x3c) =
             (undefined1 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x38) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 2;
        FUN_001794d4();
                    /* WARNING: Could not recover jumptable at 0x0045984c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x48))();
        return;
      }
      uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 4);
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_00459890;
      *(undefined4 *)((int)register0x00000054 + -0x40) = uVar1;
      FUN_00020dac();
      iVar2 = *(int *)((int)register0x00000054 + 8);
      if (*(int *)((int)register0x00000054 + -0x3c) == 0) {
        if (iVar2 == 0) {
          uVar1 = 0;
          iVar2 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(iVar2 + 4);
          *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_00459898;
          *(undefined4 *)((int)register0x00000054 + -0x40) = uVar1;
          FUN_00020dac();
          iVar2 = *(int *)((int)register0x00000054 + -0x3c);
          uVar1 = *(undefined4 *)((int)register0x00000054 + 8);
        }
        if (iVar2 == 0) {
          *(undefined4 *)((int)register0x00000054 + -0x10) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004598a4;
          *(undefined1 **)((int)register0x00000054 + -0x40) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          FUN_00020b9c();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x3c);
          puVar3 = PTR_DAT_004598a8;
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0045989c;
          *(undefined1 **)((int)register0x00000054 + -0x40) =
               (undefined1 *)((int)register0x00000054 + -8);
          FUN_00020b9c();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x3c);
          puVar3 = PTR_DAT_004598a0;
        }
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x40) = puVar3;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar1;
        k3c_internal_pkg_printer___RawConfigParser__InitFromReader();
                    /* WARNING: Could not recover jumptable at 0x0045978c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x48))();
        return;
      }
      bVar5 = iVar2 == 0;
      if (!bVar5) {
        uVar1 = *(undefined4 *)(iVar2 + 4);
        *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_00459894;
        *(undefined4 *)((int)register0x00000054 + -0x40) = uVar1;
        FUN_00020dac();
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        k3c_internal_pkg_printer___RawConfigParser__InitFromReader();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004598b8;
      param_1 = FUN_00020b18();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x48);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x459888;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*RawConfigParser).InitFromReader @ 004598bc (size 360) */

void k3c_internal_pkg_printer___RawConfigParser__InitFromReader(void)

{
  undefined4 *puVar1;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 local_34;
  int local_2c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = (undefined4 *)0x0;
  if (in_stack_00000008 != 0) {
    FUN_00020dac();
  }
  FUN_000ae540();
  if (local_2c != 0) {
    local_c = *(undefined4 *)(local_2c + 4);
    FUN_0017955c();
  }
  local_18 = DAT_00459a34;
  local_14 = in_stack_00000008;
  local_10 = in_stack_0000000c;
  local_4 = &local_18;
  FUN_00099104();
  k3c_internal_pkg_printer___RawConfigParser__parseContent();
  puVar1 = in_stack_00000004;
  if (*DAT_00459a38 != 0) {
    puVar1 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *puVar1;
    local_34 = extraout_r2;
  }
  *puVar1 = local_34;
  (*(code *)*local_4)();
  return;
}



/* k3c/internal/pkg/printer.(*RawConfigParser).InitFromReader.deferwrap1 @ 00459a3c (size 92) */

void k3c_internal_pkg_printer___RawConfigParser__InitFromReader_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  local_c[0] = *(undefined4 *)(unaff_r7 + 8);
  (**(code **)(*(int *)(unaff_r7 + 4) + 0xc))();
  return;
}



/* k3c/internal/pkg/printer.(*RawConfigParser).parseContent @ 00459a98 (size 3268) */

/* WARNING: Removing unreachable block (ram,0x00459c44) */
/* WARNING: Removing unreachable block (ram,0x0045a250) */

void k3c_internal_pkg_printer___RawConfigParser__parseContent(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined *extraout_r1_00;
  undefined *extraout_r1_01;
  undefined *extraout_r1_02;
  undefined *extraout_r1_03;
  undefined *extraout_r1_04;
  int iVar5;
  undefined4 *extraout_r2;
  undefined *extraout_r2_00;
  undefined *puVar6;
  undefined *extraout_r2_01;
  undefined *extraout_r2_02;
  undefined *extraout_r2_03;
  undefined *extraout_r2_04;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *extraout_r3;
  undefined4 uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int unaff_r10;
  undefined1 *puVar15;
  undefined4 unaff_lr;
  bool bVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  
  while ((undefined1 *)((int)register0x00000054 + -0x44) <= *(undefined1 **)(unaff_r10 + 8)) {
LAB_0045a788:
    unaff_lr = 0x45a790;
    param_1 = FUN_0009bf64(param_1);
  }
  puVar15 = (undefined1 *)((int)register0x00000054 + -0xc4);
  *(undefined4 *)((int)register0x00000054 + -0xc4) = unaff_lr;
  FUN_000908bc();
  *(undefined4 *)((int)register0x00000054 + -0x40) =
       *(undefined4 *)((int)register0x00000054 + -0xc0);
  *(undefined4 *)((int)register0x00000054 + -0xc0) = *(undefined4 *)((int)register0x00000054 + 8);
  *(undefined4 *)((int)register0x00000054 + -0xbc) = *(undefined4 *)((int)register0x00000054 + 0xc);
  *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0045a2c8;
  FUN_0014f658();
  iVar2 = *(int *)((int)register0x00000054 + -0xb4);
  *(int *)((int)register0x00000054 + -0x50) = iVar2;
  iVar4 = *(int *)((int)register0x00000054 + -0xb0);
  *(int *)((int)register0x00000054 + -0x74) = iVar4;
  iVar5 = 0;
  uVar7 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar12 = 0;
  uVar14 = 0;
  puVar11 = PTR_DAT_0045a2cc;
  puVar13 = (undefined4 *)0x0;
LAB_00459b2c:
  *(undefined **)((int)register0x00000054 + -0x58) = puVar11;
  *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar12;
  *(uint *)((int)register0x00000054 + -0x78) = uVar10;
  if (iVar4 <= iVar5) {
    *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a7b0;
    FUN_00022cf8();
    puVar8 = *(undefined4 **)((int)register0x00000054 + -0xbc);
    puVar8[1] = *(undefined4 *)((int)register0x00000054 + -0x7c);
    puVar8[2] = *(undefined4 *)((int)register0x00000054 + -0x78);
    if (*(int *)PTR_DAT_0045a7ac == 0) {
      uVar12 = *(undefined4 *)((int)register0x00000054 + -0x58);
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x40);
    }
    else {
      puVar8 = (undefined4 *)FUN_0009db64();
      uVar12 = *(undefined4 *)((int)register0x00000054 + -0x58);
      *puVar13 = uVar12;
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x40);
      puVar13[1] = uVar7;
    }
    *puVar8 = uVar12;
    puVar8[3] = uVar7;
    *(undefined4 **)((int)register0x00000054 + 0x10) = puVar8;
    return;
  }
  *(int *)((int)register0x00000054 + -0x60) = iVar5;
  *(undefined4 *)((int)register0x00000054 + -0x48) = uVar14;
  *(undefined4 **)((int)register0x00000054 + -0x6c) = puVar13;
  *(undefined4 *)((int)register0x00000054 + -0x44) = uVar9;
  *(undefined4 *)((int)register0x00000054 + -0x68) = uVar7;
  uVar12 = *(undefined4 *)(iVar2 + iVar5 * 8);
  *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar12;
  uVar7 = *(undefined4 *)(iVar2 + iVar5 * 8 + 4);
  *(undefined4 *)((int)register0x00000054 + -0x70) = uVar7;
  *(undefined4 *)((int)register0x00000054 + -0xc0) = *(undefined4 *)PTR_DAT_0045a2d0;
  *(undefined4 *)((int)register0x00000054 + -0xbc) = 0;
  *(undefined4 *)((int)register0x00000054 + -0xb8) = 0;
  *(undefined4 *)((int)register0x00000054 + -0xb4) = 0;
  *(undefined4 *)((int)register0x00000054 + -0xb0) = 0;
  *(undefined4 *)((int)register0x00000054 + -0xac) = 0;
  *(undefined4 *)((int)register0x00000054 + -0xa8) = uVar12;
  *(undefined4 *)((int)register0x00000054 + -0xa4) = uVar7;
  *(undefined4 *)((int)register0x00000054 + -0xa0) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x9c) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x98) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x94) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x90) = 0;
  FUN_003ea300(iVar2);
  if (*(int *)((int)register0x00000054 + -0x8c) != 0) {
    uVar7 = *(undefined4 *)((int)register0x00000054 + -0x68);
    uVar9 = *(undefined4 *)((int)register0x00000054 + -0x44);
    uVar12 = *(undefined4 *)((int)register0x00000054 + -0x7c);
    uVar10 = *(uint *)((int)register0x00000054 + -0x78);
    puVar11 = *(undefined **)((int)register0x00000054 + -0x58);
    puVar8 = *(undefined4 **)((int)register0x00000054 + -0x6c);
    uVar14 = *(undefined4 *)((int)register0x00000054 + -0x48);
    goto LAB_00459b08;
  }
  *(undefined4 *)((int)register0x00000054 + -0xc0) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0xbc) =
       *(undefined4 *)((int)register0x00000054 + -0x70);
  FUN_00151ce4();
  if (*(int *)((int)register0x00000054 + -0xb4) == 0) {
    uVar7 = *(undefined4 *)((int)register0x00000054 + -0x68);
    uVar9 = *(undefined4 *)((int)register0x00000054 + -0x44);
    uVar12 = *(undefined4 *)((int)register0x00000054 + -0x7c);
    uVar10 = *(uint *)((int)register0x00000054 + -0x78);
    puVar11 = *(undefined **)((int)register0x00000054 + -0x58);
    puVar8 = *(undefined4 **)((int)register0x00000054 + -0x6c);
    uVar14 = *(undefined4 *)((int)register0x00000054 + -0x48);
    goto LAB_00459b08;
  }
  if (*(int *)((int)register0x00000054 + -0x68) == 0) {
    uVar12 = *(undefined4 *)((int)register0x00000054 + -0x44);
  }
  else {
    *(undefined4 *)((int)register0x00000054 + -0xc0) = *(undefined4 *)PTR_DAT_0045a2d4;
    *(undefined4 *)((int)register0x00000054 + -0xbc) = 0;
    *(undefined4 *)((int)register0x00000054 + -0xb8) = 0;
    *(undefined4 *)((int)register0x00000054 + -0xb4) = 0;
    *(undefined4 *)((int)register0x00000054 + -0xb0) = 0;
    *(undefined4 *)((int)register0x00000054 + -0xac) = 0;
    *(undefined4 *)((int)register0x00000054 + -0xa8) =
         *(undefined4 *)((int)register0x00000054 + -0x4c);
    *(undefined4 *)((int)register0x00000054 + -0xa4) =
         *(undefined4 *)((int)register0x00000054 + -0x70);
    *(undefined4 *)((int)register0x00000054 + -0xa0) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x9c) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x98) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x94) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x90) = 0;
    FUN_003ea300();
    if (*(int *)((int)register0x00000054 + -0x8c) == 0) {
      *(undefined4 *)((int)register0x00000054 + -0xc0) = *(undefined4 *)PTR_DAT_0045a2d8;
      *(undefined4 *)((int)register0x00000054 + -0xbc) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xb8) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xb0) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xac) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa8) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0xa4) =
           *(undefined4 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x9c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x98) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x94) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x90) = 0;
      FUN_003ea300();
      bVar16 = *(int *)((int)register0x00000054 + -0x8c) == 0;
    }
    else {
      bVar16 = false;
    }
    if (bVar16) {
      *(undefined4 *)((int)register0x00000054 + -0xc0) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0xbc) =
           *(undefined4 *)((int)register0x00000054 + -0x70);
      *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0045a2f8;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = 1;
      internal_stringslite_Index();
      uVar10 = *(uint *)((int)register0x00000054 + -0xb0);
      if ((int)uVar10 < 0) {
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined4 *)((int)register0x00000054 + -0xbc) =
             *(undefined4 *)((int)register0x00000054 + -0x70);
        *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0045a2fc;
        *(undefined4 *)((int)register0x00000054 + -0xb4) = 1;
        internal_stringslite_Index();
        uVar10 = *(uint *)((int)register0x00000054 + -0xb0);
      }
      if ((int)uVar10 < 0) {
        uVar10 = *(uint *)((int)register0x00000054 + -0x70);
      }
      else {
        uVar17 = uVar10 == *(uint *)((int)register0x00000054 + -0x70);
        if (*(uint *)((int)register0x00000054 + -0x70) < uVar10) goto LAB_0045a740;
      }
      *(uint *)((int)register0x00000054 + -0x70) = uVar10;
      *(undefined4 *)((int)register0x00000054 + -0xc0) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      *(uint *)((int)register0x00000054 + -0xbc) = uVar10;
      FUN_00151ce4();
      if (*(int *)((int)register0x00000054 + -0xb4) == 0) {
        uVar7 = *(undefined4 *)((int)register0x00000054 + -0x68);
        uVar9 = *(undefined4 *)((int)register0x00000054 + -0x44);
        uVar12 = *(undefined4 *)((int)register0x00000054 + -0x7c);
        uVar10 = *(uint *)((int)register0x00000054 + -0x78);
        puVar11 = *(undefined **)((int)register0x00000054 + -0x58);
        puVar8 = *(undefined4 **)((int)register0x00000054 + -0x6c);
        uVar14 = *(undefined4 *)((int)register0x00000054 + -0x48);
        goto LAB_00459b08;
      }
      *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a798;
      *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
      *(undefined4 *)((int)register0x00000054 + -0xb8) = 1;
      FUN_00150208();
      iVar2 = *(int *)((int)register0x00000054 + -0x70);
      if (iVar2 < *(int *)((int)register0x00000054 + -0xb0)) {
        cVar1 = '\0';
      }
      else {
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined4 *)((int)register0x00000054 + -0xbc) =
             *(undefined4 *)((int)register0x00000054 + -0xb4);
        *(int *)((int)register0x00000054 + -0xb8) = *(int *)((int)register0x00000054 + -0xb0);
        FUN_00018250();
        cVar1 = *(char *)((int)register0x00000054 + -0xb4);
        iVar2 = *(int *)((int)register0x00000054 + -0x70);
      }
      if (cVar1 != '\0') {
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(int *)((int)register0x00000054 + -0xbc) = iVar2;
        *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0045a79c;
        FUN_00151494();
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0xb4);
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0xb0);
        *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a7a0;
        *(undefined4 *)((int)register0x00000054 + -0xbc) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0xb8) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + -0xb4) =
             *(undefined4 *)((int)register0x00000054 + -0x6c);
        FUN_00025f60();
        puVar11 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0xb0);
        puVar6 = PTR_DAT_0045a7a4;
        if (puVar11 == PTR_DAT_0045a7a4) {
          uVar12 = (*(undefined4 **)((int)register0x00000054 + -0xb0))[1];
          *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a7a4;
          *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar12;
          *(undefined4 *)((int)register0x00000054 + -0xb8) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          *(undefined4 *)((int)register0x00000054 + -0xb4) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          FUN_00025f60();
          if (*(int *)(*(int *)((int)register0x00000054 + -0xb0) + 4) == 0) {
            *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a7a0;
            *(undefined4 *)((int)register0x00000054 + -0xbc) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            *(undefined4 *)((int)register0x00000054 + -0xb8) =
                 *(undefined4 *)((int)register0x00000054 + -0x48);
            *(undefined4 *)((int)register0x00000054 + -0xb4) =
                 *(undefined4 *)((int)register0x00000054 + -0x6c);
            FUN_00025f60();
            puVar11 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0xb0);
            if (puVar11 != PTR_DAT_0045a7a4) {
              *(undefined **)((int)register0x00000054 + -0xc0) = puVar11;
              *(undefined **)((int)register0x00000054 + -0xbc) = PTR_DAT_0045a7a4;
              *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0045a7b4;
              FUN_000209b4();
              puVar11 = extraout_r1_00;
              puVar6 = extraout_r2_00;
              goto LAB_0045a658;
            }
            uVar12 = (*(undefined4 **)((int)register0x00000054 + -0xb0))[1];
            *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a7a4;
            *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar12;
            *(undefined4 *)((int)register0x00000054 + -0xb8) =
                 *(undefined4 *)((int)register0x00000054 + -0x44);
            *(undefined4 *)((int)register0x00000054 + -0xb4) =
                 *(undefined4 *)((int)register0x00000054 + -0x68);
            FUN_00093a08();
            puVar8 = *(undefined4 **)((int)register0x00000054 + -0xb0);
            puVar8[1] = *(undefined4 *)((int)register0x00000054 + -0x70);
            if (*(int *)PTR_DAT_0045a7ac == 0) {
              uVar12 = *(undefined4 *)((int)register0x00000054 + -0x4c);
            }
            else {
              puVar8 = (undefined4 *)FUN_0009db64();
              uVar12 = *(undefined4 *)((int)register0x00000054 + -0x4c);
              *puVar13 = uVar12;
              puVar13[1] = *puVar8;
            }
            *puVar8 = uVar12;
          }
          else {
            *(undefined4 *)((int)register0x00000054 + -0xc0) = 0;
            *(undefined **)((int)register0x00000054 + -0xbc) = PTR_DAT_0045a7a8;
            *(undefined4 *)((int)register0x00000054 + -0xb8) = 1;
            *(undefined4 *)((int)register0x00000054 + -0xb4) =
                 *(undefined4 *)((int)register0x00000054 + -0x4c);
            *(undefined4 *)((int)register0x00000054 + -0xb0) =
                 *(undefined4 *)((int)register0x00000054 + -0x70);
            FUN_0007636c();
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0xac);
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + -0xa8);
            *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a7a0;
            *(undefined4 *)((int)register0x00000054 + -0xbc) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            *(undefined4 *)((int)register0x00000054 + -0xb8) =
                 *(undefined4 *)((int)register0x00000054 + -0x48);
            *(undefined4 *)((int)register0x00000054 + -0xb4) =
                 *(undefined4 *)((int)register0x00000054 + -0x6c);
            FUN_00025f60();
            puVar11 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0xb0);
            puVar6 = PTR_DAT_0045a7a4;
            if (puVar11 != PTR_DAT_0045a7a4) {
LAB_0045a658:
              *(undefined **)((int)register0x00000054 + -0xc0) = puVar11;
              *(undefined **)((int)register0x00000054 + -0xbc) = puVar6;
              *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0045a7b4;
              FUN_000209b4();
              puVar11 = extraout_r1_01;
              puVar6 = extraout_r2_01;
              goto LAB_0045a66c;
            }
            uVar12 = (*(undefined4 **)((int)register0x00000054 + -0xb0))[1];
            *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a7a4;
            *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar12;
            *(undefined4 *)((int)register0x00000054 + -0xb8) =
                 *(undefined4 *)((int)register0x00000054 + -0x44);
            *(undefined4 *)((int)register0x00000054 + -0xb4) =
                 *(undefined4 *)((int)register0x00000054 + -0x68);
            FUN_00093a08();
            puVar8 = *(undefined4 **)((int)register0x00000054 + -0xb0);
            *(undefined4 **)((int)register0x00000054 + -0xc) = puVar8;
            uVar12 = *puVar8;
            uVar7 = puVar8[1];
            *(undefined4 *)((int)register0x00000054 + -0xc0) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar12;
            *(undefined4 *)((int)register0x00000054 + -0xb8) = uVar7;
            *(undefined4 *)((int)register0x00000054 + -0xb4) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0xb0) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            FUN_0007636c();
            uVar12 = *(undefined4 *)((int)register0x00000054 + -0xac);
            puVar8 = *(undefined4 **)((int)register0x00000054 + -0xc);
            puVar8[1] = *(undefined4 *)((int)register0x00000054 + -0xa8);
            if (*(int *)PTR_DAT_0045a7ac != 0) {
              FUN_0009db64();
              *puVar13 = extraout_r1;
              puVar13[1] = *extraout_r2;
              uVar12 = extraout_r1;
              puVar8 = extraout_r2;
            }
            *puVar8 = uVar12;
          }
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0x68);
          uVar9 = *(undefined4 *)((int)register0x00000054 + -0x44);
          uVar12 = *(undefined4 *)((int)register0x00000054 + -0x7c);
          uVar10 = *(uint *)((int)register0x00000054 + -0x78);
          puVar11 = *(undefined **)((int)register0x00000054 + -0x58);
          puVar8 = *(undefined4 **)((int)register0x00000054 + -0x6c);
          uVar14 = *(undefined4 *)((int)register0x00000054 + -0x48);
          goto LAB_00459b08;
        }
LAB_0045a66c:
        *(undefined **)((int)register0x00000054 + -0xc0) = puVar11;
        *(undefined **)((int)register0x00000054 + -0xbc) = puVar6;
        *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0045a7b4;
        FUN_000209b4();
      }
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x24));
      *(undefined4 *)((int)register0x00000054 + -0xc0) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0xbc) =
           *(undefined4 *)((int)register0x00000054 + -0x6c);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0045a7b8;
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0xb8);
      *(undefined4 *)((int)register0x00000054 + -0xc0) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0xbc) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0045a7b8;
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + -0xb8);
      *(undefined4 *)((int)register0x00000054 + -0xc0) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0xbc) =
           *(undefined4 *)((int)register0x00000054 + -0x70);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_0045a7b8;
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)((int)register0x00000054 + -0xb8);
      *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a7bc;
      *(undefined4 *)((int)register0x00000054 + -0xbc) = 0x4a;
      *(undefined1 **)((int)register0x00000054 + -0xb8) =
           (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0xb4) = 3;
      *(undefined4 *)((int)register0x00000054 + -0xb0) = 3;
      FUN_001386c4();
      uVar17 = *(int *)((int)register0x00000054 + -0xac) == 0;
      uVar12 = 0;
      if (!(bool)uVar17) {
        uVar12 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xac) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar12;
      *(undefined4 *)((int)register0x00000054 + -0xbc) =
           *(undefined4 *)((int)register0x00000054 + -0xa8);
      uVar10 = FUN_00095b00();
LAB_0045a740:
      FUN_0009dbf4(uVar10,uVar10);
      puVar11 = extraout_r1_02;
      puVar6 = extraout_r2_02;
LAB_0045a748:
      *(undefined **)((int)register0x00000054 + -0xc0) = puVar11;
      *(undefined **)((int)register0x00000054 + -0xbc) = puVar6;
      *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0045a7b4;
      FUN_000209b4();
      puVar11 = extraout_r1_03;
      puVar6 = extraout_r2_03;
LAB_0045a75c:
      *(undefined **)((int)register0x00000054 + -0xc0) = puVar11;
      *(undefined **)((int)register0x00000054 + -0xbc) = puVar6;
      *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0045a7b4;
      FUN_000209b4();
      puVar11 = extraout_r1_04;
      puVar6 = extraout_r2_04;
LAB_0045a770:
      *(undefined **)((int)register0x00000054 + -0xc0) = puVar11;
      *(undefined **)((int)register0x00000054 + -0xbc) = puVar6;
      *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0045a7b4;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc4);
      if ((bool)uVar17) {
        register0x00000054 = (BADSPACEBASE *)puVar15;
      }
      goto LAB_0045a788;
    }
    uVar12 = 0;
  }
  *(undefined4 *)((int)register0x00000054 + -0x44) = uVar12;
  *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
  *(undefined4 *)((int)register0x00000054 + -0xc0) = *(undefined4 *)PTR_DAT_0045a2d4;
  *(undefined4 *)((int)register0x00000054 + -0xbc) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0xb8) =
       *(undefined4 *)((int)register0x00000054 + -0x70);
  FUN_003f12b8();
  if (*(int *)((int)register0x00000054 + -0xb0) == 2) {
    uVar12 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xb4) + 0xc);
    *(undefined4 *)((int)register0x00000054 + -0xc0) =
         *(undefined4 *)(*(int *)((int)register0x00000054 + -0xb4) + 8);
    *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar12;
    FUN_00151ce4();
    iVar2 = *(int *)((int)register0x00000054 + -0xb4);
    *(int *)((int)register0x00000054 + -0x6c) = iVar2;
    uVar12 = *(undefined4 *)((int)register0x00000054 + -0xb8);
    *(undefined4 *)((int)register0x00000054 + -0x48) = uVar12;
    if (iVar2 == 0) {
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0045a2dc;
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0045a2e0;
      *(undefined1 **)((int)register0x00000054 + -0xc0) =
           (undefined1 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
      *(undefined4 *)((int)register0x00000054 + -0xb8) = 1;
      k3c_internal_pkg_logger_Error();
      iVar2 = *(int *)((int)register0x00000054 + -0x6c);
      uVar12 = *(undefined4 *)((int)register0x00000054 + -0x48);
    }
    *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a2e4;
    *(undefined4 *)((int)register0x00000054 + -0xbc) =
         *(undefined4 *)((int)register0x00000054 + -0x40);
    *(undefined4 *)((int)register0x00000054 + -0xb8) = uVar12;
    *(int *)((int)register0x00000054 + -0xb4) = iVar2;
    FUN_00093560();
    if (*(char *)((int)register0x00000054 + -0xac) == '\0') {
      FUN_000908bc();
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0xc0);
      *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a2e4;
      *(undefined4 *)((int)register0x00000054 + -0xbc) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0xb8) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0xb4) =
           *(undefined4 *)((int)register0x00000054 + -0x6c);
      FUN_00093a08();
      puVar8 = *(undefined4 **)((int)register0x00000054 + -0xb0);
      *puVar8 = PTR_DAT_0045a2e8;
      if (*(int *)PTR_DAT_0045a2ec == 0) {
        uVar12 = *(undefined4 *)((int)register0x00000054 + -4);
      }
      else {
        puVar8 = (undefined4 *)FUN_0009db64();
        uVar12 = *(undefined4 *)((int)register0x00000054 + -4);
        *puVar13 = uVar12;
        puVar13[1] = puVar8[1];
      }
      puVar8[1] = uVar12;
      uVar3 = *(int *)((int)register0x00000054 + -0x7c) + 1;
      uVar10 = *(uint *)((int)register0x00000054 + -0x78);
      if (uVar10 < uVar3) {
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        *(uint *)((int)register0x00000054 + -0xbc) = uVar3;
        *(uint *)((int)register0x00000054 + -0xb8) = uVar10;
        *(undefined4 *)((int)register0x00000054 + -0xb4) = 1;
        *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_0045a2dc;
        FUN_000987f4();
        puVar11 = *(undefined **)((int)register0x00000054 + -0xac);
        uVar3 = *(uint *)((int)register0x00000054 + -0xa8);
        uVar10 = *(uint *)((int)register0x00000054 + -0xa4);
      }
      else {
        puVar11 = *(undefined **)((int)register0x00000054 + -0x58);
      }
      uVar18 = CONCAT44(uVar3 - 1,uVar3);
      puVar8 = *(undefined4 **)((int)register0x00000054 + -0x6c);
      *(undefined4 **)(puVar11 + (uVar3 - 1) * 8 + 4) = puVar8;
      if (*(int *)PTR_DAT_0045a2ec == 0) {
        uVar14 = *(undefined4 *)((int)register0x00000054 + -0x48);
      }
      else {
        uVar18 = FUN_0009db64();
        uVar14 = *(undefined4 *)((int)register0x00000054 + -0x48);
        *puVar13 = uVar14;
        puVar13[1] = *(undefined4 *)(puVar11 + (int)((ulonglong)uVar18 >> 0x20) * 8);
        puVar8 = extraout_r3;
      }
      uVar12 = (undefined4)uVar18;
      *(undefined4 *)(puVar11 + (int)((ulonglong)uVar18 >> 0x20) * 8) = uVar14;
    }
    else {
      uVar14 = *(undefined4 *)((int)register0x00000054 + -0x48);
      puVar8 = *(undefined4 **)((int)register0x00000054 + -0x6c);
      uVar12 = *(undefined4 *)((int)register0x00000054 + -0x7c);
      uVar10 = *(uint *)((int)register0x00000054 + -0x78);
      puVar11 = *(undefined **)((int)register0x00000054 + -0x58);
    }
    uVar7 = *(undefined4 *)((int)register0x00000054 + -0x68);
    uVar9 = *(undefined4 *)((int)register0x00000054 + -0x44);
  }
  else {
    *(undefined4 *)((int)register0x00000054 + -0xc0) = *(undefined4 *)PTR_DAT_0045a2d8;
    *(undefined4 *)((int)register0x00000054 + -0xbc) =
         *(undefined4 *)((int)register0x00000054 + -0x4c);
    *(undefined4 *)((int)register0x00000054 + -0xb8) =
         *(undefined4 *)((int)register0x00000054 + -0x70);
    FUN_003f12b8();
    if (*(int *)((int)register0x00000054 + -0xb0) == 4) {
      if (*(int *)((int)register0x00000054 + -0x6c) == 0) {
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x3c));
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0045a2dc;
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_0045a2f0;
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined4 *)((int)register0x00000054 + -0xbc) =
             *(undefined4 *)((int)register0x00000054 + -0x70);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0045a2dc;
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -0xb8);
        *(undefined1 **)((int)register0x00000054 + -0xc0) =
             (undefined1 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0xbc) = 2;
        *(undefined4 *)((int)register0x00000054 + -0xb8) = 2;
        k3c_internal_pkg_logger_Error();
        uVar7 = *(undefined4 *)((int)register0x00000054 + -0x68);
        uVar9 = *(undefined4 *)((int)register0x00000054 + -0x44);
        uVar12 = *(undefined4 *)((int)register0x00000054 + -0x7c);
        uVar10 = *(uint *)((int)register0x00000054 + -0x78);
        puVar11 = *(undefined **)((int)register0x00000054 + -0x58);
        puVar8 = *(undefined4 **)((int)register0x00000054 + -0x6c);
        uVar14 = *(undefined4 *)((int)register0x00000054 + -0x48);
      }
      else {
        iVar2 = *(int *)((int)register0x00000054 + -0xb4);
        *(int *)((int)register0x00000054 + -0x54) = iVar2;
        uVar12 = *(undefined4 *)(iVar2 + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0xc0) = *(undefined4 *)(iVar2 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar12;
        FUN_00151ce4();
        uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x54) + 0x18);
        uVar12 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x54) + 0x1c);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -0xb8);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0xb4);
        *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar12;
        FUN_00151ce4();
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0xb8);
        *(undefined4 *)((int)register0x00000054 + -0x80) =
             *(undefined4 *)((int)register0x00000054 + -0xb4);
        *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a2e4;
        *(undefined4 *)((int)register0x00000054 + -0xbc) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0xb8) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + -0xb4) =
             *(undefined4 *)((int)register0x00000054 + -0x6c);
        FUN_00025f60();
        puVar11 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0xb0);
        uVar17 = puVar11 == PTR_DAT_0045a2e8;
        puVar6 = PTR_DAT_0045a2e8;
        if (!(bool)uVar17) goto LAB_0045a770;
        uVar12 = (*(undefined4 **)((int)register0x00000054 + -0xb0))[1];
        *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a2e8;
        *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar12;
        *(undefined4 *)((int)register0x00000054 + -0xb8) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0xb4) =
             *(undefined4 *)((int)register0x00000054 + -100);
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0xac) == '\0') {
          *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a2e4;
          *(undefined4 *)((int)register0x00000054 + -0xbc) =
               *(undefined4 *)((int)register0x00000054 + -0x40);
          *(undefined4 *)((int)register0x00000054 + -0xb8) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined4 *)((int)register0x00000054 + -0xb4) =
               *(undefined4 *)((int)register0x00000054 + -0x6c);
          FUN_00025f60();
          puVar11 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0xb0);
          uVar17 = puVar11 == PTR_DAT_0045a2e8;
          puVar6 = PTR_DAT_0045a2e8;
          if (!(bool)uVar17) goto LAB_0045a748;
          uVar12 = (*(undefined4 **)((int)register0x00000054 + -0xb0))[1];
          *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a2e8;
          *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar12;
          *(undefined4 *)((int)register0x00000054 + -0xb8) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0xb4) =
               *(undefined4 *)((int)register0x00000054 + -100);
          FUN_00093a08();
          uVar18 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x80),
                            *(int *)((int)register0x00000054 + -0xb0));
          *(undefined4 *)(*(int *)((int)register0x00000054 + -0xb0) + 4) =
               *(undefined4 *)((int)register0x00000054 + -0x80);
          if (*(int *)PTR_DAT_0045a2ec == 0) {
            uVar12 = *(undefined4 *)((int)register0x00000054 + -0x5c);
          }
          else {
            uVar18 = FUN_0009db64();
            uVar12 = *(undefined4 *)((int)register0x00000054 + -0x5c);
            *puVar13 = uVar12;
            puVar13[1] = *(undefined4 *)uVar18;
          }
          iVar2 = (int)((ulonglong)uVar18 >> 0x20);
          *(undefined4 *)uVar18 = uVar12;
        }
        else {
          *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a2e4;
          *(undefined4 *)((int)register0x00000054 + -0xbc) =
               *(undefined4 *)((int)register0x00000054 + -0x40);
          *(undefined4 *)((int)register0x00000054 + -0xb8) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined4 *)((int)register0x00000054 + -0xb4) =
               *(undefined4 *)((int)register0x00000054 + -0x6c);
          FUN_00025f60();
          puVar11 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0xb0);
          uVar17 = puVar11 == PTR_DAT_0045a2e8;
          puVar6 = PTR_DAT_0045a2e8;
          if (!(bool)uVar17) goto LAB_0045a75c;
          uVar12 = (*(undefined4 **)((int)register0x00000054 + -0xb0))[1];
          *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0045a2e8;
          *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar12;
          *(undefined4 *)((int)register0x00000054 + -0xb8) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0xb4) =
               *(undefined4 *)((int)register0x00000054 + -100);
          FUN_00093a08();
          uVar18 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x80),
                            *(int *)((int)register0x00000054 + -0xb0));
          *(undefined4 *)(*(int *)((int)register0x00000054 + -0xb0) + 4) =
               *(undefined4 *)((int)register0x00000054 + -0x80);
          if (*(int *)PTR_DAT_0045a2ec == 0) {
            uVar12 = *(undefined4 *)((int)register0x00000054 + -0x5c);
          }
          else {
            uVar18 = FUN_0009db64();
            uVar12 = *(undefined4 *)((int)register0x00000054 + -0x5c);
            *puVar13 = uVar12;
            puVar13[1] = *(undefined4 *)uVar18;
          }
          iVar2 = (int)((ulonglong)uVar18 >> 0x20);
          *(undefined4 *)uVar18 = uVar12;
        }
        if (iVar2 == 0) {
          uVar7 = *(undefined4 *)((int)register0x00000054 + -100);
          uVar9 = *(undefined4 *)((int)register0x00000054 + -8);
        }
        else {
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0x68);
          uVar9 = *(undefined4 *)((int)register0x00000054 + -0x44);
        }
        uVar10 = *(uint *)((int)register0x00000054 + -0x78);
        puVar11 = *(undefined **)((int)register0x00000054 + -0x58);
        puVar8 = *(undefined4 **)((int)register0x00000054 + -0x6c);
        uVar14 = *(undefined4 *)((int)register0x00000054 + -0x48);
        uVar12 = *(undefined4 *)((int)register0x00000054 + -0x7c);
      }
    }
    else {
      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x3c));
      *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0045a2dc;
      *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_0045a2f4;
      *(undefined4 *)((int)register0x00000054 + -0xc0) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0xbc) =
           *(undefined4 *)((int)register0x00000054 + -0x70);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0045a2dc;
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + -0xb8);
      *(undefined1 **)((int)register0x00000054 + -0xc0) =
           (undefined1 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0xbc) = 2;
      *(undefined4 *)((int)register0x00000054 + -0xb8) = 2;
      k3c_internal_pkg_logger_Error();
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x68);
      uVar9 = *(undefined4 *)((int)register0x00000054 + -0x44);
      uVar12 = *(undefined4 *)((int)register0x00000054 + -0x7c);
      uVar10 = *(uint *)((int)register0x00000054 + -0x78);
      puVar11 = *(undefined **)((int)register0x00000054 + -0x58);
      puVar8 = *(undefined4 **)((int)register0x00000054 + -0x6c);
      uVar14 = *(undefined4 *)((int)register0x00000054 + -0x48);
    }
  }
LAB_00459b08:
  iVar5 = *(int *)((int)register0x00000054 + -0x60) + 1;
  iVar2 = *(int *)((int)register0x00000054 + -0x50);
  iVar4 = *(int *)((int)register0x00000054 + -0x74);
  puVar13 = puVar8;
  goto LAB_00459b2c;
}



/* k3c/internal/pkg/printer.NewPrinter @ 0045a7c0 (size 648) */

void k3c_internal_pkg_printer_NewPrinter(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined4 extraout_r1_00;
  int iVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar6;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  undefined4 *in_stack_00000018;
  undefined4 *local_84;
  undefined1 auStack_70 [8];
  undefined *local_68;
  undefined1 auStack_c [8];
  undefined4 *local_4;
  
  while (puVar1 = PTR_DAT_0045aa4c, auStack_c <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  local_4 = local_84;
  FUN_0009dea8(0,auStack_70);
  FUN_000908bc();
  local_68 = puVar1;
  uVar2 = 0;
  if (*(int *)PTR_DAT_0045aa50 != 0) {
    local_84 = local_4;
    uVar2 = FUN_00026c00();
  }
  FUN_0009e240(uVar2,auStack_70,local_4);
  FUN_00022cf8();
  local_84[1] = 0;
  *local_84 = 0;
  puVar3 = local_84;
  if (*(int *)PTR_DAT_0045aa50 != 0) {
    puVar3 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar3;
    unaff_r8[1] = *local_4;
  }
  *local_4 = puVar3;
  FUN_00022cf8();
  local_84[1] = 0;
  *local_84 = 0;
  if (*(int *)PTR_DAT_0045aa50 != 0) {
    local_84 = (undefined4 *)FUN_0009dba4();
    *unaff_r8 = local_84;
    unaff_r8[1] = local_4[1];
    unaff_r8[2] = in_stack_00000008;
    unaff_r8[3] = local_4[2];
    unaff_r8[4] = in_stack_00000004;
    unaff_r8[5] = local_4[3];
  }
  local_4[1] = local_84;
  local_4[2] = in_stack_00000008;
  local_4[3] = in_stack_00000004;
  (*(code *)*in_stack_00000018)();
  uVar2 = local_4[3];
  k3c_internal_pkg_reactor_NewReactorCallback();
  local_4[5] = 0x66;
  puVar3 = local_4;
  if (*(int *)PTR_DAT_0045aa50 != 0) {
    uVar6 = FUN_0009db64(local_4[4]);
    puVar3 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
    *unaff_r8 = (int)uVar6;
    unaff_r8[1] = puVar3[7];
  }
  puVar3[4] = PTR_DAT_0045aa5c;
  *(undefined1 *)(puVar3 + 6) = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  FUN_000908bc();
  uVar4 = uVar2;
  if (*(int *)PTR_DAT_0045aa50 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = local_4[9];
    uVar4 = extraout_r1;
  }
  local_4[9] = uVar4;
  FUN_000908bc();
  if (*(int *)PTR_DAT_0045aa50 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = local_4[10];
    uVar2 = extraout_r1_00;
  }
  local_4[10] = uVar2;
  for (iVar5 = 0; iVar5 < in_stack_00000010; iVar5 = iVar5 + 1) {
    (*(code *)**(undefined4 **)(in_stack_0000000c + iVar5 * 4))();
  }
  return;
}



/* k3c/internal/pkg/printer.(*Printer).LoadConfig @ 0045aa60 (size 1028) */

void k3c_internal_pkg_printer___Printer__LoadConfig(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int extraout_r2;
  int extraout_r2_00;
  int iVar3;
  int extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  undefined1 uVar5;
  undefined8 uVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x68) = unaff_lr;
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28);
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0045ae68;
      *(undefined4 *)((int)register0x00000054 + -0x60) = uVar2;
      *(undefined **)((int)register0x00000054 + -0x5c) =
           PTR_s_configfileprint_sizemodel_name_d_00823504_0xf4e_0045ae6c;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 10;
      FUN_00093a08();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x54);
      *puVar1 = PTR_DAT_0045ae70;
      if (*(int *)PTR_DAT_0045ae74 == 0) {
        uVar2 = *(undefined4 *)((int)register0x00000054 + 8);
      }
      else {
        puVar1 = (undefined4 *)FUN_0009db64();
        uVar2 = *(undefined4 *)((int)register0x00000054 + 8);
        *unaff_r8 = uVar2;
        unaff_r8[1] = puVar1[1];
      }
      puVar1[1] = uVar2;
      *(undefined4 *)((int)register0x00000054 + -100) = uVar2;
      k3c_internal_pkg_printer___PrinterConfig__Read_main_config();
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -100) =
           *(undefined4 *)((int)register0x00000054 + -0x60);
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0045ae78;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = 0xb;
      *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_0045ae7c;
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_SUB_0045ae80;
      *(undefined1 *)((int)register0x00000054 + -0x50) = 0;
      k3c_internal_pkg_printer___ConfigWrapper__Get();
      uVar6 = CONCAT44(PTR_DAT_0045ae7c,*(undefined **)((int)register0x00000054 + -0x4c));
      uVar5 = 0;
      if (*(undefined **)((int)register0x00000054 + -0x4c) == PTR_DAT_0045ae7c) {
        uVar6 = CONCAT44(PTR_DAT_0045ae7c,**(undefined4 **)((int)register0x00000054 + -0x48));
        iVar3 = *(int *)((int)register0x00000054 + 4);
        *(undefined4 *)(iVar3 + 0x34) = (*(undefined4 **)((int)register0x00000054 + -0x48))[1];
        if (*(int *)PTR_DAT_0045ae74 != 0) {
          uVar6 = FUN_0009db64();
          *unaff_r8 = (int)uVar6;
          unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x30);
          iVar3 = extraout_r3;
        }
        *(int *)(iVar3 + 0x30) = (int)uVar6;
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined **)((int)register0x00000054 + -0x60) =
             PTR_s_print_sizemodel_name_d_core__sun_00823504_0xf58_0045ae84;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 10;
        *(int *)((int)register0x00000054 + -0x58) = (int)((ulonglong)uVar6 >> 0x20);
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_SUB_0045ae88;
        *(undefined1 *)((int)register0x00000054 + -0x50) = 0;
        k3c_internal_pkg_printer___ConfigWrapper__Get();
        uVar5 = *(undefined **)((int)register0x00000054 + -0x4c) == PTR_DAT_0045ae7c;
        if ((bool)uVar5) {
          uVar2 = **(undefined4 **)((int)register0x00000054 + -0x48);
          iVar3 = *(int *)((int)register0x00000054 + 4);
          *(undefined4 *)(iVar3 + 0x3c) = (*(undefined4 **)((int)register0x00000054 + -0x48))[1];
          if (*(int *)PTR_DAT_0045ae74 != 0) {
            uVar2 = FUN_0009db64();
            *unaff_r8 = uVar2;
            unaff_r8[1] = *(undefined4 *)(extraout_r2 + 0x38);
            iVar3 = extraout_r2;
          }
          *(undefined4 *)(iVar3 + 0x38) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          *(undefined **)((int)register0x00000054 + -0x60) =
               PTR_s_jump_speed_minjump_speed_maxConf_008262d0_0x1c76_0045ae8c;
          *(undefined4 *)((int)register0x00000054 + -0x5c) = 0xe;
          *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_0045ae90;
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0045ae94;
          *(undefined8 *)((int)register0x00000054 + -0x50) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x48) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x40) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x38) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x30) = 0;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          *(undefined8 *)(*(int *)((int)register0x00000054 + 4) + 0x40) =
               *(undefined8 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          *(undefined **)((int)register0x00000054 + -0x60) =
               PTR_s_jump_speed_maxConfig_error__New_c_008262d0_0x1c84_0045ae98;
          *(undefined4 *)((int)register0x00000054 + -0x5c) = 0xe;
          *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_0045ae90;
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0045ae9c;
          *(undefined8 *)((int)register0x00000054 + -0x50) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x48) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x40) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x38) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x30) = 0;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          *(undefined8 *)(*(int *)((int)register0x00000054 + 4) + 0x48) =
               *(undefined8 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          *(undefined **)((int)register0x00000054 + -0x60) =
               PTR_s_platform_x_sizeplatform_y_sizepl_008262d0_0x2a2a_0045aea0;
          *(undefined4 *)((int)register0x00000054 + -0x5c) = 0xf;
          *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_0045ae90;
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0045aea4;
          *(undefined8 *)((int)register0x00000054 + -0x50) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x48) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x40) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x38) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x30) = 0;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          *(undefined8 *)(*(int *)((int)register0x00000054 + 4) + 0x50) =
               *(undefined8 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          *(undefined **)((int)register0x00000054 + -0x60) =
               PTR_s_platform_y_sizeplatform_z_sizepr_008262d0_0x2a39_0045aea8;
          *(undefined4 *)((int)register0x00000054 + -0x5c) = 0xf;
          *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_0045ae90;
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0045aeac;
          *(undefined8 *)((int)register0x00000054 + -0x50) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x48) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x40) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x38) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x30) = 0;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          *(undefined8 *)(*(int *)((int)register0x00000054 + 4) + 0x58) =
               *(undefined8 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          *(undefined **)((int)register0x00000054 + -0x60) =
               PTR_s_platform_z_sizeproject_connectli_008262d0_0x2a48_0045aeb0;
          *(undefined4 *)((int)register0x00000054 + -0x5c) = 0xf;
          *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_0045ae90;
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0045aeb4;
          *(undefined8 *)((int)register0x00000054 + -0x50) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x48) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x40) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x38) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x30) = 0;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          iVar3 = *(int *)((int)register0x00000054 + 4);
          *(undefined8 *)(iVar3 + 0x60) = *(undefined8 *)((int)register0x00000054 + -0x2c);
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10),iVar3);
          *(undefined8 *)((int)register0x00000054 + -0x1c) = *(undefined8 *)(extraout_r2_00 + 0x40);
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          FUN_0008f6c0();
          *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0045ae90;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined8 *)((int)register0x00000054 + -0x24) =
               *(undefined8 *)(*(int *)((int)register0x00000054 + 4) + 0x48);
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          FUN_0008f6c0();
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0045ae90;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0045aeb8;
          *(undefined4 *)((int)register0x00000054 + -0x60) = 0x18;
          *(undefined1 **)((int)register0x00000054 + -0x5c) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x58) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x54) = 2;
          k3c_internal_pkg_logger_Debugf();
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
                    /* WARNING: Could not recover jumptable at 0x0045ae28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x68))();
          return;
        }
        *(undefined **)((int)register0x00000054 + -100) =
             *(undefined **)((int)register0x00000054 + -0x4c);
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0045ae7c;
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0045aebc;
        uVar6 = FUN_000209b4();
      }
      *(undefined8 *)((int)register0x00000054 + -100) = uVar6;
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0045aebc;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x68);
      if ((bool)uVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x45ae60;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*Printer).OnConnect @ 0045aec0 (size 516) */

/* WARNING: Removing unreachable block (ram,0x0045af18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___Printer__OnConnect(void)

{
  undefined4 extraout_r2;
  int extraout_r3;
  undefined4 *puVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  int in_stack_00000004;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puStack_34;
  undefined *puStack_14;
  undefined *puStack_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45b0c0;
    FUN_0009bf64();
  }
  FUN_00025f60();
  if ((int)puStack_34[1] < 1) {
                    /* WARNING: Could not recover jumptable at 0x0045b0b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  puVar1 = *(undefined4 **)*puStack_34;
  if (*(int *)(in_stack_00000004 + 0x14) != 0x66) {
                    /* WARNING: Could not recover jumptable at 0x0045b0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00018250();
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  (*(code *)*puVar1)();
  bVar2 = false;
  FUN_0009df04(0,&puStack_14,puStack_34,0xf,UNRECOVERED_JUMPTABLE,uVar3,uVar4,uVar5);
  puStack_14 = PTR_DAT_0045b0d4;
  puStack_10 = PTR_DAT_0045b0d8;
  iStack_c = extraout_r3;
  if (!bVar2) {
    iStack_c = *(int *)(extraout_r3 + 4);
  }
  uVar4 = 2;
  uVar5 = 2;
  uStack_4 = extraout_r2;
  k3c_internal_pkg_logger_Error();
  uVar3 = uStack_4;
  (*_DAT_0000001b)();
  FUN_0009df04(0,&puStack_14,uVar5,uVar4,UNRECOVERED_JUMPTABLE,uVar3);
  FUN_0008f77c();
  puStack_14 = PTR_DAT_0045b0d4;
  iStack_c = _DAT_00000013;
  uStack_8 = uStack_4;
  puStack_10 = (undefined *)uVar5;
  FUN_0013b72c();
  k3c_internal_pkg_printer___Printer___set_state();
                    /* WARNING: Could not recover jumptable at 0x0045b0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).OnReady @ 0045b0e0 (size 508) */

/* WARNING: Removing unreachable block (ram,0x0045b154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___Printer__OnReady(void)

{
  undefined4 *puVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 *puStack_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45b2d8;
    FUN_0009bf64();
  }
  k3c_internal_pkg_printer___Printer___set_state();
  FUN_00025f60();
  if (0 < (int)puStack_2c[1]) {
    puVar1 = *(undefined4 **)*puStack_2c;
    if (*(int *)(in_stack_00000004 + 0x14) == 0x10) {
      FUN_00018250();
      (*(code *)*puVar1)();
      k3c_internal_pkg_logger_Error();
      (*_DAT_00000019)();
      FUN_0008f77c();
      FUN_0013b72c();
      k3c_internal_pkg_printer___Printer___set_state();
                    /* WARNING: Could not recover jumptable at 0x0045b29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    k3c_internal_pkg_logger_Warn();
                    /* WARNING: Could not recover jumptable at 0x0045b2c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0045b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).DeviceType @ 0045b2fc (size 24) */

void k3c_internal_pkg_printer___Printer__DeviceType(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x30);
  uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x34);
                    /* WARNING: Could not recover jumptable at 0x0045b310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).PrintSize @ 0045b314 (size 24) */

void k3c_internal_pkg_printer___Printer__PrintSize(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x38);
  uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x3c);
                    /* WARNING: Could not recover jumptable at 0x0045b328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).IsKobraS1 @ 0045b32c (size 92) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___Printer__IsKobraS1(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined1 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45b384;
    FUN_0009bf64();
  }
  if (*(int *)(in_stack_00000004 + 0x34) == 0x11) {
    FUN_00018250();
    in_stack_00000008 = uStack_4;
  }
  else {
    in_stack_00000008 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0045b378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).IsKobraS1V2 @ 0045b390 (size 92) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___Printer__IsKobraS1V2(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined1 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45b3e8;
    FUN_0009bf64();
  }
  if (*(int *)(in_stack_00000004 + 0x34) == 0x14) {
    FUN_00018250();
    in_stack_00000008 = uStack_4;
  }
  else {
    in_stack_00000008 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0045b3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).IsKobraS1Max @ 0045b3f4 (size 92) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___Printer__IsKobraS1Max(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined1 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45b44c;
    FUN_0009bf64();
  }
  if (*(int *)(in_stack_00000004 + 0x34) == 0x15) {
    FUN_00018250();
    in_stack_00000008 = uStack_4;
  }
  else {
    in_stack_00000008 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0045b440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).IsKobra3 @ 0045b458 (size 92) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___Printer__IsKobra3(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined1 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45b4b0;
    FUN_0009bf64();
  }
  if (*(int *)(in_stack_00000004 + 0x34) == 0x10) {
    FUN_00018250();
    in_stack_00000008 = uStack_4;
  }
  else {
    in_stack_00000008 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0045b4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).IsCorexy @ 0045b4bc (size 244) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___Printer__IsCorexy(void)

{
  char cVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  char in_stack_00000008;
  undefined1 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45b5ac;
    FUN_0009bf64();
  }
  if (*(int *)(in_stack_00000004 + 0x34) == 0x11) {
    FUN_00018250();
    cVar1 = uStack_4;
  }
  else {
    cVar1 = '\0';
  }
  if (cVar1 == '\0') {
    if (*(int *)(in_stack_00000004 + 0x34) == 0x14) {
      FUN_00018250();
      cVar1 = uStack_4;
    }
    else {
      cVar1 = '\0';
    }
  }
  else {
    cVar1 = '\x01';
  }
  if (cVar1 == '\0') {
    if (*(int *)(in_stack_00000004 + 0x34) == 0x15) {
      FUN_00018250();
      in_stack_00000008 = uStack_4;
    }
    else {
      in_stack_00000008 = '\0';
    }
  }
  else {
    in_stack_00000008 = '\x01';
  }
                    /* WARNING: Could not recover jumptable at 0x0045b5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).IsDebugOutput @ 0045b5c0 (size 80) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___Printer__IsDebugOutput(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45b60c;
    FUN_0009bf64();
  }
  FUN_00093560();
                    /* WARNING: Could not recover jumptable at 0x0045b600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).Get_start_args @ 0045b61c (size 16) */

void k3c_internal_pkg_printer___Printer__Get_start_args(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x0045b628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).Get_reactor @ 0045b62c (size 16) */

void k3c_internal_pkg_printer___Printer__Get_reactor(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x0045b638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).State @ 0045b63c (size 236) */

void k3c_internal_pkg_printer___Printer__State(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined *in_stack_00000010;
  undefined4 in_stack_00000014;
  char cStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45b724;
    FUN_0009bf64();
  }
  if ((*(int *)(in_stack_00000004 + 0x14) == 0x10) && (FUN_00018250(), cStack_4 != '\0')) {
    in_stack_00000014 = 5;
    in_stack_00000010 = PTR_s_readyerrorlevelwlan0labelgklib_s_00820821_0x5f5_0045b730;
  }
  else if ((*(int *)(in_stack_00000004 + 0x14) == 0x66) && (FUN_00018250(), cStack_4 != '\0')) {
    in_stack_00000014 = 7;
    in_stack_00000010 = PTR_s_startupconsoleheaterstmc2209adxl_008216f7_0x4f8_0045b738;
  }
  else if (*(char *)(in_stack_00000004 + 0x18) == '\0') {
    in_stack_00000014 = 5;
    in_stack_00000010 = PTR_s_errorlevelwlan0labelgklib_s__s___00820821_0x5fa_0045b740;
  }
  else {
    in_stack_00000014 = 8;
    in_stack_00000010 = PTR_s_shutdown_s__s__sinclude_settings_008216f7_0xfe5_0045b73c;
  }
  in_stack_00000008 = *(undefined4 *)(in_stack_00000004 + 0x10);
  in_stack_0000000c = *(undefined4 *)(in_stack_00000004 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x0045b718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).SetState @ 0045b744 (size 60) */

void k3c_internal_pkg_printer___Printer__SetState(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45b77c;
    FUN_0009bf64();
  }
  k3c_internal_pkg_printer___Printer___set_state();
                    /* WARNING: Could not recover jumptable at 0x0045b770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).Is_shutdown @ 0045b780 (size 16) */

void k3c_internal_pkg_printer___Printer__Is_shutdown(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(in_stack_00000004 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0045b78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer)._set_state @ 0045b790 (size 516) */

/* WARNING: Removing unreachable block (ram,0x0045b940) */

void k3c_internal_pkg_printer___Printer___set_state(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int extraout_r2;
  int iVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar5;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  char local_18;
  int *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0009df04(0,&local_10);
  local_10 = DAT_0045b998;
  local_c = DAT_0045b99c;
  FUN_0008f77c();
  local_8 = DAT_0045b998;
  k3c_internal_pkg_logger_Debug();
  if (*(int *)(in_stack_00000004 + 0x14) == 0x10) {
    FUN_00018250();
    cVar2 = local_18;
  }
  else {
    cVar2 = '\0';
  }
  if (cVar2 == '\0') {
    if (*(int *)(in_stack_00000004 + 0x14) == 0x66) {
      FUN_00018250();
      cVar2 = local_18;
    }
    else {
      cVar2 = '\0';
    }
    iVar3 = in_stack_0000000c;
    if (cVar2 == '\0') goto LAB_0045b8c0;
  }
  *(int *)(in_stack_00000004 + 0x14) = in_stack_0000000c;
  iVar3 = in_stack_0000000c;
  iVar4 = in_stack_00000004;
  if (*DAT_0045b9a8 != 0) {
    iVar3 = FUN_0009db64();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = *(undefined4 *)(extraout_r2 + 0x10);
    iVar4 = extraout_r2;
  }
  *(undefined4 *)(iVar4 + 0x10) = in_stack_00000008;
LAB_0045b8c0:
  if ((iVar3 == 0x10) && (FUN_00018250(), local_18 != '\0')) {
    bVar1 = false;
  }
  else {
    FUN_00025f60();
    bVar1 = false;
    if (*local_14 != 0) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    if (*(int *)(in_stack_00000004 + 0x20) == 0) {
      *(undefined4 *)(in_stack_00000004 + 0x20) = 10;
      if (*DAT_0045b9a8 != 0) {
        uVar5 = FUN_0009db54(in_stack_00000004,*(undefined4 *)(in_stack_00000004 + 0x1c));
        in_stack_00000004 = (int)uVar5;
        *unaff_r8 = (int)((ulonglong)uVar5 >> 0x20);
      }
      *(undefined4 *)(in_stack_00000004 + 0x1c) = DAT_0045b9b4;
    }
    **(undefined1 **)(in_stack_00000004 + 0xc) = 0;
  }
  return;
}



/* k3c/internal/pkg/printer.(*Printer).Add_object @ 0045b9b8 (size 396) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___Printer__Add_object(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined *local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00093560();
  if ((char)local_28 == '\0') {
    FUN_00093a08();
    *local_2c = in_stack_00000010;
    if (*(int *)PTR_DAT_0045bb58 != 0) {
      local_2c = (undefined4 *)FUN_0009db64();
      *unaff_r8 = in_stack_00000014;
      unaff_r8[1] = local_2c[1];
    }
    local_2c[1] = in_stack_00000014;
    return;
  }
  FUN_0009defc(0,&local_18);
  local_14 = 0x10;
  local_18 = PTR_s_Printer_object__ADC_out_of_range_008262d0_0x39ca_0045bb4c;
  local_c = in_stack_0000000c;
  local_10 = in_stack_00000008;
  local_4 = 0x11;
  local_8 = PTR_DAT_0045bb50;
  FUN_0014f8fc();
  FUN_00022cf8();
  puVar1 = (undefined4 *)0x3;
  _DAT_00000007 = local_24;
  if (*(int *)PTR_DAT_0045bb58 != 0) {
    FUN_0009db54();
    *unaff_r8 = local_28;
    puVar1 = extraout_r2;
  }
  *puVar1 = local_28;
  return;
}



/* k3c/internal/pkg/printer.(*Printer).Lookup_object @ 0045bb60 (size 296) */

void k3c_internal_pkg_printer___Printer__Lookup_object(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x45bc84;
    FUN_0009bf64();
  }
  uVar1 = *(undefined4 *)(in_stack_00000004 + 0x28);
  uVar2 = DAT_0045bc8c;
  uVar3 = in_stack_00000008;
  uVar4 = in_stack_0000000c;
  FUN_00093560();
  if (local_14 == '\0') {
    if (in_stack_00000010 == DAT_0045bc90) {
      FUN_0009df04(0,&local_10,in_stack_00000010,DAT_0045bc90,unaff_lr,uVar2,uVar1,uVar3,uVar4);
      FUN_0008f77c();
      local_10 = DAT_0045bc94;
      local_8 = DAT_0045bc94;
      local_4 = DAT_0045bc98;
      local_c = uVar3;
      k3c_internal_pkg_logger_Errorf();
      return;
    }
    return;
  }
  FUN_00025f60();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).LookupAllObjects @ 0045bca0 (size 288) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___Printer__LookupAllObjects(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  int iStack_54;
  uint uStack_50;
  uint uStack_4c;
  int iStack_30;
  undefined4 *puStack_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45bdbc;
    FUN_0009bf64();
  }
  FUN_0009dee4(0,&iStack_30,*(undefined4 *)(in_stack_00000004 + 0x28));
  FUN_00091764();
  uVar1 = 0;
  iVar2 = 0;
  uVar3 = 0;
  while (iStack_30 != 0) {
    uVar3 = uVar3 + 1;
    uVar5 = puStack_2c[1];
    uVar4 = *puStack_2c;
    if (uVar1 < uVar3) {
      FUN_000987f4();
      uVar1 = uStack_4c;
      iVar2 = iStack_54;
      uVar3 = uStack_50;
    }
    *(undefined4 *)(iVar2 + (uVar3 - 1) * 8) = uVar4;
    iVar6 = iVar2 + (uVar3 - 1) * 8;
    if (*_UNK_0045bdcc != 0) {
      FUN_0009db64();
      *unaff_r8 = uVar5;
      unaff_r8[1] = *(undefined4 *)(iVar6 + 4);
    }
    *(undefined4 *)(iVar6 + 4) = uVar5;
    FUN_000919c8();
  }
  in_stack_00000008 = iVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0045bdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).Lookup_objects @ 0045bdd0 (size 1320) */

void k3c_internal_pkg_printer___Printer__Lookup_objects(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_r2;
  undefined1 *puVar7;
  char cVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar12;
  undefined4 unaff_lr;
  undefined1 uVar13;
  undefined8 uVar14;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x70)) {
      puVar12 = (undefined1 *)((int)register0x00000054 + -0xf0);
      *(undefined4 *)((int)register0x00000054 + -0xf0) = unaff_lr;
      if (*(int *)((int)register0x00000054 + 0xc) == 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0045c304;
        *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0045c308;
        *(undefined1 **)((int)register0x00000054 + -0xec) =
             (undefined1 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + -0xe8) = 1;
        *(undefined4 *)((int)register0x00000054 + -0xe4) = 1;
        k3c_internal_pkg_logger_Error();
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0045bea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0xf0))();
        return;
      }
      *(undefined1 **)((int)register0x00000054 + -0xec) =
           (undefined1 *)((int)register0x00000054 + -200);
      *(undefined4 *)((int)register0x00000054 + -0xe8) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(int *)((int)register0x00000054 + -0xe4) = *(int *)((int)register0x00000054 + 0xc);
      *(undefined **)((int)register0x00000054 + -0xe0) = PTR_DAT_0045c2fc;
      *(undefined4 *)((int)register0x00000054 + -0xdc) = 1;
      FUN_0007636c();
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28);
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + -0xd8);
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + -0xd4);
      FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x3c));
      *(undefined **)((int)register0x00000054 + -0xec) = PTR_DAT_0045c300;
      *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar2;
      *(undefined1 **)((int)register0x00000054 + -0xe4) =
           (undefined1 *)((int)register0x00000054 + -0x3c);
      FUN_00091764();
      uVar2 = 0;
      uVar3 = 0;
      uVar6 = 0;
      while( true ) {
        *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x68) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x90) = uVar6;
        puVar9 = *(undefined4 **)((int)register0x00000054 + -0x3c);
        if (puVar9 == (undefined4 *)0x0) break;
        *(undefined4 *)((int)register0x00000054 + -0x88) = puVar9[1];
        *(undefined4 *)((int)register0x00000054 + -0x5c) = *puVar9;
        *(undefined4 *)((int)register0x00000054 + -0x7c) =
             (*(undefined4 **)((int)register0x00000054 + -0x38))[1];
        *(undefined4 *)((int)register0x00000054 + -0xa8) =
             **(undefined4 **)((int)register0x00000054 + -0x38);
        FUN_000908bc();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0xec);
        *(undefined4 *)((int)register0x00000054 + -0x60) = uVar2;
        iVar4 = *(int *)((int)register0x00000054 + -0x88);
        if (iVar4 < *(int *)((int)register0x00000054 + -0xa0)) {
          cVar8 = '\0';
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -0xec) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -0xe8) =
               *(undefined4 *)((int)register0x00000054 + -0x74);
          *(int *)((int)register0x00000054 + -0xe4) = *(int *)((int)register0x00000054 + -0xa0);
          FUN_00018250();
          cVar8 = *(char *)((int)register0x00000054 + -0xe0);
          iVar4 = *(int *)((int)register0x00000054 + -0x88);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x60);
        }
        if (cVar8 == '\0') {
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x8c);
          uVar14 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x68),
                            *(undefined4 *)((int)register0x00000054 + -0x90));
        }
        else {
          *(undefined **)((int)register0x00000054 + -0xec) = PTR_DAT_0045c300;
          *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -0xe4) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(int *)((int)register0x00000054 + -0xe0) = iVar4;
          FUN_00093a08();
          puVar9 = *(undefined4 **)((int)register0x00000054 + -0xdc);
          *puVar9 = *(undefined4 *)((int)register0x00000054 + -0xa8);
          if (*(int *)PTR_DAT_0045c30c == 0) {
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x7c);
          }
          else {
            puVar9 = (undefined4 *)FUN_0009db64();
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x7c);
            *unaff_r8 = uVar2;
            unaff_r8[1] = puVar9[1];
          }
          puVar9[1] = uVar2;
          uVar1 = *(int *)((int)register0x00000054 + -0x90) + 1;
          if (*(uint *)((int)register0x00000054 + -0x8c) < uVar1) {
            *(undefined4 *)((int)register0x00000054 + -0xec) =
                 *(undefined4 *)((int)register0x00000054 + -0x68);
            *(uint *)((int)register0x00000054 + -0xe8) = uVar1;
            *(uint *)((int)register0x00000054 + -0xe4) = *(uint *)((int)register0x00000054 + -0x8c);
            *(undefined4 *)((int)register0x00000054 + -0xe0) = 1;
            *(undefined **)((int)register0x00000054 + -0xdc) = PTR_DAT_0045c300;
            FUN_000987f4();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0xd8);
            uVar1 = *(uint *)((int)register0x00000054 + -0xd4);
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0xd0);
          }
          else {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x68);
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x8c);
          }
          uVar14 = CONCAT44(uVar3,uVar1);
          if (*(int *)PTR_DAT_0045c30c == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x60);
          }
          else {
            uVar14 = FUN_0009db64();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x60);
            *unaff_r8 = uVar3;
            unaff_r8[1] = *(undefined4 *)((int)((ulonglong)uVar14 >> 0x20) + (uVar1 - 1) * 4);
            uVar2 = extraout_r2;
          }
          *(undefined4 *)((int)((ulonglong)uVar14 >> 0x20) + (uVar1 - 1) * 4) = uVar3;
        }
        *(int *)((int)register0x00000054 + -0x90) = (int)uVar14;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar2;
        *(int *)((int)register0x00000054 + -0x68) = (int)((ulonglong)uVar14 >> 0x20);
        *(undefined1 **)((int)register0x00000054 + -0xec) =
             (undefined1 *)((int)register0x00000054 + -0x3c);
        FUN_000919c8();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x8c);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x68);
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x90);
      }
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28);
      *(undefined **)((int)register0x00000054 + -0xec) = PTR_DAT_0045c300;
      *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0xe4) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0xe0) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0xd8) == '\0') {
        uVar1 = *(uint *)((int)register0x00000054 + -0x8c);
        iVar5 = *(int *)((int)register0x00000054 + -0x90);
        iVar4 = *(int *)((int)register0x00000054 + -0x68);
        goto LAB_0045c15c;
      }
      *(undefined4 *)((int)register0x00000054 + -0x9c) =
           **(undefined4 **)((int)register0x00000054 + -0xdc);
      *(undefined4 *)((int)register0x00000054 + -0x70) =
           (*(undefined4 **)((int)register0x00000054 + -0xdc))[1];
      FUN_000908bc();
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0xec);
      *(undefined4 *)((int)register0x00000054 + -100) = uVar2;
      *(undefined **)((int)register0x00000054 + -0xec) = PTR_DAT_0045c300;
      *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0xe4) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0xe0) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093a08();
      puVar9 = *(undefined4 **)((int)register0x00000054 + -0xdc);
      *puVar9 = *(undefined4 *)((int)register0x00000054 + -0x9c);
      if (*(int *)PTR_DAT_0045c30c == 0) {
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x70);
      }
      else {
        puVar9 = (undefined4 *)FUN_0009db64();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x70);
        *unaff_r8 = uVar2;
        unaff_r8[1] = puVar9[1];
      }
      puVar9[1] = uVar2;
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x54));
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + -100);
      *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 1;
      *(undefined1 **)((int)register0x00000054 + -0x54) =
           (undefined1 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + -0x90);
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + -0x8c);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x54);
      iVar5 = 0;
      for (iVar4 = 0; iVar4 < 2; iVar4 = iVar4 + 1) {
        iVar5 = *(int *)(puVar7 + 4) + iVar5;
        uVar13 = iVar5 == 0;
        if (iVar5 < 0) goto LAB_0045c2d4;
        puVar7 = puVar7 + 0xc;
      }
      uVar13 = iVar5 == 0;
      if (-1 < iVar5) {
        if (iVar5 < 1) {
          uVar1 = 0;
          iVar4 = 0;
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -0xec) = 0;
          *(int *)((int)register0x00000054 + -0xe8) = iVar5;
          *(undefined4 *)((int)register0x00000054 + -0xe4) = 0;
          *(int *)((int)register0x00000054 + -0xe0) = iVar5;
          *(undefined **)((int)register0x00000054 + -0xdc) = PTR_DAT_0045c300;
          FUN_000987f4();
          iVar4 = *(int *)((int)register0x00000054 + -0xd8);
          uVar1 = *(uint *)((int)register0x00000054 + -0xd0);
        }
        puVar9 = (undefined4 *)((int)register0x00000054 + -0x54);
        iVar5 = 0;
        iVar10 = 0;
        while (iVar10 < 2) {
          *(int *)((int)register0x00000054 + -0x80) = iVar10;
          *(undefined4 **)((int)register0x00000054 + -4) = puVar9;
          iVar10 = puVar9[1];
          uVar11 = iVar10 + iVar5;
          uVar2 = *puVar9;
          if (uVar1 < uVar11) {
            *(int *)((int)register0x00000054 + -0xa4) = iVar10;
            *(undefined4 *)((int)register0x00000054 + -0x78) = uVar2;
            *(int *)((int)register0x00000054 + -0x84) = iVar5;
            *(int *)((int)register0x00000054 + -0xec) = iVar4;
            *(uint *)((int)register0x00000054 + -0xe8) = uVar11;
            *(uint *)((int)register0x00000054 + -0xe4) = uVar1;
            *(int *)((int)register0x00000054 + -0xe0) = iVar10;
            *(undefined **)((int)register0x00000054 + -0xdc) = PTR_DAT_0045c300;
            FUN_000987f4();
            iVar4 = *(int *)((int)register0x00000054 + -0xd8);
            uVar11 = *(uint *)((int)register0x00000054 + -0xd4);
            uVar1 = *(uint *)((int)register0x00000054 + -0xd0);
            iVar5 = *(int *)((int)register0x00000054 + -0x84);
            iVar10 = *(int *)((int)register0x00000054 + -0xa4);
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x78);
          }
          *(uint *)((int)register0x00000054 + -0x94) = uVar1;
          *(uint *)((int)register0x00000054 + -0x98) = uVar11;
          *(int *)((int)register0x00000054 + -0x6c) = iVar4;
          *(undefined **)((int)register0x00000054 + -0xec) = PTR_DAT_0045c300;
          *(int *)((int)register0x00000054 + -0xe8) =
               iVar4 + ((int)-(uVar1 - iVar5) >> 0x1f & iVar5 << 2);
          *(uint *)((int)register0x00000054 + -0xe4) = uVar11 - iVar5;
          *(undefined4 *)((int)register0x00000054 + -0xe0) = uVar2;
          *(int *)((int)register0x00000054 + -0xdc) = iVar10;
          FUN_00093f5c();
          puVar9 = (undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0xc);
          iVar5 = *(int *)((int)register0x00000054 + -0x98);
          uVar1 = *(uint *)((int)register0x00000054 + -0x94);
          iVar4 = *(int *)((int)register0x00000054 + -0x6c);
          iVar10 = *(int *)((int)register0x00000054 + -0x80) + 1;
        }
LAB_0045c15c:
        *(int *)((int)register0x00000054 + 0x10) = iVar4;
        *(int *)((int)register0x00000054 + 0x14) = iVar5;
        *(uint *)((int)register0x00000054 + 0x18) = uVar1;
        return;
      }
      *(undefined **)((int)register0x00000054 + -0xec) = PTR_DAT_0045c304;
      *(undefined **)((int)register0x00000054 + -0xe8) = PTR_DAT_0045c310;
      FUN_00095b00();
LAB_0045c2d4:
      *(undefined **)((int)register0x00000054 + -0xec) = PTR_DAT_0045c304;
      *(undefined **)((int)register0x00000054 + -0xe8) = PTR_DAT_0045c314;
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xf0);
      if ((bool)uVar13) {
        register0x00000054 = (BADSPACEBASE *)puVar12;
      }
    }
    unaff_lr = 0x45c2f4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*Printer).load_object1 @ 0045c318 (size 1880) */

/* WARNING: Removing unreachable block (ram,0x0045c898) */
/* WARNING: Removing unreachable block (ram,0x0045c6e0) */

void k3c_internal_pkg_printer___Printer__load_object1(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  undefined4 *extraout_r1_01;
  undefined4 *extraout_r1_02;
  undefined4 *extraout_r1_03;
  undefined4 *extraout_r1_04;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 *extraout_r2_02;
  undefined4 *extraout_r2_03;
  undefined4 extraout_r2_04;
  undefined4 extraout_r3;
  undefined4 uVar10;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  int extraout_r3_04;
  int iVar11;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar12;
  undefined4 unaff_lr;
  undefined1 uVar13;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x10)) {
      puVar12 = (undefined1 *)((int)register0x00000054 + -0x90);
      *(undefined4 *)((int)register0x00000054 + -0x90) = unaff_lr;
      FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x34),
                   *(int *)((int)register0x00000054 + 4),
                   *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28));
      iVar11 = DAT_0045ca74;
      *(int *)((int)register0x00000054 + -0x8c) = DAT_0045ca74;
      *(undefined4 *)((int)register0x00000054 + -0x88) = extraout_r3;
      *(undefined1 **)((int)register0x00000054 + -0x84) =
           (undefined1 *)((int)register0x00000054 + -0x34);
      FUN_00091764();
      while (puVar7 = *(undefined4 **)((int)register0x00000054 + -0x34), puVar7 != (undefined4 *)0x0
            ) {
        iVar2 = puVar7[1];
        uVar5 = (*(undefined4 **)((int)register0x00000054 + -0x30))[1];
        iVar11 = *(int *)((int)register0x00000054 + 0x10);
        if (iVar11 == iVar2) {
          *(undefined4 *)((int)register0x00000054 + -100) =
               **(undefined4 **)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x54) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = *puVar7;
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(int *)((int)register0x00000054 + -0x84) = iVar2;
          FUN_00018250();
          if (*(char *)((int)register0x00000054 + -0x80) != '\0') {
            *(undefined4 *)((int)register0x00000054 + 0x14) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + 0x18) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            return;
          }
        }
        *(undefined1 **)((int)register0x00000054 + -0x8c) =
             (undefined1 *)((int)register0x00000054 + -0x34);
        FUN_000919c8();
      }
      uVar6 = *(uint *)((int)register0x00000054 + 0x10);
      if ((int)uVar6 < 8) {
        cVar1 = '\0';
LAB_0045c418:
        if (cVar1 == '\0') {
          if ((int)uVar6 < 9) {
            cVar1 = '\0';
            goto LAB_0045c470;
          }
          uVar3 = uVar6 - 9;
          uVar13 = uVar6 == uVar3;
          if (uVar3 <= uVar6) {
            *(uint *)((int)register0x00000054 + -0x8c) =
                 *(int *)((int)register0x00000054 + 0xc) + uVar3;
            *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0045ca7c;
            *(undefined4 *)((int)register0x00000054 + -0x84) = 9;
            FUN_00018250();
            cVar1 = *(char *)((int)register0x00000054 + -0x80);
            uVar6 = *(uint *)((int)register0x00000054 + 0x10);
            goto LAB_0045c470;
          }
        }
        else {
          cVar1 = '\x01';
LAB_0045c470:
          if (cVar1 == '\0') {
            uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
            *(int *)((int)register0x00000054 + -0x8c) = DAT_0045ca74;
            *(undefined4 *)((int)register0x00000054 + -0x88) = uVar5;
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            *(uint *)((int)register0x00000054 + -0x80) = uVar6;
            FUN_00093560();
            if (*(char *)((int)register0x00000054 + -0x78) == '\0') {
              *(undefined4 *)((int)register0x00000054 + -0x8c) =
                   *(undefined4 *)((int)register0x00000054 + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x88) =
                   *(undefined4 *)((int)register0x00000054 + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0045ca80;
              *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x78) = 0xffffffff;
              FUN_0014f168();
              uVar13 = *(int *)((int)register0x00000054 + -0x70) == 0;
              if (!(bool)uVar13) {
                uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
                uVar10 = **(undefined4 **)((int)register0x00000054 + -0x74);
                uVar8 = (*(undefined4 **)((int)register0x00000054 + -0x74))[1];
                *(int *)((int)register0x00000054 + -0x8c) = DAT_0045ca74;
                *(undefined4 *)((int)register0x00000054 + -0x88) = uVar5;
                *(undefined4 *)((int)register0x00000054 + -0x84) = uVar10;
                *(undefined4 *)((int)register0x00000054 + -0x80) = uVar8;
                FUN_00093560();
                if (*(char *)((int)register0x00000054 + -0x78) == '\0') {
LAB_0045c9c0:
                  uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28);
                  *(int *)((int)register0x00000054 + -0x8c) = DAT_0045ca74;
                  *(undefined4 *)((int)register0x00000054 + -0x88) = uVar5;
                  *(undefined4 *)((int)register0x00000054 + -0x84) =
                       *(undefined4 *)((int)register0x00000054 + 0xc);
                  *(undefined4 *)((int)register0x00000054 + -0x80) =
                       *(undefined4 *)((int)register0x00000054 + 0x10);
                  FUN_00025f60();
                  uVar5 = (*(undefined4 **)((int)register0x00000054 + -0x7c))[1];
                  *(undefined4 *)((int)register0x00000054 + 0x14) =
                       **(undefined4 **)((int)register0x00000054 + -0x7c);
                  *(undefined4 *)((int)register0x00000054 + 0x18) = uVar5;
                  return;
                }
                *(undefined4 *)((int)register0x00000054 + -0x50) =
                     (*(undefined4 **)((int)register0x00000054 + -0x7c))[1];
                uVar5 = **(undefined4 **)((int)register0x00000054 + -0x7c);
                *(undefined4 *)((int)register0x00000054 + -0x60) = uVar5;
                *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0045ca90;
                FUN_00022cf8(uVar5);
                puVar7 = *(undefined4 **)((int)register0x00000054 + -0x88);
                puVar9 = *(undefined4 **)((int)register0x00000054 + 8);
                uVar5 = *puVar9;
                if (*DAT_0045ca94 != 0) {
                  FUN_0009db54();
                  *unaff_r8 = extraout_r3_02;
                  puVar7 = extraout_r1_02;
                  puVar9 = extraout_r2_02;
                  uVar5 = extraout_r3_02;
                }
                *puVar7 = uVar5;
                uVar5 = puVar9[1];
                if (*DAT_0045ca94 != 0) {
                  FUN_0009db54();
                  *unaff_r8 = extraout_r3_03;
                  puVar7 = extraout_r1_03;
                  puVar9 = extraout_r2_03;
                  uVar5 = extraout_r3_03;
                }
                puVar7[1] = uVar5;
                uVar5 = puVar9[2];
                if (*DAT_0045ca94 == 0) {
                  uVar8 = *(undefined4 *)((int)register0x00000054 + 0xc);
                }
                else {
                  FUN_0009db64();
                  *unaff_r8 = extraout_r2_04;
                  uVar8 = *(undefined4 *)((int)register0x00000054 + 0xc);
                  unaff_r8[1] = uVar8;
                  puVar7 = extraout_r1_04;
                  uVar5 = extraout_r2_04;
                }
                puVar7[2] = uVar5;
                puVar7[4] = *(undefined4 *)((int)register0x00000054 + 0x10);
                puVar7[3] = uVar8;
                iVar11 = DAT_0045ca98;
                uVar13 = *(int *)((int)register0x00000054 + -0x60) == DAT_0045ca98;
                if ((bool)uVar13) {
                  pcVar4 = (code *)**(undefined4 **)((int)register0x00000054 + -0x50);
                  *(undefined4 **)((int)register0x00000054 + -0x8c) = puVar7;
                  (*pcVar4)();
                  uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28);
                  *(undefined4 *)((int)register0x00000054 + -0x5c) =
                       *(undefined4 *)((int)register0x00000054 + -0x88);
                  *(undefined4 *)((int)register0x00000054 + -4) =
                       *(undefined4 *)((int)register0x00000054 + -0x84);
                  *(int *)((int)register0x00000054 + -0x8c) = DAT_0045ca74;
                  *(undefined4 *)((int)register0x00000054 + -0x88) = uVar5;
                  *(undefined4 *)((int)register0x00000054 + -0x84) =
                       *(undefined4 *)((int)register0x00000054 + 0xc);
                  *(undefined4 *)((int)register0x00000054 + -0x80) =
                       *(undefined4 *)((int)register0x00000054 + 0x10);
                  FUN_00093a08();
                  puVar7 = *(undefined4 **)((int)register0x00000054 + -0x7c);
                  *puVar7 = *(undefined4 *)((int)register0x00000054 + -0x5c);
                  if (*DAT_0045ca94 == 0) {
                    uVar5 = *(undefined4 *)((int)register0x00000054 + -4);
                  }
                  else {
                    puVar7 = (undefined4 *)FUN_0009db64();
                    uVar5 = *(undefined4 *)((int)register0x00000054 + -4);
                    *unaff_r8 = uVar5;
                    unaff_r8[1] = puVar7[1];
                  }
                  puVar7[1] = uVar5;
                  goto LAB_0045c9c0;
                }
                *(int *)((int)register0x00000054 + -0x8c) =
                     *(int *)((int)register0x00000054 + -0x60);
                *(int *)((int)register0x00000054 + -0x88) = DAT_0045ca98;
                *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0045ca9c;
                FUN_000209b4();
              }
              FUN_0009dbd4(0,0);
              iVar2 = extraout_r3_04;
            }
            else {
              *(undefined4 *)((int)register0x00000054 + -0x50) =
                   (*(undefined4 **)((int)register0x00000054 + -0x7c))[1];
              uVar5 = **(undefined4 **)((int)register0x00000054 + -0x7c);
              *(undefined4 *)((int)register0x00000054 + -0x60) = uVar5;
              *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0045ca90;
              FUN_00022cf8(uVar5);
              puVar7 = *(undefined4 **)((int)register0x00000054 + -0x88);
              puVar9 = *(undefined4 **)((int)register0x00000054 + 8);
              uVar5 = *puVar9;
              if (*DAT_0045ca94 != 0) {
                FUN_0009db54();
                *unaff_r8 = extraout_r3_00;
                puVar7 = extraout_r1;
                puVar9 = extraout_r2;
                uVar5 = extraout_r3_00;
              }
              *puVar7 = uVar5;
              uVar5 = puVar9[1];
              if (*DAT_0045ca94 != 0) {
                FUN_0009db54();
                *unaff_r8 = extraout_r3_01;
                puVar7 = extraout_r1_00;
                puVar9 = extraout_r2_00;
                uVar5 = extraout_r3_01;
              }
              puVar7[1] = uVar5;
              uVar5 = puVar9[2];
              if (*DAT_0045ca94 == 0) {
                uVar8 = *(undefined4 *)((int)register0x00000054 + 0xc);
              }
              else {
                FUN_0009db64();
                *unaff_r8 = extraout_r2_01;
                uVar8 = *(undefined4 *)((int)register0x00000054 + 0xc);
                unaff_r8[1] = uVar8;
                puVar7 = extraout_r1_01;
                uVar5 = extraout_r2_01;
              }
              puVar7[2] = uVar5;
              puVar7[4] = *(undefined4 *)((int)register0x00000054 + 0x10);
              puVar7[3] = uVar8;
              iVar2 = *(int *)((int)register0x00000054 + -0x60);
              uVar13 = 0;
              iVar11 = DAT_0045ca98;
              if (iVar2 == DAT_0045ca98) {
                pcVar4 = (code *)**(undefined4 **)((int)register0x00000054 + -0x50);
                *(undefined4 **)((int)register0x00000054 + -0x8c) = puVar7;
                (*pcVar4)();
                uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28);
                *(undefined4 *)((int)register0x00000054 + -0x5c) =
                     *(undefined4 *)((int)register0x00000054 + -0x88);
                *(undefined4 *)((int)register0x00000054 + -4) =
                     *(undefined4 *)((int)register0x00000054 + -0x84);
                *(int *)((int)register0x00000054 + -0x8c) = DAT_0045ca74;
                *(undefined4 *)((int)register0x00000054 + -0x88) = uVar5;
                *(undefined4 *)((int)register0x00000054 + -0x84) =
                     *(undefined4 *)((int)register0x00000054 + 0xc);
                *(undefined4 *)((int)register0x00000054 + -0x80) =
                     *(undefined4 *)((int)register0x00000054 + 0x10);
                FUN_00093a08();
                puVar7 = *(undefined4 **)((int)register0x00000054 + -0x7c);
                *puVar7 = *(undefined4 *)((int)register0x00000054 + -0x5c);
                if (*DAT_0045ca94 == 0) {
                  uVar5 = *(undefined4 *)((int)register0x00000054 + -4);
                }
                else {
                  puVar7 = (undefined4 *)FUN_0009db64();
                  uVar5 = *(undefined4 *)((int)register0x00000054 + -4);
                  *unaff_r8 = uVar5;
                  unaff_r8[1] = puVar7[1];
                }
                puVar7[1] = uVar5;
                goto LAB_0045c9c0;
              }
            }
            *(int *)((int)register0x00000054 + -0x8c) = iVar2;
            *(int *)((int)register0x00000054 + -0x88) = iVar11;
            *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0045ca9c;
            FUN_000209b4();
LAB_0045ca34:
            FUN_0009dbd4(0,0);
LAB_0045ca40:
            FUN_0009dbd4(0,0);
          }
          else {
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            *(uint *)((int)register0x00000054 + -0x88) = uVar6;
            *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0045ca80;
            *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x78) = 0xffffffff;
            FUN_0014f168();
            uVar13 = *(int *)((int)register0x00000054 + -0x70) == 0;
            if (!(bool)uVar13) {
              uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
              uVar10 = **(undefined4 **)((int)register0x00000054 + -0x74);
              uVar8 = (*(undefined4 **)((int)register0x00000054 + -0x74))[1];
              *(int *)((int)register0x00000054 + -0x8c) = DAT_0045ca74;
              *(undefined4 *)((int)register0x00000054 + -0x88) = uVar5;
              *(undefined4 *)((int)register0x00000054 + -0x84) = uVar10;
              *(undefined4 *)((int)register0x00000054 + -0x80) = uVar8;
              FUN_00093560();
              if (*(char *)((int)register0x00000054 + -0x78) != '\0') {
LAB_0045c5bc:
                *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x8c) =
                     *(undefined4 *)((int)register0x00000054 + 0xc);
                *(undefined4 *)((int)register0x00000054 + -0x88) =
                     *(undefined4 *)((int)register0x00000054 + 0x10);
                FUN_0008f77c();
                *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_0045ca84;
                *(undefined4 *)((int)register0x00000054 + -0x48) =
                     *(undefined4 *)((int)register0x00000054 + -0x84);
                *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0045ca8c;
                *(undefined4 *)((int)register0x00000054 + -0x88) = 0x2c;
                *(undefined1 **)((int)register0x00000054 + -0x84) =
                     (undefined1 *)((int)register0x00000054 + -0x4c);
                *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
                *(undefined4 *)((int)register0x00000054 + -0x7c) = 1;
                k3c_internal_pkg_logger_Debugf();
                *(undefined4 *)((int)register0x00000054 + -0x8c) =
                     *(undefined4 *)((int)register0x00000054 + 0xc);
                *(undefined4 *)((int)register0x00000054 + -0x88) =
                     *(undefined4 *)((int)register0x00000054 + 0x10);
                *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0045ca80;
                *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
                *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x78) = 0xffffffff;
                FUN_0014f168();
                uVar13 = *(int *)((int)register0x00000054 + -0x70) == 0;
                if (!(bool)uVar13) {
                  uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
                  uVar10 = **(undefined4 **)((int)register0x00000054 + -0x74);
                  uVar8 = (*(undefined4 **)((int)register0x00000054 + -0x74))[1];
                  *(int *)((int)register0x00000054 + -0x8c) = DAT_0045ca74;
                  *(undefined4 *)((int)register0x00000054 + -0x88) = uVar5;
                  *(undefined4 *)((int)register0x00000054 + -0x84) = uVar10;
                  *(undefined4 *)((int)register0x00000054 + -0x80) = uVar8;
                  FUN_00025f60();
                  uVar5 = (*(undefined4 **)((int)register0x00000054 + -0x7c))[1];
                  *(undefined4 *)((int)register0x00000054 + 0x14) =
                       **(undefined4 **)((int)register0x00000054 + -0x7c);
                  *(undefined4 *)((int)register0x00000054 + 0x18) = uVar5;
                  return;
                }
                goto LAB_0045ca34;
              }
              *(undefined4 *)((int)register0x00000054 + -0x8c) =
                   *(undefined4 *)((int)register0x00000054 + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x88) =
                   *(undefined4 *)((int)register0x00000054 + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0045ca80;
              *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x78) = 0xffffffff;
              FUN_0014f168();
              *(undefined4 *)((int)register0x00000054 + -0x68) =
                   *(undefined4 *)((int)register0x00000054 + -0x70);
              *(undefined4 *)((int)register0x00000054 + -0x58) =
                   *(undefined4 *)((int)register0x00000054 + -0x74);
              FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x44));
              *(undefined4 *)((int)register0x00000054 + -0x8c) =
                   *(undefined4 *)((int)register0x00000054 + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x88) =
                   *(undefined4 *)((int)register0x00000054 + 0x10);
              FUN_0008f77c();
              *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_0045ca84;
              *(undefined4 *)((int)register0x00000054 + -0x40) =
                   *(undefined4 *)((int)register0x00000054 + -0x84);
              uVar13 = *(int *)((int)register0x00000054 + -0x68) == 0;
              if (!(bool)uVar13) {
                uVar5 = (*(undefined4 **)((int)register0x00000054 + -0x58))[1];
                *(undefined4 *)((int)register0x00000054 + -0x8c) =
                     **(undefined4 **)((int)register0x00000054 + -0x58);
                *(undefined4 *)((int)register0x00000054 + -0x88) = uVar5;
                FUN_0008f77c();
                *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_0045ca84;
                *(undefined4 *)((int)register0x00000054 + -0x38) =
                     *(undefined4 *)((int)register0x00000054 + -0x84);
                *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0045ca88;
                *(undefined4 *)((int)register0x00000054 + -0x88) = 0x25;
                *(undefined1 **)((int)register0x00000054 + -0x84) =
                     (undefined1 *)((int)register0x00000054 + -0x44);
                *(undefined4 *)((int)register0x00000054 + -0x80) = 2;
                *(undefined4 *)((int)register0x00000054 + -0x7c) = 2;
                k3c_internal_pkg_logger_Errorf();
                goto LAB_0045c5bc;
              }
              goto LAB_0045ca40;
            }
          }
          FUN_0009dbd4(0,0);
        }
        FUN_0009dc34();
      }
      else {
        uVar3 = uVar6 - 8;
        uVar13 = uVar6 == uVar3;
        if (uVar3 <= uVar6) {
          *(uint *)((int)register0x00000054 + -0x8c) =
               *(int *)((int)register0x00000054 + 0xc) + uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_0045ca78;
          *(undefined4 *)((int)register0x00000054 + -0x84) = 8;
          FUN_00018250();
          cVar1 = *(char *)((int)register0x00000054 + -0x80);
          uVar6 = *(uint *)((int)register0x00000054 + 0x10);
          goto LAB_0045c418;
        }
      }
      param_1 = FUN_0009dc34();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x90);
      if ((bool)uVar13) {
        register0x00000054 = (BADSPACEBASE *)puVar12;
      }
    }
    unaff_lr = 0x45ca6c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*Printer).Load_object @ 0045caa0 (size 652) */

void k3c_internal_pkg_printer___Printer__Load_object(void)

{
  undefined4 *puVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 uVar2;
  undefined4 extraout_r3_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int in_stack_ffffffcc;
  undefined4 uVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x45cd28;
    FUN_0009bf64();
  }
  uVar2 = in_stack_0000000c;
  k3c_internal_pkg_printer___Printer__load_object1();
  if (in_stack_ffffffcc == 0) {
    if (in_stack_00000014 == DAT_0045cd30) {
      local_8 = 0;
      local_4 = 0;
      FUN_0008f77c();
      local_8 = DAT_0045cd34;
      uVar4 = 0x1a;
      puVar5 = &local_8;
      uVar6 = 1;
      uVar7 = 1;
      uVar3 = DAT_0045cd38;
      local_4 = uVar2;
      FUN_0013b72c();
      puVar1 = (undefined4 *)*in_stack_00000004;
      puVar1[1] = local_2c;
      uVar2 = extraout_r3;
      if (*DAT_0045cd3c != 0) {
        puVar1 = (undefined4 *)FUN_0009db64();
        *unaff_r8 = extraout_r2;
        uVar2 = *puVar1;
        unaff_r8[1] = uVar2;
        local_30 = extraout_r2;
      }
      *puVar1 = local_30;
      FUN_0009defc(0,&local_20,local_30,uVar2,unaff_lr,uVar3,uVar4,puVar5,uVar6,uVar7);
      local_20 = DAT_0045cd34;
      local_1c = DAT_0045cd40;
      FUN_0008f77c();
      local_18 = DAT_0045cd34;
      local_10 = DAT_0045cd34;
      local_c = DAT_0045cd44;
      local_14 = puVar5;
      k3c_internal_pkg_logger_Info();
    }
    else {
      if (in_stack_00000014 != DAT_0045cd48) {
        return;
      }
      local_8 = 0;
      local_4 = 0;
      FUN_0008f77c();
      local_8 = DAT_0045cd34;
      uVar4 = 0x1a;
      puVar5 = &local_8;
      uVar6 = 1;
      uVar7 = 1;
      uVar3 = DAT_0045cd38;
      local_4 = uVar2;
      FUN_0013b72c();
      puVar1 = (undefined4 *)*in_stack_00000004;
      puVar1[1] = local_2c;
      uVar2 = extraout_r3_00;
      if (*DAT_0045cd3c != 0) {
        puVar1 = (undefined4 *)FUN_0009db64();
        *unaff_r8 = extraout_r2_00;
        uVar2 = *puVar1;
        unaff_r8[1] = uVar2;
        local_30 = extraout_r2_00;
      }
      *puVar1 = local_30;
      FUN_0009defc(0,&local_20,local_30,uVar2,unaff_lr,uVar3,uVar4,puVar5,uVar6,uVar7);
      local_20 = DAT_0045cd34;
      local_1c = DAT_0045cd4c;
      FUN_0008f77c();
      local_18 = DAT_0045cd34;
      local_10 = DAT_0045cd34;
      local_c = DAT_0045cd50;
      local_14 = puVar5;
      k3c_internal_pkg_logger_Info();
    }
  }
  return;
}



/* k3c/internal/pkg/printer.(*Printer).Run @ 0045cd54 (size 1156) */

void k3c_internal_pkg_printer___Printer__Run(void)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *unaff_r8;
  int unaff_r10;
  undefined8 uVar5;
  int in_stack_00000004;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_7c;
  double local_74;
  int local_6c;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined1 auStack_14 [20];
  
  while (&local_24 <= *(undefined ***)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  uVar2 = FUN_001160a8();
  uVar2 = FUN_0009e2f0(uVar2,&local_a0,auStack_14);
  FUN_0009e2f0(uVar2,auStack_14,&local_50);
  if ((local_4c & 0x80000000) != 0) {
    uVar4 = (local_50 & 0x7fffffff) >> 0x1e | (local_50 >> 0x1f | local_4c << 1) << 1;
    local_48 = uVar4 + DAT_0045d1dc;
    local_44 = ((local_4c & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar4,DAT_0045d1dc);
  }
  local_a0 = (ulonglong)DAT_0045d1e0 * (ulonglong)local_48 +
             (CONCAT44(local_44 * DAT_0045d1e0,local_50) & 0xffffffff3fffffff) +
             CONCAT44(DAT_0045d1e8,DAT_0045d1e4);
  FUN_0008b910();
  local_74 = local_98 / *(double *)PTR_DAT_0045d1ec;
  k3c_internal_pkg_chelper__Cfunc_get_monotonic(in_stack_00000004);
  local_68 = local_a0;
  uVar2 = FUN_001160a8();
  uVar2 = FUN_0009e2f0(uVar2,&local_a0,auStack_14);
  FUN_0009e2f0(uVar2,auStack_14,&local_a0);
  FUN_00101110();
  FUN_0009defc(0,&local_2c,local_88,local_8c);
  FUN_0008f77c();
  local_2c = PTR_DAT_0045d1f0;
  local_28 = (undefined *)local_98;
  local_58 = local_74;
  dVar1 = local_58;
  local_58._0_4_ = SUB84(local_74,0);
  local_58._4_4_ = (undefined4)((ulonglong)local_74 >> 0x20);
  local_a0._0_4_ = (undefined **)(undefined4)local_58;
  local_a0._4_4_ = (undefined4 *)local_58._4_4_;
  local_58 = dVar1;
  FUN_0008f6c0();
  local_24 = PTR_DAT_0045d1f4;
  local_20 = (undefined *)local_98;
  local_60 = local_68;
  local_a0 = local_68;
  FUN_0008f6c0();
  local_1c = PTR_DAT_0045d1f4;
  local_18 = (undefined *)local_98;
  local_a0._0_4_ = (undefined **)PTR_DAT_0045d1f8;
  local_a0._4_4_ = (undefined4 *)0x1f;
  local_98 = (double)CONCAT44(3,&local_2c);
  local_90 = 3;
  k3c_internal_pkg_logger_Infof();
  local_a0._0_4_ = *(undefined ***)(in_stack_00000004 + 0xc);
  k3c_internal_pkg_reactor___Reactor__Run();
  iVar3 = in_stack_00000004;
  if (local_a0._4_4_ != (undefined4 *)0x0) {
    local_34 = (undefined *)0x0;
    local_30 = (undefined *)0x0;
    local_a0._0_4_ = (undefined **)PTR_DAT_0045d1fc;
    local_a0._4_4_ = (undefined4 *)0x1e;
    FUN_0008f77c();
    local_34 = PTR_DAT_0045d1f0;
    local_30 = (undefined *)local_98;
    local_a0._0_4_ = &local_34;
    local_a0._4_4_ = (undefined4 *)0x1;
    local_98 = (double)CONCAT44(local_98._4_4_,1);
    k3c_internal_pkg_logger_Error();
    local_3c = *(undefined4 *)(in_stack_00000004 + 0xc);
    local_a0._0_4_ = (undefined **)PTR_DAT_0045d200;
    FUN_00022cf8();
    *local_a0._4_4_ = PTR_k3c_internal_pkg_printer___Printer__Run_func1_0045d204;
    if (*(int *)PTR_DAT_0045d208 != 0) {
      local_a0._4_4_ = (undefined4 *)FUN_0009db54();
      *unaff_r8 = in_stack_00000004;
    }
    local_a0._4_4_[1] = in_stack_00000004;
    local_a0._4_4_[3] = 0x1e;
    local_a0._4_4_[2] = PTR_DAT_0045d1fc;
    local_a0._0_4_ = (undefined **)local_3c;
    local_98 = 0.0;
    k3c_internal_pkg_reactor_NewReactorCallback();
    local_a0._0_4_ = *(undefined ***)(in_stack_00000004 + 0xc);
    k3c_internal_pkg_reactor___Reactor__Run();
    if (local_a0._4_4_ != (undefined4 *)0x0) {
      local_34 = PTR_DAT_0045d1f0;
      local_30 = PTR_DAT_0045d20c;
      local_a0._0_4_ = &local_34;
      local_a0._4_4_ = (undefined4 *)0x1;
      local_98 = (double)CONCAT44(local_98._4_4_,1);
      k3c_internal_pkg_logger_Error();
      *(undefined4 *)(in_stack_00000004 + 0x20) = 10;
      if (*(int *)PTR_DAT_0045d208 != 0) {
        uVar5 = FUN_0009db54(*(undefined4 *)(in_stack_00000004 + 0x1c));
        iVar3 = (int)((ulonglong)uVar5 >> 0x20);
        *unaff_r8 = (int)uVar5;
      }
      *(undefined **)(iVar3 + 0x1c) = PTR_s_error_exitgcode_moveheater_bedfo_00823504_0xec2_0045d210
      ;
    }
  }
  local_6c = *(int *)(iVar3 + 0x20);
  local_a0._0_4_ = *(undefined ***)(iVar3 + 0x1c);
  local_38 = (undefined **)local_a0;
  if (local_6c == 0x10) {
    local_a0._4_4_ = (undefined4 *)PTR_s_firmware_restartPrinter_is_ready_008262d0_0x394a_0045d214;
    local_98 = (double)CONCAT44(local_98._4_4_,0x10);
    FUN_00018250();
    if (local_98._4_1_ != '\0') {
      local_a0._0_4_ = (undefined **)in_stack_00000004;
      local_a0._4_4_ = (undefined4 *)PTR_DAT_0045d218;
      local_98 = 1.18575755001899e-322;
      local_90 = 0;
      local_8c = 0;
      k3c_internal_pkg_printer___Printer__Send_event();
      if (local_7c != 0) {
        local_34 = PTR_DAT_0045d1f0;
        local_30 = PTR_DAT_0045d228;
        local_a0._0_4_ = &local_34;
        local_a0._4_4_ = (undefined4 *)0x1;
        local_98 = (double)CONCAT44(local_98._4_4_,1);
        k3c_internal_pkg_logger_Error();
        return;
      }
    }
  }
  local_34 = PTR_DAT_0045d1f0;
  local_30 = PTR_DAT_0045d21c;
  local_a0._0_4_ = &local_34;
  local_a0._4_4_ = (undefined4 *)0x1;
  local_98 = (double)CONCAT44(local_98._4_4_,1);
  k3c_internal_pkg_logger_Error();
  local_a0._0_4_ = (undefined **)in_stack_00000004;
  local_a0._4_4_ = (undefined4 *)PTR_DAT_0045d220;
  local_98 = 8.89318162514244e-323;
  local_90 = 0;
  local_8c = 0;
  k3c_internal_pkg_printer___Printer__Send_event();
  if (local_7c != 0) {
    local_34 = PTR_DAT_0045d1f0;
    local_30 = PTR_DAT_0045d224;
    local_a0._0_4_ = &local_34;
    local_a0._4_4_ = (undefined4 *)0x1;
    local_98 = (double)CONCAT44(local_98._4_4_,1);
    k3c_internal_pkg_logger_Error();
    return;
  }
  return;
}



/* k3c/internal/pkg/printer.(*Printer).Run.func1 @ 0045d22c (size 76) */

void k3c_internal_pkg_printer___Printer__Run_func1(void)

{
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  k3c_internal_pkg_printer___Printer__Invoke_shutdown();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).Set_rollover_info @ 0045d278 (size 120) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___Printer__Set_rollover_info(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  char in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45d2ec;
    FUN_0009bf64();
  }
  if (in_stack_00000018 != '\0') {
    FUN_0008f77c();
    k3c_internal_pkg_logger_Debug();
  }
                    /* WARNING: Could not recover jumptable at 0x0045d2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).Invoke_shutdown @ 0045d2f8 (size 860) */

/* WARNING: Removing unreachable block (ram,0x0045d3b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___Printer__Invoke_shutdown(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 *local_44;
  int local_40;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (*(char *)(in_stack_00000004 + 0x18) == '\0') {
    *(undefined1 *)(in_stack_00000004 + 0x18) = 1;
    local_8 = 0;
    local_4 = 0;
    FUN_0008f77c();
    local_8 = DAT_0045d658;
    local_4 = local_40;
    FUN_0013b72c();
    iVar1 = DAT_0045d660;
    local_40 = DAT_0045d660;
    internal_stringslite_Index();
    local_44 = local_30;
    k3c_common_utils_sys_GetMcuType();
    if (iVar1 == 1) {
      local_30 = (undefined4 *)&DAT_0000001b;
      local_34 = DAT_0045d664;
    }
    else if (iVar1 == 2) {
      local_30 = (undefined4 *)&DAT_00000019;
      local_34 = DAT_0045d668;
    }
    else {
      local_8 = DAT_0045d658;
      local_4 = DAT_0045d66c;
      local_44 = (undefined4 *)0x1;
      local_40 = 1;
      k3c_internal_pkg_logger_Error();
    }
    FUN_00022cf8();
    *local_44 = DAT_0045d674;
    local_44[2] = 0x13;
    local_44[1] = DAT_0045d678;
    local_44[4] = local_30;
    if (*DAT_0045d67c != 0) {
      local_44 = (undefined4 *)FUN_0009db54();
      *unaff_r8 = local_34;
    }
    local_44[3] = local_34;
    FUN_00062dd0();
    FUN_0009df04(0,&local_18);
    local_18 = DAT_0045d658;
    local_14 = DAT_0045d680;
    FUN_0008f77c();
    local_10 = DAT_0045d658;
    local_c = local_40;
    k3c_internal_pkg_logger_Error();
    k3c_internal_pkg_printer___Printer___set_state();
    FUN_00025f60();
    iVar2 = _DAT_00000005;
    iVar1 = iRam00000001;
    for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
      (*(code *)**(undefined4 **)(iVar1 + iVar3 * 4))();
      local_8 = DAT_0045d658;
      local_4 = DAT_0045d690;
      k3c_internal_pkg_logger_Error();
    }
    return;
  }
  local_8 = 0;
  local_4 = 0;
  FUN_0008f77c();
  local_8 = DAT_0045d658;
  k3c_internal_pkg_logger_Debugf();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).Invoke_async_shutdown @ 0045d700 (size 148) */

void k3c_internal_pkg_printer___Printer__Invoke_async_shutdown(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *local_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *local_c = DAT_0045d79c;
  if (*DAT_0045d7a0 != 0) {
    local_c = (undefined4 *)FUN_0009db64();
    *unaff_r8 = in_stack_00000004;
    unaff_r8[1] = in_stack_00000008;
  }
  local_c[1] = in_stack_00000004;
  local_c[3] = in_stack_0000000c;
  local_c[2] = in_stack_00000008;
  k3c_internal_pkg_reactor___Reactor__Register_async_callback();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).Invoke_async_shutdown.func1 @ 0045d7a4 (size 76) */

void k3c_internal_pkg_printer___Printer__Invoke_async_shutdown_func1(void)

{
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  k3c_internal_pkg_printer___Printer__Invoke_shutdown();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).Register_event_handler @ 0045d7f0 (size 340) */

void k3c_internal_pkg_printer___Printer__Register_event_handler(void)

{
  uint uVar1;
  uint uVar2;
  undefined *extraout_r2;
  undefined *puVar3;
  int iVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *puStack_20;
  undefined *puStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45d940;
    FUN_0009bf64();
  }
  FUN_00093560();
  iVar4 = puStack_20[1];
  uVar1 = puStack_20[2];
  puVar3 = (undefined *)*puStack_20;
  if ((char)puStack_1c == '\0') {
    uVar1 = 0;
    iVar4 = 0;
    puVar3 = PTR_DAT_0045d94c;
  }
  uVar2 = iVar4 + 1U;
  if (uVar1 < iVar4 + 1U) {
    puStack_20 = (undefined4 *)PTR_DAT_0045d950;
    FUN_000987f4();
    uVar1 = uStack_14;
    uVar2 = uStack_18;
    puVar3 = puStack_1c;
  }
  if (*(int *)PTR_DAT_0045d954 != 0) {
    FUN_0009db64();
    *unaff_r8 = in_stack_00000010;
    unaff_r8[1] = *(undefined4 *)(extraout_r2 + (uVar2 - 1) * 4);
    puVar3 = extraout_r2;
  }
  *(undefined4 *)(puVar3 + (uVar2 - 1) * 4) = in_stack_00000010;
  FUN_00093a08();
  puStack_20[1] = uVar2;
  puStack_20[2] = uVar1;
  if (*(int *)PTR_DAT_0045d954 != 0) {
    puStack_20 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar3;
    unaff_r8[1] = *puStack_20;
  }
  *puStack_20 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x0045d934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Printer).Send_event @ 0045d958 (size 428) */

void k3c_internal_pkg_printer___Printer__Send_event(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *extraout_r1;
  int iVar5;
  uint extraout_r2;
  uint uVar6;
  uint extraout_r3;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  int local_38;
  int *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_38 = in_stack_0000000c;
  FUN_00093560();
  if ((char)local_30 != '\0') {
    iVar3 = *local_34;
    iVar1 = local_34[1];
    uVar6 = 0;
    uVar8 = 0;
    iVar7 = DAT_0045db0c;
    for (iVar5 = 0; piVar4 = local_34, iVar5 < iVar1; iVar5 = iVar5 + 1) {
      (*(code *)**(undefined4 **)(iVar3 + iVar5 * 4))();
      uVar2 = 0;
      if (local_38 != 0) {
        uVar2 = *(undefined4 *)(local_38 + 4);
      }
      uVar8 = uVar8 + 1;
      if (uVar6 < uVar8) {
        local_38 = 1;
        local_34 = DAT_0045db10;
        FUN_000987f4();
        uVar8 = local_2c;
        uVar6 = local_28;
        iVar7 = local_30;
      }
      *(undefined4 *)(iVar7 + (uVar8 - 1) * 8) = uVar2;
      iVar9 = iVar7 + (uVar8 - 1) * 8;
      if (*DAT_0045db14 != 0) {
        FUN_0009db64();
        *unaff_r8 = extraout_r1;
        unaff_r8[1] = *(undefined4 *)(iVar9 + 4);
        piVar4 = extraout_r1;
        uVar8 = extraout_r2;
        uVar6 = extraout_r3;
      }
      *(int **)(iVar9 + 4) = piVar4;
    }
  }
  return;
}



/* k3c/internal/pkg/printer.(*Printer).Request_exit @ 0045db18 (size 116) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___Printer__Request_exit(void)

{
  int iVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45db88;
    FUN_0009bf64();
  }
  iVar1 = in_stack_00000004;
  if (*(int *)(in_stack_00000004 + 0x20) == 0) {
    *(undefined4 *)(in_stack_00000004 + 0x20) = in_stack_0000000c;
    if (*_UNK_0045db90 != 0) {
      iVar1 = FUN_0009db64();
      *unaff_r8 = in_stack_00000008;
      unaff_r8[1] = *(undefined4 *)(iVar1 + 0x1c);
    }
    *(undefined4 *)(iVar1 + 0x1c) = in_stack_00000008;
  }
  **(undefined1 **)(iVar1 + 0xc) = 0;
                    /* WARNING: Could not recover jumptable at 0x0045db7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*RawConfigParser).parseContent.func1 @ 0045db94 (size 80) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___RawConfigParser__parseContent_func1(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  int iStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45dbe0;
    FUN_0009bf64();
  }
  FUN_0014ee4c();
  in_stack_00000008 = -1 < iStack_4;
                    /* WARNING: Could not recover jumptable at 0x0045dbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/printer.(*Section).Get @ 0045dbec (size 148) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___Section__Get(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x14);
      }
      bVar4 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar4) {
        uVar1 = **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x14) = _UNK_0045dc84;
        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00025f60();
        uVar1 = (*(undefined4 **)((int)register0x00000054 + -4))[1];
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             **(undefined4 **)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + 0x14) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0045dc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x18))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x45dc60;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*Section).Has @ 0045dc88 (size 136) */

void k3c_internal_pkg_printer___Section__Has(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x18);
      }
      bVar4 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar4) {
        uVar1 = **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_0045dd14;
        *(undefined4 *)((int)register0x00000054 + -0x14) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00093560();
        *(undefined1 *)((int)register0x00000054 + 0x10) =
             *(undefined1 *)((int)register0x00000054 + -4);
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x45dcf0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/printer.(*Section).Set @ 0045dd18 (size 188) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_printer___Section__Set(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      piVar3 = *(int **)(unaff_r10 + 0x10);
      if ((piVar3 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar3)) {
        *piVar3 = (int)((int)register0x00000054 + -0x14);
      }
      bVar5 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar5) {
        uVar1 = **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x14) = _UNK_0045ddd8;
        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00093a08();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -4);
        *puVar2 = *(undefined4 *)((int)register0x00000054 + 0x10);
        if (*_UNK_0045dddc == 0) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + 0x14);
        }
        else {
          puVar2 = (undefined4 *)FUN_0009db64();
          uVar1 = *(undefined4 *)((int)register0x00000054 + 0x14);
          *unaff_r8 = uVar1;
          unaff_r8[1] = puVar2[1];
        }
        puVar2[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0045dda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x18))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x45ddb4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



