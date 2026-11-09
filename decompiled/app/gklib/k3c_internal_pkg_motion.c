// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/motion   functions: 72
/* k3c/internal/pkg/motion.calc_move_time @ 0051bf1c (size 168) */

void k3c_internal_pkg_motion_calc_move_time(void)

{
  double in_stack_00000004;
  double in_stack_00000014;
  
  if (in_stack_00000004 < 0.0) {
    in_stack_00000004 = -in_stack_00000004;
  }
  if ((in_stack_00000014 != 0.0) && (in_stack_00000004 != 0.0)) {
    return;
  }
  return;
}



/* k3c/internal/pkg/motion.NewForceMove @ 0051bfc4 (size 820) */

void k3c_internal_pkg_motion_NewForceMove(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *extraout_r1;
  undefined4 extraout_r1_00;
  int extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0051c2fc;
      FUN_00022cf8();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x24);
      uVar3 = **(undefined4 **)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0051c300 != 0) {
        FUN_0009db54();
        *unaff_r8 = extraout_r3;
        puVar2 = extraout_r1;
        uVar3 = extraout_r3;
      }
      *(undefined4 **)((int)register0x00000054 + -8) = puVar2;
      *puVar2 = uVar3;
      FUN_000908bc();
      uVar3 = *(undefined4 *)((int)register0x00000054 + -0x28);
      if (*(int *)PTR_DAT_0051c300 == 0) {
        iVar1 = *(int *)((int)register0x00000054 + -8);
      }
      else {
        FUN_0009db64();
        *unaff_r8 = extraout_r1_00;
        iVar1 = *(int *)((int)register0x00000054 + -8);
        unaff_r8[1] = *(undefined4 *)(iVar1 + 4);
        uVar3 = extraout_r1_00;
      }
      *(undefined4 *)(iVar1 + 4) = uVar3;
      k3c_internal_pkg_chelper__Cfunc_trapq_alloc();
      uVar3 = *(undefined4 *)((int)register0x00000054 + -0x28);
      iVar1 = *(int *)((int)register0x00000054 + -8);
      *(undefined **)(iVar1 + 8) = PTR_DAT_0051c304;
      if (*(int *)PTR_DAT_0051c300 != 0) {
        uVar3 = FUN_0009db84();
        *unaff_r8 = uVar3;
        unaff_r8[1] = *(undefined4 *)(extraout_r2 + 0xc);
        unaff_r8[2] = *(undefined4 *)(extraout_r2 + 0x10);
        unaff_r8[3] = *(undefined4 *)(extraout_r2 + 0x14);
        iVar1 = extraout_r2;
      }
      *(undefined4 *)(iVar1 + 0xc) = uVar3;
      *(undefined **)(iVar1 + 0x10) = PTR_DAT_0051c308;
      *(undefined **)(iVar1 + 0x14) = PTR_DAT_0051c30c;
      *(undefined1 *)((int)register0x00000054 + -0x28) = 0x78;
      k3c_internal_pkg_chelper__Cfunc_cartesian_stepper_alloc();
      uVar3 = *(undefined4 *)((int)register0x00000054 + -0x24);
      puVar2 = *(undefined4 **)((int)register0x00000054 + -8);
      puVar2[6] = PTR_DAT_0051c310;
      if (*(int *)PTR_DAT_0051c300 != 0) {
        uVar3 = FUN_0009db64();
        *unaff_r8 = uVar3;
        unaff_r8[1] = extraout_r2_00[7];
        puVar2 = extraout_r2_00;
      }
      puVar2[7] = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x28) = *puVar2;
      *(undefined **)((int)register0x00000054 + -0x24) =
           PTR_s_gcodeok__sM8844_helpReady_________00820821_0x5d2_0051c314;
      *(undefined4 *)((int)register0x00000054 + -0x20) = 5;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0051c318;
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0051c31c;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      bVar5 = *(undefined **)((int)register0x00000054 + -0x14) == PTR_DAT_0051c320;
      if (bVar5) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0051c324;
        FUN_00022cf8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x24);
        *puVar2 = PTR_k3c_internal_pkg_motion___ForceMove__cmd_STEPPER_BUZZ_fm_0051c328;
        if (*(int *)PTR_DAT_0051c300 == 0) {
          uVar3 = *(undefined4 *)((int)register0x00000054 + -8);
        }
        else {
          puVar2 = (undefined4 *)FUN_0009db54();
          uVar3 = *(undefined4 *)((int)register0x00000054 + -8);
          *unaff_r8 = uVar3;
        }
        puVar2[1] = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined **)((int)register0x00000054 + -0x24) =
             PTR_s_STEPPER_BUZZaxis_minimumaxis_max_008262d0_0x3f5_0051c32c;
        *(undefined4 *)((int)register0x00000054 + -0x20) = 0xc;
        *(undefined4 **)((int)register0x00000054 + -0x1c) = puVar2;
        *(undefined1 *)((int)register0x00000054 + -0x18) = 0;
        *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_0051c330;
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0x27;
        k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0051c334;
        *(undefined4 *)((int)register0x00000054 + -0x20) = 0x11;
        *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0051c338;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0051c33c;
        *(undefined1 *)((int)register0x00000054 + -0x14) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getboolean();
        if (*(char *)((int)register0x00000054 + -0x10) != '\0') {
          *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0051c324;
          FUN_00022cf8();
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x24);
          *puVar2 = PTR_k3c_internal_pkg_motion___ForceMove__cmd_FORCE_MOVE_fm_0051c340;
          if (*(int *)PTR_DAT_0051c300 == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -8);
          }
          else {
            puVar2 = (undefined4 *)FUN_0009db54();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -8);
            *unaff_r8 = uVar3;
          }
          puVar2[1] = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -4);
          *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0051c344;
          *(undefined4 *)((int)register0x00000054 + -0x20) = 10;
          *(undefined4 **)((int)register0x00000054 + -0x1c) = puVar2;
          *(undefined1 *)((int)register0x00000054 + -0x18) = 0;
          *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_0051c348;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x2f;
          k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
          *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0051c324;
          FUN_00022cf8();
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x24);
          *puVar2 = PTR_k3c_internal_pkg_motion___ForceMove__cmd_SET_KINEMATIC_POSITION_fm_0051c34c;
          if (*(int *)PTR_DAT_0051c300 == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -8);
          }
          else {
            puVar2 = (undefined4 *)FUN_0009db54();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -8);
            *unaff_r8 = uVar3;
          }
          puVar2[1] = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -4);
          *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0051c350;
          *(undefined4 *)((int)register0x00000054 + -0x20) = 0x16;
          *(undefined4 **)((int)register0x00000054 + -0x1c) = puVar2;
          *(undefined1 *)((int)register0x00000054 + -0x18) = 0;
          *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_0051c354;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x24;
          k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
        }
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
                    /* WARNING: Could not recover jumptable at 0x0051c2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x2c))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x28) =
           *(undefined **)((int)register0x00000054 + -0x14);
      *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0051c320;
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0051c358;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x2c);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x51c2f4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*ForceMove).Register_stepper @ 0051c35c (size 132) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion___ForceMove__Register_stepper(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_0000000c;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x51c3dc;
    FUN_0009bf64();
  }
  FUN_00093a08();
  if (*_UNK_0051c3e8 != 0) {
    puStack_4 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = in_stack_0000000c;
    unaff_r8[1] = *puStack_4;
  }
  *puStack_4 = in_stack_0000000c;
                    /* WARNING: Could not recover jumptable at 0x0051c3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*ForceMove).Lookup_stepper @ 0051c3ec (size 228) */

void k3c_internal_pkg_motion___ForceMove__Lookup_stepper(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined1 local_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00093560();
  if (local_c == '\0') {
    FUN_0008f77c();
    k3c_internal_pkg_logger_Errorf();
  }
  FUN_00025f60();
  return;
}



/* k3c/internal/pkg/motion.(*ForceMove)._force_enable @ 0051c4e0 (size 216) */

void k3c_internal_pkg_motion___ForceMove___force_enable(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 in_stack_0000000c;
  int local_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  (**(code **)*DAT_0051c5bc)();
  k3c_internal_pkg_toolhead___Toolhead__Get_last_move_time();
  (**(code **)*DAT_0051c5c0)();
  k3c_internal_pkg_toolhead___PrinterStepperEnable__Lookup_enable();
  if (*(char *)(local_1c + 0x14) == '\0') {
    k3c_internal_pkg_toolhead___EnableTracking__Motor_enable();
    k3c_internal_pkg_toolhead___Toolhead__Dwell();
  }
  return;
}



/* k3c/internal/pkg/motion.(*ForceMove)._restore_enable @ 0051c5c8 (size 224) */

void k3c_internal_pkg_motion___ForceMove___restore_enable(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  char in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (in_stack_0000000c == '\0') {
    (**(code **)*DAT_0051c6ac)();
    k3c_internal_pkg_toolhead___Toolhead__Dwell();
    k3c_internal_pkg_toolhead___Toolhead__Get_last_move_time();
    (**(code **)*DAT_0051c6b4)();
    k3c_internal_pkg_toolhead___PrinterStepperEnable__Lookup_enable();
    k3c_internal_pkg_toolhead___EnableTracking__Motor_disable();
    k3c_internal_pkg_toolhead___Toolhead__Dwell();
  }
  return;
}



/* k3c/internal/pkg/motion.(*ForceMove).Manual_move @ 0051c6b8 (size 648) */

void k3c_internal_pkg_motion___ForceMove__Manual_move(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined8 *in_stack_0000001c;
  undefined1 local_50 [36];
  undefined8 local_2c;
  undefined1 auStack_24 [36];
  
  while( true ) {
    if (*(undefined1 **)(unaff_r10 + 8) < local_50) break;
    FUN_0009bf64();
  }
  (**(code **)*DAT_0051c944)();
  k3c_internal_pkg_toolhead___Toolhead__Flush_step_generation();
  k3c_internal_pkg_mcu___MCU_stepper__Set_stepper_kinematics();
  k3c_internal_pkg_mcu___MCU_stepper__Set_trapq();
  FUN_0009defc(0,auStack_24);
  k3c_internal_pkg_mcu___MCU_stepper__Set_position();
  local_2c = *in_stack_0000001c;
  k3c_internal_pkg_motion_calc_move_time();
  k3c_internal_pkg_toolhead___Toolhead__Get_last_move_time();
  (*(code *)**(undefined4 **)(in_stack_00000004 + 0x10))();
  k3c_internal_pkg_mcu___MCU_stepper__Generate_steps();
  (*(code *)**(undefined4 **)(in_stack_00000004 + 0x14))();
  k3c_internal_pkg_mcu___MCU_stepper__Set_trapq();
  k3c_internal_pkg_mcu___MCU_stepper__Set_stepper_kinematics();
  k3c_internal_pkg_toolhead___Toolhead__Note_mcu_movequeue_activity();
  k3c_internal_pkg_toolhead___Toolhead__Dwell();
  k3c_internal_pkg_toolhead___Toolhead__Flush_step_generation();
  return;
}



/* k3c/internal/pkg/motion.(*ForceMove)._lookup_stepper @ 0051c94c (size 388) */

void k3c_internal_pkg_motion___ForceMove___lookup_stepper(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_gcode___GCodeCommand__Get();
  if (local_14 == 0xe) {
    FUN_00018250();
  }
  FUN_00093560();
  FUN_0008f77c();
  k3c_internal_pkg_logger_Errorf();
  FUN_00025f60();
  return;
}



/* k3c/internal/pkg/motion.(*ForceMove).cmd_STEPPER_BUZZ @ 0051caf4 (size 824) */

void k3c_internal_pkg_motion___ForceMove__cmd_STEPPER_BUZZ(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 *in_stack_00000004;
  undefined4 *puVar4;
  undefined4 *in_stack_ffffff70;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  double local_5c;
  int local_54;
  double local_50;
  undefined8 local_48;
  double local_40;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while( true ) {
    if (*(undefined4 ***)(unaff_r10 + 8) < &local_1c) break;
    unaff_lr = 0x51ce28;
    FUN_0009bf64();
  }
  k3c_internal_pkg_motion___ForceMove___lookup_stepper();
  local_8 = 0;
  local_4 = 0;
  local_34 = in_stack_ffffff70;
  FUN_0008f77c();
  local_8 = DAT_0051ce30;
  puVar5 = &local_8;
  uVar7 = 1;
  k3c_internal_pkg_logger_Debugf();
  puVar4 = local_34;
  k3c_internal_pkg_motion___ForceMove___force_enable();
  uVar2 = *in_stack_00000004;
  puVar6 = puVar5;
  (**(code **)*DAT_0051ce38)();
  if (*(char *)(local_34 + 7) == '\0') {
    local_5c = 1.0;
    local_68 = 0x4010000000000000;
  }
  else {
    local_68 = *DAT_0051ce3c;
    local_5c = *DAT_0051ce40;
  }
  iVar1 = 0;
  local_38 = puVar4;
  while (iVar1 < 10) {
    local_50 = -local_5c;
    local_54 = iVar1 + 1;
    local_60 = iVar1;
    FUN_0009defc(0,&local_20,*local_34,local_34[1],unaff_lr,uVar2,puVar4,puVar6,uVar7);
    FUN_0008f77c();
    local_20 = DAT_0051ce30;
    local_40 = local_5c;
    local_1c = puVar6;
    FUN_0008f6c0();
    local_18 = DAT_0051ce44;
    local_48 = local_68;
    local_14 = puVar6;
    FUN_0008f6c0();
    local_10 = DAT_0051ce44;
    local_c = puVar6;
    k3c_internal_pkg_logger_Debugf();
    local_70 = 0;
    k3c_internal_pkg_motion___ForceMove__Manual_move();
    k3c_internal_pkg_toolhead___Toolhead__Dwell();
    local_78 = 0;
    uVar8 = (undefined4)((ulonglong)local_50 >> 0x20);
    uVar9 = 0x402e000000000000;
    puVar10 = &local_78;
    k3c_internal_pkg_motion___ForceMove__Manual_move();
    uVar2 = (undefined4)*DAT_0051ce50;
    uVar7 = (undefined4)((ulonglong)*DAT_0051ce50 >> 0x20);
    puVar4 = local_38;
    k3c_internal_pkg_toolhead___Toolhead__Dwell();
    uVar3 = local_34[1];
    FUN_0009df04(0,&local_30,local_34,*local_34,unaff_lr,puVar4,uVar2,uVar7,uVar8,uVar9,puVar10);
    FUN_0008f77c();
    local_30 = DAT_0051ce30;
    local_2c = uVar7;
    FUN_00020ce0();
    local_28 = DAT_0051ce54;
    puVar4 = (undefined4 *)&DAT_00000012;
    puVar6 = &local_30;
    uVar7 = 2;
    uVar2 = DAT_0051ce58;
    local_24 = uVar3;
    k3c_internal_pkg_logger_Debugf();
    iVar1 = local_54;
  }
  k3c_internal_pkg_motion___ForceMove___restore_enable
            ((int)local_68,(uint)puVar5 & 0xff,in_stack_00000004,local_38);
  return;
}



/* k3c/internal/pkg/motion.(*ForceMove).cmd_FORCE_MOVE @ 0051ce5c (size 628) */

void k3c_internal_pkg_motion___ForceMove__cmd_FORCE_MOVE(void)

{
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000008;
  undefined4 uVar1;
  undefined8 in_stack_ffffff70;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_74;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while( true ) {
    local_24 = (undefined4 *)in_stack_ffffff70;
    if (*(undefined4 **)(unaff_r10 + 8) < &local_1c) break;
    unaff_lr = 0x51d0cc;
    FUN_0009bf64();
  }
  k3c_internal_pkg_motion___ForceMove___lookup_stepper();
  k3c_internal_pkg_gcode___GCodeCommand__Get_float();
  local_4c = local_74;
  local_5c = 0;
  k3c_internal_pkg_gcode___GCodeCommand__Get_float();
  local_54 = local_74;
  local_64 = 0;
  uVar2 = CONCAT44(DAT_0051d0e0,5);
  uVar3 = CONCAT44(&local_64,DAT_0051d0e4);
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar1 = DAT_0051d0dc;
  k3c_internal_pkg_gcode___GCodeCommand__Get_float();
  local_44 = local_74;
  FUN_0009def4(0,&local_20,local_24[1],*local_24,unaff_lr,in_stack_00000008,uVar1,uVar2,uVar3,uVar4,
               uVar5,uVar6);
  local_1c = (undefined4)uVar2;
  FUN_0008f77c();
  local_20 = DAT_0051d0e8;
  local_2c = local_4c;
  local_14 = local_1c;
  FUN_0008f6c0();
  local_18 = DAT_0051d0e0;
  local_34 = local_54;
  local_c = local_14;
  FUN_0008f6c0();
  local_10 = DAT_0051d0e0;
  local_3c = local_44;
  local_4 = local_c;
  FUN_0008f6c0();
  local_8 = DAT_0051d0e0;
  k3c_internal_pkg_logger_Debugf();
  k3c_internal_pkg_motion___ForceMove___force_enable();
  k3c_internal_pkg_motion___ForceMove__Manual_move();
  return;
}



/* k3c/internal/pkg/motion.(*ForceMove).cmd_SET_KINEMATIC_POSITION @ 0051d0f0 (size 1452) */

void k3c_internal_pkg_motion___ForceMove__cmd_SET_KINEMATIC_POSITION(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x6c)) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0xec);
      *(undefined4 *)((int)register0x00000054 + -0xec) = unaff_lr;
      pcVar1 = *(code **)*DAT_0051d6a0;
      *(undefined4 *)((int)register0x00000054 + -0xe8) =
           **(undefined4 **)((int)register0x00000054 + 4);
      (*pcVar1)();
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + -0xe4);
      *(undefined4 *)((int)register0x00000054 + -0xe8) =
           *(undefined4 *)((int)register0x00000054 + -0xe4);
      k3c_internal_pkg_toolhead___Toolhead__Get_last_move_time();
      iVar2 = *(int *)(*(int *)((int)register0x00000054 + -0x58) + 0x24);
      uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x58) + 0x20);
      if (iVar2 == 0) {
        uVar6 = 0;
        iVar2 = 0;
        uVar3 = uVar4;
      }
      else {
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar4;
        *(int *)((int)register0x00000054 + -0x94) = iVar2;
        *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar4;
        *(int *)((int)register0x00000054 + -0xe4) = iVar2;
        *(undefined4 *)((int)register0x00000054 + -0xe0) = 0;
        *(int *)((int)register0x00000054 + -0xdc) = iVar2;
        *(undefined4 *)((int)register0x00000054 + -0xd8) = DAT_0051d6a4;
        FUN_000987f4();
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0xd4);
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0xd0);
        iVar2 = *(int *)((int)register0x00000054 + -0x94);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x50);
      }
      *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0xe4) = uVar3;
      *(int *)((int)register0x00000054 + -0xe0) = iVar2 << 3;
      FUN_0009e3a4();
      uVar8 = *(int *)((int)register0x00000054 + -0xb4) == 0;
      if (!(bool)uVar8) {
        *(undefined8 *)((int)register0x00000054 + -100) =
             **(undefined8 **)((int)register0x00000054 + -0x5c);
        *(undefined4 *)((int)register0x00000054 + -0xe8) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_0051d6a8;
        *(undefined4 *)((int)register0x00000054 + -0xe0) = 1;
        *(undefined4 *)((int)register0x00000054 + -0xdc) = DAT_0051d6a4;
        *(undefined1 **)((int)register0x00000054 + -0xd8) =
             (undefined1 *)((int)register0x00000054 + -100);
        *(undefined4 *)((int)register0x00000054 + -0xd4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xd0) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xcc) = 0;
        *(undefined4 *)((int)register0x00000054 + -200) = 0;
        k3c_internal_pkg_gcode___GCodeCommand__Get_float();
        uVar8 = *(uint *)((int)register0x00000054 + -0xb4) == 1;
        if (1 < *(uint *)((int)register0x00000054 + -0xb4)) {
          *(undefined8 *)((int)register0x00000054 + -0xa0) =
               *(undefined8 *)((int)register0x00000054 + -0xc4);
          *(undefined8 *)((int)register0x00000054 + -0x6c) =
               *(undefined8 *)(*(int *)((int)register0x00000054 + -0x5c) + 8);
          *(undefined4 *)((int)register0x00000054 + -0xe8) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_0051d6ac;
          *(undefined4 *)((int)register0x00000054 + -0xe0) = 1;
          *(undefined4 *)((int)register0x00000054 + -0xdc) = DAT_0051d6a4;
          *(undefined1 **)((int)register0x00000054 + -0xd8) =
               (undefined1 *)((int)register0x00000054 + -0x6c);
          *(undefined4 *)((int)register0x00000054 + -0xd4) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xd0) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xcc) = 0;
          *(undefined4 *)((int)register0x00000054 + -200) = 0;
          k3c_internal_pkg_gcode___GCodeCommand__Get_float();
          uVar8 = *(uint *)((int)register0x00000054 + -0xb4) == 2;
          if (2 < *(uint *)((int)register0x00000054 + -0xb4)) {
            *(undefined8 *)((int)register0x00000054 + -0xa8) =
                 *(undefined8 *)((int)register0x00000054 + -0xc4);
            *(undefined8 *)((int)register0x00000054 + -0x74) =
                 *(undefined8 *)(*(int *)((int)register0x00000054 + -0x5c) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0xe8) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_0051d6b0;
            *(undefined4 *)((int)register0x00000054 + -0xe0) = 1;
            *(undefined4 *)((int)register0x00000054 + -0xdc) = DAT_0051d6a4;
            *(undefined1 **)((int)register0x00000054 + -0xd8) =
                 (undefined1 *)((int)register0x00000054 + -0x74);
            *(undefined4 *)((int)register0x00000054 + -0xd4) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xd0) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xcc) = 0;
            *(undefined4 *)((int)register0x00000054 + -200) = 0;
            k3c_internal_pkg_gcode___GCodeCommand__Get_float();
            *(undefined8 *)((int)register0x00000054 + -0xb0) =
                 *(undefined8 *)((int)register0x00000054 + -0xc4);
            *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0051d6b4;
            *(undefined4 *)((int)register0x00000054 + -0x2c) = 3;
            *(undefined4 *)((int)register0x00000054 + -0xe8) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_0051d6b8;
            *(undefined4 *)((int)register0x00000054 + -0xe0) = 9;
            *(undefined4 *)((int)register0x00000054 + -0xdc) = DAT_0051d6bc;
            *(undefined1 **)((int)register0x00000054 + -0xd8) =
                 (undefined1 *)((int)register0x00000054 + -0x30);
            *(undefined4 *)((int)register0x00000054 + -0xd4) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xd0) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xcc) = 0;
            *(undefined4 *)((int)register0x00000054 + -200) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xc4) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xc0) = 0;
            k3c_internal_pkg_gcode___GCodeCommand__Get();
            *(undefined4 *)((int)register0x00000054 + -0xe8) =
                 *(undefined4 *)((int)register0x00000054 + -0xbc);
            *(undefined4 *)((int)register0x00000054 + -0xe4) =
                 *(undefined4 *)((int)register0x00000054 + -0xb8);
            FUN_00150c8c();
            *(undefined4 *)((int)register0x00000054 + -0x54) =
                 *(undefined4 *)((int)register0x00000054 + -0xe0);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + -0xdc);
            *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x34) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xe8) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_0051d6c0;
            *(undefined4 *)((int)register0x00000054 + -0xe0) = 0xb;
            *(undefined4 *)((int)register0x00000054 + -0xdc) = DAT_0051d6bc;
            *(undefined1 **)((int)register0x00000054 + -0xd8) =
                 (undefined1 *)((int)register0x00000054 + -0x38);
            *(undefined4 *)((int)register0x00000054 + -0xd4) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xd0) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xcc) = 0;
            *(undefined4 *)((int)register0x00000054 + -200) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xc4) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xc0) = 0;
            k3c_internal_pkg_gcode___GCodeCommand__Get();
            if (*(int *)((int)register0x00000054 + -0xb8) == 0) {
              *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xe8) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_0051d6c4;
              *(undefined4 *)((int)register0x00000054 + -0xe0) = 5;
              *(undefined4 *)((int)register0x00000054 + -0xdc) = DAT_0051d6bc;
              *(undefined1 **)((int)register0x00000054 + -0xd8) =
                   (undefined1 *)((int)register0x00000054 + -0x40);
              *(undefined4 *)((int)register0x00000054 + -0xd4) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xd0) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xcc) = 0;
              *(undefined4 *)((int)register0x00000054 + -200) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xc4) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xc0) = 0;
              k3c_internal_pkg_gcode___GCodeCommand__Get();
              *(undefined4 *)((int)register0x00000054 + -0xe8) =
                   *(undefined4 *)((int)register0x00000054 + -0xbc);
              *(undefined4 *)((int)register0x00000054 + -0xe4) =
                   *(undefined4 *)((int)register0x00000054 + -0xb8);
              FUN_00150c8c();
              uVar4 = *(undefined4 *)((int)register0x00000054 + -0xe0);
              uVar3 = *(undefined4 *)((int)register0x00000054 + -0xdc);
            }
            else {
              *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x44) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xe8) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_0051d6c0;
              *(undefined4 *)((int)register0x00000054 + -0xe0) = 0xb;
              *(undefined4 *)((int)register0x00000054 + -0xdc) = DAT_0051d6bc;
              *(undefined1 **)((int)register0x00000054 + -0xd8) =
                   (undefined1 *)((int)register0x00000054 + -0x48);
              *(undefined4 *)((int)register0x00000054 + -0xd4) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xd0) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xcc) = 0;
              *(undefined4 *)((int)register0x00000054 + -200) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xc4) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xc0) = 0;
              k3c_internal_pkg_gcode___GCodeCommand__Get();
              *(undefined4 *)((int)register0x00000054 + -0xe8) =
                   *(undefined4 *)((int)register0x00000054 + -0xbc);
              *(undefined4 *)((int)register0x00000054 + -0xe4) =
                   *(undefined4 *)((int)register0x00000054 + -0xb8);
              FUN_00150c8c();
              uVar4 = *(undefined4 *)((int)register0x00000054 + -0xe0);
              uVar3 = *(undefined4 *)((int)register0x00000054 + -0xdc);
            }
            *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar4;
            *(undefined4 *)((int)register0x00000054 + -0x90) = uVar3;
            FUN_0009deec(0,(undefined1 *)((int)register0x00000054 + -0x28));
            *(undefined8 *)((int)register0x00000054 + -0x7c) =
                 *(undefined8 *)((int)register0x00000054 + -0xa0);
            *(undefined4 *)((int)register0x00000054 + -0xe8) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            *(undefined4 *)((int)register0x00000054 + -0xe4) =
                 *(undefined4 *)((int)register0x00000054 + -0x78);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_0051d6a4;
            *(undefined4 *)((int)register0x00000054 + -0x24) =
                 *(undefined4 *)((int)register0x00000054 + -0xe0);
            *(undefined8 *)((int)register0x00000054 + -0x84) =
                 *(undefined8 *)((int)register0x00000054 + -0xa8);
            *(undefined4 *)((int)register0x00000054 + -0xe8) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            *(undefined4 *)((int)register0x00000054 + -0xe4) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0051d6a4;
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0xe0);
            *(undefined8 *)((int)register0x00000054 + -0x8c) =
                 *(undefined8 *)((int)register0x00000054 + -0xb0);
            *(undefined4 *)((int)register0x00000054 + -0xe8) =
                 *(undefined4 *)((int)register0x00000054 + -0x8c);
            *(undefined4 *)((int)register0x00000054 + -0xe4) =
                 *(undefined4 *)((int)register0x00000054 + -0x88);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_0051d6a4;
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0xe0);
            *(undefined4 *)((int)register0x00000054 + -0xe8) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            *(undefined4 *)((int)register0x00000054 + -0xe4) =
                 *(undefined4 *)((int)register0x00000054 + -0x98);
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_0051d6bc;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0xe0);
            *(undefined4 *)((int)register0x00000054 + -0xe8) =
                 *(undefined4 *)((int)register0x00000054 + -0x4c);
            *(undefined4 *)((int)register0x00000054 + -0xe4) =
                 *(undefined4 *)((int)register0x00000054 + -0x90);
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -8) = DAT_0051d6bc;
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0xe0);
            *(undefined4 *)((int)register0x00000054 + -0xe8) = DAT_0051d6c8;
            *(undefined4 *)((int)register0x00000054 + -0xe4) = 0x45;
            *(undefined1 **)((int)register0x00000054 + -0xe0) =
                 (undefined1 *)((int)register0x00000054 + -0x28);
            *(undefined4 *)((int)register0x00000054 + -0xdc) = 5;
            *(undefined4 *)((int)register0x00000054 + -0xd8) = 5;
            k3c_internal_pkg_logger_Debugf();
            *(undefined4 *)((int)register0x00000054 + -0xe8) = DAT_0051d6cc;
            FUN_00022cf8();
            puVar5 = *(undefined8 **)((int)register0x00000054 + -0xe4);
            *puVar5 = *(undefined8 *)((int)register0x00000054 + -0xa0);
            puVar5[1] = *(undefined8 *)((int)register0x00000054 + -0xa8);
            puVar5[2] = *(undefined8 *)((int)register0x00000054 + -0xb0);
            uVar8 = *(uint *)((int)register0x00000054 + -0xb4) == 3;
            if (3 < *(uint *)((int)register0x00000054 + -0xb4)) {
              puVar5[3] = *(undefined8 *)(*(int *)((int)register0x00000054 + -0x5c) + 0x18);
              *(undefined4 *)((int)register0x00000054 + -0xe8) =
                   *(undefined4 *)((int)register0x00000054 + -0x58);
              *(undefined8 **)((int)register0x00000054 + -0xe4) = puVar5;
              *(undefined4 *)((int)register0x00000054 + -0xe0) = 4;
              *(undefined4 *)((int)register0x00000054 + -0xdc) = 4;
              *(undefined4 *)((int)register0x00000054 + -0xd8) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              *(undefined4 *)((int)register0x00000054 + -0xd4) =
                   *(undefined4 *)((int)register0x00000054 + -0x98);
              k3c_internal_pkg_toolhead___Toolhead__SetPosition();
              pcVar1 = *(code **)(*(int *)(*(int *)((int)register0x00000054 + -0x58) + 0x14c) + 0x18
                                 );
              *(undefined4 *)((int)register0x00000054 + -0xe8) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + -0x58) + 0x150);
              *(undefined4 *)((int)register0x00000054 + -0xe4) =
                   *(undefined4 *)((int)register0x00000054 + -0x4c);
              *(undefined4 *)((int)register0x00000054 + -0xe0) =
                   *(undefined4 *)((int)register0x00000054 + -0x90);
              (*pcVar1)();
              *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
              return;
            }
            FUN_0009dbd4(3,3);
          }
          FUN_0009dbd4(2,2);
        }
        FUN_0009dbd4(1,1);
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xec);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x51d698;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.Load_config_force_move @ 0051d6d0 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_Load_config_force_move(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x51d708;
    FUN_0009bf64();
  }
  k3c_internal_pkg_motion_NewForceMove();
  in_stack_00000008 = _UNK_0051d710;
                    /* WARNING: Could not recover jumptable at 0x0051d6fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.MustLookupForceMove @ 0051d714 (size 200) */

void k3c_internal_pkg_motion_MustLookupForceMove(undefined4 param_1)

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
           PTR_s_force_movegcode_arcsstatisticsou_00823504_0xee0_0051d7e0;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 10;
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0051d7e4;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0051d7e8;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      if (*(undefined **)((int)register0x00000054 + -0x18) == PTR_DAT_0051d7ec) {
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0051d7f0;
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0051d7f4;
      *(undefined **)((int)register0x00000054 + -8) =
           *(undefined **)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0051d7f8;
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
    unaff_lr = 0x51d7d8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.resolveKinematics @ 0051d7fc (size 496) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_resolveKinematics(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined *in_stack_0000000c;
  undefined *in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 *in_stack_00000018;
  char cStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x51d9e8;
    FUN_0009bf64();
  }
  if ((in_stack_00000008 == 0x14) && (FUN_00018250(), cStack_20 != '\0')) {
    in_stack_0000000c = PTR_DAT_0051da10;
    in_stack_00000010 = PTR_DAT_0051da1c;
    in_stack_00000014 = (undefined *)0x0;
    in_stack_00000018 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0051d9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if ((in_stack_00000008 == 0x11) && (FUN_00018250(), cStack_20 != '\0')) {
    in_stack_0000000c = PTR_DAT_0051da10;
    in_stack_00000010 = PTR_DAT_0051da18;
    in_stack_00000014 = (undefined *)0x0;
    in_stack_00000018 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0051d9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if ((in_stack_00000008 == 0xf) && (FUN_00018250(), cStack_20 != '\0')) {
    in_stack_0000000c = PTR_DAT_0051da10;
    in_stack_00000010 = PTR_PTR_0051da14;
    in_stack_00000014 = (undefined *)0x0;
    in_stack_00000018 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x0051d994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0008f77c();
  FUN_0013b72c();
  FUN_00022cf8();
  puVar1 = (undefined4 *)&DAT_0000001b;
  _DAT_0000001f = uStack_14;
  if (*(int *)PTR_DAT_0051da08 != 0) {
    puVar1 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = uStack_18;
  }
  *puVar1 = uStack_18;
  in_stack_0000000c = (undefined *)0x0;
  in_stack_00000010 = (undefined *)0x0;
  in_stack_00000014 = PTR_DAT_0051da0c;
  in_stack_00000018 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0051d970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/motion.SetupToolhead @ 0051da20 (size 628) */

void k3c_internal_pkg_motion_SetupToolhead(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int extraout_r1;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  undefined8 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      pcVar1 = (code *)**(undefined4 **)PTR_DAT_0051dc98;
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      (*pcVar1)();
      iVar2 = *(int *)((int)register0x00000054 + -0x38);
      *(int *)((int)register0x00000054 + -0x20) = iVar2;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      uVar3 = *(undefined4 *)(iVar2 + 0x16c);
      uVar4 = *(undefined4 *)(iVar2 + 0x170);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
      *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_0051dc9c;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 0x17;
      *(undefined4 *)((int)register0x00000054 + -0x30) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar4;
      FUN_0007636c();
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0051dca0;
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      *(undefined1 **)((int)register0x00000054 + -0x3c) =
           (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
      k3c_internal_pkg_logger_Info();
      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x1c));
      *(undefined4 *)((int)register0x00000054 + -0x18) = 0xb;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0051dca4;
      uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x20) + 0x16c);
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + -0x20) + 0x170);
      *(undefined4 *)((int)register0x00000054 + -0x14) = uVar3;
      *(undefined1 **)((int)register0x00000054 + -0x3c) =
           (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x38) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
      FUN_0014f8fc();
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      k3c_internal_pkg_motion_resolveKinematics();
      iVar2 = *(int *)((int)register0x00000054 + -0x2c);
      uVar6 = 0;
      if (iVar2 == 0) {
        uVar7 = CONCAT44(PTR_DAT_0051dca8,*(undefined **)((int)register0x00000054 + -0x34));
        uVar6 = 0;
        if (*(undefined **)((int)register0x00000054 + -0x34) == PTR_DAT_0051dca8) {
          pcVar1 = (code *)**(undefined4 **)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + 4);
          (*pcVar1)();
          uVar6 = *(int *)((int)register0x00000054 + -0x34) == 0;
          if (!(bool)uVar6) {
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0x30);
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0051dcac;
            *(int *)((int)register0x00000054 + -0x38) = *(int *)((int)register0x00000054 + -0x34);
            FUN_00020dac();
            iVar2 = *(int *)((int)register0x00000054 + -0x20);
            *(undefined4 *)(iVar2 + 0x14c) = *(undefined4 *)((int)register0x00000054 + -0x34);
            if (*(int *)PTR_DAT_0051dcb0 == 0) {
              uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
            }
            else {
              FUN_0009db64();
              uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
              *unaff_r8 = uVar3;
              unaff_r8[1] = *(undefined4 *)(extraout_r1 + 0x150);
              iVar2 = extraout_r1;
            }
            *(undefined4 *)(iVar2 + 0x150) = uVar3;
            *(undefined4 *)((int)register0x00000054 + -0x3c) =
                 **(undefined4 **)((int)register0x00000054 + 4);
            *(undefined **)((int)register0x00000054 + -0x38) =
                 PTR_s_toolheadsend_seqintervalvhighchm_008216f7_0x134d_0051dcb4;
            *(undefined4 *)((int)register0x00000054 + -0x34) = 8;
            *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_0051dcb8;
            *(int *)((int)register0x00000054 + -0x2c) = iVar2;
            k3c_internal_pkg_printer___Printer__Add_object();
            pcVar1 = (code *)**(undefined4 **)PTR_DAT_0051dcbc;
            *(undefined4 *)((int)register0x00000054 + -0x3c) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            (*pcVar1)();
            pcVar1 = (code *)**(undefined4 **)PTR_DAT_0051dcc0;
            *(undefined4 *)((int)register0x00000054 + -0x3c) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x0051dc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x40))();
            return;
          }
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0051dcc4;
          uVar7 = FUN_00020b18();
        }
        *(undefined8 *)((int)register0x00000054 + -0x3c) = uVar7;
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0051dcc8;
        iVar2 = FUN_000209b4();
      }
      pcVar1 = *(code **)(iVar2 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + -0x28);
      (*pcVar1)();
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0051dca0;
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x51dc90;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.NewCartKinematics @ 0051dccc (size 5408) */

