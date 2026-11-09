// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/ssdp   functions: 30
/* printerApi/service/ssdp.init @ 0059a3a8 (size 208) */

void printerApi_service_ssdp_init(void)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  undefined4 extraout_r1_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x59a474;
    FUN_00096bb8();
  }
  printerApi_common_utils_str_RandomStringWithCharset();
  *(undefined4 *)PTR_DAT_0059a480 = uStack_4;
  uVar1 = uStack_8;
  if (*(int *)PTR_DAT_0059a484 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_0059a488;
    uVar1 = extraout_r1;
  }
  *(undefined4 *)PTR_DAT_0059a488 = uVar1;
  printerApi_common_utils_str_RandomStringWithCharset();
  *(undefined4 *)PTR_DAT_0059a48c = uStack_4;
  if (*(int *)PTR_DAT_0059a484 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_0059a490;
    uStack_8 = extraout_r1_00;
  }
  *(undefined4 *)PTR_DAT_0059a490 = uStack_8;
                    /* WARNING: Could not recover jumptable at 0x0059a468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/ssdp.(*Device).Clone @ 0059a494 (size 60) */

void printerApi_service_ssdp___Device__Clone(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  uVar1 = FUN_000989b8(0,&stack0x00000008);
  FUN_00098d3c(uVar1,in_stack_00000004,&stack0x00000008);
  return;
}



/* printerApi/service/ssdp.ErrCode.String @ 0059a4d0 (size 256) */

void printerApi_service_ssdp_ErrCode_String(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  ulonglong uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      if (iVar2 == 200) {
        *(undefined4 *)((int)register0x00000054 + 8) = DAT_0059a5e4;
        *(undefined4 *)((int)register0x00000054 + 0xc) = 7;
                    /* WARNING: Could not recover jumptable at 0x0059a5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      if (10 < iVar2 - 0x4a39U) {
        *(int *)((int)register0x00000054 + -0x24) = iVar2;
        *(int *)((int)register0x00000054 + -0x20) = iVar2 >> 0x1f;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 10;
        FUN_000af250();
        *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0059a5dc;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 8;
        *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_0059a5e0;
        *(undefined4 *)((int)register0x00000054 + -0xc) = 1;
        FUN_00071620();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0059a59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      bVar1 = *(byte *)(DAT_0059a5d4 + iVar2 + -19000);
      uVar3 = (uint)bVar1;
      uVar7 = (ulonglong)CONCAT14(bVar1,param_1);
      uVar4 = (uint)*(byte *)(DAT_0059a5d4 + (iVar2 - 0x4a39U));
      uVar6 = uVar3 == 0xd3;
      if (uVar3 < 0xd4) {
        uVar6 = uVar4 == uVar3;
        if (uVar4 <= uVar3) {
          *(uint *)((int)register0x00000054 + 8) =
               DAT_0059a5d8 + (uVar4 & (int)-(uVar3 - uVar4) >> 0x1f);
          *(uint *)((int)register0x00000054 + 0xc) = uVar3 - uVar4;
          return;
        }
        uVar7 = FUN_00098758();
      }
      param_1 = FUN_00098718((int)uVar7,(int)(uVar7 >> 0x20),0xd3);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x59a5cc;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/ssdp.(*progressUpdater).Write @ 0059a5e8 (size 920) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_ssdp___progressUpdater__Write(undefined4 param_1)

{
  longlong lVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 extraout_r2;
  uint uVar9;
  int iVar10;
  int unaff_r10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  bool bVar12;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x10)) {
      puVar11 = (undefined1 *)((int)register0x00000054 + -0x90);
      *(undefined4 *)((int)register0x00000054 + -0x90) = unaff_lr;
      puVar2 = *(uint **)((int)register0x00000054 + 4);
      if ((int)puVar2[3] < 0 || puVar2[3] == 0 && puVar2[2] == 0) {
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
                    /* WARNING: Could not recover jumptable at 0x0059a958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x90))();
        return;
      }
      uVar6 = *puVar2;
      uVar9 = *(uint *)((int)register0x00000054 + 0xc);
      uVar7 = uVar6 + uVar9;
      *puVar2 = uVar7;
      uVar6 = puVar2[1] + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar6,uVar9);
      puVar2[1] = uVar6;
      lVar1 = (ulonglong)uVar7 * 100;
      uVar7 = puVar2[2];
      uVar9 = puVar2[3];
      *(int *)((int)register0x00000054 + -0x8c) = (int)lVar1;
      *(uint *)((int)register0x00000054 + -0x88) = uVar6 * 100 + (int)((ulonglong)lVar1 >> 0x20);
      *(uint *)((int)register0x00000054 + -0x84) = uVar7;
      *(uint *)((int)register0x00000054 + -0x80) = uVar9;
      FUN_00086d18();
      uVar6 = *(uint *)((int)register0x00000054 + -0x7c);
      iVar8 = *(int *)((int)register0x00000054 + -0x78);
      if (100 < uVar6 && iVar8 == 0 || 0 < iVar8) {
        iVar8 = 0;
        uVar6 = 100;
      }
      *(int *)((int)register0x00000054 + -0x58) = iVar8;
      *(uint *)((int)register0x00000054 + -0x5c) = uVar6;
      uVar3 = FUN_0010cf30();
      FUN_00098e14(uVar3,(undefined1 *)((int)register0x00000054 + -0x8c),
                   (undefined1 *)((int)register0x00000054 + -0x20));
      iVar8 = *(int *)((int)register0x00000054 + 4) + 0x10;
      *(int *)((int)register0x00000054 + -0x54) = iVar8;
      uVar3 = FUN_00098e14(*(int *)((int)register0x00000054 + 4),iVar8,
                           (undefined1 *)((int)register0x00000054 + -0x34));
      FUN_00098e14(uVar3,(undefined1 *)((int)register0x00000054 + -0x34),
                   (undefined1 *)((int)register0x00000054 + -0x8c));
      *(undefined4 *)((int)register0x00000054 + -0x78) = _UNK_0059a984;
      *(undefined4 *)((int)register0x00000054 + -0x74) = 0;
      uVar3 = FUN_00102dac();
      uVar3 = FUN_00098e14(uVar3,(undefined1 *)((int)register0x00000054 + -0x70),
                           (undefined1 *)((int)register0x00000054 + -0x34));
      uVar3 = FUN_00098e14(uVar3,(undefined1 *)((int)register0x00000054 + -0x20),
                           (undefined1 *)((int)register0x00000054 + -0x8c));
      FUN_00098e14(uVar3,(undefined1 *)((int)register0x00000054 + -0x34),
                   (undefined1 *)((int)register0x00000054 + -0x78));
      FUN_00100a28();
      if (*(char *)((int)register0x00000054 + -100) == '\0') {
        iVar8 = *(int *)((int)register0x00000054 + -0x58);
        iVar10 = *(int *)((int)register0x00000054 + -0x5c);
        if (iVar8 != 0 || iVar10 != 100) goto LAB_0059a924;
      }
      else {
        iVar8 = *(int *)((int)register0x00000054 + -0x58);
        iVar10 = *(int *)((int)register0x00000054 + -0x5c);
      }
      FUN_00098a20(0,(undefined1 *)((int)register0x00000054 + -0x4c),iVar8);
      *(int *)((int)register0x00000054 + -0x8c) = iVar10;
      *(undefined4 *)((int)register0x00000054 + -0x88) = extraout_r2;
      FUN_0008a4bc();
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0059a988;
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x84);
      uVar3 = (*(undefined4 **)((int)register0x00000054 + 4))[1];
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x88) = uVar3;
      FUN_0008a4bc();
      *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0059a988;
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + -0x84);
      uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x88) = uVar3;
      FUN_0008a4bc();
      *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0059a988;
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + -0x84);
      *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_0059a98c;
      *(undefined4 *)((int)register0x00000054 + -0x88) = 0x27;
      *(undefined1 **)((int)register0x00000054 + -0x84) =
           (undefined1 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0x80) = 3;
      *(undefined4 *)((int)register0x00000054 + -0x7c) = 3;
      uVar3 = printerApi_common_logger_RedDebugf();
      *(undefined4 *)((int)register0x00000054 + -0x8c) = *(undefined4 *)PTR_DAT_0059a990;
      FUN_0009bf4c(uVar3);
      bVar12 = *(undefined **)((int)register0x00000054 + -0x88) == PTR_DAT_0059a994;
      if (bVar12) {
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x84);
        *(undefined **)((int)register0x00000054 + -0x8c) = PTR_SUB_0059a998;
        FUN_0001eed8();
        puVar4 = *(undefined4 **)((int)register0x00000054 + -0x88);
        *(undefined4 **)((int)register0x00000054 + -4) = puVar4;
        puVar4[1] = 0x10;
        *puVar4 = PTR_DAT_0059a99c;
        *(undefined **)((int)register0x00000054 + -0x8c) = PTR_SUB_0059a998;
        FUN_0001eed8();
        puVar4 = *(undefined4 **)((int)register0x00000054 + -0x88);
        *(undefined4 **)((int)register0x00000054 + -8) = puVar4;
        puVar4[1] = 0;
        *puVar4 = 0;
        *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_0059a9a0;
        FUN_0001eed8();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x88);
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             *(undefined4 *)((int)register0x00000054 + -0x5c);
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)((int)register0x00000054 + -0x58);
        FUN_0008695c();
        puVar5 = *(undefined8 **)((int)register0x00000054 + -0xc);
        *puVar5 = *(undefined8 *)((int)register0x00000054 + -0x84);
        *(undefined1 **)((int)register0x00000054 + -0x8c) =
             (undefined1 *)((int)register0x00000054 + -0x50);
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x84) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined8 **)((int)register0x00000054 + -0x80) = puVar5;
        printerApi_service_k3c_wrapper___K3cwrapper__PublishDownloadStatus();
        uVar3 = FUN_0010cf30();
        FUN_00098e14(uVar3,(undefined1 *)((int)register0x00000054 + -0x8c),
                     (undefined1 *)((int)register0x00000054 + -0x34));
        uVar3 = 0;
        if (*(int *)PTR_DAT_0059a9a4 != 0) {
          *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_0059a9a8;
          *(undefined4 *)((int)register0x00000054 + -0x88) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          *(undefined1 **)((int)register0x00000054 + -0x84) =
               (undefined1 *)((int)register0x00000054 + -0x34);
          uVar3 = FUN_00022914();
        }
        FUN_00098e14(uVar3,(undefined1 *)((int)register0x00000054 + -0x34),
                     *(undefined4 *)((int)register0x00000054 + -0x54));
LAB_0059a924:
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
                    /* WARNING: Could not recover jumptable at 0x0059a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x90))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x8c) =
           *(undefined **)((int)register0x00000054 + -0x88);
      *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_0059a994;
      *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_0059a9ac;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x90);
      if (bVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar11;
      }
    }
    unaff_lr = 0x59a97c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/ssdp.(*HttpServer).handleGcodeUpload @ 0059a9b0 (size 12548) */

/* WARNING: Removing unreachable block (ram,0x0059ba74) */

void printerApi_service_ssdp___HttpServer__handleGcodeUpload(void)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  undefined **extraout_r2;
  undefined **ppuVar8;
  undefined4 *extraout_r2_00;
  undefined **extraout_r2_01;
  undefined **extraout_r2_02;
  undefined4 extraout_r3;
  undefined **extraout_r3_00;
  undefined **ppuVar9;
  undefined **extraout_r3_01;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined **extraout_r12;
  undefined *unaff_lr;
  undefined8 uVar12;
  undefined *in_stack_00000008;
  undefined **in_stack_0000000c;
  undefined **in_stack_00000010;
  undefined *local_468;
  undefined8 local_464;
  undefined **local_45c;
  undefined **ppuStack_458;
  undefined **local_454;
  undefined **local_450;
  undefined **local_44c;
  undefined **local_448;
  undefined **local_444;
  int local_440;
  undefined4 local_43c;
  byte local_436;
  byte local_435;
  undefined **local_434;
  undefined **local_430;
  undefined **local_42c;
  undefined **local_428;
  undefined *local_424;
  undefined **local_420;
  undefined **local_41c;
  undefined **local_418;
  undefined **local_414;
  undefined **local_410;
  undefined **local_40c;
  undefined *local_408;
  undefined **local_404;
  undefined **local_400;
  undefined **local_3fc;
  undefined **local_3f8;
  int local_3f4;
  undefined **local_3f0;
  undefined **local_3ec;
  undefined **local_3e8;
  undefined **local_3e4;
  undefined **local_3e0;
  undefined **local_3dc;
  undefined **local_3d8;
  undefined **local_3d4;
  undefined **local_3d0;
  undefined **local_3cc;
  undefined **local_3c8;
  undefined1 auStack_3c4 [16];
  uint local_3b4;
  int local_3b0;
  undefined **local_3ac;
  undefined **local_3a8;
  int local_3a4;
  undefined **local_3a0;
  undefined **local_39c;
  undefined **local_398;
  undefined **local_394;
  undefined **local_390;
  undefined **local_38c;
  undefined **local_388;
  int local_384;
  undefined **local_380;
  undefined **local_37c;
  undefined **local_378;
  int local_374;
  undefined **local_370;
  undefined1 auStack_36c [12];
  undefined **local_360;
  double local_354;
  double local_34c;
  double local_344;
  double local_33c;
  double local_334;
  double local_32c;
  double local_324;
  double local_31c;
  double local_314;
  double local_30c;
  double local_304;
  double local_2fc;
  double local_2f4;
  double local_2ec;
  undefined1 auStack_2e4 [24];
  undefined **local_2cc;
  char *local_2c8;
  undefined4 local_2c4;
  undefined1 auStack_2c0 [20];
  undefined4 local_2ac [5];
  undefined4 local_298 [5];
  undefined4 local_284 [5];
  undefined4 local_270 [5];
  undefined4 local_25c [5];
  undefined4 local_248 [5];
  undefined4 local_234 [5];
  undefined4 local_220 [5];
  undefined4 local_20c [5];
  undefined4 local_1f8 [5];
  undefined4 local_1e4 [5];
  undefined4 local_1d0 [5];
  undefined4 local_1bc [5];
  undefined4 local_1a8 [5];
  undefined4 local_194 [5];
  undefined4 local_180 [5];
  undefined4 local_16c [5];
  undefined4 local_158 [5];
  undefined4 local_144;
  undefined4 local_140 [3];
  undefined *local_134;
  undefined **local_130;
  undefined *local_12c;
  undefined *local_128;
  undefined **local_124;
  undefined **local_120;
  undefined **local_11c;
  undefined **local_118;
  undefined **local_114;
  undefined **local_110;
  undefined **local_10c;
  undefined **local_108;
  undefined **local_104;
  undefined **local_100;
  undefined **local_fc;
  undefined4 local_f8;
  undefined **local_f4;
  undefined **local_f0;
  undefined **local_ec;
  undefined **local_e8;
  undefined **local_e4;
  undefined **local_e0;
  undefined **local_dc;
  undefined **local_d8;
  undefined **local_d4;
  undefined *local_d0;
  undefined **local_cc;
  undefined **local_c8;
  undefined **local_c4;
  int local_c0;
  undefined **local_bc;
  undefined **local_b8;
  undefined *local_b4;
  undefined4 local_b0;
  undefined **local_ac;
  undefined **local_a8 [4];
  undefined **local_98;
  int local_94;
  undefined **local_90;
  undefined **local_8c;
  undefined *local_88;
  undefined **local_84;
  undefined *local_80;
  undefined **local_7c;
  undefined *local_78;
  undefined **local_74;
  undefined *local_70;
  undefined **local_6c;
  undefined *local_68;
  undefined **local_64;
  undefined *local_60;
  undefined **local_5c;
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
  undefined *local_30;
  undefined **local_2c;
  undefined *local_28;
  undefined **local_24;
  undefined *local_20;
  undefined **local_1c;
  undefined *local_18;
  undefined **local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined *local_8;
  undefined4 local_4;
  
  while (&local_3e8 <= *(undefined ****)(unaff_r10 + 8)) {
    unaff_lr = (undefined *)0x59dcd8;
    FUN_00096bb8();
  }
  local_468 = unaff_lr;
  printerApi_common_config_LanPrintIsOpen();
  if ((char)local_464 == '\0') {
    local_464._0_4_ = (undefined ***)in_stack_00000008;
    local_464._4_4_ = in_stack_0000000c;
    local_45c = (undefined **)PTR_DAT_0059bc2c;
    ppuStack_458 = (undefined **)0x1b;
    local_454 = (undefined **)0x1f4;
    FUN_0038f34c();
    FUN_0004fb3c();
    return;
  }
  local_464._0_4_ = (undefined ***)in_stack_00000008;
  local_464._4_4_ = in_stack_0000000c;
  local_45c = in_stack_00000010;
  printerApi_service_ssdp_authenticateToken();
  if (((uint)ppuStack_458 & 0xff) == 0) {
    FUN_0004fb3c();
    return;
  }
  if ((((in_stack_00000010[1] != (undefined *)0x4) || (pcVar5 = *in_stack_00000010, *pcVar5 != 'P'))
      || (pcVar5[1] != 'O')) || ((pcVar5[2] != 'S' || (pcVar5[3] != 'T')))) {
    local_464._0_4_ = (undefined ***)0x4a3d;
    printerApi_service_ssdp_ErrCode_String();
    FUN_00098a24(0,local_158,local_45c,local_464._4_4_);
    local_158[0] = 0x4a3d;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059b2cc;
    local_464._4_4_ = (undefined **)local_158;
    FUN_0001cd7c();
    ppuStack_458 = local_45c;
    local_464._0_4_ = (undefined ***)in_stack_00000008;
    local_464._4_4_ = in_stack_0000000c;
    local_45c = (undefined **)PTR_DAT_0059b2cc;
    local_454 = (undefined **)0x0;
    local_450 = (undefined **)0x0;
    local_44c = (undefined **)0x0;
    printerApi_service_ssdp_writeJsonToClient();
    FUN_0004fb3c();
    return;
  }
  local_10 = *(undefined4 *)PTR_DAT_0059b2d0;
  local_c = *(undefined4 *)PTR_DAT_0059b2d4;
  local_8 = PTR_DAT_0059b2d8;
  local_4 = 0xb;
  local_464._0_4_ = (undefined ***)PTR_DAT_0059b2dc;
  local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059b2e0);
  FUN_0001cd7c();
  local_464._0_4_ = *(undefined ****)PTR_DAT_0059b2e4;
  local_464._4_4_ = (undefined **)PTR_DAT_0059b2e8;
  printerApi_service_event___Dispatcher__Dispatch();
  local_464._4_4_ = *(undefined ***)(*(int *)(*(int *)PTR_DAT_0059b2ec + 8) + 0x16c);
  local_464._0_4_ = (undefined ***)*(undefined ***)(*(int *)(*(int *)PTR_DAT_0059b2ec + 8) + 0x168);
  if (local_464._4_4_ == (undefined **)0x0) {
    local_464._4_4_ = (undefined **)0x18;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059b2f0;
  }
  local_3f4 = (int)local_464._4_4_;
  local_11c = (undefined **)(undefined ***)local_464;
  uVar1 = printerApi_common_file_DiskUsage();
  uVar1 = FUN_00098e0c(uVar1,&local_45c,auStack_2e4);
  FUN_00098e0c(uVar1,auStack_2e4,auStack_3c4);
  if (local_3b4 < 0xc800001 && local_3b0 == 0) {
    local_464._0_4_ = (undefined ***)0x4a42;
    printerApi_service_ssdp_ErrCode_String();
    FUN_00098a24(0,local_16c,local_45c,local_464._4_4_);
    local_16c[0] = 0x4a42;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059bc04;
    local_464._4_4_ = (undefined **)local_16c;
    FUN_0001cd7c();
    ppuStack_458 = local_45c;
    local_464._0_4_ = (undefined ***)in_stack_00000008;
    local_464._4_4_ = in_stack_0000000c;
    local_45c = (undefined **)PTR_DAT_0059bc04;
    local_454 = (undefined **)0x0;
    local_450 = (undefined **)0x0;
    local_44c = (undefined **)0x0;
    printerApi_service_ssdp_writeJsonToClient();
    local_10 = *(undefined4 *)PTR_DAT_0059bc10;
    local_c = *(undefined4 *)PTR_DAT_0059bc14;
    local_8 = PTR_DAT_0059bc18;
    local_4 = 0xd;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059bc1c;
    local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059bc20);
    FUN_0001cd7c();
    local_464._0_4_ = *(undefined ****)PTR_DAT_0059bc24;
    local_464._4_4_ = (undefined **)PTR_DAT_0059bc28;
    printerApi_service_event___Dispatcher__Dispatch();
    FUN_0004fb3c();
    return;
  }
  local_370 = (undefined **)local_3b4;
  local_374 = local_3b0;
  local_464._0_4_ = (undefined ***)in_stack_00000010[7];
  local_464._4_4_ = (undefined **)PTR_DAT_0059b2f4;
  local_45c = (undefined **)0xd;
  FUN_003119f4();
  local_464._0_4_ = (undefined ***)ppuStack_458;
  local_464._4_4_ = local_454;
  local_45c = (undefined **)0xa;
  ppuStack_458 = (undefined **)0x40;
  FUN_000a8078();
  local_3d8 = local_454;
  local_3d4 = local_450;
  FUN_00098a18(0,(int)&local_468 + DAT_0059b2f8,local_450,local_454);
  FUN_000869d0();
  local_2ec = *DAT_0059b2fc * *DAT_0059b2fc * (double)CONCAT44(ppuStack_458,local_45c);
  local_464 = local_2ec;
  FUN_0008a4bc();
  local_30 = DAT_0059b300;
  local_2c = local_45c;
  local_464._0_4_ = (undefined ***)local_3b4;
  local_464._4_4_ = (undefined **)local_3b0;
  FUN_000869d0();
  local_2f4 = *DAT_0059b2fc * *DAT_0059b2fc * (double)CONCAT44(ppuStack_458,local_45c);
  local_464 = local_2f4;
  FUN_0008a4bc();
  local_28 = DAT_0059b300;
  local_24 = local_45c;
  local_20 = DAT_0059b300;
  local_1c = DAT_0059b304;
  local_464._0_4_ = (undefined ***)((int)local_370 + DAT_0059b308);
  local_464._4_4_ = (undefined **)(local_374 + -1 + (uint)CARRY4((uint)local_370,DAT_0059b308));
  local_3e0 = (undefined **)(undefined ***)local_464;
  local_378 = local_464._4_4_;
  FUN_000869d0();
  local_2fc = *DAT_0059b2fc * *DAT_0059b2fc * (double)CONCAT44(ppuStack_458,local_45c);
  local_464 = local_2fc;
  FUN_0008a4bc();
  local_18 = DAT_0059b300;
  local_14 = local_45c;
  local_464._0_4_ = (undefined ***)PTR_DAT_0059b30c;
  local_464._4_4_ = (undefined **)0x45;
  local_45c = (undefined **)((int)&local_468 + DAT_0059b2f8);
  ppuStack_458 = (undefined **)0x4;
  local_454 = (undefined **)&DAT_00000004;
  printerApi_common_logger_RedDebugf();
  if (local_3e0 < local_3d8 && local_3d4 == local_378 || local_378 < local_3d4) {
    local_464._0_4_ = (undefined ***)0x4a42;
    printerApi_service_ssdp_ErrCode_String();
    FUN_00098a24(0,local_180,local_45c,local_464._4_4_);
    local_180[0] = 0x4a42;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059bc04;
    local_464._4_4_ = (undefined **)local_180;
    FUN_0001cd7c();
    ppuStack_458 = local_45c;
    local_464._0_4_ = (undefined ***)in_stack_00000008;
    local_464._4_4_ = in_stack_0000000c;
    local_45c = (undefined **)PTR_DAT_0059bc04;
    local_454 = (undefined **)0x0;
    local_450 = (undefined **)0x0;
    local_44c = (undefined **)0x0;
    printerApi_service_ssdp_writeJsonToClient();
    FUN_00098a20(0,&local_48);
    local_464._0_4_ = (undefined ***)local_3d8;
    local_464._4_4_ = local_3d4;
    FUN_0008a4bc();
    local_48 = PTR_DAT_0059bc08;
    local_44 = local_45c;
    local_464._0_4_ = (undefined ***)local_3b4;
    local_464._4_4_ = (undefined **)local_3b0;
    FUN_0008a4bc();
    local_40 = PTR_DAT_0059bc08;
    local_3c = local_45c;
    local_464._0_4_ = (undefined ***)local_3e0;
    local_464._4_4_ = local_378;
    FUN_0008a4bc();
    local_38 = PTR_DAT_0059bc08;
    local_34 = local_45c;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059bc0c;
    local_464._4_4_ = (undefined **)0x3a;
    local_45c = &local_48;
    ppuStack_458 = (undefined **)0x3;
    local_454 = (undefined **)0x3;
    printerApi_common_logger_Debugf();
    local_10 = *(undefined4 *)PTR_DAT_0059bc10;
    local_c = *(undefined4 *)PTR_DAT_0059bc14;
    local_8 = PTR_DAT_0059bc18;
    local_4 = 0xd;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059bc1c;
    local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059bc20);
    FUN_0001cd7c();
    local_464._0_4_ = *(undefined ****)PTR_DAT_0059bc24;
    local_464._4_4_ = (undefined **)PTR_DAT_0059bc28;
    printerApi_service_event___Dispatcher__Dispatch();
    FUN_0004fb3c();
    return;
  }
  local_464._0_4_ = (undefined ***)in_stack_00000010[7];
  local_464._4_4_ = (undefined **)PTR_DAT_0059b310;
  local_45c = (undefined **)0xc;
  FUN_003119f4();
  local_2c4 = ppuStack_458;
  local_420 = local_454;
  local_464._0_4_ = (undefined ***)ppuStack_458;
  local_464._4_4_ = local_454;
  FUN_003167ac();
  if (local_450 != (undefined **)0x0) {
    local_3c8 = local_450;
    local_100 = local_44c;
    local_464._0_4_ = (undefined ***)0x4a3e;
    printerApi_service_ssdp_ErrCode_String();
    FUN_00098a24(0,local_194,local_45c,local_464._4_4_);
    local_194[0] = 0x4a3e;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059b2cc;
    local_464._4_4_ = (undefined **)local_194;
    FUN_0001cd7c();
    ppuStack_458 = local_45c;
    local_464._0_4_ = (undefined ***)in_stack_00000008;
    local_464._4_4_ = in_stack_0000000c;
    local_45c = (undefined **)PTR_DAT_0059b2cc;
    local_454 = (undefined **)0x0;
    local_450 = (undefined **)0x0;
    local_44c = (undefined **)0x0;
    printerApi_service_ssdp_writeJsonToClient();
    FUN_00098a28(0,&local_58);
    local_58 = (undefined *)0x0;
    if (local_3c8 != (undefined **)0x0) {
      local_58 = local_3c8[1];
    }
    local_54 = local_100;
    local_464._0_4_ = (undefined ***)local_2c4;
    local_464._4_4_ = local_420;
    FUN_0008a578();
    local_50 = PTR_SUB_0059b314;
    local_4c = local_45c;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059b318;
    local_464._4_4_ = (undefined **)0x29;
    local_45c = &local_58;
    ppuStack_458 = (undefined **)0x2;
    local_454 = (undefined **)0x2;
    printerApi_common_logger_Debugf();
    local_10 = *(undefined4 *)PTR_DAT_0059b2d0;
    local_c = *(undefined4 *)PTR_DAT_0059b2d4;
    local_8 = PTR_DAT_0059b31c;
    local_4 = 0xd;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059b2dc;
    local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059b2e0);
    FUN_0001cd7c();
    local_464._0_4_ = *(undefined ****)PTR_DAT_0059b2e4;
    local_464._4_4_ = (undefined **)PTR_DAT_0059b2e8;
    printerApi_service_event___Dispatcher__Dispatch();
    FUN_0004fb3c();
    return;
  }
  local_464._0_4_ = (undefined ***)PTR_DAT_0059b320;
  local_464._4_4_ = local_454;
  local_45c = (undefined **)PTR_s_boundaryConflictrollbackFuncType_00774847_0xb46_0059b324;
  ppuStack_458 = (undefined **)0x8;
  FUN_00021c74();
  local_3a0 = (undefined **)local_454[1];
  local_f4 = (undefined **)*local_454;
  if (local_3a0 == (undefined **)0x0) {
    local_464._0_4_ = (undefined ***)0x4a3e;
    printerApi_service_ssdp_ErrCode_String();
    FUN_00098a24(0,local_1a8,local_45c,local_464._4_4_);
    local_1a8[0] = 0x4a3e;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059b2cc;
    local_464._4_4_ = (undefined **)local_1a8;
    FUN_0001cd7c();
    ppuStack_458 = local_45c;
    local_464._0_4_ = (undefined ***)in_stack_00000008;
    local_464._4_4_ = in_stack_0000000c;
    local_45c = (undefined **)PTR_DAT_0059b2cc;
    local_454 = (undefined **)0x0;
    local_450 = (undefined **)0x0;
    local_44c = (undefined **)0x0;
    printerApi_service_ssdp_writeJsonToClient();
    local_60 = (undefined *)0x0;
    local_5c = (undefined **)0x0;
    local_464._0_4_ = (undefined ***)local_2c4;
    local_464._4_4_ = local_420;
    FUN_0008a578();
    local_60 = PTR_SUB_0059b314;
    local_5c = local_45c;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059b340;
    local_464._4_4_ = (undefined **)0x2b;
    local_45c = (undefined **)((int)&local_468 + DAT_0059b344);
    ppuStack_458 = (undefined **)0x1;
    local_454 = (undefined **)0x1;
    printerApi_common_logger_Debugf();
    local_10 = *(undefined4 *)PTR_DAT_0059b2d0;
    local_c = *(undefined4 *)PTR_DAT_0059b2d4;
    local_8 = PTR_DAT_0059b31c;
    local_4 = 0xd;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059b2dc;
    local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059b2e0);
    FUN_0001cd7c();
    local_464._0_4_ = *(undefined ****)PTR_DAT_0059b2e4;
    local_464._4_4_ = (undefined **)PTR_DAT_0059b2e8;
    printerApi_service_event___Dispatcher__Dispatch();
    FUN_0004fb3c();
    return;
  }
  local_408 = in_stack_00000010[8];
  local_3e4 = local_378;
  local_3e8 = local_3e0;
  if ((int)local_378 < 0) {
    local_3e4 = (undefined **)0x0;
    local_3e8 = (undefined **)0x0;
  }
  local_12c = in_stack_00000010[9];
  local_464._0_4_ = (undefined ***)PTR_DAT_0059b328;
  FUN_0001eed8();
  *local_464._4_4_ = in_stack_00000008;
  ppuVar2 = local_464._4_4_;
  if (*(int *)PTR_DAT_0059b32c != 0) {
    ppuVar2 = (undefined **)FUN_00098688();
    *unaff_r8 = in_stack_0000000c;
    unaff_r8[1] = local_12c;
  }
  ppuVar2[1] = (undefined *)in_stack_0000000c;
  ppuVar2[2] = local_408;
  ppuVar2[3] = local_12c;
  ppuVar2[4] = (undefined *)local_3e8;
  ppuVar2[5] = (undefined *)local_3e4;
  ppuVar2[6] = (undefined *)local_3e8;
  ppuVar2[7] = (undefined *)local_3e4;
  in_stack_00000010[8] = PTR_DAT_0059b330;
  if (*(int *)PTR_DAT_0059b32c != 0) {
    ppuVar2 = (undefined **)FUN_00098688();
    *unaff_r8 = ppuVar2;
    unaff_r8[1] = in_stack_00000010[9];
  }
  in_stack_00000010[9] = (undefined *)ppuVar2;
  local_464._0_4_ = (undefined ***)(undefined **)0x0;
  local_464._4_4_ = (undefined **)in_stack_00000010[9];
  if (in_stack_00000010[8] != (undefined *)0x0) {
    local_464._4_4_ = *(undefined ***)(in_stack_00000010[8] + 4);
    local_464._0_4_ = (undefined ***)PTR_DAT_0059b334;
    local_d4 = (undefined **)in_stack_00000010[9];
    FUN_0001cf8c();
    local_464._0_4_ = (undefined ***)local_45c;
    local_464._4_4_ = local_d4;
  }
  local_45c = local_f4;
  ppuStack_458 = local_3a0;
  FUN_0031b538();
  local_108 = local_454;
  uVar1 = FUN_0010cf30();
  FUN_00098e14(uVar1,&local_464,local_140);
  local_435 = local_3d4 == (undefined **)0x0;
  local_436 = local_3d8 == (undefined **)0x0;
  local_400 = local_3d4;
  local_404 = local_3d8;
  if ((int)local_3d4 < 0 || (bool)local_435 && (bool)local_436) {
    local_400 = (undefined **)in_stack_00000010[0xc];
    local_404 = (undefined **)in_stack_00000010[0xb];
  }
  local_464._0_4_ = (undefined ***)PTR_DAT_0059b338;
  FUN_0001eed8();
  local_128 = (undefined *)local_464._4_4_;
  *(undefined ***)((int)local_464._4_4_ + 8) = local_404;
  *(undefined ***)((int)local_464._4_4_ + 0xc) = local_400;
  local_464._0_4_ = (undefined ***)PTR_DAT_0059b33c;
  local_464._4_4_ = (undefined **)0x40000;
  local_45c = (undefined **)0x40000;
  FUN_000933e8();
  local_d8 = ppuStack_458;
  local_37c = (undefined **)0x0;
  local_d4 = (undefined **)0x0;
  local_40c = (undefined **)0x0;
  local_144 = 0;
  ppuVar8 = (undefined **)0x0;
  ppuVar4 = (undefined **)0x0;
  ppuVar10 = (undefined **)0x0;
  ppuVar2 = (undefined **)0x0;
