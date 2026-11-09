// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/logger   functions: 35
/* printerApi/common/logger.init @ 003e70dc (size 84) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_logger_init(void)

{
  undefined4 extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x3e712c;
    FUN_00096bb8();
  }
  printerApi_common_logger_loadBeijingLocation();
  if (*_UNK_003e7134 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *_UNK_003e7138;
    uStack_4 = extraout_r1;
  }
  *_UNK_003e7138 = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x003e7120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/logger.loadBeijingLocation @ 003e713c (size 112) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_logger_loadBeijingLocation(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x3e71a8;
    FUN_00096bb8();
  }
  func_0x001082ac();
  if (uStack_8 != 0) {
    FUN_00105bb4();
                    /* WARNING: Could not recover jumptable at 0x003e7190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003e719c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/common/logger.encodeBeijingTime @ 003e71b8 (size 264) */

/* WARNING: Removing unreachable block (ram,0x003e71ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_logger_encodeBeijingTime(undefined4 param_1)

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
      uVar1 = *_UNK_003e72c4;
      *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
      FUN_00098e14(uVar1,(undefined1 *)((int)register0x00000054 + 4),
                   (undefined1 *)((int)register0x00000054 + -0x18));
      iVar2 = *(int *)((int)register0x00000054 + -4);
      bVar7 = iVar2 == 0;
      if (!bVar7) {
        if (iVar2 == _UNK_003e72c8) {
          iVar2 = 0;
        }
        uVar4 = *(uint *)((int)register0x00000054 + -0x14);
        if ((uVar4 & 0x80000000) != 0) {
          uVar5 = (*(uint *)((int)register0x00000054 + -0x18) & 0x7fffffff) >> 0x1e |
                  (*(uint *)((int)register0x00000054 + -0x18) >> 0x1f | uVar4 << 1) << 1;
          *(uint *)((int)register0x00000054 + -0x10) = uVar5 + _UNK_003e72cc;
          *(uint *)((int)register0x00000054 + -0xc) =
               ((uVar4 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar5,_UNK_003e72cc);
          *(uint *)((int)register0x00000054 + -0x18) =
               *(uint *)((int)register0x00000054 + -0x18) & 0x3fffffff;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        }
        *(int *)((int)register0x00000054 + -8) = iVar2;
        FUN_00098e14(iVar2,(undefined1 *)((int)register0x00000054 + -0x18),
                     (undefined1 *)((int)register0x00000054 + -0x3c));
        *(undefined4 *)((int)register0x00000054 + -0x28) = _UNK_003e72d0;
        *(undefined4 *)((int)register0x00000054 + -0x24) = 0x19;
        FUN_000f8b64();
        pcVar3 = *(code **)(*(int *)((int)register0x00000054 + 0x18) + 0x38);
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + 0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        (*pcVar3)();
                    /* WARNING: Could not recover jumptable at 0x003e7298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x40))();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x3c) = _UNK_003e72d4;
      *(undefined4 *)((int)register0x00000054 + -0x38) = _UNK_003e72d8;
      param_1 = FUN_00090814();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if (bVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x3e72bc;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/logger.newEncoderSupportColor @ 003e72dc (size 152) */

void printerApi_common_logger_newEncoderSupportColor(undefined4 param_1)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_134 [100];
  undefined1 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [52];
  undefined *puStack_84;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_64 [92];
  undefined *puStack_8;
  int iStack_4;
  
  while( true ) {
    if (*(undefined1 **)(unaff_r10 + 8) < auStack_b8) break;
    UNRECOVERED_JUMPTABLE = (code *)0x3e7370;
    param_1 = FUN_00096bb8();
  }
  FUN_00098d74(param_1,PTR_DAT_003e7378,auStack_c8);
  puStack_84 = PTR_DAT_003e737c;
  puStack_80 = PTR_DAT_003e7380;
  puStack_78 = PTR_DAT_003e7384;
  FUN_00098d74(PTR_DAT_003e7384,auStack_c8,auStack_64);
  if (iStack_4 == 0) {
    puStack_8 = PTR_DAT_003e7388;
    iStack_4 = 1;
  }
  FUN_00098d74(iStack_4,auStack_64,auStack_134);
  uStack_d0 = 1;
  go_uber_org_zap_zapcore_newJSONEncoder();
                    /* WARNING: Could not recover jumptable at 0x003e7364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/logger.newEncoderSupportCapital @ 003e7390 (size 152) */

void printerApi_common_logger_newEncoderSupportCapital(undefined4 param_1)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_134 [100];
  undefined1 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [52];
  undefined *puStack_84;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_64 [92];
  undefined *puStack_8;
  int iStack_4;
  
  while( true ) {
    if (*(undefined1 **)(unaff_r10 + 8) < auStack_b8) break;
    UNRECOVERED_JUMPTABLE = (code *)0x3e7424;
    param_1 = FUN_00096bb8();
  }
  FUN_00098d74(param_1,PTR_DAT_003e742c,auStack_c8);
  puStack_84 = PTR_DAT_003e7430;
  puStack_80 = PTR_DAT_003e7434;
  puStack_78 = PTR_DAT_003e7438;
  FUN_00098d74(PTR_DAT_003e7438,auStack_c8,auStack_64);
  if (iStack_4 == 0) {
    puStack_8 = PTR_DAT_003e743c;
    iStack_4 = 1;
  }
  FUN_00098d74(iStack_4,auStack_64,auStack_134);
  uStack_d0 = 1;
  go_uber_org_zap_zapcore_newJSONEncoder();
                    /* WARNING: Could not recover jumptable at 0x003e7418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/logger.getMACAddress @ 003e7444 (size 816) */