/* WARNING: Removing unreachable block (ram,0x0051ea1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_NewCartKinematics(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  int *extraout_r1;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *extraout_r1_00;
  undefined4 *extraout_r1_01;
  undefined4 *extraout_r1_02;
  uint uVar7;
  int iVar8;
  undefined8 *extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int *piVar9;
  int *extraout_r1_06;
  int *extraout_r1_07;
  int *extraout_r1_08;
  int extraout_r1_09;
  uint extraout_r1_10;
  uint extraout_r1_11;
  undefined4 *puVar10;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  code *pcVar11;
  uint extraout_r2_01;
  uint extraout_r2_02;
  int extraout_r2_03;
  undefined *puVar12;
  undefined *extraout_r2_04;
  int *extraout_r2_05;
  int extraout_r2_06;
  int extraout_r2_07;
  uint extraout_r2_08;
  undefined8 *extraout_r2_09;
  undefined8 *extraout_r2_10;
  int *piVar13;
  int *extraout_r2_11;
  int *extraout_r2_12;
  int extraout_r2_13;
  undefined4 *extraout_r2_14;
  int extraout_r2_15;
  int extraout_r2_16;
  uint extraout_r2_17;
  uint extraout_r2_18;
  int extraout_r2_19;
  int iVar14;
  int extraout_r3;
  undefined4 extraout_r3_00;
  undefined8 *puVar15;
  undefined8 *extraout_r3_01;
  undefined8 *extraout_r3_02;
  undefined8 *extraout_r3_03;
  undefined4 extraout_r3_04;
  int iVar16;
  undefined4 uVar17;
  int extraout_r3_05;
  int extraout_r3_06;
  int extraout_r3_07;
  int extraout_r3_08;
  int iVar18;
  uint uVar19;
  int *unaff_r8;
  int *piVar20;
  int unaff_r10;
  byte *pbVar21;
  undefined1 *puVar22;
  undefined4 unaff_lr;
  uint uVar23;
  undefined1 uVar24;
  bool bVar25;
  undefined8 uVar26;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x238)) {
      puVar22 = (undefined1 *)((int)register0x00000054 + -0x2b8);
      *(undefined4 *)((int)register0x00000054 + -0x2b8) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051e548;
      FUN_00022cf8();
      piVar4 = *(int **)((int)register0x00000054 + -0x2b0);
      iVar14 = **(int **)((int)register0x00000054 + 8);
      if (*(int *)PTR_DAT_0051e54c != 0) {
        FUN_0009db54();
        *unaff_r8 = extraout_r3;
        piVar4 = extraout_r1;
        iVar14 = extraout_r3;
      }
      *(int **)((int)register0x00000054 + -0x1e4) = piVar4;
      *piVar4 = iVar14;
      piVar4[1] = 0;
      piVar4[2] = 0;
      piVar4[4] = 0;
      piVar4[5] = 0;
      puVar15 = (undefined8 *)PTR_DAT_0051e550;
      piVar4[3] = (int)PTR_DAT_0051e550;
      uVar2 = FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x28));
      *(undefined4 *)((int)register0x00000054 + -0x24) = 1;
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0051e554;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = 1;
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0051e558;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 1;
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0051e55c;
      iVar14 = 0;
      uVar23 = 0;
      iVar18 = 0;
      uVar5 = extraout_r3_00;
      while (piVar20 = (int *)PTR_DAT_0051e554, *(uint *)((int)register0x00000054 + -0x230) = uVar23
            , iVar18 < 3) {
        *(int *)((int)register0x00000054 + -0x22c) = iVar14;
        *(undefined8 **)((int)register0x00000054 + -0x1c8) = puVar15;
        *(int *)((int)register0x00000054 + -0x208) = iVar18;
        uVar5 = *(undefined4 *)((int)register0x00000054 + iVar18 * 8 + -0x28);
        uVar2 = *(undefined4 *)((int)register0x00000054 + iVar18 * 8 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x2b4) = 0;
        *(undefined **)((int)register0x00000054 + -0x2b0) =
             PTR_s_stepper_DUMP_TMCdiag_pintoolhead_008216f7_0x1335_0051e560;
        *(undefined4 *)((int)register0x00000054 + -0x2ac) = 8;
        *(undefined4 *)((int)register0x00000054 + -0x2a8) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x2a4) = uVar2;
        FUN_0007636c();
        *(undefined4 *)((int)register0x00000054 + -0x1e0) =
             *(undefined4 *)((int)register0x00000054 + -0x2a0);
        *(undefined4 *)((int)register0x00000054 + -0x248) =
             *(undefined4 *)((int)register0x00000054 + -0x29c);
        *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051e564;
        FUN_00022cf8();
        puVar6 = *(undefined4 **)((int)register0x00000054 + -0x2b0);
        puVar10 = *(undefined4 **)((int)register0x00000054 + 8);
        puVar15 = (undefined8 *)*puVar10;
        if (*(int *)PTR_DAT_0051e54c != 0) {
          FUN_0009db54();
          puVar6 = extraout_r1_00;
          puVar10 = extraout_r2;
          puVar15 = extraout_r3_01;
          puRam00000001 = extraout_r3_01;
        }
        *puVar6 = puVar15;
        puVar15 = (undefined8 *)puVar10[1];
        if (*(int *)PTR_DAT_0051e54c != 0) {
          FUN_0009db54();
          puVar6 = extraout_r1_01;
          puVar10 = extraout_r2_00;
          puVar15 = extraout_r3_02;
          puRam00000001 = extraout_r3_02;
        }
        puVar6[1] = puVar15;
        puVar15 = (undefined8 *)puVar10[2];
        if (*(int *)PTR_DAT_0051e54c == 0) {
          iVar14 = *(int *)((int)register0x00000054 + -0x1e0);
        }
        else {
          FUN_0009db64();
          iVar14 = *(int *)((int)register0x00000054 + -0x1e0);
          puVar6 = extraout_r1_02;
          puVar15 = extraout_r3_03;
          puRam00000001 = extraout_r3_03;
          _DAT_00000005 = iVar14;
        }
        puVar6[2] = puVar15;
        puVar6[4] = *(undefined4 *)((int)register0x00000054 + -0x248);
        puVar6[3] = iVar14;
        *(int *)((int)register0x00000054 + -0x20c) = *(int *)((int)register0x00000054 + -0x230) + 1;
        pcVar11 = (code *)**(undefined4 **)PTR_DAT_0051e568;
        *(undefined4 **)((int)register0x00000054 + -0x2b4) = puVar6;
        *(undefined1 *)((int)register0x00000054 + -0x2b0) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x2ac) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x2a8) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x2a4) = 0;
        (*pcVar11)();
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x2a0);
        uVar7 = *(uint *)((int)register0x00000054 + -0x22c);
        uVar23 = *(uint *)((int)register0x00000054 + -0x20c);
        if (uVar7 < uVar23) {
          *(undefined4 *)((int)register0x00000054 + -0x184) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x2b4) =
               *(undefined4 *)((int)register0x00000054 + -0x1c8);
          *(uint *)((int)register0x00000054 + -0x2b0) = uVar23;
          *(uint *)((int)register0x00000054 + -0x2ac) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x2a8) = 1;
          *(undefined **)((int)register0x00000054 + -0x2a4) = PTR_DAT_0051e56c;
          FUN_000987f4();
          puVar15 = *(undefined8 **)((int)register0x00000054 + -0x2a0);
          uVar23 = *(uint *)((int)register0x00000054 + -0x29c);
          uVar7 = *(uint *)((int)register0x00000054 + -0x298);
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x184);
        }
        else {
          puVar15 = *(undefined8 **)((int)register0x00000054 + -0x1c8);
        }
        uVar26 = CONCAT44(uVar7,uVar5);
        iVar18 = uVar23 - 1;
        if (*(int *)PTR_DAT_0051e54c != 0) {
          uVar26 = FUN_0009db64();
          puRam00000001 = (undefined8 *)uVar26;
          _DAT_00000005 = *(int *)((int)puVar15 + iVar18 * 4);
          uVar23 = extraout_r2_01;
        }
        iVar14 = (int)((ulonglong)uVar26 >> 0x20);
        *(int *)((int)puVar15 + iVar18 * 4) = (int)uVar26;
        uVar2 = 0;
        uVar5 = 0;
        piVar4 = *(int **)((int)register0x00000054 + -0x1e4);
        iVar18 = *(int *)((int)register0x00000054 + -0x208) + 1;
      }
      piVar4[7] = uVar23;
      piVar4[8] = iVar14;
      if (*(int *)PTR_DAT_0051e54c != 0) {
        uVar2 = FUN_0009db64(uVar2);
        _DAT_00000005 = piVar4[6];
        uVar23 = *(uint *)((int)register0x00000054 + -0x230);
        uVar5 = extraout_r3_04;
        puRam00000001 = puVar15;
      }
      piVar4[6] = (int)puVar15;
      if ((int)uVar23 < 3) {
        uVar23 = 3;
      }
      *(uint *)((int)register0x00000054 + -0x224) = uVar23;
      uVar7 = 0;
      while( true ) {
        unaff_r8 = (int *)0x1;
        if ((int)uVar23 <= (int)uVar7) {
          *(int **)((int)register0x00000054 + -0x2b4) = piVar4;
          k3c_internal_pkg_motion___CartKinematics__Get_steppers(uVar2);
          iVar18 = *(int *)((int)register0x00000054 + -0x2b0);
          *(int *)((int)register0x00000054 + -0x18c) = iVar18;
          iVar8 = *(int *)((int)register0x00000054 + -0x2ac);
          *(int *)((int)register0x00000054 + -0x208) = iVar8;
          iVar14 = *(int *)((int)register0x00000054 + 4);
          iVar16 = 0;
          goto LAB_0051e084;
        }
        uVar19 = piVar4[7];
        uVar24 = uVar7 == uVar19;
        if (uVar19 <= uVar7) goto LAB_0051f2a0;
        uVar19 = *(uint *)(piVar4[6] + uVar7 * 4);
        uVar24 = uVar7 == 3;
        if (2 < uVar7) goto LAB_0051f294;
        pbVar21 = *(byte **)((int)register0x00000054 + uVar7 * 8 + -0x28);
        if (*(byte **)((int)register0x00000054 + uVar7 * 8 + -0x28) == (byte *)0x0) {
          pbVar21 = PTR_DAT_0051e550;
        }
        iVar14 = *(int *)((int)register0x00000054 + uVar7 * 8 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
        uVar24 = iVar14 == 0;
        if ((bool)uVar24) break;
        *(uint *)((int)register0x00000054 + -0x220) = uVar7;
        bVar1 = *pbVar21;
        *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_0051e570;
        *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0051e574 + (uint)bVar1 * 8;
        piVar20 = *(int **)(uVar19 + 4);
        *(int **)((int)register0x00000054 + -0x188) = piVar20;
        iVar18 = *(int *)(uVar19 + 8);
        *(int *)((int)register0x00000054 + -0x208) = iVar18;
        *(undefined4 *)((int)register0x00000054 + -0x20c) = 0;
        while( true ) {
          uVar2 = 0;
          unaff_r8 = (int *)0x1;
          iVar14 = *(int *)((int)register0x00000054 + -0x20c);
          if (iVar18 <= iVar14) break;
LAB_0051f200:
          iVar14 = piVar20[iVar14];
          *(undefined1 **)((int)register0x00000054 + -0x3c) =
               (undefined1 *)((int)register0x00000054 + -0x30);
          *(int **)((int)register0x00000054 + -0x38) = unaff_r8;
          *(int **)((int)register0x00000054 + -0x34) = unaff_r8;
          *(int *)((int)register0x00000054 + -0x2b4) = iVar14;
          *(undefined **)((int)register0x00000054 + -0x2b0) = PTR_DAT_0051f2f8;
          *(undefined4 *)((int)register0x00000054 + -0x2ac) = 0x17;
          *(undefined **)((int)register0x00000054 + -0x2a8) = PTR_DAT_0051f2fc;
          *(undefined1 **)((int)register0x00000054 + -0x2a4) =
               (undefined1 *)((int)register0x00000054 + -0x3c);
          k3c_internal_pkg_mcu___MCU_stepper__Setup_itersolve();
          uVar7 = *(uint *)((int)register0x00000054 + -0x220);
          uVar5 = 0;
          iVar18 = *(int *)((int)register0x00000054 + -0x208);
          piVar4 = *(int **)((int)register0x00000054 + -0x1e4);
          piVar20 = *(int **)((int)register0x00000054 + -0x188);
          uVar23 = *(uint *)((int)register0x00000054 + -0x224);
          *(int *)((int)register0x00000054 + -0x20c) =
               *(int *)((int)register0x00000054 + -0x20c) + 1;
        }
        uVar7 = uVar7 + 1;
        piVar20 = (int *)PTR_DAT_0051e554;
      }
      FUN_0009dbd4(0,0);
      uVar7 = extraout_r1_10;
LAB_0051f294:
      FUN_0009dbd4(uVar7,3);
      uVar7 = extraout_r1_11;
LAB_0051f2a0:
      param_1 = FUN_0009dbd4(uVar7,uVar19);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x2b8);
      if ((bool)uVar24) {
        register0x00000054 = (BADSPACEBASE *)puVar22;
      }
    }
    unaff_lr = 0x51f2b8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
LAB_0051e084:
  if (iVar8 <= iVar16) goto LAB_0051e1bc;
  puVar10 = *(undefined4 **)(iVar18 + iVar16 * 8);
  piVar4 = (int *)PTR_DAT_0051e578;
  if (puVar10 != (undefined4 *)PTR_DAT_0051e578) goto LAB_0051f1ec;
  *(int *)((int)register0x00000054 + -0x20c) = iVar16;
  uVar5 = *(undefined4 *)(iVar18 + iVar16 * 8 + 4);
  *(undefined4 *)((int)register0x00000054 + -0x1dc) = uVar5;
  uVar2 = *(undefined4 *)(iVar14 + 0x11c);
  uVar17 = *(undefined4 *)(iVar14 + 0x120);
  *(undefined4 *)((int)register0x00000054 + -0x2b4) = uVar5;
  *(undefined4 *)((int)register0x00000054 + -0x2b0) = uVar2;
  *(undefined4 *)((int)register0x00000054 + -0x2ac) = uVar17;
  k3c_internal_pkg_mcu___MCU_stepper__Set_trapq();
  *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051e57c;
  FUN_00022cf8();
  uVar26 = CONCAT44(PTR_k3c_internal_pkg_mcu___MCU_stepper__Generate_steps_fm_0051e580,
                    *(undefined4 **)((int)register0x00000054 + -0x2b0));
  **(undefined4 **)((int)register0x00000054 + -0x2b0) =
       PTR_k3c_internal_pkg_mcu___MCU_stepper__Generate_steps_fm_0051e580;
  if (*(int *)PTR_DAT_0051e54c == 0) {
    puVar15 = *(undefined8 **)((int)register0x00000054 + -0x1dc);
  }
  else {
    uVar26 = FUN_0009db54();
    puVar15 = *(undefined8 **)((int)register0x00000054 + -0x1dc);
    puRam00000001 = puVar15;
  }
  *(undefined8 **)((int)uVar26 + 4) = puVar15;
  iVar14 = *(int *)((int)register0x00000054 + 4);
  uVar7 = *(uint *)(iVar14 + 0x134);
  uVar23 = *(int *)(iVar14 + 0x130) + 1;
  puVar15 = *(undefined8 **)(iVar14 + 300);
  if (uVar7 < uVar23) {
    *(int *)((int)register0x00000054 + -400) = (int)uVar26;
    *(undefined8 **)((int)register0x00000054 + -0x2b4) = puVar15;
    *(uint *)((int)register0x00000054 + -0x2b0) = uVar23;
    *(uint *)((int)register0x00000054 + -0x2ac) = uVar7;
    *(undefined4 *)((int)register0x00000054 + -0x2a8) = 1;
    *(undefined **)((int)register0x00000054 + -0x2a4) = PTR_DAT_0051e584;
    FUN_000987f4();
    puVar15 = *(undefined8 **)((int)register0x00000054 + -0x2a0);
    uVar23 = *(uint *)((int)register0x00000054 + -0x29c);
    iVar14 = *(int *)((int)register0x00000054 + 4);
    *(undefined4 *)(iVar14 + 0x134) = *(undefined4 *)((int)register0x00000054 + -0x298);
    if (*(int *)PTR_DAT_0051e54c != 0) {
      FUN_0009db64();
      _DAT_00000005 = *(int *)(extraout_r3_05 + 300);
      puVar15 = extraout_r1_03;
      uVar23 = extraout_r2_02;
      iVar14 = extraout_r3_05;
      puRam00000001 = extraout_r1_03;
    }
    *(undefined8 **)(iVar14 + 300) = puVar15;
    uVar26 = CONCAT44(PTR_k3c_internal_pkg_mcu___MCU_stepper__Generate_steps_fm_0051e580,
                      *(undefined4 *)((int)register0x00000054 + -400));
  }
  puVar3 = (undefined8 *)uVar26;
  *(uint *)(iVar14 + 0x130) = uVar23;
  if (*(int *)PTR_DAT_0051e54c != 0) {
    puVar3 = (undefined8 *)FUN_0009db64(puVar3,(int)((ulonglong)uVar26 >> 0x20));
    _DAT_00000005 = *(int *)((int)puVar15 + (uVar23 - 1) * 4);
    iVar14 = extraout_r2_03;
    puRam00000001 = puVar3;
  }
  *(undefined8 **)((int)puVar15 + (uVar23 - 1) * 4) = puVar3;
  iVar16 = *(int *)((int)register0x00000054 + -0x20c) + 1;
  iVar8 = *(int *)((int)register0x00000054 + -0x208);
  iVar18 = *(int *)((int)register0x00000054 + -0x18c);
  goto LAB_0051e084;
LAB_0051e1bc:
  *(undefined4 *)((int)register0x00000054 + -0x1e8) =
       **(undefined4 **)((int)register0x00000054 + -0x1e4);
  *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051e588;
  FUN_00022cf8();
  puVar6 = *(undefined4 **)((int)register0x00000054 + -0x2b0);
  *puVar6 = PTR_k3c_internal_pkg_motion___CartKinematics__Motor_off_fm_0051e58c;
  if (*(int *)PTR_DAT_0051e54c == 0) {
    puVar15 = *(undefined8 **)((int)register0x00000054 + -0x1e4);
  }
  else {
    puVar6 = (undefined4 *)FUN_0009db54();
    puVar15 = *(undefined8 **)((int)register0x00000054 + -0x1e4);
    puRam00000001 = puVar15;
  }
  *(undefined4 **)((int)register0x00000054 + -0x194) = puVar6;
  puVar6[1] = puVar15;
  uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1e8) + 0x24);
  *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051e590;
  *(undefined4 *)((int)register0x00000054 + -0x2b0) = uVar5;
  *(undefined **)((int)register0x00000054 + -0x2ac) = PTR_DAT_0051e594;
  *(undefined4 *)((int)register0x00000054 + -0x2a8) = 0x18;
  FUN_00093560();
  puVar6 = *(undefined4 **)((int)register0x00000054 + -0x2a4);
  iVar14 = puVar6[1];
  uVar23 = puVar6[2];
  puVar12 = (undefined *)*puVar6;
  if (*(char *)((int)register0x00000054 + -0x2a0) == '\0') {
    uVar23 = 0;
    iVar14 = 0;
    puVar12 = PTR_DAT_0051e550;
  }
  uVar7 = iVar14 + 1;
  if (uVar23 < uVar7) {
    *(undefined **)((int)register0x00000054 + -0x2b4) = puVar12;
    *(uint *)((int)register0x00000054 + -0x2b0) = uVar7;
    *(uint *)((int)register0x00000054 + -0x2ac) = uVar23;
    *(undefined4 *)((int)register0x00000054 + -0x2a8) = 1;
    *(undefined **)((int)register0x00000054 + -0x2a4) = PTR_DAT_0051e598;
    FUN_000987f4();
    puVar12 = *(undefined **)((int)register0x00000054 + -0x2a0);
    uVar7 = *(uint *)((int)register0x00000054 + -0x29c);
    uVar23 = *(uint *)((int)register0x00000054 + -0x298);
  }
  *(uint *)((int)register0x00000054 + -0x208) = uVar7;
  *(uint *)((int)register0x00000054 + -0x20c) = uVar23;
  if (*(int *)PTR_DAT_0051e54c == 0) {
    puVar15 = *(undefined8 **)((int)register0x00000054 + -0x194);
  }
  else {
    FUN_0009db64();
    puVar15 = *(undefined8 **)((int)register0x00000054 + -0x194);
    _DAT_00000005 = *(int *)(extraout_r2_04 + (uVar7 - 1) * 4);
    puVar12 = extraout_r2_04;
    puRam00000001 = puVar15;
  }
  *(undefined **)((int)register0x00000054 + -0x198) = puVar12;
  *(undefined8 **)(puVar12 + (uVar7 - 1) * 4) = puVar15;
  uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1e8) + 0x24);
  *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051e590;
  *(undefined4 *)((int)register0x00000054 + -0x2b0) = uVar5;
  *(undefined **)((int)register0x00000054 + -0x2ac) = PTR_DAT_0051e594;
  *(undefined4 *)((int)register0x00000054 + -0x2a8) = 0x18;
  FUN_00093a08();
  piVar4 = *(int **)((int)register0x00000054 + -0x2a4);
  piVar4[1] = *(int *)((int)register0x00000054 + -0x208);
  piVar4[2] = *(int *)((int)register0x00000054 + -0x20c);
  if (*(int *)PTR_DAT_0051e54c == 0) {
    puVar15 = *(undefined8 **)((int)register0x00000054 + -0x198);
  }
  else {
    piVar4 = (int *)FUN_0009db64();
    puVar15 = *(undefined8 **)((int)register0x00000054 + -0x198);
    _DAT_00000005 = *piVar4;
    puRam00000001 = puVar15;
  }
  *piVar4 = (int)puVar15;
  iVar14 = *(int *)((int)register0x00000054 + 4);
  uVar26 = *(undefined8 *)(iVar14 + 0x2c);
  *(undefined8 *)((int)register0x00000054 + -600) = uVar26;
  *(undefined8 *)((int)register0x00000054 + -0x268) = *(undefined8 *)(iVar14 + 0x44);
  *(undefined8 *)((int)register0x00000054 + -500) = uVar26;
  *(undefined4 *)((int)register0x00000054 + -0x2b4) =
       *(undefined4 *)((int)register0x00000054 + -500);
  *(undefined4 *)((int)register0x00000054 + -0x2b0) =
       *(undefined4 *)((int)register0x00000054 + -0x1f0);
  FUN_0008f6c0(iVar14);
  uVar5 = *(undefined4 *)((int)register0x00000054 + -0x2ac);
  *(undefined4 *)((int)register0x00000054 + -0x2b4) = *(undefined4 *)((int)register0x00000054 + 8);
  *(undefined **)((int)register0x00000054 + -0x2b0) =
       PTR_s_max_z_velocityFREEFALL_ACCELSET__008262d0_0x21fc_0051e59c;
  *(undefined4 *)((int)register0x00000054 + -0x2ac) = 0xe;
  *(undefined **)((int)register0x00000054 + -0x2a8) = PTR_DAT_0051e5a0;
  *(undefined4 *)((int)register0x00000054 + -0x2a4) = uVar5;
  *(undefined8 *)((int)register0x00000054 + -0x2a0) = 0;
  *(undefined8 *)((int)register0x00000054 + -0x298) =
       *(undefined8 *)((int)register0x00000054 + -600);
  *(undefined8 *)((int)register0x00000054 + -0x290) = 0;
  *(undefined8 *)((int)register0x00000054 + -0x288) = 0;
  *(undefined1 *)((int)register0x00000054 + -0x280) = 1;
  k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
  *(undefined8 *)(*(int *)((int)register0x00000054 + -0x1e4) + 0x24) =
       *(undefined8 *)((int)register0x00000054 + -0x27c);
  *(undefined8 *)((int)register0x00000054 + -0x1fc) =
       *(undefined8 *)((int)register0x00000054 + -0x268);
  *(undefined4 *)((int)register0x00000054 + -0x2b4) =
       *(undefined4 *)((int)register0x00000054 + -0x1fc);
  *(undefined4 *)((int)register0x00000054 + -0x2b0) =
       *(undefined4 *)((int)register0x00000054 + -0x1f8);
  FUN_0008f6c0();
  uVar5 = *(undefined4 *)((int)register0x00000054 + -0x2ac);
  *(undefined4 *)((int)register0x00000054 + -0x2b4) = *(undefined4 *)((int)register0x00000054 + 8);
  *(undefined **)((int)register0x00000054 + -0x2b0) = PTR_DAT_0051e5a4;
  *(undefined4 *)((int)register0x00000054 + -0x2ac) = 0xb;
  *(undefined **)((int)register0x00000054 + -0x2a8) = PTR_DAT_0051e5a0;
  *(undefined4 *)((int)register0x00000054 + -0x2a4) = uVar5;
  *(undefined8 *)((int)register0x00000054 + -0x2a0) = 0;
  *(undefined8 *)((int)register0x00000054 + -0x298) =
       *(undefined8 *)((int)register0x00000054 + -0x268);
  *(undefined8 *)((int)register0x00000054 + -0x290) = 0;
  *(undefined8 *)((int)register0x00000054 + -0x288) = 0;
  *(undefined1 *)((int)register0x00000054 + -0x280) = 1;
  k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
  *(undefined8 *)(*(int *)((int)register0x00000054 + -0x1e4) + 0x2c) =
       *(undefined8 *)((int)register0x00000054 + -0x27c);
  *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051e5a8;
  FUN_00022cf8();
  *(undefined4 *)((int)register0x00000054 + -0x19c) =
       *(undefined4 *)((int)register0x00000054 + -0x2b0);
  *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051e5ac;
  FUN_00022cf8();
  puVar15 = *(undefined8 **)((int)register0x00000054 + -0x2b0);
  *puVar15 = 0x3ff0000000000000;
  puVar15[1] = 0xbff0000000000000;
  piVar4 = *(int **)((int)register0x00000054 + -0x19c);
  piVar4[1] = 2;
  piVar4[2] = 2;
  if (*(int *)PTR_DAT_0051e54c != 0) {
    puVar15 = (undefined8 *)FUN_0009db64();
    _DAT_00000005 = *extraout_r2_05;
    piVar4 = extraout_r2_05;
    puRam00000001 = puVar15;
  }
  *piVar4 = (int)puVar15;
  *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051e5ac;
  FUN_00022cf8();
  puVar15 = *(undefined8 **)((int)register0x00000054 + -0x2b0);
  *puVar15 = 0x3ff0000000000000;
  puVar15[1] = 0xbff0000000000000;
  iVar14 = *(int *)((int)register0x00000054 + -0x19c);
  *(undefined4 *)(iVar14 + 0x10) = 2;
  *(undefined4 *)(iVar14 + 0x14) = 2;
  if (*(int *)PTR_DAT_0051e54c != 0) {
    puVar15 = (undefined8 *)FUN_0009db64();
    _DAT_00000005 = *(int *)(extraout_r2_06 + 0xc);
    iVar14 = extraout_r2_06;
    puRam00000001 = puVar15;
  }
  *(undefined8 **)(iVar14 + 0xc) = puVar15;
  *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051e5ac;
  FUN_00022cf8();
  puVar15 = *(undefined8 **)((int)register0x00000054 + -0x2b0);
  *puVar15 = 0x3ff0000000000000;
  puVar15[1] = 0xbff0000000000000;
  uVar26 = CONCAT44(2,puVar15);
  iVar14 = *(int *)((int)register0x00000054 + -0x19c);
  *(undefined4 *)(iVar14 + 0x1c) = 2;
  *(undefined4 *)(iVar14 + 0x20) = 2;
  if (*(int *)PTR_DAT_0051e54c == 0) {
    iVar18 = *(int *)((int)register0x00000054 + -0x1e4);
  }
  else {
    uVar26 = FUN_0009db84();
    puRam00000001 = (undefined8 *)uVar26;
    _DAT_00000005 = *(int *)(extraout_r2_07 + 0x18);
    iVar18 = *(int *)((int)register0x00000054 + -0x1e4);
    _DAT_0000000d = *(undefined4 *)(iVar18 + 0x34);
    iVar14 = extraout_r2_07;
    _DAT_00000009 = extraout_r2_07;
  }
  uVar2 = (undefined4)((ulonglong)uVar26 >> 0x20);
  *(int *)(iVar14 + 0x18) = (int)uVar26;
  *(undefined4 *)(iVar18 + 0x38) = 3;
  *(undefined4 *)(iVar18 + 0x3c) = 3;
  *(int *)(iVar18 + 0x34) = iVar14;
  iVar14 = *(int *)(iVar18 + 0x18);
  *(int *)((int)register0x00000054 + -0x1a0) = iVar14;
  iVar8 = *(int *)(iVar18 + 0x1c);
  *(int *)((int)register0x00000054 + -0x208) = iVar8;
  uVar5 = 0;
  piVar4 = (int *)0x0;
  uVar23 = 0;
  puVar12 = (undefined *)0x0;
  while ((int)puVar12 < iVar8) {
    *(undefined **)((int)register0x00000054 + -0x20c) = puVar12;
    *(undefined4 *)((int)register0x00000054 + -0x234) = uVar5;
    *(int **)((int)register0x00000054 + -0x1cc) = piVar4;
    iVar14 = *(int *)(iVar14 + (int)puVar12 * 4);
    *(uint *)((int)register0x00000054 + -0x210) = uVar23 + 1;
    *(undefined8 *)((int)register0x00000054 + -0x260) = *(undefined8 *)(iVar14 + 0x34);
    *(undefined8 *)((int)register0x00000054 + -0x270) = *(undefined8 *)(iVar14 + 0x3c);
    *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051ee74;
    FUN_00022cf8(puVar12);
    puVar15 = *(undefined8 **)((int)register0x00000054 + -0x2b0);
    *puVar15 = *(undefined8 *)((int)register0x00000054 + -0x260);
    puVar15[1] = *(undefined8 *)((int)register0x00000054 + -0x270);
    uVar7 = *(uint *)((int)register0x00000054 + -0x234);
    uVar23 = *(uint *)((int)register0x00000054 + -0x210);
    if (uVar7 < uVar23) {
      *(undefined8 **)((int)register0x00000054 + -0x1a4) = puVar15;
      *(undefined4 *)((int)register0x00000054 + -0x2b4) =
           *(undefined4 *)((int)register0x00000054 + -0x1cc);
      *(uint *)((int)register0x00000054 + -0x2b0) = uVar23;
      *(uint *)((int)register0x00000054 + -0x2ac) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0x2a8) = 1;
      *(undefined **)((int)register0x00000054 + -0x2a4) = PTR_DAT_0051ee78;
      FUN_000987f4();
      piVar4 = *(int **)((int)register0x00000054 + -0x2a0);
      uVar23 = *(uint *)((int)register0x00000054 + -0x29c);
      uVar7 = *(uint *)((int)register0x00000054 + -0x298);
      puVar15 = *(undefined8 **)((int)register0x00000054 + -0x1a4);
    }
    else {
      piVar4 = *(int **)((int)register0x00000054 + -0x1cc);
    }
    uVar26 = CONCAT44(uVar7,puVar15);
    iVar14 = uVar23 * 0xc + -0xc;
    piVar4[uVar23 * 3 + -2] = 2;
    piVar4[uVar23 * 3 + -1] = 2;
    if (*(int *)PTR_DAT_0051ee7c != 0) {
      uVar26 = FUN_0009db64();
      *unaff_r8 = (int)uVar26;
      unaff_r8[1] = *(int *)((int)piVar4 + extraout_r3_06);
      uVar23 = extraout_r2_08;
      iVar14 = extraout_r3_06;
    }
    uVar5 = (undefined4)((ulonglong)uVar26 >> 0x20);
    *(int *)((int)piVar4 + iVar14) = (int)uVar26;
    unaff_r8 = *(int **)((int)register0x00000054 + -0x20c);
    iVar18 = *(int *)((int)register0x00000054 + -0x1e4);
    iVar8 = *(int *)((int)register0x00000054 + -0x208);
    uVar2 = 2;
    iVar14 = *(int *)((int)register0x00000054 + -0x1a0);
    puVar12 = (undefined *)((int)unaff_r8 + 1);
  }
  iVar14 = 0;
  puVar6 = (undefined4 *)0x0;
  puVar10 = (undefined4 *)0x0;
  iVar8 = 0;
  unaff_r8 = (int *)0x0;
  piVar20 = (int *)0x0;
  while( true ) {
    *(int **)((int)register0x00000054 + -0x244) = unaff_r8;
    *(int *)((int)register0x00000054 + -0x1d4) = iVar8;
    if ((int)uVar23 < 1) break;
    uVar7 = piVar4[1];
    if (uVar7 == 0) goto LAB_0051f1e0;
    *(uint *)((int)register0x00000054 + -0x208) = uVar23;
    *(int **)((int)register0x00000054 + -0x1a8) = piVar4;
    puVar15 = (undefined8 *)*piVar4;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    uVar26 = *puVar15;
    if (puVar10 < puVar6) {
      *(int **)((int)register0x00000054 + -0x240) = piVar20;
      *(undefined8 *)((int)register0x00000054 + -0x218) = uVar26;
      *(uint *)((int)register0x00000054 + -0x228) = uVar7;
      *(undefined8 **)((int)register0x00000054 + -0x1c4) = puVar15;
      *(int *)((int)register0x00000054 + -0x2b4) = iVar14;
      *(undefined4 **)((int)register0x00000054 + -0x2b0) = puVar6;
      *(undefined4 **)((int)register0x00000054 + -0x2ac) = puVar10;
      *(undefined4 *)((int)register0x00000054 + -0x2a8) = 1;
      *(undefined **)((int)register0x00000054 + -0x2a4) = PTR_DAT_0051ee80;
      FUN_000987f4();
      iVar14 = *(int *)((int)register0x00000054 + -0x2a0);
      puVar6 = *(undefined4 **)((int)register0x00000054 + -0x29c);
      puVar10 = *(undefined4 **)((int)register0x00000054 + -0x298);
      iVar18 = *(int *)((int)register0x00000054 + -0x1e4);
      iVar8 = *(int *)((int)register0x00000054 + -0x1d4);
      piVar4 = *(int **)((int)register0x00000054 + -0x1a8);
      uVar23 = *(uint *)((int)register0x00000054 + -0x208);
      unaff_r8 = *(int **)((int)register0x00000054 + -0x244);
      piVar20 = *(int **)((int)register0x00000054 + -0x240);
      uVar7 = *(uint *)((int)register0x00000054 + -0x228);
      puVar15 = *(undefined8 **)((int)register0x00000054 + -0x1c4);
      uVar26 = *(undefined8 *)((int)register0x00000054 + -0x218);
    }
    *(undefined8 *)(iVar14 + (int)((int)puVar6 + -1) * 8) = uVar26;
    if (uVar7 < 2) goto LAB_0051f1d4;
    unaff_r8 = (int *)((int)unaff_r8 + 1);
    uVar26 = puVar15[1];
    if (piVar20 < unaff_r8) {
      *(int *)((int)register0x00000054 + -0x1d0) = iVar14;
      *(undefined4 **)((int)register0x00000054 + -0x23c) = puVar6;
      *(undefined4 **)((int)register0x00000054 + -0x238) = puVar10;
      *(undefined8 *)((int)register0x00000054 + -0x218) = uVar26;
      *(int *)((int)register0x00000054 + -0x2b4) = iVar8;
      *(int **)((int)register0x00000054 + -0x2b0) = unaff_r8;
      *(int **)((int)register0x00000054 + -0x2ac) = piVar20;
      *(undefined4 *)((int)register0x00000054 + -0x2a8) = 1;
      *(undefined **)((int)register0x00000054 + -0x2a4) = PTR_DAT_0051ee80;
      FUN_000987f4();
      iVar8 = *(int *)((int)register0x00000054 + -0x2a0);
      unaff_r8 = *(int **)((int)register0x00000054 + -0x29c);
      piVar20 = *(int **)((int)register0x00000054 + -0x298);
      iVar14 = *(int *)((int)register0x00000054 + -0x1d0);
      puVar6 = *(undefined4 **)((int)register0x00000054 + -0x23c);
      iVar18 = *(int *)((int)register0x00000054 + -0x1e4);
      puVar10 = *(undefined4 **)((int)register0x00000054 + -0x238);
      piVar4 = *(int **)((int)register0x00000054 + -0x1a8);
      uVar23 = *(uint *)((int)register0x00000054 + -0x208);
      uVar26 = *(undefined8 *)((int)register0x00000054 + -0x218);
    }
    *(undefined8 *)(iVar8 + (int)((int)unaff_r8 + -1) * 8) = uVar26;
    piVar4 = piVar4 + 3;
    uVar23 = uVar23 - 1;
    uVar2 = 2;
  }
  *(undefined4 **)((int)register0x00000054 + -0x23c) = puVar6;
  *(int *)((int)register0x00000054 + -0x1ac) = iVar14;
  *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051ee84;
  FUN_00022cf8(PTR_DAT_0051ee84,uVar2,puVar6,iVar18);
  uVar23 = *(uint *)((int)register0x00000054 + -0x23c);
  if (uVar23 != 0) {
    puVar15 = *(undefined8 **)((int)register0x00000054 + -0x2b0);
    puVar3 = *(undefined8 **)((int)register0x00000054 + -0x1ac);
    *puVar15 = *puVar3;
    if (1 < uVar23) {
      puVar15[1] = puVar3[1];
      if (2 < uVar23) {
        puVar15[2] = puVar3[2];
        puVar15[3] = 0;
        iVar14 = *(int *)((int)register0x00000054 + -0x1e4);
        *(undefined4 *)(iVar14 + 0x44) = 4;
        *(undefined4 *)(iVar14 + 0x48) = 4;
        if (*(int *)PTR_DAT_0051ee7c != 0) {
          FUN_0009db64();
          *unaff_r8 = (int)extraout_r2_09;
          unaff_r8[1] = *(int *)(extraout_r1_04 + 0x40);
          iVar14 = extraout_r1_04;
          puVar15 = extraout_r2_09;
        }
        *(undefined8 **)(iVar14 + 0x40) = puVar15;
        *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051ee84;
        FUN_00022cf8();
        uVar23 = *(uint *)((int)register0x00000054 + -0x244);
        if (uVar23 != 0) {
          puVar15 = *(undefined8 **)((int)register0x00000054 + -0x2b0);
          puVar3 = *(undefined8 **)((int)register0x00000054 + -0x1d4);
          *puVar15 = *puVar3;
          if (1 < uVar23) {
            puVar15[1] = puVar3[1];
            if (2 < uVar23) {
              puVar15[2] = puVar3[2];
              puVar15[3] = 0;
              iVar14 = *(int *)((int)register0x00000054 + -0x1e4);
              *(undefined4 *)(iVar14 + 0x50) = 4;
              *(undefined4 *)(iVar14 + 0x54) = 4;
              if (*(int *)PTR_DAT_0051ee7c != 0) {
                FUN_0009db64();
                *unaff_r8 = (int)extraout_r2_10;
                unaff_r8[1] = *(int *)(extraout_r1_05 + 0x4c);
                iVar14 = extraout_r1_05;
                puVar15 = extraout_r2_10;
              }
              *(undefined8 **)(iVar14 + 0x4c) = puVar15;
              piVar4 = (int *)PTR_DAT_0051ee88;
              iVar14 = **(int **)(*(int *)((int)register0x00000054 + 8) + 4);
              *(int *)((int)register0x00000054 + -0x1c0) = iVar14;
              *(undefined4 *)((int)register0x00000054 + -8) = 0;
              *(undefined4 *)((int)register0x00000054 + -4) = 0;
              uVar5 = *(undefined4 *)(iVar14 + 0xc);
              *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051ee88;
              *(undefined4 *)((int)register0x00000054 + -0x2b0) = uVar5;
              *(undefined **)((int)register0x00000054 + -0x2ac) =
                   PTR_s_dual_carriageREG_FIFO_CTRLREG_PO_008262d0_0x13a2_0051ee8c;
              *(undefined4 *)((int)register0x00000054 + -0x2a8) = 0xd;
              FUN_00093560();
              uVar5 = (*(undefined4 **)((int)register0x00000054 + -0x2a4))[1];
              *(undefined4 *)((int)register0x00000054 + -8) =
                   **(undefined4 **)((int)register0x00000054 + -0x2a4);
              *(undefined4 *)((int)register0x00000054 + -4) = uVar5;
              bVar25 = *(char *)((int)register0x00000054 + -0x2a0) == '\0';
              if (!bVar25) {
                *(char *)((int)register0x00000054 + -0x271) =
                     *(char *)((int)register0x00000054 + -0x2a0);
                uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1c0) + 0xc);
                *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051ee88;
                *(undefined4 *)((int)register0x00000054 + -0x2b0) = uVar5;
                *(undefined **)((int)register0x00000054 + -0x2ac) =
                     PTR_s_dual_carriageREG_FIFO_CTRLREG_PO_008262d0_0x13a2_0051ee8c;
                *(undefined4 *)((int)register0x00000054 + -0x2a8) = 0xd;
                FUN_00025f60();
                bVar25 = *(char *)((int)register0x00000054 + -0x271) == '\0';
              }
              if (bVar25) {
LAB_0051edb0:
                *(undefined4 *)((int)register0x00000054 + 0xc) =
                     *(undefined4 *)((int)register0x00000054 + -0x1e4);
                    /* WARNING: Could not recover jumptable at 0x0051edb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((int)register0x00000054 + -0x2b8))();
                return;
              }
              *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051ee90;
              FUN_00022cf8();
              piVar9 = *(int **)((int)register0x00000054 + -0x2b0);
              piVar13 = *(int **)((int)register0x00000054 + 8);
              iVar14 = *piVar13;
              if (*(int *)PTR_DAT_0051ee7c != 0) {
                FUN_0009db54();
                *unaff_r8 = extraout_r3_07;
                piVar9 = extraout_r1_06;
                piVar13 = extraout_r2_11;
                iVar14 = extraout_r3_07;
              }
              *piVar9 = iVar14;
              iVar14 = piVar13[1];
              if (*(int *)PTR_DAT_0051ee7c != 0) {
                FUN_0009db54();
                *unaff_r8 = iVar14;
                piVar9 = extraout_r1_07;
                piVar13 = extraout_r2_12;
              }
              piVar9[1] = iVar14;
              iVar14 = piVar13[2];
              if (*(int *)PTR_DAT_0051ee7c != 0) {
                FUN_0009db54();
                *unaff_r8 = extraout_r2_13;
                piVar9 = extraout_r1_08;
                iVar14 = extraout_r2_13;
              }
              *(int **)((int)register0x00000054 + -0x1ec) = piVar9;
              piVar9[2] = iVar14;
              piVar9[4] = 0xd;
              piVar9[3] = (int)PTR_s_dual_carriageREG_FIFO_CTRLREG_PO_008262d0_0x13a2_0051ee8c;
              uVar5 = FUN_0009def8(0,(undefined1 *)((int)register0x00000054 + -0x58));
              FUN_0009de88(uVar5,(undefined1 *)((int)register0x00000054 + -0xe4));
              *(undefined1 **)((int)register0x00000054 + -0x4c) =
                   (undefined1 *)((int)register0x00000054 + -0xe4);
              FUN_0006aa3c();
              *(undefined4 *)((int)register0x00000054 + -0x50) =
                   *(undefined4 *)((int)register0x00000054 + -0x2b4);
              *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0051ee94;
              *(undefined **)((int)register0x00000054 + -4) = PTR_DAT_0051ee98;
              *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0051ee94;
              *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0051ee9c;
              *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051eea0;
              *(undefined1 **)((int)register0x00000054 + -0x2b0) =
                   (undefined1 *)((int)register0x00000054 + -0x58);
              *(undefined1 **)((int)register0x00000054 + -0x2ac) =
                   (undefined1 *)((int)register0x00000054 + -8);
              FUN_00090d70();
              puVar6 = *(undefined4 **)((int)register0x00000054 + -0x2a8);
              puVar10 = *(undefined4 **)((int)register0x00000054 + -0xc);
              *puVar6 = *(undefined4 *)((int)register0x00000054 + -0x10);
              if (*(int *)PTR_DAT_0051ee7c != 0) {
                FUN_0009db64();
                *unaff_r8 = (int)puVar10;
                unaff_r8[1] = extraout_r2_14[1];
                puVar6 = extraout_r2_14;
              }
              puVar6[1] = puVar10;
              *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0051ee94;
              *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0051eea4;
              *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0051ee94;
              *(undefined **)((int)register0x00000054 + -4) = PTR_DAT_0051eea8;
              *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051eea0;
              *(undefined1 **)((int)register0x00000054 + -0x2b0) =
                   (undefined1 *)((int)register0x00000054 + -0x58);
              *(undefined1 **)((int)register0x00000054 + -0x2ac) =
                   (undefined1 *)((int)register0x00000054 + -0x10);
              FUN_00090d70();
              puVar6 = *(undefined4 **)((int)register0x00000054 + -0x2a8);
              iVar14 = *(int *)((int)register0x00000054 + -4);
              *puVar6 = *(undefined4 *)((int)register0x00000054 + -8);
              if (*(int *)PTR_DAT_0051ee7c != 0) {
                puVar6 = (undefined4 *)FUN_0009db64();
                *unaff_r8 = extraout_r2_15;
                unaff_r8[1] = puVar6[1];
                iVar14 = extraout_r2_15;
              }
              puVar6[1] = iVar14;
              *(undefined4 *)((int)register0x00000054 + -0x2b4) =
                   *(undefined4 *)((int)register0x00000054 + -0x1ec);
              *(undefined **)((int)register0x00000054 + -0x2b0) =
                   PTR_s_axisCHIPratefifo__3f__6fAXIS_csv_00820821_0x2b5_0051eeac;
              *(undefined4 *)((int)register0x00000054 + -0x2ac) = 4;
              *(undefined1 **)((int)register0x00000054 + -0x2a8) =
                   (undefined1 *)((int)register0x00000054 + -0x58);
              *(undefined **)((int)register0x00000054 + -0x2a4) = PTR_DAT_0051eeb0;
              *(undefined **)((int)register0x00000054 + -0x2a0) = PTR_DAT_0051eeb4;
              *(undefined1 *)((int)register0x00000054 + -0x29c) = 1;
              k3c_internal_pkg_printer___ConfigWrapper__Getchoice();
              uVar26 = CONCAT44(PTR_DAT_0051ee94,*(undefined **)((int)register0x00000054 + -0x298));
              if (*(undefined **)((int)register0x00000054 + -0x298) == PTR_DAT_0051ee94) {
                puVar6 = *(undefined4 **)((int)register0x00000054 + -0x294);
                *(undefined4 **)((int)register0x00000054 + -0x1b4) = puVar6;
                *(undefined4 *)((int)register0x00000054 + -0x1b0) = *puVar6;
                *(undefined4 *)((int)register0x00000054 + -0x208) = puVar6[1];
                uVar5 = FUN_0009def8(0,(undefined1 *)((int)register0x00000054 + -0x100));
                FUN_0009dea8(uVar5,(undefined1 *)((int)register0x00000054 + -0x16c));
                *(undefined1 **)((int)register0x00000054 + -0xf4) =
                     (undefined1 *)((int)register0x00000054 + -0x16c);
                FUN_0006aa3c();
                *(undefined4 *)((int)register0x00000054 + -0xf8) =
                     *(undefined4 *)((int)register0x00000054 + -0x2b4);
                *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051eeb8;
                *(undefined1 **)((int)register0x00000054 + -0x2b0) =
                     (undefined1 *)((int)register0x00000054 + -0x100);
                *(undefined **)((int)register0x00000054 + -0x2ac) = PTR_DAT_0051eebc;
                *(undefined4 *)((int)register0x00000054 + -0x2a8) = 1;
                FUN_00093a08();
                **(undefined4 **)((int)register0x00000054 + -0x2a4) = 0;
                *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051eeb8;
                *(undefined1 **)((int)register0x00000054 + -0x2b0) =
                     (undefined1 *)((int)register0x00000054 + -0x100);
                *(undefined **)((int)register0x00000054 + -0x2ac) = PTR_DAT_0051eec0;
                *(undefined4 *)((int)register0x00000054 + -0x2a8) = 1;
                FUN_00093a08();
                **(undefined4 **)((int)register0x00000054 + -0x2a4) = 1;
                *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051eeb8;
                *(undefined1 **)((int)register0x00000054 + -0x2b0) =
                     (undefined1 *)((int)register0x00000054 + -0x100);
                *(undefined4 *)((int)register0x00000054 + -0x2ac) =
                     *(undefined4 *)((int)register0x00000054 + -0x1b0);
                *(undefined4 *)((int)register0x00000054 + -0x2a8) =
                     *(undefined4 *)((int)register0x00000054 + -0x208);
                FUN_00025f60();
                *(undefined4 *)((int)register0x00000054 + -0x2b4) =
                     **(undefined4 **)((int)register0x00000054 + -0x2a4);
                FUN_00020ce0();
                iVar14 = *(int *)((int)register0x00000054 + -0x2b0);
                iVar18 = *(int *)((int)register0x00000054 + -0x1e4);
                *(undefined **)(iVar18 + 4) = PTR_DAT_0051eec4;
                if (*(int *)PTR_DAT_0051ee7c != 0) {
                  FUN_0009db64();
                  *unaff_r8 = extraout_r2_16;
                  unaff_r8[1] = *(int *)(iVar18 + 8);
                  iVar14 = extraout_r2_16;
                }
                *(int *)(iVar18 + 8) = iVar14;
                pcVar11 = (code *)**(undefined4 **)PTR_DAT_0051eec8;
                *(undefined4 *)((int)register0x00000054 + -0x2b4) =
                     *(undefined4 *)((int)register0x00000054 + -0x1ec);
                *(undefined1 *)((int)register0x00000054 + -0x2b0) = 1;
                *(undefined4 *)((int)register0x00000054 + -0x2ac) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x2a8) = 0;
                *(undefined1 *)((int)register0x00000054 + -0x2a4) = 0;
                (*pcVar11)();
                *(undefined4 *)((int)register0x00000054 + -0x1b8) =
                     *(undefined4 *)((int)register0x00000054 + -0x2a0);
                uVar5 = (*(undefined4 **)((int)register0x00000054 + -0x1b4))[1];
                *(undefined4 *)((int)register0x00000054 + -0x2b4) =
                     **(undefined4 **)((int)register0x00000054 + -0x1b4);
                *(undefined4 *)((int)register0x00000054 + -0x2b0) = uVar5;
                *(undefined4 *)((int)register0x00000054 + -0x2ac) = 10;
                *(undefined4 *)((int)register0x00000054 + -0x2a8) = 0x20;
                FUN_000b5d34();
                *(undefined4 *)((int)register0x00000054 + -0x174) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x170) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x204) =
                     *(undefined4 *)((int)register0x00000054 + -0x2a4);
                *(undefined4 *)((int)register0x00000054 + -0x200) =
                     *(undefined4 *)((int)register0x00000054 + -0x2a0);
                *(undefined **)((int)register0x00000054 + -0x174) = PTR_DAT_0051eecc;
                *(undefined1 **)((int)register0x00000054 + -0x170) =
                     (undefined1 *)((int)register0x00000054 + -0x204);
                iVar14 = *(int *)((int)register0x00000054 + -0x1b8);
                iVar18 = *(int *)(iVar14 + 4);
                *(int *)((int)register0x00000054 + -0x188) = iVar18;
                iVar8 = *(int *)(iVar14 + 8);
                *(int *)((int)register0x00000054 + -0x208) = iVar8;
                iVar16 = 0;
                while (puVar12 = PTR_DAT_0051eed4, iVar16 < iVar8) {
                  *(int *)((int)register0x00000054 + -0x20c) = iVar16;
                  uVar5 = *(undefined4 *)(iVar18 + iVar16 * 4);
                  *(undefined1 **)((int)register0x00000054 + -0x180) =
                       (undefined1 *)((int)register0x00000054 + -0x174);
                  *(undefined4 *)((int)register0x00000054 + -0x17c) = 1;
                  *(undefined4 *)((int)register0x00000054 + -0x178) = 1;
                  *(undefined4 *)((int)register0x00000054 + -0x2b4) = uVar5;
                  *(undefined **)((int)register0x00000054 + -0x2b0) = PTR_DAT_0051eed0;
                  *(undefined4 *)((int)register0x00000054 + -0x2ac) = 0x17;
                  *(undefined **)((int)register0x00000054 + -0x2a8) = PTR_DAT_0051eed4;
                  *(undefined1 **)((int)register0x00000054 + -0x2a4) =
                       (undefined1 *)((int)register0x00000054 + -0x180);
                  k3c_internal_pkg_mcu___MCU_stepper__Setup_itersolve();
                  iVar14 = *(int *)((int)register0x00000054 + -0x1b8);
                  iVar18 = *(int *)((int)register0x00000054 + -0x188);
                  iVar8 = *(int *)((int)register0x00000054 + -0x208);
                  piVar4 = (int *)puVar12;
                  iVar16 = *(int *)((int)register0x00000054 + -0x20c) + 1;
                }
                uVar5 = *(undefined4 *)(iVar14 + 8);
                *(undefined4 *)((int)register0x00000054 + -0x24c) = uVar5;
                *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051eed8;
                *(undefined4 *)((int)register0x00000054 + -0x2b0) = uVar5;
                *(undefined4 *)((int)register0x00000054 + -0x2ac) = uVar5;
                FUN_000986b8();
                *(undefined4 *)((int)register0x00000054 + -0x1a8) =
                     *(undefined4 *)((int)register0x00000054 + -0x2a8);
                uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1b8) + 4);
                uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1b8) + 8);
                *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051eed8;
                *(undefined4 *)((int)register0x00000054 + -0x2b0) =
                     *(undefined4 *)((int)register0x00000054 + -0x2a8);
                puVar10 = *(undefined4 **)((int)register0x00000054 + -0x24c);
                *(undefined4 **)((int)register0x00000054 + -0x2ac) = puVar10;
                *(undefined4 *)((int)register0x00000054 + -0x2a8) = uVar5;
                *(undefined4 *)((int)register0x00000054 + -0x2a4) = uVar2;
                FUN_00093f5c();
                iVar14 = 0;
                while (iVar14 < *(int *)((int)register0x00000054 + -0x24c)) {
                  *(int *)((int)register0x00000054 + -0x208) = iVar14;
                  *(undefined4 *)((int)register0x00000054 + -0x1d8) =
                       *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1a8) + iVar14 * 4);
                  *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051f2c0;
                  FUN_00022cf8();
                  uVar26 = CONCAT44(PTR_k3c_internal_pkg_mcu___MCU_stepper__Generate_steps_fm_0051f2c4
                                    ,*(undefined4 **)((int)register0x00000054 + -0x2b0));
                  **(undefined4 **)((int)register0x00000054 + -0x2b0) =
                       PTR_k3c_internal_pkg_mcu___MCU_stepper__Generate_steps_fm_0051f2c4;
                  if (*(int *)PTR_DAT_0051f2c8 == 0) {
                    iVar14 = *(int *)((int)register0x00000054 + -0x1d8);
                  }
                  else {
                    uVar26 = FUN_0009db54();
                    iVar14 = *(int *)((int)register0x00000054 + -0x1d8);
                    *unaff_r8 = iVar14;
                  }
                  *(int *)((int)uVar26 + 4) = iVar14;
                  iVar18 = *(int *)((int)register0x00000054 + 4);
                  uVar7 = *(uint *)(iVar18 + 0x134);
                  uVar23 = *(int *)(iVar18 + 0x130) + 1;
                  iVar14 = *(int *)(iVar18 + 300);
                  if (uVar7 < uVar23) {
                    *(int *)((int)register0x00000054 + -400) = (int)uVar26;
                    *(int *)((int)register0x00000054 + -0x2b4) = iVar14;
                    *(uint *)((int)register0x00000054 + -0x2b0) = uVar23;
                    *(uint *)((int)register0x00000054 + -0x2ac) = uVar7;
                    *(undefined4 *)((int)register0x00000054 + -0x2a8) = 1;
                    *(undefined **)((int)register0x00000054 + -0x2a4) = PTR_DAT_0051f2cc;
                    FUN_000987f4();
                    iVar14 = *(int *)((int)register0x00000054 + -0x2a0);
                    uVar23 = *(uint *)((int)register0x00000054 + -0x29c);
                    iVar18 = *(int *)((int)register0x00000054 + 4);
                    *(undefined4 *)(iVar18 + 0x134) =
                         *(undefined4 *)((int)register0x00000054 + -0x298);
                    if (*(int *)PTR_DAT_0051f2c8 != 0) {
                      FUN_0009db64();
                      *unaff_r8 = extraout_r1_09;
                      unaff_r8[1] = *(int *)(extraout_r3_08 + 300);
                      iVar14 = extraout_r1_09;
                      uVar23 = extraout_r2_17;
                      iVar18 = extraout_r3_08;
                    }
                    *(int *)(iVar18 + 300) = iVar14;
                    uVar26 = CONCAT44(PTR_k3c_internal_pkg_mcu___MCU_stepper__Generate_steps_fm_0051f2c4
                                      ,*(undefined4 *)((int)register0x00000054 + -400));
                  }
                  iVar8 = (int)uVar26;
                  *(uint *)(iVar18 + 0x130) = uVar23;
                  puVar10 = (undefined4 *)(uVar23 - 1);
                  if (*(int *)PTR_DAT_0051f2c8 != 0) {
                    iVar8 = FUN_0009db64(iVar8,(int)((ulonglong)uVar26 >> 0x20));
                    *unaff_r8 = iVar8;
                    unaff_r8[1] = *(int *)(iVar14 + (int)puVar10 * 4);
                  }
                  *(int *)(iVar14 + (int)puVar10 * 4) = iVar8;
                  iVar14 = *(int *)((int)register0x00000054 + -0x208) + 1;
                }
                uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1e4) + 8);
                *(undefined4 *)((int)register0x00000054 + -0x2b4) =
                     *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1e4) + 4);
                *(undefined4 *)((int)register0x00000054 + -0x2b0) = uVar5;
                k3c_internal_pkg_util_cast_ToIntE();
                *(undefined4 *)((int)register0x00000054 + -0x250) =
                     *(undefined4 *)((int)register0x00000054 + -0x2ac);
                *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051f2d0;
                FUN_00022cf8();
                iVar14 = *(int *)((int)register0x00000054 + -0x1e4);
                uVar23 = *(uint *)((int)register0x00000054 + -0x250);
                if (uVar23 < *(uint *)(iVar14 + 0x1c)) {
                  puVar10 = *(undefined4 **)((int)register0x00000054 + -0x2b0);
                  uVar26 = CONCAT44(*(undefined4 *)(*(int *)(iVar14 + 0x18) + uVar23 * 4),iVar14);
                  if (*(int *)PTR_DAT_0051f2c8 == 0) {
                    iVar14 = *(int *)((int)register0x00000054 + -0x1b8);
                  }
                  else {
                    uVar26 = FUN_0009db84();
                    *unaff_r8 = (int)((ulonglong)uVar26 >> 0x20);
                    iVar14 = *(int *)((int)register0x00000054 + -0x1b8);
                    unaff_r8[1] = iVar14;
                    unaff_r8[2] = (int)puVar10;
                    unaff_r8[3] = *(int *)((int)uVar26 + 0xc);
                  }
                  puVar6 = (undefined4 *)uVar26;
                  *puVar10 = (int)((ulonglong)uVar26 >> 0x20);
                  puVar10[1] = iVar14;
                  puVar6[4] = 2;
                  puVar6[5] = 2;
                  puVar6[3] = puVar10;
                  *(undefined4 *)((int)register0x00000054 + -0x2b4) = *puVar6;
                  *(undefined **)((int)register0x00000054 + -0x2b0) =
                       PTR_s_gcodeok__sM8844_helpReady_________00820821_0x5d2_0051f2d4;
                  *(undefined4 *)((int)register0x00000054 + -0x2ac) = 5;
                  *(undefined **)((int)register0x00000054 + -0x2a8) = PTR_DAT_0051f2d8;
                  *(undefined **)((int)register0x00000054 + -0x2a4) = PTR_DAT_0051f2dc;
                  k3c_internal_pkg_printer___Printer__Lookup_object();
                  *(undefined4 *)((int)register0x00000054 + -0x21c) =
                       *(undefined4 *)((int)register0x00000054 + -0x2a0);
                  *(undefined4 *)((int)register0x00000054 + -0x1bc) =
                       *(undefined4 *)((int)register0x00000054 + -0x29c);
                  *(undefined **)((int)register0x00000054 + -0x2b4) = PTR_DAT_0051f2e0;
                  FUN_00022cf8();
                  puVar6 = *(undefined4 **)((int)register0x00000054 + -0x2b0);
                  *puVar6 = 
                  PTR_k3c_internal_pkg_motion___CartKinematics__Cmd_SET_DUAL_CARRIAGE_fm_0051f2e4;
                  if (*(int *)PTR_DAT_0051f2c8 == 0) {
                    iVar14 = *(int *)((int)register0x00000054 + -0x1e4);
                  }
                  else {
                    puVar6 = (undefined4 *)FUN_0009db54();
                    iVar14 = *(int *)((int)register0x00000054 + -0x1e4);
                    *unaff_r8 = iVar14;
                  }
                  puVar6[1] = iVar14;
                  if (*(undefined **)((int)register0x00000054 + -0x21c) == PTR_DAT_0051f2e8) {
                    *(undefined4 *)((int)register0x00000054 + -0x2b4) =
                         *(undefined4 *)((int)register0x00000054 + -0x1bc);
                    *(undefined **)((int)register0x00000054 + -0x2b0) = PTR_DAT_0051f2ec;
                    *(undefined4 *)((int)register0x00000054 + -0x2ac) = 0x11;
                    *(undefined4 **)((int)register0x00000054 + -0x2a8) = puVar6;
                    *(undefined1 *)((int)register0x00000054 + -0x2a4) = 0;
                    *(undefined **)((int)register0x00000054 + -0x2a0) = PTR_DAT_0051f2f0;
                    *(undefined4 *)((int)register0x00000054 + -0x29c) = 0x1c;
                    k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
                    goto LAB_0051edb0;
                  }
                  *(undefined **)((int)register0x00000054 + -0x2b4) =
                       *(undefined **)((int)register0x00000054 + -0x21c);
                  *(undefined **)((int)register0x00000054 + -0x2b0) = PTR_DAT_0051f2e8;
                  *(undefined **)((int)register0x00000054 + -0x2ac) = PTR_DAT_0051f2f4;
                  FUN_000209b4();
                  uVar23 = extraout_r2_18;
                }
                uVar26 = FUN_0009dbd4(uVar23);
              }
              *(undefined8 *)((int)register0x00000054 + -0x2b4) = uVar26;
              *(undefined **)((int)register0x00000054 + -0x2ac) = PTR_DAT_0051f2f4;
              FUN_000209b4();
            }
            FUN_0009dbd4(2,2);
          }
          FUN_0009dbd4(1,1);
        }
        FUN_0009dbd4(0,0);
      }
      FUN_0009dbd4(2,2);
    }
    FUN_0009dbd4(1,1);
  }
  FUN_0009dbd4(0,0);
LAB_0051f1d4:
  FUN_0009dbd4(1,1);
LAB_0051f1e0:
  FUN_0009dbd4(0,0);
LAB_0051f1ec:
  *(undefined4 **)((int)register0x00000054 + -0x2b4) = puVar10;
  *(int **)((int)register0x00000054 + -0x2b0) = piVar4;
  *(undefined **)((int)register0x00000054 + -0x2ac) = PTR_DAT_0051f2f4;
  FUN_000209b4();
  iVar14 = extraout_r2_19;
  goto LAB_0051f200;
}



/* k3c/internal/pkg/motion.(*CartKinematics).Get_steppers @ 0051f308 (size 1168) */