LAB_0059b614:
  do {
    local_464._0_4_ = (undefined ***)local_108;
    local_3dc = ppuVar10;
    local_380 = ppuVar8;
    local_370 = ppuVar4;
    local_104 = ppuVar2;
    FUN_0031c6cc();
    local_3f8 = local_45c;
    local_114 = local_464._4_4_;
    local_120 = ppuStack_458;
    if (*(undefined ***)PTR_DAT_0059bc30 == local_45c) {
      local_464._0_4_ = (undefined ***)local_45c;
      local_464._4_4_ = ppuStack_458;
      local_45c = *(undefined ***)PTR_DAT_0059bc34;
      FUN_000169b8();
      if ((char)ppuStack_458 != '\0') {
        ppuVar2 = local_37c;
        local_464._0_4_ = (undefined ***)local_d4;
        if (local_37c == (undefined **)0x0) {
          ppuVar2 = local_3dc;
          local_464._0_4_ = (undefined ***)local_104;
        }
        if (ppuVar2 == (undefined **)0x0) {
          if (local_40c != (undefined **)0x0) {
            local_464._0_4_ = (undefined ***)local_144;
            local_464._4_4_ = local_40c;
            FUN_00127c60();
          }
        }
        else if (local_40c != (undefined **)0x0) {
          local_45c = (undefined **)PTR_DAT_0059c4f4;
          ppuStack_458 = (undefined **)0x1;
          local_d4 = (undefined **)(undefined ***)local_464;
          local_464._4_4_ = ppuVar2;
          local_37c = ppuVar2;
          internal_stringslite_Index();
          if (-1 < (int)local_454) {
            local_464._0_4_ = (undefined ***)local_144;
            local_464._4_4_ = local_40c;
            FUN_00127c60();
            local_464._0_4_ = (undefined ***)0x4a3f;
            printerApi_service_ssdp_ErrCode_String();
            FUN_00098a24(0,local_220,local_45c,local_464._4_4_);
            local_220[0] = 0x4a3f;
            local_464._0_4_ = (undefined ***)DAT_0059c4c4;
            local_464._4_4_ = (undefined **)local_220;
            FUN_0001cd7c();
            ppuStack_458 = local_45c;
            local_464._0_4_ = (undefined ***)in_stack_00000008;
            local_464._4_4_ = in_stack_0000000c;
            local_45c = DAT_0059c4c4;
            local_454 = (undefined **)0x0;
            local_450 = (undefined **)0x0;
            local_44c = (undefined **)0x0;
            printerApi_service_ssdp_writeJsonToClient();
            local_10 = *(undefined4 *)PTR_DAT_0059c4d0;
            local_c = *(undefined4 *)PTR_DAT_0059c4d4;
            local_8 = PTR_DAT_0059c4d8;
            local_4 = 0xd;
            local_464._0_4_ = (undefined ***)PTR_DAT_0059c4dc;
            local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059c4e0);
            FUN_0001cd7c();
            local_464._0_4_ = *(undefined ****)PTR_DAT_0059c4e4;
            local_464._4_4_ = (undefined **)PTR_DAT_0059c4e8;
            printerApi_service_event___Dispatcher__Dispatch();
            FUN_0004fb3c();
            return;
          }
          local_b4 = PTR_printerApi_service_ssdp___HttpServer__handleGcodeUpload_deferwrap1_0059c4f8
          ;
          local_ac = local_40c;
          local_b0 = local_144;
          local_360 = &local_b4;
          local_464._0_4_ = (undefined ***)auStack_36c;
          iVar6 = FUN_0004f500();
          if (iVar6 != 0) {
            FUN_0004fb3c();
            return;
          }
          FUN_00098a28(0,&local_c4);
          local_c0 = local_3f4;
          local_c4 = local_11c;
          local_b8 = local_37c;
          local_bc = local_d4;
          local_464._0_4_ = &local_c4;
          local_464._4_4_ = (undefined **)0x2;
          local_45c = (undefined **)0x2;
          FUN_00159184();
          local_2cc = ppuStack_458;
          local_428 = local_454;
          if ((local_435 & local_436) != 0) {
            local_3d8 = local_370;
            local_3d4 = local_380;
          }
          FUN_00098a20(0,&local_48);
          local_464._0_4_ = (undefined ***)local_d4;
          local_464._4_4_ = local_37c;
          FUN_0008a578();
          local_48 = PTR_SUB_0059c4ec;
          local_44 = local_45c;
          local_464._0_4_ = (undefined ***)local_104;
          local_464._4_4_ = local_3dc;
          FUN_0008a578();
          local_40 = PTR_SUB_0059c4ec;
          local_3c = local_45c;
          local_464._0_4_ = (undefined ***)local_370;
          local_464._4_4_ = local_380;
          FUN_0008a4bc();
          local_38 = PTR_DAT_0059c4fc;
          local_34 = local_45c;
          local_464._0_4_ = (undefined ***)PTR_DAT_0059c500;
          local_464._4_4_ = (undefined **)&DAT_0000003f;
          local_45c = &local_48;
          ppuStack_458 = (undefined **)0x3;
          local_454 = (undefined **)0x3;
          printerApi_common_logger_RedDebugf();
          local_464._0_4_ = (undefined ***)PTR_DAT_0059c504;
          FUN_0001eed8();
          local_dc = local_464._4_4_;
          local_464._4_4_[1] = (undefined *)0x6;
          *local_464._4_4_ = PTR_DAT_0059c508;
          local_464._4_4_[3] = (undefined *)0xa;
          local_464._4_4_[2] = PTR_s__gcode_3mfuser_abortgkui_1_loggk_007765bd_0x2ca_0059c50c;
          local_464._4_4_[5] = (undefined *)0x4;
          local_464._4_4_[4] = PTR_DAT_0059c510;
          iVar6 = 0;
          ppuVar8 = local_464._4_4_;
          ppuVar4 = local_37c;
          ppuVar10 = local_d4;
          break;
        }
        local_464._0_4_ = (undefined ***)0x4a3f;
        printerApi_service_ssdp_ErrCode_String();
        FUN_00098a24(0,local_20c,local_45c,local_464._4_4_);
        local_20c[0] = 0x4a3f;
        local_464._0_4_ = (undefined ***)DAT_0059c4c4;
        local_464._4_4_ = (undefined **)local_20c;
        FUN_0001cd7c();
        ppuStack_458 = local_45c;
        local_464._0_4_ = (undefined ***)in_stack_00000008;
        local_464._4_4_ = in_stack_0000000c;
        local_45c = DAT_0059c4c4;
        local_454 = (undefined **)0x0;
        local_450 = (undefined **)0x0;
        local_44c = (undefined **)0x0;
        printerApi_service_ssdp_writeJsonToClient();
        local_60 = PTR_SUB_0059c4ec;
        local_5c = (undefined **)PTR_DAT_0059c4f0;
        local_464._0_4_ = (undefined ***)((int)&local_468 + DAT_0059c4cc);
        local_464._4_4_ = (undefined **)0x1;
        local_45c = (undefined **)0x1;
        printerApi_common_logger_Debug();
        local_10 = *(undefined4 *)PTR_DAT_0059c4d0;
        local_c = *(undefined4 *)PTR_DAT_0059c4d4;
        local_8 = PTR_DAT_0059c4d8;
        local_4 = 0xd;
        local_464._0_4_ = (undefined ***)PTR_DAT_0059c4dc;
        local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059c4e0);
        FUN_0001cd7c();
        local_464._0_4_ = *(undefined ****)PTR_DAT_0059c4e4;
        local_464._4_4_ = (undefined **)PTR_DAT_0059c4e8;
        printerApi_service_event___Dispatcher__Dispatch();
        FUN_0004fb3c();
        return;
      }
    }
    if (local_3f8 != (undefined **)0x0) {
      local_464._0_4_ = (undefined ***)0x4a3e;
      printerApi_service_ssdp_ErrCode_String();
      FUN_00098a24(0,local_1bc,local_45c,local_464._4_4_);
      local_1bc[0] = 0x4a3e;
      local_464._0_4_ = (undefined ***)DAT_0059c4c4;
      local_464._4_4_ = (undefined **)local_1bc;
      FUN_0001cd7c();
      ppuStack_458 = local_45c;
      local_464._0_4_ = (undefined ***)in_stack_00000008;
      local_464._4_4_ = in_stack_0000000c;
      local_45c = DAT_0059c4c4;
      local_454 = (undefined **)0x0;
      local_450 = (undefined **)0x0;
      local_44c = (undefined **)0x0;
      printerApi_service_ssdp_writeJsonToClient();
      local_60 = (undefined *)0x0;
      if (local_3f8 != (undefined **)0x0) {
        local_60 = local_3f8[1];
      }
      local_5c = local_120;
      local_464._0_4_ = (undefined ***)DAT_0059c4c8;
      local_464._4_4_ = (undefined **)0x12;
      local_45c = (undefined **)((int)&local_468 + DAT_0059c4cc);
      ppuStack_458 = (undefined **)0x1;
      local_454 = (undefined **)0x1;
      printerApi_common_logger_Debugf();
      local_10 = *(undefined4 *)PTR_DAT_0059c4d0;
      local_c = *(undefined4 *)PTR_DAT_0059c4d4;
      local_8 = PTR_DAT_0059c4d8;
      local_4 = 0xd;
      local_464._0_4_ = (undefined ***)PTR_DAT_0059c4dc;
      local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059c4e0);
      FUN_0001cd7c();
      local_464._0_4_ = *(undefined ****)PTR_DAT_0059c4e4;
      local_464._4_4_ = (undefined **)PTR_DAT_0059c4e8;
      printerApi_service_event___Dispatcher__Dispatch();
      FUN_0004fb3c();
      return;
    }
    if (local_114[4] == (undefined *)0x0) {
      local_464._0_4_ = (undefined ***)local_114;
      FUN_0031b454();
    }
    if (local_114[3] == (undefined *)0x9) {
      local_464._0_4_ = (undefined ***)local_114[2];
      local_464._4_4_ = (undefined **)PTR_s_form_dataassistingcomplex64inter_0077568d_0x7c5_0059bc38
      ;
      local_45c = (undefined **)&DAT_00000009;
      FUN_000150d4();
      if ((char)ppuStack_458 == '\0') goto LAB_0059b6f0;
      local_464._4_4_ = (undefined **)local_114[4];
      local_464._0_4_ = (undefined ***)PTR_DAT_0059bc3c;
      local_45c = (undefined **)PTR_s_namepathsizedatetypetext_gco_acm_0077367d_0xf_0059bc40;
      ppuStack_458 = (undefined **)&DAT_00000004;
      FUN_00021c74();
      local_464._0_4_ = (undefined ***)*local_454;
      puVar3 = local_454[1];
    }
    else {
LAB_0059b6f0:
      puVar3 = (undefined *)0x0;
      local_464._0_4_ = (undefined ***)0x0;
    }
    if (puVar3 == (undefined *)0x8) {
      local_464._4_4_ = (undefined **)PTR_s_filenamecompleteerror__vsettings_00774847_0xa9e_0059bc44
      ;
      local_45c = (undefined **)&DAT_00000008;
      local_424 = puVar3;
      local_2c8 = (char *)(undefined ***)local_464;
      FUN_000150d4();
      puVar3 = local_424;
      local_464._0_4_ = (undefined ***)local_2c8;
      if ((char)ppuStack_458 != '\0') {
        local_464._0_4_ = (undefined ***)PTR_DAT_0059bc68;
        FUN_0001eed8();
        *local_464._4_4_ = PTR_DAT_0059bc64;
        if (*(int *)PTR_DAT_0059bc6c != 0) {
          local_464._4_4_ = (undefined **)FUN_00098678();
          *ppuVar2 = (undefined *)local_114;
        }
        local_464._4_4_[1] = (undefined *)local_114;
        local_464._4_4_[2] = (undefined *)0x1000;
        local_464._4_4_[3] = (undefined *)0x0;
        local_464._0_4_ = (undefined ***)PTR_DAT_0059bc70;
        FUN_000e4e18();
        local_464._0_4_ = (undefined ***)0x0;
        local_464._4_4_ = local_45c;
        local_45c = ppuStack_458;
        FUN_00093e34();
        local_464._0_4_ = (undefined ***)ppuStack_458;
        local_464._4_4_ = local_454;
        FUN_00148fb4();
        local_464._0_4_ = *(undefined ****)PTR_DAT_0059bc5c;
        local_464._4_4_ = *(undefined ***)PTR_DAT_0059bc60;
        local_d4 = local_45c;
        local_37c = ppuStack_458;
        local_45c = (undefined **)PTR_DAT_0059bc64;
        ppuStack_458 = local_114;
        local_454 = (undefined **)0x0;
        local_450 = (undefined **)0x0;
        local_44c = (undefined **)0x0;
        FUN_000e40d4();
        ppuVar8 = local_380;
        ppuVar4 = local_370;
        ppuVar10 = local_3dc;
        ppuVar2 = local_104;
        goto LAB_0059b614;
      }
    }
    if (((puVar3 == (undefined *)0x5) && (*(char *)(undefined ***)local_464 == 'g')) &&
       ((*(char *)((int)(undefined ***)local_464 + 1) == 'c' &&
        (((*(char *)((int)(undefined ***)local_464 + 2) == 'o' &&
          (*(char *)((int)(undefined ***)local_464 + 3) == 'd')) &&
         (*(char *)((int)(undefined ***)local_464 + 4) == 'e')))))) {
      local_464._0_4_ = (undefined ***)local_114;
      FUN_0031b3a4();
      local_118 = local_464._4_4_;
      local_3f0 = local_45c;
      local_464._0_4_ = (undefined ***)0xa;
      local_464._4_4_ = (undefined **)PTR_DAT_0059bc48;
      local_45c = (undefined **)0x3e;
      printerApi_common_utils_str_RandomStringWithCharset();
      FUN_00098a28(0,&local_98,local_454,ppuStack_458);
      local_94 = local_3f4;
      local_98 = local_11c;
      local_464._0_4_ = (undefined ***)0x0;
      local_464._4_4_ = (undefined **)PTR_DAT_0059bc4c;
      local_45c = (undefined **)0xa;
      ppuStack_458 = (undefined **)extraout_r3;
      local_454 = extraout_r2;
      FUN_000715a4();
      local_8c = local_44c;
      local_90 = local_450;
      local_464._0_4_ = &local_98;
      local_464._4_4_ = (undefined **)0x2;
      local_45c = (undefined **)0x2;
      FUN_00159184();
      local_144 = ppuStack_458;
      local_40c = local_454;
      local_464._0_4_ = (undefined ***)ppuStack_458;
      local_464._4_4_ = local_454;
      local_45c = (undefined **)0x241;
      ppuStack_458 = (undefined **)&DAT_000001a4;
      FUN_0012576c();
      if (local_450 != (undefined **)0x0) {
        local_10c = local_44c;
        local_3ec = local_450;
        local_464._0_4_ = *(undefined ****)PTR_DAT_0059bc5c;
        local_464._4_4_ = *(undefined ***)PTR_DAT_0059bc60;
        local_45c = (undefined **)PTR_DAT_0059bc64;
        ppuStack_458 = local_114;
        local_454 = (undefined **)0x0;
        local_450 = (undefined **)0x0;
        local_44c = (undefined **)0x0;
        FUN_000e40d4();
        local_464._0_4_ = (undefined ***)0x4a40;
        printerApi_service_ssdp_ErrCode_String();
        FUN_00098a24(0,local_1d0,local_45c,local_464._4_4_);
        local_1d0[0] = 0x4a40;
        local_464._0_4_ = (undefined ***)PTR_DAT_0059bc04;
        local_464._4_4_ = (undefined **)local_1d0;
        FUN_0001cd7c();
        ppuStack_458 = local_45c;
        local_464._0_4_ = (undefined ***)in_stack_00000008;
        local_464._4_4_ = in_stack_0000000c;
        local_45c = (undefined **)PTR_DAT_0059bc04;
        local_454 = (undefined **)0x0;
        local_450 = (undefined **)0x0;
        local_44c = (undefined **)0x0;
        printerApi_service_ssdp_writeJsonToClient();
        FUN_00098a28(0,&local_58);
        local_464._0_4_ = (undefined ***)local_144;
        local_464._4_4_ = local_40c;
        FUN_0008a578();
        local_58 = PTR_SUB_0059bc74;
        local_54 = local_45c;
        local_50 = (undefined *)0x0;
        if (local_3ec != (undefined **)0x0) {
          local_50 = local_3ec[1];
        }
        local_4c = local_10c;
        local_464._0_4_ = (undefined ***)PTR_DAT_0059bc78;
        local_464._4_4_ = (undefined **)0x15;
        local_45c = &local_58;
        ppuStack_458 = (undefined **)0x2;
        local_454 = (undefined **)0x2;
        printerApi_common_logger_Debugf();
        local_10 = *(undefined4 *)PTR_DAT_0059bc10;
        local_c = *(undefined4 *)PTR_DAT_0059bc14;
        local_8 = PTR_DAT_0059bc18;
        local_4 = 0xd;
        local_464._0_4_ = (undefined ***)PTR_DAT_0059bc1c;
        local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059bc20);
        FUN_0001cd7c();
        local_464._0_4_ = *(undefined ****)PTR_DAT_0059bc24;
        local_464._4_4_ = (undefined **)PTR_DAT_0059bc28;
        printerApi_service_event___Dispatcher__Dispatch();
        FUN_0004fb3c();
        return;
      }
      local_110 = local_454;
      local_a8[0] = (undefined **)PTR_DAT_0059bc50;
      local_a8[1] = local_454;
      local_a8[2] = (undefined **)PTR_DAT_0059bc54;
      local_a8[3] = (undefined **)local_128;
      local_464._0_4_ = (undefined ***)PTR_DAT_0059bc58;
      local_464._4_4_ = (undefined **)0x0;
      local_45c = (undefined **)0x2;
      FUN_000933e8();
      ppuVar8 = (undefined **)0x2;
      local_39c = (undefined **)0x0;
      iVar6 = 0;
      ppuVar4 = ppuStack_458;
      while (iVar6 < 2) {
        ppuVar10 = local_a8[iVar6 * 2];
        ppuVar11 = local_a8[iVar6 * 2 + 1];
        local_384 = iVar6;
        if (ppuVar10 == (undefined **)PTR_DAT_0059d7d4) {
          ppuStack_458 = (undefined **)ppuVar11[1];
          local_464._4_4_ = (undefined **)((int)local_39c + (int)ppuStack_458);
          local_454 = ppuStack_458;
          ppuVar10 = (undefined **)*ppuVar11;
          ppuVar2 = local_464._4_4_;
          if (ppuVar8 < local_464._4_4_) {
            local_454 = (undefined **)PTR_DAT_0059dce0;
            local_464._0_4_ = (undefined ***)ppuVar4;
            local_45c = ppuVar8;
            local_388 = ppuStack_458;
            local_e8 = (undefined **)*ppuVar11;
            FUN_00093524();
            ppuVar4 = local_450;
            ppuVar8 = local_448;
            local_454 = local_388;
            ppuVar10 = local_e8;
            ppuVar2 = local_44c;
          }
          local_464._0_4_ = (undefined ***)PTR_DAT_0059dce0;
          local_45c = (undefined **)((int)ppuVar2 - (int)local_39c);
          local_464._4_4_ =
               (undefined **)
               ((int)ppuVar4 + (-((int)ppuVar8 - (int)local_39c) >> 0x1f & (int)local_39c << 3));
          ppuStack_458 = ppuVar10;
          local_39c = ppuVar2;
          local_398 = ppuVar8;
          local_f0 = ppuVar4;
          FUN_0008ed10();
          uVar12 = CONCAT44(local_384,local_f0);
          ppuVar8 = local_398;
        }
        else {
          ppuVar9 = (undefined **)((int)local_39c + 1);
          ppuVar2 = ppuVar11;
          if (ppuVar8 < ppuVar9) {
            ppuStack_458 = (undefined **)0x1;
            local_454 = (undefined **)PTR_DAT_0059dce0;
            local_464._0_4_ = (undefined ***)ppuVar4;
            local_464._4_4_ = ppuVar9;
            local_45c = ppuVar8;
            local_410 = ppuVar10;
            local_e4 = ppuVar11;
            FUN_00093524();
            ppuVar4 = local_450;
            ppuVar8 = local_448;
            ppuVar9 = local_44c;
            ppuVar10 = local_410;
            ppuVar2 = local_e4;
          }
          uVar12 = CONCAT44(local_384,ppuVar4);
          iVar6 = (int)ppuVar9 + -1;
          ppuVar4[iVar6 * 2] = (undefined *)ppuVar10;
          if (*(int *)PTR_DAT_0059dce8 != 0) {
            uVar12 = FUN_00098688();
            *ppuVar2 = (undefined *)ppuVar2;
            ppuVar2[1] = ppuVar4[iVar6 * 2 + 1];
            ppuVar8 = extraout_r2_02;
            ppuVar9 = extraout_r3_01;
          }
          local_39c = ppuVar9;
          ppuVar4[iVar6 * 2 + 1] = (undefined *)ppuVar2;
        }
LAB_0059d73c:
        ppuVar4 = (undefined **)uVar12;
        iVar6 = (int)((ulonglong)uVar12 >> 0x20) + 1;
      }
      local_464._0_4_ = (undefined ***)PTR_DAT_0059dcec;
      local_38c = ppuVar8;
      local_ec = ppuVar4;
      FUN_0001eed8();
      local_464._4_4_[1] = (undefined *)local_39c;
      local_464._4_4_[2] = (undefined *)local_38c;
      if (*(int *)PTR_DAT_0059dce8 != 0) {
        local_464._4_4_ = (undefined **)FUN_00098678();
        *ppuVar2 = (undefined *)local_ec;
      }
      *local_464._4_4_ = (undefined *)local_ec;
      local_464._0_4_ = (undefined ***)PTR_DAT_0059dce4;
      local_45c = (undefined **)PTR_DAT_0059dcf0;
      ppuStack_458 = local_114;
      local_454 = local_d8;
      local_450 = (undefined **)0x40000;
      local_44c = (undefined **)0x40000;
      FUN_000e401c();
      local_3a4 = local_440;
      local_394 = local_448;
      local_f8 = local_43c;
      local_390 = local_444;
      if (local_110 != (undefined **)0x0) {
        local_464._0_4_ = (undefined ***)*local_110;
        FUN_00127938();
      }
      local_464._0_4_ = *(undefined ****)PTR_DAT_0059dcf4;
      local_464._4_4_ = *(undefined ***)PTR_DAT_0059dcf8;
      local_45c = (undefined **)PTR_DAT_0059dcf0;
      ppuStack_458 = local_114;
      local_454 = (undefined **)0x0;
      local_450 = (undefined **)0x0;
      local_44c = (undefined **)0x0;
      FUN_000e40d4();
      ppuVar8 = local_390;
      ppuVar4 = local_394;
      ppuVar10 = local_3f0;
      ppuVar2 = local_118;
      if (local_3a4 != 0) {
        local_464._0_4_ = (undefined ***)local_144;
        local_464._4_4_ = local_40c;
        FUN_00127c60();
        local_464._0_4_ = (undefined ***)local_f8;
        (**(code **)(local_3a4 + 0xc))();
        local_464._0_4_ = (undefined ***)local_464._4_4_;
        local_464._4_4_ = local_45c;
        local_45c = (undefined **)PTR_DAT_0059dcfc;
        ppuStack_458 = (undefined **)0x16;
        internal_stringslite_Index();
        if ((int)local_454 < 0) {
          local_464._0_4_ = (undefined ***)0x4a41;
          printerApi_service_ssdp_ErrCode_String();
          FUN_00098a24(0,local_1f8,local_45c,local_464._4_4_);
          local_1f8[0] = 0x4a41;
          local_464._0_4_ = (undefined ***)PTR_DAT_0059dd00;
          local_464._4_4_ = (undefined **)local_1f8;
          FUN_0001cd7c();
          ppuStack_458 = local_45c;
          local_464._0_4_ = (undefined ***)in_stack_00000008;
          local_464._4_4_ = in_stack_0000000c;
          local_45c = (undefined **)PTR_DAT_0059dd00;
          local_454 = (undefined **)0x0;
          local_450 = (undefined **)0x0;
          local_44c = (undefined **)0x0;
          printerApi_service_ssdp_writeJsonToClient();
          FUN_00098a28(0,&local_58);
          local_58 = PTR_SUB_0059dd10;
          local_54 = (undefined **)PTR_DAT_0059dd14;
          local_50 = (undefined *)0x0;
          if (local_3a4 != 0) {
            local_50 = *(undefined **)(local_3a4 + 4);
          }
          local_4c = (undefined **)local_f8;
          local_464._0_4_ = (undefined ***)&local_58;
          local_464._4_4_ = (undefined **)0x2;
          local_45c = (undefined **)0x2;
          printerApi_common_logger_Debug();
        }
        else {
          local_464._0_4_ = (undefined ***)0x4a42;
          printerApi_service_ssdp_ErrCode_String();
          FUN_00098a24(0,local_1e4,local_45c,local_464._4_4_);
          local_1e4[0] = 0x4a42;
          local_464._0_4_ = (undefined ***)PTR_DAT_0059dd00;
          local_464._4_4_ = (undefined **)local_1e4;
          FUN_0001cd7c();
          ppuStack_458 = local_45c;
          local_464._0_4_ = (undefined ***)in_stack_00000008;
          local_464._4_4_ = in_stack_0000000c;
          local_45c = (undefined **)PTR_DAT_0059dd00;
          local_454 = (undefined **)0x0;
          local_450 = (undefined **)0x0;
          local_44c = (undefined **)0x0;
          printerApi_service_ssdp_writeJsonToClient();
          local_60 = (undefined *)0x0;
          local_5c = (undefined **)0x0;
          local_464._0_4_ = (undefined ***)local_3e0;
          local_464._4_4_ = local_378;
          FUN_0008a4bc();
          local_60 = PTR_DAT_0059dd04;
          local_5c = local_45c;
          local_464._0_4_ = (undefined ***)PTR_DAT_0059dd08;
          local_464._4_4_ = (undefined **)0x2f;
          local_45c = (undefined **)((int)&local_468 + DAT_0059dd0c);
          ppuStack_458 = (undefined **)0x1;
          local_454 = (undefined **)0x1;
          printerApi_common_logger_Debugf();
        }
        local_10 = *(undefined4 *)PTR_DAT_0059dd18;
        local_c = *(undefined4 *)PTR_DAT_0059dd1c;
        local_8 = PTR_DAT_0059dd20;
        local_4 = 0xd;
        local_464._0_4_ = (undefined ***)PTR_DAT_0059dd24;
        local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059dd28);
        FUN_0001cd7c();
        local_464._0_4_ = (undefined ***)*DAT_0059dd2c;
        local_464._4_4_ = (undefined **)DAT_0059dd30;
        printerApi_service_event___Dispatcher__Dispatch();
        FUN_0004fb3c();
        return;
      }
    }
    else {
      local_464._0_4_ = *(undefined ****)PTR_DAT_0059bc5c;
      local_464._4_4_ = *(undefined ***)PTR_DAT_0059bc60;
      local_45c = (undefined **)PTR_DAT_0059bc64;
      local_454 = (undefined **)0x0;
      local_450 = (undefined **)0x0;
      local_44c = (undefined **)0x0;
      ppuStack_458 = local_114;
      FUN_000e40d4();
      ppuVar8 = local_380;
      ppuVar4 = local_370;
      ppuVar10 = local_3dc;
      ppuVar2 = local_104;
    }
  } while( true );
