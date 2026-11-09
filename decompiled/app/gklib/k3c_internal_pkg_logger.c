// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/logger   functions: 35
/* k3c/internal/pkg/logger.init @ 0042719c (size 84) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_logger_init(void)

{
  undefined4 extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4271ec;
    FUN_0009bf64();
  }
  k3c_internal_pkg_logger_loadBeijingLocation();
  if (*_UNK_004271f4 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *_UNK_004271f8;
    uStack_4 = extraout_r1;
  }
  *_UNK_004271f8 = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x004271e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/logger.loadBeijingLocation @ 004271fc (size 112) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_logger_loadBeijingLocation(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x427268;
    FUN_0009bf64();
  }
  func_0x00111424();
  if (uStack_8 != 0) {
    FUN_0010ed2c();
                    /* WARNING: Could not recover jumptable at 0x00427250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0042725c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/logger.encodeBeijingTime @ 00427278 (size 264) */

/* WARNING: Removing unreachable block (ram,0x004272ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_logger_encodeBeijingTime(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  bool bVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      uVar1 = *_UNK_00427384;
      *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
      FUN_0009e2f0(uVar1,(undefined1 *)((int)register0x00000054 + 4),
                   (undefined1 *)((int)register0x00000054 + -0x18));
      iVar2 = *(int *)((int)register0x00000054 + -4);
      bVar7 = iVar2 == 0;
      if (!bVar7) {
        if (iVar2 == _UNK_00427388) {
          iVar2 = 0;
        }
        uVar4 = *(uint *)((int)register0x00000054 + -0x14);
        if ((uVar4 & 0x80000000) != 0) {
          uVar5 = (*(uint *)((int)register0x00000054 + -0x18) & 0x7fffffff) >> 0x1e |
                  (*(uint *)((int)register0x00000054 + -0x18) >> 0x1f | uVar4 << 1) << 1;
          *(uint *)((int)register0x00000054 + -0x10) = uVar5 + _UNK_0042738c;
          *(uint *)((int)register0x00000054 + -0xc) =
               ((uVar4 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar5,_UNK_0042738c);
          *(uint *)((int)register0x00000054 + -0x18) =
               *(uint *)((int)register0x00000054 + -0x18) & 0x3fffffff;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        }
        *(int *)((int)register0x00000054 + -8) = iVar2;
        FUN_0009e2f0(iVar2,(undefined1 *)((int)register0x00000054 + -0x18),
                     (undefined1 *)((int)register0x00000054 + -0x3c));
        *(undefined4 *)((int)register0x00000054 + -0x28) = _UNK_00427390;
        *(undefined4 *)((int)register0x00000054 + -0x24) = 0x19;
        FUN_00101cdc();
        pcVar3 = *(code **)(*(int *)((int)register0x00000054 + 0x18) + 0x38);
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + 0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        (*pcVar3)();
                    /* WARNING: Could not recover jumptable at 0x00427358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x40))();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x3c) = _UNK_00427394;
      *(undefined4 *)((int)register0x00000054 + -0x38) = _UNK_00427398;
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if (bVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x42737c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/logger.shortCallerWithFunc @ 0042739c (size 288) */

/* WARNING: Removing unreachable block (ram,0x004273d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_logger_shortCallerWithFunc(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      FUN_0009e2e0(param_1,(undefined1 *)((int)register0x00000054 + 4),
                   (undefined1 *)((int)register0x00000054 + -0x2c));
      go_uber_org_zap_zapcore_EntryCaller_TrimmedPath();
      uVar2 = *(uint *)((int)register0x00000054 + 0x1c);
      uVar1 = *(undefined4 *)((int)register0x00000054 + -0x10);
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0xc);
      if (uVar2 == 0) goto LAB_004273e0;
      iVar4 = *(int *)((int)register0x00000054 + 0x18);
      uVar6 = uVar2;
      do {
        uVar6 = uVar6 - 1;
        if ((int)uVar6 < 0) {
          uVar6 = 0xffffffff;
          break;
        }
        uVar9 = uVar6 == uVar2;
        if (uVar2 <= uVar6) goto LAB_004274a4;
      } while (*(char *)(iVar4 + uVar6) != '.');
      if ((int)uVar6 < 0) goto LAB_00427454;
      uVar7 = uVar6 + 1;
      uVar9 = uVar2 == uVar7;
      if (uVar7 <= uVar2) {
        iVar4 = iVar4 + (uVar7 & (int)(1 - (uVar2 - uVar6)) >> 0x1f);
        uVar2 = (uVar2 - uVar6) - 1;
LAB_00427454:
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x28) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x20) = _UNK_004274c0;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 2;
        *(int *)((int)register0x00000054 + -0x18) = iVar4;
        *(uint *)((int)register0x00000054 + -0x14) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x10) = _UNK_004274c4;
        *(undefined4 *)((int)register0x00000054 + -0xc) = 1;
        FUN_00076474();
        uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -4);
LAB_004273e0:
        pcVar3 = *(code **)(*(int *)((int)register0x00000054 + 0x20) + 0x38);
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + 0x24);
        *(undefined4 *)((int)register0x00000054 + -0x28) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar5;
        (*pcVar3)();
                    /* WARNING: Could not recover jumptable at 0x004273fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x30))();
        return;
      }
      FUN_0009dc34(uVar7);
LAB_004274a4:
      param_1 = FUN_0009dbd4(uVar6);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x4274b8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/logger.newConsoleEncoder @ 004274c8 (size 152) */

