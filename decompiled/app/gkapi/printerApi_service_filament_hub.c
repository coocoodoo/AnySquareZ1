// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/filament_hub   functions: 35
/* printerApi/service/filament_hub.GetRelatedACE2 @ 00442bc0 (size 1172) */

void printerApi_service_filament_hub_GetRelatedACE2(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int iVar5;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r3;
  int iVar6;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  int extraout_r3_02;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  bool bVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x10)) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x90);
      *(undefined4 *)((int)register0x00000054 + -0x90) = unaff_lr;
      FUN_0008b6b8();
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + -0x8c);
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x88) =
           *(undefined4 *)((int)register0x00000054 + 8);
      FUN_00148180();
      uVar4 = *(uint *)((int)register0x00000054 + -0x80);
      if ((int)uVar4 < 10) {
        uVar4 = 0;
        goto LAB_00442c38;
      }
      uVar1 = uVar4 - 10;
      bVar8 = uVar4 == uVar1;
      if (uVar1 <= uVar4) {
        *(uint *)((int)register0x00000054 + -0x8c) =
             *(int *)((int)register0x00000054 + -0x84) + uVar1;
        *(undefined **)((int)register0x00000054 + -0x88) =
             PTR_s__gcode_3mfuser_abortgkui_1_loggk_007765bd_0x2ca_00443058;
        *(undefined4 *)((int)register0x00000054 + -0x84) = 10;
        FUN_000150d4();
        uVar4 = (uint)*(byte *)((int)register0x00000054 + -0x80);
LAB_00442c38:
        *(char *)((int)register0x00000054 + -0x5d) = (char)uVar4;
        *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0044305c + uVar4 * 8;
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)((int)register0x00000054 + 8);
        internal_filepathlite_Base();
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x10),
                     *(undefined4 *)((int)register0x00000054 + -0x80),
                     *(undefined4 *)((int)register0x00000054 + -0x84));
        *(undefined4 *)((int)register0x00000054 + -0x8c) = extraout_r3;
        *(undefined4 *)((int)register0x00000054 + -0x88) = extraout_r2;
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_SUB_00443060;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x84);
        *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00443064;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_00443068;
        *(undefined4 *)((int)register0x00000054 + -0x88) = 0x26;
        *(undefined1 **)((int)register0x00000054 + -0x84) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x80) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x7c) = 2;
        printerApi_common_logger_Debugf();
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x80) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
        printerApi_service_filament_hub_GetACMInfo();
        if (*(int *)((int)register0x00000054 + -0x68) == 0) {
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x70);
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x74);
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x10));
          *(undefined **)((int)register0x00000054 + -0x10) = PTR_SUB_00443060;
          *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0044306c;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = extraout_r2_00;
          FUN_0001cec0();
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00443070;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x88);
          *(undefined1 **)((int)register0x00000054 + -0x8c) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x88) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x84) = 2;
          iVar2 = printerApi_common_logger_Debug();
          iVar5 = *(int *)((int)register0x00000054 + -0x20);
          for (iVar6 = *(int *)((int)register0x00000054 + -0x58); 0 < iVar6; iVar6 = iVar6 + -1) {
            *(int *)((int)register0x00000054 + -0x58) = iVar6;
            *(int *)((int)register0x00000054 + -0x24) = iVar5;
            FUN_00098dec(iVar2,iVar5,(undefined1 *)((int)register0x00000054 + -0x4c));
            uVar4 = *(uint *)((int)register0x00000054 + -0x34);
            if (uVar4 < 4) {
              *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_00443078;
              *(undefined4 *)((int)register0x00000054 + -0x88) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
              FUN_0008d6bc();
              **(undefined1 **)((int)register0x00000054 + -0x80) = 1;
              iVar6 = *(int *)((int)register0x00000054 + -0x58);
            }
            else if (uVar4 - 4 < 4) {
              *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_00443078;
              *(undefined4 *)((int)register0x00000054 + -0x88) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              *(undefined4 *)((int)register0x00000054 + -0x84) = 1;
              FUN_0008d6bc();
              **(undefined1 **)((int)register0x00000054 + -0x80) = 1;
              iVar6 = *(int *)((int)register0x00000054 + -0x58);
            }
            else if (uVar4 - 8 < 4) {
              *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_00443078;
              *(undefined4 *)((int)register0x00000054 + -0x88) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              *(undefined4 *)((int)register0x00000054 + -0x84) = 2;
              FUN_0008d6bc();
              **(undefined1 **)((int)register0x00000054 + -0x80) = 1;
              iVar6 = *(int *)((int)register0x00000054 + -0x58);
            }
            else {
              iVar6 = extraout_r3_02;
              if (uVar4 - 0xc < 4) {
                *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_00443078;
                *(undefined4 *)((int)register0x00000054 + -0x88) =
                     *(undefined4 *)((int)register0x00000054 + -0x54);
                *(undefined4 *)((int)register0x00000054 + -0x84) = 3;
                FUN_0008d6bc();
                **(undefined1 **)((int)register0x00000054 + -0x80) = 1;
                iVar6 = *(int *)((int)register0x00000054 + -0x58);
              }
            }
            iVar2 = *(int *)((int)register0x00000054 + -0x24);
            iVar5 = iVar2 + 0x28;
          }
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00443078;
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_00443080;
          *(undefined4 *)((int)register0x00000054 + -0x88) = 0x1f;
          *(undefined1 **)((int)register0x00000054 + -0x84) =
               (undefined1 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 1;
          printerApi_common_logger_Debugf();
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          return;
        }
        *(int *)((int)register0x00000054 + -0x5c) = *(int *)((int)register0x00000054 + -0x68);
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -100);
        if (*(char *)((int)register0x00000054 + -0x5d) != '\0') {
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + 8);
          internal_filepathlite_Base();
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x10),
                       *(undefined4 *)((int)register0x00000054 + -0x80),
                       *(undefined4 *)((int)register0x00000054 + -0x84));
          *(undefined4 *)((int)register0x00000054 + -0x8c) = extraout_r3_00;
          *(undefined4 *)((int)register0x00000054 + -0x88) = extraout_r2_01;
          FUN_0008a578();
          *(undefined **)((int)register0x00000054 + -0x10) = PTR_SUB_00443060;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x84);
          uVar3 = 0;
          if (*(int *)((int)register0x00000054 + -0x5c) != 0) {
            uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x5c) + 4);
          }
          *(undefined4 *)((int)register0x00000054 + -8) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_00443074;
          *(undefined4 *)((int)register0x00000054 + -0x88) = 0x47;
          *(undefined1 **)((int)register0x00000054 + -0x84) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x80) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 2;
          printerApi_common_logger_Warnf();
          *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_00443078;
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
          FUN_0008d6bc();
          **(undefined1 **)((int)register0x00000054 + -0x80) = 1;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)((int)register0x00000054 + 8);
        internal_filepathlite_Base();
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x10),
                     *(undefined4 *)((int)register0x00000054 + -0x80),
                     *(undefined4 *)((int)register0x00000054 + -0x84));
        *(undefined4 *)((int)register0x00000054 + -0x8c) = extraout_r3_01;
        *(undefined4 *)((int)register0x00000054 + -0x88) = extraout_r2_02;
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_SUB_00443060;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x84);
        uVar3 = 0;
        if (*(int *)((int)register0x00000054 + -0x5c) != 0) {
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x5c) + 4);
        }
        *(undefined4 *)((int)register0x00000054 + -8) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_0044307c;
        *(undefined4 *)((int)register0x00000054 + -0x88) = 0x38;
        *(undefined1 **)((int)register0x00000054 + -0x84) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x80) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x7c) = 2;
        printerApi_common_logger_Warnf();
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        return;
      }
      param_1 = FUN_00098758();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x90);
      if (bVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x443050;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/filament_hub.classifyMapping @ 00443084 (size 472) */

/* WARNING: Removing unreachable block (ram,0x0044320c) */

void printerApi_service_filament_hub_classifyMapping(void)

{
  char cVar1;
  int iVar2;
  int extraout_r3;
  int extraout_r3_00;
  int iVar3;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_0000001c;
  int in_stack_0000002c;
  int in_stack_00000030;
  undefined4 local_98;
  char local_94;
  int local_8c [2];
  int local_84;
  int local_64;
  int local_60;
  int local_48;
  char *local_44;
  int local_40;
  undefined1 auStack_24 [4];
  int local_20;
  int local_1c;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  while (auStack_24 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x443258;
    FUN_00096bb8();
  }
  do {
    if (in_stack_00000030 < 1) {
      return;
    }
    local_4 = in_stack_0000002c;
    FUN_00098dc4(in_stack_0000002c,in_stack_0000002c,&local_48,in_stack_00000030,unaff_lr);
    iVar2 = local_20;
    in_stack_00000030 = extraout_r3;
    for (iVar3 = local_1c; 0 < iVar3; iVar3 = iVar3 + -1) {
      local_8 = iVar2;
      FUN_00098db4(iVar2,iVar2,local_8c);
      if (in_stack_0000001c == local_8c[0] + local_48 * 4) {
        if (local_84 == 10) {
          local_98 = 10;
          FUN_000150d4();
          cVar1 = local_94;
        }
        else {
          cVar1 = '\0';
        }
        if (((cVar1 == '\0') && (local_60 != 3)) &&
           (((local_40 != 4 ||
             (((*local_44 != 'b' || (local_44[1] != 'u')) || (local_44[2] != 's')))) ||
            (local_44[3] != 'y')))) {
          if ((local_64 != 0) && (local_64 != 3)) {
            printerApi_service_filament_hub_getMaterialCategory();
            local_c = local_98;
            printerApi_service_filament_hub_getMaterialCategory();
            FUN_000150d4();
            if (local_94 != '\0') {
              return;
            }
          }
          return;
        }
        return;
      }
      iVar2 = local_8 + 0x44;
      in_stack_00000030 = extraout_r3_00;
    }
    in_stack_0000002c = local_4 + 0x3c;
    in_stack_00000030 = in_stack_00000030 + -1;
  } while( true );
}



/* printerApi/service/filament_hub.mappingsUsableForCurrentHubs @ 00443264 (size 248) */

void printerApi_service_filament_hub_mappingsUsableForCurrentHubs(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r3;
  int iVar4;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined1 in_stack_0000001c;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined1 auStack_2c [24];
  int local_14;
  int local_4;
  
  while (iVar3 = in_stack_00000008, local_30 = in_stack_00000004, local_4 = in_stack_00000004,
        iVar4 = in_stack_00000008, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x44335c;
    FUN_00096bb8();
  }
  while( true ) {
    if (iVar4 < 1) {
      while( true ) {
        if (iVar3 < 1) {
          return;
        }
        iVar4 = local_30;
        local_30 = iVar3;
        uVar2 = FUN_00098dec(iVar4,local_4,auStack_2c,local_4,unaff_lr);
        FUN_00098dec(uVar2,auStack_2c,auStack_68);
        local_40 = in_stack_00000010;
        local_3c = in_stack_00000014;
        local_38 = in_stack_00000018;
        printerApi_service_filament_hub_classifyMapping();
        if ((local_34 != 0) && (local_34 != 1)) break;
        local_4 = local_4 + 0x28;
        iVar3 = local_30 + -1;
      }
      return;
    }
    iVar1 = local_4;
    local_4 = local_30;
    FUN_00098dec(local_30,local_30,auStack_2c,iVar1,unaff_lr);
    if (local_14 < 0) break;
    local_30 = local_4 + 0x28;
    local_4 = extraout_r3;
    iVar4 = iVar4 + -1;
  }
  return;
}



/* printerApi/service/filament_hub.selfHealCachedUseAms @ 00443360 (size 396) */

void printerApi_service_filament_hub_selfHealCachedUseAms(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  byte in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined1 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_service_filament_hub_mappingsUsableForCurrentHubs();
  if ((in_stack_00000014 ^ (byte)local_14) != 1) {
    return;
  }
  printerApi_service_filament_hub_writeACMInfo();
  if (local_14 == 0) {
    printerApi_service_filament_hub_syncDualACM();
    return;
  }
  printerApi_common_logger_Warnf();
  return;
}



/* printerApi/service/filament_hub.GetACMInfo @ 004434f4 (size 1480) */

void printerApi_service_filament_hub_GetACMInfo(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint extraout_r2;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  bool bVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x24)) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0xa4);
      *(undefined4 *)((int)register0x00000054 + -0xa4) = unaff_lr;
      FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x10));
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x9c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      FUN_0008a578();
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_SUB_00443ac0;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x98);
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      FUN_0001cec0();
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00443ac4;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x9c);
      *(undefined **)((int)register0x00000054 + -0xa0) = PTR_DAT_00443ac8;
      *(undefined4 *)((int)register0x00000054 + -0x9c) = 0x2c;
      *(undefined1 **)((int)register0x00000054 + -0x98) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x94) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x90) = 2;
      printerApi_common_logger_Debugf();
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x9c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      printerApi_common_file_FileExist();
      if (*(char *)((int)register0x00000054 + -0x98) == '\0') {
        *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x9c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_SUB_00443ac0;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x98);
        *(undefined **)((int)register0x00000054 + -0xa0) = PTR_DAT_00443ad8;
        *(undefined4 *)((int)register0x00000054 + -0x9c) = 0x13;
        *(undefined1 **)((int)register0x00000054 + -0x98) =
             (undefined1 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x94) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x90) = 1;
        FUN_00130144();
        *(undefined1 *)((int)register0x00000054 + 0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -0x8c);
        *(undefined4 *)((int)register0x00000054 + 0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0x88);
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x9c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      FUN_00148180();
      uVar3 = *(uint *)((int)register0x00000054 + -0x94);
      iVar2 = *(int *)((int)register0x00000054 + -0x98);
      if ((int)uVar3 < 4) {
        cVar4 = '\0';
LAB_0044360c:
        *(char *)((int)register0x00000054 + -0x59) = cVar4;
        bVar8 = cVar4 == '\0';
        if (!bVar8) {
          cVar1 = '\0';
          goto LAB_00443674;
        }
        if ((int)uVar3 < 6) {
          bVar8 = true;
          cVar1 = '\0';
          goto LAB_00443674;
        }
        uVar5 = uVar3 - 6;
        uVar7 = uVar3 == uVar5;
        if (uVar5 <= uVar3) {
          *(uint *)((int)register0x00000054 + -0xa0) = uVar5 + iVar2;
          *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_00443ad0;
          *(undefined4 *)((int)register0x00000054 + -0x98) = 6;
          FUN_000150d4();
          cVar1 = *(char *)((int)register0x00000054 + -0x94);
          cVar4 = *(char *)((int)register0x00000054 + -0x59);
          bVar8 = cVar4 == '\0';
LAB_00443674:
          if ((bVar8) && (cVar1 == '\0')) {
            *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xa0) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            FUN_0008a578(*(undefined4 *)((int)register0x00000054 + 8),cVar4);
            *(undefined **)((int)register0x00000054 + -0x18) = PTR_SUB_00443ac0;
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x98);
            *(undefined **)((int)register0x00000054 + -0xa0) = PTR_DAT_00443ad4;
            *(undefined4 *)((int)register0x00000054 + -0x9c) = 0x11;
            *(undefined1 **)((int)register0x00000054 + -0x98) =
                 (undefined1 *)((int)register0x00000054 + -0x18);
            *(undefined4 *)((int)register0x00000054 + -0x94) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x90) = 1;
            FUN_00130144();
            *(undefined1 *)((int)register0x00000054 + 0x18) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x8c);
            *(undefined4 *)((int)register0x00000054 + 0x2c) =
                 *(undefined4 *)((int)register0x00000054 + -0x88);
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0xa0) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x9c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          printerApi_service_filament_hub_getAcmFileNameByGcodeFile();
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x98);
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          FUN_00098a14(0,(undefined1 *)((int)register0x00000054 + -0x48));
          printerApi_service_filament_hub_queryFilamentHubEntities();
          if (*(int *)((int)register0x00000054 + -0x94) != 0) {
            *(undefined1 *)((int)register0x00000054 + 0x18) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
            *(int *)((int)register0x00000054 + 0x28) = *(int *)((int)register0x00000054 + -0x94);
            *(undefined4 *)((int)register0x00000054 + 0x2c) =
                 *(undefined4 *)((int)register0x00000054 + -0x90);
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0xa0);
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + -0x9c);
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + -0x98);
          *(undefined4 *)((int)register0x00000054 + -0xa0) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x9c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x98) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x94) =
               *(undefined4 *)((int)register0x00000054 + -0x4c);
          *(undefined1 *)((int)register0x00000054 + -0x90) =
               *(undefined1 *)((int)register0x00000054 + -0x59);
          *(undefined1 **)((int)register0x00000054 + -0x8c) =
               (undefined1 *)((int)register0x00000054 + -0x48);
          printerApi_service_filament_hub_loadAndValidateCache();
          if (*(char *)((int)register0x00000054 + -0x78) == '\0') {
            cVar4 = *(char *)((int)register0x00000054 + -0x59);
          }
          else {
            if (*(char *)((int)register0x00000054 + -0x77) == '\0') {
              *(undefined4 *)((int)register0x00000054 + -0xa0) =
                   *(undefined4 *)((int)register0x00000054 + 4);
              *(undefined4 *)((int)register0x00000054 + -0x9c) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x98) =
                   *(undefined4 *)((int)register0x00000054 + -0x1c);
              *(undefined4 *)((int)register0x00000054 + -0x94) =
                   *(undefined4 *)((int)register0x00000054 + -0x4c);
              *(undefined1 *)((int)register0x00000054 + -0x90) =
                   *(undefined1 *)((int)register0x00000054 + -0x88);
              *(undefined4 *)((int)register0x00000054 + -0x8c) =
                   *(undefined4 *)((int)register0x00000054 + -0x84);
              *(undefined4 *)((int)register0x00000054 + -0x88) =
                   *(undefined4 *)((int)register0x00000054 + -0x80);
              *(undefined4 *)((int)register0x00000054 + -0x84) =
                   *(undefined4 *)((int)register0x00000054 + -0x7c);
              *(undefined4 *)((int)register0x00000054 + -0x80) =
                   *(undefined4 *)((int)register0x00000054 + -0x20);
              *(undefined4 *)((int)register0x00000054 + -0x7c) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              *(undefined4 *)((int)register0x00000054 + -0x78) =
                   *(undefined4 *)((int)register0x00000054 + -0x50);
              printerApi_service_filament_hub_selfHealCachedUseAms();
              *(undefined1 *)((int)register0x00000054 + 0x18) =
                   *(undefined1 *)((int)register0x00000054 + -0x74);
              *(undefined4 *)((int)register0x00000054 + 0x1c) =
                   *(undefined4 *)((int)register0x00000054 + -0x70);
              *(undefined4 *)((int)register0x00000054 + 0x20) =
                   *(undefined4 *)((int)register0x00000054 + -0x6c);
              *(undefined4 *)((int)register0x00000054 + 0x24) =
                   *(undefined4 *)((int)register0x00000054 + -0x68);
              *(undefined4 *)((int)register0x00000054 + 0x28) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x2c) = 0;
              return;
            }
            *(undefined1 *)((int)register0x00000054 + -0xa0) =
                 *(undefined1 *)((int)register0x00000054 + -0x88);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            *(undefined4 *)((int)register0x00000054 + -0x94) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            *(undefined4 *)((int)register0x00000054 + -0x90) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + -0x4c);
            *(undefined4 *)((int)register0x00000054 + -0x80) =
                 *(undefined4 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)((int)register0x00000054 + -0x7c) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            *(undefined4 *)((int)register0x00000054 + -0x78) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            printerApi_service_filament_hub_refreshMappingsIfNeeded();
            if (*(char *)((int)register0x00000054 + -100) != '\0') {
              *(undefined1 *)((int)register0x00000054 + 0x18) =
                   *(undefined1 *)((int)register0x00000054 + -0x74);
              *(undefined4 *)((int)register0x00000054 + 0x1c) =
                   *(undefined4 *)((int)register0x00000054 + -0x70);
              *(undefined4 *)((int)register0x00000054 + 0x20) =
                   *(undefined4 *)((int)register0x00000054 + -0x6c);
              *(undefined4 *)((int)register0x00000054 + 0x24) =
                   *(undefined4 *)((int)register0x00000054 + -0x68);
              *(undefined4 *)((int)register0x00000054 + 0x28) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x2c) = 0;
              return;
            }
            cVar4 = *(char *)((int)register0x00000054 + -0x59);
          }
          if (cVar4 == '\0') {
            *(undefined4 *)((int)register0x00000054 + -0xa0) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x94) =
                 *(undefined4 *)((int)register0x00000054 + -0x4c);
            *(undefined4 *)((int)register0x00000054 + -0x90) =
                 *(undefined4 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            printerApi_service_filament_hub_buildGcodeACMInfo();
            *(undefined1 *)((int)register0x00000054 + 0x18) =
                 *(undefined1 *)((int)register0x00000054 + -0x84);
            *(undefined4 *)((int)register0x00000054 + 0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            *(undefined4 *)((int)register0x00000054 + 0x20) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            *(undefined4 *)((int)register0x00000054 + 0x24) =
                 *(undefined4 *)((int)register0x00000054 + -0x78);
            *(undefined4 *)((int)register0x00000054 + 0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x74);
            *(undefined4 *)((int)register0x00000054 + 0x2c) =
                 *(undefined4 *)((int)register0x00000054 + -0x70);
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0xa0) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x9c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x98) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x94) =
               *(undefined4 *)((int)register0x00000054 + -0x4c);
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          *(undefined1 **)((int)register0x00000054 + -0x78) =
               (undefined1 *)((int)register0x00000054 + -0x48);
          printerApi_service_filament_hub_build3MFACMInfo();
          *(undefined1 *)((int)register0x00000054 + 0x18) =
               *(undefined1 *)((int)register0x00000054 + -0x74);
          *(undefined4 *)((int)register0x00000054 + 0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x70);
          *(undefined4 *)((int)register0x00000054 + 0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x6c);
          *(undefined4 *)((int)register0x00000054 + 0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          *(undefined4 *)((int)register0x00000054 + 0x28) =
               *(undefined4 *)((int)register0x00000054 + -100);
          *(undefined4 *)((int)register0x00000054 + 0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          return;
        }
        FUN_00098758(uVar5);
        uVar5 = extraout_r2;
      }
      else {
        uVar5 = uVar3 - 4;
        uVar7 = uVar3 == uVar5;
        if (uVar5 <= uVar3) {
          *(uint *)((int)register0x00000054 + -0x58) = uVar3;
          *(int *)((int)register0x00000054 + -0x24) = iVar2;
          *(uint *)((int)register0x00000054 + -0xa0) = uVar5 + iVar2;
          *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_00443acc;
          *(undefined4 *)((int)register0x00000054 + -0x98) = 4;
          FUN_000150d4();
          cVar4 = *(char *)((int)register0x00000054 + -0x94);
          uVar3 = *(uint *)((int)register0x00000054 + -0x58);
          iVar2 = *(int *)((int)register0x00000054 + -0x24);
          goto LAB_0044360c;
        }
      }
      param_1 = FUN_00098758(uVar5);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xa4);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x443ab8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/filament_hub.(*resolved3MFPaintInfo).load @ 00443adc (size 224) */

