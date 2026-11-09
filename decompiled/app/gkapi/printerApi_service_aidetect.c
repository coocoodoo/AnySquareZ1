// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/aidetect   functions: 8
/* printerApi/service/aidetect.(*cloud).AIDetectImageUpload @ 004fe14c (size 240) */

/* WARNING: Removing unreachable block (ram,0x004fe1c8) */

void printerApi_service_aidetect___cloud__AIDetectImageUpload(void)

{
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 local_28;
  undefined4 local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0012a748();
  if (local_20 != 0) {
    return;
  }
  (**(code **)(local_28 + 0x1c))();
  printerApi_common_file_DetectMimeType();
  printerApi_common_file_UploadFile();
  return;
}



/* printerApi/service/aidetect.(*cloud).AIDetectImage @ 004fe244 (size 728) */

/* WARNING: Removing unreachable block (ram,0x004fe398) */
/* WARNING: Removing unreachable block (ram,0x004fe3ac) */
/* WARNING: Removing unreachable block (ram,0x004fe3b0) */

void printerApi_service_aidetect___cloud__AIDetectImage(void)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_ffffff18;
  undefined4 in_stack_ffffff1c;
  undefined4 uVar2;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_b0;
  undefined4 local_ac;
  int local_94;
  undefined4 local_90;
  int local_8c;
  undefined1 auStack_88 [20];
  undefined1 auStack_74 [36];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 auStack_40 [64];
  
  while (auStack_74 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4fe518;
    FUN_00096bb8();
  }
  internal_filepathlite_Base();
  FUN_000989f8(0,auStack_40,in_stack_ffffff1c,in_stack_ffffff18,unaff_lr,in_stack_00000010,
               in_stack_00000014);
  uVar1 = extraout_r3;
  uVar2 = extraout_r2;
  printerApi_service_aidetect___cloud__GeneratePreSignUrl();
  local_8c = local_94;
  uVar1 = FUN_00098dbc(local_94,&local_d4,auStack_40,local_90,unaff_lr,in_stack_00000004,
                       in_stack_00000008,in_stack_0000000c,uVar1,uVar2);
  FUN_00098dbc(uVar1,auStack_40,auStack_88);
  if (local_8c != 0) {
    local_48 = *(undefined4 *)(local_8c + 4);
    FUN_00130144();
    return;
  }
  printerApi_service_aidetect___cloud__AIDetectImageUpload();
  local_d4 = local_50;
  local_d0 = local_4c;
  local_cc = in_stack_00000028;
  local_c8 = in_stack_0000002c;
  local_c4 = in_stack_00000030;
  local_c0 = in_stack_00000034;
  printerApi_service_aidetect___cloud__ResourceUploadReport();
  if (local_b0 != 0) {
    local_48 = *(undefined4 *)(local_b0 + 4);
    local_44 = local_ac;
    FUN_00130144();
    return;
  }
  return;
}



/* printerApi/service/aidetect.(*cloud).GeneratePreSignUrl @ 004fe52c (size 3660) */