void k3c_internal_pkg_logger_newConsoleEncoder(undefined4 param_1)

{
  int unaff_r10;
  undefined1 auStack_134 [100];
  undefined1 local_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [52];
  undefined *local_84;
  undefined *local_80;
  undefined *local_78;
  undefined1 auStack_64 [92];
  undefined *local_8;
  int local_4;
  
  while( true ) {
    if (*(undefined1 **)(unaff_r10 + 8) < auStack_b8) break;
    param_1 = FUN_0009bf64();
  }
  FUN_0009e250(param_1,PTR_DAT_00427564,auStack_c8);
  local_84 = PTR_DAT_00427568;
  local_80 = PTR_DAT_0042756c;
  local_78 = PTR_DAT_00427570;
  FUN_0009e250(PTR_DAT_00427570,auStack_c8,auStack_64);
  if (local_4 == 0) {
    local_8 = PTR_DAT_00427574;
    local_4 = 1;
  }
  FUN_0009e250(local_4,auStack_64,auStack_134);
  local_d0 = 1;
  go_uber_org_zap_zapcore_newJSONEncoder();
  return;
}



/* k3c/internal/pkg/logger.newFileEncoder @ 0042757c (size 152) */

void k3c_internal_pkg_logger_newFileEncoder(undefined4 param_1)

{
  int unaff_r10;
  undefined1 auStack_134 [100];
  undefined1 local_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [52];
  undefined *local_84;
  undefined *local_80;
  undefined *local_78;
  undefined1 auStack_64 [92];
  undefined *local_8;
  int local_4;
  
  while( true ) {
    if (*(undefined1 **)(unaff_r10 + 8) < auStack_b8) break;
    param_1 = FUN_0009bf64();
  }
  FUN_0009e250(param_1,PTR_DAT_00427618,auStack_c8);
  local_84 = PTR_DAT_0042761c;
  local_80 = PTR_DAT_00427620;
  local_78 = PTR_DAT_00427624;
  FUN_0009e250(PTR_DAT_00427624,auStack_c8,auStack_64);
  if (local_4 == 0) {
    local_8 = PTR_DAT_00427628;
    local_4 = 1;
  }
  FUN_0009e250(local_4,auStack_64,auStack_134);
  local_d0 = 1;
  go_uber_org_zap_zapcore_newJSONEncoder();
  return;
}



/* k3c/internal/pkg/logger.newConsoleCore @ 00427630 (size 284) */

void k3c_internal_pkg_logger_newConsoleCore(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  byte in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 local_24;
  undefined4 *local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_logger_newConsoleEncoder();
  uVar1 = (uint)in_stack_00000004;
  uVar5 = *(undefined4 *)PTR_DAT_00427750;
  FUN_00022cf8();
  local_20[2] = PTR_DAT_00427758;
  puVar4 = PTR_DAT_00427760 + uVar1 * 8;
  puVar2 = local_20;
  if (*(int *)PTR_DAT_0042775c != 0) {
    puVar2 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = uVar5;
    unaff_r8[1] = puVar2[3];
  }
  puVar2[3] = uVar5;
  FUN_00022cf8();
  *local_20 = PTR_DAT_00427768;
  local_20[1] = puVar4;
  local_20[2] = local_24;
  puVar3 = local_20;
  if (*(int *)PTR_DAT_0042775c != 0) {
    puVar3 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = local_20;
    unaff_r8[1] = puVar2;
  }
  puVar3[3] = local_20;
  puVar3[4] = PTR_DAT_0042776c;
  puVar3[5] = puVar2;
  return;
}



/* k3c/internal/pkg/logger.newFileCore @ 00427774 (size 424) */