/* WARNING: Removing unreachable block (ram,0x003e74f8) */
/* WARNING: Removing unreachable block (ram,0x003e7550) */
/* WARNING: Removing unreachable block (ram,0x003e7504) */
/* WARNING: Removing unreachable block (ram,0x003e7600) */
/* WARNING: Removing unreachable block (ram,0x003e7608) */
/* WARNING: Removing unreachable block (ram,0x003e7674) */
/* WARNING: Removing unreachable block (ram,0x003e761c) */
/* WARNING: Removing unreachable block (ram,0x003e7628) */
/* WARNING: Removing unreachable block (ram,0x003e7664) */
/* WARNING: Removing unreachable block (ram,0x003e7678) */
/* WARNING: Removing unreachable block (ram,0x003e7694) */
/* WARNING: Removing unreachable block (ram,0x003e76e0) */
/* WARNING: Removing unreachable block (ram,0x003e76fc) */
/* WARNING: Removing unreachable block (ram,0x003e75f4) */
/* WARNING: Removing unreachable block (ram,0x003e7748) */
/* WARNING: Removing unreachable block (ram,0x003e75d8) */

void printerApi_common_logger_getMACAddress(void)

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
    unaff_lr = 0x3e7770;
    FUN_00096bb8();
  }
  FUN_001b77e4();
  iVar1 = in_stack_00000008;
  if (local_5c == 0) {
    while (0 < local_64) {
      local_c = local_68;
      FUN_00098dfc(local_68,local_68,auStack_30,local_64,unaff_lr);
      if (iVar1 == local_24) {
        local_60 = local_24;
        FUN_000150d4();
        iVar1 = in_stack_00000008;
      }
      local_68 = local_c + 0x20;
      local_64 = extraout_r3 + -1;
    }
    local_8 = (undefined *)0x0;
    local_4 = 0;
    FUN_0008a578();
    local_8 = PTR_SUB_003e777c;
    local_4 = local_60;
    FUN_00130144();
    return;
  }
  return;
}



/* printerApi/common/logger.(*LokiCore).Enabled @ 003e7788 (size 12) */

void printerApi_common_logger___LokiCore__Enabled(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uStack0000000c;
  
  uStack0000000c = 1;
                    /* WARNING: Could not recover jumptable at 0x003e7790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/logger.(*LokiCore).Write @ 003e7798 (size 384) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_logger___LokiCore__Write(void)

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
    UNRECOVERED_JUMPTABLE = (code *)0x3e7914;
    FUN_00096bb8();
  }
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,&uStack_58,auStack_14);
  FUN_00098e14(uVar1,auStack_14,&uStack_34);
  if ((uStack_30 & 0x80000000) != 0) {
    uVar2 = (uStack_34 & 0x7fffffff) >> 0x1e | (uStack_34 >> 0x1f | uStack_30 << 1) << 1;
    uStack_2c = uVar2 + _UNK_003e791c;
    iStack_28 = ((uStack_30 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar2,_UNK_003e791c);
  }
  uStack_38 = (uint)((ulonglong)_UNK_003e7920 * (ulonglong)uStack_2c);
  iStack_3c = iStack_28 * _UNK_003e7920 +
              (int)((ulonglong)_UNK_003e7920 * (ulonglong)uStack_2c >> 0x20);
  uStack_40 = uStack_34 & 0x3fffffff;
  FUN_0008b6b8();
  uStack_1c = uStack_58;
  uStack_58 = 0;
  puStack_54 = (undefined4 *)in_stack_00000008;
  iStack_50 = in_stack_0000000c;
  FUN_00093e34();
  puStack_44 = puStack_48;
  uStack_20 = iStack_4c;
  uStack_58 = _UNK_003e7924;
  puStack_54 = (undefined4 *)uStack_1c;
  iStack_50 = uStack_38 + uStack_40 + _UNK_003e7928;
  iStack_4c = iStack_3c + ((int)uStack_40 >> 0x1f) + (uint)CARRY4(uStack_38,uStack_40) +
              _UNK_003e792c + (uint)CARRY4(uStack_38 + uStack_40,_UNK_003e7928);
  FUN_0008df7c();
  puStack_48[1] = puStack_44;
  if (*_UNK_003e7930 != 0) {
    puStack_48 = (undefined4 *)FUN_00098688();
    *unaff_r8 = uStack_20;
    unaff_r8[1] = *puStack_48;
  }
  *puStack_48 = uStack_20;
  uStack_18 = uStack_1c;
  uStack_58 = *(undefined4 *)(in_stack_00000004 + 0x18);
  puStack_54 = &uStack_18;
  FUN_000172bc();
  in_stack_00000014 = in_stack_0000000c;
  in_stack_00000018 = 0;
  in_stack_0000001c = 0;
                    /* WARNING: Could not recover jumptable at 0x003e7908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/logger.(*LokiCore).flush @ 003e7934 (size 488) */

void printerApi_common_logger___LokiCore__flush(void)

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
    unaff_lr = 0x3e7b18;
    FUN_00096bb8();
  }
  puVar9 = (undefined1 *)0x0;
  ppuVar8 = DAT_003e7b20;
  FUN_001000a4();
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
    FUN_00098a28(0,local_10,puVar4,ppuVar2,unaff_lr,ppuVar8,puVar9);
    local_4 = &local_14;
    ppuVar8 = local_10;
    puVar9 = auStack_34;
    local_44 = (undefined4 **)CONCAT31(local_44._1_3_,1);
    local_10[0] = puVar1;
    local_8 = uVar6;
    FUN_00067f3c();
    if (local_40 == (undefined1 *)0x0) {
      if (local_2c != (undefined1 *)0x0) {
        printerApi_common_logger___LokiCore__sendBatch();
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
      FUN_00093524();
      ppuVar2 = local_44;
      puVar4 = local_40;
      puVar5 = local_1c;
      puVar3 = local_3c;
    }
    puVar7 = puVar4 + -1;
    if (*DAT_003e7b28 != 0) {
      ppuVar2 = (undefined4 **)FUN_00098688();
      *puVar1 = extraout_r3;
      puVar1[1] = ppuVar2[(int)puVar7];
      puVar4 = extraout_r2;
      puVar5 = extraout_r3;
    }
    ppuVar2[(int)puVar7] = puVar5;
  } while ((int)puVar4 < 1000);
  printerApi_common_logger___LokiCore__sendBatch();
  return;
}



