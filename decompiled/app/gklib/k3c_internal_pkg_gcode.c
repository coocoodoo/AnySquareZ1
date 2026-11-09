// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/gcode   functions: 94
/* k3c/internal/pkg/gcode.init @ 0045def4 (size 548) */

void k3c_internal_pkg_gcode_init(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1;
  undefined *extraout_r1_00;
  undefined *puVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  undefined4 uStack_10;
  undefined4 *puStack_8;
  
  while (puVar1 = PTR_s___0_9___gcode_io__error_Shutdown_008216f7_0xfb5_0045e11c,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45e114;
    FUN_0009bf64();
  }
  FUN_003edf64();
  if (*(int *)PTR_DAT_0045e120 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_0045e124;
    uStack_10 = extraout_r1;
  }
  *(undefined4 *)PTR_DAT_0045e124 = uStack_10;
  FUN_000908bc();
  FUN_00093a08();
  puStack_8[1] = 0x2c;
  puVar2 = puStack_8;
  if (*(int *)PTR_DAT_0045e120 != 0) {
    uVar4 = FUN_0009db54(puStack_8,*puStack_8);
    puVar2 = (undefined4 *)uVar4;
    *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
  }
  *puVar2 = PTR_DAT_0045e130;
  FUN_00093a08();
  puStack_8[1] = 0x29;
  puVar2 = puStack_8;
  if (*(int *)PTR_DAT_0045e120 != 0) {
    uVar4 = FUN_0009db54(puStack_8,*puStack_8);
    puVar2 = (undefined4 *)uVar4;
    *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
  }
  *puVar2 = PTR_DAT_0045e138;
  FUN_00093a08();
  puStack_8[1] = 0x19;
  puVar2 = puStack_8;
  if (*(int *)PTR_DAT_0045e120 != 0) {
    uVar4 = FUN_0009db54(puStack_8,*puStack_8);
    puVar2 = (undefined4 *)uVar4;
    *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
  }
  *puVar2 = PTR_DAT_0045e140;
  puVar3 = PTR_s_Cmd_HELP_helpproject_readyFIRMWA_008262d0_0xd49_0045e144;
  FUN_00093a08();
  puStack_8[1] = 0x35;
  if (*(int *)PTR_DAT_0045e120 != 0) {
    uVar4 = FUN_0009db74(puStack_8,*puStack_8);
    puStack_8 = (undefined4 *)uVar4;
    *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
    unaff_r8[1] = puVar1;
    unaff_r8[2] = *(undefined4 *)PTR_DAT_0045e148;
  }
  *puStack_8 = PTR_DAT_0045e14c;
  *(undefined **)PTR_DAT_0045e148 = puVar1;
  FUN_003edf64();
  if (*(int *)PTR_DAT_0045e120 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_0045e154;
    puVar3 = extraout_r1_00;
  }
  *(undefined **)PTR_DAT_0045e154 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x0045e108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.NewGCodeCommand @ 0045e158 (size 468) */

void k3c_internal_pkg_gcode_NewGCodeCommand(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1;
  undefined4 *extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined1 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  FUN_00022cf8();
  local_10[1] = 0;
  *local_10 = 0;
  puVar1 = local_10;
  if (*DAT_0045e338 != 0) {
    puVar1 = (undefined4 *)FUN_0009db84();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *local_10;
    unaff_r8[2] = in_stack_00000008;
    unaff_r8[3] = local_10[1];
  }
  puVar2 = in_stack_00000014;
  *local_10 = puVar1;
  local_10[2] = in_stack_0000000c;
  local_10[1] = in_stack_00000008;
  FUN_00151ce4();
  local_10[4] = local_8;
  puVar1 = local_10;
  if (*DAT_0045e338 != 0) {
    FUN_0009db84();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = extraout_r2[3];
    unaff_r8[2] = in_stack_00000018;
    unaff_r8[3] = extraout_r2[5];
    local_c = extraout_r1;
    puVar1 = extraout_r2;
  }
  puVar1[3] = local_c;
  puVar1[5] = in_stack_00000018;
  *(undefined1 *)(puVar1 + 6) = in_stack_0000001c;
  FUN_00022cf8();
  *puVar2 = DAT_0045e340;
  puVar1 = puVar2;
  if (*DAT_0045e338 != 0) {
    puVar1 = (undefined4 *)FUN_0009db74();
    *unaff_r8 = in_stack_00000004;
    unaff_r8[1] = puVar1;
    unaff_r8[2] = local_10[7];
  }
  puVar1[1] = in_stack_00000004;
  local_10[7] = puVar1;
  FUN_00022cf8();
  *puVar2 = DAT_0045e344;
  if (*DAT_0045e338 != 0) {
    puVar2 = (undefined4 *)FUN_0009db84();
    *unaff_r8 = in_stack_00000004;
    unaff_r8[1] = puVar2;
    unaff_r8[2] = local_10[8];
    unaff_r8[3] = local_10[9];
  }
  puVar2[1] = in_stack_00000004;
  local_10[8] = puVar2;
  local_10[9] = DAT_0045e348;
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeCommand).Err @ 0045e34c (size 16) */

void k3c_internal_pkg_gcode___GCodeCommand__Err(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0045e358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeCommand).Get_command @ 0045e35c (size 24) */

void k3c_internal_pkg_gcode___GCodeCommand__Get_command(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
  uStack0000000c = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x0045e370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeCommand).Get_commandline @ 0045e374 (size 24) */

void k3c_internal_pkg_gcode___GCodeCommand__Get_commandline(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
  uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0045e388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeCommand).Get_command_parameters @ 0045e38c (size 16) */

void k3c_internal_pkg_gcode___GCodeCommand__Get_command_parameters(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x0045e398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeCommand).Get_raw_command_parameters @ 0045e39c (size 652) */

void k3c_internal_pkg_gcode___GCodeCommand__Get_raw_command_parameters(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r1;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar7;
  uint extraout_r3;
  uint extraout_r3_00;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x60) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 4);
      iVar2 = *(int *)(iVar1 + 8);
      if (((iVar2 == 0) || (iVar4 = *(int *)(iVar1 + 0x10), iVar4 == 0)) || (iVar4 <= iVar2)) {
        *(undefined4 *)((int)register0x00000054 + 8) = 0;
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        return;
      }
      *(int *)((int)register0x00000054 + -0xc) = iVar2;
      *(int *)((int)register0x00000054 + -0x10) = iVar4;
      uVar5 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -4) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)(iVar1 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar5;
      *(int *)((int)register0x00000054 + -0x58) = iVar2;
      FUN_0015086c();
      if (*(int *)((int)register0x00000054 + -0x50) == *(int *)((int)register0x00000054 + -0xc)) {
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -0x54) = *(int *)((int)register0x00000054 + -0x50);
        FUN_00018250();
        if (*(char *)((int)register0x00000054 + -0x50) == '\0') goto LAB_0045e448;
        uVar3 = *(uint *)((int)register0x00000054 + -0xc);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x10);
LAB_0045e570:
        uVar6 = *(uint *)((int)register0x00000054 + -0x10);
        uVar9 = uVar3 == uVar6;
        if (uVar3 < uVar6) {
          *(uint *)((int)register0x00000054 + -0x18) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x14) = uVar5;
          *(uint *)((int)register0x00000054 + -0x5c) =
               (uint)*(byte *)(*(int *)((int)register0x00000054 + -4) + uVar3);
          FUN_000c4b78();
          uVar3 = (uint)*(byte *)((int)register0x00000054 + -0x58);
          if (uVar3 == 0) {
            uVar6 = *(uint *)((int)register0x00000054 + -0x18);
          }
          else {
            uVar6 = *(int *)((int)register0x00000054 + -0x18) + 1;
          }
          uVar7 = *(uint *)((int)register0x00000054 + -0x14);
          uVar9 = uVar7 == *(uint *)((int)register0x00000054 + -0x10);
          if (uVar7 <= *(uint *)((int)register0x00000054 + -0x10)) {
            uVar9 = uVar7 == uVar6;
            if (uVar6 <= uVar7) {
              *(uint *)((int)register0x00000054 + 8) =
                   *(int *)((int)register0x00000054 + -4) + (uVar6 & (int)-(uVar7 - uVar6) >> 0x1f);
              *(uint *)((int)register0x00000054 + 0xc) = uVar7 - uVar6;
              return;
            }
            uVar3 = FUN_0009dc34(uVar6,uVar7);
            uVar7 = extraout_r3;
          }
          FUN_0009dbf4(uVar3,uVar7);
          uVar3 = extraout_r1;
          uVar6 = extraout_r2;
        }
        FUN_0009dbd4(uVar3,uVar6);
        uVar6 = extraout_r2_00;
        uVar7 = extraout_r3_00;
      }
      else {
LAB_0045e448:
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        FUN_0015086c();
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        internal_stringslite_Index();
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x54) = DAT_0045e62c;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
        FUN_0014eb18();
        iVar1 = *(int *)((int)register0x00000054 + -0x4c);
        uVar3 = *(int *)((int)register0x00000054 + -0xc) + *(int *)((int)register0x00000054 + -0x1c)
        ;
        if (iVar1 < 0) {
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x10);
          goto LAB_0045e570;
        }
        uVar6 = iVar1 + 1;
        uVar7 = *(uint *)((int)register0x00000054 + -0x10);
        uVar9 = uVar7 == uVar6;
        if (uVar6 <= uVar7) {
          *(uint *)((int)register0x00000054 + -0x18) = uVar3;
          *(int *)((int)register0x00000054 + -0x14) = iVar1;
          *(undefined4 *)((int)register0x00000054 + -0x5c) = *DAT_0045e630;
          *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
          *(uint *)((int)register0x00000054 + -0x44) =
               *(int *)((int)register0x00000054 + -4) + (uVar6 & (int)(1 - (uVar7 - iVar1)) >> 0x1f)
          ;
          *(uint *)((int)register0x00000054 + -0x40) = (uVar7 - iVar1) + -1;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x34) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
          FUN_003ea300(iVar1);
          if (*(int *)((int)register0x00000054 + -0x28) == 0) {
            uVar3 = *(uint *)((int)register0x00000054 + -0x18);
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x10);
          }
          else {
            uVar3 = *(uint *)((int)register0x00000054 + -0x18);
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x14);
          }
          goto LAB_0045e570;
        }
      }
      param_1 = FUN_0009dc34(uVar6,uVar7);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x60);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x45e624;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeCommand).Ack @ 0045e634 (size 228) */

void k3c_internal_pkg_gcode___GCodeCommand__Ack(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined1 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (*(char *)(in_stack_00000004 + 0x18) == '\0') {
    return;
  }
  if (in_stack_0000000c != 0) {
    FUN_0008f77c();
    FUN_0013b72c();
  }
  (*(code *)**(undefined4 **)(in_stack_00000004 + 0x20))();
  *(undefined1 *)(in_stack_00000004 + 0x18) = 0;
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeCommand).GetStr @ 0045e728 (size 144) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode___GCodeCommand__GetStr(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45e7b4;
    FUN_0009bf64();
  }
  k3c_internal_pkg_gcode___GCodeCommand__Get();
                    /* WARNING: Could not recover jumptable at 0x0045e7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeCommand).Get @ 0045e7c0 (size 428) */

void k3c_internal_pkg_gcode___GCodeCommand__Get(void)

{
  undefined4 uVar1;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x45e968;
    FUN_0009bf64();
  }
  uVar1 = *(undefined4 *)(in_stack_00000004 + 0x14);
  uVar2 = DAT_0045e970;
  uVar4 = in_stack_00000008;
  uVar5 = in_stack_0000000c;
  FUN_00025f60();
  if (*(int *)(local_24 + 4) != 0) {
    return;
  }
  if (in_stack_00000010 == DAT_0045e974) {
    FUN_0009df04(0,&local_10,in_stack_00000010,DAT_0045e974,unaff_lr,uVar2,uVar1,uVar4,uVar5);
    FUN_0008f77c();
    local_10 = DAT_0045e978;
    local_c = uVar4;
    FUN_0008f77c();
    local_8 = DAT_0045e978;
    puVar3 = (undefined4 *)&DAT_00000019;
    local_4 = uVar4;
    FUN_0013b72c();
    local_14 = local_20;
    FUN_00022cf8();
    puVar3[1] = local_1c;
    if (*DAT_0045e984 != 0) goto LAB_0045e950;
  }
  else {
    if (in_stack_00000010 == 0) {
      return;
    }
    if (in_stack_00000010 == DAT_0045e978) {
      return;
    }
    FUN_000209b4();
    puVar3 = extraout_r2;
  }
  do {
    *puVar3 = local_14;
    FUN_00095b00();
LAB_0045e950:
    FUN_0009db54();
    *unaff_r8 = local_14;
    puVar3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeCommand).Get_int @ 0045e990 (size 820) */

void k3c_internal_pkg_gcode___GCodeCommand__Get_int(void)

{
  undefined4 uVar1;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  int *in_stack_00000018;
  int *in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x45ecc0;
    FUN_0009bf64();
  }
  uVar1 = *(undefined4 *)(in_stack_00000004 + 0x14);
  uVar2 = DAT_0045ecc8;
  uVar4 = in_stack_00000008;
  uVar5 = in_stack_0000000c;
  FUN_00025f60();
  if (*(int *)(local_4c + 4) != 0) {
    puVar3 = (undefined4 *)&DAT_0000000a;
    FUN_000b66a4();
    if ((in_stack_00000018 != (int *)0x0) && (local_4c < *in_stack_00000018)) {
      FUN_0009defc(0,&local_28);
      FUN_0008f77c();
      local_28 = DAT_0045ecd0;
      uVar2 = in_stack_0000000c;
      local_24 = puVar3;
      FUN_0008f77c();
      local_20 = DAT_0045ecd0;
      local_1c = puVar3;
      FUN_00020ce0();
      local_18 = DAT_0045ece0;
      puVar3 = &local_28;
      local_14 = uVar2;
      k3c_internal_pkg_logger_Errorf();
    }
    if ((in_stack_0000001c != (int *)0x0) && (*in_stack_0000001c < local_4c)) {
      FUN_0009defc(0,&local_28);
      FUN_0008f77c();
      local_28 = DAT_0045ecd0;
      uVar2 = in_stack_0000000c;
      local_24 = puVar3;
      FUN_0008f77c();
      local_20 = DAT_0045ecd0;
      local_1c = puVar3;
      FUN_00020ce0();
      local_18 = DAT_0045ece0;
      local_14 = uVar2;
      k3c_internal_pkg_logger_Errorf();
    }
    return;
  }
  if (in_stack_00000010 == DAT_0045eccc) {
    FUN_0009df04(0,&local_10,in_stack_00000010,DAT_0045eccc,unaff_lr,uVar2,uVar1,uVar4,uVar5);
    FUN_0008f77c();
    local_10 = DAT_0045ecd0;
    local_c = uVar4;
    FUN_0008f77c();
    local_8 = DAT_0045ecd0;
    puVar3 = (undefined4 *)&DAT_00000019;
    local_4 = uVar4;
    FUN_0013b72c();
    local_2c = local_48;
    FUN_00022cf8();
    puVar3[1] = local_44;
    if (*DAT_0045ecdc != 0) goto LAB_0045eca8;
  }
  else {
    if (in_stack_00000010 == 0) {
      return;
    }
    if (in_stack_00000010 == DAT_0045ece0) {
      return;
    }
    FUN_000209b4();
    puVar3 = extraout_r2;
  }
  do {
    *puVar3 = local_2c;
    FUN_00095b00();
LAB_0045eca8:
    FUN_0009db54();
    *unaff_r8 = local_2c;
    puVar3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeCommand).MustGetFloat @ 0045ecf4 (size 104) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode___GCodeCommand__MustGetFloat(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined8 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45ed58;
    FUN_0009bf64();
  }
  k3c_internal_pkg_gcode___GCodeCommand__Get_float();
                    /* WARNING: Could not recover jumptable at 0x0045ed4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeCommand).Get_float @ 0045ed68 (size 2060) */

void k3c_internal_pkg_gcode___GCodeCommand__Get_float(void)

{
  undefined4 uVar1;
  int *extraout_r2;
  int *extraout_r2_00;
  int *extraout_r2_01;
  int *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  double dVar2;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  double *in_stack_00000018;
  double *in_stack_0000001c;
  double *in_stack_00000020;
  double *in_stack_00000024;
  undefined4 uVar3;
  int *piVar4;
  undefined4 local_80;
  int iStack_78;
  int local_74;
  int local_70;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 *local_8;
  int local_4;
  
  while (&local_c <= *(undefined4 **)(unaff_r10 + 8)) {
    unaff_lr = 0x45f5b8;
    FUN_0009bf64();
  }
  uVar1 = *(undefined4 *)(in_stack_00000004 + 0x14);
  uVar3 = DAT_0045f568;
  FUN_00025f60();
  if (*(int *)(iStack_78 + 4) == 0) {
    if (in_stack_00000010 == DAT_0045f56c) {
      FUN_0009df04(0,&local_14,in_stack_00000010,DAT_0045f56c,unaff_lr,uVar3,uVar1);
      FUN_0008f77c();
      local_14 = DAT_0045f570;
      local_10 = (undefined4 *)in_stack_00000008;
      FUN_0008f77c();
      local_c = DAT_0045f570;
      local_8 = (undefined4 *)in_stack_00000008;
      piVar4 = (int *)&DAT_00000019;
      FUN_0013b72c();
      local_4 = local_74;
      FUN_00022cf8();
      piVar4[1] = local_70;
      if (*DAT_0045f57c != 0) goto LAB_0045f558;
    }
    else {
      if (in_stack_00000010 == 0) {
        return;
      }
      if (in_stack_00000010 == DAT_0045f580) {
        return;
      }
      FUN_000209b4();
      piVar4 = extraout_r2_00;
    }
    do {
      *piVar4 = local_4;
      FUN_00095b00();
LAB_0045f558:
      FUN_0009db54();
      *unaff_r8 = local_4;
      piVar4 = extraout_r2_01;
    } while( true );
  }
  local_80 = 0x40;
  FUN_000b5538();
  uVar3 = DAT_0045f584;
  dVar2 = (double)CONCAT44(iStack_78,in_stack_0000000c);
  if (local_74 != 0) {
    local_80 = DAT_0045f584;
    internal_stringslite_Index();
    if (-1 < iStack_78) {
      FUN_0009defc(0,&local_2c);
      FUN_0008f77c();
      local_2c = DAT_0045f570;
      local_28 = uVar3;
      FUN_0008f77c();
      local_24 = DAT_0045f570;
      local_20 = uVar3;
      FUN_0008f77c();
      local_1c = DAT_0045f570;
      local_18 = uVar3;
      k3c_internal_pkg_logger_Warnf();
      uVar3 = DAT_0045f58c;
      local_74 = 1;
      local_70 = -1;
      FUN_00151e6c();
      local_80 = 0x40;
      FUN_000b5538();
      dVar2 = (double)CONCAT44(uVar3,1);
    }
    if (local_74 != 0) {
      FUN_0009defc(0,&local_2c);
      FUN_0008f77c();
      local_2c = DAT_0045f570;
      local_28 = local_80;
      FUN_0008f77c();
      local_24 = DAT_0045f570;
      local_20 = local_80;
      FUN_0008f77c();
      local_1c = DAT_0045f570;
      local_18 = local_80;
      k3c_internal_pkg_logger_Errorf();
      FUN_0009df04(0,&local_14);
      FUN_0008f77c();
      local_14 = DAT_0045f570;
      local_10 = &local_2c;
      FUN_0008f77c();
      local_c = DAT_0045f570;
      piVar4 = (int *)&DAT_00000021;
      local_8 = &local_2c;
      FUN_0013b72c();
      local_4 = local_74;
      FUN_00022cf8();
      piVar4[1] = local_70;
      if (*DAT_0045f57c != 0) goto LAB_0045f51c;
      do {
        *piVar4 = local_4;
        FUN_00095b00();
LAB_0045f51c:
        FUN_0009db54();
        *unaff_r8 = local_4;
        piVar4 = extraout_r2;
      } while( true );
    }
  }
  if ((in_stack_00000018 != (double *)0x0) && (dVar2 < *in_stack_00000018)) {
    FUN_0009defc(0,&local_2c);
    FUN_0008f77c();
    local_2c = DAT_0045f570;
    local_28 = local_80;
    FUN_0008f77c();
    local_24 = DAT_0045f570;
    local_20 = local_80;
    FUN_0008f6c0();
    local_1c = DAT_0045f580;
    local_18 = local_80;
    k3c_internal_pkg_logger_Errorf();
    return;
  }
  if ((in_stack_0000001c != (double *)0x0) && (*in_stack_0000001c < dVar2)) {
    FUN_0009defc(0,&local_2c);
    FUN_0008f77c();
    local_2c = DAT_0045f570;
    local_28 = local_80;
    FUN_0008f77c();
    local_24 = DAT_0045f570;
    local_20 = local_80;
    FUN_0008f6c0();
    local_1c = DAT_0045f580;
    local_18 = local_80;
    k3c_internal_pkg_logger_Errorf();
    return;
  }
  if ((in_stack_00000020 != (double *)0x0) && (dVar2 <= *in_stack_00000020)) {
    FUN_0009defc(0,&local_2c);
    FUN_0008f77c();
    local_2c = DAT_0045f570;
    local_28 = local_80;
    FUN_0008f77c();
    local_24 = DAT_0045f570;
    local_20 = local_80;
    FUN_0008f6c0();
    local_1c = DAT_0045f580;
    local_18 = local_80;
    k3c_internal_pkg_logger_Errorf();
    return;
  }
  if ((in_stack_00000024 != (double *)0x0) && (*in_stack_00000024 <= dVar2)) {
    FUN_0009defc(0,&local_2c);
    FUN_0008f77c();
    local_2c = DAT_0045f570;
    local_28 = local_80;
    FUN_0008f77c();
    local_24 = DAT_0045f570;
    local_20 = local_80;
    FUN_0008f6c0();
    local_1c = DAT_0045f580;
    local_18 = local_80;
    k3c_internal_pkg_logger_Errorf();
    return;
  }
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeCommand).Get_floatP @ 0045f5bc (size 2012) */