LAB_0059c200:
  if (2 < iVar6) goto LAB_0059c294;
  ppuVar2 = (undefined **)ppuVar8[iVar6 * 2 + 1];
  if ((int)ppuVar4 < (int)ppuVar2) {
    uVar7 = 0;
  }
  else {
    ppuVar11 = (undefined **)((int)ppuVar4 - (int)ppuVar2);
    if (ppuVar4 < ppuVar11) goto LAB_0059d730;
    ppuVar9 = (undefined **)((int)ppuVar4 - (int)ppuVar11);
    if (ppuVar2 == ppuVar9) {
      local_464._0_4_ = (undefined ***)((int)ppuVar10 + ((uint)ppuVar11 & -(int)ppuVar9 >> 0x1f));
      local_464._4_4_ = (undefined **)ppuVar8[iVar6 * 2];
      local_45c = ppuVar9;
      local_384 = iVar6;
      FUN_000150d4();
      uVar7 = (uint)ppuStack_458 & 0xff;
      iVar6 = local_384;
      ppuVar8 = local_dc;
      ppuVar4 = local_37c;
      ppuVar10 = local_d4;
    }
    else {
      uVar7 = 0;
    }
  }
  if (uVar7 != 0) goto LAB_0059c294;
  iVar6 = iVar6 + 1;
  goto LAB_0059c200;
