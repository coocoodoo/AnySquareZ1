// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/poweroff_resume   functions: 26
/* printerApi/service/poweroff_resume.CleanupTempArtifacts @ 004f5c6c (size 1428) */

void printerApi_service_poweroff_resume_CleanupTempArtifacts(void)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  uint uVar4;
  int unaff_r10;
  undefined1 in_stack_00000004;
  undefined **local_9c;
  undefined **local_98;
  undefined **local_94;
  undefined **local_90;
  uint local_8c;
  int *local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined **local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  int *local_64;
  int local_60;
  undefined **local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined **local_50;
  undefined1 auStack_4c [20];
  undefined4 *local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined *local_28;
  int local_24;
  undefined *local_20;
  int local_1c;
  undefined *local_18;
  int local_14;
  undefined *local_10;
  int *local_c;
  undefined *local_8;
  undefined **local_4;
  
  while (&local_20 <= *(undefined ***)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00098a24(0,&stack0x00000008);
  uVar1 = FUN_0010cf30();
  FUN_00098e14(uVar1,&local_9c,auStack_4c);
  FUN_00098a24(0,&local_70);
  local_9c = (undefined **)CONCAT31(local_9c._1_3_,in_stack_00000004);
  printerApi_service_poweroff_resume_shouldSkipCleanup();
  if (((uint)local_98 & 0xff) == 0) {
    local_98 = *(undefined ***)(*(int *)(*(int *)PTR_DAT_004f6204 + 8) + 0x16c);
    local_9c = *(undefined ***)(*(int *)(*(int *)PTR_DAT_004f6204 + 8) + 0x168);
    if (local_98 == (undefined **)0x0) {
      local_98 = (undefined **)0x18;
      local_9c = (undefined **)PTR_DAT_004f6208;
    }
    internal_filepathlite_Clean();
    local_98 = *(undefined ***)(*(int *)(*(int *)PTR_DAT_004f6204 + 8) + 0x1ac);
    if (local_98 == (undefined **)0x0) {
      local_98 = (undefined **)0x15;
      local_9c = (undefined **)PTR_s__useremain__cache_apiflag__q_beg_0077f80f_0x5c_004f620c;
    }
    else {
      local_9c = *(undefined ***)(*(int *)(*(int *)PTR_DAT_004f6204 + 8) + 0x1a8);
    }
    local_54 = local_94;
    local_78 = local_90;
    internal_filepathlite_Clean();
    local_58 = local_94;
    local_7c = local_90;
    local_9c = (undefined **)local_54;
    local_98 = (undefined **)local_78;
    local_94 = (undefined **)PTR_DAT_004f6210;
    local_90 = (undefined **)0xd;
    local_8c._0_1_ = 1;
    local_88 = (int *)&local_70;
    printerApi_service_poweroff_resume_sweepPattern();
    local_70 = (undefined4 *)((int)local_70 + local_84);
    local_9c = (undefined **)local_58;
    local_98 = (undefined **)local_7c;
    local_94 = (undefined **)PTR_DAT_004f6210;
    local_90 = (undefined **)&DAT_0000000d;
    local_8c = CONCAT31(local_8c._1_3_,1);
    local_88 = (int *)&local_70;
    printerApi_service_poweroff_resume_sweepPattern();
    local_70 = (undefined4 *)((int)local_70 + local_84);
    FUN_00098a28(0,&local_38);
    local_34 = local_78;
    local_38 = local_54;
    local_2c = 9;
    local_30 = PTR_s__3mf_tempthumbnailgkapi_loggklib_0077568d_0x693_004f6214;
    local_9c = (undefined **)&local_38;
    local_98 = (undefined **)0x2;
    local_94 = (undefined **)0x2;
    FUN_00159184();
    local_5c = local_90;
    local_80 = local_8c;
    local_9c = local_90;
    local_98 = (undefined **)local_8c;
    FUN_0012a748();
    if (local_8c == 0) {
      local_8 = PTR_SUB_004f6218;
      local_4 = (undefined **)PTR_DAT_004f6220;
      local_9c = &local_8;
      local_98 = (undefined **)0x1;
      local_94 = (undefined **)0x1;
      printerApi_common_logger_Info();
      local_70 = (undefined4 *)((int)local_70 + 1);
      local_9c = local_5c;
      local_98 = (undefined **)local_80;
      FUN_00129904();
      if (local_94 == (undefined **)0x0) {
        local_8 = PTR_SUB_004f6218;
        local_4 = (undefined **)PTR_DAT_004f6228;
        local_9c = &local_8;
        local_98 = (undefined **)0x1;
        local_94 = (undefined **)0x1;
        printerApi_common_logger_Info();
        ppuVar2 = (undefined **)((int)local_6c + 1);
        local_6c = ppuVar2;
      }
      else {
        local_8 = *(undefined **)((int)local_94 + 4);
        local_4 = local_90;
        local_9c = (undefined **)PTR_DAT_004f6224;
        local_98 = (undefined **)0x4b;
        local_94 = &local_8;
        local_90 = (undefined **)0x1;
        local_8c = 1;
        printerApi_common_logger_Warnf();
        local_9c = local_5c;
        local_98 = (undefined **)local_80;
        local_94 = (undefined **)&local_70;
        ppuVar2 = (undefined **)printerApi_service_poweroff_resume_fallbackToGranularCleanup();
      }
    }
    else {
      local_8 = PTR_SUB_004f6218;
      local_4 = (undefined **)PTR_DAT_004f621c;
      local_9c = &local_8;
      local_98 = (undefined **)0x1;
      local_94 = (undefined **)0x1;
      ppuVar2 = (undefined **)printerApi_common_logger_Debug();
    }
    FUN_00098e14(ppuVar2,auStack_4c,&local_9c);
    FUN_0010327c();
    local_64 = local_88;
    local_60 = local_84;
    if (((int)local_6c < 1) && ((int)local_68 < 1)) {
      FUN_00098a18(0,&local_28);
      local_9c = (undefined **)local_70;
      FUN_0001cec0();
      local_28 = PTR_DAT_004f622c;
      local_24 = (int)local_98;
      local_9c = (undefined **)local_6c;
      FUN_0001cec0();
      local_20 = PTR_DAT_004f622c;
      local_1c = (int)local_98;
      local_9c = (undefined **)local_68;
      FUN_0001cec0();
      local_18 = PTR_DAT_004f622c;
      local_14 = (int)local_98;
      local_9c = (undefined **)local_64;
      local_98 = (undefined **)local_60;
      FUN_0008a4bc();
      local_10 = PTR_DAT_004f6230;
      local_c = (int *)local_94;
      local_9c = (undefined **)PTR_DAT_004f6234;
      local_98 = (undefined **)&DAT_00000046;
      local_94 = &local_28;
      local_90 = (undefined **)0x4;
      local_8c = 4;
      printerApi_common_logger_Debugf();
    }
    else {
      FUN_00098a18(0,&local_28);
      local_9c = (undefined **)local_70;
      FUN_0001cec0();
      local_28 = PTR_DAT_004f622c;
      local_24 = (int)local_98;
      local_9c = (undefined **)local_6c;
      FUN_0001cec0();
      local_20 = PTR_DAT_004f622c;
      local_1c = (int)local_98;
      local_9c = (undefined **)local_68;
      FUN_0001cec0();
      local_18 = PTR_DAT_004f622c;
      local_14 = (int)local_98;
      local_9c = (undefined **)local_64;
      local_98 = (undefined **)local_60;
      FUN_0008a4bc();
      local_10 = PTR_DAT_004f6230;
      local_c = (int *)local_94;
      local_9c = (undefined **)PTR_DAT_004f6234;
      local_98 = (undefined **)&DAT_00000046;
      local_94 = &local_28;
      local_90 = (undefined **)0x4;
      local_8c = 4;
      printerApi_common_logger_Infof();
    }
    local_9c = (undefined **)PTR_DAT_004f6238;
    printerApi_service_poweroff_resume_mutatePrintRecord();
    if (local_98 == (undefined **)0x0) {
      uVar4 = 0;
      ppuVar2 = local_98;
      ppuVar3 = local_94;
    }
    else {
      local_50 = local_94;
      local_74 = local_98;
      local_90 = *(undefined ***)PTR_DAT_004f6240;
      local_9c = local_98;
      local_98 = local_94;
      local_94 = *(undefined ***)PTR_DAT_004f623c;
      FUN_000a2c04();
      uVar4 = local_8c & 0xff ^ 1;
      ppuVar2 = local_74;
      ppuVar3 = local_50;
    }
    if (uVar4 != 0) {
      local_8 = (undefined *)0x0;
      if (ppuVar2 != (undefined **)0x0) {
        local_8 = ppuVar2[1];
      }
      local_9c = (undefined **)PTR_DAT_004f6244;
      local_98 = (undefined **)&DAT_00000030;
      local_94 = &local_8;
      local_90 = (undefined **)0x1;
      local_8c = 1;
      local_4 = ppuVar3;
      ppuVar2 = (undefined **)printerApi_common_logger_Warnf();
    }
    FUN_00098e14(ppuVar2,&local_70,&stack0x00000008);
    return;
  }
  local_8 = PTR_SUB_004f6218;
  local_4 = (undefined **)PTR_DAT_004f6248;
  local_9c = &local_8;
  local_98 = (undefined **)0x1;
  local_94 = (undefined **)0x1;
  uVar1 = printerApi_common_logger_Debug();
  FUN_00098e14(uVar1,&local_70,&stack0x00000008);
  return;
}



/* printerApi/service/poweroff_resume.fallbackToGranularCleanup @ 004f624c (size 208) */

void printerApi_service_poweroff_resume_fallbackToGranularCleanup(void)

{
  int unaff_r10;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined1 auStack_40 [52];
  undefined1 auStack_c [4];
  undefined4 local_8;
  undefined4 local_4;
  
  while( true ) {
    if (*(undefined1 **)(unaff_r10 + 8) < auStack_c) break;
    FUN_00096bb8();
  }
  local_8 = DAT_004f6320;
  local_4 = DAT_004f6324;
  local_88 = &local_8;
  local_84 = 1;
  local_80 = 1;
  printerApi_common_logger_Debug();
  FUN_00098a00(0,auStack_40);
  printerApi_service_poweroff_resume_GetPrintRecord();
  local_44 = local_50;
  FUN_00098dcc(local_50,&local_88,auStack_40);
  if (local_44 == (undefined4 *)0x0) {
    FUN_00098dcc(0,auStack_40,&local_88);
    local_50 = in_stack_00000004;
    local_4c = in_stack_00000008;
    local_48 = in_stack_0000000c;
    printerApi_service_poweroff_resume_cleanupRecordedFiles();
  }
  local_88 = in_stack_00000004;
  local_84 = in_stack_00000008;
  local_80 = DAT_004f6328;
  local_7c = 0x4e94;
  local_78 = in_stack_0000000c;
  printerApi_service_poweroff_resume_cleanupStaleFiles();
  return;
}



/* printerApi/service/poweroff_resume.shouldSkipCleanup @ 004f632c (size 312) */

/* WARNING: Removing unreachable block (ram,0x004f637c) */

void printerApi_service_poweroff_resume_shouldSkipCleanup(void)

{
  int unaff_r10;
  char in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined1 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (in_stack_00000004 != '\0') {
    return;
  }
  if (**(int **)PTR_DAT_004f6468 == 1) {
    printerApi_common_logger_Info();
    return;
  }
  printerApi_service_poweroff_resume_hasValidResumeGuard();
  if (local_14 != '\0') {
    printerApi_common_logger_Info();
    return;
  }
  printerApi_service_poweroff_resume_hasFreshPrintRecord();
  printerApi_common_logger_Debug();
  return;
}



/* printerApi/service/poweroff_resume.sweepPattern @ 004f6480 (size 2400) */

/* WARNING: Removing unreachable block (ram,0x004f667c) */

