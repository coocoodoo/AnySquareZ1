// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/orcaSim   functions: 35
/* printerApi/service/orcaSim.(*OrcaMessageHandler).HandleMessage @ 0066d7bc (size 1260) */

/* WARNING: Removing unreachable block (ram,0x0066d920) */
/* WARNING: Removing unreachable block (ram,0x0066d93c) */
/* WARNING: Removing unreachable block (ram,0x0066d948) */
/* WARNING: Removing unreachable block (ram,0x0066d954) */
/* WARNING: Removing unreachable block (ram,0x0066d960) */
/* WARNING: Removing unreachable block (ram,0x0066d96c) */
/* WARNING: Removing unreachable block (ram,0x0066d98c) */
/* WARNING: Removing unreachable block (ram,0x0066d984) */
/* WARNING: Removing unreachable block (ram,0x0066d9bc) */
/* WARNING: Removing unreachable block (ram,0x0066d9cc) */
/* WARNING: Removing unreachable block (ram,0x0066d9dc) */
/* WARNING: Removing unreachable block (ram,0x0066d9d4) */
/* WARNING: Removing unreachable block (ram,0x0066d9c4) */
/* WARNING: Removing unreachable block (ram,0x0066da0c) */
/* WARNING: Removing unreachable block (ram,0x0066da14) */
/* WARNING: Removing unreachable block (ram,0x0066da5c) */
/* WARNING: Removing unreachable block (ram,0x0066da64) */
/* WARNING: Removing unreachable block (ram,0x0066da70) */
/* WARNING: Removing unreachable block (ram,0x0066da7c) */
/* WARNING: Removing unreachable block (ram,0x0066da88) */
/* WARNING: Removing unreachable block (ram,0x0066da90) */
/* WARNING: Removing unreachable block (ram,0x0066da9c) */
/* WARNING: Removing unreachable block (ram,0x0066dae4) */
/* WARNING: Removing unreachable block (ram,0x0066daf0) */
/* WARNING: Removing unreachable block (ram,0x0066db38) */
/* WARNING: Removing unreachable block (ram,0x0066db3c) */
/* WARNING: Removing unreachable block (ram,0x0066db84) */
/* WARNING: Removing unreachable block (ram,0x0066db90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_orcaSim___OrcaMessageHandler__HandleMessage(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar2;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack_3c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x66dca4;
    FUN_00096bb8();
  }
  FUN_00093e34();
  FUN_00146be8();
  if (uStack_3c != 0) {
    FUN_00146f38();
    printerApi_common_logger_Error();
    FUN_0008b6b8();
    FUN_0008e7bc();
    puVar1 = (undefined4 *)0x0;
    _DAT_00000004 = 0x14;
    if (*(int *)PTR_DAT_0066dcc0 != 0) {
      uVar2 = FUN_00098678(0,uRam00000000);
      puVar1 = (undefined4 *)uVar2;
      *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
    }
    *puVar1 = PTR_DAT_0066dcd8;
    printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
    in_stack_00000018 = 0;
    in_stack_0000001c = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x0066dc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  printerApi_common_logger_Error();
  FUN_0008b6b8();
  FUN_0008e7bc();
  puVar1 = (undefined4 *)0x0;
  _DAT_00000004 = 0x14;
  if (*(int *)PTR_DAT_0066dcc0 != 0) {
    uVar2 = FUN_00098678(0,uRam00000000);
    puVar1 = (undefined4 *)uVar2;
    *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
  }
  *puVar1 = PTR_DAT_0066dcc4;
  printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
  in_stack_00000018 = 0;
  in_stack_0000001c = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x0066d8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/orcaSim.(*OrcaMessageHandler).sendProgress @ 0066dcdc (size 560) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_orcaSim___OrcaMessageHandler__sendProgress(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_r2;
  int extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x58) = unaff_lr;
      iVar3 = *(int *)((int)register0x00000054 + 4) + 4;
      *(int *)((int)register0x00000054 + -0x34) = iVar3;
      uVar1 = FUN_00098e14(*(int *)((int)register0x00000054 + 4),iVar3,
                           (undefined1 *)((int)register0x00000054 + -0x1c));
      FUN_00098e14(uVar1,(undefined1 *)((int)register0x00000054 + -0x1c),
                   (undefined1 *)((int)register0x00000054 + -0x54));
      FUN_0010327c();
      if ((*(int *)((int)register0x00000054 + -0x3c) < 1 &&
           (*(int *)((int)register0x00000054 + -0x3c) != 0 ||
           *(uint *)((int)register0x00000054 + -0x40) < _UNK_0066df10)) &&
         (*(double *)((int)register0x00000054 + 0x10) < *(double *)PTR_DAT_0066df14))
      goto LAB_0066dee4;
      uVar1 = FUN_0010cf30();
      FUN_00098e14(uVar1,(undefined1 *)((int)register0x00000054 + -0x54),
                   (undefined1 *)((int)register0x00000054 + -0x1c));
      uVar1 = 0;
      if (*(int *)PTR_DAT_0066df18 != 0) {
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0066df1c;
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined1 **)((int)register0x00000054 + -0x4c) =
             (undefined1 *)((int)register0x00000054 + -0x1c);
        uVar1 = FUN_00022914();
      }
      FUN_00098e14(uVar1,(undefined1 *)((int)register0x00000054 + -0x1c),
                   *(undefined4 *)((int)register0x00000054 + -0x34));
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_SUB_0066df20;
      FUN_0001eed8();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x50);
      *(undefined4 **)((int)register0x00000054 + -4) = puVar2;
      puVar2[1] = 0x10;
      *puVar2 = PTR_DAT_0066df24;
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_SUB_0066df20;
      FUN_0001eed8();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x50);
      puVar2[1] = *(undefined4 *)((int)register0x00000054 + 0xc);
      if (*(int *)PTR_DAT_0066df18 == 0) {
        uVar1 = *(undefined4 *)((int)register0x00000054 + 8);
      }
      else {
        puVar2 = (undefined4 *)FUN_00098678();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 8);
        *unaff_r8 = uVar1;
      }
      *(undefined4 **)((int)register0x00000054 + -0x38) = puVar2;
      *puVar2 = uVar1;
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0066df28;
      FUN_0001eed8();
      *(undefined8 **)((int)register0x00000054 + -8) =
           *(undefined8 **)((int)register0x00000054 + -0x50);
      **(undefined8 **)((int)register0x00000054 + -0x50) =
           *(undefined8 *)((int)register0x00000054 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x54) = *(undefined4 *)PTR_DAT_0066df2c;
      FUN_0009bf4c();
      bVar5 = *(undefined **)((int)register0x00000054 + -0x50) == PTR_DAT_0066df30;
      if (bVar5) {
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined1 **)((int)register0x00000054 + -0x54) =
             (undefined1 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -8);
        printerApi_service_k3c_wrapper___K3cwrapper__PublishDownloadStatus();
        bVar5 = *(int *)((int)register0x00000054 + -0x44) == 0;
        if (!bVar5) {
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x2c),
                       *(undefined4 *)((int)register0x00000054 + -0x40),
                       *(int *)((int)register0x00000054 + -0x44));
          *(undefined **)((int)register0x00000054 + -0x2c) = PTR_SUB_0066df20;
          *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0066df34;
          iVar3 = extraout_r3;
          if (!bVar5) {
            iVar3 = *(int *)(extraout_r3 + 4);
          }
          *(int *)((int)register0x00000054 + -0x24) = iVar3;
          *(undefined4 *)((int)register0x00000054 + -0x20) = extraout_r2;
          *(undefined1 **)((int)register0x00000054 + -0x54) =
               (undefined1 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x50) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = 2;
          printerApi_common_logger_Error();
        }
LAB_0066dee4:
                    /* WARNING: Could not recover jumptable at 0x0066dee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x58))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x54) =
           *(undefined **)((int)register0x00000054 + -0x50);
      *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_0066df30;
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0066df38;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x58);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x66df08;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/orcaSim.(*OrcaMessageHandler).handleFileUpload @ 0066df3c (size 8956) */