void k3c_internal_pkg_logger_newFileCore(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  byte in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined **local_30;
  undefined4 *local_2c;
  undefined *local_8;
  undefined4 *local_4;
  
  ppuVar2 = local_30;
  while (puVar1 = PTR_DAT_00427920, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  local_30[1] = (undefined *)in_stack_0000000c;
  if (*(int *)PTR_DAT_00427924 != 0) {
    local_30 = (undefined **)FUN_0009db54();
    *unaff_r8 = in_stack_00000008;
  }
  *local_30 = (undefined *)in_stack_00000008;
  local_30[2] = (undefined *)in_stack_00000010;
  local_30[4] = (undefined *)in_stack_00000014;
  local_30[3] = (undefined *)in_stack_00000018;
  *(undefined1 *)((int)local_30 + 0x15) = 0;
  *(undefined1 *)(local_30 + 5) = 1;
  k3c_internal_pkg_logger_newFileEncoder();
  FUN_00020e80();
  if (local_2c == (undefined4 *)0x0) {
    ppuVar3 = *(undefined ***)PTR_DAT_00427928;
    FUN_00020dac();
    local_2c = local_30;
    puVar4 = (undefined *)0x0;
    local_30 = ppuVar3;
  }
  else {
    local_8 = PTR_DAT_00427934;
    local_4 = local_30;
    FUN_00020b9c();
    puVar4 = PTR_DAT_0042793c;
    local_30 = &local_8;
  }
  puVar5 = PTR_DAT_00427940 + (uint)in_stack_00000004 * 8;
  FUN_00022cf8();
  *local_30 = PTR_DAT_00427948;
  local_30[1] = puVar5;
  local_30[2] = puVar1;
  if (*(int *)PTR_DAT_00427924 != 0) {
    local_30 = (undefined **)FUN_0009db64();
    *unaff_r8 = ppuVar2;
    unaff_r8[1] = local_2c;
  }
  local_30[3] = (undefined *)ppuVar2;
  local_30[4] = puVar4;
  local_30[5] = (undefined *)local_2c;
  return;
}



/* k3c/internal/pkg/logger.getMACAddress @ 00427950 (size 816) */

/* WARNING: Removing unreachable block (ram,0x00427a04) */
/* WARNING: Removing unreachable block (ram,0x00427a5c) */
/* WARNING: Removing unreachable block (ram,0x00427a10) */
/* WARNING: Removing unreachable block (ram,0x00427b0c) */
/* WARNING: Removing unreachable block (ram,0x00427b14) */
/* WARNING: Removing unreachable block (ram,0x00427b80) */
/* WARNING: Removing unreachable block (ram,0x00427b28) */
/* WARNING: Removing unreachable block (ram,0x00427b34) */
/* WARNING: Removing unreachable block (ram,0x00427b70) */
/* WARNING: Removing unreachable block (ram,0x00427b84) */
/* WARNING: Removing unreachable block (ram,0x00427ba0) */
/* WARNING: Removing unreachable block (ram,0x00427bec) */
/* WARNING: Removing unreachable block (ram,0x00427c08) */
/* WARNING: Removing unreachable block (ram,0x00427b00) */
/* WARNING: Removing unreachable block (ram,0x00427c54) */
/* WARNING: Removing unreachable block (ram,0x00427ae4) */

void k3c_internal_pkg_logger_getMACAddress(void)

{
  int extraout_r3;
  int iVar1;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined1 auStack_30 [12];
  int local_24;
  int local_c;
  undefined *local_8;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x427c7c;
    FUN_0009bf64();
  }
  FUN_001ac0a4();
  iVar1 = in_stack_00000008;
  if (local_5c == 0) {
    while (0 < local_64) {
      local_c = local_68;
      FUN_0009e2d8(local_68,local_68,auStack_30,local_64,unaff_lr);
      if (iVar1 == local_24) {
        local_60 = local_24;
        FUN_00018250();
        iVar1 = in_stack_00000008;
      }
      local_68 = local_c + 0x20;
      local_64 = extraout_r3 + -1;
    }
    local_8 = (undefined *)0x0;
    local_4 = 0;
    FUN_0008f77c();
    local_8 = PTR_DAT_00427c88;
    local_4 = local_60;
    FUN_001386c4();
    return;
  }
  return;
}



/* k3c/internal/pkg/logger.(*LokiCore).Enabled @ 00427c94 (size 12) */