void printerApi_service_poweroff_resume_sweepPattern(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 **ppuVar3;
  undefined4 **ppuVar4;
  uint uVar5;
  undefined4 **ppuVar6;
  undefined4 **ppuVar7;
  char cVar8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 **in_stack_00000004;
  undefined **in_stack_00000008;
  undefined4 **in_stack_0000000c;
  undefined **in_stack_00000010;
  char in_stack_00000014;
  int in_stack_00000018;
  undefined4 **local_168;
  undefined **local_164;
  undefined **local_160;
  undefined **local_15c;
  undefined **local_158;
  undefined **local_154;
  undefined **local_150;
  undefined4 local_14c;
  int local_130;
  byte local_126;
  char local_125;
  char local_124;
  undefined *apuStack_123 [8];
  char local_103;
  char local_102;
  char local_101;
  undefined **local_100;
  undefined **local_fc;
  undefined **local_f8;
  int local_f4;
  undefined **local_f0;
  int local_ec;
  undefined **local_e8;
  undefined **local_e4;
  undefined **local_e0;
  undefined **local_dc;
  undefined **local_d8;
  int local_d4;
  int local_d0;
  undefined **local_cc;
  undefined **local_c8;
  undefined **local_c4;
  undefined **local_c0;
  undefined1 auStack_bc [24];
  char *local_a4;
  int local_a0;
  char local_8c;
  undefined **local_84;
  undefined **local_80;
  undefined4 local_7c;
  undefined **local_78;
  undefined **local_74;
  undefined **local_70;
  undefined **local_6c;
  undefined *local_68;
  undefined **local_64;
  undefined1 auStack_60 [56];
  undefined *local_28;
  undefined **local_24;
  undefined *local_20;
  undefined **local_1c;
  undefined *local_18;
  undefined **local_14;
  undefined *local_10;
  undefined **local_c;
  undefined *local_8;
  undefined4 local_4;
  
  while (&local_ec <= *(int **)(unaff_r10 + 8)) {
    unaff_lr = 0x4f6e14;
    FUN_00096bb8();
  }
  FUN_00098a28(0,&local_78);
  local_74 = in_stack_00000008;
  local_78 = (undefined **)in_stack_00000004;
  local_6c = in_stack_00000010;
  local_70 = (undefined **)in_stack_0000000c;
  local_168 = &local_78;
  local_164 = (undefined **)0x2;
  local_160 = (undefined **)0x2;
  uVar2 = FUN_00159184();
  local_168 = (undefined4 **)local_15c;
  local_164 = local_158;
  local_160 = (undefined **)0x0;
  FUN_001575d0(uVar2);
  if ((undefined4 **)local_150 != (undefined4 **)0x0) {
    local_7c = local_14c;
    local_e0 = local_150;
    FUN_00098a20(0,&local_18,local_150,local_15c,unaff_lr);
    local_168 = in_stack_00000004;
    local_164 = in_stack_00000008;
    FUN_0008a578();
    local_18 = PTR_SUB_004f6d2c;
    local_14 = local_160;
    local_168 = in_stack_0000000c;
    local_164 = in_stack_00000010;
    FUN_0008a578();
    local_10 = PTR_SUB_004f6d2c;
    local_c = local_160;
    local_8 = (undefined *)0x0;
    if ((undefined4 **)local_e0 != (undefined4 **)0x0) {
      local_8 = local_e0[1];
    }
    local_4 = local_7c;
    local_168 = (undefined4 **)PTR_DAT_004f6d30;
    local_164 = (undefined **)0x2e;
    local_160 = &local_18;
    local_15c = (undefined **)0x3;
    local_158 = (undefined **)0x3;
    printerApi_common_logger_Warnf();
    return;
  }
  local_e8 = local_158;
  local_84 = local_15c;
  local_168 = in_stack_00000004;
  local_164 = in_stack_00000008;
  internal_filepathlite_Clean();
  local_c8 = local_160;
  local_fc = local_15c;
  if (in_stack_00000010 == (undefined **)0xd) {
    local_168 = in_stack_0000000c;
    local_164 = (undefined **)PTR_DAT_004f6d28;
    local_160 = (undefined **)&DAT_0000000d;
    FUN_000150d4();
    uVar5 = (uint)local_15c & 0xff;
  }
  else {
    uVar5 = 0;
  }
  local_126 = (byte)uVar5;
  local_d0 = 0;
  local_f4 = 0;
  local_124 = '\0';
  local_125 = '\0';
  ppuVar3 = (undefined4 **)local_c8;
  ppuVar4 = (undefined4 **)local_fc;
  ppuVar6 = (undefined4 **)local_e8;
  ppuVar7 = (undefined4 **)local_84;
  do {
    if ((int)ppuVar6 <= local_d0) {
      return;
    }
    local_164 = (undefined **)ppuVar7[local_d0 * 2 + 1];
    local_168 = (undefined4 **)ppuVar7[local_d0 * 2];
    if (local_164 != (undefined **)0x0) {
      internal_filepathlite_Clean(ppuVar3,ppuVar4,uVar5);
      local_100 = local_15c;
      local_cc = local_160;
      local_168 = (undefined4 **)apuStack_123;
      local_164 = local_c8;
      local_160 = local_fc;
      local_15c = (undefined **)PTR_DAT_004f6d34;
      local_158 = (undefined **)0x1;
      FUN_000715a4();
      if ((int)local_100 < (int)local_150) {
        uVar5 = 0;
      }
      else {
        local_168 = (undefined4 **)local_cc;
        local_164 = local_154;
        local_160 = local_150;
        FUN_000150d4();
        uVar5 = (uint)local_15c & 0xff;
      }
      if (uVar5 == 0) {
        FUN_00098a28(0,&local_28,local_100);
        local_168 = (undefined4 **)local_cc;
        FUN_0008a578();
        local_28 = (undefined *)DAT_004f6e1c;
        local_24 = local_160;
        local_168 = (undefined4 **)local_c8;
        local_164 = local_fc;
        FUN_0008a578();
        local_20 = (undefined *)DAT_004f6e1c;
        local_1c = local_160;
        local_168 = DAT_004f6e20;
        local_164 = (undefined **)0x2a;
        local_160 = &local_28;
        local_15c = (undefined **)0x2;
        local_158 = (undefined **)0x2;
        printerApi_common_logger_Warnf();
        uVar5 = (uint)local_126;
        ppuVar3 = (undefined4 **)local_c8;
        ppuVar4 = (undefined4 **)local_fc;
        ppuVar6 = (undefined4 **)local_e8;
        ppuVar7 = (undefined4 **)local_84;
      }
      else {
        local_168 = (undefined4 **)local_cc;
        local_164 = local_100;
        FUN_0012a7b0();
        if ((undefined4 **)local_158 == (undefined4 **)0x0) {
          local_e4 = local_160;
          local_80 = local_15c;
          if (local_126 == 0) {
            uVar5 = 0;
          }
          else {
            local_168 = (undefined4 **)local_15c;
            (*(code *)local_160[3])();
            uVar5 = (uint)local_164 & 0xff;
          }
          local_d4 = local_f4 + 1;
          cVar8 = local_125;
          cVar1 = local_124;
          if (uVar5 == 0) {
LAB_004f68d0:
            local_102 = cVar1;
            local_168 = (undefined4 **)local_80;
            local_101 = cVar8;
            (*(code *)local_e4[3])();
            if (((char)local_164 == '\0') && (in_stack_00000014 == '\0')) {
              local_168 = (undefined4 **)local_cc;
              local_164 = local_100;
              FUN_00127c60();
            }
            else {
              local_168 = (undefined4 **)local_cc;
              local_164 = local_100;
              FUN_00129904();
            }
            local_c0 = local_15c;
            local_f0 = local_160;
            if ((undefined4 **)local_160 == (undefined4 **)0x0) {
              uVar5 = 0;
            }
            else {
              local_168 = (undefined4 **)local_160;
              local_164 = local_15c;
              local_160 = (undefined **)*(undefined4 ***)PTR_DAT_004f6d40;
              local_15c = (undefined **)*(undefined4 ***)PTR_DAT_004f6d44;
              FUN_00122c24();
              uVar5 = (uint)local_158 & 0xff ^ 1;
            }
            if (uVar5 == 0) {
              if ((undefined4 **)local_f0 == (undefined4 **)0x0) {
                *(int *)(in_stack_00000018 + 4) = *(int *)(in_stack_00000018 + 4) + 1;
                FUN_00098a28(0,&local_28);
                local_28 = PTR_SUB_004f6d2c;
                local_24 = (undefined **)PTR_DAT_004f6d48;
                local_168 = (undefined4 **)local_cc;
                local_164 = local_100;
                FUN_0008a578();
                local_20 = PTR_SUB_004f6d2c;
                local_1c = local_160;
                local_168 = (undefined4 **)&local_28;
                local_164 = (undefined **)0x2;
                local_160 = (undefined **)0x2;
                printerApi_common_logger_Debug();
              }
              uVar5 = (uint)local_126;
              ppuVar3 = (undefined4 **)local_c8;
              ppuVar4 = (undefined4 **)local_fc;
              ppuVar6 = (undefined4 **)local_e8;
              ppuVar7 = (undefined4 **)local_84;
              local_f4 = local_d4;
              local_125 = local_101;
              local_124 = local_102;
            }
            else {
              FUN_00098a28(0,&local_28);
              local_168 = (undefined4 **)local_cc;
              local_164 = local_100;
              FUN_0008a578();
              local_28 = PTR_SUB_004f6d2c;
              local_24 = local_160;
              if ((undefined4 **)local_f0 == (undefined4 **)0x0) {
                local_20 = (undefined *)0x0;
              }
              else {
                local_20 = local_f0[1];
              }
              local_1c = local_c0;
              local_168 = (undefined4 **)PTR_DAT_004f6d4c;
              local_164 = (undefined **)0x25;
              local_160 = &local_28;
              local_15c = (undefined **)0x2;
              local_158 = (undefined **)0x2;
              printerApi_common_logger_Warnf();
              *(int *)(in_stack_00000018 + 8) = *(int *)(in_stack_00000018 + 8) + 1;
              uVar5 = (uint)local_126;
              ppuVar3 = (undefined4 **)local_c8;
              ppuVar4 = (undefined4 **)local_fc;
              ppuVar6 = (undefined4 **)local_e8;
              ppuVar7 = (undefined4 **)local_84;
              local_f4 = local_d4;
              local_125 = local_101;
              local_124 = local_102;
            }
          }
          else {
            local_168 = (undefined4 **)local_80;
            uVar2 = (*(code *)local_e4[4])();
            uVar2 = FUN_00098e14(uVar2,&local_164,auStack_60);
            FUN_00098e14(uVar2,auStack_60,&local_168);
            FUN_0010327c();
            if ((int)local_150 < 0x45 ||
                local_150 == (undefined **)&DAT_00000045 && local_154 < DAT_004f6d38) {
              local_d8 = local_150;
              local_dc = local_154;
              FUN_00098a28(0,&local_28);
              local_168 = (undefined4 **)local_cc;
              local_164 = local_100;
              FUN_0008a578();
              local_28 = PTR_SUB_004f6d2c;
              local_24 = local_160;
              local_168 = (undefined4 **)local_dc;
              local_164 = local_d8;
              FUN_0008a4bc();
              local_20 = PTR_DAT_004f6d54;
              local_1c = local_160;
              local_168 = (undefined4 **)PTR_DAT_004f6d58;
              local_164 = (undefined **)0x28;
              local_160 = &local_28;
              local_15c = (undefined **)0x2;
              local_158 = (undefined **)0x2;
              printerApi_common_logger_Debugf();
              uVar5 = (uint)local_126;
              ppuVar3 = (undefined4 **)local_c8;
              ppuVar4 = (undefined4 **)local_fc;
              ppuVar6 = (undefined4 **)local_e8;
              ppuVar7 = (undefined4 **)local_84;
              local_f4 = local_d4;
            }
            else {
              cVar8 = local_125;
              if (local_124 == '\0') {
                FUN_00098a00(0,auStack_60);
                uVar2 = printerApi_service_poweroff_resume_GetPrintRecord();
                local_ec = local_130;
                uVar2 = FUN_00098dcc(uVar2,&local_168,auStack_60);
                FUN_00098dcc(uVar2,auStack_60,auStack_bc);
                cVar8 = local_125;
                if ((local_ec == 0) &&
                   (((((local_a0 == 3 && (*local_a4 == '3')) && (local_a4[1] == 'm')) &&
                     (local_a4[2] == 'f')) || (local_8c != '\0')))) {
                  local_68 = PTR_SUB_004f6d2c;
                  local_64 = (undefined **)PTR_DAT_004f6d3c;
                  local_168 = (undefined4 **)&local_68;
                  local_164 = (undefined **)0x1;
                  local_160 = (undefined **)0x1;
                  printerApi_common_logger_Debug();
                  cVar8 = '\x01';
                }
              }
              if (cVar8 == '\0') {
                cVar1 = '\x01';
                goto LAB_004f68d0;
              }
              local_68 = (undefined *)0x0;
              local_64 = (undefined **)0x0;
              local_168 = (undefined4 **)local_cc;
              local_164 = local_100;
              local_103 = cVar8;
              FUN_0008a578();
              local_68 = PTR_SUB_004f6d2c;
              local_64 = local_160;
              local_168 = (undefined4 **)PTR_DAT_004f6d50;
              local_164 = (undefined **)0x2f;
              local_160 = &local_68;
              local_15c = (undefined **)0x1;
              local_158 = (undefined **)0x1;
              printerApi_common_logger_Debugf();
              uVar5 = (uint)local_126;
              local_124 = '\x01';
              ppuVar3 = (undefined4 **)local_c8;
              ppuVar4 = (undefined4 **)local_fc;
              ppuVar6 = (undefined4 **)local_e8;
              ppuVar7 = (undefined4 **)local_84;
              local_f4 = local_d4;
              local_125 = local_103;
            }
          }
        }
        else {
          local_f8 = local_158;
          local_c4 = local_154;
          local_160 = *(undefined ***)PTR_DAT_004f6d40;
          local_15c = *(undefined ***)PTR_DAT_004f6d44;
          local_168 = (undefined4 **)local_158;
          local_164 = local_154;
          FUN_00122c24();
          if ((char)local_158 == '\0') {
            FUN_00098a28(0,&local_28);
            local_168 = (undefined4 **)local_cc;
            local_164 = local_100;
            FUN_0008a578();
            local_28 = PTR_SUB_004f6d2c;
            local_24 = local_160;
            if ((undefined4 **)local_f8 == (undefined4 **)0x0) {
              local_20 = (undefined *)0x0;
            }
            else {
              local_20 = local_f8[1];
            }
            local_1c = local_c4;
            local_168 = (undefined4 **)PTR_DAT_004f6d5c;
            local_164 = (undefined **)0x2a;
            local_160 = &local_28;
            local_15c = (undefined **)0x2;
            local_158 = (undefined **)0x2;
            printerApi_common_logger_Warnf();
            *(int *)(in_stack_00000018 + 8) = *(int *)(in_stack_00000018 + 8) + 1;
            uVar5 = (uint)local_126;
            ppuVar3 = (undefined4 **)local_c8;
            ppuVar4 = (undefined4 **)local_fc;
            ppuVar6 = (undefined4 **)local_e8;
            ppuVar7 = (undefined4 **)local_84;
          }
          else {
            uVar5 = (uint)local_126;
            ppuVar3 = (undefined4 **)local_c8;
            ppuVar4 = (undefined4 **)local_fc;
            ppuVar6 = (undefined4 **)local_e8;
            ppuVar7 = (undefined4 **)local_84;
          }
        }
      }
    }
    local_d0 = local_d0 + 1;
  } while( true );
}