LAB_0059c294:
  ppuVar2 = local_3d8;
  if (2 < iVar6) {
    local_464._0_4_ = (undefined ***)0x4a3f;
    printerApi_service_ssdp_ErrCode_String();
    FUN_00098a24(0,local_234,local_45c,local_464._4_4_);
    local_234[0] = 0x4a3f;
    local_464._0_4_ = (undefined ***)DAT_0059d770;
    local_464._4_4_ = (undefined **)local_234;
    FUN_0001cd7c();
    ppuStack_458 = local_45c;
    local_464._0_4_ = (undefined ***)in_stack_00000008;
    local_464._4_4_ = in_stack_0000000c;
    local_45c = DAT_0059d770;
    local_454 = (undefined **)0x0;
    local_450 = (undefined **)0x0;
    local_44c = (undefined **)0x0;
    printerApi_service_ssdp_writeJsonToClient();
    FUN_00098a28(0,&local_58);
    local_464._0_4_ = (undefined ***)local_d4;
    local_464._4_4_ = local_37c;
    FUN_0008a578();
    local_58 = PTR_SUB_0059d7a0;
    local_54 = local_45c;
    local_464._0_4_ = (undefined ***)local_dc;
    local_464._4_4_ = (undefined **)0x3;
    local_45c = (undefined **)0x3;
    FUN_0008a61c();
    local_50 = PTR_DAT_0059d7c8;
    local_4c = ppuStack_458;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059d7cc;
    local_464._4_4_ = (undefined **)0x49;
    local_45c = &local_58;
    ppuStack_458 = (undefined **)0x2;
    local_454 = (undefined **)0x2;
    printerApi_common_logger_Debugf();
    local_10 = *(undefined4 *)PTR_DAT_0059d77c;
    local_c = *(undefined4 *)PTR_DAT_0059d780;
    local_8 = PTR_DAT_0059d784;
    local_4 = 0xd;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059d788;
    local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059d78c);
    FUN_0001cd7c();
    local_464._0_4_ = (undefined ***)*DAT_0059d790;
    local_464._4_4_ = (undefined **)DAT_0059d794;
    printerApi_service_event___Dispatcher__Dispatch();
    FUN_0004fb3c();
    return;
  }
  if (local_3d4 != (undefined **)0x0 || &DAT_20000000 < local_3d8 && local_3d4 == (undefined **)0x0)
  {
    local_464._0_4_ = (undefined ***)0x4a42;
    printerApi_service_ssdp_ErrCode_String();
    FUN_00098a24(0,local_248,local_45c,local_464._4_4_);
    local_248[0] = 0x4a42;
    local_464._0_4_ = (undefined ***)DAT_0059d770;
    local_464._4_4_ = (undefined **)local_248;
    FUN_0001cd7c();
    ppuStack_458 = local_45c;
    local_464._0_4_ = (undefined ***)in_stack_00000008;
    local_464._4_4_ = in_stack_0000000c;
    local_45c = DAT_0059d770;
    local_454 = (undefined **)0x0;
    local_450 = (undefined **)0x0;
    local_44c = (undefined **)0x0;
    printerApi_service_ssdp_writeJsonToClient();
    FUN_00098a20(0,&local_48);
    local_464._0_4_ = (undefined ***)local_d4;
    local_464._4_4_ = local_37c;
    FUN_0008a578();
    local_48 = PTR_SUB_0059d7a0;
    local_44 = local_45c;
    local_464._0_4_ = (undefined ***)local_3d8;
    local_464._4_4_ = local_3d4;
    FUN_000869d0();
    local_304 = *(double *)PTR_DAT_0059d7a4 *
                *(double *)PTR_DAT_0059d7a4 * (double)CONCAT44(ppuStack_458,local_45c);
    local_464 = local_304;
    FUN_0008a4bc();
    local_40 = PTR_DAT_0059d7a8;
    local_3c = local_45c;
    local_464._0_4_ = (undefined ***)0x20000000;
    local_464._4_4_ = (undefined **)0x0;
    FUN_000869d0();
    local_30c = *(double *)PTR_DAT_0059d7a4 *
                *(double *)PTR_DAT_0059d7a4 * (double)CONCAT44(ppuStack_458,local_45c);
    local_464 = local_30c;
    FUN_0008a4bc();
    local_38 = PTR_DAT_0059d7a8;
    local_34 = local_45c;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059d7c4;
    local_464._4_4_ = (undefined **)0x56;
    local_45c = &local_48;
    ppuStack_458 = (undefined **)0x3;
    local_454 = (undefined **)0x3;
    printerApi_common_logger_Debugf();
    local_10 = *(undefined4 *)PTR_DAT_0059d77c;
    local_c = *(undefined4 *)PTR_DAT_0059d780;
    local_8 = PTR_DAT_0059d784;
    local_4 = 0xd;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059d788;
    local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059d78c);
    FUN_0001cd7c();
    local_464._0_4_ = (undefined ***)*DAT_0059d790;
    local_464._4_4_ = (undefined **)DAT_0059d794;
    printerApi_service_event___Dispatcher__Dispatch();
    FUN_0004fb3c();
    return;
  }
  local_464._0_4_ = (undefined ***)ppuVar10;
  local_464._4_4_ = ppuVar4;
  FUN_00148180();
  if ((int)ppuStack_458 < 4) {
    uVar7 = 0;
  }
  else {
    if (ppuStack_458 < ppuStack_458 + -1) goto LAB_0059d72c;
    local_464._0_4_ = (undefined ***)((int)(ppuStack_458 + -1) + (int)local_45c);
    local_464._4_4_ = (undefined **)PTR_DAT_0059c510;
    local_45c = (undefined **)&DAT_00000004;
    FUN_000150d4();
    uVar7 = (uint)ppuStack_458 & 0xff;
  }
  if (uVar7 == 0) {
    local_464._0_4_ = (undefined ***)local_144;
    local_464._4_4_ = local_40c;
    local_45c = local_2cc;
    ppuStack_458 = local_428;
    FUN_00126cb0();
    if (local_454 != (undefined **)0x0) {
      local_100 = local_450;
      local_3c8 = local_454;
      local_464._0_4_ = (undefined ***)0x4a41;
      printerApi_service_ssdp_ErrCode_String();
      FUN_00098a24(0,local_2ac,local_45c,local_464._4_4_);
      local_2ac[0] = 0x4a41;
      local_464._0_4_ = (undefined ***)DAT_0059d770;
      local_464._4_4_ = (undefined **)local_2ac;
      FUN_0001cd7c();
      ppuStack_458 = local_45c;
      local_464._0_4_ = (undefined ***)in_stack_00000008;
      local_464._4_4_ = in_stack_0000000c;
      local_45c = DAT_0059d770;
      local_454 = (undefined **)0x0;
      local_450 = (undefined **)0x0;
      local_44c = (undefined **)0x0;
      printerApi_service_ssdp_writeJsonToClient();
      local_60 = (undefined *)0x0;
      if (local_3c8 != (undefined **)0x0) {
        local_60 = local_3c8[1];
      }
      local_5c = local_100;
      local_464._0_4_ = (undefined ***)DAT_0059d774;
      local_464._4_4_ = (undefined **)0x1b;
      local_45c = (undefined **)((int)&local_468 + DAT_0059d778);
      ppuStack_458 = (undefined **)0x1;
      local_454 = (undefined **)0x1;
      printerApi_common_logger_Errorf();
      local_10 = *(undefined4 *)PTR_DAT_0059d77c;
      local_c = *(undefined4 *)PTR_DAT_0059d780;
      local_8 = PTR_DAT_0059d784;
      local_4 = 0xd;
      local_464._0_4_ = (undefined ***)PTR_DAT_0059d788;
      local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059d78c);
      FUN_0001cd7c();
      local_464._0_4_ = (undefined ***)*DAT_0059d790;
      local_464._4_4_ = (undefined **)DAT_0059d794;
      printerApi_service_event___Dispatcher__Dispatch();
      FUN_0004fb3c();
      return;
    }
    FUN_00098e14(0,local_140,&local_464);
    FUN_0010327c();
    local_464._0_4_ = (undefined ***)local_450;
    local_464._4_4_ = local_44c;
    local_45c = DAT_0059d798;
    ppuStack_458 = (undefined **)0x0;
    FUN_00086d18();
    local_434 = local_454;
    local_41c = local_450;
    FUN_00098a18(0,(int)&local_468 + DAT_0059d79c);
    local_464._0_4_ = (undefined ***)local_d4;
    local_464._4_4_ = local_37c;
    FUN_0008a578();
    local_30 = PTR_SUB_0059d7a0;
    local_2c = local_45c;
    local_464._0_4_ = (undefined ***)local_3d8;
    local_464._4_4_ = local_3d4;
    FUN_000869d0();
    local_34c = *(double *)PTR_DAT_0059d7a4 *
                *(double *)PTR_DAT_0059d7a4 * (double)CONCAT44(ppuStack_458,local_45c);
    local_464 = local_34c;
    FUN_0008a4bc();
    local_28 = PTR_DAT_0059d7a8;
    local_24 = local_45c;
    local_464._0_4_ = (undefined ***)local_3b4;
    local_464._4_4_ = (undefined **)local_3b0;
    FUN_000869d0();
    local_354 = *(double *)PTR_DAT_0059d7a4;
    local_354 = local_354 * local_354 * local_354 * (double)CONCAT44(ppuStack_458,local_45c);
    local_464 = local_354;
    FUN_0008a4bc();
    local_20 = PTR_DAT_0059d7a8;
    local_1c = local_45c;
    local_464._0_4_ = (undefined ***)local_434;
    local_464._4_4_ = local_41c;
    FUN_0008a4bc();
    local_18 = PTR_DAT_0059d7ac;
    local_14 = local_45c;
    local_464._0_4_ = (undefined ***)PTR_s_Gcode_upload_completed_successfu_007a83c6_0x48f_0059d7b0;
    local_464._4_4_ = (undefined **)0x64;
    local_45c = (undefined **)((int)&local_468 + DAT_0059d79c);
    ppuStack_458 = (undefined **)0x4;
    local_454 = (undefined **)&DAT_00000004;
    printerApi_common_logger_Debugf();
    local_104 = local_d4;
    local_3dc = local_37c;
  }
  else {
    FUN_00098a20(0,&local_48);
    local_464._0_4_ = (undefined ***)local_d4;
    local_464._4_4_ = local_37c;
    FUN_0008a578();
    local_48 = PTR_SUB_0059c4ec;
    local_44 = local_45c;
    local_464._0_4_ = (undefined ***)local_3d8;
    local_464._4_4_ = local_3d4;
    FUN_000869d0();
    local_314 = *(double *)PTR_DAT_0059c514 *
                *(double *)PTR_DAT_0059c514 * (double)CONCAT44(ppuStack_458,local_45c);
    local_464 = local_314;
    FUN_0008a4bc();
    local_40 = PTR_DAT_0059c518;
    local_3c = local_45c;
    local_464._0_4_ = (undefined ***)local_3b4;
    local_464._4_4_ = (undefined **)local_3b0;
    FUN_000869d0();
    local_31c = *(double *)PTR_DAT_0059c514;
    local_31c = local_31c * local_31c * local_31c * (double)CONCAT44(ppuStack_458,local_45c);
    local_464 = local_31c;
    FUN_0008a4bc();
    local_38 = PTR_DAT_0059c518;
    local_34 = local_45c;
    local_464._0_4_ = (undefined ***)PTR_DAT_0059c51c;
    local_464._4_4_ = (undefined **)0x45;
    local_45c = &local_48;
    ppuStack_458 = (undefined **)0x3;
    local_454 = (undefined **)0x3;
    printerApi_common_logger_Debugf();
    local_464._0_4_ = (undefined ***)local_144;
    local_464._4_4_ = local_40c;
    local_45c = local_11c;
    ppuStack_458 = (undefined **)local_3f4;
    printerApi_common_threemf_PreCheck();
    local_3d0 = local_454;
    local_3cc = local_450;
    if (local_44c != (undefined **)0x0) {
      local_3fc = local_44c;
      local_124 = local_448;
      local_45c = *(undefined ***)PTR_DAT_0059c520;
      ppuStack_458 = *(undefined ***)PTR_DAT_0059c524;
      local_464._0_4_ = (undefined ***)local_44c;
      local_464._4_4_ = local_448;
      FUN_000a2c04();
      if ((char)local_454 == '\0') {
        if (local_3fc == (undefined **)0x0) {
          local_60 = (undefined *)0x0;
        }
        else {
          local_60 = local_3fc[1];
        }
        local_5c = local_124;
        local_464._0_4_ = (undefined ***)DAT_0059cef4;
        local_464._4_4_ = (undefined **)0x16;
        local_45c = (undefined **)((int)&local_468 + DAT_0059cef8);
        ppuStack_458 = (undefined **)0x1;
        local_454 = (undefined **)0x1;
        printerApi_common_logger_Errorf();
        local_464._0_4_ = (undefined ***)0x4a3f;
        printerApi_service_ssdp_ErrCode_String();
        FUN_00098a24(0,local_270,local_45c,local_464._4_4_);
        local_270[0] = 0x4a3f;
        local_464._0_4_ = (undefined ***)PTR_DAT_0059cefc;
        local_464._4_4_ = (undefined **)local_270;
        FUN_0001cd7c();
        ppuStack_458 = local_45c;
        local_464._0_4_ = (undefined ***)in_stack_00000008;
        local_464._4_4_ = in_stack_0000000c;
        local_45c = (undefined **)PTR_DAT_0059cefc;
        local_454 = (undefined **)0x0;
        local_450 = (undefined **)0x0;
        local_44c = (undefined **)0x0;
        printerApi_service_ssdp_writeJsonToClient();
        local_10 = *(undefined4 *)PTR_DAT_0059cf00;
        local_c = *(undefined4 *)PTR_DAT_0059cf04;
        local_8 = PTR_s_unzip_failgcode_sizetime_lapsePr_007765bd_0x306_0059cf08;
        local_4 = 10;
        local_464._0_4_ = (undefined ***)PTR_DAT_0059cf0c;
        local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059cf10);
        FUN_0001cd7c();
        local_464._0_4_ = (undefined ***)*DAT_0059cf14;
        local_464._4_4_ = (undefined **)DAT_0059cf18;
        printerApi_service_event___Dispatcher__Dispatch();
        FUN_0004fb3c();
        return;
      }
      local_464._0_4_ = (undefined ***)local_11c;
      local_464._4_4_ = (undefined **)local_3f4;
      printerApi_common_file_DiskUsage();
      local_3ac = local_444;
      uVar1 = FUN_00098e0c(local_444,&local_45c,auStack_2e4);
      FUN_00098e0c(uVar1,auStack_2e4,auStack_3c4);
      if (local_3ac == (undefined **)0x0) {
        FUN_00098e14(0,local_140,&local_464);
        FUN_0010327c();
        local_464._0_4_ = (undefined ***)local_450;
        local_464._4_4_ = local_44c;
        local_45c = DAT_0059cf1c;
        ppuStack_458 = (undefined **)0x0;
        FUN_00086d18();
        local_42c = local_454;
        local_414 = local_450;
        FUN_00098a10(0,&local_88);
        local_464._0_4_ = (undefined ***)local_d4;
        local_464._4_4_ = local_37c;
        FUN_0008a578();
        local_88 = PTR_SUB_0059cf20;
        local_84 = local_45c;
        local_464._0_4_ = (undefined ***)local_3d0;
        local_464._4_4_ = local_3cc;
        FUN_000869d0();
        local_324 = *(double *)PTR_DAT_0059cf24 *
                    *(double *)PTR_DAT_0059cf24 * (double)CONCAT44(ppuStack_458,local_45c);
        local_464 = local_324;
        FUN_0008a4bc();
        local_80 = PTR_DAT_0059cf28;
        local_7c = local_45c;
        local_464._0_4_ = (undefined ***)local_3b4;
        local_464._4_4_ = (undefined **)local_3b0;
        FUN_000869d0();
        local_32c = *(double *)PTR_DAT_0059cf24 *
                    *(double *)PTR_DAT_0059cf24 * (double)CONCAT44(ppuStack_458,local_45c);
        local_464 = local_32c;
        FUN_0008a4bc();
        local_78 = PTR_DAT_0059cf28;
        local_74 = local_45c;
        local_70 = PTR_DAT_0059cf28;
        local_6c = (undefined **)PTR_DAT_0059cf2c;
        local_464._0_4_ = (undefined ***)local_42c;
        local_464._4_4_ = local_414;
        FUN_0008a4bc();
        local_68 = PTR_DAT_0059cf30;
        local_64 = local_45c;
        local_464._0_4_ =
             (undefined ***)PTR_s_3MF_upload_failed__insufficient_s_007a83c6_0xdbc_0059cf34;
        local_464._4_4_ = (undefined **)0x76;
        local_45c = &local_88;
        ppuStack_458 = (undefined **)0x5;
        local_454 = (undefined **)&DAT_00000005;
        printerApi_common_logger_Debugf();
      }
      local_464._0_4_ = (undefined ***)0x4a43;
      printerApi_service_ssdp_ErrCode_String();
      FUN_00098a24(0,local_25c,local_45c,local_464._4_4_);
      local_25c[0] = 0x4a43;
      local_464._0_4_ = (undefined ***)PTR_DAT_0059cefc;
      local_464._4_4_ = (undefined **)local_25c;
      FUN_0001cd7c();
      ppuStack_458 = local_45c;
      local_464._0_4_ = (undefined ***)in_stack_00000008;
      local_464._4_4_ = in_stack_0000000c;
      local_45c = (undefined **)PTR_DAT_0059cefc;
      local_454 = (undefined **)0x0;
      local_450 = (undefined **)0x0;
      local_44c = (undefined **)0x0;
      printerApi_service_ssdp_writeJsonToClient();
      local_464._0_4_ = *(undefined ****)PTR_DAT_0059cf38;
      FUN_0009bf4c();
      if (local_464._4_4_ == (undefined **)PTR_DAT_0059cf3c) {
        local_c8 = local_45c;
        local_464._4_4_ = *(undefined ***)PTR_DAT_0059cf40;
        local_464._0_4_ = &local_c8;
        printerApi_service_k3c_wrapper___K3cwrapper__PublishTips();
        local_10 = *(undefined4 *)PTR_DAT_0059cf00;
        local_c = *(undefined4 *)PTR_DAT_0059cf04;
        local_8 = PTR_DAT_0059cf44;
        local_4 = 0xd;
        local_464._0_4_ = (undefined ***)PTR_DAT_0059cf0c;
        local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059cf10);
        FUN_0001cd7c();
        local_464._0_4_ = (undefined ***)*DAT_0059cf14;
        local_464._4_4_ = (undefined **)DAT_0059cf18;
        printerApi_service_event___Dispatcher__Dispatch();
        FUN_0004fb3c();
        return;
      }
      local_464._0_4_ = (undefined ***)local_464._4_4_;
      local_464._4_4_ = (undefined **)PTR_DAT_0059cf3c;
      local_45c = (undefined **)PTR_DAT_0059d7d0;
      FUN_0001cb94();
LAB_0059d72c:
      FUN_00098758();
      ppuVar11 = extraout_r12;