/* printerApi/common/logger.(*LokiCore).sendBatch @ 003e7b2c (size 1704) */

void printerApi_common_logger___LokiCore__sendBatch(void)

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
    unaff_lr = 0x3e81d0;
    FUN_00096bb8();
  }
  ppuVar13 = (undefined **)&DAT_00000005;
  ppuVar14 = (undefined **)PTR_DAT_003e81d8;
  printerApi_common_logger_getMACAddress();
  if (local_9c != (undefined4 *)0x0) {
    FUN_001335b0();
    return;
  }
  ppuVar9 = (undefined **)0x0;
  ppuVar11 = (undefined **)0x0;
  puVar12 = (undefined *)0x0;
  for (iVar3 = 0; iVar3 < in_stack_0000000c; iVar3 = iVar3 + 1) {
    FUN_00098a08(0,&local_30,in_stack_00000008,*(undefined4 *)(in_stack_00000008 + iVar3 * 4));
    local_a4 = &local_30;
    ppuVar14 = (undefined **)PTR_DAT_003e81ec;
    ppuVar13 = extraout_r3;
    FUN_0008c560();
    while (local_30 != (undefined *)0x0) {
      puVar10 = (undefined *)*local_2c;
      puVar8 = (undefined *)local_2c[1];
      local_38 = (undefined *)0x0;
      local_34 = (undefined **)0x0;
      FUN_0008a4bc();
      local_38 = PTR_DAT_003e8224;
      local_34 = local_a4;
      ppuVar14 = (undefined **)0x2;
      local_a4 = &local_38;
      local_9c = (undefined4 *)0x1;
      FUN_001331ac();
      FUN_0001eed8();
      ppuVar14[1] = (undefined *)local_94;
      ppuVar13 = ppuVar14;
      if (*(int *)PTR_DAT_003e81f8 != 0) {
        ppuVar14 = (undefined **)FUN_00098688();
        *unaff_r8 = local_98;
        unaff_r8[1] = puVar10;
      }
      *ppuVar14 = local_98;
      ppuVar14[3] = puVar8;
      ppuVar14[2] = puVar10;
      ppuVar9 = (undefined **)((int)ppuVar9 + 1);
      ppuVar2 = ppuVar11;
      if (ppuVar11 < ppuVar9) {
        local_9c = (undefined4 *)PTR_DAT_003e8230;
        ppuVar13 = ppuVar9;
        FUN_00093524();
        ppuVar9 = local_94;
        ppuVar2 = local_90;
        puVar12 = local_98;
        local_a4 = ppuVar11;
      }
      ppuVar11 = ppuVar2;
      iVar1 = (int)ppuVar9 * 0xc;
      *(undefined4 *)(puVar12 + iVar1 + -8) = 2;
      *(undefined4 *)(puVar12 + iVar1 + -4) = 2;
      if (*(int *)PTR_DAT_003e81f8 != 0) {
        ppuVar14 = (undefined **)FUN_00098688();
        *unaff_r8 = ppuVar14;
        unaff_r8[1] = *(undefined4 *)(extraout_r3_00 + iVar1 + -0xc);
        puVar12 = extraout_r3_00;
      }
      *(undefined ***)(puVar12 + iVar1 + -0xc) = ppuVar14;
      ppuVar14 = &local_30;
      FUN_0008c7c4();
    }
  }
  FUN_0008b6b8(iVar3,ppuVar6,local_a0,ppuVar9,unaff_lr,ppuVar14,ppuVar13);
  FUN_0008b6b8();
  ppuVar13 = ppuVar14;
  FUN_0008b6b8();
  FUN_0008e7bc();
  local_9c[1] = local_a0;
  puVar4 = local_9c;
  if (*(int *)PTR_DAT_003e81f8 != 0) {
    puVar4 = (undefined4 *)FUN_00098688();
    *unaff_r8 = ppuVar6;
    unaff_r8[1] = *puVar4;
  }
  *puVar4 = ppuVar6;
  uVar5 = *(undefined4 *)(in_stack_00000004 + 0xc);
  uVar7 = *(undefined4 *)(in_stack_00000004 + 8);
  FUN_0008e7bc();
  local_9c[1] = uVar5;
  puVar4 = local_9c;
  if (*(int *)PTR_DAT_003e81f8 != 0) {
    puVar4 = (undefined4 *)FUN_00098688();
    *unaff_r8 = uVar7;
    unaff_r8[1] = *puVar4;
  }
  *puVar4 = uVar7;
  uVar5 = *(undefined4 *)(in_stack_00000004 + 0x14);
  uVar7 = *(undefined4 *)(in_stack_00000004 + 0x10);
  FUN_0008e7bc();
  local_9c[1] = uVar5;
  puVar4 = local_9c;
  if (*(int *)PTR_DAT_003e81f8 != 0) {
    puVar4 = (undefined4 *)FUN_00098688();
    *unaff_r8 = uVar7;
    unaff_r8[1] = *puVar4;
  }
  *puVar4 = uVar7;
  FUN_0008e7bc();
  *local_9c = PTR_DAT_003e81f0;
  puVar4 = local_9c;
  if (*(int *)PTR_DAT_003e81f8 != 0) {
    puVar4 = (undefined4 *)FUN_00098688();
    *unaff_r8 = ppuVar13;
    unaff_r8[1] = puVar4[1];
  }
  puVar4[1] = ppuVar13;
  FUN_0008a61c();
  ppuVar6 = ppuVar14;
  FUN_0008e7bc();
  *local_9c = PTR_DAT_003e8210;
  puVar4 = local_9c;
  if (*(int *)PTR_DAT_003e81f8 != 0) {
    puVar4 = (undefined4 *)FUN_00098688();
    *unaff_r8 = 6;
    unaff_r8[1] = puVar4[1];
  }
  puVar4[1] = 6;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_003e81f8 != 0) {
    FUN_00098678();
    *unaff_r8 = ppuVar14;
    ppuVar6 = extraout_r1;
  }
  *ppuVar6 = (undefined *)ppuVar14;
  FUN_0008a61c();
  FUN_0008e7bc();
  *local_9c = PTR_DAT_003e821c;
  if (*(int *)PTR_DAT_003e81f8 != 0) {
    local_9c = (undefined4 *)FUN_00098688();
    *unaff_r8 = 6;
    unaff_r8[1] = local_9c[1];
  }
  local_9c[1] = 6;
  FUN_001707f4();
  if (local_98 != (undefined *)0x0) {
    local_38 = *(undefined **)(local_98 + 4);
    FUN_00130144();
    return;
  }
  printerApi_common_logger___LokiCore__httpPost();
  return;
}