void k3c_internal_pkg_logger___LokiCore__Enabled(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uStack0000000c;
  
  uStack0000000c = 1;
                    /* WARNING: Could not recover jumptable at 0x00427c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/logger.(*LokiCore).Write @ 00427ca4 (size 384) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_logger___LokiCore__Write(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  int iStack_50;
  int iStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  uint uStack_40;
  int iStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 auStack_14 [20];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x427e20;
    FUN_0009bf64();
  }
  uVar1 = FUN_001160a8();
  uVar1 = FUN_0009e2f0(uVar1,&uStack_58,auStack_14);
  FUN_0009e2f0(uVar1,auStack_14,&uStack_34);
  if ((uStack_30 & 0x80000000) != 0) {
    uVar2 = (uStack_34 & 0x7fffffff) >> 0x1e | (uStack_34 >> 0x1f | uStack_30 << 1) << 1;
    uStack_2c = uVar2 + _UNK_00427e28;
    iStack_28 = ((uStack_30 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar2,_UNK_00427e28);
  }
  uStack_38 = (uint)((ulonglong)_UNK_00427e2c * (ulonglong)uStack_2c);
  iStack_3c = iStack_28 * _UNK_00427e2c +
              (int)((ulonglong)_UNK_00427e2c * (ulonglong)uStack_2c >> 0x20);
  uStack_40 = uStack_34 & 0x3fffffff;
  FUN_000908bc();
  uStack_1c = uStack_58;
  uStack_58 = 0;
  puStack_54 = (undefined4 *)in_stack_00000008;
  iStack_50 = in_stack_0000000c;
  FUN_00099104();
  puStack_44 = puStack_48;
  uStack_20 = iStack_4c;
  uStack_58 = _UNK_00427e30;
  puStack_54 = (undefined4 *)uStack_1c;
  iStack_50 = uStack_38 + uStack_40 + _UNK_00427e34;
  iStack_4c = iStack_3c + ((int)uStack_40 >> 0x1f) + (uint)CARRY4(uStack_38,uStack_40) +
              _UNK_00427e38 + (uint)CARRY4(uStack_38 + uStack_40,_UNK_00427e34);
  FUN_000931c8();
  puStack_48[1] = puStack_44;
  if (*_UNK_00427e3c != 0) {
    puStack_48 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = uStack_20;
    unaff_r8[1] = *puStack_48;
  }
  *puStack_48 = uStack_20;
  uStack_18 = uStack_1c;
  uStack_58 = *(undefined4 *)(in_stack_00000004 + 0x18);
  puStack_54 = &uStack_18;
  FUN_0001b1d0();
  in_stack_00000014 = in_stack_0000000c;
  in_stack_00000018 = 0;
  in_stack_0000001c = 0;
                    /* WARNING: Could not recover jumptable at 0x00427e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/logger.(*LokiCore).flush @ 00427e40 (size 488) */

void k3c_internal_pkg_logger___LokiCore__flush(void)

{
  undefined4 *puVar1;
  undefined4 **ppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *extraout_r2;
  undefined4 *extraout_r3;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 **ppuVar8;
  undefined1 *puVar9;
  undefined4 *local_50;
  undefined4 **local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 auStack_34 [8];
  undefined1 *local_2c;
  undefined1 *local_28;
  undefined4 *puStack_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 **local_18;
  undefined4 *local_14;
  undefined4 *local_10 [2];
  undefined4 local_8;
  undefined4 **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x428024;
    FUN_0009bf64();
  }
  puVar9 = (undefined1 *)0x0;
  ppuVar8 = DAT_0042802c;
  FUN_0010921c();
  local_20 = (undefined4 *)*local_50;
  puVar3 = (undefined1 *)0x0;
  puVar4 = (undefined1 *)0x0;
  ppuVar2 = &puStack_24;
  do {
    puVar1 = local_20;
    uVar6 = *(undefined4 *)(in_stack_00000004 + 0x18);
    local_14 = (undefined4 *)0x0;
    local_2c = puVar4;
    local_28 = puVar3;
    local_18 = ppuVar2;
    FUN_0009df04(0,local_10,puVar4,ppuVar2,unaff_lr,ppuVar8,puVar9);
    local_4 = &local_14;
    ppuVar8 = local_10;
    puVar9 = auStack_34;
    local_44 = (undefined4 **)CONCAT31(local_44._1_3_,1);
    local_10[0] = puVar1;
    local_8 = uVar6;
    FUN_0006cba4();
    if (local_40 == (undefined1 *)0x0) {
      if (local_2c != (undefined1 *)0x0) {
        k3c_internal_pkg_logger___LokiCore__sendBatch();
        return;
      }
      return;
    }
    puVar4 = local_2c + 1;
    ppuVar2 = local_18;
    puVar5 = local_14;
    puVar3 = local_28;
    if (local_28 < puVar4) {
      local_1c = local_14;
      ppuVar8 = local_18;
      puVar9 = puVar4;
      FUN_000987f4();
      ppuVar2 = local_44;
      puVar4 = local_40;
      puVar5 = local_1c;
      puVar3 = local_3c;
    }
    puVar7 = puVar4 + -1;
    if (*DAT_00428034 != 0) {
      ppuVar2 = (undefined4 **)FUN_0009db64();
      *puVar1 = extraout_r3;
      puVar1[1] = ppuVar2[(int)puVar7];
      puVar4 = extraout_r2;
      puVar5 = extraout_r3;
    }
    ppuVar2[(int)puVar7] = puVar5;
  } while ((int)puVar4 < 1000);
  k3c_internal_pkg_logger___LokiCore__sendBatch();
  return;
}



/* k3c/internal/pkg/logger.(*LokiCore).sendBatch @ 00428038 (size 1704) */

