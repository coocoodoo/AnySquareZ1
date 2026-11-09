// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/fan   functions: 56
/* k3c/internal/pkg/fan.NewControllerFan @ 00567404 (size 1932) */

void k3c_internal_pkg_fan_NewControllerFan(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_r1;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_r1_00;
  int extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined *puVar5;
  undefined *extraout_r2;
  undefined *extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 uVar6;
  undefined4 extraout_r3;
  int iVar7;
  undefined4 *extraout_r3_00;
  int extraout_r3_01;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  bool bVar9;
  undefined8 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x68) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00567b94;
      FUN_00022cf8();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x60);
      uVar6 = **(undefined4 **)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_00567b98 != 0) {
        FUN_0009db54();
        *unaff_r8 = extraout_r3;
        puVar2 = extraout_r1;
        uVar6 = extraout_r3;
      }
      *(undefined4 **)((int)register0x00000054 + -0xc) = puVar2;
      *(undefined4 *)((int)register0x00000054 + -0x14) = uVar6;
      *puVar2 = uVar6;
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00567b9c;
      FUN_00022cf8();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x60);
      *puVar2 = PTR_k3c_internal_pkg_fan___ControllerFan__handle_ready_fm_00567ba0;
      if (*(int *)PTR_DAT_00567b98 == 0) {
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0xc);
      }
      else {
        puVar2 = (undefined4 *)FUN_0009db54();
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0xc);
        *unaff_r8 = uVar6;
      }
      *(undefined4 **)((int)register0x00000054 + -4) = puVar2;
      puVar2[1] = uVar6;
      uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x14) + 0x24);
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00567ba4;
      *(undefined4 *)((int)register0x00000054 + -0x60) = uVar6;
      *(undefined **)((int)register0x00000054 + -0x5c) =
           PTR_s_project_readyFIRMWARE_NAMEAsia_S_008262d0_0xd56_00567ba8;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 0xd;
      FUN_00093560();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x54);
      iVar7 = puVar2[1];
      uVar1 = puVar2[2];
      puVar5 = (undefined *)*puVar2;
      if (*(char *)((int)register0x00000054 + -0x50) == '\0') {
        uVar1 = 0;
        iVar7 = 0;
        puVar5 = PTR_DAT_00567bac;
      }
      uVar3 = iVar7 + 1;
      if (uVar1 < uVar3) {
        *(undefined **)((int)register0x00000054 + -100) = puVar5;
        *(uint *)((int)register0x00000054 + -0x60) = uVar3;
        *(uint *)((int)register0x00000054 + -0x5c) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00567bb0;
        FUN_000987f4();
        puVar5 = *(undefined **)((int)register0x00000054 + -0x50);
        uVar3 = *(uint *)((int)register0x00000054 + -0x4c);
        uVar1 = *(uint *)((int)register0x00000054 + -0x48);
      }
      *(uint *)((int)register0x00000054 + -0x20) = uVar3;
      *(uint *)((int)register0x00000054 + -0x24) = uVar1;
      if (*(int *)PTR_DAT_00567b98 == 0) {
        uVar6 = *(undefined4 *)((int)register0x00000054 + -4);
      }
      else {
        FUN_0009db64();
        uVar6 = *(undefined4 *)((int)register0x00000054 + -4);
        *unaff_r8 = uVar6;
        unaff_r8[1] = *(undefined4 *)(extraout_r2 + (uVar3 - 1) * 4);
        puVar5 = extraout_r2;
      }
      *(undefined **)((int)register0x00000054 + -8) = puVar5;
      *(undefined4 *)(puVar5 + (uVar3 - 1) * 4) = uVar6;
      uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x14) + 0x24);
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00567ba4;
      *(undefined4 *)((int)register0x00000054 + -0x60) = uVar6;
      *(undefined **)((int)register0x00000054 + -0x5c) =
           PTR_s_project_readyFIRMWARE_NAMEAsia_S_008262d0_0xd56_00567ba8;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 0xd;
      FUN_00093a08();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x54);
      puVar2[1] = *(undefined4 *)((int)register0x00000054 + -0x20);
      puVar2[2] = *(undefined4 *)((int)register0x00000054 + -0x24);
      if (*(int *)PTR_DAT_00567b98 == 0) {
        uVar6 = *(undefined4 *)((int)register0x00000054 + -8);
      }
      else {
        puVar2 = (undefined4 *)FUN_0009db64();
        uVar6 = *(undefined4 *)((int)register0x00000054 + -8);
        *unaff_r8 = uVar6;
        unaff_r8[1] = *puVar2;
      }
      *puVar2 = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           **(undefined4 **)((int)register0x00000054 + -0xc);
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00567b9c;
      FUN_00022cf8();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x60);
      *puVar2 = PTR_k3c_internal_pkg_fan___ControllerFan__handle_connect_fm_00567bb4;
      if (*(int *)PTR_DAT_00567b98 == 0) {
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0xc);
      }
      else {
        puVar2 = (undefined4 *)FUN_0009db54();
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0xc);
        *unaff_r8 = uVar6;
      }
      *(undefined4 **)((int)register0x00000054 + -4) = puVar2;
      puVar2[1] = uVar6;
      uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x10) + 0x24);
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00567ba4;
      *(undefined4 *)((int)register0x00000054 + -0x60) = uVar6;
      *(undefined **)((int)register0x00000054 + -0x5c) =
           PTR_s_project_connectlistening_on__sWe_008262d0_0x2a57_00567bb8;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 0xf;
      FUN_00093560();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x54);
      iVar7 = puVar2[1];
      uVar1 = puVar2[2];
      puVar5 = (undefined *)*puVar2;
      if (*(char *)((int)register0x00000054 + -0x50) == '\0') {
        uVar1 = 0;
        iVar7 = 0;
        puVar5 = PTR_DAT_00567bac;
      }
      uVar3 = iVar7 + 1;
      if (uVar1 < uVar3) {
        *(undefined **)((int)register0x00000054 + -100) = puVar5;
        *(uint *)((int)register0x00000054 + -0x60) = uVar3;
        *(uint *)((int)register0x00000054 + -0x5c) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00567bb0;
        FUN_000987f4();
        puVar5 = *(undefined **)((int)register0x00000054 + -0x50);
        uVar3 = *(uint *)((int)register0x00000054 + -0x4c);
        uVar1 = *(uint *)((int)register0x00000054 + -0x48);
      }
      *(uint *)((int)register0x00000054 + -0x20) = uVar3;
      *(uint *)((int)register0x00000054 + -0x24) = uVar1;
      if (*(int *)PTR_DAT_00567b98 == 0) {
        uVar6 = *(undefined4 *)((int)register0x00000054 + -4);
      }
      else {
        FUN_0009db64();
        uVar6 = *(undefined4 *)((int)register0x00000054 + -4);
        *unaff_r8 = uVar6;
        unaff_r8[1] = *(undefined4 *)(extraout_r2_00 + (uVar3 - 1) * 4);
        puVar5 = extraout_r2_00;
      }
      *(undefined **)((int)register0x00000054 + -8) = puVar5;
      *(undefined4 *)(puVar5 + (uVar3 - 1) * 4) = uVar6;
      uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x10) + 0x24);
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00567ba4;
      *(undefined4 *)((int)register0x00000054 + -0x60) = uVar6;
      *(undefined **)((int)register0x00000054 + -0x5c) =
           PTR_s_project_connectlistening_on__sWe_008262d0_0x2a57_00567bb8;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 0xf;
      FUN_00093a08();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x54);
      puVar2[1] = *(undefined4 *)((int)register0x00000054 + -0x20);
      puVar2[2] = *(undefined4 *)((int)register0x00000054 + -0x24);
      if (*(int *)PTR_DAT_00567b98 == 0) {
        uVar6 = *(undefined4 *)((int)register0x00000054 + -8);
      }
      else {
        puVar2 = (undefined4 *)FUN_0009db64();
        uVar6 = *(undefined4 *)((int)register0x00000054 + -8);
        *unaff_r8 = uVar6;
        unaff_r8[1] = *puVar2;
      }
      *puVar2 = uVar6;
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00567bac;
      *(undefined4 *)((int)register0x00000054 + -0x60) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
      FUN_0008f820();
      uVar6 = *(undefined4 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -100) = *(undefined4 *)((int)register0x00000054 + 4)
      ;
      *(undefined **)((int)register0x00000054 + -0x60) =
           PTR_s_stepperdiscardforwardindex___RFI_008216f7_0x7f3_00567bbc;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = 7;
      *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00567bc0;
      *(undefined4 *)((int)register0x00000054 + -0x54) = uVar6;
      *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_00567bc4;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x44) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getlist();
      *(undefined4 *)((int)register0x00000054 + -100) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      FUN_0008f820();
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00567bc0;
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      k3c_internal_pkg_util_cast_ToStringSlice();
      uVar4 = *(undefined4 *)((int)register0x00000054 + -0x54);
      uVar6 = *(undefined4 *)((int)register0x00000054 + -0x5c);
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0xc);
      puVar2[2] = *(undefined4 *)((int)register0x00000054 + -0x58);
      puVar2[3] = uVar4;
      if (*(int *)PTR_DAT_00567b98 != 0) {
        FUN_0009db64();
        *unaff_r8 = extraout_r2_01;
        unaff_r8[1] = extraout_r3_00[1];
        uVar6 = extraout_r2_01;
        puVar2 = extraout_r3_00;
      }
      puVar2[1] = uVar6;
      *(undefined4 *)((int)register0x00000054 + -100) = *puVar2;
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x5c) =
           PTR_s_stepper_enableheater_genericvirt_008262d0_0x1c06_00567bc8;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 0xe;
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00567bcc;
      *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_00567bac;
      k3c_internal_pkg_printer___Printer__Load_object();
      bVar9 = *(undefined **)((int)register0x00000054 + -0x4c) == PTR_DAT_00567bd0;
      if (bVar9) {
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x48);
        if (*(int *)PTR_DAT_00567b98 == 0) {
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0xc);
        }
        else {
          FUN_0009db64();
          *unaff_r8 = extraout_r1_00;
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0xc);
          unaff_r8[1] = puVar2[4];
          uVar6 = extraout_r1_00;
        }
        puVar2[4] = uVar6;
        *(undefined4 *)((int)register0x00000054 + -100) = *puVar2;
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x5c) =
             PTR_s_heaterstmc2209adxl345buttonsled__008216f7_0x506_00567bd4;
        *(undefined4 *)((int)register0x00000054 + -0x58) = 7;
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00567bcc;
        *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_00567bac;
        k3c_internal_pkg_printer___Printer__Load_object();
        iVar7 = *(int *)((int)register0x00000054 + -0xc);
        *(undefined4 *)(iVar7 + 0x18) = 0;
        *(undefined4 *)(iVar7 + 0x1c) = 0;
        if (*(int *)PTR_DAT_00567b98 != 0) {
          FUN_0009db54(0,iVar7,*(undefined4 *)(iVar7 + 0x14));
          *unaff_r8 = extraout_r2_02;
          iVar7 = extraout_r1_01;
        }
        *(undefined **)(iVar7 + 0x14) = PTR_DAT_00567bac;
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined8 *)((int)register0x00000054 + -0x60) = 0;
        k3c_internal_pkg_fan_NewFan();
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x58);
        if (*(int *)PTR_DAT_00567b98 == 0) {
          iVar7 = *(int *)((int)register0x00000054 + -0xc);
        }
        else {
          FUN_0009db64();
          *unaff_r8 = extraout_r1_02;
          iVar7 = *(int *)((int)register0x00000054 + -0xc);
          unaff_r8[1] = *(undefined4 *)(iVar7 + 0x20);
          uVar6 = extraout_r1_02;
        }
        *(undefined4 *)(iVar7 + 0x20) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x60) =
             PTR_s_fan_speedM106_S255max_poweroff_b_00823504_0x59c_00567bd8;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 9;
        *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00567bdc;
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00567be0;
        *(undefined8 *)((int)register0x00000054 + -0x50) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x48) = 0x3ff0000000000000;
        *(undefined8 *)((int)register0x00000054 + -0x40) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x38) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x30) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        uVar10 = *(undefined8 *)((int)register0x00000054 + -0x2c);
        *(undefined8 *)(*(int *)((int)register0x00000054 + -0xc) + 0x24) = uVar10;
        *(undefined8 *)((int)register0x00000054 + -0x1c) = uVar10;
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        FUN_0008f6c0();
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x5c);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00567be4;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 10;
        *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00567bdc;
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar6;
        *(undefined8 *)((int)register0x00000054 + -0x50) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x48) = 0x3ff0000000000000;
        *(undefined8 *)((int)register0x00000054 + -0x40) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x38) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x30) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        *(undefined8 *)(*(int *)((int)register0x00000054 + -0xc) + 0x2c) =
             *(undefined8 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00567be8;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 0xc;
        *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00567bec;
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00567bf0;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x48) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getint();
        *(undefined4 *)(*(int *)((int)register0x00000054 + -0xc) + 0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00567bf4;
        FUN_00022cf8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x60);
        puVar2[1] = 8;
        *puVar2 = PTR_s_extruder_s__s__sINIT_TMCstepper__008216f7_0x131d_00567bf8;
        *(undefined4 **)((int)register0x00000054 + -100) = puVar2;
        *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
        FUN_0008f820();
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00567bfc;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 6;
        *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00567bc0;
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar6;
        *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_00567bc4;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x44) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getlist();
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        FUN_0008f820();
        *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00567bc0;
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        k3c_internal_pkg_util_cast_ToStringSlice();
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x54);
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x5c);
        iVar7 = *(int *)((int)register0x00000054 + -0xc);
        *(undefined4 *)(iVar7 + 0x3c) = *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined4 *)(iVar7 + 0x40) = uVar4;
        if (*(int *)PTR_DAT_00567b98 != 0) {
          FUN_0009db64();
          *unaff_r8 = extraout_r2_03;
          unaff_r8[1] = *(undefined4 *)(extraout_r3_01 + 0x38);
          uVar6 = extraout_r2_03;
          iVar7 = extraout_r3_01;
        }
        *(undefined4 *)(iVar7 + 0x38) = uVar6;
        *(undefined4 *)(iVar7 + 0x44) = *(undefined4 *)(iVar7 + 0x34);
        *(undefined8 *)(iVar7 + 0x48) = 0;
        *(int *)((int)register0x00000054 + 8) = iVar7;
                    /* WARNING: Could not recover jumptable at 0x00567b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x68))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -100) =
           *(undefined **)((int)register0x00000054 + -0x4c);
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00567bd0;
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00567c00;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x68);
      if (bVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x567b8c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/fan.(*ControllerFan).handle_connect @ 00567c04 (size 1296) */

void k3c_internal_pkg_fan___ControllerFan__handle_connect(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_r1;
  uint uVar6;
  uint extraout_r2;
  int iVar7;
  int extraout_r2_00;
  uint uVar8;
  uint *extraout_r3;
  uint extraout_r3_00;
  uint uVar9;
  uint *extraout_r3_01;
  uint uVar10;
  uint uVar11;
  uint *unaff_r8;
  int iVar12;
  int unaff_r10;
  undefined4 unaff_lr;
  uint *in_stack_00000004;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint local_98;
  uint local_94;
  uint local_90;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  uint *local_38 [2];
  undefined1 auStack_30 [40];
  uint local_8;
  undefined4 local_4;
  
  while (auStack_30 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x568110;
    FUN_0009bf64();
  }
  uVar3 = *in_stack_00000004;
  uVar13 = 7;
  uVar4 = DAT_00568118;
  uVar15 = DAT_0056811c;
  uVar9 = DAT_00568120;
  k3c_internal_pkg_printer___Printer__Lookup_object();
  if (local_98 != DAT_00568124) {
    local_8 = DAT_00568124;
    local_4 = 0;
    k3c_internal_pkg_logger_Errorf();
    local_8 = DAT_00568124;
    local_4 = 0;
    FUN_001386c4();
    return;
  }
  uVar10 = in_stack_00000004[0xe];
  uVar11 = in_stack_00000004[0xf];
  puVar2 = in_stack_00000004;
  for (iVar1 = 0; iVar1 < (int)uVar11; iVar1 = iVar1 + 1) {
    uVar4 = *(uint *)(uVar10 + iVar1 * 8);
    uVar13 = *(uint *)(uVar10 + iVar1 * 8 + 4);
    uVar3 = local_94;
    k3c_internal_pkg_heater___PrinterHeaters__Lookup_heater();
    uVar5 = in_stack_00000004[7];
    uVar6 = in_stack_00000004[6] + 1;
    uVar8 = in_stack_00000004[5];
    puVar2 = in_stack_00000004;
    uVar14 = uVar15;
    if (uVar5 < uVar6) {
      uVar14 = 1;
      uVar3 = uVar8;
      uVar4 = uVar6;
      uVar9 = DAT_0056812c;
      FUN_000987f4();
      in_stack_00000004[7] = local_90;
      uVar8 = local_98;
      uVar6 = local_94;
      if (*DAT_00568130 != 0) {
        FUN_0009db64();
        *unaff_r8 = extraout_r1;
        unaff_r8[1] = extraout_r3[5];
        uVar8 = extraout_r1;
        uVar6 = extraout_r2;
        puVar2 = extraout_r3;
      }
      puVar2[5] = uVar8;
      uVar13 = uVar5;
    }
    puVar2[6] = uVar6;
    iVar7 = uVar6 - 1;
    if (*DAT_00568130 != 0) {
      puVar2 = (uint *)FUN_0009db64();
      *unaff_r8 = uVar15;
      unaff_r8[1] = *(uint *)(extraout_r3_00 + extraout_r2_00 * 4);
      iVar7 = extraout_r2_00;
      uVar8 = extraout_r3_00;
    }
    *(uint *)(uVar8 + iVar7 * 4) = uVar15;
    uVar15 = uVar14;
  }
  FUN_0009dee4(0,local_38,*(undefined4 *)(puVar2[4] + 4),puVar2,unaff_lr,uVar3,uVar4,uVar13,uVar15,
               uVar9);
  FUN_00091764();
  uVar4 = 0;
  uVar13 = 0;
  uVar3 = DAT_00568120;
  while (local_38[0] != (uint *)0x0) {
    uVar13 = uVar13 + 1;
    uVar10 = *local_38[0];
    uVar9 = local_38[0][1];
    if (uVar4 < uVar13) {
      uVar15 = 1;
      FUN_000987f4();
      uVar3 = local_98;
      uVar4 = local_90;
      uVar13 = local_94;
    }
    iVar1 = uVar13 - 1;
    *(uint *)(uVar3 + iVar1 * 8 + 4) = uVar9;
    if (*DAT_00568130 != 0) {
      uVar3 = FUN_0009db64();
      *unaff_r8 = uVar10;
      unaff_r8[1] = *(uint *)(uVar3 + iVar1 * 8);
    }
    *(uint *)(uVar3 + iVar1 * 8) = uVar10;
    FUN_000919c8();
  }
  uVar9 = in_stack_00000004[2];
  if (uVar9 != 0) {
    uVar4 = in_stack_00000004[1];
    iVar1 = 0;
    while( true ) {
      if ((int)uVar9 <= iVar1) {
        return;
      }
      iVar7 = *(int *)(uVar4 + iVar1 * 8 + 4);
      iVar12 = 0;
      while ((iVar12 < (int)uVar13 &&
             ((*(int *)(uVar3 + iVar12 * 8 + 4) != iVar7 || (FUN_00018250(), (char)uVar15 == '\0')))
             )) {
        iVar12 = iVar12 + 1;
      }
      if ((int)uVar13 <= iVar12) break;
      iVar1 = iVar1 + 1;
    }
    uVar16 = DAT_0056813c;
    FUN_0014f8fc();
    FUN_0009df04(0,&local_48);
    uVar3 = in_stack_00000004[3];
    FUN_0008f820();
    local_48 = DAT_00568140;
    local_44 = uVar16;
    FUN_0008f77c();
    local_40 = DAT_00568138;
    local_3c = uVar3;
    FUN_001386c4();
    return;
  }
  in_stack_00000004[2] = uVar13;
  in_stack_00000004[3] = uVar4;
  if (*DAT_00568130 != 0) {
    uVar3 = FUN_0009db64();
    *unaff_r8 = uVar3;
    unaff_r8[1] = extraout_r3_01[1];
    in_stack_00000004 = extraout_r3_01;
  }
  in_stack_00000004[1] = uVar3;
  return;
}