void printerApi_service_filament_hub___resolved3MFPaintInfo__load(void)

{
  undefined4 *puVar1;
  undefined4 extraout_r2;
  int unaff_r10;
  undefined8 uVar2;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (*(char *)(in_stack_00000004 + 8) == '\0') {
    printerApi_service_filament_hub_resolve3MFPaintInfo();
    puVar1 = in_stack_00000004;
    if (local_8 == 0) {
      *(undefined1 *)in_stack_00000004 = local_28;
      in_stack_00000004[2] = local_20;
      in_stack_00000004[3] = local_1c;
      if (*DAT_00443bc0 != 0) {
        uVar2 = FUN_000986c8(in_stack_00000004);
        local_14 = (undefined4)((ulonglong)uVar2 >> 0x20);
        in_stack_00000004 = (undefined4 *)uVar2;
        *puVar1 = local_24;
        puVar1[1] = in_stack_00000004[1];
        puVar1[2] = local_18;
        puVar1[3] = in_stack_00000004[4];
        puVar1[4] = local_10;
        puVar1[5] = in_stack_00000004[6];
        local_c = extraout_r2;
      }
      in_stack_00000004[1] = local_24;
      in_stack_00000004[5] = local_14;
      in_stack_00000004[4] = local_18;
      in_stack_00000004[7] = local_c;
      in_stack_00000004[6] = local_10;
      *(undefined1 *)(in_stack_00000004 + 8) = 1;
    }
    return;
  }
  return;
}



/* printerApi/service/filament_hub.loadAndValidateCache @ 00443bc4 (size 1784) */

/* WARNING: Removing unreachable block (ram,0x00443e7c) */
/* WARNING: Removing unreachable block (ram,0x00443e8c) */

void printerApi_service_filament_hub_loadAndValidateCache(void)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint extraout_r1;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  uint in_stack_0000000c;
  int in_stack_00000010;
  char in_stack_00000014;
  int in_stack_00000018;
  undefined1 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined1 in_stack_0000002c;
  uint local_60;
  int local_5c;
  uint local_58;
  int local_50;
  undefined *local_28;
  int local_24;
  undefined *local_20;
  int local_1c;
  undefined *local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (in_stack_00000010 == 0) {
    uVar3 = 0;
  }
  else {
    printerApi_common_file_FileExist();
    uVar3 = local_60 & 0xff;
  }
  if (uVar3 == 0) {
    if (in_stack_00000010 == 0) {
      uVar3 = 0;
    }
    else {
      printerApi_common_file_FileExist();
      if ((char)local_60 == '\0') {
        local_60 = in_stack_0000000c;
        local_5c = in_stack_00000010;
        printerApi_service_filament_hub_tryFallbackToPersistentACM();
        uVar3 = local_58 & 0xff;
      }
      else {
        uVar3 = 0;
      }
    }
    if ((uVar3 != 0) && (printerApi_service_filament_hub_readACMInfoFromFile(), local_50 == 0)) {
      local_4 = local_5c;
      internal_filepathlite_Base();
      local_18 = (undefined *)0x0;
      local_14 = 0;
      FUN_0008a578();
      local_18 = PTR_SUB_004442c0;
      local_14 = local_60;
      printerApi_common_logger_Infof();
      return;
    }
    return;
  }
  printerApi_service_filament_hub_readACMInfoFromFile();
  if (local_50 != 0) {
    local_18 = *(undefined **)(local_50 + 4);
    printerApi_common_logger_Warnf();
    return;
  }
  local_4 = local_5c;
  if (in_stack_00000014 == '\0') {
    printerApi_service_filament_hub_extractACMInfoFromGcodePaintInfo();
    if (local_58 == 0) {
      bVar1 = false;
      local_58 = extraout_r1;
    }
    else {
      local_8 = local_5c;
      for (iVar4 = 0; iVar4 < (int)local_58; iVar4 = iVar4 + 1) {
        iVar6 = local_4 + iVar4 * 0x28;
        iVar5 = local_8 + iVar4 * 0x28;
        if (*(int *)(local_8 + iVar4 * 0x28) != *(int *)(local_4 + iVar4 * 0x28)) {
          bVar2 = 0;
          goto LAB_00443fd4;
        }
        uVar3 = *(uint *)(iVar6 + 0x14);
        if ((uVar3 != *(uint *)(iVar5 + 0x14)) ||
           (local_10 = iVar5, local_c = iVar6, FUN_000150d4(), local_60 = uVar3,
           (char)local_5c == '\0')) {
          bVar2 = 0;
          goto LAB_00443fd4;
        }
        if (*(int *)(local_c + 8) != *(int *)(local_10 + 8)) {
          bVar2 = 0;
          goto LAB_00443fd4;
        }
        for (iVar5 = 0; iVar5 < *(int *)(local_c + 8); iVar5 = iVar5 + 1) {
          if (*(int *)(*(int *)(local_10 + 4) + iVar5 * 4) !=
              *(int *)(*(int *)(local_c + 4) + iVar5 * 4)) {
            bVar2 = 0;
            goto LAB_00443fd4;
          }
        }
      }
      bVar2 = 1;
LAB_00443fd4:
      bVar1 = (bool)(bVar2 ^ 1);
    }
    if (bVar1) {
      internal_filepathlite_Base(in_stack_00000008,local_58);
      local_18 = (undefined *)0x0;
      local_14 = 0;
      FUN_0008a578();
      local_18 = PTR_SUB_004442c0;
      local_14 = local_60;
      printerApi_common_logger_Infof();
      return;
    }
  }
  else {
    local_60 = in_stack_00000008;
    printerApi_service_filament_hub___resolved3MFPaintInfo__load();
    if (*(char *)(in_stack_00000018 + 0x20) == '\0') {
      bVar1 = false;
    }
    else {
      if (*(uint *)(in_stack_00000018 + 8) == local_58) {
        iVar4 = *(int *)(in_stack_00000018 + 4);
        for (iVar5 = 0; iVar5 < (int)local_58; iVar5 = iVar5 + 1) {
          iVar8 = local_4 + iVar5 * 0x28;
          iVar6 = iVar4 + iVar5 * 0x28;
          if (*(int *)(iVar4 + iVar5 * 0x28) != *(int *)(local_4 + iVar5 * 0x28)) {
            bVar2 = 0;
            goto LAB_004441a4;
          }
          iVar7 = *(int *)(iVar8 + 0x14);
          if ((*(int *)(iVar6 + 0x14) != iVar7) ||
             (local_c = iVar6, local_8 = iVar8, FUN_000150d4(), local_60 = iVar7,
             (char)local_5c == '\0')) {
            bVar2 = 0;
            goto LAB_004441a4;
          }
          if (*(int *)(local_8 + 8) != *(int *)(local_c + 8)) {
            bVar2 = 0;
            goto LAB_004441a4;
          }
          for (iVar6 = 0; iVar6 < *(int *)(local_8 + 8); iVar6 = iVar6 + 1) {
            if (*(int *)(*(int *)(local_c + 4) + iVar6 * 4) !=
                *(int *)(*(int *)(local_8 + 4) + iVar6 * 4)) {
              bVar2 = 0;
              goto LAB_004441a4;
            }
          }
        }
        bVar2 = 1;
      }
      else {
        bVar2 = 0;
      }
LAB_004441a4:
      bVar1 = (bool)(bVar2 ^ 1);
    }
    if (bVar1) {
      internal_filepathlite_Base();
      FUN_00098a28(0,&local_28);
      FUN_0008a578();
      local_28 = PTR_SUB_004442c0;
      local_24 = local_60;
      FUN_0008a578();
      local_20 = PTR_SUB_004442c0;
      local_1c = local_60;
      printerApi_common_logger_Infof();
      return;
    }
  }
  return;
}



/* printerApi/service/filament_hub.refreshMappingsIfNeeded @ 004442d4 (size 2416) */

/* WARNING: Removing unreachable block (ram,0x004446dc) */

void printerApi_service_filament_hub_refreshMappingsIfNeeded(void)

{
  int *****pppppiVar1;
  int ****ppppiVar2;
  int *****pppppiVar3;
  int *****pppppiVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  int *****pppppiVar8;
  undefined4 extraout_r2;
  int *****extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int *****extraout_r3_02;
  int *****extraout_r3_03;
  int *****extraout_r3_04;
  int *****pppppiVar9;
  int *****pppppiVar10;
  int *****pppppiVar11;
  int *****unaff_r7;
  int *****unaff_r9;
  int unaff_r10;
  undefined4 unaff_lr;
  char in_stack_00000004;
  int *****in_stack_00000008;
  int *****in_stack_0000000c;
  undefined4 in_stack_00000010;
  int ****in_stack_00000014;
  undefined4 in_stack_00000018;
  int ****in_stack_0000001c;
  undefined4 in_stack_00000020;
  int *****in_stack_00000024;
  int *****in_stack_00000028;
  int *****in_stack_0000002c;
  int ****local_1a8;
  int ****local_1a4;
  int ****local_1a0;
  int ****local_19c;
  int ****local_198;
  int ****local_194;
  int ****local_190;
  int ****local_18c;
  int ****local_180;
  int ****local_17c;
  int ****local_178;
  uint local_174 [7];
  int ****local_158;
  int ****local_154;
  int ****local_150;
  int ****local_14c;
  int ***local_148;
  int ****local_144;
  int ****local_140;
  int ****local_13c;
  int ****local_138;
  int ***local_134;
  undefined4 local_130;
  undefined4 local_12c;
  int ***local_128;
  undefined1 auStack_124 [24];
  int ****local_10c;
  undefined4 local_108;
  char *local_104;
  int local_100;
  undefined4 local_f4;
  int ***local_f0;
  int ****local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0;
  int local_dc;
  int ***local_c4;
  char *local_c0;
  int local_bc;
  int ****local_9c;
  int ****local_98;
  undefined1 auStack_88 [24];
  int local_70;
  int local_6c;
  int local_68;
  undefined1 auStack_60 [24];
  int local_48;
  int local_44;
  int local_40;
  undefined *local_38;
  int ****local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined4 local_24;
  int ***local_20;
  int ****local_1c;
  int ****local_18;
  int ****local_14;
  int ****local_10;
  int ****local_c;
  int ****local_8;
  int ****local_4;
  
  while (&local_12c <= *(undefined4 **)(unaff_r10 + 8)) {
    unaff_lr = 0x444c60;
    FUN_00096bb8();
  }
  pppppiVar8 = (int *****)0x0;
  pppppiVar10 = (int *****)0x0;
  pppppiVar11 = &local_144;
  pppppiVar4 = in_stack_00000024;
  pppppiVar3 = in_stack_00000024;
  pppppiVar9 = in_stack_00000028;
  do {
    if ((int)pppppiVar9 < 1) {
      local_150 = (int ****)in_stack_0000000c;
      local_1a8 = (int ****)PTR_DAT_00444c38;
      local_1a4 = (int ****)in_stack_0000000c;
      local_1a0 = (int ****)in_stack_0000000c;
      local_158 = (int ****)pppppiVar10;
      local_154 = (int ****)pppppiVar8;
      local_10c = (int ****)pppppiVar11;
      FUN_000933e8();
      local_8 = local_19c;
      local_138 = (int ****)in_stack_0000000c;
      pppppiVar9 = (int *****)0x0;
      local_148 = (int ***)0x0;
      pppppiVar3 = in_stack_00000008;
      pppppiVar4 = (int *****)local_19c;
      pppppiVar8 = unaff_r7;
LAB_004443fc:
      ppppiVar2 = local_150;
      if ((int)local_138 <= (int)pppppiVar9) {
        if ((int ****)local_148 == (int ****)0x0) {
          local_148 = (int ***)0x0;
          if (in_stack_00000028 == (int *****)0x0) {
            bVar6 = false;
          }
          else {
            pppppiVar4 = in_stack_0000000c;
            pppppiVar3 = in_stack_00000008;
            if (in_stack_0000000c == (int *****)0x0) {
              bVar6 = false;
            }
            else {
              while ((0 < (int)pppppiVar4 &&
                     (local_138 = (int ****)pppppiVar4,
                     FUN_00098dec(pppppiVar4,pppppiVar3,&local_108),
                     pppppiVar4 = (int *****)local_138, -1 < (int)local_f0))) {
                pppppiVar4 = (int *****)((int)local_138 + -1);
                pppppiVar3 = (int *****)(extraout_r3_01 + 0x28);
              }
              bVar6 = (int)pppppiVar4 < 1;
            }
          }
          if ((bool)in_stack_00000004 != bVar6) {
            local_1a8 = in_stack_0000001c;
            local_1a4 = (int ****)in_stack_00000020;
            local_19c = (int ****)in_stack_00000008;
            local_198 = (int ****)in_stack_0000000c;
            local_194 = (int ****)in_stack_00000010;
            local_1a0._0_1_ = bVar6;
            printerApi_service_filament_hub_writeACMInfo();
            if ((int *****)local_190 == (int *****)0x0) {
              local_1a8 = in_stack_00000014;
              local_1a4 = (int ****)in_stack_00000018;
              local_1a0 = (int ****)CONCAT31(local_1a0._1_3_,bVar6);
              local_19c = (int ****)in_stack_00000008;
              local_198 = (int ****)in_stack_0000000c;
              local_194 = (int ****)in_stack_00000010;
              printerApi_service_filament_hub_syncDualACM();
            }
            else {
              local_20 = local_190[1];
              local_1c = local_18c;
              local_1a8 = (int ****)PTR_DAT_00444c54;
              local_1a4 = (int ****)0x24;
              local_1a0 = &local_20;
              local_19c = (int ****)0x1;
              local_198 = (int ****)0x1;
              printerApi_common_logger_Warnf();
            }
          }
          return;
        }
        if (in_stack_00000028 == (int *****)0x0) {
          bVar6 = false;
        }
        else {
          pppppiVar3 = (int *****)local_150;
          pppppiVar9 = pppppiVar4;
          if ((int *****)local_150 == (int *****)0x0) {
            bVar6 = false;
          }
          else {
            while ((0 < (int)pppppiVar3 &&
                   (local_138 = (int ****)pppppiVar3, FUN_00098dec(pppppiVar3,pppppiVar9,&local_108)
                   , pppppiVar3 = (int *****)local_138, -1 < (int)local_f0))) {
              pppppiVar3 = (int *****)((int)local_138 + -1);
              pppppiVar9 = (int *****)(extraout_r3_00 + 0x28);
            }
            bVar6 = (int)pppppiVar3 < 1;
          }
        }
        local_1a8 = in_stack_00000014;
        local_1a4 = (int ****)in_stack_00000018;
        internal_filepathlite_Base();
        FUN_00098a20(0,&local_38,local_19c,local_1a0);
        local_1a4 = (int ****)extraout_r2;
        FUN_0008a578();
        local_38 = PTR_SUB_00444c44;
        local_34 = local_1a0;
        local_1a8 = (int ****)local_148;
        FUN_0001cec0();
        local_30 = PTR_DAT_00444c48;
        local_2c = local_1a4;
        local_1a8 = local_150;
        FUN_0001cec0();
        local_28 = PTR_DAT_00444c48;
        local_24 = local_1a4;
        local_1a8 = (int ****)PTR_DAT_00444c4c;
        local_1a4 = (int ****)0x35;
        local_1a0 = (int ****)&local_38;
        local_19c = (int ****)0x3;
        local_198 = (int ****)0x3;
        printerApi_common_logger_Infof();
        local_1a8 = in_stack_0000001c;
        local_1a4 = (int ****)in_stack_00000020;
        local_198 = ppppiVar2;
        local_194 = ppppiVar2;
        local_19c = (int ****)pppppiVar4;
        local_1a0._0_1_ = bVar6;
        printerApi_service_filament_hub_writeACMInfo();
        if ((int *****)local_190 == (int *****)0x0) {
          local_1a8 = in_stack_00000014;
          local_1a4 = (int ****)in_stack_00000018;
          local_1a0 = (int ****)CONCAT31(local_1a0._1_3_,bVar6);
          local_198 = ppppiVar2;
          local_194 = ppppiVar2;
          local_19c = (int ****)pppppiVar4;
          printerApi_service_filament_hub_syncDualACM();
        }
        else {
          local_20 = local_190[1];
          local_1c = local_18c;
          local_1a8 = (int ****)PTR_DAT_00444c50;
          local_1a4 = (int ****)0x20;
          local_1a0 = &local_20;
          local_19c = (int ****)0x1;
          local_198 = (int ****)0x1;
          printerApi_common_logger_Warnf();
        }
        return;
      }
      local_14c = (int ****)pppppiVar9;
      local_c = (int ****)pppppiVar3;
      uVar5 = FUN_00098dec(pppppiVar3,pppppiVar3,&local_c4);
      FUN_00098dec(uVar5,&local_c4,&local_1a8);
      local_180 = (int ****)in_stack_00000024;
      local_17c = (int ****)in_stack_00000028;
      local_178 = (int ****)in_stack_0000002c;
      printerApi_service_filament_hub_classifyMapping();
      if (local_174[0] < 2) {
        pppppiVar9 = in_stack_0000002c;
        if (local_150 <= local_14c) goto LAB_00444aac;
        pppppiVar3 = (int *****)(local_8 + (int)local_14c * 10);
        if (*(int *)PTR_DAT_00444c3c != 0) {
          local_1a8 = (int ****)PTR_DAT_00444c38;
          local_1a0 = &local_c4;
          local_1a4 = (int ****)pppppiVar3;
          local_10 = (int ****)pppppiVar3;
          FUN_00022914();
          pppppiVar3 = (int *****)local_10;
        }
        pppppiVar4 = (int *****)local_8;
        FUN_00098dec(local_14c,&local_c4,pppppiVar3);
LAB_004443d8:
        pppppiVar3 = (int *****)(local_c + 10);
        pppppiVar9 = (int *****)((int)local_14c + 1);
        pppppiVar10 = pppppiVar3;
        pppppiVar11 = pppppiVar4;
        pppppiVar8 = pppppiVar9;
        goto LAB_004443fc;
      }
      pppppiVar4 = (int *****)local_8;
      if (local_174[0] != 2) goto LAB_004443d8;
      local_1a8 = (int ****)PTR_DAT_00444c40;
      FUN_0001eed8();
      local_4 = local_1a4;
      FUN_00098dec(local_1a4,&local_c4,&local_1a8);
      local_180 = local_10c;
      local_17c = local_158;
      local_178 = local_154;
      uVar5 = printerApi_service_filament_hub_findBestMatchedSlot();
      uVar5 = FUN_00098e04(uVar5,local_174,&local_134);
      FUN_00098dec(uVar5,&local_c4,&local_108);
      uVar5 = 0;
      if (*(int *)PTR_DAT_00444c3c != 0) {
        local_1a8 = (int ****)PTR_DAT_00444c40;
        local_1a4 = local_4;
        local_1a0 = &local_134;
        uVar5 = FUN_00022914();
      }
      FUN_00098e04(uVar5,&local_134,local_4);
      if ((int ****)*local_4 == (int ****)0xffffffff) {
        ppppiVar2 = (int ****)0x0;
        local_ec = (int ****)0x0;
        local_e8 = 0;
        local_e4 = 0;
        pppppiVar9 = (int *****)0xffffffff;
        local_f0 = (int ***)0xffffffff;
      }
      else {
        local_ec = local_4 + 4;
        local_e8 = 3;
        local_e4 = 3;
        pppppiVar9 = (int *****)*local_4;
        ppppiVar2 = (int ****)(local_4[1] + (int)pppppiVar9);
        local_f0 = (int ***)ppppiVar2;
      }
      FUN_00098dec(ppppiVar2,&local_108,&local_134,3);
      if (local_14c < local_150) {
        local_10 = local_8 + (int)local_14c * 10;
        if (*(int *)PTR_DAT_00444c3c != 0) {
          local_1a8 = (int ****)PTR_DAT_00444c38;
          local_1a0 = &local_134;
          local_1a4 = local_10;
          FUN_00022914();
        }
        pppppiVar4 = (int *****)local_8;
        uVar5 = FUN_00098dec(local_14c,&local_134,local_10);
        uVar5 = FUN_00098dec(uVar5,&local_c4,&local_108);
        FUN_00098dec(uVar5,local_10,&local_c4);
        uVar5 = FUN_00098a10(0,auStack_60);
        FUN_00098dec(uVar5,&local_108,auStack_60);
        uVar5 = FUN_00098a10(0,auStack_88);
        FUN_00098dec(uVar5,&local_c4,auStack_88);
        bVar6 = false;
        while (!bVar6) {
          if ((local_70 != local_48) || (local_40 != local_68)) {
LAB_00444a7c:
            local_148 = (int ***)((int)local_148 + 1);
            break;
          }
          for (iVar7 = 0; iVar7 < local_40; iVar7 = iVar7 + 1) {
            unaff_r9 = *(int ******)(local_6c + iVar7 * 4);
            if (unaff_r9 != *(int ******)(local_44 + iVar7 * 4)) goto LAB_00444a7c;
          }
          bVar6 = true;
        }
        goto LAB_004443d8;
      }
      FUN_000986f8();
LAB_00444aac:
      FUN_000986f8();
      pppppiVar3 = extraout_r3_02;
      while( true ) {
        pppppiVar4 = (int *****)(local_c + 0x11);
        unaff_r9 = (int *****)((int)unaff_r9 + -1);
        pppppiVar1 = (int *****)local_138;
LAB_00444abc:
        local_138 = (int ****)pppppiVar1;
        if ((int)unaff_r9 < 1) break;
        local_c = (int ****)pppppiVar4;
        FUN_00098db4(pppppiVar4,pppppiVar4,&local_108);
        pppppiVar3 = extraout_r3_03;
        if ((((((local_100 == 5) && (*local_104 == 'r')) && (local_104[1] == 'e')) &&
             ((local_104[2] == 'a' && (local_104[3] == 'd')))) &&
            ((local_104[4] == 'y' && ((local_dc != 3 && (local_e0 != 3)))))) && (local_e0 != 0)) {
          local_13c = (int ****)unaff_r9;
          uVar5 = FUN_00098a1c(0,&local_134);
          pppppiVar10 = (int *****)((int)pppppiVar10 + 1);
          local_134 = local_c4;
          local_130 = local_108;
          FUN_00098e24(uVar5,&local_ec,auStack_124);
          local_12c = local_f4;
          local_128 = local_f0;
          if (pppppiVar8 < pppppiVar10) {
            local_19c = (int ****)0x1;
            local_198 = (int ****)PTR_DAT_00444c40;
            local_1a8 = (int ****)pppppiVar11;
            local_1a4 = (int ****)pppppiVar10;
            local_1a0 = (int ****)pppppiVar8;
            FUN_00093524();
            pppppiVar9 = (int *****)local_138;
            pppppiVar10 = (int *****)local_190;
            pppppiVar11 = (int *****)local_194;
            pppppiVar8 = (int *****)local_18c;
            unaff_r9 = (int *****)local_13c;
          }
          pppppiVar4 = pppppiVar11 + (int)pppppiVar10 * 7 + -7;
          uVar5 = 0;
          if (*(int *)PTR_DAT_00444c3c != 0) {
            local_1a8 = (int ****)PTR_DAT_00444c40;
            local_1a0 = &local_134;
            local_1a4 = (int ****)pppppiVar4;
            local_144 = (int ****)pppppiVar8;
            local_140 = (int ****)pppppiVar10;
            local_18 = (int ****)pppppiVar4;
            local_14 = (int ****)pppppiVar11;
            uVar5 = FUN_00022914();
            pppppiVar4 = (int *****)local_18;
            pppppiVar9 = (int *****)local_138;
            pppppiVar10 = (int *****)local_140;
            pppppiVar11 = (int *****)local_14;
            pppppiVar8 = (int *****)local_144;
            unaff_r9 = (int *****)local_13c;
          }
          FUN_00098e04(uVar5,&local_134,pppppiVar4);
          pppppiVar3 = extraout_r3_04;
        }
      }
    }
    else {
      local_8 = (int ****)pppppiVar4;
      FUN_00098dc4(pppppiVar4,pppppiVar4,&local_c4,pppppiVar3,unaff_lr);
      pppppiVar4 = (int *****)local_9c;
      pppppiVar3 = extraout_r3;
      unaff_r9 = (int *****)local_98;
      pppppiVar1 = pppppiVar9;
      if (local_bc != 4) goto LAB_00444abc;
      if (*local_c0 != 'b') goto LAB_00444abc;
      if (local_c0[1] != 'u') goto LAB_00444abc;
      if (local_c0[2] != 's') goto LAB_00444abc;
      if (local_c0[3] != 'y') goto LAB_00444abc;
    }
    pppppiVar4 = (int *****)(local_8 + 0xf);
    pppppiVar9 = (int *****)((int)pppppiVar9 + -1);
    unaff_r7 = pppppiVar8;
    unaff_r9 = (int *****)local_8;
  } while( true );
}