/* printerApi/service/poweroff_resume.mutatePrintRecord @ 004f6e24 (size 644) */

/* WARNING: Removing unreachable block (ram,0x004f6fe4) */
/* WARNING: Removing unreachable block (ram,0x004f6f24) */
/* WARNING: Removing unreachable block (ram,0x004f6f38) */
/* WARNING: Removing unreachable block (ram,0x004f6f3c) */

void printerApi_service_poweroff_resume_mutatePrintRecord(void)

{
  undefined *puVar1;
  int iVar2;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  char local_40;
  int local_3c;
  int local_38;
  undefined1 local_1c [8];
  undefined *local_14;
  undefined4 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4f70a4;
    FUN_00096bb8();
  }
  iVar2 = *(int *)(*(int *)(*(int *)PTR_DAT_004f70ac + 8) + 0x1ac);
  if (iVar2 == 0) {
    iVar2 = 0x15;
    puVar1 = PTR_s__useremain__cache_apiflag__q_beg_0077f80f_0x5c_004f70b0;
  }
  else {
    puVar1 = *(undefined **)(*(int *)(*(int *)PTR_DAT_004f70ac + 8) + 0x1a8);
  }
  FUN_00098a28(0,local_1c,puVar1,iVar2,unaff_lr);
  local_10 = 0xc;
  local_14 = PTR_DAT_004f70b4;
  FUN_00159184();
  FUN_00125de4();
  if (local_38 != 0) {
    return;
  }
  FUN_0001eed8();
  FUN_0016a168();
  (*(code *)*in_stack_00000004)();
  if (local_3c != 0) {
    return;
  }
  if (local_40 != '\0') {
    FUN_0001cd7c();
    FUN_001707f4();
    printerApi_common_file_WriteFileWithSync();
    return;
  }
  return;
}



/* printerApi/service/poweroff_resume.cleanupRecordedFiles @ 004f70c8 (size 1176) */

/* WARNING: Removing unreachable block (ram,0x004f7334) */
/* WARNING: Removing unreachable block (ram,0x004f70fc) */
/* WARNING: Removing unreachable block (ram,0x004f739c) */

void printerApi_service_poweroff_resume_cleanupRecordedFiles(void)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int unaff_r10;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_0000003c;
  uint in_stack_00000040;
  int *in_stack_00000044;
  uint local_44;
  uint local_40;
  byte local_3c;
  undefined *local_10;
  uint local_c;
  undefined4 local_8;
  uint local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00148fb4();
  if (local_40 != 0) {
    internal_filepathlite_Clean();
    if ((int)local_40 < (int)in_stack_00000040) {
      uVar3 = 0;
    }
    else {
      local_44 = in_stack_00000040;
      FUN_000150d4();
      uVar3 = local_40 & 0xff;
    }
    uVar1 = local_44;
    if (uVar3 != 0) {
      *in_stack_00000044 = *in_stack_00000044 + 1;
      FUN_00127c60();
      if (local_44 == 0) {
        bVar2 = 0;
      }
      else {
        local_44 = *(uint *)PTR_DAT_004f7564;
        local_40 = *(uint *)PTR_DAT_004f7568;
        FUN_00122c24();
        bVar2 = local_3c ^ 1;
      }
      if (bVar2 == 0) {
        if (uVar1 == 0) {
          FUN_0008a578();
          local_3c = 1;
          printerApi_common_logger_Infof();
          in_stack_00000044[1] = in_stack_00000044[1] + 1;
          local_40 = in_stack_00000040;
          printerApi_service_poweroff_resume_removeEmptyParentDirs();
        }
      }
      else {
        FUN_00098a28(0,&local_10);
        FUN_0008a578();
        local_10 = PTR_SUB_004f756c;
        local_c = local_44;
        if (uVar1 == 0) {
          local_8 = 0;
        }
        else {
          local_8 = *(undefined4 *)(uVar1 + 4);
        }
        local_40 = 2;
        local_3c = 2;
        printerApi_common_logger_Warnf();
        in_stack_00000044[2] = in_stack_00000044[2] + 1;
      }
    }
  }
  FUN_00148fb4();
  if (local_40 != 0) {
    internal_filepathlite_Clean();
    internal_filepathlite_Clean();
    FUN_000150d4();
    local_44 = local_40;
    if ((local_40 & 0xff) != 0) {
      *in_stack_00000044 = *in_stack_00000044 + 1;
      FUN_00129904();
      if (local_40 == 0) {
        bVar2 = 0;
      }
      else {
        local_44 = *(uint *)PTR_DAT_004f7564;
        FUN_00122c24();
        bVar2 = local_3c ^ 1;
      }
      if (bVar2 == 0) {
        if (local_40 == 0) {
          FUN_0008a578(0,0);
          printerApi_common_logger_Infof();
          in_stack_00000044[1] = in_stack_00000044[1] + 1;
        }
      }
      else {
        FUN_00098a28(0,&local_10);
        FUN_0008a578();
        local_10 = PTR_SUB_004f756c;
        local_c = local_44;
        if (local_40 == 0) {
          local_8 = 0;
        }
        else {
          local_8 = *(undefined4 *)(local_40 + 4);
        }
        local_4 = local_40;
        printerApi_common_logger_Warnf();
        in_stack_00000044[2] = in_stack_00000044[2] + 1;
      }
    }
  }
  return;
}



/* printerApi/service/poweroff_resume.cleanupStaleFiles @ 004f7588 (size 356) */

void printerApi_service_poweroff_resume_cleanupStaleFiles(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined *in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined *local_70;
  undefined4 local_6c;
  undefined **local_68;
  int local_64;
  undefined *local_60;
  int local_5c;
  int local_58;
  undefined1 auStack_54 [20];
  undefined4 local_40;
  undefined *local_3c;
  undefined *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [20];
  undefined1 auStack_14 [20];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_70 = in_stack_00000004;
  local_6c = in_stack_00000008;
  FUN_0012a748();
  local_68 = *(undefined ***)PTR_DAT_004f76f0;
  local_64 = *(int *)PTR_DAT_004f76f4;
  local_70 = local_60;
  local_6c = local_5c;
  FUN_00122c24();
  if (((uint)local_60 & 0xff) != 0) {
    return;
  }
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,&local_70,auStack_14);
  FUN_00098e14(uVar1,auStack_14,&local_70);
  local_5c = -in_stack_0000000c;
  local_58 = -(in_stack_00000010 + (uint)(in_stack_0000000c != 0));
  uVar1 = FUN_00102dac();
  FUN_00098e14(uVar1,auStack_54,auStack_14);
  FUN_00098a14(0,&local_38);
  local_38 = PTR_printerApi_service_poweroff_resume_cleanupStaleFiles_func1_004f76f8;
  local_30 = in_stack_00000008;
  local_34 = in_stack_00000004;
  local_2c = in_stack_00000014;
  FUN_00098e14(in_stack_00000008,auStack_14,auStack_28,in_stack_00000004);
  local_6c = in_stack_00000008;
  local_68 = &local_38;
  FUN_00158ea0();
  if (local_64 != 0) {
    local_40 = *(undefined4 *)(local_64 + 4);
    local_3c = local_60;
    local_70 = PTR_DAT_004f76fc;
    local_6c = 0x2b;
    local_68 = (undefined **)&local_40;
    local_64 = 1;
    local_60 = (undefined *)0x1;
    printerApi_common_logger_Warnf();
  }
  return;
}



/* printerApi/service/poweroff_resume.cleanupStaleFiles.func1 @ 004f7700 (size 1132) */

/* WARNING: Removing unreachable block (ram,0x004f77e0) */

void printerApi_service_poweroff_resume_cleanupStaleFiles_func1(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r7;
  int unaff_r10;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  int in_stack_0000000c;
  undefined4 *in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 *puStack_6c;
  undefined4 *puStack_68;
  undefined4 *puStack_64;
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  char cStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  int *piStack_34;
  undefined4 *puStack_30;
  undefined1 auStack_2c [20];
  undefined4 uStack_14;
  undefined4 *puStack_10;
  undefined4 uStack_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piStack_34 = *(int **)(unaff_r7 + 0xc);
  if (in_stack_00000014 != 0) {
    return;
  }
  if (in_stack_00000008 == *(undefined4 **)(unaff_r7 + 8)) {
    puStack_68 = *(undefined4 **)(unaff_r7 + 4);
    puStack_6c = in_stack_00000004;
    puStack_64 = in_stack_00000008;
    FUN_000150d4();
    if ((char)puStack_60 != '\0') {
      return;
    }
  }
  iStack_4 = unaff_r7 + 0x10;
  *piStack_34 = *piStack_34 + 1;
  puStack_6c = in_stack_00000010;
  uVar1 = (**(code **)(in_stack_0000000c + 0x10))();
  uVar1 = FUN_00098e14(uVar1,&puStack_68,auStack_2c);
  uVar1 = FUN_00098e14(uVar1,auStack_2c,&puStack_6c);
  FUN_00098e14(uVar1,iStack_4,&puStack_58);
  FUN_00100b64();
  if (cStack_44 != '\0') {
    puStack_6c = in_stack_00000010;
    (**(code **)(in_stack_0000000c + 0xc))();
    if ((char)puStack_68 == '\0') {
      puStack_6c = in_stack_00000004;
      puStack_68 = in_stack_00000008;
      FUN_00127c60();
      puStack_40 = puStack_64;
      puStack_30 = puStack_60;
      if (puStack_64 == (undefined4 *)0x0) {
        puStack_6c = in_stack_00000010;
        uVar1 = (**(code **)(in_stack_0000000c + 0x10))();
        uVar1 = FUN_00098e14(uVar1,&puStack_68,auStack_2c);
        FUN_00098e14(uVar1,auStack_2c,&puStack_6c);
        FUN_0010327c();
        puStack_6c = puStack_58;
        puStack_68 = puStack_54;
        puStack_64 = (undefined4 *)DAT_004f7b70;
        puStack_60 = (undefined4 *)0x346;
        FUN_00102b0c();
        puStack_38 = puStack_5c;
        puStack_3c = puStack_58;
        FUN_00098a28(0,&uStack_14);
        puStack_6c = in_stack_00000004;
        puStack_68 = in_stack_00000008;
        FUN_0008a578();
        uStack_14 = DAT_004f7b74;
        puStack_10 = puStack_64;
        puStack_6c = puStack_38;
        puStack_68 = puStack_3c;
        FUN_0008a4bc();
        uStack_c = DAT_004f7b78;
        puStack_8 = puStack_64;
        puStack_6c = DAT_004f7b88;
        puStack_68 = (undefined4 *)&DAT_00000027;
        puStack_64 = &uStack_14;
        puStack_60 = (undefined4 *)0x2;
        puStack_5c = (undefined4 *)0x2;
        printerApi_common_logger_Infof();
        piStack_34[1] = piStack_34[1] + 1;
        puStack_40 = puStack_40;
        puStack_30 = puStack_30;
      }
    }
    else {
      puStack_6c = in_stack_00000004;
      puStack_68 = in_stack_00000008;
      FUN_00129904();
      puStack_40 = puStack_64;
      puStack_30 = puStack_60;
      if (puStack_64 == (undefined4 *)0x0) {
        puStack_6c = in_stack_00000010;
        uVar1 = (**(code **)(in_stack_0000000c + 0x10))();
        uVar1 = FUN_00098e14(uVar1,&puStack_68,auStack_2c);
        FUN_00098e14(uVar1,auStack_2c,&puStack_6c);
        FUN_0010327c();
        puStack_6c = puStack_58;
        puStack_68 = puStack_54;
        puStack_64 = (undefined4 *)DAT_004f7b70;
        puStack_60 = (undefined4 *)0x346;
        FUN_00102b0c();
        puStack_38 = puStack_5c;
        puStack_3c = puStack_58;
        FUN_00098a28(0,&uStack_14);
        puStack_6c = in_stack_00000004;
        puStack_68 = in_stack_00000008;
        FUN_0008a578();
        uStack_14 = DAT_004f7b74;
        puStack_10 = puStack_64;
        puStack_6c = puStack_38;
        puStack_68 = puStack_3c;
        FUN_0008a4bc();
        uStack_c = DAT_004f7b78;
        puStack_8 = puStack_64;
        puStack_6c = DAT_004f7b7c;
        puStack_68 = (undefined4 *)0x26;
        puStack_64 = &uStack_14;
        puStack_60 = (undefined4 *)0x2;
        puStack_5c = (undefined4 *)0x2;
        printerApi_common_logger_Infof();
        piStack_34[1] = piStack_34[1] + 1;
        return;
      }
    }
    if (puStack_40 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      puStack_64 = (undefined4 *)*DAT_004f7b8c;
      puStack_60 = (undefined4 *)*DAT_004f7b90;
      puStack_6c = puStack_40;
      puStack_68 = puStack_30;
      FUN_00122c24();
      uVar2 = (uint)puStack_5c & 0xff ^ 1;
    }
    if (uVar2 != 0) {
      FUN_00098a28(0,&uStack_14,puStack_30);
      puStack_6c = in_stack_00000004;
      puStack_68 = in_stack_00000008;
      FUN_0008a578();
      uStack_14 = DAT_004f7b74;
      puStack_10 = puStack_64;
      if (puStack_40 == (undefined4 *)0x0) {
        uStack_c = 0;
      }
      else {
        uStack_c = puStack_40[1];
      }
      puStack_8 = puStack_30;
      puStack_6c = DAT_004f7b94;
      puStack_68 = (undefined4 *)0x2a;
      puStack_64 = &uStack_14;
      puStack_60 = (undefined4 *)0x2;
      puStack_5c = (undefined4 *)0x2;
      printerApi_common_logger_Warnf();
      piStack_34[2] = piStack_34[2] + 1;
    }
  }
  return;
}