/* WARNING: Removing unreachable block (ram,0x0067014c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_orcaSim___OrcaMessageHandler__handleFileUpload(void)

{
  longlong lVar1;
  double dVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined **extraout_r1;
  undefined **extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  undefined1 *puVar9;
  undefined **extraout_r2_02;
  uint extraout_r2_03;
  uint extraout_r2_04;
  undefined **extraout_r2_05;
  undefined4 extraout_r2_06;
  undefined **extraout_r2_07;
  int extraout_r3;
  uint uVar10;
  undefined **ppuVar11;
  code *extraout_r3_00;
  undefined **extraout_r3_01;
  int iVar12;
  int extraout_r3_02;
  int extraout_r3_03;
  undefined *extraout_r3_04;
  undefined *puVar13;
  code *extraout_r3_05;
  int extraout_r3_06;
  undefined **ppuVar14;
  undefined **ppuVar15;
  uint *unaff_r8;
  uint *puVar16;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar17;
  uint in_fpscr;
  double dVar18;
  uint unaff_s30;
  undefined8 uVar19;
  undefined **in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined **in_stack_00000014;
  undefined8 uStack_2d4;
  undefined **ppuStack_2cc;
  undefined8 uStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  char cStack_2a3;
  byte bStack_2a2;
  byte bStack_2a1;
  undefined **ppuStack_2a0;
  undefined *puStack_29c;
  undefined1 *puStack_298;
  undefined **ppuStack_294;
  undefined **ppuStack_290;
  undefined **ppuStack_28c;
  undefined **ppuStack_288;
  int iStack_284;
  undefined **ppuStack_280;
  undefined *puStack_27c;
  undefined1 *puStack_278;
  undefined **ppuStack_274;
  undefined **ppuStack_270;
  undefined **ppuStack_26c;
  undefined **ppuStack_268;
  undefined **ppuStack_264;
  undefined **ppuStack_260;
  undefined1 auStack_25c [4];
  undefined1 auStack_258 [12];
  undefined *puStack_24c;
  uint uStack_248;
  undefined **ppuStack_244;
  undefined **ppuStack_240;
  undefined *puStack_23c;
  undefined1 *puStack_238;
  undefined *puStack_234;
  undefined *puStack_230;
  undefined1 auStack_22c [24];
  undefined **ppuStack_214;
  undefined1 auStack_210 [48];
  uint uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  int iStack_1d4;
  undefined **ppuStack_1cc;
  undefined **ppuStack_1c8;
  undefined *puStack_1c4;
  int iStack_1c0;
  undefined **ppuStack_1bc;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b4;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1ac;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a4;
  undefined **ppuStack_1a0;
  undefined **ppuStack_19c;
  undefined **ppuStack_198;
  undefined4 uStack_174;
  undefined **ppuStack_170;
  undefined **ppuStack_16c;
  undefined **ppuStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined **ppuStack_15c;
  undefined **ppuStack_158;
  undefined **ppuStack_154;
  undefined **ppuStack_150;
  undefined **ppuStack_14c;
  undefined *puStack_148;
  undefined *puStack_144;
  undefined **ppuStack_140;
  undefined **ppuStack_13c;
  undefined **ppuStack_138;
  undefined *puStack_134;
  undefined **ppuStack_130;
  undefined **ppuStack_12c;
  undefined **ppuStack_128;
  undefined **ppuStack_124;
  undefined **ppuStack_120;
  undefined **ppuStack_11c;
  undefined *puStack_118;
  undefined4 uStack_114;
  undefined **ppuStack_110;
  undefined **ppuStack_10c;
  undefined1 auStack_108 [8];
  undefined **ppuStack_100;
  undefined **ppuStack_fc;
  undefined **ppuStack_f8;
  undefined *puStack_f4;
  undefined **ppuStack_f0;
  undefined1 auStack_ec [140];
  undefined *apuStack_60 [2];
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined *puStack_44;
  undefined *puStack_40;
  undefined **ppuStack_3c;
  undefined **ppuStack_38;
  undefined *puStack_34;
  undefined **ppuStack_30;
  undefined **ppuStack_2c;
  undefined **ppuStack_28;
  undefined **ppuStack_24;
  undefined **ppuStack_20;
  undefined **ppuStack_1c;
  undefined **ppuStack_18;
  undefined **ppuStack_14;
  undefined **ppuStack_10;
  undefined **ppuStack_c;
  undefined **ppuStack_8;
  undefined **ppuStack_4;
  
  while (auStack_258 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x670400;
    FUN_00096bb8();
  }
  ppuStack_4 = (undefined **)0x0;
  bStack_2a1 = 0;
  printerApi_service_k3c_IsBusy();
  if ((char)uStack_2d4 != '\0') {
    uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066e89c;
    uStack_2d4._4_4_ = (undefined **)0x40;
    ppuStack_2cc = (undefined **)0x0;
    uStack_2c8._0_4_ = (undefined **)0x0;
    uStack_2c8._4_4_ = (undefined **)0x0;
    printerApi_common_logger_Warnf();
    FUN_0008b6b8();
    uStack_2d4._4_4_ = (undefined **)(undefined ***)uStack_2d4;
    puStack_144 = (undefined *)(undefined ***)uStack_2d4;
    uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066e8a0;
    ppuStack_2cc = (undefined **)PTR_s_errorlocal1_8_7int16int32int64ui_00773bd2_0x13_0066e8a4;
    uStack_2c8._0_4_ = (undefined **)0x5;
    FUN_0008e7bc();
    uStack_2c8._4_4_[1] = (undefined *)0x32;
    puVar5 = uStack_2c8._4_4_;
    if (*(int *)PTR_DAT_0066e8a8 != 0) {
      uVar19 = FUN_00098678(uStack_2c8._4_4_,*uStack_2c8._4_4_);
      puVar5 = (undefined4 *)uVar19;
      *unaff_r8 = (uint)((ulonglong)uVar19 >> 0x20);
    }
    *puVar5 = PTR_DAT_0066e8ac;
    uStack_2d4._0_4_ = (undefined ***)in_stack_00000004;
    uStack_2d4._4_4_ = (undefined **)0x199;
    ppuStack_2cc = (undefined **)PTR_DAT_0066e8a0;
    uStack_2c8._0_4_ = (undefined **)puStack_144;
    printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
                    /* WARNING: Could not recover jumptable at 0x0066e07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar3 = FUN_00098a1c(0,apuStack_60);
  FUN_000989ac(uVar3,auStack_ec);
  puStack_54 = auStack_ec;
  FUN_00065dd4();
  uStack_58 = (undefined ***)uStack_2d4;
  for (iStack_284 = 0; iStack_284 < in_stack_0000000c; iStack_284 = iStack_284 + 1) {
    ppuVar6 = *(undefined ***)(in_stack_00000008 + iStack_284 * 8 + 4);
    uStack_2d4._0_4_ = *(undefined ****)(in_stack_00000008 + iStack_284 * 8);
    if (ppuVar6 == (undefined **)0x0) goto LAB_0066e1c0;
    ppuStack_2cc = (undefined **)PTR_DAT_0066e8b0;
    uStack_2c8._0_4_ = (undefined **)0x1;
    iStack_1c0 = (int)(undefined ***)uStack_2d4;
    uStack_2d4._4_4_ = ppuVar6;
    ppuStack_28c = ppuVar6;
    internal_stringslite_Index();
    if (0 < (int)uStack_2c8._4_4_) {
      if (ppuStack_28c < uStack_2c8._4_4_) goto LAB_006703e8;
      ppuStack_2a0 = uStack_2c8._4_4_;
      uStack_2d4._0_4_ = (undefined ***)iStack_1c0;
      uStack_2d4._4_4_ = uStack_2c8._4_4_;
      FUN_00148fb4();
      ppuVar6 = (undefined **)((int)ppuStack_2a0 + 1);
      ppuVar11 = ppuStack_28c;
      if (ppuStack_28c < ppuVar6) goto LAB_006703dc;
      ppuStack_128 = ppuStack_2cc;
      puStack_230 = (undefined *)(undefined **)uStack_2c8;
      uStack_2d4._4_4_ = (undefined **)(((int)ppuStack_28c - (int)ppuStack_2a0) + -1);
      uStack_2d4._0_4_ =
           (undefined ***)
           (iStack_1c0 + ((uint)ppuVar6 & 1 - ((int)ppuStack_28c - (int)ppuStack_2a0) >> 0x1f));
      FUN_00148fb4();
      puStack_234 = (undefined *)(undefined **)uStack_2c8;
      ppuStack_12c = ppuStack_2cc;
      uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066e8a0;
      uStack_2d4._4_4_ = apuStack_60;
      ppuStack_2cc = ppuStack_128;
      uStack_2c8._0_4_ = (undefined **)puStack_230;
      FUN_0008e7bc();
      uStack_2c8._4_4_[1] = puStack_234;
      ppuVar6 = uStack_2c8._4_4_;
      if (*(int *)PTR_DAT_0066e8a8 != 0) {
        ppuVar6 = (undefined **)FUN_00098688();
        *unaff_r8 = (uint)ppuStack_12c;
        unaff_r8[1] = (uint)*ppuVar6;
      }
      *ppuVar6 = (undefined *)ppuStack_12c;
    }
  }
  iStack_284 = -1;
LAB_0066e1c0:
  uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066e8b4;
  FUN_0001eed8();
  ppuStack_8 = uStack_2d4._4_4_;
  uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066e8a0;
  uStack_2d4._4_4_ = apuStack_60;
  ppuStack_2cc = (undefined **)PTR_DAT_0066e8b8;
  uStack_2c8._0_4_ = (undefined **)0xe;
  FUN_00021c74();
  if (uStack_2c8._4_4_[1] != (undefined *)0x0) {
    uStack_2d4._0_4_ = (undefined ***)PTR_SUB_0066e8bc;
    FUN_0001eed8();
    ppuStack_c = uStack_2d4._4_4_;
    puStack_f4 = PTR_DAT_0066e8c0;
    ppuStack_f0 = ppuStack_8;
    uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066e8a0;
    uStack_2d4._4_4_ = apuStack_60;
    ppuStack_2cc = (undefined **)PTR_DAT_0066e8b8;
    uStack_2c8._0_4_ = (undefined **)0xe;
    FUN_00021c74();
    ppuVar6 = ppuStack_c;
    puVar4 = *uStack_2c8._4_4_;
    ppuStack_c[1] = uStack_2c8._4_4_[1];
    if (*(int *)PTR_DAT_0066e8a8 != 0) {
      puVar4 = (undefined *)FUN_00098688();
      *unaff_r8 = (uint)puVar4;
      unaff_r8[1] = (uint)*extraout_r2;
      ppuVar6 = extraout_r2;
    }
    *ppuVar6 = puVar4;
    uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066e8c4;
    ppuStack_2cc = (undefined **)PTR_DAT_0066e8c8;
    uStack_2c8._0_4_ = (undefined **)0x2;
    uStack_2c8._4_4_ = &puStack_f4;
    ppuStack_2c0 = (undefined **)0x1;
    ppuStack_2bc = (undefined **)0x1;
    uStack_2d4._4_4_ = ppuVar6;
    func_0x0013b04c();
  }
  uStack_2d4._4_4_ = *(undefined ***)(*(int *)(*(int *)PTR_DAT_0066e8cc + 8) + 0x16c);
  uStack_2d4._0_4_ = (undefined ***)*(undefined **)(*(int *)(*(int *)PTR_DAT_0066e8cc + 8) + 0x168);
  if (uStack_2d4._4_4_ == (undefined **)0x0) {
    uStack_2d4._4_4_ = (undefined **)0x18;
    uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066e8d0;
  }
  uVar3 = printerApi_common_file_DiskUsage();
  uVar3 = FUN_00098e0c(uVar3,&ppuStack_2cc,auStack_22c);
  FUN_00098e0c(uVar3,auStack_22c,auStack_25c);
  uVar10 = (int)*ppuStack_8 >> 0x1f;
  if (uStack_248 < uVar10 || puStack_24c <= *ppuStack_8 && uStack_248 == uVar10) {
    FUN_0008b6b8();
    uStack_2d4._4_4_ = (undefined **)(undefined ***)uStack_2d4;
    puStack_148 = (undefined *)(undefined ***)uStack_2d4;
    uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066f140;
    ppuStack_2cc = (undefined **)PTR_s_errorlocal1_8_7int16int32int64ui_00773bd2_0x13_0066f144;
    uStack_2c8._0_4_ = (undefined **)0x5;
    FUN_0008e7bc();
    uStack_2c8._4_4_[1] = (undefined *)0x1c;
    ppuVar6 = uStack_2c8._4_4_;
    if (*(int *)PTR_DAT_0066f148 != 0) {
      uVar19 = FUN_00098678(uStack_2c8._4_4_,*uStack_2c8._4_4_);
      ppuVar6 = (undefined **)uVar19;
      *unaff_r8 = (uint)((ulonglong)uVar19 >> 0x20);
    }
    *ppuVar6 = PTR_DAT_0066f150;
    uStack_2d4._0_4_ = (undefined ***)in_stack_00000004;
    uStack_2d4._4_4_ = (undefined **)0x190;
    ppuStack_2cc = (undefined **)PTR_DAT_0066f140;
    uStack_2c8._0_4_ = (undefined **)puStack_148;
    printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
                    /* WARNING: Could not recover jumptable at 0x0066ea74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (iStack_284 < 0) {
    puStack_34 = PTR_SUB_0066e8bc;
    ppuStack_30 = (undefined **)PTR_DAT_0066e8d4;
    uStack_2d4._0_4_ = (undefined ***)&puStack_34;
    uStack_2d4._4_4_ = (undefined **)0x1;
    ppuStack_2cc = (undefined **)0x1;
    printerApi_common_logger_Error();
    FUN_0008b6b8();
    uStack_2d4._4_4_ = (undefined **)(undefined ***)uStack_2d4;
    ppuStack_14c = (undefined **)(undefined ***)uStack_2d4;
    uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066e8a0;
    ppuStack_2cc = (undefined **)PTR_s_errorlocal1_8_7int16int32int64ui_00773bd2_0x13_0066e8a4;
    uStack_2c8._0_4_ = (undefined **)0x5;
    FUN_0008e7bc();
    uStack_2c8._4_4_[1] = (undefined *)0x16;
    ppuVar6 = uStack_2c8._4_4_;
    if (*(int *)PTR_DAT_0066e8a8 != 0) {
      uVar19 = FUN_00098678(uStack_2c8._4_4_,*uStack_2c8._4_4_);
      ppuVar6 = (undefined **)uVar19;
      *unaff_r8 = (uint)((ulonglong)uVar19 >> 0x20);
    }
    *ppuVar6 = PTR_DAT_0066e8d8;
    uStack_2d4._0_4_ = (undefined ***)in_stack_00000004;
    uStack_2d4._4_4_ = (undefined **)0x190;
    ppuStack_2cc = (undefined **)PTR_DAT_0066e8a0;
    uStack_2c8._0_4_ = ppuStack_14c;
    printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
                    /* WARNING: Could not recover jumptable at 0x0066e414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066e8a0;
  uStack_2d4._4_4_ = apuStack_60;
  ppuStack_2cc = (undefined **)PTR_DAT_0066e8dc;
  uStack_2c8._0_4_ = (undefined **)0xc;
  FUN_00021c74();
  uStack_2d4._4_4_ = (undefined **)uStack_2c8._4_4_[1];
  if (uStack_2d4._4_4_ == (undefined **)0x0) {
    puStack_34 = PTR_SUB_0066e8bc;
    ppuStack_30 = (undefined **)PTR_DAT_0066e8e0;
    uStack_2d4._0_4_ = (undefined ***)&puStack_34;
    uStack_2d4._4_4_ = (undefined **)0x1;
    ppuStack_2cc = (undefined **)0x1;
    printerApi_common_logger_Error();
    FUN_0008b6b8();
    uStack_2d4._4_4_ = (undefined **)(undefined ***)uStack_2d4;
    ppuStack_150 = (undefined **)(undefined ***)uStack_2d4;
    uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066e8a0;
    ppuStack_2cc = (undefined **)PTR_s_errorlocal1_8_7int16int32int64ui_00773bd2_0x13_0066e8a4;
    uStack_2c8._0_4_ = (undefined **)0x5;
    FUN_0008e7bc();
    uStack_2c8._4_4_[1] = (undefined *)0x1b;
    ppuVar6 = uStack_2c8._4_4_;
    if (*(int *)PTR_DAT_0066e8a8 != 0) {
      uVar19 = FUN_00098678(uStack_2c8._4_4_,*uStack_2c8._4_4_);
      ppuVar6 = (undefined **)uVar19;
      *unaff_r8 = (uint)((ulonglong)uVar19 >> 0x20);
    }
    *ppuVar6 = PTR_DAT_0066e8e4;
    uStack_2d4._0_4_ = (undefined ***)in_stack_00000004;
    uStack_2d4._4_4_ = (undefined **)0x190;
    ppuStack_2cc = (undefined **)PTR_DAT_0066e8a0;
    uStack_2c8._0_4_ = ppuStack_150;
    printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
                    /* WARNING: Could not recover jumptable at 0x0066e50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uStack_2d4._0_4_ = (undefined ***)*uStack_2c8._4_4_;
  FUN_003167ac();
  bVar17 = ppuStack_2c0 == (undefined **)0x0;
  if (!bVar17) {
    FUN_00098a28(0,&puStack_44,ppuStack_2bc,ppuStack_2c0);
    puStack_44 = PTR_SUB_0066e8bc;
    puStack_40 = PTR_DAT_0066e8e8;
    ppuStack_3c = (undefined **)extraout_r3;
    if (!bVar17) {
      ppuStack_3c = *(undefined ***)(extraout_r3 + 4);
    }
    uStack_2d4._0_4_ = (undefined ***)&puStack_44;
    uStack_2d4._4_4_ = (undefined **)0x2;
    ppuStack_2cc = (undefined **)0x2;
    printerApi_common_logger_Error();
    FUN_0008b6b8();
    uStack_2d4._4_4_ = (undefined **)(undefined ***)uStack_2d4;
    ppuStack_154 = (undefined **)(undefined ***)uStack_2d4;
    uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066e8a0;
    ppuStack_2cc = (undefined **)PTR_s_errorlocal1_8_7int16int32int64ui_00773bd2_0x13_0066e8a4;
    uStack_2c8._0_4_ = (undefined **)0x5;
    FUN_0008e7bc();
    uStack_2c8._4_4_[1] = (undefined *)0x14;
    ppuVar6 = uStack_2c8._4_4_;
    if (*(int *)PTR_DAT_0066e8a8 != 0) {
      uVar19 = FUN_00098678(uStack_2c8._4_4_,*uStack_2c8._4_4_);
      ppuVar6 = (undefined **)uVar19;
      *unaff_r8 = (uint)((ulonglong)uVar19 >> 0x20);
    }
    *ppuVar6 = PTR_DAT_0066e8ec;
    uStack_2d4._0_4_ = (undefined ***)in_stack_00000004;
    uStack_2d4._4_4_ = (undefined **)0x190;
    ppuStack_2cc = (undefined **)PTR_DAT_0066e8a0;
    uStack_2c8._0_4_ = ppuStack_154;
    printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
                    /* WARNING: Could not recover jumptable at 0x0066e61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066e8a0;
  uStack_2d4._4_4_ = uStack_2c8._4_4_;
  ppuStack_2cc = (undefined **)PTR_s_boundaryConflictrollbackFuncType_00774847_0xb46_0066e8f0;
  uStack_2c8._0_4_ = (undefined **)0x8;
  FUN_00021c74();
  ppuStack_240 = (undefined **)uStack_2c8._4_4_[1];
  ppuStack_138 = (undefined **)*uStack_2c8._4_4_;
  if (ppuStack_240 == (undefined **)0x0) {
    puStack_34 = PTR_SUB_0066f138;
    ppuStack_30 = (undefined **)PTR_DAT_0066f13c;
    uStack_2d4._0_4_ = (undefined ***)&puStack_34;
    uStack_2d4._4_4_ = (undefined **)0x1;
    ppuStack_2cc = (undefined **)0x1;
    printerApi_common_logger_Error();
    FUN_0008b6b8();
    uStack_2d4._4_4_ = (undefined **)(undefined ***)uStack_2d4;
    ppuStack_158 = (undefined **)(undefined ***)uStack_2d4;
    uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066f140;
    ppuStack_2cc = (undefined **)PTR_s_errorlocal1_8_7int16int32int64ui_00773bd2_0x13_0066f144;
    uStack_2c8._0_4_ = (undefined **)0x5;
    FUN_0008e7bc();
    uStack_2c8._4_4_[1] = (undefined *)0x22;
    ppuVar6 = uStack_2c8._4_4_;
    if (*(int *)PTR_DAT_0066f148 != 0) {
      uVar19 = FUN_00098678(uStack_2c8._4_4_,*uStack_2c8._4_4_);
      ppuVar6 = (undefined **)uVar19;
      *unaff_r8 = (uint)((ulonglong)uVar19 >> 0x20);
    }
    *ppuVar6 = PTR_s_Failed_to_parse_multipart_bounda_0078d81a_2_0066f14c;
    uStack_2d4._0_4_ = (undefined ***)in_stack_00000004;
    uStack_2d4._4_4_ = (undefined **)0x190;
    ppuStack_2cc = (undefined **)PTR_DAT_0066f140;
    uStack_2c8._0_4_ = ppuStack_158;
    printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
                    /* WARNING: Could not recover jumptable at 0x0066e9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar10 = ((int)((longlong)(int)*ppuStack_8 * (longlong)_UNK_0066e8f4 >> 0x2f) -
           ((int)*ppuStack_8 >> 0x1f)) + 0x1e;
  lVar1 = (ulonglong)uVar10 * (ulonglong)_UNK_0066e8f8;
  ppuVar6 = (undefined **)lVar1;
  ppuVar11 = (undefined **)(_UNK_0066e8f8 * ((int)uVar10 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20))
  ;
  if ((int)ppuVar11 < 6 || ppuVar6 < _UNK_0066e8fc && ppuVar11 == (undefined **)&DAT_00000006) {
    ppuVar11 = (undefined **)&DAT_00000006;
    ppuVar6 = _UNK_0066e8fc;
  }
  puVar16 = (uint *)(uint)(_UNK_0066e900 < ppuVar6);
  if (0x8b < (int)ppuVar11 || _UNK_0066e900 < ppuVar6 && ppuVar11 == (undefined **)&DAT_0000008b) {
    ppuVar11 = (undefined **)&DAT_0000008b;
    ppuVar6 = _UNK_0066e900;
  }
  if (in_stack_00000004[6] != (undefined *)0x0) {
    ppuStack_270 = ppuVar6;
    ppuStack_26c = ppuVar11;
    uVar3 = FUN_0010cf30();
    uVar3 = FUN_00098e14(uVar3,&uStack_2d4,&ppuStack_1a4);
    FUN_00098e14(uVar3,&ppuStack_1a4,&uStack_2d4);
    ppuStack_2c0 = ppuStack_270;
    ppuStack_2bc = ppuStack_26c;
    uVar3 = FUN_00102dac();
    FUN_00098e14(uVar3,&uStack_2b8,&ppuStack_1a4);
    uStack_2d4._0_4_ = (undefined ***)in_stack_00000004[7];
    FUN_00098e14(in_stack_00000004,&ppuStack_1a4,(int)&uStack_2d4 + 4,
                 *(undefined4 *)(in_stack_00000004[6] + 0x20));
    (*extraout_r3_00)();
  }
  uStack_2d4._0_4_ = *(undefined ****)PTR_DAT_0066e904;
  FUN_0009bf4c();
  uVar19 = CONCAT44(PTR_DAT_0066e908,uStack_2d4._4_4_);
  if (uStack_2d4._4_4_ != (undefined **)PTR_DAT_0066e908) {
LAB_006703c8:
    ppuStack_2cc = (undefined **)PTR_DAT_00670424;
    uStack_2d4 = uVar19;
    FUN_0001cb94();
    ppuVar6 = extraout_r1;
    ppuVar11 = extraout_r2_07;
LAB_006703dc:
    FUN_00098758(ppuVar6,ppuVar11);
LAB_006703e8:
    uVar3 = FUN_00098718();
    FUN_0004fb3c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x006703f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ppuStack_f8 = ppuStack_2cc;
  uStack_2d4._0_4_ = (undefined ***)PTR_SUB_0066e8bc;
  FUN_0001eed8();
  ppuStack_10 = uStack_2d4._4_4_;
  uStack_2d4._4_4_[1] = (undefined *)0xb;
  *uStack_2d4._4_4_ = PTR_DAT_0066e90c;
  uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066e8b4;
  FUN_0001eed8();
  ppuStack_14 = uStack_2d4._4_4_;
  uStack_2d4._0_4_ = (undefined ***)PTR_SUB_0066e8bc;
  FUN_0001eed8();
  ppuStack_18 = uStack_2d4._4_4_;
  uStack_2d4._4_4_[1] = (undefined *)0x0;
  *uStack_2d4._4_4_ = (undefined *)0x0;
  uStack_2d4._0_4_ = (undefined ***)PTR_SUB_0066e8bc;
  FUN_0001eed8();
  uStack_2d4._4_4_[1] = (undefined *)0x3;
  *uStack_2d4._4_4_ = PTR_DAT_0066e910;
  uVar3 = FUN_00098a20(0,&ppuStack_1a4,PTR_DAT_0066e910,uStack_2d4._4_4_);
  ppuStack_1a4 = ppuStack_10;
  ppuStack_19c = ppuStack_14;
  ppuStack_1a0 = ppuStack_18;
  uStack_2d4._0_4_ = &ppuStack_f8;
  ppuStack_198 = extraout_r3_01;
  FUN_00098e0c(uVar3,&ppuStack_1a4,(int)&uStack_2d4 + 4);
  printerApi_service_k3c_wrapper___K3cwrapper__PublishCloudPrintStatus();
  uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066e914;
  uStack_2d4._4_4_ = in_stack_00000014;
  ppuStack_2cc = ppuStack_138;
  uStack_2c8._0_4_ = ppuStack_240;
  FUN_0031b538();
  ppuStack_1c8 = uStack_2c8._4_4_;
  cStack_2a3 = '\0';
LAB_0066ea80:
  uStack_2d4._0_4_ = (undefined ***)ppuStack_1c8;
  FUN_0031c6cc();
  ppuStack_1cc = uStack_2d4._4_4_;
  ppuVar6 = ppuStack_2cc;
  ppuVar11 = (undefined **)uStack_2c8;
  if (*(undefined ***)PTR_DAT_0066f154 == ppuStack_2cc) {
    ppuStack_1a8 = (undefined **)uStack_2c8;
    ppuStack_260 = ppuStack_2cc;
    uStack_2d4._0_4_ = (undefined ***)ppuStack_2cc;
    uStack_2d4._4_4_ = (undefined **)uStack_2c8;
    ppuStack_2cc = *(undefined ***)PTR_DAT_0066f158;
    FUN_000169b8();
    ppuVar6 = ppuStack_260;
    ppuVar11 = ppuStack_1a8;
    if ((char)uStack_2c8 != '\0') {
      ppuVar6 = (undefined **)0x0;
      ppuVar11 = (undefined **)0x0;
      puVar9 = (undefined1 *)0x0;
      puVar4 = (undefined *)0x0;
      ppuVar14 = (undefined **)0x0;
      ppuVar15 = (undefined **)0x0;
      goto LAB_0066f1ac;
    }
  }
  bVar17 = ppuVar6 == (undefined **)0x0;
  if (!bVar17) {
    FUN_00098a28(0,&puStack_44,ppuVar6,ppuVar11);
    puStack_44 = PTR_SUB_0066f138;
    puStack_40 = PTR_DAT_0066f18c;
    ppuStack_3c = (undefined **)extraout_r2_01;
    if (!bVar17) {
      ppuStack_3c = *(undefined ***)(extraout_r2_01 + 4);
    }
    uStack_2d4._0_4_ = (undefined ***)&puStack_44;
    uStack_2d4._4_4_ = (undefined **)0x2;
    ppuStack_2cc = (undefined **)0x2;
    printerApi_common_logger_Error();
    FUN_0008b6b8();
    uStack_2d4._4_4_ = (undefined **)(undefined ***)uStack_2d4;
    ppuStack_15c = (undefined **)(undefined ***)uStack_2d4;
    uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066f140;
    ppuStack_2cc = (undefined **)PTR_s_errorlocal1_8_7int16int32int64ui_00773bd2_0x13_0066f144;
    uStack_2c8._0_4_ = (undefined **)0x5;
    FUN_0008e7bc();
    uStack_2c8._4_4_[1] = (undefined *)0x1d;
    ppuVar6 = uStack_2c8._4_4_;
    if (*(int *)PTR_DAT_0066f148 != 0) {
      uVar19 = FUN_00098678(uStack_2c8._4_4_,*uStack_2c8._4_4_);
      ppuVar6 = (undefined **)uVar19;
      *puVar16 = (uint)((ulonglong)uVar19 >> 0x20);
    }
    *ppuVar6 = PTR_DAT_0066f190;
    uStack_2d4._0_4_ = (undefined ***)in_stack_00000004;
    uStack_2d4._4_4_ = (undefined **)0x190;
    ppuStack_2cc = (undefined **)PTR_DAT_0066f140;
    uStack_2c8._0_4_ = ppuStack_15c;
    printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
                    /* WARNING: Could not recover jumptable at 0x0066f134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (ppuStack_1cc[4] == (undefined *)0x0) {
    uStack_2d4._0_4_ = (undefined ***)ppuStack_1cc;
    FUN_0031b454();
  }
  if (ppuStack_1cc[3] == (undefined *)0x9) {
    uStack_2d4._0_4_ = (undefined ***)ppuStack_1cc[2];
    uStack_2d4._4_4_ = (undefined **)PTR_s_form_dataassistingcomplex64inter_0077568d_0x7c5_0066f15c;
    ppuStack_2cc = (undefined **)&DAT_00000009;
    FUN_000150d4();
    if ((char)uStack_2c8 == '\0') goto LAB_0066eb3c;
    uStack_2d4._4_4_ = (undefined **)ppuStack_1cc[4];
    uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066f140;
    ppuStack_2cc = (undefined **)PTR_s_namepathsizedatetypetext_gco_acm_0077367d_0xf_0066f160;
    uStack_2c8._0_4_ = (undefined **)&DAT_00000004;
    FUN_00021c74();
    pcVar7 = *uStack_2c8._4_4_;
    puVar4 = uStack_2c8._4_4_[1];
  }
  else {
LAB_0066eb3c:
    puVar4 = (undefined *)0x0;
    pcVar7 = (char *)0x0;
  }
  if (((((puVar4 == (undefined *)0x5) && (*pcVar7 == 'p')) && (pcVar7[1] == 'r')) &&
      ((pcVar7[2] == 'i' && (pcVar7[3] == 'n')))) && (pcVar7[4] == 't')) {
    uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066f164;
    uStack_2d4._4_4_ = (undefined **)0xa;
    ppuStack_2cc = (undefined **)0xa;
    FUN_000933e8();
    ppuStack_130 = (undefined **)uStack_2c8;
    uStack_2d4._0_4_ = (undefined ***)ppuStack_1cc[6];
    uStack_2d4._4_4_ = (undefined **)uStack_2c8;
    ppuStack_2cc = (undefined **)&DAT_0000000a;
    uStack_2c8._0_4_ = (undefined **)0xa;
    uVar3 = (**(code **)(ppuStack_1cc[5] + 0xc))();
    uVar19 = CONCAT44(uStack_2c8._4_4_,uVar3);
    if (&DAT_0000000a < uStack_2c8._4_4_) goto LAB_006703c0;
    if (((uStack_2c8._4_4_ == (undefined **)&DAT_00000004) && (*(char *)ppuStack_130 == 't')) &&
       ((*(char *)((int)ppuStack_130 + 1) == 'r' &&
        ((*(char *)((int)ppuStack_130 + 2) == 'u' && (*(char *)((int)ppuStack_130 + 3) == 'e'))))))
    {
      cStack_2a3 = '\x01';
    }
    uStack_2d4._0_4_ = *(undefined ****)PTR_DAT_0066f168;
    uStack_2d4._4_4_ = *(undefined ***)PTR_DAT_0066f16c;
    ppuStack_2cc = (undefined **)PTR_DAT_0066f170;
    uStack_2c8._0_4_ = ppuStack_1cc;
    uStack_2c8._4_4_ = (undefined **)0x0;
    ppuStack_2c0 = (undefined **)0x0;
    ppuStack_2bc = (undefined **)0x0;
    FUN_000e40d4(cStack_2a3);
    goto LAB_0066ea80;
  }
  if ((((puVar4 != (undefined *)0x4) || (*pcVar7 != 'f')) || (pcVar7[1] != 'i')) ||
     ((pcVar7[2] != 'l' || (pcVar7[3] != 'e')))) {
    uStack_2d4._0_4_ = *(undefined ****)PTR_DAT_0066f168;
    uStack_2d4._4_4_ = *(undefined ***)PTR_DAT_0066f16c;
    ppuStack_2cc = (undefined **)PTR_DAT_0066f170;
    uStack_2c8._4_4_ = (undefined **)0x0;
    ppuStack_2c0 = (undefined **)0x0;
    ppuStack_2bc = (undefined **)0x0;
    uStack_2c8._0_4_ = ppuStack_1cc;
    FUN_000e40d4();
    goto LAB_0066ea80;
  }
  uStack_2d4._0_4_ = (undefined ***)ppuStack_1cc;
  FUN_0031b3a4();
  ppuVar11 = ppuStack_2cc;
  ppuVar6 = uStack_2d4._4_4_;
  if (ppuStack_2cc == (undefined **)0x0) {
    puStack_34 = PTR_SUB_0066f138;
    ppuStack_30 = (undefined **)PTR_DAT_0066f184;
    uStack_2d4._0_4_ = (undefined ***)&puStack_34;
    uStack_2d4._4_4_ = (undefined **)0x1;
    ppuStack_2cc = (undefined **)0x1;
    printerApi_common_logger_Error();
    uStack_2d4._0_4_ = *(undefined ****)PTR_DAT_0066f168;
    uStack_2d4._4_4_ = *(undefined ***)PTR_DAT_0066f16c;
    ppuStack_2cc = (undefined **)PTR_DAT_0066f170;
    uStack_2c8._0_4_ = ppuStack_1cc;
    uStack_2c8._4_4_ = (undefined **)0x0;
    ppuStack_2c0 = (undefined **)0x0;
    ppuStack_2bc = (undefined **)0x0;
    FUN_000e40d4();
    FUN_0008b6b8();
    uStack_2d4._4_4_ = (undefined **)(undefined ***)uStack_2d4;
    uStack_160 = (undefined ***)uStack_2d4;
    uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066f140;
    ppuStack_2cc = (undefined **)PTR_s_errorlocal1_8_7int16int32int64ui_00773bd2_0x13_0066f144;
    uStack_2c8._0_4_ = (undefined **)0x5;
    FUN_0008e7bc();
    uStack_2c8._4_4_[1] = (undefined *)0x1a;
    puVar5 = uStack_2c8._4_4_;
    if (*(int *)PTR_DAT_0066f148 != 0) {
      uVar19 = FUN_00098678(uStack_2c8._4_4_,*uStack_2c8._4_4_);
      puVar5 = (undefined4 *)uVar19;
      *puVar16 = (uint)((ulonglong)uVar19 >> 0x20);
    }
    *puVar5 = PTR_DAT_0066f188;
    uStack_2d4._0_4_ = (undefined ***)in_stack_00000004;
    uStack_2d4._4_4_ = (undefined **)0x190;
    ppuStack_2cc = (undefined **)PTR_DAT_0066f140;
    uStack_2c8._0_4_ = (undefined **)uStack_160;
    printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
                    /* WARNING: Could not recover jumptable at 0x0066f048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar12 = *(int *)(*(int *)(*(int *)PTR_DAT_0066f174 + 8) + 0x16c);
  puVar4 = *(undefined **)(*(int *)(*(int *)PTR_DAT_0066f174 + 8) + 0x168);
  if (iVar12 == 0) {
    iVar12 = 0x18;
    puVar4 = PTR_DAT_0066f178;
  }
  ppuStack_280 = ppuStack_2cc;
  ppuStack_1b8 = uStack_2d4._4_4_;
  FUN_00098a28(0,auStack_108,puVar4,iVar12);
  ppuStack_fc = ppuVar11;
  ppuStack_100 = ppuVar6;
  uStack_2d4._0_4_ = (undefined ***)auStack_108;
  uStack_2d4._4_4_ = (undefined **)0x2;
  ppuStack_2cc = (undefined **)0x2;
  uVar3 = FUN_00159184();
  ppuStack_1b4 = (undefined **)uStack_2c8;
  ppuStack_274 = uStack_2c8._4_4_;
  uStack_2d4._0_4_ = (undefined ***)(undefined **)uStack_2c8;
  uStack_2d4._4_4_ = uStack_2c8._4_4_;
  ppuStack_2cc = (undefined **)0x242;
  uStack_2c8._0_4_ = (undefined **)0x1b6;
  FUN_0012576c(uVar3);
  bVar17 = ppuStack_2c0 == (undefined **)0x0;
  if (!bVar17) {
    FUN_00098a28(0,&puStack_44);
    puStack_44 = PTR_SUB_0066f138;
    puStack_40 = PTR_DAT_0066f17c;
    ppuStack_3c = (undefined **)extraout_r2_00;
    if (!bVar17) {
      ppuStack_3c = *(undefined ***)(extraout_r2_00 + 4);
    }
    uStack_2d4._0_4_ = (undefined ***)&puStack_44;
    uStack_2d4._4_4_ = (undefined **)0x2;
    ppuStack_2cc = (undefined **)0x2;
    printerApi_common_logger_Error();
    uStack_2d4._0_4_ = *(undefined ****)PTR_DAT_0066f168;
    uStack_2d4._4_4_ = *(undefined ***)PTR_DAT_0066f16c;
    ppuStack_2cc = (undefined **)PTR_DAT_0066f170;
    uStack_2c8._0_4_ = ppuStack_1cc;
    uStack_2c8._4_4_ = (undefined **)0x0;
    ppuStack_2c0 = (undefined **)0x0;
    ppuStack_2bc = (undefined **)0x0;
    FUN_000e40d4();
    FUN_0008b6b8();
    uStack_2d4._4_4_ = (undefined **)(undefined ***)uStack_2d4;
    uStack_164 = (undefined ***)uStack_2d4;
    uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066f140;
    ppuStack_2cc = (undefined **)PTR_s_errorlocal1_8_7int16int32int64ui_00773bd2_0x13_0066f144;
    uStack_2c8._0_4_ = (undefined **)0x5;
    FUN_0008e7bc();
    uStack_2c8._4_4_[1] = (undefined *)0x15;
    puVar5 = uStack_2c8._4_4_;
    if (*(int *)PTR_DAT_0066f148 != 0) {
      uVar19 = FUN_00098678(uStack_2c8._4_4_,*uStack_2c8._4_4_);
      puVar5 = (undefined4 *)uVar19;
      *puVar16 = (uint)((ulonglong)uVar19 >> 0x20);
    }
    *puVar5 = PTR_DAT_0066f180;
    uStack_2d4._0_4_ = (undefined ***)in_stack_00000004;
    uStack_2d4._4_4_ = (undefined **)0x1f4;
    ppuStack_2cc = (undefined **)PTR_DAT_0066f140;
    uStack_2c8._0_4_ = (undefined **)uStack_164;
    printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
                    /* WARNING: Could not recover jumptable at 0x0066ef0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ppuStack_1b0 = uStack_2c8._4_4_;
  uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066f164;
  uStack_2d4._4_4_ = (undefined **)0x40000;
  ppuStack_2cc = (undefined **)0x40000;
  FUN_000933e8();
  ppuStack_130 = (undefined **)uStack_2c8;
  puVar8 = (undefined1 *)0x0;
  puVar4 = (undefined *)0x0;
  dVar2 = (double)CONCAT44(uStack_2c8._4_4_,(undefined **)uStack_2c8);
LAB_0066fdf4:
  do {
    uStack_2c8._4_4_ = (undefined **)((ulonglong)dVar2 >> 0x20);
    puStack_29c = puVar4;
    puStack_298 = puVar8;
    if (in_stack_00000004[6] != (undefined *)0x0) {
      uStack_2c8 = dVar2;
      uVar3 = FUN_0010cf30();
      uVar3 = FUN_00098e14(uVar3,&uStack_2d4,&ppuStack_1a4);
      FUN_00098e14(uVar3,&ppuStack_1a4,&uStack_2d4);
      ppuStack_2c0 = _UNK_00670258;
      ppuStack_2bc = (undefined **)&DAT_00000006;
      uVar3 = FUN_00102dac();
      FUN_00098e14(uVar3,&uStack_2b8,&ppuStack_1a4);
      uStack_2d4._0_4_ = (undefined ***)in_stack_00000004[7];
      FUN_00098e14(in_stack_00000004,&ppuStack_1a4,(int)&uStack_2d4 + 4,
                   *(undefined4 *)(in_stack_00000004[6] + 0x20));
      (*extraout_r3_05)();
    }
    uStack_2d4._0_4_ = (undefined ***)ppuStack_1cc[6];
    ppuStack_2cc = (undefined **)0x40000;
    uStack_2c8._0_4_ = (undefined **)0x40000;
    uStack_2d4._4_4_ = ppuStack_130;
    (**(code **)(ppuStack_1cc[5] + 0xc))();
    ppuStack_264 = ppuStack_2c0;
    ppuStack_1ac = ppuStack_2bc;
    puVar4 = puStack_29c;
    puVar8 = puStack_298;
    if (0 < (int)uStack_2c8._4_4_) {
      if ((undefined **)0x40000 < uStack_2c8._4_4_) {
        uVar19 = FUN_00098738(ppuStack_2c0,uStack_2c8._4_4_,0x40000);
LAB_006703c0:
        uVar19 = FUN_00098738((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),10);
        goto LAB_006703c8;
      }
      ppuStack_294 = uStack_2c8._4_4_;
      uStack_2d4._0_4_ = (undefined ***)ppuStack_1b0;
      uStack_2d4._4_4_ = ppuStack_130;
      ppuStack_2cc = uStack_2c8._4_4_;
      uStack_2c8._0_4_ = (undefined **)0x40000;
      FUN_00124ccc();
      bVar17 = ppuStack_2c0 == (undefined **)0x0;
      if (!bVar17) {
        FUN_00098a28(0,&puStack_44,ppuStack_2bc,ppuStack_2c0);
        puStack_44 = PTR_SUB_00670220;
        puStack_40 = PTR_DAT_00670280;
        ppuStack_3c = (undefined **)extraout_r3_06;
        if (!bVar17) {
          ppuStack_3c = *(undefined ***)(extraout_r3_06 + 4);
        }
        uStack_2d4._0_4_ = (undefined ***)&puStack_44;
        uStack_2d4._4_4_ = (undefined **)0x2;
        ppuStack_2cc = (undefined **)0x2;
        printerApi_common_logger_Error();
        if (ppuStack_1b0 != (undefined **)0x0) {
          uStack_2d4._0_4_ = (undefined ***)*ppuStack_1b0;
          FUN_00127938();
        }
        uStack_2d4._0_4_ = *(undefined ****)PTR_DAT_00670408;
        uStack_2d4._4_4_ = *(undefined ***)PTR_DAT_0067040c;
        ppuStack_2cc = (undefined **)PTR_DAT_00670410;
        uStack_2c8._0_4_ = ppuStack_1cc;
        uStack_2c8._4_4_ = (undefined **)0x0;
        ppuStack_2c0 = (undefined **)0x0;
        ppuStack_2bc = (undefined **)0x0;
        FUN_000e40d4();
        uStack_2d4._0_4_ = (undefined ***)ppuStack_1b4;
        uStack_2d4._4_4_ = ppuStack_274;
        FUN_00127c60();
        FUN_0008b6b8();
        uStack_2d4._4_4_ = (undefined **)(undefined ***)uStack_2d4;
        ppuStack_168 = (undefined **)(undefined ***)uStack_2d4;
        uStack_2d4._0_4_ = (undefined ***)PTR_DAT_00670414;
        ppuStack_2cc = (undefined **)PTR_s_errorlocal1_8_7int16int32int64ui_00773bd2_0x13_00670418;
        uStack_2c8._0_4_ = (undefined **)0x5;
        FUN_0008e7bc();
        uStack_2c8._4_4_[1] = (undefined *)0x14;
        puVar5 = uStack_2c8._4_4_;
        if (*(int *)PTR_DAT_0067041c != 0) {
          uVar19 = FUN_00098678(uStack_2c8._4_4_,*uStack_2c8._4_4_);
          puVar5 = (undefined4 *)uVar19;
          *puVar16 = (uint)((ulonglong)uVar19 >> 0x20);
        }
        *puVar5 = PTR_DAT_00670420;
        uStack_2d4._0_4_ = (undefined ***)in_stack_00000004;
        uStack_2d4._4_4_ = (undefined **)0x1f4;
        ppuStack_2cc = (undefined **)PTR_DAT_00670414;
        uStack_2c8._0_4_ = ppuStack_168;
        printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
                    /* WARNING: Could not recover jumptable at 0x006703b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      puVar4 = puStack_29c + (int)ppuStack_294;
      puVar8 = puStack_298 +
               (uint)CARRY4((uint)puStack_29c,(uint)ppuStack_294) + ((int)ppuStack_294 >> 0x1f);
      if (0 < (int)*ppuStack_8) {
        uStack_2d4._0_4_ = (undefined ***)puVar4;
        uStack_2d4._4_4_ = (undefined **)puVar8;
        puStack_23c = puVar4;
        puStack_238 = puVar8;
        FUN_0008695c();
        dVar2 = (double)CONCAT44((undefined **)uStack_2c8,ppuStack_2cc);
        uStack_2d4._0_4_ = (undefined ***)in_stack_00000004;
        uStack_2d4._4_4_ = ppuStack_1b8;
        ppuStack_2cc = ppuStack_280;
        unaff_s30 = unaff_s30 & 0xffff0000 | (uint)*ppuStack_8 & 0xffff;
        dVar18 = (double)VectorSignedToFloat(unaff_s30,(byte)(in_fpscr >> 0x16) & 3);
        uStack_2c8 = (dVar2 / dVar18) * *(double *)PTR_DAT_0067025c;
        printerApi_service_orcaSim___OrcaMessageHandler__sendProgress();
        puVar4 = puStack_23c;
        puVar8 = puStack_238;
      }
    }
    if (ppuStack_264 == *(undefined ***)PTR_DAT_00670260) {
      ppuStack_2cc = *(undefined ***)PTR_DAT_00670264;
      uStack_2d4._0_4_ = (undefined ***)ppuStack_264;
      uStack_2d4._4_4_ = ppuStack_1ac;
      puStack_27c = puVar4;
      puStack_278 = puVar8;
      FUN_000169b8(ppuStack_2cc,ppuStack_1ac,ppuStack_8);
      puVar4 = puStack_27c;
      puVar8 = puStack_278;
      if ((char)uStack_2c8 != '\0') {
        if (ppuStack_1b0 != (undefined **)0x0) {
          uStack_2d4._0_4_ = (undefined ***)*ppuStack_1b0;
          FUN_00127938();
        }
        uStack_2d4._0_4_ = *(undefined ****)PTR_DAT_0067026c;
        uStack_2d4._4_4_ = *(undefined ***)PTR_DAT_00670270;
        ppuStack_2cc = (undefined **)PTR_DAT_00670274;
        uStack_2c8._0_4_ = ppuStack_1cc;
        uStack_2c8._4_4_ = (undefined **)0x0;
        ppuStack_2c0 = (undefined **)0x0;
        ppuStack_2bc = (undefined **)0x0;
        FUN_000e40d4();
        uStack_2d4._0_4_ = (undefined ***)in_stack_00000004;
        uStack_2d4._4_4_ = ppuStack_1b8;
        ppuStack_2cc = ppuStack_280;
        uStack_2c8._0_4_ = (undefined **)*(undefined8 *)PTR_DAT_0067027c;
        uStack_2c8._4_4_ = (undefined **)((ulonglong)*(undefined8 *)PTR_DAT_0067027c >> 0x20);
        printerApi_service_orcaSim___OrcaMessageHandler__sendProgress();
        ppuVar6 = ppuStack_280;
        ppuVar11 = ppuStack_1b8;
        puVar9 = puStack_278;
        puVar4 = puStack_27c;
        ppuVar14 = ppuStack_1b4;
        ppuVar15 = ppuStack_274;
LAB_0066f1ac:
        if ((ppuVar6 == (undefined **)0x0) || (ppuVar15 == (undefined **)0x0)) {
          puStack_34 = PTR_SUB_0066f9d8;
          ppuStack_30 = (undefined **)PTR_DAT_0066f9dc;
          uStack_2d4._0_4_ = (undefined ***)&puStack_34;
          uStack_2d4._4_4_ = (undefined **)0x1;
          ppuStack_2cc = (undefined **)0x1;
          printerApi_common_logger_Error();
          FUN_0008b6b8();
          uStack_2d4._4_4_ = (undefined **)(undefined ***)uStack_2d4;
          ppuStack_170 = (undefined **)(undefined ***)uStack_2d4;
          uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066f9e0;
          ppuStack_2cc = (undefined **)PTR_s_errorlocal1_8_7int16int32int64ui_00773bd2_0x13_0066f9e4
          ;
          uStack_2c8._0_4_ = (undefined **)0x5;
          FUN_0008e7bc();
          uStack_2c8._4_4_[1] = (undefined *)0x12;
          ppuVar6 = uStack_2c8._4_4_;
          if (*(int *)PTR_DAT_0066f9e8 != 0) {
            uVar19 = FUN_00098678(uStack_2c8._4_4_,*uStack_2c8._4_4_);
            ppuVar6 = (undefined **)uVar19;
            *puVar16 = (uint)((ulonglong)uVar19 >> 0x20);
          }
          *ppuVar6 = PTR_DAT_0077cb0a_3_0066f9ec;
          uStack_2d4._0_4_ = (undefined ***)in_stack_00000004;
          uStack_2d4._4_4_ = (undefined **)0x190;
          ppuStack_2cc = (undefined **)PTR_DAT_0066f9e0;
          uStack_2c8._0_4_ = ppuStack_170;
          printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
                    /* WARNING: Could not recover jumptable at 0x0066f27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        ppuStack_280 = ppuVar6;
        puStack_27c = puVar4;
        puStack_278 = puVar9;
        ppuStack_274 = ppuVar15;
        ppuStack_1b8 = ppuVar11;
        ppuStack_1b4 = ppuVar14;
        uVar3 = FUN_0010cf30();
        uVar3 = FUN_00098e14(uVar3,&uStack_2d4,&ppuStack_1a4);
        FUN_00098e14(uVar3,&ppuStack_1a4,&uStack_1e0);
        iVar12 = iStack_1d4;
        uVar10 = uStack_1d8;
        if ((uStack_1dc & 0x80000000) != 0) {
          uVar10 = (uStack_1e0 & 0x7fffffff) >> 0x1e | (uStack_1e0 >> 0x1f | uStack_1dc << 1) << 1;
          iVar12 = ((uStack_1dc & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar10,_UNK_0066f9f0);
          uVar10 = uVar10 + _UNK_0066f9f0;
        }
        puStack_34 = (undefined *)0x0;
        ppuStack_30 = (undefined **)0x0;
        uStack_2d4 = (ulonglong)uVar10 * (ulonglong)_UNK_0066f9f4 +
                     (CONCAT44(iVar12 * _UNK_0066f9f4,uStack_1e0) & 0xffffffff3fffffff) +
                     CONCAT44(_UNK_0066f9fc,_UNK_0066f9f8);
        FUN_0008a4bc();
        puStack_34 = PTR_DAT_0066fa00;
        ppuStack_30 = ppuStack_2cc;
        uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066fa04;
        uStack_2d4._4_4_ = (undefined **)0x6;
        ppuStack_2cc = &puStack_34;
        uStack_2c8._0_4_ = (undefined **)0x1;
        uStack_2c8._4_4_ = (undefined **)0x1;
        FUN_001331ac();
        ppuStack_1bc = ppuStack_2c0;
        ppuStack_288 = ppuStack_2bc;
        FUN_0008b6b8();
        ppuStack_140 = (undefined **)(undefined ***)uStack_2d4;
        uStack_2d4._0_4_ = (undefined ***)ppuStack_1b8;
        uStack_2d4._4_4_ = ppuStack_280;
        FUN_0008a578();
        ppuStack_130 = ppuStack_2cc;
        uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066fa08;
        uStack_2d4._4_4_ = ppuStack_140;
        ppuStack_2cc = (undefined **)PTR_s_namepathsizedatetypetext_gco_acm_0077367d_0xf_0066fa0c;
        uStack_2c8._0_4_ = (undefined **)0x4;
        FUN_0008e7bc();
        *uStack_2c8._4_4_ = PTR_SUB_0066f9d8;
        ppuVar6 = uStack_2c8._4_4_;
        if (*(int *)PTR_DAT_0066f9e8 != 0) {
          ppuVar6 = (undefined **)FUN_00098688();
          *puVar16 = (uint)ppuStack_130;
          puVar16[1] = (uint)ppuVar6[1];
        }
        ppuVar6[1] = (undefined *)ppuStack_130;
        FUN_00098a28(0,&puStack_118);
        uStack_114 = 5;
        puStack_118 = PTR_s_local1_8_7int16int32int64uint8ar_00773bd2_0x18_0066fa10;
        ppuStack_10c = ppuStack_280;
        ppuStack_110 = ppuStack_1b8;
        uStack_2d4._0_4_ = (undefined ***)&puStack_118;
        uStack_2d4._4_4_ = (undefined **)0x2;
        ppuStack_2cc = (undefined **)0x2;
        FUN_00159184();
        uStack_2d4._0_4_ = (undefined ***)(undefined **)uStack_2c8;
        uStack_2d4._4_4_ = uStack_2c8._4_4_;
        FUN_0008a578();
        ppuStack_130 = ppuStack_2cc;
        uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066fa08;
        uStack_2d4._4_4_ = ppuStack_140;
        ppuStack_2cc = (undefined **)PTR_s_pathsizedatetypetext_gco_acmbool_0077367d_0x13_0066fa14;
        puVar8 = &DAT_00000004;
        uStack_2c8._0_4_ = (undefined **)0x4;
        FUN_0008e7bc();
        *uStack_2c8._4_4_ = PTR_SUB_0066f9d8;
        puVar4 = *(undefined **)PTR_DAT_0066f9e8;
        ppuVar6 = uStack_2c8._4_4_;
        if (puVar4 != (undefined *)0x0) {
          FUN_00098688();
          *puVar16 = (uint)ppuStack_130;
          puVar16[1] = (uint)extraout_r2_02[1];
          ppuVar6 = extraout_r2_02;
        }
        ppuVar6[1] = (undefined *)ppuStack_130;
        uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066fa08;
        uStack_2d4._4_4_ = ppuStack_140;
        ppuStack_2cc = (undefined **)PTR_DAT_0066fa18;
        uStack_2c8._0_4_ = (undefined **)0x6;
        FUN_0008e7bc();
        puVar13 = PTR_SUB_0066f9d8;
        *uStack_2c8._4_4_ = PTR_SUB_0066f9d8;
        ppuVar6 = uStack_2c8._4_4_;
        if (*(int *)PTR_DAT_0066f9e8 != 0) {
          ppuVar6 = (undefined **)FUN_00098678(uStack_2c8._4_4_,puVar13,uStack_2c8._4_4_[1]);
          *puVar16 = extraout_r2_03;
        }
        ppuVar6[1] = PTR_DAT_0066fa1c;
        uStack_2d4._0_4_ = (undefined ***)puStack_27c;
        uStack_2d4._4_4_ = (undefined **)puStack_278;
        FUN_0008a4bc();
        ppuStack_130 = ppuStack_2cc;
        uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066fa08;
        uStack_2d4._4_4_ = ppuStack_140;
        ppuStack_2cc = (undefined **)PTR_s_sizedatetypetext_gco_acmboolint8_0077367d_0x17_0066fa20;
        uStack_2c8._0_4_ = (undefined **)0x4;
        FUN_0008e7bc();
        *uStack_2c8._4_4_ = PTR_DAT_0066fa00;
        ppuVar6 = uStack_2c8._4_4_;
        if (*(int *)PTR_DAT_0066f9e8 != 0) {
          ppuVar6 = (undefined **)FUN_00098688();
          *puVar16 = (uint)ppuStack_130;
          puVar16[1] = (uint)ppuVar6[1];
        }
        ppuVar6[1] = (undefined *)ppuStack_130;
        uVar3 = FUN_0010cf30();
        uVar3 = FUN_00098e14(uVar3,&uStack_2d4,&ppuStack_1a4);
        FUN_00098e14(uVar3,&ppuStack_1a4,&uStack_2d4);
        ppuStack_2c0 = (undefined **)PTR_DAT_0066fa24;
        ppuStack_2bc = (undefined **)&DAT_00000019;
        FUN_000f8b64();
        uStack_2d4._0_4_ = (undefined ***)uStack_2b8;
        uStack_2d4._4_4_ = (undefined **)uStack_2b4;
        FUN_0008a578();
        ppuStack_130 = ppuStack_2cc;
        uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066fa08;
        uStack_2d4._4_4_ = ppuStack_140;
        ppuStack_2cc = (undefined **)PTR_s_datetypetext_gco_acmboolint8chan_0077367d_0x1b_0066fa28;
        uStack_2c8._0_4_ = (undefined **)0x4;
        FUN_0008e7bc();
        *uStack_2c8._4_4_ = PTR_SUB_0066f9d8;
        ppuVar6 = uStack_2c8._4_4_;
        if (*(int *)PTR_DAT_0066f9e8 != 0) {
          ppuVar6 = (undefined **)FUN_00098688();
          *puVar16 = (uint)ppuStack_130;
          puVar16[1] = (uint)ppuVar6[1];
        }
        ppuVar6[1] = (undefined *)ppuStack_130;
        uStack_2d4._0_4_ = (undefined ***)ppuStack_1b8;
        uStack_2d4._4_4_ = ppuStack_280;
        FUN_0008a578();
        ppuStack_130 = ppuStack_2cc;
        uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066fa08;
        uStack_2d4._4_4_ = ppuStack_140;
        ppuStack_2cc = (undefined **)PTR_s_displayCreatedinvaliduintptrSwap_00774847_0x258_0066fa2c;
        uStack_2c8._0_4_ = (undefined **)0x7;
        FUN_0008e7bc();
        *uStack_2c8._4_4_ = PTR_SUB_0066f9d8;
        ppuVar6 = uStack_2c8._4_4_;
        if (*(int *)PTR_DAT_0066f9e8 != 0) {
          ppuVar6 = (undefined **)FUN_00098688();
          *puVar16 = (uint)ppuStack_130;
          puVar16[1] = (uint)ppuVar6[1];
        }
        ppuVar6[1] = (undefined *)ppuStack_130;
        uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066fa08;
        uStack_2d4._4_4_ = ppuStack_140;
        ppuStack_2cc = (undefined **)PTR_s_typetext_gco_acmboolint8chanfunc_0077367d_0x1f_0066fa30;
        uStack_2c8._0_4_ = (undefined **)0x4;
        FUN_0008e7bc();
        puVar13 = PTR_SUB_0066f9d8;
        *uStack_2c8._4_4_ = PTR_SUB_0066f9d8;
        ppuVar6 = uStack_2c8._4_4_;
        if (*(int *)PTR_DAT_0066f9e8 != 0) {
          ppuVar6 = (undefined **)FUN_00098678(uStack_2c8._4_4_,puVar13,uStack_2c8._4_4_[1]);
          *puVar16 = extraout_r2_04;
        }
        ppuVar6[1] = PTR_DAT_0066fa34;
        FUN_0008b6b8();
        uStack_2d4._4_4_ = (undefined **)(undefined ***)uStack_2d4;
        puStack_134 = (undefined *)(undefined ***)uStack_2d4;
        uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066f9e0;
        ppuStack_2cc = _UNK_0066fa38;
        uStack_2c8._0_4_ = (undefined **)0x2;
        FUN_0008e7bc();
        uStack_2c8._4_4_[1] = (undefined *)ppuStack_288;
        ppuVar6 = uStack_2c8._4_4_;
        if (*(int *)PTR_DAT_0066f9e8 != 0) {
          ppuVar6 = (undefined **)FUN_00098688();
          *puVar16 = (uint)ppuStack_1bc;
          puVar16[1] = (uint)*ppuVar6;
        }
        *ppuVar6 = (undefined *)ppuStack_1bc;
        uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066fa08;
        uStack_2d4._4_4_ = ppuStack_140;
        ppuStack_2cc = (undefined **)PTR_DAT_0066fa3c;
        uStack_2c8._0_4_ = (undefined **)0x3;
        FUN_0008e7bc();
        *uStack_2c8._4_4_ = PTR_DAT_0066f9e0;
        ppuVar6 = uStack_2c8._4_4_;
        if (*(int *)PTR_DAT_0066f9e8 != 0) {
          ppuVar6 = (undefined **)FUN_00098688();
          *puVar16 = (uint)puStack_134;
          puVar16[1] = (uint)ppuVar6[1];
        }
        ppuVar6[1] = puStack_134;
        uStack_2d4._0_4_ = *(undefined ****)PTR_DAT_0066fa40;
        FUN_0009bf4c();
        uVar19 = CONCAT44(PTR_DAT_0066fa44,uStack_2d4._4_4_);
        if (uStack_2d4._4_4_ == (undefined **)PTR_DAT_0066fa44) {
          ppuStack_11c = ppuStack_2cc;
          uStack_2d4._0_4_ = (undefined ***)PTR_SUB_0066f9d8;
          FUN_0001eed8();
          ppuStack_1c = uStack_2d4._4_4_;
          uStack_2d4._4_4_[1] = (undefined *)0x8;
          *uStack_2d4._4_4_ = PTR_s_checkingprintingresumingstopping_00774847_0xa16_0066fa48;
          uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066fa4c;
          FUN_0001eed8();
          ppuStack_20 = uStack_2d4._4_4_;
          uStack_2d4._0_4_ = (undefined ***)PTR_SUB_0066f9d8;
          FUN_0001eed8();
          uStack_2d4._4_4_[1] = (undefined *)ppuStack_274;
          ppuVar6 = uStack_2d4._4_4_;
          if (*(int *)PTR_DAT_0066f9e8 != 0) {
            ppuVar6 = (undefined **)FUN_00098678();
            *puVar16 = (uint)ppuStack_1b4;
          }
          *ppuVar6 = (undefined *)ppuStack_1b4;
          uStack_2d4._0_4_ = (undefined ***)PTR_SUB_0066f9d8;
          ppuStack_24 = ppuVar6;
          FUN_0001eed8();
          uStack_2d4._4_4_[1] = (undefined *)0x3;
          puVar13 = PTR_DAT_0066fa50;
          *uStack_2d4._4_4_ = PTR_DAT_0066fa50;
          uVar3 = FUN_00098a20(0,&ppuStack_1a4,puVar13,uStack_2d4._4_4_);
          ppuStack_1a4 = ppuStack_1c;
          ppuStack_19c = ppuStack_20;
          ppuStack_1a0 = ppuStack_24;
          uStack_2d4._0_4_ = &ppuStack_11c;
          FUN_00098e0c(uVar3,&ppuStack_1a4,(int)&uStack_2d4 + 4);
          printerApi_service_k3c_wrapper___K3cwrapper__PublishCloudPrintStatus();
          if (cStack_2a3 == '\0') {
            bStack_2a2 = 0;
LAB_0066fd48:
            uStack_2d4._0_4_ = (undefined ***)in_stack_00000004;
            uStack_2d4._4_4_ = (undefined **)0xc9;
            ppuStack_2cc = (undefined **)PTR_DAT_00670250;
            uStack_2c8._0_4_ = ppuStack_140;
            printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
            if ((bStack_2a2 & 1) != 0) {
              bStack_2a1 = bStack_2a2 & 0xfe;
              (*(code *)*ppuStack_4)();
            }
                    /* WARNING: Could not recover jumptable at 0x0066fda8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
          FUN_00098ddc(cStack_2a3,PTR_DAT_0066fa54,&ppuStack_1a4);
          ppuStack_19c = ppuStack_1b4;
          ppuStack_198 = ppuStack_274;
          FUN_00098ddc(ppuStack_1b4,&ppuStack_1a4,auStack_210);
          uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066fa58;
          uStack_2d4._4_4_ = (undefined **)auStack_210;
          FUN_0001cd7c();
          uStack_2d4._0_4_ = *(undefined ****)PTR_DAT_0066fa5c;
          uStack_2d4._4_4_ = (undefined **)PTR_DAT_0066fa60;
          printerApi_service_event___Dispatcher__Dispatch();
          uStack_2d4._0_4_ = *(undefined ****)PTR_DAT_0066fa40;
          FUN_0009bf4c();
          puVar13 = PTR_DAT_0066fa44;
          if (uStack_2d4._4_4_ == (undefined **)PTR_DAT_0066fa44) {
            ppuStack_120 = ppuStack_2cc;
            uStack_2d4._0_4_ = (undefined ***)PTR_SUB_0066f9d8;
            FUN_0001eed8();
            ppuStack_28 = uStack_2d4._4_4_;
            uStack_2d4._4_4_[1] = (undefined *)0xa;
            *uStack_2d4._4_4_ = PTR_s_preheatingperipherieaiSettingshe_007765bd_0x220_0066fa64;
            uStack_2d4._0_4_ = (undefined ***)PTR_DAT_0066fa4c;
            FUN_0001eed8();
            ppuStack_214 = uStack_2d4._4_4_;
            uStack_2d4._0_4_ = (undefined ***)PTR_SUB_0066f9d8;
            FUN_0001eed8();
            uStack_2d4._4_4_[1] = (undefined *)ppuStack_274;
            ppuVar6 = uStack_2d4._4_4_;
            if (*(int *)PTR_DAT_0066f9e8 != 0) {
              ppuVar6 = (undefined **)FUN_00098678();
              *puVar16 = (uint)ppuStack_1b4;
            }
            *ppuVar6 = (undefined *)ppuStack_1b4;
            uStack_2d4._0_4_ = (undefined ***)PTR_SUB_00670220;
            ppuStack_2c = ppuVar6;
            FUN_0001eed8();
            uStack_2d4._4_4_[1] = (undefined *)0x3;
            *uStack_2d4._4_4_ = PTR_DAT_00670224;
            uVar3 = FUN_00098a20(0,&ppuStack_1a4,uStack_2d4._4_4_);
            ppuStack_1a4 = ppuStack_28;
            ppuStack_19c = ppuStack_214;
            ppuStack_1a0 = ppuStack_2c;
            uStack_2d4._0_4_ = &ppuStack_120;
            ppuStack_198 = extraout_r2_05;
            FUN_00098e0c(uVar3,&ppuStack_1a4,(int)&uStack_2d4 + 4);
            printerApi_service_k3c_wrapper___K3cwrapper__PublishCloudPrintStatus();
            uStack_2d4._0_4_ = (undefined ***)PTR_DAT_00670228;
            uStack_2d4._4_4_ = (undefined **)PTR_DAT_0067022c;
            ppuStack_2cc = _UNK_00670230;
            uStack_2c8._0_4_ = (undefined **)0x8b;
            FUN_00155144();
            ppuStack_244 = uStack_2c8._4_4_;
            ppuStack_13c = ppuStack_2c0;
            ppuStack_4 = ppuStack_2bc;
            bStack_2a1 = 1;
            uStack_2d4._0_4_ = (undefined ***)uStack_2c8._4_4_;
            uStack_2d4._4_4_ = ppuStack_2c0;
            ppuStack_2cc = ppuStack_1b4;
            uStack_2c8._0_4_ = ppuStack_274;
            printerApi_service_orcaSim_ensureAcmMappingForFilamentHub();
            bVar17 = uStack_2c8._4_4_ == (undefined **)0x0;
            if (!bVar17) {
              FUN_00098a28(0,&puStack_44,ppuStack_2c0,uStack_2c8._4_4_);
              puVar8 = PTR_DAT_00670234;
              puVar4 = PTR_SUB_00670220;
              puStack_44 = PTR_SUB_00670220;
              puStack_40 = PTR_DAT_00670234;
              ppuStack_3c = (undefined **)extraout_r3_02;
              if (!bVar17) {
                ppuStack_3c = *(undefined ***)(extraout_r3_02 + 4);
              }
              uStack_2d4._0_4_ = (undefined ***)&puStack_44;
              uStack_2d4._4_4_ = (undefined **)0x2;
              ppuStack_2cc = (undefined **)0x2;
              printerApi_common_logger_Warn();
            }
            uStack_2d4._0_4_ = *(undefined ****)PTR_DAT_00670238;
            FUN_0009bf4c();
            if (uStack_2d4._4_4_ == (undefined **)PTR_DAT_0067023c) {
              ppuStack_124 = ppuStack_2cc;
              uStack_2d4._0_4_ = &ppuStack_124;
              uStack_2d4._4_4_ = ppuStack_244;
              ppuStack_2cc = ppuStack_13c;
              uStack_2c8._0_4_ = ppuStack_1b4;
              uStack_2c8._4_4_ = ppuStack_274;
              printerApi_service_k3c_wrapper___K3cwrapper__PrintFile();
              bVar17 = ppuStack_2c0 == (undefined **)0x0;
              if (!bVar17) {
                ppuStack_268 = ppuStack_2c0;
                FUN_00098a28(0,&puStack_44,ppuStack_2bc,ppuStack_2c0);
                puStack_44 = PTR_SUB_00670220;
                puStack_40 = PTR_DAT_00670240;
                ppuStack_3c = (undefined **)extraout_r3_03;
                if (!bVar17) {
                  ppuStack_3c = *(undefined ***)(extraout_r3_03 + 4);
                }
                uStack_2d4._0_4_ = (undefined ***)&puStack_44;
                uStack_2d4._4_4_ = (undefined **)0x2;
                ppuStack_2cc = (undefined **)0x2;
                ppuStack_128 = (undefined **)extraout_r2_06;
                printerApi_common_logger_Error();
                uStack_2d4._0_4_ = (undefined ***)ppuStack_128;
                (*(code *)ppuStack_268[3])();
                ppuStack_290 = ppuStack_2cc;
                puStack_1c4 = (undefined *)uStack_2d4._4_4_;
                FUN_0008b6b8();
                uStack_2d4._4_4_ = (undefined **)(undefined ***)uStack_2d4;
                uStack_174 = (undefined ***)uStack_2d4;
                uStack_2d4._0_4_ = (undefined ***)PTR_DAT_00670244;
                ppuStack_2cc = (undefined **)
                               PTR_s_errorlocal1_8_7int16int32int64ui_00773bd2_0x13_00670248;
                uStack_2c8._0_4_ = (undefined **)0x5;
                FUN_0008e7bc();
                uStack_2c8._4_4_[1] = (undefined *)ppuStack_290;
                ppuVar6 = uStack_2c8._4_4_;
                if (*(int *)PTR_DAT_0067024c != 0) {
                  ppuVar6 = (undefined **)FUN_00098688();
                  *puVar16 = (uint)puStack_1c4;
                  puVar16[1] = (uint)*ppuVar6;
                }
                *ppuVar6 = puStack_1c4;
                uStack_2d4._0_4_ = (undefined ***)in_stack_00000004;
                uStack_2d4._4_4_ = (undefined **)0x1f4;
                ppuStack_2cc = (undefined **)PTR_DAT_00670244;
                uStack_2c8._0_4_ = (undefined **)uStack_174;
                printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
                bStack_2a1 = 0;
                (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0066fd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*UNRECOVERED_JUMPTABLE)();
                return;
              }
              bStack_2a2 = 1;
              goto LAB_0066fd48;
            }
            uStack_2d4._0_4_ = (undefined ***)uStack_2d4._4_4_;
            uStack_2d4._4_4_ = (undefined **)PTR_DAT_0067023c;
            ppuStack_2cc = (undefined **)PTR_DAT_00670254;
            uStack_2d4._4_4_ = (undefined **)FUN_0001cb94();
            puVar13 = extraout_r3_04;
          }
          ppuStack_2cc = (undefined **)PTR_DAT_00670254;
          uStack_2d4._0_4_ = (undefined ***)uStack_2d4._4_4_;
          uStack_2d4._4_4_ = (undefined **)puVar13;
          uVar19 = FUN_0001cb94();
        }
        ppuStack_2cc = (undefined **)PTR_DAT_00670254;
        uStack_2d4 = uVar19;
        FUN_0001cb94();
        dVar2 = (double)CONCAT44(uStack_2c8._4_4_,(undefined **)uStack_2c8);
        goto LAB_0066fdf4;
      }
    }
    ppuVar6 = ppuStack_264;
    bVar17 = ppuStack_264 == (undefined **)0x0;
    dVar2 = uStack_2c8;
    if (!bVar17) {
      FUN_00098a28(0,&puStack_44,ppuStack_8);
      puStack_44 = PTR_SUB_00670220;
      puStack_40 = PTR_DAT_00670268;
      if (!bVar17) {
        ppuVar6 = (undefined **)ppuVar6[1];
      }
      ppuStack_38 = ppuStack_1ac;
      uStack_2d4._0_4_ = (undefined ***)&puStack_44;
      uStack_2d4._4_4_ = (undefined **)0x2;
      ppuStack_2cc = (undefined **)0x2;
      ppuStack_3c = ppuVar6;
      printerApi_common_logger_Error();
      if (ppuStack_1b0 != (undefined **)0x0) {
        uStack_2d4._0_4_ = (undefined ***)*ppuStack_1b0;
        FUN_00127938();
      }
      uStack_2d4._0_4_ = *(undefined ****)PTR_DAT_0067026c;
      uStack_2d4._4_4_ = *(undefined ***)PTR_DAT_00670270;
      ppuStack_2cc = (undefined **)PTR_DAT_00670274;
      uStack_2c8._0_4_ = ppuStack_1cc;
      uStack_2c8._4_4_ = (undefined **)0x0;
      ppuStack_2c0 = (undefined **)0x0;
      ppuStack_2bc = (undefined **)0x0;
      FUN_000e40d4();
      uStack_2d4._0_4_ = (undefined ***)ppuStack_1b4;
      uStack_2d4._4_4_ = ppuStack_274;
      FUN_00127c60();
      FUN_0008b6b8();
      uStack_2d4._4_4_ = (undefined **)(undefined ***)uStack_2d4;
      ppuStack_16c = (undefined **)(undefined ***)uStack_2d4;
      uStack_2d4._0_4_ = (undefined ***)PTR_DAT_00670244;
      ppuStack_2cc = (undefined **)PTR_s_errorlocal1_8_7int16int32int64ui_00773bd2_0x13_00670248;
      uStack_2c8._0_4_ = (undefined **)0x5;
      FUN_0008e7bc();
      uStack_2c8._4_4_[1] = (undefined *)0x18;
      puVar5 = uStack_2c8._4_4_;
      if (*(int *)PTR_DAT_0067024c != 0) {
        uVar19 = FUN_00098678(uStack_2c8._4_4_,*uStack_2c8._4_4_);
        puVar5 = (undefined4 *)uVar19;
        *puVar16 = (uint)((ulonglong)uVar19 >> 0x20);
      }
      *puVar5 = PTR_DAT_00670278;
      uStack_2d4._0_4_ = (undefined ***)in_stack_00000004;
      uStack_2d4._4_4_ = (undefined **)0x190;
      ppuStack_2cc = (undefined **)PTR_DAT_00670244;
      uStack_2c8._0_4_ = ppuStack_16c;
      printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
                    /* WARNING: Could not recover jumptable at 0x00670148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  } while( true );
}



/* printerApi/service/orcaSim.(*OrcaMessageHandler).jsonResponse @ 00670428 (size 752) */

void printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar4;
  undefined8 uVar5;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iStack_50;
  undefined4 uStack_4c;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  while (puVar1 = PTR_DAT_0067071c, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x670714;
    FUN_00096bb8();
  }
  uVar7 = 0;
  uVar8 = 0;
  uVar3 = in_stack_0000000c;
  uVar6 = in_stack_00000010;
  FUN_00170a5c();
  bVar4 = iStack_50 == 0;
  if (!bVar4) {
    FUN_00098a28(0,&puStack_10,uStack_4c,iStack_50,UNRECOVERED_JUMPTABLE_00,uVar3,uVar6,uVar7,uVar8)
    ;
    puStack_10 = PTR_SUB_00670720;
    puStack_c = PTR_DAT_00670724;
    iStack_8 = extraout_r3;
    if (!bVar4) {
      iStack_8 = *(int *)(extraout_r3 + 4);
    }
    printerApi_common_logger_Error();
    FUN_0008b6b8();
    FUN_0008e7bc();
    *(undefined4 *)(puVar1 + 4) = 0x15;
    puVar2 = (undefined4 *)puVar1;
    if (*(int *)PTR_DAT_00670730 != 0) {
      uVar5 = FUN_00098678(puVar1,*(undefined4 *)puVar1);
      puVar2 = (undefined4 *)uVar5;
      *unaff_r8 = (int)((ulonglong)uVar5 >> 0x20);
    }
    *puVar2 = PTR_DAT_00670734;
    printerApi_service_orcaSim___OrcaMessageHandler__jsonResponse();
    in_stack_00000014 = puVar1;
    in_stack_00000018 = 2;
                    /* WARNING: Could not recover jumptable at 0x00670568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (in_stack_00000008 < 0x191) {
    if (in_stack_00000008 == 0xc9) {
      uVar3 = 7;
      goto LAB_006705fc;
    }
    if (in_stack_00000008 == 0xcc) {
      uVar3 = 10;
      goto LAB_006705fc;
    }
    if (in_stack_00000008 == 400) {
      uVar3 = 0xb;
      goto LAB_006705fc;
    }
  }
  else {
    if (in_stack_00000008 == 0x194) {
      uVar3 = 9;
      goto LAB_006705fc;
    }
    if (in_stack_00000008 == 0x199) {
      uVar3 = 8;
      goto LAB_006705fc;
    }
    if (in_stack_00000008 == 500) {
      uVar3 = 0x15;
      goto LAB_006705fc;
    }
  }
  uVar3 = 2;
LAB_006705fc:
  FUN_00098a18(0,&puStack_30);
  FUN_0001cec0();
  puStack_30 = PTR_DAT_00670750;
  uStack_2c = uVar6;
  FUN_0008a578();
  puStack_28 = PTR_SUB_00670720;
  uStack_24 = uVar7;
  FUN_0001cec0();
  puStack_20 = PTR_DAT_00670750;
  uStack_1c = uVar3;
  FUN_0008a61c();
  puStack_18 = PTR_DAT_00670754;
  uVar3 = 4;
  uStack_14 = uVar8;
  FUN_001331ac();
  FUN_00071920();
  in_stack_00000014 = (undefined *)uVar3;
  in_stack_00000018 = 4;
  in_stack_0000001c = 2;
                    /* WARNING: Could not recover jumptable at 0x00670708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/orcaSim.(*OctoPrintAPIHandler).HandleMessage @ 0067075c (size 980) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_orcaSim___OctoPrintAPIHandler__HandleMessage(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *puVar3;
  undefined4 *extraout_r2_00;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  bool bVar7;
  undefined8 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x50) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093e34();
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      FUN_0008a578();
      *(undefined **)((int)register0x00000054 + -8) = PTR_SUB_00670b34;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00670b38;
      *(undefined4 *)((int)register0x00000054 + -0x48) = 0x13;
      *(undefined1 **)((int)register0x00000054 + -0x44) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x40) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = 1;
      printerApi_common_logger_Debugf();
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093e34();
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_00670b3c;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x38) = 2;
      FUN_00146be8();
      bVar7 = *(int *)((int)register0x00000054 + -0x30) == 0;
      if (!bVar7) break;
      param_1 = FUN_000986f8(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x50);
      if (bVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x670b2c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
  uVar1 = (*(undefined4 **)((int)register0x00000054 + -0x34))[1];
  *(undefined4 *)((int)register0x00000054 + -0x4c) =
       **(undefined4 **)((int)register0x00000054 + -0x34);
  *(undefined4 *)((int)register0x00000054 + -0x48) = uVar1;
  FUN_00146f38();
  if (*(int *)((int)register0x00000054 + -0x40) < 3) {
    *(undefined **)((int)register0x00000054 + -8) = PTR_SUB_00670b34;
    *(undefined **)((int)register0x00000054 + -4) = PTR_DAT_00670b70;
    *(undefined1 **)((int)register0x00000054 + -0x4c) = (undefined1 *)((int)register0x00000054 + -8)
    ;
    *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
    *(undefined4 *)((int)register0x00000054 + -0x44) = 1;
    printerApi_common_logger_Error();
    *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
    *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
    *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00670b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((int)register0x00000054 + -0x50))();
    return;
  }
  iVar5 = *(int *)(*(int *)((int)register0x00000054 + -0x44) + 0xc);
  uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x44) + 8);
  if (iVar5 == 0xc) {
    *(undefined4 *)((int)register0x00000054 + -0x24) = uVar1;
    *(undefined4 *)((int)register0x00000054 + -0x28) = 0xc;
    *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar1;
    *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_00670b40;
    *(undefined4 *)((int)register0x00000054 + -0x44) = 0xc;
    FUN_000150d4();
    if (*(char *)((int)register0x00000054 + -0x40) != '\0') {
      FUN_0008b6b8(*(char *)((int)register0x00000054 + -0x40));
      uVar1 = *(undefined4 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar1;
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00670b48;
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x44) = _UNK_00670b58;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 3;
      FUN_0008e7bc();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x3c);
      puVar3[1] = 3;
      if (*(int *)PTR_DAT_00670b50 != 0) {
        uVar8 = FUN_00098678(puVar3,*puVar3);
        puVar3 = (undefined4 *)uVar8;
        *unaff_r8 = (int)((ulonglong)uVar8 >> 0x20);
      }
      *puVar3 = PTR_DAT_00670b5c;
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00670b48;
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_00670b60;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 6;
      FUN_0008e7bc();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x3c);
      puVar3[1] = 5;
      if (*(int *)PTR_DAT_00670b50 != 0) {
        uVar8 = FUN_00098678(puVar3,*puVar3);
        puVar3 = (undefined4 *)uVar8;
        *unaff_r8 = (int)((ulonglong)uVar8 >> 0x20);
      }
      *puVar3 = PTR_s_1_8_7int16int32int64uint8arrayfu_00773bd2_0x1d_00670b64;
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00670b48;
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      *(undefined **)((int)register0x00000054 + -0x44) =
           PTR_s_text_gco_acmboolint8chanfuncpart_0077367d_0x23_00670b68;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 4;
      FUN_0008e7bc();
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x3c);
      puVar3[1] = 0xf;
      if (*(int *)PTR_DAT_00670b50 != 0) {
        uVar8 = FUN_00098678(puVar3,*puVar3);
        puVar3 = (undefined4 *)uVar8;
        *unaff_r8 = (int)((ulonglong)uVar8 >> 0x20);
      }
      *puVar3 = PTR_DAT_00670b6c;
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x48) = 200;
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_00670b48;
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      printerApi_service_orcaSim___OctoPrintAPIHandler__jsonResponse();
      uVar1 = *(undefined4 *)((int)register0x00000054 + -0x3c);
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x38);
      uVar4 = *(undefined4 *)((int)register0x00000054 + -0x34);
      goto LAB_00670ac4;
    }
    uVar1 = *(undefined4 *)((int)register0x00000054 + -0x24);
    iVar5 = *(int *)((int)register0x00000054 + -0x28);
  }
  FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x18),uVar1,iVar5);
  *(undefined **)((int)register0x00000054 + -0x18) = PTR_SUB_00670b34;
  *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_00670b44;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = extraout_r2;
  *(undefined4 *)((int)register0x00000054 + -0x48) = extraout_r3;
  FUN_0008a578();
  *(undefined **)((int)register0x00000054 + -0x10) = PTR_SUB_00670b34;
  *(undefined4 *)((int)register0x00000054 + -0xc) = *(undefined4 *)((int)register0x00000054 + -0x44)
  ;
  *(undefined1 **)((int)register0x00000054 + -0x4c) =
       (undefined1 *)((int)register0x00000054 + -0x18);
  *(undefined4 *)((int)register0x00000054 + -0x48) = 2;
  *(undefined4 *)((int)register0x00000054 + -0x44) = 2;
  uVar1 = printerApi_common_logger_Warn();
  FUN_0008b6b8(uVar1);
  uVar1 = *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x20) = uVar1;
  *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00670b48;
  *(undefined4 *)((int)register0x00000054 + -0x48) = uVar1;
  *(undefined **)((int)register0x00000054 + -0x44) =
       PTR_s_errorlocal1_8_7int16int32int64ui_00773bd2_0x13_00670b4c;
  *(undefined4 *)((int)register0x00000054 + -0x40) = 5;
  FUN_0008e7bc();
  puVar3 = *(undefined4 **)((int)register0x00000054 + -0x3c);
  puVar3[1] = 9;
  if (*(int *)PTR_DAT_00670b50 != 0) {
    uVar1 = FUN_00098678(*puVar3);
    *unaff_r8 = uVar1;
    puVar3 = extraout_r2_00;
  }
  *puVar3 = PTR_s_Not_Foundform_dataassistingcompl_0077568d_0x7bc_00670b54;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = *(undefined4 *)((int)register0x00000054 + 4);
  *(undefined4 *)((int)register0x00000054 + -0x48) = 0x194;
  *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_00670b48;
  *(undefined4 *)((int)register0x00000054 + -0x40) =
       *(undefined4 *)((int)register0x00000054 + -0x20);
  printerApi_service_orcaSim___OctoPrintAPIHandler__jsonResponse();
  uVar1 = *(undefined4 *)((int)register0x00000054 + -0x3c);
  uVar2 = *(undefined4 *)((int)register0x00000054 + -0x38);
  uVar4 = *(undefined4 *)((int)register0x00000054 + -0x34);
LAB_00670ac4:
  *(undefined4 *)((int)register0x00000054 + 0x18) = uVar1;
  *(undefined4 *)((int)register0x00000054 + 0x1c) = uVar2;
  *(undefined4 *)((int)register0x00000054 + 0x20) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00670ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((int)register0x00000054 + -0x50))();
  return;
}



/* printerApi/service/orcaSim.(*OctoPrintAPIHandler).jsonResponse @ 00670b74 (size 752) */

void printerApi_service_orcaSim___OctoPrintAPIHandler__jsonResponse(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar4;
  undefined8 uVar5;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iStack_50;
  undefined4 uStack_4c;
  undefined *puStack_30;
  undefined4 uStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  while (puVar1 = PTR_DAT_00670e68, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x670e60;
    FUN_00096bb8();
  }
  uVar7 = 0;
  uVar8 = 0;
  uVar3 = in_stack_0000000c;
  uVar6 = in_stack_00000010;
  FUN_00170a5c();
  bVar4 = iStack_50 == 0;
  if (!bVar4) {
    FUN_00098a28(0,&puStack_10,uStack_4c,iStack_50,UNRECOVERED_JUMPTABLE_00,uVar3,uVar6,uVar7,uVar8)
    ;
    puStack_10 = PTR_SUB_00670e6c;
    puStack_c = PTR_DAT_00670e70;
    iStack_8 = extraout_r3;
    if (!bVar4) {
      iStack_8 = *(int *)(extraout_r3 + 4);
    }
    printerApi_common_logger_Error();
    FUN_0008b6b8();
    FUN_0008e7bc();
    *(undefined4 *)(puVar1 + 4) = 0x15;
    puVar2 = (undefined4 *)puVar1;
    if (*(int *)PTR_DAT_00670e7c != 0) {
      uVar5 = FUN_00098678(puVar1,*(undefined4 *)puVar1);
      puVar2 = (undefined4 *)uVar5;
      *unaff_r8 = (int)((ulonglong)uVar5 >> 0x20);
    }
    *puVar2 = PTR_DAT_00670e80;
    printerApi_service_orcaSim___OctoPrintAPIHandler__jsonResponse();
    in_stack_00000014 = puVar1;
    in_stack_00000018 = 2;
                    /* WARNING: Could not recover jumptable at 0x00670cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (in_stack_00000008 < 0x191) {
    if (in_stack_00000008 == 0xc9) {
      uVar3 = 7;
      goto LAB_00670d48;
    }
    if (in_stack_00000008 == 0xcc) {
      uVar3 = 10;
      goto LAB_00670d48;
    }
    if (in_stack_00000008 == 400) {
      uVar3 = 0xb;
      goto LAB_00670d48;
    }
  }
  else {
    if (in_stack_00000008 == 0x194) {
      uVar3 = 9;
      goto LAB_00670d48;
    }
    if (in_stack_00000008 == 0x199) {
      uVar3 = 8;
      goto LAB_00670d48;
    }
    if (in_stack_00000008 == 500) {
      uVar3 = 0x15;
      goto LAB_00670d48;
    }
  }
  uVar3 = 2;
LAB_00670d48:
  FUN_00098a18(0,&puStack_30);
  FUN_0001cec0();
  puStack_30 = PTR_DAT_00670e9c;
  uStack_2c = uVar6;
  FUN_0008a578();
  puStack_28 = PTR_SUB_00670e6c;
  uStack_24 = uVar7;
  FUN_0001cec0();
  puStack_20 = PTR_DAT_00670e9c;
  uStack_1c = uVar3;
  FUN_0008a61c();
  puStack_18 = PTR_DAT_00670ea0;
  uVar3 = 4;
  uStack_14 = uVar8;
  FUN_001331ac();
  FUN_00071920();
  in_stack_00000014 = (undefined *)uVar3;
  in_stack_00000018 = 4;
  in_stack_0000001c = 2;
                    /* WARNING: Could not recover jumptable at 0x00670e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/orcaSim.NewConnection @ 00670ea8 (size 732) */

void printerApi_service_orcaSim_NewConnection(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined1 uVar4;
  undefined1 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined *puVar5;
  undefined4 *in_stack_ffffffb4;
  undefined4 *puVar6;
  undefined1 *in_stack_ffffffb8;
  undefined4 local_44;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 *local_1c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x671180;
    FUN_00096bb8();
  }
  if (in_stack_00000004 == (undefined1 *)0x0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    in_stack_ffffffb4 = *(undefined4 **)(in_stack_00000004 + 4);
    puVar1 = in_stack_ffffffb8;
    FUN_0001cf8c();
    in_stack_ffffffb8 = puVar1;
  }
  if ((puVar1 == PTR_DAT_0067118c) && (0xfff < (int)in_stack_00000008[1])) {
    uVar4 = in_stack_00000004 == (undefined1 *)0x0;
    puVar3 = in_stack_00000008;
    puVar1 = in_stack_00000004;
    puVar2 = in_stack_00000008;
  }
  else {
    puVar3 = in_stack_ffffffb4;
    FUN_0001eed8();
    in_stack_ffffffb4 = (undefined4 *)&SUB_00001000;
    in_stack_ffffffb8 = &SUB_00001000;
    puVar5 = PTR_DAT_00671194;
    FUN_000933e8();
    FUN_00098a0c(0,local_2c,local_44);
    local_28 = 0x1000;
    local_24 = 0x1000;
    local_1c = in_stack_00000008;
    local_8 = 0xffffffff;
    local_4 = 0xffffffff;
    local_20 = puVar1;
    if (*(int *)PTR_DAT_00671198 != 0) {
      in_stack_ffffffb8 = local_2c;
      puVar5 = PTR_DAT_00671190;
      in_stack_ffffffb4 = puVar3;
      FUN_00022914();
    }
    puVar2 = in_stack_00000008;
    uVar4 = in_stack_00000004 == (undefined1 *)0x0;
    FUN_00098de4(0x1000,local_2c,puVar3,in_stack_00000004,unaff_lr,puVar5);
    puVar1 = extraout_r3;
  }
  if (!(bool)uVar4) {
    in_stack_ffffffb4 = *(undefined4 **)(puVar1 + 4);
    puVar1 = in_stack_ffffffb8;
    FUN_0001cf8c();
    puVar2 = in_stack_00000008;
  }
  if ((puVar1 != PTR_DAT_006711a0) || ((int)puVar2[3] < 0x1000)) {
    puVar6 = (undefined4 *)&SUB_00001000;
    FUN_000933e8(0x1000,puVar2,puVar3,puVar1,unaff_lr,PTR_DAT_00671194,0x1000,0x1000);
    puVar2 = puVar6;
    FUN_0001eed8();
    puVar2[3] = 0x1000;
    puVar2[4] = 0x1000;
    in_stack_ffffffb4 = puVar2;
    if (*(int *)PTR_DAT_00671198 != 0) {
      puVar2 = (undefined4 *)FUN_00098688();
      *unaff_r8 = local_44;
      unaff_r8[1] = in_stack_00000008;
    }
    puVar2[2] = local_44;
    puVar2[6] = puVar1;
    puVar2[7] = in_stack_00000008;
  }
  FUN_0001eed8();
  *in_stack_ffffffb4 = in_stack_00000004;
  if (*(int *)PTR_DAT_00671198 != 0) {
    in_stack_ffffffb4 = (undefined4 *)FUN_000986b8();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = puVar3;
    unaff_r8[2] = puVar2;
    unaff_r8[3] = in_stack_00000010;
    unaff_r8[4] = in_stack_00000014;
  }
  in_stack_ffffffb4[1] = in_stack_00000008;
  in_stack_ffffffb4[2] = puVar3;
  in_stack_ffffffb4[3] = puVar2;
  in_stack_ffffffb4[4] = in_stack_0000000c;
  in_stack_ffffffb4[5] = in_stack_00000010;
  in_stack_ffffffb4[7] = in_stack_00000018;
  in_stack_ffffffb4[6] = in_stack_00000014;
  return;
}



/* printerApi/service/orcaSim.(*Connection).readMessages @ 006711ac (size 788) */

void printerApi_service_orcaSim___Connection__readMessages(void)

{
  bool bVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  code *extraout_r3;
  int unaff_r10;
  undefined **in_stack_00000004;
  undefined **local_70;
  undefined **local_6c;
  undefined **local_68;
  undefined **local_64;
  undefined *local_60;
  undefined **local_5c;
  undefined **local_58;
  undefined **local_54 [5];
  undefined **local_40;
  undefined **local_3c;
  undefined **local_38;
  undefined **local_34;
  undefined **local_30;
  undefined **local_2c;
  undefined **local_28;
  undefined *local_24;
  undefined *local_20;
  undefined *local_1c;
  undefined **local_18;
  undefined1 auStack_14 [20];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  do {
    uVar2 = FUN_0010cf30();
    uVar2 = FUN_00098e14(uVar2,&local_70,auStack_14);
    FUN_00098e14(uVar2,auStack_14,&local_70);
    local_5c = DAT_006714c4;
    local_58 = (undefined **)0x1;
    uVar2 = FUN_00102dac();
    FUN_00098e14(uVar2,local_54,auStack_14);
    local_70 = (undefined **)in_stack_00000004[1];
    FUN_00098e14(in_stack_00000004,auStack_14,&local_6c,*(undefined4 *)(*in_stack_00000004 + 0x20));
    (*extraout_r3)();
    local_38 = (undefined **)0x0;
    local_3c = (undefined **)0x0;
    local_2c = (undefined **)0x0;
    do {
      local_70 = (undefined **)in_stack_00000004[2];
      local_6c = (undefined **)CONCAT31(local_6c._1_3_,10);
      FUN_00187dac();
      if (local_5c != (undefined **)0x0) {
        local_34 = local_5c;
        local_28 = local_58;
        if (*(undefined ***)PTR_DAT_006714cc == local_5c) {
          local_68 = *(undefined ***)PTR_DAT_006714d0;
          local_70 = local_5c;
          local_6c = local_58;
          FUN_000169b8();
          if ((char)local_64 != '\0') {
            bVar1 = false;
            goto LAB_00671450;
          }
        }
        local_70 = local_28;
        (*(code *)local_34[3])();
        local_70 = local_6c;
        local_6c = local_68;
        local_68 = (undefined **)PTR_DAT_006714d4;
        local_64 = (undefined **)&DAT_00000020;
        internal_stringslite_Index();
        bVar1 = false;
        if ((int)local_60 < 0) {
          bVar1 = true;
        }
LAB_00671450:
        if (bVar1) {
          FUN_00098a28(0,&local_24);
          local_24 = PTR_SUB_006714d8;
          local_20 = PTR_DAT_006714dc;
          if (local_34 == (undefined **)0x0) {
            local_1c = (undefined *)0x0;
          }
          else {
            local_1c = local_34[1];
          }
          local_18 = local_28;
          local_70 = &local_24;
          local_6c = (undefined **)0x2;
          local_68 = (undefined **)0x2;
          printerApi_common_logger_Error();
        }
        return;
      }
      local_6c = (undefined **)((int)local_3c + (int)local_64);
      ppuVar3 = local_64;
      if (local_38 < local_6c) {
        local_30 = local_68;
        local_40 = local_64;
        local_70 = local_2c;
        local_68 = local_38;
        local_60 = PTR_DAT_006714c8;
        FUN_00093524();
        ppuVar3 = local_40;
        local_68 = local_30;
        local_6c = local_58;
        local_38 = local_54[0];
        local_2c = local_5c;
      }
      local_70 = (undefined **)((int)local_2c + (int)local_3c);
      local_3c = local_6c;
      local_6c = local_68;
      local_68 = ppuVar3;
      FUN_00098ec8();
    } while (((((int)local_3c < 4) || (*(char *)((int)local_2c + (int)(local_3c + -1)) != '\r')) ||
             (*(char *)((int)local_2c + (int)((int)local_3c + -3)) != '\n')) ||
            ((*(char *)((int)local_2c + (int)((int)local_3c + -2)) != '\r' ||
             (*(char *)((int)local_2c + (int)((int)local_3c + -1)) != '\n'))));
    local_70 = (undefined **)in_stack_00000004[5];
    local_60 = in_stack_00000004[2];
    local_6c = local_2c;
    local_68 = local_3c;
    local_64 = local_38;
    (**(code **)(in_stack_00000004[4] + 0xc))();
    if (local_5c != (undefined **)0x0) {
      local_70 = in_stack_00000004;
      local_6c = local_5c;
      local_68 = local_58;
      local_64 = local_54[0];
      printerApi_service_orcaSim___Connection__writeMessages();
    }
  } while( true );
}



/* printerApi/service/orcaSim.(*Connection).writeMessages @ 006714e0 (size 396) */

void printerApi_service_orcaSim___Connection__writeMessages(void)

{
  undefined4 uVar1;
  code *extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int unaff_r10;
  bool bVar2;
  int *in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [20];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 auStack_14 [20];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,&local_54,auStack_14);
  FUN_00098e14(uVar1,auStack_14,&local_54);
  local_40 = DAT_00671670;
  local_3c = 1;
  uVar1 = FUN_00102dac();
  FUN_00098e14(uVar1,auStack_38,auStack_14);
  local_54 = (undefined4 *)in_stack_00000004[1];
  FUN_00098e14(in_stack_00000004,auStack_14,&local_50,*(undefined4 *)(*in_stack_00000004 + 0x24));
  (*extraout_r3)();
  local_54 = (undefined4 *)in_stack_00000004[3];
  local_50 = in_stack_00000008;
  local_4c = in_stack_0000000c;
  local_48 = in_stack_00000010;
  FUN_001889e4();
  bVar2 = local_40 == 0;
  if (bVar2) {
    local_54 = (undefined4 *)in_stack_00000004[3];
    FUN_00188794();
    bVar2 = local_50 == 0;
    if (bVar2) {
      return;
    }
    FUN_00098a28(0,&local_24,local_4c,local_50);
    local_24 = DAT_00671674;
    local_20 = DAT_0067167c;
    local_1c = extraout_r3_01;
    if (!bVar2) {
      local_1c = *(int *)(extraout_r3_01 + 4);
    }
    local_54 = &local_24;
    local_50 = 2;
    local_4c = 2;
    printerApi_common_logger_Error();
    return;
  }
  FUN_00098a28(0,&local_24,local_3c,local_40);
  local_24 = DAT_00671674;
  local_20 = DAT_00671678;
  local_1c = extraout_r3_00;
  if (!bVar2) {
    local_1c = *(int *)(extraout_r3_00 + 4);
  }
  local_54 = &local_24;
  local_50 = 2;
  local_4c = 2;
  printerApi_common_logger_Error();
  return;
}



/* printerApi/service/orcaSim.(*PrintServer).Stop @ 00671680 (size 48) */

void printerApi_service_orcaSim___PrintServer__Stop(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6716ac;
    FUN_00096bb8();
  }
  FUN_00017cc4();
                    /* WARNING: Could not recover jumptable at 0x006716a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/orcaSim.NewProxy @ 006716b0 (size 416) */

void printerApi_service_orcaSim_NewProxy(void)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00017058();
  FUN_0001eed8();
  iVar2 = 0;
  if (*(int *)PTR_DAT_0067185c != 0) {
    FUN_00098678();
    *unaff_r8 = local_30;
    iVar2 = extraout_r1;
  }
  *(undefined4 *)(iVar2 + 8) = local_30;
  FUN_001abdb0();
  if (local_20 == 0) {
    FUN_0001eed8();
    iVar1 = 3;
    uRam00000003 = local_28;
    if (*(int *)PTR_DAT_0067185c != 0) {
      iVar1 = FUN_00098698();
      *unaff_r8 = local_24;
      unaff_r8[1] = in_stack_0000000c;
      unaff_r8[2] = iVar2;
    }
    *(undefined4 *)(iVar1 + 4) = local_24;
    *(undefined4 *)(iVar1 + 0xc) = in_stack_00000010;
    *(undefined4 *)(iVar1 + 8) = in_stack_0000000c;
    *(int *)(iVar1 + 0x10) = iVar2;
    return;
  }
  FUN_00130144();
  return;
}