/* printerApi/service/filament_hub.build3MFACMInfo @ 00444c64 (size 1828) */

void printerApi_service_filament_hub_build3MFACMInfo(void)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **extraout_r3;
  undefined **extraout_r3_00;
  undefined **extraout_r3_01;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined **in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined1 *in_stack_0000002c;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  int iVar11;
  undefined *puVar12;
  undefined **in_stack_ffffff40;
  undefined **local_bc;
  undefined **local_b8;
  undefined4 local_b4;
  undefined *local_8c;
  undefined **local_88;
  int local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined **local_74;
  int local_70;
  undefined *local_68;
  undefined **local_64;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined **local_4c;
  undefined **local_48;
  undefined **local_44;
  undefined **local_40;
  undefined1 local_3c;
  undefined **local_38;
  undefined **local_34;
  undefined **local_30;
  undefined *local_2c;
  undefined **local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined **local_14;
  undefined **local_10;
  undefined **local_c;
  undefined **local_8;
  undefined **local_4;
  
  while (&local_58 <= *(undefined4 **)(unaff_r10 + 8)) {
    unaff_lr = 0x445384;
    FUN_00096bb8();
  }
  uVar10 = in_stack_00000008;
  printerApi_service_filament_hub___resolved3MFPaintInfo__load();
  local_3c = 0;
  local_38 = (undefined **)0x0;
  local_34 = (undefined **)0x0;
  local_30 = (undefined **)0x0;
  if (in_stack_0000002c[0x20] == '\0') {
    if (in_stack_00000018 == 0) {
      local_2c = (undefined *)0x0;
      local_28 = (undefined **)0x0;
      FUN_0008a578();
      local_2c = PTR_SUB_0044538c;
      ppuVar8 = &local_2c;
      local_28 = (undefined **)uVar10;
      printerApi_common_logger_Warnf();
      local_2c = (undefined *)0x0;
      local_28 = (undefined **)0x0;
      FUN_0008a578();
      local_2c = PTR_SUB_0044538c;
      local_28 = ppuVar8;
      FUN_00130144();
      return;
    }
    internal_filepathlite_Base();
    local_2c = (undefined *)0x0;
    local_28 = (undefined **)0x0;
    FUN_0008a578();
    local_2c = PTR_SUB_0044538c;
    ppuVar9 = (undefined **)&DAT_00000030;
    ppuVar8 = &local_2c;
    iVar11 = 1;
    puVar12 = (undefined *)0x1;
    ppuVar7 = (undefined **)PTR_DAT_00445390;
    local_28 = (undefined **)uVar10;
    printerApi_common_logger_Debugf();
    ppuVar2 = (undefined **)0x0;
    ppuVar3 = (undefined **)0x0;
    ppuVar4 = (undefined **)0x0;
    for (; 0 < in_stack_00000018; in_stack_00000018 = in_stack_00000018 + -1) {
      local_40 = ppuVar3;
      local_4 = in_stack_00000014;
      FUN_00098df4(in_stack_00000014,in_stack_00000014,&local_8c,ppuVar3,unaff_lr,ppuVar7,ppuVar9,
                   ppuVar8,iVar11,puVar12);
      FUN_00098a10(0,&local_68);
      iVar1 = local_84;
      local_68 = local_8c;
      local_58 = local_7c;
      local_54 = local_78;
      local_50 = -1;
      ppuVar3 = extraout_r3_01;
      if (local_84 != 0) {
        local_8 = local_88;
        iVar11 = local_84;
        puVar12 = PTR_DAT_004453a0;
        ppuVar7 = in_stack_ffffff40;
        FUN_00093524();
        ppuVar8 = (undefined **)(iVar1 << 2);
        ppuVar9 = local_8;
        in_stack_ffffff40 = ppuVar7;
        local_c = ppuVar7;
        FUN_00098ec8();
        local_64 = local_c;
        ppuVar3 = local_40;
      }
      ppuVar5 = local_48;
      iVar1 = local_70;
      if (local_70 != 0) {
        ppuVar9 = local_74;
        ppuVar6 = (undefined **)((int)local_48 + local_70);
        ppuVar3 = local_4c;
        if (local_44 < (undefined **)((int)local_48 + local_70)) {
          local_8 = local_74;
          iVar11 = local_70;
          puVar12 = PTR_DAT_004453a0;
          ppuVar3 = in_stack_ffffff40;
          FUN_00093524();
          local_44 = local_b8;
          ppuVar9 = local_8;
          ppuVar6 = local_bc;
          in_stack_ffffff40 = ppuVar3;
        }
        ppuVar7 = ppuVar3 + (int)ppuVar5;
        ppuVar8 = (undefined **)(iVar1 << 2);
        local_8 = ppuVar3;
        FUN_00098ec8();
        local_4c = local_8;
        ppuVar3 = local_40;
        local_48 = ppuVar6;
      }
      ppuVar5 = (undefined **)((int)ppuVar4 + 1);
      ppuVar4 = ppuVar5;
      if (ppuVar2 < ppuVar5) {
        iVar11 = 1;
        ppuVar7 = ppuVar3;
        ppuVar8 = ppuVar2;
        puVar12 = PTR_DAT_004453a8;
        ppuVar3 = in_stack_ffffff40;
        FUN_00093524();
        ppuVar4 = local_bc;
        ppuVar2 = local_b8;
        ppuVar9 = ppuVar5;
        in_stack_ffffff40 = ppuVar3;
      }
      ppuVar6 = ppuVar3 + (int)ppuVar4 * 10 + -10;
      ppuVar5 = ppuVar6;
      if (*(int *)PTR_DAT_004453ac != 0) {
        ppuVar8 = &local_68;
        ppuVar7 = (undefined **)PTR_DAT_004453a8;
        local_14 = ppuVar6;
        local_10 = ppuVar3;
        FUN_00022914();
        ppuVar5 = local_14;
        ppuVar9 = ppuVar6;
      }
      FUN_00098dec(0xffffffff,&local_68,ppuVar5);
      in_stack_00000014 = local_4 + 9;
      ppuVar3 = extraout_r3_00;
    }
    local_3c = 0;
    local_38 = ppuVar3;
    local_34 = ppuVar4;
    local_30 = ppuVar2;
  }
  else {
    internal_filepathlite_Base();
    FUN_00098a28(0,&local_24);
    FUN_0008a578();
    local_24 = PTR_SUB_0044538c;
    local_20 = uVar10;
    FUN_0008a578();
    local_1c = PTR_SUB_0044538c;
    local_18 = uVar10;
    printerApi_common_logger_Infof();
    local_38 = *(undefined ***)(in_stack_0000002c + 4);
    local_34 = *(undefined ***)(in_stack_0000002c + 8);
    local_30 = *(undefined ***)(in_stack_0000002c + 0xc);
    local_3c = *in_stack_0000002c;
  }
  ppuVar8 = local_38;
  ppuVar3 = local_34;
  ppuVar4 = local_30;
  iVar11 = in_stack_00000024;
  printerApi_service_filament_hub_matchedFilamentHubSlot();
  local_38 = local_bc;
  local_34 = local_b8;
  local_30 = (undefined **)local_b4;
  if (in_stack_00000024 == 0) {
    local_3c = false;
  }
  else {
    ppuVar2 = local_bc;
    if (local_b8 == (undefined **)0x0) {
      local_3c = false;
    }
    else {
      while ((0 < (int)local_b8 &&
             (local_4 = ppuVar2,
             FUN_00098dec(ppuVar2,ppuVar2,&local_68,local_b8,unaff_lr,ppuVar8,ppuVar3,ppuVar4,
                          in_stack_00000020,iVar11,in_stack_00000028), local_b8 = extraout_r3,
             -1 < local_50))) {
        local_b8 = (undefined **)((int)extraout_r3 + -1);
        ppuVar2 = local_4 + 10;
      }
      local_3c = (int)local_b8 < 1;
    }
  }
  uVar10 = CONCAT31((int3)((uint)ppuVar4 >> 8),local_3c);
  printerApi_service_filament_hub_writeACMInfo();
  if (local_bc == (undefined **)0x0) {
    internal_filepathlite_Base();
    FUN_00098a28(0,&local_24,local_38,uVar10,unaff_lr,in_stack_00000004,in_stack_00000008,uVar10,
                 local_38,local_34,local_30);
    FUN_0008a578();
    local_24 = PTR_SUB_0044538c;
    local_20 = uVar10;
    FUN_0001cec0();
    local_1c = PTR_DAT_004453a0;
    printerApi_common_logger_RedDebugf();
    return;
  }
  return;
}



/* printerApi/service/filament_hub.buildGcodeACMInfo @ 004453b0 (size 904) */

/* WARNING: Removing unreachable block (ram,0x004455f8) */

void printerApi_service_filament_hub_buildGcodeACMInfo(void)

{
  int iVar1;
  int iVar2;
  int extraout_r3;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined1 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_stack_ffffff94;
  undefined **ppuVar9;
  undefined4 in_stack_ffffff98;
  int in_stack_ffffff9c;
  int iVar10;
  undefined4 in_stack_ffffffa0;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined1 auStack_4c [24];
  int local_34;
  undefined1 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined *local_10;
  undefined *local_c;
  undefined *local_8;
  undefined4 local_4;
  
  while (local_24 = (undefined1)in_stack_ffffff94,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x445734;
    FUN_00096bb8();
  }
  uVar3 = in_stack_00000004;
  uVar6 = in_stack_00000008;
  printerApi_service_filament_hub_extractACMInfoFromGcodePaintInfo();
  if (local_5c != 0) {
    return;
  }
  if (in_stack_ffffff9c == 0) {
    return;
  }
  local_20 = in_stack_ffffff98;
  local_1c = in_stack_ffffff9c;
  local_18 = in_stack_ffffffa0;
  FUN_00098a28(0,&local_10,in_stack_ffffff9c,in_stack_ffffff98,unaff_lr,uVar3);
  local_10 = PTR_SUB_0044573c;
  local_c = PTR_DAT_00445740;
  FUN_0001cec0();
  local_8 = PTR_DAT_00445744;
  local_4 = uVar6;
  printerApi_common_logger_Debug();
  iVar4 = local_20;
  iVar7 = local_1c;
  uVar3 = local_18;
  uVar6 = in_stack_00000014;
  iVar10 = in_stack_00000018;
  uVar5 = in_stack_0000001c;
  iVar1 = printerApi_service_filament_hub_matchedFilamentHubSlot();
  local_20 = local_5c;
  local_1c = local_58;
  local_18 = local_54;
  if (in_stack_00000018 == 0) {
    local_24 = false;
  }
  else if (local_58 == 0) {
    local_24 = false;
  }
  else {
    iVar2 = 0;
    while ((0 < local_58 &&
           (local_14 = iVar2,
           FUN_00098dec(iVar1,iVar2,auStack_4c,local_58,unaff_lr,iVar4,iVar7,uVar3,uVar6,iVar10,
                        uVar5), local_58 = extraout_r3, -1 < local_34))) {
      iVar2 = local_14 + 0x28;
      local_58 = extraout_r3 + -1;
      iVar1 = local_14;
    }
    local_24 = local_58 < 1;
  }
  uVar5 = in_stack_00000004;
  uVar8 = in_stack_00000008;
  internal_filepathlite_Base();
  FUN_00098a28(0,&local_10,uVar6,uVar3,unaff_lr,uVar5,uVar8);
  FUN_0008a578();
  local_10 = PTR_SUB_0044573c;
  FUN_0001cec0();
  local_8 = PTR_DAT_00445744;
  ppuVar9 = &local_10;
  printerApi_common_logger_Debugf();
  uVar5 = CONCAT31((int3)((uint)ppuVar9 >> 8),local_24);
  printerApi_service_filament_hub_writeACMInfo();
  uVar3 = in_stack_00000004;
  uVar6 = in_stack_00000008;
  internal_filepathlite_Base();
  FUN_00098a28(0,&local_10,local_20,uVar5,unaff_lr,uVar3,uVar6,uVar5,local_20,local_1c,local_18);
  FUN_0008a578();
  local_10 = PTR_SUB_0044573c;
  local_c = (undefined *)uVar5;
  FUN_0001cec0();
  local_8 = PTR_DAT_00445744;
  printerApi_common_logger_RedDebugf();
  return;
}



/* printerApi/service/filament_hub.writeACMInfo @ 00445750 (size 264) */

void printerApi_service_filament_hub_writeACMInfo(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (in_stack_00000008 == 0) {
    return;
  }
  FUN_0001cd7c();
  FUN_00170a5c();
  FUN_00126134();
  if (local_14 == 0) {
    FUN_000f65f0();
    return;
  }
  return;
}



/* printerApi/service/filament_hub.queryFilamentHubEntities @ 00445864 (size 428) */

