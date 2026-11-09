// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/motion/vibration   functions: 155
/* k3c/internal/pkg/motion/vibration.init @ 0068f67c (size 780) */

void k3c_internal_pkg_motion_vibration_init(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_1c;
  undefined8 *puStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x68f984;
    FUN_0009bf64();
  }
  k3c_internal_pkg_motion_vibration_map_init_0();
  k3c_internal_pkg_motion_vibration_map_init_1();
  FUN_000908bc();
  FUN_00093a08();
  *puStack_c = *(undefined8 *)PTR_DAT_0068f994;
  FUN_00093a08();
  *puStack_c = 0x4014000000000000;
  puVar1 = PTR_DAT_0068f98c;
  FUN_00093a08();
  *puStack_c = 0x4024000000000000;
  if (*(int *)PTR_DAT_0068f9a0 != 0) {
    FUN_0009db64();
    *unaff_r8 = uStack_1c;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_0068f9a4;
  }
  *(undefined4 *)PTR_DAT_0068f9a4 = uStack_1c;
  k3c_internal_pkg_motion_vibration_map_init_2();
  FUN_000908bc();
  FUN_00093a08();
  *(undefined4 *)puStack_c = 0xf;
  FUN_00093a08();
  *(undefined4 *)puStack_c = 0x20;
  FUN_00093a08();
  *(undefined4 *)puStack_c = 0x25;
  FUN_00093a08();
  *(undefined4 *)puStack_c = 0x2e;
  puVar2 = PTR_DAT_0068f9a8;
  FUN_00093a08();
  *(undefined4 *)puStack_c = 0x80;
  if (*(int *)PTR_DAT_0068f9a0 != 0) {
    FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_0068f9c0;
  }
  *(undefined **)PTR_DAT_0068f9c0 = puVar1;
  k3c_internal_pkg_motion_vibration_map_init_3();
  FUN_000908bc();
  FUN_00093a08();
  *puStack_c = *(undefined8 *)PTR_DAT_0068f994;
  FUN_00093a08();
  *puStack_c = 0x4018000000000000;
  FUN_00093a08();
  *puStack_c = 0x4020000000000000;
  if (*(int *)PTR_DAT_0068f9a0 != 0) {
    FUN_0009db64();
    *unaff_r8 = puVar2;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_0068f9c4;
  }
  *(undefined **)PTR_DAT_0068f9c4 = puVar2;
  k3c_internal_pkg_motion_vibration_map_init_4();
                    /* WARNING: Could not recover jumptable at 0x0068f978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.map.init.0 @ 0068f9c8 (size 432) */

void k3c_internal_pkg_motion_vibration_map_init_0(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_18;
  undefined4 *puStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x68fb74;
    FUN_0009bf64();
  }
  FUN_000908bc();
  FUN_00093a08();
  *puStack_8 = 0;
  FUN_00093a08();
  *puStack_8 = 0x2c;
  FUN_00093a08();
  *puStack_8 = 0x2d;
  FUN_00093a08();
  *puStack_8 = 0x31;
  FUN_00093a08();
  *puStack_8 = 0x38;
  FUN_00093a08();
  *puStack_8 = 0x80;
  FUN_00093a08();
  *puStack_8 = 0x40;
  if (*(int *)PTR_DAT_0068fb9c != 0) {
    FUN_0009db64();
    *unaff_r8 = uStack_18;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_0068fba0;
  }
  *(undefined4 *)PTR_DAT_0068fba0 = uStack_18;
                    /* WARNING: Could not recover jumptable at 0x0068fb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.map.init.1 @ 0068fba4 (size 416) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_vibration_map_init_1(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_14;
  undefined4 *puStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x68fd40;
    FUN_0009bf64();
  }
  FUN_000908bc();
  FUN_00092908();
  *puStack_8 = 8;
  FUN_00092908();
  *puStack_8 = 9;
  FUN_00092908();
  *puStack_8 = 10;
  FUN_00092908();
  *puStack_8 = 0xb;
  FUN_00092908();
  *puStack_8 = 0xc;
  FUN_00092908();
  *puStack_8 = 0xd;
  FUN_00092908();
  *puStack_8 = 0xe;
  FUN_00092908();
  *puStack_8 = 0xf;
  if (*_UNK_0068fd4c != 0) {
    FUN_0009db64();
    *unaff_r8 = uStack_14;
    unaff_r8[1] = *_UNK_0068fd50;
  }
  *_UNK_0068fd50 = uStack_14;
                    /* WARNING: Could not recover jumptable at 0x0068fd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.map.init.2 @ 0068fd54 (size 496) */

void k3c_internal_pkg_motion_vibration_map_init_2(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar3;
  undefined4 local_18;
  undefined4 *local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_000908bc();
  FUN_00093a08();
  puVar1 = PTR_DAT_0068ff50;
  *local_8 = PTR_DAT_0068ff50;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0068ff54 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2;
  }
  puVar2[1] = PTR_DAT_0068ff58;
  FUN_00093a08();
  *local_8 = PTR_DAT_0068ff50;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0068ff54 != 0) {
    uVar3 = FUN_0009db54(local_8,local_8[1]);
    puVar2 = (undefined4 *)uVar3;
    *unaff_r8 = (int)((ulonglong)uVar3 >> 0x20);
  }
  puVar2[1] = PTR_DAT_0068ff60;
  FUN_00093a08();
  puVar1 = PTR_DAT_0068ff68;
  *local_8 = PTR_DAT_0068ff68;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0068ff54 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_00;
  }
  puVar2[1] = PTR_DAT_0068ff6c;
  FUN_00093a08();
  puVar1 = PTR_DAT_0068ff68;
  *local_8 = PTR_DAT_0068ff68;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0068ff54 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_01;
  }
  puVar2[1] = PTR_DAT_0068ff74;
  FUN_00093a08();
  *local_8 = PTR_DAT_0068ff68;
  if (*(int *)PTR_DAT_0068ff54 != 0) {
    uVar3 = FUN_0009db74(local_8,local_8[1]);
    local_8 = (undefined4 *)uVar3;
    *unaff_r8 = (int)((ulonglong)uVar3 >> 0x20);
    unaff_r8[1] = local_18;
    unaff_r8[2] = *(undefined4 *)PTR_DAT_0068ff7c;
  }
  local_8[1] = PTR_DAT_0068ff80;
  *(undefined4 *)PTR_DAT_0068ff7c = local_18;
  return;
}



/* k3c/internal/pkg/motion/vibration.map.init.3 @ 0068ff84 (size 376) */

void k3c_internal_pkg_motion_vibration_map_init_3(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 local_14;
  undefined4 *local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_000908bc();
  FUN_00092908();
  *local_8 = 3;
  FUN_00092908();
  *local_8 = 4;
  FUN_00092908();
  *local_8 = 5;
  FUN_00092908();
  *local_8 = 6;
  FUN_00092908();
  *local_8 = 7;
  FUN_00092908();
  *local_8 = 8;
  FUN_00092908();
  *local_8 = 9;
  if (*DAT_00690104 != 0) {
    FUN_0009db64();
    *unaff_r8 = local_14;
    unaff_r8[1] = *DAT_00690108;
  }
  *DAT_00690108 = local_14;
  return;
}



/* k3c/internal/pkg/motion/vibration.map.init.4 @ 0069010c (size 748) */

void k3c_internal_pkg_motion_vibration_map_init_4(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 extraout_r2_04;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar3;
  undefined4 local_18;
  undefined4 *local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_000908bc();
  FUN_00093a08();
  puVar1 = PTR_DAT_00690404;
  *local_8 = PTR_DAT_00690404;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00690408 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2;
  }
  puVar2[1] = PTR_DAT_0069040c;
  FUN_00093a08();
  puVar1 = PTR_DAT_00690404;
  *local_8 = PTR_DAT_00690404;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00690408 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_00;
  }
  puVar2[1] = PTR_SUB_00690414;
  FUN_00093a08();
  puVar1 = PTR_DAT_00690404;
  *local_8 = PTR_DAT_00690404;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00690408 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_01;
  }
  puVar2[1] = PTR_DAT_0069041c;
  FUN_00093a08();
  puVar1 = PTR_DAT_00690404;
  *local_8 = PTR_DAT_00690404;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00690408 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_02;
  }
  puVar2[1] = PTR_DAT_00690424;
  FUN_00093a08();
  *local_8 = PTR_DAT_00690404;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00690408 != 0) {
    uVar3 = FUN_0009db54(local_8,local_8[1]);
    puVar2 = (undefined4 *)uVar3;
    *unaff_r8 = (int)((ulonglong)uVar3 >> 0x20);
  }
  puVar2[1] = PTR_DAT_0069042c;
  FUN_00093a08();
  puVar1 = PTR_DAT_00690434;
  *local_8 = PTR_DAT_00690434;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00690408 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_03;
  }
  puVar2[1] = PTR_DAT_00690438;
  FUN_00093a08();
  puVar1 = PTR_DAT_00690434;
  *local_8 = PTR_DAT_00690434;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00690408 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_04;
  }
  puVar2[1] = PTR_DAT_00690440;
  FUN_00093a08();
  *local_8 = PTR_DAT_00690434;
  if (*(int *)PTR_DAT_00690408 != 0) {
    uVar3 = FUN_0009db74(local_8,local_8[1]);
    local_8 = (undefined4 *)uVar3;
    *unaff_r8 = (int)((ulonglong)uVar3 >> 0x20);
    unaff_r8[1] = local_18;
    unaff_r8[2] = *(undefined4 *)PTR_DAT_00690448;
  }
  local_8[1] = PTR_DAT_0069044c;
  *(undefined4 *)PTR_DAT_00690448 = local_18;
  return;
}



/* k3c/internal/pkg/motion/vibration.NewAccelQueryHelper @ 00690450 (size 240) */

void k3c_internal_pkg_motion_vibration_NewAccelQueryHelper(void)

{
  int iVar1;
  undefined4 *extraout_r1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  ulonglong uVar4;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *local_c;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  puVar2 = local_c;
  if (*(int *)PTR_DAT_00690548 != 0) {
    FUN_0009db64();
    *unaff_r8 = in_stack_00000004;
    unaff_r8[1] = in_stack_0000000c;
    puVar2 = extraout_r1;
  }
  *puVar2 = in_stack_00000004;
  puVar2[1] = in_stack_00000008;
  puVar2[2] = in_stack_0000000c;
  (*(code *)**(undefined4 **)PTR_DAT_0069054c)();
  k3c_internal_pkg_toolhead___Toolhead__Get_last_move_time();
  *(ulonglong *)(puVar2 + 3) = CONCAT44(uStack_8,local_c);
  *(ulonglong *)(puVar2 + 5) = CONCAT44(uStack_8,local_c);
  uVar4 = ZEXT48(puVar2);
  puVar2[8] = 0;
  puVar2[9] = 0;
  if (*(int *)PTR_DAT_00690548 != 0) {
    uVar4 = FUN_0009db64(puVar2,0,puVar2[7]);
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(undefined4 *)((int)uVar4 + 0x28);
  }
  uVar3 = (undefined4)(uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  *(undefined **)(iVar1 + 0x1c) = PTR_DAT_00690550;
  *(undefined4 *)(iVar1 + 0x2c) = uVar3;
  *(undefined4 *)(iVar1 + 0x30) = uVar3;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AccelQueryHelper).Finish_measurements @ 00690554 (size 124) */

void k3c_internal_pkg_motion_vibration___AccelQueryHelper__Finish_measurements(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  (**(code **)*DAT_006905d4)();
  k3c_internal_pkg_toolhead___Toolhead__Get_last_move_time();
  *(ulonglong *)(in_stack_00000004 + 0x14) = CONCAT44(uStack_8,uStack_c);
  k3c_internal_pkg_toolhead___Toolhead__Wait_moves();
  (**(code **)(*(int *)(in_stack_00000004 + 4) + 0xc))();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AccelQueryHelper).Has_valid_samples @ 006905d8 (size 704) */

void k3c_internal_pkg_motion_vibration___AccelQueryHelper__Has_valid_samples(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *extraout_r1;
  undefined4 uVar6;
  undefined4 extraout_r2;
  int iVar7;
  undefined *extraout_r2_00;
  undefined *puVar8;
  int extraout_r3;
  undefined4 *puVar9;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  undefined1 uVar11;
  
code_r0x006905d8:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar10 = (undefined1 *)((int)register0x00000054 + -0x44);
    *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
    iVar1 = *(int *)((int)register0x00000054 + 4);
    pcVar3 = *(code **)(*(int *)(iVar1 + 4) + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x40) = *(undefined4 *)(iVar1 + 8);
    (*pcVar3)(iVar1);
    if (*(int *)((int)register0x00000054 + -0x38) == 0) {
      iVar1 = *(int *)((int)register0x00000054 + 4);
    }
    else {
      uVar4 = *(undefined4 *)((int)register0x00000054 + -0x34);
      uVar6 = *(undefined4 *)((int)register0x00000054 + -0x3c);
      iVar1 = *(int *)((int)register0x00000054 + 4);
      *(int *)(iVar1 + 0x2c) = *(int *)((int)register0x00000054 + -0x38);
      *(undefined4 *)(iVar1 + 0x30) = uVar4;
      if (*(int *)PTR_DAT_0069089c != 0) {
        FUN_0009db64();
        *unaff_r8 = extraout_r2;
        unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x28);
        uVar6 = extraout_r2;
        iVar1 = extraout_r3;
      }
      *(undefined4 *)(iVar1 + 0x28) = uVar6;
    }
    iVar2 = *(int *)(iVar1 + 0x28);
    *(int *)((int)register0x00000054 + -0x10) = iVar2;
    iVar1 = *(int *)(iVar1 + 0x2c);
    *(int *)((int)register0x00000054 + -0x18) = iVar1;
    iVar7 = 0;
    do {
      if (iVar1 <= iVar7) {
        *(undefined1 *)((int)register0x00000054 + 8) = 0;
        return;
      }
      *(int *)((int)register0x00000054 + -0x14) = iVar7;
      uVar6 = *(undefined4 *)(iVar2 + iVar7 * 4);
      *(undefined4 *)((int)register0x00000054 + -0xc) = uVar6;
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_006908a0;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar6;
      *(undefined **)((int)register0x00000054 + -0x38) =
           PTR_s_paramsmethodscriptstatusreadatTM_008214ab_0x3c_006908a4;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 6;
      FUN_00025f60();
      uVar6 = **(undefined4 **)((int)register0x00000054 + -0x30);
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_006908a8;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar6;
      *(undefined **)((int)register0x00000054 + -0x38) =
           PTR_s_data_of_____<__GOGC]___s___,r2__p_00820821_0x12d_006908ac;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 4;
      FUN_00025f60();
      if ((undefined *)**(undefined4 **)((int)register0x00000054 + -0x30) == PTR_DAT_006908b0) {
        *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_006908a0;
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined **)((int)register0x00000054 + -0x38) =
             PTR_s_paramsmethodscriptstatusreadatTM_008214ab_0x3c_006908a4;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 6;
        FUN_00025f60();
        uVar6 = **(undefined4 **)((int)register0x00000054 + -0x30);
        *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_006908a8;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar6;
        *(undefined **)((int)register0x00000054 + -0x38) =
             PTR_s_data_of_____<__GOGC]___s___,r2__p_00820821_0x12d_006908ac;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 4;
        FUN_00025f60();
        puVar5 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x30);
        uVar11 = puVar5 == PTR_DAT_006908b0;
        puVar8 = PTR_DAT_006908b0;
        if (!(bool)uVar11) goto LAB_00690874;
        puVar9 = (undefined4 *)(*(undefined4 **)((int)register0x00000054 + -0x30))[1];
        iVar1 = puVar9[1];
        uVar11 = 1;
        if (iVar1 == 0) goto LAB_00690868;
        puVar9 = (undefined4 *)*puVar9;
        uVar11 = 1;
        if (puVar9[1] == 0) goto LAB_0069085c;
        uVar11 = puVar9[iVar1 * 3 + -2] == 0;
        if ((bool)uVar11) goto LAB_00690850;
        if ((*(double *)*puVar9 <= *(double *)(*(int *)((int)register0x00000054 + 4) + 0x14)) &&
           (*(double *)(*(int *)((int)register0x00000054 + 4) + 0xc) <=
            *(double *)puVar9[iVar1 * 3 + -3])) {
          *(undefined1 *)((int)register0x00000054 + 8) = 1;
          return;
        }
      }
      else {
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        FUN_00020ce0();
        *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_006908b4;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        uVar6 = *(undefined4 *)PTR_DAT_006908b8;
        *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_006908bc;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar6;
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_006908c0;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 2;
        *(undefined1 **)((int)register0x00000054 + -0x30) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x28) = 1;
        FUN_0013b668();
      }
      iVar7 = *(int *)((int)register0x00000054 + -0x14) + 1;
      iVar2 = *(int *)((int)register0x00000054 + -0x10);
      iVar1 = *(int *)((int)register0x00000054 + -0x18);
    } while( true );
  }
  goto LAB_0069088c;
LAB_00690850:
  FUN_0009dbd4(0,0);
LAB_0069085c:
  FUN_0009dbd4(0,0);
LAB_00690868:
  FUN_0009dbd4(0,0);
  puVar5 = extraout_r1;
  puVar8 = extraout_r2_00;
LAB_00690874:
  *(undefined **)((int)register0x00000054 + -0x40) = puVar5;
  *(undefined **)((int)register0x00000054 + -0x3c) = puVar8;
  *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_006908c4;
  param_1 = FUN_000209b4();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
  if ((bool)uVar11) {
    register0x00000054 = (BADSPACEBASE *)puVar10;
  }
LAB_0069088c:
  unaff_lr = 0x690894;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x006905d8;
}



/* k3c/internal/pkg/motion/vibration.(*AccelQueryHelper).Get_samples @ 006908c8 (size 1312) */

void k3c_internal_pkg_motion_vibration___AccelQueryHelper__Get_samples(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *extraout_r1;
  undefined *extraout_r1_00;
  undefined4 uVar7;
  undefined4 extraout_r2;
  int iVar8;
  uint uVar9;
  uint extraout_r2_00;
  uint extraout_r2_01;
  undefined *extraout_r2_02;
  undefined *puVar10;
  undefined *extraout_r2_03;
  int extraout_r3;
  int *piVar11;
  int extraout_r3_00;
  int extraout_r3_01;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int unaff_r6;
  double *pdVar15;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar16;
  undefined4 unaff_lr;
  undefined1 uVar17;
  double dVar18;
  undefined8 uVar19;
  
code_r0x006908c8:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar16 = (undefined1 *)((int)register0x00000054 + -100);
    *(undefined4 *)((int)register0x00000054 + -100) = unaff_lr;
    iVar1 = *(int *)((int)register0x00000054 + 4);
    pcVar4 = *(code **)(*(int *)(iVar1 + 4) + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x60) = *(undefined4 *)(iVar1 + 8);
    (*pcVar4)(iVar1);
    if (*(int *)((int)register0x00000054 + -0x58) == 0) {
      iVar1 = *(int *)((int)register0x00000054 + 4);
    }
    else {
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x54);
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x5c);
      iVar1 = *(int *)((int)register0x00000054 + 4);
      *(int *)(iVar1 + 0x2c) = *(int *)((int)register0x00000054 + -0x58);
      *(undefined4 *)(iVar1 + 0x30) = uVar5;
      if (*(int *)PTR_DAT_00690dec != 0) {
        FUN_0009db64();
        *unaff_r8 = extraout_r2;
        unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x28);
        uVar7 = extraout_r2;
        iVar1 = extraout_r3;
      }
      *(undefined4 *)(iVar1 + 0x28) = uVar7;
    }
    iVar2 = *(int *)(iVar1 + 0x2c);
    if (iVar2 == 0) {
      uVar7 = *(undefined4 *)(iVar1 + 0x20);
      uVar5 = *(undefined4 *)(iVar1 + 0x24);
      *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)(iVar1 + 0x1c);
      *(undefined4 *)((int)register0x00000054 + 0xc) = uVar7;
      *(undefined4 *)((int)register0x00000054 + 0x10) = uVar5;
      return;
    }
    *(int *)((int)register0x00000054 + -0x4c) = iVar2;
    iVar1 = *(int *)(iVar1 + 0x28);
    *(int *)((int)register0x00000054 + -0x14) = iVar1;
    iVar12 = 0;
    iVar8 = 0;
    while (*(int *)((int)register0x00000054 + -0x30) = iVar12, iVar8 < iVar2) {
      *(int *)((int)register0x00000054 + -0x18) = iVar8;
      uVar7 = *(undefined4 *)(iVar1 + iVar8 * 4);
      *(undefined4 *)((int)register0x00000054 + -8) = uVar7;
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00690df0;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar7;
      *(undefined **)((int)register0x00000054 + -0x58) =
           PTR_s_paramsmethodscriptstatusreadatTM_008214ab_0x3c_00690df4;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 6;
      FUN_00025f60();
      uVar7 = **(undefined4 **)((int)register0x00000054 + -0x50);
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00690df8;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar7;
      *(undefined **)((int)register0x00000054 + -0x58) =
           PTR_s_data_of_____<__GOGC]___s___,r2__p_00820821_0x12d_00690dfc;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 4;
      FUN_00025f60();
      if ((undefined *)**(undefined4 **)((int)register0x00000054 + -0x50) == PTR_DAT_00690e00) {
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00690df0;
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined **)((int)register0x00000054 + -0x58) =
             PTR_s_paramsmethodscriptstatusreadatTM_008214ab_0x3c_00690df4;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 6;
        FUN_00025f60();
        uVar7 = **(undefined4 **)((int)register0x00000054 + -0x50);
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00690df8;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar7;
        *(undefined **)((int)register0x00000054 + -0x58) =
             PTR_s_data_of_____<__GOGC]___s___,r2__p_00820821_0x12d_00690dfc;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 4;
        FUN_00025f60();
        puVar6 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x50);
        uVar17 = puVar6 == PTR_DAT_00690e00;
        puVar10 = PTR_DAT_00690e00;
        if (!(bool)uVar17) goto LAB_00690dc4;
        iVar12 = *(int *)((int)register0x00000054 + -0x30) +
                 *(int *)((*(undefined4 **)((int)register0x00000054 + -0x50))[1] + 4);
      }
      else {
        iVar12 = *(int *)((int)register0x00000054 + -0x30);
      }
      iVar2 = *(int *)((int)register0x00000054 + -0x4c);
      iVar1 = *(int *)((int)register0x00000054 + -0x14);
      iVar8 = *(int *)((int)register0x00000054 + -0x18) + 1;
    }
    *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00690e04;
    *(int *)((int)register0x00000054 + -0x5c) = iVar12;
    *(int *)((int)register0x00000054 + -0x58) = iVar12;
    FUN_000986b8();
    uVar9 = *(uint *)((int)register0x00000054 + -0x30);
    iVar1 = *(int *)((int)register0x00000054 + 4);
    uVar19 = CONCAT44(iVar1,*(undefined4 *)((int)register0x00000054 + -0x54));
    *(uint *)(iVar1 + 0x20) = uVar9;
    *(uint *)(iVar1 + 0x24) = uVar9;
    if (*(int *)PTR_DAT_00690dec != 0) {
      uVar19 = FUN_0009db64();
      *unaff_r8 = (int)uVar19;
      unaff_r8[1] = *(undefined4 *)((int)((ulonglong)uVar19 >> 0x20) + 0x1c);
      uVar9 = extraout_r2_00;
    }
    iVar1 = (int)((ulonglong)uVar19 >> 0x20);
    *(int *)(iVar1 + 0x1c) = (int)uVar19;
    uVar7 = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)((int)register0x00000054 + -0x10) = uVar7;
    iVar2 = 0;
    uVar13 = 0;
    do {
      uVar19 = CONCAT44(iVar1,uVar7);
      piVar14 = *(int **)((int)register0x00000054 + -0x4c);
      if ((int)piVar14 <= iVar2) {
        if (uVar13 <= uVar9) {
          *(uint *)(iVar1 + 0x20) = uVar13;
          *(uint *)(iVar1 + 0x24) = uVar9;
          if (*(int *)PTR_DAT_00690dec != 0) {
            uVar19 = FUN_0009db64();
            *unaff_r8 = (int)uVar19;
            unaff_r8[1] = *(undefined4 *)((int)((ulonglong)uVar19 >> 0x20) + 0x1c);
            uVar9 = extraout_r2_01;
          }
          *(int *)((int)((ulonglong)uVar19 >> 0x20) + 0x1c) = (int)uVar19;
          *(int *)((int)register0x00000054 + 8) = (int)uVar19;
          *(uint *)((int)register0x00000054 + 0xc) = uVar13;
          *(uint *)((int)register0x00000054 + 0x10) = uVar9;
          return;
        }
        FUN_0009dc14(uVar7,uVar13);
        iVar1 = extraout_r3_00;
        goto LAB_00690c4c;
      }
      *(int *)((int)register0x00000054 + -0x18) = iVar2;
      *(uint *)((int)register0x00000054 + -0x24) = uVar13;
      uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x14) + iVar2 * 4);
      *(undefined4 *)((int)register0x00000054 + -0xc) = uVar7;
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00690df0;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar7;
      *(undefined **)((int)register0x00000054 + -0x58) =
           PTR_s_paramsmethodscriptstatusreadatTM_008214ab_0x3c_00690df4;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 6;
      FUN_00025f60();
      uVar7 = **(undefined4 **)((int)register0x00000054 + -0x50);
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00690df8;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar7;
      *(undefined **)((int)register0x00000054 + -0x58) =
           PTR_s_data_of_____<__GOGC]___s___,r2__p_00820821_0x12d_00690dfc;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 4;
      FUN_00025f60();
      if ((undefined *)**(undefined4 **)((int)register0x00000054 + -0x50) == PTR_DAT_00690e00) {
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00690df0;
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined **)((int)register0x00000054 + -0x58) =
             PTR_s_paramsmethodscriptstatusreadatTM_008214ab_0x3c_00690df4;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 6;
        FUN_00025f60();
        uVar7 = **(undefined4 **)((int)register0x00000054 + -0x50);
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00690df8;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar7;
        *(undefined **)((int)register0x00000054 + -0x58) =
             PTR_s_data_of_____<__GOGC]___s___,r2__p_00820821_0x12d_00690dfc;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 4;
        FUN_00025f60();
        puVar6 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x50);
        uVar17 = puVar6 == PTR_DAT_00690e00;
        puVar10 = PTR_DAT_00690e00;
        if (!(bool)uVar17) goto LAB_00690db0;
        piVar11 = (int *)(*(undefined4 **)((int)register0x00000054 + -0x50))[1];
        piVar14 = (int *)*piVar11;
        unaff_r6 = *(int *)((int)register0x00000054 + 4);
        uVar13 = *(uint *)((int)register0x00000054 + -0x24);
        for (iVar1 = piVar11[1]; 0 < iVar1; iVar1 = iVar1 + -1) {
          uVar9 = piVar14[1];
          uVar17 = 1;
          if (uVar9 == 0) {
LAB_00690da4:
            FUN_0009dbd4(0,0);
            puVar6 = extraout_r1;
            puVar10 = extraout_r2_02;
            goto LAB_00690db0;
          }
          uVar17 = uVar9 == 1;
          if (uVar9 < 2) {
LAB_00690d98:
            FUN_0009dbd4(1,1);
            goto LAB_00690da4;
          }
          uVar17 = uVar9 == 2;
          if (uVar9 < 3) {
LAB_00690d8c:
            FUN_0009dbd4(2,2);
            goto LAB_00690d98;
          }
          uVar17 = uVar9 == 3;
          if (uVar9 < 4) {
LAB_00690d80:
            FUN_0009dbd4(3,3);
            goto LAB_00690d8c;
          }
          pdVar15 = (double *)*piVar14;
          dVar18 = *pdVar15;
          if (*(double *)(unaff_r6 + 0xc) <= dVar18) {
            if (*(double *)(unaff_r6 + 0x14) < dVar18) break;
            *(int *)((int)register0x00000054 + -0x1c) = iVar1;
            *(int **)((int)register0x00000054 + -4) = piVar14;
            *(double *)((int)register0x00000054 + -0x2c) = dVar18;
            *(uint *)((int)register0x00000054 + -0x20) = uVar13;
            *(double *)((int)register0x00000054 + -0x38) = pdVar15[1];
            *(double *)((int)register0x00000054 + -0x40) = pdVar15[2];
            *(double *)((int)register0x00000054 + -0x48) = pdVar15[3];
            *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00690e08;
            FUN_00022cf8();
            puVar3 = *(undefined8 **)((int)register0x00000054 + -0x5c);
            *puVar3 = *(undefined8 *)((int)register0x00000054 + -0x2c);
            puVar3[1] = *(undefined8 *)((int)register0x00000054 + -0x38);
            puVar3[2] = *(undefined8 *)((int)register0x00000054 + -0x40);
            puVar3[3] = *(undefined8 *)((int)register0x00000054 + -0x48);
            uVar9 = *(uint *)((int)register0x00000054 + -0x20);
            uVar19 = CONCAT44(uVar9,puVar3);
            uVar13 = *(uint *)((int)register0x00000054 + -0x30);
            uVar17 = uVar9 == uVar13;
            if (uVar13 <= uVar9) {
              FUN_0009dbd4(uVar9,uVar13);
              goto LAB_00690d80;
            }
            iVar1 = uVar9 * 3;
            iVar2 = *(int *)((int)register0x00000054 + -0x10);
            iVar8 = iVar2 + uVar9 * 0xc;
            *(undefined4 *)(iVar8 + 4) = 4;
            *(undefined4 *)(iVar8 + 8) = 4;
            if (*(int *)PTR_DAT_00690dec != 0) {
              uVar19 = FUN_0009db64();
              *unaff_r8 = (int)uVar19;
              unaff_r8[1] = *(undefined4 *)(iVar2 + extraout_r3_01 * 4);
              iVar1 = extraout_r3_01;
            }
            *(int *)(iVar2 + iVar1 * 4) = (int)uVar19;
            uVar13 = (int)((ulonglong)uVar19 >> 0x20) + 1;
            piVar14 = *(int **)((int)register0x00000054 + -4);
            unaff_r6 = *(int *)((int)register0x00000054 + 4);
            iVar1 = *(int *)((int)register0x00000054 + -0x1c);
          }
LAB_00690c4c:
          piVar14 = piVar14 + 3;
        }
      }
      else {
        uVar13 = *(uint *)((int)register0x00000054 + -0x24);
      }
      iVar2 = *(int *)((int)register0x00000054 + -0x18) + 1;
      iVar1 = *(int *)((int)register0x00000054 + 4);
      uVar9 = *(uint *)((int)register0x00000054 + -0x30);
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x10);
    } while( true );
  }
  goto LAB_00690ddc;
LAB_00690db0:
  *(undefined **)((int)register0x00000054 + -0x60) = puVar6;
  *(undefined **)((int)register0x00000054 + -0x5c) = puVar10;
  *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00690e0c;
  FUN_000209b4();
  puVar6 = extraout_r1_00;
  puVar10 = extraout_r2_03;
LAB_00690dc4:
  *(undefined **)((int)register0x00000054 + -0x60) = puVar6;
  *(undefined **)((int)register0x00000054 + -0x5c) = puVar10;
  *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00690e0c;
  param_1 = FUN_000209b4();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -100);
  if ((bool)uVar17) {
    register0x00000054 = (BADSPACEBASE *)puVar16;
  }
LAB_00690ddc:
  unaff_lr = 0x690de4;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x006908c8;
}



/* k3c/internal/pkg/motion/vibration.(*AccelQueryHelper).Write_to_file @ 00690e10 (size 128) */

void k3c_internal_pkg_motion_vibration___AccelQueryHelper__Write_to_file(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *puStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *puStack_8 = DAT_00690e98;
  puStack_8[2] = in_stack_0000000c;
  if (*DAT_00690e9c != 0) {
    puStack_8 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = in_stack_00000004;
  }
  puStack_8[1] = in_stack_00000008;
  puStack_8[3] = in_stack_00000004;
  FUN_00062dd0();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AccelQueryHelper).Write_to_file.func1 @ 00690ea0 (size 784) */

/* WARNING: Removing unreachable block (ram,0x00690f84) */

void k3c_internal_pkg_motion_vibration___AccelQueryHelper__Write_to_file_func1(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  int unaff_r7;
  int unaff_r10;
  undefined4 extraout_s1;
  undefined4 uStack_cc;
  int iStack_c0;
  int aiStack_97 [7];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  int iStack_38;
  int *piStack_30;
  undefined *apuStack_2c [2];
  undefined *puStack_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  undefined **ppuStack_4;
  undefined *puVar3;
  
  while ((int)&uStack_5c + 4U <= *(uint *)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  ppuStack_4 = (undefined **)0x0;
  iStack_38 = *(int *)(unaff_r7 + 0xc);
  FUN_0012dc78();
  if (iStack_c0 == 0) {
    apuStack_2c[0] =
         PTR_k3c_internal_pkg_motion_vibration___AccelQueryHelper__Write_to_file_func1_1_006911b8;
    ppuStack_4 = apuStack_2c;
    puVar3 = PTR_DAT_006911bc;
    piVar4 = aiStack_97;
    do {
      puVar2 = puVar3 + 1;
      *(undefined *)piVar4 = *puVar3;
      puVar3 = puVar2;
      piVar4 = (int *)((int)piVar4 + 1);
    } while ((int)puVar2 <= (int)PTR_DAT_006911c0);
    piVar4 = aiStack_97;
    uStack_cc = 0x1f;
    FUN_0012d1d8();
    iVar5 = *(int *)(iStack_38 + 0x20);
    if (iVar5 == 0) {
      k3c_internal_pkg_motion_vibration___AccelQueryHelper__Get_samples();
      k3c_internal_pkg_motion_vibration___AccelQueryHelper__Get_samples();
      iVar5 = 0x1f;
    }
    else {
      piVar4 = *(int **)(iStack_38 + 0x1c);
    }
    while( true ) {
      if (iVar5 < 1) {
        (*(code *)*ppuStack_4)();
        return;
      }
      uVar7 = piVar4[1];
      if (uVar7 == 0) break;
      if (uVar7 < 2) {
LAB_00691168:
        FUN_0009dbd4(1,1);
        break;
      }
      if (uVar7 < 3) {
LAB_0069115c:
        FUN_0009dbd4(2,2);
        goto LAB_00691168;
      }
      if (uVar7 < 4) {
        FUN_0009dbd4(3,3);
        goto LAB_0069115c;
      }
      piStack_30 = piVar4;
      puVar6 = (undefined8 *)*piVar4;
      uStack_68 = puVar6[1];
      uStack_70 = puVar6[2];
      uStack_78 = puVar6[3];
      iStack_60 = iVar5;
      uVar1 = FUN_0009def4((int)*puVar6,0,&puStack_24);
      uStack_44 = CONCAT44(extraout_s1,uVar1);
      FUN_0008f6c0();
      puStack_24 = PTR_DAT_006911c4;
      uStack_20 = uStack_cc;
      uStack_4c = uStack_68;
      FUN_0008f6c0();
      puStack_1c = PTR_DAT_006911c4;
      uStack_18 = uStack_cc;
      uStack_54 = uStack_70;
      FUN_0008f6c0();
      puStack_14 = PTR_DAT_006911c4;
      uStack_10 = uStack_cc;
      uStack_5c = uStack_78;
      FUN_0008f6c0();
      puStack_c = PTR_DAT_006911c4;
      uStack_8 = uStack_cc;
      FUN_0013b72c();
      FUN_000766e8();
      uStack_cc = 4;
      FUN_0012d1d8();
      piVar4 = piStack_30 + 3;
      iVar5 = iStack_60 + -1;
    }
    FUN_0009dbd4(0,0);
  }
  uVar1 = FUN_00095b00();
  FUN_00054344(uVar1);
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AccelQueryHelper).Write_to_file.func1.1 @ 006911cc (size 76) */

void k3c_internal_pkg_motion_vibration___AccelQueryHelper__Write_to_file_func1_1(void)

{
  int iVar1;
  int unaff_r7;
  int unaff_r10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  iVar1 = *(int *)(unaff_r7 + 4);
  FUN_0012eb1c();
  if (iVar1 != 0) {
    FUN_0012fb5c();
  }
  return;
}



/* k3c/internal/pkg/motion/vibration.NewAccelCommandHelper @ 00691218 (size 604) */

void k3c_internal_pkg_motion_vibration_NewAccelCommandHelper(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 *puVar5;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 uVar6;
  undefined4 extraout_r3;
  int iVar7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  bool bVar9;
  undefined8 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x38) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_00691478;
      FUN_00022cf8();
      puVar4 = *(undefined4 **)((int)register0x00000054 + -0x30);
      puVar5 = *(undefined4 **)((int)register0x00000054 + 4);
      uVar6 = *puVar5;
      if (*(int *)PTR_DAT_0069147c == 0) {
        uVar1 = *(undefined4 *)((int)register0x00000054 + 0xc);
      }
      else {
        FUN_0009db64();
        *unaff_r8 = extraout_r3;
        uVar1 = *(undefined4 *)((int)register0x00000054 + 0xc);
        unaff_r8[1] = uVar1;
        puVar4 = extraout_r1;
        puVar5 = extraout_r2;
        uVar6 = extraout_r3;
      }
      *(undefined4 **)((int)register0x00000054 + -8) = puVar4;
      *puVar4 = uVar6;
      puVar4[1] = *(undefined4 *)((int)register0x00000054 + 8);
      puVar4[2] = uVar1;
      puVar4[3] = 0;
      puVar4[4] = 0;
      uVar6 = puVar5[4];
      *(undefined4 *)((int)register0x00000054 + -0x34) = puVar5[3];
      *(undefined4 *)((int)register0x00000054 + -0x30) = uVar6;
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_00691480;
      *(undefined4 *)((int)register0x00000054 + -0x28) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x20) = 0xffffffff;
      FUN_0014f168(0);
      iVar2 = *(int *)((int)register0x00000054 + -0x18);
      bVar9 = iVar2 == 0;
      if (!bVar9) break;
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x38);
      if (bVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x691470;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
  uVar10 = CONCAT44(iVar2 + -1,iVar2);
  puVar5 = *(undefined4 **)((int)register0x00000054 + -0x1c);
  uVar6 = *puVar5;
  iVar7 = *(int *)((int)register0x00000054 + -8);
  *(undefined4 *)(iVar7 + 0x18) = puVar5[1];
  puVar4 = puVar5;
  if (*(int *)PTR_DAT_0069147c != 0) {
    uVar10 = FUN_0009db64();
    *unaff_r8 = uVar6;
    unaff_r8[1] = *(undefined4 *)(iVar7 + 0x14);
    puVar4 = extraout_r2_00;
  }
  *(int *)((int)register0x00000054 + -0xc) = (int)uVar10;
  *(undefined4 *)(iVar7 + 0x14) = uVar6;
  uVar6 = puVar4[(int)((ulonglong)uVar10 >> 0x20) * 2];
  *(undefined4 *)(iVar7 + 0x20) = puVar5[(iVar2 + -1) * 2 + 1];
  if (*(int *)PTR_DAT_0069147c != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = *(undefined4 *)(iVar7 + 0x1c);
    uVar6 = extraout_r1_00;
  }
  *(undefined4 *)(iVar7 + 0x1c) = uVar6;
  uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
  uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
  *(int *)((int)register0x00000054 + -0x34) = iVar7;
  *(undefined4 *)((int)register0x00000054 + -0x30) = uVar6;
  *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar1;
  k3c_internal_pkg_motion_vibration___AccelCommandHelper__Register_commands();
  if (*(int *)((int)register0x00000054 + -0xc) == 1) {
    iVar2 = *(int *)((int)register0x00000054 + -8);
    if (*(int *)(iVar2 + 0x20) == 7) {
      *(undefined4 *)((int)register0x00000054 + -0x34) = *(undefined4 *)(iVar2 + 0x1c);
      *(undefined **)((int)register0x00000054 + -0x30) =
           PTR_s_adxl345buttonsled_pinmcu_otanumb_008216f7_0x514_00691484;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 7;
      FUN_00018250();
      cVar3 = *(char *)((int)register0x00000054 + -0x28);
      iVar2 = *(int *)((int)register0x00000054 + -8);
    }
    else {
      cVar3 = '\0';
    }
    if (cVar3 == '\0') {
      iVar2 = **(int **)(*(int *)((int)register0x00000054 + 4) + 4);
      *(int *)((int)register0x00000054 + -4) = iVar2;
      uVar6 = *(undefined4 *)(iVar2 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_00691488;
      *(undefined4 *)((int)register0x00000054 + -0x30) = uVar6;
      *(undefined **)((int)register0x00000054 + -0x2c) =
           PTR_s_adxl345buttonsled_pinmcu_otanumb_008216f7_0x514_00691484;
      *(undefined4 *)((int)register0x00000054 + -0x28) = 7;
      FUN_00093560();
      bVar9 = *(char *)((int)register0x00000054 + -0x20) == '\0';
      if (!bVar9) {
        *(char *)((int)register0x00000054 + -0xd) = *(char *)((int)register0x00000054 + -0x20);
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_00691488;
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar6;
        *(undefined **)((int)register0x00000054 + -0x2c) =
             PTR_s_adxl345buttonsled_pinmcu_otanumb_008216f7_0x514_00691484;
        *(undefined4 *)((int)register0x00000054 + -0x28) = 7;
        FUN_00025f60();
        bVar9 = *(char *)((int)register0x00000054 + -0xd) == '\0';
      }
      if (!bVar9) goto LAB_0069144c;
      iVar2 = *(int *)((int)register0x00000054 + -8);
    }
    *(int *)((int)register0x00000054 + -0x34) = iVar2;
    *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
    k3c_internal_pkg_motion_vibration___AccelCommandHelper__Register_commands();
  }
LAB_0069144c:
  *(undefined4 *)((int)register0x00000054 + 0x10) = *(undefined4 *)((int)register0x00000054 + -8);
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AccelCommandHelper).Register_commands @ 0069148c (size 644) */

void k3c_internal_pkg_motion_vibration___AccelCommandHelper__Register_commands(void)

{
  undefined *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *local_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  (*(code *)**(undefined4 **)PTR_DAT_00691714)();
  FUN_00022cf8();
  *local_28 = 
  PTR_k3c_internal_pkg_motion_vibration___AccelCommandHelper__Cmd_ACCELEROMETER_MEASURE_fm_0069171c;
  if (*(int *)PTR_DAT_00691720 != 0) {
    local_28 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
  }
  local_28[1] = in_stack_00000004;
  puVar1 = PTR_DAT_00691724;
  k3c_internal_pkg_gcode___GCodeDispatch__Register_mux_command();
  FUN_00022cf8();
  *(undefined **)puVar1 =
       PTR_k3c_internal_pkg_motion_vibration___AccelCommandHelper__Cmd_ACCELEROMETER_QUERY_fm_00691730
  ;
  if (*(int *)PTR_DAT_00691720 != 0) {
    puVar1 = (undefined *)FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
  }
  *(undefined4 *)(puVar1 + 4) = in_stack_00000004;
  puVar1 = PTR_DAT_00691734;
  k3c_internal_pkg_gcode___GCodeDispatch__Register_mux_command();
  FUN_00022cf8();
  *(undefined **)puVar1 =
       PTR_k3c_internal_pkg_motion_vibration___AccelCommandHelper__Cmd_ACCELEROMETER_DEBUG_READ_fm_0069173c
  ;
  if (*(int *)PTR_DAT_00691720 != 0) {
    puVar1 = (undefined *)FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
  }
  *(undefined4 *)(puVar1 + 4) = in_stack_00000004;
  puVar1 = PTR_DAT_00691740;
  k3c_internal_pkg_gcode___GCodeDispatch__Register_mux_command();
  FUN_00022cf8();
  *(undefined **)puVar1 =
       PTR_k3c_internal_pkg_motion_vibration___AccelCommandHelper__Cmd_ACCELEROMETER_DEBUG_WRITE_fm_00691748
  ;
  if (*(int *)PTR_DAT_00691720 != 0) {
    puVar1 = (undefined *)FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
  }
  *(undefined4 *)(puVar1 + 4) = in_stack_00000004;
  k3c_internal_pkg_gcode___GCodeDispatch__Register_mux_command();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AccelCommandHelper).Cmd_ACCELEROMETER_MEASURE @ 00691754 (size 1264) */

void k3c_internal_pkg_motion_vibration___AccelCommandHelper__Cmd_ACCELEROMETER_MEASURE
               (undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 extraout_r1;
  int iVar5;
  undefined4 uVar6;
  int extraout_r2;
  undefined4 extraout_r2_00;
  int extraout_r2_01;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  undefined8 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x38)) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0xb8);
      *(undefined4 *)((int)register0x00000054 + -0xb8) = unaff_lr;
      iVar2 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = *(undefined4 *)(iVar2 + 4);
      }
      uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0xb4) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0xb0) = uVar6;
      k3c_internal_pkg_util_value_IsNone();
      if (*(char *)((int)register0x00000054 + -0xac) != '\0') {
        pcVar4 = *(code **)(*(int *)(*(int *)((int)register0x00000054 + 4) + 4) + 0x18);
        *(undefined4 *)((int)register0x00000054 + -0xb4) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
        (*pcVar4)();
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0xac);
        iVar2 = *(int *)((int)register0x00000054 + 4);
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)((int)register0x00000054 + -0xb0);
        if (*DAT_00691c48 != 0) {
          FUN_0009db64();
          *unaff_r8 = extraout_r1;
          unaff_r8[1] = *(undefined4 *)(extraout_r2 + 0x10);
          uVar3 = extraout_r1;
          iVar2 = extraout_r2;
        }
        *(undefined4 *)(iVar2 + 0x10) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0xb4) = DAT_00691c4c;
        *(undefined4 *)((int)register0x00000054 + -0xb0) = 0x22;
        *(undefined4 *)((int)register0x00000054 + -0xac) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xa8) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xa4) = 0;
        k3c_internal_pkg_logger_Debugf();
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        return;
      }
      uVar3 = FUN_001160a8();
      uVar3 = FUN_0009e2f0(uVar3,(undefined1 *)((int)register0x00000054 + -0xb4),
                           (undefined1 *)((int)register0x00000054 + -0x14));
      FUN_0009e2f0(uVar3,(undefined1 *)((int)register0x00000054 + -0x14),
                   (undefined1 *)((int)register0x00000054 + -0xb4));
      *(undefined4 *)((int)register0x00000054 + -0xa0) = DAT_00691c50;
      *(undefined4 *)((int)register0x00000054 + -0x9c) = 0xf;
      FUN_00101cdc();
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x98);
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + -0x94);
      uVar3 = *DAT_00691c54;
      uVar6 = *DAT_00691c58;
      *(undefined4 *)((int)register0x00000054 + -0xb4) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0xb0) = DAT_00691c5c;
      *(undefined4 *)((int)register0x00000054 + -0xac) = 4;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_00691c60;
      *(undefined1 **)((int)register0x00000054 + -0xa4) =
           (undefined1 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0xa0) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x9c) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0x98) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x94) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x90) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 0;
      k3c_internal_pkg_gcode___GCodeCommand__Get();
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + -0x88);
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + -0x84);
      *(undefined4 *)((int)register0x00000054 + -0xb4) =
           *(undefined4 *)((int)register0x00000054 + -0x88);
      *(undefined4 *)((int)register0x00000054 + -0xb0) =
           *(undefined4 *)((int)register0x00000054 + -0x84);
      *(undefined4 *)((int)register0x00000054 + -0xac) = DAT_00691c64;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = 1;
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x9c) = 0xffffffff;
      FUN_00151e6c();
      *(undefined4 *)((int)register0x00000054 + -0xb4) =
           *(undefined4 *)((int)register0x00000054 + -0x98);
      *(undefined4 *)((int)register0x00000054 + -0xb0) =
           *(undefined4 *)((int)register0x00000054 + -0x94);
      *(undefined4 *)((int)register0x00000054 + -0xac) = DAT_00691c68;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = 1;
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x9c) = 0xffffffff;
      FUN_00151e6c();
      *(undefined4 *)((int)register0x00000054 + -0xb4) = *DAT_00691c6c;
      *(undefined4 *)((int)register0x00000054 + -0xb0) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xac) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x9c) =
           *(undefined4 *)((int)register0x00000054 + -0x98);
      *(undefined4 *)((int)register0x00000054 + -0x98) =
           *(undefined4 *)((int)register0x00000054 + -0x94);
      *(undefined4 *)((int)register0x00000054 + -0x94) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x90) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x88) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
      FUN_003ea300();
      uVar8 = *(int *)((int)register0x00000054 + -0x80) == 0;
      if (!(bool)uVar8) break;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = DAT_00691c7c;
      FUN_00022cf8();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0xb0);
      puVar1[1] = 0x16;
      *puVar1 = DAT_00691c80;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = *DAT_00691c84;
      *(undefined4 **)((int)register0x00000054 + -0xb0) = puVar1;
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xb8);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x691c40;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
  iVar2 = *(int *)((int)register0x00000054 + 4);
  uVar9 = CONCAT44(*(undefined4 *)(iVar2 + 0xc),iVar2);
  uVar3 = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  if (*DAT_00691c48 != 0) {
    uVar3 = *(undefined4 *)(iVar2 + 0x10);
    uVar9 = FUN_0009db54();
    *unaff_r8 = uVar3;
    uVar3 = extraout_r2_00;
  }
  iVar2 = (int)((ulonglong)uVar9 >> 0x20);
  *(int *)((int)register0x00000054 + -0x6c) = iVar2;
  *(undefined4 *)((int)register0x00000054 + -0x60) = uVar3;
  *(undefined4 *)((int)uVar9 + 0x10) = 0;
  pcVar4 = *(code **)(iVar2 + 0xc);
  *(undefined4 *)((int)register0x00000054 + -0xb4) = uVar3;
  (*pcVar4)();
  iVar2 = *(int *)((int)register0x00000054 + 4);
  iVar5 = *(int *)(iVar2 + 0x18);
  if (*(int *)(iVar2 + 0x20) == iVar5) {
    uVar3 = *(undefined4 *)(iVar2 + 0x1c);
    *(undefined4 *)((int)register0x00000054 + -0xb4) = *(undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)((int)register0x00000054 + -0xb0) = uVar3;
    *(int *)((int)register0x00000054 + -0xac) = iVar5;
    FUN_00018250();
    if (*(char *)((int)register0x00000054 + -0xa8) != '\0') {
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x2c));
      *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00691c60;
      *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_00691c74;
      uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x18);
      *(undefined4 *)((int)register0x00000054 + -0xb4) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
      *(undefined4 *)((int)register0x00000054 + -0xb0) = uVar3;
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_00691c60;
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0xac);
      *(undefined4 *)((int)register0x00000054 + -0xb4) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0xb0) =
           *(undefined4 *)((int)register0x00000054 + -0x74);
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_00691c60;
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + -0xac);
      *(undefined1 **)((int)register0x00000054 + -0xb4) =
           (undefined1 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0xb0) = 3;
      *(undefined4 *)((int)register0x00000054 + -0xac) = 3;
      FUN_0013b998();
      uVar3 = *(undefined4 *)((int)register0x00000054 + -0xa8);
      uVar6 = *(undefined4 *)((int)register0x00000054 + -0xa4);
      goto LAB_00691b6c;
    }
    iVar2 = *(int *)((int)register0x00000054 + 4);
  }
  FUN_0009def4(0,(undefined1 *)((int)register0x00000054 + -0x4c),iVar2);
  *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_00691c60;
  *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_00691c70;
  uVar3 = *(undefined4 *)(extraout_r2_01 + 0x18);
  *(undefined4 *)((int)register0x00000054 + -0xb4) = *(undefined4 *)(extraout_r2_01 + 0x14);
  *(undefined4 *)((int)register0x00000054 + -0xb0) = uVar3;
  FUN_0008f77c();
  *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_00691c60;
  *(undefined4 *)((int)register0x00000054 + -0x40) =
       *(undefined4 *)((int)register0x00000054 + -0xac);
  uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x20);
  *(undefined4 *)((int)register0x00000054 + -0xb4) =
       *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x1c);
  *(undefined4 *)((int)register0x00000054 + -0xb0) = uVar3;
  FUN_0008f77c();
  *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_00691c60;
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0xac);
  *(undefined4 *)((int)register0x00000054 + -0xb4) =
       *(undefined4 *)((int)register0x00000054 + -0x68);
  *(undefined4 *)((int)register0x00000054 + -0xb0) =
       *(undefined4 *)((int)register0x00000054 + -0x74);
  FUN_0008f77c();
  *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_00691c60;
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0xac);
  *(undefined1 **)((int)register0x00000054 + -0xb4) =
       (undefined1 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0xb0) = 4;
  *(undefined4 *)((int)register0x00000054 + -0xac) = 4;
  FUN_0013b998();
  uVar3 = *(undefined4 *)((int)register0x00000054 + -0xa8);
  uVar6 = *(undefined4 *)((int)register0x00000054 + -0xa4);
LAB_00691b6c:
  *(undefined4 *)((int)register0x00000054 + -100) = uVar3;
  *(undefined4 *)((int)register0x00000054 + -0x70) = uVar6;
  pcVar4 = *(code **)(*(int *)((int)register0x00000054 + -0x6c) + 0x18);
  *(undefined4 *)((int)register0x00000054 + -0xb4) =
       *(undefined4 *)((int)register0x00000054 + -0x60);
  *(undefined4 *)((int)register0x00000054 + -0xb0) = uVar3;
  *(undefined4 *)((int)register0x00000054 + -0xac) = uVar6;
  (*pcVar4)();
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0xb4) = *(undefined4 *)((int)register0x00000054 + -100)
  ;
  *(undefined4 *)((int)register0x00000054 + -0xb0) =
       *(undefined4 *)((int)register0x00000054 + -0x70);
  FUN_0008f77c();
  *(undefined4 *)((int)register0x00000054 + -0x54) = DAT_00691c60;
  *(undefined4 *)((int)register0x00000054 + -0x50) =
       *(undefined4 *)((int)register0x00000054 + -0xac);
  *(undefined4 *)((int)register0x00000054 + -0xb4) = DAT_00691c78;
  *(undefined4 *)((int)register0x00000054 + -0xb0) = 0x29;
  *(undefined1 **)((int)register0x00000054 + -0xac) =
       (undefined1 *)((int)register0x00000054 + -0x54);
  *(undefined4 *)((int)register0x00000054 + -0xa8) = 1;
  *(undefined4 *)((int)register0x00000054 + -0xa4) = 1;
  k3c_internal_pkg_logger_Debugf();
  *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
  *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AccelCommandHelper).Cmd_ACCELEROMETER_QUERY @ 00691c88 (size 564) */

void k3c_internal_pkg_motion_vibration___AccelCommandHelper__Cmd_ACCELEROMETER_QUERY
               (undefined4 param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 extraout_s1;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x68) = unaff_lr;
      pcVar2 = *(code **)(*(int *)(*(int *)((int)register0x00000054 + 4) + 4) + 0x18);
      *(undefined4 *)((int)register0x00000054 + -100) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
      (*pcVar2)();
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + -0x5c);
      pcVar2 = *(code **)*DAT_00691ec0;
      *(undefined4 *)((int)register0x00000054 + -100) =
           **(undefined4 **)((int)register0x00000054 + 4);
      (*pcVar2)();
      *(undefined4 *)((int)register0x00000054 + -100) =
           *(undefined4 *)((int)register0x00000054 + -0x60);
      *(undefined8 *)((int)register0x00000054 + -0x60) = 0x3ff0000000000000;
      k3c_internal_pkg_toolhead___Toolhead__Dwell();
      pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x48) + 0xc);
      *(undefined4 *)((int)register0x00000054 + -100) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      (*pcVar2)();
      pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x48) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -100) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      (*pcVar2)();
      if (*(int *)((int)register0x00000054 + -0x5c) == 0) {
        *(undefined4 *)((int)register0x00000054 + -100) = DAT_00691ecc;
        FUN_00022cf8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x60);
        puVar1[1] = 0x23;
        *puVar1 = DAT_00691ed0;
        *(undefined4 *)((int)register0x00000054 + 0xc) = DAT_00691ed4;
        *(undefined4 **)((int)register0x00000054 + 0x10) = puVar1;
        return;
      }
      iVar4 = *(int *)((int)register0x00000054 + -0x5c) * 0xc + -0xc;
      uVar3 = *(uint *)(*(int *)((int)register0x00000054 + -0x60) + iVar4 + 4);
      iVar4 = *(int *)(*(int *)((int)register0x00000054 + -0x60) + iVar4);
      uVar6 = uVar3 == 1;
      if (1 < uVar3) {
        uVar6 = uVar3 == 2;
        if (2 < uVar3) {
          uVar6 = uVar3 == 3;
          if (3 < uVar3) {
            uVar8 = *(undefined8 *)(iVar4 + 8);
            *(undefined8 *)((int)register0x00000054 + -0x3c) = *(undefined8 *)(iVar4 + 0x10);
            *(undefined8 *)((int)register0x00000054 + -0x44) = *(undefined8 *)(iVar4 + 0x18);
            uVar7 = FUN_0009defc((int)uVar8,0,(undefined1 *)((int)register0x00000054 + -0x18));
            *(ulonglong *)((int)register0x00000054 + -0x24) = CONCAT44(extraout_s1,uVar7);
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + -0x24);
            *(undefined4 *)((int)register0x00000054 + -0x60) =
                 *(undefined4 *)((int)register0x00000054 + -0x20);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_00691ec4;
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined8 *)((int)register0x00000054 + -0x2c) =
                 *(undefined8 *)((int)register0x00000054 + -0x3c);
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + -0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x60) =
                 *(undefined4 *)((int)register0x00000054 + -0x28);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00691ec4;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined8 *)((int)register0x00000054 + -0x34) =
                 *(undefined8 *)((int)register0x00000054 + -0x44);
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + -0x34);
            *(undefined4 *)((int)register0x00000054 + -0x60) =
                 *(undefined4 *)((int)register0x00000054 + -0x30);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + -8) = DAT_00691ec4;
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 *)((int)register0x00000054 + -100) = DAT_00691ec8;
            *(undefined4 *)((int)register0x00000054 + -0x60) = 0x30;
            *(undefined1 **)((int)register0x00000054 + -0x5c) =
                 (undefined1 *)((int)register0x00000054 + -0x18);
            *(undefined4 *)((int)register0x00000054 + -0x58) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x54) = 3;
            FUN_0013b72c();
            pcVar2 = (code *)**(undefined4 **)(*(int *)((int)register0x00000054 + 8) + 0x1c);
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            *(undefined4 *)((int)register0x00000054 + -0x60) =
                 *(undefined4 *)((int)register0x00000054 + -0x4c);
            *(undefined1 *)((int)register0x00000054 + -0x5c) = 1;
            (*pcVar2)();
            *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
            return;
          }
          FUN_0009dbd4(3,3);
        }
        FUN_0009dbd4(2,2);
      }
      param_1 = FUN_0009dbd4(1);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x68);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x691eb8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*AccelCommandHelper).Cmd_ACCELEROMETER_DEBUG_READ @ 00691ed8 (size 356) */

void k3c_internal_pkg_motion_vibration___AccelCommandHelper__Cmd_ACCELEROMETER_DEBUG_READ(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_gcode___GCodeCommand__Get();
  FUN_0008f77c();
  k3c_internal_pkg_util_cast_ToIntE();
  (**(code **)(*(int *)(in_stack_00000004 + 4) + 0x10))();
  FUN_0009df04(0,&local_10);
  FUN_00020ce0();
  local_10 = DAT_00692050;
  local_c = 3;
  local_8 = DAT_0069205c;
  local_4 = DAT_00692060 + 0x18;
  k3c_internal_pkg_logger_Debugf();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AccelCommandHelper).Cmd_ACCELEROMETER_DEBUG_WRITE @ 00692068 (size 440) */

void k3c_internal_pkg_motion_vibration___AccelCommandHelper__Cmd_ACCELEROMETER_DEBUG_WRITE(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_gcode___GCodeCommand__Get();
  k3c_internal_pkg_gcode___GCodeCommand__Get();
  FUN_0008f77c();
  k3c_internal_pkg_util_cast_ToIntE();
  FUN_0008f77c();
  k3c_internal_pkg_util_cast_ToIntE();
  (**(code **)(*(int *)(in_stack_00000004 + 4) + 0x14))();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ClockSyncRegression).Reset @ 00692240 (size 52) */

void k3c_internal_pkg_motion_vibration___ClockSyncRegression__Reset(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(in_stack_00000004 + 0x24) = in_stack_00000008;
  *(undefined8 *)(in_stack_00000004 + 0x44) = in_stack_00000008;
  *(undefined8 *)(in_stack_00000004 + 0x34) = in_stack_00000010;
  *(undefined8 *)(in_stack_00000004 + 0x2c) = 0;
  *(undefined8 *)(in_stack_00000004 + 0x3c) = 0;
  *(undefined8 *)(in_stack_00000004 + 0x14) = 0;
  *(undefined8 *)(in_stack_00000004 + 0x1c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00692270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ClockSyncRegression).Update @ 00692274 (size 180) */

void k3c_internal_pkg_motion_vibration___ClockSyncRegression__Update(void)

{
  int unaff_r10;
  double dVar1;
  double dVar2;
  int in_stack_00000004;
  double in_stack_00000008;
  double in_stack_00000010;
  undefined8 local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  dVar1 = *(double *)(in_stack_00000004 + 0xc);
  dVar2 = in_stack_00000008 - *(double *)(in_stack_00000004 + 0x24);
  *(double *)(in_stack_00000004 + 0x24) = *(double *)(in_stack_00000004 + 0x24) + dVar2 * dVar1;
  FUN_000b0b80();
  *(double *)(in_stack_00000004 + 0x2c) =
       (*(double *)(in_stack_00000004 + 0x2c) + local_20 * dVar1) * (1.0 - dVar1);
  in_stack_00000010 = in_stack_00000010 - *(double *)(in_stack_00000004 + 0x34);
  *(double *)(in_stack_00000004 + 0x34) =
       *(double *)(in_stack_00000004 + 0x34) + in_stack_00000010 * dVar1;
  *(double *)(in_stack_00000004 + 0x3c) =
       (*(double *)(in_stack_00000004 + 0x3c) + in_stack_00000010 * dVar2 * dVar1) * (1.0 - dVar1);
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ClockSyncRegression).Set_last_chip_clock @ 00692328 (size 80) */

void k3c_internal_pkg_motion_vibration___ClockSyncRegression__Set_last_chip_clock(void)

{
  int unaff_r10;
  int in_stack_00000004;
  double in_stack_00000008;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_motion_vibration___ClockSyncRegression__Get_clock_translation();
  *(double *)(in_stack_00000004 + 0x14) = in_stack_00000008;
  *(double *)(in_stack_00000004 + 0x1c) = local_18 + (in_stack_00000008 - local_10) * local_8;
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ClockSyncRegression).Get_clock_translation @ 00692378 (size 184) */

void k3c_internal_pkg_motion_vibration___ClockSyncRegression__Get_clock_translation(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined1 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_util_value_False();
  if (local_14 != '\0') {
    return;
  }
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ClockSyncRegression).Get_time_translation @ 00692438 (size 216) */

void k3c_internal_pkg_motion_vibration___ClockSyncRegression__Get_time_translation(void)

{
  code *pcVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_motion_vibration___ClockSyncRegression__Get_clock_translation();
  pcVar1 = DAT_00692514;
  FUN_0008b890();
  (*pcVar1)();
  FUN_0008b890();
  (*pcVar1)();
  return;
}



/* k3c/internal/pkg/motion/vibration.NewADXL345 @ 00692518 (size 4372) */

void k3c_internal_pkg_motion_vibration_NewADXL345(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int *piVar5;
  int *extraout_r1;
  undefined *puVar6;
  uint uVar7;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined4 *extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int *extraout_r1_07;
  int *extraout_r1_08;
  undefined4 *puVar8;
  int extraout_r1_09;
  int extraout_r1_10;
  undefined *extraout_r1_11;
  undefined *extraout_r1_12;
  undefined *extraout_r1_13;
  undefined *extraout_r1_14;
  undefined *extraout_r1_15;
  undefined *extraout_r1_16;
  int *piVar9;
  int *extraout_r2;
  int extraout_r2_00;
  uint uVar10;
  uint extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  uint extraout_r2_04;
  uint extraout_r2_05;
  uint extraout_r2_06;
  undefined4 *extraout_r2_07;
  uint extraout_r2_08;
  undefined *extraout_r2_09;
  undefined *puVar11;
  undefined *extraout_r2_10;
  undefined *extraout_r2_11;
  undefined *extraout_r2_12;
  undefined *extraout_r2_13;
  undefined *extraout_r2_14;
  int iVar12;
  int extraout_r3;
  undefined4 uVar13;
  int iVar14;
  int extraout_r3_00;
  undefined4 extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  int extraout_r3_04;
  int extraout_r3_05;
  int extraout_r3_06;
  int iVar15;
  int iVar16;
  int iVar17;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar18;
  undefined4 unaff_lr;
  undefined1 uVar19;
  undefined8 uVar20;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0xe4)) {
      puVar18 = (undefined1 *)((int)register0x00000054 + -0x164);
      *(undefined4 *)((int)register0x00000054 + -0x164) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692d94;
      FUN_00022cf8();
      piVar5 = *(int **)((int)register0x00000054 + -0x15c);
      piVar9 = *(int **)((int)register0x00000054 + 4);
      iVar12 = *piVar9;
      if (*(int *)PTR_DAT_00692d98 != 0) {
        FUN_0009db54();
        *unaff_r8 = extraout_r3;
        piVar5 = extraout_r1;
        piVar9 = extraout_r2;
        iVar12 = extraout_r3;
      }
      *(int **)((int)register0x00000054 + -0xfc) = piVar5;
      *piVar5 = iVar12;
      *(int **)((int)register0x00000054 + -0x160) = piVar9;
      *(undefined **)((int)register0x00000054 + -0x15c) = PTR_DAT_00692d9c;
      *(int **)((int)register0x00000054 + -0x158) = piVar5;
      k3c_internal_pkg_motion_vibration_NewAccelCommandHelper();
      *(undefined4 *)(*(int *)((int)register0x00000054 + -0xfc) + 4) = 0;
      uVar1 = FUN_0009def8(0,(undefined1 *)((int)register0x00000054 + -0x3c));
      FUN_0009de68(uVar1,(undefined1 *)((int)register0x00000054 + -0xe8));
      *(undefined1 **)((int)register0x00000054 + -0x30) =
           (undefined1 *)((int)register0x00000054 + -0xe8);
      FUN_0006aa3c();
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + -0x160);
      uVar1 = *(undefined4 *)PTR_DAT_00692da0;
      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692da4;
      *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
      *(undefined **)((int)register0x00000054 + -0x158) =
           PTR_s_SCALE_XYsequencebuffered_s__s__s_008216f7_0x14dd_00692da8;
      *(undefined4 *)((int)register0x00000054 + -0x154) = 8;
      FUN_00025f60();
      puVar6 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x150);
      uVar19 = 0;
      puVar11 = PTR_DAT_00692dac;
      if (puVar6 == PTR_DAT_00692dac) {
        *(undefined8 *)((int)register0x00000054 + -0x114) =
             *(undefined8 *)(*(undefined4 **)((int)register0x00000054 + -0x150))[1];
        *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692db0;
        FUN_00022cf8();
        *(int *)((int)register0x00000054 + -4) = *(int *)((int)register0x00000054 + -0x15c);
        *(undefined8 *)(*(int *)((int)register0x00000054 + -0x15c) + 8) =
             *(undefined8 *)((int)register0x00000054 + -0x114);
        *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692db4;
        *(undefined1 **)((int)register0x00000054 + -0x15c) =
             (undefined1 *)((int)register0x00000054 + -0x3c);
        *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_00692db8;
        *(undefined4 *)((int)register0x00000054 + -0x154) = 1;
        FUN_00093a08();
        piVar5 = *(int **)((int)register0x00000054 + -0x150);
        piVar5[1] = 2;
        piVar5[2] = 2;
        if (*(int *)PTR_DAT_00692d98 == 0) {
          iVar12 = *(int *)((int)register0x00000054 + -4);
        }
        else {
          piVar5 = (int *)FUN_0009db64();
          iVar12 = *(int *)((int)register0x00000054 + -4);
          *unaff_r8 = iVar12;
          unaff_r8[1] = *piVar5;
        }
        *piVar5 = iVar12;
        uVar1 = *(undefined4 *)PTR_DAT_00692da0;
        *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692da4;
        *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
        *(undefined **)((int)register0x00000054 + -0x158) =
             PTR_s_SCALE_XYsequencebuffered_s__s__s_008216f7_0x14dd_00692da8;
        *(undefined4 *)((int)register0x00000054 + -0x154) = 8;
        FUN_00025f60();
        puVar6 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x150);
        uVar19 = 0;
        puVar11 = PTR_DAT_00692dac;
        if (puVar6 == PTR_DAT_00692dac) {
          *(undefined8 *)((int)register0x00000054 + -0x114) =
               *(undefined8 *)(*(undefined4 **)((int)register0x00000054 + -0x150))[1];
          *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692db0;
          FUN_00022cf8();
          puVar2 = *(undefined8 **)((int)register0x00000054 + -0x15c);
          *(undefined8 **)((int)register0x00000054 + -4) = puVar2;
          *puVar2 = 0x3ff0000000000000;
          puVar2[1] = *(undefined8 *)((int)register0x00000054 + -0x114);
          *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692db4;
          *(undefined1 **)((int)register0x00000054 + -0x15c) =
               (undefined1 *)((int)register0x00000054 + -0x3c);
          *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_00692dbc;
          *(undefined4 *)((int)register0x00000054 + -0x154) = 1;
          FUN_00093a08();
          piVar5 = *(int **)((int)register0x00000054 + -0x150);
          piVar5[1] = 2;
          piVar5[2] = 2;
          if (*(int *)PTR_DAT_00692d98 == 0) {
            iVar12 = *(int *)((int)register0x00000054 + -4);
          }
          else {
            piVar5 = (int *)FUN_0009db64();
            iVar12 = *(int *)((int)register0x00000054 + -4);
            *unaff_r8 = iVar12;
            unaff_r8[1] = *piVar5;
          }
          *piVar5 = iVar12;
          uVar1 = *(undefined4 *)PTR_DAT_00692da0;
          *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692da4;
          *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
          *(undefined **)((int)register0x00000054 + -0x158) =
               PTR_s_SCALE_Zshaper_bicubicx_county_co_008216f7_0x8ef_00692dc0;
          *(undefined4 *)((int)register0x00000054 + -0x154) = 7;
          FUN_00025f60();
          puVar6 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x150);
          uVar19 = 0;
          puVar11 = PTR_DAT_00692dac;
          if (puVar6 == PTR_DAT_00692dac) {
            *(undefined8 *)((int)register0x00000054 + -0x114) =
                 *(undefined8 *)(*(undefined4 **)((int)register0x00000054 + -0x150))[1];
            *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692db0;
            FUN_00022cf8();
            puVar2 = *(undefined8 **)((int)register0x00000054 + -0x15c);
            *(undefined8 **)((int)register0x00000054 + -4) = puVar2;
            *puVar2 = 0x4000000000000000;
            puVar2[1] = *(undefined8 *)((int)register0x00000054 + -0x114);
            *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692db4;
            *(undefined1 **)((int)register0x00000054 + -0x15c) =
                 (undefined1 *)((int)register0x00000054 + -0x3c);
            *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_00692dc4;
            *(undefined4 *)((int)register0x00000054 + -0x154) = 1;
            FUN_00093a08();
            piVar5 = *(int **)((int)register0x00000054 + -0x150);
            piVar5[1] = 2;
            piVar5[2] = 2;
            if (*(int *)PTR_DAT_00692d98 == 0) {
              iVar12 = *(int *)((int)register0x00000054 + -4);
            }
            else {
              piVar5 = (int *)FUN_0009db64();
              iVar12 = *(int *)((int)register0x00000054 + -4);
              *unaff_r8 = iVar12;
              unaff_r8[1] = *piVar5;
            }
            *piVar5 = iVar12;
            uVar1 = *(undefined4 *)PTR_DAT_00692da0;
            *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692da4;
            *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
            *(undefined **)((int)register0x00000054 + -0x158) =
                 PTR_s_SCALE_XYsequencebuffered_s__s__s_008216f7_0x14dd_00692da8;
            *(undefined4 *)((int)register0x00000054 + -0x154) = 8;
            FUN_00025f60();
            puVar6 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x150);
            uVar19 = 0;
            puVar11 = PTR_DAT_00692dac;
            if (puVar6 == PTR_DAT_00692dac) {
              *(undefined8 *)((int)register0x00000054 + -0x114) =
                   *(undefined8 *)(*(undefined4 **)((int)register0x00000054 + -0x150))[1];
              *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692db0;
              FUN_00022cf8();
              *(int *)((int)register0x00000054 + -4) = *(int *)((int)register0x00000054 + -0x15c);
              *(double *)(*(int *)((int)register0x00000054 + -0x15c) + 8) =
                   -*(double *)((int)register0x00000054 + -0x114);
              *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692db4;
              *(undefined1 **)((int)register0x00000054 + -0x15c) =
                   (undefined1 *)((int)register0x00000054 + -0x3c);
              *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_00692dc8;
              *(undefined4 *)((int)register0x00000054 + -0x154) = 2;
              FUN_00093a08();
              piVar5 = *(int **)((int)register0x00000054 + -0x150);
              piVar5[1] = 2;
              piVar5[2] = 2;
              if (*(int *)PTR_DAT_00692d98 == 0) {
                iVar12 = *(int *)((int)register0x00000054 + -4);
              }
              else {
                piVar5 = (int *)FUN_0009db64();
                iVar12 = *(int *)((int)register0x00000054 + -4);
                *unaff_r8 = iVar12;
                unaff_r8[1] = *piVar5;
              }
              *piVar5 = iVar12;
              uVar1 = *(undefined4 *)PTR_DAT_00692da0;
              *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692da4;
              *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
              *(undefined **)((int)register0x00000054 + -0x158) =
                   PTR_s_SCALE_XYsequencebuffered_s__s__s_008216f7_0x14dd_00692da8;
              *(undefined4 *)((int)register0x00000054 + -0x154) = 8;
              FUN_00025f60();
              puVar6 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x150);
              uVar19 = 0;
              puVar11 = PTR_DAT_00692dac;
              if (puVar6 == PTR_DAT_00692dac) {
                *(undefined8 *)((int)register0x00000054 + -0x114) =
                     *(undefined8 *)(*(undefined4 **)((int)register0x00000054 + -0x150))[1];
                *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692db0;
                FUN_00022cf8();
                puVar2 = *(undefined8 **)((int)register0x00000054 + -0x15c);
                *(undefined8 **)((int)register0x00000054 + -4) = puVar2;
                *puVar2 = 0x3ff0000000000000;
                puVar2[1] = -*(double *)((int)register0x00000054 + -0x114);
                *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692db4;
                *(undefined1 **)((int)register0x00000054 + -0x15c) =
                     (undefined1 *)((int)register0x00000054 + -0x3c);
                *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_008204a8_2_00692dcc;
                *(undefined4 *)((int)register0x00000054 + -0x154) = 2;
                FUN_00093a08();
                piVar5 = *(int **)((int)register0x00000054 + -0x150);
                piVar5[1] = 2;
                piVar5[2] = 2;
                if (*(int *)PTR_DAT_00692d98 == 0) {
                  iVar12 = *(int *)((int)register0x00000054 + -4);
                }
                else {
                  piVar5 = (int *)FUN_0009db64();
                  iVar12 = *(int *)((int)register0x00000054 + -4);
                  *unaff_r8 = iVar12;
                  unaff_r8[1] = *piVar5;
                }
                *piVar5 = iVar12;
                uVar1 = *(undefined4 *)PTR_DAT_00692da0;
                *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692da4;
                *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
                *(undefined **)((int)register0x00000054 + -0x158) =
                     PTR_s_SCALE_Zshaper_bicubicx_county_co_008216f7_0x8ef_00692dc0;
                *(undefined4 *)((int)register0x00000054 + -0x154) = 7;
                FUN_00025f60();
                puVar6 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x150);
                uVar19 = 0;
                puVar11 = PTR_DAT_00692dac;
                if (puVar6 == PTR_DAT_00692dac) {
                  *(undefined8 *)((int)register0x00000054 + -0x114) =
                       *(undefined8 *)(*(undefined4 **)((int)register0x00000054 + -0x150))[1];
                  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692db0;
                  FUN_00022cf8();
                  puVar2 = *(undefined8 **)((int)register0x00000054 + -0x15c);
                  *(undefined8 **)((int)register0x00000054 + -4) = puVar2;
                  *puVar2 = 0x4000000000000000;
                  puVar2[1] = -*(double *)((int)register0x00000054 + -0x114);
                  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692db4;
                  *(undefined1 **)((int)register0x00000054 + -0x15c) =
                       (undefined1 *)((int)register0x00000054 + -0x3c);
                  *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_00692dd0;
                  *(undefined4 *)((int)register0x00000054 + -0x154) = 2;
                  FUN_00093a08();
                  piVar5 = *(int **)((int)register0x00000054 + -0x150);
                  piVar5[1] = 2;
                  piVar5[2] = 2;
                  if (*(int *)PTR_DAT_00692d98 == 0) {
                    iVar12 = *(int *)((int)register0x00000054 + -4);
                  }
                  else {
                    piVar5 = (int *)FUN_0009db64();
                    iVar12 = *(int *)((int)register0x00000054 + -4);
                    *unaff_r8 = iVar12;
                    unaff_r8[1] = *piVar5;
                  }
                  *piVar5 = iVar12;
                  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692dd4;
                  FUN_00022cf8();
                  puVar3 = *(undefined4 **)((int)register0x00000054 + -0x15c);
                  puVar3[1] = 1;
                  *puVar3 = PTR_DAT_00692db8;
                  puVar3[3] = 1;
                  puVar3[2] = PTR_DAT_00692dbc;
                  puVar3[5] = 1;
                  puVar3[4] = PTR_DAT_00692dc4;
                  *(undefined4 **)((int)register0x00000054 + -0x160) = puVar3;
                  *(undefined4 *)((int)register0x00000054 + -0x15c) = 3;
                  *(undefined4 *)((int)register0x00000054 + -0x158) = 3;
                  FUN_0008f820();
                  uVar1 = *(undefined4 *)((int)register0x00000054 + -0x154);
                  *(undefined4 *)((int)register0x00000054 + -0x160) =
                       *(undefined4 *)((int)register0x00000054 + 4);
                  *(undefined **)((int)register0x00000054 + -0x15c) =
                       PTR_s_axes_mapDISTANCEVELOCITYCARRIAGE_008216f7_0x14ad_00692dd8;
                  *(undefined4 *)((int)register0x00000054 + -0x158) = 8;
                  *(undefined **)((int)register0x00000054 + -0x154) = PTR_DAT_00692ddc;
                  *(undefined4 *)((int)register0x00000054 + -0x150) = uVar1;
                  *(undefined **)((int)register0x00000054 + -0x14c) = PTR_DAT_00692de0;
                  *(undefined4 *)((int)register0x00000054 + -0x148) = 1;
                  *(undefined4 *)((int)register0x00000054 + -0x144) = 3;
                  *(undefined1 *)((int)register0x00000054 + -0x140) = 1;
                  k3c_internal_pkg_printer___ConfigWrapper__Getlist();
                  uVar1 = *(undefined4 *)((int)register0x00000054 + -0x138);
                  *(undefined4 *)((int)register0x00000054 + -0x11c) = uVar1;
                  *(undefined4 *)((int)register0x00000054 + -0xec) =
                       *(undefined4 *)((int)register0x00000054 + -0x13c);
                  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692de4;
                  *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
                  *(undefined4 *)((int)register0x00000054 + -0x158) = uVar1;
                  FUN_000986b8();
                  uVar1 = *(undefined4 *)((int)register0x00000054 + -0x11c);
                  uVar20 = CONCAT44(uVar1,*(undefined4 *)((int)register0x00000054 + -0x154));
                  iVar12 = *(int *)((int)register0x00000054 + -0xfc);
                  *(undefined4 *)(iVar12 + 0xc) = uVar1;
                  *(undefined4 *)(iVar12 + 0x10) = uVar1;
                  if (*(int *)PTR_DAT_00692d98 != 0) {
                    uVar20 = FUN_0009db64();
                    *unaff_r8 = (int)uVar20;
                    unaff_r8[1] = *(int *)(extraout_r2_00 + 8);
                    iVar12 = extraout_r2_00;
                  }
                  iVar14 = (int)((ulonglong)uVar20 >> 0x20);
                  *(int *)(iVar12 + 8) = (int)uVar20;
                  iVar12 = 0;
                  while (iVar12 < iVar14) {
                    *(int *)((int)register0x00000054 + -0x128) = iVar12;
                    uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xec) + iVar12 * 8);
                    *(undefined4 *)((int)register0x00000054 + -0x100) = uVar1;
                    uVar13 = *(undefined4 *)
                              (*(int *)((int)register0x00000054 + -0xec) + iVar12 * 8 + 4);
                    *(undefined4 *)((int)register0x00000054 + -300) = uVar13;
                    *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692db4;
                    *(undefined1 **)((int)register0x00000054 + -0x15c) =
                         (undefined1 *)((int)register0x00000054 + -0x3c);
                    *(undefined4 *)((int)register0x00000054 + -0x158) = uVar1;
                    *(undefined4 *)((int)register0x00000054 + -0x154) = uVar13;
                    FUN_00093560();
                    uVar19 = 1;
                    if (*(char *)((int)register0x00000054 + -0x14c) == '\0') goto LAB_006935e8;
                    *(undefined4 *)((int)register0x00000054 + -0x160) =
                         *(undefined4 *)((int)register0x00000054 + -0x100);
                    *(undefined4 *)((int)register0x00000054 + -0x15c) =
                         *(undefined4 *)((int)register0x00000054 + -300);
                    FUN_00151ce4();
                    *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692db4;
                    *(undefined1 **)((int)register0x00000054 + -0x15c) =
                         (undefined1 *)((int)register0x00000054 + -0x3c);
                    FUN_00025f60();
                    uVar7 = *(uint *)(*(int *)((int)register0x00000054 + -0xfc) + 0xc);
                    uVar10 = *(uint *)((int)register0x00000054 + -0x128);
                    uVar19 = uVar10 == uVar7;
                    if (uVar7 <= uVar10) goto LAB_006935e0;
                    iVar12 = uVar10 * 3;
                    iVar14 = *(int *)(*(int *)((int)register0x00000054 + -0xfc) + 8);
                    iVar15 = iVar14 + uVar10 * 0xc;
                    piVar5 = *(int **)((int)register0x00000054 + -0x150);
                    iVar17 = piVar5[2];
                    iVar16 = *piVar5;
                    *(int *)(iVar15 + 4) = piVar5[1];
                    *(int *)(iVar15 + 8) = iVar17;
                    if (*(int *)PTR_DAT_00692d98 != 0) {
                      FUN_0009db64();
                      *unaff_r8 = iVar16;
                      unaff_r8[1] = *(int *)(extraout_r3_00 + extraout_r1_00 * 4);
                      iVar12 = extraout_r1_00;
                      uVar10 = extraout_r2_01;
                      iVar14 = extraout_r3_00;
                    }
                    *(int *)(iVar14 + iVar12 * 4) = iVar16;
                    iVar14 = *(int *)((int)register0x00000054 + -0x11c);
                    iVar12 = uVar10 + 1;
                  }
                  *(undefined4 *)((int)register0x00000054 + -0x160) =
                       *(undefined4 *)((int)register0x00000054 + 4);
                  *(undefined **)((int)register0x00000054 + -0x15c) =
                       PTR_s_ratefifo__3f__6fAXIS_csv__1f_____00820821_0x2bd_00692de8;
                  *(undefined4 *)((int)register0x00000054 + -0x158) = 4;
                  *(undefined **)((int)register0x00000054 + -0x154) = PTR_DAT_00692dec;
                  *(undefined **)((int)register0x00000054 + -0x150) = PTR_DAT_00692df0;
                  *(undefined4 *)((int)register0x00000054 + -0x14c) = 0;
                  *(undefined4 *)((int)register0x00000054 + -0x148) = 0;
                  *(undefined1 *)((int)register0x00000054 + -0x144) = 1;
                  k3c_internal_pkg_printer___ConfigWrapper__Getint();
                  uVar1 = *(undefined4 *)((int)register0x00000054 + -0x140);
                  *(undefined4 *)(*(int *)((int)register0x00000054 + -0xfc) + 0x14) = uVar1;
                  uVar13 = *(undefined4 *)PTR_DAT_00692df4;
                  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00692df8;
                  *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar13;
                  *(undefined4 *)((int)register0x00000054 + -0x158) = uVar1;
                  FUN_0009275c();
                  uVar19 = *(char *)((int)register0x00000054 + -0x150) == '\0';
                  if (!(bool)uVar19) {
                    iVar12 = *(int *)((int)register0x00000054 + -0xfc);
                    *(undefined4 *)(iVar12 + 0x18) = 0;
                    *(undefined4 *)(iVar12 + 0x1c) = 0;
                    *(undefined4 *)(iVar12 + 0x24) = 0;
                    *(undefined4 *)(iVar12 + 0x28) = 0;
                    if (*(int *)PTR_DAT_00692d98 != 0) {
                      iVar12 = *(int *)(iVar12 + 0x20);
                      FUN_0009db54();
                      *unaff_r8 = iVar12;
                      iVar12 = extraout_r1_01;
                    }
                    *(undefined **)(iVar12 + 0x20) = PTR_DAT_00692dfc;
                    pcVar4 = (code *)**(undefined4 **)PTR_DAT_00692e00;
                    *(undefined4 *)((int)register0x00000054 + -0x160) =
                         *(undefined4 *)((int)register0x00000054 + 4);
                    *(undefined4 *)((int)register0x00000054 + -0x15c) = 3;
                    *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_00692e04;
                    *(undefined4 *)((int)register0x00000054 + -0x154) = 6;
                    *(undefined4 *)((int)register0x00000054 + -0x150) = DAT_00692e08;
                    *(undefined4 *)((int)register0x00000054 + -0x14c) = 0;
                    *(undefined4 *)((int)register0x00000054 + -0x148) = 0;
                    *(undefined1 *)((int)register0x00000054 + -0x144) = 0;
                    (*pcVar4)();
                    puVar3 = *(undefined4 **)((int)register0x00000054 + -0x140);
                    iVar12 = *(int *)((int)register0x00000054 + -0x13c);
                    uVar1 = *(undefined4 *)((int)register0x00000054 + -0x138);
                    if (*(int *)PTR_DAT_00692d98 == 0) {
                      iVar14 = *(int *)((int)register0x00000054 + -0xfc);
                    }
                    else {
                      FUN_0009db64();
                      *unaff_r8 = (int)extraout_r1_02;
                      iVar14 = *(int *)((int)register0x00000054 + -0xfc);
                      unaff_r8[1] = *(int *)(iVar14 + 0x2c);
                      puVar3 = extraout_r1_02;
                      iVar12 = extraout_r2_02;
                      uVar1 = extraout_r3_01;
                    }
                    *(undefined4 **)(iVar14 + 0x2c) = puVar3;
                    if (iVar12 == 0) {
                      uVar20 = CONCAT44(*puVar3,iVar14);
                      if (*(int *)PTR_DAT_006936a4 != 0) {
                        uVar20 = FUN_0009db64();
                        *unaff_r8 = (int)((ulonglong)uVar20 >> 0x20);
                        unaff_r8[1] = *(int *)((int)uVar20 + 0x30);
                      }
                      uVar1 = (undefined4)((ulonglong)uVar20 >> 0x20);
                      *(undefined4 *)((int)register0x00000054 + -0x108) = uVar1;
                      *(undefined4 *)((int)uVar20 + 0x30) = uVar1;
                      *(undefined4 *)((int)register0x00000054 + -0x160) = uVar1;
                      k3c_internal_pkg_mcu___MCU__Create_oid();
                      uVar1 = *(undefined4 *)((int)register0x00000054 + -0x15c);
                      iVar12 = *(int *)((int)register0x00000054 + -0xfc);
                      uVar20 = CONCAT44(iVar12,uVar1);
                      *(undefined4 *)(iVar12 + 0x34) = uVar1;
                      if (*(int *)PTR_DAT_006936a4 != 0) {
                        uVar20 = FUN_0009db74(uVar1,iVar12,*(undefined4 *)(iVar12 + 0x38));
                        iVar12 = (int)((ulonglong)uVar20 >> 0x20);
                        *unaff_r8 = extraout_r2_03;
                        unaff_r8[1] = *(int *)(iVar12 + 0x3c);
                        unaff_r8[2] = *(int *)(iVar12 + 0x40);
                      }
                      iVar12 = (int)((ulonglong)uVar20 >> 0x20);
                      *(int *)((int)register0x00000054 + -0x118) = (int)uVar20;
                      *(undefined4 *)(iVar12 + 0x38) = 0;
                      *(undefined4 *)(iVar12 + 0x3c) = 0;
                      *(undefined4 *)(iVar12 + 0x40) = 0;
                      *(undefined4 *)((int)register0x00000054 + -0x130) =
                           *(undefined4 *)(*(int *)(iVar12 + 0x2c) + 0xc);
                      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x20));
                      *(int *)((int)register0x00000054 + -0x160) = (int)uVar20;
                      FUN_00020ce0();
                      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_006936a8;
                      *(undefined4 *)((int)register0x00000054 + -0x1c) =
                           *(undefined4 *)((int)register0x00000054 + -0x15c);
                      *(undefined4 *)((int)register0x00000054 + -0x160) =
                           *(undefined4 *)((int)register0x00000054 + -0x130);
                      FUN_00020ce0();
                      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006936a8;
                      *(undefined4 *)((int)register0x00000054 + -0x14) =
                           *(undefined4 *)((int)register0x00000054 + -0x15c);
                      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_006936ac;
                      *(undefined4 *)((int)register0x00000054 + -0x15c) = 0x20;
                      *(undefined1 **)((int)register0x00000054 + -0x158) =
                           (undefined1 *)((int)register0x00000054 + -0x20);
                      *(undefined4 *)((int)register0x00000054 + -0x154) = 2;
                      *(undefined4 *)((int)register0x00000054 + -0x150) = 2;
                      FUN_0013b72c();
                      iVar14 = *(int *)((int)register0x00000054 + -0x108);
                      uVar7 = *(uint *)(iVar14 + 0x78);
                      uVar10 = *(int *)(iVar14 + 0x74) + 1;
                      iVar15 = *(int *)((int)register0x00000054 + -0x14c);
                      uVar1 = *(undefined4 *)((int)register0x00000054 + -0x148);
                      iVar12 = *(int *)(iVar14 + 0x70);
                      if (uVar7 < uVar10) {
                        *(undefined4 *)((int)register0x00000054 + -0x120) = uVar1;
                        *(int *)((int)register0x00000054 + -0xf0) = iVar15;
                        *(int *)((int)register0x00000054 + -0x160) = iVar12;
                        *(uint *)((int)register0x00000054 + -0x15c) = uVar10;
                        *(uint *)((int)register0x00000054 + -0x158) = uVar7;
                        *(undefined4 *)((int)register0x00000054 + -0x154) = 1;
                        *(undefined **)((int)register0x00000054 + -0x150) = PTR_DAT_006936b0;
                        FUN_000987f4();
                        iVar12 = *(int *)((int)register0x00000054 + -0x14c);
                        uVar10 = *(uint *)((int)register0x00000054 + -0x148);
                        iVar14 = *(int *)((int)register0x00000054 + -0x108);
                        *(undefined4 *)(iVar14 + 0x78) =
                             *(undefined4 *)((int)register0x00000054 + -0x144);
                        if (*(int *)PTR_DAT_006936a4 != 0) {
                          FUN_0009db64();
                          *unaff_r8 = extraout_r1_03;
                          unaff_r8[1] = *(int *)(extraout_r3_02 + 0x70);
                          iVar12 = extraout_r1_03;
                          uVar10 = extraout_r2_04;
                          iVar14 = extraout_r3_02;
                        }
                        *(int *)(iVar14 + 0x70) = iVar12;
                        iVar15 = *(int *)((int)register0x00000054 + -0xf0);
                        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x120);
                      }
                      *(uint *)(iVar14 + 0x74) = uVar10;
                      iVar14 = uVar10 - 1;
                      *(undefined4 *)(iVar12 + iVar14 * 8 + 4) = uVar1;
                      if (*(int *)PTR_DAT_006936a4 != 0) {
                        iVar14 = FUN_0009db64();
                        *unaff_r8 = iVar15;
                        unaff_r8[1] = *(int *)(iVar12 + iVar14 * 8);
                      }
                      *(int *)(iVar12 + iVar14 * 8) = iVar15;
                      *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
                      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
                      *(undefined4 *)((int)register0x00000054 + -0x160) =
                           *(undefined4 *)((int)register0x00000054 + -0x118);
                      FUN_00020ce0();
                      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_006936a8;
                      *(undefined4 *)((int)register0x00000054 + -0xc) =
                           *(undefined4 *)((int)register0x00000054 + -0x15c);
                      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_006936b4;
                      *(undefined4 *)((int)register0x00000054 + -0x15c) = 0x29;
                      *(undefined1 **)((int)register0x00000054 + -0x158) =
                           (undefined1 *)((int)register0x00000054 + -0x10);
                      *(undefined4 *)((int)register0x00000054 + -0x154) = 1;
                      *(undefined4 *)((int)register0x00000054 + -0x150) = 1;
                      FUN_0013b72c();
                      iVar15 = *(int *)((int)register0x00000054 + -0x108);
                      uVar7 = *(uint *)(iVar15 + 0x84);
                      uVar10 = *(int *)(iVar15 + 0x80) + 1;
                      iVar14 = *(int *)((int)register0x00000054 + -0x14c);
                      uVar1 = *(undefined4 *)((int)register0x00000054 + -0x148);
                      iVar12 = *(int *)(iVar15 + 0x7c);
                      if (uVar7 < uVar10) {
                        *(undefined4 *)((int)register0x00000054 + -0x124) = uVar1;
                        *(int *)((int)register0x00000054 + -0xf4) = iVar14;
                        *(int *)((int)register0x00000054 + -0x160) = iVar12;
                        *(uint *)((int)register0x00000054 + -0x15c) = uVar10;
                        *(uint *)((int)register0x00000054 + -0x158) = uVar7;
                        *(undefined4 *)((int)register0x00000054 + -0x154) = 1;
                        *(undefined **)((int)register0x00000054 + -0x150) = PTR_DAT_006936b0;
                        FUN_000987f4();
                        iVar12 = *(int *)((int)register0x00000054 + -0x14c);
                        uVar10 = *(uint *)((int)register0x00000054 + -0x148);
                        iVar15 = *(int *)((int)register0x00000054 + -0x108);
                        *(undefined4 *)(iVar15 + 0x84) =
                             *(undefined4 *)((int)register0x00000054 + -0x144);
                        if (*(int *)PTR_DAT_006936a4 != 0) {
                          FUN_0009db64();
                          *unaff_r8 = extraout_r1_04;
                          unaff_r8[1] = *(int *)(extraout_r3_03 + 0x7c);
                          iVar12 = extraout_r1_04;
                          uVar10 = extraout_r2_05;
                          iVar15 = extraout_r3_03;
                        }
                        *(int *)(iVar15 + 0x7c) = iVar12;
                        iVar14 = *(int *)((int)register0x00000054 + -0xf4);
                        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x124);
                      }
                      *(uint *)(iVar15 + 0x80) = uVar10;
                      iVar15 = uVar10 - 1;
                      *(undefined4 *)(iVar12 + iVar15 * 8 + 4) = uVar1;
                      if (*(int *)PTR_DAT_006936a4 != 0) {
                        FUN_0009db64();
                        *unaff_r8 = extraout_r3_04;
                        unaff_r8[1] = *(int *)(iVar12 + extraout_r1_05 * 8);
                        iVar15 = extraout_r1_05;
                        iVar14 = extraout_r3_04;
                      }
                      *(int *)(iVar12 + iVar15 * 8) = iVar14;
                      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_006936b8;
                      FUN_00022cf8();
                      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x15c);
                      *puVar3 = 
                      PTR_k3c_internal_pkg_motion_vibration___ADXL345__Build_config_fm_006936bc;
                      if (*(int *)PTR_DAT_006936a4 == 0) {
                        iVar12 = *(int *)((int)register0x00000054 + -0xfc);
                      }
                      else {
                        puVar3 = (undefined4 *)FUN_0009db54();
                        iVar12 = *(int *)((int)register0x00000054 + -0xfc);
                        *unaff_r8 = iVar12;
                      }
                      puVar3[1] = iVar12;
                      iVar15 = *(int *)((int)register0x00000054 + -0x108);
                      uVar7 = *(uint *)(iVar15 + 0x6c);
                      uVar10 = *(int *)(iVar15 + 0x68) + 1;
                      iVar14 = *(int *)(iVar15 + 100);
                      if (uVar7 < uVar10) {
                        *(undefined4 **)((int)register0x00000054 + -8) = puVar3;
                        *(int *)((int)register0x00000054 + -0x160) = iVar14;
                        *(uint *)((int)register0x00000054 + -0x15c) = uVar10;
                        *(uint *)((int)register0x00000054 + -0x158) = uVar7;
                        *(undefined4 *)((int)register0x00000054 + -0x154) = 1;
                        *(undefined **)((int)register0x00000054 + -0x150) = PTR_DAT_006936c0;
                        FUN_000987f4();
                        iVar14 = *(int *)((int)register0x00000054 + -0x14c);
                        uVar10 = *(uint *)((int)register0x00000054 + -0x148);
                        iVar15 = *(int *)((int)register0x00000054 + -0x108);
                        *(undefined4 *)(iVar15 + 0x6c) =
                             *(undefined4 *)((int)register0x00000054 + -0x144);
                        if (*(int *)PTR_DAT_006936a4 != 0) {
                          FUN_0009db64();
                          *unaff_r8 = extraout_r1_06;
                          unaff_r8[1] = *(int *)(extraout_r3_05 + 100);
                          iVar14 = extraout_r1_06;
                          uVar10 = extraout_r2_06;
                          iVar15 = extraout_r3_05;
                        }
                        *(int *)(iVar15 + 100) = iVar14;
                        puVar3 = *(undefined4 **)((int)register0x00000054 + -8);
                        iVar12 = *(int *)((int)register0x00000054 + -0xfc);
                      }
                      *(uint *)(iVar15 + 0x68) = uVar10;
                      *(undefined **)(iVar14 + (uVar10 - 1) * 8) = PTR_DAT_006936c4;
                      iVar14 = iVar14 + (uVar10 - 1) * 8;
                      if (*(int *)PTR_DAT_006936a4 != 0) {
                        puVar3 = (undefined4 *)FUN_0009db64(puVar3,iVar12);
                        *unaff_r8 = (int)puVar3;
                        unaff_r8[1] = *(int *)(extraout_r3_06 + 4);
                        iVar14 = extraout_r3_06;
                      }
                      *(undefined4 **)(iVar14 + 4) = puVar3;
                      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_006936b8;
                      FUN_00022cf8();
                      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x15c);
                      *puVar3 = 
                      PTR_k3c_internal_pkg_motion_vibration___ADXL345___handle_adxl345_data_fm_006936c8
                      ;
                      if (*(int *)PTR_DAT_006936a4 == 0) {
                        iVar12 = *(int *)((int)register0x00000054 + -0xfc);
                      }
                      else {
                        puVar3 = (undefined4 *)FUN_0009db54();
                        iVar12 = *(int *)((int)register0x00000054 + -0xfc);
                        *unaff_r8 = iVar12;
                      }
                      puVar3[1] = iVar12;
                      *(undefined4 *)((int)register0x00000054 + -0x10c) =
                           *(undefined4 *)((int)register0x00000054 + -0x118);
                      *(undefined4 *)((int)register0x00000054 + -0x160) =
                           *(undefined4 *)(*(int *)((int)register0x00000054 + -0x108) + 0x20);
                      *(undefined **)((int)register0x00000054 + -0x15c) = PTR_DAT_006936cc;
                      *(undefined4 **)((int)register0x00000054 + -0x158) = puVar3;
                      *(undefined **)((int)register0x00000054 + -0x154) =
                           PTR_s_adxl345_datashaper_type_shaper_f_008262d0_0x449_006936d0;
                      *(undefined4 *)((int)register0x00000054 + -0x150) = 0xc;
                      *(undefined **)((int)register0x00000054 + -0x14c) = PTR_DAT_006936a8;
                      *(undefined1 **)((int)register0x00000054 + -0x148) =
                           (undefined1 *)((int)register0x00000054 + -0x10c);
                      k3c_internal_pkg_serialhdl___SerialReader__Register_response();
                      iVar12 = *(int *)((int)register0x00000054 + -0xfc);
                      *(undefined4 *)(iVar12 + 0x44) = 0;
                      *(undefined4 *)(iVar12 + 0x48) = 0;
                      *(undefined4 *)(iVar12 + 0x4c) = 0;
                      *(undefined4 *)(iVar12 + 0x50) = 0;
                      *(undefined4 *)(iVar12 + 0x54) = 0;
                      *(undefined4 *)((int)register0x00000054 + -0xf8) =
                           *(undefined4 *)(iVar12 + 0x30);
                      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_006936d4;
                      FUN_00022cf8();
                      piVar5 = *(int **)((int)register0x00000054 + -0x15c);
                      if (*(int *)PTR_DAT_006936a4 == 0) {
                        iVar12 = *(int *)((int)register0x00000054 + -0xf8);
                      }
                      else {
                        FUN_0009db54();
                        iVar12 = *(int *)((int)register0x00000054 + -0xf8);
                        *unaff_r8 = iVar12;
                        piVar5 = extraout_r1_07;
                      }
                      *piVar5 = iVar12;
                      *(undefined8 *)(piVar5 + 1) = *(undefined8 *)PTR_DAT_006936d8;
                      *(undefined8 *)(piVar5 + 3) = *(undefined8 *)PTR_DAT_006936dc;
                      piVar5[5] = 0;
                      piVar5[6] = 0;
                      piVar5[7] = 0;
                      piVar5[8] = 0;
                      piVar5[9] = 0;
                      piVar5[10] = 0;
                      piVar5[0xb] = 0;
                      piVar5[0xc] = 0;
                      piVar5[0xd] = 0;
                      piVar5[0xe] = 0;
                      piVar5[0xf] = 0;
                      piVar5[0x10] = 0;
                      if (*(int *)PTR_DAT_006936a4 == 0) {
                        iVar12 = *(int *)((int)register0x00000054 + -0xfc);
                      }
                      else {
                        FUN_0009db64();
                        *unaff_r8 = (int)extraout_r1_08;
                        iVar12 = *(int *)((int)register0x00000054 + -0xfc);
                        unaff_r8[1] = *(int *)(iVar12 + 0x58);
                        piVar5 = extraout_r1_08;
                      }
                      *(int **)(iVar12 + 0x58) = piVar5;
                      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_006936b8;
                      FUN_00022cf8();
                      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x15c);
                      *puVar3 = 
                      PTR_k3c_internal_pkg_motion_vibration___ADXL345___api_update_fm_006936e0;
                      if (*(int *)PTR_DAT_006936a4 == 0) {
                        iVar12 = *(int *)((int)register0x00000054 + -0xfc);
                      }
                      else {
                        puVar3 = (undefined4 *)FUN_0009db54();
                        iVar12 = *(int *)((int)register0x00000054 + -0xfc);
                        *unaff_r8 = iVar12;
                      }
                      *(undefined4 **)((int)register0x00000054 + -8) = puVar3;
                      puVar3[1] = iVar12;
                      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_006936b8;
                      FUN_00022cf8();
                      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x15c);
                      *puVar3 = 
                      PTR_k3c_internal_pkg_motion_vibration___ADXL345___api_startstop_fm_006936e4;
                      if (*(int *)PTR_DAT_006936a4 == 0) {
                        puVar8 = *(undefined4 **)((int)register0x00000054 + -0xfc);
                      }
                      else {
                        puVar3 = (undefined4 *)FUN_0009db54();
                        puVar8 = *(undefined4 **)((int)register0x00000054 + -0xfc);
                        *unaff_r8 = (int)puVar8;
                      }
                      puVar3[1] = puVar8;
                      pcVar4 = (code *)**(undefined4 **)PTR_DAT_006936e8;
                      *(undefined4 *)((int)register0x00000054 + -0x160) = *puVar8;
                      *(undefined4 *)((int)register0x00000054 + -0x15c) =
                           *(undefined4 *)((int)register0x00000054 + -8);
                      *(undefined4 **)((int)register0x00000054 + -0x158) = puVar3;
                      *(undefined8 *)((int)register0x00000054 + -0x154) =
                           *(undefined8 *)PTR_DAT_006936ec;
                      (*pcVar4)();
                      iVar12 = *(int *)((int)register0x00000054 + -0x14c);
                      if (*(int *)PTR_DAT_006936a4 == 0) {
                        iVar14 = *(int *)((int)register0x00000054 + -0xfc);
                      }
                      else {
                        FUN_0009db64();
                        *unaff_r8 = extraout_r1_09;
                        iVar14 = *(int *)((int)register0x00000054 + -0xfc);
                        unaff_r8[1] = *(int *)(iVar14 + 0x5c);
                        iVar12 = extraout_r1_09;
                      }
                      *(int *)(iVar14 + 0x5c) = iVar12;
                      uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
                      *(undefined4 *)((int)register0x00000054 + -0x160) =
                           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
                      *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
                      k3c_common_utils_str_LastName();
                      iVar12 = *(int *)((int)register0x00000054 + -0x158);
                      puVar3 = *(undefined4 **)((int)register0x00000054 + -0xfc);
                      puVar3[0x19] = *(undefined4 *)((int)register0x00000054 + -0x154);
                      if (*(int *)PTR_DAT_006936a4 != 0) {
                        FUN_0009db64();
                        *unaff_r8 = extraout_r1_10;
                        unaff_r8[1] = extraout_r2_07[0x18];
                        iVar12 = extraout_r1_10;
                        puVar3 = extraout_r2_07;
                      }
                      puVar3[0x18] = iVar12;
                      pcVar4 = (code *)**(undefined4 **)PTR_DAT_006936f0;
                      *(undefined4 *)((int)register0x00000054 + -0x160) = *puVar3;
                      (*pcVar4)();
                      *(undefined4 *)((int)register0x00000054 + -0x104) =
                           *(undefined4 *)((int)register0x00000054 + -0x15c);
                      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_006936b8;
                      FUN_00022cf8();
                      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x15c);
                      *puVar3 = 
                      PTR_k3c_internal_pkg_motion_vibration___ADXL345___handle_dump_adxl345_fm_006936f4
                      ;
                      if (*(int *)PTR_DAT_006936a4 == 0) {
                        iVar12 = *(int *)((int)register0x00000054 + -0xfc);
                      }
                      else {
                        puVar3 = (undefined4 *)FUN_0009db54();
                        iVar12 = *(int *)((int)register0x00000054 + -0xfc);
                        *unaff_r8 = iVar12;
                      }
                      puVar3[1] = iVar12;
                      uVar1 = *(undefined4 *)(iVar12 + 0x60);
                      uVar13 = *(undefined4 *)(iVar12 + 100);
                      *(undefined4 *)((int)register0x00000054 + -0x160) =
                           *(undefined4 *)((int)register0x00000054 + -0x104);
                      *(undefined **)((int)register0x00000054 + -0x15c) =
                           PTR_s_adxl345_dump_adxl345printer_conf_0082e789_0xf4_006936f8;
                      *(undefined4 *)((int)register0x00000054 + -0x158) = 0x14;
                      *(undefined **)((int)register0x00000054 + -0x154) =
                           PTR_s_sensorerrorsmm_secOUTPUTradiusor_008216f7_0x6c_006936fc;
                      *(undefined4 *)((int)register0x00000054 + -0x150) = 6;
                      *(undefined4 *)((int)register0x00000054 + -0x14c) = uVar1;
                      *(undefined4 *)((int)register0x00000054 + -0x148) = uVar13;
                      *(undefined4 **)((int)register0x00000054 + -0x144) = puVar3;
                      k3c_internal_pkg_web___WebHooks__Register_mux_endpoint();
                      *(undefined4 *)((int)register0x00000054 + 8) =
                           *(undefined4 *)((int)register0x00000054 + -0xfc);
                      return;
                    }
                    *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
                    *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
                    *(undefined4 *)((int)register0x00000054 + -0x10) = *(undefined4 *)(iVar12 + 4);
                    *(undefined4 *)((int)register0x00000054 + -0xc) = uVar1;
                    *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00693700;
                    *(undefined4 *)((int)register0x00000054 + -0x15c) = 0x1d;
                    *(undefined1 **)((int)register0x00000054 + -0x158) =
                         (undefined1 *)((int)register0x00000054 + -0x10);
                    *(undefined4 *)((int)register0x00000054 + -0x154) = 1;
                    *(undefined4 *)((int)register0x00000054 + -0x150) = 1;
                    FUN_001386c4();
                    uVar19 = *(int *)((int)register0x00000054 + -0x14c) == 0;
                    uVar1 = 0;
                    if (!(bool)uVar19) {
                      uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x14c) + 4);
                    }
                    *(undefined4 *)((int)register0x00000054 + -0x160) = uVar1;
                    *(undefined4 *)((int)register0x00000054 + -0x15c) =
                         *(undefined4 *)((int)register0x00000054 + -0x148);
                    FUN_00095b00();
                  }
                  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00693704;
                  FUN_00022cf8();
                  puVar3 = *(undefined4 **)((int)register0x00000054 + -0x15c);
                  puVar3[1] = 0x22;
                  *puVar3 = PTR_DAT_00693708;
                  *(undefined4 *)((int)register0x00000054 + -0x160) =
                       *(undefined4 *)PTR_DAT_0069370c;
                  *(undefined4 **)((int)register0x00000054 + -0x15c) = puVar3;
                  FUN_00095b00();
                  uVar10 = extraout_r2_08;
LAB_006935e0:
                  FUN_0009dbd4(uVar10);
LAB_006935e8:
                  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00693704;
                  FUN_00022cf8();
                  puVar3 = *(undefined4 **)((int)register0x00000054 + -0x15c);
                  puVar3[1] = 0x22;
                  *puVar3 = PTR_DAT_00693708;
                  *(undefined4 *)((int)register0x00000054 + -0x160) =
                       *(undefined4 *)PTR_DAT_0069370c;
                  *(undefined4 **)((int)register0x00000054 + -0x15c) = puVar3;
                  FUN_00095b00();
                  puVar6 = extraout_r1_11;
                  puVar11 = extraout_r2_09;
                }
                *(undefined **)((int)register0x00000054 + -0x160) = puVar6;
                *(undefined **)((int)register0x00000054 + -0x15c) = puVar11;
                *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_006936c0;
                FUN_000209b4();
                puVar6 = extraout_r1_12;
                puVar11 = extraout_r2_10;
              }
              *(undefined **)((int)register0x00000054 + -0x160) = puVar6;
              *(undefined **)((int)register0x00000054 + -0x15c) = puVar11;
              *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_006936c0;
              FUN_000209b4();
              puVar6 = extraout_r1_13;
              puVar11 = extraout_r2_11;
            }
            *(undefined **)((int)register0x00000054 + -0x160) = puVar6;
            *(undefined **)((int)register0x00000054 + -0x15c) = puVar11;
            *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_006936c0;
            FUN_000209b4();
            puVar6 = extraout_r1_14;
            puVar11 = extraout_r2_12;
          }
          *(undefined **)((int)register0x00000054 + -0x160) = puVar6;
          *(undefined **)((int)register0x00000054 + -0x15c) = puVar11;
          *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_006936c0;
          FUN_000209b4();
          puVar6 = extraout_r1_15;
          puVar11 = extraout_r2_13;
        }
        *(undefined **)((int)register0x00000054 + -0x160) = puVar6;
        *(undefined **)((int)register0x00000054 + -0x15c) = puVar11;
        *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_006936c0;
        FUN_000209b4();
        puVar6 = extraout_r1_16;
        puVar11 = extraout_r2_14;
      }
      *(undefined **)((int)register0x00000054 + -0x160) = puVar6;
      *(undefined **)((int)register0x00000054 + -0x15c) = puVar11;
      *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_006936c0;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x164);
      if ((bool)uVar19) {
        register0x00000054 = (BADSPACEBASE *)puVar18;
      }
    }
    unaff_lr = 0x6936a0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345).Build_config @ 00693710 (size 404) */

void k3c_internal_pkg_motion_vibration___ADXL345__Build_config(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  undefined4 extraout_r1_01;
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 local_1c;
  undefined4 local_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_mcu_NewCommandWrapper();
  if (*DAT_006938ac != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *(undefined4 *)(in_stack_00000004 + 0x38);
    local_1c = extraout_r1;
  }
  *(undefined4 *)(in_stack_00000004 + 0x38) = local_1c;
  k3c_internal_pkg_mcu___MCU__Lookup_query_command();
  uVar1 = local_c;
  if (*DAT_006938ac != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = *(undefined4 *)(in_stack_00000004 + 0x3c);
    uVar1 = extraout_r1_00;
  }
  *(undefined4 *)(in_stack_00000004 + 0x3c) = uVar1;
  k3c_internal_pkg_mcu___MCU__Lookup_query_command();
  if (*DAT_006938ac != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_01;
    unaff_r8[1] = *(undefined4 *)(in_stack_00000004 + 0x40);
    local_c = extraout_r1_01;
  }
  *(undefined4 *)(in_stack_00000004 + 0x40) = local_c;
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345).Read_reg @ 006938b8 (size 428) */

void k3c_internal_pkg_motion_vibration___ADXL345__Read_reg(undefined4 param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int extraout_r1;
  int *piVar5;
  int extraout_r2;
  int iVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  undefined8 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_00693a68;
      FUN_00022cf8();
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      uVar1 = *DAT_00693a6c;
      *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_00693a70;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_00693a74;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 0xc;
      FUN_00025f60();
      puVar2 = *(uint **)((int)register0x00000054 + -0x14);
      *puVar2 = *(uint *)((int)register0x00000054 + 8) |
                **(uint **)((int)register0x00000054 + -0x30);
      puVar2[1] = 0;
      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + -0x18) + 0xc);
      FUN_00020ce0();
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00693a78;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x38) = 2;
      FUN_0008f820();
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_00693a7c;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + -0x18) + 0x24);
      *(undefined1 **)((int)register0x00000054 + -0x3c) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x38) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
      k3c_internal_pkg_mcu___CommandQueryWrapper__Send();
      uVar9 = CONCAT44(DAT_00693a80,*(int *)((int)register0x00000054 + -0x20));
      uVar8 = 0;
      if (*(int *)((int)register0x00000054 + -0x20) == DAT_00693a80) {
        *(int *)((int)register0x00000054 + -0x40) = DAT_00693a80;
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_00693a84;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 8;
        FUN_00025f60();
        iVar3 = **(int **)((int)register0x00000054 + -0x30);
        uVar8 = 0;
        iVar6 = DAT_00693a88;
        if (iVar3 == DAT_00693a88) {
          piVar5 = (int *)(*(int **)((int)register0x00000054 + -0x30))[1];
          uVar4 = piVar5[1];
          uVar8 = uVar4 == 1;
          if (1 < uVar4) {
            *(undefined1 *)((int)register0x00000054 + 0xc) = *(undefined1 *)(*piVar5 + 1);
            return;
          }
          FUN_0009dbd4(1);
          iVar3 = extraout_r1;
          iVar6 = extraout_r2;
        }
        *(int *)((int)register0x00000054 + -0x40) = iVar3;
        *(int *)((int)register0x00000054 + -0x3c) = iVar6;
        *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_00693a8c;
        uVar9 = FUN_000209b4();
      }
      *(undefined8 *)((int)register0x00000054 + -0x40) = uVar9;
      *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_00693a8c;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x693a60;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345).Set_reg @ 00693a90 (size 356) */

void k3c_internal_pkg_motion_vibration___ADXL345__Set_reg(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_00693bf8;
      FUN_00022cf8();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x38);
      *puVar1 = *(undefined4 *)((int)register0x00000054 + 8);
      puVar1[1] = *(uint *)((int)register0x00000054 + 0xc) & 0xff;
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
      *(undefined4 **)((int)register0x00000054 + -0x38) = puVar1;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x30) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + 0x14);
      *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
      k3c_internal_pkg_mcu___MCU_SPI__Spi_send();
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + 8);
      k3c_internal_pkg_motion_vibration___ADXL345__Read_reg();
      if (*(uint *)((int)register0x00000054 + 0xc) ==
          (uint)*(byte *)((int)register0x00000054 + -0x34)) {
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
        return;
      }
      *(uint *)((int)register0x00000054 + -0x1c) = (uint)*(byte *)((int)register0x00000054 + -0x34);
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      FUN_00020ce0();
      *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_00693bfc;
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00020ce0();
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00693bfc;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_00693c00;
      *(int *)((int)register0x00000054 + -4) =
           DAT_00693c04 + *(int *)((int)register0x00000054 + -0x1c) * 8;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_00693c08;
      *(undefined4 *)((int)register0x00000054 + -0x38) = 0x9b;
      *(undefined1 **)((int)register0x00000054 + -0x34) =
           (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x30) = 3;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 3;
      FUN_001386c4();
      bVar4 = *(int *)((int)register0x00000054 + -0x28) == 0;
      uVar2 = 0;
      if (!bVar4) {
        uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x693bf0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345).Is_measuring @ 00693c0c (size 28) */

void k3c_internal_pkg_motion_vibration___ADXL345__Is_measuring(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = 0 < *(int *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00693c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345)._handle_adxl345_data @ 00693c28 (size 336) */

void k3c_internal_pkg_motion_vibration___ADXL345___handle_adxl345_data(void)

{
  int extraout_r1;
  int iVar1;
  int extraout_r1_00;
  uint uVar2;
  uint extraout_r2;
  int extraout_r3;
  int extraout_r3_00;
  int iVar3;
  int iVar4;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_c;
  int local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = (undefined4 *)0x0;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  iVar4 = in_stack_00000004 + 0x18;
  FUN_000aac30();
  local_c = DAT_00693d84;
  local_4 = &local_c;
  uVar2 = *(int *)(in_stack_00000004 + 0x24) + 1;
  iVar1 = in_stack_00000004;
  iVar3 = *(int *)(in_stack_00000004 + 0x20);
  local_8 = iVar4;
  if (*(uint *)(in_stack_00000004 + 0x28) < uVar2) {
    FUN_000987f4();
    *(undefined4 *)(in_stack_00000004 + 0x28) = local_1c;
    iVar1 = in_stack_00000004;
    if (*DAT_00693d8c != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(int *)(extraout_r3 + 0x20);
      local_24 = extraout_r1;
      local_20 = extraout_r2;
      iVar1 = extraout_r3;
    }
    *(int *)(iVar1 + 0x20) = local_24;
    uVar2 = local_20;
    iVar3 = local_24;
  }
  *(uint *)(iVar1 + 0x24) = uVar2;
  iVar1 = uVar2 - 1;
  if (*DAT_00693d8c != 0) {
    FUN_0009db64();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = *(int *)(extraout_r3_00 + extraout_r1_00 * 4);
    iVar1 = extraout_r1_00;
    iVar3 = extraout_r3_00;
  }
  *(int *)(iVar3 + iVar1 * 4) = in_stack_00000008;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  (*(code *)*local_4)();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345)._handle_adxl345_data.deferwrap1 @ 00693d90 (size 84) */

void k3c_internal_pkg_motion_vibration___ADXL345___handle_adxl345_data_deferwrap1(void)

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



/* k3c/internal/pkg/motion/vibration.(*ADXL345).Extract_samples @ 00693de4 (size 2272) */

void k3c_internal_pkg_motion_vibration___ADXL345__Extract_samples(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int extraout_r1;
  int iVar5;
  int iVar6;
  int extraout_r2;
  int extraout_r2_00;
  uint uVar7;
  int extraout_r2_01;
  uint uVar8;
  uint extraout_r3;
  undefined4 uVar9;
  int extraout_r3_00;
  int extraout_r3_01;
  uint extraout_r3_02;
  int *piVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 *unaff_r8;
  uint uVar16;
  uint uVar17;
  int unaff_r10;
  undefined1 *puVar18;
  undefined4 unaff_lr;
  undefined1 uVar19;
  uint in_fpscr;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  
code_r0x00693de4:
  if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x70)) {
    puVar18 = (undefined1 *)((int)register0x00000054 + -0xf0);
    *(undefined4 *)((int)register0x00000054 + -0xf0) = unaff_lr;
    iVar5 = *(int *)((int)register0x00000054 + 4);
    uVar8 = *(uint *)(iVar5 + 0xc);
    uVar19 = uVar8 == 0;
    if (!(bool)uVar19) {
      piVar10 = *(int **)(iVar5 + 8);
      uVar13 = piVar10[1];
      uVar19 = uVar13 == 0;
      if (!(bool)uVar19) {
        uVar19 = uVar13 == 1;
        if (1 < uVar13) {
          uVar21 = ((undefined8 *)*piVar10)[1];
          uVar19 = uVar8 == 1;
          if (1 < uVar8) {
            uVar13 = piVar10[4];
            uVar19 = uVar13 == 0;
            if (!(bool)uVar19) {
              uVar22 = *(undefined8 *)piVar10[3];
              uVar19 = uVar13 == 1;
              if (1 < uVar13) {
                uVar23 = ((undefined8 *)piVar10[3])[1];
                uVar19 = uVar8 == 2;
                if (2 < uVar8) {
                  uVar8 = piVar10[7];
                  uVar19 = uVar8 == 0;
                  if (!(bool)uVar19) {
                    puVar11 = (undefined8 *)piVar10[6];
                    uVar24 = *puVar11;
                    uVar19 = uVar8 == 1;
                    if (1 < uVar8) {
                      *(undefined8 *)((int)register0x00000054 + -0x90) = *(undefined8 *)*piVar10;
                      *(undefined8 *)((int)register0x00000054 + -0x98) = uVar21;
                      *(undefined8 *)((int)register0x00000054 + -0xa8) = uVar22;
                      *(undefined8 *)((int)register0x00000054 + -0xb0) = uVar23;
                      *(undefined8 *)((int)register0x00000054 + -0xc0) = uVar24;
                      uVar1 = *(undefined4 *)(iVar5 + 0x58);
                      *(undefined8 *)((int)register0x00000054 + -200) = puVar11[1];
                      *(undefined4 *)((int)register0x00000054 + -0x5c) =
                           *(undefined4 *)(iVar5 + 0x44);
                      *(undefined4 *)((int)register0x00000054 + -0xec) = uVar1;
                      k3c_internal_pkg_motion_vibration___ClockSyncRegression__Get_time_translation
                                ();
                      *(undefined8 *)((int)register0x00000054 + -0x80) =
                           *(undefined8 *)((int)register0x00000054 + -0xe8);
                      *(undefined8 *)((int)register0x00000054 + -0x40) =
                           *(undefined8 *)((int)register0x00000054 + -0xe0);
                      *(undefined8 *)((int)register0x00000054 + -0x58) =
                           *(undefined8 *)((int)register0x00000054 + -0xd8);
                      iVar5 = 0;
                      uVar8 = 0;
                      iVar6 = 0;
                      uVar13 = 0;
                      while( true ) {
                        *(int *)((int)register0x00000054 + -0x4c) = iVar5;
                        *(int *)((int)register0x00000054 + -0x14) = iVar6;
                        *(uint *)((int)register0x00000054 + -0x74) = uVar13;
                        *(uint *)((int)register0x00000054 + -0x70) = uVar8;
                        uVar1 = *DAT_006946c8;
                        *(undefined4 *)((int)register0x00000054 + -0xec) = DAT_006946cc;
                        *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar1;
                        *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_006946d0;
                        *(undefined4 *)((int)register0x00000054 + -0xe0) = 0x11;
                        FUN_00025f60();
                        uVar25 = (ulonglong)**(double **)((int)register0x00000054 + -0xdc);
                        iVar3 = *(int *)((int)register0x00000054 + 0xc);
                        iVar5 = *(int *)((int)register0x00000054 + -0x4c);
                        if (iVar3 * (int)uVar25 <= iVar5) break;
                        uVar13 = *(int *)((int)register0x00000054 + -0x74) + 1;
                        uVar8 = *(uint *)((int)register0x00000054 + -0x70);
                        if (uVar8 < uVar13) {
                          *(undefined4 *)((int)register0x00000054 + -0xec) =
                               *(undefined4 *)((int)register0x00000054 + -0x14);
                          *(uint *)((int)register0x00000054 + -0xe8) = uVar13;
                          *(uint *)((int)register0x00000054 + -0xe4) = uVar8;
                          *(undefined4 *)((int)register0x00000054 + -0xe0) = 1;
                          *(undefined4 *)((int)register0x00000054 + -0xdc) = DAT_006946d4;
                          FUN_000987f4();
                          iVar6 = *(int *)((int)register0x00000054 + -0xd8);
                          uVar13 = *(uint *)((int)register0x00000054 + -0xd4);
                          uVar8 = *(uint *)((int)register0x00000054 + -0xd0);
                          iVar3 = *(int *)((int)register0x00000054 + 0xc);
                          iVar5 = *(int *)((int)register0x00000054 + -0x4c);
                        }
                        else {
                          iVar6 = *(int *)((int)register0x00000054 + -0x14);
                        }
                        iVar14 = uVar13 * 0xc + -0xc;
                        *(undefined4 *)(iVar6 + iVar14 + 4) = 0;
                        *(undefined4 *)(iVar6 + iVar14 + 8) = 0;
                        if (*DAT_006946d8 != 0) {
                          uVar1 = *(undefined4 *)(iVar6 + iVar14);
                          uVar13 = FUN_0009db54(uVar13,iVar3);
                          *unaff_r8 = uVar1;
                          iVar5 = extraout_r2;
                          uVar8 = extraout_r3;
                        }
                        *(undefined4 *)(iVar6 + iVar14) = 0;
                        iVar5 = iVar5 + 1;
                      }
                      iVar5 = 0;
                      uVar1 = 0;
                      uVar9 = 0;
                      uVar12 = 0;
                      while( true ) {
                        uVar25 = uVar25 & 0xffffffff;
                        *(undefined4 *)((int)register0x00000054 + -0x44) = uVar1;
                        if (iVar3 <= iVar5) {
                          *(undefined4 *)((int)register0x00000054 + -0x50) = uVar12;
                          *(undefined4 *)((int)register0x00000054 + -0x78) = uVar9;
                          *(undefined4 *)((int)register0x00000054 + -4) =
                               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x58);
                          uVar1 = *DAT_006946c8;
                          *(undefined4 *)((int)register0x00000054 + -0xec) = DAT_006946cc;
                          *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar1;
                          *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_006946d0;
                          *(undefined4 *)((int)register0x00000054 + -0xe0) = 0x11;
                          FUN_00025f60();
                          dVar20 = **(double **)((int)register0x00000054 + -0xdc);
                          *(undefined4 *)((int)register0x00000054 + -0xec) =
                               *(undefined4 *)((int)register0x00000054 + -4);
                          uVar25 = (longlong)dVar20 & 0xffff0000U |
                                   (ulonglong)
                                   (uint)((int)(longlong)dVar20 *
                                          *(int *)((int)register0x00000054 + -0x78) +
                                         *(int *)((int)register0x00000054 + -0x50)) & 0xffff;
                          uVar21 = VectorSignedToFloat((int)uVar25,(byte)(in_fpscr >> 0x16) & 3);
                          *(undefined8 *)((int)register0x00000054 + -0xe8) = uVar21;
                          k3c_internal_pkg_motion_vibration___ClockSyncRegression__Set_last_chip_clock
                                    ();
                          if (*(uint *)((int)register0x00000054 + -0x70) <
                              *(uint *)((int)register0x00000054 + -0x44)) {
                            uVar21 = FUN_0009dc14();
                            iVar5 = extraout_r2_00;
                            iVar6 = extraout_r3_00;
                            goto LAB_00694200;
                          }
                          *(undefined4 *)((int)register0x00000054 + 0x14) =
                               *(undefined4 *)((int)register0x00000054 + -0x14);
                          *(uint *)((int)register0x00000054 + 0x18) =
                               *(uint *)((int)register0x00000054 + -0x44);
                          *(uint *)((int)register0x00000054 + 0x1c) =
                               *(uint *)((int)register0x00000054 + -0x70);
                          return;
                        }
                        *(int *)((int)register0x00000054 + -0x24) = iVar5;
                        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + iVar5 * 4);
                        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar1;
                        *(undefined4 *)((int)register0x00000054 + -0xec) = DAT_006946dc;
                        *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar1;
                        *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_006946e0;
                        *(undefined4 *)((int)register0x00000054 + -0xe0) = 8;
                        FUN_00025f60();
                        iVar5 = **(int **)((int)register0x00000054 + -0xdc);
                        uVar19 = 0;
                        iVar6 = DAT_006946e4;
                        if (iVar5 != DAT_006946e4) break;
                        *(undefined4 *)((int)register0x00000054 + -0x28) =
                             *(undefined4 *)(*(int **)((int)register0x00000054 + -0xdc))[1];
                        *(undefined4 *)((int)register0x00000054 + -0xec) = DAT_006946dc;
                        *(undefined4 *)((int)register0x00000054 + -0xe8) =
                             *(undefined4 *)((int)register0x00000054 + -0x10);
                        *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_006946e8;
                        *(undefined4 *)((int)register0x00000054 + -0xe0) = 4;
                        FUN_00025f60();
                        uVar4 = *(int *)((int)register0x00000054 + -0x5c) -
                                *(int *)((int)register0x00000054 + -0x28);
                        uVar8 = **(uint **)((int)register0x00000054 + -0xdc);
                        uVar19 = 0;
                        uVar13 = DAT_006946ec;
                        if (uVar8 != DAT_006946ec) goto LAB_00694620;
                        *(uint *)((int)register0x00000054 + -0x78) =
                             *(int *)((int)register0x00000054 + -0x5c) -
                             ((uVar4 & 0xffff) + (uVar4 & 0x8000) * -2);
                        puVar2 = (undefined4 *)(*(uint **)((int)register0x00000054 + -0xdc))[1];
                        uVar1 = puVar2[1];
                        *(undefined4 *)((int)register0x00000054 + -0x48) = uVar1;
                        *(undefined4 *)((int)register0x00000054 + -0xc) = *puVar2;
                        *(undefined4 *)((int)register0x00000054 + -0xec) = DAT_006946f0;
                        *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar1;
                        *(undefined4 *)((int)register0x00000054 + -0xe4) = uVar1;
                        FUN_000986b8();
                        uVar21 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0xc),
                                          *(undefined4 *)((int)register0x00000054 + -0xe0));
                        iVar5 = *(int *)((int)register0x00000054 + -0x48);
                        for (iVar6 = 0; iVar6 < iVar5; iVar6 = iVar6 + 1) {
LAB_00694200:
                          *(uint *)((int)uVar21 + iVar6 * 4) =
                               (uint)*(byte *)((int)((ulonglong)uVar21 >> 0x20) + iVar6);
                        }
                        *(int *)((int)register0x00000054 + -8) = (int)uVar21;
                        uVar21 = VectorSignedToFloat((uint)uVar25 & 0xffff0000 |
                                                     *(uint *)((int)register0x00000054 + -0x78) &
                                                     0xffff,(byte)(in_fpscr >> 0x16) & 3);
                        *(undefined8 *)((int)register0x00000054 + -0x30) = uVar21;
                        uVar1 = *DAT_006946c8;
                        *(undefined4 *)((int)register0x00000054 + -0xec) = DAT_006946cc;
                        *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar1;
                        *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_006946d0;
                        *(undefined4 *)((int)register0x00000054 + -0xe0) = 0x11;
                        FUN_00025f60();
                        *(double *)((int)register0x00000054 + -100) =
                             **(double **)((int)register0x00000054 + -0xdc) *
                             *(double *)((int)register0x00000054 + -0x30) -
                             *(double *)((int)register0x00000054 + -0x40);
                        iVar5 = 0;
                        iVar6 = *(int *)((int)register0x00000054 + -0x44);
LAB_00694224:
                        *(int *)((int)register0x00000054 + -0x50) = iVar5;
                        *(int *)((int)register0x00000054 + -0x44) = iVar6;
                        uVar1 = *DAT_006946c8;
                        *(undefined4 *)((int)register0x00000054 + -0xec) = DAT_006946cc;
                        *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar1;
                        *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_006946f4;
                        uVar13 = 0x10;
                        *(undefined4 *)((int)register0x00000054 + -0xe0) = 0x10;
                        FUN_00025f60();
                        uVar25 = (ulonglong)**(double **)((int)register0x00000054 + -0xdc);
                        uVar8 = (uint)uVar25;
                        uVar19 = 1;
                        if (uVar8 == 0) {
LAB_0069461c:
                          FUN_000539a0();
                          uVar8 = extraout_r3_02;
                          goto LAB_00694620;
                        }
                        uVar13 = *(uint *)((int)register0x00000054 + -0x48);
                        *(uint *)((int)register0x00000054 + -0x28) = uVar13 ^ uVar8;
                        uVar8 = FUN_0009edd4((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f),
                                             (uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f))
                        ;
                        if (*(int *)((int)register0x00000054 + -0x50) <
                            (int)((uVar8 ^ *(int *)((int)register0x00000054 + -0x28) >> 0x1f) -
                                 (*(int *)((int)register0x00000054 + -0x28) >> 0x1f))) {
                          uVar1 = *DAT_006946c8;
                          *(undefined4 *)((int)register0x00000054 + -0xec) = DAT_006946cc;
                          *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar1;
                          *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_006946f4;
                          *(undefined4 *)((int)register0x00000054 + -0xe0) = 0x10;
                          FUN_00025f60();
                          *(int *)((int)register0x00000054 + -0x34) =
                               (int)(longlong)**(double **)((int)register0x00000054 + -0xdc);
                          *(int *)((int)register0x00000054 + -0x38) =
                               *(int *)((int)register0x00000054 + -0x50) + 1;
                          uVar1 = *DAT_006946c8;
                          *(undefined4 *)((int)register0x00000054 + -0xec) = DAT_006946cc;
                          *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar1;
                          *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_006946f4;
                          *(undefined4 *)((int)register0x00000054 + -0xe0) = 0x10;
                          FUN_00025f60();
                          iVar5 = *(int *)((int)register0x00000054 + -0x38);
                          uVar8 = (int)(longlong)**(double **)((int)register0x00000054 + -0xdc) *
                                  iVar5;
                          iVar6 = *(int *)((int)register0x00000054 + -0x34);
                          iVar3 = *(int *)((int)register0x00000054 + -0x50);
                          uVar13 = iVar6 * iVar3;
                          uVar4 = *(uint *)((int)register0x00000054 + -0x48);
                          uVar19 = uVar4 == uVar8;
                          if (uVar4 < uVar8) {
LAB_00694610:
                            FUN_0009dc14(uVar8,uVar8,uVar4);
                            goto LAB_0069461c;
                          }
                          uVar19 = uVar8 - uVar13 == 0;
                          if (uVar8 < uVar13) {
LAB_00694604:
                            uVar8 = FUN_0009dc34(uVar13,uVar8);
                            goto LAB_00694610;
                          }
                          uVar8 = uVar8 - iVar6 * iVar3;
                          uVar7 = (int)-(uVar4 - iVar6 * iVar3) >> 0x1f & uVar13 * 4;
                          uVar13 = *(uint *)((int)register0x00000054 + -8);
                          iVar6 = uVar13 + uVar7;
                          uVar19 = 1;
                          if (uVar8 == 0) {
LAB_006945f8:
                            uVar8 = FUN_0009dbd4(0,0);
                            goto LAB_00694604;
                          }
                          uVar19 = uVar8 == 1;
                          if (uVar8 < 2) {
LAB_006945ec:
                            FUN_0009dbd4(1,1);
                            goto LAB_006945f8;
                          }
                          uVar19 = uVar8 == 2;
                          if (uVar8 < 3) {
LAB_006945e0:
                            FUN_0009dbd4(2,2);
                            goto LAB_006945ec;
                          }
                          uVar19 = uVar8 == 3;
                          if (uVar8 < 4) {
LAB_006945d4:
                            FUN_0009dbd4(3,3);
                            goto LAB_006945e0;
                          }
                          uVar19 = uVar8 == 4;
                          if (uVar8 < 5) {
LAB_006945c8:
                            FUN_0009dbd4(4,4);
                            goto LAB_006945d4;
                          }
                          uVar8 = *(uint *)(iVar6 + 0x10);
                          if ((uVar8 & 0x80) == 0) {
                            uVar16 = *(uint *)(iVar6 + 4);
                            uVar17 = *(uint *)(iVar6 + 8);
                            uVar15 = *(uint *)(iVar6 + 0xc);
                            *(uint *)((int)register0x00000054 + -0x20) =
                                 (*(uint *)(uVar13 + uVar7) | (uVar15 & 0x1f) << 8) +
                                 (uVar15 & 0x10) * -0x200;
                            unaff_r8 = (undefined4 *)(uVar8 & 0x10);
                            *(uint *)((int)register0x00000054 + -0x1c) =
                                 (uVar16 | (uVar8 & 0x1f) << 8) + (int)unaff_r8 * -0x200;
                            *(uint *)((int)register0x00000054 + -0x18) =
                                 (uVar17 | (uVar15 & 0xe0) << 3 | (uVar8 & 0xe0) << 6) +
                                 (uVar8 & 0x40) * -0x80;
                            uVar8 = (uint)(longlong)*(double *)((int)register0x00000054 + -0x90);
                            uVar19 = uVar8 == 3;
                            if (2 < uVar8) {
LAB_006945c0:
                              FUN_0009dbd4(uVar8,3);
                              goto LAB_006945c8;
                            }
                            dVar20 = (double)VectorSignedToFloat(uVar8 & 0xffff0000 |
                                                                 *(uint *)((int)register0x00000054 +
                                                                          uVar8 * 4 + -0x20) &
                                                                 0xffff,(byte)(in_fpscr >> 0x16) & 3
                                                                );
                            *(double *)((int)register0x00000054 + -0xec) =
                                 dVar20 * *(double *)((int)register0x00000054 + -0x98);
                            *(undefined4 *)((int)register0x00000054 + -0xe4) = 6;
                            k3c_common_utils_maths_Round();
                            uVar8 = (uint)(longlong)*(double *)((int)register0x00000054 + -0xa8);
                            uVar19 = uVar8 == 3;
                            if (2 < uVar8) {
LAB_006945b8:
                              uVar8 = FUN_0009dbd4(uVar8,3);
                              goto LAB_006945c0;
                            }
                            *(undefined8 *)((int)register0x00000054 + -0x88) =
                                 *(undefined8 *)((int)register0x00000054 + -0xe0);
                            dVar20 = (double)VectorSignedToFloat(uVar8 & 0xffff0000 |
                                                                 *(uint *)((int)register0x00000054 +
                                                                          uVar8 * 4 + -0x20) &
                                                                 0xffff,(byte)(in_fpscr >> 0x16) & 3
                                                                );
                            *(double *)((int)register0x00000054 + -0xec) =
                                 dVar20 * *(double *)((int)register0x00000054 + -0xb0);
                            *(undefined4 *)((int)register0x00000054 + -0xe4) = 6;
                            k3c_common_utils_maths_Round();
                            uVar8 = (uint)(longlong)*(double *)((int)register0x00000054 + -0xc0);
                            uVar19 = uVar8 == 3;
                            if (2 < uVar8) {
LAB_006945b0:
                              uVar8 = FUN_0009dbd4(uVar8,3);
                              goto LAB_006945b8;
                            }
                            *(undefined8 *)((int)register0x00000054 + -0xa0) =
                                 *(undefined8 *)((int)register0x00000054 + -0xe0);
                            dVar20 = (double)VectorSignedToFloat(uVar8 & 0xffff0000 |
                                                                 *(uint *)((int)register0x00000054 +
                                                                          uVar8 * 4 + -0x20) &
                                                                 0xffff,(byte)(in_fpscr >> 0x16) & 3
                                                                );
                            *(double *)((int)register0x00000054 + -0xec) =
                                 dVar20 * *(double *)((int)register0x00000054 + -200);
                            *(undefined4 *)((int)register0x00000054 + -0xe4) = 6;
                            k3c_common_utils_maths_Round();
                            *(undefined8 *)((int)register0x00000054 + -0xb8) =
                                 *(undefined8 *)((int)register0x00000054 + -0xe0);
                            dVar20 = (double)VectorSignedToFloat(uVar8 & 0xffff0000 |
                                                                 *(uint *)((int)register0x00000054 +
                                                                          -0x50) & 0xffff,
                                                                 (byte)(in_fpscr >> 0x16) & 3);
                            *(double *)((int)register0x00000054 + -0xec) =
                                 *(double *)((int)register0x00000054 + -0x80) +
                                 (*(double *)((int)register0x00000054 + -100) + dVar20) *
                                 *(double *)((int)register0x00000054 + -0x58);
                            *(undefined4 *)((int)register0x00000054 + -0xe4) = 6;
                            k3c_common_utils_maths_Round();
                            *(undefined8 *)((int)register0x00000054 + -0x6c) =
                                 *(undefined8 *)((int)register0x00000054 + -0xe0);
                            *(undefined4 *)((int)register0x00000054 + -0xec) = DAT_006946f8;
                            FUN_00022cf8();
                            puVar11 = *(undefined8 **)((int)register0x00000054 + -0xe8);
                            *puVar11 = *(undefined8 *)((int)register0x00000054 + -0x6c);
                            puVar11[1] = *(undefined8 *)((int)register0x00000054 + -0x88);
                            puVar11[2] = *(undefined8 *)((int)register0x00000054 + -0xa0);
                            puVar11[3] = *(undefined8 *)((int)register0x00000054 + -0xb8);
                            uVar8 = *(uint *)((int)register0x00000054 + -0x44);
                            uVar21 = CONCAT44(uVar8,puVar11);
                            uVar7 = *(uint *)((int)register0x00000054 + -0x74);
                            uVar19 = uVar8 == uVar7;
                            if (uVar7 <= uVar8) {
                              uVar8 = FUN_0009dbd4(uVar8,uVar7);
                              goto LAB_006945b0;
                            }
                            iVar5 = uVar8 * 3;
                            iVar6 = *(int *)((int)register0x00000054 + -0x14);
                            iVar3 = iVar6 + uVar8 * 0xc;
                            *(undefined4 *)(iVar3 + 4) = 4;
                            *(undefined4 *)(iVar3 + 8) = 4;
                            if (*DAT_006946d8 != 0) {
                              uVar21 = FUN_0009db64();
                              *unaff_r8 = (int)uVar21;
                              unaff_r8[1] = *(undefined4 *)(iVar6 + extraout_r3_01 * 4);
                              iVar5 = extraout_r3_01;
                            }
                            *(int *)(iVar6 + iVar5 * 4) = (int)uVar21;
                            iVar6 = (int)((ulonglong)uVar21 >> 0x20) + 1;
                            iVar5 = *(int *)((int)register0x00000054 + -0x38);
                          }
                          else {
                            *(int *)(*(int *)((int)register0x00000054 + 4) + 0x54) =
                                 *(int *)(*(int *)((int)register0x00000054 + 4) + 0x54) + 1;
                            iVar6 = *(int *)((int)register0x00000054 + -0x44);
                          }
                          goto LAB_00694224;
                        }
                        iVar5 = *(int *)((int)register0x00000054 + -0x24) + 1;
                        iVar3 = *(int *)((int)register0x00000054 + 0xc);
                        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x44);
                        uVar9 = *(undefined4 *)((int)register0x00000054 + -0x78);
                        uVar12 = *(undefined4 *)((int)register0x00000054 + -0x50);
                      }
                      goto LAB_00694634;
                    }
                    goto LAB_00694648;
                  }
                  goto LAB_00694654;
                }
                goto LAB_00694660;
              }
              goto LAB_0069466c;
            }
            goto LAB_00694678;
          }
          goto LAB_00694684;
        }
        goto LAB_00694690;
      }
      goto LAB_0069469c;
    }
    goto LAB_006946a8;
  }
  goto LAB_006946b8;
LAB_00694620:
  *(uint *)((int)register0x00000054 + -0xec) = uVar8;
  *(uint *)((int)register0x00000054 + -0xe8) = uVar13;
  *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_006946fc;
  FUN_000209b4();
  iVar5 = extraout_r1;
  iVar6 = extraout_r2_01;
LAB_00694634:
  *(int *)((int)register0x00000054 + -0xec) = iVar5;
  *(int *)((int)register0x00000054 + -0xe8) = iVar6;
  *(undefined4 *)((int)register0x00000054 + -0xe4) = DAT_006946fc;
  FUN_000209b4();
LAB_00694648:
  FUN_0009dbd4(1,1);
LAB_00694654:
  FUN_0009dbd4(0,0);
LAB_00694660:
  FUN_0009dbd4(2,2);
LAB_0069466c:
  FUN_0009dbd4(1,1);
LAB_00694678:
  FUN_0009dbd4(0,0);
LAB_00694684:
  FUN_0009dbd4(1,1);
LAB_00694690:
  FUN_0009dbd4(1,1);
LAB_0069469c:
  FUN_0009dbd4(0,0);
LAB_006946a8:
  param_1 = FUN_0009dbd4(0,0);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xf0);
  if ((bool)uVar19) {
    register0x00000054 = (BADSPACEBASE *)puVar18;
  }
LAB_006946b8:
  unaff_lr = 0x6946c0;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x00693de4;
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345)._update_clock @ 00694700 (size 1576) */

void k3c_internal_pkg_motion_vibration___ADXL345___update_clock(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  uint uVar5;
  int extraout_r2;
  int iVar6;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  int unaff_r10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  undefined1 uVar12;
  uint in_fpscr;
  double dVar13;
  undefined8 uVar14;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar11 = (undefined1 *)((int)register0x00000054 + -0x7c);
      *(undefined4 *)((int)register0x00000054 + -0x7c) = unaff_lr;
      uVar4 = 0;
      uVar5 = 0;
      iVar1 = 0;
      while (iVar1 < 5) {
        *(int *)((int)register0x00000054 + -0x34) = iVar1;
        *(uint *)((int)register0x00000054 + -0x30) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x34);
        FUN_00020ce0();
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_00694d2c;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x74);
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x40);
        *(undefined1 **)((int)register0x00000054 + -0x74) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x70) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x6c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x60) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
        k3c_internal_pkg_mcu___CommandQueryWrapper__Send();
        uVar14 = CONCAT44(DAT_00694d30,*(int *)((int)register0x00000054 + -0x58));
        uVar12 = *(int *)((int)register0x00000054 + -0x58) == DAT_00694d30;
        if (!(bool)uVar12) goto LAB_00694d04;
        iVar1 = *(int *)((int)register0x00000054 + -0x54);
        if (iVar1 == 0) {
          uVar5 = *(uint *)((int)register0x00000054 + -0x30);
          uVar4 = 0;
        }
        else {
          *(int *)((int)register0x00000054 + -0xc) = iVar1;
          *(int *)((int)register0x00000054 + -0x78) = DAT_00694d30;
          *(int *)((int)register0x00000054 + -0x74) = iVar1;
          *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00694d34;
          *(undefined4 *)((int)register0x00000054 + -0x6c) = 4;
          FUN_00025f60();
          iVar1 = **(int **)((int)register0x00000054 + -0x68);
          uVar12 = iVar1 == DAT_00694d38;
          iVar6 = DAT_00694d38;
          if (!(bool)uVar12) goto LAB_00694cf0;
          uVar5 = *(uint *)(*(int **)((int)register0x00000054 + -0x68))[1] & 0x7f;
          if (uVar5 < 0x21) {
            iVar1 = *(int *)((int)register0x00000054 + -0x34);
            uVar4 = *(undefined4 *)((int)register0x00000054 + -0xc);
            break;
          }
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0xc);
        }
        iVar1 = *(int *)((int)register0x00000054 + -0x34) + 1;
      }
      uVar12 = iVar1 == 5;
      if (iVar1 < 5) {
        *(uint *)((int)register0x00000054 + -0x30) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x14) = uVar4;
        *(int *)((int)register0x00000054 + -0x78) = DAT_00694d30;
        *(undefined4 *)((int)register0x00000054 + -0x74) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00694d3c;
        *(undefined4 *)((int)register0x00000054 + -0x6c) = 5;
        FUN_00025f60();
        iVar1 = **(int **)((int)register0x00000054 + -0x68);
        uVar12 = 0;
        iVar6 = DAT_00694d38;
        if (iVar1 == DAT_00694d38) {
          puVar2 = (undefined4 *)(*(int **)((int)register0x00000054 + -0x68))[1];
          uVar7 = *puVar2;
          uVar4 = puVar2[1];
          pcVar10 = *(code **)(*(int *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x30) + 0xc
                                       ) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x30) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x74) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x70) = uVar4;
          (*pcVar10)();
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + -0x6c);
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          *(int *)((int)register0x00000054 + -0x78) = DAT_00694d30;
          *(undefined4 *)((int)register0x00000054 + -0x74) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00694d40;
          *(undefined4 *)((int)register0x00000054 + -0x6c) = 0xd;
          FUN_00025f60();
          iVar1 = **(int **)((int)register0x00000054 + -0x68);
          uVar12 = 0;
          iVar6 = DAT_00694d38;
          if (iVar1 == DAT_00694d38) {
            uVar8 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x44);
            uVar5 = *(uint *)(*(int **)((int)register0x00000054 + -0x68))[1] | uVar8 & 0xffff0000;
            if ((int)uVar5 < (int)uVar8) {
              uVar5 = uVar5 + 0x10000;
            }
            *(uint *)((int)register0x00000054 + -0x38) = uVar5;
            *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x44) = uVar5;
            *(int *)((int)register0x00000054 + -0x78) = DAT_00694d30;
            *(undefined4 *)((int)register0x00000054 + -0x74) =
                 *(undefined4 *)((int)register0x00000054 + -0x14);
            *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00694d44;
            *(undefined4 *)((int)register0x00000054 + -0x6c) = 8;
            FUN_00025f60();
            iVar1 = **(int **)((int)register0x00000054 + -0x68);
            uVar12 = 0;
            iVar6 = DAT_00694d38;
            if (iVar1 == DAT_00694d38) {
              *(undefined4 *)((int)register0x00000054 + -0x18) =
                   *(undefined4 *)(*(int **)((int)register0x00000054 + -0x68))[1];
              *(int *)((int)register0x00000054 + -0x78) = DAT_00694d30;
              *(undefined4 *)((int)register0x00000054 + -0x74) =
                   *(undefined4 *)((int)register0x00000054 + -0x14);
              *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00694d48;
              *(undefined4 *)((int)register0x00000054 + -0x6c) = 0xb;
              FUN_00025f60();
              iVar1 = **(int **)((int)register0x00000054 + -0x68);
              uVar12 = 0;
              iVar6 = DAT_00694d38;
              if (iVar1 == DAT_00694d38) {
                uVar8 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x50);
                uVar5 = uVar8 & 0xffff0000 |
                        *(uint *)(*(int **)((int)register0x00000054 + -0x68))[1];
                if ((int)uVar5 < (int)uVar8) {
                  uVar5 = uVar5 + 0x10000;
                }
                *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x50) = uVar5;
                *(int *)((int)register0x00000054 + -0x78) = DAT_00694d30;
                *(undefined4 *)((int)register0x00000054 + -0x74) =
                     *(undefined4 *)((int)register0x00000054 + -0x14);
                *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00694d4c;
                *(undefined4 *)((int)register0x00000054 + -0x6c) = 0xb;
                FUN_00025f60();
                iVar1 = **(int **)((int)register0x00000054 + -0x68);
                uVar12 = 0;
                iVar6 = DAT_00694d38;
                if (iVar1 == DAT_00694d38) {
                  puVar3 = (uint *)(*(int **)((int)register0x00000054 + -0x68))[1];
                  uVar8 = *puVar3;
                  uVar5 = puVar3[1];
                  iVar1 = *(int *)((int)register0x00000054 + 4);
                  if ((int)*(uint *)(iVar1 + 0x4c) < (int)uVar5 ||
                      *(uint *)(iVar1 + 0x4c) == uVar5 && *(uint *)(iVar1 + 0x48) < uVar8) {
                    *(double *)((int)register0x00000054 + -0x78) =
                         *DAT_00694d60 * *(double *)(*(int *)(iVar1 + 0x30) + 0x94);
                    FUN_0008b890();
                    uVar5 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x48);
                    iVar1 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x4c);
                    *(undefined4 *)((int)register0x00000054 + -0x50) =
                         *(undefined4 *)((int)register0x00000054 + -0x70);
                    *(undefined4 *)((int)register0x00000054 + -0x48) =
                         *(undefined4 *)((int)register0x00000054 + -0x6c);
                    *(uint *)((int)register0x00000054 + -0x78) = uVar5 << 1;
                    *(uint *)((int)register0x00000054 + -0x74) = uVar5 >> 0x1f | iVar1 << 1;
                    FUN_0008b910();
                    *(undefined8 *)((int)register0x00000054 + -0x40) =
                         *(undefined8 *)((int)register0x00000054 + -0x70);
                    *(undefined4 *)((int)register0x00000054 + -0x78) =
                         *(undefined4 *)((int)register0x00000054 + -0x50);
                    *(undefined4 *)((int)register0x00000054 + -0x74) =
                         *(undefined4 *)((int)register0x00000054 + -0x48);
                    FUN_0008b910();
                    *(undefined8 *)((int)register0x00000054 + -0x78) =
                         *(undefined8 *)((int)register0x00000054 + -0x40);
                    FUN_000afca0();
                    *(undefined8 *)((int)register0x00000054 + -0x78) =
                         *(undefined8 *)((int)register0x00000054 + -0x68);
                    FUN_0008b890();
                    uVar4 = *(undefined4 *)((int)register0x00000054 + -0x6c);
                    iVar1 = *(int *)((int)register0x00000054 + 4);
                    *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)((int)register0x00000054 + -0x70)
                    ;
                    *(undefined4 *)(iVar1 + 0x4c) = uVar4;
                    *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
                    *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    return;
                  }
                  *(uint *)((int)register0x00000054 + -0x28) = uVar5;
                  *(uint *)((int)register0x00000054 + -0x2c) = uVar8;
                  *(uint *)(iVar1 + 0x48) = uVar8 << 1;
                  *(uint *)(iVar1 + 0x4c) = uVar8 >> 0x1f | uVar5 << 1;
                  uVar4 = *DAT_00694d50;
                  *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_00694d54;
                  *(undefined4 *)((int)register0x00000054 + -0x74) = uVar4;
                  *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00694d58;
                  *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x11;
                  FUN_00025f60();
                  uVar4 = *DAT_00694d50;
                  *(undefined8 *)((int)register0x00000054 + -0x20) =
                       **(undefined8 **)((int)register0x00000054 + -0x68);
                  *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_00694d54;
                  *(undefined4 *)((int)register0x00000054 + -0x74) = uVar4;
                  *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00694d5c;
                  *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x10;
                  FUN_00025f60();
                  uVar5 = (uint)(longlong)**(double **)((int)register0x00000054 + -0x68);
                  uVar12 = uVar5 == 0;
                  if (!(bool)uVar12) {
                    dVar13 = *(double *)((int)register0x00000054 + -0x20);
                    *(uint *)((int)register0x00000054 + -0x24) = (uint)(longlong)dVar13;
                    uVar9 = *(uint *)((int)register0x00000054 + -0x18);
                    uVar8 = FUN_0009edd4((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f),
                                         (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f));
                    uVar5 = (int)(uVar9 ^ uVar5) >> 0x1f;
                    *(undefined4 *)((int)register0x00000054 + -0x10) =
                         *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x58);
                    uVar14 = VectorSignedToFloat((uint)(longlong)dVar13 & 0xffff0000 |
                                                 *(int *)((int)register0x00000054 + -0x30) +
                                                 *(int *)((int)register0x00000054 + -0x24) *
                                                 *(int *)((int)register0x00000054 + -0x38) +
                                                 ((uVar8 ^ uVar5) - uVar5) + 1 & 0xffff,
                                                 (byte)(in_fpscr >> 0x16) & 3);
                    *(undefined8 *)((int)register0x00000054 + -0x20) = uVar14;
                    uVar5 = -(*(int *)((int)register0x00000054 + -0x28) >> 0x1f);
                    iVar1 = *(int *)((int)register0x00000054 + -0x28) +
                            (uint)CARRY4(*(uint *)((int)register0x00000054 + -0x2c),uVar5);
                    uVar5 = *(uint *)((int)register0x00000054 + -0x2c) + uVar5 >> 1 |
                            iVar1 * -0x80000000;
                    *(uint *)((int)register0x00000054 + -0x78) =
                         uVar5 + *(uint *)((int)register0x00000054 + -0x4c);
                    *(uint *)((int)register0x00000054 + -0x74) =
                         *(int *)((int)register0x00000054 + -0x44) + (iVar1 >> 1) +
                         (uint)CARRY4(uVar5,*(uint *)((int)register0x00000054 + -0x4c));
                    FUN_0008b910();
                    *(undefined4 *)((int)register0x00000054 + -0x78) =
                         *(undefined4 *)((int)register0x00000054 + -0x10);
                    *(undefined8 *)((int)register0x00000054 + -0x74) =
                         *(undefined8 *)((int)register0x00000054 + -0x70);
                    *(undefined8 *)((int)register0x00000054 + -0x6c) =
                         *(undefined8 *)((int)register0x00000054 + -0x20);
                    k3c_internal_pkg_motion_vibration___ClockSyncRegression__Update();
                    *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
                    *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    return;
                  }
                  FUN_000539a0();
                  iVar1 = extraout_r1;
                  iVar6 = extraout_r2;
                }
                *(int *)((int)register0x00000054 + -0x78) = iVar1;
                *(int *)((int)register0x00000054 + -0x74) = iVar6;
                *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00694d64;
                FUN_000209b4();
                iVar1 = extraout_r1_00;
                iVar6 = extraout_r2_00;
              }
              *(int *)((int)register0x00000054 + -0x78) = iVar1;
              *(int *)((int)register0x00000054 + -0x74) = iVar6;
              *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00694d64;
              FUN_000209b4();
              iVar1 = extraout_r1_01;
              iVar6 = extraout_r2_01;
            }
            *(int *)((int)register0x00000054 + -0x78) = iVar1;
            *(int *)((int)register0x00000054 + -0x74) = iVar6;
            *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00694d64;
            FUN_000209b4();
            iVar1 = extraout_r1_02;
            iVar6 = extraout_r2_02;
          }
          *(int *)((int)register0x00000054 + -0x78) = iVar1;
          *(int *)((int)register0x00000054 + -0x74) = iVar6;
          *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00694d64;
          FUN_000209b4();
          iVar1 = extraout_r1_03;
          iVar6 = extraout_r2_03;
        }
        *(int *)((int)register0x00000054 + -0x78) = iVar1;
        *(int *)((int)register0x00000054 + -0x74) = iVar6;
        *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00694d64;
        FUN_000209b4();
      }
      *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_00694d68;
      FUN_00022cf8();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x74);
      puVar2[1] = 0x1c;
      *puVar2 = DAT_00694d6c;
      *(undefined4 *)((int)register0x00000054 + -0x78) = *DAT_00694d70;
      *(undefined4 **)((int)register0x00000054 + -0x74) = puVar2;
      FUN_00095b00();
      iVar1 = extraout_r1_04;
      iVar6 = extraout_r2_04;
LAB_00694cf0:
      *(int *)((int)register0x00000054 + -0x78) = iVar1;
      *(int *)((int)register0x00000054 + -0x74) = iVar6;
      *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00694d64;
      uVar14 = FUN_000209b4();
LAB_00694d04:
      *(undefined8 *)((int)register0x00000054 + -0x78) = uVar14;
      *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00694d64;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x7c);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar11;
      }
    }
    unaff_lr = 0x694d24;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345)._start_measurements @ 00694d74 (size 1904) */

void k3c_internal_pkg_motion_vibration___ADXL345___start_measurements(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined4 extraout_r2;
  code *pcVar4;
  int extraout_r2_00;
  int iVar5;
  int extraout_r2_01;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  uint in_fpscr;
  undefined8 uVar8;
  double dVar9;
  uint unaff_s30;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0xc)) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x8c);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = unaff_lr;
      if (0 < *(int *)(*(int *)((int)register0x00000054 + 4) + 4)) {
        *(undefined4 *)((int)register0x00000054 + 8) = 0;
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
                    /* WARNING: Could not recover jumptable at 0x006953e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x8c))();
        return;
      }
      uVar1 = *DAT_006954e8;
      *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_006954ec;
      *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_006954f0;
      *(undefined4 *)((int)register0x00000054 + -0x7c) = 9;
      FUN_00025f60();
      uVar1 = **(undefined4 **)((int)register0x00000054 + -0x78);
      *(undefined4 *)((int)register0x00000054 + -0x88) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
      k3c_internal_pkg_motion_vibration___ADXL345__Read_reg();
      uVar1 = *DAT_006954f4;
      *(undefined1 *)((int)register0x00000054 + -0x65) =
           *(undefined1 *)((int)register0x00000054 + -0x80);
      *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_006954f8;
      *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_006954fc;
      *(undefined4 *)((int)register0x00000054 + -0x7c) = 6;
      FUN_00025f60();
      iVar3 = **(int **)((int)register0x00000054 + -0x78);
      uVar7 = 0;
      iVar5 = DAT_00695500;
      if (iVar3 == DAT_00695500) {
        if ((uint)*(byte *)((int)register0x00000054 + -0x65) ==
            (*(uint *)(*(int **)((int)register0x00000054 + -0x78))[1] & 0xff)) {
          uVar1 = *DAT_006954e8;
          *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_006954ec;
          *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_00695504;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xd;
          FUN_00025f60();
          uVar1 = **(undefined4 **)((int)register0x00000054 + -0x78);
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x78) = 0;
          k3c_internal_pkg_motion_vibration___ADXL345__Set_reg();
          uVar1 = *DAT_006954e8;
          *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_006954ec;
          *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_00695508;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xf;
          FUN_00025f60();
          uVar1 = **(undefined4 **)((int)register0x00000054 + -0x78);
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 0xb;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x78) = 0;
          k3c_internal_pkg_motion_vibration___ADXL345__Set_reg();
          uVar1 = *DAT_006954e8;
          *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_006954ec;
          *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_0069550c;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xc;
          FUN_00025f60();
          uVar1 = **(undefined4 **)((int)register0x00000054 + -0x78);
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x78) = 0;
          k3c_internal_pkg_motion_vibration___ADXL345__Set_reg();
          uVar1 = *DAT_006954e8;
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_006954ec;
          *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_00695510;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xb;
          FUN_00025f60();
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               **(undefined4 **)((int)register0x00000054 + -0x78);
          uVar1 = *DAT_00695514;
          *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_00695518;
          *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + -0x40);
          FUN_00024fd0();
          uVar1 = **(undefined4 **)((int)register0x00000054 + -0x7c);
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          *(undefined4 *)((int)register0x00000054 + -0x80) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x78) = 0;
          k3c_internal_pkg_motion_vibration___ADXL345__Set_reg();
          uVar1 = *DAT_006954f4;
          *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_006954f8;
          *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_0069551c;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xc;
          FUN_00025f60();
          iVar3 = **(int **)((int)register0x00000054 + -0x78);
          if (iVar3 == DAT_00695500) {
            uVar1 = *DAT_006954e8;
            *(undefined4 *)((int)register0x00000054 + -0x40) =
                 *(undefined4 *)(*(int **)((int)register0x00000054 + -0x78))[1];
            *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_006954ec;
            *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_0069550c;
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xc;
            FUN_00025f60();
            uVar1 = **(undefined4 **)((int)register0x00000054 + -0x78);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x80) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x78) = 0;
            k3c_internal_pkg_motion_vibration___ADXL345__Set_reg();
            *(int *)((int)register0x00000054 + -0x34) = *(int *)((int)register0x00000054 + 4) + 0x18
            ;
            *(int *)((int)register0x00000054 + -0x88) = *(int *)((int)register0x00000054 + 4) + 0x18
            ;
            FUN_000aac30();
            iVar3 = *(int *)((int)register0x00000054 + 4);
            *(undefined4 *)(iVar3 + 0x24) = 0;
            *(undefined4 *)(iVar3 + 0x28) = 0;
            if (*DAT_00695520 != 0) {
              FUN_0009db54(0,iVar3,*(undefined4 *)(iVar3 + 0x20));
              *unaff_r8 = extraout_r2;
              iVar3 = extraout_r1;
            }
            *(undefined4 *)(iVar3 + 0x20) = DAT_00695524;
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x34);
            FUN_000ab080();
            k3c_internal_pkg_chelper__Cfunc_get_monotonic
                      (*(undefined4 *)((int)register0x00000054 + 4));
            iVar3 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x30);
            *(int *)((int)register0x00000054 + -0x38) = iVar3;
            uVar1 = *(undefined4 *)(*(int *)(iVar3 + 8) + 8);
            *(undefined8 *)((int)register0x00000054 + -0x4c) =
                 *(undefined8 *)((int)register0x00000054 + -0x88);
            *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_006954f8;
            *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_00695528;
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xb;
            FUN_00025f60();
            if (**(int **)((int)register0x00000054 + -0x78) == 0) {
              pcVar4 = *(code **)(*(int *)(*(int *)((int)register0x00000054 + -0x38) + 0xc) + 0x28);
              *(undefined4 *)((int)register0x00000054 + -0x88) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + -0x38) + 0x10);
              *(undefined8 *)((int)register0x00000054 + -0x84) =
                   *(undefined8 *)((int)register0x00000054 + -0x4c);
              (*pcVar4)();
              uVar8 = *(undefined8 *)((int)register0x00000054 + -0x7c);
            }
            else {
              uVar8 = 0;
            }
            *(undefined8 *)((int)register0x00000054 + -0x54) = uVar8;
            uVar1 = *DAT_0069552c;
            *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_00695530;
            *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_00695534;
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xc;
            FUN_00025f60();
            dVar9 = **(double **)((int)register0x00000054 + -0x78);
            pcVar4 = *(code **)(*(int *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x30) +
                                        0xc) + 0x34);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x30) + 0x10);
            *(double *)((int)register0x00000054 + -0x84) =
                 *(double *)((int)register0x00000054 + -0x54) + dVar9;
            (*pcVar4)();
            iVar3 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x30);
            dVar9 = (double)VectorSignedToFloat(unaff_s30 & 0xffff0000 |
                                                *(uint *)(*(int *)((int)register0x00000054 + 4) +
                                                         0x14) & 0xffff,(byte)(in_fpscr >> 0x16) & 3
                                               );
            *(undefined4 *)((int)register0x00000054 + -0x60) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            *(undefined4 *)((int)register0x00000054 + -0x58) =
                 *(undefined4 *)((int)register0x00000054 + -0x78);
            *(double *)((int)register0x00000054 + -0x88) = (4.0 / dVar9) * *(double *)(iVar3 + 0x94)
            ;
            FUN_0008b890();
            iVar3 = *(int *)((int)register0x00000054 + 4);
            uVar1 = *(undefined4 *)(iVar3 + 0x14);
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            *(undefined4 *)((int)register0x00000054 + -0x5c) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            *(undefined4 *)(iVar3 + 4) = uVar1;
            FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x28));
            *(undefined4 *)((int)register0x00000054 + -0x88) = *(undefined4 *)(iVar3 + 0x34);
            FUN_00020ce0();
            *(int *)((int)register0x00000054 + -0x28) = DAT_00695500;
            *(undefined4 *)((int)register0x00000054 + -0x24) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x60);
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_00695538;
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_00695538;
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x38);
            *(undefined1 **)((int)register0x00000054 + -0x84) =
                 (undefined1 *)((int)register0x00000054 + -0x28);
            *(undefined4 *)((int)register0x00000054 + -0x80) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x78) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x74) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x70) =
                 *(undefined4 *)((int)register0x00000054 + -0x60);
            *(undefined4 *)((int)register0x00000054 + -0x6c) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            k3c_internal_pkg_mcu___CommandWrapper__Send();
            *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
            uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 100);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x60);
            *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0069553c;
            *(undefined4 *)((int)register0x00000054 + -0x2c) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_00695540;
            *(undefined4 *)((int)register0x00000054 + -0x84) = 0x22;
            *(undefined1 **)((int)register0x00000054 + -0x80) =
                 (undefined1 *)((int)register0x00000054 + -0x30);
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
            k3c_internal_pkg_logger_Debugf();
            iVar3 = *(int *)((int)register0x00000054 + 4);
            *(undefined4 *)(iVar3 + 0x44) = 0;
            *(undefined4 *)(iVar3 + 0x50) = 0;
            *(undefined4 *)(iVar3 + 0x54) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x3c) = *(undefined4 *)(iVar3 + 0x58);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x60);
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            FUN_0008b910();
            uVar8 = *(undefined8 *)((int)register0x00000054 + -0x80);
            iVar3 = *(int *)((int)register0x00000054 + -0x3c);
            *(undefined8 *)(iVar3 + 0x24) = uVar8;
            *(undefined8 *)(iVar3 + 0x44) = uVar8;
            *(undefined8 *)(iVar3 + 0x34) = 0;
            *(undefined8 *)(iVar3 + 0x2c) = 0;
            *(undefined8 *)(iVar3 + 0x3c) = 0;
            *(undefined8 *)(iVar3 + 0x14) = 0;
            *(undefined8 *)(iVar3 + 0x1c) = 0;
            iVar3 = *(int *)((int)register0x00000054 + 4);
            *(undefined4 *)(iVar3 + 0x48) = 0x80000000;
            *(undefined4 *)(iVar3 + 0x4c) = 0;
            *(int *)((int)register0x00000054 + -0x88) = iVar3;
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + -0x60);
            *(undefined4 *)((int)register0x00000054 + -0x80) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            k3c_internal_pkg_motion_vibration___ADXL345___update_clock();
            iVar3 = *(int *)((int)register0x00000054 + 4);
            *(undefined4 *)(iVar3 + 0x48) = 0x80000000;
            *(undefined4 *)(iVar3 + 0x4c) = 0;
            *(undefined4 *)((int)register0x00000054 + 8) = 0;
            *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
            return;
          }
          *(int *)((int)register0x00000054 + -0x88) = iVar3;
          *(int *)((int)register0x00000054 + -0x84) = DAT_00695500;
          *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_00695544;
          FUN_000209b4();
        }
        uVar1 = *DAT_006954f4;
        *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_006954f8;
        *(undefined4 *)((int)register0x00000054 + -0x84) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_006954fc;
        *(undefined4 *)((int)register0x00000054 + -0x7c) = 6;
        FUN_00025f60();
        iVar3 = **(int **)((int)register0x00000054 + -0x78);
        uVar7 = 0;
        iVar5 = DAT_00695500;
        if (iVar3 == DAT_00695500) {
          uVar2 = *(uint *)(*(int **)((int)register0x00000054 + -0x78))[1];
          *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_0069554c;
          *(uint *)((int)register0x00000054 + -0xc) =
               DAT_00695548 + (uint)*(byte *)((int)register0x00000054 + -0x65) * 8;
          *(undefined4 *)((int)register0x00000054 + -8) = DAT_0069554c;
          *(uint *)((int)register0x00000054 + -4) = DAT_00695548 + (uVar2 & 0xff) * 8;
          *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_00695550;
          *(undefined4 *)((int)register0x00000054 + -0x84) = 0x85;
          *(undefined1 **)((int)register0x00000054 + -0x80) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x78) = 2;
          FUN_001386c4();
          uVar7 = *(int *)((int)register0x00000054 + -0x74) == 0;
          uVar1 = 0;
          if (!(bool)uVar7) {
            uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x74) + 4);
          }
          *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x70);
          FUN_00095b00();
          iVar3 = extraout_r1_00;
          iVar5 = extraout_r2_00;
        }
        *(int *)((int)register0x00000054 + -0x88) = iVar3;
        *(int *)((int)register0x00000054 + -0x84) = iVar5;
        *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_00695544;
        FUN_000209b4();
        iVar3 = extraout_r1_01;
        iVar5 = extraout_r2_01;
      }
      *(int *)((int)register0x00000054 + -0x88) = iVar3;
      *(int *)((int)register0x00000054 + -0x84) = iVar5;
      *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_00695544;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x8c);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x6954e0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345)._finish_measurements @ 00695554 (size 364) */

void k3c_internal_pkg_motion_vibration___ADXL345___finish_measurements(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int iVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 local_1c [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x6956bc;
    FUN_0009bf64();
  }
  if (0 < *(int *)(in_stack_00000004 + 4)) {
    FUN_0009defc(0,local_1c,in_stack_00000004,*(int *)(in_stack_00000004 + 4),unaff_lr);
    FUN_00020ce0();
    local_1c[0] = DAT_006956c4;
    local_14 = DAT_006956c4;
    local_10 = DAT_006956c8;
    local_c = DAT_006956c4;
    local_8 = DAT_006956cc;
    k3c_internal_pkg_mcu___CommandQueryWrapper__Send();
    *(undefined4 *)(in_stack_00000004 + 4) = 0;
    local_4 = in_stack_00000004 + 0x18;
    FUN_000aac30();
    *(undefined4 *)(in_stack_00000004 + 0x24) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x28) = 0;
    iVar2 = in_stack_00000004;
    if (*DAT_006956d0 != 0) {
      uVar1 = FUN_0009db54(*(undefined4 *)(in_stack_00000004 + 0x20));
      *unaff_r8 = uVar1;
      iVar2 = extraout_r3;
    }
    *(undefined4 *)(iVar2 + 0x20) = DAT_006956d4;
    FUN_000ab080();
    FUN_0008f77c();
    k3c_internal_pkg_logger_Debugf();
    return;
  }
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345)._api_update @ 006956e0 (size 732) */

void k3c_internal_pkg_motion_vibration___ADXL345___api_update(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 *local_3c;
  int local_38;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_motion_vibration___ADXL345___update_clock();
  FUN_000aac30();
  iVar3 = *(int *)(in_stack_00000004 + 0x24);
  iVar4 = *(int *)(in_stack_00000004 + 0x28);
  *(undefined4 *)(in_stack_00000004 + 0x24) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x28) = 0;
  iVar1 = in_stack_00000004;
  if (*DAT_006959c0 != 0) {
    iVar5 = *(int *)(in_stack_00000004 + 0x20);
    iVar1 = FUN_0009db54();
    *unaff_r8 = iVar5;
  }
  *(undefined4 *)(iVar1 + 0x20) = DAT_006959c4;
  FUN_000ab080();
  iVar1 = in_stack_00000004;
  if (iVar3 == 0) {
    FUN_000908bc();
    return;
  }
  k3c_internal_pkg_motion_vibration___ADXL345__Extract_samples();
  if (local_38 == 0) {
    FUN_0013b8e4();
    FUN_000908bc();
    return;
  }
  FUN_000908bc();
  FUN_0008f820();
  FUN_00093a08();
  *local_3c = DAT_006959d0;
  puVar2 = local_3c;
  if (*DAT_006959c0 != 0) {
    puVar2 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = iVar4;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = iVar4;
  FUN_00020ce0();
  FUN_00093a08();
  *local_3c = DAT_006959d8;
  puVar2 = local_3c;
  if (*DAT_006959c0 != 0) {
    puVar2 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = iVar1;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = iVar1;
  FUN_00020ce0();
  FUN_00093a08();
  *local_3c = DAT_006959d8;
  if (*DAT_006959c0 != 0) {
    local_3c = (undefined4 *)FUN_0009db64();
    *unaff_r8 = iVar1;
    unaff_r8[1] = local_3c[1];
  }
  local_3c[1] = iVar1;
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345)._api_startstop @ 006959f0 (size 72) */

void k3c_internal_pkg_motion_vibration___ADXL345___api_startstop(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  char in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (in_stack_00000008 == '\0') {
    k3c_internal_pkg_motion_vibration___ADXL345___finish_measurements();
  }
  else {
    k3c_internal_pkg_motion_vibration___ADXL345___start_measurements();
  }
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345)._handle_dump_adxl345 @ 00695a38 (size 312) */

void k3c_internal_pkg_motion_vibration___ADXL345___handle_dump_adxl345(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 *local_c;
  
  while (puVar2 = in_stack_00000008, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_web___APIDumpHelper__add_client();
  uVar1 = DAT_00695b74;
  FUN_00022cf8();
  puVar2[1] = 4;
  *puVar2 = DAT_00695b78;
  puVar2[3] = 0xe;
  puVar2[2] = DAT_00695b7c;
  puVar2[5] = 0xe;
  puVar2[4] = DAT_00695b80;
  puVar2[7] = 0xe;
  puVar2[6] = DAT_00695b84;
  FUN_000908bc();
  FUN_00093a08();
  local_c[1] = 4;
  local_c[2] = 4;
  if (*DAT_00695b90 != 0) {
    local_c = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar2;
    unaff_r8[1] = *local_c;
  }
  *local_c = puVar2;
  if (in_stack_00000008[6] == 0) {
    in_stack_00000008[6] = DAT_00695b88;
    if (*DAT_00695b90 != 0) {
      in_stack_00000008 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = uVar1;
      unaff_r8[1] = in_stack_00000008[7];
    }
    in_stack_00000008[7] = uVar1;
  }
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345).Start_internal_client @ 00695b94 (size 96) */

void k3c_internal_pkg_motion_vibration___ADXL345__Start_internal_client(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_web___APIDumpHelper__add_internal_client();
  k3c_internal_pkg_motion_vibration_NewAccelQueryHelper();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345).Get_name @ 00695c00 (size 24) */

void k3c_internal_pkg_motion_vibration___ADXL345__Get_name(void)

{
  return;
}



/* k3c/internal/pkg/motion/vibration.Load_config_ADXL345 @ 00695c18 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_vibration_Load_config_ADXL345(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x695c50;
    FUN_0009bf64();
  }
  k3c_internal_pkg_motion_vibration_NewADXL345();
  in_stack_00000008 = _UNK_00695c58;
                    /* WARNING: Could not recover jumptable at 0x00695c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.NewInputShaperParams @ 00695c5c (size 1476) */

void k3c_internal_pkg_motion_vibration_NewInputShaperParams(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 extraout_r2;
  undefined *puVar8;
  undefined *extraout_r2_00;
  int iVar9;
  int extraout_r3;
  int iVar10;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  undefined1 uVar12;
  undefined8 uVar13;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -8)) {
      puVar11 = (undefined1 *)((int)register0x00000054 + -0x88);
      *(undefined4 *)((int)register0x00000054 + -0x88) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_00696224;
      FUN_00022cf8();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x80);
      puVar1[1] = *(undefined4 *)((int)register0x00000054 + 8);
      if (*(int *)PTR_DAT_00696228 == 0) {
        uVar7 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      else {
        puVar1 = (undefined4 *)FUN_0009db54();
        uVar7 = *(undefined4 *)((int)register0x00000054 + 4);
        *unaff_r8 = uVar7;
      }
      *(undefined4 **)((int)register0x00000054 + -0x1c) = puVar1;
      *puVar1 = uVar7;
      FUN_000908bc();
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x84);
      if (*(int *)PTR_DAT_00696228 == 0) {
        iVar2 = *(int *)((int)register0x00000054 + -0x1c);
      }
      else {
        FUN_0009db64();
        *unaff_r8 = extraout_r1;
        iVar2 = *(int *)((int)register0x00000054 + -0x1c);
        unaff_r8[1] = *(undefined4 *)(iVar2 + 8);
        uVar7 = extraout_r1;
      }
      *(undefined4 *)(iVar2 + 8) = uVar7;
      iVar9 = *(int *)PTR_DAT_0069622c;
      iVar10 = *(int *)PTR_DAT_00696230;
      while (0 < iVar10) {
        *(int *)((int)register0x00000054 + -0x3c) = iVar10;
        *(int *)((int)register0x00000054 + -0xc) = iVar9;
        FUN_0009e2f0(iVar2,iVar9,(undefined1 *)((int)register0x00000054 + -0x30));
        unaff_r8 = (undefined4 *)PTR_DAT_00696234;
        uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1c) + 8);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_00696234;
        *(undefined4 *)((int)register0x00000054 + -0x80) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x7c) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        FUN_00093a08();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x74);
        if (*(int *)PTR_DAT_00696228 == 0) {
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0x10);
        }
        else {
          puVar1 = (undefined4 *)FUN_0009db64();
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0x10);
          *unaff_r8 = uVar7;
          *(undefined4 *)((int)unaff_r8 + 4) = *puVar1;
        }
        *puVar1 = uVar7;
        iVar9 = *(int *)((int)register0x00000054 + -0xc) + 0x14;
        iVar2 = *(int *)((int)register0x00000054 + -0x1c);
        iVar10 = *(int *)((int)register0x00000054 + -0x3c) + -1;
      }
      *(undefined4 *)((int)register0x00000054 + -0x84) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_00696238;
      *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xb;
      *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_0069623c;
      *(undefined **)((int)register0x00000054 + -0x74) = PTR_DAT_00696240;
      *(undefined1 *)((int)register0x00000054 + -0x70) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Get();
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + -0x6c);
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
      *(undefined **)((int)register0x00000054 + -0x80) =
           PTR_s_shaper_type_shaper_freq_SHAPER_F_008262d0_0x455_00696244;
      *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xc;
      *(undefined4 *)((int)register0x00000054 + -0x78) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + 8);
      FUN_0007636c();
      *(undefined4 *)((int)register0x00000054 + -0x84) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x80) =
           *(undefined4 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0x7c) =
           *(undefined4 *)((int)register0x00000054 + -0x6c);
      *(undefined4 *)((int)register0x00000054 + -0x78) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      *(undefined1 *)((int)register0x00000054 + -0x70) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Get();
      uVar13 = CONCAT44(PTR_DAT_0069623c,*(undefined **)((int)register0x00000054 + -0x6c));
      uVar12 = 0;
      if (*(undefined **)((int)register0x00000054 + -0x6c) == PTR_DAT_0069623c) {
        uVar7 = (*(undefined4 **)((int)register0x00000054 + -0x68))[1];
        uVar3 = **(undefined4 **)((int)register0x00000054 + -0x68);
        iVar2 = *(int *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)(iVar2 + 0x10) = uVar7;
        if (*(int *)PTR_DAT_00696228 != 0) {
          uVar3 = FUN_0009db64();
          *unaff_r8 = uVar3;
          unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0xc);
          uVar7 = extraout_r2;
          iVar2 = extraout_r3;
        }
        *(undefined4 *)(iVar2 + 0xc) = uVar3;
        uVar5 = *(undefined4 *)(iVar2 + 8);
        *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_00696234;
        *(undefined4 *)((int)register0x00000054 + -0x80) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x78) = uVar7;
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x70) != '\0') {
          *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
          *(undefined **)((int)register0x00000054 + -0x80) =
               PTR_s_damping_ratio_DAMPING_RATIO_axis_008262d0_0x225e_00696248;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xe;
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x74) =
               *(undefined4 *)((int)register0x00000054 + 8);
          FUN_0007636c();
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + -0x70);
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + -0x6c);
          *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_0069624c;
          *(undefined **)((int)register0x00000054 + -0x74) = PTR_DAT_00696250;
          *(undefined8 *)((int)register0x00000054 + -0x70) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x68) = 0x3ff0000000000000;
          *(undefined8 *)((int)register0x00000054 + -0x60) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x58) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x50) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          *(undefined8 *)(*(int *)((int)register0x00000054 + -0x1c) + 0x14) =
               *(undefined8 *)((int)register0x00000054 + -0x4c);
          *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
          *(undefined **)((int)register0x00000054 + -0x80) =
               PTR_s_shaper_freq_SHAPER_FREQ_SHAPER_T_008262d0_0x461_00696254;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xc;
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x74) =
               *(undefined4 *)((int)register0x00000054 + 8);
          FUN_0007636c();
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + -0x70);
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + -0x6c);
          *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_0069624c;
          *(undefined **)((int)register0x00000054 + -0x74) = PTR_SUB_00696258;
          *(undefined8 *)((int)register0x00000054 + -0x70) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x68) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x60) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x58) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x50) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          *(undefined8 *)(*(int *)((int)register0x00000054 + -0x1c) + 0x1c) =
               *(undefined8 *)((int)register0x00000054 + -0x4c);
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               **(undefined4 **)((int)register0x00000054 + 0xc);
          *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0069625c;
          FUN_00022cf8();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x80);
          *puVar1 = PTR_k3c_internal_pkg_motion_vibration_NewInputShaperParams_func1_00696260;
          if (*(int *)PTR_DAT_00696228 == 0) {
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x1c);
            uVar3 = *(undefined4 *)((int)register0x00000054 + 4);
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x34);
          }
          else {
            puVar1 = (undefined4 *)FUN_0009db74();
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x1c);
            *unaff_r8 = uVar7;
            uVar3 = *(undefined4 *)((int)register0x00000054 + 4);
            unaff_r8[1] = uVar3;
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x34);
            unaff_r8[2] = uVar5;
          }
          *(undefined4 **)((int)register0x00000054 + -0x14) = puVar1;
          puVar1[1] = uVar7;
          puVar1[3] = *(undefined4 *)((int)register0x00000054 + 8);
          puVar1[2] = uVar3;
          puVar1[4] = *(undefined4 *)((int)register0x00000054 + -0x44);
          puVar1[5] = uVar5;
          uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x38) + 0x24);
          *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_00696264;
          *(undefined4 *)((int)register0x00000054 + -0x80) = uVar7;
          *(undefined **)((int)register0x00000054 + -0x7c) = PTR_DAT_00696268;
          *(undefined4 *)((int)register0x00000054 + -0x78) = 0x14;
          FUN_00093560();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x74);
          iVar2 = puVar1[1];
          uVar4 = puVar1[2];
          puVar8 = (undefined *)*puVar1;
          if (*(char *)((int)register0x00000054 + -0x70) == '\0') {
            uVar4 = 0;
            iVar2 = 0;
            puVar8 = PTR_DAT_0069626c;
          }
          uVar6 = iVar2 + 1;
          if (uVar4 < uVar6) {
            *(undefined **)((int)register0x00000054 + -0x84) = puVar8;
            *(uint *)((int)register0x00000054 + -0x80) = uVar6;
            *(uint *)((int)register0x00000054 + -0x7c) = uVar4;
            *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
            *(undefined **)((int)register0x00000054 + -0x74) = PTR_DAT_00696270;
            FUN_000987f4();
            puVar8 = *(undefined **)((int)register0x00000054 + -0x70);
            uVar6 = *(uint *)((int)register0x00000054 + -0x6c);
            uVar4 = *(uint *)((int)register0x00000054 + -0x68);
          }
          *(uint *)((int)register0x00000054 + -0x3c) = uVar6;
          *(uint *)((int)register0x00000054 + -0x40) = uVar4;
          if (*(int *)PTR_DAT_00696228 == 0) {
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x14);
          }
          else {
            FUN_0009db64();
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x14);
            *unaff_r8 = uVar7;
            unaff_r8[1] = *(undefined4 *)(extraout_r2_00 + (uVar6 - 1) * 4);
            puVar8 = extraout_r2_00;
          }
          *(undefined **)((int)register0x00000054 + -0x18) = puVar8;
          *(undefined4 *)(puVar8 + (uVar6 - 1) * 4) = uVar7;
          uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x38) + 0x24);
          *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_00696264;
          *(undefined4 *)((int)register0x00000054 + -0x80) = uVar7;
          *(undefined **)((int)register0x00000054 + -0x7c) = PTR_DAT_00696268;
          *(undefined4 *)((int)register0x00000054 + -0x78) = 0x14;
          FUN_00093a08();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x74);
          puVar1[1] = *(undefined4 *)((int)register0x00000054 + -0x3c);
          puVar1[2] = *(undefined4 *)((int)register0x00000054 + -0x40);
          if (*(int *)PTR_DAT_00696228 == 0) {
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x18);
          }
          else {
            puVar1 = (undefined4 *)FUN_0009db64();
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x18);
            *unaff_r8 = uVar7;
            unaff_r8[1] = *puVar1;
          }
          *puVar1 = uVar7;
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
                    /* WARNING: Could not recover jumptable at 0x00696178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x88))();
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1c) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x84) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1c) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x80) = uVar7;
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0069623c;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x7c);
        *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_00696274;
        *(undefined4 *)((int)register0x00000054 + -0x80) = 0x19;
        *(undefined1 **)((int)register0x00000054 + -0x7c) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x74) = 1;
        FUN_001386c4();
        uVar12 = *(int *)((int)register0x00000054 + -0x70) == 0;
        uVar7 = 0;
        if (!(bool)uVar12) {
          uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x70) + 4);
        }
        *(undefined4 *)((int)register0x00000054 + -0x84) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x80) =
             *(undefined4 *)((int)register0x00000054 + -0x6c);
        uVar13 = FUN_00095b00();
      }
      *(undefined8 *)((int)register0x00000054 + -0x84) = uVar13;
      *(undefined **)((int)register0x00000054 + -0x7c) = PTR_DAT_00696278;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x88);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar11;
      }
    }
    unaff_lr = 0x69621c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.NewInputShaperParams.func1 @ 0069627c (size 704) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_vibration_NewInputShaperParams_func1(undefined4 param_1)

{
  undefined4 *extraout_r2;
  undefined4 extraout_r2_00;
  undefined1 *puVar1;
  undefined4 extraout_r3;
  undefined1 *extraout_r3_00;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int unaff_r7;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0xc)) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x8c);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = unaff_lr;
      uVar6 = *(int *)((int)register0x00000054 + 8) == 0;
      if (!(bool)uVar6) {
        puVar1 = (undefined1 *)**(int **)((int)register0x00000054 + 4);
        uVar6 = 0;
        puVar3 = DAT_00696540;
        if (puVar1 == DAT_00696540) {
          *(undefined4 *)((int)register0x00000054 + -0x30) = *(undefined4 *)(unaff_r7 + 8);
          uVar2 = *(undefined4 *)(unaff_r7 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x44) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -0x48) = *(undefined4 *)(unaff_r7 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x38) = *(undefined4 *)(unaff_r7 + 0x14);
          unaff_r7 = *(int *)(unaff_r7 + 4);
          *(int *)((int)register0x00000054 + -0x34) = unaff_r7;
          FUN_0009df00(0,(undefined1 *)((int)register0x00000054 + -0x2c),
                       (*(int **)((int)register0x00000054 + 4))[1]);
          *(undefined4 *)((int)register0x00000054 + -0x2c) = *extraout_r2;
          *(undefined4 *)((int)register0x00000054 + -0x28) = extraout_r2[1];
          *(undefined4 *)((int)register0x00000054 + -0x24) = extraout_r2[2];
          *(undefined4 *)((int)register0x00000054 + -0x1c) = 0xc;
          *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_00696544;
          *(undefined4 *)((int)register0x00000054 + -0x88) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_00696548;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 0xc;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = extraout_r3;
          *(undefined4 *)((int)register0x00000054 + -0x78) = uVar2;
          FUN_0007636c();
          *(undefined1 **)((int)register0x00000054 + -0x88) =
               (undefined1 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x74);
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + -0x70);
          *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_0069654c;
          *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_00696550;
          *(undefined8 *)((int)register0x00000054 + -0x74) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x6c) = 0;
          *(undefined8 *)((int)register0x00000054 + -100) = 0;
          *(undefined8 *)((int)register0x00000054 + -0x5c) = 0;
          *(undefined1 *)((int)register0x00000054 + -0x54) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
          *(undefined8 *)(*(int *)((int)register0x00000054 + -0x34) + 0x1c) =
               *(undefined8 *)((int)register0x00000054 + -0x50);
          *(undefined4 *)((int)register0x00000054 + -0x88) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_00696554;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 0xc;
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          FUN_0007636c();
          puVar3 = (undefined1 *)((int)register0x00000054 + -0x2c);
          *(undefined1 **)((int)register0x00000054 + -0x88) = puVar3;
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x74);
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + -0x70);
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)((int)register0x00000054 + -0x38);
          *(undefined1 *)((int)register0x00000054 + -0x74) = 1;
          k3c_internal_pkg_printer___ConfigWrapper__Get();
          uVar6 = *(int *)((int)register0x00000054 + -0x70) == DAT_00696558;
          if ((bool)uVar6) {
            uVar2 = **(undefined4 **)((int)register0x00000054 + -0x6c);
            iVar4 = *(int *)((int)register0x00000054 + -0x34);
            *(undefined4 *)(iVar4 + 0x10) = (*(undefined4 **)((int)register0x00000054 + -0x6c))[1];
            if (*DAT_0069655c != 0) {
              FUN_0009db64();
              _DAT_00000004 = *(undefined4 *)(iVar4 + 0xc);
              uVar2 = extraout_r2_00;
              uRam00000000 = extraout_r2_00;
            }
            *(undefined4 *)(iVar4 + 0xc) = uVar2;
            FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x30);
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + -0x44);
            FUN_0008f77c();
            *(int *)((int)register0x00000054 + -0x18) = DAT_00696558;
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x34) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -0x34) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x84) = uVar2;
            FUN_0008f77c();
            *(int *)((int)register0x00000054 + -0x10) = DAT_00696558;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            *(undefined8 *)((int)register0x00000054 + -0x40) =
                 *(undefined8 *)(*(int *)((int)register0x00000054 + -0x34) + 0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + -8) = DAT_0069654c;
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_00696560;
            *(undefined4 *)((int)register0x00000054 + -0x84) = 0x35;
            *(undefined1 **)((int)register0x00000054 + -0x80) =
                 (undefined1 *)((int)register0x00000054 + -0x18);
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x78) = 3;
            k3c_internal_pkg_logger_Debugf();
            *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            return;
          }
          *(int *)((int)register0x00000054 + -0x88) = *(int *)((int)register0x00000054 + -0x70);
          *(int *)((int)register0x00000054 + -0x84) = DAT_00696558;
          *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_00696564;
          FUN_000209b4();
          puVar1 = extraout_r3_00;
        }
        *(undefined1 **)((int)register0x00000054 + -0x88) = puVar1;
        *(undefined1 **)((int)register0x00000054 + -0x84) = puVar3;
        *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_00696564;
        FUN_000209b4();
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x8c);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x696538;
    param_1 = FUN_0009bf00(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*InputShaperParams).Update @ 00696568 (size 892) */

void k3c_internal_pkg_motion_vibration___InputShaperParams__Update(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  int extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -8)) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x88);
      *(undefined4 *)((int)register0x00000054 + -0x88) = unaff_lr;
      uVar3 = (*(undefined4 **)((int)register0x00000054 + 4))[1];
      *(undefined4 *)((int)register0x00000054 + -0x84) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x80) = uVar3;
      FUN_0015086c();
      uVar3 = *(undefined4 *)((int)register0x00000054 + -0x7c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar3;
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x78);
      *(undefined4 *)((int)register0x00000054 + -0x34) = uVar2;
      *(undefined8 *)((int)register0x00000054 + -0x40) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x48) = 0x3ff0000000000000;
      *(undefined8 *)((int)register0x00000054 + -0x28) =
           *(undefined8 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
      *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
      *(undefined **)((int)register0x00000054 + -0x80) =
           PTR_s_DAMPING_RATIO_axis___3f___3fBED__008262d0_0x226c_006968e8;
      *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xe;
      *(undefined4 *)((int)register0x00000054 + -0x78) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x74) = uVar2;
      FUN_0007636c();
      *(undefined4 *)((int)register0x00000054 + -0x84) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x80) =
           *(undefined4 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0x7c) =
           *(undefined4 *)((int)register0x00000054 + -0x6c);
      *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_006968ec;
      *(undefined1 **)((int)register0x00000054 + -0x74) =
           (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined1 **)((int)register0x00000054 + -0x70) =
           (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined1 **)((int)register0x00000054 + -0x6c) =
           (undefined1 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
      *(undefined4 *)((int)register0x00000054 + -100) = 0;
      k3c_internal_pkg_gcode___GCodeCommand__Get_float();
      iVar1 = *(int *)((int)register0x00000054 + 4);
      *(undefined8 *)(iVar1 + 0x14) = *(undefined8 *)((int)register0x00000054 + -0x60);
      *(undefined8 *)((int)register0x00000054 + -0x50) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x30) = *(undefined8 *)(iVar1 + 0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
      *(undefined **)((int)register0x00000054 + -0x80) =
           PTR_s_SHAPER_FREQ_SHAPER_TYPE_accel_pe_008262d0_0x46d_006968f0;
      *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xc;
      *(undefined4 *)((int)register0x00000054 + -0x78) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      FUN_0007636c();
      *(undefined4 *)((int)register0x00000054 + -0x84) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x80) =
           *(undefined4 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0x7c) =
           *(undefined4 *)((int)register0x00000054 + -0x6c);
      *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_006968ec;
      *(undefined1 **)((int)register0x00000054 + -0x74) =
           (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined1 **)((int)register0x00000054 + -0x70) =
           (undefined1 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x6c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
      *(undefined4 *)((int)register0x00000054 + -100) = 0;
      k3c_internal_pkg_gcode___GCodeCommand__Get_float();
      iVar1 = *(int *)((int)register0x00000054 + 4);
      *(undefined8 *)(iVar1 + 0x1c) = *(undefined8 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x84) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_006968f4;
      *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xb;
      *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_006968f8;
      *(undefined1 **)((int)register0x00000054 + -0x74) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x70) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
      *(undefined4 *)((int)register0x00000054 + -100) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x60) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
      k3c_internal_pkg_gcode___GCodeCommand__Get(iVar1);
      iVar1 = *(int *)((int)register0x00000054 + -0x54);
      uVar3 = *(undefined4 *)((int)register0x00000054 + -0x58);
      if (iVar1 == 0) {
        *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
        *(undefined **)((int)register0x00000054 + -0x80) =
             PTR_s_SHAPER_TYPE_accel_per_hzprobe_po_008262d0_0x479_006968fc;
        *(undefined4 *)((int)register0x00000054 + -0x7c) = 0xc;
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x74) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        FUN_0007636c();
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x14) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x84) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x80) =
             *(undefined4 *)((int)register0x00000054 + -0x70);
        *(undefined4 *)((int)register0x00000054 + -0x7c) =
             *(undefined4 *)((int)register0x00000054 + -0x6c);
        *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_006968f8;
        *(undefined1 **)((int)register0x00000054 + -0x74) =
             (undefined1 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x70) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x6c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
        *(undefined4 *)((int)register0x00000054 + -100) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x60) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
        k3c_internal_pkg_gcode___GCodeCommand__Get();
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x58);
        iVar1 = *(int *)((int)register0x00000054 + -0x54);
      }
      *(undefined4 *)((int)register0x00000054 + -0x20) = uVar3;
      *(int *)((int)register0x00000054 + -0x38) = iVar1;
      *(undefined4 *)((int)register0x00000054 + -0x84) = uVar3;
      *(int *)((int)register0x00000054 + -0x80) = iVar1;
      FUN_00150c8c();
      uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
      *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_00696900;
      *(undefined4 *)((int)register0x00000054 + -0x80) = uVar3;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x70) != '\0') {
        *(undefined4 *)((int)register0x00000054 + -0x84) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x80) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        FUN_00150c8c();
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x7c);
        iVar1 = *(int *)((int)register0x00000054 + 4);
        *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)((int)register0x00000054 + -0x78);
        if (*(int *)PTR_DAT_00696904 != 0) {
          FUN_0009db64();
          *unaff_r8 = extraout_r1;
          unaff_r8[1] = *(undefined4 *)(extraout_r2 + 0xc);
          uVar3 = extraout_r1;
          iVar1 = extraout_r2;
        }
        *(undefined4 *)(iVar1 + 0xc) = uVar3;
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x84) =
           *(undefined4 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x80) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_006968f8;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x7c);
      *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_00696908;
      *(undefined4 *)((int)register0x00000054 + -0x80) = 0x1b;
      *(undefined1 **)((int)register0x00000054 + -0x7c) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x74) = 1;
      FUN_001386c4();
      bVar5 = *(int *)((int)register0x00000054 + -0x70) == 0;
      uVar3 = 0;
      if (!bVar5) {
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x70) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0x84) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x80) =
           *(undefined4 *)((int)register0x00000054 + -0x6c);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x88);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x6968e0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*InputShaperParams).Get_shaper @ 0069690c (size 212) */

void k3c_internal_pkg_motion_vibration___InputShaperParams__Get_shaper(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 local_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (*(double *)(in_stack_00000004 + 0x1c) != 0.0) {
    FUN_00025f60();
    (**(code **)*local_28)();
  }
  return;
}



/* k3c/internal/pkg/motion/vibration.(*InputShaperParams).Get_status @ 006969ec (size 780) */

void k3c_internal_pkg_motion_vibration___InputShaperParams__Get_status(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 *local_40;
  int local_38;
  undefined4 *local_30;
  undefined *local_10;
  undefined *local_c;
  undefined4 *local_8;
  undefined **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_000908bc();
  FUN_0008f77c();
  puVar1 = PTR_DAT_00696d00;
  local_4 = (undefined **)local_38;
  FUN_00093a08();
  *local_30 = PTR_DAT_00696d04;
  if (*(int *)PTR_DAT_00696d08 != 0) {
    local_30 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = (int)local_4;
    unaff_r8[1] = local_30[1];
  }
  local_30[1] = local_4;
  local_10 = (undefined *)0x0;
  local_c = (undefined *)0x0;
  FUN_0008f6c0();
  local_10 = PTR_DAT_00696d0c;
  local_c = puVar1;
  FUN_0013b72c();
  FUN_0008f77c();
  puVar1 = PTR_DAT_00696d14;
  local_4 = &local_10;
  FUN_00093a08();
  iVar2 = 1;
  puRam00000001 = PTR_DAT_00696d04;
  if (*(int *)PTR_DAT_00696d08 != 0) {
    iVar2 = FUN_0009db64();
    *unaff_r8 = (int)local_4;
    unaff_r8[1] = *(int *)(iVar2 + 4);
  }
  *(undefined ***)(iVar2 + 4) = local_4;
  local_10 = (undefined *)0x0;
  local_c = (undefined *)0x0;
  FUN_0008f6c0();
  local_10 = PTR_DAT_00696d0c;
  local_c = puVar1;
  FUN_0013b72c();
  FUN_0008f77c();
  local_4 = &local_10;
  FUN_00093a08();
  iVar2 = 1;
  puRam00000001 = PTR_DAT_00696d04;
  if (*(int *)PTR_DAT_00696d08 != 0) {
    iVar2 = FUN_0009db64();
    *unaff_r8 = (int)local_4;
    unaff_r8[1] = *(int *)(iVar2 + 4);
  }
  *(undefined ***)(iVar2 + 4) = local_4;
  FUN_00022cf8();
  local_8 = local_40;
  local_40[1] = 0xb;
  *local_40 = PTR_DAT_00696d00;
  local_40[3] = 0xb;
  local_40[2] = PTR_DAT_00696d14;
  local_40[5] = 0xd;
  local_40[4] = PTR_s_damping_ratiolis2dw12_datatest_f_008262d0_0x13e3_00696d1c;
  FUN_00022cf8();
  local_40[1] = 3;
  local_40[2] = 3;
  puVar3 = local_40;
  if (*(int *)PTR_DAT_00696d08 != 0) {
    puVar3 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = (int)local_8;
    unaff_r8[1] = (int)local_40;
  }
  *puVar3 = local_8;
  puVar3[3] = local_40;
  return;
}



/* k3c/internal/pkg/motion/vibration.NewAxisInputShaper @ 00696d28 (size 720) */

void k3c_internal_pkg_motion_vibration_NewAxisInputShaper(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int extraout_r1;
  int iVar3;
  uint uVar4;
  undefined *extraout_r2;
  undefined *puVar5;
  int extraout_r3;
  int iVar6;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  int in_stack_0000000c;
  int *in_stack_00000010;
  int *piStack_38;
  int iStack_30;
  int *piStack_2c;
  undefined *puStack_28;
  uint uStack_24;
  uint uStack_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x696ff4;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  piStack_38[1] = (int)in_stack_00000008;
  puVar1 = in_stack_00000008;
  if (*(int *)PTR_DAT_00697000 != 0) {
    uVar7 = FUN_0009db54();
    piStack_38 = (int *)uVar7;
    *unaff_r8 = in_stack_00000004;
    puVar1 = (undefined4 *)((ulonglong)uVar7 >> 0x20);
  }
  iVar6 = in_stack_0000000c;
  *piStack_38 = in_stack_00000004;
  k3c_internal_pkg_motion_vibration_NewInputShaperParams();
  iVar3 = iStack_30;
  if (*(int *)PTR_DAT_00697000 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = piStack_38[2];
    iVar3 = extraout_r1;
  }
  piStack_38[2] = iVar3;
  k3c_internal_pkg_motion_vibration___InputShaperParams__Get_shaper();
  piStack_38[3] = (int)puVar1;
  piStack_38[5] = iStack_30;
  piStack_38[6] = (int)piStack_2c;
  if (*(int *)PTR_DAT_00697000 != 0) {
    FUN_0009db94();
    *unaff_r8 = extraout_r3;
    unaff_r8[1] = piStack_38[4];
    unaff_r8[2] = (int)puStack_28;
    unaff_r8[3] = piStack_38[7];
    unaff_r8[4] = piStack_38[10];
    iVar6 = extraout_r3;
  }
  piStack_38[4] = iVar6;
  piStack_38[8] = uStack_24;
  piStack_38[9] = uStack_20;
  piStack_38[7] = (int)puStack_28;
  piStack_38[10] = 0;
  FUN_00022cf8();
  *puVar1 = PTR_k3c_internal_pkg_motion_vibration_NewAxisInputShaper_func1_00697008;
  if (*(int *)PTR_DAT_00697000 != 0) {
    puVar1 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = (int)piStack_38;
    unaff_r8[1] = in_stack_00000004;
  }
  puVar1[1] = piStack_38;
  puVar1[3] = in_stack_00000008;
  puVar1[2] = in_stack_00000004;
  FUN_00093560();
  iVar6 = piStack_2c[1];
  uVar2 = piStack_2c[2];
  puVar5 = (undefined *)*piStack_2c;
  if ((char)puStack_28 == '\0') {
    uVar2 = 0;
    iVar6 = 0;
    puVar5 = PTR_DAT_00697014;
  }
  uVar4 = iVar6 + 1U;
  if (uVar2 < iVar6 + 1U) {
    piStack_2c = (int *)PTR_DAT_00697018;
    FUN_000987f4();
    uVar2 = uStack_20;
    uVar4 = uStack_24;
    puVar5 = puStack_28;
  }
  if (*(int *)PTR_DAT_00697000 != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puVar1;
    unaff_r8[1] = *(int *)(extraout_r2 + (uVar4 - 1) * 4);
    puVar5 = extraout_r2;
  }
  *(undefined4 **)(puVar5 + (uVar4 - 1) * 4) = puVar1;
  FUN_00093a08();
  piStack_2c[1] = uVar4;
  piStack_2c[2] = uVar2;
  if (*(int *)PTR_DAT_00697000 != 0) {
    piStack_2c = (int *)FUN_0009db64();
    *unaff_r8 = (int)puVar5;
    unaff_r8[1] = *piStack_2c;
  }
  *piStack_2c = (int)puVar5;
  in_stack_00000010 = piStack_38;
                    /* WARNING: Could not recover jumptable at 0x00696fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.NewAxisInputShaper.func1 @ 0069701c (size 372) */

void k3c_internal_pkg_motion_vibration_NewAxisInputShaper_func1(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r3;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 auStack_18 [2];
  undefined4 uStack_10;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x69718c;
    FUN_0009bf00();
  }
  iVar1 = *(int *)(unaff_r7 + 4);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  k3c_internal_pkg_motion_vibration___InputShaperParams__Get_shaper();
  *(undefined4 *)(iVar1 + 0xc) = uStack_48;
  *(undefined4 *)(iVar1 + 0x14) = uStack_40;
  *(undefined4 *)(iVar1 + 0x18) = uStack_3c;
  if (*DAT_00697194 != 0) {
    FUN_0009db84();
    *unaff_r8 = extraout_r3;
    unaff_r8[1] = *(undefined4 *)(iVar1 + 0x10);
    unaff_r8[2] = uStack_38;
    uStack_3c = *(undefined4 *)(iVar1 + 0x1c);
    unaff_r8[3] = uStack_3c;
    uStack_44 = extraout_r3;
  }
  *(undefined4 *)(iVar1 + 0x10) = uStack_44;
  *(undefined4 *)(iVar1 + 0x20) = uStack_34;
  *(undefined4 *)(iVar1 + 0x24) = uStack_30;
  *(undefined4 *)(iVar1 + 0x1c) = uStack_38;
  FUN_0009defc(0,auStack_18,uStack_3c,uStack_44,unaff_lr,uVar2);
  FUN_0008f77c();
  auStack_18[0] = DAT_00697198;
  FUN_0008f77c();
  uStack_10 = DAT_00697198;
  FUN_0008f6c0();
  uStack_8 = DAT_0069719c;
  k3c_internal_pkg_logger_Debugf();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AxisInputShaper).Get_name @ 006971a4 (size 96) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_vibration___AxisInputShaper__Get_name(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x697200;
    FUN_0009bf64();
  }
  FUN_0007636c();
                    /* WARNING: Could not recover jumptable at 0x006971f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AxisInputShaper).Get_shaper @ 0069720c (size 64) */

void k3c_internal_pkg_motion_vibration___AxisInputShaper__Get_shaper(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
  uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x10);
  uStack00000010 = *(undefined4 *)(in_stack_00000004 + 0x14);
  uStack00000014 = *(undefined4 *)(in_stack_00000004 + 0x18);
  uStack00000018 = *(undefined4 *)(in_stack_00000004 + 0x1c);
  uStack0000001c = *(undefined4 *)(in_stack_00000004 + 0x20);
  uStack00000020 = *(undefined4 *)(in_stack_00000004 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x00697248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AxisInputShaper).Update @ 0069724c (size 412) */

void k3c_internal_pkg_motion_vibration___AxisInputShaper__Update(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_r3;
  int iVar5;
  int iVar6;
  int iVar7;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 in_stack_0000000c;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  
  while (uVar1 = in_stack_00000008, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_motion_vibration___InputShaperParams__Update();
  iVar2 = *(int *)(in_stack_00000004 + 0xc);
  iVar4 = *(int *)(in_stack_00000004 + 0x14);
  iVar5 = *(int *)(in_stack_00000004 + 0x10);
  iVar6 = *(int *)(in_stack_00000004 + 0x20);
  iVar7 = *(int *)(in_stack_00000004 + 0x1c);
  k3c_internal_pkg_motion_vibration___InputShaperParams__Get_shaper();
  iVar3 = in_stack_00000004;
  *(undefined4 *)(in_stack_00000004 + 0xc) = uVar1;
  *(undefined4 *)(in_stack_00000004 + 0x14) = local_28;
  *(undefined4 *)(in_stack_00000004 + 0x18) = local_24;
  if (*DAT_006973ec != 0) {
    FUN_0009db84();
    *unaff_r8 = extraout_r3;
    unaff_r8[1] = *(int *)(iVar3 + 0x10);
    unaff_r8[2] = local_20;
    unaff_r8[3] = *(int *)(iVar3 + 0x1c);
    local_2c = extraout_r3;
  }
  *(int *)(iVar3 + 0x10) = local_2c;
  *(int *)(iVar3 + 0x20) = local_1c;
  *(undefined4 *)(iVar3 + 0x24) = local_18;
  *(int *)(iVar3 + 0x1c) = local_20;
  if (*(int *)(iVar3 + 0xc) != iVar2) {
    if (*(int *)(iVar3 + 0x14) == iVar4) {
      for (iVar3 = 0; iVar3 < iVar4; iVar3 = iVar3 + 1) {
        if (*(double *)(local_2c + iVar3 * 8) != *(double *)(iVar5 + iVar3 * 8)) goto LAB_00697374;
      }
    }
    else {
LAB_00697374:
      if (local_1c == iVar6) {
        for (iVar3 = 0;
            (iVar3 < iVar6 && (*(double *)(local_20 + iVar3 * 8) == *(double *)(iVar7 + iVar3 * 8)))
            ; iVar3 = iVar3 + 1) {
        }
      }
    }
  }
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AxisInputShaper).Set_shaper_kinematics @ 006973f0 (size 540) */

/* WARNING: Removing unreachable block (ram,0x00697480) */

void k3c_internal_pkg_motion_vibration___AxisInputShaper__Set_shaper_kinematics(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *extraout_r2;
  undefined4 uVar6;
  undefined4 extraout_r3;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int unaff_r10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  undefined1 uVar12;
  bool bVar13;
  undefined8 uVar14;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar11 = (undefined1 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x34) = unaff_lr;
      puVar4 = *(undefined4 **)((int)register0x00000054 + 4);
      uVar12 = puVar4[1] == 0;
      if (!(bool)uVar12) {
        uVar12 = *(undefined1 *)*puVar4;
        uVar2 = puVar4[3];
        uVar6 = puVar4[4];
        uVar7 = puVar4[5];
        uVar8 = puVar4[6];
        uVar9 = puVar4[7];
        uVar10 = puVar4[8];
        puVar4 = (undefined4 *)puVar4[9];
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined1 *)((int)register0x00000054 + -0x28) = uVar12;
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x20) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x18) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0x14) = uVar9;
        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar10;
        *(undefined4 **)((int)register0x00000054 + -0xc) = puVar4;
        k3c_internal_pkg_chelper_Input_shaper_set_shaper_params();
        iVar1 = *(int *)((int)register0x00000054 + -8);
        bVar13 = true;
        if (iVar1 == 0) goto LAB_006975d8;
        *(int *)((int)register0x00000054 + -4) = iVar1;
        puVar5 = *(undefined4 **)((int)register0x00000054 + 4);
        if ((puVar5[10] == 0) && (0 < (int)puVar5[3])) {
          *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_00697610;
          FUN_00022cf8();
          puVar5 = *(undefined4 **)((int)register0x00000054 + -0x2c);
          iVar1 = *(int *)((int)register0x00000054 + 4);
          uVar14 = CONCAT44(iVar1,puVar5);
          *puVar5 = *(undefined4 *)(iVar1 + 0xc);
          uVar2 = *(undefined4 *)(iVar1 + 0x18);
          uVar6 = *(undefined4 *)(iVar1 + 0x10);
          puVar5[2] = *(undefined4 *)(iVar1 + 0x14);
          puVar5[3] = uVar2;
          if (*DAT_00697614 != 0) {
            uVar14 = FUN_0009db54();
            *puVar4 = uVar6;
          }
          iVar3 = (int)((ulonglong)uVar14 >> 0x20);
          iVar1 = (int)uVar14;
          *(undefined4 *)(iVar1 + 4) = uVar6;
          uVar2 = *(undefined4 *)(iVar3 + 0x24);
          uVar6 = *(undefined4 *)(iVar3 + 0x1c);
          *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar3 + 0x20);
          *(undefined4 *)(iVar1 + 0x18) = uVar2;
          if (*DAT_00697614 != 0) {
            uVar14 = FUN_0009db74();
            *puVar4 = uVar6;
            puVar4[1] = (int)uVar14;
            puVar4[2] = *(undefined4 *)((int)((ulonglong)uVar14 >> 0x20) + 0x28);
          }
          puVar5 = (undefined4 *)((ulonglong)uVar14 >> 0x20);
          *(undefined4 *)((int)uVar14 + 0x10) = uVar6;
          puVar5[10] = (int)uVar14;
          iVar1 = *(int *)((int)register0x00000054 + -4);
        }
        uVar2 = 0;
        puVar5[3] = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        if (*DAT_00697614 != 0) {
          FUN_0009db64(iVar1,0,puVar5,puVar5[4]);
          *puVar4 = extraout_r3;
          puVar4[1] = extraout_r2[7];
          uVar2 = extraout_r1;
          puVar5 = extraout_r2;
        }
        uVar6 = DAT_00697618;
        puVar5[4] = DAT_00697618;
        puVar5[8] = uVar2;
        puVar5[9] = uVar2;
        puVar5[7] = uVar6;
        uVar12 = puVar5[1] == 0;
        if (!(bool)uVar12) {
          uVar12 = *(undefined1 *)*puVar5;
          uVar7 = puVar5[3];
          uVar8 = puVar5[4];
          uVar9 = puVar5[5];
          uVar10 = puVar5[6];
          uVar6 = puVar5[7];
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined1 *)((int)register0x00000054 + -0x28) = uVar12;
          *(undefined4 *)((int)register0x00000054 + -0x24) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x20) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar9;
          *(undefined4 *)((int)register0x00000054 + -0x18) = uVar10;
          *(undefined4 *)((int)register0x00000054 + -0x14) = uVar6;
          *(undefined4 *)((int)register0x00000054 + -0x10) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -0xc) = uVar2;
          k3c_internal_pkg_chelper_Input_shaper_set_shaper_params();
          bVar13 = *(int *)((int)register0x00000054 + -4) == 0;
LAB_006975d8:
          *(bool *)((int)register0x00000054 + 0x10) = bVar13;
          return;
        }
        FUN_0009dbd4(uVar2);
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x34);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar11;
      }
    }
    unaff_lr = 0x697608;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*AxisInputShaper).Get_step_generation_window @ 0069761c (size 112) */

void k3c_internal_pkg_motion_vibration___AxisInputShaper__Get_step_generation_window(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if ((*(int *)(in_stack_00000004 + 0x14) != 0) && (*(int *)(in_stack_00000004 + 0x20) != 0)) {
    k3c_internal_pkg_chelper__Cfunc_input_shaper_get_step_generation_window();
    return;
  }
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AxisInputShaper).Enable_shaping @ 0069768c (size 196) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_vibration___AxisInputShaper__Enable_shaping(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar4;
  int in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x69774c;
    FUN_0009bf64();
  }
  if (*(undefined4 **)(in_stack_00000004 + 0x28) != (undefined4 *)0x0) {
    *(undefined4 *)(in_stack_00000004 + 0xc) = **(undefined4 **)(in_stack_00000004 + 0x28);
    iVar1 = *(int *)(in_stack_00000004 + 0x28);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    uVar4 = CONCAT44(*(undefined4 *)(iVar1 + 4),in_stack_00000004);
    *(undefined4 *)(in_stack_00000004 + 0x14) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(in_stack_00000004 + 0x18) = uVar3;
    if (*_UNK_00697754 != 0) {
      uVar4 = FUN_0009db64();
      *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
      unaff_r8[1] = *(undefined4 *)((int)uVar4 + 0x10);
    }
    iVar1 = (int)uVar4;
    *(int *)(iVar1 + 0x10) = (int)((ulonglong)uVar4 >> 0x20);
    iVar2 = *(int *)(iVar1 + 0x28);
    uVar3 = *(undefined4 *)(iVar2 + 0x18);
    uVar4 = CONCAT44(*(undefined4 *)(iVar2 + 0x10),iVar1);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)(iVar1 + 0x24) = uVar3;
    if (*_UNK_00697754 != 0) {
      uVar4 = FUN_0009db74();
      *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
      unaff_r8[1] = *(undefined4 *)((int)uVar4 + 0x1c);
      unaff_r8[2] = *(undefined4 *)((int)uVar4 + 0x28);
    }
    *(int *)((int)uVar4 + 0x1c) = (int)((ulonglong)uVar4 >> 0x20);
    *(undefined4 *)((int)uVar4 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x0069773c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00697740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AxisInputShaper).Report @ 00697758 (size 212) */

void k3c_internal_pkg_motion_vibration___AxisInputShaper__Report(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  k3c_internal_pkg_motion_vibration___InputShaperParams__Get_status();
  local_c = DAT_00697830;
  local_8 = &local_20;
  local_4 = in_stack_00000004;
  k3c_common_collections___SortedMap__Range();
  local_14 = 0;
  local_10 = 0;
  FUN_0008f820();
  local_14 = DAT_00697834;
  k3c_internal_pkg_logger_Debugf();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AxisInputShaper).Report.func1 @ 0069783c (size 404) */

void k3c_internal_pkg_motion_vibration___AxisInputShaper__Report_func1(void)

{
  int iVar1;
  int extraout_r1;
  uint extraout_r2;
  int *piVar2;
  int *extraout_r3;
  uint uVar3;
  int iVar4;
  int unaff_r7;
  int *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined1 in_stack_00000014;
  int iStack_38;
  uint uStack_34;
  int iStack_30;
  undefined4 auStack_20 [2];
  undefined4 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  int *piStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x6979cc;
    FUN_0009bf00();
  }
  piStack_4 = *(int **)(unaff_r7 + 4);
  FUN_0009defc(0,auStack_20,*(undefined4 *)(unaff_r7 + 8),piStack_4,unaff_lr);
  FUN_0008f77c();
  auStack_20[0] = DAT_006979d4;
  FUN_0008f77c();
  uStack_18 = DAT_006979d4;
  uStack_10 = in_stack_0000000c;
  uStack_c = in_stack_00000010;
  FUN_0013b72c();
  uVar3 = piStack_4[1] + 1;
  piVar2 = piStack_4;
  iVar4 = *piStack_4;
  if ((uint)piStack_4[2] < uVar3) {
    iStack_8 = iStack_38;
    FUN_000987f4();
    piStack_4[2] = iStack_30;
    uVar3 = uStack_34;
    piVar2 = piStack_4;
    if (*DAT_006979dc != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *extraout_r3;
      iStack_38 = extraout_r1;
      uVar3 = extraout_r2;
      piVar2 = extraout_r3;
    }
    *piVar2 = iStack_38;
    iVar4 = iStack_38;
    iStack_38 = iStack_8;
  }
  piVar2[1] = uVar3;
  iVar1 = uVar3 - 1;
  *(uint *)(iVar4 + iVar1 * 8 + 4) = uStack_34;
  if (*DAT_006979dc != 0) {
    iVar1 = FUN_0009db64();
    *unaff_r8 = iStack_38;
    unaff_r8[1] = *(int *)(iVar4 + iVar1 * 8);
  }
  *(int *)(iVar4 + iVar1 * 8) = iStack_38;
  return;
}



/* k3c/internal/pkg/motion/vibration.NewInputShaper @ 006979e0 (size 1268) */

void k3c_internal_pkg_motion_vibration_NewInputShaper(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *extraout_r1;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *extraout_r1_00;
  uint uVar6;
  undefined *extraout_r2;
  undefined *extraout_r2_00;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 extraout_r3;
  int iVar9;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 *puStack_4c;
  undefined4 *puStack_40;
  undefined *puStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x697ed0;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  uVar8 = *in_stack_00000004;
  puVar4 = puStack_4c;
  if (*(int *)PTR_DAT_00697edc != 0) {
    FUN_0009db54();
    *unaff_r8 = extraout_r3;
    puVar4 = extraout_r1;
    uVar8 = extraout_r3;
  }
  *puVar4 = uVar8;
  FUN_00022cf8();
  *puStack_4c = PTR_k3c_internal_pkg_motion_vibration___InputShaper__Connect_fm_00697ee4;
  if (*(int *)PTR_DAT_00697edc != 0) {
    puStack_4c = (undefined4 *)FUN_0009db54();
    *unaff_r8 = puVar4;
  }
  puStack_4c[1] = puVar4;
  FUN_00093560();
  iVar9 = puStack_40[1];
  uVar2 = puStack_40[2];
  puVar3 = (undefined *)*puStack_40;
  if ((char)puStack_3c == '\0') {
    uVar2 = 0;
    iVar9 = 0;
    puVar3 = PTR_DAT_00697ef0;
  }
  uVar6 = iVar9 + 1U;
  if (uVar2 < iVar9 + 1U) {
    puStack_40 = (undefined4 *)PTR_DAT_00697ef4;
    FUN_000987f4();
    uVar2 = uStack_34;
    uVar6 = uStack_38;
    puVar3 = puStack_3c;
  }
  if (*(int *)PTR_DAT_00697edc != 0) {
    FUN_0009db64();
    *unaff_r8 = puStack_4c;
    unaff_r8[1] = *(undefined4 *)(extraout_r2 + (uVar6 - 1) * 4);
    puVar3 = extraout_r2;
  }
  *(undefined4 **)(puVar3 + (uVar6 - 1) * 4) = puStack_4c;
  FUN_00093a08();
  puStack_40[1] = uVar6;
  puStack_40[2] = uVar2;
  puVar5 = puStack_40;
  if (*(int *)PTR_DAT_00697edc != 0) {
    puVar5 = (undefined4 *)FUN_0009db74();
    *unaff_r8 = puVar3;
    unaff_r8[1] = *puVar5;
    unaff_r8[2] = puVar4[1];
  }
  *puVar5 = puVar3;
  puVar4[1] = 0;
  k3c_internal_pkg_motion_vibration_NewAxisInputShaper();
  k3c_internal_pkg_motion_vibration_NewAxisInputShaper();
  FUN_00022cf8();
  puVar5 = (undefined4 *)0x1;
  if (*(int *)PTR_DAT_00697edc != 0) {
    FUN_0009dba4();
    *unaff_r8 = 0xf;
    unaff_r8[1] = 0xf;
    unaff_r8[2] = extraout_r1_00;
    unaff_r8[3] = puVar4[2];
    unaff_r8[4] = puVar4[5];
    unaff_r8[5] = puVar4[8];
    puVar5 = extraout_r1_00;
  }
  *puVar5 = 0xf;
  puVar5[1] = 0xf;
  puVar4[3] = 2;
  puVar4[4] = 2;
  puVar4[2] = puVar5;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[5] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[8] = 0;
  (*(code *)**(undefined4 **)PTR_DAT_00697f04)();
  FUN_00022cf8();
  iVar9 = 1;
  puRam00000001 =
       PTR_k3c_internal_pkg_motion_vibration___InputShaper__Cmd_SET_INPUT_SHAPER_fm_00697f08;
  if (*(int *)PTR_DAT_00697edc != 0) {
    iVar9 = FUN_0009db54();
    *unaff_r8 = puVar4;
  }
  *(undefined4 **)(iVar9 + 4) = puVar4;
  puVar1 = PTR_DAT_00697f10;
  puVar3 = PTR_DAT_00697f0c;
  puStack_40 = (undefined4 *)((uint)puStack_40 & 0xffffff00);
  k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
  FUN_00022cf8();
  *(undefined **)puVar3 = PTR_k3c_internal_pkg_motion_vibration_NewInputShaper_func1_00697f18;
  if (*(int *)PTR_DAT_00697edc != 0) {
    puVar3 = (undefined *)FUN_0009db54();
    *unaff_r8 = puVar4;
  }
  *(undefined4 **)(puVar3 + 4) = puVar4;
  FUN_00093560();
  puStack_3c._0_1_ = (char)puVar1;
  iVar9 = puStack_40[1];
  uVar2 = puStack_40[2];
  puVar7 = (undefined *)*puStack_40;
  if ((char)puStack_3c == '\0') {
    uVar2 = 0;
    iVar9 = 0;
    puVar7 = PTR_DAT_00697ef0;
  }
  uVar6 = iVar9 + 1;
  if (uVar2 < uVar6) {
    puStack_40 = (undefined4 *)PTR_DAT_00697ef4;
    FUN_000987f4();
    uVar6 = 0x29;
    uVar2 = uStack_34;
    puVar7 = puVar1;
  }
  if (*(int *)PTR_DAT_00697edc != 0) {
    FUN_0009db64();
    *unaff_r8 = puVar3;
    unaff_r8[1] = *(undefined4 *)(extraout_r2_00 + (uVar6 - 1) * 4);
    puVar7 = extraout_r2_00;
  }
  *(undefined **)(puVar7 + (uVar6 - 1) * 4) = puVar3;
  FUN_00093a08();
  puStack_40[1] = uVar6;
  puStack_40[2] = uVar2;
  if (*(int *)PTR_DAT_00697edc != 0) {
    puStack_40 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar7;
    unaff_r8[1] = *puStack_40;
  }
  *puStack_40 = puVar7;
  in_stack_00000008 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00697ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.NewInputShaper.func1 @ 00697f20 (size 116) */

void k3c_internal_pkg_motion_vibration_NewInputShaper_func1(void)

{
  int unaff_r10;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  k3c_internal_pkg_motion_vibration___InputShaper___update_input_shaping();
  k3c_internal_pkg_logger_Debugf();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*InputShaper).Get_shapers @ 00697f9c (size 32) */

void k3c_internal_pkg_motion_vibration___InputShaper__Get_shapers(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
  uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0xc);
  uStack00000010 = *(undefined4 *)(in_stack_00000004 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00697fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*InputShaper).Connect @ 00697fbc (size 884) */

void k3c_internal_pkg_motion_vibration___InputShaper__Connect(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int extraout_r1;
  uint uVar6;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int iVar7;
  uint uVar8;
  uint extraout_r2;
  uint extraout_r2_00;
  int extraout_r3;
  int extraout_r3_00;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  bool bVar10;
  undefined8 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x48) = unaff_lr;
      pcVar1 = *(code **)*DAT_00698334;
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           **(undefined4 **)((int)register0x00000054 + 4);
      (*pcVar1)();
      iVar5 = *(int *)((int)register0x00000054 + -0x40);
      if (*DAT_00698338 == 0) {
        iVar2 = *(int *)((int)register0x00000054 + 4);
      }
      else {
        FUN_0009db64();
        *unaff_r8 = extraout_r1;
        iVar2 = *(int *)((int)register0x00000054 + 4);
        unaff_r8[1] = *(int *)(iVar2 + 4);
        iVar5 = extraout_r1;
      }
      *(int *)(iVar2 + 4) = iVar5;
      iVar2 = 0;
      if (*(int *)(iVar5 + 0x14c) != 0) {
        iVar2 = *(int *)(*(int *)(iVar5 + 0x14c) + 4);
      }
      bVar10 = iVar2 == 0;
      if (!bVar10) {
        *(undefined4 *)((int)register0x00000054 + -0x14) = *(undefined4 *)(iVar5 + 0x150);
        *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_0069833c;
        *(int *)((int)register0x00000054 + -0x40) = iVar2;
        FUN_00020dac();
        pcVar1 = *(code **)(*(int *)((int)register0x00000054 + -0x3c) + 0x24);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        (*pcVar1)();
        iVar5 = *(int *)((int)register0x00000054 + -0x40);
        *(int *)((int)register0x00000054 + -0x10) = iVar5;
        iVar2 = *(int *)((int)register0x00000054 + -0x3c);
        *(int *)((int)register0x00000054 + -0x20) = iVar2;
        iVar7 = 0;
        while (iVar7 < iVar2) {
          *(int *)((int)register0x00000054 + -0x18) = iVar7;
          *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)(iVar5 + iVar7 * 4);
          k3c_internal_pkg_chelper__Cfunc_input_shaper_alloc(iVar5);
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x44);
          *(undefined4 *)((int)register0x00000054 + -0xc) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_00698340;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar3;
          k3c_internal_pkg_mcu___MCU_stepper__Set_stepper_kinematics();
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x38);
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_00698340;
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0x38);
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          k3c_internal_pkg_motion_vibration___InputShaper__Connect_Input_shaper_set_sk_func1();
          if (*(int *)((int)register0x00000054 + -0x34) < 0) {
            *(undefined4 *)((int)register0x00000054 + -0x44) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x40) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x3c) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            k3c_internal_pkg_mcu___MCU_stepper__Set_stepper_kinematics();
          }
          else {
            iVar2 = *(int *)((int)register0x00000054 + 4);
            uVar6 = *(uint *)(iVar2 + 0x1c);
            uVar8 = *(int *)(iVar2 + 0x18) + 1;
            iVar5 = *(int *)(iVar2 + 0x14);
            if (uVar6 < uVar8) {
              *(int *)((int)register0x00000054 + -0x44) = iVar5;
              *(uint *)((int)register0x00000054 + -0x40) = uVar8;
              *(uint *)((int)register0x00000054 + -0x3c) = uVar6;
              *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_00698344;
              FUN_000987f4();
              iVar5 = *(int *)((int)register0x00000054 + -0x30);
              uVar8 = *(uint *)((int)register0x00000054 + -0x2c);
              iVar2 = *(int *)((int)register0x00000054 + 4);
              *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)((int)register0x00000054 + -0x28);
              if (*DAT_00698338 != 0) {
                FUN_0009db64();
                *unaff_r8 = extraout_r1_00;
                unaff_r8[1] = *(int *)(extraout_r3 + 0x14);
                iVar5 = extraout_r1_00;
                uVar8 = extraout_r2;
                iVar2 = extraout_r3;
              }
              *(int *)(iVar2 + 0x14) = iVar5;
            }
            *(uint *)(iVar2 + 0x18) = uVar8;
            *(undefined4 *)(iVar5 + (uVar8 - 1) * 8) = DAT_00698340;
            uVar11 = CONCAT44(iVar5 + (uVar8 - 1) * 8,iVar2);
            if (*DAT_00698338 == 0) {
              iVar5 = *(int *)((int)register0x00000054 + -0xc);
            }
            else {
              uVar11 = FUN_0009db64();
              iVar5 = *(int *)((int)register0x00000054 + -0xc);
              *unaff_r8 = iVar5;
              unaff_r8[1] = *(int *)((int)((ulonglong)uVar11 >> 0x20) + 4);
            }
            iVar2 = (int)uVar11;
            *(int *)((int)((ulonglong)uVar11 >> 0x20) + 4) = iVar5;
            uVar6 = *(uint *)(iVar2 + 0x28);
            uVar8 = *(int *)(iVar2 + 0x24) + 1;
            iVar5 = *(int *)(iVar2 + 0x20);
            if (uVar6 < uVar8) {
              *(int *)((int)register0x00000054 + -0x44) = iVar5;
              *(uint *)((int)register0x00000054 + -0x40) = uVar8;
              *(uint *)((int)register0x00000054 + -0x3c) = uVar6;
              *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_00698344;
              FUN_000987f4();
              iVar5 = *(int *)((int)register0x00000054 + -0x30);
              uVar8 = *(uint *)((int)register0x00000054 + -0x2c);
              iVar2 = *(int *)((int)register0x00000054 + 4);
              *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)((int)register0x00000054 + -0x28);
              if (*DAT_00698338 != 0) {
                FUN_0009db64();
                *unaff_r8 = extraout_r1_01;
                unaff_r8[1] = *(int *)(extraout_r3_00 + 0x20);
                iVar5 = extraout_r1_01;
                uVar8 = extraout_r2_00;
                iVar2 = extraout_r3_00;
              }
              *(int *)(iVar2 + 0x20) = iVar5;
            }
            *(uint *)(iVar2 + 0x24) = uVar8;
            *(undefined4 *)(iVar5 + (uVar8 - 1) * 8) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c);
            iVar5 = iVar5 + (uVar8 - 1) * 8;
            if (*DAT_00698338 == 0) {
              iVar2 = *(int *)((int)register0x00000054 + -4);
            }
            else {
              FUN_0009db64();
              iVar2 = *(int *)((int)register0x00000054 + -4);
              *unaff_r8 = iVar2;
              unaff_r8[1] = *(int *)(extraout_r1_02 + 4);
              iVar5 = extraout_r1_02;
            }
            *(int *)(iVar5 + 4) = iVar2;
          }
          iVar5 = *(int *)((int)register0x00000054 + -0x10);
          iVar2 = *(int *)((int)register0x00000054 + -0x20);
          iVar7 = *(int *)((int)register0x00000054 + -0x18) + 1;
        }
        *(undefined8 *)(*(int *)((int)register0x00000054 + 4) + 0x2c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_00698348;
        FUN_00022cf8();
        puVar4 = *(undefined4 **)((int)register0x00000054 + -0x40);
        puVar4[1] = 0x14;
        *puVar4 = DAT_0069834c;
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_00698350;
        *(undefined4 **)((int)register0x00000054 + -0x3c) = puVar4;
        k3c_internal_pkg_motion_vibration___InputShaper___update_input_shaping();
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_00698354;
      param_1 = FUN_00020b18();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x48);
      if (bVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x69832c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*InputShaper).Connect.Input_shaper_set_sk.func1 @ 00698358 (size 200) */

void k3c_internal_pkg_motion_vibration___InputShaper__Connect_Input_shaper_set_sk_func1
               (undefined4 param_1)

{
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  undefined1 uVar2;
  undefined8 uVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      uVar3 = CONCAT44(DAT_00698424,*(int *)((int)register0x00000054 + 4));
      uVar2 = 0;
      if (*(int *)((int)register0x00000054 + 4) == DAT_00698424) {
        uVar2 = *(int *)((int)register0x00000054 + 0xc) == DAT_00698424;
        if ((bool)uVar2) {
          *(int *)((int)register0x00000054 + -0x10) = DAT_00698424;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          FUN_0008ee8c();
          *(int *)((int)register0x00000054 + -0x10) = DAT_00698424;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          FUN_0008ee8c();
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          k3c_internal_pkg_chelper__Cfunc_input_shaper_set_sk();
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -8);
          return;
        }
        *(int *)((int)register0x00000054 + -0x10) = *(int *)((int)register0x00000054 + 0xc);
        *(int *)((int)register0x00000054 + -0xc) = DAT_00698424;
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_00698428;
        uVar3 = FUN_000209b4();
      }
      *(undefined8 *)((int)register0x00000054 + -0x10) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_00698428;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if ((bool)uVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    unaff_lr = 0x69841c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*InputShaper)._update_input_shaping @ 0069842c (size 1196) */

void k3c_internal_pkg_motion_vibration___InputShaper___update_input_shaping(void)

{
  int iVar1;
  int iVar2;
  undefined4 *extraout_r2;
  int extraout_r2_00;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *extraout_r3;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *unaff_r8;
  int iVar10;
  int unaff_r10;
  int iVar11;
  undefined4 unaff_lr;
  int iVar12;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 *puVar13;
  undefined4 uVar14;
  int local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  int local_48;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (&local_1c <= *(undefined4 ***)(unaff_r10 + 8)) {
    unaff_lr = 0x6988d4;
    FUN_0009bf64();
  }
  k3c_internal_pkg_toolhead___Toolhead__Flush_step_generation();
  local_14 = *(int *)(in_stack_00000004 + 8);
  iVar1 = *(int *)(in_stack_00000004 + 0xc);
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    k3c_internal_pkg_motion_vibration___AxisInputShaper__Get_step_generation_window();
    FUN_000afca0();
  }
  iVar1 = (int)*(undefined8 *)(in_stack_00000004 + 0x2c);
  uVar14 = (undefined4)((ulonglong)*(undefined8 *)(in_stack_00000004 + 0x2c) >> 0x20);
  k3c_internal_pkg_toolhead___Toolhead__Note_step_generation_scan_time();
  iVar3 = *(int *)(in_stack_00000004 + 0x14);
  iVar2 = *(int *)(in_stack_00000004 + 0x18);
  iVar4 = 0;
  puVar6 = (undefined4 *)0x0;
  iVar7 = 0;
  puVar8 = (undefined4 *)0x0;
  local_18 = iVar3;
  do {
    if (iVar2 <= iVar4) {
      if (puVar6 != (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
        FUN_000986b8();
        puVar5 = (undefined4 *)0x0;
        puVar8 = puVar6;
        for (iVar3 = 0; iVar3 < (int)puVar6; iVar3 = iVar3 + 1) {
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar13 = DAT_006988e0;
          FUN_0007636c();
          if (puVar8 < puVar5) {
            puVar13 = puVar5;
            FUN_000987f4();
            puVar8 = local_7c;
            puVar5 = local_80;
            iVar1 = local_84;
          }
          iVar2 = (int)puVar5 + -1;
          *(undefined4 **)(iVar1 + iVar2 * 8 + 4) = local_80;
          iVar7 = local_84;
          if (*DAT_006988e4 != 0) {
            iVar7 = FUN_0009db64();
            *unaff_r8 = iVar7;
            unaff_r8[1] = *(int *)(iVar1 + iVar2 * 8);
            puVar8 = extraout_r2;
            puVar5 = extraout_r3;
          }
          *(int *)(iVar1 + iVar2 * 8) = iVar7;
        }
        if (in_stack_00000008 == 0) {
          in_stack_0000000c = puVar13;
          FUN_00022cf8();
          in_stack_0000000c[1] = 0x15;
          *in_stack_0000000c = DAT_006988f4;
          in_stack_00000008 = DAT_006988f8;
        }
        uVar9 = 2;
        uVar14 = DAT_006988e8;
        local_1c = in_stack_0000000c;
        FUN_0014f8fc();
        FUN_0009df04(0,&local_10,local_80,local_84,unaff_lr,iVar1,puVar5,puVar8,uVar14,uVar9);
        FUN_0008f77c();
        local_10 = DAT_006988dc;
        local_8 = 0;
        local_c = puVar8;
        if (in_stack_00000008 != 0) {
          local_8 = *(undefined4 *)(in_stack_00000008 + 4);
        }
        do {
          local_4 = local_1c;
          FUN_001386c4();
          local_8 = FUN_00095b00();
        } while( true );
      }
      return;
    }
    unaff_r8 = *(int **)(iVar3 + iVar4 * 8);
    uVar9 = *(undefined4 *)(iVar3 + iVar4 * 8 + 4);
    iVar10 = *(int *)(in_stack_00000004 + 8);
    iVar11 = *(int *)(in_stack_00000004 + 0xc);
    local_14 = iVar10;
    for (iVar12 = 0; iVar12 < iVar11; iVar12 = iVar12 + 1) {
      iVar3 = *(int *)(iVar10 + iVar12 * 4);
      for (local_48 = 0; local_48 < (int)puVar6; local_48 = local_48 + 1) {
        if (*(int *)(iVar7 + local_48 * 4) == iVar3) goto LAB_0069878c;
      }
      k3c_internal_pkg_motion_vibration___AxisInputShaper__Set_shaper_kinematics
                (iVar3,local_48,iVar2,iVar4,unaff_lr,iVar3,unaff_r8,uVar9,iVar1,uVar14);
      iVar10 = local_14;
      if ((char)iVar1 == '\0') {
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        if (puVar8 < puVar6) {
          iVar1 = 1;
          uVar14 = DAT_006988fc;
          FUN_000987f4();
          puVar6 = local_80;
          iVar7 = local_84;
          puVar8 = local_7c;
        }
        iVar10 = (int)puVar6 + -1;
        if (*DAT_006988e4 != 0) {
          puVar6 = (undefined4 *)FUN_0009db64();
          *unaff_r8 = iVar3;
          unaff_r8[1] = *(int *)(iVar7 + extraout_r2_00 * 4);
          iVar10 = extraout_r2_00;
        }
        *(int *)(iVar7 + iVar10 * 4) = iVar3;
        iVar10 = local_14;
      }
LAB_0069878c:
      iVar3 = local_18;
    }
    iVar4 = iVar4 + 1;
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*InputShaper).Disable_shaping @ 00698900 (size 372) */

void k3c_internal_pkg_motion_vibration___InputShaper__Disable_shaping(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  int iVar5;
  int extraout_r2;
  int iVar6;
  undefined4 uVar7;
  int extraout_r3;
  int iVar8;
  undefined4 uVar9;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar10;
  int in_stack_00000004;
  undefined4 *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  iVar2 = *(int *)(in_stack_00000004 + 8);
  iVar4 = *(int *)(in_stack_00000004 + 0xc);
  iVar3 = iVar2;
  iVar5 = iVar4;
  for (iVar6 = 0; iVar6 < iVar5; iVar6 = iVar6 + 1) {
    iVar8 = *(int *)(iVar3 + iVar6 * 4);
    if ((*(int *)(iVar8 + 0x28) == 0) && (0 < *(int *)(iVar8 + 0xc))) {
      FUN_00022cf8();
      *local_18 = *(undefined4 *)(iVar8 + 0xc);
      uVar7 = *(undefined4 *)(iVar8 + 0x18);
      uVar9 = *(undefined4 *)(iVar8 + 0x10);
      local_18[2] = *(undefined4 *)(iVar8 + 0x14);
      local_18[3] = uVar7;
      puVar1 = local_18;
      if (*DAT_00698a80 != 0) {
        uVar10 = FUN_0009db54();
        iVar8 = (int)((ulonglong)uVar10 >> 0x20);
        puVar1 = (undefined4 *)uVar10;
        *unaff_r8 = uVar9;
      }
      uVar10 = CONCAT44(iVar8,puVar1);
      puVar1[1] = uVar9;
      uVar7 = *(undefined4 *)(iVar8 + 0x24);
      uVar9 = *(undefined4 *)(iVar8 + 0x1c);
      puVar1[5] = *(undefined4 *)(iVar8 + 0x20);
      puVar1[6] = uVar7;
      if (*DAT_00698a80 != 0) {
        uVar10 = FUN_0009db74();
        *unaff_r8 = uVar9;
        unaff_r8[1] = (int)uVar10;
        unaff_r8[2] = *(undefined4 *)((int)((ulonglong)uVar10 >> 0x20) + 0x28);
      }
      iVar8 = (int)((ulonglong)uVar10 >> 0x20);
      *(undefined4 *)((int)uVar10 + 0x10) = uVar9;
      *(int *)(iVar8 + 0x28) = (int)uVar10;
      iVar3 = iVar2;
      iVar5 = iVar4;
    }
    *(undefined4 *)(iVar8 + 0xc) = 0;
    *(undefined4 *)(iVar8 + 0x14) = 0;
    *(undefined4 *)(iVar8 + 0x18) = 0;
    if (*DAT_00698a80 != 0) {
      uVar7 = *(undefined4 *)(iVar8 + 0x10);
      FUN_0009db64();
      *unaff_r8 = uVar7;
      unaff_r8[1] = *(undefined4 *)(iVar8 + 0x1c);
      iVar3 = extraout_r1;
      iVar5 = extraout_r2;
      iVar6 = extraout_r3;
    }
    uVar7 = DAT_00698a78;
    *(undefined4 *)(iVar8 + 0x10) = DAT_00698a78;
    *(undefined4 *)(iVar8 + 0x20) = 0;
    *(undefined4 *)(iVar8 + 0x24) = 0;
    *(undefined4 *)(iVar8 + 0x1c) = uVar7;
  }
  k3c_internal_pkg_motion_vibration___InputShaper___update_input_shaping();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*InputShaper).Enable_shaping @ 00698a84 (size 260) */

void k3c_internal_pkg_motion_vibration___InputShaper__Enable_shaping(void)

{
  int iVar1;
  int extraout_r1;
  int extraout_r1_00;
  int iVar2;
  int extraout_r2;
  int extraout_r2_00;
  int iVar3;
  int extraout_r3;
  int extraout_r3_00;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  iVar1 = *(int *)(in_stack_00000004 + 8);
  iVar2 = *(int *)(in_stack_00000004 + 0xc);
  for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
    iVar4 = *(int *)(iVar1 + iVar3 * 4);
    if (*(undefined4 **)(iVar4 + 0x28) != (undefined4 *)0x0) {
      *(undefined4 *)(iVar4 + 0xc) = **(undefined4 **)(iVar4 + 0x28);
      iVar5 = *(int *)(iVar4 + 0x28);
      uVar7 = *(undefined4 *)(iVar5 + 0xc);
      uVar6 = *(undefined4 *)(iVar5 + 4);
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar5 + 8);
      *(undefined4 *)(iVar4 + 0x18) = uVar7;
      if (*DAT_00698b8c != 0) {
        FUN_0009db64();
        *unaff_r8 = uVar6;
        unaff_r8[1] = *(undefined4 *)(iVar4 + 0x10);
        iVar1 = extraout_r1;
        iVar2 = extraout_r2;
        iVar3 = extraout_r3;
      }
      *(undefined4 *)(iVar4 + 0x10) = uVar6;
      iVar5 = *(int *)(iVar4 + 0x28);
      uVar7 = *(undefined4 *)(iVar5 + 0x18);
      uVar6 = *(undefined4 *)(iVar5 + 0x10);
      *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar5 + 0x14);
      *(undefined4 *)(iVar4 + 0x24) = uVar7;
      if (*DAT_00698b8c != 0) {
        FUN_0009db74();
        *unaff_r8 = uVar6;
        unaff_r8[1] = *(undefined4 *)(iVar4 + 0x1c);
        unaff_r8[2] = *(undefined4 *)(iVar4 + 0x28);
        iVar1 = extraout_r1_00;
        iVar2 = extraout_r2_00;
        iVar3 = extraout_r3_00;
      }
      *(undefined4 *)(iVar4 + 0x1c) = uVar6;
      *(undefined4 *)(iVar4 + 0x28) = 0;
    }
  }
  k3c_internal_pkg_motion_vibration___InputShaper___update_input_shaping();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*InputShaper).Cmd_SET_INPUT_SHAPER @ 00698b90 (size 256) */

void k3c_internal_pkg_motion_vibration___InputShaper__Cmd_SET_INPUT_SHAPER(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined1 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  iVar1 = *(int *)(in_stack_00000004 + 0xc);
  bVar3 = 0;
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    k3c_internal_pkg_motion_vibration___AxisInputShaper__Update();
    bVar3 = local_14 | bVar3;
  }
  if (bVar3 != 0) {
    k3c_internal_pkg_motion_vibration___InputShaper___update_input_shaping();
  }
  iVar1 = *(int *)(in_stack_00000004 + 0xc);
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    k3c_internal_pkg_motion_vibration___AxisInputShaper__Report();
  }
  return;
}



/* k3c/internal/pkg/motion/vibration.Load_config_InputShaper @ 00698c90 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_vibration_Load_config_InputShaper(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x698cc8;
    FUN_0009bf64();
  }
  k3c_internal_pkg_motion_vibration_NewInputShaper();
  in_stack_00000008 = _UNK_00698cd0;
                    /* WARNING: Could not recover jumptable at 0x00698cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.NewLIS2DW12 @ 00698cd4 (size 4392) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_vibration_NewLIS2DW12(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int *extraout_r1;
  undefined *puVar7;
  uint uVar8;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined4 *extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int *extraout_r1_07;
  int *extraout_r1_08;
  undefined4 *puVar9;
  int extraout_r1_09;
  int extraout_r1_10;
  undefined *extraout_r1_11;
  undefined *extraout_r1_12;
  undefined *extraout_r1_13;
  undefined *extraout_r1_14;
  undefined *extraout_r1_15;
  undefined *extraout_r1_16;
  int *piVar10;
  int *extraout_r2;
  int extraout_r2_00;
  uint uVar11;
  uint extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  uint extraout_r2_04;
  uint extraout_r2_05;
  uint extraout_r2_06;
  undefined4 *extraout_r2_07;
  uint extraout_r2_08;
  undefined *extraout_r2_09;
  undefined *puVar12;
  undefined *extraout_r2_10;
  undefined *extraout_r2_11;
  undefined *extraout_r2_12;
  undefined *extraout_r2_13;
  undefined *extraout_r2_14;
  int iVar13;
  int extraout_r3;
  undefined4 uVar14;
  int extraout_r3_00;
  undefined4 extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  int extraout_r3_04;
  int extraout_r3_05;
  int extraout_r3_06;
  int iVar15;
  int iVar16;
  int iVar17;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar18;
  undefined4 unaff_lr;
  undefined1 uVar19;
  undefined8 uVar20;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0xe4)) {
      puVar18 = (undefined1 *)((int)register0x00000054 + -0x164);
      *(undefined4 *)((int)register0x00000054 + -0x164) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699558;
      FUN_00022cf8();
      piVar6 = *(int **)((int)register0x00000054 + -0x15c);
      piVar10 = *(int **)((int)register0x00000054 + 4);
      iVar13 = *piVar10;
      if (*(int *)PTR_DAT_0069955c != 0) {
        FUN_0009db54();
        *unaff_r8 = extraout_r3;
        piVar6 = extraout_r1;
        piVar10 = extraout_r2;
        iVar13 = extraout_r3;
      }
      *(int **)((int)register0x00000054 + -0xfc) = piVar6;
      *piVar6 = iVar13;
      *(int **)((int)register0x00000054 + -0x160) = piVar10;
      *(undefined **)((int)register0x00000054 + -0x15c) = PTR_DAT_00699560;
      *(int **)((int)register0x00000054 + -0x158) = piVar6;
      k3c_internal_pkg_motion_vibration_NewAccelCommandHelper();
      *(undefined4 *)(*(int *)((int)register0x00000054 + -0xfc) + 4) = 0;
      uVar1 = FUN_0009def8(0,(undefined1 *)((int)register0x00000054 + -0x3c));
      FUN_0009de68(uVar1,(undefined1 *)((int)register0x00000054 + -0xe8));
      *(undefined1 **)((int)register0x00000054 + -0x30) =
           (undefined1 *)((int)register0x00000054 + -0xe8);
      FUN_0006aa3c();
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + -0x160);
      uVar1 = *(undefined4 *)PTR_DAT_00699564;
      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699568;
      *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
      *(undefined **)((int)register0x00000054 + -0x158) =
           PTR_s_SCALE_XYsequencebuffered_s__s__s_008216f7_0x14dd_0069956c;
      *(undefined4 *)((int)register0x00000054 + -0x154) = 8;
      FUN_00025f60();
      puVar7 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x150);
      uVar19 = 0;
      puVar12 = PTR_DAT_00699570;
      if (puVar7 == PTR_DAT_00699570) {
        *(undefined8 *)((int)register0x00000054 + -0x114) =
             *(undefined8 *)(*(undefined4 **)((int)register0x00000054 + -0x150))[1];
        *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699574;
        FUN_00022cf8();
        *(int *)((int)register0x00000054 + -4) = *(int *)((int)register0x00000054 + -0x15c);
        *(undefined8 *)(*(int *)((int)register0x00000054 + -0x15c) + 8) =
             *(undefined8 *)((int)register0x00000054 + -0x114);
        *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699578;
        *(undefined1 **)((int)register0x00000054 + -0x15c) =
             (undefined1 *)((int)register0x00000054 + -0x3c);
        *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_0069957c;
        *(undefined4 *)((int)register0x00000054 + -0x154) = 1;
        FUN_00093a08();
        piVar6 = *(int **)((int)register0x00000054 + -0x150);
        piVar6[1] = 2;
        piVar6[2] = 2;
        if (*(int *)PTR_DAT_0069955c == 0) {
          iVar13 = *(int *)((int)register0x00000054 + -4);
        }
        else {
          piVar6 = (int *)FUN_0009db64();
          iVar13 = *(int *)((int)register0x00000054 + -4);
          *unaff_r8 = iVar13;
          unaff_r8[1] = *piVar6;
        }
        *piVar6 = iVar13;
        uVar1 = *(undefined4 *)PTR_DAT_00699564;
        *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699568;
        *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
        *(undefined **)((int)register0x00000054 + -0x158) =
             PTR_s_SCALE_XYsequencebuffered_s__s__s_008216f7_0x14dd_0069956c;
        *(undefined4 *)((int)register0x00000054 + -0x154) = 8;
        FUN_00025f60();
        puVar7 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x150);
        uVar19 = 0;
        puVar12 = PTR_DAT_00699570;
        if (puVar7 == PTR_DAT_00699570) {
          *(undefined8 *)((int)register0x00000054 + -0x114) =
               *(undefined8 *)(*(undefined4 **)((int)register0x00000054 + -0x150))[1];
          *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699574;
          FUN_00022cf8();
          puVar2 = *(undefined8 **)((int)register0x00000054 + -0x15c);
          *(undefined8 **)((int)register0x00000054 + -4) = puVar2;
          *puVar2 = 0x3ff0000000000000;
          puVar2[1] = *(undefined8 *)((int)register0x00000054 + -0x114);
          *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699578;
          *(undefined1 **)((int)register0x00000054 + -0x15c) =
               (undefined1 *)((int)register0x00000054 + -0x3c);
          *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_00699580;
          *(undefined4 *)((int)register0x00000054 + -0x154) = 1;
          FUN_00093a08();
          piVar6 = *(int **)((int)register0x00000054 + -0x150);
          piVar6[1] = 2;
          piVar6[2] = 2;
          if (*(int *)PTR_DAT_0069955c == 0) {
            iVar13 = *(int *)((int)register0x00000054 + -4);
          }
          else {
            piVar6 = (int *)FUN_0009db64();
            iVar13 = *(int *)((int)register0x00000054 + -4);
            *unaff_r8 = iVar13;
            unaff_r8[1] = *piVar6;
          }
          *piVar6 = iVar13;
          uVar1 = *(undefined4 *)PTR_DAT_00699564;
          *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699568;
          *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
          *(undefined **)((int)register0x00000054 + -0x158) =
               PTR_s_SCALE_Zshaper_bicubicx_county_co_008216f7_0x8ef_00699584;
          *(undefined4 *)((int)register0x00000054 + -0x154) = 7;
          FUN_00025f60();
          puVar7 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x150);
          uVar19 = 0;
          puVar12 = PTR_DAT_00699570;
          if (puVar7 == PTR_DAT_00699570) {
            *(undefined8 *)((int)register0x00000054 + -0x114) =
                 *(undefined8 *)(*(undefined4 **)((int)register0x00000054 + -0x150))[1];
            *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699574;
            FUN_00022cf8();
            puVar2 = *(undefined8 **)((int)register0x00000054 + -0x15c);
            *(undefined8 **)((int)register0x00000054 + -4) = puVar2;
            *puVar2 = 0x4000000000000000;
            puVar2[1] = *(undefined8 *)((int)register0x00000054 + -0x114);
            *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699578;
            *(undefined1 **)((int)register0x00000054 + -0x15c) =
                 (undefined1 *)((int)register0x00000054 + -0x3c);
            *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_00699588;
            *(undefined4 *)((int)register0x00000054 + -0x154) = 1;
            FUN_00093a08();
            piVar6 = *(int **)((int)register0x00000054 + -0x150);
            piVar6[1] = 2;
            piVar6[2] = 2;
            if (*(int *)PTR_DAT_0069955c == 0) {
              iVar13 = *(int *)((int)register0x00000054 + -4);
            }
            else {
              piVar6 = (int *)FUN_0009db64();
              iVar13 = *(int *)((int)register0x00000054 + -4);
              *unaff_r8 = iVar13;
              unaff_r8[1] = *piVar6;
            }
            *piVar6 = iVar13;
            uVar1 = *(undefined4 *)PTR_DAT_00699564;
            *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699568;
            *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
            *(undefined **)((int)register0x00000054 + -0x158) =
                 PTR_s_SCALE_XYsequencebuffered_s__s__s_008216f7_0x14dd_0069956c;
            *(undefined4 *)((int)register0x00000054 + -0x154) = 8;
            FUN_00025f60();
            puVar7 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x150);
            uVar19 = 0;
            puVar12 = PTR_DAT_00699570;
            if (puVar7 == PTR_DAT_00699570) {
              *(undefined8 *)((int)register0x00000054 + -0x114) =
                   *(undefined8 *)(*(undefined4 **)((int)register0x00000054 + -0x150))[1];
              *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699574;
              FUN_00022cf8();
              *(int *)((int)register0x00000054 + -4) = *(int *)((int)register0x00000054 + -0x15c);
              *(double *)(*(int *)((int)register0x00000054 + -0x15c) + 8) =
                   -*(double *)((int)register0x00000054 + -0x114);
              *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699578;
              *(undefined1 **)((int)register0x00000054 + -0x15c) =
                   (undefined1 *)((int)register0x00000054 + -0x3c);
              *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_0069958c;
              *(undefined4 *)((int)register0x00000054 + -0x154) = 2;
              FUN_00093a08();
              piVar6 = *(int **)((int)register0x00000054 + -0x150);
              piVar6[1] = 2;
              piVar6[2] = 2;
              if (*(int *)PTR_DAT_0069955c == 0) {
                iVar13 = *(int *)((int)register0x00000054 + -4);
              }
              else {
                piVar6 = (int *)FUN_0009db64();
                iVar13 = *(int *)((int)register0x00000054 + -4);
                *unaff_r8 = iVar13;
                unaff_r8[1] = *piVar6;
              }
              *piVar6 = iVar13;
              uVar1 = *(undefined4 *)PTR_DAT_00699564;
              *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699568;
              *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
              *(undefined **)((int)register0x00000054 + -0x158) =
                   PTR_s_SCALE_XYsequencebuffered_s__s__s_008216f7_0x14dd_0069956c;
              *(undefined4 *)((int)register0x00000054 + -0x154) = 8;
              FUN_00025f60();
              puVar7 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x150);
              uVar19 = 0;
              puVar12 = PTR_DAT_00699570;
              if (puVar7 == PTR_DAT_00699570) {
                *(undefined8 *)((int)register0x00000054 + -0x114) =
                     *(undefined8 *)(*(undefined4 **)((int)register0x00000054 + -0x150))[1];
                *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699574;
                FUN_00022cf8();
                puVar2 = *(undefined8 **)((int)register0x00000054 + -0x15c);
                *(undefined8 **)((int)register0x00000054 + -4) = puVar2;
                *puVar2 = 0x3ff0000000000000;
                puVar2[1] = -*(double *)((int)register0x00000054 + -0x114);
                *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699578;
                *(undefined1 **)((int)register0x00000054 + -0x15c) =
                     (undefined1 *)((int)register0x00000054 + -0x3c);
                *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_008204a8_2_00699590;
                *(undefined4 *)((int)register0x00000054 + -0x154) = 2;
                FUN_00093a08();
                piVar6 = *(int **)((int)register0x00000054 + -0x150);
                piVar6[1] = 2;
                piVar6[2] = 2;
                if (*(int *)PTR_DAT_0069955c == 0) {
                  iVar13 = *(int *)((int)register0x00000054 + -4);
                }
                else {
                  piVar6 = (int *)FUN_0009db64();
                  iVar13 = *(int *)((int)register0x00000054 + -4);
                  *unaff_r8 = iVar13;
                  unaff_r8[1] = *piVar6;
                }
                *piVar6 = iVar13;
                uVar1 = *(undefined4 *)PTR_DAT_00699564;
                *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699568;
                *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
                *(undefined **)((int)register0x00000054 + -0x158) =
                     PTR_s_SCALE_Zshaper_bicubicx_county_co_008216f7_0x8ef_00699584;
                *(undefined4 *)((int)register0x00000054 + -0x154) = 7;
                FUN_00025f60();
                puVar7 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x150);
                uVar19 = 0;
                puVar12 = PTR_DAT_00699570;
                if (puVar7 == PTR_DAT_00699570) {
                  *(undefined8 *)((int)register0x00000054 + -0x114) =
                       *(undefined8 *)(*(undefined4 **)((int)register0x00000054 + -0x150))[1];
                  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699574;
                  FUN_00022cf8();
                  puVar2 = *(undefined8 **)((int)register0x00000054 + -0x15c);
                  *(undefined8 **)((int)register0x00000054 + -4) = puVar2;
                  *puVar2 = 0x4000000000000000;
                  puVar2[1] = -*(double *)((int)register0x00000054 + -0x114);
                  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699578;
                  *(undefined1 **)((int)register0x00000054 + -0x15c) =
                       (undefined1 *)((int)register0x00000054 + -0x3c);
                  *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_00699594;
                  *(undefined4 *)((int)register0x00000054 + -0x154) = 2;
                  FUN_00093a08();
                  piVar6 = *(int **)((int)register0x00000054 + -0x150);
                  piVar6[1] = 2;
                  piVar6[2] = 2;
                  if (*(int *)PTR_DAT_0069955c == 0) {
                    iVar13 = *(int *)((int)register0x00000054 + -4);
                  }
                  else {
                    piVar6 = (int *)FUN_0009db64();
                    iVar13 = *(int *)((int)register0x00000054 + -4);
                    *unaff_r8 = iVar13;
                    unaff_r8[1] = *piVar6;
                  }
                  *piVar6 = iVar13;
                  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699598;
                  FUN_00022cf8();
                  puVar7 = PTR_DAT_0069959c;
                  puVar3 = *(undefined4 **)((int)register0x00000054 + -0x15c);
                  *puVar3 = PTR_DAT_0069959c;
                  puVar3[1] = PTR_DAT_006995a0;
                  puVar3[2] = puVar7;
                  puVar3[3] = PTR_DAT_006995a4;
                  puVar3[4] = puVar7;
                  puVar3[5] = PTR_DAT_006995a8;
                  *(undefined4 **)((int)register0x00000054 + -0x160) = puVar3;
                  *(undefined4 *)((int)register0x00000054 + -0x15c) = 3;
                  *(undefined4 *)((int)register0x00000054 + -0x158) = 3;
                  FUN_0008f820();
                  uVar1 = *(undefined4 *)((int)register0x00000054 + -0x154);
                  *(undefined4 *)((int)register0x00000054 + -0x160) =
                       *(undefined4 *)((int)register0x00000054 + 4);
                  *(undefined **)((int)register0x00000054 + -0x15c) =
                       PTR_s_axes_mapDISTANCEVELOCITYCARRIAGE_008216f7_0x14ad_006995ac;
                  *(undefined4 *)((int)register0x00000054 + -0x158) = 8;
                  *(undefined **)((int)register0x00000054 + -0x154) = PTR_DAT_006995b0;
                  *(undefined4 *)((int)register0x00000054 + -0x150) = uVar1;
                  *(undefined **)((int)register0x00000054 + -0x14c) = PTR_DAT_006995b4;
                  *(undefined4 *)((int)register0x00000054 + -0x148) = 1;
                  *(undefined4 *)((int)register0x00000054 + -0x144) = 3;
                  *(undefined1 *)((int)register0x00000054 + -0x140) = 1;
                  k3c_internal_pkg_printer___ConfigWrapper__Getlist();
                  *(undefined4 *)((int)register0x00000054 + -0xec) =
                       *(undefined4 *)((int)register0x00000054 + -0x13c);
                  *(undefined4 *)((int)register0x00000054 + -0x11c) =
                       *(undefined4 *)((int)register0x00000054 + -0x138);
                  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_006995b8;
                  *(undefined4 *)((int)register0x00000054 + -0x15c) = 3;
                  *(undefined4 *)((int)register0x00000054 + -0x158) = 3;
                  FUN_000986b8();
                  iVar4 = *(int *)((int)register0x00000054 + -0x154);
                  iVar13 = *(int *)((int)register0x00000054 + -0xfc);
                  *(undefined4 *)(iVar13 + 0xc) = 3;
                  *(undefined4 *)(iVar13 + 0x10) = 3;
                  if (*(int *)PTR_DAT_0069955c != 0) {
                    iVar4 = FUN_0009db64();
                    *unaff_r8 = iVar4;
                    unaff_r8[1] = *(int *)(extraout_r2_00 + 8);
                    iVar13 = extraout_r2_00;
                  }
                  *(int *)(iVar13 + 8) = iVar4;
                  iVar13 = 0;
                  while (iVar13 < *(int *)((int)register0x00000054 + -0x11c)) {
                    *(int *)((int)register0x00000054 + -0x128) = iVar13;
                    uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xec) + iVar13 * 8);
                    *(undefined4 *)((int)register0x00000054 + -0x100) = uVar1;
                    uVar14 = *(undefined4 *)
                              (*(int *)((int)register0x00000054 + -0xec) + iVar13 * 8 + 4);
                    *(undefined4 *)((int)register0x00000054 + -300) = uVar14;
                    *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699578;
                    *(undefined1 **)((int)register0x00000054 + -0x15c) =
                         (undefined1 *)((int)register0x00000054 + -0x3c);
                    *(undefined4 *)((int)register0x00000054 + -0x158) = uVar1;
                    *(undefined4 *)((int)register0x00000054 + -0x154) = uVar14;
                    FUN_00093560();
                    uVar19 = 1;
                    if (*(char *)((int)register0x00000054 + -0x14c) == '\0') goto LAB_00699dc8;
                    *(undefined4 *)((int)register0x00000054 + -0x160) =
                         *(undefined4 *)((int)register0x00000054 + -0x100);
                    *(undefined4 *)((int)register0x00000054 + -0x15c) =
                         *(undefined4 *)((int)register0x00000054 + -300);
                    FUN_00151ce4();
                    *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699578;
                    *(undefined1 **)((int)register0x00000054 + -0x15c) =
                         (undefined1 *)((int)register0x00000054 + -0x3c);
                    FUN_00025f60();
                    uVar8 = *(uint *)(*(int *)((int)register0x00000054 + -0xfc) + 0xc);
                    uVar11 = *(uint *)((int)register0x00000054 + -0x128);
                    uVar19 = uVar11 == uVar8;
                    if (uVar8 <= uVar11) goto LAB_00699dc0;
                    iVar13 = uVar11 * 3;
                    iVar4 = *(int *)(*(int *)((int)register0x00000054 + -0xfc) + 8);
                    iVar15 = iVar4 + uVar11 * 0xc;
                    piVar6 = *(int **)((int)register0x00000054 + -0x150);
                    iVar17 = piVar6[2];
                    iVar16 = *piVar6;
                    *(int *)(iVar15 + 4) = piVar6[1];
                    *(int *)(iVar15 + 8) = iVar17;
                    if (*(int *)PTR_DAT_0069955c != 0) {
                      FUN_0009db64();
                      *unaff_r8 = iVar16;
                      unaff_r8[1] = *(int *)(extraout_r3_00 + extraout_r1_00 * 4);
                      iVar13 = extraout_r1_00;
                      uVar11 = extraout_r2_01;
                      iVar4 = extraout_r3_00;
                    }
                    *(int *)(iVar4 + iVar13 * 4) = iVar16;
                    iVar13 = uVar11 + 1;
                  }
                  *(undefined4 *)((int)register0x00000054 + -0x160) =
                       *(undefined4 *)((int)register0x00000054 + 4);
                  *(undefined **)((int)register0x00000054 + -0x15c) =
                       PTR_s_ratefifo__3f__6fAXIS_csv__1f_____00820821_0x2bd_006995bc;
                  *(undefined4 *)((int)register0x00000054 + -0x158) = 4;
                  *(undefined **)((int)register0x00000054 + -0x154) = PTR_DAT_006995c0;
                  *(undefined **)((int)register0x00000054 + -0x150) = PTR_DAT_006995c4;
                  *(undefined4 *)((int)register0x00000054 + -0x14c) = 0;
                  *(undefined4 *)((int)register0x00000054 + -0x148) = 0;
                  *(undefined1 *)((int)register0x00000054 + -0x144) = 1;
                  k3c_internal_pkg_printer___ConfigWrapper__Getint();
                  uVar1 = *(undefined4 *)((int)register0x00000054 + -0x140);
                  *(undefined4 *)(*(int *)((int)register0x00000054 + -0xfc) + 0x14) = uVar1;
                  uVar14 = *(undefined4 *)PTR_DAT_006995c8;
                  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_006995cc;
                  *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar14;
                  *(undefined4 *)((int)register0x00000054 + -0x158) = uVar1;
                  FUN_0009275c();
                  uVar19 = *(char *)((int)register0x00000054 + -0x150) == '\0';
                  if (!(bool)uVar19) {
                    iVar13 = *(int *)((int)register0x00000054 + -0xfc);
                    *(undefined4 *)(iVar13 + 0x18) = 0;
                    *(undefined4 *)(iVar13 + 0x1c) = 0;
                    *(undefined4 *)(iVar13 + 0x24) = 0;
                    *(undefined4 *)(iVar13 + 0x28) = 0;
                    if (*(int *)PTR_DAT_0069955c != 0) {
                      iVar13 = *(int *)(iVar13 + 0x20);
                      FUN_0009db54();
                      *unaff_r8 = iVar13;
                      iVar13 = extraout_r1_01;
                    }
                    *(undefined **)(iVar13 + 0x20) = PTR_DAT_006995d0;
                    pcVar5 = (code *)**(undefined4 **)PTR_DAT_006995d4;
                    *(undefined4 *)((int)register0x00000054 + -0x160) =
                         *(undefined4 *)((int)register0x00000054 + 4);
                    *(undefined4 *)((int)register0x00000054 + -0x15c) = 3;
                    *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_006995d8;
                    *(undefined4 *)((int)register0x00000054 + -0x154) = 6;
                    *(undefined4 *)((int)register0x00000054 + -0x150) = _UNK_006995dc;
                    *(undefined4 *)((int)register0x00000054 + -0x14c) = 0;
                    *(undefined4 *)((int)register0x00000054 + -0x148) = 0;
                    *(undefined1 *)((int)register0x00000054 + -0x144) = 0;
                    (*pcVar5)();
                    puVar3 = *(undefined4 **)((int)register0x00000054 + -0x140);
                    iVar13 = *(int *)((int)register0x00000054 + -0x13c);
                    uVar1 = *(undefined4 *)((int)register0x00000054 + -0x138);
                    if (*(int *)PTR_DAT_0069955c == 0) {
                      iVar4 = *(int *)((int)register0x00000054 + -0xfc);
                    }
                    else {
                      FUN_0009db64();
                      *unaff_r8 = (int)extraout_r1_02;
                      iVar4 = *(int *)((int)register0x00000054 + -0xfc);
                      unaff_r8[1] = *(int *)(iVar4 + 0x2c);
                      puVar3 = extraout_r1_02;
                      iVar13 = extraout_r2_02;
                      uVar1 = extraout_r3_01;
                    }
                    *(undefined4 **)(iVar4 + 0x2c) = puVar3;
                    if (iVar13 == 0) {
                      uVar20 = CONCAT44(*puVar3,iVar4);
                      if (*(int *)PTR_DAT_00699e84 != 0) {
                        uVar20 = FUN_0009db64();
                        *unaff_r8 = (int)((ulonglong)uVar20 >> 0x20);
                        unaff_r8[1] = *(int *)((int)uVar20 + 0x30);
                      }
                      uVar1 = (undefined4)((ulonglong)uVar20 >> 0x20);
                      *(undefined4 *)((int)register0x00000054 + -0x108) = uVar1;
                      *(undefined4 *)((int)uVar20 + 0x30) = uVar1;
                      *(undefined4 *)((int)register0x00000054 + -0x160) = uVar1;
                      *(undefined **)((int)register0x00000054 + -0x15c) = PTR_DAT_00699e88;
                      *(int *)((int)register0x00000054 + -0x158) = (int)uVar20;
                      k3c_internal_pkg_mcu___MCU__Create_oid_obj();
                      uVar1 = *(undefined4 *)((int)register0x00000054 + -0x154);
                      iVar13 = *(int *)((int)register0x00000054 + -0xfc);
                      uVar20 = CONCAT44(iVar13,uVar1);
                      *(undefined4 *)(iVar13 + 0x34) = uVar1;
                      if (*(int *)PTR_DAT_00699e84 != 0) {
                        uVar20 = FUN_0009db74(uVar1,iVar13,*(undefined4 *)(iVar13 + 0x38));
                        iVar13 = (int)((ulonglong)uVar20 >> 0x20);
                        *unaff_r8 = extraout_r2_03;
                        unaff_r8[1] = *(int *)(iVar13 + 0x3c);
                        unaff_r8[2] = *(int *)(iVar13 + 0x40);
                      }
                      iVar13 = (int)((ulonglong)uVar20 >> 0x20);
                      *(int *)((int)register0x00000054 + -0x118) = (int)uVar20;
                      *(undefined4 *)(iVar13 + 0x38) = 0;
                      *(undefined4 *)(iVar13 + 0x3c) = 0;
                      *(undefined4 *)(iVar13 + 0x40) = 0;
                      *(undefined4 *)((int)register0x00000054 + -0x130) =
                           *(undefined4 *)(*(int *)(iVar13 + 0x2c) + 0xc);
                      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x20));
                      *(int *)((int)register0x00000054 + -0x160) = (int)uVar20;
                      FUN_00020ce0();
                      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00699e8c;
                      *(undefined4 *)((int)register0x00000054 + -0x1c) =
                           *(undefined4 *)((int)register0x00000054 + -0x15c);
                      *(undefined4 *)((int)register0x00000054 + -0x160) =
                           *(undefined4 *)((int)register0x00000054 + -0x130);
                      FUN_00020ce0();
                      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00699e8c;
                      *(undefined4 *)((int)register0x00000054 + -0x14) =
                           *(undefined4 *)((int)register0x00000054 + -0x15c);
                      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699e90;
                      *(undefined4 *)((int)register0x00000054 + -0x15c) = 0x21;
                      *(undefined1 **)((int)register0x00000054 + -0x158) =
                           (undefined1 *)((int)register0x00000054 + -0x20);
                      *(undefined4 *)((int)register0x00000054 + -0x154) = 2;
                      *(undefined4 *)((int)register0x00000054 + -0x150) = 2;
                      FUN_0013b72c();
                      iVar4 = *(int *)((int)register0x00000054 + -0x108);
                      uVar8 = *(uint *)(iVar4 + 0x78);
                      uVar11 = *(int *)(iVar4 + 0x74) + 1;
                      iVar15 = *(int *)((int)register0x00000054 + -0x14c);
                      uVar1 = *(undefined4 *)((int)register0x00000054 + -0x148);
                      iVar13 = *(int *)(iVar4 + 0x70);
                      if (uVar8 < uVar11) {
                        *(undefined4 *)((int)register0x00000054 + -0x120) = uVar1;
                        *(int *)((int)register0x00000054 + -0xf0) = iVar15;
                        *(int *)((int)register0x00000054 + -0x160) = iVar13;
                        *(uint *)((int)register0x00000054 + -0x15c) = uVar11;
                        *(uint *)((int)register0x00000054 + -0x158) = uVar8;
                        *(undefined4 *)((int)register0x00000054 + -0x154) = 1;
                        *(undefined **)((int)register0x00000054 + -0x150) = PTR_DAT_00699e94;
                        FUN_000987f4();
                        iVar13 = *(int *)((int)register0x00000054 + -0x14c);
                        uVar11 = *(uint *)((int)register0x00000054 + -0x148);
                        iVar4 = *(int *)((int)register0x00000054 + -0x108);
                        *(undefined4 *)(iVar4 + 0x78) =
                             *(undefined4 *)((int)register0x00000054 + -0x144);
                        if (*(int *)PTR_DAT_00699e84 != 0) {
                          FUN_0009db64();
                          *unaff_r8 = extraout_r1_03;
                          unaff_r8[1] = *(int *)(extraout_r3_02 + 0x70);
                          iVar13 = extraout_r1_03;
                          uVar11 = extraout_r2_04;
                          iVar4 = extraout_r3_02;
                        }
                        *(int *)(iVar4 + 0x70) = iVar13;
                        iVar15 = *(int *)((int)register0x00000054 + -0xf0);
                        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x120);
                      }
                      *(uint *)(iVar4 + 0x74) = uVar11;
                      iVar4 = uVar11 - 1;
                      *(undefined4 *)(iVar13 + iVar4 * 8 + 4) = uVar1;
                      if (*(int *)PTR_DAT_00699e84 != 0) {
                        iVar4 = FUN_0009db64();
                        *unaff_r8 = iVar15;
                        unaff_r8[1] = *(int *)(iVar13 + iVar4 * 8);
                      }
                      *(int *)(iVar13 + iVar4 * 8) = iVar15;
                      *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
                      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
                      *(undefined4 *)((int)register0x00000054 + -0x160) =
                           *(undefined4 *)((int)register0x00000054 + -0x118);
                      FUN_00020ce0();
                      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00699e8c;
                      *(undefined4 *)((int)register0x00000054 + -0xc) =
                           *(undefined4 *)((int)register0x00000054 + -0x15c);
                      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699e98;
                      *(undefined4 *)((int)register0x00000054 + -0x15c) = 0x2a;
                      *(undefined1 **)((int)register0x00000054 + -0x158) =
                           (undefined1 *)((int)register0x00000054 + -0x10);
                      *(undefined4 *)((int)register0x00000054 + -0x154) = 1;
                      *(undefined4 *)((int)register0x00000054 + -0x150) = 1;
                      FUN_0013b72c();
                      iVar15 = *(int *)((int)register0x00000054 + -0x108);
                      uVar8 = *(uint *)(iVar15 + 0x84);
                      uVar11 = *(int *)(iVar15 + 0x80) + 1;
                      iVar4 = *(int *)((int)register0x00000054 + -0x14c);
                      uVar1 = *(undefined4 *)((int)register0x00000054 + -0x148);
                      iVar13 = *(int *)(iVar15 + 0x7c);
                      if (uVar8 < uVar11) {
                        *(undefined4 *)((int)register0x00000054 + -0x124) = uVar1;
                        *(int *)((int)register0x00000054 + -0xf4) = iVar4;
                        *(int *)((int)register0x00000054 + -0x160) = iVar13;
                        *(uint *)((int)register0x00000054 + -0x15c) = uVar11;
                        *(uint *)((int)register0x00000054 + -0x158) = uVar8;
                        *(undefined4 *)((int)register0x00000054 + -0x154) = 1;
                        *(undefined **)((int)register0x00000054 + -0x150) = PTR_DAT_00699e94;
                        FUN_000987f4();
                        iVar13 = *(int *)((int)register0x00000054 + -0x14c);
                        uVar11 = *(uint *)((int)register0x00000054 + -0x148);
                        iVar15 = *(int *)((int)register0x00000054 + -0x108);
                        *(undefined4 *)(iVar15 + 0x84) =
                             *(undefined4 *)((int)register0x00000054 + -0x144);
                        if (*(int *)PTR_DAT_00699e84 != 0) {
                          FUN_0009db64();
                          *unaff_r8 = extraout_r1_04;
                          unaff_r8[1] = *(int *)(extraout_r3_03 + 0x7c);
                          iVar13 = extraout_r1_04;
                          uVar11 = extraout_r2_05;
                          iVar15 = extraout_r3_03;
                        }
                        *(int *)(iVar15 + 0x7c) = iVar13;
                        iVar4 = *(int *)((int)register0x00000054 + -0xf4);
                        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x124);
                      }
                      *(uint *)(iVar15 + 0x80) = uVar11;
                      iVar15 = uVar11 - 1;
                      *(undefined4 *)(iVar13 + iVar15 * 8 + 4) = uVar1;
                      if (*(int *)PTR_DAT_00699e84 != 0) {
                        FUN_0009db64();
                        *unaff_r8 = extraout_r3_04;
                        unaff_r8[1] = *(int *)(iVar13 + extraout_r1_05 * 8);
                        iVar15 = extraout_r1_05;
                        iVar4 = extraout_r3_04;
                      }
                      *(int *)(iVar13 + iVar15 * 8) = iVar4;
                      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699e9c;
                      FUN_00022cf8();
                      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x15c);
                      *puVar3 = 
                      PTR_k3c_internal_pkg_motion_vibration___LIS2DW12__Build_config_fm_00699ea0;
                      if (*(int *)PTR_DAT_00699e84 == 0) {
                        iVar13 = *(int *)((int)register0x00000054 + -0xfc);
                      }
                      else {
                        puVar3 = (undefined4 *)FUN_0009db54();
                        iVar13 = *(int *)((int)register0x00000054 + -0xfc);
                        *unaff_r8 = iVar13;
                      }
                      puVar3[1] = iVar13;
                      iVar15 = *(int *)((int)register0x00000054 + -0x108);
                      uVar8 = *(uint *)(iVar15 + 0x6c);
                      uVar11 = *(int *)(iVar15 + 0x68) + 1;
                      iVar4 = *(int *)(iVar15 + 100);
                      if (uVar8 < uVar11) {
                        *(undefined4 **)((int)register0x00000054 + -8) = puVar3;
                        *(int *)((int)register0x00000054 + -0x160) = iVar4;
                        *(uint *)((int)register0x00000054 + -0x15c) = uVar11;
                        *(uint *)((int)register0x00000054 + -0x158) = uVar8;
                        *(undefined4 *)((int)register0x00000054 + -0x154) = 1;
                        *(undefined **)((int)register0x00000054 + -0x150) = PTR_DAT_00699ea4;
                        FUN_000987f4();
                        iVar4 = *(int *)((int)register0x00000054 + -0x14c);
                        uVar11 = *(uint *)((int)register0x00000054 + -0x148);
                        iVar15 = *(int *)((int)register0x00000054 + -0x108);
                        *(undefined4 *)(iVar15 + 0x6c) =
                             *(undefined4 *)((int)register0x00000054 + -0x144);
                        if (*(int *)PTR_DAT_00699e84 != 0) {
                          FUN_0009db64();
                          *unaff_r8 = extraout_r1_06;
                          unaff_r8[1] = *(int *)(extraout_r3_05 + 100);
                          iVar4 = extraout_r1_06;
                          uVar11 = extraout_r2_06;
                          iVar15 = extraout_r3_05;
                        }
                        *(int *)(iVar15 + 100) = iVar4;
                        puVar3 = *(undefined4 **)((int)register0x00000054 + -8);
                        iVar13 = *(int *)((int)register0x00000054 + -0xfc);
                      }
                      *(uint *)(iVar15 + 0x68) = uVar11;
                      *(undefined **)(iVar4 + (uVar11 - 1) * 8) = PTR_DAT_00699ea8;
                      iVar4 = iVar4 + (uVar11 - 1) * 8;
                      if (*(int *)PTR_DAT_00699e84 != 0) {
                        puVar3 = (undefined4 *)FUN_0009db64(puVar3,iVar13);
                        *unaff_r8 = (int)puVar3;
                        unaff_r8[1] = *(int *)(extraout_r3_06 + 4);
                        iVar4 = extraout_r3_06;
                      }
                      *(undefined4 **)(iVar4 + 4) = puVar3;
                      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699e9c;
                      FUN_00022cf8();
                      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x15c);
                      *puVar3 = 
                      PTR_k3c_internal_pkg_motion_vibration___LIS2DW12___handle_sensor_data_fm_00699eac
                      ;
                      if (*(int *)PTR_DAT_00699e84 == 0) {
                        iVar13 = *(int *)((int)register0x00000054 + -0xfc);
                      }
                      else {
                        puVar3 = (undefined4 *)FUN_0009db54();
                        iVar13 = *(int *)((int)register0x00000054 + -0xfc);
                        *unaff_r8 = iVar13;
                      }
                      puVar3[1] = iVar13;
                      *(undefined4 *)((int)register0x00000054 + -0x10c) =
                           *(undefined4 *)((int)register0x00000054 + -0x118);
                      *(undefined4 *)((int)register0x00000054 + -0x160) =
                           *(undefined4 *)(*(int *)((int)register0x00000054 + -0x108) + 0x20);
                      *(undefined **)((int)register0x00000054 + -0x15c) = PTR_DAT_00699eb0;
                      *(undefined4 **)((int)register0x00000054 + -0x158) = puVar3;
                      *(undefined **)((int)register0x00000054 + -0x154) =
                           PTR_s_lis2dw12_datatest_freq_endINPUT__008262d0_0x13f0_00699eb4;
                      *(undefined4 *)((int)register0x00000054 + -0x150) = 0xd;
                      *(undefined **)((int)register0x00000054 + -0x14c) = PTR_DAT_00699e8c;
                      *(undefined1 **)((int)register0x00000054 + -0x148) =
                           (undefined1 *)((int)register0x00000054 + -0x10c);
                      k3c_internal_pkg_serialhdl___SerialReader__Register_response();
                      iVar13 = *(int *)((int)register0x00000054 + -0xfc);
                      *(undefined4 *)(iVar13 + 0x44) = 0;
                      *(undefined4 *)(iVar13 + 0x48) = 0;
                      *(undefined4 *)(iVar13 + 0x4c) = 0;
                      *(undefined4 *)(iVar13 + 0x50) = 0;
                      *(undefined4 *)(iVar13 + 0x54) = 0;
                      *(undefined4 *)((int)register0x00000054 + -0xf8) =
                           *(undefined4 *)(iVar13 + 0x30);
                      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699eb8;
                      FUN_00022cf8();
                      piVar6 = *(int **)((int)register0x00000054 + -0x15c);
                      if (*(int *)PTR_DAT_00699e84 == 0) {
                        iVar13 = *(int *)((int)register0x00000054 + -0xf8);
                      }
                      else {
                        FUN_0009db54();
                        iVar13 = *(int *)((int)register0x00000054 + -0xf8);
                        *unaff_r8 = iVar13;
                        piVar6 = extraout_r1_07;
                      }
                      *piVar6 = iVar13;
                      *(undefined8 *)(piVar6 + 1) = *(undefined8 *)PTR_DAT_00699ebc;
                      *(undefined8 *)(piVar6 + 3) = *(undefined8 *)PTR_DAT_00699ec0;
                      piVar6[5] = 0;
                      piVar6[6] = 0;
                      piVar6[7] = 0;
                      piVar6[8] = 0;
                      piVar6[9] = 0;
                      piVar6[10] = 0;
                      piVar6[0xb] = 0;
                      piVar6[0xc] = 0;
                      piVar6[0xd] = 0;
                      piVar6[0xe] = 0;
                      piVar6[0xf] = 0;
                      piVar6[0x10] = 0;
                      if (*(int *)PTR_DAT_00699e84 == 0) {
                        iVar13 = *(int *)((int)register0x00000054 + -0xfc);
                      }
                      else {
                        FUN_0009db64();
                        *unaff_r8 = (int)extraout_r1_08;
                        iVar13 = *(int *)((int)register0x00000054 + -0xfc);
                        unaff_r8[1] = *(int *)(iVar13 + 0x58);
                        piVar6 = extraout_r1_08;
                      }
                      *(int **)(iVar13 + 0x58) = piVar6;
                      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699e9c;
                      FUN_00022cf8();
                      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x15c);
                      *puVar3 = 
                      PTR_k3c_internal_pkg_motion_vibration___LIS2DW12___api_update_fm_00699ec4;
                      if (*(int *)PTR_DAT_00699e84 == 0) {
                        iVar13 = *(int *)((int)register0x00000054 + -0xfc);
                      }
                      else {
                        puVar3 = (undefined4 *)FUN_0009db54();
                        iVar13 = *(int *)((int)register0x00000054 + -0xfc);
                        *unaff_r8 = iVar13;
                      }
                      *(undefined4 **)((int)register0x00000054 + -8) = puVar3;
                      puVar3[1] = iVar13;
                      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699e9c;
                      FUN_00022cf8();
                      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x15c);
                      *puVar3 = 
                      PTR_k3c_internal_pkg_motion_vibration___LIS2DW12___api_startstop_fm_00699ec8;
                      if (*(int *)PTR_DAT_00699e84 == 0) {
                        puVar9 = *(undefined4 **)((int)register0x00000054 + -0xfc);
                      }
                      else {
                        puVar3 = (undefined4 *)FUN_0009db54();
                        puVar9 = *(undefined4 **)((int)register0x00000054 + -0xfc);
                        *unaff_r8 = (int)puVar9;
                      }
                      puVar3[1] = puVar9;
                      pcVar5 = (code *)**(undefined4 **)PTR_DAT_00699ecc;
                      *(undefined4 *)((int)register0x00000054 + -0x160) = *puVar9;
                      *(undefined4 *)((int)register0x00000054 + -0x15c) =
                           *(undefined4 *)((int)register0x00000054 + -8);
                      *(undefined4 **)((int)register0x00000054 + -0x158) = puVar3;
                      *(undefined8 *)((int)register0x00000054 + -0x154) =
                           *(undefined8 *)PTR_DAT_00699ed0;
                      (*pcVar5)();
                      iVar13 = *(int *)((int)register0x00000054 + -0x14c);
                      if (*(int *)PTR_DAT_00699e84 == 0) {
                        iVar4 = *(int *)((int)register0x00000054 + -0xfc);
                      }
                      else {
                        FUN_0009db64();
                        *unaff_r8 = extraout_r1_09;
                        iVar4 = *(int *)((int)register0x00000054 + -0xfc);
                        unaff_r8[1] = *(int *)(iVar4 + 0x5c);
                        iVar13 = extraout_r1_09;
                      }
                      *(int *)(iVar4 + 0x5c) = iVar13;
                      uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
                      *(undefined4 *)((int)register0x00000054 + -0x160) =
                           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
                      *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar1;
                      k3c_common_utils_str_LastName();
                      iVar13 = *(int *)((int)register0x00000054 + -0x158);
                      puVar3 = *(undefined4 **)((int)register0x00000054 + -0xfc);
                      puVar3[0x19] = *(undefined4 *)((int)register0x00000054 + -0x154);
                      if (*(int *)PTR_DAT_00699e84 != 0) {
                        FUN_0009db64();
                        *unaff_r8 = extraout_r1_10;
                        unaff_r8[1] = extraout_r2_07[0x18];
                        iVar13 = extraout_r1_10;
                        puVar3 = extraout_r2_07;
                      }
                      puVar3[0x18] = iVar13;
                      pcVar5 = (code *)**(undefined4 **)PTR_DAT_00699ed4;
                      *(undefined4 *)((int)register0x00000054 + -0x160) = *puVar3;
                      (*pcVar5)();
                      *(undefined4 *)((int)register0x00000054 + -0x104) =
                           *(undefined4 *)((int)register0x00000054 + -0x15c);
                      *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699e9c;
                      FUN_00022cf8();
                      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x15c);
                      *puVar3 = 
                      PTR_k3c_internal_pkg_motion_vibration___LIS2DW12___handle_dump_lis2dw12_fm_00699ed8
                      ;
                      if (*(int *)PTR_DAT_00699e84 == 0) {
                        iVar13 = *(int *)((int)register0x00000054 + -0xfc);
                      }
                      else {
                        puVar3 = (undefined4 *)FUN_0009db54();
                        iVar13 = *(int *)((int)register0x00000054 + -0xfc);
                        *unaff_r8 = iVar13;
                      }
                      puVar3[1] = iVar13;
                      uVar1 = *(undefined4 *)(iVar13 + 0x60);
                      uVar14 = *(undefined4 *)(iVar13 + 100);
                      *(undefined4 *)((int)register0x00000054 + -0x160) =
                           *(undefined4 *)((int)register0x00000054 + -0x104);
                      *(undefined **)((int)register0x00000054 + -0x15c) = PTR_DAT_00699edc;
                      *(undefined4 *)((int)register0x00000054 + -0x158) = 0x16;
                      *(undefined **)((int)register0x00000054 + -0x154) =
                           PTR_s_sensorerrorsmm_secOUTPUTradiusor_008216f7_0x6c_00699ee0;
                      *(undefined4 *)((int)register0x00000054 + -0x150) = 6;
                      *(undefined4 *)((int)register0x00000054 + -0x14c) = uVar1;
                      *(undefined4 *)((int)register0x00000054 + -0x148) = uVar14;
                      *(undefined4 **)((int)register0x00000054 + -0x144) = puVar3;
                      k3c_internal_pkg_web___WebHooks__Register_mux_endpoint();
                      *(undefined4 *)((int)register0x00000054 + 8) =
                           *(undefined4 *)((int)register0x00000054 + -0xfc);
                    /* WARNING: Could not recover jumptable at 0x00699d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (**(code **)((int)register0x00000054 + -0x164))();
                      return;
                    }
                    *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
                    *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
                    *(undefined4 *)((int)register0x00000054 + -0x10) = *(undefined4 *)(iVar13 + 4);
                    *(undefined4 *)((int)register0x00000054 + -0xc) = uVar1;
                    *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699ee4;
                    *(undefined4 *)((int)register0x00000054 + -0x15c) = 0x1d;
                    *(undefined1 **)((int)register0x00000054 + -0x158) =
                         (undefined1 *)((int)register0x00000054 + -0x10);
                    *(undefined4 *)((int)register0x00000054 + -0x154) = 1;
                    *(undefined4 *)((int)register0x00000054 + -0x150) = 1;
                    FUN_001386c4();
                    uVar19 = *(int *)((int)register0x00000054 + -0x14c) == 0;
                    uVar1 = 0;
                    if (!(bool)uVar19) {
                      uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x14c) + 4);
                    }
                    *(undefined4 *)((int)register0x00000054 + -0x160) = uVar1;
                    *(undefined4 *)((int)register0x00000054 + -0x15c) =
                         *(undefined4 *)((int)register0x00000054 + -0x148);
                    FUN_00095b00();
                  }
                  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699ee8;
                  FUN_00022cf8();
                  puVar3 = *(undefined4 **)((int)register0x00000054 + -0x15c);
                  puVar3[1] = 0x23;
                  *puVar3 = PTR_DAT_00699eec;
                  *(undefined4 *)((int)register0x00000054 + -0x160) =
                       *(undefined4 *)PTR_DAT_00699ef0;
                  *(undefined4 **)((int)register0x00000054 + -0x15c) = puVar3;
                  FUN_00095b00();
                  uVar11 = extraout_r2_08;
LAB_00699dc0:
                  FUN_0009dbd4(uVar11);
LAB_00699dc8:
                  *(undefined **)((int)register0x00000054 + -0x160) = PTR_DAT_00699ee8;
                  FUN_00022cf8();
                  puVar3 = *(undefined4 **)((int)register0x00000054 + -0x15c);
                  puVar3[1] = 0x23;
                  *puVar3 = PTR_DAT_00699eec;
                  *(undefined4 *)((int)register0x00000054 + -0x160) =
                       *(undefined4 *)PTR_DAT_00699ef0;
                  *(undefined4 **)((int)register0x00000054 + -0x15c) = puVar3;
                  FUN_00095b00();
                  puVar7 = extraout_r1_11;
                  puVar12 = extraout_r2_09;
                }
                *(undefined **)((int)register0x00000054 + -0x160) = puVar7;
                *(undefined **)((int)register0x00000054 + -0x15c) = puVar12;
                *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_00699ea4;
                FUN_000209b4();
                puVar7 = extraout_r1_12;
                puVar12 = extraout_r2_10;
              }
              *(undefined **)((int)register0x00000054 + -0x160) = puVar7;
              *(undefined **)((int)register0x00000054 + -0x15c) = puVar12;
              *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_00699ea4;
              FUN_000209b4();
              puVar7 = extraout_r1_13;
              puVar12 = extraout_r2_11;
            }
            *(undefined **)((int)register0x00000054 + -0x160) = puVar7;
            *(undefined **)((int)register0x00000054 + -0x15c) = puVar12;
            *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_00699ea4;
            FUN_000209b4();
            puVar7 = extraout_r1_14;
            puVar12 = extraout_r2_12;
          }
          *(undefined **)((int)register0x00000054 + -0x160) = puVar7;
          *(undefined **)((int)register0x00000054 + -0x15c) = puVar12;
          *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_00699ea4;
          FUN_000209b4();
          puVar7 = extraout_r1_15;
          puVar12 = extraout_r2_13;
        }
        *(undefined **)((int)register0x00000054 + -0x160) = puVar7;
        *(undefined **)((int)register0x00000054 + -0x15c) = puVar12;
        *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_00699ea4;
        FUN_000209b4();
        puVar7 = extraout_r1_16;
        puVar12 = extraout_r2_14;
      }
      *(undefined **)((int)register0x00000054 + -0x160) = puVar7;
      *(undefined **)((int)register0x00000054 + -0x15c) = puVar12;
      *(undefined **)((int)register0x00000054 + -0x158) = PTR_DAT_00699ea4;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x164);
      if ((bool)uVar19) {
        register0x00000054 = (BADSPACEBASE *)puVar18;
      }
    }
    unaff_lr = 0x699e80;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12).Build_config @ 00699ef4 (size 404) */

void k3c_internal_pkg_motion_vibration___LIS2DW12__Build_config(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar1;
  undefined4 extraout_r1_01;
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 local_1c;
  undefined4 local_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_mcu_NewCommandWrapper();
  if (*DAT_0069a090 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *(undefined4 *)(in_stack_00000004 + 0x38);
    local_1c = extraout_r1;
  }
  *(undefined4 *)(in_stack_00000004 + 0x38) = local_1c;
  k3c_internal_pkg_mcu___MCU__Lookup_query_command();
  uVar1 = local_c;
  if (*DAT_0069a090 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = *(undefined4 *)(in_stack_00000004 + 0x3c);
    uVar1 = extraout_r1_00;
  }
  *(undefined4 *)(in_stack_00000004 + 0x3c) = uVar1;
  k3c_internal_pkg_mcu___MCU__Lookup_query_command();
  if (*DAT_0069a090 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_01;
    unaff_r8[1] = *(undefined4 *)(in_stack_00000004 + 0x40);
    local_c = extraout_r1_01;
  }
  *(undefined4 *)(in_stack_00000004 + 0x40) = local_c;
  return;
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12).Read_reg @ 0069a09c (size 428) */

void k3c_internal_pkg_motion_vibration___LIS2DW12__Read_reg(undefined4 param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int extraout_r1;
  int *piVar5;
  int extraout_r2;
  int iVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  undefined8 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_0069a24c;
      FUN_00022cf8();
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      uVar1 = *DAT_0069a250;
      *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_0069a254;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_0069a258;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 0xc;
      FUN_00025f60();
      puVar2 = *(uint **)((int)register0x00000054 + -0x14);
      *puVar2 = *(uint *)((int)register0x00000054 + 8) |
                **(uint **)((int)register0x00000054 + -0x30);
      puVar2[1] = 0;
      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + -0x18) + 0xc);
      FUN_00020ce0();
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_0069a25c;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x38) = 2;
      FUN_0008f820();
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_0069a260;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + -0x18) + 0x24);
      *(undefined1 **)((int)register0x00000054 + -0x3c) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x38) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
      k3c_internal_pkg_mcu___CommandQueryWrapper__Send();
      uVar9 = CONCAT44(DAT_0069a264,*(int *)((int)register0x00000054 + -0x20));
      uVar8 = 0;
      if (*(int *)((int)register0x00000054 + -0x20) == DAT_0069a264) {
        *(int *)((int)register0x00000054 + -0x40) = DAT_0069a264;
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_0069a268;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 8;
        FUN_00025f60();
        iVar3 = **(int **)((int)register0x00000054 + -0x30);
        uVar8 = 0;
        iVar6 = DAT_0069a26c;
        if (iVar3 == DAT_0069a26c) {
          piVar5 = (int *)(*(int **)((int)register0x00000054 + -0x30))[1];
          uVar4 = piVar5[1];
          uVar8 = uVar4 == 1;
          if (1 < uVar4) {
            *(undefined1 *)((int)register0x00000054 + 0xc) = *(undefined1 *)(*piVar5 + 1);
            return;
          }
          FUN_0009dbd4(1);
          iVar3 = extraout_r1;
          iVar6 = extraout_r2;
        }
        *(int *)((int)register0x00000054 + -0x40) = iVar3;
        *(int *)((int)register0x00000054 + -0x3c) = iVar6;
        *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_0069a270;
        uVar9 = FUN_000209b4();
      }
      *(undefined8 *)((int)register0x00000054 + -0x40) = uVar9;
      *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_0069a270;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x69a244;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12).Set_reg @ 0069a274 (size 356) */

void k3c_internal_pkg_motion_vibration___LIS2DW12__Set_reg(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_0069a3dc;
      FUN_00022cf8();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x38);
      *puVar1 = *(undefined4 *)((int)register0x00000054 + 8);
      puVar1[1] = *(uint *)((int)register0x00000054 + 0xc) & 0xff;
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
      *(undefined4 **)((int)register0x00000054 + -0x38) = puVar1;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x30) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + 0x14);
      *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
      k3c_internal_pkg_mcu___MCU_SPI__Spi_send();
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + 8);
      k3c_internal_pkg_motion_vibration___LIS2DW12__Read_reg();
      if (*(uint *)((int)register0x00000054 + 0xc) ==
          (uint)*(byte *)((int)register0x00000054 + -0x34)) {
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
        return;
      }
      *(uint *)((int)register0x00000054 + -0x1c) = (uint)*(byte *)((int)register0x00000054 + -0x34);
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      FUN_00020ce0();
      *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_0069a3e0;
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00020ce0();
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_0069a3e0;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_0069a3e4;
      *(int *)((int)register0x00000054 + -4) =
           DAT_0069a3e8 + *(int *)((int)register0x00000054 + -0x1c) * 8;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_0069a3ec;
      *(undefined4 *)((int)register0x00000054 + -0x38) = 0x9d;
      *(undefined1 **)((int)register0x00000054 + -0x34) =
           (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x30) = 3;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 3;
      FUN_001386c4();
      bVar4 = *(int *)((int)register0x00000054 + -0x28) == 0;
      uVar2 = 0;
      if (!bVar4) {
        uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x69a3d4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12).Is_measuring @ 0069a3f0 (size 28) */

void k3c_internal_pkg_motion_vibration___LIS2DW12__Is_measuring(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = 0 < *(int *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0069a408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12)._handle_sensor_data @ 0069a40c (size 336) */

void k3c_internal_pkg_motion_vibration___LIS2DW12___handle_sensor_data(void)

{
  int extraout_r1;
  int iVar1;
  int extraout_r1_00;
  uint uVar2;
  uint extraout_r2;
  int extraout_r3;
  int extraout_r3_00;
  int iVar3;
  int iVar4;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_c;
  int local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = (undefined4 *)0x0;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  iVar4 = in_stack_00000004 + 0x18;
  FUN_000aac30();
  local_c = DAT_0069a568;
  local_4 = &local_c;
  uVar2 = *(int *)(in_stack_00000004 + 0x24) + 1;
  iVar1 = in_stack_00000004;
  iVar3 = *(int *)(in_stack_00000004 + 0x20);
  local_8 = iVar4;
  if (*(uint *)(in_stack_00000004 + 0x28) < uVar2) {
    FUN_000987f4();
    *(undefined4 *)(in_stack_00000004 + 0x28) = local_1c;
    iVar1 = in_stack_00000004;
    if (*DAT_0069a570 != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(int *)(extraout_r3 + 0x20);
      local_24 = extraout_r1;
      local_20 = extraout_r2;
      iVar1 = extraout_r3;
    }
    *(int *)(iVar1 + 0x20) = local_24;
    uVar2 = local_20;
    iVar3 = local_24;
  }
  *(uint *)(iVar1 + 0x24) = uVar2;
  iVar1 = uVar2 - 1;
  if (*DAT_0069a570 != 0) {
    FUN_0009db64();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = *(int *)(extraout_r3_00 + extraout_r1_00 * 4);
    iVar1 = extraout_r1_00;
    iVar3 = extraout_r3_00;
  }
  *(int *)(iVar3 + iVar1 * 4) = in_stack_00000008;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  (*(code *)*local_4)();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12)._handle_sensor_data.deferwrap1 @ 0069a574 (size 84) */

void k3c_internal_pkg_motion_vibration___LIS2DW12___handle_sensor_data_deferwrap1(void)

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



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12).Extract_samples @ 0069a5c8 (size 2256) */

void k3c_internal_pkg_motion_vibration___LIS2DW12__Extract_samples(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int extraout_r1;
  int iVar5;
  int iVar6;
  int extraout_r2;
  int extraout_r2_00;
  uint uVar7;
  uint extraout_r2_01;
  int extraout_r2_02;
  uint uVar8;
  uint extraout_r3;
  undefined4 uVar9;
  int extraout_r3_00;
  int extraout_r3_01;
  uint extraout_r3_02;
  int *piVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  int *unaff_r8;
  int unaff_r10;
  uint uVar15;
  undefined1 *puVar16;
  undefined4 unaff_lr;
  undefined1 uVar17;
  uint in_fpscr;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x6c)) {
      puVar16 = (undefined1 *)((int)register0x00000054 + -0xec);
      *(undefined4 *)((int)register0x00000054 + -0xec) = unaff_lr;
      iVar5 = *(int *)((int)register0x00000054 + 4);
      uVar8 = *(uint *)(iVar5 + 0xc);
      uVar17 = uVar8 == 0;
      if (!(bool)uVar17) {
        piVar10 = *(int **)(iVar5 + 8);
        uVar13 = piVar10[1];
        uVar17 = uVar13 == 0;
        if (!(bool)uVar17) {
          uVar17 = uVar13 == 1;
          if (1 < uVar13) {
            uVar19 = ((undefined8 *)*piVar10)[1];
            uVar17 = uVar8 == 1;
            if (1 < uVar8) {
              uVar13 = piVar10[4];
              uVar17 = uVar13 == 0;
              if (!(bool)uVar17) {
                uVar20 = *(undefined8 *)piVar10[3];
                uVar17 = uVar13 == 1;
                if (1 < uVar13) {
                  uVar21 = ((undefined8 *)piVar10[3])[1];
                  uVar17 = uVar8 == 2;
                  if (2 < uVar8) {
                    uVar8 = piVar10[7];
                    uVar17 = uVar8 == 0;
                    if (!(bool)uVar17) {
                      puVar11 = (undefined8 *)piVar10[6];
                      uVar22 = *puVar11;
                      uVar17 = uVar8 == 1;
                      if (1 < uVar8) {
                        *(undefined8 *)((int)register0x00000054 + -0x84) = *(undefined8 *)*piVar10;
                        *(undefined8 *)((int)register0x00000054 + -0x8c) = uVar19;
                        *(undefined8 *)((int)register0x00000054 + -0x9c) = uVar20;
                        *(undefined8 *)((int)register0x00000054 + -0xa4) = uVar21;
                        *(undefined8 *)((int)register0x00000054 + -0xb4) = uVar22;
                        uVar1 = *(undefined4 *)(iVar5 + 0x58);
                        *(undefined8 *)((int)register0x00000054 + -0xbc) = puVar11[1];
                        *(undefined4 *)((int)register0x00000054 + -0x50) =
                             *(undefined4 *)(iVar5 + 0x44);
                        *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar1;
                        k3c_internal_pkg_motion_vibration___ClockSyncRegression__Get_time_translation
                                  ();
                        *(undefined8 *)((int)register0x00000054 + -0x74) =
                             *(undefined8 *)((int)register0x00000054 + -0xe4);
                        *(undefined8 *)((int)register0x00000054 + -0x34) =
                             *(undefined8 *)((int)register0x00000054 + -0xdc);
                        *(undefined8 *)((int)register0x00000054 + -0x4c) =
                             *(undefined8 *)((int)register0x00000054 + -0xd4);
                        iVar5 = 0;
                        uVar8 = 0;
                        iVar6 = 0;
                        uVar13 = 0;
                        while( true ) {
                          *(int *)((int)register0x00000054 + -0x40) = iVar5;
                          *(int *)((int)register0x00000054 + -0x14) = iVar6;
                          *(uint *)((int)register0x00000054 + -0x68) = uVar13;
                          *(uint *)((int)register0x00000054 + -100) = uVar8;
                          uVar1 = *DAT_0069ae9c;
                          *(undefined4 *)((int)register0x00000054 + -0xe8) = DAT_0069aea0;
                          *(undefined4 *)((int)register0x00000054 + -0xe4) = uVar1;
                          *(undefined4 *)((int)register0x00000054 + -0xe0) = DAT_0069aea4;
                          *(undefined4 *)((int)register0x00000054 + -0xdc) = 0x11;
                          FUN_00025f60();
                          uVar23 = (ulonglong)**(double **)((int)register0x00000054 + -0xd8);
                          iVar3 = *(int *)((int)register0x00000054 + 0xc);
                          iVar5 = *(int *)((int)register0x00000054 + -0x40);
                          if (iVar3 * (int)uVar23 <= iVar5) break;
                          uVar13 = *(int *)((int)register0x00000054 + -0x68) + 1;
                          uVar8 = *(uint *)((int)register0x00000054 + -100);
                          if (uVar8 < uVar13) {
                            *(undefined4 *)((int)register0x00000054 + -0xe8) =
                                 *(undefined4 *)((int)register0x00000054 + -0x14);
                            *(uint *)((int)register0x00000054 + -0xe4) = uVar13;
                            *(uint *)((int)register0x00000054 + -0xe0) = uVar8;
                            *(undefined4 *)((int)register0x00000054 + -0xdc) = 1;
                            *(undefined4 *)((int)register0x00000054 + -0xd8) = DAT_0069aea8;
                            FUN_000987f4();
                            iVar6 = *(int *)((int)register0x00000054 + -0xd4);
                            uVar13 = *(uint *)((int)register0x00000054 + -0xd0);
                            uVar8 = *(uint *)((int)register0x00000054 + -0xcc);
                            iVar3 = *(int *)((int)register0x00000054 + 0xc);
                            iVar5 = *(int *)((int)register0x00000054 + -0x40);
                          }
                          else {
                            iVar6 = *(int *)((int)register0x00000054 + -0x14);
                          }
                          iVar14 = uVar13 * 0xc + -0xc;
                          *(undefined4 *)(iVar6 + iVar14 + 4) = 0;
                          *(undefined4 *)(iVar6 + iVar14 + 8) = 0;
                          if (*DAT_0069aeac != 0) {
                            iVar5 = *(int *)(iVar6 + iVar14);
                            uVar13 = FUN_0009db54(uVar13,iVar3);
                            *unaff_r8 = iVar5;
                            iVar5 = extraout_r2;
                            uVar8 = extraout_r3;
                          }
                          *(undefined4 *)(iVar6 + iVar14) = 0;
                          iVar5 = iVar5 + 1;
                        }
                        iVar5 = 0;
                        uVar1 = 0;
                        uVar9 = 0;
                        uVar12 = 0;
LAB_0069a7f4:
                        uVar23 = uVar23 & 0xffffffff;
                        *(undefined4 *)((int)register0x00000054 + -0x38) = uVar1;
                        if (iVar3 <= iVar5) {
                          *(undefined4 *)((int)register0x00000054 + -0x44) = uVar12;
                          *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar9;
                          *(undefined4 *)((int)register0x00000054 + -4) =
                               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x58);
                          uVar1 = *DAT_0069ae9c;
                          *(undefined4 *)((int)register0x00000054 + -0xe8) = DAT_0069aea0;
                          *(undefined4 *)((int)register0x00000054 + -0xe4) = uVar1;
                          *(undefined4 *)((int)register0x00000054 + -0xe0) = DAT_0069aea4;
                          *(undefined4 *)((int)register0x00000054 + -0xdc) = 0x11;
                          FUN_00025f60();
                          dVar18 = **(double **)((int)register0x00000054 + -0xd8);
                          *(undefined4 *)((int)register0x00000054 + -0xe8) =
                               *(undefined4 *)((int)register0x00000054 + -4);
                          uVar23 = (longlong)dVar18 & 0xffff0000U |
                                   (ulonglong)
                                   (uint)((int)(longlong)dVar18 *
                                          *(int *)((int)register0x00000054 + -0x6c) +
                                         *(int *)((int)register0x00000054 + -0x44)) & 0xffff;
                          uVar19 = VectorSignedToFloat((int)uVar23,(byte)(in_fpscr >> 0x16) & 3);
                          *(undefined8 *)((int)register0x00000054 + -0xe4) = uVar19;
                          k3c_internal_pkg_motion_vibration___ClockSyncRegression__Set_last_chip_clock
                                    ();
                          if (*(uint *)((int)register0x00000054 + -0x38) <=
                              *(uint *)((int)register0x00000054 + -100)) {
                            *(undefined4 *)((int)register0x00000054 + 0x14) =
                                 *(undefined4 *)((int)register0x00000054 + -0x14);
                            *(uint *)((int)register0x00000054 + 0x18) =
                                 *(uint *)((int)register0x00000054 + -0x38);
                            *(uint *)((int)register0x00000054 + 0x1c) =
                                 *(uint *)((int)register0x00000054 + -100);
                            return;
                          }
                          uVar19 = FUN_0009dc14();
                          iVar5 = extraout_r2_00;
                          iVar6 = extraout_r3_00;
                          goto LAB_0069a9e4;
                        }
                        *(int *)((int)register0x00000054 + -0x18) = iVar5;
                        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + iVar5 * 4);
                        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar1;
                        *(undefined4 *)((int)register0x00000054 + -0xe8) = DAT_0069aeb0;
                        *(undefined4 *)((int)register0x00000054 + -0xe4) = uVar1;
                        *(undefined4 *)((int)register0x00000054 + -0xe0) = DAT_0069aeb4;
                        *(undefined4 *)((int)register0x00000054 + -0xdc) = 8;
                        FUN_00025f60();
                        iVar5 = **(int **)((int)register0x00000054 + -0xd8);
                        uVar17 = 0;
                        iVar6 = DAT_0069aeb8;
                        if (iVar5 == DAT_0069aeb8) {
                          *(undefined4 *)((int)register0x00000054 + -0x1c) =
                               *(undefined4 *)(*(int **)((int)register0x00000054 + -0xd8))[1];
                          *(undefined4 *)((int)register0x00000054 + -0xe8) = DAT_0069aeb0;
                          *(undefined4 *)((int)register0x00000054 + -0xe4) =
                               *(undefined4 *)((int)register0x00000054 + -0x10);
                          *(undefined4 *)((int)register0x00000054 + -0xe0) = DAT_0069aebc;
                          *(undefined4 *)((int)register0x00000054 + -0xdc) = 4;
                          FUN_00025f60();
                          uVar4 = *(int *)((int)register0x00000054 + -0x50) -
                                  *(int *)((int)register0x00000054 + -0x1c);
                          uVar8 = **(uint **)((int)register0x00000054 + -0xd8);
                          uVar17 = 0;
                          uVar13 = DAT_0069aec0;
                          if (uVar8 == DAT_0069aec0) {
                            *(uint *)((int)register0x00000054 + -0x6c) =
                                 *(int *)((int)register0x00000054 + -0x50) -
                                 ((uVar4 & 0xffff) + (uVar4 & 0x8000) * -2);
                            puVar2 = (undefined4 *)(*(uint **)((int)register0x00000054 + -0xd8))[1];
                            uVar1 = puVar2[1];
                            *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar1;
                            *(undefined4 *)((int)register0x00000054 + -0xc) = *puVar2;
                            *(undefined4 *)((int)register0x00000054 + -0xe8) = DAT_0069aec4;
                            *(undefined4 *)((int)register0x00000054 + -0xe4) = uVar1;
                            *(undefined4 *)((int)register0x00000054 + -0xe0) = uVar1;
                            FUN_000986b8();
                            uVar19 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0xc),
                                              *(undefined4 *)((int)register0x00000054 + -0xdc));
                            iVar5 = *(int *)((int)register0x00000054 + -0x3c);
                            for (iVar6 = 0; iVar6 < iVar5; iVar6 = iVar6 + 1) {
LAB_0069a9e4:
                              *(uint *)((int)uVar19 + iVar6 * 4) =
                                   (uint)*(byte *)((int)((ulonglong)uVar19 >> 0x20) + iVar6);
                            }
                            *(int *)((int)register0x00000054 + -8) = (int)uVar19;
                            uVar19 = VectorSignedToFloat((uint)uVar23 & 0xffff0000 |
                                                         *(uint *)((int)register0x00000054 + -0x6c)
                                                         & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
                            *(undefined8 *)((int)register0x00000054 + -0x24) = uVar19;
                            uVar1 = *DAT_0069ae9c;
                            *(undefined4 *)((int)register0x00000054 + -0xe8) = DAT_0069aea0;
                            *(undefined4 *)((int)register0x00000054 + -0xe4) = uVar1;
                            *(undefined4 *)((int)register0x00000054 + -0xe0) = DAT_0069aea4;
                            *(undefined4 *)((int)register0x00000054 + -0xdc) = 0x11;
                            FUN_00025f60();
                            *(double *)((int)register0x00000054 + -0x58) =
                                 *(double *)((int)register0x00000054 + -0x24) *
                                 **(double **)((int)register0x00000054 + -0xd8) -
                                 *(double *)((int)register0x00000054 + -0x34);
                            uVar1 = 0;
                            iVar5 = *(int *)((int)register0x00000054 + -0x38);
                            do {
                              *(undefined4 *)((int)register0x00000054 + -0x44) = uVar1;
                              *(int *)((int)register0x00000054 + -0x38) = iVar5;
                              uVar1 = *DAT_0069ae9c;
                              *(undefined4 *)((int)register0x00000054 + -0xe8) = DAT_0069aea0;
                              *(undefined4 *)((int)register0x00000054 + -0xe4) = uVar1;
                              *(undefined4 *)((int)register0x00000054 + -0xe0) = DAT_0069aec8;
                              uVar13 = 0x10;
                              *(undefined4 *)((int)register0x00000054 + -0xdc) = 0x10;
                              FUN_00025f60();
                              uVar23 = (ulonglong)**(double **)((int)register0x00000054 + -0xd8);
                              uVar8 = (uint)uVar23;
                              uVar17 = 1;
                              if (uVar8 == 0) {
LAB_0069adf0:
                                FUN_000539a0();
                                uVar8 = extraout_r3_02;
                                break;
                              }
                              uVar13 = *(uint *)((int)register0x00000054 + -0x3c);
                              *(uint *)((int)register0x00000054 + -0x1c) = uVar13 ^ uVar8;
                              uVar8 = FUN_0009edd4((uVar8 ^ (int)uVar8 >> 0x1f) -
                                                   ((int)uVar8 >> 0x1f),
                                                   (uVar13 ^ (int)uVar13 >> 0x1f) -
                                                   ((int)uVar13 >> 0x1f));
                              if ((int)((uVar8 ^ *(int *)((int)register0x00000054 + -0x1c) >> 0x1f)
                                       - (*(int *)((int)register0x00000054 + -0x1c) >> 0x1f)) <=
                                  *(int *)((int)register0x00000054 + -0x44)) goto LAB_0069a7dc;
                              uVar1 = *DAT_0069ae9c;
                              *(undefined4 *)((int)register0x00000054 + -0xe8) = DAT_0069aea0;
                              *(undefined4 *)((int)register0x00000054 + -0xe4) = uVar1;
                              *(undefined4 *)((int)register0x00000054 + -0xe0) = DAT_0069aec8;
                              *(undefined4 *)((int)register0x00000054 + -0xdc) = 0x10;
                              FUN_00025f60();
                              *(int *)((int)register0x00000054 + -0x28) =
                                   (int)(longlong)**(double **)((int)register0x00000054 + -0xd8);
                              *(int *)((int)register0x00000054 + -0x2c) =
                                   *(int *)((int)register0x00000054 + -0x44) + 1;
                              uVar1 = *DAT_0069ae9c;
                              *(undefined4 *)((int)register0x00000054 + -0xe8) = DAT_0069aea0;
                              *(undefined4 *)((int)register0x00000054 + -0xe4) = uVar1;
                              *(undefined4 *)((int)register0x00000054 + -0xe0) = DAT_0069aec8;
                              *(undefined4 *)((int)register0x00000054 + -0xdc) = 0x10;
                              FUN_00025f60();
                              uVar8 = (int)(longlong)**(double **)((int)register0x00000054 + -0xd8)
                                      * *(int *)((int)register0x00000054 + -0x2c);
                              iVar5 = *(int *)((int)register0x00000054 + -0x28);
                              iVar6 = *(int *)((int)register0x00000054 + -0x44);
                              uVar13 = iVar5 * iVar6;
                              uVar4 = *(uint *)((int)register0x00000054 + -0x3c);
                              uVar17 = uVar4 == uVar8;
                              if (uVar4 < uVar8) {
LAB_0069ade4:
                                FUN_0009dc14(uVar8,uVar8,uVar4);
                                goto LAB_0069adf0;
                              }
                              uVar17 = uVar8 - uVar13 == 0;
                              if (uVar8 < uVar13) {
LAB_0069add8:
                                uVar8 = FUN_0009dc34(uVar13,uVar8);
                                goto LAB_0069ade4;
                              }
                              uVar8 = uVar8 - iVar5 * iVar6;
                              uVar7 = (int)-(uVar4 - iVar5 * iVar6) >> 0x1f & uVar13 * 4;
                              uVar13 = *(uint *)((int)register0x00000054 + -8);
                              iVar5 = uVar13 + uVar7;
                              uVar17 = 1;
                              if (uVar8 == 0) {
LAB_0069adcc:
                                uVar8 = FUN_0009dbd4(0,0);
                                goto LAB_0069add8;
                              }
                              uVar17 = uVar8 == 1;
                              if (uVar8 < 2) {
LAB_0069adc0:
                                FUN_0009dbd4(1,1);
                                goto LAB_0069adcc;
                              }
                              uVar17 = uVar8 == 2;
                              if (uVar8 < 3) {
LAB_0069adb4:
                                FUN_0009dbd4(2,2);
                                goto LAB_0069adc0;
                              }
                              uVar17 = uVar8 == 3;
                              if (uVar8 < 4) {
LAB_0069ada8:
                                FUN_0009dbd4(3,3);
                                goto LAB_0069adb4;
                              }
                              uVar17 = uVar8 == 4;
                              if (uVar8 < 5) {
LAB_0069ad9c:
                                FUN_0009dbd4(4,4);
                                goto LAB_0069ada8;
                              }
                              uVar17 = uVar8 == 5;
                              if (uVar8 < 6) {
LAB_0069ad90:
                                FUN_0009dbd4(5,5);
                                goto LAB_0069ad9c;
                              }
                              uVar1 = *(undefined4 *)(iVar5 + 4);
                              unaff_r8 = *(int **)(iVar5 + 8);
                              uVar15 = *(uint *)(iVar5 + 0x10);
                              uVar8 = *(uint *)(iVar5 + 0x14);
                              *(ushort *)((int)register0x00000054 + -0xc2) =
                                   (ushort)*(undefined4 *)(uVar13 + uVar7) & 0xfc |
                                   (ushort)((*(uint *)(iVar5 + 0xc) & 0xff) << 8);
                              *(ushort *)((int)register0x00000054 + -0xc0) =
                                   (ushort)uVar1 & 0xfc | (ushort)((uVar15 & 0xff) << 8);
                              *(ushort *)((int)register0x00000054 + -0xbe) =
                                   (ushort)unaff_r8 & 0xfc | (ushort)((uVar8 & 0xff) << 8);
                              uVar8 = (uint)(longlong)*(double *)((int)register0x00000054 + -0x84);
                              uVar17 = uVar8 == 3;
                              if (2 < uVar8) {
LAB_0069ad88:
                                FUN_0009dbd4(uVar8,3);
                                goto LAB_0069ad90;
                              }
                              dVar18 = (double)VectorSignedToFloat(uVar8 & 0xffff0000 |
                                                                   (uint)*(ushort *)
                                                                          ((int)register0x00000054 +
                                                                          uVar8 * 2 + -0xc2),
                                                                   (byte)(in_fpscr >> 0x16) & 3);
                              *(double *)((int)register0x00000054 + -0xe8) =
                                   *(double *)((int)register0x00000054 + -0x8c) * dVar18 * 0.25;
                              *(undefined4 *)((int)register0x00000054 + -0xe0) = 6;
                              k3c_common_utils_maths_Round();
                              uVar8 = (uint)(longlong)*(double *)((int)register0x00000054 + -0x9c);
                              uVar17 = uVar8 == 3;
                              if (2 < uVar8) {
LAB_0069ad80:
                                uVar8 = FUN_0009dbd4(uVar8,3);
                                goto LAB_0069ad88;
                              }
                              *(undefined8 *)((int)register0x00000054 + -0x7c) =
                                   *(undefined8 *)((int)register0x00000054 + -0xdc);
                              dVar18 = (double)VectorSignedToFloat(uVar8 & 0xffff0000 |
                                                                   (uint)*(ushort *)
                                                                          ((int)register0x00000054 +
                                                                          uVar8 * 2 + -0xc2),
                                                                   (byte)(in_fpscr >> 0x16) & 3);
                              *(double *)((int)register0x00000054 + -0xe8) =
                                   *(double *)((int)register0x00000054 + -0xa4) * dVar18 * 0.25;
                              *(undefined4 *)((int)register0x00000054 + -0xe0) = 6;
                              k3c_common_utils_maths_Round();
                              uVar8 = (uint)(longlong)*(double *)((int)register0x00000054 + -0xb4);
                              uVar17 = uVar8 == 3;
                              if (2 < uVar8) {
LAB_0069ad78:
                                uVar8 = FUN_0009dbd4(uVar8,3);
                                goto LAB_0069ad80;
                              }
                              *(undefined8 *)((int)register0x00000054 + -0x94) =
                                   *(undefined8 *)((int)register0x00000054 + -0xdc);
                              dVar18 = (double)VectorSignedToFloat(uVar8 & 0xffff0000 |
                                                                   (uint)*(ushort *)
                                                                          ((int)register0x00000054 +
                                                                          uVar8 * 2 + -0xc2),
                                                                   (byte)(in_fpscr >> 0x16) & 3);
                              *(double *)((int)register0x00000054 + -0xe8) =
                                   *(double *)((int)register0x00000054 + -0xbc) * dVar18 * 0.25;
                              *(undefined4 *)((int)register0x00000054 + -0xe0) = 6;
                              k3c_common_utils_maths_Round();
                              *(undefined8 *)((int)register0x00000054 + -0xac) =
                                   *(undefined8 *)((int)register0x00000054 + -0xdc);
                              dVar18 = (double)VectorSignedToFloat(uVar8 & 0xffff0000 |
                                                                   *(uint *)((int)register0x00000054
                                                                            + -0x44) & 0xffff,
                                                                   (byte)(in_fpscr >> 0x16) & 3);
                              *(double *)((int)register0x00000054 + -0xe8) =
                                   *(double *)((int)register0x00000054 + -0x74) +
                                   (*(double *)((int)register0x00000054 + -0x58) + dVar18) *
                                   *(double *)((int)register0x00000054 + -0x4c);
                              *(undefined4 *)((int)register0x00000054 + -0xe0) = 6;
                              k3c_common_utils_maths_Round();
                              *(undefined8 *)((int)register0x00000054 + -0x60) =
                                   *(undefined8 *)((int)register0x00000054 + -0xdc);
                              *(undefined4 *)((int)register0x00000054 + -0xe8) = DAT_0069aecc;
                              FUN_00022cf8();
                              puVar11 = *(undefined8 **)((int)register0x00000054 + -0xe4);
                              *puVar11 = *(undefined8 *)((int)register0x00000054 + -0x60);
                              puVar11[1] = *(undefined8 *)((int)register0x00000054 + -0x7c);
                              puVar11[2] = *(undefined8 *)((int)register0x00000054 + -0x94);
                              puVar11[3] = *(undefined8 *)((int)register0x00000054 + -0xac);
                              uVar8 = *(uint *)((int)register0x00000054 + -0x38);
                              uVar17 = *(uint *)((int)register0x00000054 + -0x68) == uVar8;
                              if (*(uint *)((int)register0x00000054 + -0x68) <= uVar8) {
                                uVar8 = FUN_0009dbd4(uVar8);
                                goto LAB_0069ad78;
                              }
                              iVar5 = uVar8 * 3;
                              iVar6 = *(int *)((int)register0x00000054 + -0x14);
                              iVar3 = iVar6 + uVar8 * 0xc;
                              *(undefined4 *)(iVar3 + 4) = 4;
                              *(undefined4 *)(iVar3 + 8) = 4;
                              if (*DAT_0069aeac != 0) {
                                puVar11 = (undefined8 *)FUN_0009db64();
                                *unaff_r8 = (int)puVar11;
                                unaff_r8[1] = *(int *)(iVar6 + extraout_r3_01 * 4);
                                uVar8 = extraout_r2_01;
                                iVar5 = extraout_r3_01;
                              }
                              *(undefined8 **)(iVar6 + iVar5 * 4) = puVar11;
                              iVar5 = uVar8 + 1;
                              uVar1 = *(undefined4 *)((int)register0x00000054 + -0x2c);
                            } while( true );
                          }
                          *(uint *)((int)register0x00000054 + -0xe8) = uVar8;
                          *(uint *)((int)register0x00000054 + -0xe4) = uVar13;
                          *(undefined4 *)((int)register0x00000054 + -0xe0) = DAT_0069aed0;
                          FUN_000209b4();
                          iVar5 = extraout_r1;
                          iVar6 = extraout_r2_02;
                        }
                        *(int *)((int)register0x00000054 + -0xe8) = iVar5;
                        *(int *)((int)register0x00000054 + -0xe4) = iVar6;
                        *(undefined4 *)((int)register0x00000054 + -0xe0) = DAT_0069aed0;
                        FUN_000209b4();
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
            }
            FUN_0009dbd4(1,1);
          }
          FUN_0009dbd4(1,1);
        }
        FUN_0009dbd4(0,0);
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xec);
      if ((bool)uVar17) {
        register0x00000054 = (BADSPACEBASE *)puVar16;
      }
    }
    unaff_lr = 0x69ae94;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
LAB_0069a7dc:
  iVar5 = *(int *)((int)register0x00000054 + -0x18) + 1;
  iVar3 = *(int *)((int)register0x00000054 + 0xc);
  uVar1 = *(undefined4 *)((int)register0x00000054 + -0x38);
  uVar9 = *(undefined4 *)((int)register0x00000054 + -0x6c);
  uVar12 = *(undefined4 *)((int)register0x00000054 + -0x44);
  goto LAB_0069a7f4;
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12)._update_clock @ 0069aed4 (size 1576) */

void k3c_internal_pkg_motion_vibration___LIS2DW12___update_clock(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  uint uVar5;
  int extraout_r2;
  int iVar6;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  int unaff_r10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  undefined1 uVar12;
  uint in_fpscr;
  double dVar13;
  undefined8 uVar14;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar11 = (undefined1 *)((int)register0x00000054 + -0x7c);
      *(undefined4 *)((int)register0x00000054 + -0x7c) = unaff_lr;
      uVar4 = 0;
      uVar5 = 0;
      iVar1 = 0;
      while (iVar1 < 5) {
        *(int *)((int)register0x00000054 + -0x34) = iVar1;
        *(uint *)((int)register0x00000054 + -0x30) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x34);
        FUN_00020ce0();
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_0069b500;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x74);
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x40);
        *(undefined1 **)((int)register0x00000054 + -0x74) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x70) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x6c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x60) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
        k3c_internal_pkg_mcu___CommandQueryWrapper__Send();
        uVar14 = CONCAT44(DAT_0069b504,*(int *)((int)register0x00000054 + -0x58));
        uVar12 = *(int *)((int)register0x00000054 + -0x58) == DAT_0069b504;
        if (!(bool)uVar12) goto LAB_0069b4d8;
        iVar1 = *(int *)((int)register0x00000054 + -0x54);
        if (iVar1 == 0) {
          uVar5 = *(uint *)((int)register0x00000054 + -0x30);
          uVar4 = 0;
        }
        else {
          *(int *)((int)register0x00000054 + -0xc) = iVar1;
          *(int *)((int)register0x00000054 + -0x78) = DAT_0069b504;
          *(int *)((int)register0x00000054 + -0x74) = iVar1;
          *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0069b508;
          *(undefined4 *)((int)register0x00000054 + -0x6c) = 4;
          FUN_00025f60();
          iVar1 = **(int **)((int)register0x00000054 + -0x68);
          uVar12 = iVar1 == DAT_0069b50c;
          iVar6 = DAT_0069b50c;
          if (!(bool)uVar12) goto LAB_0069b4c4;
          uVar5 = *(uint *)(*(int **)((int)register0x00000054 + -0x68))[1] & 0x7f;
          if (uVar5 < 0x21) {
            iVar1 = *(int *)((int)register0x00000054 + -0x34);
            uVar4 = *(undefined4 *)((int)register0x00000054 + -0xc);
            break;
          }
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0xc);
        }
        iVar1 = *(int *)((int)register0x00000054 + -0x34) + 1;
      }
      uVar12 = iVar1 == 5;
      if (iVar1 < 5) {
        *(uint *)((int)register0x00000054 + -0x30) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x14) = uVar4;
        *(int *)((int)register0x00000054 + -0x78) = DAT_0069b504;
        *(undefined4 *)((int)register0x00000054 + -0x74) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0069b510;
        *(undefined4 *)((int)register0x00000054 + -0x6c) = 5;
        FUN_00025f60();
        iVar1 = **(int **)((int)register0x00000054 + -0x68);
        uVar12 = 0;
        iVar6 = DAT_0069b50c;
        if (iVar1 == DAT_0069b50c) {
          puVar2 = (undefined4 *)(*(int **)((int)register0x00000054 + -0x68))[1];
          uVar7 = *puVar2;
          uVar4 = puVar2[1];
          pcVar10 = *(code **)(*(int *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x30) + 0xc
                                       ) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x30) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x74) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x70) = uVar4;
          (*pcVar10)();
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + -0x6c);
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          *(int *)((int)register0x00000054 + -0x78) = DAT_0069b504;
          *(undefined4 *)((int)register0x00000054 + -0x74) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0069b514;
          *(undefined4 *)((int)register0x00000054 + -0x6c) = 0xd;
          FUN_00025f60();
          iVar1 = **(int **)((int)register0x00000054 + -0x68);
          uVar12 = 0;
          iVar6 = DAT_0069b50c;
          if (iVar1 == DAT_0069b50c) {
            uVar8 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x44);
            uVar5 = *(uint *)(*(int **)((int)register0x00000054 + -0x68))[1] | uVar8 & 0xffff0000;
            if ((int)uVar5 < (int)uVar8) {
              uVar5 = uVar5 + 0x10000;
            }
            *(uint *)((int)register0x00000054 + -0x38) = uVar5;
            *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x44) = uVar5;
            *(int *)((int)register0x00000054 + -0x78) = DAT_0069b504;
            *(undefined4 *)((int)register0x00000054 + -0x74) =
                 *(undefined4 *)((int)register0x00000054 + -0x14);
            *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0069b518;
            *(undefined4 *)((int)register0x00000054 + -0x6c) = 8;
            FUN_00025f60();
            iVar1 = **(int **)((int)register0x00000054 + -0x68);
            uVar12 = 0;
            iVar6 = DAT_0069b50c;
            if (iVar1 == DAT_0069b50c) {
              *(undefined4 *)((int)register0x00000054 + -0x18) =
                   *(undefined4 *)(*(int **)((int)register0x00000054 + -0x68))[1];
              *(int *)((int)register0x00000054 + -0x78) = DAT_0069b504;
              *(undefined4 *)((int)register0x00000054 + -0x74) =
                   *(undefined4 *)((int)register0x00000054 + -0x14);
              *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0069b51c;
              *(undefined4 *)((int)register0x00000054 + -0x6c) = 0xb;
              FUN_00025f60();
              iVar1 = **(int **)((int)register0x00000054 + -0x68);
              uVar12 = 0;
              iVar6 = DAT_0069b50c;
              if (iVar1 == DAT_0069b50c) {
                uVar8 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x50);
                uVar5 = uVar8 & 0xffff0000 |
                        *(uint *)(*(int **)((int)register0x00000054 + -0x68))[1];
                if ((int)uVar5 < (int)uVar8) {
                  uVar5 = uVar5 + 0x10000;
                }
                *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x50) = uVar5;
                *(int *)((int)register0x00000054 + -0x78) = DAT_0069b504;
                *(undefined4 *)((int)register0x00000054 + -0x74) =
                     *(undefined4 *)((int)register0x00000054 + -0x14);
                *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0069b520;
                *(undefined4 *)((int)register0x00000054 + -0x6c) = 0xb;
                FUN_00025f60();
                iVar1 = **(int **)((int)register0x00000054 + -0x68);
                uVar12 = 0;
                iVar6 = DAT_0069b50c;
                if (iVar1 == DAT_0069b50c) {
                  puVar3 = (uint *)(*(int **)((int)register0x00000054 + -0x68))[1];
                  uVar8 = *puVar3;
                  uVar5 = puVar3[1];
                  iVar1 = *(int *)((int)register0x00000054 + 4);
                  if ((int)*(uint *)(iVar1 + 0x4c) < (int)uVar5 ||
                      *(uint *)(iVar1 + 0x4c) == uVar5 && *(uint *)(iVar1 + 0x48) < uVar8) {
                    *(double *)((int)register0x00000054 + -0x78) =
                         *DAT_0069b534 * *(double *)(*(int *)(iVar1 + 0x30) + 0x94);
                    FUN_0008b890();
                    uVar5 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0x48);
                    iVar1 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x4c);
                    *(undefined4 *)((int)register0x00000054 + -0x50) =
                         *(undefined4 *)((int)register0x00000054 + -0x70);
                    *(undefined4 *)((int)register0x00000054 + -0x48) =
                         *(undefined4 *)((int)register0x00000054 + -0x6c);
                    *(uint *)((int)register0x00000054 + -0x78) = uVar5 << 1;
                    *(uint *)((int)register0x00000054 + -0x74) = uVar5 >> 0x1f | iVar1 << 1;
                    FUN_0008b910();
                    *(undefined8 *)((int)register0x00000054 + -0x40) =
                         *(undefined8 *)((int)register0x00000054 + -0x70);
                    *(undefined4 *)((int)register0x00000054 + -0x78) =
                         *(undefined4 *)((int)register0x00000054 + -0x50);
                    *(undefined4 *)((int)register0x00000054 + -0x74) =
                         *(undefined4 *)((int)register0x00000054 + -0x48);
                    FUN_0008b910();
                    *(undefined8 *)((int)register0x00000054 + -0x78) =
                         *(undefined8 *)((int)register0x00000054 + -0x40);
                    FUN_000afca0();
                    *(undefined8 *)((int)register0x00000054 + -0x78) =
                         *(undefined8 *)((int)register0x00000054 + -0x68);
                    FUN_0008b890();
                    uVar4 = *(undefined4 *)((int)register0x00000054 + -0x6c);
                    iVar1 = *(int *)((int)register0x00000054 + 4);
                    *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)((int)register0x00000054 + -0x70)
                    ;
                    *(undefined4 *)(iVar1 + 0x4c) = uVar4;
                    *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
                    *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    return;
                  }
                  *(uint *)((int)register0x00000054 + -0x28) = uVar5;
                  *(uint *)((int)register0x00000054 + -0x2c) = uVar8;
                  *(uint *)(iVar1 + 0x48) = uVar8 << 1;
                  *(uint *)(iVar1 + 0x4c) = uVar8 >> 0x1f | uVar5 << 1;
                  uVar4 = *DAT_0069b524;
                  *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_0069b528;
                  *(undefined4 *)((int)register0x00000054 + -0x74) = uVar4;
                  *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0069b52c;
                  *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x11;
                  FUN_00025f60();
                  uVar4 = *DAT_0069b524;
                  *(undefined8 *)((int)register0x00000054 + -0x20) =
                       **(undefined8 **)((int)register0x00000054 + -0x68);
                  *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_0069b528;
                  *(undefined4 *)((int)register0x00000054 + -0x74) = uVar4;
                  *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0069b530;
                  *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x10;
                  FUN_00025f60();
                  uVar5 = (uint)(longlong)**(double **)((int)register0x00000054 + -0x68);
                  uVar12 = uVar5 == 0;
                  if (!(bool)uVar12) {
                    dVar13 = *(double *)((int)register0x00000054 + -0x20);
                    *(uint *)((int)register0x00000054 + -0x24) = (uint)(longlong)dVar13;
                    uVar9 = *(uint *)((int)register0x00000054 + -0x18);
                    uVar8 = FUN_0009edd4((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f),
                                         (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f));
                    uVar5 = (int)(uVar9 ^ uVar5) >> 0x1f;
                    *(undefined4 *)((int)register0x00000054 + -0x10) =
                         *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x58);
                    uVar14 = VectorSignedToFloat((uint)(longlong)dVar13 & 0xffff0000 |
                                                 *(int *)((int)register0x00000054 + -0x30) +
                                                 *(int *)((int)register0x00000054 + -0x24) *
                                                 *(int *)((int)register0x00000054 + -0x38) +
                                                 ((uVar8 ^ uVar5) - uVar5) + 1 & 0xffff,
                                                 (byte)(in_fpscr >> 0x16) & 3);
                    *(undefined8 *)((int)register0x00000054 + -0x20) = uVar14;
                    uVar5 = -(*(int *)((int)register0x00000054 + -0x28) >> 0x1f);
                    iVar1 = *(int *)((int)register0x00000054 + -0x28) +
                            (uint)CARRY4(*(uint *)((int)register0x00000054 + -0x2c),uVar5);
                    uVar5 = *(uint *)((int)register0x00000054 + -0x2c) + uVar5 >> 1 |
                            iVar1 * -0x80000000;
                    *(uint *)((int)register0x00000054 + -0x78) =
                         uVar5 + *(uint *)((int)register0x00000054 + -0x4c);
                    *(uint *)((int)register0x00000054 + -0x74) =
                         *(int *)((int)register0x00000054 + -0x44) + (iVar1 >> 1) +
                         (uint)CARRY4(uVar5,*(uint *)((int)register0x00000054 + -0x4c));
                    FUN_0008b910();
                    *(undefined4 *)((int)register0x00000054 + -0x78) =
                         *(undefined4 *)((int)register0x00000054 + -0x10);
                    *(undefined8 *)((int)register0x00000054 + -0x74) =
                         *(undefined8 *)((int)register0x00000054 + -0x70);
                    *(undefined8 *)((int)register0x00000054 + -0x6c) =
                         *(undefined8 *)((int)register0x00000054 + -0x20);
                    k3c_internal_pkg_motion_vibration___ClockSyncRegression__Update();
                    *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
                    *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    return;
                  }
                  FUN_000539a0();
                  iVar1 = extraout_r1;
                  iVar6 = extraout_r2;
                }
                *(int *)((int)register0x00000054 + -0x78) = iVar1;
                *(int *)((int)register0x00000054 + -0x74) = iVar6;
                *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0069b538;
                FUN_000209b4();
                iVar1 = extraout_r1_00;
                iVar6 = extraout_r2_00;
              }
              *(int *)((int)register0x00000054 + -0x78) = iVar1;
              *(int *)((int)register0x00000054 + -0x74) = iVar6;
              *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0069b538;
              FUN_000209b4();
              iVar1 = extraout_r1_01;
              iVar6 = extraout_r2_01;
            }
            *(int *)((int)register0x00000054 + -0x78) = iVar1;
            *(int *)((int)register0x00000054 + -0x74) = iVar6;
            *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0069b538;
            FUN_000209b4();
            iVar1 = extraout_r1_02;
            iVar6 = extraout_r2_02;
          }
          *(int *)((int)register0x00000054 + -0x78) = iVar1;
          *(int *)((int)register0x00000054 + -0x74) = iVar6;
          *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0069b538;
          FUN_000209b4();
          iVar1 = extraout_r1_03;
          iVar6 = extraout_r2_03;
        }
        *(int *)((int)register0x00000054 + -0x78) = iVar1;
        *(int *)((int)register0x00000054 + -0x74) = iVar6;
        *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0069b538;
        FUN_000209b4();
      }
      *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_0069b53c;
      FUN_00022cf8();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x74);
      puVar2[1] = 0x1d;
      *puVar2 = DAT_0069b540;
      *(undefined4 *)((int)register0x00000054 + -0x78) = *DAT_0069b544;
      *(undefined4 **)((int)register0x00000054 + -0x74) = puVar2;
      FUN_00095b00();
      iVar1 = extraout_r1_04;
      iVar6 = extraout_r2_04;
LAB_0069b4c4:
      *(int *)((int)register0x00000054 + -0x78) = iVar1;
      *(int *)((int)register0x00000054 + -0x74) = iVar6;
      *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0069b538;
      uVar14 = FUN_000209b4();
LAB_0069b4d8:
      *(undefined8 *)((int)register0x00000054 + -0x78) = uVar14;
      *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0069b538;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x7c);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar11;
      }
    }
    unaff_lr = 0x69b4f8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12)._start_measurements @ 0069b548 (size 2008) */

void k3c_internal_pkg_motion_vibration___LIS2DW12___start_measurements(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  undefined4 extraout_r2;
  code *pcVar4;
  int extraout_r2_00;
  int iVar5;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  uint in_fpscr;
  undefined8 uVar8;
  double dVar9;
  uint unaff_s30;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x10)) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x90);
      *(undefined4 *)((int)register0x00000054 + -0x90) = unaff_lr;
      if (0 < *(int *)(*(int *)((int)register0x00000054 + 4) + 4)) {
        *(undefined4 *)((int)register0x00000054 + 8) = 0;
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
                    /* WARNING: Could not recover jumptable at 0x0069bbf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x90))();
        return;
      }
      uVar1 = *DAT_0069bd20;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0069bd24;
      *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd28;
      *(undefined4 *)((int)register0x00000054 + -0x80) = 9;
      FUN_00025f60();
      uVar1 = **(undefined4 **)((int)register0x00000054 + -0x7c);
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
      k3c_internal_pkg_motion_vibration___LIS2DW12__Read_reg();
      uVar1 = *DAT_0069bd2c;
      *(undefined1 *)((int)register0x00000054 + -0x69) =
           *(undefined1 *)((int)register0x00000054 + -0x84);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0069bd30;
      *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd34;
      *(undefined4 *)((int)register0x00000054 + -0x80) = 6;
      FUN_00025f60();
      iVar3 = **(int **)((int)register0x00000054 + -0x7c);
      uVar7 = 0;
      iVar5 = DAT_0069bd38;
      if (iVar3 == DAT_0069bd38) {
        if ((uint)*(byte *)((int)register0x00000054 + -0x69) ==
            (*(uint *)(*(int **)((int)register0x00000054 + -0x7c))[1] & 0xff)) {
          uVar1 = *DAT_0069bd2c;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0069bd30;
          *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd3c;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 0xe;
          FUN_00025f60();
          iVar3 = **(int **)((int)register0x00000054 + -0x7c);
          iVar5 = DAT_0069bd38;
          if (iVar3 == DAT_0069bd38) {
            uVar1 = *DAT_0069bd20;
            *(undefined4 *)((int)register0x00000054 + -0x40) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
            *(undefined4 *)((int)register0x00000054 + -0x44) =
                 *(undefined4 *)(*(int **)((int)register0x00000054 + -0x7c))[1];
            *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0069bd24;
            *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd40;
            *(undefined4 *)((int)register0x00000054 + -0x80) = 9;
            FUN_00025f60();
            *(undefined4 *)((int)register0x00000054 + -0x48) =
                 **(undefined4 **)((int)register0x00000054 + -0x7c);
            uVar1 = *DAT_0069bd44;
            *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0069bd48;
            *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            FUN_00024fd0();
            iVar3 = **(int **)((int)register0x00000054 + -0x80);
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x48);
            *(uint *)((int)register0x00000054 + -0x84) =
                 *(uint *)((int)register0x00000054 + -0x44) | iVar3 << 4;
            *(undefined4 *)((int)register0x00000054 + -0x80) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
            k3c_internal_pkg_motion_vibration___LIS2DW12__Set_reg();
            uVar1 = *DAT_0069bd20;
            *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0069bd24;
            *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd4c;
            *(undefined4 *)((int)register0x00000054 + -0x80) = 0xd;
            FUN_00025f60();
            uVar1 = **(undefined4 **)((int)register0x00000054 + -0x7c);
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x80) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
            k3c_internal_pkg_motion_vibration___LIS2DW12__Set_reg();
            uVar1 = *DAT_0069bd2c;
            *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0069bd30;
            *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd50;
            *(undefined4 *)((int)register0x00000054 + -0x80) = 0x10;
            FUN_00025f60();
            iVar3 = **(int **)((int)register0x00000054 + -0x7c);
            iVar5 = DAT_0069bd38;
            if (iVar3 == DAT_0069bd38) {
              uVar1 = *DAT_0069bd20;
              *(undefined4 *)((int)register0x00000054 + -0x40) =
                   *(undefined4 *)(*(int **)((int)register0x00000054 + -0x7c))[1];
              *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0069bd24;
              *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
              *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd54;
              *(undefined4 *)((int)register0x00000054 + -0x80) = 9;
              FUN_00025f60();
              uVar1 = **(undefined4 **)((int)register0x00000054 + -0x7c);
              *(undefined4 *)((int)register0x00000054 + -0x8c) =
                   *(undefined4 *)((int)register0x00000054 + 4);
              *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
              *(undefined4 *)((int)register0x00000054 + -0x84) =
                   *(undefined4 *)((int)register0x00000054 + -0x40);
              *(undefined4 *)((int)register0x00000054 + -0x80) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
              k3c_internal_pkg_motion_vibration___LIS2DW12__Set_reg();
              uVar1 = *DAT_0069bd2c;
              *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0069bd30;
              *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
              *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd58;
              *(undefined4 *)((int)register0x00000054 + -0x80) = 0xc;
              FUN_00025f60();
              iVar3 = **(int **)((int)register0x00000054 + -0x7c);
              if (iVar3 == DAT_0069bd38) {
                uVar1 = *DAT_0069bd20;
                *(undefined4 *)((int)register0x00000054 + -0x40) =
                     *(undefined4 *)(*(int **)((int)register0x00000054 + -0x7c))[1];
                *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0069bd24;
                *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
                *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd4c;
                *(undefined4 *)((int)register0x00000054 + -0x80) = 0xd;
                FUN_00025f60();
                uVar1 = **(undefined4 **)((int)register0x00000054 + -0x7c);
                *(undefined4 *)((int)register0x00000054 + -0x8c) =
                     *(undefined4 *)((int)register0x00000054 + 4);
                *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
                *(undefined4 *)((int)register0x00000054 + -0x84) =
                     *(undefined4 *)((int)register0x00000054 + -0x40);
                *(undefined4 *)((int)register0x00000054 + -0x80) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
                k3c_internal_pkg_motion_vibration___LIS2DW12__Set_reg();
                *(int *)((int)register0x00000054 + -0x34) =
                     *(int *)((int)register0x00000054 + 4) + 0x18;
                *(int *)((int)register0x00000054 + -0x8c) =
                     *(int *)((int)register0x00000054 + 4) + 0x18;
                FUN_000aac30();
                iVar3 = *(int *)((int)register0x00000054 + 4);
                *(undefined4 *)(iVar3 + 0x24) = 0;
                *(undefined4 *)(iVar3 + 0x28) = 0;
                if (*DAT_0069bd5c != 0) {
                  FUN_0009db54(0,iVar3,*(undefined4 *)(iVar3 + 0x20));
                  *unaff_r8 = extraout_r2;
                  iVar3 = extraout_r1;
                }
                *(undefined4 *)(iVar3 + 0x20) = DAT_0069bd60;
                *(undefined4 *)((int)register0x00000054 + -0x8c) =
                     *(undefined4 *)((int)register0x00000054 + -0x34);
                FUN_000ab080();
                k3c_internal_pkg_chelper__Cfunc_get_monotonic
                          (*(undefined4 *)((int)register0x00000054 + 4));
                iVar3 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x30);
                *(int *)((int)register0x00000054 + -0x38) = iVar3;
                uVar1 = *(undefined4 *)(*(int *)(iVar3 + 8) + 8);
                *(undefined8 *)((int)register0x00000054 + -0x50) =
                     *(undefined8 *)((int)register0x00000054 + -0x8c);
                *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0069bd30;
                *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
                *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd64;
                *(undefined4 *)((int)register0x00000054 + -0x80) = 0xb;
                FUN_00025f60();
                if (**(int **)((int)register0x00000054 + -0x7c) == 0) {
                  pcVar4 = *(code **)(*(int *)(*(int *)((int)register0x00000054 + -0x38) + 0xc) +
                                     0x28);
                  *(undefined4 *)((int)register0x00000054 + -0x8c) =
                       *(undefined4 *)(*(int *)((int)register0x00000054 + -0x38) + 0x10);
                  *(undefined8 *)((int)register0x00000054 + -0x88) =
                       *(undefined8 *)((int)register0x00000054 + -0x50);
                  (*pcVar4)();
                  uVar8 = *(undefined8 *)((int)register0x00000054 + -0x80);
                }
                else {
                  uVar8 = 0;
                }
                *(undefined8 *)((int)register0x00000054 + -0x58) = uVar8;
                uVar1 = *DAT_0069bd68;
                *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0069bd6c;
                *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
                *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd70;
                *(undefined4 *)((int)register0x00000054 + -0x80) = 0xc;
                FUN_00025f60();
                dVar9 = **(double **)((int)register0x00000054 + -0x7c);
                pcVar4 = *(code **)(*(int *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x30)
                                            + 0xc) + 0x34);
                *(undefined4 *)((int)register0x00000054 + -0x8c) =
                     *(undefined4 *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x30) + 0x10);
                *(double *)((int)register0x00000054 + -0x88) =
                     *(double *)((int)register0x00000054 + -0x58) + dVar9;
                (*pcVar4)();
                iVar3 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x30);
                dVar9 = (double)VectorSignedToFloat(unaff_s30 & 0xffff0000 |
                                                    *(uint *)(*(int *)((int)register0x00000054 + 4)
                                                             + 0x14) & 0xffff,
                                                    (byte)(in_fpscr >> 0x16) & 3);
                *(undefined4 *)((int)register0x00000054 + -100) =
                     *(undefined4 *)((int)register0x00000054 + -0x80);
                *(undefined4 *)((int)register0x00000054 + -0x5c) =
                     *(undefined4 *)((int)register0x00000054 + -0x7c);
                *(double *)((int)register0x00000054 + -0x8c) =
                     (4.0 / dVar9) * *(double *)(iVar3 + 0x94);
                FUN_0008b890();
                iVar3 = *(int *)((int)register0x00000054 + 4);
                uVar1 = *(undefined4 *)(iVar3 + 0x14);
                *(undefined4 *)((int)register0x00000054 + -0x68) =
                     *(undefined4 *)((int)register0x00000054 + -0x84);
                *(undefined4 *)((int)register0x00000054 + -0x60) =
                     *(undefined4 *)((int)register0x00000054 + -0x80);
                *(undefined4 *)(iVar3 + 4) = uVar1;
                FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x28));
                *(undefined4 *)((int)register0x00000054 + -0x8c) = *(undefined4 *)(iVar3 + 0x34);
                FUN_00020ce0();
                *(int *)((int)register0x00000054 + -0x28) = DAT_0069bd38;
                *(undefined4 *)((int)register0x00000054 + -0x24) =
                     *(undefined4 *)((int)register0x00000054 + -0x88);
                *(undefined4 *)((int)register0x00000054 + -0x8c) =
                     *(undefined4 *)((int)register0x00000054 + -100);
                *(undefined4 *)((int)register0x00000054 + -0x88) =
                     *(undefined4 *)((int)register0x00000054 + -0x5c);
                FUN_0008f6c0();
                *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0069bd74;
                *(undefined4 *)((int)register0x00000054 + -0x1c) =
                     *(undefined4 *)((int)register0x00000054 + -0x84);
                *(undefined4 *)((int)register0x00000054 + -0x8c) =
                     *(undefined4 *)((int)register0x00000054 + -0x68);
                *(undefined4 *)((int)register0x00000054 + -0x88) =
                     *(undefined4 *)((int)register0x00000054 + -0x60);
                FUN_0008f6c0();
                *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_0069bd74;
                *(undefined4 *)((int)register0x00000054 + -0x14) =
                     *(undefined4 *)((int)register0x00000054 + -0x84);
                *(undefined4 *)((int)register0x00000054 + -0x8c) =
                     *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x38);
                *(undefined1 **)((int)register0x00000054 + -0x88) =
                     (undefined1 *)((int)register0x00000054 + -0x28);
                *(undefined4 *)((int)register0x00000054 + -0x84) = 3;
                *(undefined4 *)((int)register0x00000054 + -0x80) = 3;
                *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x78) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x74) =
                     *(undefined4 *)((int)register0x00000054 + -100);
                *(undefined4 *)((int)register0x00000054 + -0x70) =
                     *(undefined4 *)((int)register0x00000054 + -0x5c);
                k3c_internal_pkg_mcu___CommandWrapper__Send();
                *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
                uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 100);
                *(undefined4 *)((int)register0x00000054 + -0x8c) =
                     *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x60);
                *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
                FUN_0008f77c();
                *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0069bd78;
                *(undefined4 *)((int)register0x00000054 + -0x2c) =
                     *(undefined4 *)((int)register0x00000054 + -0x84);
                *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0069bd7c;
                *(undefined4 *)((int)register0x00000054 + -0x88) = 0x23;
                *(undefined1 **)((int)register0x00000054 + -0x84) =
                     (undefined1 *)((int)register0x00000054 + -0x30);
                *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
                *(undefined4 *)((int)register0x00000054 + -0x7c) = 1;
                k3c_internal_pkg_logger_Infof();
                iVar3 = *(int *)((int)register0x00000054 + 4);
                *(undefined4 *)(iVar3 + 0x44) = 0;
                *(undefined4 *)(iVar3 + 0x50) = 0;
                *(undefined4 *)(iVar3 + 0x54) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x3c) = *(undefined4 *)(iVar3 + 0x58);
                *(undefined4 *)((int)register0x00000054 + -0x8c) =
                     *(undefined4 *)((int)register0x00000054 + -100);
                *(undefined4 *)((int)register0x00000054 + -0x88) =
                     *(undefined4 *)((int)register0x00000054 + -0x5c);
                FUN_0008b910();
                uVar8 = *(undefined8 *)((int)register0x00000054 + -0x84);
                iVar3 = *(int *)((int)register0x00000054 + -0x3c);
                *(undefined8 *)(iVar3 + 0x24) = uVar8;
                *(undefined8 *)(iVar3 + 0x44) = uVar8;
                *(undefined8 *)(iVar3 + 0x34) = 0;
                *(undefined8 *)(iVar3 + 0x2c) = 0;
                *(undefined8 *)(iVar3 + 0x3c) = 0;
                *(undefined8 *)(iVar3 + 0x14) = 0;
                *(undefined8 *)(iVar3 + 0x1c) = 0;
                iVar3 = *(int *)((int)register0x00000054 + 4);
                *(undefined4 *)(iVar3 + 0x48) = 0x80000000;
                *(undefined4 *)(iVar3 + 0x4c) = 0;
                *(int *)((int)register0x00000054 + -0x8c) = iVar3;
                *(undefined4 *)((int)register0x00000054 + -0x88) =
                     *(undefined4 *)((int)register0x00000054 + -100);
                *(undefined4 *)((int)register0x00000054 + -0x84) =
                     *(undefined4 *)((int)register0x00000054 + -0x5c);
                k3c_internal_pkg_motion_vibration___LIS2DW12___update_clock();
                iVar3 = *(int *)((int)register0x00000054 + 4);
                *(undefined4 *)(iVar3 + 0x48) = 0x80000000;
                *(undefined4 *)(iVar3 + 0x4c) = 0;
                *(undefined4 *)((int)register0x00000054 + 8) = 0;
                *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
                return;
              }
              *(int *)((int)register0x00000054 + -0x8c) = iVar3;
              *(int *)((int)register0x00000054 + -0x88) = DAT_0069bd38;
              *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd80;
              FUN_000209b4();
              iVar3 = extraout_r1_00;
              iVar5 = extraout_r2_00;
            }
            *(int *)((int)register0x00000054 + -0x8c) = iVar3;
            *(int *)((int)register0x00000054 + -0x88) = iVar5;
            *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd80;
            FUN_000209b4();
            iVar3 = extraout_r1_01;
            iVar5 = extraout_r2_01;
          }
          *(int *)((int)register0x00000054 + -0x8c) = iVar3;
          *(int *)((int)register0x00000054 + -0x88) = iVar5;
          *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd80;
          FUN_000209b4();
        }
        uVar1 = *DAT_0069bd2c;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0069bd30;
        *(undefined4 *)((int)register0x00000054 + -0x88) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd34;
        *(undefined4 *)((int)register0x00000054 + -0x80) = 6;
        FUN_00025f60();
        iVar3 = **(int **)((int)register0x00000054 + -0x7c);
        uVar7 = 0;
        iVar5 = DAT_0069bd38;
        if (iVar3 == DAT_0069bd38) {
          uVar2 = *(uint *)(*(int **)((int)register0x00000054 + -0x7c))[1];
          *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_0069bd88;
          *(uint *)((int)register0x00000054 + -0xc) =
               DAT_0069bd84 + (uint)*(byte *)((int)register0x00000054 + -0x69) * 8;
          *(undefined4 *)((int)register0x00000054 + -8) = DAT_0069bd88;
          *(uint *)((int)register0x00000054 + -4) = DAT_0069bd84 + (uVar2 & 0xff) * 8;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_0069bd8c;
          *(undefined4 *)((int)register0x00000054 + -0x88) = 0x87;
          *(undefined1 **)((int)register0x00000054 + -0x84) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x80) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 2;
          FUN_001386c4();
          uVar7 = *(int *)((int)register0x00000054 + -0x78) == 0;
          uVar1 = 0;
          if (!(bool)uVar7) {
            uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x78) + 4);
          }
          *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + -0x74);
          FUN_00095b00();
          iVar3 = extraout_r1_02;
          iVar5 = extraout_r2_02;
        }
        *(int *)((int)register0x00000054 + -0x8c) = iVar3;
        *(int *)((int)register0x00000054 + -0x88) = iVar5;
        *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd80;
        FUN_000209b4();
        iVar3 = extraout_r1_03;
        iVar5 = extraout_r2_03;
      }
      *(int *)((int)register0x00000054 + -0x8c) = iVar3;
      *(int *)((int)register0x00000054 + -0x88) = iVar5;
      *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_0069bd80;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x90);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x69bd1c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12)._finish_measurements @ 0069bd90 (size 364) */

void k3c_internal_pkg_motion_vibration___LIS2DW12___finish_measurements(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int iVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 local_1c [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x69bef8;
    FUN_0009bf64();
  }
  if (0 < *(int *)(in_stack_00000004 + 4)) {
    FUN_0009defc(0,local_1c,in_stack_00000004,*(int *)(in_stack_00000004 + 4),unaff_lr);
    FUN_00020ce0();
    local_1c[0] = DAT_0069bf00;
    local_14 = DAT_0069bf00;
    local_10 = DAT_0069bf04;
    local_c = DAT_0069bf00;
    local_8 = DAT_0069bf08;
    k3c_internal_pkg_mcu___CommandQueryWrapper__Send();
    *(undefined4 *)(in_stack_00000004 + 4) = 0;
    local_4 = in_stack_00000004 + 0x18;
    FUN_000aac30();
    *(undefined4 *)(in_stack_00000004 + 0x24) = 0;
    *(undefined4 *)(in_stack_00000004 + 0x28) = 0;
    iVar2 = in_stack_00000004;
    if (*DAT_0069bf0c != 0) {
      uVar1 = FUN_0009db54(*(undefined4 *)(in_stack_00000004 + 0x20));
      *unaff_r8 = uVar1;
      iVar2 = extraout_r3;
    }
    *(undefined4 *)(iVar2 + 0x20) = DAT_0069bf10;
    FUN_000ab080();
    FUN_0008f77c();
    k3c_internal_pkg_logger_Infof();
    return;
  }
  return;
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12)._api_update @ 0069bf1c (size 732) */

void k3c_internal_pkg_motion_vibration___LIS2DW12___api_update(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 *local_3c;
  int local_38;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_motion_vibration___LIS2DW12___update_clock();
  FUN_000aac30();
  iVar3 = *(int *)(in_stack_00000004 + 0x24);
  iVar4 = *(int *)(in_stack_00000004 + 0x28);
  *(undefined4 *)(in_stack_00000004 + 0x24) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x28) = 0;
  iVar1 = in_stack_00000004;
  if (*DAT_0069c1fc != 0) {
    iVar5 = *(int *)(in_stack_00000004 + 0x20);
    iVar1 = FUN_0009db54();
    *unaff_r8 = iVar5;
  }
  *(undefined4 *)(iVar1 + 0x20) = DAT_0069c200;
  FUN_000ab080();
  iVar1 = in_stack_00000004;
  if (iVar3 == 0) {
    FUN_000908bc();
    return;
  }
  k3c_internal_pkg_motion_vibration___LIS2DW12__Extract_samples();
  if (local_38 == 0) {
    FUN_0013b8e4();
    FUN_000908bc();
    return;
  }
  FUN_000908bc();
  FUN_0008f820();
  FUN_00093a08();
  *local_3c = DAT_0069c20c;
  puVar2 = local_3c;
  if (*DAT_0069c1fc != 0) {
    puVar2 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = iVar4;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = iVar4;
  FUN_00020ce0();
  FUN_00093a08();
  *local_3c = DAT_0069c214;
  puVar2 = local_3c;
  if (*DAT_0069c1fc != 0) {
    puVar2 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = iVar1;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = iVar1;
  FUN_00020ce0();
  FUN_00093a08();
  *local_3c = DAT_0069c214;
  if (*DAT_0069c1fc != 0) {
    local_3c = (undefined4 *)FUN_0009db64();
    *unaff_r8 = iVar1;
    unaff_r8[1] = local_3c[1];
  }
  local_3c[1] = iVar1;
  return;
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12)._api_startstop @ 0069c22c (size 72) */

void k3c_internal_pkg_motion_vibration___LIS2DW12___api_startstop(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  char in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (in_stack_00000008 == '\0') {
    k3c_internal_pkg_motion_vibration___LIS2DW12___finish_measurements();
  }
  else {
    k3c_internal_pkg_motion_vibration___LIS2DW12___start_measurements();
  }
  return;
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12)._handle_dump_lis2dw12 @ 0069c274 (size 312) */

void k3c_internal_pkg_motion_vibration___LIS2DW12___handle_dump_lis2dw12(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 *local_c;
  
  while (puVar2 = in_stack_00000008, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_web___APIDumpHelper__add_client();
  uVar1 = DAT_0069c3b0;
  FUN_00022cf8();
  puVar2[1] = 4;
  *puVar2 = DAT_0069c3b4;
  puVar2[3] = 0xe;
  puVar2[2] = DAT_0069c3b8;
  puVar2[5] = 0xe;
  puVar2[4] = DAT_0069c3bc;
  puVar2[7] = 0xe;
  puVar2[6] = DAT_0069c3c0;
  FUN_000908bc();
  FUN_00093a08();
  local_c[1] = 4;
  local_c[2] = 4;
  if (*DAT_0069c3cc != 0) {
    local_c = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar2;
    unaff_r8[1] = *local_c;
  }
  *local_c = puVar2;
  if (in_stack_00000008[6] == 0) {
    in_stack_00000008[6] = DAT_0069c3c4;
    if (*DAT_0069c3cc != 0) {
      in_stack_00000008 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = uVar1;
      unaff_r8[1] = in_stack_00000008[7];
    }
    in_stack_00000008[7] = uVar1;
  }
  return;
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12).Start_internal_client @ 0069c3d0 (size 96) */

void k3c_internal_pkg_motion_vibration___LIS2DW12__Start_internal_client(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_web___APIDumpHelper__add_internal_client();
  k3c_internal_pkg_motion_vibration_NewAccelQueryHelper();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12).Get_name @ 0069c43c (size 24) */

void k3c_internal_pkg_motion_vibration___LIS2DW12__Get_name(void)

{
  return;
}



/* k3c/internal/pkg/motion/vibration.Load_config_LIS2DW12 @ 0069c454 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_vibration_Load_config_LIS2DW12(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x69c48c;
    FUN_0009bf64();
  }
  k3c_internal_pkg_motion_vibration_NewLIS2DW12();
  in_stack_00000008 = _UNK_0069c494;
                    /* WARNING: Could not recover jumptable at 0x0069c480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.NewTestAxis @ 0069c498 (size 756) */

void k3c_internal_pkg_motion_vibration_NewTestAxis(undefined4 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int *extraout_r1_00;
  int *piVar4;
  int *extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  undefined8 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x58) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0069c790;
      FUN_00022cf8();
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0069c794;
      *(undefined1 **)((int)register0x00000054 + -0x50) =
           (undefined1 *)((int)register0x00000054 + -0x18);
      k3c_internal_pkg_util_value_IsNone();
      if (*(char *)((int)register0x00000054 + -0x4c) == '\0') {
        piVar4 = *(int **)((int)register0x00000054 + -0x28);
        piVar4[1] = *(int *)((int)register0x00000054 + 8);
        if (*(int *)PTR_DAT_0069c7a0 == 0) {
          iVar3 = *(int *)((int)register0x00000054 + 4);
        }
        else {
          FUN_0009db64();
          iVar3 = *(int *)((int)register0x00000054 + 4);
          *unaff_r8 = iVar3;
          unaff_r8[1] = *extraout_r1_00;
          piVar4 = extraout_r1_00;
        }
        *piVar4 = iVar3;
LAB_0069c60c:
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0069c7a4;
        *(undefined1 **)((int)register0x00000054 + -0x50) =
             (undefined1 *)((int)register0x00000054 + -0x24);
        k3c_internal_pkg_util_value_IsNone();
        if (*(char *)((int)register0x00000054 + -0x4c) == '\0') {
          for (iVar3 = 0; iVar3 < *(int *)((int)register0x00000054 + 0x10); iVar3 = iVar3 + 1) {
          }
          iVar3 = *(int *)((int)register0x00000054 + -0x28);
          *(undefined4 *)(iVar3 + 0xc) = 0;
          *(undefined4 *)(iVar3 + 0x10) = 0;
          if (*(int *)PTR_DAT_0069c7a0 != 0) {
            uVar7 = FUN_0009db54(*(undefined4 *)(iVar3 + 8));
            iVar3 = (int)((ulonglong)uVar7 >> 0x20);
            *unaff_r8 = (int)uVar7;
          }
          *(undefined **)(iVar3 + 8) = PTR_DAT_0069c7ac;
        }
        else if ((*(int *)((int)register0x00000054 + 8) == 1) &&
                (**(char **)((int)register0x00000054 + 4) == 'x')) {
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0069c7a8;
          FUN_00022cf8();
          puVar1 = *(undefined8 **)((int)register0x00000054 + -0x50);
          *puVar1 = 0x3ff0000000000000;
          puVar1[1] = 0;
          iVar3 = *(int *)((int)register0x00000054 + -0x28);
          *(undefined4 *)(iVar3 + 0xc) = 2;
          *(undefined4 *)(iVar3 + 0x10) = 2;
          if (*(int *)PTR_DAT_0069c7a0 != 0) {
            puVar1 = (undefined8 *)FUN_0009db64();
            *unaff_r8 = (int)puVar1;
            unaff_r8[1] = *(int *)(extraout_r2_00 + 8);
            iVar3 = extraout_r2_00;
          }
          *(undefined8 **)(iVar3 + 8) = puVar1;
        }
        else {
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0069c7a8;
          FUN_00022cf8();
          iVar2 = *(int *)((int)register0x00000054 + -0x50);
          *(undefined8 *)(iVar2 + 8) = 0x3ff0000000000000;
          iVar3 = *(int *)((int)register0x00000054 + -0x28);
          *(undefined4 *)(iVar3 + 0xc) = 2;
          *(undefined4 *)(iVar3 + 0x10) = 2;
          if (*(int *)PTR_DAT_0069c7a0 != 0) {
            iVar2 = FUN_0009db64();
            *unaff_r8 = iVar2;
            unaff_r8[1] = *(int *)(extraout_r2_01 + 8);
            iVar3 = extraout_r2_01;
          }
          *(int *)(iVar3 + 8) = iVar2;
        }
        *(int *)((int)register0x00000054 + 0x18) = iVar3;
        return;
      }
      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
      uVar6 = *(int *)((int)register0x00000054 + 0x10) == 0;
      if (!(bool)uVar6) {
        *(undefined8 *)((int)register0x00000054 + -0x30) =
             **(undefined8 **)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        FUN_0008f6c0();
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0069c798;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        uVar6 = *(uint *)((int)register0x00000054 + 0x10) == 1;
        if (1 < *(uint *)((int)register0x00000054 + 0x10)) {
          *(undefined8 *)((int)register0x00000054 + -0x38) =
               *(undefined8 *)(*(int *)((int)register0x00000054 + 0xc) + 8);
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + -0x38);
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          FUN_0008f6c0();
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0069c798;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x4c);
          *(undefined **)((int)register0x00000054 + -0x54) =
               PTR_s_axis___3f___3fBED_MESH_CLEARProb_008262d0_0x227a_0069c79c;
          *(undefined4 *)((int)register0x00000054 + -0x50) = 0xe;
          *(undefined1 **)((int)register0x00000054 + -0x4c) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x48) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x44) = 2;
          FUN_0013b72c();
          iVar3 = *(int *)((int)register0x00000054 + -0x40);
          piVar4 = *(int **)((int)register0x00000054 + -0x28);
          piVar4[1] = *(int *)((int)register0x00000054 + -0x3c);
          if (*(int *)PTR_DAT_0069c7a0 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r1;
            unaff_r8[1] = *extraout_r2;
            iVar3 = extraout_r1;
            piVar4 = extraout_r2;
          }
          *piVar4 = iVar3;
          goto LAB_0069c60c;
        }
        FUN_0009dbd4(1,1);
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x58);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x69c788;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*TestAxis).Matches @ 0069c7b0 (size 272) */

void k3c_internal_pkg_motion_vibration___TestAxis__Matches(undefined4 param_1)

{
  int iVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  undefined1 uVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 4);
      uVar3 = *(int *)(iVar1 + 0xc) == 0;
      if (!(bool)uVar3) {
        if (**(double **)(iVar1 + 8) != 0.0) {
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_0069c8c4;
          *(undefined4 *)((int)register0x00000054 + -8) = 1;
          internal_stringslite_Index();
          if (*(int *)((int)register0x00000054 + -4) != -1) {
            *(undefined1 *)((int)register0x00000054 + 0x10) = 1;
            return;
          }
          iVar1 = *(int *)((int)register0x00000054 + 4);
        }
        uVar3 = *(uint *)(iVar1 + 0xc) == 1;
        if (1 < *(uint *)(iVar1 + 0xc)) {
          if (*(double *)(*(int *)(iVar1 + 8) + 8) != 0.0) {
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x10) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_0069c8c8;
            *(undefined4 *)((int)register0x00000054 + -8) = 1;
            internal_stringslite_Index();
            if (*(int *)((int)register0x00000054 + -4) != -1) {
              *(undefined1 *)((int)register0x00000054 + 0x10) = 1;
              return;
            }
          }
          *(undefined1 *)((int)register0x00000054 + 0x10) = 0;
          return;
        }
        FUN_0009dbd4(1);
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      if ((bool)uVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x69c8bc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*TestAxis).Get_name @ 0069c8cc (size 24) */

void k3c_internal_pkg_motion_vibration___TestAxis__Get_name(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = *in_stack_00000004;
  uStack0000000c = in_stack_00000004[1];
                    /* WARNING: Could not recover jumptable at 0x0069c8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*TestAxis).Get_point @ 0069c8e4 (size 116) */

void k3c_internal_pkg_motion_vibration___TestAxis__Get_point(undefined4 param_1)

{
  double *pdVar1;
  uint uVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  double dVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      uVar2 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      uVar4 = uVar2 == 0;
      if (!(bool)uVar4) {
        pdVar1 = *(double **)(*(int *)((int)register0x00000054 + 4) + 8);
        uVar4 = uVar2 == 1;
        if (1 < uVar2) {
          dVar5 = pdVar1[1];
          *(double *)((int)register0x00000054 + 0x10) =
               *pdVar1 * *(double *)((int)register0x00000054 + 8);
          *(double *)((int)register0x00000054 + 0x18) =
               dVar5 * *(double *)((int)register0x00000054 + 8);
                    /* WARNING: Could not recover jumptable at 0x0069c92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
        FUN_0009dbd4(1,1);
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x69c954;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.Parse_axis @ 0069c958 (size 736) */

/* WARNING: Removing unreachable block (ram,0x0069c9e4) */

void k3c_internal_pkg_motion_vibration_Parse_axis(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  bool bVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x58) = unaff_lr;
      if (*(int *)((int)register0x00000054 + 0x10) == 0) {
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x0069cb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x58))();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(int *)((int)register0x00000054 + -0x50) = *(int *)((int)register0x00000054 + 0x10);
      FUN_00150c8c();
      iVar1 = *(int *)((int)register0x00000054 + -0x48);
      pcVar3 = *(char **)((int)register0x00000054 + -0x4c);
      if ((iVar1 == 1) && ((*pcVar3 == 'x' || (*pcVar3 == 'y')))) {
        *(char **)((int)register0x00000054 + -0x54) = pcVar3;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 0;
        k3c_internal_pkg_motion_vibration_NewTestAxis();
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        return;
      }
      *(char **)((int)register0x00000054 + -0xc) = pcVar3;
      *(int *)((int)register0x00000054 + -0x30) = iVar1;
      *(char **)((int)register0x00000054 + -0x54) = pcVar3;
      *(int *)((int)register0x00000054 + -0x50) = iVar1;
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0069cc3c;
      *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x44) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 0xffffffff;
      FUN_0014f168();
      if (*(int *)((int)register0x00000054 + -0x38) == 2) {
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x3c);
        *(undefined4 **)((int)register0x00000054 + -0x10) = puVar2;
        uVar4 = puVar2[1];
        *(undefined4 *)((int)register0x00000054 + -0x54) = *puVar2;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar4;
        FUN_00151ce4();
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 0x40;
        FUN_000b5538();
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x10) + 8);
        uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x10) + 0xc);
        *(undefined8 *)((int)register0x00000054 + -0x28) =
             *(undefined8 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar4;
        FUN_00151ce4();
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 0x40;
        FUN_000b5538();
        if ((*(int *)((int)register0x00000054 + -0x2c) == 0) &&
           (*(int *)((int)register0x00000054 + -0x40) == 0)) {
          *(undefined8 *)((int)register0x00000054 + -0x20) =
               *(undefined8 *)((int)register0x00000054 + -0x28);
          *(undefined8 *)((int)register0x00000054 + -0x18) =
               *(undefined8 *)((int)register0x00000054 + -0x48);
          *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
          *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_0069cc40;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = 5;
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          FUN_0007636c();
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + -0x40);
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + -0x3c);
          *(undefined1 **)((int)register0x00000054 + -0x4c) =
               (undefined1 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x48) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x44) = 2;
          k3c_internal_pkg_motion_vibration_NewTestAxis();
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x40);
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0069cc44;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0069cc48;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 0x23;
        *(undefined1 **)((int)register0x00000054 + -0x4c) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 1;
        FUN_001386c4();
        uVar4 = 0;
        if (*(int *)((int)register0x00000054 + -0x40) != 0) {
          uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x40) + 4);
        }
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        FUN_00095b00();
      }
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + -0x30);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0069cc44;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0069cc4c;
      *(undefined4 *)((int)register0x00000054 + -0x50) = 0x1b;
      *(undefined1 **)((int)register0x00000054 + -0x4c) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x44) = 1;
      FUN_001386c4();
      bVar7 = *(int *)((int)register0x00000054 + -0x40) == 0;
      uVar4 = 0;
      if (!bVar7) {
        uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x40) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0x54) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x58);
      if (bVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x69cc34;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.NewVibrationPulseTest @ 0069cc50 (size 1616) */

void k3c_internal_pkg_motion_vibration_NewVibrationPulseTest(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r1;
  undefined4 extraout_r1_00;
  int *piVar4;
  undefined4 uVar5;
  undefined4 extraout_r3;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  undefined1 uVar12;
  undefined8 uVar13;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x18)) {
      puVar11 = (undefined1 *)((int)register0x00000054 + -0x98);
      *(undefined4 *)((int)register0x00000054 + -0x98) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_0069d2a4;
      FUN_00022cf8();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x90);
      uVar5 = **(undefined4 **)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0069d2a8 != 0) {
        FUN_0009db54();
        *(undefined4 *)unaff_r8 = extraout_r3;
        puVar3 = extraout_r1;
        uVar5 = extraout_r3;
      }
      *(undefined4 **)((int)register0x00000054 + -0x1c) = puVar3;
      *puVar3 = uVar5;
      pcVar1 = (code *)**(undefined4 **)PTR_DAT_0069d2ac;
      *(undefined4 *)((int)register0x00000054 + -0x94) = uVar5;
      (*pcVar1)();
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x90);
      if (*(int *)PTR_DAT_0069d2a8 == 0) {
        iVar2 = *(int *)((int)register0x00000054 + -0x1c);
      }
      else {
        FUN_0009db64();
        *(undefined4 *)unaff_r8 = extraout_r1_00;
        iVar2 = *(int *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)unaff_r8 + 4) = *(undefined4 *)(iVar2 + 4);
        uVar5 = extraout_r1_00;
      }
      *(undefined4 *)(iVar2 + 4) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x90) =
           PTR_s_min_freqmax_freqFREQ_ENDraw_data_008216f7_0x14fd_0069d2b0;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 8;
      *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_0069d2b4;
      *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0069d2b8;
      *(undefined8 *)((int)register0x00000054 + -0x80) = 0x3ff0000000000000;
      *(undefined8 *)((int)register0x00000054 + -0x78) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x70) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x68) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x60) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
      *(undefined8 *)(*(int *)((int)register0x00000054 + -0x1c) + 8) =
           *(undefined8 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x90) =
           PTR_s_max_accelMEAS_TIMEerror___v__s___00823504_0x728_0069d2bc;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 9;
      *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_0069d2b4;
      *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0069d2c0;
      *(undefined8 *)((int)register0x00000054 + -0x80) = *(undefined8 *)PTR_DAT_0069d2c4;
      *(undefined8 *)((int)register0x00000054 + -0x78) = *(undefined8 *)PTR_DAT_0069d2c8;
      *(undefined8 *)((int)register0x00000054 + -0x70) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x68) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x60) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
      *(double *)((int)register0x00000054 + -0x28) =
           *(double *)((int)register0x00000054 + -0x5c) / *(double *)PTR_DAT_0069d2cc;
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x90) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      FUN_0008f6c0();
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x8c);
      uVar13 = *(undefined8 *)(*(int *)((int)register0x00000054 + -0x1c) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x90) =
           PTR_s_max_freqFREQ_ENDraw_dataadxl345_f_008216f7_0x1505_0069d2d0;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 8;
      *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_0069d2b4;
      *(undefined4 *)((int)register0x00000054 + -0x84) = uVar5;
      *(undefined8 *)((int)register0x00000054 + -0x80) = uVar13;
      *(undefined8 *)((int)register0x00000054 + -0x78) = *(undefined8 *)PTR_DAT_0069d2d4;
      *(undefined8 *)((int)register0x00000054 + -0x70) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x68) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x60) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
      iVar2 = *(int *)((int)register0x00000054 + -0x1c);
      *(undefined8 *)(iVar2 + 0x10) = *(undefined8 *)((int)register0x00000054 + -0x5c);
      *(undefined8 *)((int)register0x00000054 + -0x30) = *(undefined8 *)(iVar2 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x90) =
           *(undefined4 *)((int)register0x00000054 + -0x2c);
      FUN_0008f6c0();
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x8c);
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x90) =
           PTR_s_test_freq_startTEST_RESONANCESTe_008262d0_0x2fd9_0069d2d8;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 0xf;
      *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_0069d2b4;
      *(undefined4 *)((int)register0x00000054 + -0x84) = uVar5;
      *(undefined8 *)((int)register0x00000054 + -0x80) = 0x3ff0000000000000;
      *(undefined8 *)((int)register0x00000054 + -0x78) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x70) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x68) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x60) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
      iVar2 = *(int *)((int)register0x00000054 + -0x1c);
      *(undefined8 *)(iVar2 + 0x4c) = *(undefined8 *)((int)register0x00000054 + -0x5c);
      *(undefined8 *)((int)register0x00000054 + -0x38) = *(undefined8 *)(iVar2 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x90) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      FUN_0008f6c0();
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x8c);
      uVar13 = *(undefined8 *)(*(int *)((int)register0x00000054 + -0x1c) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x90) =
           PTR_s_test_freq_endINPUT_SHAPINGmax_sm_008262d0_0x13fd_0069d2dc;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 0xd;
      *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_0069d2b4;
      *(undefined4 *)((int)register0x00000054 + -0x84) = uVar5;
      *(undefined8 *)((int)register0x00000054 + -0x80) = uVar13;
      *(undefined8 *)((int)register0x00000054 + -0x78) = *(undefined8 *)PTR_DAT_0069d2d4;
      *(undefined8 *)((int)register0x00000054 + -0x70) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x68) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x60) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
      *(undefined8 *)(*(int *)((int)register0x00000054 + -0x1c) + 0x54) =
           *(undefined8 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x90) =
           PTR_s_accel_per_hzprobe_pointsaccel_ch_008262d0_0x485_0069d2e0;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 0xc;
      *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_0069d2b4;
      *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0069d2e4;
      *(undefined8 *)((int)register0x00000054 + -0x80) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x78) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x70) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x68) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x60) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
      *(undefined8 *)(*(int *)((int)register0x00000054 + -0x1c) + 0x18) =
           *(undefined8 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_0069d2e8;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 10;
      *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_0069d2b4;
      *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0069d2ec;
      *(undefined8 *)((int)register0x00000054 + -0x80) = *(undefined8 *)PTR_DAT_0069d2f0;
      *(undefined8 *)((int)register0x00000054 + -0x78) = 0x4024000000000000;
      *(undefined8 *)((int)register0x00000054 + -0x70) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x68) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x60) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
      *(undefined8 *)(*(int *)((int)register0x00000054 + -0x1c) + 0x20) =
           *(undefined8 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x90) =
           PTR_s_mm_secOUTPUTradiusorigindirectpo_008216f7_0x78_0069d2f4;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 6;
      *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_0069d2b4;
      *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0069d2f8;
      *(undefined8 *)((int)register0x00000054 + -0x80) = 0x3ff0000000000000;
      *(undefined8 *)((int)register0x00000054 + -0x78) = 0x4014000000000000;
      *(undefined8 *)((int)register0x00000054 + -0x70) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x68) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x60) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
      *(undefined8 *)(*(int *)((int)register0x00000054 + -0x1c) + 0x28) =
           *(undefined8 *)((int)register0x00000054 + -0x5c);
      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
      *(undefined4 *)((int)register0x00000054 + -0xc) = 1;
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0069d2fc;
      *(undefined4 *)((int)register0x00000054 + -4) = 1;
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0069d300;
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x90) =
           PTR_s_probe_pointsaccel_chip_xaccel_ch_008262d0_0x491_0069d304;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 0xc;
      *(undefined4 *)((int)register0x00000054 + -0x88) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
      *(undefined1 **)((int)register0x00000054 + -0x80) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x7c) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x78) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x74) = 3;
      *(undefined4 *)((int)register0x00000054 + -0x70) = 0xe;
      *(undefined1 *)((int)register0x00000054 + -0x6c) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getlists();
      uVar13 = CONCAT44(PTR_DAT_0069d308,*(undefined **)((int)register0x00000054 + -0x68));
      uVar12 = 0;
      if (*(undefined **)((int)register0x00000054 + -0x68) == PTR_DAT_0069d308) {
        piVar4 = (int *)**(int **)((int)register0x00000054 + -100);
        iVar2 = (*(int **)((int)register0x00000054 + -100))[1];
        do {
          if (iVar2 < 1) {
            *(undefined4 *)((int)register0x00000054 + 8) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c);
                    /* WARNING: Could not recover jumptable at 0x0069d1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x98))();
            return;
          }
          *(int *)((int)register0x00000054 + -0x3c) = iVar2;
          *(int **)((int)register0x00000054 + -0x14) = piVar4;
          iVar2 = *piVar4;
          *(int *)((int)register0x00000054 + -0x20) = iVar2;
          iVar6 = piVar4[1];
          *(int *)((int)register0x00000054 + -0x54) = iVar6;
          uVar8 = 0;
          uVar10 = 0;
          puVar9 = PTR_DAT_0069d30c;
          for (iVar7 = 0; iVar7 < iVar6; iVar7 = iVar7 + 1) {
            unaff_r8 = *(undefined8 **)(iVar2 + iVar7 * 8);
            uVar12 = unaff_r8 == (undefined8 *)PTR_DAT_0069d2b4;
            if (!(bool)uVar12) {
              *(undefined8 **)((int)register0x00000054 + -0x94) = unaff_r8;
              *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_0069d2b4;
              *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_0069d314;
              uVar13 = FUN_000209b4(PTR_DAT_0069d314,piVar4);
              goto LAB_0069d27c;
            }
            uVar10 = uVar10 + 1;
            uVar13 = **(undefined8 **)(iVar2 + iVar7 * 8 + 4);
            if (uVar8 < uVar10) {
              *(int *)((int)register0x00000054 + -0x40) = iVar7;
              *(undefined8 *)((int)register0x00000054 + -0x48) = uVar13;
              *(undefined **)((int)register0x00000054 + -0x94) = puVar9;
              *(uint *)((int)register0x00000054 + -0x90) = uVar10;
              *(uint *)((int)register0x00000054 + -0x8c) = uVar8;
              *(undefined4 *)((int)register0x00000054 + -0x88) = 1;
              *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0069d2b4;
              FUN_000987f4();
              puVar9 = *(undefined **)((int)register0x00000054 + -0x80);
              uVar10 = *(uint *)((int)register0x00000054 + -0x7c);
              uVar8 = *(uint *)((int)register0x00000054 + -0x78);
              piVar4 = *(int **)((int)register0x00000054 + -0x14);
              iVar2 = *(int *)((int)register0x00000054 + -0x20);
              iVar6 = *(int *)((int)register0x00000054 + -0x54);
              iVar7 = *(int *)((int)register0x00000054 + -0x40);
              uVar13 = *(undefined8 *)((int)register0x00000054 + -0x48);
            }
            unaff_r8 = (undefined8 *)(puVar9 + (uVar10 - 1) * 8);
            *unaff_r8 = uVar13;
          }
          *(undefined **)((int)register0x00000054 + -0x18) = puVar9;
          *(uint *)((int)register0x00000054 + -0x50) = uVar10;
          *(uint *)((int)register0x00000054 + -0x4c) = uVar8;
          *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_0069d30c;
          *(undefined4 *)((int)register0x00000054 + -0x90) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x88) = 1;
          *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0069d310;
          FUN_000987f4();
          iVar2 = *(int *)((int)register0x00000054 + -0x80);
          uVar13 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x78),iVar2);
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)((int)register0x00000054 + -0x50);
          *(undefined4 *)(iVar2 + 8) = *(undefined4 *)((int)register0x00000054 + -0x4c);
          if (*(int *)PTR_DAT_0069d2a8 == 0) {
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x18);
            iVar2 = *(int *)((int)register0x00000054 + -0x1c);
          }
          else {
            uVar13 = FUN_0009db84();
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x18);
            *(undefined4 *)unaff_r8 = uVar5;
            *(undefined4 *)((int)unaff_r8 + 4) = *(undefined4 *)uVar13;
            *(undefined4 **)(unaff_r8 + 1) = (undefined4 *)uVar13;
            iVar2 = *(int *)((int)register0x00000054 + -0x1c);
            *(undefined4 *)((int)unaff_r8 + 0xc) = *(undefined4 *)(iVar2 + 0x30);
          }
          *(undefined4 *)uVar13 = uVar5;
          *(undefined4 *)(iVar2 + 0x34) = 1;
          *(int *)(iVar2 + 0x38) = (int)((ulonglong)uVar13 >> 0x20);
          *(undefined4 **)(iVar2 + 0x30) = (undefined4 *)uVar13;
          piVar4 = (int *)(*(int *)((int)register0x00000054 + -0x14) + 0xc);
          iVar2 = *(int *)((int)register0x00000054 + -0x3c) + -1;
        } while( true );
      }
LAB_0069d27c:
      *(undefined8 *)((int)register0x00000054 + -0x94) = uVar13;
      *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_0069d314;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x98);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar11;
      }
    }
    unaff_lr = 0x69d29c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*VibrationPulseTest).Get_start_test_points @ 0069d318 (size 32) */

void k3c_internal_pkg_motion_vibration___VibrationPulseTest__Get_start_test_points(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x30);
  uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x34);
  uStack00000010 = *(undefined4 *)(in_stack_00000004 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x0069d334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*VibrationPulseTest).Prepare_test @ 0069d338 (size 352) */

void k3c_internal_pkg_motion_vibration___VibrationPulseTest__Prepare_test(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined8 local_48;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_gcode___GCodeCommand__Get_float();
  *(undefined8 *)(in_stack_00000004 + 0x3c) = local_48;
  k3c_internal_pkg_gcode___GCodeCommand__Get_float();
  *(undefined8 *)(in_stack_00000004 + 0x44) = local_48;
  k3c_internal_pkg_gcode___GCodeCommand__Get_float();
  *(undefined8 *)(in_stack_00000004 + 0x20) = local_48;
  return;
}



/* k3c/internal/pkg/motion/vibration.(*VibrationPulseTest).Run_test @ 0069d4b0 (size 1756) */

/* WARNING: Removing unreachable block (ram,0x0069d948) */

void k3c_internal_pkg_motion_vibration___VibrationPulseTest__Run_test(undefined4 param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  undefined1 uVar11;
  undefined4 extraout_s1;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x7c)) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0xfc);
      *(undefined4 *)((int)register0x00000054 + -0xfc) = unaff_lr;
      pcVar2 = (code *)**(undefined4 **)PTR_DAT_0069db90;
      *(undefined4 *)((int)register0x00000054 + -0xf8) =
           **(undefined4 **)((int)register0x00000054 + 4);
      (*pcVar2)();
      iVar3 = *(int *)((int)register0x00000054 + -0xf4);
      *(int *)((int)register0x00000054 + -0x24) = iVar3;
      iVar5 = *(int *)(iVar3 + 0x24);
      uVar6 = *(undefined4 *)(iVar3 + 0x20);
      if (iVar5 == 0) {
        uVar8 = 0;
        iVar3 = 0;
        uVar9 = uVar6;
      }
      else {
        *(int *)((int)register0x00000054 + -0xc4) = iVar5;
        *(undefined4 *)((int)register0x00000054 + -0x20) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar6;
        *(int *)((int)register0x00000054 + -0xf4) = iVar5;
        *(undefined4 *)((int)register0x00000054 + -0xf0) = 0;
        *(int *)((int)register0x00000054 + -0xec) = iVar5;
        *(undefined **)((int)register0x00000054 + -0xe8) = PTR_DAT_0069db94;
        FUN_000987f4();
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0xe4);
        uVar8 = *(undefined4 *)((int)register0x00000054 + -0xe0);
        iVar3 = *(int *)((int)register0x00000054 + -0xc4);
        uVar9 = *(undefined4 *)((int)register0x00000054 + -0x20);
      }
      *(undefined4 *)((int)register0x00000054 + -0xd8) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x28) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0xf8) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0xf4) = uVar9;
      *(int *)((int)register0x00000054 + -0xf0) = iVar3 << 3;
      FUN_0009e3a4();
      uVar4 = *(uint *)((int)register0x00000054 + -0xd8);
      uVar11 = uVar4 == 0;
      if (!(bool)uVar11) {
        puVar7 = *(undefined8 **)((int)register0x00000054 + -0x28);
        uVar11 = uVar4 == 1;
        if (1 < uVar4) {
          uVar13 = puVar7[1];
          uVar11 = uVar4 == 2;
          if (2 < uVar4) {
            uVar15 = puVar7[2];
            uVar11 = uVar4 == 3;
            if (3 < uVar4) {
              *(undefined8 *)((int)register0x00000054 + -0x84) = *puVar7;
              *(undefined8 *)((int)register0x00000054 + -0x8c) = uVar13;
              *(undefined8 *)((int)register0x00000054 + -0x94) = uVar15;
              iVar3 = *(int *)((int)register0x00000054 + 4);
              *(double *)((int)register0x00000054 + -0xa8) =
                   *(double *)(iVar3 + 0x18) * *(double *)(iVar3 + 0x44);
              *(undefined8 *)((int)register0x00000054 + -0x7c) = puVar7[3];
              *(undefined8 *)((int)register0x00000054 + -0xcc) = *(undefined8 *)(iVar3 + 0x28);
              *(undefined8 *)((int)register0x00000054 + -0x9c) = *(undefined8 *)(iVar3 + 0x3c);
              *(undefined8 *)((int)register0x00000054 + -0xb8) =
                   *(undefined8 *)(*(int *)((int)register0x00000054 + -0x24) + 0x44);
              *(undefined8 *)((int)register0x00000054 + -0xc0) =
                   *(undefined8 *)(*(int *)((int)register0x00000054 + -0x24) + 0x7c);
              uVar6 = FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
              *(ulonglong *)((int)register0x00000054 + -0x58) = CONCAT44(extraout_s1,uVar6);
              *(undefined4 *)((int)register0x00000054 + -0xf8) =
                   *(undefined4 *)((int)register0x00000054 + -0x58);
              *(undefined4 *)((int)register0x00000054 + -0xf4) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              FUN_0008f6c0();
              *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0069db94;
              *(undefined4 *)((int)register0x00000054 + -0xc) =
                   *(undefined4 *)((int)register0x00000054 + -0xf0);
              *(undefined8 *)((int)register0x00000054 + -0x60) =
                   *(undefined8 *)((int)register0x00000054 + -0xa8);
              *(undefined4 *)((int)register0x00000054 + -0xf8) =
                   *(undefined4 *)((int)register0x00000054 + -0x60);
              *(undefined4 *)((int)register0x00000054 + -0xf4) =
                   *(undefined4 *)((int)register0x00000054 + -0x5c);
              FUN_0008f6c0();
              *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0069db94;
              *(undefined4 *)((int)register0x00000054 + -4) =
                   *(undefined4 *)((int)register0x00000054 + -0xf0);
              *(undefined **)((int)register0x00000054 + -0xf8) = PTR_DAT_0069db98;
              *(undefined4 *)((int)register0x00000054 + -0xf4) = 0x31;
              *(undefined1 **)((int)register0x00000054 + -0xf0) =
                   (undefined1 *)((int)register0x00000054 + -0x10);
              *(undefined4 *)((int)register0x00000054 + -0xec) = 2;
              *(undefined4 *)((int)register0x00000054 + -0xe8) = 2;
              FUN_0013b72c();
              *(undefined4 *)((int)register0x00000054 + -0xf8) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
              *(undefined4 *)((int)register0x00000054 + -0xf4) =
                   *(undefined4 *)((int)register0x00000054 + -0xe4);
              *(undefined4 *)((int)register0x00000054 + -0xf0) =
                   *(undefined4 *)((int)register0x00000054 + -0xe0);
              k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
              uVar6 = *(undefined4 *)PTR_DAT_0069db9c;
              uVar9 = *(undefined4 *)PTR_DAT_0069dba0;
              *(undefined4 *)((int)register0x00000054 + -0xf8) =
                   **(undefined4 **)((int)register0x00000054 + 4);
              *(undefined **)((int)register0x00000054 + -0xf4) = PTR_DAT_0069dba4;
              *(undefined4 *)((int)register0x00000054 + -0xf0) = 0xc;
              *(undefined4 *)((int)register0x00000054 + -0xec) = uVar6;
              *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar9;
              k3c_internal_pkg_printer___Printer__Lookup_object();
              *(undefined4 *)((int)register0x00000054 + -0xa0) =
                   *(undefined4 *)((int)register0x00000054 + -0xe4);
              *(undefined4 *)((int)register0x00000054 + -0x1c) =
                   *(undefined4 *)((int)register0x00000054 + -0xe0);
              *(undefined4 *)((int)register0x00000054 + -0xf8) =
                   *(undefined4 *)((int)register0x00000054 + -0xe4);
              *(undefined4 *)((int)register0x00000054 + -0xf4) =
                   *(undefined4 *)((int)register0x00000054 + -0xe0);
              k3c_internal_pkg_util_value_IsNone();
              if (*(char *)((int)register0x00000054 + -0xf0) == '\0') {
                *(undefined4 *)((int)register0x00000054 + -0xf8) =
                     *(undefined4 *)((int)register0x00000054 + 0x1c);
                *(undefined **)((int)register0x00000054 + -0xf4) =
                     PTR_s_INPUT_SHAPINGmax_smoothingMAX_SM_008262d0_0x140a_0069dba8;
                *(undefined4 *)((int)register0x00000054 + -0xf0) = 0xd;
                *(undefined **)((int)register0x00000054 + -0xec) = PTR_DAT_0069dbac;
                *(undefined **)((int)register0x00000054 + -0xe8) = PTR_SUB_0069dbb0;
                *(undefined4 *)((int)register0x00000054 + -0xe4) = 0;
                *(undefined4 *)((int)register0x00000054 + -0xe0) = 0;
                k3c_internal_pkg_gcode___GCodeCommand__Get_int();
                *(undefined4 *)((int)register0x00000054 + -100) =
                     *(undefined4 *)((int)register0x00000054 + -0xdc);
                *(undefined **)((int)register0x00000054 + -0xf8) = PTR_DAT_0069dbac;
                *(undefined1 **)((int)register0x00000054 + -0xf4) =
                     (undefined1 *)((int)register0x00000054 + -100);
                k3c_internal_pkg_util_value_False();
                cVar1 = *(char *)((int)register0x00000054 + -0xf0);
              }
              else {
                cVar1 = '\0';
              }
              if (cVar1 == '\0') {
                uVar6 = 0;
                uVar9 = 0;
LAB_0069d7a8:
                *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar9;
                *(undefined4 *)((int)register0x00000054 + -0xa0) = uVar6;
                *(undefined4 *)((int)register0x00000054 + -0xf8) =
                     *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
                *(undefined **)((int)register0x00000054 + -0xf4) = PTR_DAT_0069dbc0;
                *(undefined4 *)((int)register0x00000054 + -0xf0) = 0x23;
                k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
                *(undefined4 *)((int)register0x00000054 + -0xf8) =
                     *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
                *(undefined **)((int)register0x00000054 + -0xf4) = PTR_DAT_0069dbc4;
                *(undefined4 *)((int)register0x00000054 + -0xf0) = 0x23;
                k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
                dVar14 = *(double *)((int)register0x00000054 + -0xcc);
                dVar12 = *(double *)((int)register0x00000054 + -0x9c);
                while (dVar12 <= *(double *)PTR_DAT_0069dbc8 +
                                 *(double *)(*(int *)((int)register0x00000054 + 4) + 0x44)) {
                  *(double *)((int)register0x00000054 + -0x9c) = dVar12;
                  *(double *)((int)register0x00000054 + -0xcc) = dVar14;
                  dVar14 = 0.25 / dVar12;
                  dVar12 = *(double *)(*(int *)((int)register0x00000054 + 4) + 0x18) * dVar12;
                  iVar3 = *(int *)((int)register0x00000054 + -0x24);
                  dVar16 = *(double *)(iVar3 + 0x44);
                  *(double *)((int)register0x00000054 + -0xb0) = dVar12 * dVar14;
                  if (dVar16 != dVar12) {
                    *(double *)(iVar3 + 0x44) = dVar12;
                    *(double *)(iVar3 + 0xa4) =
                         (*(double *)PTR_DAT_0069dbcc *
                         *(double *)(iVar3 + 0x8c) * *(double *)(iVar3 + 0x8c)) / dVar12;
                    *(double *)(iVar3 + 0x7c) = (1.0 - *(double *)(iVar3 + 0x84)) * dVar12;
                  }
                  *(double *)((int)register0x00000054 + -0xd4) = dVar14;
                  *(double *)((int)register0x00000054 + -0x30) = dVar12 * 0.5;
                  *(double *)((int)register0x00000054 + -0xf8) = dVar14;
                  *(undefined8 *)((int)register0x00000054 + -0xf0) = 0x4000000000000000;
                  FUN_000b0b80();
                  uVar4 = *(uint *)((int)register0x00000054 + 0x14);
                  dVar12 = *(double *)((int)register0x00000054 + -0x30);
                  uVar11 = 1;
                  if (uVar4 == 0) goto LAB_0069db2c;
                  dVar14 = **(double **)((int)register0x00000054 + 0x10);
                  uVar11 = uVar4 == 1;
                  if (uVar4 < 2) goto LAB_0069db20;
                  *(double *)((int)register0x00000054 + -0x30) =
                       *(double *)((int)register0x00000054 + -0xd4) +
                       *(double *)((int)register0x00000054 + -0xd4);
                  dVar16 = (*(double **)((int)register0x00000054 + 0x10))[1];
                  *(double *)((int)register0x00000054 + -0x50) =
                       *(double *)((int)register0x00000054 + -0xcc) *
                       dVar14 * *(double *)((int)register0x00000054 + -0xe8) * dVar12 +
                       *(double *)((int)register0x00000054 + -0x84);
                  *(double *)((int)register0x00000054 + -0x48) =
                       *(double *)((int)register0x00000054 + -0xcc) *
                       dVar16 * *(double *)((int)register0x00000054 + -0xe8) * dVar12 +
                       *(double *)((int)register0x00000054 + -0x8c);
                  *(undefined8 *)((int)register0x00000054 + -0x40) =
                       *(undefined8 *)((int)register0x00000054 + -0x94);
                  *(undefined8 *)((int)register0x00000054 + -0x38) =
                       *(undefined8 *)((int)register0x00000054 + -0x7c);
                  *(undefined4 *)((int)register0x00000054 + -0xf8) =
                       *(undefined4 *)((int)register0x00000054 + -0x24);
                  *(undefined1 **)((int)register0x00000054 + -0xf4) =
                       (undefined1 *)((int)register0x00000054 + -0x50);
                  *(undefined4 *)((int)register0x00000054 + -0xf0) = 4;
                  *(undefined4 *)((int)register0x00000054 + -0xec) = 4;
                  *(undefined8 *)((int)register0x00000054 + -0xe8) =
                       *(undefined8 *)((int)register0x00000054 + -0xb0);
                  k3c_internal_pkg_toolhead___Toolhead__Move();
                  *(undefined8 *)((int)register0x00000054 + -0x50) =
                       *(undefined8 *)((int)register0x00000054 + -0x84);
                  *(undefined8 *)((int)register0x00000054 + -0x48) =
                       *(undefined8 *)((int)register0x00000054 + -0x8c);
                  *(undefined8 *)((int)register0x00000054 + -0x40) =
                       *(undefined8 *)((int)register0x00000054 + -0x94);
                  *(undefined8 *)((int)register0x00000054 + -0x38) =
                       *(undefined8 *)((int)register0x00000054 + -0x7c);
                  *(undefined4 *)((int)register0x00000054 + -0xf8) =
                       *(undefined4 *)((int)register0x00000054 + -0x24);
                  *(undefined1 **)((int)register0x00000054 + -0xf4) =
                       (undefined1 *)((int)register0x00000054 + -0x50);
                  *(undefined4 *)((int)register0x00000054 + -0xf0) = 4;
                  *(undefined4 *)((int)register0x00000054 + -0xec) = 4;
                  *(undefined8 *)((int)register0x00000054 + -0xe8) =
                       *(undefined8 *)((int)register0x00000054 + -0xb0);
                  k3c_internal_pkg_toolhead___Toolhead__Move();
                  dVar14 = -*(double *)((int)register0x00000054 + -0xcc);
                  dVar12 = *(double *)(*(int *)((int)register0x00000054 + 4) + 0x20) *
                           *(double *)((int)register0x00000054 + -0x30) +
                           *(double *)((int)register0x00000054 + -0x9c);
                }
                FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
                *(undefined8 *)((int)register0x00000054 + -0x6c) =
                     *(undefined8 *)((int)register0x00000054 + -0xb8);
                *(undefined4 *)((int)register0x00000054 + -0xf8) =
                     *(undefined4 *)((int)register0x00000054 + -0x6c);
                *(undefined4 *)((int)register0x00000054 + -0xf4) =
                     *(undefined4 *)((int)register0x00000054 + -0x68);
                FUN_0008f6c0();
                *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0069db94;
                *(undefined4 *)((int)register0x00000054 + -0xc) =
                     *(undefined4 *)((int)register0x00000054 + -0xf0);
                *(undefined8 *)((int)register0x00000054 + -0x74) =
                     *(undefined8 *)((int)register0x00000054 + -0xc0);
                *(undefined4 *)((int)register0x00000054 + -0xf8) =
                     *(undefined4 *)((int)register0x00000054 + -0x74);
                *(undefined4 *)((int)register0x00000054 + -0xf4) =
                     *(undefined4 *)((int)register0x00000054 + -0x70);
                FUN_0008f6c0();
                *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0069db94;
                *(undefined4 *)((int)register0x00000054 + -4) =
                     *(undefined4 *)((int)register0x00000054 + -0xf0);
                *(undefined **)((int)register0x00000054 + -0xf8) = PTR_DAT_0069db98;
                *(undefined4 *)((int)register0x00000054 + -0xf4) = 0x31;
                *(undefined1 **)((int)register0x00000054 + -0xf0) =
                     (undefined1 *)((int)register0x00000054 + -0x10);
                *(undefined4 *)((int)register0x00000054 + -0xec) = 2;
                *(undefined4 *)((int)register0x00000054 + -0xe8) = 2;
                FUN_0013b72c();
                *(undefined4 *)((int)register0x00000054 + -0xf8) =
                     *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
                *(undefined4 *)((int)register0x00000054 + -0xf4) =
                     *(undefined4 *)((int)register0x00000054 + -0xe4);
                *(undefined4 *)((int)register0x00000054 + -0xf0) =
                     *(undefined4 *)((int)register0x00000054 + -0xe0);
                k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
                *(undefined4 *)((int)register0x00000054 + -0xf8) =
                     *(undefined4 *)((int)register0x00000054 + -0xa0);
                *(undefined4 *)((int)register0x00000054 + -0xf4) =
                     *(undefined4 *)((int)register0x00000054 + -0x1c);
                k3c_internal_pkg_util_value_IsNone();
                if (*(char *)((int)register0x00000054 + -0xf0) != '\0') goto LAB_0069dac8;
                uVar11 = *(undefined **)((int)register0x00000054 + -0xa0) == PTR_DAT_0069dbb4;
                if ((bool)uVar11) {
                  *(undefined4 *)((int)register0x00000054 + -0xf8) =
                       *(undefined4 *)((int)register0x00000054 + -0x1c);
                  k3c_internal_pkg_motion_vibration___InputShaper__Enable_shaping();
                  *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0069dbb8;
                  *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_0069dbd0;
                  *(undefined1 **)((int)register0x00000054 + -0xf8) =
                       (undefined1 *)((int)register0x00000054 + -0x18);
                  *(undefined4 *)((int)register0x00000054 + -0xf4) = 1;
                  *(undefined4 *)((int)register0x00000054 + -0xf0) = 1;
                  k3c_internal_pkg_logger_Debug();
LAB_0069dac8:
                  *(undefined4 *)((int)register0x00000054 + -0xf8) =
                       *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
                  *(undefined **)((int)register0x00000054 + -0xf4) = PTR_DAT_0069dbd4;
                  *(undefined4 *)((int)register0x00000054 + -0xf0) = 0x22;
                  k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
                  *(undefined4 *)((int)register0x00000054 + -0xf8) =
                       *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
                  *(undefined **)((int)register0x00000054 + -0xf4) = PTR_DAT_0069dbd8;
                  *(undefined4 *)((int)register0x00000054 + -0xf0) = 0x22;
                  k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
                  return;
                }
                *(undefined **)((int)register0x00000054 + -0xf8) =
                     *(undefined **)((int)register0x00000054 + -0xa0);
                *(undefined **)((int)register0x00000054 + -0xf4) = PTR_DAT_0069dbb4;
                *(undefined **)((int)register0x00000054 + -0xf0) = PTR_DAT_0069dbdc;
                FUN_000209b4();
LAB_0069db20:
                FUN_0009dbd4(1,1);
LAB_0069db2c:
                uVar13 = FUN_0009dbd4(0,0);
              }
              else {
                uVar13 = CONCAT44(PTR_DAT_0069dbb4,*(undefined **)((int)register0x00000054 + -0xa0))
                ;
                uVar11 = 0;
                if (*(undefined **)((int)register0x00000054 + -0xa0) == PTR_DAT_0069dbb4) {
                  *(undefined4 *)((int)register0x00000054 + -0xf8) =
                       *(undefined4 *)((int)register0x00000054 + -0x1c);
                  k3c_internal_pkg_motion_vibration___InputShaper__Disable_shaping();
                  *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0069dbb8;
                  *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_0069dbbc;
                  *(undefined1 **)((int)register0x00000054 + -0xf8) =
                       (undefined1 *)((int)register0x00000054 + -0x18);
                  *(undefined4 *)((int)register0x00000054 + -0xf4) = 1;
                  *(undefined4 *)((int)register0x00000054 + -0xf0) = 1;
                  k3c_internal_pkg_logger_Debug();
                  uVar6 = *(undefined4 *)((int)register0x00000054 + -0xa0);
                  uVar9 = *(undefined4 *)((int)register0x00000054 + -0x1c);
                  goto LAB_0069d7a8;
                }
              }
              *(undefined8 *)((int)register0x00000054 + -0xf8) = uVar13;
              *(undefined **)((int)register0x00000054 + -0xf0) = PTR_DAT_0069dbdc;
              FUN_000209b4();
            }
            FUN_0009dbd4(3,3);
          }
          FUN_0009dbd4(2,2);
        }
        FUN_0009dbd4(1,1);
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xfc);
      if ((bool)uVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x69db88;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.NewResonanceTester @ 0069dbe0 (size 2220) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_vibration_NewResonanceTester(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *extraout_r1;
  int extraout_r1_00;
  undefined4 uVar5;
  code *pcVar6;
  int extraout_r1_01;
  uint uVar7;
  int *piVar8;
  int *extraout_r2;
  undefined4 uVar9;
  int extraout_r2_00;
  undefined *puVar10;
  undefined *extraout_r2_01;
  int iVar11;
  int extraout_r3;
  int iVar12;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  bool bVar14;
  undefined8 uVar15;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar13 = (undefined1 *)((int)register0x00000054 + -100);
      *(undefined4 *)((int)register0x00000054 + -100) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0069e3dc;
      FUN_00022cf8();
      piVar4 = *(int **)((int)register0x00000054 + -0x5c);
      piVar8 = *(int **)((int)register0x00000054 + 4);
      iVar11 = *piVar8;
      if (*(int *)PTR_DAT_0069e3e0 != 0) {
        FUN_0009db54();
        *unaff_r8 = extraout_r3;
        piVar4 = extraout_r1;
        piVar8 = extraout_r2;
        iVar11 = extraout_r3;
      }
      *(int **)((int)register0x00000054 + -0x14) = piVar4;
      *piVar4 = iVar11;
      *(int **)((int)register0x00000054 + -0x60) = piVar8;
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0069e3e4;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 10;
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0069e3e8;
      *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_0069e3ec;
      *(undefined8 *)((int)register0x00000054 + -0x4c) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x44) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x3c) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x34) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x2c) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
      *(undefined8 *)(*(int *)((int)register0x00000054 + -0x14) + 8) =
           *(undefined8 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + 4);
      k3c_internal_pkg_motion_vibration_NewVibrationPulseTest();
      iVar11 = *(int *)((int)register0x00000054 + -0x5c);
      if (*(int *)PTR_DAT_0069e3e0 == 0) {
        iVar1 = *(int *)((int)register0x00000054 + -0x14);
      }
      else {
        FUN_0009db64();
        *unaff_r8 = extraout_r1_00;
        iVar1 = *(int *)((int)register0x00000054 + -0x14);
        unaff_r8[1] = *(int *)(iVar1 + 0x10);
        iVar11 = extraout_r1_00;
      }
      *(int *)(iVar1 + 0x10) = iVar11;
      uVar5 = *(undefined4 *)PTR_DAT_0069e3f0;
      uVar9 = *(undefined4 *)PTR_DAT_0069e3f4;
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x5c) =
           PTR_s_accel_chip_xaccel_chip_yBED_MESH_008262d0_0x49d_0069e3f8;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 0xc;
      *(undefined4 *)((int)register0x00000054 + -0x54) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x50) = uVar9;
      *(undefined1 *)((int)register0x00000054 + -0x4c) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Get();
      if (*(int *)((int)register0x00000054 + -0x48) == 0) {
        uVar5 = *(undefined4 *)PTR_DAT_0069e3f0;
        uVar9 = *(undefined4 *)PTR_DAT_0069e3f4;
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0069e414;
        *(undefined4 *)((int)register0x00000054 + -0x58) = 10;
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar9;
        *(undefined1 *)((int)register0x00000054 + -0x4c) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Get();
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        k3c_internal_pkg_util_cast_ToStringE();
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        FUN_00151ce4();
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0069e40c;
        FUN_00022cf8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x5c);
        puVar2[1] = 2;
        *puVar2 = PTR_DAT_0082048e_2_0069e410;
        puVar2[3] = *(undefined4 *)((int)register0x00000054 + -0x1c);
        if (*(int *)PTR_DAT_0069e3e0 == 0) {
          iVar11 = *(int *)((int)register0x00000054 + -4);
          iVar1 = *(int *)((int)register0x00000054 + -0x14);
        }
        else {
          puVar2 = (undefined4 *)FUN_0009db74();
          iVar11 = *(int *)((int)register0x00000054 + -4);
          *unaff_r8 = iVar11;
          unaff_r8[1] = (int)puVar2;
          iVar1 = *(int *)((int)register0x00000054 + -0x14);
          unaff_r8[2] = *(int *)(iVar1 + 0x14);
        }
        puVar2[2] = iVar11;
        *(undefined4 *)(iVar1 + 0x18) = 1;
        *(undefined4 *)(iVar1 + 0x1c) = 1;
        *(undefined4 **)(iVar1 + 0x14) = puVar2;
        goto LAB_0069e04c;
      }
      uVar5 = *(undefined4 *)PTR_DAT_0069e3f0;
      uVar9 = *(undefined4 *)PTR_DAT_0069e3f4;
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x5c) =
           PTR_s_accel_chip_xaccel_chip_yBED_MESH_008262d0_0x49d_0069e3f8;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 0xc;
      *(undefined4 *)((int)register0x00000054 + -0x54) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x50) = uVar9;
      *(undefined1 *)((int)register0x00000054 + -0x4c) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Get();
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      k3c_internal_pkg_util_cast_ToStringE();
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      FUN_00151ce4();
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      uVar5 = *(undefined4 *)PTR_DAT_0069e3f0;
      uVar9 = *(undefined4 *)PTR_DAT_0069e3f4;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x5c) =
           PTR_s_accel_chip_yBED_MESH_MAPprofile__008262d0_0x4a9_0069e3fc;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 0xc;
      *(undefined4 *)((int)register0x00000054 + -0x54) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x50) = uVar9;
      *(undefined1 *)((int)register0x00000054 + -0x4c) = 1;
      k3c_internal_pkg_printer___ConfigWrapper__Get();
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      k3c_internal_pkg_util_cast_ToStringE();
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      FUN_00151ce4();
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0069e400;
      FUN_00022cf8();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x5c);
      uVar15 = CONCAT44(1,puVar2);
      puVar2[1] = 1;
      *puVar2 = PTR_DAT_0069e404;
      puVar2[3] = *(undefined4 *)((int)register0x00000054 + -0x1c);
      if (*(int *)PTR_DAT_0069e3e0 == 0) {
        iVar11 = *(int *)((int)register0x00000054 + -4);
      }
      else {
        uVar15 = FUN_0009db54();
        iVar11 = *(int *)((int)register0x00000054 + -4);
        *unaff_r8 = iVar11;
      }
      iVar1 = (int)uVar15;
      *(int *)(iVar1 + 8) = iVar11;
      *(int *)(iVar1 + 0x14) = (int)((ulonglong)uVar15 >> 0x20);
      *(undefined **)(iVar1 + 0x10) = PTR_DAT_0069e408;
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)((int)register0x00000054 + -0x20);
      if (*(int *)PTR_DAT_0069e3e0 == 0) {
        iVar11 = *(int *)((int)register0x00000054 + -8);
        iVar12 = *(int *)((int)register0x00000054 + -0x14);
      }
      else {
        iVar1 = FUN_0009db74();
        iVar11 = *(int *)((int)register0x00000054 + -8);
        *unaff_r8 = iVar11;
        unaff_r8[1] = iVar1;
        iVar12 = *(int *)((int)register0x00000054 + -0x14);
        unaff_r8[2] = *(int *)(iVar12 + 0x14);
      }
      *(int *)(iVar1 + 0x18) = iVar11;
      *(undefined4 *)(iVar12 + 0x18) = 2;
      *(undefined4 *)(iVar12 + 0x1c) = 2;
      *(int *)(iVar12 + 0x14) = iVar1;
      iVar11 = *(int *)(iVar12 + 0x14);
      iVar1 = *(int *)(iVar11 + 0xc);
      if (*(int *)(iVar11 + 0x1c) != iVar1) goto LAB_0069e04c;
      uVar5 = *(undefined4 *)(iVar11 + 0x18);
      *(undefined4 *)((int)register0x00000054 + -0x60) = *(undefined4 *)(iVar11 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar5;
      *(int *)((int)register0x00000054 + -0x58) = iVar1;
      FUN_00018250();
      if (*(char *)((int)register0x00000054 + -0x54) == '\0') goto LAB_0069e04c;
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0069e40c;
      FUN_00022cf8();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x5c);
      puVar2[1] = 2;
      *puVar2 = PTR_DAT_0082048e_2_0069e410;
      iVar11 = *(int *)((int)register0x00000054 + -0x14);
      uVar15 = CONCAT44(iVar11,puVar2);
      bVar14 = *(int *)(iVar11 + 0x18) == 0;
      if (!bVar14) {
        iVar1 = *(int *)(*(int *)(iVar11 + 0x14) + 8);
        puVar2[3] = *(undefined4 *)(*(int *)(iVar11 + 0x14) + 0xc);
        if (*(int *)PTR_DAT_0069e3e0 != 0) {
          uVar15 = FUN_0009db74();
          *unaff_r8 = extraout_r2_00;
          unaff_r8[1] = (int)uVar15;
          unaff_r8[2] = *(int *)((int)((ulonglong)uVar15 >> 0x20) + 0x14);
          iVar1 = extraout_r2_00;
        }
        iVar11 = (int)((ulonglong)uVar15 >> 0x20);
        *(int *)((int)uVar15 + 8) = iVar1;
        *(undefined4 *)(iVar11 + 0x18) = 1;
        *(undefined4 *)(iVar11 + 0x1c) = 1;
        *(int *)(iVar11 + 0x14) = (int)uVar15;
LAB_0069e04c:
        uVar5 = *(undefined4 *)PTR_DAT_0069e3f0;
        uVar9 = *(undefined4 *)PTR_DAT_0069e3f4;
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x5c) =
             PTR_s_max_smoothingMAX_SMOOTHINGprobed_008262d0_0x1417_0069e418;
        *(undefined4 *)((int)register0x00000054 + -0x58) = 0xd;
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar9;
        *(undefined8 *)((int)register0x00000054 + -0x4c) = *(undefined8 *)PTR_DAT_0069e41c;
        *(undefined8 *)((int)register0x00000054 + -0x44) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x3c) = 0;
        *(undefined8 *)((int)register0x00000054 + -0x34) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x2c) = 1;
        k3c_internal_pkg_printer___ConfigWrapper__Getfloat();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x14);
        *(undefined8 *)(puVar2 + 8) = *(undefined8 *)((int)register0x00000054 + -0x28);
        pcVar6 = (code *)**(undefined4 **)PTR_DAT_0069e420;
        *(undefined4 *)((int)register0x00000054 + -0x60) = *puVar2;
        (*pcVar6)();
        iVar11 = *(int *)((int)register0x00000054 + -0x5c);
        if (*(int *)PTR_DAT_0069e3e0 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -0x14);
        }
        else {
          FUN_0009db64();
          *unaff_r8 = extraout_r1_01;
          iVar1 = *(int *)((int)register0x00000054 + -0x14);
          unaff_r8[1] = *(int *)(iVar1 + 4);
          iVar11 = extraout_r1_01;
        }
        *(int *)(iVar1 + 4) = iVar11;
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0069e424;
        FUN_00022cf8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x5c);
        *puVar2 = 
        PTR_k3c_internal_pkg_motion_vibration___ResonanceTester__cmd_MEASURE_AXES_NOISE_fm_0069e428;
        if (*(int *)PTR_DAT_0069e3e0 == 0) {
          iVar11 = *(int *)((int)register0x00000054 + -0x14);
        }
        else {
          puVar2 = (undefined4 *)FUN_0009db54();
          iVar11 = *(int *)((int)register0x00000054 + -0x14);
          *unaff_r8 = iVar11;
        }
        puVar2[1] = iVar11;
        *(undefined4 *)((int)register0x00000054 + -0x60) = *(undefined4 *)(iVar11 + 4);
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0069e42c;
        *(undefined4 *)((int)register0x00000054 + -0x58) = 0x12;
        *(undefined4 **)((int)register0x00000054 + -0x54) = puVar2;
        *(undefined1 *)((int)register0x00000054 + -0x50) = 0;
        *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0069e430;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 0x31;
        k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0069e424;
        FUN_00022cf8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x5c);
        *puVar2 = 
        PTR_k3c_internal_pkg_motion_vibration___ResonanceTester__cmd_TEST_RESONANCES_fm_0069e434;
        if (*(int *)PTR_DAT_0069e3e0 == 0) {
          iVar11 = *(int *)((int)register0x00000054 + -0x14);
        }
        else {
          puVar2 = (undefined4 *)FUN_0009db54();
          iVar11 = *(int *)((int)register0x00000054 + -0x14);
          *unaff_r8 = iVar11;
        }
        puVar2[1] = iVar11;
        *(undefined4 *)((int)register0x00000054 + -0x60) = *(undefined4 *)(iVar11 + 4);
        *(undefined **)((int)register0x00000054 + -0x5c) =
             PTR_s_TEST_RESONANCESTesting_axis__s20_008262d0_0x2fe8_0069e438;
        *(undefined4 *)((int)register0x00000054 + -0x58) = 0xf;
        *(undefined4 **)((int)register0x00000054 + -0x54) = puVar2;
        *(undefined1 *)((int)register0x00000054 + -0x50) = 0;
        *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0069e43c;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 0x2b;
        k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0069e424;
        FUN_00022cf8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x5c);
        *puVar2 = 
        PTR_k3c_internal_pkg_motion_vibration___ResonanceTester__cmd_TEST_RESONANCES_NO_CHIP_fm_0069e440
        ;
        if (*(int *)PTR_DAT_0069e3e0 == 0) {
          iVar11 = *(int *)((int)register0x00000054 + -0x14);
        }
        else {
          puVar2 = (undefined4 *)FUN_0009db54();
          iVar11 = *(int *)((int)register0x00000054 + -0x14);
          *unaff_r8 = iVar11;
        }
        puVar2[1] = iVar11;
        *(undefined4 *)((int)register0x00000054 + -0x60) = *(undefined4 *)(iVar11 + 4);
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0069e444;
        *(undefined4 *)((int)register0x00000054 + -0x58) = 0x1b;
        *(undefined4 **)((int)register0x00000054 + -0x54) = puVar2;
        *(undefined1 *)((int)register0x00000054 + -0x50) = 0;
        *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0069e43c;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 0x2b;
        k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0069e424;
        FUN_00022cf8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x5c);
        *puVar2 = 
        PTR_k3c_internal_pkg_motion_vibration___ResonanceTester__cmd_SHAPER_CALIBRATE_fm_0069e448;
        if (*(int *)PTR_DAT_0069e3e0 == 0) {
          iVar11 = *(int *)((int)register0x00000054 + -0x14);
        }
        else {
          puVar2 = (undefined4 *)FUN_0009db54();
          iVar11 = *(int *)((int)register0x00000054 + -0x14);
          *unaff_r8 = iVar11;
        }
        puVar2[1] = iVar11;
        *(undefined4 *)((int)register0x00000054 + -0x60) = *(undefined4 *)(iVar11 + 4);
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0069e44c;
        *(undefined4 *)((int)register0x00000054 + -0x58) = 0x10;
        *(undefined4 **)((int)register0x00000054 + -0x54) = puVar2;
        *(undefined1 *)((int)register0x00000054 + -0x50) = 0;
        *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0069e450;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 0x3a;
        k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             **(undefined4 **)((int)register0x00000054 + -0x14);
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0069e424;
        FUN_00022cf8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x5c);
        *puVar2 = PTR_k3c_internal_pkg_motion_vibration___ResonanceTester__connect_fm_0069e454;
        if (*(int *)PTR_DAT_0069e3e0 == 0) {
          iVar11 = *(int *)((int)register0x00000054 + -0x14);
        }
        else {
          puVar2 = (undefined4 *)FUN_0009db54();
          iVar11 = *(int *)((int)register0x00000054 + -0x14);
          *unaff_r8 = iVar11;
        }
        *(undefined4 **)((int)register0x00000054 + -0xc) = puVar2;
        puVar2[1] = iVar11;
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x18) + 0x24);
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0069e458;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar5;
        *(undefined **)((int)register0x00000054 + -0x58) =
             PTR_s_project_connectlistening_on__sWe_008262d0_0x2a57_0069e45c;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 0xf;
        FUN_00093560();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x50);
        iVar11 = puVar2[1];
        uVar3 = puVar2[2];
        puVar10 = (undefined *)*puVar2;
        if (*(char *)((int)register0x00000054 + -0x4c) == '\0') {
          uVar3 = 0;
          iVar11 = 0;
          puVar10 = PTR_DAT_0069e460;
        }
        uVar7 = iVar11 + 1;
        if (uVar3 < uVar7) {
          *(undefined **)((int)register0x00000054 + -0x60) = puVar10;
          *(uint *)((int)register0x00000054 + -0x5c) = uVar7;
          *(uint *)((int)register0x00000054 + -0x58) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x54) = 1;
          *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_0069e464;
          FUN_000987f4();
          puVar10 = *(undefined **)((int)register0x00000054 + -0x4c);
          uVar7 = *(uint *)((int)register0x00000054 + -0x48);
          uVar3 = *(uint *)((int)register0x00000054 + -0x44);
        }
        *(uint *)((int)register0x00000054 + -0x1c) = uVar7;
        *(uint *)((int)register0x00000054 + -0x20) = uVar3;
        if (*(int *)PTR_DAT_0069e3e0 == 0) {
          iVar11 = *(int *)((int)register0x00000054 + -0xc);
        }
        else {
          FUN_0009db64();
          iVar11 = *(int *)((int)register0x00000054 + -0xc);
          *unaff_r8 = iVar11;
          unaff_r8[1] = *(int *)(extraout_r2_01 + (uVar7 - 1) * 4);
          puVar10 = extraout_r2_01;
        }
        *(undefined **)((int)register0x00000054 + -0x10) = puVar10;
        *(int *)(puVar10 + (uVar7 - 1) * 4) = iVar11;
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x18) + 0x24);
        *(undefined4 *)((int)register0x00000054 + -0x60) = _UNK_0069e51c;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x58) = _UNK_0069e520;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 0xf;
        FUN_00093a08();
        piVar4 = *(int **)((int)register0x00000054 + -0x50);
        piVar4[1] = *(int *)((int)register0x00000054 + -0x1c);
        piVar4[2] = *(int *)((int)register0x00000054 + -0x20);
        if (*_UNK_0069e524 == 0) {
          iVar11 = *(int *)((int)register0x00000054 + -0x10);
        }
        else {
          piVar4 = (int *)FUN_0009db64();
          iVar11 = *(int *)((int)register0x00000054 + -0x10);
          *unaff_r8 = iVar11;
          unaff_r8[1] = *piVar4;
        }
        *piVar4 = iVar11;
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
                    /* WARNING: Could not recover jumptable at 0x0069e4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -100))();
        return;
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -100);
      if (bVar14) {
        register0x00000054 = (BADSPACEBASE *)puVar13;
      }
    }
    unaff_lr = 0x69e514;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*ResonanceTester).connect @ 0069e528 (size 464) */

void k3c_internal_pkg_motion_vibration___ResonanceTester__connect(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_r1;
  uint uVar3;
  uint extraout_r2;
  int iVar4;
  int extraout_r3;
  int extraout_r3_00;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  bool bVar10;
  undefined8 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x50) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 4);
      iVar4 = *(int *)(iVar1 + 0x14);
      iVar5 = *(int *)(iVar1 + 0x18);
      while( true ) {
        if (iVar5 < 1) {
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
          return;
        }
        *(int *)((int)register0x00000054 + -0x24) = iVar5;
        *(int *)((int)register0x00000054 + -4) = iVar4;
        FUN_0009e2f8(iVar1,iVar4,(undefined1 *)((int)register0x00000054 + -0x20));
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
        k3c_internal_pkg_printer___Printer__Lookup_object();
        bVar10 = *(int *)((int)register0x00000054 + -0x38) == 0;
        if (bVar10) break;
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_0069e6fc;
        *(int *)((int)register0x00000054 + -0x48) = *(int *)((int)register0x00000054 + -0x38);
        FUN_00020dac();
        iVar1 = *(int *)((int)register0x00000054 + 4);
        uVar2 = *(uint *)(iVar1 + 0x34);
        uVar3 = *(int *)(iVar1 + 0x30) + 1;
        iVar5 = *(int *)((int)register0x00000054 + -0x20);
        iVar6 = *(int *)((int)register0x00000054 + -0x1c);
        iVar4 = *(int *)(iVar1 + 0x2c);
        iVar7 = *(int *)((int)register0x00000054 + -0x44);
        if (uVar2 < uVar3) {
          *(int *)((int)register0x00000054 + -0xc) = iVar7;
          *(int *)((int)register0x00000054 + -0x28) = iVar6;
          *(int *)((int)register0x00000054 + -0x10) = iVar5;
          *(int *)((int)register0x00000054 + -0x4c) = iVar4;
          *(uint *)((int)register0x00000054 + -0x48) = uVar3;
          *(uint *)((int)register0x00000054 + -0x44) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -0x40) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_0069e700;
          FUN_000987f4();
          iVar4 = *(int *)((int)register0x00000054 + -0x38);
          uVar3 = *(uint *)((int)register0x00000054 + -0x34);
          iVar1 = *(int *)((int)register0x00000054 + 4);
          *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)((int)register0x00000054 + -0x30);
          if (*DAT_0069e704 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r1;
            unaff_r8[1] = *(int *)(extraout_r3 + 0x2c);
            iVar4 = extraout_r1;
            uVar3 = extraout_r2;
            iVar1 = extraout_r3;
          }
          *(int *)(iVar1 + 0x2c) = iVar4;
          iVar5 = *(int *)((int)register0x00000054 + -0x10);
          iVar6 = *(int *)((int)register0x00000054 + -0x28);
          iVar7 = *(int *)((int)register0x00000054 + -0xc);
        }
        *(uint *)(iVar1 + 0x30) = uVar3;
        iVar8 = uVar3 - 1;
        unaff_r8 = (int *)(iVar4 + iVar8 * 0x10);
        uVar11 = CONCAT44(unaff_r8,iVar1);
        unaff_r8[1] = iVar6;
        unaff_r8[2] = iVar7;
        if (*DAT_0069e704 == 0) {
          iVar6 = *(int *)((int)register0x00000054 + -8);
        }
        else {
          uVar11 = FUN_0009db84(iVar1,unaff_r8);
          *unaff_r8 = extraout_r3_00;
          unaff_r8[1] = *(int *)(iVar4 + iVar8 * 0x10);
          iVar6 = *(int *)((int)register0x00000054 + -8);
          unaff_r8[2] = iVar6;
          unaff_r8[3] = *(int *)((int)((ulonglong)uVar11 >> 0x20) + 0xc);
          iVar5 = extraout_r3_00;
        }
        iVar1 = (int)uVar11;
        *(int *)(iVar4 + iVar8 * 0x10) = iVar5;
        *(int *)((int)((ulonglong)uVar11 >> 0x20) + 0xc) = iVar6;
        iVar4 = *(int *)((int)register0x00000054 + -4) + 0x10;
        iVar5 = *(int *)((int)register0x00000054 + -0x24) + -1;
      }
      *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_0069e708;
      param_1 = FUN_00020b18();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x50);
      if (bVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x69e6f4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*ResonanceTester)._run_test @ 0069e70c (size 3388) */

void k3c_internal_pkg_motion_vibration___ResonanceTester___run_test(undefined4 param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int extraout_r2;
  uint extraout_r2_00;
  undefined4 uVar10;
  uint uVar11;
  int extraout_r3;
  undefined4 extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  undefined4 uVar12;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  undefined1 uVar14;
  undefined8 uVar15;
  
code_r0x0069e70c:
  if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x104)) {
    puVar13 = (undefined1 *)((int)register0x00000054 + -0x184);
    *(undefined4 *)((int)register0x00000054 + -0x184) = unaff_lr;
    pcVar2 = *(code **)*DAT_0069ef34;
    *(undefined4 *)((int)register0x00000054 + -0x180) =
         **(undefined4 **)((int)register0x00000054 + 4);
    (*pcVar2)();
    *(undefined4 *)((int)register0x00000054 + -0xd4) =
         *(undefined4 *)((int)register0x00000054 + -0x17c);
    FUN_000908bc();
    uVar3 = *(undefined4 *)((int)register0x00000054 + -0x180);
    *(undefined4 *)((int)register0x00000054 + -0xb4) = uVar3;
    iVar6 = 0;
    while (iVar6 < *(int *)((int)register0x00000054 + 0x10)) {
      *(int *)((int)register0x00000054 + -0xd8) = iVar6;
      uVar10 = *(undefined4 *)(*(int *)((int)register0x00000054 + 0xc) + iVar6 * 4);
      *(undefined4 *)((int)register0x00000054 + -0x180) = DAT_0069ef38;
      *(undefined4 *)((int)register0x00000054 + -0x17c) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x178) = uVar10;
      FUN_00092c70();
      puVar4 = *(undefined4 **)((int)register0x00000054 + -0x174);
      *puVar4 = 0;
      if (*DAT_0069ef3c != 0) {
        puVar4 = (undefined4 *)FUN_0009db54(puVar4,0,puVar4[1]);
        *unaff_r8 = extraout_r2;
      }
      puVar4[1] = 0;
      uVar3 = *(undefined4 *)((int)register0x00000054 + -0xb4);
      iVar6 = *(int *)((int)register0x00000054 + -0xd8) + 1;
    }
    *(undefined4 *)((int)register0x00000054 + -0x180) =
         *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x17c) = *(undefined4 *)((int)register0x00000054 + 8)
    ;
    k3c_internal_pkg_motion_vibration___VibrationPulseTest__Prepare_test();
    *(undefined4 *)((int)register0x00000054 + -0x80) =
         *(undefined4 *)((int)register0x00000054 + 0x30);
    *(undefined4 *)((int)register0x00000054 + -0x7c) =
         *(undefined4 *)((int)register0x00000054 + 0x34);
    *(undefined4 *)((int)register0x00000054 + -0x78) =
         *(undefined4 *)((int)register0x00000054 + 0x38);
    *(undefined4 *)((int)register0x00000054 + -0x180) = DAT_0069ef40;
    *(undefined1 **)((int)register0x00000054 + -0x17c) =
         (undefined1 *)((int)register0x00000054 + -0x80);
    k3c_internal_pkg_util_value_IsNone();
    if (*(char *)((int)register0x00000054 + -0x178) == '\0') {
      *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x88) =
           *(undefined4 *)((int)register0x00000054 + 0x34);
      *(undefined4 *)((int)register0x00000054 + -0x84) =
           *(undefined4 *)((int)register0x00000054 + 0x38);
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           *(undefined4 *)((int)register0x00000054 + 0x30);
      puVar4 = (undefined4 *)((int)register0x00000054 + -0x8c);
      iVar6 = 1;
    }
    else {
      puVar4 = *(undefined4 **)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x10) + 0x30);
      iVar6 = *(int *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x10) + 0x34);
    }
    *(int *)((int)register0x00000054 + -0x14c) = iVar6;
    do {
      uVar9 = DAT_0069ef44;
      if (iVar6 < 1) {
        *(undefined4 *)((int)register0x00000054 + 0x3c) =
             *(undefined4 *)((int)register0x00000054 + -0xb4);
        return;
      }
      *(int *)((int)register0x00000054 + -0xd8) = iVar6;
      *(undefined4 **)((int)register0x00000054 + -0x28) = puVar4;
      uVar3 = puVar4[1];
      *(undefined4 *)((int)register0x00000054 + -0x13c) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -200) = *puVar4;
      *(undefined4 *)((int)register0x00000054 + -0x138) = puVar4[2];
      *(uint *)((int)register0x00000054 + -0x180) = DAT_0069ef44;
      *(undefined4 *)((int)register0x00000054 + -0x17c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x178) = uVar3;
      FUN_000986b8();
      iVar6 = *(int *)((int)register0x00000054 + -0x174);
      uVar3 = *(undefined4 *)((int)register0x00000054 + -0x13c);
      uVar11 = 0;
      iVar7 = 0;
      while (iVar7 < *(int *)((int)register0x00000054 + -0x13c)) {
        *(int *)((int)register0x00000054 + -0xdc) = iVar7;
        *(undefined4 *)((int)register0x00000054 + -0x134) = uVar3;
        *(int *)((int)register0x00000054 + -0xc0) = iVar6;
        *(undefined8 *)((int)register0x00000054 + -0x104) =
             *(undefined8 *)(*(int *)((int)register0x00000054 + -200) + iVar7 * 8);
        *(uint *)((int)register0x00000054 + -0xe0) = uVar11 + 1;
        *(undefined4 *)((int)register0x00000054 + -0x180) =
             *(undefined4 *)((int)register0x00000054 + -0x104);
        *(undefined4 *)((int)register0x00000054 + -0x17c) =
             *(undefined4 *)((int)register0x00000054 + -0x100);
        FUN_0008f6c0();
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x178);
        uVar8 = *(uint *)((int)register0x00000054 + -0x134);
        uVar11 = *(uint *)((int)register0x00000054 + -0xe0);
        if (uVar8 < uVar11) {
          *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x180) =
               *(undefined4 *)((int)register0x00000054 + -0xc0);
          *(uint *)((int)register0x00000054 + -0x17c) = uVar11;
          *(uint *)((int)register0x00000054 + -0x178) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x174) = 1;
          *(uint *)((int)register0x00000054 + -0x170) = DAT_0069ef44;
          FUN_000987f4();
          iVar6 = *(int *)((int)register0x00000054 + -0x16c);
          uVar11 = *(uint *)((int)register0x00000054 + -0x168);
          uVar8 = *(uint *)((int)register0x00000054 + -0x164);
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x2c);
        }
        else {
          iVar6 = *(int *)((int)register0x00000054 + -0xc0);
        }
        uVar9 = DAT_0069ef48;
        uVar15 = CONCAT44(uVar8,uVar3);
        *(uint *)(iVar6 + (uVar11 - 1) * 8) = DAT_0069ef48;
        iVar7 = iVar6 + (uVar11 - 1) * 8;
        if (*DAT_0069ef3c != 0) {
          uVar15 = FUN_0009db64();
          *unaff_r8 = (int)uVar15;
          unaff_r8[1] = *(int *)(iVar7 + 4);
          uVar11 = extraout_r2_00;
          iVar6 = extraout_r3;
        }
        uVar3 = (undefined4)((ulonglong)uVar15 >> 0x20);
        *(int *)(iVar7 + 4) = (int)uVar15;
        iVar7 = *(int *)((int)register0x00000054 + -0xdc) + 1;
      }
      uVar15 = *(undefined8 *)(*(int *)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x180) =
           *(undefined4 *)((int)register0x00000054 + -0xd4);
      *(int *)((int)register0x00000054 + -0x17c) = iVar6;
      *(uint *)((int)register0x00000054 + -0x178) = uVar11;
      *(undefined4 *)((int)register0x00000054 + -0x174) = uVar3;
      *(undefined8 *)((int)register0x00000054 + -0x170) = uVar15;
      k3c_internal_pkg_toolhead___Toolhead__Manual_move();
      if (*(int *)((int)register0x00000054 + -0x14c) < 2) {
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + 0x30);
        *(undefined4 *)((int)register0x00000054 + -0x94) =
             *(undefined4 *)((int)register0x00000054 + 0x34);
        *(undefined4 *)((int)register0x00000054 + -0x90) =
             *(undefined4 *)((int)register0x00000054 + 0x38);
        *(undefined4 *)((int)register0x00000054 + -0x180) = DAT_0069ef40;
        *(undefined1 **)((int)register0x00000054 + -0x17c) =
             (undefined1 *)((int)register0x00000054 + -0x98);
        k3c_internal_pkg_util_value_IsNone();
        bVar1 = *(byte *)((int)register0x00000054 + -0x178) ^ 1;
      }
      else {
        bVar1 = 1;
      }
      if (bVar1 != 0) {
        FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x5c));
        uVar14 = 1;
        if (*(int *)((int)register0x00000054 + -0x13c) == 0) goto LAB_0069f460;
        *(undefined8 *)((int)register0x00000054 + -0x10c) =
             **(undefined8 **)((int)register0x00000054 + -200);
        *(undefined4 *)((int)register0x00000054 + -0x180) =
             *(undefined4 *)((int)register0x00000054 + -0x10c);
        *(undefined4 *)((int)register0x00000054 + -0x17c) =
             *(undefined4 *)((int)register0x00000054 + -0x108);
        FUN_0008f6c0();
        *(uint *)((int)register0x00000054 + -0x5c) = DAT_0069ef48;
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x178);
        uVar14 = *(uint *)((int)register0x00000054 + -0x13c) == 1;
        if (*(uint *)((int)register0x00000054 + -0x13c) < 2) goto LAB_0069f454;
        *(undefined8 *)((int)register0x00000054 + -0x114) =
             *(undefined8 *)(*(int *)((int)register0x00000054 + -200) + 8);
        *(undefined4 *)((int)register0x00000054 + -0x180) =
             *(undefined4 *)((int)register0x00000054 + -0x114);
        *(undefined4 *)((int)register0x00000054 + -0x17c) =
             *(undefined4 *)((int)register0x00000054 + -0x110);
        FUN_0008f6c0();
        *(uint *)((int)register0x00000054 + -0x54) = DAT_0069ef48;
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x178);
        uVar14 = *(uint *)((int)register0x00000054 + -0x13c) == 2;
        if (*(uint *)((int)register0x00000054 + -0x13c) < 3) goto LAB_0069f448;
        *(undefined8 *)((int)register0x00000054 + -0x11c) =
             *(undefined8 *)(*(int *)((int)register0x00000054 + -200) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x180) =
             *(undefined4 *)((int)register0x00000054 + -0x11c);
        *(undefined4 *)((int)register0x00000054 + -0x17c) =
             *(undefined4 *)((int)register0x00000054 + -0x118);
        FUN_0008f6c0();
        *(uint *)((int)register0x00000054 + -0x4c) = DAT_0069ef48;
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x178);
        *(undefined4 *)((int)register0x00000054 + -0x180) = DAT_0069ef4c;
        *(undefined4 *)((int)register0x00000054 + -0x17c) = 0x20;
        *(undefined1 **)((int)register0x00000054 + -0x178) =
             (undefined1 *)((int)register0x00000054 + -0x5c);
        *(undefined4 *)((int)register0x00000054 + -0x174) = 3;
        *(undefined4 *)((int)register0x00000054 + -0x170) = 3;
        k3c_internal_pkg_logger_Debugf();
      }
      iVar6 = 0;
      while (iVar6 < *(int *)((int)register0x00000054 + 0x10)) {
        *(int *)((int)register0x00000054 + -0xdc) = iVar6;
        *(undefined4 *)((int)register0x00000054 + -0xb0) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 0xc) + iVar6 * 4);
        *(undefined4 *)((int)register0x00000054 + -0x180) =
             *(undefined4 *)((int)register0x00000054 + -0xd4);
        k3c_internal_pkg_toolhead___Toolhead__Wait_moves();
        *(undefined4 *)((int)register0x00000054 + -0x180) =
             *(undefined4 *)((int)register0x00000054 + -0xd4);
        *(undefined8 *)((int)register0x00000054 + -0x17c) = 0x3fe0000000000000;
        k3c_internal_pkg_toolhead___Toolhead__Dwell();
        if (1 < *(int *)((int)register0x00000054 + 0x10)) {
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0xb0);
          uVar3 = puVar4[1];
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x6c),puVar4,*puVar4);
          uVar9 = DAT_0069ef50;
          *(uint *)((int)register0x00000054 + -0x6c) = DAT_0069ef50;
          *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_0069ef54;
          *(undefined4 *)((int)register0x00000054 + -0x180) = extraout_r3_00;
          *(undefined4 *)((int)register0x00000054 + -0x17c) = uVar3;
          FUN_0008f77c();
          *(uint *)((int)register0x00000054 + -100) = DAT_0069ef50;
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + -0x178);
          *(undefined1 **)((int)register0x00000054 + -0x180) =
               (undefined1 *)((int)register0x00000054 + -0x6c);
          *(undefined4 *)((int)register0x00000054 + -0x17c) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x178) = 2;
          k3c_internal_pkg_logger_Debug();
        }
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + 0x24);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + 0x28);
        *(undefined4 *)((int)register0x00000054 + -0x9c) =
             *(undefined4 *)((int)register0x00000054 + 0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x180) = DAT_0069ef58;
        *(undefined1 **)((int)register0x00000054 + -0x17c) =
             (undefined1 *)((int)register0x00000054 + -0xa4);
        k3c_internal_pkg_util_value_IsNone();
        if (*(char *)((int)register0x00000054 + -0x178) == '\0') {
          iVar7 = 0;
          uVar3 = 0;
          iVar6 = 0;
          uVar11 = 0;
          do {
            uVar8 = uVar9;
            if (*(int *)((int)register0x00000054 + 0x28) <= iVar7) goto LAB_0069ec68;
            *(int *)((int)register0x00000054 + -0xe0) = iVar7;
            *(undefined4 *)((int)register0x00000054 + -0x144) = uVar3;
            *(uint *)((int)register0x00000054 + -0x148) = uVar11;
            *(int *)((int)register0x00000054 + -0xd0) = iVar6;
            iVar6 = *(int *)(*(int *)((int)register0x00000054 + 0x24) + iVar7 * 8);
            *(int *)((int)register0x00000054 + -0x128) = iVar6;
            uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 0x24) + iVar7 * 8 + 4);
            *(undefined4 *)((int)register0x00000054 + -0xb8) = uVar3;
            pcVar2 = *(code **)(iVar6 + 0x18);
            *(undefined4 *)((int)register0x00000054 + -0x180) = uVar3;
            (*pcVar2)();
            *(undefined4 *)((int)register0x00000054 + -0x124) =
                 *(undefined4 *)((int)register0x00000054 + -0x17c);
            *(undefined4 *)((int)register0x00000054 + -0xac) =
                 *(undefined4 *)((int)register0x00000054 + -0x178);
            *(int *)((int)register0x00000054 + -0xe4) =
                 *(int *)((int)register0x00000054 + -0x148) + 1;
            pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x128) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x180) =
                 *(undefined4 *)((int)register0x00000054 + -0xb8);
            (*pcVar2)();
            *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_0069ef60;
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0xb0);
            *(undefined4 *)((int)register0x00000054 + -0x14) = uVar3;
            *(undefined4 *)((int)register0x00000054 + -0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x124);
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0xac);
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0x17c);
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0x178);
            uVar9 = *(uint *)((int)register0x00000054 + -0x144);
            uVar11 = *(uint *)((int)register0x00000054 + -0xe4);
            if (uVar9 < uVar11) {
              *(undefined4 *)((int)register0x00000054 + -0x180) =
                   *(undefined4 *)((int)register0x00000054 + -0xd0);
              *(uint *)((int)register0x00000054 + -0x17c) = uVar11;
              *(uint *)((int)register0x00000054 + -0x178) = uVar9;
              *(undefined4 *)((int)register0x00000054 + -0x174) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x170) = DAT_0069ef64;
              FUN_000987f4();
              iVar6 = *(int *)((int)register0x00000054 + -0x16c);
              uVar11 = *(uint *)((int)register0x00000054 + -0x168);
              uVar9 = *(uint *)((int)register0x00000054 + -0x164);
              uVar3 = *(undefined4 *)((int)register0x00000054 + -0xb0);
            }
            else {
              iVar6 = *(int *)((int)register0x00000054 + -0xd0);
            }
            *(uint *)((int)register0x00000054 + -0x144) = uVar9;
            iVar7 = iVar6 + uVar11 * 0x18 + -0x18;
            if (*DAT_0069ef3c != 0) {
              *(int *)((int)register0x00000054 + -0x30) = iVar6;
              *(uint *)((int)register0x00000054 + -0xe8) = uVar11;
              *(int *)((int)register0x00000054 + -0x34) = iVar7;
              *(undefined4 *)((int)register0x00000054 + -0x180) = DAT_0069ef64;
              *(int *)((int)register0x00000054 + -0x17c) = iVar7;
              *(undefined1 **)((int)register0x00000054 + -0x178) =
                   (undefined1 *)((int)register0x00000054 + -0x18);
              FUN_00026c00((undefined1 *)((int)register0x00000054 + -0x18),uVar11,DAT_0069ef60,uVar3
                          );
              uVar9 = *(uint *)((int)register0x00000054 + -0x144);
              uVar11 = *(uint *)((int)register0x00000054 + -0xe8);
              uVar3 = *(undefined4 *)((int)register0x00000054 + -0xb0);
              iVar6 = *(int *)((int)register0x00000054 + -0x30);
              iVar7 = *(int *)((int)register0x00000054 + -0x34);
            }
            FUN_0009e2e8(uVar9,(undefined1 *)((int)register0x00000054 + -0x18),iVar7,uVar3);
            iVar7 = *(int *)((int)register0x00000054 + -0xe0) + 1;
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x144);
            uVar9 = uVar11;
          } while( true );
        }
        puVar4 = *(undefined4 **)(*(int *)((int)register0x00000054 + 4) + 0x2c);
        iVar7 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x30);
        uVar9 = 0;
        iVar6 = 0;
        uVar11 = 0;
LAB_0069f26c:
        uVar8 = uVar11;
        if (0 < iVar7) {
          *(int *)((int)register0x00000054 + -0xe0) = iVar7;
          *(uint *)((int)register0x00000054 + -0x144) = uVar9;
          *(uint *)((int)register0x00000054 + -0xec) = uVar11;
          *(int *)((int)register0x00000054 + -0x38) = iVar6;
          *(undefined4 **)((int)register0x00000054 + -0x2c) = puVar4;
          uVar3 = *puVar4;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar3;
          uVar10 = puVar4[1];
          *(undefined4 *)((int)register0x00000054 + -0xe4) = uVar10;
          *(undefined4 *)((int)register0x00000054 + -0xf0) = puVar4[2];
          *(undefined4 *)((int)register0x00000054 + -0x40) = puVar4[3];
          *(undefined4 *)((int)register0x00000054 + -0x180) =
               *(undefined4 *)((int)register0x00000054 + -0xb0);
          *(undefined4 *)((int)register0x00000054 + -0x17c) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x178) = uVar10;
          k3c_internal_pkg_motion_vibration___TestAxis__Matches();
          if (*(char *)((int)register0x00000054 + -0x174) == '\0') {
            uVar9 = *(uint *)((int)register0x00000054 + -0x144);
            uVar11 = *(uint *)((int)register0x00000054 + -0xec);
            iVar6 = *(int *)((int)register0x00000054 + -0x38);
          }
          else {
            pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0xf0) + 0x18);
            *(undefined4 *)((int)register0x00000054 + -0x180) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            (*pcVar2)();
            *(undefined4 *)((int)register0x00000054 + -0x120) =
                 *(undefined4 *)((int)register0x00000054 + -0x17c);
            *(undefined4 *)((int)register0x00000054 + -0xa8) =
                 *(undefined4 *)((int)register0x00000054 + -0x178);
            *(int *)((int)register0x00000054 + -0xf4) =
                 *(int *)((int)register0x00000054 + -0xec) + 1;
            pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0xf0) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x180) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            (*pcVar2)();
            *(undefined4 *)((int)register0x00000054 + -0x40) =
                 *(undefined4 *)((int)register0x00000054 + -0x17c);
            *(undefined4 *)((int)register0x00000054 + -0xf8) =
                 *(undefined4 *)((int)register0x00000054 + -0x178);
            FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
            *(undefined4 *)((int)register0x00000054 + -0x180) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            *(undefined4 *)((int)register0x00000054 + -0x17c) =
                 *(undefined4 *)((int)register0x00000054 + -0xe4);
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_0069f484;
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x178);
            *(undefined4 *)((int)register0x00000054 + -0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x120);
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0xa8);
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0xf8);
            uVar11 = *(uint *)((int)register0x00000054 + -0xf4);
            if (*(uint *)((int)register0x00000054 + -0x144) < uVar11) {
              *(undefined4 *)((int)register0x00000054 + -0x180) =
                   *(undefined4 *)((int)register0x00000054 + -0x38);
              *(uint *)((int)register0x00000054 + -0x17c) = uVar11;
              *(uint *)((int)register0x00000054 + -0x178) =
                   *(uint *)((int)register0x00000054 + -0x144);
              *(undefined4 *)((int)register0x00000054 + -0x174) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x170) = DAT_0069f4a8;
              FUN_000987f4();
              iVar6 = *(int *)((int)register0x00000054 + -0x16c);
              uVar11 = *(uint *)((int)register0x00000054 + -0x168);
              uVar9 = *(uint *)((int)register0x00000054 + -0x164);
            }
            else {
              iVar6 = *(int *)((int)register0x00000054 + -0x38);
              uVar9 = *(uint *)((int)register0x00000054 + -0x144);
            }
            *(uint *)((int)register0x00000054 + -0xe4) = uVar11;
            iVar7 = iVar6 + uVar11 * 0x18 + -0x18;
            if (*DAT_0069f49c != 0) {
              *(int *)((int)register0x00000054 + -0x44) = iVar6;
              *(uint *)((int)register0x00000054 + -0xfc) = uVar9;
              *(int *)((int)register0x00000054 + -0x34) = iVar7;
              *(undefined4 *)((int)register0x00000054 + -0x180) = DAT_0069f4a8;
              *(int *)((int)register0x00000054 + -0x17c) = iVar7;
              *(undefined1 **)((int)register0x00000054 + -0x178) =
                   (undefined1 *)((int)register0x00000054 + -0x18);
              FUN_00026c00();
              uVar11 = *(uint *)((int)register0x00000054 + -0xe4);
              uVar9 = *(uint *)((int)register0x00000054 + -0xfc);
              iVar6 = *(int *)((int)register0x00000054 + -0x44);
              iVar7 = *(int *)((int)register0x00000054 + -0x34);
            }
            FUN_0009e2e8(uVar11,(undefined1 *)((int)register0x00000054 + -0x18),iVar7,iVar6);
            uVar11 = *(uint *)((int)register0x00000054 + -0xe4);
            iVar6 = extraout_r3_02;
          }
          goto LAB_0069f248;
        }
LAB_0069ec68:
        uVar9 = uVar8;
        *(uint *)((int)register0x00000054 + -0xe0) = uVar11;
        *(int *)((int)register0x00000054 + -0x34) = iVar6;
        uVar10 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        uVar3 = FUN_0009e2f0(*(int *)((int)register0x00000054 + 4),
                             *(undefined4 *)((int)register0x00000054 + -0xb0),
                             (undefined1 *)((int)register0x00000054 + -0x18));
        *(undefined4 *)((int)register0x00000054 + -0x180) = uVar10;
        FUN_0009e2f0(uVar3,(undefined1 *)((int)register0x00000054 + -0x18),
                     (undefined1 *)((int)register0x00000054 + -0x17c));
        *(undefined4 *)((int)register0x00000054 + -0x168) =
             *(undefined4 *)((int)register0x00000054 + 8);
        k3c_internal_pkg_motion_vibration___VibrationPulseTest__Run_test();
        iVar6 = *(int *)((int)register0x00000054 + -0x34);
        iVar7 = *(int *)((int)register0x00000054 + -0xe0);
        while (0 < iVar7) {
          *(int *)((int)register0x00000054 + -0xe4) = iVar7;
          *(int *)((int)register0x00000054 + -0x2c) = iVar6;
          FUN_0009e2e8(iVar6,iVar6,(undefined1 *)((int)register0x00000054 + -0x18));
          pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x10) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x180) =
               *(undefined4 *)((int)register0x00000054 + -0xc);
          (*pcVar2)();
          if (*(int *)((int)register0x00000054 + 0x20) != 0) {
            if (*(int *)((int)register0x00000054 + -0x14c) < 2) {
              uVar3 = 0;
              uVar10 = 0;
              uVar12 = 0;
            }
            else {
              uVar3 = *(undefined4 *)((int)register0x00000054 + -0x138);
              uVar10 = *(undefined4 *)((int)register0x00000054 + -0x13c);
              uVar12 = *(undefined4 *)((int)register0x00000054 + -200);
            }
            *(undefined4 *)((int)register0x00000054 + -300) = uVar3;
            *(undefined4 *)((int)register0x00000054 + -0x130) = uVar10;
            *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar12;
            *(undefined4 *)((int)register0x00000054 + -0x24) =
                 *(undefined4 *)((int)register0x00000054 + 0x24);
            *(undefined4 *)((int)register0x00000054 + -0x20) =
                 *(undefined4 *)((int)register0x00000054 + 0x28);
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + 0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x180) = DAT_0069ef58;
            *(undefined1 **)((int)register0x00000054 + -0x17c) =
                 (undefined1 *)((int)register0x00000054 + -0x24);
            k3c_internal_pkg_util_value_IsNone();
            if (*(char *)((int)register0x00000054 + -0x178) == '\0') {
              uVar10 = 0;
              uVar3 = 0;
            }
            else {
              uVar3 = *(undefined4 *)((int)register0x00000054 + -8);
              uVar10 = *(undefined4 *)((int)register0x00000054 + -4);
            }
            *(undefined4 *)((int)register0x00000054 + -0x180) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x17c) = DAT_0069f480;
            *(undefined4 *)((int)register0x00000054 + -0x178) = 8;
            *(undefined4 *)((int)register0x00000054 + -0x174) =
                 *(undefined4 *)((int)register0x00000054 + 0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x170) =
                 *(undefined4 *)((int)register0x00000054 + 0x20);
            *(undefined4 *)((int)register0x00000054 + -0x16c) =
                 *(undefined4 *)((int)register0x00000054 + -0xb0);
            *(undefined4 *)((int)register0x00000054 + -0x168) =
                 *(undefined4 *)((int)register0x00000054 + -0xbc);
            *(undefined4 *)((int)register0x00000054 + -0x164) =
                 *(undefined4 *)((int)register0x00000054 + -0x130);
            unaff_r8 = *(int **)((int)register0x00000054 + -300);
            *(int **)((int)register0x00000054 + -0x160) = unaff_r8;
            *(undefined4 *)((int)register0x00000054 + -0x15c) = uVar3;
            *(undefined4 *)((int)register0x00000054 + -0x158) = uVar10;
            k3c_internal_pkg_motion_vibration___ResonanceTester__get_filename();
            *(undefined4 *)((int)register0x00000054 + -0xcc) =
                 *(undefined4 *)((int)register0x00000054 + -0x154);
            *(undefined4 *)((int)register0x00000054 + -0x140) =
                 *(undefined4 *)((int)register0x00000054 + -0x150);
            pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x10) + 0x18);
            *(undefined4 *)((int)register0x00000054 + -0x180) =
                 *(undefined4 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0x17c) =
                 *(undefined4 *)((int)register0x00000054 + -0x154);
            *(undefined4 *)((int)register0x00000054 + -0x178) =
                 *(undefined4 *)((int)register0x00000054 + -0x150);
            (*pcVar2)();
            *(undefined4 *)((int)register0x00000054 + -0x74) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x70) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x180) =
                 *(undefined4 *)((int)register0x00000054 + -0xcc);
            *(undefined4 *)((int)register0x00000054 + -0x17c) =
                 *(undefined4 *)((int)register0x00000054 + -0x140);
            FUN_0008f77c();
            *(undefined4 *)((int)register0x00000054 + -0x74) = DAT_0069f484;
            *(undefined4 *)((int)register0x00000054 + -0x70) =
                 *(undefined4 *)((int)register0x00000054 + -0x178);
            *(undefined4 *)((int)register0x00000054 + -0x180) = DAT_0069f488;
            *(undefined4 *)((int)register0x00000054 + -0x17c) = 0x29;
            *(undefined1 **)((int)register0x00000054 + -0x178) =
                 (undefined1 *)((int)register0x00000054 + -0x74);
            *(undefined4 *)((int)register0x00000054 + -0x174) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x170) = 1;
            k3c_internal_pkg_logger_Debugf();
          }
          iVar6 = *(int *)((int)register0x00000054 + -0x2c) + 0x18;
          uVar9 = *(uint *)((int)register0x00000054 + -0xe4);
          iVar7 = uVar9 - 1;
        }
        *(undefined4 *)((int)register0x00000054 + -0x180) = DAT_0069ef5c;
        *(undefined4 *)((int)register0x00000054 + -0x17c) =
             *(undefined4 *)((int)register0x00000054 + 0x18);
        k3c_internal_pkg_util_value_IsNone();
        if (*(char *)((int)register0x00000054 + -0x178) == '\0') {
          iVar6 = *(int *)((int)register0x00000054 + -0x34);
          iVar7 = *(int *)((int)register0x00000054 + -0xe0);
          do {
            if (iVar7 < 1) break;
            *(int *)((int)register0x00000054 + -0xe0) = iVar7;
            *(int *)((int)register0x00000054 + -0x2c) = iVar6;
            FUN_0009e2e8(iVar6,iVar6,(undefined1 *)((int)register0x00000054 + -0x18));
            pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x10) + 0x14);
            *(undefined4 *)((int)register0x00000054 + -0x180) =
                 *(undefined4 *)((int)register0x00000054 + -0xc);
            (*pcVar2)();
            *(undefined4 *)((int)register0x00000054 + -0x180) = DAT_0069f490;
            *(uint *)((int)register0x00000054 + -0x17c) =
                 DAT_0069f48c + (uint)*(byte *)((int)register0x00000054 + -0x17c) * 8;
            k3c_internal_pkg_util_value_False();
            if (*(char *)((int)register0x00000054 + -0x178) != '\0') goto LAB_0069f1cc;
            *(undefined4 *)((int)register0x00000054 + -0x180) =
                 *(undefined4 *)((int)register0x00000054 + 0x18);
            *(undefined4 *)((int)register0x00000054 + -0x17c) =
                 *(undefined4 *)((int)register0x00000054 + -0x10);
            *(undefined4 *)((int)register0x00000054 + -0x178) =
                 *(undefined4 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0x174) =
                 *(undefined4 *)((int)register0x00000054 + -0xb0);
            k3c_internal_pkg_motion_vibration___ShaperCalibrate__Process_accelerometer_data();
            *(undefined4 *)((int)register0x00000054 + -0xc4) =
                 *(undefined4 *)((int)register0x00000054 + -0x170);
            *(undefined4 *)((int)register0x00000054 + -0x180) = DAT_0069f494;
            *(undefined4 *)((int)register0x00000054 + -0x17c) =
                 *(undefined4 *)((int)register0x00000054 + -0xb4);
            *(undefined4 *)((int)register0x00000054 + -0x178) =
                 *(undefined4 *)((int)register0x00000054 + -0xb0);
            FUN_00024fd0();
            uVar3 = (*(undefined4 **)((int)register0x00000054 + -0x174))[1];
            *(undefined4 *)((int)register0x00000054 + -0x180) =
                 **(undefined4 **)((int)register0x00000054 + -0x174);
            *(undefined4 *)((int)register0x00000054 + -0x17c) = uVar3;
            k3c_internal_pkg_util_value_IsNone();
            if (*(char *)((int)register0x00000054 + -0x178) == '\0') {
              *(undefined4 *)((int)register0x00000054 + -0x180) = DAT_0069f494;
              *(undefined4 *)((int)register0x00000054 + -0x17c) =
                   *(undefined4 *)((int)register0x00000054 + -0xb4);
              *(undefined4 *)((int)register0x00000054 + -0x178) =
                   *(undefined4 *)((int)register0x00000054 + -0xb0);
              FUN_00024fd0();
              if (**(int **)((int)register0x00000054 + -0x174) != DAT_0069f498)
              goto code_r0x0069f1b8;
            }
            else {
              *(undefined4 *)((int)register0x00000054 + -0x180) = DAT_0069f494;
              *(undefined4 *)((int)register0x00000054 + -0x17c) =
                   *(undefined4 *)((int)register0x00000054 + -0xb4);
              *(undefined4 *)((int)register0x00000054 + -0x178) =
                   *(undefined4 *)((int)register0x00000054 + -0xb0);
              FUN_00092c70();
              piVar5 = *(int **)((int)register0x00000054 + -0x174);
              *piVar5 = DAT_0069f498;
              if (*DAT_0069f49c == 0) {
                iVar6 = *(int *)((int)register0x00000054 + -0xc4);
              }
              else {
                piVar5 = (int *)FUN_0009db64();
                iVar6 = *(int *)((int)register0x00000054 + -0xc4);
                *unaff_r8 = iVar6;
                unaff_r8[1] = piVar5[1];
              }
              piVar5[1] = iVar6;
            }
            iVar6 = *(int *)((int)register0x00000054 + -0x2c) + 0x18;
            iVar7 = *(int *)((int)register0x00000054 + -0xe0) + -1;
          } while( true );
        }
        iVar6 = *(int *)((int)register0x00000054 + -0xdc) + 1;
      }
      puVar4 = (undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + 0xc);
      unaff_r8 = *(int **)((int)register0x00000054 + -0xd8);
      iVar6 = (int)unaff_r8 + -1;
    } while( true );
  }
  goto LAB_0069f470;
LAB_0069f448:
  FUN_0009dbd4(2,2);
LAB_0069f454:
  FUN_0009dbd4(1,1);
LAB_0069f460:
  param_1 = FUN_0009dbd4(0,0);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x184);
  if ((bool)uVar14) {
    register0x00000054 = (BADSPACEBASE *)puVar13;
  }
LAB_0069f470:
  unaff_lr = 0x69f478;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x0069e70c;
code_r0x0069f1b8:
  *(int *)((int)register0x00000054 + -0x180) = **(int **)((int)register0x00000054 + -0x174);
  *(int *)((int)register0x00000054 + -0x17c) = DAT_0069f498;
  *(undefined4 *)((int)register0x00000054 + -0x178) = DAT_0069f4a0;
  FUN_000209b4();
LAB_0069f1cc:
  *(undefined4 *)((int)register0x00000054 + -0x74) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x70) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x180) = *(undefined4 *)((int)register0x00000054 + -8);
  *(undefined4 *)((int)register0x00000054 + -0x17c) = *(undefined4 *)((int)register0x00000054 + -4);
  FUN_0008f77c();
  *(undefined4 *)((int)register0x00000054 + -0x74) = DAT_0069f484;
  *(undefined4 *)((int)register0x00000054 + -0x70) =
       *(undefined4 *)((int)register0x00000054 + -0x178);
  *(undefined4 *)((int)register0x00000054 + -0x180) = DAT_0069f4a4;
  *(undefined4 *)((int)register0x00000054 + -0x17c) = 0x23;
  *(undefined1 **)((int)register0x00000054 + -0x178) =
       (undefined1 *)((int)register0x00000054 + -0x74);
  *(undefined4 *)((int)register0x00000054 + -0x174) = 1;
  *(undefined4 *)((int)register0x00000054 + -0x170) = 1;
  FUN_001386c4();
  uVar3 = 0;
  if (*(int *)((int)register0x00000054 + -0x16c) != 0) {
    uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x16c) + 4);
  }
  *(undefined4 *)((int)register0x00000054 + -0x180) = uVar3;
  *(undefined4 *)((int)register0x00000054 + -0x17c) =
       *(undefined4 *)((int)register0x00000054 + -0x168);
  uVar11 = FUN_00095b00();
  iVar6 = extraout_r3_01;
LAB_0069f248:
  puVar4 = (undefined4 *)(*(int *)((int)register0x00000054 + -0x2c) + 0x10);
  iVar7 = *(int *)((int)register0x00000054 + -0xe0) + -1;
  goto LAB_0069f26c;
}



/* k3c/internal/pkg/motion/vibration.(*ResonanceTester).cmd_TEST_RESONANCES @ 0069f4ac (size 3180) */

/* WARNING: Removing unreachable block (ram,0x0069fbe4) */

void k3c_internal_pkg_motion_vibration___ResonanceTester__cmd_TEST_RESONANCES(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint extraout_r1;
  int iVar7;
  undefined4 *extraout_r1_00;
  int extraout_r2;
  uint extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 uVar8;
  uint uVar9;
  int extraout_r3;
  int iVar10;
  int extraout_r3_00;
  int extraout_r3_01;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar16;
  undefined4 unaff_lr;
  undefined1 uVar17;
  bool bVar18;
  
code_r0x0069f4ac:
  if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0xb4)) {
    puVar16 = (undefined1 *)((int)register0x00000054 + -0x134);
    *(undefined4 *)((int)register0x00000054 + -0x134) = unaff_lr;
    uVar1 = *DAT_0069fcc0;
    uVar5 = *DAT_0069fcc4;
    *(undefined4 *)((int)register0x00000054 + -0x130) = *(undefined4 *)((int)register0x00000054 + 8)
    ;
    *(undefined4 *)((int)register0x00000054 + -300) = DAT_0069fcc8;
    *(undefined4 *)((int)register0x00000054 + -0x128) = 4;
    *(int *)((int)register0x00000054 + -0x124) = DAT_0069fccc;
    *(undefined4 *)((int)register0x00000054 + -0x120) = DAT_0069fcd0;
    *(undefined4 *)((int)register0x00000054 + -0x11c) = uVar1;
    *(undefined4 *)((int)register0x00000054 + -0x118) = uVar5;
    *(undefined4 *)((int)register0x00000054 + -0x114) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x110) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x10c) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x108) = 0;
    k3c_internal_pkg_gcode___GCodeCommand__Get();
    *(undefined4 *)((int)register0x00000054 + -0x130) =
         *(undefined4 *)((int)register0x00000054 + -0x104);
    *(undefined4 *)((int)register0x00000054 + -300) =
         *(undefined4 *)((int)register0x00000054 + -0x100);
    FUN_00150c8c();
    *(undefined4 *)((int)register0x00000054 + -0x130) = DAT_0069fcd4;
    *(undefined4 *)((int)register0x00000054 + -300) = *(undefined4 *)((int)register0x00000054 + 8);
    k3c_internal_pkg_motion_vibration_Parse_axis();
    uVar1 = *DAT_0069fcc0;
    uVar5 = *DAT_0069fcc4;
    *(undefined4 *)((int)register0x00000054 + -0x68) =
         *(undefined4 *)((int)register0x00000054 + -0x120);
    *(undefined4 *)((int)register0x00000054 + -0x130) = *(undefined4 *)((int)register0x00000054 + 8)
    ;
    *(undefined4 *)((int)register0x00000054 + -300) = DAT_0069fcd8;
    *(undefined4 *)((int)register0x00000054 + -0x128) = 5;
    *(int *)((int)register0x00000054 + -0x124) = DAT_0069fccc;
    *(undefined4 *)((int)register0x00000054 + -0x120) = DAT_0069fcdc;
    *(undefined4 *)((int)register0x00000054 + -0x11c) = uVar1;
    *(undefined4 *)((int)register0x00000054 + -0x118) = uVar5;
    *(undefined4 *)((int)register0x00000054 + -0x114) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x110) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x10c) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x108) = 0;
    k3c_internal_pkg_gcode___GCodeCommand__Get();
    uVar1 = *DAT_0069fcc0;
    uVar5 = *DAT_0069fcc4;
    *(undefined4 *)((int)register0x00000054 + -100) =
         *(undefined4 *)((int)register0x00000054 + -0x104);
    *(undefined4 *)((int)register0x00000054 + -0xc0) =
         *(undefined4 *)((int)register0x00000054 + -0x100);
    *(undefined4 *)((int)register0x00000054 + -0x130) = *(undefined4 *)((int)register0x00000054 + 8)
    ;
    *(undefined4 *)((int)register0x00000054 + -300) = DAT_0069fce0;
    *(undefined4 *)((int)register0x00000054 + -0x128) = 5;
    *(int *)((int)register0x00000054 + -0x124) = DAT_0069fccc;
    *(undefined4 *)((int)register0x00000054 + -0x120) = DAT_0069fce4;
    *(undefined4 *)((int)register0x00000054 + -0x11c) = uVar1;
    *(undefined4 *)((int)register0x00000054 + -0x118) = uVar5;
    *(undefined4 *)((int)register0x00000054 + -0x114) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x110) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x10c) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x108) = 0;
    k3c_internal_pkg_gcode___GCodeCommand__Get();
    *(undefined4 *)((int)register0x00000054 + -0x8c) =
         *(undefined4 *)((int)register0x00000054 + -0x104);
    *(undefined4 *)((int)register0x00000054 + -0xe0) =
         *(undefined4 *)((int)register0x00000054 + -0x100);
    *(undefined4 *)((int)register0x00000054 + -0x58) =
         *(undefined4 *)((int)register0x00000054 + -0x104);
    *(undefined4 *)((int)register0x00000054 + -0x54) =
         *(undefined4 *)((int)register0x00000054 + -0x100);
    *(int *)((int)register0x00000054 + -0x130) = DAT_0069fccc;
    *(undefined1 **)((int)register0x00000054 + -300) =
         (undefined1 *)((int)register0x00000054 + -0x58);
    k3c_internal_pkg_util_value_False();
    if (*(char *)((int)register0x00000054 + -0x128) != '\0') {
      uVar1 = 0;
      puVar6 = (undefined1 *)0x0;
LAB_0069f718:
      *(undefined1 **)((int)register0x00000054 + -0x90) = puVar6;
      *(undefined4 *)((int)register0x00000054 + -0xe4) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + -100);
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0xc0);
      *(int *)((int)register0x00000054 + -0x130) = DAT_0069fccc;
      *(undefined1 **)((int)register0x00000054 + -300) =
           (undefined1 *)((int)register0x00000054 + -0x60);
      k3c_internal_pkg_util_value_False();
      if (*(char *)((int)register0x00000054 + -0x128) == '\0') {
        *(undefined4 *)((int)register0x00000054 + -0x130) =
             *(undefined4 *)((int)register0x00000054 + -100);
        *(undefined4 *)((int)register0x00000054 + -300) =
             *(undefined4 *)((int)register0x00000054 + -0xc0);
        *(undefined4 *)((int)register0x00000054 + -0x128) = DAT_0069fce8;
        *(undefined4 *)((int)register0x00000054 + -0x124) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x120) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x11c) = 0xffffffff;
        FUN_0014f168();
        iVar14 = *(int *)((int)register0x00000054 + -0x118);
        *(int *)((int)register0x00000054 + -0x98) = iVar14;
        iVar15 = *(int *)((int)register0x00000054 + -0x114);
        *(int *)((int)register0x00000054 + -0xec) = iVar15;
        uVar9 = 0;
        iVar11 = 0;
        uVar12 = 0;
        iVar10 = 0;
        while (iVar10 < iVar15) {
          *(int *)((int)register0x00000054 + -0xa0) = iVar10;
          *(int *)((int)register0x00000054 + -0x80) = iVar11;
          *(uint *)((int)register0x00000054 + -0xd8) = uVar12;
          *(uint *)((int)register0x00000054 + -0xd4) = uVar9;
          uVar1 = *(undefined4 *)(iVar14 + iVar10 * 8);
          *(undefined4 *)((int)register0x00000054 + -0x70) = uVar1;
          uVar5 = *(undefined4 *)(iVar14 + iVar10 * 8 + 4);
          *(undefined4 *)((int)register0x00000054 + -0xc4) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x130) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -300) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x128) = DAT_0069fcec;
          *(undefined4 *)((int)register0x00000054 + -0x124) = 7;
          internal_stringslite_Index();
          if (*(int *)((int)register0x00000054 + -0x120) < 0) {
            *(undefined4 *)((int)register0x00000054 + -0x130) =
                 *(undefined4 *)((int)register0x00000054 + -0x70);
            *(undefined4 *)((int)register0x00000054 + -300) =
                 *(undefined4 *)((int)register0x00000054 + -0xc4);
            FUN_00151ce4();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -0x128);
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x124);
            *(undefined4 *)((int)register0x00000054 + -0x130) = 0;
            *(undefined4 *)((int)register0x00000054 + -300) = DAT_0069fcf0;
            *(undefined4 *)((int)register0x00000054 + -0x128) = 8;
            *(undefined4 *)((int)register0x00000054 + -0x124) = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x120) = uVar5;
            FUN_0007636c();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -0x11c);
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x118);
          }
          else {
            *(undefined4 *)((int)register0x00000054 + -0x130) =
                 *(undefined4 *)((int)register0x00000054 + -0x70);
            *(undefined4 *)((int)register0x00000054 + -300) =
                 *(undefined4 *)((int)register0x00000054 + -0xc4);
            FUN_00151ce4();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -0x128);
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x124);
          }
          uVar8 = *DAT_0069fcc0;
          uVar13 = *DAT_0069fcc4;
          *(undefined4 *)((int)register0x00000054 + -0x130) =
               **(undefined4 **)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -300) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x128) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x124) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x120) = uVar13;
          k3c_internal_pkg_printer___Printer__Lookup_object();
          uVar17 = 1;
          if (*(int *)((int)register0x00000054 + -0x11c) == 0) goto LAB_006a00f0;
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x118);
          *(int *)((int)register0x00000054 + -0xa4) = *(int *)((int)register0x00000054 + -0xd8) + 1;
          *(undefined4 *)((int)register0x00000054 + -0x130) = DAT_0069fcf4;
          *(int *)((int)register0x00000054 + -300) = *(int *)((int)register0x00000054 + -0x11c);
          FUN_00020dac();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x128);
          uVar9 = *(uint *)((int)register0x00000054 + -0xd4);
          uVar12 = *(uint *)((int)register0x00000054 + -0xa4);
          if (uVar9 < uVar12) {
            *(undefined4 *)((int)register0x00000054 + -0x30) = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x130) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            *(uint *)((int)register0x00000054 + -300) = uVar12;
            *(uint *)((int)register0x00000054 + -0x128) = uVar9;
            *(undefined4 *)((int)register0x00000054 + -0x124) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x120) = DAT_0069fcf8;
            FUN_000987f4();
            iVar11 = *(int *)((int)register0x00000054 + -0x11c);
            uVar12 = *(uint *)((int)register0x00000054 + -0x118);
            uVar9 = *(uint *)((int)register0x00000054 + -0x114);
            uVar1 = *(undefined4 *)((int)register0x00000054 + -0x30);
          }
          else {
            iVar11 = *(int *)((int)register0x00000054 + -0x80);
          }
          *(undefined4 *)(iVar11 + (uVar12 - 1) * 8) = uVar1;
          iVar14 = iVar11 + (uVar12 - 1) * 8;
          if (*DAT_0069fcfc == 0) {
            uVar1 = *(undefined4 *)((int)register0x00000054 + -0x6c);
          }
          else {
            FUN_0009db64();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -0x6c);
            *unaff_r8 = uVar1;
            unaff_r8[1] = *(undefined4 *)(extraout_r3 + 4);
            uVar9 = extraout_r1;
            uVar12 = extraout_r2_00;
            iVar14 = extraout_r3;
          }
          *(undefined4 *)(iVar14 + 4) = uVar1;
          iVar14 = *(int *)((int)register0x00000054 + -0x98);
          iVar15 = *(int *)((int)register0x00000054 + -0xec);
          iVar10 = *(int *)((int)register0x00000054 + -0xa0) + 1;
        }
      }
      else {
        uVar12 = 0;
        uVar9 = 0;
        iVar11 = 0;
      }
      iVar15 = DAT_0069fd04;
      iVar14 = DAT_0069fccc;
      *(int *)((int)register0x00000054 + -0x80) = iVar11;
      *(uint *)((int)register0x00000054 + -0xd8) = uVar12;
      *(uint *)((int)register0x00000054 + -0xd4) = uVar9;
      uVar1 = *DAT_0069fcc0;
      uVar5 = *DAT_0069fcc4;
      *(undefined4 *)((int)register0x00000054 + -0x130) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -300) = DAT_0069fd00;
      *(undefined4 *)((int)register0x00000054 + -0x128) = 6;
      *(int *)((int)register0x00000054 + -0x124) = DAT_0069fccc;
      *(int *)((int)register0x00000054 + -0x120) = DAT_0069fd04;
      *(undefined4 *)((int)register0x00000054 + -0x11c) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x118) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x114) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x110) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x10c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x108) = 0;
      k3c_internal_pkg_gcode___GCodeCommand__Get();
      *(undefined4 *)((int)register0x00000054 + -0x130) =
           *(undefined4 *)((int)register0x00000054 + -0x104);
      *(undefined4 *)((int)register0x00000054 + -300) =
           *(undefined4 *)((int)register0x00000054 + -0x100);
      FUN_00150c8c();
      *(undefined4 *)((int)register0x00000054 + -0x130) =
           *(undefined4 *)((int)register0x00000054 + -0x128);
      *(undefined4 *)((int)register0x00000054 + -300) =
           *(undefined4 *)((int)register0x00000054 + -0x124);
      *(undefined4 *)((int)register0x00000054 + -0x128) = DAT_0069fce8;
      *(undefined4 *)((int)register0x00000054 + -0x124) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x120) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x11c) = 0xffffffff;
      FUN_0014f168();
      iVar2 = *(int *)((int)register0x00000054 + -0x118);
      *(int *)((int)register0x00000054 + -0x9c) = iVar2;
      iVar7 = *(int *)((int)register0x00000054 + -0x114);
      *(int *)((int)register0x00000054 + -0xf0) = iVar7;
      uVar1 = *(undefined4 *)((int)register0x00000054 + -0x110);
      *(undefined4 *)((int)register0x00000054 + -0xe8) = uVar1;
      iVar10 = 0;
      do {
        if (iVar7 <= iVar10) {
          *(int *)((int)register0x00000054 + -0x1c) = iVar2;
          *(int *)((int)register0x00000054 + -0x18) = iVar7;
          *(undefined4 *)((int)register0x00000054 + -0x14) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x130) = DAT_0069fd10;
          *(undefined1 **)((int)register0x00000054 + -300) =
               (undefined1 *)((int)register0x00000054 + -0x1c);
          k3c_internal_pkg_util_value_False();
          if (*(char *)((int)register0x00000054 + -0x128) == '\0') {
            uVar1 = FUN_001160a8();
            uVar1 = FUN_0009e2f0(uVar1,(undefined1 *)((int)register0x00000054 + -0x130),
                                 (undefined1 *)((int)register0x00000054 + -0x4c));
            FUN_0009e2f0(uVar1,(undefined1 *)((int)register0x00000054 + -0x4c),
                         (undefined1 *)((int)register0x00000054 + -0x130));
            *(undefined4 *)((int)register0x00000054 + -0x11c) = DAT_0069fd14;
            *(undefined4 *)((int)register0x00000054 + -0x118) = 0xf;
            FUN_00101cdc();
            *(undefined4 *)((int)register0x00000054 + -0x24) =
                 *(undefined4 *)((int)register0x00000054 + -0x114);
            *(undefined4 *)((int)register0x00000054 + -0x20) =
                 *(undefined4 *)((int)register0x00000054 + -0x110);
            *(undefined4 *)((int)register0x00000054 + -0x130) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -300) = DAT_0069fd18;
            *(undefined4 *)((int)register0x00000054 + -0x128) = 4;
            *(int *)((int)register0x00000054 + -0x124) = DAT_0069fccc;
            *(undefined1 **)((int)register0x00000054 + -0x120) =
                 (undefined1 *)((int)register0x00000054 + -0x24);
            *(undefined4 *)((int)register0x00000054 + -0x11c) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x118) = 0;
            iVar11 = 0;
            *(undefined4 *)((int)register0x00000054 + -0x114) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x110) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x10c) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x108) = 0;
            k3c_internal_pkg_gcode___GCodeCommand__Get();
            *(undefined4 *)((int)register0x00000054 + -0x78) =
                 *(undefined4 *)((int)register0x00000054 + -0x104);
            *(undefined4 *)((int)register0x00000054 + -0xcc) =
                 *(undefined4 *)((int)register0x00000054 + -0x100);
            *(undefined4 *)((int)register0x00000054 + -0x130) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -300) =
                 *(undefined4 *)((int)register0x00000054 + -0x104);
            *(undefined4 *)((int)register0x00000054 + -0x128) =
                 *(undefined4 *)((int)register0x00000054 + -0x100);
            k3c_internal_pkg_motion_vibration___ResonanceTester__is_valid_name_suffix();
            if (*(char *)((int)register0x00000054 + -0x124) != '\0') {
              iVar14 = *(int *)((int)register0x00000054 + -0x9c);
              iVar10 = *(int *)((int)register0x00000054 + -0xf0);
              iVar15 = 0;
              goto LAB_0069fbfc;
            }
            *(undefined4 *)((int)register0x00000054 + -0x130) = DAT_006a0190;
            FUN_00022cf8();
            puVar4 = *(undefined4 **)((int)register0x00000054 + -300);
            puVar4[1] = 0x16;
            *puVar4 = DAT_006a0194;
            *(undefined4 *)((int)register0x00000054 + -0x130) = *DAT_006a0198;
            *(undefined4 **)((int)register0x00000054 + -300) = puVar4;
            FUN_00095b00();
          }
          *(undefined4 *)((int)register0x00000054 + -0x130) = DAT_006a0190;
          FUN_00022cf8();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -300);
          puVar4[1] = 0x5f;
          *puVar4 = DAT_006a019c;
          *(undefined4 *)((int)register0x00000054 + -0x130) = *DAT_006a0198;
          *(undefined4 **)((int)register0x00000054 + -300) = puVar4;
          iVar3 = FUN_00095b00();
          iVar10 = extraout_r3_01;
          goto LAB_006a0004;
        }
        *(int *)((int)register0x00000054 + -0xa0) = iVar10;
        uVar12 = *(uint *)(iVar2 + iVar10 * 8);
        *(uint *)((int)register0x00000054 + -0x7c) = uVar12;
        iVar11 = *(int *)(iVar2 + iVar10 * 8 + 4);
        *(int *)((int)register0x00000054 + -0xd0) = iVar11;
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
        unaff_r8 = (undefined4 *)&DAT_0000000a;
        *(undefined4 *)((int)register0x00000054 + -0xc) = 10;
        *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_0069fd08;
        *(undefined4 *)((int)register0x00000054 + -4) = 8;
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_0069fd0c;
        uVar1 = extraout_r2_01;
        iVar10 = extraout_r3_00;
        iVar14 = iVar7;
        iVar15 = iVar2;
        for (iVar3 = 0; iVar7 = iVar14, iVar2 = iVar15, iVar3 < 2; iVar3 = iVar3 + 1) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + iVar3 * 8 + -0x10);
          if (*(int *)((int)register0x00000054 + iVar3 * 8 + -0xc) == iVar11) {
            *(int *)((int)register0x00000054 + -0xa4) = iVar3;
            *(uint *)((int)register0x00000054 + -0x130) = uVar12;
            *(undefined4 *)((int)register0x00000054 + -300) = uVar1;
            *(int *)((int)register0x00000054 + -0x128) = iVar11;
            FUN_00018250();
            if (*(char *)((int)register0x00000054 + -0x124) != '\0') {
              iVar3 = *(int *)((int)register0x00000054 + -0xa4);
              uVar1 = *(undefined4 *)((int)register0x00000054 + -0xe8);
              iVar10 = *(int *)((int)register0x00000054 + -0xa0);
              iVar11 = *(int *)((int)register0x00000054 + -0xd0);
              uVar12 = *(uint *)((int)register0x00000054 + -0x7c);
              iVar7 = *(int *)((int)register0x00000054 + -0xf0);
              iVar2 = *(int *)((int)register0x00000054 + -0x9c);
              unaff_r8 = (undefined4 *)&DAT_0000000a;
              break;
            }
            iVar3 = *(int *)((int)register0x00000054 + -0xa4);
            iVar10 = *(int *)((int)register0x00000054 + -0xa0);
            iVar11 = *(int *)((int)register0x00000054 + -0xd0);
            uVar12 = *(uint *)((int)register0x00000054 + -0x7c);
            iVar14 = *(int *)((int)register0x00000054 + -0xf0);
            iVar15 = *(int *)((int)register0x00000054 + -0x9c);
            unaff_r8 = (undefined4 *)&DAT_0000000a;
          }
LAB_006a0004:
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0xe8);
        }
        if (1 < iVar3) goto LAB_006a007c;
        iVar10 = iVar10 + 1;
        iVar14 = iVar7;
        iVar15 = iVar2;
      } while( true );
    }
    *(undefined4 *)((int)register0x00000054 + -0x130) =
         *(undefined4 *)((int)register0x00000054 + -0x8c);
    *(undefined4 *)((int)register0x00000054 + -300) =
         *(undefined4 *)((int)register0x00000054 + -0xe0);
    *(undefined4 *)((int)register0x00000054 + -0x128) = DAT_0069fce8;
    *(undefined4 *)((int)register0x00000054 + -0x124) = 1;
    *(undefined4 *)((int)register0x00000054 + -0x120) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x11c) = 0xffffffff;
    FUN_0014f168();
    uVar17 = 0;
    if (*(int *)((int)register0x00000054 + -0x114) == 3) {
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + -0x118);
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0xbc));
      iVar14 = extraout_r2;
      for (iVar15 = 0; iVar15 < 3; iVar15 = iVar15 + 1) {
        *(int *)((int)register0x00000054 + -200) = iVar15;
        uVar1 = *(undefined4 *)(iVar14 + iVar15 * 8 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x130) = *(undefined4 *)(iVar14 + iVar15 * 8);
        *(undefined4 *)((int)register0x00000054 + -300) = uVar1;
        FUN_0008f77c();
        *(int *)((int)register0x00000054 + -0x130) = DAT_0069fccc;
        *(undefined4 *)((int)register0x00000054 + -300) =
             *(undefined4 *)((int)register0x00000054 + -0x128);
        k3c_internal_pkg_util_cast_ToFloat64E();
        uVar17 = *(int *)((int)register0x00000054 + -0x120) == 0;
        if (!(bool)uVar17) goto LAB_006a00fc;
        iVar15 = *(int *)((int)register0x00000054 + -200);
        *(undefined8 *)((int)register0x00000054 + iVar15 * 8 + -0xbc) =
             *(undefined8 *)((int)register0x00000054 + -0x128);
        iVar14 = *(int *)((int)register0x00000054 + -0x94);
      }
      uVar1 = 3;
      puVar6 = (undefined1 *)((int)register0x00000054 + -0xbc);
      goto LAB_0069f718;
    }
    goto LAB_006a0130;
  }
  goto LAB_006a0168;
LAB_0069fbfc:
  *(int *)((int)register0x00000054 + -0xa0) = iVar15;
  if (iVar10 <= iVar15) goto LAB_0069fc5c;
  uVar1 = *(undefined4 *)(iVar14 + iVar15 * 8);
  if (*(int *)(iVar14 + iVar15 * 8 + 4) == 10) {
    *(undefined4 *)((int)register0x00000054 + -0x130) = DAT_0069fd08;
    *(undefined4 *)((int)register0x00000054 + -300) = uVar1;
    *(undefined4 *)((int)register0x00000054 + -0x128) = 10;
    FUN_00018250();
    if (*(char *)((int)register0x00000054 + -0x124) != '\0') {
      iVar14 = *(int *)((int)register0x00000054 + -0x9c);
      iVar10 = *(int *)((int)register0x00000054 + -0xf0);
      iVar15 = *(int *)((int)register0x00000054 + -0xa0);
      goto LAB_0069fc5c;
    }
    iVar14 = *(int *)((int)register0x00000054 + -0x9c);
    iVar10 = *(int *)((int)register0x00000054 + -0xf0);
    iVar15 = *(int *)((int)register0x00000054 + -0xa0);
  }
  iVar15 = iVar15 + 1;
  goto LAB_0069fbfc;
LAB_0069fc5c:
  iVar11 = 0;
  do {
    *(int *)((int)register0x00000054 + -0xa4) = iVar11;
    if (iVar10 <= iVar11) {
      bVar18 = SBORROW4(iVar15,iVar10);
      iVar14 = iVar15 - iVar10;
LAB_0069fd38:
      if (iVar14 < 0 == bVar18) {
        bVar18 = SBORROW4(iVar11,iVar10);
        iVar11 = iVar11 - iVar10;
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *(undefined4 *)((int)register0x00000054 + -0x84) =
             **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x130) = DAT_006a0178;
        FUN_00022cf8();
        puVar4 = *(undefined4 **)((int)register0x00000054 + -300);
        if (*DAT_006a017c == 0) {
          bVar18 = SBORROW4(*(int *)((int)register0x00000054 + -0xa4),
                            *(int *)((int)register0x00000054 + -0xf0));
          iVar11 = *(int *)((int)register0x00000054 + -0xa4) -
                   *(int *)((int)register0x00000054 + -0xf0);
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x84);
        }
        else {
          FUN_0009db54();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x84);
          *unaff_r8 = uVar1;
          bVar18 = SBORROW4(*(int *)((int)register0x00000054 + -0xa4),
                            *(int *)((int)register0x00000054 + -0xf0));
          iVar11 = *(int *)((int)register0x00000054 + -0xa4) -
                   *(int *)((int)register0x00000054 + -0xf0);
          puVar4 = extraout_r1_00;
        }
        *puVar4 = uVar1;
        iVar15 = *(int *)((int)register0x00000054 + -0xa0);
      }
      *(undefined4 **)((int)register0x00000054 + -0x74) = puVar4;
      if (iVar11 < 0 == bVar18) {
        uVar1 = 0;
        uVar5 = 0;
      }
      else {
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0xcc);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x78);
      }
      *(undefined4 *)((int)register0x00000054 + -0x88) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0xdc) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + -100);
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + -0xc0);
      *(undefined4 *)((int)register0x00000054 + -0x130) = DAT_006a0180;
      *(undefined1 **)((int)register0x00000054 + -300) =
           (undefined1 *)((int)register0x00000054 + -0x2c);
      k3c_internal_pkg_util_value_False
                (DAT_006a0180,(undefined1 *)((int)register0x00000054 + -0x2c),iVar15);
      if (*(char *)((int)register0x00000054 + -0x128) == '\0') {
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0xd8);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0xd4);
        uVar8 = *(undefined4 *)((int)register0x00000054 + -0x80);
      }
      else {
        uVar1 = 0;
        uVar5 = 0;
        uVar8 = 0;
      }
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x130) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -300) = *(undefined4 *)((int)register0x00000054 + 8)
      ;
      *(undefined1 **)((int)register0x00000054 + -0x128) =
           (undefined1 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x124) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x120) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x11c) =
           *(undefined4 *)((int)register0x00000054 + -0x74);
      *(undefined4 *)((int)register0x00000054 + -0x118) =
           *(undefined4 *)((int)register0x00000054 + -0x88);
      *(undefined4 *)((int)register0x00000054 + -0x114) =
           *(undefined4 *)((int)register0x00000054 + -0xdc);
      *(undefined4 *)((int)register0x00000054 + -0x110) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x10c) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x108) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x104) =
           *(undefined4 *)((int)register0x00000054 + -0x90);
      *(undefined4 *)((int)register0x00000054 + -0x100) =
           *(undefined4 *)((int)register0x00000054 + -0xe4);
      *(undefined4 *)((int)register0x00000054 + -0xfc) =
           *(undefined4 *)((int)register0x00000054 + -0xe4);
      k3c_internal_pkg_motion_vibration___ResonanceTester___run_test();
      *(undefined4 *)((int)register0x00000054 + -0x130) = DAT_006a0184;
      *(undefined4 *)((int)register0x00000054 + -300) =
           *(undefined4 *)((int)register0x00000054 + -0xf8);
      *(undefined4 *)((int)register0x00000054 + -0x128) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      FUN_00024fd0();
      if (*(int *)((int)register0x00000054 + -0xa0) < *(int *)((int)register0x00000054 + -0xf0)) {
        uVar5 = **(undefined4 **)((int)register0x00000054 + -0x124);
        uVar1 = (*(undefined4 **)((int)register0x00000054 + -0x124))[1];
        *(undefined4 *)((int)register0x00000054 + -0x130) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -300) = DAT_006a0188;
        *(undefined4 *)((int)register0x00000054 + -0x128) = 10;
        *(undefined4 *)((int)register0x00000054 + -0x124) =
             *(undefined4 *)((int)register0x00000054 + -0x78);
        *(undefined4 *)((int)register0x00000054 + -0x120) =
             *(undefined4 *)((int)register0x00000054 + -0xcc);
        *(undefined4 *)((int)register0x00000054 + -0x11c) =
             *(undefined4 *)((int)register0x00000054 + -0x74);
        *(undefined4 *)((int)register0x00000054 + -0x118) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        *(undefined4 *)((int)register0x00000054 + -0x114) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x110) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x10c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x108) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x104) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
        *(undefined4 *)((int)register0x00000054 + -0x100) =
             *(undefined4 *)((int)register0x00000054 + -0xe4);
        *(undefined4 *)((int)register0x00000054 + -0xfc) =
             *(undefined4 *)((int)register0x00000054 + -0xe4);
        k3c_internal_pkg_motion_vibration___ResonanceTester__save_calibration_data();
        *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x130) =
             *(undefined4 *)((int)register0x00000054 + -0xf8);
        *(undefined4 *)((int)register0x00000054 + -300) =
             *(undefined4 *)((int)register0x00000054 + -0xf4);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_006a0180;
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x128);
        *(undefined4 *)((int)register0x00000054 + -0x130) = DAT_006a018c;
        *(undefined4 *)((int)register0x00000054 + -300) = 0x22;
        *(undefined1 **)((int)register0x00000054 + -0x128) =
             (undefined1 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -0x124) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x120) = 1;
        k3c_internal_pkg_logger_Debugf();
      }
      *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
      *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
      return;
    }
    uVar1 = *(undefined4 *)(iVar14 + iVar11 * 8);
    if (*(int *)(iVar14 + iVar11 * 8 + 4) == 8) {
      *(undefined4 *)((int)register0x00000054 + -0x130) = DAT_0069fd0c;
      *(undefined4 *)((int)register0x00000054 + -300) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x128) = 8;
      FUN_00018250();
      if (*(char *)((int)register0x00000054 + -0x124) != '\0') {
        iVar15 = *(int *)((int)register0x00000054 + -0xa0);
        iVar10 = *(int *)((int)register0x00000054 + -0xf0);
        bVar18 = SBORROW4(iVar15,iVar10);
        iVar14 = iVar15 - iVar10;
        iVar11 = *(int *)((int)register0x00000054 + -0xa4);
        goto LAB_0069fd38;
      }
      iVar14 = *(int *)((int)register0x00000054 + -0x9c);
      iVar10 = *(int *)((int)register0x00000054 + -0xf0);
      iVar15 = *(int *)((int)register0x00000054 + -0xa0);
      iVar11 = *(int *)((int)register0x00000054 + -0xa4);
    }
    iVar11 = iVar11 + 1;
  } while( true );
LAB_006a007c:
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) = 0;
  *(uint *)((int)register0x00000054 + -0x130) = uVar12;
  *(int *)((int)register0x00000054 + -300) = iVar11;
  FUN_0008f77c();
  *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_006a0180;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x128);
  *(undefined4 *)((int)register0x00000054 + -0x130) = DAT_006a01a4;
  *(undefined4 *)((int)register0x00000054 + -300) = 0x48;
  *(undefined1 **)((int)register0x00000054 + -0x128) =
       (undefined1 *)((int)register0x00000054 + -0x38);
  *(undefined4 *)((int)register0x00000054 + -0x124) = 1;
  *(undefined4 *)((int)register0x00000054 + -0x120) = 1;
  FUN_001386c4();
  uVar17 = *(int *)((int)register0x00000054 + -0x11c) == 0;
  uVar1 = 0;
  if (!(bool)uVar17) {
    uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x11c) + 4);
  }
  *(undefined4 *)((int)register0x00000054 + -0x130) = uVar1;
  *(undefined4 *)((int)register0x00000054 + -300) =
       *(undefined4 *)((int)register0x00000054 + -0x118);
  FUN_00095b00();
LAB_006a00f0:
  *(undefined4 *)((int)register0x00000054 + -0x130) = DAT_006a01a8;
  FUN_00020b18();
LAB_006a00fc:
  *(undefined4 *)((int)register0x00000054 + -0x130) = DAT_006a0190;
  FUN_00022cf8();
  puVar4 = *(undefined4 **)((int)register0x00000054 + -300);
  puVar4[1] = 0x5a;
  *puVar4 = DAT_006a01ac;
  *(undefined4 *)((int)register0x00000054 + -0x130) = *DAT_006a0198;
  *(undefined4 **)((int)register0x00000054 + -300) = puVar4;
  FUN_00095b00();
LAB_006a0130:
  *(undefined4 *)((int)register0x00000054 + -0x130) = DAT_006a0190;
  FUN_00022cf8();
  puVar4 = *(undefined4 **)((int)register0x00000054 + -300);
  puVar4[1] = 0x28;
  *puVar4 = DAT_006a01b0;
  *(undefined4 *)((int)register0x00000054 + -0x130) = *DAT_006a0198;
  *(undefined4 **)((int)register0x00000054 + -300) = puVar4;
  param_1 = FUN_00095b00();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x134);
  if ((bool)uVar17) {
    register0x00000054 = (BADSPACEBASE *)puVar16;
  }
LAB_006a0168:
  unaff_lr = 0x6a0170;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x0069f4ac;
}



/* k3c/internal/pkg/motion/vibration.(*ResonanceTester).cmd_TEST_RESONANCES_NO_CHIP @ 006a01b4 (size 2024) */

void k3c_internal_pkg_motion_vibration___ResonanceTester__cmd_TEST_RESONANCES_NO_CHIP
               (undefined4 param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int extraout_r2;
  code *pcVar9;
  undefined4 *puVar10;
  uint extraout_r2_00;
  uint uVar11;
  int extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar12;
  undefined4 unaff_lr;
  undefined1 uVar13;
  undefined8 uVar14;
  
code_r0x006a01b4:
  if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x130)) {
    puVar12 = (undefined1 *)((int)register0x00000054 + -0x1b0);
    *(undefined4 *)((int)register0x00000054 + -0x1b0) = unaff_lr;
    uVar3 = *DAT_006a099c;
    uVar4 = *DAT_006a09a0;
    *(undefined4 *)((int)register0x00000054 + -0x1ac) = *(undefined4 *)((int)register0x00000054 + 8)
    ;
    *(undefined4 *)((int)register0x00000054 + -0x1a8) = DAT_006a09a4;
    *(undefined4 *)((int)register0x00000054 + -0x1a4) = 4;
    *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a09a8;
    *(undefined4 *)((int)register0x00000054 + -0x19c) = DAT_006a09ac;
    *(undefined4 *)((int)register0x00000054 + -0x198) = uVar3;
    *(undefined4 *)((int)register0x00000054 + -0x194) = uVar4;
    *(undefined4 *)((int)register0x00000054 + -400) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x18c) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x188) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x184) = 0;
    k3c_internal_pkg_gcode___GCodeCommand__Get();
    *(undefined4 *)((int)register0x00000054 + -0x1ac) =
         *(undefined4 *)((int)register0x00000054 + -0x180);
    *(undefined4 *)((int)register0x00000054 + -0x1a8) =
         *(undefined4 *)((int)register0x00000054 + -0x17c);
    FUN_00150c8c();
    *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_006a09b0;
    *(undefined4 *)((int)register0x00000054 + -0x1a8) = *(undefined4 *)((int)register0x00000054 + 8)
    ;
    k3c_internal_pkg_motion_vibration_Parse_axis();
    uVar3 = *DAT_006a099c;
    uVar4 = *DAT_006a09a0;
    *(undefined4 *)((int)register0x00000054 + -100) =
         *(undefined4 *)((int)register0x00000054 + -0x19c);
    *(undefined4 *)((int)register0x00000054 + -0x1ac) = *(undefined4 *)((int)register0x00000054 + 8)
    ;
    *(undefined4 *)((int)register0x00000054 + -0x1a8) = DAT_006a09b4;
    *(undefined4 *)((int)register0x00000054 + -0x1a4) = 5;
    *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a09a8;
    *(undefined4 *)((int)register0x00000054 + -0x19c) = DAT_006a09b8;
    *(undefined4 *)((int)register0x00000054 + -0x198) = uVar3;
    *(undefined4 *)((int)register0x00000054 + -0x194) = uVar4;
    *(undefined4 *)((int)register0x00000054 + -400) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x18c) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x188) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x184) = 0;
    k3c_internal_pkg_gcode___GCodeCommand__Get();
    *(undefined4 *)((int)register0x00000054 + -0xd0) =
         *(undefined4 *)((int)register0x00000054 + -0x180);
    *(undefined4 *)((int)register0x00000054 + -0x148) =
         *(undefined4 *)((int)register0x00000054 + -0x17c);
    *(undefined4 *)((int)register0x00000054 + -0x3c) =
         *(undefined4 *)((int)register0x00000054 + -0x180);
    *(undefined4 *)((int)register0x00000054 + -0x38) =
         *(undefined4 *)((int)register0x00000054 + -0x17c);
    *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_006a09a8;
    *(undefined1 **)((int)register0x00000054 + -0x1a8) =
         (undefined1 *)((int)register0x00000054 + -0x3c);
    k3c_internal_pkg_util_value_False();
    if (*(char *)((int)register0x00000054 + -0x1a4) != '\0') {
      uVar3 = 0;
      puVar5 = (undefined1 *)0x0;
LAB_006a03b8:
      *(undefined1 **)((int)register0x00000054 + -0xd4) = puVar5;
      *(undefined4 *)((int)register0x00000054 + -0x14c) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + -100);
      pcVar9 = *(code **)*DAT_006a09c0;
      *(undefined4 *)((int)register0x00000054 + -0x1ac) =
           **(undefined4 **)((int)register0x00000054 + 4);
      (*pcVar9)();
      uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0xd8) =
           *(undefined4 *)((int)register0x00000054 + -0x1a8);
      FUN_0009e260(*(int *)((int)register0x00000054 + 4),uVar3,
                   (undefined1 *)((int)register0x00000054 + -0xcc));
      *(undefined8 *)((int)register0x00000054 + -0x158) = 0x3ff0000000000000;
      *(undefined8 *)((int)register0x00000054 + -0x108) =
           *(undefined8 *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x10) + 0x4c);
      *(undefined4 *)((int)register0x00000054 + -0x1ac) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x1a8) = DAT_006a09c4;
      *(undefined4 *)((int)register0x00000054 + -0x1a4) = 10;
      *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a09c8;
      *(undefined1 **)((int)register0x00000054 + -0x19c) =
           (undefined1 *)((int)register0x00000054 + -0x108);
      *(undefined1 **)((int)register0x00000054 + -0x198) =
           (undefined1 *)((int)register0x00000054 + -0x158);
      *(undefined4 *)((int)register0x00000054 + -0x194) = 0;
      *(undefined4 *)((int)register0x00000054 + -400) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x18c) = 0;
      k3c_internal_pkg_gcode___GCodeCommand__Get_float();
      *(undefined8 *)((int)register0x00000054 + -0x90) =
           *(undefined8 *)((int)register0x00000054 + -0x188);
      *(undefined8 *)((int)register0x00000054 + -0x160) = 0x4024000000000000;
      *(undefined8 *)((int)register0x00000054 + -0x168) = *DAT_006a09cc;
      *(undefined8 *)((int)register0x00000054 + -0x110) =
           *(undefined8 *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x10) + 0x54);
      *(undefined4 *)((int)register0x00000054 + -0x1ac) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x1a8) = DAT_006a09d0;
      *(undefined4 *)((int)register0x00000054 + -0x1a4) = 8;
      *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a09c8;
      *(undefined1 **)((int)register0x00000054 + -0x19c) =
           (undefined1 *)((int)register0x00000054 + -0x110);
      *(undefined1 **)((int)register0x00000054 + -0x198) =
           (undefined1 *)((int)register0x00000054 + -0x160);
      *(undefined1 **)((int)register0x00000054 + -0x194) =
           (undefined1 *)((int)register0x00000054 + -0x168);
      *(undefined4 *)((int)register0x00000054 + -400) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x18c) = 0;
      k3c_internal_pkg_gcode___GCodeCommand__Get_float();
      *(undefined8 *)((int)register0x00000054 + -0x88) =
           *(undefined8 *)((int)register0x00000054 + -0x188);
      *(undefined8 *)((int)register0x00000054 + -0x170) = 0x4024000000000000;
      *(undefined8 *)((int)register0x00000054 + -0x178) = 0;
      *(undefined8 *)((int)register0x00000054 + -0x118) =
           *(undefined8 *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x10) + 0x20);
      *(undefined4 *)((int)register0x00000054 + -0x1ac) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x1a8) = DAT_006a09d4;
      *(undefined4 *)((int)register0x00000054 + -0x1a4) = 10;
      *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a09c8;
      *(undefined1 **)((int)register0x00000054 + -0x19c) =
           (undefined1 *)((int)register0x00000054 + -0x118);
      *(undefined4 *)((int)register0x00000054 + -0x198) = 0;
      *(undefined1 **)((int)register0x00000054 + -0x194) =
           (undefined1 *)((int)register0x00000054 + -0x170);
      *(undefined1 **)((int)register0x00000054 + -400) =
           (undefined1 *)((int)register0x00000054 + -0x178);
      *(undefined4 *)((int)register0x00000054 + -0x18c) = 0;
      k3c_internal_pkg_gcode___GCodeCommand__Get_float();
      *(undefined8 *)((int)register0x00000054 + -0xac) =
           *(undefined8 *)((int)register0x00000054 + -0x188);
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + -0xd4);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x14c);
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + -0x14c);
      *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_006a09d8;
      *(undefined1 **)((int)register0x00000054 + -0x1a8) =
           (undefined1 *)((int)register0x00000054 + -0x4c);
      k3c_internal_pkg_util_value_IsNone();
      if (*(char *)((int)register0x00000054 + -0x1a4) == '\0') {
        *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x14c);
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x14c);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0xd4);
        puVar10 = (undefined4 *)((int)register0x00000054 + -0x58);
        iVar6 = 1;
      }
      else {
        puVar10 = *(undefined4 **)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x10) + 0x30);
        iVar6 = *(int *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x10) + 0x34);
      }
      *(int *)((int)register0x00000054 + -0x150) = iVar6;
      do {
        if (iVar6 < 1) {
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          return;
        }
        *(int *)((int)register0x00000054 + -0xe0) = iVar6;
        *(undefined4 **)((int)register0x00000054 + -0x18) = puVar10;
        uVar3 = puVar10[1];
        *(undefined4 *)((int)register0x00000054 + -0x144) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x70) = *puVar10;
        *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_006a09dc;
        *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x1a4) = uVar3;
        FUN_000986b8();
        iVar6 = *(int *)((int)register0x00000054 + -0x1a0);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x144);
        uVar11 = 0;
        iVar7 = 0;
        while (iVar7 < *(int *)((int)register0x00000054 + -0x144)) {
          *(int *)((int)register0x00000054 + -0xe4) = iVar7;
          *(int *)((int)register0x00000054 + -0x6c) = iVar6;
          *(undefined4 *)((int)register0x00000054 + -0x140) = uVar3;
          *(undefined8 *)((int)register0x00000054 + -0x120) =
               *(undefined8 *)(*(int *)((int)register0x00000054 + -0x70) + iVar7 * 8);
          *(uint *)((int)register0x00000054 + -0xe8) = uVar11 + 1;
          *(undefined4 *)((int)register0x00000054 + -0x1ac) =
               *(undefined4 *)((int)register0x00000054 + -0x120);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)((int)register0x00000054 + -0x11c);
          FUN_0008f6c0();
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x1a4);
          uVar8 = *(uint *)((int)register0x00000054 + -0x140);
          uVar11 = *(uint *)((int)register0x00000054 + -0xe8);
          if (uVar8 < uVar11) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar3;
            *(undefined4 *)((int)register0x00000054 + -0x1ac) =
                 *(undefined4 *)((int)register0x00000054 + -0x6c);
            *(uint *)((int)register0x00000054 + -0x1a8) = uVar11;
            *(uint *)((int)register0x00000054 + -0x1a4) = uVar8;
            *(undefined4 *)((int)register0x00000054 + -0x1a0) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x19c) = DAT_006a09dc;
            FUN_000987f4();
            iVar6 = *(int *)((int)register0x00000054 + -0x198);
            uVar11 = *(uint *)((int)register0x00000054 + -0x194);
            uVar8 = *(uint *)((int)register0x00000054 + -400);
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x1c);
          }
          else {
            iVar6 = *(int *)((int)register0x00000054 + -0x6c);
          }
          uVar14 = CONCAT44(uVar8,uVar3);
          *(undefined4 *)(iVar6 + (uVar11 - 1) * 8) = DAT_006a09c8;
          iVar7 = iVar6 + (uVar11 - 1) * 8;
          if (*DAT_006a09e4 != 0) {
            uVar14 = FUN_0009db64();
            *unaff_r8 = (int)uVar14;
            unaff_r8[1] = *(undefined4 *)(iVar7 + 4);
            uVar11 = extraout_r2_00;
            iVar6 = extraout_r3;
          }
          uVar3 = (undefined4)((ulonglong)uVar14 >> 0x20);
          *(int *)(iVar7 + 4) = (int)uVar14;
          iVar7 = *(int *)((int)register0x00000054 + -0xe4) + 1;
        }
        uVar14 = *(undefined8 *)(*(int *)((int)register0x00000054 + 4) + 8);
        *(undefined4 *)((int)register0x00000054 + -0x1ac) =
             *(undefined4 *)((int)register0x00000054 + -0xd8);
        *(int *)((int)register0x00000054 + -0x1a8) = iVar6;
        *(uint *)((int)register0x00000054 + -0x1a4) = uVar11;
        *(undefined4 *)((int)register0x00000054 + -0x1a0) = uVar3;
        *(undefined8 *)((int)register0x00000054 + -0x19c) = uVar14;
        k3c_internal_pkg_toolhead___Toolhead__Manual_move();
        if (*(int *)((int)register0x00000054 + -0x150) < 2) {
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + -0xd0);
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x148);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_006a09a8;
          *(undefined1 **)((int)register0x00000054 + -0x1a8) =
               (undefined1 *)((int)register0x00000054 + -0x60);
          k3c_internal_pkg_util_value_IsNone();
          bVar2 = *(byte *)((int)register0x00000054 + -0x1a4) ^ 1;
        }
        else {
          bVar2 = 1;
        }
        if (bVar2 != 0) {
          FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x34));
          uVar13 = 1;
          if (*(int *)((int)register0x00000054 + -0x144) == 0) goto LAB_006a0918;
          *(undefined8 *)((int)register0x00000054 + -0x128) =
               **(undefined8 **)((int)register0x00000054 + -0x70);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) =
               *(undefined4 *)((int)register0x00000054 + -0x128);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)((int)register0x00000054 + -0x124);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_006a09c8;
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -0x1a4);
          uVar13 = *(uint *)((int)register0x00000054 + -0x144) == 1;
          if (*(uint *)((int)register0x00000054 + -0x144) < 2) goto LAB_006a090c;
          *(undefined8 *)((int)register0x00000054 + -0x130) =
               *(undefined8 *)(*(int *)((int)register0x00000054 + -0x70) + 8);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) =
               *(undefined4 *)((int)register0x00000054 + -0x130);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)((int)register0x00000054 + -300);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_006a09c8;
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x1a4);
          uVar13 = *(uint *)((int)register0x00000054 + -0x144) == 2;
          if (*(uint *)((int)register0x00000054 + -0x144) < 3) goto LAB_006a0900;
          *(undefined8 *)((int)register0x00000054 + -0x138) =
               *(undefined8 *)(*(int *)((int)register0x00000054 + -0x70) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) =
               *(undefined4 *)((int)register0x00000054 + -0x138);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)((int)register0x00000054 + -0x134);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_006a09c8;
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x1a4);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_006a09e0;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0x20;
          *(undefined1 **)((int)register0x00000054 + -0x1a4) =
               (undefined1 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -0x1a0) = 3;
          *(undefined4 *)((int)register0x00000054 + -0x19c) = 3;
          k3c_internal_pkg_logger_Debugf();
        }
        bVar1 = false;
        while (!bVar1) {
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)((int)register0x00000054 + -0x40);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) =
               *(undefined4 *)((int)register0x00000054 + -0xd8);
          k3c_internal_pkg_toolhead___Toolhead__Wait_moves();
          *(undefined4 *)((int)register0x00000054 + -0x1ac) =
               *(undefined4 *)((int)register0x00000054 + -0xd8);
          *(undefined8 *)((int)register0x00000054 + -0x1a8) = 0x3fe0000000000000;
          uVar3 = k3c_internal_pkg_toolhead___Toolhead__Dwell();
          FUN_0009e2f0(uVar3,*(undefined4 *)((int)register0x00000054 + -0x68),
                       (undefined1 *)((int)register0x00000054 + -0x14));
          *(undefined1 **)((int)register0x00000054 + -0x1ac) =
               (undefined1 *)((int)register0x00000054 + -0xcc);
          FUN_0009e2f0((undefined1 *)((int)register0x00000054 + -0xcc),
                       (undefined1 *)((int)register0x00000054 + -0x14),
                       (undefined1 *)((int)register0x00000054 + -0x1a8));
          *(undefined4 *)((int)register0x00000054 + -0x194) =
               *(undefined4 *)((int)register0x00000054 + 8);
          k3c_internal_pkg_motion_vibration___VibrationPulseTest__Run_test();
          bVar1 = true;
        }
        puVar10 = (undefined4 *)(*(int *)((int)register0x00000054 + -0x18) + 0xc);
        iVar6 = *(int *)((int)register0x00000054 + -0xe0) + -1;
      } while( true );
    }
    *(undefined4 *)((int)register0x00000054 + -0x1ac) =
         *(undefined4 *)((int)register0x00000054 + -0xd0);
    *(undefined4 *)((int)register0x00000054 + -0x1a8) =
         *(undefined4 *)((int)register0x00000054 + -0x148);
    *(undefined4 *)((int)register0x00000054 + -0x1a4) = DAT_006a09bc;
    *(undefined4 *)((int)register0x00000054 + -0x1a0) = 1;
    *(undefined4 *)((int)register0x00000054 + -0x19c) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x198) = 0xffffffff;
    FUN_0014f168();
    uVar13 = 0;
    if (*(int *)((int)register0x00000054 + -400) == 3) {
      *(undefined4 *)((int)register0x00000054 + -0xdc) =
           *(undefined4 *)((int)register0x00000054 + -0x194);
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x100));
      iVar6 = extraout_r2;
      for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
        *(int *)((int)register0x00000054 + -0x13c) = iVar7;
        uVar3 = *(undefined4 *)(iVar6 + iVar7 * 8 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x1ac) = *(undefined4 *)(iVar6 + iVar7 * 8);
        *(undefined4 *)((int)register0x00000054 + -0x1a8) = uVar3;
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_006a09a8;
        *(undefined4 *)((int)register0x00000054 + -0x1a8) =
             *(undefined4 *)((int)register0x00000054 + -0x1a4);
        k3c_internal_pkg_util_cast_ToFloat64E();
        uVar13 = *(int *)((int)register0x00000054 + -0x19c) == 0;
        if (!(bool)uVar13) goto LAB_006a0924;
        iVar7 = *(int *)((int)register0x00000054 + -0x13c);
        *(undefined8 *)((int)register0x00000054 + iVar7 * 8 + -0x100) =
             *(undefined8 *)((int)register0x00000054 + -0x1a4);
        iVar6 = *(int *)((int)register0x00000054 + -0xdc);
      }
      uVar3 = 3;
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x100);
      goto LAB_006a03b8;
    }
    goto LAB_006a0958;
  }
  goto LAB_006a0990;
LAB_006a0900:
  FUN_0009dbd4(2,2);
LAB_006a090c:
  FUN_0009dbd4(1,1);
LAB_006a0918:
  FUN_0009dbd4(0,0);
LAB_006a0924:
  *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_006a09e8;
  FUN_00022cf8();
  puVar10 = *(undefined4 **)((int)register0x00000054 + -0x1a8);
  puVar10[1] = 0x5a;
  *puVar10 = DAT_006a09ec;
  *(undefined4 *)((int)register0x00000054 + -0x1ac) = *DAT_006a09f0;
  *(undefined4 **)((int)register0x00000054 + -0x1a8) = puVar10;
  FUN_00095b00();
LAB_006a0958:
  *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_006a09e8;
  FUN_00022cf8();
  puVar10 = *(undefined4 **)((int)register0x00000054 + -0x1a8);
  puVar10[1] = 0x28;
  *puVar10 = DAT_006a09f4;
  *(undefined4 *)((int)register0x00000054 + -0x1ac) = *DAT_006a09f0;
  *(undefined4 **)((int)register0x00000054 + -0x1a8) = puVar10;
  param_1 = FUN_00095b00();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1b0);
  if ((bool)uVar13) {
    register0x00000054 = (BADSPACEBASE *)puVar12;
  }
LAB_006a0990:
  unaff_lr = 0x6a0998;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x006a01b4;
}



/* k3c/internal/pkg/motion/vibration.(*ResonanceTester).cmd_SHAPER_CALIBRATE @ 006a09f8 (size 2392) */

void k3c_internal_pkg_motion_vibration___ResonanceTester__cmd_SHAPER_CALIBRATE(undefined4 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *extraout_r1;
  int iVar6;
  int extraout_r1_00;
  int extraout_r2;
  int iVar7;
  int extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  undefined8 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x124)) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x1a4);
      *(undefined4 *)((int)register0x00000054 + -0x1a4) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x1a0) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x19c) = DAT_006a1210;
      *(undefined4 *)((int)register0x00000054 + -0x198) = 8;
      *(undefined4 *)((int)register0x00000054 + -0x194) = DAT_006a1214;
      *(undefined4 *)((int)register0x00000054 + -400) = DAT_006a1218;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      uVar10 = CONCAT44(DAT_006a121c,*(int *)((int)register0x00000054 + -0x18c));
      uVar9 = 0;
      if (*(int *)((int)register0x00000054 + -0x18c) == DAT_006a121c) {
        *(undefined4 *)((int)register0x00000054 + -0x1a0) =
             *(undefined4 *)((int)register0x00000054 + -0x188);
        *(undefined4 *)((int)register0x00000054 + -0x19c) = DAT_006a1220;
        *(undefined4 *)((int)register0x00000054 + -0x198) = 3;
        k3c_internal_pkg_toolhead___Toolhead__IsHomedAxis();
        if (*(char *)((int)register0x00000054 + -0x194) == '\0') {
          *(undefined4 *)((int)register0x00000054 + -0x1a0) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
          *(undefined4 *)((int)register0x00000054 + -0x19c) = DAT_006a1224;
          *(undefined4 *)((int)register0x00000054 + -0x198) = 3;
          k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
        }
        uVar1 = *DAT_006a1228;
        uVar3 = *DAT_006a122c;
        *(undefined4 *)((int)register0x00000054 + -0x1a0) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x19c) = DAT_006a1230;
        *(undefined4 *)((int)register0x00000054 + -0x198) = 4;
        *(undefined4 *)((int)register0x00000054 + -0x194) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -400) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x18c) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x188) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x184) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x180) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x17c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x178) = 0;
        k3c_internal_pkg_gcode___GCodeCommand__Get();
        *(undefined4 *)((int)register0x00000054 + -0xac) =
             *(undefined4 *)((int)register0x00000054 + -0x174);
        *(undefined4 *)((int)register0x00000054 + -300) =
             *(undefined4 *)((int)register0x00000054 + -0x170);
        *(undefined4 *)((int)register0x00000054 + -0x74) =
             *(undefined4 *)((int)register0x00000054 + -0x174);
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0x170);
        *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a1234;
        *(undefined1 **)((int)register0x00000054 + -0x19c) =
             (undefined1 *)((int)register0x00000054 + -0x74);
        k3c_internal_pkg_util_value_False();
        if (*(char *)((int)register0x00000054 + -0x198) == '\0') {
          *(undefined4 *)((int)register0x00000054 + -0x1a0) =
               *(undefined4 *)((int)register0x00000054 + -0xac);
          *(undefined4 *)((int)register0x00000054 + -0x19c) =
               *(undefined4 *)((int)register0x00000054 + -300);
          FUN_00150c8c();
          *(undefined4 *)((int)register0x00000054 + -0x108) =
               *(undefined4 *)((int)register0x00000054 + -0x198);
          *(undefined4 *)((int)register0x00000054 + -0x148) =
               *(undefined4 *)((int)register0x00000054 + -0x194);
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x8c),
                       *(undefined4 *)((int)register0x00000054 + -0x194),
                       *(undefined4 *)((int)register0x00000054 + -0x198));
          *(undefined4 *)((int)register0x00000054 + -0x88) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = DAT_006a1238;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x84) = DAT_006a123c;
          iVar7 = extraout_r2;
          uVar1 = extraout_r3;
          for (iVar6 = 0; iVar6 < 2; iVar6 = iVar6 + 1) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + iVar6 * 8 + -0x8c);
            if (*(int *)((int)register0x00000054 + iVar6 * 8 + -0x88) == iVar7) {
              *(int *)((int)register0x00000054 + -0x10c) = iVar6;
              *(undefined4 *)((int)register0x00000054 + -0x1a0) = uVar1;
              *(undefined4 *)((int)register0x00000054 + -0x19c) = uVar3;
              *(int *)((int)register0x00000054 + -0x198) = iVar7;
              FUN_00018250(1);
              if (*(char *)((int)register0x00000054 + -0x194) != '\0') {
                iVar6 = *(int *)((int)register0x00000054 + -0x10c);
                break;
              }
              iVar6 = *(int *)((int)register0x00000054 + -0x10c);
              iVar7 = *(int *)((int)register0x00000054 + -0x148);
              uVar1 = *(undefined4 *)((int)register0x00000054 + -0x108);
            }
          }
          if (iVar6 < 2) {
            *(undefined4 *)((int)register0x00000054 + -0x1a0) =
                 *(undefined4 *)((int)register0x00000054 + -0xac);
            *(undefined4 *)((int)register0x00000054 + -0x19c) =
                 *(undefined4 *)((int)register0x00000054 + -300);
            FUN_00150c8c();
            *(undefined4 *)((int)register0x00000054 + -0x1a0) =
                 *(undefined4 *)((int)register0x00000054 + -0x198);
            *(undefined4 *)((int)register0x00000054 + -0x19c) =
                 *(undefined4 *)((int)register0x00000054 + -0x194);
            *(undefined4 *)((int)register0x00000054 + -0x198) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x194) = 0;
            *(undefined4 *)((int)register0x00000054 + -400) = 0;
            k3c_internal_pkg_motion_vibration_NewTestAxis();
            *(undefined4 *)((int)register0x00000054 + -0x90) =
                 *(undefined4 *)((int)register0x00000054 + -0x18c);
            uVar1 = 1;
            puVar4 = (undefined1 *)((int)register0x00000054 + -0x90);
            goto LAB_006a0ca0;
          }
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a1238;
          *(undefined4 *)((int)register0x00000054 + -0x19c) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x198) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x194) = 0;
          *(undefined4 *)((int)register0x00000054 + -400) = 0;
          k3c_internal_pkg_motion_vibration_NewTestAxis();
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x18c);
          *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a123c;
          *(undefined4 *)((int)register0x00000054 + -0x19c) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x198) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x194) = 0;
          *(undefined4 *)((int)register0x00000054 + -400) = 0;
          k3c_internal_pkg_motion_vibration_NewTestAxis();
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + -4);
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)((int)register0x00000054 + -0x18c);
          uVar1 = 2;
          puVar4 = (undefined1 *)((int)register0x00000054 + -0x7c);
LAB_006a0ca0:
          *(undefined1 **)((int)register0x00000054 + -0xec) = puVar4;
          *(undefined4 *)((int)register0x00000054 + -0x130) = uVar1;
          *(undefined8 *)((int)register0x00000054 + -0x144) = *DAT_006a1240;
          *(undefined8 *)((int)register0x00000054 + -0x118) =
               *(undefined8 *)(*(int *)((int)register0x00000054 + 4) + 0x20);
          *(undefined4 *)((int)register0x00000054 + -0x1a0) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x19c) = DAT_006a1244;
          *(undefined4 *)((int)register0x00000054 + -0x198) = 0xd;
          *(undefined4 *)((int)register0x00000054 + -0x194) = DAT_006a1248;
          *(undefined1 **)((int)register0x00000054 + -400) =
               (undefined1 *)((int)register0x00000054 + -0x118);
          *(undefined1 **)((int)register0x00000054 + -0x18c) =
               (undefined1 *)((int)register0x00000054 + -0x144);
          *(undefined4 *)((int)register0x00000054 + -0x188) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x184) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x180) = 0;
          k3c_internal_pkg_gcode___GCodeCommand__Get_float();
          *(undefined8 *)((int)register0x00000054 + -0x138) =
               *(undefined8 *)((int)register0x00000054 + -0x17c);
          uVar1 = FUN_001160a8();
          uVar1 = FUN_0009e2f0(uVar1,(undefined1 *)((int)register0x00000054 + -0x1a0),
                               (undefined1 *)((int)register0x00000054 + -0x4c));
          FUN_0009e2f0(uVar1,(undefined1 *)((int)register0x00000054 + -0x4c),
                       (undefined1 *)((int)register0x00000054 + -0x1a0));
          *(undefined4 *)((int)register0x00000054 + -0x18c) = DAT_006a124c;
          *(undefined4 *)((int)register0x00000054 + -0x188) = 0xf;
          FUN_00101cdc();
          *(undefined4 *)((int)register0x00000054 + -0x98) =
               *(undefined4 *)((int)register0x00000054 + -0x184);
          *(undefined4 *)((int)register0x00000054 + -0x94) =
               *(undefined4 *)((int)register0x00000054 + -0x180);
          uVar1 = *DAT_006a1228;
          uVar3 = *DAT_006a122c;
          *(undefined4 *)((int)register0x00000054 + -0x1a0) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x19c) = DAT_006a1250;
          *(undefined4 *)((int)register0x00000054 + -0x198) = 4;
          *(undefined4 *)((int)register0x00000054 + -0x194) = DAT_006a1234;
          *(undefined1 **)((int)register0x00000054 + -400) =
               (undefined1 *)((int)register0x00000054 + -0x98);
          *(undefined4 *)((int)register0x00000054 + -0x18c) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x188) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x184) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x180) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x17c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x178) = 0;
          k3c_internal_pkg_gcode___GCodeCommand__Get();
          *(undefined4 *)((int)register0x00000054 + -0xf8) =
               *(undefined4 *)((int)register0x00000054 + -0x174);
          *(undefined4 *)((int)register0x00000054 + -0x13c) =
               *(undefined4 *)((int)register0x00000054 + -0x170);
          *(undefined4 *)((int)register0x00000054 + -0x1a0) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x19c) =
               *(undefined4 *)((int)register0x00000054 + -0x174);
          *(undefined4 *)((int)register0x00000054 + -0x198) =
               *(undefined4 *)((int)register0x00000054 + -0x170);
          k3c_internal_pkg_motion_vibration___ResonanceTester__is_valid_name_suffix();
          if (*(char *)((int)register0x00000054 + -0x194) != '\0') {
            *(undefined4 *)((int)register0x00000054 + -0xfc) =
                 **(undefined4 **)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a1254;
            FUN_00022cf8();
            puVar5 = *(undefined4 **)((int)register0x00000054 + -0x19c);
            if (*DAT_006a1258 == 0) {
              uVar1 = *(undefined4 *)((int)register0x00000054 + -0xfc);
            }
            else {
              FUN_0009db54();
              uVar1 = *(undefined4 *)((int)register0x00000054 + -0xfc);
              *unaff_r8 = uVar1;
              puVar5 = extraout_r1;
            }
            *(undefined4 **)((int)register0x00000054 + -0x100) = puVar5;
            *puVar5 = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x1a0) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x19c) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x198) =
                 *(undefined4 *)((int)register0x00000054 + -0xec);
            *(undefined4 *)((int)register0x00000054 + -0x194) =
                 *(undefined4 *)((int)register0x00000054 + -0x130);
            *(undefined4 *)((int)register0x00000054 + -400) =
                 *(undefined4 *)((int)register0x00000054 + -0x130);
            *(undefined4 **)((int)register0x00000054 + -0x18c) = puVar5;
            *(undefined4 *)((int)register0x00000054 + -0x188) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x184) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x180) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x17c) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x178) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x174) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x170) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x16c) = 0;
            k3c_internal_pkg_motion_vibration___ResonanceTester___run_test();
            pcVar2 = *(code **)*DAT_006a125c;
            uVar1 = **(undefined4 **)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0xf0) =
                 *(undefined4 *)((int)register0x00000054 + -0x168);
            *(undefined4 *)((int)register0x00000054 + -0x1a0) = uVar1;
            (*pcVar2)();
            *(undefined4 *)((int)register0x00000054 + -0xf4) =
                 *(undefined4 *)((int)register0x00000054 + -0x19c);
            iVar6 = 0;
            while( true ) {
              if (*(int *)((int)register0x00000054 + -0x130) <= iVar6) {
                *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_006a13c0;
                *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_006a13c4;
                *(undefined1 **)((int)register0x00000054 + -0x1a0) =
                     (undefined1 *)((int)register0x00000054 + -0x10);
                *(undefined4 *)((int)register0x00000054 + -0x19c) = 1;
                *(undefined4 *)((int)register0x00000054 + -0x198) = 1;
                uVar1 = k3c_internal_pkg_logger_Debug();
                FUN_000946d8(uVar1);
                *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
                *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
                return;
              }
              *(int *)((int)register0x00000054 + -0x10c) = iVar6;
              puVar5 = *(undefined4 **)(*(int *)((int)register0x00000054 + -0xec) + iVar6 * 4);
              *(undefined4 **)((int)register0x00000054 + -0x104) = puVar5;
              uVar1 = *puVar5;
              *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
              uVar3 = puVar5[1];
              *(undefined4 *)((int)register0x00000054 + -0x110) = uVar3;
              *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x1a0) = uVar1;
              *(undefined4 *)((int)register0x00000054 + -0x19c) = uVar3;
              FUN_0008f77c(*(int *)((int)register0x00000054 + -0xec));
              *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_006a1234;
              *(undefined4 *)((int)register0x00000054 + -0xc) =
                   *(undefined4 *)((int)register0x00000054 + -0x198);
              *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a1274;
              *(undefined4 *)((int)register0x00000054 + -0x19c) = 0x38;
              *(undefined1 **)((int)register0x00000054 + -0x198) =
                   (undefined1 *)((int)register0x00000054 + -0x10);
              *(undefined4 *)((int)register0x00000054 + -0x194) = 1;
              *(undefined4 *)((int)register0x00000054 + -400) = 1;
              k3c_internal_pkg_logger_Debugf();
              *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a1264;
              *(undefined4 *)((int)register0x00000054 + -0x19c) =
                   *(undefined4 *)((int)register0x00000054 + -0xf0);
              *(undefined4 *)((int)register0x00000054 + -0x198) =
                   *(undefined4 *)((int)register0x00000054 + -0x104);
              FUN_00024fd0();
              iVar6 = **(int **)((int)register0x00000054 + -0x194);
              iVar7 = DAT_006a1278;
              if (iVar6 != DAT_006a1278) goto LAB_006a12d4;
              *(int *)((int)register0x00000054 + -0x1a0) =
                   (*(int **)((int)register0x00000054 + -0x194))[1];
              k3c_internal_pkg_motion_vibration___CalibrationData__Normalize_to_frequencies();
              FUN_0009ded8(0,(undefined1 *)((int)register0x00000054 + -0x4c));
              *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a1264;
              *(undefined4 *)((int)register0x00000054 + -0x19c) =
                   *(undefined4 *)((int)register0x00000054 + -0xf0);
              *(undefined4 *)((int)register0x00000054 + -0x198) =
                   *(undefined4 *)((int)register0x00000054 + -0x104);
              FUN_00024fd0();
              iVar6 = **(int **)((int)register0x00000054 + -0x194);
              if (iVar6 != DAT_006a1278) break;
              iVar6 = (*(int **)((int)register0x00000054 + -0x194))[1];
              *(undefined4 *)((int)register0x00000054 + -0x1a0) =
                   *(undefined4 *)((int)register0x00000054 + -0x100);
              *(int *)((int)register0x00000054 + -0x19c) = iVar6;
              *(undefined8 *)((int)register0x00000054 + -0x198) =
                   *(undefined8 *)((int)register0x00000054 + -0x138);
              k3c_internal_pkg_motion_vibration___ShaperCalibrate__find_best_shaper();
              *(undefined4 *)((int)register0x00000054 + -0xa8) =
                   *(undefined4 *)((int)register0x00000054 + -0x154);
              *(undefined4 *)((int)register0x00000054 + -0x128) =
                   *(undefined4 *)((int)register0x00000054 + -0x150);
              *(undefined4 *)((int)register0x00000054 + -0x124) =
                   *(undefined4 *)((int)register0x00000054 + -0x14c);
              uVar1 = FUN_0009e2a0(*(undefined4 *)((int)register0x00000054 + -0x154),
                                   (undefined1 *)((int)register0x00000054 + -400),
                                   (undefined1 *)((int)register0x00000054 + -0x4c));
              FUN_0009e2a0(uVar1,(undefined1 *)((int)register0x00000054 + -0x4c),
                           (undefined1 *)((int)register0x00000054 + -0xe8));
              FUN_0009def4(0,(undefined1 *)((int)register0x00000054 + -0x6c));
              *(undefined4 *)((int)register0x00000054 + -0x1a0) =
                   *(undefined4 *)((int)register0x00000054 + -8);
              *(undefined4 *)((int)register0x00000054 + -0x19c) =
                   *(undefined4 *)((int)register0x00000054 + -0x110);
              FUN_0008f77c();
              *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_006a1234;
              *(undefined4 *)((int)register0x00000054 + -0x68) =
                   *(undefined4 *)((int)register0x00000054 + -0x198);
              *(undefined4 *)((int)register0x00000054 + -0x1a0) =
                   *(undefined4 *)((int)register0x00000054 + -0xe8);
              *(undefined4 *)((int)register0x00000054 + -0x19c) =
                   *(undefined4 *)((int)register0x00000054 + -0xe4);
              FUN_0008f77c();
              *(undefined4 *)((int)register0x00000054 + -100) = DAT_006a1234;
              *(undefined4 *)((int)register0x00000054 + -0x60) =
                   *(undefined4 *)((int)register0x00000054 + -0x198);
              *(undefined4 *)((int)register0x00000054 + -0x1a0) =
                   *(undefined4 *)((int)register0x00000054 + -8);
              *(undefined4 *)((int)register0x00000054 + -0x19c) =
                   *(undefined4 *)((int)register0x00000054 + -0x110);
              FUN_0008f77c();
              *(undefined4 *)((int)register0x00000054 + -0x5c) = DAT_006a1234;
              *(undefined4 *)((int)register0x00000054 + -0x58) =
                   *(undefined4 *)((int)register0x00000054 + -0x198);
              *(undefined8 *)((int)register0x00000054 + -0x120) =
                   *(undefined8 *)((int)register0x00000054 + -0xe0);
              *(undefined4 *)((int)register0x00000054 + -0x1a0) =
                   *(undefined4 *)((int)register0x00000054 + -0x120);
              *(undefined4 *)((int)register0x00000054 + -0x19c) =
                   *(undefined4 *)((int)register0x00000054 + -0x11c);
              FUN_0008f6c0();
              *(undefined4 *)((int)register0x00000054 + -0x54) = DAT_006a1248;
              *(undefined4 *)((int)register0x00000054 + -0x50) =
                   *(undefined4 *)((int)register0x00000054 + -0x198);
              *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a1260;
              *(undefined4 *)((int)register0x00000054 + -0x19c) = 0x39;
              *(undefined1 **)((int)register0x00000054 + -0x198) =
                   (undefined1 *)((int)register0x00000054 + -0x6c);
              *(undefined4 *)((int)register0x00000054 + -0x194) = 4;
              *(undefined4 *)((int)register0x00000054 + -400) = 4;
              k3c_internal_pkg_logger_Debugf();
              *(undefined4 *)((int)register0x00000054 + -0x1a0) =
                   *(undefined4 *)((int)register0x00000054 + -0x100);
              *(undefined4 *)((int)register0x00000054 + -0x19c) =
                   *(undefined4 *)((int)register0x00000054 + -0xf4);
              *(undefined4 *)((int)register0x00000054 + -0x198) =
                   *(undefined4 *)((int)register0x00000054 + -8);
              *(undefined4 *)((int)register0x00000054 + -0x194) =
                   *(undefined4 *)((int)register0x00000054 + -0x110);
              *(undefined4 *)((int)register0x00000054 + -400) =
                   *(undefined4 *)((int)register0x00000054 + -0xe8);
              *(undefined4 *)((int)register0x00000054 + -0x18c) =
                   *(undefined4 *)((int)register0x00000054 + -0xe4);
              *(undefined8 *)((int)register0x00000054 + -0x188) =
                   *(undefined8 *)((int)register0x00000054 + -0xe0);
              k3c_internal_pkg_motion_vibration___ShaperCalibrate__Save_params();
              *(undefined4 *)((int)register0x00000054 + -0xa4) =
                   *(undefined4 *)((int)register0x00000054 + -0xa8);
              *(undefined4 *)((int)register0x00000054 + -0xa0) =
                   *(undefined4 *)((int)register0x00000054 + -0x128);
              *(undefined4 *)((int)register0x00000054 + -0x9c) =
                   *(undefined4 *)((int)register0x00000054 + -0x124);
              *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a1264;
              *(undefined4 *)((int)register0x00000054 + -0x19c) =
                   *(undefined4 *)((int)register0x00000054 + -0xf0);
              *(undefined4 *)((int)register0x00000054 + -0x198) =
                   *(undefined4 *)((int)register0x00000054 + -0x104);
              FUN_00024fd0();
              uVar3 = **(undefined4 **)((int)register0x00000054 + -0x194);
              uVar1 = (*(undefined4 **)((int)register0x00000054 + -0x194))[1];
              *(undefined4 *)((int)register0x00000054 + -0x1a0) =
                   *(undefined4 *)((int)register0x00000054 + 4);
              *(undefined4 *)((int)register0x00000054 + -0x19c) = DAT_006a1268;
              *(undefined4 *)((int)register0x00000054 + -0x198) = 0x10;
              *(undefined4 *)((int)register0x00000054 + -0x194) =
                   *(undefined4 *)((int)register0x00000054 + -0xf8);
              *(undefined4 *)((int)register0x00000054 + -400) =
                   *(undefined4 *)((int)register0x00000054 + -0x13c);
              *(undefined4 *)((int)register0x00000054 + -0x18c) =
                   *(undefined4 *)((int)register0x00000054 + -0x100);
              *(undefined4 *)((int)register0x00000054 + -0x188) =
                   *(undefined4 *)((int)register0x00000054 + -0x104);
              *(undefined4 *)((int)register0x00000054 + -0x184) = uVar3;
              *(undefined4 *)((int)register0x00000054 + -0x180) = uVar1;
              *(undefined4 *)((int)register0x00000054 + -0x17c) = DAT_006a126c;
              *(undefined1 **)((int)register0x00000054 + -0x178) =
                   (undefined1 *)((int)register0x00000054 + -0xa4);
              *(undefined4 *)((int)register0x00000054 + -0x174) = 0;
              unaff_r8 = (undefined4 *)0x0;
              *(undefined4 *)((int)register0x00000054 + -0x170) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x16c) = 0;
              k3c_internal_pkg_motion_vibration___ResonanceTester__save_calibration_data();
              *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x1a0) =
                   *(undefined4 *)((int)register0x00000054 + -0x168);
              *(undefined4 *)((int)register0x00000054 + -0x19c) =
                   *(undefined4 *)((int)register0x00000054 + -0x164);
              FUN_0008f77c();
              *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_006a1234;
              *(undefined4 *)((int)register0x00000054 + -0xc) =
                   *(undefined4 *)((int)register0x00000054 + -0x198);
              *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a1270;
              *(undefined4 *)((int)register0x00000054 + -0x19c) = 0x2a;
              *(undefined1 **)((int)register0x00000054 + -0x198) =
                   (undefined1 *)((int)register0x00000054 + -0x10);
              *(undefined4 *)((int)register0x00000054 + -0x194) = 1;
              *(undefined4 *)((int)register0x00000054 + -400) = 1;
              k3c_internal_pkg_logger_Debugf();
              iVar6 = *(int *)((int)register0x00000054 + -0x10c) + 1;
            }
            *(int *)((int)register0x00000054 + -0x1a0) = iVar6;
            *(int *)((int)register0x00000054 + -0x19c) = DAT_006a1278;
            *(undefined4 *)((int)register0x00000054 + -0x198) = DAT_006a13c8;
            FUN_000209b4();
            iVar6 = extraout_r1_00;
            iVar7 = extraout_r2_00;
LAB_006a12d4:
            *(int *)((int)register0x00000054 + -0x1a0) = iVar6;
            *(int *)((int)register0x00000054 + -0x19c) = iVar7;
            *(undefined4 *)((int)register0x00000054 + -0x198) = DAT_006a13c8;
            FUN_000209b4();
          }
          *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a13cc;
          FUN_00022cf8();
          puVar5 = *(undefined4 **)((int)register0x00000054 + -0x19c);
          puVar5[1] = 0x16;
          *puVar5 = DAT_006a13d0;
          *(undefined4 *)((int)register0x00000054 + -0x1a0) = *DAT_006a13d4;
          *(undefined4 **)((int)register0x00000054 + -0x19c) = puVar5;
          FUN_00095b00();
        }
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x1a0) =
             *(undefined4 *)((int)register0x00000054 + -0xac);
        *(undefined4 *)((int)register0x00000054 + -0x19c) =
             *(undefined4 *)((int)register0x00000054 + -300);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_006a13c0;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x198);
        *(undefined4 *)((int)register0x00000054 + -0x1a0) = DAT_006a13d8;
        *(undefined4 *)((int)register0x00000054 + -0x19c) = 0x15;
        *(undefined1 **)((int)register0x00000054 + -0x198) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x194) = 1;
        *(undefined4 *)((int)register0x00000054 + -400) = 1;
        FUN_001386c4();
        uVar9 = *(int *)((int)register0x00000054 + -0x18c) == 0;
        uVar1 = 0;
        if (!(bool)uVar9) {
          uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x18c) + 4);
        }
        *(undefined4 *)((int)register0x00000054 + -0x1a0) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x19c) =
             *(undefined4 *)((int)register0x00000054 + -0x188);
        uVar10 = FUN_00095b00();
      }
      *(undefined8 *)((int)register0x00000054 + -0x1a0) = uVar10;
      *(undefined4 *)((int)register0x00000054 + -0x198) = DAT_006a13c8;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1a4);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x6a13b8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*ResonanceTester).cmd_MEASURE_AXES_NOISE @ 006a13dc (size 1380) */

void k3c_internal_pkg_motion_vibration___ResonanceTester__cmd_MEASURE_AXES_NOISE(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *extraout_r1;
  int iVar3;
  uint uVar4;
  undefined4 extraout_r2;
  undefined4 uVar5;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  bool bVar10;
  undefined8 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x44)) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0xc4);
      *(undefined4 *)((int)register0x00000054 + -0xc4) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0xc0) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0xbc) = DAT_006a1944;
      *(undefined4 *)((int)register0x00000054 + -0xb8) = 9;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = DAT_006a1948;
      *(undefined4 *)((int)register0x00000054 + -0xb0) = DAT_006a194c;
      *(undefined4 *)((int)register0x00000054 + -0xac) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 0;
      k3c_internal_pkg_gcode___GCodeCommand__Get_float();
      puVar1 = *(undefined4 **)((int)register0x00000054 + 4);
      puVar2 = (undefined4 *)puVar1[0xb];
      uVar11 = *(undefined8 *)((int)register0x00000054 + -0x9c);
      *(undefined8 *)((int)register0x00000054 + -0x8c) = uVar11;
      iVar3 = puVar1[0xc];
      uVar5 = 0;
      iVar6 = 0;
      uVar8 = 0;
      while( true ) {
        *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
        if (iVar3 < 1) break;
        *(int *)((int)register0x00000054 + -0x74) = iVar3;
        *(undefined4 *)((int)register0x00000054 + -0x90) = uVar8;
        *(undefined4 **)((int)register0x00000054 + -0x4c) = puVar2;
        *(undefined4 *)((int)register0x00000054 + -0x50) = *puVar2;
        *(undefined4 *)((int)register0x00000054 + -0x78) = puVar2[1];
        *(int *)((int)register0x00000054 + -0x7c) = iVar6 + 1;
        pcVar7 = *(code **)(puVar2[2] + 0x18);
        *(undefined4 *)((int)register0x00000054 + -0xc0) = puVar2[3];
        (*pcVar7)((int)uVar11);
        *(undefined4 *)((int)register0x00000054 + -0x80) =
             *(undefined4 *)((int)register0x00000054 + -0xbc);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0xb8);
        FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x3c));
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined4 *)((int)register0x00000054 + -0xbc) =
             *(undefined4 *)((int)register0x00000054 + -0x78);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_006a1950;
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0xb8);
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x80);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        uVar4 = *(uint *)((int)register0x00000054 + -0x7c);
        if (*(uint *)((int)register0x00000054 + -0x90) < uVar4) {
          *(undefined4 *)((int)register0x00000054 + -0xc0) =
               *(undefined4 *)((int)register0x00000054 + -0x6c);
          *(uint *)((int)register0x00000054 + -0xbc) = uVar4;
          *(uint *)((int)register0x00000054 + -0xb8) = *(uint *)((int)register0x00000054 + -0x90);
          *(undefined4 *)((int)register0x00000054 + -0xb4) = 1;
          *(undefined4 *)((int)register0x00000054 + -0xb0) = DAT_006a1954;
          FUN_000987f4();
          iVar3 = *(int *)((int)register0x00000054 + -0xac);
          uVar4 = *(uint *)((int)register0x00000054 + -0xa8);
          uVar8 = *(undefined4 *)((int)register0x00000054 + -0xa4);
        }
        else {
          iVar3 = *(int *)((int)register0x00000054 + -0x6c);
          uVar8 = *(undefined4 *)((int)register0x00000054 + -0x90);
        }
        *(uint *)((int)register0x00000054 + -0x94) = uVar4;
        iVar6 = iVar3 + uVar4 * 0x18 + -0x18;
        if (*DAT_006a1958 != 0) {
          *(int *)((int)register0x00000054 + -0x58) = iVar3;
          *(undefined4 *)((int)register0x00000054 + -0x84) = uVar8;
          *(int *)((int)register0x00000054 + -0x5c) = iVar6;
          *(undefined4 *)((int)register0x00000054 + -0xc0) = DAT_006a1954;
          *(int *)((int)register0x00000054 + -0xbc) = iVar6;
          *(undefined1 **)((int)register0x00000054 + -0xb8) =
               (undefined1 *)((int)register0x00000054 + -0x3c);
          FUN_00026c00();
          uVar4 = *(uint *)((int)register0x00000054 + -0x94);
          iVar6 = *(int *)((int)register0x00000054 + -0x5c);
          iVar3 = *(int *)((int)register0x00000054 + -0x58);
          uVar8 = *(undefined4 *)((int)register0x00000054 + -0x84);
        }
        FUN_0009e2e8(uVar4,(undefined1 *)((int)register0x00000054 + -0x3c),iVar6,iVar3);
        puVar2 = (undefined4 *)(*(int *)((int)register0x00000054 + -0x4c) + 0x10);
        iVar3 = *(int *)((int)register0x00000054 + -0x74) + -1;
        puVar1 = *(undefined4 **)((int)register0x00000054 + 4);
        uVar11 = *(undefined8 *)((int)register0x00000054 + -0x8c);
        iVar6 = *(int *)((int)register0x00000054 + -0x94);
        uVar5 = extraout_r3;
      }
      *(int *)((int)register0x00000054 + -0x94) = iVar6;
      pcVar7 = *(code **)*DAT_006a195c;
      *(undefined4 *)((int)register0x00000054 + -0xc0) = *puVar1;
      (*pcVar7)();
      *(undefined4 *)((int)register0x00000054 + -0xc0) =
           *(undefined4 *)((int)register0x00000054 + -0xbc);
      *(undefined8 *)((int)register0x00000054 + -0xbc) =
           *(undefined8 *)((int)register0x00000054 + -0x8c);
      k3c_internal_pkg_toolhead___Toolhead__Dwell();
      iVar3 = *(int *)((int)register0x00000054 + -0x6c);
      iVar6 = *(int *)((int)register0x00000054 + -0x94);
      while (0 < iVar6) {
        *(int *)((int)register0x00000054 + -0x74) = iVar6;
        *(int *)((int)register0x00000054 + -0x4c) = iVar3;
        FUN_0009e2e8(iVar3,iVar3,(undefined1 *)((int)register0x00000054 + -0x3c));
        pcVar7 = *(code **)(*(int *)((int)register0x00000054 + -0x34) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        (*pcVar7)();
        iVar3 = *(int *)((int)register0x00000054 + -0x4c) + 0x18;
        iVar6 = *(int *)((int)register0x00000054 + -0x74) + -1;
      }
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0xc0) = DAT_006a1960;
      FUN_00022cf8();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0xbc);
      if (*DAT_006a1958 == 0) {
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x68);
      }
      else {
        FUN_0009db54();
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x68);
        *unaff_r8 = uVar5;
        puVar1 = extraout_r1;
      }
      *(undefined4 **)((int)register0x00000054 + -0x70) = puVar1;
      *puVar1 = uVar5;
      iVar3 = *(int *)((int)register0x00000054 + -0x6c);
      iVar6 = *(int *)((int)register0x00000054 + -0x94);
      while( true ) {
        if (iVar6 < 1) {
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          return;
        }
        *(int *)((int)register0x00000054 + -0x74) = iVar6;
        *(int *)((int)register0x00000054 + -0x4c) = iVar3;
        FUN_0009e2e8(iVar3,iVar3,(undefined1 *)((int)register0x00000054 + -0x3c));
        pcVar7 = *(code **)(*(int *)((int)register0x00000054 + -0x34) + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        (*pcVar7)();
        *(undefined4 *)((int)register0x00000054 + -0xc0) = DAT_006a1968;
        *(uint *)((int)register0x00000054 + -0xbc) =
             DAT_006a1964 + (uint)*(byte *)((int)register0x00000054 + -0xbc) * 8;
        k3c_internal_pkg_util_value_False();
        if (*(char *)((int)register0x00000054 + -0xb8) != '\0') break;
        *(undefined4 *)((int)register0x00000054 + -0xc0) = DAT_006a196c;
        *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
        *(undefined4 *)((int)register0x00000054 + -0xb8) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xb4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xb0) = 0;
        k3c_internal_pkg_motion_vibration_NewTestAxis();
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0xac);
        *(undefined4 *)((int)register0x00000054 + -0xc0) = DAT_006a1970;
        *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
        *(undefined4 *)((int)register0x00000054 + -0xb8) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xb4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xb0) = 0;
        k3c_internal_pkg_motion_vibration_NewTestAxis();
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0xac);
        *(undefined4 *)((int)register0x00000054 + -0xc0) = DAT_006a1974;
        *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
        *(undefined4 *)((int)register0x00000054 + -0xb8) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xb4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xb0) = 0;
        k3c_internal_pkg_motion_vibration_NewTestAxis();
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x60);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -100);
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -0xac);
        iVar3 = 0;
        while (iVar3 < 3) {
          *(int *)((int)register0x00000054 + -0x78) = iVar3;
          uVar5 = *(undefined4 *)((int)register0x00000054 + iVar3 * 4 + -0x48);
          *(undefined4 *)((int)register0x00000054 + -0xc0) =
               *(undefined4 *)((int)register0x00000054 + -0x70);
          *(undefined4 *)((int)register0x00000054 + -0xbc) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -0xb8) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0xb4) = uVar5;
          k3c_internal_pkg_motion_vibration___ShaperCalibrate__Process_accelerometer_data();
          iVar3 = *(int *)((int)register0x00000054 + -0xb0);
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
          uVar8 = *(undefined4 *)(iVar3 + 0xc);
          uVar5 = *(undefined4 *)(iVar3 + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0x10) = *(undefined4 *)(iVar3 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0xc) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x14) = uVar8;
          *(undefined1 **)((int)register0x00000054 + -0xc0) =
               (undefined1 *)((int)register0x00000054 + -0x14);
          *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
          *(undefined4 *)((int)register0x00000054 + -0xb8) = 1;
          *(undefined4 *)((int)register0x00000054 + -0xb4) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xb0) = 0;
          k3c_common_utils_maths_Mean();
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0xac);
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x24),
                       *(undefined4 *)((int)register0x00000054 + -0xa4),
                       *(undefined4 *)((int)register0x00000054 + -0xa8));
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x3c);
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x38);
          *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0xbc) = extraout_r3_00;
          *(undefined4 *)((int)register0x00000054 + -0xb8) = extraout_r2;
          FUN_0008f820();
          *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_006a1978;
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)((int)register0x00000054 + -0xb4);
          *(undefined4 *)((int)register0x00000054 + -0xc0) = DAT_006a197c;
          *(undefined4 *)((int)register0x00000054 + -0xbc) = 0x2e;
          *(undefined1 **)((int)register0x00000054 + -0xb8) =
               (undefined1 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -0xb4) = 2;
          *(undefined4 *)((int)register0x00000054 + -0xb0) = 2;
          k3c_internal_pkg_logger_Debugf();
          iVar3 = *(int *)((int)register0x00000054 + -0x78) + 1;
        }
        iVar3 = *(int *)((int)register0x00000054 + -0x4c) + 0x18;
        iVar6 = *(int *)((int)register0x00000054 + -0x74) + -1;
      }
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0xc0) = DAT_006a1980;
      *(undefined4 *)((int)register0x00000054 + -0xbc) = 0x27;
      *(undefined1 **)((int)register0x00000054 + -0xb8) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0xb4) = 1;
      *(undefined4 *)((int)register0x00000054 + -0xb0) = 1;
      FUN_001386c4();
      bVar10 = *(int *)((int)register0x00000054 + -0xac) == 0;
      uVar5 = 0;
      if (!bVar10) {
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xac) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0xbc) =
           *(undefined4 *)((int)register0x00000054 + -0xa8);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc4);
      if (bVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x6a193c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*ResonanceTester).is_valid_name_suffix @ 006a1984 (size 272) */

void k3c_internal_pkg_motion_vibration___ResonanceTester__is_valid_name_suffix(void)

{
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00151e6c();
  FUN_00151e6c();
  FUN_003ea300();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ResonanceTester).get_filename @ 006a1aa4 (size 876) */

void k3c_internal_pkg_motion_vibration___ResonanceTester__get_filename(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 uVar2;
  undefined4 in_stack_ffffff88;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&local_4 <= *(undefined4 **)(unaff_r10 + 8)) {
    unaff_lr = 0x6a1e0c;
    FUN_0009bf64();
  }
  k3c_internal_pkg_util_value_False();
  uVar1 = in_stack_0000000c;
  if ((char)in_stack_ffffff88 == '\0') {
    local_6c = *in_stack_00000018;
    local_68 = in_stack_00000018[1];
    FUN_000763e8();
    in_stack_00000008 = local_64;
    uVar1 = local_60;
    in_stack_ffffff88 = in_stack_0000000c;
  }
  local_20 = in_stack_00000028;
  local_1c = in_stack_0000002c;
  k3c_internal_pkg_util_value_False();
  if ((char)in_stack_ffffff88 == '\0') {
    FUN_00151e6c();
    local_6c = local_64;
    local_68 = local_60;
    in_stack_ffffff88 = uVar1;
    FUN_000763e8();
    in_stack_00000008 = local_64;
    uVar1 = local_60;
  }
  local_2c = in_stack_0000001c;
  local_28 = in_stack_00000020;
  local_24 = in_stack_00000024;
  k3c_internal_pkg_util_value_False();
  if (((char)in_stack_ffffff88 == '\0') && (in_stack_00000020 == 3)) {
    FUN_0009defc(0,&local_18);
    FUN_0008f6c0();
    local_18 = DAT_006a1e28;
    local_14 = in_stack_ffffff88;
    FUN_0008f6c0();
    local_10 = DAT_006a1e28;
    local_c = in_stack_ffffff88;
    FUN_0008f6c0();
    local_8 = DAT_006a1e28;
    local_4 = in_stack_ffffff88;
    FUN_0013b72c();
    FUN_0007636c();
    in_stack_00000008 = local_6c;
    uVar1 = local_68;
  }
  uVar2 = 0;
  uVar4 = 1;
  uVar3 = DAT_006a1e18;
  FUN_000763e8();
  FUN_0009df04(0,&local_3c,local_60,local_64,unaff_lr,uVar2,in_stack_00000008,uVar1,uVar3,uVar4);
  local_38 = 4;
  local_3c = DAT_006a1e30;
  FUN_0007636c();
  local_30 = in_stack_00000014;
  local_34 = in_stack_00000010;
  FUN_0028054c();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ResonanceTester).save_calibration_data @ 006a1e38 (size 208) */

void k3c_internal_pkg_motion_vibration___ResonanceTester__save_calibration_data(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
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
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_motion_vibration___ResonanceTester__get_filename();
  k3c_internal_pkg_motion_vibration___ShaperCalibrate__Save_calibration_data();
  return;
}



/* k3c/internal/pkg/motion/vibration.Load_config_resonanceTester @ 006a1f08 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_vibration_Load_config_resonanceTester(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6a1f40;
    FUN_0009bf64();
  }
  k3c_internal_pkg_motion_vibration_NewResonanceTester();
  in_stack_00000008 = _UNK_006a1f48;
                    /* WARNING: Could not recover jumptable at 0x006a1f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*CalibrationData).Add_data @ 006a1f4c (size 4) */

void k3c_internal_pkg_motion_vibration___CalibrationData__Add_data(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x006a1f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*CalibrationData).Normalize_to_frequencies @ 006a1f5c (size 948) */

void k3c_internal_pkg_motion_vibration___CalibrationData__Normalize_to_frequencies
               (undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_r1;
  int *extraout_r1_00;
  int *piVar4;
  int extraout_r2;
  double *pdVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  double dVar11;
  
code_r0x006a1f5c:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar9 = (undefined1 *)((int)register0x00000054 + -100);
    *(undefined4 *)((int)register0x00000054 + -100) = unaff_lr;
    piVar4 = *(int **)((int)register0x00000054 + 4);
    uVar1 = 0;
    do {
      if (piVar4[1] <= (int)uVar1) goto LAB_006a2248;
      uVar10 = uVar1 == piVar4[4];
      if ((uint)piVar4[4] <= uVar1) goto LAB_006a22fc;
      if (*(double *)(piVar4 + 9) < *(double *)(piVar4[3] + uVar1 * 8)) {
        *(undefined8 *)(piVar4 + 7) = *(undefined8 *)(*piVar4 + uVar1 * 8);
        uVar10 = uVar1 == piVar4[4];
        if ((uint)piVar4[4] <= uVar1) goto LAB_006a22f8;
        *(undefined8 *)(piVar4 + 9) = *(undefined8 *)(piVar4[3] + uVar1 * 8);
      }
      uVar10 = uVar1 == piVar4[4];
      if ((uint)piVar4[4] <= uVar1) goto LAB_006a22f4;
      pdVar5 = (double *)(piVar4[3] + uVar1 * 8);
      uVar10 = uVar1 == piVar4[1];
      if ((uint)piVar4[1] <= uVar1) goto LAB_006a22f0;
      *pdVar5 = *pdVar5 / (*(double *)(*piVar4 + uVar1 * 8) + *DAT_006a2314);
      uVar10 = uVar1 == piVar4[1];
      if ((uint)piVar4[1] <= uVar1) goto LAB_006a22ec;
      iVar6 = *piVar4;
      dVar11 = *(double *)(iVar6 + uVar1 * 8);
      if (dVar11 < 5.0) {
        uVar10 = uVar1 == piVar4[4];
        if ((uint)piVar4[4] <= uVar1) goto LAB_006a22e8;
        *(undefined8 *)(piVar4[3] + uVar1 * 8) = 0;
      }
      else if (*DAT_006a2318 < dVar11) goto LAB_006a208c;
      uVar1 = uVar1 + 1;
    } while( true );
  }
  goto LAB_006a2304;
LAB_006a208c:
  *(uint *)((int)register0x00000054 + -0x40) = uVar1;
  iVar3 = uVar1 + 1;
  *(int *)((int)register0x00000054 + -0x30) = iVar3;
  if (uVar1 == 0xffffffff) {
    uVar7 = 0;
    uVar8 = 0;
    iVar3 = 0;
    uVar2 = DAT_006a231c;
  }
  else {
    *(int *)((int)register0x00000054 + -4) = iVar6;
    *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_006a231c;
    *(int *)((int)register0x00000054 + -0x5c) = iVar3;
    *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
    *(int *)((int)register0x00000054 + -0x54) = iVar3;
    *(undefined4 *)((int)register0x00000054 + -0x50) = DAT_006a2320;
    FUN_000987f4();
    uVar2 = *(undefined4 *)((int)register0x00000054 + -0x4c);
    uVar8 = *(undefined4 *)((int)register0x00000054 + -0x48);
    uVar7 = *(undefined4 *)((int)register0x00000054 + -0x44);
    iVar6 = *(int *)((int)register0x00000054 + -4);
    iVar3 = *(int *)((int)register0x00000054 + -0x30);
  }
  *(undefined4 *)((int)register0x00000054 + -0x34) = uVar7;
  *(undefined4 *)((int)register0x00000054 + -0x38) = uVar8;
  *(undefined4 *)((int)register0x00000054 + -4) = uVar2;
  *(undefined4 *)((int)register0x00000054 + -0x60) = uVar2;
  *(int *)((int)register0x00000054 + -0x5c) = iVar6;
  *(int *)((int)register0x00000054 + -0x3c) = iVar3 << 3;
  *(int *)((int)register0x00000054 + -0x58) = iVar3 << 3;
  FUN_0009e3a4();
  piVar4 = *(int **)((int)register0x00000054 + 4);
  piVar4[1] = *(int *)((int)register0x00000054 + -0x38);
  piVar4[2] = *(int *)((int)register0x00000054 + -0x34);
  if (*DAT_006a2324 == 0) {
    iVar6 = *(int *)((int)register0x00000054 + -4);
  }
  else {
    FUN_0009db64();
    iVar6 = *(int *)((int)register0x00000054 + -4);
    *unaff_r8 = iVar6;
    unaff_r8[1] = *extraout_r1;
    piVar4 = extraout_r1;
  }
  *piVar4 = iVar6;
  iVar6 = piVar4[3];
  uVar1 = *(uint *)((int)register0x00000054 + -0x30);
  uVar10 = piVar4[5] == uVar1;
  if (uVar1 <= (uint)piVar4[5]) {
    if (*(int *)((int)register0x00000054 + -0x40) == -1) {
      uVar8 = 0;
      uVar7 = 0;
      uVar2 = DAT_006a231c;
    }
    else {
      *(int *)((int)register0x00000054 + -4) = iVar6;
      *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_006a231c;
      *(uint *)((int)register0x00000054 + -0x5c) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
      *(uint *)((int)register0x00000054 + -0x54) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x50) = DAT_006a2320;
      FUN_000987f4();
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x4c);
      uVar8 = *(undefined4 *)((int)register0x00000054 + -0x48);
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x44);
      iVar6 = *(int *)((int)register0x00000054 + -4);
    }
    *(undefined4 *)((int)register0x00000054 + -4) = uVar2;
    *(undefined4 *)((int)register0x00000054 + -0x30) = uVar8;
    *(undefined4 *)((int)register0x00000054 + -0x34) = uVar7;
    *(undefined4 *)((int)register0x00000054 + -0x60) = uVar2;
    *(int *)((int)register0x00000054 + -0x5c) = iVar6;
    *(undefined4 *)((int)register0x00000054 + -0x58) =
         *(undefined4 *)((int)register0x00000054 + -0x3c);
    FUN_0009e3a4();
    piVar4 = *(int **)((int)register0x00000054 + 4);
    piVar4[4] = *(int *)((int)register0x00000054 + -0x30);
    piVar4[5] = *(int *)((int)register0x00000054 + -0x34);
    if (*DAT_006a2324 == 0) {
      iVar6 = *(int *)((int)register0x00000054 + -4);
    }
    else {
      FUN_0009db64();
      iVar6 = *(int *)((int)register0x00000054 + -4);
      *unaff_r8 = iVar6;
      unaff_r8[1] = extraout_r1_00[3];
      piVar4 = extraout_r1_00;
    }
    piVar4[3] = iVar6;
LAB_006a2248:
    FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x1c),piVar4);
    *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_006a2328;
    *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_006a232c;
    *(undefined8 *)((int)register0x00000054 + -0x24) = *(undefined8 *)(extraout_r2 + 0x1c);
    *(undefined4 *)((int)register0x00000054 + -0x60) =
         *(undefined4 *)((int)register0x00000054 + -0x24);
    *(undefined4 *)((int)register0x00000054 + -0x5c) =
         *(undefined4 *)((int)register0x00000054 + -0x20);
    FUN_0008f6c0();
    *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_006a2320;
    *(undefined4 *)((int)register0x00000054 + -0x10) =
         *(undefined4 *)((int)register0x00000054 + -0x58);
    *(undefined8 *)((int)register0x00000054 + -0x2c) =
         *(undefined8 *)(*(int *)((int)register0x00000054 + 4) + 0x24);
    *(undefined4 *)((int)register0x00000054 + -0x60) =
         *(undefined4 *)((int)register0x00000054 + -0x2c);
    *(undefined4 *)((int)register0x00000054 + -0x5c) =
         *(undefined4 *)((int)register0x00000054 + -0x28);
    FUN_0008f6c0();
    *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_006a2320;
    *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)((int)register0x00000054 + -0x58)
    ;
    *(undefined1 **)((int)register0x00000054 + -0x60) =
         (undefined1 *)((int)register0x00000054 + -0x1c);
    *(undefined4 *)((int)register0x00000054 + -0x5c) = 3;
    *(undefined4 *)((int)register0x00000054 + -0x58) = 3;
    k3c_internal_pkg_logger_Debug();
    return;
  }
  FUN_0009dc14(iVar6,uVar1);
LAB_006a22e8:
  FUN_0009dbd4();
LAB_006a22ec:
  FUN_0009dbd4();
LAB_006a22f0:
  FUN_0009dbd4();
LAB_006a22f4:
  FUN_0009dbd4();
LAB_006a22f8:
  FUN_0009dbd4();
LAB_006a22fc:
  param_1 = FUN_0009dbd4();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -100);
  if ((bool)uVar10) {
    register0x00000054 = (BADSPACEBASE *)puVar9;
  }
LAB_006a2304:
  unaff_lr = 0x6a230c;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x006a1f5c;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).Background_process_exec @ 006a2330 (size 1104) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__Background_process_exec(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  double dVar5;
  double dVar6;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  char local_51;
  undefined4 local_2c [2];
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  int *local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 *local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_8 = (undefined4 *)0x0;
  local_4 = (undefined4 *)0x0;
  in_stack_0000001c = 0;
  in_stack_00000020 = 0;
  if (*in_stack_00000004 == 0) {
    FUN_000d659c();
    FUN_0008f820();
    return;
  }
  FUN_0001af6c();
  FUN_0001af6c();
  local_24[0] = DAT_006a278c;
  local_8 = local_24;
  local_2c[0] = DAT_006a2790;
  local_4 = local_2c;
  FUN_00022cf8();
  uVar3 = 0;
  uRam00000000 = DAT_006a2798;
  _DAT_00000004 = in_stack_00000008;
  if (*DAT_006a279c != 0) {
    uVar3 = FUN_0009db84();
    *unaff_r8 = in_stack_0000000c;
    unaff_r8[1] = in_stack_00000010;
    unaff_r8[2] = local_70;
    unaff_r8[3] = local_70;
  }
  *(undefined4 *)(uVar3 + 8) = in_stack_0000000c;
  *(undefined4 *)(uVar3 + 0x10) = in_stack_00000014;
  *(undefined4 *)(uVar3 + 0x14) = in_stack_00000018;
  *(undefined4 *)(uVar3 + 0xc) = in_stack_00000010;
  *(undefined4 *)(uVar3 + 0x18) = local_70;
  *(undefined4 *)(uVar3 + 0x1c) = local_70;
  FUN_00062dd0();
  k3c_internal_pkg_chelper__Cfunc_get_monotonic(*(undefined4 *)(*in_stack_00000004 + 0xc));
  dVar5 = (double)(ulonglong)uVar3;
  dVar6 = dVar5;
  cVar1 = '\x01';
  while (cVar2 = cVar1, cVar2 != '\0') {
    FUN_0001c9ec();
    cVar1 = local_51;
    if ((char)local_70 == '\0') {
      if (dVar6 + 5.0 < dVar5) {
        local_6c = 0;
        uStack_68 = 0;
        k3c_internal_pkg_logger_Debugf();
        dVar6 = dVar5;
      }
      local_70 = (undefined4)((ulonglong)(*DAT_006a27a8 + dVar5) >> 0x20);
      k3c_internal_pkg_reactor___Reactor__Pause();
      dVar5 = (double)CONCAT44(uStack_68,local_6c);
      cVar1 = cVar2;
    }
  }
  local_14 = (int *)0x0;
  local_10 = 0;
  local_c = 0;
  FUN_0001bfb0();
  if (local_10 != 0) {
    if (*local_14 == DAT_006a27ac) {
      if (*(char *)local_14[1] == '\0') {
        if (1 < local_10) {
          in_stack_0000001c = local_14[2];
          in_stack_00000020 = local_14[3];
          (*(code *)*local_4)();
          (*(code *)*local_8)();
          return;
        }
        FUN_0009dbd4(1,1);
      }
      local_1c = 0;
      local_18 = 0;
      FUN_0008f820();
      local_1c = DAT_006a27b0;
      local_18 = local_6c;
      FUN_001386c4();
      FUN_00095b00();
    }
    FUN_000209b4();
  }
  uVar4 = FUN_0009dbd4(0,0);
  FUN_00054344(uVar4);
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).Background_process_exec.func1 @ 006a27bc (size 396) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__Background_process_exec_func1(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  puVar1 = *(undefined4 **)(unaff_r7 + 4);
  uStack_18 = 0;
  k3c_internal_pkg_motion_vibration___ShaperCalibrate__Background_process_exec_func1_1();
  if (iStack_2c != 0) {
    FUN_00022cf8();
    *puVar1 = DAT_006a2950;
    puVar1[1] = DAT_006a2954;
    uVar2 = 0;
    if (iStack_2c != 0) {
      uVar2 = *(undefined4 *)(iStack_2c + 4);
    }
    puVar1[2] = uVar2;
    if (*DAT_006a2958 != 0) {
      puVar1 = (undefined4 *)FUN_0009db54();
      *unaff_r8 = uStack_28;
    }
    puVar1[3] = uStack_28;
    FUN_0001b1d0();
  }
  puVar1 = DAT_006a295c;
  FUN_0001b1d0();
  FUN_00022cf8();
  *puVar1 = DAT_006a2950;
  puVar1[1] = DAT_006a2960;
  puVar1[2] = 0;
  if (*DAT_006a2958 != 0) {
    puVar1 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = extraout_r2;
    uStack_18 = extraout_r2;
  }
  puVar1[3] = uStack_18;
  FUN_0001b1d0();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).Background_process_exec.func1.1 @ 006a2964 (size 392) */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__Background_process_exec_func1_1(void)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 *extraout_r2;
  undefined4 *puVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  int local_20;
  code *local_c;
  undefined4 *local_8;
  code **local_4;
  
  while (uVar2 = in_stack_00000018, uVar1 = in_stack_00000014,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = (code **)0x0;
  in_stack_0000001c = 0;
  in_stack_00000020 = 0;
  FUN_000d659c();
  if (local_20 == 0) {
    uVar1 = FUN_0009dbd4(0,0);
    FUN_00054344(uVar1);
    return;
  }
  FUN_000e70e8();
  *in_stack_00000004 = uVar1;
  puVar3 = in_stack_00000004;
  if (*DAT_006a2af0 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = extraout_r2[1];
    uVar2 = extraout_r1;
    puVar3 = extraout_r2;
  }
  puVar3[1] = uVar2;
  local_c = DAT_006a2af4;
  local_8 = &stack0x0000001c;
  local_4 = &local_c;
  in_stack_0000001c = 0;
  in_stack_00000020 = 0;
  (*DAT_006a2af4)();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).Background_process_exec.func1.1.1 @ 006a2af8 (size 172) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__Background_process_exec_func1_1_1(void)

{
  undefined4 *puVar1;
  undefined4 extraout_r1;
  undefined4 *extraout_r2;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  int local_24;
  undefined4 local_14;
  undefined4 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  puVar1 = *(undefined4 **)(unaff_r7 + 4);
  FUN_00054ee0();
  if (local_24 != 0) {
    FUN_001386c4();
    *puVar1 = local_14;
    if (*DAT_006a2bac != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = extraout_r2[1];
      local_10 = extraout_r1;
      puVar1 = extraout_r2;
    }
    puVar1[1] = local_10;
  }
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).Background_process_exec.deferwrap2 @ 006a2bb0 (size 84) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__Background_process_exec_deferwrap2(void)

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
  FUN_0001bbd8();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).Background_process_exec.deferwrap1 @ 006a2c04 (size 84) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__Background_process_exec_deferwrap1(void)

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
  FUN_0001bbd8();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate)._split_into_windows @ 006a2c58 (size 424) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate___split_into_windows(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint extraout_r2;
  uint extraout_r2_00;
  int *piVar8;
  int iVar9;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  undefined1 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = unaff_lr;
      uVar5 = *(uint *)(*(int *)((int)register0x00000054 + 8) + 0x10);
      uVar1 = uVar5 - 1;
      iVar9 = *(int *)((int)register0x00000054 + 0xc) - *(int *)((int)register0x00000054 + 0x10);
      uVar11 = uVar5 == uVar1;
      if (uVar1 < uVar5) {
        iVar2 = *(int *)(*(int *)(*(int *)((int)register0x00000054 + 8) + 0xc) + uVar1 * 4);
        uVar11 = iVar9 == 0;
        if (!(bool)uVar11) {
          *(int *)((int)register0x00000054 + -0x10) = iVar9;
          *(int *)((int)register0x00000054 + -8) = iVar2 - *(int *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_006a2e04;
          FUN_00022cf8();
          uVar1 = *(uint *)((int)register0x00000054 + -8);
          uVar5 = *(uint *)((int)register0x00000054 + -0x10);
          *(uint *)((int)register0x00000054 + -0xc) = uVar1 ^ uVar5;
          uVar1 = FUN_0009edd4((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f),
                               (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f));
          iVar9 = *(int *)((int)register0x00000054 + -0xc);
          puVar6 = *(undefined4 **)((int)register0x00000054 + -0x34);
          *(undefined4 **)((int)register0x00000054 + -4) = puVar6;
          *puVar6 = *(undefined4 *)((int)register0x00000054 + 0xc);
          puVar6[1] = (uVar1 ^ iVar9 >> 0x1f) - (iVar9 >> 0x1f);
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_006a2e04;
          FUN_00022cf8();
          piVar3 = *(int **)((int)register0x00000054 + 8);
          uVar1 = *(int *)((int)register0x00000054 + -8) - 1;
          uVar11 = piVar3[7] == uVar1;
          if (uVar1 < (uint)piVar3[7]) {
            piVar8 = *(int **)((int)register0x00000054 + -0x34);
            iVar9 = *(int *)(piVar3[6] + uVar1 * 4);
            *piVar8 = (int)(iVar9 + ((uint)(iVar9 >> 0x1f) >> 0x1b)) >> 5;
            uVar11 = piVar3[7] == uVar1;
            if (uVar1 < (uint)piVar3[7]) {
              iVar9 = *(int *)((int)register0x00000054 + -0x10) * *(int *)(piVar3[6] + uVar1 * 4);
              piVar8[1] = (int)(iVar9 + ((uint)(iVar9 >> 0x1f) >> 0x1b)) >> 5;
              uVar11 = piVar3[1] == 0;
              if (!(bool)uVar11) {
                puVar6 = (undefined4 *)*piVar3;
                uVar7 = puVar6[1];
                uVar4 = puVar6[2];
                *(undefined4 *)((int)register0x00000054 + -0x38) = *puVar6;
                *(undefined4 *)((int)register0x00000054 + -0x34) = uVar7;
                *(undefined4 *)((int)register0x00000054 + -0x30) = uVar4;
                *(undefined4 *)((int)register0x00000054 + -0x2c) =
                     *(undefined4 *)((int)register0x00000054 + -4);
                *(undefined4 *)((int)register0x00000054 + -0x28) = 2;
                *(undefined4 *)((int)register0x00000054 + -0x24) = 2;
                *(int **)((int)register0x00000054 + -0x20) = piVar8;
                *(undefined4 *)((int)register0x00000054 + -0x1c) = 2;
                *(undefined4 *)((int)register0x00000054 + -0x18) = 2;
                k3c_common_utils_maths_AsStrided();
                *(undefined4 *)((int)register0x00000054 + 0x14) =
                     *(undefined4 *)((int)register0x00000054 + -0x14);
                return;
              }
              FUN_0009dbd4(0,0);
              uVar1 = extraout_r2;
            }
            FUN_0009dbd4(uVar1);
            uVar1 = extraout_r2_00;
          }
          FUN_0009dbd4(uVar1);
        }
        FUN_000539a0();
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x3c);
      if ((bool)uVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x6a2dfc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate)._psd @ 006a2e08 (size 1388) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate___psd(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  double *pdVar4;
  int extraout_r1;
  double *extraout_r1_00;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  double *extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  double *extraout_r2_02;
  undefined4 *extraout_r2_03;
  uint uVar8;
  undefined4 uVar9;
  double *pdVar10;
  int iVar11;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  double *extraout_r3_02;
  double *extraout_r3_03;
  uint extraout_r3_04;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  double *unaff_r7;
  double *unaff_r8;
  double *unaff_r9;
  int unaff_r10;
  double *pdVar15;
  double *extraout_r12;
  undefined1 *puVar16;
  undefined4 unaff_lr;
  undefined1 uVar17;
  uint in_fpscr;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  double dVar18;
  undefined8 uVar19;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s2;
  double dVar20;
  undefined4 extraout_s3;
  undefined4 extraout_s4;
  undefined4 extraout_s5;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  uint unaff_s30;
  
code_r0x006a2e08:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar16 = (undefined1 *)((int)register0x00000054 + -0x5c);
    *(undefined4 *)((int)register0x00000054 + -0x5c) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -0x58) =
         *(undefined4 *)((int)register0x00000054 + 0x14);
    *(undefined8 *)((int)register0x00000054 + -0x54) = 0x4018000000000000;
    k3c_common_utils_maths_Kaiser();
    iVar1 = *(int *)((int)register0x00000054 + -0x4c);
    *(int *)((int)register0x00000054 + -0x14) = iVar1;
    uVar3 = *(uint *)((int)register0x00000054 + -0x48);
    *(uint *)((int)register0x00000054 + -0x38) = uVar3;
    iVar5 = *(int *)((int)register0x00000054 + 0x14);
    dVar18 = 0.0;
    uVar8 = 0;
    while (*(double *)((int)register0x00000054 + -0x34) = dVar18, (int)uVar8 < iVar5) {
      uVar17 = uVar8 == uVar3;
      if (uVar3 <= uVar8) goto LAB_006a335c;
      uVar19 = *(undefined8 *)(iVar1 + uVar8 * 8);
      *(uint *)((int)register0x00000054 + -0x20) = uVar8 + 1;
      *(undefined8 *)((int)register0x00000054 + -0x58) = uVar19;
      *(undefined8 *)((int)register0x00000054 + -0x50) = 0x4000000000000000;
      k3c_common_cmath__Cfunc_pow();
      dVar18 = *(double *)((int)register0x00000054 + -0x34) +
               *(double *)((int)register0x00000054 + -0x48);
      iVar1 = *(int *)((int)register0x00000054 + -0x14);
      uVar3 = *(uint *)((int)register0x00000054 + -0x38);
      iVar5 = *(int *)((int)register0x00000054 + 0x14);
      uVar8 = *(uint *)((int)register0x00000054 + -0x20);
    }
    *(undefined4 *)((int)register0x00000054 + -0x58) = *(undefined4 *)((int)register0x00000054 + 4);
    *(undefined4 *)((int)register0x00000054 + -0x54) = *(undefined4 *)((int)register0x00000054 + 8);
    *(int *)((int)register0x00000054 + -0x50) = iVar5;
    *(int *)((int)register0x00000054 + -0x4c) = (int)(iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1e)) >> 2;
    k3c_internal_pkg_motion_vibration___ShaperCalibrate___split_into_windows();
    puVar2 = *(undefined4 **)((int)register0x00000054 + -0x48);
    *(undefined4 **)((int)register0x00000054 + -4) = puVar2;
    uVar6 = puVar2[1];
    uVar9 = puVar2[2];
    *(undefined4 *)((int)register0x00000054 + -0x58) = *puVar2;
    *(undefined4 *)((int)register0x00000054 + -0x54) = uVar6;
    *(undefined4 *)((int)register0x00000054 + -0x50) = uVar9;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_006a3378;
    *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_006a337c;
    k3c_common_utils_maths_Mean();
    dVar18 = 1.0 / *(double *)((int)register0x00000054 + -0x34);
    iVar1 = *(int *)((int)register0x00000054 + -0x44);
    pdVar4 = *(double **)((int)register0x00000054 + -0x40);
    puVar2 = *(undefined4 **)((int)register0x00000054 + -4);
    pdVar10 = *(double **)((int)register0x00000054 + -0x38);
    pdVar12 = *(double **)((int)register0x00000054 + -0x14);
    pdVar13 = (double *)0x0;
LAB_006a2f2c:
    iVar5 = puVar2[1];
    if ((int)pdVar13 < iVar5) {
      pdVar14 = (double *)0x0;
      goto LAB_006a32d0;
    }
    *(double *)((int)register0x00000054 + -0x34) = dVar18;
    uVar6 = puVar2[2];
    *(undefined4 *)((int)register0x00000054 + -0x58) = *puVar2;
    *(int *)((int)register0x00000054 + -0x54) = iVar5;
    *(undefined4 *)((int)register0x00000054 + -0x50) = uVar6;
    *(undefined4 *)((int)register0x00000054 + -0x4c) =
         *(undefined4 *)((int)register0x00000054 + 0x14);
    *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
    k3c_common_utils_maths_Rfft();
    uVar6 = *(undefined4 *)((int)register0x00000054 + -0x40);
    *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar6;
    *(undefined4 *)((int)register0x00000054 + -0x10) =
         *(undefined4 *)((int)register0x00000054 + -0x44);
    *(undefined4 *)((int)register0x00000054 + -0x58) = DAT_006a3380;
    *(undefined4 *)((int)register0x00000054 + -0x54) = uVar6;
    *(undefined4 *)((int)register0x00000054 + -0x50) = uVar6;
    FUN_000986b8();
    iVar1 = *(int *)((int)register0x00000054 + -0x4c);
    *(int *)((int)register0x00000054 + -8) = iVar1;
    iVar5 = 0;
LAB_006a2fb4:
    iVar7 = *(int *)((int)register0x00000054 + -0x2c);
    if (iVar5 < iVar7) {
      *(int *)((int)register0x00000054 + -0x24) = iVar5;
      *(int *)((int)register0x00000054 + -0x18) = iVar5 * 3;
      *(int *)((int)register0x00000054 + -0xc) =
           *(int *)((int)register0x00000054 + -0x10) + iVar5 * 0xc;
      uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x10) + iVar5 * 0xc + 4);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0x58) = DAT_006a3384;
      *(undefined4 *)((int)register0x00000054 + -0x54) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0x50) = uVar6;
      FUN_000986b8();
      uVar19 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0xc),
                        *(undefined4 *)((int)register0x00000054 + -0x4c));
      pdVar4 = *(double **)((int)register0x00000054 + -0x1c);
      iVar1 = *(int *)((int)register0x00000054 + -0x10);
      pdVar12 = *(double **)((int)register0x00000054 + -0x18);
      pdVar13 = (double *)0x0;
      goto LAB_006a3278;
    }
    iVar11 = *(int *)((int)register0x00000054 + -0x10);
    dVar18 = *(double *)((int)register0x00000054 + 0xc);
    dVar20 = *(double *)((int)register0x00000054 + -0x34);
    iVar5 = 0;
LAB_006a305c:
    if (iVar5 < iVar7) {
      pdVar12 = (double *)0x0;
      goto LAB_006a3220;
    }
    iVar1 = 1;
    do {
      if (iVar1 < iVar7 + -1) {
        pdVar4 = (double *)0x0;
        goto LAB_006a31ac;
      }
      *(undefined4 *)((int)register0x00000054 + -0x58) = DAT_006a338c;
      iVar1 = *(int *)((int)register0x00000054 + 0x14) / 2 + 1;
      *(int *)((int)register0x00000054 + -0x28) = iVar1;
      *(int *)((int)register0x00000054 + -0x54) = iVar1;
      *(int *)((int)register0x00000054 + -0x50) = iVar1;
      FUN_000986b8();
      iVar1 = *(int *)((int)register0x00000054 + -0x4c);
      iVar5 = *(int *)((int)register0x00000054 + -0x10);
      pdVar4 = *(double **)((int)register0x00000054 + -0x28);
      iVar7 = *(int *)((int)register0x00000054 + -0x2c);
      pdVar12 = (double *)0x0;
      while( true ) {
        if (iVar7 <= (int)pdVar12) {
          *(int *)((int)register0x00000054 + 0x18) = iVar1;
          *(double **)((int)register0x00000054 + 0x1c) = pdVar4;
          *(double **)((int)register0x00000054 + 0x20) = pdVar4;
          return;
        }
        pdVar10 = (double *)0x0;
        while( true ) {
          unaff_r7 = *(double **)(iVar5 + (int)pdVar12 * 0xc + 4);
          if ((int)unaff_r7 <= (int)pdVar10) break;
          if (unaff_r7 <= pdVar10) goto LAB_006a3170;
          if (pdVar4 <= pdVar12) goto LAB_006a3164;
          pdVar13 = (double *)(iVar1 + (int)pdVar12 * 8);
          *pdVar13 = *(double *)(*(int *)(iVar5 + (int)pdVar12 * 0xc) + (int)pdVar10 * 0x10) +
                     *pdVar13;
          pdVar10 = (double *)((int)pdVar10 + 1);
        }
        if (pdVar4 <= pdVar12) break;
        pdVar10 = (double *)(iVar1 + (int)pdVar12 * 8);
        unaff_s30 = unaff_s30 & 0xffff0000 | (uint)unaff_r7 & 0xffff;
        dVar18 = (double)VectorSignedToFloat(unaff_s30,(byte)(in_fpscr >> 0x16) & 3);
        *pdVar10 = *pdVar10 / dVar18;
        pdVar12 = (double *)((int)pdVar12 + 1);
      }
      FUN_0009dbd4(pdVar12,pdVar4);
      pdVar4 = extraout_r2;
LAB_006a3164:
      FUN_0009dbd4(pdVar12,pdVar4);
LAB_006a3170:
      uVar19 = FUN_0009dbd4(pdVar10,unaff_r7);
      iVar7 = extraout_r2_00;
      iVar11 = extraout_r3;
      while( true ) {
        iVar5 = (int)((ulonglong)uVar19 >> 0x20);
        iVar1 = (int)uVar19;
        pdVar12 = pdVar12 + iVar5 * 2;
        dVar18 = *pdVar12;
        dVar20 = pdVar12[1];
        *pdVar12 = (dVar18 + dVar18) - dVar20 * 0.0;
        pdVar12[1] = dVar20 + dVar20 + dVar18 * 0.0;
        pdVar4 = (double *)(iVar5 + 1);
LAB_006a31ac:
        uVar19 = CONCAT44(pdVar4,iVar1);
        pdVar13 = *(double **)(iVar11 + iVar1 * 0xc + 4);
        pdVar12 = *(double **)(iVar11 + iVar1 * 0xc);
        if ((int)pdVar13 <= (int)pdVar4) break;
        if (pdVar13 <= pdVar4) {
          iVar1 = FUN_0009dbd4(pdVar4,pdVar13);
          dVar21 = (double)CONCAT44(extraout_s5,extraout_s4);
          dVar20 = (double)CONCAT44(extraout_s3,extraout_s2);
          dVar18 = (double)CONCAT44(extraout_s1,extraout_s0);
          iVar5 = extraout_r1;
          iVar7 = extraout_r2_01;
          iVar11 = extraout_r3_00;
          goto LAB_006a31d4;
        }
      }
      iVar1 = iVar1 + 1;
    } while( true );
  }
  goto LAB_006a3368;
LAB_006a31d4:
  dVar22 = pdVar13[(int)pdVar12 * 2];
  dVar23 = (pdVar13 + (int)pdVar12 * 2)[1];
  pdVar4 = unaff_r7 + (int)pdVar12 * 2;
  dVar24 = dVar22 * *pdVar4 - dVar23 * pdVar4[1];
  dVar22 = pdVar4[1] * dVar22 + dVar23 * *pdVar4;
  *pdVar4 = dVar21 * dVar24 - dVar22 * 0.0;
  pdVar4[1] = dVar24 * 0.0 + dVar22 * dVar21;
  pdVar12 = (double *)((int)pdVar12 + 1);
LAB_006a3220:
  unaff_r7 = *(double **)(iVar11 + iVar5 * 0xc);
  if (*(int *)(iVar11 + iVar5 * 0xc + 4) <= (int)pdVar12) goto LAB_006a3058;
  pdVar14 = *(double **)(iVar1 + iVar5 * 0xc + 4);
  pdVar13 = *(double **)(iVar1 + iVar5 * 0xc);
  dVar21 = dVar20 / dVar18;
  if (pdVar14 <= pdVar12) {
    uVar19 = FUN_0009dbd4(pdVar12,pdVar14);
    pdVar4 = extraout_r2_02;
    iVar1 = extraout_r3_01;
    goto LAB_006a325c;
  }
  goto LAB_006a31d4;
LAB_006a3058:
  iVar5 = iVar5 + 1;
  goto LAB_006a305c;
LAB_006a325c:
  pdVar10 = (double *)((int)uVar19 + (int)pdVar13 * 0x10);
  dVar18 = pdVar14[1];
  *pdVar10 = *pdVar14;
  pdVar10[1] = -dVar18;
  pdVar13 = (double *)((int)pdVar13 + 1);
LAB_006a3278:
  uVar6 = (undefined4)uVar19;
  pdVar14 = *(double **)((int)((ulonglong)uVar19 >> 0x20) + 4);
  unaff_r7 = *(double **)(iVar1 + (int)pdVar12 * 4);
  if ((int)pdVar13 < (int)pdVar14) {
    if (pdVar13 < pdVar14) goto code_r0x006a328c;
    goto LAB_006a32a4;
  }
  iVar1 = *(int *)((int)register0x00000054 + -8);
  iVar5 = iVar1 + (int)pdVar12 * 4;
  *(double **)(iVar5 + 4) = pdVar4;
  *(double **)(iVar5 + 8) = pdVar4;
  if (*DAT_006a3388 != 0) {
    uVar6 = FUN_0009db64();
    *(undefined4 *)unaff_r8 = uVar6;
    *(undefined4 *)((int)unaff_r8 + 4) = *(undefined4 *)(iVar1 + (int)pdVar12 * 4);
  }
  *(undefined4 *)(iVar1 + (int)pdVar12 * 4) = uVar6;
  iVar5 = *(int *)((int)register0x00000054 + -0x24) + 1;
  goto LAB_006a2fb4;
code_r0x006a328c:
  pdVar14 = unaff_r7 + (int)pdVar13 * 2;
  if (pdVar4 <= pdVar13) {
    FUN_0009dbd4(pdVar13,pdVar4);
LAB_006a32a4:
    iVar1 = FUN_0009dbd4(pdVar13,pdVar14);
    dVar18 = (double)CONCAT44(extraout_s1_00,extraout_s0_00);
    pdVar4 = extraout_r1_00;
    puVar2 = extraout_r2_03;
    pdVar10 = extraout_r3_02;
    goto LAB_006a32b0;
  }
  goto LAB_006a325c;
LAB_006a32b0:
  unaff_r8 = (double *)(iVar1 + (int)pdVar14 * 8);
  *unaff_r7 = (*unaff_r7 - *unaff_r8) * *unaff_r9;
  pdVar14 = (double *)((int)pdVar14 + 1);
LAB_006a32d0:
  unaff_r7 = (double *)puVar2[1];
  uVar17 = 1;
  if (unaff_r7 == (double *)0x0) goto LAB_006a3350;
  unaff_r8 = (double *)*puVar2;
  unaff_r9 = *(double **)((int)unaff_r8 + 4);
  if ((int)pdVar14 < (int)unaff_r9) {
    uVar17 = pdVar13 == pdVar10;
    if (pdVar13 < pdVar10) {
      unaff_r9 = pdVar12 + (int)pdVar13;
      uVar17 = pdVar13 == unaff_r7;
      if (pdVar13 < unaff_r7) {
        pdVar15 = *(double **)((int)unaff_r8 + (int)pdVar13 * 0xc + 4);
        unaff_r7 = *(double **)((int)unaff_r8 + (int)pdVar13 * 0xc);
        uVar17 = pdVar14 == pdVar15;
        if (pdVar14 < pdVar15) goto code_r0x006a3318;
        goto LAB_006a332c;
      }
      goto LAB_006a3338;
    }
    goto LAB_006a3344;
  }
  pdVar13 = (double *)((int)pdVar13 + 1);
  goto LAB_006a2f2c;
code_r0x006a3318:
  unaff_r7 = unaff_r7 + (int)pdVar14;
  uVar17 = pdVar14 == pdVar4;
  if (pdVar4 <= pdVar14) {
    FUN_0009dbd4(pdVar14);
    pdVar15 = extraout_r12;
LAB_006a332c:
    FUN_0009dbd4(pdVar14,pdVar15);
LAB_006a3338:
    FUN_0009dbd4(pdVar13,unaff_r7);
    pdVar10 = extraout_r3_03;
LAB_006a3344:
    FUN_0009dbd4(pdVar13,pdVar10);
LAB_006a3350:
    FUN_0009dbd4(0,0);
    uVar8 = extraout_r3_04;
    goto LAB_006a335c;
  }
  goto LAB_006a32b0;
LAB_006a335c:
  param_1 = FUN_0009dbd4(uVar8);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x5c);
  if ((bool)uVar17) {
    register0x00000054 = (BADSPACEBASE *)puVar16;
  }
LAB_006a3368:
  unaff_lr = 0x6a3370;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x006a2e08;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).Calc_freq_response @ 006a3390 (size 1288) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__Calc_freq_response(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int extraout_r2;
  uint uVar7;
  undefined4 uVar8;
  uint extraout_r2_00;
  int extraout_r2_01;
  undefined4 *puVar9;
  int extraout_r3;
  int iVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  int iVar14;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar15;
  undefined4 unaff_lr;
  undefined1 uVar16;
  uint in_fpscr;
  double dVar17;
  double dVar18;
  double dVar19;
  uint unaff_s30;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0xc)) {
      puVar15 = (undefined1 *)((int)register0x00000054 + -0x8c);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = unaff_lr;
      if (*(int *)((int)register0x00000054 + 8) == 0) {
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x006a35e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x8c))();
        return;
      }
      *(int *)((int)register0x00000054 + -0x3c) = *(int *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      iVar10 = *(int *)((int)register0x00000054 + -0x3c);
      iVar11 = DAT_006a389c;
      if (iVar10 == 0) {
        iVar10 = 0;
        iVar11 = 0;
      }
      FUN_0009def0(0,(undefined1 *)((int)register0x00000054 + -0x24));
      *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_006a38a0;
      *(undefined1 **)((int)register0x00000054 + -0x40) =
           (undefined1 *)((int)register0x00000054 + -0x24);
      iVar14 = *(int *)((int)register0x00000054 + -0x44);
      iVar1 = DAT_006a389c;
      if (iVar14 == 0) {
        iVar14 = 0;
        iVar1 = 0;
      }
      iVar2 = extraout_r2;
      if (iVar11 == iVar1) {
        *(int *)((int)register0x00000054 + -0x88) = iVar11;
        *(int *)((int)register0x00000054 + -0x84) = iVar10;
        *(int *)((int)register0x00000054 + -0x80) = iVar14;
        FUN_00019b34();
        if (*(char *)((int)register0x00000054 + -0x7c) == '\0') {
          iVar2 = *(int *)((int)register0x00000054 + 8);
          goto LAB_006a3468;
        }
        iVar11 = *(int *)((int)register0x00000054 + 8);
        uVar16 = 0;
        iVar10 = DAT_006a38a4;
        if (iVar11 == DAT_006a38a4) {
          puVar4 = *(undefined4 **)((int)register0x00000054 + 0xc);
          goto LAB_006a34c8;
        }
      }
      else {
LAB_006a3468:
        uVar16 = iVar2 == 0;
        if (!(bool)uVar16) {
          *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_006a38a8;
          *(int *)((int)register0x00000054 + -0x84) = iVar2;
          FUN_00020dac();
          pcVar3 = *(code **)(*(int *)((int)register0x00000054 + -0x80) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          (*pcVar3)();
          if (*(int *)((int)register0x00000054 + -0x84) == 0) {
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            return;
          }
          *(int *)((int)register0x00000054 + -0x30) = *(int *)((int)register0x00000054 + -0x84);
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x80);
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x7c);
          *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_006a38ac;
          *(undefined1 **)((int)register0x00000054 + -0x84) =
               (undefined1 *)((int)register0x00000054 + -0x30);
          k3c_common_utils_maths_NewNdarray();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0x80);
LAB_006a34c8:
          uVar16 = puVar4[4] == 0;
          if (!(bool)uVar16) {
            uVar5 = puVar4[1];
            uVar7 = uVar5 - 1;
            uVar16 = uVar5 == uVar7;
            if (uVar7 < uVar5) {
              puVar9 = (undefined4 *)*puVar4;
              uVar16 = puVar9[uVar5 * 3 + -2] == 0;
              if (!(bool)uVar16) {
                uVar16 = puVar9[1] == 0;
                if (!(bool)uVar16) {
                  dVar17 = (double)VectorSignedToFloat(unaff_s30 & 0xffff0000 |
                                                       *(uint *)puVar4[3] & 0xffff,
                                                       (byte)(in_fpscr >> 0x16) & 3);
                  dVar17 = dVar17 / (*(double *)puVar9[uVar5 * 3 + -3] - *(double *)*puVar9);
                  dVar18 = dVar17 * 0.5 - 1.0;
                  unaff_s30 = (uint)(0.0 < dVar18) * (int)(longlong)dVar18;
                  iVar11 = 1 << (0x20U - LZCOUNT(unaff_s30) & 0xff);
                  if (0xff < 0x20U - LZCOUNT(unaff_s30)) {
                    iVar11 = 0;
                  }
                  if ((int)*(uint *)puVar4[3] <= iVar11) {
                    *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    return;
                  }
                  *(undefined4 **)((int)register0x00000054 + -0x48) = puVar4;
                  *(double *)((int)register0x00000054 + -0x5c) = dVar17;
                  *(int *)((int)register0x00000054 + -0x54) = iVar11;
                  *(int *)((int)register0x00000054 + -0x50) = iVar11 - (iVar11 >> 0x1f);
                  iVar11 = iVar11 / 2 + 1;
                  *(int *)((int)register0x00000054 + -0x68) = iVar11;
                  *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_006a38b0;
                  *(int *)((int)register0x00000054 + -0x84) = iVar11;
                  *(int *)((int)register0x00000054 + -0x80) = iVar11;
                  FUN_000986b8();
                  dVar17 = *(double *)((int)register0x00000054 + -0x5c);
                  iVar11 = *(int *)((int)register0x00000054 + -0x7c);
                  iVar10 = *(int *)((int)register0x00000054 + -0x50);
                  uVar7 = *(uint *)((int)register0x00000054 + -0x68);
                  uVar5 = *(uint *)((int)register0x00000054 + -0x54);
                  uVar12 = 0;
                  while( true ) {
                    if (iVar10 >> 1 < (int)uVar12) {
                      *(int *)((int)register0x00000054 + -0x34) = iVar11;
                      puVar4 = *(undefined4 **)((int)register0x00000054 + 0x10);
                      if (puVar4 == (undefined4 *)0x0) {
                        uVar6 = 0;
                      }
                      else {
                        iVar11 = puVar4[1];
                        pcVar13 = (char *)*puVar4;
                        if ((iVar11 == 1) && (*pcVar13 == 'x')) {
                          *(undefined4 *)((int)register0x00000054 + -0x88) =
                               *(undefined4 *)((int)register0x00000054 + -0x48);
                          *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
                          *(undefined4 *)((int)register0x00000054 + -0x80) = 0;
                          *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_006a38b4;
                          *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_006a38b8;
                          k3c_common_utils_maths___Ndarray__Slice();
                          uVar6 = *(undefined4 *)((int)register0x00000054 + -0x74);
                          uVar5 = *(uint *)((int)register0x00000054 + -0x54);
                          dVar17 = *(double *)((int)register0x00000054 + -0x5c);
                        }
                        else if (puVar4 == (undefined4 *)0x0) {
                          uVar6 = 0;
                        }
                        else if ((iVar11 == 1) && (*pcVar13 == 'y')) {
                          *(undefined4 *)((int)register0x00000054 + -0x88) =
                               *(undefined4 *)((int)register0x00000054 + -0x48);
                          *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
                          *(undefined4 *)((int)register0x00000054 + -0x80) = 0;
                          *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_006a38b4;
                          *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_006a38bc;
                          k3c_common_utils_maths___Ndarray__Slice();
                          uVar6 = *(undefined4 *)((int)register0x00000054 + -0x74);
                          uVar5 = *(uint *)((int)register0x00000054 + -0x54);
                          dVar17 = *(double *)((int)register0x00000054 + -0x5c);
                        }
                        else if (puVar4 == (undefined4 *)0x0) {
                          uVar6 = 0;
                        }
                        else if (iVar11 == 1) {
                          if (*pcVar13 == 'z') {
                            *(undefined4 *)((int)register0x00000054 + -0x88) =
                                 *(undefined4 *)((int)register0x00000054 + -0x48);
                            *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
                            *(undefined4 *)((int)register0x00000054 + -0x80) = 0;
                            *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_006a38b4;
                            *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_006a38c0;
                            k3c_common_utils_maths___Ndarray__Slice();
                            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x74);
                            uVar5 = *(uint *)((int)register0x00000054 + -0x54);
                            dVar17 = *(double *)((int)register0x00000054 + -0x5c);
                          }
                          else {
                            uVar6 = 0;
                          }
                        }
                        else {
                          uVar6 = 0;
                        }
                      }
                      *(undefined4 *)((int)register0x00000054 + -0x88) =
                           *(undefined4 *)((int)register0x00000054 + 4);
                      *(undefined4 *)((int)register0x00000054 + -0x84) = uVar6;
                      *(double *)((int)register0x00000054 + -0x80) = dVar17;
                      *(uint *)((int)register0x00000054 + -0x78) = uVar5;
                      k3c_internal_pkg_motion_vibration___ShaperCalibrate___psd();
                      *(undefined4 *)((int)register0x00000054 + -0x4c) =
                           *(undefined4 *)((int)register0x00000054 + -0x74);
                      *(undefined4 *)((int)register0x00000054 + -100) =
                           *(undefined4 *)((int)register0x00000054 + -0x70);
                      *(undefined4 *)((int)register0x00000054 + -0x60) =
                           *(undefined4 *)((int)register0x00000054 + -0x6c);
                      *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_006a38c4;
                      FUN_00022cf8();
                      puVar4 = *(undefined4 **)((int)register0x00000054 + -0x84);
                      uVar6 = *(undefined4 *)((int)register0x00000054 + -0x68);
                      puVar4[1] = uVar6;
                      puVar4[2] = uVar6;
                      if (*DAT_006a38c8 == 0) {
                        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x34);
                        uVar8 = *(undefined4 *)((int)register0x00000054 + -0x4c);
                      }
                      else {
                        puVar4 = (undefined4 *)FUN_0009db64();
                        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x34);
                        *unaff_r8 = uVar6;
                        uVar8 = *(undefined4 *)((int)register0x00000054 + -0x4c);
                        unaff_r8[1] = uVar8;
                      }
                      *puVar4 = uVar6;
                      puVar4[4] = *(undefined4 *)((int)register0x00000054 + -100);
                      puVar4[5] = *(undefined4 *)((int)register0x00000054 + -0x60);
                      puVar4[3] = uVar8;
                      puVar4[6] = 1;
                      *(undefined4 **)((int)register0x00000054 + 0x14) = puVar4;
                      return;
                    }
                    dVar18 = (double)VectorSignedToFloat(unaff_s30 & 0xffff0000 | uVar12 & 0xffff,
                                                         (byte)(in_fpscr >> 0x16) & 3);
                    unaff_s30 = unaff_s30 & 0xffff0000 | uVar5 & 0xffff;
                    dVar19 = (double)VectorSignedToFloat(unaff_s30,(byte)(in_fpscr >> 0x16) & 3);
                    uVar16 = uVar12 == uVar7;
                    if (uVar7 <= uVar12) break;
                    *(double *)(iVar11 + uVar12 * 8) = dVar18 / (dVar19 * (1.0 / dVar17));
                    uVar12 = uVar12 + 1;
                  }
                  FUN_0009dbd4(uVar12,uVar7);
                }
                FUN_0009dbd4(0,0);
              }
              FUN_0009dbd4(0,0);
              uVar7 = extraout_r2_00;
            }
            FUN_0009dbd4(uVar7);
          }
          FUN_0009dbd4(0,0);
        }
        *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_006a38cc;
        FUN_00020b18();
        iVar11 = extraout_r2_01;
        iVar10 = extraout_r3;
      }
      *(int *)((int)register0x00000054 + -0x88) = iVar11;
      *(int *)((int)register0x00000054 + -0x84) = iVar10;
      *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_006a38d0;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x8c);
      if ((bool)uVar16) {
        register0x00000054 = (BADSPACEBASE *)puVar15;
      }
    }
    unaff_lr = 0x6a3894;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).Process_accelerometer_data @ 006a38d4 (size 652) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__Process_accelerometer_data
               (undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x58) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x54) = DAT_006a3b64;
      FUN_00022cf8();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x50);
      *puVar1 = DAT_006a3b68;
      if (*DAT_006a3b6c == 0) {
        uVar2 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      else {
        puVar1 = (undefined4 *)FUN_0009db54();
        uVar2 = *(undefined4 *)((int)register0x00000054 + 4);
        *unaff_r8 = uVar2;
      }
      puVar1[1] = uVar2;
      if (*(int *)((int)register0x00000054 + 8) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)((int)register0x00000054 + 8) + 4);
      }
      if (iVar4 == 0) {
        iVar4 = 0;
        uVar2 = 0;
        uVar7 = 0;
      }
      else {
        *(int *)((int)register0x00000054 + -0x14) = iVar4;
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        iVar4 = *(int *)((int)register0x00000054 + -0x14);
        if (iVar4 == 0) {
          uVar7 = 0;
          iVar4 = 0;
          uVar2 = 0;
        }
        else {
          uVar7 = *(byte *)(iVar4 + 0xf) & 0x1f;
          if ((*(byte *)(iVar4 + 0xf) & 0x20) == 0) {
            uVar7 = uVar7 | 0x80;
          }
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
        }
      }
      *(undefined4 **)((int)register0x00000054 + -0xc) = puVar1;
      *(undefined4 *)((int)register0x00000054 + -0x20) = uVar2;
      *(int *)((int)register0x00000054 + -0x28) = iVar4;
      *(uint *)((int)register0x00000054 + -0x30) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_006a3b70;
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      iVar4 = *(int *)((int)register0x00000054 + -0x1c);
      if (iVar4 == 0) {
        iVar4 = 0;
        unaff_r8 = (undefined4 *)0x0;
        uVar7 = 0;
      }
      else {
        uVar7 = *(byte *)(iVar4 + 0xf) & 0x1f;
        if ((*(byte *)(iVar4 + 0xf) & 0x20) == 0) {
          uVar7 = uVar7 | 0x80;
        }
        unaff_r8 = *(undefined4 **)((int)register0x00000054 + -0x18);
      }
      *(uint *)((int)register0x00000054 + -0x34) = uVar7;
      *(undefined4 **)((int)register0x00000054 + -0x24) = unaff_r8;
      *(int *)((int)register0x00000054 + -0x2c) = iVar4;
      *(undefined4 *)((int)register0x00000054 + -0x54) = DAT_006a3b74;
      FUN_00022cf8();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x50);
      puVar1[2] = *(undefined4 *)((int)register0x00000054 + -0x30);
      if (*DAT_006a3b6c == 0) {
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x28);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x20);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x2c);
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x24);
      }
      else {
        puVar1 = (undefined4 *)FUN_0009db84();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x28);
        *unaff_r8 = uVar2;
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x20);
        unaff_r8[1] = uVar3;
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x2c);
        unaff_r8[2] = uVar5;
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x24);
        unaff_r8[3] = uVar6;
      }
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[5] = *(undefined4 *)((int)register0x00000054 + -0x34);
      puVar1[3] = uVar5;
      puVar1[4] = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x50) = DAT_006a3b78;
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + -0xc);
      *(undefined4 **)((int)register0x00000054 + -0x48) = puVar1;
      *(undefined4 *)((int)register0x00000054 + -0x44) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 2;
      k3c_internal_pkg_motion_vibration___ShaperCalibrate__Background_process_exec();
      iVar4 = *(int *)((int)register0x00000054 + -0x3c);
      if (iVar4 != 0) {
        if (iVar4 == DAT_006a3b7c) {
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x38);
          return;
        }
        *(int *)((int)register0x00000054 + -0x54) = iVar4;
        *(int *)((int)register0x00000054 + -0x50) = DAT_006a3b7c;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_006a3b80;
        FUN_000209b4();
      }
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      uVar9 = *(int *)((int)register0x00000054 + 8) == 0;
      uVar2 = 0;
      if (!(bool)uVar9) {
        uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -8) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + 0xc)
      ;
      *(undefined4 *)((int)register0x00000054 + -0x54) = DAT_006a3b84;
      *(undefined4 *)((int)register0x00000054 + -0x50) = 0x2f;
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
      *(undefined4 *)((int)register0x00000054 + -0x54) = DAT_006a3b88;
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x58);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x6a3b5c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate)._estimate_shaper @ 006a3b8c (size 2088) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate___estimate_shaper(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  undefined4 extraout_r2_02;
  int extraout_r2_03;
  undefined4 extraout_r2_04;
  int extraout_r2_05;
  int extraout_r2_06;
  int extraout_r2_07;
  int iVar3;
  int extraout_r3;
  double *pdVar4;
  int extraout_r3_00;
  int extraout_r3_01;
  double *extraout_r3_02;
  double *extraout_r3_03;
  int extraout_r3_04;
  double *extraout_r3_05;
  double *extraout_r3_06;
  int extraout_r3_07;
  double *extraout_r3_08;
  int extraout_r3_09;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *unaff_r8;
  uint uVar11;
  int unaff_r9;
  int unaff_r10;
  undefined1 *puVar12;
  undefined4 unaff_lr;
  undefined1 uVar13;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  double dVar14;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  double dVar15;
  undefined8 uVar16;
  
code_r0x006a3b8c:
  if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x2c)) {
    puVar12 = (undefined1 *)((int)register0x00000054 + -0xac);
    *(undefined4 *)((int)register0x00000054 + -0xac) = unaff_lr;
    dVar14 = 0.0;
    for (iVar5 = 0; iVar5 < *(int *)((int)register0x00000054 + 0xc); iVar5 = iVar5 + 1) {
      dVar14 = dVar14 + *(double *)(*(int *)((int)register0x00000054 + 8) + iVar5 * 8);
    }
    *(int *)((int)register0x00000054 + -0x48) = *(int *)((int)register0x00000054 + 0xc);
    *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 8);
    *(undefined4 *)((int)register0x00000054 + -0x20) =
         *(undefined4 *)((int)register0x00000054 + 0x14);
    *(undefined4 *)((int)register0x00000054 + -0x54) =
         *(undefined4 *)((int)register0x00000054 + 0x18);
    *(double *)((int)register0x00000054 + -0x50) = dVar14;
    *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_006a43b8;
    *(undefined4 *)((int)register0x00000054 + -0xa4) =
         *(undefined4 *)((int)register0x00000054 + 0x2c);
    *(undefined4 *)((int)register0x00000054 + -0xa0) =
         *(undefined4 *)((int)register0x00000054 + 0x2c);
    FUN_000986b8();
    *(double *)((int)register0x00000054 + -0x74) =
         1.0 / *(double *)((int)register0x00000054 + -0x50);
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -0x9c)
    ;
    *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_006a43b8;
    *(undefined4 *)((int)register0x00000054 + -0xa4) =
         *(undefined4 *)((int)register0x00000054 + 0x2c);
    *(undefined4 *)((int)register0x00000054 + -0xa0) =
         *(undefined4 *)((int)register0x00000054 + 0x2c);
    FUN_000986b8();
    *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)((int)register0x00000054 + -0x9c)
    ;
    *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_006a43b8;
    *(undefined4 *)((int)register0x00000054 + -0xa4) =
         *(undefined4 *)((int)register0x00000054 + 0x2c);
    *(undefined4 *)((int)register0x00000054 + -0xa0) =
         *(undefined4 *)((int)register0x00000054 + 0x2c);
    FUN_000986b8();
    iVar5 = *(int *)((int)register0x00000054 + -0x9c);
    *(int *)((int)register0x00000054 + -0xc) = iVar5;
    iVar1 = 0;
    while (iVar1 < *(int *)((int)register0x00000054 + 0x2c)) {
      dVar14 = *(double *)(*(int *)((int)register0x00000054 + 0x28) + iVar1 * 8);
      *(double **)((int)register0x00000054 + -0x10) =
           (double *)(*(int *)((int)register0x00000054 + -4) + iVar1 * 8);
      dVar14 = *DAT_006a43bc * dVar14;
      *(double *)(*(int *)((int)register0x00000054 + -4) + iVar1 * 8) = dVar14;
      dVar15 = *(double *)((int)register0x00000054 + 0x20);
      *(double *)(*(int *)((int)register0x00000054 + -8) + iVar1 * 8) = -(dVar15 * dVar14);
      *(int *)((int)register0x00000054 + -0x14) = iVar5 + iVar1 * 8;
      *(int *)((int)register0x00000054 + -0x34) = iVar1 + 1;
      *(double *)((int)register0x00000054 + -0xa8) = 1.0 - dVar15 * dVar15;
      k3c_common_cmath__Cfunc_sqrt();
      **(double **)((int)register0x00000054 + -0x14) =
           **(double **)((int)register0x00000054 + -0x10) *
           *(double *)((int)register0x00000054 + -0xa0);
      iVar5 = *(int *)((int)register0x00000054 + -0xc);
      iVar1 = *(int *)((int)register0x00000054 + -0x34);
    }
    *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_006a43b8;
    *(undefined4 *)((int)register0x00000054 + -0xa4) =
         *(undefined4 *)((int)register0x00000054 + -0x54);
    *(undefined4 *)((int)register0x00000054 + -0xa0) =
         *(undefined4 *)((int)register0x00000054 + -0x54);
    FUN_000986b8();
    iVar5 = *(int *)((int)register0x00000054 + -0x9c);
    uVar2 = *(uint *)((int)register0x00000054 + -0x54);
    iVar1 = *(int *)((int)register0x00000054 + -0x20);
    for (iVar3 = 0; iVar3 < (int)uVar2; iVar3 = iVar3 + 1) {
      uVar6 = uVar2 - 1;
      uVar13 = uVar2 == uVar6;
      if (uVar2 <= uVar6) goto LAB_006a439c;
      *(double *)(iVar5 + iVar3 * 8) =
           *(double *)(iVar1 + uVar6 * 8) - *(double *)(iVar1 + iVar3 * 8);
    }
    *(int *)((int)register0x00000054 + -4) = iVar5;
    *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_006a43c0;
    *(undefined4 *)((int)register0x00000054 + -0xa4) =
         *(undefined4 *)((int)register0x00000054 + 0x2c);
    *(undefined4 *)((int)register0x00000054 + -0xa0) =
         *(undefined4 *)((int)register0x00000054 + 0x2c);
    FUN_000986b8();
    iVar5 = *(int *)((int)register0x00000054 + -0x9c);
    *(int *)((int)register0x00000054 + -0x18) = iVar5;
    iVar1 = 0;
    while (iVar3 = *(int *)((int)register0x00000054 + 0x2c), iVar1 < iVar3) {
      *(int *)((int)register0x00000054 + -100) = iVar1;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_006a43b8;
      *(undefined4 *)((int)register0x00000054 + -0xa4) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      FUN_000986b8();
      iVar1 = *(int *)((int)register0x00000054 + -100);
      uVar16 = CONCAT44(iVar1 * 3,iVar1);
      iVar5 = *(int *)((int)register0x00000054 + -0x18);
      iVar1 = iVar5 + iVar1 * 0xc;
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x9c);
      pdVar8 = *(double **)((int)register0x00000054 + -0x54);
      *(double **)(iVar1 + 4) = pdVar8;
      *(double **)(iVar1 + 8) = pdVar8;
      if (*DAT_006a43c4 != 0) {
        uVar16 = FUN_0009db64();
        *(undefined4 *)unaff_r8 = uVar7;
        *(undefined4 *)((int)unaff_r8 + 4) =
             *(undefined4 *)(extraout_r2 + (int)((ulonglong)uVar16 >> 0x20) * 4);
        iVar5 = extraout_r2;
        iVar1 = extraout_r3;
      }
      *(undefined4 *)(iVar5 + (int)((ulonglong)uVar16 >> 0x20) * 4) = uVar7;
      uVar6 = *(uint *)((int)register0x00000054 + -4);
      uVar2 = *(uint *)((int)register0x00000054 + -8);
      pdVar9 = (double *)0x0;
      while( true ) {
        if ((int)pdVar8 <= (int)pdVar9) break;
        unaff_r8 = *(double **)(iVar1 + 4);
        unaff_r9 = *(int *)(iVar5 + (int)((ulonglong)uVar16 >> 0x20) * 4);
        dVar14 = *(double *)(uVar2 + (int)uVar16 * 8) * *(double *)(uVar6 + (int)pdVar9 * 8);
        uVar13 = pdVar9 == unaff_r8;
        if (unaff_r8 <= pdVar9) {
          FUN_0009dbd4(pdVar9,unaff_r8);
          goto LAB_006a439c;
        }
LAB_006a4358:
        unaff_r8 = (double *)(unaff_r9 + (int)pdVar9 * 8);
        *unaff_r8 = dVar14;
        pdVar9 = (double *)((int)pdVar9 + 1);
      }
      iVar1 = (int)uVar16 + 1;
    }
    *(int *)((int)register0x00000054 + -0xa8) = iVar5;
    *(int *)((int)register0x00000054 + -0xa4) = iVar3;
    *(int *)((int)register0x00000054 + -0xa0) = iVar3;
    k3c_common_utils_maths_Exp();
    uVar16 = *(undefined8 *)((int)register0x00000054 + -0x9c);
    iVar5 = *(int *)((int)register0x00000054 + -0x1c);
    pdVar4 = *(double **)((int)register0x00000054 + -0x48);
    uVar6 = 0;
    do {
      iVar1 = (int)((ulonglong)uVar16 >> 0x20);
      if ((int)uVar6 < iVar1) {
        pdVar8 = (double *)0x0;
        goto LAB_006a432c;
      }
      *(int *)((int)register0x00000054 + -0x58) = iVar1;
      *(int *)((int)register0x00000054 + -0x24) = (int)uVar16;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_006a43c0;
      *(undefined4 *)((int)register0x00000054 + -0xa4) =
           *(undefined4 *)((int)register0x00000054 + 0x2c);
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + 0x2c);
      FUN_000986b8();
      iVar5 = *(int *)((int)register0x00000054 + -0x9c);
      *(int *)((int)register0x00000054 + -4) = iVar5;
      iVar1 = 0;
LAB_006a3e78:
      iVar3 = *(int *)((int)register0x00000054 + 0x2c);
      if (iVar3 <= iVar1) {
        *(int *)((int)register0x00000054 + -0xa8) = iVar5;
        *(int *)((int)register0x00000054 + -0xa4) = iVar3;
        *(int *)((int)register0x00000054 + -0xa0) = iVar3;
        k3c_common_utils_maths_Sin();
        uVar16 = *(undefined8 *)((int)register0x00000054 + -0x9c);
        uVar7 = *(undefined4 *)((int)register0x00000054 + -0x94);
        pdVar4 = *(double **)((int)register0x00000054 + -0x58);
        uVar6 = *(uint *)((int)register0x00000054 + -0x24);
        pdVar8 = (double *)0x0;
        goto LAB_006a3f24;
      }
      *(int *)((int)register0x00000054 + -0x68) = iVar1;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_006a43b8;
      *(undefined4 *)((int)register0x00000054 + -0xa4) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      FUN_000986b8();
      iVar1 = *(int *)((int)register0x00000054 + -0x68);
      uVar16 = CONCAT44(iVar1 * 3,iVar1);
      iVar5 = *(int *)((int)register0x00000054 + -4);
      iVar1 = iVar5 + iVar1 * 0xc;
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x9c);
      pdVar8 = *(double **)((int)register0x00000054 + -0x54);
      *(double **)(iVar1 + 4) = pdVar8;
      *(double **)(iVar1 + 8) = pdVar8;
      if (*DAT_006a43c4 != 0) {
        uVar16 = FUN_0009db64();
        *(undefined4 *)unaff_r8 = uVar7;
        *(undefined4 *)((int)unaff_r8 + 4) =
             *(undefined4 *)(extraout_r2_00 + (int)((ulonglong)uVar16 >> 0x20) * 4);
        iVar5 = extraout_r2_00;
        iVar1 = extraout_r3_00;
      }
      *(undefined4 *)(iVar5 + (int)((ulonglong)uVar16 >> 0x20) * 4) = uVar7;
      uVar6 = *(uint *)((int)register0x00000054 + -0x20);
      uVar2 = *(uint *)((int)register0x00000054 + -0xc);
      pdVar9 = (double *)0x0;
      while( true ) {
        if ((int)pdVar8 <= (int)pdVar9) goto LAB_006a3e70;
        unaff_r8 = *(double **)(iVar1 + 4);
        unaff_r9 = *(int *)(iVar5 + (int)((ulonglong)uVar16 >> 0x20) * 4);
        dVar14 = *(double *)(uVar2 + (int)uVar16 * 8) * *(double *)(uVar6 + (int)pdVar9 * 8);
        if (unaff_r8 <= pdVar9) break;
LAB_006a42cc:
        unaff_r8 = (double *)(unaff_r9 + (int)pdVar9 * 8);
        *unaff_r8 = dVar14;
        pdVar9 = (double *)((int)pdVar9 + 1);
      }
      uVar16 = FUN_0009dbd4(pdVar9,unaff_r8);
      iVar5 = extraout_r2_06;
      pdVar4 = extraout_r3_08;
      while( true ) {
        pdVar9 = (double *)(uVar2 + (int)pdVar8 * 8);
        *pdVar9 = *(double *)(iVar5 + (int)pdVar8 * 8) * *pdVar9;
        pdVar8 = (double *)((int)pdVar8 + 1);
LAB_006a432c:
        pdVar9 = *(double **)((int)uVar16 + uVar6 * 0xc + 4);
        uVar2 = *(uint *)((int)uVar16 + uVar6 * 0xc);
        if ((int)pdVar9 <= (int)pdVar8) break;
        if (pdVar4 <= pdVar8) {
          uVar7 = FUN_0009dbd4(pdVar8,pdVar4);
          uVar16 = CONCAT44(extraout_r1_01,uVar7);
          dVar14 = (double)CONCAT44(extraout_s1_01,extraout_s0_01);
          iVar5 = extraout_r2_07;
          iVar1 = extraout_r3_09;
          goto LAB_006a4358;
        }
      }
      uVar6 = uVar6 + 1;
    } while( true );
  }
  goto LAB_006a43a8;
LAB_006a3f24:
  if ((int)((ulonglong)uVar16 >> 0x20) <= (int)pdVar8) {
    *(undefined8 *)((int)register0x00000054 + -0xa8) = uVar16;
    *(undefined4 *)((int)register0x00000054 + -0xa0) = uVar7;
    *(undefined4 *)((int)register0x00000054 + -0x9c) = 1;
    k3c_common_utils_maths_Sum2();
    *(undefined4 *)((int)register0x00000054 + -0x2c) =
         *(undefined4 *)((int)register0x00000054 + -0x98);
    *(undefined4 *)((int)register0x00000054 + -0x78) =
         *(undefined4 *)((int)register0x00000054 + -0x94);
    *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_006a43c0;
    *(undefined4 *)((int)register0x00000054 + -0xa4) =
         *(undefined4 *)((int)register0x00000054 + 0x2c);
    *(undefined4 *)((int)register0x00000054 + -0xa0) =
         *(undefined4 *)((int)register0x00000054 + 0x2c);
    FUN_000986b8();
    iVar5 = *(int *)((int)register0x00000054 + -0x9c);
    *(int *)((int)register0x00000054 + -4) = iVar5;
    iVar1 = 0;
    while (iVar3 = *(int *)((int)register0x00000054 + 0x2c), iVar1 < iVar3) {
      *(int *)((int)register0x00000054 + -0x6c) = iVar1;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_006a43b8;
      *(undefined4 *)((int)register0x00000054 + -0xa4) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      FUN_000986b8();
      iVar1 = *(int *)((int)register0x00000054 + -0x6c);
      uVar16 = CONCAT44(iVar1 * 3,iVar1);
      iVar5 = *(int *)((int)register0x00000054 + -4);
      iVar1 = iVar5 + iVar1 * 0xc;
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x9c);
      pdVar8 = *(double **)((int)register0x00000054 + -0x54);
      *(double **)(iVar1 + 4) = pdVar8;
      *(double **)(iVar1 + 8) = pdVar8;
      if (*DAT_006a43c4 != 0) {
        uVar16 = FUN_0009db64();
        *(undefined4 *)unaff_r8 = uVar7;
        *(undefined4 *)((int)unaff_r8 + 4) =
             *(undefined4 *)(extraout_r2_01 + (int)((ulonglong)uVar16 >> 0x20) * 4);
        iVar5 = extraout_r2_01;
        iVar1 = extraout_r3_01;
      }
      *(undefined4 *)(iVar5 + (int)((ulonglong)uVar16 >> 0x20) * 4) = uVar7;
      uVar6 = *(uint *)((int)register0x00000054 + -0x20);
      uVar2 = *(uint *)((int)register0x00000054 + -0xc);
      pdVar9 = (double *)0x0;
      while( true ) {
        if ((int)pdVar8 <= (int)pdVar9) break;
        unaff_r9 = *(int *)(iVar5 + (int)((ulonglong)uVar16 >> 0x20) * 4);
        dVar14 = *(double *)(uVar2 + (int)uVar16 * 8) * *(double *)(uVar6 + (int)pdVar9 * 8);
        if (*(double **)(iVar1 + 4) <= pdVar9) {
          uVar16 = FUN_0009dbd4(pdVar9,*(double **)(iVar1 + 4));
          uVar7 = extraout_r2_04;
          pdVar4 = extraout_r3_05;
          goto LAB_006a4264;
        }
LAB_006a4220:
        unaff_r8 = (double *)(unaff_r9 + (int)pdVar9 * 8);
        *unaff_r8 = dVar14;
        pdVar9 = (double *)((int)pdVar9 + 1);
      }
      iVar1 = (int)uVar16 + 1;
    }
    *(int *)((int)register0x00000054 + -0xa8) = iVar5;
    *(int *)((int)register0x00000054 + -0xa4) = iVar3;
    *(int *)((int)register0x00000054 + -0xa0) = iVar3;
    k3c_common_utils_maths_Cos();
    uVar16 = *(undefined8 *)((int)register0x00000054 + -0x9c);
    uVar7 = *(undefined4 *)((int)register0x00000054 + -0x94);
    pdVar4 = *(double **)((int)register0x00000054 + -0x58);
    uVar6 = *(uint *)((int)register0x00000054 + -0x24);
    pdVar8 = (double *)0x0;
    do {
      if ((int)((ulonglong)uVar16 >> 0x20) <= (int)pdVar8) {
        *(undefined8 *)((int)register0x00000054 + -0xa8) = uVar16;
        *(undefined4 *)((int)register0x00000054 + -0xa0) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x9c) = 1;
        k3c_common_utils_maths_Sum2();
        iVar5 = *(int *)((int)register0x00000054 + -0x98);
        *(int *)((int)register0x00000054 + -0x28) = iVar5;
        uVar11 = *(uint *)((int)register0x00000054 + -0x94);
        *(uint *)((int)register0x00000054 + -0x5c) = uVar11;
        iVar1 = *(int *)((int)register0x00000054 + -0x2c);
        iVar3 = *(int *)((int)register0x00000054 + -0x78);
        uVar6 = 0;
        pdVar8 = (double *)0x0;
        pdVar9 = (double *)0x0;
        uVar2 = DAT_006a43c8;
        while( true ) {
          if (iVar3 <= (int)uVar6) {
            *(uint *)((int)register0x00000054 + 0x34) = uVar2;
            *(double **)((int)register0x00000054 + 0x38) = pdVar9;
            *(double **)((int)register0x00000054 + 0x3c) = pdVar8;
            return;
          }
          if (uVar11 <= uVar6) break;
          *(double **)((int)register0x00000054 + -0x84) = pdVar8;
          *(uint *)((int)register0x00000054 + -0x60) = uVar6;
          *(uint *)((int)register0x00000054 + -0x30) = uVar2;
          *(undefined8 *)((int)register0x00000054 + -0x80) = *(undefined8 *)(iVar1 + uVar6 * 8);
          *(uint *)((int)register0x00000054 + -0x34) = (int)pdVar9 + 1;
          *(undefined8 *)((int)register0x00000054 + -0xa8) = *(undefined8 *)(iVar5 + uVar6 * 8);
          *(undefined8 *)((int)register0x00000054 + -0xa0) = 0x4000000000000000;
          k3c_common_cmath__Cfunc_pow();
          *(undefined8 *)((int)register0x00000054 + -0x3c) =
               *(undefined8 *)((int)register0x00000054 + -0x98);
          *(undefined8 *)((int)register0x00000054 + -0xa8) =
               *(undefined8 *)((int)register0x00000054 + -0x80);
          *(undefined8 *)((int)register0x00000054 + -0xa0) = 0x4000000000000000;
          k3c_common_cmath__Cfunc_pow();
          *(double *)((int)register0x00000054 + -0xa8) =
               *(double *)((int)register0x00000054 + -0x3c) +
               *(double *)((int)register0x00000054 + -0x98);
          k3c_common_cmath__Cfunc_sqrt();
          dVar14 = *(double *)((int)register0x00000054 + -0xa0) *
                   *(double *)((int)register0x00000054 + -0x74);
          pdVar8 = *(double **)((int)register0x00000054 + -0x84);
          pdVar9 = *(double **)((int)register0x00000054 + -0x34);
          if (pdVar8 < pdVar9) {
            *(double *)((int)register0x00000054 + -0x44) = dVar14;
            *(undefined4 *)((int)register0x00000054 + -0xa8) =
                 *(undefined4 *)((int)register0x00000054 + -0x30);
            *(double **)((int)register0x00000054 + -0xa4) = pdVar9;
            *(double **)((int)register0x00000054 + -0xa0) = pdVar8;
            *(undefined4 *)((int)register0x00000054 + -0x9c) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x98) = DAT_006a43b8;
            FUN_000987f4();
            uVar2 = *(uint *)((int)register0x00000054 + -0x94);
            pdVar9 = *(double **)((int)register0x00000054 + -0x90);
            pdVar8 = *(double **)((int)register0x00000054 + -0x8c);
            dVar14 = *(double *)((int)register0x00000054 + -0x44);
          }
          else {
            uVar2 = *(uint *)((int)register0x00000054 + -0x30);
          }
          *(double *)(uVar2 + ((int)pdVar9 - 1U) * 8) = dVar14;
          uVar6 = *(int *)((int)register0x00000054 + -0x60) + 1;
          iVar1 = *(int *)((int)register0x00000054 + -0x2c);
          uVar11 = *(uint *)((int)register0x00000054 + -0x5c);
          iVar5 = *(int *)((int)register0x00000054 + -0x28);
          iVar3 = *(int *)((int)register0x00000054 + -0x78);
          unaff_r9 = iVar5;
        }
        uVar16 = FUN_0009dbd4(uVar6);
        uVar7 = extraout_r2_02;
        pdVar4 = extraout_r3_02;
        goto LAB_006a41b8;
      }
      uVar2 = 0;
      while( true ) {
        pdVar9 = (double *)((int)pdVar8 * 3);
        unaff_r9 = *(int *)((int)uVar16 + (int)pdVar8 * 0xc);
        if (*(int *)((int)uVar16 + (int)pdVar8 * 0xc + 4) <= (int)uVar2) break;
        if (pdVar4 <= pdVar8) {
LAB_006a4214:
          uVar7 = FUN_0009dbd4(pdVar8,pdVar4);
          uVar16 = CONCAT44(extraout_r1,uVar7);
          dVar14 = (double)CONCAT44(extraout_s1,extraout_s0);
          iVar5 = extraout_r2_03;
          iVar1 = extraout_r3_04;
          goto LAB_006a4220;
        }
        uVar11 = *(uint *)(uVar6 + (int)pdVar8 * 0xc + 4);
        pdVar9 = *(double **)(uVar6 + (int)pdVar8 * 0xc);
        if (uVar11 <= uVar2) {
          FUN_0009dbd4(uVar2,uVar11);
          pdVar4 = extraout_r3_03;
          goto LAB_006a4214;
        }
LAB_006a41b8:
        pdVar10 = (double *)(unaff_r9 + uVar2 * 8);
        *pdVar10 = pdVar9[uVar2] * *pdVar10;
        uVar2 = uVar2 + 1;
      }
      pdVar8 = (double *)((int)pdVar8 + 1);
    } while( true );
  }
  uVar2 = 0;
  while( true ) {
    pdVar9 = (double *)((int)pdVar8 * 3);
    unaff_r8 = *(double **)((int)uVar16 + (int)pdVar8 * 0xc + 4);
    unaff_r9 = *(int *)((int)uVar16 + (int)pdVar8 * 0xc);
    if ((int)unaff_r8 <= (int)uVar2) break;
    if (pdVar4 <= pdVar8) {
LAB_006a42c0:
      uVar7 = FUN_0009dbd4(pdVar8,pdVar4);
      uVar16 = CONCAT44(extraout_r1_00,uVar7);
      dVar14 = (double)CONCAT44(extraout_s1_00,extraout_s0_00);
      iVar5 = extraout_r2_05;
      iVar1 = extraout_r3_07;
      goto LAB_006a42cc;
    }
    uVar11 = *(uint *)(uVar6 + (int)pdVar8 * 0xc + 4);
    pdVar9 = *(double **)(uVar6 + (int)pdVar8 * 0xc);
    if (uVar11 <= uVar2) {
      FUN_0009dbd4(uVar2,uVar11);
      pdVar4 = extraout_r3_06;
      goto LAB_006a42c0;
    }
LAB_006a4264:
    pdVar10 = (double *)(unaff_r9 + uVar2 * 8);
    *pdVar10 = pdVar9[uVar2] * *pdVar10;
    uVar2 = uVar2 + 1;
  }
  pdVar8 = (double *)((int)pdVar8 + 1);
  goto LAB_006a3f24;
LAB_006a3e70:
  iVar1 = (int)uVar16 + 1;
  goto LAB_006a3e78;
LAB_006a439c:
  param_1 = FUN_0009dbd4(uVar6);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xac);
  if ((bool)uVar13) {
    register0x00000054 = (BADSPACEBASE *)puVar12;
  }
LAB_006a43a8:
  unaff_lr = 0x6a43b0;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x006a3b8c;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate)._estimate_remaining_vibrations @ 006a43cc (size 340) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate___estimate_remaining_vibrations
               (undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      FUN_0009e2e8(*(undefined4 *)((int)register0x00000054 + 4),
                   (undefined1 *)((int)register0x00000054 + 8),
                   (undefined1 *)((int)register0x00000054 + -0x38));
      *(undefined8 *)((int)register0x00000054 + -0x20) =
           *(undefined8 *)((int)register0x00000054 + 0x20);
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 0x28);
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + 0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)((int)register0x00000054 + 0x30);
      k3c_internal_pkg_motion_vibration___ShaperCalibrate___estimate_shaper();
      dVar6 = 0.0;
      for (iVar1 = 0; iVar1 < *(int *)((int)register0x00000054 + 0x38); iVar1 = iVar1 + 1) {
        dVar7 = *(double *)(*(int *)((int)register0x00000054 + 0x34) + iVar1 * 8);
        if (dVar7 <= dVar6) {
          dVar7 = dVar6;
        }
        dVar6 = dVar7;
      }
      uVar2 = *(uint *)((int)register0x00000054 + -8);
      uVar3 = 0;
      dVar7 = 0.0;
      dVar8 = 0.0;
      while( true ) {
        if (*(int *)((int)register0x00000054 + 0x38) <= (int)uVar3) {
          *(double *)((int)register0x00000054 + 0x40) = dVar7 / dVar8;
          *(int *)((int)register0x00000054 + 0x48) = *(int *)((int)register0x00000054 + -0xc);
          *(uint *)((int)register0x00000054 + 0x4c) = uVar2;
          *(undefined4 *)((int)register0x00000054 + 0x50) =
               *(undefined4 *)((int)register0x00000054 + -4);
          return;
        }
        bVar5 = uVar3 == uVar2;
        if (uVar2 <= uVar3) break;
        dVar9 = *(double *)(*(int *)((int)register0x00000054 + 0x34) + uVar3 * 8);
        dVar10 = *(double *)(*(int *)((int)register0x00000054 + -0xc) + uVar3 * 8) * dVar9 -
                 dVar6 / 20.0;
        if (dVar10 <= 0.0) {
          dVar10 = 0.0;
        }
        dVar9 = dVar9 - dVar6 / 20.0;
        dVar7 = dVar10 + dVar7;
        if (dVar9 <= 0.0) {
          dVar9 = 0.0;
        }
        uVar3 = uVar3 + 1;
        dVar8 = dVar9 + dVar8;
      }
      param_1 = FUN_0009dbd4(uVar3);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x6a451c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate)._get_shaper_smoothing @ 006a4520 (size 496) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate___get_shaper_smoothing(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
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
  double dVar13;
  double dVar14;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x68) = unaff_lr;
      dVar9 = *(double *)((int)register0x00000054 + 0x20) * 0.5;
      uVar4 = *(uint *)((int)register0x00000054 + 0xc);
      iVar5 = *(int *)((int)register0x00000054 + 8);
      dVar10 = 0.0;
      for (iVar1 = 0; iVar1 < (int)uVar4; iVar1 = iVar1 + 1) {
        dVar10 = dVar10 + *(double *)(iVar5 + iVar1 * 8);
      }
      iVar1 = *(int *)((int)register0x00000054 + 0x14);
      iVar6 = *(int *)((int)register0x00000054 + 0x18);
      dVar10 = 1.0 / dVar10;
      dVar11 = 0.0;
      for (uVar2 = 0; (int)uVar2 < iVar6; uVar2 = uVar2 + 1) {
        uVar8 = uVar2 == uVar4;
        if (uVar4 <= uVar2) goto LAB_006a46fc;
        dVar11 = dVar11 + *(double *)(iVar5 + uVar2 * 8) * *(double *)(iVar1 + uVar2 * 8);
      }
      *(double *)((int)register0x00000054 + -0x20) = dVar9;
      *(double *)((int)register0x00000054 + -0x2c) = dVar10;
      *(uint *)((int)register0x00000054 + -0x14) = uVar4;
      *(int *)((int)register0x00000054 + -8) = iVar1;
      *(int *)((int)register0x00000054 + -4) = iVar5;
      *(int *)((int)register0x00000054 + -0x18) = iVar6;
      dVar11 = dVar11 * dVar10;
      *(double *)((int)register0x00000054 + -0x44) = dVar11;
      dVar12 = *(double *)((int)register0x00000054 + 0x28);
      uVar2 = 0;
      dVar13 = 0.0;
      dVar14 = 0.0;
      while( true ) {
        if (iVar6 <= (int)uVar2) {
          *(double *)((int)register0x00000054 + -0x10) = dVar13;
          *(double *)((int)register0x00000054 + -0x4c) = dVar14 * dVar10;
          *(undefined8 *)((int)register0x00000054 + -100) = 0x4000000000000000;
          k3c_common_cmath__Cfunc_sqrt();
          *(double *)((int)register0x00000054 + -100) =
               *(double *)((int)register0x00000054 + -0x10) *
               *(double *)((int)register0x00000054 + -0x5c) *
               *(double *)((int)register0x00000054 + -0x2c);
          *(undefined8 *)((int)register0x00000054 + -0x5c) =
               *(undefined8 *)((int)register0x00000054 + -0x4c);
          k3c_common_cmath__Cfunc_fmax();
          *(undefined8 *)((int)register0x00000054 + 0x30) =
               *(undefined8 *)((int)register0x00000054 + -0x54);
          return;
        }
        *(uint *)((int)register0x00000054 + -0x24) = uVar2;
        *(double *)((int)register0x00000054 + -0x34) = dVar14;
        dVar10 = *(double *)(iVar1 + uVar2 * 8);
        if (dVar11 <= dVar10) {
          uVar8 = uVar2 == uVar4;
          if (uVar4 <= uVar2) goto LAB_006a46f8;
          dVar13 = dVar13 + (dVar10 - dVar11) *
                            (dVar12 + dVar9 * (dVar10 - dVar11)) * *(double *)(iVar5 + uVar2 * 8);
        }
        *(double *)((int)register0x00000054 + -0x3c) = dVar13;
        *(double *)((int)register0x00000054 + -100) = dVar10 - dVar11;
        *(undefined8 *)((int)register0x00000054 + -0x5c) = 0x4000000000000000;
        k3c_common_cmath__Cfunc_pow();
        uVar3 = *(uint *)((int)register0x00000054 + -0x24);
        uVar4 = *(uint *)((int)register0x00000054 + -0x14);
        uVar8 = uVar3 == uVar4;
        if (uVar4 <= uVar3) break;
        iVar5 = *(int *)((int)register0x00000054 + -4);
        dVar9 = *(double *)((int)register0x00000054 + -0x20);
        uVar2 = uVar3 + 1;
        dVar14 = *(double *)((int)register0x00000054 + -0x34) +
                 *(double *)((int)register0x00000054 + -0x54) *
                 *(double *)(iVar5 + uVar3 * 8) * dVar9;
        iVar6 = *(int *)((int)register0x00000054 + -0x18);
        iVar1 = *(int *)((int)register0x00000054 + -8);
        dVar12 = *(double *)((int)register0x00000054 + 0x28);
        dVar11 = *(double *)((int)register0x00000054 + -0x44);
        dVar13 = *(double *)((int)register0x00000054 + -0x3c);
        dVar10 = *(double *)((int)register0x00000054 + -0x2c);
      }
      FUN_0009dbd4();
LAB_006a46f8:
      FUN_0009dbd4();
LAB_006a46fc:
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x68);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x6a470c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).Fit_shaper @ 006a4710 (size 1692) */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x006a49c0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__Fit_shaper(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_r1;
  int iVar3;
  int extraout_r2;
  int extraout_r2_00;
  uint uVar4;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  uint extraout_r3_04;
  uint extraout_r3_05;
  uint uVar5;
  uint extraout_r3_06;
  undefined4 uVar6;
  int unaff_r10;
  uint extraout_r12;
  uint uVar7;
  undefined4 extraout_s2;
  double dVar8;
  undefined4 extraout_s3;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *in_stack_00000010;
  double in_stack_00000014;
  undefined4 *in_stack_0000001c;
  double in_stack_00000020;
  undefined8 local_194;
  undefined8 local_18c;
  undefined4 local_184;
  int iStack_180;
  uint local_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 local_15c;
  double local_158;
  undefined4 local_150;
  undefined4 local_14c;
  int local_148;
  double local_144;
  double local_13c;
  undefined8 local_134;
  undefined4 local_12c;
  undefined4 local_128;
  double local_124;
  uint local_11c;
  uint local_118;
  uint local_114;
  undefined4 local_110;
  undefined4 local_10c;
  double local_108;
  double local_100;
  double local_f8;
  uint local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  uint local_e0;
  int local_dc;
  uint local_d8;
  uint local_d4;
  undefined4 local_d0;
  int local_cc;
  uint local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  double local_a4;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [4];
  int local_44;
  double local_2c;
  int local_c;
  int local_8;
  uint local_4;
  
  while (&local_118 <= *(uint **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  uVar1 = FUN_0009ded8(0,&stack0x00000028);
  dVar8 = *DAT_006a4db0;
  if (dVar8 < in_stack_00000014) {
    uVar2 = 0;
    iVar3 = 0;
    uVar4 = 0;
    do {
      if (in_stack_00000014 <= dVar8) goto LAB_006a47dc;
      uVar4 = uVar4 + 1;
      if (uVar2 < uVar4) {
        local_194 = (double)CONCAT44(uVar4,iVar3);
        local_18c = CONCAT44(1,uVar2);
        local_184 = DAT_006a4db8;
        local_100 = in_stack_00000014;
        FUN_000987f4();
        uVar1 = 0;
        dVar8 = *DAT_006a4db0;
        uVar2 = (uint)local_178;
        iVar3 = iStack_180;
        uVar4 = local_17c;
        in_stack_00000014 = local_100;
      }
      *(double *)(iVar3 + (uVar4 - 1) * 8) = in_stack_00000014;
      in_stack_00000014 = in_stack_00000014 + *DAT_006a4db4;
    } while( true );
  }
  uVar2 = 0;
  iVar3 = 0;
  uVar4 = 0;
LAB_006a4d44:
  if (dVar8 <= in_stack_00000014) {
LAB_006a47dc:
    uVar6 = in_stack_0000001c[1];
    local_4c = *in_stack_0000001c;
    local_e4 = in_stack_0000001c[2];
    local_110 = in_stack_0000001c[4];
    local_10c = in_stack_0000001c[5];
    local_50 = in_stack_0000001c[3];
    local_114 = uVar4;
    local_e8 = uVar6;
    local_90 = iVar3;
    uVar1 = FUN_0009ded8(uVar1,auStack_48);
    FUN_0009ded8(uVar1,&local_8c);
    uVar4 = 0;
    local_94 = 0;
    iVar3 = extraout_r2;
    uVar5 = extraout_r3;
    uVar7 = 0;
    uVar2 = extraout_r3;
LAB_006a4880:
    uVar2 = uVar2 - 1;
    local_11c = uVar4;
    if ((int)uVar2 < 0) {
      FUN_0009e2a0(0,auStack_48,&local_d0);
      uVar4 = local_11c;
      iVar3 = local_94;
      uVar2 = local_11c;
      while( true ) {
        uVar2 = uVar2 - 1;
        if ((int)uVar2 < 0) {
          FUN_0009e2a0(uVar2,&local_d0,&stack0x00000028);
          return;
        }
        if (uVar4 <= uVar2) break;
        local_f0 = uVar2;
        uVar1 = FUN_0009e2a0(uVar2,uVar2 * 0x3c + iVar3,&local_8c);
        iVar3 = extraout_r3_02;
        uVar2 = local_f0;
        if ((local_70 < *DAT_006a4ddc * local_2c) && (local_60 < local_a4)) {
          FUN_0009e2a0(uVar1,&local_8c,&local_d0);
          iVar3 = extraout_r3_03;
          uVar2 = local_f0;
        }
      }
      FUN_0009dbd4();
      goto LAB_006a4c20;
    }
    if (uVar5 <= uVar2) goto LAB_006a4d20;
    local_134 = *(undefined8 *)(iVar3 + uVar2 * 8);
    local_194 = (double)CONCAT44(uVar6,DAT_006a4db8);
    local_118 = uVar7;
    local_ec = uVar2;
    local_18c._0_4_ = uVar6;
    FUN_000986b8();
    local_4 = local_18c._4_4_;
    FUN_0009defc(0,&local_d0);
    local_194 = (double)local_134;
    local_18c = *DAT_006a4dbc;
    (*(code *)*in_stack_00000010)();
    local_d0 = local_184;
    local_cc = iStack_180;
    local_c8 = local_17c;
    local_c4 = (uint)local_178;
    local_c0 = local_178._4_4_;
    local_bc = (undefined4)local_170;
    local_194 = (double)CONCAT44(local_194._4_4_,in_stack_00000004);
    FUN_0009e2e8(in_stack_00000004,&local_d0,(int)&local_194 + 4);
    dVar8 = *DAT_006a4dc0;
    local_170 = 0x4014000000000000;
    local_178 = dVar8;
    k3c_internal_pkg_motion_vibration___ShaperCalibrate___get_shaper_smoothing();
    if (((in_stack_00000020 != 0.0) && (in_stack_00000020 < (double)CONCAT44(uStack_164,local_168)))
       && (local_44 != 0)) {
      FUN_0009e2a0(local_44,auStack_48,&stack0x00000028);
      return;
    }
    local_8 = *DAT_006a4dc4;
    local_d8 = *DAT_006a4dc8;
    iVar3 = 0;
    in_stack_00000014 = 0.0;
    local_128 = local_e8;
    local_12c = local_e8;
    local_d4 = local_4;
    local_124 = (double)CONCAT44(uStack_164,local_168);
    while( true ) {
      local_144 = in_stack_00000014;
      if ((int)local_d8 <= iVar3) break;
      dVar8 = *(double *)(local_8 + iVar3 * 8);
      local_194 = (double)CONCAT44(local_194._4_4_,in_stack_00000004);
      local_dc = iVar3;
      FUN_0009e2e8(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),SUB84(in_stack_00000020,0),iVar3,
                   &local_d0,(int)&local_194 + 4);
      local_170 = CONCAT44(local_e8,local_4c);
      local_168 = local_e4;
      uStack_164 = local_50;
      local_160 = local_110;
      local_15c = local_10c;
      local_178 = dVar8;
      k3c_internal_pkg_motion_vibration___ShaperCalibrate___estimate_remaining_vibrations();
      local_13c = local_158;
      local_194 = (double)CONCAT44(local_12c,local_d4);
      local_18c = CONCAT44(local_150,local_128);
      local_184 = local_14c;
      iStack_180 = local_148;
      k3c_common_utils_maths_Maximum();
      in_stack_00000014 = local_13c;
      if (local_13c <= local_144) {
        in_stack_00000014 = local_144;
      }
LAB_006a4c20:
      iVar3 = local_dc + 1;
      local_128 = local_178._4_4_;
      local_12c = (uint)local_178;
      local_d4 = local_17c;
      dVar8 = in_stack_00000014;
    }
    local_194 = (double)CONCAT44(local_194._4_4_,in_stack_00000004);
    FUN_0009e2e8(SUB84(local_124,0),(int)((ulonglong)dVar8 >> 0x20),SUB84(in_stack_00000020,0),
                 in_stack_00000004,&local_d0,(int)&local_194 + 4);
    k3c_internal_pkg_motion_vibration___ShaperCalibrate__find_shaper_max_accel();
    local_108 = local_178;
    local_d8 = local_11c + 1;
    local_194 = local_144;
    local_18c = 0x3ff8000000000000;
    k3c_common_cmath__Cfunc_pow();
    local_8c = in_stack_00000008;
    local_88 = in_stack_0000000c;
    in_stack_00000014 =
         (*DAT_006a4dd0 + (double)CONCAT44(iStack_180,local_184) + local_144 * *DAT_006a4dcc) *
         local_124;
    local_84 = local_134;
    local_7c = local_d4;
    local_78 = local_12c;
    local_74 = local_128;
    local_70 = local_144;
    local_68 = local_124;
    local_58 = local_108;
    uVar2 = local_d8;
    local_60 = in_stack_00000014;
    if (local_118 < local_d8) {
      local_194 = (double)CONCAT44(local_d8,local_94);
      local_18c = CONCAT44(1,local_118);
      local_184 = DAT_006a4dd4;
      FUN_000987f4();
      local_94 = iStack_180;
      uVar2 = local_17c;
      local_118 = (uint)local_178;
    }
    local_c = local_94 + uVar2 * 0x3c + -0x3c;
    if (*DAT_006a4dd8 != 0) {
      local_194 = (double)CONCAT44(local_c,DAT_006a4dd4);
      local_18c = CONCAT44(local_18c._4_4_,&local_8c);
      local_e0 = uVar2;
      FUN_00026c00();
      uVar2 = local_e0;
    }
    FUN_0009e2a0(local_94,&local_8c,local_c,uVar2);
    if (local_44 == 0) goto LAB_006a4b4c;
    uVar4 = extraout_r3_00 - 1;
    uVar2 = extraout_r3_00;
    if (uVar4 < extraout_r3_00) goto code_r0x006a4b34;
    goto LAB_006a4d18;
  }
  uVar4 = uVar4 + 1;
  if (uVar2 < uVar4) {
    local_194 = (double)CONCAT44(uVar4,iVar3);
    local_18c = CONCAT44(1,uVar2);
    local_184 = DAT_006a4db8;
    local_f8 = in_stack_00000014;
    FUN_000987f4();
    uVar1 = 0;
    dVar8 = *DAT_006a4db0;
    uVar2 = (uint)local_178;
    iVar3 = iStack_180;
    uVar4 = local_17c;
    in_stack_00000014 = local_f8;
  }
  goto LAB_006a4d2c;
code_r0x006a4b34:
  uVar4 = extraout_r3_00;
  iVar3 = local_90;
  uVar5 = local_114;
  uVar6 = local_e8;
  uVar7 = local_118;
  uVar2 = local_ec;
  if (local_2c <= *(double *)(local_c + 0x1c)) goto LAB_006a4880;
LAB_006a4b4c:
  uVar2 = extraout_r3_00 - 1;
  if (uVar2 < extraout_r3_00) {
    FUN_0009e2a0(uVar2,local_c,auStack_48);
    uVar4 = extraout_r3_01;
    iVar3 = local_90;
    uVar5 = local_114;
    uVar6 = local_e8;
    uVar7 = local_118;
    uVar2 = local_ec;
    goto LAB_006a4880;
  }
  uVar4 = FUN_0009dbd4(uVar2,extraout_r3_00);
  uVar2 = extraout_r3_04;
LAB_006a4d18:
  FUN_0009dbd4(uVar4,uVar2);
  uVar5 = extraout_r3_05;
  uVar2 = extraout_r12;
LAB_006a4d20:
  uVar1 = FUN_0009dbd4(uVar2,uVar5);
  dVar8 = (double)CONCAT44(extraout_s3,extraout_s2);
  uVar2 = extraout_r1;
  iVar3 = extraout_r2_00;
  uVar4 = extraout_r3_06;
LAB_006a4d2c:
  *(double *)(iVar3 + (uVar4 - 1) * 8) = in_stack_00000014;
  in_stack_00000014 = in_stack_00000014 + *DAT_006a4db4;
  goto LAB_006a4d44;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate)._bisect @ 006a4de0 (size 284) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate___bisect(void)

{
  int unaff_r10;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 *in_stack_00000008;
  undefined8 in_stack_0000000c;
  char local_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  dVar1 = 1.0;
  dVar2 = 1.0;
  while (dVar3 = dVar1, (*(code *)*in_stack_00000008)(), local_1c == '\0') {
    dVar1 = dVar3 * 0.5;
    dVar2 = dVar3;
  }
  if (dVar2 == dVar3) {
    while ((*(code *)*in_stack_00000008)(), local_1c != '\0') {
      dVar2 = dVar2 + dVar2;
    }
  }
  while (dVar1 = dVar2, *DAT_006a4f00 < dVar1 - dVar3) {
    dVar4 = (dVar3 + dVar1) * 0.5;
    (*(code *)*in_stack_00000008)();
    dVar2 = dVar4;
    if (local_1c != '\0') {
      dVar2 = dVar1;
      dVar3 = dVar4;
    }
  }
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).find_shaper_max_accel @ 006a4f04 (size 108) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__find_shaper_max_accel(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000020;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 auStack_20 [24];
  undefined8 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x6a4f6c;
    FUN_0009bf64();
  }
  uVar1 = FUN_0009deec(0,&local_28);
  local_28 = DAT_006a4f74;
  local_24 = in_stack_00000004;
  FUN_0009e2e8(uVar1,&stack0x00000008,auStack_20,in_stack_00000004,unaff_lr);
  local_8 = *DAT_006a4f78;
  k3c_internal_pkg_motion_vibration___ShaperCalibrate___bisect();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).find_shaper_max_accel.func1 @ 006a4f7c (size 108) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__find_shaper_max_accel_func1(void)

{
  int unaff_r7;
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined1 in_stack_0000000c;
  undefined1 auStack_38 [24];
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  uStack_8 = *(undefined8 *)(unaff_r7 + 0x20);
  FUN_0009e2e8(*(undefined4 *)(unaff_r7 + 4),unaff_r7 + 8,auStack_38);
  uStack_20 = in_stack_00000004;
  uStack_18 = 0x4014000000000000;
  k3c_internal_pkg_motion_vibration___ShaperCalibrate___get_shaper_smoothing();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).find_best_shaper @ 006a4fe8 (size 1724) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__find_best_shaper(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_r2;
  int iVar7;
  int extraout_r3;
  undefined4 extraout_r3_00;
  int extraout_r3_01;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  int unaff_r10;
  undefined1 *puVar15;
  undefined4 unaff_lr;
  bool bVar16;
  double dVar17;
  
  while ((undefined1 *)((int)register0x00000054 + -0x144) <= *(undefined1 **)(unaff_r10 + 8)) {
LAB_006a5698:
    unaff_lr = 0x6a56a0;
    param_1 = FUN_0009bf64(param_1);
  }
  puVar15 = (undefined1 *)((int)register0x00000054 + -0x1c4);
  *(undefined4 *)((int)register0x00000054 + -0x1c4) = unaff_lr;
  uVar1 = FUN_0009ded8(0,(undefined1 *)((int)register0x00000054 + 0x14));
  uVar1 = FUN_0009ded8(uVar1,(undefined1 *)((int)register0x00000054 + -0xc0));
  iVar7 = *DAT_006a56a8;
  iVar8 = *DAT_006a56ac;
  uVar4 = 0;
  uVar6 = 0;
  iVar11 = DAT_006a56b0;
  do {
    if (iVar8 < 1) {
      *(undefined4 *)((int)register0x00000054 + -0x18c) = uVar6;
      FUN_0009e2a0(uVar1,(undefined1 *)((int)register0x00000054 + -0xc0),
                   (undefined1 *)((int)register0x00000054 + 0x14),uVar4);
      *(int *)((int)register0x00000054 + 0x50) = iVar11;
      *(undefined4 *)((int)register0x00000054 + 0x54) = extraout_r3_00;
      *(undefined4 *)((int)register0x00000054 + 0x58) =
           *(undefined4 *)((int)register0x00000054 + -0x18c);
      return;
    }
    *(int *)((int)register0x00000054 + -0x144) = iVar8;
    *(int *)((int)register0x00000054 + -4) = iVar7;
    FUN_0009e2f0(uVar1,iVar7,(undefined1 *)((int)register0x00000054 + -0x128));
    iVar2 = *DAT_006a56b4;
    *(int *)((int)register0x00000054 + -8) = iVar2;
    puVar14 = (undefined4 *)*DAT_006a56b8;
    *(undefined4 **)((int)register0x00000054 + -0x148) = puVar14;
    iVar7 = extraout_r3;
    for (iVar5 = 0; iVar5 < (int)puVar14; iVar5 = iVar5 + 1) {
      uVar1 = *(undefined4 *)(iVar2 + iVar5 * 8);
      if (*(int *)((int)register0x00000054 + -0x124) == *(int *)(iVar2 + iVar5 * 8 + 4)) {
        *(int *)((int)register0x00000054 + -0x14c) = iVar5;
        *(int *)((int)register0x00000054 + -0x84) = iVar11;
        *(undefined4 *)((int)register0x00000054 + -400) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x150) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x1c0) =
             *(undefined4 *)((int)register0x00000054 + -0x128);
        *(undefined4 *)((int)register0x00000054 + -0x1bc) = uVar1;
        *(int *)((int)register0x00000054 + -0x1b8) = *(int *)((int)register0x00000054 + -0x124);
        FUN_00018250();
        if (*(char *)((int)register0x00000054 + -0x1b4) == '\0') {
          iVar2 = *(int *)((int)register0x00000054 + -8);
          iVar5 = *(int *)((int)register0x00000054 + -0x14c);
          iVar7 = *(int *)((int)register0x00000054 + -4);
          iVar8 = *(int *)((int)register0x00000054 + -0x144);
          puVar14 = *(undefined4 **)((int)register0x00000054 + -0x148);
          uVar4 = *(undefined4 *)((int)register0x00000054 + -400);
          uVar6 = *(undefined4 *)((int)register0x00000054 + -0x150);
          iVar11 = *(int *)((int)register0x00000054 + -0x84);
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -0x1c0) = DAT_006a56bc;
          FUN_00022cf8();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x1bc);
          *puVar3 = DAT_006a56c0;
          if (*DAT_006a56c4 == 0) {
            uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
          }
          else {
            puVar3 = (undefined4 *)FUN_0009db54();
            uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
            *puVar14 = uVar1;
          }
          *(undefined4 **)((int)register0x00000054 + -0xc) = puVar3;
          puVar3[1] = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x1c0) = DAT_006a56c8;
          *(undefined1 **)((int)register0x00000054 + -0x1bc) =
               (undefined1 *)((int)register0x00000054 + -0x128);
          FUN_00020b9c();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x1b8);
          *(undefined4 *)((int)register0x00000054 + -200) = DAT_006a56c8;
          *(undefined4 *)((int)register0x00000054 + -0xc4) = uVar1;
          iVar7 = *(int *)((int)register0x00000054 + -200);
          if (iVar7 == 0) {
            iVar7 = 0;
            uVar1 = 0;
            uVar9 = 0;
          }
          else {
            uVar9 = *(byte *)(iVar7 + 0xf) & 0x1f;
            if ((*(byte *)(iVar7 + 0xf) & 0x20) == 0) {
              uVar9 = uVar9 | 0x80;
            }
          }
          *(int *)((int)register0x00000054 + -0x138) = iVar7;
          *(uint *)((int)register0x00000054 + -0x194) = uVar9;
          *(undefined4 *)((int)register0x00000054 + -300) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0xd0) = DAT_006a56cc;
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + 8);
          iVar7 = *(int *)((int)register0x00000054 + -0xd0);
          if (iVar7 == 0) {
            iVar7 = 0;
            uVar1 = 0;
            puVar14 = (undefined4 *)0x0;
          }
          else {
            puVar14 = (undefined4 *)(*(byte *)(iVar7 + 0xf) & 0x1f);
            if ((*(byte *)(iVar7 + 0xf) & 0x20) == 0) {
              puVar14 = (undefined4 *)((uint)puVar14 | 0x80);
            }
            uVar1 = *(undefined4 *)((int)register0x00000054 + -0xcc);
          }
          *(undefined4 **)((int)register0x00000054 + -0x198) = puVar14;
          *(undefined4 *)((int)register0x00000054 + -0x130) = uVar1;
          *(int *)((int)register0x00000054 + -0x13c) = iVar7;
          *(undefined8 *)((int)register0x00000054 + -0x168) =
               *(undefined8 *)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x1c0) =
               *(undefined4 *)((int)register0x00000054 + -0x168);
          *(undefined4 *)((int)register0x00000054 + -0x1bc) =
               *(undefined4 *)((int)register0x00000054 + -0x164);
          FUN_0008f6c0();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x1b8);
          *(undefined4 *)((int)register0x00000054 + -0xd8) = DAT_006a56d0;
          *(undefined4 *)((int)register0x00000054 + -0xd4) = uVar1;
          iVar7 = *(int *)((int)register0x00000054 + -0xd8);
          if (iVar7 == 0) {
            iVar7 = 0;
            uVar1 = 0;
            uVar9 = 0;
          }
          else {
            uVar9 = *(byte *)(iVar7 + 0xf) & 0x1f;
            if ((*(byte *)(iVar7 + 0xf) & 0x20) == 0) {
              uVar9 = uVar9 | 0x80;
            }
          }
          *(uint *)((int)register0x00000054 + -0x19c) = uVar9;
          *(undefined4 *)((int)register0x00000054 + -0x134) = uVar1;
          *(int *)((int)register0x00000054 + -0x140) = iVar7;
          *(undefined4 *)((int)register0x00000054 + -0x1c0) = DAT_006a56d4;
          FUN_00022cf8();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x1bc);
          puVar3[2] = *(undefined4 *)((int)register0x00000054 + -0x194);
          if (*DAT_006a56c4 == 0) {
            uVar1 = *(undefined4 *)((int)register0x00000054 + -0x138);
            uVar4 = *(undefined4 *)((int)register0x00000054 + -300);
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x13c);
            uVar10 = *(undefined4 *)((int)register0x00000054 + -0x130);
            uVar12 = *(undefined4 *)((int)register0x00000054 + -0x140);
            uVar13 = *(undefined4 *)((int)register0x00000054 + -0x134);
          }
          else {
            puVar3 = (undefined4 *)FUN_0009dba4();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -0x138);
            *puVar14 = uVar1;
            uVar4 = *(undefined4 *)((int)register0x00000054 + -300);
            puVar14[1] = uVar4;
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x13c);
            puVar14[2] = uVar6;
            uVar10 = *(undefined4 *)((int)register0x00000054 + -0x130);
            puVar14[3] = uVar10;
            uVar12 = *(undefined4 *)((int)register0x00000054 + -0x140);
            puVar14[4] = uVar12;
            uVar13 = *(undefined4 *)((int)register0x00000054 + -0x134);
            puVar14[5] = uVar13;
          }
          *puVar3 = uVar1;
          puVar3[1] = uVar4;
          puVar3[5] = *(undefined4 *)((int)register0x00000054 + -0x198);
          puVar3[3] = uVar6;
          puVar3[4] = uVar10;
          puVar3[8] = *(undefined4 *)((int)register0x00000054 + -0x19c);
          puVar3[6] = uVar12;
          puVar3[7] = uVar13;
          *(undefined4 *)((int)register0x00000054 + -0x1c0) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x1bc) = DAT_006a56d8;
          *(undefined4 *)((int)register0x00000054 + -0x1b8) =
               *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 **)((int)register0x00000054 + -0x1b4) = puVar3;
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = 3;
          *(undefined4 *)((int)register0x00000054 + -0x1ac) = 3;
          k3c_internal_pkg_motion_vibration___ShaperCalibrate__Background_process_exec();
          uVar1 = FUN_0009ded8(0,(undefined1 *)((int)register0x00000054 + -0x50),
                               *(undefined4 *)((int)register0x00000054 + -0x1a4),
                               *(undefined4 *)((int)register0x00000054 + -0x1a8));
          bVar16 = extraout_r3_01 == DAT_006a56dc;
          if (!bVar16) {
            *(int *)((int)register0x00000054 + -0x1c0) = extraout_r3_01;
            *(int *)((int)register0x00000054 + -0x1bc) = DAT_006a56dc;
            *(undefined4 *)((int)register0x00000054 + -0x1b8) = DAT_006a56fc;
            param_1 = FUN_000209b4();
            register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c4);
            if (bVar16) {
              register0x00000054 = (BADSPACEBASE *)puVar15;
            }
            goto LAB_006a5698;
          }
          uVar1 = FUN_0009e2a0(uVar1,extraout_r2,(undefined1 *)((int)register0x00000054 + -0x50));
          FUN_0009e2a0(uVar1,(undefined1 *)((int)register0x00000054 + -0x50),
                       (undefined1 *)((int)register0x00000054 + -0x114));
          FUN_0009def4(0,(undefined1 *)((int)register0x00000054 + -0x70));
          *(undefined4 *)((int)register0x00000054 + -0x1c0) =
               *(undefined4 *)((int)register0x00000054 + -0x114);
          *(undefined4 *)((int)register0x00000054 + -0x1bc) =
               *(undefined4 *)((int)register0x00000054 + -0x110);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_006a56e0;
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x1b8);
          *(undefined8 *)((int)register0x00000054 + -0x170) =
               *(undefined8 *)((int)register0x00000054 + -0x10c);
          *(undefined4 *)((int)register0x00000054 + -0x1c0) =
               *(undefined4 *)((int)register0x00000054 + -0x170);
          *(undefined4 *)((int)register0x00000054 + -0x1bc) =
               *(undefined4 *)((int)register0x00000054 + -0x16c);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_006a56d0;
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0x1b8);
          *(double *)((int)register0x00000054 + -0x178) =
               *DAT_006a56e4 * *(double *)((int)register0x00000054 + -0xf8);
          *(undefined4 *)((int)register0x00000054 + -0x1c0) =
               *(undefined4 *)((int)register0x00000054 + -0x178);
          *(undefined4 *)((int)register0x00000054 + -0x1bc) =
               *(undefined4 *)((int)register0x00000054 + -0x174);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_006a56d0;
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x1b8);
          *(undefined8 *)((int)register0x00000054 + -0x180) =
               *(undefined8 *)((int)register0x00000054 + -0xf0);
          *(undefined4 *)((int)register0x00000054 + -0x1c0) =
               *(undefined4 *)((int)register0x00000054 + -0x180);
          *(undefined4 *)((int)register0x00000054 + -0x1bc) =
               *(undefined4 *)((int)register0x00000054 + -0x17c);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -0x58) = DAT_006a56d0;
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + -0x1b8);
          *(undefined4 *)((int)register0x00000054 + -0x1c0) = DAT_006a56e8;
          *(undefined4 *)((int)register0x00000054 + -0x1bc) = 0x4f;
          *(undefined1 **)((int)register0x00000054 + -0x1b8) =
               (undefined1 *)((int)register0x00000054 + -0x70);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) = 4;
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = 4;
          k3c_internal_pkg_logger_Debugf();
          dVar17 = *DAT_006a56e4;
          *(int *)((int)register0x00000054 + -0x154) = *(int *)((int)register0x00000054 + -400) + 1;
          *(double *)((int)register0x00000054 + -0x1c0) =
               *(double *)((int)register0x00000054 + -0xe0) / dVar17;
          k3c_common_cmath__Cfunc_round();
          *(undefined8 *)((int)register0x00000054 + -0x15c) =
               *(undefined8 *)((int)register0x00000054 + -0x1b8);
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x80));
          *(undefined4 *)((int)register0x00000054 + -0x1c0) =
               *(undefined4 *)((int)register0x00000054 + -0x114);
          *(undefined4 *)((int)register0x00000054 + -0x1bc) =
               *(undefined4 *)((int)register0x00000054 + -0x110);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_006a56e0;
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + -0x1b8);
          *(double *)((int)register0x00000054 + -0x188) =
               *(double *)((int)register0x00000054 + -0x15c) * *DAT_006a56e4;
          *(undefined4 *)((int)register0x00000054 + -0x1c0) =
               *(undefined4 *)((int)register0x00000054 + -0x188);
          *(undefined4 *)((int)register0x00000054 + -0x1bc) =
               *(undefined4 *)((int)register0x00000054 + -0x184);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_006a56d0;
          *(undefined4 *)((int)register0x00000054 + -0x74) =
               *(undefined4 *)((int)register0x00000054 + -0x1b8);
          *(undefined4 *)((int)register0x00000054 + -0x1c0) = DAT_006a56ec;
          *(undefined4 *)((int)register0x00000054 + -0x1bc) = 0x4b;
          *(undefined1 **)((int)register0x00000054 + -0x1b8) =
               (undefined1 *)((int)register0x00000054 + -0x80);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = 2;
          k3c_internal_pkg_logger_Debugf();
          uVar9 = *(uint *)((int)register0x00000054 + -0x154);
          if (*(uint *)((int)register0x00000054 + -0x150) < uVar9) {
            *(undefined4 *)((int)register0x00000054 + -0x1c0) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            *(uint *)((int)register0x00000054 + -0x1bc) = uVar9;
            *(uint *)((int)register0x00000054 + -0x1b8) =
                 *(uint *)((int)register0x00000054 + -0x150);
            *(undefined4 *)((int)register0x00000054 + -0x1b4) = 1;
            *(int *)((int)register0x00000054 + -0x1b0) = DAT_006a56dc;
            FUN_000987f4();
            iVar11 = *(int *)((int)register0x00000054 + -0x1ac);
            uVar9 = *(uint *)((int)register0x00000054 + -0x1a8);
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x1a4);
          }
          else {
            iVar11 = *(int *)((int)register0x00000054 + -0x84);
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x150);
          }
          *(uint *)((int)register0x00000054 + -0x154) = uVar9;
          iVar7 = iVar11 + uVar9 * 0x3c + -0x3c;
          if (*DAT_006a56c4 != 0) {
            *(int *)((int)register0x00000054 + -0x10) = iVar11;
            *(undefined4 *)((int)register0x00000054 + -0x160) = uVar6;
            *(int *)((int)register0x00000054 + -0x14) = iVar7;
            *(int *)((int)register0x00000054 + -0x1c0) = DAT_006a56dc;
            *(int *)((int)register0x00000054 + -0x1bc) = iVar7;
            *(undefined1 **)((int)register0x00000054 + -0x1b8) =
                 (undefined1 *)((int)register0x00000054 + -0x114);
            FUN_00026c00();
            uVar9 = *(uint *)((int)register0x00000054 + -0x154);
            iVar7 = *(int *)((int)register0x00000054 + -0x14);
            iVar11 = *(int *)((int)register0x00000054 + -0x10);
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x160);
          }
          FUN_0009e2a0(uVar9,(undefined1 *)((int)register0x00000054 + -0x114),iVar7);
          if (*(int *)((int)register0x00000054 + -0xbc) == 0) {
LAB_006a564c:
            FUN_0009e2a0(*(int *)((int)register0x00000054 + -0xbc),
                         (undefined1 *)((int)register0x00000054 + -0x114),
                         (undefined1 *)((int)register0x00000054 + -0xc0));
          }
          else if ((*DAT_006a56f0 * *(double *)((int)register0x00000054 + -0xe8) <
                    *(double *)((int)register0x00000054 + -0x94)) ||
                  ((*DAT_006a56f4 * *(double *)((int)register0x00000054 + -0xe8) <
                    *(double *)((int)register0x00000054 + -0x94) &&
                   (*DAT_006a56f8 * *(double *)((int)register0x00000054 + -0xf0) <
                    *(double *)((int)register0x00000054 + -0x9c))))) goto LAB_006a564c;
          iVar2 = *(int *)((int)register0x00000054 + -8);
          iVar5 = *(int *)((int)register0x00000054 + -0x14c);
          iVar7 = *(int *)((int)register0x00000054 + -4);
          iVar8 = *(int *)((int)register0x00000054 + -0x144);
          puVar14 = *(undefined4 **)((int)register0x00000054 + -0x148);
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0x154);
        }
      }
    }
    iVar7 = iVar7 + 0x14;
    iVar8 = iVar8 + -1;
    uVar1 = 0;
  } while( true );
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).Save_params @ 006a5700 (size 516) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__Save_params(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  char *in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined8 in_stack_0000001c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (((in_stack_00000010 == 2) && (*in_stack_0000000c == 'x')) && (in_stack_0000000c[1] == 'y')) {
    k3c_internal_pkg_motion_vibration___ShaperCalibrate__Save_params();
    k3c_internal_pkg_motion_vibration___ShaperCalibrate__Save_params();
  }
  else {
    FUN_0007636c();
    k3c_internal_pkg_printer___PrinterConfig__Set();
    FUN_0008f6c0();
    FUN_0013b72c();
    FUN_0007636c();
    k3c_internal_pkg_printer___PrinterConfig__Set();
  }
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).Save_calibration_data @ 006a5924 (size 2980) */

/* WARNING: Removing unreachable block (ram,0x006a5ab4) */
/* WARNING: Removing unreachable block (ram,0x006a5b00) */
/* WARNING: Removing unreachable block (ram,0x006a6180) */
/* WARNING: Removing unreachable block (ram,0x006a6204) */
/* WARNING: Removing unreachable block (ram,0x006a61c4) */
/* WARNING: Removing unreachable block (ram,0x006a6208) */
/* WARNING: Removing unreachable block (ram,0x006a5f44) */
/* WARNING: Removing unreachable block (ram,0x006a5f00) */
/* WARNING: Removing unreachable block (ram,0x006a5f4c) */
/* WARNING: Removing unreachable block (ram,0x006a5f50) */
/* WARNING: Removing unreachable block (ram,0x006a5c1c) */
/* WARNING: Removing unreachable block (ram,0x006a5c68) */
/* WARNING: Removing unreachable block (ram,0x006a5c60) */
/* WARNING: Removing unreachable block (ram,0x006a5c6c) */
/* WARNING: Removing unreachable block (ram,0x006a5ff0) */
/* WARNING: Removing unreachable block (ram,0x006a5efc) */
/* WARNING: Removing unreachable block (ram,0x006a5ff8) */
/* WARNING: Removing unreachable block (ram,0x006a5ffc) */
/* WARNING: Removing unreachable block (ram,0x006a640c) */
/* WARNING: Removing unreachable block (ram,0x006a6458) */
/* WARNING: Removing unreachable block (ram,0x006a6450) */
/* WARNING: Removing unreachable block (ram,0x006a645c) */
/* WARNING: Removing unreachable block (ram,0x006a5af8) */
/* WARNING: Removing unreachable block (ram,0x006a5b04) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__Save_calibration_data(void)

{
  uint uVar1;
  int extraout_r1;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r3;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000010;
  int *in_stack_00000014;
  int in_stack_00000018;
  int *in_stack_0000001c;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int in_stack_ffffff34;
  undefined4 uVar10;
  int local_c8;
  uint local_c4;
  int local_a8;
  int local_a0;
  undefined1 local_78 [20];
  uint local_64;
  undefined1 auStack_60 [36];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_28 [2];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  undefined4 *local_4;
  
  while (auStack_60 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x6a64fc;
    FUN_0009bf64();
  }
  local_4 = (undefined4 *)0x0;
  uVar7 = 0x242;
  uVar9 = 0x1b6;
  FUN_0012dc78(0);
  if (local_c8 != 0) {
    FUN_0009df04(0,&local_18);
    FUN_0008f77c();
    local_18 = DAT_006a61cc;
    if (local_c8 == 0) {
      local_10 = 0;
    }
    else {
      local_10 = *(undefined4 *)(local_c8 + 4);
    }
    local_14 = uVar7;
    FUN_001386c4();
    return;
  }
  local_28[0] = DAT_006a61d4;
  local_4 = local_28;
  local_30 = in_stack_ffffff34;
  FUN_00017ffc(in_stack_ffffff34);
  if (((uVar9 & 0xff) == 0) && (uVar7 <= (uint)-DAT_006a61d8)) {
    uVar7 = 8;
    uVar9 = 8;
    iVar5 = local_30;
    iVar6 = DAT_006a61d8;
    FUN_0012d1d8();
    if (in_stack_00000018 == 0) goto LAB_006a5b88;
    if (in_stack_00000018 == DAT_006a61e0) {
      iVar2 = *in_stack_0000001c;
      iVar4 = in_stack_0000001c[1];
      iVar3 = DAT_006a61e0;
      do {
        if (iVar4 < 1) {
LAB_006a5b88:
          iVar5 = 1;
          iVar6 = 1;
          FUN_00017ffc();
          if (((uVar9 & 0xff) == 0) && (uVar7 <= (uint)-DAT_006a61e4)) {
            uVar7 = 1;
            uVar9 = 1;
            FUN_0012d1d8();
            if (in_stack_00000010 == 0) {
LAB_006a5cc8:
              (*(code *)*local_4)();
              return;
            }
            iVar5 = in_stack_00000010;
            iVar6 = DAT_006a61e8;
            if (in_stack_00000010 == DAT_006a61e8) {
              local_a0 = in_stack_00000014[1];
              uVar1 = 0;
LAB_006a5d00:
              if ((int)uVar1 < local_a0) {
                if (uVar1 < (uint)in_stack_00000014[1]) {
                  if (*DAT_006a61f0 <= *(double *)(*in_stack_00000014 + uVar1 * 8))
                  goto LAB_006a5cc8;
                  FUN_0009df04(0,&local_18);
                  if (uVar1 < *(uint *)(extraout_r2 + 4)) {
                    FUN_0008f6c0();
                    local_18 = DAT_006a61f4;
                    local_14 = uVar7;
                    if (uVar1 < (uint)in_stack_00000014[4]) {
                      FUN_0008f6c0();
                      local_10 = DAT_006a61f4;
                      puVar8 = &local_18;
                      uVar9 = 2;
                      uVar10 = 2;
                      local_c = uVar7;
                      FUN_0013b72c();
                      local_38 = local_c8;
                      FUN_00017ffc();
                      iVar5 = local_38;
                      if (((uVar9 & 0xff) == 0) && (puVar8 <= (undefined4 *)-local_38)) {
                        iVar5 = local_30;
                        iVar6 = local_38;
                        uVar7 = local_c4;
                        uVar9 = local_c4;
                        FUN_0012d1d8();
                        if (in_stack_00000018 == 0) goto LAB_006a5e94;
                        if (in_stack_00000018 == DAT_006a61e0) {
                          iVar3 = *in_stack_0000001c;
                          iVar2 = in_stack_0000001c[1];
                          do {
                            if (iVar2 < 1) {
LAB_006a5e94:
                              iVar5 = 1;
                              iVar6 = 1;
                              FUN_00017ffc();
                              if (((uVar9 & 0xff) == 0) && (uVar7 <= (uint)-DAT_006a61e4))
                              goto code_r0x006a5ecc;
                              FUN_0008a988();
                            }
                            else {
                              FUN_0009e2a0(in_stack_00000018,iVar3,local_78,DAT_006a61e0,unaff_lr,
                                           iVar5,iVar6,uVar7,uVar9,uVar10);
                              local_20 = 0;
                              local_1c = 0;
                              if (local_64 <= uVar1) {
                                FUN_0009dbd4(uVar1);
                                break;
                              }
                              local_8 = iVar3;
                              FUN_0008f6c0();
                              local_20 = DAT_006a61f4;
                              puVar8 = &local_20;
                              uVar9 = 1;
                              uVar10 = 1;
                              local_1c = uVar7;
                              FUN_0013b72c();
                              local_3c = local_c8;
                              FUN_00017ffc();
                              if (((uVar9 & 0xff) != 0) || ((undefined4 *)-local_3c < puVar8)) {
                                do {
                                  if (local_3c != 0) {
                                    FUN_0008a988();
                                  }
                                  FUN_0008aa14();
                                } while( true );
                              }
                              iVar5 = local_30;
                              uVar7 = local_c4;
                              uVar9 = local_c4;
                              FUN_0012d1d8();
                              iVar6 = local_3c;
                              local_a8 = iVar2;
                            }
                            iVar3 = local_8 + 0x3c;
                            iVar2 = local_a8 + -1;
                          } while( true );
                        }
                        FUN_000209b4();
                        iVar5 = extraout_r1;
                      }
                      do {
                        if (iVar5 != 0) {
                          FUN_0008a988();
                        }
                        FUN_0008aa14();
                        iVar5 = local_38;
                      } while( true );
                    }
                    FUN_0009dbd4(uVar1,in_stack_00000014[4]);
                  }
                  FUN_0009dbd4(uVar1);
                }
                FUN_0009dbd4();
                iVar5 = extraout_r2_00;
                iVar6 = extraout_r3;
                goto LAB_006a62c8;
              }
              goto LAB_006a5cc8;
            }
LAB_006a62c8:
            uVar7 = DAT_006a6508;
            FUN_000209b4();
          }
          FUN_0008a988();
        }
        else {
          local_8 = iVar2;
          FUN_0009e2a0(in_stack_00000018,iVar2,local_78,iVar3,unaff_lr,iVar5,iVar6);
          FUN_0009df04(0,&local_18);
          FUN_0008f77c();
          local_18 = DAT_006a6510;
          local_14 = uVar7;
          FUN_0008f6c0();
          local_10 = DAT_006a6514;
          puVar8 = &local_18;
          uVar9 = 2;
          local_c = uVar7;
          FUN_0013b72c();
          local_34 = local_c8;
          FUN_00017ffc();
          if (((uVar9 & 0xff) != 0) || ((undefined4 *)-local_34 < puVar8)) {
            do {
              if (local_34 != 0) {
                FUN_0008a988();
              }
              FUN_0008aa14();
            } while( true );
          }
          iVar5 = local_30;
          uVar7 = local_c4;
          uVar9 = local_c4;
          FUN_0012d1d8();
          iVar6 = local_34;
          local_a0 = iVar4;
        }
        iVar2 = local_8 + 0x3c;
        iVar4 = local_a0 + -1;
        iVar3 = DAT_006a650c;
      } while( true );
    }
    FUN_000209b4();
  }
  uVar10 = FUN_0008a988();
  FUN_00054344(uVar10);
  return;
code_r0x006a5ecc:
  uVar7 = 1;
  uVar9 = 1;
  FUN_0012d1d8();
  uVar1 = uVar1 + 1;
  goto LAB_006a5d00;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).Save_calibration_data.deferwrap1 @ 006a6520 (size 96) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__Save_calibration_data_deferwrap1(void)

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



/* k3c/internal/pkg/motion/vibration.Get_zv_shaper @ 006a6580 (size 236) */

void k3c_internal_pkg_motion_vibration_Get_zv_shaper(void)

{
  double dVar1;
  int unaff_r10;
  double dVar2;
  double in_stack_00000004;
  double in_stack_0000000c;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined8 *puStack_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  dVar1 = in_stack_0000000c * *DAT_006a6670;
  k3c_common_cmath__Cfunc_pow();
  k3c_common_cmath__Cfunc_sqrt();
  dVar2 = in_stack_00000004 * 2.0;
  k3c_common_cmath__Cfunc_exp();
  puStack_28 = (undefined8 *)((ulonglong)(-dVar1 / 2.0) >> 0x20);
  FUN_00022cf8();
  *puStack_28 = 0x3ff0000000000000;
  puStack_28[1] = 0x4000000000000000;
  FUN_00022cf8();
  puStack_28[1] = (1.0 / dVar2) * 0.5;
  return;
}



/* k3c/internal/pkg/motion/vibration.Get_zvd_shaper @ 006a6678 (size 284) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_vibration_Get_zvd_shaper(void)

{
  int unaff_r10;
  double dVar1;
  double in_stack_00000004;
  undefined8 in_stack_0000000c;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined8 uStack_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_common_cmath__Cfunc_pow();
  k3c_common_cmath__Cfunc_sqrt();
  dVar1 = 1.0 / (in_stack_00000004 * 2.0);
  k3c_common_cmath__Cfunc_exp();
  k3c_common_cmath__Cfunc_pow();
  FUN_00022cf8();
  _DAT_40000000 = 0x3ff0000000000000;
  _DAT_40000008 = 4.0;
  _DAT_40000010 = (double)uStack_2c;
  FUN_00022cf8();
  _DAT_40000008 = dVar1 * 0.5;
  _DAT_40000010 = dVar1;
  return;
}



/* k3c/internal/pkg/motion/vibration.Get_mzv_shaper @ 006a67a0 (size 356) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_motion_vibration_Get_mzv_shaper(void)

{
  int unaff_r10;
  double dVar1;
  double in_stack_00000004;
  undefined8 in_stack_0000000c;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_common_cmath__Cfunc_pow();
  k3c_common_cmath__Cfunc_sqrt();
  dVar1 = 1.0 / (in_stack_00000004 * 2.0);
  k3c_common_cmath__Cfunc_exp();
  k3c_common_cmath__Cfunc_sqrt();
  k3c_common_cmath__Cfunc_sqrt();
  FUN_00022cf8();
  _DAT_40000000 = 0x3fe0000000000000;
  _DAT_40000008 = 2.0;
  _DAT_40000010 = 2.0;
  FUN_00022cf8();
  _DAT_40000008 = dVar1 * 0.375;
  _DAT_40000010 = dVar1 * 0.75;
  return;
}



/* k3c/internal/pkg/motion/vibration.Get_ei_shaper @ 006a6910 (size 276) */

void k3c_internal_pkg_motion_vibration_Get_ei_shaper(void)

{
  int unaff_r10;
  double dVar1;
  double dVar2;
  double dVar3;
  double in_stack_00000004;
  double in_stack_0000000c;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  double *pdStack_30;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  dVar2 = in_stack_0000000c * *(double *)PTR_DAT_006a6a28;
  k3c_common_cmath__Cfunc_pow();
  k3c_common_cmath__Cfunc_sqrt();
  dVar1 = 1.0 / (in_stack_00000004 * 2.0);
  k3c_common_cmath__Cfunc_exp();
  pdStack_30 = (double *)((ulonglong)(-dVar2 / 2.0) >> 0x20);
  FUN_00022cf8();
  dVar2 = *(double *)PTR_DAT_006a6a30;
  dVar3 = *(double *)PTR_DAT_006a6a34;
  *pdStack_30 = dVar3;
  pdStack_30[1] = dVar2 * 2.0;
  pdStack_30[2] = dVar3 * 2.0 * 2.0;
  FUN_00022cf8();
  pdStack_30[1] = dVar1 * 0.5;
  pdStack_30[2] = dVar1;
  return;
}



/* k3c/internal/pkg/motion/vibration.Get_2hump_ei_shaper @ 006a6a38 (size 440) */

void k3c_internal_pkg_motion_vibration_Get_2hump_ei_shaper(void)

{
  undefined4 uVar1;
  int unaff_r10;
  double dVar2;
  double dVar3;
  double dVar4;
  double in_stack_00000004;
  undefined8 in_stack_0000000c;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  double *pdStack_48;
  double dStack_3c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_common_cmath__Cfunc_pow();
  k3c_common_cmath__Cfunc_sqrt();
  dVar2 = 1.0 / (in_stack_00000004 * 2.0);
  uVar1 = k3c_common_cmath__Cfunc_exp();
  k3c_common_cmath__Cfunc_pow(uVar1);
  k3c_common_cmath__Cfunc_sqrt();
  k3c_common_cmath__Cfunc_pow();
  pdStack_48 = (double *)((ulonglong)(dStack_3c * 3.0) >> 0x20);
  FUN_00022cf8();
  dVar3 = (dStack_3c + dStack_3c + dStack_3c * dStack_3c * 3.0 + dStack_3c * 3.0) /
          (dStack_3c * 16.0);
  dVar4 = (0.5 - dVar3) * 2.0;
  *pdStack_48 = dVar3;
  pdStack_48[1] = dVar4;
  pdStack_48[2] = dVar4 * 2.0;
  pdStack_48[3] = dVar3 * 2.0 * 2.0 * 2.0;
  FUN_00022cf8();
  pdStack_48[1] = dVar2 * 0.5;
  pdStack_48[2] = dVar2;
  pdStack_48[3] = dVar2 * 1.5;
  return;
}



/* k3c/internal/pkg/motion/vibration.Get_3hump_ei_shaper @ 006a6c04 (size 412) */

void k3c_internal_pkg_motion_vibration_Get_3hump_ei_shaper(void)

{
  int unaff_r10;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double in_stack_00000004;
  undefined8 in_stack_0000000c;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  double *pdStack_58;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_common_cmath__Cfunc_pow();
  k3c_common_cmath__Cfunc_sqrt();
  dVar1 = 1.0 / (in_stack_00000004 * 2.0);
  k3c_common_cmath__Cfunc_exp();
  dVar3 = *(double *)PTR_DAT_006a6da8;
  uVar5 = *(undefined8 *)PTR_DAT_006a6dac;
  k3c_common_cmath__Cfunc_sqrt();
  pdStack_58 = (double *)((ulonglong)uVar5 >> 0x20);
  FUN_00022cf8();
  dVar2 = (*(double *)PTR_DAT_006a6db4 + 4.0) * *(double *)PTR_DAT_006a6db8;
  dVar4 = *(double *)PTR_DAT_006a6dbc;
  *pdStack_58 = dVar2;
  pdStack_58[1] = dVar3 * 2.0;
  pdStack_58[2] = (dVar4 - (dVar2 + dVar2)) * 4.0;
  pdStack_58[3] = dVar3 * 2.0 * 4.0;
  pdStack_58[4] = dVar2 * 4.0 * 4.0;
  FUN_00022cf8();
  pdStack_58[1] = dVar1 * 0.5;
  pdStack_58[2] = dVar1;
  pdStack_58[3] = dVar1 * 1.5;
  pdStack_58[4] = dVar1 + dVar1;
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ResonanceTester).cmd_MEASURE_AXES_NOISE-fm @ 006a6ea4 (size 108) */

void k3c_internal_pkg_motion_vibration___ResonanceTester__cmd_MEASURE_AXES_NOISE_fm(void)

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
  k3c_internal_pkg_motion_vibration___ResonanceTester__cmd_MEASURE_AXES_NOISE();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ResonanceTester).cmd_TEST_RESONANCES-fm @ 006a6f10 (size 108) */

void k3c_internal_pkg_motion_vibration___ResonanceTester__cmd_TEST_RESONANCES_fm(void)

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
  k3c_internal_pkg_motion_vibration___ResonanceTester__cmd_TEST_RESONANCES();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ResonanceTester).cmd_TEST_RESONANCES_NO_CHIP-fm @ 006a6f7c (size 108) */

void k3c_internal_pkg_motion_vibration___ResonanceTester__cmd_TEST_RESONANCES_NO_CHIP_fm(void)

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
  k3c_internal_pkg_motion_vibration___ResonanceTester__cmd_TEST_RESONANCES_NO_CHIP();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ResonanceTester).cmd_SHAPER_CALIBRATE-fm @ 006a6fe8 (size 108) */

void k3c_internal_pkg_motion_vibration___ResonanceTester__cmd_SHAPER_CALIBRATE_fm(void)

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
  k3c_internal_pkg_motion_vibration___ResonanceTester__cmd_SHAPER_CALIBRATE();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ResonanceTester).connect-fm @ 006a7054 (size 124) */

void k3c_internal_pkg_motion_vibration___ResonanceTester__connect_fm(void)

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
  k3c_internal_pkg_motion_vibration___ResonanceTester__connect();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).Fit_shaper-fm @ 006a70d0 (size 152) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__Fit_shaper_fm(void)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  int unaff_r7;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000018;
  undefined8 in_stack_0000001c;
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [20];
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined1 auStack_78 [60];
  undefined1 auStack_3c [28];
  undefined1 auStack_20 [32];
  
  while( true ) {
    puVar3 = auStack_20;
    if (*(undefined1 **)(unaff_r10 + 8) < puVar3) break;
    unaff_lr = 0x6a7148;
    FUN_0009bf00();
  }
  puVar2 = *(uint **)(unaff_r10 + 0x10);
  if ((puVar2 != (uint *)0x0) && (puVar3 = (undefined1 *)*puVar2, &stack0x00000004 == puVar3)) {
    *puVar2 = (uint)auStack_9c;
  }
  uVar1 = FUN_0009ded8(0,&stack0x00000024,puVar3,*(undefined4 *)(unaff_r7 + 4),unaff_lr);
  FUN_0009e2f0(uVar1,&stack0x00000004,auStack_98);
  uStack_84 = in_stack_00000018;
  uStack_80 = in_stack_0000001c;
  uVar1 = k3c_internal_pkg_motion_vibration___ShaperCalibrate__Fit_shaper();
  uVar1 = FUN_0009e2a0(uVar1,auStack_78,auStack_3c);
  FUN_0009e2a0(uVar1,auStack_3c,&stack0x00000024);
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ShaperCalibrate).Calc_freq_response-fm @ 006a7168 (size 116) */

void k3c_internal_pkg_motion_vibration___ShaperCalibrate__Calc_freq_response_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_14;
  }
  uStack_14 = *(undefined4 *)(unaff_r7 + 4);
  uStack_10 = in_stack_00000004;
  uStack_c = in_stack_00000008;
  uStack_8 = in_stack_0000000c;
  k3c_internal_pkg_motion_vibration___ShaperCalibrate__Calc_freq_response();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12).Build_config-fm @ 006a71dc (size 84) */

void k3c_internal_pkg_motion_vibration___LIS2DW12__Build_config_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  k3c_internal_pkg_motion_vibration___LIS2DW12__Build_config();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12)._handle_sensor_data-fm @ 006a7230 (size 108) */

void k3c_internal_pkg_motion_vibration___LIS2DW12___handle_sensor_data_fm(void)

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
  k3c_internal_pkg_motion_vibration___LIS2DW12___handle_sensor_data();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12)._api_update-fm @ 006a729c (size 100) */

void k3c_internal_pkg_motion_vibration___LIS2DW12___api_update_fm(void)

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
  k3c_internal_pkg_motion_vibration___LIS2DW12___api_update();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12)._api_startstop-fm @ 006a7300 (size 92) */

void k3c_internal_pkg_motion_vibration___LIS2DW12___api_startstop_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined1 in_stack_00000004;
  undefined4 uStack_8;
  undefined1 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_8;
  }
  uStack_8 = *(undefined4 *)(unaff_r7 + 4);
  uStack_4 = in_stack_00000004;
  k3c_internal_pkg_motion_vibration___LIS2DW12___api_startstop();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*LIS2DW12)._handle_dump_lis2dw12-fm @ 006a735c (size 92) */

void k3c_internal_pkg_motion_vibration___LIS2DW12___handle_dump_lis2dw12_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_8;
  }
  uStack_8 = *(undefined4 *)(unaff_r7 + 4);
  uStack_4 = in_stack_00000004;
  k3c_internal_pkg_motion_vibration___LIS2DW12___handle_dump_lis2dw12();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*InputShaper).Connect-fm @ 006a73b8 (size 124) */

void k3c_internal_pkg_motion_vibration___InputShaper__Connect_fm(void)

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
  k3c_internal_pkg_motion_vibration___InputShaper__Connect();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*InputShaper).Cmd_SET_INPUT_SHAPER-fm @ 006a7434 (size 108) */

void k3c_internal_pkg_motion_vibration___InputShaper__Cmd_SET_INPUT_SHAPER_fm(void)

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
  k3c_internal_pkg_motion_vibration___InputShaper__Cmd_SET_INPUT_SHAPER();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345).Build_config-fm @ 006a74a0 (size 84) */

void k3c_internal_pkg_motion_vibration___ADXL345__Build_config_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  k3c_internal_pkg_motion_vibration___ADXL345__Build_config();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345)._handle_adxl345_data-fm @ 006a74f4 (size 108) */

void k3c_internal_pkg_motion_vibration___ADXL345___handle_adxl345_data_fm(void)

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
  k3c_internal_pkg_motion_vibration___ADXL345___handle_adxl345_data();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345)._api_update-fm @ 006a7560 (size 100) */

void k3c_internal_pkg_motion_vibration___ADXL345___api_update_fm(void)

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
  k3c_internal_pkg_motion_vibration___ADXL345___api_update();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345)._api_startstop-fm @ 006a75c4 (size 92) */

void k3c_internal_pkg_motion_vibration___ADXL345___api_startstop_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined1 in_stack_00000004;
  undefined4 uStack_8;
  undefined1 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_8;
  }
  uStack_8 = *(undefined4 *)(unaff_r7 + 4);
  uStack_4 = in_stack_00000004;
  k3c_internal_pkg_motion_vibration___ADXL345___api_startstop();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*ADXL345)._handle_dump_adxl345-fm @ 006a7620 (size 92) */

void k3c_internal_pkg_motion_vibration___ADXL345___handle_dump_adxl345_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_8;
  }
  uStack_8 = *(undefined4 *)(unaff_r7 + 4);
  uStack_4 = in_stack_00000004;
  k3c_internal_pkg_motion_vibration___ADXL345___handle_dump_adxl345();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AccelCommandHelper).Cmd_ACCELEROMETER_MEASURE-fm @ 006a767c (size 108) */

void k3c_internal_pkg_motion_vibration___AccelCommandHelper__Cmd_ACCELEROMETER_MEASURE_fm(void)

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
  k3c_internal_pkg_motion_vibration___AccelCommandHelper__Cmd_ACCELEROMETER_MEASURE();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AccelCommandHelper).Cmd_ACCELEROMETER_QUERY-fm @ 006a76e8 (size 108) */

void k3c_internal_pkg_motion_vibration___AccelCommandHelper__Cmd_ACCELEROMETER_QUERY_fm(void)

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
  k3c_internal_pkg_motion_vibration___AccelCommandHelper__Cmd_ACCELEROMETER_QUERY();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AccelCommandHelper).Cmd_ACCELEROMETER_DEBUG_READ-fm @ 006a7754 (size 108) */

void k3c_internal_pkg_motion_vibration___AccelCommandHelper__Cmd_ACCELEROMETER_DEBUG_READ_fm(void)

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
  k3c_internal_pkg_motion_vibration___AccelCommandHelper__Cmd_ACCELEROMETER_DEBUG_READ();
  return;
}



/* k3c/internal/pkg/motion/vibration.(*AccelCommandHelper).Cmd_ACCELEROMETER_DEBUG_WRITE-fm @ 006a77c0 (size 108) */

void k3c_internal_pkg_motion_vibration___AccelCommandHelper__Cmd_ACCELEROMETER_DEBUG_WRITE_fm(void)

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
  k3c_internal_pkg_motion_vibration___AccelCommandHelper__Cmd_ACCELEROMETER_DEBUG_WRITE();
  return;
}