/* printerApi/common/logger.(*LokiCore).httpPost @ 003e8234 (size 760) */

/* WARNING: Removing unreachable block (ram,0x003e84c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_logger___LokiCore__httpPost(void)

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
    FUN_00096bb8();
  }
  in_stack_0000001c = 0;
  in_stack_00000020 = 0;
  FUN_0001eed8();
  local_5c[5] = DAT_003e853c;
  local_5c[6] = 1;
  FUN_0001eed8(local_5c);
  local_5c[1] = in_stack_00000014;
  local_5c[2] = in_stack_00000018;
  if (*(int *)PTR_DAT_003e8544 != 0) {
    local_5c = (undefined4 *)FUN_00098678();
    *unaff_r8 = in_stack_00000010;
  }
  puVar1 = in_stack_00000008;
  *local_5c = in_stack_00000010;
  FUN_0037fdd4();
  if (local_3c != 0) {
    FUN_00130144();
    return;
  }
  FUN_00313ba4(local_40);
  FUN_0001eed8();
  _DAT_00000010 = 0x10;
  _SUB_0000000c = PTR_DAT_003e8564;
  FUN_0008e7bc();
  puVar1[1] = 1;
  puVar1[2] = 1;
  if (*(int *)PTR_DAT_003e8544 != 0) {
    puVar1 = (undefined4 *)FUN_00098688();
    *unaff_r8 = 0xc;
    unaff_r8[1] = *puVar1;
  }
  *puVar1 = 0xc;
  FUN_00343318();
  FUN_00130144();
  return;
}



/* printerApi/common/logger.(*LokiCore).httpPost.deferwrap1 @ 003e8574 (size 92) */

void printerApi_common_logger___LokiCore__httpPost_deferwrap1(void)

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



/* printerApi/common/logger.(*LokiCore).Sync @ 003e85d0 (size 20) */

void printerApi_common_logger___LokiCore__Sync(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = 0;
  uStack0000000c = 0;
                    /* WARNING: Could not recover jumptable at 0x003e85e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/logger.newLokiCore @ 003e85e4 (size 720) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_logger_newLokiCore(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined *in_stack_00000004;
  undefined *in_stack_00000008;
  byte in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  undefined *in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined *in_stack_00000020;
  undefined **in_stack_00000024;
  undefined **ppuStack_50;
  undefined *puStack_4c;
  undefined *puStack_40;
  undefined *puStack_3c;
  undefined *puStack_10;
  undefined **ppuStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x3e88b0;
    FUN_00096bb8();
  }
  if (in_stack_00000014 == 0) {
    FUN_001335b0();
    in_stack_00000020 = (undefined *)0x0;
    in_stack_00000024 = (undefined **)0x0;
                    /* WARNING: Could not recover jumptable at 0x003e88a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_00017058();
  puStack_8 = (undefined *)0x0;
  uStack_4 = 0;
  FUN_0008a578();
  puStack_8 = PTR_SUB_003e88bc;
  ppuVar3 = &puStack_8;
  FUN_001331ac();
  FUN_0001eed8();
  ppuVar1 = (undefined **)&DAT_0000001a;
  _DAT_00000026 = in_stack_0000001c;
  if (*(int *)PTR_DAT_003e88c8 != 0) {
    ppuVar1 = (undefined **)FUN_00098698();
    *unaff_r8 = in_stack_00000018;
    unaff_r8[1] = puStack_4c;
    unaff_r8[2] = puStack_40;
  }
  ppuVar1[2] = in_stack_00000018;
  ppuVar1[5] = (undefined *)0x7;
  ppuVar1[4] = PTR_s_loki_go_symbol_allocsRESTARTk3c_r_00774847_0x227_003e88cc;
  ppuVar1[6] = puStack_4c;
  ppuVar1[1] = puStack_3c;
  *ppuVar1 = puStack_40;
  FUN_0001eed8();
  iVar2 = 0x1a;
  _DAT_0000001a = PTR_printerApi_common_logger_newLokiCore_func1_003e88d4;
  if (*(int *)PTR_DAT_003e88c8 != 0) {
    iVar2 = FUN_00098678();
    *unaff_r8 = ppuVar1;
  }
  *(undefined ***)(iVar2 + 4) = ppuVar1;
  FUN_0005e168();
  FUN_0001d060();
  if (ppuVar3 == (undefined **)0x0) {
    ppuStack_50 = *(undefined ***)PTR_DAT_003e88d8;
    FUN_0001cf8c();
    ppuVar3 = ppuVar1;
    puVar4 = (undefined *)0x0;
  }
  else {
    puStack_10 = PTR_DAT_003e88e4;
    ppuStack_50 = &puStack_10;
    ppuStack_c = ppuVar1;
    FUN_0001cd7c();
    puVar4 = PTR_DAT_003e88ec;
  }
  puVar5 = PTR_DAT_003e88f0 + (uint)in_stack_0000000c * 8;
  FUN_0001eed8();
  *ppuStack_50 = PTR_DAT_003e88f8;
  ppuStack_50[1] = puVar5;
  ppuStack_50[2] = in_stack_00000004;
  if (*(int *)PTR_DAT_003e88c8 != 0) {
    ppuStack_50 = (undefined **)FUN_00098688();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = ppuVar3;
  }
  ppuStack_50[3] = in_stack_00000008;
  ppuStack_50[4] = puVar4;
  ppuStack_50[5] = (undefined *)ppuVar3;
  in_stack_00000020 = PTR_DAT_003e88fc;
  in_stack_00000024 = ppuStack_50;
                    /* WARNING: Could not recover jumptable at 0x003e8854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/common/logger.newLokiCore.func1 @ 003e890c (size 212) */

void printerApi_common_logger_newLokiCore_func1(void)

{
  int unaff_r10;
  undefined4 *puStack_30;
  undefined1 auStack_24 [20];
  undefined4 auStack_10 [2];
  undefined4 uStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  puStack_4 = (undefined4 *)0x0;
  FUN_00100618();
  auStack_10[0] = DAT_003e89f0;
  puStack_4 = auStack_10;
  uStack_8 = *puStack_30;
  FUN_00098a24(0,auStack_24,uStack_8);
  while( true ) {
    FUN_000180c0();
    if ((char)puStack_30 == '\0') break;
    FUN_00098a24(0,auStack_24);
    printerApi_common_logger___LokiCore__flush();
  }
  (*(code *)*puStack_4)();
  return;
}



/* printerApi/common/logger.newLokiCore.func1.deferwrap1 @ 003e89f4 (size 96) */

void printerApi_common_logger_newLokiCore_func1_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  int local_8 [2];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_8;
  }
  local_8[0] = *(int *)(unaff_r7 + 4);
  if (*(char *)(local_8[0] + 4) != '\0') {
    FUN_0009563c();
  }
  return;
}