/* k3c/internal/pkg/fan.(*ControllerFan).handle_ready @ 00568148 (size 224) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_fan___ControllerFan__handle_ready(void)

{
  int iVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_logger_Debugf();
  k3c_internal_pkg_chelper__Cfunc_get_monotonic(in_stack_00000004);
  FUN_00022cf8();
  iVar1 = 0x33;
  _DAT_00000033 = DAT_00568234;
  if (*DAT_00568238 != 0) {
    iVar1 = FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
  }
  *(undefined4 *)(iVar1 + 4) = in_stack_00000004;
  k3c_internal_pkg_reactor___Reactor__Register_timer();
  return;
}



/* k3c/internal/pkg/fan.(*ControllerFan).Get_status @ 00568240 (size 232) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_fan___ControllerFan__Get_status(void)

{
  int iVar1;
  int *piVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  uint in_fpscr;
  double dVar3;
  uint unaff_s30;
  int in_stack_00000004;
  undefined4 in_stack_00000010;
  double *pdStack_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x568324;
    FUN_0009bf64();
  }
  iVar1 = *(int *)(in_stack_00000004 + 0x20);
  FUN_000908bc();
  dVar3 = *(double *)(iVar1 + 0x14);
  FUN_00093a08();
  *pdStack_1c = dVar3;
  piVar2 = *(int **)(iVar1 + 0x3c);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    dVar3 = 0.0;
  }
  else {
    dVar3 = (double)VectorSignedToFloat(unaff_s30 & 0xffff0000 | piVar2[1] & 0xffffU,
                                        (byte)(in_fpscr >> 0x16) & 3);
    dVar3 = (*(double *)(iVar1 + 0x18) * 30.0) / dVar3;
  }
  FUN_00093a08();
  *pdStack_1c = dVar3;
                    /* WARNING: Could not recover jumptable at 0x00568318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.(*ControllerFan).callback @ 00568338 (size 556) */

void k3c_internal_pkg_fan___ControllerFan__callback(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  int unaff_r10;
  double dVar6;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  iVar1 = *(int *)(in_stack_00000004 + 4);
  iVar2 = *(int *)(in_stack_00000004 + 8);
  bVar4 = 0;
  for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
    uVar5 = *(undefined4 *)(iVar1 + iVar3 * 8 + 4);
    k3c_internal_pkg_toolhead___PrinterStepperEnable__Lookup_enable();
    if (local_40 == 0) {
      bVar4 = bVar4 | *(byte *)(local_44 + 0x14);
    }
    else {
      FUN_0009df04(0,&local_10);
      FUN_0008f77c();
      local_10 = DAT_00568568;
      if (local_40 == 0) {
        local_8 = 0;
      }
      else {
        local_8 = *(undefined4 *)(local_40 + 4);
      }
      local_44 = 2;
      local_40 = 2;
      local_c = uVar5;
      k3c_internal_pkg_logger_Errorf();
    }
  }
  iVar1 = *(int *)(in_stack_00000004 + 0x18);
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    k3c_internal_pkg_heater___Heater__Get_temp();
    bVar4 = bVar4 | 0.0 < (double)CONCAT44(uStack_38,local_3c);
  }
  if (bVar4 == 0) {
    if (*(int *)(in_stack_00000004 + 0x44) < *(int *)(in_stack_00000004 + 0x34)) {
      dVar6 = *(double *)(in_stack_00000004 + 0x2c);
      *(int *)(in_stack_00000004 + 0x44) = *(int *)(in_stack_00000004 + 0x44) + 1;
    }
    else {
      dVar6 = 0.0;
    }
  }
  else {
    *(undefined4 *)(in_stack_00000004 + 0x44) = 0;
    dVar6 = *(double *)(in_stack_00000004 + 0x24);
  }
  if (dVar6 != *(double *)(in_stack_00000004 + 0x48)) {
    *(double *)(in_stack_00000004 + 0x48) = dVar6;
    k3c_internal_pkg_fan___Fan__set_speed();
  }
  return;
}



/* k3c/internal/pkg/fan.Load_config_controller_fan @ 00568570 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_fan_Load_config_controller_fan(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x5685a8;
    FUN_0009bf64();
  }
  k3c_internal_pkg_fan_NewControllerFan();
  in_stack_00000008 = _UNK_005685b0;
                    /* WARNING: Could not recover jumptable at 0x0056859c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.NewCustomTempertureFan @ 005685b4 (size 600) */

void k3c_internal_pkg_fan_NewCustomTempertureFan(void)