LAB_0059d730:
      uVar12 = FUN_00098758(ppuVar11,ppuVar4);
      ppuVar8 = extraout_r2_01;
      local_39c = extraout_r3_00;
      goto LAB_0059d73c;
    }
    local_464._0_4_ = (undefined ***)local_144;
    local_464._4_4_ = local_40c;
    local_45c = local_2cc;
    ppuStack_458 = local_428;
    FUN_00126cb0();
    if (local_454 != (undefined **)0x0) {
      local_100 = local_450;
      local_3c8 = local_454;
      local_464._0_4_ = (undefined ***)0x4a41;
      printerApi_service_ssdp_ErrCode_String();
      FUN_00098a24(0,local_284,local_45c,local_464._4_4_);
      local_284[0] = 0x4a41;
      local_464._0_4_ = (undefined ***)PTR_DAT_0059cefc;
      local_464._4_4_ = (undefined **)local_284;
      FUN_0001cd7c();
      ppuStack_458 = local_45c;
      local_464._0_4_ = (undefined ***)in_stack_00000008;
      local_464._4_4_ = in_stack_0000000c;
      local_45c = (undefined **)PTR_DAT_0059cefc;
      local_454 = (undefined **)0x0;
      local_450 = (undefined **)0x0;
      local_44c = (undefined **)0x0;
      printerApi_service_ssdp_writeJsonToClient();
      local_60 = (undefined *)0x0;
      if (local_3c8 != (undefined **)0x0) {
        local_60 = local_3c8[1];
      }
      local_5c = local_100;
      local_464._0_4_ = (undefined ***)PTR_DAT_0059cf48;
      local_464._4_4_ = (undefined **)0x19;
      local_45c = (undefined **)((int)&local_468 + DAT_0059cef8);
      ppuStack_458 = (undefined **)0x1;
      local_454 = (undefined **)0x1;
      printerApi_common_logger_Errorf();
      local_10 = *(undefined4 *)PTR_DAT_0059cf00;
      local_c = *(undefined4 *)PTR_DAT_0059cf04;
      local_8 = PTR_DAT_0059cf44;
      local_4 = 0xd;
      local_464._0_4_ = (undefined ***)PTR_DAT_0059cf0c;
      local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059cf10);
      FUN_0001cd7c();
      local_464._0_4_ = (undefined ***)*DAT_0059cf14;
      local_464._4_4_ = (undefined **)DAT_0059cf18;
      printerApi_service_event___Dispatcher__Dispatch();
      FUN_0004fb3c();
      return;
    }
    local_464._0_4_ = (undefined ***)local_2cc;
    local_464._4_4_ = local_428;
    printerApi_common_threemf_HasPlateMetadata();
    if (ppuStack_458 == (undefined **)0x0) {
      uVar7 = (uint)local_45c & 0xff;
    }
    else {
      local_60 = ppuStack_458[1];
      local_5c = local_454;
      local_464._0_4_ = (undefined ***)PTR_DAT_0059cf4c;
      local_464._4_4_ = (undefined **)&DAT_00000042;
      local_45c = (undefined **)((int)&local_468 + DAT_0059cef8);
      ppuStack_458 = (undefined **)0x1;
      local_454 = (undefined **)0x1;
      printerApi_common_logger_Warnf();
      uVar7 = 1;
    }
    ppuVar8 = local_37c;
    ppuVar4 = local_d4;
    if (uVar7 == 0) {
      local_464._0_4_ = (undefined ***)local_2cc;
      local_464._4_4_ = local_428;
      printerApi_common_threemf_ConvertLegacy3MF();
      if (local_454 != (undefined **)0x0) {
        local_fc = local_450;
        local_3a8 = local_454;
        local_464._0_4_ = (undefined ***)0x4a43;
        printerApi_service_ssdp_ErrCode_String();
        FUN_00098a24(0,local_298,local_45c,local_464._4_4_);
        local_298[0] = 0x4a43;
        local_464._0_4_ = (undefined ***)PTR_DAT_0059cefc;
        local_464._4_4_ = (undefined **)local_298;
        FUN_0001cd7c();
        ppuStack_458 = local_45c;
        local_464._0_4_ = (undefined ***)in_stack_00000008;
        local_464._4_4_ = in_stack_0000000c;
        local_45c = (undefined **)PTR_DAT_0059cefc;
        local_454 = (undefined **)0x0;
        local_450 = (undefined **)0x0;
        local_44c = (undefined **)0x0;
        printerApi_service_ssdp_writeJsonToClient();
        local_60 = (undefined *)0x0;
        if (local_3a8 != (undefined **)0x0) {
          local_60 = local_3a8[1];
        }
        local_5c = local_fc;
        local_464._0_4_ = (undefined ***)PTR_DAT_0059cf50;
        local_464._4_4_ = (undefined **)0x28;
        local_45c = (undefined **)((int)&local_468 + DAT_0059cef8);
        ppuStack_458 = (undefined **)0x1;
        local_454 = (undefined **)0x1;
        printerApi_common_logger_Errorf();
        local_10 = *(undefined4 *)PTR_DAT_0059cf00;
        local_c = *(undefined4 *)PTR_DAT_0059cf04;
        local_8 = PTR_DAT_0059cf44;
        local_4 = 0xd;
        local_464._0_4_ = (undefined ***)PTR_DAT_0059cf0c;
        local_464._4_4_ = (undefined **)((int)&local_468 + DAT_0059cf10);
        FUN_0001cd7c();
        local_464._0_4_ = (undefined ***)*DAT_0059cf14;
        local_464._4_4_ = (undefined **)DAT_0059cf18;
        printerApi_service_event___Dispatcher__Dispatch();
        FUN_0004fb3c();
        return;
      }
      local_464._0_4_ = (undefined ***)local_45c;
      local_464._4_4_ = ppuStack_458;
      internal_filepathlite_Base();
      local_104 = local_45c;
      local_3dc = ppuStack_458;
      local_60 = (undefined *)0x0;
      local_5c = (undefined **)0x0;
      local_464._0_4_ = (undefined ***)local_45c;
      local_464._4_4_ = ppuStack_458;
      FUN_0008a578();
      local_60 = PTR_SUB_0059cf20;
      local_5c = local_45c;
      local_464._0_4_ = (undefined ***)PTR_DAT_0059cf54;
      local_464._4_4_ = (undefined **)&DAT_00000023;
      local_45c = (undefined **)((int)&local_468 + DAT_0059cef8);
      ppuStack_458 = (undefined **)0x1;
      local_454 = (undefined **)0x1;
      printerApi_common_logger_RedDebugf();
      ppuVar8 = local_3dc;
      ppuVar4 = local_104;
    }
    local_3dc = ppuVar8;
    local_104 = ppuVar4;
    FUN_00098e14(ppuVar8,local_140,&local_464);
    FUN_0010327c();
    local_464._0_4_ = (undefined ***)local_450;
    local_464._4_4_ = local_44c;
    local_45c = DAT_0059cf1c;
    ppuStack_458 = (undefined **)0x0;
    FUN_00086d18();
    local_430 = local_454;
    local_418 = local_450;
    FUN_00098a10(0,&local_88);
    local_464._0_4_ = (undefined ***)local_104;
    local_464._4_4_ = local_3dc;
    FUN_0008a578();
    local_88 = PTR_SUB_0059cf20;
    local_84 = local_45c;
    local_464._0_4_ = (undefined ***)local_3d8;
    local_464._4_4_ = local_3d4;
    FUN_000869d0();
    local_334 = *(double *)PTR_DAT_0059cf24 *
                *(double *)PTR_DAT_0059cf24 * (double)CONCAT44(ppuStack_458,local_45c);
    local_464 = local_334;
    FUN_0008a4bc();
    local_80 = PTR_DAT_0059cf28;
    local_7c = local_45c;
    local_464._0_4_ = (undefined ***)local_3d0;
    local_464._4_4_ = local_3cc;
    FUN_000869d0();
    local_33c = *(double *)PTR_DAT_0059cf24 *
                *(double *)PTR_DAT_0059cf24 * (double)CONCAT44(ppuStack_458,local_45c);
    local_464 = local_33c;
    FUN_0008a4bc();
    local_78 = PTR_DAT_0059cf28;
    local_74 = local_45c;
    local_464._0_4_ = (undefined ***)local_3b4;
    local_464._4_4_ = (undefined **)local_3b0;
    FUN_000869d0();
    local_344 = *(double *)PTR_DAT_0059cf24;
    local_344 = local_344 * local_344 * local_344 * (double)CONCAT44(ppuStack_458,local_45c);
    local_464 = local_344;
    FUN_0008a4bc();
    local_70 = PTR_DAT_0059cf28;
    local_6c = local_45c;
    local_464._0_4_ = (undefined ***)local_430;
    local_464._4_4_ = local_418;
    FUN_0008a4bc();
    local_68 = PTR_DAT_0059cf30;
    local_64 = local_45c;
    local_464._0_4_ = (undefined ***)PTR_s_3MF_upload_completed_successfull_007a83c6_0xe32_0059cf58;
    local_464._4_4_ = (undefined **)0x7a;
    local_45c = &local_88;
    ppuStack_458 = (undefined **)0x5;
    local_454 = (undefined **)&DAT_00000005;
    printerApi_common_logger_Debugf();
  }
  FUN_00098a28(0,&local_58,local_3dc,local_104);
  local_58 = PTR_SUB_0059d7a0;
  local_54 = (undefined **)PTR_DAT_0059d7b4;
  FUN_0008a578();
  local_50 = PTR_SUB_0059d7a0;
  local_4c = local_45c;
  local_464._0_4_ = (undefined ***)&local_58;
  local_464._4_4_ = (undefined **)0x2;
  local_45c = (undefined **)0x2;
  printerApi_common_logger_Debug();
  FUN_0008b6b8();
  local_464._4_4_ = (undefined **)(undefined ***)local_464;
  local_e0 = (undefined **)(undefined ***)local_464;
  local_464._0_4_ = (undefined ***)PTR_DAT_0059d7b8;
  local_45c = (undefined **)PTR_DAT_0059d7bc;
  ppuStack_458 = (undefined **)0x5;
  FUN_0008e7bc();
  local_454[1] = (undefined *)local_3dc;
  ppuVar8 = local_454;
  if (*(int *)PTR_DAT_0059d7c0 != 0) {
    FUN_00098688();
    *ppuVar2 = (undefined *)local_104;
    ppuVar2[1] = (undefined *)*extraout_r2_00;
    ppuVar8 = (undefined **)extraout_r2_00;
  }
  *ppuVar8 = (undefined *)local_104;
  local_d0 = PTR_DAT_0059d7b8;
  local_cc = local_e0;
  local_464._0_4_ = (undefined ***)0xc8;
  printerApi_service_ssdp_ErrCode_String();
  FUN_00098a24(0,local_140,local_45c,local_464._4_4_);
  local_140[0] = 200;
  local_134 = local_d0;
  local_130 = local_cc;
  FUN_00098e14(local_d0,local_140,auStack_2c0);
  local_464._0_4_ = (undefined ***)DAT_0059d770;
  local_464._4_4_ = (undefined **)auStack_2c0;
  FUN_0001cd7c();
  ppuStack_458 = local_45c;
  local_464._0_4_ = (undefined ***)in_stack_00000008;
  local_464._4_4_ = in_stack_0000000c;
  local_45c = DAT_0059d770;
  local_454 = (undefined **)0x0;
  local_450 = (undefined **)0x0;
  local_44c = (undefined **)0x0;
  printerApi_service_ssdp_writeJsonToClient();
  FUN_0004fb3c();
  return;
}



/* printerApi/service/ssdp.(*HttpServer).handleGcodeUpload.deferwrap1 @ 0059dd34 (size 92) */

void printerApi_service_ssdp___HttpServer__handleGcodeUpload_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *(undefined4 *)(unaff_r7 + 4);
  uStack_c = *(undefined4 *)(unaff_r7 + 8);
  FUN_00127c60();
  return;
}



/* printerApi/service/ssdp.writeJsonToClient @ 0059dd90 (size 632) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_ssdp_writeJsonToClient(void)

{
  undefined4 uVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *in_stack_00000014;
  int in_stack_00000018;
  undefined4 local_58;
  undefined4 *local_4c;
  int local_48;
  undefined *local_20;
  undefined *local_1c;
  undefined *local_18;
  undefined4 local_14;
  undefined *local_10;
  undefined *local_8;
  undefined *local_4;
  
  while (local_58 = in_stack_00000010, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_001707f4();
  if (local_48 == 0) {
    (**(code **)(in_stack_00000004 + 0xc))();
    FUN_00313ba4(local_58);
    FUN_0001eed8();
    _DAT_00000010 = 0x1f;
    _SUB_0000000c = PTR_DAT_0059e014;
    FUN_0008e7bc();
    local_4c[1] = 1;
    local_4c[2] = 1;
    if (*(int *)PTR_DAT_0059e01c != 0) {
      local_4c = (undefined4 *)FUN_00098688();
      *unaff_r8 = 0xc;
      unaff_r8[1] = *local_4c;
    }
    *local_4c = 0xc;
    if (in_stack_00000018 == 0) {
      uVar1 = 200;
    }
    else {
      uVar1 = *in_stack_00000014;
      (**(code **)(in_stack_00000004 + 0x14))();
      local_58 = uVar1;
    }
    FUN_00098a18(0,&local_20,uVar1);
    local_20 = PTR_SUB_0059e020;
    local_1c = PTR_DAT_0059e024;
    FUN_0001cec0();
    local_18 = PTR_DAT_0059e028;
    local_14 = local_58;
    FUN_00093e34();
    FUN_0008a578();
    local_10 = PTR_SUB_0059e020;
    local_8 = PTR_SUB_0059e020;
    local_4 = PTR_DAT_0059e02c;
    printerApi_common_logger_Debugf();
    (**(code **)(in_stack_00000004 + 0x10))();
    return;
  }
  (**(code **)(local_48 + 0xc))();
  FUN_0038f34c();
  return;
}



/* printerApi/service/ssdp.authenticateToken @ 0059e034 (size 328) */

void printerApi_service_ssdp_authenticateToken(void)

{
  undefined *puVar1;
  int iVar2;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 in_stack_00000010;
  undefined4 uVar3;
  undefined4 local_30;
  int *local_24;
  undefined4 local_14 [5];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x59e178;
    FUN_00096bb8();
  }
  FUN_0028f2e8();
  puVar1 = PTR_DAT_0059e184;
  FUN_00021c74();
  if (local_24[1] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*local_24 + 4);
  }
  if (iVar2 != *(int *)PTR_DAT_0059e188) {
    uVar3 = 0x4a39;
    printerApi_service_ssdp_ErrCode_String();
    FUN_00098a24(0,local_14,puVar1,local_30,unaff_lr,uVar3);
    local_14[0] = 0x4a39;
    FUN_0001cd7c();
    printerApi_service_ssdp_writeJsonToClient();
    return;
  }
  FUN_000150d4();
  return;
}



/* printerApi/service/ssdp.(*HttpServer).Run @ 0059e194 (size 920) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_ssdp___HttpServer__Run(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  int extraout_r2;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *local_38;
  int local_28;
  undefined4 local_24;
  undefined *local_10;
  undefined *local_c;
  undefined *local_8;
  undefined *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  FUN_0001eed8();
  *local_38 = 
  PTR_printerApi_service_ssdp___HttpServer__Run___HttpServer__handleInfoWrapper_func2_0059e538;
  puVar1 = local_38;
  if (*(int *)PTR_DAT_0059e53c != 0) {
    puVar1 = (undefined4 *)FUN_00098678();
    *unaff_r8 = in_stack_00000004;
  }
  puVar1[1] = in_stack_00000004;
  puVar2 = PTR_s__info_ctrlECDSA_NaN_debugfatalDE_00773bd2_0x379_0059e540;
  FUN_00391324();
  FUN_0001eed8();
  *(undefined **)puVar2 =
       PTR_printerApi_service_ssdp___HttpServer__Run___HttpServer__handleCtrlWrapper_func3_0059e544;
  if (*(int *)PTR_DAT_0059e53c != 0) {
    puVar2 = (undefined *)FUN_00098678();
    *unaff_r8 = in_stack_00000004;
  }
  *(int *)(puVar2 + 4) = in_stack_00000004;
  puVar2 = PTR_s__ctrlECDSA_NaN_debugfatalDEBUGER_00773bd2_0x37e_0059e548;
  FUN_00391324();
  FUN_0001eed8();
  *(undefined **)puVar2 = PTR_printerApi_service_ssdp___HttpServer__handleGcodeUpload_fm_0059e550;
  if (*(int *)PTR_DAT_0059e53c != 0) {
    puVar2 = (undefined *)FUN_00098678();
    *unaff_r8 = in_stack_00000004;
  }
  *(int *)(puVar2 + 4) = in_stack_00000004;
  puVar2 = PTR_DAT_0059e554;
  FUN_00391324();
  if (*(int *)(in_stack_00000004 + 0x80) != 0) {
    FUN_00391e98();
  }
  FUN_00098a28(0,&local_10,in_stack_00000004);
  local_10 = PTR_SUB_0059e558;
  local_c = PTR_DAT_0059e55c;
  FUN_0001cec0();
  local_8 = PTR_DAT_0059e560;
  local_4 = puVar2;
  FUN_001331ac();
  FUN_0001eed8();
  iVar4 = 5;
  _DAT_00000005 = PTR_printerApi_service_ssdp___HttpServer__Run_CORSHandler_func4_0059e56c;
  _DAT_00000009 = PTR_DAT_0059e570;
  if (*(int *)PTR_DAT_0059e53c != 0) {
    FUN_00098678();
    *unaff_r8 = (int)local_38;
    iVar4 = extraout_r2;
  }
  *(undefined4 **)(iVar4 + 8) = local_38;
  FUN_0001eed8();
  piVar3 = (int *)&DAT_00000005;
  _DAT_00000009 = (undefined *)local_24;
  if (*(int *)PTR_DAT_0059e53c != 0) {
    piVar3 = (int *)FUN_00098688();
    *unaff_r8 = local_28;
    unaff_r8[1] = iVar4;
  }
  *piVar3 = local_28;
  piVar3[2] = (int)PTR_DAT_0059e578;
  piVar3[3] = iVar4;
  iVar4 = DAT_0059e57c;
  piVar3[6] = DAT_0059e57c;
  piVar3[7] = 0x8b;
  piVar3[8] = DAT_0059e580;
  piVar3[9] = 2;
  piVar3[10] = iVar4;
  piVar3[0xb] = 0x8b;
  piVar3[0xe] = 0x100000;
  if (*(int *)PTR_DAT_0059e53c != 0) {
    piVar3 = (int *)FUN_00098688();
    *unaff_r8 = (int)piVar3;
    unaff_r8[1] = *(int *)(in_stack_00000004 + 0x80);
  }
  *(int **)(in_stack_00000004 + 0x80) = piVar3;
  FUN_0001eed8();
  iVar4 = 5;
  _DAT_00000005 = (undefined *)DAT_0059e584;
  if (*(int *)PTR_DAT_0059e53c != 0) {
    iVar4 = FUN_00098678();
    *unaff_r8 = in_stack_00000004;
  }
  *(int *)(iVar4 + 4) = in_stack_00000004;
  FUN_0005e168();
  FUN_00098a28(0,&local_10);
  local_10 = PTR_SUB_0059e558;
  local_c = (undefined *)DAT_0059e588;
  FUN_0001cec0();
  local_8 = PTR_DAT_0059e560;
  local_4 = (undefined *)0x5;
  printerApi_common_logger_Debug();
  return;
}



/* printerApi/service/ssdp.(*HttpServer).Run.func1 @ 0059e58c (size 100) */

void printerApi_service_ssdp___HttpServer__Run_func1(void)

{
  int unaff_r10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  printerApi_common_backoff_RetryWithBackoff();
  return;
}



/* printerApi/service/ssdp.(*HttpServer).Run.func1.1 @ 0059e5fc (size 392) */

void printerApi_service_ssdp___HttpServer__Run_func1_1(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int extraout_r2;
  int unaff_r7;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int iStack_40;
  int iStack_3c;
  byte bStack_38;
  undefined *puStack_28;
  undefined *puStack_24;
  undefined *puStack_20;
  int iStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined4 uStack_10;
  undefined *puStack_8;
  undefined *puStack_4;
  
  iVar1 = iStack_40;
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x59e780;
    FUN_00096b54();
  }
  iVar3 = *(int *)(*(int *)(unaff_r7 + 4) + 0x80);
  if (iVar3 != 0) {
    FUN_00392974();
    if (iStack_40 != 0) {
      iVar4 = *(int *)PTR_DAT_0059e788;
      if (iVar4 == iStack_40) {
        iStack_40 = iStack_3c;
        iVar3 = iVar1;
        FUN_000169b8();
        bVar2 = bStack_38 ^ 1;
        iVar4 = extraout_r2;
      }
      else {
        bVar2 = 1;
      }
      if (bVar2 != 0) {
        FUN_00098a18(0,&puStack_28,iVar4,iStack_3c,unaff_lr,iVar3);
        puStack_28 = PTR_SUB_0059e790;
        puStack_24 = PTR_DAT_0059e794;
        FUN_0001cec0();
        puStack_20 = PTR_DAT_0059e798;
        iStack_1c = iStack_40;
        puStack_18 = PTR_SUB_0059e790;
        puStack_14 = PTR_DAT_0059e79c;
        if (iVar1 == 0) {
          uStack_10 = 0;
        }
        else {
          uStack_10 = *(undefined4 *)(iVar1 + 4);
        }
        printerApi_common_logger_Debug();
        return;
      }
    }
    return;
  }
  puStack_8 = PTR_SUB_0059e790;
  puStack_4 = PTR_DAT_0059e7a0;
  printerApi_common_logger_Debug();
  return;
}