/* printerApi/common/logger.InitLogger @ 003e8a54 (size 2264) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_logger_InitLogger(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined *extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  byte in_stack_00000004;
  undefined *in_stack_00000008;
  undefined *in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  undefined *in_stack_00000018;
  undefined *in_stack_0000001c;
  undefined *in_stack_00000020;
  undefined *puStack_a0;
  undefined **ppuStack_9c;
  undefined **ppuStack_98;
  undefined4 uStack_94;
  undefined4 uStack_8c;
  undefined *puStack_84;
  undefined *puStack_80;
  undefined **ppuStack_24;
  undefined4 uStack_20;
  undefined **ppuStack_1c;
  undefined *puStack_18;
  undefined **ppuStack_14;
  undefined *puStack_10;
  undefined **ppuStack_c;
  undefined *puStack_8;
  undefined **ppuStack_4;
  
  ppuVar2 = ppuStack_9c;
  while (&ppuStack_24 <= *(undefined ****)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x3e93ac;
    FUN_00096bb8();
  }
  if (in_stack_00000004 == 3) {
    printerApi_common_logger_newEncoderSupportColor();
    puVar4 = *(undefined **)PTR_DAT_003e928c;
    FUN_0001eed8(puStack_a0);
    ppuStack_9c[2] = PTR_DAT_003e9294;
    ppuVar1 = ppuStack_9c;
    if (*(int *)PTR_DAT_003e922c != 0) {
      ppuVar1 = (undefined **)FUN_00098688();
      *unaff_r8 = puVar4;
      unaff_r8[1] = ppuVar1[3];
    }
    ppuVar1[3] = puVar4;
    FUN_0001eed8();
    *ppuStack_9c = PTR_DAT_003e9250;
    ppuStack_9c[1] = PTR_DAT_003e9298;
    ppuStack_9c[2] = puStack_a0;
    ppuStack_1c = ppuStack_9c;
    if (*(int *)PTR_DAT_003e922c != 0) {
      ppuStack_1c = (undefined **)FUN_00098688();
      *unaff_r8 = ppuStack_9c;
      unaff_r8[1] = ppuVar1;
    }
    ppuStack_1c[3] = (undefined *)ppuStack_9c;
    ppuStack_1c[4] = PTR_DAT_003e929c;
    ppuStack_1c[5] = (undefined *)ppuVar1;
    FUN_0001eed8(ppuStack_1c);
    ppuStack_9c[1] = in_stack_0000000c;
    if (*(int *)PTR_DAT_003e922c != 0) {
      ppuStack_9c = (undefined **)FUN_00098678();
      *unaff_r8 = in_stack_00000008;
    }
    *ppuStack_9c = in_stack_00000008;
    ppuStack_9c[2] = in_stack_00000018;
    ppuStack_9c[4] = in_stack_0000001c;
    ppuStack_9c[3] = in_stack_00000020;
    *(undefined1 *)((int)ppuStack_9c + 0x15) = 0;
    *(undefined1 *)(ppuStack_9c + 5) = 1;
    FUN_0001d060();
    if (ppuStack_98 == (undefined **)0x0) {
      ppuVar1 = *(undefined ***)PTR_DAT_003e9230;
      FUN_0001cf8c();
      ppuStack_98 = ppuStack_9c;
      puVar4 = (undefined *)0x0;
      ppuStack_9c = ppuVar1;
    }
    else {
      puStack_8 = PTR_DAT_003e923c;
      ppuStack_4 = ppuStack_9c;
      FUN_0001cd7c();
      puVar4 = PTR_DAT_003e9244;
      ppuStack_9c = &puStack_8;
    }
    FUN_0001eed8();
    *ppuStack_9c = PTR_DAT_003e9250;
    ppuStack_9c[1] = PTR_DAT_003e92a8;
    ppuStack_9c[2] = puStack_a0;
    ppuVar1 = ppuStack_9c;
    if (*(int *)PTR_DAT_003e922c != 0) {
      ppuVar1 = (undefined **)FUN_00098688();
      *unaff_r8 = ppuVar2;
      unaff_r8[1] = ppuStack_98;
    }
    ppuVar1[3] = (undefined *)ppuVar2;
    ppuVar1[4] = puVar4;
    ppuVar1[5] = (undefined *)ppuStack_98;
    FUN_0001eed8();
    uVar6 = CONCAT44(PTR_DAT_003e925c,ppuStack_9c);
    *ppuStack_9c = PTR_DAT_003e925c;
    if (*(int *)PTR_DAT_003e922c != 0) {
      uVar6 = FUN_00098688();
      *unaff_r8 = ppuStack_1c;
      unaff_r8[1] = ppuVar1;
    }
    iVar3 = (int)uVar6;
    *(undefined ***)(iVar3 + 4) = ppuStack_1c;
    *(int *)(iVar3 + 8) = (int)((ulonglong)uVar6 >> 0x20);
    *(undefined ***)(iVar3 + 0xc) = ppuVar1;
    FUN_0008a61c();
    uStack_20 = uStack_94;
    FUN_0001eed8(uStack_94);
    ppuStack_24 = (undefined **)0x2;
    puRam00000002 = PTR_printerApi_common_logger_InitLogger_AddCaller_WithCaller_func4_003e93b8;
    _DAT_00000006 = CONCAT31(_DAT_00000007,1);
    FUN_0001eed8();
    puRam00000002 = PTR_printerApi_common_logger_InitLogger_AddCallerSkip_func1_003e93c0;
    _DAT_00000006 = 1;
    puStack_18 = PTR_DAT_003e93c4;
    ppuStack_14 = ppuStack_24;
    puStack_10 = PTR_DAT_003e93c4;
    ppuStack_c = (undefined **)0x2;
    go_uber_org_zap_New();
    if (*(int *)PTR_DAT_003e93cc != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1_01;
      unaff_r8[1] = *(undefined4 *)PTR_DAT_003e93d0;
      uStack_8c = extraout_r1_01;
    }
    *(undefined4 *)PTR_DAT_003e93d0 = uStack_8c;
  }
  else if (in_stack_00000014 == 0) {
    printerApi_common_logger_newEncoderSupportCapital();
    FUN_0001eed8(puStack_a0);
    ppuStack_9c[1] = in_stack_0000000c;
    if (*(int *)PTR_DAT_003e922c != 0) {
      ppuStack_9c = (undefined **)FUN_00098678();
      *unaff_r8 = in_stack_00000008;
    }
    *ppuStack_9c = in_stack_00000008;
    ppuStack_9c[2] = in_stack_00000018;
    ppuStack_9c[4] = in_stack_0000001c;
    ppuStack_9c[3] = in_stack_00000020;
    *(undefined1 *)((int)ppuStack_9c + 0x15) = 0;
    *(undefined1 *)(ppuStack_9c + 5) = 1;
    FUN_0001d060();
    if (ppuStack_98 == (undefined **)0x0) {
      ppuVar1 = *(undefined ***)PTR_DAT_003e9230;
      FUN_0001cf8c();
      ppuStack_98 = ppuStack_9c;
      puVar4 = (undefined *)0x0;
      ppuStack_9c = ppuVar1;
    }
    else {
      puStack_8 = PTR_DAT_003e923c;
      ppuStack_4 = ppuStack_9c;
      FUN_0001cd7c();
      puVar4 = PTR_DAT_003e9244;
      ppuStack_9c = &puStack_8;
    }
    puVar5 = PTR_DAT_003e9248 + (uint)in_stack_00000004 * 8;
    FUN_0001eed8();
    *ppuStack_9c = PTR_DAT_003e9250;
    ppuStack_9c[1] = puVar5;
    ppuStack_9c[2] = puStack_a0;
    ppuStack_1c = ppuStack_9c;
    if (*(int *)PTR_DAT_003e922c != 0) {
      ppuStack_1c = (undefined **)FUN_00098688();
      *unaff_r8 = ppuVar2;
      unaff_r8[1] = ppuStack_98;
    }
    ppuStack_1c[3] = (undefined *)ppuVar2;
    ppuStack_1c[4] = puVar4;
    ppuStack_1c[5] = (undefined *)ppuStack_98;
    FUN_0001eed8(ppuStack_1c);
    ppuStack_24 = ppuStack_9c;
    *ppuStack_9c = PTR_printerApi_common_logger_InitLogger_AddCaller_WithCaller_func6_003e9284;
    *(undefined1 *)(ppuStack_9c + 1) = 1;
    FUN_0001eed8();
    *ppuStack_9c = PTR_printerApi_common_logger_InitLogger_AddCallerSkip_func3_003e9288;
    ppuStack_9c[1] = (undefined *)0x1;
    puStack_18 = PTR_DAT_003e9270;
    ppuStack_14 = ppuStack_24;
    puStack_10 = PTR_DAT_003e9270;
    ppuStack_c = ppuStack_9c;
    go_uber_org_zap_New();
    if (*(int *)PTR_DAT_003e922c != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1_00;
      unaff_r8[1] = *(undefined4 *)PTR_DAT_003e9278;
      uStack_8c = extraout_r1_00;
    }
    *(undefined4 *)PTR_DAT_003e9278 = uStack_8c;
  }
  else {
    printerApi_common_logger_newEncoderSupportCapital();
    FUN_0001eed8(puStack_a0);
    ppuStack_9c[1] = in_stack_0000000c;
    if (*(int *)PTR_DAT_003e922c != 0) {
      ppuStack_9c = (undefined **)FUN_00098678();
      *unaff_r8 = in_stack_00000008;
    }
    *ppuStack_9c = in_stack_00000008;
    ppuStack_9c[2] = in_stack_00000018;
    ppuStack_9c[4] = in_stack_0000001c;
    ppuStack_9c[3] = in_stack_00000020;
    *(undefined1 *)((int)ppuStack_9c + 0x15) = 0;
    *(undefined1 *)(ppuStack_9c + 5) = 1;
    FUN_0001d060();
    if (ppuStack_98 == (undefined **)0x0) {
      ppuVar1 = *(undefined ***)PTR_DAT_003e9230;
      FUN_0001cf8c();
      ppuStack_98 = ppuStack_9c;
      puVar4 = (undefined *)0x0;
      ppuStack_9c = ppuVar1;
    }
    else {
      puStack_8 = PTR_DAT_003e923c;
      ppuStack_4 = ppuStack_9c;
      FUN_0001cd7c();
      puVar4 = PTR_DAT_003e9244;
      ppuStack_9c = &puStack_8;
    }
    puVar5 = PTR_DAT_003e9248 + (uint)in_stack_00000004 * 8;
    FUN_0001eed8();
    *ppuStack_9c = PTR_DAT_003e9250;
    ppuStack_9c[1] = puVar5;
    ppuStack_9c[2] = puStack_a0;
    if (*(int *)PTR_DAT_003e922c != 0) {
      ppuStack_9c = (undefined **)FUN_00098688();
      *unaff_r8 = ppuVar2;
      unaff_r8[1] = ppuStack_98;
    }
    puVar5 = PTR_DAT_003e9254;
    ppuStack_9c[3] = (undefined *)ppuVar2;
    ppuStack_9c[4] = puVar4;
    ppuStack_9c[5] = (undefined *)ppuStack_98;
    ppuStack_1c = ppuStack_9c;
    printerApi_common_logger_newLokiCore();
    FUN_0001eed8();
    *ppuVar2 = puStack_84;
    if (*(int *)PTR_DAT_003e922c != 0) {
      ppuVar2 = (undefined **)FUN_00098688();
      *unaff_r8 = puStack_80;
      unaff_r8[1] = ppuStack_1c;
    }
    ppuVar2[1] = puStack_80;
    ppuVar2[2] = PTR_DAT_003e925c;
    ppuVar2[3] = (undefined *)ppuStack_1c;
    FUN_0008a61c();
    uStack_20 = in_stack_00000010;
    FUN_0001eed8(in_stack_00000010);
    ppuStack_24 = (undefined **)0x2;
    puRam00000002 = PTR_printerApi_common_logger_InitLogger_AddCaller_WithCaller_func5_003e9264;
    _DAT_00000006 = CONCAT31(_DAT_00000007,1);
    FUN_0001eed8();
    puRam00000002 = PTR_printerApi_common_logger_InitLogger_AddCallerSkip_func2_003e926c;
    _DAT_00000006 = 1;
    puStack_18 = PTR_DAT_003e9270;
    ppuStack_14 = ppuStack_24;
    puStack_10 = PTR_DAT_003e9270;
    ppuStack_c = (undefined **)0x2;
    go_uber_org_zap_New();
    if (*(int *)PTR_DAT_003e922c != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(undefined4 *)PTR_DAT_003e9278;
      puVar5 = extraout_r1;
    }
    *(undefined **)PTR_DAT_003e9278 = puVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x003e93a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/logger.InitLogger.AddCallerSkip.func3 @ 003e93d4 (size 24) */