void k3c_internal_pkg_motion___CartKinematics__Get_steppers(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint extraout_r2;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int extraout_r3;
  uint extraout_r3_00;
  undefined4 uVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  int unaff_r10;
  undefined1 *puVar14;
  undefined4 unaff_lr;
  undefined1 uVar15;
  undefined8 uVar16;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar14 = (undefined1 *)((int)register0x00000054 + -100);
      *(undefined4 *)((int)register0x00000054 + -100) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      if (*(undefined **)(iVar2 + 4) == (undefined *)0x0) {
        iVar5 = *(int *)(iVar2 + 0x1c);
        uVar10 = *(undefined4 *)(iVar2 + 0x18);
        if (iVar5 == 0) {
          uVar3 = 0;
          puVar11 = (undefined1 *)((int)register0x00000054 + -0x1c);
          uVar6 = 0;
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -4) = uVar10;
          *(int *)((int)register0x00000054 + -0x20) = iVar5;
          *(undefined1 **)((int)register0x00000054 + -0x60) =
               (undefined1 *)((int)register0x00000054 + -0x1c);
          *(int *)((int)register0x00000054 + -0x5c) = iVar5;
          *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
          *(int *)((int)register0x00000054 + -0x54) = iVar5;
          *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_0051f7a0;
          FUN_000987f4();
          puVar11 = *(undefined1 **)((int)register0x00000054 + -0x4c);
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x48);
          uVar10 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar6 = *(undefined4 *)((int)register0x00000054 + -0x20);
        }
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar3;
        *(undefined1 **)((int)register0x00000054 + -0xc) = puVar11;
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0051f7a0;
        *(undefined1 **)((int)register0x00000054 + -0x5c) = puVar11;
        *(undefined4 *)((int)register0x00000054 + -0x58) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar10;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar6;
        FUN_00093f5c();
        iVar2 = *(int *)((int)register0x00000054 + -0x30);
        iVar5 = *(int *)((int)register0x00000054 + -0xc);
        goto LAB_0051f604;
      }
      if (*(undefined **)(iVar2 + 4) == PTR_DAT_0051f79c) {
        uVar7 = **(uint **)(iVar2 + 8);
      }
      else {
        uVar7 = 0;
      }
      uVar10 = *(undefined4 *)(iVar2 + 0x18);
      uVar15 = uVar7 == *(uint *)(iVar2 + 0x20);
      if (uVar7 <= *(uint *)(iVar2 + 0x20)) {
        *(uint *)((int)register0x00000054 + -0x28) = uVar7;
        if (uVar7 == 0) {
          uVar3 = 0;
          uVar4 = 0;
          puVar11 = (undefined1 *)((int)register0x00000054 + -0x1c);
          uVar6 = 0;
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -4) = uVar10;
          *(undefined1 **)((int)register0x00000054 + -0x60) =
               (undefined1 *)((int)register0x00000054 + -0x1c);
          *(uint *)((int)register0x00000054 + -0x5c) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
          *(uint *)((int)register0x00000054 + -0x54) = uVar7;
          *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_0051f7a0;
          FUN_000987f4();
          puVar11 = *(undefined1 **)((int)register0x00000054 + -0x4c);
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x48);
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0x44);
          uVar6 = *(undefined4 *)((int)register0x00000054 + -0x28);
          uVar10 = *(undefined4 *)((int)register0x00000054 + -4);
        }
        *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar3;
        *(undefined1 **)((int)register0x00000054 + -0xc) = puVar11;
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0051f7a0;
        *(undefined1 **)((int)register0x00000054 + -0x5c) = puVar11;
        *(undefined4 *)((int)register0x00000054 + -0x58) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar10;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar6;
        FUN_00093f5c();
        iVar2 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        iVar5 = *(int *)((int)register0x00000054 + -0x30);
        uVar8 = iVar2 + iVar5;
        uVar10 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        uVar7 = *(uint *)((int)register0x00000054 + -0x2c);
        if (uVar7 < uVar8) {
          *(int *)((int)register0x00000054 + -0x20) = iVar2;
          *(undefined4 *)((int)register0x00000054 + -4) = uVar10;
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + -0xc);
          *(uint *)((int)register0x00000054 + -0x5c) = uVar8;
          *(uint *)((int)register0x00000054 + -0x58) = uVar7;
          *(int *)((int)register0x00000054 + -0x54) = iVar2;
          *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_0051f7a0;
          FUN_000987f4();
          iVar12 = *(int *)((int)register0x00000054 + -0x4c);
          uVar8 = *(uint *)((int)register0x00000054 + -0x48);
          uVar7 = *(uint *)((int)register0x00000054 + -0x44);
          iVar2 = *(int *)((int)register0x00000054 + -0x20);
          uVar10 = *(undefined4 *)((int)register0x00000054 + -4);
          iVar5 = *(int *)((int)register0x00000054 + -0x30);
        }
        else {
          iVar12 = *(int *)((int)register0x00000054 + -0xc);
        }
        *(uint *)((int)register0x00000054 + -0x2c) = uVar7;
        *(uint *)((int)register0x00000054 + -0x30) = uVar8;
        *(int *)((int)register0x00000054 + -0xc) = iVar12;
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0051f7a0;
        *(int *)((int)register0x00000054 + -0x5c) =
             iVar12 + ((int)-(uVar7 - iVar5) >> 0x1f & iVar5 << 2);
        *(uint *)((int)register0x00000054 + -0x58) = uVar8 - iVar5;
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar10;
        *(int *)((int)register0x00000054 + -0x50) = iVar2;
        FUN_00093f5c();
        iVar2 = *(int *)((int)register0x00000054 + 4);
        uVar7 = *(uint *)(iVar2 + 0x1c);
        iVar5 = *(int *)((int)register0x00000054 + -0x28);
        uVar8 = iVar5 + 1;
        uVar15 = uVar7 == uVar8;
        if (uVar8 <= uVar7) {
          iVar12 = *(int *)((int)register0x00000054 + -0x30);
          uVar13 = ((uVar7 - iVar5) + iVar12) - 1;
          iVar2 = *(int *)(iVar2 + 0x18) +
                  (1 - (*(int *)(iVar2 + 0x20) - iVar5) >> 0x1f & uVar8 * 4);
          iVar5 = (uVar7 - iVar5) + -1;
          uVar7 = *(uint *)((int)register0x00000054 + -0x2c);
          if (uVar7 < uVar13) {
            *(int *)((int)register0x00000054 + -0x20) = iVar5;
            *(int *)((int)register0x00000054 + -4) = iVar2;
            *(undefined4 *)((int)register0x00000054 + -0x60) =
                 *(undefined4 *)((int)register0x00000054 + -0xc);
            *(uint *)((int)register0x00000054 + -0x5c) = uVar13;
            *(uint *)((int)register0x00000054 + -0x58) = uVar7;
            *(int *)((int)register0x00000054 + -0x54) = iVar5;
            *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_0051f7a0;
            FUN_000987f4();
            iVar9 = *(int *)((int)register0x00000054 + -0x4c);
            uVar13 = *(uint *)((int)register0x00000054 + -0x48);
            uVar7 = *(uint *)((int)register0x00000054 + -0x44);
            iVar5 = *(int *)((int)register0x00000054 + -0x20);
            iVar12 = *(int *)((int)register0x00000054 + -0x30);
            iVar2 = *(int *)((int)register0x00000054 + -4);
          }
          else {
            iVar9 = *(int *)((int)register0x00000054 + -0xc);
          }
          *(uint *)((int)register0x00000054 + -0x30) = uVar13;
          *(int *)((int)register0x00000054 + -0xc) = iVar9;
          *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0051f7a0;
          *(int *)((int)register0x00000054 + -0x5c) =
               iVar9 + ((int)-(uVar7 - iVar12) >> 0x1f & iVar12 << 2);
          *(uint *)((int)register0x00000054 + -0x58) = uVar13 - iVar12;
          *(int *)((int)register0x00000054 + -0x54) = iVar2;
          *(int *)((int)register0x00000054 + -0x50) = iVar5;
          FUN_00093f5c();
          iVar2 = *(int *)((int)register0x00000054 + -0x30);
          iVar5 = *(int *)((int)register0x00000054 + -0xc);
LAB_0051f604:
          *(int *)((int)register0x00000054 + -0x30) = iVar2;
          *(int *)((int)register0x00000054 + -0xc) = iVar5;
          uVar8 = 0;
          uVar7 = 0;
          iVar12 = 0;
          iVar9 = 0;
          while (iVar9 < iVar2) {
            *(uint *)((int)register0x00000054 + -0x34) = uVar8;
            *(uint *)((int)register0x00000054 + -0x38) = uVar7;
            *(int *)((int)register0x00000054 + -0x18) = iVar12;
            *(int *)((int)register0x00000054 + -0x20) = iVar9;
            iVar2 = *(int *)(iVar5 + iVar9 * 4);
            *(int *)((int)register0x00000054 + -0x14) = iVar2;
            uVar10 = *(undefined4 *)(iVar2 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar10;
            *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0051f7a4;
            *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar10;
            *(undefined4 *)((int)register0x00000054 + -0x58) = uVar10;
            FUN_000986b8();
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x14) + 4);
            uVar10 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x14) + 8);
            *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0051f7a4;
            *(undefined4 *)((int)register0x00000054 + -0x5c) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            *(undefined4 *)((int)register0x00000054 + -0x58) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            *(undefined4 *)((int)register0x00000054 + -0x54) = uVar6;
            *(undefined4 *)((int)register0x00000054 + -0x50) = uVar10;
            FUN_00093f5c();
            uVar16 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x3c),
                              *(undefined4 *)((int)register0x00000054 + -8));
            uVar7 = *(uint *)((int)register0x00000054 + -0x38);
            iVar12 = *(int *)((int)register0x00000054 + -0x18);
            uVar8 = *(uint *)((int)register0x00000054 + -0x34);
            for (iVar2 = 0; iVar2 < (int)((ulonglong)uVar16 >> 0x20); iVar2 = iVar2 + 1) {
              uVar7 = uVar7 + 1;
              uVar10 = *(undefined4 *)((int)uVar16 + iVar2 * 4);
              if (uVar8 < uVar7) {
                *(int *)((int)register0x00000054 + -0x24) = iVar2;
                *(undefined4 *)((int)register0x00000054 + -0x10) = uVar10;
                *(int *)((int)register0x00000054 + -0x60) = iVar12;
                *(uint *)((int)register0x00000054 + -0x5c) = uVar7;
                *(uint *)((int)register0x00000054 + -0x58) = uVar8;
                *(undefined4 *)((int)register0x00000054 + -0x54) = 1;
                *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_0051f7a8;
                FUN_000987f4();
                iVar12 = *(int *)((int)register0x00000054 + -0x4c);
                uVar7 = *(uint *)((int)register0x00000054 + -0x48);
                uVar8 = *(uint *)((int)register0x00000054 + -0x44);
                uVar16 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x3c),
                                  *(undefined4 *)((int)register0x00000054 + -8));
                iVar2 = *(int *)((int)register0x00000054 + -0x24);
                uVar10 = *(undefined4 *)((int)register0x00000054 + -0x10);
              }
              puVar1 = PTR_DAT_0051f7a4;
              *(undefined **)(iVar12 + (uVar7 - 1) * 8) = PTR_DAT_0051f7a4;
              iVar5 = iVar12 + (uVar7 - 1) * 8;
              if (*(int *)PTR_DAT_0051f7ac != 0) {
                uVar16 = FUN_0009db64();
                *(undefined4 *)puVar1 = uVar10;
                *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(iVar5 + 4);
                uVar7 = extraout_r2;
                iVar12 = extraout_r3;
              }
              *(undefined4 *)(iVar5 + 4) = uVar10;
            }
            iVar2 = *(int *)((int)register0x00000054 + -0x30);
            iVar5 = *(int *)((int)register0x00000054 + -0xc);
            iVar9 = *(int *)((int)register0x00000054 + -0x20) + 1;
          }
          *(int *)((int)register0x00000054 + 8) = iVar12;
          *(uint *)((int)register0x00000054 + 0xc) = uVar7;
          *(uint *)((int)register0x00000054 + 0x10) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x0051f6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -100))();
          return;
        }
        iVar2 = FUN_0009dc34(uVar8);
        uVar7 = extraout_r3_00;
      }
      param_1 = FUN_0009dc14(iVar2,uVar7);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -100);
      if ((bool)uVar15) {
        register0x00000054 = (BADSPACEBASE *)puVar14;
      }
    }
    unaff_lr = 0x51f794;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CartKinematics).Set_rails_z_offset @ 0051f7b0 (size 76) */