void printerApi_service_aidetect___cloud__GeneratePreSignUrl(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined *extraout_r3;
  undefined *extraout_r3_00;
  undefined *puVar6;
  int *unaff_r8;
  int *piVar7;
  int unaff_r10;
  undefined8 uVar8;
  undefined4 *in_stack_00000004;
  undefined **in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined *in_stack_00000018;
  undefined *in_stack_0000001c;
  undefined **in_stack_00000060;
  undefined **in_stack_00000064;
  undefined **local_200;
  undefined **local_1fc;
  undefined **local_1f8;
  undefined *local_1f4;
  int *local_1f0;
  undefined **local_1ec;
  int local_1e8;
  undefined **local_1e4;
  undefined *local_1e0;
  uint local_1dc;
  undefined **local_1d8;
  uint local_1d4;
  undefined *local_1d0;
  int local_1cc;
  undefined *local_1c8;
  uint local_1c4;
  int local_1c0;
  int local_1bc;
  undefined *local_1b8;
  int local_1b4;
  uint local_1b0;
  undefined *apuStack_1ac [3];
  undefined **local_1a0;
  undefined4 local_194;
  undefined **local_190;
  undefined **local_18c;
  int local_188;
  undefined *local_184;
  int local_180;
  undefined **local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  int local_16c;
  uint local_164;
  uint local_160;
  uint local_15c;
  int local_158;
  undefined *local_150;
  undefined **local_14c;
  undefined **local_148;
  undefined4 local_144;
  undefined4 local_140;
  int *local_13c;
  undefined **local_138;
  undefined1 auStack_134 [172];
  undefined *local_88 [2];
  undefined **local_80;
  undefined1 *local_7c;
  undefined *local_6c;
  undefined *local_68;
  undefined1 auStack_64 [20];
  undefined **local_50;
  undefined **local_4c;
  undefined **local_48;
  undefined4 local_44;
  undefined **local_40;
  undefined **local_3c;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined4 local_28;
  int local_1c;
  uint local_18;
  undefined **local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  int *local_4;
  
  while (&local_184 <= *(undefined ***)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_4 = (int *)0x0;
  in_stack_00000060 = (undefined **)0x0;
  in_stack_00000064 = (undefined **)0x0;
  local_200 = (undefined **)PTR_DAT_004fed54;
  FUN_0001eed8();
  local_4 = (int *)local_1fc;
  uVar1 = FUN_00098a1c(0,local_88);
  FUN_0009898c(uVar1,auStack_134);
  local_7c = auStack_134;
  FUN_00065dd4();
  local_80 = local_200;
  local_200 = (undefined **)PTR_DAT_004fed58;
  FUN_0001eed8();
  local_1fc[1] = (undefined *)in_stack_00000014;
  if (*(int *)PTR_DAT_004fed5c != 0) {
    local_1fc = (undefined **)FUN_00098678();
    *unaff_r8 = in_stack_00000010;
  }
  *local_1fc = (undefined *)in_stack_00000010;
  local_200 = (undefined **)PTR_DAT_004fed60;
  local_1f8 = (undefined **)PTR_s_fileNameXX_AppidXX_NoncedeviceId_0077568d_0x1b8_004fed64;
  local_1f4 = (undefined *)0x8;
  local_3c = local_1fc;
  local_1fc = local_88;
  FUN_0008e7bc();
  local_1f0[1] = 1;
  local_1f0[2] = 1;
  piVar7 = local_1f0;
  if (*(int *)PTR_DAT_004fed5c != 0) {
    piVar7 = (int *)FUN_00098688();
    *unaff_r8 = (int)local_3c;
    unaff_r8[1] = *piVar7;
  }
  *piVar7 = (int)local_3c;
  local_184 = in_stack_00000018;
  if (in_stack_0000001c == (undefined *)0x0) {
    in_stack_0000001c = (undefined *)0xa;
    local_184 = PTR_DAT_004fed68;
  }
  local_200 = (undefined **)PTR_DAT_004fed58;
  local_1c8 = in_stack_0000001c;
  FUN_0001eed8();
  local_1fc[1] = local_1c8;
  if (*(int *)PTR_DAT_004fed5c != 0) {
    local_1fc = (undefined **)FUN_00098678();
    *unaff_r8 = (int)local_184;
  }
  *local_1fc = local_184;
  local_200 = (undefined **)PTR_DAT_004fed60;
  local_1f8 = (undefined **)PTR_s_pathsizedatetypetext_gco_acmbool_0077367d_0x13_004fed6c;
  local_1f4 = (undefined *)0x4;
  local_3c = local_1fc;
  local_1fc = local_88;
  FUN_0008e7bc();
  local_1f0[1] = 1;
  local_1f0[2] = 1;
  if (*(int *)PTR_DAT_004fed5c != 0) {
    local_1f0 = (int *)FUN_00098688();
    *unaff_r8 = (int)local_3c;
    unaff_r8[1] = *local_1f0;
  }
  *local_1f0 = (int)local_3c;
  local_200 = local_88;
  FUN_0028e0bc();
  local_200 = (undefined **)0x0;
  local_1f4 = PTR_DAT_004fed70;
  local_1f0 = (int *)0x23;
  local_1ec = (undefined **)PTR_DAT_004fed74;
  local_1e8 = 1;
  local_1e4 = local_1fc;
  local_1e0 = (undefined *)local_1f8;
  local_1fc = (undefined **)*in_stack_00000004;
  local_1f8 = (undefined **)in_stack_00000004[1];
  FUN_000716ac();
  local_200 = in_stack_00000008;
  local_1fc = (undefined **)in_stack_0000000c;
  local_1f8 = (undefined **)PTR_DAT_004fed78;
  local_1f4 = (undefined *)0x4;
  local_1f0 = (int *)local_1dc;
  local_1ec = local_1d8;
  local_1e8 = 0;
  local_1e4 = (undefined **)0x0;
  FUN_0037fdd4();
  in_stack_00000060 = (undefined **)local_1dc;
  in_stack_00000064 = local_1d8;
  if (local_1dc != 0) {
    uVar1 = FUN_0004fb3c();
    FUN_00098dbc(uVar1,local_4,&stack0x00000020);
    return;
  }
  local_150 = local_1e0;
  local_200 = (undefined **)0x8;
  local_1fc = (undefined **)PTR_DAT_004fed7c;
  local_1f8 = (undefined **)0x3e;
  printerApi_common_utils_str_RandomStringWithCharset();
  local_194 = local_1f4;
  local_1d4 = (uint)local_1f0;
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,&local_200,auStack_64);
  FUN_00098e14(uVar1,auStack_64,&local_164);
  if ((local_160 & 0x80000000) != 0) {
    uVar5 = (local_164 & 0x7fffffff) >> 0x1e | (local_164 >> 0x1f | local_160 << 1) << 1;
    local_15c = uVar5 + DAT_004fed80;
    local_158 = ((local_160 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar5,DAT_004fed80);
  }
  local_1b0 = (uint)((ulonglong)local_15c * 1000);
  local_1b4 = local_158 * 1000 + (int)((ulonglong)local_15c * 1000 >> 0x20);
  local_200 = (undefined **)(local_164 & 0x3fffffff);
  local_1fc = (undefined **)0x0;
  local_1f8 = (undefined **)DAT_004fed84;
  local_1f4 = (undefined *)0x0;
  FUN_00086d18();
  local_200 = (undefined **)((int)local_1f0 + local_1b0 + DAT_004fed88);
  local_1fc = (undefined **)
              ((int)local_1ec +
              (uint)CARRY4((int)local_1f0 + local_1b0,DAT_004fed88) +
              DAT_004fed8c + (uint)CARRY4((uint)local_1f0,local_1b0) + local_1b4);
  local_1f8 = (undefined **)0x24;
  FUN_000af250();
  local_200 = (undefined **)0x0;
  local_1fc = (undefined **)local_194;
  local_1f8 = (undefined **)local_1d4;
  FUN_000715a4();
  local_14c = local_1ec;
  local_1bc = local_1e8;
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,&local_200,auStack_64);
  FUN_00098e14(uVar1,auStack_64,&local_178);
  if ((local_174 & 0x80000000) != 0) {
    uVar5 = (local_178 & 0x7fffffff) >> 0x1e | (local_178 >> 0x1f | local_174 << 1) << 1;
    local_170 = uVar5 + DAT_004fed80;
    local_16c = ((local_174 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar5,DAT_004fed80);
  }
  local_1b0 = (uint)((ulonglong)local_170 * 1000);
  local_1b4 = local_16c * 1000 + (int)((ulonglong)local_170 * 1000 >> 0x20);
  local_200 = (undefined **)(local_178 & 0x3fffffff);
  local_1fc = (undefined **)0x0;
  local_1f8 = (undefined **)DAT_004fed84;
  local_1f4 = (undefined *)0x0;
  FUN_00086d18();
  local_200 = (undefined **)(local_1b0 + (int)local_1f0 + DAT_004fed88);
  local_1fc = (undefined **)
              ((int)local_1ec +
              (uint)CARRY4(local_1b0 + (int)local_1f0,DAT_004fed88) +
              DAT_004fed8c + (uint)CARRY4(local_1b0,(uint)local_1f0) + local_1b4);
  local_1f8 = (undefined **)&DAT_0000000a;
  FUN_000af250();
  local_180 = (int)local_1f4;
  local_1c4 = (uint)local_1f0;
  local_200 = local_88;
  printerApi_service_aidetect_urlValueToSignatureStr();
  local_1f0 = (int *)local_1f8;
  local_1f4 = (undefined *)local_1fc;
  local_200 = (undefined **)0x0;
  local_1fc = (undefined **)PTR_DAT_004fed90;
  local_1f8 = (undefined **)0x24;
  FUN_000715a4();
  uVar1 = FUN_00098a10(0,&local_2c,local_1e8,local_1ec);
  local_28 = 4;
  local_2c = PTR_DAT_004fed78;
  local_18 = local_1c4;
  local_1c = local_180;
  local_10 = local_1bc;
  local_14 = local_14c;
  local_c = in_stack_00000004[4];
  local_8 = in_stack_00000004[5];
  local_1cc = in_stack_00000004[3];
  piVar7 = *(int **)(local_150 + 0x1c);
  local_188 = in_stack_00000004[2];
  local_200 = (undefined **)PTR_s_XX_AppidXX_NoncedeviceIdErrCode__0077568d_0x1c0_004fed94;
  local_1fc = (undefined **)&DAT_00000008;
  local_13c = piVar7;
  FUN_00313ba4(uVar1);
  local_40 = local_1f8;
  local_1b8 = local_1f4;
  local_200 = (undefined **)PTR_DAT_004fed58;
  FUN_0001eed8();
  local_1fc[1] = (undefined *)local_1cc;
  ppuVar4 = local_1fc;
  if (*(int *)PTR_DAT_004fed5c != 0) {
    ppuVar4 = (undefined **)FUN_00098678();
    *piVar7 = local_188;
  }
  *ppuVar4 = (undefined *)local_188;
  local_200 = (undefined **)PTR_DAT_004fed98;
  local_1fc = (undefined **)local_13c;
  local_1f8 = local_40;
  local_1f4 = local_1b8;
  local_3c = ppuVar4;
  FUN_0008e7bc();
  local_1f0[1] = 1;
  local_1f0[2] = 1;
  piVar2 = local_1f0;
  if (*(int *)PTR_DAT_004fed5c != 0) {
    piVar2 = (int *)FUN_00098688();
    *piVar7 = (int)local_3c;
    piVar7[1] = *piVar2;
  }
  *piVar2 = (int)local_3c;
  local_140 = *(undefined4 *)(local_150 + 0x1c);
  local_200 = (undefined **)PTR_DAT_004fed9c;
  local_1fc = (undefined **)&SUB_0000000c;
  FUN_00313ba4(local_150);
  local_40 = local_1f8;
  local_1b8 = local_1f4;
  local_200 = (undefined **)PTR_DAT_004fed58;
  FUN_0001eed8();
  local_3c = local_1fc;
  local_1fc[1] = (undefined *)0x3;
  *local_1fc = PTR_DAT_004feda0;
  local_200 = (undefined **)PTR_DAT_004fed98;
  local_1fc = (undefined **)local_140;
  local_1f8 = local_40;
  local_1f4 = local_1b8;
  FUN_0008e7bc();
  local_1f0[1] = 1;
  local_1f0[2] = 1;
  piVar2 = local_1f0;
  if (*(int *)PTR_DAT_004fed5c != 0) {
    piVar2 = (int *)FUN_00098688();
    *piVar7 = (int)local_3c;
    piVar7[1] = *piVar2;
  }
  *piVar2 = (int)local_3c;
  local_44 = *(undefined4 *)(local_150 + 0x1c);
  local_200 = (undefined **)PTR_DAT_004feda4;
  local_1fc = (undefined **)&SUB_0000000c;
  FUN_00313ba4(local_150);
  local_40 = local_1f8;
  local_1b8 = local_1f4;
  local_200 = (undefined **)PTR_DAT_004fed58;
  FUN_0001eed8();
  local_1fc[1] = (undefined *)local_1c4;
  ppuVar4 = local_1fc;
  if (*(int *)PTR_DAT_004fed5c != 0) {
    ppuVar4 = (undefined **)FUN_00098678();
    *piVar7 = local_180;
  }
  *ppuVar4 = (undefined *)local_180;
  local_200 = (undefined **)PTR_DAT_004fed98;
  local_1fc = (undefined **)local_44;
  local_1f8 = local_40;
  local_1f4 = local_1b8;
  local_3c = ppuVar4;
  FUN_0008e7bc();
  local_1f0[1] = 1;
  local_1f0[2] = 1;
  piVar2 = local_1f0;
  if (*(int *)PTR_DAT_004fed5c != 0) {
    piVar2 = (int *)FUN_00098688();
    *piVar7 = (int)local_3c;
    piVar7[1] = *piVar2;
  }
  *piVar2 = (int)local_3c;
  local_144 = *(undefined4 *)(local_150 + 0x1c);
  local_200 = (undefined **)PTR_s_XX_NoncedeviceIdErrCode__error__c_0077568d_0x1c8_004feda8;
  local_1fc = (undefined **)&DAT_00000008;
  FUN_00313ba4(local_150);
  local_40 = local_1f8;
  local_1b8 = local_1f4;
  local_200 = (undefined **)PTR_DAT_004fed58;
  FUN_0001eed8();
  local_1fc[1] = (undefined *)local_1bc;
  ppuVar4 = local_1fc;
  if (*(int *)PTR_DAT_004fed5c != 0) {
    ppuVar4 = (undefined **)FUN_00098678();
    *piVar7 = (int)local_14c;
  }
  *ppuVar4 = (undefined *)local_14c;
  local_200 = (undefined **)PTR_DAT_004ff3d4;
  local_1fc = (undefined **)local_144;
  local_1f8 = local_40;
  local_1f4 = local_1b8;
  local_3c = ppuVar4;
  FUN_0008e7bc();
  uVar8 = CONCAT44(1,local_1f0);
  local_1f0[1] = 1;
  local_1f0[2] = 1;
  if (*(int *)PTR_DAT_004ff3d8 != 0) {
    uVar8 = FUN_00098688();
    *piVar7 = (int)local_3c;
    piVar7[1] = *(int *)uVar8;
  }
  local_1f0 = (int *)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)uVar8 = local_3c;
  local_200 = &local_2c;
  local_1fc = (undefined **)0x5;
  local_1f8 = (undefined **)0x5;
  local_1f4 = PTR_DAT_004ff3dc;
  FUN_00147454();
  local_200 = local_1ec;
  local_1fc = (undefined **)local_1e8;
  printerApi_service_aidetect_Md5();
  local_1d0 = local_1f4;
  local_148 = *(undefined ***)(local_150 + 0x1c);
  local_18c = local_1f8;
  local_200 = (undefined **)PTR_DAT_004ff3e0;
  local_1fc = (undefined **)&SUB_0000000c;
  FUN_00313ba4(local_1f4);
  local_40 = local_1f8;
  local_1b8 = local_1f4;
  local_200 = (undefined **)PTR_DAT_004ff3e4;
  FUN_0001eed8();
  local_1fc[1] = local_1d0;
  ppuVar4 = local_1fc;
  if (*(int *)PTR_DAT_004ff3d8 != 0) {
    ppuVar4 = (undefined **)FUN_00098678();
    *piVar7 = (int)local_18c;
  }
  *ppuVar4 = (undefined *)local_18c;
  local_200 = (undefined **)PTR_DAT_004ff3d4;
  local_1fc = local_148;
  local_1f8 = local_40;
  local_1f4 = local_1b8;
  local_3c = ppuVar4;
  FUN_0008e7bc();
  local_1f0[1] = 1;
  local_1f0[2] = 1;
  piVar2 = local_1f0;
  if (*(int *)PTR_DAT_004ff3d8 != 0) {
    piVar2 = (int *)FUN_00098688();
    *piVar7 = (int)local_3c;
    piVar7[1] = *piVar2;
  }
  *piVar2 = (int)local_3c;
  local_200 = (undefined **)PTR_DAT_004ff3e8;
  FUN_0001eed8();
  local_138 = local_1fc;
  local_200 = (undefined **)PTR_DAT_004ff3ec;
  FUN_0001eed8();
  local_48 = local_1fc;
  local_200 = (undefined **)PTR_DAT_004ff3f0;
  FUN_0001eed8();
  *(undefined1 *)(local_1fc + 0x14) = 1;
  ppuVar4 = local_1fc;
  if (*(int *)PTR_DAT_004ff3d8 != 0) {
    ppuVar4 = (undefined **)FUN_00098688();
    *piVar7 = (int)ppuVar4;
    piVar7[1] = (int)local_48[0x1f];
  }
  local_48[0x1f] = (undefined *)ppuVar4;
  local_48[0x20] = DAT_004ff3f4;
  local_48[0x21] = (undefined *)0x2;
  puVar6 = DAT_004ff3f8;
  local_48[0x26] = DAT_004ff3f8;
  local_48[0x27] = (undefined *)0x6;
  local_48[0x28] = puVar6;
  local_48[0x29] = (undefined *)0x6;
  local_48[0x2a] = DAT_004ff3fc;
  local_48[0x2b] = (undefined *)0x0;
  local_200 = DAT_004ff400;
  FUN_0001eed8();
  local_4c = local_1fc;
  *local_1fc = DAT_004ff404;
  local_200 = DAT_004ff408;
  FUN_0001eed8();
  *local_1fc = DAT_004ff3f4;
  local_1fc[1] = (undefined *)0x2;
  *(undefined1 *)(local_1fc + 0xe) = 1;
  local_1fc[0xf] = DAT_004ff40c;
  local_1fc[0x10] = (undefined *)0x1;
  local_1fc[0x11] = DAT_004ff410;
  local_1fc[0x12] = (undefined *)0x0;
  local_1fc[0x13] = (undefined *)0x3;
  ppuVar4 = local_1fc;
  if (*(int *)PTR_DAT_004ff3d8 != 0) {
    local_50 = local_1fc;
    iVar3 = FUN_000986a8();
    *piVar7 = iVar3;
    piVar7[1] = (int)local_4c[1];
    piVar7[2] = (int)local_4c;
    piVar7[3] = (int)local_48[0x1b];
    local_200 = (undefined **)PTR_DAT_004ff3e8;
    local_1fc = local_138;
    FUN_000228e8();
    ppuVar4 = local_50;
  }
  local_4c[1] = (undefined *)ppuVar4;
  local_48[0x1b] = (undefined *)local_4c;
  FUN_00098a1c(0,local_138);
  ppuVar4 = local_138;
  local_138[5] = DAT_004ff3f8;
  local_138[6] = (undefined *)0x6;
  *local_138 = PTR_DAT_004ff414;
  puVar6 = extraout_r3;
  if (*(int *)PTR_DAT_004ff3d8 != 0) {
    FUN_00098688();
    *piVar7 = (int)extraout_r3_00;
    piVar7[1] = (int)ppuVar4[1];
    puVar6 = extraout_r3_00;
  }
  ppuVar4[1] = puVar6;
  local_200 = ppuVar4;
  local_1fc = (undefined **)local_150;
  FUN_00343318();
  in_stack_00000060 = (undefined **)local_1f4;
  in_stack_00000064 = (undefined **)local_1f0;
  if (local_1f4 != (undefined *)0x0) {
    uVar1 = FUN_0004fb3c();
    FUN_00098dbc(uVar1,local_4,&stack0x00000020);
    return;
  }
  local_190 = local_1f8;
  local_34 = local_1f8[8];
  local_30 = local_1f8[9];
  local_38 = PTR_printerApi_service_aidetect___cloud__GeneratePreSignUrl_deferwrap1_004ff418;
  local_1a0 = &local_38;
  local_200 = apuStack_1ac;
  iVar3 = FUN_0004f500();
  if (iVar3 != 0) {
    uVar1 = FUN_0004fb3c();
    FUN_00098dbc(uVar1,local_4,&stack0x00000020);
    return;
  }
  if (local_190[2] != (undefined *)0xc8) {
    local_6c = (undefined *)0x0;
    local_68 = (undefined *)0x0;
    local_200 = (undefined **)local_190[2];
    FUN_0001cec0();
    local_6c = PTR_DAT_004ff430;
    local_68 = (undefined *)local_1fc;
    local_200 = (undefined **)PTR_DAT_004ff434;
    local_1fc = (undefined **)0x19;
    local_1f8 = &local_6c;
    local_1f4 = (undefined *)0x1;
    local_1f0 = (int *)0x1;
    FUN_00130144();
    in_stack_00000060 = local_1ec;
    in_stack_00000064 = (undefined **)local_1e8;
    uVar1 = FUN_0004fb3c();
    FUN_00098dbc(uVar1,local_4,&stack0x00000020);
    return;
  }
  local_1fc = (undefined **)local_190[9];
  local_200 = (undefined **)0x0;
  if (local_190[8] != (undefined *)0x0) {
    local_1fc = *(undefined ***)(local_190[8] + 4);
    local_200 = (undefined **)PTR_DAT_004ff41c;
    local_40 = (undefined **)local_190[9];
    FUN_0001cf8c();
    local_1fc = local_40;
    local_200 = local_1f8;
  }
  FUN_000e4e18();
  in_stack_00000060 = local_1ec;
  in_stack_00000064 = (undefined **)local_1e8;
  if (local_1ec != (undefined **)0x0) {
    uVar1 = FUN_0004fb3c();
    FUN_00098dbc(uVar1,local_4,&stack0x00000020);
    return;
  }
  local_200 = local_1f8;
  local_1fc = (undefined **)local_1f4;
  local_1f8 = (undefined **)local_1f0;
  local_1f4 = PTR_DAT_004ff420;
  local_1f0 = local_4;
  FUN_0016a168();
  in_stack_00000060 = local_1ec;
  in_stack_00000064 = (undefined **)local_1e8;
  if (local_1ec != (undefined **)0x0) {
    uVar1 = FUN_0004fb3c();
    FUN_00098dbc(uVar1,local_4,&stack0x00000020);
    return;
  }
  if (*local_4 != 1) {
    local_1f4 = (undefined *)local_4[1];
    local_1f0 = (int *)local_4[2];
    local_200 = (undefined **)0x0;
    local_1fc = (undefined **)PTR_DAT_004ff424;
    local_1f8 = (undefined **)0x16;
    FUN_000715a4();
    local_1c0 = local_1e8;
    local_17c = local_1ec;
    local_200 = (undefined **)PTR_DAT_004ff428;
    FUN_0001eed8();
    local_1fc[1] = (undefined *)local_1c0;
    ppuVar4 = local_1fc;
    if (*(int *)PTR_DAT_004ff3d8 != 0) {
      ppuVar4 = (undefined **)FUN_00098678();
      *piVar7 = (int)local_17c;
    }
    *ppuVar4 = (undefined *)local_17c;
    in_stack_00000060 = (undefined **)PTR_DAT_004ff42c;
    in_stack_00000064 = ppuVar4;
    uVar1 = FUN_0004fb3c();
    FUN_00098dbc(uVar1,local_4,&stack0x00000020);
    return;
  }
  in_stack_00000060 = (undefined **)0x0;
  in_stack_00000064 = (undefined **)0x0;
  uVar1 = FUN_0004fb3c();
  FUN_00098dbc(uVar1,local_4,&stack0x00000020);
  return;
}