/* printerApi/service/orcaSim.(*Proxy).Start @ 0067186c (size 468) */

/* WARNING: Removing unreachable block (ram,0x00671998) */
/* WARNING: Removing unreachable block (ram,0x006719c8) */
/* WARNING: Removing unreachable block (ram,0x006719c0) */
/* WARNING: Removing unreachable block (ram,0x006719cc) */
/* WARNING: Removing unreachable block (ram,0x00671940) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_orcaSim___Proxy__Start(void)

{
  int iVar1;
  int extraout_r3;
  int unaff_r10;
  undefined4 unaff_lr;
  int *in_stack_00000004;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10 [2];
  undefined *local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x671a3c;
    FUN_00096bb8();
  }
  iVar1 = in_stack_00000004[1];
  (**(code **)(*in_stack_00000004 + 0x10))();
  FUN_00098a28(0,local_10,local_2c,local_30,unaff_lr,iVar1);
  if (extraout_r3 == 0) {
    local_10[0] = 0;
  }
  else {
    local_10[0] = *(undefined4 *)(extraout_r3 + 4);
  }
  FUN_0008a578();
  local_8 = PTR_SUB_00671a44;
  printerApi_common_logger_Infof();
  (**(code **)(*in_stack_00000004 + 0xc))();
  (*_DAT_0000000e)();
  internal_stringslite_Index();
  printerApi_common_logger_Info();
  FUN_00017cc4();
  return;
}



/* printerApi/service/orcaSim.(*Proxy).handleConnection @ 00671a58 (size 948) */

