// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/pins   functions: 13
/* k3c/internal/pkg/pins.NewPrinterDupPinOverride @ 00481068 (size 368) */

void k3c_internal_pkg_pins_NewPrinterDupPinOverride(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *extraout_r1;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r3;
  undefined4 uVar6;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  bool bVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x48) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004811dc;
      FUN_00022cf8();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x40);
      uVar5 = **(undefined4 **)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_004811e0 != 0) {
        FUN_0009db54();
        *unaff_r8 = extraout_r3;
        puVar2 = extraout_r1;
        uVar5 = extraout_r3;
      }
      *(undefined4 **)((int)register0x00000054 + -0xc) = puVar2;
      *puVar2 = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x44) = uVar5;
      *(undefined **)((int)register0x00000054 + -0x40) =
           PTR_s_pinsM106tcp_initbusy1a86baud_to_M_00820821_0x231_004811e4;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = 4;
      *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004811e8;
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_004811ec;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      bVar8 = *(undefined **)((int)register0x00000054 + -0x30) == PTR_DAT_004811f0;
      if (bVar8) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004811ec;
        *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
        FUN_0008f820();
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x40) =
             PTR_s_pinsM106tcp_initbusy1a86baud_to_M_00820821_0x231_004811e4;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 4;
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004811f4;
        *(undefined4 *)((int)register0x00000054 + -0x34) = uVar5;
        *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004811f8;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x24) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getlist();
        iVar1 = *(int *)((int)register0x00000054 + -0x20);
        *(int *)((int)register0x00000054 + -8) = iVar1;
        iVar3 = *(int *)((int)register0x00000054 + -0x1c);
        *(int *)((int)register0x00000054 + -0x10) = iVar3;
        iVar4 = 0;
        while (iVar4 < iVar3) {
          *(int *)((int)register0x00000054 + -0x14) = iVar4;
          uVar5 = *(undefined4 *)(iVar1 + iVar4 * 8);
          uVar6 = *(undefined4 *)(iVar1 + iVar4 * 8 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -4);
          *(undefined4 *)((int)register0x00000054 + -0x40) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar6;
          k3c_internal_pkg_pins___PrinterPins__allow_multi_use_pin();
          iVar1 = *(int *)((int)register0x00000054 + -8);
          iVar3 = *(int *)((int)register0x00000054 + -0x10);
          iVar4 = *(int *)((int)register0x00000054 + -0x14) + 1;
        }
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x004811b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x48))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x44) =
           *(undefined **)((int)register0x00000054 + -0x30);
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_004811f0;
      *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_004811fc;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x48);
      if (bVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x4811d4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/pins.Load_config_PrinterDupPinOverride @ 00481200 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_pins_Load_config_PrinterDupPinOverride(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x481238;
    FUN_0009bf64();
  }
  k3c_internal_pkg_pins_NewPrinterDupPinOverride();
  in_stack_00000008 = _UNK_00481240;
                    /* WARNING: Could not recover jumptable at 0x0048122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/pins.(*PinResolver).Reserve_pin @ 00481244 (size 520) */

void k3c_internal_pkg_pins___PinResolver__Reserve_pin(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  int local_34;
  char local_30;
  undefined4 *local_2c;
  char local_28;
  undefined *local_20;
  int local_1c;
  undefined *local_18;
  int local_14;
  undefined *local_10;
  int local_c;
  undefined *local_8;
  undefined **local_4;
  
  while (uVar1 = in_stack_0000000c, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_34 = in_stack_00000008;
  FUN_00093560();
  if (local_28 != '\0') {
    iVar2 = local_2c[1];
    if (in_stack_00000014 == iVar2) {
      FUN_00018250();
      local_30 = (char)uVar1;
      local_34 = iVar2;
      if (local_30 != '\0') goto LAB_004813d8;
    }
    FUN_0009defc(0,&local_20);
    FUN_0008f77c();
    iVar2 = in_stack_00000008;
    local_20 = PTR_DAT_00481454;
    local_1c = local_34;
    FUN_00025f60();
    FUN_0008f77c();
    local_18 = PTR_DAT_00481454;
    local_14 = iVar2;
    FUN_0008f77c();
    local_10 = PTR_DAT_00481454;
    local_c = iVar2;
    local_2c = (undefined4 *)0x3;
    FUN_0013b72c();
    local_8 = (undefined *)0x0;
    local_4 = (undefined **)0x0;
    FUN_0008f77c();
    local_8 = PTR_DAT_00481454;
    local_4 = &local_20;
    k3c_internal_pkg_logger_Error();
  }
LAB_004813d8:
  FUN_00093a08();
  local_2c[1] = in_stack_00000014;
  if (*(int *)PTR_DAT_0048145c != 0) {
    local_2c = (undefined4 *)FUN_0009db64();
    *unaff_r8 = in_stack_00000010;
    unaff_r8[1] = *local_2c;
  }
  *local_2c = in_stack_00000010;
  return;
}



/* k3c/internal/pkg/pins.(*PinResolver).Update_command @ 00481460 (size 68) */

void k3c_internal_pkg_pins___PinResolver__Update_command(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4814a0;
    FUN_0009bf64();
  }
  FUN_00151ce4();
                    /* WARNING: Could not recover jumptable at 0x00481494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/pins.(*PrinterPins).Parse_pin @ 004814a4 (size 2124) */

/* WARNING: Removing unreachable block (ram,0x00481580) */
/* WARNING: Removing unreachable block (ram,0x00481714) */

void k3c_internal_pkg_pins___PrinterPins__Parse_pin(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar12;
  undefined4 unaff_lr;
  undefined1 uVar13;
  longlong lVar14;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -4)) {
      puVar12 = (undefined1 *)((int)register0x00000054 + -0x84);
      *(undefined4 *)((int)register0x00000054 + -0x84) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x80) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x7c) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00151ce4();
      iVar2 = *(int *)((int)register0x00000054 + -0x78);
      *(int *)((int)register0x00000054 + -0x30) = iVar2;
      iVar4 = *(int *)((int)register0x00000054 + -0x74);
      *(int *)((int)register0x00000054 + -0x4c) = iVar4;
      cVar7 = *(char *)((int)register0x00000054 + 0x11);
      if (cVar7 == '\0') {
        cVar8 = '\0';
      }
      else {
        if (iVar4 < 1) {
          cVar8 = '\0';
        }
        else {
          *(int *)((int)register0x00000054 + -0x80) = iVar2;
          *(undefined **)((int)register0x00000054 + -0x7c) = PTR_DAT_00481cf0;
          *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
          FUN_00018250();
          cVar8 = *(char *)((int)register0x00000054 + -0x74);
          iVar4 = *(int *)((int)register0x00000054 + -0x4c);
          cVar7 = *(char *)((int)register0x00000054 + 0x11);
          iVar2 = *(int *)((int)register0x00000054 + -0x30);
        }
        if (cVar8 == '\0') {
          if (iVar4 < 1) {
            cVar8 = '\0';
          }
          else {
            *(int *)((int)register0x00000054 + -0x80) = iVar2;
            *(undefined **)((int)register0x00000054 + -0x7c) = PTR_DAT_00481cf4;
            *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
            FUN_00018250();
            cVar8 = *(char *)((int)register0x00000054 + -0x74);
            iVar4 = *(int *)((int)register0x00000054 + -0x4c);
            cVar7 = *(char *)((int)register0x00000054 + 0x11);
            iVar2 = *(int *)((int)register0x00000054 + -0x30);
          }
        }
        else {
          cVar8 = '\x01';
        }
      }
      if (cVar8 == '\0') {
        uVar9 = 0;
LAB_00481620:
        *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar9;
        if (*(char *)((int)register0x00000054 + 0x10) == '\0') {
          cVar7 = '\0';
        }
        else if (iVar4 < 1) {
          cVar7 = '\0';
        }
        else {
          *(int *)((int)register0x00000054 + -0x40) = iVar4;
          *(int *)((int)register0x00000054 + -4) = iVar2;
          *(int *)((int)register0x00000054 + -0x80) = iVar2;
          *(undefined **)((int)register0x00000054 + -0x7c) = PTR_DAT_00481cf8;
          *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
          FUN_00018250(iVar2,1,cVar7);
          cVar7 = *(char *)((int)register0x00000054 + -0x74);
          iVar4 = *(int *)((int)register0x00000054 + -0x40);
          iVar2 = *(int *)((int)register0x00000054 + -4);
        }
        if (cVar7 == '\0') {
          uVar9 = 0;
LAB_004816c8:
          *(int *)((int)register0x00000054 + -0x4c) = iVar4;
          *(int *)((int)register0x00000054 + -0x30) = iVar2;
          *(undefined4 *)((int)register0x00000054 + -0x54) = uVar9;
          *(int *)((int)register0x00000054 + -0x80) = iVar2;
          *(int *)((int)register0x00000054 + -0x7c) = iVar4;
          *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_00481cfc;
          *(undefined4 *)((int)register0x00000054 + -0x74) = 1;
          internal_stringslite_Index();
          if (*(int *)((int)register0x00000054 + -0x70) == -1) {
            uVar11 = 3;
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x4c);
            uVar9 = *(undefined4 *)((int)register0x00000054 + -0x30);
            puVar10 = PTR_DAT_008205ec_7_00481d00;
LAB_00481774:
            *(undefined4 *)((int)register0x00000054 + -0x58) = uVar5;
            *(undefined4 *)((int)register0x00000054 + -0x38) = uVar9;
            *(undefined4 *)((int)register0x00000054 + -0x48) = uVar11;
            *(undefined **)((int)register0x00000054 + -0x2c) = puVar10;
            uVar9 = **(undefined4 **)((int)register0x00000054 + 4);
            *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_00481d04;
            *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar9;
            *(undefined **)((int)register0x00000054 + -0x78) = puVar10;
            *(undefined4 *)((int)register0x00000054 + -0x74) = uVar11;
            FUN_00093560();
            if ((*(char *)((int)register0x00000054 + -0x6c) == '\0') &&
               (**(int **)((int)register0x00000054 + -0x70) == 0)) {
              *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x80) =
                   *(undefined4 *)((int)register0x00000054 + -0x2c);
              *(undefined4 *)((int)register0x00000054 + -0x7c) =
                   *(undefined4 *)((int)register0x00000054 + -0x48);
              FUN_0008f77c();
              *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00481d08;
              *(undefined4 *)((int)register0x00000054 + -0xc) =
                   *(undefined4 *)((int)register0x00000054 + -0x78);
              *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_00481d0c;
              *(undefined4 *)((int)register0x00000054 + -0x7c) = 0x18;
              *(undefined1 **)((int)register0x00000054 + -0x78) =
                   (undefined1 *)((int)register0x00000054 + -0x10);
              *(undefined4 *)((int)register0x00000054 + -0x74) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x70) = 1;
              FUN_0013b72c();
              *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x80) =
                   *(undefined4 *)((int)register0x00000054 + -0x6c);
              *(undefined4 *)((int)register0x00000054 + -0x7c) =
                   *(undefined4 *)((int)register0x00000054 + -0x68);
              FUN_0008f77c();
              *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00481d08;
              *(undefined4 *)((int)register0x00000054 + -0x14) =
                   *(undefined4 *)((int)register0x00000054 + -0x78);
              *(undefined1 **)((int)register0x00000054 + -0x80) =
                   (undefined1 *)((int)register0x00000054 + -0x18);
              *(undefined4 *)((int)register0x00000054 + -0x7c) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
              k3c_internal_pkg_logger_Error();
            }
            *(undefined4 *)((int)register0x00000054 + -0x80) =
                 *(undefined4 *)((int)register0x00000054 + -0x38);
            *(undefined4 *)((int)register0x00000054 + -0x7c) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            *(undefined **)((int)register0x00000054 + -0x78) =
                 PTR_s_________algoLOADSAVEflagdiffM119_00820821_0x2d9_00481d10;
            *(undefined4 *)((int)register0x00000054 + -0x74) = 4;
            internal_stringslite_Index();
            if (*(int *)((int)register0x00000054 + -0x70) == -1) {
              *(undefined4 *)((int)register0x00000054 + -0x80) =
                   *(undefined4 *)((int)register0x00000054 + -0x38);
              *(undefined4 *)((int)register0x00000054 + -0x7c) =
                   *(undefined4 *)((int)register0x00000054 + -0x58);
              FUN_00151ce4();
              uVar6 = *(uint *)((int)register0x00000054 + -0x58);
              if (uVar6 == *(uint *)((int)register0x00000054 + -0x74)) {
                *(undefined4 *)((int)register0x00000054 + -0x80) =
                     *(undefined4 *)((int)register0x00000054 + -0x78);
                *(undefined4 *)((int)register0x00000054 + -0x7c) =
                     *(undefined4 *)((int)register0x00000054 + -0x38);
                *(uint *)((int)register0x00000054 + -0x78) = uVar6;
                FUN_00018250();
                bVar1 = *(byte *)((int)register0x00000054 + -0x74) ^ 1;
                uVar6 = *(uint *)((int)register0x00000054 + -0x58);
              }
              else {
                bVar1 = 1;
              }
            }
            else {
              uVar6 = *(uint *)((int)register0x00000054 + -0x58);
              bVar1 = 1;
            }
            lVar14 = (ulonglong)uVar6 << 0x20;
            if (bVar1 != 0) {
              if (*(char *)((int)register0x00000054 + 0x11) == '\0') {
                cVar7 = *(char *)((int)register0x00000054 + 0x10);
                uVar5 = 0;
                uVar9 = 0;
              }
              else {
                *(undefined4 *)((int)register0x00000054 + -0x80) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x78) = 0;
                *(undefined **)((int)register0x00000054 + -0x74) = PTR_DAT_00481d14;
                *(undefined4 *)((int)register0x00000054 + -0x70) = 5;
                FUN_0007636c();
                uVar9 = *(undefined4 *)((int)register0x00000054 + -0x6c);
                uVar5 = *(undefined4 *)((int)register0x00000054 + -0x68);
                cVar7 = *(char *)((int)register0x00000054 + 0x10);
              }
              if (cVar7 != '\0') {
                *(undefined4 *)((int)register0x00000054 + -0x80) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar9;
                *(undefined4 *)((int)register0x00000054 + -0x78) = uVar5;
                *(undefined **)((int)register0x00000054 + -0x74) =
                     PTR_s_____algoLOADSAVEflagdiffM119M220_00820821_0x2dd_00481d18;
                *(undefined4 *)((int)register0x00000054 + -0x70) = 4;
                FUN_0007636c();
                uVar9 = *(undefined4 *)((int)register0x00000054 + -0x6c);
                uVar5 = *(undefined4 *)((int)register0x00000054 + -0x68);
              }
              *(undefined4 *)((int)register0x00000054 + -0x50) = uVar5;
              *(undefined4 *)((int)register0x00000054 + -0x34) = uVar9;
              FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x28));
              *(undefined4 *)((int)register0x00000054 + -0x80) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x7c) =
                   *(undefined4 *)((int)register0x00000054 + 0xc);
              FUN_0008f77c();
              *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_00481d08;
              *(undefined4 *)((int)register0x00000054 + -0x24) =
                   *(undefined4 *)((int)register0x00000054 + -0x78);
              *(undefined4 *)((int)register0x00000054 + -0x80) =
                   *(undefined4 *)((int)register0x00000054 + -0x34);
              *(undefined4 *)((int)register0x00000054 + -0x7c) =
                   *(undefined4 *)((int)register0x00000054 + -0x50);
              FUN_0008f77c();
              *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00481d08;
              *(undefined4 *)((int)register0x00000054 + -0x1c) =
                   *(undefined4 *)((int)register0x00000054 + -0x78);
              *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_00481d1c;
              *(undefined4 *)((int)register0x00000054 + -0x7c) = 0x3f;
              *(undefined1 **)((int)register0x00000054 + -0x78) =
                   (undefined1 *)((int)register0x00000054 + -0x28);
              *(undefined4 *)((int)register0x00000054 + -0x74) = 2;
              *(undefined4 *)((int)register0x00000054 + -0x70) = 2;
              lVar14 = k3c_internal_pkg_logger_Errorf();
            }
            FUN_000908bc((int)lVar14,(int)((ulonglong)lVar14 >> 0x20));
            *(undefined4 *)((int)register0x00000054 + -0x3c) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            uVar9 = **(undefined4 **)((int)register0x00000054 + 4);
            *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_00481d04;
            *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar9;
            *(undefined4 *)((int)register0x00000054 + -0x78) =
                 *(undefined4 *)((int)register0x00000054 + -0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x74) =
                 *(undefined4 *)((int)register0x00000054 + -0x48);
            FUN_00025f60();
            *(undefined4 *)((int)register0x00000054 + -0x44) =
                 **(undefined4 **)((int)register0x00000054 + -0x70);
            *(undefined4 *)((int)register0x00000054 + -4) =
                 (*(undefined4 **)((int)register0x00000054 + -0x70))[1];
            *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_00481d04;
            *(undefined4 *)((int)register0x00000054 + -0x7c) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            *(undefined **)((int)register0x00000054 + -0x78) =
                 PTR_s_chipmcu_M107pinsM106tcp_initbusy_00820821_0x225_00481d20;
            *(undefined4 *)((int)register0x00000054 + -0x74) = 4;
            FUN_00093a08();
            puVar3 = *(undefined4 **)((int)register0x00000054 + -0x70);
            *puVar3 = *(undefined4 *)((int)register0x00000054 + -0x44);
            if (*(int *)PTR_DAT_00481d24 == 0) {
              uVar9 = *(undefined4 *)((int)register0x00000054 + -4);
            }
            else {
              puVar3 = (undefined4 *)FUN_0009db64();
              uVar9 = *(undefined4 *)((int)register0x00000054 + -4);
              *unaff_r8 = uVar9;
              unaff_r8[1] = puVar3[1];
            }
            puVar3[1] = uVar9;
            *(undefined4 *)((int)register0x00000054 + -0x80) =
                 *(undefined4 *)((int)register0x00000054 + -0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x7c) =
                 *(undefined4 *)((int)register0x00000054 + -0x48);
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0x78);
            *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_00481d04;
            *(undefined4 *)((int)register0x00000054 + -0x7c) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            *(undefined **)((int)register0x00000054 + -0x78) =
                 PTR_s_chip_namespi_speedack_countget_c_00823504_0x68f_00481d28;
            *(undefined4 *)((int)register0x00000054 + -0x74) = 9;
            FUN_00093a08();
            puVar3 = *(undefined4 **)((int)register0x00000054 + -0x70);
            *puVar3 = PTR_DAT_00481d08;
            if (*(int *)PTR_DAT_00481d24 == 0) {
              uVar9 = *(undefined4 *)((int)register0x00000054 + -8);
            }
            else {
              puVar3 = (undefined4 *)FUN_0009db64();
              uVar9 = *(undefined4 *)((int)register0x00000054 + -8);
              *unaff_r8 = uVar9;
              unaff_r8[1] = puVar3[1];
            }
            puVar3[1] = uVar9;
            *(undefined4 *)((int)register0x00000054 + -0x80) =
                 *(undefined4 *)((int)register0x00000054 + -0x38);
            *(undefined4 *)((int)register0x00000054 + -0x7c) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0x78);
            *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_00481d04;
            *(undefined4 *)((int)register0x00000054 + -0x7c) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_00481d2c;
            *(undefined4 *)((int)register0x00000054 + -0x74) = 3;
            FUN_00093a08();
            puVar3 = *(undefined4 **)((int)register0x00000054 + -0x70);
            *puVar3 = PTR_DAT_00481d08;
            if (*(int *)PTR_DAT_00481d24 == 0) {
              uVar9 = *(undefined4 *)((int)register0x00000054 + -8);
            }
            else {
              puVar3 = (undefined4 *)FUN_0009db64();
              uVar9 = *(undefined4 *)((int)register0x00000054 + -8);
              *unaff_r8 = uVar9;
              unaff_r8[1] = puVar3[1];
            }
            puVar3[1] = uVar9;
            *(undefined4 *)((int)register0x00000054 + -0x80) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            FUN_00020ce0();
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_00481d04;
            *(undefined4 *)((int)register0x00000054 + -0x7c) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_00481d30;
            *(undefined4 *)((int)register0x00000054 + -0x74) = 6;
            FUN_00093a08();
            puVar3 = *(undefined4 **)((int)register0x00000054 + -0x70);
            *puVar3 = PTR_DAT_00481d34;
            if (*(int *)PTR_DAT_00481d24 == 0) {
              uVar9 = *(undefined4 *)((int)register0x00000054 + -8);
            }
            else {
              puVar3 = (undefined4 *)FUN_0009db64();
              uVar9 = *(undefined4 *)((int)register0x00000054 + -8);
              *unaff_r8 = uVar9;
              unaff_r8[1] = puVar3[1];
            }
            puVar3[1] = uVar9;
            *(undefined4 *)((int)register0x00000054 + -0x80) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            FUN_00020ce0();
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_00481d04;
            *(undefined4 *)((int)register0x00000054 + -0x7c) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_00481d38;
            *(undefined4 *)((int)register0x00000054 + -0x74) = 6;
            FUN_00093a08();
            puVar3 = *(undefined4 **)((int)register0x00000054 + -0x70);
            *puVar3 = PTR_DAT_00481d34;
            if (*(int *)PTR_DAT_00481d24 == 0) {
              uVar9 = *(undefined4 *)((int)register0x00000054 + -8);
            }
            else {
              puVar3 = (undefined4 *)FUN_0009db64();
              uVar9 = *(undefined4 *)((int)register0x00000054 + -8);
              *unaff_r8 = uVar9;
              unaff_r8[1] = puVar3[1];
            }
            puVar3[1] = uVar9;
            *(undefined4 *)((int)register0x00000054 + 0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + -0x4c);
          *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_00481cfc;
          *(undefined4 *)((int)register0x00000054 + -0x74) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x70) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x6c) = 0xffffffff;
          FUN_0014f168();
          uVar6 = *(uint *)((int)register0x00000054 + -100);
          uVar13 = uVar6 == 0;
          if (!(bool)uVar13) {
            uVar13 = uVar6 == 1;
            if (1 < uVar6) {
              puVar3 = *(undefined4 **)((int)register0x00000054 + -0x68);
              puVar10 = (undefined *)*puVar3;
              uVar11 = puVar3[1];
              uVar9 = puVar3[2];
              uVar5 = puVar3[3];
              goto LAB_00481774;
            }
            FUN_0009dbd4(1,1);
          }
          FUN_0009dbd4(0,0);
        }
        else {
          uVar13 = iVar4 == 1;
          if (iVar4 != 0) {
            *(uint *)((int)register0x00000054 + -0x80) = iVar2 + (1 - iVar4 >> 0x1f & 1U);
            *(int *)((int)register0x00000054 + -0x7c) = iVar4 + -1;
            FUN_00151ce4();
            iVar2 = *(int *)((int)register0x00000054 + -0x78);
            iVar4 = *(int *)((int)register0x00000054 + -0x74);
            uVar9 = 1;
            goto LAB_004816c8;
          }
        }
        FUN_0009dc34(1,0);
      }
      else {
        if (iVar4 < 1) {
          uVar9 = 1;
        }
        else {
          *(int *)((int)register0x00000054 + -0x80) = iVar2;
          *(undefined **)((int)register0x00000054 + -0x7c) = PTR_DAT_00481cf4;
          *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
          FUN_00018250(iVar2,1,cVar7);
          if (*(char *)((int)register0x00000054 + -0x74) == '\0') {
            iVar2 = *(int *)((int)register0x00000054 + -0x30);
            iVar4 = *(int *)((int)register0x00000054 + -0x4c);
            uVar9 = 1;
          }
          else {
            iVar2 = *(int *)((int)register0x00000054 + -0x30);
            iVar4 = *(int *)((int)register0x00000054 + -0x4c);
            uVar9 = 0xffffffff;
          }
        }
        uVar13 = iVar4 == 1;
        if (iVar4 != 0) {
          *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar9;
          *(uint *)((int)register0x00000054 + -0x80) = (1 - iVar4 >> 0x1f & 1U) + iVar2;
          *(int *)((int)register0x00000054 + -0x7c) = iVar4 + -1;
          FUN_00151ce4();
          iVar2 = *(int *)((int)register0x00000054 + -0x78);
          iVar4 = *(int *)((int)register0x00000054 + -0x74);
          cVar7 = *(char *)((int)register0x00000054 + 0x11);
          uVar9 = *(undefined4 *)((int)register0x00000054 + -0x5c);
          goto LAB_00481620;
        }
      }
      param_1 = FUN_0009dc34(1,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x84);
      if ((bool)uVar13) {
        register0x00000054 = (BADSPACEBASE *)puVar12;
      }
    }
    unaff_lr = 0x481cec;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/pins.(*PrinterPins).Lookup_pin @ 00481d3c (size 1300) */

