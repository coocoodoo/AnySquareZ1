// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/cloud/RespCode   functions: 10
/* printerApi/cloud/RespCode.init @ 0041de24 (size 368) */

void printerApi_cloud_RespCode_init(void)

{
  undefined4 uVar1;
  undefined *extraout_r1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *extraout_r3;
  undefined4 *puVar4;
  undefined4 *extraout_r3_00;
  undefined4 uVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_18;
  undefined4 *puStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x41df90;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  FUN_0008e7bc();
  uVar1 = *(undefined4 *)PTR_DAT_0041dfa4;
  uVar3 = *(undefined4 *)PTR_DAT_0041dfa8;
  uVar5 = *(undefined4 *)PTR_DAT_0041dfac;
  *puStack_8 = *(undefined4 *)PTR_DAT_0041dfa0;
  puStack_8[1] = uVar1;
  puStack_8[3] = uVar3;
  puVar4 = puStack_8;
  if (*(int *)PTR_DAT_0041dfb0 != 0) {
    FUN_00098688();
    *unaff_r8 = uVar5;
    unaff_r8[1] = extraout_r3[2];
    puVar4 = extraout_r3;
  }
  puVar4[2] = uVar5;
  puVar2 = PTR_DAT_0041df98;
  FUN_0008e7bc();
  uVar1 = *(undefined4 *)PTR_DAT_0041dfbc;
  uVar3 = *(undefined4 *)PTR_DAT_0041dfc0;
  uVar5 = *(undefined4 *)PTR_DAT_0041dfc4;
  *puStack_8 = *(undefined4 *)PTR_DAT_0041dfb8;
  puStack_8[1] = uVar1;
  puStack_8[3] = uVar3;
  if (*(int *)PTR_DAT_0041dfb0 != 0) {
    FUN_000986a8();
    *unaff_r8 = uVar5;
    unaff_r8[1] = extraout_r3_00[2];
    unaff_r8[2] = uStack_18;
    unaff_r8[3] = *(undefined4 *)PTR_DAT_0041dfc8;
    puStack_8 = extraout_r3_00;
  }
  puStack_8[2] = uVar5;
  *(undefined4 *)PTR_DAT_0041dfc8 = uStack_18;
  FUN_0008b6b8();
  if (*(int *)PTR_DAT_0041dfb0 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_0041dfcc;
    puVar2 = extraout_r1;
  }
  *(undefined **)PTR_DAT_0041dfcc = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0041df84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/cloud/RespCode.init.0 @ 0041dfd0 (size 4392) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_cloud_RespCode_init_0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *unaff_lr;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puStack_56c;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 *puStack_560;
  undefined4 *puStack_55c;
  undefined4 uStack_558;
  undefined4 *puStack_554;
  undefined4 uStack_550;
  int iStack_54c;
  undefined4 auStack_548 [4];
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined4 uStack_51c;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 *puStack_4;
  
  while (&uStack_4f0 <= *(undefined4 **)(unaff_r10 + 8)) {
    unaff_lr = (code *)0x41f4f4;
    FUN_00096bb8();
  }
  puVar1 = auStack_548;
  do {
    puVar2 = puVar1 + 1;
    *puVar1 = 0;
    puVar1 = puVar2;
  } while ((int)puVar2 <= (int)&UNRECOVERED_JUMPTABLE + _UNK_0041ebec);
  auStack_548[0] = *(undefined4 *)PTR_DAT_0041ebf0;
  auStack_548[1] = *(undefined4 *)PTR_DAT_0041ebf4;
  auStack_548[3] = *(undefined4 *)PTR_DAT_0041ebfc;
  auStack_548[2] = *(undefined4 *)PTR_DAT_0041ebf8;
  uStack_538 = *(undefined4 *)PTR_DAT_0041ec00;
  uStack_534 = *(undefined4 *)PTR_DAT_0041ec04;
  uStack_52c = *(undefined4 *)PTR_DAT_0041ec0c;
  uStack_530 = *(undefined4 *)PTR_DAT_0041ec08;
  uStack_528 = *(undefined4 *)PTR_DAT_0041ec10;
  uStack_524 = *(undefined4 *)PTR_DAT_0041ec14;
  uStack_51c = *(undefined4 *)PTR_DAT_0041ec1c;
  uStack_520 = *(undefined4 *)PTR_DAT_0041ec18;
  uStack_518 = *(undefined4 *)PTR_DAT_0041ec20;
  uStack_514 = *(undefined4 *)PTR_DAT_0041ec24;
  uStack_50c = *(undefined4 *)PTR_DAT_0041ec2c;
  uStack_510 = *(undefined4 *)PTR_DAT_0041ec28;
  uStack_508 = *(undefined4 *)PTR_DAT_0041ec30;
  uStack_504 = *(undefined4 *)PTR_DAT_0041ec34;
  uStack_4fc = *(undefined4 *)PTR_DAT_0041ec3c;
  uStack_500 = *(undefined4 *)PTR_DAT_0041ec38;
  uStack_4f8 = *(undefined4 *)PTR_DAT_0041ec40;
  uStack_4f4 = *(undefined4 *)PTR_DAT_0041ec44;
  uStack_4ec = *(undefined4 *)PTR_DAT_0041ec4c;
  uStack_4f0 = *(undefined4 *)PTR_DAT_0041ec48;
  uStack_4e8 = *(undefined4 *)PTR_DAT_0041ec50;
  uStack_4e4 = *(undefined4 *)PTR_DAT_0041ec54;
  uStack_4dc = *(undefined4 *)PTR_DAT_0041ec5c;
  uStack_4e0 = *(undefined4 *)PTR_DAT_0041ec58;
  uStack_4d8 = *(undefined4 *)PTR_DAT_0041ec60;
  uStack_4d4 = *(undefined4 *)PTR_DAT_0041ec64;
  uStack_4cc = *(undefined4 *)PTR_DAT_0041ec6c;
  uStack_4d0 = *(undefined4 *)PTR_DAT_0041ec68;
  uStack_4c8 = *(undefined4 *)PTR_DAT_0041ec70;
  uStack_4c4 = *(undefined4 *)PTR_DAT_0041ec74;
  uStack_4bc = *(undefined4 *)PTR_DAT_0041ec7c;
  uStack_4c0 = *(undefined4 *)PTR_DAT_0041ec78;
  uStack_4b8 = *(undefined4 *)PTR_DAT_0041ec80;
  uStack_4b4 = *(undefined4 *)PTR_DAT_0041ec84;
  uStack_4ac = *(undefined4 *)PTR_DAT_0041ec8c;
  uStack_4b0 = *(undefined4 *)PTR_DAT_0041ec88;
  uStack_4a8 = *(undefined4 *)PTR_DAT_0041ec90;
  uStack_4a4 = *(undefined4 *)PTR_DAT_0041ec94;
  uStack_49c = *(undefined4 *)PTR_DAT_0041ec9c;
  uStack_4a0 = *(undefined4 *)PTR_DAT_0041ec98;
  uStack_498 = *(undefined4 *)PTR_DAT_0041eca0;
  uStack_494 = *(undefined4 *)PTR_DAT_0041eca4;
  uStack_48c = *(undefined4 *)PTR_DAT_0041ecac;
  uStack_490 = *(undefined4 *)PTR_DAT_0041eca8;
  uStack_488 = *(undefined4 *)PTR_DAT_0041ecb0;
  uStack_484 = *(undefined4 *)PTR_DAT_0041ecb4;
  uStack_47c = *(undefined4 *)PTR_DAT_0041ecbc;
  uStack_480 = *(undefined4 *)PTR_DAT_0041ecb8;
  uStack_478 = *(undefined4 *)PTR_DAT_0041ecc0;
  uStack_474 = *(undefined4 *)PTR_DAT_0041ecc4;
  uStack_46c = *(undefined4 *)PTR_DAT_0041eccc;
  uStack_470 = *(undefined4 *)PTR_DAT_0041ecc8;
  uStack_468 = *(undefined4 *)PTR_DAT_0041ecd0;
  uStack_464 = *(undefined4 *)PTR_DAT_0041ecd4;
  uStack_45c = *(undefined4 *)PTR_DAT_0041ecdc;
  uStack_460 = *(undefined4 *)PTR_DAT_0041ecd8;
  uStack_458 = *(undefined4 *)PTR_DAT_0041ece0;
  uStack_454 = *(undefined4 *)PTR_DAT_0041ece4;
  uStack_44c = *(undefined4 *)PTR_DAT_0041ecec;
  uStack_450 = *(undefined4 *)PTR_DAT_0041ece8;
  uStack_448 = *(undefined4 *)PTR_DAT_0041ecf0;
  uStack_444 = *(undefined4 *)PTR_DAT_0041ecf4;
  uStack_43c = *(undefined4 *)PTR_DAT_0041ecfc;
  uStack_440 = *(undefined4 *)PTR_DAT_0041ecf8;
  uStack_438 = *(undefined4 *)PTR_DAT_0041ed00;
  uStack_434 = *(undefined4 *)PTR_DAT_0041ed04;
  uStack_42c = *(undefined4 *)PTR_DAT_0041ed0c;
  uStack_430 = *(undefined4 *)PTR_DAT_0041ed08;
  uStack_428 = *(undefined4 *)PTR_DAT_0041ed10;
  uStack_424 = *(undefined4 *)PTR_DAT_0041ed14;
  uStack_41c = *(undefined4 *)PTR_DAT_0041ed1c;
  uStack_420 = *(undefined4 *)PTR_DAT_0041ed18;
  uStack_418 = *(undefined4 *)PTR_DAT_0041ed20;
  uStack_414 = *(undefined4 *)PTR_DAT_0041ed24;
  uStack_40c = *(undefined4 *)PTR_DAT_0041ed2c;
  uStack_410 = *(undefined4 *)PTR_DAT_0041ed28;
  uStack_408 = *(undefined4 *)PTR_DAT_0041ed30;
  uStack_404 = *(undefined4 *)PTR_DAT_0041ed34;
  uStack_3fc = *(undefined4 *)PTR_DAT_0041ed3c;
  uStack_400 = *(undefined4 *)PTR_DAT_0041ed38;
  uStack_3f8 = *(undefined4 *)PTR_DAT_0041ed40;
  uStack_3f4 = *(undefined4 *)PTR_DAT_0041ed44;
  uStack_3ec = *(undefined4 *)PTR_DAT_0041ed4c;
  uStack_3f0 = *(undefined4 *)PTR_DAT_0041ed48;
  uStack_3e8 = *(undefined4 *)PTR_DAT_0041ed50;
  uStack_3e4 = *(undefined4 *)PTR_DAT_0041ed54;
  uStack_3dc = *(undefined4 *)PTR_DAT_0041ed5c;
  uStack_3e0 = *(undefined4 *)PTR_DAT_0041ed58;
  uStack_3d8 = *(undefined4 *)PTR_DAT_0041ed60;
  uStack_3d4 = *(undefined4 *)PTR_DAT_0041ed64;
  uStack_3cc = *(undefined4 *)PTR_DAT_0041ed6c;
  uStack_3d0 = *(undefined4 *)PTR_DAT_0041ed68;
  uStack_3c8 = *(undefined4 *)PTR_DAT_0041ed70;
  uStack_3c4 = *(undefined4 *)PTR_DAT_0041ed74;
  uStack_3bc = *(undefined4 *)PTR_DAT_0041ed7c;
  uStack_3c0 = *(undefined4 *)PTR_DAT_0041ed78;
  uStack_3b8 = *(undefined4 *)PTR_DAT_0041ed80;
  uStack_3b4 = *(undefined4 *)PTR_DAT_0041ed84;
  uStack_3ac = *(undefined4 *)PTR_DAT_0041ed8c;
  uStack_3b0 = *(undefined4 *)PTR_DAT_0041ed88;
  uStack_3a8 = *(undefined4 *)PTR_DAT_0041ed90;
  uStack_3a4 = *(undefined4 *)PTR_DAT_0041ed94;
  uStack_39c = *(undefined4 *)PTR_DAT_0041ed9c;
  uStack_3a0 = *(undefined4 *)PTR_DAT_0041ed98;
  uStack_398 = *(undefined4 *)PTR_DAT_0041eda0;
  uStack_394 = *(undefined4 *)PTR_DAT_0041eda4;
  uStack_38c = *(undefined4 *)PTR_DAT_0041edac;
  uStack_390 = *(undefined4 *)PTR_DAT_0041eda8;
  uStack_388 = *(undefined4 *)PTR_DAT_0041edb0;
  uStack_384 = *(undefined4 *)PTR_DAT_0041edb4;
  uStack_37c = *(undefined4 *)PTR_DAT_0041edbc;
  uStack_380 = *(undefined4 *)PTR_DAT_0041edb8;
  uStack_378 = *(undefined4 *)PTR_DAT_0041edc0;
  uStack_374 = *(undefined4 *)PTR_DAT_0041edc4;
  uStack_36c = *(undefined4 *)PTR_DAT_0041edcc;
  uStack_370 = *(undefined4 *)PTR_DAT_0041edc8;
  uStack_368 = *(undefined4 *)PTR_DAT_0041edd0;
  uStack_364 = *(undefined4 *)PTR_DAT_0041edd4;
  uStack_35c = *(undefined4 *)PTR_DAT_0041eddc;
  uStack_360 = *(undefined4 *)PTR_DAT_0041edd8;
  uStack_358 = *(undefined4 *)PTR_DAT_0041ede0;
  uStack_354 = *(undefined4 *)PTR_DAT_0041ede4;
  uStack_34c = *(undefined4 *)PTR_DAT_0041edec;
  uStack_350 = *(undefined4 *)PTR_DAT_0041ede8;
  uStack_348 = *(undefined4 *)PTR_DAT_0041edf0;
  uStack_344 = *(undefined4 *)PTR_DAT_0041edf4;
  uStack_33c = *(undefined4 *)PTR_DAT_0041edfc;
  uStack_340 = *(undefined4 *)PTR_DAT_0041edf8;
  uStack_338 = *(undefined4 *)PTR_DAT_0041ee00;
  uStack_334 = *(undefined4 *)PTR_DAT_0041ee04;
  uStack_32c = *(undefined4 *)PTR_DAT_0041ee0c;
  uStack_330 = *(undefined4 *)PTR_DAT_0041ee08;
  uStack_328 = *(undefined4 *)PTR_DAT_0041ee10;
  uStack_324 = *(undefined4 *)PTR_DAT_0041ee14;
  uStack_31c = *(undefined4 *)PTR_DAT_0041ee1c;
  uStack_320 = *(undefined4 *)PTR_DAT_0041ee18;
  uStack_318 = *(undefined4 *)PTR_DAT_0041ee20;
  uStack_314 = *(undefined4 *)PTR_DAT_0041ee24;
  uStack_30c = *(undefined4 *)PTR_DAT_0041ee2c;
  uStack_310 = *(undefined4 *)PTR_DAT_0041ee28;
  uStack_308 = *(undefined4 *)PTR_DAT_0041ee30;
  uStack_304 = *(undefined4 *)PTR_DAT_0041ee34;
  uStack_2fc = *(undefined4 *)PTR_DAT_0041ee3c;
  uStack_300 = *(undefined4 *)PTR_DAT_0041ee38;
  uStack_2f8 = *(undefined4 *)PTR_DAT_0041ee40;
  uStack_2f4 = *(undefined4 *)PTR_DAT_0041ee44;
  uStack_2ec = *(undefined4 *)PTR_DAT_0041ee4c;
  uStack_2f0 = *(undefined4 *)PTR_DAT_0041ee48;
  uStack_2e8 = *(undefined4 *)PTR_DAT_0041ee50;
  uStack_2e4 = *(undefined4 *)PTR_DAT_0041ee54;
  uStack_2dc = *(undefined4 *)PTR_DAT_0041ee5c;
  uStack_2e0 = *(undefined4 *)PTR_DAT_0041ee58;
  uStack_2d8 = *(undefined4 *)PTR_DAT_0041ee60;
  uStack_2d4 = *(undefined4 *)PTR_DAT_0041ee64;
  uStack_2cc = *(undefined4 *)PTR_DAT_0041ee6c;
  uStack_2d0 = *(undefined4 *)PTR_DAT_0041ee68;
  uStack_2c8 = *(undefined4 *)PTR_DAT_0041ee70;
  uStack_2c4 = *(undefined4 *)PTR_DAT_0041ee74;
  uStack_2bc = *(undefined4 *)PTR_DAT_0041ee7c;
  uStack_2c0 = *(undefined4 *)PTR_DAT_0041ee78;
  uStack_2b8 = *(undefined4 *)PTR_DAT_0041ee80;
  uStack_2b4 = *(undefined4 *)PTR_DAT_0041ee84;
  uStack_2ac = *(undefined4 *)PTR_DAT_0041ee8c;
  uStack_2b0 = *(undefined4 *)PTR_DAT_0041ee88;
  uStack_2a8 = *(undefined4 *)PTR_DAT_0041ee90;
  uStack_2a4 = *(undefined4 *)PTR_DAT_0041ee94;
  uStack_29c = *(undefined4 *)PTR_DAT_0041ee9c;
  uStack_2a0 = *(undefined4 *)PTR_DAT_0041ee98;
  uStack_298 = *(undefined4 *)PTR_DAT_0041eea0;
  uStack_294 = *(undefined4 *)PTR_DAT_0041eea4;
  uStack_28c = *(undefined4 *)PTR_DAT_0041eeac;
  uStack_290 = *(undefined4 *)PTR_DAT_0041eea8;
  uStack_288 = *(undefined4 *)PTR_DAT_0041eeb0;
  uStack_284 = *(undefined4 *)PTR_DAT_0041eeb4;
  uStack_27c = *(undefined4 *)PTR_DAT_0041eebc;
  uStack_280 = *(undefined4 *)PTR_DAT_0041eeb8;
  uStack_278 = *(undefined4 *)PTR_DAT_0041eec0;
  uStack_274 = *(undefined4 *)PTR_DAT_0041eec4;
  uStack_26c = *(undefined4 *)PTR_DAT_0041eecc;
  uStack_270 = *(undefined4 *)PTR_DAT_0041eec8;
  uStack_268 = *(undefined4 *)PTR_DAT_0041eed0;
  uStack_264 = *(undefined4 *)PTR_DAT_0041eed4;
  uStack_25c = *(undefined4 *)PTR_DAT_0041eedc;
  uStack_260 = *(undefined4 *)PTR_DAT_0041eed8;
  uStack_258 = *(undefined4 *)PTR_DAT_0041eee0;
  uStack_254 = *(undefined4 *)PTR_DAT_0041eee4;
  uStack_24c = *(undefined4 *)PTR_DAT_0041eeec;
  uStack_250 = *(undefined4 *)PTR_DAT_0041eee8;
  uStack_248 = *(undefined4 *)PTR_DAT_0041eef0;
  uStack_244 = *(undefined4 *)PTR_DAT_0041eef4;
  uStack_23c = *(undefined4 *)PTR_DAT_0041eefc;
  uStack_240 = *(undefined4 *)PTR_DAT_0041eef8;
  uStack_238 = *(undefined4 *)PTR_DAT_0041ef00;
  uStack_234 = *(undefined4 *)PTR_DAT_0041ef04;
  uStack_22c = *(undefined4 *)PTR_DAT_0041ef0c;
  uStack_230 = *(undefined4 *)PTR_DAT_0041ef08;
  uStack_228 = *(undefined4 *)PTR_DAT_0041ef10;
  uStack_224 = *(undefined4 *)PTR_DAT_0041ef14;
  uStack_21c = *(undefined4 *)PTR_DAT_0041ef1c;
  uStack_220 = *(undefined4 *)PTR_DAT_0041ef18;
  uStack_218 = *(undefined4 *)PTR_DAT_0041ef20;
  uStack_214 = *(undefined4 *)PTR_DAT_0041ef24;
  uStack_20c = *(undefined4 *)PTR_DAT_0041ef2c;
  uStack_210 = *(undefined4 *)PTR_DAT_0041ef28;
  uStack_208 = *(undefined4 *)PTR_DAT_0041ef30;
  uStack_204 = *(undefined4 *)PTR_DAT_0041ef34;
  uStack_1fc = *(undefined4 *)PTR_DAT_0041ef3c;
  uStack_200 = *(undefined4 *)PTR_DAT_0041ef38;
  uStack_1f8 = *(undefined4 *)PTR_DAT_0041ef40;
  uStack_1f4 = *(undefined4 *)PTR_DAT_0041ef44;
  uStack_1ec = *(undefined4 *)PTR_DAT_0041ef4c;
  uStack_1f0 = *(undefined4 *)PTR_DAT_0041ef48;
  uStack_1e8 = *(undefined4 *)PTR_DAT_0041ef50;
  uStack_1e4 = *(undefined4 *)PTR_DAT_0041ef54;
  uStack_1dc = *(undefined4 *)PTR_DAT_0041ef5c;
  uStack_1e0 = *(undefined4 *)PTR_DAT_0041ef58;
  uStack_1d8 = *(undefined4 *)PTR_DAT_0041ef60;
  uStack_1d4 = *(undefined4 *)PTR_DAT_0041ef64;
  uStack_1cc = *(undefined4 *)PTR_DAT_0041ef6c;
  uStack_1d0 = *(undefined4 *)PTR_DAT_0041ef68;
  uStack_1c8 = *(undefined4 *)PTR_DAT_0041ef70;
  uStack_1c4 = *(undefined4 *)PTR_DAT_0041ef74;
  uStack_1bc = *(undefined4 *)PTR_DAT_0041ef7c;
  uStack_1c0 = *(undefined4 *)PTR_DAT_0041ef78;
  uStack_1b8 = *(undefined4 *)PTR_DAT_0041ef80;
  uStack_1b4 = *(undefined4 *)PTR_DAT_0041ef84;
  uStack_1ac = *(undefined4 *)PTR_DAT_0041ef8c;
  uStack_1b0 = *(undefined4 *)PTR_DAT_0041ef88;
  uStack_1a8 = *(undefined4 *)PTR_DAT_0041ef90;
  uStack_1a4 = *(undefined4 *)PTR_DAT_0041ef94;
  uStack_19c = *(undefined4 *)PTR_DAT_0041ef9c;
  uStack_1a0 = *(undefined4 *)PTR_DAT_0041ef98;
  uStack_198 = *(undefined4 *)PTR_DAT_0041efa0;
  uStack_194 = *(undefined4 *)PTR_DAT_0041efa4;
  uStack_18c = *(undefined4 *)PTR_DAT_0041efac;
  uStack_190 = *(undefined4 *)PTR_DAT_0041efa8;
  uStack_188 = *(undefined4 *)PTR_DAT_0041efb0;
  uStack_184 = *(undefined4 *)PTR_DAT_0041efb4;
  uStack_17c = *(undefined4 *)PTR_DAT_0041efbc;
  uStack_180 = *(undefined4 *)PTR_DAT_0041efb8;
  uStack_178 = *(undefined4 *)PTR_DAT_0041efc0;
  uStack_174 = *(undefined4 *)PTR_DAT_0041efc4;
  uStack_16c = *(undefined4 *)PTR_DAT_0041efcc;
  uStack_170 = *(undefined4 *)PTR_DAT_0041efc8;
  uStack_168 = *(undefined4 *)PTR_DAT_0041efd0;
  uStack_164 = *(undefined4 *)PTR_DAT_0041efd4;
  uStack_15c = *(undefined4 *)PTR_DAT_0041efdc;
  uStack_160 = *(undefined4 *)PTR_DAT_0041efd8;
  uStack_158 = *(undefined4 *)PTR_DAT_0041efe0;
  uStack_154 = *(undefined4 *)PTR_DAT_0041efe4;
  uStack_14c = *(undefined4 *)PTR_DAT_0041f4fc;
  uStack_150 = *(undefined4 *)PTR_DAT_0041efe8;
  uStack_148 = *(undefined4 *)PTR_DAT_0041f500;
  uStack_144 = *(undefined4 *)PTR_DAT_0041f504;
  uStack_13c = *(undefined4 *)PTR_DAT_0041f50c;
  uStack_140 = *(undefined4 *)PTR_DAT_0041f508;
  uStack_138 = *(undefined4 *)PTR_DAT_0041f510;
  uStack_134 = *(undefined4 *)PTR_DAT_0041f514;
  uStack_12c = *(undefined4 *)PTR_DAT_0041f51c;
  uStack_130 = *(undefined4 *)PTR_DAT_0041f518;
  uStack_128 = *(undefined4 *)PTR_DAT_0041f520;
  uStack_124 = *(undefined4 *)PTR_DAT_0041f524;
  uStack_11c = *(undefined4 *)PTR_DAT_0041f52c;
  uStack_120 = *(undefined4 *)PTR_DAT_0041f528;
  uStack_118 = *(undefined4 *)PTR_DAT_0041f530;
  uStack_114 = *(undefined4 *)PTR_DAT_0041f534;
  uStack_10c = *(undefined4 *)PTR_DAT_0041f53c;
  uStack_110 = *(undefined4 *)PTR_DAT_0041f538;
  uStack_108 = *(undefined4 *)PTR_DAT_0041f540;
  uStack_104 = *(undefined4 *)PTR_DAT_0041f544;
  uStack_fc = *(undefined4 *)PTR_DAT_0041f54c;
  uStack_100 = *(undefined4 *)PTR_DAT_0041f548;
  uStack_f8 = *(undefined4 *)PTR_DAT_0041f550;
  uStack_f4 = *(undefined4 *)PTR_DAT_0041f554;
  uStack_ec = *(undefined4 *)PTR_DAT_0041f55c;
  uStack_f0 = *(undefined4 *)PTR_DAT_0041f558;
  uStack_e8 = *(undefined4 *)PTR_DAT_0041f560;
  uStack_e4 = *(undefined4 *)PTR_DAT_0041f564;
  uStack_dc = *(undefined4 *)PTR_DAT_0041f56c;
  uStack_e0 = *(undefined4 *)PTR_DAT_0041f568;
  uStack_d8 = *(undefined4 *)PTR_DAT_0041f570;
  uStack_d4 = *(undefined4 *)PTR_DAT_0041f574;
  uStack_cc = *(undefined4 *)PTR_DAT_0041f57c;
  uStack_d0 = *(undefined4 *)PTR_DAT_0041f578;
  uStack_c8 = *(undefined4 *)PTR_DAT_0041f580;
  uStack_c4 = *(undefined4 *)PTR_DAT_0041f584;
  uStack_bc = *(undefined4 *)PTR_DAT_0041f58c;
  uStack_c0 = *(undefined4 *)PTR_DAT_0041f588;
  uStack_b8 = *(undefined4 *)PTR_DAT_0041f590;
  uStack_b4 = *(undefined4 *)PTR_DAT_0041f594;
  uStack_ac = *(undefined4 *)PTR_DAT_0041f59c;
  uStack_b0 = *(undefined4 *)PTR_DAT_0041f598;
  uStack_a8 = *(undefined4 *)PTR_DAT_0041f5a0;
  uStack_a4 = *(undefined4 *)PTR_DAT_0041f5a4;
  uStack_9c = *(undefined4 *)PTR_DAT_0041f5ac;
  uStack_a0 = *(undefined4 *)PTR_DAT_0041f5a8;
  uStack_98 = *(undefined4 *)PTR_DAT_0041f5b0;
  uStack_94 = *(undefined4 *)PTR_DAT_0041f5b4;
  uStack_8c = *(undefined4 *)PTR_DAT_0041f5bc;
  uStack_90 = *(undefined4 *)PTR_DAT_0041f5b8;
  uStack_88 = *(undefined4 *)PTR_DAT_0041f5c0;
  uStack_84 = *(undefined4 *)PTR_DAT_0041f5c4;
  uStack_7c = *(undefined4 *)PTR_DAT_0041f5cc;
  uStack_80 = *(undefined4 *)PTR_DAT_0041f5c8;
  uStack_78 = *(undefined4 *)PTR_DAT_0041f5d0;
  uStack_74 = *(undefined4 *)PTR_DAT_0041f5d4;
  uStack_6c = *(undefined4 *)PTR_DAT_0041f5dc;
  uStack_70 = *(undefined4 *)PTR_DAT_0041f5d8;
  uStack_68 = *(undefined4 *)PTR_DAT_0041f5e0;
  uStack_64 = *(undefined4 *)PTR_DAT_0041f5e4;
  uStack_5c = *(undefined4 *)PTR_DAT_0041f5ec;
  uStack_60 = *(undefined4 *)PTR_DAT_0041f5e8;
  uStack_58 = *(undefined4 *)PTR_DAT_0041f5f0;
  uStack_54 = *(undefined4 *)PTR_DAT_0041f5f4;
  uStack_4c = *(undefined4 *)PTR_DAT_0041f5fc;
  uStack_50 = *(undefined4 *)PTR_DAT_0041f5f8;
  uStack_48 = *(undefined4 *)PTR_DAT_0041f600;
  uStack_44 = *(undefined4 *)PTR_DAT_0041f604;
  uStack_3c = *(undefined4 *)PTR_DAT_0041f60c;
  uStack_40 = *(undefined4 *)PTR_DAT_0041f608;
  uStack_38 = *(undefined4 *)PTR_DAT_0041f610;
  uStack_34 = *(undefined4 *)PTR_DAT_0041f614;
  uStack_2c = *(undefined4 *)PTR_DAT_0041f61c;
  uStack_30 = *(undefined4 *)PTR_DAT_0041f618;
  uStack_28 = *(undefined4 *)PTR_DAT_0041f620;
  uStack_24 = *(undefined4 *)PTR_DAT_0041f624;
  uStack_1c = *(undefined4 *)PTR_DAT_0041f62c;
  uStack_20 = *(undefined4 *)PTR_DAT_0041f628;
  uStack_18 = *(undefined4 *)PTR_DAT_0041f630;
  uStack_14 = *(undefined4 *)PTR_DAT_0041f634;
  uStack_c = *(undefined4 *)PTR_DAT_0041f63c;
  uStack_10 = *(undefined4 *)PTR_DAT_0041f638;
  puVar1 = auStack_548;
  iVar3 = 0;
  UNRECOVERED_JUMPTABLE = unaff_lr;
  while (iVar3 < 0x54) {
    puStack_4 = puVar1;
    uStack_564 = puVar1[2];
    uStack_8 = uStack_564;
    uStack_550 = *puVar1;
    puStack_560 = (undefined4 *)puVar1[3];
    uStack_558 = puVar1[1];
    uStack_568 = *(undefined4 *)PTR_DAT_0041f640;
    puStack_56c = PTR_DAT_0041f644;
    puStack_554 = puStack_560;
    iStack_54c = iVar3;
    FUN_0008e7bc();
    uVar4 = CONCAT44(uStack_550,puStack_55c);
    *puStack_55c = uStack_550;
    puStack_55c[1] = uStack_558;
    puStack_55c[3] = puStack_554;
    if (*(int *)PTR_DAT_0041f648 != 0) {
      uVar4 = FUN_00098688();
      *unaff_r8 = uStack_8;
      unaff_r8[1] = *(undefined4 *)((int)uVar4 + 8);
    }
    uStack_564 = (undefined4)((ulonglong)uVar4 >> 0x20);
    *(undefined4 *)((int)uVar4 + 8) = uStack_8;
    uStack_568 = *(undefined4 *)PTR_DAT_0041f64c;
    puStack_56c = PTR_DAT_0041f650;
    FUN_0008d6bc();
    *puStack_560 = uStack_550;
    puStack_560[1] = uStack_558;
    puStack_560[3] = puStack_554;
    puVar1 = puStack_560;
    if (*(int *)PTR_DAT_0041f648 != 0) {
      puVar1 = (undefined4 *)FUN_00098688();
      *unaff_r8 = uStack_8;
      unaff_r8[1] = puVar1[2];
    }
    puVar1[2] = uStack_8;
    puVar1 = puStack_4 + 4;
    iVar3 = iStack_54c + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0041f4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/cloud/RespCode.GetRespCodeByMsg @ 0041f654 (size 268) */

void printerApi_cloud_RespCode_GetRespCodeByMsg(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *local_44;
  int local_38;
  int local_34;
  undefined4 *local_30;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = local_44;
  FUN_00098a08(0,&local_34);
  FUN_0008c560();
  while( true ) {
    puVar1 = local_4;
    if (local_34 == 0) {
      return;
    }
    uVar3 = local_30[1];
    uVar4 = local_30[3];
    uVar2 = local_30[2];
    *local_4 = *local_30;
    local_4[1] = uVar3;
    local_4[3] = uVar4;
    if (*(int *)PTR_DAT_0041f770 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = puVar1[2];
      uVar2 = extraout_r1;
    }
    puVar1[2] = uVar2;
    internal_stringslite_Index();
    if (-1 < local_38) break;
    FUN_0008c7c4();
  }
  return;
}



/* printerApi/cloud/RespCode.ExtractRespCodeFromGcodeResponses @ 0041f774 (size 192) */

void printerApi_cloud_RespCode_ExtractRespCodeFromGcodeResponses(void)

{
  int iVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 local_14;
  undefined4 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_service_k3c_GetResponses();
  iVar1 = 0;
  while( true ) {
    if (local_14 <= iVar1) {
      return;
    }
    printerApi_cloud_RespCode_GetRespCodeByMsg();
    if (local_10 != 0) break;
    iVar1 = iVar1 + 1;
  }
  return;
}



/* printerApi/cloud/RespCode.RespCode.Error @ 0041f834 (size 172) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_cloud_RespCode_RespCode_Error(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 auStack_10 [2];
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x41f8dc;
    FUN_00096bb8();
  }
  FUN_00098a28(0,auStack_10);
  FUN_0008a578();
  auStack_10[0] = _UNK_0041f8e4;
  FUN_0008a4bc();
  uStack_8 = _UNK_0041f8e8;
  FUN_001331ac();
                    /* WARNING: Could not recover jumptable at 0x0041f8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/cloud/RespCode.RespCode.ToErrorDto @ 0041f8f0 (size 216) */

void printerApi_cloud_RespCode_RespCode_ToErrorDto(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 local_10;
  undefined4 local_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (in_stack_00000008 != 0 || in_stack_00000004 != 200) {
    puVar1 = (undefined4 *)(in_stack_00000004 >> 0x1f);
    FUN_000af250();
    FUN_0001eed8();
    puVar1[1] = local_c;
    if (*DAT_0041f9d0 != 0) {
      puVar1 = (undefined4 *)FUN_00098688();
      *unaff_r8 = local_10;
      unaff_r8[1] = in_stack_0000000c;
    }
    *puVar1 = local_10;
    puVar1[3] = in_stack_00000010;
    puVar1[2] = in_stack_0000000c;
    return;
  }
  return;
}



/* printerApi/cloud/RespCode.RespCode.WithMsg @ 0041f9d4 (size 80) */

void printerApi_cloud_RespCode_RespCode_WithMsg(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  int iStack00000028;
  
  if (in_stack_00000018 == 0) {
    uStack0000001c = in_stack_00000004;
    uStack00000020 = in_stack_00000008;
    uStack00000024 = in_stack_0000000c;
    iStack00000028 = in_stack_00000010;
                    /* WARNING: Could not recover jumptable at 0x0041fa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack0000001c = in_stack_00000004;
  uStack00000020 = in_stack_00000008;
  uStack00000024 = in_stack_00000014;
  iStack00000028 = in_stack_00000018;
                    /* WARNING: Could not recover jumptable at 0x0041fa20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/cloud/RespCode.(*RespCode).Error @ 0041fa24 (size 248) */

void printerApi_cloud_RespCode___RespCode__Error(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x38) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x34);
      }
      puVar2 = *(undefined4 **)((int)register0x00000054 + 4);
      bVar5 = puVar2 == (undefined4 *)0x0;
      if (!bVar5) {
        *(undefined4 *)((int)register0x00000054 + -0x14) = *puVar2;
        *(undefined4 *)((int)register0x00000054 + -0x18) = puVar2[1];
        uVar3 = puVar2[3];
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x10),puVar2[2]);
        *(undefined4 *)((int)register0x00000054 + -0x34) = extraout_r2;
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar3;
        FUN_0008a578();
        *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_0041fb20;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        FUN_0008a4bc();
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_0041fb24;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_0041fb28;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 6;
        *(undefined1 **)((int)register0x00000054 + -0x2c) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x28) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x24) = 2;
        FUN_001331ac();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x38);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x41fafc;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/cloud/RespCode.(*RespCode).ToErrorDto @ 0041fb2c (size 136) */