/* printerApi/service/poweroff_resume.removeEmptyParentDirs @ 004f7b98 (size 456) */

void printerApi_service_poweroff_resume_removeEmptyParentDirs(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 local_8;
  undefined4 *local_4;
  
  puVar2 = local_28;
  puVar1 = local_2c;
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_filepathlite_Clean();
  internal_filepathlite_Dir();
  internal_filepathlite_Clean();
  while( true ) {
    if ((int)local_28 < (int)puVar2) {
      uVar3 = 0;
    }
    else {
      FUN_000150d4();
      uVar3 = (uint)local_28 & 0xff;
      local_2c = puVar2;
    }
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else if (local_28 == puVar2) {
      FUN_000150d4();
      uVar3 = (uint)local_28 & 0xff ^ 1;
      local_2c = local_28;
    }
    else {
      uVar3 = 1;
    }
    if ((uVar3 == 0) || (FUN_00127c60(puVar1,puVar2), local_2c != (undefined4 *)0x0)) break;
    local_8 = 0;
    local_4 = (undefined4 *)0x0;
    FUN_0008a578();
    local_8 = DAT_004f7d64;
    local_4 = local_2c;
    local_2c = &local_8;
    local_28 = (undefined4 *)0x1;
    printerApi_common_logger_Debugf();
    internal_filepathlite_Dir();
  }
  return;
}



/* printerApi/service/poweroff_resume.CleanupOrphanTempFilesBeforePrint @ 004f7d6c (size 1700) */

void printerApi_service_poweroff_resume_CleanupOrphanTempFilesBeforePrint(void)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  int unaff_r10;
  undefined **in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined **local_d4;
  undefined **local_d0;
  undefined **local_cc;
  undefined **local_c8;
  undefined **local_c4;
  undefined **local_c0;
  undefined4 local_bc;
  undefined *local_b8;
  undefined **local_b4;
  undefined **local_b0;
  undefined **local_ac;
  undefined **local_a8;
  undefined **local_a4;
  undefined4 local_a0;
  undefined *local_9c;
  undefined **local_98;
  undefined *local_94;
  undefined **local_90;
  undefined **local_8c;
  undefined1 auStack_88 [20];
  undefined **local_74;
  undefined **local_70;
  undefined **local_6c;
  undefined *local_68 [2];
  undefined *local_60;
  undefined4 local_5c;
  undefined *local_58;
  undefined **local_54;
  undefined *local_50;
  undefined **local_4c;
  undefined *local_48;
  undefined **local_44;
  undefined *local_40;
  undefined **local_3c;
  undefined *local_38;
  undefined **local_34;
  undefined **local_30;
  undefined ***local_2c;
  undefined **local_28;
  undefined *local_24;
  undefined **local_20;
  undefined *local_1c;
  undefined *local_18;
  undefined **local_14;
  undefined *local_10;
  undefined **local_c;
  undefined *local_8;
  undefined *local_4;
  
  while (&local_58 <= *(undefined ***)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00098a24(0,&stack0x0000000c);
  uVar1 = FUN_0010cf30();
  FUN_00098e14(uVar1,&local_d4,auStack_88);
  uVar1 = FUN_00098a24(0,&local_b0);
  local_d0 = *(undefined ***)(*(int *)(*(int *)PTR_DAT_004f8414 + 8) + 0x16c);
  local_d4 = *(undefined ***)(*(int *)(*(int *)PTR_DAT_004f8414 + 8) + 0x168);
  if (local_d0 == (undefined **)0x0) {
    local_d0 = (undefined **)0x18;
    local_d4 = (undefined **)PTR_DAT_004f8418;
  }
  internal_filepathlite_Clean(uVar1);
  FUN_00098a28(0,local_68,local_c8,local_cc);
  local_5c = 9;
  local_60 = PTR_s__3mf_tempthumbnailgkapi_loggklib_0077568d_0x693_004f841c;
  local_d4 = local_68;
  local_d0 = (undefined **)0x2;
  local_cc = (undefined **)0x2;
  FUN_00159184();
  local_8c = local_c8;
  local_b4 = local_c4;
  local_d4 = local_c8;
  local_d0 = local_c4;
  FUN_0012a748();
  local_cc = *(undefined ***)PTR_DAT_004f8420;
  local_c8 = *(undefined ***)PTR_DAT_004f8424;
  local_d4 = local_c4;
  local_d0 = local_c0;
  FUN_00122c24();
  if ((char)local_c4 != '\0') {
    local_8 = PTR_SUB_004f8428;
    local_4 = PTR_DAT_004f8454;
    local_d4 = &local_8;
    local_d0 = (undefined **)0x1;
    local_cc = (undefined **)0x1;
    uVar1 = printerApi_common_logger_Debug();
    FUN_00098e14(uVar1,&local_b0,&stack0x0000000c);
    return;
  }
  local_d4 = in_stack_00000004;
  local_d0 = (undefined **)in_stack_00000008;
  FUN_00148fb4();
  if (local_c8 == (undefined **)0x0) {
    local_8 = PTR_SUB_004f8428;
    local_4 = PTR_DAT_004f842c;
    local_d4 = &local_8;
    local_d0 = (undefined **)0x1;
    local_cc = (undefined **)0x1;
    printerApi_common_logger_Info();
    local_b0 = (undefined **)((int)local_b0 + 1);
    local_d4 = local_8c;
    local_d0 = local_b4;
    FUN_00129904();
    if (local_cc == (undefined **)0x0) {
      local_8 = PTR_SUB_004f8428;
      local_4 = PTR_DAT_004f8434;
      local_d4 = &local_8;
      local_d0 = (undefined **)0x1;
      local_cc = (undefined **)0x1;
      printerApi_common_logger_Info();
      ppuVar2 = (undefined **)((int)local_ac + 1);
      local_ac = ppuVar2;
    }
    else {
      local_8 = *(undefined **)((int)local_cc + 4);
      local_4 = (undefined *)local_c8;
      local_d4 = (undefined **)PTR_DAT_004f8430;
      local_d0 = (undefined **)0x32;
      local_cc = &local_8;
      local_c8 = (undefined **)0x1;
      local_c4 = (undefined **)0x1;
      printerApi_common_logger_Warnf();
      ppuVar2 = (undefined **)((int)local_a8 + 1);
      local_a8 = ppuVar2;
    }
    FUN_00098e14(ppuVar2,auStack_88,&local_d4);
    FUN_0010327c();
    local_a4 = local_c0;
    local_a0 = local_bc;
    FUN_00098e14(local_c0,&local_b0,&stack0x0000000c);
    return;
  }
  local_9c = (undefined *)local_c8;
  local_74 = local_cc;
  local_d4 = local_cc;
  local_d0 = local_c8;
  printerApi_common_threemf_Get3mfTempGcodePath();
  if (local_c4 != (undefined **)0x0) {
    local_70 = local_c0;
    local_98 = local_c4;
    FUN_00098a28(0,&local_18);
    local_d4 = local_74;
    local_d0 = (undefined **)local_9c;
    FUN_0008a578();
    local_18 = PTR_SUB_004f8428;
    local_14 = local_cc;
    if (local_98 == (undefined **)0x0) {
      local_10 = (undefined *)0x0;
    }
    else {
      local_10 = local_98[1];
    }
    local_c = local_70;
    local_d4 = (undefined **)PTR_DAT_004f8438;
    local_d0 = (undefined **)0x35;
    local_cc = &local_18;
    local_c8 = (undefined **)0x2;
    local_c4 = (undefined **)0x2;
    uVar1 = printerApi_common_logger_Warnf();
    FUN_00098e14(uVar1,auStack_88,&local_d4);
    FUN_0010327c();
    local_a4 = local_c0;
    local_a0 = local_bc;
    FUN_00098e14(local_c0,&local_b0,&stack0x0000000c);
    return;
  }
  local_d4 = local_cc;
  local_d0 = local_c8;
  internal_filepathlite_Clean();
  local_6c = local_cc;
  local_94 = (undefined *)local_c8;
  local_d4 = local_cc;
  local_d0 = local_c8;
  internal_filepathlite_Dir();
  local_90 = local_cc;
  local_b8 = (undefined *)local_c8;
  local_d4 = local_74;
  local_d0 = (undefined **)local_9c;
  internal_filepathlite_Base();
  FUN_00098a28(0,&local_18,local_c8,local_cc);
  FUN_0008a578();
  local_18 = PTR_SUB_004f8428;
  local_14 = local_cc;
  local_d4 = local_6c;
  local_d0 = (undefined **)local_94;
  FUN_0008a578();
  local_10 = PTR_SUB_004f8428;
  local_c = local_cc;
  local_d4 = (undefined **)PTR_DAT_004f843c;
  local_d0 = (undefined **)0x30;
  local_cc = &local_18;
  local_c8 = (undefined **)0x2;
  local_c4 = (undefined **)0x2;
  printerApi_common_logger_Infof();
  FUN_00098a18(0,&local_38);
  local_38 = PTR_printerApi_service_poweroff_resume_CleanupOrphanTempFilesBeforePrint_func1_004f8440
  ;
  local_30 = local_b4;
  local_34 = local_8c;
  local_2c = &local_b0;
  local_24 = local_94;
  local_28 = local_6c;
  local_1c = local_b8;
  local_20 = local_90;
  local_d4 = local_8c;
  local_d0 = local_b4;
  local_cc = &local_38;
  FUN_00158ea0();
  uVar1 = 0;
  if (local_c8 != (undefined **)0x0) {
    local_8 = *(undefined **)((int)local_c8 + 4);
    local_4 = (undefined *)local_c4;
    local_d4 = (undefined **)PTR_DAT_004f8444;
    local_d0 = (undefined **)0x29;
    local_cc = &local_8;
    local_c8 = (undefined **)0x1;
    local_c4 = (undefined **)0x1;
    uVar1 = printerApi_common_logger_Warnf();
  }
  FUN_00098e14(uVar1,auStack_88,&local_d4);
  FUN_0010327c();
  local_a4 = local_c0;
  local_a0 = local_bc;
  if (((int)local_ac < 1) && ((int)local_a8 < 1)) {
    FUN_00098a18(0,&local_58);
    local_d4 = local_b0;
    FUN_0001cec0();
    local_58 = PTR_DAT_004f8448;
    local_54 = local_d0;
    local_d4 = local_ac;
    FUN_0001cec0();
    local_50 = PTR_DAT_004f8448;
    local_4c = local_d0;
    local_d4 = local_a8;
    FUN_0001cec0();
    local_48 = PTR_DAT_004f8448;
    local_44 = local_d0;
    local_d4 = local_a4;
    local_d0 = (undefined **)local_a0;
    FUN_0008a4bc();
    local_40 = PTR_DAT_004f844c;
    local_3c = local_cc;
    local_d4 = (undefined **)PTR_DAT_004f8450;
    local_d0 = (undefined **)0x41;
    local_cc = &local_58;
    local_c8 = (undefined **)0x4;
    local_c4 = (undefined **)0x4;
    uVar1 = printerApi_common_logger_Debugf();
  }
  else {
    FUN_00098a18(0,&local_58);
    local_d4 = local_b0;
    FUN_0001cec0();
    local_58 = PTR_DAT_004f8448;
    local_54 = local_d0;
    local_d4 = local_ac;
    FUN_0001cec0();
    local_50 = PTR_DAT_004f8448;
    local_4c = local_d0;
    local_d4 = local_a8;
    FUN_0001cec0();
    local_48 = PTR_DAT_004f8448;
    local_44 = local_d0;
    local_d4 = local_a4;
    local_d0 = (undefined **)local_a0;
    FUN_0008a4bc();
    local_40 = PTR_DAT_004f844c;
    local_3c = local_cc;
    local_d4 = (undefined **)PTR_DAT_004f8450;
    local_d0 = (undefined **)0x41;
    local_cc = &local_58;
    local_c8 = (undefined **)0x4;
    local_c4 = (undefined **)0x4;
    uVar1 = printerApi_common_logger_Infof();
  }
  FUN_00098e14(uVar1,&local_b0,&stack0x0000000c);
  return;
}