void k3c_internal_pkg_logger___LokiCore__sendBatch(void)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined **extraout_r1;
  undefined **ppuVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **extraout_r3;
  undefined *puVar10;
  undefined *extraout_r3_00;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **local_a4;
  undefined4 local_a0;
  undefined4 *local_9c;
  undefined *local_98;
  undefined **local_94;
  undefined **local_90;
  undefined *local_38;
  undefined **local_34;
  undefined *local_30;
  undefined4 *local_2c;
  
  ppuVar6 = local_a4;
  while (&local_30 <= *(undefined ***)(unaff_r10 + 8)) {
    unaff_lr = 0x4286dc;
    FUN_0009bf64();
  }
  ppuVar13 = (undefined **)&DAT_00000005;
  ppuVar14 = (undefined **)PTR_s_wlan0labelgklib_s__s______tempem_00820821_0x604_004286e4;
  k3c_internal_pkg_logger_getMACAddress();
  if (local_9c != (undefined4 *)0x0) {
    FUN_0013bb30();
    return;
  }
  ppuVar9 = (undefined **)0x0;
  ppuVar11 = (undefined **)0x0;
  puVar12 = (undefined *)0x0;
  for (iVar3 = 0; iVar3 < in_stack_0000000c; iVar3 = iVar3 + 1) {
    FUN_0009dee4(0,&local_30,in_stack_00000008,*(undefined4 *)(in_stack_00000008 + iVar3 * 4));
    local_a4 = &local_30;
    ppuVar14 = (undefined **)PTR_DAT_004286f8;
    ppuVar13 = extraout_r3;
    FUN_00091764();
    while (local_30 != (undefined *)0x0) {
      puVar10 = (undefined *)*local_2c;
      puVar8 = (undefined *)local_2c[1];
      local_38 = (undefined *)0x0;
      local_34 = (undefined **)0x0;
      FUN_0008f6c0();
      local_38 = PTR_DAT_00428730;
      local_34 = local_a4;
      ppuVar14 = (undefined **)0x2;
      local_a4 = &local_38;
      local_9c = (undefined4 *)0x1;
      FUN_0013b72c();
      FUN_00022cf8();
      ppuVar14[1] = (undefined *)local_94;
      ppuVar13 = ppuVar14;
      if (*(int *)PTR_DAT_00428704 != 0) {
        ppuVar14 = (undefined **)FUN_0009db64();
        *unaff_r8 = local_98;
        unaff_r8[1] = puVar10;
      }
      *ppuVar14 = local_98;
      ppuVar14[3] = puVar8;
      ppuVar14[2] = puVar10;
      ppuVar9 = (undefined **)((int)ppuVar9 + 1);
      ppuVar2 = ppuVar11;
      if (ppuVar11 < ppuVar9) {
        local_9c = (undefined4 *)PTR_DAT_0042873c;
        ppuVar13 = ppuVar9;
        FUN_000987f4();
        ppuVar9 = local_94;
        ppuVar2 = local_90;
        puVar12 = local_98;
        local_a4 = ppuVar11;
      }
      ppuVar11 = ppuVar2;
      iVar1 = (int)ppuVar9 * 0xc;
      *(undefined4 *)(puVar12 + iVar1 + -8) = 2;
      *(undefined4 *)(puVar12 + iVar1 + -4) = 2;
      if (*(int *)PTR_DAT_00428704 != 0) {
        ppuVar14 = (undefined **)FUN_0009db64();
        *unaff_r8 = ppuVar14;
        unaff_r8[1] = *(undefined4 *)(extraout_r3_00 + iVar1 + -0xc);
        puVar12 = extraout_r3_00;
      }
      *(undefined ***)(puVar12 + iVar1 + -0xc) = ppuVar14;
      ppuVar14 = &local_30;
      FUN_000919c8();
    }
  }
  FUN_000908bc(iVar3,ppuVar6,local_a0,ppuVar9,unaff_lr,ppuVar14,ppuVar13);
  FUN_000908bc();
  ppuVar13 = ppuVar14;
  FUN_000908bc();
  FUN_00093a08();
  local_9c[1] = local_a0;
  puVar4 = local_9c;
  if (*(int *)PTR_DAT_00428704 != 0) {
    puVar4 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = ppuVar6;
    unaff_r8[1] = *puVar4;
  }
  *puVar4 = ppuVar6;
  uVar5 = *(undefined4 *)(in_stack_00000004 + 0xc);
  uVar7 = *(undefined4 *)(in_stack_00000004 + 8);
  FUN_00093a08();
  local_9c[1] = uVar5;
  puVar4 = local_9c;
  if (*(int *)PTR_DAT_00428704 != 0) {
    puVar4 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = uVar7;
    unaff_r8[1] = *puVar4;
  }
  *puVar4 = uVar7;
  uVar5 = *(undefined4 *)(in_stack_00000004 + 0x14);
  uVar7 = *(undefined4 *)(in_stack_00000004 + 0x10);
  FUN_00093a08();
  local_9c[1] = uVar5;
  puVar4 = local_9c;
  if (*(int *)PTR_DAT_00428704 != 0) {
    puVar4 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = uVar7;
    unaff_r8[1] = *puVar4;
  }
  *puVar4 = uVar7;
  FUN_00093a08();
  *local_9c = PTR_DAT_004286fc;
  puVar4 = local_9c;
  if (*(int *)PTR_DAT_00428704 != 0) {
    puVar4 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = ppuVar13;
    unaff_r8[1] = puVar4[1];
  }
  puVar4[1] = ppuVar13;
  FUN_0008f820();
  ppuVar6 = ppuVar14;
  FUN_00093a08();
  *local_9c = PTR_DAT_0042871c;
  puVar4 = local_9c;
  if (*(int *)PTR_DAT_00428704 != 0) {
    puVar4 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = 6;
    unaff_r8[1] = puVar4[1];
  }
  puVar4[1] = 6;
  FUN_00022cf8();
  if (*(int *)PTR_DAT_00428704 != 0) {
    FUN_0009db54();
    *unaff_r8 = ppuVar14;
    ppuVar6 = extraout_r1;
  }
  *ppuVar6 = (undefined *)ppuVar14;
  FUN_0008f820();
  FUN_00093a08();
  *local_9c = PTR_DAT_00428728;
  if (*(int *)PTR_DAT_00428704 != 0) {
    local_9c = (undefined4 *)FUN_0009db64();
    *unaff_r8 = 6;
    unaff_r8[1] = local_9c[1];
  }
  local_9c[1] = 6;
  FUN_0015db30();
  if (local_98 != (undefined *)0x0) {
    local_38 = *(undefined **)(local_98 + 4);
    FUN_001386c4();
    return;
  }
  k3c_internal_pkg_logger___LokiCore__httpPost();
  return;
}



/* k3c/internal/pkg/logger.(*LokiCore).httpPost @ 00428740 (size 760) */