/* printerApi/service/aidetect.(*cloud).GeneratePreSignUrl.deferwrap1 @ 004ff438 (size 92) */

void printerApi_service_aidetect___cloud__GeneratePreSignUrl_deferwrap1(void)

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
  auStack_c[0] = *(undefined4 *)(unaff_r7 + 8);
  (**(code **)(*(int *)(unaff_r7 + 4) + 0xc))();
  return;
}



/* printerApi/service/aidetect.urlValueToSignatureStr @ 004ff494 (size 1380) */

/* WARNING: Removing unreachable block (ram,0x004ff73c) */

void printerApi_service_aidetect_urlValueToSignatureStr(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int extraout_r2;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  int extraout_r3;
  uint unaff_r4;
  int unaff_r5;
  uint *unaff_r8;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  int iVar11;
  undefined1 uVar12;
  
  while ((undefined1 *)((int)register0x00000054 + -0x30) <= *(undefined1 **)(unaff_r10 + 8)) {
LAB_004ff9ec:
    unaff_lr = 0x4ff9f4;
    param_1 = FUN_00096bb8(param_1);
  }
  puVar10 = (undefined1 *)((int)register0x00000054 + -0xb0);
  *(undefined4 *)((int)register0x00000054 + -0xb0) = unaff_lr;
  if (*(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0) {
    *(undefined4 *)((int)register0x00000054 + 8) = 0;
    *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
                    /* WARNING: Could not recover jumptable at 0x004ff53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((int)register0x00000054 + -0xb0))();
    return;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x44) = 0;
  uVar3 = **(undefined4 **)((int)register0x00000054 + 4);
  *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar3;
  *(undefined **)((int)register0x00000054 + -0xac) = PTR_SUB_004ff9fc;
  *(undefined4 *)((int)register0x00000054 + -0xa8) = 0;
  *(undefined4 *)((int)register0x00000054 + -0xa4) = uVar3;
  FUN_000933e8();
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0xa0);
  FUN_00098a08(0,(undefined1 *)((int)register0x00000054 + -0x30));
  *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_004ffa00;
  *(undefined4 *)((int)register0x00000054 + -0xa8) = *(undefined4 *)((int)register0x00000054 + 4);
  *(undefined1 **)((int)register0x00000054 + -0xa4) =
       (undefined1 *)((int)register0x00000054 + -0x30);
  FUN_0008c560();
  iVar1 = *(int *)((int)register0x00000054 + -0x34);
  uVar2 = *(uint *)((int)register0x00000054 + -0x7c);
  iVar4 = 0;
  while (puVar7 = *(uint **)((int)register0x00000054 + -0x30), puVar7 != (uint *)0x0) {
    uVar5 = iVar4 + 1;
    unaff_r4 = *puVar7;
    uVar8 = puVar7[1];
    if (uVar2 < uVar5) {
      *(uint *)((int)register0x00000054 + -0x74) = uVar8;
      *(uint *)((int)register0x00000054 + -0x54) = unaff_r4;
      *(int *)((int)register0x00000054 + -0xac) = iVar1;
      *(uint *)((int)register0x00000054 + -0xa8) = uVar5;
      *(uint *)((int)register0x00000054 + -0xa4) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 1;
      *(undefined **)((int)register0x00000054 + -0x9c) = PTR_SUB_004ff9fc;
      FUN_00093524();
      iVar1 = *(int *)((int)register0x00000054 + -0x98);
      uVar5 = *(uint *)((int)register0x00000054 + -0x94);
      uVar2 = *(uint *)((int)register0x00000054 + -0x90);
      uVar8 = *(uint *)((int)register0x00000054 + -0x74);
      unaff_r4 = *(uint *)((int)register0x00000054 + -0x54);
    }
    *(uint *)((int)register0x00000054 + -0x80) = uVar5;
    *(uint *)((int)register0x00000054 + -0x7c) = uVar2;
    unaff_r5 = uVar5 - 1;
    *(uint *)(iVar1 + unaff_r5 * 8 + 4) = uVar8;
    if (*(int *)PTR_DAT_004ffa04 != 0) {
      iVar1 = FUN_00098688();
      *unaff_r8 = unaff_r4;
      unaff_r8[1] = *(uint *)(iVar1 + unaff_r5 * 8);
    }
    *(int *)((int)register0x00000054 + -0x5c) = iVar1;
    *(uint *)(iVar1 + unaff_r5 * 8) = unaff_r4;
    *(undefined1 **)((int)register0x00000054 + -0xac) =
         (undefined1 *)((int)register0x00000054 + -0x30);
    FUN_0008c7c4();
    iVar1 = *(int *)((int)register0x00000054 + -0x5c);
    uVar2 = *(uint *)((int)register0x00000054 + -0x7c);
    iVar4 = *(int *)((int)register0x00000054 + -0x80);
  }
  *(int *)((int)register0x00000054 + -0x38) = iVar1;
  *(int *)((int)register0x00000054 + -0x80) = iVar4;
  *(int *)((int)register0x00000054 + -0xac) = iVar1;
  *(int *)((int)register0x00000054 + -0xa8) = iVar4;
  *(uint *)((int)register0x00000054 + -0xa4) = uVar2;
  FUN_0019ae40();
  iVar1 = 0;
  do {
    if (*(int *)((int)register0x00000054 + -0x80) <= iVar1) {
      iVar1 = *(int *)((int)register0x00000054 + -0x4c);
      if (*(uint *)((int)register0x00000054 + -0x48) <= (uint)-iVar1) {
        *(int *)((int)register0x00000054 + 8) = iVar1;
        *(uint *)((int)register0x00000054 + 0xc) = *(uint *)((int)register0x00000054 + -0x48);
        return;
      }
      if (iVar1 != 0) {
        FUN_00085954();
      }
      uVar2 = FUN_00085994();
      iVar1 = extraout_r2;
      iVar4 = extraout_r3;
      goto LAB_004ff6b8;
    }
    *(int *)((int)register0x00000054 + -100) = iVar1;
    uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x38) + iVar1 * 8);
    *(undefined4 *)((int)register0x00000054 + -0x58) = uVar3;
    uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x38) + iVar1 * 8 + 4);
    *(undefined4 *)((int)register0x00000054 + -0x78) = uVar9;
    *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_004ffa00;
    unaff_r5 = *(int *)((int)register0x00000054 + 4);
    *(int *)((int)register0x00000054 + -0xa8) = unaff_r5;
    *(undefined4 *)((int)register0x00000054 + -0xa4) = uVar3;
    *(undefined4 *)((int)register0x00000054 + -0xa0) = uVar9;
    FUN_00021c74();
    iVar4 = **(int **)((int)register0x00000054 + -0x9c);
    *(int *)((int)register0x00000054 + -0x60) = iVar4;
    iVar1 = (*(int **)((int)register0x00000054 + -0x9c))[1];
    *(int *)((int)register0x00000054 + -0x88) = iVar1;
    iVar6 = *(int *)((int)register0x00000054 + -0x78);
    uVar3 = *(undefined4 *)((int)register0x00000054 + -0x58);
    unaff_r4 = 0;
    while ((int)unaff_r4 < iVar1) {
      *(uint *)((int)register0x00000054 + -0x68) = unaff_r4;
      unaff_r5 = *(int *)(iVar4 + unaff_r4 * 8 + 4);
      *(int *)((int)register0x00000054 + -0x84) = unaff_r5;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = *(undefined4 *)(iVar4 + unaff_r4 * 8);
      if (*(int *)((int)register0x00000054 + -0x48) != 0) {
        if (*(uint **)((int)register0x00000054 + -0x50) == (uint *)0x0) {
          *(undefined1 **)((int)register0x00000054 + -0x50) =
               (undefined1 *)((int)register0x00000054 + -0x50);
LAB_004ff764:
          uVar2 = *(int *)((int)register0x00000054 + -0x48) + 1;
          iVar1 = *(int *)((int)register0x00000054 + -0x4c);
          if (*(uint *)((int)register0x00000054 + -0x44) < uVar2) {
            *(int *)((int)register0x00000054 + -0xac) = iVar1;
            *(uint *)((int)register0x00000054 + -0xa8) = uVar2;
            *(uint *)((int)register0x00000054 + -0xa4) = *(uint *)((int)register0x00000054 + -0x44);
            *(undefined4 *)((int)register0x00000054 + -0xa0) = 1;
            *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_004ffa08;
            FUN_00093524();
            iVar1 = *(int *)((int)register0x00000054 + -0x98);
            uVar2 = *(uint *)((int)register0x00000054 + -0x94);
            *(undefined4 *)((int)register0x00000054 + -0x44) =
                 *(undefined4 *)((int)register0x00000054 + -0x90);
            *(int *)((int)register0x00000054 + -0x4c) = iVar1;
            iVar4 = *(int *)((int)register0x00000054 + -0x60);
            iVar6 = *(int *)((int)register0x00000054 + -0x78);
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x58);
            unaff_r4 = *(uint *)((int)register0x00000054 + -0x68);
            unaff_r5 = *(int *)((int)register0x00000054 + -0x84);
          }
          *(uint *)((int)register0x00000054 + -0x48) = uVar2;
          *(undefined1 *)(iVar1 + (uVar2 - 1)) = 0x26;
          goto LAB_004ff7e4;
        }
        unaff_r8 = (uint *)((int)register0x00000054 + -0x50);
        if (*(uint **)((int)register0x00000054 + -0x50) == unaff_r8) goto LAB_004ff764;
        uVar12 = 0;
LAB_004ff9d4:
        *(undefined **)((int)register0x00000054 + -0xac) = PTR_SUB_004ff9fc;
        *(undefined **)((int)register0x00000054 + -0xa8) = PTR_DAT_004ffa18;
        param_1 = FUN_00090814();
        register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xb0);
        if ((bool)uVar12) {
          register0x00000054 = (BADSPACEBASE *)puVar10;
        }
        goto LAB_004ff9ec;
      }
LAB_004ff7e4:
      unaff_r8 = (uint *)&DAT_00000026;
      if (*(undefined1 **)((int)register0x00000054 + -0x50) != (undefined1 *)0x0) {
        if (*(undefined1 **)((int)register0x00000054 + -0x50) ==
            (undefined1 *)((int)register0x00000054 + -0x50)) goto LAB_004ff80c;
        uVar12 = 0;
LAB_004ff9c0:
        *(undefined **)((int)register0x00000054 + -0xac) = PTR_SUB_004ff9fc;
        *(undefined **)((int)register0x00000054 + -0xa8) = PTR_DAT_004ffa14;
        FUN_00090814();
        goto LAB_004ff9d4;
      }
      *(undefined1 **)((int)register0x00000054 + -0x50) =
           (undefined1 *)((int)register0x00000054 + -0x50);
LAB_004ff80c:
      uVar2 = *(uint *)((int)register0x00000054 + -0x44);
      iVar1 = *(int *)((int)register0x00000054 + -0x48);
      uVar5 = iVar1 + iVar6;
      iVar11 = *(int *)((int)register0x00000054 + -0x4c);
      if (uVar2 < uVar5) {
        *(int *)((int)register0x00000054 + -0x6c) = iVar1;
        *(int *)((int)register0x00000054 + -0xac) = iVar11;
        *(uint *)((int)register0x00000054 + -0xa8) = uVar5;
        *(uint *)((int)register0x00000054 + -0xa4) = uVar2;
        *(int *)((int)register0x00000054 + -0xa0) = iVar6;
        *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_004ffa08;
        FUN_00093524(PTR_DAT_004ffa08,iVar4);
        iVar11 = *(int *)((int)register0x00000054 + -0x98);
        uVar5 = *(uint *)((int)register0x00000054 + -0x94);
        uVar2 = *(uint *)((int)register0x00000054 + -0x90);
        iVar6 = *(int *)((int)register0x00000054 + -0x78);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x58);
        iVar1 = *(int *)((int)register0x00000054 + -0x6c);
      }
      *(uint *)((int)register0x00000054 + -0x6c) = uVar2;
      *(uint *)((int)register0x00000054 + -0x70) = uVar5;
      *(int *)((int)register0x00000054 + -0x40) = iVar11;
      *(int *)((int)register0x00000054 + -0xac) = iVar11 + iVar1;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = uVar3;
      *(int *)((int)register0x00000054 + -0xa4) = iVar6;
      FUN_00098ec8();
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + -0x6c);
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      if (*(undefined1 **)((int)register0x00000054 + -0x50) != (undefined1 *)0x0) {
        if (*(undefined1 **)((int)register0x00000054 + -0x50) ==
            (undefined1 *)((int)register0x00000054 + -0x50)) goto LAB_004ff8c0;
        uVar12 = 0;
LAB_004ff9ac:
        *(undefined **)((int)register0x00000054 + -0xac) = PTR_SUB_004ff9fc;
        *(undefined **)((int)register0x00000054 + -0xa8) = PTR_DAT_004ffa10;
        FUN_00090814();
        goto LAB_004ff9c0;
      }
      *(undefined1 **)((int)register0x00000054 + -0x50) =
           (undefined1 *)((int)register0x00000054 + -0x50);
LAB_004ff8c0:
      uVar2 = *(int *)((int)register0x00000054 + -0x48) + 1;
      iVar1 = *(int *)((int)register0x00000054 + -0x4c);
      if (*(uint *)((int)register0x00000054 + -0x44) < uVar2) {
        *(int *)((int)register0x00000054 + -0xac) = iVar1;
        *(uint *)((int)register0x00000054 + -0xa8) = uVar2;
        *(uint *)((int)register0x00000054 + -0xa4) = *(uint *)((int)register0x00000054 + -0x44);
        *(undefined4 *)((int)register0x00000054 + -0xa0) = 1;
        *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_004ffa08;
        FUN_00093524();
        iVar1 = *(int *)((int)register0x00000054 + -0x98);
        uVar2 = *(uint *)((int)register0x00000054 + -0x94);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
        *(int *)((int)register0x00000054 + -0x4c) = iVar1;
      }
      *(uint *)((int)register0x00000054 + -0x48) = uVar2;
      *(undefined1 *)(iVar1 + (uVar2 - 1)) = 0x3d;
      if (*(undefined1 **)((int)register0x00000054 + -0x50) == (undefined1 *)0x0) {
        *(undefined1 **)((int)register0x00000054 + -0x50) =
             (undefined1 *)((int)register0x00000054 + -0x50);
      }
      else {
        uVar12 = *(undefined1 **)((int)register0x00000054 + -0x50) ==
                 (undefined1 *)((int)register0x00000054 + -0x50);
        if (!(bool)uVar12) {
          *(undefined **)((int)register0x00000054 + -0xac) = PTR_SUB_004ff9fc;
          *(undefined **)((int)register0x00000054 + -0xa8) = PTR_DAT_004ffa0c;
          FUN_00090814();
          goto LAB_004ff9ac;
        }
      }
      uVar2 = *(uint *)((int)register0x00000054 + -0x44);
      iVar1 = *(int *)((int)register0x00000054 + -0x48);
      iVar4 = *(int *)((int)register0x00000054 + -0x84);
      unaff_r4 = iVar4 + iVar1;
      unaff_r5 = *(int *)((int)register0x00000054 + -0x4c);
      if (uVar2 < unaff_r4) {
        *(int *)((int)register0x00000054 + -0x6c) = iVar1;
        *(int *)((int)register0x00000054 + -0xac) = unaff_r5;
        *(uint *)((int)register0x00000054 + -0xa8) = unaff_r4;
        *(uint *)((int)register0x00000054 + -0xa4) = uVar2;
        *(int *)((int)register0x00000054 + -0xa0) = iVar4;
        *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_004ffa08;
        FUN_00093524();
        unaff_r5 = *(int *)((int)register0x00000054 + -0x98);
        unaff_r4 = *(uint *)((int)register0x00000054 + -0x94);
        uVar2 = *(uint *)((int)register0x00000054 + -0x90);
        iVar1 = *(int *)((int)register0x00000054 + -0x6c);
        iVar4 = *(int *)((int)register0x00000054 + -0x84);
      }
LAB_004ff6b8:
      *(uint *)((int)register0x00000054 + -0x6c) = uVar2;
      *(uint *)((int)register0x00000054 + -0x70) = unaff_r4;
      *(int *)((int)register0x00000054 + -0x40) = unaff_r5;
      *(int *)((int)register0x00000054 + -0xac) = unaff_r5 + iVar1;
      *(undefined4 *)((int)register0x00000054 + -0xa8) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      *(int *)((int)register0x00000054 + -0xa4) = iVar4;
      FUN_00098ec8();
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + -0x6c);
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      iVar1 = *(int *)((int)register0x00000054 + -0x88);
      iVar4 = *(int *)((int)register0x00000054 + -0x60);
      iVar6 = *(int *)((int)register0x00000054 + -0x78);
      uVar3 = *(undefined4 *)((int)register0x00000054 + -0x58);
      unaff_r4 = *(int *)((int)register0x00000054 + -0x68) + 1;
    }
    iVar1 = *(int *)((int)register0x00000054 + -100) + 1;
  } while( true );
}



/* printerApi/service/aidetect.(*cloud).ResourceUploadReport @ 004ffa1c (size 4628) */

void printerApi_service_aidetect___cloud__ResourceUploadReport(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined *extraout_r3;
  undefined *extraout_r3_00;
  undefined *puVar6;
  int *unaff_r8;
  int *piVar7;
  int unaff_r10;
  undefined8 uVar8;
  undefined4 *in_stack_00000004;
  undefined **in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined *in_stack_00000018;
  undefined *in_stack_0000001c;
  undefined *in_stack_00000020;
  undefined *in_stack_00000024;
  undefined **in_stack_00000028;
  int *in_stack_0000002c;
  int in_stack_00000030;
  undefined **local_228;
  undefined **local_224;
  undefined **local_220;
  undefined **local_21c;
  int *local_218;
  undefined **local_214;
  int *local_210;
  undefined **local_20c;
  undefined *local_208;
  uint local_204;
  undefined **local_200;
  undefined *apuStack_1fc [8];
  uint local_1dc;
  int *local_1d8;
  int *local_1d4;
  undefined *local_1d0;
  int local_1cc;
  undefined *local_1c8;
  uint local_1c4;
  int local_1c0;
  int local_1bc;
  undefined *local_1b8;
  int local_1b4;
  uint local_1b0;
  undefined *apuStack_1ac [3];
  undefined **local_1a0;
  undefined4 local_194;
  undefined **local_190;
  int local_18c;
  undefined **local_188;
  undefined **local_184;
  int local_180;
  undefined *local_17c;
  int local_178;
  undefined **local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  int local_164;
  uint local_15c;
  uint local_158;
  uint local_154;
  int local_150;
  undefined *local_148;
  undefined **local_144;
  undefined4 local_140;
  int *local_13c;
  undefined **local_138;
  undefined **local_134;
  undefined **local_130;
  undefined **local_12c;
  undefined **local_128;
  undefined **local_124;
  undefined *local_120;
  undefined *local_11c;
  undefined *local_118;
  undefined *local_114;
  undefined4 local_110;
  int local_104;
  uint local_100;
  undefined **local_fc;
  int local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 auStack_ec [172];
  undefined *local_40 [2];
  undefined **local_38;
  undefined1 *local_34;
  undefined4 local_24;
  undefined *local_20;
  undefined1 auStack_1c [20];
  int *local_8;
  undefined **local_4;
  
  while (apuStack_1ac <= *(undefined ***)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_8 = (int *)0x0;
  local_228 = (undefined **)PTR_DAT_00500318;
  FUN_0001eed8();
  local_8 = (int *)local_224;
  uVar1 = FUN_00098a1c(0,local_40);
  FUN_0009898c(uVar1,auStack_ec);
  local_34 = auStack_ec;
  FUN_00065dd4();
  local_38 = local_228;
  local_228 = (undefined **)PTR_DAT_0050031c;
  FUN_0001eed8();
  local_224[1] = (undefined *)in_stack_00000014;
  if (*(int *)PTR_DAT_00500320 != 0) {
    local_224 = (undefined **)FUN_00098678();
    *unaff_r8 = in_stack_00000010;
  }
  *local_224 = (undefined *)in_stack_00000010;
  local_228 = (undefined **)PTR_DAT_00500324;
  local_220 = (undefined **)PTR_s_deviceIdErrCode__error__ctrlType_0077568d_0x1d0_00500328;
  local_21c = (undefined **)0x8;
  local_124 = local_224;
  local_224 = local_40;
  FUN_0008e7bc();
  local_218[1] = 1;
  local_218[2] = 1;
  piVar7 = local_218;
  if (*(int *)PTR_DAT_00500320 != 0) {
    piVar7 = (int *)FUN_00098688();
    *unaff_r8 = (int)local_124;
    unaff_r8[1] = *piVar7;
  }
  *piVar7 = (int)local_124;
  local_228 = (undefined **)PTR_DAT_0050031c;
  FUN_0001eed8();
  local_224[1] = in_stack_0000001c;
  if (*(int *)PTR_DAT_00500320 != 0) {
    local_224 = (undefined **)FUN_00098678();
    *unaff_r8 = (int)in_stack_00000018;
  }
  *local_224 = in_stack_00000018;
  local_228 = (undefined **)PTR_DAT_00500324;
  local_220 = (undefined **)PTR_DAT_0050032c;
  local_21c = (undefined **)0x6;
  local_124 = local_224;
  local_224 = local_40;
  FUN_0008e7bc();
  local_218[1] = 1;
  local_218[2] = 1;
  piVar7 = local_218;
  if (*(int *)PTR_DAT_00500320 != 0) {
    piVar7 = (int *)FUN_00098688();
    *unaff_r8 = (int)local_124;
    unaff_r8[1] = *piVar7;
  }
  *piVar7 = (int)local_124;
  local_228 = (undefined **)PTR_DAT_0050031c;
  FUN_0001eed8();
  local_224[1] = in_stack_00000024;
  if (*(int *)PTR_DAT_00500320 != 0) {
    local_224 = (undefined **)FUN_00098678();
    *unaff_r8 = (int)in_stack_00000020;
  }
  *local_224 = in_stack_00000020;
  local_228 = (undefined **)PTR_DAT_00500324;
  local_220 = (undefined **)PTR_DAT_00500330;
  local_21c = (undefined **)0x3;
  local_124 = local_224;
  local_224 = local_40;
  FUN_0008e7bc();
  local_218[1] = 1;
  local_218[2] = 1;
  piVar7 = local_218;
  if (*(int *)PTR_DAT_00500320 != 0) {
    piVar7 = (int *)FUN_00098688();
    *unaff_r8 = (int)local_124;
    unaff_r8[1] = *piVar7;
  }
  *piVar7 = (int)local_124;
  local_224 = (undefined **)((int)in_stack_00000028 >> 0x1f);
  local_228 = in_stack_00000028;
  local_220 = (undefined **)0xa;
  FUN_000af250();
  local_1d4 = local_218;
  local_18c = (int)local_21c;
  local_228 = (undefined **)PTR_DAT_0050031c;
  FUN_0001eed8(local_218);
  local_224[1] = (undefined *)local_1d4;
  if (*(int *)PTR_DAT_00500320 != 0) {
    local_224 = (undefined **)FUN_00098678();
    *unaff_r8 = local_18c;
  }
  *local_224 = (undefined *)local_18c;
  local_228 = (undefined **)PTR_DAT_00500324;
  local_220 = (undefined **)PTR_DAT_00500334;
  local_21c = (undefined **)&DAT_0000000b;
  local_124 = local_224;
  local_224 = local_40;
  FUN_0008e7bc();
  local_218[1] = 1;
  local_218[2] = 1;
  piVar7 = local_218;
  if (*(int *)PTR_DAT_00500320 != 0) {
    piVar7 = (int *)FUN_00098688();
    *unaff_r8 = (int)local_124;
    unaff_r8[1] = *piVar7;
  }
  *piVar7 = (int)local_124;
  if (in_stack_00000030 < 2) {
    local_228 = (undefined **)PTR_DAT_0050031c;
    FUN_0001eed8();
    local_124 = local_224;
    local_224[1] = (undefined *)0x3;
    *local_224 = PTR_DAT_00500340;
    local_228 = (undefined **)PTR_DAT_00500324;
    local_224 = local_40;
    local_220 = (undefined **)PTR_DAT_0050033c;
    local_21c = (undefined **)0x10;
    FUN_0008e7bc();
    local_218[1] = 1;
    local_218[2] = 1;
    piVar7 = local_218;
    if (*(int *)PTR_DAT_00500320 != 0) {
      piVar7 = (int *)FUN_00098688();
      *unaff_r8 = (int)local_124;
      unaff_r8[1] = *piVar7;
    }
    *piVar7 = (int)local_124;
  }
  else {
    local_228 = (undefined **)*in_stack_0000002c;
    local_224 = (undefined **)((int)local_228 >> 0x1f);
    local_220 = (undefined **)0xa;
    FUN_000af250();
    local_228 = (undefined **)in_stack_0000002c[1];
    local_190 = local_21c;
    local_1d8 = local_218;
    local_224 = (undefined **)((int)local_228 >> 0x1f);
    local_220 = (undefined **)0xa;
    FUN_000af250();
    local_210 = local_218;
    local_214 = local_21c;
    local_228 = (undefined **)0x0;
    local_224 = local_190;
    local_220 = (undefined **)local_1d8;
    local_21c = (undefined **)PTR_DAT_00500338;
    local_218 = (int *)0x1;
    FUN_00071620();
    local_1c8 = local_208;
    local_17c = (undefined *)local_20c;
    local_228 = (undefined **)PTR_DAT_0050031c;
    FUN_0001eed8();
    local_224[1] = local_1c8;
    if (*(int *)PTR_DAT_00500320 != 0) {
      local_224 = (undefined **)FUN_00098678();
      *unaff_r8 = (int)local_17c;
    }
    *local_224 = local_17c;
    local_228 = (undefined **)PTR_DAT_00500324;
    local_220 = (undefined **)PTR_DAT_0050033c;
    local_21c = (undefined **)0x10;
    local_124 = local_224;
    local_224 = local_40;
    FUN_0008e7bc();
    local_218[1] = 1;
    local_218[2] = 1;
    piVar7 = local_218;
    if (*(int *)PTR_DAT_00500320 != 0) {
      piVar7 = (int *)FUN_00098688();
      *unaff_r8 = (int)local_124;
      unaff_r8[1] = *piVar7;
    }
    *piVar7 = (int)local_124;
  }
  local_228 = local_40;
  FUN_0028e0bc();
  local_228 = (undefined **)0x0;
  local_21c = (undefined **)PTR_DAT_00500344;
  local_218 = (int *)0x1a;
  local_214 = (undefined **)PTR_DAT_00500348;
  local_210 = (int *)0x1;
  local_20c = local_224;
  local_208 = (undefined *)local_220;
  local_224 = (undefined **)*in_stack_00000004;
  local_220 = (undefined **)in_stack_00000004[1];
  FUN_000716ac();
  local_228 = in_stack_00000008;
  local_224 = (undefined **)in_stack_0000000c;
  local_220 = (undefined **)PTR_DAT_0050034c;
  local_21c = (undefined **)0x4;
  local_218 = (int *)local_204;
  local_214 = local_200;
  local_210 = (int *)0x0;
  local_20c = (undefined **)0x0;
  FUN_0037fdd4();
  if (local_204 != 0) {
    FUN_0004fb3c();
    return;
  }
  local_148 = local_208;
  local_228 = (undefined **)0x8;
  local_224 = (undefined **)PTR_DAT_00500350;
  local_220 = (undefined **)0x3e;
  printerApi_common_utils_str_RandomStringWithCharset();
  local_194 = local_21c;
  local_1dc = (uint)local_218;
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,&local_228,auStack_1c);
  FUN_00098e14(uVar1,auStack_1c,&local_15c);
  if ((local_158 & 0x80000000) != 0) {
    uVar5 = (local_15c & 0x7fffffff) >> 0x1e | (local_15c >> 0x1f | local_158 << 1) << 1;
    local_154 = uVar5 + DAT_00500354;
    local_150 = ((local_158 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar5,DAT_00500354);
  }
  local_1b0 = (uint)((ulonglong)local_154 * 1000);
  local_1b4 = local_150 * 1000 + (int)((ulonglong)local_154 * 1000 >> 0x20);
  local_228 = (undefined **)(local_15c & 0x3fffffff);
  local_224 = (undefined **)0x0;
  local_220 = (undefined **)DAT_00500358;
  local_21c = (undefined **)0x0;
  FUN_00086d18();
  local_228 = (undefined **)((int)local_218 + local_1b0 + DAT_0050035c);
  local_224 = (undefined **)
              ((int)local_214 +
              (uint)CARRY4((int)local_218 + local_1b0,DAT_0050035c) +
              DAT_00500360 + (uint)CARRY4((uint)local_218,local_1b0) + local_1b4);
  local_220 = (undefined **)0x24;
  FUN_000af250();
  local_228 = (undefined **)0x0;
  local_224 = (undefined **)local_194;
  local_220 = (undefined **)local_1dc;
  FUN_000715a4();
  local_144 = local_214;
  local_1bc = (int)local_210;
  uVar1 = FUN_0010cf30();
  uVar1 = FUN_00098e14(uVar1,&local_228,auStack_1c);
  FUN_00098e14(uVar1,auStack_1c,&local_170);
  if ((local_16c & 0x80000000) != 0) {
    uVar5 = (local_170 & 0x7fffffff) >> 0x1e | (local_170 >> 0x1f | local_16c << 1) << 1;
    local_168 = uVar5 + DAT_00500354;
    local_164 = ((local_16c & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar5,DAT_00500354);
  }
  local_1b0 = (uint)((ulonglong)local_168 * 1000);
  local_1b4 = local_164 * 1000 + (int)((ulonglong)local_168 * 1000 >> 0x20);
  local_228 = (undefined **)(local_170 & 0x3fffffff);
  local_224 = (undefined **)0x0;
  local_220 = (undefined **)DAT_00500358;
  local_21c = (undefined **)0x0;
  FUN_00086d18();
  local_228 = (undefined **)((int)local_218 + local_1b0 + DAT_0050035c);
  local_224 = (undefined **)
              ((int)local_214 +
              (uint)CARRY4((int)local_218 + local_1b0,DAT_0050035c) +
              DAT_00500360 + (uint)CARRY4((uint)local_218,local_1b0) + local_1b4);
  local_220 = (undefined **)&DAT_0000000a;
  FUN_000af250();
  local_178 = (int)local_21c;
  local_1c4 = (uint)local_218;
  local_228 = local_40;
  printerApi_service_aidetect_urlValueToSignatureStr();
  local_218 = (int *)local_220;
  local_21c = local_224;
  local_228 = apuStack_1fc;
  local_224 = (undefined **)DAT_00500364;
  local_220 = (undefined **)0x1b;
  FUN_000715a4();
  uVar1 = FUN_00098a10(0,&local_114,local_210,local_214);
  local_110 = 4;
  local_114 = PTR_DAT_0050034c;
  local_100 = local_1c4;
  local_104 = local_178;
  local_f8 = local_1bc;
  local_fc = local_144;
  local_f4 = in_stack_00000004[4];
  local_f0 = in_stack_00000004[5];
  local_1cc = in_stack_00000004[3];
  piVar7 = *(int **)(local_148 + 0x1c);
  local_180 = in_stack_00000004[2];
  local_228 = DAT_00500368;
  local_224 = (undefined **)&DAT_00000008;
  local_13c = piVar7;
  FUN_00313ba4(uVar1);
  local_128 = local_220;
  local_1b8 = (undefined *)local_21c;
  local_228 = (undefined **)PTR_DAT_0050031c;
  FUN_0001eed8();
  local_224[1] = (undefined *)local_1cc;
  ppuVar4 = local_224;
  if (*(int *)PTR_DAT_00500320 != 0) {
    ppuVar4 = (undefined **)FUN_00098678();
    *piVar7 = local_180;
  }
  *ppuVar4 = (undefined *)local_180;
  local_228 = (undefined **)PTR_DAT_00500b3c;
  local_224 = (undefined **)local_13c;
  local_220 = local_128;
  local_21c = (undefined **)local_1b8;
  local_124 = ppuVar4;
  FUN_0008e7bc();
  local_218[1] = 1;
  local_218[2] = 1;
  piVar2 = local_218;
  if (*(int *)PTR_DAT_00500b40 != 0) {
    piVar2 = (int *)FUN_00098688();
    *piVar7 = (int)local_124;
    piVar7[1] = *piVar2;
  }
  *piVar2 = (int)local_124;
  local_12c = *(undefined ***)(local_148 + 0x1c);
  local_228 = (undefined **)PTR_DAT_00500b44;
  local_224 = (undefined **)&SUB_0000000c;
  FUN_00313ba4(local_148);
  local_128 = local_220;
  local_1b8 = (undefined *)local_21c;
  local_228 = (undefined **)PTR_DAT_00500b48;
  FUN_0001eed8();
  local_124 = local_224;
  local_224[1] = (undefined *)0x3;
  *local_224 = PTR_DAT_00500b4c;
  local_228 = (undefined **)PTR_DAT_00500b3c;
  local_224 = local_12c;
  local_220 = local_128;
  local_21c = (undefined **)local_1b8;
  FUN_0008e7bc();
  local_218[1] = 1;
  local_218[2] = 1;
  piVar2 = local_218;
  if (*(int *)PTR_DAT_00500b40 != 0) {
    piVar2 = (int *)FUN_00098688();
    *piVar7 = (int)local_124;
    piVar7[1] = *piVar2;
  }
  *piVar2 = (int)local_124;
  local_140 = *(undefined4 *)(local_148 + 0x1c);
  local_228 = (undefined **)PTR_DAT_00500b50;
  local_224 = (undefined **)&SUB_0000000c;
  FUN_00313ba4(local_148);
  local_128 = local_220;
  local_1b8 = (undefined *)local_21c;
  local_228 = (undefined **)PTR_DAT_00500b48;
  FUN_0001eed8();
  local_224[1] = (undefined *)local_1c4;
  ppuVar4 = local_224;
  if (*(int *)PTR_DAT_00500b40 != 0) {
    ppuVar4 = (undefined **)FUN_00098678();
    *piVar7 = local_178;
  }
  *ppuVar4 = (undefined *)local_178;
  local_228 = (undefined **)PTR_DAT_00500b3c;
  local_224 = (undefined **)local_140;
  local_220 = local_128;
  local_21c = (undefined **)local_1b8;
  local_124 = ppuVar4;
  FUN_0008e7bc();
  local_218[1] = 1;
  local_218[2] = 1;
  piVar2 = local_218;
  if (*(int *)PTR_DAT_00500b40 != 0) {
    piVar2 = (int *)FUN_00098688();
    *piVar7 = (int)local_124;
    piVar7[1] = *piVar2;
  }
  *piVar2 = (int)local_124;
  local_12c = *(undefined ***)(local_148 + 0x1c);
  local_228 = (undefined **)PTR_s_XX_NoncedeviceIdErrCode__error__c_0077568d_0x1c8_00500b54;
  local_224 = (undefined **)&DAT_00000008;
  FUN_00313ba4(local_148);
  local_128 = local_220;
  local_1b8 = (undefined *)local_21c;
  local_228 = (undefined **)PTR_DAT_00500b48;
  FUN_0001eed8();
  local_224[1] = (undefined *)local_1bc;
  ppuVar4 = local_224;
  if (*(int *)PTR_DAT_00500b40 != 0) {
    ppuVar4 = (undefined **)FUN_00098678();
    *piVar7 = (int)local_144;
  }
  *ppuVar4 = (undefined *)local_144;
  local_228 = (undefined **)PTR_DAT_00500b3c;
  local_224 = local_12c;
  local_220 = local_128;
  local_21c = (undefined **)local_1b8;
  local_124 = ppuVar4;
  FUN_0008e7bc();
  uVar8 = CONCAT44(1,local_218);
  local_218[1] = 1;
  local_218[2] = 1;
  if (*(int *)PTR_DAT_00500b40 != 0) {
    uVar8 = FUN_00098688();
    *piVar7 = (int)local_124;
    piVar7[1] = *(int *)uVar8;
  }
  local_218 = (int *)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)uVar8 = local_124;
  local_228 = &local_114;
  local_224 = (undefined **)0x5;
  local_220 = (undefined **)0x5;
  local_21c = (undefined **)PTR_DAT_00500b58;
  FUN_00147454();
  local_228 = local_214;
  local_224 = (undefined **)local_210;
  printerApi_service_aidetect_Md5();
  local_1d0 = (undefined *)local_21c;
  local_12c = *(undefined ***)(local_148 + 0x1c);
  local_184 = local_220;
  local_228 = (undefined **)PTR_DAT_00500b5c;
  local_224 = (undefined **)&SUB_0000000c;
  FUN_00313ba4(local_21c);
  local_128 = local_220;
  local_1b8 = (undefined *)local_21c;
  local_228 = (undefined **)PTR_DAT_00500b48;
  FUN_0001eed8();
  local_224[1] = local_1d0;
  ppuVar4 = local_224;
  if (*(int *)PTR_DAT_00500b40 != 0) {
    ppuVar4 = (undefined **)FUN_00098678();
    *piVar7 = (int)local_184;
  }
  *ppuVar4 = (undefined *)local_184;
  local_228 = (undefined **)PTR_DAT_00500b3c;
  local_224 = local_12c;
  local_220 = local_128;
  local_21c = (undefined **)local_1b8;
  local_124 = ppuVar4;
  FUN_0008e7bc();
  local_218[1] = 1;
  local_218[2] = 1;
  piVar2 = local_218;
  if (*(int *)PTR_DAT_00500b40 != 0) {
    piVar2 = (int *)FUN_00098688();
    *piVar7 = (int)local_124;
    piVar7[1] = *piVar2;
  }
  *piVar2 = (int)local_124;
  local_228 = (undefined **)PTR_DAT_00500b60;
  FUN_0001eed8();
  local_4 = local_224;
  local_228 = (undefined **)PTR_DAT_00500b64;
  FUN_0001eed8();
  local_130 = local_224;
  local_228 = (undefined **)PTR_DAT_00500b68;
  FUN_0001eed8();
  *(undefined1 *)(local_224 + 0x14) = 1;
  ppuVar4 = local_224;
  if (*(int *)PTR_DAT_00500b40 != 0) {
    ppuVar4 = (undefined **)FUN_00098688();
    *piVar7 = (int)ppuVar4;
    piVar7[1] = (int)local_130[0x1f];
  }
  local_130[0x1f] = (undefined *)ppuVar4;
  local_130[0x20] = DAT_00500b6c;
  local_130[0x21] = (undefined *)0x2;
  puVar6 = DAT_00500b70;
  local_130[0x26] = DAT_00500b70;
  local_130[0x27] = (undefined *)0x6;
  local_130[0x28] = puVar6;
  local_130[0x29] = (undefined *)0x6;
  local_130[0x2a] = DAT_00500b74;
  local_130[0x2b] = (undefined *)0x0;
  local_228 = DAT_00500b78;
  FUN_0001eed8();
  local_134 = local_224;
  *local_224 = DAT_00500b7c;
  local_228 = DAT_00500b80;
  FUN_0001eed8();
  *local_224 = DAT_00500b6c;
  local_224[1] = (undefined *)0x2;
  *(undefined1 *)(local_224 + 0xe) = 1;
  local_224[0xf] = DAT_00500b84;
  local_224[0x10] = (undefined *)0x1;
  local_224[0x11] = DAT_00500b88;
  local_224[0x12] = (undefined *)0x0;
  local_224[0x13] = (undefined *)0x3;
  ppuVar4 = local_224;
  if (*(int *)PTR_DAT_00500b40 != 0) {
    local_138 = local_224;
    iVar3 = FUN_000986a8();
    *piVar7 = iVar3;
    piVar7[1] = (int)local_134[1];
    piVar7[2] = (int)local_134;
    piVar7[3] = (int)local_130[0x1b];
    local_228 = (undefined **)PTR_DAT_00500b60;
    local_224 = local_4;
    FUN_000228e8();
    ppuVar4 = local_138;
  }
  local_134[1] = (undefined *)ppuVar4;
  local_130[0x1b] = (undefined *)local_134;
  FUN_00098a1c(0,local_4);
  ppuVar4 = local_4;
  local_4[5] = DAT_00500b70;
  local_4[6] = (undefined *)0x6;
  *local_4 = PTR_DAT_00500b8c;
  puVar6 = extraout_r3;
  if (*(int *)PTR_DAT_00500b40 != 0) {
    FUN_00098688();
    *piVar7 = (int)extraout_r3_00;
    piVar7[1] = (int)ppuVar4[1];
    puVar6 = extraout_r3_00;
  }
  ppuVar4[1] = puVar6;
  local_228 = ppuVar4;
  local_224 = (undefined **)local_148;
  FUN_00343318();
  if (local_21c != (undefined **)0x0) {
    FUN_0004fb3c();
    return;
  }
  local_188 = local_220;
  local_11c = local_220[8];
  local_118 = local_220[9];
  local_120 = PTR_printerApi_service_aidetect___cloud__ResourceUploadReport_deferwrap1_00500b90;
  local_1a0 = &local_120;
  local_228 = apuStack_1ac;
  iVar3 = FUN_0004f500();
  if (iVar3 != 0) {
    FUN_0004fb3c();
    return;
  }
  if (local_188[2] != (undefined *)0xc8) {
    local_24 = 0;
    local_20 = (undefined *)0x0;
    local_228 = (undefined **)local_188[2];
    FUN_0001cec0();
    local_24 = DAT_00500cf4;
    local_20 = (undefined *)local_224;
    local_228 = DAT_00500cf8;
    local_224 = (undefined **)0x19;
    local_220 = (undefined **)&local_24;
    local_21c = (undefined **)0x1;
    local_218 = (int *)0x1;
    FUN_00130144();
    FUN_0004fb3c();
    return;
  }
  local_224 = (undefined **)local_188[9];
  local_228 = (undefined **)0x0;
  if (local_188[8] != (undefined *)0x0) {
    local_224 = *(undefined ***)(local_188[8] + 4);
    local_228 = (undefined **)PTR_DAT_00500b94;
    local_128 = (undefined **)local_188[9];
    FUN_0001cf8c();
    local_224 = local_128;
    local_228 = local_220;
  }
  FUN_000e4e18();
  if (local_214 != (undefined **)0x0) {
    FUN_0004fb3c();
    return;
  }
  local_228 = local_220;
  local_224 = local_21c;
  local_220 = (undefined **)local_218;
  local_21c = (undefined **)PTR_DAT_00500b98;
  local_218 = local_8;
  FUN_0016a168();
  if (local_214 != (undefined **)0x0) {
    FUN_0004fb3c();
    return;
  }
  if (*local_8 != 1) {
    local_21c = (undefined **)local_8[1];
    local_218 = (int *)local_8[2];
    local_228 = (undefined **)0x0;
    local_224 = (undefined **)PTR_DAT_00500b9c;
    local_220 = (undefined **)0x16;
    FUN_000715a4();
    local_1c0 = (int)local_210;
    local_174 = local_214;
    local_228 = (undefined **)PTR_DAT_00500ba0;
    FUN_0001eed8();
    local_224[1] = (undefined *)local_1c0;
    ppuVar4 = local_224;
    if (*(int *)PTR_DAT_00500b40 != 0) {
      ppuVar4 = (undefined **)FUN_00098678();
      *piVar7 = (int)local_174;
    }
    *ppuVar4 = (undefined *)local_174;
    FUN_0004fb3c();
    return;
  }
  FUN_0004fb3c();
  return;
}



/* printerApi/service/aidetect.(*cloud).ResourceUploadReport.deferwrap1 @ 00500cfc (size 92) */

void printerApi_service_aidetect___cloud__ResourceUploadReport_deferwrap1(void)

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
  auStack_c[0] = *(undefined4 *)(unaff_r7 + 8);
  (**(code **)(*(int *)(unaff_r7 + 4) + 0xc))();
  return;
}



/* printerApi/service/aidetect.Md5 @ 00500d58 (size 504) */

void printerApi_service_aidetect_Md5(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  uint uVar7;
  uint extraout_r1;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int unaff_r10;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  undefined1 uVar14;
  undefined1 *puVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x98)) {
      puVar13 = (undefined1 *)((int)register0x00000054 + -0x118);
      *(undefined4 *)((int)register0x00000054 + -0x118) = unaff_lr;
      uVar3 = FUN_000989dc(0,(undefined1 *)((int)register0x00000054 + -0x60));
      *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_00500f54;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = DAT_00500f58;
      *(undefined4 *)((int)register0x00000054 + -0x58) = DAT_00500f5c;
      *(undefined4 *)((int)register0x00000054 + -0x54) = DAT_00500f60;
      *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xc) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -8) = uVar3;
      *(undefined1 **)((int)register0x00000054 + -0x114) =
           (undefined1 *)((int)register0x00000054 + -0xe4);
      *(undefined4 *)((int)register0x00000054 + -0x110) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x10c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      FUN_00071920();
      *(undefined1 **)((int)register0x00000054 + -0x114) =
           (undefined1 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x110) =
           *(undefined4 *)((int)register0x00000054 + -0x108);
      *(undefined4 *)((int)register0x00000054 + -0x10c) =
           *(undefined4 *)((int)register0x00000054 + -0x104);
      *(undefined4 *)((int)register0x00000054 + -0x108) =
           *(undefined4 *)((int)register0x00000054 + -0x100);
      uVar3 = FUN_002924a0();
      FUN_00098d84(uVar3,(undefined1 *)((int)register0x00000054 + -0x60),
                   (undefined1 *)((int)register0x00000054 + -0xbc));
      *(undefined1 **)((int)register0x00000054 + -0x114) =
           (undefined1 *)((int)register0x00000054 + -0xbc);
      FUN_0029279c();
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x110);
      puVar8 = (undefined1 *)((int)register0x00000054 + -0xf4);
      do {
        puVar5 = puVar6 + 1;
        *puVar8 = *puVar6;
        puVar6 = puVar5;
        puVar8 = puVar8 + 1;
      } while ((int)puVar5 <= (int)((int)register0x00000054 + -0x101));
      *(undefined4 *)((int)register0x00000054 + -0x114) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x110) = 0x10;
      *(undefined4 *)((int)register0x00000054 + -0x10c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x108) = 0x10;
      *(undefined4 *)((int)register0x00000054 + -0x104) = DAT_00500f64;
      FUN_00093524();
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x100);
      *(undefined4 *)((int)register0x00000054 + -0xc4) =
           *(undefined4 *)((int)register0x00000054 + -0xfc);
      *(undefined4 *)((int)register0x00000054 + -0x114) =
           *(undefined4 *)((int)register0x00000054 + -0x100);
      *(undefined1 **)((int)register0x00000054 + -0x110) =
           (undefined1 *)((int)register0x00000054 + -0xf4);
      *(undefined4 *)((int)register0x00000054 + -0x10c) = 0x10;
      FUN_00098ec8();
      iVar4 = *(int *)((int)register0x00000054 + -0xc4) << 1;
      *(int *)((int)register0x00000054 + -0xc0) = iVar4;
      *(undefined4 *)((int)register0x00000054 + -0x114) = DAT_00500f64;
      *(int *)((int)register0x00000054 + -0x110) = iVar4;
      *(int *)((int)register0x00000054 + -0x10c) = iVar4;
      FUN_000933e8();
      iVar9 = *(int *)((int)register0x00000054 + -0x108);
      iVar10 = *(int *)((int)register0x00000054 + -4);
      iVar11 = *(int *)((int)register0x00000054 + -0xc4);
      iVar4 = 0;
      uVar7 = 0;
      while( true ) {
        iVar2 = DAT_00500f68;
        if (iVar11 <= iVar4) {
          *(undefined4 *)((int)register0x00000054 + -0x114) = 0;
          *(int *)((int)register0x00000054 + -0x110) = iVar9;
          *(undefined4 *)((int)register0x00000054 + -0x10c) =
               *(undefined4 *)((int)register0x00000054 + -0xc0);
          FUN_00093e34();
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x108);
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x104);
          return;
        }
        bVar1 = *(byte *)(iVar10 + iVar4);
        uVar14 = uVar7 == iVar11 * 2;
        if ((uint)(iVar11 * 2) <= uVar7) goto LAB_00500f34;
        *(undefined1 *)(iVar9 + uVar7) = *(undefined1 *)(DAT_00500f68 + (uint)(bVar1 >> 4));
        uVar12 = uVar7 + 1;
        uVar14 = uVar12 == iVar11 * 2;
        if ((uint)(iVar11 * 2) <= uVar12) break;
        *(undefined1 *)(iVar9 + uVar12) = *(undefined1 *)(iVar2 + (bVar1 & 0xf));
        iVar4 = iVar4 + 1;
        uVar7 = uVar7 + 2;
      }
      FUN_000986f8(uVar12,*(undefined4 *)((int)register0x00000054 + -0xc0));
      uVar7 = extraout_r1;
LAB_00500f34:
      param_1 = FUN_000986f8(uVar7,*(undefined4 *)((int)register0x00000054 + -0xc0));
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x118);
      if ((bool)uVar14) {
        register0x00000054 = (BADSPACEBASE *)puVar13;
      }
    }
    unaff_lr = 0x500f4c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