/* printerApi/service/poweroff_resume.CleanupOrphanTempFilesBeforePrint.func1 @ 004f8458 (size 1700) */

/* WARNING: Removing unreachable block (ram,0x004f85b0) */
/* WARNING: Removing unreachable block (ram,0x004f87d8) */

void printerApi_service_poweroff_resume_CleanupOrphanTempFilesBeforePrint_func1(undefined4 param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint extraout_r2;
  uint extraout_r2_00;
  int iVar10;
  char cVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int unaff_r7;
  int unaff_r10;
  undefined1 *puVar16;
  undefined4 unaff_lr;
  undefined1 uVar17;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar16 = (undefined1 *)((int)register0x00000054 + -0x80);
      *(undefined4 *)((int)register0x00000054 + -0x80) = unaff_lr;
      uVar3 = *(undefined4 *)(unaff_r7 + 0x14);
      uVar6 = *(undefined4 *)(unaff_r7 + 0x18);
      uVar8 = *(undefined4 *)(unaff_r7 + 0x1c);
      uVar12 = *(undefined4 *)(unaff_r7 + 0x10);
      if (*(int *)((int)register0x00000054 + 0x14) != 0) {
        *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x004f8ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x80))();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)(unaff_r7 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x34) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x24) = uVar12;
      *(undefined4 *)((int)register0x00000054 + -0x30) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x20) = uVar6;
      iVar15 = *(int *)((int)register0x00000054 + 8);
      if (iVar15 == *(int *)(unaff_r7 + 8)) {
        uVar3 = *(undefined4 *)(unaff_r7 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x7c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x78) = uVar3;
        *(int *)((int)register0x00000054 + -0x74) = iVar15;
        FUN_000150d4();
        if (*(char *)((int)register0x00000054 + -0x70) != '\0') {
          *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
          return;
        }
        iVar15 = *(int *)((int)register0x00000054 + 8);
      }
      *(undefined4 *)((int)register0x00000054 + -0x7c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x78) = iVar15;
      internal_filepathlite_Clean();
      piVar4 = *(int **)((int)register0x00000054 + -4);
      iVar15 = *piVar4;
      uVar9 = *(uint *)((int)register0x00000054 + -0x70);
      *(uint *)((int)register0x00000054 + -0x3c) = uVar9;
      iVar10 = *(int *)((int)register0x00000054 + -0x74);
      *(int *)((int)register0x00000054 + -0x2c) = iVar10;
      *piVar4 = iVar15 + 1;
      uVar7 = *(uint *)((int)register0x00000054 + -0x34);
      if (uVar9 == uVar7) {
        *(int *)((int)register0x00000054 + -0x7c) = iVar10;
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(uint *)((int)register0x00000054 + -0x74) = uVar9;
        FUN_000150d4();
        if (*(char *)((int)register0x00000054 + -0x70) != '\0') {
          uVar9 = *(uint *)((int)register0x00000054 + -0x3c);
          iVar10 = *(int *)((int)register0x00000054 + -0x2c);
          bVar1 = true;
LAB_004f87b0:
          if (bVar1) {
            *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + -8) = 0;
            *(int *)((int)register0x00000054 + -0x7c) = iVar10;
            *(uint *)((int)register0x00000054 + -0x78) = uVar9;
            FUN_0008a578();
            *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_004f8b0c;
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0x74);
            *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_004f8b2c;
            *(undefined4 *)((int)register0x00000054 + -0x78) = 0x2a;
            *(undefined1 **)((int)register0x00000054 + -0x74) =
                 (undefined1 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0x70) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x6c) = 1;
            printerApi_common_logger_Debugf();
            *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
            return;
          }
          pcVar5 = *(code **)(*(int *)((int)register0x00000054 + 0xc) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          (*pcVar5)();
          if (*(char *)((int)register0x00000054 + -0x78) == '\0') {
            *(undefined4 *)((int)register0x00000054 + -0x7c) =
                 *(undefined4 *)((int)register0x00000054 + -0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x78) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            FUN_00127c60();
            iVar15 = *(int *)((int)register0x00000054 + -0x74);
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x70);
            if (iVar15 == 0) {
              *(undefined4 *)((int)register0x00000054 + -0x28) = uVar3;
              *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
              *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
              *(undefined4 *)((int)register0x00000054 + -8) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x7c) =
                   *(undefined4 *)((int)register0x00000054 + -0x2c);
              *(undefined4 *)((int)register0x00000054 + -0x78) =
                   *(undefined4 *)((int)register0x00000054 + -0x3c);
              FUN_0008a578();
              *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_004f8b0c;
              *(undefined4 *)((int)register0x00000054 + -8) =
                   *(undefined4 *)((int)register0x00000054 + -0x74);
              *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_004f8b1c;
              *(undefined4 *)((int)register0x00000054 + -0x78) = 0x27;
              *(undefined1 **)((int)register0x00000054 + -0x74) =
                   (undefined1 *)((int)register0x00000054 + -0xc);
              *(undefined4 *)((int)register0x00000054 + -0x70) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x6c) = 1;
              printerApi_common_logger_Infof();
              *(int *)(*(int *)((int)register0x00000054 + -4) + 4) =
                   *(int *)(*(int *)((int)register0x00000054 + -4) + 4) + 1;
              iVar15 = *(int *)((int)register0x00000054 + -0x38);
              uVar3 = *(undefined4 *)((int)register0x00000054 + -0x28);
            }
          }
          else {
            *(undefined4 *)((int)register0x00000054 + -0x7c) =
                 *(undefined4 *)((int)register0x00000054 + -0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x78) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            FUN_00129904();
            iVar15 = *(int *)((int)register0x00000054 + -0x74);
            if (iVar15 == 0) {
              *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
              *(undefined4 *)((int)register0x00000054 + -8) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x7c) =
                   *(undefined4 *)((int)register0x00000054 + -0x2c);
              *(undefined4 *)((int)register0x00000054 + -0x78) =
                   *(undefined4 *)((int)register0x00000054 + -0x3c);
              FUN_0008a578();
              *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_004f8b0c;
              *(undefined4 *)((int)register0x00000054 + -8) =
                   *(undefined4 *)((int)register0x00000054 + -0x74);
              *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_004f8b10;
              *(undefined4 *)((int)register0x00000054 + -0x78) = 0x26;
              *(undefined1 **)((int)register0x00000054 + -0x74) =
                   (undefined1 *)((int)register0x00000054 + -0xc);
              *(undefined4 *)((int)register0x00000054 + -0x70) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x6c) = 1;
              printerApi_common_logger_Infof();
              *(int *)(*(int *)((int)register0x00000054 + -4) + 4) =
                   *(int *)(*(int *)((int)register0x00000054 + -4) + 4) + 1;
              uVar3 = *DAT_004f8b18;
              *(undefined4 *)((int)register0x00000054 + 0x1c) = *DAT_004f8b14;
              *(undefined4 *)((int)register0x00000054 + 0x20) = uVar3;
              return;
            }
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x70);
          }
          *(undefined4 *)((int)register0x00000054 + -0x28) = uVar3;
          *(int *)((int)register0x00000054 + -0x38) = iVar15;
          if (iVar15 == 0) {
            bVar2 = 0;
          }
          else {
            uVar6 = *DAT_004f8b20;
            uVar8 = *DAT_004f8b24;
            *(int *)((int)register0x00000054 + -0x7c) = iVar15;
            *(undefined4 *)((int)register0x00000054 + -0x78) = uVar3;
            *(undefined4 *)((int)register0x00000054 + -0x74) = uVar6;
            *(undefined4 *)((int)register0x00000054 + -0x70) = uVar8;
            FUN_00122c24();
            bVar2 = *(byte *)((int)register0x00000054 + -0x6c) ^ 1;
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x28);
          }
          if (bVar2 != 0) {
            FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x1c),uVar3);
            *(undefined4 *)((int)register0x00000054 + -0x7c) =
                 *(undefined4 *)((int)register0x00000054 + -0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x78) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            FUN_0008a578();
            *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_004f8b0c;
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -0x74);
            if (*(int *)((int)register0x00000054 + -0x38) == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x38) + 4);
            }
            *(undefined4 *)((int)register0x00000054 + -0x14) = uVar3;
            *(undefined4 *)((int)register0x00000054 + -0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x28);
            *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_004f8b28;
            *(undefined4 *)((int)register0x00000054 + -0x78) = 0x2e;
            *(undefined1 **)((int)register0x00000054 + -0x74) =
                 (undefined1 *)((int)register0x00000054 + -0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x70) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x6c) = 2;
            printerApi_common_logger_Warnf();
            *(int *)(*(int *)((int)register0x00000054 + -4) + 8) =
                 *(int *)(*(int *)((int)register0x00000054 + -4) + 8) + 1;
          }
          *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
          return;
        }
        piVar4 = *(int **)((int)register0x00000054 + -4);
        uVar7 = *(uint *)((int)register0x00000054 + -0x34);
        uVar9 = *(uint *)((int)register0x00000054 + -0x3c);
        iVar10 = *(int *)((int)register0x00000054 + -0x2c);
      }
      if ((int)uVar9 < 4) {
        cVar11 = '\0';
LAB_004f85a8:
        if (cVar11 == '\0') {
          cVar11 = '\0';
LAB_004f86dc:
          if (cVar11 == '\0') {
            *(undefined1 **)((int)register0x00000054 + -0x7c) =
                 (undefined1 *)((int)register0x00000054 + -0x60);
            *(undefined4 *)((int)register0x00000054 + -0x78) =
                 *(undefined4 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)((int)register0x00000054 + -0x74) =
                 *(undefined4 *)((int)register0x00000054 + -0x30);
            *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_004f8b08;
            *(undefined4 *)((int)register0x00000054 + -0x6c) = 1;
            FUN_000715a4();
            uVar9 = *(uint *)((int)register0x00000054 + -0x3c);
            if ((int)uVar9 < *(int *)((int)register0x00000054 + -100)) {
              cVar11 = '\0';
            }
            else {
              *(undefined4 *)((int)register0x00000054 + -0x7c) =
                   *(undefined4 *)((int)register0x00000054 + -0x2c);
              *(undefined4 *)((int)register0x00000054 + -0x78) =
                   *(undefined4 *)((int)register0x00000054 + -0x68);
              *(int *)((int)register0x00000054 + -0x74) = *(int *)((int)register0x00000054 + -100);
              FUN_000150d4();
              cVar11 = *(char *)((int)register0x00000054 + -0x70);
              uVar9 = *(uint *)((int)register0x00000054 + -0x3c);
            }
            if (cVar11 == '\0') {
              if (uVar9 == *(uint *)((int)register0x00000054 + -0x30)) {
                *(undefined4 *)((int)register0x00000054 + -0x7c) =
                     *(undefined4 *)((int)register0x00000054 + -0x2c);
                *(undefined4 *)((int)register0x00000054 + -0x78) =
                     *(undefined4 *)((int)register0x00000054 + -0x20);
                *(uint *)((int)register0x00000054 + -0x74) = uVar9;
                FUN_000150d4();
                cVar11 = *(char *)((int)register0x00000054 + -0x70);
                uVar9 = *(uint *)((int)register0x00000054 + -0x3c);
              }
              else {
                cVar11 = '\0';
              }
              if (cVar11 != '\0') goto LAB_004f8794;
              bVar1 = false;
            }
            else {
LAB_004f8794:
              bVar1 = true;
            }
            iVar10 = *(int *)((int)register0x00000054 + -0x2c);
          }
          else {
            bVar1 = true;
          }
          goto LAB_004f87b0;
        }
        if ((int)uVar9 < 4) {
          cVar11 = '\0';
LAB_004f8604:
          uVar13 = uVar9;
          if (cVar11 == '\0') {
LAB_004f8620:
            if ((int)uVar7 < 6) {
              cVar11 = '\0';
LAB_004f8680:
              uVar14 = uVar7;
              if (cVar11 != '\0') {
                uVar14 = uVar7 - 6;
                uVar17 = uVar7 == uVar14;
                if (uVar7 < uVar14) {
                  FUN_00098718(piVar4,uVar14,uVar7);
                  goto LAB_004f8ac4;
                }
              }
              if (uVar14 == uVar13) {
                *(int *)((int)register0x00000054 + -0x7c) = iVar10;
                *(undefined4 *)((int)register0x00000054 + -0x78) =
                     *(undefined4 *)((int)register0x00000054 + -0x24);
                *(uint *)((int)register0x00000054 + -0x74) = uVar13;
                FUN_000150d4();
                cVar11 = *(char *)((int)register0x00000054 + -0x70);
                uVar9 = *(uint *)((int)register0x00000054 + -0x3c);
                iVar10 = *(int *)((int)register0x00000054 + -0x2c);
              }
              else {
                cVar11 = '\0';
              }
              goto LAB_004f86dc;
            }
            uVar14 = uVar7 - 6;
            uVar17 = uVar7 == uVar14;
            if (uVar14 <= uVar7) {
              *(uint *)((int)register0x00000054 + -0x40) = uVar13;
              *(uint *)((int)register0x00000054 + -0x7c) =
                   uVar14 + *(int *)((int)register0x00000054 + -0x24);
              *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_004f8b04;
              *(undefined4 *)((int)register0x00000054 + -0x74) = 6;
              FUN_000150d4();
              cVar11 = *(char *)((int)register0x00000054 + -0x70);
              uVar7 = *(uint *)((int)register0x00000054 + -0x34);
              uVar9 = *(uint *)((int)register0x00000054 + -0x3c);
              iVar10 = *(int *)((int)register0x00000054 + -0x2c);
              uVar13 = *(uint *)((int)register0x00000054 + -0x40);
              piVar4 = *(int **)((int)register0x00000054 + -4);
              goto LAB_004f8680;
            }
LAB_004f8ac4:
            piVar4 = (int *)FUN_00098758(uVar14);
          }
          else {
            uVar13 = uVar9 - 4;
            uVar17 = uVar9 == uVar13;
            if (uVar13 <= uVar9) goto LAB_004f8620;
          }
          FUN_00098718(piVar4,uVar13);
          uVar9 = extraout_r2;
        }
        else {
          uVar13 = uVar9 - 4;
          uVar17 = uVar9 == uVar13;
          if (uVar13 <= uVar9) {
            *(uint *)((int)register0x00000054 + -0x7c) = iVar10 + uVar13;
            *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_004f8b00;
            *(undefined4 *)((int)register0x00000054 + -0x74) = 4;
            FUN_000150d4();
            cVar11 = *(char *)((int)register0x00000054 + -0x70);
            uVar7 = *(uint *)((int)register0x00000054 + -0x34);
            uVar9 = *(uint *)((int)register0x00000054 + -0x3c);
            iVar10 = *(int *)((int)register0x00000054 + -0x2c);
            piVar4 = *(int **)((int)register0x00000054 + -4);
            goto LAB_004f8604;
          }
        }
        FUN_00098758(uVar13,uVar9);
        uVar9 = extraout_r2_00;
      }
      else {
        uVar13 = uVar9 - 4;
        uVar17 = uVar9 == uVar13;
        if (uVar13 <= uVar9) {
          *(uint *)((int)register0x00000054 + -0x7c) = iVar10 + uVar13;
          *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_004f8b00;
          *(undefined4 *)((int)register0x00000054 + -0x74) = 4;
          FUN_000150d4();
          cVar11 = *(char *)((int)register0x00000054 + -0x70);
          uVar7 = *(uint *)((int)register0x00000054 + -0x34);
          uVar9 = *(uint *)((int)register0x00000054 + -0x3c);
          iVar10 = *(int *)((int)register0x00000054 + -0x2c);
          piVar4 = *(int **)((int)register0x00000054 + -4);
          goto LAB_004f85a8;
        }
      }
      param_1 = FUN_00098758(uVar13,uVar9);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x80);
      if ((bool)uVar17) {
        register0x00000054 = (BADSPACEBASE *)puVar16;
      }
    }
    unaff_lr = 0x4f8af8;
    param_1 = FUN_00096b54(param_1);
  } while( true );
}