void printerApi_service_filament_hub_queryFilamentHubEntities(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 *local_28;
  int local_24;
  
  while (puVar1 = DAT_00445a18, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  in_stack_00000004 = 0;
  in_stack_00000008 = 0;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  FUN_00155144();
  FUN_0009bf4c();
  if (puVar1 != PTR_DAT_00445a24) {
    uVar2 = FUN_0001cb94();
    FUN_0004fb3c(uVar2);
    return;
  }
  printerApi_service_k3c_wrapper___K3cwrapper__QueryObjectsStatusWithContext();
  if (local_24 == 0) {
    in_stack_00000004 = local_28[0x83];
    in_stack_00000008 = local_28[0x84];
    in_stack_0000000c = local_28[0x85];
    in_stack_00000010 = 0;
    in_stack_00000014 = 0;
    (*(code *)*local_28)();
    return;
  }
  in_stack_00000004 = 0;
  in_stack_00000008 = 0;
  in_stack_0000000c = 0;
  (*(code *)*local_28)();
  return;
}



/* printerApi/service/filament_hub.extractACMInfoFromGcodePaintInfo @ 00445a30 (size 1448) */

/* WARNING: Removing unreachable block (ram,0x00445e54) */
/* WARNING: Removing unreachable block (ram,0x00445ae0) */
/* WARNING: Removing unreachable block (ram,0x00445b80) */
/* WARNING: Removing unreachable block (ram,0x00445d88) */
/* WARNING: Removing unreachable block (ram,0x00445c70) */

void printerApi_service_filament_hub_extractACMInfoFromGcodePaintInfo(void)

{
  uint uVar1;
  undefined4 uVar2;
  int unaff_r10;
  uint in_stack_00000008;
  int local_88;
  int local_84;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  undefined *local_54 [2];
  undefined *local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_24;
  undefined *local_14;
  undefined1 local_10 [4];
  undefined *local_c;
  int local_8;
  undefined **local_4;
  
  while (local_10 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_4 = (undefined **)0x0;
  FUN_00148180();
  if ((int)local_80 < 6) {
    uVar1 = 0;
  }
  else {
    if (local_80 < local_80 - 6) {
      uVar2 = FUN_00098758();
      FUN_0004fb3c(uVar2);
      return;
    }
    local_84 = 6;
    FUN_000150d4();
    uVar1 = local_80 & 0xff;
  }
  if (uVar1 == 0) {
    local_c = (undefined *)0x0;
    local_8 = 0;
    FUN_0008a578();
    local_c = PTR_SUB_00445fec;
    local_8 = local_84;
    FUN_00130144();
    return;
  }
  FUN_0012576c();
  if (local_78 != 0) {
    return;
  }
  local_14 = 
  PTR_printerApi_service_filament_hub_extractACMInfoFromGcodePaintInfo_deferwrap1_00445fe0;
  local_4 = &local_14;
  FUN_0012aae0();
  (**(code **)(in_stack_00000008 + 0x1c))();
  if (in_stack_00000008 < 0x100001) {
    (**(code **)(in_stack_00000008 + 0x1c))();
  }
  else {
    in_stack_00000008 = 0x1000;
  }
  local_88 = -in_stack_00000008;
  local_84 = -(uint)(in_stack_00000008 != 0);
  FUN_00125350();
  if (local_74 != 0) {
    (*(code *)*local_4)();
    return;
  }
  FUN_000989f8(0,local_54);
  local_54[0] = PTR_DAT_00445fe4;
  local_4c = PTR_DAT_00445fe8;
  local_48 = 0x10000;
  do {
    FUN_00189540();
    if ((char)local_88 == '\0') {
      local_7c = 0;
      goto LAB_00445dfc;
    }
    local_88 = local_44;
    local_84 = local_40;
    FUN_00093e34();
  } while (local_7c < 0xe);
  local_84 = 0xe;
  FUN_000150d4();
LAB_00445dfc:
  if (*(int *)PTR_DAT_00445ff8 == local_24) {
    local_84 = *(int *)PTR_DAT_00445ffc;
    FUN_000169b8();
    local_24 = 0;
  }
  if (local_24 != 0) {
    (*(code *)*local_4)();
    return;
  }
  if (local_7c == 0) {
    internal_filepathlite_Base();
    local_c = (undefined *)0x0;
    local_8 = 0;
    FUN_0008a578();
    local_c = PTR_SUB_00445fec;
    local_8 = local_84;
    printerApi_common_logger_Warnf();
    (*(code *)*local_4)();
    return;
  }
  printerApi_service_filament_hub_extractAcmInfoFromLine();
  (*(code *)*local_4)();
  return;
}



/* printerApi/service/filament_hub.extractACMInfoFromGcodePaintInfo.deferwrap1 @ 00446004 (size 96) */

void printerApi_service_filament_hub_extractACMInfoFromGcodePaintInfo_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if (*(undefined4 **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = **(undefined4 **)(unaff_r7 + 4);
    FUN_00127938();
  }
  return;
}



/* printerApi/service/filament_hub.scanPaintInfoFromZipEntry @ 00446064 (size 1016) */

/* WARNING: Removing unreachable block (ram,0x004461cc) */
/* WARNING: Removing unreachable block (ram,0x00446230) */
/* WARNING: Removing unreachable block (ram,0x00446284) */
/* WARNING: Removing unreachable block (ram,0x004462ac) */
/* WARNING: Removing unreachable block (ram,0x004462c8) */
/* WARNING: Removing unreachable block (ram,0x00446300) */

void printerApi_service_filament_hub_scanPaintInfoFromZipEntry(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined *in_stack_00000004;
  undefined *local_9c;
  undefined4 local_98;
  int local_94;
  int local_90;
  undefined1 local_60 [8];
  undefined *local_58;
  undefined4 local_54;
  undefined *local_50;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  int local_30;
  char local_24 [4];
  undefined *local_20 [3];
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined **local_4;
  
  while (local_24 <= *(char **)(unaff_r10 + 8)) {
    unaff_lr = 0x446458;
    FUN_00096bb8();
  }
  local_4 = (undefined **)0x0;
  FUN_0042523c();
  if (local_94 != 0) {
    return;
  }
  local_20[0] = PTR_printerApi_service_filament_hub_scanPaintInfoFromZipEntry_deferwrap1_00446460;
  local_4 = local_20;
  uVar1 = 0;
  if (local_9c != (undefined *)0x0) {
    in_stack_00000004 = PTR_DAT_00446464;
    FUN_0001cf8c();
    uVar1 = local_98;
  }
  FUN_000989f8(0,local_60,uVar1,local_98,unaff_lr,in_stack_00000004);
  local_58 = PTR_DAT_00446468;
  local_54 = 0x10000;
  local_9c = (undefined *)0x0;
  local_98 = 0x10000;
  FUN_000933e8();
  if (local_24[0] != '\0') {
    uVar1 = FUN_00090814();
    FUN_0004fb3c(uVar1);
    return;
  }
  local_40 = 0x10000;
  local_3c = 0x10000;
  local_54 = 0x100000;
  while( true ) {
    FUN_00189540();
    if ((char)local_9c == '\0') break;
    local_9c = local_50;
    local_98 = local_4c;
    FUN_00093e34();
    if (0xd < local_90) {
      local_9c = PTR_DAT_00446470;
      local_98 = 0xe;
      FUN_000150d4();
    }
  }
  if (local_30 == *(int *)PTR_DAT_00446474) {
    local_98 = *(undefined4 *)PTR_DAT_00446478;
    FUN_000169b8();
  }
  if (local_30 != 0) {
    FUN_00098a28(0,&local_14);
    FUN_0008a578();
    local_14 = PTR_SUB_0044647c;
    local_10 = local_98;
    local_c = 0;
    if (local_30 != 0) {
      local_c = *(undefined4 *)(local_30 + 4);
    }
    printerApi_common_logger_Warnf();
    (*(code *)*local_4)();
    return;
  }
  (*(code *)*local_4)();
  return;
}



/* printerApi/service/filament_hub.scanPaintInfoFromZipEntry.deferwrap1 @ 00446488 (size 92) */

void printerApi_service_filament_hub_scanPaintInfoFromZipEntry_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  local_c[0] = *(undefined4 *)(unaff_r7 + 8);
  (**(code **)(*(int *)(unaff_r7 + 4) + 0xc))();
  return;
}



/* printerApi/service/filament_hub.readPaintInfoFrom3MF @ 004464e4 (size 1012) */

/* WARNING: Removing unreachable block (ram,0x00446794) */
/* WARNING: Removing unreachable block (ram,0x00446818) */
/* WARNING: Removing unreachable block (ram,0x004467a0) */
/* WARNING: Removing unreachable block (ram,0x004468b4) */
/* WARNING: Removing unreachable block (ram,0x004468c0) */
/* WARNING: Removing unreachable block (ram,0x004468c4) */
/* WARNING: Removing unreachable block (ram,0x004467ac) */
/* WARNING: Removing unreachable block (ram,0x004467d0) */
/* WARNING: Removing unreachable block (ram,0x004467c8) */
/* WARNING: Removing unreachable block (ram,0x00446808) */
/* WARNING: Removing unreachable block (ram,0x0044681c) */
/* WARNING: Removing unreachable block (ram,0x00446830) */
/* WARNING: Removing unreachable block (ram,0x0044686c) */
/* WARNING: Removing unreachable block (ram,0x00446844) */

void printerApi_service_filament_hub_readPaintInfoFrom3MF(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r2;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 uVar7;
  int local_5c;
  int local_58;
  undefined *local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined *local_14 [2];
  undefined *local_c;
  int local_8;
  undefined **local_4;
  
  iVar1 = local_5c;
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4468d4;
    FUN_00096bb8();
  }
  local_4 = (undefined **)0x0;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  in_stack_0000001c = 0;
  in_stack_00000020 = 0;
  uVar7 = in_stack_00000004;
  FUN_004245e8();
  if (local_58 == 0) {
    local_14[0] = PTR_printerApi_service_filament_hub_readPaintInfoFrom3MF_deferwrap1_004468dc;
    local_4 = local_14;
    FUN_00098a28(0,&local_24,local_5c,1,unaff_lr,uVar7);
    local_20 = 0xf;
    local_24 = PTR_DAT_004468e0;
    local_18 = 6;
    local_1c = PTR_DAT_004468e4;
    iVar4 = extraout_r2;
    for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
      iVar5 = *(int *)(iVar4 + 0xc);
      iVar6 = *(int *)(iVar4 + 0x10);
      for (iVar3 = 0; iVar3 < iVar6; iVar3 = iVar3 + 1) {
        if (0xe < *(int *)(*(int *)(iVar5 + iVar3 * 4) + 4)) {
          local_5c = 0xf;
          FUN_000150d4();
          iVar4 = iVar1;
        }
      }
    }
    internal_filepathlite_Base();
    local_c = (undefined *)0x0;
    local_8 = 0;
    FUN_0008a578();
    local_c = PTR_SUB_004468ec;
    local_8 = local_5c;
    FUN_00130144();
    in_stack_0000000c = 0;
    in_stack_00000010 = 0;
    in_stack_00000014 = 0;
    in_stack_00000018 = 0;
    (*(code *)*local_4)();
    return;
  }
  local_c = *(undefined **)(local_58 + 4);
  FUN_00130144();
  return;
}



/* printerApi/service/filament_hub.readPaintInfoFrom3MF.deferwrap1 @ 004468f8 (size 100) */

void printerApi_service_filament_hub_readPaintInfoFrom3MF_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if ((undefined4 *)**(int **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = *(undefined4 *)**(int **)(unaff_r7 + 4);
    FUN_00127938();
  }
  return;
}



/* printerApi/service/filament_hub.resolve3MFPaintInfo @ 0044695c (size 536) */

void printerApi_service_filament_hub_resolve3MFPaintInfo(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined1 local_28;
  undefined4 local_20;
  undefined4 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_threemf_Get3mfTempGcodePath();
  if (local_20 == 0) {
    printerApi_common_file_FileExist();
  }
  else {
    local_28 = '\0';
  }
  if (local_28 != '\0') {
    printerApi_service_filament_hub_extractACMInfoFromGcodePaintInfo();
    if ((local_18 == 0) && (local_20 != 0)) {
      return;
    }
  }
  printerApi_service_filament_hub_readPaintInfoFrom3MF();
  if ((local_18 == 0) && (local_20 != 0)) {
    return;
  }
  internal_filepathlite_Base();
  FUN_0008a578();
  FUN_00130144();
  return;
}



/* printerApi/service/filament_hub.GetACMInfoFromPaintInfo @ 00446b88 (size 660) */

void printerApi_service_filament_hub_GetACMInfoFromPaintInfo(void)

{
  int extraout_r3;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined1 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_stack_ffffff9c;
  undefined4 uVar4;
  int in_stack_ffffffa0;
  int in_stack_ffffffa4;
  int iVar5;
  undefined4 in_stack_ffffffa8;
  int local_54;
  int local_50;
  undefined1 auStack_44 [24];
  int local_2c;
  undefined1 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x446e18;
    FUN_00096bb8();
  }
  printerApi_common_file_FileExist();
  if ((char)in_stack_ffffff9c == '\0') {
    local_8 = 0;
    local_4 = 0;
    FUN_0008a578();
    local_8 = DAT_00446e20;
    FUN_00130144();
    return;
  }
  uVar1 = in_stack_00000004;
  iVar2 = in_stack_00000008;
  printerApi_service_filament_hub_extractACMInfoFromGcodePaintInfo();
  local_1c = (undefined1)in_stack_ffffff9c;
  if (local_54 != 0) {
    return;
  }
  if (in_stack_ffffffa4 != 0) {
    local_18 = in_stack_ffffffa0;
    local_14 = in_stack_ffffffa4;
    local_10 = in_stack_ffffffa8;
    printerApi_service_filament_hub_queryFilamentHubEntities();
    if (in_stack_ffffffa0 == 0) {
      iVar5 = iVar2;
      printerApi_service_filament_hub_matchedFilamentHubSlot();
      if ((iVar2 != 0) && (local_50 != 0)) {
        local_c = 0;
        iVar2 = local_18;
        iVar3 = local_14;
        uVar4 = local_10;
        while ((0 < local_50 &&
               (FUN_00098dec(local_c,local_c,auStack_44,local_50,unaff_lr,iVar2,iVar3,uVar4,uVar1,
                             iVar5,in_stack_ffffff9c), -1 < local_2c))) {
          local_c = local_c + 0x28;
          local_50 = extraout_r3 + -1;
        }
      }
      return;
    }
    return;
  }
  return;
}



/* printerApi/service/filament_hub.tryFallbackToPersistentACM @ 00446e28 (size 2184) */