void printerApi_common_logger_InitLogger_AddCallerSkip_func3(void)

{
  int unaff_r7;
  int in_stack_00000004;
  
  *(int *)(in_stack_00000004 + 0x34) = *(int *)(in_stack_00000004 + 0x34) + *(int *)(unaff_r7 + 4);
  return;
}



/* printerApi/common/logger.InitLogger.AddCaller.WithCaller.func6 @ 003e93ec (size 16) */

void printerApi_common_logger_InitLogger_AddCaller_WithCaller_func6(void)

{
  int unaff_r7;
  int in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 9) = *(undefined1 *)(unaff_r7 + 4);
  return;
}



/* printerApi/common/logger.InitLogger.AddCallerSkip.func2 @ 003e93fc (size 24) */

void printerApi_common_logger_InitLogger_AddCallerSkip_func2(void)

{
  int unaff_r7;
  int in_stack_00000004;
  
  *(int *)(in_stack_00000004 + 0x34) = *(int *)(in_stack_00000004 + 0x34) + *(int *)(unaff_r7 + 4);
  return;
}



/* printerApi/common/logger.InitLogger.AddCaller.WithCaller.func5 @ 003e9414 (size 16) */

void printerApi_common_logger_InitLogger_AddCaller_WithCaller_func5(void)