/* printerApi/service/poweroff_resume.(*PoweroffResumeState).MarkResumePrint @ 004f8b30 (size 16) */

void printerApi_service_poweroff_resume___PoweroffResumeState__MarkResumePrint(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 0x78) = 1;
                    /* WARNING: Could not recover jumptable at 0x004f8b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/poweroff_resume.(*PoweroffResumeState).MarkCancelPrint @ 004f8b40 (size 16) */

void printerApi_service_poweroff_resume___PoweroffResumeState__MarkCancelPrint(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 0x79) = 1;
                    /* WARNING: Could not recover jumptable at 0x004f8b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/poweroff_resume.(*PoweroffResumeState).CanContinue @ 004f8b50 (size 28) */

void printerApi_service_poweroff_resume___PoweroffResumeState__CanContinue(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *in_stack_00000004 == 1;
                    /* WARNING: Could not recover jumptable at 0x004f8b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/poweroff_resume.(*PoweroffResumeState).IsMarkedResumePrint @ 004f8b6c (size 36) */

void printerApi_service_poweroff_resume___PoweroffResumeState__IsMarkedResumePrint(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined1 uStack00000008;
  
  if (*in_stack_00000004 == 1) {
    uStack00000008 = (undefined1)in_stack_00000004[0x1e];
  }
  else {
    uStack00000008 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004f8b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/poweroff_resume.(*PoweroffResumeState).IsMarkedCancelPrint @ 004f8b90 (size 36) */

void printerApi_service_poweroff_resume___PoweroffResumeState__IsMarkedCancelPrint(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined1 uStack00000008;
  
  if (*in_stack_00000004 == 1) {
    uStack00000008 = *(undefined1 *)((int)in_stack_00000004 + 0x79);
  }
  else {
    uStack00000008 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004f8bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/poweroff_resume.GetPrintRecord @ 004f8bb4 (size 1296) */

/* WARNING: Removing unreachable block (ram,0x004f9050) */

void printerApi_service_poweroff_resume_GetPrintRecord(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int unaff_r10;
  undefined4 unaff_lr;
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
  undefined1 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 in_stack_ffffff94;
  int iVar6;
  int local_64;
  undefined4 local_60;
  undefined1 local_14 [8];
  undefined *local_c;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4f90c0;
    FUN_00096bb8();
  }
  uVar1 = FUN_00098a00(0,&stack0x00000004);
  iVar3 = *(int *)(*(int *)(*(int *)PTR_DAT_004f90c8 + 8) + 0x1ac);
  if (iVar3 == 0) {
    iVar3 = 0x15;
    puVar2 = PTR_s__useremain__cache_apiflag__q_beg_0077f80f_0x5c_004f90cc;
  }
  else {
    puVar2 = *(undefined **)(*(int *)(*(int *)PTR_DAT_004f90c8 + 8) + 0x1a8);
  }
  FUN_00098a28(uVar1,local_14,puVar2,iVar3,unaff_lr);
  local_8 = 0xc;
  local_c = PTR_DAT_004f90d0;
  uVar5 = 2;
  FUN_00159184();
  printerApi_common_file_FileExist();
  if ((uVar5 & 0xff) == 0) {
    FUN_00098a00(0,&stack0x00000004);
    return;
  }
  FUN_00125de4();
  if (local_64 != 0) {
    FUN_00098a00(0,&stack0x00000004,local_60,local_64,unaff_lr,in_stack_ffffff94);
    return;
  }
  FUN_0001eed8();
  FUN_0016a168();
  iVar3 = 6;
  FUN_00021c74();
  printerApi_common_utils_cast_ToStringE();
  iVar6 = 9;
  FUN_00021c74();
  printerApi_common_utils_cast_ToStringE();
  if ((iVar3 == 0) && (iVar6 == 0)) {
    puVar4 = (undefined4 *)&DAT_00000023;
    printerApi_common_logger_Errorf();
    FUN_0001eed8();
    puVar4[1] = 0x23;
    *puVar4 = PTR_DAT_004f90e8;
    FUN_00098a00(0,&stack0x00000004,puVar4);
    return;
  }
  FUN_00021c74();
  printerApi_common_utils_cast_ToStringE();
  FUN_00021c74();
  printerApi_common_utils_cast_ToStringE();
  FUN_00021c74();
  printerApi_common_utils_cast_ToStringE();
  FUN_00021c74();
  printerApi_common_utils_cast_ToStringE();
  FUN_00021c74();
  printerApi_common_utils_cast_ToBoolE();
  puVar2 = PTR_DAT_004f9108;
  FUN_00021c74();
  printerApi_common_utils_cast_ToIntE();
  FUN_00098a00(0,&stack0x00000004,puVar2);
  return;
}



/* printerApi/service/poweroff_resume.resumeGuardPath @ 004f9114 (size 176) */

void printerApi_service_poweroff_resume_resumeGuardPath(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_10 [8];
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4f91c0;
    FUN_00096bb8();
  }
  iVar2 = *(int *)(*(int *)(*DAT_004f91c8 + 8) + 0x1ac);
  if (iVar2 == 0) {
    iVar2 = 0x15;
    uVar1 = DAT_004f91cc;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(*DAT_004f91c8 + 8) + 0x1a8);
  }
  internal_filepathlite_Clean();
  FUN_00098a28(0,local_10,local_18,local_1c,unaff_lr,uVar1,iVar2);
  local_4 = 0x11;
  local_8 = DAT_004f91d0;
  FUN_00159184();
  return;
}



/* printerApi/service/poweroff_resume.WriteResumeGuard @ 004f91d4 (size 1776) */

void printerApi_service_poweroff_resume_WriteResumeGuard(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *extraout_r2;
  undefined4 *puVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined1 ***local_e4;
  undefined4 **local_e0;
  undefined4 **local_dc;
  undefined4 **local_d8;
  int local_d4;
  undefined4 **local_d0;
  undefined4 local_cc;
  int local_c4;
  undefined4 **local_c0;
  int local_bc;
  undefined4 local_b8;
  int local_b4;
  undefined4 **local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  int local_a0;
  uint local_9c;
  undefined4 **local_98;
  undefined4 **local_94;
  undefined4 **local_90;
  undefined4 **local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  int local_7c;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68 [2];
  undefined *local_60;
  undefined4 **local_5c;
  undefined4 **local_58;
  undefined4 **local_54;
  undefined *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 **local_44;
  undefined4 local_40;
  undefined4 **local_3c;
  undefined4 local_38;
  undefined4 **local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined1 auStack_20 [20];
  undefined4 *local_c;
  undefined4 **local_8;
  undefined4 *local_4;
  
  while (local_68 <= *(int **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_e4 = (undefined1 ***)PTR_DAT_004f98c8;
  FUN_0001eed8();
  local_4 = local_e0;
  uVar1 = 0;
  if (*(int *)PTR_DAT_004f98cc != 0) {
    local_e4 = (undefined1 ***)PTR_DAT_004f98c8;
    local_dc = (undefined4 **)&stack0x00000004;
    uVar1 = FUN_00022914();
  }
  FUN_00098da4(uVar1,&stack0x00000004,local_4);
  local_e0 = *(undefined4 ***)(*(int *)(*(int *)PTR_DAT_004f98d0 + 8) + 0x1ac);
  if (local_e0 == (undefined4 **)0x0) {
    local_e0 = (undefined4 **)0x15;
    local_e4 = (undefined1 ***)PTR_s__useremain__cache_apiflag__q_beg_0077f80f_0x5c_004f98d4;
  }
  else {
    local_e4 = *(undefined1 ****)(*(int *)(*(int *)PTR_DAT_004f98d0 + 8) + 0x1a8);
  }
  internal_filepathlite_Clean();
  local_94 = local_dc;
  local_c0 = local_d8;
  local_e4 = (undefined1 ***)local_dc;
  local_e0 = local_d8;
  printerApi_common_file_CreateDirIfNoexist();
  if ((undefined1 ***)local_dc != (undefined1 ***)0x0) {
    local_c = local_dc[1];
    local_8 = local_d8;
    local_e4 = (undefined1 ***)PTR_DAT_004f98d8;
    local_e0 = (undefined4 **)0x14;
    local_dc = &local_c;
    local_d8 = (undefined4 **)0x1;
    local_d4 = 1;
    FUN_00130144();
    return;
  }
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,&local_e4,auStack_20);
  FUN_00098e14(uVar1,auStack_20,&local_74);
  if ((local_70 & 0x80000000) != 0) {
    uVar3 = (local_74 & 0x7fffffff) >> 0x1e | (local_74 >> 0x1f | local_70 << 1) << 1;
    local_6c = uVar3 + DAT_004f98dc;
    local_68[0] = ((local_70 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar3,DAT_004f98dc);
  }
  iVar4 = local_6c + DAT_004f98e0;
  iVar2 = local_68[0] + -0xf + (uint)CARRY4(local_6c,DAT_004f98e0);
  if (local_4[0xd] == 0 && local_4[0xc] == 0) {
    local_4[0xc] = iVar4;
    local_4[0xd] = iVar2;
  }
  local_4[0xe] = iVar4;
  local_4[0xf] = iVar2;
  if ((int)local_4[0x11] < 0 || local_4[0x11] == 0 && local_4[0x10] == 0) {
    local_4[0x10] = DAT_004f98e4;
    local_4[0x11] = 0;
  }
  puVar5 = local_4;
  if (local_4[0xb] == 0) {
    local_4[0xb] = 8;
    if (*(int *)PTR_DAT_004f98cc != 0) {
      uVar1 = FUN_00098678(local_4[10]);
      *unaff_r8 = uVar1;
      puVar5 = extraout_r2;
    }
    puVar5[10] = PTR_s_printingresumingstoppingfinished_00774847_0xa1e_004f98e8;
  }
  local_e4 = (undefined1 ***)PTR_DAT_004f98ec;
  local_e0 = (undefined4 **)puVar5;
  FUN_001707f4();
  if ((undefined1 ***)local_d0 == (undefined1 ***)0x0) {
    local_ac = local_d4;
    local_b0 = local_d8;
    local_5c = local_dc;
    FUN_00098a28(0,&local_58);
    local_54 = local_c0;
    local_58 = local_94;
    local_4c = 0x11;
    local_50 = PTR_DAT_004f98f0;
    local_e4 = (undefined1 ***)&local_58;
    local_e0 = (undefined4 **)0x2;
    local_dc = (undefined4 **)0x2;
    FUN_00159184();
    local_98 = local_d8;
    local_c4 = local_d4;
    local_e4 = (undefined1 ***)0x0;
    local_e0 = local_d8;
    local_dc = (undefined4 **)local_d4;
    local_d8 = (undefined4 **)PTR_DAT_004f98f4;
    local_d4 = 6;
    FUN_000715a4();
    local_e4 = (undefined1 ***)local_d0;
    local_e0 = (undefined4 **)local_cc;
    local_dc = (undefined4 **)0x0;
    FUN_001575d0();
    if (local_d4 != 0) {
      local_b4 = local_d4;
      local_60 = (undefined *)local_d8;
      iVar2 = 0;
      while (iVar2 < local_b4) {
        local_e4 = *(undefined1 ****)(local_60 + iVar2 * 8);
        local_e0 = *(undefined4 ***)(local_60 + iVar2 * 8 + 4);
        local_a8 = iVar2;
        FUN_00127c60();
        iVar2 = local_a8 + 1;
      }
    }
    uVar1 = FUN_0010cf30();
    uVar1 = FUN_00098e14(uVar1,&local_e4,auStack_20);
    FUN_00098e14(uVar1,auStack_20,&local_88);
    if ((local_84 & 0x80000000) != 0) {
      uVar3 = (local_88 & 0x7fffffff) >> 0x1e | (local_88 >> 0x1f | local_84 << 1) << 1;
      local_80 = uVar3 + DAT_004f98dc;
      local_7c = ((local_84 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar3,DAT_004f98dc);
    }
    local_9c = (uint)((ulonglong)DAT_004f98fc * (ulonglong)local_80);
    local_a0 = local_7c * DAT_004f98fc +
               (int)((ulonglong)DAT_004f98fc * (ulonglong)local_80 >> 0x20);
    local_a4 = local_88 & 0x3fffffff;
    FUN_00098a28(0,&local_30);
    local_e4 = (undefined1 ***)local_98;
    local_e0 = (undefined4 **)local_c4;
    FUN_0008a578();
    local_30 = DAT_004f9900;
    local_2c = local_dc;
    local_e4 = (undefined1 ***)(local_a4 + local_9c + DAT_004f9904);
    local_e0 = (undefined4 **)
               (local_a0 + ((int)local_a4 >> 0x1f) + (uint)CARRY4(local_a4,local_9c) + DAT_004f9908
               + (uint)CARRY4(local_a4 + local_9c,DAT_004f9904));
    FUN_0008a4bc();
    local_28 = PTR_DAT_004f990c;
    local_24 = local_dc;
    local_e4 = (undefined1 ***)PTR_s__s_tmp__duuid_fdm_modelNameProc__0077568d_0xd65_004f9910;
    local_e0 = (undefined4 **)0x9;
    local_dc = (undefined4 **)&local_30;
    local_d8 = (undefined4 **)0x2;
    local_d4 = 2;
    FUN_001331ac();
    local_8c = local_d0;
    local_b8 = local_cc;
    local_e4 = (undefined1 ***)local_d0;
    local_e0 = (undefined4 **)local_cc;
    local_dc = local_5c;
    local_d8 = local_b0;
    local_d4 = local_ac;
    printerApi_common_file_WriteFileWithSync();
    if ((undefined1 ***)local_d0 != (undefined1 ***)0x0) {
      local_c = local_d0[1];
      local_8 = (undefined4 **)local_cc;
      local_e4 = (undefined1 ***)PTR_DAT_004f9914;
      local_e0 = (undefined4 **)0x1a;
      local_dc = &local_c;
      local_d8 = (undefined4 **)0x1;
      local_d4 = 1;
      FUN_00130144();
      return;
    }
    local_e4 = (undefined1 ***)local_8c;
    local_e0 = (undefined4 **)local_b8;
    local_dc = local_98;
    local_d8 = (undefined4 **)local_c4;
    FUN_00126cb0();
    if (local_d4 != 0) {
      local_bc = local_d4;
      local_90 = local_d0;
      local_e4 = (undefined1 ***)local_8c;
      local_e0 = (undefined4 **)local_b8;
      FUN_00127c60();
      local_c = (undefined4 *)0x0;
      if (local_bc != 0) {
        local_c = *(undefined4 **)(local_bc + 4);
      }
      local_8 = local_90;
      local_e4 = (undefined1 ***)PTR_DAT_004f9918;
      local_e0 = (undefined4 **)0x17;
      local_dc = &local_c;
      local_d8 = (undefined4 **)0x1;
      local_d4 = 1;
      FUN_00130144();
      return;
    }
    FUN_00098a20(0,&local_48);
    local_e4 = (undefined1 ***)local_4[10];
    local_e0 = (undefined4 **)local_4[0xb];
    FUN_0008a578();
    local_48 = DAT_004f9900;
    local_44 = local_dc;
    local_e4 = (undefined1 ***)*local_4;
    local_e0 = (undefined4 **)local_4[1];
    FUN_0008a578();
    local_40 = DAT_004f9900;
    local_3c = local_dc;
    local_e4 = (undefined1 ***)local_4[4];
    local_e0 = (undefined4 **)local_4[5];
    FUN_0008a578();
    local_38 = DAT_004f9900;
    local_34 = local_dc;
    local_e4 = (undefined1 ***)PTR_DAT_004f991c;
    local_e0 = (undefined4 **)0x33;
    local_dc = (undefined4 **)&local_48;
    local_d8 = (undefined4 **)0x3;
    local_d4 = 3;
    printerApi_common_logger_Debugf();
    return;
  }
  local_c = local_d0[1];
  local_8 = (undefined4 **)local_cc;
  local_e4 = (undefined1 ***)PTR_DAT_004f98f8;
  local_e0 = (undefined4 **)0x18;
  local_dc = &local_c;
  local_d8 = (undefined4 **)0x1;
  local_d4 = 1;
  FUN_00130144();
  return;
}



/* printerApi/service/poweroff_resume.ReadResumeGuard @ 004f9920 (size 332) */

/* WARNING: Removing unreachable block (ram,0x004f99b4) */

void printerApi_service_poweroff_resume_ReadResumeGuard(void)

{
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_ffffffd0;
  int local_20;
  undefined4 local_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4f9a68;
    FUN_00096bb8();
  }
  FUN_000989ec(0,&stack0x00000004);
  printerApi_service_poweroff_resume_resumeGuardPath();
  FUN_00125de4();
  if (local_20 == 0) {
    FUN_0001eed8();
    FUN_0016a168();
    FUN_00098da4(0,in_stack_ffffffd0,&stack0x00000004);
    return;
  }
  FUN_000989ec(0,&stack0x00000004,local_20,local_1c,unaff_lr);
  return;
}



/* printerApi/service/poweroff_resume.DeleteResumeGuard @ 004f9a7c (size 364) */

void printerApi_service_poweroff_resume_DeleteResumeGuard(void)

{
  int iVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_3c;
  undefined1 local_34;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_service_poweroff_resume_resumeGuardPath();
  FUN_00127c60();
  if ((local_3c != 0) && (FUN_000a2c04(), local_34 == '\0')) {
    return;
  }
  FUN_000715a4();
  FUN_001575d0();
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    FUN_00127c60();
  }
  printerApi_common_logger_Debug();
  return;
}



/* printerApi/service/poweroff_resume.UpdateResumeGuardTimelapse @ 004f9c00 (size 232) */

void printerApi_service_poweroff_resume_UpdateResumeGuardTimelapse(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  int local_f4 [2];
  undefined4 local_ec;
  undefined4 local_e8;
  char local_e4;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined1 auStack_9c [36];
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined1 auStack_4c [76];
  
  while( true ) {
    if (*(undefined1 **)(unaff_r10 + 8) < auStack_78) break;
    unaff_lr = 0x4f9ce4;
    FUN_00096bb8();
  }
  FUN_000989ec(0,auStack_4c);
  uVar1 = printerApi_service_poweroff_resume_ReadResumeGuard();
  local_a0 = local_a8;
  uVar1 = FUN_00098da4(uVar1,local_f4,auStack_4c,local_a4,unaff_lr);
  FUN_00098da4(uVar1,auStack_4c,auStack_9c);
  if (local_a0 != 0) {
    local_ec = *DAT_004f9cec;
    local_e8 = *DAT_004f9cf0;
    local_f4[0] = local_a0;
    FUN_000a2c04();
    if (local_e4 != '\0') {
      return;
    }
    return;
  }
  local_54 = in_stack_00000004;
  FUN_00098da4(in_stack_00000004,auStack_9c,local_f4);
  printerApi_service_poweroff_resume_WriteResumeGuard();
  return;
}



/* printerApi/service/poweroff_resume.UpdateResumeGuardState @ 004f9cf4 (size 240) */

void printerApi_service_poweroff_resume_UpdateResumeGuardState(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int local_f4 [2];
  undefined4 local_ec;
  undefined4 local_e8;
  char local_e4;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined1 auStack_9c [36];
  undefined1 auStack_78 [4];
  undefined4 local_74;
  undefined4 local_70;
  undefined1 auStack_4c [76];
  
  while( true ) {
    if (*(undefined1 **)(unaff_r10 + 8) < auStack_78) break;
    unaff_lr = 0x4f9de0;
    FUN_00096bb8();
  }
  FUN_000989ec(0,auStack_4c);
  uVar1 = printerApi_service_poweroff_resume_ReadResumeGuard();
  local_a0 = local_a8;
  uVar1 = FUN_00098da4(uVar1,local_f4,auStack_4c,local_a4,unaff_lr);
  FUN_00098da4(uVar1,auStack_4c,auStack_9c);
  if (local_a0 != 0) {
    local_ec = *DAT_004f9de8;
    local_e8 = *DAT_004f9dec;
    local_f4[0] = local_a0;
    FUN_000a2c04();
    if (local_e4 != '\0') {
      return;
    }
    return;
  }
  local_74 = in_stack_00000004;
  local_70 = in_stack_00000008;
  FUN_00098da4(in_stack_00000008,auStack_9c,local_f4);
  printerApi_service_poweroff_resume_WriteResumeGuard();
  return;
}



/* printerApi/service/poweroff_resume.hasValidResumeGuard @ 004f9df0 (size 1600) */

void printerApi_service_poweroff_resume_hasValidResumeGuard(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_r3;
  int iVar4;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 *local_18c;
  int local_188;
  undefined4 *local_184;
  undefined4 *local_180;
  uint local_17c;
  undefined4 *local_140;
  undefined4 local_13c;
  uint local_138;
  uint local_134;
  int local_130;
  int local_12c;
  uint local_128;
  int local_124;
  int local_120;
  undefined4 *local_11c;
  uint local_118;
  int local_114;
  uint local_110;
  int local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  int local_fc;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  int local_e8;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  int local_d4;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  undefined4 *local_b8;
  undefined1 auStack_b4 [4];
  int local_b0;
  int local_a8;
  int local_a0;
  int local_98;
  int local_90;
  undefined4 *local_8c;
  int local_88;
  uint local_84;
  int local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  int local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined *local_60;
  undefined4 local_5c;
  int local_58;
  undefined *local_54;
  int local_50;
  undefined1 auStack_4c [76];
  
  while (&local_110 <= *(uint **)(unaff_r10 + 8)) {
    unaff_lr = 0x4fa42c;
    FUN_00096bb8();
  }
  FUN_000989ec(0,auStack_4c);
  uVar1 = printerApi_service_poweroff_resume_ReadResumeGuard();
  local_11c = local_140;
  uVar1 = FUN_00098da4(uVar1,&local_18c,auStack_4c,local_13c,unaff_lr);
  FUN_00098da4(uVar1,auStack_4c,auStack_b4);
  if (local_11c != (undefined4 *)0x0) {
    local_184 = *(undefined4 **)PTR_DAT_004fa45c;
    local_180 = *(undefined4 **)PTR_DAT_004fa460;
    local_18c = local_11c;
    local_68 = extraout_r3;
    FUN_000a2c04();
    if ((local_17c & 0xff) != 0) {
      return;
    }
    printerApi_service_poweroff_resume_resumeGuardPath();
    FUN_0012a748();
    if (local_17c != 0) {
      return;
    }
    local_b8 = local_180;
    local_120 = (int)local_184;
    uVar1 = FUN_0010cf30();
    uVar1 = FUN_00098e14(uVar1,&local_18c,auStack_4c);
    FUN_00098e14(uVar1,auStack_4c,&local_f4);
    if ((local_f0 & 0x80000000) != 0) {
      uVar2 = (local_f4 & 0x7fffffff) >> 0x1e | (local_f4 >> 0x1f | local_f0 << 1) << 1;
      local_ec = uVar2 + DAT_004fa440;
      local_e8 = ((local_f0 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar2,DAT_004fa440);
    }
    local_18c = local_b8;
    local_138 = local_ec;
    local_130 = local_e8;
    uVar1 = (**(code **)(local_120 + 0x10))();
    uVar1 = FUN_00098e14(uVar1,&local_188,auStack_4c);
    FUN_00098e14(uVar1,auStack_4c,&local_108);
    if ((local_104 & 0x80000000) != 0) {
      uVar2 = (local_108 & 0x7fffffff) >> 0x1e | (local_108 >> 0x1f | local_104 << 1) << 1;
      local_100 = uVar2 + DAT_004fa440;
      local_fc = ((local_104 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar2,DAT_004fa440);
    }
    iVar3 = local_130 + -0xf + (uint)CARRY4(local_138,DAT_004fa444);
    iVar4 = local_fc + -0xf + (uint)CARRY4(local_100,DAT_004fa464);
    if ((local_100 + DAT_004fa464 < local_138 + DAT_004fa444 || iVar3 != iVar4) && iVar4 <= iVar3) {
      return;
    }
    if (local_11c == (undefined4 *)0x0) {
      local_64 = 0;
    }
    else {
      local_64 = local_11c[1];
    }
    local_60 = (undefined *)local_68;
    local_18c = DAT_004fa468;
    local_188 = 0x49;
    local_184 = &local_64;
    local_180 = (undefined4 *)0x1;
    local_17c = 1;
    printerApi_common_logger_Warnf();
    return;
  }
  if ((((local_b0 == 0) && (local_a8 == 0)) && (local_a0 == 0)) &&
     ((local_98 == 0 && (local_90 == 0)))) {
    return;
  }
  if (local_88 == 8) {
    local_18c = local_8c;
    local_188 = DAT_004fa434;
    local_184 = (undefined4 *)0x8;
    FUN_000150d4();
    uVar2 = (uint)local_180 & 0xff;
  }
  else {
    uVar2 = 0;
  }
  if (uVar2 == 0) {
    if (local_88 == 7) {
      local_18c = local_8c;
      local_188 = DAT_004fa438;
      local_184 = (undefined4 *)0x7;
      FUN_000150d4();
      uVar2 = (uint)local_180 & 0xff;
    }
    else {
      uVar2 = 0;
    }
    if (uVar2 == 0) {
      if (local_70 < 0 || local_74 == 0 && local_70 == 0) {
        local_70 = 0;
        local_74 = DAT_004fa43c;
      }
      if (local_78 < 0 || local_7c == 0 && local_78 == 0) {
        local_7c = local_84;
        local_78 = local_80;
      }
      local_128 = local_74;
      local_124 = local_70;
      if (local_78 < 0 || local_78 == 0 && local_7c == 0) {
        printerApi_service_poweroff_resume_resumeGuardPath();
        FUN_0012a748();
        if (local_17c != 0) {
          return;
        }
        local_18c = local_180;
        uVar1 = (**(code **)((int)local_184 + 0x10))();
        uVar1 = FUN_00098e14(uVar1,&local_188,auStack_4c);
        FUN_00098e14(uVar1,auStack_4c,&local_cc);
        if ((local_c8 & 0x80000000) != 0) {
          uVar2 = (local_cc & 0x7fffffff) >> 0x1e | (local_cc >> 0x1f | local_c8 << 1) << 1;
          local_c4 = uVar2 + DAT_004fa440;
          local_c0 = ((local_c8 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar2,DAT_004fa440);
        }
        local_7c = local_c4 + DAT_004fa444;
        local_78 = local_c0 + -0xf + (uint)CARRY4(local_c4,DAT_004fa444);
      }
      local_118 = local_7c;
      local_114 = local_78;
      uVar1 = FUN_0010cf30();
      uVar1 = FUN_00098e14(uVar1,&local_18c,auStack_4c);
      FUN_00098e14(uVar1,auStack_4c,&local_e0);
      if ((local_dc & 0x80000000) != 0) {
        uVar2 = (local_e0 & 0x7fffffff) >> 0x1e | (local_e0 >> 0x1f | local_dc << 1) << 1;
        local_d8 = uVar2 + DAT_004fa440;
        local_d4 = ((local_dc & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar2,DAT_004fa440);
      }
      local_110 = local_118 + local_128;
      local_10c = local_114 + local_124 + (uint)CARRY4(local_118,local_128);
      iVar4 = local_d4 + -0xf + (uint)CARRY4(local_d8,DAT_004fa444);
      if ((local_110 < local_d8 + DAT_004fa444 || iVar4 != local_10c) && local_10c <= iVar4) {
        local_64 = DAT_004fa448;
        local_60 = PTR_DAT_004fa458;
        local_18c = &local_64;
        local_188 = 1;
        local_184 = (undefined4 *)0x1;
        printerApi_common_logger_Debug();
        return;
      }
      local_134 = local_d8;
      local_12c = local_d4;
      FUN_00098a28(0,&local_5c);
      local_18c = local_8c;
      local_188 = local_88;
      FUN_0008a578();
      local_5c = DAT_004fa448;
      local_58 = (int)local_184;
      local_18c = (undefined4 *)((local_110 - local_134) + DAT_004fa44c);
      local_188 = (local_10c - (local_12c + (uint)(local_110 < local_134))) + 0xe +
                  (uint)CARRY4(local_110 - local_134,DAT_004fa44c);
      FUN_0008a4bc();
      local_54 = PTR_DAT_004fa450;
      local_50 = (int)local_184;
      local_18c = (undefined4 *)PTR_DAT_004fa454;
      local_188 = 0x38;
      local_184 = &local_5c;
      local_180 = (undefined4 *)0x2;
      local_17c = 2;
      printerApi_common_logger_Debugf();
      return;
    }
  }
  return;
}



/* printerApi/service/poweroff_resume.hasFreshPrintRecord @ 004fa46c (size 592) */

void printerApi_service_poweroff_resume_hasFreshPrintRecord(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined **local_d4;
  int local_d0;
  undefined **local_cc;
  undefined **local_c8;
  int local_c4;
  undefined **local_c0;
  int local_bc;
  int local_9c;
  int local_94;
  undefined **local_90;
  int local_8c;
  undefined1 auStack_88 [20];
  int local_74;
  int local_64;
  undefined1 auStack_58 [8];
  undefined *local_50 [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined *local_40;
  undefined *local_3c;
  undefined1 auStack_38 [56];
  
  while (auStack_58 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4fa6b8;
    FUN_00096bb8();
  }
  local_d0 = *(int *)(*(int *)(*DAT_004fa6c0 + 8) + 0x1ac);
  if (local_d0 == 0) {
    local_d0 = 0x15;
    local_d4 = DAT_004fa6c4;
  }
  else {
    local_d4 = *(undefined ***)(*(int *)(*DAT_004fa6c0 + 8) + 0x1a8);
  }
  internal_filepathlite_Clean();
  FUN_00098a28(0,local_50,local_c8,local_cc,unaff_lr);
  local_44 = 0xc;
  local_48 = DAT_004fa6c8;
  local_d4 = local_50;
  local_d0 = 2;
  local_cc = (undefined **)0x2;
  FUN_00159184();
  local_d4 = local_c8;
  local_d0 = local_c4;
  FUN_0012a748();
  if (local_c4 != 0) {
    return;
  }
  local_d4 = local_c8;
  uVar1 = (**(code **)((int)local_cc + 0x10))();
  uVar1 = FUN_00098e14(uVar1,&local_d0,auStack_38);
  FUN_00098e14(uVar1,auStack_38,&local_d4);
  FUN_0010327c();
  if (local_bc < 0) {
    return;
  }
  if (local_bc < 0x45 || local_bc == 0x45 && local_c0 <= DAT_004fa6cc) {
    local_90 = local_c0;
    local_8c = local_bc;
    FUN_00098a00(0,auStack_38);
    uVar1 = printerApi_service_poweroff_resume_GetPrintRecord();
    local_94 = local_9c;
    uVar1 = FUN_00098dcc(uVar1,&local_d4,auStack_38);
    FUN_00098dcc(uVar1,auStack_38,auStack_88);
    if (((local_94 == 0) && (local_74 == 0)) && (local_64 == 0)) {
      local_40 = PTR_SUB_004fa6d0;
      local_3c = PTR_DAT_004fa6d4;
      local_d4 = &local_40;
      local_d0 = 1;
      local_cc = (undefined **)0x1;
      printerApi_common_logger_Debug();
      return;
    }
    local_40 = (undefined *)0x0;
    local_3c = (undefined *)0x0;
    local_d4 = local_90;
    local_d0 = local_8c;
    FUN_0008a4bc();
    local_40 = PTR_DAT_004fa6d8;
    local_3c = (undefined *)local_cc;
    local_d4 = (undefined **)PTR_DAT_004fa6dc;
    local_d0 = 0x2e;
    local_cc = &local_40;
    local_c8 = (undefined **)0x1;
    local_c4 = 1;
    printerApi_common_logger_Debugf();
    return;
  }
  return;
}



/* printerApi/service/poweroff_resume.CleanupTempArtifacts.markPrintRecordNeedsUnpack.func1 @ 004fa6e0 (size 792) */

/* WARNING: Removing unreachable block (ram,0x004fa84c) */
/* WARNING: Removing unreachable block (ram,0x004fa9b4) */

void printerApi_service_poweroff_resume_CleanupTempArtifacts_markPrintRecordNeedsUnpack_func1(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar3;
  int in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  char cStack_18;
  undefined4 *puStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x4fa9f4;
    FUN_00096bb8();
  }
  if (*(int *)(in_stack_00000004 + 0x38) == 0) {
    in_stack_00000008 = 0;
    in_stack_0000000c = 0;
    in_stack_00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x004fa9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_00021c74();
  printerApi_common_utils_cast_ToString();
  FUN_00148fb4();
  FUN_00021c74();
  printerApi_common_utils_cast_ToString();
  FUN_0008e7bc();
  puVar1 = PTR_SUB_004faa08;
  *puStack_10 = PTR_SUB_004faa08;
  puVar2 = puStack_10;
  if (*(int *)PTR_DAT_004faa0c != 0) {
    puVar2 = (undefined4 *)FUN_00098678(puStack_10,puVar1,puStack_10[1]);
    *unaff_r8 = extraout_r2;
  }
  puVar2[1] = PTR_DAT_004faa10;
  FUN_00021c74();
  printerApi_common_utils_cast_ToString();
  FUN_0008e7bc();
  *puStack_10 = PTR_SUB_004faa08;
  puVar2 = puStack_10;
  if (*(int *)PTR_DAT_004faa0c != 0) {
    uVar3 = FUN_00098678(puStack_10,puStack_10[1]);
    *unaff_r8 = (int)((ulonglong)uVar3 >> 0x20);
    puVar2 = (undefined4 *)uVar3;
  }
  puVar2[1] = PTR_DAT_004faa18;
  puVar1 = PTR_DAT_004faa1c;
  FUN_00021c74();
  printerApi_common_utils_cast_ToBool();
  cStack_18 = (char)puVar1;
  if (cStack_18 == '\0') {
    FUN_0008e7bc();
    *puStack_10 = PTR_DAT_004faa20;
    if (*(int *)PTR_DAT_004faa0c != 0) {
      uVar3 = FUN_00098678(puStack_10,puStack_10[1]);
      puStack_10 = (undefined4 *)uVar3;
      *unaff_r8 = (int)((ulonglong)uVar3 >> 0x20);
    }
    puStack_10[1] = PTR_DAT_004faa24;
  }
  in_stack_00000008 = 1;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x004fa9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