void printerApi_service_orcaSim___Proxy__handleConnection(void)

{
  undefined4 uVar1;
  int *extraout_r1;
  code *pcVar2;
  int iVar3;
  int extraout_r2;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  int in_stack_00000008;
  int *in_stack_0000000c;
  int *local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  int *local_78;
  undefined1 auStack_74 [22];
  char local_5e;
  undefined1 local_5d;
  int local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int local_3c [3];
  int *local_30;
  int *local_2c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  undefined4 *local_4;
  
  while (&local_14 <= *(undefined4 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_10 = DAT_00671e18;
  local_c = in_stack_00000008;
  local_8 = in_stack_0000000c;
  local_4 = &local_10;
  local_5d = 1;
  local_90 = in_stack_0000000c;
  (**(code **)(in_stack_00000008 + 0x18))();
  local_90 = local_88;
  (*(code *)local_8c[4])();
  local_44 = local_8c;
  local_58 = local_88;
  local_90 = DAT_00671e1c;
  FUN_0001eed8();
  iVar3 = *(int *)(in_stack_00000004 + 0x10);
  local_4c = local_8c;
  if (*DAT_00671e20 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = (int)in_stack_0000000c;
    local_4c = extraout_r1;
    iVar3 = extraout_r2;
  }
  *local_4c = iVar3;
  local_4c[6] = in_stack_00000008;
  local_4c[7] = (int)in_stack_0000000c;
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,&local_90,local_3c);
  FUN_00098e14(uVar1,local_3c,&local_90);
  local_7c = (int *)DAT_00671e24;
  local_78 = (int *)0x0;
  uVar1 = FUN_00102dac();
  FUN_00098e14(uVar1,auStack_74,local_3c);
  pcVar2 = *(code **)(in_stack_00000008 + 0x20);
  local_90 = in_stack_0000000c;
  FUN_00098e14(in_stack_00000008,local_3c,&local_8c);
  (*pcVar2)();
  if (in_stack_00000008 == 0) {
    local_40 = (int *)0x0;
  }
  else {
    local_8c = *(int **)(in_stack_00000008 + 4);
    local_90 = (int *)PTR_DAT_00671e28;
    FUN_0001cf8c();
    local_40 = local_88;
  }
  if ((local_40 != (int *)PTR_DAT_00671e2c) ||
     (local_90 = in_stack_0000000c, in_stack_0000000c[1] < 0x1000)) {
    local_90 = (int *)PTR_DAT_00671e30;
    FUN_0001eed8(PTR_DAT_00671e30,in_stack_00000008);
    local_54 = local_8c;
    local_90 = (int *)PTR_DAT_00671e34;
    local_8c = (int *)&SUB_00001000;
    local_88 = (int *)&SUB_00001000;
    FUN_000933e8();
    FUN_00098a0c(0,local_3c,local_84);
    local_3c[1] = 0x1000;
    local_3c[2] = 0x1000;
    local_30 = local_40;
    local_2c = in_stack_0000000c;
    local_18 = 0xffffffff;
    local_14 = 0xffffffff;
    if (*DAT_00671e20 != 0) {
      local_90 = (int *)PTR_DAT_00671e30;
      local_8c = local_54;
      local_88 = local_3c;
      FUN_00022914();
    }
    FUN_00098de4(in_stack_0000000c,local_3c,local_54);
    local_90 = local_54;
  }
  local_8c = (int *)CONCAT31(local_8c._1_3_,10);
  local_50 = local_90;
  FUN_00187f60();
  local_48 = local_88;
  local_5c = (int)local_84;
  if (local_80 == (int *)0x0) {
    if ((int)local_84 < 0x10) {
      local_5e = '\0';
    }
    else {
      local_90 = local_88;
      local_8c = (int *)PTR_s_GET__api_versionreflect_MakeFunc_0077aea8_4_00671e38;
      local_88 = (int *)&DAT_00000010;
      FUN_000150d4();
      if ((char)local_84 == '\0') {
        local_5e = '\0';
      }
      else {
        local_5e = '\x01';
      }
    }
  }
  else {
    local_5e = '\0';
  }
  local_90 = (int *)PTR_DAT_00671e3c;
  FUN_0001eed8(local_5e,PTR_DAT_00671e3c,local_5c);
  *local_8c = in_stack_00000008;
  if (*DAT_00671e20 != 0) {
    local_8c = (int *)FUN_00098698();
    *unaff_r8 = (int)in_stack_0000000c;
    unaff_r8[1] = (int)local_50;
    unaff_r8[2] = (int)local_48;
  }
  local_8c[1] = (int)in_stack_0000000c;
  local_8c[2] = (int)local_50;
  local_8c[4] = local_5c;
  local_8c[3] = (int)local_48;
  local_88 = (int *)PTR_DAT_00671e48;
  local_84 = local_4c;
  if (local_5e != '\0') {
    local_88 = (int *)PTR_DAT_00671e40;
    local_84 = (int *)PTR_DAT_00671e44;
  }
  local_90 = (int *)PTR_DAT_00671e4c;
  local_80 = local_44;
  local_7c = local_58;
  printerApi_service_orcaSim_NewConnection();
  local_90 = local_78;
  printerApi_service_orcaSim___Connection__readMessages();
  local_5d = 0;
  (*(code *)*local_4)();
  return;
}



/* printerApi/service/orcaSim.(*Proxy).handleConnection.deferwrap1 @ 00671e50 (size 92) */

void printerApi_service_orcaSim___Proxy__handleConnection_deferwrap1(void)

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



/* printerApi/service/orcaSim.(*rewindableConn).Read @ 00671eac (size 200) */

void printerApi_service_orcaSim___rewindableConn__Read(void)

{
  int unaff_r10;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (*(char *)(in_stack_00000004 + 0x14) == '\0') {
    *(undefined1 *)(in_stack_00000004 + 0x14) = 1;
    if (in_stack_00000008 != *(int *)(in_stack_00000004 + 0xc)) {
      FUN_00098ec8();
    }
    return;
  }
  FUN_00186e54();
  return;
}



/* printerApi/service/orcaSim.Start @ 00671f74 (size 236) */

void printerApi_service_orcaSim_Start(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 *local_24;
  undefined4 local_18;
  int local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_24 = (undefined4 *)0x3;
  printerApi_service_orcaSim_NewProxy();
  if (local_14 != 0) {
    local_24 = (undefined4 *)&DAT_00000016;
    FUN_001e20d8();
  }
  FUN_0001eed8();
  *local_24 = PTR_printerApi_service_orcaSim_Start_gowrap1_00672074;
  if (*(int *)PTR_DAT_00672078 != 0) {
    local_24 = (undefined4 *)FUN_00098678();
    *unaff_r8 = local_18;
  }
  local_24[1] = local_18;
  FUN_0005e168();
  return;
}



/* printerApi/service/orcaSim.Start.gowrap1 @ 0067207c (size 84) */

void printerApi_service_orcaSim_Start_gowrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  printerApi_service_orcaSim___Proxy__Start();
  return;
}