void k3c_internal_pkg_gcode___GCodeCommand__Get_floatP(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  double *pdVar4;
  int *extraout_r2;
  uint uVar5;
  int *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  double dVar6;
  int in_stack_00000004;
  undefined4 in_stack_0000000c;
  double *in_stack_00000014;
  double *in_stack_00000018;
  double *in_stack_0000001c;
  double *in_stack_00000020;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined4 *puStack_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_4c;
  double local_44;
  double local_3c;
  undefined4 local_34;
  undefined *local_30;
  undefined **local_2c;
  undefined *local_28;
  undefined **local_24;
  undefined *local_20;
  undefined **local_1c;
  undefined *local_18;
  undefined **local_14;
  undefined *local_10;
  undefined **local_c;
  int local_8;
  double *local_4;
  
  while ((int)&local_4c + 4U <= *(uint *)(unaff_r10 + 8)) {
    unaff_lr = 0x45fd94;
    FUN_0009bf64();
  }
  pdVar4 = *(double **)(in_stack_00000004 + 0x14);
  FUN_00093560();
  if ((char)local_b0 == '\0') {
    return;
  }
  local_34 = *puStack_b4;
  uVar3 = puStack_b4[1];
  FUN_00022cf8();
  ppuVar10 = (undefined **)&DAT_00000040;
  uVar7 = local_34;
  uVar8 = uVar3;
  local_4 = pdVar4;
  FUN_000b5538();
  *local_4 = (double)CONCAT44(puStack_b4,in_stack_0000000c);
  if (local_b0 != 0) {
    in_stack_0000000c = 1;
    uVar7 = local_34;
    ppuVar10 = (undefined **)PTR_DAT_0045fda4;
    internal_stringslite_Index();
    if (-1 < (int)puStack_b4) {
      FUN_0009defc(0,&local_20);
      FUN_0008f77c();
      local_20 = PTR_DAT_0045fda8;
      local_1c = ppuVar10;
      FUN_0008f77c();
      local_18 = PTR_DAT_0045fda8;
      local_14 = ppuVar10;
      FUN_0008f77c();
      local_10 = PTR_DAT_0045fda8;
      local_c = ppuVar10;
      k3c_internal_pkg_logger_Warnf();
      puVar2 = PTR_DAT_0045fdb0;
      in_stack_0000000c = 1;
      local_b0 = 1;
      local_ac = -1;
      FUN_00151e6c();
      ppuVar10 = (undefined **)&DAT_00000040;
      FUN_000b5538();
      *local_4 = (double)CONCAT44(puVar2,in_stack_0000000c);
      uVar7 = local_a8;
      uVar3 = local_a4;
    }
    uVar8 = uVar3;
    if (local_b0 != 0) {
      FUN_0009defc(0,&local_20);
      FUN_0008f77c();
      local_20 = PTR_DAT_0045fda8;
      local_1c = ppuVar10;
      FUN_0008f77c();
      local_18 = PTR_DAT_0045fda8;
      local_14 = ppuVar10;
      FUN_0008f77c();
      local_10 = PTR_DAT_0045fda8;
      ppuVar11 = &local_20;
      local_c = ppuVar10;
      k3c_internal_pkg_logger_Errorf();
      FUN_0009df04(0,&local_30);
      FUN_0008f77c();
      local_30 = PTR_DAT_0045fda8;
      local_2c = ppuVar11;
      FUN_0008f77c();
      local_28 = PTR_DAT_0045fda8;
      piVar9 = (int *)&DAT_00000021;
      local_24 = ppuVar11;
      FUN_0013b72c();
      local_8 = local_b0;
      FUN_00022cf8();
      piVar9[1] = local_ac;
      if (*(int *)PTR_DAT_0045fdd4 != 0) goto LAB_0045fd7c;
      do {
        *piVar9 = local_8;
        FUN_00095b00();
LAB_0045fd7c:
        FUN_0009db54();
        *unaff_r8 = local_8;
        piVar9 = extraout_r2;
      } while( true );
    }
  }
  if (in_stack_00000014 == (double *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)(*local_4 < *in_stack_00000014);
  }
  ppuVar11 = ppuVar10;
  if (uVar5 != 0) {
    if (in_stack_00000014 == (double *)0x0) {
      in_stack_00000014 = (double *)0x1;
      dVar6 = (double)CONCAT44(DAT_0045fdb4,1);
      uVar5 = DAT_0045fdb4;
    }
    else {
      dVar6 = *in_stack_00000014;
    }
    FUN_0009defc(0,&local_20,in_stack_00000014,uVar5,unaff_lr,uVar7,uVar8,ppuVar10,in_stack_0000000c
                );
    FUN_0008f77c();
    local_20 = PTR_DAT_0045fda8;
    local_1c = ppuVar10;
    FUN_0008f77c();
    local_18 = PTR_DAT_0045fda8;
    local_3c = dVar6;
    local_14 = ppuVar10;
    FUN_0008f6c0();
    local_10 = PTR_DAT_0045fda0;
    ppuVar11 = &local_20;
    local_c = ppuVar10;
    k3c_internal_pkg_logger_Errorf();
  }
  if (in_stack_00000018 == (double *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *in_stack_00000018 < *local_4;
  }
  ppuVar10 = ppuVar11;
  if (bVar1) {
    if (in_stack_00000018 == (double *)0x0) {
      dVar6 = (double)CONCAT44(DAT_0045fdb4,1);
    }
    else {
      dVar6 = *in_stack_00000018;
    }
    FUN_0009defc(0,&local_20);
    FUN_0008f77c();
    local_20 = PTR_DAT_0045fda8;
    local_1c = ppuVar11;
    FUN_0008f77c();
    local_18 = PTR_DAT_0045fda8;
    local_44 = dVar6;
    local_14 = ppuVar11;
    FUN_0008f6c0();
    local_10 = PTR_DAT_0045fda0;
    ppuVar10 = &local_20;
    local_c = ppuVar11;
    k3c_internal_pkg_logger_Errorf();
  }
  if (in_stack_0000001c == (double *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *local_4 <= *in_stack_0000001c;
  }
  ppuVar11 = ppuVar10;
  if (bVar1) {
    if (in_stack_0000001c == (double *)0x0) {
      dVar6 = (double)CONCAT44(DAT_0045fdb4,1);
    }
    else {
      dVar6 = *in_stack_0000001c;
    }
    FUN_0009defc(0,&local_20);
    FUN_0008f77c();
    local_20 = PTR_DAT_0045fda8;
    local_1c = ppuVar10;
    FUN_0008f77c();
    local_18 = PTR_DAT_0045fda8;
    local_4c = dVar6;
    local_14 = ppuVar10;
    FUN_0008f6c0();
    local_10 = PTR_DAT_0045fda0;
    ppuVar11 = &local_20;
    local_c = ppuVar10;
    k3c_internal_pkg_logger_Errorf();
  }
  if (in_stack_00000020 == (double *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *in_stack_00000020 <= *local_4;
  }
  if (bVar1) {
    FUN_0009defc(0,&local_20);
    FUN_0008f77c();
    local_20 = PTR_DAT_0045fda8;
    local_1c = ppuVar11;
    FUN_0008f77c();
    local_18 = PTR_DAT_0045fda8;
    local_14 = ppuVar11;
    FUN_0008f6c0();
    local_10 = PTR_DAT_0045fda0;
    local_c = ppuVar11;
    k3c_internal_pkg_logger_Errorf();
  }
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeCommand).Has @ 0045fddc (size 80) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode___GCodeCommand__Has(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x45fe28;
    FUN_0009bf64();
  }
  FUN_00093560();
                    /* WARNING: Could not recover jumptable at 0x0045fe1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.NewGCodeIO @ 0045fe34 (size 1836) */

void k3c_internal_pkg_gcode_NewGCodeIO(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *extraout_r1;
  uint uVar7;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined4 extraout_r1_02;
  int extraout_r1_03;
  undefined *puVar8;
  undefined *extraout_r2;
  undefined *extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  uint extraout_r2_03;
  undefined4 uVar9;
  int iVar10;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  int extraout_r3_04;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  undefined1 uVar12;
  undefined8 uVar13;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar11 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00460564;
      FUN_00022cf8();
      piVar6 = *(int **)((int)register0x00000054 + -0x3c);
      if (*(int *)PTR_DAT_00460568 == 0) {
        iVar2 = *(int *)((int)register0x00000054 + 4);
      }
      else {
        FUN_0009db54();
        iVar2 = *(int *)((int)register0x00000054 + 4);
        *unaff_r8 = iVar2;
        piVar6 = extraout_r1;
      }
      *(int **)((int)register0x00000054 + -4) = piVar6;
      *piVar6 = iVar2;
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_0046056c;
      FUN_00022cf8();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x3c);
      *puVar3 = PTR_k3c_internal_pkg_gcode___GCodeIO__Handle_ready_fm_00460570;
      if (*(int *)PTR_DAT_00460568 == 0) {
        iVar2 = *(int *)((int)register0x00000054 + -4);
      }
      else {
        puVar3 = (undefined4 *)FUN_0009db54();
        iVar2 = *(int *)((int)register0x00000054 + -4);
        *unaff_r8 = iVar2;
      }
      *(undefined4 **)((int)register0x00000054 + -8) = puVar3;
      puVar3[1] = iVar2;
      uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x24);
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00460574;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar9;
      *(undefined **)((int)register0x00000054 + -0x38) =
           PTR_s_project_readyFIRMWARE_NAMEAsia_S_008262d0_0xd56_00460578;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 0xd;
      FUN_00093560();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x30);
      iVar2 = puVar3[1];
      uVar4 = puVar3[2];
      puVar8 = (undefined *)*puVar3;
      if (*(char *)((int)register0x00000054 + -0x2c) == '\0') {
        uVar4 = 0;
        iVar2 = 0;
        puVar8 = PTR_DAT_0046057c;
      }
      uVar7 = iVar2 + 1;
      if (uVar4 < uVar7) {
        *(undefined **)((int)register0x00000054 + -0x40) = puVar8;
        *(uint *)((int)register0x00000054 + -0x3c) = uVar7;
        *(uint *)((int)register0x00000054 + -0x38) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
        *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_00460580;
        FUN_000987f4();
        puVar8 = *(undefined **)((int)register0x00000054 + -0x2c);
        uVar7 = *(uint *)((int)register0x00000054 + -0x28);
        uVar4 = *(uint *)((int)register0x00000054 + -0x24);
      }
      *(uint *)((int)register0x00000054 + -0x18) = uVar7;
      *(uint *)((int)register0x00000054 + -0x1c) = uVar4;
      if (*(int *)PTR_DAT_00460568 == 0) {
        iVar2 = *(int *)((int)register0x00000054 + -8);
      }
      else {
        FUN_0009db64();
        iVar2 = *(int *)((int)register0x00000054 + -8);
        *unaff_r8 = iVar2;
        unaff_r8[1] = *(int *)(extraout_r2 + (uVar7 - 1) * 4);
        puVar8 = extraout_r2;
      }
      *(undefined **)((int)register0x00000054 + -0xc) = puVar8;
      *(int *)(puVar8 + (uVar7 - 1) * 4) = iVar2;
      uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x24);
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00460574;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar9;
      *(undefined **)((int)register0x00000054 + -0x38) =
           PTR_s_project_readyFIRMWARE_NAMEAsia_S_008262d0_0xd56_00460578;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 0xd;
      FUN_00093a08();
      piVar6 = *(int **)((int)register0x00000054 + -0x30);
      piVar6[1] = *(int *)((int)register0x00000054 + -0x18);
      piVar6[2] = *(int *)((int)register0x00000054 + -0x1c);
      if (*(int *)PTR_DAT_00460568 == 0) {
        iVar2 = *(int *)((int)register0x00000054 + -0xc);
      }
      else {
        piVar6 = (int *)FUN_0009db64();
        iVar2 = *(int *)((int)register0x00000054 + -0xc);
        *unaff_r8 = iVar2;
        unaff_r8[1] = *piVar6;
      }
      *piVar6 = iVar2;
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_0046056c;
      FUN_00022cf8();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x3c);
      *puVar3 = PTR_k3c_internal_pkg_gcode___GCodeIO__Handle_shutdown_fm_00460584;
      if (*(int *)PTR_DAT_00460568 == 0) {
        iVar2 = *(int *)((int)register0x00000054 + -4);
      }
      else {
        puVar3 = (undefined4 *)FUN_0009db54();
        iVar2 = *(int *)((int)register0x00000054 + -4);
        *unaff_r8 = iVar2;
      }
      *(undefined4 **)((int)register0x00000054 + -8) = puVar3;
      puVar3[1] = iVar2;
      uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x24);
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00460574;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar9;
      *(undefined **)((int)register0x00000054 + -0x38) =
           PTR_s_project_shutdownlen_out_of_range_008262d0_0x38fa_00460588;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 0x10;
      FUN_00093560();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x30);
      iVar2 = puVar3[1];
      uVar4 = puVar3[2];
      puVar8 = (undefined *)*puVar3;
      if (*(char *)((int)register0x00000054 + -0x2c) == '\0') {
        uVar4 = 0;
        iVar2 = 0;
        puVar8 = PTR_DAT_0046057c;
      }
      uVar7 = iVar2 + 1;
      if (uVar4 < uVar7) {
        *(undefined **)((int)register0x00000054 + -0x40) = puVar8;
        *(uint *)((int)register0x00000054 + -0x3c) = uVar7;
        *(uint *)((int)register0x00000054 + -0x38) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
        *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_00460580;
        FUN_000987f4();
        puVar8 = *(undefined **)((int)register0x00000054 + -0x2c);
        uVar7 = *(uint *)((int)register0x00000054 + -0x28);
        uVar4 = *(uint *)((int)register0x00000054 + -0x24);
      }
      *(uint *)((int)register0x00000054 + -0x18) = uVar7;
      *(uint *)((int)register0x00000054 + -0x1c) = uVar4;
      if (*(int *)PTR_DAT_00460568 == 0) {
        iVar2 = *(int *)((int)register0x00000054 + -8);
      }
      else {
        FUN_0009db64();
        iVar2 = *(int *)((int)register0x00000054 + -8);
        *unaff_r8 = iVar2;
        unaff_r8[1] = *(int *)(extraout_r2_00 + (uVar7 - 1) * 4);
        puVar8 = extraout_r2_00;
      }
      *(undefined **)((int)register0x00000054 + -0xc) = puVar8;
      *(int *)(puVar8 + (uVar7 - 1) * 4) = iVar2;
      uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x24);
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00460574;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar9;
      *(undefined **)((int)register0x00000054 + -0x38) =
           PTR_s_project_shutdownlen_out_of_range_008262d0_0x38fa_00460588;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 0x10;
      FUN_00093a08();
      piVar6 = *(int **)((int)register0x00000054 + -0x30);
      piVar6[1] = *(int *)((int)register0x00000054 + -0x18);
      piVar6[2] = *(int *)((int)register0x00000054 + -0x1c);
      if (*(int *)PTR_DAT_00460568 == 0) {
        iVar2 = *(int *)((int)register0x00000054 + -0xc);
      }
      else {
        piVar6 = (int *)FUN_0009db64();
        iVar2 = *(int *)((int)register0x00000054 + -0xc);
        *unaff_r8 = iVar2;
        unaff_r8[1] = *piVar6;
      }
      *piVar6 = iVar2;
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x3c) =
           PTR_s_gcodeok__sM8844_helpReady_________00820821_0x5d2_0046058c;
      *(undefined4 *)((int)register0x00000054 + -0x38) = 5;
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_00460590;
      *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_0046057c;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      uVar13 = CONCAT44(PTR_DAT_00460594,*(undefined **)((int)register0x00000054 + -0x2c));
      uVar12 = 0;
      if (*(undefined **)((int)register0x00000054 + -0x2c) == PTR_DAT_00460594) {
        iVar2 = *(int *)((int)register0x00000054 + -0x28);
        if (*(int *)PTR_DAT_00460568 == 0) {
          iVar5 = *(int *)((int)register0x00000054 + -4);
        }
        else {
          FUN_0009db64();
          *unaff_r8 = extraout_r1_00;
          iVar5 = *(int *)((int)register0x00000054 + -4);
          unaff_r8[1] = *(int *)(iVar5 + 4);
          iVar2 = extraout_r1_00;
        }
        *(int *)(iVar5 + 4) = iVar2;
        uVar13 = CONCAT44(*(undefined4 *)(iVar2 + 0x18),iVar5);
        if (*(int *)PTR_DAT_00460568 != 0) {
          uVar13 = FUN_0009db64();
          *unaff_r8 = (int)((ulonglong)uVar13 >> 0x20);
          unaff_r8[1] = *(int *)((int)uVar13 + 0xc);
        }
        *(int *)((int)uVar13 + 0xc) = (int)((ulonglong)uVar13 >> 0x20);
        uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
        *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00460598;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar9;
        *(undefined **)((int)register0x00000054 + -0x38) =
             PTR_s_gcode_fdcpu_infobed_meshlis2dw12_008216f7_0xf5d_0046059c;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 8;
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x2c) == '\0') {
          iVar2 = *(int *)((int)register0x00000054 + -4);
          goto LAB_0046028c;
        }
        puVar8 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x30);
        uVar12 = puVar8 == PTR_DAT_004605a0;
        if ((bool)uVar12) {
          iVar5 = (*(undefined4 **)((int)register0x00000054 + -0x30))[1];
          if (*(int *)PTR_DAT_00460568 == 0) {
            iVar2 = *(int *)((int)register0x00000054 + -4);
          }
          else {
            iVar5 = FUN_0009db64();
            *unaff_r8 = iVar5;
            iVar2 = *(int *)((int)register0x00000054 + -4);
            unaff_r8[1] = *(int *)(iVar2 + 8);
          }
          *(int *)(iVar2 + 8) = iVar5;
LAB_0046028c:
          iVar5 = *(int *)((int)register0x00000054 + 4);
          iVar10 = *(int *)(iVar5 + 0xc);
          if (*(int *)PTR_DAT_00460568 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r3;
            unaff_r8[1] = *(int *)(extraout_r1_01 + 0x10);
            iVar2 = extraout_r1_01;
            iVar5 = extraout_r2_01;
            iVar10 = extraout_r3;
          }
          *(int *)(iVar2 + 0x10) = iVar10;
          *(undefined1 *)(iVar2 + 0x14) = 0;
          *(undefined1 *)(iVar2 + 0x15) = 0;
          uVar9 = *(undefined4 *)(iVar5 + 8);
          *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00460598;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar9;
          *(undefined **)((int)register0x00000054 + -0x38) =
               PTR_s_debuginputdictionaryerror_exitgc_00823504_0xeae_004605a4;
          *(undefined4 *)((int)register0x00000054 + -0x34) = 10;
          FUN_00093560();
          cVar1 = *(char *)((int)register0x00000054 + -0x2c);
          if (cVar1 == '\0') {
            iVar2 = *(int *)((int)register0x00000054 + -4);
            *(undefined1 *)(iVar2 + 0x16) = 0;
          }
          else {
            iVar2 = *(int *)((int)register0x00000054 + -4);
            *(undefined1 *)(iVar2 + 0x16) = 1;
          }
          *(undefined1 *)(iVar2 + 0x17) = 1;
          if (*(int *)PTR_DAT_00460568 != 0) {
            FUN_0009db54(cVar1,extraout_r1_02,*(undefined4 *)(iVar2 + 0x18));
            *unaff_r8 = extraout_r2_02;
            iVar2 = extraout_r3_00;
          }
          *(undefined4 *)(iVar2 + 0x18) = 0;
          if (*(char *)(iVar2 + 0x16) == '\0') {
            *(undefined4 *)((int)register0x00000054 + -0x14) = *(undefined4 *)(iVar2 + 4);
            *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_0046056c;
            FUN_00022cf8();
            puVar3 = *(undefined4 **)((int)register0x00000054 + -0x3c);
            *puVar3 = PTR_k3c_internal_pkg_gcode___GCodeIO__Respond_raw_fm_004605a8;
            if (*(int *)PTR_DAT_00460568 == 0) {
              iVar2 = *(int *)((int)register0x00000054 + -4);
            }
            else {
              puVar3 = (undefined4 *)FUN_0009db54();
              iVar2 = *(int *)((int)register0x00000054 + -4);
              *unaff_r8 = iVar2;
            }
            puVar3[1] = iVar2;
            iVar10 = *(int *)((int)register0x00000054 + -0x14);
            uVar7 = *(uint *)(iVar10 + 0x24);
            uVar4 = *(int *)(iVar10 + 0x20) + 1;
            iVar5 = *(int *)(iVar10 + 0x1c);
            if (uVar7 < uVar4) {
              *(undefined4 **)((int)register0x00000054 + -8) = puVar3;
              *(int *)((int)register0x00000054 + -0x40) = iVar5;
              *(uint *)((int)register0x00000054 + -0x3c) = uVar4;
              *(uint *)((int)register0x00000054 + -0x38) = uVar7;
              *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
              *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004605ac;
              FUN_000987f4();
              iVar5 = *(int *)((int)register0x00000054 + -0x2c);
              uVar4 = *(uint *)((int)register0x00000054 + -0x28);
              iVar10 = *(int *)((int)register0x00000054 + -0x14);
              *(undefined4 *)(iVar10 + 0x24) = *(undefined4 *)((int)register0x00000054 + -0x24);
              if (*(int *)PTR_DAT_00460568 != 0) {
                FUN_0009db64();
                *unaff_r8 = extraout_r1_03;
                unaff_r8[1] = *(int *)(extraout_r3_01 + 0x1c);
                iVar5 = extraout_r1_03;
                uVar4 = extraout_r2_03;
                iVar10 = extraout_r3_01;
              }
              *(int *)(iVar10 + 0x1c) = iVar5;
              puVar3 = *(undefined4 **)((int)register0x00000054 + -8);
              iVar2 = *(int *)((int)register0x00000054 + -4);
            }
            uVar13 = CONCAT44(iVar2,puVar3);
            *(uint *)(iVar10 + 0x20) = uVar4;
            iVar2 = uVar4 - 1;
            if (*(int *)PTR_DAT_00460568 != 0) {
              uVar13 = FUN_0009db64();
              *unaff_r8 = (int)uVar13;
              unaff_r8[1] = *(int *)(iVar5 + extraout_r3_02 * 4);
              iVar2 = extraout_r3_02;
            }
            *(int *)(iVar5 + iVar2 * 4) = (int)uVar13;
            *(int *)((int)register0x00000054 + -0x40) = (int)((ulonglong)uVar13 >> 0x20);
            k3c_internal_pkg_gcode___GCodeIO__resetFileHandle();
            iVar2 = *(int *)((int)register0x00000054 + -4);
          }
          *(undefined4 *)(iVar2 + 0x20) = 0;
          iVar5 = iVar2 + 0x34;
          if (*(int *)PTR_DAT_00460568 != 0) {
            *(int *)((int)register0x00000054 + -0x10) = iVar5;
            uVar13 = FUN_0009db64(*(undefined4 *)(iVar2 + 0x1c));
            *unaff_r8 = (int)uVar13;
            unaff_r8[1] = *(int *)(extraout_r3_03 + 0x24);
            *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_004605b0;
            *(int *)((int)register0x00000054 + -0x3c) = (int)((ulonglong)uVar13 >> 0x20);
            FUN_00026bd4();
            iVar5 = *(int *)((int)register0x00000054 + -0x10);
            iVar2 = *(int *)((int)register0x00000054 + -4);
          }
          *(undefined4 *)(iVar2 + 0x1c) = 0;
          *(undefined4 *)(iVar2 + 0x28) = 0;
          *(undefined4 *)(iVar2 + 0x2c) = 0;
          *(undefined **)(iVar2 + 0x24) = PTR_DAT_0046057c;
          *(undefined4 *)(iVar2 + 0x30) = 0;
          FUN_0009defc(0,iVar5);
          *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_004605b4;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 0x22;
          *(undefined2 *)((int)register0x00000054 + -0x38) = 0xd4;
          *(undefined1 *)((int)register0x00000054 + -0x36) = 0;
          FUN_003ed328();
          iVar2 = *(int *)((int)register0x00000054 + -0x34);
          if (*(int *)PTR_DAT_00460568 == 0) {
            iVar5 = *(int *)((int)register0x00000054 + -4);
          }
          else {
            FUN_0009db64();
            *unaff_r8 = extraout_r3_04;
            iVar5 = *(int *)((int)register0x00000054 + -4);
            unaff_r8[1] = *(int *)(iVar5 + 0x4c);
            iVar2 = extraout_r3_04;
          }
          *(int *)(iVar5 + 0x4c) = iVar2;
          *(int *)((int)register0x00000054 + 8) = iVar5;
          return;
        }
        *(undefined **)((int)register0x00000054 + -0x40) = puVar8;
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_004605a0;
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004605b8;
        uVar13 = FUN_000209b4();
      }
      *(undefined8 *)((int)register0x00000054 + -0x40) = uVar13;
      *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004605b8;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar11;
      }
    }
    unaff_lr = 0x46055c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeIO).resetFileHandle @ 004605bc (size 752) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode___GCodeIO__resetFileHandle(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  uint extraout_r2;
  int *piVar4;
  int *extraout_r3;
  uint uVar5;
  undefined4 uVar6;
  int *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  int local_48;
  uint local_44;
  int local_40;
  undefined4 local_10 [2];
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4608a8;
    FUN_0009bf64();
  }
  piVar4 = *(int **)(in_stack_00000004 + 8);
  uVar6 = *(undefined4 *)(*piVar4 + 0x2c);
  if (*(char *)(*piVar4 + 0x34) != '\0') {
    FUN_00121498();
  }
  FUN_0009df04(0,local_10,*(undefined4 *)(*piVar4 + 0x10),piVar4,unaff_lr);
  FUN_0008f77c();
  local_10[0] = DAT_004608b0;
  FUN_00020ce0();
  local_8 = DAT_004608b4;
  local_4 = uVar6;
  k3c_internal_pkg_logger_Debugf();
  piVar4 = *(int **)(in_stack_00000004 + 8);
  if (piVar4 == (int *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    if (*(char *)(*piVar4 + 0x34) != '\0') {
      FUN_00121498();
    }
    uVar6 = *(undefined4 *)(*piVar4 + 0x10);
  }
  iVar3 = *(int *)(in_stack_00000004 + 0x10);
  FUN_00022cf8();
  iVar1 = 0x28;
  _DAT_00000028 = DAT_004608c0;
  if (*DAT_004608c4 != 0) {
    iVar1 = FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
  }
  *(int *)(iVar1 + 4) = in_stack_00000004;
  FUN_00022cf8(iVar1);
  iVar2 = 0x28;
  _DAT_00000028 = uVar6;
  if (*DAT_004608c4 != 0) {
    iVar2 = FUN_0009db54();
    *unaff_r8 = iVar1;
  }
  *(int *)(iVar2 + 4) = iVar1;
  *(undefined4 *)(iVar2 + 8) = 0;
  FUN_00092908();
  piVar4 = (int *)0x2;
  if (*DAT_004608c4 != 0) {
    piVar4 = (int *)FUN_0009db64();
    *unaff_r8 = iVar2;
    unaff_r8[1] = *piVar4;
  }
  *piVar4 = iVar2;
  piVar4 = *(int **)(iVar3 + 0x3c);
  uVar5 = piVar4[1] + 1U;
  iVar1 = *piVar4;
  if ((uint)piVar4[2] < piVar4[1] + 1U) {
    FUN_000987f4();
    piVar4[2] = local_40;
    if (*DAT_004608c4 != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *extraout_r3;
      local_48 = extraout_r1;
      local_44 = extraout_r2;
      piVar4 = extraout_r3;
    }
    *piVar4 = local_48;
    uVar5 = local_44;
    iVar1 = local_48;
  }
  piVar4[1] = uVar5;
  *(undefined4 *)(iVar1 + (uVar5 - 1) * 8) = uVar6;
  iVar1 = iVar1 + (uVar5 - 1) * 8;
  *(undefined2 *)(iVar1 + 4) = 0x11;
  *(undefined2 *)(iVar1 + 6) = 0;
  if (*DAT_004608c4 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = *(int *)(in_stack_00000004 + 0x18);
    iVar2 = extraout_r1_00;
  }
  *(int *)(in_stack_00000004 + 0x18) = iVar2;
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeIO).Handle_ready @ 004608d4 (size 192) */

void k3c_internal_pkg_gcode___GCodeIO__Handle_ready(void)

{
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x460990;
    FUN_0009bf64();
  }
  *(undefined1 *)(in_stack_00000004 + 0x14) = 1;
  if ((*(char *)(in_stack_00000004 + 0x16) != '\0') && (*(int *)(in_stack_00000004 + 0x18) == 0)) {
    FUN_0009df04(0,&local_10,*(undefined4 *)(**(int **)(in_stack_00000004 + 8) + 0x2c),
                 in_stack_00000004,unaff_lr);
    local_10 = DAT_00460998;
    local_c = DAT_0046099c;
    FUN_0008f77c();
    local_8 = DAT_00460998;
    k3c_internal_pkg_logger_Debug();
    k3c_internal_pkg_gcode___GCodeIO__resetFileHandle();
  }
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeIO).Dump_debug @ 004609a0 (size 1664) */

void k3c_internal_pkg_gcode___GCodeIO__Dump_debug(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar3;
  undefined4 extraout_r2;
  int *extraout_r2_00;
  int *extraout_r2_01;
  undefined8 *puVar4;
  undefined8 *extraout_r2_02;
  undefined8 *extraout_r2_03;
  undefined4 extraout_r2_04;
  int iVar5;
  int extraout_r3;
  int extraout_r3_00;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *unaff_r8;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  int unaff_r10;
  undefined4 *extraout_r12;
  undefined4 *extraout_r12_00;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  undefined1 uVar14;
  undefined8 uVar15;
  undefined4 extraout_s1;
  undefined8 uVar16;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x30)) {
      puVar13 = (undefined1 *)((int)register0x00000054 + -0xb0);
      *(undefined4 *)((int)register0x00000054 + -0xb0) = unaff_lr;
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x48);
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xac) = uVar2;
      FUN_00020ce0();
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_00461024;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0xa8);
      *(undefined4 *)((int)register0x00000054 + -0xac) = DAT_00461028;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = 0x1d;
      *(undefined1 **)((int)register0x00000054 + -0xa4) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x9c) = 1;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           *(undefined4 *)((int)register0x00000054 + -0x94);
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + -0x98);
      *(undefined4 *)((int)register0x00000054 + -0xac) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = 1;
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 1;
      *(undefined4 **)((int)register0x00000054 + -0x9c) = DAT_0046102c;
      FUN_000987f4();
      uVar15 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x90),
                        *(int *)((int)register0x00000054 + -0x98));
      *(undefined4 *)(*(int *)((int)register0x00000054 + -0x98) + 4) =
           *(undefined4 *)((int)register0x00000054 + -0x6c);
      if (*DAT_00461030 == 0) {
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x3c);
      }
      else {
        uVar15 = FUN_0009db64();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x3c);
        *unaff_r8 = uVar2;
        unaff_r8[1] = *(undefined4 *)uVar15;
      }
      *(undefined4 *)uVar15 = uVar2;
      iVar5 = *(int *)((int)register0x00000054 + 4);
      iVar3 = 0;
      uVar6 = 1;
      while( true ) {
        uVar2 = (undefined4)((ulonglong)uVar15 >> 0x20);
        iVar10 = (int)uVar15;
        *(int *)((int)register0x00000054 + -0x48) = iVar10;
        if (*(int *)(iVar5 + 0x48) <= iVar3) {
          *(uint *)((int)register0x00000054 + -0x88) = uVar6;
          iVar5 = 0;
          while (iVar5 < (int)uVar6) {
            *(int *)((int)register0x00000054 + -0x84) = iVar5;
            *(undefined4 *)((int)register0x00000054 + -8) = 0;
            *(undefined4 *)((int)register0x00000054 + -4) = 0;
            uVar2 = *(undefined4 *)(iVar10 + (iVar5 * 2 + 1) * 4);
            *(undefined4 *)((int)register0x00000054 + -0xac) = *(undefined4 *)(iVar10 + iVar5 * 8);
            *(undefined4 *)((int)register0x00000054 + -0xa8) = uVar2;
            FUN_0008f77c();
            *(undefined4 **)((int)register0x00000054 + -8) = DAT_0046102c;
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0xa4);
            *(undefined4 *)((int)register0x00000054 + -0xac) = DAT_00461040;
            *(undefined4 *)((int)register0x00000054 + -0xa8) = 3;
            *(undefined1 **)((int)register0x00000054 + -0xa4) =
                 (undefined1 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0xa0) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x9c) = 1;
            FUN_0013b72c();
            *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x34) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xac) =
                 *(undefined4 *)((int)register0x00000054 + -0x98);
            *(undefined4 *)((int)register0x00000054 + -0xa8) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            FUN_0008f77c();
            *(undefined4 **)((int)register0x00000054 + -0x38) = DAT_0046102c;
            *(undefined4 *)((int)register0x00000054 + -0x34) =
                 *(undefined4 *)((int)register0x00000054 + -0xa4);
            *(undefined1 **)((int)register0x00000054 + -0xac) =
                 (undefined1 *)((int)register0x00000054 + -0x38);
            *(undefined4 *)((int)register0x00000054 + -0xa8) = 1;
            *(undefined4 *)((int)register0x00000054 + -0xa4) = 1;
            k3c_internal_pkg_logger_Debug();
            iVar10 = *(int *)((int)register0x00000054 + -0x48);
            uVar6 = *(uint *)((int)register0x00000054 + -0x88);
            iVar5 = *(int *)((int)register0x00000054 + -0x84) + 1;
          }
          return;
        }
        if (*(int *)(iVar5 + 0x48) == 0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = *(int **)(iVar5 + 0x34);
        }
        if (piVar8[2] == iVar5 + 0x34) {
          piVar9 = (int *)piVar8[1];
          iVar3 = *piVar8;
          if (*DAT_00461030 != 0) {
            FUN_0009db64();
            *(int *)iVar3 = iVar3;
            *(int *)(iVar3 + 4) = *piVar9;
            uVar2 = extraout_r1;
            iVar5 = extraout_r3;
          }
          *piVar9 = iVar3;
          iVar3 = *piVar8;
          iVar10 = piVar8[1];
          if (*DAT_00461030 != 0) {
            FUN_0009db94();
            *(int *)iVar10 = iVar10;
            *(undefined4 *)(iVar10 + 4) = *(undefined4 *)(iVar3 + 4);
            *(int *)(iVar10 + 8) = *piVar8;
            *(int *)(iVar10 + 0xc) = piVar8[1];
            *(int *)(iVar10 + 0x10) = piVar8[2];
            uVar2 = extraout_r1_00;
            iVar5 = extraout_r3_00;
          }
          *(int *)(iVar3 + 4) = iVar10;
          *piVar8 = 0;
          piVar8[1] = 0;
          piVar8[2] = 0;
          *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x48) + -1;
        }
        unaff_r8 = (undefined4 *)piVar8[3];
        iVar5 = piVar8[4];
        uVar1 = FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x20));
        uVar14 = unaff_r8 == DAT_00461034;
        puVar12 = DAT_00461034;
        if (!(bool)uVar14) goto LAB_00460ffc;
        uVar1 = FUN_0009e2e8(uVar1,iVar5,(undefined1 *)((int)register0x00000054 + -0x20));
        FUN_0009e2e8(uVar1,(undefined1 *)((int)register0x00000054 + -0x20),
                     (undefined1 *)((int)register0x00000054 + -0x60));
        if (*(int *)((int)register0x00000054 + -0x4c) == 0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = *(int **)((int)register0x00000054 + -0x60);
        }
        if ((undefined1 *)piVar8[2] == (undefined1 *)((int)register0x00000054 + -0x60)) {
          piVar11 = (int *)piVar8[1];
          iVar5 = *piVar8;
          piVar9 = piVar11;
          if (*DAT_00461030 != 0) {
            *(int *)((int)register0x00000054 + -0x40) = iVar5;
            piVar9 = (int *)FUN_0009db64(piVar11);
            iVar5 = *(int *)((int)register0x00000054 + -0x40);
            *piVar11 = iVar5;
            piVar11[1] = *piVar9;
            piVar8 = extraout_r2_00;
          }
          *piVar9 = iVar5;
          piVar11 = (int *)*piVar8;
          iVar5 = piVar8[1];
          piVar9 = piVar11;
          if (*DAT_00461030 != 0) {
            *(int *)((int)register0x00000054 + -0x40) = iVar5;
            piVar9 = (int *)FUN_0009db94(piVar11);
            iVar5 = *(int *)((int)register0x00000054 + -0x40);
            *piVar11 = iVar5;
            piVar11[1] = *(undefined4 *)((int)piVar9 + 4);
            piVar11[2] = *extraout_r2_01;
            piVar11[3] = extraout_r2_01[1];
            piVar11[4] = extraout_r2_01[2];
            piVar8 = extraout_r2_01;
          }
          *(int *)((int)piVar9 + 4) = iVar5;
          *piVar8 = 0;
          piVar8[1] = 0;
          piVar8[2] = 0;
          *(int *)((int)register0x00000054 + -0x4c) = *(int *)((int)register0x00000054 + -0x4c) + -1
          ;
        }
        unaff_r8 = (undefined4 *)piVar8[3];
        uVar14 = unaff_r8 == DAT_00461038;
        puVar12 = DAT_00461038;
        if (!(bool)uVar14) goto LAB_00460fe8;
        uVar15 = *(undefined8 *)piVar8[4];
        if (*(int *)((int)register0x00000054 + -0x4c) == 0) {
          puVar4 = (undefined8 *)0x0;
        }
        else {
          puVar4 = *(undefined8 **)((int)register0x00000054 + -0x60);
        }
        if (*(undefined1 **)(puVar4 + 1) == (undefined1 *)((int)register0x00000054 + -0x60)) {
          *(undefined8 *)((int)register0x00000054 + -0x80) = uVar15;
          puVar12 = *(undefined4 **)((int)puVar4 + 4);
          uVar16 = *puVar4;
          if (*DAT_00461030 != 0) {
            uVar16 = FUN_0009db64(*(undefined4 *)puVar4,puVar12);
            *puVar12 = (int)uVar16;
            puVar12[1] = *(undefined4 *)((ulonglong)uVar16 >> 0x20);
            uVar15 = *(undefined8 *)((int)register0x00000054 + -0x80);
            puVar4 = extraout_r2_02;
          }
          *(undefined4 *)((ulonglong)uVar16 >> 0x20) = (int)uVar16;
          puVar12 = *(undefined4 **)puVar4;
          uVar16 = CONCAT44(puVar12,*(undefined4 *)((int)puVar4 + 4));
          if (*DAT_00461030 != 0) {
            uVar16 = FUN_0009db94(*(undefined4 *)((int)puVar4 + 4),puVar12);
            *puVar12 = (int)uVar16;
            puVar12[1] = *(undefined4 *)((int)((ulonglong)uVar16 >> 0x20) + 4);
            puVar12[2] = *(undefined4 *)extraout_r2_03;
            puVar12[3] = *(undefined4 *)((int)extraout_r2_03 + 4);
            puVar12[4] = *(undefined4 *)(extraout_r2_03 + 1);
            uVar15 = *(undefined8 *)((int)register0x00000054 + -0x80);
            puVar4 = extraout_r2_03;
          }
          *(int *)((int)((ulonglong)uVar16 >> 0x20) + 4) = (int)uVar16;
          *(undefined4 *)puVar4 = 0;
          *(undefined4 *)((int)puVar4 + 4) = 0;
          *(undefined4 *)(puVar4 + 1) = 0;
          *(int *)((int)register0x00000054 + -0x4c) = *(int *)((int)register0x00000054 + -0x4c) + -1
          ;
        }
        unaff_r8 = *(undefined4 **)((int)puVar4 + 0xc);
        uVar14 = unaff_r8 == DAT_0046102c;
        if (!(bool)uVar14) break;
        *(undefined4 *)((int)register0x00000054 + -0x6c) = extraout_r2;
        *(undefined4 *)((int)register0x00000054 + -0x70) = uVar2;
        *(uint *)((int)register0x00000054 + -0x74) = uVar6 + 1;
        puVar12 = *(undefined4 **)(puVar4 + 2);
        *(undefined4 *)((int)register0x00000054 + -0x44) = *puVar12;
        *(undefined4 *)((int)register0x00000054 + -0x78) = puVar12[1];
        uVar2 = FUN_0009df04((int)uVar15,0,(undefined1 *)((int)register0x00000054 + -0x30));
        *(ulonglong *)((int)register0x00000054 + -0x68) = CONCAT44(extraout_s1,uVar2);
        *(undefined4 *)((int)register0x00000054 + -0xac) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        *(undefined4 *)((int)register0x00000054 + -0xa8) =
             *(undefined4 *)((int)register0x00000054 + -100);
        FUN_0008f6c0();
        *(undefined4 **)((int)register0x00000054 + -0x30) = DAT_00461038;
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0xa4);
        *(undefined4 *)((int)register0x00000054 + -0xac) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -0xa8) =
             *(undefined4 *)((int)register0x00000054 + -0x78);
        FUN_0008f77c();
        *(undefined4 **)((int)register0x00000054 + -0x28) = DAT_0046102c;
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0xa4);
        *(undefined4 *)((int)register0x00000054 + -0xac) = DAT_0046103c;
        *(undefined4 *)((int)register0x00000054 + -0xa8) = 0xb;
        *(undefined1 **)((int)register0x00000054 + -0xa4) =
             (undefined1 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0xa0) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x9c) = 2;
        FUN_0013b72c();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x98);
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x94);
        uVar7 = *(uint *)((int)register0x00000054 + -0x70);
        uVar6 = *(uint *)((int)register0x00000054 + -0x74);
        if (uVar7 < uVar6) {
          *(undefined4 *)((int)register0x00000054 + -0x70) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -0xac) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(uint *)((int)register0x00000054 + -0xa8) = uVar6;
          *(uint *)((int)register0x00000054 + -0xa4) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0xa0) = 1;
          *(undefined4 **)((int)register0x00000054 + -0x9c) = DAT_0046102c;
          FUN_000987f4();
          iVar5 = *(int *)((int)register0x00000054 + -0x98);
          uVar6 = *(uint *)((int)register0x00000054 + -0x94);
          uVar7 = *(uint *)((int)register0x00000054 + -0x90);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x3c);
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x70);
        }
        else {
          iVar5 = *(int *)((int)register0x00000054 + -0x48);
        }
        iVar3 = uVar6 - 1;
        *(undefined4 *)(iVar5 + (iVar3 * 2 + 1) * 4) = uVar1;
        if (*DAT_00461030 != 0) {
          iVar5 = FUN_0009db64();
          *unaff_r8 = extraout_r2_04;
          unaff_r8[1] = *(undefined4 *)(iVar5 + iVar3 * 8);
          uVar2 = extraout_r2_04;
        }
        uVar15 = CONCAT44(uVar7,iVar5);
        *(undefined4 *)(iVar5 + iVar3 * 8) = uVar2;
        iVar3 = *(int *)((int)register0x00000054 + -0x6c) + 1;
        iVar5 = *(int *)((int)register0x00000054 + 4);
      }
      *(undefined4 **)((int)register0x00000054 + -0xac) = unaff_r8;
      *(undefined4 **)((int)register0x00000054 + -0xa8) = DAT_0046102c;
      *(undefined4 *)((int)register0x00000054 + -0xa4) = DAT_00461044;
      FUN_000209b4();
      puVar12 = extraout_r12;