{
  undefined *puVar1;
  int *piVar2;
  undefined8 *extraout_r1;
  undefined8 *extraout_r1_00;
  int extraout_r2;
  int iVar3;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined8 *in_stack_00000008;
  undefined8 *puStack_54;
  undefined8 uStack_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x568808;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  if (*(int *)PTR_DAT_00568814 != 0) {
    FUN_0009db54();
    *unaff_r8 = (int)in_stack_00000004;
    puStack_54 = extraout_r1;
  }
  *(int **)(puStack_54 + 1) = in_stack_00000004;
  iVar3 = *in_stack_00000004;
  if (*(int *)PTR_DAT_00568814 != 0) {
    FUN_0009db54();
    *unaff_r8 = extraout_r3;
    puStack_54 = extraout_r1_00;
    iVar3 = extraout_r3;
  }
  *(int *)((int)puStack_54 + 0xc) = iVar3;
  puVar1 = PTR_s_fan_target_tempkick_start_timepr_008262d0_0x2d9f_00568818;
  k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
  *puStack_54 = uStack_20;
  FUN_00022cf8();
  *(undefined **)puVar1 = PTR_k3c_internal_pkg_fan___CustomTempertureFan__handle_ready_fm_00568828;
  if (*(int *)PTR_DAT_00568814 != 0) {
    puVar1 = (undefined *)FUN_0009db54();
    *unaff_r8 = (int)puStack_54;
  }
  *(undefined8 **)(puVar1 + 4) = puStack_54;
  FUN_00093560();
  piVar2 = (int *)PTR_DAT_00568838;
  FUN_000987f4();
  iVar3 = 0;
  if (*(int *)PTR_DAT_00568814 != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puVar1;
    unaff_r8[1] = *(int *)(extraout_r2 + -4);
    iVar3 = extraout_r2;
  }
  *(undefined **)(iVar3 + -4) = puVar1;
  FUN_00093a08();
  *(undefined4 *)((int)piVar2 + 4) = 0;
  *(undefined4 *)((int)piVar2 + 8) = 0;
  if (*(int *)PTR_DAT_00568814 != 0) {
    piVar2 = (int *)FUN_0009db64();
    *unaff_r8 = iVar3;
    unaff_r8[1] = *piVar2;
  }
  *piVar2 = iVar3;
  in_stack_00000008 = puStack_54;
                    /* WARNING: Could not recover jumptable at 0x005687fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.(*CustomTempertureFan).handle_ready @ 0056883c (size 452) */

void k3c_internal_pkg_fan___CustomTempertureFan__handle_ready(void)

{
  undefined4 *puVar1;
  int extraout_r1;
  int iVar2;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int local_24;
  
  while (iVar2 = DAT_00568a08, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_printer___Printer__Lookup_object();
  puVar1 = DAT_00568a14;
  if (local_24 == DAT_00568a10) {
    k3c_internal_pkg_heater___PrinterHeaters__Lookup_heater();
    if (*DAT_00568a18 != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(int *)(in_stack_00000004 + 0x10);
      iVar2 = extraout_r1;
    }
    *(int *)(in_stack_00000004 + 0x10) = iVar2;
    k3c_internal_pkg_chelper__Cfunc_get_monotonic(in_stack_00000004);
    FUN_00022cf8();
    *puVar1 = DAT_00568a20;
    if (*DAT_00568a18 != 0) {
      puVar1 = (undefined4 *)FUN_0009db54();
      *unaff_r8 = in_stack_00000004;
    }
    puVar1[1] = in_stack_00000004;
    k3c_internal_pkg_reactor___Reactor__Register_timer();
    return;
  }
  k3c_internal_pkg_logger_Errorf();
  FUN_001386c4();
  return;
}



/* k3c/internal/pkg/fan.(*CustomTempertureFan).callback @ 00568a30 (size 760) */

void k3c_internal_pkg_fan___CustomTempertureFan__callback(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  undefined8 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
      *(undefined8 *)((int)register0x00000054 + -0x28) =
           *(undefined8 *)((int)register0x00000054 + 8);
      k3c_internal_pkg_heater___Heater__Get_temp();
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      *(undefined8 *)((int)register0x00000054 + -0x10) =
           *(undefined8 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_00568d2c;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 0xb;
      *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_00568d30;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_00568d34;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      uVar6 = *(int *)((int)register0x00000054 + -0x18) == 0;
      if (!(bool)uVar6) {
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00568d38;
        *(int *)((int)register0x00000054 + -0x28) = *(int *)((int)register0x00000054 + -0x18);
        FUN_00020dac();
        uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_00568d3c;
        *(undefined4 *)((int)register0x00000054 + -0x24) = 3;
        *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_00568d30;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_00568d34;
        k3c_internal_pkg_printer___Printer__Lookup_object();
        uVar7 = CONCAT44(DAT_00568d40,*(int *)((int)register0x00000054 + -0x18));
        uVar6 = 0;
        if (*(int *)((int)register0x00000054 + -0x18) == DAT_00568d40) {
          pcVar1 = *(code **)(*(int *)((int)register0x00000054 + -4) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -8);
          (*pcVar1)();
          if (*(char *)((int)register0x00000054 + -0x28) == '\0') {
            if (*(char *)(**(int **)((int)register0x00000054 + -4) + 0x40) == '\0') {
              iVar3 = *(int *)((int)register0x00000054 + 4);
            }
            else {
              iVar3 = *(int *)((int)register0x00000054 + 4);
              if (*(char *)(iVar3 + 0x15) == '\0') goto LAB_00568cbc;
            }
            *(undefined4 *)((int)register0x00000054 + -0x2c) = *(undefined4 *)(iVar3 + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_00568d44;
            *(undefined4 *)((int)register0x00000054 + -0x24) = 5;
            *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_00568d30;
            *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_00568d34;
            k3c_internal_pkg_printer___Printer__Lookup_object();
            uVar7 = CONCAT44(DAT_00568d48,*(int *)((int)register0x00000054 + -0x18));
            uVar6 = 0;
            if (*(int *)((int)register0x00000054 + -0x18) == DAT_00568d48) {
              uVar2 = *(undefined4 *)((int)register0x00000054 + -0x14);
              pdVar4 = *(double **)((int)register0x00000054 + 4);
              *(undefined1 *)((int)pdVar4 + 0x15) = 0;
              if ((*(double *)((int)register0x00000054 + -0x10) < *pdVar4) ||
                 (*(char *)((int)pdVar4 + 0x14) != '\0')) {
                if ((*(double *)((int)register0x00000054 + -0x10) < *pdVar4) &&
                   (*(char *)((int)pdVar4 + 0x14) != '\0')) {
                  *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar2;
                  *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_00568d50;
                  *(undefined4 *)((int)register0x00000054 + -0x24) = 4;
                  k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
                  *(undefined1 *)(*(int *)((int)register0x00000054 + 4) + 0x14) = 0;
                  *(undefined1 *)(**(int **)((int)register0x00000054 + -4) + 0x40) = 0;
                }
              }
              else {
                *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar2;
                *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_00568d4c;
                *(undefined4 *)((int)register0x00000054 + -0x24) = 9;
                k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
                *(undefined1 *)(*(int *)((int)register0x00000054 + 4) + 0x14) = 1;
                *(undefined1 *)(**(int **)((int)register0x00000054 + -4) + 0x40) = 0;
              }
LAB_00568cbc:
              *(double *)((int)register0x00000054 + 0x10) =
                   *(double *)((int)register0x00000054 + 8) + 1.0;
              return;
            }
          }
          else {
            *(undefined4 *)((int)register0x00000054 + -0x2c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_00568d44;
            *(undefined4 *)((int)register0x00000054 + -0x24) = 5;
            *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_00568d30;
            *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_00568d34;
            k3c_internal_pkg_printer___Printer__Lookup_object();
            uVar6 = *(int *)((int)register0x00000054 + -0x18) == DAT_00568d48;
            if ((bool)uVar6) {
              *(undefined4 *)((int)register0x00000054 + -0x2c) =
                   *(undefined4 *)((int)register0x00000054 + -0x14);
              *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_00568d50;
              *(undefined4 *)((int)register0x00000054 + -0x24) = 4;
              k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
              *(undefined1 *)(**(int **)((int)register0x00000054 + -4) + 0x40) = 0;
              iVar3 = *(int *)((int)register0x00000054 + 4);
              *(undefined1 *)(iVar3 + 0x14) = 0;
              *(undefined1 *)(iVar3 + 0x15) = 1;
              goto LAB_00568cbc;
            }
            *(int *)((int)register0x00000054 + -0x2c) = *(int *)((int)register0x00000054 + -0x18);
            *(int *)((int)register0x00000054 + -0x28) = DAT_00568d48;
            *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_00568d54;
            uVar7 = FUN_000209b4();
          }
          *(undefined8 *)((int)register0x00000054 + -0x2c) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_00568d54;
          uVar7 = FUN_000209b4();
        }
        *(undefined8 *)((int)register0x00000054 + -0x2c) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_00568d54;
        FUN_000209b4();
      }
      *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00568d58;
      param_1 = FUN_00020b18();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x568d24;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/fan.Load_config_CustomTempertureFan @ 00568d5c (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_fan_Load_config_CustomTempertureFan(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x568d94;
    FUN_0009bf64();
  }
  k3c_internal_pkg_fan_NewCustomTempertureFan();
  in_stack_00000008 = _UNK_00568d9c;
                    /* WARNING: Could not recover jumptable at 0x00568d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.NewFan @ 00568da0 (size 2568) */

void k3c_internal_pkg_fan_NewFan(undefined4 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int *piVar5;
  int *extraout_r1;
  undefined4 uVar6;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  uint uVar7;
  int *piVar8;
  int *extraout_r2;
  code *pcVar9;
  undefined *extraout_r2_00;
  undefined *extraout_r2_01;
  byte extraout_r3;
  byte bVar10;
  int iVar11;
  int extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 *puVar12;
  int iVar13;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar14;
  undefined4 unaff_lr;
  bool bVar15;
  double dVar16;
  undefined8 uVar17;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x40)) {
      puVar14 = (undefined1 *)((int)register0x00000054 + -0xc0);
      *(undefined4 *)((int)register0x00000054 + -0xc0) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0xbc) = PTR_DAT_005695a0;
      FUN_00022cf8();
      piVar5 = *(int **)((int)register0x00000054 + -0xb8);
      piVar8 = *(int **)((int)register0x00000054 + 4);
      iVar11 = *piVar8;
      if (*(int *)PTR_DAT_005695a4 != 0) {
        FUN_0009db54();
        *unaff_r8 = extraout_r3_00;
        piVar5 = extraout_r1;
        piVar8 = extraout_r2;
        iVar11 = extraout_r3_00;
      }
      *(int **)((int)register0x00000054 + -4) = piVar5;
      *piVar5 = iVar11;
      piVar5[1] = 0;
      piVar5[2] = 0;
      piVar5[5] = 0;
      piVar5[6] = 0;
      piVar5[3] = 0;
      piVar5[4] = 0;
      *(int **)((int)register0x00000054 + -0xbc) = piVar8;
      *(undefined **)((int)register0x00000054 + -0xb8) =
           PTR_s_max_poweroff_belowpwm_tableFORBI_00823504_0x5ae_005695a8;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = 9;
      *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_005695ac;
      *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_005695b0;
      *(undefined8 *)((int)register0x00000054 + -0xa8) = 0;
      *(undefined8 *)((int)register0x00000054 + -0xa0) = 0x3ff0000000000000;
      *(undefined8 *)((int)register0x00000054 + -0x98) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x90) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x88) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
      dVar16 = *(double *)((int)register0x00000054 + -0x84);
      *(double *)(*(int *)((int)register0x00000054 + -4) + 0x1c) = dVar16;
      if (0.0 < dVar16) {
        *(undefined4 *)((int)register0x00000054 + -0xbc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0xb8) =
             PTR_s_kick_start_timeprint_is_cancelun_008262d0_0x2dae_005695b4;
        *(undefined4 *)((int)register0x00000054 + -0xb4) = 0xf;
        *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_005695ac;
        *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_005695b8;
        *(undefined8 *)((int)register0x00000054 + -0xa8) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xa0) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x98) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x90) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x88) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        *(undefined8 *)(*(int *)((int)register0x00000054 + -4) + 0x24) =
             *(undefined8 *)((int)register0x00000054 + -0x84);
        *(undefined4 *)((int)register0x00000054 + -0xbc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0xb8) =
             PTR_s_off_belowpwm_tableFORBIDDEN__col_00823504_0x5b7_005695bc;
        *(undefined4 *)((int)register0x00000054 + -0xb4) = 9;
        *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_005695ac;
        *(undefined **)((int)register0x00000054 + -0xac) = PTR_SUB_005695c0;
        *(undefined8 *)((int)register0x00000054 + -0xa8) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xa0) = 0x3ff0000000000000;
        *(undefined8 *)((int)register0x00000054 + -0x98) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x90) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x88) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        *(undefined8 *)(*(int *)((int)register0x00000054 + -4) + 0x2c) =
             *(undefined8 *)((int)register0x00000054 + -0x84);
        *(undefined4 *)((int)register0x00000054 + -0xbc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_005695c4;
        *(undefined4 *)((int)register0x00000054 + -0xb4) = 10;
        *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_005695ac;
        *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_005695c8;
        *(undefined8 *)((int)register0x00000054 + -0xa8) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xa0) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x98) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x90) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x88) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        if (0.0 < *(double *)((int)register0x00000054 + -0x84)) {
          *(double *)((int)register0x00000054 + -0x6c) =
               *(double *)((int)register0x00000054 + -0x84);
          *(undefined4 *)((int)register0x00000054 + -0xbc) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined **)((int)register0x00000054 + -0xb8) =
               PTR_s_hardware_pwmdisable_rfidassist_e_008262d0_0x239_005695cc;
          *(undefined4 *)((int)register0x00000054 + -0xb4) = 0xc;
          *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_005695d0;
          *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_005695d4;
          *(undefined1 *)((int)register0x00000054 + -0xa8) = 0;
          k3c_internal_pkg_printer___ConfigWrapper__Getboolean();
          *(undefined1 *)((int)register0x00000054 + -0x79) =
               *(undefined1 *)((int)register0x00000054 + -0xa4);
          *(undefined8 *)((int)register0x00000054 + -0x5c) =
               *(undefined8 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0xbc) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -0xb8) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          FUN_0008f6c0();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0xb4);
          *(undefined4 *)((int)register0x00000054 + -0xbc) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined **)((int)register0x00000054 + -0xb8) =
               PTR_s_shutdown_speedtachometer_pintach_008262d0_0x20ac_005695d8;
          *(undefined4 *)((int)register0x00000054 + -0xb4) = 0xe;
          *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_005695ac;
          *(undefined4 *)((int)register0x00000054 + -0xac) = uVar1;
          *(undefined8 *)((int)register0x00000054 + -0xa8) = 0;
          *(undefined8 *)((int)register0x00000054 + -0xa0) = 0x3ff0000000000000;
          *(undefined8 *)((int)register0x00000054 + -0x98) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x90) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x88) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          uVar1 = **(undefined4 **)((int)register0x00000054 + -4);
          *(undefined8 *)((int)register0x00000054 + -0x78) =
               *(undefined8 *)((int)register0x00000054 + -0x84);
          *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar1;
          *(undefined **)((int)register0x00000054 + -0xb8) =
               PTR_s_pinsM106tcp_initbusy1a86baud_to_M_00820821_0x231_005695dc;
          *(undefined4 *)((int)register0x00000054 + -0xb4) = 4;
          *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_005695e0;
          *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_005695e4;
          k3c_internal_pkg_printer___Printer__Lookup_object();
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -0xa8);
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -0xa4);
          *(undefined4 *)((int)register0x00000054 + -0xbc) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_005695e8;
          *(undefined4 *)((int)register0x00000054 + -0xb4) = 3;
          *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_005695e0;
          *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_005695e4;
          *(undefined1 *)((int)register0x00000054 + -0xa8) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Get();
          uVar17 = CONCAT44(PTR_DAT_005695ec,*(undefined **)((int)register0x00000054 + -0xa4));
          if (*(undefined **)((int)register0x00000054 + -0xa4) == PTR_DAT_005695ec) {
            puVar2 = *(undefined **)((int)register0x00000054 + -0x70);
            puVar3 = PTR_DAT_005695f0;
            if (puVar2 == PTR_DAT_005695f0) {
              uVar6 = **(undefined4 **)((int)register0x00000054 + -0xa0);
              uVar1 = (*(undefined4 **)((int)register0x00000054 + -0xa0))[1];
              *(undefined4 *)((int)register0x00000054 + -0xbc) =
                   *(undefined4 *)((int)register0x00000054 + -0x44);
              *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_005695f4;
              *(undefined4 *)((int)register0x00000054 + -0xb4) = 3;
              *(undefined4 *)((int)register0x00000054 + -0xb0) = uVar6;
              *(undefined4 *)((int)register0x00000054 + -0xac) = uVar1;
              k3c_internal_pkg_pins___PrinterPins__Setup_pin();
              uVar17 = CONCAT44(PTR_DAT_005695f8,*(undefined **)((int)register0x00000054 + -0xa8));
              if (*(undefined **)((int)register0x00000054 + -0xa8) == PTR_DAT_005695f8) {
                iVar11 = *(int *)PTR_DAT_005695a4;
                bVar10 = *(byte *)((int)register0x00000054 + -0x79);
                iVar13 = *(int *)((int)register0x00000054 + -0xa4);
                *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_005695d4 + (uint)bVar10 * 8;
                if (iVar11 == 0) {
                  iVar11 = *(int *)((int)register0x00000054 + -4);
                }
                else {
                  FUN_0009db64();
                  *unaff_r8 = iVar13;
                  iVar11 = *(int *)((int)register0x00000054 + -4);
                  unaff_r8[1] = *(int *)(iVar11 + 0x34);
                  bVar10 = extraout_r3;
                }
                *(int *)(iVar11 + 0x34) = iVar13;
                *(undefined8 *)(iVar13 + 0x3c) = 0;
                puVar12 = *(undefined4 **)(iVar11 + 0x34);
                *(undefined8 *)(puVar12 + 9) = *(undefined8 *)((int)register0x00000054 + -0x6c);
                *(byte *)(puVar12 + 6) = bVar10;
                FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x30));
                uVar1 = puVar12[1];
                *(undefined4 *)((int)register0x00000054 + -0xbc) = *puVar12;
                *(undefined4 *)((int)register0x00000054 + -0xb8) = uVar1;
                FUN_0008f77c();
                *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_005695ec;
                *(undefined4 *)((int)register0x00000054 + -0x2c) =
                     *(undefined4 *)((int)register0x00000054 + -0xb4);
                *(undefined8 *)((int)register0x00000054 + -100) =
                     *(undefined8 *)((int)register0x00000054 + -0x6c);
                *(undefined4 *)((int)register0x00000054 + -0xbc) =
                     *(undefined4 *)((int)register0x00000054 + -100);
                *(undefined4 *)((int)register0x00000054 + -0xb8) =
                     *(undefined4 *)((int)register0x00000054 + -0x60);
                FUN_0008f6c0();
                *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_005695ac;
                *(undefined4 *)((int)register0x00000054 + -0x24) =
                     *(undefined4 *)((int)register0x00000054 + -0xb4);
                *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_005695d0;
                *(undefined4 *)((int)register0x00000054 + -0x1c) =
                     *(undefined4 *)((int)register0x00000054 + -8);
                *(undefined **)((int)register0x00000054 + -0xbc) = PTR_DAT_005695fc;
                *(undefined4 *)((int)register0x00000054 + -0xb8) = 0x23;
                *(undefined1 **)((int)register0x00000054 + -0xb4) =
                     (undefined1 *)((int)register0x00000054 + -0x30);
                *(undefined4 *)((int)register0x00000054 + -0xb0) = 3;
                *(undefined4 *)((int)register0x00000054 + -0xac) = 3;
                k3c_internal_pkg_logger_Debugf();
                iVar11 = *(int *)((int)register0x00000054 + 4);
                uVar1 = *(undefined4 *)(iVar11 + 0x10);
                FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x40),iVar11,
                             *(undefined4 *)(iVar11 + 0xc));
                *(undefined4 *)((int)register0x00000054 + -0xbc) = extraout_r3_01;
                *(undefined4 *)((int)register0x00000054 + -0xb8) = uVar1;
                FUN_0008f77c();
                *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_005695ec;
                *(undefined4 *)((int)register0x00000054 + -0x3c) =
                     *(undefined4 *)((int)register0x00000054 + -0xb4);
                *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_005695d0;
                *(undefined4 *)((int)register0x00000054 + -0x34) =
                     *(undefined4 *)((int)register0x00000054 + -8);
                *(undefined **)((int)register0x00000054 + -0xbc) = PTR_DAT_00569600;
                *(undefined4 *)((int)register0x00000054 + -0xb8) = 0x21;
                *(undefined1 **)((int)register0x00000054 + -0xb4) =
                     (undefined1 *)((int)register0x00000054 + -0x40);
                *(undefined4 *)((int)register0x00000054 + -0xb0) = 2;
                *(undefined4 *)((int)register0x00000054 + -0xac) = 2;
                k3c_internal_pkg_logger_Debugf();
                *(undefined8 *)((int)register0x00000054 + -0xbc) =
                     *(undefined8 *)(*(int *)((int)register0x00000054 + -4) + 0x1c);
                *(undefined8 *)((int)register0x00000054 + -0xb4) =
                     *(undefined8 *)((int)register0x00000054 + -0x78);
                FUN_000afda8();
                *(undefined8 *)((int)register0x00000054 + -0xbc) = 0;
                *(undefined8 *)((int)register0x00000054 + -0xb4) =
                     *(undefined8 *)((int)register0x00000054 + -0xac);
                FUN_000afca0();
                *(undefined4 *)((int)register0x00000054 + -0xbc) =
                     *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x34);
                *(undefined8 *)((int)register0x00000054 + -0xb8) = 0;
                *(undefined8 *)((int)register0x00000054 + -0xb0) =
                     *(undefined8 *)((int)register0x00000054 + -0xac);
                k3c_internal_pkg_mcu___MCU_pwm__Setup_start_value();
                if (*(int *)PTR_DAT_005695a4 == 0) {
                  iVar11 = *(int *)((int)register0x00000054 + -4);
                }
                else {
                  uVar17 = FUN_0009db54(*(int *)((int)register0x00000054 + -4),
                                        *(undefined4 *)
                                         (*(int *)((int)register0x00000054 + -4) + 0x38));
                  iVar11 = (int)uVar17;
                  *unaff_r8 = (int)((ulonglong)uVar17 >> 0x20);
                }
                *(undefined4 *)(iVar11 + 0x38) = 0;
                uVar1 = *(undefined4 *)PTR_DAT_00569604;
                uVar6 = *(undefined4 *)PTR_DAT_00569608;
                *(undefined4 *)((int)register0x00000054 + -0xbc) =
                     *(undefined4 *)((int)register0x00000054 + 4);
                *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0056960c;
                *(undefined4 *)((int)register0x00000054 + -0xb4) = 10;
                *(undefined4 *)((int)register0x00000054 + -0xb0) = uVar1;
                *(undefined4 *)((int)register0x00000054 + -0xac) = uVar6;
                *(undefined1 *)((int)register0x00000054 + -0xa8) = 1;
                k3c_internal_pkg_printer___ConfigWrapper__Get();
                puVar3 = *(undefined **)((int)register0x00000054 + -0xa4);
                uVar17 = CONCAT44(PTR_DAT_005695ec,puVar3);
                if (puVar3 == (undefined *)0x0) {
                  iVar11 = *(int *)((int)register0x00000054 + -4);
LAB_005693c4:
                  *(undefined4 *)((int)register0x00000054 + -0x4c) =
                       *(undefined4 *)(*(int *)(iVar11 + 0x34) + 0xc);
                  *(undefined **)((int)register0x00000054 + -0xbc) = PTR_DAT_00569618;
                  FUN_00022cf8();
                  puVar12 = *(undefined4 **)((int)register0x00000054 + -0xb8);
                  *puVar12 = PTR_k3c_internal_pkg_fan___Fan___apply_speed_fm_0056961c;
                  if (*(int *)PTR_DAT_005695a4 == 0) {
                    iVar11 = *(int *)((int)register0x00000054 + -4);
                  }
                  else {
                    puVar12 = (undefined4 *)FUN_0009db54();
                    iVar11 = *(int *)((int)register0x00000054 + -4);
                    *unaff_r8 = iVar11;
                  }
                  puVar12[1] = iVar11;
                  pcVar9 = (code *)**(undefined4 **)PTR_DAT_00569620;
                  *(undefined4 *)((int)register0x00000054 + -0xbc) =
                       *(undefined4 *)((int)register0x00000054 + 4);
                  *(undefined4 *)((int)register0x00000054 + -0xb8) =
                       *(undefined4 *)((int)register0x00000054 + -0x4c);
                  *(undefined4 **)((int)register0x00000054 + -0xb4) = puVar12;
                  (*pcVar9)();
                  iVar11 = *(int *)((int)register0x00000054 + -0xb0);
                  if (*(int *)PTR_DAT_005695a4 == 0) {
                    iVar13 = *(int *)((int)register0x00000054 + -4);
                  }
                  else {
                    FUN_0009db64();
                    *unaff_r8 = extraout_r1_01;
                    iVar13 = *(int *)((int)register0x00000054 + -4);
                    unaff_r8[1] = *(int *)(iVar13 + 0x44);
                    iVar11 = extraout_r1_01;
                  }
                  *(int *)(iVar13 + 0x44) = iVar11;
                  *(undefined4 *)((int)register0x00000054 + -0xbc) =
                       *(undefined4 *)((int)register0x00000054 + 4);
                  k3c_internal_pkg_fan_NewFanTachometer();
                  iVar11 = *(int *)((int)register0x00000054 + -0xb8);
                  if (*(int *)PTR_DAT_005695a4 == 0) {
                    puVar12 = *(undefined4 **)((int)register0x00000054 + -4);
                  }
                  else {
                    FUN_0009db64();
                    *unaff_r8 = extraout_r1_02;
                    puVar12 = *(undefined4 **)((int)register0x00000054 + -4);
                    unaff_r8[1] = puVar12[0xf];
                    iVar11 = extraout_r1_02;
                  }
                  puVar12[0xf] = iVar11;
                  *(undefined4 *)((int)register0x00000054 + -0x48) = *puVar12;
                  *(undefined **)((int)register0x00000054 + -0xbc) = PTR_DAT_00569618;
                  FUN_00022cf8();
                  puVar12 = *(undefined4 **)((int)register0x00000054 + -0xb8);
                  *puVar12 = PTR_k3c_internal_pkg_fan___Fan___handle_request_restart_fm_00569624;
                  if (*(int *)PTR_DAT_005695a4 == 0) {
                    iVar11 = *(int *)((int)register0x00000054 + -4);
                  }
                  else {
                    puVar12 = (undefined4 *)FUN_0009db54();
                    iVar11 = *(int *)((int)register0x00000054 + -4);
                    *unaff_r8 = iVar11;
                  }
                  *(undefined4 **)((int)register0x00000054 + -0xc) = puVar12;
                  puVar12[1] = iVar11;
                  uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x48) + 0x24);
                  *(undefined **)((int)register0x00000054 + -0xbc) = PTR_DAT_00569628;
                  *(undefined4 *)((int)register0x00000054 + -0xb8) = uVar1;
                  *(undefined **)((int)register0x00000054 + -0xb4) = PTR_DAT_0056962c;
                  *(undefined4 *)((int)register0x00000054 + -0xb0) = 0x15;
                  FUN_00093560();
                  puVar12 = *(undefined4 **)((int)register0x00000054 + -0xac);
                  iVar11 = puVar12[1];
                  uVar4 = puVar12[2];
                  puVar3 = (undefined *)*puVar12;
                  if (*(char *)((int)register0x00000054 + -0xa8) == '\0') {
                    uVar4 = 0;
                    iVar11 = 0;
                    puVar3 = PTR_DAT_005695e4;
                  }
                  uVar7 = iVar11 + 1;
                  if (uVar4 < uVar7) {
                    *(undefined **)((int)register0x00000054 + -0xbc) = puVar3;
                    *(uint *)((int)register0x00000054 + -0xb8) = uVar7;
                    *(uint *)((int)register0x00000054 + -0xb4) = uVar4;
                    *(undefined4 *)((int)register0x00000054 + -0xb0) = 1;
                    *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_00569630;
                    FUN_000987f4();
                    puVar3 = *(undefined **)((int)register0x00000054 + -0xa8);
                    uVar7 = *(uint *)((int)register0x00000054 + -0xa4);
                    uVar4 = *(uint *)((int)register0x00000054 + -0xa0);
                  }
                  *(uint *)((int)register0x00000054 + -0x50) = uVar7;
                  *(uint *)((int)register0x00000054 + -0x54) = uVar4;
                  if (*(int *)PTR_DAT_005695a4 == 0) {
                    iVar11 = *(int *)((int)register0x00000054 + -0xc);
                  }
                  else {
                    FUN_0009db64();
                    iVar11 = *(int *)((int)register0x00000054 + -0xc);
                    *unaff_r8 = iVar11;
                    unaff_r8[1] = *(int *)(extraout_r2_00 + (uVar7 - 1) * 4);
                    puVar3 = extraout_r2_00;
                  }
                  *(undefined **)((int)register0x00000054 + -0x10) = puVar3;
                  *(int *)(puVar3 + (uVar7 - 1) * 4) = iVar11;
                  uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x48) + 0x24);
                  *(undefined **)((int)register0x00000054 + -0xbc) = PTR_DAT_00569840;
                  *(undefined4 *)((int)register0x00000054 + -0xb8) = uVar1;
                  *(undefined **)((int)register0x00000054 + -0xb4) = PTR_DAT_00569844;
                  *(undefined4 *)((int)register0x00000054 + -0xb0) = 0x15;
                  FUN_00093a08();
                  piVar5 = *(int **)((int)register0x00000054 + -0xac);
                  piVar5[1] = *(int *)((int)register0x00000054 + -0x50);
                  piVar5[2] = *(int *)((int)register0x00000054 + -0x54);
                  if (*(int *)PTR_DAT_00569848 == 0) {
                    iVar11 = *(int *)((int)register0x00000054 + -0x10);
                  }
                  else {
                    piVar5 = (int *)FUN_0009db64();
                    iVar11 = *(int *)((int)register0x00000054 + -0x10);
                    *unaff_r8 = iVar11;
                    unaff_r8[1] = *piVar5;
                  }
                  *piVar5 = iVar11;
                  *(undefined4 *)((int)register0x00000054 + 0x10) =
                       *(undefined4 *)((int)register0x00000054 + -4);
                  return;
                }
                if (puVar3 == PTR_DAT_005695ec) {
                  uVar6 = **(undefined4 **)((int)register0x00000054 + -0xa0);
                  uVar1 = (*(undefined4 **)((int)register0x00000054 + -0xa0))[1];
                  *(undefined4 *)((int)register0x00000054 + -0xbc) =
                       *(undefined4 *)((int)register0x00000054 + -0x44);
                  *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_00569610;
                  *(undefined4 *)((int)register0x00000054 + -0xb4) = 0xb;
                  *(undefined4 *)((int)register0x00000054 + -0xb0) = uVar6;
                  *(undefined4 *)((int)register0x00000054 + -0xac) = uVar1;
                  k3c_internal_pkg_pins___PrinterPins__Setup_pin();
                  if (*(undefined **)((int)register0x00000054 + -0xa8) == PTR_DAT_00569614) {
                    iVar13 = *(int *)((int)register0x00000054 + -0xa4);
                    if (*(int *)PTR_DAT_005695a4 == 0) {
                      iVar11 = *(int *)((int)register0x00000054 + -4);
                    }
                    else {
                      FUN_0009db64();
                      *unaff_r8 = extraout_r1_00;
                      iVar11 = *(int *)((int)register0x00000054 + -4);
                      unaff_r8[1] = *(int *)(iVar11 + 0x38);
                      iVar13 = extraout_r1_00;
                    }
                    *(int *)(iVar11 + 0x38) = iVar13;
                    *(undefined8 *)(iVar13 + 0x18) = 0;
                    goto LAB_005693c4;
                  }
                  *(undefined **)((int)register0x00000054 + -0xbc) =
                       *(undefined **)((int)register0x00000054 + -0xa8);
                  *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_00569614;
                  *(undefined **)((int)register0x00000054 + -0xb4) = PTR_DAT_0056984c;
                  uVar17 = FUN_000209b4();
                }
                *(undefined8 *)((int)register0x00000054 + -0xbc) = uVar17;
                *(undefined **)((int)register0x00000054 + -0xb4) = PTR_DAT_0056984c;
                uVar17 = FUN_000209b4();
              }
              *(undefined8 *)((int)register0x00000054 + -0xbc) = uVar17;
              *(undefined **)((int)register0x00000054 + -0xb4) = PTR_DAT_0056984c;
              puVar2 = (undefined *)FUN_000209b4();
              puVar3 = extraout_r2_01;
            }
            *(undefined **)((int)register0x00000054 + -0xbc) = puVar2;
            *(undefined **)((int)register0x00000054 + -0xb8) = puVar3;
            *(undefined **)((int)register0x00000054 + -0xb4) = PTR_DAT_0056984c;
            uVar17 = FUN_000209b4();
          }
          *(undefined8 *)((int)register0x00000054 + -0xbc) = uVar17;
          *(undefined **)((int)register0x00000054 + -0xb4) = PTR_DAT_0056984c;
          FUN_000209b4();
        }
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0xb8) = uVar1;
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00569850;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xb4);
        *(undefined **)((int)register0x00000054 + -0xbc) = PTR_DAT_00569854;
        *(undefined4 *)((int)register0x00000054 + -0xb8) = 0x35;
        *(undefined1 **)((int)register0x00000054 + -0xb4) =
             (undefined1 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0xb0) = 1;
        *(undefined4 *)((int)register0x00000054 + -0xac) = 1;
        FUN_001386c4();
        uVar1 = 0;
        if (*(int *)((int)register0x00000054 + -0xa8) != 0) {
          uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xa8) + 4);
        }
        *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0xb8) =
             *(undefined4 *)((int)register0x00000054 + -0xa4);
        FUN_00095b00();
      }
      uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0xb8) = uVar1;
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00569850;
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + -0xb4);
      *(undefined **)((int)register0x00000054 + -0xbc) = PTR_DAT_00569858;
      *(undefined4 *)((int)register0x00000054 + -0xb8) = 0x34;
      *(undefined1 **)((int)register0x00000054 + -0xb4) =
           (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0xb0) = 1;
      *(undefined4 *)((int)register0x00000054 + -0xac) = 1;
      FUN_001386c4();
      bVar15 = *(int *)((int)register0x00000054 + -0xa8) == 0;
      uVar1 = 0;
      if (!bVar15) {
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xa8) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0xb8) =
           *(undefined4 *)((int)register0x00000054 + -0xa4);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc0);
      if (bVar15) {
        register0x00000054 = (BADSPACEBASE *)puVar14;
      }
    }
    unaff_lr = 0x569838;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/fan.(*Fan).GetPrinter @ 0056985c (size 16) */