void k3c_internal_pkg_pins___PrinterPins__Lookup_pin(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined *extraout_r1;
  undefined *extraout_r2;
  undefined *puVar7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x58) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined1 *)((int)register0x00000054 + -0x48) =
           *(undefined1 *)((int)register0x00000054 + 0x10);
      *(undefined1 *)((int)register0x00000054 + -0x47) =
           *(undefined1 *)((int)register0x00000054 + 0x11);
      k3c_internal_pkg_pins___PrinterPins__Parse_pin();
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00482254;
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00482258;
      *(undefined4 *)((int)register0x00000054 + -0x48) = 3;
      FUN_00025f60();
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           **(undefined4 **)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           (*(undefined4 **)((int)register0x00000054 + -0x44))[1];
      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00482254;
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + -0x28);
      *(undefined **)((int)register0x00000054 + -0x4c) =
           PTR_s_chip_namespi_speedack_countget_c_00823504_0x68f_0048225c;
      *(undefined4 *)((int)register0x00000054 + -0x48) = 9;
      FUN_00025f60();
      uVar2 = (*(undefined4 **)((int)register0x00000054 + -0x44))[1];
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           **(undefined4 **)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0xc) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      *(undefined **)((int)register0x00000054 + -0x54) =
           PTR_s__s__s______tempempty_s__s_procst_00820821_0x613_00482260;
      *(undefined4 *)((int)register0x00000054 + -0x50) = 5;
      *(undefined1 **)((int)register0x00000054 + -0x4c) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x48) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x44) = 2;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00482254;
      *(undefined4 *)((int)register0x00000054 + -0x50) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x40) == '\0') {
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00482254;
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00482264;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 10;
        FUN_00093a08();
        puVar4 = *(undefined4 **)((int)register0x00000054 + -0x44);
        *puVar4 = *(undefined4 *)((int)register0x00000054 + 0x14);
        if (*(int *)PTR_DAT_00482270 == 0) {
          uVar2 = *(undefined4 *)((int)register0x00000054 + 0x18);
        }
        else {
          puVar4 = (undefined4 *)FUN_0009db64();
          uVar2 = *(undefined4 *)((int)register0x00000054 + 0x18);
          *unaff_r8 = uVar2;
          unaff_r8[1] = puVar4[1];
        }
        puVar4[1] = uVar2;
        uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00482254;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        FUN_00093a08();
        puVar4 = *(undefined4 **)((int)register0x00000054 + -0x44);
        *puVar4 = PTR_DAT_00482254;
        if (*(int *)PTR_DAT_00482270 == 0) {
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x28);
        }
        else {
          puVar4 = (undefined4 *)FUN_0009db64();
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x28);
          *unaff_r8 = uVar2;
          unaff_r8[1] = puVar4[1];
        }
        puVar4[1] = uVar2;
        *(undefined4 *)((int)register0x00000054 + 0x1c) = uVar2;
        return;
      }
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00482254;
      *(undefined4 *)((int)register0x00000054 + -0x50) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      FUN_00025f60();
      puVar5 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x44);
      uVar9 = 0;
      puVar7 = PTR_DAT_00482254;
      if (puVar5 == PTR_DAT_00482254) {
        uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             (*(undefined4 **)((int)register0x00000054 + -0x44))[1];
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00482254;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x40) != '\0') {
LAB_004820a4:
          *(undefined4 *)((int)register0x00000054 + 0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          return;
        }
        if (*(int *)((int)register0x00000054 + 0x14) == 0) {
          bVar1 = 1;
        }
        else {
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00482254;
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00482264;
          *(undefined4 *)((int)register0x00000054 + -0x48) = 10;
          FUN_00025f60();
          if (*(int *)((int)register0x00000054 + 0x14) ==
              **(int **)((int)register0x00000054 + -0x44)) {
            iVar6 = (*(int **)((int)register0x00000054 + -0x44))[1];
            *(int *)((int)register0x00000054 + -0x54) = *(int *)((int)register0x00000054 + 0x14);
            *(undefined4 *)((int)register0x00000054 + -0x50) =
                 *(undefined4 *)((int)register0x00000054 + 0x18);
            *(int *)((int)register0x00000054 + -0x4c) = iVar6;
            FUN_00019a3c();
            bVar1 = *(byte *)((int)register0x00000054 + -0x48) ^ 1;
          }
          else {
            bVar1 = 1;
          }
        }
        if (bVar1 == 0) {
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00482254;
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00482268;
          *(undefined4 *)((int)register0x00000054 + -0x48) = 6;
          FUN_00025f60();
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               **(undefined4 **)((int)register0x00000054 + -0x44);
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               (*(undefined4 **)((int)register0x00000054 + -0x44))[1];
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00482254;
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00482268;
          *(undefined4 *)((int)register0x00000054 + -0x48) = 6;
          FUN_00025f60();
          iVar6 = **(int **)((int)register0x00000054 + -0x44);
          if (iVar6 == *(int *)((int)register0x00000054 + -0x30)) {
            iVar3 = (*(int **)((int)register0x00000054 + -0x44))[1];
            *(int *)((int)register0x00000054 + -0x54) = iVar6;
            *(int *)((int)register0x00000054 + -0x50) = iVar3;
            *(undefined4 *)((int)register0x00000054 + -0x4c) =
                 *(undefined4 *)((int)register0x00000054 + -0x20);
            FUN_00019a3c();
            bVar1 = *(byte *)((int)register0x00000054 + -0x48) ^ 1;
          }
          else {
            bVar1 = 1;
          }
          if (bVar1 == 0) {
            *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00482254;
            *(undefined4 *)((int)register0x00000054 + -0x50) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c);
            *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0048226c;
            *(undefined4 *)((int)register0x00000054 + -0x48) = 6;
            FUN_00025f60();
            *(undefined4 *)((int)register0x00000054 + -0x30) =
                 **(undefined4 **)((int)register0x00000054 + -0x44);
            *(undefined4 *)((int)register0x00000054 + -0x20) =
                 (*(undefined4 **)((int)register0x00000054 + -0x44))[1];
            *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00482254;
            *(undefined4 *)((int)register0x00000054 + -0x50) =
                 *(undefined4 *)((int)register0x00000054 + -0x28);
            *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0048226c;
            *(undefined4 *)((int)register0x00000054 + -0x48) = 6;
            FUN_00025f60();
            iVar6 = **(int **)((int)register0x00000054 + -0x44);
            if (iVar6 == *(int *)((int)register0x00000054 + -0x30)) {
              iVar3 = (*(int **)((int)register0x00000054 + -0x44))[1];
              *(int *)((int)register0x00000054 + -0x54) = iVar6;
              *(int *)((int)register0x00000054 + -0x50) = iVar3;
              *(undefined4 *)((int)register0x00000054 + -0x4c) =
                   *(undefined4 *)((int)register0x00000054 + -0x20);
              FUN_00019a3c();
              bVar1 = *(byte *)((int)register0x00000054 + -0x48) ^ 1;
            }
            else {
              bVar1 = 1;
            }
          }
          else {
            bVar1 = 1;
          }
          if (bVar1 == 0) goto LAB_004820a4;
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00482274;
          *(undefined4 *)((int)register0x00000054 + -0x50) = 0x25;
          *(undefined1 **)((int)register0x00000054 + -0x4c) =
               (undefined1 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x44) = 1;
          FUN_001386c4();
          uVar2 = 0;
          if (*(int *)((int)register0x00000054 + -0x40) != 0) {
            uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x40) + 4);
          }
          *(undefined4 *)((int)register0x00000054 + -0x54) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + -0x3c);
          FUN_00095b00();
        }
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00482278;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 0x24;
        *(undefined1 **)((int)register0x00000054 + -0x4c) =
             (undefined1 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 1;
        FUN_001386c4();
        uVar9 = *(int *)((int)register0x00000054 + -0x40) == 0;
        uVar2 = 0;
        if (!(bool)uVar9) {
          uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x40) + 4);
        }
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        FUN_00095b00();
        puVar5 = extraout_r1;
        puVar7 = extraout_r2;
      }
      *(undefined **)((int)register0x00000054 + -0x54) = puVar5;
      *(undefined **)((int)register0x00000054 + -0x50) = puVar7;
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0048227c;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x58);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x48224c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/pins.(*PrinterPins).Setup_pin @ 00482280 (size 568) */