LAB_00460fe8:
      *(undefined4 **)((int)register0x00000054 + -0xac) = unaff_r8;
      *(undefined4 **)((int)register0x00000054 + -0xa8) = puVar12;
      *(undefined4 *)((int)register0x00000054 + -0xa4) = DAT_00461044;
      FUN_000209b4();
      puVar12 = extraout_r12_00;
LAB_00460ffc:
      *(undefined4 **)((int)register0x00000054 + -0xac) = unaff_r8;
      *(undefined4 **)((int)register0x00000054 + -0xa8) = puVar12;
      *(undefined4 *)((int)register0x00000054 + -0xa4) = DAT_00461044;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xb0);
      if ((bool)uVar14) {
        register0x00000054 = (BADSPACEBASE *)puVar13;
      }
    }
    unaff_lr = 0x46101c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeIO).Handle_shutdown @ 00461048 (size 296) */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void k3c_internal_pkg_gcode___GCodeIO__Handle_shutdown(void)

{
  int iVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar2;
  int *in_stack_00000004;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  code *local_10;
  undefined4 local_c;
  undefined4 local_8;
  code **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  local_c = *DAT_0046117c;
  local_8 = *DAT_00461180;
  local_10 = DAT_00461184;
  local_4 = &local_10;
  if ((char)in_stack_00000004[5] != '\0') {
    *(undefined1 *)(in_stack_00000004 + 5) = 0;
    k3c_internal_pkg_gcode___GCodeIO__Dump_debug();
    if (*(char *)((int)in_stack_00000004 + 0x16) != '\0') {
      iVar1 = *in_stack_00000004;
      if (*(int *)(iVar1 + 0x20) == 0) {
        *(undefined4 *)(iVar1 + 0x20) = 10;
        if (*DAT_00461188 != 0) {
          uVar2 = FUN_0009db54(iVar1,*(undefined4 *)(iVar1 + 0x1c));
          iVar1 = (int)uVar2;
          *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
        }
        *(undefined4 *)(iVar1 + 0x1c) = DAT_0046118c;
      }
      **(undefined1 **)(iVar1 + 0xc) = 0;
    }
    in_stack_00000014 = 0;
    in_stack_00000018 = 0;
    (**local_4)();
    return;
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  (*DAT_00461184)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeIO).Handle_shutdown.deferwrap1 @ 00461190 (size 92) */

void k3c_internal_pkg_gcode___GCodeIO__Handle_shutdown_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_10;
  undefined4 local_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_10;
  }
  local_10 = *(undefined4 *)(unaff_r7 + 4);
  local_c = *(undefined4 *)(unaff_r7 + 8);
  FUN_0012ffc0();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeIO).Process_data @ 004611ec (size 4424) */

void k3c_internal_pkg_gcode___GCodeIO__Process_data(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int extraout_r1;
  int iVar8;
  int extraout_r1_00;
  int *extraout_r1_01;
  int *extraout_r1_02;
  undefined4 uVar9;
  undefined4 extraout_r2;
  int *piVar10;
  int *extraout_r2_00;
  int extraout_r2_01;
  int *extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int iVar11;
  int extraout_r3_02;
  int extraout_r3_03;
  int extraout_r3_04;
  int extraout_r3_05;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  int *unaff_r8;
  uint uVar18;
  int unaff_r10;
  undefined1 *puVar19;
  undefined4 unaff_lr;
  bool bVar22;
  undefined1 uVar23;
  undefined8 uVar24;
  undefined1 *puVar20;
  undefined4 *puVar21;
  
  do {
    iVar1 = DAT_00461984;
    bVar22 = (undefined1 *)register0x00000054 == (undefined1 *)0x1080;
    if ((undefined1 *)0x107f < register0x00000054) {
      bVar22 = (undefined1 *)((int)register0x00000054 + -0x1080) == *(undefined1 **)(unaff_r10 + 8);
    }
    if (((undefined1 *)0x107f < register0x00000054 &&
        *(undefined1 **)(unaff_r10 + 8) <= (undefined1 *)((int)register0x00000054 + -0x1080)) &&
        !bVar22) {
      puVar19 = (undefined1 *)((int)register0x00000054 + DAT_00461984);
      puVar20 = (undefined1 *)((int)register0x00000054 + DAT_00461984);
      puVar21 = (undefined4 *)((int)register0x00000054 + DAT_00461984);
      *(undefined4 *)((int)register0x00000054 + DAT_00461984) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + DAT_00461988 + DAT_00461984);
      if (*(int *)(iVar2 + 8) == 0) {
        *(undefined4 *)((int)register0x00000054 + DAT_00462234 + DAT_00461984) = DAT_00462230;
        *(undefined4 *)((int)register0x00000054 + DAT_0046223c + DAT_00461984) = DAT_00462238;
        *(undefined1 **)((int)register0x00000054 + DAT_00461984 + 4) =
             (undefined1 *)((int)register0x00000054 + DAT_00462234 + DAT_00461984);
        *(undefined4 *)((int)register0x00000054 + DAT_00461984 + 8) = 1;
        *(undefined4 *)((int)register0x00000054 + DAT_00461984 + 0xc) = 1;
        k3c_internal_pkg_logger_Error();
        *(undefined4 *)((int)register0x00000054 + DAT_00462240 + iVar1) = 0;
        *(undefined4 *)((int)register0x00000054 + DAT_00462244 + iVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00461a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar21)();
        return;
      }
      puVar13 = (undefined1 *)((int)register0x00000054 + DAT_00461984 + 0x44);
      do {
        puVar6 = puVar13 + 1;
        *puVar13 = 0;
        puVar13 = puVar6;
      } while ((int)puVar6 <= (int)((int)register0x00000054 + DAT_0046198c + DAT_00461984));
      *(undefined4 *)((int)register0x00000054 + DAT_00461984 + 4) = *(undefined4 *)(iVar2 + 8);
      *(undefined1 **)((int)register0x00000054 + DAT_00461984 + 8) =
           (undefined1 *)((int)register0x00000054 + DAT_00461984 + 0x44);
      *(undefined4 *)((int)register0x00000054 + DAT_00461984 + 0xc) = 0x1000;
      *(undefined4 *)((int)register0x00000054 + DAT_00461984 + 0x10) = 0x1000;
      FUN_0012cc70();
      iVar2 = *(int *)((int)register0x00000054 + iVar1 + 0x18);
      uVar7 = *(uint *)((int)register0x00000054 + iVar1 + 0x14);
      uVar9 = *(undefined4 *)((int)register0x00000054 + iVar1 + 0x1c);
      bVar22 = iVar2 == 0;
      uVar3 = 0;
      if (!bVar22) {
        *(uint *)((int)register0x00000054 + DAT_00461990 + iVar1) = uVar7;
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + DAT_00461994 + iVar1),uVar9);
        *(int *)((int)register0x00000054 + DAT_00461994 + iVar1) = DAT_00461998;
        *(undefined4 *)((int)register0x00000054 + DAT_004619a0 + iVar1) = DAT_0046199c;
        if (!bVar22) {
          iVar2 = *(int *)(iVar2 + 4);
        }
        *(int *)((int)register0x00000054 + DAT_004619a4 + iVar1) = iVar2;
        *(undefined4 *)((int)register0x00000054 + DAT_004619a8 + iVar1) = extraout_r2;
        *(undefined1 **)((int)register0x00000054 + iVar1 + 4) =
             (undefined1 *)((int)register0x00000054 + DAT_00461994 + iVar1);
        *(undefined4 *)((int)register0x00000054 + iVar1 + 8) = 2;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) = 2;
        uVar3 = k3c_internal_pkg_logger_Error();
        uVar7 = *(uint *)((int)register0x00000054 + DAT_00461990 + iVar1);
      }
      uVar24 = CONCAT44(uVar7,uVar3);
      uVar23 = uVar7 == 0x1000;
      if (uVar7 < 0x1001) {
        *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = 0;
        *(undefined1 **)((int)register0x00000054 + iVar1 + 8) =
             (undefined1 *)((int)register0x00000054 + iVar1 + 0x44);
        *(uint *)((int)register0x00000054 + iVar1 + 0xc) = uVar7;
        FUN_00099104();
        uVar3 = *(undefined4 *)((int)register0x00000054 + iVar1 + 0x10);
        *(undefined4 *)((int)register0x00000054 + DAT_004619ac + iVar1) = uVar3;
        *(undefined4 *)((int)register0x00000054 + DAT_004619b0 + iVar1) =
             *(undefined4 *)((int)register0x00000054 + iVar1 + 0x14);
        *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = DAT_004619b4;
        FUN_00022cf8(uVar3);
        iVar2 = *(int *)((int)register0x00000054 + iVar1 + 8);
        if (*DAT_004619b8 != 0) {
          FUN_0009db54();
          *unaff_r8 = extraout_r1;
          iVar2 = extraout_r1;
        }
        *(int *)((int)register0x00000054 + DAT_004619bc + iVar1) = iVar2;
        *(int *)iVar2 = iVar2;
        *(int *)(iVar2 + 4) = iVar2;
        *(undefined4 *)(iVar2 + 0x14) = 0;
        *(undefined8 *)((int)register0x00000054 + DAT_004619c4 + iVar1) =
             *(undefined8 *)((int)register0x00000054 + DAT_004619c0 + iVar1);
        uVar3 = *(undefined4 *)((int)register0x00000054 + DAT_004619c8 + iVar1);
        *(undefined4 *)((int)register0x00000054 + iVar1 + 4) =
             *(undefined4 *)((int)register0x00000054 + DAT_004619c4 + iVar1);
        *(undefined4 *)((int)register0x00000054 + iVar1 + 8) = uVar3;
        FUN_0008f6c0();
        piVar4 = *(int **)((int)register0x00000054 + DAT_004619bc + iVar1);
        iVar2 = *piVar4;
        *(undefined4 *)((int)register0x00000054 + DAT_004619cc + iVar1) =
             *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc);
        if (iVar2 == 0) {
          if (*DAT_004619b8 != 0) {
            piVar4 = (int *)FUN_0009db74();
            *unaff_r8 = (int)piVar4;
            unaff_r8[1] = *piVar4;
            unaff_r8[2] = piVar4[1];
          }
          *piVar4 = (int)piVar4;
          piVar4[1] = (int)piVar4;
          piVar4[5] = 0;
        }
        *(int *)((int)register0x00000054 + DAT_004619d0 + iVar1) = piVar4[1];
        *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = DAT_004619d4;
        FUN_00022cf8();
        iVar2 = *(int *)((int)register0x00000054 + iVar1 + 8);
        *(undefined4 *)(iVar2 + 0xc) = DAT_004619d8;
        if (*DAT_004619b8 == 0) {
          iVar8 = *(int *)((int)register0x00000054 + DAT_004619cc + iVar1);
        }
        else {
          iVar2 = FUN_0009db54();
          iVar8 = *(int *)((int)register0x00000054 + DAT_004619cc + iVar1);
          *unaff_r8 = iVar8;
        }
        *(int *)(iVar2 + 0x10) = iVar8;
        if (*DAT_004619b8 == 0) {
          piVar4 = *(int **)((int)register0x00000054 + DAT_004619d0 + iVar1);
        }
        else {
          iVar2 = FUN_0009db54();
          piVar4 = *(int **)((int)register0x00000054 + DAT_004619d0 + iVar1);
          *unaff_r8 = (int)piVar4;
        }
        uVar24 = CONCAT44(piVar4,iVar2);
        *(int **)(iVar2 + 4) = piVar4;
        iVar2 = *piVar4;
        if (*DAT_004619b8 != 0) {
          uVar24 = FUN_0009db74();
          *unaff_r8 = extraout_r3;
          unaff_r8[1] = (int)uVar24;
          unaff_r8[2] = *(int *)((ulonglong)uVar24 >> 0x20);
          iVar2 = extraout_r3;
        }
        piVar4 = (int *)uVar24;
        *piVar4 = iVar2;
        *(undefined4 *)((ulonglong)uVar24 >> 0x20) = piVar4;
        uVar24 = CONCAT44(*piVar4,piVar4);
        if (*DAT_004619b8 == 0) {
          iVar2 = *(int *)((int)register0x00000054 + DAT_004619bc + iVar1);
        }
        else {
          uVar24 = FUN_0009db84();
          *unaff_r8 = (int)uVar24;
          unaff_r8[1] = *(int *)((int)((ulonglong)uVar24 >> 0x20) + 4);
          iVar2 = *(int *)((int)register0x00000054 + DAT_004619bc + iVar1);
          unaff_r8[2] = iVar2;
          unaff_r8[3] = *(int *)((int)uVar24 + 8);
        }
        *(int *)((int)((ulonglong)uVar24 >> 0x20) + 4) = (int)uVar24;
        *(int *)((int)uVar24 + 8) = iVar2;
        *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 4) =
             *(undefined4 *)((int)register0x00000054 + DAT_004619ac + iVar1);
        *(undefined4 *)((int)register0x00000054 + iVar1 + 8) =
             *(undefined4 *)((int)register0x00000054 + DAT_004619b0 + iVar1);
        FUN_0008f77c();
        piVar4 = *(int **)((int)register0x00000054 + DAT_004619bc + iVar1);
        iVar2 = *piVar4;
        *(undefined4 *)((int)register0x00000054 + DAT_004619cc + iVar1) =
             *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc);
        if (iVar2 == 0) {
          if (*DAT_004619b8 != 0) {
            piVar4 = (int *)FUN_0009db74();
            *unaff_r8 = (int)piVar4;
            unaff_r8[1] = *piVar4;
            unaff_r8[2] = piVar4[1];
          }
          *piVar4 = (int)piVar4;
          piVar4[1] = (int)piVar4;
          piVar4[5] = 0;
        }
        *(int *)((int)register0x00000054 + DAT_004619dc + iVar1) = piVar4[1];
        *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = DAT_004619d4;
        FUN_00022cf8();
        piVar4 = *(int **)((int)register0x00000054 + iVar1 + 8);
        piVar4[3] = DAT_00461998;
        if (*DAT_004619b8 == 0) {
          iVar2 = *(int *)((int)register0x00000054 + DAT_004619cc + iVar1);
        }
        else {
          piVar4 = (int *)FUN_0009db54();
          iVar2 = *(int *)((int)register0x00000054 + DAT_004619cc + iVar1);
          *unaff_r8 = iVar2;
        }
        piVar4[4] = iVar2;
        if (*DAT_004619b8 == 0) {
          piVar10 = *(int **)((int)register0x00000054 + DAT_004619dc + iVar1);
        }
        else {
          piVar4 = (int *)FUN_0009db54();
          piVar10 = *(int **)((int)register0x00000054 + DAT_004619dc + iVar1);
          *unaff_r8 = (int)piVar10;
        }
        piVar4[1] = (int)piVar10;
        iVar2 = *piVar10;
        if (*DAT_004619b8 != 0) {
          piVar4 = (int *)FUN_0009db74();
          *unaff_r8 = iVar2;
          unaff_r8[1] = (int)piVar4;
          unaff_r8[2] = *extraout_r2_00;
          piVar10 = extraout_r2_00;
        }
        *piVar4 = iVar2;
        *piVar10 = (int)piVar4;
        iVar2 = *piVar4;
        if (*DAT_004619b8 == 0) {
          iVar8 = *(int *)((int)register0x00000054 + DAT_004619bc + iVar1);
        }
        else {
          piVar4 = (int *)FUN_0009db84();
          *unaff_r8 = (int)piVar4;
          unaff_r8[1] = *(int *)(extraout_r2_01 + 4);
          iVar8 = *(int *)((int)register0x00000054 + DAT_004619bc + iVar1);
          unaff_r8[2] = iVar8;
          unaff_r8[3] = piVar4[2];
          iVar2 = extraout_r2_01;
        }
        *(int **)(iVar2 + 4) = piVar4;
        piVar4[2] = iVar8;
        *(int *)(iVar8 + 0x14) = *(int *)(iVar8 + 0x14) + 1;
        iVar2 = *(int *)((int)register0x00000054 + DAT_00461988 + iVar1);
        if (*(int *)(iVar2 + 0x34) == 0) {
          iVar8 = iVar2 + 0x34;
          if (*DAT_004619b8 != 0) {
            iVar2 = FUN_0009db84();
            *unaff_r8 = iVar8;
            unaff_r8[1] = *(int *)(iVar2 + 0x34);
            unaff_r8[2] = iVar8;
            unaff_r8[3] = *(int *)(iVar2 + 0x38);
          }
          *(int *)(iVar2 + 0x34) = iVar8;
          *(int *)(iVar2 + 0x38) = iVar8;
          *(undefined4 *)(iVar2 + 0x48) = 0;
        }
        *(undefined4 *)((int)register0x00000054 + DAT_004619e0 + iVar1) =
             *(undefined4 *)(iVar2 + 0x38);
        *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = DAT_004619d4;
        FUN_00022cf8();
        iVar2 = *(int *)((int)register0x00000054 + iVar1 + 8);
        *(undefined4 *)(iVar2 + 0xc) = DAT_004619e4;
        if (*DAT_004619b8 == 0) {
          iVar8 = *(int *)((int)register0x00000054 + DAT_004619bc + iVar1);
        }
        else {
          iVar2 = FUN_0009db54();
          iVar8 = *(int *)((int)register0x00000054 + DAT_004619bc + iVar1);
          *unaff_r8 = iVar8;
        }
        *(int *)(iVar2 + 0x10) = iVar8;
        if (*DAT_004619b8 == 0) {
          piVar4 = *(int **)((int)register0x00000054 + DAT_004619e0 + iVar1);
        }
        else {
          iVar2 = FUN_0009db54();
          piVar4 = *(int **)((int)register0x00000054 + DAT_004619e0 + iVar1);
          *unaff_r8 = (int)piVar4;
        }
        uVar24 = CONCAT44(piVar4,iVar2);
        *(int **)(iVar2 + 4) = piVar4;
        iVar2 = *piVar4;
        if (*DAT_004619b8 != 0) {
          uVar24 = FUN_0009db74();
          *unaff_r8 = extraout_r3_00;
          unaff_r8[1] = (int)uVar24;
          unaff_r8[2] = *(int *)((ulonglong)uVar24 >> 0x20);
          iVar2 = extraout_r3_00;
        }
        piVar4 = (int *)uVar24;
        *piVar4 = iVar2;
        *(undefined4 *)((ulonglong)uVar24 >> 0x20) = piVar4;
        uVar24 = CONCAT44(*piVar4,piVar4);
        iVar2 = *(int *)((int)register0x00000054 + DAT_00461988 + iVar1);
        iVar8 = iVar2 + 0x34;
        if (*DAT_004619b8 != 0) {
          uVar24 = FUN_0009db84();
          *unaff_r8 = (int)uVar24;
          unaff_r8[1] = *(int *)((int)((ulonglong)uVar24 >> 0x20) + 4);
          unaff_r8[2] = iVar8;
          unaff_r8[3] = *(int *)((int)uVar24 + 8);
          iVar2 = extraout_r3_01;
        }
        *(int *)((int)((ulonglong)uVar24 >> 0x20) + 4) = (int)uVar24;
        *(int *)((int)uVar24 + 8) = iVar8;
        *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1;
        iVar8 = *(int *)((int)register0x00000054 + DAT_004619b0 + iVar1);
        *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + iVar8;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 4) =
             *(undefined4 *)((int)register0x00000054 + DAT_004619ac + iVar1);
        *(int *)((int)register0x00000054 + iVar1 + 8) = iVar8;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) = DAT_004619e8;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0x10) = 1;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0x18) = 0xffffffff;
        FUN_0014f168();
        iVar2 = *(int *)((int)register0x00000054 + iVar1 + 0x20);
        uVar23 = iVar2 == 0;
        if (!(bool)uVar23) {
          *(undefined4 *)((int)register0x00000054 + DAT_004619ec + iVar1) =
               *(undefined4 *)((int)register0x00000054 + iVar1 + 0x24);
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + DAT_00461988 + iVar1) + 0x1c);
          uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + DAT_00461988 + iVar1) + 0x20);
          *(int *)((int)register0x00000054 + DAT_004619f0 + iVar1) = iVar2 + -1;
          puVar12 = *(undefined4 **)((int)register0x00000054 + iVar1 + 0x1c);
          *(undefined4 **)((int)register0x00000054 + DAT_004619f4 + iVar1) = puVar12;
          uVar14 = *puVar12;
          uVar16 = puVar12[1];
          *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = 0;
          *(undefined4 *)((int)register0x00000054 + iVar1 + 8) = uVar3;
          *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) = uVar9;
          *(undefined4 *)((int)register0x00000054 + iVar1 + 0x10) = uVar14;
          *(undefined4 *)((int)register0x00000054 + iVar1 + 0x14) = uVar16;
          FUN_0007636c();
          iVar2 = *(int *)((int)register0x00000054 + iVar1 + 0x18);
          piVar10 = *(int **)((int)register0x00000054 + DAT_004619f4 + iVar1);
          piVar10[1] = *(int *)((int)register0x00000054 + iVar1 + 0x1c);
          iVar11 = *(int *)((int)register0x00000054 + DAT_004619f0 + iVar1);
          piVar4 = piVar10;
          iVar8 = iVar11;
          if (*DAT_004619b8 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r1_00;
            unaff_r8[1] = *extraout_r2_02;
            iVar2 = extraout_r1_00;
            piVar4 = extraout_r2_02;
            iVar8 = extraout_r3_02;
          }
          *piVar4 = iVar2;
          iVar2 = piVar4[iVar8 * 2];
          iVar8 = *(int *)((int)register0x00000054 + DAT_00461988 + iVar1);
          *(int *)(iVar8 + 0x20) = piVar10[iVar11 * 2 + 1];
          if (*DAT_004619b8 != 0) {
            FUN_0009db64();
            *unaff_r8 = iVar2;
            unaff_r8[1] = *(int *)(iVar8 + 0x1c);
          }
          *(int *)(iVar8 + 0x1c) = iVar2;
          uVar3 = *(undefined4 *)(iVar8 + 0x24);
          uVar9 = *(undefined4 *)(iVar8 + 0x28);
          uVar14 = *(undefined4 *)(iVar8 + 0x2c);
          FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + DAT_004619f8 + iVar1));
          *(undefined4 *)((int)register0x00000054 + DAT_004619fc + iVar1) = uVar9;
          *(undefined4 *)((int)register0x00000054 + DAT_00461a00 + iVar1) = uVar14;
          *(undefined4 *)((int)register0x00000054 + DAT_004619f8 + iVar1) = uVar3;
          *(int *)((int)register0x00000054 + DAT_00461a04 + iVar1) = extraout_r3_03;
          *(undefined4 *)((int)register0x00000054 + DAT_00461a08 + iVar1) =
               *(undefined4 *)((int)register0x00000054 + DAT_004619ec + iVar1);
          *(int *)((int)register0x00000054 + DAT_00461a0c + iVar1) = extraout_r2_03;
          puVar13 = (undefined1 *)((int)register0x00000054 + DAT_004619f8 + iVar1);
          iVar11 = 0;
          for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
            iVar11 = *(int *)(puVar13 + 4) + iVar11;
            uVar23 = iVar11 == 0;
            if (iVar11 < 0) goto LAB_00462420;
            puVar13 = puVar13 + 0xc;
          }
          uVar23 = iVar11 == 0;
          if (-1 < iVar11) break;
          *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = DAT_00462480;
          *(undefined4 *)((int)register0x00000054 + iVar1 + 8) = DAT_00462488;
          FUN_00095b00();