/* printerApi/service/ssdp.(*HttpServer).Run.CORSHandler.func4 @ 0059e7a4 (size 372) */

void printerApi_service_ssdp___HttpServer__Run_CORSHandler_func4(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r7;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined1 uStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  iVar2 = *(int *)(unaff_r7 + 4);
  (**(code **)(in_stack_00000004 + 0xc))();
  FUN_00378ee4();
  (**(code **)(in_stack_00000004 + 0xc))();
  FUN_00378ee4();
  (**(code **)(in_stack_00000004 + 0xc))();
  uVar1 = DAT_0059e930;
  FUN_00378ee4();
  if (*(int *)(in_stack_0000000c + 4) == 7) {
    FUN_000150d4();
    uStack_10 = (char)uVar1;
    if (uStack_10 != '\0') {
      (**(code **)(in_stack_00000004 + 0x14))();
      return;
    }
  }
  (**(code **)(iVar2 + 0xc))();
  return;
}



/* printerApi/service/ssdp.(*HttpServer).Run.(*HttpServer).handleCtrlWrapper.func3 @ 0059e938 (size 2332) */

void printerApi_service_ssdp___HttpServer__Run___HttpServer__handleCtrlWrapper_func3
               (undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 extraout_r3;
  char *pcVar5;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x138)) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x1b8);
      *(undefined4 *)((int)register0x00000054 + -0x1b8) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0xb8) = *(undefined4 *)(unaff_r7 + 4);
      printerApi_common_config_LanPrintIsOpen();
      if (*(char *)((int)register0x00000054 + -0x1b4) == '\0') {
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x1b0) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_0059f2cc;
        *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0x1b;
        *(undefined4 *)((int)register0x00000054 + -0x1a4) = 500;
        FUN_0038f34c();
        return;
      }
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 0xc) + 0x60);
      *(undefined4 *)((int)register0x00000054 + -0x1b4) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 0xc) + 0x5c);
      *(undefined4 *)((int)register0x00000054 + -0x1b0) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_0059f170;
      *(undefined4 *)((int)register0x00000054 + -0x1a8) = 1;
      FUN_00146ecc();
      uVar7 = *(int *)((int)register0x00000054 + -0x1a0) == 0;
      if (!(bool)uVar7) {
        uVar2 = (*(undefined4 **)((int)register0x00000054 + -0x1a4))[1];
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             **(undefined4 **)((int)register0x00000054 + -0x1a4);
        *(undefined4 *)((int)register0x00000054 + -0x1b0) = uVar2;
        printerApi_common_net_GetLocalIp();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x1ac);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x1a8);
        if (*(int *)((int)register0x00000054 + -0x1a4) != 0) {
          *(undefined4 *)((int)register0x00000054 + -0xb4) =
               *(undefined4 *)((int)register0x00000054 + -0x1a0);
          *(int *)((int)register0x00000054 + -0x15c) = *(int *)((int)register0x00000054 + -0x1a4);
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x14));
          uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 0xc) + 0x60);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 0xc) + 0x5c);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = uVar2;
          FUN_0008a578();
          *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_0059f174;
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x1ac);
          if (*(int *)((int)register0x00000054 + -0x15c) == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x15c) + 4);
          }
          *(undefined4 *)((int)register0x00000054 + -0xc) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0xb4);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) = DAT_0059f178;
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = 0x1a;
          *(undefined1 **)((int)register0x00000054 + -0x1ac) =
               (undefined1 *)((int)register0x00000054 + -0x14);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x1a4) = 2;
          printerApi_common_logger_Debugf();
          uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xb8) + 0x48);
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xb8) + 0x4c);
        }
        puVar4 = *(undefined4 **)((int)register0x00000054 + 0xc);
        if ((((puVar4[1] != 4) || (pcVar5 = (char *)*puVar4, *pcVar5 != 'P')) || (pcVar5[1] != 'O'))
           || ((pcVar5[2] != 'S' || (pcVar5[3] != 'T')))) {
          *(undefined4 *)((int)register0x00000054 + -0x1b4) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_0059f17c;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0x11;
          *(undefined4 *)((int)register0x00000054 + -0x1a4) = 0x195;
          FUN_0038f34c();
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0x114) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x160) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x1b4) = puVar4[2];
        FUN_0028f2e8();
        *(undefined4 *)((int)register0x00000054 + -0x120) =
             *(undefined4 *)((int)register0x00000054 + -0x1b0);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + -0x1b0);
        *(undefined4 *)((int)register0x00000054 + -0x1b0) = DAT_0059f180;
        *(undefined4 *)((int)register0x00000054 + -0x1ac) = 2;
        FUN_0028da98();
        *(undefined4 *)((int)register0x00000054 + -0x13c) =
             *(undefined4 *)((int)register0x00000054 + -0x1a8);
        *(undefined4 *)((int)register0x00000054 + -0x170) =
             *(undefined4 *)((int)register0x00000054 + -0x1a4);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + -0x120);
        *(undefined4 *)((int)register0x00000054 + -0x1b0) = DAT_0059f184;
        *(undefined4 *)((int)register0x00000054 + -0x1ac) = 5;
        FUN_0028da98();
        *(undefined4 *)((int)register0x00000054 + -0x11c) =
             *(undefined4 *)((int)register0x00000054 + -0x1a8);
        *(undefined4 *)((int)register0x00000054 + -0x168) =
             *(undefined4 *)((int)register0x00000054 + -0x1a4);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + -0x120);
        *(undefined4 *)((int)register0x00000054 + -0x1b0) = DAT_0059f188;
        *(undefined4 *)((int)register0x00000054 + -0x1ac) = 3;
        FUN_0028da98();
        *(undefined4 *)((int)register0x00000054 + -0x154) =
             *(undefined4 *)((int)register0x00000054 + -0x1a4);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + -0x120);
        *(undefined4 *)((int)register0x00000054 + -0x1b0) = DAT_0059f18c;
        *(undefined4 *)((int)register0x00000054 + -0x1ac) = 4;
        FUN_0028da98();
        *(undefined4 *)((int)register0x00000054 + -0x138) =
             *(undefined4 *)((int)register0x00000054 + -0x1a8);
        *(undefined4 *)((int)register0x00000054 + -0x16c) =
             *(undefined4 *)((int)register0x00000054 + -0x1a4);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + -0x13c);
        *(undefined4 *)((int)register0x00000054 + -0x1b0) =
             *(undefined4 *)((int)register0x00000054 + -0x170);
        *(undefined4 *)((int)register0x00000054 + -0x1ac) = 10;
        *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0x40;
        FUN_000a89e8();
        if (*(int *)((int)register0x00000054 + -0x19c) != 0) {
          *(int *)((int)register0x00000054 + -0x15c) = *(int *)((int)register0x00000054 + -0x19c);
          *(undefined4 *)((int)register0x00000054 + -0xb4) =
               *(undefined4 *)((int)register0x00000054 + -0x198);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_0059f2c0;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 10;
          *(undefined4 *)((int)register0x00000054 + -0x1a4) = 400;
          FUN_0038f34c();
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x14));
          *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_0059f2c4;
          *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_0059f2c8;
          uVar2 = 0;
          if (*(int *)((int)register0x00000054 + -0x15c) != 0) {
            uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x15c) + 4);
          }
          *(undefined4 *)((int)register0x00000054 + -0xc) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0xb4);
          *(undefined1 **)((int)register0x00000054 + -0x1b4) =
               (undefined1 *)((int)register0x00000054 + -0x14);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x1ac) = 2;
          printerApi_common_logger_Debug();
          return;
        }
        if (*(int *)((int)register0x00000054 + -0x1a0) < 0x191 ||
            *(int *)((int)register0x00000054 + -0x1a0) == 0x191 &&
            *(uint *)((int)register0x00000054 + -0x1a4) < DAT_0059f190) {
          *(undefined4 *)((int)register0x00000054 + -0x1b4) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_0059f1d0;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 10;
          *(undefined4 *)((int)register0x00000054 + -0x1a4) = 400;
          FUN_0038f34c();
          *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0059f174;
          *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_0059f1d4;
          *(undefined1 **)((int)register0x00000054 + -0x1b4) =
               (undefined1 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x1ac) = 1;
          printerApi_common_logger_Debug();
          return;
        }
        iVar1 = *(int *)((int)register0x00000054 + -0x168);
        if (iVar1 < 6) {
          *(undefined4 *)((int)register0x00000054 + -0x1b4) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_0059f1cc;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0xd;
          *(undefined4 *)((int)register0x00000054 + -0x1a4) = 400;
          FUN_0038f34c();
          return;
        }
        if (*(int *)((int)register0x00000054 + -0x154) == 0) {
          *(undefined4 *)((int)register0x00000054 + -0x1b4) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_0059f1c8;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0xb;
          *(undefined4 *)((int)register0x00000054 + -0x1a4) = 400;
          FUN_0038f34c();
          return;
        }
        uVar7 = *DAT_0059f194 == 0x10;
        if (0xf < *DAT_0059f194) {
          *(int *)((int)register0x00000054 + -0x1b4) = *DAT_0059f198;
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = 0x10;
          printerApi_common_crypto_Md5();
          *(undefined1 **)((int)register0x00000054 + -0x1b4) =
               (undefined1 *)((int)register0x00000054 + -400);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + -0x1ac);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) =
               *(undefined4 *)((int)register0x00000054 + -0x1a8);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) =
               *(undefined4 *)((int)register0x00000054 + -0x13c);
          *(undefined4 *)((int)register0x00000054 + -0x1a4) =
               *(undefined4 *)((int)register0x00000054 + -0x170);
          *(undefined4 *)((int)register0x00000054 + -0x1a0) =
               *(undefined4 *)((int)register0x00000054 + -0x11c);
          *(undefined4 *)((int)register0x00000054 + -0x19c) =
               *(undefined4 *)((int)register0x00000054 + -0x168);
          FUN_00071620();
          *(undefined4 *)((int)register0x00000054 + -0x1b4) =
               *(undefined4 *)((int)register0x00000054 + -0x198);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + -0x194);
          printerApi_common_crypto_Md5();
          if (*(int *)((int)register0x00000054 + -0x1a8) !=
              *(int *)((int)register0x00000054 + -0x16c)) {
LAB_0059ecd0:
            *(undefined4 *)((int)register0x00000054 + -0x1b4) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_0059f19c;
            *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0xf;
            *(undefined4 *)((int)register0x00000054 + -0x1a4) = 400;
            FUN_0038f34c();
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0x1b4) =
               *(undefined4 *)((int)register0x00000054 + -0x138);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + -0x1ac);
          *(int *)((int)register0x00000054 + -0x1ac) = *(int *)((int)register0x00000054 + -0x16c);
          FUN_000150d4();
          if (*(char *)((int)register0x00000054 + -0x1a8) == '\0') goto LAB_0059ecd0;
          printerApi_service_broker_GetMqttServerInstance();
          printerApi_service_broker___MqttServer__GetDeviceAccount();
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x1b0);
          FUN_00098d3c(*(undefined4 *)((int)register0x00000054 + -0x1b0),
                       *(undefined4 *)((int)register0x00000054 + -0xb8),
                       (undefined1 *)((int)register0x00000054 + -0xac));
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x14));
          *(undefined4 *)((int)register0x00000054 + -0x1b4) =
               *(undefined4 *)((int)register0x00000054 + -0x114);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + -0x160);
          FUN_0008a578();
          *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_0059f174;
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x1ac);
          *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_0059f1a0;
          *(undefined4 *)((int)register0x00000054 + -8) = DAT_0059f1a4;
          *(undefined4 *)((int)register0x00000054 + -0x1b4) = DAT_0059f1a8;
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = 0xd;
          *(undefined1 **)((int)register0x00000054 + -0x1ac) =
               (undefined1 *)((int)register0x00000054 + -0x14);
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x1a4) = 2;
          FUN_001331ac();
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x1a0);
          *(undefined4 *)((int)register0x00000054 + -0x148) =
               *(undefined4 *)((int)register0x00000054 + -0x19c);
          printerApi_common_config_GetDeviceUnionid();
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x1b4);
          FUN_00098d8c(*(undefined4 *)((int)register0x00000054 + -0x1b4),DAT_0059f1ac,
                       (undefined1 *)((int)register0x00000054 + -0x110),
                       *(undefined4 *)((int)register0x00000054 + -0x1b0));
          *(undefined4 *)((int)register0x00000054 + -0x100) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0xfc) =
               *(undefined4 *)((int)register0x00000054 + -0x148);
          *(undefined4 *)((int)register0x00000054 + -0xf8) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -0xf4) = extraout_r3;
          iVar1 = *(int *)((int)register0x00000054 + -0x28);
          uVar2 = *(undefined4 *)(iVar1 + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0xf0) = *(undefined4 *)(iVar1 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0xec) = uVar2;
          uVar2 = *(undefined4 *)(iVar1 + 0x1c);
          *(undefined4 *)((int)register0x00000054 + -0xe8) = *(undefined4 *)(iVar1 + 0x18);
          *(undefined4 *)((int)register0x00000054 + -0xe4) = uVar2;
          uVar2 = *(undefined4 *)(iVar1 + 0x24);
          *(undefined4 *)((int)register0x00000054 + -0xe0) = *(undefined4 *)(iVar1 + 0x20);
          *(undefined4 *)((int)register0x00000054 + -0xdc) = uVar2;
          uVar2 = *(undefined4 *)(iVar1 + 0x2c);
          *(undefined4 *)((int)register0x00000054 + -0xd8) = *(undefined4 *)(iVar1 + 0x28);
          *(undefined4 *)((int)register0x00000054 + -0xd4) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -0xd0) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + -0x90);
          *(undefined4 *)((int)register0x00000054 + -200) =
               *(undefined4 *)((int)register0x00000054 + -0x8c);
          *(undefined4 *)((int)register0x00000054 + -0xc4) =
               *(undefined4 *)((int)register0x00000054 + -0x88);
          *(undefined4 *)((int)register0x00000054 + -0xc0) =
               *(undefined4 *)((int)register0x00000054 + -0x114);
          *(undefined4 *)((int)register0x00000054 + -0xbc) =
               *(undefined4 *)((int)register0x00000054 + -0x160);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) = DAT_0059f1b0;
          *(undefined1 **)((int)register0x00000054 + -0x1b0) =
               (undefined1 *)((int)register0x00000054 + -0x110);
          FUN_0001cd7c();
          *(undefined4 *)((int)register0x00000054 + -0x1b4) = DAT_0059f1b0;
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + -0x1ac);
          FUN_001707f4();
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x1ac);
          *(undefined4 *)((int)register0x00000054 + -0x150) =
               *(undefined4 *)((int)register0x00000054 + -0x1a8);
          *(undefined4 *)((int)register0x00000054 + -0x14c) =
               *(undefined4 *)((int)register0x00000054 + -0x1a4);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) = 0x10;
          uVar2 = printerApi_common_utils_str_RandomString();
          uVar7 = *DAT_0059f194 == 0x20;
          if (0x1f < *DAT_0059f194) {
            *(undefined4 *)((int)register0x00000054 + -0x118) =
                 *(undefined4 *)((int)register0x00000054 + -0x1b0);
            *(undefined4 *)((int)register0x00000054 + -0x164) =
                 *(undefined4 *)((int)register0x00000054 + -0x1ac);
            iVar1 = *DAT_0059f198;
            *(undefined4 *)((int)register0x00000054 + -0x1b4) = 0;
            *(int *)((int)register0x00000054 + -0x1b0) = iVar1 + 0x10;
            *(undefined4 *)((int)register0x00000054 + -0x1ac) = 0x10;
            FUN_00071920();
            *(undefined4 *)((int)register0x00000054 + -0x20) =
                 *(undefined4 *)((int)register0x00000054 + -0x1a8);
            *(undefined4 *)((int)register0x00000054 + -0x148) =
                 *(undefined4 *)((int)register0x00000054 + -0x1a4);
            *(undefined4 *)((int)register0x00000054 + -0x140) =
                 *(undefined4 *)((int)register0x00000054 + -0x1a0);
            *(undefined4 *)((int)register0x00000054 + -0x1b4) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                 *(undefined4 *)((int)register0x00000054 + -0x118);
            *(undefined4 *)((int)register0x00000054 + -0x1ac) =
                 *(undefined4 *)((int)register0x00000054 + -0x164);
            FUN_00071920();
            *(undefined4 *)((int)register0x00000054 + -0x1b4) =
                 *(undefined4 *)((int)register0x00000054 + -0x20);
            *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                 *(undefined4 *)((int)register0x00000054 + -0x148);
            *(undefined4 *)((int)register0x00000054 + -0x1ac) =
                 *(undefined4 *)((int)register0x00000054 + -0x140);
            printerApi_common_crypto_NewAesCBC();
            *(undefined4 *)((int)register0x00000054 + -0x1b4) =
                 *(undefined4 *)((int)register0x00000054 + -0x19c);
            *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                 *(undefined4 *)((int)register0x00000054 + -0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x1ac) =
                 *(undefined4 *)((int)register0x00000054 + -0x150);
            *(undefined4 *)((int)register0x00000054 + -0x1a8) =
                 *(undefined4 *)((int)register0x00000054 + -0x14c);
            printerApi_common_crypto___AesCBC__Encrypt();
            *(undefined4 *)((int)register0x00000054 + -0x158) =
                 *(undefined4 *)((int)register0x00000054 + -0x1a0);
            *(undefined4 *)((int)register0x00000054 + -0xb0) =
                 *(undefined4 *)((int)register0x00000054 + -0x1a4);
            FUN_0008b6b8();
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x1b4);
            *(undefined4 *)((int)register0x00000054 + -4) = uVar2;
            *(undefined4 *)((int)register0x00000054 + -0x1b4) = DAT_0059f1b4;
            *(undefined4 *)((int)register0x00000054 + -0x1b0) = uVar2;
            *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_0059f1b8;
            *(undefined4 *)((int)register0x00000054 + -0x1a8) = 4;
            FUN_0008e7bc();
            puVar4 = *(undefined4 **)((int)register0x00000054 + -0x1a4);
            puVar4[1] = *(undefined4 *)((int)register0x00000054 + -0x158);
            if (*DAT_0059f1bc == 0) {
              uVar2 = *(undefined4 *)((int)register0x00000054 + -0xb0);
            }
            else {
              puVar4 = (undefined4 *)FUN_00098688();
              uVar2 = *(undefined4 *)((int)register0x00000054 + -0xb0);
              *unaff_r8 = uVar2;
              unaff_r8[1] = *puVar4;
            }
            *puVar4 = uVar2;
            *(undefined4 *)((int)register0x00000054 + -0x1b4) = DAT_0059f1b4;
            *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_0059f1c0;
            *(undefined4 *)((int)register0x00000054 + -0x1a8) = 5;
            FUN_0008e7bc();
            puVar4 = *(undefined4 **)((int)register0x00000054 + -0x1a4);
            puVar4[1] = *(undefined4 *)((int)register0x00000054 + -0x164);
            if (*DAT_0059f1bc == 0) {
              uVar2 = *(undefined4 *)((int)register0x00000054 + -0x118);
            }
            else {
              puVar4 = (undefined4 *)FUN_00098688();
              uVar2 = *(undefined4 *)((int)register0x00000054 + -0x118);
              *unaff_r8 = uVar2;
              unaff_r8[1] = *puVar4;
            }
            *puVar4 = uVar2;
            *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0059f1b4;
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            *(undefined4 *)((int)register0x00000054 + -0x1b4) = 200;
            *(undefined1 **)((int)register0x00000054 + -0x1b0) =
                 (undefined1 *)((int)register0x00000054 + -0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x1ac) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x1a8) = 1;
            uVar2 = printerApi_service_ssdp_buildResponse();
            FUN_00098e14(uVar2,(undefined1 *)((int)register0x00000054 + -0x1a4),
                         (undefined1 *)((int)register0x00000054 + -0x134));
            *(undefined4 *)((int)register0x00000054 + -0x1b4) = DAT_0059f1c4;
            *(undefined1 **)((int)register0x00000054 + -0x1b0) =
                 (undefined1 *)((int)register0x00000054 + -0x134);
            FUN_0001cd7c();
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x1ac);
            *(undefined4 *)((int)register0x00000054 + -0x144) = 200;
            *(undefined4 *)((int)register0x00000054 + -0x1b4) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x1ac) = DAT_0059f1c4;
            *(undefined4 *)((int)register0x00000054 + -0x1a8) = uVar2;
            *(undefined1 **)((int)register0x00000054 + -0x1a4) =
                 (undefined1 *)((int)register0x00000054 + -0x144);
            *(undefined4 *)((int)register0x00000054 + -0x1a0) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x19c) = 1;
            printerApi_service_ssdp_writeJsonToClient();
            return;
          }
          iVar1 = FUN_00098718(uVar2,0x20);
        }
        FUN_00098718(iVar1,0x10);
      }
      param_1 = FUN_000986f8(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1b8);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x59f2b8;
    param_1 = FUN_00096b54(param_1);
  } while( true );
}