void k3c_internal_pkg_motion___CartKinematics__Set_rails_z_offset(undefined4 param_1)

{
  uint uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      uVar1 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x1c);
      bVar3 = uVar1 == 2;
      if (2 < uVar1) {
        *(undefined8 *)(*(int *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x18) + 8) + 0x2c)
             = *(undefined8 *)((int)register0x00000054 + 8);
                    /* WARNING: Could not recover jumptable at 0x0051f7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0xc))();
        return;
      }
      param_1 = FUN_0009dbd4(2);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x51f7f8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CartKinematics).Set_limit_z @ 0051f7fc (size 96) */

void k3c_internal_pkg_motion___CartKinematics__Set_limit_z(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      uVar1 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x38);
      uVar4 = uVar1 == 2;
      if (2 < uVar1) {
        iVar2 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x34);
        uVar1 = *(uint *)(iVar2 + 0x1c);
        uVar4 = uVar1 == 1;
        if (1 < uVar1) {
          *(undefined8 *)(*(int *)(iVar2 + 0x18) + 8) = *(undefined8 *)((int)register0x00000054 + 8)
          ;
                    /* WARNING: Could not recover jumptable at 0x0051f838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
        FUN_0009dbd4(1);
      }
      param_1 = FUN_0009dbd4(2);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x51f858;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CartKinematics).Calc_position @ 0051f85c (size 304) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion___CartKinematics__Calc_position(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x51f988;
    FUN_0009bf64();
  }
  iVar2 = *(int *)(in_stack_00000004 + 0x18);
  iVar1 = *(int *)(in_stack_00000004 + 0x1c);
  uVar4 = 0;
  iVar5 = 0;
  uVar6 = 0;
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    uVar6 = uVar6 + 1;
    (*(code *)**(undefined4 **)(*(int *)(iVar2 + iVar3 * 4) + 0x20))();
    FUN_00025f60();
    uVar7 = *uStack_34;
    if (uVar4 < uVar6) {
      uStack_34 = _UNK_0051f994;
      FUN_000987f4();
      uVar4 = uStack_28;
      uVar6 = uStack_2c;
      iVar5 = uStack_30;
    }
    *(undefined8 *)(iVar5 + (uVar6 - 1) * 8) = uVar7;
  }
  in_stack_0000000c = iVar5;
  in_stack_00000010 = uVar6;
  in_stack_00000014 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0051f97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*CartKinematics).Set_position @ 0051f998 (size 364) */

void k3c_internal_pkg_motion___CartKinematics__Set_position(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int unaff_r10;
  int iVar12;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  undefined8 *puVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  
  while (register0x00000054 <= *(undefined1 **)(unaff_r10 + 8)) {
LAB_0051faf8:
    unaff_lr = 0x51fb00;
    param_1 = FUN_0009bf64(param_1);
  }
  puVar13 = (undefined1 *)((int)register0x00000054 + -0x30);
  *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
  iVar3 = *(int *)((int)register0x00000054 + 4);
  iVar5 = *(int *)(iVar3 + 0x18);
  *(int *)((int)register0x00000054 + -4) = iVar5;
  iVar6 = *(int *)(iVar3 + 0x1c);
  *(int *)((int)register0x00000054 + -0x10) = iVar6;
  uVar7 = *(undefined4 *)((int)register0x00000054 + 0x10);
  uVar8 = *(undefined4 *)((int)register0x00000054 + 0xc);
  uVar9 = *(undefined4 *)((int)register0x00000054 + 8);
  uVar1 = 0;
  do {
    if (iVar6 <= (int)uVar1) {
                    /* WARNING: Could not recover jumptable at 0x0051fa60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((int)register0x00000054 + -0x30))();
      return;
    }
    *(uint *)((int)register0x00000054 + -0x1c) = uVar1;
    iVar10 = *(int *)(iVar5 + uVar1 * 4);
    *(int *)((int)register0x00000054 + -0xc) = iVar10;
    iVar11 = *(int *)(iVar10 + 4);
    *(int *)((int)register0x00000054 + -8) = iVar11;
    iVar12 = *(int *)(iVar10 + 8);
    *(int *)((int)register0x00000054 + -0x14) = iVar12;
    iVar2 = 0;
    while (iVar2 < iVar12) {
      *(int *)((int)register0x00000054 + -0x18) = iVar2;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = *(undefined4 *)(iVar11 + iVar2 * 4);
      *(undefined4 *)((int)register0x00000054 + -0x28) = uVar9;
      *(undefined4 *)((int)register0x00000054 + -0x24) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x20) = uVar7;
      k3c_internal_pkg_mcu___MCU_stepper__Set_position();
      uVar1 = *(uint *)((int)register0x00000054 + -0x1c);
      iVar3 = *(int *)((int)register0x00000054 + 4);
      iVar5 = *(int *)((int)register0x00000054 + -4);
      iVar6 = *(int *)((int)register0x00000054 + -0x10);
      uVar7 = *(undefined4 *)((int)register0x00000054 + 0x10);
      uVar8 = *(undefined4 *)((int)register0x00000054 + 0xc);
      uVar9 = *(undefined4 *)((int)register0x00000054 + 8);
      iVar10 = *(int *)((int)register0x00000054 + -0xc);
      iVar11 = *(int *)((int)register0x00000054 + -8);
      iVar12 = *(int *)((int)register0x00000054 + -0x14);
      iVar2 = *(int *)((int)register0x00000054 + -0x18) + 1;
    }
    for (iVar2 = 0; iVar2 < *(int *)((int)register0x00000054 + 0x18); iVar2 = iVar2 + 1) {
      if (uVar1 == *(uint *)(*(int *)((int)register0x00000054 + 0x14) + iVar2 * 4)) {
        uVar16 = *(undefined8 *)(iVar10 + 0x3c);
        uVar15 = uVar1 == *(uint *)(iVar3 + 0x38);
        if (uVar1 < *(uint *)(iVar3 + 0x38)) {
          uVar4 = *(uint *)(*(int *)(iVar3 + 0x34) + uVar1 * 0xc + 4);
          puVar14 = *(undefined8 **)(*(int *)(iVar3 + 0x34) + uVar1 * 0xc);
          uVar15 = uVar4 == 0;
          if (!(bool)uVar15) {
            *puVar14 = *(undefined8 *)(iVar10 + 0x34);
            uVar15 = uVar4 == 1;
            if (1 < uVar4) {
              puVar14[1] = uVar16;
              iVar3 = *(int *)((int)register0x00000054 + 4);
              break;
            }
            FUN_0009dbd4(1,1);
          }
          FUN_0009dbd4(0,0);
        }
        param_1 = FUN_0009dbd4();
        register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
        if ((bool)uVar15) {
          register0x00000054 = (BADSPACEBASE *)puVar13;
        }
        goto LAB_0051faf8;
      }
    }
    uVar1 = uVar1 + 1;
  } while( true );
}



/* k3c/internal/pkg/motion.(*CartKinematics).Note_z_not_homed @ 0051fb04 (size 148) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion___CartKinematics__Note_z_not_homed(undefined4 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  undefined8 uVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0xc) = _UNK_0051fb9c;
      FUN_00022cf8();
      puVar1 = *(undefined8 **)((int)register0x00000054 + -8);
      *puVar1 = 0x3ff0000000000000;
      puVar1[1] = 0xbff0000000000000;
      uVar3 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x38);
      bVar5 = uVar3 == 2;
      if (2 < uVar3) {
        iVar2 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x34);
        uVar6 = CONCAT44(iVar2,puVar1);
        *(undefined4 *)(iVar2 + 0x1c) = 2;
        *(undefined4 *)(iVar2 + 0x20) = 2;
        if (*_UNK_0051fba0 != 0) {
          uVar6 = FUN_0009db64();
          *unaff_r8 = (int)uVar6;
          unaff_r8[1] = *(undefined4 *)((int)((ulonglong)uVar6 >> 0x20) + 0x18);
        }
        *(int *)((int)((ulonglong)uVar6 >> 0x20) + 0x18) = (int)uVar6;
                    /* WARNING: Could not recover jumptable at 0x0051fb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(2,uVar3);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x51fb94;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CartKinematics).Home_axis @ 0051fba4 (size 724) */

void k3c_internal_pkg_motion___CartKinematics__Home_axis(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *extraout_r1;
  int extraout_r2;
  undefined *puVar7;
  undefined *extraout_r2_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x2c)) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0xac);
      *(undefined4 *)((int)register0x00000054 + -0xac) = unaff_lr;
      *(undefined8 *)((int)register0x00000054 + -0x74) =
           *(undefined8 *)(*(int *)((int)register0x00000054 + 0x10) + 0x34);
      *(undefined8 *)((int)register0x00000054 + -0x7c) =
           *(undefined8 *)(*(int *)((int)register0x00000054 + 0x10) + 0x3c);
      uVar2 = FUN_0009dee8(0,(undefined1 *)((int)register0x00000054 + -0x54));
      *(undefined8 *)((int)register0x00000054 + -0x54) = *(undefined8 *)(extraout_r2 + 0x44);
      *(undefined8 *)((int)register0x00000054 + -0x4c) = *(undefined8 *)(extraout_r2 + 0x2c);
      *(undefined8 *)((int)register0x00000054 + -0x44) = *(undefined8 *)(extraout_r2 + 0x54);
      *(undefined8 *)((int)register0x00000054 + -0x3c) = *(undefined8 *)(extraout_r2 + 0x5c);
      *(undefined1 *)((int)register0x00000054 + -0x34) = *(undefined1 *)(extraout_r2 + 100);
      *(undefined8 *)((int)register0x00000054 + -0x30) = *(undefined8 *)(extraout_r2 + 0x4c);
      FUN_0009def4(uVar2,(undefined1 *)((int)register0x00000054 + -0x20));
      *(undefined8 *)((int)register0x00000054 + -0x5c) =
           *(undefined8 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0xa8) =
           *(undefined4 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0xa4) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      FUN_0008f6c0();
      uVar3 = *(uint *)((int)register0x00000054 + 0xc);
      uVar9 = uVar3 == 4;
      if (uVar3 < 4) {
        puVar4 = (undefined1 *)((int)register0x00000054 + -0x20);
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0xa0);
        *(undefined **)(puVar4 + uVar3 * 8) = PTR_DAT_0051fe7c;
        *(undefined4 *)(puVar4 + uVar3 * 8 + 4) = uVar2;
        *(undefined **)((int)register0x00000054 + -0xa8) = PTR_DAT_0051fe80;
        *(undefined4 *)((int)register0x00000054 + -0xa4) = 4;
        *(undefined4 *)((int)register0x00000054 + -0xa0) = 4;
        *(undefined1 **)((int)register0x00000054 + -0x9c) = puVar4;
        FUN_00072580();
        puVar1 = PTR_DAT_0051fe7c;
        iVar5 = *(int *)((int)register0x00000054 + -0x98);
        *(int *)((int)register0x00000054 + -0x24) = iVar5;
        if (*(char *)((int)register0x00000054 + -0x34) == '\0') {
          puVar7 = *(undefined **)(iVar5 + *(int *)((int)register0x00000054 + 0xc) * 8);
          iVar5 = iVar5 + *(int *)((int)register0x00000054 + 0xc) * 8;
          uVar9 = puVar7 == PTR_DAT_0051fe7c;
          if ((bool)uVar9) {
            *(int *)((int)register0x00000054 + -0x28) = iVar5;
            *(double *)((int)register0x00000054 + -0x6c) =
                 **(double **)(iVar5 + 4) +
                 (*(double *)((int)register0x00000054 + -0x7c) -
                 *(double *)((int)register0x00000054 + -0x4c)) * 1.5;
            *(undefined4 *)((int)register0x00000054 + -0xa8) =
                 *(undefined4 *)((int)register0x00000054 + -0x6c);
            *(undefined4 *)((int)register0x00000054 + -0xa4) =
                 *(undefined4 *)((int)register0x00000054 + -0x68);
            FUN_0008f6c0();
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0xa0);
            *(undefined **)
             (*(int *)((int)register0x00000054 + -0x24) +
             *(int *)((int)register0x00000054 + 0xc) * 8) = PTR_DAT_0051fe7c;
            if (*(int *)PTR_DAT_0051fe84 == 0) {
              iVar5 = *(int *)((int)register0x00000054 + -0x28);
            }
            else {
              uVar2 = FUN_0009db64();
              *unaff_r8 = uVar2;
              iVar5 = *(int *)((int)register0x00000054 + -0x28);
              unaff_r8[1] = *(undefined4 *)(iVar5 + 4);
            }
            *(undefined4 *)(iVar5 + 4) = uVar2;
            goto LAB_0051fdb4;
          }
          *(undefined **)((int)register0x00000054 + -0xa8) = puVar7;
          *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_0051fe7c;
          *(undefined **)((int)register0x00000054 + -0xa0) = PTR_DAT_0051fe80;
          FUN_000209b4();
          puVar7 = extraout_r2_00;
        }
        else {
          puVar7 = *(undefined **)(iVar5 + *(int *)((int)register0x00000054 + 0xc) * 8);
          iVar5 = iVar5 + *(int *)((int)register0x00000054 + 0xc) * 8;
          uVar9 = 0;
          if (puVar7 == PTR_DAT_0051fe7c) {
            *(int *)((int)register0x00000054 + -0x28) = iVar5;
            *(double *)((int)register0x00000054 + -100) =
                 **(double **)(iVar5 + 4) -
                 (*(double *)((int)register0x00000054 + -0x4c) -
                 *(double *)((int)register0x00000054 + -0x74)) * 1.5;
            *(undefined4 *)((int)register0x00000054 + -0xa8) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + -0xa4) =
                 *(undefined4 *)((int)register0x00000054 + -0x60);
            FUN_0008f6c0();
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0xa0);
            *(undefined **)
             (*(int *)((int)register0x00000054 + -0x24) +
             *(int *)((int)register0x00000054 + 0xc) * 8) = PTR_DAT_0051fe7c;
            if (*(int *)PTR_DAT_0051fe84 == 0) {
              iVar5 = *(int *)((int)register0x00000054 + -0x28);
            }
            else {
              uVar2 = FUN_0009db64();
              *unaff_r8 = uVar2;
              iVar5 = *(int *)((int)register0x00000054 + -0x28);
              unaff_r8[1] = *(undefined4 *)(iVar5 + 4);
            }
            *(undefined4 *)(iVar5 + 4) = uVar2;
LAB_0051fdb4:
            *(undefined **)((int)register0x00000054 + -0xa8) = PTR_DAT_0051fe88;
            FUN_00022cf8();
            puVar6 = *(undefined4 **)((int)register0x00000054 + -0xa4);
            if (*(int *)PTR_DAT_0051fe84 == 0) {
              uVar2 = *(undefined4 *)((int)register0x00000054 + 0x10);
            }
            else {
              FUN_0009db54();
              uVar2 = *(undefined4 *)((int)register0x00000054 + 0x10);
              *unaff_r8 = uVar2;
              puVar6 = extraout_r1;
            }
            *puVar6 = uVar2;
            *(undefined4 *)((int)register0x00000054 + -0xa8) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 **)((int)register0x00000054 + -0xa4) = puVar6;
            *(undefined4 *)((int)register0x00000054 + -0xa0) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x9c) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + -0x24);
            *(undefined4 *)((int)register0x00000054 + -0x94) = 4;
            *(undefined4 *)((int)register0x00000054 + -0x90) = 4;
            *(undefined1 **)((int)register0x00000054 + -0x8c) =
                 (undefined1 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)((int)register0x00000054 + -0x88) = 4;
            *(undefined4 *)((int)register0x00000054 + -0x84) = 4;
            *(undefined1 *)((int)register0x00000054 + -0x80) =
                 *(undefined1 *)((int)register0x00000054 + 0x14);
            k3c_internal_pkg_toolhead___Homing__Home_rails();
            return;
          }
        }
        *(undefined **)((int)register0x00000054 + -0xa8) = puVar7;
        *(undefined **)((int)register0x00000054 + -0xa4) = puVar1;
        *(undefined **)((int)register0x00000054 + -0xa0) = PTR_DAT_0051fe80;
        uVar3 = FUN_000209b4();
      }
      param_1 = FUN_0009dbd4(uVar3,4);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xac);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x51fe74;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CartKinematics).Home @ 0051fe8c (size 628) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion___CartKinematics__Home(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  undefined1 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x38) = unaff_lr;
      iVar4 = *(int *)((int)register0x00000054 + 4);
      if (*(undefined4 **)(iVar4 + 0x58) != (undefined4 *)0x0) {
        pcVar2 = (code *)**(undefined4 **)(iVar4 + 0x58);
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + 8);
        (*pcVar2)();
                    /* WARNING: Could not recover jumptable at 0x0051fed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x38))();
        return;
      }
      iVar5 = *(int *)((int)register0x00000054 + 8);
      iVar6 = *(int *)(iVar5 + 8);
      *(int *)((int)register0x00000054 + -0x10) = iVar6;
      iVar7 = *(int *)(iVar5 + 0xc);
      *(int *)((int)register0x00000054 + -0x20) = iVar7;
      iVar1 = 0;
      while( true ) {
        if (iVar7 <= iVar1) {
                    /* WARNING: Could not recover jumptable at 0x005200c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x38))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x18) = iVar1;
        uVar8 = *(uint *)(iVar6 + iVar1 * 4);
        iVar1 = *(int *)(iVar4 + 4);
        uVar9 = *(undefined4 *)(iVar4 + 8);
        *(uint *)((int)register0x00000054 + -0x14) = uVar8;
        if (iVar1 != _UNK_00520104) break;
        *(uint *)((int)register0x00000054 + -0x1c) = uVar8;
        *(int *)((int)register0x00000054 + -0x34) = _UNK_00520104;
        *(undefined1 **)((int)register0x00000054 + -0x30) =
             (undefined1 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar9;
        FUN_00019a3c();
        if (*(char *)((int)register0x00000054 + -0x28) == '\0') {
          iVar4 = *(int *)((int)register0x00000054 + 4);
          iVar5 = *(int *)((int)register0x00000054 + 8);
          uVar8 = *(uint *)((int)register0x00000054 + -0x1c);
          break;
        }
        iVar4 = *(int *)((int)register0x00000054 + 4);
        uVar8 = *(uint *)(iVar4 + 0x10);
        uVar11 = 1;
        if (uVar8 == 0) goto LAB_005200e4;
        uVar11 = uVar8 == 1;
        if (uVar8 < 2) goto LAB_005200d8;
        uVar8 = *(uint *)((int)register0x00000054 + -0x1c);
        uVar11 = uVar8 == *(uint *)(iVar4 + 0x1c);
        if (*(uint *)(iVar4 + 0x1c) <= uVar8) goto LAB_005200d4;
        puVar3 = *(undefined4 **)(iVar4 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -8) = *puVar3;
        *(undefined4 *)((int)register0x00000054 + -0xc) = puVar3[1];
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)(*(int *)(iVar4 + 0x18) + uVar8 * 4);
        *(int *)((int)register0x00000054 + -0x34) = iVar4;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
        k3c_internal_pkg_motion___CartKinematics__Activate_carriage();
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined1 *)((int)register0x00000054 + -0x24) = 0;
        k3c_internal_pkg_motion___CartKinematics__Home_axis();
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x30) = 1;
        k3c_internal_pkg_motion___CartKinematics__Activate_carriage();
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined1 *)((int)register0x00000054 + -0x24) = 0;
        k3c_internal_pkg_motion___CartKinematics__Home_axis();
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(uint *)((int)register0x00000054 + -0x30) =
             (uint)(*(int *)((int)register0x00000054 + -4) ==
                   *(int *)((int)register0x00000054 + -0xc));
        k3c_internal_pkg_motion___CartKinematics__Activate_carriage();
LAB_0051fedc:
        iVar1 = *(int *)((int)register0x00000054 + -0x18) + 1;
        iVar7 = *(int *)((int)register0x00000054 + -0x20);
        iVar4 = *(int *)((int)register0x00000054 + 4);
        iVar5 = *(int *)((int)register0x00000054 + 8);
        iVar6 = *(int *)((int)register0x00000054 + -0x10);
      }
      if (uVar8 == 2) {
        uVar11 = *(uint *)(iVar4 + 0x1c) == 2;
        if (2 < *(uint *)(iVar4 + 0x1c)) {
          uVar9 = *(undefined4 *)(*(int *)(iVar4 + 0x18) + 8);
          *(int *)((int)register0x00000054 + -0x34) = iVar4;
          *(int *)((int)register0x00000054 + -0x30) = iVar5;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x28) = uVar9;
          *(undefined1 *)((int)register0x00000054 + -0x24) = 1;
          k3c_internal_pkg_motion___CartKinematics__Home_axis();
          goto LAB_0051fedc;
        }
      }
      else {
        uVar11 = uVar8 == *(uint *)(iVar4 + 0x1c);
        if (uVar8 < *(uint *)(iVar4 + 0x1c)) {
          uVar9 = *(undefined4 *)(*(int *)(iVar4 + 0x18) + uVar8 * 4);
          *(int *)((int)register0x00000054 + -0x34) = iVar4;
          *(int *)((int)register0x00000054 + -0x30) = iVar5;
          *(uint *)((int)register0x00000054 + -0x2c) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x28) = uVar9;
          *(undefined1 *)((int)register0x00000054 + -0x24) = 0;
          k3c_internal_pkg_motion___CartKinematics__Home_axis();
          goto LAB_0051fedc;
        }
        FUN_0009dbd4(uVar8);
      }
      FUN_0009dbd4(2);
LAB_005200d4:
      FUN_0009dbd4();
LAB_005200d8:
      FUN_0009dbd4(1,1);
LAB_005200e4:
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x38);
      if ((bool)uVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x5200fc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CartKinematics).Set_home_callback @ 00520108 (size 88) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion___CartKinematics__Set_home_callback(void)

{
  int iVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x52015c;
    FUN_0009bf64();
  }
  iVar1 = in_stack_00000004;
  if (*_UNK_00520164 != 0) {
    iVar1 = FUN_0009db64();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = *(undefined4 *)(iVar1 + 0x58);
  }
  *(undefined4 *)(iVar1 + 0x58) = in_stack_00000008;
                    /* WARNING: Could not recover jumptable at 0x00520150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*CartKinematics).Motor_off @ 00520168 (size 372) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion___CartKinematics__Motor_off(void)

{
  undefined8 *puVar1;
  int extraout_r1;
  int iVar2;
  undefined8 *extraout_r2;
  undefined8 *extraout_r2_00;
  undefined8 *puVar3;
  undefined8 *extraout_r2_01;
  undefined8 *extraout_r2_02;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined8 *puStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x5202d8;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  FUN_00022cf8();
  *puStack_c = 0x3ff0000000000000;
  puStack_c[1] = 0xbff0000000000000;
  *(undefined4 *)((int)puStack_c + 4) = 2;
  *(undefined4 *)(puStack_c + 1) = 2;
  puVar1 = puStack_c;
  puVar3 = puStack_c;
  if (*_UNK_005202e8 != 0) {
    puVar1 = (undefined8 *)FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *(undefined4 *)extraout_r2;
    puVar3 = extraout_r2;
  }
  *(undefined8 **)puVar3 = puVar1;
  FUN_00022cf8();
  *puStack_c = 0x3ff0000000000000;
  puStack_c[1] = 0xbff0000000000000;
  *(undefined4 *)(puStack_c + 2) = 2;
  *(undefined4 *)((int)puStack_c + 0x14) = 2;
  puVar1 = puStack_c;
  puVar3 = puStack_c;
  if (*_UNK_005202e8 != 0) {
    puVar1 = (undefined8 *)FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *(undefined4 *)((int)extraout_r2_00 + 0xc);
    puVar3 = extraout_r2_00;
  }
  *(undefined8 **)((int)puVar3 + 0xc) = puVar1;
  FUN_00022cf8();
  *puStack_c = 0x3ff0000000000000;
  puStack_c[1] = 0xbff0000000000000;
  *(undefined4 *)((int)puStack_c + 0x1c) = 2;
  *(undefined4 *)(puStack_c + 4) = 2;
  puVar1 = puStack_c;
  if (*_UNK_005202e8 != 0) {
    puStack_c = (undefined8 *)FUN_0009db64();
    *unaff_r8 = puStack_c;
    unaff_r8[1] = *(undefined4 *)(extraout_r2_01 + 3);
    puVar1 = extraout_r2_01;
  }
  *(undefined8 **)(puVar1 + 3) = puStack_c;
  *(undefined4 *)(in_stack_00000004 + 0x38) = 3;
  *(undefined4 *)(in_stack_00000004 + 0x3c) = 3;
  iVar2 = in_stack_00000004;
  if (*_UNK_005202e8 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r2_02;
    unaff_r8[1] = *(undefined4 *)(extraout_r1 + 0x34);
    iVar2 = extraout_r1;
    puVar1 = extraout_r2_02;
  }
  *(undefined8 **)(iVar2 + 0x34) = puVar1;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x005202cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*CartKinematics).Check_endstops @ 005202ec (size 380) */

void k3c_internal_pkg_motion___CartKinematics__Check_endstops(undefined4 param_1)

{
  double *pdVar1;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  uint uVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  double dVar9;
  undefined8 uVar10;
  
code_r0x005202ec:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar7 = (undefined1 *)((int)register0x00000054 + -0xc);
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
    iVar3 = *(int *)((int)register0x00000054 + 8);
    pdVar1 = (double *)0x0;
    do {
      if (2 < (int)pdVar1) {
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0052041c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0xc))();
        return;
      }
      pdVar4 = *(double **)(iVar3 + 0x40);
      uVar8 = pdVar1 == pdVar4;
      if (pdVar4 <= pdVar1) goto LAB_00520450;
      pdVar4 = (double *)(*(int *)(iVar3 + 0x3c) + (int)pdVar1 * 8);
      if (*pdVar4 == 0.0) {
        uVar10 = *(undefined8 *)PTR_DAT_0052046c;
      }
      else {
        uVar8 = pdVar1 == *(double **)(iVar3 + 0x14);
        if (*(double **)(iVar3 + 0x14) <= pdVar1) goto LAB_0052044c;
        pdVar4 = *(double **)(*(int *)((int)register0x00000054 + 4) + 0x38);
        uVar8 = pdVar1 == pdVar4;
        if (pdVar4 <= pdVar1) goto LAB_00520444;
        iVar5 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x34);
        uVar6 = *(uint *)(iVar5 + (int)pdVar1 * 0xc + 4);
        pdVar4 = *(double **)(iVar5 + (int)pdVar1 * 0xc);
        uVar8 = 1;
        if (uVar6 == 0) goto LAB_00520438;
        dVar9 = *(double *)(*(int *)(iVar3 + 0x10) + (int)pdVar1 * 8);
        if (*(double *)PTR_DAT_0052046c < *pdVar4 - dVar9) goto LAB_005203c4;
        uVar8 = uVar6 == 1;
        if (uVar6 < 2) goto LAB_0052042c;
        if (*(double *)PTR_DAT_0052046c < dVar9 - pdVar4[1]) goto LAB_005203c4;
      }
      pdVar1 = (double *)((int)pdVar1 + 1);
    } while( true );
  }
  goto LAB_0052045c;
LAB_005203c4:
  uVar8 = uVar6 == 1;
  if (1 < uVar6) {
    if (*pdVar4 <= pdVar4[1]) {
      uVar2 = *(undefined4 *)PTR_DAT_00520478;
      *(undefined **)((int)register0x00000054 + 0xc) = PTR_DAT_00520474;
      *(undefined4 *)((int)register0x00000054 + 0x10) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00520408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((int)register0x00000054 + -0xc))();
      return;
    }
    uVar2 = *(undefined4 *)PTR_DAT_00520470;
    *(undefined **)((int)register0x00000054 + 0xc) = PTR_DAT_00520474;
    *(undefined4 *)((int)register0x00000054 + 0x10) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x005203f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((int)register0x00000054 + -0xc))();
    return;
  }
  FUN_0009dbd4(1,1);
LAB_0052042c:
  FUN_0009dbd4(1,1);
LAB_00520438:
  pdVar1 = (double *)FUN_0009dbd4(0,0);
LAB_00520444:
  FUN_0009dbd4(pdVar1,pdVar4);
LAB_0052044c:
  pdVar1 = (double *)FUN_0009dbd4();
LAB_00520450:
  param_1 = FUN_0009dbd4(pdVar1,pdVar4);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
  if ((bool)uVar8) {
    register0x00000054 = (BADSPACEBASE *)puVar7;
  }
LAB_0052045c:
  unaff_lr = 0x520464;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x005202ec;
}



/* k3c/internal/pkg/motion.(*CartKinematics).Check_move @ 0052047c (size 524) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion___CartKinematics__Check_move(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 8);
      uVar2 = *(uint *)(iVar1 + 0x14);
      uVar7 = uVar2 == 0;
      if (!(bool)uVar7) {
        uVar7 = uVar2 == 1;
        if (1 < uVar2) {
          iVar3 = *(int *)((int)register0x00000054 + 4);
          uVar2 = *(uint *)(iVar3 + 0x38);
          uVar7 = uVar2 == 0;
          if (!(bool)uVar7) {
            piVar4 = *(int **)(iVar3 + 0x34);
            uVar5 = piVar4[1];
            uVar7 = uVar5 == 0;
            if (!(bool)uVar7) {
              dVar8 = **(double **)(iVar1 + 0x10);
              dVar9 = *_UNK_0052068c;
              if (dVar9 < *(double *)*piVar4 - dVar8) {
LAB_00520554:
                *(int *)((int)register0x00000054 + -0x14) = iVar3;
                *(int *)((int)register0x00000054 + -0x10) = iVar1;
                k3c_internal_pkg_motion___CartKinematics__Check_endstops();
                iVar1 = *(int *)((int)register0x00000054 + -0xc);
                uVar7 = false;
                if (iVar1 == 0) {
                  iVar1 = *(int *)((int)register0x00000054 + 8);
                  iVar3 = *(int *)((int)register0x00000054 + 4);
LAB_00520574:
                  uVar7 = *(uint *)(iVar1 + 0x40) == 2;
                  if (2 < *(uint *)(iVar1 + 0x40)) {
                    if (*(double *)(*(int *)(iVar1 + 0x3c) + 0x10) == 0.0) {
                    /* WARNING: Could not recover jumptable at 0x005205ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)((int)register0x00000054 + -0x18))();
                      return;
                    }
                    *(int *)((int)register0x00000054 + -0x14) = iVar3;
                    *(int *)((int)register0x00000054 + -0x10) = iVar1;
                    k3c_internal_pkg_motion___CartKinematics__Check_endstops();
                    iVar1 = *(int *)((int)register0x00000054 + 8);
                    uVar7 = *(uint *)(iVar1 + 0x40) == 2;
                    if (2 < *(uint *)(iVar1 + 0x40)) {
                      dVar8 = *(double *)(iVar1 + 0x48) /
                              ABS(*(double *)(*(int *)(iVar1 + 0x3c) + 0x10));
                      dVar9 = *(double *)(*(int *)((int)register0x00000054 + 4) + 0x24);
                      dVar10 = *(double *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
                      *(int *)((int)register0x00000054 + -0x14) = iVar1;
                      *(double *)((int)register0x00000054 + -0x10) = dVar9 * dVar8;
                      *(double *)((int)register0x00000054 + -8) = dVar10 * dVar8;
                      k3c_internal_pkg_toolhead___Move__Limit_speed();
                    /* WARNING: Could not recover jumptable at 0x005205e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)((int)register0x00000054 + -0x18))();
                      return;
                    }
                    FUN_0009dbd4(2);
                  }
                  iVar1 = FUN_0009dbd4(2);
                }
                if (!(bool)uVar7) {
                  iVar1 = *(int *)(iVar1 + 4);
                }
                *(int *)((int)register0x00000054 + -0x14) = iVar1;
                *(undefined4 *)((int)register0x00000054 + -0x10) =
                     *(undefined4 *)((int)register0x00000054 + -8);
                FUN_00095b00();
LAB_00520618:
                FUN_0009dbd4(1,1);
LAB_00520624:
                FUN_0009dbd4(0,0);
LAB_00520630:
                FUN_0009dbd4(1,1);
              }
              else {
                uVar7 = uVar5 == 1;
                if (1 < uVar5) {
                  if (dVar9 < dVar8 - ((double *)*piVar4)[1]) goto LAB_00520554;
                  uVar7 = uVar2 == 1;
                  if (1 < uVar2) {
                    uVar2 = piVar4[4];
                    uVar7 = uVar2 == 0;
                    if (!(bool)uVar7) {
                      dVar8 = (*(double **)(iVar1 + 0x10))[1];
                      if (dVar9 < *(double *)piVar4[3] - dVar8) goto LAB_00520554;
                      uVar7 = uVar2 == 1;
                      if (1 < uVar2) {
                        if (dVar9 < dVar8 - ((double *)piVar4[3])[1]) goto LAB_00520554;
                        goto LAB_00520574;
                      }
                      goto LAB_00520618;
                    }
                    goto LAB_00520624;
                  }
                  goto LAB_00520630;
                }
              }
              FUN_0009dbd4(1,1);
            }
            FUN_0009dbd4(0,0);
          }
          FUN_0009dbd4(0,0);
        }
        FUN_0009dbd4(1,1);
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x520684;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CartKinematics).Check_move_positon @ 00520690 (size 756) */