LAB_00462420:
          *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = DAT_00462480;
          *(undefined4 *)((int)register0x00000054 + iVar1 + 8) = DAT_0046248c;
          FUN_00095b00();
        }
        uVar24 = FUN_0009dbd4(0,0);
      }
      param_1 = FUN_0009dbf4((int)uVar24,(int)((ulonglong)uVar24 >> 0x20),0x1000);
      register0x00000054 = (BADSPACEBASE *)puVar19;
      if ((bool)uVar23) {
        register0x00000054 = (BADSPACEBASE *)puVar20;
      }
    }
    unaff_lr = 0x462454;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
  if (iVar11 < 1) {
    uVar7 = 0;
    iVar5 = 0;
    iVar2 = extraout_r2_03;
    iVar11 = extraout_r3_03;
  }
  else {
    *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = 0;
    *(int *)((int)register0x00000054 + iVar1 + 8) = iVar11;
    *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) = 0;
    *(int *)((int)register0x00000054 + iVar1 + 0x10) = iVar11;
    *(undefined4 *)((int)register0x00000054 + iVar1 + 0x14) = DAT_00462230;
    FUN_000987f4();
    iVar5 = *(int *)((int)register0x00000054 + iVar1 + 0x18);
    uVar7 = *(uint *)((int)register0x00000054 + iVar1 + 0x20);
    iVar2 = *(int *)((int)register0x00000054 + DAT_0046224c + iVar1);
    iVar11 = *(int *)((int)register0x00000054 + DAT_00462250 + iVar1);
    iVar8 = *(int *)((int)register0x00000054 + DAT_00462254 + iVar1);
  }
  puVar12 = (undefined4 *)((int)register0x00000054 + DAT_00462258 + iVar1);
  iVar15 = 0;
  uVar17 = 0;
  while( true ) {
    *(uint *)((int)register0x00000054 + DAT_00462270 + iVar1) = uVar17;
    if (1 < iVar15) break;
    *(int *)((int)register0x00000054 + DAT_0046226c + iVar1) = iVar15;
    *(undefined4 **)((int)register0x00000054 + DAT_00462268 + iVar1) = puVar12;
    unaff_r8 = (int *)puVar12[1];
    uVar18 = (int)unaff_r8 + uVar17;
    uVar3 = *puVar12;
    if (uVar7 < uVar18) {
      *(int **)((int)register0x00000054 + DAT_00462274 + iVar1) = unaff_r8;
      *(undefined4 *)((int)register0x00000054 + DAT_00462278 + iVar1) = uVar3;
      *(int *)((int)register0x00000054 + iVar1 + 4) = iVar5;
      *(uint *)((int)register0x00000054 + iVar1 + 8) = uVar18;
      *(uint *)((int)register0x00000054 + iVar1 + 0xc) = uVar7;
      *(int **)((int)register0x00000054 + iVar1 + 0x10) = unaff_r8;
      *(undefined4 *)((int)register0x00000054 + iVar1 + 0x14) = DAT_00462230;
      FUN_000987f4();
      iVar5 = *(int *)((int)register0x00000054 + iVar1 + 0x18);
      uVar18 = *(uint *)((int)register0x00000054 + iVar1 + 0x1c);
      uVar7 = *(uint *)((int)register0x00000054 + iVar1 + 0x20);
      uVar17 = *(uint *)((int)register0x00000054 + DAT_00462270 + iVar1);
      unaff_r8 = *(int **)((int)register0x00000054 + DAT_00462274 + iVar1);
      uVar3 = *(undefined4 *)((int)register0x00000054 + DAT_00462278 + iVar1);
    }
    *(uint *)((int)register0x00000054 + DAT_0046225c + iVar1) = uVar7;
    *(uint *)((int)register0x00000054 + DAT_00462260 + iVar1) = uVar18;
    *(int *)((int)register0x00000054 + DAT_00462264 + iVar1) = iVar5;
    *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = DAT_00462230;
    *(uint *)((int)register0x00000054 + iVar1 + 8) =
         iVar5 + ((int)-(uVar7 - uVar17) >> 0x1f & uVar17 << 3);
    *(uint *)((int)register0x00000054 + iVar1 + 0xc) = uVar18 - uVar17;
    *(undefined4 *)((int)register0x00000054 + iVar1 + 0x10) = uVar3;
    *(int **)((int)register0x00000054 + iVar1 + 0x14) = unaff_r8;
    FUN_00093f5c();
    puVar12 = (undefined4 *)(*(int *)((int)register0x00000054 + DAT_00462268 + iVar1) + 0xc);
    iVar15 = *(int *)((int)register0x00000054 + DAT_0046226c + iVar1) + 1;
    iVar2 = *(int *)((int)register0x00000054 + DAT_0046224c + iVar1);
    iVar11 = *(int *)((int)register0x00000054 + DAT_00462250 + iVar1);
    iVar8 = *(int *)((int)register0x00000054 + DAT_00462254 + iVar1);
    uVar7 = *(uint *)((int)register0x00000054 + DAT_0046225c + iVar1);
    uVar17 = *(uint *)((int)register0x00000054 + DAT_00462260 + iVar1);
    iVar5 = *(int *)((int)register0x00000054 + DAT_00462264 + iVar1);
  }
  *(undefined1 *)(iVar8 + 0x17) = 1;
  uVar24 = CONCAT44(uVar7,iVar5);
  if ((*(int *)((int)register0x00000054 + DAT_0046227c + iVar1) == 0) &&
     (uVar24 = CONCAT44(uVar7,iVar5), *(char *)(iVar8 + 0x16) != '\0')) {
    if (*(char *)(iVar8 + 0x15) == '\0') {
      *(uint *)((int)register0x00000054 + DAT_00462280 + iVar1) = uVar7;
      *(int *)((int)register0x00000054 + DAT_00462284 + iVar1) = iVar5;
      iVar2 = *(int *)(iVar8 + 0x10);
      *(int *)((int)register0x00000054 + DAT_00462288 + iVar1) = iVar2;
      puVar12 = *(undefined4 **)(iVar8 + 0x18);
      *(undefined4 **)((int)register0x00000054 + DAT_0046228c + iVar1) = puVar12;
      uVar3 = *(undefined4 *)(iVar2 + 0x40);
      uVar9 = *puVar12;
      *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = DAT_00462290;
      *(undefined4 *)((int)register0x00000054 + iVar1 + 8) = uVar3;
      *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) = uVar9;
      FUN_00025164();
      piVar4 = *(int **)(*(int *)((int)register0x00000054 + DAT_00462288 + iVar1) + 0x3c);
      iVar2 = *piVar4;
      iVar8 = piVar4[1];
      for (iVar11 = 0; iVar11 < iVar8; iVar11 = iVar11 + 1) {
        if (*(int *)(iVar2 + iVar11 * 8) ==
            **(int **)((int)register0x00000054 + DAT_0046228c + iVar1)) {
          *(int **)((int)register0x00000054 + DAT_004622bc + iVar1) = piVar4;
          uVar7 = piVar4[2];
          uVar17 = iVar8 - 1;
          iVar5 = iVar8 - iVar11;
          iVar11 = ((int)(1 - (uVar7 - iVar11)) >> 0x1f & (iVar11 + 1) * 8) + iVar2;
          iVar15 = iVar5 + -1;
          if (uVar7 < uVar17) {
            *(int *)((int)register0x00000054 + DAT_0046226c + iVar1) = iVar8;
            *(int *)((int)register0x00000054 + DAT_004622c0 + iVar1) = iVar15;
            *(int *)((int)register0x00000054 + DAT_004622b0 + iVar1) = iVar11;
            *(int *)((int)register0x00000054 + DAT_004622c4 + iVar1) = iVar5;
            *(int *)((int)register0x00000054 + iVar1 + 4) = iVar2;
            *(uint *)((int)register0x00000054 + iVar1 + 8) = uVar17;
            *(uint *)((int)register0x00000054 + iVar1 + 0xc) = uVar7;
            *(int *)((int)register0x00000054 + iVar1 + 0x10) = iVar15;
            *(undefined4 *)((int)register0x00000054 + iVar1 + 0x14) = DAT_004622b4;
            FUN_000987f4();
            iVar2 = *(int *)((int)register0x00000054 + iVar1 + 0x18);
            uVar17 = *(uint *)((int)register0x00000054 + iVar1 + 0x1c);
            uVar7 = *(uint *)((int)register0x00000054 + iVar1 + 0x20);
            iVar8 = *(int *)((int)register0x00000054 + DAT_0046226c + iVar1);
            iVar11 = *(int *)((int)register0x00000054 + DAT_004622b0 + iVar1);
            iVar5 = *(int *)((int)register0x00000054 + DAT_004622c4 + iVar1);
            iVar15 = *(int *)((int)register0x00000054 + DAT_004622c0 + iVar1);
          }
          *(int *)((int)register0x00000054 + DAT_004622b0 + iVar1) = iVar2;
          *(uint *)((int)register0x00000054 + DAT_0046226c + iVar1) = uVar17;
          *(uint *)((int)register0x00000054 + DAT_004622c0 + iVar1) = uVar7;
          *(int *)((int)register0x00000054 + iVar1 + 4) = iVar2 + (iVar8 - iVar5) * 8;
          *(int *)((int)register0x00000054 + iVar1 + 8) = iVar11;
          *(int *)((int)register0x00000054 + iVar1 + 0xc) = iVar15 << 3;
          FUN_0009e3a4();
          piVar4 = *(int **)((int)register0x00000054 + DAT_004622bc + iVar1);
          piVar4[1] = *(int *)((int)register0x00000054 + DAT_0046226c + iVar1);
          piVar4[2] = *(int *)((int)register0x00000054 + DAT_004622c0 + iVar1);
          if (*DAT_004622a0 == 0) {
            iVar2 = *(int *)((int)register0x00000054 + DAT_004622b0 + iVar1);
          }
          else {
            FUN_0009db64();
            iVar2 = *(int *)((int)register0x00000054 + DAT_0046245c + iVar1);
            *unaff_r8 = iVar2;
            unaff_r8[1] = *extraout_r1_02;
            piVar4 = extraout_r1_02;
          }
          *piVar4 = iVar2;
          break;
        }
      }
      if (*DAT_00462460 == 0) {
        iVar2 = *(int *)((int)register0x00000054 + DAT_00462464 + iVar1);
      }
      else {
        uVar24 = FUN_0009db54(*(int *)((int)register0x00000054 + DAT_00462464 + iVar1),
                              *(undefined4 *)
                               (*(int *)((int)register0x00000054 + DAT_00462464 + iVar1) + 0x18));
        iVar2 = (int)uVar24;
        *unaff_r8 = (int)((ulonglong)uVar24 >> 0x20);
      }
      *(undefined4 *)(iVar2 + 0x18) = 0;
      *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)((int)register0x00000054 + iVar1 + 8) = DAT_00462468;
      *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) = 4;
      k3c_internal_pkg_gcode___GCodeDispatch__Request_restart();
      iVar5 = *(int *)((int)register0x00000054 + DAT_0046246c + iVar1);
      uVar7 = *(uint *)((int)register0x00000054 + DAT_00462470 + iVar1);
      iVar2 = *(int *)((int)register0x00000054 + DAT_00462474 + iVar1);
      iVar11 = *(int *)((int)register0x00000054 + DAT_00462478 + iVar1);
      iVar8 = *(int *)((int)register0x00000054 + DAT_00462464 + iVar1);
      uVar17 = *(uint *)((int)register0x00000054 + DAT_0046247c + iVar1);
    }
    uVar17 = uVar17 + 1;
    if (uVar7 < uVar17) {
      *(int *)((int)register0x00000054 + iVar1 + 4) = iVar5;
      *(uint *)((int)register0x00000054 + iVar1 + 8) = uVar17;
      *(uint *)((int)register0x00000054 + iVar1 + 0xc) = uVar7;
      *(undefined4 *)((int)register0x00000054 + iVar1 + 0x10) = 1;
      *(undefined4 *)((int)register0x00000054 + iVar1 + 0x14) = DAT_00462480;
      FUN_000987f4();
      iVar5 = *(int *)((int)register0x00000054 + iVar1 + 0x18);
      uVar17 = *(uint *)((int)register0x00000054 + iVar1 + 0x1c);
      uVar7 = *(uint *)((int)register0x00000054 + iVar1 + 0x20);
      iVar2 = *(int *)((int)register0x00000054 + DAT_00462474 + iVar1);
      iVar11 = *(int *)((int)register0x00000054 + DAT_00462478 + iVar1);
      iVar8 = *(int *)((int)register0x00000054 + DAT_00462464 + iVar1);
    }
    uVar24 = CONCAT44(uVar7,iVar5);
    iVar15 = uVar17 - 1;
    *(undefined4 *)(iVar5 + iVar15 * 8 + 4) = 0;
    if (*DAT_00462460 != 0) {
      puVar12 = *(undefined4 **)(iVar5 + iVar15 * 8);
      *(undefined4 **)((int)register0x00000054 + DAT_00462484 + iVar1) = puVar12;
      uVar24 = FUN_0009db54();
      *puVar12 = *(undefined4 *)((int)register0x00000054 + DAT_00462484 + iVar1);
      iVar2 = extraout_r2_04;
      iVar11 = extraout_r3_05;
    }
    unaff_r8 = (int *)0x0;
    *(undefined4 *)((int)uVar24 + iVar15 * 8) = 0;
  }
  if ((*(char *)(iVar8 + 0x15) != '\0') || (1 < (int)uVar17)) {
    if ((int)uVar17 < 0x14) {
      *(int *)((int)register0x00000054 + DAT_00462294 + iVar1) = (int)((ulonglong)uVar24 >> 0x20);
      *(uint *)((int)register0x00000054 + DAT_00462298 + iVar1) = uVar17;
      *(int *)((int)register0x00000054 + DAT_0046229c + iVar1) = (int)uVar24;
      iVar5 = 0;
      while (iVar5 < iVar11) {
        *(int *)((int)register0x00000054 + DAT_0046226c + iVar1) = iVar5;
        uVar3 = *(undefined4 *)(iVar2 + iVar5 * 8);
        uVar9 = *(undefined4 *)(iVar2 + iVar5 * 8 + 4);
        *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = 0;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 8) = uVar3;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) = uVar9;
        FUN_000766e8();
        iVar2 = *(int *)((int)register0x00000054 + DAT_00462254 + iVar1);
        *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = *(undefined4 *)(iVar2 + 0x4c);
        *(undefined4 *)((int)register0x00000054 + iVar1 + 8) = 0;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0x1c) = 0;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0x20) = 0;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0x24) = 0;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0x28) = 0;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0x2c) = 0;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0x30) = 0;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0x34) = 0;
        FUN_003ea300(iVar2);
        if (*(int *)((int)register0x00000054 + iVar1 + 0x38) != 0) {
          *(undefined4 *)((int)register0x00000054 + iVar1 + 4) =
               *(undefined4 *)
                (*(int *)(*(int *)((int)register0x00000054 + DAT_00462254 + iVar1) + 4) + 0x10);
          *(undefined4 *)((int)register0x00000054 + iVar1 + 8) = DAT_004622b8;
          *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) = 0x1c;
          k3c_internal_pkg_printer___Printer__Invoke_shutdown();
        }
        unaff_r8 = *(int **)((int)register0x00000054 + DAT_0046226c + iVar1);
        uVar24 = CONCAT44(*(undefined4 *)((int)register0x00000054 + DAT_00462294 + iVar1),
                          *(undefined4 *)((int)register0x00000054 + DAT_0046229c + iVar1));
        iVar2 = *(int *)((int)register0x00000054 + DAT_0046224c + iVar1);
        iVar11 = *(int *)((int)register0x00000054 + DAT_00462250 + iVar1);
        iVar8 = *(int *)((int)register0x00000054 + DAT_00462254 + iVar1);
        uVar17 = *(uint *)((int)register0x00000054 + DAT_00462298 + iVar1);
        iVar5 = (int)unaff_r8 + 1;
      }
    }
    if (*(char *)(iVar8 + 0x15) != '\0') {
      if (0x13 < (int)uVar17) {
        iVar2 = *(int *)(iVar8 + 0x10);
        *(int *)((int)register0x00000054 + DAT_004622a4 + iVar1) = iVar2;
        puVar12 = *(undefined4 **)(iVar8 + 0x18);
        *(undefined4 **)((int)register0x00000054 + DAT_004622a8 + iVar1) = puVar12;
        uVar3 = *(undefined4 *)(iVar2 + 0x40);
        uVar9 = *puVar12;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = DAT_00462290;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 8) = uVar3;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) = uVar9;
        FUN_00025164();
        piVar4 = *(int **)(*(int *)((int)register0x00000054 + DAT_004622a4 + iVar1) + 0x3c);
        iVar2 = *piVar4;
        iVar8 = piVar4[1];
        for (iVar11 = 0; iVar11 < iVar8; iVar11 = iVar11 + 1) {
          if (*(int *)(iVar2 + iVar11 * 8) ==
              **(int **)((int)register0x00000054 + DAT_004622a8 + iVar1)) {
            *(int **)((int)register0x00000054 + DAT_004622ac + iVar1) = piVar4;
            uVar7 = piVar4[2];
            uVar17 = iVar8 - 1;
            iVar5 = iVar8 - iVar11;
            iVar11 = iVar2 + ((int)(1 - (uVar7 - iVar11)) >> 0x1f & (iVar11 + 1) * 8);
            iVar15 = iVar5 + -1;
            if (uVar7 < uVar17) {
              *(int *)((int)register0x00000054 + DAT_0046226c + iVar1) = iVar15;
              *(int *)((int)register0x00000054 + DAT_004622b0 + iVar1) = iVar11;
              *(int *)((int)register0x00000054 + DAT_00462294 + iVar1) = iVar5;
              *(int *)((int)register0x00000054 + DAT_00462298 + iVar1) = iVar8;
              *(int *)((int)register0x00000054 + iVar1 + 4) = iVar2;
              *(uint *)((int)register0x00000054 + iVar1 + 8) = uVar17;
              *(uint *)((int)register0x00000054 + iVar1 + 0xc) = uVar7;
              *(int *)((int)register0x00000054 + iVar1 + 0x10) = iVar15;
              *(undefined4 *)((int)register0x00000054 + iVar1 + 0x14) = DAT_004622b4;
              FUN_000987f4();
              iVar2 = *(int *)((int)register0x00000054 + iVar1 + 0x18);
              uVar17 = *(uint *)((int)register0x00000054 + iVar1 + 0x1c);
              uVar7 = *(uint *)((int)register0x00000054 + iVar1 + 0x20);
              iVar8 = *(int *)((int)register0x00000054 + DAT_00462298 + iVar1);
              iVar11 = *(int *)((int)register0x00000054 + DAT_004622b0 + iVar1);
              iVar5 = *(int *)((int)register0x00000054 + DAT_00462294 + iVar1);
              iVar15 = *(int *)((int)register0x00000054 + DAT_0046226c + iVar1);
            }
            *(uint *)((int)register0x00000054 + DAT_0046226c + iVar1) = uVar7;
            *(uint *)((int)register0x00000054 + DAT_00462294 + iVar1) = uVar17;
            *(int *)((int)register0x00000054 + DAT_004622b0 + iVar1) = iVar2;
            *(int *)((int)register0x00000054 + iVar1 + 4) = iVar2 + (iVar8 - iVar5) * 8;
            *(int *)((int)register0x00000054 + iVar1 + 8) = iVar11;
            *(int *)((int)register0x00000054 + iVar1 + 0xc) = iVar15 << 3;
            FUN_0009e3a4();
            piVar4 = *(int **)((int)register0x00000054 + DAT_004622ac + iVar1);
            piVar4[1] = *(int *)((int)register0x00000054 + DAT_00462294 + iVar1);
            piVar4[2] = *(int *)((int)register0x00000054 + DAT_0046226c + iVar1);
            if (*DAT_004622a0 == 0) {
              iVar2 = *(int *)((int)register0x00000054 + DAT_004622b0 + iVar1);
            }
            else {
              FUN_0009db64();
              iVar2 = *(int *)((int)register0x00000054 + DAT_004622b0 + iVar1);
              *unaff_r8 = iVar2;
              unaff_r8[1] = *extraout_r1_01;
              piVar4 = extraout_r1_01;
            }
            *piVar4 = iVar2;
            break;
          }
        }
        if (*DAT_004622a0 == 0) {
          iVar2 = *(int *)((int)register0x00000054 + DAT_00462254 + iVar1);
        }
        else {
          uVar24 = FUN_0009db54(*(int *)((int)register0x00000054 + DAT_00462254 + iVar1),
                                *(undefined4 *)
                                 (*(int *)((int)register0x00000054 + DAT_00462254 + iVar1) + 0x18));
          iVar2 = (int)uVar24;
          *unaff_r8 = (int)((ulonglong)uVar24 >> 0x20);
        }
        *(undefined4 *)(iVar2 + 0x18) = 0;
      }
      *(undefined4 *)((int)register0x00000054 + DAT_00462240 + iVar1) = 0;
      *(undefined4 *)((int)register0x00000054 + DAT_00462244 + iVar1) = 0;
      return;
    }
  }
  *(undefined1 *)(iVar8 + 0x15) = 1;
  while( true ) {
    if ((int)uVar24 == 0) break;
    *(int *)((int)register0x00000054 + DAT_00462280 + iVar1) = (int)((ulonglong)uVar24 >> 0x20);
    *(uint *)((int)register0x00000054 + DAT_00462270 + iVar1) = uVar17;
    *(int *)((int)register0x00000054 + DAT_00462284 + iVar1) = (int)uVar24;
    *(undefined4 *)(iVar8 + 0x28) = 0;
    *(undefined4 *)(iVar8 + 0x2c) = 0;
    if (*DAT_004622a0 != 0) {
      FUN_0009db54();
      *unaff_r8 = extraout_r3_04;
    }
    *(undefined4 *)(iVar8 + 0x24) = 0;
    *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = *(undefined4 *)(iVar8 + 0xc);
    k3c_internal_pkg_reactor___ReactorMutex__Lock();
    *(undefined4 *)((int)register0x00000054 + iVar1 + 4) =
         *(undefined4 *)(*(int *)((int)register0x00000054 + DAT_00462254 + iVar1) + 4);
    *(undefined4 *)((int)register0x00000054 + iVar1 + 8) =
         *(undefined4 *)((int)register0x00000054 + DAT_00462284 + iVar1);
    *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) =
         *(undefined4 *)((int)register0x00000054 + DAT_00462270 + iVar1);
    *(undefined4 *)((int)register0x00000054 + iVar1 + 0x10) =
         *(undefined4 *)((int)register0x00000054 + DAT_00462280 + iVar1);
    *(undefined1 *)((int)register0x00000054 + iVar1 + 0x14) = 1;
    k3c_internal_pkg_gcode___GCodeDispatch__Process_commands();
    *(undefined4 *)((int)register0x00000054 + iVar1 + 4) =
         *(undefined4 *)(*(int *)((int)register0x00000054 + DAT_00462254 + iVar1) + 0xc);
    k3c_internal_pkg_reactor___ReactorMutex__Unlock();
    iVar8 = *(int *)((int)register0x00000054 + DAT_00462254 + iVar1);
    uVar17 = *(uint *)(iVar8 + 0x28);
    uVar24 = CONCAT44(*(undefined4 *)(iVar8 + 0x2c),*(undefined4 *)(iVar8 + 0x24));
  }
  *(undefined1 *)(iVar8 + 0x15) = 0;
  if (*(int *)(iVar8 + 0x18) == 0) {
    *(int *)((int)register0x00000054 + iVar1 + 4) = iVar8;
    k3c_internal_pkg_gcode___GCodeIO__resetFileHandle();
  }
  *(undefined4 *)((int)register0x00000054 + DAT_00462240 + iVar1) = 0;
  *(undefined4 *)((int)register0x00000054 + DAT_00462244 + iVar1) = 0;
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeIO).Respond_raw @ 00462490 (size 320) */