/* WARNING: Removing unreachable block (ram,0x004289d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_logger___LokiCore__httpPost(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 *local_5c;
  undefined4 local_40;
  int local_3c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_0000001c = 0;
  in_stack_00000020 = 0;
  FUN_00022cf8();
  local_5c[5] = DAT_00428a48;
  local_5c[6] = 0;
  FUN_00022cf8(local_5c);
  local_5c[1] = in_stack_00000014;
  local_5c[2] = in_stack_00000018;
  if (*(int *)PTR_DAT_00428a50 != 0) {
    local_5c = (undefined4 *)FUN_0009db54();
    *unaff_r8 = in_stack_00000010;
  }
  puVar1 = in_stack_00000008;
  *local_5c = in_stack_00000010;
  FUN_0036b7b0();
  if (local_3c != 0) {
    FUN_001386c4();
    return;
  }
  FUN_002ff54c(local_40);
  FUN_00022cf8();
  _SUB_00000010 = 0x10;
  _SUB_0000000c = PTR_s_application_json__A_Za_z0_9______008262d0_0x396a_00428a70;
  FUN_00093a08();
  puVar1[1] = 1;
  puVar1[2] = 1;
  if (*(int *)PTR_DAT_00428a50 != 0) {
    puVar1 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = 0xc;
    unaff_r8[1] = *puVar1;
  }
  *puVar1 = 0xc;
  FUN_0032ec4c();
  FUN_001386c4();
  return;
}



/* k3c/internal/pkg/logger.(*LokiCore).httpPost.deferwrap1 @ 00428a80 (size 92) */

void k3c_internal_pkg_logger___LokiCore__httpPost_deferwrap1(void)

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



/* k3c/internal/pkg/logger.(*LokiCore).Sync @ 00428adc (size 20) */

void k3c_internal_pkg_logger___LokiCore__Sync(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = 0;
  uStack0000000c = 0;
                    /* WARNING: Could not recover jumptable at 0x00428aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/logger.newLokiCore @ 00428af0 (size 740) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_logger_newLokiCore(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  byte in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined *in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined **local_58;
  undefined *local_54;
  undefined *local_48;
  undefined *local_44;
  undefined *local_10;
  undefined **local_c;
  undefined *local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (in_stack_0000000c == 0) {
    FUN_0013bb30();
    return;
  }
  FUN_0001af6c();
  local_8 = (undefined *)0x0;
  local_4 = 0;
  FUN_0008f77c();
  local_8 = PTR_DAT_00428ddc;
  ppuVar3 = &local_8;
  FUN_0013b72c();
  FUN_00022cf8();
  ppuVar1 = (undefined **)&DAT_0000001a;
  _DAT_00000026 = in_stack_00000014;
  if (*(int *)PTR_DAT_00428de8 != 0) {
    ppuVar1 = (undefined **)FUN_0009db74();
    *unaff_r8 = in_stack_00000010;
    unaff_r8[1] = local_54;
    unaff_r8[2] = local_48;
  }
  ppuVar1[2] = in_stack_00000010;
  ppuVar1[5] = (undefined *)0x7;
  ppuVar1[4] = PTR_s_loki_goDEFAULT_______printersect_008216f7_0x5a7_00428dec;
  ppuVar1[6] = local_54;
  ppuVar1[1] = local_44;
  *ppuVar1 = local_48;
  FUN_00022cf8();
  puVar2 = (undefined *)0x1a;
  _DAT_0000001a = PTR_k3c_internal_pkg_logger_newLokiCore_func1_00428df4;
  if (*(int *)PTR_DAT_00428de8 != 0) {
    puVar2 = (undefined *)FUN_0009db54();
    *unaff_r8 = ppuVar1;
  }
  *(undefined ***)(puVar2 + 4) = ppuVar1;
  FUN_00062dd0();
  k3c_internal_pkg_logger_newFileEncoder();
  FUN_00020e80();
  if (ppuVar3 == (undefined **)0x0) {
    local_58 = *(undefined ***)PTR_DAT_00428df8;
    FUN_00020dac();
    ppuVar3 = ppuVar1;
    puVar4 = (undefined *)0x0;
  }
  else {
    local_10 = PTR_DAT_00428e04;
    local_58 = &local_10;
    local_c = ppuVar1;
    FUN_00020b9c();
    puVar4 = PTR_DAT_00428e0c;
  }
  puVar5 = PTR_DAT_00428e10 + (uint)in_stack_00000004 * 8;
  FUN_00022cf8();
  *local_58 = PTR_DAT_00428e18;
  local_58[1] = puVar5;
  local_58[2] = puVar2;
  if (*(int *)PTR_DAT_00428de8 != 0) {
    local_58 = (undefined **)FUN_0009db64();
    *unaff_r8 = 0x1a;
    unaff_r8[1] = ppuVar3;
  }
  local_58[3] = (undefined *)0x1a;
  local_58[4] = puVar4;
  local_58[5] = (undefined *)ppuVar3;
  return;
}



/* k3c/internal/pkg/logger.newLokiCore.func1 @ 00428e2c (size 212) */

void k3c_internal_pkg_logger_newLokiCore_func1(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puStack_30;
  undefined1 auStack_24 [20];
  undefined4 auStack_10 [2];
  undefined4 uStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x428f04;
    FUN_0009bf00();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_00109790();
  auStack_10[0] = DAT_00428f10;
  puStack_4 = auStack_10;
  uStack_8 = *puStack_30;
  FUN_0009df00(0,auStack_24,uStack_8);
  while( true ) {
    FUN_0001bfd4();
    if ((char)puStack_30 == '\0') break;
    FUN_0009df00(0,auStack_24);
    k3c_internal_pkg_logger___LokiCore__flush();
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00428ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/logger.newLokiCore.func1.deferwrap1 @ 00428f14 (size 96) */

void k3c_internal_pkg_logger_newLokiCore_func1_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  int local_8 [2];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_8;
  }
  local_8[0] = *(int *)(unaff_r7 + 4);
  if (*(char *)(local_8[0] + 4) != '\0') {
    FUN_0009a9d8();
  }
  return;
}



/* k3c/internal/pkg/logger.InitConsoleLogger @ 00428f74 (size 244) */

void k3c_internal_pkg_logger_InitConsoleLogger(void)

{
  undefined4 extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 in_stack_00000004;
  undefined4 *local_30;
  undefined4 local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_logger_newConsoleCore();
  FUN_00022cf8(local_30);
  *local_30 = PTR_k3c_internal_pkg_logger_InitConsoleLogger_AddCaller_WithCaller_func2_00429070;
  *(undefined1 *)(local_30 + 1) = 1;
  FUN_00022cf8();
  *local_30 = PTR_k3c_internal_pkg_logger_InitConsoleLogger_AddCallerSkip_func1_00429078;
  local_30[1] = 1;
  go_uber_org_zap_New();
  if (*(int *)PTR_DAT_00429080 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_00429084;
    local_20 = extraout_r1;
  }
  *(undefined4 *)PTR_DAT_00429084 = local_20;
  return;
}



/* k3c/internal/pkg/logger.InitConsoleLogger.AddCallerSkip.func1 @ 00429088 (size 24) */

void k3c_internal_pkg_logger_InitConsoleLogger_AddCallerSkip_func1(void)

{
  int unaff_r7;
  int in_stack_00000004;
  
  *(int *)(in_stack_00000004 + 0x34) = *(int *)(in_stack_00000004 + 0x34) + *(int *)(unaff_r7 + 4);
  return;
}



/* k3c/internal/pkg/logger.InitConsoleLogger.AddCaller.WithCaller.func2 @ 004290a0 (size 16) */

void k3c_internal_pkg_logger_InitConsoleLogger_AddCaller_WithCaller_func2(void)

{
  int unaff_r7;
  int in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 9) = *(undefined1 *)(unaff_r7 + 4);
  return;
}