/* printerApi/service/ssdp.(*HttpServer).Run.(*HttpServer).handleInfoWrapper.func2 @ 0059f2d0 (size 1172) */

void printerApi_service_ssdp___HttpServer__Run___HttpServer__handleInfoWrapper_func2
               (undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r2;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  bool bVar6;
  undefined8 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x160)) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x1e0);
      *(undefined4 *)((int)register0x00000054 + -0x1e0) = unaff_lr;
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 0xc) + 0x5c);
      uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 0xc) + 0x60);
      *(undefined4 *)((int)register0x00000054 + -0xbc) = *(undefined4 *)(unaff_r7 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x1dc) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x1d8) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x1d4) = DAT_0059f768;
      *(undefined4 *)((int)register0x00000054 + -0x1d0) = 1;
      FUN_00146ecc();
      bVar6 = *(int *)((int)register0x00000054 + -0x1c8) == 0;
      if (!bVar6) {
        uVar2 = (*(undefined4 **)((int)register0x00000054 + -0x1cc))[1];
        *(undefined4 *)((int)register0x00000054 + -0x1dc) =
             **(undefined4 **)((int)register0x00000054 + -0x1cc);
        *(undefined4 *)((int)register0x00000054 + -0x1d8) = uVar2;
        printerApi_common_net_GetLocalIp();
        if (*(int *)((int)register0x00000054 + -0x1cc) == 0) {
          uVar7 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x1d4),
                           *(undefined4 *)((int)register0x00000054 + -0x1d0));
          iVar4 = *(int *)((int)register0x00000054 + -0xbc);
          *(undefined4 *)(iVar4 + 0x4c) = *(undefined4 *)((int)register0x00000054 + -0x1d0);
          if (*DAT_0059f76c != 0) {
            uVar7 = FUN_00098688();
            *unaff_r8 = (int)((ulonglong)uVar7 >> 0x20);
            unaff_r8[1] = *(undefined4 *)(extraout_r2 + 0x48);
            iVar4 = extraout_r2;
          }
          *(int *)(iVar4 + 0x48) = (int)((ulonglong)uVar7 >> 0x20);
        }
        else {
          *(int *)((int)register0x00000054 + -0x154) = *(int *)((int)register0x00000054 + -0x1cc);
          *(undefined4 *)((int)register0x00000054 + -0xb8) =
               *(undefined4 *)((int)register0x00000054 + -0x1c8);
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x10));
          uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 0xc) + 0x60);
          *(undefined4 *)((int)register0x00000054 + -0x1dc) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 0xc) + 0x5c);
          *(undefined4 *)((int)register0x00000054 + -0x1d8) = uVar2;
          FUN_0008a578();
          *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_0059f770;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x1d4);
          if (*(int *)((int)register0x00000054 + -0x154) == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x154) + 4);
          }
          *(undefined4 *)((int)register0x00000054 + -8) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0xb8);
          *(undefined4 *)((int)register0x00000054 + -0x1dc) = DAT_0059f774;
          *(undefined4 *)((int)register0x00000054 + -0x1d8) = 0x1a;
          *(undefined1 **)((int)register0x00000054 + -0x1d4) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x1d0) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x1cc) = 2;
          printerApi_common_logger_Debugf();
          uVar7 = CONCAT44(*(undefined4 *)(*(int *)((int)register0x00000054 + -0xbc) + 0x48),
                           *(undefined4 *)(*(int *)((int)register0x00000054 + -0xbc) + 0x4c));
          iVar4 = *(int *)((int)register0x00000054 + -0xbc);
        }
        *(int *)((int)register0x00000054 + -0x148) = (int)((ulonglong)uVar7 >> 0x20);
        *(int *)((int)register0x00000054 + -0x158) = (int)uVar7;
        *(int *)((int)register0x00000054 + -0x1dc) = iVar4;
        uVar2 = printerApi_service_ssdp___Device__Clone();
        FUN_00098d3c(uVar2,(undefined1 *)((int)register0x00000054 + -0x1d8),
                     (undefined1 *)((int)register0x00000054 + -0xb4));
        printerApi_common_config_GetMachineCode();
        *(undefined4 *)((int)register0x00000054 + -0x84) =
             *(undefined4 *)((int)register0x00000054 + -0x1dc);
        *(undefined4 *)((int)register0x00000054 + -0x80) =
             *(undefined4 *)((int)register0x00000054 + -0x1d8);
        printerApi_common_config_GetMachineMac();
        FUN_00148fb4();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x1d4);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x1d0);
        *(undefined4 *)((int)register0x00000054 + -0x1dc) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x1d8) = DAT_0059f778;
        *(undefined4 *)((int)register0x00000054 + -0x1d4) = 9;
        *(undefined4 *)((int)register0x00000054 + -0x1d0) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x1cc) = uVar3;
        FUN_000715a4();
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x1c8);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x1c4);
        uVar2 = FUN_000989b0(0,(undefined1 *)((int)register0x00000054 + -0x144));
        FUN_00098d3c(uVar2,(undefined1 *)((int)register0x00000054 + -0xb4),
                     (undefined1 *)((int)register0x00000054 + -0x144));
        uVar2 = *DAT_0059f780;
        *(undefined4 *)((int)register0x00000054 + -0xc4) = *DAT_0059f77c;
        *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar2;
        printerApi_common_config_LanPrintIsOpen();
        if (*(char *)((int)register0x00000054 + -0x1dc) == '\0') {
          *(undefined4 *)((int)register0x00000054 + -0x10c) = DAT_0059f784;
          *(undefined4 *)((int)register0x00000054 + -0x108) = 5;
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -0x10c) = DAT_0059f788;
          *(undefined4 *)((int)register0x00000054 + -0x108) = 3;
          FUN_00098a20(0,(undefined1 *)((int)register0x00000054 + -0x28));
          *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_0059f770;
          *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0059f78c;
          *(undefined4 *)((int)register0x00000054 + -0x1dc) =
               *(undefined4 *)((int)register0x00000054 + -0x148);
          *(undefined4 *)((int)register0x00000054 + -0x1d8) =
               *(undefined4 *)((int)register0x00000054 + -0x158);
          FUN_0008a578();
          *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0059f770;
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x1d4);
          *(undefined4 *)((int)register0x00000054 + -0x1dc) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -0xbc) + 0x84);
          FUN_0001cec0();
          *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_0059f790;
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x1d8);
          *(undefined4 *)((int)register0x00000054 + -0x1dc) = DAT_0059f794;
          *(undefined4 *)((int)register0x00000054 + -0x1d8) = 0xf;
          *(undefined1 **)((int)register0x00000054 + -0x1d4) =
               (undefined1 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x1d0) = 3;
          *(undefined4 *)((int)register0x00000054 + -0x1cc) = 3;
          FUN_001331ac();
          *(undefined4 *)((int)register0x00000054 + -0x104) =
               *(undefined4 *)((int)register0x00000054 + -0x1c8);
          *(undefined4 *)((int)register0x00000054 + -0x100) =
               *(undefined4 *)((int)register0x00000054 + -0x1c4);
        }
        *(undefined4 *)((int)register0x00000054 + -0xfc) =
             *(undefined4 *)((int)register0x00000054 + -0x148);
        *(undefined4 *)((int)register0x00000054 + -0xf8) =
             *(undefined4 *)((int)register0x00000054 + -0x158);
        printerApi_common_config_GetDeviceName();
        *(undefined4 *)((int)register0x00000054 + -0xf4) =
             *(undefined4 *)((int)register0x00000054 + -0x1dc);
        *(undefined4 *)((int)register0x00000054 + -0xf0) =
             *(undefined4 *)((int)register0x00000054 + -0x1d8);
        printerApi_common_config_DeviceZone();
        *(undefined4 *)((int)register0x00000054 + -0xec) =
             *(undefined4 *)((int)register0x00000054 + -0x1dc);
        *(undefined4 *)((int)register0x00000054 + -0xe8) =
             *(undefined4 *)((int)register0x00000054 + -0x1d8);
        printerApi_common_config_DeviceEnv();
        *(undefined4 *)((int)register0x00000054 + -0xe4) =
             *(undefined4 *)((int)register0x00000054 + -0x1dc);
        *(undefined4 *)((int)register0x00000054 + -0xe0) =
             *(undefined4 *)((int)register0x00000054 + -0x1d8);
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0x158);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -0x148);
        *(undefined1 **)((int)register0x00000054 + -0x1dc) =
             (undefined1 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x1d8) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x1d4) = 1;
        printerApi_service_ssdp_GetRtspUrl();
        *(undefined4 *)((int)register0x00000054 + -0xcc) =
             *(undefined4 *)((int)register0x00000054 + -0x1d0);
        *(undefined4 *)((int)register0x00000054 + -200) =
             *(undefined4 *)((int)register0x00000054 + -0x1cc);
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0x158);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -0x148);
        *(undefined1 **)((int)register0x00000054 + -0x1dc) =
             (undefined1 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x1d8) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x1d4) = 1;
        printerApi_service_ssdp_GcodeUploadUrl();
        *(undefined4 *)((int)register0x00000054 + -0xd4) =
             *(undefined4 *)((int)register0x00000054 + -0x1d0);
        *(undefined4 *)((int)register0x00000054 + -0xd0) =
             *(undefined4 *)((int)register0x00000054 + -0x1cc);
        *(undefined4 *)((int)register0x00000054 + -0x1dc) = DAT_0059f798;
        *(undefined1 **)((int)register0x00000054 + -0x1d8) =
             (undefined1 *)((int)register0x00000054 + -0x144);
        FUN_0001cd7c();
        *(undefined4 *)((int)register0x00000054 + -0x1dc) = DAT_0059f798;
        *(undefined4 *)((int)register0x00000054 + -0x1d8) =
             *(undefined4 *)((int)register0x00000054 + -0x1d4);
        FUN_001707f4();
        if (*(int *)((int)register0x00000054 + -0x1c8) != 0) {
          pcVar1 = *(code **)(*(int *)((int)register0x00000054 + -0x1c8) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x1dc) =
               *(undefined4 *)((int)register0x00000054 + -0x1c4);
          (*pcVar1)();
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x1d8);
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x1d4);
          *(undefined4 *)((int)register0x00000054 + -0x1dc) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x1d8) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x1d4) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -0x1d0) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x1cc) = 500;
          FUN_0038f34c();
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x1d4);
        *(undefined4 *)((int)register0x00000054 + -0x150) =
             *(undefined4 *)((int)register0x00000054 + -0x1d0);
        *(undefined4 *)((int)register0x00000054 + -0x14c) =
             *(undefined4 *)((int)register0x00000054 + -0x1cc);
        pcVar1 = *(code **)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x1dc) =
             *(undefined4 *)((int)register0x00000054 + 8);
        (*pcVar1)();
        *(undefined4 *)((int)register0x00000054 + -0x1dc) =
             *(undefined4 *)((int)register0x00000054 + -0x1d8);
        *(undefined4 *)((int)register0x00000054 + -0x1d8) = DAT_0059f79c;
        *(undefined4 *)((int)register0x00000054 + -0x1d4) = 0xc;
        *(undefined4 *)((int)register0x00000054 + -0x1d0) = DAT_0059f7a0;
        *(undefined4 *)((int)register0x00000054 + -0x1cc) = 0x10;
        FUN_00378ee4();
        pcVar1 = *(code **)(*(int *)((int)register0x00000054 + 4) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x1dc) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x1d8) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x1d4) =
             *(undefined4 *)((int)register0x00000054 + -0x150);
        *(undefined4 *)((int)register0x00000054 + -0x1d0) =
             *(undefined4 *)((int)register0x00000054 + -0x14c);
        (*pcVar1)();
        return;
      }
      param_1 = FUN_000986f8(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1e0);
      if (bVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x59f760;
    param_1 = FUN_00096b54(param_1);
  } while( true );
}



/* printerApi/service/ssdp.(*HttpServer).InfoUrl @ 0059f7a4 (size 2300) */

/* WARNING: Removing unreachable block (ram,0x0059fe40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_ssdp___HttpServer__InfoUrl(void)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int extraout_r1;
  int *extraout_r2;
  int iVar5;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  bool bVar6;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  char cVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  int *piVar10;
  int in_stack_ffffff04;
  undefined4 *puVar11;
  int in_stack_ffffff08;
  undefined4 uVar12;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [16];
  int *piStack_78;
  undefined *puStack_74;
  int iStack_60;
  undefined *puStack_5c;
  undefined4 uStack_58;
  undefined *puStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  int *piStack_4;
  
  while (auStack_88 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x5a00f4;
    FUN_00096bb8();
  }
  printerApi_common_net_GetLocalIp();
  bVar6 = iStack_f4 == 0;
  if (bVar6) {
    iStack_60 = in_stack_ffffff04;
    FUN_00098a28(0,&uStack_14);
    FUN_0008a578();
    uStack_14 = _UNK_005a0004;
    FUN_0001cec0();
    iStack_c = _UNK_005a000c;
    piVar10 = (int *)&DAT_00000005;
    puVar11 = &uStack_14;
    uVar12 = 2;
    uVar1 = _UNK_005a0010;
    FUN_001331ac();
    uVar1 = FUN_000989f0(0,&puStack_5c,uStack_f0,uStack_ec,UNRECOVERED_JUMPTABLE_00,uVar1,piVar10,
                         puVar11,uVar12);
    puStack_5c = PTR_s_httppop3smtpdial_IdleOpenHost_lt_0077367d_0x133_005a0014;
    uStack_58 = 4;
    puStack_40 = PTR_DAT_005a0018;
    uStack_3c = 4;
    FUN_00098dac(uVar1,&puStack_5c,auStack_a8);
    puVar8 = auStack_a8;
    FUN_0028f2e8();
    piVar3 = piVar10;
    printerApi_common_config_GetMachineCode();
    piVar2 = piVar3;
    FUN_0001eed8();
    piVar2[1] = (int)piVar3;
    if (*(int *)PTR_DAT_005a0020 != 0) {
      FUN_00098678();
      *unaff_r8 = (int)puVar8;
      piVar2 = extraout_r2;
    }
    *piVar2 = (int)puVar8;
    piVar3 = piVar10;
    piStack_4 = piVar2;
    FUN_0008e7bc();
    piVar2 = (int *)0x2;
    _DAT_00000006 = 1;
    _DAT_0000000a = 1;
    if (*(int *)PTR_DAT_005a0020 != 0) {
      piVar2 = (int *)FUN_00098688();
      *unaff_r8 = (int)piStack_4;
      unaff_r8[1] = *piVar2;
    }
    *piVar2 = (int)piStack_4;
    iVar4 = *(int *)(in_stack_00000004 + 0x24);
    iVar5 = *(int *)(in_stack_00000004 + 0x20);
    FUN_0001eed8();
    piVar3[1] = iVar4;
    if (*(int *)PTR_DAT_005a0020 != 0) {
      piVar3 = (int *)FUN_00098678();
      *unaff_r8 = iVar5;
    }
    *piVar3 = iVar5;
    piVar2 = piVar10;
    piStack_4 = piVar3;
    FUN_0008e7bc();
    piVar3 = (int *)0x2;
    _DAT_00000006 = 1;
    _DAT_0000000a = 1;
    if (*(int *)PTR_DAT_005a0020 != 0) {
      piVar3 = (int *)FUN_00098688();
      *unaff_r8 = (int)piStack_4;
      unaff_r8[1] = *piVar3;
    }
    *piVar3 = (int)piStack_4;
    iVar4 = *(int *)(in_stack_00000004 + 0x1c);
    iVar5 = *(int *)(in_stack_00000004 + 0x18);
    FUN_0001eed8();
    piVar2[1] = iVar4;
    if (*(int *)PTR_DAT_005a0020 != 0) {
      piVar2 = (int *)FUN_00098678();
      *unaff_r8 = iVar5;
    }
    *piVar2 = iVar5;
    piVar3 = piVar10;
    piStack_4 = piVar2;
    FUN_0008e7bc();
    piVar2 = (int *)0x2;
    _DAT_00000006 = 1;
    _DAT_0000000a = 1;
    if (*(int *)PTR_DAT_005a0020 != 0) {
      piVar2 = (int *)FUN_00098688();
      *unaff_r8 = (int)piStack_4;
      unaff_r8[1] = *piVar2;
    }
    *piVar2 = (int)piStack_4;
    FUN_0001eed8();
    piVar3[1] = in_stack_ffffff08;
    if (*(int *)PTR_DAT_005a0020 != 0) {
      piVar3 = (int *)FUN_00098678();
      *unaff_r8 = iStack_60;
    }
    *piVar3 = iStack_60;
    puVar9 = PTR_DAT_005a0024;
    piVar2 = piVar10;
    piStack_4 = piVar3;
    FUN_0008e7bc();
    piVar3 = (int *)0x2;
    _DAT_00000006 = 1;
    _DAT_0000000a = 1;
    if (*(int *)PTR_DAT_005a0020 != 0) {
      piVar3 = (int *)FUN_00098688();
      *unaff_r8 = (int)piStack_4;
      unaff_r8[1] = *piVar3;
    }
    *piVar3 = (int)piStack_4;
    printerApi_common_config_GetDeviceName();
    piVar3 = piVar2;
    FUN_0001eed8();
    piVar3[1] = (int)piVar2;
    if (*(int *)PTR_DAT_005a0020 != 0) {
      piVar3 = (int *)FUN_00098678();
      *unaff_r8 = (int)puVar9;
    }
    *piVar3 = (int)puVar9;
    puVar9 = PTR_DAT_005a0024;
    piVar2 = piVar10;
    piStack_4 = piVar3;
    FUN_0008e7bc();
    piVar3 = (int *)0x2;
    _DAT_00000006 = 1;
    _DAT_0000000a = 1;
    if (*(int *)PTR_DAT_005a0020 != 0) {
      piVar3 = (int *)FUN_00098688();
      *unaff_r8 = (int)piStack_4;
      unaff_r8[1] = *piVar3;
    }
    *piVar3 = (int)piStack_4;
    printerApi_common_config_DeviceZone();
    piVar3 = piVar2;
    FUN_0001eed8();
    piVar3[1] = (int)piVar2;
    if (*(int *)PTR_DAT_005a0020 != 0) {
      piVar3 = (int *)FUN_00098678();
      *unaff_r8 = (int)puVar9;
    }
    *piVar3 = (int)puVar9;
    puVar9 = PTR_DAT_005a0024;
    piVar2 = piVar10;
    piStack_4 = piVar3;
    FUN_0008e7bc();
    piVar3 = (int *)0x2;
    _DAT_00000006 = 1;
    _DAT_0000000a = 1;
    if (*(int *)PTR_DAT_005a0020 != 0) {
      piVar3 = (int *)FUN_00098688();
      *unaff_r8 = (int)piStack_4;
      unaff_r8[1] = *piVar3;
    }
    *piVar3 = (int)piStack_4;
    printerApi_common_config_DeviceEnv();
    piVar3 = piVar2;
    FUN_0001eed8();
    piVar3[1] = (int)piVar2;
    if (*(int *)PTR_DAT_005a0020 != 0) {
      piVar3 = (int *)FUN_00098678();
      *unaff_r8 = (int)puVar9;
    }
    *piVar3 = (int)puVar9;
    puVar9 = PTR_DAT_005a0024;
    piVar2 = piVar10;
    piStack_4 = piVar3;
    FUN_0008e7bc();
    cVar7 = (char)puVar9;
    piVar3 = (int *)0x2;
    _DAT_00000006 = 1;
    _DAT_0000000a = 1;
    if (*(int *)PTR_DAT_005a0020 != 0) {
      piVar3 = (int *)FUN_00098688();
      *unaff_r8 = (int)piStack_4;
      unaff_r8[1] = *piVar3;
    }
    *piVar3 = (int)piStack_4;
    printerApi_common_config_LanPrintIsOpen();
    if (cVar7 == '\0') {
      FUN_0001eed8();
      piVar2[1] = 5;
      *piVar2 = (int)PTR_DAT_005a0058;
      puVar9 = PTR_s_ctrlType100117011001170310011801_0077568d_0x1e8_005a0048;
      piStack_4 = piVar2;
      FUN_0008e7bc();
      piVar2 = (int *)0x2;
      _DAT_00000006 = 1;
      _DAT_0000000a = 1;
      if (*(int *)PTR_DAT_005a0020 != 0) {
        piVar2 = (int *)FUN_00098688();
        *unaff_r8 = (int)piStack_4;
        unaff_r8[1] = *piVar2;
      }
      *piVar2 = (int)piStack_4;
    }
    else {
      FUN_0001eed8();
      piVar2[1] = 3;
      *piVar2 = (int)PTR_DAT_005a0044;
      piVar3 = piVar10;
      piStack_4 = piVar2;
      FUN_0008e7bc();
      piVar2 = (int *)0x2;
      _DAT_00000006 = 1;
      _DAT_0000000a = 1;
      if (*(int *)PTR_DAT_005a0020 != 0) {
        piVar2 = (int *)FUN_00098688();
        *unaff_r8 = (int)piStack_4;
        unaff_r8[1] = *piVar2;
      }
      *piVar2 = (int)piStack_4;
      iVar4 = *(int *)PTR_DAT_005a004c;
      iVar5 = *(int *)PTR_DAT_005a0050;
      FUN_0001eed8();
      piVar3[1] = iVar4;
      if (*(int *)PTR_DAT_005a0020 != 0) {
        piVar3 = (int *)FUN_00098678();
        *unaff_r8 = iVar5;
      }
      *piVar3 = iVar5;
      puVar9 = PTR_s_token_info_ctrlECDSA_NaN_debugfa_00773bd2_0x374_005a0054;
      piStack_4 = piVar3;
      FUN_0008e7bc();
      piVar2 = (int *)0x2;
      _DAT_00000006 = 1;
      _DAT_0000000a = 1;
      if (*(int *)PTR_DAT_005a0020 != 0) {
        piVar2 = (int *)FUN_00098688();
        *unaff_r8 = (int)piStack_4;
        unaff_r8[1] = *piVar2;
      }
      *piVar2 = (int)piStack_4;
    }
    *(int *)(in_stack_00000004 + 0x4c) = in_stack_ffffff08;
    if (*DAT_005a00fc != 0) {
      FUN_00098688();
      *unaff_r8 = iStack_60;
      unaff_r8[1] = *(int *)(extraout_r1 + 0x48);
      in_stack_00000004 = extraout_r1;
    }
    *(int *)(in_stack_00000004 + 0x48) = iStack_60;
    FUN_0028e0bc();
    piStack_78 = piVar10;
    puStack_74 = puVar9;
    FUN_0028cc34();
                    /* WARNING: Could not recover jumptable at 0x005a00e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_00098a28(0,&uStack_14,uStack_f0,iStack_f4,UNRECOVERED_JUMPTABLE_00,in_stack_00000008,
               in_stack_0000000c);
  uStack_14 = _UNK_005a0004;
  uStack_10 = _UNK_005a0008;
  iStack_c = extraout_r3;
  if (!bVar6) {
    iStack_c = *(int *)(extraout_r3 + 4);
  }
  printerApi_common_logger_Debug();
                    /* WARNING: Could not recover jumptable at 0x0059f840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/ssdp.(*HttpServer).Stop @ 005a0100 (size 56) */