void printerApi_service_filament_hub_tryFallbackToPersistentACM(undefined4 param_1)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_r2;
  uint uVar8;
  undefined4 extraout_r2_00;
  uint extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  bool bVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x54)) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0xd4);
      *(undefined4 *)((int)register0x00000054 + -0xd4) = unaff_lr;
      iVar6 = *(int *)(*(int *)(*(int *)PTR_DAT_00447694 + 8) + 0x16c);
      puVar1 = *(undefined **)(*(int *)(*(int *)PTR_DAT_00447694 + 8) + 0x168);
      if (iVar6 == 0) {
        iVar6 = 0x18;
        puVar1 = PTR_DAT_00447698;
      }
      *(undefined **)((int)register0x00000054 + -0xd0) = puVar1;
      *(int *)((int)register0x00000054 + -0xcc) = iVar6;
      internal_filepathlite_Clean();
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + -200);
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + -0xc4);
      FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x2c),
                   *(undefined4 *)((int)register0x00000054 + -0xc4),
                   *(undefined4 *)((int)register0x00000054 + -200));
      *(undefined4 *)((int)register0x00000054 + -0x28) = extraout_r2;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = extraout_r3;
      *(undefined4 *)((int)register0x00000054 + -0x20) = 9;
      *(undefined **)((int)register0x00000054 + -0x24) =
           PTR_s__3mf_tempthumbnailgkapi_loggklib_0077568d_0x693_0044769c;
      *(undefined1 **)((int)register0x00000054 + -0xd0) =
           (undefined1 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0xcc) = 2;
      *(undefined4 *)((int)register0x00000054 + -200) = 2;
      FUN_00159184();
      *(undefined4 *)((int)register0x00000054 + -0x98) =
           *(undefined4 *)((int)register0x00000054 + -0xc0);
      *(undefined4 *)((int)register0x00000054 + -100) =
           *(undefined4 *)((int)register0x00000054 + -0xc4);
      *(undefined4 *)((int)register0x00000054 + -0xd0) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0xcc) =
           *(undefined4 *)((int)register0x00000054 + 8);
      internal_filepathlite_Clean(*(undefined4 *)((int)register0x00000054 + -0xc0));
      if (*(int *)((int)register0x00000054 + -0xc4) < *(int *)((int)register0x00000054 + -0x98)) {
LAB_00446f30:
        *(undefined1 *)((int)register0x00000054 + 0x14) = 0;
        return;
      }
      *(int *)((int)register0x00000054 + -0x9c) = *(int *)((int)register0x00000054 + -0xc4);
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + -200);
      *(undefined4 *)((int)register0x00000054 + -0xd0) =
           *(undefined4 *)((int)register0x00000054 + -200);
      *(undefined4 *)((int)register0x00000054 + -0xcc) =
           *(undefined4 *)((int)register0x00000054 + -100);
      *(int *)((int)register0x00000054 + -200) = *(int *)((int)register0x00000054 + -0x98);
      FUN_000150d4();
      if (*(char *)((int)register0x00000054 + -0xc4) == '\0') goto LAB_00446f30;
      *(undefined4 *)((int)register0x00000054 + -0xd0) =
           *(undefined4 *)((int)register0x00000054 + -100);
      *(undefined4 *)((int)register0x00000054 + -0xcc) =
           *(undefined4 *)((int)register0x00000054 + -0x98);
      *(undefined4 *)((int)register0x00000054 + -200) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0xc4) =
           *(undefined4 *)((int)register0x00000054 + -0x9c);
      FUN_00157f48();
      if (*(int *)((int)register0x00000054 + -0xb8) != 0) {
        *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -0xb8) + 4);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -0xb4);
        *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_004476a0;
        *(undefined4 *)((int)register0x00000054 + -0xcc) = 0x39;
        *(undefined1 **)((int)register0x00000054 + -200) =
             (undefined1 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + -0xc4) = 1;
        *(undefined4 *)((int)register0x00000054 + -0xc0) = 1;
        printerApi_common_logger_Debugf();
        *(undefined1 *)((int)register0x00000054 + 0x14) = 0;
        return;
      }
      uVar8 = *(uint *)((int)register0x00000054 + -0xbc);
      iVar6 = *(int *)((int)register0x00000054 + -0xc0);
      *(int *)((int)register0x00000054 + -0x5c) = iVar6;
      if ((int)uVar8 < 6) {
        cVar2 = '\0';
LAB_0044701c:
        if (cVar2 == '\0') {
LAB_00447038:
          *(uint *)((int)register0x00000054 + -0xa0) = uVar8;
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x3c),uVar8,iVar6);
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          *(undefined4 *)((int)register0x00000054 + -0xd0) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xcc) = extraout_r3_00;
          *(undefined4 *)((int)register0x00000054 + -200) = extraout_r2_00;
          *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_004476a8;
          *(undefined4 *)((int)register0x00000054 + -0xc0) = 4;
          FUN_000715a4();
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -0xb8);
          *(undefined4 *)((int)register0x00000054 + -0x34) =
               *(undefined4 *)((int)register0x00000054 + -0xbc);
          *(undefined1 **)((int)register0x00000054 + -0xd0) =
               (undefined1 *)((int)register0x00000054 + -0x3c);
          *(undefined4 *)((int)register0x00000054 + -0xcc) = 2;
          *(undefined4 *)((int)register0x00000054 + -200) = 2;
          FUN_00159184();
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + -0xc4);
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + -0xc0);
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x4c));
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          *(undefined4 *)((int)register0x00000054 + -0xd0) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -200) =
               *(undefined4 *)((int)register0x00000054 + -0xa0);
          *(undefined **)((int)register0x00000054 + -0xc4) =
               PTR_s__gcode_3mfuser_abortgkui_1_loggk_007765bd_0x2ca_004476ac;
          *(undefined4 *)((int)register0x00000054 + -0xc0) = 10;
          FUN_000715a4();
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)((int)register0x00000054 + -0xb8);
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -0xbc);
          *(undefined1 **)((int)register0x00000054 + -0xd0) =
               (undefined1 *)((int)register0x00000054 + -0x4c);
          *(undefined4 *)((int)register0x00000054 + -0xcc) = 2;
          *(undefined4 *)((int)register0x00000054 + -200) = 2;
          FUN_00159184();
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0xc4);
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + -0xc0);
          *(undefined4 *)((int)register0x00000054 + -0xd0) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + -0x88);
          printerApi_common_file_FileExist();
          if (*(char *)((int)register0x00000054 + -200) == '\0') {
            *(undefined4 *)((int)register0x00000054 + -0xd0) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            *(undefined4 *)((int)register0x00000054 + -0xcc) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            printerApi_common_file_FileExist();
            if (*(char *)((int)register0x00000054 + -200) == '\0') {
              *(undefined4 *)((int)register0x00000054 + -0xd0) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              *(undefined4 *)((int)register0x00000054 + -0xcc) =
                   *(undefined4 *)((int)register0x00000054 + -0x88);
              internal_filepathlite_Base();
              *(undefined4 *)((int)register0x00000054 + -0x6c) =
                   *(undefined4 *)((int)register0x00000054 + -200);
              *(undefined4 *)((int)register0x00000054 + -0xa4) =
                   *(undefined4 *)((int)register0x00000054 + -0xc4);
              *(undefined4 *)((int)register0x00000054 + -0xd0) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(undefined4 *)((int)register0x00000054 + -0xcc) =
                   *(undefined4 *)((int)register0x00000054 + -0x7c);
              internal_filepathlite_Base();
              *(undefined4 *)((int)register0x00000054 + -0x70) =
                   *(undefined4 *)((int)register0x00000054 + -200);
              *(undefined4 *)((int)register0x00000054 + -0xa8) =
                   *(undefined4 *)((int)register0x00000054 + -0xc4);
              FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x1c));
              *(undefined4 *)((int)register0x00000054 + -0xd0) =
                   *(undefined4 *)((int)register0x00000054 + -0x6c);
              *(undefined4 *)((int)register0x00000054 + -0xcc) =
                   *(undefined4 *)((int)register0x00000054 + -0xa4);
              FUN_0008a578();
              *(undefined **)((int)register0x00000054 + -0x1c) = PTR_SUB_004476b0;
              *(undefined4 *)((int)register0x00000054 + -0x18) =
                   *(undefined4 *)((int)register0x00000054 + -200);
              *(undefined4 *)((int)register0x00000054 + -0xd0) =
                   *(undefined4 *)((int)register0x00000054 + -0x70);
              *(undefined4 *)((int)register0x00000054 + -0xcc) =
                   *(undefined4 *)((int)register0x00000054 + -0xa8);
              FUN_0008a578();
              *(undefined **)((int)register0x00000054 + -0x14) = PTR_SUB_004476b0;
              *(undefined4 *)((int)register0x00000054 + -0x10) =
                   *(undefined4 *)((int)register0x00000054 + -200);
              *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_004476d0;
              *(undefined4 *)((int)register0x00000054 + -0xcc) = 0x41;
              *(undefined1 **)((int)register0x00000054 + -200) =
                   (undefined1 *)((int)register0x00000054 + -0x1c);
              *(undefined4 *)((int)register0x00000054 + -0xc4) = 2;
              *(undefined4 *)((int)register0x00000054 + -0xc0) = 2;
              printerApi_common_logger_Debugf();
              *(undefined1 *)((int)register0x00000054 + 0x14) = 0;
              return;
            }
            *(undefined4 *)((int)register0x00000054 + -0xd0) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            *(undefined4 *)((int)register0x00000054 + -0xcc) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            internal_filepathlite_Base();
            *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + -8) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xd0) =
                 *(undefined4 *)((int)register0x00000054 + -200);
            *(undefined4 *)((int)register0x00000054 + -0xcc) =
                 *(undefined4 *)((int)register0x00000054 + -0xc4);
            FUN_0008a578();
            *(undefined **)((int)register0x00000054 + -0xc) = PTR_SUB_004476b0;
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -200);
            *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_004476b8;
            *(undefined4 *)((int)register0x00000054 + -0xcc) = 0x40;
            *(undefined1 **)((int)register0x00000054 + -200) =
                 (undefined1 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0xc4) = 1;
            *(undefined4 *)((int)register0x00000054 + -0xc0) = 1;
            printerApi_common_logger_Debugf();
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x7c);
            uVar7 = *(undefined4 *)((int)register0x00000054 + -4);
          }
          else {
            *(undefined4 *)((int)register0x00000054 + -0xd0) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            *(undefined4 *)((int)register0x00000054 + -0xcc) =
                 *(undefined4 *)((int)register0x00000054 + -0x88);
            internal_filepathlite_Base();
            *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + -8) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xd0) =
                 *(undefined4 *)((int)register0x00000054 + -200);
            *(undefined4 *)((int)register0x00000054 + -0xcc) =
                 *(undefined4 *)((int)register0x00000054 + -0xc4);
            FUN_0008a578();
            *(undefined **)((int)register0x00000054 + -0xc) = PTR_SUB_004476b0;
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -200);
            *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_004476b4;
            *(undefined4 *)((int)register0x00000054 + -0xcc) = 0x3a;
            *(undefined1 **)((int)register0x00000054 + -200) =
                 (undefined1 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0xc4) = 1;
            *(undefined4 *)((int)register0x00000054 + -0xc0) = 1;
            printerApi_common_logger_Debugf();
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x88);
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x54);
          }
          *(undefined4 *)((int)register0x00000054 + -0xd0) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0xcc) = uVar5;
          printerApi_service_filament_hub_getAcmFileNameByGcodeFile();
          iVar6 = *(int *)((int)register0x00000054 + -0xc4);
          *(int *)((int)register0x00000054 + -0x8c) = iVar6;
          uVar5 = *(undefined4 *)((int)register0x00000054 + -200);
          *(undefined4 *)((int)register0x00000054 + -0x58) = uVar5;
          if (iVar6 == 0) {
            bVar3 = 1;
            uVar7 = 0;
          }
          else {
            *(undefined4 *)((int)register0x00000054 + -0xd0) = uVar5;
            *(int *)((int)register0x00000054 + -0xcc) = iVar6;
            printerApi_common_file_FileExist();
            bVar3 = *(byte *)((int)register0x00000054 + -200) ^ 1;
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x58);
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x8c);
          }
          if (bVar3 != 0) {
            *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + -8) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xd0) = uVar5;
            *(undefined4 *)((int)register0x00000054 + -0xcc) = uVar7;
            FUN_0008a578();
            *(undefined **)((int)register0x00000054 + -0xc) = PTR_SUB_004476b0;
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -200);
            *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_004476cc;
            *(undefined4 *)((int)register0x00000054 + -0xcc) = 0x38;
            *(undefined1 **)((int)register0x00000054 + -200) =
                 (undefined1 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0xc4) = 1;
            *(undefined4 *)((int)register0x00000054 + -0xc0) = 1;
            printerApi_common_logger_Debugf();
            *(undefined1 *)((int)register0x00000054 + 0x14) = 0;
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0xd0) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0xcc) = uVar7;
          FUN_00125de4();
          if (*(int *)((int)register0x00000054 + -0xbc) != 0) {
            *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + -8) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -0xbc) + 4);
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0xb8);
            *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_004476bc;
            *(undefined4 *)((int)register0x00000054 + -0xcc) = 0x3a;
            *(undefined1 **)((int)register0x00000054 + -200) =
                 (undefined1 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0xc4) = 1;
            *(undefined4 *)((int)register0x00000054 + -0xc0) = 1;
            printerApi_common_logger_Warnf();
            *(undefined1 *)((int)register0x00000054 + 0x14) = 0;
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + -200);
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0xc4);
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + -0xc0);
          *(undefined4 *)((int)register0x00000054 + -0xd0) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          internal_filepathlite_Dir();
          *(undefined4 *)((int)register0x00000054 + -0xd0) =
               *(undefined4 *)((int)register0x00000054 + -200);
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + -0xc4);
          *(undefined4 *)((int)register0x00000054 + -200) = 0x1ed;
          FUN_00128658();
          if (*(int *)((int)register0x00000054 + -0xc4) != 0) {
            *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + -8) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -0xc4) + 4);
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0xc0);
            *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_004476c0;
            *(undefined4 *)((int)register0x00000054 + -0xcc) = 0x3d;
            *(undefined1 **)((int)register0x00000054 + -200) =
                 (undefined1 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0xc4) = 1;
            *(undefined4 *)((int)register0x00000054 + -0xc0) = 1;
            printerApi_common_logger_Warnf();
            *(undefined1 *)((int)register0x00000054 + 0x14) = 0;
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0xd0) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -200) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          *(undefined4 *)((int)register0x00000054 + -0xc4) =
               *(undefined4 *)((int)register0x00000054 + -0x84);
          *(undefined4 *)((int)register0x00000054 + -0xc0) =
               *(undefined4 *)((int)register0x00000054 + -0x80);
          *(undefined4 *)((int)register0x00000054 + -0xbc) = 0x1a4;
          FUN_00126134();
          if (*(int *)((int)register0x00000054 + -0xb8) != 0) {
            *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + -8) = 0;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -0xb8) + 4);
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0xb4);
            *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_004476c4;
            *(undefined4 *)((int)register0x00000054 + -0xcc) = 0x38;
            *(undefined1 **)((int)register0x00000054 + -200) =
                 (undefined1 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0xc4) = 1;
            *(undefined4 *)((int)register0x00000054 + -0xc0) = 1;
            printerApi_common_logger_Warnf();
            *(undefined1 *)((int)register0x00000054 + 0x14) = 0;
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0xd0) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + -0x8c);
          internal_filepathlite_Base();
          *(undefined4 *)((int)register0x00000054 + -0x74) =
               *(undefined4 *)((int)register0x00000054 + -200);
          *(undefined4 *)((int)register0x00000054 + -0xac) =
               *(undefined4 *)((int)register0x00000054 + -0xc4);
          *(undefined4 *)((int)register0x00000054 + -0xd0) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          internal_filepathlite_Base();
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               *(undefined4 *)((int)register0x00000054 + -200);
          *(undefined4 *)((int)register0x00000054 + -0xb0) =
               *(undefined4 *)((int)register0x00000054 + -0xc4);
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x1c));
          *(undefined4 *)((int)register0x00000054 + -0xd0) =
               *(undefined4 *)((int)register0x00000054 + -0x74);
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + -0xac);
          FUN_0008a578();
          *(undefined **)((int)register0x00000054 + -0x1c) = PTR_SUB_004476b0;
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)((int)register0x00000054 + -200);
          *(undefined4 *)((int)register0x00000054 + -0xd0) =
               *(undefined4 *)((int)register0x00000054 + -0x78);
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + -0xb0);
          FUN_0008a578();
          *(undefined **)((int)register0x00000054 + -0x14) = PTR_SUB_004476b0;
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + -200);
          *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_004476c8;
          *(undefined4 *)((int)register0x00000054 + -0xcc) = 0x46;
          *(undefined1 **)((int)register0x00000054 + -200) =
               (undefined1 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0xc4) = 2;
          *(undefined4 *)((int)register0x00000054 + -0xc0) = 2;
          printerApi_common_logger_Infof();
          *(undefined4 *)((int)register0x00000054 + -0xd0) = 0x24;
          *(undefined4 *)((int)register0x00000054 + -0xcc) = 0;
          *(undefined4 *)((int)register0x00000054 + -200) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xc4) = 0;
          FUN_000f65f0();
          *(undefined1 *)((int)register0x00000054 + 0x14) = 1;
          return;
        }
        uVar4 = uVar8 - 6;
        bVar11 = uVar4 <= uVar8;
        uVar10 = uVar8 == uVar4;
        uVar8 = uVar4;
        if (bVar11) goto LAB_00447038;
        uVar4 = FUN_00098718();
        uVar8 = extraout_r2_01;
      }
      else {
        uVar4 = uVar8 - 6;
        uVar10 = uVar8 == uVar4;
        if (uVar4 <= uVar8) {
          *(uint *)((int)register0x00000054 + -0x90) = uVar8;
          *(uint *)((int)register0x00000054 + -0xd0) = iVar6 + uVar4;
          *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_004476a4;
          *(undefined4 *)((int)register0x00000054 + -200) = 6;
          FUN_000150d4();
          cVar2 = *(char *)((int)register0x00000054 + -0xc4);
          uVar8 = *(uint *)((int)register0x00000054 + -0x90);
          iVar6 = *(int *)((int)register0x00000054 + -0x5c);
          goto LAB_0044701c;
        }
      }
      param_1 = FUN_00098758(uVar4,uVar8);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xd4);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x4476ec;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/filament_hub.matchedFilamentHubSlot @ 004476f0 (size 1152) */

void printerApi_service_filament_hub_matchedFilamentHubSlot(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *extraout_r2;
  undefined4 *puVar6;
  int extraout_r3;
  undefined4 *extraout_r3_00;
  int *extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  int iVar7;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined *in_stack_00000010;
  int in_stack_00000014;
  undefined4 *local_258;
  undefined4 *local_254;
  undefined4 *local_250;
  undefined4 *local_24c;
  undefined *local_248;
  undefined4 *local_244;
  undefined4 *local_240;
  undefined4 *local_23c;
  undefined4 *local_230;
  undefined4 *local_22c;
  undefined4 *local_228;
  undefined1 auStack_224 [31];
  char local_205;
  undefined4 *local_204;
  undefined4 *local_200;
  int local_1fc;
  undefined4 *local_1f8;
  undefined4 *local_1f4;
  undefined4 *local_1f0;
  int local_1ec;
  int local_1e8;
  undefined4 uStack_1e4;
  undefined4 *local_1e0;
  undefined4 local_1dc [5];
  undefined4 local_1c8;
  int local_1c4;
  int *local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  int local_1b4;
  undefined4 local_198 [10];
  int local_170;
  int local_16c;
  undefined4 *local_15c;
  int local_158;
  undefined4 *local_154;
  undefined4 *local_150;
  undefined *local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  int local_13c;
  undefined1 auStack_138 [12];
  undefined1 auStack_12c [268];
  undefined4 auStack_20 [2];
  undefined4 *local_18;
  undefined1 *local_14;
  undefined4 *local_4;
  
  while (local_1dc <= *(undefined4 **)(unaff_r10 + 8)) {
    unaff_lr = 0x447b6c;
    FUN_00096bb8();
  }
  uVar1 = FUN_00098a1c(0,auStack_20);
  FUN_0009892c(uVar1,auStack_12c);
  local_14 = auStack_12c;
  FUN_00065dd4();
  local_18 = local_258;
  puVar2 = (undefined4 *)0x0;
  puVar4 = (undefined4 *)0x0;
  puVar5 = &uStack_1e4;
  for (; local_200 = puVar2, 0 < in_stack_00000014; in_stack_00000014 = in_stack_00000014 + -1) {
    local_1e8 = in_stack_00000014;
    local_14c = in_stack_00000010;
    FUN_00098dc4(puVar2,in_stack_00000010,local_198,in_stack_00000014,unaff_lr);
    iVar3 = local_170;
    in_stack_00000014 = extraout_r3;
    puVar2 = local_200;
    for (iVar7 = local_16c; 0 < iVar7; iVar7 = iVar7 + -1) {
      local_158 = iVar3;
      FUN_00098db4(iVar3,iVar3,local_1dc);
      in_stack_00000014 = extraout_r3_02;
      if ((local_1b4 != 3) && (local_1b4 != 0)) {
        local_1ec = iVar7;
        uVar1 = FUN_00098a1c(0,&local_148);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        local_148 = local_198[0];
        local_144 = local_1dc[0];
        FUN_00098e24(uVar1,&local_1c0,auStack_138);
        local_140 = local_1c8;
        local_13c = local_1c4;
        if (puVar2 < puVar4) {
          local_24c = (undefined4 *)0x1;
          local_248 = PTR_DAT_00447b7c;
          local_258 = puVar5;
          local_254 = puVar4;
          local_250 = puVar2;
          FUN_00093524();
          puVar5 = local_244;
          in_stack_00000010 = local_14c;
          puVar4 = local_240;
          iVar7 = local_1ec;
          puVar2 = local_23c;
        }
        puVar6 = puVar5 + (int)puVar4 * 7 + -7;
        uVar1 = 0;
        if (*(int *)PTR_DAT_00447b78 != 0) {
          local_258 = (undefined4 *)PTR_DAT_00447b7c;
          local_250 = &local_148;
          local_254 = puVar6;
          local_1f4 = puVar2;
          local_1f0 = puVar4;
          local_15c = puVar6;
          local_150 = puVar5;
          uVar1 = FUN_00022914();
          puVar6 = local_15c;
          puVar5 = local_150;
          in_stack_00000010 = local_14c;
          puVar4 = local_1f0;
          iVar7 = local_1ec;
          puVar2 = local_1f4;
        }
        FUN_00098e04(uVar1,&local_148,puVar6);
        in_stack_00000014 = extraout_r3_03;
      }
      iVar3 = local_158 + 0x44;
    }
    in_stack_00000010 = (undefined *)((int)in_stack_00000010 + 0x3c);
  }
  puVar2 = (undefined4 *)0x0;
  iVar3 = in_stack_00000004;
  local_204 = puVar4;
  local_1e0 = puVar5;
  while (puVar4 = local_1e0, puVar5 = local_204, (int)puVar2 < (int)in_stack_00000008) {
    local_1f8 = puVar2;
    local_14c = (undefined *)iVar3;
    uVar1 = FUN_00098dec(local_200,iVar3,local_1dc);
    FUN_00098dec(uVar1,local_1dc,&local_258);
    local_228 = local_200;
    local_230 = puVar4;
    local_22c = puVar5;
    uVar1 = printerApi_service_filament_hub_findBestMatchedSlot();
    FUN_00098e04(uVar1,auStack_224,local_1dc);
    local_258 = (undefined4 *)PTR_DAT_00447b74;
    local_254 = auStack_20;
    local_250 = local_1f8;
    FUN_0008d6bc();
    uVar1 = 0;
    puVar5 = local_24c;
    if (*(int *)PTR_DAT_00447b78 != 0) {
      local_150 = local_24c;
      local_258 = (undefined4 *)PTR_DAT_00447b7c;
      local_254 = local_24c;
      local_250 = local_1dc;
      uVar1 = FUN_00022914();
      puVar5 = local_150;
    }
    FUN_00098e04(uVar1,local_1dc,puVar5);
    iVar3 = (int)local_14c + 0x28;
    puVar2 = (undefined4 *)((int)local_1f8 + 1);
  }
  local_258 = (undefined4 *)PTR_DAT_00447b80;
  local_254 = in_stack_00000008;
  local_250 = in_stack_00000008;
  local_24c = (undefined4 *)in_stack_00000004;
  FUN_0006d7b8();
  local_14c = local_248;
  for (local_1fc = 0; local_1fc < (int)in_stack_00000008; local_1fc = local_1fc + 1) {
    FUN_00098a1c(0,local_1dc,local_1fc);
    local_258 = (undefined4 *)PTR_DAT_00447b74;
    local_254 = auStack_20;
    local_250 = extraout_r2;
    uVar1 = FUN_0008d510();
    local_205 = (char)local_248;
    uVar1 = FUN_00098e04(uVar1,local_24c,local_1dc);
    FUN_00098e04(uVar1,local_1dc,local_198);
    if (local_205 != '\0') {
      local_258 = (undefined4 *)PTR_DAT_00447b7c;
      FUN_0001eed8();
      local_154 = (undefined4 *)(local_14c + local_1fc * 0x28);
      FUN_00098dec(local_1fc,local_154,local_1dc,local_254);
      uVar1 = 0;
      local_4 = extraout_r3_00;
      if (*(int *)PTR_DAT_00447b78 != 0) {
        local_258 = (undefined4 *)PTR_DAT_00447b7c;
        local_250 = local_198;
        local_254 = extraout_r3_00;
        uVar1 = FUN_00022914();
      }
      FUN_00098e04(uVar1,local_198,local_4);
      if (*extraout_r3_01 == -1) {
        local_1c0 = (int *)0x0;
        local_1bc = 0;
        local_1b8 = 0;
        local_1c4 = -1;
      }
      else {
        local_1c0 = extraout_r3_01 + 4;
        local_1bc = 3;
        local_1b8 = 3;
        local_1c4 = extraout_r3_01[1] + *extraout_r3_01 * 4;
      }
      FUN_00098dec(3,local_1dc,local_198);
      uVar1 = 0;
      if (*(int *)PTR_DAT_00447b78 != 0) {
        local_258 = (undefined4 *)PTR_DAT_00447b80;
        local_254 = local_154;
        local_250 = local_198;
        uVar1 = FUN_00022914();
      }
      FUN_00098dec(uVar1,local_198,local_154);
    }
  }
  return;
}



/* printerApi/service/filament_hub.FindFirstReadySlot @ 00447b84 (size 448) */

void printerApi_service_filament_hub_FindFirstReadySlot(void)