void k3c_internal_pkg_motion___CartKinematics__Check_move_positon(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint extraout_r2;
  uint uVar4;
  uint extraout_r3;
  uint extraout_r3_00;
  uint uVar5;
  double *pdVar6;
  int iVar7;
  double *pdVar8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  double dVar11;
  undefined8 uVar12;
  
code_r0x00520690:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar9 = (undefined1 *)((int)register0x00000054 + -100);
    *(undefined4 *)((int)register0x00000054 + -100) = unaff_lr;
    uVar4 = *(uint *)((int)register0x00000054 + 0x18);
    uVar5 = *(uint *)((int)register0x00000054 + 0xc);
    uVar1 = 0;
    do {
      if (2 < (int)uVar1) {
        *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
                    /* WARNING: Could not recover jumptable at 0x00520910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -100))();
        return;
      }
      uVar10 = uVar5 == uVar1;
      if (uVar5 <= uVar1) goto LAB_0052096c;
      pdVar6 = (double *)(*(int *)((int)register0x00000054 + 8) + uVar1 * 8);
      uVar10 = uVar4 == uVar1;
      if (uVar4 <= uVar1) goto LAB_00520964;
      dVar11 = *pdVar6;
      if (dVar11 == *(double *)(*(int *)((int)register0x00000054 + 0x14) + uVar1 * 8)) {
        uVar12 = *(undefined8 *)PTR_DAT_00520988;
      }
      else {
        uVar3 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x38);
        uVar10 = uVar1 == uVar3;
        if (uVar3 <= uVar1) goto LAB_00520960;
        iVar7 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x34);
        uVar3 = *(uint *)(iVar7 + uVar1 * 0xc + 4);
        pdVar8 = *(double **)(iVar7 + uVar1 * 0xc);
        uVar10 = 1;
        if (uVar3 == 0) goto LAB_00520954;
        if (*(double *)PTR_DAT_00520988 < *pdVar8 - dVar11) goto LAB_00520764;
        uVar10 = uVar3 == 1;
        if (uVar3 < 2) goto LAB_00520948;
        if (*(double *)PTR_DAT_00520988 < dVar11 - pdVar8[1]) goto LAB_00520764;
      }
      uVar1 = uVar1 + 1;
    } while( true );
  }
  goto LAB_00520978;
LAB_00520764:
  uVar10 = uVar3 == 1;
  if (1 < uVar3) {
    if (pdVar8[1] < *pdVar8) {
      uVar2 = *(undefined4 *)PTR_DAT_0052099c;
      *(undefined **)((int)register0x00000054 + 0x20) = PTR_DAT_00520998;
      *(undefined4 *)((int)register0x00000054 + 0x24) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x005208fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((int)register0x00000054 + -100))();
      return;
    }
    *(uint *)((int)register0x00000054 + -0x4c) = uVar1;
    *(double **)((int)register0x00000054 + -0x24) = pdVar6;
    *(uint *)((int)register0x00000054 + -0x48) = uVar1 * 3;
    FUN_0009def4(0,(undefined1 *)((int)register0x00000054 + -0x20));
    *(double *)((int)register0x00000054 + -0x2c) = *pdVar6;
    *(undefined4 *)((int)register0x00000054 + -0x60) =
         *(undefined4 *)((int)register0x00000054 + -0x2c);
    *(undefined4 *)((int)register0x00000054 + -0x5c) =
         *(undefined4 *)((int)register0x00000054 + -0x28);
    FUN_0008f6c0();
    *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0052098c;
    *(undefined4 *)((int)register0x00000054 + -0x1c) =
         *(undefined4 *)((int)register0x00000054 + -0x58);
    uVar4 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x38);
    uVar10 = *(uint *)((int)register0x00000054 + -0x4c) == uVar4;
    if (*(uint *)((int)register0x00000054 + -0x4c) < uVar4) {
      iVar7 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x34);
      uVar5 = *(uint *)((int)register0x00000054 + -0x48);
      uVar10 = *(int *)(iVar7 + uVar5 * 4 + 4) == 0;
      if (!(bool)uVar10) {
        *(undefined8 *)((int)register0x00000054 + -0x34) = **(undefined8 **)(iVar7 + uVar5 * 4);
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        FUN_0008f6c0();
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0052098c;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined8 *)((int)register0x00000054 + -0x3c) =
             **(undefined8 **)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        FUN_0008f6c0();
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0052098c;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        uVar4 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x38);
        uVar1 = *(uint *)((int)register0x00000054 + -0x4c);
        uVar10 = uVar1 == uVar4;
        if (uVar1 < uVar4) {
          iVar7 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x34);
          uVar4 = *(uint *)(iVar7 + *(int *)((int)register0x00000054 + -0x48) * 4 + 4);
          uVar10 = uVar4 == 1;
          if (1 < uVar4) {
            *(undefined8 *)((int)register0x00000054 + -0x44) =
                 *(undefined8 *)
                  (*(int *)(iVar7 + *(int *)((int)register0x00000054 + -0x48) * 4) + 8);
            *(undefined4 *)((int)register0x00000054 + -0x60) =
                 *(undefined4 *)((int)register0x00000054 + -0x44);
            *(undefined4 *)((int)register0x00000054 + -0x5c) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            FUN_0008f6c0();
            *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0052098c;
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00520990;
            *(undefined4 *)((int)register0x00000054 + -0x5c) = 0x37;
            *(undefined1 **)((int)register0x00000054 + -0x58) =
                 (undefined1 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)((int)register0x00000054 + -0x54) = 4;
            *(undefined4 *)((int)register0x00000054 + -0x50) = 4;
            k3c_internal_pkg_logger_Debugf();
            uVar2 = *(undefined4 *)PTR_DAT_00520994;
            *(undefined **)((int)register0x00000054 + 0x20) = PTR_DAT_00520998;
            *(undefined4 *)((int)register0x00000054 + 0x24) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x005208e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -100))();
            return;
          }
          FUN_0009dbd4(1,uVar4);
          uVar4 = extraout_r2;
          uVar1 = extraout_r3;
        }
        FUN_0009dbd4(uVar1,uVar4);
      }
      FUN_0009dbd4(0,0);
    }
    FUN_0009dbd4();
  }
  FUN_0009dbd4(1,1);
LAB_00520948:
  FUN_0009dbd4(1,1);
LAB_00520954:
  FUN_0009dbd4(0,0);
LAB_00520960:
  uVar1 = FUN_0009dbd4();
  uVar4 = extraout_r3_00;
LAB_00520964:
  uVar1 = FUN_0009dbd4(uVar1,uVar4);
LAB_0052096c:
  param_1 = FUN_0009dbd4(uVar1,uVar5);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -100);
  if ((bool)uVar10) {
    register0x00000054 = (BADSPACEBASE *)puVar9;
  }
LAB_00520978:
  unaff_lr = 0x520980;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x00520690;
}



/* k3c/internal/pkg/motion.(*CartKinematics).Get_status @ 005209a0 (size 856) */

void k3c_internal_pkg_motion___CartKinematics__Get_status(undefined4 param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r2;
  uint uVar5;
  uint extraout_r3;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  double *unaff_r8;
  undefined4 uVar9;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  uint uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x60) = unaff_lr;
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
      uVar3 = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 1;
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00520cfc;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 1;
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00520d00;
      *(undefined4 *)((int)register0x00000054 + -4) = 1;
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00520d04;
      iVar4 = *(int *)((int)register0x00000054 + 4);
      pdVar1 = (double *)0x0;
      uVar5 = 0;
      iVar6 = 0;
      uVar7 = 0;
      while( true ) {
        uVar13 = CONCAT44(uVar3,pdVar1);
        if (2 < (int)pdVar1) {
          *(int *)((int)register0x00000054 + -0x24) = iVar6;
          *(uint *)((int)register0x00000054 + -0x30) = uVar7;
          *(uint *)((int)register0x00000054 + -0x2c) = uVar5;
          FUN_000908bc();
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
          FUN_0014f8fc();
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00520d10;
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00520d14;
          *(undefined4 *)((int)register0x00000054 + -0x50) = 10;
          FUN_00093a08();
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x4c);
          *puVar2 = PTR_DAT_00520d08;
          if (*(int *)PTR_DAT_00520d0c == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x20);
          }
          else {
            puVar2 = (undefined4 *)FUN_0009db64();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)unaff_r8 = uVar3;
            *(undefined4 *)((int)unaff_r8 + 4) = puVar2[1];
          }
          puVar2[1] = uVar3;
          iVar4 = *(int *)((int)register0x00000054 + 4);
          uVar3 = *(undefined4 *)(iVar4 + 0x44);
          uVar8 = *(undefined4 *)(iVar4 + 0x48);
          *(undefined4 *)((int)register0x00000054 + -0x5c) = *(undefined4 *)(iVar4 + 0x40);
          *(undefined4 *)((int)register0x00000054 + -0x58) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x54) = uVar8;
          FUN_0008f820();
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00520d10;
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x54) =
               PTR_s_axis_minimumaxis_maximumMIN_MSG__008262d0_0x401_00520d18;
          *(undefined4 *)((int)register0x00000054 + -0x50) = 0xc;
          FUN_00093a08();
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x4c);
          *puVar2 = PTR_DAT_00520d1c;
          if (*(int *)PTR_DAT_00520d0c == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x20);
          }
          else {
            puVar2 = (undefined4 *)FUN_0009db64();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)unaff_r8 = uVar3;
            *(undefined4 *)((int)unaff_r8 + 4) = puVar2[1];
          }
          puVar2[1] = uVar3;
          iVar4 = *(int *)((int)register0x00000054 + 4);
          uVar8 = *(undefined4 *)(iVar4 + 0x50);
          uVar3 = *(undefined4 *)(iVar4 + 0x54);
          *(undefined4 *)((int)register0x00000054 + -0x5c) = *(undefined4 *)(iVar4 + 0x4c);
          *(undefined4 *)((int)register0x00000054 + -0x58) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x54) = uVar3;
          FUN_0008f820();
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00520d10;
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x54) =
               PTR_s_axis_maximumMIN_MSG_TIMEREG_MOD__008262d0_0x40d_00520d20;
          *(undefined4 *)((int)register0x00000054 + -0x50) = 0xc;
          FUN_00093a08();
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x4c);
          *puVar2 = PTR_DAT_00520d1c;
          if (*(int *)PTR_DAT_00520d0c == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x20);
          }
          else {
            puVar2 = (undefined4 *)FUN_0009db64();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)unaff_r8 = uVar3;
            *(undefined4 *)((int)unaff_r8 + 4) = puVar2[1];
          }
          puVar2[1] = uVar3;
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
                    /* WARNING: Could not recover jumptable at 0x00520cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x60))();
          return;
        }
        unaff_r8 = *(double **)(iVar4 + 0x38);
        uVar9 = *(undefined4 *)((int)register0x00000054 + (int)pdVar1 * 8 + -0x18);
        uVar8 = *(undefined4 *)((int)register0x00000054 + (int)pdVar1 * 8 + -0x14);
        uVar12 = pdVar1 == unaff_r8;
        if (unaff_r8 <= pdVar1) goto LAB_00520ce0;
        uVar11 = *(uint *)(*(int *)(iVar4 + 0x34) + (int)pdVar1 * 0xc + 4);
        unaff_r8 = *(double **)(*(int *)(iVar4 + 0x34) + (int)pdVar1 * 0xc);
        uVar12 = 1;
        if (uVar11 == 0) goto LAB_00520cd4;
        uVar12 = uVar11 == 1;
        if (uVar11 < 2) break;
        if (*unaff_r8 <= unaff_r8[1]) {
          uVar7 = uVar7 + 1;
          if (uVar5 < uVar7) {
            *(double **)((int)register0x00000054 + -0x34) = pdVar1;
            *(undefined4 *)((int)register0x00000054 + -0x28) = uVar9;
            *(undefined4 *)((int)register0x00000054 + -0x38) = uVar8;
            *(int *)((int)register0x00000054 + -0x5c) = iVar6;
            *(uint *)((int)register0x00000054 + -0x58) = uVar7;
            *(uint *)((int)register0x00000054 + -0x54) = uVar5;
            *(undefined4 *)((int)register0x00000054 + -0x50) = uVar3;
            *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00520d08;
            FUN_000987f4();
            iVar6 = *(int *)((int)register0x00000054 + -0x48);
            uVar7 = *(uint *)((int)register0x00000054 + -0x44);
            uVar5 = *(uint *)((int)register0x00000054 + -0x40);
            pdVar1 = *(double **)((int)register0x00000054 + -0x34);
            uVar3 = 1;
            iVar4 = *(int *)((int)register0x00000054 + 4);
            uVar8 = *(undefined4 *)((int)register0x00000054 + -0x38);
            uVar9 = *(undefined4 *)((int)register0x00000054 + -0x28);
          }
          uVar13 = CONCAT44(uVar3,pdVar1);
          unaff_r8 = (double *)(uVar7 - 1);
          *(undefined4 *)(iVar6 + (int)unaff_r8 * 8 + 4) = uVar8;
          if (*(int *)PTR_DAT_00520d0c != 0) {
            uVar13 = FUN_0009db64();
            *(undefined4 *)unaff_r8 = uVar9;
            *(undefined4 *)(uVar7 + 3) = *(undefined4 *)(iVar6 + (int)unaff_r8 * 8);
            iVar4 = extraout_r2;
            uVar5 = extraout_r3;
          }
          *(undefined4 *)(iVar6 + (int)unaff_r8 * 8) = uVar9;
        }
        uVar3 = (undefined4)((ulonglong)uVar13 >> 0x20);
        pdVar1 = (double *)((int)uVar13 + 1);
      }
      FUN_0009dbd4(uVar3);
LAB_00520cd4:
      pdVar1 = (double *)FUN_0009dbd4(0,0);
LAB_00520ce0:
      param_1 = FUN_0009dbd4(pdVar1,unaff_r8);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x60);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x520cf4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CartKinematics).Activate_carriage @ 00520d24 (size 880) */

void k3c_internal_pkg_motion___CartKinematics__Activate_carriage(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_r2;
  double *pdVar5;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  int unaff_r10;
  undefined1 *puVar14;
  undefined4 unaff_lr;
  undefined1 uVar15;
  double dVar16;
  undefined8 uVar17;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar14 = (undefined1 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x58) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x50) = DAT_00521098;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 8;
      *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_0052109c;
      *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_005210a0;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      uVar17 = CONCAT44(DAT_005210a4,*(int *)((int)register0x00000054 + -0x40));
      uVar15 = 0;
      if (*(int *)((int)register0x00000054 + -0x40) == DAT_005210a4) {
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        k3c_internal_pkg_toolhead___Toolhead__Flush_step_generation();
        iVar1 = *(int *)((int)register0x00000054 + 4);
        uVar3 = *(uint *)((int)register0x00000054 + 8);
        uVar15 = uVar3 == *(uint *)(iVar1 + 0x10);
        if (uVar3 < *(uint *)(iVar1 + 0x10)) {
          iVar4 = *(int *)(*(int *)(iVar1 + 0xc) + uVar3 * 4);
          if (*(int *)(iVar1 + 4) == DAT_005210a8) {
            uVar3 = **(uint **)(iVar1 + 8);
          }
          else {
            uVar3 = 0;
          }
          uVar15 = uVar3 == *(uint *)(iVar1 + 0x1c);
          if (uVar3 < *(uint *)(iVar1 + 0x1c)) {
            *(int *)((int)register0x00000054 + -0xc) = iVar4;
            *(uint *)((int)register0x00000054 + -0x24) = uVar3;
            iVar6 = *(int *)(*(int *)(iVar1 + 0x18) + uVar3 * 4);
            iVar8 = *(int *)(iVar6 + 4);
            *(int *)((int)register0x00000054 + -4) = iVar8;
            iVar7 = *(int *)(iVar6 + 8);
            *(int *)((int)register0x00000054 + -0x1c) = iVar7;
            iVar6 = 0;
            while (iVar6 < iVar7) {
              *(int *)((int)register0x00000054 + -0x20) = iVar6;
              *(undefined4 *)((int)register0x00000054 + -0x54) = *(undefined4 *)(iVar8 + iVar6 * 4);
              *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
              k3c_internal_pkg_mcu___MCU_stepper__Set_trapq();
              iVar1 = *(int *)((int)register0x00000054 + 4);
              iVar4 = *(int *)((int)register0x00000054 + -0xc);
              uVar3 = *(uint *)((int)register0x00000054 + -0x24);
              iVar7 = *(int *)((int)register0x00000054 + -0x1c);
              iVar8 = *(int *)((int)register0x00000054 + -4);
              iVar6 = *(int *)((int)register0x00000054 + -0x20) + 1;
            }
            iVar7 = *(int *)((int)register0x00000054 + -8);
            uVar9 = *(undefined4 *)(iVar7 + 0x11c);
            *(undefined4 *)((int)register0x00000054 + -0x34) = uVar9;
            uVar10 = *(undefined4 *)(iVar7 + 0x120);
            *(undefined4 *)((int)register0x00000054 + -0x14) = uVar10;
            iVar8 = *(int *)(iVar4 + 4);
            *(int *)((int)register0x00000054 + -4) = iVar8;
            piVar12 = *(int **)(iVar4 + 8);
            *(int **)((int)register0x00000054 + -0x1c) = piVar12;
            iVar6 = 0;
            while (iVar6 < (int)piVar12) {
              *(int *)((int)register0x00000054 + -0x20) = iVar6;
              *(undefined4 *)((int)register0x00000054 + -0x54) = *(undefined4 *)(iVar8 + iVar6 * 4);
              *(undefined4 *)((int)register0x00000054 + -0x50) = uVar9;
              *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar10;
              k3c_internal_pkg_mcu___MCU_stepper__Set_trapq();
              iVar1 = *(int *)((int)register0x00000054 + 4);
              iVar4 = *(int *)((int)register0x00000054 + -0xc);
              uVar3 = *(uint *)((int)register0x00000054 + -0x24);
              iVar7 = *(int *)((int)register0x00000054 + -8);
              uVar9 = *(undefined4 *)((int)register0x00000054 + -0x34);
              uVar10 = *(undefined4 *)((int)register0x00000054 + -0x14);
              iVar8 = *(int *)((int)register0x00000054 + -4);
              piVar12 = *(int **)((int)register0x00000054 + -0x1c);
              iVar6 = *(int *)((int)register0x00000054 + -0x20) + 1;
            }
            uVar15 = uVar3 == *(uint *)(iVar1 + 0x1c);
            if (uVar3 < *(uint *)(iVar1 + 0x1c)) {
              iVar1 = *(int *)(iVar1 + 0x18);
              if (*DAT_005210ac != 0) {
                FUN_0009db64();
                *piVar12 = extraout_r2;
                piVar12[1] = *(int *)(iVar1 + extraout_r3 * 4);
                iVar4 = extraout_r2;
                uVar3 = extraout_r3;
              }
              *(int *)(iVar1 + uVar3 * 4) = iVar4;
              iVar1 = *(int *)(iVar7 + 0x24);
              uVar9 = *(undefined4 *)(iVar7 + 0x20);
              if (iVar1 == 0) {
                uVar11 = 0;
                uVar13 = 0;
                iVar1 = 0;
                uVar10 = uVar9;
              }
              else {
                *(int *)((int)register0x00000054 + -0x28) = iVar1;
                *(undefined4 *)((int)register0x00000054 + -0x10) = uVar9;
                *(undefined4 *)((int)register0x00000054 + -0x54) = uVar9;
                *(int *)((int)register0x00000054 + -0x50) = iVar1;
                *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
                *(int *)((int)register0x00000054 + -0x48) = iVar1;
                *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_005210b0;
                FUN_000987f4();
                uVar9 = *(undefined4 *)((int)register0x00000054 + -0x40);
                uVar11 = *(undefined4 *)((int)register0x00000054 + -0x3c);
                uVar13 = *(undefined4 *)((int)register0x00000054 + -0x38);
                uVar10 = *(undefined4 *)((int)register0x00000054 + -0x10);
                iVar1 = *(int *)((int)register0x00000054 + -0x28);
              }
              *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar13;
              *(undefined4 *)((int)register0x00000054 + -0x18) = uVar9;
              *(undefined4 *)((int)register0x00000054 + -0x30) = uVar11;
              *(undefined4 *)((int)register0x00000054 + -0x54) = uVar9;
              *(undefined4 *)((int)register0x00000054 + -0x50) = uVar10;
              *(int *)((int)register0x00000054 + -0x4c) = iVar1 << 3;
              FUN_0009e3a4();
              (*(code *)**(undefined4 **)(*(int *)((int)register0x00000054 + -0xc) + 0x24))();
              uVar2 = *(uint *)((int)register0x00000054 + -0x30);
              uVar3 = *(uint *)((int)register0x00000054 + -0x24);
              uVar15 = uVar2 == uVar3;
              if (uVar3 < uVar2) {
                iVar1 = *(int *)((int)register0x00000054 + -0x18);
                *(undefined8 *)(iVar1 + uVar3 * 8) =
                     *(undefined8 *)((int)register0x00000054 + -0x54);
                *(undefined4 *)((int)register0x00000054 + -0x54) =
                     *(undefined4 *)((int)register0x00000054 + -8);
                *(int *)((int)register0x00000054 + -0x50) = iVar1;
                *(uint *)((int)register0x00000054 + -0x4c) = uVar2;
                *(undefined4 *)((int)register0x00000054 + -0x48) =
                     *(undefined4 *)((int)register0x00000054 + -0x2c);
                *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_005210a0;
                *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
                k3c_internal_pkg_toolhead___Toolhead__Set_position();
                uVar2 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x38);
                uVar3 = *(uint *)((int)register0x00000054 + -0x24);
                uVar15 = uVar3 == uVar2;
                if (uVar3 < uVar2) {
                  iVar1 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x34);
                  uVar2 = *(uint *)(iVar1 + uVar3 * 0xc + 4);
                  pdVar5 = *(double **)(iVar1 + uVar3 * 0xc);
                  uVar15 = uVar2 == 0;
                  if (!(bool)uVar15) {
                    uVar15 = uVar2 == 1;
                    if (1 < uVar2) {
                      if (*pdVar5 <= pdVar5[1]) {
                        dVar16 = *(double *)(*(int *)((int)register0x00000054 + -0xc) + 0x3c);
                        *pdVar5 = *(double *)(*(int *)((int)register0x00000054 + -0xc) + 0x34);
                        pdVar5[1] = dVar16;
                      }
                      return;
                    }
                    FUN_0009dbd4(1,1);
                  }
                  FUN_0009dbd4(0,0);
                  uVar3 = extraout_r2_00;
                }
                FUN_0009dbd4(uVar3);
              }
              FUN_0009dbd4();
              uVar3 = extraout_r3_00;
            }
            FUN_0009dbd4(uVar3);
            uVar3 = extraout_r3_01;
          }
          FUN_0009dbd4(uVar3);
          uVar3 = extraout_r2_01;
        }
        uVar17 = FUN_0009dbd4(uVar3);
      }
      *(undefined8 *)((int)register0x00000054 + -0x54) = uVar17;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_005210b4;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x58);
      if ((bool)uVar15) {
        register0x00000054 = (BADSPACEBASE *)puVar14;
      }
    }
    unaff_lr = 0x521090;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CartKinematics).Get_axis_range @ 005210b8 (size 84) */

void k3c_internal_pkg_motion___CartKinematics__Get_axis_range(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  undefined8 uVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      uVar3 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x1c);
      uVar1 = *(uint *)((int)register0x00000054 + 8);
      bVar5 = uVar1 == uVar3;
      if (uVar1 < uVar3) {
        iVar2 = *(int *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x18) + uVar1 * 4);
        uVar6 = *(undefined8 *)(iVar2 + 0x3c);
        *(undefined8 *)((int)register0x00000054 + 0xc) = *(undefined8 *)(iVar2 + 0x34);
        *(undefined8 *)((int)register0x00000054 + 0x14) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x005210f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0xc))();
        return;
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x521108;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CartKinematics).Cmd_SET_DUAL_CARRIAGE @ 0052110c (size 144) */

void k3c_internal_pkg_motion___CartKinematics__Cmd_SET_DUAL_CARRIAGE(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_gcode___GCodeCommand__Get_int();
  k3c_internal_pkg_motion___CartKinematics__Activate_carriage();
  return;
}



/* k3c/internal/pkg/motion.Load_kinematics_cartesian @ 005211a4 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_Load_kinematics_cartesian(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x5211e4;
    FUN_0009bf64();
  }
  k3c_internal_pkg_motion_NewCartKinematics();
  in_stack_0000000c = _UNK_005211ec;
                    /* WARNING: Could not recover jumptable at 0x005211d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.NewCorexyKinematics @ 005211f0 (size 4580) */

void k3c_internal_pkg_motion_NewCorexyKinematics(undefined4 param_1)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *extraout_r1;
  int iVar5;
  undefined4 *extraout_r1_00;
  undefined4 *extraout_r1_01;
  undefined4 *extraout_r1_02;
  byte *pbVar6;
  int iVar7;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  undefined *extraout_r1_07;
  undefined *extraout_r1_08;
  undefined4 *puVar8;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *extraout_r2_01;
  code *pcVar9;
  byte *pbVar10;
  byte *extraout_r2_02;
  int iVar11;
  int extraout_r2_03;
  int extraout_r2_04;
  undefined4 uVar12;
  uint extraout_r2_05;
  undefined *extraout_r2_06;
  undefined4 *extraout_r2_07;
  int extraout_r2_08;
  int extraout_r2_09;
  uint extraout_r2_10;
  uint uVar13;
  undefined8 *extraout_r2_11;
  undefined8 *extraout_r2_12;
  uint extraout_r2_13;
  uint extraout_r2_14;
  undefined *extraout_r2_15;
  undefined *puVar14;
  undefined *extraout_r2_16;
  undefined4 uVar15;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  int extraout_r3_03;
  int extraout_r3_04;
  uint uVar16;
  int extraout_r3_05;
  int extraout_r3_06;
  undefined8 *puVar17;
  int extraout_r3_07;
  int extraout_r3_08;
  undefined4 uVar18;
  undefined *puVar19;
  undefined1 *puVar20;
  int *piVar21;
  undefined *puVar22;
  int iVar23;
  byte *unaff_r8;
  int unaff_r10;
  uint uVar24;
  undefined1 *puVar25;
  undefined4 unaff_lr;
  undefined1 uVar26;
  undefined8 uVar27;
  
