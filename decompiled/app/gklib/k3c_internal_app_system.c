// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/app/system   functions: 11
/* k3c/internal/app/system.registerConfigHooks @ 00524694 (size 516) */

void k3c_internal_app_system_registerConfigHooks(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x38) =
           PTR_s_gcodeok__sM8844_helpReady_________00820821_0x5d2_0052489c;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 5;
      *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_005248a0;
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_005248a4;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      bVar5 = *(undefined **)((int)register0x00000054 + -0x28) == PTR_DAT_005248a8;
      if (bVar5) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_005248ac;
        FUN_00022cf8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x38);
        *puVar1 = PTR_k3c_internal_app_system_registerConfigHooks_func1_005248b0;
        if (*(int *)PTR_DAT_005248b4 == 0) {
          uVar2 = *(undefined4 *)((int)register0x00000054 + 4);
          uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
        }
        else {
          puVar1 = (undefined4 *)FUN_0009db64();
          uVar2 = *(undefined4 *)((int)register0x00000054 + 4);
          *unaff_r8 = uVar2;
          uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
          unaff_r8[1] = uVar3;
        }
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar3;
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_005248b8;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 0xb;
        *(undefined4 **)((int)register0x00000054 + -0x30) = puVar1;
        *(undefined1 *)((int)register0x00000054 + -0x2c) = 0;
        *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_005248bc;
        *(undefined4 *)((int)register0x00000054 + -0x24) = 0x21;
        k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             **(undefined4 **)((int)register0x00000054 + 4);
        uVar2 = k3c_internal_pkg_web_MustLookupWebhooks();
        FUN_0009e2f0(uVar2,*(undefined4 *)((int)register0x00000054 + -0x38),
                     (undefined1 *)((int)register0x00000054 + -0x1c));
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_005248ac;
        FUN_00022cf8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x38);
        *puVar1 = PTR_k3c_internal_app_system_registerConfigHooks_func2_005248c0;
        if (*(int *)PTR_DAT_005248b4 == 0) {
          uVar2 = *(undefined4 *)((int)register0x00000054 + 4);
          uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
        }
        else {
          puVar1 = (undefined4 *)FUN_0009db64();
          uVar2 = *(undefined4 *)((int)register0x00000054 + 4);
          *unaff_r8 = uVar2;
          uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
          unaff_r8[1] = uVar3;
        }
        *(undefined4 **)((int)register0x00000054 + -8) = puVar1;
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_005248c4;
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_005248c8;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 0x12;
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x28) == '\0') {
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_005248c4;
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_005248c8;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 0x12;
          FUN_00093a08();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x2c);
          if (*(int *)PTR_DAT_005248b4 == 0) {
            uVar2 = *(undefined4 *)((int)register0x00000054 + -8);
          }
          else {
            puVar1 = (undefined4 *)FUN_0009db64();
            uVar2 = *(undefined4 *)((int)register0x00000054 + -8);
            *unaff_r8 = uVar2;
            unaff_r8[1] = *puVar1;
          }
          *puVar1 = uVar2;
        }
                    /* WARNING: Could not recover jumptable at 0x00524870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x40))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x3c) =
           *(undefined **)((int)register0x00000054 + -0x28);
      *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_005248a8;
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_005248cc;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x524894;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/app/system.registerConfigHooks.func2 @ 005248d0 (size 216) */

void k3c_internal_app_system_registerConfigHooks_func2(void)

{
  undefined4 uVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined1 uStack_28;
  undefined4 uStack_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  uVar1 = *(undefined4 *)(unaff_r7 + 4);
  k3c_internal_pkg_printer___PrinterConfig__SaveConfig();
  if (uStack_1c == 0) {
    (**(code **)*DAT_005249ac)();
    uStack_28 = (char)uVar1;
    if (uStack_28 == '\0') {
      k3c_internal_pkg_gcode___GCodeDispatch__Request_restart();
      return;
    }
  }
  return;
}



/* k3c/internal/app/system.registerConfigHooks.func1 @ 005249b4 (size 176) */

void k3c_internal_app_system_registerConfigHooks_func1(void)

{
  undefined4 uVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 uStack_20;
  undefined4 uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  uVar1 = *(undefined4 *)(unaff_r7 + 4);
  k3c_internal_pkg_printer___PrinterConfig__Cmd_SAVE_CONFIG();
  if (uStack_14 == 0) {
    (**(code **)*DAT_00524a6c)();
    uStack_20 = (char)uVar1;
    if (uStack_20 == '\0') {
      k3c_internal_pkg_gcode___GCodeDispatch__Request_restart();
    }
  }
  return;
}