{
  int iVar1;
  undefined4 extraout_r2;
  int extraout_r3;
  undefined4 *puVar2;
  int extraout_r3_00;
  int iVar3;
  int extraout_r3_01;
  int iVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  bool bVar5;
  int local_b0;
  undefined4 *local_ac;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  char *local_94;
  int local_90;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 auStack_7c [12];
  int local_70;
  undefined4 local_54 [8];
  undefined1 auStack_34 [8];
  int local_2c;
  int local_28;
  int local_18;
  int local_14;
  undefined *local_10;
  undefined *local_c;
  int local_8;
  
  while (auStack_34 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x447d40;
    FUN_00096bb8();
  }
  printerApi_service_filament_hub_queryFilamentHubEntities();
  bVar5 = local_a4 == 0;
  puVar2 = local_ac;
  if (bVar5) {
    do {
      if ((int)puVar2 < 1) {
        return;
      }
      local_14 = local_b0;
      FUN_00098dc4(local_b0,local_b0,local_54);
      iVar1 = local_2c;
      iVar3 = extraout_r3_00;
      for (iVar4 = local_28; 0 < iVar4; iVar4 = iVar4 + -1) {
        local_18 = iVar1;
        FUN_00098db4(iVar1,iVar1,&local_98);
        if (((((local_90 == 5) && (*local_94 == 'r')) && (local_94[1] == 'e')) &&
            ((local_94[2] == 'a' && (local_94[3] == 'd')))) &&
           ((local_94[4] == 'y' && ((local_70 != 0 && (local_70 != 3)))))) {
          FUN_0001eed8();
          *local_ac = local_54[0];
          local_ac[1] = local_98;
          local_ac[3] = local_80;
          if (*(int *)PTR_DAT_00447d54 != 0) {
            local_ac = (undefined4 *)FUN_00098678();
            *unaff_r8 = extraout_r2;
            local_84 = extraout_r2;
          }
          local_ac[2] = local_84;
          FUN_00098e24(local_ac,auStack_7c,local_ac + 4);
          return;
        }
        iVar1 = local_18 + 0x44;
        iVar3 = extraout_r3_01;
      }
      local_b0 = local_14 + 0x3c;
      puVar2 = (undefined4 *)(iVar3 + -1);
    } while( true );
  }
  FUN_00098a28(0,&local_10,local_a0,local_a4,unaff_lr);
  local_10 = PTR_SUB_00447d48;
  local_c = PTR_DAT_00447d4c;
  local_8 = extraout_r3;
  if (!bVar5) {
    local_8 = *(int *)(extraout_r3 + 4);
  }
  printerApi_common_logger_Warn();
  return;
}



/* printerApi/service/filament_hub.getMaterialCategory @ 00447d58 (size 384) */

void printerApi_service_filament_hub_getMaterialCategory(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      uVar3 = *(uint *)((int)register0x00000054 + 8);
      if ((int)uVar3 < 3) {
LAB_00447dd0:
        if ((int)uVar3 < 3) {
LAB_00447e2c:
          *(undefined4 *)((int)register0x00000054 + -0xc) = 0x2b;
          *(undefined4 *)((int)register0x00000054 + -8) = 0x20;
          *(undefined4 *)((int)register0x00000054 + -4) = 0x2d;
          iVar2 = 0;
          while( true ) {
            if (2 < iVar2) {
              *(undefined4 *)((int)register0x00000054 + 0xc) =
                   *(undefined4 *)((int)register0x00000054 + 4);
              *(uint *)((int)register0x00000054 + 0x10) = uVar3;
              return;
            }
            *(int *)((int)register0x00000054 + -0x10) = iVar2;
            uVar4 = *(undefined4 *)((int)register0x00000054 + iVar2 * 4 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0x20) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(uint *)((int)register0x00000054 + -0x1c) = uVar3;
            *(undefined4 *)((int)register0x00000054 + -0x18) = uVar4;
            FUN_001468cc();
            uVar3 = *(uint *)((int)register0x00000054 + -0x14);
            if (uVar3 != 0xffffffff) break;
            iVar2 = *(int *)((int)register0x00000054 + -0x10) + 1;
            uVar3 = *(uint *)((int)register0x00000054 + 8);
          }
          uVar6 = *(uint *)((int)register0x00000054 + 8) == uVar3;
          if (uVar3 <= *(uint *)((int)register0x00000054 + 8)) {
            *(undefined4 *)((int)register0x00000054 + 0xc) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(uint *)((int)register0x00000054 + 0x10) = uVar3;
            return;
          }
          FUN_00098718();
        }
        else {
          uVar1 = uVar3 - 3;
          uVar6 = uVar3 == uVar1;
          if (uVar1 <= uVar3) {
            *(uint *)((int)register0x00000054 + -0x20) =
                 *(int *)((int)register0x00000054 + 4) + uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_00447ee0;
            *(undefined4 *)((int)register0x00000054 + -0x18) = 3;
            FUN_000150d4();
            if (*(char *)((int)register0x00000054 + -0x14) != '\0') {
              *(undefined4 *)((int)register0x00000054 + 0xc) =
                   *(undefined4 *)((int)register0x00000054 + 4);
              *(undefined4 *)((int)register0x00000054 + 0x10) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              return;
            }
            uVar3 = *(uint *)((int)register0x00000054 + 8);
            goto LAB_00447e2c;
          }
        }
        FUN_00098758();
      }
      else {
        uVar1 = uVar3 - 3;
        uVar6 = uVar3 == uVar1;
        if (uVar1 <= uVar3) {
          *(uint *)((int)register0x00000054 + -0x20) = *(int *)((int)register0x00000054 + 4) + uVar1
          ;
          *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_00447edc;
          *(undefined4 *)((int)register0x00000054 + -0x18) = 3;
          FUN_000150d4();
          if (*(char *)((int)register0x00000054 + -0x14) != '\0') {
            *(undefined4 *)((int)register0x00000054 + 0xc) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + 0x10) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            return;
          }
          uVar3 = *(uint *)((int)register0x00000054 + 8);
          goto LAB_00447dd0;
        }
      }
      param_1 = FUN_00098758();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x447ed4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/filament_hub.findBestMatchedSlot @ 00447ee4 (size 704) */

/* WARNING: Removing unreachable block (ram,0x00448000) */

void printerApi_service_filament_hub_findBestMatchedSlot(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  uint in_fpscr;
  undefined4 extraout_s1;
  double dVar10;
  undefined4 extraout_s1_00;
  double dVar11;
  uint unaff_s30;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x28)) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0xa8);
      *(undefined4 *)((int)register0x00000054 + -0xa8) = unaff_lr;
      uVar2 = FUN_00098a1c(0,(undefined1 *)((int)register0x00000054 + 0x38));
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_004481a8;
      uVar2 = FUN_00098a1c((int)*(undefined8 *)((int)register0x00000054 + -0x7c),uVar2,
                           (undefined1 *)((int)register0x00000054 + -0x40));
      dVar11 = (double)CONCAT44(extraout_s1,uVar2);
      *(undefined4 *)((int)register0x00000054 + -0x40) = 0xffffffff;
      iVar6 = *(int *)((int)register0x00000054 + 0x2c);
      iVar3 = *(int *)((int)register0x00000054 + 0x30);
      while( true ) {
        if (iVar3 < 1) {
          FUN_00098e04(iVar3,(undefined1 *)((int)register0x00000054 + -0x40),
                       (undefined1 *)((int)register0x00000054 + 0x38));
          return;
        }
        *(int *)((int)register0x00000054 + -0x70) = iVar3;
        *(double *)((int)register0x00000054 + -0x90) = dVar11;
        *(int *)((int)register0x00000054 + -0x20) = iVar6;
        uVar2 = FUN_00098e04(iVar3,iVar6,(undefined1 *)((int)register0x00000054 + -0x1c));
        FUN_00098e04(uVar2,(undefined1 *)((int)register0x00000054 + -0x1c),
                     (undefined1 *)((int)register0x00000054 + -0x60));
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + 0x18);
        printerApi_service_filament_hub_getMaterialCategory();
        *(undefined4 *)((int)register0x00000054 + -0x74) =
             *(undefined4 *)((int)register0x00000054 + -0x98);
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        printerApi_service_filament_hub_getMaterialCategory();
        if (*(int *)((int)register0x00000054 + -0x74) == *(int *)((int)register0x00000054 + -0x98))
        break;
LAB_00448018:
        dVar11 = *(double *)((int)register0x00000054 + -0x90);
LAB_00447f44:
        iVar6 = *(int *)((int)register0x00000054 + -0x20) + 0x1c;
        iVar3 = *(int *)((int)register0x00000054 + -0x70) + -1;
      }
      *(undefined4 *)((int)register0x00000054 + -0xa4) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + -0x9c);
      *(int *)((int)register0x00000054 + -0x9c) = *(int *)((int)register0x00000054 + -0x74);
      FUN_000150d4();
      if (*(char *)((int)register0x00000054 + -0x98) == '\0') goto LAB_00448018;
      if (*(int *)((int)register0x00000054 + -0x94) == 0) {
        FUN_00098e04(0,(undefined1 *)((int)register0x00000054 + -0x60),
                     (undefined1 *)((int)register0x00000054 + 0x38));
        return;
      }
      FUN_00098e24(*(int *)((int)register0x00000054 + -0x94),
                   (undefined1 *)((int)register0x00000054 + -0x50),
                   (undefined1 *)((int)register0x00000054 + -0x6c));
      for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
        if (*(int *)((int)register0x00000054 + iVar3 * 4 + -0x6c) != 0) {
          piVar5 = *(int **)((int)register0x00000054 + -0x44);
          uVar7 = *(uint *)((int)register0x00000054 + -0x94);
          uVar9 = uVar7 == 1;
          if (uVar7 < 2) goto LAB_00448188;
          uVar9 = uVar7 == 2;
          if (uVar7 < 3) goto LAB_0044817c;
          piVar4 = (int *)((piVar5[2] - *(int *)((int)register0x00000054 + -0x48)) *
                           (piVar5[2] - *(int *)((int)register0x00000054 + -0x48)) +
                          (piVar5[1] - *(int *)((int)register0x00000054 + -0x4c)) *
                          (piVar5[1] - *(int *)((int)register0x00000054 + -0x4c)) +
                          (*piVar5 - *(int *)((int)register0x00000054 + -0x50)) *
                          (*piVar5 - *(int *)((int)register0x00000054 + -0x50)));
          unaff_s30 = unaff_s30 & 0xffff0000 | (uint)piVar4 & 0xffff;
          dVar10 = (double)VectorSignedToFloat(unaff_s30,(byte)(in_fpscr >> 0x16) & 3);
          goto LAB_00448120;
        }
      }
      FUN_00098e24(iVar3,DAT_004481ac,(undefined1 *)((int)register0x00000054 + -0x88));
      piVar4 = *(int **)((int)register0x00000054 + -0x44);
      uVar7 = *(uint *)((int)register0x00000054 + -0x94);
      uVar9 = uVar7 == 1;
      if (1 < uVar7) {
        uVar9 = uVar7 == 2;
        if (2 < uVar7) {
          unaff_s30 = unaff_s30 & 0xffff0000 |
                      (piVar4[2] - *(int *)((int)register0x00000054 + -0x80)) *
                      (piVar4[2] - *(int *)((int)register0x00000054 + -0x80)) +
                      (piVar4[1] - *(int *)((int)register0x00000054 + -0x84)) *
                      (piVar4[1] - *(int *)((int)register0x00000054 + -0x84)) +
                      (*piVar4 - *(int *)((int)register0x00000054 + -0x88)) *
                      (*piVar4 - *(int *)((int)register0x00000054 + -0x88)) & 0xffffU;
          dVar10 = (double)VectorSignedToFloat(unaff_s30,(byte)(in_fpscr >> 0x16) & 3);
          piVar5 = piVar4;
LAB_00448120:
          dVar10 = SQRT(dVar10);
          if (dVar10 == 0.0) {
            FUN_00098e04(piVar4,(undefined1 *)((int)register0x00000054 + -0x60),
                         (undefined1 *)((int)register0x00000054 + 0x38),piVar5);
            return;
          }
          dVar11 = *(double *)((int)register0x00000054 + -0x90);
          uVar7 = in_fpscr & 0xfffffff | (uint)(dVar11 < dVar10) << 0x1f |
                  (uint)(dVar11 == dVar10) << 0x1e;
          in_fpscr = uVar7 | (uint)(NAN(dVar11) || NAN(dVar10)) << 0x1c;
          bVar1 = (byte)(uVar7 >> 0x18);
          if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            uVar2 = FUN_00098e04(piVar4,(undefined1 *)((int)register0x00000054 + -0x60),
                                 (undefined1 *)((int)register0x00000054 + -0x40),piVar5);
            dVar11 = (double)CONCAT44(extraout_s1_00,uVar2);
          }
          goto LAB_00447f44;
        }
        FUN_000986f8(2,2);
      }
      FUN_000986f8(1,1);
LAB_0044817c:
      FUN_000986f8(2,2);
LAB_00448188:
      param_1 = FUN_000986f8(1,1);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xa8);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x4481a0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/filament_hub.readACMInfoFromFile @ 004481b0 (size 376) */

/* WARNING: Removing unreachable block (ram,0x004482b0) */

void printerApi_service_filament_hub_readACMInfoFromFile(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 local_24;
  undefined4 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  *(undefined4 *)(local_24 + 4) = 0;
  FUN_00125de4();
  if (local_14 != 0) {
    FUN_00130144();
    return;
  }
  FUN_0016a168();
  return;
}



/* printerApi/service/filament_hub.syncDualACM @ 00448338 (size 1668) */

