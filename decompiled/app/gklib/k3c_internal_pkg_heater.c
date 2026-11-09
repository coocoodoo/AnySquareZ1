// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/heater   functions: 150
/* k3c/internal/pkg/heater.init @ 004b3b60 (size 1028) */

void k3c_internal_pkg_heater_init(void)

{
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  int extraout_r2_05;
  double *pdVar4;
  double *extraout_r2_06;
  int extraout_r2_07;
  double *pdVar5;
  double *extraout_r3;
  int iVar6;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  uint in_fpscr;
  uint uVar7;
  double dVar8;
  double dVar9;
  uint unaff_s30;
  undefined8 uVar10;
  int iStack_38;
  double *pdStack_34;
  undefined4 uStack_30;
  int iStack_24;
  double *pdStack_20;
  double *pdStack_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4b3f60;
    FUN_0009bf64();
  }
  uVar1 = *(undefined4 *)PTR_DAT_004b3f6c;
  iVar3 = *(int *)PTR_DAT_004b3f70;
  *(undefined4 *)PTR_DAT_004b3f74 = *(undefined4 *)PTR_DAT_004b3f68;
  *(undefined4 *)PTR_DAT_004b3f78 = uVar1;
  if (*(int *)PTR_DAT_004b3f7c != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(int *)PTR_DAT_004b3f80;
    iVar3 = extraout_r2;
  }
  *(int *)PTR_DAT_004b3f80 = iVar3;
  uVar1 = *(undefined4 *)PTR_DAT_004b3f88;
  iVar3 = *(int *)PTR_DAT_004b3f8c;
  *(undefined4 *)PTR_DAT_004b3f90 = *(undefined4 *)PTR_DAT_004b3f84;
  *(undefined4 *)PTR_DAT_004b3f94 = uVar1;
  if (*(int *)PTR_DAT_004b3f7c != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r2_00;
    unaff_r8[1] = *(int *)PTR_DAT_004b3f98;
    iVar3 = extraout_r2_00;
  }
  *(int *)PTR_DAT_004b3f98 = iVar3;
  uVar1 = *(undefined4 *)PTR_DAT_004b3fa0;
  iVar3 = *(int *)PTR_DAT_004b3fa4;
  *(undefined4 *)PTR_DAT_004b3fa8 = *(undefined4 *)PTR_DAT_004b3f9c;
  *(undefined4 *)PTR_DAT_004b3fac = uVar1;
  if (*(int *)PTR_DAT_004b3f7c != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r2_01;
    unaff_r8[1] = *(int *)PTR_DAT_004b3fb0;
    iVar3 = extraout_r2_01;
  }
  *(int *)PTR_DAT_004b3fb0 = iVar3;
  uVar1 = *(undefined4 *)PTR_DAT_004b3fb8;
  iVar3 = *(int *)PTR_DAT_004b3fbc;
  *(undefined4 *)PTR_DAT_004b3fc0 = *(undefined4 *)PTR_DAT_004b3fb4;
  *(undefined4 *)PTR_DAT_004b3fc4 = uVar1;
  if (*(int *)PTR_DAT_004b3f7c != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r2_02;
    unaff_r8[1] = *(int *)PTR_DAT_004b3fc8;
    iVar3 = extraout_r2_02;
  }
  *(int *)PTR_DAT_004b3fc8 = iVar3;
  uVar1 = *(undefined4 *)PTR_DAT_004b3fd0;
  iVar3 = *(int *)PTR_DAT_004b3fd4;
  *(undefined4 *)PTR_DAT_004b3fd8 = *(undefined4 *)PTR_DAT_004b3fcc;
  *(undefined4 *)PTR_DAT_004b3fdc = uVar1;
  if (*(int *)PTR_DAT_004b3f7c != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r2_03;
    unaff_r8[1] = *(int *)PTR_DAT_004b3fe0;
    iVar3 = extraout_r2_03;
  }
  *(int *)PTR_DAT_004b3fe0 = iVar3;
  uVar1 = *(undefined4 *)PTR_DAT_004b3fe8;
  iVar3 = *(int *)PTR_DAT_004b3fec;
  *(undefined4 *)PTR_DAT_004b3ff0 = *(undefined4 *)PTR_DAT_004b3fe4;
  *(undefined4 *)PTR_DAT_004b3ff4 = uVar1;
  if (*(int *)PTR_DAT_004b3f7c != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r2_04;
    unaff_r8[1] = *(int *)PTR_DAT_004b3ff8;
    iVar3 = extraout_r2_04;
  }
  *(int *)PTR_DAT_004b3ff8 = iVar3;
  uVar7 = k3c_internal_pkg_heater_Calc_ina826_pt100();
  *(double **)PTR_DAT_004b3ffc = pdStack_34;
  *(undefined4 *)PTR_DAT_004b4000 = uStack_30;
  if (*(int *)PTR_DAT_004b3f7c != 0) {
    uVar7 = FUN_0009db64();
    *unaff_r8 = extraout_r2_05;
    unaff_r8[1] = *(int *)PTR_DAT_004b4004;
    iStack_38 = extraout_r2_05;
  }
  dVar9 = (double)(ulonglong)uVar7;
  *(int *)PTR_DAT_004b4004 = iStack_38;
  uVar7 = 0;
  pdVar2 = (double *)0x0;
  iVar3 = 0;
  pdVar5 = (double *)0x0;
  while( true ) {
    uVar10 = CONCAT44(uVar7,pdStack_34);
    if (499 < (int)uVar7) break;
    FUN_00022cf8(SUB84(dVar9,0));
    unaff_s30 = unaff_s30 & 0xffff0000 | uVar7 & 0xffff;
    dVar8 = (double)VectorSignedToFloat(unaff_s30,(byte)(in_fpscr >> 0x16) & 3);
    *pdStack_34 = dVar8;
    dVar9 = *(double *)PTR_DAT_004b4014;
    pdStack_34[1] =
         dVar9 * (*(double *)PTR_DAT_004b400c * dVar8 + 1.0 +
                 dVar8 * *(double *)PTR_DAT_004b4010 * dVar8);
    pdVar4 = (double *)((int)pdVar5 + 1);
    pdVar5 = pdVar4;
    if (pdVar2 < pdVar4) {
      FUN_000987f4();
      dVar9 = *(double *)PTR_DAT_004b4014;
      pdVar5 = pdStack_20;
      pdVar2 = pdStack_1c;
      iVar3 = iStack_24;
      pdStack_34 = pdVar4;
    }
    iVar6 = (int)pdVar5 * 0xc + -0xc;
    *(undefined4 *)(iVar3 + iVar6 + 4) = 2;
    *(undefined4 *)(iVar3 + iVar6 + 8) = 2;
    if (*(int *)PTR_DAT_004b3f7c != 0) {
      uVar10 = FUN_0009db64();
      *unaff_r8 = (int)uVar10;
      unaff_r8[1] = *(int *)(iVar3 + iVar6);
      dVar9 = *(double *)PTR_DAT_004b4014;
      pdVar5 = extraout_r2_06;
      pdVar2 = extraout_r3;
    }
    *(int *)(iVar3 + iVar6) = (int)uVar10;
    uVar7 = (int)((ulonglong)uVar10 >> 0x20) + 10;
  }
  *(double **)PTR_DAT_004b401c = pdVar5;
  *(double **)PTR_DAT_004b4020 = pdVar2;
  if (*(int *)PTR_DAT_004b3f7c != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r2_07;
    unaff_r8[1] = *(int *)PTR_DAT_004b4024;
    iVar3 = extraout_r2_07;
  }
  *(int *)PTR_DAT_004b4024 = iVar3;
                    /* WARNING: Could not recover jumptable at 0x004b3f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.NewMCUADCSource @ 004b4028 (size 384) */

void k3c_internal_pkg_heater_NewMCUADCSource(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  undefined1 uVar5;
  undefined8 uVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_004b41ac;
      FUN_00022cf8();
      uVar2 = **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar2;
      *(undefined **)((int)register0x00000054 + -0x28) =
           PTR_s_pinsM106tcp_initbusy1a86baud_to_M_00820821_0x231_004b41b0;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 4;
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_004b41b4;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_004b41b8;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_004b41bc;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 10;
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_004b41b4;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_004b41b8;
      *(undefined1 *)((int)register0x00000054 + -0x18) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Get();
      uVar6 = CONCAT44(PTR_DAT_004b41c0,*(undefined **)((int)register0x00000054 + -0x14));
      uVar5 = 0;
      if (*(undefined **)((int)register0x00000054 + -0x14) == PTR_DAT_004b41c0) {
        uVar6 = CONCAT44(PTR_DAT_004b41c4,*(undefined **)((int)register0x00000054 + -0xc));
        uVar5 = 0;
        if (*(undefined **)((int)register0x00000054 + -0xc) == PTR_DAT_004b41c4) {
          uVar3 = **(undefined4 **)((int)register0x00000054 + -0x10);
          uVar2 = (*(undefined4 **)((int)register0x00000054 + -0x10))[1];
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -4);
          *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_004b41c8;
          *(undefined4 *)((int)register0x00000054 + -0x24) = 3;
          *(undefined4 *)((int)register0x00000054 + -0x20) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar2;
          k3c_internal_pkg_pins___PrinterPins__Setup_pin();
          uVar5 = *(undefined **)((int)register0x00000054 + -0x18) == PTR_DAT_004b41cc;
          if ((bool)uVar5) {
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x14);
            if (*(int *)PTR_DAT_004b41d0 == 0) {
              puVar1 = *(undefined4 **)((int)register0x00000054 + -8);
            }
            else {
              FUN_0009db64();
              *unaff_r8 = extraout_r1;
              puVar1 = *(undefined4 **)((int)register0x00000054 + -8);
              unaff_r8[1] = *puVar1;
              uVar2 = extraout_r1;
            }
            *puVar1 = uVar2;
            *(undefined4 **)((int)register0x00000054 + 8) = puVar1;
            return;
          }
          *(undefined **)((int)register0x00000054 + -0x2c) =
               *(undefined **)((int)register0x00000054 + -0x18);
          *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_004b41cc;
          *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_004b41d4;
          uVar6 = FUN_000209b4();
        }
        *(undefined8 *)((int)register0x00000054 + -0x2c) = uVar6;
        *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_004b41d4;
        uVar6 = FUN_000209b4();
      }
      *(undefined8 *)((int)register0x00000054 + -0x2c) = uVar6;
      *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_004b41d4;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if ((bool)uVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x4b41a4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*MCUADCSource).Setup_callback @ 004b41d8 (size 96) */

void k3c_internal_pkg_heater___MCUADCSource__Setup_callback(void)

{
  int iVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  int *in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  iVar1 = *in_stack_00000004;
  *(undefined8 *)(iVar1 + 0x54) = in_stack_00000008;
  if (*DAT_004b423c != 0) {
    iVar1 = FUN_0009db64();
    *unaff_r8 = in_stack_00000010;
    unaff_r8[1] = *(undefined4 *)(iVar1 + 0x48);
  }
  *(undefined4 *)(iVar1 + 0x48) = in_stack_00000010;
  return;
}



/* k3c/internal/pkg/heater.(*MCUADCSource).Setup_minmax @ 004b4240 (size 52) */

void k3c_internal_pkg_heater___MCUADCSource__Setup_minmax(void)

{
  int iVar1;
  int *in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined8 in_stack_00000014;
  undefined8 in_stack_0000001c;
  undefined4 in_stack_00000024;
  
  iVar1 = *in_stack_00000004;
  *(undefined8 *)(iVar1 + 0x4c) = in_stack_00000008;
  *(undefined4 *)(iVar1 + 0x3c) = in_stack_00000010;
  *(undefined8 *)(iVar1 + 0x14) = in_stack_00000014;
  *(undefined8 *)(iVar1 + 0x1c) = in_stack_0000001c;
  *(undefined4 *)(iVar1 + 0x40) = in_stack_00000024;
  return;
}



/* k3c/internal/pkg/heater.(*MCUADCSource).Get_name @ 004b4274 (size 20) */

void k3c_internal_pkg_heater___MCUADCSource__Get_name(void)

{
  return;
}



/* k3c/internal/pkg/heater.(*MCUADCSource).Get_last_value @ 004b4290 (size 80) */

void k3c_internal_pkg_heater___MCUADCSource__Get_last_value(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 unaff_lr;
  int *in_stack_00000004;
  undefined1 auStack_10 [16];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4b42dc;
    FUN_0009bf64();
  }
  uVar1 = FUN_0009df04(0,&stack0x00000008);
  uVar1 = FUN_0009e2f8(uVar1,*in_stack_00000004 + 0x24,auStack_10,*in_stack_00000004,unaff_lr);
  FUN_0009e2f8(uVar1,auStack_10,&stack0x00000008);
  return;
}



/* k3c/internal/pkg/heater.(*MCUADCSource).Stop @ 004b42e0 (size 4) */

void k3c_internal_pkg_heater___MCUADCSource__Stop(void)

{
  return;
}



/* k3c/internal/pkg/heater.NewFileADCSource @ 004b42f0 (size 756) */

void k3c_internal_pkg_heater_NewFileADCSource(undefined4 param_1)

{
  int iVar1;
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 *puVar2;
  undefined4 *extraout_r2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 *extraout_r3_00;
  undefined4 uVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  bool bVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x6c);
      *(undefined4 *)((int)register0x00000054 + -0x6c) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_004b45e8;
      FUN_00022cf8();
      iVar1 = *(int *)((int)register0x00000054 + -100);
      puVar2 = *(undefined4 **)((int)register0x00000054 + 4);
      uVar3 = *puVar2;
      if (*(int *)PTR_DAT_004b45ec != 0) {
        FUN_0009db54();
        *unaff_r8 = extraout_r3;
        iVar1 = extraout_r1;
        puVar2 = extraout_r2;
        uVar3 = extraout_r3;
      }
      *(int *)((int)register0x00000054 + -0x24) = iVar1;
      *(undefined4 *)(iVar1 + 8) = uVar3;
      *(undefined4 **)((int)register0x00000054 + -0x68) = puVar2;
      *(undefined **)((int)register0x00000054 + -100) =
           PTR_s_sensor_iio_pathduplicate_valuepu_008262d0_0x2ecb_004b45f0;
      *(undefined4 *)((int)register0x00000054 + -0x60) = 0xf;
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_004b45f4;
      *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_004b45f8;
      *(undefined1 *)((int)register0x00000054 + -0x54) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Get();
      bVar6 = *(undefined **)((int)register0x00000054 + -0x50) == PTR_DAT_004b45fc;
      if (bVar6) {
        uVar3 = **(undefined4 **)((int)register0x00000054 + -0x4c);
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x24);
        puVar2[1] = (*(undefined4 **)((int)register0x00000054 + -0x4c))[1];
        if (*(int *)PTR_DAT_004b45ec != 0) {
          uVar3 = FUN_0009db64();
          *unaff_r8 = uVar3;
          unaff_r8[1] = *extraout_r3_00;
          puVar2 = extraout_r3_00;
        }
        *puVar2 = uVar3;
        puVar2[10] = 4;
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -100) =
             PTR_s_adc_max_valuefile_path___stemper_008262d0_0x12c5_004b4600;
        *(undefined4 *)((int)register0x00000054 + -0x60) = 0xd;
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_004b4604;
        *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_004b4608;
        *(undefined8 *)((int)register0x00000054 + -0x54) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x4c) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x44) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x3c) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x34) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x24);
        *(undefined8 *)(puVar2 + 0xb) = *(undefined8 *)((int)register0x00000054 + -0x30);
        uVar3 = puVar2[1];
        *(undefined4 *)((int)register0x00000054 + -0x68) = *puVar2;
        *(undefined4 *)((int)register0x00000054 + -100) = uVar3;
        FUN_00132cc8();
        uVar3 = *(undefined4 *)PTR_DAT_004b460c;
        uVar4 = *(undefined4 *)PTR_DAT_004b4610;
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined4 *)((int)register0x00000054 + -0x60) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar4;
        FUN_0012ae4c();
        if (*(char *)((int)register0x00000054 + -0x58) != '\0') {
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          uVar3 = (*(undefined4 **)((int)register0x00000054 + -0x24))[1];
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               **(undefined4 **)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -100) = uVar3;
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_004b45fc;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_004b4614;
          *(undefined4 *)((int)register0x00000054 + -100) = 0x20;
          *(undefined1 **)((int)register0x00000054 + -0x60) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
          k3c_internal_pkg_logger_Errorf();
        }
        uVar3 = (*(undefined4 **)((int)register0x00000054 + -0x24))[1];
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             **(undefined4 **)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -100) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x60) = 0x80000;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
        FUN_0012dc78();
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x58);
        if (*(int *)((int)register0x00000054 + -0x54) != 0) {
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          *(int *)((int)register0x00000054 + -0x28) = *(int *)((int)register0x00000054 + -0x54);
          *(undefined4 *)((int)register0x00000054 + -0x20) = uVar3;
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x18));
          uVar3 = (*(undefined4 **)((int)register0x00000054 + -0x24))[1];
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               **(undefined4 **)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -100) = uVar3;
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_004b45fc;
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          if (*(int *)((int)register0x00000054 + -0x28) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + 4);
          }
          *(undefined4 *)((int)register0x00000054 + -0x10) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_004b4618;
          *(undefined4 *)((int)register0x00000054 + -100) = 0x1e;
          *(undefined1 **)((int)register0x00000054 + -0x60) =
               (undefined1 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x5c) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x58) = 2;
          k3c_internal_pkg_logger_Errorf();
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x20);
        }
        if (*(int *)PTR_DAT_004b45ec == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -0x24);
        }
        else {
          FUN_0009db64();
          *unaff_r8 = extraout_r1_00;
          iVar1 = *(int *)((int)register0x00000054 + -0x24);
          unaff_r8[1] = *(undefined4 *)(iVar1 + 0x4c);
          uVar3 = extraout_r1_00;
        }
        *(undefined4 *)(iVar1 + 0x4c) = uVar3;
        *(int *)((int)register0x00000054 + 8) = iVar1;
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x68) =
           *(undefined **)((int)register0x00000054 + -0x50);
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_004b45fc;
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_004b461c;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x6c);
      if (bVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x4b45e0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*FileADCSource).Setup_callback @ 004b4620 (size 380) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___FileADCSource__Setup_callback(void)

{
  int iVar1;
  int extraout_r1;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  int in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  iVar1 = in_stack_00000004;
  if (*(int *)PTR_DAT_004b47a0 != 0) {
    iVar1 = FUN_0009db64();
    *unaff_r8 = in_stack_00000010;
    unaff_r8[1] = *(int *)(iVar1 + 0x10);
  }
  *(int *)(iVar1 + 0x10) = in_stack_00000010;
  *(undefined8 *)(iVar1 + 0x44) = in_stack_00000008;
  FUN_0008f77c();
  k3c_internal_pkg_logger_Debugf();
  k3c_internal_pkg_chelper__Cfunc_get_monotonic(in_stack_00000004);
  FUN_00022cf8();
  iVar1 = 0xd;
  _DAT_0000000d = PTR_k3c_internal_pkg_heater___FileADCSource__read_and_callback_fm_004b47b0;
  if (*(int *)PTR_DAT_004b47a0 != 0) {
    iVar1 = FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
  }
  *(int *)(iVar1 + 4) = in_stack_00000004;
  k3c_internal_pkg_reactor___Reactor__Register_timer();
  iVar1 = 1;
  if (*(int *)PTR_DAT_004b47a0 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *(int *)(in_stack_00000004 + 0xc);
    iVar1 = extraout_r1;
  }
  *(int *)(in_stack_00000004 + 0xc) = iVar1;
  return;
}



/* k3c/internal/pkg/heater.(*FileADCSource).read_and_callback @ 004b47b4 (size 1320) */

/* WARNING: Removing unreachable block (ram,0x004b4c3c) */
/* WARNING: Removing unreachable block (ram,0x004b4c88) */
/* WARNING: Removing unreachable block (ram,0x004b4c80) */
/* WARNING: Removing unreachable block (ram,0x004b4c8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___FileADCSource__read_and_callback(void)

{
  int iVar1;
  int unaff_r10;
  double dVar2;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  int *piStack_8c;
  int local_88;
  int local_84;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  while (&local_20 <= *(undefined4 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0012d85c();
  if (local_84 != 0) {
    FUN_0009df04(0,&local_10);
    FUN_0008f77c();
    local_10 = DAT_004b4ce0;
    local_c = 0;
    if (local_84 == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(undefined4 *)(local_84 + 4);
    }
    k3c_internal_pkg_logger_Errorf();
    return;
  }
  FUN_000ae540();
  if (local_88 != 0) {
    FUN_0009df04(0,&local_10);
    FUN_0008f77c();
    local_10 = DAT_004b4ce0;
    local_c = 0;
    if (local_88 == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(undefined4 *)(local_88 + 4);
    }
    k3c_internal_pkg_logger_Errorf();
    return;
  }
  FUN_00099104();
  FUN_00151ce4();
  FUN_000b5538();
  dVar2 = (double)(ZEXT48(piStack_8c) << 0x20) / *(double *)(in_stack_00000004 + 0x2c);
  if (0.0 <= dVar2) {
    if (1.0 < dVar2) {
      dVar2 = 1.0;
    }
  }
  else {
    dVar2 = 0.0;
  }
  if ((*(double *)(in_stack_00000004 + 0x14) != 0.0) ||
     (*(double *)(in_stack_00000004 + 0x1c) != 0.0)) {
    if ((dVar2 < *(double *)(in_stack_00000004 + 0x14)) ||
       (*(double *)(in_stack_00000004 + 0x1c) < dVar2)) {
      iVar1 = *(int *)(in_stack_00000004 + 0x24) + 1;
      *(int *)(in_stack_00000004 + 0x24) = iVar1;
      if (*(int *)(in_stack_00000004 + 0x28) <= iVar1) {
        FUN_0009def4(0,&local_30);
        FUN_0008f6c0();
        local_30 = DAT_004b4cf4;
        local_2c = 0x40;
        FUN_0008f6c0();
        local_28 = DAT_004b4cf4;
        local_24 = 0x40;
        FUN_0008f6c0();
        local_20 = DAT_004b4cf4;
        local_1c = 0x40;
        FUN_0008f6c0();
        local_18 = DAT_004b4cf4;
        local_14 = 0x40;
        k3c_internal_pkg_logger_Errorf();
        return;
      }
    }
    else {
      *(undefined4 *)(in_stack_00000004 + 0x24) = 0;
    }
  }
  *(double *)(in_stack_00000004 + 0x34) = dVar2;
  *(undefined8 *)(in_stack_00000004 + 0x3c) = in_stack_00000008;
  k3c_internal_pkg_mcu_MustLookupMCU();
  FUN_00025f60();
  if (*piStack_8c == 0) {
    (**(code **)(_SUB_0000000c + 0x28))();
  }
  (*(code *)**(undefined4 **)(in_stack_00000004 + 0x10))();
  return;
}



/* k3c/internal/pkg/heater.(*FileADCSource).Setup_minmax @ 004b4d10 (size 32) */

void k3c_internal_pkg_heater___FileADCSource__Setup_minmax(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined8 in_stack_00000014;
  undefined8 in_stack_0000001c;
  undefined4 in_stack_00000024;
  
  *(undefined8 *)(in_stack_00000004 + 0x14) = in_stack_00000014;
  *(undefined8 *)(in_stack_00000004 + 0x1c) = in_stack_0000001c;
  *(undefined4 *)(in_stack_00000004 + 0x28) = in_stack_00000024;
                    /* WARNING: Could not recover jumptable at 0x004b4d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*FileADCSource).Get_name @ 004b4d30 (size 20) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___FileADCSource__Get_name(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = _UNK_004b4d48;
  uStack0000000c = 8;
                    /* WARNING: Could not recover jumptable at 0x004b4d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*FileADCSource).Get_last_value @ 004b4d4c (size 64) */

void k3c_internal_pkg_heater___FileADCSource__Get_last_value(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4b4d88;
    FUN_0009bf64();
  }
  FUN_0009df04(0,&stack0x00000008);
  in_stack_00000008 = *(undefined8 *)(in_stack_00000004 + 0x34);
  in_stack_00000010 = *(undefined8 *)(in_stack_00000004 + 0x3c);
                    /* WARNING: Could not recover jumptable at 0x004b4d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*FileADCSource).Stop @ 004b4d8c (size 376) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___FileADCSource__Stop(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int extraout_r2;
  int iVar6;
  int iVar7;
  int extraout_r3;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar11;
  int in_stack_00000004;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4b4f00;
    FUN_0009bf64();
  }
  puVar2 = *(undefined4 **)(in_stack_00000004 + 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = *(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + 0xc) + 0x2c);
    *(undefined8 *)(puVar2 + 1) = *_UNK_004b4f08;
    uVar4 = piVar1[1];
    FUN_000986b8();
    iVar5 = *piVar1;
    iVar7 = piVar1[1];
    uVar10 = 0;
    piVar3 = piVar1;
    iVar6 = iVar5;
    iVar8 = iVar7;
    for (iVar9 = 0; uVar11 = CONCAT44(piVar3,uStack_34), iVar9 < iVar8; iVar9 = iVar9 + 1) {
      unaff_r8 = *(undefined4 **)(iVar6 + iVar9 * 4);
      if (unaff_r8 != puVar2) {
        uVar10 = uVar10 + 1;
        if (uVar4 < uVar10) {
          FUN_000987f4();
          uStack_34 = uStack_2c;
          piVar3 = piVar1;
          iVar6 = iVar5;
          iVar8 = iVar7;
          uVar4 = uStack_24;
          uVar10 = uStack_28;
        }
        uVar11 = CONCAT44(piVar3,uStack_34);
        if (*_UNK_004b4f10 != 0) {
          uVar11 = FUN_0009db64();
          *unaff_r8 = unaff_r8;
          unaff_r8[1] = *(undefined4 *)((int)uVar11 + (uVar10 - 1) * 4);
          iVar6 = extraout_r2;
          iVar8 = extraout_r3;
        }
        *(undefined4 **)((int)uVar11 + (uVar10 - 1) * 4) = unaff_r8;
      }
      piVar3 = (int *)((ulonglong)uVar11 >> 0x20);
      uStack_34 = (undefined4)uVar11;
    }
    piVar3[1] = uVar10;
    piVar3[2] = uVar4;
    if (*_UNK_004b4f10 != 0) {
      uVar11 = FUN_0009db64();
      *unaff_r8 = (int)uVar11;
      unaff_r8[1] = *(undefined4 *)((ulonglong)uVar11 >> 0x20);
    }
    *(undefined4 *)((ulonglong)uVar11 >> 0x20) = (int)uVar11;
  }
                    /* WARNING: Could not recover jumptable at 0x004b4e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.NewPrinterADCtoTemperature @ 004b4f14 (size 820) */

void k3c_internal_pkg_heater_NewPrinterADCtoTemperature(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r1;
  int extraout_r2;
  int extraout_r2_00;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  undefined8 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x60) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_004b524c;
      FUN_00022cf8();
      uVar9 = *(int *)((int)register0x00000054 + 8) == 0;
      if (!(bool)uVar9) {
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_004b5250;
        *(int *)((int)register0x00000054 + -0x58) = *(int *)((int)register0x00000054 + 8);
        FUN_00020dac();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x10);
        *puVar3 = *(undefined4 *)((int)register0x00000054 + -0x54);
        if (*(int *)PTR_DAT_004b5254 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + 0xc);
        }
        else {
          FUN_0009db64();
          iVar1 = *(int *)((int)register0x00000054 + 0xc);
          *unaff_r8 = iVar1;
          unaff_r8[1] = extraout_r1[1];
          puVar3 = extraout_r1;
        }
        puVar3[1] = iVar1;
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x58) =
             PTR_s_sensor_iio_pathduplicate_valuepu_008262d0_0x2ecb_004b5258;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 0xf;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x48) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Get();
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_004b525c;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 0xb;
        *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_004b5260;
        *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004b5264;
        *(undefined8 *)((int)register0x00000054 + -0x48) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x40) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x38) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x30) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x28) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        *(undefined8 *)(*(int *)((int)register0x00000054 + -0x10) + 0x14) =
             *(undefined8 *)((int)register0x00000054 + -0x24);
        if (*(int *)((int)register0x00000054 + -0x18) == 0) {
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + 4);
          k3c_internal_pkg_heater_NewMCUADCSource();
          iVar2 = *(int *)((int)register0x00000054 + -0x58);
          iVar1 = *(int *)((int)register0x00000054 + -0x10);
          *(undefined **)(iVar1 + 8) = PTR_DAT_004b526c;
          if (*(int *)PTR_DAT_004b5254 != 0) {
            iVar2 = FUN_0009db64();
            *unaff_r8 = iVar2;
            unaff_r8[1] = *(int *)(extraout_r2_00 + 0xc);
            iVar1 = extraout_r2_00;
          }
          *(int *)(iVar1 + 0xc) = iVar2;
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + 4);
          k3c_internal_pkg_heater_NewFileADCSource();
          iVar2 = *(int *)((int)register0x00000054 + -0x58);
          iVar1 = *(int *)((int)register0x00000054 + -0x10);
          *(undefined **)(iVar1 + 8) = PTR_DAT_004b5268;
          if (*(int *)PTR_DAT_004b5254 != 0) {
            iVar2 = FUN_0009db64();
            *unaff_r8 = iVar2;
            unaff_r8[1] = *(int *)(extraout_r2 + 0xc);
            iVar1 = extraout_r2;
          }
          *(int *)(iVar1 + 0xc) = iVar2;
        }
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 **)((int)register0x00000054 + -0x58) =
             *(undefined4 **)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x54) =
             PTR_s_query_adctimelapsek3c_exit_Time__00823504_0xb9_004b5270;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 9;
        *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004b5274;
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_004b5278;
        k3c_internal_pkg_printer___Printer__Load_object();
        iVar1 = *(int *)((int)register0x00000054 + -0x40);
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        uVar9 = *(undefined **)((int)register0x00000054 + -0x44) == PTR_DAT_004b527c;
        if ((bool)uVar9) {
          iVar2 = *(int *)(*(int *)((int)register0x00000054 + -0x10) + 8);
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -0x10) + 0xc);
          uVar7 = 0;
          if (iVar2 != 0) {
            *(int *)((int)register0x00000054 + -0xc) = iVar1;
            *(undefined4 *)((int)register0x00000054 + -0x14) = uVar6;
            *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar4;
            uVar4 = *(undefined4 *)(iVar2 + 4);
            *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_004b5280;
            *(undefined4 *)((int)register0x00000054 + -0x58) = uVar4;
            FUN_00020dac();
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x54);
            iVar1 = *(int *)((int)register0x00000054 + -0xc);
            uVar4 = *(undefined4 *)((int)register0x00000054 + -0x1c);
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x14);
          }
          *(undefined4 *)((int)register0x00000054 + -4) = uVar7;
          uVar7 = *(undefined4 *)(iVar1 + 4);
          *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_004b5284;
          *(undefined4 *)((int)register0x00000054 + -0x58) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x54) = uVar6;
          *(undefined4 *)((int)register0x00000054 + -0x50) = uVar4;
          FUN_00093a08();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x4c);
          *puVar3 = *(undefined4 *)((int)register0x00000054 + -4);
          if (*(int *)PTR_DAT_004b5254 == 0) {
            iVar1 = *(int *)((int)register0x00000054 + -8);
          }
          else {
            puVar3 = (undefined4 *)FUN_0009db64();
            iVar1 = *(int *)((int)register0x00000054 + -8);
            *unaff_r8 = iVar1;
            unaff_r8[1] = puVar3[1];
          }
          puVar3[1] = iVar1;
          *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_004b5288;
          FUN_00022cf8();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x58);
          *puVar3 = PTR_k3c_internal_pkg_heater___PrinterADCtoTemperature__Adc_callback_fm_004b528c;
          if (*(int *)PTR_DAT_004b5254 == 0) {
            iVar1 = *(int *)((int)register0x00000054 + -0x10);
          }
          else {
            puVar3 = (undefined4 *)FUN_0009db54();
            iVar1 = *(int *)((int)register0x00000054 + -0x10);
            *unaff_r8 = iVar1;
          }
          puVar3[1] = iVar1;
          pcVar5 = *(code **)(*(int *)(iVar1 + 8) + 0x14);
          uVar10 = *(undefined8 *)(iVar1 + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0x5c) = *(undefined4 *)(iVar1 + 0xc);
          *(undefined8 *)((int)register0x00000054 + -0x58) = uVar10;
          *(undefined4 **)((int)register0x00000054 + -0x50) = puVar3;
          (*pcVar5)();
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          return;
        }
        *(undefined **)((int)register0x00000054 + -0x5c) =
             *(undefined **)((int)register0x00000054 + -0x44);
        *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_004b527c;
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_004b5290;
        FUN_000209b4();
      }
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_004b5294;
      param_1 = FUN_00020b18();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x60);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x4b5244;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*PrinterADCtoTemperature).Setup_callback @ 004b5298 (size 88) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___PrinterADCtoTemperature__Setup_callback(void)

{
  int iVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4b52ec;
    FUN_0009bf64();
  }
  iVar1 = in_stack_00000004;
  if (*_UNK_004b52f4 != 0) {
    iVar1 = FUN_0009db64();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = *(undefined4 *)(iVar1 + 0x10);
  }
  *(undefined4 *)(iVar1 + 0x10) = in_stack_00000008;
                    /* WARNING: Could not recover jumptable at 0x004b52e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterADCtoTemperature).Get_report_time_delta @ 004b52f8 (size 16) */

void k3c_internal_pkg_heater___PrinterADCtoTemperature__Get_report_time_delta(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined8 uStack00000008;
  
  uStack00000008 = *(undefined8 *)(in_stack_00000004 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x004b5304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterADCtoTemperature).Adc_callback @ 004b5308 (size 108) */

void k3c_internal_pkg_heater___PrinterADCtoTemperature__Adc_callback(void)

{
  int unaff_r10;
  int *in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  (**(code **)(*in_stack_00000004 + 0x10))();
  (**(code **)in_stack_00000004[4])();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterADCtoTemperature).Setup_minmax @ 004b537c (size 232) */

void k3c_internal_pkg_heater___PrinterADCtoTemperature__Setup_minmax(void)

{
  undefined4 uVar1;
  int unaff_r10;
  int *in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  (**(code **)(*in_stack_00000004 + 0xc))();
  uVar1 = (**(code **)(*in_stack_00000004 + 0xc))();
  uVar1 = FUN_000afda8(uVar1);
  FUN_000afca0(uVar1);
  (**(code **)(in_stack_00000004[2] + 0x18))();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterADCtoTemperature).Stop @ 004b546c (size 56) */

void k3c_internal_pkg_heater___PrinterADCtoTemperature__Stop(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4b54a0;
    FUN_0009bf64();
  }
  (**(code **)(*(int *)(in_stack_00000004 + 8) + 0x1c))();
                    /* WARNING: Could not recover jumptable at 0x004b5494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.NewLinearInterpolate @ 004b54a4 (size 1828) */

void k3c_internal_pkg_heater_NewLinearInterpolate(undefined4 param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  double *pdVar5;
  uint uVar6;
  int extraout_r1;
  int extraout_r1_00;
  undefined *extraout_r1_01;
  undefined4 uVar7;
  int extraout_r1_02;
  int *piVar8;
  uint extraout_r2;
  uint extraout_r2_00;
  int extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  int extraout_r2_04;
  int *extraout_r2_05;
  int *extraout_r2_06;
  undefined *puVar9;
  int *extraout_r3;
  int extraout_r3_00;
  int *extraout_r3_01;
  int *extraout_r3_02;
  int extraout_r3_03;
  undefined *extraout_r3_04;
  int iVar10;
  undefined *extraout_r3_05;
  undefined *extraout_r3_06;
  undefined4 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  double *pdVar14;
  int *unaff_r6;
  undefined4 uVar15;
  double *pdVar16;
  double *unaff_r8;
  uint uVar17;
  int iVar18;
  int unaff_r10;
  int iVar19;
  undefined1 *puVar20;
  undefined4 unaff_lr;
  undefined1 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  
  while( true ) {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x10)) break;
LAB_004b5bbc:
    unaff_lr = 0x4b5bc4;
    param_1 = FUN_0009bf64(param_1);
  }
  puVar20 = (undefined1 *)((int)register0x00000054 + -0x90);
  *(undefined4 *)((int)register0x00000054 + -0x90) = unaff_lr;
  *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_004b5bcc;
  FUN_00022cf8();
  piVar1 = *(int **)((int)register0x00000054 + -0x88);
  *(int **)((int)register0x00000054 + -0x1c) = piVar1;
  *piVar1 = (int)PTR_DAT_004b5bd0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[3] = (int)PTR_DAT_004b5bd0;
  piVar8 = *(int **)((int)register0x00000054 + 4);
  puVar9 = *(undefined **)((int)register0x00000054 + 8);
  for (iVar4 = 0; iVar4 < (int)(puVar9 + -1); iVar4 = iVar4 + 1) {
    *(int *)((int)register0x00000054 + -0x50) = iVar4;
    puVar12 = (undefined *)0x0;
    while( true ) {
      if ((int)(puVar9 + (-1 - iVar4)) <= (int)puVar12) break;
      uVar21 = puVar9 == puVar12;
      puVar13 = puVar12;
      if (puVar9 <= puVar12) {
LAB_004b5bac:
        param_1 = FUN_0009dbd4(puVar13,puVar9);
        register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x90);
        if ((bool)uVar21) {
          register0x00000054 = (BADSPACEBASE *)puVar20;
        }
        goto LAB_004b5bbc;
      }
      unaff_r6 = piVar8 + (int)puVar12 * 3;
      iVar4 = unaff_r6[1];
      unaff_r8 = (double *)piVar8[(int)puVar12 * 3];
      iVar18 = unaff_r6[2];
      uVar21 = 1;
      if (iVar4 == 0) {
LAB_004b5ba0:
        FUN_0009dbd4(0,0);
        puVar9 = extraout_r3_06;
        goto LAB_004b5bac;
      }
      puVar13 = puVar12 + 1;
      uVar21 = puVar9 == puVar13;
      if (puVar9 <= puVar13) {
LAB_004b5b94:
        FUN_0009dbd4(puVar13,puVar9);
        goto LAB_004b5ba0;
      }
      iVar19 = (int)puVar12 * 0xc + 0xc;
      piVar1 = piVar8 + (int)puVar12 * 3 + 3;
      uVar26 = CONCAT44((double *)piVar8[(int)puVar12 * 3 + 3],unaff_r8);
      uVar21 = piVar1[1] == 0;
      if ((bool)uVar21) {
        FUN_0009dbd4(0,0);
        puVar9 = extraout_r3_05;
        goto LAB_004b5b94;
      }
      if (*unaff_r8 < *(double *)piVar8[(int)puVar12 * 3 + 3]) {
        iVar10 = piVar1[2];
        unaff_r6[1] = piVar1[1];
        unaff_r6[2] = iVar10;
        if (*(int *)PTR_DAT_004b5bd8 != 0) {
          *(int **)((int)register0x00000054 + -0x18) = piVar1;
          *(int *)((int)register0x00000054 + -0x40) = iVar19;
          uVar26 = FUN_0009db84(unaff_r8);
          *(int *)unaff_r8 = (int)((ulonglong)uVar26 >> 0x20);
          *(int *)((int)unaff_r8 + 4) = extraout_r2_06[(int)puVar12 * 3];
          *(int *)(unaff_r8 + 1) = (int)uVar26;
          iVar19 = *(int *)((int)register0x00000054 + -0x40);
          unaff_r6 = *(int **)((int)extraout_r2_06 + iVar19);
          *(int **)((int)unaff_r8 + 0xc) = unaff_r6;
          piVar1 = *(int **)((int)register0x00000054 + -0x18);
          piVar8 = extraout_r2_06;
        }
        unaff_r8 = (double *)uVar26;
        piVar8[(int)puVar12 * 3] = (int)((ulonglong)uVar26 >> 0x20);
        piVar1[1] = iVar4;
        piVar1[2] = iVar18;
        *(double **)((int)piVar8 + iVar19) = unaff_r8;
        puVar9 = *(undefined **)((int)register0x00000054 + 8);
      }
LAB_004b5aa4:
      iVar4 = *(int *)((int)register0x00000054 + -0x50);
      piVar1 = *(int **)((int)register0x00000054 + -0x1c);
      puVar12 = puVar13;
    }
  }
  pdVar5 = (double *)0x0;
  puVar13 = (undefined *)0x0;
  pdVar14 = (double *)0x0;
  while( true ) {
    if ((int)puVar9 < 1) break;
    unaff_r6 = (int *)piVar8[1];
    if (unaff_r6 < (int *)0x2) goto LAB_004b5a98;
    *(undefined **)((int)register0x00000054 + -0x40) = puVar9;
    *(int **)((int)register0x00000054 + -4) = piVar8;
    dVar22 = ((double *)*piVar8)[1];
    dVar23 = *(double *)*piVar8;
    if (puVar13 == (undefined *)0x0) {
      *(double *)((int)register0x00000054 + -0x68) = dVar23;
      *(double *)((int)register0x00000054 + -0x24) = dVar22;
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x88) =
           *(undefined4 *)((int)register0x00000054 + -0x20);
      FUN_0008f6c0();
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -0x84);
      *(undefined8 *)((int)register0x00000054 + -0x2c) =
           *(undefined8 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           *(undefined4 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x88) =
           *(undefined4 *)((int)register0x00000054 + -0x28);
      FUN_0008f6c0();
      pdVar5 = *(double **)((int)register0x00000054 + -0x84);
      piVar1 = *(int **)((int)register0x00000054 + -0x1c);
      piVar8 = *(int **)((int)register0x00000054 + -4);
      puVar9 = *(undefined **)((int)register0x00000054 + -0x40);
      pdVar14 = *(double **)((int)register0x00000054 + -8);
      puVar13 = PTR_DAT_004b5bd4;
    }
    else {
      unaff_r6 = (int *)PTR_DAT_004b5bd4;
      if (puVar13 != PTR_DAT_004b5bd4) goto LAB_004b5a84;
      dVar24 = *pdVar14;
      if (dVar22 <= dVar24) {
        *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_004b5be4;
        FUN_00022cf8();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x88);
        puVar3[1] = 0xf;
        *puVar3 = PTR_s_duplicate_valuepullup_resistorin_008262d0_0x2eda_004b5be8;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined **)((int)register0x00000054 + 0x14) = PTR_DAT_004b5bec;
        *(undefined4 **)((int)register0x00000054 + 0x18) = puVar3;
        return;
      }
      if (puVar13 != PTR_DAT_004b5bd4) goto LAB_004b5a70;
      *(double *)((int)register0x00000054 + -0x58) = dVar22;
      dVar25 = *pdVar5;
      dVar22 = (dVar23 - dVar25) / (dVar22 - dVar24);
      *(double *)((int)register0x00000054 + -0x4c) = dVar22;
      iVar4 = piVar1[4];
      dVar25 = dVar25 - dVar24 * dVar22;
      *(double *)((int)register0x00000054 + -0x60) = dVar25;
      if (iVar4 != 0) {
        unaff_r8 = (double *)piVar1[3];
        iVar4 = iVar4 * 0xc;
        uVar17 = *(uint *)((int)unaff_r8 + iVar4 + -8);
        pdVar16 = *(double **)((int)unaff_r8 + iVar4 + -0xc);
        if (uVar17 == 0) goto LAB_004b5a64;
        if (dVar22 == *pdVar16) {
          if (uVar17 < 2) goto LAB_004b5a58;
          if (dVar25 == pdVar16[1]) goto LAB_004b5520;
        }
      }
      *(double *)((int)register0x00000054 + -0x34) = dVar23;
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x88) =
           *(undefined4 *)((int)register0x00000054 + -0x30);
      FUN_0008f6c0();
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -0x84);
      *(undefined8 *)((int)register0x00000054 + -0x3c) =
           *(undefined8 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x88) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      FUN_0008f6c0();
      piVar8 = *(int **)((int)register0x00000054 + -0x1c);
      uVar6 = piVar8[2];
      uVar17 = piVar8[1] + 1;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x84);
      iVar4 = *piVar8;
      if (uVar6 < uVar17) {
        *(int *)((int)register0x00000054 + -0x8c) = iVar4;
        *(uint *)((int)register0x00000054 + -0x88) = uVar17;
        *(uint *)((int)register0x00000054 + -0x84) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
        *(undefined **)((int)register0x00000054 + -0x7c) = PTR_DAT_004b5bd4;
        FUN_000987f4();
        iVar4 = *(int *)((int)register0x00000054 + -0x78);
        uVar17 = *(uint *)((int)register0x00000054 + -0x74);
        piVar8 = *(int **)((int)register0x00000054 + -0x1c);
        piVar8[2] = *(int *)((int)register0x00000054 + -0x70);
        if (*(int *)PTR_DAT_004b5bd8 != 0) {
          FUN_0009db64();
          *(int *)unaff_r8 = extraout_r1;
          *(int *)((int)unaff_r8 + 4) = *extraout_r3;
          iVar4 = extraout_r1;
          uVar17 = extraout_r2;
          piVar8 = extraout_r3;
        }
        *piVar8 = iVar4;
      }
      piVar8[1] = uVar17;
      *(undefined8 *)(iVar4 + (uVar17 - 1) * 8) = *(undefined8 *)((int)register0x00000054 + -0x58);
      *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_004b5bdc;
      FUN_00022cf8();
      puVar2 = *(undefined8 **)((int)register0x00000054 + -0x88);
      *puVar2 = *(undefined8 *)((int)register0x00000054 + -0x4c);
      puVar2[1] = *(undefined8 *)((int)register0x00000054 + -0x60);
      iVar18 = *(int *)((int)register0x00000054 + -0x1c);
      uVar6 = *(uint *)(iVar18 + 0x14);
      uVar17 = *(int *)(iVar18 + 0x10) + 1;
      iVar4 = *(int *)(iVar18 + 0xc);
      if (uVar6 < uVar17) {
        *(undefined8 **)((int)register0x00000054 + -0x10) = puVar2;
        *(int *)((int)register0x00000054 + -0x8c) = iVar4;
        *(uint *)((int)register0x00000054 + -0x88) = uVar17;
        *(uint *)((int)register0x00000054 + -0x84) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
        *(undefined **)((int)register0x00000054 + -0x7c) = PTR_DAT_004b5be0;
        FUN_000987f4();
        iVar4 = *(int *)((int)register0x00000054 + -0x78);
        uVar17 = *(uint *)((int)register0x00000054 + -0x74);
        iVar18 = *(int *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)(iVar18 + 0x14) = *(undefined4 *)((int)register0x00000054 + -0x70);
        if (*(int *)PTR_DAT_004b5bd8 != 0) {
          FUN_0009db64();
          *(int *)unaff_r8 = extraout_r1_00;
          *(int *)((int)unaff_r8 + 4) = *(int *)(extraout_r3_00 + 0xc);
          iVar4 = extraout_r1_00;
          uVar17 = extraout_r2_00;
          iVar18 = extraout_r3_00;
        }
        *(int *)(iVar18 + 0xc) = iVar4;
        puVar2 = *(undefined8 **)((int)register0x00000054 + -0x10);
        iVar18 = *(int *)((int)register0x00000054 + -0x1c);
      }
      uVar26 = CONCAT44(iVar18,puVar2);
      *(uint *)(iVar18 + 0x10) = uVar17;
      iVar18 = uVar17 * 0xc + -0xc;
      *(undefined4 *)(iVar4 + iVar18 + 4) = 2;
      *(undefined4 *)(iVar4 + iVar18 + 8) = 2;
      if (*(int *)PTR_DAT_004b5bd8 != 0) {
        uVar26 = FUN_0009db64();
        *(int *)unaff_r8 = (int)uVar26;
        *(int *)((int)unaff_r8 + 4) = *(int *)(iVar4 + extraout_r2_01);
        iVar18 = extraout_r2_01;
      }
      piVar1 = (int *)((ulonglong)uVar26 >> 0x20);
      *(int *)(iVar4 + iVar18) = (int)uVar26;
      piVar8 = *(int **)((int)register0x00000054 + -4);
      puVar9 = *(undefined **)((int)register0x00000054 + -0x40);
      pdVar5 = *(double **)((int)register0x00000054 + -8);
      pdVar14 = *(double **)((int)register0x00000054 + -0xc);
      puVar13 = PTR_DAT_004b5bd4;
    }
LAB_004b5520:
    piVar8 = piVar8 + 3;
    puVar9 = puVar9 + -1;
    unaff_r6 = (int *)PTR_DAT_004b5bd4;
  }
  if (piVar1[1] == 0) {
    *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_004b5be4;
    FUN_00022cf8();
    puVar3 = *(undefined4 **)((int)register0x00000054 + -0x88);
    puVar3[1] = 0x1a;
    *puVar3 = PTR_DAT_004b5bf4;
    *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
    *(undefined **)((int)register0x00000054 + 0x14) = PTR_DAT_004b5bec;
    *(undefined4 **)((int)register0x00000054 + 0x18) = puVar3;
    return;
  }
  uVar6 = piVar1[2];
  uVar17 = piVar1[1] + 1;
  puVar13 = (undefined *)*piVar1;
  if (uVar6 < uVar17) {
    *(undefined **)((int)register0x00000054 + -0x8c) = puVar13;
    *(uint *)((int)register0x00000054 + -0x88) = uVar17;
    *(uint *)((int)register0x00000054 + -0x84) = uVar6;
    *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
    *(undefined **)((int)register0x00000054 + -0x7c) = PTR_DAT_004b5bd4;
    FUN_000987f4();
    puVar13 = *(undefined **)((int)register0x00000054 + -0x78);
    uVar17 = *(uint *)((int)register0x00000054 + -0x74);
    piVar1 = *(int **)((int)register0x00000054 + -0x1c);
    piVar1[2] = *(int *)((int)register0x00000054 + -0x70);
    if (*(int *)PTR_DAT_004b5bd8 != 0) {
      FUN_0009db64();
      *(undefined **)unaff_r8 = extraout_r1_01;
      *(int *)((int)unaff_r8 + 4) = *extraout_r3_01;
      puVar13 = extraout_r1_01;
      uVar17 = extraout_r2_02;
      piVar1 = extraout_r3_01;
    }
    *piVar1 = (int)puVar13;
  }
  piVar1[1] = uVar17;
  *(undefined8 *)(puVar13 + (uVar17 - 1) * 8) = *(undefined8 *)PTR_DAT_004b5bf0;
  uVar17 = piVar1[4];
  if (uVar17 - 1 < uVar17) {
    uVar6 = uVar17 + 1;
    iVar18 = uVar17 * 0xc + -0xc;
    iVar4 = piVar1[3];
    iVar19 = iVar4 + iVar18;
    uVar17 = piVar1[5];
    uVar7 = *(undefined4 *)(iVar4 + iVar18);
    uVar15 = *(undefined4 *)(iVar19 + 4);
    uVar11 = *(undefined4 *)(iVar19 + 8);
    if (uVar17 < uVar6) {
      *(undefined4 *)((int)register0x00000054 + -0x14) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0x40) = uVar15;
      *(undefined4 *)((int)register0x00000054 + -0x44) = uVar11;
      *(int *)((int)register0x00000054 + -0x8c) = iVar4;
      *(uint *)((int)register0x00000054 + -0x88) = uVar6;
      *(uint *)((int)register0x00000054 + -0x84) = uVar17;
      *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
      *(undefined **)((int)register0x00000054 + -0x7c) = PTR_DAT_004b5be0;
      FUN_000987f4();
      iVar4 = *(int *)((int)register0x00000054 + -0x78);
      uVar6 = *(uint *)((int)register0x00000054 + -0x74);
      piVar1 = *(int **)((int)register0x00000054 + -0x1c);
      piVar1[5] = *(int *)((int)register0x00000054 + -0x70);
      if (*(int *)PTR_DAT_004b5bd8 != 0) {
        FUN_0009db64();
        *(int *)unaff_r8 = extraout_r1_02;
        *(int *)((int)unaff_r8 + 4) = extraout_r3_02[3];
        iVar4 = extraout_r1_02;
        uVar6 = extraout_r2_03;
        piVar1 = extraout_r3_02;
      }
      piVar1[3] = iVar4;
      uVar11 = *(undefined4 *)((int)register0x00000054 + -0x44);
      uVar15 = *(undefined4 *)((int)register0x00000054 + -0x40);
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x14);
    }
    uVar26 = CONCAT44(uVar7,piVar1);
    piVar1[4] = uVar6;
    iVar18 = uVar6 * 0xc + -0xc;
    *(undefined4 *)(iVar4 + iVar18 + 4) = uVar15;
    *(undefined4 *)(iVar4 + iVar18 + 8) = uVar11;
    if (*(int *)PTR_DAT_004b5bd8 != 0) {
      uVar26 = FUN_0009db64();
      *(int *)unaff_r8 = (int)((ulonglong)uVar26 >> 0x20);
      *(int *)((int)unaff_r8 + 4) = *(int *)(extraout_r3_03 + extraout_r2_04);
      iVar18 = extraout_r2_04;
      iVar4 = extraout_r3_03;
    }
    *(int *)(iVar4 + iVar18) = (int)((ulonglong)uVar26 >> 0x20);
    *(int *)((int)register0x00000054 + 0x10) = (int)uVar26;
    *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
    *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
    return;
  }
  FUN_0009dbd4(uVar17 - 1);
LAB_004b5a58:
  FUN_0009dbd4(1,1);
LAB_004b5a64:
  FUN_0009dbd4(0,0);
LAB_004b5a70:
  *(undefined **)((int)register0x00000054 + -0x8c) = puVar13;
  *(int **)((int)register0x00000054 + -0x88) = unaff_r6;
  *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_004b5bf8;
  FUN_000209b4();
LAB_004b5a84:
  *(undefined **)((int)register0x00000054 + -0x8c) = puVar13;
  *(int **)((int)register0x00000054 + -0x88) = unaff_r6;
  *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_004b5bf8;
  FUN_000209b4();
LAB_004b5a98:
  FUN_0009dbd4(1,unaff_r6);
  piVar8 = extraout_r2_05;
  puVar9 = extraout_r3_04;
  goto LAB_004b5aa4;
}



/* k3c/internal/pkg/heater.(*LinearInterpolate).Interpolate @ 004b5bfc (size 244) */

void k3c_internal_pkg_heater___LinearInterpolate__Interpolate(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  double *pdVar4;
  int iVar5;
  uint uVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  double dVar9;
  double dVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      piVar3 = *(int **)((int)register0x00000054 + 4);
      uVar2 = piVar3[1];
      iVar5 = uVar2 - 1;
      dVar9 = *(double *)((int)register0x00000054 + 8);
      uVar1 = 0;
      while (uVar6 = uVar1, (int)uVar1 <= iVar5) {
        uVar6 = uVar1 + (int)(iVar5 - uVar1) / 2;
        uVar8 = uVar2 == uVar6;
        if (uVar2 <= uVar6) goto LAB_004b5cd8;
        dVar10 = *(double *)(*piVar3 + uVar6 * 8);
        if (dVar10 == dVar9) break;
        if (dVar9 <= dVar10) {
          iVar5 = uVar6 - 1;
        }
        else {
          uVar1 = uVar6 + 1;
        }
      }
      uVar8 = uVar6 == piVar3[4];
      if (uVar6 < (uint)piVar3[4]) {
        uVar1 = *(uint *)(piVar3[3] + uVar6 * 0xc + 4);
        pdVar4 = *(double **)(piVar3[3] + uVar6 * 0xc);
        uVar8 = uVar1 == 0;
        if (!(bool)uVar8) {
          uVar8 = uVar1 == 1;
          if (1 < uVar1) {
            *(double *)((int)register0x00000054 + 0x10) = pdVar4[1] + dVar9 * *pdVar4;
            return;
          }
          FUN_0009dbd4(1,1);
        }
        FUN_0009dbd4(0,0);
      }
      FUN_0009dbd4(uVar6);
LAB_004b5cd8:
      param_1 = FUN_0009dbd4(uVar6);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x4b5cec;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*LinearInterpolate).Reverse_interpolate @ 004b5cf0 (size 816) */

void k3c_internal_pkg_heater___LinearInterpolate__Reverse_interpolate(undefined4 param_1)

{
  uint uVar1;
  byte bVar2;
  double *pdVar3;
  uint uVar4;
  uint extraout_r1;
  int *piVar5;
  uint extraout_r2;
  double *pdVar6;
  int iVar7;
  double *extraout_r3;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  double *unaff_r6;
  uint uVar11;
  uint uVar12;
  int unaff_r10;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  undefined1 uVar14;
  uint in_fpscr;
  undefined4 extraout_s0;
  undefined8 uVar15;
  undefined4 extraout_s1;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  uint unaff_s30;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar13 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      piVar5 = *(int **)((int)register0x00000054 + 4);
      uVar4 = 0;
      pdVar6 = (double *)0x0;
      uVar8 = 0;
      for (pdVar3 = (double *)0x0; (int)pdVar3 < piVar5[1]; pdVar3 = (double *)((int)pdVar3 + 1)) {
        unaff_r6 = (double *)piVar5[4];
        uVar14 = pdVar3 == unaff_r6;
        if (unaff_r6 <= pdVar3) goto LAB_004b6008;
        uVar12 = *(uint *)(piVar5[3] + (int)pdVar3 * 0xc + 4);
        unaff_r6 = *(double **)(piVar5[3] + (int)pdVar3 * 0xc);
        uVar14 = 1;
        if (uVar12 == 0) goto LAB_004b5ffc;
        uVar14 = uVar12 == 1;
        if (uVar12 < 2) goto LAB_004b5ff0;
        uVar4 = uVar4 + 1;
        dVar18 = unaff_r6[1] + *(double *)(*piVar5 + (int)pdVar3 * 8) * *unaff_r6;
        if (uVar8 < uVar4) {
          *(double **)((int)register0x00000054 + -0x10) = pdVar3;
          *(double *)((int)register0x00000054 + -0xc) = dVar18;
          *(double **)((int)register0x00000054 + -0x40) = pdVar6;
          *(uint *)((int)register0x00000054 + -0x3c) = uVar4;
          *(uint *)((int)register0x00000054 + -0x38) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_004b6024;
          FUN_000987f4();
          pdVar6 = *(double **)((int)register0x00000054 + -0x2c);
          uVar4 = *(uint *)((int)register0x00000054 + -0x28);
          uVar8 = *(uint *)((int)register0x00000054 + -0x24);
          pdVar3 = *(double **)((int)register0x00000054 + -0x10);
          piVar5 = *(int **)((int)register0x00000054 + 4);
          dVar18 = *(double *)((int)register0x00000054 + -0xc);
        }
        unaff_r6 = pdVar6 + (uVar4 - 1);
        *unaff_r6 = dVar18;
      }
      uVar14 = uVar4 == 0;
      if (!(bool)uVar14) {
        uVar8 = uVar4 - 2;
        uVar14 = uVar4 == uVar8;
        if (uVar8 < uVar4) {
          *(double **)((int)register0x00000054 + -4) = pdVar6;
          *(uint *)((int)register0x00000054 + -0x1c) = uVar4;
          dVar18 = *pdVar6;
          dVar16 = pdVar6[uVar8];
          uVar8 = in_fpscr & 0xfffffff | (uint)(dVar16 < dVar18) << 0x1f |
                  (uint)(dVar16 == dVar18) << 0x1e;
          uVar12 = uVar8 | (uint)(NAN(dVar16) || NAN(dVar18)) << 0x1c;
          bVar2 = (byte)(uVar8 >> 0x18);
          if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar12 >> 0x1c) & 1)) {
            dVar18 = *(double *)((int)register0x00000054 + 8);
            uVar8 = 0;
            uVar9 = 0;
            puVar10 = (uint *)0x0;
            uVar11 = 0;
            do {
              if ((int)uVar4 <= (int)uVar8) goto LAB_004b5eb0;
              uVar1 = uVar12 & 0xfffffff | (uint)(dVar18 < pdVar6[uVar8]) << 0x1f;
              uVar12 = uVar1 | (uint)(NAN(dVar18) || NAN(pdVar6[uVar8])) << 0x1c;
              if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar12 >> 0x1c) & 1)) {
                uVar11 = uVar11 + 1;
                if (uVar9 < uVar11) {
                  *(uint *)((int)register0x00000054 + -0x18) = uVar8;
                  *(uint **)((int)register0x00000054 + -0x40) = puVar10;
                  *(uint *)((int)register0x00000054 + -0x3c) = uVar11;
                  *(uint *)((int)register0x00000054 + -0x38) = uVar9;
                  *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
                  *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_004b6028;
                  FUN_000987f4(1,DAT_004b6028,piVar5);
                  puVar10 = *(uint **)((int)register0x00000054 + -0x2c);
                  uVar11 = *(uint *)((int)register0x00000054 + -0x28);
                  uVar9 = *(uint *)((int)register0x00000054 + -0x24);
                  uVar8 = *(uint *)((int)register0x00000054 + -0x18);
                  uVar4 = *(uint *)((int)register0x00000054 + -0x1c);
                  piVar5 = *(int **)((int)register0x00000054 + 4);
                  pdVar6 = *(double **)((int)register0x00000054 + -4);
                  dVar18 = *(double *)((int)register0x00000054 + 8);
                }
                puVar10[uVar11 - 1] = uVar8;
              }
              uVar8 = uVar8 + 1;
            } while( true );
          }
          dVar18 = *(double *)((int)register0x00000054 + 8);
          uVar8 = 0;
          uVar9 = 0;
          puVar10 = (uint *)0x0;
          uVar11 = 0;
          do {
            if ((int)uVar8 < (int)uVar4) {
              uVar1 = uVar12 & 0xfffffff | (uint)(pdVar6[uVar8] < dVar18) << 0x1f;
              uVar12 = uVar1 | (uint)(NAN(pdVar6[uVar8]) || NAN(dVar18)) << 0x1c;
              if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar12 >> 0x1c) & 1)) {
                uVar11 = uVar11 + 1;
                if (uVar9 < uVar11) {
                  *(uint *)((int)register0x00000054 + -0x14) = uVar8;
                  *(uint **)((int)register0x00000054 + -0x40) = puVar10;
                  *(uint *)((int)register0x00000054 + -0x3c) = uVar11;
                  *(uint *)((int)register0x00000054 + -0x38) = uVar9;
                  *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
                  *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_004b6028;
                  FUN_000987f4();
                  puVar10 = *(uint **)((int)register0x00000054 + -0x2c);
                  uVar11 = *(uint *)((int)register0x00000054 + -0x28);
                  uVar9 = *(uint *)((int)register0x00000054 + -0x24);
                  uVar8 = *(uint *)((int)register0x00000054 + -0x14);
                  uVar4 = *(uint *)((int)register0x00000054 + -0x1c);
                  pdVar6 = *(double **)((int)register0x00000054 + -4);
                  dVar18 = *(double *)((int)register0x00000054 + 8);
                }
                puVar10[uVar11 - 1] = uVar8;
              }
            }
            else {
LAB_004b5eb0:
              if (uVar11 != 0) {
                uVar15 = VectorSignedToFloat(unaff_s30 & 0xffff0000 | *puVar10 & 0xffff,
                                             (byte)(uVar12 >> 0x16) & 3);
                uVar17 = VectorSignedToFloat(unaff_s30 & 0xffff0000 | uVar4 - 1 & 0xffff,
                                             (byte)(uVar12 >> 0x16) & 3);
                *(undefined8 *)((int)register0x00000054 + -0x40) = uVar15;
                *(undefined8 *)((int)register0x00000054 + -0x38) = uVar17;
                FUN_000afda8();
                unaff_s30 = (uint)(longlong)*(double *)((int)register0x00000054 + -0x30);
                uVar4 = unaff_s30;
                if (unaff_s30 < *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x10)) {
                  iVar7 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0xc);
                  uVar9 = *(uint *)(iVar7 + unaff_s30 * 0xc + 4);
                  pdVar6 = *(double **)(iVar7 + unaff_s30 * 0xc);
                  if (uVar9 != 0) {
                    if (1 < uVar9) {
                      *(double *)((int)register0x00000054 + 0x10) =
                           (*(double *)((int)register0x00000054 + 8) - pdVar6[1]) / *pdVar6;
                      return;
                    }
                    FUN_0009dbd4(1,1);
                  }
                  FUN_0009dbd4(0,0);
                  uVar4 = extraout_r2;
                }
                FUN_0009dbd4(uVar4);
              }
              uVar8 = FUN_0009dbd4(0,0);
              dVar18 = (double)CONCAT44(extraout_s1,extraout_s0);
              uVar4 = extraout_r1;
              pdVar6 = extraout_r3;
            }
            uVar8 = uVar8 + 1;
          } while( true );
        }
        FUN_0009dbd4();
      }
      FUN_0009dbd4(0,0);
LAB_004b5ff0:
      FUN_0009dbd4(1,1);
LAB_004b5ffc:
      pdVar3 = (double *)FUN_0009dbd4(0,0);
LAB_004b6008:
      param_1 = FUN_0009dbd4(pdVar3,unaff_r6);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if ((bool)uVar14) {
        register0x00000054 = (BADSPACEBASE *)puVar13;
      }
    }
    unaff_lr = 0x4b601c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.NewLinearVoltage @ 004b602c (size 1356) */

void k3c_internal_pkg_heater_NewLinearVoltage(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar5;
  int iVar6;
  int extraout_r3;
  undefined4 *puVar7;
  undefined4 extraout_r3_00;
  undefined1 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar12;
  undefined4 unaff_lr;
  undefined1 uVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 extraout_d4;
  undefined8 uVar18;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x58)) {
      puVar12 = (undefined1 *)((int)register0x00000054 + -0xd8);
      *(undefined4 *)((int)register0x00000054 + -0xd8) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0xd4) = PTR_DAT_004b657c;
      FUN_00022cf8();
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + -0xd0);
      *(undefined4 *)((int)register0x00000054 + -0xd4) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_004b6580;
      *(undefined4 *)((int)register0x00000054 + -0xcc) = 0xb;
      *(undefined **)((int)register0x00000054 + -200) = PTR_DAT_004b6584;
      *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_004b6588;
      *(undefined8 *)((int)register0x00000054 + -0xc0) = 0;
      *(undefined8 *)((int)register0x00000054 + -0xb8) = 0;
      *(undefined8 *)((int)register0x00000054 + -0xb0) = 0;
      *(undefined8 *)((int)register0x00000054 + -0xa8) = 0;
      *(undefined1 *)((int)register0x00000054 + -0xa0) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
      *(undefined8 *)((int)register0x00000054 + -0x6c) =
           *(undefined8 *)((int)register0x00000054 + -0x9c);
      *(undefined4 *)((int)register0x00000054 + -0xd4) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0xd0) =
           PTR_s_voltage_offsetnew_heater___spwm__008262d0_0x2162_004b658c;
      *(undefined4 *)((int)register0x00000054 + -0xcc) = 0xe;
      *(undefined **)((int)register0x00000054 + -200) = PTR_DAT_004b6584;
      *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_004b6590;
      *(undefined8 *)((int)register0x00000054 + -0xc0) = 0;
      *(undefined8 *)((int)register0x00000054 + -0xb8) = 0;
      *(undefined8 *)((int)register0x00000054 + -0xb0) = 0;
      *(undefined8 *)((int)register0x00000054 + -0xa8) = 0;
      *(undefined1 *)((int)register0x00000054 + -0xa0) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
      dVar15 = *(double *)((int)register0x00000054 + -0x9c);
      *(double *)((int)register0x00000054 + -0x90) = dVar15;
      piVar1 = *(int **)((int)register0x00000054 + 8);
      puVar2 = *(undefined4 **)((int)register0x00000054 + 4);
      dVar16 = *(double *)((int)register0x00000054 + -0x6c);
      iVar4 = *(int *)((int)register0x00000054 + 0xc);
      uVar5 = 0;
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x48);
      uVar9 = 0;
      while( true ) {
        if (iVar4 < 1) {
          *(undefined **)((int)register0x00000054 + 0x14) = PTR_DAT_004b65c0;
          *(undefined4 *)((int)register0x00000054 + 0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x3c);
          *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
          return;
        }
        uVar10 = piVar1[1];
        uVar13 = 1;
        if (uVar10 == 0) goto LAB_004b655c;
        uVar13 = uVar10 == 1;
        if (uVar10 < 2) break;
        *(int *)((int)register0x00000054 + -0x5c) = iVar4;
        *(int **)((int)register0x00000054 + -0x2c) = piVar1;
        *(undefined1 **)((int)register0x00000054 + -0x38) = puVar8;
        *(undefined4 *)((int)register0x00000054 + -0x74) = uVar9;
        *(undefined4 *)((int)register0x00000054 + -0x70) = uVar5;
        puVar11 = (undefined8 *)*piVar1;
        dVar17 = (double)puVar11[1];
        *(double *)((int)register0x00000054 + -0x88) = dVar17;
        dVar16 = (dVar17 - dVar15) / dVar16;
        if ((dVar16 < 0.0) || (1.0 < dVar16)) {
          *(undefined4 *)((int)register0x00000054 + -0x44) = puVar2[3];
          *(undefined4 *)((int)register0x00000054 + -0x94) = puVar2[4];
          FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
          *(undefined8 *)((int)register0x00000054 + -0x50) = extraout_d4;
          *(undefined4 *)((int)register0x00000054 + -0xd4) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          *(undefined4 *)((int)register0x00000054 + -0xd0) =
               *(undefined4 *)((int)register0x00000054 + -0x4c);
          FUN_0008f6c0();
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_004b6584;
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + -0xcc);
          *(undefined8 *)((int)register0x00000054 + -0x58) =
               *(undefined8 *)((int)register0x00000054 + -0x88);
          *(undefined4 *)((int)register0x00000054 + -0xd4) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          *(undefined4 *)((int)register0x00000054 + -0xd0) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          FUN_0008f6c0();
          *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_004b6584;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0xcc);
          *(undefined4 *)((int)register0x00000054 + -0xd4) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          *(undefined4 *)((int)register0x00000054 + -0xd0) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_004b6594;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0xcc);
          *(undefined **)((int)register0x00000054 + -0xd4) = PTR_DAT_004b6598;
          *(undefined4 *)((int)register0x00000054 + -0xd0) = 0x2a;
          *(undefined1 **)((int)register0x00000054 + -0xcc) =
               (undefined1 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -200) = 3;
          *(undefined4 *)((int)register0x00000054 + -0xc4) = 3;
          k3c_internal_pkg_logger_Debugf();
          uVar9 = *(undefined4 *)((int)register0x00000054 + -0x74);
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x70);
          puVar8 = *(undefined1 **)((int)register0x00000054 + -0x38);
        }
        else {
          *(undefined8 *)((int)register0x00000054 + -0x7c) = *puVar11;
          *(double *)((int)register0x00000054 + -100) = dVar16;
          *(undefined **)((int)register0x00000054 + -0xd4) = PTR_DAT_004b65a0;
          FUN_00022cf8();
          puVar11 = *(undefined8 **)((int)register0x00000054 + -0xd0);
          *puVar11 = *(undefined8 *)((int)register0x00000054 + -100);
          puVar11[1] = *(undefined8 *)((int)register0x00000054 + -0x7c);
          uVar3 = *(int *)((int)register0x00000054 + -0x74) + 1;
          uVar10 = *(uint *)((int)register0x00000054 + -0x70);
          if (uVar10 < uVar3) {
            *(undefined8 **)((int)register0x00000054 + -0x30) = puVar11;
            *(undefined4 *)((int)register0x00000054 + -0xd4) =
                 *(undefined4 *)((int)register0x00000054 + -0x38);
            *(uint *)((int)register0x00000054 + -0xd0) = uVar3;
            *(uint *)((int)register0x00000054 + -0xcc) = uVar10;
            *(undefined4 *)((int)register0x00000054 + -200) = 1;
            *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_004b65a4;
            FUN_000987f4();
            iVar4 = *(int *)((int)register0x00000054 + -0xc0);
            uVar3 = *(uint *)((int)register0x00000054 + -0xbc);
            uVar10 = *(uint *)((int)register0x00000054 + -0xb8);
            puVar11 = *(undefined8 **)((int)register0x00000054 + -0x30);
          }
          else {
            iVar4 = *(int *)((int)register0x00000054 + -0x38);
          }
          uVar18 = CONCAT44(uVar3,puVar11);
          iVar6 = uVar3 * 0xc + -0xc;
          *(undefined4 *)(iVar4 + iVar6 + 4) = 2;
          *(undefined4 *)(iVar4 + iVar6 + 8) = 2;
          if (*(int *)PTR_DAT_004b65a8 != 0) {
            uVar18 = FUN_0009db64();
            *unaff_r8 = (int)uVar18;
            unaff_r8[1] = *(undefined4 *)(iVar4 + extraout_r3);
            uVar10 = extraout_r2;
            iVar6 = extraout_r3;
          }
          uVar9 = (undefined4)((ulonglong)uVar18 >> 0x20);
          *(int *)((int)register0x00000054 + -0x38) = iVar4;
          *(undefined4 *)((int)register0x00000054 + -0x74) = uVar9;
          *(uint *)((int)register0x00000054 + -0x70) = uVar10;
          *(int *)(iVar4 + iVar6) = (int)uVar18;
          *(int *)((int)register0x00000054 + -0xd4) = iVar4;
          *(undefined4 *)((int)register0x00000054 + -0xd0) = uVar9;
          *(uint *)((int)register0x00000054 + -0xcc) = uVar10;
          k3c_internal_pkg_heater_NewLinearInterpolate();
          iVar4 = *(int *)((int)register0x00000054 + -0xc4);
          uVar9 = *(undefined4 *)((int)register0x00000054 + -0xc0);
          bVar14 = iVar4 == 0;
          if (!bVar14) {
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x28),
                         *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10),
                         *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc));
            if (!bVar14) {
              iVar4 = *(int *)(iVar4 + 4);
            }
            *(int *)((int)register0x00000054 + -0x28) = iVar4;
            *(undefined4 *)((int)register0x00000054 + -0x24) = uVar9;
            *(undefined4 *)((int)register0x00000054 + -0xd4) = extraout_r3_00;
            *(undefined4 *)((int)register0x00000054 + -0xd0) = extraout_r2_00;
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_004b6594;
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0xcc);
            *(undefined **)((int)register0x00000054 + -0xd4) = PTR_DAT_004b65b4;
            *(undefined4 *)((int)register0x00000054 + -0xd0) = 0x1f;
            *(undefined1 **)((int)register0x00000054 + -0xcc) =
                 (undefined1 *)((int)register0x00000054 + -0x28);
            *(undefined4 *)((int)register0x00000054 + -200) = 2;
            *(undefined4 *)((int)register0x00000054 + -0xc4) = 2;
            FUN_0013b72c();
            *(undefined4 *)((int)register0x00000054 + -0x80) =
                 *(undefined4 *)((int)register0x00000054 + -0xbc);
            *(undefined4 *)((int)register0x00000054 + -0x40) =
                 *(undefined4 *)((int)register0x00000054 + -0xc0);
            *(undefined **)((int)register0x00000054 + -0xd4) = PTR_DAT_004b65b8;
            FUN_00022cf8();
            puVar2 = *(undefined4 **)((int)register0x00000054 + -0xd0);
            puVar2[1] = *(undefined4 *)((int)register0x00000054 + -0x80);
            if (*(int *)PTR_DAT_004b65a8 == 0) {
              uVar9 = *(undefined4 *)((int)register0x00000054 + -0x40);
            }
            else {
              puVar2 = (undefined4 *)FUN_0009db54();
              uVar9 = *(undefined4 *)((int)register0x00000054 + -0x40);
              *unaff_r8 = uVar9;
            }
            *puVar2 = uVar9;
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
            *(undefined **)((int)register0x00000054 + 0x1c) = PTR_DAT_004b65bc;
            *(undefined4 **)((int)register0x00000054 + 0x20) = puVar2;
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0x34) =
               *(undefined4 *)((int)register0x00000054 + -200);
          *(undefined **)((int)register0x00000054 + -0xd4) = PTR_DAT_004b65ac;
          FUN_00022cf8();
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0xd0);
          *puVar2 = PTR_k3c_internal_pkg_heater___LinearInterpolate__Interpolate_fm_004b65b0;
          if (*(int *)PTR_DAT_004b65a8 == 0) {
            uVar9 = *(undefined4 *)((int)register0x00000054 + -0x34);
            puVar7 = *(undefined4 **)((int)register0x00000054 + -0x3c);
          }
          else {
            puVar2 = (undefined4 *)FUN_0009db74();
            uVar9 = *(undefined4 *)((int)register0x00000054 + -0x34);
            *unaff_r8 = uVar9;
            unaff_r8[1] = puVar2;
            puVar7 = *(undefined4 **)((int)register0x00000054 + -0x3c);
            unaff_r8[2] = *puVar7;
          }
          puVar2[1] = uVar9;
          *puVar7 = puVar2;
          *(undefined **)((int)register0x00000054 + -0xd4) = PTR_DAT_004b65ac;
          FUN_00022cf8();
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0xd0);
          *puVar2 = PTR_k3c_internal_pkg_heater___LinearInterpolate__Reverse_interpolate_fm_004b659c
          ;
          if (*(int *)PTR_DAT_004b65a8 == 0) {
            uVar9 = *(undefined4 *)((int)register0x00000054 + -0x34);
            iVar4 = *(int *)((int)register0x00000054 + -0x3c);
          }
          else {
            puVar2 = (undefined4 *)FUN_0009db74();
            uVar9 = *(undefined4 *)((int)register0x00000054 + -0x34);
            *unaff_r8 = uVar9;
            unaff_r8[1] = puVar2;
            iVar4 = *(int *)((int)register0x00000054 + -0x3c);
            unaff_r8[2] = *(undefined4 *)(iVar4 + 4);
          }
          puVar2[1] = uVar9;
          *(undefined4 **)(iVar4 + 4) = puVar2;
          uVar9 = *(undefined4 *)((int)register0x00000054 + -0x74);
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x70);
          puVar8 = *(undefined1 **)((int)register0x00000054 + -0x38);
        }
        piVar1 = (int *)(*(int *)((int)register0x00000054 + -0x2c) + 0xc);
        iVar4 = *(int *)((int)register0x00000054 + -0x5c) + -1;
        dVar15 = *(double *)((int)register0x00000054 + -0x90);
        puVar2 = *(undefined4 **)((int)register0x00000054 + 4);
        dVar16 = *(double *)((int)register0x00000054 + -0x6c);
        unaff_r8 = puVar2;
      }
      FUN_0009dbd4(1,1);
LAB_004b655c:
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xd8);
      if ((bool)uVar13) {
        register0x00000054 = (BADSPACEBASE *)puVar12;
      }
    }
    unaff_lr = 0x4b6574;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*LinearVoltage).Calc_temp @ 004b65c4 (size 64) */

void k3c_internal_pkg_heater___LinearVoltage__Calc_temp(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4b6600;
    FUN_0009bf64();
  }
  (**(code **)*in_stack_00000004)();
                    /* WARNING: Could not recover jumptable at 0x004b65f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*LinearVoltage).Calc_adc @ 004b6604 (size 60) */

void k3c_internal_pkg_heater___LinearVoltage__Calc_adc(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4b663c;
    FUN_0009bf64();
  }
  k3c_internal_pkg_heater___LinearVoltage__Calc_adc();
                    /* WARNING: Could not recover jumptable at 0x004b6630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.NewCustomLinearVoltage @ 004b6640 (size 788) */

void k3c_internal_pkg_heater_NewCustomLinearVoltage(undefined4 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int extraout_r1;
  uint uVar4;
  uint extraout_r2;
  int iVar5;
  int extraout_r2_00;
  uint uVar6;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  undefined8 uVar9;
  
code_r0x004b6640:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar7 = (undefined1 *)((int)register0x00000054 + -0x70);
    *(undefined4 *)((int)register0x00000054 + -0x70) = unaff_lr;
    *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_004b6958;
    FUN_00022cf8();
    iVar1 = *(int *)((int)register0x00000054 + -0x68);
    *(int *)((int)register0x00000054 + -0x10) = iVar1;
    *(undefined **)(iVar1 + 8) = PTR_DAT_004b695c;
    iVar3 = 1;
    do {
      if (999 < iVar3) {
LAB_004b690c:
        *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_004b6984;
        *(int *)((int)register0x00000054 + 0xc) = iVar1;
        return;
      }
      *(int *)((int)register0x00000054 + -0x28) = iVar3;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(int *)((int)register0x00000054 + -0x6c) = iVar3;
      FUN_00020ce0();
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_004b6960;
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      *(undefined **)((int)register0x00000054 + -0x6c) =
           PTR_s_temperature_dmin_safe_tempmax_sa_008262d0_0x12df_004b6964;
      *(undefined4 *)((int)register0x00000054 + -0x68) = 0xd;
      *(undefined1 **)((int)register0x00000054 + -100) =
           (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -100) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_004b6968;
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_SUB_004b696c;
      *(undefined8 *)((int)register0x00000054 + -0x58) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x50) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x48) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x40) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x38) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__GetfloatNone();
      if (*(int *)((int)register0x00000054 + -0x34) == 0) {
        iVar1 = *(int *)((int)register0x00000054 + -0x10);
        goto LAB_004b690c;
      }
      *(int *)((int)register0x00000054 + -0x2c) = *(int *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           *(undefined4 *)((int)register0x00000054 + -0x28);
      FUN_00020ce0();
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_004b6960;
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      *(undefined **)((int)register0x00000054 + -0x6c) =
           PTR_s_voltage_dwatermarkmax_deltamax_e_00823504_0x66b_004b6970;
      *(undefined4 *)((int)register0x00000054 + -0x68) = 9;
      *(undefined1 **)((int)register0x00000054 + -100) =
           (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -100) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_004b6968;
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_SUB_004b6974;
      *(undefined8 *)((int)register0x00000054 + -0x58) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x50) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x48) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x40) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x38) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__GetfloatNone();
      uVar9 = CONCAT44(PTR_DAT_004b6968,*(undefined **)((int)register0x00000054 + -0x2c));
      uVar8 = *(undefined **)((int)register0x00000054 + -0x2c) == PTR_DAT_004b6968;
      if (!(bool)uVar8) goto LAB_004b6930;
      uVar8 = *(undefined **)((int)register0x00000054 + -0x34) == PTR_DAT_004b6968;
      if (!(bool)uVar8) goto LAB_004b691c;
      *(undefined8 *)((int)register0x00000054 + -0x1c) =
           **(undefined8 **)((int)register0x00000054 + -0x14);
      *(undefined8 *)((int)register0x00000054 + -0x24) =
           **(undefined8 **)((int)register0x00000054 + -0x30);
      *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_004b6978;
      FUN_00022cf8();
      puVar2 = *(undefined8 **)((int)register0x00000054 + -0x68);
      *puVar2 = *(undefined8 *)((int)register0x00000054 + -0x1c);
      puVar2[1] = *(undefined8 *)((int)register0x00000054 + -0x24);
      iVar1 = *(int *)((int)register0x00000054 + -0x10);
      uVar4 = *(uint *)(iVar1 + 0x10);
      uVar6 = *(int *)(iVar1 + 0xc) + 1;
      iVar3 = *(int *)(iVar1 + 8);
      if (uVar4 < uVar6) {
        *(undefined8 **)((int)register0x00000054 + -4) = puVar2;
        *(int *)((int)register0x00000054 + -0x6c) = iVar3;
        *(uint *)((int)register0x00000054 + -0x68) = uVar6;
        *(uint *)((int)register0x00000054 + -100) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_004b697c;
        FUN_000987f4();
        iVar3 = *(int *)((int)register0x00000054 + -0x58);
        uVar6 = *(uint *)((int)register0x00000054 + -0x54);
        iVar1 = *(int *)((int)register0x00000054 + -0x10);
        *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)((int)register0x00000054 + -0x50);
        if (*(int *)PTR_DAT_004b6980 != 0) {
          FUN_0009db64();
          *unaff_r8 = extraout_r1;
          unaff_r8[1] = *(int *)(extraout_r3 + 8);
          iVar3 = extraout_r1;
          uVar6 = extraout_r2;
          iVar1 = extraout_r3;
        }
        *(int *)(iVar1 + 8) = iVar3;
        puVar2 = *(undefined8 **)((int)register0x00000054 + -4);
        iVar1 = *(int *)((int)register0x00000054 + -0x10);
      }
      uVar9 = CONCAT44(iVar1,puVar2);
      *(uint *)(iVar1 + 0xc) = uVar6;
      iVar5 = uVar6 * 0xc + -0xc;
      *(undefined4 *)(iVar3 + iVar5 + 4) = 2;
      *(undefined4 *)(iVar3 + iVar5 + 8) = 2;
      if (*(int *)PTR_DAT_004b6980 != 0) {
        uVar9 = FUN_0009db64();
        *unaff_r8 = (int)uVar9;
        unaff_r8[1] = *(int *)(iVar3 + extraout_r2_00);
        iVar5 = extraout_r2_00;
      }
      iVar1 = (int)((ulonglong)uVar9 >> 0x20);
      *(int *)(iVar3 + iVar5) = (int)uVar9;
      iVar3 = *(int *)((int)register0x00000054 + -0x28) + 1;
    } while( true );
  }
  goto LAB_004b6948;
LAB_004b691c:
  *(undefined **)((int)register0x00000054 + -0x6c) =
       *(undefined **)((int)register0x00000054 + -0x34);
  *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_004b6968;
  *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_004b6988;
  uVar9 = FUN_000209b4();
LAB_004b6930:
  *(undefined8 *)((int)register0x00000054 + -0x6c) = uVar9;
  *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_004b6988;
  param_1 = FUN_000209b4();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x70);
  if ((bool)uVar8) {
    register0x00000054 = (BADSPACEBASE *)puVar7;
  }
LAB_004b6948:
  unaff_lr = 0x4b6950;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x004b6640;
}



/* k3c/internal/pkg/heater.(*CustomLinearVoltage).Get_name @ 004b698c (size 24) */

void k3c_internal_pkg_heater___CustomLinearVoltage__Get_name(void)

{
  return;
}



/* k3c/internal/pkg/heater.(*CustomLinearVoltage).Create @ 004b69a4 (size 204) */

void k3c_internal_pkg_heater___CustomLinearVoltage__Create(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_heater_NewLinearVoltage();
  if (uStack_18 != 0) {
    k3c_internal_pkg_logger_Error();
  }
  k3c_internal_pkg_heater_NewPrinterADCtoTemperature();
  return;
}



/* k3c/internal/pkg/heater.NewLinearResistance @ 004b6a78 (size 820) */

void k3c_internal_pkg_heater_NewLinearResistance(undefined4 param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined4 extraout_r1;
  undefined4 *puVar3;
  uint extraout_r2;
  undefined4 extraout_r2_00;
  uint uVar4;
  int iVar5;
  int extraout_r3;
  undefined4 extraout_r3_00;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  bool bVar11;
  undefined8 uVar12;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -8)) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x88);
      *(undefined4 *)((int)register0x00000054 + -0x88) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_004b6db0;
      FUN_00022cf8();
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x80);
      *(undefined4 *)((int)register0x00000054 + -0x84) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x80) =
           PTR_s_pullup_resistorinline_resistorch_008262d0_0x2ee9_004b6db4;
      *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xf;
      *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_004b6db8;
      *(undefined **)((int)register0x00000054 + -0x74) = PTR_DAT_004b6dbc;
      *(undefined8 *)((int)register0x00000054 + -0x70) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x68) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x60) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x58) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x50) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
      puVar1 = *(undefined8 **)((int)register0x00000054 + -0x20);
      *puVar1 = *(undefined8 *)((int)register0x00000054 + -0x4c);
      piVar2 = *(int **)((int)register0x00000054 + 8);
      puVar3 = *(undefined4 **)((int)register0x00000054 + 0xc);
      uVar4 = 0;
      iVar6 = 0;
      uVar7 = 0;
      while( true ) {
        if ((int)puVar3 < 1) {
          *(int *)((int)register0x00000054 + -0x84) = iVar6;
          *(undefined4 *)((int)register0x00000054 + -0x80) = uVar7;
          *(uint *)((int)register0x00000054 + -0x7c) = uVar4;
          k3c_internal_pkg_heater_NewLinearInterpolate(puVar1);
          iVar6 = *(int *)((int)register0x00000054 + -0x74);
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0x70);
          bVar11 = iVar6 == 0;
          if (bVar11) {
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x78);
            if (*(int *)PTR_DAT_004b6dc8 == 0) {
              iVar6 = *(int *)((int)register0x00000054 + -0x20);
            }
            else {
              FUN_0009db64();
              *unaff_r8 = extraout_r1;
              iVar6 = *(int *)((int)register0x00000054 + -0x20);
              unaff_r8[1] = *(undefined4 *)(iVar6 + 8);
              uVar7 = extraout_r1;
            }
            *(undefined4 *)(iVar6 + 8) = uVar7;
            *(int *)((int)register0x00000054 + 0x14) = iVar6;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
            return;
          }
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10),
                       *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10),
                       *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc));
          if (!bVar11) {
            iVar6 = *(int *)(iVar6 + 4);
          }
          *(int *)((int)register0x00000054 + -0x10) = iVar6;
          *(undefined4 *)((int)register0x00000054 + -0xc) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x84) = extraout_r3_00;
          *(undefined4 *)((int)register0x00000054 + -0x80) = extraout_r2_00;
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_004b6dcc;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x7c);
          *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_004b6dd0;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 0x1f;
          *(undefined1 **)((int)register0x00000054 + -0x7c) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x78) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x74) = 2;
          FUN_0013b72c();
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -0x6c);
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x70);
          *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_004b6dd4;
          FUN_00022cf8();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x80);
          puVar3[1] = *(undefined4 *)((int)register0x00000054 + -0x44);
          if (*(int *)PTR_DAT_004b6dc8 == 0) {
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x24);
          }
          else {
            puVar3 = (undefined4 *)FUN_0009db54();
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x24);
            *unaff_r8 = uVar7;
          }
          *puVar3 = uVar7;
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_004b6dd8;
          *(undefined4 **)((int)register0x00000054 + 0x1c) = puVar3;
          return;
        }
        uVar8 = piVar2[1];
        uVar10 = 1;
        if (uVar8 == 0) goto LAB_004b6d90;
        uVar10 = uVar8 == 1;
        if (uVar8 < 2) break;
        *(undefined4 **)((int)register0x00000054 + -0x28) = puVar3;
        *(int **)((int)register0x00000054 + -0x14) = piVar2;
        *(int *)((int)register0x00000054 + -0x1c) = iVar6;
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar7;
        *(uint *)((int)register0x00000054 + -0x2c) = uVar4;
        puVar1 = (undefined8 *)*piVar2;
        *(undefined8 *)((int)register0x00000054 + -0x38) = *puVar1;
        *(undefined8 *)((int)register0x00000054 + -0x40) = puVar1[1];
        *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_004b6dc0;
        FUN_00022cf8();
        puVar1 = *(undefined8 **)((int)register0x00000054 + -0x80);
        *puVar1 = *(undefined8 *)((int)register0x00000054 + -0x38);
        puVar1[1] = *(undefined8 *)((int)register0x00000054 + -0x40);
        uVar8 = *(int *)((int)register0x00000054 + -0x30) + 1;
        uVar4 = *(uint *)((int)register0x00000054 + -0x2c);
        if (uVar4 < uVar8) {
          *(undefined8 **)((int)register0x00000054 + -0x18) = puVar1;
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(uint *)((int)register0x00000054 + -0x80) = uVar8;
          *(uint *)((int)register0x00000054 + -0x7c) = uVar4;
          *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
          *(undefined **)((int)register0x00000054 + -0x74) = PTR_DAT_004b6dc4;
          FUN_000987f4();
          iVar6 = *(int *)((int)register0x00000054 + -0x70);
          uVar8 = *(uint *)((int)register0x00000054 + -0x6c);
          uVar4 = *(uint *)((int)register0x00000054 + -0x68);
          puVar1 = *(undefined8 **)((int)register0x00000054 + -0x18);
        }
        else {
          iVar6 = *(int *)((int)register0x00000054 + -0x1c);
        }
        uVar12 = CONCAT44(uVar8,puVar1);
        iVar5 = uVar8 * 0xc + -0xc;
        *(undefined4 *)(iVar6 + iVar5 + 4) = 2;
        *(undefined4 *)(iVar6 + iVar5 + 8) = 2;
        if (*(int *)PTR_DAT_004b6dc8 != 0) {
          uVar12 = FUN_0009db64();
          *unaff_r8 = (int)uVar12;
          unaff_r8[1] = *(undefined4 *)(iVar6 + extraout_r3);
          uVar4 = extraout_r2;
          iVar5 = extraout_r3;
        }
        uVar7 = (undefined4)((ulonglong)uVar12 >> 0x20);
        *(int *)(iVar6 + iVar5) = (int)uVar12;
        piVar2 = (int *)(*(int *)((int)register0x00000054 + -0x14) + 0xc);
        puVar3 = (undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + -1);
        puVar1 = *(undefined8 **)((int)register0x00000054 + -0x20);
        unaff_r8 = puVar3;
      }
      FUN_0009dbd4(1,1);
LAB_004b6d90:
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x88);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x4b6da8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*LinearResistance).Calc_temp @ 004b6ddc (size 140) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___LinearResistance__Calc_temp(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4b6e64;
    param_1 = FUN_0009bf64();
  }
  uVar1 = FUN_000afda8(param_1);
  FUN_000afca0(uVar1);
  k3c_internal_pkg_heater___LinearInterpolate__Interpolate();
                    /* WARNING: Could not recover jumptable at 0x004b6e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*LinearResistance).Calc_adc @ 004b6e74 (size 80) */

void k3c_internal_pkg_heater___LinearResistance__Calc_adc(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  double *in_stack_00000004;
  undefined8 in_stack_00000008;
  double in_stack_00000010;
  undefined8 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4b6ec0;
    FUN_0009bf64();
  }
  k3c_internal_pkg_heater___LinearInterpolate__Reverse_interpolate();
  in_stack_00000010 = uStack_8 / (*in_stack_00000004 + uStack_8);
                    /* WARNING: Could not recover jumptable at 0x004b6eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.NewCustomLinearResistance @ 004b6ec4 (size 1000) */

void k3c_internal_pkg_heater_NewCustomLinearResistance(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int extraout_r1;
  int iVar5;
  int extraout_r1_00;
  undefined4 uVar6;
  int *piVar7;
  int *extraout_r2;
  uint uVar8;
  uint extraout_r2_00;
  int extraout_r2_01;
  uint uVar9;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  undefined1 uVar11;
  undefined8 uVar12;
  
code_r0x004b6ec4:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar10 = (undefined1 *)((int)register0x00000054 + -0x70);
    *(undefined4 *)((int)register0x00000054 + -0x70) = unaff_lr;
    *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_004b72b0;
    FUN_00022cf8();
    uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
    uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x10) =
         *(undefined4 *)((int)register0x00000054 + -0x68);
    *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar4;
    *(undefined4 *)((int)register0x00000054 + -0x68) = uVar6;
    *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_004b72b4;
    *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
    *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x58) = 0xffffffff;
    FUN_0014f168();
    iVar1 = *(int *)((int)register0x00000054 + -0x50);
    uVar11 = iVar1 == 1;
    if (iVar1 != 0) {
      *(uint *)((int)register0x00000054 + -0x6c) =
           *(int *)((int)register0x00000054 + -0x54) +
           (1 - *(int *)((int)register0x00000054 + -0x4c) >> 0x1f & 8U);
      *(int *)((int)register0x00000054 + -0x68) = iVar1 + -1;
      *(int *)((int)register0x00000054 + -100) = *(int *)((int)register0x00000054 + -0x4c) + -1;
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_004b72b4;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
      FUN_0014f8fc();
      iVar1 = *(int *)((int)register0x00000054 + -0x58);
      piVar7 = *(int **)((int)register0x00000054 + -0x10);
      piVar7[1] = *(int *)((int)register0x00000054 + -0x54);
      if (*(int *)PTR_DAT_004b72b8 != 0) {
        FUN_0009db74();
        *unaff_r8 = extraout_r1;
        unaff_r8[1] = *extraout_r2;
        unaff_r8[2] = extraout_r2[2];
        iVar1 = extraout_r1;
        piVar7 = extraout_r2;
      }
      *piVar7 = iVar1;
      piVar7[3] = 0;
      piVar7[4] = 0;
      piVar7[2] = (int)PTR_DAT_004b72bc;
      iVar1 = 1;
      do {
        if (999 < iVar1) {
LAB_004b7258:
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_004b72d8;
          *(int **)((int)register0x00000054 + 0xc) = piVar7;
          return;
        }
        *(int *)((int)register0x00000054 + -0x28) = iVar1;
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(int *)((int)register0x00000054 + -0x6c) = iVar1;
        FUN_00020ce0();
        *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_004b72c0;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        *(undefined **)((int)register0x00000054 + -0x6c) =
             PTR_s_temperature_dmin_safe_tempmax_sa_008262d0_0x12df_004b72c4;
        *(undefined4 *)((int)register0x00000054 + -0x68) = 0xd;
        *(undefined1 **)((int)register0x00000054 + -100) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined4 *)((int)register0x00000054 + -0x60) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x58) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x50) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x48) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x40) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x38) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__GetfloatNone();
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        FUN_00020ce0();
        *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_004b72c0;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        *(undefined **)((int)register0x00000054 + -0x6c) =
             PTR_s_resistance_dchamber_temptemperat_008262d0_0x34d_004b72c8;
        *(undefined4 *)((int)register0x00000054 + -0x68) = 0xc;
        *(undefined1 **)((int)register0x00000054 + -100) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined4 *)((int)register0x00000054 + -0x60) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x58) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x50) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x48) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x40) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x38) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__GetfloatNone();
        puVar2 = *(undefined **)((int)register0x00000054 + -0x2c);
        uVar12 = CONCAT44(PTR_DAT_004b72cc,puVar2);
        if (puVar2 == (undefined *)0x0) {
          piVar7 = *(int **)((int)register0x00000054 + -0x10);
          goto LAB_004b7258;
        }
        uVar11 = puVar2 == PTR_DAT_004b72cc;
        if (!(bool)uVar11) goto LAB_004b727c;
        uVar11 = *(undefined **)((int)register0x00000054 + -0x34) == PTR_DAT_004b72cc;
        if (!(bool)uVar11) goto LAB_004b7268;
        *(undefined8 *)((int)register0x00000054 + -0x1c) =
             **(undefined8 **)((int)register0x00000054 + -0x14);
        *(undefined8 *)((int)register0x00000054 + -0x24) =
             **(undefined8 **)((int)register0x00000054 + -0x30);
        *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_004b72d0;
        FUN_00022cf8();
        puVar3 = *(undefined8 **)((int)register0x00000054 + -0x68);
        *puVar3 = *(undefined8 *)((int)register0x00000054 + -0x1c);
        puVar3[1] = *(undefined8 *)((int)register0x00000054 + -0x24);
        iVar5 = *(int *)((int)register0x00000054 + -0x10);
        uVar8 = *(uint *)(iVar5 + 0x10);
        uVar9 = *(int *)(iVar5 + 0xc) + 1;
        iVar1 = *(int *)(iVar5 + 8);
        if (uVar8 < uVar9) {
          *(undefined8 **)((int)register0x00000054 + -0xc) = puVar3;
          *(int *)((int)register0x00000054 + -0x6c) = iVar1;
          *(uint *)((int)register0x00000054 + -0x68) = uVar9;
          *(uint *)((int)register0x00000054 + -100) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
          *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_004b72d4;
          FUN_000987f4();
          iVar1 = *(int *)((int)register0x00000054 + -0x58);
          uVar9 = *(uint *)((int)register0x00000054 + -0x54);
          iVar5 = *(int *)((int)register0x00000054 + -0x10);
          *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)((int)register0x00000054 + -0x50);
          if (*(int *)PTR_DAT_004b72b8 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r1_00;
            unaff_r8[1] = *(int *)(extraout_r3 + 8);
            iVar1 = extraout_r1_00;
            uVar9 = extraout_r2_00;
            iVar5 = extraout_r3;
          }
          *(int *)(iVar5 + 8) = iVar1;
          puVar3 = *(undefined8 **)((int)register0x00000054 + -0xc);
          iVar5 = *(int *)((int)register0x00000054 + -0x10);
        }
        uVar12 = CONCAT44(iVar5,puVar3);
        *(uint *)(iVar5 + 0xc) = uVar9;
        iVar5 = uVar9 * 0xc + -0xc;
        *(undefined4 *)(iVar1 + iVar5 + 4) = 2;
        *(undefined4 *)(iVar1 + iVar5 + 8) = 2;
        if (*(int *)PTR_DAT_004b72b8 != 0) {
          uVar12 = FUN_0009db64();
          *unaff_r8 = (int)uVar12;
          unaff_r8[1] = *(int *)(iVar1 + extraout_r2_01);
          iVar5 = extraout_r2_01;
        }
        piVar7 = (int *)((ulonglong)uVar12 >> 0x20);
        *(int *)(iVar1 + iVar5) = (int)uVar12;
        iVar1 = *(int *)((int)register0x00000054 + -0x28) + 1;
      } while( true );
    }
    goto LAB_004b7290;
  }
  goto LAB_004b72a0;
LAB_004b7268:
  *(undefined **)((int)register0x00000054 + -0x6c) =
       *(undefined **)((int)register0x00000054 + -0x34);
  *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_004b72cc;
  *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_004b72dc;
  uVar12 = FUN_000209b4();
LAB_004b727c:
  *(undefined8 *)((int)register0x00000054 + -0x6c) = uVar12;
  *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_004b72dc;
  FUN_000209b4();
LAB_004b7290:
  param_1 = FUN_0009dc34(1,0);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x70);
  if ((bool)uVar11) {
    register0x00000054 = (BADSPACEBASE *)puVar10;
  }
LAB_004b72a0:
  unaff_lr = 0x4b72a8;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x004b6ec4;
}



/* k3c/internal/pkg/heater.(*CustomLinearResistance).Get_name @ 004b72e0 (size 24) */

void k3c_internal_pkg_heater___CustomLinearResistance__Get_name(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = *in_stack_00000004;
  uStack0000000c = in_stack_00000004[1];
                    /* WARNING: Could not recover jumptable at 0x004b72f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*CustomLinearResistance).Create @ 004b72f8 (size 196) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___CustomLinearResistance__Create(void)

{
  undefined4 uVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4b73b8;
    FUN_0009bf64();
  }
  uVar1 = *(undefined4 *)(in_stack_00000004 + 0x10);
  k3c_internal_pkg_heater_NewLinearResistance();
  if (uStack_14 != 0) {
    k3c_internal_pkg_logger_Error();
  }
  k3c_internal_pkg_heater_NewPrinterADCtoTemperature();
  in_stack_0000000c = _UNK_004b73c4;
  in_stack_00000010 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x004b73ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.Calc_ina826_pt100 @ 004b73c8 (size 800) */

void k3c_internal_pkg_heater_Calc_ina826_pt100(undefined4 param_1)

{
  int iVar1;
  double *pdVar2;
  undefined8 *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar7;
  uint extraout_r3;
  int extraout_r3_00;
  undefined4 uVar8;
  int iVar9;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  undefined1 uVar11;
  uint in_fpscr;
  double dVar12;
  undefined8 uVar13;
  uint unaff_s30;
  undefined8 uVar14;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x60) = unaff_lr;
      uVar4 = 0;
      piVar5 = (int *)0x0;
      uVar7 = 0;
      iVar1 = 0;
      while (iVar1 < 500) {
        *(int *)((int)register0x00000054 + -0x38) = iVar1;
        *(uint *)((int)register0x00000054 + -0x24) = uVar7;
        *(int **)((int)register0x00000054 + -0x10) = piVar5;
        *(uint *)((int)register0x00000054 + -0x1c) = uVar4;
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_004b76ec;
        FUN_00022cf8();
        pdVar2 = *(double **)((int)register0x00000054 + -0x58);
        uVar7 = *(uint *)((int)register0x00000054 + -0x38);
        unaff_s30 = unaff_s30 & 0xffff0000 | uVar7 & 0xffff;
        dVar12 = (double)VectorSignedToFloat(unaff_s30,(byte)(in_fpscr >> 0x16) & 3);
        *pdVar2 = dVar12;
        pdVar2[1] = (*(double *)PTR_DAT_004b76f0 * dVar12 + 1.0 +
                    dVar12 * *(double *)PTR_DAT_004b76f4 * dVar12) * *(double *)PTR_DAT_004b76f8;
        uVar6 = *(int *)((int)register0x00000054 + -0x24) + 1;
        uVar4 = *(uint *)((int)register0x00000054 + -0x1c);
        if (uVar4 < uVar6) {
          *(double **)((int)register0x00000054 + -4) = pdVar2;
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          *(uint *)((int)register0x00000054 + -0x58) = uVar6;
          *(uint *)((int)register0x00000054 + -0x54) = uVar4;
          *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
          *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004b76fc;
          FUN_000987f4();
          piVar5 = *(int **)((int)register0x00000054 + -0x48);
          uVar6 = *(uint *)((int)register0x00000054 + -0x44);
          uVar4 = *(uint *)((int)register0x00000054 + -0x40);
          pdVar2 = *(double **)((int)register0x00000054 + -4);
          uVar7 = *(uint *)((int)register0x00000054 + -0x38);
        }
        else {
          piVar5 = *(int **)((int)register0x00000054 + -0x10);
        }
        uVar14 = CONCAT44(uVar7,pdVar2);
        piVar5[uVar6 * 3 + -2] = 2;
        piVar5[uVar6 * 3 + -1] = 2;
        uVar7 = uVar6;
        if (*(int *)PTR_DAT_004b7700 != 0) {
          uVar14 = FUN_0009db64();
          *unaff_r8 = (int)uVar14;
          unaff_r8[1] = piVar5[uVar6 * 3 + -3];
          uVar13 = *(undefined8 *)PTR_DAT_004b76f8;
          uVar13 = *(undefined8 *)PTR_DAT_004b76f0;
          uVar13 = *(undefined8 *)PTR_DAT_004b76f4;
          uVar7 = extraout_r2;
          uVar4 = extraout_r3;
        }
        piVar5[uVar6 * 3 + -3] = (int)uVar14;
        iVar1 = (int)((ulonglong)uVar14 >> 0x20) + 10;
      }
      uVar4 = 0;
      iVar1 = 0;
      uVar8 = 0;
      while( true ) {
        if ((int)uVar7 < 1) {
          *(int *)((int)register0x00000054 + 4) = iVar1;
          *(undefined4 *)((int)register0x00000054 + 8) = uVar8;
          *(uint *)((int)register0x00000054 + 0xc) = uVar4;
          return;
        }
        uVar6 = piVar5[1];
        uVar11 = 1;
        if (uVar6 == 0) goto LAB_004b76cc;
        uVar11 = uVar6 == 1;
        if (uVar6 < 2) break;
        *(int *)((int)register0x00000054 + -0xc) = iVar1;
        *(uint *)((int)register0x00000054 + -0x14) = uVar7;
        *(int **)((int)register0x00000054 + -8) = piVar5;
        *(uint *)((int)register0x00000054 + -0x18) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x20) = uVar8;
        puVar3 = (undefined8 *)*piVar5;
        *(undefined8 *)((int)register0x00000054 + -0x34) = *puVar3;
        *(undefined8 *)((int)register0x00000054 + -0x2c) = puVar3[1];
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_004b76ec;
        FUN_00022cf8();
        puVar3 = *(undefined8 **)((int)register0x00000054 + -0x58);
        *puVar3 = *(undefined8 *)((int)register0x00000054 + -0x34);
        uVar7 = *(int *)((int)register0x00000054 + -0x20) + 1;
        puVar3[1] = (*(double *)PTR_DAT_004b7704 * *(double *)((int)register0x00000054 + -0x2c)) /
                    (*(double *)PTR_DAT_004b7708 + *(double *)((int)register0x00000054 + -0x2c));
        uVar4 = *(uint *)((int)register0x00000054 + -0x18);
        if (uVar4 < uVar7) {
          *(undefined8 **)((int)register0x00000054 + -4) = puVar3;
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0xc);
          *(uint *)((int)register0x00000054 + -0x58) = uVar7;
          *(uint *)((int)register0x00000054 + -0x54) = uVar4;
          *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
          *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004b76fc;
          FUN_000987f4();
          iVar1 = *(int *)((int)register0x00000054 + -0x48);
          uVar7 = *(uint *)((int)register0x00000054 + -0x44);
          uVar4 = *(uint *)((int)register0x00000054 + -0x40);
          puVar3 = *(undefined8 **)((int)register0x00000054 + -4);
        }
        else {
          iVar1 = *(int *)((int)register0x00000054 + -0xc);
        }
        uVar14 = CONCAT44(uVar7,puVar3);
        iVar9 = uVar7 * 0xc + -0xc;
        *(undefined4 *)(iVar1 + iVar9 + 4) = 2;
        *(undefined4 *)(iVar1 + iVar9 + 8) = 2;
        if (*(int *)PTR_DAT_004b7700 != 0) {
          uVar14 = FUN_0009db64();
          *unaff_r8 = (int)uVar14;
          unaff_r8[1] = *(undefined4 *)(extraout_r3_00 + iVar9);
          uVar13 = *(undefined8 *)PTR_DAT_004b7704;
          uVar13 = *(undefined8 *)PTR_DAT_004b7708;
          uVar4 = extraout_r2_00;
          iVar1 = extraout_r3_00;
        }
        uVar8 = (undefined4)((ulonglong)uVar14 >> 0x20);
        *(int *)(iVar1 + iVar9) = (int)uVar14;
        piVar5 = (int *)(*(int *)((int)register0x00000054 + -8) + 0xc);
        uVar7 = *(int *)((int)register0x00000054 + -0x14) - 1;
      }
      FUN_0009dbd4(1,1);
LAB_004b76cc:
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x60);
      if ((bool)uVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x4b76e4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.Load_config_adc_temperature @ 004b770c (size 748) */

void k3c_internal_pkg_heater_Load_config_adc_temperature(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  bool bVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0x70) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 **)((int)register0x00000054 + -0x68) =
           *(undefined4 **)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -100) =
           PTR_s_heaterstmc2209adxl345buttonsled__008216f7_0x506_004b79fc;
      *(undefined4 *)((int)register0x00000054 + -0x60) = 7;
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_004b7a00;
      *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_004b7a04;
      k3c_internal_pkg_printer___Printer__Load_object();
      bVar6 = *(undefined **)((int)register0x00000054 + -0x54) == PTR_DAT_004b7a08;
      if (bVar6) {
        iVar1 = *(int *)PTR_DAT_004b7a0c;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        iVar4 = *(int *)PTR_DAT_004b7a10;
        while (0 < iVar4) {
          *(int *)((int)register0x00000054 + -0x34) = iVar4;
          *(int *)((int)register0x00000054 + -8) = iVar1;
          FUN_0009e2f0(iVar1,iVar1,(undefined1 *)((int)register0x00000054 + -0x20));
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_004b7a14;
          FUN_00022cf8();
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x68);
          *puVar2 = PTR_k3c_internal_pkg_heater_Load_config_adc_temperature_func1_004b7a18;
          puVar2[2] = *(undefined4 *)((int)register0x00000054 + -0x40);
          puVar2[3] = *(undefined4 *)((int)register0x00000054 + -0x38);
          if (*(int *)PTR_DAT_004b7a1c == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x24);
          }
          else {
            puVar2 = (undefined4 *)FUN_0009db54();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x24);
            *unaff_r8 = uVar3;
          }
          *(undefined4 **)((int)register0x00000054 + -0xc) = puVar2;
          puVar2[1] = uVar3;
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 4);
          *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_004b7a20;
          *(undefined4 *)((int)register0x00000054 + -0x68) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          FUN_00093a08(puVar2);
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x5c);
          *puVar2 = PTR_DAT_004b7a24;
          if (*(int *)PTR_DAT_004b7a1c == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0xc);
          }
          else {
            puVar2 = (undefined4 *)FUN_0009db64();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0xc);
            *unaff_r8 = uVar3;
            unaff_r8[1] = puVar2[1];
          }
          puVar2[1] = uVar3;
          iVar1 = *(int *)((int)register0x00000054 + -8) + 0x14;
          iVar4 = *(int *)((int)register0x00000054 + -0x34) + -1;
        }
        iVar1 = *(int *)PTR_DAT_004b7a28;
        iVar4 = *(int *)PTR_DAT_004b7a2c;
        while (0 < iVar4) {
          *(int *)((int)register0x00000054 + -0x34) = iVar4;
          *(int *)((int)register0x00000054 + -8) = iVar1;
          FUN_0009e2f0(iVar1,iVar1,(undefined1 *)((int)register0x00000054 + -0x20));
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_004b7a14;
          FUN_00022cf8();
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x68);
          *puVar2 = PTR_k3c_internal_pkg_heater_Load_config_adc_temperature_func2_004b7a30;
          puVar2[2] = *(undefined4 *)((int)register0x00000054 + -0x44);
          puVar2[3] = *(undefined4 *)((int)register0x00000054 + -0x3c);
          if (*(int *)PTR_DAT_004b7a1c == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x28);
          }
          else {
            puVar2 = (undefined4 *)FUN_0009db54();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x28);
            *unaff_r8 = uVar3;
          }
          *(undefined4 **)((int)register0x00000054 + -0xc) = puVar2;
          puVar2[1] = uVar3;
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 4);
          *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_004b7a20;
          *(undefined4 *)((int)register0x00000054 + -0x68) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + -0x4c);
          FUN_00093a08(puVar2);
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x5c);
          *puVar2 = PTR_DAT_004b7a34;
          if (*(int *)PTR_DAT_004b7a1c == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0xc);
          }
          else {
            puVar2 = (undefined4 *)FUN_0009db64();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0xc);
            *unaff_r8 = uVar3;
            unaff_r8[1] = puVar2[1];
          }
          puVar2[1] = uVar3;
          iVar1 = *(int *)((int)register0x00000054 + -8) + 0x14;
          iVar4 = *(int *)((int)register0x00000054 + -0x34) + -1;
        }
        *(undefined4 *)((int)register0x00000054 + 8) = 0;
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
                    /* WARNING: Could not recover jumptable at 0x004b79d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x70))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x6c) =
           *(undefined **)((int)register0x00000054 + -0x54);
      *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_004b7a08;
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_004b7a38;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x70);
      if (bVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x4b79f4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.Load_config_adc_temperature.func2 @ 004b7a3c (size 208) */

void k3c_internal_pkg_heater_Load_config_adc_temperature_func2(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int iStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  k3c_internal_pkg_heater_NewLinearResistance();
  if (iStack_14 != 0) {
    k3c_internal_pkg_logger_Error();
  }
  k3c_internal_pkg_heater_NewPrinterADCtoTemperature();
  return;
}



/* k3c/internal/pkg/heater.Load_config_adc_temperature.func1 @ 004b7b14 (size 224) */

void k3c_internal_pkg_heater_Load_config_adc_temperature_func1(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int iStack_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  k3c_internal_pkg_heater_NewLinearVoltage();
  if (iStack_18 != 0) {
    k3c_internal_pkg_logger_Error();
  }
  k3c_internal_pkg_heater_NewPrinterADCtoTemperature();
  return;
}



/* k3c/internal/pkg/heater.Load_config_prefix_customLinear @ 004b7bfc (size 484) */

void k3c_internal_pkg_heater_Load_config_prefix_customLinear(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  bool bVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_004b7de4;
      *(undefined4 *)((int)register0x00000054 + -0x30) = 0xb;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x24) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Get();
      if (*(int *)((int)register0x00000054 + -0x20) == 0) {
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + 4);
        k3c_internal_pkg_heater_NewCustomLinearVoltage();
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x34);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x30);
      }
      else {
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + 4);
        k3c_internal_pkg_heater_NewCustomLinearResistance();
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x34);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x30);
      }
      *(undefined4 *)((int)register0x00000054 + -0x14) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0xc) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 **)((int)register0x00000054 + -0x34) =
           *(undefined4 **)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x30) =
           PTR_s_heaterstmc2209adxl345buttonsled__008216f7_0x506_004b7de8;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 7;
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_004b7dec;
      *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_004b7df0;
      k3c_internal_pkg_printer___Printer__Load_object();
      bVar6 = *(undefined **)((int)register0x00000054 + -0x20) == PTR_DAT_004b7df4;
      if (bVar6) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        pcVar4 = *(code **)(*(int *)((int)register0x00000054 + -0x14) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        (*pcVar4)();
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004b7df8;
        FUN_00022cf8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x34);
        *puVar2 = PTR_k3c_internal_pkg_heater_ICustomLinear_Create_fm_004b7dfc;
        puVar2[1] = *(undefined4 *)((int)register0x00000054 + -0x14);
        if (*(int *)PTR_DAT_004b7e00 == 0) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0xc);
        }
        else {
          puVar2 = (undefined4 *)FUN_0009db54();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *unaff_r8 = uVar1;
        }
        *(undefined4 **)((int)register0x00000054 + -8) = puVar2;
        puVar2[2] = uVar1;
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 4);
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004b7e04;
        *(undefined4 *)((int)register0x00000054 + -0x34) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        FUN_00093a08();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x28);
        *puVar2 = PTR_DAT_004b7e08;
        if (*(int *)PTR_DAT_004b7e00 == 0) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
        }
        else {
          puVar2 = (undefined4 *)FUN_0009db64();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
          *unaff_r8 = uVar1;
          unaff_r8[1] = puVar2[1];
        }
        puVar2[1] = uVar1;
        *(undefined4 *)((int)register0x00000054 + 8) = 0;
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x38) =
           *(undefined **)((int)register0x00000054 + -0x20);
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_004b7df4;
      *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004b7e0c;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x3c);
      if (bVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x4b7ddc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.NewHeater @ 004b7e10 (size 4068) */

void k3c_internal_pkg_heater_NewHeater(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 *extraout_r1;
  uint uVar6;
  int iVar7;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 *puVar8;
  undefined4 *extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  undefined4 extraout_r2_04;
  undefined4 extraout_r2_05;
  int extraout_r2_06;
  undefined4 *extraout_r2_07;
  undefined *extraout_r2_08;
  undefined *extraout_r2_09;
  undefined *puVar9;
  undefined *extraout_r2_10;
  undefined4 uVar10;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 *extraout_r3_01;
  undefined4 *extraout_r3_02;
  undefined *puVar11;
  undefined4 uVar12;
  int iVar13;
  undefined *puVar14;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar15;
  undefined4 unaff_lr;
  undefined1 uVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x134)) {
      puVar15 = (undefined1 *)((int)register0x00000054 + -0x1b4);
      *(undefined4 *)((int)register0x00000054 + -0x1b4) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x1b0) = DAT_004b88b4;
      FUN_00022cf8();
      puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1ac);
      puVar8 = *(undefined4 **)((int)register0x00000054 + 4);
      uVar10 = *puVar8;
      if (*DAT_004b88b8 != 0) {
        FUN_0009db54();
        *unaff_r8 = extraout_r3;
        puVar5 = extraout_r1;
        puVar8 = extraout_r2;
        uVar10 = extraout_r3;
      }
      *puVar5 = uVar10;
      uVar19 = CONCAT44(puVar5,puVar8[4]);
      uVar10 = puVar8[3];
      puVar5[2] = puVar8[4];
      if (*DAT_004b88b8 != 0) {
        uVar19 = FUN_0009db54();
        *unaff_r8 = extraout_r3_00;
        uVar10 = extraout_r3_00;
      }
      iVar13 = (int)((ulonglong)uVar19 >> 0x20);
      *(int *)((int)register0x00000054 + -0x128) = iVar13;
      *(undefined4 *)(iVar13 + 4) = uVar10;
      *(undefined4 *)((int)register0x00000054 + -0x1b0) = uVar10;
      *(int *)((int)register0x00000054 + -0x1ac) = (int)uVar19;
      FUN_0014f3e0();
      uVar6 = *(uint *)((int)register0x00000054 + -0x1a4);
      uVar1 = uVar6 - 1;
      uVar16 = uVar6 == uVar1;
      if (uVar1 < uVar6) {
        uVar10 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1a8) + uVar1 * 8 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x13c) = uVar10;
        uVar19 = CONCAT44(*(int *)((int)register0x00000054 + -0x128),
                          *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1a8) + uVar1 * 8));
        *(undefined4 *)(*(int *)((int)register0x00000054 + -0x128) + 0x10) = uVar10;
        if (*DAT_004b88b8 != 0) {
          uVar19 = FUN_0009db64();
          *unaff_r8 = (int)uVar19;
          unaff_r8[1] = *(undefined4 *)((int)((ulonglong)uVar19 >> 0x20) + 0xc);
        }
        iVar13 = (int)((ulonglong)uVar19 >> 0x20);
        *(int *)((int)register0x00000054 + -4) = (int)uVar19;
        *(int *)(iVar13 + 0xc) = (int)uVar19;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
        uVar10 = *(undefined4 *)(iVar13 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x1b0) = *(undefined4 *)(iVar13 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x1ac) = uVar10;
        FUN_0008f77c();
        *(int *)((int)register0x00000054 + -0x14) = DAT_004b88bc;
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x1a8);
        *(undefined4 *)((int)register0x00000054 + -0x1b0) = DAT_004b88c0;
        *(undefined4 *)((int)register0x00000054 + -0x1ac) = 0xe;
        *(undefined1 **)((int)register0x00000054 + -0x1a8) =
             (undefined1 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x1a4) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x1a0) = 1;
        k3c_internal_pkg_logger_Debugf();
        uVar10 = FUN_0009df00(0,(undefined1 *)((int)register0x00000054 + -0x60));
        puVar5 = *(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x60) = *puVar5;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = puVar5[1];
        *(undefined4 *)((int)register0x00000054 + -0x58) = puVar5[2];
        *(undefined4 *)((int)register0x00000054 + -0x50) = 8;
        *(undefined **)((int)register0x00000054 + -0x54) =
             PTR_s_extruder_s__s__sINIT_TMCstepper__008216f7_0x131d_004b88c4;
        FUN_0009df00(uVar10,(undefined1 *)((int)register0x00000054 + -0x74),8,puVar5);
        *(undefined4 *)((int)register0x00000054 + -0x74) = *extraout_r3_01;
        *(undefined4 *)((int)register0x00000054 + -0x70) = extraout_r3_01[1];
        *(undefined4 *)((int)register0x00000054 + -0x6c) = extraout_r3_01[2];
        *(undefined4 *)((int)register0x00000054 + -100) = 10;
        *(undefined **)((int)register0x00000054 + -0x68) =
             PTR_s_heater_bedforce_movegcode_arcsst_00823504_0xed6_004b88c8;
        puVar11 = *(undefined **)((int)register0x00000054 + 8);
        uVar16 = 0;
        puVar14 = PTR_DAT_004b88cc;
        if (puVar11 == PTR_DAT_004b88cc) {
          if (*DAT_004b88b8 == 0) {
            uVar12 = *(undefined4 *)((int)register0x00000054 + 0xc);
            iVar13 = *(int *)((int)register0x00000054 + -0x128);
            uVar10 = extraout_r2_00;
            puVar5 = extraout_r3_01;
          }
          else {
            FUN_0009db64();
            uVar12 = *(undefined4 *)((int)register0x00000054 + 0xc);
            *unaff_r8 = uVar12;
            iVar13 = *(int *)((int)register0x00000054 + -0x128);
            unaff_r8[1] = *(undefined4 *)(iVar13 + 0x14);
            uVar10 = extraout_r2_01;
            puVar5 = extraout_r3_02;
          }
          *(undefined4 *)(iVar13 + 0x14) = uVar12;
          *(undefined4 **)((int)register0x00000054 + -0x1b0) = puVar5;
          *(undefined **)((int)register0x00000054 + -0x1ac) =
               PTR_s_min_tempmax_tempgcode_ideraseing_008216f7_0x145d_004b88d0;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = uVar10;
          *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_004b88d4;
          *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_SUB_004b88d8;
          *(undefined8 *)((int)register0x00000054 + -0x19c) = *(undefined8 *)PTR_DAT_004b88dc;
          *(undefined8 *)((int)register0x00000054 + -0x194) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x18c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x184) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x17c) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          uVar19 = *(undefined8 *)((int)register0x00000054 + -0x178);
          *(undefined8 *)(*(int *)((int)register0x00000054 + -0x128) + 0x18) = uVar19;
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined **)((int)register0x00000054 + -0x1ac) =
               PTR_s_max_tempgcode_ideraseingerr_code_008216f7_0x1465_004b88e0;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 8;
          *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_004b88d4;
          *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_SUB_004b88e4;
          *(undefined8 *)((int)register0x00000054 + -0x19c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x194) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x18c) = uVar19;
          *(undefined8 *)((int)register0x00000054 + -0x184) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x17c) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          iVar13 = *(int *)((int)register0x00000054 + -0x128);
          *(undefined8 *)(iVar13 + 0x30) = *(undefined8 *)((int)register0x00000054 + -0x178);
          *(undefined8 *)((int)register0x00000054 + -0x148) = *(undefined8 *)(iVar13 + 0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + -0x148);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) =
               *(undefined4 *)((int)register0x00000054 + -0x144);
          FUN_0008f6c0();
          uVar10 = *(undefined4 *)((int)register0x00000054 + -0x1a8);
          uVar19 = *(undefined8 *)(*(int *)((int)register0x00000054 + -0x128) + 0x30);
          uVar18 = *(undefined8 *)(*(int *)((int)register0x00000054 + -0x128) + 0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined **)((int)register0x00000054 + -0x1ac) =
               PTR_s_min_safe_tempmax_safe_tempmax_he_008262d0_0x12ec_004b88e8;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0xd;
          *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_004b88ec;
          *(undefined4 *)((int)register0x00000054 + -0x1a0) = uVar10;
          *(undefined8 *)((int)register0x00000054 + -0x19c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x194) = uVar19;
          *(undefined8 *)((int)register0x00000054 + -0x18c) = uVar18;
          *(undefined8 *)((int)register0x00000054 + -0x184) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x17c) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          iVar13 = *(int *)((int)register0x00000054 + -0x128);
          *(undefined8 *)(iVar13 + 0x20) = *(undefined8 *)((int)register0x00000054 + -0x178);
          *(undefined8 *)((int)register0x00000054 + -0x150) = *(undefined8 *)(iVar13 + 0x30);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + -0x150);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) =
               *(undefined4 *)((int)register0x00000054 + -0x14c);
          FUN_0008f6c0();
          uVar10 = *(undefined4 *)((int)register0x00000054 + -0x1a8);
          uVar19 = *(undefined8 *)(*(int *)((int)register0x00000054 + -0x128) + 0x30);
          uVar18 = *(undefined8 *)(*(int *)((int)register0x00000054 + -0x128) + 0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined **)((int)register0x00000054 + -0x1ac) =
               PTR_s_max_safe_tempmax_heat_time_s___1_008262d0_0x12f9_004b88f0;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0xd;
          *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_004b88ec;
          *(undefined4 *)((int)register0x00000054 + -0x1a0) = uVar10;
          *(undefined8 *)((int)register0x00000054 + -0x19c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x194) = uVar19;
          *(undefined8 *)((int)register0x00000054 + -0x18c) = uVar18;
          *(undefined8 *)((int)register0x00000054 + -0x184) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x17c) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          *(undefined8 *)(*(int *)((int)register0x00000054 + -0x128) + 0x28) =
               *(undefined8 *)((int)register0x00000054 + -0x178);
          *(undefined1 **)((int)register0x00000054 + -0x1b0) =
               (undefined1 *)((int)register0x00000054 + -0x60);
          *(undefined **)((int)register0x00000054 + -0x1ac) = PTR_DAT_004b88f4;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0x12;
          *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_004b88ec;
          *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_004b88f8;
          *(undefined8 *)((int)register0x00000054 + -0x19c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x194) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x18c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x184) = 0;
          puVar14 = (undefined *)0x1;
          *(undefined1 *)((int)register0x00000054 + -0x17c) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          *(undefined8 *)(*(int *)((int)register0x00000054 + -0x128) + 0xac) =
               *(undefined8 *)((int)register0x00000054 + -0x178);
          *(undefined1 **)((int)register0x00000054 + -0x1b0) =
               (undefined1 *)((int)register0x00000054 + -0x60);
          *(undefined **)((int)register0x00000054 + -0x1ac) =
               PTR_s_max_tempgcode_ideraseingerr_code_008216f7_0x1465_004b88e0;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 8;
          *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_004b88ec;
          *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_004b88fc;
          *(undefined8 *)((int)register0x00000054 + -0x19c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x194) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x18c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x184) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x17c) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          iVar13 = *(int *)((int)register0x00000054 + -0x128);
          *(undefined8 *)(iVar13 + 0xb4) = *(undefined8 *)((int)register0x00000054 + -0x178);
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x24),iVar13);
          *(undefined8 *)((int)register0x00000054 + -0x158) = *(undefined8 *)(extraout_r2_02 + 0xac)
          ;
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + -0x158);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) =
               *(undefined4 *)((int)register0x00000054 + -0x154);
          FUN_0008f6c0();
          *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_004b88ec;
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x1a8);
          *(undefined8 *)((int)register0x00000054 + -0x160) =
               *(undefined8 *)(*(int *)((int)register0x00000054 + -0x128) + 0xb4);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + -0x160);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) =
               *(undefined4 *)((int)register0x00000054 + -0x15c);
          FUN_0008f6c0();
          *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_004b88ec;
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x1a8);
          *(undefined **)((int)register0x00000054 + -0x1b0) = PTR_DAT_004b8900;
          *(undefined4 *)((int)register0x00000054 + -0x1ac) = 0x2c;
          *(undefined1 **)((int)register0x00000054 + -0x1a8) =
               (undefined1 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -0x1a4) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x1a0) = 2;
          k3c_internal_pkg_logger_Debugf();
          *(undefined1 **)((int)register0x00000054 + -0x1b0) =
               (undefined1 *)((int)register0x00000054 + -0x74);
          *(undefined **)((int)register0x00000054 + -0x1ac) = PTR_DAT_004b88f4;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0x12;
          *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_004b88ec;
          *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_004b8904;
          *(undefined8 *)((int)register0x00000054 + -0x19c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x194) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x18c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x184) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x17c) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          *(undefined8 *)(*(int *)((int)register0x00000054 + -0x128) + 0xbc) =
               *(undefined8 *)((int)register0x00000054 + -0x178);
          *(undefined1 **)((int)register0x00000054 + -0x1b0) =
               (undefined1 *)((int)register0x00000054 + -0x74);
          *(undefined **)((int)register0x00000054 + -0x1ac) =
               PTR_s_max_tempgcode_ideraseingerr_code_008216f7_0x1465_004b88e0;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 8;
          *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_004b88ec;
          *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_004b8908;
          *(undefined8 *)((int)register0x00000054 + -0x19c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x194) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x18c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x184) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x17c) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          iVar13 = *(int *)((int)register0x00000054 + -0x128);
          *(undefined8 *)(iVar13 + 0xc4) = *(undefined8 *)((int)register0x00000054 + -0x178);
          uVar19 = *(undefined8 *)(iVar13 + 0x18);
          uVar18 = *(undefined8 *)(iVar13 + 0x30);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = *(undefined4 *)(iVar13 + 0x14);
          *(undefined8 *)((int)register0x00000054 + -0x1ac) = uVar19;
          *(undefined8 *)((int)register0x00000054 + -0x1a4) = uVar18;
          k3c_internal_pkg_heater___PrinterADCtoTemperature__Setup_minmax();
          *(undefined4 *)((int)register0x00000054 + -300) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -0x128) + 0x14);
          *(undefined **)((int)register0x00000054 + -0x1b0) = PTR_DAT_004b890c;
          FUN_00022cf8();
          puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1ac);
          *puVar5 = PTR_k3c_internal_pkg_heater___Heater__Temperature_callback_fm_004b8910;
          if (*DAT_004b88b8 == 0) {
            uVar10 = *(undefined4 *)((int)register0x00000054 + -0x128);
          }
          else {
            puVar5 = (undefined4 *)FUN_0009db54();
            uVar10 = *(undefined4 *)((int)register0x00000054 + -0x128);
            *unaff_r8 = uVar10;
          }
          uVar19 = CONCAT44(uVar10,puVar5);
          puVar5[1] = uVar10;
          iVar13 = *(int *)((int)register0x00000054 + -300);
          if (*DAT_004b88b8 != 0) {
            uVar19 = FUN_0009db64();
            *unaff_r8 = (int)uVar19;
            unaff_r8[1] = *(undefined4 *)(extraout_r2_03 + 0x10);
            iVar13 = extraout_r2_03;
          }
          iVar7 = (int)((ulonglong)uVar19 >> 0x20);
          *(int *)(iVar13 + 0x10) = (int)uVar19;
          *(undefined8 *)(iVar7 + 0x38) = *(undefined8 *)(*(int *)(iVar7 + 0x14) + 0x14);
          uVar19 = *(undefined8 *)(iVar7 + 0x18);
          uVar18 = *(undefined8 *)(iVar7 + 0x30);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined **)((int)register0x00000054 + -0x1ac) = PTR_DAT_004b8914;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0x10;
          *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_004b88ec;
          *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_004b8918;
          *(undefined8 *)((int)register0x00000054 + -0x19c) = uVar19;
          *(undefined8 *)((int)register0x00000054 + -0x194) = uVar18;
          *(undefined8 *)((int)register0x00000054 + -0x18c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x184) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x17c) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          dVar17 = *(double *)((int)register0x00000054 + -0x178);
          piVar2 = *(int **)((int)register0x00000054 + -0x128);
          *(double *)(piVar2 + 0x10) = dVar17;
          if (0.0 < dVar17) {
            iVar13 = *piVar2;
            *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
            uVar10 = *(undefined4 *)(iVar13 + 8);
            *(undefined **)((int)register0x00000054 + -0x1b0) = PTR_DAT_004b891c;
            *(undefined4 *)((int)register0x00000054 + -0x1ac) = uVar10;
            *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_004b8920;
            *(undefined4 *)((int)register0x00000054 + -0x1a4) = 0xb;
            FUN_00093560();
            uVar10 = (*(undefined4 **)((int)register0x00000054 + -0x1a0))[1];
            uVar16 = *(undefined1 *)((int)register0x00000054 + -0x19c);
            *(undefined4 *)((int)register0x00000054 + -0x2c) =
                 **(undefined4 **)((int)register0x00000054 + -0x1a0);
            *(undefined4 *)((int)register0x00000054 + -0x28) = uVar10;
            piVar2 = *(int **)((int)register0x00000054 + -0x128);
          }
          else {
            uVar16 = 1;
          }
          *(undefined1 *)(piVar2 + 0x12) = uVar16;
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined **)((int)register0x00000054 + -0x1ac) =
               PTR_s_max_poweroff_belowpwm_tableFORBI_00823504_0x5ae_004b8924;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 9;
          *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_004b88ec;
          *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_004b8928;
          *(undefined8 *)((int)register0x00000054 + -0x19c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x194) = 0x3ff0000000000000;
          *(undefined8 *)((int)register0x00000054 + -0x18c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x184) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x17c) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          *(undefined8 *)(*(int *)((int)register0x00000054 + -0x128) + 0x4c) =
               *(undefined8 *)((int)register0x00000054 + -0x178);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined **)((int)register0x00000054 + -0x1ac) = PTR_DAT_004b892c;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0xb;
          *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_004b88ec;
          *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_004b8930;
          *(undefined8 *)((int)register0x00000054 + -0x19c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x194) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x18c) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x184) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x17c) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          dVar17 = *(double *)((int)register0x00000054 + -0x178);
          iVar13 = *(int *)((int)register0x00000054 + -0x128);
          *(double *)(iVar13 + 0x54) = dVar17;
          *(double *)(iVar13 + 0x5c) = 1.0 / dVar17;
          *(undefined8 *)(iVar13 + 0xcc) = *(undefined8 *)PTR_DAT_004b8934;
          *(undefined4 *)(iVar13 + 100) = 0;
          *(undefined4 *)(iVar13 + 0x68) = 0;
          *(undefined8 *)(iVar13 + 0x6c) = 0;
          *(undefined8 *)(iVar13 + 0x74) = 0;
          *(undefined8 *)(iVar13 + 0x7c) = 0;
          *(undefined8 *)(iVar13 + 0x84) = 0;
          *(undefined8 *)(iVar13 + 0x8c) = 0;
          *(undefined8 *)(iVar13 + 0x94) = 0;
          uVar10 = FUN_0009def8(0,(undefined1 *)((int)register0x00000054 + -0x90));
          FUN_0009de88(uVar10,(undefined1 *)((int)register0x00000054 + -0x11c));
          *(undefined1 **)((int)register0x00000054 + -0x84) =
               (undefined1 *)((int)register0x00000054 + -0x11c);
          FUN_0006aa3c();
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + -0x1b0);
          *(int *)((int)register0x00000054 + -0x2c) = DAT_004b88bc;
          *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_004b8938;
          *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_004b893c;
          *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004b8940;
          *(undefined **)((int)register0x00000054 + -0x1b0) = PTR_DAT_004b8944;
          *(undefined1 **)((int)register0x00000054 + -0x1ac) =
               (undefined1 *)((int)register0x00000054 + -0x90);
          puVar11 = (undefined *)((int)register0x00000054 + -0x2c);
          *(undefined **)((int)register0x00000054 + -0x1a8) = puVar11;
          FUN_00090d70();
          puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1a4);
          uVar10 = *(undefined4 *)((int)register0x00000054 + -0x30);
          *puVar5 = *(undefined4 *)((int)register0x00000054 + -0x34);
          if (*DAT_004b88b8 != 0) {
            puVar5 = (undefined4 *)FUN_0009db64();
            *unaff_r8 = extraout_r2_04;
            unaff_r8[1] = puVar5[1];
            uVar10 = extraout_r2_04;
          }
          puVar5[1] = uVar10;
          *(int *)((int)register0x00000054 + -0x34) = DAT_004b88bc;
          *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004b8948;
          *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_004b893c;
          *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_004b894c;
          *(undefined **)((int)register0x00000054 + -0x1b0) = PTR_DAT_004b8944;
          *(undefined1 **)((int)register0x00000054 + -0x1ac) =
               (undefined1 *)((int)register0x00000054 + -0x90);
          *(undefined1 **)((int)register0x00000054 + -0x1a8) =
               (undefined1 *)((int)register0x00000054 + -0x34);
          FUN_00090d70();
          puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1a4);
          uVar10 = *(undefined4 *)((int)register0x00000054 + -0x28);
          *puVar5 = *(undefined4 *)((int)register0x00000054 + -0x2c);
          if (*DAT_004b88b8 != 0) {
            puVar5 = (undefined4 *)FUN_0009db64();
            *unaff_r8 = extraout_r2_05;
            unaff_r8[1] = puVar5[1];
            uVar10 = extraout_r2_05;
          }
          puVar5[1] = uVar10;
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined **)((int)register0x00000054 + -0x1ac) =
               PTR_s_controlMINIMUMMAXIMUMspi_buswrit_008216f7_0x894_004b8950;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 7;
          *(undefined1 **)((int)register0x00000054 + -0x1a4) =
               (undefined1 *)((int)register0x00000054 + -0x90);
          *(undefined4 *)((int)register0x00000054 + -0x1a0) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x19c) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x198) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getchoice();
          uVar19 = CONCAT44(PTR_DAT_004b893c,*(undefined **)((int)register0x00000054 + -0x194));
          uVar16 = 0;
          if (*(undefined **)((int)register0x00000054 + -0x194) == PTR_DAT_004b893c) {
            pcVar3 = (code *)**(undefined4 **)((int)register0x00000054 + -400);
            *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                 *(undefined4 *)((int)register0x00000054 + -0x128);
            *(undefined4 *)((int)register0x00000054 + -0x1ac) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            (*pcVar3)();
            uVar10 = *(undefined4 *)((int)register0x00000054 + -0x1a4);
            *(undefined4 *)((int)register0x00000054 + -0x2c) =
                 *(undefined4 *)((int)register0x00000054 + -0x1a8);
            *(undefined4 *)((int)register0x00000054 + -0x28) = uVar10;
            iVar13 = *(int *)((int)register0x00000054 + -0x128);
            *(undefined4 *)(iVar13 + 0x9c) = *(undefined4 *)((int)register0x00000054 + -0x1a8);
            if (*DAT_004b88b8 != 0) {
              FUN_0009db64();
              *unaff_r8 = extraout_r1_00;
              unaff_r8[1] = *(undefined4 *)(extraout_r2_06 + 0xa0);
              uVar10 = extraout_r1_00;
              iVar13 = extraout_r2_06;
            }
            *(undefined4 *)(iVar13 + 0xa0) = uVar10;
            *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(undefined **)((int)register0x00000054 + -0x1ac) = PTR_DAT_004b8954;
            *(undefined4 *)((int)register0x00000054 + -0x1a8) = 10;
            *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_004b8958;
            *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_004b895c;
            *(undefined1 *)((int)register0x00000054 + -0x19c) = 1;
            k3c_internal_pkg_printer___ConfigWrapper__Get();
            puVar11 = PTR_DAT_004b895c;
            *(undefined4 *)((int)register0x00000054 + -0x170) =
                 *(undefined4 *)((int)register0x00000054 + -0x198);
            uVar10 = **(undefined4 **)((int)register0x00000054 + -0x128);
            *(undefined4 *)((int)register0x00000054 + -0x124) =
                 *(undefined4 *)((int)register0x00000054 + -0x194);
            *(undefined4 *)((int)register0x00000054 + -0x1b0) = uVar10;
            *(undefined **)((int)register0x00000054 + -0x1ac) =
                 PTR_s_pinsM106tcp_initbusy1a86baud_to_M_00820821_0x231_004b8960;
            *(undefined4 *)((int)register0x00000054 + -0x1a8) = 4;
            *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_004b8958;
            *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_004b895c;
            k3c_internal_pkg_printer___Printer__Lookup_object();
            uVar19 = CONCAT44(DAT_004b88bc,*(int *)((int)register0x00000054 + -0x170));
            uVar16 = 0;
            if (*(int *)((int)register0x00000054 + -0x170) == DAT_004b88bc) {
              puVar4 = *(undefined **)((int)register0x00000054 + -0x19c);
              uVar16 = 0;
              puVar9 = PTR_DAT_004b8964;
              if (puVar4 == PTR_DAT_004b8964) {
                uVar12 = **(undefined4 **)((int)register0x00000054 + -0x124);
                uVar10 = (*(undefined4 **)((int)register0x00000054 + -0x124))[1];
                *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                     *(undefined4 *)((int)register0x00000054 + -0x198);
                *(undefined **)((int)register0x00000054 + -0x1ac) = PTR_DAT_004b8968;
                *(undefined4 *)((int)register0x00000054 + -0x1a8) = 3;
                *(undefined4 *)((int)register0x00000054 + -0x1a4) = uVar12;
                *(undefined4 *)((int)register0x00000054 + -0x1a0) = uVar10;
                k3c_internal_pkg_pins___PrinterPins__Setup_pin();
                puVar4 = *(undefined **)((int)register0x00000054 + -0x19c);
                uVar10 = *(undefined4 *)((int)register0x00000054 + -0x198);
                *(undefined **)((int)register0x00000054 + -0x2c) = puVar4;
                *(undefined4 *)((int)register0x00000054 + -0x28) = uVar10;
                uVar16 = 0;
                puVar9 = PTR_DAT_004b896c;
                if (puVar4 == PTR_DAT_004b896c) {
                  if (*DAT_004b88b8 == 0) {
                    iVar13 = *(int *)((int)register0x00000054 + -0x128);
                  }
                  else {
                    FUN_0009db64();
                    *unaff_r8 = extraout_r1_01;
                    iVar13 = *(int *)((int)register0x00000054 + -0x128);
                    unaff_r8[1] = *(undefined4 *)(iVar13 + 0xa4);
                    uVar10 = extraout_r1_01;
                  }
                  *(undefined4 *)(iVar13 + 0xa4) = uVar10;
                  uVar19 = *(undefined8 *)(iVar13 + 0x38);
                  *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                       *(undefined4 *)((int)register0x00000054 + 4);
                  *(undefined **)((int)register0x00000054 + -0x1ac) =
                       PTR_s_pwm_cycle_time_max_error_to_shut_008262d0_0x217e_004b8eb4;
                  *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0xe;
                  *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_004b8eb8;
                  *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_004b8ebc;
                  *(undefined8 *)((int)register0x00000054 + -0x19c) = 0;
                  *(undefined8 *)((int)register0x00000054 + -0x194) = uVar19;
                  *(undefined8 *)((int)register0x00000054 + -0x18c) = 0;
                  *(undefined8 *)((int)register0x00000054 + -0x184) = 0;
                  *(undefined1 *)((int)register0x00000054 + -0x17c) = 1;
                  k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
                  *(undefined8 *)((int)register0x00000054 + -0x168) =
                       *(undefined8 *)((int)register0x00000054 + -0x178);
                  iVar13 = *(int *)(*(int *)((int)register0x00000054 + -0x128) + 0xa4);
                  *(undefined8 *)(iVar13 + 0x24) = *(undefined8 *)((int)register0x00000054 + -0x178)
                  ;
                  *(undefined1 *)(iVar13 + 0x18) = 0;
                  FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x4c),iVar13);
                  uVar10 = extraout_r2_07[1];
                  *(undefined4 *)((int)register0x00000054 + -0x1b0) = *extraout_r2_07;
                  *(undefined4 *)((int)register0x00000054 + -0x1ac) = uVar10;
                  FUN_0008f77c();
                  *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004b8ec0;
                  *(undefined4 *)((int)register0x00000054 + -0x48) =
                       *(undefined4 *)((int)register0x00000054 + -0x1a8);
                  *(undefined8 *)((int)register0x00000054 + -0x138) =
                       *(undefined8 *)((int)register0x00000054 + -0x168);
                  *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                       *(undefined4 *)((int)register0x00000054 + -0x138);
                  *(undefined4 *)((int)register0x00000054 + -0x1ac) =
                       *(undefined4 *)((int)register0x00000054 + -0x134);
                  FUN_0008f6c0();
                  *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004b8eb8;
                  *(undefined4 *)((int)register0x00000054 + -0x40) =
                       *(undefined4 *)((int)register0x00000054 + -0x1a8);
                  *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_004b8ec4;
                  *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004b8ec8;
                  *(undefined **)((int)register0x00000054 + -0x1b0) = PTR_DAT_004b8ecc;
                  *(undefined4 *)((int)register0x00000054 + -0x1ac) = 0x23;
                  *(undefined1 **)((int)register0x00000054 + -0x1a8) =
                       (undefined1 *)((int)register0x00000054 + -0x4c);
                  *(undefined4 *)((int)register0x00000054 + -0x1a4) = 3;
                  *(undefined4 *)((int)register0x00000054 + -0x1a0) = 3;
                  k3c_internal_pkg_logger_Debugf();
                  *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                       *(undefined4 *)((int)register0x00000054 + 4);
                  *(undefined **)((int)register0x00000054 + -0x1ac) =
                       PTR_s_max_heat_time_s___1f____1fbutton_008262d0_0x1306_004b8ed0;
                  *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0xd;
                  *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_004b8eb8;
                  *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_004b8ed4;
                  *(undefined8 *)((int)register0x00000054 + -0x19c) = 0;
                  *(undefined8 *)((int)register0x00000054 + -0x194) = 0;
                  *(undefined8 *)((int)register0x00000054 + -0x18c) = 0;
                  *(undefined8 *)((int)register0x00000054 + -0x184) = 0;
                  *(undefined1 *)((int)register0x00000054 + -0x17c) = 1;
                  k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
                  *(undefined8 *)
                   (*(int *)(*(int *)((int)register0x00000054 + -0x128) + 0xa4) + 0x3c) =
                       *(undefined8 *)((int)register0x00000054 + -0x178);
                  *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
                  *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
                  *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                       *(undefined4 *)((int)register0x00000054 + -4);
                  *(undefined4 *)((int)register0x00000054 + -0x1ac) =
                       *(undefined4 *)((int)register0x00000054 + -0x13c);
                  FUN_0008f77c();
                  *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_004b8ec0;
                  *(undefined4 *)((int)register0x00000054 + -0x10) =
                       *(undefined4 *)((int)register0x00000054 + -0x1a8);
                  *(undefined **)((int)register0x00000054 + -0x1b0) = PTR_DAT_004b8ed8;
                  *(undefined4 *)((int)register0x00000054 + -0x1ac) = 0x10;
                  *(undefined1 **)((int)register0x00000054 + -0x1a8) =
                       (undefined1 *)((int)register0x00000054 + -0x14);
                  *(undefined4 *)((int)register0x00000054 + -0x1a4) = 1;
                  *(undefined4 *)((int)register0x00000054 + -0x1a0) = 1;
                  FUN_0013b72c();
                  *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                       **(undefined4 **)((int)register0x00000054 + -0x128);
                  *(undefined4 *)((int)register0x00000054 + -0x1ac) =
                       *(undefined4 *)((int)register0x00000054 + 4);
                  *(undefined4 *)((int)register0x00000054 + -0x1a8) =
                       *(undefined4 *)((int)register0x00000054 + -0x19c);
                  *(undefined4 *)((int)register0x00000054 + -0x1a4) =
                       *(undefined4 *)((int)register0x00000054 + -0x198);
                  *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_004b8edc;
                  *(undefined **)((int)register0x00000054 + -0x19c) = PTR_DAT_004b8ee0;
                  k3c_internal_pkg_printer___Printer__Load_object();
                  *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                       **(undefined4 **)((int)register0x00000054 + -0x128);
                  *(undefined4 *)((int)register0x00000054 + -0x1ac) =
                       *(undefined4 *)((int)register0x00000054 + 4);
                  *(undefined **)((int)register0x00000054 + -0x1a8) =
                       PTR_s_pid_calibrateverify_heaterprinte_008262d0_0xcd4_004b8ee4;
                  *(undefined4 *)((int)register0x00000054 + -0x1a4) = 0xd;
                  *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_004b8edc;
                  *(undefined **)((int)register0x00000054 + -0x19c) = PTR_DAT_004b8ee0;
                  k3c_internal_pkg_printer___Printer__Load_object();
                  *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                       **(undefined4 **)((int)register0x00000054 + -0x128);
                  *(undefined **)((int)register0x00000054 + -0x1ac) =
                       PTR_s_gcodeok__sM8844_helpReady_________00820821_0x5d2_004b8ee8;
                  *(undefined4 *)((int)register0x00000054 + -0x1a8) = 5;
                  *(undefined **)((int)register0x00000054 + -0x1a4) = PTR_DAT_004b8edc;
                  *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_004b8ee0;
                  k3c_internal_pkg_printer___Printer__Lookup_object();
                  *(undefined4 *)((int)register0x00000054 + -0x16c) =
                       *(undefined4 *)((int)register0x00000054 + -0x19c);
                  *(undefined4 *)((int)register0x00000054 + -0x120) =
                       *(undefined4 *)((int)register0x00000054 + -0x198);
                  *(undefined **)((int)register0x00000054 + -0x1b0) = PTR_DAT_004b8eec;
                  FUN_00022cf8();
                  puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1ac);
                  *puVar5 = 
                  PTR_k3c_internal_pkg_heater___Heater__Cmd_SET_HEATER_TEMPERATURE_fm_004b8ef0;
                  if (*(int *)PTR_DAT_004b8ef4 == 0) {
                    uVar10 = *(undefined4 *)((int)register0x00000054 + -0x128);
                  }
                  else {
                    puVar5 = (undefined4 *)FUN_0009db54();
                    uVar10 = *(undefined4 *)((int)register0x00000054 + -0x128);
                    *unaff_r8 = uVar10;
                  }
                  puVar5[1] = uVar10;
                  uVar16 = *(undefined **)((int)register0x00000054 + -0x16c) == PTR_DAT_004b8ef8;
                  if ((bool)uVar16) {
                    *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                         *(undefined4 *)((int)register0x00000054 + -0x120);
                    *(undefined **)((int)register0x00000054 + -0x1ac) = PTR_DAT_004b8efc;
                    *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0x16;
                    *(undefined **)((int)register0x00000054 + -0x1a4) =
                         PTR_s_HEATERTARGETpid_Kppid_Kipid_KdSE_008216f7_0x1e_004b8f00;
                    *(undefined4 *)((int)register0x00000054 + -0x1a0) = 6;
                    *(undefined4 *)((int)register0x00000054 + -0x19c) =
                         *(undefined4 *)((int)register0x00000054 + -4);
                    *(undefined4 *)((int)register0x00000054 + -0x198) =
                         *(undefined4 *)((int)register0x00000054 + -0x13c);
                    *(undefined4 **)((int)register0x00000054 + -0x194) = puVar5;
                    *(undefined **)((int)register0x00000054 + -400) = PTR_DAT_004b8f04;
                    *(undefined4 *)((int)register0x00000054 + -0x18c) = 0x19;
                    k3c_internal_pkg_gcode___GCodeDispatch__Register_mux_command();
                    *(undefined4 *)((int)register0x00000054 + -0x130) =
                         **(undefined4 **)((int)register0x00000054 + -0x128);
                    *(undefined **)((int)register0x00000054 + -0x1b0) = PTR_DAT_004b8eec;
                    FUN_00022cf8();
                    puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1ac);
                    *puVar5 = PTR_k3c_internal_pkg_heater___Heater___handle_shutdown_fm_004b8f08;
                    if (*(int *)PTR_DAT_004b8ef4 == 0) {
                      uVar10 = *(undefined4 *)((int)register0x00000054 + -0x128);
                    }
                    else {
                      puVar5 = (undefined4 *)FUN_0009db54();
                      uVar10 = *(undefined4 *)((int)register0x00000054 + -0x128);
                      *unaff_r8 = uVar10;
                    }
                    *(undefined4 **)((int)register0x00000054 + -8) = puVar5;
                    puVar5[1] = uVar10;
                    uVar10 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x130) + 0x24);
                    *(undefined **)((int)register0x00000054 + -0x1b0) = PTR_DAT_004b8f0c;
                    *(undefined4 *)((int)register0x00000054 + -0x1ac) = uVar10;
                    *(undefined **)((int)register0x00000054 + -0x1a8) =
                         PTR_s_project_shutdownlen_out_of_range_008262d0_0x38fa_004b8f10;
                    *(undefined4 *)((int)register0x00000054 + -0x1a4) = 0x10;
                    FUN_00093560();
                    puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1a0);
                    iVar13 = puVar5[1];
                    uVar1 = puVar5[2];
                    puVar11 = (undefined *)*puVar5;
                    if (*(char *)((int)register0x00000054 + -0x19c) == '\0') {
                      uVar1 = 0;
                      iVar13 = 0;
                      puVar11 = PTR_DAT_004b8ee0;
                    }
                    uVar6 = iVar13 + 1;
                    if (uVar1 < uVar6) {
                      *(undefined **)((int)register0x00000054 + -0x1b0) = puVar11;
                      *(uint *)((int)register0x00000054 + -0x1ac) = uVar6;
                      *(uint *)((int)register0x00000054 + -0x1a8) = uVar1;
                      *(undefined4 *)((int)register0x00000054 + -0x1a4) = 1;
                      *(undefined **)((int)register0x00000054 + -0x1a0) = PTR_DAT_004b8f14;
                      FUN_000987f4();
                      puVar11 = *(undefined **)((int)register0x00000054 + -0x19c);
                      uVar6 = *(uint *)((int)register0x00000054 + -0x198);
                      uVar1 = *(uint *)((int)register0x00000054 + -0x194);
                    }
                    *(uint *)((int)register0x00000054 + -0x13c) = uVar6;
                    *(uint *)((int)register0x00000054 + -0x140) = uVar1;
                    if (*(int *)PTR_DAT_004b8ef4 == 0) {
                      uVar10 = *(undefined4 *)((int)register0x00000054 + -8);
                    }
                    else {
                      FUN_0009db64();
                      uVar10 = *(undefined4 *)((int)register0x00000054 + -8);
                      *unaff_r8 = uVar10;
                      unaff_r8[1] = *(undefined4 *)(extraout_r2_08 + (uVar6 - 1) * 4);
                      puVar11 = extraout_r2_08;
                    }
                    *(undefined **)((int)register0x00000054 + -0xc) = puVar11;
                    *(undefined4 *)(puVar11 + (uVar6 - 1) * 4) = uVar10;
                    uVar10 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x130) + 0x24);
                    *(undefined **)((int)register0x00000054 + -0x1b0) = PTR_DAT_004b8f0c;
                    *(undefined4 *)((int)register0x00000054 + -0x1ac) = uVar10;
                    *(undefined **)((int)register0x00000054 + -0x1a8) =
                         PTR_s_project_shutdownlen_out_of_range_008262d0_0x38fa_004b8f10;
                    *(undefined4 *)((int)register0x00000054 + -0x1a4) = 0x10;
                    FUN_00093a08();
                    puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1a0);
                    puVar5[1] = *(undefined4 *)((int)register0x00000054 + -0x13c);
                    puVar5[2] = *(undefined4 *)((int)register0x00000054 + -0x140);
                    if (*(int *)PTR_DAT_004b8ef4 == 0) {
                      uVar10 = *(undefined4 *)((int)register0x00000054 + -0xc);
                    }
                    else {
                      puVar5 = (undefined4 *)FUN_0009db64();
                      uVar10 = *(undefined4 *)((int)register0x00000054 + -0xc);
                      *unaff_r8 = uVar10;
                      unaff_r8[1] = *puVar5;
                    }
                    *puVar5 = uVar10;
                    *(undefined4 *)((int)register0x00000054 + 0x10) =
                         *(undefined4 *)((int)register0x00000054 + -0x128);
                    return;
                  }
                  *(undefined **)((int)register0x00000054 + -0x1b0) =
                       *(undefined **)((int)register0x00000054 + -0x16c);
                  *(undefined **)((int)register0x00000054 + -0x1ac) = PTR_DAT_004b8ef8;
                  *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_004b8f18;
                  puVar4 = (undefined *)FUN_000209b4();
                  puVar9 = extraout_r2_09;
                }
                *(undefined **)((int)register0x00000054 + -0x1b0) = puVar4;
                *(undefined **)((int)register0x00000054 + -0x1ac) = puVar9;
                *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_004b8f18;
                puVar4 = (undefined *)FUN_000209b4();
                puVar9 = extraout_r2_10;
              }
              *(undefined **)((int)register0x00000054 + -0x1b0) = puVar4;
              *(undefined **)((int)register0x00000054 + -0x1ac) = puVar9;
              *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_004b8f18;
              uVar19 = FUN_000209b4();
            }
            *(undefined8 *)((int)register0x00000054 + -0x1b0) = uVar19;
            *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_004b8f18;
            uVar19 = FUN_000209b4();
          }
          *(undefined8 *)((int)register0x00000054 + -0x1b0) = uVar19;
          *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_004b8f18;
          FUN_000209b4();
        }
        *(undefined **)((int)register0x00000054 + -0x1b0) = puVar11;
        *(undefined **)((int)register0x00000054 + -0x1ac) = puVar14;
        *(undefined **)((int)register0x00000054 + -0x1a8) = PTR_DAT_004b8f18;
        FUN_000209b4();
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1b4);
      if ((bool)uVar16) {
        register0x00000054 = (BADSPACEBASE *)puVar15;
      }
    }
    unaff_lr = 0x4b8eac;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*Heater).Set_pwm @ 004b8f1c (size 216) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___Heater__Set_pwm(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  double dVar1;
  int in_stack_00000004;
  double in_stack_00000008;
  double in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x4b8ff0;
    FUN_0009bf64();
  }
  if ((*(double *)(in_stack_00000004 + 0x7c) <= 0.0) ||
     (dVar1 = in_stack_00000010, *(double *)(in_stack_00000004 + 0xcc) < in_stack_00000008)) {
    dVar1 = 0.0;
  }
  if (((in_stack_00000008 < *(double *)(in_stack_00000004 + 0x8c)) ||
      (*(double *)(in_stack_00000004 + 0x94) == 0.0)) &&
     (ABS(dVar1 - *(double *)(in_stack_00000004 + 0x94)) < *_UNK_004b8ff8)) {
                    /* WARNING: Could not recover jumptable at 0x004b8fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(double *)(in_stack_00000004 + 0x8c) =
       *(double *)(in_stack_00000004 + 0x38) + in_stack_00000008 + 3.75;
  *(double *)(in_stack_00000004 + 0x94) = dVar1;
  k3c_internal_pkg_mcu___MCU_pwm__Set_pwm();
                    /* WARNING: Could not recover jumptable at 0x004b8fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Temperature_callback @ 004b8ffc (size 356) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___Heater__Temperature_callback(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r10;
  double dVar3;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  double in_stack_00000010;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 local_c;
  int local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = (undefined4 *)0x0;
  iVar2 = in_stack_00000004 + 100;
  FUN_000afda8();
  FUN_000aac30();
  local_c = DAT_004b9164;
  local_4 = &local_c;
  *(double *)(in_stack_00000004 + 0x6c) = in_stack_00000010;
  *(undefined8 *)(in_stack_00000004 + 0x84) = in_stack_00000008;
  local_8 = iVar2;
  if (*(int *)(in_stack_00000004 + 0x9c) != 0) {
    FUN_00020dac();
    (*_SUB_0000000c)();
    dVar3 = *(double *)(in_stack_00000004 + 0x74) +
            (in_stack_00000010 - *(double *)(in_stack_00000004 + 0x74)) *
            (double)CONCAT44(uStack_30,local_34);
    *(double *)(in_stack_00000004 + 0x74) = dVar3;
    *(bool *)(in_stack_00000004 + 0x48) = *(double *)(in_stack_00000004 + 0x40) <= dVar3;
    (*(code *)*local_4)();
    return;
  }
  uVar1 = FUN_00020b18();
  FUN_00054344(uVar1);
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Temperature_callback.deferwrap1 @ 004b9170 (size 84) */

void k3c_internal_pkg_heater___Heater__Temperature_callback_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000ab080();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Get_name @ 004b91c4 (size 24) */

void k3c_internal_pkg_heater___Heater__Get_name(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
  uStack0000000c = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x004b91d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Get_pwm_delay @ 004b91dc (size 16) */

void k3c_internal_pkg_heater___Heater__Get_pwm_delay(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined8 uStack00000008;
  
  uStack00000008 = *(undefined8 *)(in_stack_00000004 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x004b91e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Get_max_power @ 004b91ec (size 16) */

void k3c_internal_pkg_heater___Heater__Get_max_power(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined8 uStack00000008;
  
  uStack00000008 = *(undefined8 *)(in_stack_00000004 + 0x4c);
                    /* WARNING: Could not recover jumptable at 0x004b91f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Get_smooth_time @ 004b91fc (size 16) */

void k3c_internal_pkg_heater___Heater__Get_smooth_time(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined8 uStack00000008;
  
  uStack00000008 = *(undefined8 *)(in_stack_00000004 + 0x54);
                    /* WARNING: Could not recover jumptable at 0x004b9208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Set_temp @ 004b920c (size 424) */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void k3c_internal_pkg_heater___Heater__Set_temp(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  double in_stack_00000008;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_18;
  int local_10;
  code *local_c;
  int local_8;
  code **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4b93b0;
    FUN_0009bf64();
  }
  local_4 = (code **)0x0;
  if ((in_stack_00000008 != 0.0) &&
     ((in_stack_00000008 < *(double *)(in_stack_00000004 + 0x18) ||
      (*(double *)(in_stack_00000004 + 0x30) < in_stack_00000008)))) {
    FUN_0009defc(0,local_28,0,in_stack_00000004,unaff_lr);
    FUN_0008f6c0();
    local_28[0] = DAT_004b93bc;
    FUN_0008f6c0();
    local_20 = DAT_004b93bc;
    FUN_0008f6c0();
    local_18 = DAT_004b93bc;
    FUN_0013b72c();
    FUN_0008f77c();
    uVar2 = FUN_00095b00();
    FUN_00054344(uVar2);
    return;
  }
  local_10 = in_stack_00000004 + 100;
  FUN_000aac30();
  pcVar1 = DAT_004b93b8;
  local_c = DAT_004b93b8;
  local_8 = local_10;
  local_4 = &local_c;
  *(double *)(in_stack_00000004 + 0x7c) = in_stack_00000008;
  (*pcVar1)();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Set_temp.deferwrap1 @ 004b93c8 (size 84) */

void k3c_internal_pkg_heater___Heater__Set_temp_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000ab080();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Get_temp @ 004b941c (size 348) */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void k3c_internal_pkg_heater___Heater__Get_temp(void)

{
  int iVar1;
  int unaff_r10;
  double dVar2;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  int *piStack_24;
  code *local_c;
  int local_8;
  code **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = (code **)0x0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  iVar1 = *(int *)(*(int *)(in_stack_00000004 + 0xa4) + 0xc);
  FUN_00025f60();
  if (*piStack_24 == 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x28))();
    dVar2 = (double)CONCAT44(piStack_24,0xb);
  }
  else {
    dVar2 = 0.0;
  }
  iVar1 = in_stack_00000004 + 100;
  FUN_000aac30();
  local_c = DAT_004b958c;
  local_4 = &local_c;
  local_8 = iVar1;
  if (*(double *)(in_stack_00000004 + 0x84) < dVar2 - 5.0) {
    in_stack_00000010 = *(undefined8 *)(in_stack_00000004 + 0x74);
    in_stack_00000018 = *(undefined8 *)(in_stack_00000004 + 0x7c);
    (*DAT_004b958c)();
    return;
  }
  in_stack_00000010 = *(undefined8 *)(in_stack_00000004 + 0x74);
  in_stack_00000018 = *(undefined8 *)(in_stack_00000004 + 0x7c);
  (*DAT_004b958c)();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Get_temp.deferwrap1 @ 004b9590 (size 84) */

void k3c_internal_pkg_heater___Heater__Get_temp_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000ab080();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Check_busy @ 004b95e4 (size 252) */

void k3c_internal_pkg_heater___Heater__Check_busy(void)

{
  undefined4 uVar1;
  int unaff_r10;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined1 in_stack_00000010;
  undefined8 local_34;
  int iStack_30;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = (undefined4 *)0x0;
  in_stack_00000010 = 0;
  local_8 = in_stack_00000004 + 100;
  FUN_000aac30();
  local_14 = DAT_004b96e4;
  local_10 = local_8;
  local_4 = &local_14;
  if (*(int *)(in_stack_00000004 + 0x9c) != 0) {
    local_c = *(undefined4 *)(in_stack_00000004 + 0xa0);
    FUN_00020dac();
    (**(code **)(iStack_30 + 0xc))();
    (*(code *)*local_4)();
    return;
  }
  uVar1 = FUN_00020b18();
  FUN_00054344(uVar1);
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Check_busy.deferwrap1 @ 004b96f0 (size 84) */

void k3c_internal_pkg_heater___Heater__Check_busy_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000ab080();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).IsHeating @ 004b9744 (size 32) */

void k3c_internal_pkg_heater___Heater__IsHeating(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = 0.0 < *(double *)(in_stack_00000004 + 0x7c);
                    /* WARNING: Could not recover jumptable at 0x004b9760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).StopWaitforTemperature @ 004b9764 (size 16) */

void k3c_internal_pkg_heater___Heater__StopWaitforTemperature(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 0xa8) = 0;
                    /* WARNING: Could not recover jumptable at 0x004b9770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).SetWaitforTemperature @ 004b9774 (size 16) */

void k3c_internal_pkg_heater___Heater__SetWaitforTemperature(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 0xa8) = 1;
                    /* WARNING: Could not recover jumptable at 0x004b9780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).NeedWaitforTemperature @ 004b9784 (size 16) */

void k3c_internal_pkg_heater___Heater__NeedWaitforTemperature(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(in_stack_00000004 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x004b9790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Set_control @ 004b9794 (size 232) */

void k3c_internal_pkg_heater___Heater__Set_control(void)

{
  int extraout_r1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 local_10;
  int local_c;
  int local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = (undefined4 *)0x0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  local_8 = in_stack_00000004 + 100;
  uVar2 = *(undefined4 *)(in_stack_00000004 + 0x9c);
  uVar3 = *(undefined4 *)(in_stack_00000004 + 0xa0);
  FUN_000aac30();
  local_10 = DAT_004b9888;
  local_c = local_8;
  local_4 = &local_10;
  *(undefined4 *)(in_stack_00000004 + 0x9c) = in_stack_00000008;
  iVar1 = in_stack_00000004;
  if (*DAT_004b988c != 0) {
    FUN_0009db64();
    *unaff_r8 = in_stack_0000000c;
    unaff_r8[1] = *(undefined4 *)(extraout_r1 + 0xa0);
    iVar1 = extraout_r1;
  }
  *(undefined4 *)(iVar1 + 0xa0) = in_stack_0000000c;
  *(undefined8 *)(iVar1 + 0x7c) = 0;
  in_stack_00000010 = uVar2;
  in_stack_00000014 = uVar3;
  (*(code *)*local_4)();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Set_control.deferwrap1 @ 004b9890 (size 84) */

void k3c_internal_pkg_heater___Heater__Set_control_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000ab080();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Alter_target @ 004b98e4 (size 104) */

void k3c_internal_pkg_heater___Heater__Alter_target(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  double dVar1;
  int in_stack_00000004;
  double in_stack_00000008;
  undefined8 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4b9948;
    FUN_0009bf64();
  }
  dVar1 = in_stack_00000008;
  if (in_stack_00000008 != 0.0) {
    FUN_000afda8();
    FUN_000afca0();
    dVar1 = uStack_8;
  }
  *(double *)(in_stack_00000004 + 0x7c) = dVar1;
                    /* WARNING: Could not recover jumptable at 0x004b993c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Stats @ 004b994c (size 1208) */

/* WARNING: Removing unreachable block (ram,0x004b9b8c) */
/* WARNING: Removing unreachable block (ram,0x004b9cec) */
/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x004b9d08 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void k3c_internal_pkg_heater___Heater__Stats(void)

{
  int iVar1;
  undefined4 extraout_r1;
  int *piVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  double dVar3;
  double dVar4;
  undefined4 in_s3;
  undefined4 extraout_s4;
  undefined4 extraout_s4_00;
  undefined4 uVar5;
  int *in_stack_00000004;
  double in_stack_00000008;
  undefined8 uStack_90;
  int *piStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined *puStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  while (&puStack_18 <= *(undefined ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4b9e00;
    FUN_0009bf64();
  }
  iVar1 = *(int *)(in_stack_00000004[0x29] + 0xc);
  uStack_90 = (double)CONCAT44(PTR_DAT_004b9e0c,*(undefined4 *)(*(int *)(iVar1 + 8) + 8));
  FUN_00025f60();
  if (*piStack_84 == 0) {
    uStack_90 = in_stack_00000008;
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x28))();
    dVar3 = (double)CONCAT44(piStack_84,0xb);
  }
  else {
    dVar3 = 0.0;
  }
  dVar4 = uStack_90;
  if (*(char *)(*in_stack_00000004 + 0x18) == '\0') {
    *(double *)(in_stack_00000004 + 0x33) = dVar3 + 5.0;
  }
  k3c_internal_pkg_heater___Heater__fetchTempTuple();
  dVar3 = (double)CONCAT44(piStack_84,0xb);
  if (uStack_90 == 0.0) {
    piVar2 = (int *)0x0;
    if (*(double *)PTR_DAT_004b9e10 < dVar3) {
      piVar2 = (int *)0x1;
    }
  }
  else {
    piVar2 = (int *)0x1;
  }
  if (in_stack_00000004[2] == 8) {
    uStack_90 = (double)CONCAT44(8,PTR_s_extruder_s__s__sINIT_TMCstepper__008216f7_0x131d_004b9e14);
    FUN_00018250();
    dVar4 = *(double *)(in_stack_00000004 + 0x2b);
    piVar2 = in_stack_00000004;
    if ((dVar3 <= dVar4) ||
       (dVar4 = *(double *)(in_stack_00000004 + 0x2d), uVar5 = extraout_s4, dVar4 <= dVar3)) {
      FUN_0009defc(0,&puStack_18);
      FUN_0008f77c();
      puStack_18 = PTR_DAT_004b9e1c;
      uStack_14 = 8;
      FUN_0008f77c();
      puStack_10 = PTR_DAT_004b9e1c;
      uStack_c = 8;
      FUN_0008f77c();
      puStack_8 = PTR_DAT_004b9e1c;
      uStack_4 = 8;
      FUN_0013b72c();
      uStack_90 = (double)CONCAT44(uStack_7c,uStack_80);
      k3c_internal_pkg_printer___Printer__Invoke_shutdown();
      dVar4 = (double)((ulonglong)dVar4 & 0xffffffff);
      uVar5 = extraout_s4_00;
    }
  }
  else {
    uVar5 = uStack_80;
    if (in_stack_00000004[2] == 10) {
      uStack_90 = (double)CONCAT44(10,PTR_s_heater_bedforce_movegcode_arcsst_00823504_0xed6_004b9e24
                                  );
      FUN_00018250(10,extraout_r1,piVar2);
      if ((dVar3 <= *(double *)(in_stack_00000004 + 0x2f)) ||
         (*(double *)(in_stack_00000004 + 0x31) <= dVar3)) {
        FUN_0009defc(0,&puStack_18);
        FUN_0008f77c();
        puStack_18 = PTR_DAT_004b9e1c;
        uStack_14 = 10;
        FUN_0008f77c();
        puStack_10 = PTR_DAT_004b9e1c;
        uStack_c = 10;
        FUN_0008f77c();
        puStack_8 = PTR_DAT_004b9e1c;
        uStack_4 = 10;
        FUN_0013b72c();
        uStack_90 = (double)CONCAT44(uStack_7c,uStack_80);
        k3c_internal_pkg_printer___Printer__Invoke_shutdown();
      }
    }
  }
  FUN_0009def4(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),0xb,in_s3,uVar5,0,&puStack_38,piVar2,
               in_stack_00000004);
  FUN_0008f77c();
  puStack_38 = PTR_DAT_004b9e1c;
  uStack_34 = uStack_90._4_4_;
  FUN_0008f6c0();
  puStack_30 = PTR_DAT_004b9e2c;
  uStack_2c = uStack_90._4_4_;
  FUN_0008f6c0();
  puStack_28 = PTR_DAT_004b9e2c;
  uStack_24 = uStack_90._4_4_;
  FUN_0008f6c0();
  puStack_20 = PTR_DAT_004b9e2c;
  uStack_1c = uStack_90._4_4_;
  FUN_0013b72c();
                    /* WARNING: Could not recover jumptable at 0x004b9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).fetchTempTuple @ 004b9e34 (size 172) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void k3c_internal_pkg_heater___Heater__fetchTempTuple(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  code *pcStack_10;
  int iStack_c;
  int iStack_8;
  code **ppcStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4b9ee4;
    FUN_0009bf64();
  }
  ppcStack_4 = (code **)0x0;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  iStack_8 = in_stack_00000004 + 100;
  FUN_000aac30();
  pcStack_10 = _UNK_004b9eec;
  iStack_c = iStack_8;
  ppcStack_4 = &pcStack_10;
  in_stack_00000008 = *(undefined8 *)(in_stack_00000004 + 0x7c);
  in_stack_00000010 = *(undefined8 *)(in_stack_00000004 + 0x6c);
  in_stack_00000018 = *(undefined8 *)(in_stack_00000004 + 0x94);
  (*_UNK_004b9eec)();
                    /* WARNING: Could not recover jumptable at 0x004b9ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).fetchTempTuple.deferwrap1 @ 004b9ef0 (size 84) */

void k3c_internal_pkg_heater___Heater__fetchTempTuple_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4b9f24;
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000ab080();
                    /* WARNING: Could not recover jumptable at 0x004b9f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Get_status @ 004b9f44 (size 500) */

void k3c_internal_pkg_heater___Heater__Get_status(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int unaff_r10;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined8 *local_3c;
  uint local_18;
  uint uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_000aac30();
  uVar11 = *(undefined8 *)(in_stack_00000004 + 0x74);
  uVar12 = *(undefined8 *)(in_stack_00000004 + 0x7c);
  uVar13 = *(undefined8 *)(in_stack_00000004 + 0x94);
  FUN_000ab080();
  FUN_000908bc();
  uStack_14 = (uint)((ulonglong)uVar11 >> 0x20);
  uVar2 = uStack_14 >> 0x14 & 0x7ff;
  if (uVar2 < 0x3ff) {
    uStack_14 = uStack_14 & 0x80000000;
    if (uVar2 == 0x3fe) {
      uStack_14 = uStack_14 | 0x3ff00000;
    }
    local_18 = 0;
  }
  else {
    local_18 = (uint)uVar11;
    if (uVar2 < 0x433) {
      uVar3 = uVar2 - 0x3ff;
      uVar5 = 0x80000 >> (uVar3 & 0xff);
      uVar6 = 0x41f - uVar2;
      uVar7 = 0x80000 << (uVar6 & 0xff);
      uVar2 = uVar2 - 0x41f;
      uVar4 = 0x80000 >> (uVar2 & 0xff);
      uVar9 = (uint)PTR_DAT_004ba13c >> (uVar3 & 0xff);
      uVar10 = 0xffffffff >> (uVar3 & 0xff);
      uVar1 = (int)PTR_DAT_004ba13c << (uVar6 & 0xff);
      uVar8 = (uint)PTR_DAT_004ba13c >> (uVar2 & 0xff);
      if (0xff < uVar2) {
        uVar4 = 0;
        uVar8 = 0;
      }
      if (0xff < uVar6) {
        uVar7 = 0;
        uVar1 = 0;
      }
      if (0xff < uVar3) {
        uVar5 = 0;
      }
      if (0xff < uVar3) {
        uVar9 = 0;
        uVar10 = 0;
      }
      uStack_14 = uStack_14 + uVar5 + (uint)CARRY4(local_18,uVar7 | uVar4) & ~uVar9;
      local_18 = local_18 + (uVar7 | uVar4) & ~(uVar1 | uVar10 | uVar8);
    }
  }
  FUN_00093a08();
  *local_3c = CONCAT44(uStack_14,local_18);
  FUN_00093a08();
  *local_3c = uVar12;
  FUN_00093a08();
  *local_3c = uVar13;
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Cmd_SET_HEATER_TEMPERATURE @ 004ba150 (size 252) */

void k3c_internal_pkg_heater___Heater__Cmd_SET_HEATER_TEMPERATURE
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  undefined8 uVar4;
  
  do {
    uVar4 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x38) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_004ba250;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 6;
      *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_004ba254;
      *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_004ba258;
      *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
      k3c_internal_pkg_gcode___GCodeCommand__Get_float();
      uVar1 = **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined8 *)((int)register0x00000054 + -8) =
           *(undefined8 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x34) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_004ba25c;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 7;
      *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_004ba260;
      *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_004ba264;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      bVar3 = *(int *)((int)register0x00000054 + -0x20) == DAT_004ba268;
      if (bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined8 *)((int)register0x00000054 + -0x2c) =
             *(undefined8 *)((int)register0x00000054 + -8);
        *(undefined1 *)((int)register0x00000054 + -0x24) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
        k3c_internal_pkg_heater___PrinterHeaters__Set_temperature();
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        return;
      }
      *(int *)((int)register0x00000054 + -0x34) = *(int *)((int)register0x00000054 + -0x20);
      *(int *)((int)register0x00000054 + -0x30) = DAT_004ba268;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_004ba26c;
      unaff_lr = 0x4ba23c;
      uVar4 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x38);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x4ba248;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/heater.NewControlBangBang @ 004ba270 (size 208) */

void k3c_internal_pkg_heater_NewControlBangBang(void)

{
  int *extraout_r1;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined *in_stack_0000000c;
  int *in_stack_00000010;
  int *piStack_40;
  undefined8 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4ba33c;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  if (*(int *)PTR_DAT_004ba348 != 0) {
    FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
    piStack_40 = extraout_r1;
  }
  *piStack_40 = in_stack_00000004;
  *(undefined8 *)(piStack_40 + 1) = *(undefined8 *)(in_stack_00000004 + 0x4c);
  k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
  *(undefined8 *)(piStack_40 + 3) = uStack_c;
  *(undefined1 *)(piStack_40 + 5) = 0;
  in_stack_0000000c = PTR_DAT_004ba358;
  in_stack_00000010 = piStack_40;
                    /* WARNING: Could not recover jumptable at 0x004ba330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*ControlBangBang).Temperature_update @ 004ba35c (size 212) */

void k3c_internal_pkg_heater___ControlBangBang__Temperature_update(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4ba42c;
    FUN_0009bf64();
  }
  if (*(char *)(in_stack_00000004 + 0x14) != '\0') {
    if (in_stack_00000018 + *(double *)(in_stack_00000004 + 0xc) <= in_stack_00000010) {
      *(undefined1 *)(in_stack_00000004 + 0x14) = 0;
      goto LAB_004ba3d4;
    }
    if (*(char *)(in_stack_00000004 + 0x14) != '\0') goto LAB_004ba3d4;
  }
  if (in_stack_00000010 <= in_stack_00000018 - *(double *)(in_stack_00000004 + 0xc)) {
    *(undefined1 *)(in_stack_00000004 + 0x14) = 1;
  }
LAB_004ba3d4:
  if (*(char *)(in_stack_00000004 + 0x14) == '\0') {
    k3c_internal_pkg_heater___Heater__Set_pwm();
  }
  else {
    k3c_internal_pkg_heater___Heater__Set_pwm();
  }
                    /* WARNING: Could not recover jumptable at 0x004ba420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*ControlBangBang).Check_busy @ 004ba430 (size 44) */

void k3c_internal_pkg_heater___ControlBangBang__Check_busy(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  double in_stack_00000010;
  double in_stack_00000018;
  undefined1 uStack00000020;
  
  uStack00000020 = in_stack_00000010 < in_stack_00000018 - *(double *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x004ba458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.NewControlPID @ 004ba45c (size 876) */

void k3c_internal_pkg_heater_NewControlPID(void)

{
  undefined *puVar1;
  int *piVar2;
  int *extraout_r1;
  int extraout_r2;
  int iVar3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined *in_stack_0000000c;
  int *in_stack_00000010;
  int *piStack_54;
  double dStack_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4ba7c4;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  if (*(int *)PTR_DAT_004ba7d0 != 0) {
    FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
    piStack_54 = extraout_r1;
  }
  *piStack_54 = in_stack_00000004;
  *(undefined8 *)(piStack_54 + 1) = *(undefined8 *)(in_stack_00000004 + 0x4c);
  k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
  *(double *)(piStack_54 + 3) = dStack_20 / *(double *)PTR_DAT_004ba7e0;
  k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
  *(double *)(piStack_54 + 5) = dStack_20 / *(double *)PTR_DAT_004ba7e0;
  puVar1 = PTR_s_pid_KdSENSORuptimenozzleoffset_s_008216f7_0x36_004ba7e8;
  k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
  *(double *)(piStack_54 + 7) = dStack_20 / *(double *)PTR_DAT_004ba7e0;
  *(undefined8 *)(piStack_54 + 9) = *(undefined8 *)(in_stack_00000004 + 0x54);
  piStack_54[0xb] = 0;
  piStack_54[0xc] = 0;
  if (*(double *)(piStack_54 + 5) != 0.0) {
    *(double *)(piStack_54 + 0xb) = *(double *)(piStack_54 + 1) / *(double *)(piStack_54 + 5);
  }
  piStack_54[0xd] = 0;
  piStack_54[0xe] = 0x40390000;
  piStack_54[0xf] = 0;
  piStack_54[0x10] = 0;
  piStack_54[0x11] = 0;
  piStack_54[0x12] = 0;
  piStack_54[0x13] = 0;
  piStack_54[0x14] = 0;
  FUN_00022cf8();
  *(undefined **)puVar1 = PTR_k3c_internal_pkg_heater___ControlPID__reload_fm_004ba7f0;
  if (*(int *)PTR_DAT_004ba7d0 != 0) {
    puVar1 = (undefined *)FUN_0009db54();
    *unaff_r8 = (int)piStack_54;
  }
  *(int **)(puVar1 + 4) = piStack_54;
  FUN_00093560();
  piVar2 = (int *)PTR_DAT_004ba7fc;
  FUN_000987f4();
  iVar3 = 0;
  if (*(int *)PTR_DAT_004ba7d0 != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puVar1;
    unaff_r8[1] = *(int *)(extraout_r2 + -4);
    iVar3 = extraout_r2;
  }
  *(undefined **)(iVar3 + -4) = puVar1;
  FUN_00093a08();
  *(undefined4 *)((int)piVar2 + 4) = 0;
  *(undefined4 *)((int)piVar2 + 8) = 0;
  if (*(int *)PTR_DAT_004ba7d0 != 0) {
    piVar2 = (int *)FUN_0009db64();
    *unaff_r8 = iVar3;
    unaff_r8[1] = *piVar2;
  }
  *piVar2 = iVar3;
  in_stack_0000000c = PTR_DAT_004ba800;
  in_stack_00000010 = piStack_54;
                    /* WARNING: Could not recover jumptable at 0x004ba7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*ControlPID).reload @ 004ba804 (size 796) */

void k3c_internal_pkg_heater___ControlPID__reload(undefined4 param_1)

{
  undefined4 *extraout_r2;
  int *extraout_r2_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  undefined1 uVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x20)) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0xa0);
      *(undefined4 *)((int)register0x00000054 + -0xa0) = unaff_lr;
      uVar5 = *(int *)((int)register0x00000054 + 0xc) == 0;
      if (!(bool)uVar5) {
        iVar1 = **(int **)((int)register0x00000054 + 8);
        uVar5 = iVar1 == DAT_004bab24;
        if ((bool)uVar5) {
          uVar3 = *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 4);
          uVar2 = *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 8);
          FUN_0009df00(0,(undefined1 *)((int)register0x00000054 + -0x3c),
                       (*(int **)((int)register0x00000054 + 8))[1]);
          *(undefined4 *)((int)register0x00000054 + -0x3c) = *extraout_r2;
          *(undefined4 *)((int)register0x00000054 + -0x38) = extraout_r2[1];
          *(undefined4 *)((int)register0x00000054 + -0x34) = extraout_r2[2];
          *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -0x30) = uVar3;
          *(undefined1 **)((int)register0x00000054 + -0x9c) =
               (undefined1 *)((int)register0x00000054 + -0x3c);
          *(undefined4 *)((int)register0x00000054 + -0x98) = DAT_004bab28;
          *(undefined4 *)((int)register0x00000054 + -0x94) = 6;
          *(undefined4 *)((int)register0x00000054 + -0x90) = DAT_004bab2c;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_004bab30;
          *(undefined8 *)((int)register0x00000054 + -0x88) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x80) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x78) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x70) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x68) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          *(double *)(*(int *)((int)register0x00000054 + 4) + 0xc) =
               *(double *)((int)register0x00000054 + -100) / *DAT_004bab34;
          *(undefined1 **)((int)register0x00000054 + -0x9c) =
               (undefined1 *)((int)register0x00000054 + -0x3c);
          *(undefined4 *)((int)register0x00000054 + -0x98) = DAT_004bab38;
          *(undefined4 *)((int)register0x00000054 + -0x94) = 6;
          *(undefined4 *)((int)register0x00000054 + -0x90) = DAT_004bab2c;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_004bab30;
          *(undefined8 *)((int)register0x00000054 + -0x88) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x80) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x78) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x70) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x68) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          *(double *)(*(int *)((int)register0x00000054 + 4) + 0x14) =
               *(double *)((int)register0x00000054 + -100) / *DAT_004bab34;
          *(undefined1 **)((int)register0x00000054 + -0x9c) =
               (undefined1 *)((int)register0x00000054 + -0x3c);
          *(undefined4 *)((int)register0x00000054 + -0x98) = DAT_004bab3c;
          *(undefined4 *)((int)register0x00000054 + -0x94) = 6;
          *(undefined4 *)((int)register0x00000054 + -0x90) = DAT_004bab2c;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_004bab30;
          *(undefined8 *)((int)register0x00000054 + -0x88) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x80) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x78) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x70) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x68) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          iVar1 = *(int *)((int)register0x00000054 + 4);
          *(double *)(iVar1 + 0x1c) = *(double *)((int)register0x00000054 + -100) / *DAT_004bab34;
          if (*(double *)(iVar1 + 0x14) != 0.0) {
            *(double *)(iVar1 + 0x2c) = *(double *)(iVar1 + 4) / *(double *)(iVar1 + 0x14);
          }
          FUN_0009deec(0,(undefined1 *)((int)register0x00000054 + -0x28));
          uVar2 = *(undefined4 *)(*extraout_r2_00 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x9c) = *(undefined4 *)(*extraout_r2_00 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x98) = uVar2;
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_004bab40;
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          *(undefined8 *)((int)register0x00000054 + -0x44) =
               *(undefined8 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x9c) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          *(undefined4 *)((int)register0x00000054 + -0x98) =
               *(undefined4 *)((int)register0x00000054 + -0x40);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_004bab44;
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          *(undefined8 *)((int)register0x00000054 + -0x4c) =
               *(undefined8 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0x9c) =
               *(undefined4 *)((int)register0x00000054 + -0x4c);
          *(undefined4 *)((int)register0x00000054 + -0x98) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_004bab44;
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          *(undefined8 *)((int)register0x00000054 + -0x54) =
               *(undefined8 *)(*(int *)((int)register0x00000054 + 4) + 0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x9c) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          *(undefined4 *)((int)register0x00000054 + -0x98) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_004bab44;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          *(undefined8 *)((int)register0x00000054 + -0x5c) =
               *(undefined8 *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x9c) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -0x98) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -8) = DAT_004bab44;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          *(undefined4 *)((int)register0x00000054 + -0x9c) = DAT_004bab48;
          *(undefined4 *)((int)register0x00000054 + -0x98) = 0x42;
          *(undefined1 **)((int)register0x00000054 + -0x94) =
               (undefined1 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x90) = 5;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = 5;
          k3c_internal_pkg_logger_Debugf();
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
          return;
        }
        *(int *)((int)register0x00000054 + -0x9c) = iVar1;
        *(int *)((int)register0x00000054 + -0x98) = DAT_004bab24;
        *(undefined4 *)((int)register0x00000054 + -0x94) = DAT_004bab4c;
        FUN_000209b4();
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xa0);
      if ((bool)uVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x4bab1c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*ControlPID).Temperature_update @ 004bab50 (size 1748) */

void k3c_internal_pkg_heater___ControlPID__Temperature_update(void)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int *in_stack_00000004;
  double in_stack_00000008;
  double in_stack_00000010;
  double in_stack_00000018;
  undefined4 *puStack_12c;
  undefined **ppuStack_124;
  undefined4 *puStack_11c;
  undefined4 *puStack_118;
  double dStack_b0;
  double dStack_a8;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  undefined **ppuStack_60;
  undefined4 *puStack_5c;
  undefined *puStack_58;
  undefined **ppuStack_54;
  undefined *puStack_50;
  undefined **ppuStack_4c;
  undefined *puStack_48;
  undefined **ppuStack_44;
  undefined *puStack_40;
  undefined **ppuStack_3c;
  undefined *puStack_38;
  undefined **ppuStack_34;
  undefined *puStack_30;
  undefined **ppuStack_2c;
  undefined *puStack_28;
  undefined **ppuStack_24;
  undefined *puStack_20;
  undefined **ppuStack_1c;
  undefined *puStack_18;
  undefined **ppuStack_14;
  undefined *puStack_10;
  undefined **ppuStack_c;
  undefined *puStack_8;
  undefined **ppuStack_4;
  
  puVar4 = puStack_11c;
  while (&dStack_b0 <= *(double **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4bb220;
    FUN_0009bf64();
  }
  dVar6 = in_stack_00000008 - *(double *)(in_stack_00000004 + 0xf);
  dVar11 = *(double *)(in_stack_00000004 + 9);
  dVar8 = in_stack_00000010 - *(double *)(in_stack_00000004 + 0xd);
  if (dVar6 < dVar11) {
    dVar6 = (dVar8 + (dVar11 - dVar6) * *(double *)(in_stack_00000004 + 0x11)) / dVar11;
  }
  else {
    dVar6 = dVar8 / dVar6;
  }
  dVar9 = in_stack_00000018 - in_stack_00000010;
  FUN_000afda8();
  FUN_000afca0();
  dVar7 = *(double *)(in_stack_00000004 + 3);
  dVar10 = *(double *)(in_stack_00000004 + 5);
  dVar12 = *(double *)(in_stack_00000004 + 7);
  dVar11 = (double)CONCAT44(puStack_118,puStack_11c);
  FUN_000afda8();
  FUN_000afca0();
  puStack_12c = (undefined4 *)*in_stack_00000004;
  dVar1 = (double)CONCAT44(puStack_118,puStack_11c);
  ppuStack_124 = (undefined **)((ulonglong)in_stack_00000008 >> 0x20);
  puStack_11c = puStack_118;
  k3c_internal_pkg_heater___Heater__Set_pwm();
  if (*(int *)(*in_stack_00000004 + 8) == 8) {
    puStack_12c = *(undefined4 **)(*in_stack_00000004 + 4);
    ppuStack_124 = (undefined **)&DAT_00000008;
    FUN_00018250();
    uVar5 = (uint)puVar4 & 0xff;
  }
  else {
    uVar5 = 0;
  }
  if (((uVar5 != 0) && (2.5 < dVar9)) && (dVar1 < *(double *)PTR_DAT_004bb22c)) {
    FUN_0009dedc(0,&puStack_38);
    dStack_68 = in_stack_00000010;
    FUN_0008f6c0();
    puStack_38 = PTR_DAT_004bb230;
    ppuStack_34 = ppuStack_124;
    dStack_70 = in_stack_00000008;
    FUN_0008f6c0();
    puStack_30 = PTR_DAT_004bb230;
    ppuStack_2c = ppuStack_124;
    dStack_78 = dVar8;
    FUN_0008f6c0();
    puStack_28 = PTR_DAT_004bb230;
    ppuStack_24 = ppuStack_124;
    dStack_80 = dVar6;
    FUN_0008f6c0();
    puStack_20 = PTR_DAT_004bb230;
    ppuStack_1c = ppuStack_124;
    dStack_88 = dVar9;
    FUN_0008f6c0();
    puStack_18 = PTR_DAT_004bb230;
    ppuStack_14 = ppuStack_124;
    FUN_0008f6c0();
    puStack_10 = PTR_DAT_004bb230;
    ppuStack_c = ppuStack_124;
    FUN_0008f6c0();
    puStack_8 = PTR_DAT_004bb230;
    ppuStack_4 = ppuStack_124;
    k3c_internal_pkg_logger_Debugf();
    FUN_0009def4(0,&puStack_58);
    FUN_0008f77c();
    puStack_58 = PTR_DAT_004bb238;
    ppuStack_54 = &puStack_38;
    FUN_0008f6c0();
    puStack_50 = PTR_DAT_004bb230;
    dStack_a8 = dVar9;
    ppuStack_4c = &puStack_38;
    FUN_0008f6c0();
    puStack_48 = PTR_DAT_004bb230;
    dStack_b0 = in_stack_00000018;
    ppuStack_44 = &puStack_38;
    FUN_0008f6c0();
    puStack_40 = PTR_DAT_004bb230;
    puStack_12c = (undefined4 *)PTR_DAT_004bb23c;
    ppuStack_124 = &puStack_58;
    puStack_11c = (undefined4 *)&DAT_00000004;
    ppuStack_3c = &puStack_38;
    k3c_internal_pkg_logger_Debugf();
  }
  *(double *)(in_stack_00000004 + 0xd) = in_stack_00000010;
  *(double *)(in_stack_00000004 + 0xf) = in_stack_00000008;
  *(double *)(in_stack_00000004 + 0x11) = dVar6;
  if ((dVar7 * dVar9 + dVar11 * dVar10) - dVar6 * dVar12 == dVar1) {
    *(double *)(in_stack_00000004 + 0x13) = dVar11;
  }
  FUN_000908bc();
  puStack_5c = puStack_12c;
  FUN_0008f77c();
  puVar2 = PTR_s_nametempPORTFREQKEYSset_Noneport_00820821_0x1fd_004bb244;
  ppuStack_60 = ppuStack_124;
  FUN_00093a08();
  *puStack_11c = PTR_DAT_004bb238;
  puVar4 = puStack_11c;
  if (*(int *)PTR_DAT_004bb248 != 0) {
    puVar4 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = ppuStack_60;
    unaff_r8[1] = puVar4[1];
  }
  puVar4[1] = ppuStack_60;
  FUN_0008f6c0();
  puVar3 = PTR_DAT_004bb24c;
  ppuStack_60 = (undefined **)puVar2;
  FUN_00093a08();
  *puStack_11c = PTR_DAT_004bb230;
  puVar4 = puStack_11c;
  if (*(int *)PTR_DAT_004bb248 != 0) {
    puVar4 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = ppuStack_60;
    unaff_r8[1] = puVar4[1];
  }
  puVar4[1] = ppuStack_60;
  FUN_0008f6c0();
  puVar2 = PTR_s_tempPORTFREQKEYSset_Noneportgpio_00820821_0x201_004bb250;
  ppuStack_60 = (undefined **)puVar3;
  FUN_00093a08();
  *puStack_11c = PTR_DAT_004bb230;
  puVar4 = puStack_11c;
  if (*(int *)PTR_DAT_004bb248 != 0) {
    puVar4 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = ppuStack_60;
    unaff_r8[1] = puVar4[1];
  }
  puVar4[1] = ppuStack_60;
  FUN_0008f6c0();
  puVar4 = puStack_5c;
  ppuStack_60 = (undefined **)puVar2;
  FUN_00093a08();
  *puStack_11c = PTR_DAT_004bb230;
  if (*(int *)PTR_DAT_004bb248 != 0) {
    puStack_11c = (undefined4 *)FUN_0009db64();
    *unaff_r8 = ppuStack_60;
    unaff_r8[1] = puStack_11c[1];
  }
  puStack_11c[1] = ppuStack_60;
  FUN_00022cf8();
  *puVar4 = PTR_DAT_004bb240;
  if (*(int *)PTR_DAT_004bb248 != 0) {
    puVar4 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = puStack_5c;
  }
  puVar4[1] = puStack_5c;
  k3c_internal_pkg_printer___Printer__Send_event();
                    /* WARNING: Could not recover jumptable at 0x004bb214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*ControlPID).Check_busy @ 004bb260 (size 68) */

void k3c_internal_pkg_heater___ControlPID__Check_busy(void)

{
  code *UNRECOVERED_JUMPTABLE;
  double in_stack_00000010;
  double in_stack_00000018;
  undefined1 uStack00000020;
  
  uStack00000020 =
       in_stack_00000010 < in_stack_00000018 - 2.0 || in_stack_00000018 + 2.0 < in_stack_00000010;
                    /* WARNING: Could not recover jumptable at 0x004bb2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.NewPrinterHeaters @ 004bb2a4 (size 1628) */

void k3c_internal_pkg_heater_NewPrinterHeaters(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  uint uVar4;
  undefined4 uVar5;
  undefined4 extraout_r2;
  undefined *puVar6;
  undefined *extraout_r2_00;
  undefined *extraout_r2_01;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  bool bVar8;
  undefined8 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x50) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004bb904;
      FUN_00022cf8();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x48);
      uVar5 = **(undefined4 **)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_004bb908 != 0) {
        FUN_0009db54();
        *unaff_r8 = extraout_r2;
        puVar3 = extraout_r1;
        uVar5 = extraout_r2;
      }
      *(undefined4 **)((int)register0x00000054 + -0x14) = puVar3;
      *puVar3 = uVar5;
      FUN_000908bc();
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x4c);
      if (*(int *)PTR_DAT_004bb908 == 0) {
        iVar1 = *(int *)((int)register0x00000054 + -0x14);
      }
      else {
        FUN_0009db64();
        *unaff_r8 = extraout_r1_00;
        iVar1 = *(int *)((int)register0x00000054 + -0x14);
        unaff_r8[1] = *(undefined4 *)(iVar1 + 4);
        uVar5 = extraout_r1_00;
      }
      *(undefined4 *)(iVar1 + 4) = uVar5;
      FUN_000908bc();
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -4) = uVar5;
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004bb90c;
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x44) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
      FUN_00093a08();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x3c);
      if (*(int *)PTR_DAT_004bb908 == 0) {
        uVar5 = *(undefined4 *)((int)register0x00000054 + -4);
        iVar1 = *(int *)((int)register0x00000054 + -0x14);
      }
      else {
        uVar9 = FUN_0009db74(*puVar3);
        puVar3 = (undefined4 *)((ulonglong)uVar9 >> 0x20);
        *unaff_r8 = (int)uVar9;
        uVar5 = *(undefined4 *)((int)register0x00000054 + -4);
        unaff_r8[1] = uVar5;
        iVar1 = *(int *)((int)register0x00000054 + -0x14);
        unaff_r8[2] = *(undefined4 *)(iVar1 + 8);
      }
      *puVar3 = 0;
      *(undefined4 *)(iVar1 + 8) = uVar5;
      FUN_000908bc();
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x4c);
      if (*(int *)PTR_DAT_004bb908 == 0) {
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x14);
      }
      else {
        FUN_0009db84();
        *unaff_r8 = extraout_r1_01;
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x14);
        unaff_r8[1] = puVar3[3];
        unaff_r8[2] = puVar3[4];
        unaff_r8[3] = puVar3[7];
        uVar5 = extraout_r1_01;
      }
      puVar3[3] = uVar5;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar6 = PTR_DAT_004bb910;
      puVar3[4] = PTR_DAT_004bb910;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[7] = puVar6;
      *(undefined1 *)(puVar3 + 0xd) = 0;
      *(undefined1 *)((int)puVar3 + 0x35) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x18) = *puVar3;
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004bb914;
      FUN_00022cf8();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x48);
      *puVar3 = PTR_k3c_internal_pkg_heater___PrinterHeaters__Handle_ready_fm_004bb918;
      if (*(int *)PTR_DAT_004bb908 == 0) {
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x14);
      }
      else {
        puVar3 = (undefined4 *)FUN_0009db54();
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x14);
        *unaff_r8 = uVar5;
      }
      *(undefined4 **)((int)register0x00000054 + -8) = puVar3;
      puVar3[1] = uVar5;
      uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x18) + 0x24);
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004bb91c;
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar5;
      *(undefined **)((int)register0x00000054 + -0x44) =
           PTR_s_project_readyFIRMWARE_NAMEAsia_S_008262d0_0xd56_004bb920;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 0xd;
      FUN_00093560();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x3c);
      iVar1 = puVar3[1];
      uVar2 = puVar3[2];
      puVar6 = (undefined *)*puVar3;
      if (*(char *)((int)register0x00000054 + -0x38) == '\0') {
        uVar2 = 0;
        iVar1 = 0;
        puVar6 = PTR_DAT_004bb910;
      }
      uVar4 = iVar1 + 1;
      if (uVar2 < uVar4) {
        *(undefined **)((int)register0x00000054 + -0x4c) = puVar6;
        *(uint *)((int)register0x00000054 + -0x48) = uVar4;
        *(uint *)((int)register0x00000054 + -0x44) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x40) = 1;
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_004bb924;
        FUN_000987f4();
        puVar6 = *(undefined **)((int)register0x00000054 + -0x38);
        uVar4 = *(uint *)((int)register0x00000054 + -0x34);
        uVar2 = *(uint *)((int)register0x00000054 + -0x30);
      }
      *(uint *)((int)register0x00000054 + -0x20) = uVar4;
      *(uint *)((int)register0x00000054 + -0x24) = uVar2;
      if (*(int *)PTR_DAT_004bb908 == 0) {
        uVar5 = *(undefined4 *)((int)register0x00000054 + -8);
      }
      else {
        FUN_0009db64();
        uVar5 = *(undefined4 *)((int)register0x00000054 + -8);
        *unaff_r8 = uVar5;
        unaff_r8[1] = *(undefined4 *)(extraout_r2_00 + (uVar4 - 1) * 4);
        puVar6 = extraout_r2_00;
      }
      *(undefined **)((int)register0x00000054 + -0xc) = puVar6;
      *(undefined4 *)(puVar6 + (uVar4 - 1) * 4) = uVar5;
      uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x18) + 0x24);
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004bb91c;
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar5;
      *(undefined **)((int)register0x00000054 + -0x44) =
           PTR_s_project_readyFIRMWARE_NAMEAsia_S_008262d0_0xd56_004bb920;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 0xd;
      FUN_00093a08();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x3c);
      puVar3[1] = *(undefined4 *)((int)register0x00000054 + -0x20);
      puVar3[2] = *(undefined4 *)((int)register0x00000054 + -0x24);
      if (*(int *)PTR_DAT_004bb908 == 0) {
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0xc);
      }
      else {
        puVar3 = (undefined4 *)FUN_0009db64();
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0xc);
        *unaff_r8 = uVar5;
        unaff_r8[1] = *puVar3;
      }
      *puVar3 = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           **(undefined4 **)((int)register0x00000054 + -0x14);
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004bb914;
      FUN_00022cf8();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x48);
      *puVar3 = PTR_k3c_internal_pkg_heater___PrinterHeaters__Turn_off_all_heaters_fm_004bb928;
      if (*(int *)PTR_DAT_004bb908 == 0) {
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x14);
      }
      else {
        puVar3 = (undefined4 *)FUN_0009db54();
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x14);
        *unaff_r8 = uVar5;
      }
      *(undefined4 **)((int)register0x00000054 + -8) = puVar3;
      puVar3[1] = uVar5;
      uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1c) + 0x24);
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004bb91c;
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar5;
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004bb92c;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 0x15;
      FUN_00093560();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x3c);
      iVar1 = puVar3[1];
      uVar2 = puVar3[2];
      puVar6 = (undefined *)*puVar3;
      if (*(char *)((int)register0x00000054 + -0x38) == '\0') {
        uVar2 = 0;
        iVar1 = 0;
        puVar6 = PTR_DAT_004bb910;
      }
      uVar4 = iVar1 + 1;
      if (uVar2 < uVar4) {
        *(undefined **)((int)register0x00000054 + -0x4c) = puVar6;
        *(uint *)((int)register0x00000054 + -0x48) = uVar4;
        *(uint *)((int)register0x00000054 + -0x44) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x40) = 1;
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_004bb924;
        FUN_000987f4();
        puVar6 = *(undefined **)((int)register0x00000054 + -0x38);
        uVar4 = *(uint *)((int)register0x00000054 + -0x34);
        uVar2 = *(uint *)((int)register0x00000054 + -0x30);
      }
      *(uint *)((int)register0x00000054 + -0x20) = uVar4;
      *(uint *)((int)register0x00000054 + -0x24) = uVar2;
      if (*(int *)PTR_DAT_004bb908 == 0) {
        uVar5 = *(undefined4 *)((int)register0x00000054 + -8);
      }
      else {
        FUN_0009db64();
        uVar5 = *(undefined4 *)((int)register0x00000054 + -8);
        *unaff_r8 = uVar5;
        unaff_r8[1] = *(undefined4 *)(extraout_r2_01 + (uVar4 - 1) * 4);
        puVar6 = extraout_r2_01;
      }
      *(undefined **)((int)register0x00000054 + -0xc) = puVar6;
      *(undefined4 *)(puVar6 + (uVar4 - 1) * 4) = uVar5;
      uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1c) + 0x24);
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004bb91c;
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar5;
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004bb92c;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 0x15;
      FUN_00093a08();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x3c);
      puVar3[1] = *(undefined4 *)((int)register0x00000054 + -0x20);
      puVar3[2] = *(undefined4 *)((int)register0x00000054 + -0x24);
      if (*(int *)PTR_DAT_004bb908 == 0) {
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0xc);
      }
      else {
        puVar3 = (undefined4 *)FUN_0009db64();
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0xc);
        *unaff_r8 = uVar5;
        unaff_r8[1] = *puVar3;
      }
      *puVar3 = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           **(undefined4 **)((int)register0x00000054 + -0x14);
      *(undefined **)((int)register0x00000054 + -0x48) =
           PTR_s_gcodeok__sM8844_helpReady_________00820821_0x5d2_004bb930;
      *(undefined4 *)((int)register0x00000054 + -0x44) = 5;
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_004bb934;
      *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_004bb910;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004bb914;
      FUN_00022cf8();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x48);
      *puVar3 = PTR_k3c_internal_pkg_heater___PrinterHeaters__Cmd_TURN_OFF_HEATERS_fm_004bb938;
      if (*(int *)PTR_DAT_004bb908 == 0) {
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x14);
      }
      else {
        puVar3 = (undefined4 *)FUN_0009db54();
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x14);
        *unaff_r8 = uVar5;
      }
      puVar3[1] = uVar5;
      bVar8 = *(undefined **)((int)register0x00000054 + -0x28) == PTR_DAT_004bb93c;
      if (bVar8) {
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_004bb940;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 0x10;
        *(undefined4 **)((int)register0x00000054 + -0x40) = puVar3;
        *(undefined1 *)((int)register0x00000054 + -0x3c) = 1;
        *(undefined **)((int)register0x00000054 + -0x38) =
             PTR_s_Turn_off_all_heatersfw_ota_secto_0082e789_4_004bb944;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 0x14;
        k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
        *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004bb914;
        FUN_00022cf8();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x48);
        *puVar3 = PTR_k3c_internal_pkg_heater___PrinterHeaters__Cmd_M105_fm_004bb948;
        if (*(int *)PTR_DAT_004bb908 == 0) {
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x14);
        }
        else {
          puVar3 = (undefined4 *)FUN_0009db54();
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x14);
          *unaff_r8 = uVar5;
        }
        puVar3[1] = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined **)((int)register0x00000054 + -0x48) =
             PTR_s_M105_infM140beta_02xmisomosisclk_00820821_0x285_004bb94c;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 4;
        *(undefined4 **)((int)register0x00000054 + -0x40) = puVar3;
        *(undefined1 *)((int)register0x00000054 + -0x3c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 0;
        k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
        *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004bb914;
        FUN_00022cf8();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x48);
        *puVar3 = PTR_k3c_internal_pkg_heater___PrinterHeaters__Cmd_TEMPERATURE_WAIT_fm_004bb950;
        if (*(int *)PTR_DAT_004bb908 == 0) {
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x14);
        }
        else {
          puVar3 = (undefined4 *)FUN_0009db54();
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x14);
          *unaff_r8 = uVar5;
        }
        puVar3[1] = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_004bb954;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 0x10;
        *(undefined4 **)((int)register0x00000054 + -0x40) = puVar3;
        *(undefined1 *)((int)register0x00000054 + -0x3c) = 1;
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004bb958;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 0x22;
        k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x4c) =
           *(undefined **)((int)register0x00000054 + -0x28);
      *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_004bb93c;
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004bb95c;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x50);
      if (bVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x4bb8fc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Load_config @ 004bb960 (size 548) */

void k3c_internal_pkg_heater___PrinterHeaters__Load_config(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  int iVar5;
  undefined4 extraout_r3;
  undefined4 uVar6;
  undefined4 uVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  bool bVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0x5c) = unaff_lr;
      puVar2 = *(undefined4 **)((int)register0x00000054 + 4);
      *(undefined1 *)((int)puVar2 + 0x35) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x58) = *puVar2;
      *(undefined **)((int)register0x00000054 + -0x54) =
           PTR_s_configfileprint_sizemodel_name_d_00823504_0xf4e_004bbb88;
      *(undefined4 *)((int)register0x00000054 + -0x50) = 10;
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004bbb8c;
      *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_004bbb90;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      FUN_0013071c();
      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10),
                   *(undefined4 *)((int)register0x00000054 + -0x54),
                   *(undefined4 *)((int)register0x00000054 + -0x58));
      *(undefined4 *)((int)register0x00000054 + -0xc) = extraout_r2;
      *(undefined4 *)((int)register0x00000054 + -0x10) = extraout_r3;
      *(undefined4 *)((int)register0x00000054 + -4) = 0x18;
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_004bbb94;
      *(undefined1 **)((int)register0x00000054 + -0x58) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x54) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x50) = 2;
      FUN_0011adf4();
      bVar9 = *(undefined **)((int)register0x00000054 + -0x38) == PTR_DAT_004bbb98;
      if (bVar9) {
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        k3c_internal_pkg_printer___PrinterConfig__Read_config();
        iVar1 = *(int *)((int)register0x00000054 + -0x4c);
        if (iVar1 != 0) {
          *(int *)((int)register0x00000054 + -0x20) = iVar1;
          *(int *)((int)register0x00000054 + -0x58) = iVar1;
          *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
          k3c_internal_pkg_printer___ConfigWrapper__Get_prefix_sections();
          iVar1 = *(int *)((int)register0x00000054 + -0x4c);
          *(int *)((int)register0x00000054 + -0x1c) = iVar1;
          iVar3 = *(int *)((int)register0x00000054 + -0x48);
          *(int *)((int)register0x00000054 + -0x2c) = iVar3;
          iVar5 = 0;
          while (iVar5 < iVar3) {
            iVar1 = *(int *)(iVar1 + iVar5 * 4);
            uVar6 = **(undefined4 **)((int)register0x00000054 + 4);
            uVar7 = *(undefined4 *)(iVar1 + 0xc);
            uVar4 = *(undefined4 *)(iVar1 + 0x10);
            *(int *)((int)register0x00000054 + -0x30) = iVar5 + 1;
            *(undefined4 *)((int)register0x00000054 + -0x58) = uVar6;
            *(undefined4 *)((int)register0x00000054 + -0x54) =
                 *(undefined4 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)((int)register0x00000054 + -0x50) = uVar7;
            *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar4;
            *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_004bbb8c;
            *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004bbb90;
            k3c_internal_pkg_printer___Printer__Load_object();
            iVar1 = *(int *)((int)register0x00000054 + -0x1c);
            iVar3 = *(int *)((int)register0x00000054 + -0x2c);
            iVar5 = *(int *)((int)register0x00000054 + -0x30);
          }
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_004bbb9c;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_004bbba0;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 0x15;
        *(undefined1 **)((int)register0x00000054 + -0x50) =
             (undefined1 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
        k3c_internal_pkg_logger_Errorf();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x58) =
           *(undefined **)((int)register0x00000054 + -0x38);
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_004bbb98;
      *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_004bbba4;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x5c);
      if (bVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x4bbb80;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Add_sensor_factory @ 004bbba8 (size 132) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___PrinterHeaters__Add_sensor_factory(void)

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
    UNRECOVERED_JUMPTABLE = (code *)0x4bbc28;
    FUN_0009bf64();
  }
  FUN_00093a08();
  *puStack_4 = in_stack_00000010;
  if (*_UNK_004bbc34 != 0) {
    puStack_4 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = in_stack_00000014;
    unaff_r8[1] = puStack_4[1];
  }
  puStack_4[1] = in_stack_00000014;
                    /* WARNING: Could not recover jumptable at 0x004bbc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Setup_heater @ 004bbc38 (size 736) */

void k3c_internal_pkg_heater___PrinterHeaters__Setup_heater(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int extraout_r1;
  undefined4 uVar6;
  undefined4 uVar7;
  uint extraout_r2;
  int extraout_r3;
  int extraout_r3_00;
  undefined4 uVar8;
  int iVar9;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  bool bVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 8);
      uVar6 = *(undefined4 *)(iVar1 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x40) = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar6;
      *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004bbf1c;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 0xffffffff;
      FUN_0014f168(iVar1);
      uVar5 = *(uint *)((int)register0x00000054 + -0x24);
      uVar2 = uVar5 - 1;
      bVar11 = uVar5 == uVar2;
      if (uVar2 < uVar5) {
        uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
        uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + uVar2 * 8);
        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar8;
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + uVar2 * 8 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x18) = uVar6;
        *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_004bbf20;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x38) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0x34) = uVar6;
        FUN_00025f60();
        if (**(int **)((int)register0x00000054 + -0x30) != 0) {
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_004bbf24;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x38);
          *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_004bbf28;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 0x1c;
          *(undefined1 **)((int)register0x00000054 + -0x38) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 1;
          FUN_0013b72c();
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x34) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
          k3c_internal_pkg_logger_Errorf();
        }
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        k3c_internal_pkg_heater___PrinterHeaters__Setup_sensor();
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        k3c_internal_pkg_heater_NewHeater();
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_004bbf20;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        FUN_00093a08();
        piVar3 = *(int **)((int)register0x00000054 + -0x30);
        if (*(int *)PTR_DAT_004bbf2c == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -0xc);
        }
        else {
          piVar3 = (int *)FUN_0009db64();
          iVar1 = *(int *)((int)register0x00000054 + -0xc);
          *unaff_r8 = iVar1;
          unaff_r8[1] = *piVar3;
        }
        *piVar3 = iVar1;
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004bbf30;
        *(int *)((int)register0x00000054 + -0x34) = iVar1;
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        k3c_internal_pkg_heater___PrinterHeaters__Register_sensor();
        iVar4 = *(int *)((int)register0x00000054 + 4);
        uVar5 = *(uint *)(iVar4 + 0x18);
        uVar2 = *(int *)(iVar4 + 0x14) + 1;
        iVar1 = *(int *)(iVar4 + 0x10);
        iVar9 = *(int *)(*(int *)((int)register0x00000054 + 8) + 0xc);
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 0x10);
        if (uVar5 < uVar2) {
          *(int *)((int)register0x00000054 + -0x14) = iVar9;
          *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar6;
          *(int *)((int)register0x00000054 + -0x40) = iVar1;
          *(uint *)((int)register0x00000054 + -0x3c) = uVar2;
          *(uint *)((int)register0x00000054 + -0x38) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
          *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004bbf24;
          FUN_000987f4();
          iVar1 = *(int *)((int)register0x00000054 + -0x2c);
          uVar2 = *(uint *)((int)register0x00000054 + -0x28);
          iVar4 = *(int *)((int)register0x00000054 + 4);
          *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)((int)register0x00000054 + -0x24);
          if (*(int *)PTR_DAT_004bbf2c != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r1;
            unaff_r8[1] = *(int *)(extraout_r3 + 0x10);
            iVar1 = extraout_r1;
            uVar2 = extraout_r2;
            iVar4 = extraout_r3;
          }
          *(int *)(iVar4 + 0x10) = iVar1;
          uVar6 = *(undefined4 *)((int)register0x00000054 + -0x1c);
          iVar9 = *(int *)((int)register0x00000054 + -0x14);
        }
        *(uint *)(iVar4 + 0x14) = uVar2;
        iVar4 = uVar2 - 1;
        *(undefined4 *)(iVar1 + iVar4 * 8 + 4) = uVar6;
        if (*(int *)PTR_DAT_004bbf2c != 0) {
          iVar4 = FUN_0009db64();
          *unaff_r8 = iVar9;
          unaff_r8[1] = *(int *)(extraout_r3_00 + iVar4 * 8);
          iVar1 = extraout_r3_00;
        }
        *(int *)(iVar1 + iVar4 * 8) = iVar9;
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        return;
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if (bVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x4bbf14;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Get_all_heaters @ 004bbf34 (size 32) */

void k3c_internal_pkg_heater___PrinterHeaters__Get_all_heaters(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x10);
  uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x14);
  uStack00000010 = *(undefined4 *)(in_stack_00000004 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x004bbf50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Lookup_heater @ 004bbf54 (size 272) */

void k3c_internal_pkg_heater___PrinterHeaters__Lookup_heater(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00025f60();
  if (*local_14 == 0) {
    FUN_0008f77c();
    FUN_0013b72c();
    k3c_internal_pkg_logger_Errorf();
  }
  FUN_00025f60();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Setup_sensor @ 004bc074 (size 472) */

void k3c_internal_pkg_heater___PrinterHeaters__Setup_sensor(undefined4 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  undefined8 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x34) = unaff_lr;
      if (*(char *)(*(int *)((int)register0x00000054 + 4) + 0x35) == '\0') {
        *(int *)((int)register0x00000054 + -0x30) = *(int *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        k3c_internal_pkg_heater___PrinterHeaters__Load_config();
      }
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_004bc250;
      *(undefined4 *)((int)register0x00000054 + -0x28) = 0xb;
      *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_004bc254;
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_004bc258;
      *(undefined1 *)((int)register0x00000054 + -0x1c) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Get();
      uVar8 = CONCAT44(PTR_DAT_004bc25c,*(undefined **)((int)register0x00000054 + -0x18));
      uVar7 = 0;
      if (*(undefined **)((int)register0x00000054 + -0x18) == PTR_DAT_004bc25c) {
        uVar3 = **(undefined4 **)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0xc) = uVar3;
        uVar1 = (*(undefined4 **)((int)register0x00000054 + -0x14))[1];
        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar1;
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
        *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004bc260;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x28) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar1;
        FUN_00025f60();
        if (**(int **)((int)register0x00000054 + -0x20) == 0) {
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_004bc25c;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004bc264;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 0x1e;
          *(undefined1 **)((int)register0x00000054 + -0x28) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x24) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x20) = 1;
          FUN_0013b72c();
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
          k3c_internal_pkg_logger_Errorf();
        }
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
        *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004bc260;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        FUN_00025f60();
        puVar4 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x20);
        uVar7 = puVar4 == PTR_DAT_004bc268;
        if ((bool)uVar7) {
          pcVar2 = *(code **)(*(undefined4 **)((int)register0x00000054 + -0x20))[1];
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + 8);
          (*pcVar2)();
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          return;
        }
        *(undefined **)((int)register0x00000054 + -0x30) = puVar4;
        *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_004bc268;
        *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_004bc26c;
        uVar8 = FUN_000209b4();
      }
      *(undefined8 *)((int)register0x00000054 + -0x30) = uVar8;
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_004bc26c;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x34);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x4bc248;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Register_sensor @ 004bc270 (size 832) */

void k3c_internal_pkg_heater___PrinterHeaters__Register_sensor(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int extraout_r1;
  undefined *puVar5;
  uint uVar6;
  uint extraout_r2;
  int iVar7;
  int extraout_r3;
  int extraout_r3_00;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  bool bVar14;
  undefined8 uVar15;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar13 = (undefined1 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x58) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 4);
      uVar4 = *(uint *)(iVar1 + 0x24);
      uVar6 = *(int *)(iVar1 + 0x20) + 1;
      iVar7 = *(int *)(iVar1 + 0x1c);
      iVar10 = *(int *)((int)register0x00000054 + 8);
      iVar11 = *(int *)(iVar10 + 0xc);
      uVar12 = *(undefined4 *)(iVar10 + 0x10);
      if (uVar4 < uVar6) {
        *(int *)((int)register0x00000054 + -0x20) = iVar11;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar12;
        *(int *)((int)register0x00000054 + -0x54) = iVar7;
        *(uint *)((int)register0x00000054 + -0x50) = uVar6;
        *(uint *)((int)register0x00000054 + -0x4c) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
        *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004bc5b4;
        FUN_000987f4();
        iVar7 = *(int *)((int)register0x00000054 + -0x40);
        uVar6 = *(uint *)((int)register0x00000054 + -0x3c);
        iVar1 = *(int *)((int)register0x00000054 + 4);
        *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)((int)register0x00000054 + -0x38);
        if (*(int *)PTR_DAT_004bc5b8 != 0) {
          FUN_0009db64();
          *unaff_r8 = extraout_r1;
          unaff_r8[1] = *(int *)(extraout_r3 + 0x1c);
          iVar7 = extraout_r1;
          uVar6 = extraout_r2;
          iVar1 = extraout_r3;
        }
        *(int *)(iVar1 + 0x1c) = iVar7;
        iVar10 = *(int *)((int)register0x00000054 + 8);
        iVar11 = *(int *)((int)register0x00000054 + -0x20);
        uVar12 = *(undefined4 *)((int)register0x00000054 + -0x2c);
      }
      *(uint *)(iVar1 + 0x20) = uVar6;
      uVar15 = CONCAT44(uVar6 - 1,iVar1);
      *(undefined4 *)(iVar7 + (uVar6 - 1) * 8 + 4) = uVar12;
      if (*(int *)PTR_DAT_004bc5b8 != 0) {
        uVar15 = FUN_0009db64();
        *unaff_r8 = iVar11;
        unaff_r8[1] = *(int *)(extraout_r3_00 + (int)((ulonglong)uVar15 >> 0x20) * 8);
        iVar7 = extraout_r3_00;
      }
      iVar1 = (int)uVar15;
      *(int *)(iVar7 + (int)((ulonglong)uVar15 >> 0x20) * 8) = iVar11;
      iVar7 = *(int *)((int)register0x00000054 + 0x18);
      if (iVar7 != 0) {
        uVar12 = *(undefined4 *)((int)register0x00000054 + 0x14);
        goto LAB_004bc468;
      }
      piVar2 = *(int **)(iVar10 + 4);
      uVar12 = *(undefined4 *)(iVar10 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar12;
      uVar9 = *(undefined4 *)(iVar10 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x28) = uVar9;
      iVar7 = *piVar2;
      *(int *)((int)register0x00000054 + -0x18) = iVar7;
      uVar8 = *(undefined4 *)(iVar7 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_004bc5bc;
      *(undefined4 *)((int)register0x00000054 + -0x50) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar12;
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar9;
      FUN_00093560(iVar7);
      if (*(char *)((int)register0x00000054 + -0x40) == '\0') {
        puVar5 = (undefined *)0x0;
        uVar12 = 0;
        bVar14 = true;
      }
      else {
        *(char *)((int)register0x00000054 + -0x2d) = *(char *)((int)register0x00000054 + -0x40);
        uVar12 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x18) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_004bc5bc;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar12;
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        FUN_00025f60();
        puVar5 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x44);
        uVar12 = (*(undefined4 **)((int)register0x00000054 + -0x44))[1];
        bVar14 = *(char *)((int)register0x00000054 + -0x2d) == '\0';
      }
      puVar3 = (undefined4 *)PTR_SUB_004bc5c8;
      if (bVar14) goto LAB_004bc450;
      bVar14 = puVar5 == PTR_DAT_004bc5c0;
      if (bVar14) {
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_004bc5c0;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar12;
        *(undefined **)((int)register0x00000054 + -0x4c) =
             PTR_s_gcode_ideraseingerr_codeverison__008216f7_0x146d_004bc5c4;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 8;
        FUN_00093560();
        puVar3 = (undefined4 *)PTR_SUB_004bc5c8;
        if (*(char *)((int)register0x00000054 + -0x40) != '\0') {
          uVar12 = (*(undefined4 **)((int)register0x00000054 + -0x44))[1];
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               **(undefined4 **)((int)register0x00000054 + -0x44);
          *(undefined4 *)((int)register0x00000054 + -0xc) = uVar12;
          puVar3 = (undefined4 *)((int)register0x00000054 + -0x10);
        }
LAB_004bc450:
        iVar7 = puVar3[1];
        if (iVar7 == 0) {
          return;
        }
        uVar12 = *puVar3;
        iVar1 = *(int *)((int)register0x00000054 + 4);
LAB_004bc468:
        *(undefined4 *)((int)register0x00000054 + -0x14) = uVar12;
        *(int *)((int)register0x00000054 + -0x24) = iVar7;
        uVar9 = *(undefined4 *)(iVar1 + 0xc);
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_004bc5bc;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar9;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar12;
        *(int *)((int)register0x00000054 + -0x48) = iVar7;
        FUN_00025f60();
        if (**(int **)((int)register0x00000054 + -0x44) != 0) {
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_004bc5b4;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x4c);
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_004bc5cc;
          *(undefined4 *)((int)register0x00000054 + -0x50) = 0x26;
          *(undefined1 **)((int)register0x00000054 + -0x4c) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x44) = 1;
          FUN_0013b72c();
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + -0x40);
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + -0x3c);
          *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x44) = 0;
          k3c_internal_pkg_logger_Errorf();
        }
        uVar12 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_004bc5bc;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar12;
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        FUN_00093a08();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x44);
        *puVar3 = *(undefined4 *)((int)register0x00000054 + 0xc);
        if (*(int *)PTR_DAT_004bc5b8 == 0) {
          iVar7 = *(int *)((int)register0x00000054 + 0x10);
        }
        else {
          puVar3 = (undefined4 *)FUN_0009db64();
          iVar7 = *(int *)((int)register0x00000054 + 0x10);
          *unaff_r8 = iVar7;
          unaff_r8[1] = puVar3[1];
        }
        puVar3[1] = iVar7;
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x54) = puVar5;
      *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_004bc5c0;
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_004bc5d0;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x58);
      if (bVar14) {
        register0x00000054 = (BADSPACEBASE *)puVar13;
      }
    }
    unaff_lr = 0x4bc5ac;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Register_monitor @ 004bc5d4 (size 236) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___PrinterHeaters__Register_monitor(void)

{
  int iVar1;
  int extraout_r1;
  uint uVar2;
  uint extraout_r2;
  int extraout_r3;
  int extraout_r3_00;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  int in_stack_00000008;
  int iStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4bc6bc;
    FUN_0009bf64();
  }
  uVar2 = *(int *)(in_stack_00000004 + 0x2c) + 1;
  iVar5 = *(int *)(in_stack_00000008 + 0xc);
  uVar4 = *(undefined4 *)(in_stack_00000008 + 0x10);
  iVar1 = in_stack_00000004;
  iVar3 = *(int *)(in_stack_00000004 + 0x28);
  if (*(uint *)(in_stack_00000004 + 0x30) < uVar2) {
    FUN_000987f4();
    *(undefined4 *)(in_stack_00000004 + 0x30) = uStack_10;
    iVar1 = in_stack_00000004;
    if (*_UNK_004bc6c8 != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(int *)(extraout_r3 + 0x28);
      iStack_18 = extraout_r1;
      uStack_14 = extraout_r2;
      iVar1 = extraout_r3;
    }
    *(int *)(iVar1 + 0x28) = iStack_18;
    uVar2 = uStack_14;
    iVar3 = iStack_18;
  }
  *(uint *)(iVar1 + 0x2c) = uVar2;
  iVar1 = uVar2 - 1;
  *(undefined4 *)(iVar3 + iVar1 * 8 + 4) = uVar4;
  if (*_UNK_004bc6c8 != 0) {
    iVar1 = FUN_0009db64();
    *unaff_r8 = iVar5;
    unaff_r8[1] = *(int *)(extraout_r3_00 + iVar1 * 8);
    iVar3 = extraout_r3_00;
  }
  *(int *)(iVar3 + iVar1 * 8) = iVar5;
                    /* WARNING: Could not recover jumptable at 0x004bc6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Get_status @ 004bc6cc (size 460) */

void k3c_internal_pkg_heater___PrinterHeaters__Get_status(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4bc894;
    FUN_0009bf64();
  }
  FUN_000908bc();
  FUN_0008f820();
  FUN_00093a08();
  *puStack_c = PTR_DAT_004bc8a4;
  puVar1 = puStack_c;
  if (*(int *)PTR_DAT_004bc8a8 != 0) {
    puVar1 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = uStack_10;
    unaff_r8[1] = puVar1[1];
  }
  puVar1[1] = uStack_10;
  FUN_0008f820();
  FUN_00093a08();
  *puStack_c = PTR_DAT_004bc8a4;
  puVar1 = puStack_c;
  if (*(int *)PTR_DAT_004bc8a8 != 0) {
    puVar1 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = 0x11;
    unaff_r8[1] = puVar1[1];
  }
  puVar1[1] = 0x11;
  FUN_0008f820();
  FUN_00093a08();
  *puStack_c = PTR_DAT_004bc8a4;
  if (*(int *)PTR_DAT_004bc8a8 != 0) {
    puStack_c = (undefined4 *)FUN_0009db64();
    *unaff_r8 = 0x11;
    unaff_r8[1] = puStack_c[1];
  }
  puStack_c[1] = 0x11;
                    /* WARNING: Could not recover jumptable at 0x004bc888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Turn_off_all_heaters @ 004bc8b4 (size 172) */

/* WARNING: Removing unreachable block (ram,0x004bc91c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___PrinterHeaters__Turn_off_all_heaters(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int iStack_30;
  int *piStack_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4bc95c;
    FUN_0009bf64();
  }
  FUN_0009dee4(0,&iStack_30,*(undefined4 *)(in_stack_00000004 + 8));
  FUN_00091764();
  while (iStack_30 != 0) {
    if (*piStack_2c != 0) {
      *(undefined1 *)(*piStack_2c + 0xa8) = 0;
      k3c_internal_pkg_heater___Heater__Set_temp();
    }
    FUN_000919c8();
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x004bc950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Cmd_TURN_OFF_HEATERS @ 004bc968 (size 172) */

/* WARNING: Removing unreachable block (ram,0x004bc9d0) */

void k3c_internal_pkg_heater___PrinterHeaters__Cmd_TURN_OFF_HEATERS(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int local_30;
  int *local_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0009dee4(0,&local_30,*(undefined4 *)(in_stack_00000004 + 8));
  FUN_00091764();
  while (local_30 != 0) {
    if (*local_2c != 0) {
      *(undefined1 *)(*local_2c + 0xa8) = 0;
      k3c_internal_pkg_heater___Heater__Set_temp();
    }
    FUN_000919c8();
  }
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Handle_ready @ 004bca1c (size 32) */

void k3c_internal_pkg_heater___PrinterHeaters__Handle_ready(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  
  *(undefined1 *)(in_stack_00000004 + 0x34) = 1;
  uStack00000014 = 0;
  uStack00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x004bca38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Get_temp @ 004bca3c (size 1284) */

void k3c_internal_pkg_heater___PrinterHeaters__Get_temp(void)

{
  uint uVar1;
  int iVar2;
  uint extraout_r2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint extraout_r3;
  int iVar6;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined4 uStack_a0;
  int local_9c;
  int *piStack_98;
  int local_94;
  uint uStack_90;
  uint local_8c;
  uint local_64;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  int local_4;
  
  while (&local_2c <= *(undefined4 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (*(uint **)(in_stack_00000004 + 0xc) == (uint *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(uint **)(in_stack_00000004 + 0xc);
  }
  FUN_000986b8();
  k3c_common_utils_str_MapStringKeys();
  FUN_001898d8();
  if (*(char *)(in_stack_00000004 + 0x34) == '\0') {
    local_64 = 0;
  }
  else {
    local_64 = 0;
    uVar3 = uVar1;
    iVar4 = local_9c;
    for (iVar2 = 0; iVar2 < local_9c; iVar2 = iVar2 + 1) {
      iVar5 = *(int *)(uVar1 + iVar2 * 8);
      FUN_00025f60();
      if (*piStack_98 == 0) {
        local_8 = (int *)0x0;
        local_4 = 0;
        FUN_0008f77c();
        local_8 = DAT_004bcf44;
        local_4 = iVar5;
        FUN_0013b72c();
        piStack_98 = (int *)0x0;
        k3c_internal_pkg_logger_Errorf();
      }
      else {
        FUN_00025f60();
        iVar6 = 0;
        if (*piStack_98 != 0) {
          FUN_00020dac();
          iVar6 = iVar5;
        }
        if (iVar6 == 0) {
          FUN_0009df04(0,&local_18);
          FUN_0008f77c();
          local_18 = DAT_004bcf44;
          local_14 = iVar5;
          FUN_00025f60();
          local_10 = *piStack_98;
          local_c = piStack_98[1];
          FUN_0013b72c();
          piStack_98 = (int *)0x0;
          k3c_internal_pkg_logger_Errorf();
        }
        else {
          (**(code **)(iVar6 + 0xc))();
          local_64 = local_64 + 1;
          FUN_0009defc(0,&local_30);
          uStack_a0 = (undefined4)((ulonglong)in_stack_00000008 >> 0x20);
          FUN_0008f77c();
          local_30 = DAT_004bcf44;
          local_2c = uStack_a0;
          FUN_0008f6c0();
          local_28 = DAT_004bcf58;
          local_24 = uStack_a0;
          FUN_0008f6c0();
          local_20 = DAT_004bcf58;
          local_1c = uStack_a0;
          piStack_98 = (int *)0x3;
          FUN_0013b72c();
          if (uVar3 < local_64) {
            local_64 = uStack_90;
            piStack_98 = DAT_004bcf44;
            FUN_000987f4();
            uVar3 = local_8c;
            iVar4 = local_94;
          }
          iVar6 = local_64 - 1;
          *(uint *)(iVar4 + iVar6 * 8 + 4) = uStack_90;
          iVar5 = local_94;
          if (*DAT_004bcf60 != 0) {
            iVar5 = FUN_0009db64();
            *unaff_r8 = iVar5;
            unaff_r8[1] = *(int *)(iVar4 + iVar6 * 8);
            uVar3 = extraout_r2;
            local_64 = extraout_r3;
          }
          *(int *)(iVar4 + iVar6 * 8) = iVar5;
        }
      }
    }
  }
  if (local_64 == 0) {
    return;
  }
  FUN_0014f8fc();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Cmd_M105 @ 004bcf6c (size 160) */

void k3c_internal_pkg_heater___PrinterHeaters__Cmd_M105(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_chelper__Cfunc_get_monotonic(in_stack_00000004);
  k3c_internal_pkg_heater___PrinterHeaters__Get_temp();
  if (local_8 != 0) {
    return;
  }
  k3c_internal_pkg_gcode___GCodeCommand__Ack();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Wait_for_temperature @ 004bd014 (size 2236) */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x004bd760 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 k3c_internal_pkg_heater___PrinterHeaters__Wait_for_temperature(undefined4 param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_r2;
  int extraout_r2_00;
  undefined4 extraout_r2_01;
  char cVar7;
  char cVar8;
  undefined4 *puVar9;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  undefined1 uVar11;
  ulonglong in_d0;
  ulonglong uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x88)) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x108);
      *(undefined4 *)((int)register0x00000054 + -0x108) = unaff_lr;
      uVar3 = *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x104) = DAT_004bd884;
      *(undefined4 *)((int)register0x00000054 + -0x100) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0xfc) = DAT_004bd888;
      *(undefined4 *)((int)register0x00000054 + -0xf8) = 0xb;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0xf0) != '\0') {
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        return (int)in_d0;
      }
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 0xc);
      k3c_internal_pkg_chelper__Cfunc_get_monotonic(*(int **)((int)register0x00000054 + 4));
      uVar12 = *(ulonglong *)((int)register0x00000054 + -0x104);
      *(ulonglong *)((int)register0x00000054 + -0x7c) = uVar12;
      piVar1 = *(int **)((int)register0x00000054 + 4);
      iVar4 = *(int *)((int)register0x00000054 + 8);
      iVar5 = 0;
      uVar11 = 0;
      while( true ) {
        *(undefined1 *)((int)register0x00000054 + -0xd5) = uVar11;
        *(int *)((int)register0x00000054 + -0xc0) = iVar5;
        *(ulonglong *)((int)register0x00000054 + -0xbc) = uVar12;
        if (*(char *)(*piVar1 + 0x18) == '\0') {
          *(int *)((int)register0x00000054 + -0x104) = iVar4;
          *(ulonglong *)((int)register0x00000054 + -0x100) = uVar12;
          k3c_internal_pkg_heater___Heater__Check_busy();
          cVar8 = *(char *)((int)register0x00000054 + -0xf8);
          iVar4 = *(int *)((int)register0x00000054 + 8);
          uVar12 = *(ulonglong *)((int)register0x00000054 + -0xbc);
          piVar1 = *(int **)((int)register0x00000054 + 4);
        }
        else {
          cVar8 = '\0';
        }
        in_d0 = uVar12 & 0xffffffff;
        if ((cVar8 == '\0') || (*(char *)(iVar4 + 0xa8) == '\0')) {
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          return (int)uVar12;
        }
        *(int *)((int)register0x00000054 + -0x104) = *piVar1;
        *(undefined4 *)((int)register0x00000054 + -0x100) = DAT_004bd88c;
        *(undefined4 *)((int)register0x00000054 + -0xfc) = 8;
        *(undefined4 *)((int)register0x00000054 + -0xf8) = DAT_004bd890;
        *(undefined4 *)((int)register0x00000054 + -0xf4) = DAT_004bd894;
        k3c_internal_pkg_printer___Printer__Lookup_object();
        uVar11 = 1;
        if (*(int *)((int)register0x00000054 + -0xf0) == 0) goto LAB_004bd91c;
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0xec);
        *(undefined4 *)((int)register0x00000054 + -0x104) = DAT_004bd898;
        *(int *)((int)register0x00000054 + -0x100) = *(int *)((int)register0x00000054 + -0xf0);
        FUN_00020dac();
        pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0xfc) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x104) =
             *(undefined4 *)((int)register0x00000054 + -0x70);
        (*pcVar2)();
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 4);
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 8);
        *(undefined4 *)((int)register0x00000054 + -0x104) =
             *(undefined4 *)((int)register0x00000054 + 4);
        uVar13 = *(undefined8 *)((int)register0x00000054 + -0xbc);
        *(undefined8 *)((int)register0x00000054 + -0x100) = uVar13;
        *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0xf4) = uVar6;
        k3c_internal_pkg_heater___PrinterHeaters__Get_temp();
        if (*(int *)((int)register0x00000054 + -0xe8) != 0) {
          *(int *)((int)register0x00000054 + 0xc) = *(int *)((int)register0x00000054 + -0xe8);
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0xe4);
          return (int)uVar13;
        }
        *(undefined4 *)((int)register0x00000054 + -0xd4) =
             *(undefined4 *)((int)register0x00000054 + -0xec);
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -0xf0);
        *(undefined4 *)((int)register0x00000054 + -0x104) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined8 *)((int)register0x00000054 + -0x100) =
             *(undefined8 *)((int)register0x00000054 + -0xbc);
        k3c_internal_pkg_heater___Heater__Get_temp();
        in_d0 = *(ulonglong *)((int)register0x00000054 + -0xf8);
        *(ulonglong *)((int)register0x00000054 + -200) = in_d0;
        *(undefined8 *)((int)register0x00000054 + -0xd0) =
             *(undefined8 *)((int)register0x00000054 + -0xf0);
        *(double *)((int)register0x00000054 + -0xb4) =
             *(double *)((int)register0x00000054 + -0xbc) -
             *(double *)((int)register0x00000054 + -0x7c);
        iVar4 = *(int *)((int)register0x00000054 + -0xc0);
        if ((0 < iVar4) &&
           (iVar4 == (iVar4 + (int)((ulonglong)((longlong)iVar4 * (longlong)DAT_004bd89c) >> 0x20)
                     >> 4) * 0x1e)) {
          FUN_0009def4(0,(undefined1 *)((int)register0x00000054 + -0x24));
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 8);
          *(undefined4 *)((int)register0x00000054 + -0x104) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 4);
          *(undefined4 *)((int)register0x00000054 + -0x100) = uVar3;
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_004bd8a0;
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0xfc);
          *(undefined8 *)((int)register0x00000054 + -0x84) =
               *(undefined8 *)((int)register0x00000054 + -200);
          *(undefined4 *)((int)register0x00000054 + -0x104) =
               *(undefined4 *)((int)register0x00000054 + -0x84);
          *(undefined4 *)((int)register0x00000054 + -0x100) =
               *(undefined4 *)((int)register0x00000054 + -0x80);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_004bd8a4;
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)((int)register0x00000054 + -0xfc);
          *(undefined8 *)((int)register0x00000054 + -0x8c) =
               *(undefined8 *)((int)register0x00000054 + -0xd0);
          *(undefined4 *)((int)register0x00000054 + -0x104) =
               *(undefined4 *)((int)register0x00000054 + -0x8c);
          *(undefined4 *)((int)register0x00000054 + -0x100) =
               *(undefined4 *)((int)register0x00000054 + -0x88);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_004bd8a4;
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + -0xfc);
          in_d0 = *(ulonglong *)((int)register0x00000054 + -0xb4);
          *(ulonglong *)((int)register0x00000054 + -0x94) = in_d0;
          *(undefined4 *)((int)register0x00000054 + -0x104) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          *(undefined4 *)((int)register0x00000054 + -0x100) =
               *(undefined4 *)((int)register0x00000054 + -0x90);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_004bd8a4;
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0xfc);
          *(undefined4 *)((int)register0x00000054 + -0x104) = DAT_004bd8a8;
          *(undefined4 *)((int)register0x00000054 + -0x100) = 0x3f;
          *(undefined1 **)((int)register0x00000054 + -0xfc) =
               (undefined1 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -0xf8) = 4;
          *(undefined4 *)((int)register0x00000054 + -0xf4) = 4;
          k3c_internal_pkg_logger_Infof();
        }
        *(undefined4 *)((int)register0x00000054 + -0x104) =
             **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x100) = DAT_004bd8ac;
        *(undefined4 *)((int)register0x00000054 + -0xfc) = 0xb;
        *(undefined4 *)((int)register0x00000054 + -0xf8) = DAT_004bd890;
        *(undefined4 *)((int)register0x00000054 + -0xf4) = DAT_004bd894;
        k3c_internal_pkg_printer___Printer__Lookup_object();
        uVar11 = *(int *)((int)register0x00000054 + -0xf0) == 0;
        if ((bool)uVar11) break;
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0xec);
        *(undefined4 *)((int)register0x00000054 + -0x104) = DAT_004bd8b0;
        *(int *)((int)register0x00000054 + -0x100) = *(int *)((int)register0x00000054 + -0xf0);
        FUN_00020dac();
        pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0xfc) + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x104) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        (*pcVar2)();
        cVar8 = *(char *)((int)register0x00000054 + -0x100);
        *(char *)((int)register0x00000054 + -0xd6) = cVar8;
        dVar14 = *(double *)((int)register0x00000054 + -0xb4);
        dVar15 = *DAT_004bd8b4;
        if (dVar14 <= dVar15) {
          iVar4 = *(int *)((int)register0x00000054 + 8);
          uVar11 = *(undefined1 *)((int)register0x00000054 + -0xd5);
        }
        else {
          iVar4 = *(int *)((int)register0x00000054 + 8);
          if (*(int *)(iVar4 + 8) == 8) {
            *(undefined4 *)((int)register0x00000054 + -0x104) = *(undefined4 *)(iVar4 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x100) = DAT_004bd8bc;
            *(undefined4 *)((int)register0x00000054 + -0xfc) = 8;
            FUN_00018250();
            if (*(char *)((int)register0x00000054 + -0xf8) != '\0') {
              if (*(char *)((int)register0x00000054 + -0xd5) == '\0') {
                FUN_0009deec(0,(undefined1 *)((int)register0x00000054 + -100));
                uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 8);
                *(undefined4 *)((int)register0x00000054 + -0x104) =
                     *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 4);
                *(undefined4 *)((int)register0x00000054 + -0x100) = uVar3;
                FUN_0008f77c();
                *(undefined4 *)((int)register0x00000054 + -100) = DAT_004bd8a0;
                *(undefined4 *)((int)register0x00000054 + -0x60) =
                     *(undefined4 *)((int)register0x00000054 + -0xfc);
                *(undefined8 *)((int)register0x00000054 + -0x9c) =
                     *(undefined8 *)((int)register0x00000054 + -0xb4);
                *(undefined4 *)((int)register0x00000054 + -0x104) =
                     *(undefined4 *)((int)register0x00000054 + -0x9c);
                *(undefined4 *)((int)register0x00000054 + -0x100) =
                     *(undefined4 *)((int)register0x00000054 + -0x98);
                FUN_0008f6c0();
                *(undefined4 *)((int)register0x00000054 + -0x5c) = DAT_004bd8a4;
                *(undefined4 *)((int)register0x00000054 + -0x58) =
                     *(undefined4 *)((int)register0x00000054 + -0xfc);
                *(undefined4 *)((int)register0x00000054 + -0x54) = DAT_004bd8a4;
                *(undefined4 *)((int)register0x00000054 + -0x50) = DAT_004bd8c0;
                *(undefined8 *)((int)register0x00000054 + -0xa4) =
                     *(undefined8 *)((int)register0x00000054 + -200);
                *(undefined4 *)((int)register0x00000054 + -0x104) =
                     *(undefined4 *)((int)register0x00000054 + -0xa4);
                *(undefined4 *)((int)register0x00000054 + -0x100) =
                     *(undefined4 *)((int)register0x00000054 + -0xa0);
                FUN_0008f6c0();
                *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_004bd8a4;
                *(undefined4 *)((int)register0x00000054 + -0x48) =
                     *(undefined4 *)((int)register0x00000054 + -0xfc);
                *(undefined8 *)((int)register0x00000054 + -0xac) =
                     *(undefined8 *)((int)register0x00000054 + -0xd0);
                *(undefined4 *)((int)register0x00000054 + -0x104) =
                     *(undefined4 *)((int)register0x00000054 + -0xac);
                *(undefined4 *)((int)register0x00000054 + -0x100) =
                     *(undefined4 *)((int)register0x00000054 + -0xa8);
                FUN_0008f6c0();
                *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_004bd8a4;
                *(undefined4 *)((int)register0x00000054 + -0x40) =
                     *(undefined4 *)((int)register0x00000054 + -0xfc);
                *(undefined4 *)((int)register0x00000054 + -0x104) = DAT_004bd8c4;
                *(undefined4 *)((int)register0x00000054 + -0x100) = 0x4d;
                *(undefined1 **)((int)register0x00000054 + -0xfc) =
                     (undefined1 *)((int)register0x00000054 + -100);
                *(undefined4 *)((int)register0x00000054 + -0xf8) = 5;
                *(undefined4 *)((int)register0x00000054 + -0xf4) = 5;
                k3c_internal_pkg_logger_Warnf();
              }
              cVar8 = *(char *)((int)register0x00000054 + -0xd6);
              iVar4 = *(int *)((int)register0x00000054 + 8);
              dVar14 = *(double *)((int)register0x00000054 + -0xb4);
              dVar15 = *DAT_004bd8b4;
              uVar11 = 1;
              goto LAB_004bd5a0;
            }
            cVar8 = *(char *)((int)register0x00000054 + -0xd6);
            iVar4 = *(int *)((int)register0x00000054 + 8);
            dVar14 = *(double *)((int)register0x00000054 + -0xb4);
            dVar15 = *DAT_004bd8b4;
          }
          else if (*(int *)(iVar4 + 8) == 10) {
            *(undefined4 *)((int)register0x00000054 + -0x104) = *(undefined4 *)(iVar4 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x100) = DAT_004bd8b8;
            *(undefined4 *)((int)register0x00000054 + -0xfc) = 10;
            FUN_00018250();
            if (*(char *)((int)register0x00000054 + -0xf8) != '\0') {
              if (*(char *)((int)register0x00000054 + -0xd6) != '\0') {
                FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x3c));
                uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 8);
                *(undefined4 *)((int)register0x00000054 + -0x104) =
                     *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 4);
                *(undefined4 *)((int)register0x00000054 + -0x100) = uVar3;
                FUN_0008f77c();
                *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_004bd8a0;
                *(undefined4 *)((int)register0x00000054 + -0x38) =
                     *(undefined4 *)((int)register0x00000054 + -0xfc);
                *(undefined4 *)((int)register0x00000054 + -0x104) =
                     *(undefined4 *)((int)register0x00000054 + -0x6c);
                *(undefined4 *)((int)register0x00000054 + -0x100) =
                     *(undefined4 *)((int)register0x00000054 + -0xd4);
                FUN_0008f77c();
                *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_004bd8a0;
                *(undefined4 *)((int)register0x00000054 + -0x30) =
                     *(undefined4 *)((int)register0x00000054 + -0xfc);
                *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_004bd8a4;
                *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_004bd8d0;
                *(undefined4 *)((int)register0x00000054 + -0x104) = DAT_004bd8d4;
                *(undefined4 *)((int)register0x00000054 + -0x100) = 0x45;
                *(undefined1 **)((int)register0x00000054 + -0xfc) =
                     (undefined1 *)((int)register0x00000054 + -0x3c);
                *(undefined4 *)((int)register0x00000054 + -0xf8) = 3;
                *(undefined4 *)((int)register0x00000054 + -0xf4) = 3;
                k3c_internal_pkg_logger_Errorf();
                *(undefined4 *)((int)register0x00000054 + -0x104) = DAT_004bd8d8;
                FUN_00022cf8();
                *(undefined4 *)((int)register0x00000054 + -4) =
                     *(undefined4 *)((int)register0x00000054 + -0x100);
                *(undefined4 *)((int)register0x00000054 + -0x104) =
                     *(undefined4 *)((int)register0x00000054 + -0x6c);
                *(undefined4 *)((int)register0x00000054 + -0x100) =
                     *(undefined4 *)((int)register0x00000054 + -0xd4);
                FUN_0008f77c();
                uVar3 = *(undefined4 *)((int)register0x00000054 + -0xfc);
                puVar9 = *(undefined4 **)((int)register0x00000054 + -4);
                *puVar9 = DAT_004bd8a0;
                if (*DAT_004bd8dc != 0) {
                  FUN_0009db64();
                  *unaff_r8 = extraout_r2;
                  unaff_r8[1] = puVar9[1];
                  uVar3 = extraout_r2;
                }
                puVar9[1] = uVar3;
                *(undefined4 *)((int)register0x00000054 + -0x104) =
                     **(undefined4 **)((int)register0x00000054 + 4);
                *(undefined4 *)((int)register0x00000054 + -0x100) = DAT_004bd8e0;
                *(undefined4 *)((int)register0x00000054 + -0xfc) = 0x20;
                *(undefined4 **)((int)register0x00000054 + -0xf8) = puVar9;
                *(undefined4 *)((int)register0x00000054 + -0xf4) = 1;
                *(undefined4 *)((int)register0x00000054 + -0xf0) = 1;
                k3c_internal_pkg_printer___Printer__Send_event();
                *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
                *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
                return SUB84(dVar14,0);
              }
              iVar4 = *(int *)((int)register0x00000054 + 8);
              dVar14 = *(double *)((int)register0x00000054 + -0xb4);
              dVar15 = *DAT_004bd8b4;
              uVar11 = *(undefined1 *)((int)register0x00000054 + -0xd5);
              cVar8 = '\0';
              goto LAB_004bd5a0;
            }
            cVar8 = *(char *)((int)register0x00000054 + -0xd6);
            iVar4 = *(int *)((int)register0x00000054 + 8);
            dVar14 = *(double *)((int)register0x00000054 + -0xb4);
            dVar15 = *DAT_004bd8b4;
          }
          uVar11 = *(undefined1 *)((int)register0x00000054 + -0xd5);
        }
LAB_004bd5a0:
        *(undefined1 *)((int)register0x00000054 + -0xd5) = uVar11;
        dVar16 = *DAT_004bd8c8;
        if (dVar14 <= dVar16) {
          cVar7 = '\0';
        }
        else if (*(int *)(iVar4 + 8) == 0xc) {
          *(undefined4 *)((int)register0x00000054 + -0x104) = *(undefined4 *)(iVar4 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x100) = DAT_004bd8cc;
          *(undefined4 *)((int)register0x00000054 + -0xfc) = 0xc;
          FUN_00018250();
          dVar14 = (double)((ulonglong)dVar14 & 0xffffffff);
          cVar7 = *(char *)((int)register0x00000054 + -0xf8);
          uVar11 = *(undefined1 *)((int)register0x00000054 + -0xd5);
          iVar4 = *(int *)((int)register0x00000054 + 8);
          dVar15 = *DAT_004bd8b4;
          dVar16 = *DAT_004bd8c8;
          cVar8 = *(char *)((int)register0x00000054 + -0xd6);
        }
        else {
          cVar7 = '\0';
        }
        if ((cVar7 != '\0') && (cVar8 != '\0')) {
          FUN_0009defc(SUB84(dVar14,0),(int)((ulonglong)dVar14 >> 0x20),SUB84(dVar15,0),
                       (int)((ulonglong)dVar15 >> 0x20),SUB84(dVar16,0),0,
                       (undefined1 *)((int)register0x00000054 + -0x3c));
          uVar3 = *(undefined4 *)(extraout_r2_00 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x104) = *(undefined4 *)(extraout_r2_00 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x100) = uVar3;
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_004bd8a0;
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0xfc);
          *(undefined4 *)((int)register0x00000054 + -0x104) =
               *(undefined4 *)((int)register0x00000054 + -0x6c);
          *(undefined4 *)((int)register0x00000054 + -0x100) =
               *(undefined4 *)((int)register0x00000054 + -0xd4);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_004bd8a0;
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -0xfc);
          *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_004bd8a4;
          *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_004bd8e4;
          *(undefined4 *)((int)register0x00000054 + -0x104) = DAT_004bd8d4;
          *(undefined4 *)((int)register0x00000054 + -0x100) = 0x45;
          *(undefined1 **)((int)register0x00000054 + -0xfc) =
               (undefined1 *)((int)register0x00000054 + -0x3c);
          *(undefined4 *)((int)register0x00000054 + -0xf8) = 3;
          *(undefined4 *)((int)register0x00000054 + -0xf4) = 3;
          k3c_internal_pkg_logger_Errorf();
          *(undefined4 *)((int)register0x00000054 + -0x104) = DAT_004bd8d8;
          FUN_00022cf8();
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x100);
          *(undefined4 *)((int)register0x00000054 + -0x104) =
               *(undefined4 *)((int)register0x00000054 + -0x6c);
          *(undefined4 *)((int)register0x00000054 + -0x100) =
               *(undefined4 *)((int)register0x00000054 + -0xd4);
          FUN_0008f77c();
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0xfc);
          puVar9 = *(undefined4 **)((int)register0x00000054 + -4);
          *puVar9 = DAT_004bd8a0;
          if (*DAT_004bd8dc != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2_01;
            unaff_r8[1] = puVar9[1];
            uVar3 = extraout_r2_01;
          }
          puVar9[1] = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x104) =
               **(undefined4 **)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x100) = DAT_004bd8e8;
          *(undefined4 *)((int)register0x00000054 + -0xfc) = 0x21;
          *(undefined4 **)((int)register0x00000054 + -0xf8) = puVar9;
          *(undefined4 *)((int)register0x00000054 + -0xf4) = 1;
          *(undefined4 *)((int)register0x00000054 + -0xf0) = 1;
          k3c_internal_pkg_printer___Printer__Send_event();
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          return SUB84(dVar14,0);
        }
        *(undefined4 *)((int)register0x00000054 + -0x104) =
             *(undefined4 *)((int)register0x00000054 + -0x74);
        *(double *)((int)register0x00000054 + -0x100) =
             *(double *)((int)register0x00000054 + -0xbc) + 1.0;
        k3c_internal_pkg_reactor___Reactor__Pause
                  (*(undefined4 *)((int)register0x00000054 + -0x74),uVar11,iVar4);
        iVar5 = *(int *)((int)register0x00000054 + -0xc0) + 1;
        uVar12 = *(ulonglong *)((int)register0x00000054 + -0xf8);
        piVar1 = *(int **)((int)register0x00000054 + 4);
        iVar4 = *(int *)((int)register0x00000054 + 8);
        uVar11 = *(undefined1 *)((int)register0x00000054 + -0xd5);
      }
      *(undefined4 *)((int)register0x00000054 + -0x104) = DAT_004bd93c;
      FUN_00020b18();
LAB_004bd91c:
      *(undefined4 *)((int)register0x00000054 + -0x104) = DAT_004bd940;
      param_1 = FUN_00020b18();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x108);
      if ((bool)uVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x4bd934;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Set_temperature @ 004bd944 (size 1108) */

void k3c_internal_pkg_heater___PrinterHeaters__Set_temperature(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  undefined4 extraout_s2_01;
  double dVar5;
  undefined4 extraout_s3;
  undefined4 extraout_s3_00;
  undefined4 extraout_s3_01;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x10)) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x90);
      *(undefined4 *)((int)register0x00000054 + -0x90) = unaff_lr;
      dVar5 = *(double *)((int)register0x00000054 + 0xc);
      if (*(double *)(*(int *)((int)register0x00000054 + 8) + 0x28) < dVar5) {
        FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
        *(ulonglong *)((int)register0x00000054 + -0x28) = CONCAT44(extraout_s3,extraout_s2);
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        FUN_0008f6c0();
        *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_004bdd9c;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x84);
        *(undefined8 *)((int)register0x00000054 + -0x30) =
             *(undefined8 *)(*(int *)((int)register0x00000054 + 8) + 0x28);
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        FUN_0008f6c0();
        *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_004bdd9c;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x84);
        *(undefined8 *)((int)register0x00000054 + -0x38) =
             *(undefined8 *)(*(int *)((int)register0x00000054 + 8) + 0x28);
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        FUN_0008f6c0();
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_004bdd9c;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x84);
        *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_004bdda0;
        *(undefined4 *)((int)register0x00000054 + -0x88) = 0x31;
        *(undefined1 **)((int)register0x00000054 + -0x84) =
             (undefined1 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x80) = 3;
        *(undefined4 *)((int)register0x00000054 + -0x7c) = 3;
        k3c_internal_pkg_logger_Debugf();
        dVar5 = *(double *)(*(int *)((int)register0x00000054 + 8) + 0x28);
      }
      *(double *)((int)register0x00000054 + -0x70) = dVar5;
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_004bdda4;
      *(undefined4 *)((int)register0x00000054 + -0x84) = 0xb;
      *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_004bdda8;
      *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_004bddac;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      uVar4 = *(int *)((int)register0x00000054 + -0x78) == 0;
      if (!(bool)uVar4) {
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x74);
        *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_004bddb0;
        *(int *)((int)register0x00000054 + -0x88) = *(int *)((int)register0x00000054 + -0x78);
        FUN_00020dac();
        pcVar1 = *(code **)(*(int *)((int)register0x00000054 + -0x84) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        (*pcVar1)();
        if (*(char *)((int)register0x00000054 + -0x88) == '\0') {
          dVar5 = *(double *)((int)register0x00000054 + -0x70);
          if ((dVar5 < *(double *)(*(int *)((int)register0x00000054 + 8) + 0x18)) &&
             (0 < *(int *)((int)register0x00000054 + 0x18))) {
            FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
            *(ulonglong *)((int)register0x00000054 + -0x58) =
                 CONCAT44(extraout_s3_01,extraout_s2_01);
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_004bdd9c;
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            *(undefined8 *)((int)register0x00000054 + -0x60) =
                 *(undefined8 *)(*(int *)((int)register0x00000054 + 8) + 0x18);
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + -0x60);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_004bdd9c;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            *(undefined8 *)((int)register0x00000054 + -0x68) =
                 *(undefined8 *)(*(int *)((int)register0x00000054 + 8) + 0x18);
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + -0x68);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + -8) = DAT_004bdd9c;
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_004bddb8;
            *(undefined4 *)((int)register0x00000054 + -0x88) = 0x2c;
            *(undefined1 **)((int)register0x00000054 + -0x84) =
                 (undefined1 *)((int)register0x00000054 + -0x18);
            *(undefined4 *)((int)register0x00000054 + -0x80) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 3;
            k3c_internal_pkg_logger_Debugf();
            dVar5 = *(double *)(*(int *)((int)register0x00000054 + 8) + 0x18);
          }
        }
        else {
          dVar5 = *(double *)((int)register0x00000054 + -0x70);
          if ((dVar5 < *(double *)(*(int *)((int)register0x00000054 + 8) + 0x20)) &&
             (0 < *(int *)((int)register0x00000054 + 0x18))) {
            FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
            *(ulonglong *)((int)register0x00000054 + -0x40) =
                 CONCAT44(extraout_s3_00,extraout_s2_00);
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_004bdd9c;
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            *(undefined8 *)((int)register0x00000054 + -0x48) =
                 *(undefined8 *)(*(int *)((int)register0x00000054 + 8) + 0x20);
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + -0x48);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x44);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_004bdd9c;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            *(undefined8 *)((int)register0x00000054 + -0x50) =
                 *(undefined8 *)(*(int *)((int)register0x00000054 + 8) + 0x20);
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x4c);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + -8) = DAT_004bdd9c;
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_004bddb4;
            *(undefined4 *)((int)register0x00000054 + -0x88) = 0x31;
            *(undefined1 **)((int)register0x00000054 + -0x84) =
                 (undefined1 *)((int)register0x00000054 + -0x18);
            *(undefined4 *)((int)register0x00000054 + -0x80) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 3;
            k3c_internal_pkg_logger_Debugf();
            dVar5 = *(double *)(*(int *)((int)register0x00000054 + 8) + 0x20);
          }
        }
        *(double *)((int)register0x00000054 + -0x70) = dVar5;
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_004bddbc;
        *(undefined4 *)((int)register0x00000054 + -0x84) = 8;
        *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_004bdda8;
        *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_004bddac;
        k3c_internal_pkg_printer___Printer__Lookup_object();
        uVar4 = *(int *)((int)register0x00000054 + -0x78) == 0;
        if (!(bool)uVar4) {
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x74);
          *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_004bddc0;
          *(int *)((int)register0x00000054 + -0x88) = *(int *)((int)register0x00000054 + -0x78);
          FUN_00020dac();
          pcVar1 = *(code **)(*(int *)((int)register0x00000054 + -0x84) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_004bddc4;
          (*pcVar1)();
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined8 *)((int)register0x00000054 + -0x88) =
               *(undefined8 *)((int)register0x00000054 + -0x70);
          k3c_internal_pkg_heater___Heater__Set_temp();
          if ((*(char *)((int)register0x00000054 + 0x14) != '\0') &&
             (0.0 < *(double *)((int)register0x00000054 + -0x70))) {
            iVar2 = *(int *)((int)register0x00000054 + 8);
            *(undefined1 *)(iVar2 + 0xa8) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(int *)((int)register0x00000054 + -0x88) = iVar2;
            k3c_internal_pkg_heater___PrinterHeaters__Wait_for_temperature();
            *(undefined4 *)((int)register0x00000054 + 0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            *(undefined4 *)((int)register0x00000054 + 0x20) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            return;
          }
          *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_004bddc8;
        FUN_00020b18();
      }
      *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_004bddcc;
      param_1 = FUN_00020b18();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x90);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x4bdd94;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Cmd_TEMPERATURE_WAIT @ 004bddd0 (size 1200) */

void k3c_internal_pkg_heater___PrinterHeaters__Cmd_TEMPERATURE_WAIT(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  bool bVar10;
  undefined8 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x14)) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x94);
      *(undefined4 *)((int)register0x00000054 + -0x94) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x90) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_004be284;
      *(undefined4 *)((int)register0x00000054 + -0x88) = 6;
      *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_004be288;
      *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_004be28c;
      *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_004be290;
      *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_004be294;
      *(undefined4 *)((int)register0x00000054 + -0x74) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x70) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
      k3c_internal_pkg_gcode___GCodeCommand__Get();
      uVar2 = *(undefined4 *)((int)register0x00000054 + -100);
      *(undefined4 *)((int)register0x00000054 + -0x14) = uVar2;
      iVar3 = *(int *)((int)register0x00000054 + -0x60);
      *(int *)((int)register0x00000054 + -0x5c) = iVar3;
      iVar4 = *(int *)((int)register0x00000054 + 4);
      iVar5 = *(int *)(iVar4 + 0x1c);
      *(int *)((int)register0x00000054 + -0xc) = iVar5;
      iVar6 = *(int *)(iVar4 + 0x20);
      *(int *)((int)register0x00000054 + -0x30) = iVar6;
      iVar7 = 0;
      while( true ) {
        bVar10 = SBORROW4(iVar7,iVar6);
        iVar1 = iVar7 - iVar6;
        if (iVar6 <= iVar7) break;
        uVar8 = *(undefined4 *)(iVar5 + iVar7 * 8);
        if (*(int *)(iVar5 + iVar7 * 8 + 4) == iVar3) {
          *(int *)((int)register0x00000054 + -0x2c) = iVar7;
          *(undefined4 *)((int)register0x00000054 + -0x90) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar8;
          *(int *)((int)register0x00000054 + -0x88) = iVar3;
          FUN_00018250(uVar2,iVar3,iVar4);
          if (*(char *)((int)register0x00000054 + -0x84) != '\0') {
            bVar10 = SBORROW4(*(int *)((int)register0x00000054 + -0x2c),
                              *(int *)((int)register0x00000054 + -0x30));
            iVar1 = *(int *)((int)register0x00000054 + -0x2c) -
                    *(int *)((int)register0x00000054 + -0x30);
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x14);
            iVar3 = *(int *)((int)register0x00000054 + -0x5c);
            break;
          }
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x14);
          iVar3 = *(int *)((int)register0x00000054 + -0x5c);
          iVar4 = *(int *)((int)register0x00000054 + 4);
          iVar5 = *(int *)((int)register0x00000054 + -0xc);
          iVar6 = *(int *)((int)register0x00000054 + -0x30);
          iVar7 = *(int *)((int)register0x00000054 + -0x2c);
        }
        iVar7 = iVar7 + 1;
      }
      if (iVar1 < 0 == bVar10) {
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x90) = uVar2;
        *(int *)((int)register0x00000054 + -0x8c) = iVar3;
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_004be290;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x88);
        *(undefined4 *)((int)register0x00000054 + -0x90) = DAT_004be298;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = 0x11;
        *(undefined1 **)((int)register0x00000054 + -0x88) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x84) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
        k3c_internal_pkg_logger_Errorf();
      }
      *(undefined4 *)((int)register0x00000054 + -0x90) = DAT_004be29c;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 4;
      *(undefined4 *)((int)register0x00000054 + -0x88) = 0x40;
      FUN_000b5538();
      *(undefined8 *)((int)register0x00000054 + -0x40) =
           *(undefined8 *)((int)register0x00000054 + -0x84);
      *(undefined4 *)((int)register0x00000054 + -0x90) = DAT_004be29c;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 4;
      *(undefined4 *)((int)register0x00000054 + -0x88) = 0x40;
      FUN_000b5538();
      *(undefined8 *)((int)register0x00000054 + -0x48) =
           *(undefined8 *)((int)register0x00000054 + -0x84);
      *(undefined8 *)((int)register0x00000054 + -0x20) =
           *(undefined8 *)((int)register0x00000054 + -0x84);
      *(undefined4 *)((int)register0x00000054 + -0x90) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_004be2a0;
      *(undefined4 *)((int)register0x00000054 + -0x88) = 7;
      *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_004be2a4;
      *(undefined1 **)((int)register0x00000054 + -0x80) =
           (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x78) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x74) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x70) = 0;
      k3c_internal_pkg_gcode___GCodeCommand__Get_float();
      *(undefined8 *)((int)register0x00000054 + -0x58) =
           *(undefined8 *)((int)register0x00000054 + -0x6c);
      *(undefined8 *)((int)register0x00000054 + -0x28) =
           *(undefined8 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x90) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_004be2a8;
      *(undefined4 *)((int)register0x00000054 + -0x88) = 7;
      *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_004be2a4;
      *(undefined1 **)((int)register0x00000054 + -0x80) =
           (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
      *(undefined1 **)((int)register0x00000054 + -0x78) =
           (undefined1 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x74) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x70) = 0;
      k3c_internal_pkg_gcode___GCodeCommand__Get_float();
      *(double *)((int)register0x00000054 + -0x50) = *(double *)((int)register0x00000054 + -0x6c);
      if ((*(double *)((int)register0x00000054 + -0x58) ==
           *(double *)((int)register0x00000054 + -0x48)) &&
         (*(double *)((int)register0x00000054 + -0x6c) ==
          *(double *)((int)register0x00000054 + -0x40))) {
        *(undefined4 *)((int)register0x00000054 + -0x90) = DAT_004be2ac;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = 0x36;
        *(undefined4 *)((int)register0x00000054 + -0x88) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x80) = 0;
        k3c_internal_pkg_logger_Errorf();
      }
      uVar2 = *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x90) = DAT_004be2b0;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_004be2b4;
      *(undefined4 *)((int)register0x00000054 + -0x84) = 0xb;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x7c) != '\0') {
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        return;
      }
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x90) = DAT_004be2b8;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x88) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x84) =
           *(undefined4 *)((int)register0x00000054 + -0x5c);
      FUN_00025f60();
      if (**(int **)((int)register0x00000054 + -0x80) != 0) {
        uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
        *(undefined4 *)((int)register0x00000054 + -0x90) = DAT_004be2b8;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x84) =
             *(undefined4 *)((int)register0x00000054 + -0x5c);
        FUN_00025f60();
        uVar2 = **(undefined4 **)((int)register0x00000054 + -0x80);
        goto LAB_004be148;
      }
      *(undefined4 *)((int)register0x00000054 + -0x90) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x88) =
           *(undefined4 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_004be288;
      *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_004be28c;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      bVar10 = *(int *)((int)register0x00000054 + -0x7c) == DAT_004be2bc;
      if (bVar10) {
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x78);
LAB_004be148:
        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 0xc);
        k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar2);
        uVar11 = *(undefined8 *)((int)register0x00000054 + -0x90);
        while( true ) {
          *(undefined8 *)((int)register0x00000054 + -0x38) = uVar11;
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          *(undefined8 *)((int)register0x00000054 + -0x8c) = uVar11;
          k3c_internal_pkg_heater___Heater__Get_temp();
          if ((*(double *)((int)register0x00000054 + -0x58) <=
               *(double *)((int)register0x00000054 + -0x84)) &&
             (*(double *)((int)register0x00000054 + -0x84) <=
              *(double *)((int)register0x00000054 + -0x50))) {
            *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined8 *)((int)register0x00000054 + -0x8c) =
               *(undefined8 *)((int)register0x00000054 + -0x38);
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          k3c_internal_pkg_heater___PrinterHeaters__Get_temp();
          if (*(int *)((int)register0x00000054 + -0x74) != 0) {
            *(int *)((int)register0x00000054 + 0xc) = *(int *)((int)register0x00000054 + -0x74);
            *(undefined4 *)((int)register0x00000054 + 0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x70);
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(double *)((int)register0x00000054 + -0x8c) =
               *(double *)((int)register0x00000054 + -0x38) + 1.0;
          k3c_internal_pkg_reactor___Reactor__Pause();
          if (*(char *)(**(int **)((int)register0x00000054 + 4) + 0x18) != '\0') break;
          uVar11 = *(undefined8 *)((int)register0x00000054 + -0x84);
        }
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        return;
      }
      *(int *)((int)register0x00000054 + -0x90) = *(int *)((int)register0x00000054 + -0x7c);
      *(int *)((int)register0x00000054 + -0x8c) = DAT_004be2bc;
      *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_004be2c0;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x94);
      if (bVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x4be27c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.Load_config_heaters @ 004be2c4 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater_Load_config_heaters(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4be2fc;
    FUN_0009bf64();
  }
  k3c_internal_pkg_heater_NewPrinterHeaters();
  in_stack_00000008 = _UNK_004be304;
                    /* WARNING: Could not recover jumptable at 0x004be2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.MustLookupHeaters @ 004be308 (size 200) */

void k3c_internal_pkg_heater_MustLookupHeaters(undefined4 param_1)

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
           PTR_s_heaterstmc2209adxl345buttonsled__008216f7_0x506_004be3d4;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 7;
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_004be3d8;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_004be3dc;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      if (*(undefined **)((int)register0x00000054 + -0x18) == PTR_DAT_004be3e0) {
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_004be3e4;
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_004be3e8;
      *(undefined **)((int)register0x00000054 + -8) =
           *(undefined **)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_004be3ec;
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
    unaff_lr = 0x4be3cc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.NewPrinterHeaterBed @ 004be3f0 (size 932) */

void k3c_internal_pkg_heater_NewPrinterHeaterBed(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 *puVar4;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar5;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  undefined8 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x48) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004be798;
      FUN_00022cf8();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x40);
      puVar4 = *(undefined4 **)((int)register0x00000054 + 4);
      uVar5 = *puVar4;
      if (*(int *)PTR_DAT_004be79c != 0) {
        FUN_0009db54();
        *unaff_r8 = extraout_r3;
        puVar3 = extraout_r1;
        puVar4 = extraout_r2;
        uVar5 = extraout_r3;
      }
      *(undefined4 **)((int)register0x00000054 + -0xc) = puVar3;
      *puVar3 = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x44) = uVar5;
      *(undefined4 **)((int)register0x00000054 + -0x40) = puVar4;
      *(undefined **)((int)register0x00000054 + -0x3c) =
           PTR_s_heaterstmc2209adxl345buttonsled__008216f7_0x506_004be7a0;
      *(undefined4 *)((int)register0x00000054 + -0x38) = 7;
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_004be7a4;
      *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004be7a8;
      k3c_internal_pkg_printer___Printer__Load_object();
      uVar8 = CONCAT44(PTR_DAT_004be7ac,*(undefined **)((int)register0x00000054 + -0x2c));
      uVar7 = 0;
      if (*(undefined **)((int)register0x00000054 + -0x2c) == PTR_DAT_004be7ac) {
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_004be7b0;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
        k3c_internal_pkg_heater___PrinterHeaters__Setup_heater();
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x34);
        if (*(int *)PTR_DAT_004be79c == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -0xc);
        }
        else {
          FUN_0009db64();
          *unaff_r8 = extraout_r1_00;
          iVar1 = *(int *)((int)register0x00000054 + -0xc);
          unaff_r8[1] = *(undefined4 *)(iVar1 + 4);
          uVar5 = extraout_r1_00;
        }
        *(undefined4 *)(iVar1 + 4) = uVar5;
        *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004be7b4;
        FUN_00022cf8();
        puVar4 = *(undefined4 **)((int)register0x00000054 + -0x40);
        *puVar4 = PTR_k3c_internal_pkg_heater___Heater__Get_status_fm_004be7b8;
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0xc);
        uVar5 = puVar3[1];
        if (*(int *)PTR_DAT_004be79c != 0) {
          puVar4 = (undefined4 *)FUN_0009db74();
          *unaff_r8 = extraout_r3_00;
          unaff_r8[1] = puVar4;
          unaff_r8[2] = extraout_r2_00[2];
          puVar3 = extraout_r2_00;
          uVar5 = extraout_r3_00;
        }
        puVar4[1] = uVar5;
        puVar3[2] = puVar4;
        *(undefined4 *)((int)register0x00000054 + -0x44) = *puVar3;
        *(undefined **)((int)register0x00000054 + -0x40) =
             PTR_s_gcodeok__sM8844_helpReady_________00820821_0x5d2_004be7bc;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 5;
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004be7a4;
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_004be7a8;
        k3c_internal_pkg_printer___Printer__Lookup_object();
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004be7c0;
        FUN_00022cf8();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x40);
        *puVar3 = PTR_k3c_internal_pkg_heater___PrinterHeaterBed__Cmd_M140_fm_004be7c4;
        if (*(int *)PTR_DAT_004be79c == 0) {
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0xc);
        }
        else {
          puVar3 = (undefined4 *)FUN_0009db54();
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *unaff_r8 = uVar5;
        }
        puVar3[1] = uVar5;
        uVar7 = *(undefined **)((int)register0x00000054 + -0x24) == PTR_DAT_004be7c8;
        if ((bool)uVar7) {
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined **)((int)register0x00000054 + -0x40) =
               PTR_s_M140beta_02xmisomosisclkhighcan0_00820821_0x28d_004be7cc;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 4;
          *(undefined4 **)((int)register0x00000054 + -0x38) = puVar3;
          *(undefined1 *)((int)register0x00000054 + -0x34) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
          k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
          *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004be7c0;
          FUN_00022cf8();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x40);
          *puVar3 = PTR_k3c_internal_pkg_heater___PrinterHeaterBed__Cmd_M190_fm_004be7d0;
          if (*(int *)PTR_DAT_004be79c == 0) {
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0xc);
          }
          else {
            puVar3 = (undefined4 *)FUN_0009db54();
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0xc);
            *unaff_r8 = uVar5;
          }
          puVar3[1] = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined **)((int)register0x00000054 + -0x40) =
               PTR_s_M190_acmPETGSILKtestSTEPMODEi___i_00820821_0x261_004be7d4;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 4;
          *(undefined4 **)((int)register0x00000054 + -0x38) = puVar3;
          *(undefined1 *)((int)register0x00000054 + -0x34) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
          k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
          pcVar2 = (code *)**(undefined4 **)PTR_DAT_004be7d8;
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               **(undefined4 **)((int)register0x00000054 + -0xc);
          uVar5 = (*pcVar2)();
          FUN_0009e2f0(uVar5,*(undefined4 *)((int)register0x00000054 + -0x40),
                       (undefined1 *)((int)register0x00000054 + -0x20));
          *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004be7c0;
          FUN_00022cf8();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x40);
          *puVar3 = PTR_k3c_internal_pkg_heater___PrinterHeaterBed__setHeaterBedTemp_fm_004be7dc;
          if (*(int *)PTR_DAT_004be79c == 0) {
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0xc);
          }
          else {
            puVar3 = (undefined4 *)FUN_0009db54();
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0xc);
            *unaff_r8 = uVar5;
          }
          *(undefined4 **)((int)register0x00000054 + -4) = puVar3;
          puVar3[1] = uVar5;
          *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004be7e0;
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_004be7e4;
          *(undefined4 *)((int)register0x00000054 + -0x38) = 0x13;
          FUN_00093560();
          if (*(char *)((int)register0x00000054 + -0x30) == '\0') {
            *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_004be7e0;
            *(undefined4 *)((int)register0x00000054 + -0x40) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c);
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_004be7e4;
            *(undefined4 *)((int)register0x00000054 + -0x38) = 0x13;
            FUN_00093a08();
            puVar3 = *(undefined4 **)((int)register0x00000054 + -0x34);
            if (*(int *)PTR_DAT_004be79c == 0) {
              uVar5 = *(undefined4 *)((int)register0x00000054 + -4);
            }
            else {
              puVar3 = (undefined4 *)FUN_0009db64();
              uVar5 = *(undefined4 *)((int)register0x00000054 + -4);
              *unaff_r8 = uVar5;
              unaff_r8[1] = *puVar3;
            }
            *puVar3 = uVar5;
          }
          *(undefined4 *)((int)register0x00000054 + 8) =
               *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x004be758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x48))();
          return;
        }
        *(undefined **)((int)register0x00000054 + -0x44) =
             *(undefined **)((int)register0x00000054 + -0x24);
        *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_004be7c8;
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_004be7e8;
        uVar8 = FUN_000209b4();
      }
      *(undefined8 *)((int)register0x00000054 + -0x44) = uVar8;
      *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_004be7e8;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x48);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x4be790;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*PrinterHeaterBed).Stats @ 004be7ec (size 80) */

void k3c_internal_pkg_heater___PrinterHeaterBed__Stats(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined1 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4be838;
    FUN_0009bf64();
  }
  k3c_internal_pkg_heater___Heater__Stats();
                    /* WARNING: Could not recover jumptable at 0x004be82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaterBed).setHeaterBedTemp @ 004be83c (size 128) */

void k3c_internal_pkg_heater___PrinterHeaterBed__setHeaterBedTemp(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_web___WebRequest__get_float();
  k3c_internal_pkg_heater___Heater__Set_temp();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaterBed).Cmd_M140 @ 004be8cc (size 76) */

void k3c_internal_pkg_heater___PrinterHeaterBed__Cmd_M140(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4be914;
    FUN_0009bf64();
  }
  k3c_internal_pkg_heater___PrinterHeaterBed__setTemperature();
                    /* WARNING: Could not recover jumptable at 0x004be908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaterBed).Cmd_M190 @ 004be918 (size 76) */

void k3c_internal_pkg_heater___PrinterHeaterBed__Cmd_M190(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4be960;
    FUN_0009bf64();
  }
  k3c_internal_pkg_heater___PrinterHeaterBed__setTemperature();
                    /* WARNING: Could not recover jumptable at 0x004be954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaterBed).setTemperature @ 004be964 (size 256) */

void k3c_internal_pkg_heater___PrinterHeaterBed__setTemperature
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  undefined8 uVar4;
  
  do {
    uVar4 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x38) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_004bea68;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_004bea6c;
      *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_004bea70;
      *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
      k3c_internal_pkg_gcode___GCodeCommand__Get_float();
      uVar1 = **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined8 *)((int)register0x00000054 + -8) =
           *(undefined8 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x34) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_004bea74;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 7;
      *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_004bea78;
      *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_004bea7c;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      bVar3 = *(int *)((int)register0x00000054 + -0x20) == DAT_004bea80;
      if (bVar3) {
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar1;
        *(undefined8 *)((int)register0x00000054 + -0x2c) =
             *(undefined8 *)((int)register0x00000054 + -8);
        *(undefined1 *)((int)register0x00000054 + -0x24) =
             *(undefined1 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
        k3c_internal_pkg_heater___PrinterHeaters__Set_temperature();
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        return;
      }
      *(int *)((int)register0x00000054 + -0x34) = *(int *)((int)register0x00000054 + -0x20);
      *(int *)((int)register0x00000054 + -0x30) = DAT_004bea80;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_004bea84;
      unaff_lr = 0x4bea54;
      uVar4 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x38);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x4bea60;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/heater.Load_config_Heater_bed @ 004bea88 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater_Load_config_Heater_bed(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4beac0;
    FUN_0009bf64();
  }
  k3c_internal_pkg_heater_NewPrinterHeaterBed();
  in_stack_00000008 = _UNK_004beac8;
                    /* WARNING: Could not recover jumptable at 0x004beab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.Load_config_heater_Generic @ 004beacc (size 296) */

void k3c_internal_pkg_heater_Load_config_heater_Generic(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 **)((int)register0x00000054 + -0x24) =
           *(undefined4 **)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x20) =
           PTR_s_heaterstmc2209adxl345buttonsled__008216f7_0x506_004bebf8;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = 7;
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_004bebfc;
      *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_004bec00;
      k3c_internal_pkg_printer___Printer__Load_object();
      if (*(undefined **)((int)register0x00000054 + -0x10) == PTR_DAT_004bec04) {
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 0;
        k3c_internal_pkg_heater___PrinterHeaters__Setup_heater();
        *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_004bec08;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
                    /* WARNING: Could not recover jumptable at 0x004beb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x2c))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_004bec04;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_004bec0c;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 0x28;
      *(undefined1 **)((int)register0x00000054 + -0x20) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      k3c_internal_pkg_logger_Errorf();
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_004bec04;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_004bec10;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 0x27;
      *(undefined1 **)((int)register0x00000054 + -0x20) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      FUN_001386c4();
      bVar3 = *(int *)((int)register0x00000054 + -0x14) == 0;
      uVar1 = 0;
      if (!bVar3) {
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x14) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0x28) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + -0x10);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x2c);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x4bebf0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*Thermistor).Setup_coefficients @ 004bec14 (size 672) */

void k3c_internal_pkg_heater___Thermistor__Setup_coefficients(undefined4 param_1)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  int unaff_r10;
  double dVar4;
  undefined4 extraout_s1;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int in_stack_00000004;
  double in_stack_00000008;
  double in_stack_00000018;
  double in_stack_00000028;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined8 local_30;
  undefined *local_28;
  undefined4 local_24;
  undefined *local_20;
  undefined4 local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&local_30 <= *(undefined8 **)(unaff_r10 + 8)) {
    param_1 = FUN_0009bf64();
  }
  dVar5 = *(double *)PTR_DAT_004beeb8;
  dVar6 = 1.0 / (in_stack_00000008 - dVar5);
  dVar9 = dVar6 - 1.0 / (in_stack_00000018 - dVar5);
  uVar3 = FUN_000b05f4(param_1);
  dVar1 = (double)CONCAT44(uStack_a0,local_a4);
  uVar3 = FUN_000b05f4(uVar3);
  dVar7 = dVar1 - (double)CONCAT44(uStack_a0,local_a4);
  uVar3 = FUN_000b05f4(uVar3);
  dVar8 = dVar1 - (double)CONCAT44(uStack_a0,local_a4);
  uVar3 = FUN_000b0b80(uVar3);
  dVar2 = (double)CONCAT44(uStack_98,local_9c);
  uVar3 = FUN_000b0b80(uVar3);
  dVar4 = dVar2 - (double)CONCAT44(uStack_98,local_9c);
  FUN_000b0b80(uVar3);
  dVar5 = (dVar9 - ((dVar6 - 1.0 / (in_stack_00000028 - dVar5)) * dVar7) / dVar8) /
          (dVar4 - (dVar7 * (dVar2 - (double)CONCAT44(uStack_98,local_9c))) / dVar8);
  *(double *)(in_stack_00000004 + 0x20) = dVar5;
  if (dVar5 <= 0.0) {
    uVar3 = FUN_0009df04(0,&local_28);
    local_30 = CONCAT44(extraout_s1,uVar3);
    FUN_0008f6c0();
    local_28 = PTR_DAT_004beebc;
    local_24 = 0;
    FUN_0008f77c();
    local_20 = PTR_DAT_004beec0;
    local_1c = 0;
    FUN_0009defc(0,&local_18);
    local_18 = PTR_k3c_internal_pkg_heater___Thermistor__Setup_coefficients_Printf_func1_004beec4;
    local_10 = 0x28;
    local_14 = PTR_DAT_004beec8;
    local_8 = 2;
    local_4 = 2;
    local_c = &local_28;
    FUN_00178514();
    k3c_internal_pkg_heater___Thermistor__Setup_coefficients_beta();
    return;
  }
  dVar7 = (dVar9 - dVar5 * dVar4) / dVar7;
  *(double *)(in_stack_00000004 + 0x18) = dVar7;
  *(double *)(in_stack_00000004 + 0x10) = (dVar6 - dVar7 * dVar1) - dVar2 * dVar5;
  return;
}



/* k3c/internal/pkg/heater.(*Thermistor).Setup_coefficients.Printf.func1 @ 004beed0 (size 124) */

void k3c_internal_pkg_heater___Thermistor__Setup_coefficients_Printf_func1(void)

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
  FUN_0013b7d0();
  return;
}



/* k3c/internal/pkg/heater.(*Thermistor).Setup_coefficients_beta @ 004bef4c (size 128) */

void k3c_internal_pkg_heater___Thermistor__Setup_coefficients_beta(undefined4 param_1)

{
  int unaff_r10;
  double dVar1;
  double dVar2;
  int in_stack_00000004;
  double in_stack_00000008;
  undefined8 in_stack_00000010;
  double in_stack_00000018;
  double local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_0009bf64();
  }
  dVar1 = in_stack_00000008 - *DAT_004befd0;
  dVar2 = 1.0 / in_stack_00000018;
  FUN_000b05f4(param_1);
  *(undefined8 *)(in_stack_00000004 + 0x20) = 0;
  *(double *)(in_stack_00000004 + 0x18) = dVar2;
  *(double *)(in_stack_00000004 + 0x10) = 1.0 / dVar1 - dVar2 * local_18;
  return;
}



/* k3c/internal/pkg/heater.(*Thermistor).Calc_temp @ 004befd4 (size 212) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___Thermistor__Calc_temp(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  double in_stack_00000010;
  double dStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4bf0a4;
    param_1 = FUN_0009bf64();
  }
  uVar1 = FUN_000afda8(param_1);
  FUN_000afca0(uVar1);
  FUN_000b05f4();
  FUN_000b0b80();
  in_stack_00000010 =
       *_UNK_004bf0b4 +
       1.0 / (*(double *)(in_stack_00000004 + 0x10) +
              *(double *)(in_stack_00000004 + 0x18) * dStack_10 +
             *(double *)(in_stack_00000004 + 0x20) * dStack_10);
                    /* WARNING: Could not recover jumptable at 0x004bf098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*Thermistor).Calc_adc @ 004bf0b8 (size 332) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___Thermistor__Calc_adc(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  double *in_stack_00000004;
  double in_stack_00000008;
  double in_stack_00000010;
  double dStack_30;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x4bf200;
    FUN_0009bf64();
  }
  if (in_stack_00000008 <= *_UNK_004bf208) {
    in_stack_00000010 = 1.0;
                    /* WARNING: Could not recover jumptable at 0x004bf1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (in_stack_00000004[4] != 0.0) {
    FUN_000b0b80();
    FUN_000b0b80();
    FUN_000b0b80();
    dStack_30 = *_UNK_004bf20c;
    FUN_000b0b80();
  }
  FUN_000afea8();
  in_stack_00000010 =
       (in_stack_00000004[1] + dStack_30) / (*in_stack_00000004 + in_stack_00000004[1] + dStack_30);
                    /* WARNING: Could not recover jumptable at 0x004bf1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/heater.PrinterThermistor @ 004bf210 (size 900) */

/* WARNING: Removing unreachable block (ram,0x004bf338) */

void k3c_internal_pkg_heater_PrinterThermistor(void)

{
  undefined8 *puVar1;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_8;
  undefined8 *local_4;
  
  while (&local_8 <= *(undefined4 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
  puVar1 = DAT_004bf5a4;
  k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
  FUN_00022cf8();
  local_4 = puVar1;
  *puVar1 = CONCAT44(uStack_48,local_4c);
  puVar1[1] = CONCAT44(uStack_48,local_4c);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_00093560();
  local_8 = *(undefined4 *)(in_stack_00000004 + 0xc);
  FUN_00025f60();
  FUN_00025f60();
  FUN_00025f60();
  FUN_00025f60();
  FUN_00025f60();
  FUN_00025f60();
  k3c_internal_pkg_heater___Thermistor__Setup_coefficients();
  k3c_internal_pkg_heater_NewPrinterADCtoTemperature();
  return;
}



/* k3c/internal/pkg/heater.NewCustomThermistor @ 004bf5d4 (size 1992) */

void k3c_internal_pkg_heater_NewCustomThermistor(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *extraout_r2;
  uint extraout_r2_00;
  uint uVar5;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint uVar6;
  undefined1 *puVar7;
  double *pdVar8;
  undefined4 *unaff_r8;
  undefined1 *puVar9;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  undefined1 uVar11;
  undefined4 extraout_s1;
  undefined8 uVar12;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x5c)) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0xdc);
      *(undefined4 *)((int)register0x00000054 + -0xdc) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0xd8) = PTR_DAT_004bfd9c;
      FUN_00022cf8();
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + -0xd4);
      *(undefined4 *)((int)register0x00000054 + -0xd8) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0xd4) = uVar3;
      *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_004bfda0;
      *(undefined4 *)((int)register0x00000054 + -0xcc) = 1;
      *(undefined4 *)((int)register0x00000054 + -200) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xc4) = 0xffffffff;
      FUN_0014f168();
      iVar1 = *(int *)((int)register0x00000054 + -0xbc);
      uVar11 = iVar1 == 1;
      if (iVar1 != 0) {
        *(uint *)((int)register0x00000054 + -0xd8) =
             *(int *)((int)register0x00000054 + -0xc0) +
             (1 - *(int *)((int)register0x00000054 + -0xb8) >> 0x1f & 8U);
        *(int *)((int)register0x00000054 + -0xd4) = iVar1 + -1;
        *(int *)((int)register0x00000054 + -0xd0) = *(int *)((int)register0x00000054 + -0xb8) + -1;
        *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_004bfda0;
        *(undefined4 *)((int)register0x00000054 + -200) = 1;
        FUN_0014f8fc();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc4);
        puVar4 = *(undefined4 **)((int)register0x00000054 + -0x2c);
        puVar4[1] = *(undefined4 *)((int)register0x00000054 + -0xc0);
        if (*(int *)PTR_DAT_004bfda4 != 0) {
          FUN_0009db64();
          *unaff_r8 = extraout_r1;
          unaff_r8[1] = *extraout_r2;
          uVar2 = extraout_r1;
          puVar4 = extraout_r2;
        }
        *puVar4 = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0xd8) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0xd4) =
             PTR_s_temperature1temperature2temperat_008262d0_0x365_004bfda8;
        *(undefined4 *)((int)register0x00000054 + -0xd0) = 0xc;
        *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_004bfdac;
        *(undefined **)((int)register0x00000054 + -200) = PTR_SUB_004bfdb0;
        *(undefined8 *)((int)register0x00000054 + -0xc4) = *(undefined8 *)PTR_DAT_004bfdb4;
        *(undefined8 *)((int)register0x00000054 + -0xbc) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xb4) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xac) = 0;
        *(undefined1 *)((int)register0x00000054 + -0xa4) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        *(undefined8 *)((int)register0x00000054 + -0x88) =
             *(undefined8 *)((int)register0x00000054 + -0xa0);
        *(undefined4 *)((int)register0x00000054 + -0xd8) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0xd4) = PTR_DAT_004bfdb8;
        *(undefined4 *)((int)register0x00000054 + -0xd0) = 0xb;
        *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_004bfdac;
        *(undefined **)((int)register0x00000054 + -200) = PTR_SUB_004bfdbc;
        *(undefined8 *)((int)register0x00000054 + -0xc4) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xbc) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xb4) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xac) = 0;
        *(undefined1 *)((int)register0x00000054 + -0xa4) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        *(undefined8 *)((int)register0x00000054 + -0x78) =
             *(undefined8 *)((int)register0x00000054 + -0xa0);
        *(undefined4 *)((int)register0x00000054 + -0xd8) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0xd4) =
             PTR_s_beta_02xmisomosisclkhighcan0mcu_N_00820821_0x291_004bfdc0;
        *(undefined4 *)((int)register0x00000054 + -0xd0) = 4;
        *(undefined4 *)((int)register0x00000054 + -0xcc) = 0;
        *(undefined4 *)((int)register0x00000054 + -200) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xc4) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xbc) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xb4) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xac) = 0;
        *(undefined1 *)((int)register0x00000054 + -0xa4) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        if (*(double *)((int)register0x00000054 + -0xa0) != 0.0) {
          *(double *)((int)register0x00000054 + -0x6c) =
               *(double *)((int)register0x00000054 + -0xa0);
          FUN_000908bc();
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xd8);
          *(undefined4 *)((int)register0x00000054 + -0x28) = uVar2;
          *(undefined **)((int)register0x00000054 + -0xd8) = PTR_DAT_004bfde4;
          *(undefined4 *)((int)register0x00000054 + -0xd4) = uVar2;
          *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_00820492_2_004bfde8;
          *(undefined4 *)((int)register0x00000054 + -0xcc) = 2;
          FUN_00093a08();
          **(undefined8 **)((int)register0x00000054 + -200) =
               *(undefined8 *)((int)register0x00000054 + -0x88);
          *(undefined **)((int)register0x00000054 + -0xd8) = PTR_DAT_004bfde4;
          *(undefined4 *)((int)register0x00000054 + -0xd4) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_004bfdec;
          *(undefined4 *)((int)register0x00000054 + -0xcc) = 2;
          FUN_00093a08();
          **(undefined8 **)((int)register0x00000054 + -200) =
               *(undefined8 *)((int)register0x00000054 + -0x78);
          *(undefined **)((int)register0x00000054 + -0xd8) = PTR_DAT_004bfde4;
          *(undefined4 *)((int)register0x00000054 + -0xd4) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined **)((int)register0x00000054 + -0xd0) =
               PTR_s_beta_02xmisomosisclkhighcan0mcu_N_00820821_0x291_004bfdc0;
          *(undefined4 *)((int)register0x00000054 + -0xcc) = 4;
          FUN_00093a08();
          **(undefined8 **)((int)register0x00000054 + -200) =
               *(undefined8 *)((int)register0x00000054 + -0x6c);
          if (*(int *)PTR_DAT_004bfda4 == 0) {
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x28);
            iVar1 = *(int *)((int)register0x00000054 + -0x2c);
          }
          else {
            FUN_0009db64();
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x28);
            *unaff_r8 = uVar2;
            iVar1 = *(int *)((int)register0x00000054 + -0x2c);
            unaff_r8[1] = *(undefined4 *)(iVar1 + 0x40);
          }
          *(undefined4 *)(iVar1 + 0x40) = uVar2;
          *(int *)((int)register0x00000054 + 8) = iVar1;
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0xd8) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0xd4) =
             PTR_s_temperature2temperature3heating__008262d0_0x371_004bfdc4;
        *(undefined4 *)((int)register0x00000054 + -0xd0) = 0xc;
        *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_004bfdac;
        *(undefined **)((int)register0x00000054 + -200) = PTR_SUB_004bfdc8;
        *(undefined8 *)((int)register0x00000054 + -0xc4) = *(undefined8 *)PTR_DAT_004bfdb4;
        *(undefined8 *)((int)register0x00000054 + -0xbc) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xb4) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xac) = 0;
        *(undefined1 *)((int)register0x00000054 + -0xa4) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        *(undefined8 *)((int)register0x00000054 + -0x90) =
             *(undefined8 *)((int)register0x00000054 + -0xa0);
        *(undefined4 *)((int)register0x00000054 + -0xd8) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0xd4) = PTR_DAT_004bfdcc;
        *(undefined4 *)((int)register0x00000054 + -0xd0) = 0xb;
        *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_004bfdac;
        *(undefined **)((int)register0x00000054 + -200) = PTR_SUB_004bfdd0;
        *(undefined8 *)((int)register0x00000054 + -0xc4) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xbc) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xb4) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xac) = 0;
        *(undefined1 *)((int)register0x00000054 + -0xa4) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        *(undefined8 *)((int)register0x00000054 + -0x80) =
             *(undefined8 *)((int)register0x00000054 + -0xa0);
        *(undefined4 *)((int)register0x00000054 + -0xd8) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0xd4) =
             PTR_s_temperature3heating_gainerase_fi_008262d0_0x37d_004bfdd4;
        *(undefined4 *)((int)register0x00000054 + -0xd0) = 0xc;
        *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_004bfdac;
        *(undefined **)((int)register0x00000054 + -200) = PTR_SUB_004bfdd8;
        *(undefined8 *)((int)register0x00000054 + -0xc4) = *(undefined8 *)PTR_DAT_004bfdb4;
        *(undefined8 *)((int)register0x00000054 + -0xbc) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xb4) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xac) = 0;
        *(undefined1 *)((int)register0x00000054 + -0xa4) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        *(undefined8 *)((int)register0x00000054 + -0x98) =
             *(undefined8 *)((int)register0x00000054 + -0xa0);
        *(undefined4 *)((int)register0x00000054 + -0xd8) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0xd4) = PTR_DAT_004bfddc;
        *(undefined4 *)((int)register0x00000054 + -0xd0) = 0xb;
        *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_004bfdac;
        *(undefined **)((int)register0x00000054 + -200) = PTR_SUB_004bfde0;
        *(undefined8 *)((int)register0x00000054 + -0xc4) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xbc) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xb4) = 0;
        *(undefined8 *)((int)register0x00000054 + -0xac) = 0;
        *(undefined1 *)((int)register0x00000054 + -0xa4) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        uVar3 = FUN_0009def0((int)*(undefined8 *)((int)register0x00000054 + -0xa0),0,
                             (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined8 *)((int)register0x00000054 + -0x3c) =
             *(undefined8 *)((int)register0x00000054 + -0x88);
        *(undefined8 *)((int)register0x00000054 + -0x34) =
             *(undefined8 *)((int)register0x00000054 + -0x78);
        uVar2 = 2;
        *(undefined4 *)((int)register0x00000054 + -0x20) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 2;
        *(undefined1 **)((int)register0x00000054 + -0x24) =
             (undefined1 *)((int)register0x00000054 + -0x3c);
        *(undefined8 *)((int)register0x00000054 + -0x4c) =
             *(undefined8 *)((int)register0x00000054 + -0x90);
        *(undefined8 *)((int)register0x00000054 + -0x44) =
             *(undefined8 *)((int)register0x00000054 + -0x80);
        *(undefined4 *)((int)register0x00000054 + -0x14) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x10) = 2;
        *(undefined1 **)((int)register0x00000054 + -0x18) =
             (undefined1 *)((int)register0x00000054 + -0x4c);
        *(undefined8 *)((int)register0x00000054 + -0x5c) =
             *(undefined8 *)((int)register0x00000054 + -0x98);
        *(ulonglong *)((int)register0x00000054 + -0x54) = CONCAT44(extraout_s1,uVar3);
        *(undefined4 *)((int)register0x00000054 + -8) = 2;
        *(undefined4 *)((int)register0x00000054 + -4) = 2;
        *(undefined1 **)((int)register0x00000054 + -0xc) =
             (undefined1 *)((int)register0x00000054 + -0x5c);
        iVar1 = 0;
        do {
          uVar12 = CONCAT44(iVar1,uVar2);
          if (iVar1 < 2) {
            *(int *)((int)register0x00000054 + -0x70) = iVar1;
            uVar5 = 0;
          }
          else {
            FUN_000908bc(uVar2);
            if (*(int *)((int)register0x00000054 + -0x20) != 0) {
              uVar2 = *(undefined4 *)((int)register0x00000054 + -0xd8);
              *(undefined4 *)((int)register0x00000054 + -0x28) = uVar2;
              *(undefined8 *)((int)register0x00000054 + -100) =
                   **(undefined8 **)((int)register0x00000054 + -0x24);
              *(undefined **)((int)register0x00000054 + -0xd8) = PTR_DAT_004bfde4;
              *(undefined4 *)((int)register0x00000054 + -0xd4) = uVar2;
              *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_00820492_2_004bfde8;
              *(undefined4 *)((int)register0x00000054 + -0xcc) = 2;
              FUN_00093a08();
              **(undefined8 **)((int)register0x00000054 + -200) =
                   *(undefined8 *)((int)register0x00000054 + -100);
              if (1 < *(uint *)((int)register0x00000054 + -0x20)) {
                *(undefined8 *)((int)register0x00000054 + -100) =
                     *(undefined8 *)(*(int *)((int)register0x00000054 + -0x24) + 8);
                *(undefined **)((int)register0x00000054 + -0xd8) = PTR_DAT_004bfde4;
                *(undefined4 *)((int)register0x00000054 + -0xd4) =
                     *(undefined4 *)((int)register0x00000054 + -0x28);
                *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_004bfdec;
                *(undefined4 *)((int)register0x00000054 + -0xcc) = 2;
                FUN_00093a08();
                **(undefined8 **)((int)register0x00000054 + -200) =
                     *(undefined8 *)((int)register0x00000054 + -100);
                if (*(int *)((int)register0x00000054 + -0x14) != 0) {
                  *(undefined8 *)((int)register0x00000054 + -100) =
                       **(undefined8 **)((int)register0x00000054 + -0x18);
                  *(undefined **)((int)register0x00000054 + -0xd8) = PTR_DAT_004bfde4;
                  *(undefined4 *)((int)register0x00000054 + -0xd4) =
                       *(undefined4 *)((int)register0x00000054 + -0x28);
                  *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_00820496_2_004bfdf0;
                  *(undefined4 *)((int)register0x00000054 + -0xcc) = 2;
                  FUN_00093a08();
                  **(undefined8 **)((int)register0x00000054 + -200) =
                       *(undefined8 *)((int)register0x00000054 + -100);
                  if (1 < *(uint *)((int)register0x00000054 + -0x14)) {
                    *(undefined8 *)((int)register0x00000054 + -100) =
                         *(undefined8 *)(*(int *)((int)register0x00000054 + -0x18) + 8);
                    *(undefined **)((int)register0x00000054 + -0xd8) = PTR_DAT_004bfde4;
                    *(undefined4 *)((int)register0x00000054 + -0xd4) =
                         *(undefined4 *)((int)register0x00000054 + -0x28);
                    *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_004bfdf4;
                    *(undefined4 *)((int)register0x00000054 + -0xcc) = 2;
                    FUN_00093a08();
                    **(undefined8 **)((int)register0x00000054 + -200) =
                         *(undefined8 *)((int)register0x00000054 + -100);
                    if (*(int *)((int)register0x00000054 + -8) != 0) {
                      *(undefined8 *)((int)register0x00000054 + -100) =
                           **(undefined8 **)((int)register0x00000054 + -0xc);
                      *(undefined **)((int)register0x00000054 + -0xd8) = PTR_DAT_004bfde4;
                      *(undefined4 *)((int)register0x00000054 + -0xd4) =
                           *(undefined4 *)((int)register0x00000054 + -0x28);
                      *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_0082049a_2_004bfdf8
                      ;
                      *(undefined4 *)((int)register0x00000054 + -0xcc) = 2;
                      FUN_00093a08();
                      **(undefined8 **)((int)register0x00000054 + -200) =
                           *(undefined8 *)((int)register0x00000054 + -100);
                      if (1 < *(uint *)((int)register0x00000054 + -8)) {
                        *(undefined8 *)((int)register0x00000054 + -100) =
                             *(undefined8 *)(*(int *)((int)register0x00000054 + -0xc) + 8);
                        *(undefined **)((int)register0x00000054 + -0xd8) = PTR_DAT_004bfde4;
                        *(undefined4 *)((int)register0x00000054 + -0xd4) =
                             *(undefined4 *)((int)register0x00000054 + -0x28);
                        *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_004bfdfc;
                        *(undefined4 *)((int)register0x00000054 + -0xcc) = 2;
                        FUN_00093a08();
                        **(undefined8 **)((int)register0x00000054 + -200) =
                             *(undefined8 *)((int)register0x00000054 + -100);
                        if (*(int *)PTR_DAT_004bfda4 == 0) {
                          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x28);
                          iVar1 = *(int *)((int)register0x00000054 + -0x2c);
                        }
                        else {
                          FUN_0009db64();
                          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x28);
                          *unaff_r8 = uVar2;
                          iVar1 = *(int *)((int)register0x00000054 + -0x2c);
                          unaff_r8[1] = *(undefined4 *)(iVar1 + 0x40);
                        }
                        *(undefined4 *)(iVar1 + 0x40) = uVar2;
                        *(int *)((int)register0x00000054 + 8) = iVar1;
                        return;
                      }
                      FUN_0009dbd4(1);
                    }
                    FUN_0009dbd4(0,0);
                  }
                  FUN_0009dbd4(1);
                }
                FUN_0009dbd4(0,0);
              }
              FUN_0009dbd4(1);
            }
            uVar12 = FUN_0009dbd4(0,0);
            uVar5 = extraout_r2_00;
          }
          while( true ) {
            uVar6 = uVar5;
            iVar1 = (int)((ulonglong)uVar12 >> 0x20);
            uVar2 = (undefined4)uVar12;
            if (2 - iVar1 <= (int)uVar6) break;
            uVar11 = uVar6 == 3;
            if (2 < uVar6) {
LAB_004bfd74:
              FUN_0009dbd4(uVar6,3);
              goto LAB_004bfd80;
            }
            puVar7 = (undefined1 *)((int)register0x00000054 + -0x24);
            iVar1 = *(int *)(puVar7 + uVar6 * 0xc + 4);
            pdVar8 = *(double **)(puVar7 + uVar6 * 0xc);
            uVar11 = 1;
            if (iVar1 == 0) {
LAB_004bfd68:
              FUN_0009dbd4(0,0);
              uVar6 = extraout_r2_02;
              goto LAB_004bfd74;
            }
            uVar5 = uVar6 + 1;
            uVar11 = uVar5 == 3;
            if (2 < uVar5) {
LAB_004bfd5c:
              FUN_0009dbd4(uVar5,3);
              goto LAB_004bfd68;
            }
            unaff_r8 = (undefined4 *)(uVar6 * 0xc + 0xc);
            puVar9 = puVar7 + (int)unaff_r8;
            uVar11 = *(int *)(puVar9 + 4) == 0;
            if ((bool)uVar11) {
              FUN_0009dbd4(0,0);
              uVar5 = extraout_r2_01;
              goto LAB_004bfd5c;
            }
            if (*pdVar8 < **(double **)(puVar7 + (int)unaff_r8)) {
              uVar2 = *(undefined4 *)(puVar7 + uVar6 * 0xc + 8);
              uVar3 = *(undefined4 *)(puVar9 + 8);
              *(int *)(puVar7 + uVar6 * 0xc + 4) = *(int *)(puVar9 + 4);
              *(undefined4 *)(puVar7 + uVar6 * 0xc + 8) = uVar3;
              *(double **)(puVar7 + uVar6 * 0xc) = *(double **)(puVar7 + (int)unaff_r8);
              *(int *)(puVar9 + 4) = iVar1;
              *(undefined4 *)(puVar9 + 8) = uVar2;
              *(double **)(puVar7 + (int)unaff_r8) = pdVar8;
              uVar12 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x70),2);
            }
          }
          iVar1 = iVar1 + 1;
        } while( true );
      }
LAB_004bfd80:
      param_1 = FUN_0009dc34(1,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xdc);
      if ((bool)uVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x4bfd98;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.Load_config_thermistor @ 004bfe00 (size 344) */

void k3c_internal_pkg_heater_Load_config_thermistor(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  bool bVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x34) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + 4);
      k3c_internal_pkg_heater_NewCustomThermistor();
      uVar2 = **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x30) = uVar2;
      *(undefined4 **)((int)register0x00000054 + -0x2c) =
           *(undefined4 **)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x28) =
           PTR_s_heaterstmc2209adxl345buttonsled__008216f7_0x506_004bff5c;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 7;
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_004bff60;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_004bff64;
      k3c_internal_pkg_printer___Printer__Load_object();
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004bff68;
      FUN_00022cf8();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x2c);
      *puVar1 = PTR_k3c_internal_pkg_heater___CustomThermistor__Create_fm_004bff6c;
      if (*(int *)PTR_DAT_004bff70 == 0) {
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0xc);
      }
      else {
        puVar1 = (undefined4 *)FUN_0009db54();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0xc);
        *unaff_r8 = puVar3;
      }
      puVar1[1] = puVar3;
      bVar7 = *(undefined **)((int)register0x00000054 + -0x10) == PTR_DAT_004bff74;
      if (bVar7) {
        *(undefined4 **)((int)register0x00000054 + -4) = puVar1;
        uVar2 = *puVar3;
        uVar4 = puVar3[1];
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -8) + 4);
        *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004bff78;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x28) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar4;
        FUN_00093a08();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x20);
        *puVar1 = PTR_DAT_004bff7c;
        if (*(int *)PTR_DAT_004bff70 == 0) {
          uVar2 = *(undefined4 *)((int)register0x00000054 + -4);
        }
        else {
          puVar1 = (undefined4 *)FUN_0009db64();
          uVar2 = *(undefined4 *)((int)register0x00000054 + -4);
          *unaff_r8 = uVar2;
          unaff_r8[1] = puVar1[1];
        }
        puVar1[1] = uVar2;
        *(undefined4 *)((int)register0x00000054 + 8) = 0;
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x30) =
           *(undefined **)((int)register0x00000054 + -0x10);
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_004bff74;
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_004bff80;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x34);
      if (bVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x4bff54;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*TableThermistor).linear_inter_formR @ 004bff84 (size 200) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___TableThermistor__linear_inter_formR(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  double *pdVar5;
  double *pdVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      uVar2 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      iVar3 = *(int *)(*(int *)((int)register0x00000054 + 4) + 8);
      dVar9 = *(double *)((int)register0x00000054 + 8) / *_UNK_004c0050;
      uVar1 = 0;
      while( true ) {
        if ((int)(uVar2 - 1) <= (int)uVar1) {
          *(undefined8 *)((int)register0x00000054 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x004c0030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
        uVar4 = uVar1 + 1;
        pdVar5 = (double *)(iVar3 + uVar1 * 0x10);
        bVar8 = uVar2 == uVar4;
        if (uVar2 <= uVar4) break;
        dVar10 = pdVar5[1];
        pdVar6 = (double *)(iVar3 + uVar4 * 0x10);
        uVar1 = uVar4;
        if ((dVar9 <= dVar10) && (dVar11 = pdVar6[1], dVar11 <= dVar9)) {
          dVar12 = *pdVar6;
          dVar10 = (dVar12 - *pdVar5) / (dVar11 - dVar10);
          *(double *)((int)register0x00000054 + 0x10) = (dVar12 - dVar10 * dVar11) + dVar10 * dVar9;
                    /* WARNING: Could not recover jumptable at 0x004c0020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
      }
      param_1 = FUN_0009dbd4(uVar4);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if (bVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x4c0048;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*TableThermistor).linear_inter_formT @ 004c0054 (size 252) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___TableThermistor__linear_inter_formT(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double *pdVar4;
  uint uVar5;
  uint extraout_r3;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      uVar3 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      pdVar4 = *(double **)(*(int *)((int)register0x00000054 + 4) + 8);
      dVar8 = *(double *)((int)register0x00000054 + 8);
      uVar2 = 0;
      while ((int)uVar2 < (int)(uVar3 - 1)) {
        uVar5 = uVar2 + 1;
        iVar1 = uVar2 * 2;
        uVar7 = uVar3 == uVar5;
        if (uVar3 <= uVar5) goto LAB_004c0138;
        dVar9 = pdVar4[iVar1];
        uVar2 = uVar5;
        if ((dVar9 <= dVar8) && (dVar10 = pdVar4[uVar5 * 2], dVar8 <= dVar10)) {
          dVar11 = (pdVar4 + uVar5 * 2)[1];
          dVar10 = (dVar11 - (pdVar4 + iVar1)[1]) / (dVar10 - dVar9);
          *(double *)((int)register0x00000054 + 0x10) =
               *_UNK_004c0154 * ((dVar11 - dVar10 * dVar9) + dVar10 * dVar8);
                    /* WARNING: Could not recover jumptable at 0x004c00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
      }
      uVar7 = uVar3 == 0;
      if (!(bool)uVar7) {
        if (*pdVar4 <= dVar8) {
          *(undefined8 *)((int)register0x00000054 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x004c0128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
        *(undefined8 *)((int)register0x00000054 + 0x10) = *_UNK_004c0158;
                    /* WARNING: Could not recover jumptable at 0x004c0118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0xc))();
        return;
      }
      FUN_0009dbd4(0,0);
      uVar5 = extraout_r3;
LAB_004c0138:
      param_1 = FUN_0009dbd4(uVar5);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x4c014c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*TableThermistor).Calc_temp @ 004c015c (size 144) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___TableThermistor__Calc_temp(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4c01e8;
    param_1 = FUN_0009bf64();
  }
  uVar1 = FUN_000afda8(param_1);
  FUN_000afca0(uVar1);
  k3c_internal_pkg_heater___TableThermistor__linear_inter_formR();
  *(ulonglong *)(in_stack_00000004 + 0x14) = CONCAT44(uStack_8,uStack_4);
                    /* WARNING: Could not recover jumptable at 0x004c01dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*TableThermistor).Calc_adc @ 004c01f8 (size 76) */

void k3c_internal_pkg_heater___TableThermistor__Calc_adc(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  double *in_stack_00000004;
  undefined8 in_stack_00000008;
  double in_stack_00000010;
  undefined8 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4c0240;
    FUN_0009bf64();
  }
  k3c_internal_pkg_heater___TableThermistor__linear_inter_formT();
  in_stack_00000010 = uStack_8 / (uStack_8 + *in_stack_00000004);
                    /* WARNING: Could not recover jumptable at 0x004c0234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.PrinterTableThermistor @ 004c0244 (size 516) */

void k3c_internal_pkg_heater_PrinterTableThermistor(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  undefined1 uVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x58) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x50) = DAT_004c044c;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 0xf;
      *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_004c0450;
      *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_004c0454;
      *(undefined8 *)((int)register0x00000054 + -0x40) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x38) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x30) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x28) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x20) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
      *(undefined8 *)((int)register0x00000054 + -0x14) =
           *(undefined8 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x50) = DAT_004c0458;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 0xf;
      *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_004c0450;
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_SUB_004c045c;
      *(undefined8 *)((int)register0x00000054 + -0x40) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x38) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x30) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x28) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x20) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_004c0460;
      FUN_00022cf8();
      uVar5 = false;
      if (*(int *)((int)register0x00000054 + 0xc) == 0x21) {
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_004c0464;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 0x21;
        FUN_00018250();
        uVar5 = *(char *)((int)register0x00000054 + -0x48) == '\0';
        if (!(bool)uVar5) {
          puVar1 = *(undefined8 **)((int)register0x00000054 + -0xc);
          *puVar1 = *(undefined8 *)((int)register0x00000054 + -0x14);
          uVar2 = *(undefined4 *)PTR_DAT_004c046c;
          uVar3 = *(undefined4 *)PTR_DAT_004c0470;
          *(undefined4 *)((int)puVar1 + 0xc) = *(undefined4 *)PTR_DAT_004c0468;
          *(undefined4 *)(puVar1 + 2) = uVar2;
          if (*(int *)PTR_DAT_004c0474 != 0) {
            puVar1 = (undefined8 *)FUN_0009db64();
            *unaff_r8 = extraout_r3;
            unaff_r8[1] = *(undefined4 *)(puVar1 + 1);
            uVar3 = extraout_r3;
          }
          *(undefined4 *)(puVar1 + 1) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_004c0478;
          *(undefined8 **)((int)register0x00000054 + -0x4c) = puVar1;
          k3c_internal_pkg_heater_NewPrinterADCtoTemperature();
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          return;
        }
      }
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_004c047c;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_004c0480;
      *(undefined4 *)((int)register0x00000054 + -0x50) = 0x1b;
      *(undefined1 **)((int)register0x00000054 + -0x4c) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x44) = 1;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_004c047c;
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x58);
      if ((bool)uVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x4c0444;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.NewCustomTableThermistor @ 004c0484 (size 268) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater_NewCustomTableThermistor(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 *extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x28) = _UNK_004c0594;
      FUN_00022cf8();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x24);
      *(undefined4 **)((int)register0x00000054 + -4) = puVar1;
      puVar1[1] = 0;
      *puVar1 = 0;
      uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x24) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x20) = _UNK_004c0598;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0xffffffff;
      FUN_0014f168();
      iVar2 = *(int *)((int)register0x00000054 + -0xc);
      bVar5 = iVar2 == 1;
      if (iVar2 != 0) {
        *(uint *)((int)register0x00000054 + -0x28) =
             *(int *)((int)register0x00000054 + -0x10) +
             (1 - *(int *)((int)register0x00000054 + -8) >> 0x1f & 8U);
        *(int *)((int)register0x00000054 + -0x24) = iVar2 + -1;
        *(int *)((int)register0x00000054 + -0x20) = *(int *)((int)register0x00000054 + -8) + -1;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = _UNK_004c0598;
        *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
        FUN_0014f8fc();
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x14);
        puVar1 = *(undefined4 **)((int)register0x00000054 + -4);
        puVar1[1] = *(undefined4 *)((int)register0x00000054 + -0x10);
        if (*_UNK_004c059c != 0) {
          FUN_0009db64();
          *unaff_r8 = extraout_r1;
          unaff_r8[1] = *extraout_r2;
          uVar3 = extraout_r1;
          puVar1 = extraout_r2;
        }
        *puVar1 = uVar3;
        *(undefined4 **)((int)register0x00000054 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x004c0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x2c))();
        return;
      }
      param_1 = FUN_0009dc34(1,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x2c);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x4c058c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.Load_config_table_thermistor @ 004c05a0 (size 344) */

void k3c_internal_pkg_heater_Load_config_table_thermistor(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  bool bVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x34) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + 4);
      k3c_internal_pkg_heater_NewCustomTableThermistor();
      uVar2 = **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x30) = uVar2;
      *(undefined4 **)((int)register0x00000054 + -0x2c) =
           *(undefined4 **)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x28) =
           PTR_s_heaterstmc2209adxl345buttonsled__008216f7_0x506_004c06fc;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 7;
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_004c0700;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_004c0704;
      k3c_internal_pkg_printer___Printer__Load_object();
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004c0708;
      FUN_00022cf8();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x2c);
      *puVar1 = PTR_k3c_internal_pkg_heater___CustomTableThermistor__Create_fm_004c070c;
      if (*(int *)PTR_DAT_004c0710 == 0) {
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0xc);
      }
      else {
        puVar1 = (undefined4 *)FUN_0009db54();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0xc);
        *unaff_r8 = puVar3;
      }
      puVar1[1] = puVar3;
      bVar7 = *(undefined **)((int)register0x00000054 + -0x10) == PTR_DAT_004c0714;
      if (bVar7) {
        *(undefined4 **)((int)register0x00000054 + -4) = puVar1;
        uVar2 = *puVar3;
        uVar4 = puVar3[1];
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -8) + 4);
        *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004c0718;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x28) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar4;
        FUN_00093a08();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x20);
        *puVar1 = PTR_DAT_004c071c;
        if (*(int *)PTR_DAT_004c0710 == 0) {
          uVar2 = *(undefined4 *)((int)register0x00000054 + -4);
        }
        else {
          puVar1 = (undefined4 *)FUN_0009db64();
          uVar2 = *(undefined4 *)((int)register0x00000054 + -4);
          *unaff_r8 = uVar2;
          unaff_r8[1] = puVar1[1];
        }
        puVar1[1] = uVar2;
        *(undefined4 *)((int)register0x00000054 + 8) = 0;
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
                    /* WARNING: Could not recover jumptable at 0x004c06d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x34))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x30) =
           *(undefined **)((int)register0x00000054 + -0x10);
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_004c0714;
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_004c0720;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x34);
      if (bVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x4c06f4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.NewHeaterCheck @ 004c0724 (size 1808) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater_NewHeaterCheck(undefined4 param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 extraout_r1;
  undefined4 *puVar3;
  undefined4 *extraout_r1_00;
  uint uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *extraout_r2;
  undefined *extraout_r2_00;
  int extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 uVar7;
  undefined4 extraout_r3;
  int iVar8;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  bool bVar10;
  undefined8 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x7c);
      *(undefined4 *)((int)register0x00000054 + -0x7c) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_004c0e38;
      FUN_00022cf8();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x74);
      uVar7 = **(undefined4 **)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_004c0e3c != 0) {
        FUN_0009db54();
        *unaff_r8 = extraout_r3;
        puVar3 = extraout_r1_00;
        uVar7 = extraout_r3;
      }
      *(undefined4 **)((int)register0x00000054 + -0xc) = puVar3;
      *(undefined4 *)((int)register0x00000054 + -0x28) = uVar7;
      *puVar3 = uVar7;
      *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_004c0e40;
      FUN_00022cf8();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x74);
      *puVar3 = PTR_k3c_internal_pkg_heater___HeaterCheck__handle_connect_fm_004c0e44;
      if (*(int *)PTR_DAT_004c0e3c == 0) {
        uVar7 = *(undefined4 *)((int)register0x00000054 + -0xc);
      }
      else {
        puVar3 = (undefined4 *)FUN_0009db54();
        uVar7 = *(undefined4 *)((int)register0x00000054 + -0xc);
        *unaff_r8 = uVar7;
      }
      *(undefined4 **)((int)register0x00000054 + -4) = puVar3;
      puVar3[1] = uVar7;
      uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + 0x24);
      *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_004c0e48;
      *(undefined4 *)((int)register0x00000054 + -0x74) = uVar7;
      *(undefined **)((int)register0x00000054 + -0x70) =
           PTR_s_project_connectlistening_on__sWe_008262d0_0x2a57_004c0e4c;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = 0xf;
      FUN_00093560();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x68);
      iVar8 = puVar3[1];
      uVar1 = puVar3[2];
      puVar6 = (undefined *)*puVar3;
      if (*(char *)((int)register0x00000054 + -100) == '\0') {
        uVar1 = 0;
        iVar8 = 0;
        puVar6 = PTR_DAT_004c0e50;
      }
      uVar4 = iVar8 + 1;
      if (uVar1 < uVar4) {
        *(undefined **)((int)register0x00000054 + -0x78) = puVar6;
        *(uint *)((int)register0x00000054 + -0x74) = uVar4;
        *(uint *)((int)register0x00000054 + -0x70) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x6c) = 1;
        *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_004c0e54;
        FUN_000987f4();
        puVar6 = *(undefined **)((int)register0x00000054 + -100);
        uVar4 = *(uint *)((int)register0x00000054 + -0x60);
        uVar1 = *(uint *)((int)register0x00000054 + -0x5c);
      }
      *(uint *)((int)register0x00000054 + -0x34) = uVar4;
      *(uint *)((int)register0x00000054 + -0x38) = uVar1;
      if (*(int *)PTR_DAT_004c0e3c == 0) {
        uVar7 = *(undefined4 *)((int)register0x00000054 + -4);
      }
      else {
        FUN_0009db64();
        uVar7 = *(undefined4 *)((int)register0x00000054 + -4);
        *unaff_r8 = uVar7;
        unaff_r8[1] = *(undefined4 *)(extraout_r2 + (uVar4 - 1) * 4);
        puVar6 = extraout_r2;
      }
      *(undefined **)((int)register0x00000054 + -8) = puVar6;
      *(undefined4 *)(puVar6 + (uVar4 - 1) * 4) = uVar7;
      uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + 0x24);
      *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_004c0e48;
      *(undefined4 *)((int)register0x00000054 + -0x74) = uVar7;
      *(undefined **)((int)register0x00000054 + -0x70) =
           PTR_s_project_connectlistening_on__sWe_008262d0_0x2a57_004c0e4c;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = 0xf;
      FUN_00093a08();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x68);
      puVar3[1] = *(undefined4 *)((int)register0x00000054 + -0x34);
      puVar3[2] = *(undefined4 *)((int)register0x00000054 + -0x38);
      if (*(int *)PTR_DAT_004c0e3c == 0) {
        uVar7 = *(undefined4 *)((int)register0x00000054 + -8);
      }
      else {
        puVar3 = (undefined4 *)FUN_0009db64();
        uVar7 = *(undefined4 *)((int)register0x00000054 + -8);
        *unaff_r8 = uVar7;
        unaff_r8[1] = *puVar3;
      }
      *puVar3 = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           **(undefined4 **)((int)register0x00000054 + -0xc);
      *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_004c0e40;
      FUN_00022cf8();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x74);
      *puVar3 = PTR_k3c_internal_pkg_heater___HeaterCheck__handle_shutdown_fm_004c0e58;
      if (*(int *)PTR_DAT_004c0e3c == 0) {
        uVar7 = *(undefined4 *)((int)register0x00000054 + -0xc);
      }
      else {
        puVar3 = (undefined4 *)FUN_0009db54();
        uVar7 = *(undefined4 *)((int)register0x00000054 + -0xc);
        *unaff_r8 = uVar7;
      }
      *(undefined4 **)((int)register0x00000054 + -4) = puVar3;
      puVar3[1] = uVar7;
      uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x10) + 0x24);
      *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_004c0e48;
      *(undefined4 *)((int)register0x00000054 + -0x74) = uVar7;
      *(undefined **)((int)register0x00000054 + -0x70) =
           PTR_s_project_shutdownlen_out_of_range_008262d0_0x38fa_004c0e5c;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x10;
      FUN_00093560();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x68);
      iVar8 = puVar3[1];
      uVar1 = puVar3[2];
      puVar6 = (undefined *)*puVar3;
      if (*(char *)((int)register0x00000054 + -100) == '\0') {
        uVar1 = 0;
        iVar8 = 0;
        puVar6 = PTR_DAT_004c0e50;
      }
      uVar4 = iVar8 + 1;
      if (uVar1 < uVar4) {
        *(undefined **)((int)register0x00000054 + -0x78) = puVar6;
        *(uint *)((int)register0x00000054 + -0x74) = uVar4;
        *(uint *)((int)register0x00000054 + -0x70) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x6c) = 1;
        *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_004c0e54;
        FUN_000987f4();
        puVar6 = *(undefined **)((int)register0x00000054 + -100);
        uVar4 = *(uint *)((int)register0x00000054 + -0x60);
        uVar1 = *(uint *)((int)register0x00000054 + -0x5c);
      }
      *(uint *)((int)register0x00000054 + -0x34) = uVar4;
      *(uint *)((int)register0x00000054 + -0x38) = uVar1;
      if (*(int *)PTR_DAT_004c0e3c == 0) {
        uVar7 = *(undefined4 *)((int)register0x00000054 + -4);
      }
      else {
        FUN_0009db64();
        uVar7 = *(undefined4 *)((int)register0x00000054 + -4);
        *unaff_r8 = uVar7;
        unaff_r8[1] = *(undefined4 *)(extraout_r2_00 + (uVar4 - 1) * 4);
        puVar6 = extraout_r2_00;
      }
      *(undefined **)((int)register0x00000054 + -8) = puVar6;
      *(undefined4 *)(puVar6 + (uVar4 - 1) * 4) = uVar7;
      uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x10) + 0x24);
      *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_004c0e48;
      *(undefined4 *)((int)register0x00000054 + -0x74) = uVar7;
      *(undefined **)((int)register0x00000054 + -0x70) =
           PTR_s_project_shutdownlen_out_of_range_008262d0_0x38fa_004c0e5c;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x10;
      FUN_00093a08();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x68);
      puVar3[1] = *(undefined4 *)((int)register0x00000054 + -0x34);
      puVar3[2] = *(undefined4 *)((int)register0x00000054 + -0x38);
      if (*(int *)PTR_DAT_004c0e3c == 0) {
        uVar7 = *(undefined4 *)((int)register0x00000054 + -8);
      }
      else {
        puVar3 = (undefined4 *)FUN_0009db64();
        uVar7 = *(undefined4 *)((int)register0x00000054 + -8);
        *unaff_r8 = uVar7;
        unaff_r8[1] = *puVar3;
      }
      *puVar3 = uVar7;
      uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x78) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x74) = uVar7;
      *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_004c0e60;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
      *(undefined4 *)((int)register0x00000054 + -100) = 0xffffffff;
      FUN_0014f168();
      bVar10 = *(uint *)((int)register0x00000054 + -0x5c) == 1;
      if (1 < *(uint *)((int)register0x00000054 + -0x5c)) {
        uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x60) + 8);
        iVar8 = *(int *)((int)register0x00000054 + -0xc);
        *(undefined4 *)(iVar8 + 8) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -0x60) + 0xc);
        if (*(int *)PTR_DAT_004c0e3c != 0) {
          uVar7 = FUN_0009db74();
          *unaff_r8 = uVar7;
          unaff_r8[1] = *(undefined4 *)(extraout_r2_01 + 4);
          unaff_r8[2] = *(undefined4 *)(extraout_r2_01 + 0xc);
          iVar8 = extraout_r2_01;
        }
        *(undefined4 *)(iVar8 + 4) = uVar7;
        *(undefined4 *)(iVar8 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x74) = PTR_DAT_004c0e64;
        *(undefined4 *)((int)register0x00000054 + -0x70) = 10;
        *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_004c0e68;
        *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_004c0e6c;
        *(undefined8 *)((int)register0x00000054 + -100) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x5c) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x54) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x4c) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x44) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        *(undefined8 *)(*(int *)((int)register0x00000054 + -0xc) + 0x10) =
             *(undefined8 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x74) =
             PTR_s_max_errorchip_namespi_speedack_c_00823504_0x686_004c0e70;
        *(undefined4 *)((int)register0x00000054 + -0x70) = 9;
        *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_004c0e68;
        *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_004c0e74;
        *(undefined8 *)((int)register0x00000054 + -100) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x5c) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x54) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x4c) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x44) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        *(undefined8 *)(*(int *)((int)register0x00000054 + -0xc) + 0x18) =
             *(undefined8 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x74) =
             PTR_s_heating_gainerase_finishwrite_fi_008262d0_0x389_004c0e78;
        *(undefined4 *)((int)register0x00000054 + -0x70) = 0xc;
        *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_004c0e68;
        *(undefined **)((int)register0x00000054 + -0x68) = PTR_DAT_004c0e7c;
        *(undefined8 *)((int)register0x00000054 + -100) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x5c) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x54) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x4c) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x44) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        iVar8 = *(int *)((int)register0x00000054 + -0xc);
        *(undefined8 *)(iVar8 + 0x20) = *(undefined8 *)((int)register0x00000054 + -0x40);
        if (*(int *)(iVar8 + 8) == 10) {
          *(undefined4 *)((int)register0x00000054 + -0x78) = *(undefined4 *)(iVar8 + 4);
          *(undefined **)((int)register0x00000054 + -0x74) =
               PTR_s_heater_bedforce_movegcode_arcsst_00823504_0xed6_004c0e80;
          *(undefined4 *)((int)register0x00000054 + -0x70) = 10;
          FUN_00018250();
          if (*(char *)((int)register0x00000054 + -0x6c) == '\0') {
            uVar11 = 0x4034000000000000;
          }
          else {
            uVar11 = *(undefined8 *)PTR_DAT_004c0e84;
          }
        }
        else {
          uVar11 = 0x4034000000000000;
        }
        *(undefined8 *)((int)register0x00000054 + -0x30) = uVar11;
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x74) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        FUN_0008f6c0();
        uVar7 = *(undefined4 *)((int)register0x00000054 + -0x70);
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x74) = _UNK_004c0e88;
        *(undefined4 *)((int)register0x00000054 + -0x70) = 0xf;
        *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_004c0e68;
        *(undefined4 *)((int)register0x00000054 + -0x68) = uVar7;
        *(undefined8 *)((int)register0x00000054 + -100) = 0x3ff0000000000000;
        *(undefined8 *)((int)register0x00000054 + -0x5c) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x54) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x4c) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x44) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0xc);
        *(undefined8 *)(puVar3 + 10) = *(undefined8 *)((int)register0x00000054 + -0x40);
        uVar2 = 0;
        *(undefined1 *)(puVar3 + 0xc) = 0;
        *(undefined1 *)((int)puVar3 + 0x31) = 0;
        *(undefined8 *)(puVar3 + 0xd) = 0;
        *(undefined8 *)(puVar3 + 0xf) = 0;
        *(undefined8 *)(puVar3 + 0x11) = 0;
        *(undefined1 *)((int)puVar3 + 0x59) = 0;
        *(undefined8 *)(puVar3 + 0x13) = *(undefined8 *)PTR_DAT_004c0e8c;
        if (*(int *)PTR_DAT_004c0e3c != 0) {
          puVar3 = (undefined4 *)FUN_0009db54(puVar3,0,puVar3[0x15]);
          *unaff_r8 = extraout_r2_02;
          uVar2 = extraout_r1;
        }
        puVar3[0x15] = 0;
        *(undefined1 *)(puVar3 + 0x16) = uVar2;
        pcVar5 = (code *)**(undefined4 **)PTR_DAT_004c0e90;
        *(undefined4 *)((int)register0x00000054 + -0x78) = *puVar3;
        uVar7 = (*pcVar5)();
        FUN_0009e2f0(uVar7,*(undefined4 *)((int)register0x00000054 + -0x74),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_004c0e40;
        FUN_00022cf8();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x74);
        *puVar3 = PTR_k3c_internal_pkg_heater___HeaterCheck__handle_heater_check_fm_004c0e94;
        if (*(int *)PTR_DAT_004c0e3c == 0) {
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0xc);
        }
        else {
          puVar3 = (undefined4 *)FUN_0009db54();
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *unaff_r8 = uVar7;
        }
        *(undefined4 **)((int)register0x00000054 + -4) = puVar3;
        puVar3[1] = uVar7;
        *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_004c0e98;
        *(undefined4 *)((int)register0x00000054 + -0x74) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_004c0e9c;
        *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x18;
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -100) == '\0') {
          *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_004c0e98;
          *(undefined4 *)((int)register0x00000054 + -0x74) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_004c0e9c;
          *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x18;
          FUN_00093a08();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x68);
          if (*(int *)PTR_DAT_004c0e3c == 0) {
            uVar7 = *(undefined4 *)((int)register0x00000054 + -4);
          }
          else {
            puVar3 = (undefined4 *)FUN_0009db64();
            uVar7 = *(undefined4 *)((int)register0x00000054 + -4);
            *unaff_r8 = uVar7;
            unaff_r8[1] = *puVar3;
          }
          *puVar3 = uVar7;
        }
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x004c0e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x7c))();
        return;
      }
      param_1 = FUN_0009dbd4(1);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x7c);
      if (bVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x4c0e30;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*HeaterCheck).HasErr @ 004c0ea0 (size 16) */

void k3c_internal_pkg_heater___HeaterCheck__HasErr(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(in_stack_00000004 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x004c0eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*HeaterCheck).handle_connect @ 004c0eb0 (size 664) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___HeaterCheck__handle_connect(void)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00093560();
  iVar1 = DAT_004c1158;
  if ((char)local_18 == '\0') {
    k3c_internal_pkg_printer___Printer__Lookup_object();
    if (local_18 != DAT_004c1160) {
      k3c_internal_pkg_logger_Errorf();
      FUN_001386c4();
      return;
    }
    k3c_internal_pkg_heater___PrinterHeaters__Lookup_heater();
    if (*DAT_004c1164 != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(int *)(in_stack_00000004 + 0xc);
      iVar1 = extraout_r1;
    }
    *(int *)(in_stack_00000004 + 0xc) = iVar1;
    FUN_0008f77c();
    k3c_internal_pkg_logger_Debugf();
    FUN_00022cf8();
    iVar1 = 0x1d;
    _DAT_0000001d = DAT_004c1174;
    if (*DAT_004c1164 != 0) {
      iVar1 = FUN_0009db54();
      *unaff_r8 = in_stack_00000004;
    }
    *(int *)(iVar1 + 4) = in_stack_00000004;
    k3c_internal_pkg_reactor___Reactor__Register_timer();
    iVar1 = 1;
    if (*DAT_004c1164 != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1_00;
      unaff_r8[1] = *(int *)(in_stack_00000004 + 0x54);
      iVar1 = extraout_r1_00;
    }
    *(int *)(in_stack_00000004 + 0x54) = iVar1;
    return;
  }
  return;
}



/* k3c/internal/pkg/heater.(*HeaterCheck).check_event @ 004c1180 (size 1836) */

void k3c_internal_pkg_heater___HeaterCheck__check_event(void)

{
  double dVar1;
  double dVar2;
  int unaff_r10;
  double dVar3;
  int in_stack_00000004;
  double in_stack_00000008;
  undefined4 *puStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  double local_c8 [3];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_90;
  undefined4 *local_8c;
  undefined4 local_88;
  undefined4 *local_84;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  undefined4 *local_74;
  undefined4 local_70;
  undefined4 *local_6c;
  undefined4 local_68;
  undefined4 *local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 *local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (local_c8 <= *(double **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  puStack_13c = (undefined4 *)((ulonglong)in_stack_00000008 >> 0x20);
  k3c_internal_pkg_heater___Heater__Get_temp();
  dVar1 = (double)CONCAT44(uStack_134,uStack_138);
  dVar2 = (double)CONCAT44(uStack_12c,local_130);
  dVar3 = dVar2 - *(double *)(in_stack_00000004 + 0x10);
  if ((dVar1 < dVar3) && (0.0 < dVar2)) {
    *(double *)(in_stack_00000004 + 0x44) = (dVar3 - dVar1) + *(double *)(in_stack_00000004 + 0x44);
    if (*(char *)(in_stack_00000004 + 0x30) == '\0') {
      if (*(char *)(in_stack_00000004 + 0x59) != '\0') {
        FUN_0009def4(0,&local_30,in_stack_00000004);
        FUN_0008f77c();
        local_30 = DAT_004c18b0;
        local_2c = puStack_13c;
        FUN_0008f6c0();
        local_28 = DAT_004c18b4;
        local_24 = puStack_13c;
        local_a8 = *(undefined8 *)(in_stack_00000004 + 0x44);
        FUN_0008f6c0();
        local_20 = DAT_004c18b4;
        local_1c = puStack_13c;
        local_b0 = *(undefined8 *)(in_stack_00000004 + 0x18);
        FUN_0008f6c0();
        local_18 = DAT_004c18b4;
        local_14 = puStack_13c;
        puStack_13c = &local_30;
        k3c_internal_pkg_logger_Debugf();
      }
      if (dVar2 == *(double *)(in_stack_00000004 + 0x34)) {
        if (*(double *)(in_stack_00000004 + 0x18) <= *(double *)(in_stack_00000004 + 0x44)) {
          FUN_0009dedc(uStack_138,0,&local_90,in_stack_00000004);
          FUN_0008f77c();
          local_90 = DAT_004c18b0;
          local_8c = puStack_13c;
          FUN_0008f6c0();
          local_88 = DAT_004c18b4;
          local_84 = puStack_13c;
          FUN_0008f6c0();
          local_80 = DAT_004c18b4;
          local_7c = puStack_13c;
          FUN_0008f6c0();
          local_78 = DAT_004c18b4;
          local_74 = puStack_13c;
          FUN_0008f6c0();
          local_70 = DAT_004c18b4;
          local_6c = puStack_13c;
          FUN_0008f6c0();
          local_68 = DAT_004c18b4;
          local_64 = puStack_13c;
          FUN_0008f6c0();
          local_60 = DAT_004c18b4;
          local_5c = puStack_13c;
          k3c_internal_pkg_logger_Errorf();
          k3c_internal_pkg_heater___HeaterCheck__heater_fault();
          return;
        }
      }
      else {
        FUN_0009deec(0,&local_58,in_stack_00000004);
        FUN_0008f77c();
        local_58 = DAT_004c18b0;
        local_54 = puStack_13c;
        FUN_0008f6c0();
        local_50 = DAT_004c18b4;
        local_4c = puStack_13c;
        FUN_0008f6c0();
        local_48 = DAT_004c18b4;
        local_44 = puStack_13c;
        local_c8[0] = *(double *)(in_stack_00000004 + 0x20) + dVar1;
        FUN_0008f6c0();
        local_40 = DAT_004c18b4;
        local_3c = puStack_13c;
        FUN_0008f6c0();
        local_38 = DAT_004c18b4;
        local_34 = puStack_13c;
        k3c_internal_pkg_logger_Infof();
        *(undefined1 *)(in_stack_00000004 + 0x30) = 1;
        *(undefined1 *)(in_stack_00000004 + 0x31) = 1;
        *(double *)(in_stack_00000004 + 0x3c) = *(double *)(in_stack_00000004 + 0x20) + dVar1;
        *(double *)(in_stack_00000004 + 0x4c) =
             *(double *)(in_stack_00000004 + 0x28) + in_stack_00000008;
      }
    }
    else if (dVar1 < *(double *)(in_stack_00000004 + 0x3c)) {
      if (*(double *)(in_stack_00000004 + 0x4c) <= in_stack_00000008) {
        *(undefined1 *)(in_stack_00000004 + 0x30) = 0;
        FUN_0009def4(0,&local_30,in_stack_00000004);
        FUN_0008f77c();
        local_30 = DAT_004c18b0;
        local_2c = puStack_13c;
        FUN_0008f6c0();
        local_28 = DAT_004c18b4;
        local_24 = puStack_13c;
        FUN_0008f6c0();
        local_20 = DAT_004c18b4;
        local_1c = puStack_13c;
        FUN_0008f6c0();
        local_18 = DAT_004c18b4;
        local_14 = puStack_13c;
        k3c_internal_pkg_logger_Warnf();
      }
      else if (*(char *)(in_stack_00000004 + 0x31) != '\0') {
        FUN_000afda8();
        *(ulonglong *)(in_stack_00000004 + 0x3c) = CONCAT44(local_130,uStack_134);
      }
    }
    else {
      *(undefined1 *)(in_stack_00000004 + 0x31) = 0;
      *(undefined8 *)(in_stack_00000004 + 0x44) = 0;
      *(double *)(in_stack_00000004 + 0x3c) = *(double *)(in_stack_00000004 + 0x20) + dVar1;
      *(double *)(in_stack_00000004 + 0x4c) =
           *(double *)(in_stack_00000004 + 0x28) + in_stack_00000008;
    }
    *(double *)(in_stack_00000004 + 0x34) = dVar2;
    return;
  }
  if ((*(char *)(in_stack_00000004 + 0x30) != '\0') && (0.0 < dVar2)) {
    FUN_0009df04(0,&local_10,in_stack_00000004);
    FUN_0008f77c();
    local_10 = DAT_004c18b0;
    local_c = puStack_13c;
    FUN_0008f6c0();
    local_8 = DAT_004c18b4;
    local_4 = puStack_13c;
    k3c_internal_pkg_logger_Debugf();
  }
  *(undefined1 *)(in_stack_00000004 + 0x30) = 0;
  *(undefined1 *)(in_stack_00000004 + 0x31) = 0;
  if (dVar1 <= *(double *)(in_stack_00000004 + 0x10) + dVar2) {
    *(undefined8 *)(in_stack_00000004 + 0x44) = 0;
  }
  *(double *)(in_stack_00000004 + 0x34) = dVar2;
  return;
}



/* k3c/internal/pkg/heater.(*HeaterCheck).Set_Pid_Cal_Param @ 004c18cc (size 216) */

void k3c_internal_pkg_heater___HeaterCheck__Set_Pid_Cal_Param(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined1 in_stack_00000010;
  undefined8 in_stack_00000014;
  undefined1 in_stack_0000001c;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4c19a0;
    FUN_0009bf64();
  }
  FUN_0009def4(0,&puStack_20);
  puStack_20 = PTR_DAT_004c19a8;
  puStack_1c = PTR_DAT_004c19ac;
  FUN_0008f77c();
  puStack_18 = PTR_DAT_004c19a8;
  puStack_10 = PTR_DAT_004c19a8;
  puStack_c = PTR_DAT_004c19b0;
  FUN_0008f6c0();
  puStack_8 = PTR_DAT_004c19b4;
  k3c_internal_pkg_logger_Debug();
  in_stack_00000014 = *(undefined8 *)(in_stack_00000004 + 0x18);
  *(undefined8 *)(in_stack_00000004 + 0x18) = in_stack_00000008;
  in_stack_0000001c = *(undefined1 *)(in_stack_00000004 + 0x59);
  *(undefined1 *)(in_stack_00000004 + 0x59) = in_stack_00000010;
                    /* WARNING: Could not recover jumptable at 0x004c1994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*HeaterCheck).heater_fault @ 004c19b8 (size 908) */

void k3c_internal_pkg_heater___HeaterCheck__heater_fault(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x50) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      *(undefined1 *)(iVar2 + 0x58) = 1;
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      uVar3 = *(undefined4 *)(iVar2 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar3;
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_004c1d48;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_004c1d4c;
      *(undefined4 *)((int)register0x00000054 + -0x48) = 0x26;
      *(undefined1 **)((int)register0x00000054 + -0x44) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x40) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = 1;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_004c1d48;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined1 **)((int)register0x00000054 + -0x4c) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x44) = 1;
      k3c_internal_pkg_logger_Error();
      puVar1 = *(undefined4 **)((int)register0x00000054 + 4);
      if (puVar1[2] == 8) {
        *(undefined4 *)((int)register0x00000054 + -0x4c) = puVar1[1];
        *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_004c1d50;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 8;
        FUN_00018250();
        if (*(char *)((int)register0x00000054 + -0x40) == '\0') {
          puVar1 = *(undefined4 **)((int)register0x00000054 + 4);
          goto LAB_004c1ac0;
        }
        *(undefined4 *)((int)register0x00000054 + -0x24) = *DAT_004c1d60;
        FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x20));
        uVar3 = extraout_r2_00[1];
        *(undefined4 *)((int)register0x00000054 + -0x4c) = *extraout_r2_00;
        *(undefined4 *)((int)register0x00000054 + -0x48) = uVar3;
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_004c1d48;
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x24) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -0x24) + 8);
        *(undefined4 *)((int)register0x00000054 + -0x48) = uVar3;
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_004c1d48;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x24) + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -0x24) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x48) = uVar3;
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_004c1d48;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_004c1d5c;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 0x28;
        *(undefined1 **)((int)register0x00000054 + -0x44) =
             (undefined1 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x40) = 3;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 3;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        k3c_internal_pkg_printer___Printer__Invoke_shutdown();
        puVar1 = *(undefined4 **)((int)register0x00000054 + 4);
      }
      else {
LAB_004c1ac0:
        if (puVar1[2] == 10) {
          *(undefined4 *)((int)register0x00000054 + -0x4c) = puVar1[1];
          *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_004c1d54;
          *(undefined4 *)((int)register0x00000054 + -0x44) = 10;
          FUN_00018250();
          if (*(char *)((int)register0x00000054 + -0x40) == '\0') {
            puVar1 = *(undefined4 **)((int)register0x00000054 + 4);
          }
          else {
            *(undefined4 *)((int)register0x00000054 + -0x28) = *DAT_004c1d58;
            FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x20));
            uVar3 = extraout_r2[1];
            *(undefined4 *)((int)register0x00000054 + -0x4c) = *extraout_r2;
            *(undefined4 *)((int)register0x00000054 + -0x48) = uVar3;
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_004c1d48;
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0x44);
            uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x4c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + 8);
            *(undefined4 *)((int)register0x00000054 + -0x48) = uVar3;
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_004c1d48;
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x44);
            uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + 0x14);
            *(undefined4 *)((int)register0x00000054 + -0x4c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x48) = uVar3;
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_004c1d48;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x44);
            *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_004c1d5c;
            *(undefined4 *)((int)register0x00000054 + -0x48) = 0x28;
            *(undefined1 **)((int)register0x00000054 + -0x44) =
                 (undefined1 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)((int)register0x00000054 + -0x40) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x3c) = 3;
            FUN_0013b72c();
            *(undefined4 *)((int)register0x00000054 + -0x4c) =
                 **(undefined4 **)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x48) =
                 *(undefined4 *)((int)register0x00000054 + -0x38);
            *(undefined4 *)((int)register0x00000054 + -0x44) =
                 *(undefined4 *)((int)register0x00000054 + -0x34);
            k3c_internal_pkg_printer___Printer__Invoke_shutdown();
            puVar1 = *(undefined4 **)((int)register0x00000054 + 4);
          }
        }
      }
      *(undefined4 *)((int)register0x00000054 + -0x4c) = *puVar1;
      *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_004c1d64;
      *(undefined4 *)((int)register0x00000054 + -0x44) = 5;
      *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_004c1d68;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_004c1d6c;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      bVar5 = *(int *)((int)register0x00000054 + -0x38) == DAT_004c1d70;
      if (bVar5) {
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined1 *)((int)register0x00000054 + -0x40) = 0;
        k3c_internal_pkg_gcode___GCodeDispatch__Respond_info();
        *(undefined8 *)((int)register0x00000054 + 8) = *DAT_004c1d74;
        return;
      }
      *(int *)((int)register0x00000054 + -0x4c) = *(int *)((int)register0x00000054 + -0x38);
      *(int *)((int)register0x00000054 + -0x48) = DAT_004c1d70;
      *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_004c1d78;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x50);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x4c1d40;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/heater.(*HeaterCheck).Get_status @ 004c1d7c (size 308) */

void k3c_internal_pkg_heater___HeaterCheck__Get_status(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 *puStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4c1eac;
    FUN_0009bf64();
  }
  FUN_000908bc();
  FUN_0008f77c();
  FUN_00093a08();
  *puStack_10 = PTR_DAT_004c1ebc;
  puVar1 = puStack_10;
  if (*(int *)PTR_DAT_004c1ec0 != 0) {
    puVar1 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = uStack_18;
    unaff_r8[1] = puVar1[1];
  }
  puVar1[1] = uStack_18;
  FUN_00020ce0();
  FUN_00093a08();
  *puStack_10 = PTR_DAT_004c1ec8;
  if (*(int *)PTR_DAT_004c1ec0 != 0) {
    puStack_10 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = uStack_20;
    unaff_r8[1] = puStack_10[1];
  }
  puStack_10[1] = uStack_20;
                    /* WARNING: Could not recover jumptable at 0x004c1ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*HeaterCheck).Stats @ 004c1ecc (size 388) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater___HeaterCheck__Stats(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4c204c;
    FUN_0009bf64();
  }
  FUN_0009dee4(0,auStack_30);
  FUN_0008f77c();
  auStack_30[0] = _UNK_004c2054;
  FUN_0008f6c0();
  uStack_28 = DAT_004c2058;
  FUN_0008f6c0();
  uStack_20 = DAT_004c2058;
  FUN_0008f6c0();
  uStack_18 = DAT_004c2058;
  FUN_0008f6c0();
  uStack_10 = DAT_004c2058;
  FUN_0008f6c0();
  uStack_8 = DAT_004c2058;
  FUN_0013b72c();
  in_stack_00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x004c2040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.Load_config_verify_heater @ 004c2060 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_heater_Load_config_verify_heater(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4c2098;
    FUN_0009bf64();
  }
  k3c_internal_pkg_heater_NewHeaterCheck();
  in_stack_00000008 = _UNK_004c20a0;
                    /* WARNING: Could not recover jumptable at 0x004c208c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Set_temperature.func1 @ 004c20a4 (size 4) */

void k3c_internal_pkg_heater___PrinterHeaters__Set_temperature_func1(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x004c20a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/heater.(*HeaterCheck).handle_connect-fm @ 004c20b4 (size 124) */

void k3c_internal_pkg_heater___HeaterCheck__handle_connect_fm(void)

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
  k3c_internal_pkg_heater___HeaterCheck__handle_connect();
  return;
}



/* k3c/internal/pkg/heater.(*HeaterCheck).handle_shutdown-fm @ 004c2130 (size 136) */

void k3c_internal_pkg_heater___HeaterCheck__handle_shutdown_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_10;
  int iStack_c;
  undefined8 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  iStack_c = (*(int **)(unaff_r7 + 4))[0x15];
  if (iStack_c != 0) {
    uStack_10 = *(undefined4 *)(**(int **)(unaff_r7 + 4) + 0xc);
    uStack_8 = *DAT_004c21bc;
    k3c_internal_pkg_reactor___Reactor__Update_timer();
  }
  return;
}



/* k3c/internal/pkg/heater.(*HeaterCheck).handle_heater_check-fm @ 004c21c0 (size 448) */

void k3c_internal_pkg_heater___HeaterCheck__handle_heater_check_fm(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_r7;
  uint *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  byte bStack_d;
  uint uStack_c;
  int iStack_8;
  uint uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar2 = *(int **)(unaff_r10 + 0x10);
  if ((piVar2 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar2)) {
    *piVar2 = (int)&uStack_24;
  }
  iStack_8 = *(int *)(unaff_r7 + 4);
  bStack_d = *(byte *)(iStack_8 + 0x58);
  FUN_000908bc();
  uStack_c = uStack_24;
  uStack_24 = *(uint *)(iStack_8 + 4);
  uStack_20 = *(undefined4 *)(iStack_8 + 8);
  FUN_0008f77c();
  uStack_4 = uStack_1c;
  uStack_24 = DAT_004c2384;
  uStack_20 = uStack_c;
  uStack_1c = DAT_004c2388;
  uStack_18 = 4;
  FUN_00093a08();
  *puStack_14 = DAT_004c238c;
  puVar1 = puStack_14;
  if (*DAT_004c2390 != 0) {
    puVar1 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = uStack_4;
    unaff_r8[1] = puVar1[1];
  }
  puVar1[1] = uStack_4;
  uStack_24 = (uint)bStack_d;
  FUN_00020ce0();
  uStack_4 = uStack_20;
  uStack_24 = DAT_004c2384;
  uStack_20 = uStack_c;
  uStack_1c = DAT_004c2394;
  uStack_18 = 10;
  FUN_00093a08();
  *puStack_14 = DAT_004c2398;
  if (*DAT_004c2390 != 0) {
    puStack_14 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = uStack_4;
    unaff_r8[1] = puStack_14[1];
  }
  puStack_14[1] = uStack_4;
  if (*(int *)(in_stack_00000004 + 0x18) == 0) {
    *(uint *)(in_stack_00000004 + 0x18) = DAT_004c2384;
    if (*DAT_004c2390 != 0) {
      in_stack_00000004 = FUN_0009db64();
      *unaff_r8 = uStack_c;
      unaff_r8[1] = *(uint *)(in_stack_00000004 + 0x1c);
    }
    *(uint *)(in_stack_00000004 + 0x1c) = uStack_c;
  }
  return;
}



/* k3c/internal/pkg/heater.(*HeaterCheck).check_event-fm @ 004c239c (size 100) */

void k3c_internal_pkg_heater___HeaterCheck__check_event_fm(void)

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
  k3c_internal_pkg_heater___HeaterCheck__check_event();
  return;
}



/* k3c/internal/pkg/heater.(*CustomTableThermistor).Create-fm @ 004c2400 (size 120) */

void k3c_internal_pkg_heater___CustomTableThermistor__Create_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_c = **(undefined4 **)(unaff_r7 + 4);
  uStack_8 = (*(undefined4 **)(unaff_r7 + 4))[1];
  uStack_10 = in_stack_00000004;
  k3c_internal_pkg_heater_PrinterTableThermistor();
  return;
}



/* k3c/internal/pkg/heater.(*CustomThermistor).Create-fm @ 004c2480 (size 112) */

void k3c_internal_pkg_heater___CustomThermistor__Create_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_c;
  }
  uStack_8 = *(undefined4 *)(*(int *)(unaff_r7 + 4) + 0x40);
  uStack_c = in_stack_00000004;
  k3c_internal_pkg_heater_PrinterThermistor();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Get_status-fm @ 004c24f8 (size 100) */

void k3c_internal_pkg_heater___Heater__Get_status_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined4 in_stack_0000000c;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined8 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *(undefined4 *)(unaff_r7 + 4);
  uStack_c = in_stack_00000004;
  k3c_internal_pkg_heater___Heater__Get_status();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaterBed).Cmd_M140-fm @ 004c255c (size 116) */

void k3c_internal_pkg_heater___PrinterHeaterBed__Cmd_M140_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_14;
  }
  uStack_14 = *(undefined4 *)(unaff_r7 + 4);
  uStack_10 = in_stack_00000004;
  uStack_c = 0;
  k3c_internal_pkg_heater___PrinterHeaterBed__setTemperature();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaterBed).Cmd_M190-fm @ 004c25d0 (size 116) */

void k3c_internal_pkg_heater___PrinterHeaterBed__Cmd_M190_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_14;
  }
  uStack_14 = *(undefined4 *)(unaff_r7 + 4);
  uStack_10 = in_stack_00000004;
  uStack_c = 1;
  k3c_internal_pkg_heater___PrinterHeaterBed__setTemperature();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaterBed).setHeaterBedTemp-fm @ 004c2644 (size 124) */

void k3c_internal_pkg_heater___PrinterHeaterBed__setHeaterBedTemp_fm(void)

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
  k3c_internal_pkg_heater___PrinterHeaterBed__setHeaterBedTemp();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Handle_ready-fm @ 004c26c0 (size 32) */

void k3c_internal_pkg_heater___PrinterHeaters__Handle_ready_fm(void)

{
  int unaff_r7;
  
  *(undefined1 *)(*(int *)(unaff_r7 + 4) + 0x34) = 1;
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Turn_off_all_heaters-fm @ 004c26e0 (size 212) */

/* WARNING: Removing unreachable block (ram,0x004c2754) */

void k3c_internal_pkg_heater___PrinterHeaters__Turn_off_all_heaters_fm(void)

{
  int *piVar1;
  undefined4 extraout_r2;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int *piStack_3c;
  undefined8 uStack_38;
  int iStack_30;
  int *piStack_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&piStack_3c;
  }
  FUN_0009dee4(0,&iStack_30,*(undefined4 *)(*(int *)(unaff_r7 + 4) + 8));
  piStack_3c = DAT_004c27b8;
  uStack_38 = CONCAT44(&iStack_30,extraout_r2);
  FUN_00091764();
  while (iStack_30 != 0) {
    piStack_3c = (int *)*piStack_2c;
    if (piStack_3c != (int *)0x0) {
      *(undefined1 *)(piStack_3c + 0x2a) = 0;
      uStack_38 = 0;
      k3c_internal_pkg_heater___Heater__Set_temp();
    }
    piStack_3c = &iStack_30;
    FUN_000919c8();
  }
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Cmd_TURN_OFF_HEATERS-fm @ 004c27bc (size 108) */

void k3c_internal_pkg_heater___PrinterHeaters__Cmd_TURN_OFF_HEATERS_fm(void)

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
  k3c_internal_pkg_heater___PrinterHeaters__Cmd_TURN_OFF_HEATERS();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Cmd_M105-fm @ 004c2828 (size 108) */

void k3c_internal_pkg_heater___PrinterHeaters__Cmd_M105_fm(void)

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
  k3c_internal_pkg_heater___PrinterHeaters__Cmd_M105();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterHeaters).Cmd_TEMPERATURE_WAIT-fm @ 004c2894 (size 108) */

void k3c_internal_pkg_heater___PrinterHeaters__Cmd_TEMPERATURE_WAIT_fm(void)

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
  k3c_internal_pkg_heater___PrinterHeaters__Cmd_TEMPERATURE_WAIT();
  return;
}



/* k3c/internal/pkg/heater.(*ControlPID).reload-fm @ 004c2900 (size 124) */

void k3c_internal_pkg_heater___ControlPID__reload_fm(void)

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
  k3c_internal_pkg_heater___ControlPID__reload();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Temperature_callback-fm @ 004c297c (size 100) */

void k3c_internal_pkg_heater___Heater__Temperature_callback_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined8 *)*piVar1)) {
    *piVar1 = (int)&uStack_14;
  }
  uStack_14 = *(undefined4 *)(unaff_r7 + 4);
  uStack_10 = in_stack_00000004;
  uStack_8 = in_stack_0000000c;
  k3c_internal_pkg_heater___Heater__Temperature_callback();
  return;
}



/* k3c/internal/pkg/heater.(*Heater).Cmd_SET_HEATER_TEMPERATURE-fm @ 004c29e0 (size 108) */

void k3c_internal_pkg_heater___Heater__Cmd_SET_HEATER_TEMPERATURE_fm(void)

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
  k3c_internal_pkg_heater___Heater__Cmd_SET_HEATER_TEMPERATURE();
  return;
}



/* k3c/internal/pkg/heater.(*Heater)._handle_shutdown-fm @ 004c2a4c (size 36) */

void k3c_internal_pkg_heater___Heater___handle_shutdown_fm(void)

{
  int unaff_r7;
  
  *(undefined8 *)(*(int *)(unaff_r7 + 4) + 0xcc) = *DAT_004c2a74;
  return;
}



/* k3c/internal/pkg/heater.ICustomLinear.Create-fm @ 004c2a78 (size 116) */

void k3c_internal_pkg_heater_ICustomLinear_Create_fm(void)

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
  uStack_10 = *(undefined4 *)(unaff_r7 + 8);
  uStack_c = in_stack_00000004;
  (**(code **)(*(int *)(unaff_r7 + 4) + 0xc))();
  return;
}



/* k3c/internal/pkg/heater.(*LinearInterpolate).Interpolate-fm @ 004c2aec (size 100) */

void k3c_internal_pkg_heater___LinearInterpolate__Interpolate_fm(void)

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
  k3c_internal_pkg_heater___LinearInterpolate__Interpolate();
  return;
}



/* k3c/internal/pkg/heater.(*LinearInterpolate).Reverse_interpolate-fm @ 004c2b50 (size 100) */

void k3c_internal_pkg_heater___LinearInterpolate__Reverse_interpolate_fm(void)

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
  k3c_internal_pkg_heater___LinearInterpolate__Reverse_interpolate();
  return;
}



/* k3c/internal/pkg/heater.(*PrinterADCtoTemperature).Adc_callback-fm @ 004c2bb4 (size 100) */

void k3c_internal_pkg_heater___PrinterADCtoTemperature__Adc_callback_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
  undefined4 uStack_14;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined8 *)*piVar1)) {
    *piVar1 = (int)&uStack_14;
  }
  uStack_14 = *(undefined4 *)(unaff_r7 + 4);
  uStack_10 = in_stack_00000004;
  uStack_8 = in_stack_0000000c;
  k3c_internal_pkg_heater___PrinterADCtoTemperature__Adc_callback();
  return;
}



/* k3c/internal/pkg/heater.(*FileADCSource).read_and_callback-fm @ 004c2c18 (size 100) */

void k3c_internal_pkg_heater___FileADCSource__read_and_callback_fm(void)

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
  k3c_internal_pkg_heater___FileADCSource__read_and_callback();
  return;
}