void k3c_internal_pkg_gcode___GCodeIO__Respond_raw(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  uint in_stack_0000000c;
  undefined4 local_3c;
  
  while (uVar2 = in_stack_0000000c, uVar1 = DAT_004625d4,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (*(char *)(in_stack_00000004 + 0x17) != '\0') {
    FUN_0007636c();
    FUN_00017ffc();
    if (((uVar1 & 0xff) != 0) || ((uint)-local_3c < uVar2)) {
      do {
        if (local_3c != 0) {
          FUN_0008a988();
        }
        FUN_0008aa14();
      } while( true );
    }
    FUN_0012d1d8();
    if (local_3c != 0) {
      k3c_internal_pkg_logger_Errorf();
      *(undefined1 *)(in_stack_00000004 + 0x17) = 0;
    }
  }
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeIO).Stats @ 004625dc (size 144) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode___GCodeIO__Stats(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x462668;
    FUN_0009bf64();
  }
  FUN_00020ce0();
  FUN_0013b72c();
  in_stack_00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x0046265c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.RegisterGCodeIO @ 00462678 (size 88) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode_RegisterGCodeIO(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4626cc;
    FUN_0009bf64();
  }
  k3c_internal_pkg_gcode_NewGCodeIO();
  k3c_internal_pkg_printer___Printer__Add_object();
                    /* WARNING: Could not recover jumptable at 0x004626c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.NewGCodeDispatch @ 004626dc (size 4660) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode_NewGCodeDispatch(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int extraout_r1;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *extraout_r1_00;
  undefined *extraout_r1_01;
  undefined *extraout_r1_02;
  undefined *extraout_r1_03;
  undefined *puVar6;
  undefined *extraout_r1_04;
  undefined *puVar7;
  int *extraout_r1_05;
  int *extraout_r1_06;
  int *extraout_r1_07;
  int *extraout_r1_08;
  int *extraout_r1_09;
  int *extraout_r1_10;
  int *extraout_r1_11;
  int *extraout_r1_12;
  int *extraout_r1_13;
  int *extraout_r1_14;
  int *extraout_r1_15;
  int *extraout_r1_16;
  undefined4 *puVar8;
  undefined *extraout_r2;
  undefined *extraout_r2_00;
  undefined *extraout_r2_01;
  undefined *extraout_r2_02;
  undefined *extraout_r2_03;
  int extraout_r2_04;
  int extraout_r2_05;
  int iVar9;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar10;
  int in_stack_00000004;
  int iStack_b4;
  int *piStack_b0;
  int *piStack_a8;
  undefined *puStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  int iStack_60;
  int aiStack_58 [7];
  undefined1 auStack_3c [20];
  undefined *puStack_28;
  undefined4 *puStack_24;
  undefined1 auStack_20 [28];
  int iStack_4;
  
  while (auStack_3c <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4639b8;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  if (*(int *)PTR_DAT_00462ecc != 0) {
    FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
    iStack_b4 = extraout_r1;
  }
  *(int *)(iStack_b4 + 0x10) = in_stack_00000004;
  puVar8 = *(undefined4 **)(in_stack_00000004 + 8);
  iStack_4 = iStack_b4;
  FUN_00025f60();
  if (*piStack_a8 == 0) {
    *(undefined1 *)(iStack_4 + 0x14) = 0;
  }
  else {
    *(undefined1 *)(iStack_4 + 0x14) = 1;
  }
  *(undefined1 *)(iStack_4 + 0x15) = 0;
  FUN_00022cf8();
  *puVar8 = PTR_k3c_internal_pkg_gcode___GCodeDispatch__CancelEvent_fm_00462edc;
  if (*(int *)PTR_DAT_00462ecc != 0) {
    puVar8 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = iStack_4;
  }
  puVar8[1] = iStack_4;
  puStack_24 = puVar8;
  FUN_00093560();
  iVar9 = piStack_a8[1];
  uVar1 = piStack_a8[2];
  puStack_28 = (undefined *)*piStack_a8;
  if ((char)puStack_a4 == '\0') {
    uVar1 = 0;
    iVar9 = 0;
    puStack_28 = PTR_DAT_00462ee8;
  }
  uVar4 = iVar9 + 1U;
  if (uVar1 < iVar9 + 1U) {
    piStack_a8 = (int *)PTR_DAT_00462eec;
    FUN_000987f4();
    uVar1 = uStack_9c;
    uVar4 = uStack_a0;
    puStack_28 = puStack_a4;
  }
  if (*(int *)PTR_DAT_00462ecc != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puStack_24;
    unaff_r8[1] = *(int *)(extraout_r2 + (uVar4 - 1) * 4);
    puStack_28 = extraout_r2;
  }
  *(undefined4 **)(puStack_28 + (uVar4 - 1) * 4) = puStack_24;
  puVar8 = *(undefined4 **)(in_stack_00000004 + 0x24);
  FUN_00093a08();
  piStack_a8[1] = uVar4;
  piStack_a8[2] = uVar1;
  piVar2 = piStack_a8;
  if (*(int *)PTR_DAT_00462ecc != 0) {
    piVar2 = (int *)FUN_0009db64();
    *unaff_r8 = (int)puStack_28;
    unaff_r8[1] = *piVar2;
  }
  *piVar2 = (int)puStack_28;
  FUN_00022cf8();
  *puVar8 = PTR_k3c_internal_pkg_gcode___GCodeDispatch__ResetCancelEvent_fm_00462ef0;
  if (*(int *)PTR_DAT_00462ecc != 0) {
    puVar8 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = iStack_4;
  }
  puVar8[1] = iStack_4;
  puStack_24 = puVar8;
  FUN_00093560();
  iVar9 = piStack_a8[1];
  uVar1 = piStack_a8[2];
  puVar7 = (undefined *)*piStack_a8;
  if ((char)puStack_a4 == '\0') {
    uVar1 = 0;
    iVar9 = 0;
    puVar7 = PTR_DAT_00462ee8;
  }
  uVar4 = iVar9 + 1U;
  if (uVar1 < iVar9 + 1U) {
    piStack_a8 = (int *)PTR_DAT_00462eec;
    FUN_000987f4();
    uVar1 = uStack_9c;
    uVar4 = uStack_a0;
    puVar7 = puStack_a4;
  }
  if (*(int *)PTR_DAT_00462ecc != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puStack_24;
    unaff_r8[1] = *(int *)(extraout_r2_00 + (uVar4 - 1) * 4);
    puVar7 = extraout_r2_00;
  }
  *(undefined4 **)(puVar7 + (uVar4 - 1) * 4) = puStack_24;
  puVar8 = *(undefined4 **)(in_stack_00000004 + 0x24);
  puStack_28 = puVar7;
  FUN_00093a08();
  piStack_a8[1] = uVar4;
  piStack_a8[2] = uVar1;
  piVar2 = piStack_a8;
  if (*(int *)PTR_DAT_00462ecc != 0) {
    piVar2 = (int *)FUN_0009db64();
    *unaff_r8 = (int)puStack_28;
    unaff_r8[1] = *piVar2;
  }
  *piVar2 = (int)puStack_28;
  FUN_00022cf8();
  *puVar8 = PTR_k3c_internal_pkg_gcode___GCodeDispatch__Handle_ready_fm_00462ef8;
  if (*(int *)PTR_DAT_00462ecc != 0) {
    puVar8 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = iStack_4;
  }
  puVar8[1] = iStack_4;
  puStack_24 = puVar8;
  FUN_00093560();
  iVar9 = piStack_a8[1];
  uVar1 = piStack_a8[2];
  puVar7 = (undefined *)*piStack_a8;
  if ((char)puStack_a4 == '\0') {
    uVar1 = 0;
    iVar9 = 0;
    puVar7 = PTR_DAT_00462ee8;
  }
  uVar4 = iVar9 + 1U;
  if (uVar1 < iVar9 + 1U) {
    piStack_a8 = (int *)PTR_DAT_00462eec;
    FUN_000987f4();
    uVar1 = uStack_9c;
    uVar4 = uStack_a0;
    puVar7 = puStack_a4;
  }
  if (*(int *)PTR_DAT_00462ecc != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puStack_24;
    unaff_r8[1] = *(int *)(extraout_r2_01 + (uVar4 - 1) * 4);
    puVar7 = extraout_r2_01;
  }
  *(undefined4 **)(puVar7 + (uVar4 - 1) * 4) = puStack_24;
  puVar8 = *(undefined4 **)(in_stack_00000004 + 0x24);
  puStack_28 = puVar7;
  FUN_00093a08();
  piStack_a8[1] = uVar4;
  piStack_a8[2] = uVar1;
  piVar2 = piStack_a8;
  if (*(int *)PTR_DAT_00462ecc != 0) {
    piVar2 = (int *)FUN_0009db64();
    *unaff_r8 = (int)puStack_28;
    unaff_r8[1] = *piVar2;
  }
  *piVar2 = (int)puStack_28;
  FUN_00022cf8();
  *puVar8 = PTR_k3c_internal_pkg_gcode___GCodeDispatch__Handle_shutdown_fm_00462f00;
  if (*(int *)PTR_DAT_00462ecc != 0) {
    puVar8 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = iStack_4;
  }
  puVar8[1] = iStack_4;
  puStack_24 = puVar8;
  FUN_00093560();
  iVar9 = piStack_a8[1];
  uVar1 = piStack_a8[2];
  puVar7 = (undefined *)*piStack_a8;
  if ((char)puStack_a4 == '\0') {
    uVar1 = 0;
    iVar9 = 0;
    puVar7 = PTR_DAT_00462ee8;
  }
  uVar4 = iVar9 + 1U;
  if (uVar1 < iVar9 + 1U) {
    piStack_a8 = (int *)PTR_DAT_00462eec;
    FUN_000987f4();
    uVar1 = uStack_9c;
    uVar4 = uStack_a0;
    puVar7 = puStack_a4;
  }
  if (*(int *)PTR_DAT_00462ecc != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puStack_24;
    unaff_r8[1] = *(int *)(extraout_r2_02 + (uVar4 - 1) * 4);
    puVar7 = extraout_r2_02;
  }
  *(undefined4 **)(puVar7 + (uVar4 - 1) * 4) = puStack_24;
  puVar8 = *(undefined4 **)(in_stack_00000004 + 0x24);
  puStack_28 = puVar7;
  FUN_00093a08();
  piStack_a8[1] = uVar4;
  piStack_a8[2] = uVar1;
  piVar2 = piStack_a8;
  if (*(int *)PTR_DAT_00462ecc != 0) {
    piVar2 = (int *)FUN_0009db64();
    *unaff_r8 = (int)puStack_28;
    unaff_r8[1] = *piVar2;
  }
  *piVar2 = (int)puStack_28;
  FUN_00022cf8();
  *puVar8 = PTR_k3c_internal_pkg_gcode___GCodeDispatch__Handle_disconnect_fm_00462f08;
  if (*(int *)PTR_DAT_00462ecc != 0) {
    puVar8 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = iStack_4;
  }
  puVar8[1] = iStack_4;
  puStack_24 = puVar8;
  FUN_00093560(puVar8);
  iVar9 = piStack_a8[1];
  uVar1 = piStack_a8[2];
  puVar7 = (undefined *)*piStack_a8;
  if ((char)puStack_a4 == '\0') {
    uVar1 = 0;
    iVar9 = 0;
    puVar7 = PTR_DAT_00462ee8;
  }
  uVar4 = iVar9 + 1U;
  if (uVar1 < iVar9 + 1U) {
    piStack_a8 = (int *)PTR_DAT_00462eec;
    FUN_000987f4();
    uVar1 = uStack_9c;
    uVar4 = uStack_a0;
    puVar7 = puStack_a4;
  }
  if (*(int *)PTR_DAT_00462ecc != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puStack_24;
    unaff_r8[1] = *(int *)(extraout_r2_03 + (uVar4 - 1) * 4);
    puVar7 = extraout_r2_03;
  }
  *(undefined4 **)(puVar7 + (uVar4 - 1) * 4) = puStack_24;
  puVar5 = *(undefined1 **)(in_stack_00000004 + 0x24);
  puStack_28 = puVar7;
  FUN_00093a08();
  piStack_a8[1] = uVar4;
  piStack_a8[2] = uVar1;
  piVar2 = piStack_a8;
  if (*(int *)PTR_DAT_00462ecc != 0) {
    piVar2 = (int *)FUN_0009db64();
    *unaff_r8 = (int)puStack_28;
    unaff_r8[1] = *piVar2;
  }
  *piVar2 = (int)puStack_28;
  *(undefined1 *)(iStack_4 + 0x44) = 0;
  puVar7 = PTR_DAT_00463728;
  iVar9 = *(int *)(in_stack_00000004 + 0xc);
  FUN_00022cf8(0);
  if (*(int *)PTR_DAT_0046372c != 0) {
    FUN_0009db54();
    *unaff_r8 = iVar9;
    puVar5 = extraout_r1_00;
  }
  *(int *)(puVar5 + 4) = iVar9;
  *puVar5 = 0;
  puVar5[8] = 0;
  lVar10 = ZEXT48(puVar5) << 0x20;
  *(undefined4 *)(puVar5 + 0x10) = 0;
  *(undefined4 *)(puVar5 + 0x14) = 0;
  *(undefined **)(puVar5 + 0xc) = PTR_DAT_00463730;
  if (*(int *)PTR_DAT_0046372c != 0) {
    lVar10 = FUN_0009db74();
    *unaff_r8 = (int)((ulonglong)lVar10 >> 0x20);
    unaff_r8[1] = *(int *)(iStack_4 + 0x18);
    unaff_r8[2] = *(int *)(iStack_4 + 0x1c);
  }
  *(int *)(iStack_4 + 0x18) = (int)((ulonglong)lVar10 >> 0x20);
  *(int *)(iStack_4 + 0x20) = (int)lVar10;
  *(int *)(iStack_4 + 0x24) = (int)lVar10;
  *(undefined **)(iStack_4 + 0x1c) = PTR_DAT_00463730;
  FUN_000908bc();
  puVar6 = puVar7;
  if (*(int *)PTR_DAT_0046372c != 0) {
    FUN_0009db74();
    *unaff_r8 = (int)extraout_r1_01;
    unaff_r8[1] = *(int *)(iStack_4 + 0x28);
    unaff_r8[2] = *(int *)(iStack_4 + 0x48);
    puVar6 = extraout_r1_01;
  }
  *(undefined **)(iStack_4 + 0x28) = puVar6;
  *(undefined **)(iStack_4 + 0x48) = puVar6;
  FUN_000908bc();
  puVar6 = puVar7;
  if (*(int *)PTR_DAT_0046372c != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)extraout_r1_02;
    unaff_r8[1] = *(int *)(iStack_4 + 0x2c);
    puVar6 = extraout_r1_02;
  }
  *(undefined **)(iStack_4 + 0x2c) = puVar6;
  FUN_000908bc();
  puVar6 = puVar7;
  if (*(int *)PTR_DAT_0046372c != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)extraout_r1_03;
    unaff_r8[1] = *(int *)(iStack_4 + 0x30);
    puVar6 = extraout_r1_03;
  }
  *(undefined **)(iStack_4 + 0x30) = puVar6;
  FUN_000908bc();
  if (*(int *)PTR_DAT_0046372c != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)extraout_r1_04;
    unaff_r8[1] = *(int *)(iStack_4 + 0x34);
    puVar7 = extraout_r1_04;
  }
  *(undefined **)(iStack_4 + 0x34) = puVar7;
  FUN_0009def8(0,auStack_20);
  FUN_0009090c();
  iStack_60 = 0x12;
  FUN_00022cf8();
  iVar9 = 10;
  _DAT_0000000a = PTR_k3c_internal_pkg_gcode___GCodeDispatch__Cmd_M110_fm_0046373c;
  if (*(int *)PTR_DAT_0046372c != 0) {
    FUN_0009db54();
    *unaff_r8 = iStack_4;
    iVar9 = extraout_r2_04;
  }
  *(int *)(iVar9 + 4) = iStack_4;
  puStack_24 = (undefined4 *)iVar9;
  FUN_00093a08();
  piVar2 = piStack_a8;
  if (*(int *)PTR_DAT_0046372c != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puStack_24;
    unaff_r8[1] = *extraout_r1_05;
    piVar2 = extraout_r1_05;
  }
  *piVar2 = (int)puStack_24;
  FUN_00022cf8();
  _DAT_00000012 = PTR_k3c_internal_pkg_gcode___GCodeDispatch__Cmd_M8844_fm_00463744;
  iVar9 = iStack_60;
  if (*(int *)PTR_DAT_0046372c != 0) {
    iVar9 = FUN_0009db54();
    *unaff_r8 = iStack_4;
  }
  *(int *)(iVar9 + 4) = iStack_4;
  puStack_24 = (undefined4 *)iVar9;
  FUN_00093a08();
  piVar2 = piStack_a8;
  if (*(int *)PTR_DAT_0046372c != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puStack_24;
    unaff_r8[1] = *extraout_r1_06;
    piVar2 = extraout_r1_06;
  }
  *piVar2 = (int)puStack_24;
  FUN_00022cf8();
  _DAT_00000012 = PTR_k3c_internal_pkg_gcode___GCodeDispatch__Cmd_M115_fm_0046374c;
  iVar9 = iStack_60;
  if (*(int *)PTR_DAT_0046372c != 0) {
    iVar9 = FUN_0009db54();
    *unaff_r8 = iStack_4;
  }
  *(int *)(iVar9 + 4) = iStack_4;
  puStack_24 = (undefined4 *)iVar9;
  FUN_00093a08();
  piVar2 = piStack_a8;
  if (*(int *)PTR_DAT_0046372c != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puStack_24;
    unaff_r8[1] = *extraout_r1_07;
    piVar2 = extraout_r1_07;
  }
  *piVar2 = (int)puStack_24;
  FUN_00022cf8();
  _DAT_00000012 = PTR_k3c_internal_pkg_gcode___GCodeDispatch__Cmd_M117_fm_00463754;
  iVar9 = iStack_60;
  if (*(int *)PTR_DAT_0046372c != 0) {
    iVar9 = FUN_0009db54();
    *unaff_r8 = iStack_4;
  }
  *(int *)(iVar9 + 4) = iStack_4;
  puStack_24 = (undefined4 *)iVar9;
  FUN_00093a08();
  piVar2 = piStack_a8;
  if (*(int *)PTR_DAT_0046372c != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puStack_24;
    unaff_r8[1] = *extraout_r1_08;
    piVar2 = extraout_r1_08;
  }
  *piVar2 = (int)puStack_24;
  FUN_00022cf8();
  _DAT_00000012 = PTR_k3c_internal_pkg_gcode___GCodeDispatch__Cmd_RESTART_fm_0046375c;
  iVar9 = iStack_60;
  if (*(int *)PTR_DAT_0046372c != 0) {
    iVar9 = FUN_0009db54();
    *unaff_r8 = iStack_4;
  }
  *(int *)(iVar9 + 4) = iStack_4;
  puStack_24 = (undefined4 *)iVar9;
  FUN_00093a08();
  piVar2 = piStack_a8;
  if (*(int *)PTR_DAT_0046372c != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puStack_24;
    unaff_r8[1] = *extraout_r1_09;
    piVar2 = extraout_r1_09;
  }
  *piVar2 = (int)puStack_24;
  FUN_00022cf8();
  _DAT_00000012 = PTR_k3c_internal_pkg_gcode___GCodeDispatch__Cmd_FIRMWARE_RESTART_fm_00463764;
  iVar9 = iStack_60;
  if (*(int *)PTR_DAT_0046372c != 0) {
    iVar9 = FUN_0009db54();
    *unaff_r8 = iStack_4;
  }
  *(int *)(iVar9 + 4) = iStack_4;
  puStack_24 = (undefined4 *)iVar9;
  FUN_00093a08();
  piVar2 = piStack_a8;
  if (*(int *)PTR_DAT_0046372c != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puStack_24;
    unaff_r8[1] = *extraout_r1_10;
    piVar2 = extraout_r1_10;
  }
  *piVar2 = (int)puStack_24;
  FUN_00022cf8();
  _DAT_00000012 = PTR_k3c_internal_pkg_gcode___GCodeDispatch__Cmd_ECHO_fm_0046376c;
  iVar9 = iStack_60;
  if (*(int *)PTR_DAT_0046372c != 0) {
    iVar9 = FUN_0009db54();
    *unaff_r8 = iStack_4;
  }
  *(int *)(iVar9 + 4) = iStack_4;
  puStack_24 = (undefined4 *)iVar9;
  FUN_00093a08();
  piVar2 = piStack_a8;
  if (*(int *)PTR_DAT_0046372c != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puStack_24;
    unaff_r8[1] = *extraout_r1_11;
    piVar2 = extraout_r1_11;
  }
  *piVar2 = (int)puStack_24;
  FUN_00022cf8();
  _DAT_00000012 = PTR_k3c_internal_pkg_gcode___GCodeDispatch__Cmd_STATUS_fm_00463774;
  iVar9 = iStack_60;
  if (*(int *)PTR_DAT_0046372c != 0) {
    iVar9 = FUN_0009db54();
    *unaff_r8 = iStack_4;
  }
  *(int *)(iVar9 + 4) = iStack_4;
  puStack_24 = (undefined4 *)iVar9;
  FUN_00093a08();
  piVar2 = piStack_a8;
  if (*(int *)PTR_DAT_0046372c != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puStack_24;
    unaff_r8[1] = *extraout_r1_12;
    piVar2 = extraout_r1_12;
  }
  *piVar2 = (int)puStack_24;
  FUN_00022cf8();
  _DAT_00000012 = PTR_k3c_internal_pkg_gcode___GCodeDispatch__Cmd_HELP_fm_0046377c;
  iVar9 = iStack_60;
  if (*(int *)PTR_DAT_0046372c != 0) {
    iVar9 = FUN_0009db54();
    *unaff_r8 = iStack_4;
  }
  *(int *)(iVar9 + 4) = iStack_4;
  puStack_24 = (undefined4 *)iVar9;
  FUN_00093a08();
  piVar2 = piStack_a8;
  if (*(int *)PTR_DAT_0046372c != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puStack_24;
    unaff_r8[1] = *extraout_r1_13;
    piVar2 = extraout_r1_13;
  }
  *piVar2 = (int)puStack_24;
  FUN_00022cf8();
  _DAT_00000012 = PTR_k3c_internal_pkg_gcode___GCodeDispatch__Cmd_FORCE_REBOOT_fm_00463784;
  if (*(int *)PTR_DAT_0046372c != 0) {
    iStack_60 = FUN_0009db54();
    *unaff_r8 = iStack_4;
  }
  *(int *)(iStack_60 + 4) = iStack_4;
  puStack_24 = (undefined4 *)iStack_60;
  FUN_00093a08();
  if (*(int *)PTR_DAT_0046372c != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)puStack_24;
    unaff_r8[1] = *extraout_r1_14;
    piStack_a8 = extraout_r1_14;
  }
  *piStack_a8 = (int)puStack_24;
  FUN_0009dee4(0,aiStack_58);
  piStack_b0 = aiStack_58;
  FUN_00091764();
  while (aiStack_58[0] != 0) {
    piStack_b0 = *(int **)(aiStack_58[0] + 4);
    FUN_000763e8();
    FUN_00025f60();
    k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
    FUN_000919c8();
  }
  FUN_003edf64();
  piVar2 = piStack_b0;
  if (*(int *)PTR_DAT_004639d8 != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)extraout_r1_15;
    unaff_r8[1] = *(int *)(iStack_4 + 0x3c);
    piVar2 = extraout_r1_15;
  }
  *(int **)(iStack_4 + 0x3c) = piVar2;
  FUN_003edf64();
  if (*(int *)PTR_DAT_004639d8 != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)extraout_r1_16;
    unaff_r8[1] = *(int *)(iStack_4 + 0x40);
    piStack_b0 = extraout_r1_16;
  }
  *(int **)(iStack_4 + 0x40) = piStack_b0;
  FUN_00022cf8();
  iVar3 = 0x5f;
  uRam00000063 = 1;
  _DAT_0000005f = PTR_DAT_004639e4;
  _DAT_0000006b = 1;
  puRam00000067 = PTR_DAT_004639e8;
  _DAT_00000073 = 1;
  _DAT_0000006f = PTR_DAT_004639ec;
  _DAT_0000007b = 1;
  _DAT_00000077 = PTR_DAT_004639f0;
  *(undefined4 *)(iStack_4 + 8) = 4;
  *(undefined4 *)(iStack_4 + 0xc) = 4;
  iVar9 = iStack_4;
  if (*(int *)PTR_DAT_004639d8 != 0) {
    iVar3 = FUN_0009db64();
    *unaff_r8 = iVar3;
    unaff_r8[1] = *(int *)(extraout_r2_05 + 4);
    iVar9 = extraout_r2_05;
  }
  *(int *)(iVar9 + 4) = iVar3;
                    /* WARNING: Could not recover jumptable at 0x004639ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).CancelEvent @ 004639f4 (size 32) */

void k3c_internal_pkg_gcode___GCodeDispatch__CancelEvent(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  
  *(undefined1 *)(in_stack_00000004 + 0x15) = 1;
  uStack00000014 = 0;
  uStack00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x00463a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).GetCancelFlag @ 00463a14 (size 16) */

void k3c_internal_pkg_gcode___GCodeDispatch__GetCancelFlag(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(in_stack_00000004 + 0x15);
                    /* WARNING: Could not recover jumptable at 0x00463a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).ResetCancelEvent @ 00463a24 (size 32) */

void k3c_internal_pkg_gcode___GCodeDispatch__ResetCancelEvent(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  
  *(undefined1 *)(in_stack_00000004 + 0x15) = 0;
  uStack00000014 = 0;
  uStack00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x00463a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.Is_traditional_gcode @ 00463a44 (size 368) */

void k3c_internal_pkg_gcode_Is_traditional_gcode(undefined4 param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  undefined1 uVar5;
  char cVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      if (*(int *)((int)register0x00000054 + 8) == 0) {
        *(undefined1 *)((int)register0x00000054 + 0xc) = 0;
                    /* WARNING: Could not recover jumptable at 0x00463b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x30))();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x28) = *(int *)((int)register0x00000054 + 8);
      FUN_0015086c();
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_00463bb8;
      *(undefined4 *)((int)register0x00000054 + -0x20) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 0xffffffff;
      FUN_0014f168();
      uVar5 = *(int *)((int)register0x00000054 + -0x10) == 0;
      if (!(bool)uVar5) {
        uVar1 = (*(undefined4 **)((int)register0x00000054 + -0x14))[1];
        pbVar2 = (byte *)**(undefined4 **)((int)register0x00000054 + -0x14);
        if ((int)uVar1 < 2) {
          cVar6 = '\0';
        }
        else {
          uVar3 = (uint)*pbVar2;
          if (uVar3 < 0x100) {
            cVar6 = (*(byte *)(DAT_00463bbc + uVar3) & 0x60) == 0x20;
          }
          else {
            *(byte **)((int)register0x00000054 + -4) = pbVar2;
            *(uint *)((int)register0x00000054 + -8) = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x2c) = *DAT_00463bc0;
            *(uint *)((int)register0x00000054 + -0x28) = uVar3;
            FUN_000c4ff0();
            cVar6 = *(char *)((int)register0x00000054 + -0x24);
            uVar1 = *(uint *)((int)register0x00000054 + -8);
            pbVar2 = *(byte **)((int)register0x00000054 + -4);
          }
        }
        if (cVar6 == '\0') {
          uVar5 = 0;
LAB_00463b7c:
          *(undefined1 *)((int)register0x00000054 + 0xc) = uVar5;
          return;
        }
        uVar5 = uVar1 == 1;
        if (1 < uVar1) {
          uVar1 = (uint)pbVar2[1];
          if (uVar1 < 0x100) {
            if (uVar1 < 0x30) {
              uVar5 = 0;
            }
            else {
              uVar5 = uVar1 < 0x3a;
            }
          }
          else {
            *(undefined4 *)((int)register0x00000054 + -0x2c) = *DAT_00463bc4;
            *(uint *)((int)register0x00000054 + -0x28) = uVar1;
            FUN_000c4ff0();
            uVar5 = *(undefined1 *)((int)register0x00000054 + -0x24);
          }
          goto LAB_00463b7c;
        }
        FUN_0009dbd4(1);
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if ((bool)uVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x463bb0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Register_command @ 00463bc8 (size 1144) */

void k3c_internal_pkg_gcode___GCodeDispatch__Register_command(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      if (*(int *)((int)register0x00000054 + 0x10) == 0) {
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00464044;
        *(undefined4 *)((int)register0x00000054 + -0x28) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00025f60();
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             **(undefined4 **)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00464044;
        *(undefined4 *)((int)register0x00000054 + -0x28) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00025f60();
        if (**(int **)((int)register0x00000054 + -0x1c) != 0) {
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00464044;
          *(undefined4 *)((int)register0x00000054 + -0x28) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_000263c8();
        }
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28);
        *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00464044;
        *(undefined4 *)((int)register0x00000054 + -0x28) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00025f60();
        if (**(int **)((int)register0x00000054 + -0x1c) != 0) {
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28);
          *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00464044;
          *(undefined4 *)((int)register0x00000054 + -0x28) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_000263c8();
        }
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        return;
      }
      uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00464044;
      *(undefined4 *)((int)register0x00000054 + -0x28) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093560();
      uVar9 = *(char *)((int)register0x00000054 + -0x18) == '\0';
      if ((bool)uVar9) {
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        k3c_internal_pkg_gcode_Is_traditional_gcode();
        if (*(char *)((int)register0x00000054 + -0x24) == '\0') {
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -8) = DAT_00464048;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_0046404c;
          *(undefined4 *)((int)register0x00000054 + -0x28) = 0x24;
          *(undefined1 **)((int)register0x00000054 + -0x24) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x20) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x1c) = 1;
          k3c_internal_pkg_logger_Debugf();
          *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00464050;
          FUN_00022cf8();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x28);
          *puVar1 = DAT_00464054;
          if (*DAT_00464058 == 0) {
            iVar4 = *(int *)((int)register0x00000054 + 4);
            iVar5 = *(int *)((int)register0x00000054 + 0x10);
            iVar6 = *(int *)((int)register0x00000054 + 8);
          }
          else {
            puVar1 = (undefined4 *)FUN_0009db74();
            iVar4 = *(int *)((int)register0x00000054 + 4);
            *unaff_r8 = iVar4;
            iVar5 = *(int *)((int)register0x00000054 + 0x10);
            unaff_r8[1] = iVar5;
            iVar6 = *(int *)((int)register0x00000054 + 8);
            unaff_r8[2] = iVar6;
          }
          puVar1[1] = iVar4;
          puVar1[2] = iVar5;
          uVar3 = *(undefined4 *)((int)register0x00000054 + 0xc);
          puVar1[4] = uVar3;
          puVar1[3] = iVar6;
        }
        else {
          iVar4 = *(int *)((int)register0x00000054 + 4);
          uVar3 = *(undefined4 *)((int)register0x00000054 + 0xc);
          iVar6 = *(int *)((int)register0x00000054 + 8);
          puVar1 = *(undefined4 **)((int)register0x00000054 + 0x10);
        }
        *(undefined4 **)((int)register0x00000054 + -0xc) = puVar1;
        uVar7 = *(undefined4 *)(iVar4 + 0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00464044;
        *(undefined4 *)((int)register0x00000054 + -0x28) = uVar7;
        *(int *)((int)register0x00000054 + -0x24) = iVar6;
        *(undefined4 *)((int)register0x00000054 + -0x20) = uVar3;
        FUN_00093a08();
        piVar2 = *(int **)((int)register0x00000054 + -0x1c);
        if (*DAT_00464058 == 0) {
          iVar4 = *(int *)((int)register0x00000054 + -0xc);
        }
        else {
          piVar2 = (int *)FUN_0009db64();
          iVar4 = *(int *)((int)register0x00000054 + -0xc);
          *unaff_r8 = iVar4;
          unaff_r8[1] = *piVar2;
        }
        *piVar2 = iVar4;
        if (*(char *)((int)register0x00000054 + 0x14) != '\0') {
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28);
          *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00464044;
          *(undefined4 *)((int)register0x00000054 + -0x28) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093a08();
          piVar2 = *(int **)((int)register0x00000054 + -0x1c);
          if (*DAT_00464058 == 0) {
            iVar4 = *(int *)((int)register0x00000054 + -0xc);
          }
          else {
            piVar2 = (int *)FUN_0009db64();
            iVar4 = *(int *)((int)register0x00000054 + -0xc);
            *unaff_r8 = iVar4;
            unaff_r8[1] = *piVar2;
          }
          *piVar2 = iVar4;
        }
        if (*(int *)((int)register0x00000054 + 0x1c) != 0) {
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x34);
          *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_0046405c;
          *(undefined4 *)((int)register0x00000054 + -0x28) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093a08();
          piVar2 = *(int **)((int)register0x00000054 + -0x1c);
          piVar2[1] = *(int *)((int)register0x00000054 + 0x1c);
          if (*DAT_00464058 == 0) {
            iVar4 = *(int *)((int)register0x00000054 + 0x18);
          }
          else {
            piVar2 = (int *)FUN_0009db64();
            iVar4 = *(int *)((int)register0x00000054 + 0x18);
            *unaff_r8 = iVar4;
            unaff_r8[1] = *piVar2;
          }
          *piVar2 = iVar4;
        }
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_00464048;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00464060;
        *(undefined4 *)((int)register0x00000054 + -0x28) = 0x29;
        *(undefined1 **)((int)register0x00000054 + -0x24) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x20) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 1;
        k3c_internal_pkg_logger_Debugf();
        *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_00464048;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00464064;
      *(undefined4 *)((int)register0x00000054 + -0x28) = 0x23;
      *(undefined1 **)((int)register0x00000054 + -0x24) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x20) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = 1;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00464048;
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x46403c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Register_command.func1 @ 00464068 (size 476) */