void k3c_internal_pkg_pins___PrinterPins__Setup_pin(void)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  char local_40;
  undefined *local_18;
  int local_14;
  undefined *local_10;
  undefined4 local_c;
  undefined *local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0009defc(0,&local_18);
  local_14 = 7;
  local_18 = PTR_s_endstopdisfdccvhighfsat90usbstep_008216f7_0x7d7_004824bc;
  local_c = 0xb;
  local_10 = PTR_DAT_004824c0;
  local_4 = 3;
  local_8 = PTR_DAT_004824c4;
  iVar2 = 0;
  iVar5 = in_stack_0000000c;
  while ((iVar2 < 3 &&
         ((iVar5 != (&local_14)[iVar2 * 2] ||
          (FUN_00018250(), iVar5 = in_stack_0000000c, local_40 == '\0'))))) {
    iVar2 = iVar2 + 1;
  }
  bVar3 = false;
  while ((!bVar3 && ((iVar5 != 7 || (FUN_00018250(), iVar5 = in_stack_0000000c, local_40 == '\0'))))
        ) {
    bVar3 = true;
  }
  k3c_internal_pkg_pins___PrinterPins__Lookup_pin();
  puVar1 = PTR_s_chipmcu_M107pinsM106tcp_initbusy_00820821_0x225_004824cc;
  FUN_00025f60();
  puVar4 = (undefined *)0x0;
  if (iRam00000000 != 0) {
    FUN_00020dac();
    puVar4 = puVar1;
  }
  if (puVar4 != (undefined *)0x0) {
    (**(code **)(puVar4 + 0xc))();
    return;
  }
  return;
}