/* k3c/internal/app/system._read_config @ 00524a74 (size 344) */

void k3c_internal_app_system__read_config(void)

{
  int iVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  int iStack_2c;
  undefined *apuStack_8 [2];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x524bc8;
    FUN_0009bf64();
  }
  (*(code *)**(undefined4 **)PTR_DAT_00524bd0)();
  k3c_internal_pkg_printer___Printer__LoadConfig();
  apuStack_8[0] = PTR_DAT_00524bd4;
  apuStack_8[1] = PTR_DAT_00524bd8;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    (**(code **)apuStack_8[iVar1])();
  }
  k3c_internal_app_system_registerConfigHooks();
  k3c_internal_pkg_printer___ConfigWrapper__Get_prefix_sections();
  for (iVar1 = 0; iVar1 < iStack_2c; iVar1 = iVar1 + 1) {
    k3c_internal_pkg_printer___Printer__Load_object();
  }
  k3c_internal_pkg_motion_SetupToolhead();
  k3c_internal_pkg_printer___PrinterConfig___build_status();
                    /* WARNING: Could not recover jumptable at 0x00524bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/app/system._build_protocol_error_message @ 00524be4 (size 1524) */

void k3c_internal_app_system__build_protocol_error_message(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int extraout_r1;
  undefined *extraout_r1_00;
  int iVar8;
  undefined4 extraout_r2;
  uint extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 *extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  undefined *extraout_r2_05;
  undefined *puVar9;
  uint uVar10;
  undefined4 extraout_r3;
  uint extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 *extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined *extraout_r3_04;
  undefined1 *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  int unaff_r10;
  undefined1 *puVar15;
  undefined4 unaff_lr;
  undefined1 uVar16;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x14)) {
      puVar15 = (undefined1 *)((int)register0x00000054 + -0x94);
      *(undefined4 *)((int)register0x00000054 + -0x94) = unaff_lr;
      uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
      *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_005251dc;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar4;
      *(undefined **)((int)register0x00000054 + -0x88) =
           PTR_s_software_versionfilament_tracker_008262d0_0x384a_005251e0;
      *(undefined4 *)((int)register0x00000054 + -0x84) = 0x10;
      FUN_00025f60();
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           **(undefined4 **)((int)register0x00000054 + -0x80);
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           (*(undefined4 **)((int)register0x00000054 + -0x80))[1];
      *(undefined4 *)((int)register0x00000054 + -0x90) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_008205ec_7_005251e4;
      *(undefined4 *)((int)register0x00000054 + -0x88) = 3;
      k3c_internal_pkg_printer___Printer__Lookup_objects();
      iVar1 = *(int *)((int)register0x00000054 + -0x84);
      *(int *)((int)register0x00000054 + -0x24) = iVar1;
      iVar5 = *(int *)((int)register0x00000054 + -0x80);
      *(int *)((int)register0x00000054 + -0x48) = iVar5;
      iVar8 = 0;
      uVar10 = 0;
      puVar11 = (undefined1 *)((int)register0x00000054 + -0x44);
      uVar12 = 0;
      puVar13 = (undefined4 *)0x0;
      puVar14 = (undefined1 *)((int)register0x00000054 + -0x44);
      puVar3 = (undefined4 *)0x0;
      while( true ) {
        *(undefined1 **)((int)register0x00000054 + -0x40) = puVar14;
        *(undefined4 **)((int)register0x00000054 + -0x6c) = puVar3;
        *(undefined4 **)((int)register0x00000054 + -0x68) = puVar13;
        if (iVar5 <= iVar8) {
          if (uVar12 == 0) {
            if (uVar10 == 0) {
              *(undefined1 **)((int)register0x00000054 + -0x90) = puVar11;
              *(undefined4 *)((int)register0x00000054 + -0x8c) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x88) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x84) = 1;
              *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_005251f0;
              FUN_000987f4();
              puVar11 = *(undefined1 **)((int)register0x00000054 + -0x7c);
              iVar1 = *(int *)((int)register0x00000054 + -0x78);
              puVar13 = *(undefined4 **)((int)register0x00000054 + -0x68);
              puVar14 = *(undefined1 **)((int)register0x00000054 + -0x40);
              puVar2 = *(undefined4 **)((int)register0x00000054 + -0x6c);
              iVar5 = extraout_r1;
            }
            else {
              iVar1 = 1;
              puVar2 = puVar3;
            }
            iVar1 = iVar1 + -1;
            *(undefined4 *)(puVar11 + iVar1 * 8 + 4) = 6;
            puVar3 = puVar2;
            if (*(int *)PTR_DAT_005251fc != 0) {
              puVar3 = (undefined4 *)
                       FUN_0009db54(puVar2,iVar5,iVar1,*(undefined4 *)(puVar11 + iVar1 * 8));
              *puVar2 = extraout_r3_03;
              iVar1 = extraout_r2_03;
            }
            *(undefined **)(puVar11 + iVar1 * 8) = PTR_DAT_00525200;
          }
          if (puVar3 == (undefined4 *)0x0) {
            if (puVar13 == (undefined4 *)0x0) {
              *(undefined1 **)((int)register0x00000054 + -0x90) = puVar14;
              *(undefined4 *)((int)register0x00000054 + -0x8c) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x88) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x84) = 1;
              *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_005251f0;
              FUN_000987f4();
              puVar14 = *(undefined1 **)((int)register0x00000054 + -0x7c);
              iVar5 = *(int *)((int)register0x00000054 + -0x78);
            }
            else {
              iVar5 = 1;
            }
            iVar5 = iVar5 + -1;
            *(undefined4 *)(puVar14 + iVar5 * 8 + 4) = 6;
            puVar6 = PTR_DAT_00525200;
            if (*(int *)PTR_DAT_005251fc != 0) {
              uVar4 = *(undefined4 *)(puVar14 + iVar5 * 8);
              FUN_0009db54();
              iVar5 = extraout_r2_04;
              puVar6 = extraout_r3_04;
              uRam00000000 = uVar4;
            }
            *(undefined **)(puVar14 + iVar5 * 8) = puVar6;
          }
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x20));
          *(undefined4 *)((int)register0x00000054 + -0x1c) = 0x12;
          *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00525204;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 1;
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00525208;
          *(undefined1 **)((int)register0x00000054 + -0x90) =
               (undefined1 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x8c) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x88) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 0;
          FUN_0014f8fc();
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x7c);
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x78);
          return;
        }
        *(int *)((int)register0x00000054 + -0x4c) = iVar8;
        *(undefined1 **)((int)register0x00000054 + -0x3c) = puVar11;
        *(uint *)((int)register0x00000054 + -100) = uVar12;
        *(uint *)((int)register0x00000054 + -0x60) = uVar10;
        uVar4 = *(undefined4 *)(iVar1 + iVar8 * 4);
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar4;
        *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_005251dc;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar4;
        *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_008205ec_7_005251e4;
        *(undefined4 *)((int)register0x00000054 + -0x84) = 3;
        FUN_00025f60();
        puVar6 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x80);
        uVar16 = puVar6 == PTR_DAT_005251e8;
        puVar9 = PTR_DAT_005251e8;
        if (!(bool)uVar16) goto LAB_005251b4;
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             (*(undefined4 **)((int)register0x00000054 + -0x80))[1];
        *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_005251dc;
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined **)((int)register0x00000054 + -0x88) =
             PTR_s_mcu_name__0_9___gcode_io__error__008216f7_0xfad_005251ec;
        *(undefined4 *)((int)register0x00000054 + -0x84) = 8;
        FUN_00025f60();
        puVar6 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x80);
        uVar16 = puVar6 == PTR_DAT_005251f0;
        if (!(bool)uVar16) break;
        puVar13 = (undefined4 *)(*(undefined4 **)((int)register0x00000054 + -0x80))[1];
        uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + 200);
        *(undefined4 *)((int)register0x00000054 + -0x34) = *puVar13;
        *(undefined4 *)((int)register0x00000054 + -0x58) = puVar13[1];
        *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_005251dc;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar4;
        *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_005251f4;
        *(undefined4 *)((int)register0x00000054 + -0x84) = 0xb;
        FUN_00025f60();
        iVar1 = **(int **)((int)register0x00000054 + -0x80);
        *(int *)((int)register0x00000054 + -0x5c) = iVar1;
        iVar5 = (*(int **)((int)register0x00000054 + -0x80))[1];
        *(int *)((int)register0x00000054 + -0x38) = iVar5;
        if (iVar1 == *(int *)((int)register0x00000054 + -0x54)) {
          *(int *)((int)register0x00000054 + -0x90) = iVar1;
          *(int *)((int)register0x00000054 + -0x8c) = iVar5;
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          FUN_00019a3c();
          if (*(char *)((int)register0x00000054 + -0x84) == '\0') goto LAB_00524dc0;
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          FUN_00151ce4();
          *(int *)((int)register0x00000054 + -0x50) = *(int *)((int)register0x00000054 + -0x6c) + 1;
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10),
                       *(undefined4 *)((int)register0x00000054 + -0x84),
                       *(undefined4 *)((int)register0x00000054 + -0x88));
          *(undefined4 *)((int)register0x00000054 + -0x90) = extraout_r3_01;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = extraout_r2_01;
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_005251f0;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x88);
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x38);
          *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_005251f8;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = 0x16;
          *(undefined1 **)((int)register0x00000054 + -0x88) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x84) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 2;
          FUN_0013b72c();
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0x7c);
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0x78);
          puVar13 = *(undefined4 **)((int)register0x00000054 + -0x68);
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x50);
          if (puVar13 < puVar2) {
            *(undefined4 *)((int)register0x00000054 + -0x28) = uVar4;
            *(undefined4 *)((int)register0x00000054 + -0x50) = uVar7;
            *(undefined4 *)((int)register0x00000054 + -0x90) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            *(undefined4 **)((int)register0x00000054 + -0x8c) = puVar2;
            *(undefined4 **)((int)register0x00000054 + -0x88) = puVar13;
            *(undefined4 *)((int)register0x00000054 + -0x84) = 1;
            *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_005251f0;
            FUN_000987f4();
            puVar14 = *(undefined1 **)((int)register0x00000054 + -0x7c);
            puVar2 = *(undefined4 **)((int)register0x00000054 + -0x78);
            puVar13 = *(undefined4 **)((int)register0x00000054 + -0x74);
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x50);
            uVar4 = *(undefined4 *)((int)register0x00000054 + -0x28);
          }
          else {
            puVar14 = *(undefined1 **)((int)register0x00000054 + -0x40);
          }
          iVar5 = (int)puVar2 + -1;
          *(undefined4 *)(puVar14 + iVar5 * 8 + 4) = uVar7;
          if (*(int *)PTR_DAT_005251fc != 0) {
            uVar4 = FUN_0009db64();
            *puVar3 = uVar4;
            puVar3[1] = *(undefined4 *)(puVar14 + iVar5 * 8);
            puVar13 = extraout_r2_02;
            puVar2 = extraout_r3_02;
          }
          *(undefined4 *)(puVar14 + iVar5 * 8) = uVar4;
          puVar11 = *(undefined1 **)((int)register0x00000054 + -0x3c);
          uVar12 = *(uint *)((int)register0x00000054 + -100);
          uVar10 = *(uint *)((int)register0x00000054 + -0x60);
        }
        else {
LAB_00524dc0:
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          FUN_00151ce4();
          *(int *)((int)register0x00000054 + -0x50) = *(int *)((int)register0x00000054 + -100) + 1;
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10),
                       *(undefined4 *)((int)register0x00000054 + -0x84),
                       *(undefined4 *)((int)register0x00000054 + -0x88));
          *(undefined4 *)((int)register0x00000054 + -0x90) = extraout_r3;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = extraout_r2;
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_005251f0;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x88);
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x38);
          *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_005251f8;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = 0x16;
          *(undefined1 **)((int)register0x00000054 + -0x88) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x84) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 2;
          FUN_0013b72c();
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0x7c);
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0x78);
          uVar10 = *(uint *)((int)register0x00000054 + -0x60);
          uVar12 = *(uint *)((int)register0x00000054 + -0x50);
          if (uVar10 < uVar12) {
            *(undefined4 *)((int)register0x00000054 + -0x50) = uVar7;
            *(undefined4 *)((int)register0x00000054 + -0x28) = uVar4;
            *(undefined4 *)((int)register0x00000054 + -0x90) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            *(uint *)((int)register0x00000054 + -0x8c) = uVar12;
            *(uint *)((int)register0x00000054 + -0x88) = uVar10;
            *(undefined4 *)((int)register0x00000054 + -0x84) = 1;
            *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_005251f0;
            FUN_000987f4();
            puVar11 = *(undefined1 **)((int)register0x00000054 + -0x7c);
            uVar12 = *(uint *)((int)register0x00000054 + -0x78);
            uVar10 = *(uint *)((int)register0x00000054 + -0x74);
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x50);
            uVar4 = *(undefined4 *)((int)register0x00000054 + -0x28);
          }
          else {
            puVar11 = *(undefined1 **)((int)register0x00000054 + -0x3c);
          }
          iVar5 = uVar12 - 1;
          *(undefined4 *)(puVar11 + iVar5 * 8 + 4) = uVar7;
          if (*(int *)PTR_DAT_005251fc != 0) {
            uVar4 = FUN_0009db64();
            *puVar3 = uVar4;
            puVar3[1] = *(undefined4 *)(puVar11 + iVar5 * 8);
            uVar10 = extraout_r2_00;
            uVar12 = extraout_r3_00;
          }
          *(undefined4 *)(puVar11 + iVar5 * 8) = uVar4;
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x6c);
          puVar13 = *(undefined4 **)((int)register0x00000054 + -0x68);
          puVar14 = *(undefined1 **)((int)register0x00000054 + -0x40);
        }
        iVar8 = *(int *)((int)register0x00000054 + -0x4c) + 1;
        iVar1 = *(int *)((int)register0x00000054 + -0x24);
        iVar5 = *(int *)((int)register0x00000054 + -0x48);
        puVar3 = puVar2;
      }
      *(undefined **)((int)register0x00000054 + -0x90) = puVar6;
      *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_005251f0;
      *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_0052520c;
      FUN_000209b4();
      puVar6 = extraout_r1_00;
      puVar9 = extraout_r2_05;