void k3c_internal_pkg_fan___Fan__GetPrinter(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x00569868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.(*Fan).Get_mcu @ 0056986c (size 20) */

void k3c_internal_pkg_fan___Fan__Get_mcu(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(*(int *)(in_stack_00000004 + 0x34) + 0xc);
                    /* WARNING: Could not recover jumptable at 0x0056987c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.(*Fan)._apply_speed @ 00569880 (size 804) */

void k3c_internal_pkg_fan___Fan___apply_speed(void)

{
  double dVar1;
  int unaff_r10;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined8 in_stack_00000020;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_18 [2];
  undefined4 local_10;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_000afda8();
  FUN_000afca0();
  dVar1 = (double)CONCAT44(uStack_3c,local_40);
  if (*(double *)(in_stack_00000004 + 4) == dVar1) {
    return;
  }
  FUN_000afca0();
  if (*(int *)(in_stack_00000004 + 0x38) != 0) {
    if ((dVar1 <= 0.0) || (*(double *)(in_stack_00000004 + 4) != 0.0)) {
      if ((dVar1 == 0.0) && (0.0 < *(double *)(in_stack_00000004 + 4))) {
        k3c_internal_pkg_mcu___MCU_digital_out__Set_digital();
      }
    }
    else {
      k3c_internal_pkg_mcu___MCU_digital_out__Set_digital();
    }
  }
  if (((dVar1 != 0.0) && (0.0 <= *(double *)(in_stack_00000004 + 0x24))) &&
     ((*(double *)(in_stack_00000004 + 4) == 0.0 ||
      (0.5 < dVar1 - *(double *)(in_stack_00000004 + 4))))) {
    k3c_internal_pkg_mcu___MCU_pwm__Set_pwm();
    *(undefined8 *)(in_stack_00000004 + 4) = *(undefined8 *)(in_stack_00000004 + 0x1c);
    *(double *)(in_stack_00000004 + 0x14) = dVar1;
    *(ulonglong *)(in_stack_00000004 + 0xc) = CONCAT44(uStack_3c,local_40);
    FUN_0009defc(0,local_18);
    FUN_0008f6c0();
    local_18[0] = DAT_00569bac;
    FUN_0008f6c0();
    local_10 = DAT_00569bac;
    FUN_0008f77c();
    local_8 = DAT_00569bb0;
    k3c_internal_pkg_logger_Debugf();
    return;
  }
  k3c_internal_pkg_mcu___MCU_pwm__Set_pwm();
  *(ulonglong *)(in_stack_00000004 + 0xc) = CONCAT44(uStack_3c,local_40);
  *(double *)(in_stack_00000004 + 0x14) = dVar1;
  *(double *)(in_stack_00000004 + 4) = dVar1;
  return;
}



/* k3c/internal/pkg/fan.(*Fan).LastFanValue @ 00569bc0 (size 16) */

void k3c_internal_pkg_fan___Fan__LastFanValue(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined8 uStack00000008;
  
  uStack00000008 = *(undefined8 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00569bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.(*Fan).set_speed @ 00569bd0 (size 336) */

void k3c_internal_pkg_fan___Fan__set_speed(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  undefined8 uVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x50) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 0x10);
      if (iVar1 == 0) {
        *(undefined4 *)((int)register0x00000054 + -0x30) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00569d28;
        uVar5 = *(undefined8 *)((int)register0x00000054 + -0x30);
        goto LAB_00569c1c;
      }
      bVar4 = iVar1 == DAT_00569d24;
      if (bVar4) {
        uVar5 = **(undefined8 **)((int)register0x00000054 + 0x14);
LAB_00569c1c:
        *(undefined8 *)((int)register0x00000054 + -0x38) = uVar5;
        FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
        *(undefined8 *)((int)register0x00000054 + -0x20) =
             *(undefined8 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        FUN_0008f6c0();
        *(int *)((int)register0x00000054 + -0x18) = DAT_00569d24;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        uVar2 = (*(undefined4 **)(*(int *)((int)register0x00000054 + 4) + 0x34))[1];
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             **(undefined4 **)(*(int *)((int)register0x00000054 + 4) + 0x34);
        *(undefined4 *)((int)register0x00000054 + -0x48) = uVar2;
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00569d2c;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined8 *)((int)register0x00000054 + -0x28) =
             *(undefined8 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        FUN_0008f6c0();
        *(int *)((int)register0x00000054 + -8) = DAT_00569d24;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_00569d30;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 0x1f;
        *(undefined1 **)((int)register0x00000054 + -0x44) =
             (undefined1 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x40) = 3;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 3;
        k3c_internal_pkg_logger_Debugf();
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x44);
        *(undefined8 *)((int)register0x00000054 + -0x48) =
             *(undefined8 *)((int)register0x00000054 + 8);
        *(undefined8 *)((int)register0x00000054 + -0x40) =
             *(undefined8 *)((int)register0x00000054 + -0x38);
        k3c_internal_pkg_toolhead___GCodeRequestQueue__Send_async_request();
        return;
      }
      *(int *)((int)register0x00000054 + -0x4c) = iVar1;
      *(int *)((int)register0x00000054 + -0x48) = DAT_00569d24;
      *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_00569d34;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x50);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x569d1c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/fan.(*Fan).Set_speed_from_command @ 00569d38 (size 132) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_fan___Fan__Set_speed_from_command(void)

{
  undefined4 uVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined4 *puStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x569db8;
    FUN_0009bf64();
  }
  uVar1 = *(undefined4 *)(in_stack_00000004 + 0x44);
  FUN_00022cf8();
  *puStack_c = _UNK_00569dc4;
  if (*_UNK_00569dc8 != 0) {
    puStack_c = (undefined4 *)FUN_0009db54();
    *unaff_r8 = uVar1;
  }
  puStack_c[1] = uVar1;
  *(undefined8 *)(puStack_c + 2) = in_stack_00000008;
  k3c_internal_pkg_toolhead___Toolhead__Register_lookahead_callback();
                    /* WARNING: Could not recover jumptable at 0x00569dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.(*Fan).Set_speed_from_command.(*GCodeRequestQueue).Queue_gcode_request.func1 @ 00569dcc (size 60) */

void k3c_internal_pkg_fan___Fan__Set_speed_from_command___GCodeRequestQueue__Queue_gcode_request_func1
               (void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x569e04;
    FUN_0009bf00();
  }
  k3c_internal_pkg_toolhead___GCodeRequestQueue___queue_request();
                    /* WARNING: Could not recover jumptable at 0x00569df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.(*Fan).Get_status @ 00569e08 (size 220) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_fan___Fan__Get_status(void)

{
  int iVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  uint in_fpscr;
  double dVar2;
  uint unaff_s30;
  int in_stack_00000004;
  undefined4 in_stack_00000010;
  double *pdStack_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x569ee0;
    FUN_0009bf64();
  }
  FUN_000908bc();
  dVar2 = *(double *)(in_stack_00000004 + 0x14);
  FUN_00093a08();
  *pdStack_18 = dVar2;
  iVar1 = **(int **)(in_stack_00000004 + 0x3c);
  if (iVar1 == 0) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = (double)VectorSignedToFloat(unaff_s30 & 0xffff0000 |
                                        (*(int **)(in_stack_00000004 + 0x3c))[1] & 0xffffU,
                                        (byte)(in_fpscr >> 0x16) & 3);
    dVar2 = (*(double *)(iVar1 + 0x18) * 30.0) / dVar2;
  }
  FUN_00093a08();
  *pdStack_18 = dVar2;
                    /* WARNING: Could not recover jumptable at 0x00569ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.NewFanTachometer @ 00569ef4 (size 616) */

void k3c_internal_pkg_fan_NewFanTachometer(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  bool bVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0x5c) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_0056a160;
      FUN_00022cf8();
      uVar1 = *(undefined4 *)PTR_DAT_0056a164;
      uVar4 = *(undefined4 *)PTR_DAT_0056a168;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 **)((int)register0x00000054 + -0x58) =
           *(undefined4 **)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x54) =
           PTR_s_tachometer_pintachometer_pprfan__008262d0_0x20ba_0056a16c;
      *(undefined4 *)((int)register0x00000054 + -0x50) = 0xe;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar4;
      *(undefined1 *)((int)register0x00000054 + -0x44) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Get();
      if (*(int *)((int)register0x00000054 + -0x40) == 0) {
        puVar2 = *(undefined4 **)((int)register0x00000054 + -4);
LAB_0056a0b0:
        *(undefined4 **)((int)register0x00000054 + 8) = puVar2;
        return;
      }
      *(int *)((int)register0x00000054 + -0x18) = *(int *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x54) =
           PTR_s_tachometer_pprfan_generic__sroll_008262d0_0x20c8_0056a170;
      *(undefined4 *)((int)register0x00000054 + -0x50) = 0xe;
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0056a174;
      *(undefined **)((int)register0x00000054 + -0x48) = PTR_SUB_0056a178;
      *(undefined4 *)((int)register0x00000054 + -0x44) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x3c) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getint();
      *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 4) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0056a17c;
      *(undefined4 *)((int)register0x00000054 + -0x50) = 0x18;
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0056a180;
      *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_0056a184;
      *(undefined8 *)((int)register0x00000054 + -0x44) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x3c) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x34) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x2c) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x24) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
      if (0.0 < *(double *)((int)register0x00000054 + -0x20)) {
        if (*(undefined **)((int)register0x00000054 + -0x18) == PTR_DAT_0056a188) {
          pcVar3 = (code *)**(undefined4 **)PTR_DAT_0056a18c;
          uVar4 = **(undefined4 **)((int)register0x00000054 + -0x10);
          uVar1 = (*(undefined4 **)((int)register0x00000054 + -0x10))[1];
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          *(undefined4 *)((int)register0x00000054 + -0x54) = uVar4;
          *(undefined4 *)((int)register0x00000054 + -0x50) = uVar1;
          *(undefined8 *)((int)register0x00000054 + -0x4c) = 0x3ff0000000000000;
          *(double *)((int)register0x00000054 + -0x44) =
               *(double *)((int)register0x00000054 + -0x20);
          (*pcVar3)();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x3c);
          if (*(int *)PTR_DAT_0056a190 == 0) {
            puVar2 = *(undefined4 **)((int)register0x00000054 + -4);
          }
          else {
            FUN_0009db64();
            *unaff_r8 = extraout_r1;
            puVar2 = *(undefined4 **)((int)register0x00000054 + -4);
            unaff_r8[1] = *puVar2;
            uVar1 = extraout_r1;
          }
          *puVar2 = uVar1;
          goto LAB_0056a0b0;
        }
        *(undefined **)((int)register0x00000054 + -0x58) =
             *(undefined **)((int)register0x00000054 + -0x18);
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0056a188;
        *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_0056a194;
        FUN_000209b4();
      }
      uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x58) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0x54) = uVar1;
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0056a188;
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -0x50);
      *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_0056a198;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 0x43;
      *(undefined1 **)((int)register0x00000054 + -0x50) =
           (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
      FUN_001386c4();
      bVar6 = *(int *)((int)register0x00000054 + -0x44) == 0;
      uVar1 = 0;
      if (!bVar6) {
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x44) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0x58) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x5c);
      if (bVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x56a158;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/fan.(*FanTachometer).Calc_rpm @ 0056a19c (size 64) */

void k3c_internal_pkg_fan___FanTachometer__Calc_rpm(void)

{
  uint in_fpscr;
  uint unaff_s30;
  int *in_stack_00000004;
  
  if (*in_stack_00000004 != 0) {
    VectorSignedToFloat(unaff_s30 & 0xffff0000 | in_stack_00000004[1] & 0xffffU,
                        (byte)(in_fpscr >> 0x16) & 3);
  }
  return;
}



/* k3c/internal/pkg/fan.(*FanTachometer).Get_status @ 0056a1dc (size 156) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_fan___FanTachometer__Get_status(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  uint in_fpscr;
  double dVar1;
  uint unaff_s30;
  int *in_stack_00000004;
  undefined4 in_stack_00000010;
  double *pdStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x56a274;
    FUN_0009bf64();
  }
  if (*in_stack_00000004 == 0) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = (double)VectorSignedToFloat(unaff_s30 & 0xffff0000 | in_stack_00000004[1] & 0xffffU,
                                        (byte)(in_fpscr >> 0x16) & 3);
    dVar1 = (*(double *)(*in_stack_00000004 + 0x18) * 30.0) / dVar1;
  }
  FUN_000908bc();
  FUN_00093a08();
  *pdStack_10 = dVar1;
                    /* WARNING: Could not recover jumptable at 0x0056a268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.NewPrinterFan @ 0056a284 (size 776) */

void k3c_internal_pkg_fan_NewPrinterFan(undefined4 param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 *puVar4;
  undefined4 *extraout_r2;
  undefined4 extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  bool bVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x48) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0056a590;
      FUN_00022cf8();
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined8 *)((int)register0x00000054 + -0x40) = 0;
      k3c_internal_pkg_fan_NewFan();
      uVar3 = *(undefined4 *)((int)register0x00000054 + -0x38);
      if (*(int *)PTR_DAT_0056a594 == 0) {
        puVar1 = *(undefined4 **)((int)register0x00000054 + -4);
      }
      else {
        FUN_0009db64();
        *unaff_r8 = extraout_r1;
        puVar1 = *(undefined4 **)((int)register0x00000054 + -4);
        unaff_r8[1] = *puVar1;
        uVar3 = extraout_r1;
      }
      *puVar1 = uVar3;
      puVar4 = *(undefined4 **)((int)register0x00000054 + 4);
      uVar3 = *puVar4;
      if (*(int *)PTR_DAT_0056a594 != 0) {
        puVar1 = (undefined4 *)FUN_0009db64();
        *unaff_r8 = extraout_r3;
        unaff_r8[1] = puVar1[1];
        puVar4 = extraout_r2;
        uVar3 = extraout_r3;
      }
      puVar1[1] = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x44) = *puVar4;
      *(undefined **)((int)register0x00000054 + -0x40) =
           PTR_s_gcodeok__sM8844_helpReady_________00820821_0x5d2_0056a598;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = 5;
      *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_0056a59c;
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0056a5a0;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x2c);
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0056a5a4;
      FUN_00022cf8();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x40);
      *puVar1 = PTR_k3c_internal_pkg_fan___PrinterFan__cmd_M106_fm_0056a5a8;
      if (*(int *)PTR_DAT_0056a594 == 0) {
        uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
      }
      else {
        puVar1 = (undefined4 *)FUN_0009db54();
        uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
        *unaff_r8 = uVar3;
      }
      puVar1[1] = uVar3;
      bVar6 = *(undefined **)((int)register0x00000054 + -0x24) == PTR_DAT_0056a5ac;
      if (bVar6) {
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined **)((int)register0x00000054 + -0x40) =
             PTR_s_M106tcp_initbusy1a86baud_to_M400_00820821_0x235_0056a5b0;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 4;
        *(undefined4 **)((int)register0x00000054 + -0x38) = puVar1;
        *(undefined1 *)((int)register0x00000054 + -0x34) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
        k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
        *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0056a5a4;
        FUN_00022cf8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x40);
        *puVar1 = PTR_k3c_internal_pkg_fan___PrinterFan__cmd_M107_fm_0056a5b4;
        if (*(int *)PTR_DAT_0056a594 == 0) {
          uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
        }
        else {
          puVar1 = (undefined4 *)FUN_0009db54();
          uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
          *unaff_r8 = uVar3;
        }
        puVar1[1] = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined **)((int)register0x00000054 + -0x40) =
             PTR_s_M107pinsM106tcp_initbusy1a86baud_00820821_0x22d_0056a5b8;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 4;
        *(undefined4 **)((int)register0x00000054 + -0x38) = puVar1;
        *(undefined1 *)((int)register0x00000054 + -0x34) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
        k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
        pcVar2 = (code *)**(undefined4 **)PTR_DAT_0056a5bc;
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)**(undefined4 **)((int)register0x00000054 + -4);
        uVar3 = (*pcVar2)();
        FUN_0009e2f0(uVar3,*(undefined4 *)((int)register0x00000054 + -0x40),
                     (undefined1 *)((int)register0x00000054 + -0x20));
        *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0056a5a4;
        FUN_00022cf8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x40);
        *puVar1 = PTR_k3c_internal_pkg_fan___PrinterFan__SetFan_fm_0056a5c0;
        if (*(int *)PTR_DAT_0056a594 == 0) {
          uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
        }
        else {
          puVar1 = (undefined4 *)FUN_0009db54();
          uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
          *unaff_r8 = uVar3;
        }
        *(undefined4 **)((int)register0x00000054 + -8) = puVar1;
        puVar1[1] = uVar3;
        *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0056a5c4;
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0056a5c8;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 0xb;
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x30) == '\0') {
          *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0056a5c4;
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0056a5c8;
          *(undefined4 *)((int)register0x00000054 + -0x38) = 0xb;
          FUN_00093a08();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x34);
          if (*(int *)PTR_DAT_0056a594 == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -8);
          }
          else {
            puVar1 = (undefined4 *)FUN_0009db64();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -8);
            *unaff_r8 = uVar3;
            unaff_r8[1] = *puVar1;
          }
          *puVar1 = uVar3;
        }
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -4)
        ;
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x44) =
           *(undefined **)((int)register0x00000054 + -0x24);
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_0056a5ac;
      *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0056a5cc;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x48);
      if (bVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x56a588;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/fan.(*PrinterFan).SetFan @ 0056a5d0 (size 660) */

void k3c_internal_pkg_fan___PrinterFan__SetFan(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  undefined1 uVar5;
  double dVar6;
  undefined8 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 0x14);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_0056a868;
      *(undefined4 *)((int)register0x00000054 + -0x28) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0056a86c;
      *(undefined4 *)((int)register0x00000054 + -0x20) = 5;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x18) == '\0') {
LAB_0056a65c:
        uVar2 = 1;
      }
      else {
        iVar3 = **(int **)((int)register0x00000054 + -0x1c);
        if (iVar3 == 0) goto LAB_0056a65c;
        if (iVar3 == DAT_0056a870) {
          uVar2 = (undefined4)(longlong)*(double *)(*(int **)((int)register0x00000054 + -0x1c))[1];
        }
        else {
          uVar2 = 0;
        }
      }
      *(undefined4 *)((int)register0x00000054 + -0x10) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_0056a874;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 5;
      *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0056a878;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0056a87c;
      k3c_internal_pkg_web___WebRequest__get_float();
      dVar6 = *(double *)((int)register0x00000054 + -0x18) / *DAT_0056a880;
      if (dVar6 <= 0.0) {
        piVar1 = *(int **)((int)register0x00000054 + 4);
        *(undefined1 *)(*piVar1 + 0x40) = 1;
      }
      else {
        piVar1 = *(int **)((int)register0x00000054 + 4);
        *(undefined1 *)(*piVar1 + 0x40) = 0;
      }
      *(double *)((int)register0x00000054 + -0xc) = dVar6;
      if (*(int *)((int)register0x00000054 + -0x10) == 2) {
        *(int *)((int)register0x00000054 + -0x2c) = piVar1[1];
        *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_0056a88c;
        *(undefined4 *)((int)register0x00000054 + -0x24) = 0x13;
        *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0056a878;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0056a87c;
        k3c_internal_pkg_printer___Printer__Lookup_object();
        uVar5 = *(int *)((int)register0x00000054 + -0x18) == DAT_0056a888;
        if ((bool)uVar5) {
          iVar3 = *(int *)((int)register0x00000054 + -0x14);
          *(int *)((int)register0x00000054 + -4) = iVar3;
          uVar7 = *(undefined8 *)((int)register0x00000054 + -0xc);
          *(undefined8 *)(iVar3 + 0x10) = uVar7;
          *(int *)((int)register0x00000054 + -0x2c) = iVar3;
          *(undefined8 *)((int)register0x00000054 + -0x28) = uVar7;
          k3c_internal_pkg_fan___PrinterFanGeneric__get_pwm();
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 4);
          *(undefined8 *)((int)register0x00000054 + -0x28) =
               *(undefined8 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x1c) = 0;
          k3c_internal_pkg_fan___Fan__set_speed();
          goto LAB_0056a810;
        }
        *(int *)((int)register0x00000054 + -0x2c) = *(int *)((int)register0x00000054 + -0x18);
        *(int *)((int)register0x00000054 + -0x28) = DAT_0056a888;
        *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0056a890;
        uVar7 = FUN_000209b4();
      }
      else {
        if (*(int *)((int)register0x00000054 + -0x10) != 3) {
          *(int *)((int)register0x00000054 + -0x2c) = *piVar1;
          *(double *)((int)register0x00000054 + -0x28) = dVar6;
          *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x1c) = 0;
          k3c_internal_pkg_fan___Fan__set_speed();
          goto LAB_0056a810;
        }
        *(int *)((int)register0x00000054 + -0x2c) = piVar1[1];
        *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_0056a884;
        *(undefined4 *)((int)register0x00000054 + -0x24) = 0x1a;
        *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0056a878;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0056a87c;
        k3c_internal_pkg_printer___Printer__Lookup_object();
        uVar7 = CONCAT44(DAT_0056a888,*(int *)((int)register0x00000054 + -0x18));
        uVar5 = 0;
        if (*(int *)((int)register0x00000054 + -0x18) == DAT_0056a888) {
          iVar3 = *(int *)((int)register0x00000054 + -0x14);
          *(int *)((int)register0x00000054 + -4) = iVar3;
          uVar7 = *(undefined8 *)((int)register0x00000054 + -0xc);
          *(undefined8 *)(iVar3 + 0x10) = uVar7;
          *(int *)((int)register0x00000054 + -0x2c) = iVar3;
          *(undefined8 *)((int)register0x00000054 + -0x28) = uVar7;
          k3c_internal_pkg_fan___PrinterFanGeneric__get_pwm();
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 4);
          *(undefined8 *)((int)register0x00000054 + -0x28) =
               *(undefined8 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x1c) = 0;
          k3c_internal_pkg_fan___Fan__set_speed();