code_r0x005211f0:
  if ((undefined1 *)((int)register0x00000054 + -0xec) <= *(undefined1 **)(unaff_r10 + 8))
  goto LAB_0052244c;
  puVar25 = (undefined1 *)((int)register0x00000054 + -0x16c);
  *(undefined4 *)((int)register0x00000054 + -0x16c) = unaff_lr;
  *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005219c4;
  FUN_00022cf8();
  puVar4 = *(undefined4 **)((int)register0x00000054 + -0x164);
  puVar8 = *(undefined4 **)((int)register0x00000054 + 8);
  uVar15 = *puVar8;
  if (*(int *)PTR_DAT_005219c8 == 0) {
    uVar18 = *(undefined4 *)((int)register0x00000054 + 4);
  }
  else {
    FUN_0009db64();
    *(undefined4 *)unaff_r8 = extraout_r3;
    uVar18 = *(undefined4 *)((int)register0x00000054 + 4);
    *(undefined4 *)(unaff_r8 + 4) = uVar18;
    puVar4 = extraout_r1;
    puVar8 = extraout_r2;
    uVar15 = extraout_r3;
  }
  *(undefined4 **)((int)register0x00000054 + -0xb8) = puVar4;
  *puVar4 = uVar15;
  puVar4[0x13] = uVar18;
  FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x84),puVar8,puVar4);
  *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
  *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_005219cc;
  *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
  *(undefined **)((int)register0x00000054 + -0x7c) = PTR_DAT_005219d0;
  *(undefined4 *)((int)register0x00000054 + -0x70) = 1;
  *(undefined **)((int)register0x00000054 + -0x74) = PTR_DAT_005219d4;
  iVar5 = 0;
  uVar15 = 0;
  puVar22 = PTR_DAT_005219d8;
  unaff_r8 = (byte *)0x0;
  while( true ) {
    puVar19 = (undefined *)0x1;
    *(byte **)((int)register0x00000054 + -0x114) = unaff_r8;
    *(undefined4 *)((int)register0x00000054 + -0x110) = uVar15;
    *(undefined **)((int)register0x00000054 + -0x90) = puVar22;
    if (2 < iVar5) break;
    *(int *)((int)register0x00000054 + -0xd8) = iVar5;
    uVar15 = *(undefined4 *)((int)register0x00000054 + iVar5 * 8 + -0x84);
    uVar18 = *(undefined4 *)((int)register0x00000054 + iVar5 * 8 + -0x80);
    *(undefined4 *)((int)register0x00000054 + -0x168) = 0;
    *(undefined **)((int)register0x00000054 + -0x164) =
         PTR_s_stepper_DUMP_TMCdiag_pintoolhead_008216f7_0x1335_005219dc;
    *(undefined4 *)((int)register0x00000054 + -0x160) = 8;
    *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar15;
    *(undefined4 *)((int)register0x00000054 + -0x158) = uVar18;
    FUN_0007636c();
    *(undefined4 *)((int)register0x00000054 + -0xb4) =
         *(undefined4 *)((int)register0x00000054 + -0x154);
    *(undefined4 *)((int)register0x00000054 + -0x130) =
         *(undefined4 *)((int)register0x00000054 + -0x150);
    *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005219e0;
    FUN_00022cf8();
    puVar4 = *(undefined4 **)((int)register0x00000054 + -0x164);
    puVar8 = *(undefined4 **)((int)register0x00000054 + 8);
    uVar15 = *puVar8;
    if (*(int *)PTR_DAT_005219c8 != 0) {
      FUN_0009db54();
      *(undefined4 *)unaff_r8 = extraout_r3_00;
      puVar4 = extraout_r1_00;
      puVar8 = extraout_r2_00;
      uVar15 = extraout_r3_00;
    }
    *puVar4 = uVar15;
    uVar15 = puVar8[1];
    if (*(int *)PTR_DAT_005219c8 != 0) {
      FUN_0009db54();
      *(undefined4 *)unaff_r8 = extraout_r3_01;
      puVar4 = extraout_r1_01;
      puVar8 = extraout_r2_01;
      uVar15 = extraout_r3_01;
    }
    puVar4[1] = uVar15;
    uVar15 = puVar8[2];
    if (*(int *)PTR_DAT_005219c8 == 0) {
      uVar18 = *(undefined4 *)((int)register0x00000054 + -0xb4);
    }
    else {
      FUN_0009db64();
      *(undefined4 *)unaff_r8 = extraout_r3_02;
      uVar18 = *(undefined4 *)((int)register0x00000054 + -0xb4);
      *(undefined4 *)(unaff_r8 + 4) = uVar18;
      puVar4 = extraout_r1_02;
      uVar15 = extraout_r3_02;
    }
    puVar4[2] = uVar15;
    puVar4[4] = *(undefined4 *)((int)register0x00000054 + -0x130);
    puVar4[3] = uVar18;
    *(int *)((int)register0x00000054 + -0xdc) = *(int *)((int)register0x00000054 + -0x114) + 1;
    pcVar9 = (code *)**(undefined4 **)PTR_DAT_005219e4;
    *(undefined4 **)((int)register0x00000054 + -0x168) = puVar4;
    *(undefined1 *)((int)register0x00000054 + -0x164) = 1;
    *(undefined4 *)((int)register0x00000054 + -0x160) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x15c) = 0;
    *(undefined1 *)((int)register0x00000054 + -0x158) = 0;
    (*pcVar9)();
    uVar15 = *(undefined4 *)((int)register0x00000054 + -0x154);
    pbVar6 = *(byte **)((int)register0x00000054 + -0x110);
    pbVar10 = *(byte **)((int)register0x00000054 + -0xdc);
    if (pbVar6 < pbVar10) {
      *(undefined4 *)((int)register0x00000054 + -0x44) = uVar15;
      *(undefined4 *)((int)register0x00000054 + -0x168) =
           *(undefined4 *)((int)register0x00000054 + -0x90);
      *(byte **)((int)register0x00000054 + -0x164) = pbVar10;
      *(byte **)((int)register0x00000054 + -0x160) = pbVar6;
      *(undefined4 *)((int)register0x00000054 + -0x15c) = 1;
      *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_005219e8;
      FUN_000987f4();
      puVar22 = *(undefined **)((int)register0x00000054 + -0x154);
      pbVar10 = *(byte **)((int)register0x00000054 + -0x150);
      pbVar6 = *(byte **)((int)register0x00000054 + -0x14c);
      uVar15 = *(undefined4 *)((int)register0x00000054 + -0x44);
    }
    else {
      puVar22 = *(undefined **)((int)register0x00000054 + -0x90);
    }
    uVar27 = CONCAT44(pbVar6,uVar15);
    pbVar6 = pbVar10 + -1;
    if (*(int *)PTR_DAT_005219c8 != 0) {
      uVar27 = FUN_0009db64();
      *(int *)unaff_r8 = (int)uVar27;
      *(undefined4 *)(unaff_r8 + 4) = *(undefined4 *)(puVar22 + (int)pbVar6 * 4);
      pbVar10 = extraout_r2_02;
    }
    uVar15 = (undefined4)((ulonglong)uVar27 >> 0x20);
    *(int *)(puVar22 + (int)pbVar6 * 4) = (int)uVar27;
    iVar5 = *(int *)((int)register0x00000054 + -0xd8) + 1;
    unaff_r8 = pbVar10;
  }
  uVar26 = unaff_r8 == (byte *)0x1;
  if (unaff_r8 < (byte *)0x2) goto LAB_0052243c;
  iVar5 = *(int *)(puVar22 + 4);
  *(int *)((int)register0x00000054 + -0xbc) = iVar5;
  uVar15 = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)((int)register0x00000054 + -0x13c) = uVar15;
  *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005219ec;
  *(undefined4 *)((int)register0x00000054 + -0x164) = uVar15;
  *(undefined4 *)((int)register0x00000054 + -0x160) = uVar15;
  FUN_000986b8();
  *(undefined4 *)((int)register0x00000054 + -0x48) =
       *(undefined4 *)((int)register0x00000054 + -0x15c);
  uVar18 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xbc) + 4);
  uVar15 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xbc) + 8);
  *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005219ec;
  *(undefined4 *)((int)register0x00000054 + -0x164) =
       *(undefined4 *)((int)register0x00000054 + -0x15c);
  *(undefined4 *)((int)register0x00000054 + -0x160) =
       *(undefined4 *)((int)register0x00000054 + -0x13c);
  *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar18;
  *(undefined4 *)((int)register0x00000054 + -0x158) = uVar15;
  FUN_00093f5c();
  iVar5 = 0;
  while (iVar5 < *(int *)((int)register0x00000054 + -0x13c)) {
    *(int *)((int)register0x00000054 + -0xd8) = iVar5;
    iVar11 = **(int **)((int)register0x00000054 + -0x90);
    *(int *)((int)register0x00000054 + -0xc0) = iVar11;
    uVar15 = *(undefined4 *)(iVar11 + 0x14);
    *(undefined4 *)((int)register0x00000054 + -0xec) = uVar15;
    puVar19 = *(undefined **)(*(int *)((int)register0x00000054 + -0x48) + iVar5 * 4);
    *(undefined **)((int)register0x00000054 + -0xa4) = puVar19;
    *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005219f0;
    *(undefined4 *)((int)register0x00000054 + -0x164) = uVar15;
    *(undefined4 *)((int)register0x00000054 + -0x160) = uVar15;
    FUN_000986b8();
    *(undefined4 *)((int)register0x00000054 + -0x4c) =
         *(undefined4 *)((int)register0x00000054 + -0x15c);
    uVar18 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xc0) + 0x10);
    uVar15 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xc0) + 0x14);
    *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005219f0;
    *(undefined4 *)((int)register0x00000054 + -0x164) =
         *(undefined4 *)((int)register0x00000054 + -0x15c);
    *(undefined4 *)((int)register0x00000054 + -0x160) =
         *(undefined4 *)((int)register0x00000054 + -0xec);
    *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar18;
    *(undefined4 *)((int)register0x00000054 + -0x158) = uVar15;
    FUN_00093f5c();
    uVar26 = 1;
    if (*(int *)((int)register0x00000054 + -0xec) == 0) goto LAB_00522430;
    if ((*(int **)((int)register0x00000054 + -0x4c))[5] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = **(int **)((int)register0x00000054 + -0x4c);
    }
    puVar22 = *(undefined **)(iVar5 + 0xc);
    uVar26 = puVar22 == PTR_DAT_005219f4;
    puVar14 = PTR_DAT_005219f4;
    if (!(bool)uVar26) goto LAB_0052241c;
    uVar15 = *(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x44);
    *(int *)((int)register0x00000054 + -0xd8) = *(int *)((int)register0x00000054 + -0xd8) + 1;
    *(undefined4 *)((int)register0x00000054 + -0x168) = uVar15;
    *(undefined4 *)((int)register0x00000054 + -0x164) =
         *(undefined4 *)((int)register0x00000054 + -0xa4);
    k3c_internal_pkg_mcu___TriggerDispatch__add_stepper();
    iVar5 = *(int *)((int)register0x00000054 + -0xd8);
  }
  iVar5 = **(int **)((int)register0x00000054 + -0x90);
  *(int *)((int)register0x00000054 + -0xc4) = iVar5;
  uVar15 = *(undefined4 *)(iVar5 + 8);
  *(undefined4 *)((int)register0x00000054 + -0x140) = uVar15;
  *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005219ec;
  *(undefined4 *)((int)register0x00000054 + -0x164) = uVar15;
  *(undefined4 *)((int)register0x00000054 + -0x160) = uVar15;
  FUN_000986b8();
  *(undefined4 *)((int)register0x00000054 + -0x48) =
       *(undefined4 *)((int)register0x00000054 + -0x15c);
  uVar18 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xc4) + 4);
  uVar15 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xc4) + 8);
  *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005219ec;
  *(undefined4 *)((int)register0x00000054 + -0x164) =
       *(undefined4 *)((int)register0x00000054 + -0x15c);
  *(undefined4 *)((int)register0x00000054 + -0x160) =
       *(undefined4 *)((int)register0x00000054 + -0x140);
  *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar18;
  *(undefined4 *)((int)register0x00000054 + -0x158) = uVar15;
  FUN_00093f5c();
  iVar5 = 0;
  while (iVar5 < *(int *)((int)register0x00000054 + -0x140)) {
    *(int *)((int)register0x00000054 + -0xd8) = iVar5;
    iVar11 = *(int *)(*(int *)((int)register0x00000054 + -0x90) + 4);
    *(int *)((int)register0x00000054 + -200) = iVar11;
    uVar15 = *(undefined4 *)(iVar11 + 0x14);
    *(undefined4 *)((int)register0x00000054 + -0xf0) = uVar15;
    puVar19 = *(undefined **)(*(int *)((int)register0x00000054 + -0x48) + iVar5 * 4);
    *(undefined **)((int)register0x00000054 + -0xa8) = puVar19;
    *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005219f0;
    *(undefined4 *)((int)register0x00000054 + -0x164) = uVar15;
    *(undefined4 *)((int)register0x00000054 + -0x160) = uVar15;
    FUN_000986b8();
    *(undefined4 *)((int)register0x00000054 + -0x4c) =
         *(undefined4 *)((int)register0x00000054 + -0x15c);
    uVar18 = *(undefined4 *)(*(int *)((int)register0x00000054 + -200) + 0x10);
    uVar15 = *(undefined4 *)(*(int *)((int)register0x00000054 + -200) + 0x14);
    *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005219f0;
    *(undefined4 *)((int)register0x00000054 + -0x164) =
         *(undefined4 *)((int)register0x00000054 + -0x15c);
    *(undefined4 *)((int)register0x00000054 + -0x160) =
         *(undefined4 *)((int)register0x00000054 + -0xf0);
    *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar18;
    *(undefined4 *)((int)register0x00000054 + -0x158) = uVar15;
    FUN_00093f5c();
    uVar26 = 1;
    if (*(int *)((int)register0x00000054 + -0xf0) == 0) goto LAB_00522410;
    if ((*(int **)((int)register0x00000054 + -0x4c))[5] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = **(int **)((int)register0x00000054 + -0x4c);
    }
    puVar22 = *(undefined **)(iVar5 + 0xc);
    uVar26 = puVar22 == PTR_DAT_005219f4;
    puVar14 = PTR_DAT_005219f4;
    if (!(bool)uVar26) goto LAB_005223fc;
    uVar15 = *(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x44);
    *(int *)((int)register0x00000054 + -0xd8) = *(int *)((int)register0x00000054 + -0xd8) + 1;
    *(undefined4 *)((int)register0x00000054 + -0x168) = uVar15;
    *(undefined4 *)((int)register0x00000054 + -0x164) =
         *(undefined4 *)((int)register0x00000054 + -0xa8);
    k3c_internal_pkg_mcu___TriggerDispatch__add_stepper();
    iVar5 = *(int *)((int)register0x00000054 + -0xd8);
  }
  iVar5 = *(int *)((int)register0x00000054 + -0x114);
  iVar11 = *(int *)((int)register0x00000054 + -0xb8);
  *(int *)(iVar11 + 0x1c) = iVar5;
  *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)((int)register0x00000054 + -0x110);
  if (*(int *)PTR_DAT_005219c8 == 0) {
    uVar15 = *(undefined4 *)((int)register0x00000054 + -0x90);
  }
  else {
    FUN_0009db64();
    uVar15 = *(undefined4 *)((int)register0x00000054 + -0x90);
    *(undefined4 *)unaff_r8 = uVar15;
    *(undefined4 *)(unaff_r8 + 4) = *(undefined4 *)(extraout_r3_03 + 0x18);
    iVar5 = extraout_r2_03;
    iVar11 = extraout_r3_03;
  }
  *(undefined4 *)(iVar11 + 0x18) = uVar15;
  if (iVar5 < 3) {
    iVar5 = 3;
  }
  *(int *)((int)register0x00000054 + -0xf8) = iVar5;
  FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
  *(undefined4 *)((int)register0x00000054 + -0x14) = 1;
  *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_005219f8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = 1;
  *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_005219fc;
  *(undefined4 *)((int)register0x00000054 + -4) = 1;
  *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_005219d4;
  iVar5 = extraout_r2_04;
  iVar11 = extraout_r3_04;
  puVar19 = PTR_DAT_005219d4;
  for (uVar2 = 0; (int)uVar2 < iVar5; uVar2 = uVar2 + 1) {
    uVar26 = uVar2 == *(uint *)(iVar11 + 0x1c);
    if (*(uint *)(iVar11 + 0x1c) <= uVar2) goto LAB_005223f8;
    puVar19 = *(undefined **)(*(int *)(iVar11 + 0x18) + uVar2 * 4);
    uVar26 = uVar2 == 3;
    if (2 < uVar2) goto LAB_005223f0;
    *(uint *)((int)register0x00000054 + -0xf4) = uVar2;
    unaff_r8 = *(byte **)((int)register0x00000054 + uVar2 * 8 + -0x18);
    iVar23 = *(int *)((int)register0x00000054 + uVar2 * 8 + -0x14);
    if ((int)uVar2 < 2) {
      if (unaff_r8 == (byte *)0x0) {
        unaff_r8 = PTR_DAT_005219d8;
      }
      *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = 0;
      uVar26 = iVar23 == 0;
      if ((bool)uVar26) goto LAB_005223e4;
      bVar1 = *unaff_r8;
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00521a00;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_00521a04 + (uint)bVar1 * 8;
      iVar23 = *(int *)(puVar19 + 4);
      *(int *)((int)register0x00000054 + -0x50) = iVar23;
      puVar19 = *(undefined **)(puVar19 + 8);
      *(undefined **)((int)register0x00000054 + -0xd8) = puVar19;
      iVar7 = 0;
      unaff_r8 = PTR_DAT_00521a00;
      while (iVar7 < (int)puVar19) {
LAB_00522364:
        *(int *)((int)register0x00000054 + -0xdc) = iVar7;
        uVar15 = *(undefined4 *)(iVar23 + iVar7 * 4);
        *(undefined1 **)((int)register0x00000054 + -0x2c) =
             (undefined1 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x28) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x24) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x168) = uVar15;
        *(undefined **)((int)register0x00000054 + -0x164) =
             PTR_s_corexy_stepper_allockinematics_c_0082e789_0xb8_0052246c;
        *(undefined4 *)((int)register0x00000054 + -0x160) = 0x14;
        *(undefined **)((int)register0x00000054 + -0x15c) = PTR_DAT_00522460;
        *(undefined1 **)((int)register0x00000054 + -0x158) =
             (undefined1 *)((int)register0x00000054 + -0x2c);
        k3c_internal_pkg_mcu___MCU_stepper__Setup_itersolve();
        uVar2 = *(uint *)((int)register0x00000054 + -0xf4);
        iVar5 = *(int *)((int)register0x00000054 + -0xf8);
        iVar11 = *(int *)((int)register0x00000054 + -0xb8);
        puVar19 = *(undefined **)((int)register0x00000054 + -0xd8);
        iVar23 = *(int *)((int)register0x00000054 + -0x50);
        unaff_r8 = PTR_DAT_00522464;
        iVar7 = *(int *)((int)register0x00000054 + -0xdc) + 1;
      }
    }
    else {
      if (unaff_r8 == (byte *)0x0) {
        unaff_r8 = PTR_DAT_005219d8;
      }
      *(undefined4 *)((int)register0x00000054 + -0x34) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
      if (iVar23 == 0) {
        FUN_0009dbd4(0,0);
        iVar23 = 0;
        iVar7 = extraout_r1_06;
        goto LAB_00522364;
      }
      bVar1 = *unaff_r8;
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_00521a00;
      *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_00521a04 + (uint)bVar1 * 8;
      iVar7 = *(int *)(puVar19 + 4);
      *(int *)((int)register0x00000054 + -0x50) = iVar7;
      puVar19 = *(undefined **)(puVar19 + 8);
      *(undefined **)((int)register0x00000054 + -0xd8) = puVar19;
      iVar23 = 0;
      unaff_r8 = PTR_DAT_00521a00;
      while (iVar23 < (int)puVar19) {
        *(int *)((int)register0x00000054 + -0xdc) = iVar23;
        uVar15 = *(undefined4 *)(iVar7 + iVar23 * 4);
        *(undefined1 **)((int)register0x00000054 + -0x40) =
             (undefined1 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x168) = uVar15;
        *(undefined **)((int)register0x00000054 + -0x164) = PTR_DAT_0052245c;
        *(undefined4 *)((int)register0x00000054 + -0x160) = 0x17;
        *(undefined **)((int)register0x00000054 + -0x15c) = PTR_DAT_00522460;
        *(undefined1 **)((int)register0x00000054 + -0x158) =
             (undefined1 *)((int)register0x00000054 + -0x40);
        k3c_internal_pkg_mcu___MCU_stepper__Setup_itersolve();
        uVar2 = *(uint *)((int)register0x00000054 + -0xf4);
        iVar5 = *(int *)((int)register0x00000054 + -0xf8);
        iVar11 = *(int *)((int)register0x00000054 + -0xb8);
        puVar19 = *(undefined **)((int)register0x00000054 + -0xd8);
        iVar7 = *(int *)((int)register0x00000054 + -0x50);
        unaff_r8 = PTR_DAT_00522464;
        iVar23 = *(int *)((int)register0x00000054 + -0xdc) + 1;
      }
    }
  }
  iVar5 = *(int *)(iVar11 + 0x1c);
  uVar15 = *(undefined4 *)(iVar11 + 0x18);
  if (iVar5 == 0) {
    uVar12 = 0;
    puVar20 = (undefined1 *)((int)register0x00000054 + -0xd4);
    uVar18 = 0;
  }
  else {
    *(int *)((int)register0x00000054 + -0xd8) = iVar5;
    *(undefined4 *)((int)register0x00000054 + -0x54) = uVar15;
    *(undefined1 **)((int)register0x00000054 + -0x168) =
         (undefined1 *)((int)register0x00000054 + -0xd4);
    *(int *)((int)register0x00000054 + -0x164) = iVar5;
    *(undefined4 *)((int)register0x00000054 + -0x160) = 0;
    *(int *)((int)register0x00000054 + -0x15c) = iVar5;
    *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_005219e8;
    FUN_000987f4();
    puVar20 = *(undefined1 **)((int)register0x00000054 + -0x154);
    uVar12 = *(undefined4 *)((int)register0x00000054 + -0x150);
    uVar18 = *(undefined4 *)((int)register0x00000054 + -0xd8);
    uVar15 = *(undefined4 *)((int)register0x00000054 + -0x54);
  }
  *(undefined1 **)((int)register0x00000054 + -0x94) = puVar20;
  *(undefined4 *)((int)register0x00000054 + -0x118) = uVar12;
  *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005219e8;
  *(undefined1 **)((int)register0x00000054 + -0x164) = puVar20;
  *(undefined4 *)((int)register0x00000054 + -0x160) = uVar12;
  *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar15;
  *(undefined4 *)((int)register0x00000054 + -0x158) = uVar18;
  FUN_00093f5c();
  iVar11 = 0;
  uVar2 = 0;
  iVar5 = 0;
  uVar16 = 0;
  while( true ) {
    *(int *)((int)register0x00000054 + -0xd0) = iVar5;
    *(uint *)((int)register0x00000054 + -0x138) = uVar2;
    if (*(int *)((int)register0x00000054 + -0x118) <= iVar11) break;
    *(int *)((int)register0x00000054 + -0xd8) = iVar11;
    *(uint *)((int)register0x00000054 + -0x134) = uVar16;
    iVar5 = *(int *)(*(int *)((int)register0x00000054 + -0x94) + iVar11 * 4);
    *(int *)((int)register0x00000054 + -0x8c) = iVar5;
    uVar15 = *(undefined4 *)(iVar5 + 8);
    *(undefined4 *)((int)register0x00000054 + -0x144) = uVar15;
    *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005219ec;
    *(undefined4 *)((int)register0x00000054 + -0x164) = uVar15;
    *(undefined4 *)((int)register0x00000054 + -0x160) = uVar15;
    FUN_000986b8();
    *(undefined4 *)((int)register0x00000054 + -0x48) =
         *(undefined4 *)((int)register0x00000054 + -0x15c);
    uVar18 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x8c) + 4);
    uVar15 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x8c) + 8);
    *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005219ec;
    *(undefined4 *)((int)register0x00000054 + -0x164) =
         *(undefined4 *)((int)register0x00000054 + -0x15c);
    *(undefined4 *)((int)register0x00000054 + -0x160) =
         *(undefined4 *)((int)register0x00000054 + -0x144);
    *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar18;
    *(undefined4 *)((int)register0x00000054 + -0x158) = uVar15;
    FUN_00093f5c();
    uVar27 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x144),
                      *(undefined4 *)((int)register0x00000054 + -0x48));
    uVar2 = *(uint *)((int)register0x00000054 + -0x138);
    iVar5 = *(int *)((int)register0x00000054 + -0xd0);
    uVar16 = *(uint *)((int)register0x00000054 + -0x134);
    for (iVar23 = 0; iVar23 < (int)((ulonglong)uVar27 >> 0x20); iVar23 = iVar23 + 1) {
      uVar2 = uVar2 + 1;
      piVar21 = *(int **)((int)uVar27 + iVar23 * 4);
      if (uVar16 < uVar2) {
        *(int *)((int)register0x00000054 + -0xdc) = iVar23;
        *(int **)((int)register0x00000054 + -0xb0) = piVar21;
        *(int *)((int)register0x00000054 + -0x168) = iVar5;
        *(uint *)((int)register0x00000054 + -0x164) = uVar2;
        *(uint *)((int)register0x00000054 + -0x160) = uVar16;
        *(undefined4 *)((int)register0x00000054 + -0x15c) = 1;
        *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_005222d4;
        FUN_000987f4();
        iVar5 = *(int *)((int)register0x00000054 + -0x154);
        uVar2 = *(uint *)((int)register0x00000054 + -0x150);
        uVar16 = *(uint *)((int)register0x00000054 + -0x14c);
        uVar27 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x144),
                          *(undefined4 *)((int)register0x00000054 + -0x48));
        iVar23 = *(int *)((int)register0x00000054 + -0xdc);
        piVar21 = *(int **)((int)register0x00000054 + -0xb0);
      }
      unaff_r8 = (byte *)(uVar2 - 1);
      if (*(int *)PTR_DAT_005222a0 != 0) {
        uVar27 = FUN_0009db64();
        *(int **)unaff_r8 = piVar21;
        *(undefined4 *)(uVar2 + 3) = *(undefined4 *)(extraout_r3_08 + (int)unaff_r8 * 4);
        uVar2 = extraout_r2_14;
        iVar5 = extraout_r3_08;
      }
LAB_00522204:
      *(int **)(iVar5 + (int)unaff_r8 * 4) = piVar21;
    }
    iVar11 = *(int *)((int)register0x00000054 + -0xd8) + 1;
  }
  iVar11 = 0;
  while (iVar11 < (int)uVar2) {
    *(int *)((int)register0x00000054 + -0xd8) = iVar11;
    uVar15 = *(undefined4 *)(iVar5 + iVar11 * 4);
    *(undefined4 *)((int)register0x00000054 + -0xac) = uVar15;
    uVar18 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x11c);
    uVar12 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x120);
    *(undefined4 *)((int)register0x00000054 + -0x168) = uVar15;
    *(undefined4 *)((int)register0x00000054 + -0x164) = uVar18;
    *(undefined4 *)((int)register0x00000054 + -0x160) = uVar12;
    k3c_internal_pkg_mcu___MCU_stepper__Set_trapq();
    *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_00522298;
    FUN_00022cf8();
    uVar27 = CONCAT44(PTR_k3c_internal_pkg_mcu___MCU_stepper__Generate_steps_fm_0052229c,
                      *(undefined4 **)((int)register0x00000054 + -0x164));
    **(undefined4 **)((int)register0x00000054 + -0x164) =
         PTR_k3c_internal_pkg_mcu___MCU_stepper__Generate_steps_fm_0052229c;
    if (*(int *)PTR_DAT_005222a0 == 0) {
      uVar15 = *(undefined4 *)((int)register0x00000054 + -0xac);
    }
    else {
      uVar27 = FUN_0009db54();
      uVar15 = *(undefined4 *)((int)register0x00000054 + -0xac);
      *(undefined4 *)unaff_r8 = uVar15;
    }
    *(undefined4 *)((int)uVar27 + 4) = uVar15;
    iVar11 = *(int *)((int)register0x00000054 + 4);
    uVar16 = *(uint *)(iVar11 + 0x134);
    uVar2 = *(int *)(iVar11 + 0x130) + 1;
    iVar5 = *(int *)(iVar11 + 300);
    if (uVar16 < uVar2) {
      *(int *)((int)register0x00000054 + -0x58) = (int)uVar27;
      *(int *)((int)register0x00000054 + -0x168) = iVar5;
      *(uint *)((int)register0x00000054 + -0x164) = uVar2;
      *(uint *)((int)register0x00000054 + -0x160) = uVar16;
      *(undefined4 *)((int)register0x00000054 + -0x15c) = 1;
      *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_005222a4;
      FUN_000987f4();
      iVar5 = *(int *)((int)register0x00000054 + -0x154);
      uVar2 = *(uint *)((int)register0x00000054 + -0x150);
      iVar11 = *(int *)((int)register0x00000054 + 4);
      *(undefined4 *)(iVar11 + 0x134) = *(undefined4 *)((int)register0x00000054 + -0x14c);
      if (*(int *)PTR_DAT_005222a0 != 0) {
        FUN_0009db64();
        *(int *)unaff_r8 = extraout_r1_03;
        *(undefined4 *)(unaff_r8 + 4) = *(undefined4 *)(extraout_r3_05 + 300);
        iVar5 = extraout_r1_03;
        uVar2 = extraout_r2_05;
        iVar11 = extraout_r3_05;
      }
      *(int *)(iVar11 + 300) = iVar5;
      uVar27 = CONCAT44(PTR_k3c_internal_pkg_mcu___MCU_stepper__Generate_steps_fm_0052229c,
                        *(undefined4 *)((int)register0x00000054 + -0x58));
    }
    uVar15 = (undefined4)uVar27;
    *(uint *)(iVar11 + 0x130) = uVar2;
    if (*(int *)PTR_DAT_005222a0 != 0) {
      uVar15 = FUN_0009db64(uVar15,(int)((ulonglong)uVar27 >> 0x20));
      *(undefined4 *)unaff_r8 = uVar15;
      *(undefined4 *)(unaff_r8 + 4) = *(undefined4 *)(iVar5 + (uVar2 - 1) * 4);
    }
    *(undefined4 *)(iVar5 + (uVar2 - 1) * 4) = uVar15;
    uVar2 = *(uint *)((int)register0x00000054 + -0x138);
    iVar5 = *(int *)((int)register0x00000054 + -0xd0);
    iVar11 = *(int *)((int)register0x00000054 + -0xd8) + 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0xcc) =
       **(undefined4 **)((int)register0x00000054 + -0xb8);
  *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005222a8;
  FUN_00022cf8();
  puVar4 = *(undefined4 **)((int)register0x00000054 + -0x164);
  *puVar4 = PTR_k3c_internal_pkg_motion___CorexyKinematics__Motor_off_fm_005222ac;
  if (*(int *)PTR_DAT_005222a0 == 0) {
    uVar15 = *(undefined4 *)((int)register0x00000054 + -0xb8);
  }
  else {
    puVar4 = (undefined4 *)FUN_0009db54();
    uVar15 = *(undefined4 *)((int)register0x00000054 + -0xb8);
    *(undefined4 *)unaff_r8 = uVar15;
  }
  *(undefined4 **)((int)register0x00000054 + -0x5c) = puVar4;
  puVar4[1] = uVar15;
  uVar15 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xcc) + 0x24);
  *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005222b0;
  *(undefined4 *)((int)register0x00000054 + -0x164) = uVar15;
  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_005222b4;
  *(undefined4 *)((int)register0x00000054 + -0x15c) = 0x18;
  FUN_00093560();
  puVar4 = *(undefined4 **)((int)register0x00000054 + -0x158);
  iVar5 = puVar4[1];
  uVar2 = puVar4[2];
  puVar22 = (undefined *)*puVar4;
  if (*(char *)((int)register0x00000054 + -0x154) == '\0') {
    uVar2 = 0;
    iVar5 = 0;
    puVar22 = PTR_DAT_005222b8;
  }
  uVar16 = iVar5 + 1;
  if (uVar2 < uVar16) {
    *(undefined **)((int)register0x00000054 + -0x168) = puVar22;
    *(uint *)((int)register0x00000054 + -0x164) = uVar16;
    *(uint *)((int)register0x00000054 + -0x160) = uVar2;
    *(undefined4 *)((int)register0x00000054 + -0x15c) = 1;
    *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_005222bc;
    FUN_000987f4();
    puVar22 = *(undefined **)((int)register0x00000054 + -0x154);
    uVar16 = *(uint *)((int)register0x00000054 + -0x150);
    uVar2 = *(uint *)((int)register0x00000054 + -0x14c);
  }
  *(uint *)((int)register0x00000054 + -0xd8) = uVar16;
  *(uint *)((int)register0x00000054 + -0xdc) = uVar2;
  if (*(int *)PTR_DAT_005222a0 == 0) {
    uVar15 = *(undefined4 *)((int)register0x00000054 + -0x5c);
  }
  else {
    FUN_0009db64();
    uVar15 = *(undefined4 *)((int)register0x00000054 + -0x5c);
    *(undefined4 *)unaff_r8 = uVar15;
    *(undefined4 *)(unaff_r8 + 4) = *(undefined4 *)(extraout_r2_06 + (uVar16 - 1) * 4);
    puVar22 = extraout_r2_06;
  }
  *(undefined **)((int)register0x00000054 + -0x60) = puVar22;
  *(undefined4 *)(puVar22 + (uVar16 - 1) * 4) = uVar15;
  uVar15 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xcc) + 0x24);
  *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005222b0;
  *(undefined4 *)((int)register0x00000054 + -0x164) = uVar15;
  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_005222b4;
  *(undefined4 *)((int)register0x00000054 + -0x15c) = 0x18;
  FUN_00093a08();
  puVar4 = *(undefined4 **)((int)register0x00000054 + -0x158);
  puVar4[1] = *(undefined4 *)((int)register0x00000054 + -0xd8);
  puVar4[2] = *(undefined4 *)((int)register0x00000054 + -0xdc);
  if (*(int *)PTR_DAT_005222a0 == 0) {
    uVar15 = *(undefined4 *)((int)register0x00000054 + -0x60);
  }
  else {
    puVar4 = (undefined4 *)FUN_0009db64();
    uVar15 = *(undefined4 *)((int)register0x00000054 + -0x60);
    *(undefined4 *)unaff_r8 = uVar15;
    *(undefined4 *)(unaff_r8 + 4) = *puVar4;
  }
  *puVar4 = uVar15;
  *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005222c0;
  FUN_00022cf8();
  *(undefined4 *)((int)register0x00000054 + -100) =
       *(undefined4 *)((int)register0x00000054 + -0x164);
  *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005222c4;
  FUN_00022cf8();
  puVar3 = *(undefined8 **)((int)register0x00000054 + -0x164);
  *puVar3 = 0x3ff0000000000000;
  puVar3[1] = 0xbff0000000000000;
  puVar4 = *(undefined4 **)((int)register0x00000054 + -100);
  puVar4[1] = 2;
  puVar4[2] = 2;
  if (*(int *)PTR_DAT_005222a0 != 0) {
    puVar3 = (undefined8 *)FUN_0009db64();
    *(undefined8 **)unaff_r8 = puVar3;
    *(undefined4 *)(unaff_r8 + 4) = *extraout_r2_07;
    puVar4 = extraout_r2_07;
  }
  *puVar4 = puVar3;
  *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005222c4;
  FUN_00022cf8();
  puVar3 = *(undefined8 **)((int)register0x00000054 + -0x164);
  *puVar3 = 0x3ff0000000000000;
  puVar3[1] = 0xbff0000000000000;
  iVar5 = *(int *)((int)register0x00000054 + -100);
  *(undefined4 *)(iVar5 + 0x10) = 2;
  *(undefined4 *)(iVar5 + 0x14) = 2;
  if (*(int *)PTR_DAT_005222a0 != 0) {
    puVar3 = (undefined8 *)FUN_0009db64();
    *(undefined8 **)unaff_r8 = puVar3;
    *(undefined4 *)(unaff_r8 + 4) = *(undefined4 *)(extraout_r2_08 + 0xc);
    iVar5 = extraout_r2_08;
  }
  *(undefined8 **)(iVar5 + 0xc) = puVar3;
  *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005222c4;
  FUN_00022cf8();
  puVar3 = *(undefined8 **)((int)register0x00000054 + -0x164);
  *puVar3 = 0x3ff0000000000000;
  puVar3[1] = 0xbff0000000000000;
  uVar27 = CONCAT44(2,puVar3);
  iVar5 = *(int *)((int)register0x00000054 + -100);
  *(undefined4 *)(iVar5 + 0x1c) = 2;
  *(undefined4 *)(iVar5 + 0x20) = 2;
  if (*(int *)PTR_DAT_005222a0 == 0) {
    iVar11 = *(int *)((int)register0x00000054 + -0xb8);
  }
  else {
    uVar27 = FUN_0009db84();
    *(int *)unaff_r8 = (int)uVar27;
    *(undefined4 *)(unaff_r8 + 4) = *(undefined4 *)(extraout_r2_09 + 0x18);
    *(int *)(unaff_r8 + 8) = extraout_r2_09;
    iVar11 = *(int *)((int)register0x00000054 + -0xb8);
    *(undefined4 *)(unaff_r8 + 0xc) = *(undefined4 *)(iVar11 + 0x24);
    iVar5 = extraout_r2_09;
  }
  uVar18 = (undefined4)((ulonglong)uVar27 >> 0x20);
  *(int *)(iVar5 + 0x18) = (int)uVar27;
  *(undefined4 *)(iVar11 + 0x28) = 3;
  *(undefined4 *)(iVar11 + 0x2c) = 3;
  *(int *)(iVar11 + 0x24) = iVar5;
  iVar5 = *(int *)(iVar11 + 0x18);
  *(int *)((int)register0x00000054 + -0x54) = iVar5;
  iVar23 = *(int *)(iVar11 + 0x1c);
  *(int *)((int)register0x00000054 + -0xd8) = iVar23;
  uVar15 = 0;
  piVar21 = (int *)0x0;
  uVar2 = 0;
  pbVar10 = (byte *)0x0;
  while ((int)pbVar10 < iVar23) {
    *(int **)((int)register0x00000054 + -0x98) = piVar21;
    *(undefined4 *)((int)register0x00000054 + -0x11c) = uVar15;
    *(byte **)((int)register0x00000054 + -0xdc) = pbVar10;
    iVar5 = *(int *)(iVar5 + (int)pbVar10 * 4);
    *(uint *)((int)register0x00000054 + -0xe0) = uVar2 + 1;
    *(undefined8 *)((int)register0x00000054 + -0x108) = *(undefined8 *)(iVar5 + 0x34);
    *(undefined8 *)((int)register0x00000054 + -0x100) = *(undefined8 *)(iVar5 + 0x3c);
    *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005222c4;
    FUN_00022cf8(pbVar10);
    puVar3 = *(undefined8 **)((int)register0x00000054 + -0x164);
    *puVar3 = *(undefined8 *)((int)register0x00000054 + -0x108);
    puVar3[1] = *(undefined8 *)((int)register0x00000054 + -0x100);
    uVar16 = *(uint *)((int)register0x00000054 + -0x11c);
    uVar2 = *(uint *)((int)register0x00000054 + -0xe0);
    if (uVar16 < uVar2) {
      *(undefined8 **)((int)register0x00000054 + -0x68) = puVar3;
      *(undefined4 *)((int)register0x00000054 + -0x168) =
           *(undefined4 *)((int)register0x00000054 + -0x98);
      *(uint *)((int)register0x00000054 + -0x164) = uVar2;
      *(uint *)((int)register0x00000054 + -0x160) = uVar16;
      *(undefined4 *)((int)register0x00000054 + -0x15c) = 1;
      *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_005222c8;
      FUN_000987f4();
      piVar21 = *(int **)((int)register0x00000054 + -0x154);
      uVar2 = *(uint *)((int)register0x00000054 + -0x150);
      uVar16 = *(uint *)((int)register0x00000054 + -0x14c);
      puVar3 = *(undefined8 **)((int)register0x00000054 + -0x68);
    }
    else {
      piVar21 = *(int **)((int)register0x00000054 + -0x98);
    }
    uVar27 = CONCAT44(uVar16,puVar3);
    iVar5 = uVar2 * 0xc + -0xc;
    piVar21[uVar2 * 3 + -2] = 2;
    piVar21[uVar2 * 3 + -1] = 2;
    if (*(int *)PTR_DAT_005222a0 != 0) {
      uVar27 = FUN_0009db64();
      *(int *)unaff_r8 = (int)uVar27;
      *(undefined4 *)(unaff_r8 + 4) = *(undefined4 *)((int)piVar21 + extraout_r3_06);
      uVar2 = extraout_r2_10;
      iVar5 = extraout_r3_06;
    }
    uVar15 = (undefined4)((ulonglong)uVar27 >> 0x20);
    *(int *)((int)piVar21 + iVar5) = (int)uVar27;
    unaff_r8 = *(byte **)((int)register0x00000054 + -0xdc);
    iVar11 = *(int *)((int)register0x00000054 + -0xb8);
    iVar23 = *(int *)((int)register0x00000054 + -0xd8);
    uVar18 = 2;
    iVar5 = *(int *)((int)register0x00000054 + -0x54);
    pbVar10 = unaff_r8 + 1;
  }
  iVar5 = 0;
  uVar13 = 0;
  uVar16 = 0;
  iVar23 = 0;
  unaff_r8 = (byte *)0x0;
  pbVar10 = (byte *)0x0;
  while( true ) {
    *(byte **)((int)register0x00000054 + -300) = unaff_r8;
    *(int *)((int)register0x00000054 + -0xa0) = iVar23;
    if ((int)uVar2 < 1) break;
    uVar24 = piVar21[1];
    if (uVar24 == 0) goto LAB_005221f8;
    *(uint *)((int)register0x00000054 + -0xd8) = uVar2;
    *(int **)((int)register0x00000054 + -0x48) = piVar21;
    puVar3 = (undefined8 *)*piVar21;
    uVar13 = uVar13 + 1;
    uVar27 = *puVar3;
    if (uVar16 < uVar13) {
      *(uint *)((int)register0x00000054 + -0x10c) = uVar24;
      *(undefined8 **)((int)register0x00000054 + -0x88) = puVar3;
      *(byte **)((int)register0x00000054 + -0x128) = pbVar10;
      *(undefined8 *)((int)register0x00000054 + -0xe8) = uVar27;
      *(int *)((int)register0x00000054 + -0x168) = iVar5;
      *(uint *)((int)register0x00000054 + -0x164) = uVar13;
      *(uint *)((int)register0x00000054 + -0x160) = uVar16;
      *(undefined4 *)((int)register0x00000054 + -0x15c) = 1;
      *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_005222cc;
      FUN_000987f4();
      iVar5 = *(int *)((int)register0x00000054 + -0x154);
      uVar13 = *(uint *)((int)register0x00000054 + -0x150);
      uVar16 = *(uint *)((int)register0x00000054 + -0x14c);
      iVar11 = *(int *)((int)register0x00000054 + -0xb8);
      iVar23 = *(int *)((int)register0x00000054 + -0xa0);
      piVar21 = *(int **)((int)register0x00000054 + -0x48);
      uVar2 = *(uint *)((int)register0x00000054 + -0xd8);
      unaff_r8 = *(byte **)((int)register0x00000054 + -300);
      pbVar10 = *(byte **)((int)register0x00000054 + -0x128);
      uVar24 = *(uint *)((int)register0x00000054 + -0x10c);
      puVar3 = *(undefined8 **)((int)register0x00000054 + -0x88);
      uVar27 = *(undefined8 *)((int)register0x00000054 + -0xe8);
    }
    *(undefined8 *)(iVar5 + (uVar13 - 1) * 8) = uVar27;
    if (uVar24 < 2) goto LAB_005221ec;
    unaff_r8 = unaff_r8 + 1;
    uVar27 = puVar3[1];
    if (pbVar10 < unaff_r8) {
      *(int *)((int)register0x00000054 + -0x9c) = iVar5;
      *(uint *)((int)register0x00000054 + -0x124) = uVar13;
      *(uint *)((int)register0x00000054 + -0x120) = uVar16;
      *(undefined8 *)((int)register0x00000054 + -0xe8) = uVar27;
      *(int *)((int)register0x00000054 + -0x168) = iVar23;
      *(byte **)((int)register0x00000054 + -0x164) = unaff_r8;
      *(byte **)((int)register0x00000054 + -0x160) = pbVar10;
      *(undefined4 *)((int)register0x00000054 + -0x15c) = 1;
      *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_005222cc;
      FUN_000987f4();
      iVar23 = *(int *)((int)register0x00000054 + -0x154);
      unaff_r8 = *(byte **)((int)register0x00000054 + -0x150);
      pbVar10 = *(byte **)((int)register0x00000054 + -0x14c);
      iVar5 = *(int *)((int)register0x00000054 + -0x9c);
      uVar13 = *(uint *)((int)register0x00000054 + -0x124);
      iVar11 = *(int *)((int)register0x00000054 + -0xb8);
      uVar16 = *(uint *)((int)register0x00000054 + -0x120);
      piVar21 = *(int **)((int)register0x00000054 + -0x48);
      uVar2 = *(uint *)((int)register0x00000054 + -0xd8);
      uVar27 = *(undefined8 *)((int)register0x00000054 + -0xe8);
    }
    *(undefined8 *)(iVar23 + (int)(unaff_r8 + -1) * 8) = uVar27;
    piVar21 = piVar21 + 3;
    uVar2 = uVar2 - 1;
    uVar18 = 2;
  }
  *(int *)((int)register0x00000054 + -0x6c) = iVar5;
  *(uint *)((int)register0x00000054 + -0x124) = uVar13;
  *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005222d0;
  FUN_00022cf8(PTR_DAT_005222d0,uVar18,uVar13,iVar11);
  uVar2 = *(uint *)((int)register0x00000054 + -0x124);
  if (uVar2 != 0) {
    puVar3 = *(undefined8 **)((int)register0x00000054 + -0x164);
    puVar17 = *(undefined8 **)((int)register0x00000054 + -0x6c);
    *puVar3 = *puVar17;
    if (1 < uVar2) {
      puVar3[1] = puVar17[1];
      if (2 < uVar2) {
        puVar3[2] = puVar17[2];
        puVar3[3] = 0;
        iVar5 = *(int *)((int)register0x00000054 + -0xb8);
        *(undefined4 *)(iVar5 + 0x34) = 4;
        *(undefined4 *)(iVar5 + 0x38) = 4;
        if (*(int *)PTR_DAT_005222a0 != 0) {
          FUN_0009db64();
          *(undefined8 **)unaff_r8 = extraout_r2_11;
          *(undefined4 *)(unaff_r8 + 4) = *(undefined4 *)(extraout_r1_04 + 0x30);
          iVar5 = extraout_r1_04;
          puVar3 = extraout_r2_11;
        }
        *(undefined8 **)(iVar5 + 0x30) = puVar3;
        *(undefined **)((int)register0x00000054 + -0x168) = PTR_DAT_005222d0;
        FUN_00022cf8();
        uVar2 = *(uint *)((int)register0x00000054 + -300);
        if (uVar2 != 0) {
          puVar3 = *(undefined8 **)((int)register0x00000054 + -0x164);
          puVar17 = *(undefined8 **)((int)register0x00000054 + -0xa0);
          *puVar3 = *puVar17;
          if (1 < uVar2) {
            puVar3[1] = puVar17[1];
            if (2 < uVar2) {
              puVar3[2] = puVar17[2];
              puVar3[3] = 0;
              iVar5 = *(int *)((int)register0x00000054 + -0xb8);
              *(undefined4 *)(iVar5 + 0x40) = 4;
              *(undefined4 *)(iVar5 + 0x44) = 4;
              if (*(int *)PTR_DAT_005222a0 != 0) {
                FUN_0009db64();
                *(undefined8 **)unaff_r8 = extraout_r2_12;
                *(undefined4 *)(unaff_r8 + 4) = *(undefined4 *)(extraout_r1_05 + 0x3c);
                iVar5 = extraout_r1_05;
                puVar3 = extraout_r2_12;
              }
              *(undefined8 **)(iVar5 + 0x3c) = puVar3;
              *(int *)((int)register0x00000054 + 0xc) = iVar5;
              return;
            }
            FUN_0009dbd4(2,2);
          }
          FUN_0009dbd4(1,1);
        }
        FUN_0009dbd4(0,0);
      }
      FUN_0009dbd4(2,2);
    }
    FUN_0009dbd4(1,1);
  }
  FUN_0009dbd4(0,0);