void printerApi_service_filament_hub_syncDualACM(undefined4 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  undefined4 uVar5;
  uint uVar6;
  undefined4 extraout_r2_00;
  uint extraout_r2_01;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int iVar7;
  char cVar8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  bool bVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x30)) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0xb0);
      *(undefined4 *)((int)register0x00000054 + -0xb0) = unaff_lr;
      iVar3 = *(int *)(*(int *)(*(int *)PTR_DAT_004489c0 + 8) + 0x16c);
      puVar1 = *(undefined **)(*(int *)(*(int *)PTR_DAT_004489c0 + 8) + 0x168);
      if (iVar3 == 0) {
        iVar3 = 0x18;
        puVar1 = PTR_DAT_004489c4;
      }
      *(undefined **)((int)register0x00000054 + -0xac) = puVar1;
      *(int *)((int)register0x00000054 + -0xa8) = iVar3;
      internal_filepathlite_Clean();
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + -0xa4);
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + -0xa0);
      FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x1c),
                   *(undefined4 *)((int)register0x00000054 + -0xa0),
                   *(undefined4 *)((int)register0x00000054 + -0xa4));
      *(undefined4 *)((int)register0x00000054 + -0x18) = extraout_r2;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = extraout_r3;
      *(undefined4 *)((int)register0x00000054 + -0x10) = 9;
      *(undefined **)((int)register0x00000054 + -0x14) =
           PTR_s__3mf_tempthumbnailgkapi_loggklib_0077568d_0x693_004489c8;
      *(undefined1 **)((int)register0x00000054 + -0xac) =
           (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0xa8) = 2;
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 2;
      FUN_00159184();
      *(undefined4 *)((int)register0x00000054 + -0x78) =
           *(undefined4 *)((int)register0x00000054 + -0x9c);
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + -0xa0);
      *(undefined4 *)((int)register0x00000054 + -0xac) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0xa8) =
           *(undefined4 *)((int)register0x00000054 + 8);
      internal_filepathlite_Clean(*(undefined4 *)((int)register0x00000054 + -0x9c));
      *(undefined4 *)((int)register0x00000054 + -0x7c) =
           *(undefined4 *)((int)register0x00000054 + -0xa0);
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + -0xa4);
      *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_004489cc;
      *(undefined1 **)((int)register0x00000054 + -0xa8) =
           (undefined1 *)((int)register0x00000054 + 0xc);
      FUN_0001cd7c();
      *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_004489cc;
      *(undefined4 *)((int)register0x00000054 + -0xa8) =
           *(undefined4 *)((int)register0x00000054 + -0xa4);
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 0;
      *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_004489d0;
      *(undefined4 *)((int)register0x00000054 + -0x98) = 1;
      FUN_00170a5c();
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + -0x94);
      uVar4 = *(undefined4 *)((int)register0x00000054 + -0x90);
      *(undefined4 *)((int)register0x00000054 + -100) = uVar4;
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x8c);
      *(undefined4 *)((int)register0x00000054 + -0x60) = uVar5;
      iVar3 = *(int *)((int)register0x00000054 + -0x7c);
      iVar7 = *(int *)((int)register0x00000054 + -0x78);
      if (iVar3 < iVar7) {
        cVar8 = '\0';
      }
      else {
        *(undefined4 *)((int)register0x00000054 + -0xac) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined4 *)((int)register0x00000054 + -0xa8) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(int *)((int)register0x00000054 + -0xa4) = iVar7;
        FUN_000150d4();
        cVar8 = *(char *)((int)register0x00000054 + -0xa0);
        uVar4 = *(undefined4 *)((int)register0x00000054 + -100);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x60);
        iVar3 = *(int *)((int)register0x00000054 + -0x7c);
        iVar7 = *(int *)((int)register0x00000054 + -0x78);
      }
      if (cVar8 == '\0') {
        *(undefined4 *)((int)register0x00000054 + -0xac) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0xa8) =
             *(undefined4 *)((int)register0x00000054 + 8);
        printerApi_common_threemf_Detect
                  (*(undefined4 *)((int)register0x00000054 + 4),
                   *(undefined4 *)((int)register0x00000054 + 8),uVar5);
        if (*(char *)((int)register0x00000054 + -0xa4) == '\0') {
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0xac) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0xa8) =
             *(undefined4 *)((int)register0x00000054 + 8);
        printerApi_common_threemf_Get3mfTempGcodePath();
        if (*(int *)((int)register0x00000054 + -0x9c) == 0) {
          *(undefined4 *)((int)register0x00000054 + -0xac) =
               *(undefined4 *)((int)register0x00000054 + -0xa4);
          *(undefined4 *)((int)register0x00000054 + -0xa8) =
               *(undefined4 *)((int)register0x00000054 + -0xa0);
          printerApi_service_filament_hub_getAcmFileNameByGcodeFile();
          iVar3 = *(int *)((int)register0x00000054 + -0xa0);
          *(int *)((int)register0x00000054 + -0x70) = iVar3;
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0xa4);
          *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar4;
          if (iVar3 == 0) {
            cVar8 = '\0';
            uVar5 = 0;
          }
          else {
            *(undefined4 *)((int)register0x00000054 + -0xac) = uVar4;
            *(int *)((int)register0x00000054 + -0xa8) = iVar3;
            internal_filepathlite_Dir();
            *(undefined4 *)((int)register0x00000054 + -0xac) =
                 *(undefined4 *)((int)register0x00000054 + -0xa4);
            *(undefined4 *)((int)register0x00000054 + -0xa8) =
                 *(undefined4 *)((int)register0x00000054 + -0xa0);
            printerApi_common_file_FileExist();
            cVar8 = *(char *)((int)register0x00000054 + -0xa4);
            uVar4 = *(undefined4 *)((int)register0x00000054 + -0x4c);
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x70);
          }
          if (cVar8 == '\0') {
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0xac) = uVar4;
          *(undefined4 *)((int)register0x00000054 + -0xa8) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0xa4) =
               *(undefined4 *)((int)register0x00000054 + -0x40);
          *(undefined4 *)((int)register0x00000054 + -0xa0) =
               *(undefined4 *)((int)register0x00000054 + -100);
          *(undefined4 *)((int)register0x00000054 + -0x9c) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          *(undefined4 *)((int)register0x00000054 + -0x98) = 0x1a4;
          FUN_00126134();
          if (*(int *)((int)register0x00000054 + -0x94) != 0) {
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0xac) =
               *(undefined4 *)((int)register0x00000054 + -0x4c);
          *(undefined4 *)((int)register0x00000054 + -0xa8) =
               *(undefined4 *)((int)register0x00000054 + -0x70);
          internal_filepathlite_Base();
          *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xac) =
               *(undefined4 *)((int)register0x00000054 + -0xa4);
          *(undefined4 *)((int)register0x00000054 + -0xa8) =
               *(undefined4 *)((int)register0x00000054 + -0xa0);
          FUN_0008a578();
          *(undefined **)((int)register0x00000054 + -0xc) = PTR_SUB_004489e4;
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0xa4);
          *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_004489f0;
          *(undefined4 *)((int)register0x00000054 + -0xa8) = 0x31;
          *(undefined1 **)((int)register0x00000054 + -0xa4) =
               (undefined1 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)((int)register0x00000054 + -0xa0) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x9c) = 1;
          printerApi_common_logger_Infof();
          *(undefined4 *)((int)register0x00000054 + -0xac) = 0x24;
          *(undefined4 *)((int)register0x00000054 + -0xa8) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xa4) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xa0) = 0;
          FUN_000f65f0();
          return;
        }
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0xac) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      *(int *)((int)register0x00000054 + -0xa8) = iVar7;
      *(undefined4 *)((int)register0x00000054 + -0xa4) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      *(int *)((int)register0x00000054 + -0xa0) = iVar3;
      FUN_00157f48(*(undefined4 *)((int)register0x00000054 + -0x58),uVar4);
      if (*(int *)((int)register0x00000054 + -0x94) != 0) {
        return;
      }
      uVar6 = *(uint *)((int)register0x00000054 + -0x98);
      iVar3 = *(int *)((int)register0x00000054 + -0x9c);
      *(int *)((int)register0x00000054 + -0x48) = iVar3;
      if ((int)uVar6 < 6) {
        cVar8 = '\0';
LAB_00448544:
        if (cVar8 == '\0') {
LAB_00448560:
          *(uint *)((int)register0x00000054 + -0x80) = uVar6;
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x2c),uVar6,iVar3);
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x74);
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          *(undefined4 *)((int)register0x00000054 + -0xac) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xa8) = extraout_r3_00;
          *(undefined4 *)((int)register0x00000054 + -0xa4) = extraout_r2_00;
          *(undefined **)((int)register0x00000054 + -0xa0) = PTR_DAT_004489d8;
          *(undefined4 *)((int)register0x00000054 + -0x9c) = 4;
          FUN_000715a4();
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x98);
          *(undefined1 **)((int)register0x00000054 + -0xac) =
               (undefined1 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0xa8) = 2;
          *(undefined4 *)((int)register0x00000054 + -0xa4) = 2;
          FUN_00159184();
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -0xa0);
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)((int)register0x00000054 + -0x9c);
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x3c));
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x74);
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          *(undefined4 *)((int)register0x00000054 + -0xac) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xa8) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined4 *)((int)register0x00000054 + -0xa4) =
               *(undefined4 *)((int)register0x00000054 + -0x80);
          *(undefined **)((int)register0x00000054 + -0xa0) =
               PTR_s__gcode_3mfuser_abortgkui_1_loggk_007765bd_0x2ca_004489dc;
          *(undefined4 *)((int)register0x00000054 + -0x9c) = 10;
          FUN_000715a4();
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          *(undefined4 *)((int)register0x00000054 + -0x34) =
               *(undefined4 *)((int)register0x00000054 + -0x98);
          *(undefined1 **)((int)register0x00000054 + -0xac) =
               (undefined1 *)((int)register0x00000054 + -0x3c);
          *(undefined4 *)((int)register0x00000054 + -0xa8) = 2;
          *(undefined4 *)((int)register0x00000054 + -0xa4) = 2;
          FUN_00159184();
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0xa0);
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x9c);
          *(undefined4 *)((int)register0x00000054 + -0xac) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          *(undefined4 *)((int)register0x00000054 + -0xa8) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          printerApi_common_file_FileExist();
          if (*(char *)((int)register0x00000054 + -0xa4) == '\0') {
            *(undefined4 *)((int)register0x00000054 + -0xac) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            *(undefined4 *)((int)register0x00000054 + -0xa8) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            printerApi_common_file_FileExist();
            if (*(char *)((int)register0x00000054 + -0xa4) == '\0') {
              *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_004489ec;
              *(undefined4 *)((int)register0x00000054 + -0xa8) = 0x2e;
              *(undefined4 *)((int)register0x00000054 + -0xa4) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xa0) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x9c) = 0;
              printerApi_common_logger_Debugf();
              return;
            }
            uVar4 = *(undefined4 *)((int)register0x00000054 + -0x5c);
            uVar5 = *(undefined4 *)((int)register0x00000054 + -4);
          }
          else {
            uVar4 = *(undefined4 *)((int)register0x00000054 + -0x68);
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x44);
          }
          *(undefined4 *)((int)register0x00000054 + -0xac) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0xa8) = uVar4;
          printerApi_service_filament_hub_getAcmFileNameByGcodeFile();
          iVar3 = *(int *)((int)register0x00000054 + -0xa0);
          if (iVar3 != 0) {
            *(int *)((int)register0x00000054 + -0x70) = iVar3;
            *(undefined4 *)((int)register0x00000054 + -0x4c) =
                 *(undefined4 *)((int)register0x00000054 + -0xa4);
            *(undefined4 *)((int)register0x00000054 + -0xac) =
                 *(undefined4 *)((int)register0x00000054 + -0xa4);
            *(int *)((int)register0x00000054 + -0xa8) = iVar3;
            *(undefined4 *)((int)register0x00000054 + -0xa4) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            *(undefined4 *)((int)register0x00000054 + -0xa0) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + -0x60);
            *(undefined4 *)((int)register0x00000054 + -0x98) = 0x1a4;
            FUN_00126134();
            if (*(int *)((int)register0x00000054 + -0x94) == 0) {
              *(undefined4 *)((int)register0x00000054 + -0xac) =
                   *(undefined4 *)((int)register0x00000054 + -0x4c);
              *(undefined4 *)((int)register0x00000054 + -0xa8) =
                   *(undefined4 *)((int)register0x00000054 + -0x70);
              internal_filepathlite_Base();
              *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
              *(undefined4 *)((int)register0x00000054 + -8) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xac) =
                   *(undefined4 *)((int)register0x00000054 + -0xa4);
              *(undefined4 *)((int)register0x00000054 + -0xa8) =
                   *(undefined4 *)((int)register0x00000054 + -0xa0);
              FUN_0008a578();
              *(undefined **)((int)register0x00000054 + -0xc) = PTR_SUB_004489e4;
              *(undefined4 *)((int)register0x00000054 + -8) =
                   *(undefined4 *)((int)register0x00000054 + -0xa4);
              *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_004489e8;
              *(undefined4 *)((int)register0x00000054 + -0xa8) = 0x31;
              *(undefined1 **)((int)register0x00000054 + -0xa4) =
                   (undefined1 *)((int)register0x00000054 + -0xc);
              *(undefined4 *)((int)register0x00000054 + -0xa0) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x9c) = 1;
              printerApi_common_logger_Infof();
              *(undefined4 *)((int)register0x00000054 + -0xac) = 0x24;
              *(undefined4 *)((int)register0x00000054 + -0xa8) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xa4) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xa0) = 0;
              FUN_000f65f0();
            }
            else {
              *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
              *(undefined4 *)((int)register0x00000054 + -8) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xc) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + -0x94) + 4);
              *(undefined4 *)((int)register0x00000054 + -8) =
                   *(undefined4 *)((int)register0x00000054 + -0x90);
              *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_004489e0;
              *(undefined4 *)((int)register0x00000054 + -0xa8) = 0x2c;
              *(undefined1 **)((int)register0x00000054 + -0xa4) =
                   (undefined1 *)((int)register0x00000054 + -0xc);
              *(undefined4 *)((int)register0x00000054 + -0xa0) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x9c) = 1;
              printerApi_common_logger_Warnf();
            }
          }
          return;
        }
        uVar2 = uVar6 - 6;
        bVar11 = uVar2 <= uVar6;
        uVar10 = uVar6 == uVar2;
        uVar6 = uVar2;
        if (bVar11) goto LAB_00448560;
        uVar2 = FUN_00098718();
        uVar6 = extraout_r2_01;
      }
      else {
        uVar2 = uVar6 - 6;
        uVar10 = uVar6 == uVar2;
        if (uVar2 <= uVar6) {
          *(uint *)((int)register0x00000054 + -0x6c) = uVar6;
          *(uint *)((int)register0x00000054 + -0xac) = iVar3 + uVar2;
          *(undefined **)((int)register0x00000054 + -0xa8) = PTR_DAT_004489d4;
          *(undefined4 *)((int)register0x00000054 + -0xa4) = 6;
          FUN_000150d4();
          cVar8 = *(char *)((int)register0x00000054 + -0xa0);
          uVar6 = *(uint *)((int)register0x00000054 + -0x6c);
          iVar3 = *(int *)((int)register0x00000054 + -0x48);
          goto LAB_00448544;
        }
      }
      param_1 = FUN_00098758(uVar2,uVar6);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xb0);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x4489b8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/filament_hub.getAcmFileNameByGcodeFile @ 004489f4 (size 568) */

void printerApi_service_filament_hub_getAcmFileNameByGcodeFile(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint uVar4;
  uint uVar5;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint extraout_r3_02;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  bool bVar8;
  undefined8 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + 8);
      internal_filepathlite_Dir();
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + 8);
      internal_filepathlite_Base();
      iVar1 = *(int *)((int)register0x00000054 + -0x3c);
      if (iVar1 == 0) {
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        return;
      }
      *(int *)((int)register0x00000054 + -0x2c) = iVar1;
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(int *)((int)register0x00000054 + -0x44) = iVar1;
      FUN_00148180();
      uVar3 = *(uint *)((int)register0x00000054 + -0x3c);
      iVar1 = *(int *)((int)register0x00000054 + -0x40);
      if ((int)uVar3 < 4) {
        cVar2 = '\0';
LAB_00448ac0:
        if (cVar2 == '\0') {
          uVar4 = *(uint *)((int)register0x00000054 + -0x2c);
LAB_00448af0:
          if ((int)uVar3 < 6) {
LAB_00448bc8:
            *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
            return;
          }
          uVar5 = uVar3 - 6;
          uVar7 = uVar3 == uVar5;
          if (uVar5 <= uVar3) {
            *(uint *)((int)register0x00000054 + -0x20) = uVar4;
            *(uint *)((int)register0x00000054 + -0x48) = uVar5 + iVar1;
            *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_00448c34;
            *(undefined4 *)((int)register0x00000054 + -0x40) = 6;
            FUN_000150d4();
            if (*(char *)((int)register0x00000054 + -0x3c) == '\0') goto LAB_00448bc8;
            uVar4 = *(uint *)((int)register0x00000054 + -0x20);
            uVar3 = uVar4 - 6;
            uVar7 = uVar4 == uVar3;
            if (uVar3 <= uVar4) {
              FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x10),uVar3);
              *(undefined4 *)((int)register0x00000054 + -0xc) =
                   *(undefined4 *)((int)register0x00000054 + -0x28);
              *(undefined4 *)((int)register0x00000054 + -0x10) =
                   *(undefined4 *)((int)register0x00000054 + -0x18);
              *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x44) =
                   *(undefined4 *)((int)register0x00000054 + -0x1c);
              *(undefined4 *)((int)register0x00000054 + -0x40) = extraout_r2;
              *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_00448c38;
              *(undefined4 *)((int)register0x00000054 + -0x38) = 4;
              FUN_000715a4();
              *(undefined4 *)((int)register0x00000054 + -4) =
                   *(undefined4 *)((int)register0x00000054 + -0x30);
              *(undefined4 *)((int)register0x00000054 + -8) =
                   *(undefined4 *)((int)register0x00000054 + -0x34);
              *(undefined1 **)((int)register0x00000054 + -0x48) =
                   (undefined1 *)((int)register0x00000054 + -0x10);
              *(undefined4 *)((int)register0x00000054 + -0x44) = 2;
              *(undefined4 *)((int)register0x00000054 + -0x40) = 2;
              FUN_00159184();
              *(undefined4 *)((int)register0x00000054 + 0xc) =
                   *(undefined4 *)((int)register0x00000054 + -0x3c);
              *(undefined4 *)((int)register0x00000054 + 0x10) =
                   *(undefined4 *)((int)register0x00000054 + -0x38);
              return;
            }
            FUN_00098718();
            uVar5 = extraout_r2_00;
            uVar3 = extraout_r3;
          }
          iVar1 = FUN_00098758(uVar5,uVar3);
          uVar5 = extraout_r3_00;
LAB_00448c00:
          uVar9 = FUN_00098718(iVar1,uVar5);
          uVar5 = extraout_r3_01;
        }
        else {
          uVar5 = *(uint *)((int)register0x00000054 + -0x2c);
          uVar4 = uVar5 - 4;
          uVar9 = CONCAT44(uVar4,iVar1);
          uVar7 = uVar5 == uVar4;
          if (uVar4 <= uVar5) {
            uVar5 = uVar3 - 4;
            bVar8 = uVar5 <= uVar3;
            uVar7 = uVar3 == uVar5;
            uVar3 = uVar5;
            if (bVar8) goto LAB_00448af0;
            goto LAB_00448c00;
          }
        }
        FUN_00098718((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar5);
        uVar3 = extraout_r2_01;
        uVar4 = extraout_r3_02;
      }
      else {
        uVar4 = uVar3 - 4;
        uVar7 = uVar3 == uVar4;
        if (uVar4 <= uVar3) {
          *(uint *)((int)register0x00000054 + -0x24) = uVar3;
          *(int *)((int)register0x00000054 + -0x14) = iVar1;
          *(uint *)((int)register0x00000054 + -0x48) = uVar4 + iVar1;
          *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_00448c30;
          *(undefined4 *)((int)register0x00000054 + -0x40) = 4;
          FUN_000150d4();
          cVar2 = *(char *)((int)register0x00000054 + -0x3c);
          uVar3 = *(uint *)((int)register0x00000054 + -0x24);
          iVar1 = *(int *)((int)register0x00000054 + -0x14);
          goto LAB_00448ac0;
        }
      }
      param_1 = FUN_00098758(uVar4,uVar3);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x4c);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x448c28;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/filament_hub.RemoveRuntimeACMFile @ 00448c3c (size 504) */

void printerApi_service_filament_hub_RemoveRuntimeACMFile(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int local_3c;
  int local_38;
  char local_34;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined *local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_service_filament_hub_getAcmFileNameByGcodeFile();
  if (local_38 == 0) {
    return;
  }
  FUN_00127c60();
  if (local_3c == 0) {
    internal_filepathlite_Base();
    local_8 = (undefined *)0x0;
    local_4 = 0;
    FUN_0008a578();
    local_8 = PTR_SUB_00448e40;
    printerApi_common_logger_Infof();
    FUN_000f65f0();
    return;
  }
  uVar1 = *(undefined4 *)PTR_DAT_00448e38;
  FUN_00122c24();
  if (local_34 == '\0') {
    FUN_00098a28(0,&local_18);
    FUN_0008a578();
    local_18 = PTR_SUB_00448e40;
    if (local_3c == 0) {
      local_10 = 0;
    }
    else {
      local_10 = *(undefined4 *)(local_3c + 4);
    }
    local_14 = uVar1;
    printerApi_common_logger_Warnf();
    return;
  }
  return;
}



/* printerApi/service/filament_hub.SetACMInfo @ 00448e4c (size 1204) */

/* WARNING: Removing unreachable block (ram,0x00449214) */

void printerApi_service_filament_hub_SetACMInfo(void)