void k3c_internal_pkg_gcode___GCodeDispatch__Register_command_func1(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_r7;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_c;
  int iStack_8;
  
  while (iVar1 = in_stack_00000004, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  puVar2 = *(undefined4 **)(unaff_r7 + 8);
  k3c_internal_pkg_gcode___GCodeDispatch__Get_extended_params();
  (*(code *)*puVar2)();
  if (iVar1 == 0) {
    return;
  }
  FUN_0042debc();
  FUN_0009deec(0,&uStack_2c);
  uStack_2c = DAT_00464248;
  uStack_28 = DAT_0046424c;
  FUN_0008f77c();
  uStack_24 = DAT_00464248;
  uStack_1c = DAT_00464248;
  uStack_18 = DAT_00464250;
  uStack_14 = 0;
  if (iVar1 != 0) {
    uStack_14 = *(undefined4 *)(iVar1 + 4);
  }
  do {
    FUN_00099104();
    FUN_0008f77c();
    uStack_c = DAT_00464248;
    iStack_8 = iVar1;
    k3c_internal_pkg_logger_Error();
    k3c_internal_pkg_printer___Printer__Send_event();
    (**(code **)(iVar1 + 0xc))();
    k3c_internal_pkg_gcode___GCodeDispatch__Respond_error();
    uStack_14 = FUN_00095b00();
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).RunGcode @ 00464258 (size 132) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode___GCodeDispatch__RunGcode
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  undefined8 uVar5;
  
  do {
    uVar5 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 4);
      uVar4 = *(char *)(iVar1 + 0x15) == '\0';
      if ((bool)uVar4) {
        *(int *)((int)register0x00000054 + -0xc) = iVar1;
        *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)((int)register0x00000054 + 8)
        ;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
                    /* WARNING: Could not recover jumptable at 0x00464290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      *(undefined1 *)(iVar1 + 0x15) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xc) = _UNK_004642e0;
      FUN_00022cf8();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -8);
      puVar2[1] = 0x18;
      *puVar2 = _UNK_004642e4;
      *(undefined4 *)((int)register0x00000054 + -0xc) = _UNK_004642e8;
      *(undefined4 **)((int)register0x00000054 + -8) = puVar2;
      unaff_lr = 0x4642cc;
      uVar5 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      param_3 = extraout_r2;
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    param_1 = FUN_0009bf64((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x4642d8;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Register_mux_command @ 004642ec (size 1956) */

void k3c_internal_pkg_gcode___GCodeDispatch__Register_mux_command(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *extraout_r1;
  int *piVar3;
  int *piVar4;
  int *extraout_r2;
  int extraout_r2_00;
  int *extraout_r2_01;
  int extraout_r2_02;
  undefined4 uVar5;
  int iVar6;
  undefined *extraout_r2_03;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  undefined1 uVar12;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x18)) {
      puVar11 = (undefined1 *)((int)register0x00000054 + -0x98);
      *(undefined4 *)((int)register0x00000054 + -0x98) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_00464a94;
      FUN_00022cf8();
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + -0x90);
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
      uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x30);
      *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_00464a98;
      *(undefined4 *)((int)register0x00000054 + -0x90) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x88) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093560();
      *(undefined1 *)((int)register0x00000054 + -0x71) =
           *(undefined1 *)((int)register0x00000054 + -0x80);
      uVar8 = FUN_0009e2e8(*(undefined1 *)((int)register0x00000054 + -0x80),
                           *(undefined4 *)((int)register0x00000054 + -0x84),
                           (undefined1 *)((int)register0x00000054 + -0x18));
      FUN_0009e2e8(uVar8,(undefined1 *)((int)register0x00000054 + -0x18),
                   (undefined1 *)((int)register0x00000054 + -0x50));
      uVar8 = 0;
      if (*(int *)PTR_DAT_00464a9c != 0) {
        *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_00464a94;
        *(undefined4 *)((int)register0x00000054 + -0x90) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        *(undefined1 **)((int)register0x00000054 + -0x8c) =
             (undefined1 *)((int)register0x00000054 + -0x50);
        uVar8 = FUN_00026c00();
      }
      FUN_0009e2e8(uVar8,(undefined1 *)((int)register0x00000054 + -0x50),
                   *(undefined4 *)((int)register0x00000054 + -0x68));
      if (*(char *)((int)register0x00000054 + -0x71) == '\0') {
        piVar3 = *(int **)((int)register0x00000054 + -0x68);
        if (piVar3[5] < 1) {
          *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_00464aa0;
          FUN_00022cf8();
          puVar10 = *(undefined4 **)((int)register0x00000054 + -0x90);
          *puVar10 = PTR_k3c_internal_pkg_gcode___GCodeDispatch__Register_mux_command_func1_00464aa4
          ;
          if (*(int *)PTR_DAT_00464a9c == 0) {
            iVar9 = *(int *)((int)register0x00000054 + 4);
            iVar6 = *(int *)((int)register0x00000054 + 8);
          }
          else {
            puVar10 = (undefined4 *)FUN_0009db64();
            iVar9 = *(int *)((int)register0x00000054 + 4);
            *unaff_r8 = iVar9;
            iVar6 = *(int *)((int)register0x00000054 + 8);
            unaff_r8[1] = iVar6;
          }
          puVar10[1] = iVar9;
          uVar8 = *(undefined4 *)((int)register0x00000054 + 0xc);
          puVar10[3] = uVar8;
          puVar10[2] = iVar6;
          *(int *)((int)register0x00000054 + -0x94) = iVar9;
          *(int *)((int)register0x00000054 + -0x90) = iVar6;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar8;
          *(undefined4 **)((int)register0x00000054 + -0x88) = puVar10;
          *(undefined1 *)((int)register0x00000054 + -0x84) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + 0x24);
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + 0x28);
          k3c_internal_pkg_gcode___GCodeDispatch__Register_command();
          *(undefined4 *)((int)register0x00000054 + -0x94) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + 0x14);
          FUN_0008f77c();
          piVar3 = *(int **)((int)register0x00000054 + -0x68);
          iVar9 = *piVar3;
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + -0x8c);
          if (iVar9 == 0) {
            if (*(int *)PTR_DAT_00464a9c != 0) {
              piVar3 = (int *)FUN_0009db74();
              *unaff_r8 = (int)piVar3;
              unaff_r8[1] = *piVar3;
              unaff_r8[2] = piVar3[1];
            }
            *piVar3 = (int)piVar3;
            piVar3[1] = (int)piVar3;
            piVar3[5] = 0;
          }
          *(int *)((int)register0x00000054 + -0x60) = piVar3[1];
          *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_00464aa8;
          FUN_00022cf8();
          piVar3 = *(int **)((int)register0x00000054 + -0x90);
          piVar3[3] = (int)PTR_DAT_00464aac;
          if (*(int *)PTR_DAT_00464a9c == 0) {
            iVar9 = *(int *)((int)register0x00000054 + -0x54);
          }
          else {
            piVar3 = (int *)FUN_0009db54();
            iVar9 = *(int *)((int)register0x00000054 + -0x54);
            *unaff_r8 = iVar9;
          }
          piVar3[4] = iVar9;
          if (*(int *)PTR_DAT_00464a9c == 0) {
            piVar4 = *(int **)((int)register0x00000054 + -0x60);
          }
          else {
            piVar3 = (int *)FUN_0009db54();
            piVar4 = *(int **)((int)register0x00000054 + -0x60);
            *unaff_r8 = (int)piVar4;
          }
          piVar3[1] = (int)piVar4;
          iVar9 = *piVar4;
          if (*(int *)PTR_DAT_00464a9c != 0) {
            piVar3 = (int *)FUN_0009db74();
            *unaff_r8 = iVar9;
            unaff_r8[1] = (int)piVar3;
            unaff_r8[2] = *extraout_r2;
            piVar4 = extraout_r2;
          }
          *piVar3 = iVar9;
          *piVar4 = (int)piVar3;
          iVar9 = *piVar3;
          if (*(int *)PTR_DAT_00464a9c == 0) {
            iVar6 = *(int *)((int)register0x00000054 + -0x68);
          }
          else {
            piVar3 = (int *)FUN_0009db84();
            *unaff_r8 = (int)piVar3;
            unaff_r8[1] = *(int *)(extraout_r2_00 + 4);
            iVar6 = *(int *)((int)register0x00000054 + -0x68);
            unaff_r8[2] = iVar6;
            unaff_r8[3] = piVar3[2];
            iVar9 = extraout_r2_00;
          }
          *(int **)(iVar9 + 4) = piVar3;
          piVar3[2] = iVar6;
          *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
          FUN_000908bc();
          piVar3 = *(int **)((int)register0x00000054 + -0x68);
          iVar9 = *piVar3;
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          if (iVar9 == 0) {
            if (*(int *)PTR_DAT_00464a9c != 0) {
              piVar3 = (int *)FUN_0009db74();
              *unaff_r8 = (int)piVar3;
              unaff_r8[1] = *piVar3;
              unaff_r8[2] = piVar3[1];
            }
            *piVar3 = (int)piVar3;
            piVar3[1] = (int)piVar3;
            piVar3[5] = 0;
          }
          *(int *)((int)register0x00000054 + -100) = piVar3[1];
          *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_00464aa8;
          FUN_00022cf8();
          piVar3 = *(int **)((int)register0x00000054 + -0x90);
          piVar3[3] = (int)PTR_DAT_00464ab0;
          if (*(int *)PTR_DAT_00464a9c == 0) {
            iVar9 = *(int *)((int)register0x00000054 + -0x58);
          }
          else {
            piVar3 = (int *)FUN_0009db54();
            iVar9 = *(int *)((int)register0x00000054 + -0x58);
            *unaff_r8 = iVar9;
          }
          piVar3[4] = iVar9;
          if (*(int *)PTR_DAT_00464a9c == 0) {
            piVar4 = *(int **)((int)register0x00000054 + -100);
          }
          else {
            piVar3 = (int *)FUN_0009db54();
            piVar4 = *(int **)((int)register0x00000054 + -100);
            *unaff_r8 = (int)piVar4;
          }
          piVar3[1] = (int)piVar4;
          iVar9 = *piVar4;
          if (*(int *)PTR_DAT_00464a9c != 0) {
            piVar3 = (int *)FUN_0009db74();
            *unaff_r8 = iVar9;
            unaff_r8[1] = (int)piVar3;
            unaff_r8[2] = *extraout_r2_01;
            piVar4 = extraout_r2_01;
          }
          *piVar3 = iVar9;
          *piVar4 = (int)piVar3;
          iVar9 = *piVar3;
          if (*(int *)PTR_DAT_00464a9c == 0) {
            iVar6 = *(int *)((int)register0x00000054 + -0x68);
          }
          else {
            piVar3 = (int *)FUN_0009db84();
            *unaff_r8 = (int)piVar3;
            unaff_r8[1] = *(int *)(extraout_r2_02 + 4);
            iVar6 = *(int *)((int)register0x00000054 + -0x68);
            unaff_r8[2] = iVar6;
            unaff_r8[3] = piVar3[2];
            iVar9 = extraout_r2_02;
          }
          *(int **)(iVar9 + 4) = piVar3;
          piVar3[2] = iVar6;
          *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
          uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x30);
          *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_00464a98;
          *(undefined4 *)((int)register0x00000054 + -0x90) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093a08();
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x84);
          uVar8 = 0;
          if (*(int *)PTR_DAT_00464a9c != 0) {
            *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar5;
            *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_00464a94;
            *(undefined4 *)((int)register0x00000054 + -0x90) = uVar5;
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + -0x68);
            uVar8 = FUN_00026c00();
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x5c);
          }
          FUN_0009e2e8(uVar8,*(undefined4 *)((int)register0x00000054 + -0x68),uVar5);
          piVar3 = *(int **)((int)register0x00000054 + -0x68);
        }
      }
      else {
        piVar3 = *(int **)((int)register0x00000054 + -0x68);
      }
      puVar1 = PTR_DAT_00464aac;
      if (piVar3[5] == 0) {
        iVar9 = 0;
        iVar6 = 0;
      }
      else {
        iVar9 = *piVar3;
        iVar6 = piVar3[1];
      }
      puVar10 = *(undefined4 **)(iVar9 + 0xc);
      uVar12 = 0;
      if (puVar10 == (undefined4 *)PTR_DAT_00464aac) {
        *(int *)((int)register0x00000054 + -0x6c) = iVar9;
        puVar10 = *(undefined4 **)(iVar9 + 0x10);
        iVar9 = puVar10[1];
        uVar12 = 0;
        if (*(int *)((int)register0x00000054 + 0x14) == iVar9) {
          *(int *)((int)register0x00000054 + -0x70) = iVar6;
          *(undefined4 *)((int)register0x00000054 + -0x94) = *puVar10;
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(int *)((int)register0x00000054 + -0x8c) = iVar9;
          FUN_00018250();
          uVar12 = *(char *)((int)register0x00000054 + -0x88) == '\0';
          if (!(bool)uVar12) {
            puVar2 = *(undefined **)(*(int *)((int)register0x00000054 + -0x70) + 0xc);
            uVar12 = 0;
            puVar7 = PTR_DAT_00464ab0;
            if (puVar2 == PTR_DAT_00464ab0) {
              uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x70) + 0x10);
              *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_00464ab0;
              *(undefined4 *)((int)register0x00000054 + -0x90) = uVar8;
              *(undefined4 *)((int)register0x00000054 + -0x8c) =
                   *(undefined4 *)((int)register0x00000054 + 0x18);
              *(undefined4 *)((int)register0x00000054 + -0x88) =
                   *(undefined4 *)((int)register0x00000054 + 0x1c);
              FUN_00025f60();
              uVar12 = 0;
              if (**(int **)((int)register0x00000054 + -0x84) == 0) {
                puVar2 = *(undefined **)(*(int *)((int)register0x00000054 + -0x70) + 0xc);
                uVar12 = puVar2 == PTR_DAT_00464ab0;
                if ((bool)uVar12) {
                  uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x70) + 0x10);
                  *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_00464ab0;
                  *(undefined4 *)((int)register0x00000054 + -0x90) = uVar8;
                  *(undefined4 *)((int)register0x00000054 + -0x8c) =
                       *(undefined4 *)((int)register0x00000054 + 0x18);
                  *(undefined4 *)((int)register0x00000054 + -0x88) =
                       *(undefined4 *)((int)register0x00000054 + 0x1c);
                  FUN_00093a08();
                  puVar10 = *(undefined4 **)((int)register0x00000054 + -0x84);
                  *puVar10 = PTR_DAT_00464ab4;
                  if (*(int *)PTR_DAT_00464a9c == 0) {
                    iVar9 = *(int *)((int)register0x00000054 + 0x20);
                  }
                  else {
                    puVar10 = (undefined4 *)FUN_0009db64();
                    iVar9 = *(int *)((int)register0x00000054 + 0x20);
                    *unaff_r8 = iVar9;
                    unaff_r8[1] = puVar10[1];
                  }
                  puVar10[1] = iVar9;
                  return;
                }
                *(undefined **)((int)register0x00000054 + -0x94) = puVar2;
                *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_00464ab0;
                *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_00464ab8;
                FUN_000209b4();
              }
              FUN_0009def4(0,(undefined1 *)((int)register0x00000054 + -0x38));
              *(undefined4 *)((int)register0x00000054 + -0x94) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x90) =
                   *(undefined4 *)((int)register0x00000054 + 0xc);
              FUN_0008f77c();
              *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_00464aac;
              *(undefined4 *)((int)register0x00000054 + -0x34) =
                   *(undefined4 *)((int)register0x00000054 + -0x8c);
              *(undefined4 *)((int)register0x00000054 + -0x94) =
                   *(undefined4 *)((int)register0x00000054 + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x90) =
                   *(undefined4 *)((int)register0x00000054 + 0x14);
              FUN_0008f77c();
              *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_00464aac;
              *(undefined4 *)((int)register0x00000054 + -0x2c) =
                   *(undefined4 *)((int)register0x00000054 + -0x8c);
              *(undefined4 *)((int)register0x00000054 + -0x94) =
                   *(undefined4 *)((int)register0x00000054 + 0x18);
              *(undefined4 *)((int)register0x00000054 + -0x90) =
                   *(undefined4 *)((int)register0x00000054 + 0x1c);
              FUN_0008f77c();
              *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_00464aac;
              *(undefined4 *)((int)register0x00000054 + -0x24) =
                   *(undefined4 *)((int)register0x00000054 + -0x8c);
              *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00464abc;
              *(undefined4 *)((int)register0x00000054 + -0x1c) =
                   *(undefined4 *)((int)register0x00000054 + -0x70);
              *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_00464ac0;
              *(undefined4 *)((int)register0x00000054 + -0x90) = 0x2d;
              *(undefined1 **)((int)register0x00000054 + -0x8c) =
                   (undefined1 *)((int)register0x00000054 + -0x38);
              *(undefined4 *)((int)register0x00000054 + -0x88) = 4;
              *(undefined4 *)((int)register0x00000054 + -0x84) = 4;
              FUN_0013b72c();
              *(undefined4 *)((int)register0x00000054 + -0x94) =
                   *(undefined4 *)((int)register0x00000054 + -0x80);
              *(undefined4 *)((int)register0x00000054 + -0x90) =
                   *(undefined4 *)((int)register0x00000054 + -0x7c);
              FUN_0008f77c();
              *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_00464aac;
              *(undefined4 *)((int)register0x00000054 + -0x90) =
                   *(undefined4 *)((int)register0x00000054 + -0x8c);
              FUN_00095b00();
              puVar2 = extraout_r1;
              puVar7 = extraout_r2_03;
            }
            *(undefined **)((int)register0x00000054 + -0x94) = puVar2;
            *(undefined **)((int)register0x00000054 + -0x90) = puVar7;
            *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_00464ab8;
            FUN_000209b4();
          }
        }
        FUN_0009def4(0,(undefined1 *)((int)register0x00000054 + -0x38));
        *(undefined4 *)((int)register0x00000054 + -0x94) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x90) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_00464aac;
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x8c);
        *(undefined4 *)((int)register0x00000054 + -0x94) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x90) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_00464aac;
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0x8c);
        *(undefined4 *)((int)register0x00000054 + -0x94) =
             *(undefined4 *)((int)register0x00000054 + 0x18);
        *(undefined4 *)((int)register0x00000054 + -0x90) =
             *(undefined4 *)((int)register0x00000054 + 0x1c);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_00464aac;
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x8c);
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00464abc;
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x6c);
        *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_00464ac4;
        *(undefined4 *)((int)register0x00000054 + -0x90) = 0x30;
        *(undefined1 **)((int)register0x00000054 + -0x8c) =
             (undefined1 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -0x88) = 4;
        *(undefined4 *)((int)register0x00000054 + -0x84) = 4;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x94) =
             *(undefined4 *)((int)register0x00000054 + -0x80);
        *(undefined4 *)((int)register0x00000054 + -0x90) =
             *(undefined4 *)((int)register0x00000054 + -0x7c);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_00464aac;
        *(undefined4 *)((int)register0x00000054 + -0x90) =
             *(undefined4 *)((int)register0x00000054 + -0x8c);
        FUN_00095b00();
      }
      *(undefined4 **)((int)register0x00000054 + -0x94) = puVar10;
      *(undefined **)((int)register0x00000054 + -0x90) = puVar1;
      *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_00464ab8;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x98);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar11;
      }
    }
    unaff_lr = 0x464a8c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Register_mux_command.func1 @ 00464ac8 (size 84) */

void k3c_internal_pkg_gcode___GCodeDispatch__Register_mux_command_func1(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  k3c_internal_pkg_gcode___GCodeDispatch__Cmd_mux();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Get_command_help @ 00464b1c (size 16) */

void k3c_internal_pkg_gcode___GCodeDispatch__Get_command_help(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x34);
                    /* WARNING: Could not recover jumptable at 0x00464b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Register_output_handler @ 00464b2c (size 212) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode___GCodeDispatch__Register_output_handler(void)

{
  int extraout_r1;
  int iVar1;
  int extraout_r1_00;
  uint uVar2;
  uint extraout_r2;
  int extraout_r3;
  int extraout_r3_00;
  int iVar3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  int in_stack_00000008;
  int iStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x464bfc;
    FUN_0009bf64();
  }
  uVar2 = *(int *)(in_stack_00000004 + 0x20) + 1;
  iVar1 = in_stack_00000004;
  iVar3 = *(int *)(in_stack_00000004 + 0x1c);
  if (*(uint *)(in_stack_00000004 + 0x24) < uVar2) {
    FUN_000987f4();
    *(undefined4 *)(in_stack_00000004 + 0x24) = uStack_8;
    iVar1 = in_stack_00000004;
    if (*_UNK_00464c08 != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(int *)(extraout_r3 + 0x1c);
      iStack_10 = extraout_r1;
      uStack_c = extraout_r2;
      iVar1 = extraout_r3;
    }
    *(int *)(iVar1 + 0x1c) = iStack_10;
    uVar2 = uStack_c;
    iVar3 = iStack_10;
  }
  *(uint *)(iVar1 + 0x20) = uVar2;
  iVar1 = uVar2 - 1;
  if (*_UNK_00464c08 != 0) {
    FUN_0009db64();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = *(int *)(extraout_r3_00 + extraout_r1_00 * 4);
    iVar1 = extraout_r1_00;
    iVar3 = extraout_r3_00;
  }
  *(int *)(iVar3 + iVar1 * 4) = in_stack_00000008;
                    /* WARNING: Could not recover jumptable at 0x00464bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Handle_shutdown @ 00464c0c (size 156) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode___GCodeDispatch__Handle_shutdown(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x464ca4;
    FUN_0009bf64();
  }
  if (*(char *)(in_stack_00000004 + 0x44) != '\0') {
    *(undefined1 *)(in_stack_00000004 + 0x44) = 0;
    uVar2 = *(undefined4 *)(in_stack_00000004 + 0x28);
    iVar1 = in_stack_00000004;
    if (*_UNK_00464cac != 0) {
      iVar1 = FUN_0009db64();
      *unaff_r8 = extraout_r2;
      unaff_r8[1] = *(undefined4 *)(iVar1 + 0x48);
      uVar2 = extraout_r2;
    }
    *(undefined4 *)(iVar1 + 0x48) = uVar2;
    k3c_internal_pkg_gcode___GCodeDispatch__Respond_state();
    in_stack_00000014 = 0;
    in_stack_00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x00464c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x00464c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Handle_disconnect @ 00464cb4 (size 76) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode___GCodeDispatch__Handle_disconnect(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x464cfc;
    FUN_0009bf64();
  }
  k3c_internal_pkg_gcode___GCodeDispatch__Respond_state();
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x00464cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Handle_ready @ 00464d08 (size 124) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode___GCodeDispatch__Handle_ready(void)

{
  int extraout_r1;
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x464d80;
    FUN_0009bf64();
  }
  *(undefined1 *)(in_stack_00000004 + 0x44) = 1;
  uVar2 = *(undefined4 *)(in_stack_00000004 + 0x2c);
  iVar1 = in_stack_00000004;
  if (*_UNK_00464d88 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(undefined4 *)(extraout_r1 + 0x48);
    iVar1 = extraout_r1;
    uVar2 = extraout_r2;
  }
  *(undefined4 *)(iVar1 + 0x48) = uVar2;
  k3c_internal_pkg_gcode___GCodeDispatch__Respond_state();
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x00464d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.ParseGCodeLine @ 00464d90 (size 1332) */

void k3c_internal_pkg_gcode_ParseGCodeLine(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *extraout_r1;
  undefined4 uVar6;
  undefined4 *extraout_r2;
  undefined4 *extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 *unaff_r4;
  undefined4 *unaff_r5;
  undefined4 *puVar7;
  undefined4 *unaff_r6;
  undefined4 *puVar8;
  undefined4 *unaff_r7;
  undefined4 *unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0x70) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -100) = DAT_004652c8;
      *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
      internal_stringslite_Index();
      uVar3 = *(uint *)((int)register0x00000054 + -0x5c);
      if ((int)uVar3 < 0) {
        uVar3 = *(uint *)((int)register0x00000054 + 8);
LAB_00464de8:
        if ((int)uVar3 < 1) {
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
          return;
        }
        *(uint *)((int)register0x00000054 + -0x28) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(uint *)((int)register0x00000054 + -0x68) = uVar3;
        FUN_0015086c();
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -100);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x60);
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -100);
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x60);
        k3c_internal_pkg_gcode_Is_traditional_gcode();
        if (*(char *)((int)register0x00000054 + -100) == '\0') {
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          FUN_0014f3e0();
          if (*(int *)((int)register0x00000054 + -0x60) != 0) {
            uVar4 = (*(undefined4 **)((int)register0x00000054 + -100))[1];
            *(undefined4 *)((int)register0x00000054 + 0xc) =
                 **(undefined4 **)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + 0x10) = uVar4;
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
            return;
          }
          uVar2 = FUN_0009dbd4(0,0);
          uVar4 = extraout_r3_00;
          goto LAB_00465008;
        }
        *(undefined4 *)((int)register0x00000054 + -0x6c) = *DAT_004652cc;
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + -0x60) = 0xffffffff;
        FUN_003f2b68();
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        uVar4 = *DAT_004652cc;
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x5c);
        *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + -0x60) = 0xffffffff;
        FUN_003f1bd8();
        if (*(int *)((int)register0x00000054 + -0x44) !=
            *(int *)((int)register0x00000054 + -0x58) + 1) {
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -8) = DAT_004652d8;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -100);
          *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_004652dc;
          *(undefined4 *)((int)register0x00000054 + -0x68) = 0x24;
          *(undefined1 **)((int)register0x00000054 + -100) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x60) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
          k3c_internal_pkg_logger_Errorf();
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
          return;
        }
        *(int *)((int)register0x00000054 + -0x38) = *(int *)((int)register0x00000054 + -0x58);
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x5c);
        *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_004652d0;
        FUN_00022cf8();
        puVar5 = *(undefined4 **)((int)register0x00000054 + -0x44);
        uVar10 = puVar5 == (undefined4 *)0x0;
        puVar7 = unaff_r5;
        puVar8 = unaff_r6;
        if (!(bool)uVar10) {
          unaff_r7 = *(undefined4 **)((int)register0x00000054 + -0x68);
          unaff_r4 = *(undefined4 **)((int)register0x00000054 + -0x20);
          uVar4 = *unaff_r4;
          unaff_r7[1] = unaff_r4[1];
          if (*DAT_004652d4 != 0) {
            FUN_0009db54();
            *unaff_r8 = uVar4;
            puVar5 = extraout_r1;
            unaff_r7 = extraout_r3;
          }
          *unaff_r7 = uVar4;
          puVar7 = *(undefined4 **)((int)register0x00000054 + -0x18);
          puVar8 = *(undefined4 **)((int)register0x00000054 + -0x38);
          iVar1 = 0;
          unaff_r5 = (undefined4 *)0x1;
          unaff_r6 = (undefined4 *)0x1;
          while( true ) {
            *(undefined4 **)((int)register0x00000054 + -0x1c) = unaff_r7;
            *(undefined4 **)((int)register0x00000054 + -0x3c) = unaff_r5;
            if ((int)puVar8 <= iVar1) break;
            unaff_r8 = (undefined4 *)(iVar1 + 1);
            uVar10 = puVar5 == unaff_r8;
            if (puVar5 <= unaff_r8) goto LAB_0046529c;
            *(int *)((int)register0x00000054 + -0x34) = iVar1;
            *(undefined4 **)((int)register0x00000054 + -0x28) = unaff_r8;
            *(int *)((int)register0x00000054 + -0x2c) = (int)unaff_r6 + 2;
            *(undefined4 **)((int)register0x00000054 + -0xc) = puVar7 + iVar1 * 2;
            uVar4 = unaff_r4[(int)unaff_r8 * 2 + 1];
            *(undefined4 *)((int)register0x00000054 + -0x6c) = unaff_r4[(int)unaff_r8 * 2];
            *(undefined4 *)((int)register0x00000054 + -0x68) = uVar4;
            FUN_00151ce4();
            iVar1 = *(int *)((int)register0x00000054 + -0x18);
            uVar2 = *(undefined4 *)(iVar1 + *(int *)((int)register0x00000054 + -0x34) * 8);
            uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xc) + 4);
            uVar4 = *(undefined4 *)((int)register0x00000054 + -100);
            unaff_r4 = *(undefined4 **)((int)register0x00000054 + -0x60);
            unaff_r5 = *(undefined4 **)((int)register0x00000054 + -0x3c);
            unaff_r6 = *(undefined4 **)((int)register0x00000054 + -0x2c);
            if (unaff_r5 < unaff_r6) {
              *(undefined4 **)((int)register0x00000054 + -0x2c) = unaff_r4;
              *(undefined4 *)((int)register0x00000054 + -0x10) = uVar4;
              *(undefined4 *)((int)register0x00000054 + -0x30) = uVar6;
              *(undefined4 *)((int)register0x00000054 + -0x14) = uVar2;
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)((int)register0x00000054 + -0x1c);
              *(undefined4 **)((int)register0x00000054 + -0x68) = unaff_r6;
              *(undefined4 **)((int)register0x00000054 + -100) = unaff_r5;
              *(undefined4 *)((int)register0x00000054 + -0x60) = 2;
              *(undefined4 *)((int)register0x00000054 + -0x5c) = DAT_004652d8;
              FUN_000987f4();
              unaff_r7 = *(undefined4 **)((int)register0x00000054 + -0x58);
              unaff_r6 = *(undefined4 **)((int)register0x00000054 + -0x54);
              unaff_r5 = *(undefined4 **)((int)register0x00000054 + -0x50);
              uVar2 = *(undefined4 *)((int)register0x00000054 + -0x14);
              unaff_r4 = *(undefined4 **)((int)register0x00000054 + -0x2c);
              iVar1 = *(int *)((int)register0x00000054 + -0x18);
              uVar6 = *(undefined4 *)((int)register0x00000054 + -0x30);
              uVar4 = *(undefined4 *)((int)register0x00000054 + -0x10);
            }
            else {
              unaff_r7 = *(undefined4 **)((int)register0x00000054 + -0x1c);
            }
            unaff_r8 = (undefined4 *)((int)unaff_r6 + -2);
            unaff_r9 = unaff_r7 + (int)unaff_r8 * 2;
            unaff_r9[1] = uVar6;
            if (*DAT_004652d4 != 0) {
              uVar2 = FUN_0009db84(uVar2,iVar1,unaff_r8);
              *unaff_r8 = uVar2;
              *(undefined4 *)((int)unaff_r6 + 2) = unaff_r7[(int)extraout_r2 * 2];
              *(undefined4 *)((int)unaff_r6 + 6) = extraout_r3_01;
              *(undefined4 *)((int)unaff_r6 + 10) = unaff_r9[2];
              uVar4 = extraout_r3_01;
              unaff_r8 = extraout_r2;
            }
LAB_00465008:
            unaff_r7[(int)unaff_r8 * 2] = uVar2;
            unaff_r9[3] = unaff_r4;
            unaff_r9[2] = uVar4;
            puVar5 = *(undefined4 **)((int)register0x00000054 + -0x44);
            unaff_r4 = *(undefined4 **)((int)register0x00000054 + -0x20);
            puVar8 = *(undefined4 **)((int)register0x00000054 + -0x38);
            iVar1 = *(int *)((int)register0x00000054 + -0x28);
            puVar7 = *(undefined4 **)((int)register0x00000054 + -0x18);
            unaff_r8 = puVar5;
            unaff_r9 = puVar8;
          }
          uVar10 = unaff_r5 == (undefined4 *)0x2;
          if ((undefined4 *)0x1 < unaff_r5) {
            *(undefined4 **)((int)register0x00000054 + -0x40) = unaff_r6;
            *(undefined4 **)((int)register0x00000054 + -0x6c) = unaff_r7;
            *(undefined4 *)((int)register0x00000054 + -0x68) = 2;
            *(undefined4 **)((int)register0x00000054 + -100) = unaff_r5;
            *(undefined4 *)((int)register0x00000054 + -0x60) = 0;
            unaff_r4 = (undefined4 *)0x0;
            *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
            FUN_0014f8fc();
            if ((*(int *)((int)register0x00000054 + -0x54) == 1) &&
               (**(char **)((int)register0x00000054 + -0x58) == 'N')) {
              uVar3 = *(uint *)((int)register0x00000054 + -0x3c);
              uVar10 = uVar3 == 5;
              uVar4 = 0x4e;
              if (4 < uVar3) {
                *(int *)((int)register0x00000054 + -0x6c) =
                     *(int *)((int)register0x00000054 + -0x1c) + 0x18;
                *(undefined4 *)((int)register0x00000054 + -0x68) = 2;
                *(uint *)((int)register0x00000054 + -100) = uVar3 - 3;
                *(undefined4 *)((int)register0x00000054 + -0x60) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
                FUN_0014f8fc();
                uVar4 = *(undefined4 *)((int)register0x00000054 + -0x58);
                uVar2 = *(undefined4 *)((int)register0x00000054 + -0x54);
LAB_00465230:
                uVar3 = *(uint *)((int)register0x00000054 + -0x40);
                uVar10 = uVar3 == 3;
                if (2 < uVar3) {
                  *(undefined4 *)((int)register0x00000054 + 0xc) = uVar4;
                  *(undefined4 *)((int)register0x00000054 + 0x10) = uVar2;
                  *(uint *)((int)register0x00000054 + 0x14) =
                       *(int *)((int)register0x00000054 + -0x1c) +
                       (3 - *(int *)((int)register0x00000054 + -0x3c) >> 0x1f & 0x18U);
                  *(uint *)((int)register0x00000054 + 0x18) = uVar3 - 3;
                  *(int *)((int)register0x00000054 + 0x1c) =
                       *(int *)((int)register0x00000054 + -0x3c) + -3;
                  return;
                }
                uVar3 = FUN_0009dc34(3,uVar3);
                goto LAB_00465280;
              }
            }
            else {
              uVar3 = *(uint *)((int)register0x00000054 + -0x3c);
              uVar10 = uVar3 == 3;
              if (2 < uVar3) {
                *(undefined4 *)((int)register0x00000054 + -0x6c) =
                     *(undefined4 *)((int)register0x00000054 + -0x1c);
                *(undefined4 *)((int)register0x00000054 + -0x68) = 3;
                *(uint *)((int)register0x00000054 + -100) = uVar3;
                *(undefined4 *)((int)register0x00000054 + -0x60) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
                FUN_0014f8fc();
                uVar4 = *(undefined4 *)((int)register0x00000054 + -0x58);
                uVar2 = *(undefined4 *)((int)register0x00000054 + -0x54);
                goto LAB_00465230;
              }
LAB_00465280:
              uVar4 = FUN_0009dc14(uVar3,3,2);
            }
            iVar1 = FUN_0009dc14(uVar4,5);
          }
          FUN_0009dc14(iVar1,2);