void printerApi_cloud_RespCode___RespCode__ToErrorDto(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  bool bVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      piVar3 = *(int **)(unaff_r10 + 0x10);
      if ((piVar3 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar3)) {
        *piVar3 = (int)((int)register0x00000054 + -0x14);
      }
      puVar1 = *(undefined4 **)((int)register0x00000054 + 4);
      bVar7 = puVar1 == (undefined4 *)0x0;
      if (!bVar7) {
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar2 = puVar1[3];
        *(undefined4 *)((int)register0x00000054 + -0x14) = *puVar1;
        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0xc) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar2;
        printerApi_cloud_RespCode_RespCode_ToErrorDto();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -4)
        ;
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      if (bVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x41fb94;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/cloud/RespCode.(*RespCode).WithMsg @ 0041fbb4 (size 148) */

void printerApi_cloud_RespCode___RespCode__WithMsg(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  bool bVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      piVar3 = *(int **)(unaff_r10 + 0x10);
      if ((piVar3 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar3)) {
        *piVar3 = (int)register0x00000054;
      }
      puVar1 = *(undefined4 **)((int)register0x00000054 + 4);
      bVar7 = puVar1 == (undefined4 *)0x0;
      if (!bVar7) {
        iVar4 = *(int *)((int)register0x00000054 + 0xc);
        if (iVar4 == 0) {
          uVar5 = puVar1[2];
          iVar4 = puVar1[3];
        }
        else {
          uVar5 = *(undefined4 *)((int)register0x00000054 + 8);
        }
        uVar2 = puVar1[1];
        *(undefined4 *)((int)register0x00000054 + 0x10) = *puVar1;
        *(undefined4 *)((int)register0x00000054 + 0x14) = uVar2;
        *(undefined4 *)((int)register0x00000054 + 0x18) = uVar5;
        *(int *)((int)register0x00000054 + 0x1c) = iVar4;
                    /* WARNING: Could not recover jumptable at 0x0041fc14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -4))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
      if (bVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x41fc28;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