LAB_0056a810:
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
          return;
        }
      }
      *(undefined8 *)((int)register0x00000054 + -0x2c) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0056a890;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if ((bool)uVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x56a860;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/fan.(*PrinterFan).Get_status @ 0056a894 (size 232) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_fan___PrinterFan__Get_status(void)

{
  int iVar1;
  int *piVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  uint in_fpscr;
  double dVar3;
  uint unaff_s30;
  int *in_stack_00000004;
  undefined4 in_stack_00000010;
  double *pdStack_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x56a978;
    FUN_0009bf64();
  }
  iVar1 = *in_stack_00000004;
  FUN_000908bc();
  dVar3 = *(double *)(iVar1 + 0x14);
  FUN_00093a08();
  *pdStack_1c = dVar3;
  piVar2 = *(int **)(iVar1 + 0x3c);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    dVar3 = 0.0;
  }
  else {
    dVar3 = (double)VectorSignedToFloat(unaff_s30 & 0xffff0000 | piVar2[1] & 0xffffU,
                                        (byte)(in_fpscr >> 0x16) & 3);
    dVar3 = (*(double *)(iVar1 + 0x18) * 30.0) / dVar3;
  }
  FUN_00093a08();
  *pdStack_1c = dVar3;
                    /* WARNING: Could not recover jumptable at 0x0056a96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.(*PrinterFan).cmd_M106 @ 0056a98c (size 1232) */

void k3c_internal_pkg_fan___PrinterFan__cmd_M106(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  double dVar7;
  undefined8 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x74);
      *(undefined4 *)((int)register0x00000054 + -0x74) = unaff_lr;
      *(undefined8 *)((int)register0x00000054 + -0x44) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 0xff;
      *(undefined4 *)((int)register0x00000054 + -0x70) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0056ae60;
      *(undefined4 *)((int)register0x00000054 + -0x68) = 1;
      *(undefined4 *)((int)register0x00000054 + -100) = DAT_0056ae64;
      *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_0056ae68;
      *(undefined1 **)((int)register0x00000054 + -0x5c) =
           (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined1 **)((int)register0x00000054 + -0x58) =
           (undefined1 *)((int)register0x00000054 + -0x34);
      k3c_internal_pkg_gcode___GCodeCommand__Get_int();
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      *(undefined4 *)((int)register0x00000054 + -0x70) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0056ae60;
      *(undefined4 *)((int)register0x00000054 + -0x68) = 1;
      *(undefined4 *)((int)register0x00000054 + -100) = DAT_0056ae6c;
      *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_0056ae70;
      *(undefined1 **)((int)register0x00000054 + -0x5c) =
           (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
      k3c_internal_pkg_gcode___GCodeCommand__Get_float();
      dVar7 = *(double *)((int)register0x00000054 + -0x4c) / *DAT_0056ae74;
      if (*(int *)((int)register0x00000054 + -0x3c) == 0xff) {
        dVar7 = 1.0;
      }
      *(double *)((int)register0x00000054 + -0x30) = dVar7;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 4;
      *(undefined4 *)((int)register0x00000054 + -0x70) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0056ae78;
      *(undefined4 *)((int)register0x00000054 + -0x68) = 1;
      *(undefined4 *)((int)register0x00000054 + -100) = DAT_0056ae64;
      *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_0056ae7c;
      *(undefined1 **)((int)register0x00000054 + -0x5c) =
           (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined1 **)((int)register0x00000054 + -0x58) =
           (undefined1 *)((int)register0x00000054 + -0x34);
      k3c_internal_pkg_gcode___GCodeCommand__Get_int();
      iVar2 = *(int *)((int)register0x00000054 + -0x54);
      if (iVar2 == 2) {
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
        *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0056ae90;
        *(undefined4 *)((int)register0x00000054 + -0x68) = 5;
        *(undefined4 *)((int)register0x00000054 + -100) = DAT_0056ae94;
        *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_0056ae98;
        k3c_internal_pkg_printer___Printer__Lookup_object();
        uVar6 = *(int *)((int)register0x00000054 + -0x5c) == DAT_0056ae9c;
        if ((bool)uVar6) {
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x18) =
               *(undefined8 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -8) = DAT_0056ae6c;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0056aea8;
          *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x25;
          *(undefined1 **)((int)register0x00000054 + -0x68) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -100) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
          FUN_0013b72c();
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
          goto LAB_0056adfc;
        }
        *(int *)((int)register0x00000054 + -0x70) = *(int *)((int)register0x00000054 + -0x5c);
        *(int *)((int)register0x00000054 + -0x6c) = DAT_0056ae9c;
        *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_0056aeac;
        uVar8 = FUN_000209b4();
LAB_0056ae24:
        *(undefined8 *)((int)register0x00000054 + -0x70) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_0056aeac;
        uVar8 = FUN_000209b4();
      }
      else {
        if (iVar2 == 3) {
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
          *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0056ae90;
          *(undefined4 *)((int)register0x00000054 + -0x68) = 5;
          *(undefined4 *)((int)register0x00000054 + -100) = DAT_0056ae94;
          *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_0056ae98;
          k3c_internal_pkg_printer___Printer__Lookup_object();
          uVar8 = CONCAT44(DAT_0056ae9c,*(int *)((int)register0x00000054 + -0x5c));
          uVar6 = *(int *)((int)register0x00000054 + -0x5c) == DAT_0056ae9c;
          if (!(bool)uVar6) goto LAB_0056ae24;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x20) =
               *(undefined8 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -8) = DAT_0056ae6c;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0056aea4;
          *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x2c;
          *(undefined1 **)((int)register0x00000054 + -0x68) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -100) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
          FUN_0013b72c();
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
          goto LAB_0056adfc;
        }
        if (iVar2 == 4) {
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0056ae80;
          *(undefined4 *)((int)register0x00000054 + -0x68) = 0xb;
          k3c_internal_pkg_fan___PrinterFan__getFanByName();
          bVar1 = false;
          if (*(int *)((int)register0x00000054 + -100) != 0) {
            bVar1 = true;
          }
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          if (*(double *)((int)register0x00000054 + -0x30) <= 0.0) {
            piVar3 = *(int **)((int)register0x00000054 + 4);
            *(undefined1 *)(*piVar3 + 0x40) = 1;
          }
          else {
            piVar3 = *(int **)((int)register0x00000054 + 4);
            *(undefined1 *)(*piVar3 + 0x40) = 0;
          }
          *(undefined4 *)((int)register0x00000054 + -0x10) = *(undefined4 *)(*piVar3 + 0x44);
          *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0056ae84;
          FUN_00022cf8();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0x6c);
          *puVar4 = DAT_0056ae88;
          if (*DAT_0056ae8c == 0) {
            iVar2 = *(int *)((int)register0x00000054 + -0x10);
          }
          else {
            puVar4 = (undefined4 *)FUN_0009db54();
            iVar2 = *(int *)((int)register0x00000054 + -0x10);
            *unaff_r8 = iVar2;
          }
          puVar4[1] = iVar2;
          *(undefined8 *)(puVar4 + 2) = *(undefined8 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x70) = *(undefined4 *)(iVar2 + 0x20);
          *(undefined4 **)((int)register0x00000054 + -0x6c) = puVar4;
          k3c_internal_pkg_toolhead___Toolhead__Register_lookahead_callback();
          goto LAB_0056adfc;
        }
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
        *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0056ae90;
        *(undefined4 *)((int)register0x00000054 + -0x68) = 5;
        *(undefined4 *)((int)register0x00000054 + -100) = DAT_0056ae94;
        *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_0056ae98;
        k3c_internal_pkg_printer___Printer__Lookup_object();
        uVar8 = CONCAT44(DAT_0056ae9c,*(int *)((int)register0x00000054 + -0x5c));
        uVar6 = 0;
        if (*(int *)((int)register0x00000054 + -0x5c) == DAT_0056ae9c) {
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x28) =
               *(undefined8 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -8) = DAT_0056ae6c;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0056aea0;
          *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x29;
          *(undefined1 **)((int)register0x00000054 + -0x68) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -100) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
          FUN_0013b72c();
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
LAB_0056adfc:
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          return;
        }
      }
      *(undefined8 *)((int)register0x00000054 + -0x70) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_0056aeac;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x74);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x56ae58;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/fan.(*PrinterFan).cmd_M106.(*Fan).Set_speed_from_command.(*GCodeRequestQueue).Queue_gcode_request.func1 @ 0056aeb0 (size 60) */

void k3c_internal_pkg_fan___PrinterFan__cmd_M106___Fan__Set_speed_from_command___GCodeRequestQueue__Queue_gcode_request_func1
               (void)

{
  int unaff_r10;
  undefined8 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  k3c_internal_pkg_toolhead___GCodeRequestQueue___queue_request();
  return;
}



/* k3c/internal/pkg/fan.(*PrinterFan).cmd_M107 @ 0056aeec (size 832) */

void k3c_internal_pkg_fan___PrinterFan__cmd_M107(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  undefined1 uVar5;
  undefined8 uVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x34) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 4;
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_0056b230;
      *(undefined4 *)((int)register0x00000054 + -0x28) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0056b234;
      *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0056b238;
      *(undefined1 **)((int)register0x00000054 + -0x1c) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined1 **)((int)register0x00000054 + -0x18) =
           (undefined1 *)((int)register0x00000054 + -0xc);
      k3c_internal_pkg_gcode___GCodeCommand__Get_int();
      iVar2 = *(int *)((int)register0x00000054 + -0x14);
      if (iVar2 == 2) {
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
        *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_0056b240;
        *(undefined4 *)((int)register0x00000054 + -0x28) = 5;
        *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0056b244;
        *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0056b248;
        k3c_internal_pkg_printer___Printer__Lookup_object();
        uVar5 = *(int *)((int)register0x00000054 + -0x1c) == DAT_0056b24c;
        if ((bool)uVar5) {
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0056b264;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 0x21;
          *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
          FUN_0013b72c();
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -4);
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
          goto LAB_0056b1cc;
        }
        *(int *)((int)register0x00000054 + -0x30) = *(int *)((int)register0x00000054 + -0x1c);
        *(int *)((int)register0x00000054 + -0x2c) = DAT_0056b24c;
        *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_0056b268;
        uVar6 = FUN_000209b4();