LAB_005251b4:
      *(undefined **)((int)register0x00000054 + -0x90) = puVar6;
      *(undefined **)((int)register0x00000054 + -0x8c) = puVar9;
      *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_0052520c;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x94);
      if ((bool)uVar16) {
        register0x00000054 = (BADSPACEBASE *)puVar15;
      }
    }
    unaff_lr = 0x5251d4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/app/system.ConnectPrinter @ 00525210 (size 100) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_app_system_ConnectPrinter(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 *puStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x525270;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *puStack_8 = _UNK_0052527c;
  if (*_UNK_00525280 != 0) {
    puStack_8 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
  }
  puStack_8[1] = in_stack_00000004;
  in_stack_00000008 = puStack_8;
                    /* WARNING: Could not recover jumptable at 0x00525264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/app/system.ConnectPrinter.func1 @ 00525284 (size 76) */

void k3c_internal_app_system_ConnectPrinter_func1(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x5252cc;
    FUN_0009bf00();
  }
  k3c_internal_app_system_launchPrinter();
  k3c_internal_app_system_onReady();
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x005252c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/app/system.launchPrinter @ 005252d0 (size 168) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_app_system_launchPrinter(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x52537c;
    FUN_0009bf64();
  }
  uStack_c = _UNK_00525384;
  uStack_8 = in_stack_00000004;
  puStack_4 = &uStack_c;
  k3c_internal_app_system__read_config();
  k3c_internal_pkg_printer___Printer__Send_event();
  k3c_internal_pkg_printer___Printer__OnConnect();
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00525368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/app/system.launchPrinter.func1 @ 0052538c (size 1080) */

void k3c_internal_app_system_launchPrinter_func1(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  int unaff_r7;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x60) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = *(undefined4 *)(unaff_r7 + 4);
      *(undefined1 **)((int)register0x00000054 + -0x5c) =
           (undefined1 *)((int)register0x00000054 + 4);
      FUN_00054ee0();
      puVar1 = *(undefined **)((int)register0x00000054 + -0x58);
      if (puVar1 == (undefined *)0x0) {
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x40) = puVar1;
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x54);
      *(undefined4 *)((int)register0x00000054 + -0x38) = uVar2;
      if ((puVar1 == PTR_DAT_005257c8) || (puVar1 == PTR_DAT_005257cc)) {
        FUN_0042debc();
        FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18),
                     *(undefined4 *)((int)register0x00000054 + -0x58),
                     *(undefined4 *)((int)register0x00000054 + -0x5c));
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_005257d0;
        *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_005257d4;
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x58) = extraout_r3;
        *(undefined4 *)((int)register0x00000054 + -0x54) = extraout_r2;
        FUN_00099104();
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_005257d0;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined1 **)((int)register0x00000054 + -0x5c) =
             (undefined1 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x58) = 3;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 3;
        k3c_internal_pkg_logger_Error();
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_005257d8;
        *(undefined4 *)((int)register0x00000054 + -0x58) = 2;
        *(undefined1 **)((int)register0x00000054 + -0x54) =
             (undefined1 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 1;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        k3c_internal_pkg_printer___Printer___set_state();
        return;
      }
      if (puVar1 == PTR_DAT_005257dc) {
        FUN_0042debc();
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x30),
                     *(undefined4 *)((int)register0x00000054 + -0x58),
                     *(undefined4 *)((int)register0x00000054 + -0x5c));
        *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_005257d0;
        *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_005257e0;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x58) = extraout_r3_00;
        *(undefined4 *)((int)register0x00000054 + -0x54) = extraout_r2_00;
        FUN_00099104();
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_005257d0;
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined1 **)((int)register0x00000054 + -0x5c) =
             (undefined1 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x58) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 2;
        k3c_internal_pkg_logger_Error();
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        k3c_internal_app_system__build_protocol_error_message();
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        k3c_internal_pkg_printer___Printer___set_state();
        return;
      }
      uVar4 = puVar1 == PTR_DAT_005257e4;
      if ((bool)uVar4) {
        *(undefined4 *)((int)register0x00000054 + -0x34) = uVar2;
        FUN_0042debc(puVar1,uVar2,uVar2);
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x30),
                     *(undefined4 *)((int)register0x00000054 + -0x58),
                     *(undefined4 *)((int)register0x00000054 + -0x5c));
        *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_005257d0;
        *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_005257e8;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x58) = extraout_r3_01;
        *(undefined4 *)((int)register0x00000054 + -0x54) = extraout_r2_01;
        FUN_00099104();
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_005257d0;
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined1 **)((int)register0x00000054 + -0x5c) =
             (undefined1 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x58) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 2;
        k3c_internal_pkg_logger_Error();
        *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 0;
        uVar2 = (*(undefined4 **)((int)register0x00000054 + -0x34))[1];
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             **(undefined4 **)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x58) = uVar2;
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_005257d0;
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_005257d8;
        *(undefined4 *)((int)register0x00000054 + -0x58) = 2;
        *(undefined1 **)((int)register0x00000054 + -0x54) =
             (undefined1 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 1;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        k3c_internal_pkg_printer___Printer___set_state();
        return;
      }
      FUN_0042debc(puVar1,0,uVar2);
      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x30),
                   *(undefined4 *)((int)register0x00000054 + -0x58),
                   *(undefined4 *)((int)register0x00000054 + -0x5c));
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x58) = extraout_r3_02;
      *(undefined4 *)((int)register0x00000054 + -0x54) = extraout_r2_02;
      FUN_00099104();
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_005257d0;
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_005257ec;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 0x38;
      *(undefined1 **)((int)register0x00000054 + -0x54) =
           (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x50) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 2;
      k3c_internal_pkg_logger_Errorf();
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_005257f0;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 0x21;
      *(undefined1 **)((int)register0x00000054 + -0x54) =
           (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 1;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      k3c_internal_pkg_printer___Printer___set_state();
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x60);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x5257c0;
    param_1 = FUN_0009bf00(param_1);
  } while( true );
}



/* k3c/internal/app/system.onReady @ 005257f4 (size 108) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_app_system_onReady(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x525864;
    FUN_0009bf64();
  }
  uStack_c = _UNK_0052586c;
  uStack_8 = in_stack_00000004;
  puStack_4 = &uStack_c;
  k3c_internal_pkg_printer___Printer__OnReady();
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00525850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/app/system.onReady.func1 @ 00525870 (size 312) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_app_system_onReady_func1(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  int iStack_3c;
  undefined1 auStack_10 [8];
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x5259a4;
    FUN_0009bf00();
  }
  FUN_00054ee0();
  if (iStack_3c != 0) {
    FUN_0042debc();
    FUN_0009df04(0,auStack_10,iStack_3c,&stack0x00000004);
    FUN_00099104();
    FUN_0008f77c();
    uStack_8 = _UNK_005259ac;
    k3c_internal_pkg_logger_Errorf();
    FUN_0013b72c();
    k3c_internal_pkg_printer___Printer__Invoke_shutdown();
                    /* WARNING: Could not recover jumptable at 0x00525994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00525998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