/* k3c/internal/pkg/logger.InitLogger @ 004290b0 (size 896) */

void k3c_internal_pkg_logger_InitLogger(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int extraout_r1;
  int iVar4;
  int *unaff_r8;
  int unaff_r10;
  undefined1 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int *in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  char in_stack_00000024;
  int *local_60;
  undefined *local_4c;
  int local_48;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0013bb30();
  iVar4 = in_stack_00000020;
  k3c_internal_pkg_logger_newFileCore();
  iVar1 = in_stack_00000014;
  piVar2 = in_stack_00000010;
  local_60 = in_stack_00000010;
  k3c_internal_pkg_logger_newLokiCore();
  if (in_stack_00000024 == '\0') {
    if (in_stack_00000014 != 0) {
      FUN_00022cf8();
      *piVar2 = iVar4;
      if (*(int *)PTR_DAT_00429454 != 0) {
        piVar2 = (int *)FUN_0009db64();
        *unaff_r8 = (int)local_4c;
        unaff_r8[1] = local_48;
      }
      piVar2[1] = (int)local_4c;
      piVar2[2] = (int)local_4c;
      piVar2[3] = local_48;
      local_60 = (int *)0x2;
      FUN_0008f820();
      local_4c = PTR_DAT_00429458;
    }
  }
  else {
    k3c_internal_pkg_logger_newConsoleCore();
    if (in_stack_00000014 == 0) {
      FUN_00022cf8();
      *piVar2 = (int)piVar2;
      if (*(int *)PTR_DAT_00429454 != 0) {
        piVar2 = (int *)FUN_0009db64();
        *unaff_r8 = iVar1;
        unaff_r8[1] = local_48;
      }
      piVar2[1] = iVar1;
      piVar2[2] = (int)local_4c;
      piVar2[3] = local_48;
      local_60 = (int *)0x2;
      FUN_0008f820();
      local_4c = PTR_DAT_00429458;
    }
    else {
      FUN_00022cf8();
      *piVar2 = iVar4;
      piVar3 = piVar2;
      if (*(int *)PTR_DAT_00429454 != 0) {
        piVar3 = (int *)FUN_0009db74();
        *unaff_r8 = (int)local_4c;
        unaff_r8[1] = iVar1;
        unaff_r8[2] = local_48;
      }
      piVar3[1] = (int)local_4c;
      piVar3[2] = (int)piVar2;
      piVar3[3] = iVar1;
      piVar3[4] = (int)local_4c;
      piVar3[5] = local_48;
      local_60 = (int *)0x3;
      FUN_0008f820();
      local_4c = PTR_DAT_00429458;
    }
  }
  FUN_00022cf8(local_4c);
  *local_60 = (int)PTR_k3c_internal_pkg_logger_InitLogger_AddCaller_WithCaller_func2_00429464;
  *(undefined1 *)(local_60 + 1) = 1;
  FUN_00022cf8();
  *local_60 = (int)PTR_k3c_internal_pkg_logger_InitLogger_AddCallerSkip_func1_0042946c;
  local_60[1] = 1;
  go_uber_org_zap_New();
  if (*(int *)PTR_DAT_00429454 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *(int *)PTR_DAT_00429474;
    iVar4 = extraout_r1;
  }
  *(int *)PTR_DAT_00429474 = iVar4;
  return;
}



/* k3c/internal/pkg/logger.InitLogger.AddCallerSkip.func1 @ 00429478 (size 24) */