LAB_005221ec:
  FUN_0009dbd4(1,1);
LAB_005221f8:
  uVar27 = FUN_0009dbd4(0,0);
  uVar2 = extraout_r2_13;
  iVar5 = extraout_r3_07;
  goto LAB_00522204;
LAB_005223e4:
  uVar2 = FUN_0009dbd4(0,0);
LAB_005223f0:
  FUN_0009dbd4(uVar2,3);
LAB_005223f8:
  FUN_0009dbd4();
  puVar22 = extraout_r1_07;
  puVar14 = extraout_r2_15;
LAB_005223fc:
  *(undefined **)((int)register0x00000054 + -0x168) = puVar22;
  *(undefined **)((int)register0x00000054 + -0x164) = puVar14;
  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00522470;
  FUN_000209b4();
LAB_00522410:
  FUN_0009dbd4(0,0);
  puVar22 = extraout_r1_08;
  puVar14 = extraout_r2_16;
LAB_0052241c:
  *(undefined **)((int)register0x00000054 + -0x168) = puVar22;
  *(undefined **)((int)register0x00000054 + -0x164) = puVar14;
  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00522470;
  FUN_000209b4();
LAB_00522430:
  FUN_0009dbd4(0,0);
LAB_0052243c:
  param_1 = FUN_0009dbd4(puVar19,unaff_r8);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x16c);
  if ((bool)uVar26) {
    register0x00000054 = (BADSPACEBASE *)puVar25;
  }
LAB_0052244c:
  unaff_lr = 0x522454;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x005211f0;
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Get_steppers @ 00522474 (size 508) */

void k3c_internal_pkg_motion___CorexyKinematics__Get_steppers(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r2;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 *extraout_r3;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar10;
  int in_stack_00000004;
  undefined1 *in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  undefined4 uStack_4c;
  undefined1 *puStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined1 auStack_1c [4];
  undefined1 *puStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x52266c;
    FUN_0009bf64();
  }
  if (*(int *)(in_stack_00000004 + 0x1c) == 0) {
    uStack_4c = *(undefined4 *)(in_stack_00000004 + 0x18);
    uVar3 = 0;
    puStack_c = auStack_1c;
  }
  else {
    uStack_4 = *(undefined4 *)(in_stack_00000004 + 0x18);
    FUN_000987f4();
    uStack_4c = uStack_4;
    uVar3 = uStack_40;
    puStack_c = puStack_44;
  }
  FUN_00093f5c();
  uVar2 = 0;
  uVar4 = 0;
  puVar5 = (undefined1 *)0x0;
  for (iVar1 = 0; iVar1 < (int)uVar3; iVar1 = iVar1 + 1) {
    iStack_14 = *(int *)(puStack_c + iVar1 * 4);
    uVar6 = *(undefined4 *)(iStack_14 + 8);
    puStack_18 = puVar5;
    FUN_000986b8();
    uStack_8 = uStack_4c;
    uStack_4c = *(undefined4 *)(iStack_14 + 4);
    FUN_00093f5c();
    uVar10 = CONCAT44(uVar6,uStack_8);
    puVar5 = puStack_18;
    for (iVar7 = 0; iVar7 < (int)((ulonglong)uVar10 >> 0x20); iVar7 = iVar7 + 1) {
      uVar4 = uVar4 + 1;
      uVar8 = *(undefined4 *)((int)uVar10 + iVar7 * 4);
      if (uVar2 < uVar4) {
        uStack_4c = 1;
        uStack_10 = uVar8;
        FUN_000987f4();
        uVar10 = CONCAT44(uVar6,uStack_8);
        uVar4 = uStack_40;
        puVar5 = puStack_44;
        uVar2 = uStack_3c;
        uVar8 = uStack_10;
      }
      puVar9 = (undefined4 *)(uVar4 - 1);
      if (*DAT_0052267c != 0) {
        uVar10 = FUN_0009db64();
        *puVar9 = uVar8;
        *(undefined4 *)(uVar4 + 3) = *(undefined4 *)(extraout_r3 + (int)puVar9 * 4);
        uVar4 = extraout_r2;
        puVar5 = extraout_r3;
      }
      *(undefined4 *)(puVar5 + (int)puVar9 * 4) = uVar8;
    }
  }
  in_stack_00000008 = puVar5;
  in_stack_0000000c = uVar4;
  in_stack_00000010 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x005225cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Set_rails_z_offset @ 00522680 (size 76) */

void k3c_internal_pkg_motion___CorexyKinematics__Set_rails_z_offset(undefined4 param_1)

{
  uint uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      uVar1 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x1c);
      bVar3 = uVar1 == 2;
      if (2 < uVar1) {
        *(undefined8 *)(*(int *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x18) + 8) + 0x2c)
             = *(undefined8 *)((int)register0x00000054 + 8);
                    /* WARNING: Could not recover jumptable at 0x005226b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0xc))();
        return;
      }
      param_1 = FUN_0009dbd4(2);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x5226c8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Set_limit_z @ 005226cc (size 96) */

void k3c_internal_pkg_motion___CorexyKinematics__Set_limit_z(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      uVar1 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x28);
      uVar4 = uVar1 == 2;
      if (2 < uVar1) {
        iVar2 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x24);
        uVar1 = *(uint *)(iVar2 + 0x1c);
        uVar4 = uVar1 == 1;
        if (1 < uVar1) {
          *(undefined8 *)(*(int *)(iVar2 + 0x18) + 8) = *(undefined8 *)((int)register0x00000054 + 8)
          ;
                    /* WARNING: Could not recover jumptable at 0x00522708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
        FUN_0009dbd4(1);
      }
      param_1 = FUN_0009dbd4(2);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x522728;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Calc_position @ 0052272c (size 456) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion___CorexyKinematics__Calc_position(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  uint uVar10;
  uint uVar11;
  int unaff_r10;
  undefined1 *puVar12;
  undefined4 unaff_lr;
  undefined1 uVar13;
  undefined8 uVar14;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar12 = (undefined1 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = unaff_lr;
      iVar4 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x18);
      *(int *)((int)register0x00000054 + -4) = iVar4;
      iVar1 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x1c);
      *(int *)((int)register0x00000054 + -0xc) = iVar1;
      iVar8 = 0;
      uVar10 = 0;
      uVar11 = 0;
      iVar6 = 0;
      while (*(int *)((int)register0x00000054 + -8) = iVar8, iVar6 < iVar1) {
        *(int *)((int)register0x00000054 + -0x10) = iVar6;
        *(uint *)((int)register0x00000054 + -0x20) = uVar11;
        iVar1 = *(int *)(iVar4 + iVar6 * 4);
        *(uint *)((int)register0x00000054 + -0x14) = uVar10 + 1;
        pcVar2 = (code *)**(undefined4 **)(iVar1 + 0x20);
        *(undefined1 *)((int)register0x00000054 + -0x48) = 0;
        (*pcVar2)();
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x44);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x48) = _UNK_005228f8;
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x40) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar5;
        FUN_00025f60();
        uVar14 = **(undefined8 **)((int)register0x00000054 + -0x38);
        uVar11 = *(uint *)((int)register0x00000054 + -0x20);
        uVar10 = *(uint *)((int)register0x00000054 + -0x14);
        if (uVar11 < uVar10) {
          *(undefined8 *)((int)register0x00000054 + -0x1c) = uVar14;
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(uint *)((int)register0x00000054 + -0x44) = uVar10;
          *(uint *)((int)register0x00000054 + -0x40) = uVar11;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x38) = _UNK_005228fc;
          FUN_000987f4();
          iVar8 = *(int *)((int)register0x00000054 + -0x34);
          uVar10 = *(uint *)((int)register0x00000054 + -0x30);
          uVar11 = *(uint *)((int)register0x00000054 + -0x2c);
          uVar14 = *(undefined8 *)((int)register0x00000054 + -0x1c);
        }
        else {
          iVar8 = *(int *)((int)register0x00000054 + -8);
        }
        *(undefined8 *)(iVar8 + (uVar10 - 1) * 8) = uVar14;
        iVar1 = *(int *)((int)register0x00000054 + -0xc);
        iVar4 = *(int *)((int)register0x00000054 + -4);
        iVar6 = *(int *)((int)register0x00000054 + -0x10) + 1;
      }
      *(uint *)((int)register0x00000054 + -0x24) = uVar10;
      *(undefined4 *)((int)register0x00000054 + -0x48) = _UNK_00522900;
      FUN_00022cf8();
      uVar11 = *(uint *)((int)register0x00000054 + -0x24);
      uVar13 = uVar11 == 0;
      if (!(bool)uVar13) {
        uVar13 = uVar11 == 1;
        if (1 < uVar11) {
          pdVar7 = *(double **)((int)register0x00000054 + -0x44);
          pdVar9 = *(double **)((int)register0x00000054 + -8);
          *pdVar7 = (*pdVar9 + pdVar9[1]) * 0.5;
          pdVar7[1] = (*pdVar9 - pdVar9[1]) * 0.5;
          uVar13 = uVar11 == 2;
          if (2 < uVar11) {
            pdVar7[2] = pdVar9[2];
            *(double **)((int)register0x00000054 + 0xc) = pdVar7;
            *(undefined4 *)((int)register0x00000054 + 0x10) = 3;
            *(undefined4 *)((int)register0x00000054 + 0x14) = 3;
                    /* WARNING: Could not recover jumptable at 0x005228bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x4c))();
            return;
          }
          FUN_0009dbd4(2,2);
        }
        FUN_0009dbd4(1,1);
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x4c);
      if ((bool)uVar13) {
        register0x00000054 = (BADSPACEBASE *)puVar12;
      }
    }
    unaff_lr = 0x5228f0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Set_position @ 00522904 (size 364) */

void k3c_internal_pkg_motion___CorexyKinematics__Set_position(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int unaff_r10;
  int iVar12;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  undefined8 *puVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  
  while (register0x00000054 <= *(undefined1 **)(unaff_r10 + 8)) {
LAB_00522a64:
    unaff_lr = 0x522a6c;
    param_1 = FUN_0009bf64(param_1);
  }
  puVar13 = (undefined1 *)((int)register0x00000054 + -0x30);
  *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
  iVar3 = *(int *)((int)register0x00000054 + 4);
  iVar5 = *(int *)(iVar3 + 0x18);
  *(int *)((int)register0x00000054 + -4) = iVar5;
  iVar6 = *(int *)(iVar3 + 0x1c);
  *(int *)((int)register0x00000054 + -0x10) = iVar6;
  uVar7 = *(undefined4 *)((int)register0x00000054 + 0x10);
  uVar8 = *(undefined4 *)((int)register0x00000054 + 0xc);
  uVar9 = *(undefined4 *)((int)register0x00000054 + 8);
  uVar1 = 0;
  do {
    if (iVar6 <= (int)uVar1) {
      return;
    }
    *(uint *)((int)register0x00000054 + -0x1c) = uVar1;
    iVar10 = *(int *)(iVar5 + uVar1 * 4);
    *(int *)((int)register0x00000054 + -0xc) = iVar10;
    iVar11 = *(int *)(iVar10 + 4);
    *(int *)((int)register0x00000054 + -8) = iVar11;
    iVar12 = *(int *)(iVar10 + 8);
    *(int *)((int)register0x00000054 + -0x14) = iVar12;
    iVar2 = 0;
    while (iVar2 < iVar12) {
      *(int *)((int)register0x00000054 + -0x18) = iVar2;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = *(undefined4 *)(iVar11 + iVar2 * 4);
      *(undefined4 *)((int)register0x00000054 + -0x28) = uVar9;
      *(undefined4 *)((int)register0x00000054 + -0x24) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x20) = uVar7;
      k3c_internal_pkg_mcu___MCU_stepper__Set_position();
      uVar1 = *(uint *)((int)register0x00000054 + -0x1c);
      iVar3 = *(int *)((int)register0x00000054 + 4);
      iVar5 = *(int *)((int)register0x00000054 + -4);
      iVar6 = *(int *)((int)register0x00000054 + -0x10);
      uVar7 = *(undefined4 *)((int)register0x00000054 + 0x10);
      uVar8 = *(undefined4 *)((int)register0x00000054 + 0xc);
      uVar9 = *(undefined4 *)((int)register0x00000054 + 8);
      iVar10 = *(int *)((int)register0x00000054 + -0xc);
      iVar11 = *(int *)((int)register0x00000054 + -8);
      iVar12 = *(int *)((int)register0x00000054 + -0x14);
      iVar2 = *(int *)((int)register0x00000054 + -0x18) + 1;
    }
    for (iVar2 = 0; iVar2 < *(int *)((int)register0x00000054 + 0x18); iVar2 = iVar2 + 1) {
      if (uVar1 == *(uint *)(*(int *)((int)register0x00000054 + 0x14) + iVar2 * 4)) {
        uVar16 = *(undefined8 *)(iVar10 + 0x3c);
        uVar15 = uVar1 == *(uint *)(iVar3 + 0x28);
        if (uVar1 < *(uint *)(iVar3 + 0x28)) {
          uVar4 = *(uint *)(*(int *)(iVar3 + 0x24) + uVar1 * 0xc + 4);
          puVar14 = *(undefined8 **)(*(int *)(iVar3 + 0x24) + uVar1 * 0xc);
          uVar15 = uVar4 == 0;
          if (!(bool)uVar15) {
            *puVar14 = *(undefined8 *)(iVar10 + 0x34);
            uVar15 = uVar4 == 1;
            if (1 < uVar4) {
              puVar14[1] = uVar16;
              iVar3 = *(int *)((int)register0x00000054 + 4);
              break;
            }
            FUN_0009dbd4(1,1);
          }
          FUN_0009dbd4(0,0);
        }
        param_1 = FUN_0009dbd4();
        register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
        if ((bool)uVar15) {
          register0x00000054 = (BADSPACEBASE *)puVar13;
        }
        goto LAB_00522a64;
      }
    }
    uVar1 = uVar1 + 1;
  } while( true );
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Clear_homing_state @ 00522a70 (size 312) */

void k3c_internal_pkg_motion___CorexyKinematics__Clear_homing_state(undefined4 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int extraout_r2;
  uint uVar5;
  int extraout_r3;
  int iVar6;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  bool bVar8;
  
code_r0x00522a70:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar7 = (undefined1 *)((int)register0x00000054 + -0x20);
    *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
    iVar1 = 0;
    do {
      if (2 < iVar1) {
        return;
      }
      *(int *)((int)register0x00000054 + -8) = iVar1;
      uVar3 = (uint)*(byte *)(DAT_00522bac + iVar1);
      if (uVar3 < 0x80) {
        iVar1 = iVar1 + 1;
      }
      else {
        *(int *)((int)register0x00000054 + -0x1c) = DAT_00522bac;
        *(undefined4 *)((int)register0x00000054 + -0x18) = 3;
        *(int *)((int)register0x00000054 + -0x14) = iVar1;
        FUN_0008aaa0();
        uVar3 = *(uint *)((int)register0x00000054 + -0x10);
        iVar1 = *(int *)((int)register0x00000054 + -0xc);
      }
      *(int *)((int)register0x00000054 + -4) = iVar1;
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(uint *)((int)register0x00000054 + -0x14) = uVar3;
      FUN_0014ee4c();
      if (-1 < *(int *)((int)register0x00000054 + -0x10)) {
        *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_00522bb0;
        FUN_00022cf8();
        puVar2 = *(undefined8 **)((int)register0x00000054 + -0x18);
        *puVar2 = 0x3ff0000000000000;
        puVar2[1] = 0xbff0000000000000;
        uVar3 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x28);
        uVar5 = *(uint *)((int)register0x00000054 + -8);
        bVar8 = uVar5 == uVar3;
        if (uVar3 <= uVar5) goto LAB_00522b8c;
        iVar4 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x24);
        iVar1 = uVar5 * 3;
        iVar6 = iVar4 + uVar5 * 0xc;
        *(undefined4 *)(iVar6 + 4) = 2;
        *(undefined4 *)(iVar6 + 8) = 2;
        if (*DAT_00522bb4 != 0) {
          puVar2 = (undefined8 *)FUN_0009db64();
          *unaff_r8 = puVar2;
          unaff_r8[1] = *(undefined4 *)(extraout_r2 + extraout_r3 * 4);
          iVar4 = extraout_r2;
          iVar1 = extraout_r3;
        }
        *(undefined8 **)(iVar4 + iVar1 * 4) = puVar2;
      }
      iVar1 = *(int *)((int)register0x00000054 + -4);
    } while( true );
  }
  goto LAB_00522b9c;
LAB_00522b8c:
  param_1 = FUN_0009dbd4(uVar5,uVar3);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
  if (bVar8) {
    register0x00000054 = (BADSPACEBASE *)puVar7;
  }
LAB_00522b9c:
  unaff_lr = 0x522ba4;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x00522a70;
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Note_z_not_homed @ 00522bb8 (size 148) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion___CorexyKinematics__Note_z_not_homed(undefined4 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  undefined8 uVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0xc) = _UNK_00522c50;
      FUN_00022cf8();
      puVar1 = *(undefined8 **)((int)register0x00000054 + -8);
      *puVar1 = 0x3ff0000000000000;
      puVar1[1] = 0xbff0000000000000;
      uVar3 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x28);
      bVar5 = uVar3 == 2;
      if (2 < uVar3) {
        iVar2 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x24);
        uVar6 = CONCAT44(iVar2,puVar1);
        *(undefined4 *)(iVar2 + 0x1c) = 2;
        *(undefined4 *)(iVar2 + 0x20) = 2;
        if (*_UNK_00522c54 != 0) {
          uVar6 = FUN_0009db64();
          *unaff_r8 = (int)uVar6;
          unaff_r8[1] = *(undefined4 *)((int)((ulonglong)uVar6 >> 0x20) + 0x18);
        }
        *(int *)((int)((ulonglong)uVar6 >> 0x20) + 0x18) = (int)uVar6;
                    /* WARNING: Could not recover jumptable at 0x00522c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(2,uVar3);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x522c48;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Home_axis @ 00522c58 (size 724) */

void k3c_internal_pkg_motion___CorexyKinematics__Home_axis(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *extraout_r1;
  int extraout_r2;
  undefined *puVar7;
  undefined *extraout_r2_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x2c)) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0xac);
      *(undefined4 *)((int)register0x00000054 + -0xac) = unaff_lr;
      *(undefined8 *)((int)register0x00000054 + -0x74) =
           *(undefined8 *)(*(int *)((int)register0x00000054 + 0x10) + 0x34);
      *(undefined8 *)((int)register0x00000054 + -0x7c) =
           *(undefined8 *)(*(int *)((int)register0x00000054 + 0x10) + 0x3c);
      uVar2 = FUN_0009dee8(0,(undefined1 *)((int)register0x00000054 + -0x54));
      *(undefined8 *)((int)register0x00000054 + -0x54) = *(undefined8 *)(extraout_r2 + 0x44);
      *(undefined8 *)((int)register0x00000054 + -0x4c) = *(undefined8 *)(extraout_r2 + 0x2c);
      *(undefined8 *)((int)register0x00000054 + -0x44) = *(undefined8 *)(extraout_r2 + 0x54);
      *(undefined8 *)((int)register0x00000054 + -0x3c) = *(undefined8 *)(extraout_r2 + 0x5c);
      *(undefined1 *)((int)register0x00000054 + -0x34) = *(undefined1 *)(extraout_r2 + 100);
      *(undefined8 *)((int)register0x00000054 + -0x30) = *(undefined8 *)(extraout_r2 + 0x4c);
      FUN_0009def4(uVar2,(undefined1 *)((int)register0x00000054 + -0x20));
      *(undefined8 *)((int)register0x00000054 + -0x5c) =
           *(undefined8 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0xa8) =
           *(undefined4 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0xa4) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      FUN_0008f6c0();
      uVar3 = *(uint *)((int)register0x00000054 + 0xc);
      uVar9 = uVar3 == 4;
      if (uVar3 < 4) {
        puVar4 = (undefined1 *)((int)register0x00000054 + -0x20);
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0xa0);
        *(undefined **)(puVar4 + uVar3 * 8) = PTR_DAT_00522f30;
        *(undefined4 *)(puVar4 + uVar3 * 8 + 4) = uVar2;
        *(undefined **)((int)register0x00000054 + -0xa8) = PTR_DAT_00522f34;
        *(undefined4 *)((int)register0x00000054 + -0xa4) = 4;
        *(undefined4 *)((int)register0x00000054 + -0xa0) = 4;
        *(undefined1 **)((int)register0x00000054 + -0x9c) = puVar4;
        FUN_00072580();
        puVar1 = PTR_DAT_00522f30;
        iVar5 = *(int *)((int)register0x00000054 + -0x98);
        *(int *)((int)register0x00000054 + -0x24) = iVar5;
        if (*(char *)((int)register0x00000054 + -0x34) == '\0') {
          puVar7 = *(undefined **)(iVar5 + *(int *)((int)register0x00000054 + 0xc) * 8);
          iVar5 = iVar5 + *(int *)((int)register0x00000054 + 0xc) * 8;
          uVar9 = puVar7 == PTR_DAT_00522f30;
          if ((bool)uVar9) {
            *(int *)((int)register0x00000054 + -0x28) = iVar5;
            *(double *)((int)register0x00000054 + -0x6c) =
                 **(double **)(iVar5 + 4) +
                 (*(double *)((int)register0x00000054 + -0x7c) -
                 *(double *)((int)register0x00000054 + -0x4c)) * 1.5;
            *(undefined4 *)((int)register0x00000054 + -0xa8) =
                 *(undefined4 *)((int)register0x00000054 + -0x6c);
            *(undefined4 *)((int)register0x00000054 + -0xa4) =
                 *(undefined4 *)((int)register0x00000054 + -0x68);
            FUN_0008f6c0();
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0xa0);
            *(undefined **)
             (*(int *)((int)register0x00000054 + -0x24) +
             *(int *)((int)register0x00000054 + 0xc) * 8) = PTR_DAT_00522f30;
            if (*(int *)PTR_DAT_00522f38 == 0) {
              iVar5 = *(int *)((int)register0x00000054 + -0x28);
            }
            else {
              uVar2 = FUN_0009db64();
              *unaff_r8 = uVar2;
              iVar5 = *(int *)((int)register0x00000054 + -0x28);
              unaff_r8[1] = *(undefined4 *)(iVar5 + 4);
            }
            *(undefined4 *)(iVar5 + 4) = uVar2;
            goto LAB_00522e68;
          }
          *(undefined **)((int)register0x00000054 + -0xa8) = puVar7;
          *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_00522f30;
          *(undefined **)((int)register0x00000054 + -0xa0) = PTR_DAT_00522f34;
          FUN_000209b4();
          puVar7 = extraout_r2_00;
        }
        else {
          puVar7 = *(undefined **)(iVar5 + *(int *)((int)register0x00000054 + 0xc) * 8);
          iVar5 = iVar5 + *(int *)((int)register0x00000054 + 0xc) * 8;
          uVar9 = 0;
          if (puVar7 == PTR_DAT_00522f30) {
            *(int *)((int)register0x00000054 + -0x28) = iVar5;
            *(double *)((int)register0x00000054 + -100) =
                 **(double **)(iVar5 + 4) -
                 (*(double *)((int)register0x00000054 + -0x4c) -
                 *(double *)((int)register0x00000054 + -0x74)) * 1.5;
            *(undefined4 *)((int)register0x00000054 + -0xa8) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + -0xa4) =
                 *(undefined4 *)((int)register0x00000054 + -0x60);
            FUN_0008f6c0();
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0xa0);
            *(undefined **)
             (*(int *)((int)register0x00000054 + -0x24) +
             *(int *)((int)register0x00000054 + 0xc) * 8) = PTR_DAT_00522f30;
            if (*(int *)PTR_DAT_00522f38 == 0) {
              iVar5 = *(int *)((int)register0x00000054 + -0x28);
            }
            else {
              uVar2 = FUN_0009db64();
              *unaff_r8 = uVar2;
              iVar5 = *(int *)((int)register0x00000054 + -0x28);
              unaff_r8[1] = *(undefined4 *)(iVar5 + 4);
            }
            *(undefined4 *)(iVar5 + 4) = uVar2;
LAB_00522e68:
            *(undefined **)((int)register0x00000054 + -0xa8) = PTR_DAT_00522f3c;
            FUN_00022cf8();
            puVar6 = *(undefined4 **)((int)register0x00000054 + -0xa4);
            if (*(int *)PTR_DAT_00522f38 == 0) {
              uVar2 = *(undefined4 *)((int)register0x00000054 + 0x10);
            }
            else {
              FUN_0009db54();
              uVar2 = *(undefined4 *)((int)register0x00000054 + 0x10);
              *unaff_r8 = uVar2;
              puVar6 = extraout_r1;
            }
            *puVar6 = uVar2;
            *(undefined4 *)((int)register0x00000054 + -0xa8) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 **)((int)register0x00000054 + -0xa4) = puVar6;
            *(undefined4 *)((int)register0x00000054 + -0xa0) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x9c) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + -0x24);
            *(undefined4 *)((int)register0x00000054 + -0x94) = 4;
            *(undefined4 *)((int)register0x00000054 + -0x90) = 4;
            *(undefined1 **)((int)register0x00000054 + -0x8c) =
                 (undefined1 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)((int)register0x00000054 + -0x88) = 4;
            *(undefined4 *)((int)register0x00000054 + -0x84) = 4;
            *(undefined1 *)((int)register0x00000054 + -0x80) =
                 *(undefined1 *)((int)register0x00000054 + 0x14);
            k3c_internal_pkg_toolhead___Homing__Home_rails();
            return;
          }
        }
        *(undefined **)((int)register0x00000054 + -0xa8) = puVar7;
        *(undefined **)((int)register0x00000054 + -0xa4) = puVar1;
        *(undefined **)((int)register0x00000054 + -0xa0) = PTR_DAT_00522f34;
        uVar3 = FUN_000209b4();
      }
      param_1 = FUN_0009dbd4(uVar3,4);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xac);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x522f28;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Home @ 00522f40 (size 272) */