{
  int unaff_r7;
  int in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 9) = *(undefined1 *)(unaff_r7 + 4);
  return;
}



/* printerApi/common/logger.InitLogger.AddCallerSkip.func1 @ 003e9424 (size 24) */

void printerApi_common_logger_InitLogger_AddCallerSkip_func1(void)

{
  int unaff_r7;
  int in_stack_00000004;
  
  *(int *)(in_stack_00000004 + 0x34) = *(int *)(in_stack_00000004 + 0x34) + *(int *)(unaff_r7 + 4);
  return;
}



/* printerApi/common/logger.InitLogger.AddCaller.WithCaller.func4 @ 003e943c (size 16) */

void printerApi_common_logger_InitLogger_AddCaller_WithCaller_func4(void)

{
  int unaff_r7;
  int in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 9) = *(undefined1 *)(unaff_r7 + 4);
  return;
}



/* printerApi/common/logger.Infof @ 003e944c (size 168) */

/* WARNING: Removing unreachable block (ram,0x003e946c) */

void printerApi_common_logger_Infof(undefined4 param_1)

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
    param_1 = FUN_00096bb8();
  }
  if (*DAT_003e94f8 != 0) {
    FUN_00098dbc(param_1,*DAT_003e94f8,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



/* printerApi/common/logger.Info @ 003e94fc (size 164) */

/* WARNING: Removing unreachable block (ram,0x003e951c) */

void printerApi_common_logger_Info(undefined4 param_1)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 auStack_44 [52];
  int local_10;
  undefined1 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_00096bb8();
  }
  if (*DAT_003e95a4 != 0) {
    FUN_00098dbc(param_1,*DAT_003e95a4,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



/* printerApi/common/logger.Debugf @ 003e95a8 (size 168) */

/* WARNING: Removing unreachable block (ram,0x003e95c8) */

void printerApi_common_logger_Debugf(undefined4 param_1)

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
    param_1 = FUN_00096bb8();
  }
  if (*DAT_003e9654 != 0) {
    FUN_00098dbc(param_1,*DAT_003e9654,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



/* printerApi/common/logger.colorDebug @ 003e9658 (size 572) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_logger_colorDebug(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 auStack_7c [52];
  int local_48;
  undefined *local_3c;
  undefined **local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined1 *local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined *local_20 [2];
  undefined *local_18;
  undefined *local_10;
  undefined *local_8;
  undefined *local_4;
  
  while (&local_30 <= *(undefined4 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00098a18(0,local_20);
  FUN_0008a578();
  local_20[0] = PTR_SUB_003e9898;
  FUN_0008a578();
  local_18 = PTR_SUB_003e9898;
  FUN_0008a578();
  local_10 = PTR_SUB_003e9898;
  local_8 = PTR_SUB_003e9898;
  local_4 = PTR_DAT_003e989c;
  FUN_001331ac();
  if (*(int *)PTR_DAT_003e98a4 == 0) {
    local_3c = (undefined *)0x0;
    local_38 = (undefined **)0x0;
    FUN_0008a578();
    local_3c = PTR_SUB_003e9898;
    local_38 = local_20;
    FUN_001335b0();
  }
  else {
    FUN_0001eed8();
    _DAT_0000000b = PTR_printerApi_common_logger_colorDebug_AddCallerSkip_func1_003e98ac;
    _DAT_0000000f = 1;
    local_28 = PTR_DAT_003e98b0;
    local_24 = 0xb;
    uVar1 = go_uber_org_zap___Logger__WithOptions();
    FUN_00098dbc(uVar1,4,auStack_7c);
    local_48 = local_48 + 2;
    local_2c = auStack_7c;
    local_34 = (undefined *)0x0;
    local_30 = 0;
    FUN_0008a578();
    local_34 = PTR_SUB_003e9898;
    local_30 = 1;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



/* printerApi/common/logger.colorDebug.AddCallerSkip.func1 @ 003e98bc (size 24) */

void printerApi_common_logger_colorDebug_AddCallerSkip_func1(void)

{
  int unaff_r7;
  int in_stack_00000004;
  
  *(int *)(in_stack_00000004 + 0x34) = *(int *)(in_stack_00000004 + 0x34) + *(int *)(unaff_r7 + 4);
  return;
}



/* printerApi/common/logger.RedDebugf @ 003e98d4 (size 128) */

void printerApi_common_logger_RedDebugf(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_001331ac();
  printerApi_common_logger_colorDebug();
  return;
}



/* printerApi/common/logger.RedDebug @ 003e9960 (size 112) */

void printerApi_common_logger_RedDebug(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00133418();
  printerApi_common_logger_colorDebug();
  return;
}



/* printerApi/common/logger.Debug @ 003e99dc (size 164) */

/* WARNING: Removing unreachable block (ram,0x003e99fc) */

void printerApi_common_logger_Debug(undefined4 param_1)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 auStack_44 [52];
  int local_10;
  undefined1 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_00096bb8();
  }
  if (*DAT_003e9a84 != 0) {
    FUN_00098dbc(param_1,*DAT_003e9a84,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



/* printerApi/common/logger.Warnf @ 003e9a88 (size 168) */

/* WARNING: Removing unreachable block (ram,0x003e9aa8) */

void printerApi_common_logger_Warnf(undefined4 param_1)

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
    param_1 = FUN_00096bb8();
  }
  if (*DAT_003e9b34 != 0) {
    FUN_00098dbc(param_1,*DAT_003e9b34,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



/* printerApi/common/logger.Warn @ 003e9b38 (size 164) */

/* WARNING: Removing unreachable block (ram,0x003e9b58) */

void printerApi_common_logger_Warn(undefined4 param_1)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 auStack_44 [52];
  int local_10;
  undefined1 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_00096bb8();
  }
  if (*DAT_003e9be0 != 0) {
    FUN_00098dbc(param_1,*DAT_003e9be0,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



/* printerApi/common/logger.Errorf @ 003e9be4 (size 168) */

/* WARNING: Removing unreachable block (ram,0x003e9c04) */

void printerApi_common_logger_Errorf(undefined4 param_1)

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
    param_1 = FUN_00096bb8();
  }
  if (*DAT_003e9c90 != 0) {
    FUN_00098dbc(param_1,*DAT_003e9c90,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



/* printerApi/common/logger.Error @ 003e9c94 (size 164) */

/* WARNING: Removing unreachable block (ram,0x003e9cb4) */

void printerApi_common_logger_Error(undefined4 param_1)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 auStack_44 [52];
  int local_10;
  undefined1 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_00096bb8();
  }
  if (*DAT_003e9d3c != 0) {
    FUN_00098dbc(param_1,*DAT_003e9d3c,auStack_44);
    local_10 = local_10 + 2;
    local_4 = auStack_44;
    go_uber_org_zap___SugaredLogger__log();
  }
  return;
}