LAB_0056b1f4:
        *(undefined8 *)((int)register0x00000054 + -0x30) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_0056b268;
        uVar6 = FUN_000209b4();
      }
      else {
        if (iVar2 == 3) {
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
          *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_0056b240;
          *(undefined4 *)((int)register0x00000054 + -0x28) = 5;
          *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0056b244;
          *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0056b248;
          k3c_internal_pkg_printer___Printer__Lookup_object();
          uVar6 = CONCAT44(DAT_0056b24c,*(int *)((int)register0x00000054 + -0x1c));
          uVar5 = *(int *)((int)register0x00000054 + -0x1c) == DAT_0056b24c;
          if (!(bool)uVar5) goto LAB_0056b1f4;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0056b260;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 0x28;
          *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
          FUN_0013b72c();
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -4);
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
          goto LAB_0056b1cc;
        }
        if (iVar2 == 4) {
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_0056b23c;
          *(undefined4 *)((int)register0x00000054 + -0x28) = 0xb;
          k3c_internal_pkg_fan___PrinterFan__getFanByName();
          bVar1 = false;
          if (*(int *)((int)register0x00000054 + -0x24) != 0) {
            bVar1 = true;
          }
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 0x44);
          *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0056b254;
          FUN_00022cf8();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x2c);
          *puVar3 = DAT_0056b258;
          if (*DAT_0056b25c == 0) {
            iVar2 = *(int *)((int)register0x00000054 + -8);
          }
          else {
            puVar3 = (undefined4 *)FUN_0009db54();
            iVar2 = *(int *)((int)register0x00000054 + -8);
            *unaff_r8 = iVar2;
          }
          puVar3[1] = iVar2;
          *(undefined8 *)(puVar3 + 2) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x30) = *(undefined4 *)(iVar2 + 0x20);
          *(undefined4 **)((int)register0x00000054 + -0x2c) = puVar3;
          k3c_internal_pkg_toolhead___Toolhead__Register_lookahead_callback();
          *(undefined1 *)(**(int **)((int)register0x00000054 + 4) + 0x40) = 1;
          goto LAB_0056b1cc;
        }
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
        *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_0056b240;
        *(undefined4 *)((int)register0x00000054 + -0x28) = 5;
        *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0056b244;
        *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0056b248;
        k3c_internal_pkg_printer___Printer__Lookup_object();
        uVar6 = CONCAT44(DAT_0056b24c,*(int *)((int)register0x00000054 + -0x1c));
        uVar5 = 0;
        if (*(int *)((int)register0x00000054 + -0x1c) == DAT_0056b24c) {
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0056b250;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 0x25;
          *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
          FUN_0013b72c();
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -4);
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
LAB_0056b1cc:
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          return;
        }
      }
      *(undefined8 *)((int)register0x00000054 + -0x30) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_0056b268;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x34);
      if ((bool)uVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x56b228;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/fan.(*PrinterFan).cmd_M107.(*Fan).Set_speed_from_command.(*GCodeRequestQueue).Queue_gcode_request.func1 @ 0056b26c (size 60) */

void k3c_internal_pkg_fan___PrinterFan__cmd_M107___Fan__Set_speed_from_command___GCodeRequestQueue__Queue_gcode_request_func1
               (void)

{
  int unaff_r10;
  undefined8 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  k3c_internal_pkg_toolhead___GCodeRequestQueue___queue_request();
  return;
}



/* k3c/internal/pkg/fan.(*PrinterFan).getFanByName @ 0056b2a8 (size 240) */

void k3c_internal_pkg_fan___PrinterFan__getFanByName(undefined4 param_1)

{
  int iVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_0056b39c;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0056b3a0;
      *(undefined4 *)((int)register0x00000054 + -0x20) = 0xe;
      *(undefined1 **)((int)register0x00000054 + -0x1c) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 1;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      iVar1 = *(int *)((int)register0x00000054 + -0x10);
      if (iVar1 == 0) {
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        return;
      }
      bVar3 = iVar1 == DAT_0056b3a4;
      if (bVar3) {
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        return;
      }
      *(int *)((int)register0x00000054 + -0x24) = iVar1;
      *(int *)((int)register0x00000054 + -0x20) = DAT_0056b3a4;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0056b3a8;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x56b394;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/fan.(*PrinterFan).GetFansSpeed @ 0056b3ac (size 1584) */

void k3c_internal_pkg_fan___PrinterFan__GetFansSpeed(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *extraout_r1;
  undefined *extraout_r2;
  undefined *extraout_r2_00;
  undefined *extraout_r2_01;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  uint in_fpscr;
  double dVar10;
  undefined8 uVar11;
  uint unaff_s30;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x1d8)) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -600);
      *(undefined4 *)((int)register0x00000054 + -600) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x254) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
      *(undefined **)((int)register0x00000054 + -0x250) = PTR_DAT_0056b9e0;
      *(undefined4 *)((int)register0x00000054 + -0x24c) = 0x13;
      *(undefined **)((int)register0x00000054 + -0x248) = PTR_DAT_0056b9e4;
      *(undefined **)((int)register0x00000054 + -0x244) = PTR_DAT_0056b9e8;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      puVar1 = *(undefined **)((int)register0x00000054 + -0x240);
      uVar9 = 0;
      puVar7 = PTR_DAT_0056b9ec;
      if (puVar1 == PTR_DAT_0056b9ec) {
        *(undefined4 *)((int)register0x00000054 + -0x1fc) =
             *(undefined4 *)((int)register0x00000054 + -0x23c);
        *(undefined4 *)((int)register0x00000054 + -0x254) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
        *(undefined **)((int)register0x00000054 + -0x250) = PTR_DAT_0056b9f0;
        *(undefined4 *)((int)register0x00000054 + -0x24c) = 0x1a;
        *(undefined **)((int)register0x00000054 + -0x248) = PTR_DAT_0056b9e4;
        *(undefined **)((int)register0x00000054 + -0x244) = PTR_DAT_0056b9e8;
        k3c_internal_pkg_printer___Printer__Lookup_object();
        puVar1 = *(undefined **)((int)register0x00000054 + -0x240);
        uVar9 = 0;
        puVar7 = PTR_DAT_0056b9ec;
        if (puVar1 == PTR_DAT_0056b9ec) {
          *(undefined4 *)((int)register0x00000054 + -0x200) =
               *(undefined4 *)((int)register0x00000054 + -0x23c);
          k3c_internal_pkg_chelper__Cfunc_get_monotonic
                    (*(undefined4 *)((int)register0x00000054 + 4));
          *(undefined4 *)((int)register0x00000054 + -0x208) =
               **(undefined4 **)((int)register0x00000054 + 4);
          uVar2 = FUN_0009def8(0,(undefined1 *)((int)register0x00000054 + -0x1c));
          FUN_0009de88(uVar2,(undefined1 *)((int)register0x00000054 + -0xa8));
          *(undefined1 **)((int)register0x00000054 + -0x10) =
               (undefined1 *)((int)register0x00000054 + -0xa8);
          FUN_0006aa3c();
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x254);
          *(undefined8 *)((int)register0x00000054 + -0x224) =
               *(undefined8 *)(*(int *)((int)register0x00000054 + -0x208) + 0x14);
          *(undefined **)((int)register0x00000054 + -0x254) = PTR_DAT_0056b9f4;
          *(undefined1 **)((int)register0x00000054 + -0x250) =
               (undefined1 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x24c) = PTR_DAT_0056b9f8;
          *(undefined4 *)((int)register0x00000054 + -0x248) = 5;
          FUN_00093a08();
          **(undefined8 **)((int)register0x00000054 + -0x244) =
               *(undefined8 *)((int)register0x00000054 + -0x224);
          iVar6 = **(int **)(*(int *)((int)register0x00000054 + -0x208) + 0x3c);
          if (iVar6 == 0) {
            dVar10 = 0.0;
          }
          else {
            unaff_s30 = unaff_s30 & 0xffff0000 |
                        (*(int **)(*(int *)((int)register0x00000054 + -0x208) + 0x3c))[1] & 0xffffU;
            dVar10 = (double)VectorSignedToFloat(unaff_s30,(byte)(in_fpscr >> 0x16) & 3);
            dVar10 = (*(double *)(iVar6 + 0x18) * 30.0) / dVar10;
          }
          *(double *)((int)register0x00000054 + -0x22c) = dVar10;
          *(undefined **)((int)register0x00000054 + -0x254) = PTR_DAT_0056b9f4;
          *(undefined1 **)((int)register0x00000054 + -0x250) =
               (undefined1 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x24c) = PTR_DAT_0056b9fc;
          *(undefined4 *)((int)register0x00000054 + -0x248) = 3;
          FUN_00093a08();
          **(undefined8 **)((int)register0x00000054 + -0x244) =
               *(undefined8 *)((int)register0x00000054 + -0x22c);
          *(undefined **)((int)register0x00000054 + -0x254) = PTR_DAT_0056b9f4;
          *(undefined1 **)((int)register0x00000054 + -0x250) =
               (undefined1 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x24c) = PTR_DAT_0056b9f8;
          *(undefined4 *)((int)register0x00000054 + -0x248) = 5;
          FUN_00025f60();
          *(undefined8 *)((int)register0x00000054 + -0x224) =
               **(undefined8 **)((int)register0x00000054 + -0x244);
          *(undefined4 *)((int)register0x00000054 + -0x254) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x250) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x24c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x248) = 1;
          *(undefined **)((int)register0x00000054 + -0x244) = PTR_DAT_0056ba00;
          FUN_000987f4();
          puVar3 = *(undefined8 **)((int)register0x00000054 + -0x240);
          *(undefined8 **)((int)register0x00000054 + -0x20c) = puVar3;
          *(undefined4 *)((int)register0x00000054 + -0x230) =
               *(undefined4 *)((int)register0x00000054 + -0x238);
          *puVar3 = *(undefined8 *)((int)register0x00000054 + -0x224);
          k3c_internal_pkg_chelper__Cfunc_get_monotonic(puVar3);
          uVar2 = FUN_0009def8(0,(undefined1 *)((int)register0x00000054 + -0xc4));
          FUN_0009de88(uVar2,(undefined1 *)((int)register0x00000054 + -0x150));
          *(undefined1 **)((int)register0x00000054 + -0xb8) =
               (undefined1 *)((int)register0x00000054 + -0x150);
          FUN_0006aa3c();
          *(undefined4 *)((int)register0x00000054 + -0xbc) =
               *(undefined4 *)((int)register0x00000054 + -0x254);
          *(undefined8 *)((int)register0x00000054 + -0x214) =
               *(undefined8 *)(*(int *)((int)register0x00000054 + -0x1fc) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x254) =
               *(undefined4 *)((int)register0x00000054 + -0x214);
          *(undefined4 *)((int)register0x00000054 + -0x250) =
               *(undefined4 *)((int)register0x00000054 + -0x210);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -0x204) =
               *(undefined4 *)((int)register0x00000054 + -0x24c);
          *(undefined **)((int)register0x00000054 + -0x254) = PTR_DAT_0056ba04;
          *(undefined1 **)((int)register0x00000054 + -0x250) =
               (undefined1 *)((int)register0x00000054 + -0xc4);
          *(undefined **)((int)register0x00000054 + -0x24c) = PTR_DAT_0056b9f8;
          *(undefined4 *)((int)register0x00000054 + -0x248) = 5;
          FUN_00093a08();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0x244);
          *puVar4 = PTR_DAT_0056ba00;
          if (*(int *)PTR_DAT_0056ba08 == 0) {
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x204);
          }
          else {
            puVar4 = (undefined4 *)FUN_0009db64();
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x204);
            *unaff_r8 = uVar2;
            unaff_r8[1] = puVar4[1];
          }
          puVar4[1] = uVar2;
          uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1fc) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x254) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1fc) + 8);
          *(undefined4 *)((int)register0x00000054 + -0x250) = uVar2;
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x204) =
               *(undefined4 *)((int)register0x00000054 + -0x24c);
          *(undefined **)((int)register0x00000054 + -0x254) = PTR_DAT_0056ba04;
          *(undefined1 **)((int)register0x00000054 + -0x250) =
               (undefined1 *)((int)register0x00000054 + -0xc4);
          *(undefined **)((int)register0x00000054 + -0x24c) =
               PTR_s_nametempPORTFREQKEYSset_Noneport_00820821_0x1fd_0056ba0c;
          *(undefined4 *)((int)register0x00000054 + -0x248) = 4;
          FUN_00093a08();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0x244);
          *puVar4 = PTR_DAT_0056ba10;
          if (*(int *)PTR_DAT_0056ba08 == 0) {
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x204);
          }
          else {
            puVar4 = (undefined4 *)FUN_0009db64();
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x204);
            *unaff_r8 = uVar2;
            unaff_r8[1] = puVar4[1];
          }
          puVar4[1] = uVar2;
          *(undefined **)((int)register0x00000054 + -0x254) = PTR_DAT_0056ba04;
          *(undefined1 **)((int)register0x00000054 + -0x250) =
               (undefined1 *)((int)register0x00000054 + -0xc4);
          *(undefined **)((int)register0x00000054 + -0x24c) = PTR_DAT_0056b9f8;
          *(undefined4 *)((int)register0x00000054 + -0x248) = 5;
          FUN_00025f60();
          puVar7 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x244);
          uVar9 = 0;
          puVar1 = PTR_DAT_0056ba00;
          if (puVar7 == PTR_DAT_0056ba00) {
            uVar11 = *(undefined8 *)(*(undefined4 **)((int)register0x00000054 + -0x244))[1];
            uVar5 = *(uint *)((int)register0x00000054 + -0x230);
            if (uVar5 < 2) {
              *(undefined8 *)((int)register0x00000054 + -0x224) = uVar11;
              *(undefined4 *)((int)register0x00000054 + -0x254) =
                   *(undefined4 *)((int)register0x00000054 + -0x20c);
              *(undefined4 *)((int)register0x00000054 + -0x250) = 2;
              *(uint *)((int)register0x00000054 + -0x24c) = uVar5;
              *(undefined4 *)((int)register0x00000054 + -0x248) = 1;
              *(undefined **)((int)register0x00000054 + -0x244) = PTR_DAT_0056ba00;
              FUN_000987f4();
              iVar6 = *(int *)((int)register0x00000054 + -0x240);
              uVar5 = *(uint *)((int)register0x00000054 + -0x238);
              uVar11 = *(undefined8 *)((int)register0x00000054 + -0x224);
            }
            else {
              iVar6 = *(int *)((int)register0x00000054 + -0x20c);
            }
            *(int *)((int)register0x00000054 + -0x20c) = iVar6;
            *(uint *)((int)register0x00000054 + -0x230) = uVar5;
            *(undefined8 *)(iVar6 + 8) = uVar11;
            k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar5);
            uVar2 = FUN_0009def8(0,(undefined1 *)((int)register0x00000054 + -0x16c));
            FUN_0009de88(uVar2,(undefined1 *)((int)register0x00000054 + -0x1f8));
            *(undefined1 **)((int)register0x00000054 + -0x160) =
                 (undefined1 *)((int)register0x00000054 + -0x1f8);
            FUN_0006aa3c();
            *(undefined4 *)((int)register0x00000054 + -0x164) =
                 *(undefined4 *)((int)register0x00000054 + -0x254);
            *(undefined8 *)((int)register0x00000054 + -0x21c) =
                 *(undefined8 *)(*(int *)((int)register0x00000054 + -0x200) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x254) =
                 *(undefined4 *)((int)register0x00000054 + -0x21c);
            *(undefined4 *)((int)register0x00000054 + -0x250) =
                 *(undefined4 *)((int)register0x00000054 + -0x218);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + -0x204) =
                 *(undefined4 *)((int)register0x00000054 + -0x24c);
            *(undefined **)((int)register0x00000054 + -0x254) = PTR_DAT_0056ba04;
            *(undefined1 **)((int)register0x00000054 + -0x250) =
                 (undefined1 *)((int)register0x00000054 + -0x16c);
            *(undefined **)((int)register0x00000054 + -0x24c) = PTR_DAT_0056b9f8;
            *(undefined4 *)((int)register0x00000054 + -0x248) = 5;
            FUN_00093a08();
            puVar4 = *(undefined4 **)((int)register0x00000054 + -0x244);
            *puVar4 = PTR_DAT_0056ba00;
            if (*(int *)PTR_DAT_0056ba08 == 0) {
              uVar2 = *(undefined4 *)((int)register0x00000054 + -0x204);
            }
            else {
              puVar4 = (undefined4 *)FUN_0009db64();
              uVar2 = *(undefined4 *)((int)register0x00000054 + -0x204);
              *unaff_r8 = uVar2;
              unaff_r8[1] = puVar4[1];
            }
            puVar4[1] = uVar2;
            uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x200) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x254) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -0x200) + 8);
            *(undefined4 *)((int)register0x00000054 + -0x250) = uVar2;
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x204) =
                 *(undefined4 *)((int)register0x00000054 + -0x24c);
            *(undefined **)((int)register0x00000054 + -0x254) = PTR_DAT_0056ba04;
            *(undefined1 **)((int)register0x00000054 + -0x250) =
                 (undefined1 *)((int)register0x00000054 + -0x16c);
            *(undefined **)((int)register0x00000054 + -0x24c) =
                 PTR_s_nametempPORTFREQKEYSset_Noneport_00820821_0x1fd_0056ba0c;
            *(undefined4 *)((int)register0x00000054 + -0x248) = 4;
            FUN_00093a08();
            puVar4 = *(undefined4 **)((int)register0x00000054 + -0x244);
            *puVar4 = PTR_DAT_0056ba10;
            if (*(int *)PTR_DAT_0056ba08 == 0) {
              uVar2 = *(undefined4 *)((int)register0x00000054 + -0x204);
            }
            else {
              puVar4 = (undefined4 *)FUN_0009db64();
              uVar2 = *(undefined4 *)((int)register0x00000054 + -0x204);
              *unaff_r8 = uVar2;
              unaff_r8[1] = puVar4[1];
            }
            puVar4[1] = uVar2;
            *(undefined **)((int)register0x00000054 + -0x254) = PTR_DAT_0056ba04;
            *(undefined1 **)((int)register0x00000054 + -0x250) =
                 (undefined1 *)((int)register0x00000054 + -0x16c);
            *(undefined **)((int)register0x00000054 + -0x24c) = PTR_DAT_0056b9f8;
            *(undefined4 *)((int)register0x00000054 + -0x248) = 5;
            FUN_00025f60();
            puVar7 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x244);
            uVar9 = puVar7 == PTR_DAT_0056ba00;
            if ((bool)uVar9) {
              uVar11 = *(undefined8 *)(*(undefined4 **)((int)register0x00000054 + -0x244))[1];
              uVar5 = *(uint *)((int)register0x00000054 + -0x230);
              if (uVar5 < 3) {
                *(undefined8 *)((int)register0x00000054 + -0x224) = uVar11;
                *(undefined4 *)((int)register0x00000054 + -0x254) =
                     *(undefined4 *)((int)register0x00000054 + -0x20c);
                *(undefined4 *)((int)register0x00000054 + -0x250) = 3;
                *(uint *)((int)register0x00000054 + -0x24c) = uVar5;
                *(undefined4 *)((int)register0x00000054 + -0x248) = 1;
                *(undefined **)((int)register0x00000054 + -0x244) = PTR_DAT_0056ba00;
                FUN_000987f4();
                iVar6 = *(int *)((int)register0x00000054 + -0x240);
                uVar5 = *(uint *)((int)register0x00000054 + -0x238);
                uVar11 = *(undefined8 *)((int)register0x00000054 + -0x224);
              }
              else {
                iVar6 = *(int *)((int)register0x00000054 + -0x20c);
              }
              *(undefined8 *)(iVar6 + 0x10) = uVar11;
              *(int *)((int)register0x00000054 + 8) = iVar6;
              *(undefined4 *)((int)register0x00000054 + 0xc) = 3;
              *(uint *)((int)register0x00000054 + 0x10) = uVar5;
              return;
            }
            *(undefined **)((int)register0x00000054 + -0x254) = puVar7;
            *(undefined **)((int)register0x00000054 + -0x250) = PTR_DAT_0056ba00;
            *(undefined **)((int)register0x00000054 + -0x24c) = PTR_DAT_0056ba14;
            FUN_000209b4();
            puVar7 = extraout_r1;
            puVar1 = extraout_r2;
          }
          *(undefined **)((int)register0x00000054 + -0x254) = puVar7;
          *(undefined **)((int)register0x00000054 + -0x250) = puVar1;
          *(undefined **)((int)register0x00000054 + -0x24c) = PTR_DAT_0056ba14;
          puVar1 = (undefined *)FUN_000209b4();
          puVar7 = extraout_r2_00;
        }
        *(undefined **)((int)register0x00000054 + -0x254) = puVar1;
        *(undefined **)((int)register0x00000054 + -0x250) = puVar7;
        *(undefined **)((int)register0x00000054 + -0x24c) = PTR_DAT_0056ba14;
        puVar1 = (undefined *)FUN_000209b4();
        puVar7 = extraout_r2_01;
      }
      *(undefined **)((int)register0x00000054 + -0x254) = puVar1;
      *(undefined **)((int)register0x00000054 + -0x250) = puVar7;
      *(undefined **)((int)register0x00000054 + -0x24c) = PTR_DAT_0056ba14;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -600);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x56b9d8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/fan.(*PrinterFan).GetFan @ 0056ba18 (size 16) */