/* k3c/internal/pkg/pins.(*PrinterPins).Reset_pin_sharing @ 004824d4 (size 236) */

void k3c_internal_pkg_pins___PrinterPins__Reset_pin_sharing(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 *puStack_1c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4825bc;
    FUN_0009bf64();
  }
  FUN_0009df04(0,&uStack_10);
  FUN_00025f60();
  uStack_10 = *puStack_1c;
  uStack_c = puStack_1c[1];
  FUN_00025f60();
  uStack_8 = *puStack_1c;
  uStack_4 = puStack_1c[1];
  FUN_0013b72c();
  FUN_000263c8();
                    /* WARNING: Could not recover jumptable at 0x004825b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/pins.(*PrinterPins).Get_pin_resolver @ 004825d4 (size 272) */

void k3c_internal_pkg_pins___PrinterPins__Get_pin_resolver(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  char local_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (uVar1 = in_stack_00000008, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00093560();
  if (local_1c == '\0') {
    local_10 = 0;
    local_c = 0;
    FUN_0008f77c();
    local_10 = DAT_004826ec;
    local_c = uVar1;
    FUN_0013b72c();
    local_8 = 0;
    local_4 = (undefined4 *)0x0;
    FUN_0008f77c();
    local_8 = DAT_004826ec;
    local_4 = &local_10;
    k3c_internal_pkg_logger_Error();
  }
  return;
}



/* k3c/internal/pkg/pins.(*PrinterPins).Register_chip @ 004826f4 (size 664) */

void k3c_internal_pkg_pins___PrinterPins__Register_chip(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined *extraout_r1;
  undefined *extraout_r1_00;
  undefined *puVar3;
  undefined *extraout_r1_01;
  undefined *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 *local_28;
  char local_24;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00151ce4();
  FUN_00093560();
  if (local_24 != '\0') {
    FUN_0008f77c();
    local_28 = (undefined4 *)0x1;
    FUN_0013b72c();
    FUN_0008f77c();
    k3c_internal_pkg_logger_Error();
  }
  puVar2 = (undefined1 *)*in_stack_00000004;
  FUN_00093a08();
  *local_28 = in_stack_00000010;
  puVar1 = local_28;
  if (*(int *)PTR_DAT_0048299c != 0) {
    puVar1 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = in_stack_00000014;
    unaff_r8[1] = puVar1[1];
  }
  puVar1[1] = in_stack_00000014;
  puVar4 = PTR_DAT_004829a0;
  FUN_00022cf8();
  *puVar2 = 1;
  FUN_000908bc();
  puVar3 = puVar4;
  if (*(int *)PTR_DAT_0048299c != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *(undefined4 *)(puVar2 + 4);
    puVar3 = extraout_r1;
  }
  *(undefined **)(puVar2 + 4) = puVar3;
  FUN_000908bc();
  puVar3 = puVar4;
  if (*(int *)PTR_DAT_0048299c != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = *(undefined4 *)(puVar2 + 8);
    puVar3 = extraout_r1_00;
  }
  *(undefined **)(puVar2 + 8) = puVar3;
  FUN_000908bc();
  if (*(int *)PTR_DAT_0048299c != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_01;
    unaff_r8[1] = *(undefined4 *)(puVar2 + 0xc);
    puVar4 = extraout_r1_01;
  }
  *(undefined **)(puVar2 + 0xc) = puVar4;
  FUN_00093a08();
  if (*(int *)PTR_DAT_0048299c != 0) {
    local_28 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar2;
    unaff_r8[1] = *local_28;
  }
  *local_28 = puVar2;
  return;
}



/* k3c/internal/pkg/pins.(*PrinterPins).allow_multi_use_pin @ 004829a8 (size 332) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_pins___PrinterPins__allow_multi_use_pin(void)

{
  int iVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *puStack_20;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x482af0;
    FUN_0009bf64();
  }
  k3c_internal_pkg_pins___PrinterPins__Parse_pin();
  FUN_0009df04(0,&uStack_10,puStack_20);
  FUN_00025f60();
  uStack_10 = *puStack_20;
  uStack_c = puStack_20[1];
  FUN_00025f60();
  uStack_8 = *puStack_20;
  uStack_4 = puStack_20[1];
  FUN_0013b72c();
  FUN_00093a08();
  iVar1 = 2;
  puRam00000002 = PTR_DAT_00482b08;
  if (*(int *)PTR_DAT_00482b0c != 0) {
    uVar2 = FUN_0009db54(2,_DAT_00000006);
    iVar1 = (int)uVar2;
    *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
  }
  *(undefined **)(iVar1 + 4) = PTR_DAT_00482b10;
                    /* WARNING: Could not recover jumptable at 0x00482ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/pins.Add_printer_objects_pins @ 00482b14 (size 328) */

void k3c_internal_pkg_pins_Add_printer_objects_pins(void)

{
  undefined *extraout_r1;
  undefined *extraout_r1_00;
  undefined *extraout_r1_01;
  undefined *puVar1;
  undefined *extraout_r1_02;
  undefined *puVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 *puStack_20;
  
  while (puVar2 = PTR_DAT_00482c60, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x482c58;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  FUN_000908bc();
  puVar1 = puVar2;
  if (*(int *)PTR_DAT_00482c64 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *puStack_20;
    puVar1 = extraout_r1;
  }
  *puStack_20 = puVar1;
  FUN_000908bc();
  puVar1 = puVar2;
  if (*(int *)PTR_DAT_00482c64 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = puStack_20[1];
    puVar1 = extraout_r1_00;
  }
  puStack_20[1] = puVar1;
  FUN_000908bc();
  puVar1 = puVar2;
  if (*(int *)PTR_DAT_00482c64 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_01;
    unaff_r8[1] = puStack_20[2];
    puVar1 = extraout_r1_01;
  }
  puStack_20[2] = puVar1;
  FUN_000908bc();
  if (*(int *)PTR_DAT_00482c64 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_02;
    unaff_r8[1] = puStack_20[3];
    puVar2 = extraout_r1_02;
  }
  puStack_20[3] = puVar2;
  k3c_internal_pkg_printer___Printer__Add_object();
                    /* WARNING: Could not recover jumptable at 0x00482c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/pins.MustLookupPins @ 00482c70 (size 200) */

void k3c_internal_pkg_pins_MustLookupPins(undefined4 param_1)

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
           PTR_s_pinsM106tcp_initbusy1a86baud_to_M_00820821_0x231_00482d3c;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 4;
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00482d40;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_00482d44;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      if (*(undefined **)((int)register0x00000054 + -0x18) == PTR_DAT_00482d48) {
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00482d4c;
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00482d50;
      *(undefined **)((int)register0x00000054 + -8) =
           *(undefined **)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_00482d54;
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
    unaff_lr = 0x482d34;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