void printerApi_service_ssdp___HttpServer__Stop(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x5a0134;
    FUN_00096bb8();
  }
  if (*(int *)(in_stack_00000004 + 0x80) != 0) {
    FUN_00391e98();
  }
                    /* WARNING: Could not recover jumptable at 0x005a0128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/ssdp.GetIp @ 005a0138 (size 124) */

void printerApi_service_ssdp_GetIp(void)

{
  int iVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (((*DAT_005a01b8 != 0) && (iVar1 = *(int *)(*DAT_005a01b8 + 0xc), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x4c) != 0)) {
    return;
  }
  printerApi_common_net_GetLocalIp();
  return;
}



/* printerApi/service/ssdp.GetRtspUrl @ 005a01c0 (size 320) */

void printerApi_service_ssdp_GetRtspUrl(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if ((*DAT_005a0304 != 0) && (*(int *)(*DAT_005a0304 + 0xc) != 0)) {
    if (in_stack_00000008 != 0) {
      FUN_0008a578();
      FUN_001331ac();
      return;
    }
    printerApi_service_ssdp_GetIp();
    FUN_0008a578();
    FUN_001331ac();
    return;
  }
  return;
}



/* printerApi/service/ssdp.GcodeUploadUrl @ 005a0310 (size 464) */

void printerApi_service_ssdp_GcodeUploadUrl(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_18 [2];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x5a04dc;
    FUN_00096bb8();
  }
  if ((*DAT_005a04e4 != 0) && (*(int *)(*DAT_005a04e4 + 0xc) != 0)) {
    if (in_stack_00000008 != 0) {
      FUN_00098a20(0,local_18);
      uVar1 = *(undefined4 *)(in_stack_00000004 + 4);
      FUN_0008a578();
      local_18[0] = DAT_005a04e8;
      FUN_0001cec0();
      local_10 = DAT_005a04ec;
      local_c = uVar1;
      FUN_0008a578();
      local_8 = DAT_005a04e8;
      FUN_001331ac();
      return;
    }
    printerApi_service_ssdp_GetIp();
    FUN_00098a20(0,local_18,local_30,local_34,unaff_lr);
    FUN_0008a578();
    local_18[0] = DAT_005a04e8;
    local_10 = DAT_005a04ec;
    local_c = DAT_005a04fc;
    FUN_0008a578();
    local_8 = DAT_005a04e8;
    FUN_001331ac();
    return;
  }
  return;
}



/* printerApi/service/ssdp.buildResponse @ 005a0500 (size 136) */

void printerApi_service_ssdp_buildResponse(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 *in_stack_00000008;
  int in_stack_0000000c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x5a0584;
    FUN_00096bb8();
  }
  FUN_00098a24(0,&stack0x00000014);
  uVar1 = in_stack_00000004;
  printerApi_service_ssdp_ErrCode_String();
  uVar1 = FUN_00098a24(0,local_14,local_1c,local_18,unaff_lr,uVar1);
  local_14[0] = in_stack_00000004;
  if (in_stack_0000000c != 0) {
    local_8 = *in_stack_00000008;
    uVar1 = in_stack_00000008[1];
    local_4 = uVar1;
  }
  FUN_00098e14(uVar1,local_14,&stack0x00000014);
  return;
}



/* printerApi/service/ssdp.Start @ 005a0588 (size 192) */

void printerApi_service_ssdp_Start(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int unaff_r10;
  undefined4 unaff_lr;
  bool bVar2;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x5a0644;
    FUN_00096bb8();
  }
  while( true ) {
    printerApi_service_ssdp___ssdp__StopAdvertise();
    uVar1 = *DAT_005a0650;
    printerApi_service_ssdp___ssdp__Advertise();
    bVar2 = local_18 == 0;
    if (bVar2) break;
    FUN_00098a28(0,&local_10,local_14,local_18,unaff_lr,uVar1);
    local_10 = DAT_005a0654;
    local_c = DAT_005a0658;
    local_8 = extraout_r3;
    if (!bVar2) {
      local_8 = *(int *)(extraout_r3 + 4);
    }
    local_14 = 2;
    printerApi_common_logger_Debug();
    local_18 = 0;
    FUN_000953d0();
  }
  return;
}



/* printerApi/service/ssdp.(*ssdp).Advertise @ 005a065c (size 1076) */

void printerApi_service_ssdp___ssdp__Advertise(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *extraout_r1;
  undefined **extraout_r2;
  int *piVar4;
  int extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  int *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  char cVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined **local_144;
  undefined4 *local_140;
  undefined *local_13c;
  undefined **local_138;
  undefined4 *local_134;
  undefined4 local_130;
  undefined4 *local_12c;
  undefined4 local_128;
  undefined1 auStack_d0 [12];
  int local_c4;
  int local_c0;
  byte local_b6;
  byte local_b5;
  int *local_b4;
  undefined *local_b0;
  undefined4 local_ac;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_80;
  undefined *local_7c;
  undefined *local_78;
  undefined4 local_74;
  undefined *local_30;
  undefined4 local_2c;
  undefined **local_28;
  undefined4 *local_24;
  undefined *local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  int *local_14;
  undefined *local_10;
  int local_c;
  undefined **local_8;
  undefined4 *local_4;
  
  while (auStack_d0 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x5a0a94;
    FUN_00096bb8();
  }
  local_8 = (undefined **)0x0;
  local_4 = (undefined4 *)0x0;
  local_b5 = 0;
  iVar3 = in_stack_00000004;
  FUN_000b3994();
  local_10 = PTR_printerApi_service_ssdp___ssdp__Advertise_deferwrap1_005a0a9c;
  local_c = in_stack_00000004;
  local_8 = &local_10;
  local_b5 = 1;
  if (*(int *)PTR_DAT_005a0aa0 == 0) {
    local_144 = DAT_005a0aac;
    local_140 = (undefined4 *)0x1;
    puVar6 = PTR_DAT_005a0aa4;
    puVar8 = PTR_DAT_005a0aa8;
    FUN_00155144();
    local_4 = local_134;
    local_b5 = 3;
    FUN_00098a0c(0,&local_b0,local_138,local_13c,unaff_lr,puVar6,puVar8);
    iVar3 = *(int *)PTR_DAT_005a0ab0;
    local_144 = extraout_r2;
    uVar1 = printerApi_service_k3c_wrapper___K3cwrapper__Info();
    iVar2 = FUN_00098de4(uVar1,&local_140,&local_b0);
    local_b6 = 3;
  }
  else {
    local_b6 = 1;
    iVar2 = in_stack_00000004;
  }
  printerApi_common_os_NetworkMac(iVar2);
  FUN_00148fb4();
  FUN_00098a1c(0,&local_30,local_140,local_144,unaff_lr,iVar3);
  local_30 = PTR_DAT_005a0ab4;
  local_2c = 0x10;
  uVar7 = 0;
  local_144 = (undefined **)&DAT_00000009;
  puVar6 = PTR_s_uuid_fdm_modelNameProc_Typekey_e_0077568d_0xd6e_005a0ab8;
  FUN_000715a4();
  local_28 = local_138;
  local_24 = local_134;
  local_20 = PTR_DAT_005a0abc;
  local_1c = 0xb;
  printerApi_common_config_GetMachineCode();
  uVar1 = uVar7;
  FUN_000989b8(0,&local_b0,*(undefined4 *)(*(int *)(*(int *)PTR_DAT_005a0ac0 + 8) + 0x7c),
               *(undefined4 *)(*(int *)(*(int *)PTR_DAT_005a0ac0 + 8) + 0x78));
  cVar5 = (char)uVar1;
  local_90 = *(undefined4 *)PTR_DAT_005a0ac4;
  local_8c = *(undefined4 *)PTR_DAT_005a0aa0;
  local_b0 = PTR_DAT_005a0ac8;
  local_ac = 3;
  local_80 = uVar7;
  local_7c = puVar6;
  printerApi_common_config_LanPrintIsOpen();
  if (cVar5 == '\0') {
    local_78 = PTR_DAT_005a0ad0;
    local_74 = 5;
  }
  else {
    local_78 = PTR_DAT_005a0acc;
    local_74 = 3;
  }
  piVar9 = (int *)&DAT_000049de;
  FUN_00098d3c(in_stack_00000004,&local_b0,&local_144,&DAT_000049de,unaff_lr,in_stack_00000004);
  printerApi_service_ssdp___ssdp__runHttpService();
  if (*(int *)PTR_DAT_005a0ad4 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r3;
    unaff_r8[1] = *(int *)(in_stack_00000004 + 0xc);
    local_c4 = extraout_r3;
  }
  *(int *)(in_stack_00000004 + 0xc) = local_c4;
  if (local_c0 != 0) {
    if ((local_b6 & 2) != 0) {
      local_b6 = local_b6 & 0xfd;
      local_b5 = local_b6;
      (*(code *)*local_4)();
    }
    if ((local_b6 & 1) != 0) {
      local_b5 = local_b6 & 0xfe;
      (*(code *)*local_8)();
    }
    return;
  }
  puVar6 = PTR_DAT_005a0ad8;
  FUN_0001eed8();
  piVar10 = piVar9;
  if (*(int *)PTR_DAT_005a0ad4 != 0) {
    FUN_00098678();
    *unaff_r8 = in_stack_00000004;
    piVar9 = extraout_r1;
  }
  *piVar9 = in_stack_00000004;
  piVar9[1] = (int)&DAT_000049de;
  piVar11 = piVar9 + 2;
  uVar1 = 0;
  iVar3 = in_stack_00000004;
  piVar4 = piVar11;
  local_b4 = piVar9;
  if (*(int *)PTR_DAT_005a0ad4 != 0) {
    local_144 = &local_b0;
    puVar6 = PTR_DAT_005a0adc;
    local_14 = piVar11;
    iVar3 = FUN_00022914();
    piVar4 = local_14;
    uVar1 = extraout_r3_00;
    piVar10 = piVar11;
  }
  FUN_00098d3c(iVar3,&local_b0,piVar4,uVar1,unaff_lr,puVar6,piVar10);
  local_144 = local_28;
  local_140 = local_24;
  local_13c = PTR_DAT_005a0ae0;
  local_138 = (undefined **)local_b4;
  local_134 = (undefined4 *)local_20;
  local_130 = local_1c;
  local_12c = local_18;
  github_com_koron_go_ssdp_Advertise();
  if (*(int *)PTR_DAT_005a0ad4 != 0) {
    FUN_00098688();
    *local_18 = extraout_r3_01;
    local_18[1] = *(undefined4 *)(in_stack_00000004 + 8);
    local_128 = extraout_r3_01;
  }
  *(undefined4 *)(in_stack_00000004 + 8) = local_128;
  if ((local_b6 & 2) != 0) {
    local_b6 = local_b6 & 0xfd;
    local_b5 = local_b6;
    (*(code *)*local_4)();
  }
  if ((local_b6 & 1) != 0) {
    local_b5 = local_b6 & 0xfe;
    (*(code *)*local_8)();
  }
  return;
}



/* printerApi/service/ssdp.(*ssdp).Advertise.deferwrap1 @ 005a0ae4 (size 84) */

void printerApi_service_ssdp___ssdp__Advertise_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000b3de4();
  return;
}



/* printerApi/service/ssdp.(*ssdp).StopAdvertise @ 005a0b38 (size 276) */

/* WARNING: Removing unreachable block (ram,0x005a0b98) */

void printerApi_service_ssdp___ssdp__StopAdvertise(void)

{
  int iVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar2;
  int in_stack_00000004;
  undefined4 local_c;
  int local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_4 = (undefined4 *)0x0;
  FUN_000b3994();
  local_c = DAT_005a0c58;
  local_8 = in_stack_00000004;
  local_4 = &local_c;
  iVar1 = in_stack_00000004;
  if (*(int *)(in_stack_00000004 + 0xc) != 0) {
    if (*(int *)(*(int *)(in_stack_00000004 + 0xc) + 0x80) != 0) {
      FUN_00391e98();
    }
    iVar1 = in_stack_00000004;
    if (*DAT_005a0c5c != 0) {
      uVar2 = FUN_00098678(in_stack_00000004,*(undefined4 *)(in_stack_00000004 + 0xc));
      iVar1 = (int)uVar2;
      *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    github_com_koron_go_ssdp___Advertiser__Bye();
    github_com_koron_go_ssdp___Advertiser__Close();
    iVar1 = in_stack_00000004;
    if (*DAT_005a0c5c != 0) {
      uVar2 = FUN_00098678(in_stack_00000004,*(undefined4 *)(in_stack_00000004 + 8));
      *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
      iVar1 = (int)uVar2;
    }
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  (*(code *)*local_4)();
  return;
}



/* printerApi/service/ssdp.(*ssdp).StopAdvertise.deferwrap1 @ 005a0c60 (size 84) */

void printerApi_service_ssdp___ssdp__StopAdvertise_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000b3de4();
  return;
}



/* printerApi/service/ssdp.(*ssdp).Search @ 005a0cb4 (size 116) */

void printerApi_service_ssdp___ssdp__Search(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
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
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x5a0d24;
    FUN_00096bb8();
  }
  github_com_koron_go_ssdp_Search();
                    /* WARNING: Could not recover jumptable at 0x005a0d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/ssdp.(*locationProvider).Location @ 005a0d28 (size 228) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_ssdp___locationProvider__Location(undefined4 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      if (*(int *)(**(int **)((int)register0x00000054 + 4) + 0xc) == 0) {
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x005a0dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      pcVar1 = *(code **)(*(int *)((int)register0x00000054 + 8) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      (*pcVar1)();
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = _UNK_005a0e10;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x10) = 0xffffffff;
      FUN_00146be8();
      bVar5 = *(int *)((int)register0x00000054 + -8) == 0;
      if (!bVar5) {
        uVar3 = **(undefined4 **)((int)register0x00000054 + -0xc);
        uVar2 = (*(undefined4 **)((int)register0x00000054 + -0xc))[1];
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x20) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar2;
        printerApi_service_ssdp___HttpServer__InfoUrl();
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
                    /* WARNING: Could not recover jumptable at 0x005a0dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_000986f8(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x5a0e08;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/ssdp.(*ssdp).runHttpService @ 005a0e14 (size 280) */

void printerApi_service_ssdp___ssdp__runHttpService(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  undefined *local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 auStack_80 [92];
  undefined1 auStack_24 [36];
  
  while( true ) {
    if (*(undefined1 **)(unaff_r10 + 8) < auStack_24) break;
    param_1 = FUN_00096bb8();
  }
  FUN_00098d3c(param_1,&stack0x0000000c,auStack_80);
  puVar1 = PTR_DAT_005a0f30;
  local_9c = PTR_DAT_005a0f30;
  printerApi_common_utils_str_RandomStringWithCharset();
  FUN_0001eed8();
  uVar2 = 0;
  if (*(int *)PTR_DAT_005a0f38 != 0) {
    FUN_00098688();
    *unaff_r8 = local_94;
    unaff_r8[1] = *(undefined4 *)(extraout_r2 + 0x88);
    uVar2 = FUN_00022914();
    local_9c = extraout_r2;
  }
  FUN_00098d3c(uVar2,auStack_80,puVar1);
  *(undefined4 *)(puVar1 + 0x84) = in_stack_00000008;
  *(undefined4 *)(puVar1 + 0x8c) = local_90;
  *(undefined4 *)(puVar1 + 0x88) = local_94;
  printerApi_service_ssdp___HttpServer__Run();
  if (local_9c != (undefined *)0x0) {
    return;
  }
  return;
}



/* printerApi/service/ssdp.(*Info).Clone @ 005a0f40 (size 116) */

void printerApi_service_ssdp___Info__Clone(void)

{
  undefined4 uVar1;
  int *piVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined1 auStack_80 [124];
  undefined1 auStack_4 [4];
  
  while( true ) {
    if (*(undefined1 **)(unaff_r10 + 8) < auStack_4) break;
    UNRECOVERED_JUMPTABLE = (code *)0x5a0f94;
    FUN_00096bb8();
  }
  piVar2 = *(int **)(unaff_r10 + 0x10);
  if ((piVar2 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar2)) {
    *piVar2 = (int)auStack_80;
  }
  uVar1 = FUN_000989b8(0,&stack0x00000008);
  uVar1 = FUN_00098d3c(uVar1,in_stack_00000004,auStack_80);
  FUN_00098d3c(uVar1,auStack_80,&stack0x00000008);
                    /* WARNING: Could not recover jumptable at 0x005a0f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/ssdp.(*HttpServer).handleGcodeUpload-fm @ 005a0fb4 (size 108) */

void printerApi_service_ssdp___HttpServer__handleGcodeUpload_fm(void)

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
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *(undefined4 *)(unaff_r7 + 4);
  uStack_c = in_stack_00000004;
  uStack_8 = in_stack_00000008;
  uStack_4 = in_stack_0000000c;
  printerApi_service_ssdp___HttpServer__handleGcodeUpload();
  return;
}