void k3c_internal_pkg_fan___PrinterFan__GetFan(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0056ba24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.Load_config_fan @ 0056ba28 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_fan_Load_config_fan(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x56ba60;
    FUN_0009bf64();
  }
  k3c_internal_pkg_fan_NewPrinterFan();
  in_stack_00000008 = _UNK_0056ba68;
                    /* WARNING: Could not recover jumptable at 0x0056ba54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.NewPrinterFanGeneric @ 0056ba6c (size 1212) */

void k3c_internal_pkg_fan_NewPrinterFanGeneric(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *extraout_r1;
  int extraout_r1_00;
  uint uVar6;
  int *piVar7;
  int *extraout_r2;
  int extraout_r2_00;
  undefined4 *puVar8;
  undefined4 *extraout_r2_01;
  int iVar9;
  int extraout_r3;
  undefined4 uVar10;
  int extraout_r3_00;
  int extraout_r3_01;
  undefined4 uVar11;
  undefined1 *puVar12;
  double *pdVar13;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar14;
  undefined4 unaff_lr;
  undefined1 uVar15;
  undefined8 uVar16;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar14 = (undefined1 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x68) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0056bf2c;
      FUN_00022cf8();
      piVar5 = *(int **)((int)register0x00000054 + -0x60);
      piVar7 = *(int **)((int)register0x00000054 + 4);
      iVar9 = *piVar7;
      if (*(int *)PTR_DAT_0056bf30 != 0) {
        FUN_0009db54();
        *unaff_r8 = extraout_r3;
        piVar5 = extraout_r1;
        piVar7 = extraout_r2;
        iVar9 = extraout_r3;
      }
      *(int **)((int)register0x00000054 + -4) = piVar5;
      *piVar5 = iVar9;
      *(int **)((int)register0x00000054 + -100) = piVar7;
      *(undefined8 *)((int)register0x00000054 + -0x60) = 0;
      k3c_internal_pkg_fan_NewFan();
      iVar9 = *(int *)((int)register0x00000054 + -0x58);
      if (*(int *)PTR_DAT_0056bf30 == 0) {
        iVar1 = *(int *)((int)register0x00000054 + -4);
      }
      else {
        FUN_0009db64();
        *unaff_r8 = extraout_r1_00;
        iVar1 = *(int *)((int)register0x00000054 + -4);
        unaff_r8[1] = *(int *)(iVar1 + 4);
        iVar9 = extraout_r1_00;
      }
      *(int *)(iVar1 + 4) = iVar9;
      uVar10 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -100) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x60) = uVar10;
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0056bf34;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x50) = 0xffffffff;
      FUN_0014f168(iVar1);
      uVar6 = *(uint *)((int)register0x00000054 + -0x48);
      uVar2 = uVar6 - 1;
      uVar15 = uVar6 == uVar2;
      if (uVar2 < uVar6) {
        uVar16 = CONCAT44(*(int *)((int)register0x00000054 + -4),
                          *(undefined4 *)(*(int *)((int)register0x00000054 + -0x4c) + uVar2 * 8));
        *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0xc) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -0x4c) + uVar2 * 8 + 4);
        if (*(int *)PTR_DAT_0056bf30 != 0) {
          uVar16 = FUN_0009db64();
          *unaff_r8 = (int)uVar16;
          unaff_r8[1] = *(int *)((int)((ulonglong)uVar16 >> 0x20) + 8);
        }
        *(int *)((int)((ulonglong)uVar16 >> 0x20) + 8) = (int)uVar16;
        *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0056bf38;
        FUN_00022cf8();
        iVar9 = *(int *)((int)register0x00000054 + -0x60);
        uVar16 = *(undefined8 *)PTR_DAT_0056bf3c;
        *(undefined8 *)(iVar9 + 0x10) = uVar16;
        *(undefined8 *)(iVar9 + 0x18) = uVar16;
        uVar16 = *(undefined8 *)PTR_DAT_0056bf40;
        *(undefined8 *)(iVar9 + 0x20) = uVar16;
        *(undefined8 *)(iVar9 + 0x28) = uVar16;
        uVar16 = *(undefined8 *)PTR_DAT_0056bf44;
        *(undefined8 *)(iVar9 + 0x30) = uVar16;
        *(undefined8 *)(iVar9 + 0x38) = uVar16;
        uVar16 = *(undefined8 *)PTR_DAT_0056bf48;
        *(undefined8 *)(iVar9 + 0x40) = uVar16;
        *(undefined8 *)(iVar9 + 0x48) = uVar16;
        *(undefined8 *)(iVar9 + 0x50) = 0x3fe0000000000000;
        *(undefined8 *)(iVar9 + 0x58) = 0x3fe0000000000000;
        uVar16 = *(undefined8 *)PTR_DAT_0056bf4c;
        *(undefined8 *)(iVar9 + 0x60) = uVar16;
        *(undefined8 *)(iVar9 + 0x68) = uVar16;
        uVar16 = *(undefined8 *)PTR_DAT_0056bf50;
        *(undefined8 *)(iVar9 + 0x70) = uVar16;
        *(undefined8 *)(iVar9 + 0x78) = uVar16;
        uVar16 = *(undefined8 *)PTR_DAT_0056bf54;
        *(undefined8 *)(iVar9 + 0x80) = uVar16;
        *(undefined8 *)(iVar9 + 0x88) = uVar16;
        uVar16 = *(undefined8 *)PTR_DAT_0056bf58;
        *(undefined8 *)(iVar9 + 0x90) = uVar16;
        *(undefined8 *)(iVar9 + 0x98) = uVar16;
        *(undefined8 *)(iVar9 + 0xa0) = 0x3ff0000000000000;
        *(undefined8 *)(iVar9 + 0xa8) = 0x3ff0000000000000;
        *(int *)((int)register0x00000054 + -100) = iVar9;
        *(undefined4 *)((int)register0x00000054 + -0x60) = 0x16;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 0x16;
        FUN_0008f820();
        uVar10 = *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x60) =
             PTR_s_pwm_tableFORBIDDEN__color__unwin_00823504_0x5c0_0056bf5c;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 9;
        *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_0056bf60;
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar10;
        *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_0056bf64;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 0x16;
        *(undefined1 *)((int)register0x00000054 + -0x44) = 0;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloatlist();
        iVar3 = *(int *)((int)register0x00000054 + -0x3c);
        uVar10 = *(undefined4 *)((int)register0x00000054 + -0x38);
        iVar9 = *(int *)((int)register0x00000054 + -0x40);
        iVar1 = *(int *)((int)register0x00000054 + -4);
        *(int *)(iVar1 + 0x1c) = iVar3;
        *(undefined4 *)(iVar1 + 0x20) = uVar10;
        if (*(int *)PTR_DAT_0056bf30 != 0) {
          iVar3 = FUN_0009db64();
          *unaff_r8 = extraout_r2_00;
          unaff_r8[1] = *(int *)(extraout_r3_00 + 0x18);
          iVar9 = extraout_r2_00;
          iVar1 = extraout_r3_00;
        }
        *(int *)(iVar1 + 0x18) = iVar9;
        uVar15 = 0;
        if (iVar3 == 0x16) {
          puVar4 = (undefined1 *)0x0;
          do {
            if (9 < (int)puVar4) {
              FUN_0009deec(0,(undefined1 *)((int)register0x00000054 + -0x2c));
              uVar10 = *(undefined4 *)(extraout_r3_01 + 0xc);
              *(undefined4 *)((int)register0x00000054 + -100) = *(undefined4 *)(extraout_r3_01 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x60) = uVar10;
              FUN_0008f77c();
              *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0056bf68;
              *(undefined4 *)((int)register0x00000054 + -0x28) =
                   *(undefined4 *)((int)register0x00000054 + -0x5c);
              *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0056bf68;
              *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0056bf6c;
              iVar9 = *(int *)((int)register0x00000054 + -4);
              pdVar13 = *(double **)(iVar9 + 0x1c);
              uVar10 = *(undefined4 *)(iVar9 + 0x20);
              *(undefined4 *)((int)register0x00000054 + -100) = *(undefined4 *)(iVar9 + 0x18);
              *(double **)((int)register0x00000054 + -0x60) = pdVar13;
              *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar10;
              FUN_0008f820();
              *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0056bf60;
              *(undefined4 *)((int)register0x00000054 + -0x18) =
                   *(undefined4 *)((int)register0x00000054 + -0x58);
              *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_0056bf68;
              *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0056bf70;
              *(undefined4 *)((int)register0x00000054 + -100) = 0x16;
              FUN_00020ce0();
              *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0056bf74;
              *(undefined4 *)((int)register0x00000054 + -8) =
                   *(undefined4 *)((int)register0x00000054 + -0x60);
              *(undefined1 **)((int)register0x00000054 + -100) =
                   (undefined1 *)((int)register0x00000054 + -0x2c);
              *(undefined4 *)((int)register0x00000054 + -0x60) = 5;
              *(undefined4 *)((int)register0x00000054 + -0x5c) = 5;
              k3c_internal_pkg_logger_Debug();
              *(undefined4 *)((int)register0x00000054 + -100) =
                   **(undefined4 **)((int)register0x00000054 + -4);
              *(undefined **)((int)register0x00000054 + -0x60) =
                   PTR_s_gcodeok__sM8844_helpReady_________00820821_0x5d2_0056bf78;
              *(undefined4 *)((int)register0x00000054 + -0x5c) = 5;
              *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_0056bf7c;
              *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0056bf80;
              k3c_internal_pkg_printer___Printer__Lookup_object();
              puVar12 = PTR_DAT_0056bf84;
              *(undefined4 *)((int)register0x00000054 + -0x34) =
                   *(undefined4 *)((int)register0x00000054 + -0x50);
              *(undefined4 *)((int)register0x00000054 + -0x30) =
                   *(undefined4 *)((int)register0x00000054 + -0x4c);
              *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0056bf84;
              FUN_00022cf8();
              puVar8 = *(undefined4 **)((int)register0x00000054 + -0x60);
              *puVar8 = PTR_k3c_internal_pkg_fan___PrinterFanGeneric__cmd_SET_FAN_SPEED_fm_0056bf88;
              if (*(int *)PTR_DAT_0056bf30 == 0) {
                iVar9 = *(int *)((int)register0x00000054 + -4);
              }
              else {
                FUN_0009db54();
                iVar9 = *(int *)((int)register0x00000054 + -4);
                *unaff_r8 = iVar9;
                puVar8 = extraout_r2_01;
              }
              puVar8[1] = iVar9;
              uVar15 = *(undefined **)((int)register0x00000054 + -0x34) == PTR_DAT_0056bf8c;
              if ((bool)uVar15) {
                uVar10 = *(undefined4 *)(iVar9 + 8);
                uVar11 = *(undefined4 *)(iVar9 + 0xc);
                *(undefined4 *)((int)register0x00000054 + -100) =
                     *(undefined4 *)((int)register0x00000054 + -0x30);
                *(undefined **)((int)register0x00000054 + -0x60) =
                     PTR_s_SET_FAN_SPEEDserial_port__ace_co_008262d0_0x114c_0056bf90;
                *(undefined4 *)((int)register0x00000054 + -0x5c) = 0xd;
                *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_0056bf94;
                *(undefined4 *)((int)register0x00000054 + -0x54) = 3;
                *(undefined4 *)((int)register0x00000054 + -0x50) = uVar10;
                *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar11;
                *(undefined4 **)((int)register0x00000054 + -0x48) = puVar8;
                *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0056bf98;
                *(undefined4 *)((int)register0x00000054 + -0x40) = 0x17;
                k3c_internal_pkg_gcode___GCodeDispatch__Register_mux_command();
                *(undefined4 *)((int)register0x00000054 + 8) =
                     *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0056bebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((int)register0x00000054 + -0x68))();
                return;
              }
              *(undefined **)((int)register0x00000054 + -100) =
                   *(undefined **)((int)register0x00000054 + -0x34);
              *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0056bf8c;
              *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0056bf9c;
              FUN_000209b4();
              goto LAB_0056bed4;
            }
            puVar12 = (undefined1 *)((int)puVar4 * 2);
            uVar15 = puVar12 == &DAT_00000016;
            if (&DAT_00000015 < puVar12) goto LAB_0056bef4;
            puVar12 = puVar4 + 1;
            pdVar13 = (double *)((int)puVar12 * 2);
            iVar1 = (int)puVar4 * 0x10;
            uVar15 = pdVar13 == (double *)&DAT_00000016;
            if (&DAT_00000015 < pdVar13) goto LAB_0056bee8;
            pdVar13 = (double *)(iVar9 + (int)puVar12 * 0x10);
            puVar4 = puVar12;
          } while (*(double *)(iVar9 + iVar1) != *pdVar13);
          uVar15 = 1;
LAB_0056bed4:
          *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0056bf68;
          *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0056bfa0;
          FUN_00095b00();
LAB_0056bee8:
          FUN_0009dbd4(pdVar13,0x16);
LAB_0056bef4:
          FUN_0009dbd4(puVar12,0x16);
        }
        *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0056bf68;
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0056bfa4;
        FUN_00095b00();
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x68);
      if ((bool)uVar15) {
        register0x00000054 = (BADSPACEBASE *)puVar14;
      }
    }
    unaff_lr = 0x56bf24;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/fan.(*PrinterFanGeneric).Get_status @ 0056bfa8 (size 316) */

void k3c_internal_pkg_fan___PrinterFanGeneric__Get_status(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 uStack_1c;
  undefined4 *puStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x56c0e0;
    FUN_0009bf64();
  }
  FUN_000908bc();
  FUN_0008f6c0();
  puVar1 = PTR_DAT_0056c0ec;
  FUN_00093a08();
  *puStack_14 = PTR_DAT_0056c0f0;
  puVar2 = puStack_14;
  if (*(int *)PTR_DAT_0056c0f4 != 0) {
    puVar2 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = uStack_1c;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = uStack_1c;
  FUN_0008f77c();
  FUN_00093a08();
  *puStack_14 = PTR_DAT_0056c0fc;
  if (*(int *)PTR_DAT_0056c0f4 != 0) {
    puStack_14 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = puStack_14[1];
  }
  puStack_14[1] = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0056c0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.(*PrinterFanGeneric).get_pwm @ 0056c100 (size 256) */

void k3c_internal_pkg_fan___PrinterFanGeneric__get_pwm(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r3;
  int extraout_r3_00;
  int iVar5;
  int iVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      dVar9 = *(double *)((int)register0x00000054 + 8);
      iVar1 = 0;
      while( true ) {
        uVar3 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x1c);
        if ((int)((uVar3 >> 1) - 1) <= iVar1) {
          *(undefined8 *)((int)register0x00000054 + 0x10) = 0;
          return;
        }
        iVar5 = iVar1 * 2;
        uVar8 = uVar3 == iVar1 * 2;
        if (uVar3 <= (uint)(iVar1 * 2)) goto LAB_0056c1e8;
        iVar6 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x18);
        uVar4 = iVar5 + 1;
        iVar5 = iVar1 * 0x10;
        uVar8 = uVar3 == uVar4;
        if (uVar3 <= uVar4) goto LAB_0056c1e0;
        iVar1 = iVar1 + 1;
        uVar8 = uVar3 == iVar1 * 2;
        if (uVar3 <= (uint)(iVar1 * 2)) goto LAB_0056c1dc;
        uVar2 = iVar1 * 2 + 1;
        uVar8 = uVar3 == uVar2;
        if (uVar3 <= uVar2) break;
        dVar10 = *(double *)(iVar6 + iVar5);
        if ((dVar10 <= dVar9) && (dVar11 = *(double *)(iVar6 + iVar1 * 0x10), dVar9 <= dVar11)) {
          dVar12 = *(double *)(iVar6 + uVar4 * 8);
          dVar11 = (*(double *)(iVar6 + uVar2 * 8) - dVar12) / (dVar11 - dVar10);
          *(double *)((int)register0x00000054 + 0x10) = (dVar12 - dVar11 * dVar10) + dVar11 * dVar9;
          return;
        }
      }
      FUN_0009dbd4();