{
  int iVar1;
  int iVar2;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r3;
  int extraout_r3_00;
  int iVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_0000000c;
  int in_stack_0000001c;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  undefined4 *puVar4;
  int iStack_94;
  undefined4 *puStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int iStack_80;
  int *apiStack_4c [10];
  undefined4 *puStack_24;
  int iStack_20;
  undefined1 auStack_1c [4];
  char cStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined *puStack_8;
  int iStack_4;
  
  while (auStack_1c <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4492fc;
    FUN_00096bb8();
  }
  printerApi_service_filament_hub_getAcmFileNameByGcodeFile();
  if (iStack_8c == 0) {
    puStack_8 = (undefined *)0x0;
    iStack_4 = 0;
    FUN_0008a578();
    puStack_8 = PTR_SUB_00449314;
    FUN_00130144();
                    /* WARNING: Could not recover jumptable at 0x00449024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  puStack_24 = puStack_90;
  printerApi_common_file_FileExist();
  if ((char)puStack_90 == '\0') {
    FUN_000715a4();
    FUN_0001eed8();
    puStack_24[1] = iStack_80;
    if (*(int *)PTR_DAT_0044930c != 0) {
      puStack_24 = (undefined4 *)FUN_00098678();
      *unaff_r8 = uStack_84;
    }
    *puStack_24 = uStack_84;
                    /* WARNING: Could not recover jumptable at 0x00448fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  cStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  iStack_94 = iStack_8c;
  printerApi_service_filament_hub_readACMInfoFromFile();
  cStack_18 = (char)puStack_90;
  if (iStack_80 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00448f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar2 = 0;
  iVar1 = iStack_8c;
  iVar3 = iStack_88;
  puVar4 = puStack_24;
  do {
    if (iVar3 <= iVar2) {
LAB_00449178:
      if (iVar2 < iVar3) {
        cStack_18 = (char)puStack_90;
        FUN_0001cd7c();
        FUN_00170a5c();
        FUN_00126134();
        printerApi_service_filament_hub_syncDualACM();
        FUN_000f65f0();
                    /* WARNING: Could not recover jumptable at 0x00449288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      puStack_8 = (undefined *)0x0;
      iStack_4 = 0;
      FUN_0001cec0();
      puStack_8 = PTR_DAT_0044931c;
      iStack_4 = iStack_94;
      FUN_00130144();
                    /* WARNING: Could not recover jumptable at 0x004492f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    FUN_00098dec((uint)puStack_90 & 0xff,iVar1,apiStack_4c,iVar3,UNRECOVERED_JUMPTABLE,puVar4);
    iVar3 = extraout_r3;
    if (in_stack_0000000c == apiStack_4c[0]) {
      iVar1 = iStack_8c + iVar2 * 0x28;
      *(undefined4 *)(iVar1 + 0x18) = in_stack_00000024;
      if (in_stack_00000020 != 0) {
        *(int *)(iVar1 + 0x14) = in_stack_00000020;
        if (*(int *)PTR_DAT_0044930c != 0) {
          iVar1 = FUN_00098688();
          *in_stack_0000000c = extraout_r2;
          in_stack_0000000c[1] = *(int *)(iVar1 + 0x10);
          in_stack_0000001c = extraout_r2;
          iVar3 = extraout_r3_00;
        }
        *(int *)(iVar1 + 0x10) = in_stack_0000001c;
      }
      if (in_stack_00000028 != 0) {
        iStack_94 = in_stack_0000002c;
        iStack_20 = iVar1;
        FUN_000933e8();
        *(int *)(iStack_20 + 0x20) = in_stack_0000002c;
        *(int *)(iStack_20 + 0x24) = in_stack_0000002c;
        iVar1 = iStack_20;
        if (*(int *)PTR_DAT_0044930c != 0) {
          iStack_8c = FUN_00098688();
          *in_stack_0000000c = iStack_8c;
          in_stack_0000000c[1] = *(int *)(extraout_r2_00 + 0x1c);
          iVar1 = extraout_r2_00;
        }
        *(int *)(iVar1 + 0x1c) = iStack_8c;
        iVar3 = iStack_88;
        if (in_stack_00000028 != *(int *)(iVar1 + 0x1c)) {
          iStack_94 = in_stack_00000028;
          FUN_00098ec8();
        }
      }
      goto LAB_00449178;
    }
    iVar1 = iVar1 + 0x28;
    iVar2 = iVar2 + 1;
  } while( true );
}



/* printerApi/service/filament_hub.SetAllACMInfo @ 0044932c (size 500) */

void printerApi_service_filament_hub_SetAllACMInfo(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  int local_40;
  undefined4 local_38;
  int local_34;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_service_filament_hub_getAcmFileNameByGcodeFile();
  puVar1 = in_stack_00000004;
  if (local_40 == 0) {
    FUN_000715a4();
    FUN_0001eed8();
    puVar1[1] = local_34;
    if (*(int *)PTR_DAT_0044952c != 0) {
      puVar1 = (undefined4 *)FUN_00098678();
      *unaff_r8 = local_38;
    }
    *puVar1 = local_38;
    return;
  }
  FUN_0001cd7c();
  FUN_00170a5c();
  FUN_00126134();
  if (local_34 != 0) {
    return;
  }
  printerApi_service_filament_hub_syncDualACM();
  FUN_000f65f0();
  return;
}



/* printerApi/service/filament_hub.SetAllACMInfoDual @ 0044953c (size 1664) */

/* WARNING: Removing unreachable block (ram,0x004496bc) */
/* WARNING: Removing unreachable block (ram,0x00449618) */
/* WARNING: Removing unreachable block (ram,0x0044970c) */
/* WARNING: Removing unreachable block (ram,0x004497e4) */
/* WARNING: Removing unreachable block (ram,0x00449754) */
/* WARNING: Removing unreachable block (ram,0x0044979c) */
/* WARNING: Removing unreachable block (ram,0x00449794) */
/* WARNING: Removing unreachable block (ram,0x004497a0) */
/* WARNING: Removing unreachable block (ram,0x00449850) */
/* WARNING: Removing unreachable block (ram,0x00449854) */
/* WARNING: Removing unreachable block (ram,0x0044965c) */
/* WARNING: Removing unreachable block (ram,0x004496c4) */
/* WARNING: Removing unreachable block (ram,0x004496c8) */
/* WARNING: Removing unreachable block (ram,0x004498d8) */
/* WARNING: Removing unreachable block (ram,0x00449964) */
/* WARNING: Removing unreachable block (ram,0x004499cc) */
/* WARNING: Removing unreachable block (ram,0x004498cc) */
/* WARNING: Removing unreachable block (ram,0x004499c4) */
/* WARNING: Removing unreachable block (ram,0x004499d0) */
/* WARNING: Removing unreachable block (ram,0x00449928) */
/* WARNING: Removing unreachable block (ram,0x00449aec) */
/* WARNING: Removing unreachable block (ram,0x00449a58) */
/* WARNING: Removing unreachable block (ram,0x00449aa4) */
/* WARNING: Removing unreachable block (ram,0x00449a9c) */
/* WARNING: Removing unreachable block (ram,0x00449aa8) */
/* WARNING: Removing unreachable block (ram,0x00449b68) */
/* WARNING: Removing unreachable block (ram,0x00449b70) */

undefined4 printerApi_service_filament_hub_SetAllACMInfoDual(void)

{
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_0000001c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&local_8 <= *(undefined4 **)(unaff_r10 + 8)) {
    unaff_lr = 0x449bb8;
    FUN_00096bb8();
  }
  local_8 = in_stack_0000001c;
  FUN_0001cd7c();
  FUN_00170a5c();
  if (in_stack_00000008 != 0) {
    printerApi_service_filament_hub_getAcmFileNameByGcodeFile();
  }
  if (in_stack_00000010 != 0) {
    local_4 = 0;
    printerApi_service_filament_hub_getAcmFileNameByGcodeFile
              (in_stack_0000000c,local_68,local_64,in_stack_00000008,unaff_lr,in_stack_0000000c,
               in_stack_00000010);
    printerApi_service_filament_hub_getAcmFileNameByGcodeFile();
  }
  FUN_000f65f0();
  return 0;
}



/* printerApi/service/filament_hub.extractAcmInfoFromLine @ 00449be4 (size 736) */

void printerApi_service_filament_hub_extractAcmInfoFromLine(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int extraout_r3;
  uint uVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  bool bVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x20)) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0xa0);
      *(undefined4 *)((int)register0x00000054 + -0xa0) = unaff_lr;
      uVar3 = *(uint *)((int)register0x00000054 + 8);
      bVar8 = uVar3 == 0xf;
      if (0xe < uVar3) {
        *(uint *)((int)register0x00000054 + -0x9c) =
             *(int *)((int)register0x00000054 + 4) + ((int)(0xf - uVar3) >> 0x1f & 0xfU);
        *(uint *)((int)register0x00000054 + -0x98) = uVar3 - 0xf;
        FUN_00148fb4();
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
        *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_00449ec8;
        FUN_0001eed8();
        *(undefined4 **)((int)register0x00000054 + -4) =
             *(undefined4 **)((int)register0x00000054 + -0x98);
        **(undefined4 **)((int)register0x00000054 + -0x98) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x9c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        *(undefined4 *)((int)register0x00000054 + -0x94) =
             *(undefined4 *)((int)register0x00000054 + -0x78);
        FUN_00071920();
        *(undefined4 *)((int)register0x00000054 + -0x9c) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + -0x8c);
        *(undefined4 *)((int)register0x00000054 + -0x94) =
             *(undefined4 *)((int)register0x00000054 + -0x88);
        *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_00449ecc;
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             *(undefined4 *)((int)register0x00000054 + -4);
        FUN_0016a168();
        if (*(int *)((int)register0x00000054 + -0x88) != 0) {
          *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -0x88) + 4);
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x84);
          *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_00449ed0;
          *(undefined4 *)((int)register0x00000054 + -0x98) = 0x17;
          *(undefined1 **)((int)register0x00000054 + -0x94) =
               (undefined1 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)((int)register0x00000054 + -0x90) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = 1;
          FUN_00130144();
          *(undefined1 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x88);
          *(undefined4 *)((int)register0x00000054 + 0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x84);
          return;
        }
        iVar5 = **(int **)((int)register0x00000054 + -4);
        uVar3 = 0;
        iVar4 = 0;
        uVar6 = 0;
        iVar1 = (*(int **)((int)register0x00000054 + -4))[1];
        while (0 < iVar1) {
          *(int *)((int)register0x00000054 + -0x6c) = iVar1;
          *(int *)((int)register0x00000054 + -0x10) = iVar5;
          uVar2 = FUN_00098df4(iVar1,iVar5,(undefined1 *)((int)register0x00000054 + -0x3c));
          FUN_00098dec(uVar2,PTR_DAT_00449ed4,(undefined1 *)((int)register0x00000054 + -100));
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0x3c);
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + -0x38);
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x44) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
          uVar6 = uVar6 + 1;
          if (uVar3 < uVar6) {
            *(int *)((int)register0x00000054 + -0x9c) = iVar4;
            *(uint *)((int)register0x00000054 + -0x98) = uVar6;
            *(uint *)((int)register0x00000054 + -0x94) = uVar3;
            *(undefined4 *)((int)register0x00000054 + -0x90) = 1;
            *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_00449ed8;
            FUN_00093524();
            iVar4 = *(int *)((int)register0x00000054 + -0x88);
            uVar6 = *(uint *)((int)register0x00000054 + -0x84);
            uVar3 = *(uint *)((int)register0x00000054 + -0x80);
          }
          iVar1 = iVar4 + uVar6 * 0x28 + -0x28;
          if (*(int *)PTR_DAT_00449edc != 0) {
            *(int *)((int)register0x00000054 + -0x18) = iVar4;
            *(uint *)((int)register0x00000054 + -0x74) = uVar6;
            *(uint *)((int)register0x00000054 + -0x70) = uVar3;
            *(int *)((int)register0x00000054 + -0x14) = iVar1;
            *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_00449ed8;
            *(int *)((int)register0x00000054 + -0x98) = iVar1;
            *(undefined1 **)((int)register0x00000054 + -0x94) =
                 (undefined1 *)((int)register0x00000054 + -100);
            FUN_00022914();
            iVar1 = *(int *)((int)register0x00000054 + -0x14);
            uVar6 = *(uint *)((int)register0x00000054 + -0x74);
            iVar4 = *(int *)((int)register0x00000054 + -0x18);
            uVar3 = *(uint *)((int)register0x00000054 + -0x70);
          }
          FUN_00098dec(0,(undefined1 *)((int)register0x00000054 + -100),iVar1);
          iVar5 = extraout_r3 + 0x24;
          iVar1 = *(int *)((int)register0x00000054 + -0x6c) + -1;
        }
        *(undefined1 *)((int)register0x00000054 + 0xc) = 0;
        *(int *)((int)register0x00000054 + 0x10) = iVar4;
        *(uint *)((int)register0x00000054 + 0x14) = uVar6;
        *(uint *)((int)register0x00000054 + 0x18) = uVar3;
        *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
        return;
      }
      param_1 = FUN_00098758(0xf);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xa0);
      if (bVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x449ec0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/filament_hub.EnsureACMFilesForLocal3MF @ 00449ee0 (size 2124) */

/* WARNING: Removing unreachable block (ram,0x0044a18c) */
/* WARNING: Removing unreachable block (ram,0x0044a194) */

void printerApi_service_filament_hub_EnsureACMFilesForLocal3MF(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined **in_stack_00000004;
  undefined1 *in_stack_00000008;
  undefined **in_stack_0000000c;
  undefined1 *in_stack_00000010;
  undefined **local_d8;
  undefined1 *local_d4;
  undefined **local_d0;
  undefined **local_cc;
  undefined *local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined *local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined *local_b0;
  char local_aa;
  byte local_a9;
  undefined1 *local_a8;
  undefined1 *local_a4;
  undefined **local_a0;
  undefined1 *local_9c;
  undefined **local_98;
  undefined1 *local_94;
  undefined **local_90;
  undefined **local_8c;
  undefined **local_88;
  undefined **local_84;
  undefined **local_80;
  undefined **local_7c;
  undefined *local_78;
  undefined *local_74;
  undefined1 local_70 [4];
  int local_6c;
  undefined *local_68;
  undefined4 local_64;
  undefined *local_60;
  undefined *local_5c;
  undefined1 auStack_58 [20];
  undefined1 auStack_44 [20];
  undefined *local_30;
  undefined **local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined *local_20;
  undefined **local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined *local_10;
  undefined **local_c;
  undefined *local_8;
  undefined **local_4;
  
  while (&local_5c <= *(undefined ***)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if ((in_stack_00000008 == (undefined1 *)0x0) || (in_stack_00000010 == (undefined1 *)0x0)) {
    FUN_00098a28(0,&local_10);
    local_d8 = in_stack_00000004;
    FUN_0008a578();
    local_10 = PTR_SUB_0044a720;
    local_c = local_d0;
    local_d8 = in_stack_0000000c;
    local_d4 = in_stack_00000010;
    FUN_0008a578();
    local_8 = PTR_SUB_0044a720;
    local_4 = local_d0;
    local_d8 = (undefined **)PTR_DAT_0044a724;
    local_d4 = (undefined1 *)0x24;
    local_d0 = &local_10;
    local_cc = (undefined **)0x2;
    local_c8 = (undefined *)0x2;
    FUN_00130144();
    return;
  }
  local_d8 = in_stack_00000004;
  local_d4 = in_stack_00000008;
  printerApi_service_filament_hub_getAcmFileNameByGcodeFile();
  local_94 = (undefined1 *)local_cc;
  local_7c = local_d0;
  local_d8 = in_stack_0000000c;
  local_d4 = in_stack_00000010;
  printerApi_service_filament_hub_getAcmFileNameByGcodeFile();
  if ((local_94 == (undefined1 *)0x0) || (local_cc == (undefined **)0x0)) {
    local_d8 = (undefined **)PTR_DAT_0044a728;
    local_d4 = (undefined1 *)0x1d;
    local_d0 = (undefined **)0x0;
    local_cc = (undefined **)0x0;
    local_c8 = (undefined *)0x0;
    FUN_00130144();
    return;
  }
  local_9c = (undefined1 *)local_cc;
  local_84 = local_d0;
  local_d8 = local_7c;
  local_d4 = local_94;
  printerApi_common_file_FileExist();
  local_a9 = (byte)local_d0;
  local_d8 = local_84;
  local_d4 = local_9c;
  printerApi_common_file_FileExist();
  local_aa = (byte)local_d0;
  local_74 = PTR_DAT_0044a72c + (uint)local_a9 * 8;
  local_78 = PTR_DAT_0044a72c + ((uint)local_d0 & 0xff) * 8;
  local_d8 = local_7c;
  local_d4 = local_94;
  internal_filepathlite_Base();
  local_8c = local_d0;
  local_a4 = (undefined1 *)local_cc;
  local_d8 = local_84;
  local_d4 = local_9c;
  internal_filepathlite_Base();
  local_90 = local_d0;
  local_a8 = (undefined1 *)local_cc;
  FUN_00098a18(0,&local_30);
  local_d8 = local_8c;
  local_d4 = local_a4;
  FUN_0008a578();
  local_30 = PTR_SUB_0044a720;
  local_2c = local_d0;
  local_28 = PTR_DAT_0044a730;
  local_24 = local_74;
  local_d8 = local_90;
  local_d4 = local_a8;
  FUN_0008a578();
  local_20 = PTR_SUB_0044a720;
  local_1c = local_d0;
  local_18 = PTR_DAT_0044a730;
  local_14 = local_78;
  local_d8 = (undefined **)PTR_DAT_0044a734;
  local_d4 = (undefined1 *)0x40;
  local_d0 = &local_30;
  local_cc = (undefined **)0x4;
  local_c8 = (undefined *)0x4;
  printerApi_common_logger_Infof();
  if (local_a9 != 0) {
    if (local_aa != '\0') {
      local_d8 = local_7c;
      local_d4 = local_94;
      FUN_0012a748();
      local_98 = local_d0;
      local_80 = local_cc;
      local_d8 = local_84;
      local_d4 = local_9c;
      FUN_0012a748();
      if ((local_98 == (undefined **)0x0) || (local_d0 == (undefined **)0x0)) {
        local_60 = PTR_SUB_0044a720;
        local_5c = PTR_DAT_0044a748;
        local_d8 = &local_60;
        local_d4 = (undefined1 *)0x1;
        local_d0 = (undefined **)0x1;
        printerApi_common_logger_Debug();
        return;
      }
      local_a0 = local_d0;
      local_88 = local_cc;
      local_d8 = local_80;
      uVar1 = (*(code *)local_98[4])();
      FUN_00098e14(uVar1,&local_d4,auStack_44);
      local_d8 = local_88;
      uVar1 = (*(code *)local_a0[4])();
      uVar1 = FUN_00098e14(uVar1,&local_d4,auStack_58);
      uVar1 = FUN_00098e14(uVar1,auStack_44,&local_d8);
      FUN_00098e14(uVar1,auStack_58,&local_c4);
      FUN_00100a28();
      if ((char)local_b0 != '\0') {
        local_d8 = (undefined **)PTR_DAT_0044a744;
        local_d4 = (undefined1 *)0x3a;
        local_d0 = (undefined **)0x0;
        local_cc = (undefined **)0x0;
        local_c8 = (undefined *)0x0;
        printerApi_common_logger_Infof();
        local_d8 = local_7c;
        local_d4 = local_94;
        local_d0 = local_84;
        local_cc = (undefined **)local_9c;
        printerApi_service_filament_hub_copyACMFile();
        return;
      }
      local_d8 = local_88;
      uVar1 = (*(code *)local_a0[4])();
      FUN_00098e14(uVar1,&local_d4,auStack_58);
      local_d8 = local_80;
      uVar1 = (*(code *)local_98[4])();
      uVar1 = FUN_00098e14(uVar1,&local_d4,auStack_44);
      uVar1 = FUN_00098e14(uVar1,auStack_58,&local_d8);
      FUN_00098e14(uVar1,auStack_44,&local_c4);
      FUN_00100a28();
      if ((char)local_b0 == '\0') {
        local_60 = PTR_SUB_0044a720;
        local_5c = PTR_DAT_0044a740;
        local_d8 = &local_60;
        local_d4 = (undefined1 *)0x1;
        local_d0 = (undefined **)0x1;
        printerApi_common_logger_Debug();
        return;
      }
      local_d8 = (undefined **)PTR_DAT_0044a73c;
      local_d4 = (undefined1 *)0x3a;
      local_d0 = (undefined **)0x0;
      local_cc = (undefined **)0x0;
      local_c8 = (undefined *)0x0;
      printerApi_common_logger_Infof();
      local_d8 = local_84;
      local_d4 = local_9c;
      local_d0 = local_7c;
      local_cc = (undefined **)local_94;
      printerApi_service_filament_hub_copyACMFile();
      return;
    }
    if (local_a9 != 0) {
      local_60 = PTR_SUB_0044a720;
      local_5c = PTR_DAT_0044a738;
      local_d8 = &local_60;
      local_d4 = (undefined1 *)0x1;
      local_d0 = (undefined **)0x1;
      printerApi_common_logger_Info();
      local_d8 = local_7c;
      local_d4 = local_94;
      local_d0 = local_84;
      local_cc = (undefined **)local_9c;
      printerApi_service_filament_hub_copyACMFile();
      return;
    }
  }
  if (local_aa != '\0') {
    local_60 = PTR_SUB_0044a720;
    local_5c = PTR_DAT_0044a764;
    local_d8 = &local_60;
    local_d4 = (undefined1 *)0x1;
    local_d0 = (undefined **)0x1;
    printerApi_common_logger_Info();
    local_d8 = local_84;
    local_d4 = local_9c;
    local_d0 = local_7c;
    local_cc = (undefined **)local_94;
    printerApi_service_filament_hub_copyACMFile();
    return;
  }
  if (local_a9 != 0) {
    return;
  }
  local_60 = PTR_SUB_0044a720;
  local_5c = PTR_DAT_0044a74c;
  local_d8 = &local_60;
  local_d4 = (undefined1 *)0x1;
  local_d0 = (undefined **)0x1;
  printerApi_common_logger_Warn();
  local_70[0] = 0;
  local_6c = 0;
  local_68 = (undefined *)0x0;
  local_64 = 0;
  local_d8 = in_stack_0000000c;
  local_d4 = in_stack_00000010;
  local_d0 = (undefined **)0x0;
  local_cc = (undefined **)0x0;
  local_c8 = (undefined *)0x0;
  printerApi_service_filament_hub_GetACMInfo();
  local_70[0] = (undefined1)local_c4;
  local_6c = local_c0;
  local_68 = local_bc;
  local_64 = local_b8;
  if (local_b4 == 0) {
    local_d8 = (undefined **)PTR_DAT_0044a754;
    local_d4 = local_70;
    FUN_0001cd7c();
    local_d8 = (undefined **)PTR_DAT_0044a754;
    local_d4 = (undefined1 *)local_d0;
    local_d0 = (undefined **)0x0;
    local_cc = (undefined **)0x0;
    local_c8 = PTR_DAT_0044a758;
    local_c4 = 1;
    FUN_00170a5c();
    local_d8 = local_7c;
    local_d4 = local_94;
    local_d0 = (undefined **)local_c0;
    local_cc = (undefined **)local_bc;
    local_c8 = (undefined *)local_b8;
    local_c4 = 0x1a4;
    FUN_00126134();
    if (local_c0 == 0) {
      local_60 = PTR_SUB_0044a720;
      local_5c = PTR_DAT_0044a760;
      local_d8 = &local_60;
      local_d4 = (undefined1 *)0x1;
      local_d0 = (undefined **)0x1;
      printerApi_common_logger_Info();
      local_d8 = (undefined **)0x24;
      local_d4 = (undefined1 *)0x0;
      local_d0 = (undefined **)0x0;
      local_cc = (undefined **)0x0;
      FUN_000f65f0();
    }
    else {
      local_60 = *(undefined **)(local_c0 + 4);
      local_5c = local_bc;
      local_d8 = (undefined **)PTR_DAT_0044a75c;
      local_d4 = (undefined1 *)0x2e;
      local_d0 = &local_60;
      local_cc = (undefined **)0x1;
      local_c8 = (undefined *)0x1;
      printerApi_common_logger_Warnf();
    }
    return;
  }
  local_60 = *(undefined **)(local_b4 + 4);
  local_5c = local_b0;
  local_d8 = (undefined **)PTR_DAT_0044a750;
  local_d4 = (undefined1 *)0x1f;
  local_d0 = &local_60;
  local_cc = (undefined **)0x1;
  local_c8 = (undefined *)0x1;
  FUN_00130144();
  return;
}



/* printerApi/service/filament_hub.copyACMFile @ 0044a774 (size 744) */

void printerApi_service_filament_hub_copyACMFile(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int local_48;
  int local_40;
  int local_3c;
  undefined *local_18 [2];
  undefined *local_10;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00125de4();
  if (local_40 != 0) {
    local_8 = *(undefined4 *)(local_40 + 4);
    FUN_00130144();
    return;
  }
  internal_filepathlite_Dir();
  FUN_00128658();
  if (local_48 != 0) {
    local_8 = *(undefined4 *)(local_48 + 4);
    FUN_00130144();
    return;
  }
  FUN_00126134();
  if (local_3c != 0) {
    local_8 = *(undefined4 *)(local_3c + 4);
    FUN_00130144();
    return;
  }
  internal_filepathlite_Base();
  internal_filepathlite_Base();
  FUN_00098a28(0,local_18);
  FUN_0008a578();
  local_18[0] = PTR_SUB_0044aa6c;
  FUN_0008a578();
  local_10 = PTR_SUB_0044aa6c;
  printerApi_common_logger_Infof();
  FUN_000f65f0();
  return;
}