void k3c_internal_pkg_motion___CorexyKinematics__Home(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      iVar4 = *(int *)((int)register0x00000054 + 4);
      if (*(undefined4 **)(iVar4 + 0x48) != (undefined4 *)0x0) {
        pcVar2 = (code *)**(undefined4 **)(iVar4 + 0x48);
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 8);
        (*pcVar2)();
                    /* WARNING: Could not recover jumptable at 0x00522f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      iVar5 = *(int *)((int)register0x00000054 + 8);
      iVar6 = *(int *)(iVar5 + 8);
      *(int *)((int)register0x00000054 + -4) = iVar6;
      iVar7 = *(int *)(iVar5 + 0xc);
      *(int *)((int)register0x00000054 + -0xc) = iVar7;
      iVar1 = 0;
LAB_00522fa8:
      if (iVar7 <= iVar1) {
        return;
      }
      *(int *)((int)register0x00000054 + -8) = iVar1;
      uVar8 = *(uint *)(iVar6 + iVar1 * 4);
      if (uVar8 == 2) {
        uVar10 = *(uint *)(iVar4 + 0x1c) == 2;
        if (*(uint *)(iVar4 + 0x1c) < 3) goto LAB_00523038;
        uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x18) + 8);
        *(int *)((int)register0x00000054 + -0x20) = iVar4;
        *(int *)((int)register0x00000054 + -0x1c) = iVar5;
        *(undefined4 *)((int)register0x00000054 + -0x18) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x14) = uVar3;
        *(undefined1 *)((int)register0x00000054 + -0x10) = 1;
        k3c_internal_pkg_motion___CorexyKinematics__Home_axis();
LAB_00522f90:
        iVar1 = *(int *)((int)register0x00000054 + -8) + 1;
        iVar7 = *(int *)((int)register0x00000054 + -0xc);
        iVar4 = *(int *)((int)register0x00000054 + 4);
        iVar5 = *(int *)((int)register0x00000054 + 8);
        iVar6 = *(int *)((int)register0x00000054 + -4);
        goto LAB_00522fa8;
      }
      uVar10 = uVar8 == *(uint *)(iVar4 + 0x1c);
      if (uVar8 < *(uint *)(iVar4 + 0x1c)) {
        uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x18) + uVar8 * 4);
        *(int *)((int)register0x00000054 + -0x20) = iVar4;
        *(int *)((int)register0x00000054 + -0x1c) = iVar5;
        *(uint *)((int)register0x00000054 + -0x18) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0x14) = uVar3;
        *(undefined1 *)((int)register0x00000054 + -0x10) = 0;
        k3c_internal_pkg_motion___CorexyKinematics__Home_axis();
        goto LAB_00522f90;
      }
      FUN_0009dbd4(uVar8);
LAB_00523038:
      param_1 = FUN_0009dbd4(2);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x52304c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Set_home_callback @ 00523050 (size 88) */

void k3c_internal_pkg_motion___CorexyKinematics__Set_home_callback(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (*DAT_005230ac != 0) {
    in_stack_00000004 = FUN_0009db64();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = *(undefined4 *)(in_stack_00000004 + 0x48);
  }
  *(undefined4 *)(in_stack_00000004 + 0x48) = in_stack_00000008;
  return;
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Motor_off @ 005230b0 (size 372) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion___CorexyKinematics__Motor_off(void)

{
  undefined8 *puVar1;
  int extraout_r1;
  int iVar2;
  undefined8 *extraout_r2;
  undefined8 *extraout_r2_00;
  undefined8 *puVar3;
  undefined8 *extraout_r2_01;
  undefined8 *extraout_r2_02;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined8 *puStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x523220;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  FUN_00022cf8();
  *puStack_c = 0x3ff0000000000000;
  puStack_c[1] = 0xbff0000000000000;
  *(undefined4 *)((int)puStack_c + 4) = 2;
  *(undefined4 *)(puStack_c + 1) = 2;
  puVar1 = puStack_c;
  puVar3 = puStack_c;
  if (*_UNK_00523230 != 0) {
    puVar1 = (undefined8 *)FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *(undefined4 *)extraout_r2;
    puVar3 = extraout_r2;
  }
  *(undefined8 **)puVar3 = puVar1;
  FUN_00022cf8();
  *puStack_c = 0x3ff0000000000000;
  puStack_c[1] = 0xbff0000000000000;
  *(undefined4 *)(puStack_c + 2) = 2;
  *(undefined4 *)((int)puStack_c + 0x14) = 2;
  puVar1 = puStack_c;
  puVar3 = puStack_c;
  if (*_UNK_00523230 != 0) {
    puVar1 = (undefined8 *)FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *(undefined4 *)((int)extraout_r2_00 + 0xc);
    puVar3 = extraout_r2_00;
  }
  *(undefined8 **)((int)puVar3 + 0xc) = puVar1;
  FUN_00022cf8();
  *puStack_c = 0x3ff0000000000000;
  puStack_c[1] = 0xbff0000000000000;
  *(undefined4 *)((int)puStack_c + 0x1c) = 2;
  *(undefined4 *)(puStack_c + 4) = 2;
  puVar1 = puStack_c;
  if (*_UNK_00523230 != 0) {
    puStack_c = (undefined8 *)FUN_0009db64();
    *unaff_r8 = puStack_c;
    unaff_r8[1] = *(undefined4 *)(extraout_r2_01 + 3);
    puVar1 = extraout_r2_01;
  }
  *(undefined8 **)(puVar1 + 3) = puStack_c;
  *(undefined4 *)(in_stack_00000004 + 0x28) = 3;
  *(undefined4 *)(in_stack_00000004 + 0x2c) = 3;
  iVar2 = in_stack_00000004;
  if (*_UNK_00523230 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r2_02;
    unaff_r8[1] = *(undefined4 *)(extraout_r1 + 0x24);
    iVar2 = extraout_r1;
    puVar1 = extraout_r2_02;
  }
  *(undefined8 **)(iVar2 + 0x24) = puVar1;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x00523214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Check_endstops @ 00523234 (size 380) */

void k3c_internal_pkg_motion___CorexyKinematics__Check_endstops(undefined4 param_1)

{
  double *pdVar1;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  uint uVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  double dVar9;
  undefined8 uVar10;
  
code_r0x00523234:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar7 = (undefined1 *)((int)register0x00000054 + -0xc);
    *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
    iVar3 = *(int *)((int)register0x00000054 + 8);
    pdVar1 = (double *)0x0;
    do {
      if (2 < (int)pdVar1) {
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        return;
      }
      pdVar4 = *(double **)(iVar3 + 0x40);
      uVar8 = pdVar1 == pdVar4;
      if (pdVar4 <= pdVar1) goto LAB_00523398;
      pdVar4 = (double *)(*(int *)(iVar3 + 0x3c) + (int)pdVar1 * 8);
      if (*pdVar4 == 0.0) {
        uVar10 = *(undefined8 *)PTR_DAT_005233b4;
      }
      else {
        uVar8 = pdVar1 == *(double **)(iVar3 + 0x14);
        if (*(double **)(iVar3 + 0x14) <= pdVar1) goto LAB_00523394;
        pdVar4 = *(double **)(*(int *)((int)register0x00000054 + 4) + 0x28);
        uVar8 = pdVar1 == pdVar4;
        if (pdVar4 <= pdVar1) goto LAB_0052338c;
        iVar5 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x24);
        uVar6 = *(uint *)(iVar5 + (int)pdVar1 * 0xc + 4);
        pdVar4 = *(double **)(iVar5 + (int)pdVar1 * 0xc);
        uVar8 = 1;
        if (uVar6 == 0) goto LAB_00523380;
        dVar9 = *(double *)(*(int *)(iVar3 + 0x10) + (int)pdVar1 * 8);
        if (*(double *)PTR_DAT_005233b4 < *pdVar4 - dVar9) goto LAB_0052330c;
        uVar8 = uVar6 == 1;
        if (uVar6 < 2) goto LAB_00523374;
        if (*(double *)PTR_DAT_005233b4 < dVar9 - pdVar4[1]) goto LAB_0052330c;
      }
      pdVar1 = (double *)((int)pdVar1 + 1);
    } while( true );
  }
  goto LAB_005233a4;
LAB_0052330c:
  uVar8 = uVar6 == 1;
  if (1 < uVar6) {
    if (*pdVar4 <= pdVar4[1]) {
      uVar2 = *(undefined4 *)PTR_DAT_005233c0;
      *(undefined **)((int)register0x00000054 + 0xc) = PTR_DAT_005233bc;
      *(undefined4 *)((int)register0x00000054 + 0x10) = uVar2;
      return;
    }
    uVar2 = *(undefined4 *)PTR_DAT_005233b8;
    *(undefined **)((int)register0x00000054 + 0xc) = PTR_DAT_005233bc;
    *(undefined4 *)((int)register0x00000054 + 0x10) = uVar2;
    return;
  }
  FUN_0009dbd4(1,1);
LAB_00523374:
  FUN_0009dbd4(1,1);
LAB_00523380:
  pdVar1 = (double *)FUN_0009dbd4(0,0);
LAB_0052338c:
  FUN_0009dbd4(pdVar1,pdVar4);
LAB_00523394:
  pdVar1 = (double *)FUN_0009dbd4();
LAB_00523398:
  param_1 = FUN_0009dbd4(pdVar1,pdVar4);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
  if ((bool)uVar8) {
    register0x00000054 = (BADSPACEBASE *)puVar7;
  }
LAB_005233a4:
  unaff_lr = 0x5233ac;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x00523234;
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Check_move @ 005233c4 (size 568) */

void k3c_internal_pkg_motion___CorexyKinematics__Check_move(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 8);
      uVar2 = *(uint *)(iVar1 + 0x14);
      uVar7 = uVar2 == 0;
      if (!(bool)uVar7) {
        uVar7 = uVar2 == 1;
        if (1 < uVar2) {
          iVar3 = *(int *)((int)register0x00000054 + 4);
          uVar2 = *(uint *)(iVar3 + 0x28);
          uVar7 = uVar2 == 0;
          if (!(bool)uVar7) {
            piVar4 = *(int **)(iVar3 + 0x24);
            uVar5 = piVar4[1];
            uVar7 = uVar5 == 0;
            if (!(bool)uVar7) {
              dVar8 = **(double **)(iVar1 + 0x10);
              dVar9 = *DAT_00523600;
              if (dVar9 < *(double *)*piVar4 - dVar8) {
LAB_0052349c:
                *(int *)((int)register0x00000054 + -0x20) = iVar3;
                *(int *)((int)register0x00000054 + -0x1c) = iVar1;
                k3c_internal_pkg_motion___CorexyKinematics__Check_endstops();
                iVar1 = *(int *)((int)register0x00000054 + -0x18);
                uVar7 = false;
                if (iVar1 == 0) {
                  iVar1 = *(int *)((int)register0x00000054 + 8);
                  iVar3 = *(int *)((int)register0x00000054 + 4);
LAB_005234bc:
                  uVar7 = *(uint *)(iVar1 + 0x40) == 2;
                  if (2 < *(uint *)(iVar1 + 0x40)) {
                    if (*(double *)(*(int *)(iVar1 + 0x3c) + 0x10) == 0.0) {
                      return;
                    }
                    *(int *)((int)register0x00000054 + -0x20) = iVar3;
                    *(int *)((int)register0x00000054 + -0x1c) = iVar1;
                    k3c_internal_pkg_motion___CorexyKinematics__Check_endstops();
                    iVar1 = *(int *)((int)register0x00000054 + 8);
                    uVar7 = *(uint *)(iVar1 + 0x40) == 2;
                    if (2 < *(uint *)(iVar1 + 0x40)) {
                      *(double *)((int)register0x00000054 + -8) =
                           *(double *)(iVar1 + 0x48) /
                           ABS(*(double *)(*(int *)(iVar1 + 0x3c) + 0x10));
                      uVar10 = *(undefined8 *)
                                (*(int *)(*(int *)((int)register0x00000054 + 4) + 0x4c) + 0x54);
                      *(undefined8 *)((int)register0x00000054 + -0x20) =
                           *(undefined8 *)
                            (*(int *)(*(int *)((int)register0x00000054 + 4) + 0x4c) + 0x5c);
                      *(undefined8 *)((int)register0x00000054 + -0x18) = uVar10;
                      FUN_000afda8();
                      dVar8 = *(double *)
                               (*(int *)(*(int *)((int)register0x00000054 + 4) + 0x4c) + 0x34);
                      *(undefined4 *)((int)register0x00000054 + -0x20) =
                           *(undefined4 *)((int)register0x00000054 + 8);
                      *(double *)((int)register0x00000054 + -0x1c) =
                           dVar8 * *(double *)((int)register0x00000054 + -8);
                      *(double *)((int)register0x00000054 + -0x14) =
                           *(double *)((int)register0x00000054 + -0x10) *
                           *(double *)((int)register0x00000054 + -8);
                      k3c_internal_pkg_toolhead___Move__Limit_speed();
                      return;
                    }
                    FUN_0009dbd4(2);
                  }
                  iVar1 = FUN_0009dbd4(2);
                }
                if (!(bool)uVar7) {
                  iVar1 = *(int *)(iVar1 + 4);
                }
                *(int *)((int)register0x00000054 + -0x20) = iVar1;
                *(undefined4 *)((int)register0x00000054 + -0x1c) =
                     *(undefined4 *)((int)register0x00000054 + -0x14);
                FUN_00095b00();
LAB_0052358c:
                FUN_0009dbd4(1,1);
LAB_00523598:
                FUN_0009dbd4(0,0);
LAB_005235a4:
                FUN_0009dbd4(1,1);
              }
              else {
                uVar7 = uVar5 == 1;
                if (1 < uVar5) {
                  if (dVar9 < dVar8 - ((double *)*piVar4)[1]) goto LAB_0052349c;
                  uVar7 = uVar2 == 1;
                  if (1 < uVar2) {
                    uVar2 = piVar4[4];
                    uVar7 = uVar2 == 0;
                    if (!(bool)uVar7) {
                      dVar8 = (*(double **)(iVar1 + 0x10))[1];
                      if (dVar9 < *(double *)piVar4[3] - dVar8) goto LAB_0052349c;
                      uVar7 = uVar2 == 1;
                      if (1 < uVar2) {
                        if (dVar9 < dVar8 - ((double *)piVar4[3])[1]) goto LAB_0052349c;
                        goto LAB_005234bc;
                      }
                      goto LAB_0052358c;
                    }
                    goto LAB_00523598;
                  }
                  goto LAB_005235a4;
                }
              }
              FUN_0009dbd4(1,1);
            }
            FUN_0009dbd4(0,0);
          }
          FUN_0009dbd4(0,0);
        }
        FUN_0009dbd4(1,1);
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x5235f8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Check_move_positon @ 00523604 (size 740) */

void k3c_internal_pkg_motion___CorexyKinematics__Check_move_positon(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_r2;
  uint extraout_r2_00;
  uint uVar4;
  uint extraout_r3;
  uint extraout_r3_00;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  double dVar10;
  undefined8 uVar11;
  
code_r0x00523604:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar8 = (undefined1 *)((int)register0x00000054 + -0x5c);
    *(undefined4 *)((int)register0x00000054 + -0x5c) = unaff_lr;
    uVar4 = *(uint *)((int)register0x00000054 + 0x18);
    uVar5 = *(uint *)((int)register0x00000054 + 0xc);
    uVar1 = 0;
    do {
      if (2 < (int)uVar1) {
        *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
        return;
      }
      uVar9 = uVar5 == uVar1;
      if (uVar5 <= uVar1) goto LAB_005238d0;
      uVar9 = uVar4 == uVar1;
      if (uVar4 <= uVar1) goto LAB_005238c8;
      dVar10 = *(double *)(*(int *)((int)register0x00000054 + 8) + uVar1 * 8);
      if (dVar10 == *(double *)(*(int *)((int)register0x00000054 + 0x14) + uVar1 * 8)) {
        uVar11 = *(undefined8 *)PTR_DAT_005238ec;
      }
      else {
        uVar3 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x28);
        uVar9 = uVar1 == uVar3;
        if (uVar3 <= uVar1) goto LAB_005238c4;
        iVar6 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x24);
        uVar3 = *(uint *)(iVar6 + uVar1 * 0xc + 4);
        pdVar7 = *(double **)(iVar6 + uVar1 * 0xc);
        uVar9 = 1;
        if (uVar3 == 0) goto LAB_005238b8;
        if (*(double *)PTR_DAT_005238ec < *pdVar7 - dVar10) goto LAB_005236d8;
        uVar9 = uVar3 == 1;
        if (uVar3 < 2) goto LAB_005238ac;
        if (*(double *)PTR_DAT_005238ec < dVar10 - pdVar7[1]) goto LAB_005236d8;
      }
      uVar1 = uVar1 + 1;
    } while( true );
  }
  goto LAB_005238dc;
LAB_005236d8:
  uVar9 = uVar3 == 1;
  if (1 < uVar3) {
    if (pdVar7[1] < *pdVar7) {
      uVar2 = *(undefined4 *)PTR_DAT_00523904;
      *(undefined **)((int)register0x00000054 + 0x20) = PTR_DAT_00523900;
      *(undefined4 *)((int)register0x00000054 + 0x24) = uVar2;
      return;
    }
    *(uint *)((int)register0x00000054 + -0x44) = uVar1;
    *(double **)((int)register0x00000054 + -0x24) =
         (double *)(*(int *)((int)register0x00000054 + 8) + uVar1 * 8);
    *(uint *)((int)register0x00000054 + -0x40) = uVar1 * 3;
    FUN_0009def4(0,(undefined1 *)((int)register0x00000054 + -0x20),uVar1);
    *(undefined4 *)((int)register0x00000054 + -0x58) = extraout_r2;
    FUN_00020ce0();
    *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_005238f0;
    *(undefined4 *)((int)register0x00000054 + -0x1c) =
         *(undefined4 *)((int)register0x00000054 + -0x54);
    uVar4 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x28);
    uVar9 = *(uint *)((int)register0x00000054 + -0x44) == uVar4;
    if (*(uint *)((int)register0x00000054 + -0x44) < uVar4) {
      iVar6 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x24);
      uVar5 = *(uint *)(iVar6 + *(int *)((int)register0x00000054 + -0x40) * 4 + 4);
      uVar9 = uVar5 == 0;
      if (!(bool)uVar9) {
        *(undefined8 *)((int)register0x00000054 + -0x2c) =
             **(undefined8 **)(iVar6 + *(int *)((int)register0x00000054 + -0x40) * 4);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        FUN_0008f6c0();
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_005238f4;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined8 *)((int)register0x00000054 + -0x34) =
             **(undefined8 **)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        FUN_0008f6c0();
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_005238f4;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        uVar4 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x28);
        uVar1 = *(uint *)((int)register0x00000054 + -0x44);
        uVar9 = uVar1 == uVar4;
        if (uVar1 < uVar4) {
          iVar6 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x24);
          uVar4 = *(uint *)(iVar6 + *(int *)((int)register0x00000054 + -0x40) * 4 + 4);
          uVar9 = uVar4 == 1;
          if (1 < uVar4) {
            *(undefined8 *)((int)register0x00000054 + -0x3c) =
                 *(undefined8 *)
                  (*(int *)(iVar6 + *(int *)((int)register0x00000054 + -0x40) * 4) + 8);
            *(undefined4 *)((int)register0x00000054 + -0x58) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            *(undefined4 *)((int)register0x00000054 + -0x54) =
                 *(undefined4 *)((int)register0x00000054 + -0x38);
            FUN_0008f6c0();
            *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_005238f4;
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_005238f8;
            *(undefined4 *)((int)register0x00000054 + -0x54) = 0x47;
            *(undefined1 **)((int)register0x00000054 + -0x50) =
                 (undefined1 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)((int)register0x00000054 + -0x4c) = 4;
            *(undefined4 *)((int)register0x00000054 + -0x48) = 4;
            k3c_internal_pkg_logger_Errorf();
            uVar2 = *(undefined4 *)PTR_DAT_005238fc;
            *(undefined **)((int)register0x00000054 + 0x20) = PTR_DAT_00523900;
            *(undefined4 *)((int)register0x00000054 + 0x24) = uVar2;
            return;
          }
          FUN_0009dbd4(1,uVar4);
          uVar4 = extraout_r2_00;
          uVar1 = extraout_r3;
        }
        FUN_0009dbd4(uVar1,uVar4);
      }
      FUN_0009dbd4(0,0);
    }
    FUN_0009dbd4();
  }
  FUN_0009dbd4(1,1);
LAB_005238ac:
  FUN_0009dbd4(1,1);
LAB_005238b8:
  FUN_0009dbd4(0,0);
LAB_005238c4:
  uVar1 = FUN_0009dbd4();
  uVar4 = extraout_r3_00;
LAB_005238c8:
  uVar1 = FUN_0009dbd4(uVar1,uVar4);
LAB_005238d0:
  param_1 = FUN_0009dbd4(uVar1,uVar5);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x5c);
  if ((bool)uVar9) {
    register0x00000054 = (BADSPACEBASE *)puVar8;
  }
LAB_005238dc:
  unaff_lr = 0x5238e4;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x00523604;
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Get_status @ 00523908 (size 856) */

void k3c_internal_pkg_motion___CorexyKinematics__Get_status(undefined4 param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r2;
  uint uVar5;
  uint extraout_r3;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  double *unaff_r8;
  undefined4 uVar9;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  uint uVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x60) = unaff_lr;
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
      uVar3 = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 1;
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00523c64;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 1;
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00523c68;
      *(undefined4 *)((int)register0x00000054 + -4) = 1;
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00523c6c;
      iVar4 = *(int *)((int)register0x00000054 + 4);
      pdVar1 = (double *)0x0;
      uVar5 = 0;
      iVar6 = 0;
      uVar7 = 0;
      while( true ) {
        uVar13 = CONCAT44(uVar3,pdVar1);
        if (2 < (int)pdVar1) {
          *(int *)((int)register0x00000054 + -0x24) = iVar6;
          *(uint *)((int)register0x00000054 + -0x30) = uVar7;
          *(uint *)((int)register0x00000054 + -0x2c) = uVar5;
          FUN_000908bc();
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
          FUN_0014f8fc();
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00523c78;
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00523c7c;
          *(undefined4 *)((int)register0x00000054 + -0x50) = 10;
          FUN_00093a08();
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x4c);
          *puVar2 = PTR_DAT_00523c70;
          if (*(int *)PTR_DAT_00523c74 == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x20);
          }
          else {
            puVar2 = (undefined4 *)FUN_0009db64();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)unaff_r8 = uVar3;
            *(undefined4 *)((int)unaff_r8 + 4) = puVar2[1];
          }
          puVar2[1] = uVar3;
          iVar4 = *(int *)((int)register0x00000054 + 4);
          uVar3 = *(undefined4 *)(iVar4 + 0x34);
          uVar8 = *(undefined4 *)(iVar4 + 0x38);
          *(undefined4 *)((int)register0x00000054 + -0x5c) = *(undefined4 *)(iVar4 + 0x30);
          *(undefined4 *)((int)register0x00000054 + -0x58) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x54) = uVar8;
          FUN_0008f820();
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00523c78;
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x54) =
               PTR_s_axis_minimumaxis_maximumMIN_MSG__008262d0_0x401_00523c80;
          *(undefined4 *)((int)register0x00000054 + -0x50) = 0xc;
          FUN_00093a08();
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x4c);
          *puVar2 = PTR_DAT_00523c84;
          if (*(int *)PTR_DAT_00523c74 == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x20);
          }
          else {
            puVar2 = (undefined4 *)FUN_0009db64();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)unaff_r8 = uVar3;
            *(undefined4 *)((int)unaff_r8 + 4) = puVar2[1];
          }
          puVar2[1] = uVar3;
          iVar4 = *(int *)((int)register0x00000054 + 4);
          uVar8 = *(undefined4 *)(iVar4 + 0x40);
          uVar3 = *(undefined4 *)(iVar4 + 0x44);
          *(undefined4 *)((int)register0x00000054 + -0x5c) = *(undefined4 *)(iVar4 + 0x3c);
          *(undefined4 *)((int)register0x00000054 + -0x58) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x54) = uVar3;
          FUN_0008f820();
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00523c78;
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x54) =
               PTR_s_axis_maximumMIN_MSG_TIMEREG_MOD__008262d0_0x40d_00523c88;
          *(undefined4 *)((int)register0x00000054 + -0x50) = 0xc;
          FUN_00093a08();
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x4c);
          *puVar2 = PTR_DAT_00523c84;
          if (*(int *)PTR_DAT_00523c74 == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x20);
          }
          else {
            puVar2 = (undefined4 *)FUN_0009db64();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)unaff_r8 = uVar3;
            *(undefined4 *)((int)unaff_r8 + 4) = puVar2[1];
          }
          puVar2[1] = uVar3;
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          return;
        }
        unaff_r8 = *(double **)(iVar4 + 0x28);
        uVar9 = *(undefined4 *)((int)register0x00000054 + (int)pdVar1 * 8 + -0x18);
        uVar8 = *(undefined4 *)((int)register0x00000054 + (int)pdVar1 * 8 + -0x14);
        uVar12 = pdVar1 == unaff_r8;
        if (unaff_r8 <= pdVar1) goto LAB_00523c48;
        uVar11 = *(uint *)(*(int *)(iVar4 + 0x24) + (int)pdVar1 * 0xc + 4);
        unaff_r8 = *(double **)(*(int *)(iVar4 + 0x24) + (int)pdVar1 * 0xc);
        uVar12 = 1;
        if (uVar11 == 0) goto LAB_00523c3c;
        uVar12 = uVar11 == 1;
        if (uVar11 < 2) break;
        if (*unaff_r8 <= unaff_r8[1]) {
          uVar7 = uVar7 + 1;
          if (uVar5 < uVar7) {
            *(double **)((int)register0x00000054 + -0x34) = pdVar1;
            *(undefined4 *)((int)register0x00000054 + -0x28) = uVar9;
            *(undefined4 *)((int)register0x00000054 + -0x38) = uVar8;
            *(int *)((int)register0x00000054 + -0x5c) = iVar6;
            *(uint *)((int)register0x00000054 + -0x58) = uVar7;
            *(uint *)((int)register0x00000054 + -0x54) = uVar5;
            *(undefined4 *)((int)register0x00000054 + -0x50) = uVar3;
            *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00523c70;
            FUN_000987f4();
            iVar6 = *(int *)((int)register0x00000054 + -0x48);
            uVar7 = *(uint *)((int)register0x00000054 + -0x44);
            uVar5 = *(uint *)((int)register0x00000054 + -0x40);
            pdVar1 = *(double **)((int)register0x00000054 + -0x34);
            uVar3 = 1;
            iVar4 = *(int *)((int)register0x00000054 + 4);
            uVar8 = *(undefined4 *)((int)register0x00000054 + -0x38);
            uVar9 = *(undefined4 *)((int)register0x00000054 + -0x28);
          }
          uVar13 = CONCAT44(uVar3,pdVar1);
          unaff_r8 = (double *)(uVar7 - 1);
          *(undefined4 *)(iVar6 + (int)unaff_r8 * 8 + 4) = uVar8;
          if (*(int *)PTR_DAT_00523c74 != 0) {
            uVar13 = FUN_0009db64();
            *(undefined4 *)unaff_r8 = uVar9;
            *(undefined4 *)(uVar7 + 3) = *(undefined4 *)(iVar6 + (int)unaff_r8 * 8);
            iVar4 = extraout_r2;
            uVar5 = extraout_r3;
          }
          *(undefined4 *)(iVar6 + (int)unaff_r8 * 8) = uVar9;
        }
        uVar3 = (undefined4)((ulonglong)uVar13 >> 0x20);
        pdVar1 = (double *)((int)uVar13 + 1);
      }
      FUN_0009dbd4(uVar3);
LAB_00523c3c:
      pdVar1 = (double *)FUN_0009dbd4(0,0);
LAB_00523c48:
      param_1 = FUN_0009dbd4(pdVar1,unaff_r8);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x60);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x523c5c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Get_axis_range @ 00523c8c (size 84) */

void k3c_internal_pkg_motion___CorexyKinematics__Get_axis_range(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  undefined8 uVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      uVar3 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x1c);
      uVar1 = *(uint *)((int)register0x00000054 + 8);
      bVar5 = uVar1 == uVar3;
      if (uVar1 < uVar3) {
        iVar2 = *(int *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x18) + uVar1 * 4);
        uVar6 = *(undefined8 *)(iVar2 + 0x3c);
        *(undefined8 *)((int)register0x00000054 + 0xc) = *(undefined8 *)(iVar2 + 0x34);
        *(undefined8 *)((int)register0x00000054 + 0x14) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00523cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0xc))();
        return;
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x523cdc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion.Load_kinematics_corexy @ 00523ce0 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_Load_kinematics_corexy(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x523d20;
    FUN_0009bf64();
  }
  k3c_internal_pkg_motion_NewCorexyKinematics();
  in_stack_0000000c = _UNK_00523d28;
                    /* WARNING: Could not recover jumptable at 0x00523d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*NoneKinematics).Get_steppers @ 00523d2c (size 24) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion___NoneKinematics__Get_steppers(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  uStack00000008 = _UNK_00523d48;
  uStack0000000c = 0;
  uStack00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x00523d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*NoneKinematics).Calc_position @ 00523d4c (size 64) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion___NoneKinematics__Calc_position(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x523d88;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  in_stack_00000010 = 3;
  in_stack_00000014 = 3;
                    /* WARNING: Could not recover jumptable at 0x00523d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*NoneKinematics).Set_position @ 00523d94 (size 4) */

void k3c_internal_pkg_motion___NoneKinematics__Set_position(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00523d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*NoneKinematics).Note_z_not_homed @ 00523da4 (size 4) */

void k3c_internal_pkg_motion___NoneKinematics__Note_z_not_homed(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00523da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*NoneKinematics).Home_axis @ 00523db4 (size 4) */

void k3c_internal_pkg_motion___NoneKinematics__Home_axis(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00523db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*NoneKinematics).Home @ 00523dc4 (size 4) */

void k3c_internal_pkg_motion___NoneKinematics__Home(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00523dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*NoneKinematics).Motor_off @ 00523dd4 (size 20) */

void k3c_internal_pkg_motion___NoneKinematics__Motor_off(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  
  uStack00000014 = 0;
  uStack00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x00523de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*NoneKinematics).Check_endstops @ 00523de8 (size 20) */

void k3c_internal_pkg_motion___NoneKinematics__Check_endstops(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  uStack0000000c = 0;
  uStack00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x00523df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*NoneKinematics).Check_move @ 00523dfc (size 4) */

void k3c_internal_pkg_motion___NoneKinematics__Check_move(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00523dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*NoneKinematics).Get_status @ 00523e0c (size 404) */

void k3c_internal_pkg_motion___NoneKinematics__Get_status(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 *puStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x523f9c;
    FUN_0009bf64();
  }
  FUN_000908bc();
  FUN_00093a08();
  *puStack_c = PTR_DAT_00523fac;
  puVar1 = puStack_c;
  if (*(int *)PTR_DAT_00523fb0 != 0) {
    uVar2 = FUN_0009db54(puStack_c,puStack_c[1]);
    puVar1 = (undefined4 *)uVar2;
    *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
  }
  puVar1[1] = PTR_SUB_00523fb4;
  FUN_0008f820();
  FUN_00093a08();
  *puStack_c = PTR_DAT_00523fbc;
  puVar1 = puStack_c;
  if (*(int *)PTR_DAT_00523fb0 != 0) {
    puVar1 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = 10;
    unaff_r8[1] = puVar1[1];
  }
  puVar1[1] = 10;
  FUN_0008f820();
  FUN_00093a08();
  *puStack_c = PTR_DAT_00523fbc;
  if (*(int *)PTR_DAT_00523fb0 != 0) {
    puStack_c = (undefined4 *)FUN_0009db64();
    *unaff_r8 = 0xc;
    unaff_r8[1] = puStack_c[1];
  }
  puStack_c[1] = 0xc;
                    /* WARNING: Could not recover jumptable at 0x00523f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*NoneKinematics).Activate_carriage @ 00523fc4 (size 4) */

void k3c_internal_pkg_motion___NoneKinematics__Activate_carriage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00523fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*NoneKinematics).Cmd_SET_DUAL_CARRIAGE @ 00523fd4 (size 4) */

void k3c_internal_pkg_motion___NoneKinematics__Cmd_SET_DUAL_CARRIAGE(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00523fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.Load_kinematics_none @ 00523fe4 (size 276) */

void k3c_internal_pkg_motion_Load_kinematics_none(void)

{
  undefined4 uVar1;
  undefined4 *extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *puStack_40;
  undefined4 uStack_38;
  undefined *puStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *puStack_40 = 0;
  uVar1 = *(undefined4 *)(in_stack_00000004 + 0x13c);
  if (*(int *)(in_stack_00000004 + 0x138) == 0) {
    FUN_0009def4(0,&puStack_20);
    uStack_1c = 2;
    puStack_20 = PTR_DAT_00524100;
    uStack_14 = 2;
    puStack_18 = PTR_DAT_00524100;
    uStack_c = 2;
    puStack_10 = PTR_DAT_00524100;
    uStack_4 = 2;
    puStack_8 = PTR_DAT_00524100;
    uVar1 = 4;
  }
  FUN_000986b8();
  puStack_40[1] = uVar1;
  puStack_40[2] = uVar1;
  if (*(int *)PTR_DAT_00524108 != 0) {
    uStack_38 = FUN_0009db64();
    *unaff_r8 = uStack_38;
    unaff_r8[1] = *extraout_r2;
    puStack_40 = extraout_r2;
  }
  *puStack_40 = uStack_38;
  FUN_00093f5c();
  return;
}



/* k3c/internal/pkg/motion.init @ 00524110 (size 92) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_init(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  double dVar1;
  undefined8 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x524168;
    FUN_0009bf64();
  }
  func_0x0009bba4();
  FUN_000af8bc();
  dVar1 = (uStack_8 * 4.0) / *_UNK_00524170;
  *_UNK_00524174 = dVar1;
  *_UNK_00524178 = dVar1 * 4.0;
                    /* WARNING: Could not recover jumptable at 0x0052415c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion.(*CorexyKinematics).Motor_off-fm @ 0052417c (size 420) */

void k3c_internal_pkg_motion___CorexyKinematics__Motor_off_fm(void)

{
  undefined8 *puVar1;
  int *piVar2;
  int extraout_r1;
  undefined8 *extraout_r2;
  undefined8 *extraout_r2_00;
  undefined8 *puVar3;
  undefined8 *extraout_r2_01;
  undefined8 *extraout_r2_02;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_14;
  undefined8 *puStack_10;
  int iStack_8;
  undefined8 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar2 = *(int **)(unaff_r10 + 0x10);
  if ((piVar2 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar2)) {
    *piVar2 = (int)&uStack_14;
  }
  iStack_8 = *(int *)(unaff_r7 + 4);
  uStack_14 = DAT_00524324;
  FUN_00022cf8();
  puStack_4 = puStack_10;
  uStack_14 = DAT_00524328;
  FUN_00022cf8();
  *puStack_10 = 0x3ff0000000000000;
  puStack_10[1] = 0xbff0000000000000;
  *(undefined4 *)((int)puStack_4 + 4) = 2;
  *(undefined4 *)(puStack_4 + 1) = 2;
  puVar1 = puStack_10;
  puVar3 = puStack_4;
  if (*DAT_0052432c != 0) {
    puVar1 = (undefined8 *)FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *(undefined4 *)extraout_r2;
    puVar3 = extraout_r2;
  }
  *(undefined8 **)puVar3 = puVar1;
  uStack_14 = DAT_00524328;
  FUN_00022cf8();
  *puStack_10 = 0x3ff0000000000000;
  puStack_10[1] = 0xbff0000000000000;
  *(undefined4 *)(puStack_4 + 2) = 2;
  *(undefined4 *)((int)puStack_4 + 0x14) = 2;
  puVar1 = puStack_10;
  puVar3 = puStack_4;
  if (*DAT_0052432c != 0) {
    puVar1 = (undefined8 *)FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *(undefined4 *)((int)extraout_r2_00 + 0xc);
    puVar3 = extraout_r2_00;
  }
  *(undefined8 **)((int)puVar3 + 0xc) = puVar1;
  uStack_14 = DAT_00524328;
  FUN_00022cf8();
  *puStack_10 = 0x3ff0000000000000;
  puStack_10[1] = 0xbff0000000000000;
  *(undefined4 *)((int)puStack_4 + 0x1c) = 2;
  *(undefined4 *)(puStack_4 + 4) = 2;
  puVar1 = puStack_4;
  if (*DAT_0052432c != 0) {
    puStack_10 = (undefined8 *)FUN_0009db64();
    *unaff_r8 = puStack_10;
    unaff_r8[1] = *(undefined4 *)(extraout_r2_01 + 3);
    puVar1 = extraout_r2_01;
  }
  *(undefined8 **)(puVar1 + 3) = puStack_10;
  *(undefined4 *)(iStack_8 + 0x28) = 3;
  *(undefined4 *)(iStack_8 + 0x2c) = 3;
  if (*DAT_0052432c != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r2_02;
    unaff_r8[1] = *(undefined4 *)(extraout_r1 + 0x24);
    iStack_8 = extraout_r1;
    puVar1 = extraout_r2_02;
  }
  *(undefined8 **)(iStack_8 + 0x24) = puVar1;
  return;
}



/* k3c/internal/pkg/motion.(*CartKinematics).Motor_off-fm @ 00524330 (size 420) */

void k3c_internal_pkg_motion___CartKinematics__Motor_off_fm(void)

{
  undefined8 *puVar1;
  int *piVar2;
  int extraout_r1;
  undefined8 *extraout_r2;
  undefined8 *extraout_r2_00;
  undefined8 *puVar3;
  undefined8 *extraout_r2_01;
  undefined8 *extraout_r2_02;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_14;
  undefined8 *puStack_10;
  int iStack_8;
  undefined8 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar2 = *(int **)(unaff_r10 + 0x10);
  if ((piVar2 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar2)) {
    *piVar2 = (int)&uStack_14;
  }
  iStack_8 = *(int *)(unaff_r7 + 4);
  uStack_14 = DAT_005244d8;
  FUN_00022cf8();
  puStack_4 = puStack_10;
  uStack_14 = DAT_005244dc;
  FUN_00022cf8();
  *puStack_10 = 0x3ff0000000000000;
  puStack_10[1] = 0xbff0000000000000;
  *(undefined4 *)((int)puStack_4 + 4) = 2;
  *(undefined4 *)(puStack_4 + 1) = 2;
  puVar1 = puStack_10;
  puVar3 = puStack_4;
  if (*DAT_005244e0 != 0) {
    puVar1 = (undefined8 *)FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *(undefined4 *)extraout_r2;
    puVar3 = extraout_r2;
  }
  *(undefined8 **)puVar3 = puVar1;
  uStack_14 = DAT_005244dc;
  FUN_00022cf8();
  *puStack_10 = 0x3ff0000000000000;
  puStack_10[1] = 0xbff0000000000000;
  *(undefined4 *)(puStack_4 + 2) = 2;
  *(undefined4 *)((int)puStack_4 + 0x14) = 2;
  puVar1 = puStack_10;
  puVar3 = puStack_4;
  if (*DAT_005244e0 != 0) {
    puVar1 = (undefined8 *)FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *(undefined4 *)((int)extraout_r2_00 + 0xc);
    puVar3 = extraout_r2_00;
  }
  *(undefined8 **)((int)puVar3 + 0xc) = puVar1;
  uStack_14 = DAT_005244dc;
  FUN_00022cf8();
  *puStack_10 = 0x3ff0000000000000;
  puStack_10[1] = 0xbff0000000000000;
  *(undefined4 *)((int)puStack_4 + 0x1c) = 2;
  *(undefined4 *)(puStack_4 + 4) = 2;
  puVar1 = puStack_4;
  if (*DAT_005244e0 != 0) {
    puStack_10 = (undefined8 *)FUN_0009db64();
    *unaff_r8 = puStack_10;
    unaff_r8[1] = *(undefined4 *)(extraout_r2_01 + 3);
    puVar1 = extraout_r2_01;
  }
  *(undefined8 **)(puVar1 + 3) = puStack_10;
  *(undefined4 *)(iStack_8 + 0x38) = 3;
  *(undefined4 *)(iStack_8 + 0x3c) = 3;
  if (*DAT_005244e0 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r2_02;
    unaff_r8[1] = *(undefined4 *)(extraout_r1 + 0x34);
    iStack_8 = extraout_r1;
    puVar1 = extraout_r2_02;
  }
  *(undefined8 **)(iStack_8 + 0x34) = puVar1;
  return;
}



/* k3c/internal/pkg/motion.(*CartKinematics).Cmd_SET_DUAL_CARRIAGE-fm @ 005244e4 (size 108) */

void k3c_internal_pkg_motion___CartKinematics__Cmd_SET_DUAL_CARRIAGE_fm(void)

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
  k3c_internal_pkg_motion___CartKinematics__Cmd_SET_DUAL_CARRIAGE();
  return;
}



/* k3c/internal/pkg/motion.(*ForceMove).cmd_STEPPER_BUZZ-fm @ 00524550 (size 108) */

void k3c_internal_pkg_motion___ForceMove__cmd_STEPPER_BUZZ_fm(void)

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
  k3c_internal_pkg_motion___ForceMove__cmd_STEPPER_BUZZ();
  return;
}



/* k3c/internal/pkg/motion.(*ForceMove).cmd_FORCE_MOVE-fm @ 005245bc (size 108) */

void k3c_internal_pkg_motion___ForceMove__cmd_FORCE_MOVE_fm(void)

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
  k3c_internal_pkg_motion___ForceMove__cmd_FORCE_MOVE();
  return;
}



/* k3c/internal/pkg/motion.(*ForceMove).cmd_SET_KINEMATIC_POSITION-fm @ 00524628 (size 108) */

void k3c_internal_pkg_motion___ForceMove__cmd_SET_KINEMATIC_POSITION_fm(void)

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
  k3c_internal_pkg_motion___ForceMove__cmd_SET_KINEMATIC_POSITION();
  return;
}