LAB_0046529c:
          FUN_0009dbd4(unaff_r8);
          unaff_r7 = unaff_r6;
        }
        FUN_0009dbd4(0,0);
        unaff_r5 = puVar7;
        unaff_r6 = puVar8;
      }
      else {
        uVar10 = *(uint *)((int)register0x00000054 + 8) == uVar3;
        if (uVar3 <= *(uint *)((int)register0x00000054 + 8)) goto LAB_00464de8;
      }
      param_1 = FUN_0009dbf4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x70);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x4652c0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Process_commands @ 004652e0 (size 1012) */

void k3c_internal_pkg_gcode___GCodeDispatch__Process_commands(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  undefined1 uVar11;
  undefined8 uVar12;
  
  while (register0x00000054 <= *(undefined1 **)(unaff_r10 + 8)) {
LAB_004656c8:
    unaff_lr = 0x4656d0;
    param_1 = FUN_0009bf64(param_1);
  }
  puVar10 = (undefined1 *)((int)register0x00000054 + -0x80);
  *(undefined4 *)((int)register0x00000054 + -0x80) = unaff_lr;
  iVar1 = 0;
  do {
    if (*(int *)((int)register0x00000054 + 0xc) <= iVar1) {
      return;
    }
    *(int *)((int)register0x00000054 + -0x34) = iVar1;
    uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + iVar1 * 8 + 4);
    *(undefined4 *)((int)register0x00000054 + -0x7c) =
         *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + iVar1 * 8);
    *(undefined4 *)((int)register0x00000054 + -0x78) = uVar5;
    FUN_00151ce4();
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)((int)register0x00000054 + -0x74);
    *(undefined4 *)((int)register0x00000054 + -0x48) =
         *(undefined4 *)((int)register0x00000054 + -0x70);
    *(undefined4 *)((int)register0x00000054 + -0x7c) =
         *(undefined4 *)((int)register0x00000054 + -0x74);
    *(undefined4 *)((int)register0x00000054 + -0x78) =
         *(undefined4 *)((int)register0x00000054 + -0x70);
    k3c_internal_pkg_gcode_ParseGCodeLine();
    if (*(int *)((int)register0x00000054 + -0x70) != 0) {
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + -0x74);
      *(int *)((int)register0x00000054 + -0x3c) = *(int *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + -0x6c);
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      FUN_000908bc();
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x7c);
      *(undefined4 *)((int)register0x00000054 + -0x30) = uVar5;
      uVar4 = *(uint *)((int)register0x00000054 + -0x50);
      iVar1 = *(int *)((int)register0x00000054 + -0x2c);
      uVar6 = 0;
      while ((int)uVar6 < (int)uVar4) {
        uVar7 = uVar6 + 1;
        uVar11 = uVar4 == uVar7;
        if (uVar4 <= uVar7) {
LAB_004656bc:
          param_1 = FUN_0009dbd4(uVar7);
          register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x80);
          if ((bool)uVar11) {
            register0x00000054 = (BADSPACEBASE *)puVar10;
          }
          goto LAB_004656c8;
        }
        uVar8 = *(undefined4 *)(iVar1 + uVar7 * 8);
        uVar7 = iVar1 + uVar7 * 8;
        uVar11 = uVar6 == uVar4;
        if (uVar4 <= uVar6) {
          FUN_0009dbd4(uVar6);
          goto LAB_004656bc;
        }
        *(uint *)((int)register0x00000054 + -0x44) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x14) = uVar8;
        uVar8 = *(undefined4 *)(iVar1 + uVar6 * 8);
        uVar9 = *(undefined4 *)(iVar1 + uVar6 * 8 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x38) = *(undefined4 *)(uVar7 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_004656e8;
        *(undefined4 *)((int)register0x00000054 + -0x78) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x74) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0x70) = uVar9;
        FUN_00093a08();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x6c);
        puVar3[1] = *(undefined4 *)((int)register0x00000054 + -0x38);
        if (*DAT_004656ec == 0) {
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x14);
        }
        else {
          puVar3 = (undefined4 *)FUN_0009db64();
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x14);
          *unaff_r8 = uVar5;
          unaff_r8[1] = *puVar3;
        }
        *puVar3 = uVar5;
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x30);
        uVar4 = *(uint *)((int)register0x00000054 + -0x50);
        iVar1 = *(int *)((int)register0x00000054 + -0x2c);
        uVar6 = *(int *)((int)register0x00000054 + -0x44) + 2;
      }
      *(undefined4 *)((int)register0x00000054 + -0x7c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x78) =
           *(undefined4 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x70) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x68) = uVar5;
      *(undefined1 *)((int)register0x00000054 + -100) =
           *(undefined1 *)((int)register0x00000054 + 0x14);
      k3c_internal_pkg_gcode_NewGCodeCommand();
      uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x48);
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_004656d8;
      *(undefined4 *)((int)register0x00000054 + -0x78) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x70) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      FUN_00025f60();
      puVar3 = (undefined4 *)**(int **)((int)register0x00000054 + -0x6c);
      if (puVar3 == (undefined4 *)0x0) {
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x7c) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_004656dc;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x74);
        *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_004656e0;
        *(undefined4 *)((int)register0x00000054 + -0x78) = 0x1e;
        *(undefined1 **)((int)register0x00000054 + -0x74) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x70) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x6c) = 1;
        k3c_internal_pkg_logger_Debugf();
        *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_004656e4;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        puVar3 = (undefined4 *)((int)register0x00000054 + -0x10);
      }
      pcVar2 = (code *)*puVar3;
      *(undefined4 *)((int)register0x00000054 + -0x7c) =
           *(undefined4 *)((int)register0x00000054 + -0x20);
      (*pcVar2)();
      iVar1 = *(int *)((int)register0x00000054 + -0x78);
      if (iVar1 != 0) {
        *(int *)((int)register0x00000054 + -0x40) = iVar1;
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        uVar12 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x74),
                          *(undefined4 *)(iVar1 + 4));
        do {
          *(int *)((int)register0x00000054 + -0x1c) = (int)((ulonglong)uVar12 >> 0x20);
          *(undefined8 *)((int)register0x00000054 + -8) = uVar12;
          *(undefined1 **)((int)register0x00000054 + -0x7c) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x74) = 1;
          k3c_internal_pkg_logger_Error();
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)((int)register0x00000054 + -0x3c);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -8) = DAT_004656dc;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x74);
          *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_004656f0;
          *(undefined4 *)((int)register0x00000054 + -0x78) = 0x1f;
          *(undefined1 **)((int)register0x00000054 + -0x74) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x70) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x6c) = 1;
          FUN_0013b72c();
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + -100);
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_004656f4;
          *(undefined4 *)((int)register0x00000054 + -0x74) = 0x16;
          *(undefined4 *)((int)register0x00000054 + -0x70) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x6c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
          k3c_internal_pkg_printer___Printer__Send_event();
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x74) =
               *(undefined4 *)((int)register0x00000054 + -0x4c);
          k3c_internal_pkg_printer___Printer__Invoke_shutdown();
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x74) =
               *(undefined4 *)((int)register0x00000054 + -0x4c);
          k3c_internal_pkg_gcode___GCodeDispatch__Respond_error();
          uVar5 = 0;
          if (*(int *)((int)register0x00000054 + -0x40) != 0) {
            uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x40) + 4);
          }
          *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          uVar12 = FUN_00095b00();
        } while( true );
      }
      *(undefined4 *)((int)register0x00000054 + -0x7c) =
           *(undefined4 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x78) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x74) = 0;
      k3c_internal_pkg_gcode___GCodeCommand__Ack();
    }
    iVar1 = *(int *)((int)register0x00000054 + -0x34) + 1;
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Run_script_from_command @ 004656f8 (size 128) */

void k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0014f168();
  k3c_internal_pkg_gcode___GCodeDispatch__Process_commands();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Run_script @ 00465780 (size 676) */

void k3c_internal_pkg_gcode___GCodeDispatch__Run_script(void)