LAB_0056c1dc:
      FUN_0009dbd4();
      uVar4 = extraout_r3;
LAB_0056c1e0:
      FUN_0009dbd4(uVar4);
      iVar5 = extraout_r3_00;
LAB_0056c1e8:
      param_1 = FUN_0009dbd4(iVar5);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x56c1fc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/fan.(*PrinterFanGeneric).cmd_SET_FAN_SPEED @ 0056c200 (size 276) */

void k3c_internal_pkg_fan___PrinterFanGeneric__cmd_SET_FAN_SPEED(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *local_44;
  undefined8 local_24;
  
  while (uVar2 = DAT_0056c320, uVar1 = DAT_0056c31c,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_gcode___GCodeCommand__Get_float();
  *(undefined8 *)(in_stack_00000004 + 0x10) = local_24;
  k3c_internal_pkg_fan___PrinterFanGeneric__get_pwm();
  uVar3 = *(undefined4 *)(*(int *)(in_stack_00000004 + 4) + 0x44);
  FUN_00022cf8();
  local_44 = (undefined4 *)local_24;
  *local_44 = DAT_0056c328;
  if (*DAT_0056c32c != 0) {
    local_44 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = uVar3;
  }
  local_44[1] = uVar3;
  *(ulonglong *)(local_44 + 2) = CONCAT44(uVar2,uVar1);
  k3c_internal_pkg_toolhead___Toolhead__Register_lookahead_callback();
  return;
}



/* k3c/internal/pkg/fan.(*PrinterFanGeneric).cmd_SET_FAN_SPEED.(*Fan).Set_speed_from_command.(*GCodeRequestQueue).Queue_gcode_request.func1 @ 0056c330 (size 60) */

void k3c_internal_pkg_fan___PrinterFanGeneric__cmd_SET_FAN_SPEED___Fan__Set_speed_from_command___GCodeRequestQueue__Queue_gcode_request_func1
               (void)

{
  int unaff_r10;
  undefined8 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  k3c_internal_pkg_toolhead___GCodeRequestQueue___queue_request();
  return;
}



/* k3c/internal/pkg/fan.Load_config_fan_generic @ 0056c36c (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_fan_Load_config_fan_generic(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x56c3a4;
    FUN_0009bf64();
  }
  k3c_internal_pkg_fan_NewPrinterFanGeneric();
  in_stack_00000008 = _UNK_0056c3ac;
                    /* WARNING: Could not recover jumptable at 0x0056c398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.NewPrinterHeaterFan @ 0056c3b0 (size 1072) */

void k3c_internal_pkg_fan_NewPrinterHeaterFan(void)

{
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *extraout_r1;
  uint uVar5;
  undefined *extraout_r1_00;
  undefined *puVar6;
  int *extraout_r2;
  undefined *extraout_r2_00;
  int extraout_r2_01;
  int iVar7;
  int extraout_r3;
  int iVar8;
  int *extraout_r3_00;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar9;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *piStack_54;
  int *piStack_48;
  char cStack_44;
  uint uStack_40;
  uint uStack_3c;
  int iStack_2c;
  undefined8 uStack_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x56c7dc;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  iVar7 = *in_stack_00000004;
  piVar2 = in_stack_00000004;
  if (*(int *)PTR_DAT_0056c7e8 != 0) {
    FUN_0009db54();
    *unaff_r8 = extraout_r3;
    piStack_54 = extraout_r1;
    piVar2 = extraout_r2;
    iVar7 = extraout_r3;
  }
  *piStack_54 = iVar7;
  puVar1 = PTR_DAT_0056c7f4;
  puVar6 = PTR_DAT_0056c7f0;
  piStack_48 = (int *)PTR_DAT_0056c7f0;
  k3c_internal_pkg_printer___Printer__Load_object();
  iVar7 = *piStack_54;
  FUN_00022cf8();
  *piVar2 = (int)PTR_k3c_internal_pkg_fan___PrinterHeaterFan__handle_ready_fm_0056c7fc;
  if (*(int *)PTR_DAT_0056c7e8 != 0) {
    piVar2 = (int *)FUN_0009db54();
    *unaff_r8 = (int)piStack_54;
  }
  piVar2[1] = (int)piStack_54;
  FUN_00093560();
  cStack_44 = (char)puVar1;
  iVar8 = *(int *)(puVar6 + 4);
  uVar3 = *(uint *)(puVar6 + 8);
  puVar6 = *(undefined **)puVar6;
  if (cStack_44 == '\0') {
    uVar3 = 0;
    iVar8 = 0;
    puVar6 = PTR_DAT_0056c7f4;
  }
  uVar5 = iVar8 + 1U;
  if (uVar3 < iVar8 + 1U) {
    piStack_48 = (int *)PTR_DAT_0056c808;
    FUN_000987f4();
    uVar3 = uStack_3c;
    uVar5 = uStack_40;
    puVar6 = puVar1;
  }
  if (*(int *)PTR_DAT_0056c7e8 != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)piVar2;
    unaff_r8[1] = *(int *)(extraout_r2_00 + (uVar5 - 1) * 4);
    puVar6 = extraout_r2_00;
  }
  *(int **)(puVar6 + (uVar5 - 1) * 4) = piVar2;
  puVar4 = *(undefined4 **)(iVar7 + 0x24);
  FUN_00093a08();
  piStack_48[1] = uVar5;
  piStack_48[2] = uVar3;
  if (*(int *)PTR_DAT_0056c7e8 != 0) {
    piStack_48 = (int *)FUN_0009db64();
    *unaff_r8 = (int)puVar6;
    unaff_r8[1] = *piStack_48;
  }
  *piStack_48 = (int)puVar6;
  FUN_00022cf8();
  puVar4[1] = 8;
  *puVar4 = PTR_s_extruder_s__s__sINIT_TMCstepper__008216f7_0x131d_0056c810;
  FUN_0008f820();
  puVar6 = PTR_DAT_0056c818;
  k3c_internal_pkg_printer___ConfigWrapper__Getlist();
  FUN_0008f820();
  k3c_internal_pkg_util_cast_ToStringSlice();
  piStack_54[2] = (int)puVar6;
  piStack_54[3] = 0xd;
  piVar2 = piStack_54;
  if (*(int *)PTR_DAT_0056c7e8 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r2_01;
    unaff_r8[1] = extraout_r3_00[1];
    iStack_2c = extraout_r2_01;
    piVar2 = extraout_r3_00;
  }
  piVar2[1] = iStack_2c;
  puVar6 = PTR_DAT_0056c824;
  k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
  *(undefined8 *)(piStack_54 + 4) = uStack_20;
  piStack_54[7] = 0;
  piStack_54[8] = 0;
  piVar2 = piStack_54;
  if (*(int *)PTR_DAT_0056c7e8 != 0) {
    uVar9 = FUN_0009db54(piStack_54,piStack_54[6]);
    piVar2 = (int *)uVar9;
    *unaff_r8 = (int)((ulonglong)uVar9 >> 0x20);
  }
  piVar2[6] = (int)PTR_DAT_0056c7f4;
  k3c_internal_pkg_fan_NewFan();
  if (*(int *)PTR_DAT_0056c7e8 != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)extraout_r1_00;
    unaff_r8[1] = piStack_54[9];
    puVar6 = extraout_r1_00;
  }
  piStack_54[9] = (int)puVar6;
  k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
  *(undefined8 *)(piStack_54 + 10) = uStack_20;
  piStack_54[0xc] = 0;
  piStack_54[0xd] = 0;
  in_stack_00000008 = piStack_54;
                    /* WARNING: Could not recover jumptable at 0x0056c7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.(*PrinterHeaterFan).handle_ready @ 0056c834 (size 708) */

void k3c_internal_pkg_fan___PrinterHeaterFan__handle_ready(void)

{
  int extraout_r1;
  undefined4 uVar1;
  uint uVar2;
  uint extraout_r2;
  int iVar3;
  int extraout_r2_00;
  int iVar4;
  int iVar5;
  int extraout_r3;
  int extraout_r3_00;
  int iVar6;
  int *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x56caf4;
    FUN_0009bf64();
  }
  iVar8 = DAT_0056cb00;
  k3c_internal_pkg_printer___Printer__Lookup_object();
  if (local_40 == DAT_0056cb08) {
    uVar1 = *(undefined4 *)(in_stack_00000004 + 4);
    iVar4 = *(int *)(in_stack_00000004 + 8);
    for (iVar6 = 0; iVar6 < iVar4; iVar6 = iVar6 + 1) {
      k3c_internal_pkg_heater___PrinterHeaters__Lookup_heater();
      uVar2 = *(int *)(in_stack_00000004 + 0x1c) + 1;
      iVar5 = *(int *)(in_stack_00000004 + 0x18);
      iVar3 = in_stack_00000004;
      iVar9 = iVar8;
      if (*(uint *)(in_stack_00000004 + 0x20) < uVar2) {
        iVar9 = 1;
        FUN_000987f4();
        *(undefined4 *)(in_stack_00000004 + 0x20) = local_38;
        iVar5 = local_40;
        uVar2 = local_3c;
        iVar3 = in_stack_00000004;
        if (*DAT_0056cb18 != 0) {
          FUN_0009db64();
          *unaff_r8 = extraout_r1;
          unaff_r8[1] = *(int *)(extraout_r3 + 0x18);
          iVar5 = extraout_r1;
          uVar2 = extraout_r2;
          iVar3 = extraout_r3;
        }
        *(int *)(iVar3 + 0x18) = iVar5;
      }
      *(uint *)(iVar3 + 0x1c) = uVar2;
      iVar3 = uVar2 - 1;
      if (*DAT_0056cb18 != 0) {
        FUN_0009db64();
        *unaff_r8 = iVar8;
        unaff_r8[1] = *(int *)(extraout_r3_00 + extraout_r2_00 * 4);
        iVar3 = extraout_r2_00;
        iVar5 = extraout_r3_00;
      }
      *(int *)(iVar5 + iVar3 * 4) = iVar8;
      iVar8 = iVar9;
    }
    puVar7 = (undefined4 *)&DAT_00000033;
    k3c_internal_pkg_logger_Debugf(0,in_stack_00000004,uVar1,iVar4,unaff_lr,DAT_0056cb1c,0x33,0,0,0)
    ;
    k3c_internal_pkg_chelper__Cfunc_get_monotonic(in_stack_00000004);
    FUN_00022cf8();
    *puVar7 = DAT_0056cb24;
    if (*DAT_0056cb18 != 0) {
      puVar7 = (undefined4 *)FUN_0009db54();
      *unaff_r8 = in_stack_00000004;
    }
    puVar7[1] = in_stack_00000004;
    k3c_internal_pkg_reactor___Reactor__Register_timer();
    return;
  }
  k3c_internal_pkg_logger_Errorf();
  FUN_001386c4();
  return;
}



/* k3c/internal/pkg/fan.(*PrinterHeaterFan).callback @ 0056cb2c (size 252) */

void k3c_internal_pkg_fan___PrinterHeaterFan__callback(void)

{
  int iVar1;
  int iVar2;
  int unaff_r10;
  double dVar3;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 local_24;
  undefined4 uStack_20;
  double local_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  iVar1 = *(int *)(in_stack_00000004 + 0x1c);
  dVar3 = 0.0;
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    k3c_internal_pkg_heater___Heater__Get_temp();
    if ((0.0 < local_1c) ||
       (*(double *)(in_stack_00000004 + 0x10) < (double)CONCAT44(uStack_20,local_24))) {
      dVar3 = *(double *)(in_stack_00000004 + 0x28);
    }
  }
  if (dVar3 != *(double *)(in_stack_00000004 + 0x30)) {
    *(double *)(in_stack_00000004 + 0x30) = dVar3;
    k3c_internal_pkg_fan___Fan__set_speed();
  }
  return;
}



/* k3c/internal/pkg/fan.Load_config_heater_fan @ 0056cc28 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_fan_Load_config_heater_fan(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x56cc60;
    FUN_0009bf64();
  }
  k3c_internal_pkg_fan_NewPrinterHeaterFan();
  in_stack_00000008 = _UNK_0056cc68;
                    /* WARNING: Could not recover jumptable at 0x0056cc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/fan.(*PrinterHeaterFan).handle_ready-fm @ 0056cc6c (size 124) */

void k3c_internal_pkg_fan___PrinterHeaterFan__handle_ready_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_18;
  }
  uStack_18 = *(undefined4 *)(unaff_r7 + 4);
  uStack_14 = in_stack_00000004;
  uStack_10 = in_stack_00000008;
  uStack_c = in_stack_0000000c;
  k3c_internal_pkg_fan___PrinterHeaterFan__handle_ready();
  return;
}



/* k3c/internal/pkg/fan.(*PrinterHeaterFan).callback-fm @ 0056cce8 (size 100) */

void k3c_internal_pkg_fan___PrinterHeaterFan__callback_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined8 *)*piVar1)) {
    *piVar1 = (int)&uStack_14;
  }
  uStack_14 = *(undefined4 *)(unaff_r7 + 4);
  uStack_10 = in_stack_00000004;
  k3c_internal_pkg_fan___PrinterHeaterFan__callback();
  return;
}



/* k3c/internal/pkg/fan.(*PrinterFanGeneric).cmd_SET_FAN_SPEED-fm @ 0056cd4c (size 108) */

void k3c_internal_pkg_fan___PrinterFanGeneric__cmd_SET_FAN_SPEED_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *(undefined4 *)(unaff_r7 + 4);
  uStack_c = in_stack_00000004;
  k3c_internal_pkg_fan___PrinterFanGeneric__cmd_SET_FAN_SPEED();
  return;
}



/* k3c/internal/pkg/fan.(*PrinterFan).cmd_M106-fm @ 0056cdb8 (size 108) */

void k3c_internal_pkg_fan___PrinterFan__cmd_M106_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *(undefined4 *)(unaff_r7 + 4);
  uStack_c = in_stack_00000004;
  k3c_internal_pkg_fan___PrinterFan__cmd_M106();
  return;
}



/* k3c/internal/pkg/fan.(*PrinterFan).cmd_M107-fm @ 0056ce24 (size 108) */

void k3c_internal_pkg_fan___PrinterFan__cmd_M107_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *(undefined4 *)(unaff_r7 + 4);
  uStack_c = in_stack_00000004;
  k3c_internal_pkg_fan___PrinterFan__cmd_M107();
  return;
}



/* k3c/internal/pkg/fan.(*PrinterFan).SetFan-fm @ 0056ce90 (size 124) */

void k3c_internal_pkg_fan___PrinterFan__SetFan_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_18;
  }
  uStack_18 = *(undefined4 *)(unaff_r7 + 4);
  uStack_14 = in_stack_00000004;
  k3c_internal_pkg_fan___PrinterFan__SetFan();
  return;
}



/* k3c/internal/pkg/fan.(*Fan)._apply_speed-fm @ 0056cf0c (size 124) */

void k3c_internal_pkg_fan___Fan___apply_speed_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined8 in_stack_0000001c;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined8 *)*piVar1)) {
    *piVar1 = (int)&uStack_24;
  }
  uStack_24 = *(undefined4 *)(unaff_r7 + 4);
  uStack_20 = in_stack_00000004;
  uStack_18 = in_stack_0000000c;
  k3c_internal_pkg_fan___Fan___apply_speed();
  return;
}



/* k3c/internal/pkg/fan.(*Fan)._handle_request_restart-fm @ 0056cf88 (size 128) */

void k3c_internal_pkg_fan___Fan___handle_request_restart_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_14;
  }
  uStack_14 = *(undefined4 *)(unaff_r7 + 4);
  uStack_10 = 0;
  uStack_8 = 0;
  uStack_4 = 0;
  k3c_internal_pkg_fan___Fan__set_speed();
  return;
}



/* k3c/internal/pkg/fan.(*CustomTempertureFan).handle_ready-fm @ 0056d008 (size 124) */

void k3c_internal_pkg_fan___CustomTempertureFan__handle_ready_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_18;
  }
  uStack_18 = *(undefined4 *)(unaff_r7 + 4);
  uStack_14 = in_stack_00000004;
  uStack_10 = in_stack_00000008;
  uStack_c = in_stack_0000000c;
  k3c_internal_pkg_fan___CustomTempertureFan__handle_ready();
  return;
}



/* k3c/internal/pkg/fan.(*CustomTempertureFan).callback-fm @ 0056d084 (size 100) */

void k3c_internal_pkg_fan___CustomTempertureFan__callback_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined8 *)*piVar1)) {
    *piVar1 = (int)&uStack_14;
  }
  uStack_14 = *(undefined4 *)(unaff_r7 + 4);
  uStack_10 = in_stack_00000004;
  k3c_internal_pkg_fan___CustomTempertureFan__callback();
  return;
}



/* k3c/internal/pkg/fan.(*ControllerFan).handle_ready-fm @ 0056d0e8 (size 124) */

void k3c_internal_pkg_fan___ControllerFan__handle_ready_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_18;
  }
  uStack_18 = *(undefined4 *)(unaff_r7 + 4);
  uStack_14 = in_stack_00000004;
  uStack_10 = in_stack_00000008;
  uStack_c = in_stack_0000000c;
  k3c_internal_pkg_fan___ControllerFan__handle_ready();
  return;
}



/* k3c/internal/pkg/fan.(*ControllerFan).handle_connect-fm @ 0056d164 (size 124) */

void k3c_internal_pkg_fan___ControllerFan__handle_connect_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_18;
  }
  uStack_18 = *(undefined4 *)(unaff_r7 + 4);
  uStack_14 = in_stack_00000004;
  uStack_10 = in_stack_00000008;
  uStack_c = in_stack_0000000c;
  k3c_internal_pkg_fan___ControllerFan__handle_connect();
  return;
}



/* k3c/internal/pkg/fan.(*ControllerFan).callback-fm @ 0056d1e0 (size 100) */

void k3c_internal_pkg_fan___ControllerFan__callback_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined8 *)*piVar1)) {
    *piVar1 = (int)&uStack_14;
  }
  uStack_14 = *(undefined4 *)(unaff_r7 + 4);
  uStack_10 = in_stack_00000004;
  k3c_internal_pkg_fan___ControllerFan__callback();
  return;
}