/* printerApi/service/orcaSim.ensureAcmMappingForFilamentHub @ 006720d0 (size 2584) */

/* WARNING: Removing unreachable block (ram,0x00672458) */

void printerApi_service_orcaSim_ensureAcmMappingForFilamentHub(void)

{
  undefined4 **ppuVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 extraout_r2;
  undefined **extraout_r2_00;
  undefined **extraout_r2_01;
  undefined *extraout_r2_02;
  undefined *extraout_r2_03;
  undefined **ppuVar6;
  undefined **ppuVar7;
  int extraout_r3;
  int extraout_r3_00;
  undefined **extraout_r3_01;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar10;
  undefined8 uVar11;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined ***in_stack_0000000c;
  undefined **in_stack_00000010;
  undefined ***pppuStack_1b8;
  undefined ***pppuStack_1b4;
  undefined4 **ppuStack_1b0;
  undefined **ppuStack_1ac;
  undefined ***pppuStack_1a8;
  undefined ***pppuStack_1a4;
  undefined ***pppuStack_1a0;
  int iStack_19c;
  undefined4 uStack_198;
  int iStack_194;
  undefined4 uStack_190;
  undefined ***pppuStack_184;
  undefined ***pppuStack_180;
  undefined1 auStack_17c [64];
  undefined1 auStack_13c [4];
  undefined1 uStack_138;
  undefined1 uStack_131;
  undefined1 *puStack_130;
  undefined ***pppuStack_12c;
  int iStack_128;
  undefined *puStack_124;
  undefined ***pppuStack_120;
  undefined ***pppuStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  undefined ***pppuStack_110;
  undefined ***pppuStack_10c;
  undefined1 auStack_108 [12];
  int iStack_fc;
  undefined ***pppuStack_f4;
  int iStack_f0;
  int aiStack_ec [10];
  undefined ***pppuStack_c4;
  undefined1 *puStack_c0;
  undefined ***pppuStack_bc;
  undefined ***pppuStack_b8;
  undefined ***pppuStack_b4;
  undefined **ppuStack_b0;
  undefined *puStack_ac;
  int iStack_a8;
  undefined *puStack_a4;
  undefined4 uStack_a0;
  undefined *puStack_9c;
  undefined4 uStack_98;
  undefined *puStack_94;
  undefined4 uStack_90;
  undefined *puStack_8c;
  int iStack_88;
  undefined1 auStack_84 [4];
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_74 [68];
  undefined **ppuStack_30;
  undefined ***pppuStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined **ppuStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  int iStack_10;
  undefined *puStack_c;
  undefined ***pppuStack_8;
  undefined **ppuStack_4;
  
  while (auStack_13c <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x672b40;
    FUN_00096bb8();
  }
  ppuStack_4 = (undefined **)0x0;
  uStack_131 = 0;
  pppuStack_1b8 = in_stack_0000000c;
  pppuStack_1b4 = (undefined ***)in_stack_00000010;
  FUN_00148180();
  if ((int)ppuStack_1ac < 6) {
    uVar4 = 0;
    ppuVar1 = ppuStack_1b0;
    ppuVar7 = ppuStack_1ac;
  }
  else {
    puVar5 = (undefined *)((int)ppuStack_1ac + -6);
    if (ppuStack_1ac < puVar5) goto LAB_00672b24;
    puStack_124 = (undefined *)ppuStack_1ac;
    puStack_c0 = (undefined1 *)ppuStack_1b0;
    pppuStack_1b8 = (undefined ***)(puVar5 + (int)ppuStack_1b0);
    pppuStack_1b4 = (undefined ***)PTR_DAT_0067297c;
    ppuStack_1b0 = (undefined4 **)&DAT_00000006;
    FUN_000150d4();
    uVar4 = (uint)ppuStack_1ac & 0xff;
    ppuVar1 = (undefined4 **)puStack_c0;
    ppuVar7 = (undefined **)puStack_124;
  }
  ppuVar6 = in_stack_00000010;
  if (uVar4 == 0) {
    if ((int)ppuVar7 < 4) {
      uVar4 = 0;
LAB_006721b4:
      if (uVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x006721dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      goto LAB_006721e4;
    }
    puVar5 = (undefined *)((int)ppuVar7 + -4);
    if (puVar5 <= ppuVar7) {
      pppuStack_1b8 = (undefined ***)(puVar5 + (int)ppuVar1);
      pppuStack_1b4 = (undefined ***)PTR_s__gco_acmboolint8chanfuncpartcall_0077367d_0x27_00672980;
      ppuStack_1b0 = (undefined4 **)&DAT_00000004;
      FUN_000150d4();
      uVar4 = (uint)ppuStack_1ac & 0xff;
      goto LAB_006721b4;
    }
  }
  else {
LAB_006721e4:
    do {
      ppuVar6 = (undefined **)((int)ppuVar6 + -1);
      if ((int)ppuVar6 < 0) {
LAB_00672220:
        puVar8 = (undefined1 *)0x0;
        ppuVar7 = (undefined **)0x0;
        goto LAB_00672228;
      }
      if (in_stack_00000010 <= ppuVar6) goto LAB_00672b10;
      if (*(char *)((int)in_stack_0000000c + (int)ppuVar6) == '/') goto LAB_00672220;
    } while (*(char *)((int)in_stack_0000000c + (int)ppuVar6) != '.');
    puVar8 = (undefined1 *)((int)in_stack_00000010 - (int)ppuVar6);
    ppuVar7 = (undefined **)((int)in_stack_0000000c + ((uint)ppuVar6 & -(int)puVar8 >> 0x1f));
LAB_00672228:
    if ((int)in_stack_00000010 < (int)puVar8) {
      uVar4 = 0;
LAB_0067228c:
      if ((uVar4 == 0) ||
         (bVar10 = (undefined **)((int)in_stack_00000010 - (int)puVar8) <= in_stack_00000010,
         in_stack_00000010 = (undefined **)((int)in_stack_00000010 - (int)puVar8), bVar10)) {
        pppuStack_1b8 = (undefined ***)0x0;
        pppuStack_1b4 = in_stack_0000000c;
        ppuStack_1ac = (undefined **)PTR_s__acmboolint8chanfuncpartcallkind_0077367d_0x2b_00672984;
        pppuStack_1a8 = (undefined ***)0x4;
        ppuStack_1b0 = (undefined4 **)in_stack_00000010;
        FUN_000715a4();
        pppuStack_b4 = pppuStack_1a4;
        pppuStack_10c = pppuStack_1a0;
        pppuStack_1b8 = pppuStack_1a4;
        pppuStack_1b4 = pppuStack_1a0;
        FUN_00127c60();
        if (ppuStack_1b0 != (undefined4 **)0x0) {
          pppuStack_bc = (undefined ***)ppuStack_1ac;
          pppuStack_120 = (undefined ***)ppuStack_1b0;
          FUN_00098a28(0,&puStack_20);
          pppuStack_1b8 = pppuStack_b4;
          pppuStack_1b4 = pppuStack_10c;
          FUN_0008a578();
          puStack_20 = PTR_SUB_00672988;
          ppuStack_1c = (undefined **)ppuStack_1b0;
          if (pppuStack_120 == (undefined ***)0x0) {
            puStack_18 = (undefined *)0x0;
          }
          else {
            puStack_18 = (undefined *)pppuStack_120[1];
          }
          puStack_14 = (undefined *)pppuStack_bc;
          pppuStack_1b8 = (undefined ***)PTR_DAT_0067298c;
          pppuStack_1b4 = (undefined ***)&DAT_0000001d;
          ppuStack_1b0 = (undefined4 **)&puStack_20;
          ppuStack_1ac = (undefined **)0x2;
          pppuStack_1a8 = (undefined ***)0x2;
          printerApi_common_logger_Errorf();
        }
        pppuStack_1b8 = *(undefined ****)PTR_DAT_00672990;
        FUN_0009bf4c();
        if (pppuStack_1b4 == (undefined ***)PTR_DAT_00672994) {
          ppuStack_b0 = (undefined **)ppuStack_1b0;
          FUN_00098a04(0,auStack_74);
          uStack_24 = 0xc;
          puStack_28 = PTR_DAT_00672998;
          pppuStack_1b8 = &ppuStack_b0;
          pppuStack_1b4 = (undefined ***)in_stack_00000004;
          ppuStack_1b0 = (undefined4 **)in_stack_00000008;
          ppuStack_1ac = &puStack_28;
          pppuStack_1a8 = (undefined ***)0x1;
          pppuStack_1a4 = (undefined ***)0x1;
          printerApi_service_k3c_wrapper___K3cwrapper__QueryObjectsStatusWithContext();
          uVar2 = uStack_198;
          iVar3 = iStack_19c;
          if (iStack_19c == 0) {
            FUN_00098dd4(pppuStack_1a0,pppuStack_1a0 + 0x7d,auStack_74);
            uVar2 = 0;
            iVar3 = 0;
          }
          pppuStack_bc = (undefined ***)uVar2;
          FUN_00098dd4(uVar2,auStack_74,auStack_108,iVar3);
          if (extraout_r3 != 0) {
            ppuStack_30 = *(undefined ***)(extraout_r3 + 4);
            pppuStack_2c = pppuStack_bc;
            pppuStack_1b8 = (undefined ***)PTR_DAT_0067299c;
            pppuStack_1b4 = (undefined ***)0x24;
            ppuStack_1b0 = &ppuStack_30;
            ppuStack_1ac = (undefined **)0x1;
            pppuStack_1a8 = (undefined ***)0x1;
            FUN_00130144();
                    /* WARNING: Could not recover jumptable at 0x006724a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
          if (iStack_fc == 1) {
            ppuStack_30 = (undefined **)PTR_SUB_00672b54;
            pppuStack_2c = (undefined ***)PTR_DAT_00672b5c;
            pppuStack_1b8 = &ppuStack_30;
            pppuStack_1b4 = (undefined ***)0x1;
            ppuStack_1b0 = (undefined4 **)0x1;
            printerApi_common_logger_Debug();
                    /* WARNING: Could not recover jumptable at 0x00672aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
          if (aiStack_ec[0] == 0) {
            ppuStack_30 = (undefined **)PTR_SUB_00672b54;
            pppuStack_2c = (undefined ***)PTR_DAT_00672b58;
            pppuStack_1b8 = &ppuStack_30;
            pppuStack_1b4 = (undefined ***)0x1;
            ppuStack_1b0 = (undefined4 **)0x1;
            printerApi_common_logger_Debug();
                    /* WARNING: Could not recover jumptable at 0x00672ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
          uVar2 = FUN_000989f4(0,auStack_74);
          FUN_00098dd4(uVar2,auStack_108,&pppuStack_1b8);
          uVar2 = printerApi_service_orcaSim_pickAvailableFilamentSlot();
          uVar2 = FUN_00098db4(uVar2,auStack_17c,auStack_74,uStack_138);
          FUN_00098db4(uVar2,auStack_74,auStack_108);
          if (extraout_r3_00 == 0) {
            pppuStack_1b8 = (undefined ***)PTR_DAT_00672b50;
            pppuStack_1b4 = (undefined ***)0x1e;
            ppuStack_1b0 = (undefined4 **)0x0;
            ppuStack_1ac = (undefined **)0x0;
            pppuStack_1a8 = (undefined ***)0x0;
            FUN_00130144();
                    /* WARNING: Could not recover jumptable at 0x00672a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
          if ((undefined ***)0x3 < pppuStack_180) {
            ppuStack_30 = (undefined **)0x0;
            pppuStack_2c = (undefined ***)0x0;
            pppuStack_1b8 = pppuStack_180;
            FUN_0001cec0();
            ppuStack_30 = (undefined **)PTR_DAT_00672b48;
            pppuStack_2c = pppuStack_1b4;
            pppuStack_1b8 = (undefined ***)PTR_DAT_00672b4c;
            pppuStack_1b4 = (undefined ***)0x1c;
            ppuStack_1b0 = &ppuStack_30;
            ppuStack_1ac = (undefined **)0x1;
            pppuStack_1a8 = (undefined ***)0x1;
            FUN_00130144();
                    /* WARNING: Could not recover jumptable at 0x00672a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
          pppuStack_11c = pppuStack_184;
          pppuStack_12c = pppuStack_180;
          if (iStack_f0 == 0) {
            iStack_f0 = 3;
            pppuStack_f4 = (undefined ***)PTR_DAT_006729a0;
          }
          pppuStack_1b8 = (undefined ***)PTR_DAT_006729a4;
          iStack_128 = iStack_f0;
          pppuStack_c4 = pppuStack_f4;
          FUN_0001eed8();
          iStack_10 = (int)pppuStack_1b4;
          FUN_00098e24(pppuStack_1b4,aiStack_ec,(int)pppuStack_1b4 + 4);
          uVar11 = CONCAT44(iStack_10,iStack_128);
          *(int *)(iStack_10 + 0x14) = iStack_128;
          pppuStack_110 = pppuStack_12c + (int)pppuStack_11c;
          if (*(int *)PTR_DAT_006729a8 != 0) {
            uVar11 = FUN_00098688();
            *unaff_r8 = pppuStack_c4;
            unaff_r8[1] = *(undefined4 *)((int)((ulonglong)uVar11 >> 0x20) + 0x10);
          }
          iVar3 = (int)((ulonglong)uVar11 >> 0x20);
          *(undefined ****)(iVar3 + 0x10) = pppuStack_c4;
          *(undefined ****)(iVar3 + 0x18) = pppuStack_110;
          FUN_00098e24((int)uVar11,aiStack_ec,iVar3 + 0x1c);
          auStack_84[0] = 1;
          iStack_80 = iStack_10;
          uStack_7c = 1;
          uStack_78 = 1;
          pppuStack_1b8 = (undefined ***)PTR_DAT_006729ac;
          pppuStack_1b4 = (undefined ***)auStack_84;
          FUN_0001cd7c();
          pppuStack_1b8 = (undefined ***)PTR_DAT_006729ac;
          pppuStack_1b4 = (undefined ***)ppuStack_1b0;
          ppuStack_1b0 = (undefined4 **)0x0;
          ppuStack_1ac = (undefined **)0x0;
          pppuStack_1a8 = (undefined ***)PTR_DAT_006729b0;
          pppuStack_1a4 = (undefined ***)0x2;
          FUN_00170a5c();
          if (iStack_194 != 0) {
            ppuStack_30 = *(undefined ***)(iStack_194 + 4);
            pppuStack_2c = (undefined ***)uStack_190;
            pppuStack_1b8 = (undefined ***)PTR_DAT_006729b4;
            pppuStack_1b4 = (undefined ***)0x1d;
            ppuStack_1b0 = &ppuStack_30;
            ppuStack_1ac = (undefined **)0x1;
            pppuStack_1a8 = (undefined ***)0x1;
            FUN_00130144();
                    /* WARNING: Could not recover jumptable at 0x00672688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
          uStack_114 = uStack_198;
          iStack_118 = iStack_19c;
          pppuStack_b8 = pppuStack_1a0;
          pppuStack_1b8 = pppuStack_b4;
          pppuStack_1b4 = pppuStack_10c;
          ppuStack_1b0 = (undefined4 **)0xc1;
          ppuStack_1ac = (undefined **)0x1a4;
          FUN_0012576c();
          if (pppuStack_1a4 == (undefined ***)0x0) {
            puStack_c = 
            PTR_printerApi_service_orcaSim_ensureAcmMappingForFilamentHub_deferwrap1_006729c8;
            pppuStack_8 = pppuStack_1a8;
            ppuStack_4 = &puStack_c;
            uStack_131 = 1;
            pppuStack_1b8 = pppuStack_1a8;
            pppuStack_1b4 = pppuStack_b8;
            ppuStack_1b0 = (undefined4 **)iStack_118;
            ppuStack_1ac = (undefined **)uStack_114;
            FUN_00124ccc();
            if (pppuStack_1a4 != (undefined ***)0x0) {
              ppuStack_30 = pppuStack_1a4[1];
              pppuStack_2c = pppuStack_1a0;
              pppuStack_1b8 = (undefined ***)PTR_DAT_006729cc;
              pppuStack_1b4 = (undefined ***)0x1b;
              ppuStack_1b0 = &ppuStack_30;
              ppuStack_1ac = (undefined **)0x1;
              pppuStack_1a8 = (undefined ***)0x1;
              FUN_00130144();
              uStack_131 = 0;
              (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00672864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_00)();
              return;
            }
            pppuStack_1b8 = pppuStack_b4;
            pppuStack_1b4 = pppuStack_10c;
            internal_filepathlite_Base();
            FUN_00098a10(0,&puStack_ac,ppuStack_1ac,ppuStack_1b0);
            pppuStack_1b4 = (undefined ***)extraout_r2;
            FUN_0008a578();
            puStack_ac = PTR_SUB_00672988;
            iStack_a8 = (int)ppuStack_1b0;
            pppuStack_1b8 = pppuStack_11c;
            FUN_0001cec0();
            puStack_a4 = PTR_DAT_006729d0;
            uStack_a0 = pppuStack_1b4;
            pppuStack_1b8 = pppuStack_12c;
            FUN_0001cec0();
            puStack_9c = PTR_DAT_006729d0;
            uStack_98 = pppuStack_1b4;
            pppuStack_1b8 = pppuStack_110;
            FUN_0001cec0();
            puStack_94 = PTR_DAT_006729d0;
            uStack_90 = pppuStack_1b4;
            pppuStack_1b8 = pppuStack_c4;
            pppuStack_1b4 = (undefined ***)iStack_128;
            FUN_0008a578();
            puStack_8c = PTR_SUB_00672988;
            iStack_88 = (int)ppuStack_1b0;
            pppuStack_1b8 = (undefined ***)PTR_DAT_006729d4;
            pppuStack_1b4 = (undefined ***)0x4c;
            ppuStack_1b0 = (undefined4 **)&puStack_ac;
            ppuStack_1ac = (undefined **)0x5;
            pppuStack_1a8 = (undefined ***)0x5;
            printerApi_common_logger_Infof();
            uStack_131 = 0;
            (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00672978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
          pppuStack_120 = pppuStack_1a4;
          pppuStack_bc = pppuStack_1a0;
          ppuStack_1b0 = *(undefined4 ***)PTR_DAT_006729b8;
          ppuStack_1ac = *(undefined ***)PTR_DAT_006729bc;
          pppuStack_1b8 = pppuStack_1a4;
          pppuStack_1b4 = pppuStack_1a0;
          FUN_00122c24();
          if ((char)pppuStack_1a8 == '\0') {
            ppuStack_30 = (undefined **)0x0;
            if (pppuStack_120 != (undefined ***)0x0) {
              ppuStack_30 = pppuStack_120[1];
            }
            pppuStack_2c = pppuStack_bc;
            pppuStack_1b8 = (undefined ***)PTR_DAT_006729c0;
            pppuStack_1b4 = (undefined ***)0x1b;
            ppuStack_1b0 = &ppuStack_30;
            ppuStack_1ac = (undefined **)0x1;
            pppuStack_1a8 = (undefined ***)0x1;
            FUN_00130144();
                    /* WARNING: Could not recover jumptable at 0x00672768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
          ppuStack_30 = (undefined **)PTR_SUB_00672988;
          pppuStack_2c = (undefined ***)PTR_DAT_006729c4;
          pppuStack_1b8 = &ppuStack_30;
          pppuStack_1b4 = (undefined ***)0x1;
          ppuStack_1b0 = (undefined4 **)0x1;
          printerApi_common_logger_Debug();
                    /* WARNING: Could not recover jumptable at 0x006727a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        pppuStack_1b8 = pppuStack_1b4;
        pppuStack_1b4 = (undefined ***)PTR_DAT_00672994;
        ppuStack_1b0 = (undefined4 **)PTR_DAT_00672b60;
        FUN_0001cb94();
      }
      ppuVar6 = (undefined **)FUN_00098718();
      in_stack_00000010 = extraout_r2_00;
    }
    else {
      ppuVar6 = (undefined **)((int)in_stack_00000010 - (int)puVar8);
      if (ppuVar6 <= in_stack_00000010) {
        puVar9 = (undefined1 *)((int)in_stack_00000010 - (int)ppuVar6);
        if (puVar8 == puVar9) {
          pppuStack_1b8 =
               (undefined ***)((int)in_stack_0000000c + ((uint)ppuVar6 & -(int)puVar9 >> 0x1f));
          pppuStack_1b4 = (undefined ***)ppuVar7;
          ppuStack_1b0 = (undefined4 **)puVar9;
          puStack_130 = puVar8;
          FUN_000150d4();
          uVar4 = (uint)ppuStack_1ac & 0xff;
          puVar8 = puStack_130;
        }
        else {
          uVar4 = 0;
        }
        goto LAB_0067228c;
      }
    }
    FUN_00098758(ppuVar6,in_stack_00000010);
    in_stack_00000010 = extraout_r2_01;
    ppuVar6 = extraout_r3_01;
LAB_00672b10:
    FUN_000986f8(ppuVar6,in_stack_00000010);
    puVar5 = extraout_r2_02;
  }
  FUN_00098758(puVar5);
  puVar5 = extraout_r2_03;
LAB_00672b24:
  uVar2 = FUN_00098758(puVar5);
  FUN_0004fb3c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00672b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/orcaSim.ensureAcmMappingForFilamentHub.deferwrap1 @ 00672b64 (size 96) */

void printerApi_service_orcaSim_ensureAcmMappingForFilamentHub_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 auStack_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)auStack_c;
  }
  if (*(undefined4 **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    auStack_c[0] = **(undefined4 **)(unaff_r7 + 4);
    FUN_00127938();
  }
  return;
}



/* printerApi/service/orcaSim.pickAvailableFilamentSlot @ 00672bc4 (size 1440) */

void printerApi_service_orcaSim_pickAvailableFilamentSlot(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  int extraout_r3_03;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  char *in_stack_00000004;
  undefined *in_stack_00000008;
  int in_stack_0000001c;
  int in_stack_00000020;
  undefined1 in_stack_00000084;
  int iStack_e8;
  int iStack_e4;
  char cStack_e0;
  undefined1 auStack_cc [4];
  char *pcStack_c8;
  int iStack_c4;
  int aiStack_88 [5];
  undefined1 auStack_74 [20];
  int iStack_60;
  int iStack_5c;
  undefined4 auStack_44 [10];
  int iStack_1c;
  int iStack_18;
  int iStack_8;
  int iStack_4;
  
  while (auStack_74 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x673160;
    FUN_00096bb8();
  }
  FUN_000989f4(0,&stack0x00000040);
  iVar1 = printerApi_service_orcaSim_parseCurrentFilament();
  iVar4 = in_stack_0000001c;
  iVar5 = in_stack_00000020;
  if (cStack_e0 != '\0') {
    for (; 0 < iVar5; iVar5 = iVar5 + -1) {
      FUN_00098dc4(iVar1,iVar4,aiStack_88,iVar4,UNRECOVERED_JUMPTABLE,in_stack_00000004,
                   in_stack_00000008);
      iVar1 = aiStack_88[0];
      iVar4 = extraout_r3_01;
      iVar6 = iStack_60;
      iVar7 = iStack_5c;
      iVar3 = extraout_r3_01;
      if (aiStack_88[0] == iStack_e8) {
        for (; iStack_4 = iVar3, 0 < iVar7; iVar7 = iVar7 + -1) {
          FUN_00098db4(iVar1,iVar6,aiStack_88);
          iVar1 = aiStack_88[0];
          iVar4 = extraout_r3_02;
          if (aiStack_88[0] == iStack_e4) {
            iStack_8 = iVar6;
            FUN_00098db4(aiStack_88[0],aiStack_88,auStack_cc);
            if (iStack_c4 < 9) {
              if (iStack_c4 == 5) {
                iVar4 = extraout_r3_03;
                if ((((*pcStack_c8 == 'r') && (iVar4 = extraout_r3_03, pcStack_c8[1] == 'e')) &&
                    (iVar4 = extraout_r3_03, pcStack_c8[2] == 'a')) &&
                   ((iVar4 = extraout_r3_03, pcStack_c8[3] == 'd' &&
                    (iVar4 = extraout_r3_03, pcStack_c8[4] == 'y')))) goto LAB_0067310c;
              }
              else {
                if (iStack_c4 == 7) {
                  in_stack_00000004 = pcStack_c8;
                  in_stack_00000008 = PTR_s_feedingpreloadHOME_XYturnOffrepl_00774847_0x147_0067316c
                  ;
                  FUN_000150d4();
                  goto joined_r0x00673094;
                }
                iVar4 = extraout_r3_03;
                if ((iStack_c4 == 8) &&
                   (in_stack_00000004 = pcStack_c8,
                   in_stack_00000008 =
                        PTR_s_rollbackFuncTypestruct__scavenge_00774847_0xb56_00673168,
                   FUN_000150d4(), iVar4 = iStack_4, iVar6 = iStack_8, (char)iStack_e4 != '\0'))
                goto LAB_0067310c;
              }
LAB_0067312c:
              iVar3 = 0;
            }
            else {
              if (iStack_c4 == 9) {
                in_stack_00000004 = pcStack_c8;
                in_stack_00000008 = PTR_s_assistingcomplex64interfaceinval_0077568d_0x7ce_00673178;
                FUN_000150d4();
              }
              else if (iStack_c4 == 10) {
                in_stack_00000004 = pcStack_c8;
                in_stack_00000008 = PTR_s_preloadingcomplex128t_Kind____no_007765bd_0x3ce_00673174;
                FUN_000150d4();
              }
              else {
                iVar4 = extraout_r3_03;
                if (iStack_c4 != 0x12) goto LAB_0067312c;
                in_stack_00000004 = pcStack_c8;
                in_stack_00000008 = PTR_DAT_00673170;
                FUN_000150d4();
              }
joined_r0x00673094:
              iVar4 = iStack_4;
              iVar6 = iStack_8;
              if ((char)iStack_e4 == '\0') goto LAB_0067312c;
LAB_0067310c:
              iVar3 = 1;
            }
            iVar1 = 0;
            if (iVar3 != 0) {
              FUN_00098db4(iVar3,aiStack_88,&stack0x00000040);
              in_stack_00000084 = 1;
                    /* WARNING: Could not recover jumptable at 0x00673154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)();
              return;
            }
          }
          iVar6 = iVar6 + 0x44;
          iVar3 = iStack_4;
        }
      }
      iVar4 = iVar4 + 0x3c;
    }
  }
  do {
    if (in_stack_00000020 < 1) {
      FUN_000989f4(0,&stack0x00000040);
      in_stack_00000084 = 0;
                    /* WARNING: Could not recover jumptable at 0x00672c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    iStack_4 = in_stack_0000001c;
    FUN_00098dc4(iVar1,in_stack_0000001c,auStack_44,in_stack_0000001c,UNRECOVERED_JUMPTABLE,
                 in_stack_00000004,in_stack_00000008);
    iVar1 = iStack_1c;
    in_stack_0000001c = extraout_r3;
    for (iVar4 = iStack_18; 0 < iVar4; iVar4 = iVar4 + -1) {
      iStack_8 = iVar1;
      uVar2 = FUN_00098db4(iVar1,iVar1,aiStack_88);
      FUN_00098db4(uVar2,aiStack_88,auStack_cc);
      in_stack_0000001c = extraout_r3_00;
      if (iStack_c4 < 9) {
        if (iStack_c4 != 5) {
          if (iStack_c4 == 7) {
            in_stack_00000004 = pcStack_c8;
            in_stack_00000008 = PTR_s_feedingpreloadHOME_XYturnOffrepl_00774847_0x147_0067316c;
            FUN_000150d4();
            in_stack_0000001c = iStack_4;
          }
          else {
            if (iStack_c4 != 8) goto LAB_00672c80;
            in_stack_00000004 = pcStack_c8;
            in_stack_00000008 = PTR_s_rollbackFuncTypestruct__scavenge_00774847_0xb56_00673168;
            FUN_000150d4();
            in_stack_0000001c = iStack_4;
          }
          goto joined_r0x00672df0;
        }
        if ((((*pcStack_c8 == 'r') && (pcStack_c8[1] == 'e')) && (pcStack_c8[2] == 'a')) &&
           ((pcStack_c8[3] == 'd' && (pcStack_c8[4] == 'y')))) goto LAB_00672e38;
      }
      else {
        if (iStack_c4 == 9) {
          in_stack_00000004 = pcStack_c8;
          in_stack_00000008 = PTR_s_assistingcomplex64interfaceinval_0077568d_0x7ce_00673178;
          FUN_000150d4();
          in_stack_0000001c = iStack_4;
        }
        else if (iStack_c4 == 10) {
          in_stack_00000004 = pcStack_c8;
          in_stack_00000008 = PTR_s_preloadingcomplex128t_Kind____no_007765bd_0x3ce_00673174;
          FUN_000150d4();
          in_stack_0000001c = iStack_4;
        }
        else {
          if (iStack_c4 != 0x12) goto LAB_00672c80;
          in_stack_00000004 = pcStack_c8;
          in_stack_00000008 = PTR_DAT_00673170;
          FUN_000150d4();
          in_stack_0000001c = iStack_4;
        }
joined_r0x00672df0:
        iStack_4 = in_stack_0000001c;
        if ((char)iStack_e4 != '\0') {
LAB_00672e38:
          FUN_00098db4(auStack_44[0],aiStack_88,&stack0x00000040,aiStack_88[0]);
          in_stack_00000084 = 1;
                    /* WARNING: Could not recover jumptable at 0x00672e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
LAB_00672c80:
      iVar1 = iStack_8 + 0x44;
    }
    in_stack_0000001c = in_stack_0000001c + 0x3c;
    in_stack_00000020 = in_stack_00000020 + -1;
  } while( true );
}



/* printerApi/service/orcaSim.parseCurrentFilament @ 0067317c (size 352) */

/* WARNING: Removing unreachable block (ram,0x0067321c) */
/* WARNING: Removing unreachable block (ram,0x00673240) */
/* WARNING: Removing unreachable block (ram,0x0067327c) */
/* WARNING: Removing unreachable block (ram,0x006732a0) */
/* WARNING: Removing unreachable block (ram,0x00673288) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_orcaSim_parseCurrentFilament(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined1 in_stack_00000014;
  undefined4 uStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x6732d8;
    FUN_00096bb8();
  }
  FUN_00148fb4();
  FUN_00146be8();
  if (uStack_10 == 2) {
    FUN_00148fb4();
    FUN_000a9008();
    in_stack_0000000c = 0;
    in_stack_00000010 = 0;
    in_stack_00000014 = 0;
                    /* WARNING: Could not recover jumptable at 0x0067323c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
                    /* WARNING: Could not recover jumptable at 0x006732cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/orcaSim.rewindableConn.Close @ 0067344c (size 108) */

void printerApi_service_orcaSim_rewindableConn_Close(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x673498;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_c;
  }
  uStack_c = in_stack_00000008;
  (**(code **)(in_stack_00000004 + 0xc))();
  in_stack_0000001c = uStack_8;
  in_stack_00000020 = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x0067348c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/orcaSim.(*rewindableConn).Close @ 006734b8 (size 112) */

void printerApi_service_orcaSim___rewindableConn__Close(void)

{
  int *piVar1;
  int unaff_r10;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int aiStack_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (int **)*piVar1)) {
    *piVar1 = (int)aiStack_c;
  }
  aiStack_c[0] = in_stack_00000004[1];
  (**(code **)(*in_stack_00000004 + 0xc))();
  return;
}



/* printerApi/service/orcaSim.rewindableConn.LocalAddr @ 00673528 (size 108) */

void printerApi_service_orcaSim_rewindableConn_LocalAddr(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x673574;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_c;
  }
  uStack_c = in_stack_00000008;
  (**(code **)(in_stack_00000004 + 0x10))();
  in_stack_0000001c = uStack_8;
  in_stack_00000020 = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x00673568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/orcaSim.(*rewindableConn).LocalAddr @ 00673594 (size 112) */

void printerApi_service_orcaSim___rewindableConn__LocalAddr(void)

{
  int *piVar1;
  int unaff_r10;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int aiStack_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (int **)*piVar1)) {
    *piVar1 = (int)aiStack_c;
  }
  aiStack_c[0] = in_stack_00000004[1];
  (**(code **)(*in_stack_00000004 + 0x10))();
  return;
}



/* printerApi/service/orcaSim.rewindableConn.RemoteAddr @ 00673604 (size 108) */

void printerApi_service_orcaSim_rewindableConn_RemoteAddr(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x673650;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_c;
  }
  uStack_c = in_stack_00000008;
  (**(code **)(in_stack_00000004 + 0x18))();
  in_stack_0000001c = uStack_8;
  in_stack_00000020 = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x00673644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/orcaSim.(*rewindableConn).RemoteAddr @ 00673670 (size 112) */

void printerApi_service_orcaSim___rewindableConn__RemoteAddr(void)

{
  int *piVar1;
  int unaff_r10;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int aiStack_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (int **)*piVar1)) {
    *piVar1 = (int)aiStack_c;
  }
  aiStack_c[0] = in_stack_00000004[1];
  (**(code **)(*in_stack_00000004 + 0x18))();
  return;
}



/* printerApi/service/orcaSim.rewindableConn.SetDeadline @ 006736e0 (size 128) */

void printerApi_service_orcaSim_rewindableConn_SetDeadline(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 uStack_24;
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  undefined4 uStack_8;
  code *pcStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x673740;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_24;
  }
  pcStack_4 = *(code **)(in_stack_00000004 + 0x1c);
  uStack_24 = in_stack_00000008;
  FUN_00098e14(pcStack_4,&stack0x0000001c,auStack_20);
  (*pcStack_4)();
  in_stack_00000030 = uStack_c;
  in_stack_00000034 = uStack_8;
                    /* WARNING: Could not recover jumptable at 0x00673734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/orcaSim.(*rewindableConn).SetDeadline @ 00673760 (size 124) */

void printerApi_service_orcaSim___rewindableConn__SetDeadline(void)

{
  int *piVar1;
  code *extraout_r3;
  int unaff_r10;
  undefined4 unaff_lr;
  int *in_stack_00000004;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  int iStack_20;
  undefined1 auStack_1c [28];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x6737bc;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (int **)*piVar1)) {
    *piVar1 = (int)&iStack_20;
  }
  iStack_20 = in_stack_00000004[1];
  FUN_00098e14(iStack_20,&stack0x00000008,auStack_1c,*(undefined4 *)(*in_stack_00000004 + 0x1c),
               unaff_lr);
  (*extraout_r3)();
  return;
}



/* printerApi/service/orcaSim.rewindableConn.SetReadDeadline @ 006737dc (size 128) */

void printerApi_service_orcaSim_rewindableConn_SetReadDeadline(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 uStack_24;
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  undefined4 uStack_8;
  code *pcStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x67383c;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_24;
  }
  pcStack_4 = *(code **)(in_stack_00000004 + 0x20);
  uStack_24 = in_stack_00000008;
  FUN_00098e14(pcStack_4,&stack0x0000001c,auStack_20);
  (*pcStack_4)();
  in_stack_00000030 = uStack_c;
  in_stack_00000034 = uStack_8;
                    /* WARNING: Could not recover jumptable at 0x00673830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/orcaSim.(*rewindableConn).SetReadDeadline @ 0067385c (size 124) */

void printerApi_service_orcaSim___rewindableConn__SetReadDeadline(void)

{
  int *piVar1;
  code *extraout_r3;
  int unaff_r10;
  undefined4 unaff_lr;
  int *in_stack_00000004;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  int iStack_20;
  undefined1 auStack_1c [28];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x6738b8;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (int **)*piVar1)) {
    *piVar1 = (int)&iStack_20;
  }
  iStack_20 = in_stack_00000004[1];
  FUN_00098e14(iStack_20,&stack0x00000008,auStack_1c,*(undefined4 *)(*in_stack_00000004 + 0x20),
               unaff_lr);
  (*extraout_r3)();
  return;
}



/* printerApi/service/orcaSim.rewindableConn.SetWriteDeadline @ 006738d8 (size 128) */

void printerApi_service_orcaSim_rewindableConn_SetWriteDeadline(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 uStack_24;
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  undefined4 uStack_8;
  code *pcStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x673938;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_24;
  }
  pcStack_4 = *(code **)(in_stack_00000004 + 0x24);
  uStack_24 = in_stack_00000008;
  FUN_00098e14(pcStack_4,&stack0x0000001c,auStack_20);
  (*pcStack_4)();
  in_stack_00000030 = uStack_c;
  in_stack_00000034 = uStack_8;
                    /* WARNING: Could not recover jumptable at 0x0067392c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/orcaSim.(*rewindableConn).SetWriteDeadline @ 00673958 (size 124) */

void printerApi_service_orcaSim___rewindableConn__SetWriteDeadline(void)

{
  int *piVar1;
  code *extraout_r3;
  int unaff_r10;
  undefined4 unaff_lr;
  int *in_stack_00000004;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  int iStack_20;
  undefined1 auStack_1c [28];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x6739b4;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (int **)*piVar1)) {
    *piVar1 = (int)&iStack_20;
  }
  iStack_20 = in_stack_00000004[1];
  FUN_00098e14(iStack_20,&stack0x00000008,auStack_1c,*(undefined4 *)(*in_stack_00000004 + 0x24),
               unaff_lr);
  (*extraout_r3)();
  return;
}



/* printerApi/service/orcaSim.rewindableConn.Write @ 006739d4 (size 140) */

void printerApi_service_orcaSim_rewindableConn_Write(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x673a40;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_1c;
  }
  uStack_1c = in_stack_00000008;
  uStack_18 = in_stack_0000001c;
  uStack_14 = in_stack_00000020;
  uStack_10 = in_stack_00000024;
  (**(code **)(in_stack_00000004 + 0x28))();
  in_stack_00000028 = uStack_c;
  in_stack_0000002c = uStack_8;
  in_stack_00000030 = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x00673a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/orcaSim.(*rewindableConn).Write @ 00673a60 (size 144) */

void printerApi_service_orcaSim___rewindableConn__Write(void)

{
  int *piVar1;
  int unaff_r10;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (int **)*piVar1)) {
    *piVar1 = (int)&iStack_1c;
  }
  iStack_1c = in_stack_00000004[1];
  uStack_18 = in_stack_00000008;
  uStack_14 = in_stack_0000000c;
  uStack_10 = in_stack_00000010;
  (**(code **)(*in_stack_00000004 + 0x28))();
  return;
}