void k3c_internal_pkg_logger_InitLogger_AddCallerSkip_func1(void)

{
  int unaff_r7;
  int in_stack_00000004;
  
  *(int *)(in_stack_00000004 + 0x34) = *(int *)(in_stack_00000004 + 0x34) + *(int *)(unaff_r7 + 4);
  return;
}



/* k3c/internal/pkg/logger.InitLogger.AddCaller.WithCaller.func2 @ 00429490 (size 16) */

void k3c_internal_pkg_logger_InitLogger_AddCaller_WithCaller_func2(void)

{
  int unaff_r7;
  int in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 9) = *(undefined1 *)(unaff_r7 + 4);
  return;
}



/* k3c/internal/pkg/logger.Sync @ 004294a0 (size 160) */

/* WARNING: Removing unreachable block (ram,0x004294cc) */

void k3c_internal_pkg_logger_Sync(void)

{
  int unaff_r10;
  undefined4 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (((int *)*DAT_00429544 != (int *)0x0) &&
     ((**(code **)(*(int *)*DAT_00429544 + 0x14))(), local_18 != 0)) {
    FUN_001794d4();
  }
  return;
}



/* k3c/internal/pkg/logger.Infof @ 0042954c (size 168) */

/* WARNING: Removing unreachable block (ram,0x0042956c) */

void k3c_internal_pkg_logger_Infof(undefined4 param_1)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined1 auStack_44 [52];
  int local_10;
  undefined1 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_0009bf64();
  }
  if (*DAT_004295f8 != 0) {
    FUN_0009e298(param_1,*DAT_004295f8,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



/* k3c/internal/pkg/logger.Info @ 004295fc (size 164) */

/* WARNING: Removing unreachable block (ram,0x0042961c) */

void k3c_internal_pkg_logger_Info(undefined4 param_1)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 auStack_44 [52];
  int local_10;
  undefined1 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_0009bf64();
  }
  if (*DAT_004296a4 != 0) {
    FUN_0009e298(param_1,*DAT_004296a4,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



/* k3c/internal/pkg/logger.Debugf @ 004296a8 (size 168) */

/* WARNING: Removing unreachable block (ram,0x004296c8) */

void k3c_internal_pkg_logger_Debugf(undefined4 param_1)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined1 auStack_44 [52];
  int local_10;
  undefined1 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_0009bf64();
  }
  if (*DAT_00429754 != 0) {
    FUN_0009e298(param_1,*DAT_00429754,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



/* k3c/internal/pkg/logger.Debug @ 00429758 (size 164) */

/* WARNING: Removing unreachable block (ram,0x00429778) */

void k3c_internal_pkg_logger_Debug(undefined4 param_1)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 auStack_44 [52];
  int local_10;
  undefined1 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_0009bf64();
  }
  if (*DAT_00429800 != 0) {
    FUN_0009e298(param_1,*DAT_00429800,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



/* k3c/internal/pkg/logger.Warnf @ 00429804 (size 168) */

/* WARNING: Removing unreachable block (ram,0x00429824) */

void k3c_internal_pkg_logger_Warnf(undefined4 param_1)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined1 auStack_44 [52];
  int local_10;
  undefined1 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_0009bf64();
  }
  if (*DAT_004298b0 != 0) {
    FUN_0009e298(param_1,*DAT_004298b0,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



/* k3c/internal/pkg/logger.Warn @ 004298b4 (size 164) */

/* WARNING: Removing unreachable block (ram,0x004298d4) */

void k3c_internal_pkg_logger_Warn(undefined4 param_1)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 auStack_44 [52];
  int local_10;
  undefined1 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_0009bf64();
  }
  if (*DAT_0042995c != 0) {
    FUN_0009e298(param_1,*DAT_0042995c,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



/* k3c/internal/pkg/logger.Errorf @ 00429960 (size 168) */

/* WARNING: Removing unreachable block (ram,0x00429980) */

void k3c_internal_pkg_logger_Errorf(undefined4 param_1)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined1 auStack_44 [52];
  int local_10;
  undefined1 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_0009bf64();
  }
  if (*DAT_00429a0c != 0) {
    FUN_0009e298(param_1,*DAT_00429a0c,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



/* k3c/internal/pkg/logger.Error @ 00429a10 (size 164) */

/* WARNING: Removing unreachable block (ram,0x00429a30) */

void k3c_internal_pkg_logger_Error(undefined4 param_1)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 auStack_44 [52];
  int local_10;
  undefined1 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_0009bf64();
  }
  if (*DAT_00429ab8 != 0) {
    FUN_0009e298(param_1,*DAT_00429ab8,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



/* k3c/internal/pkg/logger.Panicf @ 00429abc (size 224) */

void k3c_internal_pkg_logger_Panicf(undefined4 param_1)

{
  code *pcVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  undefined1 uVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      uVar3 = *DAT_00429ba0 == 0;
      if ((bool)uVar3) {
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + 0x14);
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -0xc);
      *(int *)((int)register0x00000054 + -0x24) = *DAT_00429ba0;
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
      go_uber_org_zap___Logger__Panic();
      pcVar1 = *(code **)(*(int *)*DAT_00429ba0 + 0x14);
      *(int *)((int)register0x00000054 + -0x24) = ((int *)*DAT_00429ba0)[1];
      (*pcVar1)();
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -8);
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_00429ba4;
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if ((bool)uVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x429b98;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