{
  char cVar1;
  char cVar2;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined4 local_44;
  char local_40;
  undefined *local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined *local_c;
  undefined *local_8;
  undefined **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = (undefined **)0x0;
  if (*(char *)(in_stack_00000004 + 0x15) != '\0') {
    if (in_stack_0000000c == 0xc) {
      local_44 = 0xc;
      FUN_00018250();
      cVar1 = local_40;
    }
    else {
      cVar1 = '\0';
    }
    if (in_stack_0000000c < 0x11) {
      cVar2 = '\0';
    }
    else {
      local_44 = 0x11;
      FUN_00018250();
      cVar2 = local_40;
    }
    if (cVar1 == '\0') {
      if (cVar2 == '\0') {
        local_c = (undefined *)0x0;
        local_8 = (undefined *)0x0;
        FUN_0008f77c();
        local_c = PTR_DAT_00465a38;
        local_8 = (undefined *)local_44;
        k3c_internal_pkg_logger_Debugf();
        return;
      }
    }
    else if (cVar2 == '\0') goto LAB_004658fc;
    local_c = PTR_DAT_00465a38;
    local_8 = PTR_DAT_00465a3c;
    k3c_internal_pkg_logger_Warn();
    *(undefined1 *)(in_stack_00000004 + 0x15) = 0;
  }
LAB_004658fc:
  if ((in_stack_0000000c == 0xc) && (FUN_00018250(), local_40 != '\0')) {
    k3c_internal_pkg_printer___Printer__Send_event();
  }
  k3c_internal_pkg_reactor___ReactorMutex__Lock();
  local_1c = PTR_k3c_internal_pkg_gcode___GCodeDispatch__Run_script_func1_00465a48;
  local_18 = in_stack_00000004;
  local_10 = in_stack_0000000c;
  local_14 = in_stack_00000008;
  local_4 = &local_1c;
  FUN_0014f168();
  k3c_internal_pkg_gcode___GCodeDispatch__Process_commands();
  (*(code *)*local_4)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Run_script.func1 @ 00465a50 (size 172) */

void k3c_internal_pkg_gcode___GCodeDispatch__Run_script_func1(void)

{
  int iVar1;
  int unaff_r7;
  int unaff_r10;
  undefined1 local_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  iVar1 = *(int *)(unaff_r7 + 0xc);
  k3c_internal_pkg_reactor___ReactorMutex__Unlock();
  if (iVar1 == 0xc) {
    FUN_00018250();
    if (local_2c != '\0') {
      k3c_internal_pkg_printer___Printer__Send_event();
    }
  }
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Run_script_for_work_handler @ 00465b08 (size 292) */

void k3c_internal_pkg_gcode___GCodeDispatch__Run_script_for_work_handler(void)

{
  undefined4 uVar1;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *local_30;
  undefined *local_c;
  int local_8;
  undefined **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = (undefined **)0x0;
  if (*(char *)(in_stack_00000004 + 0x15) == '\0') {
    k3c_internal_pkg_reactor___ReactorMutex__Lock();
    local_c = PTR_k3c_internal_pkg_gcode___GCodeDispatch__Run_script_for_work_handler_func1_00465c30
    ;
    local_8 = in_stack_00000004;
    local_4 = &local_c;
    FUN_0014f168();
    k3c_internal_pkg_gcode___GCodeDispatch__Process_commands();
    (*(code *)*local_4)();
    return;
  }
  *(undefined1 *)(in_stack_00000004 + 0x15) = 0;
  FUN_00022cf8();
  local_30[1] = 0x18;
  *local_30 = PTR_DAT_00465c3c;
  uVar1 = FUN_00095b00();
  FUN_00054344(uVar1);
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Run_script_for_work_handler.func1 @ 00465c44 (size 48) */

void k3c_internal_pkg_gcode___GCodeDispatch__Run_script_for_work_handler_func1(void)

{
  int unaff_r10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  k3c_internal_pkg_reactor___ReactorMutex__Unlock();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Get_mutex @ 00465c74 (size 16) */

void k3c_internal_pkg_gcode___GCodeDispatch__Get_mutex(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00465c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Create_gcode_command @ 00465c84 (size 100) */

void k3c_internal_pkg_gcode___GCodeDispatch__Create_gcode_command(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x465ce4;
    FUN_0009bf64();
  }
  k3c_internal_pkg_gcode_NewGCodeCommand();
                    /* WARNING: Could not recover jumptable at 0x00465cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Respond_raw @ 00465ce8 (size 116) */

void k3c_internal_pkg_gcode___GCodeDispatch__Respond_raw(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x465d58;
    FUN_0009bf64();
  }
  iVar2 = *(int *)(in_stack_00000004 + 0x1c);
  iVar1 = *(int *)(in_stack_00000004 + 0x20);
  for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
    (*(code *)**(undefined4 **)(iVar2 + iVar3 * 4))();
  }
                    /* WARNING: Could not recover jumptable at 0x00465d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Respond_info @ 00465d5c (size 580) */

void k3c_internal_pkg_gcode___GCodeDispatch__Respond_info(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_r3;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar9;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  char in_stack_00000010;
  uint local_50;
  uint local_40;
  uint local_3c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (in_stack_00000010 != '\0') {
    FUN_0008f77c();
    k3c_internal_pkg_logger_Info();
  }
  FUN_00151ce4();
  local_50 = DAT_00465fa8;
  FUN_0014f168();
  uVar5 = 0;
  iVar6 = 0;
  iVar7 = 0;
  for (iVar4 = 0; uVar1 = local_50, iVar4 < (int)local_3c; iVar4 = iVar4 + 1) {
    FUN_00151ce4();
    uVar3 = iVar7 + 1;
    uVar2 = uVar5;
    if (uVar5 < uVar3) {
      FUN_000987f4();
      iVar6 = -1;
      uVar3 = local_40;
      uVar2 = local_3c;
      local_50 = uVar5;
    }
    uVar5 = uVar2;
    uVar9 = CONCAT44(uVar1,uVar3);
    iVar8 = uVar3 - 1;
    *(undefined4 *)(iVar6 + iVar8 * 8 + 4) = 1;
    if (*DAT_00465fac != 0) {
      uVar9 = FUN_0009db64();
      *unaff_r8 = (int)((ulonglong)uVar9 >> 0x20);
      unaff_r8[1] = *(undefined4 *)(iVar6 + iVar8 * 8);
      uVar5 = extraout_r3;
    }
    iVar7 = (int)uVar9;
    *(int *)(iVar6 + iVar8 * 8) = (int)((ulonglong)uVar9 >> 0x20);
  }
  FUN_0014f8fc();
  iVar4 = *(int *)(in_stack_00000004 + 0x1c);
  iVar7 = *(int *)(in_stack_00000004 + 0x20);
  for (iVar6 = 0; iVar6 < iVar7; iVar6 = iVar6 + 1) {
    (*(code *)**(undefined4 **)(iVar4 + iVar6 * 4))();
  }
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Respond_error @ 00465fb4 (size 588) */

void k3c_internal_pkg_gcode___GCodeDispatch__Respond_error(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  bool bVar10;
  undefined8 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00151ce4();
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_00466204;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 0xffffffff;
      FUN_0014f168();
      iVar1 = *(int *)((int)register0x00000054 + -0x2c);
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x30);
      if (1 < iVar1) {
        *(int *)((int)register0x00000054 + -0x24) = iVar1;
        *(undefined4 **)((int)register0x00000054 + -0x14) = puVar2;
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 **)((int)register0x00000054 + -0x48) = puVar2;
        *(int *)((int)register0x00000054 + -0x44) = iVar1;
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        FUN_0008f820();
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_00466208;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_0046620c;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 3;
        *(undefined1 **)((int)register0x00000054 + -0x40) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined1 *)((int)register0x00000054 + -0x3c) = 0;
        k3c_internal_pkg_gcode___GCodeDispatch__Respond_info();
        iVar1 = *(int *)((int)register0x00000054 + -0x24);
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x14);
      }
      bVar10 = iVar1 == 0;
      if (!bVar10) {
        uVar3 = puVar2[1];
        *(undefined4 *)((int)register0x00000054 + -0x48) = *puVar2;
        *(undefined4 *)((int)register0x00000054 + -0x44) = uVar3;
        FUN_00151ce4();
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_00466210;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_00466214;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 5;
        *(undefined1 **)((int)register0x00000054 + -0x40) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
        FUN_0013b72c();
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar3;
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x20) = uVar4;
        iVar1 = *(int *)((int)register0x00000054 + 4);
        iVar6 = *(int *)(iVar1 + 0x1c);
        *(int *)((int)register0x00000054 + -0xc) = iVar6;
        iVar7 = *(int *)(iVar1 + 0x20);
        *(int *)((int)register0x00000054 + -0x18) = iVar7;
        iVar8 = 0;
        while (iVar8 < iVar7) {
          *(int *)((int)register0x00000054 + -0x1c) = iVar8;
          pcVar5 = (code *)**(undefined4 **)(iVar6 + iVar8 * 4);
          *(undefined4 *)((int)register0x00000054 + -0x48) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x44) = uVar4;
          (*pcVar5)();
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x10);
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0x20);
          iVar1 = *(int *)((int)register0x00000054 + 4);
          iVar6 = *(int *)((int)register0x00000054 + -0xc);
          iVar7 = *(int *)((int)register0x00000054 + -0x18);
          iVar8 = *(int *)((int)register0x00000054 + -0x1c) + 1;
        }
        if (*(char *)(iVar1 + 0x14) != '\0') {
          iVar1 = *(int *)(iVar1 + 0x10);
          if (*(int *)(iVar1 + 0x20) == 0) {
            *(undefined4 *)(iVar1 + 0x20) = 10;
            if (*DAT_00466218 != 0) {
              uVar11 = FUN_0009db54(iVar1,*(undefined4 *)(iVar1 + 0x1c));
              iVar1 = (int)uVar11;
              *unaff_r8 = (int)((ulonglong)uVar11 >> 0x20);
            }
            *(undefined4 *)(iVar1 + 0x1c) = DAT_0046621c;
          }
          **(undefined1 **)(iVar1 + 0xc) = 0;
        }
        return;
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x4c);
      if (bVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x4661fc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Respond_state @ 00466220 (size 160) */

void k3c_internal_pkg_gcode___GCodeDispatch__Respond_state(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0008f77c();
  FUN_0013b72c();
  k3c_internal_pkg_gcode___GCodeDispatch__Respond_info();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Get_extended_params @ 004662cc (size 340) */

void k3c_internal_pkg_gcode___GCodeDispatch__Get_extended_params(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *local_54;
  int local_30;
  undefined4 *local_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_gcode___GCodeCommand__Get_raw_command_parameters();
  internal_stringslite_Cut();
  k3c_internal_pkg_gcode_ParseShellArgs();
  FUN_00091f1c();
  FUN_0009dee4(0,&local_30);
  FUN_00091764();
  while (local_30 != 0) {
    uVar3 = local_2c[1];
    uVar2 = *local_2c;
    FUN_00093a08();
    local_54[1] = uVar3;
    puVar1 = local_54;
    if (*DAT_0046642c != 0) {
      puVar1 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = uVar2;
      unaff_r8[1] = *puVar1;
    }
    *puVar1 = uVar2;
    FUN_000919c8();
  }
  return;
}



/* k3c/internal/pkg/gcode.ParseShellArgs @ 00466430 (size 704) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode_ParseShellArgs(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int local_40;
  int local_38;
  uint local_34;
  int local_2c;
  int local_20;
  undefined4 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_000908bc();
  uVar1 = DAT_004666f4;
  internal_stringslite_Index();
  uVar3 = DAT_004666f8;
  if (local_40 == 0) {
    FUN_0014f168();
    if (local_34 < 2) {
      FUN_0009dbd4(1);
      while( true ) {
        local_20 = local_20 + 1;
LAB_00466598:
        if (local_2c <= local_20) break;
        FUN_0014f168(local_18);
        if ((int)local_34 < 2) {
          FUN_0008f77c();
          k3c_internal_pkg_logger_Errorf();
        }
        else {
          FUN_0015086c();
          uVar3 = *(undefined4 *)(local_38 + 0xc);
          uVar1 = *(undefined4 *)(local_38 + 8);
          FUN_00093a08();
          puVar2 = (undefined4 *)0x0;
          _DAT_00000004 = uVar3;
          if (*DAT_00466704 != 0) {
            puVar2 = (undefined4 *)FUN_0009db64();
            *unaff_r8 = uVar1;
            unaff_r8[1] = *puVar2;
          }
          *puVar2 = uVar1;
        }
      }
      return;
    }
    FUN_00151ce4();
    FUN_00093a08();
    puVar2 = (undefined4 *)0x0;
    _DAT_00000004 = 1;
    if (*DAT_00466704 != 0) {
      puVar2 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = uVar3;
      unaff_r8[1] = *puVar2;
    }
    *puVar2 = uVar3;
    return;
  }
  FUN_0014f3e0();
  local_18 = uVar1;
  local_2c = 9;
  local_20 = 0;
  goto LAB_00466598;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_default @ 00466710 (size 1052) */

/* WARNING: Removing unreachable block (ram,0x00466948) */
/* WARNING: Removing unreachable block (ram,0x00466a80) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_default(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 local_3c;
  double local_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x466b28;
    FUN_0009bf64();
  }
  iVar3 = *(int *)(in_stack_00000008 + 8);
  pcVar4 = *(char **)(in_stack_00000008 + 4);
  if ((((iVar3 == 4) && (*pcVar4 == 'M')) && (pcVar4[1] == '1')) &&
     ((pcVar4[2] == '0' && (pcVar4[3] == '5')))) {
    k3c_internal_pkg_gcode___GCodeCommand__Ack();
    return;
  }
  if (((iVar3 == 3) && (*pcVar4 == 'M')) && ((pcVar4[1] == '2' && (pcVar4[2] == '1')))) {
    return;
  }
  if (*(char *)(in_stack_00000004 + 0x44) == '\0') {
    return;
  }
  if (iVar3 != 0) {
    if (iVar3 == 4) {
      if ((((*pcVar4 == 'M') && (pcVar4[1] == '1')) && (pcVar4[2] == '4')) && (pcVar4[3] == '0')) {
        return;
      }
      if (*pcVar4 == 'M') {
        if (pcVar4[1] == '1') {
          if (pcVar4[2] == '0') {
            if (pcVar4[3] == '4') {
              local_3c = 1;
              k3c_internal_pkg_gcode___GCodeCommand__Get_float();
              bVar1 = local_20 == -1.0;
            }
            else {
              bVar1 = false;
            }
          }
          else {
            bVar1 = false;
          }
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return;
    }
    if (iVar3 == 4) {
      if (((*pcVar4 == 'M') && (pcVar4[1] == '1')) && ((pcVar4[2] == '0' && (pcVar4[3] == '7')))) {
        return;
      }
      if (*pcVar4 == 'M') {
        if (pcVar4[1] == '1') {
          if (pcVar4[2] == '0') {
            if (pcVar4[3] == '6') {
              local_3c = 1;
              k3c_internal_pkg_gcode___GCodeCommand__Get_float();
              if (local_20 == -1.0) {
                cVar2 = '\x01';
              }
              else {
                cVar2 = *(char *)(in_stack_00000004 + 0x14);
              }
            }
            else {
              cVar2 = '\0';
            }
          }
          else {
            cVar2 = '\0';
          }
        }
        else {
          cVar2 = '\0';
        }
      }
      else {
        cVar2 = '\0';
      }
    }
    else {
      cVar2 = '\0';
    }
    if (cVar2 != '\0') {
      return;
    }
    FUN_0009df04(0,&local_10,0,iVar3,unaff_lr);
    local_10 = DAT_00466b44;
    local_c = DAT_00466b48;
    FUN_0008f77c();
    local_8 = DAT_00466b44;
    local_4 = local_3c;
    k3c_internal_pkg_logger_Warn();
    return;
  }
  if (*(int *)(in_stack_00000008 + 0x10) != 0) {
    k3c_internal_pkg_logger_Debugf();
  }
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_mux @ 00466b4c (size 1144) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_mux(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int extraout_r1;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int iVar9;
  int *piVar10;
  int *extraout_r3_01;
  int *extraout_r3_02;
  int extraout_r3_03;
  int *piVar11;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar12;
  undefined4 unaff_lr;
  undefined1 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar12 = (undefined1 *)((int)register0x00000054 + -0x74);
      *(undefined4 *)((int)register0x00000054 + -0x74) = unaff_lr;
      uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x30);
      *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00466fc8;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -100) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      uVar1 = FUN_00025f60();
      FUN_0009e2e8(uVar1,*(undefined4 *)((int)register0x00000054 + -0x60),
                   (undefined1 *)((int)register0x00000054 + -0x28));
      if (*(int *)((int)register0x00000054 + -0x14) == 0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x28);
      }
      if ((undefined1 *)puVar2[2] == (undefined1 *)((int)register0x00000054 + -0x28)) {
        uVar14 = CONCAT44(puVar2[1],puVar2);
        uVar1 = *puVar2;
        if (*DAT_00466fcc != 0) {
          uVar14 = FUN_0009db64();
          *unaff_r8 = extraout_r3;
          unaff_r8[1] = *(undefined4 *)((ulonglong)uVar14 >> 0x20);
          uVar1 = extraout_r3;
        }
        puVar2 = (undefined4 *)uVar14;
        *(undefined4 *)((ulonglong)uVar14 >> 0x20) = uVar1;
        uVar14 = CONCAT44(*puVar2,puVar2);
        uVar1 = puVar2[1];
        if (*DAT_00466fcc != 0) {
          uVar14 = FUN_0009db94();
          puVar2 = (undefined4 *)uVar14;
          *unaff_r8 = extraout_r3_00;
          unaff_r8[1] = *(undefined4 *)((int)((ulonglong)uVar14 >> 0x20) + 4);
          unaff_r8[2] = *puVar2;
          unaff_r8[3] = puVar2[1];
          unaff_r8[4] = puVar2[2];
          uVar1 = extraout_r3_00;
        }
        puVar2 = (undefined4 *)uVar14;
        *(undefined4 *)((int)((ulonglong)uVar14 >> 0x20) + 4) = uVar1;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        *(int *)((int)register0x00000054 + -0x14) = *(int *)((int)register0x00000054 + -0x14) + -1;
      }
      iVar4 = DAT_00466fd0;
      iVar7 = 0;
      iVar9 = puVar2[3];
      uVar13 = 0;
      if (iVar9 == DAT_00466fd0) {
        uVar1 = *(undefined4 *)puVar2[4];
        uVar3 = ((undefined4 *)puVar2[4])[1];
        uVar15 = (ulonglong)uVar3;
        if (*(int *)((int)register0x00000054 + -0x14) == 0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = *(int **)((int)register0x00000054 + -0x24);
        }
        if ((undefined1 *)piVar10[2] == (undefined1 *)((int)register0x00000054 + -0x28)) {
          piVar11 = (int *)piVar10[1];
          iVar9 = *piVar10;
          if (*DAT_00466fcc != 0) {
            uVar15 = FUN_0009db64();
            *(int *)iVar9 = iVar9;
            *(int *)(iVar9 + 4) = *piVar11;
            iVar7 = extraout_r2;
            piVar10 = extraout_r3_01;
          }
          *piVar11 = iVar9;
          iVar9 = *piVar10;
          unaff_r8 = (undefined4 *)piVar10[1];
          if (*DAT_00466fcc != 0) {
            uVar15 = FUN_0009db94();
            *unaff_r8 = unaff_r8;
            unaff_r8[1] = *(undefined4 *)(iVar9 + 4);
            unaff_r8[2] = *extraout_r3_02;
            unaff_r8[3] = extraout_r3_02[1];
            unaff_r8[4] = extraout_r3_02[2];
            iVar7 = extraout_r2_00;
            piVar10 = extraout_r3_02;
          }
          iVar6 = (int)(uVar15 >> 0x20);
          uVar3 = (uint)uVar15;
          *(undefined4 **)(iVar9 + 4) = unaff_r8;
          *piVar10 = iVar6;
          piVar10[1] = iVar6;
          piVar10[2] = iVar7;
          *(int *)((int)register0x00000054 + -0x14) = *(int *)((int)register0x00000054 + -0x14) + -1
          ;
        }
        iVar7 = piVar10[3];
        uVar13 = 0;
        iVar9 = DAT_00466fd4;
        if (iVar7 == DAT_00466fd4) {
          *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar1;
          *(uint *)((int)register0x00000054 + -0x38) = uVar3;
          iVar4 = piVar10[4];
          *(int *)((int)register0x00000054 + -0x34) = iVar4;
          *(int *)((int)register0x00000054 + -0x70) = DAT_00466fd4;
          *(int *)((int)register0x00000054 + -0x6c) = iVar4;
          *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
          *(undefined4 *)((int)register0x00000054 + -100) = 0;
          FUN_00093560();
          if (*(char *)((int)register0x00000054 + -0x5c) == '\0') {
            *(undefined4 *)((int)register0x00000054 + -0x70) =
                 *(undefined4 *)((int)register0x00000054 + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x6c) =
                 *(undefined4 *)((int)register0x00000054 + -0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + -0x38);
            *(undefined4 *)((int)register0x00000054 + -100) = DAT_00466fdc;
            *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_00466fe0;
            *(int *)((int)register0x00000054 + -0x5c) = DAT_00466fd0;
            *(undefined4 *)((int)register0x00000054 + -0x58) = DAT_00466fe4;
            *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
            k3c_internal_pkg_gcode___GCodeCommand__Get();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -0x44);
            uVar8 = *(undefined4 *)((int)register0x00000054 + -0x40);
          }
          else {
            *(undefined4 *)((int)register0x00000054 + -0x70) =
                 *(undefined4 *)((int)register0x00000054 + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x6c) =
                 *(undefined4 *)((int)register0x00000054 + -0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + -0x38);
            *(undefined4 *)((int)register0x00000054 + -100) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x60) = 0;
            *(int *)((int)register0x00000054 + -0x5c) = DAT_00466fd0;
            *(undefined4 *)((int)register0x00000054 + -0x58) = DAT_00466fd8;
            *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
            k3c_internal_pkg_gcode___GCodeCommand__Get();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -0x44);
            uVar8 = *(undefined4 *)((int)register0x00000054 + -0x40);
          }
          iVar4 = 0;
          *(undefined4 *)((int)register0x00000054 + -0x30) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar8;
          *(int *)((int)register0x00000054 + -0x70) = DAT_00466fd4;
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -0x68) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -100) = uVar8;
          FUN_00025f60();
          uVar13 = **(int **)((int)register0x00000054 + -0x60) == 0;
          if (!(bool)uVar13) {
            *(int *)((int)register0x00000054 + -0x70) = DAT_00466fd4;
            *(undefined4 *)((int)register0x00000054 + -0x6c) =
                 *(undefined4 *)((int)register0x00000054 + -0x34);
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + -0x30);
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            FUN_00025f60();
            iVar7 = **(int **)((int)register0x00000054 + -0x60);
            uVar13 = iVar7 == DAT_00466fe8;
            if ((bool)uVar13) {
              pcVar5 = *(code **)(*(int **)((int)register0x00000054 + -0x60))[1];
              *(undefined4 *)((int)register0x00000054 + -0x70) =
                   *(undefined4 *)((int)register0x00000054 + 0x10);
              (*pcVar5)();
              *(undefined4 *)((int)register0x00000054 + 0x14) =
                   *(undefined4 *)((int)register0x00000054 + -0x6c);
              *(undefined4 *)((int)register0x00000054 + 0x18) =
                   *(undefined4 *)((int)register0x00000054 + -0x68);
              return;
            }
            *(int *)((int)register0x00000054 + -0x70) = iVar7;
            *(int *)((int)register0x00000054 + -0x6c) = DAT_00466fe8;
            *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_00466fec;
            FUN_000209b4();
          }
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x3c);
          FUN_0008f77c();
          *(int *)((int)register0x00000054 + -0x10) = DAT_00466fd0;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x38);
          FUN_0008f77c();
          *(int *)((int)register0x00000054 + -8) = DAT_00466fd0;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00466ff0;
          *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x20;
          *(undefined1 **)((int)register0x00000054 + -0x68) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -100) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x60) = 2;
          FUN_0013b72c();
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          FUN_0008f77c();
          *(int *)((int)register0x00000054 + -0x70) = DAT_00466fd0;
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          FUN_00095b00();
          iVar7 = extraout_r1;
          iVar9 = extraout_r2_01;
        }
        *(int *)((int)register0x00000054 + -0x70) = iVar7;
        *(int *)((int)register0x00000054 + -0x6c) = iVar9;
        *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_00466fec;
        FUN_000209b4();
        iVar9 = extraout_r3_03;
      }
      *(int *)((int)register0x00000054 + -0x70) = iVar9;
      *(int *)((int)register0x00000054 + -0x6c) = iVar4;
      *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_00466fec;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x74);
      if ((bool)uVar13) {
        register0x00000054 = (BADSPACEBASE *)puVar12;
      }
    }
    unaff_lr = 0x466fc0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_M110 @ 00466ff4 (size 88) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_M110(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x467048;
    FUN_0009bf64();
  }
  k3c_internal_pkg_logger_Debug();
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x0046703c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_M112 @ 00467058 (size 80) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_M112(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4670a4;
    FUN_0009bf64();
  }
  k3c_internal_pkg_printer___Printer__Invoke_shutdown();
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x00467098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_M8844 @ 004670b0 (size 480) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_M8844(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_r2;
  int iVar6;
  int iVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x34) = unaff_lr;
      uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x18) = uVar3;
      uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x30) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_00467294;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 2;
      internal_stringslite_Index();
      iVar2 = *(int *)((int)register0x00000054 + -0x20);
      if (iVar2 == -1) {
        iVar7 = 0;
        iVar6 = 0;
LAB_00467210:
        if (iVar7 == 0) {
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00467298;
          *(undefined4 *)((int)register0x00000054 + -0x28) = 0x1c;
          k3c_internal_pkg_printer___Printer__Invoke_shutdown();
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
          *(int *)((int)register0x00000054 + -0x2c) = iVar6;
          *(int *)((int)register0x00000054 + -0x28) = iVar7;
          k3c_internal_pkg_printer___Printer__Invoke_shutdown();
        }
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        return;
      }
      uVar5 = iVar2 + 2;
      uVar4 = *(uint *)((int)register0x00000054 + -0x18);
      uVar9 = uVar4 == uVar5;
      if (uVar5 <= uVar4) {
        iVar2 = uVar4 - iVar2;
        uVar5 = uVar5 & 2 - iVar2 >> 0x1f;
        iVar6 = *(int *)((int)register0x00000054 + -0xc) + uVar5;
        iVar7 = iVar2 + -2;
        if (iVar2 == 2) goto LAB_00467210;
        *(int *)((int)register0x00000054 + -0x14) = iVar7;
        uVar5 = (uint)*(byte *)(*(int *)((int)register0x00000054 + -0xc) + uVar5);
        if ((uVar5 != 0x22) && (uVar5 != 0x27)) goto LAB_00467210;
        *(int *)((int)register0x00000054 + -8) = iVar6;
        *(uint *)((int)register0x00000054 + -4) = (3 - iVar2 >> 0x1f & 1U) + iVar6;
        *(int *)((int)register0x00000054 + -0x10) = iVar2 + -3;
        *(undefined1 **)((int)register0x00000054 + -0x30) =
             (undefined1 *)((int)register0x00000054 + -0x1c);
        *(uint *)((int)register0x00000054 + -0x2c) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
        FUN_00076ae8();
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        internal_stringslite_Index();
        iVar7 = *(int *)((int)register0x00000054 + -0x20);
        if (iVar7 == -1) {
          iVar7 = *(int *)((int)register0x00000054 + -0x10);
          iVar6 = *(int *)((int)register0x00000054 + -4);
          goto LAB_00467210;
        }
        uVar5 = iVar7 + 1;
        uVar9 = *(uint *)((int)register0x00000054 + -0x14) == uVar5;
        if (uVar5 <= *(uint *)((int)register0x00000054 + -0x14)) {
          uVar9 = uVar5 == 1;
          if (iVar7 != -1) {
            iVar6 = (-iVar7 >> 0x1f & 1U) + *(int *)((int)register0x00000054 + -8);
            goto LAB_00467210;
          }
          FUN_0009dc34(1,0);
        }
        FUN_0009dbf4();
        uVar5 = extraout_r2;
      }
      param_1 = FUN_0009dc34(uVar5);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x34);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x46728c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_M115 @ 0046729c (size 764) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_M115(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  bool bVar6;
  undefined8 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0xa8)) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x128);
      *(undefined4 *)((int)register0x00000054 + -0x128) = unaff_lr;
      uVar1 = *(undefined4 *)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x10) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x124) = DAT_0046759c;
      *(undefined4 *)((int)register0x00000054 + -0x120) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x11c) = DAT_004675a0;
      *(undefined4 *)((int)register0x00000054 + -0x118) = 0x10;
      FUN_00025f60();
      *(undefined4 *)((int)register0x00000054 + -0x104) =
           **(undefined4 **)((int)register0x00000054 + -0x114);
      *(undefined4 *)((int)register0x00000054 + -0xf4) =
           (*(undefined4 **)((int)register0x00000054 + -0x114))[1];
      uVar1 = FUN_0009def8(0,(undefined1 *)((int)register0x00000054 + -0x5c));
      FUN_0009de88(uVar1,(undefined1 *)((int)register0x00000054 + -0xe8));
      *(undefined1 **)((int)register0x00000054 + -0x50) =
           (undefined1 *)((int)register0x00000054 + -0xe8);
      FUN_0006aa3c();
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + -0x124);
      *(undefined4 *)((int)register0x00000054 + -0x124) = DAT_004675a4;
      *(undefined1 **)((int)register0x00000054 + -0x120) =
           (undefined1 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0x11c) = DAT_004675a8;
      *(undefined4 *)((int)register0x00000054 + -0x118) = 0xd;
      FUN_00093a08();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x114);
      puVar2[1] = 7;
      if (*DAT_004675ac != 0) {
        uVar7 = FUN_0009db54(puVar2,*puVar2);
        puVar2 = (undefined4 *)uVar7;
        *unaff_r8 = (int)((ulonglong)uVar7 >> 0x20);
      }
      *puVar2 = DAT_004675b0;
      bVar6 = *(int *)((int)register0x00000054 + -0x104) == DAT_004675b4;
      if (bVar6) {
        *(undefined4 *)((int)register0x00000054 + -0xfc) =
             (*(undefined4 **)((int)register0x00000054 + -0xf4))[1];
        *(undefined4 *)((int)register0x00000054 + -0xec) =
             **(undefined4 **)((int)register0x00000054 + -0xf4);
        *(undefined4 *)((int)register0x00000054 + -0x124) = DAT_004675a4;
        *(undefined1 **)((int)register0x00000054 + -0x120) =
             (undefined1 *)((int)register0x00000054 + -0x5c);
        *(undefined4 *)((int)register0x00000054 + -0x11c) = DAT_004675b8;
        *(undefined4 *)((int)register0x00000054 + -0x118) = 0x10;
        FUN_00093a08();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x114);
        puVar2[1] = *(undefined4 *)((int)register0x00000054 + -0xfc);
        if (*DAT_004675ac == 0) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0xec);
        }
        else {
          puVar2 = (undefined4 *)FUN_0009db64();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0xec);
          *unaff_r8 = uVar1;
          unaff_r8[1] = *puVar2;
        }
        *puVar2 = uVar1;
        FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x30));
        *(undefined4 *)((int)register0x00000054 + -0x124) = DAT_004675a4;
        *(undefined1 **)((int)register0x00000054 + -0x120) =
             (undefined1 *)((int)register0x00000054 + -0x5c);
        *(undefined1 **)((int)register0x00000054 + -0x11c) =
             (undefined1 *)((int)register0x00000054 + -0x30);
        FUN_00091764();
        uVar1 = 0;
        uVar4 = 0;
        while( true ) {
          *(undefined4 *)((int)register0x00000054 + -0xf0) = uVar4;
          *(undefined4 *)((int)register0x00000054 + -0x100) = uVar1;
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x30);
          if (puVar2 == (undefined4 *)0x0) break;
          uVar4 = *puVar2;
          uVar1 = puVar2[1];
          *(undefined4 *)((int)register0x00000054 + -0xf8) =
               **(undefined4 **)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x108) =
               (*(undefined4 **)((int)register0x00000054 + -0x2c))[1];
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x40),uVar1,uVar4);
          *(undefined4 *)((int)register0x00000054 + -0x124) = extraout_r3;
          *(undefined4 *)((int)register0x00000054 + -0x120) = extraout_r2;
          FUN_0008f77c();
          *(int *)((int)register0x00000054 + -0x40) = DAT_004675b4;
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0x11c);
          *(undefined4 *)((int)register0x00000054 + -0x124) =
               *(undefined4 *)((int)register0x00000054 + -0xf8);
          *(undefined4 *)((int)register0x00000054 + -0x120) =
               *(undefined4 *)((int)register0x00000054 + -0x108);
          FUN_0008f77c();
          *(int *)((int)register0x00000054 + -0x38) = DAT_004675b4;
          *(undefined4 *)((int)register0x00000054 + -0x34) =
               *(undefined4 *)((int)register0x00000054 + -0x11c);
          *(undefined4 *)((int)register0x00000054 + -0x124) = DAT_004675bc;
          *(undefined4 *)((int)register0x00000054 + -0x120) = 6;
          *(undefined1 **)((int)register0x00000054 + -0x11c) =
               (undefined1 *)((int)register0x00000054 + -0x40);
          *(undefined4 *)((int)register0x00000054 + -0x118) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x114) = 2;
          FUN_0013b72c();
          *(undefined4 *)((int)register0x00000054 + -0x124) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x120) =
               *(undefined4 *)((int)register0x00000054 + -0xf0);
          *(undefined4 *)((int)register0x00000054 + -0x11c) =
               *(undefined4 *)((int)register0x00000054 + -0x100);
          *(undefined4 *)((int)register0x00000054 + -0x118) =
               *(undefined4 *)((int)register0x00000054 + -0x110);
          *(undefined4 *)((int)register0x00000054 + -0x114) =
               *(undefined4 *)((int)register0x00000054 + -0x10c);
          FUN_0007636c();
          *(undefined4 *)((int)register0x00000054 + -0xf0) =
               *(undefined4 *)((int)register0x00000054 + -0x110);
          *(undefined4 *)((int)register0x00000054 + -0x100) =
               *(undefined4 *)((int)register0x00000054 + -0x10c);
          *(undefined1 **)((int)register0x00000054 + -0x124) =
               (undefined1 *)((int)register0x00000054 + -0x30);
          FUN_000919c8();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x100);
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0xf0);
        }
        *(undefined4 *)((int)register0x00000054 + -0x124) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x120) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x11c) = uVar1;
        k3c_internal_pkg_gcode___GCodeCommand__Ack();
        if (*(char *)((int)register0x00000054 + -0x118) == '\0') {
          pcVar3 = (code *)**(undefined4 **)(*(int *)((int)register0x00000054 + 8) + 0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x124) =
               *(undefined4 *)((int)register0x00000054 + -0xf0);
          *(undefined4 *)((int)register0x00000054 + -0x120) =
               *(undefined4 *)((int)register0x00000054 + -0x100);
          *(undefined1 *)((int)register0x00000054 + -0x11c) = 1;
          (*pcVar3)();
        }
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        return;
      }
      *(int *)((int)register0x00000054 + -0x124) = *(int *)((int)register0x00000054 + -0x104);
      *(int *)((int)register0x00000054 + -0x120) = DAT_004675b4;
      *(undefined4 *)((int)register0x00000054 + -0x11c) = DAT_004675c0;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x128);
      if (bVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x467594;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_M117 @ 004675c4 (size 144) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_M117(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
  k3c_internal_pkg_gcode___GCodeDispatch__Run_script_from_command();
  k3c_internal_pkg_logger_Info();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).SetRestartCallback @ 00467668 (size 92) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode___GCodeDispatch__SetRestartCallback(void)

{
  int extraout_r1;
  int iVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4676c0;
    FUN_0009bf64();
  }
  *(undefined4 *)(in_stack_00000004 + 0x4c) = in_stack_00000008;
  iVar1 = in_stack_00000004;
  if (*_UNK_004676c8 != 0) {
    FUN_0009db64();
    *unaff_r8 = in_stack_0000000c;
    unaff_r8[1] = *(undefined4 *)(extraout_r1 + 0x50);
    iVar1 = extraout_r1;
  }
  *(undefined4 *)(iVar1 + 0x50) = in_stack_0000000c;
                    /* WARNING: Could not recover jumptable at 0x004676b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Request_restart @ 004676cc (size 180) */

void k3c_internal_pkg_gcode___GCodeDispatch__Request_restart(void)

{
  int iVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if ((*(char *)(in_stack_00000004 + 0x44) != '\0') && (*(int *)(in_stack_00000004 + 0x4c) != 0)) {
    (**(code **)(*(int *)(in_stack_00000004 + 0x4c) + 0xc))();
  }
  iVar1 = *(int *)(in_stack_00000004 + 0x10);
  if (*(int *)(iVar1 + 0x20) == 0) {
    *(undefined4 *)(iVar1 + 0x20) = in_stack_0000000c;
    if (*DAT_00467784 != 0) {
      iVar1 = FUN_0009db64();
      *unaff_r8 = in_stack_00000008;
      unaff_r8[1] = *(undefined4 *)(iVar1 + 0x1c);
    }
    *(undefined4 *)(iVar1 + 0x1c) = in_stack_00000008;
  }
  **(undefined1 **)(iVar1 + 0xc) = 0;
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_RESTART @ 00467788 (size 76) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_RESTART(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4677d0;
    FUN_0009bf64();
  }
  k3c_internal_pkg_gcode___GCodeDispatch__Request_restart();
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x004677c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_FORCE_REBOOT @ 004677dc (size 100) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_FORCE_REBOOT(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x46783c;
    FUN_0009bf64();
  }
  k3c_internal_pkg_printer___Printer__Send_event();
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x00467830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_FIRMWARE_RESTART @ 00467848 (size 76) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_FIRMWARE_RESTART(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x467890;
    FUN_0009bf64();
  }
  k3c_internal_pkg_gcode___GCodeDispatch__Request_restart();
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x00467884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_ECHO @ 0046789c (size 88) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_ECHO(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4678f0;
    FUN_0009bf64();
  }
  (*(code *)**(undefined4 **)(in_stack_00000008 + 0x1c))();
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x004678e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_STATUS @ 004678f4 (size 356) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_STATUS(void)

{
  int iVar1;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  char local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (*(char *)(in_stack_00000004 + 0x44) == '\0') {
    iVar1 = *(int *)(in_stack_00000004 + 0x10);
    if (((*(int *)(iVar1 + 0x14) != 0x10) || (FUN_00018250(), local_14 == '\0')) &&
       (*(int *)(iVar1 + 0x14) == 0x66)) goto LAB_004679dc;
    do {
      FUN_00151ab0();
      FUN_0007636c();
      FUN_0008f77c();
      FUN_00095b00();
LAB_004679dc:
      FUN_00018250();
    } while( true );
  }
  k3c_internal_pkg_gcode___GCodeDispatch__Respond_state();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_HELP @ 00467a70 (size 1164) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_HELP(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_r2;
  uint uVar5;
  undefined4 *extraout_r2_00;
  undefined4 *extraout_r3;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar8;
  int in_stack_00000004;
  int in_stack_00000008;
  int local_8c;
  undefined4 *local_88;
  uint local_84;
  uint local_80;
  uint local_60;
  undefined4 *local_48 [10];
  undefined1 auStack_20 [8];
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  while (auStack_20 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (*(char *)(in_stack_00000004 + 0x44) == '\0') {
    local_8c = DAT_00467f00;
    FUN_000987f4();
    local_88[1] = 0x32;
    uVar8 = CONCAT44(local_80,local_88);
    if (*DAT_00467f04 != 0) {
      uVar8 = FUN_0009db54(local_88,local_80,*local_88);
      *unaff_r8 = extraout_r2;
    }
    *(undefined4 *)uVar8 = DAT_00467f08;
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
    uVar8 = 0;
  }
  local_60 = iVar1 + 1U;
  if ((uint)((ulonglong)uVar8 >> 0x20) < iVar1 + 1U) {
    local_8c = DAT_00467f00;
    FUN_000987f4();
    local_60 = local_84;
    uVar8 = CONCAT44(local_80,local_88);
  }
  uVar4 = (uint)((ulonglong)uVar8 >> 0x20);
  puVar2 = (undefined4 *)uVar8;
  iVar1 = local_60 - 1;
  puVar2[iVar1 * 2 + 1] = 0x1c;
  if (*DAT_00467f04 != 0) {
    uVar7 = puVar2[iVar1 * 2];
    FUN_0009db54();
    *unaff_r8 = uVar7;
    puVar2 = extraout_r3;
  }
  puVar2[iVar1 * 2] = DAT_00467f0c;
  FUN_0009dee4(0,local_48);
  FUN_00091764();
  local_14 = (undefined4 *)0x0;
  uVar3 = 0;
  uVar5 = 0;
  while (local_48[0] != (undefined4 *)0x0) {
    uVar5 = uVar5 + 1;
    uVar6 = *local_48[0];
    uVar7 = local_48[0][1];
    if (uVar3 < uVar5) {
      local_8c = DAT_00467f00;
      FUN_000987f4();
      local_14 = local_88;
      uVar3 = local_80;
      uVar5 = local_84;
    }
    iVar1 = uVar5 - 1;
    local_14[iVar1 * 2 + 1] = uVar7;
    if (*DAT_00467f04 != 0) {
      local_14 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = uVar6;
      unaff_r8[1] = local_14[iVar1 * 2];
    }
    local_14[iVar1 * 2] = uVar6;
    FUN_000919c8();
  }
  FUN_0008f820();
  FUN_0018955c();
  for (iVar1 = 0; iVar1 < (int)uVar5; iVar1 = iVar1 + 1) {
    uVar7 = local_14[iVar1 * 2];
    FUN_00025f60();
    if (*(int *)(local_8c + 4) != 0) {
      local_60 = local_60 + 1;
      FUN_0009df04(0,&local_10);
      FUN_0008f77c();
      local_10 = DAT_00467f00;
      local_c = uVar7;
      FUN_00025f60();
      FUN_0008f77c();
      local_8 = DAT_00467f00;
      local_8c = 2;
      local_4 = uVar7;
      FUN_0013b72c();
      local_18 = local_88;
      if (uVar4 < local_60) {
        local_60 = local_84;
        local_8c = DAT_00467f00;
        FUN_000987f4();
        puVar2 = local_88;
        uVar4 = local_80;
      }
      uVar8 = CONCAT44(local_60 - 1,puVar2);
      puVar2[(local_60 - 1) * 2 + 1] = local_84;
      if (*DAT_00467f04 != 0) {
        uVar8 = FUN_0009db64();
        *unaff_r8 = extraout_r2_00;
        unaff_r8[1] = *(undefined4 *)((int)uVar8 + (int)((ulonglong)uVar8 >> 0x20) * 8);
        local_18 = extraout_r2_00;
      }
      puVar2 = (undefined4 *)uVar8;
      puVar2[(int)((ulonglong)uVar8 >> 0x20) * 2] = local_18;
    }
  }
  FUN_0014f8fc();
  (*(code *)**(undefined4 **)(in_stack_00000008 + 0x1c))();
  return;
}



/* k3c/internal/pkg/gcode.Add_early_printer_objects1 @ 00467f24 (size 88) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_gcode_Add_early_printer_objects1(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x467f78;
    FUN_0009bf64();
  }
  k3c_internal_pkg_gcode_NewGCodeDispatch();
  k3c_internal_pkg_printer___Printer__Add_object();
                    /* WARNING: Could not recover jumptable at 0x00467f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/gcode.MustLookupGcode @ 00467f88 (size 192) */

void k3c_internal_pkg_gcode_MustLookupGcode
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
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x20) =
           PTR_s_gcodeok__sM8844_helpReady_________00820821_0x5d2_0046804c;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = 5;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      if (*(undefined **)((int)register0x00000054 + -0x10) == PTR_DAT_00468050) {
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        return;
      }
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00468054;
      *(undefined **)((int)register0x00000054 + -4) = PTR_DAT_00468058;
      *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0046805c;
      *(undefined4 *)((int)register0x00000054 + -0x20) = 0x2c;
      *(undefined1 **)((int)register0x00000054 + -0x1c) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 1;
      FUN_001386c4();
      bVar3 = *(int *)((int)register0x00000054 + -0x10) == 0;
      uVar1 = 0;
      if (!bVar3) {
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x10) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0x24) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0xc);
      unaff_lr = 0x468038;
      uVar4 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x468044;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).CancelEvent-fm @ 00468060 (size 32) */

void k3c_internal_pkg_gcode___GCodeDispatch__CancelEvent_fm(void)

{
  int unaff_r7;
  
  *(undefined1 *)(*(int *)(unaff_r7 + 4) + 0x15) = 1;
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).ResetCancelEvent-fm @ 00468080 (size 32) */

void k3c_internal_pkg_gcode___GCodeDispatch__ResetCancelEvent_fm(void)

{
  int unaff_r7;
  
  *(undefined1 *)(*(int *)(unaff_r7 + 4) + 0x15) = 0;
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Handle_ready-fm @ 004680a0 (size 164) */

void k3c_internal_pkg_gcode___GCodeDispatch__Handle_ready_fm(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&iStack_c;
  }
  iStack_c = *(int *)(unaff_r7 + 4);
  *(undefined1 *)(iStack_c + 0x44) = 1;
  uVar2 = *(undefined4 *)(iStack_c + 0x2c);
  if (*DAT_00468148 != 0) {
    iStack_c = FUN_0009db64();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(undefined4 *)(iStack_c + 0x48);
    uVar2 = extraout_r2;
  }
  *(undefined4 *)(iStack_c + 0x48) = uVar2;
  uStack_8 = DAT_0046814c;
  uStack_4 = 5;
  k3c_internal_pkg_gcode___GCodeDispatch__Respond_state();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Handle_shutdown-fm @ 00468150 (size 176) */

void k3c_internal_pkg_gcode___GCodeDispatch__Handle_shutdown_fm(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&iStack_c;
  }
  iStack_c = *(int *)(unaff_r7 + 4);
  if (*(char *)(iStack_c + 0x44) != '\0') {
    *(undefined1 *)(iStack_c + 0x44) = 0;
    uVar2 = *(undefined4 *)(iStack_c + 0x28);
    if (*DAT_00468204 != 0) {
      iStack_c = FUN_0009db64();
      *unaff_r8 = extraout_r2;
      unaff_r8[1] = *(undefined4 *)(iStack_c + 0x48);
      uVar2 = extraout_r2;
    }
    *(undefined4 *)(iStack_c + 0x48) = uVar2;
    uStack_8 = DAT_00468208;
    uStack_4 = 8;
    k3c_internal_pkg_gcode___GCodeDispatch__Respond_state();
  }
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Handle_disconnect-fm @ 0046820c (size 116) */

void k3c_internal_pkg_gcode___GCodeDispatch__Handle_disconnect_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_c;
  }
  uStack_c = *(undefined4 *)(unaff_r7 + 4);
  uStack_8 = DAT_00468284;
  uStack_4 = 10;
  k3c_internal_pkg_gcode___GCodeDispatch__Respond_state();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_M110-fm @ 00468288 (size 128) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_M110_fm(void)

{
  int *piVar1;
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *puStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&puStack_14;
  }
  uStack_8 = DAT_0046830c;
  uStack_4 = DAT_00468310;
  puStack_14 = &uStack_8;
  uStack_10 = 1;
  uStack_c = 1;
  k3c_internal_pkg_logger_Debug();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_M8844-fm @ 00468314 (size 108) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_M8844_fm(void)

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
  k3c_internal_pkg_gcode___GCodeDispatch__Cmd_M8844();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_M115-fm @ 00468380 (size 108) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_M115_fm(void)

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
  k3c_internal_pkg_gcode___GCodeDispatch__Cmd_M115();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_M117-fm @ 004683ec (size 108) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_M117_fm(void)

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
  k3c_internal_pkg_gcode___GCodeDispatch__Cmd_M117();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_RESTART-fm @ 00468458 (size 116) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_RESTART_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_c;
  }
  uStack_c = *(undefined4 *)(unaff_r7 + 4);
  uStack_8 = DAT_004684d0;
  uStack_4 = 7;
  k3c_internal_pkg_gcode___GCodeDispatch__Request_restart();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_FIRMWARE_RESTART-fm @ 004684d4 (size 116) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_FIRMWARE_RESTART_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_c;
  }
  uStack_c = *(undefined4 *)(unaff_r7 + 4);
  uStack_8 = DAT_0046854c;
  uStack_4 = 0x10;
  k3c_internal_pkg_gcode___GCodeDispatch__Request_restart();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_ECHO-fm @ 00468550 (size 128) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_ECHO_fm(void)

{
  int *piVar1;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined1 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_c;
  }
  uStack_c = *(undefined4 *)(in_stack_00000004 + 0xc);
  uStack_8 = *(undefined4 *)(in_stack_00000004 + 0x10);
  uStack_4 = 0;
  (*(code *)**(undefined4 **)(in_stack_00000004 + 0x1c))();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_STATUS-fm @ 004685d0 (size 108) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_STATUS_fm(void)

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
  k3c_internal_pkg_gcode___GCodeDispatch__Cmd_STATUS();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_HELP-fm @ 0046863c (size 108) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_HELP_fm(void)

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
  k3c_internal_pkg_gcode___GCodeDispatch__Cmd_HELP();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_FORCE_REBOOT-fm @ 004686a8 (size 140) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_FORCE_REBOOT_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_2c;
  }
  uStack_2c = *(undefined4 *)(*(int *)(unaff_r7 + 4) + 0x10);
  uStack_28 = DAT_00468738;
  uStack_24 = 0x1a;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  k3c_internal_pkg_printer___Printer__Send_event();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeIO).Handle_ready-fm @ 0046873c (size 124) */

void k3c_internal_pkg_gcode___GCodeIO__Handle_ready_fm(void)

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
  k3c_internal_pkg_gcode___GCodeIO__Handle_ready();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeIO).Handle_shutdown-fm @ 004687b8 (size 124) */

void k3c_internal_pkg_gcode___GCodeIO__Handle_shutdown_fm(void)

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
  k3c_internal_pkg_gcode___GCodeIO__Handle_shutdown();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeIO).Respond_raw-fm @ 00468834 (size 100) */

void k3c_internal_pkg_gcode___GCodeIO__Respond_raw_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_c;
  }
  uStack_c = *(undefined4 *)(unaff_r7 + 4);
  uStack_8 = in_stack_00000004;
  uStack_4 = in_stack_00000008;
  k3c_internal_pkg_gcode___GCodeIO__Respond_raw();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeIO).Process_data-fm @ 00468898 (size 108) */

void k3c_internal_pkg_gcode___GCodeIO__Process_data_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
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
  k3c_internal_pkg_gcode___GCodeIO__Process_data();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Respond_info-fm @ 00468904 (size 108) */

void k3c_internal_pkg_gcode___GCodeDispatch__Respond_info_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 in_stack_0000000c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined1 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *(undefined4 *)(unaff_r7 + 4);
  uStack_c = in_stack_00000004;
  uStack_8 = in_stack_00000008;
  uStack_4 = in_stack_0000000c;
  k3c_internal_pkg_gcode___GCodeDispatch__Respond_info();
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Respond_raw-fm @ 00468970 (size 156) */

void k3c_internal_pkg_gcode___GCodeDispatch__Respond_raw_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_14;
  }
  iStack_4 = *(int *)(*(int *)(unaff_r7 + 4) + 0x1c);
  iStack_8 = *(int *)(*(int *)(unaff_r7 + 4) + 0x20);
  for (iStack_c = 0; iStack_c < iStack_8; iStack_c = iStack_c + 1) {
    uStack_14 = in_stack_00000004;
    uStack_10 = in_stack_00000008;
    (*(code *)**(undefined4 **)(iStack_4 + iStack_c * 4))();
  }
  return;
}



/* k3c/internal/pkg/gcode.(*GCodeDispatch).Cmd_default-fm @ 00468a0c (size 108) */

void k3c_internal_pkg_gcode___GCodeDispatch__Cmd_default_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 local_10;
  undefined4 local_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&local_10;
  }
  local_10 = *(undefined4 *)(unaff_r7 + 4);
  local_c = in_stack_00000004;
  k3c_internal_pkg_gcode___GCodeDispatch__Cmd_default();
  return;
}



