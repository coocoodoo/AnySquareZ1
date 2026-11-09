// rtwpriv — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== FUN_000100f4 @ 000100f4 size=16 ===== */

void FUN_000100f4(void)

{
  return;
}



/* ===== FUN_00010140 @ 00010140 size=16 ===== */

/* WARNING: Removing unreachable block (ram,0x00022b04) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00010140(void)

{
  bool bVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 ****ppppuVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int unaff_r4;
  code *pcVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  code *pcVar16;
  code *pcVar17;
  undefined1 auStack_1b0 [92];
  int iStack_154;
  int iStack_14c;
  int iStack_144;
  int iStack_13c;
  undefined1 auStack_138 [264];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 ***pppuStack_c;
  
  FUN_00021c14();
  pppuStack_c = (undefined4 ****)0x10148;
  uVar4 = FUN_00010140();
  pcVar16 = DAT_00010188;
  pcVar3 = DAT_00010184;
  uVar2 = DAT_00010180;
  iVar9 = DAT_00022b1c + 0x2277c;
  **(int **)(iVar9 + DAT_00022b20) = (int)&pppuStack_c;
  *(undefined4 *)(DAT_00022b24 + 0x227b4) = uVar4;
  ppppuVar7 = &pppuStack_c + unaff_r4 + 1;
  piVar8 = *(int **)(iVar9 + DAT_00022b28);
  *piVar8 = (int)ppppuVar7;
  if (ppppuVar7 == (undefined4 ****)pppuStack_c) {
    *piVar8 = (int)(&pppuStack_c + unaff_r4);
  }
  FUN_00020350(auStack_1b0,0,0x78);
  puVar13 = (uint *)**(undefined4 **)(iVar9 + DAT_00022b28);
  do {
    puVar14 = puVar13 + 1;
    uVar10 = *puVar13;
    puVar13 = puVar14;
  } while (uVar10 != 0);
  for (; uVar10 = *puVar14, uVar10 != 0; puVar14 = puVar14 + 2) {
    if (uVar10 < 0xf) {
      thunk_FUN_00029380(auStack_1b0 + uVar10 * 8,puVar14,8);
    }
  }
  FUN_0002309c(auStack_1b0);
  FUN_000225ec();
  *(undefined4 *)(DAT_00022b30 + 0x2284c) = **(undefined4 **)(iVar9 + DAT_00022b2c);
  pcVar12 = (code *)0x0;
  if (iStack_154 == -1) {
    iVar11 = FUN_00026b4c();
    iVar6 = FUN_00026b5c();
    if (iVar11 == iVar6) goto LAB_00022a38;
    goto LAB_000228ac;
  }
LAB_00022858:
  if (iStack_154 != -1) {
    if (iStack_154 != iStack_14c) goto LAB_000228ac;
    if (iStack_144 != iStack_13c) goto LAB_000228ac;
  }
  uVar4 = 0;
  iVar11 = DAT_00022b34 + 0x22874;
  do {
    *(undefined4 *)(iVar11 + 0xc) = uVar4;
    *(undefined4 ****)(DAT_00022b3c + 0x228f4) = pppuStack_c;
    if ((undefined4 ****)pppuStack_c != (undefined4 ****)0x0) {
      **(undefined4 **)(iVar9 + DAT_00022b40) = pppuStack_c;
      iVar11 = FUN_00029bac(pppuStack_c,0x2f);
      piVar8 = *(int **)(iVar9 + DAT_00022b44);
      *piVar8 = iVar11;
      if (iVar11 == 0) {
        *piVar8 = (int)pppuStack_c;
      }
      else {
        *piVar8 = iVar11 + 1;
      }
    }
    puVar15 = (undefined4 *)(DAT_00022b48 + 0x22958);
    iVar11 = DAT_00022b4c + 0x22960;
    *(undefined4 *)(DAT_00022b50 + 0x22970) = uVar2;
    puVar5 = puVar15;
    for (pcVar17 = pcVar12; pcVar17 != (code *)(iVar11 - (int)puVar15 >> 2); pcVar17 = pcVar17 + 1)
    {
      (*(code *)*puVar5)();
      puVar5 = puVar5 + 1;
    }
    if (pcVar16 != (code *)0x0) {
      (*pcVar16)();
    }
    pcVar16 = (code *)((DAT_00022b58 + 0x22994) - (DAT_00022b54 + 0x22990) >> 2);
    puVar5 = (undefined4 *)(DAT_00022b54 + 0x22990);
    for (; pcVar12 != pcVar16; pcVar12 = pcVar12 + 1) {
      (*(code *)*puVar5)();
      puVar5 = puVar5 + 1;
    }
    if (*(int *)(iVar9 + DAT_00022b5c) != 0) {
      puVar5 = (undefined4 *)FUN_0001d550();
      *puVar5 = 0;
    }
    if (*(int *)(iVar9 + DAT_00022b60) != 0) {
      puVar5 = (undefined4 *)FUN_00026940();
      *puVar5 = 0;
    }
    iVar11 = FUN_000269dc(auStack_138);
    if (iVar11 == 0) {
      iVar11 = coproc_movefrom_User_R_Thread_and_Process_ID();
      uStack_30 = *(undefined4 *)(iVar11 + -0x414);
      uStack_2c = *(undefined4 *)(iVar11 + -0x418);
      *(undefined1 **)(iVar11 + -0x414) = auStack_138;
      uVar4 = (*pcVar3)(unaff_r4,&pppuStack_c,**(undefined4 **)(iVar9 + DAT_00022b28));
    }
    else {
      piVar8 = *(int **)(iVar9 + DAT_00022b64);
      if (piVar8 != (int *)0x0) {
        do {
          iVar11 = *piVar8;
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar8;
            if (iVar6 != iVar11) goto LAB_00022adc;
            bVar1 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar1);
          *piVar8 = iVar11 + -1;
LAB_00022adc:
          DataMemoryBarrier(0xb);
        } while (iVar11 != iVar6);
        if (iVar11 != 1) {
          software_interrupt(0);
        }
      }
      uVar4 = 0;
    }
    FUN_00022404(uVar4);
LAB_00022a38:
    iVar11 = FUN_00026d40();
    iVar6 = FUN_00026dec();
    if (iVar11 == iVar6) goto LAB_00022858;
LAB_000228ac:
    FUN_00022584(0,0x8000);
    FUN_00022584(1,0x8002);
    FUN_00022584(2,0x8002);
    uVar4 = 1;
    iVar11 = DAT_00022b38 + 0x228e0;
  } while( true );
}



/* ===== entry @ 00010150 size=1000 ===== */

/* WARNING: Removing unreachable block (ram,0x00022b04) */

void processEntry entry(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  code *pcVar11;
  uint *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  code *pcVar15;
  code *pcVar16;
  undefined1 auStack_1a0 [92];
  int local_144;
  int local_13c;
  int local_134;
  int local_12c;
  undefined1 auStack_128 [264];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar3 = (int)param_2;
  pcVar15 = DAT_00010188;
  pcVar2 = DAT_00010184;
  local_8 = DAT_00010180;
  uStack_c = 0;
  iVar8 = DAT_00022b1c + 0x2277c;
  *(undefined4 ***)*(undefined4 *)(iVar8 + DAT_00022b20) = &param_3;
  *(undefined4 *)(DAT_00022b24 + 0x227b4) = param_1;
  piVar6 = *(int **)(iVar8 + DAT_00022b28);
  *piVar6 = (int)(&param_3 + (int)param_2 + 1);
  if (&param_3 + (int)param_2 + 1 == (undefined4 **)param_3) {
    *piVar6 = (int)(&param_2 + (int)param_2 + 1);
  }
  param_2 = &param_3;
  local_4 = param_1;
  FUN_00020350(auStack_1a0,0,0x78);
  puVar12 = (uint *)**(undefined4 **)(iVar8 + DAT_00022b28);
  do {
    puVar13 = puVar12 + 1;
    uVar9 = *puVar12;
    puVar12 = puVar13;
  } while (uVar9 != 0);
  for (; uVar9 = *puVar13, uVar9 != 0; puVar13 = puVar13 + 2) {
    if (uVar9 < 0xf) {
      thunk_FUN_00029380(auStack_1a0 + uVar9 * 8,puVar13,8);
    }
  }
  FUN_0002309c(auStack_1a0);
  FUN_000225ec();
  *(undefined4 *)(DAT_00022b30 + 0x2284c) = **(undefined4 **)(iVar8 + DAT_00022b2c);
  pcVar11 = (code *)0x0;
  if (local_144 == -1) {
    iVar10 = FUN_00026b4c();
    iVar5 = FUN_00026b5c();
    if (iVar10 == iVar5) goto LAB_00022a38;
    goto LAB_000228ac;
  }
LAB_00022858:
  if (local_144 != -1) {
    if (local_144 != local_13c) goto LAB_000228ac;
    if (local_134 != local_12c) goto LAB_000228ac;
  }
  uVar7 = 0;
  iVar10 = DAT_00022b34 + 0x22874;
  do {
    *(undefined4 *)(iVar10 + 0xc) = uVar7;
    *(undefined4 **)(DAT_00022b3c + 0x228f4) = param_3;
    if (param_3 != (undefined4 *)0x0) {
      **(undefined4 **)(iVar8 + DAT_00022b40) = param_3;
      iVar10 = FUN_00029bac(param_3,0x2f);
      piVar6 = *(int **)(iVar8 + DAT_00022b44);
      *piVar6 = iVar10;
      if (iVar10 == 0) {
        *piVar6 = (int)param_3;
      }
      else {
        *piVar6 = iVar10 + 1;
      }
    }
    puVar14 = (undefined4 *)(DAT_00022b48 + 0x22958);
    iVar10 = DAT_00022b4c + 0x22960;
    *(undefined4 *)(DAT_00022b50 + 0x22970) = local_8;
    puVar4 = puVar14;
    for (pcVar16 = pcVar11; pcVar16 != (code *)(iVar10 - (int)puVar14 >> 2); pcVar16 = pcVar16 + 1)
    {
      (*(code *)*puVar4)();
      puVar4 = puVar4 + 1;
    }
    if (pcVar15 != (code *)0x0) {
      (*pcVar15)();
    }
    pcVar15 = (code *)((DAT_00022b58 + 0x22994) - (DAT_00022b54 + 0x22990) >> 2);
    puVar4 = (undefined4 *)(DAT_00022b54 + 0x22990);
    for (; pcVar11 != pcVar15; pcVar11 = pcVar11 + 1) {
      (*(code *)*puVar4)();
      puVar4 = puVar4 + 1;
    }
    if (*(int *)(iVar8 + DAT_00022b5c) != 0) {
      puVar4 = (undefined4 *)FUN_0001d550();
      *puVar4 = 0;
    }
    if (*(int *)(iVar8 + DAT_00022b60) != 0) {
      puVar4 = (undefined4 *)FUN_00026940();
      *puVar4 = 0;
    }
    iVar10 = FUN_000269dc(auStack_128);
    if (iVar10 == 0) {
      iVar10 = coproc_movefrom_User_R_Thread_and_Process_ID();
      local_20 = *(undefined4 *)(iVar10 + -0x414);
      local_1c = *(undefined4 *)(iVar10 + -0x418);
      *(undefined1 **)(iVar10 + -0x414) = auStack_128;
      uVar7 = (*pcVar2)(iVar3,&param_3,**(undefined4 **)(iVar8 + DAT_00022b28));
    }
    else {
      piVar6 = *(int **)(iVar8 + DAT_00022b64);
      if (piVar6 != (int *)0x0) {
        do {
          iVar10 = *piVar6;
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar6;
            if (iVar5 != iVar10) goto LAB_00022adc;
            bVar1 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar1);
          *piVar6 = iVar10 + -1;
LAB_00022adc:
          DataMemoryBarrier(0xb);
        } while (iVar10 != iVar5);
        if (iVar10 != 1) {
          software_interrupt(0);
        }
      }
      uVar7 = 0;
    }
    FUN_00022404(uVar7);
LAB_00022a38:
    iVar10 = FUN_00026d40();
    iVar5 = FUN_00026dec();
    if (iVar10 == iVar5) goto LAB_00022858;
LAB_000228ac:
    FUN_00022584(0,0x8000);
    FUN_00022584(1,0x8002);
    FUN_00022584(2,0x8002);
    uVar7 = 1;
    iVar10 = DAT_00022b38 + 0x228e0;
  } while( true );
}



/* ===== FUN_0001018c @ 0001018c size=32 ===== */

void FUN_0001018c(void)

{
  if (DAT_000101b0 == DAT_000101ac) {
    return;
  }
  if (DAT_000101b4 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000101b4)();
  return;
}



/* ===== FUN_000101f0 @ 000101f0 size=60 ===== */

undefined4 FUN_000101f0(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = DAT_0001022c;
  if (*DAT_0001022c != '\0') {
    return param_1;
  }
  uVar2 = FUN_0001018c();
  if (DAT_00010230 != 0) {
    uVar2 = DAT_00010234;
  }
  *pcVar1 = '\x01';
  return uVar2;
}



/* ===== FUN_00010238 @ 00010238 size=80 ===== */

void FUN_00010238(void)

{
  if ((DAT_000101e8 - DAT_000101e4 >> 2) / 2 == 0) {
    return;
  }
  if (DAT_000101ec == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_000101ec)();
  return;
}



/* ===== FUN_00010268 @ 00010268 size=6048 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00010268(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_1974;
  undefined4 uStack_1970;
  undefined4 uStack_196c;
  int local_1968;
  int local_1964;
  undefined1 auStack_1960 [2048];
  char local_1160 [4];
  char acStack_115c [4];
  char acStack_1158 [4];
  char acStack_1154 [4];
  undefined2 local_1150;
  undefined1 local_114e;
  char local_114c [4];
  char acStack_1148 [4];
  char acStack_1144 [4];
  char acStack_1140 [4];
  char local_113c [4];
  undefined2 local_1138;
  char local_1134 [4];
  char acStack_1130 [4];
  undefined2 local_112c;
  char local_1128 [4];
  char acStack_1124 [4];
  undefined2 local_1120;
  undefined1 local_111e;
  undefined4 local_111d;
  undefined4 uStack_1119;
  undefined4 uStack_1115;
  uint uStack_1111;
  undefined1 uStack_110d;
  undefined4 uStack_110c;
  char local_1108 [4];
  char acStack_1104 [4];
  char acStack_1100 [4];
  char acStack_10fc [4];
  undefined2 local_10f8;
  undefined6 local_10f6;
  undefined2 uStack_10f0;
  undefined6 uStack_10ee;
  char local_10e8 [4];
  char acStack_10e4 [4];
  undefined2 local_10e0;
  undefined1 local_10de;
  undefined4 local_10dd;
  undefined4 uStack_10d9;
  undefined4 uStack_10d5;
  uint uStack_10d1;
  undefined1 uStack_10cd;
  undefined4 uStack_10cc;
  char local_10c8 [4];
  char acStack_10c4 [4];
  undefined4 local_10c0;
  undefined4 uStack_10bc;
  undefined4 uStack_10b8;
  undefined4 uStack_10b4;
  undefined4 local_10b0;
  undefined4 uStack_10ac;
  undefined4 local_10a8;
  undefined4 uStack_10a4;
  undefined1 local_10a0;
  char local_109c [2048];
  undefined1 auStack_89c [2050];
  ushort local_9a;
  undefined4 local_98;
  undefined2 local_94;
  byte local_90 [56];
  undefined4 local_58;
  byte local_51;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  byte *local_44;
  int local_40;
  byte local_39;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  byte local_11;
  
  local_98 = DAT_0002c5e4;
  local_94 = (undefined2)DAT_0002c5e8;
  local_11 = 0;
  local_18 = 0xb;
  local_1c = 0;
  local_20 = 1;
  local_24 = 1;
  local_28 = 0x100;
  local_2c = 0x5dc;
  local_30 = 0;
  local_34 = 2000;
  local_38 = 0;
  local_10a8 = DAT_0002c5ec;
  uStack_10a4 = DAT_0002c5f0;
  local_10a0 = (undefined1)DAT_0002c5f4;
  local_10c8 = (char  [4])s_mp_rate_0002c5f8._0_4_;
  acStack_10c4 = (char  [4])s_mp_rate_0002c5f8._4_4_;
  uStack_10bc = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_10b8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_10b4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_10c0 = 0;
  local_10b0 = 0;
  local_10e8 = (char  [4])s_mp_channel_0002c618._0_4_;
  acStack_10e4 = (char  [4])s_mp_channel_0002c618._4_4_;
  local_10e0 = (undefined2)ram0x0002c620;
  local_10de = (undefined1)((uint)ram0x0002c620 >> 0x10);
  uStack_10d9 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_10d5 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_10dd = 0;
  uStack_10d1 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc) & 0xff;
  uStack_10cd = 0;
  local_1108 = (char  [4])s_mp_bandwidth_40M__0002c638._0_4_;
  acStack_1104 = (char  [4])s_mp_bandwidth_40M__0002c638._4_4_;
  acStack_1100 = (char  [4])s_mp_bandwidth_40M__0002c638._8_4_;
  acStack_10fc = (char  [4])s_mp_bandwidth_40M__0002c638._12_4_;
  local_10f8 = (undefined2)ram0x0002c648;
  local_10f6 = 0;
  uStack_10f0 = 0;
  uStack_10ee = 0;
  local_1128 = (char  [4])s_mp_ant_tx_0002c658._0_4_;
  acStack_1124 = (char  [4])s_mp_ant_tx_0002c658._4_4_;
  local_1120 = (undefined2)ram0x0002c660;
  local_111e = (undefined1)((uint)ram0x0002c660 >> 0x10);
  uStack_1119 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_1115 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  local_111d = 0;
  uStack_1111 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc) & 0xff;
  uStack_110d = 0;
  local_1134 = (char  [4])s_mp_get_he_0002c678._0_4_;
  acStack_1130 = (char  [4])s_mp_get_he_0002c678._4_4_;
  local_112c = (undefined2)ram0x0002c680;
  local_114c = (char  [4])s_mp_plcp_data_ru_tone__0002c684._0_4_;
  acStack_1148 = (char  [4])s_mp_plcp_data_ru_tone__0002c684._4_4_;
  acStack_1144 = (char  [4])s_mp_plcp_data_ru_tone__0002c684._8_4_;
  acStack_1140 = (char  [4])s_mp_plcp_data_ru_tone__0002c684._12_4_;
  local_113c = (char  [4])s_mp_plcp_data_ru_tone__0002c684._16_4_;
  local_1138 = (undefined2)ram0x0002c698;
  local_1160 = (char  [4])s_mp_plcp_data_ppdu__0002c69c._0_4_;
  acStack_115c = (char  [4])s_mp_plcp_data_ppdu__0002c69c._4_4_;
  acStack_1158 = (char  [4])s_mp_plcp_data_ppdu__0002c69c._8_4_;
  acStack_1154 = (char  [4])s_mp_plcp_data_ppdu__0002c69c._12_4_;
  local_1150 = (undefined2)ram0x0002c6ac;
  local_114e = (undefined1)((uint)ram0x0002c6ac >> 0x10);
  local_40 = 0;
  local_1964 = -1;
  local_1968 = -1;
  local_44 = local_90;
  uStack_110c = uStack_1119;
  uStack_10cc = uStack_10d9;
  uStack_10ac = uStack_10bc;
  FUN_00020350(local_44,0,0x38);
  *local_44 = *local_44 | 1;
  if (param_1 < 7) {
    if (param_1 < 3) {
      if (param_1 < 2) {
        FUN_00013634();
        return local_38;
      }
      iVar3 = FUN_0002066c(*(undefined4 *)(param_2 + 4),&DAT_0002c2d8,2);
      if ((iVar3 != 0) && (**(char **)(param_2 + 4) != DAT_0002c2dc)) {
        FUN_0001f7b0("Interface doesn\'t accept private ioctl...parameter Error\n",1,0x39,
                     DAT_00041448);
        uVar4 = DAT_00041448;
        uVar7 = *(undefined4 *)(param_2 + 8);
        puVar5 = (undefined4 *)FUN_0001d550();
        uVar6 = FUN_0002096c(*puVar5);
        FUN_0001da38(uVar4,"%s: %s\n",uVar7,uVar6);
        return -0x16;
      }
      FUN_0001d9f4("rtwpriv version:%s\n","V5.8.0_20220302");
      return local_38;
    }
    iVar3 = FUN_0002066c(*(undefined4 *)(param_2 + 8),&DAT_0002c250,4);
    if (iVar3 != 0) {
      iVar3 = FUN_0002066c(*(undefined4 *)(param_2 + 8),&DAT_0002c258,3);
      if (iVar3 == 0) {
        FUN_0001d9f4("rtwpriv version:%s\n","V5.8.0_20220302");
        return local_38;
      }
      if ((**(char **)(param_2 + 8) == DAT_0002c280) ||
         (iVar3 = FUN_0002066c(*(undefined4 *)(param_2 + 8),&DAT_0002c284,4), iVar3 == 0)) {
        FUN_0001d9f4("rtwpriv version:%s\n","V5.8.0_20220302");
        FUN_00013634();
        return local_38;
      }
      iVar3 = FUN_0002066c(*(undefined4 *)(param_2 + 8),"mp_psd_analysis",0xf);
      if (iVar3 == 0) {
        local_48 = *(undefined4 *)(param_2 + 4);
        local_4c = *(undefined4 *)(param_2 + 8);
        if (*(int *)(param_2 + 0xc) != 0) {
          local_28 = FUN_0002223c(*(undefined4 *)(param_2 + 0xc));
        }
        FUN_00016224(local_48,local_4c,local_28);
        return local_38;
      }
      iVar3 = FUN_00020410(*(undefined4 *)(param_2 + 8),"mp_test");
      if (iVar3 == 0) {
        local_48 = *(undefined4 *)(param_2 + 4);
        local_4c = *(undefined4 *)(param_2 + 8);
        iVar3 = FUN_00019a18(local_48);
        return iVar3;
      }
      iVar3 = FUN_00020410(*(undefined4 *)(param_2 + 8),"mp_server");
      if (iVar3 == 0) {
        local_48 = *(undefined4 *)(param_2 + 4);
        local_4c = *(undefined4 *)(param_2 + 8);
        iVar3 = FUN_0001ac18(local_48);
        return iVar3;
      }
      if (param_1 < 3) {
        FUN_0001d9f4("rtwpriv version:%s\n","V5.8.0_20220302");
        FUN_0001d8c8("ioctl no enough parameters!");
        return -0x16;
      }
      local_48 = *(undefined4 *)(param_2 + 4);
      FUN_0001da60(auStack_89c,&DAT_0002c2cc,*(undefined4 *)(param_2 + 8));
      for (local_40 = 3; local_40 < param_1; local_40 = local_40 + 1) {
        FUN_0001da60(auStack_89c,"%s %s",auStack_89c,*(undefined4 *)(param_2 + local_40 * 4));
      }
      iVar3 = FUN_00011b68(local_48,auStack_89c,0);
      return iVar3;
    }
    *local_44 = *local_44 & 0xfe;
  }
  else {
    if (2 < param_1) {
      local_20 = FUN_0002223c(*(undefined4 *)(param_2 + 8));
    }
    if ((0xb1 < local_20) || (local_20 < 0)) {
      FUN_0001f7b0("Interface doesn\'t accept private ioctl...parameter Error, channel \n",1,0x43,
                   DAT_00041448);
      return -0x16;
    }
    if (3 < param_1) {
      local_1c = FUN_0002223c(*(undefined4 *)(param_2 + 0xc));
    }
    if ((3 < (int)local_1c) || ((int)local_1c < 0)) {
      FUN_00013634();
      FUN_0001f7b0("Interface doesn\'t accept private ioctl...parameter Error, bandwidth\n",1,0x44,
                   DAT_00041448);
      return -0x16;
    }
    if (4 < param_1) {
      local_9a = FUN_00012b54(*(undefined4 *)(param_2 + 0x10));
    }
    if (5 < param_1) {
      local_18 = FUN_00012944(*(undefined4 *)(param_2 + 0x14));
    }
    if (param_1 < 7) {
      FUN_0001f7b0("Interface doesn\'t accept private ioctl...parameter Error\n",1,0x39,DAT_00041448
                  );
      return -0x16;
    }
    local_24 = FUN_0002223c(*(undefined4 *)(param_2 + 0x18));
    if ((3 < local_24) || (local_24 < 1)) {
      FUN_00013634();
      FUN_0001f7b0("Interface doesn\'t accept private ioctl...parameter Error\n",1,0x39,DAT_00041448
                  );
      return -0x16;
    }
    if (7 < param_1) {
      iVar3 = FUN_0002066c(*(undefined4 *)(param_2 + 0x1c),"ru_tone",7);
      if (iVar3 == 0) {
        FUN_0001f4ec(*(undefined4 *)(param_2 + 0x1c),"ru_tone=%d",&local_1964);
        FUN_0001d9f4("config ru_tone  = %d\n",local_1964);
      }
      else {
        local_34 = FUN_0002223c(*(undefined4 *)(param_2 + 0x1c));
        FUN_0001d9f4("config packet Period = %d\n",local_34);
      }
    }
    if (8 < param_1) {
      iVar3 = FUN_0002066c(*(undefined4 *)(param_2 + 0x20),&DAT_0002c3f8,4);
      if (iVar3 == 0) {
        FUN_0001f4ec(*(undefined4 *)(param_2 + 0x20),"ppdu=%d",&local_1968);
        FUN_0001d9f4("config ppdu  = %d\n",local_1968);
      }
      else {
        local_2c = FUN_0002223c(*(undefined4 *)(param_2 + 0x20));
        FUN_0001d9f4("config packet length =%d\n",local_2c);
        if (local_2c < 0x65) {
          FUN_0001f7b0("Interface doesn\'t accept private ioctl... pktlen <= 100 parameter Error\n",
                       1,0x48,DAT_00041448);
          return -0x16;
        }
      }
    }
    if (9 < param_1) {
      local_30 = FUN_0002223c(*(undefined4 *)(param_2 + 0x24));
      FUN_0001d9f4("config packet count =%d\n",local_30);
    }
    if (10 < param_1) {
      local_50 = FUN_0002223c(*(undefined4 *)(param_2 + 0x28));
      if (0xff < local_50) {
        FUN_00013634();
        FUN_0001f7b0("Interface doesn\'t accept private ioctl...parameter Error\n",1,0x39,
                     DAT_00041448);
        return -0x16;
      }
      local_11 = FUN_00022248(*(undefined4 *)(param_2 + 0x28),0,0x10);
    }
  }
  local_48 = *(undefined4 *)(param_2 + 4);
  iVar3 = FUN_00012dd4(local_90,&local_9a,&local_98);
  if (iVar3 != 1) {
    local_1974 = DAT_0002c6b0;
    uStack_1970 = DAT_0002c6b4;
    uStack_196c = DAT_0002c6b8;
    local_44[3] = 0;
    local_44[4] = local_44[4] & 0xfb;
    local_44[4] = local_44[4] & 0xf7;
    local_44[4] = local_44[4] & 0xfd;
    local_44[4] = local_44[4] & 0xfe;
    local_44[4] = local_44[4] & 0xef;
    *(short *)(local_44 + 6) = (short)local_34;
    if (local_11 == 0) {
      bVar2 = FUN_0001209c();
      local_44[0x10] = bVar2;
    }
    else {
      local_44[0x10] = local_11;
    }
    *(int *)(local_44 + 8) = local_30;
    *(int *)(local_44 + 0xc) = local_2c;
    thunk_FUN_00029380(local_44 + 0x32,&local_1974,6);
  }
  for (local_40 = 0; local_40 < param_1; local_40 = local_40 + 1) {
  }
  if ((*local_44 & 1) != 0) {
    if (local_11 == 0) {
      bVar2 = FUN_0001209c();
      local_44[0x10] = bVar2;
      FUN_0001d8c8("Packet Pattern = random Byte");
    }
    else {
      local_44[0x10] = local_11;
      FUN_0001d9f4("Packet Pattern = %x\n",local_44[0x10]);
    }
    bVar2 = FUN_000123b0(local_18 & 0xff);
    local_44[1] = bVar2;
    if (((int)local_1c < 4) && (-1 < (int)local_1c)) {
      local_44[4] = local_44[4] & 0x1f | (byte)((local_1c & 7) << 5);
    }
    else {
      local_44[4] = local_44[4] & 0x1f;
    }
    if ((0xb1 < local_20) || (local_20 < 0)) {
      local_20 = 0x24;
    }
    if (local_24 == 1) {
      *local_44 = *local_44 & 0xf1 | 2;
    }
    else if (local_24 == 2) {
      *local_44 = *local_44 & 0xf1 | 6;
    }
    else if (local_24 == 3) {
      *local_44 = *local_44 & 0xf1 | 8;
    }
    else {
      *local_44 = *local_44 & 0xf1 | 2;
    }
    FUN_0001da60(auStack_1960,"%s %s",local_10c8,*(undefined4 *)(param_2 + 0x14));
    local_38 = FUN_00011b68(local_48,auStack_1960,0);
    FUN_0001da60(auStack_1960,&DAT_0002c4d8,local_1128,*(undefined4 *)(param_2 + 0x10));
    local_38 = FUN_00011b68(local_48,auStack_1960,0);
    if (local_38 < 0) {
      return -1;
    }
    FUN_0001da60(auStack_1960,"%s %d",local_10e8,local_20);
    local_38 = FUN_00011b68(local_48,auStack_1960,0);
    if (local_38 < 0) {
      return -1;
    }
    FUN_0001da60(auStack_1960,&DAT_0002c4e8,local_1108,local_1c);
    local_38 = FUN_00011b68(local_48,auStack_1960,0);
    pbVar1 = local_44;
    if (local_38 < 0) {
      return -1;
    }
    *(undefined4 *)(local_44 + 0x32) = local_98;
    *(undefined2 *)(pbVar1 + 0x36) = local_94;
    *local_44 = *local_44 & 0xf;
    for (local_39 = 0x10; local_39 < 0x14; local_39 = local_39 + 1) {
      local_51 = (byte)((int)(uint)local_9a >> local_39) & 1;
      if (((int)(uint)local_9a >> local_39 & 1U) != 0) {
        *local_44 = *local_44 & 0xf | ((*local_44 >> 4) + 1) * '\x10';
      }
    }
    thunk_FUN_00029380(auStack_89c,local_90,0x38);
    FUN_000161e8(local_44);
  }
  uVar4 = FUN_000203b0(&local_10a8);
  thunk_FUN_00029380(local_109c,&local_10a8,uVar4);
  iVar3 = FUN_000203b0(&local_10a8);
  thunk_FUN_00029380(local_109c + iVar3,local_90,0x38);
  FUN_00020350(auStack_1960,0,0x800);
  FUN_0001da60(auStack_1960,&DAT_0002c2cc,local_1134);
  FUN_00011d78(local_48,auStack_1960);
  iVar3 = FUN_0002066c(auStack_1960,&DAT_0002c4f0,4);
  if (iVar3 == 0) {
    FUN_0001d8c8("HE HW Tx");
    FUN_00020350(auStack_1960,0,0x800);
    if ((*local_44 & 1) == 0) {
      FUN_0001da60(auStack_1960,&DAT_0002c2cc,"mp_ctx stop");
    }
    else {
      if (local_34 == 2000) {
        local_34 = 50000;
      }
      if (local_34 != 2000) {
        FUN_0001da60(auStack_1960,"mp_ctx pktinterval=%d",local_34);
        local_38 = FUN_00011b68(local_48,auStack_1960,0);
        if (local_38 < 0) {
          return -1;
        }
      }
      if (local_2c != 0x5dc) {
        FUN_00020350(auStack_1960,0,0x800);
        FUN_0001da60(auStack_1960,"mp_ctx pktlen=%d",local_2c);
        local_38 = FUN_00011b68(local_48,auStack_1960,0);
        if (local_38 < 0) {
          return -1;
        }
      }
      if (local_11 != 0) {
        FUN_00020350(auStack_1960,0,0x800);
        FUN_0001da60(auStack_1960,"mp_ctx payload=%d",local_11);
        local_38 = FUN_00011b68(local_48,auStack_1960,0);
        if (local_38 < 0) {
          return -1;
        }
      }
      if (local_1964 != -1) {
        FUN_00020350(auStack_1960,0,0x800);
        FUN_0001da60(auStack_1960,&DAT_0002c4e8,local_114c,local_1964);
        local_38 = FUN_00011b68(local_48,auStack_1960,0);
        if (local_38 < 0) {
          return -1;
        }
      }
      if (local_1968 != -1) {
        FUN_00020350(auStack_1960,0,0x800);
        FUN_0001da60(auStack_1960,&DAT_0002c4e8,local_1160,local_1968);
        local_38 = FUN_00011b68(local_48,auStack_1960,0);
        if (local_38 < 0) {
          return -1;
        }
      }
      FUN_00020350(auStack_1960,0,0x800);
      if (local_24 == 1) {
        if (local_30 == 0) {
          FUN_0001da60(auStack_1960,&DAT_0002c2cc,"mp_ctx background,pkt");
        }
        else {
          FUN_0001da60(auStack_1960,"mp_ctx count=%d,pkt",local_30);
        }
      }
      else if (local_24 == 2) {
        FUN_0001da60(auStack_1960,&DAT_0002c2cc,"mp_ctx background");
      }
      else if (local_24 == 3) {
        FUN_0001da60(auStack_1960,&DAT_0002c2cc,"mp_ctx background,stone");
      }
    }
    local_38 = FUN_00011b68(local_48,auStack_1960,0);
    if (local_38 < 0) {
      local_38 = -1;
    }
  }
  else {
    local_58 = FUN_00011a08();
    local_38 = FUN_00011aa4(local_58,local_48,local_109c,0x41);
    FUN_00011a80(local_58);
    if (local_38 < 0) {
      FUN_0001f7b0("Interface doesn\'t accept private ioctl...\n",1,0x2a,DAT_00041448);
      uVar4 = DAT_00041448;
      uVar7 = *(undefined4 *)(param_2 + 8);
      puVar5 = (undefined4 *)FUN_0001d550();
      uVar6 = FUN_0002096c(*puVar5);
      FUN_0001da38(uVar4,"%s: %s\n",uVar7,uVar6);
    }
    else if (local_109c[0] != '\0') {
      FUN_0001d9f4("%-8.16s %s:%s\n",local_48,*(undefined4 *)(param_2 + 8),local_109c);
    }
  }
  return local_38;
}



/* ===== FUN_00011a08 @ 00011a08 size=120 ===== */

int FUN_00011a08(void)

{
  int iVar1;
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (2 < local_c) {
      return -1;
    }
    iVar1 = FUN_00020d58(*(undefined4 *)(&DAT_0002cb70 + local_c * 4),2,0);
    if (-1 < iVar1) break;
    local_c = local_c + 1;
  }
  return iVar1;
}



/* ===== FUN_00011a80 @ 00011a80 size=36 ===== */

void FUN_00011a80(undefined4 param_1)

{
  FUN_0001d44c(param_1);
  return;
}



/* ===== FUN_00011aa4 @ 00011aa4 size=196 ===== */

undefined4 FUN_00011aa4(undefined4 param_1,undefined4 param_2,undefined1 *param_3,short param_4)

{
  undefined4 uVar1;
  undefined1 *local_3c;
  short local_38;
  undefined1 auStack_2c [16];
  undefined1 **local_1c;
  undefined4 local_c;
  
  local_c = 0;
  FUN_00020350(&local_3c,0,0x10);
  local_3c = param_3;
  local_38 = param_4;
  FUN_00020350(auStack_2c,0,0x20);
  uVar1 = FUN_000203b0(param_2);
  FUN_00020784(auStack_2c,param_2,uVar1);
  local_1c = &local_3c;
  uVar1 = FUN_0001d33c(param_1,0x89f0,auStack_2c);
  if (local_38 == 0) {
    *param_3 = 0;
  }
  return uVar1;
}



/* ===== FUN_00011b68 @ 00011b68 size=528 ===== */

int FUN_00011b68(undefined4 param_1,char *param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_1018 [2048];
  undefined1 auStack_818 [2048];
  undefined4 local_18;
  int local_14;
  
  local_14 = 0;
  FUN_0001f4ec(param_2,&DAT_0002cb7c,auStack_1018);
  FUN_0001da60(auStack_818,&DAT_0002cb80,param_2);
  local_18 = FUN_00011a08();
  iVar2 = FUN_000203b0(param_2);
  local_14 = FUN_00011aa4(local_18,param_1,param_2,iVar2 + 1);
  FUN_00011a80(local_18);
  if (local_14 < 0) {
    FUN_0001f7b0("Interface doesn\'t accept private ioctl...\n",1,0x2a,DAT_00041448);
    uVar1 = DAT_00041448;
    puVar3 = (undefined4 *)FUN_0001d550();
    uVar4 = FUN_0002096c(*puVar3);
    FUN_0001da38(uVar1,"%s: %s\n",auStack_818,uVar4);
  }
  else {
    if (*param_2 != '\0') {
      FUN_0001d9f4("%-8.16s %s:%s\n",param_1,auStack_1018,param_2);
    }
    local_14 = 0;
  }
  if (local_14 < 0) {
    FUN_0001d9f4("CMD ioctrl Error = %s\n",auStack_1018);
  }
  else if (param_3 != '\x01') {
    FUN_00020350(param_2,0,0x800);
  }
  return local_14;
}



/* ===== FUN_00011d78 @ 00011d78 size=152 ===== */

void FUN_00011d78(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_82c [32];
  undefined1 auStack_80c [2048];
  undefined4 local_c;
  
  local_c = 0;
  FUN_0001f4ec(param_2,&DAT_0002cb7c,auStack_82c);
  FUN_0001da60(auStack_80c,&DAT_0002cb80,param_2);
  local_c = FUN_00011a08();
  iVar1 = FUN_000203b0(param_2);
  FUN_00011aa4(local_c,param_1,param_2,iVar1 + 1);
  FUN_00011a80(local_c);
  return;
}



/* ===== FUN_00011e10 @ 00011e10 size=160 ===== */

char FUN_00011e10(byte param_1)

{
  char cVar1;
  
  if ((param_1 < 0x30) || (0x39 < param_1)) {
    if ((param_1 < 0x61) || (0x66 < param_1)) {
      if ((param_1 < 0x41) || (0x46 < param_1)) {
        cVar1 = -1;
      }
      else {
        cVar1 = param_1 - 0x37;
      }
    }
    else {
      cVar1 = param_1 + 0xa9;
    }
  }
  else {
    cVar1 = param_1 - 0x30;
  }
  return cVar1;
}



/* ===== FUN_00011eb0 @ 00011eb0 size=100 ===== */

byte FUN_00011eb0(undefined1 param_1,undefined1 param_2)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = FUN_00011e10(param_1);
  bVar2 = FUN_00011e10(param_2);
  return cVar1 << 4 | bVar2;
}



/* ===== FUN_00011f14 @ 00011f14 size=148 ===== */

void FUN_00011f14(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    uVar1 = FUN_00011eb0(*(undefined1 *)(param_2 + local_18),*(undefined1 *)(param_2 + local_18 + 1)
                        );
    *(undefined1 *)(param_1 + local_14) = uVar1;
    local_18 = local_18 + 3;
  }
  return;
}



/* ===== FUN_00011fa8 @ 00011fa8 size=128 ===== */

void FUN_00011fa8(int param_1,int param_2)

{
  int local_c;
  
  FUN_0001d9f4("-----------------Len %d----------------\n",param_2);
  local_c = 0;
  while( true ) {
    if (param_2 <= local_c) break;
    FUN_0001d9f4("%2.2x-",*(undefined1 *)(param_1 + local_c));
    local_c = local_c + 1;
  }
  FUN_0001f8b4(10);
  return;
}



/* ===== FUN_00012028 @ 00012028 size=116 ===== */

int FUN_00012028(int param_1,int param_2)

{
  undefined4 uVar1;
  uint in_fpscr;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)VectorSignedToFloat((param_2 - param_1) + 1,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = thunk_FUN_00021ec0();
  dVar3 = (double)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  return (int)(longlong)(dVar3 * 4.656612873077393e-10 * dVar2) + param_1;
}



/* ===== FUN_0001209c @ 0001209c size=36 ===== */

undefined1 FUN_0001209c(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_00012028(0,0xff);
  return uVar1;
}



/* ===== FUN_000120c0 @ 000120c0 size=104 ===== */

void FUN_000120c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *local_14;
  int local_c;
  
  local_c = FUN_00020a94(param_2,param_3);
  local_14 = param_1;
  while (local_c != 0) {
    *local_14 = local_c;
    local_c = FUN_00020a94(0,param_3);
    local_14 = local_14 + 1;
  }
  return;
}



/* ===== FUN_00012128 @ 00012128 size=220 ===== */

undefined4 FUN_00012128(uint param_1)

{
  undefined4 local_c;
  
  local_c = 0;
  switch(param_1 & 0x7f) {
  case 2:
    local_c = 0;
    break;
  case 4:
    local_c = 1;
    break;
  case 0xb:
    local_c = 2;
    break;
  case 0xc:
    local_c = 4;
    break;
  case 0x12:
    local_c = 5;
    break;
  case 0x16:
    local_c = 3;
    break;
  case 0x18:
    local_c = 6;
    break;
  case 0x24:
    local_c = 7;
    break;
  case 0x30:
    local_c = 8;
    break;
  case 0x48:
    local_c = 9;
    break;
  case 0x60:
    local_c = 10;
    break;
  case 0x6c:
    local_c = 0xb;
  }
  return local_c;
}



/* ===== FUN_000123b0 @ 000123b0 size=1092 ===== */

undefined1 FUN_000123b0(undefined1 param_1)

{
  undefined1 local_9;
  
  local_9 = 1;
  switch(param_1) {
  case 0:
    local_9 = 1;
    break;
  case 1:
    local_9 = 2;
    break;
  case 2:
    local_9 = 3;
    break;
  case 3:
    local_9 = 4;
    break;
  case 4:
    local_9 = 5;
    break;
  case 5:
    local_9 = 6;
    break;
  case 6:
    local_9 = 7;
    break;
  case 7:
    local_9 = 8;
    break;
  case 8:
    local_9 = 9;
    break;
  case 9:
    local_9 = 10;
    break;
  case 10:
    local_9 = 0xb;
    break;
  case 0xb:
    local_9 = 0xc;
    break;
  case 0xc:
    local_9 = 0xd;
    break;
  case 0xd:
    local_9 = 0xe;
    break;
  case 0xe:
    local_9 = 0xf;
    break;
  case 0xf:
    local_9 = 0x10;
    break;
  case 0x10:
    local_9 = 0x11;
    break;
  case 0x11:
    local_9 = 0x12;
    break;
  case 0x12:
    local_9 = 0x13;
    break;
  case 0x13:
    local_9 = 0x14;
    break;
  case 0x14:
    local_9 = 0x15;
    break;
  case 0x15:
    local_9 = 0x16;
    break;
  case 0x16:
    local_9 = 0x17;
    break;
  case 0x17:
    local_9 = 0x18;
    break;
  case 0x18:
    local_9 = 0x19;
    break;
  case 0x19:
    local_9 = 0x1a;
    break;
  case 0x1a:
    local_9 = 0x1b;
    break;
  case 0x1b:
    local_9 = 0x1c;
    break;
  case 0x1c:
    local_9 = 0x1d;
    break;
  case 0x1d:
    local_9 = 0x1e;
    break;
  case 0x1e:
    local_9 = 0x1f;
    break;
  case 0x1f:
    local_9 = 0x20;
    break;
  case 0x20:
    local_9 = 0x21;
    break;
  case 0x21:
    local_9 = 0x22;
    break;
  case 0x22:
    local_9 = 0x23;
    break;
  case 0x23:
    local_9 = 0x24;
    break;
  case 0x24:
    local_9 = 0x25;
    break;
  case 0x25:
    local_9 = 0x26;
    break;
  case 0x26:
    local_9 = 0x27;
    break;
  case 0x27:
    local_9 = 0x28;
    break;
  case 0x28:
    local_9 = 0x29;
    break;
  case 0x29:
    local_9 = 0x2a;
    break;
  case 0x2a:
    local_9 = 0x2b;
    break;
  case 0x2b:
    local_9 = 0x2c;
    break;
  case 0x2c:
    local_9 = 100;
    break;
  case 0x2d:
    local_9 = 0x65;
    break;
  case 0x2e:
    local_9 = 0x66;
    break;
  case 0x2f:
    local_9 = 0x67;
    break;
  case 0x30:
    local_9 = 0x68;
    break;
  case 0x31:
    local_9 = 0x69;
    break;
  case 0x32:
    local_9 = 0x6a;
    break;
  case 0x33:
    local_9 = 0x6b;
    break;
  case 0x34:
    local_9 = 0x6c;
    break;
  case 0x35:
    local_9 = 0x6d;
    break;
  case 0x36:
    local_9 = 0x6e;
    break;
  case 0x37:
    local_9 = 0x6f;
    break;
  case 0x38:
    local_9 = 0x70;
    break;
  case 0x39:
    local_9 = 0x71;
    break;
  case 0x3a:
    local_9 = 0x72;
    break;
  case 0x3b:
    local_9 = 0x73;
    break;
  case 0x3c:
    local_9 = 0x74;
    break;
  case 0x3d:
    local_9 = 0x75;
    break;
  case 0x3e:
    local_9 = 0x76;
    break;
  case 0x3f:
    local_9 = 0x77;
    break;
  case 0x40:
    local_9 = 0x78;
    break;
  case 0x41:
    local_9 = 0x79;
    break;
  case 0x42:
    local_9 = 0x7a;
    break;
  case 0x43:
    local_9 = 0x7b;
    break;
  case 0x44:
    local_9 = 0x7c;
    break;
  case 0x45:
    local_9 = 0x7d;
    break;
  case 0x46:
    local_9 = 0x7e;
    break;
  case 0x47:
    local_9 = 0x7f;
    break;
  case 0x48:
    local_9 = 0x80;
    break;
  case 0x49:
    local_9 = 0x81;
    break;
  case 0x4a:
    local_9 = 0x82;
    break;
  case 0x4b:
    local_9 = 0x83;
    break;
  case 0x4c:
    local_9 = 0x84;
    break;
  case 0x4d:
    local_9 = 0x85;
    break;
  case 0x4e:
    local_9 = 0x86;
    break;
  case 0x4f:
    local_9 = 0x87;
    break;
  case 0x50:
    local_9 = 0x88;
    break;
  case 0x51:
    local_9 = 0x89;
    break;
  case 0x52:
    local_9 = 0x8a;
    break;
  case 0x53:
    local_9 = 0x8b;
    break;
  default:
    FUN_0001d9f4("hw_rate_to_m_rate(): Non supported Rate [%x]!!!\n",param_1);
  }
  return local_9;
}



/* ===== FUN_00012944 @ 00012944 size=528 ===== */

int FUN_00012944(undefined4 param_1)

{
  int iVar1;
  int extraout_r3;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  while( true ) {
    if (0x53 < local_c) {
      iVar1 = FUN_00020410(param_1,&DAT_0002c6bc);
      if (iVar1 == 0) {
        FUN_0001d8c8("\n\t#### Please input a Data RATE String as:######");
        for (local_c = 0; local_c < 0x54; local_c = local_c + 1) {
          FUN_0001d9f4(&DAT_0002cb7c,(&PTR_DAT_000410f0)[local_c]);
          if ((local_c % 10 == 0) && (local_c != 0)) {
            FUN_0001f8b4(10);
          }
        }
        FUN_0001d9f4("\n Can\'t find rate index, Press any key to exit & input again...");
        if (*(int *)(DAT_00041444 + 0x34) == 0) {
          FUN_0001f590(DAT_00041444);
        }
        else if (*(uint *)(DAT_00041444 + 0x10) < *(uint *)(DAT_00041444 + 0x18)) {
          *(int *)(DAT_00041444 + 0x10) = *(int *)(DAT_00041444 + 0x10) + 1;
        }
        else {
          FUN_0001ff80(DAT_00041444);
        }
        FUN_00022404(0);
        local_10 = extraout_r3;
      }
      else {
        iVar1 = FUN_0002223c(param_1);
        if (iVar1 < 0x80) {
          local_10 = FUN_00012128(iVar1);
        }
        else if (iVar1 < 200) {
          local_10 = iVar1 + -0x74;
        }
      }
      return local_10;
    }
    iVar1 = FUN_00020410(param_1,(&PTR_DAT_000410f0)[local_c]);
    if (iVar1 == 0) break;
    local_c = local_c + 1;
  }
  return local_c;
}



/* ===== FUN_00012b54 @ 00012b54 size=640 ===== */

undefined2 FUN_00012b54(undefined4 param_1)

{
  int iVar1;
  undefined2 local_a;
  
  iVar1 = FUN_00020410(param_1,&DAT_0002ccbc);
  if (iVar1 == 0) {
    local_a = 1;
  }
  else {
    iVar1 = FUN_00020410(param_1,&DAT_0002ccc0);
    if (iVar1 == 0) {
      local_a = 2;
    }
    else {
      iVar1 = FUN_00020410(param_1,&DAT_0002ccc4);
      if (iVar1 == 0) {
        local_a = 3;
      }
      else {
        iVar1 = FUN_00020410(param_1,&DAT_0002ccc8);
        if (iVar1 == 0) {
          local_a = 4;
        }
        else {
          iVar1 = FUN_00020410(param_1,&DAT_0002cccc);
          if (iVar1 == 0) {
            local_a = 5;
          }
          else {
            iVar1 = FUN_00020410(param_1,&DAT_0002ccd0);
            if (iVar1 == 0) {
              local_a = 6;
            }
            else {
              iVar1 = FUN_00020410(param_1,&DAT_0002ccd4);
              if (iVar1 == 0) {
                local_a = 7;
              }
              else {
                iVar1 = FUN_00020410(param_1,&DAT_0002ccd8);
                if (iVar1 == 0) {
                  local_a = 8;
                }
                else {
                  iVar1 = FUN_00020410(param_1,&DAT_0002ccdc);
                  if (iVar1 == 0) {
                    local_a = 9;
                  }
                  else {
                    iVar1 = FUN_00020410(param_1,&DAT_0002cce0);
                    if (iVar1 == 0) {
                      local_a = 10;
                    }
                    else {
                      iVar1 = FUN_00020410(param_1,&DAT_0002cce4);
                      if (iVar1 == 0) {
                        local_a = 0xb;
                      }
                      else {
                        iVar1 = FUN_00020410(param_1,&DAT_0002cce8);
                        if (iVar1 == 0) {
                          local_a = 0xc;
                        }
                        else {
                          iVar1 = FUN_00020410(param_1,&DAT_0002ccec);
                          if (iVar1 == 0) {
                            local_a = 0xd;
                          }
                          else {
                            iVar1 = FUN_00020410(param_1,&DAT_0002ccf0);
                            if (iVar1 == 0) {
                              local_a = 0xe;
                            }
                            else {
                              iVar1 = FUN_00020410(param_1,&DAT_0002ccf4);
                              if (iVar1 == 0) {
                                local_a = 0xf;
                              }
                              else {
                                local_a = 8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return local_a;
}



/* ===== FUN_00012dd4 @ 00012dd4 size=2000 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00012dd4(int param_1,ushort *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  char local_454 [4];
  char acStack_450 [4];
  char acStack_44c [4];
  undefined2 local_448;
  undefined1 local_446;
  undefined1 auStack_444 [1024];
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined *local_24;
  int local_20;
  undefined *local_1c;
  int local_18;
  ushort local_14;
  byte local_11;
  
  local_2c = 1000;
  local_30 = 100;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_454 = (char  [4])s_rtw_Config_txt_0002cf2c._0_4_;
  acStack_450 = (char  [4])s_rtw_Config_txt_0002cf2c._4_4_;
  acStack_44c = (char  [4])s_rtw_Config_txt_0002cf2c._8_4_;
  local_448 = (undefined2)ram0x0002cf38;
  local_446 = (undefined1)((uint)ram0x0002cf38 >> 0x10);
  local_18 = FUN_0001d848(local_454,&DAT_0002ccfc);
  if (local_18 == 0) {
    uVar4 = 0;
  }
  else {
    FUN_0001d9f4("Try to Open %s file , parsing config file !!!\n",local_454);
    while (iVar2 = FUN_0001f6b4(auStack_444,0x400,local_18), iVar2 != 0) {
      iVar2 = FUN_00020410(auStack_444,"ConfigSetting=off");
      if (iVar2 == 0) {
        FUN_0001d8c8("off parsing config!!!");
        return 0;
      }
      iVar2 = FUN_0002066c(auStack_444,"PacketLength=",0xd);
      if (iVar2 == 0) {
        iVar2 = FUN_0001f4ec(auStack_444,"\tPacketLength=%d",&local_2c);
        if (iVar2 < 1) {
          *(undefined4 *)(param_1 + 0xc) = 1000;
        }
        else {
          FUN_0001d9f4("PacketLength= %d\n",local_2c);
          *(undefined4 *)(param_1 + 0xc) = local_2c;
        }
      }
      else {
        iVar2 = FUN_0002066c(auStack_444,"PacketPeriod=",0xd);
        if (iVar2 == 0) {
          iVar2 = FUN_0001f4ec(auStack_444,"PacketPeriod=%d",&local_30);
          if (iVar2 < 1) {
            *(undefined2 *)(param_1 + 6) = 100;
          }
          else {
            FUN_0001d9f4("PacketPeriod= %d\n",local_30);
            *(short *)(param_1 + 6) = (short)local_30;
          }
        }
        else {
          iVar2 = FUN_0002066c(auStack_444,"PacketPattern=",0xd);
          if (iVar2 == 0) {
            iVar2 = FUN_0002066c(auStack_444,"PacketPattern=rand",0x12);
            if (iVar2 == 0) {
              FUN_0001d8c8("PacketPattern= rand");
              uVar1 = FUN_0001209c();
              *(undefined1 *)(param_1 + 0x10) = uVar1;
            }
            else {
              iVar2 = FUN_0001f4ec(auStack_444,"PacketPattern=%x",&local_34);
              if (iVar2 < 1) {
                FUN_0001d8c8("Unkonw PacketPattern,Defualt Random Pattern");
                uVar1 = FUN_0001209c();
                *(undefined1 *)(param_1 + 0x10) = uVar1;
              }
              else {
                FUN_0001d9f4("PacketPattern= 0x%x\n",local_34);
                *(char *)(param_1 + 0x10) = (char)local_34;
              }
            }
          }
          else {
            iVar2 = FUN_0002066c(auStack_444,"LDPC=",5);
            if (iVar2 == 0) {
              iVar2 = FUN_0001f4ec(auStack_444,"LDPC=%d",&local_3c);
              if (0 < iVar2) {
                FUN_0001d9f4("LDPC= %d\n",local_3c);
                *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xf7 | (byte)((local_3c & 1) << 3)
                ;
              }
            }
            else {
              iVar2 = FUN_0002066c(auStack_444,"STBC=",5);
              if (iVar2 == 0) {
                iVar2 = FUN_0001f4ec(auStack_444,"STBC=%d",&local_38);
                if (0 < iVar2) {
                  FUN_0001d9f4("STBC= %d\n",local_38);
                  *(byte *)(param_1 + 4) =
                       *(byte *)(param_1 + 4) & 0xfb | (byte)((local_38 & 1) << 2);
                }
              }
              else {
                iVar2 = FUN_0002066c(auStack_444,"SPreambleSGI=",0xd);
                if (iVar2 == 0) {
                  iVar2 = FUN_0001f4ec(auStack_444,"SPreambleSGI=%d",&local_44);
                  if (0 < iVar2) {
                    FUN_0001d9f4("SPreamble & SGI= %d\n",local_44);
                    *(byte *)(param_1 + 4) =
                         *(byte *)(param_1 + 4) & 0xfd | (byte)((local_44 & 1) << 1);
                    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe | (byte)local_44 & 1;
                  }
                }
                else {
                  iVar2 = FUN_0002066c(auStack_444,"NDP_sound=",10);
                  if (iVar2 == 0) {
                    iVar2 = FUN_0001f4ec(auStack_444,"NDP_sound=%d",&local_40);
                    if (0 < iVar2) {
                      FUN_0001d9f4("NDP_sound= %d\n",local_40);
                      *(byte *)(param_1 + 4) =
                           *(byte *)(param_1 + 4) & 0xef | (byte)((local_40 & 1) << 4);
                    }
                  }
                  else {
                    iVar2 = FUN_0002066c(auStack_444,"TxAnt=",6);
                    if (iVar2 == 0) {
                      local_1c = &DAT_0002cefc;
                      local_14 = 0;
                      local_20 = FUN_00020a94(auStack_444,&DAT_0002cefc);
                      local_20 = FUN_00020a94(0,local_1c);
                      for (local_11 = 0; uVar5 = (uint)local_11, uVar3 = FUN_000203b0(local_20),
                          uVar5 < uVar3; local_11 = local_11 + 1) {
                        switch(*(undefined1 *)(local_20 + (uint)local_11)) {
                        case 0x41:
                        case 0x61:
                          local_14 = local_14 | 8;
                          break;
                        case 0x42:
                        case 0x62:
                          local_14 = local_14 | 4;
                          break;
                        case 0x43:
                        case 99:
                          local_14 = local_14 | 2;
                          break;
                        case 0x44:
                        case 100:
                          local_14 = local_14 | 1;
                        }
                      }
                      *param_2 = local_14;
                      FUN_0001d9f4("%s :Config Current Antenna %d\n","Read_Parsing_file",*param_2);
                    }
                    else {
                      iVar2 = FUN_0002066c(auStack_444,"\tdestaddr=",10);
                      if (iVar2 == 0) {
                        local_24 = &DAT_0002cefc;
                        local_28 = FUN_00020a94(auStack_444,&DAT_0002cefc);
                        local_28 = FUN_00020a94(0,local_24);
                        FUN_00011f14(param_3,local_28);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_0001d568(local_18);
    uVar4 = 1;
  }
  return uVar4;
}



/* ===== FUN_00013634 @ 00013634 size=868 ===== */

void FUN_00013634(void)

{
  int iVar1;
  uint uVar2;
  int local_c;
  
  FUN_0001d8c8("#####[ 1. SW TX mode ]#####");
  FUN_0001d8c8("\t Input the parameters like this: rtwpriv wlan0 mp_XXX XXX");
  FUN_0001d8c8(
              "\t1. mp_start\t\t\t\t## enter to MP Mode\n \t2. mp_bandwidth 40M=[Num]\t\t## input [Num], 0=20M, 1=40M, 2=80M\n \t3. mp_channel [Num]\t\t\t## input [Num] = 1~167 channel number\n \t4. mp_rate [Rate Id Num] or [RateID]"
              );
  FUN_0001d8c8(
              "\t5. mp_ant_tx [Path]\t\t\t## input Antenna [PARH] = a,b,c,d,ab,ac,ad...\n\t6. mp_txpower patha=[index],pathb=[index],pathc=[index],pathd=[index] \t## input power index range [index] = 1~63\n\t7. mp_get_txpower [PATH Num]\t\t## Input Antenna PATH Num 0~3 , A = 0, B = 1 , C = 2 , D = 3\n\t8. mp_ctx [Tx Mode]\t\t\t##input [ Tx Mode ]\n\t\t\t\t[a].Continuous Packet Tx = \'background,pkt\'\n\t\t\t\t[b].Continuous Tx = \'background\'\n\t\t\t\t[c].Count Packet Tx = \'count=[num],pkt\'\n\t\t\t\t[d].Carrier suppression testing = \'background,cs\'\n\t\t\t\t[e].Single Tone TX testing = \'background,stone\'\n\t   mp_ctx stop\t\t\t\t## Stop Tx Mode\n\t9. mp_query\t\t\t\t## Get Tx/Rx Packet Counter.\n"
              );
  FUN_0001d8c8("##### [ 2. HW TX mode ] VHT/HE IC Suppport Only #####");
  FUN_0001d9f4(
              "\tInput the parameters like this:\n\trtwpriv wlan0 [Channel] [Bandwidth] [ANT_PAH] [RateID] [TxMode] [Packet Interval] [PacketLength] [Packet Count] [Packet Pattern]\n\t[Channel]: 1~177\n\t[BW]: 0 = 20M, 1 = 40M, 2 = 80M\n \t[ANT_PAH]: a: PATH A, b: PATH B, c: PATH C, d: PATH D, ab : PATH AB 2x2 ....\n\t[RateID]:\n\t"
              );
  for (local_c = 0; local_c < 0x84; local_c = local_c + 1) {
    iVar1 = FUN_0002066c((&PTR_DAT_000410f0)[local_c],"HE1MCS0",7);
    if (iVar1 == 0) {
      FUN_0001d9f4("\n\n\t[ 80211AX Support Rate Lists]:\n\t");
    }
    else {
      iVar1 = FUN_0002066c((&PTR_DAT_000410f0)[local_c],"VHT1MCS0",8);
      if (iVar1 == 0) {
        FUN_0001d9f4("\n\t[ 80211AC Support Rate Lists]:\n\t");
      }
    }
    FUN_0001d9f4(&DAT_0002cb7c,(&PTR_DAT_000410f0)[local_c]);
    if (local_c == 0xb) {
      FUN_0001d9f4(&DAT_0002d490);
    }
    else if ((local_c < 0xc) || (0x2b < local_c)) {
      if ((local_c < 0x2c) || (0x53 < local_c)) {
        if (((0x53 < local_c) && ((local_c + -0x54) % 0xb == 0)) && (local_c + -0x54 != 0)) {
          FUN_0001d9f4(&DAT_0002d490);
        }
      }
      else if (((local_c + -0x2c) % 9 == 0) && (local_c + -0x2c != 0)) {
        FUN_0001d9f4(&DAT_0002d490);
      }
    }
    else {
      uVar2 = local_c - 0xc;
      if (((uVar2 & 0xf) == 0) && (uVar2 != 0)) {
        FUN_0001d9f4(&DAT_0002d490);
      }
      else if (uVar2 == 0x1f) {
        FUN_0001d9f4(&DAT_0002d490);
      }
    }
  }
  FUN_0001d8c8("\n\n\t[ TxMode ]: 1: PACKET Tx 2:CONTINUOUS TX 3:OFDM Single Tone TX");
  FUN_0001d8c8("\t[ PacketLength] (Option): Packet of payload data length, default 1500");
  FUN_0001d8c8(
              "\t[ Packet Count] (Option): count the number of packet to Tx , set 0 for CONTINUOUS Packet TX ,default 0"
              );
  FUN_0001d8c8("\t[ Packet Interval] (Option): 1~65535 us,default 2000");
  FUN_0001d8c8("\t[ Packet Pattern] (Option): 00~ff(hex) ,default random hex\n");
  FUN_0001d8c8("\n##### [ 3. (80211AX) HW TX mode ] AX IC Suppport Only #####\n");
  FUN_0001d8c8(
              "\tInput the parameters like this(CMD format):\n\t\trtwpriv wlan0 [Channel] [Bandwidth] [ANT_PAH] [RateID] [TxMode] [ru_tone=(int) [ppdu=(int)]\n\n\tRU Tone support list(Refer Coding:LDPC):\n\tRU Tone CMD: [ mp_plcp_data ru_tone=(int) ]\n\t0 : [26-Tone]\n\t1 : [52-Tone]\n\t2 : [106-Tone]\n\t3 : [242-Tone]\n\t4 : [484-Tone]\n\t5 : [966-Tone]\n\n\tConifg PPDU Type: 0 = CCK , 1 = LEGACY, 2 = HT_MF, 3 = HT_GF, 4 = VHT, 5 = HE_SU, 6 = HE_ER_SU, 7 = HE_MU_OFDMA, 8 = HE_TB\n\tCoding CMD:\t[mp_plcp_user coding=(int)] ( 0:BCC , 1:LDPC )\n\tRU Alloc CMD:\t[ mp_plcp_user ru_alloc=(int) ]"
              );
  FUN_0001d8c8("\n#####[ 4. RX mode ] #####");
  FUN_0001d8c8(
              "\t1. mp_start\t\t\t\t## enter to MP Mode\n \t2. mp_bandwidth 40M=[Num]\t\t## input [Num], 0=20M, 1=40M, 2=80M\n \t3. mp_channel [Num]\t\t\t## input [Num] = 1~167 channel number\n \t5. mp_ant_rx [Path]\t\t\t## input Antenna [PARH] = a,b,c,d,ab,ac,ad...\n\t6. mp_arx start\t\t\t\t## Enter Rx packet mode\n \t7. mp_arx phy\t\t\t\t## Query Rx Phy Packet Count\n\t8. mp_reset_stats\t\t\t## reset all Count\n"
              );
  FUN_0001d8c8("\n#####[ 5. Read/Write RF reg ] #####");
  FUN_0001d8c8(
              "\t1. rfr [RF_Path] [Reg_Addr]  ,return hex value, # RF Path= 0/1/2/3 , Reg Addr hex = 0xXX.\n \t2. rfw [RF_Path] [Reg_Addr] [Value] ,# RF Path= 0/1/2/3 , Reg Addr hex = 0xXX , Value Hex = 0x00000 .\n \t3. read_rf [RF_Path],[reg_Addr] ,return decimal value ,# RF Path= 0/1/2/3 , Reg Addr hex = 0xXX .\n \t4. write_rf [RF_Path],[Reg_Addr],[Value] ,# RF Path= 0/1/2/3 , Reg Addr hex = 0xXX , Value Hex = 0x00000 .\n"
              );
  FUN_0001d8c8("\n#####[ 6. Read/Write mac/bb reg ] #####");
  FUN_0001d8c8(
              "\t1. read [data width],[Reg_Addr]  ,return hex value, # Data Width= 1/2/4 , Reg Addr hex = 0xXX .\n \t2. write [data width],[Reg_Add],[Value] ,# Data Width= 1/2/4 , Reg Addr hex = 0xXX , Value Hex = 0x00000 ."
              );
  return;
}



/* ===== FUN_00013998 @ 00013998 size=240 ===== */

void FUN_00013998(int param_1,int param_2,byte param_3)

{
  undefined1 local_a;
  undefined1 local_9;
  
  for (local_9 = 0; local_9 < param_3; local_9 = local_9 + 1) {
    for (local_a = 0; local_a < 8; local_a = local_a + 1) {
      if (*(char *)(param_2 + (uint)local_9 * 8 + (uint)local_a) != '\0') {
        *(byte *)(param_1 + (uint)local_9) =
             *(byte *)(param_1 + (uint)local_9) | (byte)(1 << local_a);
      }
    }
  }
  return;
}



/* ===== FUN_00013a88 @ 00013a88 size=316 ===== */

void FUN_00013a88(int param_1,int param_2,byte param_3)

{
  byte bVar1;
  undefined4 local_14;
  undefined4 local_10;
  byte local_9;
  
  local_14 = DAT_0002dcb4;
  local_10 = DAT_0002dcb8;
  for (local_9 = 0; local_9 < param_3; local_9 = local_9 + 1) {
    bVar1 = local_10._3_1_ ^ *(byte *)(param_2 + (uint)local_9);
    local_10 = CONCAT31((int3)local_10,local_14._3_1_);
    local_14 = CONCAT31(CONCAT21(CONCAT11(local_14._2_1_,bVar1 ^ local_14._1_1_),
                                 bVar1 ^ (byte)local_14),bVar1);
  }
  for (local_9 = 0; local_9 < 8; local_9 = local_9 + 1) {
    *(byte *)(param_1 + (uint)local_9) = *(byte *)((int)&local_10 + (3 - (uint)local_9)) ^ 1;
  }
  return;
}



/* ===== FUN_00013bc4 @ 00013bc4 size=396 ===== */

void FUN_00013bc4(int param_1,int param_2,byte param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  byte local_9;
  
  local_1c = DAT_0002dcbc;
  local_18 = DAT_0002dcc0;
  local_14 = DAT_0002dcc4;
  local_10 = DAT_0002dcc8;
  for (local_9 = 0; local_9 < param_3; local_9 = local_9 + 1) {
    bVar2 = local_10._3_1_ ^ *(byte *)(param_2 + (uint)local_9);
    bVar3 = local_14._3_1_;
    local_14 = CONCAT31((int3)local_14,local_18._3_1_);
    uVar1 = (uint)local_18 >> 8;
    local_10 = CONCAT31((int3)local_10,bVar2 ^ bVar3);
    bVar3 = bVar2 ^ (byte)local_18;
    local_18 = CONCAT22((short)uVar1,CONCAT11(bVar3,local_1c._3_1_));
    local_1c = CONCAT31((int3)local_1c,bVar2);
  }
  for (local_9 = 0; local_9 < 0x10; local_9 = local_9 + 1) {
    *(char *)(param_1 + (uint)local_9) = '\x01' - *(char *)((int)&local_10 + (3 - (uint)local_9));
  }
  return;
}



/* ===== FUN_00013d50 @ 00013d50 size=764 ===== */

void FUN_00013d50(int param_1,char *param_2)

{
  uint in_fpscr;
  undefined4 uVar1;
  undefined4 extraout_s1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  byte local_38 [4];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  double dStack_28;
  double dStack_20;
  byte local_12;
  char local_11;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = 0;
  uStack_c = 0;
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_48 = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_30 = 0;
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_58 = 0;
  if ((*(byte *)(param_1 + 4) & 2) == 0) {
    *(undefined2 *)(param_1 + 0x12) = 0xf3a0;
  }
  else {
    *(undefined2 *)(param_1 + 0x12) = 0x5cf;
  }
  uStack_44 = uStack_34;
  switch(*param_2) {
  case '\0':
    *(undefined1 *)(param_1 + 0x14) = 10;
    local_10 = 0;
    uStack_c = 0x40200000;
    local_48 = 0x1000100;
    break;
  case '\x01':
    *(undefined1 *)(param_1 + 0x14) = 0x14;
    local_10 = 0;
    uStack_c = 0x40100000;
    uStack_44._1_3_ = (undefined3)((uint)uStack_34 >> 8);
    uStack_44 = CONCAT31(uStack_44._1_3_,1);
    local_48 = 0x10000;
    break;
  case '\x02':
    *(undefined1 *)(param_1 + 0x14) = 0x37;
    local_10 = 0x745d1746;
    uStack_c = 0x3ff745d1;
    uStack_44._2_2_ = (undefined2)((uint)uStack_34 >> 0x10);
    uStack_44 = CONCAT22(uStack_44._2_2_,0x100);
    uStack_44 = CONCAT31(uStack_44._1_3_,1);
    local_48 = 0x10101;
    break;
  case '\x03':
    *(undefined1 *)(param_1 + 0x14) = 0x6e;
    local_10 = 0x745d1746;
    uStack_c = 0x3fe745d1;
    uStack_44 = CONCAT13((char)((uint)uStack_34 >> 0x18),0x10000);
    uStack_44._0_2_ = CONCAT11(1,(char)uStack_34);
    local_48 = 0x1010100;
  }
  dStack_20 = (double)VectorUnsignedToFloat
                                (*(undefined4 *)(param_1 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  dStack_20 = (double)CONCAT44(uStack_c,local_10) * dStack_20;
  uStack_2c = uStack_34;
  uVar1 = FUN_00026570(SUB84(dStack_20,0));
  dStack_28 = (double)CONCAT44(extraout_s1,uVar1);
  if ((*param_2 != '\x03') ||
     ((dStack_28 - dStack_20 < DAT_00014060 && (DAT_00014068 < dStack_28 - dStack_20)))) {
    local_11 = '\0';
  }
  else {
    local_11 = '\x01';
  }
  *(ushort *)(param_1 + 0x16) = (ushort)(0.0 < dStack_28) * (short)(longlong)dStack_28;
  for (local_12 = 0; local_12 < 0x10; local_12 = local_12 + 1) {
    local_38[local_12] = (byte)((int)(uint)*(ushort *)(param_1 + 0x16) >> local_12) & 1;
  }
  if (local_11 == '\0') {
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x15) = 0x80;
    uStack_3c = CONCAT13(1,(undefined3)uStack_3c);
  }
  FUN_00013bc4(&local_58,&local_48,0x20);
  FUN_00020350(param_1 + 0x18,0,2);
  FUN_00013998(param_1 + 0x18,&local_58,2);
  return;
}



/* ===== FUN_00014070 @ 00014070 size=1032 ===== */

void FUN_00014070(undefined4 param_1,int param_2,byte *param_3)

{
  uint in_fpscr;
  undefined4 uVar1;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar2;
  double dVar3;
  char local_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  uint uStack_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  byte local_11;
  uint local_10;
  uint local_c;
  
  uStack_44 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_38 = 0;
  uStack_34 = uStack_44;
  if ((*(byte *)(param_2 + 1) < 5) || (0xc < *(byte *)(param_2 + 1))) {
    local_c = 0;
    if (param_3[2] < 3) {
      local_11 = param_3[2];
    }
    else {
      local_11 = 4;
    }
    if ((*(byte *)(param_2 + 4) & 1) == 0) {
      local_20 = 0;
      uStack_1c = 0x40100000;
    }
    else {
      local_20 = 0xcccccccd;
      uStack_1c = 0x400ccccc;
    }
    if ((*(byte *)(param_2 + 1) < 100) || (0x8b < *(byte *)(param_2 + 1))) {
      dVar2 = (double)VectorSignedToFloat((local_11 + 3) * 4,(byte)(in_fpscr >> 0x16) & 3);
      dVar3 = (double)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
      uVar1 = FUN_00026570(SUB84((dVar2 + dVar3 * (double)CONCAT44(uStack_1c,local_20)) / 4.0,0));
      local_24 = (uint)(0.0 < (double)CONCAT44(extraout_s1_00,uVar1)) *
                 (int)(longlong)(double)CONCAT44(extraout_s1_00,uVar1);
    }
    else {
      dVar2 = (double)VectorSignedToFloat((local_11 + 3) * 4,(byte)(in_fpscr >> 0x16) & 3);
      dVar3 = (double)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
      uVar1 = FUN_00026570(SUB84((dVar2 + dVar3 * (double)CONCAT44(uStack_1c,local_20) + 4.0) / 4.0,
                                 0));
      local_24 = (uint)(0.0 < (double)CONCAT44(extraout_s1,uVar1)) *
                 (int)(longlong)(double)CONCAT44(extraout_s1,uVar1);
    }
    local_10 = local_24 * 3 - 3;
  }
  else {
    local_c = (uint)*param_3;
    local_10 = *(uint *)(param_2 + 0xc);
  }
  switch(local_c) {
  case 0:
    local_48[0] = '\x01';
    local_48[1] = '\x01';
    local_48[2] = '\0';
    local_48[3] = '\x01';
    break;
  case 1:
    builtin_strncpy(local_48,"\x01\x01\x01\x01",4);
    break;
  case 2:
    local_48[0] = '\0';
    local_48[1] = '\x01';
    local_48[2] = '\0';
    local_48[3] = '\x01';
    break;
  case 3:
    local_48[0] = '\0';
    local_48[1] = '\x01';
    local_48[2] = '\x01';
    local_48[3] = '\x01';
    break;
  case 4:
    local_48[0] = '\x01';
    local_48[1] = '\0';
    local_48[2] = '\0';
    local_48[3] = '\x01';
    break;
  case 5:
    local_48[0] = '\x01';
    local_48[1] = '\0';
    local_48[2] = '\x01';
    local_48[3] = '\x01';
    break;
  case 6:
    local_48[0] = '\0';
    local_48[1] = '\0';
    local_48[2] = '\0';
    local_48[3] = '\x01';
    break;
  case 7:
    local_48[0] = '\0';
    local_48[1] = '\0';
    local_48[2] = '\x01';
    local_48[3] = '\x01';
  }
  uStack_44 = uStack_44 & 0xffffff00;
  for (local_28 = 0; (int)local_28 < 0xc; local_28 = local_28 + 1) {
    *(byte *)((int)&uStack_44 + local_28 + 1) = (byte)(local_10 >> (local_28 & 0xff)) & 1;
  }
  local_38._0_2_ = (ushort)(byte)local_38;
  local_2c = 0;
  while( true ) {
    if (0x10 < local_2c) break;
    local_38._0_2_ = CONCAT11(local_38._1_1_ + local_48[local_2c],(byte)local_38);
    local_2c = local_2c + 1;
  }
  local_38 = local_38 & 0xffff01ff;
  for (local_30 = 0x12; local_30 < 0x18; local_30 = local_30 + 1) {
    local_48[local_30] = '\0';
  }
  FUN_00020350(param_2 + 0x1a,0,3);
  FUN_00013998(param_2 + 0x1a,local_48,3);
  return;
}



/* ===== FUN_00014498 @ 00014498 size=800 ===== */

void FUN_00014498(byte *param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  byte local_48 [12];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ushort uStack_24;
  byte bStack_22;
  byte bStack_21;
  byte local_20 [4];
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_10;
  uint local_c;
  
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_48[8] = 0;
  local_48[9] = 0;
  local_48[10] = 0;
  local_48[0xb] = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_18 = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  local_48[6] = 0;
  local_48[7] = 0;
  uStack_3c = uStack_1c;
  for (local_c = 0; local_c < 7; local_c = local_c + 1) {
    local_48[local_c + 8] = (byte)((int)(uint)*param_2 >> (local_c & 0xff)) & 1;
  }
  uStack_3c = CONCAT13(param_1[4] >> 5,(undefined3)uStack_3c);
  uStack_2c = uStack_1c;
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    *(byte *)((int)&uStack_38 + local_c) = (byte)(*(uint *)(param_1 + 0xc) >> (local_c & 0xff)) & 1;
  }
  local_28 = (uint)CONCAT12(1,CONCAT11((char)((int)((uint)param_1[4] << 0x1b) >> 0x1f) + '\x01',1));
  _uStack_24 = CONCAT13((byte)(((uint)param_1[4] << 0x1f) >> 0x1f),
                        CONCAT12((byte)(((uint)param_1[4] << 0x1c) >> 0x1f),
                                 (ushort)((param_1[4] & 4) != 0)));
  if ((param_1[4] & 0x10) == 0) {
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    local_20[3] = 0;
  }
  else {
    local_10 = (uint)(*param_1 >> 4) - (uint)param_2[1];
    for (local_c = 0; local_c < 2; local_c = local_c + 1) {
      iVar1 = local_10 >> (local_c & 0xff);
      bVar2 = (byte)iVar1 & 1;
      if (iVar1 < 0) {
        bVar2 = -bVar2;
      }
      local_20[local_c] = bVar2;
    }
  }
  uStack_14 = uStack_1c;
  FUN_00013a88(local_48,local_48 + 8,0x22);
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    local_20[local_c + 2] = local_48[local_c];
  }
  for (local_c = 0x2a; local_c < 0x30; local_c = local_c + 1) {
    local_48[local_c + 8] = 0;
  }
  FUN_00020350(param_1 + 0x1d,0,6);
  FUN_00013998(param_1 + 0x1d,local_48 + 8,6);
  return;
}



/* ===== FUN_000147b8 @ 000147b8 size=848 ===== */

void FUN_000147b8(int param_1,byte *param_2)

{
  undefined1 auStack_44 [8];
  byte abStack_3c [4];
  undefined1 auStack_38 [6];
  byte abStack_32 [12];
  undefined1 local_26;
  undefined1 local_25;
  byte local_24;
  undefined1 local_23;
  byte local_22;
  byte local_21;
  byte abStack_20 [4];
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 auStack_1a [8];
  byte local_12 [6];
  uint local_c;
  
  local_c = 0;
  FUN_00020350(abStack_3c,0,0x30);
  FUN_00020350(auStack_44,0,8);
  for (local_c = 0; local_c < 2; local_c = local_c + 1) {
    abStack_3c[local_c] = (byte)((int)(uint)(*(byte *)(param_1 + 4) >> 5) >> (local_c & 0xff)) & 1;
  }
  abStack_3c[2] = 1;
  abStack_3c[3] = (byte)(((uint)*(byte *)(param_1 + 4) << 0x1d) >> 0x1f);
  for (local_c = 0; local_c < 6; local_c = local_c + 1) {
    auStack_38[local_c] = 0;
  }
  for (local_c = 0; local_c < 0xc; local_c = local_c + 1) {
    if (local_c < 3) {
      abStack_32[local_c] = (byte)((int)(param_2[2] - 1) >> (local_c & 0xff)) & 1;
    }
    else {
      abStack_32[local_c] = 0;
    }
  }
  local_26 = 0;
  local_25 = 1;
  local_24 = (byte)(((uint)*(byte *)(param_1 + 4) << 0x1f) >> 0x1f);
  if (((*(byte *)(param_1 + 4) & 1) == 0) || (*(uint *)(param_2 + 4) % 10 != 9)) {
    local_23 = 0;
  }
  else {
    local_23 = 1;
  }
  local_22 = (byte)(((uint)*(byte *)(param_1 + 4) << 0x1c) >> 0x1f);
  local_21 = param_2[8];
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    abStack_20[local_c] = (byte)((int)(uint)*param_2 >> (local_c & 0xff)) & 1;
  }
  local_1c = 0;
  local_1b = 1;
  FUN_00013a88(auStack_44,abStack_3c,0x22);
  for (local_c = 0; local_c < 8; local_c = local_c + 1) {
    auStack_1a[local_c] = auStack_44[local_c];
  }
  for (local_c = 0x2a; local_c < 0x30; local_c = local_c + 1) {
    abStack_3c[local_c] = 0;
  }
  FUN_00020350(param_1 + 0x23,0,6);
  FUN_00013998(param_1 + 0x23,abStack_3c,6);
  return;
}



/* ===== FUN_00014b08 @ 00014b08 size=952 ===== */

void FUN_00014b08(int param_1)

{
  undefined3 local_68;
  undefined1 auStack_48 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined1 local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 6;
  local_1c = 0;
  FUN_00020350(&local_40,0,0x20);
  FUN_00020350(auStack_48,0,8);
  if ((*(byte *)(param_1 + 4) & 0x10) == 0) {
    if ((*(byte *)(param_1 + 4) & 0xe0) == 0) {
      local_10 = 0x11;
      local_14 = 3;
    }
    else if ((*(byte *)(param_1 + 4) & 0xe0) == 0x20) {
      local_10 = 0x13;
      local_14 = 2;
    }
    else if ((*(byte *)(param_1 + 4) & 0xe0) == 0x40) {
      local_10 = 0x15;
      local_14 = 2;
    }
    else {
      local_10 = 0x15;
      local_14 = 2;
    }
    local_1c = local_10 + local_14;
    local_20 = *(int *)(param_1 + 0xc) + 3U >> 2;
    for (local_c = 0; local_c < local_10; local_c = local_c + 1) {
      *(byte *)((int)&local_40 + local_c) = (byte)(local_20 >> (local_c & 0xff)) & 1;
    }
    for (local_c = 0; local_c < local_14; local_c = local_c + 1) {
      *(undefined1 *)((int)&local_40 + local_10 + local_c) = 1;
    }
    FUN_00013a88(auStack_48,&local_40,local_1c & 0xff);
    for (local_c = 0; local_c < local_18; local_c = local_c + 1) {
      *(undefined1 *)((int)&local_40 + local_10 + local_14 + local_c) = 0;
    }
  }
  else if ((*(byte *)(param_1 + 4) & 0xe0) == 0) {
    local_40 = DAT_0002dccc;
    uStack_3c = DAT_0002dcd0;
    uStack_38 = DAT_0002dcd4;
    uStack_34 = DAT_0002dcd8;
    local_30 = DAT_0002dcdc;
    uStack_2c = DAT_0002dce0;
    local_28 = CONCAT22(local_28._2_2_,(short)DAT_0002dce4);
  }
  else if ((*(byte *)(param_1 + 4) & 0xe0) == 0x20) {
    local_68 = (undefined3)DAT_0002dd00;
    local_40 = DAT_0002dce8;
    uStack_3c = DAT_0002dcec;
    uStack_38 = DAT_0002dcf0;
    uStack_34 = DAT_0002dcf4;
    local_30 = DAT_0002dcf8;
    uStack_2c = DAT_0002dcfc;
    local_28 = CONCAT13(local_28._3_1_,local_68);
  }
  else if ((*(byte *)(param_1 + 4) & 0xe0) == 0x40) {
    local_24 = (undefined1)DAT_0002dd20;
    local_40 = DAT_0002dd04;
    uStack_3c = DAT_0002dd08;
    uStack_38 = DAT_0002dd0c;
    uStack_34 = DAT_0002dd10;
    local_30 = DAT_0002dd14;
    uStack_2c = DAT_0002dd18;
    local_28 = DAT_0002dd1c;
  }
  FUN_00020350(param_1 + 0x29,0,4);
  FUN_00013998(param_1 + 0x29,&local_40,4);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  FUN_00013998(param_1 + 0x2d,auStack_48,1);
  return;
}



/* ===== FUN_00014ec0 @ 00014ec0 size=480 ===== */

void FUN_00014ec0(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined1 auStack_54 [8];
  int local_4c;
  undefined8 local_44;
  uint local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  byte local_24 [4];
  undefined4 uStack_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_2c = 0;
  local_24[0] = 0;
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  local_44 = 0;
  local_18 = 0x10;
  local_1c = *(int *)(param_1 + 0xc);
  local_3c = CONCAT13((char)(local_1c - 4U >> 0xd),CONCAT12((char)(local_1c - 4U >> 0xc),1)) &
             0x101ffff;
  uStack_38 = uStack_28;
  for (local_c = 4; local_c < 0x10; local_c = local_c + 1) {
    *(byte *)((int)&local_3c + local_c) = (byte)(local_1c - 4U >> (local_c - 4U & 0xff)) & 1;
  }
  local_4c = param_1;
  uStack_20 = uStack_28;
  FUN_00013a88(&local_44,&local_3c,0x10);
  for (local_10 = 0x10; local_10 < 0x18; local_10 = local_10 + 1) {
    *(undefined1 *)((int)&local_3c + local_10) = auStack_54[local_10];
  }
  for (local_14 = 0x18; local_14 < 0x20; local_14 = local_14 + 1) {
    iVar1 = 0x4e >> (local_14 - 0x18U & 0xff);
    bVar2 = (byte)iVar1 & 1;
    if (iVar1 < 0) {
      bVar2 = -bVar2;
    }
    *(byte *)((int)&local_3c + local_14) = bVar2;
  }
  FUN_00020350(local_4c + 0x2e,0,4);
  FUN_00013998(local_4c + 0x2e,&local_3c,4);
  return;
}



/* ===== FUN_000150a0 @ 000150a0 size=1204 ===== */

undefined4
FUN_000150a0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  byte bVar1;
  uint in_fpscr;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_s1;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uStack_1c;
  double local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = 0;
  uStack_c = 0;
  dVar5 = (double)VectorUnsignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  dVar6 = (double)VectorUnsignedToFloat(param_6,(byte)(in_fpscr >> 0x16) & 3);
  if (param_4 == 0) {
    local_10 = 0;
    uStack_c = 0x3fe00000;
  }
  else if (param_4 == 1) {
    local_10 = 0x55555555;
    uStack_c = 0x3fe55555;
  }
  else if (param_4 == 2) {
    local_10 = 0;
    uStack_c = 0x3fe80000;
  }
  else if (param_4 == 3) {
    local_10 = 0xaaaaaaab;
    uStack_c = 0x3feaaaaa;
  }
  uVar3 = in_fpscr & 0xfffffff;
  if (DAT_00015558 < dVar6) {
    if (DAT_00015568 < dVar6) {
      uVar2 = uVar3 | (uint)(dVar6 == DAT_00015578) << 0x1e | (uint)(DAT_00015578 <= dVar6) << 0x1d;
      bVar1 = (byte)(uVar2 >> 0x18);
      if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
        uVar2 = uVar3 | (uint)(dVar6 == DAT_00015580) << 0x1e |
                (uint)(DAT_00015580 <= dVar6) << 0x1d;
        bVar1 = (byte)(uVar2 >> 0x18);
        if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) {
          uVar4 = FUN_00026570(SUB84((dVar5 / DAT_00015578) / (double)CONCAT44(uStack_c,local_10),0)
                              );
          local_18 = (double)CONCAT44(extraout_s1,uVar4);
          uStack_1c = 0x409e6000;
        }
        else {
          local_18 = 2.0;
          dVar7 = (1.0 - (double)CONCAT44(uStack_c,local_10)) * DAT_00015588 + dVar5;
          uVar3 = uVar3 | (uint)(dVar6 < dVar7) << 0x1f;
          uVar2 = uVar3 | (uint)(NAN(dVar6) || NAN(dVar7)) << 0x1c;
          if ((byte)(uVar3 >> 0x1f) == ((byte)(uVar2 >> 0x1c) & 1)) {
            uStack_1c = 0x409e6000;
          }
          else {
            uStack_1c = 0x40944000;
          }
        }
      }
      else {
        local_18 = 1.0;
        uStack_1c = 0x409e6000;
      }
    }
    else {
      local_18 = 1.0;
      dVar7 = (1.0 - (double)CONCAT44(uStack_c,local_10)) * DAT_00015570 + dVar5;
      uVar3 = uVar3 | (uint)(dVar6 < dVar7) << 0x1f;
      uVar2 = uVar3 | (uint)(NAN(dVar6) || NAN(dVar7)) << 0x1c;
      if ((byte)(uVar3 >> 0x1f) == ((byte)(uVar2 >> 0x1c) & 1)) {
        uStack_1c = 0x409e6000;
      }
      else {
        uStack_1c = 0x40944000;
      }
    }
  }
  else {
    local_18 = 1.0;
    dVar7 = (1.0 - (double)CONCAT44(uStack_c,local_10)) * DAT_00015560 + dVar5;
    uVar3 = uVar3 | (uint)(dVar6 < dVar7) << 0x1f;
    uVar2 = uVar3 | (uint)(NAN(dVar6) || NAN(dVar7)) << 0x1c;
    if ((byte)(uVar3 >> 0x1f) == ((byte)(uVar2 >> 0x1c) & 1)) {
      uStack_1c = 0x40944000;
    }
    else {
      uStack_1c = 0x40844000;
    }
  }
  dVar7 = (double)((ulonglong)uStack_1c << 0x20) * (double)CONCAT44(uStack_c,local_10);
  if (local_18 * dVar7 - dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  else {
    dVar5 = local_18 * dVar7 - dVar5;
  }
  if ((local_18 * (double)((ulonglong)uStack_1c << 0x20) - dVar6) - dVar5 <= 0.0) {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (local_18 * (double)((ulonglong)uStack_1c << 0x20) - dVar6) - dVar5;
  }
  dVar7 = local_18 * DAT_00015590 * (double)((ulonglong)uStack_1c << 0x20) *
          (1.0 - (double)CONCAT44(uStack_c,local_10));
  uVar3 = uVar2 & 0xfffffff | (uint)(dVar6 < dVar7) << 0x1f | (uint)(dVar6 == dVar7) << 0x1e;
  bVar1 = (byte)(uVar3 >> 0x18);
  if (((bool)(bVar1 >> 6 & 1) || (bool)(bVar1 >> 7) != (NAN(dVar6) || NAN(dVar7))) ||
     (uVar3 = uVar2 & 0xfffffff |
              (uint)(dVar5 < (dVar6 * DAT_00015598 * (double)CONCAT44(uStack_c,local_10)) /
                             (1.0 - (double)CONCAT44(uStack_c,local_10))) << 0x1f,
     !SUB41(uVar3 >> 0x1f,0))) {
    dVar5 = local_18 * DAT_000155a0 * (double)((ulonglong)uStack_1c << 0x20) *
            (1.0 - (double)CONCAT44(uStack_c,local_10));
    uVar3 = uVar3 & 0xfffffff | (uint)(dVar6 < dVar5) << 0x1f | (uint)(dVar6 == dVar5) << 0x1e;
    bVar1 = (byte)(uVar3 >> 0x18);
    if ((bool)(bVar1 >> 6 & 1) || (bool)(bVar1 >> 7) != (NAN(dVar6) || NAN(dVar5))) {
      return 0;
    }
  }
  VectorUnsignedToFloat(param_5 * param_3 * param_2,(byte)(uVar3 >> 0x16) & 3);
  return 1;
}



/* ===== FUN_000155a8 @ 000155a8 size=1980 ===== */

void FUN_000155a8(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int extraout_r1;
  uint in_fpscr;
  undefined4 uVar4;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  double dVar5;
  double dVar6;
  int local_98 [4];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  byte local_35;
  undefined4 local_34;
  byte local_2d;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_14;
  
  local_14 = 0;
  local_35 = *(byte *)(param_1 + 1);
  local_3c = 0;
  local_70[0] = DAT_0002dd24;
  local_70[1] = DAT_0002dd28;
  local_70[2] = DAT_0002dd2c;
  local_70[3] = DAT_0002dd30;
  local_60 = DAT_0002dd34;
  uStack_5c = DAT_0002dd38;
  uStack_58 = DAT_0002dd3c;
  uStack_54 = DAT_0002dd40;
  local_50 = DAT_0002dd44;
  uStack_4c = DAT_0002dd48;
  local_20 = 0;
  uStack_1c = 0;
  local_98[0] = DAT_0002dd4c;
  local_98[1] = DAT_0002dd50;
  local_98[2] = DAT_0002dd54;
  local_98[3] = DAT_0002dd58;
  local_88 = DAT_0002dd5c;
  uStack_84 = DAT_0002dd60;
  uStack_80 = DAT_0002dd64;
  uStack_7c = DAT_0002dd68;
  local_78 = DAT_0002dd6c;
  uStack_74 = DAT_0002dd70;
  local_40 = 0;
  local_44 = 0;
  local_28 = 0;
  local_2c = 0;
  local_48 = 0;
  if ((*(byte *)(param_1 + 4) & 0xe0) == 0) {
    local_24 = 0x34;
  }
  else if ((*(byte *)(param_1 + 4) & 0xe0) == 0x20) {
    local_24 = 0x6c;
  }
  else {
    local_24 = 0xea;
  }
  if ((local_35 < 0xd) || (0x2c < local_35)) {
    if ((99 < local_35) && (local_35 < 0x8c)) {
      local_3c = local_70[*param_2];
      switch(local_70[*param_2]) {
      case 0:
        local_20 = 0;
        uStack_1c = 0x3fe00000;
        break;
      case 1:
        local_20 = 0x55555555;
        uStack_1c = 0x3fe55555;
        break;
      case 2:
        local_20 = 0;
        uStack_1c = 0x3fe80000;
        break;
      case 3:
        local_20 = 0xaaaaaaab;
        uStack_1c = 0x3feaaaaa;
      }
      local_40 = local_98[*param_2];
      local_44 = (uint)param_2[1] * local_24 * local_40;
      dVar5 = (double)VectorUnsignedToFloat(local_44,(byte)(in_fpscr >> 0x16) & 3);
      dVar5 = dVar5 * (double)CONCAT44(uStack_1c,local_20);
      iVar2 = (uint)(0.0 < dVar5) * (int)(longlong)dVar5;
      if ((*(byte *)(param_1 + 4) & 8) == 0) {
        if ((*(byte *)(param_1 + 4) & 1) == 0) {
          dVar5 = (double)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
          uVar4 = FUN_00026570(SUB84((dVar5 / 4.0) / DAT_00015c18,0));
          local_28 = (uint)(0.0 < (double)CONCAT44(extraout_s1_03,uVar4)) *
                     (int)(longlong)(double)CONCAT44(extraout_s1_03,uVar4);
        }
        else {
          dVar5 = (double)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
          uVar4 = FUN_00026570(SUB84((dVar5 / DAT_00015c10) / DAT_00015c18,0));
          local_28 = (uint)(0.0 < (double)CONCAT44(extraout_s1_02,uVar4)) *
                     (int)(longlong)(double)CONCAT44(extraout_s1_02,uVar4);
        }
        bVar3 = *(byte *)(param_1 + 5);
        dVar6 = (double)VectorUnsignedToFloat
                                  ((*(int *)(param_1 + 0xc) + 2) * 8 + local_28 * 6,
                                   (byte)(in_fpscr >> 0x16) & 3);
        dVar5 = (double)VectorUnsignedToFloat
                                  (iVar2 * (uint)*(byte *)(param_1 + 5),(byte)(in_fpscr >> 0x16) & 3
                                  );
        uVar4 = FUN_00026570(SUB84(dVar6 / dVar5,0));
        local_2c = (uint)(0.0 < (double)CONCAT44(extraout_s1_04,uVar4)) *
                   (int)(longlong)(double)CONCAT44(extraout_s1_04,uVar4) * (uint)bVar3;
        local_14 = 0;
      }
      else {
        local_28 = 1;
        bVar3 = *(byte *)(param_1 + 5);
        dVar6 = (double)VectorUnsignedToFloat
                                  ((*(int *)(param_1 + 0xc) + 2) * 8,(byte)(in_fpscr >> 0x16) & 3);
        dVar5 = (double)VectorUnsignedToFloat
                                  (iVar2 * (uint)*(byte *)(param_1 + 5),(byte)(in_fpscr >> 0x16) & 3
                                  );
        uVar4 = FUN_00026570(SUB84(dVar6 / dVar5,0));
        local_2c = (uint)(0.0 < (double)CONCAT44(extraout_s1_05,uVar4)) *
                   (int)(longlong)(double)CONCAT44(extraout_s1_05,uVar4) * (uint)bVar3;
        local_48 = local_2c * local_44;
        local_14 = FUN_000150a0(local_2c * iVar2,local_44,param_2[1],local_3c,
                                *(undefined1 *)(param_1 + 5),local_48);
        local_2c = local_2c + local_14 * (uint)*(byte *)(param_1 + 5);
      }
      switch(local_3c) {
      case 0:
        local_34 = 2;
        break;
      case 1:
        local_34 = 3;
        break;
      case 2:
        local_34 = 4;
        break;
      case 3:
        local_34 = 6;
      }
      uVar4 = FUN_0001bcf8(local_44,local_28);
      FUN_0001bda0(uVar4,local_34);
      if (extraout_r1 != 0) {
        return;
      }
    }
  }
  else {
    if (*param_2 < 0x18) {
      if (*param_2 < 0x10) {
        if (*param_2 < 8) {
          local_2d = *param_2;
        }
        else {
          local_2d = *param_2 - 8;
        }
      }
      else {
        local_2d = *param_2 - 0x10;
      }
    }
    else {
      local_2d = *param_2 - 0x18;
    }
    local_3c = local_70[local_2d];
    switch(local_70[local_2d]) {
    case 0:
      local_20 = 0;
      uStack_1c = 0x3fe00000;
      break;
    case 1:
      local_20 = 0x55555555;
      uStack_1c = 0x3fe55555;
      break;
    case 2:
      local_20 = 0;
      uStack_1c = 0x3fe80000;
      break;
    case 3:
      local_20 = 0xaaaaaaab;
      uStack_1c = 0x3feaaaaa;
    }
    local_40 = local_98[local_2d];
    local_44 = (uint)param_2[1] * local_24 * local_40;
    dVar5 = (double)VectorUnsignedToFloat(local_44,(byte)(in_fpscr >> 0x16) & 3);
    dVar5 = dVar5 * (double)CONCAT44(uStack_1c,local_20);
    iVar2 = (uint)(0.0 < dVar5) * (int)(longlong)dVar5;
    if ((*(byte *)(param_1 + 4) & 8) == 0) {
      dVar5 = (double)VectorUnsignedToFloat(iVar2 * (uint)param_2[1],(byte)(in_fpscr >> 0x16) & 3);
      uVar4 = FUN_00026570(SUB84((dVar5 / 4.0) / DAT_00015c08,0));
      local_28 = (uint)(0.0 < (double)CONCAT44(extraout_s1,uVar4)) *
                 (int)(longlong)(double)CONCAT44(extraout_s1,uVar4);
      bVar3 = *(byte *)(param_1 + 5);
      dVar6 = (double)VectorUnsignedToFloat
                                ((*(int *)(param_1 + 0xc) + 2) * 8 + local_28 * 6,
                                 (byte)(in_fpscr >> 0x16) & 3);
      dVar5 = (double)VectorUnsignedToFloat
                                (iVar2 * (uint)*(byte *)(param_1 + 5),(byte)(in_fpscr >> 0x16) & 3);
      uVar4 = FUN_00026570(SUB84(dVar6 / dVar5,0));
      local_2c = (uint)(0.0 < (double)CONCAT44(extraout_s1_00,uVar4)) *
                 (int)(longlong)(double)CONCAT44(extraout_s1_00,uVar4) * (uint)bVar3;
    }
    else {
      local_28 = 1;
      iVar1 = (*(int *)(param_1 + 0xc) + 2) * 8;
      bVar3 = *(byte *)(param_1 + 5);
      dVar6 = (double)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
      dVar5 = (double)VectorUnsignedToFloat
                                (iVar2 * (uint)*(byte *)(param_1 + 5),(byte)(in_fpscr >> 0x16) & 3);
      uVar4 = FUN_00026570(SUB84(dVar6 / dVar5,0));
      local_2c = (uint)(0.0 < (double)CONCAT44(extraout_s1_01,uVar4)) *
                 (int)(longlong)(double)CONCAT44(extraout_s1_01,uVar4) * (uint)bVar3;
      local_48 = local_2c * local_44;
      local_14 = FUN_000150a0(iVar1,local_44,param_2[1],local_3c,*(undefined1 *)(param_1 + 5),
                              local_48);
      local_2c = local_2c + local_14 * (uint)*(byte *)(param_1 + 5);
    }
  }
  *(int *)(param_2 + 4) = local_2c;
  param_2[8] = (byte)local_14;
  return;
}



/* ===== FUN_00015db0 @ 00015db0 size=816 ===== */

void FUN_00015db0(int param_1,char *param_2)

{
  byte bVar1;
  char local_a;
  char local_9;
  
  local_9 = '\0';
  local_a = '\0';
  bVar1 = *(byte *)(param_1 + 1);
  if (((bVar1 < 0x15) || (0x1c < bVar1)) && ((bVar1 < 0x6e || (0x77 < bVar1)))) {
    if (((bVar1 < 0x1d) || (0x24 < bVar1)) && ((bVar1 < 0x78 || (0x81 < bVar1)))) {
      if (((bVar1 < 0x25) || (0x2c < bVar1)) && ((bVar1 < 0x82 || (0x8b < bVar1)))) {
        param_2[1] = '\x01';
      }
      else {
        param_2[1] = '\x04';
      }
    }
    else {
      param_2[1] = '\x03';
    }
  }
  else {
    param_2[1] = '\x02';
  }
  if ((bVar1 == 0) || (4 < bVar1)) {
    if ((bVar1 < 5) || (0xc < bVar1)) {
      if ((bVar1 < 0xd) || (0x2c < bVar1)) {
        if ((99 < bVar1) && (bVar1 < 0x8c)) {
          local_9 = bVar1 - 0x38;
          if ((bVar1 < 0x6e) || (0x77 < bVar1)) {
            if ((bVar1 < 0x78) || (0x81 < bVar1)) {
              if ((bVar1 < 0x82) || (0x8b < bVar1)) {
                local_a = bVar1 + 0x9c;
              }
              else {
                local_a = bVar1 + 0x7e;
              }
            }
            else {
              local_a = bVar1 + 0x88;
            }
          }
          else {
            local_a = bVar1 + 0x92;
          }
        }
      }
      else {
        local_a = bVar1 - 0xd;
        local_9 = bVar1 - 1;
      }
    }
    else {
      local_a = bVar1 - 5;
      local_9 = bVar1 - 1;
    }
  }
  else {
    switch(bVar1) {
    case 1:
      local_a = '\0';
      local_9 = '\0';
      break;
    case 2:
      local_a = '\x01';
      local_9 = '\x01';
      break;
    case 3:
      local_a = '\x02';
      local_9 = '\x02';
      break;
    case 4:
      local_a = '\x03';
      local_9 = '\x03';
    }
  }
  *param_2 = local_a;
  *(char *)(param_1 + 2) = local_9;
  param_2[2] = param_2[1];
  if ((*(byte *)(param_1 + 4) & 4) == 0) {
    *(undefined1 *)(param_1 + 5) = 1;
  }
  else if (param_2[1] == '\x01') {
    *(undefined1 *)(param_1 + 5) = 2;
    param_2[2] = param_2[1] << 1;
  }
  else {
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return;
}



/* ===== FUN_000160f0 @ 000160f0 size=248 ===== */

void FUN_000160f0(int param_1)

{
  undefined1 auStack_14 [4];
  undefined4 local_10;
  
  FUN_00015db0(param_1,auStack_14);
  if ((*(char *)(param_1 + 1) == '\0') || (4 < *(byte *)(param_1 + 1))) {
    FUN_000155a8(param_1,auStack_14);
    FUN_00014070(local_10,param_1,auStack_14);
  }
  else {
    FUN_00013d50(param_1,auStack_14);
  }
  if ((*(byte *)(param_1 + 1) < 0xd) || (0x2c < *(byte *)(param_1 + 1))) {
    if ((99 < *(byte *)(param_1 + 1)) && (*(byte *)(param_1 + 1) < 0x8c)) {
      FUN_000147b8(param_1,auStack_14);
      FUN_00014b08(param_1);
      FUN_00014ec0(param_1);
    }
  }
  else {
    FUN_00014498(param_1,auStack_14);
  }
  return;
}



/* ===== FUN_000161e8 @ 000161e8 size=60 ===== */

void FUN_000161e8(byte *param_1)

{
  if ((*param_1 & 1) != 0) {
    FUN_000160f0(param_1);
  }
  return;
}



/* ===== FUN_00016224 @ 00016224 size=2052 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00016224(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  double dVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint in_fpscr;
  undefined4 extraout_s1;
  float fVar8;
  undefined8 uVar9;
  char local_4108 [4];
  char acStack_4104 [4];
  char acStack_4100 [4];
  char acStack_40fc [4];
  char local_40f8 [4];
  char acStack_40f4 [4];
  char acStack_40f0 [4];
  char acStack_40ec [4];
  char local_40e8 [4];
  char acStack_40e4 [4];
  undefined2 local_40e0;
  char local_40dc [4];
  char acStack_40d8 [4];
  char acStack_40d4 [4];
  char acStack_40d0 [4];
  char local_40cc [4];
  char acStack_40c8 [4];
  char acStack_40c4 [4];
  char acStack_40c0 [4];
  char local_40bc [4];
  char acStack_40b8 [4];
  undefined2 local_40b4;
  undefined1 local_40b2;
  char local_40b0 [4];
  char acStack_40ac [4];
  char acStack_40a8 [4];
  char acStack_40a4 [4];
  char local_40a0 [4];
  char acStack_409c [4];
  char acStack_4098 [4];
  char acStack_4094 [4];
  char local_4090 [4];
  char acStack_408c [4];
  undefined2 local_4088;
  undefined1 local_4086;
  char local_4084 [4];
  char acStack_4080 [4];
  char acStack_407c [4];
  char acStack_4078 [4];
  char local_4074 [4];
  char acStack_4070 [4];
  char acStack_406c [4];
  char acStack_4068 [4];
  char local_4064 [4];
  char acStack_4060 [4];
  char acStack_405c [4];
  undefined1 local_4058;
  char local_4054 [8192];
  int local_2054;
  int local_2050;
  int aiStack_204c [1024];
  undefined4 auStack_104c [1024];
  float fStack_4c;
  float fStack_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined *local_38;
  float fStack_34;
  float fStack_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_38 = &DAT_0002dd74;
  local_3c = 0;
  local_40 = 3;
  local_28 = 0;
  local_2c = 0;
  local_4084 = (char  [4])s_mp_psd_analysis_pts_1024_start_5_0002de08._0_4_;
  acStack_4080 = (char  [4])s_mp_psd_analysis_pts_1024_start_5_0002de08._4_4_;
  acStack_407c = (char  [4])s_mp_psd_analysis_pts_1024_start_5_0002de08._8_4_;
  acStack_4078 = (char  [4])s_mp_psd_analysis_pts_1024_start_5_0002de08._12_4_;
  local_4074 = (char  [4])s_mp_psd_analysis_pts_1024_start_5_0002de08._16_4_;
  acStack_4070 = (char  [4])s_mp_psd_analysis_pts_1024_start_5_0002de08._20_4_;
  acStack_406c = (char  [4])s_mp_psd_analysis_pts_1024_start_5_0002de08._24_4_;
  acStack_4068 = (char  [4])s_mp_psd_analysis_pts_1024_start_5_0002de08._28_4_;
  local_4064 = (char  [4])s_mp_psd_analysis_pts_1024_start_5_0002de08._32_4_;
  acStack_4060 = (char  [4])s_mp_psd_analysis_pts_1024_start_5_0002de08._36_4_;
  acStack_405c = (char  [4])s_mp_psd_analysis_pts_1024_start_5_0002de08._40_4_;
  local_4058 = (undefined1)ram0x0002de34;
  local_40b0 = (char  [4])s_mp_psd_analysis_pts_512_start_25_0002de38._0_4_;
  acStack_40ac = (char  [4])s_mp_psd_analysis_pts_512_start_25_0002de38._4_4_;
  acStack_40a8 = (char  [4])s_mp_psd_analysis_pts_512_start_25_0002de38._8_4_;
  acStack_40a4 = (char  [4])s_mp_psd_analysis_pts_512_start_25_0002de38._12_4_;
  local_40a0 = (char  [4])s_mp_psd_analysis_pts_512_start_25_0002de38._16_4_;
  acStack_409c = (char  [4])s_mp_psd_analysis_pts_512_start_25_0002de38._20_4_;
  acStack_4098 = (char  [4])s_mp_psd_analysis_pts_512_start_25_0002de38._24_4_;
  acStack_4094 = (char  [4])s_mp_psd_analysis_pts_512_start_25_0002de38._28_4_;
  local_4090 = (char  [4])s_mp_psd_analysis_pts_512_start_25_0002de38._32_4_;
  acStack_408c = (char  [4])s_mp_psd_analysis_pts_512_start_25_0002de38._36_4_;
  local_4088 = (undefined2)ram0x0002de60;
  local_4086 = (undefined1)((uint)ram0x0002de60 >> 0x10);
  local_40dc = (char  [4])s_mp_psd_analysis_pts_256_start_12_0002de64._0_4_;
  acStack_40d8 = (char  [4])s_mp_psd_analysis_pts_256_start_12_0002de64._4_4_;
  acStack_40d4 = (char  [4])s_mp_psd_analysis_pts_256_start_12_0002de64._8_4_;
  acStack_40d0 = (char  [4])s_mp_psd_analysis_pts_256_start_12_0002de64._12_4_;
  local_40cc = (char  [4])s_mp_psd_analysis_pts_256_start_12_0002de64._16_4_;
  acStack_40c8 = (char  [4])s_mp_psd_analysis_pts_256_start_12_0002de64._20_4_;
  acStack_40c4 = (char  [4])s_mp_psd_analysis_pts_256_start_12_0002de64._24_4_;
  acStack_40c0 = (char  [4])s_mp_psd_analysis_pts_256_start_12_0002de64._28_4_;
  local_40bc = (char  [4])s_mp_psd_analysis_pts_256_start_12_0002de64._32_4_;
  acStack_40b8 = (char  [4])s_mp_psd_analysis_pts_256_start_12_0002de64._36_4_;
  local_40b4 = (undefined2)ram0x0002de8c;
  local_40b2 = (undefined1)((uint)ram0x0002de8c >> 0x10);
  local_4108 = (char  [4])s_mp_psd_analysis_pts_128_start_64_0002de90._0_4_;
  acStack_4104 = (char  [4])s_mp_psd_analysis_pts_128_start_64_0002de90._4_4_;
  acStack_4100 = (char  [4])s_mp_psd_analysis_pts_128_start_64_0002de90._8_4_;
  acStack_40fc = (char  [4])s_mp_psd_analysis_pts_128_start_64_0002de90._12_4_;
  local_40f8 = (char  [4])s_mp_psd_analysis_pts_128_start_64_0002de90._16_4_;
  acStack_40f4 = (char  [4])s_mp_psd_analysis_pts_128_start_64_0002de90._20_4_;
  acStack_40f0 = (char  [4])s_mp_psd_analysis_pts_128_start_64_0002de90._24_4_;
  acStack_40ec = (char  [4])s_mp_psd_analysis_pts_128_start_64_0002de90._28_4_;
  local_40e8 = (char  [4])s_mp_psd_analysis_pts_128_start_64_0002de90._32_4_;
  acStack_40e4 = (char  [4])s_mp_psd_analysis_pts_128_start_64_0002de90._36_4_;
  local_40e0 = (undefined2)ram0x0002deb8;
  if (param_3 == 0x400) {
    uVar4 = FUN_000203b0(local_4084);
    FUN_0001da60(local_4054,local_4084,uVar4);
  }
  else if (param_3 == 0x200) {
    uVar4 = FUN_000203b0(local_40b0);
    FUN_0001da60(local_4054,local_40b0,uVar4);
  }
  else if (param_3 == 0x100) {
    uVar4 = FUN_000203b0(local_40dc);
    FUN_0001da60(local_4054,local_40dc,uVar4);
  }
  else if (param_3 == 0x80) {
    uVar4 = FUN_000203b0(local_4108);
    FUN_0001da60(local_4054,local_4108,uVar4);
  }
  else {
    uVar4 = FUN_000203b0(local_40dc);
    FUN_0001da60(local_4054,local_40dc,uVar4);
  }
  local_44 = FUN_00011a08();
  iVar5 = FUN_000203b0(local_4054);
  local_3c = FUN_00011aa4(local_44,param_1,local_4054,iVar5 + 1);
  FUN_00011a80(local_44);
  if (local_3c < 0) {
    FUN_0001f7b0("Interface doesn\'t accept private ioctl...\n",1,0x2a,DAT_00041448);
    uVar4 = DAT_00041448;
    puVar6 = (undefined4 *)FUN_0001d550();
    uVar7 = FUN_0002096c(*puVar6);
    FUN_0001da38(uVar4,"%s: %s\n",param_2,uVar7);
    uVar4 = 0xffffffff;
  }
  else if (local_4054[0] == '\0') {
    FUN_0001d8c8("Error: no PSD result, please check commands again");
    uVar4 = 0xffffffff;
  }
  else {
    local_18 = 0;
    uVar9 = FUN_00020a94(local_4054,local_38);
    while (local_14 = (int)uVar9, local_14 != 0) {
      uVar4 = FUN_00022248(local_14,0,0x10);
      auStack_104c[local_18] = uVar4;
      dVar2 = (double)FUN_0001a130(auStack_104c[local_18],2);
      aiStack_204c[local_18] = (int)(longlong)dVar2;
      local_18 = local_18 + 1;
      uVar9 = FUN_00020a94(0,local_38);
    }
    local_20 = 20.0;
    local_24 = 35.0;
    for (local_18 = 0; local_14 = (int)uVar9, local_18 < 10; local_18 = local_18 + 1) {
      dVar2 = (double)FUN_0001a178(local_20 / 10.0,10);
      fStack_48 = (float)dVar2;
      dVar2 = (double)FUN_0001a178(local_24 / 10.0,10);
      fStack_4c = (float)dVar2;
      local_28 = 0;
      local_2c = 0;
      local_2050 = 0;
      local_2054 = 0;
      for (local_1c = 0; local_1c < param_3; local_1c = local_1c + 1) {
        fVar8 = (float)VectorSignedToFloat(aiStack_204c[local_1c],(byte)(in_fpscr >> 0x16) & 3);
        uVar1 = in_fpscr & 0xfffffff;
        in_fpscr = uVar1 | (uint)(fStack_48 < fVar8) << 0x1f;
        if (SUB41(in_fpscr >> 0x1f,0)) {
          local_28 = local_28 + aiStack_204c[local_1c];
          local_2050 = local_2050 + 1;
          fVar8 = (float)VectorSignedToFloat(aiStack_204c[local_1c],(byte)(in_fpscr >> 0x16) & 3);
          uVar1 = uVar1 | (uint)(fStack_4c < fVar8) << 0x1f | (uint)(fStack_4c == fVar8) << 0x1e;
          in_fpscr = uVar1 | (uint)(NAN(fStack_4c) || NAN(fVar8)) << 0x1c;
          bVar3 = (byte)(uVar1 >> 0x18);
          if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            local_2c = local_2c + aiStack_204c[local_1c];
            local_2054 = local_2054 + 1;
          }
        }
      }
      if (local_2050 == 0) {
        FUN_0001d494("cnt_total_power","rtw_api.cpp",0x656,"int psd_analysis(char*, char*, int)");
      }
      if (local_2054 == 0) {
        FUN_0001d494("cnt_noise_floor","rtw_api.cpp",0x657,"int psd_analysis(char*, char*, int)");
      }
      uVar4 = FUN_0001bdc0(local_28,local_2050);
      dVar2 = (double)FUN_0001a1bc(uVar4);
      fStack_30 = (float)(dVar2 * 10.0);
      uVar4 = FUN_0001bdc0(local_2c,local_2054);
      uVar4 = FUN_0001a1bc(uVar4);
      uVar9 = CONCAT44(extraout_r1,local_14);
      fStack_34 = (float)((double)CONCAT44(extraout_s1,uVar4) * 10.0);
      local_20 = (float)VectorSignedToFloat(local_40,(byte)(in_fpscr >> 0x16) & 3);
      local_20 = fStack_34 - local_20;
      uVar1 = in_fpscr & 0xfffffff | (uint)(local_20 == 20.0) << 0x1e |
              (uint)(20.0 <= local_20) << 0x1d;
      bVar3 = (byte)(uVar1 >> 0x18);
      if (!(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6)) {
        local_20 = 20.0;
      }
      local_24 = (float)VectorSignedToFloat(local_40,(byte)(uVar1 >> 0x16) & 3);
      local_24 = fStack_34 + local_24;
      uVar1 = in_fpscr & 0xfffffff | (uint)(local_24 < DAT_00016a28) << 0x1f;
      in_fpscr = uVar1 | (uint)(NAN(local_24) || NAN(DAT_00016a28)) << 0x1c;
      if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
        local_24 = 35.0;
      }
    }
    FUN_0001d9f4("System noise: %f dB\n",(int)((ulonglong)uVar9 >> 0x20),SUB84((double)fStack_34,0),
                 (int)((ulonglong)(double)fStack_34 >> 0x20));
    FUN_0001d9f4("Desensitization: %f dB\n",extraout_r1_00,SUB84((double)(fStack_30 - fStack_34),0),
                 (int)((ulonglong)(double)(fStack_30 - fStack_34) >> 0x20));
    uVar4 = 0;
  }
  return uVar4;
}



/* ===== FUN_00016a2c @ 00016a2c size=204 ===== */

int FUN_00016a2c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_00011a08();
  iVar2 = FUN_000203b0(param_2);
  iVar2 = FUN_00011aa4(uVar1,param_1,param_2,iVar2 + 1);
  FUN_00011a80(uVar1);
  if (iVar2 < 0) {
    FUN_0001f7b0("Interface doesn\'t accept private ioctl...\n",1,0x2a,DAT_00041448);
    uVar1 = DAT_00041448;
    puVar3 = (undefined4 *)FUN_0001d550();
    uVar4 = FUN_0002096c(*puVar3);
    FUN_0001da38(uVar1,&DAT_0002debc,uVar4);
    iVar2 = -1;
  }
  return iVar2;
}



/* ===== FUN_00016af8 @ 00016af8 size=216 ===== */

uint FUN_00016af8(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 0xffffffff;
  for (local_c = 0; *(char *)(param_1 + local_c) != '\0'; local_c = local_c + 1) {
    local_14 = *(byte *)(param_1 + local_c) ^ local_14;
    for (local_10 = 7; -1 < local_10; local_10 = local_10 + -1) {
      local_14 = -(local_14 & 1) & 0xedb88320 ^ local_14 >> 1;
    }
  }
  return ~local_14;
}



/* ===== FUN_00016bd0 @ 00016bd0 size=1004 ===== */

undefined4 FUN_00016bd0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 local_848;
  undefined1 auStack_844 [1024];
  undefined1 auStack_444 [11];
  undefined4 auStack_439 [253];
  char local_44 [4];
  char acStack_40 [4];
  char acStack_3c [4];
  char local_38 [4];
  char acStack_34 [4];
  char acStack_30 [4];
  int local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_20 = 0;
  local_24 = &DAT_0002dec0;
  local_38 = (char  [4])s_RealLoveTek_0002dec8._0_4_;
  acStack_34 = (char  [4])s_RealLoveTek_0002dec8._4_4_;
  acStack_30 = (char  [4])s_RealLoveTek_0002dec8._8_4_;
  local_44 = (char  [4])s_TekLoveReal_0002ded4._0_4_;
  acStack_40 = (char  [4])s_TekLoveReal_0002ded4._4_4_;
  acStack_3c = (char  [4])s_TekLoveReal_0002ded4._8_4_;
  FUN_00020350(auStack_444,0,0x400);
  FUN_00020350(auStack_844,0,0x400);
  local_848 = 0;
  local_28 = &DAT_0002dd74;
  local_18 = FUN_00020a94(param_1,local_24);
  while (local_18 != 0) {
    uVar2 = FUN_00022248(local_18,0,0x10);
    auStack_444[local_c] = uVar2;
    local_c = local_c + 1;
    local_18 = FUN_00020a94(0,local_24);
  }
  auStack_444[local_c] = 0;
  local_c = 0;
  while ((local_c < 0x400 && (iVar3 = FUN_00020430(auStack_444 + local_c,local_38,0xb), iVar3 != 0))
        ) {
    local_c = local_c + 1;
  }
  uVar1 = local_c;
  if (local_c == 0x400) {
    local_20 = 0xffffffff;
  }
  else {
    do {
      local_10 = uVar1 + 1;
      if (0x3ff < local_10) break;
      iVar3 = FUN_00020430(auStack_444 + uVar1 + 1,local_44,0xb);
      uVar1 = local_10;
    } while (iVar3 != 0);
    if (local_10 == 0x400) {
      local_20 = 0xffffffff;
    }
    else {
      thunk_FUN_00029380(param_2,(int)auStack_439 + local_c,(local_10 - local_c) + -0xb);
      thunk_FUN_00029380(auStack_844,auStack_444 + local_c,(local_10 - local_c) + 0xb);
      local_2c = FUN_00016af8(auStack_844);
      local_848 = *(undefined4 *)((int)auStack_439 + local_10);
      for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
        local_14 = local_14 +
                   ((uint)(byte)auStack_844[local_1c + -4] << ((3 - local_1c) * 8 & 0xffU));
      }
      if (local_2c == local_14) {
        local_c = 0;
        thunk_FUN_00029380(auStack_444,param_2,0x400);
        local_18 = FUN_00020a94(auStack_444,local_28);
        while (local_18 != 0) {
          FUN_0001f4ec(local_18,&DAT_0002dec4,param_3 + local_c * 4);
          local_c = local_c + 1;
          local_18 = FUN_00020a94(0,local_28);
        }
        *param_4 = local_c;
      }
      else {
        local_20 = 0xffffffff;
      }
    }
  }
  return local_20;
}



/* ===== FUN_00016fbc @ 00016fbc size=748 ===== */

undefined4 FUN_00016fbc(undefined4 param_1,int param_2,int param_3)

{
  undefined1 auStack_2010 [8192];
  int local_10;
  undefined4 local_c;
  
  local_c = 0;
  if (*(int *)(param_2 + 4) == 0) {
    FUN_0001da60(auStack_2010,"efuse_set wldumpfake");
    FUN_0001d8c8(auStack_2010);
    local_c = FUN_00016a2c(param_1,auStack_2010);
  }
  if (*(int *)(param_2 + 4) == 1) {
    for (local_10 = 3; local_10 < param_3 + -1; local_10 = local_10 + 1) {
      if (0x3f < *(int *)(param_2 + local_10 * 4)) {
        FUN_0001d9f4("dut_cmd[%d]=%d > 63\n",local_10,*(undefined4 *)(param_2 + local_10 * 4));
        return local_c;
      }
    }
    FUN_0001da60(auStack_2010,"efuse_set wlwfake,%2x,",*(undefined4 *)(param_2 + 8));
    for (local_10 = 3; local_10 < param_3 + -1; local_10 = local_10 + 1) {
      FUN_0001d9f4("dut_cmd[%d]=0x%x\n",local_10,*(undefined4 *)(param_2 + local_10 * 4));
      if (*(int *)(param_2 + local_10 * 4) != 0) {
        FUN_0001da60(auStack_2010,&DAT_0002df3c,auStack_2010,*(undefined4 *)(param_2 + local_10 * 4)
                    );
      }
    }
    FUN_0001d8c8(auStack_2010);
    local_c = FUN_00016a2c(param_1,auStack_2010);
  }
  if (*(int *)(param_2 + 4) == 2) {
    FUN_0001da60(auStack_2010,"efuse_set wlfk2map");
    FUN_0001d8c8(auStack_2010);
  }
  return local_c;
}



/* ===== FUN_000172a8 @ 000172a8 size=1588 ===== */

undefined4 FUN_000172a8(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined1 auStack_2088 [100];
  undefined1 auStack_2024 [8192];
  undefined2 local_24 [2];
  undefined2 local_20 [2];
  int local_1c;
  undefined *local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_18 = &DAT_0002df58;
  FUN_00020350(auStack_2088,0,100);
  FUN_0001da60(auStack_2024,"mp_arx stop");
  FUN_0001d8c8(auStack_2024);
  local_c = FUN_00016a2c(param_1,auStack_2024);
  FUN_0001da60(auStack_2024,"%s %d","mp_channel",*(undefined4 *)(param_2 + 4));
  FUN_0001d8c8(auStack_2024);
  local_c = FUN_00016a2c(param_1,auStack_2024);
  FUN_0001da60(auStack_2024,"mp_bandwidth 40M=%d,shortGI=0",*(undefined4 *)(param_2 + 8));
  FUN_0001d8c8(auStack_2024);
  local_c = FUN_00016a2c(param_1,auStack_2024);
  if (*(int *)(param_2 + 0xc) == 8) {
    local_20[0] = 0x61;
  }
  else if (*(int *)(param_2 + 0xc) == 4) {
    local_20[0] = 0x62;
  }
  else if (*(int *)(param_2 + 0xc) == 2) {
    local_20[0] = 99;
  }
  else if (*(int *)(param_2 + 0xc) == 1) {
    local_20[0] = 100;
  }
  FUN_0001da60(auStack_2024,"mp_ant_tx %s",local_20);
  FUN_0001d8c8(auStack_2024);
  local_c = FUN_00016a2c(param_1,auStack_2024);
  if (*(int *)(param_2 + 0x10) == 8) {
    local_24[0] = 0x61;
  }
  else if (*(int *)(param_2 + 0x10) == 4) {
    local_24[0] = 0x62;
  }
  else if (*(int *)(param_2 + 0x10) == 2) {
    local_24[0] = 99;
  }
  else if (*(int *)(param_2 + 0x10) == 1) {
    local_24[0] = 100;
  }
  FUN_0001da60(auStack_2024,"mp_ant_rx %s",local_24);
  FUN_0001d8c8(auStack_2024);
  local_c = FUN_00016a2c(param_1,auStack_2024);
  FUN_0001da60(auStack_2024,"mp_rate %d",*(undefined4 *)(param_2 + 0x14));
  FUN_0001d8c8(auStack_2024);
  local_c = FUN_00016a2c(param_1,auStack_2024);
  if (*(int *)(param_2 + 0x18) == 1) {
    FUN_0001da60(auStack_2024,"mp_txpower patha=%d,pathb=%d",*(undefined4 *)(param_2 + 0x1c),
                 *(undefined4 *)(param_2 + 0x20));
    FUN_0001d8c8(auStack_2024);
    local_c = FUN_00016a2c(param_1,auStack_2024);
  }
  else {
    FUN_0001da60(auStack_2024,"mp_get_txpower");
    FUN_0001d8c8(auStack_2024);
    local_c = FUN_00016a2c(param_1,auStack_2024);
    local_10 = FUN_00020a94(auStack_2024,local_18);
    local_14 = 0;
    while (local_10 != 0) {
      FUN_0001f4ec(local_10,&DAT_0002cb80,auStack_2088);
      local_1c = FUN_0002087c(auStack_2088,0x3d);
      FUN_0001f4ec(local_1c + 1,&DAT_0002dec4,param_3 + local_14);
      local_10 = FUN_00020a94(0,local_18);
      if (3 < local_14) break;
      local_14 = local_14 + 1;
    }
    FUN_0001da60(auStack_2024,"mp_txpower patha=%d,pathb=%d",*param_3,param_3[1]);
    FUN_0001d8c8(auStack_2024);
    local_c = FUN_00016a2c(param_1,auStack_2024);
  }
  return local_c;
}



/* ===== FUN_000178dc @ 000178dc size=932 ===== */

undefined4 FUN_000178dc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined2 local_2010 [2];
  undefined1 auStack_200c [8192];
  undefined4 local_c;
  
  local_c = 0;
  local_2010[0] = 0;
  FUN_0001da60(auStack_200c,"mp_channel %d",param_2);
  FUN_0001d8c8(auStack_200c);
  local_c = FUN_00016a2c(param_1,auStack_200c);
  FUN_0001da60(auStack_200c,"mp_txpower patha=10,pathb=10");
  FUN_0001d8c8(auStack_200c);
  local_c = FUN_00016a2c(param_1,auStack_200c);
  FUN_0001da60(auStack_200c,"mp_bandwidth 40M=%d,shortGI=0",param_3);
  FUN_0001d8c8(auStack_200c);
  local_c = FUN_00016a2c(param_1,auStack_200c);
  if (param_4 == 8) {
    local_2010[0] = 0x61;
  }
  else if (param_4 == 4) {
    local_2010[0] = 0x62;
  }
  else if (param_4 == 2) {
    local_2010[0] = 99;
  }
  else if (param_4 == 1) {
    local_2010[0] = 100;
  }
  FUN_0001da60(auStack_200c,"mp_ant_tx %s",local_2010);
  FUN_0001d8c8(auStack_200c);
  local_c = FUN_00016a2c(param_1,auStack_200c);
  FUN_0001da60(auStack_200c,"mp_ant_rx %s",local_2010);
  FUN_0001d8c8(auStack_200c);
  local_c = FUN_00016a2c(param_1,auStack_200c);
  FUN_0001da60(auStack_200c,"mp_rate 12");
  FUN_0001d8c8(auStack_200c);
  local_c = FUN_00016a2c(param_1,auStack_200c);
  FUN_0001da60(auStack_200c,"mp_arx start");
  FUN_0001d8c8(auStack_200c);
  uVar1 = FUN_00016a2c(param_1,auStack_200c);
  return uVar1;
}



/* ===== FUN_00017c80 @ 00017c80 size=836 ===== */

undefined4 FUN_00017c80(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint auStack_1838 [1024];
  byte abStack_838 [1024];
  char local_438 [4];
  char acStack_434 [4];
  char acStack_430 [4];
  char acStack_42c [4];
  undefined1 auStack_428 [1008];
  char local_38 [4];
  char acStack_34 [4];
  char acStack_30 [4];
  char local_2c [4];
  char acStack_28 [4];
  char acStack_24 [4];
  int local_20;
  uint local_1c;
  undefined4 local_18;
  int local_14;
  
  local_18 = 0;
  local_2c = (char  [4])s_RealLoveTek_0002dec8._0_4_;
  acStack_28 = (char  [4])s_RealLoveTek_0002dec8._4_4_;
  acStack_24 = (char  [4])s_RealLoveTek_0002dec8._8_4_;
  local_38 = (char  [4])s_TekLoveReal_0002ded4._0_4_;
  acStack_34 = (char  [4])s_TekLoveReal_0002ded4._4_4_;
  acStack_30 = (char  [4])s_TekLoveReal_0002ded4._8_4_;
  local_438 = (char  [4])s_mp_link_txdata__0002e054._0_4_;
  acStack_434 = (char  [4])s_mp_link_txdata__0002e054._4_4_;
  acStack_430 = (char  [4])s_mp_link_txdata__0002e054._8_4_;
  acStack_42c = (char  [4])s_mp_link_txdata__0002e054._12_4_;
  FUN_00020350(auStack_428,0,0x3f0);
  FUN_00020350(abStack_838,0,0x400);
  FUN_00020350(auStack_1838,0,0x1000);
  FUN_0001da60(abStack_838,"%s%s%s",local_2c,param_1,local_38);
  local_1c = FUN_00016af8(abStack_838);
  for (local_14 = 0; abStack_838[local_14] != 0; local_14 = local_14 + 1) {
    auStack_1838[local_14] = (uint)abStack_838[local_14];
  }
  auStack_1838[local_14] = local_1c >> 0x18;
  auStack_1838[local_14 + 1] = local_1c >> 0x10 & 0xff;
  auStack_1838[local_14 + 2] = local_1c >> 8 & 0xff;
  auStack_1838[local_14 + 3] = local_1c & 0xff;
  auStack_1838[local_14 + 4] = 0;
  local_20 = local_14 + 4;
  FUN_0001da60(param_2,&DAT_0002cb80,local_438);
  for (local_14 = 0; local_14 < local_20; local_14 = local_14 + 1) {
    iVar1 = local_14 * 2;
    iVar2 = FUN_000203b0(local_438);
    if ((uint)(iVar1 + iVar2) < 0x400) {
      iVar1 = local_14 * 2;
      iVar2 = FUN_000203b0(local_438);
      FUN_0001da60(param_2 + iVar1 + iVar2,&DAT_0002e04c,auStack_1838[local_14]);
    }
  }
  return local_18;
}



/* ===== FUN_00017fc4 @ 00017fc4 size=2340 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00017fc4(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_282c [1024];
  undefined1 auStack_242c [1024];
  char local_202c [4];
  char acStack_2028 [4];
  char acStack_2024 [4];
  undefined2 local_2020;
  undefined1 local_201e;
  char local_201c [8192];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  
  local_202c = (char  [4])s_mp_link_rxdata_0002e580._0_4_;
  acStack_2028 = (char  [4])s_mp_link_rxdata_0002e580._4_4_;
  acStack_2024 = (char  [4])s_mp_link_rxdata_0002e580._8_4_;
  local_2020 = (undefined2)ram0x0002e58c;
  local_201e = (undefined1)((uint)ram0x0002e58c >> 0x10);
  local_c = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00020350(auStack_242c,0,0x400);
  FUN_00020350(auStack_282c,0,0x400);
  FUN_0001da60(local_201c,"mp_ant_tx a");
  local_c = FUN_00016a2c(param_1,local_201c);
  FUN_0001da60(local_201c,"mp_ant_rx a");
  local_c = FUN_00016a2c(param_1,local_201c);
  FUN_00022540(50000);
  uVar1 = FUN_000203b0(local_202c);
  FUN_0001da60(local_201c,local_202c,uVar1);
  local_c = FUN_00016a2c(param_1,local_201c);
  if (local_201c[0] != '\0') {
    local_18 = 1;
  }
  do {
    if (((local_18 == 0) || (iVar2 = FUN_00016bd0(local_201c,param_2,param_3,param_4), iVar2 == -1))
       || (((FUN_0001d9f4("\ni = %d   payload=%s\n",local_10,param_2), *param_3 != 1 &&
            (((*param_3 != 2 && (*param_3 != 9)) && (*param_3 != 0xd)))) && (*param_3 != 0xf)))) {
      return local_c;
    }
    if (*param_3 == 1) {
      FUN_0001da60(auStack_282c,"3ack%d",param_3[*param_4 + 0x3fffffff]);
    }
    else if (*param_3 == 2) {
      FUN_0001da60(auStack_282c,"4ack%d",param_3[*param_4 + 0x3fffffff]);
    }
    else if (*param_3 == 9) {
      FUN_0001da60(auStack_282c,"3ack%d",param_3[*param_4 + 0x3fffffff]);
    }
    else if (*param_3 == 0xd) {
      FUN_0001da60(auStack_282c,"14ack%d",param_3[*param_4 + 0x3fffffff]);
    }
    else if (*param_3 == 0xf) {
      FUN_0001da60(auStack_282c,"16ack%d",param_3[*param_4 + 0x3fffffff]);
    }
    FUN_0001da60(local_201c,"mp_arx stop");
    FUN_0001d8c8(local_201c);
    local_c = FUN_00016a2c(param_1,local_201c);
    if (*param_3 == 0xf) {
      FUN_0001d8c8("===================================================================");
      FUN_0001da60(local_201c,"mp_ctx background,pkt");
      FUN_0001d8c8(local_201c);
      local_c = FUN_00016a2c(param_1,local_201c);
      for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
        FUN_00022540(100000);
      }
      FUN_0001da60(local_201c,"mp_ctx stop");
      FUN_0001d8c8(local_201c);
      local_c = FUN_00016a2c(param_1,local_201c);
      FUN_0001d8c8("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
    FUN_00017c80(auStack_282c,auStack_242c);
    FUN_0001d9f4("Send %s\n",auStack_282c);
    FUN_0001d9f4("Send %s\n",auStack_242c);
    local_c = FUN_00016a2c(param_1,auStack_242c);
    FUN_00017c80(auStack_282c,auStack_242c);
    FUN_0001d9f4("Send %s\n",auStack_282c);
    FUN_0001d9f4("Send %s\n",auStack_242c);
    local_c = FUN_00016a2c(param_1,auStack_242c);
    FUN_00017c80(auStack_282c,auStack_242c);
    FUN_0001d9f4("Send %s\n",auStack_282c);
    FUN_0001d9f4("Send %s\n",auStack_242c);
    local_c = FUN_00016a2c(param_1,auStack_242c);
    FUN_0001da60(local_201c,"mp_arx start");
    FUN_0001d8c8(local_201c);
    local_c = FUN_00016a2c(param_1,local_201c);
    for (local_14 = 0; local_14 < 0x14; local_14 = local_14 + 1) {
      FUN_00022540(10000);
      FUN_00020350(local_201c,0,0x2000);
      uVar1 = FUN_000203b0(local_202c);
      FUN_0001da60(local_201c,local_202c,uVar1);
      local_c = FUN_00016a2c(param_1,local_201c);
      if (local_201c[0] != '\0') {
        FUN_0001d9f4("Golden not recv ack input:%s\n",local_201c);
        break;
      }
    }
    if (local_201c[0] == '\0') {
      local_18 = 0;
    }
    local_10 = local_10 + 1;
  } while( true );
}



/* ===== FUN_000188e8 @ 000188e8 size=2008 ===== */

undefined4 FUN_000188e8(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_208c [100];
  undefined1 auStack_2028 [8192];
  undefined2 local_28 [2];
  undefined2 local_24 [2];
  int local_20;
  undefined *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  local_18 = 0;
  local_1c = &DAT_0002df58;
  FUN_00020350(auStack_208c,0,100);
  FUN_0001da60(auStack_2028,"mp_arx stop");
  FUN_0001d8c8(auStack_2028);
  local_18 = FUN_00016a2c(param_1,auStack_2028);
  FUN_0001da60(auStack_2028,"mp_bandwidth 40M=%d,shortGI=0",*(undefined4 *)(param_2 + 8));
  FUN_0001d8c8(auStack_2028);
  local_18 = FUN_00016a2c(param_1,auStack_2028);
  FUN_0001da60(auStack_2028,"%s %d","mp_channel",*(undefined4 *)(param_2 + 4));
  FUN_0001d8c8(auStack_2028);
  local_18 = FUN_00016a2c(param_1,auStack_2028);
  if (*(int *)(param_2 + 0xc) == 8) {
    local_24[0] = 0x61;
  }
  else if (*(int *)(param_2 + 0xc) == 4) {
    local_24[0] = 0x62;
  }
  else if (*(int *)(param_2 + 0xc) == 2) {
    local_24[0] = 99;
  }
  else if (*(int *)(param_2 + 0xc) == 1) {
    local_24[0] = 100;
  }
  FUN_0001da60(auStack_2028,"mp_ant_tx %s",local_24);
  FUN_0001d8c8(auStack_2028);
  local_18 = FUN_00016a2c(param_1,auStack_2028);
  if (*(int *)(param_2 + 0x10) == 8) {
    local_28[0] = 0x61;
  }
  else if (*(int *)(param_2 + 0x10) == 4) {
    local_28[0] = 0x62;
  }
  else if (*(int *)(param_2 + 0x10) == 2) {
    local_28[0] = 99;
  }
  else if (*(int *)(param_2 + 0x10) == 1) {
    local_28[0] = 100;
  }
  FUN_0001da60(auStack_2028,"mp_ant_rx %s",local_28);
  FUN_0001d8c8(auStack_2028);
  local_18 = FUN_00016a2c(param_1,auStack_2028);
  FUN_0001da60(auStack_2028,"mp_rate %d",*(undefined4 *)(param_2 + 0x14));
  FUN_0001d8c8(auStack_2028);
  local_18 = FUN_00016a2c(param_1,auStack_2028);
  if (*(int *)(param_2 + 0x18) == 1) {
    FUN_0001da60(auStack_2028,"mp_txpower patha=%d,pathb=%d",*(undefined4 *)(param_2 + 0x1c),
                 *(undefined4 *)(param_2 + 0x20));
    FUN_0001d8c8(auStack_2028);
    local_18 = FUN_00016a2c(param_1,auStack_2028);
  }
  else {
    FUN_0001da60(auStack_2028,"mp_get_txpower");
    FUN_0001d8c8(auStack_2028);
    local_18 = FUN_00016a2c(param_1,auStack_2028);
    local_c = FUN_00020a94(auStack_2028,local_1c);
    local_10 = 0;
    while (local_c != 0) {
      FUN_0001f4ec(local_c,&DAT_0002cb80,auStack_208c);
      local_20 = FUN_0002087c(auStack_208c,0x3d);
      FUN_0001f4ec(local_20 + 1,&DAT_0002dec4,param_3 + local_10);
      local_c = FUN_00020a94(0,local_1c);
      if (3 < local_10) break;
      local_10 = local_10 + 1;
    }
    FUN_0001da60(auStack_2028,"mp_txpower patha=%d,pathb=%d",*param_3,param_3[1]);
    FUN_0001d8c8(auStack_2028);
    local_18 = FUN_00016a2c(param_1,auStack_2028);
  }
  FUN_0001d8c8("===================================================================");
  FUN_0001da60(auStack_2028,"mp_ctx background,pkt");
  FUN_0001d8c8(auStack_2028);
  local_18 = FUN_00016a2c(param_1,auStack_2028);
  for (local_14 = 0; local_14 < 0xd; local_14 = local_14 + 1) {
    FUN_00022540(100000);
  }
  if (*(int *)(param_2 + 0x10) == 4) {
    for (local_14 = 0; local_14 < 10; local_14 = local_14 + 1) {
      FUN_00022540(100000);
    }
  }
  FUN_0001da60(auStack_2028,"mp_ctx stop");
  FUN_0001d8c8(auStack_2028);
  local_18 = FUN_00016a2c(param_1,auStack_2028);
  FUN_0001d8c8("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
  FUN_0001da60(auStack_2028,"mp_arx start");
  FUN_0001d8c8(auStack_2028);
  uVar1 = FUN_00016a2c(param_1,auStack_2028);
  return uVar1;
}



/* ===== FUN_000190c0 @ 000190c0 size=1764 ===== */

undefined4 FUN_000190c0(undefined4 param_1,int param_2,int param_3)

{
  undefined1 auStack_202c [8192];
  undefined2 local_2c [2];
  undefined2 local_28 [2];
  undefined1 *local_24;
  int local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  char *local_10;
  undefined4 local_c;
  
  local_c = 0;
  local_10 = "packet OK:";
  local_14 = " CRC error:";
  local_18 = "Rx OK:";
  local_1c = ", CRC error:";
  FUN_0001da60(auStack_202c,"mp_arx stop");
  FUN_0001d8c8(auStack_202c);
  local_c = FUN_00016a2c(param_1,auStack_202c);
  FUN_0001da60(auStack_202c,"mp_bandwidth 40M=%d,shortGI=0",*(undefined4 *)(param_2 + 8));
  FUN_0001d8c8(auStack_202c);
  local_c = FUN_00016a2c(param_1,auStack_202c);
  FUN_0001da60(auStack_202c,"%s %d","mp_channel",*(undefined4 *)(param_2 + 4));
  FUN_0001d8c8(auStack_202c);
  local_c = FUN_00016a2c(param_1,auStack_202c);
  if (*(int *)(param_2 + 0xc) == 8) {
    local_28[0] = 0x61;
  }
  else if (*(int *)(param_2 + 0xc) == 4) {
    local_28[0] = 0x62;
  }
  else if (*(int *)(param_2 + 0xc) == 2) {
    local_28[0] = 99;
  }
  else if (*(int *)(param_2 + 0xc) == 1) {
    local_28[0] = 100;
  }
  FUN_0001da60(auStack_202c,"mp_ant_tx %s",local_28);
  FUN_0001d8c8(auStack_202c);
  local_c = FUN_00016a2c(param_1,auStack_202c);
  if (*(int *)(param_2 + 0x10) == 8) {
    local_2c[0] = 0x61;
  }
  else if (*(int *)(param_2 + 0x10) == 4) {
    local_2c[0] = 0x62;
  }
  else if (*(int *)(param_2 + 0x10) == 2) {
    local_2c[0] = 99;
  }
  else if (*(int *)(param_2 + 0x10) == 1) {
    local_2c[0] = 100;
  }
  FUN_0001da60(auStack_202c,"mp_ant_rx %s",local_2c);
  FUN_0001d8c8(auStack_202c);
  local_c = FUN_00016a2c(param_1,auStack_202c);
  FUN_0001da60(auStack_202c,"mp_rate %d",*(undefined4 *)(param_2 + 0x14));
  FUN_0001d8c8(auStack_202c);
  local_c = FUN_00016a2c(param_1,auStack_202c);
  FUN_0001da60(auStack_202c,"mp_reset_stats");
  FUN_0001d8c8(auStack_202c);
  local_c = FUN_00016a2c(param_1,auStack_202c);
  FUN_0001da60(auStack_202c,"mp_arx start");
  FUN_0001d8c8(auStack_202c);
  local_c = FUN_00016a2c(param_1,auStack_202c);
  FUN_0001d8c8("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO");
  FUN_00022540(2000000);
  FUN_0001da60(auStack_202c,"mp_arx stop");
  FUN_0001d8c8(auStack_202c);
  local_c = FUN_00016a2c(param_1,auStack_202c);
  FUN_0001d8c8("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXxXXXX");
  FUN_0001da60(auStack_202c,"mp_query");
  FUN_0001d8c8(auStack_202c);
  local_c = FUN_00016a2c(param_1,auStack_202c);
  FUN_0001d8c8(auStack_202c);
  local_20 = FUN_00020464(auStack_202c,local_18);
  local_24 = (undefined1 *)FUN_00020464(auStack_202c,local_1c);
  *local_24 = 0;
  FUN_0001f4ec(local_20 + 6,&DAT_0002dec4,param_3);
  FUN_0001da60(auStack_202c,"mp_arx phy");
  FUN_0001d8c8(auStack_202c);
  local_c = FUN_00016a2c(param_1,auStack_202c);
  FUN_0001d8c8(auStack_202c);
  local_20 = FUN_00020464(auStack_202c,local_10);
  local_24 = (undefined1 *)FUN_00020464(auStack_202c,local_14);
  *local_24 = 0;
  FUN_0001f4ec(local_20 + 10,&DAT_0002dec4,param_3 + 4);
  return local_c;
}



/* ===== FUN_000197a4 @ 000197a4 size=628 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000197a4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_3430;
  undefined1 auStack_342c [4096];
  undefined1 auStack_242c [1024];
  undefined4 local_202c;
  undefined1 local_2028;
  undefined4 local_2024;
  undefined1 local_2020;
  char local_201c [4];
  char acStack_2018 [4];
  char acStack_2014 [4];
  undefined2 local_2010;
  undefined1 local_200e;
  undefined1 auStack_200c [8192];
  undefined4 local_c;
  
  local_201c = (char  [4])s_mp_link_rxdata_0002e580._0_4_;
  acStack_2018 = (char  [4])s_mp_link_rxdata_0002e580._4_4_;
  acStack_2014 = (char  [4])s_mp_link_rxdata_0002e580._8_4_;
  local_2010 = (undefined2)ram0x0002e58c;
  local_200e = (undefined1)((uint)ram0x0002e58c >> 0x10);
  local_2024 = DAT_0002e68c;
  local_2020 = (undefined1)DAT_0002e690;
  local_202c = DAT_0002e694;
  local_2028 = (undefined1)DAT_0002e698;
  FUN_00020350(auStack_242c,0,0x400);
  FUN_00020350(auStack_342c,0,0x1000);
  local_c = 0;
  local_3430 = 0;
  uVar1 = FUN_000203b0(local_201c);
  FUN_0001da60(auStack_200c,local_201c,uVar1);
  local_c = FUN_00016a2c(param_1,auStack_200c);
  FUN_00016bd0(auStack_200c,auStack_242c,auStack_342c,&local_3430);
  if (param_2 == 1) {
    iVar2 = FUN_00020430(auStack_242c,&local_202c,4);
    if (iVar2 == 0) {
      FUN_0001d8c8("Recv 8ack");
    }
    else {
      FUN_0001d8c8("Not Recv 8ack");
      local_c = 0xffffffff;
    }
  }
  else if (param_2 == 2) {
    iVar2 = FUN_00020430(auStack_242c,&local_2024,4);
    if (iVar2 == 0) {
      FUN_0001d8c8("Recv 6ack");
    }
    else {
      FUN_0001d8c8("Not Recv 6ack");
      local_c = 0xffffffff;
    }
  }
  return local_c;
}



/* ===== FUN_00019a18 @ 00019a18 size=1816 ===== */

void FUN_00019a18(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 local_3c40;
  undefined4 local_3c3c;
  undefined4 uStack_3c38;
  undefined4 uStack_3c34;
  undefined4 uStack_3c30;
  undefined8 local_3c2c;
  int local_3c24 [1024];
  undefined1 auStack_2c24 [1024];
  undefined1 auStack_2824 [1024];
  char local_2424 [1024];
  undefined1 auStack_2024 [8192];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  FUN_00020350(local_2424,0,0x400);
  FUN_00020350(auStack_2824,0,0x400);
  FUN_00020350(auStack_2c24,0,0x400);
  FUN_00020350(local_3c24,0,0x1000);
  local_3c2c = 0;
  uStack_3c38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_3c34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  local_3c3c = 0;
  local_3c40 = 0;
  local_1c = 7;
  local_20 = 0;
  local_24 = 8;
  FUN_000178dc(param_1,7,0,8);
  do {
    do {
      FUN_00020350(local_2424,0,0x400);
      FUN_00020350(local_3c24,0,0x1000);
      if (local_10 == 0x14) {
        FUN_000178dc(param_1,local_1c,local_20,local_24);
        local_10 = 0;
      }
      else {
        FUN_00017fc4(param_1,local_2424,local_3c24,&local_3c40);
        local_10 = local_10 + 1;
      }
    } while (local_2424[0] == '\0');
    FUN_0001d9f4("\npayload=%s\n",local_2424);
    local_10 = 0;
    if (local_3c24[0] == 1) {
      FUN_000188e8(param_1,local_3c24,&local_3c3c);
      local_14 = local_14 + 1;
    }
    if (local_3c24[0] == 2) {
      FUN_000190c0(param_1,local_3c24,&local_3c2c);
      local_c = 0;
      do {
        FUN_0001da60(auStack_2024,"mp_arx stop");
        FUN_0001d8c8(auStack_2024);
        local_18 = FUN_00016a2c(param_1,auStack_2024);
        FUN_0001da60(auStack_2024,"mp_ant_tx a");
        FUN_0001d8c8(auStack_2024);
        local_18 = FUN_00016a2c(param_1,auStack_2024);
        FUN_0001da60(auStack_2024,"mp_ant_rx a");
        FUN_0001d8c8(auStack_2024);
        local_18 = FUN_00016a2c(param_1,auStack_2024);
        FUN_0001da60(auStack_2c24,"5,%d,%d",(undefined4)local_3c2c,local_3c2c._4_4_);
        FUN_00017c80(auStack_2c24,auStack_2824);
        local_18 = FUN_00016a2c(param_1,auStack_2824);
        FUN_0001d9f4("Send Rx Counter Query:%d Phy:%d\n",(undefined4)local_3c2c,local_3c2c._4_4_);
        FUN_0001da60(auStack_2024,"mp_arx start");
        local_18 = FUN_00016a2c(param_1,auStack_2024);
        local_c = local_c + 1;
        FUN_00022540(50000);
        iVar2 = FUN_000197a4(param_1,local_3c24[0]);
        if ((iVar2 == -1) && (local_c < 0xd)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      } while (bVar1);
    }
    if (local_3c24[0] == 9) {
      FUN_00016fbc(param_1,local_3c24,local_3c40);
    }
    if (local_3c24[0] == 0xd) {
      FUN_0001da60(auStack_2024,"mp_link setbt,scbd,1");
      FUN_0001d8c8(auStack_2024);
      local_18 = FUN_00016a2c(param_1,auStack_2024);
      FUN_0001da60(auStack_2024,"mp_link setbt,testmode,2");
      FUN_0001d8c8(auStack_2024);
      local_18 = FUN_00016a2c(param_1,auStack_2024);
      FUN_00022540(100000);
      FUN_0001da60(auStack_2024,"mp_link setbt,testmode,1");
      FUN_0001d8c8(auStack_2024);
      local_18 = FUN_00016a2c(param_1,auStack_2024);
      FUN_0001da60(auStack_2024,"setenforce 0");
      FUN_00023728(auStack_2024);
      FUN_0001d8c8(auStack_2024);
      FUN_0001da60(auStack_2024,
                   "am startservice -n com.bluetooth.spptest/com.bluetooth.spptest.MyService");
      FUN_00023728(auStack_2024);
      FUN_0001d8c8(auStack_2024);
    }
    FUN_00020350(local_2424,0,0x400);
  } while( true );
}



/* ===== FUN_0001a130 @ 0001a130 size=72 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0001a164 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_0001a130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint in_fpscr;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  uVar3 = VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = thunk_FUN_0002ac30((int)uVar2,param_2,(int)uVar3);
  return uVar1;
}



/* ===== FUN_0001a178 @ 0001a178 size=68 ===== */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0001a1a8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_0001a178(float param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_fpscr;
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = thunk_FUN_0002ac30((int)uVar2,param_2,SUB84((double)param_1,0));
  return uVar1;
}



/* ===== FUN_0001a1bc @ 0001a1bc size=52 ===== */

undefined4 FUN_0001a1bc(undefined4 param_1)

{
  uint in_fpscr;
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = thunk_FUN_0002ab38((int)uVar2);
  return uVar1;
}



/* ===== FUN_0001a1f0 @ 0001a1f0 size=556 ===== */

void FUN_0001a1f0(int param_1,undefined4 param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined1 *local_14;
  int local_c;
  
  puVar2 = (undefined1 *)FUN_0002087c(param_2,10);
  if (puVar2 != (undefined1 *)0x0) {
    local_c = 0;
    bVar1 = false;
    local_14 = puVar2;
    while( true ) {
      while( true ) {
        if (*(int *)(param_1 + 0x34) == 0) {
          uVar5 = FUN_0001f590(param_1);
        }
        else if (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0x18)) {
          pbVar4 = *(byte **)(param_1 + 0x10);
          *(byte **)(param_1 + 0x10) = pbVar4 + 1;
          uVar5 = (uint)*pbVar4;
        }
        else {
          uVar5 = FUN_0001ff80(param_1);
        }
        if (uVar5 == 0xffffffff) {
          *local_14 = 0;
          return;
        }
        if ((uVar5 != 10) && (uVar5 != 0x20)) break;
        if (bVar1) {
          iVar3 = FUN_0001da60(local_14,&DAT_0002e7bc,local_c);
          local_14 = local_14 + iVar3;
        }
        local_c = 0;
        bVar1 = false;
      }
      iVar3 = FUN_0001d51c(uVar5);
      if (iVar3 == 0) break;
      bVar1 = true;
      if (((int)uVar5 < 0x30) || (0x39 < (int)uVar5)) {
        if (((int)uVar5 < 0x61) || (0x66 < (int)uVar5)) {
          if ((0x40 < (int)uVar5) && ((int)uVar5 < 0x47)) {
            local_c = local_c * 0x10 + (uVar5 - 0x37);
          }
        }
        else {
          local_c = local_c * 0x10 + (uVar5 - 0x57);
        }
      }
      else {
        local_c = local_c * 0x10 + (uVar5 - 0x30);
      }
    }
    FUN_0001da60(puVar2,&DAT_0002e7c0);
  }
  return;
}



/* ===== FUN_0001a41c @ 0001a41c size=484 ===== */

int FUN_0001a41c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_1 == 0) {
    iVar5 = 0;
  }
  else {
    local_30 = param_2;
    if (param_2 == 0) {
      local_30 = 0;
    }
    iVar1 = FUN_000203b0(local_30);
    local_34 = param_3;
    if (param_3 == 0) {
      local_34 = 0;
    }
    iVar2 = FUN_000203b0(local_34);
    local_14 = 0;
    local_c = param_1;
    while (local_c = FUN_00020464(local_c,local_30), local_c != 0) {
      local_c = local_c + iVar1;
      local_14 = local_14 + 1;
    }
    iVar5 = FUN_000203b0(param_1);
    iVar5 = FUN_000212e0(iVar5 + local_14 * (iVar2 - iVar1) + 1);
    local_2c = param_1;
    local_10 = iVar5;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      while (local_14 != 0) {
        iVar3 = FUN_00020464(local_2c,local_30);
        iVar3 = iVar3 - local_2c;
        iVar4 = FUN_00020784(local_10,local_2c,iVar3);
        local_10 = FUN_00020768(iVar4 + iVar3,local_34);
        local_10 = local_10 + iVar2;
        local_2c = local_2c + iVar3 + iVar1;
        local_14 = local_14 + -1;
      }
      FUN_00020768(local_10,local_2c);
    }
  }
  return iVar5;
}



/* ===== FUN_0001a600 @ 0001a600 size=356 ===== */

void FUN_0001a600(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_14eac [85536];
  undefined1 auStack_8c [128];
  int local_c;
  
  FUN_00020350(auStack_8c,0,0x80);
  FUN_00020350(auStack_14eac,0,0x14e1f);
  FUN_0001d9f4("direct doing ( %s )\n",param_1);
  FUN_0001da60(auStack_8c,&DAT_0002e7dc,param_1);
  local_c = FUN_0001db30(auStack_8c,&DAT_0002e7e0);
  if (local_c == 0) {
    FUN_0001d8c8("Failed to run command");
    FUN_00022404(1);
  }
  while (iVar1 = FUN_0001f6b4(auStack_14eac,0x14e1e,local_c), iVar1 != 0) {
    FUN_0001d9f4("fget = %s",auStack_14eac);
    FUN_0001da60(&DAT_000563bc,&DAT_0002e808,&DAT_000563bc,auStack_14eac);
  }
  FUN_0001dd80(local_c);
  return;
}



/* ===== FUN_0001a764 @ 0001a764 size=780 ===== */

undefined4 FUN_0001a764(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  int local_9c;
  undefined1 auStack_98 [128];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 0;
  local_14 = 0;
  FUN_00020350(auStack_98,0,0x80);
  local_18 = 1;
  local_9c = 0;
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_18 = FUN_0002066c(param_1,&DAT_0002e810,3);
    if (local_18 == 0) {
      FUN_0001d9f4("cat doing ( %s )\n",param_1);
      FUN_0001da60(auStack_98,&DAT_0002e7dc,param_1);
      FUN_0001a600(auStack_98);
      uVar2 = 1;
    }
    else {
      FUN_0001d8c8("prepare in system_if ");
      local_a4 = DAT_0002e8cc;
      local_a0 = (undefined2)DAT_0002e8d0;
      local_10 = FUN_0001a41c(param_1,&local_a4,s_wlan0_00041354);
      FUN_0001d9f4("wlan0 convert ( %s )\n",local_10);
      FUN_0001f4ec(param_1,"iwpriv wlan%d mp_",&local_9c);
      if (local_9c == 1) {
        local_ac = DAT_0002e8d4;
        local_a8 = (undefined2)DAT_0002e8d8;
        local_c = FUN_0001a41c(local_10,&local_ac,s_wlan0_00041354);
        FUN_0001d9f4("pwlan2 ( %s )\n",local_c);
      }
      else {
        local_c = local_10;
      }
      iVar1 = FUN_00020464(local_c,&DAT_0002e87c);
      if (iVar1 == 0) {
        iVar1 = FUN_00020464(local_c,"ifconfig");
        if (iVar1 == 0) {
          FUN_0001da60(auStack_98,&DAT_0002e7dc,param_1);
          FUN_0001d9f4("cmd_open_retstr doing ( %s )\n",auStack_98);
          FUN_0001a600(auStack_98);
        }
        else {
          FUN_0001da60(auStack_98,&DAT_0002e7dc,local_c);
          FUN_00023728(auStack_98);
        }
      }
      else {
        local_b4 = DAT_0002e87c;
        local_b0 = (undefined2)DAT_0002e880;
        local_ae = (undefined1)((uint)DAT_0002e880 >> 0x10);
        local_bc = DAT_0002e8dc;
        uStack_b8 = DAT_0002e8e0;
        local_14 = FUN_0001a41c(local_c,&local_b4,&local_bc);
        FUN_0001da60(auStack_98,&DAT_0002e7dc,local_14);
        if (param_2 == '\0') {
          FUN_0001d9f4("system direct doing ( %s )\n",auStack_98);
          FUN_00023728(auStack_98);
        }
        else {
          FUN_0001d9f4("cmd_open_retstr doing ( %s )\n",auStack_98);
          FUN_0001a600(auStack_98);
          FUN_00020768(param_1,&DAT_000563bc);
        }
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}



/* ===== FUN_0001aa70 @ 0001aa70 size=424 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0001aa70(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_814 [2048];
  undefined2 local_14 [2];
  undefined4 local_10;
  int local_c;
  
  local_c = 0;
  local_14[0] = 0x3a;
  local_10 = FUN_00020464(&DAT_0004159c,param_1);
  FUN_0001d8c8(local_10);
  uVar1 = FUN_000203b0(local_10);
  thunk_FUN_00029380(&DAT_000563bc,local_10,uVar1);
  local_c = FUN_00011b68(s_wlan0_00041354,&DAT_000563bc,1);
  if (local_c != 0) {
    FUN_00020350(&DAT_0004159c,0,0x14e1f);
    FUN_00020350(&DAT_000563bc,0,0x14e1f);
    DAT_0004159c._0_1_ = s_ioctrl_fail_0002e8e4[0];
    DAT_0004159c._1_1_ = s_ioctrl_fail_0002e8e4[1];
    DAT_0004159c._2_1_ = s_ioctrl_fail_0002e8e4[2];
    DAT_0004159c._3_1_ = s_ioctrl_fail_0002e8e4[3];
    DAT_000415a0._0_1_ = s_ioctrl_fail_0002e8e4[4];
    DAT_000415a0._1_1_ = s_ioctrl_fail_0002e8e4[5];
    DAT_000415a0._2_1_ = s_ioctrl_fail_0002e8e4[6];
    DAT_000415a0._3_1_ = s_ioctrl_fail_0002e8e4[7];
    DAT_000415a4._0_1_ = s_ioctrl_fail_0002e8e4[8];
    DAT_000415a4._1_1_ = s_ioctrl_fail_0002e8e4[9];
    DAT_000415a4._2_1_ = s_ioctrl_fail_0002e8e4[10];
    DAT_000415a4._3_1_ = s_ioctrl_fail_0002e8e4[0xb];
    DAT_000415a8._0_1_ = (undefined1)ram0x0002e8f0;
    DAT_000563bc._0_1_ = s_ioctrl_fail_0002e8e4[0];
    DAT_000563bc._1_1_ = s_ioctrl_fail_0002e8e4[1];
    DAT_000563bc._2_1_ = s_ioctrl_fail_0002e8e4[2];
    DAT_000563bc._3_1_ = s_ioctrl_fail_0002e8e4[3];
    DAT_000563c0._0_1_ = s_ioctrl_fail_0002e8e4[4];
    DAT_000563c0._1_1_ = s_ioctrl_fail_0002e8e4[5];
    DAT_000563c0._2_1_ = s_ioctrl_fail_0002e8e4[6];
    DAT_000563c0._3_1_ = s_ioctrl_fail_0002e8e4[7];
    DAT_000563c4._0_1_ = s_ioctrl_fail_0002e8e4[8];
    DAT_000563c4._1_1_ = s_ioctrl_fail_0002e8e4[9];
    DAT_000563c4._2_1_ = s_ioctrl_fail_0002e8e4[10];
    DAT_000563c4._3_1_ = s_ioctrl_fail_0002e8e4[0xb];
    DAT_000563c8 = (undefined1)DAT_000415a8;
  }
  FUN_00022540(1000);
  FUN_0001d9f4("io return buf= %s\n",&DAT_000563bc);
  FUN_00020768(auStack_814,param_1);
  FUN_00020638(auStack_814,local_14);
  FUN_00020638(auStack_814,&DAT_000563bc);
  FUN_00020768(&DAT_000563bc,auStack_814);
  FUN_0001d9f4("final return = %s\n",&DAT_000563bc);
  return local_c;
}



/* ===== FUN_0001ac18 @ 0001ac18 size=4312 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001ac18(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_cc [4];
  char acStack_c8 [4];
  char acStack_c4 [4];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined1 local_ae;
  char local_ac [4];
  char acStack_a8 [4];
  char acStack_a4 [4];
  undefined1 local_a0;
  char local_9c [4];
  char acStack_98 [4];
  undefined2 local_94;
  char local_90 [4];
  char acStack_8c [4];
  char local_88 [4];
  char acStack_84 [4];
  undefined1 local_80;
  char local_7c [4];
  char acStack_78 [4];
  undefined2 local_74;
  undefined1 local_72;
  char local_70 [4];
  char acStack_6c [4];
  undefined1 local_68;
  char local_64 [4];
  char acStack_60 [4];
  undefined1 local_5c;
  char local_58 [4];
  char acStack_54 [4];
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined2 local_34;
  undefined2 local_32;
  undefined4 local_30;
  undefined1 auStack_2c [8];
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  local_50 = DAT_0002e8cc;
  local_4c = (undefined2)DAT_0002e8d0;
  FUN_00020768(s_wlan0_00041354,param_1);
  FUN_0001d9f4(" Got wlan name:%s \n",s_wlan0_00041354);
  local_18 = FUN_00020d58(2,2,0);
  if (local_18 == -1) {
    FUN_0001d854("socket");
    FUN_00022404(1);
  }
  local_34 = 2;
  local_32 = FUN_00020b50(0x234a);
  local_30 = 0;
  FUN_00020350(auStack_2c,0,8);
  iVar2 = FUN_00020bc4(local_18,&local_34,0x10);
  if (iVar2 == -1) {
    FUN_0001d854(&DAT_0002e938);
    FUN_0001d44c(local_18);
    FUN_00022404(1);
  }
  local_48 = 0x10;
  FUN_0001d9f4("MP AUTOMATION daemon (ver %s), Port %d\n","rtw_5.2_20190329",0x234a);
  do {
    FUN_00020350(&DAT_0004159c,0,0x14e1f);
    FUN_00020350(&DAT_000563bc,0,0x14e1f);
    FUN_00020350(0x7fffc,0,0x14e1f);
    DAT_00094e1c = 0;
    FUN_00022540(5000);
    local_1c = FUN_00020c30(local_18,&DAT_0004159c,0x14e1f,0,auStack_44,&local_48);
    if (local_1c == -1) {
      FUN_0001f7b0("Receive failed!!!\n",1,0x12,DAT_00041448);
      FUN_0001d44c(local_18);
      FUN_00022404(1);
    }
    uVar4 = DAT_00041448;
    uVar3 = FUN_00020bb4(local_40);
    FUN_0001da38(uVar4,"received command (%s) from IP:%s\n",&DAT_0004159c,uVar3);
    iVar2 = FUN_00020430(&DAT_0004159c,"iwpriv wlan0 mp_ther",0x14);
    if (iVar2 == 0) {
      FUN_00020768(&DAT_0004159c,&DAT_0006b1dc);
      local_58[0] = s_mp_ther_0002ecf8[0];
      local_58[1] = s_mp_ther_0002ecf8[1];
      local_58[2] = s_mp_ther_0002ecf8[2];
      local_58[3] = s_mp_ther_0002ecf8[3];
      acStack_54[0] = s_mp_ther_0002ecf8[4];
      acStack_54[1] = s_mp_ther_0002ecf8[5];
      acStack_54[2] = s_mp_ther_0002ecf8[6];
      acStack_54[3] = s_mp_ther_0002ecf8[7];
      FUN_00020768(&DAT_000563bc,local_58);
      local_14 = FUN_00011b68(s_wlan0_00041354,&DAT_000563bc,1);
      FUN_00020350(&DAT_0004159c,0,0x14e1f);
      if (local_14 == 0) {
        FUN_00020768(&DAT_0004159c,&DAT_000563bc);
      }
      else {
        DAT_0004159c._0_1_ = s_mp_query_ioctrl_fail_0002e9cc[0];
        DAT_0004159c._1_1_ = s_mp_query_ioctrl_fail_0002e9cc[1];
        DAT_0004159c._2_1_ = s_mp_query_ioctrl_fail_0002e9cc[2];
        DAT_0004159c._3_1_ = s_mp_query_ioctrl_fail_0002e9cc[3];
        DAT_000415a0._0_1_ = s_mp_query_ioctrl_fail_0002e9cc[4];
        DAT_000415a0._1_1_ = s_mp_query_ioctrl_fail_0002e9cc[5];
        DAT_000415a0._2_1_ = s_mp_query_ioctrl_fail_0002e9cc[6];
        DAT_000415a0._3_1_ = s_mp_query_ioctrl_fail_0002e9cc[7];
        DAT_000415a4._0_1_ = s_mp_query_ioctrl_fail_0002e9cc[8];
        DAT_000415a4._1_1_ = s_mp_query_ioctrl_fail_0002e9cc[9];
        DAT_000415a4._2_1_ = s_mp_query_ioctrl_fail_0002e9cc[10];
        DAT_000415a4._3_1_ = s_mp_query_ioctrl_fail_0002e9cc[0xb];
        DAT_000415a8._0_1_ = s_mp_query_ioctrl_fail_0002e9cc[0xc];
        DAT_000415a8._1_1_ = s_mp_query_ioctrl_fail_0002e9cc[0xd];
        DAT_000415a8._2_1_ = s_mp_query_ioctrl_fail_0002e9cc[0xe];
        DAT_000415a8._3_1_ = s_mp_query_ioctrl_fail_0002e9cc[0xf];
        DAT_000415ac._0_1_ = s_mp_query_ioctrl_fail_0002e9cc[0x10];
        DAT_000415ac._1_1_ = s_mp_query_ioctrl_fail_0002e9cc[0x11];
        DAT_000415ac._2_1_ = s_mp_query_ioctrl_fail_0002e9cc[0x12];
        DAT_000415ac._3_1_ = s_mp_query_ioctrl_fail_0002e9cc[0x13];
        DAT_000415b0 = CONCAT22(DAT_000415b0._2_2_,(short)ram0x0002e9e0);
      }
      FUN_0001d9f4("buf= %s ..............\n",&DAT_000563bc);
      FUN_00022540(1000);
    }
    else {
      iVar2 = FUN_00020430(&DAT_0004159c,"iwpriv wlan0 mp_rssi",0x14);
      if ((iVar2 == 0) && ((DAT_000415b0 & 0xff) == 0x20)) {
        DAT_0004159c._0_1_ = s_Error___Not_supported_______0002ea14[0];
        DAT_0004159c._1_1_ = s_Error___Not_supported_______0002ea14[1];
        DAT_0004159c._2_1_ = s_Error___Not_supported_______0002ea14[2];
        DAT_0004159c._3_1_ = s_Error___Not_supported_______0002ea14[3];
        DAT_000415a0._0_1_ = s_Error___Not_supported_______0002ea14[4];
        DAT_000415a0._1_1_ = s_Error___Not_supported_______0002ea14[5];
        DAT_000415a0._2_1_ = s_Error___Not_supported_______0002ea14[6];
        DAT_000415a0._3_1_ = s_Error___Not_supported_______0002ea14[7];
        DAT_000415a4._0_1_ = s_Error___Not_supported_______0002ea14[8];
        DAT_000415a4._1_1_ = s_Error___Not_supported_______0002ea14[9];
        DAT_000415a4._2_1_ = s_Error___Not_supported_______0002ea14[10];
        DAT_000415a4._3_1_ = s_Error___Not_supported_______0002ea14[0xb];
        DAT_000415a8._0_1_ = s_Error___Not_supported_______0002ea14[0xc];
        DAT_000415a8._1_1_ = s_Error___Not_supported_______0002ea14[0xd];
        DAT_000415a8._2_1_ = s_Error___Not_supported_______0002ea14[0xe];
        DAT_000415a8._3_1_ = s_Error___Not_supported_______0002ea14[0xf];
        DAT_000415ac._0_1_ = s_Error___Not_supported_______0002ea14[0x10];
        DAT_000415ac._1_1_ = s_Error___Not_supported_______0002ea14[0x11];
        DAT_000415ac._2_1_ = s_Error___Not_supported_______0002ea14[0x12];
        DAT_000415ac._3_1_ = s_Error___Not_supported_______0002ea14[0x13];
        DAT_000415b0._0_1_ = s_Error___Not_supported_______0002ea14[0x14];
        DAT_000415b0._1_1_ = s_Error___Not_supported_______0002ea14[0x15];
        DAT_000415b0._2_1_ = s_Error___Not_supported_______0002ea14[0x16];
        DAT_000415b0._3_1_ = s_Error___Not_supported_______0002ea14[0x17];
        DAT_000415b4._0_1_ = s_Error___Not_supported_______0002ea14[0x18];
        DAT_000415b4._1_1_ = s_Error___Not_supported_______0002ea14[0x19];
        DAT_000415b4._2_1_ = s_Error___Not_supported_______0002ea14[0x1a];
        DAT_000415b4._3_1_ = s_Error___Not_supported_______0002ea14[0x1b];
        FUN_00022540(1000);
        local_14 = -1;
      }
      else {
        iVar2 = FUN_00020430(&DAT_0004159c,"iwpriv wlan0 mp_query",0x15);
        if (iVar2 == 0) {
          FUN_00020768(&DAT_0004159c,&DAT_0006b1dc);
          local_64[0] = s_mp_query_0002ed00[0];
          local_64[1] = s_mp_query_0002ed00[1];
          local_64[2] = s_mp_query_0002ed00[2];
          local_64[3] = s_mp_query_0002ed00[3];
          acStack_60[0] = s_mp_query_0002ed00[4];
          acStack_60[1] = s_mp_query_0002ed00[5];
          acStack_60[2] = s_mp_query_0002ed00[6];
          acStack_60[3] = s_mp_query_0002ed00[7];
          local_5c = (undefined1)ram0x0002ed08;
          uVar4 = FUN_000203b0(local_64);
          thunk_FUN_00029380(&DAT_000563bc,local_64,uVar4);
          DAT_000563bc._0_1_ = s_mp_query_0002ea48[0];
          DAT_000563bc._1_1_ = s_mp_query_0002ea48[1];
          DAT_000563bc._2_1_ = s_mp_query_0002ea48[2];
          DAT_000563bc._3_1_ = s_mp_query_0002ea48[3];
          DAT_000563c0._0_1_ = s_mp_query_0002ea48[4];
          DAT_000563c0._1_1_ = s_mp_query_0002ea48[5];
          DAT_000563c0._2_1_ = s_mp_query_0002ea48[6];
          DAT_000563c0._3_1_ = s_mp_query_0002ea48[7];
          DAT_000563c4 = CONCAT22(DAT_000563c4._2_2_,(short)ram0x0002ea50);
          local_14 = FUN_00011b68(s_wlan0_00041354,&DAT_000563bc,1);
          if (local_14 == 0) {
            FUN_00020768(&DAT_0004159c,&DAT_000563bc);
          }
          else {
            DAT_0004159c._0_1_ = s_mp_query_ioctrl_fail_0002e9cc[0];
            DAT_0004159c._1_1_ = s_mp_query_ioctrl_fail_0002e9cc[1];
            DAT_0004159c._2_1_ = s_mp_query_ioctrl_fail_0002e9cc[2];
            DAT_0004159c._3_1_ = s_mp_query_ioctrl_fail_0002e9cc[3];
            DAT_000415a0._0_1_ = s_mp_query_ioctrl_fail_0002e9cc[4];
            DAT_000415a0._1_1_ = s_mp_query_ioctrl_fail_0002e9cc[5];
            DAT_000415a0._2_1_ = s_mp_query_ioctrl_fail_0002e9cc[6];
            DAT_000415a0._3_1_ = s_mp_query_ioctrl_fail_0002e9cc[7];
            DAT_000415a4._0_1_ = s_mp_query_ioctrl_fail_0002e9cc[8];
            DAT_000415a4._1_1_ = s_mp_query_ioctrl_fail_0002e9cc[9];
            DAT_000415a4._2_1_ = s_mp_query_ioctrl_fail_0002e9cc[10];
            DAT_000415a4._3_1_ = s_mp_query_ioctrl_fail_0002e9cc[0xb];
            DAT_000415a8._0_1_ = s_mp_query_ioctrl_fail_0002e9cc[0xc];
            DAT_000415a8._1_1_ = s_mp_query_ioctrl_fail_0002e9cc[0xd];
            DAT_000415a8._2_1_ = s_mp_query_ioctrl_fail_0002e9cc[0xe];
            DAT_000415a8._3_1_ = s_mp_query_ioctrl_fail_0002e9cc[0xf];
            DAT_000415ac._0_1_ = s_mp_query_ioctrl_fail_0002e9cc[0x10];
            DAT_000415ac._1_1_ = s_mp_query_ioctrl_fail_0002e9cc[0x11];
            DAT_000415ac._2_1_ = s_mp_query_ioctrl_fail_0002e9cc[0x12];
            DAT_000415ac._3_1_ = s_mp_query_ioctrl_fail_0002e9cc[0x13];
            DAT_000415b0 = CONCAT22(DAT_000415b0._2_2_,(short)ram0x0002e9e0);
          }
          FUN_00022540(1000);
          FUN_0001d9f4("w0 2b= %s\n",&DAT_0004159c);
        }
        else {
          iVar2 = FUN_00020430(&DAT_0004159c,"iwpriv wlan0 mp_start",0x15);
          if (iVar2 == 0) {
            local_70[0] = s_mp_start_0002ed0c[0];
            local_70[1] = s_mp_start_0002ed0c[1];
            local_70[2] = s_mp_start_0002ed0c[2];
            local_70[3] = s_mp_start_0002ed0c[3];
            acStack_6c[0] = s_mp_start_0002ed0c[4];
            acStack_6c[1] = s_mp_start_0002ed0c[5];
            acStack_6c[2] = s_mp_start_0002ed0c[6];
            acStack_6c[3] = s_mp_start_0002ed0c[7];
            local_68 = (undefined1)ram0x0002ed14;
            uVar4 = FUN_000203b0(local_70);
            thunk_FUN_00029380(&DAT_000563bc,local_70,uVar4);
            DAT_000563bc._0_1_ = s_mp_start_0002ea78[0];
            DAT_000563bc._1_1_ = s_mp_start_0002ea78[1];
            DAT_000563bc._2_1_ = s_mp_start_0002ea78[2];
            DAT_000563bc._3_1_ = s_mp_start_0002ea78[3];
            DAT_000563c0._0_1_ = s_mp_start_0002ea78[4];
            DAT_000563c0._1_1_ = s_mp_start_0002ea78[5];
            DAT_000563c0._2_1_ = s_mp_start_0002ea78[6];
            DAT_000563c0._3_1_ = s_mp_start_0002ea78[7];
            DAT_000563c4 = CONCAT22(DAT_000563c4._2_2_,(short)ram0x0002ea80);
            local_14 = FUN_00011b68(s_wlan0_00041354,&DAT_000563bc,1);
            if (local_14 == 0) {
              FUN_0001da60(&DAT_0004159c,"%s ok",&DAT_0004159c);
            }
            else {
              DAT_0004159c._0_1_ = s_mp_start_ioctrl_fail_0002ea84[0];
              DAT_0004159c._1_1_ = s_mp_start_ioctrl_fail_0002ea84[1];
              DAT_0004159c._2_1_ = s_mp_start_ioctrl_fail_0002ea84[2];
              DAT_0004159c._3_1_ = s_mp_start_ioctrl_fail_0002ea84[3];
              DAT_000415a0._0_1_ = s_mp_start_ioctrl_fail_0002ea84[4];
              DAT_000415a0._1_1_ = s_mp_start_ioctrl_fail_0002ea84[5];
              DAT_000415a0._2_1_ = s_mp_start_ioctrl_fail_0002ea84[6];
              DAT_000415a0._3_1_ = s_mp_start_ioctrl_fail_0002ea84[7];
              DAT_000415a4._0_1_ = s_mp_start_ioctrl_fail_0002ea84[8];
              DAT_000415a4._1_1_ = s_mp_start_ioctrl_fail_0002ea84[9];
              DAT_000415a4._2_1_ = s_mp_start_ioctrl_fail_0002ea84[10];
              DAT_000415a4._3_1_ = s_mp_start_ioctrl_fail_0002ea84[0xb];
              DAT_000415a8._0_1_ = s_mp_start_ioctrl_fail_0002ea84[0xc];
              DAT_000415a8._1_1_ = s_mp_start_ioctrl_fail_0002ea84[0xd];
              DAT_000415a8._2_1_ = s_mp_start_ioctrl_fail_0002ea84[0xe];
              DAT_000415a8._3_1_ = s_mp_start_ioctrl_fail_0002ea84[0xf];
              DAT_000415ac._0_1_ = s_mp_start_ioctrl_fail_0002ea84[0x10];
              DAT_000415ac._1_1_ = s_mp_start_ioctrl_fail_0002ea84[0x11];
              DAT_000415ac._2_1_ = s_mp_start_ioctrl_fail_0002ea84[0x12];
              DAT_000415ac._3_1_ = s_mp_start_ioctrl_fail_0002ea84[0x13];
              DAT_000415b0 = CONCAT22(DAT_000415b0._2_2_,(short)ram0x0002ea98);
            }
            FUN_00022540(1000);
            FUN_0001d9f4("w0 2b= %s\n",&DAT_0004159c);
          }
          else {
            iVar2 = FUN_00020430(&DAT_0004159c,"iwpriv wlan0 mp_arx phy",0x17);
            if (iVar2 == 0) {
              FUN_00020768(&DAT_0004159c,&DAT_0006b1dc);
              local_7c[0] = s_mp_arx_phy_0002ed18[0];
              local_7c[1] = s_mp_arx_phy_0002ed18[1];
              local_7c[2] = s_mp_arx_phy_0002ed18[2];
              local_7c[3] = s_mp_arx_phy_0002ed18[3];
              acStack_78[0] = s_mp_arx_phy_0002ed18[4];
              acStack_78[1] = s_mp_arx_phy_0002ed18[5];
              acStack_78[2] = s_mp_arx_phy_0002ed18[6];
              acStack_78[3] = s_mp_arx_phy_0002ed18[7];
              local_74 = (undefined2)ram0x0002ed20;
              local_72 = (undefined1)((uint)ram0x0002ed20 >> 0x10);
              uVar4 = FUN_000203b0(local_7c);
              thunk_FUN_00029380(&DAT_000563bc,local_7c,uVar4);
              DAT_000563bc._0_1_ = s_mp_arx_phy_0002eabc[0];
              DAT_000563bc._1_1_ = s_mp_arx_phy_0002eabc[1];
              DAT_000563bc._2_1_ = s_mp_arx_phy_0002eabc[2];
              DAT_000563bc._3_1_ = s_mp_arx_phy_0002eabc[3];
              DAT_000563c0._0_1_ = s_mp_arx_phy_0002eabc[4];
              DAT_000563c0._1_1_ = s_mp_arx_phy_0002eabc[5];
              DAT_000563c0._2_1_ = s_mp_arx_phy_0002eabc[6];
              DAT_000563c0._3_1_ = s_mp_arx_phy_0002eabc[7];
              DAT_000563c4._0_1_ = s_mp_arx_phy_0002eabc[8];
              DAT_000563c4._1_1_ = s_mp_arx_phy_0002eabc[9];
              DAT_000563c4._2_1_ = s_mp_arx_phy_0002eabc[10];
              DAT_000563c4._3_1_ = s_mp_arx_phy_0002eabc[0xb];
              local_14 = FUN_00011b68(s_wlan0_00041354,&DAT_000563bc,1);
              if (local_14 == 0) {
                FUN_00020768(&DAT_0004159c,&DAT_000563bc);
              }
              else {
                DAT_0004159c._0_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[0];
                DAT_0004159c._1_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[1];
                DAT_0004159c._2_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[2];
                DAT_0004159c._3_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[3];
                DAT_000415a0._0_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[4];
                DAT_000415a0._1_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[5];
                DAT_000415a0._2_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[6];
                DAT_000415a0._3_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[7];
                DAT_000415a4._0_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[8];
                DAT_000415a4._1_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[9];
                DAT_000415a4._2_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[10];
                DAT_000415a4._3_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[0xb];
                DAT_000415a8._0_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[0xc];
                DAT_000415a8._1_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[0xd];
                DAT_000415a8._2_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[0xe];
                DAT_000415a8._3_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[0xf];
                DAT_000415ac._0_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[0x10];
                DAT_000415ac._1_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[0x11];
                DAT_000415ac._2_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[0x12];
                DAT_000415ac._3_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[0x13];
                DAT_000415b0._0_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[0x14];
                DAT_000415b0._1_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[0x15];
                DAT_000415b0._2_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[0x16];
                DAT_000415b0._3_1_ = s_mp_arx_phy_ioctrl_fail_0002eac8[0x17];
              }
              FUN_00022540(1000);
              FUN_0001d9f4("w0 2b= %s\n",&DAT_0004159c);
            }
            else {
              iVar2 = FUN_00020430(&DAT_0004159c,"iwpriv wlan0 mp_arx rssi",0x18);
              if (iVar2 == 0) {
                FUN_0001a764(&DAT_0004159c,1);
              }
              else {
                iVar2 = FUN_00020430(&DAT_0004159c,"iwpriv wlan0 mp_get_tsside",0x1a);
                if (iVar2 == 0) {
                  FUN_0001a764(&DAT_0004159c,1);
                }
                else {
                  iVar2 = FUN_00020430(&DAT_0004159c,"flash read",10);
                  if (iVar2 == 0) {
                    local_20 = FUN_0001d848("/tmp/MP.txt",&DAT_0002e7e0);
                    if (local_20 == 0) {
                      FUN_0001f7b0("opening MP.txt failed !\n",1,0x18,DAT_00041448);
                    }
                    if (local_20 != 0) {
                      DAT_00094e20 = 1;
                      FUN_0001f6b4(&DAT_0004159c,0x14e1f,local_20);
                      DAT_000563ba = 0;
                      uVar4 = FUN_000203b0(s_wlan0_read_reg__00041300);
                      iVar2 = FUN_0002066c(&DAT_0004159c,s_wlan0_read_reg__00041300,uVar4);
                      if (iVar2 == 0) {
                        FUN_0001a1f0(local_20,&DAT_0004159c,0x14e1f);
                      }
                      uVar4 = FUN_000203b0(s_wlan0_read_rf__00041318);
                      iVar2 = FUN_0002066c(&DAT_0004159c,s_wlan0_read_rf__00041318,uVar4);
                      if (iVar2 == 0) {
                        FUN_0001a1f0(local_20,&DAT_0004159c,0x14e1f);
                      }
                      uVar4 = FUN_000203b0(s_wlan0_mp_psd__0004132c);
                      iVar2 = FUN_0002066c(&DAT_0004159c,s_wlan0_mp_psd__0004132c,uVar4);
                      if (iVar2 == 0) {
                        FUN_0001a1f0(local_20,&DAT_0004159c,0x14e1f);
                      }
                      uVar4 = FUN_000203b0(s_wlan1_mp_psd__00041340);
                      iVar2 = FUN_0002066c(&DAT_0004159c,s_wlan1_mp_psd__00041340,uVar4);
                      if (iVar2 == 0) {
                        FUN_0001a1f0(local_20,&DAT_0004159c,0x14e1f);
                      }
                      FUN_0001d568(local_20);
                    }
                    local_24 = FUN_0001a41c(&DAT_0004159c,s_wlan0_00041354,&local_50);
                    FUN_0001da60(&DAT_0006b1dc,"data:%s",local_24);
                  }
                  else {
                    iVar2 = FUN_00020430(&DAT_0004159c,"flash get",9);
                    if (iVar2 == 0) {
                      FUN_0001da60(&DAT_0006b1dc,"%s > /tmp/MP.txt ok",&DAT_0004159c);
                    }
                    else {
                      FUN_0001da60(&DAT_0006b1dc,"%s ok",&DAT_0004159c);
                    }
                  }
                  iVar2 = FUN_00020430(&DAT_0004159c,"iwpriv wlan0 mp_brx stop",0x18);
                  if (iVar2 == 0) {
                    DAT_0004159c._0_1_ = (char)DAT_0002eb90;
                    DAT_0004159c._1_1_ = DAT_0002eb90._1_1_;
                    DAT_0004159c._2_1_ = DAT_0002eb90._2_1_;
                    DAT_0004159c._3_1_ = DAT_0002eb90._3_1_;
                    DAT_000415a0 = CONCAT31(DAT_000415a0._1_3_,(char)DAT_0002eb94);
                  }
                  else {
                    iVar2 = FUN_00020430(&DAT_0004159c,"iwpriv wlan0 mp_tx",0x12);
                    uVar4 = DAT_0001bcf0;
                    if ((iVar2 == 0) && (DAT_000415ac._2_1_ == ' ')) {
                      iVar2 = FUN_000203b0(&DAT_0004159c);
                      thunk_FUN_00029380(&DAT_000563bc,uVar4,iVar2 + -0x13);
                      FUN_00020768(&DAT_0004159c,&DAT_000563bc);
                    }
                    else {
                      iVar2 = FUN_00020430(&DAT_0004159c,"iwpriv wlan0 read_reg",0x15);
                      if (iVar2 == 0) {
                        local_88[0] = s_read_reg_0002ed24[0];
                        local_88[1] = s_read_reg_0002ed24[1];
                        local_88[2] = s_read_reg_0002ed24[2];
                        local_88[3] = s_read_reg_0002ed24[3];
                        acStack_84[0] = s_read_reg_0002ed24[4];
                        acStack_84[1] = s_read_reg_0002ed24[5];
                        acStack_84[2] = s_read_reg_0002ed24[6];
                        acStack_84[3] = s_read_reg_0002ed24[7];
                        local_80 = (undefined1)ram0x0002ed2c;
                        FUN_0001aa70(local_88);
                      }
                      else {
                        iVar2 = FUN_00020430(&DAT_0004159c,"iwpriv wlan0 read_rf",0x14);
                        if (iVar2 == 0) {
                          local_90[0] = s_read_rf_0002ed30[0];
                          local_90[1] = s_read_rf_0002ed30[1];
                          local_90[2] = s_read_rf_0002ed30[2];
                          local_90[3] = s_read_rf_0002ed30[3];
                          acStack_8c[0] = s_read_rf_0002ed30[4];
                          acStack_8c[1] = s_read_rf_0002ed30[5];
                          acStack_8c[2] = s_read_rf_0002ed30[6];
                          acStack_8c[3] = s_read_rf_0002ed30[7];
                          FUN_0001aa70(local_90);
                        }
                        else {
                          iVar2 = FUN_00020430(&DAT_0004159c,"iwpriv wlan0 efuse_get",0x16);
                          if (iVar2 == 0) {
                            local_9c[0] = s_efuse_get_0002ed38[0];
                            local_9c[1] = s_efuse_get_0002ed38[1];
                            local_9c[2] = s_efuse_get_0002ed38[2];
                            local_9c[3] = s_efuse_get_0002ed38[3];
                            acStack_98[0] = s_efuse_get_0002ed38[4];
                            acStack_98[1] = s_efuse_get_0002ed38[5];
                            acStack_98[2] = s_efuse_get_0002ed38[6];
                            acStack_98[3] = s_efuse_get_0002ed38[7];
                            local_94 = (undefined2)ram0x0002ed40;
                            FUN_0001aa70(local_9c);
                          }
                          else {
                            iVar2 = FUN_00020430(&DAT_0004159c,"iwpriv wlan0 efuse_set",0x16);
                            if (iVar2 == 0) {
                              iVar2 = FUN_000203b0(&DAT_0004159c);
                              uVar3 = s_>__tmp_MP_txt_0002ec0c._8_4_;
                              uVar4 = s_>__tmp_MP_txt_0002ec0c._4_4_;
                              *(undefined4 *)((int)&DAT_0004159c + iVar2) =
                                   s_>__tmp_MP_txt_0002ec0c._0_4_;
                              *(undefined4 *)((int)&DAT_000415a0 + iVar2) = uVar4;
                              *(undefined4 *)((int)&DAT_000415a4 + iVar2) = uVar3;
                              cVar1 = s_>__tmp_MP_txt_0002ec0c[0xe];
                              *(undefined2 *)((int)&DAT_000415a8 + iVar2) =
                                   s_>__tmp_MP_txt_0002ec0c._12_2_;
                              *(char *)((int)&DAT_000415a8 + iVar2 + 2) = cVar1;
                              FUN_0001a764(&DAT_0004159c,0);
                            }
                            else {
                              iVar2 = FUN_00020430(&DAT_0004159c,"iwpriv wlan0 efuse_sync",0x17);
                              if (iVar2 == 0) {
                                local_ac[0] = s_efuse_update_0002ed44[0];
                                local_ac[1] = s_efuse_update_0002ed44[1];
                                local_ac[2] = s_efuse_update_0002ed44[2];
                                local_ac[3] = s_efuse_update_0002ed44[3];
                                acStack_a8[0] = s_efuse_update_0002ed44[4];
                                acStack_a8[1] = s_efuse_update_0002ed44[5];
                                acStack_a8[2] = s_efuse_update_0002ed44[6];
                                acStack_a8[3] = s_efuse_update_0002ed44[7];
                                acStack_a4[0] = s_efuse_update_0002ed44[8];
                                acStack_a4[1] = s_efuse_update_0002ed44[9];
                                acStack_a4[2] = s_efuse_update_0002ed44[10];
                                acStack_a4[3] = s_efuse_update_0002ed44[0xb];
                                local_a0 = (undefined1)ram0x0002ed50;
                                FUN_0001aa70(local_ac);
                              }
                              else {
                                iVar2 = FUN_00020430(&DAT_0004159c,"iwpriv wlan0 mp_psd",0x13);
                                if (iVar2 == 0) {
                                  local_b4 = DAT_0002ed54;
                                  local_b0 = (undefined2)DAT_0002ed58;
                                  local_ae = (undefined1)((uint)DAT_0002ed58 >> 0x10);
                                  FUN_0001aa70(&local_b4);
                                }
                                else {
                                  iVar2 = FUN_00020430(&DAT_0004159c,"iwpriv wlan0 mp_pwrctldm",0x18
                                                      );
                                  if (iVar2 == 0) {
                                    local_c0 = DAT_0002ed5c;
                                    uStack_bc = DAT_0002ed60;
                                    uStack_b8 = DAT_0002ed64;
                                    FUN_0001aa70(&local_c0);
                                  }
                                  else {
                                    iVar2 = FUN_00020430(&DAT_0004159c,
                                                         "iwpriv wlan0 mp_drvquery autoload",0x20);
                                    if (iVar2 == 0) {
                                      local_cc[0] = s_mp_drvquery_0002ed68[0];
                                      local_cc[1] = s_mp_drvquery_0002ed68[1];
                                      local_cc[2] = s_mp_drvquery_0002ed68[2];
                                      local_cc[3] = s_mp_drvquery_0002ed68[3];
                                      acStack_c8[0] = s_mp_drvquery_0002ed68[4];
                                      acStack_c8[1] = s_mp_drvquery_0002ed68[5];
                                      acStack_c8[2] = s_mp_drvquery_0002ed68[6];
                                      acStack_c8[3] = s_mp_drvquery_0002ed68[7];
                                      acStack_c4[0] = s_mp_drvquery_0002ed68[8];
                                      acStack_c4[1] = s_mp_drvquery_0002ed68[9];
                                      acStack_c4[2] = s_mp_drvquery_0002ed68[10];
                                      acStack_c4[3] = s_mp_drvquery_0002ed68[0xb];
                                      FUN_0001aa70(local_cc);
                                    }
                                    else {
                                      iVar2 = FUN_00020430(&DAT_0004159c,"probe",5);
                                      if (iVar2 == 0) {
                                        DAT_0004159c._0_1_ = 'a';
                                        DAT_0004159c._1_1_ = 'c';
                                        DAT_0004159c._2_1_ = 'k';
                                        DAT_0004159c._3_1_ = '\0';
                                      }
                                      else {
                                        iVar2 = FUN_00020430(&DAT_0004159c,"flash get",9);
                                        if (iVar2 == 0) {
                                          FUN_0001da60(0x7fffc,"flash gethw %s",DAT_0001bcf4);
                                          DAT_00094e1c = 1;
                                          iVar2 = FUN_000203b0(0x7fffc);
                                          uVar3 = s_>__tmp_MP_txt_0002ec0c._8_4_;
                                          uVar4 = s_>__tmp_MP_txt_0002ec0c._4_4_;
                                          *(undefined4 *)(iVar2 + 0x7fffc) =
                                               s_>__tmp_MP_txt_0002ec0c._0_4_;
                                          *(undefined4 *)(iVar2 + 0x80000) = uVar4;
                                          *(undefined4 *)(&DAT_00080004 + iVar2) = uVar3;
                                          cVar1 = s_>__tmp_MP_txt_0002ec0c[0xe];
                                          *(undefined2 *)(&DAT_00080008 + iVar2) =
                                               s_>__tmp_MP_txt_0002ec0c._12_2_;
                                          (&DAT_0008000a)[iVar2] = cVar1;
                                        }
                                        iVar2 = FUN_00020430(&DAT_0004159c,"flash set",9);
                                        if (iVar2 == 0) {
                                          FUN_0001da60(0x7fffc,"flash sethw %s",DAT_0001bcf4);
                                          DAT_00094e1c = 1;
                                          uVar4 = FUN_000203b0(&DAT_0006b1dc);
                                          local_1c = FUN_00020ce0(local_18,&DAT_0006b1dc,uVar4,0,
                                                                  auStack_44,0x10);
                                          if (local_1c == -1) {
                                            FUN_0001f7b0("send failed\n",1,0xc,DAT_00041448);
                                            FUN_0001d44c(local_18);
                                            FUN_00022404(1);
                                          }
                                        }
                                        if (DAT_00094e1c == 1) {
                                          FUN_0001a764(0x7fffc,0);
                                        }
                                        else if (DAT_00094e20 == 0) {
                                          FUN_0001a764(&DAT_0004159c,0);
                                        }
                                        else {
                                          DAT_00094e20 = 0;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  if ((DAT_000563bc & 0xff) == 0) {
                    FUN_00020768(&DAT_000563bc,&DAT_0006b1dc);
                  }
                  FUN_00020768(&DAT_0006b1dc,&DAT_0004159c);
                  FUN_00020768(&DAT_0004159c,&DAT_000563bc);
                }
              }
            }
          }
        }
      }
    }
    iVar2 = FUN_00020430(&DAT_0004159c,"flash set",9);
    if (iVar2 != 0) {
      uVar4 = FUN_000203b0(&DAT_0004159c);
      local_1c = FUN_00020ce0(local_18,&DAT_0004159c,uVar4,0,auStack_44,0x10);
      if (local_1c == -1) {
        FUN_0001f7b0("send failed\n",1,0xc,DAT_00041448);
        FUN_0001d44c(local_18);
        FUN_00022404(1);
      }
      uVar4 = FUN_000203b0(&DAT_0004159c);
      FUN_0001d9f4("buf %s , strlen buf = (%d) numbytes %d \n",&DAT_0004159c,uVar4,local_1c);
    }
  } while( true );
}



/* ===== FUN_0001bcf8 @ 0001bcf8 size=168 ===== */

ulonglong FUN_0001bcf8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_2 - 1 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (param_2 == 0) {
    uVar1 = FUN_00022b6c(8);
    return (ulonglong)uVar1;
  }
  if (param_1 <= param_2) {
    return CONCAT44(param_2,(uint)(param_1 == param_2));
  }
  if ((param_2 & param_2 - 1) == 0) {
    return CONCAT44(param_2,param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff));
  }
  uVar2 = param_2 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar1 = 1 << (LZCOUNT(param_2) - LZCOUNT(param_1) & 0xffU);
  uVar3 = 0;
  while( true ) {
    if (uVar2 <= param_1) {
      param_1 = param_1 - uVar2;
      uVar3 = uVar3 | uVar1;
    }
    if (uVar2 >> 1 <= param_1) {
      param_1 = param_1 - (uVar2 >> 1);
      uVar3 = uVar3 | uVar1 >> 1;
    }
    if (uVar2 >> 2 <= param_1) {
      param_1 = param_1 - (uVar2 >> 2);
      uVar3 = uVar3 | uVar1 >> 2;
    }
    if (uVar2 >> 3 <= param_1) {
      param_1 = param_1 - (uVar2 >> 3);
      uVar3 = uVar3 | uVar1 >> 3;
    }
    bVar4 = param_1 == 0;
    if (!bVar4) {
      uVar1 = uVar1 >> 4;
      bVar4 = uVar1 == 0;
    }
    if (bVar4) break;
    uVar2 = uVar2 >> 4;
  }
  return CONCAT44(uVar2,uVar3);
}



/* ===== FUN_0001bda0 @ 0001bda0 size=32 ===== */

void FUN_0001bda0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0001bcf8();
    return;
  }
  FUN_00022b6c(8);
  return;
}



/* ===== FUN_0001bdc0 @ 0001bdc0 size=24 ===== */

ulonglong FUN_0001bdc0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    uVar2 = FUN_00022b6c(8);
    return (ulonglong)uVar2;
  }
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return CONCAT44(uVar2,param_1);
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  if (uVar4 <= uVar2) {
    if (uVar4 < uVar2) {
      param_1 = 0;
    }
    if (uVar4 == uVar2) {
      param_1 = (int)uVar5 >> 0x1f | 1;
    }
    return CONCAT44(uVar2,param_1);
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return CONCAT44(uVar2,uVar4);
  }
  uVar3 = uVar2 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar2 = 1 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar1 = 0;
  while( true ) {
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar3;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar3 >> 1 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar3 >> 2 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar3 >> 3 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar6 = uVar4 == 0;
    if (!bVar6) {
      uVar2 = uVar2 >> 4;
      bVar6 = uVar2 == 0;
    }
    if (bVar6) break;
    uVar3 = uVar3 >> 4;
  }
  if ((int)uVar5 < 0) {
    uVar1 = -uVar1;
  }
  return CONCAT44(uVar3,uVar1);
}



/* ===== FUN_0001bdc8 @ 0001bdc8 size=196 ===== */

uint FUN_0001bdc8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool in_NG;
  bool bVar6;
  
  uVar5 = param_1 ^ param_2;
  uVar2 = param_2;
  if (in_NG) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar4 = param_1;
  if ((int)param_1 < 0) {
    uVar4 = -param_1;
  }
  if (uVar4 <= uVar2) {
    if (uVar4 < uVar2) {
      param_1 = 0;
    }
    if (uVar4 == uVar2) {
      param_1 = (int)uVar5 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar4 = uVar4 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar5 < 0) {
      uVar4 = -uVar4;
    }
    return uVar4;
  }
  uVar3 = uVar2 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar2 = 1 << (LZCOUNT(uVar2) - LZCOUNT(uVar4) & 0xffU);
  uVar1 = 0;
  while( true ) {
    if (uVar3 <= uVar4) {
      uVar4 = uVar4 - uVar3;
      uVar1 = uVar1 | uVar2;
    }
    if (uVar3 >> 1 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 1);
      uVar1 = uVar1 | uVar2 >> 1;
    }
    if (uVar3 >> 2 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 2);
      uVar1 = uVar1 | uVar2 >> 2;
    }
    if (uVar3 >> 3 <= uVar4) {
      uVar4 = uVar4 - (uVar3 >> 3);
      uVar1 = uVar1 | uVar2 >> 3;
    }
    bVar6 = uVar4 == 0;
    if (!bVar6) {
      uVar2 = uVar2 >> 4;
      bVar6 = uVar2 == 0;
    }
    if (bVar6) break;
    uVar3 = uVar3 >> 4;
  }
  if ((int)uVar5 < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}



/* ===== FUN_0001be9c @ 0001be9c size=48 ===== */

void FUN_0001be9c(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0001bdc8();
    return;
  }
  FUN_00022b6c(8);
  return;
}



/* ===== FUN_0001becc @ 0001becc size=24 ===== */

int FUN_0001becc(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x40000000) == 0) {
    uVar1 = uVar1 & 0x7fffffff;
  }
  else {
    uVar1 = uVar1 | 0x80000000;
  }
  return (int)param_1 + uVar1;
}



/* ===== FUN_0001bee4 @ 0001bee4 size=152 ===== */

undefined4 FUN_0001bee4(int param_1,int param_2)

{
  int iVar1;
  uint extraout_r2;
  uint extraout_r2_00;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar3 = 0;
  iVar2 = param_2 + -1;
  do {
    while( true ) {
      iVar1 = (iVar3 + iVar2) / 2;
      uVar4 = FUN_0001becc(param_1 + iVar1 * 8);
      if (param_2 + -1 == iVar1) break;
      if (extraout_r2 < (uint)uVar4) goto LAB_0001bf2c;
      uVar4 = FUN_0001becc(param_1 + iVar1 * 8 + 8);
      if (extraout_r2_00 <= (int)uVar4 - 1U) {
        return (int)((ulonglong)uVar4 >> 0x20);
      }
      iVar3 = iVar1 + 1;
    }
    if ((uint)uVar4 <= extraout_r2) {
      return (int)((ulonglong)uVar4 >> 0x20);
    }
LAB_0001bf2c:
    if (iVar3 == iVar1) {
      return 0;
    }
    iVar2 = iVar1 + -1;
  } while( true );
}



/* ===== FUN_0001bf7c @ 0001bf7c size=72 ===== */

int FUN_0001bf7c(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0001bfcc;
  if ((param_1 != 1) && (iVar1 = DAT_0001bfd0, param_1 != 2)) {
    if (param_1 != 0) {
      return 0;
    }
    return DAT_0001bfc8 + 0x1bfa8;
  }
  return *(int *)(DAT_0001bfc4 + 0x1bf8c + iVar1);
}



/* ===== FUN_0001bfd4 @ 0001bfd4 size=252 ===== */

undefined4 FUN_0001bfd4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r2;
  int iVar4;
  int iVar5;
  
  iVar5 = param_2 + -2;
  iVar1 = DAT_0001c0d0 + 0x1bff0;
  iVar4 = *(int *)(iVar1 + DAT_0001c0d4);
  if (iVar4 == 0) {
    iVar2 = *(int *)(iVar1 + DAT_0001c0dc);
    iVar4 = *(int *)(iVar1 + DAT_0001c0d8) - iVar2 >> 3;
    param_2 = iVar4;
  }
  else {
    iVar2 = iVar5;
    if (iVar5 == 0) goto LAB_0001c00c;
  }
  iVar4 = FUN_0001bee4(iVar2,param_2,iVar5,iVar4,param_1,param_2,param_3);
  if (iVar4 != 0) {
    uVar3 = FUN_0001becc();
    iVar4 = *(int *)(extraout_r2 + 4);
    *(undefined4 *)(param_1 + 0x48) = uVar3;
    if (iVar4 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      return 5;
    }
    if (iVar4 < 0) {
      *(int *)(param_1 + 0x4c) = extraout_r2 + 4;
    }
    else {
      uVar3 = FUN_0001becc();
      *(undefined4 *)(param_1 + 0x4c) = uVar3;
    }
    *(uint *)(param_1 + 0x50) = (uint)(iVar4 < 0);
    if ((int)**(uint **)(param_1 + 0x4c) < 0) {
      iVar4 = FUN_0001bf7c((**(uint **)(param_1 + 0x4c) & 0xfffffff) >> 0x18);
      *(int *)(param_1 + 0x10) = iVar4;
      if (iVar4 == 0) {
        return 9;
      }
      return 0;
    }
    uVar3 = FUN_0001becc();
    *(undefined4 *)(param_1 + 0x10) = uVar3;
    return 0;
  }
LAB_0001c00c:
  *(undefined4 *)(param_1 + 0x10) = 0;
  return 9;
}



/* ===== FUN_0001c14c @ 0001c14c size=20 ===== */

undefined4 FUN_0001c14c(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = *(undefined4 *)((int)param_1 + *param_1);
  }
  return uVar1;
}



/* ===== FUN_0001c168 @ 0001c168 size=4 ===== */

void FUN_0001c168(void)

{
  return;
}



/* ===== FUN_0001c16c @ 0001c16c size=392 ===== */

void FUN_0001c16c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r2;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 local_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 local_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined1 auStack_218 [56];
  undefined4 local_1e0;
  int local_34;
  int iStack_30;
  int iStack_2c;
  
  do {
    iVar1 = FUN_0001bfd4(param_1,*(undefined4 *)(param_2 + 0x40));
    if (iVar1 == 0) goto LAB_0001c190;
    while( true ) {
      FUN_00021c14();
LAB_0001c190:
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x40);
      iVar2 = (**(code **)(param_1 + 0x10))(1,param_1,param_2);
      if (iVar2 == 8) break;
      if (iVar2 == 7) {
        FUN_0001c168(iVar1,*(undefined4 *)(param_2 + 0x40));
        uVar8 = FUN_0001cd20(param_2 + 4);
        iVar2 = (int)((ulonglong)uVar8 >> 0x20);
        iVar3 = (int)uVar8;
        pcVar6 = *(code **)(iVar3 + 0xc);
        uVar7 = *(undefined4 *)(iVar3 + 0x18);
        local_3f4 = *(undefined4 *)(iVar2 + 4);
        uStack_3f0 = *(undefined4 *)(iVar2 + 8);
        uStack_3ec = *(undefined4 *)(iVar2 + 0xc);
        uStack_3e8 = *(undefined4 *)(iVar2 + 0x10);
        iVar4 = 0;
        local_3e4 = *(undefined4 *)(iVar2 + 0x14);
        uStack_3e0 = *(undefined4 *)(iVar2 + 0x18);
        uStack_3dc = *(undefined4 *)(iVar2 + 0x1c);
        uStack_3d8 = *(undefined4 *)(iVar2 + 0x20);
        local_3d4 = *(undefined4 *)(iVar2 + 0x24);
        uStack_3d0 = *(undefined4 *)(iVar2 + 0x28);
        uStack_3cc = *(undefined4 *)(iVar2 + 0x2c);
        uStack_3c8 = *(undefined4 *)(iVar2 + 0x30);
        local_3c4 = *(undefined4 *)(iVar2 + 0x34);
        local_3c0 = *(undefined4 *)(iVar2 + 0x38);
        uStack_3bc = *(undefined4 *)(iVar2 + 0x3c);
        local_3b8 = *(undefined4 *)(iVar2 + 0x40);
        local_3f8 = 0;
        iVar2 = extraout_r2;
        local_34 = param_2;
        iStack_30 = param_1;
        iStack_2c = iVar1;
        goto LAB_0001c220;
      }
    }
  } while( true );
  while( true ) {
    if (iVar1 != 0) goto LAB_0001c2e8;
    thunk_FUN_00029380(&local_3f8,auStack_218,0x1e0);
    iVar2 = 0;
    if (iVar4 != 8) break;
LAB_0001c220:
    iVar1 = FUN_0001bfd4(iVar3,local_3b8);
    if (iVar2 == 0) {
      uVar5 = 9;
    }
    else {
      uVar5 = 10;
    }
    if (iVar1 == 0) {
      *(undefined4 *)(iVar3 + 0x14) = local_3b8;
      thunk_FUN_00029380(auStack_218,&local_3f8,0x1e0);
      iVar4 = (**(code **)(iVar3 + 0x10))(uVar5,iVar3,auStack_218);
      local_3b4 = local_1e0;
    }
    else {
      uVar5 = uVar5 | 0x10;
      local_3b4 = local_3c0;
    }
    iVar2 = (*pcVar6)(1,uVar5,iVar3,iVar3,&local_3f8,uVar7);
    if (iVar2 != 0) goto LAB_0001c2e4;
  }
  if (iVar4 == 7) {
    FUN_0001c168(0,local_3b8);
    FUN_0001cd20(&local_3f4);
  }
LAB_0001c2e4:
  iVar1 = 9;
LAB_0001c2e8:
                    /* WARNING: Could not recover jumptable at 0x0001c2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x1c1d0)(iVar1);
  return;
}



/* ===== FUN_0001c468 @ 0001c468 size=84 ===== */

undefined4 FUN_0001c468(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 *param_5)

{
  bool bVar1;
  
  switch(param_2) {
  case 0:
    bVar1 = param_3 == 0xf;
    if (param_3 < 0x10) {
      bVar1 = param_4 == 0;
    }
    if (bVar1) {
      *param_5 = *(undefined4 *)(param_1 + param_3 * 4 + 4);
      return param_2;
    }
    break;
  case 1:
    return 1;
  case 2:
    break;
  case 3:
    return 1;
  case 4:
    return 1;
  }
  return 2;
}



/* ===== FUN_0001c4bc @ 0001c4bc size=40 ===== */

undefined4 FUN_0001c4bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  
  local_c = param_4;
  FUN_0001c468(param_1,0,param_2,0,&local_c,param_2,param_3);
  return local_c;
}



/* ===== FUN_0001c4e4 @ 0001c4e4 size=84 ===== */

undefined4 FUN_0001c4e4(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 *param_5)

{
  bool bVar1;
  
  switch(param_2) {
  case 0:
    bVar1 = param_3 == 0xf;
    if (param_3 < 0x10) {
      bVar1 = param_4 == 0;
    }
    if (bVar1) {
      *(undefined4 *)(param_1 + param_3 * 4 + 4) = *param_5;
      return param_2;
    }
    break;
  case 1:
    return 1;
  case 2:
    break;
  case 3:
    return 1;
  case 4:
    return 1;
  }
  return 2;
}



/* ===== FUN_0001c538 @ 0001c538 size=40 ===== */

void FUN_0001c538(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_c;
  
  local_c = param_3;
  FUN_0001c4e4(param_1,0,param_2,0,&local_c,param_2,param_3);
  return;
}



/* ===== FUN_0001c628 @ 0001c628 size=928 ===== */

undefined4 FUN_0001c628(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int extraout_r3;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  int *local_38;
  int local_34;
  uint *local_30;
  undefined2 local_2c;
  
  uVar10 = param_1 & 3;
  iVar7 = DAT_0001c9c8 + 0x1c650;
  local_30 = *(uint **)(param_2 + 0x4c) + 1;
  uVar8 = **(uint **)(param_2 + 0x4c);
  if (param_4 == 0) {
    local_34 = uVar8 << 8;
    local_2c = 3;
    puVar5 = local_30;
  }
  else {
    local_34 = uVar8 << 0x10;
    local_2c = CONCAT11((char)(uVar8 >> 0x10),2);
    puVar5 = local_30 + (uVar8 >> 0x10 & 0xff);
  }
  if (uVar10 == 2) {
    puVar5 = *(uint **)(param_2 + 0x38);
  }
  if ((*(uint *)(param_2 + 0x50) & 1) == 0) {
    bVar13 = false;
LAB_0001c86c:
    do {
      while( true ) {
        uVar8 = *puVar5;
        if (uVar8 == 0) goto LAB_0001c878;
        if (param_4 == 2) {
          puVar2 = puVar5 + 2;
          uVar11 = puVar5[1];
        }
        else {
          puVar2 = puVar5 + 1;
          uVar11 = (uint)*(ushort *)((int)puVar5 + 2);
          uVar8 = (uint)(ushort)*puVar5;
        }
        uVar9 = (uVar11 & 0xfffffffe) + *(int *)(param_2 + 0x48);
        uVar14 = FUN_0001c4bc(param_3,0xf);
        uVar4 = (undefined4)((ulonglong)uVar14 >> 0x20);
        if ((uint)uVar14 < uVar9) {
          bVar1 = false;
        }
        else if ((uint)uVar14 < (uVar8 & 0xfffffffe) + uVar9) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        uVar8 = (uVar11 & 1) << 1 | uVar8 & 1;
        if (uVar8 != 1) break;
        if (uVar10 == 0) {
          if (bVar1) {
            if (puVar2[1] == 0xfffffffe) {
              return 9;
            }
            piVar6 = (int *)(param_2 + 0x58);
            iVar3 = 1;
            if ((puVar2[1] == 0xffffffff) ||
               (FUN_0001c14c(puVar2 + 1,piVar6,*puVar2 >> 0x1f), iVar3 = param_2, local_38 = piVar6,
               param_2 != 0)) {
              uVar4 = FUN_0001c4bc(param_3,0xd);
              iVar7 = param_2;
              if (iVar3 != 2) {
                *(int **)(param_2 + 0x24) = piVar6;
                iVar7 = extraout_r3;
              }
              *(undefined4 *)(param_2 + 0x20) = uVar4;
              if (iVar3 == 2) {
                local_38 = (int *)(iVar7 + 0x2c);
                *local_38 = (int)piVar6;
LAB_0001c804:
                *(int **)(param_2 + 0x24) = local_38;
              }
              *(uint **)(param_2 + 0x28) = puVar2;
              return 6;
            }
          }
        }
        else {
          iVar12 = *(int *)(param_2 + 0x20);
          iVar3 = FUN_0001c4bc(param_3,0xd);
          if ((iVar12 == iVar3) && (puVar2 == *(uint **)(param_2 + 0x28))) {
LAB_0001c83c:
            uVar4 = FUN_0001becc(puVar2);
            FUN_0001c538(param_3,0xf,uVar4);
            uVar4 = 0;
            goto LAB_0001c858;
          }
        }
        puVar5 = puVar2 + 2;
      }
      if (uVar8 != 0) {
        if (uVar8 != 2) {
          return 9;
        }
        uVar8 = *puVar2 & 0x7fffffff;
        if (uVar10 == 0) {
          if (bVar1) {
            uVar11 = ((param_1 ^ 8) & 0xf) >> 3;
            if (uVar8 == 0) {
              uVar11 = 1;
            }
            if (uVar11 != 0) {
              uVar11 = 0;
              do {
                if (uVar11 == uVar8) {
                  uVar4 = FUN_0001c4bc(param_3,0xd);
                  *(undefined4 *)(param_2 + 0x20) = uVar4;
                  goto LAB_0001c804;
                }
                uVar11 = uVar11 + 1;
                uVar4 = FUN_0001c14c(puVar2 + uVar11,uVar4);
                local_38 = (int *)(param_2 + 0x58);
              } while (param_2 == 0);
            }
          }
        }
        else {
          iVar12 = *(int *)(param_2 + 0x20);
          iVar3 = FUN_0001c4bc(param_3,0xd);
          if ((iVar12 == iVar3) && (puVar2 == *(uint **)(param_2 + 0x28))) {
            *(uint *)(param_2 + 0x28) = uVar8;
            *(undefined4 *)(param_2 + 0x30) = 4;
            *(undefined4 *)(param_2 + 0x2c) = 0;
            *(uint **)(param_2 + 0x34) = puVar2 + 1;
            if ((int)*puVar2 < 0) {
              puVar2 = puVar2 + uVar8 + 1;
              goto LAB_0001c83c;
            }
            bVar13 = true;
          }
        }
        if ((int)*puVar2 < 0) {
          puVar2 = puVar2 + 1;
        }
        puVar5 = puVar2 + uVar8 + 1;
        goto LAB_0001c86c;
      }
      puVar5 = puVar2 + 1;
      if (uVar10 == 0) {
        bVar1 = false;
      }
    } while (!bVar1);
    uVar14 = FUN_0001becc(puVar2);
    iVar7 = (int)uVar14;
    *(int *)(param_2 + 0x38) = (int)((ulonglong)uVar14 >> 0x20);
    if (param_2 != 0) {
LAB_0001c780:
      uVar4 = 0xf;
      param_2 = iVar7;
LAB_0001c858:
      FUN_0001c538(param_3,uVar4,param_2);
      return 7;
    }
  }
  else {
    bVar13 = false;
LAB_0001c878:
    iVar3 = FUN_0001cf58(param_3,&local_34);
    if (iVar3 == 0) {
      if (!bVar13) {
        return 8;
      }
      uVar4 = FUN_0001c4bc(param_3,0xf);
      FUN_0001c538(param_3,0xe,uVar4);
      iVar7 = *(int *)(iVar7 + DAT_0001c9cc);
      goto LAB_0001c780;
    }
  }
  return 9;
}



/* ===== FUN_0001c9e8 @ 0001c9e8 size=824 ===== */

undefined4 FUN_0001c9e8(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined4 auStack_1a4 [33];
  undefined1 local_120 [128];
  undefined4 local_a0 [34];
  
  switch(param_2) {
  case 0:
    if (param_4 != 0) {
      return 2;
    }
    puVar4 = (uint *)param_1[0xe];
    uVar2 = 0;
    do {
      if ((param_3 & 0xffff & 1 << (uVar2 & 0xff)) != 0) {
        param_1[uVar2 + 1] = *puVar4;
        puVar4 = puVar4 + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x10);
    if ((param_3 & 0x2000) == 0) {
      param_1[0xe] = (uint)puVar4;
      return 0;
    }
    return 0;
  case 1:
    uVar2 = param_3 >> 0x10;
    param_3 = param_3 & 0xffff;
    if ((param_4 & 0xfffffffb) != 1) {
      return 2;
    }
    uVar1 = uVar2 + param_3;
    if (param_4 == 1) {
      if (0x10 < uVar1) {
        return 2;
      }
      if (0xf < uVar2) {
        return 2;
      }
LAB_0001ca98:
      uVar7 = 0;
    }
    else {
      if (0x20 < uVar1) {
        return 2;
      }
      uVar7 = param_3;
      if (uVar2 < 0x10) {
        if (uVar1 < 0x11) goto LAB_0001ca98;
        uVar7 = uVar1 - 0x10;
      }
    }
    if (param_4 != 5 && uVar7 != 0) {
      return 2;
    }
    if ((uVar2 < 0x10) && (uVar1 = *param_1, (uVar1 & 1) != 0)) {
      *param_1 = uVar1 & 0xfffffffe;
      if (param_4 == 5) {
        *param_1 = uVar1 & 0xfffffffe | 2;
        FUN_0001cd4c();
      }
      else {
        *param_1 = uVar1 & 0xfffffffc;
        FUN_0001cd3c(param_1 + 0x12);
      }
    }
    if ((uVar7 != 0) && ((*param_1 & 4) != 0)) {
      *param_1 = *param_1 & 0xfffffffb;
      FUN_0001cd5c(param_1 + 0x34);
    }
    if (param_4 == 1) {
      FUN_0001cd3c(local_a0);
      if (uVar7 == 0) goto LAB_0001cc9c;
    }
    else {
      if (uVar2 < 0x10) {
        FUN_0001cd4c(local_a0);
      }
      if (uVar7 == 0) goto LAB_0001cc9c;
      FUN_0001cd5c(local_120);
    }
    param_3 = 0x10 - uVar2;
LAB_0001cc9c:
    puVar6 = (undefined4 *)param_1[0xe];
    if (0 < (int)param_3) {
      puVar3 = local_a0 + uVar2 * 2;
      puVar5 = puVar3 + param_3 * 2;
      iVar8 = (int)puVar6 - (int)puVar3;
      for (; puVar3 != puVar5; puVar3 = puVar3 + 1) {
        *puVar3 = *(undefined4 *)((int)puVar3 + iVar8);
      }
      puVar6 = puVar6 + param_3 * 2;
    }
    if (uVar7 != 0) {
      uVar1 = uVar2;
      if (uVar2 < 0x10) {
        uVar1 = 0x10;
      }
      puVar5 = puVar6 + uVar7 * 2;
      puVar3 = auStack_1a4 + uVar1 * 2;
      for (; puVar6 != puVar5; puVar6 = puVar6 + 1) {
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar6;
      }
    }
    if (param_4 == 1) {
      puVar6 = puVar6 + 1;
    }
    param_1[0xe] = (uint)puVar6;
    if (param_4 == 1) {
      FUN_0001cd34(local_a0);
    }
    else {
      if (uVar2 < 0x10) {
        FUN_0001cd44(local_a0);
      }
      if (uVar7 != 0) {
        FUN_0001cd54(local_120);
      }
    }
    return 0;
  case 2:
    break;
  case 3:
    if (param_4 == 3) {
      uVar2 = param_3 & 0xffff;
      if ((param_3 >> 0x10) + uVar2 < 0x11) {
        if ((*param_1 & 8) != 0) {
          *param_1 = *param_1 & 0xfffffff7;
          FUN_0001cda8(param_1 + 0x54);
        }
        FUN_0001cda8(local_a0);
        uVar1 = param_1[0xe];
        puVar5 = local_a0 + (param_3 >> 0x10) * 2;
        puVar6 = puVar5 + uVar2 * 2;
        iVar8 = uVar1 - (int)puVar5;
        for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
          *puVar5 = *(undefined4 *)((int)puVar5 + iVar8);
        }
        param_1[0xe] = uVar1 + uVar2 * 8;
        FUN_0001cd64(local_a0);
        return 0;
      }
    }
    break;
  case 4:
    bVar9 = param_3 == 0x10;
    if (param_3 < 0x11) {
      bVar9 = param_4 == 0;
    }
    if (bVar9) {
      if ((*param_1 & 0x10) != 0) {
        *param_1 = *param_1 & 0xffffffef;
        FUN_0001ce00(param_1 + 0x74);
      }
      FUN_0001ce00(local_a0);
      puVar6 = (undefined4 *)param_1[0xe];
      uVar2 = 0;
      do {
        if ((param_3 & 1 << (uVar2 & 0xff)) != 0) {
          local_a0[uVar2] = *puVar6;
          puVar6 = puVar6 + 1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 != 4);
      param_1[0xe] = (uint)puVar6;
      FUN_0001cdec(local_a0);
      return 0;
    }
  }
  return 2;
}



/* ===== FUN_0001cd20 @ 0001cd20 size=20 ===== */

undefined8 FUN_0001cd20(undefined8 *param_1)

{
  return *param_1;
}



/* ===== FUN_0001cd34 @ 0001cd34 size=8 ===== */

undefined4 FUN_0001cd34(undefined8 *param_1)

{
  return (int)*param_1;
}



/* ===== FUN_0001cd3c @ 0001cd3c size=8 ===== */

void FUN_0001cd3c(undefined8 *param_1)

{
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  
  *param_1 = in_d0;
  param_1[1] = in_d1;
  param_1[2] = in_d2;
  param_1[3] = in_d3;
  param_1[4] = in_d4;
  param_1[5] = in_d5;
  param_1[6] = in_d6;
  param_1[7] = in_d7;
  param_1[8] = unaff_d8;
  param_1[9] = unaff_d9;
  param_1[10] = unaff_d10;
  param_1[0xb] = unaff_d11;
  param_1[0xc] = unaff_d12;
  param_1[0xd] = unaff_d13;
  param_1[0xe] = unaff_d14;
  param_1[0xf] = unaff_d15;
  return;
}



/* ===== FUN_0001cd44 @ 0001cd44 size=8 ===== */

undefined4 FUN_0001cd44(undefined8 *param_1)

{
  return (int)*param_1;
}



/* ===== FUN_0001cd4c @ 0001cd4c size=8 ===== */

void FUN_0001cd4c(undefined8 *param_1)

{
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  
  *param_1 = in_d0;
  param_1[1] = in_d1;
  param_1[2] = in_d2;
  param_1[3] = in_d3;
  param_1[4] = in_d4;
  param_1[5] = in_d5;
  param_1[6] = in_d6;
  param_1[7] = in_d7;
  param_1[8] = unaff_d8;
  param_1[9] = unaff_d9;
  param_1[10] = unaff_d10;
  param_1[0xb] = unaff_d11;
  param_1[0xc] = unaff_d12;
  param_1[0xd] = unaff_d13;
  param_1[0xe] = unaff_d14;
  param_1[0xf] = unaff_d15;
  return;
}



/* ===== FUN_0001cd54 @ 0001cd54 size=8 ===== */

void FUN_0001cd54(void)

{
  return;
}



/* ===== FUN_0001cd5c @ 0001cd5c size=8 ===== */

void FUN_0001cd5c(undefined8 *param_1)

{
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined8 in_d19;
  undefined8 in_d20;
  undefined8 in_d21;
  undefined8 in_d22;
  undefined8 in_d23;
  undefined8 in_d24;
  undefined8 in_d25;
  undefined8 in_d26;
  undefined8 in_d27;
  undefined8 in_d28;
  undefined8 in_d29;
  undefined8 in_d30;
  undefined8 in_d31;
  
  *param_1 = in_d16;
  param_1[1] = in_d17;
  param_1[2] = in_d18;
  param_1[3] = in_d19;
  param_1[4] = in_d20;
  param_1[5] = in_d21;
  param_1[6] = in_d22;
  param_1[7] = in_d23;
  param_1[8] = in_d24;
  param_1[9] = in_d25;
  param_1[10] = in_d26;
  param_1[0xb] = in_d27;
  param_1[0xc] = in_d28;
  param_1[0xd] = in_d29;
  param_1[0xe] = in_d30;
  param_1[0xf] = in_d31;
  return;
}



/* ===== FUN_0001cd64 @ 0001cd64 size=68 ===== */

int FUN_0001cd64(int param_1)

{
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  coprocessor_loadlong(1,in_cr0,param_1);
  coprocessor_loadlong(1,in_cr1,param_1 + 8);
  coprocessor_loadlong(1,in_cr2,param_1 + 0x10);
  coprocessor_loadlong(1,in_cr3,param_1 + 0x18);
  coprocessor_loadlong(1,in_cr4,param_1 + 0x20);
  coprocessor_loadlong(1,in_cr5,param_1 + 0x28);
  coprocessor_loadlong(1,in_cr6,param_1 + 0x30);
  coprocessor_loadlong(1,in_cr7,param_1 + 0x38);
  coprocessor_loadlong(1,in_cr8,param_1 + 0x40);
  coprocessor_loadlong(1,in_cr9,param_1 + 0x48);
  coprocessor_loadlong(1,in_cr10,param_1 + 0x50);
  coprocessor_loadlong(1,in_cr11,param_1 + 0x58);
  coprocessor_loadlong(1,in_cr12,param_1 + 0x60);
  coprocessor_loadlong(1,in_cr13,param_1 + 0x68);
  coprocessor_loadlong(1,in_cr14,param_1 + 0x70);
  coprocessor_loadlong(1,in_cr15,param_1 + 0x78);
  return param_1 + 0x80;
}



/* ===== FUN_0001cda8 @ 0001cda8 size=68 ===== */

int FUN_0001cda8(int param_1)

{
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  coprocessor_storelong(1,in_cr0,param_1);
  coprocessor_storelong(1,in_cr1,param_1 + 8);
  coprocessor_storelong(1,in_cr2,param_1 + 0x10);
  coprocessor_storelong(1,in_cr3,param_1 + 0x18);
  coprocessor_storelong(1,in_cr4,param_1 + 0x20);
  coprocessor_storelong(1,in_cr5,param_1 + 0x28);
  coprocessor_storelong(1,in_cr6,param_1 + 0x30);
  coprocessor_storelong(1,in_cr7,param_1 + 0x38);
  coprocessor_storelong(1,in_cr8,param_1 + 0x40);
  coprocessor_storelong(1,in_cr9,param_1 + 0x48);
  coprocessor_storelong(1,in_cr10,param_1 + 0x50);
  coprocessor_storelong(1,in_cr11,param_1 + 0x58);
  coprocessor_storelong(1,in_cr12,param_1 + 0x60);
  coprocessor_storelong(1,in_cr13,param_1 + 0x68);
  coprocessor_storelong(1,in_cr14,param_1 + 0x70);
  coprocessor_storelong(1,in_cr15,param_1 + 0x78);
  return param_1 + 0x80;
}



/* ===== FUN_0001cdec @ 0001cdec size=20 ===== */

int FUN_0001cdec(int param_1)

{
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  coprocessor_load2(1,in_cr8,param_1);
  coprocessor_load2(1,in_cr9,param_1 + 4);
  coprocessor_load2(1,in_cr10,param_1 + 8);
  coprocessor_load2(1,in_cr11,param_1 + 0xc);
  return param_1 + 0x10;
}



/* ===== FUN_0001ce00 @ 0001ce00 size=20 ===== */

int FUN_0001ce00(int param_1)

{
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  
  coprocessor_store2(1,in_cr8,param_1);
  coprocessor_store2(1,in_cr9,param_1 + 4);
  coprocessor_store2(1,in_cr10,param_1 + 8);
  coprocessor_store2(1,in_cr11,param_1 + 0xc);
  return param_1 + 0x10;
}



/* ===== FUN_0001cec8 @ 0001cec8 size=100 ===== */

uint FUN_0001cec8(uint *param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((char)param_1[2] == '\0') {
    if (*(char *)((int)param_1 + 9) == '\0') {
      return 0xb0;
    }
    *(char *)((int)param_1 + 9) = *(char *)((int)param_1 + 9) + -1;
    puVar2 = (uint *)param_1[1];
    param_1[1] = (uint)(puVar2 + 1);
    *param_1 = *puVar2;
    cVar1 = '\x03';
  }
  else {
    cVar1 = (char)param_1[2] + -1;
  }
  *(char *)(param_1 + 2) = cVar1;
  uVar3 = *param_1;
  *param_1 = uVar3 << 8;
  return uVar3 >> 0x18;
}



/* ===== FUN_0001cf2c @ 0001cf2c size=40 ===== */

undefined4 FUN_0001cf2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  
  local_c = param_4;
  FUN_0001c468(param_1,0,0xc,0,&local_c,param_2,param_3);
  return local_c;
}



/* ===== thunk_FUN_0001cf2c @ 0001cf54 size=4 ===== */

undefined4
thunk_FUN_0001cf2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  
  uStack_c = param_4;
  FUN_0001c468(param_1,0,0xc,0,&uStack_c,param_2,param_3);
  return uStack_c;
}



/* ===== FUN_0001cf58 @ 0001cf58 size=884 ===== */

undefined4 FUN_0001cf58(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  int local_24 [2];
  
  bVar5 = false;
LAB_0001cf6c:
  do {
    while( true ) {
      uVar1 = FUN_0001cec8(param_2);
      if (uVar1 == 0xb0) {
        if (!bVar5) {
          FUN_0001c468(param_1,0,0xe,0,local_24);
          FUN_0001c4e4(param_1,0,0xf,0,local_24);
        }
        return 0;
      }
      if ((uVar1 & 0x80) != 0) break;
      FUN_0001c468(param_1,0,0xd,0,local_24);
      iVar6 = (uVar1 & 0x3f) * 4 + 4;
      if ((uVar1 & 0x40) != 0) {
        iVar6 = -iVar6;
      }
      local_24[0] = local_24[0] + iVar6;
LAB_0001d010:
      FUN_0001c4e4(param_1,0,0xd,0,local_24);
    }
    uVar2 = uVar1 & 0xf0;
    if (uVar2 == 0x80) {
      uVar2 = FUN_0001cec8(param_2);
      uVar2 = uVar2 | uVar1 << 8;
      if (uVar2 == 0x8000) {
        return 9;
      }
      uVar2 = uVar2 << 4;
      iVar6 = FUN_0001c9e8(param_1,0,uVar2 & 0xffff);
      if (iVar6 != 0) {
        return 9;
      }
      if ((uVar2 & 0x8000) != 0) {
        bVar5 = true;
      }
      goto LAB_0001cf6c;
    }
    if (uVar2 == 0x90) {
      if ((uVar1 & 0xd) == 0xd) {
        return 9;
      }
      FUN_0001c468(param_1,0,uVar1 & 0xf,0,local_24);
      goto LAB_0001d010;
    }
    if (uVar2 == 0xa0) {
      uVar3 = 0;
      uVar2 = 0xff0 >> (~uVar1 & 7) & 0xff0;
      uVar4 = uVar3;
      if ((uVar1 & 8) != 0) {
        uVar2 = uVar2 | 0x4000;
      }
    }
    else if (uVar2 == 0xb0) {
      if (uVar1 == 0xb1) {
        uVar2 = FUN_0001cec8(param_2);
        if (uVar2 == 0) {
          return 9;
        }
        uVar3 = 0;
        uVar4 = uVar3;
        if ((uVar2 & 0xf0) != 0) {
          return 9;
        }
      }
      else {
        if (uVar1 == 0xb2) {
          FUN_0001c468(param_1,0,0xd,0,local_24);
          uVar1 = FUN_0001cec8(param_2);
          uVar2 = 2;
          while (local_24[0] = local_24[0] + ((uVar1 & 0x7f) << (uVar2 & 0xff)), (uVar1 & 0x80) != 0
                ) {
            uVar2 = uVar2 + 7;
            uVar1 = FUN_0001cec8(param_2);
          }
          local_24[0] = local_24[0] + 0x204;
          goto LAB_0001d010;
        }
        if (uVar1 == 0xb3) {
          uVar1 = FUN_0001cec8(param_2);
          uVar3 = 1;
          goto LAB_0001d1b0;
        }
        if ((uVar1 & 0xfc) == 0xb4) {
          return 9;
        }
        uVar3 = 1;
        uVar2 = (uVar1 & 7) + 1 | 0x80000;
        uVar4 = uVar3;
      }
    }
    else if (uVar2 == 0xc0) {
      if (uVar1 == 0xc6) {
        uVar1 = FUN_0001cec8(param_2);
        uVar3 = 3;
LAB_0001d1b0:
        uVar2 = (uVar1 & 0xf) + 1 | (uVar1 & 0xf0) << 0xc;
        uVar4 = uVar3;
      }
      else if (uVar1 == 199) {
        uVar2 = FUN_0001cec8(param_2);
        if (uVar2 == 0) {
          return 9;
        }
        if ((uVar2 & 0xf0) != 0) {
          return 9;
        }
        uVar3 = 4;
        uVar4 = 0;
      }
      else {
        if ((uVar1 & 0xf8) != 0xc0) {
          if (uVar1 == 200) {
            uVar1 = FUN_0001cec8(param_2);
            uVar2 = (uVar1 & 0xf) + 1 | ((uVar1 & 0xf0) + 0x10) * 0x1000;
          }
          else {
            if (uVar1 != 0xc9) {
              return 9;
            }
            uVar1 = FUN_0001cec8(param_2);
            uVar2 = (uVar1 & 0xf) + 1 | (uVar1 & 0xf0) << 0xc;
          }
          goto LAB_0001d278;
        }
        uVar3 = 3;
        uVar2 = (uVar1 & 0xf) + 1 | 0xa0000;
        uVar4 = uVar3;
      }
    }
    else {
      if ((uVar1 & 0xf8) != 0xd0) {
        return 9;
      }
      uVar2 = (uVar1 & 7) + 1 | 0x80000;
LAB_0001d278:
      uVar3 = 1;
      uVar4 = 5;
    }
    iVar6 = FUN_0001c9e8(param_1,uVar3,uVar2,uVar4);
    if (iVar6 != 0) {
      return 9;
    }
  } while( true );
}



/* ===== FUN_0001d2cc @ 0001d2cc size=68 ===== */

void FUN_0001d2cc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_14;
  int local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined2 uStack_a;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  local_14 = *(int *)(iVar1 + 4) << 8;
  local_10 = iVar1 + 8;
  uStack_a = (undefined2)((uint)param_4 >> 0x10);
  _local_c = CONCAT11(*(undefined1 *)(iVar1 + 7),3);
  FUN_0001cf58(param_2,&local_14,3,*(undefined1 *)(iVar1 + 7),param_1);
  return;
}



/* ===== FUN_0001d320 @ 0001d320 size=28 ===== */

int FUN_0001d320(void)

{
  int iVar1;
  
  iVar1 = thunk_FUN_0001cf2c();
  return *(int *)(iVar1 + 0x4c) + (*(byte *)(*(int *)(iVar1 + 0x4c) + 7) + 2) * 4;
}



/* ===== FUN_0001d33c @ 0001d33c size=192 ===== */

uint FUN_0001d33c(uint param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r3;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int local_8;
  undefined4 uStack_4;
  
  piVar4 = &local_8;
  if (*(int *)(DAT_0001d3fc + 0x1d35c) == 0) {
    software_interrupt(0);
    if (0xfffff000 < param_1) {
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(uint *)(iVar2 + *(int *)(DAT_0001d400 + 0x1d390)) = -param_1;
      param_1 = 0xffffffff;
    }
  }
  else {
    uVar3 = param_1;
    iVar5 = param_3;
    local_8 = param_3;
    uStack_4 = param_4;
    uVar1 = FUN_00022c10();
    software_interrupt(0);
    iVar2 = extraout_r3;
    if (0xfffff000 < param_1) {
      param_3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      iVar2 = *(int *)(DAT_0001d404 + 0x1d3e8);
      *(uint *)(param_3 + iVar2) = -param_1;
      param_1 = 0xffffffff;
    }
    FUN_00022cbc(uVar1,param_2,param_3,iVar2,uVar3,piVar4,iVar5);
  }
  return param_1;
}



/* ===== FUN_0001d408 @ 0001d408 size=48 ===== */

uint FUN_0001d408(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_0001d438 + 0x1d430)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_0001d44c @ 0001d44c size=68 ===== */

undefined4 FUN_0001d44c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(DAT_0001d490 + 0x1d458) == 0) {
    uVar1 = FUN_0001d408();
    return uVar1;
  }
  uVar1 = FUN_00022c10();
  uVar2 = FUN_0001d408(param_1,uVar1);
  FUN_00022cbc((int)((ulonglong)uVar2 >> 0x20));
  return (int)uVar2;
}



/* ===== FUN_0001d494 @ 0001d494 size=136 ===== */

ushort FUN_0001d494(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  
  iVar4 = iRam0001d508 + 0x1d4b0;
  uVar5 = 0;
  if (*(int *)(iRam0001d504 + 0x1d4ac) == 0) {
    *(int *)(iRam0001d504 + 0x1d4ac) = 1;
    uVar5 = param_4 == 0;
    iVar3 = param_4;
    if ((bool)uVar5) {
      iVar3 = iRam0001d514 + 0x1d4ec;
    }
    FUN_0001da38(**(undefined4 **)(iVar4 + iRam0001d50c),iRam0001d518 + 0x1d500,
                 *(undefined4 *)(iRam0001d510 + 0x1d4e0),param_2,param_3,iVar3,param_1,param_4);
  }
  puVar1 = (undefined2 *)FUN_00021c14();
  puVar2 = puVar1;
  if ((bool)uVar5) {
    puVar2 = (undefined2 *)((int)puVar1 - param_3);
    *puVar1 = (short)puVar2;
  }
  if (0x100 < (int)puVar2 + 1U) {
    return 0;
  }
  return *(ushort *)(*(int *)(DAT_0001d54c + 0x1d538) + (int)puVar2 * 2) & 0x10;
}



/* ===== FUN_0001d51c @ 0001d51c size=48 ===== */

ushort FUN_0001d51c(int param_1)

{
  if (param_1 + 1U < 0x101) {
    return *(ushort *)(*(int *)(DAT_0001d54c + 0x1d538) + param_1 * 2) & 0x10;
  }
  return 0;
}



/* ===== FUN_0001d550 @ 0001d550 size=20 ===== */

int FUN_0001d550(void)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  return iVar1 + *(int *)(DAT_0001d564 + 0x1d560);
}



/* ===== FUN_0001d568 @ 0001d568 size=720 ===== */

uint FUN_0001d568(ushort *param_1)

{
  bool bVar1;
  ushort *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  iVar10 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar12 = *(int *)(param_1 + 0x1a);
  uVar11 = iVar10 - 0x490;
  iVar10 = DAT_0001d838 + 0x1d58c;
  if (iVar12 == 0) {
    if (*(uint *)(param_1 + 0x20) != uVar11) {
      puVar2 = param_1 + 0x1c;
      DataMemoryBarrier(0xb);
      do {
        if (*(int *)puVar2 != 0) goto LAB_0001d5bc;
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      puVar2[0] = 1;
      puVar2[1] = 0;
LAB_0001d5bc:
      DataMemoryBarrier(0xb);
      if (*(int *)puVar2 != 0) {
        FUN_000266a8();
      }
      *(uint *)(param_1 + 0x20) = uVar11;
    }
    *(int *)(param_1 + 0x1e) = *(int *)(param_1 + 0x1e) + 1;
  }
  uVar9 = *param_1 & 0x40;
  if ((*param_1 & 0x40) != 0) {
    uVar9 = FUN_0001fc5c(param_1);
  }
  if (*(int *)(param_1 + 2) == -2) {
    puVar3 = (uint *)0xfffffffe;
    if (*(code **)(param_1 + 0x2a) == (code *)0x0) goto LAB_0001d61c;
    puVar3 = (uint *)(**(code **)(param_1 + 0x2a))(*(undefined4 *)(param_1 + 0x22));
  }
  else {
    puVar3 = (uint *)FUN_0001d44c();
  }
  if ((int)puVar3 < 0) {
    uVar9 = 0xffffffff;
  }
LAB_0001d61c:
  param_1[2] = 0xffff;
  param_1[3] = 0xffff;
  puVar8 = *(uint **)(iVar10 + DAT_0001d83c);
  if (puVar8[2] != uVar11) {
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *puVar8;
      if (uVar6 != 0) goto LAB_0001d658;
      bVar1 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar1);
    *puVar8 = 1;
LAB_0001d658:
    DataMemoryBarrier(0xb);
    if (uVar6 != 0) {
      puVar3 = (uint *)FUN_000266a8(puVar8);
    }
    puVar8[2] = uVar11;
  }
  uVar7 = puVar8[1];
  puVar4 = (uint *)(DAT_0001d840 + 0x1d680);
  uVar6 = *puVar4 + 1;
  *puVar4 = uVar6;
  if (uVar7 == 0) {
    puVar8[2] = 0;
    do {
      uVar6 = *puVar8;
      DataMemoryBarrier(0xb);
      do {
        puVar4 = (uint *)*puVar8;
        if (puVar4 != (uint *)uVar6) break;
        bVar1 = (bool)hasExclusiveAccess(puVar8);
        if (bVar1) {
          *puVar8 = 0;
        }
        puVar3 = (uint *)(uint)!bVar1;
      } while (puVar3 != (uint *)0x0);
      DataMemoryBarrier(0xb);
    } while ((uint *)uVar6 != puVar4);
    if (1 < (int)uVar6) {
      puVar4 = (uint *)0x81;
      uVar6 = 1;
      software_interrupt(0);
      puVar3 = puVar8;
    }
  }
  *param_1 = *param_1 & 0x6000 | 0x30;
  if ((iVar12 == 0) &&
     (iVar10 = *(int *)(param_1 + 0x1e), *(int *)(param_1 + 0x1e) = iVar10 + -1, iVar10 + -1 == 0))
  {
    puVar3 = (uint *)(param_1 + 0x1c);
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    do {
      uVar7 = *(uint *)(param_1 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        uVar6 = *puVar3;
        if (uVar6 != uVar7) break;
        bVar1 = (bool)hasExclusiveAccess(puVar3);
        if (bVar1) {
          *puVar3 = 0;
        }
        puVar4 = (uint *)(uint)!bVar1;
      } while (puVar4 != (uint *)0x0);
      DataMemoryBarrier(0xb);
    } while (uVar7 != uVar6);
    if (1 < (int)uVar7) {
      puVar4 = (uint *)0x81;
      uVar6 = 1;
      software_interrupt(0);
    }
  }
  if ((*param_1 & 0x4000) != 0) {
    puVar3 = (uint *)FUN_00021048(*(undefined4 *)(param_1 + 4),puVar4,uVar6);
  }
  if (puVar8[2] != uVar11) {
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *puVar8;
      if (uVar6 != 0) goto LAB_0001d79c;
      bVar1 = (bool)hasExclusiveAccess(puVar8);
    } while (!bVar1);
    *puVar8 = 1;
LAB_0001d79c:
    DataMemoryBarrier(0xb);
    if (uVar6 != 0) {
      puVar3 = (uint *)FUN_000266a8(puVar8);
    }
    puVar8[2] = uVar11;
  }
  uVar11 = puVar8[1];
  puVar4 = (uint *)(DAT_0001d844 + 0x1d7c4);
  puVar5 = (uint *)(*puVar4 + 1);
  *puVar4 = (uint)puVar5;
  if (uVar11 == 0) {
    puVar8[2] = 0;
    do {
      puVar5 = (uint *)*puVar8;
      DataMemoryBarrier(0xb);
      do {
        puVar4 = (uint *)*puVar8;
        if (puVar4 != puVar5) break;
        bVar1 = (bool)hasExclusiveAccess(puVar8);
        if (bVar1) {
          *puVar8 = 0;
        }
        puVar3 = (uint *)(uint)!bVar1;
      } while (puVar3 != (uint *)0x0);
      DataMemoryBarrier(0xb);
    } while (puVar5 != puVar4);
    if (1 < (int)puVar5) {
      puVar4 = (uint *)0x81;
      puVar5 = (uint *)0x1;
      uVar11 = 0;
      software_interrupt(0);
      puVar3 = puVar8;
    }
  }
  FUN_0001fa0c(puVar3,puVar4,puVar5,uVar11);
  return uVar9;
}



/* ===== FUN_0001d848 @ 0001d848 size=976 ===== */

/* WARNING: Removing unreachable block (ram,0x0001e230) */
/* WARNING: Removing unreachable block (ram,0x0001df68) */
/* WARNING: Removing unreachable block (ram,0x0001df84) */
/* WARNING: Removing unreachable block (ram,0x0001e20c) */
/* WARNING: Removing unreachable block (ram,0x0001df90) */
/* WARNING: Removing unreachable block (ram,0x0001e224) */

ushort * FUN_0001d848(undefined4 param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  
  cVar1 = *param_2;
  iVar10 = DAT_0001e264 + 0x1dec4;
  if (cVar1 == 'r') {
    uVar5 = 0;
  }
  else if (cVar1 == 'w') {
    uVar5 = 0x241;
  }
  else {
    if (cVar1 != 'a') {
      iVar10 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar10 + *(int *)(DAT_0001e268 + 0x1def0)) = 0x16;
      return (ushort *)0x0;
    }
    uVar5 = 0x441;
  }
  if (param_2[1] == 'b') {
    param_2 = param_2 + 1;
  }
  if (param_2[1] == '+') {
    param_2 = param_2 + 1;
    uVar5 = (uVar5 | 1) + 1;
  }
  while( true ) {
    param_2 = param_2 + 1;
    if (*param_2 == '\0') break;
    if (*param_2 == 'x') {
      uVar5 = uVar5 | 0x80;
    }
  }
  puVar3 = (ushort *)FUN_000212e0(0x44);
  if (puVar3 != (ushort *)0x0) {
    puVar3[4] = 0;
    puVar3[5] = 0;
    *puVar3 = 0x2000;
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x1f] = 0;
    puVar3[0x20] = 0;
    puVar3[0x21] = 0;
    iVar4 = FUN_00026bd4(param_1,uVar5,0x1b6);
    *(int *)(puVar3 + 2) = iVar4;
    if (-1 < iVar4) {
      *puVar3 = *puVar3 & 0x2000 | (ushort)uVar5 & 0x400 |
                (ushort)DAT_0001e270 & (ushort)(uVar5 >> 2) | (ushort)(((uVar5 & 3) + 1 ^ 3) << 4);
      if (*(int *)(puVar3 + 2) != 0x7fffffff) {
        iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
        uVar8 = *(undefined4 *)(iVar6 + *(int *)(DAT_0001e274 + 0x1dfe4));
        iVar4 = FUN_00020ab8();
        if (iVar4 != 0) {
          *puVar3 = *puVar3 | 0x100;
        }
        *(undefined4 *)(iVar6 + *(int *)(DAT_0001e278 + 0x1e004)) = uVar8;
      }
      if (*(int *)(puVar3 + 4) == 0) {
        iVar4 = FUN_000212e0(0x1000);
        *(int *)(puVar3 + 4) = iVar4;
        if (iVar4 == 0) {
          puVar3[6] = 0;
          puVar3[7] = 0;
        }
        else {
          *(int *)(puVar3 + 6) = iVar4 + 0x1000;
          *puVar3 = *puVar3 | 0x4000;
        }
      }
      uVar8 = *(undefined4 *)(puVar3 + 4);
      *(undefined4 *)(puVar3 + 0xc) = uVar8;
      *(undefined4 *)(puVar3 + 0xe) = uVar8;
      *(undefined4 *)(puVar3 + 8) = uVar8;
      *(undefined4 *)(puVar3 + 10) = uVar8;
      *(undefined1 *)(puVar3 + 1) = 0;
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      *(undefined4 *)(puVar3 + 0x1a) = **(undefined4 **)(iVar10 + DAT_0001e27c);
      if ((*puVar3 & 0x2000) == 0) {
        return puVar3;
      }
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      iVar4 = iVar4 + -0x490;
      piVar7 = *(int **)(iVar10 + DAT_0001e280);
      if (piVar7[2] != iVar4) {
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar7;
          if (iVar6 != 0) goto LAB_0001e0b0;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = 1;
LAB_0001e0b0:
        DataMemoryBarrier(0xb);
        if (iVar6 != 0) {
          FUN_000266a8(piVar7);
        }
        piVar7[2] = iVar4;
      }
      piVar7[1] = piVar7[1] + 1;
      piVar9 = *(int **)(iVar10 + DAT_0001e284);
      if (piVar9[2] != iVar4) {
        DataMemoryBarrier(0xb);
        do {
          iVar6 = *piVar9;
          if (iVar6 != 0) goto LAB_0001e108;
          bVar2 = (bool)hasExclusiveAccess(piVar9);
        } while (!bVar2);
        *piVar9 = 1;
LAB_0001e108:
        DataMemoryBarrier(0xb);
        if (iVar6 != 0) {
          FUN_000266a8(piVar9);
        }
        piVar9[2] = iVar4;
      }
      iVar4 = piVar9[1];
      uVar8 = **(undefined4 **)(iVar10 + DAT_0001e288);
      **(undefined4 **)(iVar10 + DAT_0001e288) = puVar3;
      *(undefined4 *)(puVar3 + 0x10) = uVar8;
      if (iVar4 == 0) {
        piVar9[2] = 0;
        do {
          iVar10 = *piVar9;
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar9;
            if (iVar4 != iVar10) goto LAB_0001e164;
            bVar2 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar2);
          *piVar9 = 0;
LAB_0001e164:
          DataMemoryBarrier(0xb);
        } while (iVar10 != iVar4);
        if (1 < iVar10) {
          software_interrupt(0);
        }
      }
      iVar10 = piVar7[1];
      piVar7[1] = iVar10 + -1;
      if (iVar10 + -1 != 0) {
        return puVar3;
      }
      piVar7[2] = 0;
      do {
        iVar10 = *piVar7;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar7;
          if (iVar4 != iVar10) goto LAB_0001e1c8;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = 0;
LAB_0001e1c8:
        DataMemoryBarrier(0xb);
        if (iVar10 == iVar4) {
          if (1 < iVar10) {
            software_interrupt(0);
            return puVar3;
          }
          return puVar3;
        }
      } while( true );
    }
    if ((*puVar3 & 0x2000) != 0) {
      FUN_00021048(puVar3);
    }
  }
  return (ushort *)0x0;
}



/* ===== FUN_0001d854 @ 0001d854 size=92 ===== */

void FUN_0001d854(char *param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1 == (char *)0x0) {
    iVar2 = DAT_0001d8c0 + 0x1d89c;
  }
  else {
    if (*param_1 != '\0') {
      pcVar1 = (char *)(DAT_0001d8b4 + 0x1d87c);
      goto LAB_0001d878;
    }
    iVar2 = (int)&DAT_0001d8b0 + DAT_0001d8c4;
  }
  param_1 = (char *)(iVar2 + 2);
  pcVar1 = param_1;
LAB_0001d878:
  FUN_0001da38(**(undefined4 **)(DAT_0001d8b0 + 0x1d864 + DAT_0001d8b8),DAT_0001d8bc + 0x1d890,
               param_1,pcVar1);
  return;
}



/* ===== FUN_0001d8c8 @ 0001d8c8 size=292 ===== */

int FUN_0001d8c8(undefined4 param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = **(int **)(DAT_0001d9ec + 0x1d8d8 + DAT_0001d9f0);
  iVar5 = *(int *)(iVar4 + 0x34);
  if (iVar5 == 0) {
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (*(int *)(iVar4 + 0x40) != iVar6 + -0x490) {
      piVar2 = (int *)(iVar4 + 0x38);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        if (iVar3 != 0) goto LAB_0001d928;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 1;
LAB_0001d928:
      DataMemoryBarrier(0xb);
      if (iVar3 != 0) {
        FUN_000266a8();
      }
      *(int *)(iVar4 + 0x40) = iVar6 + -0x490;
    }
    *(int *)(iVar4 + 0x3c) = *(int *)(iVar4 + 0x3c) + 1;
  }
  iVar6 = FUN_00020274(param_1,iVar4);
  if (iVar6 != -1) {
    iVar6 = iVar6 + 1;
    iVar3 = FUN_00020168(10,iVar4);
    if (iVar3 != -1) goto LAB_0001d978;
  }
  iVar6 = -1;
LAB_0001d978:
  if ((iVar5 == 0) &&
     (iVar5 = *(int *)(iVar4 + 0x3c) + -1, *(int *)(iVar4 + 0x3c) = iVar5, iVar5 == 0)) {
    piVar2 = (int *)(iVar4 + 0x38);
    *(undefined4 *)(iVar4 + 0x40) = 0;
    do {
      iVar5 = *(int *)(iVar4 + 0x38);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        if (iVar3 != iVar5) goto LAB_0001d9bc;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 0;
LAB_0001d9bc:
      DataMemoryBarrier(0xb);
    } while (iVar5 != iVar3);
    if (1 < iVar5) {
      software_interrupt(0);
    }
  }
  return iVar6;
}



/* ===== FUN_0001d9f4 @ 0001d9f4 size=60 ===== */

void FUN_0001d9f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar1 = *(undefined4 **)(DAT_0001da30 + 0x1da08 + DAT_0001da34);
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_0001e454(*puVar1,param_1,&uStack_c,puVar1,param_1,&uStack_c,param_3);
  return;
}



/* ===== FUN_0001da38 @ 0001da38 size=40 ===== */

void FUN_0001da38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_0001e454(param_1,param_2,&uStack_8,param_4,param_1,&uStack_8);
  return;
}



/* ===== FUN_0001da60 @ 0001da60 size=44 ===== */

void FUN_0001da60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_0001da8c(param_1,0xffffffff,param_2,&uStack_8,param_1,&uStack_8);
  return;
}



/* ===== FUN_0001da8c @ 0001da8c size=164 ===== */

void FUN_0001da8c(undefined1 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined4 local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = ~(uint)param_1;
  if (param_2 <= ~(uint)param_1) {
    uVar1 = param_2;
  }
  local_48 = 0xfffffffd;
  local_4c = 0xd0;
  local_4a = 0;
  local_20 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_2c = 0;
  local_40 = param_1 + uVar1;
  local_18 = 1;
  local_44 = param_1;
  local_3c = param_1;
  local_38 = param_1;
  local_34 = param_1;
  local_30 = local_40;
  FUN_0001e64c(&local_4c,param_3,param_4);
  if (uVar1 != 0) {
    if (local_3c == local_40) {
      local_3c = local_3c + -1;
    }
    *local_3c = 0;
  }
  return;
}



/* ===== FUN_0001db30 @ 0001db30 size=556 ===== */

int FUN_0001db30(undefined4 param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_38 [2];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  iVar3 = DAT_0001dd5c + 0x1db44;
  if (*param_2 == 'w') {
    iVar4 = 0;
  }
  else {
    if (*param_2 != 'r') {
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar3 + *(int *)(DAT_0001dd60 + 0x1db70)) = 0x16;
      return 0;
    }
    iVar4 = 1;
  }
  puVar1 = (undefined4 *)FUN_000212e0(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_00026b08(local_38);
    if (iVar2 == 0) {
      iVar5 = local_38[iVar4];
      iVar6 = local_38[1 - iVar4];
      iVar2 = FUN_00027248(iVar6,param_2);
      if (iVar2 == 0) {
        FUN_0001d44c(iVar6);
        FUN_0001d44c(iVar5);
      }
      else {
        iVar7 = DAT_0001dd68 + 0x1dc30;
        FUN_000225d0(auStack_30,*(undefined4 *)(iVar3 + DAT_0001dd64),iVar7);
        FUN_000225c0(iVar7);
        iVar7 = FUN_00026a00();
        if (iVar7 == 0) {
          FUN_0001d44c(iVar6);
          if (iVar5 != iVar4) goto LAB_0001dca8;
          do {
            for (piVar8 = *(int **)(DAT_0001dd6c + 0x1dc8c); piVar8 != (int *)0x0;
                piVar8 = (int *)*piVar8) {
              FUN_0001d44c(*(undefined4 *)(piVar8[1] + 4));
            }
            FUN_000224a4(DAT_0001dd78 + 0x1dca0,DAT_0001dd74 + 0x1dc98,DAT_0001dd70 + 0x1dc90,
                         param_1,0);
            FUN_00026cac(0x7f);
LAB_0001dca8:
            FUN_00026a40(iVar5,iVar4);
            FUN_0001d44c(iVar5);
          } while( true );
        }
        FUN_000225d8(auStack_30,1);
        FUN_0001d44c(iVar5);
        iVar4 = DAT_0001dd7c;
        if (0 < iVar7) {
          puVar1[2] = iVar7;
          puVar1[1] = iVar2;
          FUN_000225d0(auStack_20,*(undefined4 *)(iVar3 + DAT_0001dd64),iVar4 + 0x1dd0c);
          FUN_000225c0(iVar4 + 0x1dd0c);
          *puVar1 = *(undefined4 *)(iVar4 + 0x1dd24);
          *(undefined4 **)(iVar4 + 0x1dd24) = puVar1;
          FUN_000225d8(auStack_20,1);
          return iVar2;
        }
        FUN_0001d568(iVar2);
      }
    }
    FUN_00021048(puVar1);
  }
  return 0;
}



/* ===== FUN_0001dd80 @ 0001dd80 size=268 ===== */

undefined4 FUN_0001dd80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_28 [5];
  
  iVar1 = DAT_0001de94;
  iVar4 = DAT_0001de94 + 0x1ddac;
  FUN_000225d0(local_28,*(undefined4 *)(DAT_0001de8c + 0x1dd90 + DAT_0001de90),iVar4);
  FUN_000225c0(iVar4);
  puVar2 = *(undefined4 **)(iVar1 + 0x1ddc4);
  if (puVar2 != (undefined4 *)0x0) {
    if (puVar2[1] == param_1) {
      *(undefined4 *)(iVar1 + 0x1ddc4) = *puVar2;
    }
    else {
      do {
        puVar3 = puVar2;
        puVar2 = (undefined4 *)*puVar3;
        if (puVar2 == (undefined4 *)0x0) {
          iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
          *(undefined4 *)(iVar1 + *(int *)(DAT_0001de98 + 0x1de08)) = 0x16;
          goto LAB_0001de08;
        }
      } while (puVar2[1] != param_1);
      *puVar3 = *puVar2;
    }
  }
LAB_0001de08:
  FUN_000225d8(local_28,1);
  if (puVar2 != (undefined4 *)0x0) {
    uVar5 = puVar2[2];
    FUN_00021048(puVar2);
    FUN_0001d568(param_1);
    iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
    do {
      iVar4 = FUN_00026ab0(uVar5,local_28,0);
      if (-1 < iVar4) {
        return local_28[0];
      }
    } while (*(int *)(iVar1 + *(int *)(DAT_0001de9c + 0x1de80)) == 4);
  }
  return 0xffffffff;
}



/* ===== FUN_0001e28c @ 0001e28c size=268 ===== */

void FUN_0001e28c(void)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  ushort *puVar8;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar6 = DAT_0001e398 + 0x1e2a4;
  puVar3 = *(undefined4 **)(iVar6 + DAT_0001e39c);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3 = *(undefined4 **)(iVar6 + DAT_0001e3a0);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3 = *(undefined4 **)(iVar6 + DAT_0001e3a4);
  puVar7 = (undefined2 *)*puVar3;
  do {
    if (puVar7 == (undefined2 *)0x0) {
      for (puVar8 = (ushort *)*puVar3; puVar8 != (ushort *)0x0; puVar8 = *(ushort **)(puVar8 + 0x10)
          ) {
        if ((*puVar8 & 0x40) != 0) {
          FUN_0001e424(puVar8);
        }
        if ((*(int *)(puVar8 + 2) == -2) && (*(code **)(puVar8 + 0x2a) != (code *)0x0)) {
          (**(code **)(puVar8 + 0x2a))(*(undefined4 *)(puVar8 + 0x22));
        }
      }
      return;
    }
    if (*(int *)(puVar7 + 0x20) != iVar2 + -0x490) {
      piVar4 = (int *)(puVar7 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        if (iVar6 != 0) goto LAB_0001e35c;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = 1;
LAB_0001e35c:
      DataMemoryBarrier(0xb);
      if (iVar6 != 0) {
        uVar5 = *(undefined4 *)(puVar7 + 4);
        *puVar7 = 0x30;
        *(undefined4 *)(puVar7 + 0xc) = uVar5;
        *(undefined4 *)(puVar7 + 0xe) = uVar5;
        *(undefined4 *)(puVar7 + 8) = uVar5;
        *(undefined4 *)(puVar7 + 10) = uVar5;
      }
    }
    *(undefined4 *)(puVar7 + 0x1a) = 1;
    *(undefined4 *)(puVar7 + 0x1c) = 0;
    *(undefined4 *)(puVar7 + 0x1e) = 0;
    *(undefined4 *)(puVar7 + 0x20) = 0;
    puVar7 = *(undefined2 **)(puVar7 + 0x10);
  } while( true );
}



/* ===== FUN_0001e3a8 @ 0001e3a8 size=108 ===== */

void FUN_0001e3a8(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar3 = *(undefined4 *)(iVar2 + *(int *)(DAT_0001e414 + 0x1e3c0));
  iVar1 = FUN_00020ab8(0);
  if (iVar1 == 0) {
    *(ushort *)(DAT_0001e418 + 0x1e3d8) = *(ushort *)(DAT_0001e418 + 0x1e3d8) ^ 0x100;
  }
  iVar1 = FUN_00020ab8(1);
  if (iVar1 == 0) {
    *(ushort *)(DAT_0001e41c + 0x1e440) = *(ushort *)(DAT_0001e41c + 0x1e440) ^ 0x100;
  }
  *(undefined4 *)(iVar2 + *(int *)(DAT_0001e420 + 0x1e410)) = uVar3;
  return;
}



/* ===== FUN_0001e424 @ 0001e424 size=48 ===== */

int FUN_0001e424(int param_1)

{
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 8);
    FUN_000273c0();
  }
  return *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8);
}



/* ===== FUN_0001e454 @ 0001e454 size=296 ===== */

undefined4 FUN_0001e454(ushort *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  ushort *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x1a);
  if (iVar4 == 0) {
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (*(int *)(param_1 + 0x20) != iVar5 + -0x490) {
      puVar2 = param_1 + 0x1c;
      DataMemoryBarrier(0xb);
      do {
        if (*(int *)puVar2 != 0) goto LAB_0001e4a8;
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      puVar2[0] = 1;
      puVar2[1] = 0;
LAB_0001e4a8:
      DataMemoryBarrier(0xb);
      if (*(int *)puVar2 != 0) {
        FUN_000266a8();
      }
      *(int *)(param_1 + 0x20) = iVar5 + -0x490;
    }
    *(int *)(param_1 + 0x1e) = *(int *)(param_1 + 0x1e) + 1;
  }
  if (((*param_1 & 0xc0) == 0xc0) || (iVar5 = FUN_000276e4(param_1,0x80), iVar5 == 0)) {
    uVar3 = FUN_0001e64c(param_1,param_2,param_3);
  }
  else {
    uVar3 = 0xffffffff;
  }
  if ((iVar4 == 0) &&
     (iVar4 = *(int *)(param_1 + 0x1e), *(int *)(param_1 + 0x1e) = iVar4 + -1, iVar4 + -1 == 0)) {
    puVar2 = param_1 + 0x1c;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        if (*(int *)puVar2 != iVar4) goto LAB_0001e530;
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      puVar2[0] = 0;
      puVar2[1] = 0;
LAB_0001e530:
      DataMemoryBarrier(0xb);
    } while (iVar4 != *(int *)puVar2);
    if (1 < iVar4) {
      software_interrupt(0);
    }
  }
  return uVar3;
}



/* ===== FUN_0001e57c @ 0001e57c size=76 ===== */

int FUN_0001e57c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r3;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  int iStack_18;
  
  iVar2 = param_3;
  uVar3 = param_1;
  local_1c = param_2;
  iStack_18 = param_3;
  while ((iVar2 != 0 && (iVar1 = FUN_000274f4(&local_1c,1,param_1,param_4,uVar3), iVar1 == 1))) {
    iVar2 = iVar2 + -1;
    param_4 = extraout_r3;
  }
  return param_3 - iVar2;
}



/* ===== FUN_0001e5c8 @ 0001e5c8 size=132 ===== */

int FUN_0001e5c8(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 & 0x80) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_000203b0(param_4);
    iVar2 = param_3 - iVar1;
    param_3 = iVar1;
    if (iVar2 < 1) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0001e57c(param_1,param_2 & 0x7f,iVar2);
      if (iVar2 != iVar1) {
        return iVar1;
      }
    }
  }
  if (param_3 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_000274f4(param_4,param_3,param_1);
  }
  return iVar1 + iVar2;
}



/* ===== FUN_0001e64c @ 0001e64c size=1640 ===== */

/* WARNING: Type propagation algorithm not settling */

int FUN_0001e64c(undefined4 param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int extraout_r2;
  undefined4 *puVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  char cVar18;
  int **ppiVar19;
  undefined8 uVar20;
  int local_160 [3];
  int *local_154 [5];
  char local_140 [127];
  undefined1 uStack_c1;
  char *local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  char local_ac;
  int local_a8;
  int local_a4;
  uint local_a0;
  undefined4 uStack_9c;
  undefined1 auStack_70 [76];
  
  iVar1 = FUN_0001ecd8(&local_c0);
  if (iVar1 < 0) {
    iVar1 = FUN_000203b0(local_c0);
    if (iVar1 != 0) {
      FUN_000274f4(local_c0,iVar1,param_1);
    }
    return -1;
  }
  FUN_0001ed94(&local_c0,param_3);
  iVar17 = 0;
  iVar1 = DAT_0001ecb4 + 0x1e6cf;
  puVar8 = (undefined4 *)(DAT_0001ecb8 + 0x1e6d8);
  pcVar12 = param_2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          for (; *pcVar12 != '\0' && *pcVar12 != '%'; pcVar12 = pcVar12 + 1) {
          }
          if (pcVar12 != param_2) {
            iVar14 = (int)pcVar12 - (int)param_2;
            if (iVar14 < 1) {
              return -1;
            }
            iVar2 = FUN_000274f4(param_2,iVar14,param_1);
            if (iVar14 != iVar2) {
              return -1;
            }
            iVar17 = iVar17 + iVar14;
          }
          if (*pcVar12 == '\0') {
            return iVar17;
          }
          param_2 = pcVar12 + 1;
          if (pcVar12[1] != '%') break;
          pcVar12 = pcVar12 + 2;
        }
        local_160[0] = 0;
        local_c0 = param_2;
        FUN_0001ef30(&local_c0);
        FUN_0001edcc(&local_c0);
        iVar14 = local_a4;
        uVar6 = (uint)uStack_9c._2_1_;
        iVar2 = extraout_r2;
        if (0 < local_a8) {
          iVar2 = uVar6 + 0x1fffffff;
        }
        puVar9 = auStack_70;
        iVar3 = 0;
        ppiVar19 = local_154;
        if (0 < local_a8) {
          puVar9 = puVar9 + iVar2 * 8;
        }
        for (; iVar3 < iVar14; iVar3 = iVar3 + 1) {
          *ppiVar19 = (int *)(puVar9 + iVar3 * 8);
          ppiVar19 = ppiVar19 + 1;
        }
        if (local_a0 != 0) break;
        FUN_00027834(*local_154[0],local_b0 & 0xf00,iVar17,iVar17 >> 0x1f);
        param_2 = local_c0;
        pcVar12 = local_c0;
      }
      if (7 < local_a0) break;
      uVar13 = (uint)*(byte *)(DAT_0001ecbc + local_a0 + 0x1e7df);
      if (uVar13 == 10) {
        if ((local_b0 & 0x20) == 0) {
          uVar15 = 0x57;
        }
        else {
          uVar15 = 0x2c;
        }
        if ((local_b0 & 0x40) != 0) {
          uVar15 = uVar15 | 0x80;
        }
      }
      else {
        uVar15 = 0x57;
      }
      if (local_a0 < 6) {
        if (local_a0 == 3) {
          uVar16 = 0xb;
          uVar15 = 0x37;
        }
        else if (local_a0 == 1) {
          uVar16 = 6;
        }
        else {
          uVar16 = 0xb;
        }
      }
      else {
        uVar13 = -uVar13;
        uVar16 = 0xb;
      }
      cVar18 = local_ac;
      if (-1 < (int)local_bc) {
        cVar18 = ' ';
      }
      if (local_a0 == 1) {
        uVar6 = 0x400;
      }
      else {
        uVar6 = (&uStack_9c)[uVar6] & 0xf00;
      }
      uVar20 = FUN_000277c8(uVar6,local_154[0],uVar13);
      uVar7 = (undefined4)((ulonglong)uVar20 >> 0x20);
      pcVar12 = (char *)FUN_00027864(&uStack_c1,uVar7,(int)uVar20,uVar7,uVar13,uVar15);
      if (5 < local_a0) {
        if (*pcVar12 == '-') {
          pcVar12 = pcVar12 + 1;
          uVar16 = 2;
          local_b0 = local_b0 | 2;
        }
        else if ((local_b0 & 2) == 0) {
          if ((local_b0 & 1) != 0) {
            uVar16 = 4;
          }
        }
        else {
          uVar16 = 0;
        }
      }
      uVar6 = (int)&uStack_c1 + -(int)pcVar12;
      uVar13 = local_bc;
      if ((int)local_bc < 0) {
        uVar13 = 1;
      }
      if ((local_b0 & 0x10) == 0) {
LAB_0001e904:
        if (*pcVar12 == '0') goto LAB_0001e90c;
LAB_0001e928:
        if (uVar6 < uVar13) {
          uVar13 = uVar13 - uVar6;
          goto LAB_0001e934;
        }
      }
      else {
        if (local_a0 < 3) {
          uVar16 = 6;
        }
        else if (local_a0 == 3) {
          uVar16 = 9;
          goto LAB_0001e904;
        }
        if ((local_a0 != 4) || (uVar6 < uVar13)) goto LAB_0001e904;
        if (*pcVar12 != '0') {
          uVar13 = (int)&local_c0 + -(int)pcVar12;
          goto LAB_0001e904;
        }
        uVar13 = 1;
LAB_0001e90c:
        if (5 < uVar16) {
          uVar16 = 0xb;
        }
        if (local_a0 == 1) {
          uVar6 = 5;
          pcVar12 = (char *)(DAT_0001ecc0 + 0x1ea3c);
        }
        else {
          if (uVar13 != 0) goto LAB_0001e928;
          uVar6 = 0;
        }
      }
LAB_0001ea38:
      uVar13 = 0;
LAB_0001e934:
      uVar15 = uVar13 + uVar6;
      if (uVar16 != 0xb) {
        if (uVar16 < 6) {
          iVar14 = 1;
        }
        else {
          iVar14 = 2;
        }
        uVar15 = uVar15 + iVar14;
      }
      if (uVar15 < local_b8) {
        iVar14 = local_b8 - uVar15;
      }
      else {
        iVar14 = 0;
      }
      iVar2 = iVar14;
      if (cVar18 == '0') {
        uVar13 = uVar13 + iVar14;
        iVar2 = 0;
      }
      if ((local_b0 & 8) == 0) {
        iVar3 = FUN_0001e57c(param_1,0x20,iVar2);
        if (iVar2 != iVar3) {
          return -1;
        }
        iVar2 = 0;
      }
      FUN_00020274(iVar1 + uVar16,param_1);
      uVar16 = FUN_0001e57c(param_1,0x30,uVar13);
      if (uVar13 != uVar16) {
        return -1;
      }
      if (local_160[0] == 0) {
        if ((uVar6 != 0) && (uVar13 = FUN_000274f4(pcVar12,uVar6,param_1), uVar6 != uVar13)) {
          return -1;
        }
      }
      else {
        local_160[1] = 0;
        for (; uVar6 != 0; uVar6 = uVar6 - iVar3) {
          uVar13 = uVar6;
          if (0x7f < uVar6) {
            uVar13 = 0x80;
          }
          iVar3 = FUN_00027184(local_140,local_160,uVar13,local_160 + 1);
          if ((iVar3 != 0) && (iVar5 = FUN_000274f4(local_140,iVar3,param_1), iVar3 != iVar5)) {
            return -1;
          }
        }
      }
      iVar3 = FUN_0001e57c(param_1,0x20,iVar2);
      if (iVar2 != iVar3) {
        return -1;
      }
      iVar17 = iVar17 + uVar15 + iVar14;
      param_2 = local_c0;
      pcVar12 = local_c0;
    }
    if (0xf < local_a0) {
      if (0x11 < local_a0) {
        if (local_a0 < 0x14) {
          if (local_a0 != 0x13) {
            uVar13 = 0;
            pcVar12 = local_140;
            local_140[1] = 0;
            cVar18 = ' ';
            uVar16 = 0xb;
            local_140[0] = (char)*local_154[0];
            uVar6 = 1;
            goto LAB_0001e934;
          }
          pcVar12 = (char *)*local_154[0];
          if (pcVar12 == (char *)0x0) goto LAB_0001eb44;
        }
        else {
          if (local_a0 != 0x14) {
            pbVar4 = (byte *)*puVar8;
            pbVar10 = pbVar4;
            while (pbVar11 = pbVar10 + 1, *pbVar10 != local_b4) {
              pbVar10 = pbVar11;
              if (pbVar4 + 10 == pbVar11) {
                return -1;
              }
            }
            iVar14 = (**(code **)(DAT_0001ecd0 + 0x1ebf8 + ((int)pbVar10 - (int)pbVar4) * 4))
                               (param_1,&local_bc,local_154);
            goto LAB_0001ea64;
          }
          iVar14 = coproc_movefrom_User_R_Thread_and_Process_ID();
          pcVar12 = (char *)FUN_00020aa4(*(undefined4 *)(iVar14 + *(int *)(DAT_0001eccc + 0x1ebb0)),
                                         local_140,0x80);
        }
        cVar18 = ' ';
        uVar16 = 0xb;
        uVar6 = local_bc;
        if ((int)local_bc < 0) {
          uVar6 = 0xffffffff;
        }
        uVar6 = FUN_00020560(pcVar12,uVar6);
        goto LAB_0001ea38;
      }
      uVar13 = 0;
      local_160[1] = 0;
      if (local_a0 == 0x11) {
        local_160[0] = *local_154[0];
        if (local_160[0] != 0) {
          uVar6 = local_bc;
          if ((int)local_bc < 0) {
            uVar6 = 0xffffffff;
          }
          uVar6 = FUN_00027184(local_160,local_160,uVar6,local_160 + 1);
          if (uVar6 == 0xffffffff) {
            return -1;
          }
          pcVar12 = (char *)0x0;
          goto LAB_0001eac8;
        }
LAB_0001eb44:
        if (local_bc < 6) {
          uVar13 = 0;
          cVar18 = ' ';
          uVar16 = 0xb;
          pcVar12 = (char *)(DAT_0001ecc8 + 0x1eb68);
          uVar6 = uVar13;
        }
        else {
          cVar18 = ' ';
          uVar16 = 0xb;
          uVar13 = 0;
          pcVar12 = (char *)(DAT_0001ecd4 + 0x1ec28);
          uVar6 = 6;
        }
      }
      else {
        pcVar12 = local_140;
        uVar6 = FUN_00027140(pcVar12,*local_154[0],local_160 + 1);
        if (uVar6 == 0xffffffff) {
          return -1;
        }
        local_140[uVar6] = '\0';
LAB_0001eac8:
        cVar18 = ' ';
        uVar16 = 0xb;
      }
      goto LAB_0001e934;
    }
    iVar14 = FUN_00027978((int)*(undefined8 *)local_154[0],param_1,&local_bc,DAT_0001ecc4 + 0x1ea60)
    ;
LAB_0001ea64:
    if (iVar14 < 0) {
      return -1;
    }
    iVar17 = iVar17 + iVar14;
    param_2 = local_c0;
    pcVar12 = local_c0;
  } while( true );
}



/* ===== FUN_0001ecd8 @ 0001ecd8 size=188 ===== */

undefined4 FUN_0001ecd8(undefined4 *param_1,char *param_2)

{
  undefined4 *puVar1;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar2;
  
  FUN_00020350(param_1,0,0x98);
  param_1[6] = param_1[6] + -1;
  *param_1 = param_2;
  puVar1 = param_1 + 10;
  do {
    puVar2 = puVar1 + 1;
    *puVar1 = 8;
    pcVar4 = param_2;
    puVar1 = puVar2;
  } while (puVar2 != param_1 + 0x13);
  while (*pcVar4 != '\0') {
    if ((*pcVar4 == '%') && (pcVar4 = pcVar4 + 1, *pcVar4 != '%')) {
      *param_1 = pcVar4;
      iVar3 = FUN_0001ef30(param_1);
      if (iVar3 < 0) {
        return 0xffffffff;
      }
      pcVar4 = (char *)*param_1;
    }
    else {
      pcVar4 = pcVar4 + 1;
    }
  }
  *param_1 = param_2;
  piVar5 = param_1 + 9;
  iVar3 = param_1[6];
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) {
      return 0;
    }
    piVar5 = piVar5 + 1;
  } while (*piVar5 != 8);
  return 0xffffffff;
}



/* ===== FUN_0001ed94 @ 0001ed94 size=56 ===== */

void FUN_0001ed94(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  if (iVar1 < 1) {
    return;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_0001edcc();
  *(int *)(param_1 + 0x18) = iVar1;
  return;
}



/* ===== FUN_0001edcc @ 0001edcc size=356 ===== */

void FUN_0001edcc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  
  puVar2 = (undefined4 *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 8) == -0x80000000) {
      puVar3 = *(undefined4 **)(param_1 + 0x4c);
      *(undefined4 **)(param_1 + 0x4c) = puVar3 + 1;
      uVar4 = *puVar3;
      *(undefined4 *)(param_1 + 0x50) = uVar4;
      *(undefined4 *)(param_1 + 8) = uVar4;
    }
    if (*(int *)(param_1 + 4) == -0x80000000) {
      puVar3 = *(undefined4 **)(param_1 + 0x4c);
      *(undefined4 **)(param_1 + 0x4c) = puVar3 + 1;
      uVar4 = *puVar3;
      *(undefined4 *)(param_1 + 0x50) = uVar4;
      *(undefined4 *)(param_1 + 4) = uVar4;
    }
    iVar5 = *(int *)(param_1 + 0x1c);
    iVar6 = 0;
    piVar7 = (int *)(param_1 + 0x28);
    while (iVar6 < iVar5) {
      piVar8 = piVar7 + 1;
      iVar1 = *piVar7;
      iVar6 = iVar6 + 1;
      piVar7 = piVar8;
      if (iVar1 != 8) {
        puVar3 = *(undefined4 **)(param_1 + 0x4c);
        if (iVar1 < 9) {
          if ((iVar1 != 2) && (2 < iVar1)) {
            bVar9 = iVar1 == 7;
LAB_0001eea8:
            if (bVar9) {
              puVar3 = (undefined4 *)((int)puVar3 + 7U & 0xfffffff8);
              *(undefined4 **)(param_1 + 0x4c) = puVar3 + 2;
              uVar4 = puVar3[1];
              *puVar2 = *puVar3;
              puVar2[1] = uVar4;
              goto LAB_0001eefc;
            }
          }
LAB_0001ee90:
          *(undefined4 **)(param_1 + 0x4c) = puVar3 + 1;
          *puVar2 = *puVar3;
        }
        else {
          if ((iVar1 == 0x400) || (iVar1 < 0x401)) goto LAB_0001ee90;
          if (iVar1 != 0x800) {
            bVar9 = iVar1 == 0x807;
            goto LAB_0001eea8;
          }
          puVar3 = (undefined4 *)((int)puVar3 + 7U & 0xfffffff8);
          *(undefined4 **)(param_1 + 0x4c) = puVar3 + 2;
          uVar4 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar4;
        }
LAB_0001eefc:
        puVar2 = puVar2 + 2;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 8) == -0x80000000) {
      *(undefined4 *)(param_1 + 8) = puVar2[(*(byte *)(param_1 + 0x24) + 0x1fffffff) * 2];
    }
    if (*(int *)(param_1 + 4) == -0x80000000) {
      *(undefined4 *)(param_1 + 4) = puVar2[(*(byte *)(param_1 + 0x25) + 0x1fffffff) * 2];
    }
  }
  if (-1 < *(int *)(param_1 + 8)) {
    return;
  }
  *(int *)(param_1 + 8) = -*(int *)(param_1 + 8);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe | 8;
  *(undefined4 *)(param_1 + 0x14) = 0x20;
  return;
}



/* ===== FUN_0001ef30 @ 0001ef30 size=1404 ===== */

int FUN_0001ef30(int *param_1)

{
  byte bVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  short *psVar17;
  short *psVar18;
  uint uVar19;
  bool bVar20;
  uint local_70 [10];
  byte local_48 [31];
  undefined1 local_29;
  
  iVar9 = DAT_0001f4cc;
  iVar4 = 0;
  uVar19 = param_1[4] & 0x80;
  uVar15 = param_1[6];
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[3] = 8;
  local_70[4] = 8;
  pbVar11 = (byte *)*param_1;
  if (uVar19 != 0) {
    puVar12 = (uint *)(pbVar11 + -8);
    pbVar11 = local_48;
    do {
      puVar12 = puVar12 + 1;
      uVar7 = *puVar12 & 0xff;
      *pbVar11 = (byte)*puVar12;
      if (uVar7 != *puVar12) {
        return -1;
      }
      iVar4 = iVar4 + 1;
      pbVar11 = pbVar11 + 1;
    } while (iVar4 != 0x20 && uVar7 != 0);
    pbVar11 = local_48 + 1;
    local_29 = 0;
  }
  iVar16 = 0;
  iVar4 = *(int *)(DAT_0001f4ac + 0x1efc8);
  uVar7 = 0;
LAB_0001efd0:
  pbVar14 = pbVar11;
  if (*pbVar11 == 0x2a) {
    local_70[3 - iVar16] = 0;
    pbVar14 = pbVar11 + 1;
  }
  uVar8 = 0;
  while( true ) {
    uVar5 = (uint)*pbVar14;
    if ((*(ushort *)(iVar4 + uVar5 * 2) & 8) == 0) break;
    if (DAT_0001f4b8 < (int)uVar8) {
      bVar20 = uVar5 == 0x37;
      if (uVar5 < 0x38) {
        bVar20 = uVar8 == DAT_0001f4b0;
      }
      if (bVar20) goto LAB_0001f094;
      uVar8 = 0x7fffffff;
      pbVar14 = pbVar14 + 1;
    }
    else {
LAB_0001f094:
      uVar8 = uVar8 * 10 + (uVar5 - 0x30);
      pbVar14 = pbVar14 + 1;
    }
  }
  pbVar13 = pbVar11;
  if (pbVar11[-1] == 0x25) {
    if (uVar5 == 0x24 && 0 < (int)uVar8) {
      pbVar11 = pbVar14 + 1;
      if (uVar15 == 0) {
        return -1;
      }
      local_70[2] = uVar8;
      if ((int)uVar15 < (int)uVar8) {
        uVar15 = uVar8;
      }
LAB_0001f050:
      do {
        uVar8 = 1;
        pbVar14 = (byte *)(DAT_0001f4b4 + 0x1f068);
        while (pbVar13 = pbVar14 + 1, *pbVar14 != *pbVar11) {
          uVar8 = uVar8 << 1;
          pbVar14 = pbVar13;
          if (*pbVar13 == 0) {
            uVar19 = uVar19 & ~((int)uVar19 >> 1 & 5U);
            uVar8 = 0;
            pbVar14 = pbVar11;
            if (pbVar11[-1] == 0x25) goto LAB_0001f0b4;
            goto LAB_0001efd0;
          }
        }
        uVar19 = uVar19 | uVar8;
        pbVar11 = pbVar11 + 1;
      } while( true );
    }
    if ((int)uVar15 < 1) {
      uVar15 = 0;
      if ((pbVar14 <= pbVar11) || (*pbVar11 == 0x30)) goto LAB_0001f050;
    }
    else if (uVar5 != 0x6d) {
      return -1;
    }
  }
LAB_0001f0b4:
  if (*pbVar13 == 0x2a) {
    if (uVar15 == 0) {
      pbVar13 = pbVar13 + 1;
      if (pbVar14 != pbVar13) {
        return -1;
      }
    }
    else {
      pbVar13 = pbVar14 + 1;
      if (*pbVar14 != 0x24 || (int)uVar8 < 1) {
        return -1;
      }
      local_70[-iVar16] = uVar8;
    }
    uVar8 = 0x80000000;
    pbVar14 = pbVar13;
  }
  if (iVar16 != 0) goto LAB_0001f194;
  uVar7 = uVar8;
  if (*pbVar14 == 0x2e) {
    pbVar11 = pbVar14 + 1;
    iVar16 = -1;
    goto LAB_0001efd0;
  }
  uVar8 = 0xffffffff;
LAB_0001f194:
  pbVar11 = (byte *)(DAT_0001f4bc + 0x1f1a0);
  do {
    if (*pbVar11 == *pbVar14) {
      pbVar14 = pbVar14 + 1;
      break;
    }
    pbVar11 = pbVar11 + 1;
  } while (*pbVar11 != 0);
  if (((int)pbVar11 - (DAT_0001f4c0 + 0x1f1b8) < 2) && (*pbVar11 == *pbVar14)) {
    pbVar11 = pbVar11 + 9;
    pbVar14 = pbVar14 + 1;
  }
  uVar5 = (uint)pbVar11[9] << 8;
  if (*pbVar14 == 0) {
    return -1;
  }
  pbVar11 = (byte *)(DAT_0001f4c4 + 0x1f1f4);
  while (*pbVar11 != *pbVar14) {
    pbVar11 = pbVar11 + 1;
    if (*pbVar11 == 0) goto LAB_0001f26c;
  }
  iVar4 = (int)pbVar11 - (DAT_0001f4c8 + 0x1f208);
  if ((0x11 < iVar4) && ((uVar5 & 0x400) != 0)) {
    iVar4 = iVar4 + -2;
  }
  param_1[8] = iVar4;
  pbVar11 = (byte *)(iVar9 + 0x1f254);
  do {
    pbVar13 = pbVar11;
    pbVar11 = pbVar13 + 1;
  } while ((int)(uint)*pbVar13 < iVar4);
  iVar9 = (int)pbVar13 * 2 + (-0x58 - (DAT_0001f4d0 + 0x1f248));
  local_70[5] = ((int)*(short *)(iVar9 + 0x36) | uVar5) & (int)*(short *)(iVar9 + 0x46);
  pbVar11 = (byte *)(DAT_0001f4d4 + 0x1f270);
LAB_0001f26c:
  bVar1 = *pbVar14;
  param_1[1] = uVar8;
  param_1[2] = uVar7;
  if ((uVar19 & 4) == 0) {
    iVar9 = 0x20;
  }
  else {
    iVar9 = 0x30;
  }
  param_1[3] = (uint)bVar1;
  param_1[5] = iVar9;
  param_1[4] = uVar19 & 0xfffffffb | uVar5 & 0xf00;
  param_1[7] = 1;
  if (*pbVar11 == 0) {
    if (*pbVar14 == 0x6d) {
      param_1[7] = 0;
      param_1[8] = 0x14;
    }
    else {
      param_1[8] = 0x15;
      pbVar13 = *(byte **)(DAT_0001f4d8 + 0x1f2e0);
      pbVar11 = pbVar13;
      while (pbVar10 = pbVar11 + 1, *pbVar11 != *pbVar14) {
        pbVar11 = pbVar10;
        if (pbVar13 + 10 == pbVar10) {
          return -1;
        }
      }
      iVar9 = (**(code **)(DAT_0001f4dc + 0x1f310 + ((int)pbVar11 - (int)pbVar13) * 4))
                        (param_1 + 1,5,local_70 + 5);
      param_1[7] = iVar9;
      if (5 < iVar9) {
        return -1;
      }
    }
  }
  iVar16 = DAT_0001f4e8;
  iVar4 = DAT_0001f4e4;
  iVar9 = DAT_0001f4e0;
  if ((int)uVar15 < 1) {
    *(undefined1 *)((int)param_1 + 0x26) = 1;
    thunk_FUN_00029380(param_1 + 10,local_70 + 5,param_1[7] << 2);
    goto LAB_0001f428;
  }
  psVar17 = (short *)(DAT_0001f4e0 + 0x1f35c);
  psVar18 = (short *)(DAT_0001f4e4 + 0x1f360);
  iVar6 = 0;
  do {
    if (iVar6 < 3) {
      uVar19 = local_70[iVar6];
      *(char *)((int)param_1 + iVar6 + 0x24) = (char)uVar19;
      uVar19 = uVar19 & 0xff;
    }
    else {
      uVar19 = (local_70[2] - 2) + iVar6;
    }
    if (((int)uVar15 < (int)uVar19) && (uVar15 = uVar19, 9 < (int)uVar19)) {
      return -1;
    }
    uVar7 = local_70[iVar6 + 3];
    if (uVar7 != 8) {
      uVar8 = param_1[uVar19 + 9];
      if (uVar8 != uVar7 && uVar8 != 8) {
        psVar2 = (short *)(iVar16 + 0x1f3a0);
        do {
          psVar2 = psVar2 + -1;
          uVar5 = (uint)*psVar2;
          bVar20 = uVar8 <= uVar5;
          if (uVar5 != uVar8) {
            bVar20 = psVar17 <= psVar2;
          }
        } while (bVar20 && (uVar5 != uVar8 && psVar2 != psVar17));
        psVar3 = (short *)(iVar9 + 0x1f374);
        do {
          psVar3 = psVar3 + -1;
          uVar8 = (uint)*psVar3;
          bVar20 = uVar7 <= uVar8;
          if (uVar8 != uVar7) {
            bVar20 = psVar18 <= psVar3;
          }
        } while (bVar20 && (uVar8 != uVar7 && psVar3 != psVar18));
        if (*(byte *)(iVar4 + ((int)psVar3 - (int)psVar18 >> 1) + 0x1f3a2) <
            *(byte *)(iVar9 + ((int)psVar2 - (int)psVar17 >> 1) + 0x1f39e)) goto LAB_0001f418;
      }
      param_1[uVar19 + 9] = uVar7;
    }
LAB_0001f418:
    bVar20 = param_1[7] < iVar6;
    iVar6 = iVar6 + 1;
    if (bVar20) {
LAB_0001f428:
      param_1[6] = uVar15;
      if ((param_1[4] & 0x80U) == 0) {
        pbVar14 = pbVar14 + 1;
      }
      else {
        pbVar14 = (byte *)(*param_1 + ((int)pbVar14 - (int)local_48) * 4);
      }
      *param_1 = (int)pbVar14;
      return param_1[7] + 2;
    }
  } while( true );
}



/* ===== FUN_0001f4ec @ 0001f4ec size=40 ===== */

void FUN_0001f4ec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_0001f514(param_1,param_2,&uStack_8,param_4,param_1,&uStack_8);
  return;
}



/* ===== FUN_0001f514 @ 0001f514 size=124 ===== */

void FUN_0001f514(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 local_54;
  undefined1 local_52;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_50 = 0xfffffffd;
  local_54 = 0xa1;
  local_20 = 1;
  uStack_1c = 0;
  local_52 = 0;
  local_28 = 0;
  local_18 = 0;
  local_14 = 0;
  local_34 = 0;
  local_4c = param_1;
  local_44 = param_1;
  local_48 = FUN_000203b0();
  local_48 = param_1 + local_48;
  local_40 = local_48;
  local_3c = local_48;
  local_38 = param_1;
  FUN_000281fc(&local_54,param_2,param_3);
  return;
}



/* ===== FUN_0001f590 @ 0001f590 size=292 ===== */

uint FUN_0001f590(int param_1)

{
  bool bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (iVar5 + -0x490 != *(int *)(param_1 + 0x40)) {
      piVar2 = (int *)(param_1 + 0x38);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        if (iVar4 != 0) goto LAB_0001f600;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 1;
LAB_0001f600:
      DataMemoryBarrier(0xb);
      if (iVar4 != 0) {
        FUN_000266a8();
      }
      *(int *)(param_1 + 0x40) = iVar5 + -0x490;
    }
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    pbVar3 = *(byte **)(param_1 + 0x10);
    if (pbVar3 < *(byte **)(param_1 + 0x18)) {
      *(byte **)(param_1 + 0x10) = pbVar3 + 1;
      uVar6 = (uint)*pbVar3;
    }
    else {
      uVar6 = FUN_0001ff80(param_1);
    }
    iVar5 = *(int *)(param_1 + 0x3c) + -1;
    *(int *)(param_1 + 0x3c) = iVar5;
    if (iVar5 == 0) {
      piVar2 = (int *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x40) = 0;
      do {
        iVar5 = *(int *)(param_1 + 0x38);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          if (iVar4 != iVar5) goto LAB_0001f684;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = 0;
LAB_0001f684:
        DataMemoryBarrier(0xb);
      } while (iVar5 != iVar4);
      if (1 < iVar5) {
        software_interrupt(0);
      }
    }
  }
  else {
    pbVar3 = *(byte **)(param_1 + 0x10);
    if (*(byte **)(param_1 + 0x18) <= pbVar3) {
      uVar6 = FUN_0001ff80();
      return uVar6;
    }
    *(byte **)(param_1 + 0x10) = pbVar3 + 1;
    uVar6 = (uint)*pbVar3;
  }
  return uVar6;
}



/* ===== FUN_0001f6b4 @ 0001f6b4 size=252 ===== */

undefined4 FUN_0001f6b4(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_3 + 0x34);
  if (iVar5 == 0) {
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (*(int *)(param_3 + 0x40) != iVar6 + -0x490) {
      piVar2 = (int *)(param_3 + 0x38);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        if (iVar4 != 0) goto LAB_0001f708;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 1;
LAB_0001f708:
      DataMemoryBarrier(0xb);
      if (iVar4 != 0) {
        FUN_000266a8();
      }
      *(int *)(param_3 + 0x40) = iVar6 + -0x490;
    }
    *(int *)(param_3 + 0x3c) = *(int *)(param_3 + 0x3c) + 1;
  }
  uVar3 = FUN_000200bc(param_1,param_2,param_3);
  if ((iVar5 == 0) &&
     (iVar5 = *(int *)(param_3 + 0x3c) + -1, *(int *)(param_3 + 0x3c) = iVar5, iVar5 == 0)) {
    piVar2 = (int *)(param_3 + 0x38);
    *(undefined4 *)(param_3 + 0x40) = 0;
    do {
      iVar5 = *(int *)(param_3 + 0x38);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar2;
        if (iVar6 != iVar5) goto LAB_0001f780;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 0;
LAB_0001f780:
      DataMemoryBarrier(0xb);
    } while (iVar5 != iVar6);
    if (1 < iVar5) {
      software_interrupt(0);
    }
  }
  return uVar3;
}



/* ===== FUN_0001f7b0 @ 0001f7b0 size=260 ===== */

undefined4 FUN_0001f7b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_4 + 0x34);
  if (iVar5 == 0) {
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (*(int *)(param_4 + 0x40) != iVar6 + -0x490) {
      piVar2 = (int *)(param_4 + 0x38);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        if (iVar4 != 0) goto LAB_0001f808;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 1;
LAB_0001f808:
      DataMemoryBarrier(0xb);
      if (iVar4 != 0) {
        FUN_000266a8();
      }
      *(int *)(param_4 + 0x40) = iVar6 + -0x490;
    }
    *(int *)(param_4 + 0x3c) = *(int *)(param_4 + 0x3c) + 1;
  }
  uVar3 = FUN_000202a8(param_1,param_2,param_3,param_4);
  if ((iVar5 == 0) &&
     (iVar5 = *(int *)(param_4 + 0x3c) + -1, *(int *)(param_4 + 0x3c) = iVar5, iVar5 == 0)) {
    piVar2 = (int *)(param_4 + 0x38);
    *(undefined4 *)(param_4 + 0x40) = 0;
    do {
      iVar5 = *(int *)(param_4 + 0x38);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar2;
        if (iVar6 != iVar5) goto LAB_0001f884;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 0;
LAB_0001f884:
      DataMemoryBarrier(0xb);
    } while (iVar5 != iVar6);
    if (1 < iVar5) {
      software_interrupt(0);
    }
  }
  return uVar3;
}



/* ===== FUN_0001f8b4 @ 0001f8b4 size=336 ===== */

uint FUN_0001f8b4(uint param_1)

{
  bool bVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar5 = **(int **)(DAT_0001fa04 + 0x1f8c4 + DAT_0001fa08);
  if (*(int *)(iVar5 + 0x34) == 0) {
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (*(int *)(iVar5 + 0x40) != iVar6 + -0x490) {
      piVar2 = (int *)(iVar5 + 0x38);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar2;
        if (iVar4 != 0) goto LAB_0001f948;
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *piVar2 = 1;
LAB_0001f948:
      DataMemoryBarrier(0xb);
      if (iVar4 != 0) {
        FUN_000266a8();
      }
      *(int *)(iVar5 + 0x40) = iVar6 + -0x490;
    }
    *(int *)(iVar5 + 0x3c) = *(int *)(iVar5 + 0x3c) + 1;
    puVar3 = *(undefined1 **)(iVar5 + 0x10);
    if (puVar3 < *(undefined1 **)(iVar5 + 0x1c)) {
      uVar7 = param_1 & 0xff;
      *(undefined1 **)(iVar5 + 0x10) = puVar3 + 1;
      *puVar3 = (char)param_1;
    }
    else {
      uVar7 = FUN_00020168(param_1,iVar5);
    }
    iVar6 = *(int *)(iVar5 + 0x3c) + -1;
    *(int *)(iVar5 + 0x3c) = iVar6;
    if (iVar6 == 0) {
      piVar2 = (int *)(iVar5 + 0x38);
      *(undefined4 *)(iVar5 + 0x40) = 0;
      do {
        iVar6 = *(int *)(iVar5 + 0x38);
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar2;
          if (iVar4 != iVar6) goto LAB_0001f9c4;
          bVar1 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar1);
        *piVar2 = 0;
LAB_0001f9c4:
        DataMemoryBarrier(0xb);
      } while (iVar6 != iVar4);
      if (1 < iVar6) {
        software_interrupt(0);
      }
    }
  }
  else {
    puVar3 = *(undefined1 **)(iVar5 + 0x10);
    if (*(undefined1 **)(iVar5 + 0x1c) <= puVar3) {
      uVar7 = FUN_00020168(param_1,iVar5);
      return uVar7;
    }
    uVar7 = param_1 & 0xff;
    *(undefined1 **)(iVar5 + 0x10) = puVar3 + 1;
    *puVar3 = (char)param_1;
  }
  return uVar7;
}



/* ===== FUN_0001fa0c @ 0001fa0c size=556 ===== */

int * FUN_0001fa0c(int *param_1)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  ushort *puVar11;
  undefined4 *puVar12;
  
  iVar8 = coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar8 = iVar8 + -0x490;
  iVar10 = DAT_0001fc38 + 0x1fa28;
  piVar6 = *(int **)(iVar10 + DAT_0001fc3c);
  if (piVar6[2] != iVar8) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar6;
      if (iVar5 != 0) goto LAB_0001fa54;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = 1;
LAB_0001fa54:
    DataMemoryBarrier(0xb);
    if (iVar5 != 0) {
      param_1 = (int *)FUN_000266a8(piVar6);
    }
    piVar6[2] = iVar8;
  }
  piVar6[1] = piVar6[1] + 1;
  if ((*(int *)(DAT_0001fc40 + 0x1fa84) == 1) && (0 < *(int *)(DAT_0001fc44 + 0x1fa98))) {
    piVar7 = *(int **)(iVar10 + DAT_0001fc48);
    if (piVar7[2] != iVar8) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar7;
        if (iVar5 != 0) goto LAB_0001fad0;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = 1;
LAB_0001fad0:
      DataMemoryBarrier(0xb);
      if (iVar5 != 0) {
        FUN_000266a8(piVar7);
      }
      piVar7[2] = iVar8;
    }
    uVar3 = DAT_0001fc4c;
    piVar7[1] = piVar7[1] + 1;
    puVar12 = *(undefined4 **)(iVar10 + DAT_0001fc50);
    puVar11 = (ushort *)*puVar12;
    puVar4 = (ushort *)0x0;
    while (puVar9 = puVar4, puVar4 = puVar11, puVar4 != (ushort *)0x0) {
      uVar1 = *puVar4;
      puVar11 = *(ushort **)(puVar4 + 0x10);
      if ((uVar1 & uVar3) == 0x30) {
        if (puVar9 == (ushort *)0x0) {
          *puVar12 = puVar11;
        }
        else {
          *(ushort **)(puVar9 + 0x10) = puVar11;
        }
        puVar4 = puVar9;
        if ((uVar1 & 0x2000) != 0) {
          FUN_00021048();
        }
      }
    }
    iVar8 = piVar7[1];
    piVar7[1] = iVar8 + -1;
    param_1 = (int *)0x0;
    if (iVar8 + -1 == 0) {
      piVar7[2] = 0;
      do {
        iVar8 = *piVar7;
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar7;
          if (iVar10 != iVar8) goto LAB_0001fb48;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = 0;
LAB_0001fb48:
        DataMemoryBarrier(0xb);
      } while (iVar8 != iVar10);
      if (1 < iVar8) {
        software_interrupt(0);
        param_1 = piVar7;
      }
    }
    *(undefined4 *)(DAT_0001fc54 + 0x1fb84) = 0;
  }
  *(int *)(DAT_0001fc58 + 0x1fb90) = *(int *)(DAT_0001fc58 + 0x1fb90) + -1;
  iVar8 = piVar6[1];
  piVar6[1] = iVar8 + -1;
  if (iVar8 + -1 != 0) {
    return param_1;
  }
  piVar6[2] = 0;
  do {
    iVar8 = *piVar6;
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar6;
      if (iVar10 != iVar8) break;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
      if (bVar2) {
        *piVar6 = 0;
      }
      param_1 = (int *)(uint)!bVar2;
    } while (param_1 != (int *)0x0);
    DataMemoryBarrier(0xb);
    if (iVar8 == iVar10) {
      if (1 < iVar8) {
        software_interrupt(0);
        return piVar6;
      }
      return param_1;
    }
  } while( true );
}



/* ===== FUN_0001fc5c @ 0001fc5c size=780 ===== */

uint FUN_0001fc5c(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  ushort *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ushort uVar14;
  uint *puVar15;
  undefined8 uVar16;
  
  iVar13 = DAT_0001ff68 + 0x1fc70;
  puVar15 = *(uint **)(iVar13 + DAT_0001ff6c);
  if (param_1 == puVar15) {
    uVar14 = 0;
  }
  else {
    if (param_1 != (uint *)0x0) {
      if (((ushort)*param_1 & 0x40) == 0) {
        return (ushort)*param_1 & 0x40;
      }
      iVar13 = FUN_0001e424();
      if (iVar13 != 0) {
        return 0xffffffff;
      }
      param_1[7] = param_1[2];
      *(ushort *)param_1 = (ushort)*param_1 & 0xffbf;
      return 0;
    }
    uVar14 = 0x100;
  }
  iVar11 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar12 = iVar11 - 0x490;
  puVar9 = *(uint **)(iVar13 + DAT_0001ff70);
  if (puVar9[2] != uVar12) {
    DataMemoryBarrier(0xb);
    do {
      uVar8 = *puVar9;
      if (uVar8 != 0) goto LAB_0001fcf8;
      bVar1 = (bool)hasExclusiveAccess(puVar9);
    } while (!bVar1);
    *puVar9 = 1;
LAB_0001fcf8:
    DataMemoryBarrier(0xb);
    if (uVar8 != 0) {
      param_1 = (uint *)FUN_000266a8(puVar9);
    }
    puVar9[2] = uVar12;
  }
  uVar8 = puVar9[1];
  piVar3 = (int *)(DAT_0001ff74 + 0x1fd20);
  *piVar3 = *piVar3 + 1;
  if (uVar8 == 0) {
    puVar9[2] = 0;
    do {
      piVar7 = (int *)*puVar9;
      DataMemoryBarrier(0xb);
      do {
        piVar3 = (int *)*puVar9;
        if (piVar3 != piVar7) break;
        bVar1 = (bool)hasExclusiveAccess(puVar9);
        if (bVar1) {
          *puVar9 = 0;
        }
        param_1 = (uint *)(uint)!bVar1;
      } while (param_1 != (uint *)0x0);
      DataMemoryBarrier(0xb);
    } while (piVar7 != piVar3);
    if (1 < (int)piVar7) {
      piVar3 = (int *)0x81;
      software_interrupt(0);
      param_1 = puVar9;
    }
  }
  uVar16 = CONCAT44(piVar3,param_1);
  piVar7 = *(int **)(iVar13 + DAT_0001ff78);
  if (piVar7[2] != uVar12) {
    DataMemoryBarrier(0xb);
    do {
      iVar11 = *piVar7;
      if (iVar11 != 0) break;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
      if (bVar1) {
        *piVar7 = 1;
      }
      piVar3 = (int *)(uint)!bVar1;
    } while (piVar3 != (int *)0x0);
    uVar16 = CONCAT44(piVar3,param_1);
    DataMemoryBarrier(0xb);
    if (iVar11 != 0) {
      uVar16 = FUN_000266a8(piVar7,piVar3,1,iVar11,param_4);
    }
    piVar7[2] = uVar12;
  }
  uVar8 = (uint)uVar16;
  puVar10 = (ushort *)*puVar15;
  if (piVar7[1] == 0) {
    piVar7[2] = 0;
    do {
      iVar11 = *piVar7;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar7;
        if (iVar4 != iVar11) break;
        bVar1 = (bool)hasExclusiveAccess(piVar7);
        if (bVar1) {
          *piVar7 = 0;
        }
        uVar8 = (uint)!bVar1;
      } while (uVar8 != 0);
      uVar16 = CONCAT44(iVar4,uVar8);
      DataMemoryBarrier(0xb);
    } while (iVar11 != iVar4);
    if (1 < iVar11) {
      uVar16 = CONCAT44(0x81,piVar7);
      software_interrupt(0);
    }
  }
  uVar8 = 0;
  do {
    uVar5 = (undefined4)((ulonglong)uVar16 >> 0x20);
    if (puVar10 == (ushort *)0x0) {
      FUN_0001fa0c((int)uVar16);
      return uVar8;
    }
    if ((*puVar10 & 0x40) != 0) {
      piVar3 = *(int **)(iVar13 + DAT_0001ff7c);
      if (*piVar3 != 2) {
        if (*(uint *)(puVar10 + 0x20) != uVar12) {
          puVar2 = puVar10 + 0x1c;
          uVar16 = CONCAT44(uVar5,puVar2);
          DataMemoryBarrier(0xb);
          do {
            if (*(int *)puVar2 != 0) goto LAB_0001fe98;
            bVar1 = (bool)hasExclusiveAccess(puVar2);
          } while (!bVar1);
          puVar2[0] = 1;
          puVar2[1] = 0;
LAB_0001fe98:
          DataMemoryBarrier(0xb);
          if (*(int *)puVar2 != 0) {
            uVar16 = FUN_000266a8(puVar2,uVar5);
          }
          *(uint *)(puVar10 + 0x20) = uVar12;
        }
        *(int *)(puVar10 + 0x1e) = *(int *)(puVar10 + 0x1e) + 1;
      }
      if ((((uVar14 | *puVar10) ^ 0x140) & 0x340) == 0) {
        uVar16 = FUN_0001e424(puVar10);
        if ((int)uVar16 == 0) {
          *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)(puVar10 + 4);
          *puVar10 = *puVar10 & 0xffbf;
        }
        else {
          uVar8 = 0xffffffff;
        }
      }
      uVar6 = (uint)((ulonglong)uVar16 >> 0x20);
      if ((*piVar3 != 2) &&
         (iVar11 = *(int *)(puVar10 + 0x1e), *(int *)(puVar10 + 0x1e) = iVar11 + -1,
         iVar11 + -1 == 0)) {
        puVar2 = puVar10 + 0x1c;
        puVar10[0x20] = 0;
        puVar10[0x21] = 0;
        do {
          iVar11 = *(int *)(puVar10 + 0x1c);
          DataMemoryBarrier(0xb);
          do {
            if (*(int *)puVar2 != iVar11) break;
            bVar1 = (bool)hasExclusiveAccess(puVar2);
            if (bVar1) {
              puVar2[0] = 0;
              puVar2[1] = 0;
            }
            uVar6 = (uint)!bVar1;
          } while (uVar6 != 0);
          uVar16 = CONCAT44(uVar6,puVar2);
          DataMemoryBarrier(0xb);
        } while (iVar11 != *(int *)puVar2);
        if (1 < iVar11) {
          uVar16 = CONCAT44(0x81,puVar2);
          software_interrupt(0);
        }
      }
    }
    puVar10 = *(ushort **)(puVar10 + 0x10);
  } while( true );
}



/* ===== FUN_0001ff80 @ 0001ff80 size=308 ===== */

uint FUN_0001ff80(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte local_11 [5];
  
  pbVar4 = *(byte **)(param_1 + 8);
  iVar5 = DAT_000200b4 + 0x1ffa4;
  if (pbVar4 < *(byte **)(param_1 + 0xc)) {
LAB_0001ffa4:
    *(byte **)(param_1 + 8) = pbVar4 + 1;
    uVar2 = (uint)*pbVar4;
  }
  else {
    if ((0x80 < (*param_1 & 0x83)) || (iVar3 = FUN_00027648(param_1,0x80), iVar3 == 0)) {
      uVar1 = *param_1;
      if ((uVar1 & 2) != 0) {
        *param_1 = uVar1 - 1;
        uVar2 = *(uint *)(param_1 + ((uVar1 & 1) + 8) * 2 + 2);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        return uVar2 & 0xff;
      }
      pbVar4 = *(byte **)(param_1 + 8);
      if (*(byte **)(param_1 + 10) != pbVar4) {
        *(byte **)(param_1 + 8) = pbVar4 + 1;
        return (uint)*pbVar4;
      }
      if (*(int *)(param_1 + 2) == -3) {
        *param_1 = uVar1 | 4;
      }
      else {
        if ((uVar1 & 0x300) != 0) {
          FUN_0001fc5c(*(undefined4 *)(iVar5 + DAT_000200b8));
        }
        if (*(int *)(param_1 + 6) == *(int *)(param_1 + 4)) {
          iVar5 = FUN_0002732c(param_1,local_11,1);
          if (iVar5 != 0) {
            return (uint)local_11[0];
          }
        }
        else {
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 4);
          iVar5 = FUN_0002761c(param_1);
          if (iVar5 != 0) {
            *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 10);
            pbVar4 = *(byte **)(param_1 + 8);
            goto LAB_0001ffa4;
          }
        }
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* ===== FUN_000200bc @ 000200bc size=172 ===== */

char * FUN_000200bc(char *param_1,int param_2,ushort *param_3)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  if (0 < param_2) {
    pcVar4 = param_1;
    do {
      pcVar3 = pcVar4 + 1;
      if (pcVar3 == param_1 + param_2) break;
      pcVar2 = *(char **)(param_3 + 8);
      if (pcVar2 < *(char **)(param_3 + 0xc)) {
        *(char **)(param_3 + 8) = pcVar2 + 1;
        bVar5 = *pcVar2 == '\n';
        *pcVar4 = *pcVar2;
      }
      else {
        uVar1 = FUN_0001ff80(param_3);
        if (uVar1 == 0xffffffff) {
          if ((*param_3 & 8) != 0) {
            return (char *)0x0;
          }
          break;
        }
        *pcVar4 = (char)uVar1;
        bVar5 = (uVar1 & 0xff) == 10;
      }
      pcVar4 = pcVar3;
    } while (!bVar5);
    if (param_1 < pcVar4) {
      *pcVar4 = '\0';
      return param_1;
    }
  }
  return (char *)0x0;
}



/* ===== FUN_00020168 @ 00020168 size=268 ===== */

uint FUN_00020168(uint param_1,ushort *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_2 + 8);
  if (puVar2 < *(undefined1 **)(param_2 + 0xe)) {
    *(undefined1 **)(param_2 + 8) = puVar2 + 1;
    *puVar2 = (char)param_1;
    return param_1 & 0xff;
  }
  if (((*param_2 & 0xc0) == 0xc0) ||
     (iVar1 = FUN_000276e4(param_2,0x80,*(undefined1 **)(param_2 + 0xe),*param_2 & 0xc0,param_1,
                           param_2), iVar1 == 0)) {
    if (*(int *)(param_2 + 2) == -3) {
LAB_000201b8:
      return param_1 & 0xff;
    }
    if (*(int *)(param_2 + 6) == *(int *)(param_2 + 4)) {
      iVar1 = FUN_000273c0(param_2,&stack0xffffffef,1);
      if (iVar1 != 0) goto LAB_000201b8;
    }
    else if ((*(int *)(param_2 + 6) != *(int *)(param_2 + 8)) ||
            (iVar1 = FUN_0001e424(param_2), iVar1 == 0)) {
      puVar2 = *(undefined1 **)(param_2 + 8);
      *(undefined1 **)(param_2 + 8) = puVar2 + 1;
      *puVar2 = (char)param_1;
      if (((ushort)((ushort)((param_1 & 0xff) == 10) & *param_2 >> 8) == 0) ||
         (iVar1 = FUN_0001e424(param_2), iVar1 == 0)) goto LAB_000201b8;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00020274 @ 00020274 size=52 ===== */

int FUN_00020274(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000203b0();
  iVar2 = FUN_000202a8(param_1,1,iVar1,param_2);
  if (iVar2 != iVar1) {
    iVar2 = -1;
  }
  return iVar2;
}



/* ===== FUN_000202a8 @ 000202a8 size=156 ===== */

undefined4 FUN_000202a8(undefined4 param_1,uint param_2,uint param_3,ushort *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((*param_4 & 0xc0) == 0xc0) || (iVar2 = FUN_000276e4(param_4,0x80), iVar2 == 0)) &&
     (param_2 != 0 && param_3 != 0)) {
    if ((int)((ulonglong)param_3 * (ulonglong)param_2 >> 0x20) == 0) {
      uVar1 = FUN_000274f4(param_1,param_3 * param_2,param_4);
      uVar1 = FUN_0001bcf8(uVar1,param_2);
      return uVar1;
    }
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *param_4 = *param_4 | 8;
    *(undefined4 *)(iVar2 + *(int *)(DAT_00020344 + 0x20340)) = 0x16;
  }
  return 0;
}



/* ===== FUN_00020350 @ 00020350 size=84 ===== */

void FUN_00020350(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    if (((uint)param_1 & 7) == 0) break;
    *(char *)param_1 = (char)param_2;
    param_3 = param_3 - 1;
    param_1 = (uint *)((int)param_1 + 1);
  }
  uVar3 = param_3 & 0xfffffff0;
  uVar1 = param_3;
  if (uVar3 != 0) {
    param_2 = param_2 & 0xff | (param_2 & 0xff) << 8;
    param_2 = param_2 | param_2 << 0x10;
    do {
      puVar2 = param_1;
      uVar3 = uVar3 - 0x10;
      *puVar2 = param_2;
      puVar2[1] = param_2;
      puVar2[2] = param_2;
      puVar2[3] = param_2;
      param_1 = puVar2 + 4;
    } while (uVar3 != 0);
    uVar1 = param_3 & 0xf;
    if ((param_3 & 8) != 0) {
      uVar1 = uVar1 - 8;
      *param_1 = param_2;
      puVar2[5] = param_2;
      param_1 = puVar2 + 6;
    }
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(char *)param_1 = (char)param_2;
    param_1 = (uint *)((int)param_1 + 1);
  }
  return;
}



/* ===== FUN_000203b0 @ 000203b0 size=96 ===== */

int FUN_000203b0(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  puVar3 = (uint *)(param_1 & 0xfffffffc) + 1;
  uVar5 = *(uint *)(param_1 & 0xfffffffc);
  param_1 = param_1 & 3;
  iVar2 = -param_1;
  if (param_1 != 0) {
    uVar1 = uVar5 | 0xff;
    if (1 < param_1) {
      uVar1 = uVar5 | 0xffff;
    }
    uVar5 = uVar1;
    if (1 < (int)(param_1 - 1)) {
      uVar5 = uVar5 | 0xff0000;
    }
  }
  do {
    bVar6 = (uVar5 & 0xff) != 0;
    bVar7 = (uVar5 & 0xff00) != 0;
    bVar8 = (uVar5 & 0xff0000) != 0;
    bVar9 = (uVar5 & 0xff000000) != 0;
    puVar4 = puVar3;
    if (((bVar6 && bVar7) && bVar8) && bVar9) {
      iVar2 = iVar2 + 4;
      puVar4 = puVar3 + 1;
      uVar5 = *puVar3;
    }
    puVar3 = puVar4;
  } while (((bVar6 && bVar7) && bVar8) && bVar9);
  bVar6 = (uVar5 & 0xff) != 0;
  if (bVar6) {
    iVar2 = iVar2 + 1;
  }
  bVar7 = (uVar5 & 0xff00) != 0;
  if (bVar6 && bVar7) {
    iVar2 = iVar2 + 1;
  }
  if ((bVar6 && bVar7) && (uVar5 & 0xff0000) != 0) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}



/* ===== FUN_00020410 @ 00020410 size=28 ===== */

int FUN_00020410(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  
  do {
    uVar2 = (uint)*param_1;
    bVar1 = *param_2;
    bVar3 = uVar2 == 1;
    if (uVar2 != 0) {
      bVar3 = uVar2 == bVar1;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (bVar3);
  return uVar2 - bVar1;
}



/* ===== FUN_00020430 @ 00020430 size=44 ===== */

int FUN_00020430(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  bool bVar5;
  byte *pbVar4;
  
  if (-1 < param_3 + -1) {
    pbVar4 = param_1;
    do {
      pbVar3 = pbVar4 + 1;
      bVar1 = *pbVar4;
      bVar2 = *param_2;
      bVar5 = param_1 + param_3 + -1 == pbVar3;
      if (pbVar3 <= param_1 + param_3 + -1) {
        bVar5 = (uint)bVar1 == (uint)bVar2;
      }
      pbVar4 = pbVar3;
      param_2 = param_2 + 1;
    } while (bVar5);
    return (uint)bVar1 - (uint)bVar2;
  }
  return 0;
}



/* ===== thunk_FUN_00029380 @ 00020460 size=4 ===== */

void thunk_FUN_00029380(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  ushort uVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint *puVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  if (0x3f < param_3) {
    uVar8 = (uint)param_1 & 7;
    if (uVar8 == ((uint)param_2 & 7)) {
      if (((uint)param_1 & 7) != 0) {
        uVar9 = (int)param_1 * -0x20000000;
        param_3 = param_3 - (uVar9 >> 0x1d);
        puVar14 = param_1;
        puVar11 = param_2;
        if ((int)uVar9 < 0) {
          puVar11 = param_2 + 1;
          uVar8 = *param_2;
          puVar14 = param_1 + 1;
          *param_1 = uVar8;
        }
        uVar6 = (ushort)uVar8;
        bVar16 = (bool)((byte)(uVar9 >> 0x1e) & 1);
        bVar15 = ((uint)param_1 & 1) != 0;
        puVar2 = puVar11;
        if (bVar16) {
          puVar2 = (uint *)((int)puVar11 + 2);
          uVar6 = (ushort)*puVar11;
        }
        bVar5 = 0;
        param_2 = puVar2;
        if (bVar15) {
          param_2 = (uint *)((int)puVar2 + 1);
          bVar5 = (byte)*puVar2;
        }
        puVar11 = puVar14;
        if (bVar16) {
          puVar11 = (uint *)((int)puVar14 + 2);
          *(ushort *)puVar14 = uVar6;
        }
        param_1 = puVar11;
        if (bVar15) {
          param_1 = (uint *)((int)puVar11 + 1);
          *(byte *)puVar11 = bVar5;
        }
      }
      uVar8 = param_3 - 0x40;
      if (0x3f < param_3) {
        if (0x1ff < uVar8) {
          uVar20 = *(undefined8 *)param_2;
          uVar21 = *(undefined8 *)(param_2 + 0x10);
          uVar22 = *(undefined8 *)(param_2 + 0x20);
          uVar23 = *(undefined8 *)(param_2 + 0x30);
          uVar24 = *(undefined8 *)(param_2 + 0x40);
          uVar17 = *(undefined8 *)(param_2 + 2);
          uVar18 = *(undefined8 *)(param_2 + 4);
          uVar19 = *(undefined8 *)(param_2 + 6);
          param_2 = param_2 + 8;
          param_3 = param_3 - 0x2c0;
          if (0x27f < uVar8) {
            do {
              *(undefined8 *)param_1 = uVar20;
              uVar20 = *(undefined8 *)param_2;
              *(undefined8 *)(param_1 + 2) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 2);
              *(undefined8 *)(param_1 + 4) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 4);
              *(undefined8 *)(param_1 + 6) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 6);
              *(undefined8 *)(param_1 + 8) = uVar20;
              uVar20 = *(undefined8 *)(param_2 + 0x48);
              *(undefined8 *)(param_1 + 10) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 10);
              *(undefined8 *)(param_1 + 0xc) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0xc);
              *(undefined8 *)(param_1 + 0xe) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0xe);
              *(undefined8 *)(param_1 + 0x10) = uVar21;
              uVar21 = *(undefined8 *)(param_2 + 0x10);
              *(undefined8 *)(param_1 + 0x12) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 0x12);
              *(undefined8 *)(param_1 + 0x14) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0x14);
              *(undefined8 *)(param_1 + 0x16) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0x16);
              *(undefined8 *)(param_1 + 0x18) = uVar21;
              uVar21 = *(undefined8 *)(param_2 + 0x58);
              *(undefined8 *)(param_1 + 0x1a) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 0x1a);
              *(undefined8 *)(param_1 + 0x1c) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0x1c);
              *(undefined8 *)(param_1 + 0x1e) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0x1e);
              *(undefined8 *)(param_1 + 0x20) = uVar22;
              uVar22 = *(undefined8 *)(param_2 + 0x20);
              *(undefined8 *)(param_1 + 0x22) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 0x22);
              *(undefined8 *)(param_1 + 0x24) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0x24);
              *(undefined8 *)(param_1 + 0x26) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0x26);
              *(undefined8 *)(param_1 + 0x28) = uVar22;
              uVar22 = *(undefined8 *)(param_2 + 0x68);
              *(undefined8 *)(param_1 + 0x2a) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 0x2a);
              *(undefined8 *)(param_1 + 0x2c) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0x2c);
              *(undefined8 *)(param_1 + 0x2e) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0x2e);
              *(undefined8 *)(param_1 + 0x30) = uVar23;
              uVar23 = *(undefined8 *)(param_2 + 0x30);
              *(undefined8 *)(param_1 + 0x32) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 0x32);
              *(undefined8 *)(param_1 + 0x34) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0x34);
              *(undefined8 *)(param_1 + 0x36) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0x36);
              *(undefined8 *)(param_1 + 0x38) = uVar23;
              uVar23 = *(undefined8 *)(param_2 + 0x78);
              *(undefined8 *)(param_1 + 0x3a) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 0x3a);
              *(undefined8 *)(param_1 + 0x3c) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0x3c);
              *(undefined8 *)(param_1 + 0x3e) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0x3e);
              *(undefined8 *)(param_1 + 0x40) = uVar24;
              uVar24 = *(undefined8 *)(param_2 + 0x40);
              *(undefined8 *)(param_1 + 0x42) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 0x42);
              *(undefined8 *)(param_1 + 0x44) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0x44);
              *(undefined8 *)(param_1 + 0x46) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0x46);
              *(undefined8 *)(param_1 + 0x48) = uVar24;
              uVar24 = *(undefined8 *)(param_2 + 0x88);
              *(undefined8 *)(param_1 + 0x4a) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 0x4a);
              *(undefined8 *)(param_1 + 0x4c) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0x4c);
              *(undefined8 *)(param_1 + 0x4e) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0x4e);
              param_1 = param_1 + 0x50;
              param_2 = param_2 + 0x50;
              bVar15 = 0x13f < param_3;
              param_3 = param_3 - 0x140;
            } while (bVar15);
          }
          *(undefined8 *)param_1 = uVar20;
          uVar20 = *(undefined8 *)param_2;
          *(undefined8 *)(param_1 + 2) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)(param_1 + 4) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 4);
          *(undefined8 *)(param_1 + 6) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 6);
          *(undefined8 *)(param_1 + 8) = uVar20;
          *(undefined8 *)(param_1 + 10) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 10);
          *(undefined8 *)(param_1 + 0xc) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0xc);
          *(undefined8 *)(param_1 + 0xe) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 0xe);
          *(undefined8 *)(param_1 + 0x10) = uVar21;
          uVar20 = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)(param_1 + 0x12) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 0x12);
          *(undefined8 *)(param_1 + 0x14) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0x14);
          *(undefined8 *)(param_1 + 0x16) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 0x16);
          *(undefined8 *)(param_1 + 0x18) = uVar20;
          *(undefined8 *)(param_1 + 0x1a) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 0x1a);
          *(undefined8 *)(param_1 + 0x1c) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0x1c);
          *(undefined8 *)(param_1 + 0x1e) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 0x1e);
          *(undefined8 *)(param_1 + 0x20) = uVar22;
          uVar20 = *(undefined8 *)(param_2 + 0x20);
          *(undefined8 *)(param_1 + 0x22) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 0x22);
          *(undefined8 *)(param_1 + 0x24) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0x24);
          *(undefined8 *)(param_1 + 0x26) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 0x26);
          *(undefined8 *)(param_1 + 0x28) = uVar20;
          *(undefined8 *)(param_1 + 0x2a) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 0x2a);
          *(undefined8 *)(param_1 + 0x2c) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0x2c);
          *(undefined8 *)(param_1 + 0x2e) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 0x2e);
          *(undefined8 *)(param_1 + 0x30) = uVar23;
          uVar20 = *(undefined8 *)(param_2 + 0x30);
          *(undefined8 *)(param_1 + 0x32) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 0x32);
          *(undefined8 *)(param_1 + 0x34) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0x34);
          *(undefined8 *)(param_1 + 0x36) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 0x36);
          *(undefined8 *)(param_1 + 0x38) = uVar20;
          *(undefined8 *)(param_1 + 0x3a) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 0x3a);
          *(undefined8 *)(param_1 + 0x3c) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0x3c);
          *(undefined8 *)(param_1 + 0x3e) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 0x3e);
          *(undefined8 *)(param_1 + 0x40) = uVar24;
          uVar20 = *(undefined8 *)(param_2 + 0x40);
          *(undefined8 *)(param_1 + 0x42) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 0x42);
          *(undefined8 *)(param_1 + 0x44) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0x44);
          *(undefined8 *)(param_1 + 0x46) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 0x46);
          *(undefined8 *)(param_1 + 0x48) = uVar20;
          param_2 = param_2 + 0x48;
          *(undefined8 *)(param_1 + 0x4a) = uVar17;
          *(undefined8 *)(param_1 + 0x4c) = uVar18;
          *(undefined8 *)(param_1 + 0x4e) = uVar19;
          param_1 = param_1 + 0x50;
          uVar8 = param_3 + 0x140;
        }
        do {
          bVar15 = 0x3f < uVar8;
          uVar8 = uVar8 - 0x40;
          uVar18 = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          uVar17 = *(undefined8 *)(param_2 + 4);
          *(undefined8 *)(param_1 + 2) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 6);
          *(undefined8 *)(param_1 + 4) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)(param_1 + 6) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 10);
          *(undefined8 *)(param_1 + 8) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 0xc);
          *(undefined8 *)(param_1 + 10) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0xe);
          *(undefined8 *)(param_1 + 0xc) = uVar17;
          param_2 = param_2 + 0x10;
          *(undefined8 *)(param_1 + 0xe) = uVar18;
          param_1 = param_1 + 0x10;
        } while (bVar15);
        if ((uVar8 & 0x3f) == 0) {
          return;
        }
      }
      uVar9 = uVar8 & 0x38;
      pbVar12 = (byte *)((int)param_1 + uVar9);
      pbVar3 = (byte *)((int)param_2 + uVar9);
      iVar10 = 0x34 - uVar9;
      switch(uVar9) {
      case 0x38:
        *(undefined8 *)(pbVar12 + -0x38) = *(undefined8 *)(pbVar3 + -0x38);
      case 0x30:
        *(undefined8 *)(pbVar12 + -0x30) = *(undefined8 *)(pbVar3 + -0x30);
      case 0x28:
        *(undefined8 *)(pbVar12 + -0x28) = *(undefined8 *)(pbVar3 + -0x28);
      case 0x20:
        *(undefined8 *)(pbVar12 + -0x20) = *(undefined8 *)(pbVar3 + -0x20);
      case 0x18:
        *(undefined8 *)(pbVar12 + -0x18) = *(undefined8 *)(pbVar3 + -0x18);
      case 0x10:
        *(undefined8 *)(pbVar12 + -0x10) = *(undefined8 *)(pbVar3 + -0x10);
      case 8:
        *(undefined8 *)(pbVar12 + -8) = *(undefined8 *)(pbVar3 + -8);
      case 0:
        pbVar13 = pbVar12;
        pbVar4 = pbVar3;
        if ((uVar8 & 4) != 0) {
          pbVar4 = pbVar3 + 4;
          iVar10 = *(int *)pbVar3;
          pbVar13 = pbVar12 + 4;
          *(int *)pbVar12 = iVar10;
        }
        uVar7 = (undefined2)iVar10;
        bVar16 = (bool)((byte)(uVar8 >> 1) & 1);
        bVar15 = (uVar8 & 1) != 0;
        pbVar3 = pbVar4;
        if (bVar16) {
          pbVar3 = pbVar4 + 2;
          uVar7 = *(undefined2 *)pbVar4;
        }
        bVar5 = 0;
        if (bVar15) {
          bVar5 = *pbVar3;
        }
        pbVar3 = pbVar13;
        if (bVar16) {
          pbVar3 = pbVar13 + 2;
          *(undefined2 *)pbVar13 = uVar7;
        }
        if (bVar15) {
          *pbVar3 = bVar5;
        }
        return;
      }
    }
    HintPreloadData(param_2);
    HintPreloadData(param_2 + 0x10);
    HintPreloadData(param_2 + 0x20);
    uVar9 = param_3;
    if (((uint)param_1 & 7) != 0) {
      uVar1 = (int)param_1 * -0x20000000;
      uVar9 = param_3 - (uVar1 >> 0x1d);
      puVar14 = param_1;
      puVar11 = param_2;
      if ((int)uVar1 < 0) {
        puVar11 = param_2 + 1;
        uVar8 = *param_2;
        puVar14 = param_1 + 1;
        *param_1 = uVar8;
      }
      bVar5 = (byte)uVar8;
      bVar16 = (bool)((byte)(uVar1 >> 0x1e) & 1);
      uVar8 = (int)param_1 * -0x80000000;
      bVar15 = uVar8 != 0;
      puVar2 = puVar11;
      if (bVar15) {
        puVar2 = (uint *)((int)puVar11 + 1);
        bVar5 = (byte)*puVar11;
      }
      param_2 = puVar2;
      if (bVar16) {
        param_2 = (uint *)((int)puVar2 + 2);
        uVar8 = (uint)(ushort)*puVar2;
      }
      puVar11 = puVar14;
      if (bVar15) {
        puVar11 = (uint *)((int)puVar14 + 1);
        *(byte *)puVar14 = bVar5;
      }
      param_1 = puVar11;
      if (bVar16) {
        param_1 = (uint *)((int)puVar11 + 2);
        *(ushort *)puVar11 = (ushort)uVar8;
      }
    }
    HintPreloadData(param_2 + 0x30);
    param_3 = uVar9 - 0x40;
    if (0x3f < uVar9) {
      HintPreloadData(param_2 + 0x40);
      uVar17 = *(undefined8 *)param_2;
      uVar18 = *(undefined8 *)(param_2 + 2);
      uVar19 = *(undefined8 *)(param_2 + 4);
      uVar20 = *(undefined8 *)(param_2 + 6);
      uVar21 = *(undefined8 *)(param_2 + 8);
      uVar22 = *(undefined8 *)(param_2 + 10);
      uVar23 = *(undefined8 *)(param_2 + 0xc);
      uVar24 = *(undefined8 *)(param_2 + 0xe);
      uVar8 = uVar9 - 0x80;
      puVar11 = param_2;
      while (uVar9 = uVar8, param_2 = puVar11 + 0x10, 0x3f < param_3) {
        HintPreloadData(puVar11 + 0x50);
        *(undefined8 *)param_1 = uVar17;
        *(undefined8 *)(param_1 + 2) = uVar18;
        *(undefined8 *)(param_1 + 4) = uVar19;
        *(undefined8 *)(param_1 + 6) = uVar20;
        uVar17 = *(undefined8 *)param_2;
        uVar18 = *(undefined8 *)(puVar11 + 0x12);
        uVar19 = *(undefined8 *)(puVar11 + 0x14);
        uVar20 = *(undefined8 *)(puVar11 + 0x16);
        *(undefined8 *)(param_1 + 8) = uVar21;
        *(undefined8 *)(param_1 + 10) = uVar22;
        *(undefined8 *)(param_1 + 0xc) = uVar23;
        *(undefined8 *)(param_1 + 0xe) = uVar24;
        param_1 = param_1 + 0x10;
        uVar21 = *(undefined8 *)(puVar11 + 0x18);
        uVar22 = *(undefined8 *)(puVar11 + 0x1a);
        uVar23 = *(undefined8 *)(puVar11 + 0x1c);
        uVar24 = *(undefined8 *)(puVar11 + 0x1e);
        uVar8 = uVar9 - 0x40;
        puVar11 = param_2;
        param_3 = uVar9;
      }
      *(undefined8 *)param_1 = uVar17;
      *(undefined8 *)(param_1 + 2) = uVar18;
      *(undefined8 *)(param_1 + 4) = uVar19;
      *(undefined8 *)(param_1 + 6) = uVar20;
      *(undefined8 *)(param_1 + 8) = uVar21;
      *(undefined8 *)(param_1 + 10) = uVar22;
      *(undefined8 *)(param_1 + 0xc) = uVar23;
      *(undefined8 *)(param_1 + 0xe) = uVar24;
      param_1 = param_1 + 0x10;
      param_3 = uVar9 & 0x3f;
      if (param_3 == 0) {
        return;
      }
    }
  }
  uVar8 = 0x34 - (param_3 & 0x38);
  switch(param_3 & 0x38) {
  case 0x38:
    uVar17 = *(undefined8 *)param_2;
    param_2 = param_2 + 2;
    *(undefined8 *)param_1 = uVar17;
    param_1 = param_1 + 2;
  case 0x30:
    uVar17 = *(undefined8 *)param_2;
    param_2 = param_2 + 2;
    *(undefined8 *)param_1 = uVar17;
    param_1 = param_1 + 2;
  case 0x28:
    uVar17 = *(undefined8 *)param_2;
    param_2 = param_2 + 2;
    *(undefined8 *)param_1 = uVar17;
    param_1 = param_1 + 2;
  case 0x20:
    uVar17 = *(undefined8 *)param_2;
    param_2 = param_2 + 2;
    *(undefined8 *)param_1 = uVar17;
    param_1 = param_1 + 2;
  case 0x18:
    uVar17 = *(undefined8 *)param_2;
    param_2 = param_2 + 2;
    *(undefined8 *)param_1 = uVar17;
    param_1 = param_1 + 2;
  case 0x10:
    uVar17 = *(undefined8 *)param_2;
    param_2 = param_2 + 2;
    *(undefined8 *)param_1 = uVar17;
    param_1 = param_1 + 2;
  case 8:
    uVar17 = *(undefined8 *)param_2;
    param_2 = param_2 + 2;
    *(undefined8 *)param_1 = uVar17;
    param_1 = param_1 + 2;
  case 0:
    puVar14 = param_1;
    puVar11 = param_2;
    if ((param_3 & 4) != 0) {
      puVar11 = param_2 + 1;
      uVar8 = *param_2;
      puVar14 = param_1 + 1;
      *param_1 = uVar8;
    }
    uVar6 = (ushort)uVar8;
    bVar16 = (bool)((byte)(param_3 >> 1) & 1);
    bVar15 = (param_3 & 1) != 0;
    puVar2 = puVar11;
    if (bVar16) {
      puVar2 = (uint *)((int)puVar11 + 2);
      uVar6 = (ushort)*puVar11;
    }
    if (bVar15) {
      puVar2 = (uint *)(uint)(byte)*puVar2;
    }
    puVar11 = puVar14;
    if (bVar16) {
      puVar11 = (uint *)((int)puVar14 + 2);
      *(ushort *)puVar14 = uVar6;
    }
    if (bVar15) {
      *(byte *)puVar11 = (byte)puVar2;
    }
    return;
  }
}



/* ===== FUN_00020464 @ 00020464 size=252 ===== */

char * FUN_00020464(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  
  cVar2 = *param_2;
  if (cVar2 == '\0') {
    return param_1;
  }
  pcVar8 = param_1 + -1;
  do {
    pcVar6 = pcVar8;
    if (pcVar6[1] == '\0') {
      return (char *)0x0;
    }
    pcVar8 = pcVar6 + 1;
  } while (cVar2 != pcVar6[1]);
  if (param_2[1] == '\0') {
    return pcVar6 + 1;
  }
  pcVar8 = pcVar6 + 2;
  cVar5 = pcVar6[2];
  do {
    pcVar6 = pcVar8;
    if (param_2[1] == cVar5) {
      cVar5 = param_2[2];
      pcVar3 = pcVar8 + -1;
      if (pcVar8[1] == cVar5) {
        pcVar7 = param_2 + 2;
        pcVar4 = pcVar8 + 1;
        do {
          if (cVar5 == '\0') {
            return pcVar3;
          }
          cVar5 = pcVar7[1];
          if (pcVar4[1] != cVar5) break;
          if (cVar5 == '\0') {
            return pcVar3;
          }
          pcVar7 = pcVar7 + 2;
          cVar5 = *pcVar7;
          pcVar1 = pcVar4 + 2;
          pcVar4 = pcVar4 + 2;
        } while (*pcVar1 == cVar5);
      }
      if (cVar5 == '\0') {
        return pcVar3;
      }
      cVar5 = *pcVar8;
    }
    while (cVar5 != cVar2) {
      if (cVar5 == '\0') {
        return (char *)0x0;
      }
      if (cVar2 == pcVar6[1]) {
        pcVar6 = pcVar6 + 1;
        break;
      }
      if (pcVar6[1] == '\0') {
        return (char *)0x0;
      }
      cVar5 = pcVar6[2];
      pcVar6 = pcVar6 + 2;
    }
    pcVar8 = pcVar6 + 1;
    cVar5 = pcVar6[1];
  } while( true );
}



/* ===== FUN_00020560 @ 00020560 size=208 ===== */

int FUN_00020560(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  iVar2 = 0;
  if (param_2 != 0) {
    piVar1 = (int *)((int)param_1 + param_2);
    piVar5 = param_1;
    if (CARRY4((uint)param_1,param_2)) {
      piVar1 = (int *)0xffffffff;
    }
    do {
      piVar3 = piVar5;
      piVar5 = piVar3;
      if (((uint)piVar3 & 3) == 0) goto LAB_0002058c;
      piVar5 = (int *)((int)piVar3 + 1);
    } while ((char)*piVar3 != '\0');
    if (piVar1 < piVar3) {
      iVar2 = (int)piVar1 - (int)param_1;
    }
    else {
      iVar2 = (int)piVar3 - (int)param_1;
    }
  }
  return iVar2;
  while( true ) {
    piVar5 = piVar4;
    if ((char)*piVar4 == '\0') goto LAB_000205c4;
    if (*(char *)((int)piVar4 + 1) == '\0') {
      piVar5 = (int *)((int)piVar4 + 1);
      goto LAB_000205c4;
    }
    if (*(char *)((int)piVar4 + 2) == '\0') {
      piVar5 = (int *)((int)piVar4 + 2);
      goto LAB_000205c4;
    }
    piVar5 = piVar1;
    if (*(char *)((int)piVar4 + 3) == '\0') break;
LAB_0002058c:
    do {
      piVar4 = piVar3;
      if (piVar1 <= piVar4) goto LAB_000205c4;
      piVar3 = piVar4 + 1;
      piVar5 = piVar1;
    } while ((DAT_00020630 + *piVar4 & DAT_00020634) == 0);
  }
  piVar5 = (int *)((int)piVar4 + 3);
LAB_000205c4:
  if (piVar1 < piVar5) {
    iVar2 = (int)piVar1 - (int)param_1;
  }
  else {
    iVar2 = (int)piVar5 - (int)param_1;
  }
  return iVar2;
}



/* ===== FUN_00020638 @ 00020638 size=52 ===== */

void FUN_00020638(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  do {
    pcVar2 = param_1;
    param_1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  pcVar2 = pcVar2 + -1;
  do {
    cVar1 = *param_2;
    pcVar2 = pcVar2 + 1;
    *pcVar2 = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return;
}



/* ===== FUN_0002066c @ 0002066c size=252 ===== */

int FUN_0002066c(byte *param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  
  if (param_3 < 4) {
    uVar5 = 0;
    uVar3 = uVar5;
  }
  else {
    pbVar4 = param_1 + (param_3 & 0xfffffffc);
    pbVar1 = param_1;
    pbVar2 = param_2;
    do {
      param_2 = pbVar2 + 4;
      uVar3 = (uint)*pbVar1;
      uVar5 = (uint)*pbVar2;
      if (uVar3 == 0 || uVar3 != uVar5) {
LAB_000206a8:
        return uVar3 - uVar5;
      }
      uVar3 = (uint)pbVar1[1];
      uVar5 = (uint)pbVar2[1];
      if (uVar3 == 0 || uVar3 != uVar5) goto LAB_000206a8;
      uVar3 = (uint)pbVar1[2];
      uVar5 = (uint)pbVar2[2];
      if (uVar3 == 0 || uVar3 != uVar5) goto LAB_000206a8;
      param_1 = pbVar1 + 4;
      uVar3 = (uint)pbVar2[3];
      uVar5 = (uint)pbVar1[3];
      if (uVar5 == 0 || uVar5 != uVar3) goto LAB_00020714;
      pbVar1 = param_1;
      pbVar2 = param_2;
    } while (param_1 != pbVar4);
    param_3 = param_3 & 3;
  }
  pbVar1 = param_1;
  do {
    if (pbVar1 == param_1 + param_3) break;
    uVar5 = (uint)*pbVar1;
    uVar3 = (uint)*param_2;
    pbVar1 = pbVar1 + 1;
    param_2 = param_2 + 1;
  } while (uVar5 != 0 && uVar5 == uVar3);
LAB_00020714:
  return uVar5 - uVar3;
}



/* ===== FUN_00020768 @ 00020768 size=28 ===== */

void FUN_00020768(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = (char *)(param_2 + -1);
  pcVar3 = (char *)(param_1 + -1);
  do {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar3 = pcVar3 + 1;
    *pcVar3 = cVar1;
  } while (cVar1 != '\0');
  return;
}



/* ===== FUN_00020784 @ 00020784 size=248 ===== */

void FUN_00020784(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(param_1 + -1);
  if (param_3 < 4) {
    param_3 = param_3 & 3;
    if (param_3 == 0) {
      return;
    }
    do {
      cVar1 = *param_2;
      param_3 = param_3 - 1;
      pcVar4 = pcVar4 + 1;
      *pcVar4 = cVar1;
      if (param_3 == 0) {
        return;
      }
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar4 + param_3;
    do {
      pcVar4 = pcVar4 + 1;
      *pcVar4 = '\0';
    } while (pcVar4 != pcVar3);
    return;
  }
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar4[1] = cVar1;
    if (cVar1 == '\0') {
      pcVar4 = pcVar4 + 1;
LAB_000207c0:
      param_3 = (param_3 - 1) - ((int)pcVar4 - param_1);
      if (param_3 == 0) {
        return;
      }
      goto LAB_000207d0;
    }
    cVar1 = pcVar3[1];
    pcVar4[2] = cVar1;
    if (cVar1 == '\0') {
      pcVar4 = pcVar4 + 2;
      goto LAB_000207c0;
    }
    cVar1 = pcVar3[2];
    pcVar4[3] = cVar1;
    if (cVar1 == '\0') {
      pcVar4 = pcVar4 + 3;
      goto LAB_000207c0;
    }
    pcVar2 = pcVar3 + 4;
    cVar1 = pcVar3[3];
    pcVar4 = pcVar4 + 4;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') goto LAB_000207c0;
    pcVar3 = pcVar2;
  } while (pcVar2 != param_2 + (param_3 & 0xfffffffc));
  param_3 = param_3 & 3;
  if (param_3 == 0) {
    return;
  }
  do {
    cVar1 = *pcVar2;
    param_3 = param_3 - 1;
    pcVar4 = pcVar4 + 1;
    *pcVar4 = cVar1;
    if (param_3 == 0) {
      return;
    }
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
LAB_000207d0:
  pcVar3 = pcVar4 + param_3;
  do {
    pcVar4 = pcVar4 + 1;
    *pcVar4 = '\0';
  } while (pcVar4 != pcVar3);
  return;
}



/* ===== FUN_0002087c @ 0002087c size=236 ===== */

uint * FUN_0002087c(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_2 & 0xff;
  while (((uint)param_1 & 3) != 0) {
    uVar1 = *param_1;
    if ((byte)uVar1 == uVar5) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((byte)uVar1 == 0) {
      return (uint *)0x0;
    }
  }
  uVar1 = (param_2 & 0xff) << 8 | uVar5;
  while( true ) {
    do {
      puVar2 = param_1;
      uVar3 = *puVar2;
      uVar4 = (uVar1 | uVar1 << 0x10) ^ uVar3;
      param_1 = puVar2 + 1;
    } while (((uVar3 + DAT_00020968 ^ uVar3) & (uVar4 + DAT_00020968 ^ uVar4) | DAT_00020968) ==
             0xffffffff);
    if ((byte)*puVar2 == uVar5) {
      return puVar2;
    }
    if ((byte)*puVar2 == 0) {
      return (uint *)0x0;
    }
    if (*(byte *)((int)puVar2 + 1) == uVar5) {
      return (uint *)((int)puVar2 + 1);
    }
    if (*(byte *)((int)puVar2 + 1) == 0) {
      return (uint *)0x0;
    }
    if (*(byte *)((int)puVar2 + 2) == uVar5) {
      return (uint *)((int)puVar2 + 2);
    }
    if (*(byte *)((int)puVar2 + 2) == 0) {
      return (uint *)0x0;
    }
    if (*(byte *)((int)puVar2 + 3) == uVar5) break;
    if (*(byte *)((int)puVar2 + 3) == 0) {
      return (uint *)0x0;
    }
  }
  return (uint *)((int)puVar2 + 3);
}



/* ===== FUN_0002096c @ 0002096c size=32 ===== */

int FUN_0002096c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = DAT_0002098c + 0x20980;
  FUN_00020990(param_1,iVar1,0x32);
  return iVar1;
}



/* ===== FUN_00020990 @ 00020990 size=248 ===== */

int FUN_00020990(uint param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined1 auStack_1b [7];
  
  if (param_1 < 0x7d) {
    pcVar6 = (char *)(DAT_00020a88 + 0x209b8);
    uVar3 = param_1;
    while( true ) {
      cVar1 = *pcVar6;
      pcVar4 = pcVar6 + 1;
      if (uVar3 == 0) break;
      pcVar6 = pcVar4;
      if (cVar1 == '\0') {
        uVar3 = uVar3 - 1;
      }
    }
    iVar5 = 0;
    if (cVar1 == '\0') goto LAB_000209d0;
  }
  else {
LAB_000209d0:
    iVar2 = FUN_00027864(auStack_1b,param_2,param_1,(int)param_1 >> 0x1f,0xfffffff6,0);
    iVar5 = 0x16;
    pcVar6 = (char *)(iVar2 + -0xe);
    thunk_FUN_00029380(pcVar6,DAT_00020a8c + 0x20a00,0xe);
  }
  if (param_2 == 0) {
    param_3 = 0;
  }
  iVar2 = FUN_000203b0(pcVar6);
  uVar3 = iVar2 + 1;
  if (param_3 < uVar3) {
    iVar5 = 0x22;
    uVar3 = param_3;
    if (param_3 == 0) goto LAB_00020a30;
LAB_00020a58:
    thunk_FUN_00029380(param_2,pcVar6,uVar3);
    *(undefined1 *)(param_2 + uVar3 + -1) = 0;
  }
  else if (uVar3 != 0) goto LAB_00020a58;
  if (iVar5 == 0) {
    return 0;
  }
LAB_00020a30:
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(int *)(iVar2 + *(int *)(DAT_00020a90 + 0x20a40)) = iVar5;
  return iVar5;
}



/* ===== FUN_00020a94 @ 00020a94 size=116 ===== */

int FUN_00020a94(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)((int)&DAT_00020aa0 + DAT_00020aa0);
  if (param_1 == 0) {
    param_1 = *piVar3;
  }
  iVar1 = FUN_00029b58(param_1);
  iVar4 = param_1 + iVar1;
  if (*(char *)(param_1 + iVar1) == '\0') {
    *piVar3 = iVar4;
    iVar4 = 0;
  }
  else {
    puVar2 = (undefined1 *)FUN_00029c0c(iVar4,param_2);
    if (puVar2 == (undefined1 *)0x0) {
      iVar1 = FUN_000299bc(iVar4);
      *piVar3 = iVar1;
    }
    else {
      *puVar2 = 0;
      *piVar3 = (int)(puVar2 + 1);
    }
  }
  return iVar4;
}



/* ===== FUN_00020aa4 @ 00020aa4 size=20 ===== */

undefined4 FUN_00020aa4(undefined4 param_1,undefined4 param_2)

{
  FUN_00020990();
  return param_2;
}



/* ===== FUN_00020ab8 @ 00020ab8 size=32 ===== */

bool FUN_00020ab8(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_44 [64];
  
  iVar1 = FUN_00020ad8(param_1,auStack_44);
  return iVar1 == 0;
}



/* ===== FUN_00020ad8 @ 00020ad8 size=112 ===== */

int FUN_00020ad8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 auStack_23 [23];
  
  iVar1 = FUN_0001d33c(param_1,0x5401,&local_34);
  if (iVar1 == 0) {
    *param_2 = local_34;
    param_2[1] = local_30;
    param_2[2] = local_2c;
    param_2[3] = local_28;
    *(undefined1 *)(param_2 + 4) = local_24;
    uVar2 = FUN_00029bf4((int)param_2 + 0x11,auStack_23,0x13);
    FUN_00020350(uVar2,0,0xd);
  }
  return iVar1;
}



/* ===== FUN_00020b50 @ 00020b50 size=12 ===== */

uint FUN_00020b50(uint param_1)

{
  return (param_1 & 0xff) << 8 | param_1 >> 8 & 0xff;
}



/* ===== FUN_00020bb4 @ 00020bb4 size=100 ===== */

void FUN_00020bb4(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_1 << 0x18 | (param_1 >> 8 & 0xff) << 0x10 | (param_1 >> 0x10 & 0xff) << 8 |
          param_1 >> 0x18;
  puVar2 = (undefined1 *)(DAT_00020bc0 + 0x20bcf);
  iVar4 = 4;
  puVar3 = (undefined1 *)0x0;
  do {
    iVar1 = FUN_00027864(puVar2,puVar2,uVar5 & 0xff,0,0xfffffff6,0,param_3);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0x2e;
    }
    iVar4 = iVar4 + -1;
    uVar5 = uVar5 >> 8;
    puVar2 = (undefined1 *)(iVar1 + -1);
    puVar3 = puVar2;
  } while (iVar4 != 0);
  return;
}



/* ===== FUN_00020bc4 @ 00020bc4 size=48 ===== */

uint FUN_00020bc4(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_00020bf4 + 0x20bec)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_00020bf8 @ 00020bf8 size=52 ===== */

uint FUN_00020bf8(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_00020c2c + 0x20c24)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_00020c30 @ 00020c30 size=116 ===== */

undefined4
FUN_00020c30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(DAT_00020ca4 + 0x20c44) == 0) {
    uVar1 = FUN_00020bf8();
    return uVar1;
  }
  uVar1 = FUN_00022c10();
  uVar2 = FUN_00020bf8(param_1,param_2,param_3,param_4,param_5,param_6);
  FUN_00022cbc(uVar1);
  return uVar2;
}



/* ===== FUN_00020ca8 @ 00020ca8 size=52 ===== */

uint FUN_00020ca8(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_00020cdc + 0x20cd4)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_00020ce0 @ 00020ce0 size=116 ===== */

undefined4
FUN_00020ce0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(DAT_00020d54 + 0x20cf4) == 0) {
    uVar1 = FUN_00020ca8();
    return uVar1;
  }
  uVar1 = FUN_00022c10();
  uVar2 = FUN_00020ca8(param_1,param_2,param_3,param_4,param_5,param_6);
  FUN_00022cbc(uVar1);
  return uVar2;
}



/* ===== FUN_00020d58 @ 00020d58 size=48 ===== */

uint FUN_00020d58(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_00020d88 + 0x20d80)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_00020d8c @ 00020d8c size=168 ===== */

undefined4 FUN_00020d8c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_00020e34;
  iVar4 = *(int *)(DAT_00020e34 + 0x210f8);
  uVar3 = *(uint *)(*(int *)(DAT_00020e34 + 0x20dc8) + 4) & 0xfffffffc;
  iVar2 = FUN_0001bcf8((iVar4 + -0x11 + uVar3) - param_1,iVar4);
  iVar4 = iVar4 * (iVar2 + -1);
  if (0 < iVar4) {
    iVar2 = FUN_00026ce4(0);
    if (iVar2 == *(int *)(iVar1 + 0x20dc8) + uVar3) {
      FUN_00026ce4(-iVar4);
      iVar4 = FUN_00026ce4(0);
      if ((iVar4 != -1) && (iVar2 = iVar2 - iVar4, iVar2 != 0)) {
        *(int *)(iVar1 + 0x21104) = *(int *)(iVar1 + 0x21104) - iVar2;
        *(uint *)(*(int *)(iVar1 + 0x20dc8) + 4) = uVar3 - iVar2 | 1;
        return 1;
      }
    }
  }
  return 0;
}



/* ===== FUN_00020e38 @ 00020e38 size=396 ===== */

void FUN_00020e38(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint extraout_r2;
  uint uVar3;
  int *piVar4;
  int *extraout_r3;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint extraout_r12;
  int iVar10;
  uint *puVar11;
  undefined8 uVar12;
  
  puVar11 = param_1 + 0xd;
  uVar3 = *param_1;
  if (uVar3 == 0) {
    puVar5 = puVar11;
    do {
      puVar5[3] = (uint)puVar5;
      puVar5[2] = (uint)puVar5;
      puVar5 = puVar5 + 2;
    } while (param_1 + 0xcb != puVar5);
    param_1[0xd2] = 0;
    param_1[0xd5] = 0x10000;
    param_1[0xd3] = 0x40000;
    param_1[0xd1] = 0x40000;
    param_1[0xb] = (uint)puVar11;
    param_1[0xd8] = param_1[0xd8] | 1;
    *param_1 = 0x48;
    uVar3 = FUN_00026b3c();
    param_1[0xd7] = uVar3;
    return;
  }
  *param_1 = uVar3 & 0xfffffffd;
  puVar2 = param_1 + ((uVar3 >> 3) - 1);
  puVar5 = param_1;
  do {
    puVar5 = puVar5 + 1;
    piVar4 = (int *)*puVar5;
    if (piVar4 != (int *)0x0) {
      *puVar5 = 0;
      do {
        piVar7 = (int *)piVar4[2];
        uVar3 = piVar4[1] & 0xfffffffe;
        uVar12 = CONCAT44(puVar2,(int)piVar4 + uVar3);
        uVar9 = *(uint *)((int)piVar4 + uVar3 + 4) & 0xfffffffc;
        if ((piVar4[1] & 1U) != 0) goto LAB_00020edc;
        iVar6 = *piVar4;
        piVar4 = (int *)((int)piVar4 - iVar6);
        uVar3 = uVar3 + iVar6;
        uVar8 = piVar4[2];
        iVar6 = piVar4[3];
        if (*(int **)(uVar8 + 0xc) == piVar4) goto LAB_00020ec8;
        do {
          do {
            puVar11 = (uint *)0x20ec8;
            uVar12 = FUN_00021c14();
            uVar3 = extraout_r2;
            piVar4 = extraout_r3;
            uVar9 = extraout_r12;
LAB_00020ec8:
          } while (*(int **)(iVar6 + 8) != piVar4);
          *(int *)(uVar8 + 0xc) = iVar6;
          *(uint *)(iVar6 + 8) = uVar8;
LAB_00020edc:
          puVar2 = (uint *)((ulonglong)uVar12 >> 0x20);
          uVar1 = (uint)uVar12;
          if (param_1[0xb] == uVar1) {
            piVar4[1] = uVar3 + uVar9 | 1;
            param_1[0xb] = (uint)piVar4;
            goto LAB_00020f48;
          }
          uVar8 = *(uint *)(uVar1 + uVar9 + 4);
          *(uint *)(uVar1 + 4) = uVar9;
          if ((uVar8 & 1) != 0) goto LAB_00020f28;
          iVar6 = *(int *)(uVar1 + 8);
          uVar3 = uVar3 + uVar9;
          iVar10 = *(int *)(uVar1 + 0xc);
          uVar8 = *(uint *)(iVar6 + 0xc);
        } while ((uVar8 != uVar1) || (uVar8 = *(uint *)(iVar10 + 8), uVar8 != uVar1));
        *(int *)(iVar6 + 0xc) = iVar10;
        *(int *)(iVar10 + 8) = iVar6;
LAB_00020f28:
        uVar9 = param_1[0xf];
        param_1[0xf] = (uint)piVar4;
        *(int **)(uVar9 + 0xc) = piVar4;
        piVar4[1] = uVar3 | 1;
        piVar4[3] = (int)puVar11;
        piVar4[2] = uVar9;
        *(uint *)((int)piVar4 + uVar3) = uVar3;
LAB_00020f48:
        piVar4 = piVar7;
      } while (piVar7 != (int *)0x0);
    }
    if (puVar2 == puVar5) {
      return;
    }
  } while( true );
}



/* ===== FUN_00021048 @ 00021048 size=516 ===== */

void FUN_00021048(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint extraout_r2;
  uint uVar5;
  int extraout_r3;
  int iVar6;
  uint uVar7;
  int iVar8;
  int extraout_r12;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_20 [16];
  
  if (param_1 != (uint *)0x0) {
    iVar6 = DAT_00021254 + 0x2107c;
    FUN_000225d0(auStack_20,*(undefined4 *)(DAT_0002124c + 0x21060 + DAT_00021250),iVar6);
    FUN_000225c0(iVar6);
    iVar6 = DAT_00021258;
    uVar7 = param_1[-1];
    puVar1 = param_1 + -2;
    puVar4 = (uint *)(DAT_00021258 + 0x210a4);
    uVar3 = uVar7 & 0xfffffffc;
    uVar10 = CONCAT44(uVar7,puVar1) & 0xfffffffcffffffff;
    uVar5 = *puVar4;
    if (uVar5 < uVar3) {
      if ((uVar7 & 2) == 0) {
        *puVar4 = uVar5 | 1;
        iVar6 = (int)puVar1 + uVar3;
        uVar5 = *(uint *)(iVar6 + 4) & 0xfffffffc;
        if ((uVar7 & 1) != 0) goto LAB_00021140;
        iVar2 = (int)puVar1 - param_1[-2];
        uVar10 = CONCAT44(uVar3 + param_1[-2],iVar2);
        iVar9 = *(int *)(iVar2 + 8);
        iVar8 = *(int *)(iVar2 + 0xc);
        if (iVar2 == *(int *)(iVar9 + 0xc)) goto LAB_0002112c;
        do {
          do {
            iVar9 = 0x2112c;
            uVar10 = FUN_00021c14();
            uVar5 = extraout_r2;
            iVar6 = extraout_r3;
            iVar8 = extraout_r12;
LAB_0002112c:
          } while ((int)uVar10 != *(int *)(iVar8 + 8));
          *(int *)(iVar9 + 0xc) = iVar8;
          *(int *)(iVar8 + 8) = iVar9;
LAB_00021140:
          iVar8 = DAT_0002125c;
          uVar3 = (uint)(uVar10 >> 0x20);
          iVar2 = (int)uVar10;
          if (iVar6 == *(int *)(DAT_0002125c + 0x21178)) {
            uVar3 = uVar3 + uVar5;
            *(uint *)(iVar2 + 4) = uVar3 | 1;
            *(int *)(iVar8 + 0x21178) = iVar2;
            goto LAB_000211c0;
          }
          uVar7 = *(uint *)(iVar6 + uVar5 + 4);
          *(uint *)(iVar6 + 4) = uVar5;
          if ((uVar7 & 1) != 0) goto LAB_00021194;
          iVar9 = *(int *)(iVar6 + 8);
          iVar8 = *(int *)(iVar6 + 0xc);
        } while ((iVar6 != *(int *)(iVar9 + 0xc)) || (iVar6 != *(int *)(iVar8 + 8)));
        uVar3 = uVar3 + uVar5;
        *(int *)(iVar9 + 0xc) = iVar8;
        *(int *)(iVar8 + 8) = iVar9;
LAB_00021194:
        iVar6 = DAT_00021260;
        iVar8 = *(int *)(DAT_00021260 + 0x211dc);
        *(int *)(iVar2 + 0xc) = DAT_00021260 + 0x211d4;
        *(int *)(iVar2 + 8) = iVar8;
        *(int *)(iVar6 + 0x211dc) = iVar2;
        *(int *)(iVar8 + 0xc) = iVar2;
        *(uint *)(iVar2 + 4) = uVar3 | 1;
        *(uint *)(iVar2 + uVar3) = uVar3;
LAB_000211c0:
        if (0x1ffff < uVar3) {
          if ((*(uint *)(DAT_00021264 + 0x211d4) & 2) != 0) {
            FUN_00020e38();
          }
          if (*(uint *)(DAT_00021268 + 0x21530) <=
              (*(uint *)(*(int *)(DAT_00021268 + 0x21218) + 4) & 0xfffffffc)) {
            FUN_00020d8c(*(undefined4 *)(DAT_00021268 + 0x21534));
          }
        }
      }
      else {
        uVar5 = param_1[-2];
        *(int *)(DAT_00021258 + 0x213f4) = *(int *)(DAT_00021258 + 0x213f4) + -1;
        *(uint *)(iVar6 + 0x21408) = *(int *)(iVar6 + 0x21408) - (uVar3 + uVar5);
        FUN_00026fac((int)puVar1 - uVar5);
      }
    }
    else {
      *puVar4 = uVar5 | 3;
      *param_1 = puVar4[(uVar7 >> 3) - 1];
      puVar4[(uVar7 >> 3) - 1] = (uint)puVar1;
    }
    FUN_000225d8(auStack_20,1);
  }
  return;
}



/* ===== FUN_0002126c @ 0002126c size=116 ===== */

int FUN_0002126c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1 >> 8;
  if (uVar1 < 0x10000) {
    uVar2 = uVar1 - 0x100 >> 0x10 & 8;
    iVar3 = uVar1 << uVar2;
    uVar5 = iVar3 - 0x1000U >> 0x10 & 4;
    iVar3 = iVar3 << uVar5;
    uVar4 = iVar3 - 0x4000U >> 0x10 & 2;
    uVar1 = iVar3 << uVar4;
    iVar3 = (uVar1 >> 0xe & ~(uVar1 >> 0xf)) - ((uVar2 | uVar5) + uVar4);
    return (param_1 >> (iVar3 + 0x13U & 0xff) & 3) + iVar3 * 4 + 0x54;
  }
  return 0x5f;
}



/* ===== FUN_000212e0 @ 000212e0 size=2236 ===== */

int * FUN_000212e0(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int extraout_r3;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int extraout_r12;
  bool bVar25;
  undefined8 uVar26;
  undefined1 auStack_38 [20];
  
  if (0xffffffdf < param_1) {
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar4 + *(int *)(DAT_00021ba0 + 0x21310)) = 0xc;
    return (int *)0x0;
  }
  param_1 = param_1 + 0xb;
  uVar10 = param_1;
  if (0xf < param_1) {
    uVar10 = param_1 & 0xfffffff8;
  }
  iVar4 = DAT_00021ba8 + 0x21340;
  if (param_1 < 0x10) {
    uVar10 = 0x10;
  }
  FUN_000225d0(auStack_38,*(undefined4 *)(DAT_00021b9c + 0x212f4 + DAT_00021ba4),iVar4);
  FUN_000225c0(iVar4);
  puVar1 = (uint *)(DAT_00021bac + 0x21364);
  uVar15 = *puVar1;
  uVar5 = uVar15 & 1;
  if (uVar5 != 0) {
    if (uVar10 <= uVar15) {
      iVar4 = *(int *)((int)puVar1 + ((uVar10 >> 1) - 4));
      if (iVar4 != 0) {
        piVar12 = (int *)(iVar4 + 8);
        *(int *)((int)puVar1 + ((uVar10 >> 1) - 4)) = *piVar12;
        goto LAB_000214f4;
      }
    }
    if (uVar10 < 0x100) {
      uVar13 = uVar10 >> 3;
      iVar4 = uVar10 + DAT_00021bb4 + 0x21438;
      iVar11 = *(int *)(iVar4 + 4);
      if (iVar4 + -8 != iVar11) {
        iVar20 = *(int *)(iVar11 + 0xc);
        *(uint *)(iVar11 + uVar10 + 4) = *(uint *)(iVar11 + uVar10 + 4) | 1;
        *(int *)(iVar4 + 4) = iVar20;
        *(int *)(iVar20 + 8) = iVar4 + -8;
        goto LAB_00021430;
      }
    }
    else {
      uVar13 = FUN_0002126c(uVar10);
      if ((uVar15 & 2) != 0) {
        FUN_00020e38(DAT_00021bb8 + 0x21458);
      }
    }
    iVar20 = DAT_00021bc0;
    iVar4 = DAT_00021bbc;
    iVar19 = DAT_00021bbc + 0x21470;
    iVar16 = DAT_00021bc0 + 0x21478;
    iVar3 = DAT_00021bbc + 0x214a4;
    iVar22 = DAT_00021bc0 + 0x214ac;
    iVar21 = *(int *)(DAT_00021bc0 + 0x214a8);
    iVar6 = DAT_00021bc4 + 0x21490;
    while (iVar11 = *(int *)(iVar20 + 0x214b8), iVar11 != iVar22) {
      iVar7 = *(int *)(iVar11 + 0xc);
      uVar15 = *(uint *)(iVar11 + 4);
      bVar25 = uVar10 == 0xff;
      if (uVar10 < 0x100) {
        bVar25 = iVar7 == iVar22;
      }
      uVar18 = uVar15 & 0xfffffffc;
      if (((bVar25) && (iVar21 == iVar11)) && (uVar10 + 0x10 < uVar18)) {
        iVar4 = iVar21 + uVar10;
        piVar12 = (int *)(iVar21 + 8);
        *(int *)(iVar20 + 0x214b4) = iVar4;
        *(int *)(iVar20 + 0x214b8) = iVar4;
        *(int *)(iVar20 + 0x214a8) = iVar4;
        *(int *)(iVar4 + 8) = iVar22;
        *(int *)(iVar4 + 0xc) = iVar22;
        *(uint *)(iVar21 + 4) = uVar10 | 1;
        *(uint *)(iVar4 + 4) = uVar18 - uVar10 | 1;
        *(uint *)(iVar21 + uVar18) = uVar18 - uVar10;
        goto LAB_000214f4;
      }
      *(int *)(iVar4 + 0x214b0) = iVar7;
      *(int *)(iVar7 + 8) = iVar3;
      if (uVar10 == uVar18) {
        *(uint *)(iVar11 + uVar10 + 4) = *(uint *)(iVar11 + uVar10 + 4) | 1;
        goto LAB_00021430;
      }
      if (uVar18 < 0x100) {
        uVar15 = uVar15 >> 3;
        iVar8 = uVar15 * 2 + 0xd;
        iVar7 = iVar19 + iVar8 * 4 + -8;
        iVar8 = *(int *)(iVar19 + iVar8 * 4);
      }
      else {
        uVar15 = FUN_0002126c(uVar18);
        iVar7 = uVar15 * 2 + 0xd;
        iVar23 = iVar19 + iVar7 * 4;
        iVar9 = *(int *)(iVar19 + iVar7 * 4);
        iVar24 = iVar23 + -8;
        iVar7 = iVar9;
        iVar8 = iVar9;
        if ((iVar24 != iVar9) &&
           (iVar7 = *(int *)(iVar23 + 4), iVar8 = iVar24, *(uint *)(iVar7 + 4) <= uVar18)) {
          for (; (uVar18 | 1) < *(uint *)(iVar9 + 4); iVar9 = *(int *)(iVar9 + 8)) {
          }
          iVar7 = *(int *)(iVar9 + 0xc);
          iVar8 = iVar9;
        }
      }
      iVar23 = iVar6 + (((int)uVar15 >> 5) + 0xcc) * 4;
      *(uint *)(iVar23 + 4) = *(uint *)(iVar23 + 4) | 1 << (uVar15 & 0x1f);
      *(int *)(iVar11 + 0xc) = iVar7;
      *(int *)(iVar11 + 8) = iVar8;
      *(int *)(iVar8 + 0xc) = iVar11;
      *(int *)(iVar7 + 8) = iVar11;
    }
    if (uVar10 < 0x100) {
LAB_0002159c:
      uVar13 = uVar13 + 1;
      uVar15 = uVar13 >> 5;
      iVar4 = uVar13 * 8 + 0x2c + DAT_00021bc8 + 0x215b8;
      iVar20 = DAT_00021bcc + 0x215cc;
      uVar18 = *(uint *)(DAT_00021bc8 + 0x215b8 + uVar15 * 4 + 0x334);
      iVar11 = DAT_00021bcc + 0x21900;
      uVar13 = 1 << (uVar13 & 0x1f);
      iVar3 = DAT_00021bd0 + 0x215e4;
      while( true ) {
        uVar26 = CONCAT44(uVar18,uVar15);
        if (uVar18 < uVar13 || uVar13 == 0) {
          do {
            uVar15 = uVar15 + 1;
            if (2 < uVar15) goto LAB_0002137c;
            iVar4 = *(int *)(iVar11 + uVar15 * 4);
            uVar26 = CONCAT44(iVar4,uVar15);
          } while (iVar4 == 0);
          iVar4 = iVar20 + uVar15 * 0x100 + 0x2c;
          uVar13 = uVar5;
        }
        while( true ) {
          uVar18 = (uint)((ulonglong)uVar26 >> 0x20);
          uVar15 = (uint)uVar26;
          if ((uVar13 & uVar18) != 0) break;
LAB_00021748:
          iVar4 = iVar4 + 8;
          uVar13 = uVar13 << 1;
        }
        iVar6 = *(int *)(iVar4 + 0xc);
        if (iVar4 != iVar6) break;
        uVar18 = uVar18 & ~uVar13;
        iVar4 = iVar4 + 8;
        uVar13 = uVar13 << 1;
        *(uint *)(iVar3 + uVar15 * 4 + 0x334) = uVar18;
      }
      piVar12 = (int *)(iVar6 + 8);
      iVar11 = *(int *)(iVar6 + 0xc);
      uVar5 = *(uint *)(iVar6 + 4) & 0xfffffffc;
      uVar15 = uVar5 - uVar10;
      *(int *)(iVar4 + 0xc) = iVar11;
      *(int *)(iVar11 + 8) = iVar4;
      iVar4 = DAT_00021bd8;
      if (uVar15 < 0x10) {
        *(uint *)(iVar6 + uVar5 + 4) = *(uint *)(iVar6 + uVar5 + 4) | 1;
      }
      else {
        iVar11 = iVar6 + uVar10;
        iVar20 = DAT_00021bd8 + 0x217d4;
        *(int *)(DAT_00021bd8 + 0x217dc) = iVar11;
        *(int *)(iVar4 + 0x217e0) = iVar11;
        *(int *)(iVar11 + 8) = iVar20;
        *(int *)(iVar11 + 0xc) = iVar20;
        if (uVar10 < 0x100) {
          *(int *)(iVar4 + 0x217d0) = iVar11;
        }
        *(uint *)(iVar6 + 4) = uVar10 | 1;
        *(uint *)(iVar11 + 4) = uVar15 | 1;
        *(uint *)(iVar6 + uVar5) = uVar15;
      }
    }
    else {
      iVar16 = iVar16 + uVar13 * 8;
      iVar4 = *(int *)(iVar16 + 0x38);
      do {
        iVar20 = iVar4;
        if (iVar20 == iVar16 + 0x2c) goto LAB_0002159c;
        iVar4 = *(int *)(iVar20 + 0xc);
        uVar15 = *(uint *)(iVar20 + 4) & 0xfffffffc;
      } while (uVar15 < uVar10);
      iVar3 = *(int *)(iVar20 + 8);
      uVar18 = uVar15 - uVar10;
      if ((*(int *)(iVar3 + 0xc) != iVar20) || (*(int *)(iVar4 + 8) != iVar20)) {
        iVar3 = 0x21748;
        uVar26 = FUN_00021c14();
        iVar4 = extraout_r3;
        iVar20 = extraout_r12;
        goto LAB_00021748;
      }
      *(int *)(iVar3 + 0xc) = iVar4;
      *(int *)(iVar4 + 8) = iVar3;
      iVar4 = DAT_00021bd4;
      piVar12 = (int *)(iVar20 + 8);
      if (uVar18 < 0x10) {
        *(uint *)(iVar20 + uVar15 + 4) = *(uint *)(iVar20 + uVar15 + 4) | 1;
      }
      else {
        iVar3 = iVar20 + uVar10;
        iVar11 = DAT_00021bd4 + 0x21714;
        *(int *)(DAT_00021bd4 + 0x2171c) = iVar3;
        *(int *)(iVar4 + 0x21720) = iVar3;
        *(int *)(iVar3 + 8) = iVar11;
        *(int *)(iVar3 + 0xc) = iVar11;
        *(uint *)(iVar20 + 4) = uVar10 | 1;
        *(uint *)(iVar3 + 4) = uVar18 | 1;
        *(uint *)(iVar20 + uVar15) = uVar18;
      }
    }
    goto LAB_000214f4;
  }
  if (uVar15 == 0) {
    FUN_00020e38();
  }
LAB_0002137c:
  uVar5 = uVar10 + 0x10;
  iVar11 = *(int *)(DAT_00021bb0 + 0x213bc);
  uVar15 = *(uint *)(iVar11 + 4) & 0xfffffffc;
  if (uVar15 < uVar5) {
    iVar4 = *(int *)(DAT_00021bb0 + 0x216ec);
    iVar11 = iVar4 + -1;
    if ((*(uint *)(DAT_00021bb0 + 0x21390) & 2) != 0) {
      FUN_00020e38((uint *)(DAT_00021bb0 + 0x21390));
      piVar12 = (int *)FUN_000212e0(uVar10 - 7);
      goto LAB_000214f4;
    }
    uVar15 = -iVar4;
    if ((((*(uint *)(DAT_00021bb0 + 0x216dc) <= uVar10) &&
         (*(int *)(DAT_00021bb0 + 0x216e0) < *(int *)(DAT_00021bb0 + 0x216e4))) &&
        (uVar13 = iVar4 + 10 + uVar10 & uVar15, uVar10 < uVar13)) &&
       (piVar12 = (int *)FUN_00026d50(0,uVar13,3,0x22,0,0,uVar5), iVar4 = DAT_00021bdc,
       piVar12 != (int *)0xffffffff)) {
      if (((uint)piVar12 & 7) == 0) {
        *piVar12 = 0;
        uVar10 = uVar13;
      }
      else {
        iVar11 = 8 - ((uint)piVar12 & 7);
        piVar12 = (int *)((int)piVar12 + iVar11);
        *piVar12 = iVar11;
        uVar10 = uVar13 - iVar11;
      }
      piVar12[1] = uVar10 | 2;
      iVar11 = *(int *)((int)&DAT_00021bb0 + iVar4) + 1;
      *(int *)((int)&DAT_00021bb0 + iVar4) = iVar11;
      if (*(int *)((int)&DAT_00021bb8 + iVar4) < iVar11) {
        *(int *)((int)&DAT_00021bb8 + iVar4) = iVar11;
      }
      iVar4 = DAT_00021be0;
      puVar1 = (uint *)((int)&DAT_00021c04 + DAT_00021be0);
      uVar13 = uVar13 + *(int *)((int)&DAT_00021bf8 + DAT_00021be0);
      *(uint *)((int)&DAT_00021bf8 + DAT_00021be0) = uVar13;
      if (*puVar1 < uVar13) {
        *(uint *)((int)&DAT_00021c04 + iVar4) = uVar13;
      }
      piVar12 = piVar12 + 2;
      uVar13 = uVar13 + *(int *)(DAT_00021be4 + 0x21c20);
      if (*(uint *)(DAT_00021be4 + 0x21c2c) < uVar13) {
        *(uint *)(DAT_00021be4 + 0x21c2c) = uVar13;
      }
      goto LAB_000214f4;
    }
    iVar20 = *(int *)(DAT_00021be8 + 0x21904);
    iVar4 = *(int *)(DAT_00021be8 + 0x21c20) + 0x10 + uVar10;
    uVar13 = *(uint *)(iVar20 + 4) & 0xfffffffc;
    if ((*(uint *)(DAT_00021be8 + 0x21c38) & 1) != 0) {
      iVar4 = iVar4 - uVar13;
    }
    uVar18 = iVar20 + uVar13;
    uVar14 = iVar11 + iVar4 & uVar15;
    if (((int)uVar14 < 1) || (uVar2 = FUN_00026ce4(uVar14), uVar2 == 0xffffffff)) {
      if ((*(uint *)(DAT_00021bec + 0x21c78) & 1) != 0) {
        uVar14 = iVar11 + uVar13 + uVar14 & uVar15;
      }
      if (uVar14 < 0x100000) {
        uVar14 = 0x100000;
      }
      if ((uVar10 < uVar14) &&
         (uVar2 = FUN_00026d50(0,uVar14,3,0x22,0,0,uVar5), uVar2 != 0xffffffff)) {
        uVar5 = uVar2 + uVar14;
        *(uint *)(DAT_00021bf0 + 0x21cd0) = *(uint *)(DAT_00021bf0 + 0x21cd0) & 0xfffffffe;
        goto LAB_00021994;
      }
    }
    else {
      uVar5 = 0xffffffff;
LAB_00021994:
      iVar4 = DAT_00021bf4;
      iVar3 = uVar14 + *(int *)((int)&DAT_00021d10 + DAT_00021bf4);
      if (uVar18 == uVar2 && uVar5 == 0xffffffff) {
        uVar14 = uVar13 + uVar14;
      }
      *(int *)((int)&DAT_00021d10 + DAT_00021bf4) = iVar3;
      if (uVar18 == uVar2 && uVar5 == 0xffffffff) {
        *(uint *)(iVar20 + 4) = uVar14 | 1;
      }
      else {
        if ((*(uint *)(iVar4 + 0x21d08) & 1) == 0) {
LAB_00021b64:
          uVar18 = uVar2;
          if (uVar5 == 0xffffffff) {
            uVar5 = FUN_00026ce4(0);
            *(uint *)(DAT_00021c10 + 0x21ef0) =
                 ((uVar5 - uVar2) - uVar14) + *(int *)(DAT_00021c10 + 0x21ef0);
LAB_00021a34:
            uVar18 = uVar2;
            if (uVar5 == 0xffffffff) goto LAB_00021ab0;
          }
          iVar4 = 0;
        }
        else {
          bVar25 = uVar13 == 0;
          if (!bVar25 && uVar2 < uVar18) {
            *(uint *)(iVar4 + 0x21d08) = *(uint *)(iVar4 + 0x21d08) & 0xfffffffe;
          }
          if ((bVar25 || uVar2 <= uVar18) && (!bVar25 && uVar18 != uVar2)) goto LAB_00021b64;
          if (uVar13 != 0) {
            uVar18 = uVar2 - uVar18;
            *(uint *)((int)&DAT_00021d10 + iVar4) = uVar18 + iVar3;
          }
          uVar5 = uVar2 & 7;
          iVar4 = 0;
          if (uVar5 != 0) {
            iVar4 = 8 - uVar5;
            uVar18 = uVar2 + iVar4;
          }
          if (uVar5 == 0) {
            uVar18 = uVar2;
          }
          iVar3 = uVar2 + uVar14 + iVar4 + uVar13;
          iVar4 = (uVar15 & iVar11 + iVar3) + ((iVar4 + uVar13) - iVar3);
          uVar5 = FUN_00026ce4(iVar4);
          if (uVar5 == 0xffffffff) {
            uVar5 = FUN_00026ce4(0);
            uVar2 = uVar18;
            goto LAB_00021a34;
          }
          if (uVar5 < uVar2) {
            uVar5 = uVar2 + uVar14;
            *(uint *)(&UNK_00021e9c + DAT_00021c08) =
                 *(uint *)(&UNK_00021e9c + DAT_00021c08) & 0xfffffffe;
            uVar2 = uVar18;
            goto LAB_00021a34;
          }
        }
        iVar11 = DAT_00021bf8;
        iVar3 = *(int *)(&UNK_00021dc0 + DAT_00021bf8);
        *(uint *)(DAT_00021bf8 + 0x21a84) = uVar18;
        *(uint *)(uVar18 + 4) = (uVar5 - uVar18) + iVar4 | 1;
        *(int *)(&UNK_00021dc0 + iVar11) = iVar3 + iVar4;
        if (uVar13 != 0) {
          uVar5 = uVar13 - 0xc & 0xfffffff8;
          *(uint *)(iVar20 + 4) = uVar5 | 1;
          *(undefined4 *)(iVar20 + uVar5 + 4) = 5;
          *(undefined4 *)(iVar20 + uVar5 + 8) = 5;
          if (0xf < uVar5) {
            uVar17 = *(undefined4 *)(&UNK_00021d9c + iVar11);
            *(undefined4 *)(&UNK_00021d9c + iVar11) = 0xffffffff;
            FUN_00021048(iVar20 + 8);
            *(undefined4 *)(&UNK_00021d9c + iVar11) = uVar17;
          }
        }
      }
LAB_00021ab0:
      uVar5 = *(uint *)(&UNK_00021e24 + DAT_00021bfc);
      if (*(uint *)(&UNK_00021e28 + DAT_00021bfc) < uVar5) {
        *(uint *)(&UNK_00021e28 + DAT_00021bfc) = uVar5;
      }
      iVar4 = DAT_00021c04;
      if (*(uint *)(&UNK_00021e48 + DAT_00021c00) < uVar5 + *(int *)(&UNK_00021e38 + DAT_00021c00))
      {
        *(uint *)(&UNK_00021e48 + DAT_00021c00) = uVar5 + *(int *)(&UNK_00021e38 + DAT_00021c00);
      }
      iVar11 = *(int *)(iVar4 + 0x21b20);
      uVar5 = *(uint *)(iVar11 + 4) & 0xfffffffc;
      if (uVar10 + 0x10 <= uVar5) {
        *(uint *)(iVar4 + 0x21b20) = iVar11 + uVar10;
        *(uint *)(iVar11 + 4) = uVar10 | 1;
        *(uint *)(iVar11 + uVar10 + 4) = uVar5 - uVar10 | 1;
        goto LAB_00021430;
      }
    }
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    piVar12 = (int *)0x0;
    *(undefined4 *)(iVar4 + *(int *)(DAT_00021c0c + 0x21b60)) = 0xc;
  }
  else {
    *(uint *)(DAT_00021bb0 + 0x213bc) = iVar11 + uVar10;
    *(uint *)(iVar11 + 4) = uVar10 | 1;
    *(uint *)(iVar11 + uVar10 + 4) = uVar15 - uVar10 | 1;
LAB_00021430:
    piVar12 = (int *)(iVar11 + 8);
  }
LAB_000214f4:
  FUN_000225d8(auStack_38,1);
  return piVar12;
}



/* ===== FUN_00021c14 @ 00021c14 size=252 ===== */

void FUN_00021c14(void)

{
  int *piVar1;
  int iVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_000225c0(DAT_00021d10 + 0x21c24);
  local_20 = 0;
  local_24 = 0x20;
  FUN_000270bc(1,&local_24);
  if (*(int *)(DAT_00021d14 + 0x21c50) != 0) goto LAB_00021c80;
  *(int *)(DAT_00021d14 + 0x21c50) = 1;
  while( true ) {
    iVar2 = DAT_00021d18 + 0x21c6c;
    FUN_000225c0(iVar2);
    FUN_00022b6c(6);
    FUN_000225c0(iVar2);
LAB_00021c80:
    piVar1 = (int *)(DAT_00021d1c + 0x21c8c);
    if (*piVar1 != 1) break;
    *piVar1 = 2;
    FUN_00020350(auStack_1c,0,0x14);
    local_10 = 0xffffffff;
    local_c = 0xffffffff;
    FUN_00026958(6,auStack_1c,0);
  }
  if (*piVar1 == 2) {
    *piVar1 = 3;
    FUN_00021c14();
  }
  if (*(int *)(DAT_00021d20 + 0x21cf0) == 3) {
    *(int *)(DAT_00021d20 + 0x21cf0) = 4;
    FUN_00026cac(0x7f);
  }
  do {
    FUN_00021c14();
  } while( true );
}



/* ===== thunk_FUN_00021ec0 @ 00021d24 size=4 ===== */

undefined4 thunk_FUN_00021ec0(void)

{
  int iVar1;
  undefined4 uStack_24;
  undefined1 auStack_20 [20];
  
  iVar1 = DAT_00021f30 + 0x21ee8;
  FUN_000225d0(auStack_20,*(undefined4 *)(DAT_00021f28 + 0x21ed0 + DAT_00021f2c),iVar1);
  FUN_000225c0(iVar1);
  FUN_00021f38(DAT_00021f34 + 0x21f10,&uStack_24);
  FUN_000225d8(auStack_20,1);
  return uStack_24;
}



/* ===== FUN_00021ec0 @ 00021ec0 size=104 ===== */

undefined4 FUN_00021ec0(void)

{
  int iVar1;
  undefined4 local_24;
  undefined1 auStack_20 [20];
  
  iVar1 = DAT_00021f30 + 0x21ee8;
  FUN_000225d0(auStack_20,*(undefined4 *)(DAT_00021f28 + 0x21ed0 + DAT_00021f2c),iVar1);
  FUN_000225c0(iVar1);
  FUN_00021f38(DAT_00021f34 + 0x21f10,&local_24);
  FUN_000225d8(auStack_20,1);
  return local_24;
}



/* ===== FUN_00021f38 @ 00021f38 size=124 ===== */

undefined4 FUN_00021f38(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar6 = (uint *)param_1[2];
  if ((char)param_1[3] == '\0') {
    uVar2 = DAT_00021fb4 * *puVar6 + 0x3039 & 0x7fffffff;
    *puVar6 = uVar2;
    *param_2 = uVar2;
  }
  else {
    puVar3 = (uint *)*param_1;
    puVar5 = (uint *)param_1[4];
    puVar1 = (uint *)((int *)param_1[1] + 1);
    uVar2 = *puVar3 + *(int *)param_1[1];
    puVar4 = puVar3 + 1;
    *puVar3 = uVar2;
    *param_2 = uVar2 >> 1;
    puVar3 = puVar6;
    if ((puVar4 < puVar5) && (puVar3 = puVar4, puVar5 <= puVar1)) {
      puVar1 = puVar6;
    }
    *param_1 = (uint)puVar3;
    param_1[1] = (uint)puVar1;
  }
  return 0;
}



/* ===== FUN_0002223c @ 0002223c size=12 ===== */

void FUN_0002223c(undefined4 param_1)

{
  FUN_00022248(param_1,0,10);
  return;
}



/* ===== FUN_00022248 @ 00022248 size=428 ===== */

uint FUN_00022248(byte *param_1,undefined4 *param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  uint extraout_r1;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  ushort uVar11;
  undefined4 uVar12;
  
  pbVar6 = param_1;
  do {
    pbVar9 = pbVar6;
    uVar7 = (uint)*pbVar9;
    pbVar6 = pbVar9 + 1;
    uVar1 = *(ushort *)(*(int *)(DAT_000223f4 + 0x22274) + uVar7 * 2);
    uVar11 = uVar1 & 0x20;
  } while ((uVar1 & 0x20) != 0);
  if (uVar7 == 0x2b) {
LAB_000222a0:
    pbVar9 = pbVar9 + 1;
  }
  else if (uVar7 == 0x2d) {
    uVar11 = 1;
    goto LAB_000222a0;
  }
  if ((param_3 & 0xffffffef) == 0) {
    uVar7 = (uint)*pbVar9;
    if (uVar7 == 0x30) {
      param_3 = param_3 + 8;
      param_1 = pbVar9 + 1;
      uVar7 = pbVar9[1] | 0x20;
      pbVar10 = param_1;
      if (uVar7 == 0x78) {
        param_3 = param_3 * 2;
        pbVar10 = pbVar9 + 2;
      }
    }
    else {
      param_3 = param_3 + 10;
      pbVar10 = pbVar9;
    }
    pbVar9 = pbVar10;
    if (0xf < (int)param_3) {
      param_3 = 0x10;
    }
  }
  else {
    uVar7 = param_3 - 2;
    if (0x22 < uVar7) {
      uVar7 = 0;
      goto LAB_00022398;
    }
  }
  FUN_0001bda0(0xffffffff,param_3,pbVar6,uVar7,1);
  uVar3 = FUN_0001bcf8(0xffffffff,param_3);
  iVar8 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar2 = false;
  uVar12 = *(undefined4 *)(iVar8 + *(int *)(DAT_000223f8 + 0x22314));
  uVar7 = 0;
  while( true ) {
    pbVar6 = pbVar9 + 1;
    uVar5 = (uint)(byte)(*pbVar9 - 0x30);
    if (9 < uVar5) {
      bVar4 = *pbVar9 | 0x20;
      if (bVar4 < 0x61) {
        uVar5 = 0x28;
      }
      else {
        uVar5 = (uint)(byte)(bVar4 + 0xa9);
      }
    }
    if ((int)param_3 <= (int)uVar5) break;
    pbVar9 = pbVar6;
    param_1 = pbVar6;
    if ((uVar3 < uVar7) || ((extraout_r1 & 0xff) < uVar5 && uVar7 == uVar3)) {
      uVar11 = uVar11 & 1;
      bVar2 = true;
      uVar12 = 0x22;
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = uVar7 * param_3 + uVar5;
    }
  }
  if (bVar2) {
    *(undefined4 *)(iVar8 + *(int *)(DAT_00022400 + 0x223f0)) = uVar12;
  }
LAB_00022398:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  if (uVar11 == 0) {
    uVar3 = 0x7fffffff;
  }
  else {
    uVar3 = 0x80000000;
  }
  if (uVar3 < uVar7) {
    iVar8 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar8 + *(int *)(DAT_000223fc + 0x223cc)) = 0x22;
    uVar7 = uVar3;
  }
  if (uVar11 != 0) {
    uVar7 = -uVar7;
  }
  return uVar7;
}



/* ===== FUN_00022404 @ 00022404 size=140 ===== */

/* WARNING: Control flow encountered bad instruction data */

void FUN_00022404(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar3 = DAT_00022490 + 0x22424;
  uVar1 = *(undefined4 *)(iVar3 + DAT_00022494);
  iVar2 = DAT_00022498 + 0x22430;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_000225d0(&uStack_18,uVar1,iVar2,uVar1,param_1,uVar1);
  FUN_000225c0(iVar2);
  if (*(code **)(DAT_0002249c + 0x22450) != (code *)0x0) {
    (**(code **)(DAT_0002249c + 0x22450))(param_1);
  }
  FUN_000225d8(&uStack_18,1);
  FUN_000226e0();
  if (*(int *)(iVar3 + DAT_000224a0) != 0) {
    FUN_0001e28c();
  }
  FUN_00026cac(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== FUN_000224a4 @ 000224a4 size=148 ===== */

void FUN_000224a4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iStack_20;
  int *local_1c;
  int aiStack_8 [2];
  
  aiStack_8[1] = param_4;
  aiStack_8[0] = param_3;
  piVar1 = aiStack_8;
  iVar5 = 0;
  do {
    iVar2 = iVar5;
    iVar4 = *piVar1;
    iVar5 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar4 != 0);
  iVar2 = -(iVar2 * 4 + 0xfU & 0xfffffff8);
  piVar3 = (int *)((int)&iStack_20 + iVar2);
  local_1c = aiStack_8;
  *(undefined4 *)((int)&iStack_20 + iVar2) = param_2;
  piVar1 = aiStack_8;
  do {
    iVar5 = iVar5 + -1;
    piVar3 = piVar3 + 1;
    *piVar3 = *piVar1;
    piVar1 = piVar1 + 1;
  } while (iVar5 != 0);
  FUN_00026a74(param_1,(int)&iStack_20 + iVar2,
               **(undefined4 **)(DAT_00022538 + 0x224cc + DAT_0002253c));
  return;
}



/* ===== FUN_00022540 @ 00022540 size=60 ===== */

void FUN_00022540(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint local_10;
  int local_c;
  undefined4 uStack_8;
  
  local_10 = (uint)((ulonglong)DAT_0002257c * (ulonglong)param_1 >> 0x32);
  local_c = (param_1 - DAT_00022580 * local_10) * 1000;
  uStack_8 = param_3;
  FUN_00026fe0(&local_10,0);
  return;
}



/* ===== FUN_00022584 @ 00022584 size=60 ===== */

int FUN_00022584(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00026f1c(param_1,1);
  if (iVar1 != -1) {
    return iVar1;
  }
  iVar1 = FUN_00026bd4(iRam000225bc + 0x225b0,param_2);
  if (param_1 == iVar1) {
    return iVar1;
  }
  FUN_00021c14();
  return 0;
}



/* ===== FUN_000225c0 @ 000225c0 size=8 ===== */

undefined4 FUN_000225c0(void)

{
  return 0;
}



/* ===== FUN_000225d0 @ 000225d0 size=8 ===== */

void FUN_000225d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* ===== FUN_000225d8 @ 000225d8 size=20 ===== */

void FUN_000225d8(undefined4 *param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000225e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_1[1]);
  return;
}



/* ===== FUN_000225ec @ 000225ec size=220 ===== */

void FUN_000225ec(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_1c;
  uint local_18;
  uint uStack_14;
  
  iVar3 = DAT_000226cc + 0x2260c;
  if (*(int *)(DAT_000226c8 + 0x225fc) != 0) {
    return;
  }
  *(int *)(DAT_000226c8 + 0x225fc) = 0x1000;
  FUN_00022d30(8,0x10);
  FUN_00023028();
  iVar1 = FUN_00026bd4(DAT_000226d0 + 0x2263c,0,0);
  if (-1 < iVar1) {
    iVar2 = FUN_00026e30(iVar1,&local_1c,4);
    FUN_0001d44c(iVar1);
    if (iVar2 == 4) goto LAB_00022664;
  }
  local_1c = DAT_000226dc;
  iVar1 = FUN_00026e88(&local_18,0);
  if (iVar1 != -1) {
    local_1c = local_1c ^ local_18 ^ uStack_14;
  }
LAB_00022664:
  **(uint **)(iVar3 + DAT_000226d4) = local_1c;
  if (*(int *)(iVar3 + DAT_000226d8) != 0) {
    FUN_0001e3a8();
  }
  return;
}



/* ===== FUN_000226e0 @ 000226e0 size=108 ===== */

void FUN_000226e0(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = DAT_00022754 + 0x22704;
  iVar1 = (DAT_00022750 + 0x226fc) - (DAT_0002274c + 0x226f4) >> 2;
  while (bVar3 = iVar1 != 0, iVar1 = iVar1 + -1, bVar3) {
    (**(code **)(iVar2 + iVar1 * 4))();
  }
  if (*(code **)(DAT_00022758 + 0x2271c) != (code *)0x0) {
    (**(code **)(DAT_00022758 + 0x2271c))();
  }
  if (*(code **)(DAT_0002275c + 0x22738) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0002273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_0002275c + 0x22738))();
  return;
}



/* ===== FUN_00022b6c @ 00022b6c size=160 ===== */

/* WARNING: Removing unreachable block (ram,0x00022bd0) */

longlong FUN_00022b6c(void)

{
  undefined1 auStack_18 [16];
  
  software_interrupt(0);
  software_interrupt(0);
  software_interrupt(0);
  software_interrupt(0);
  software_interrupt(0);
  return ZEXT48(auStack_18) << 0x20;
}



/* ===== FUN_00022c10 @ 00022c10 size=172 ===== */

ulonglong FUN_00022c10(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar2 + -0x410);
  uVar3 = *puVar4;
  uVar1 = uVar3 | 2;
  if (uVar3 == uVar1) {
    return CONCAT44(iVar2,uVar3) | 2;
  }
  do {
    DataMemoryBarrier(0xb);
    do {
      uVar6 = *puVar4;
      if (uVar6 != uVar3) goto LAB_00022c60;
      bVar7 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar7);
    *puVar4 = uVar1;
LAB_00022c60:
    DataMemoryBarrier(0xb);
    if (uVar3 == uVar6) {
      if ((uVar1 & 0xffffffbb) != 10) {
        return CONCAT44(iVar2,uVar6);
      }
      *(undefined4 *)(iVar2 + -0x274) = 0xffffffff;
      do {
        uVar3 = *(uint *)(iVar2 + -0x410);
        DataMemoryBarrier(0xb);
        do {
          uVar1 = *puVar4;
          if (uVar1 != uVar3) goto LAB_00022ca8;
          bVar7 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar7);
        *puVar4 = uVar3 | 0x10;
LAB_00022ca8:
        DataMemoryBarrier(0xb);
      } while (uVar3 != uVar1);
      puVar4 = *(uint **)(iVar2 + -0x414);
      if (((uint)puVar4 & 2) != 0) {
        return CONCAT44(iVar2,puVar4);
      }
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      puVar5 = (uint *)(iVar2 - 0x410);
      uVar3 = *puVar5;
      do {
        uVar1 = uVar3 & 0xfffffffd;
        DataMemoryBarrier(0xb);
        do {
          uVar6 = *puVar5;
          if (uVar6 != uVar3) break;
          bVar7 = (bool)hasExclusiveAccess(puVar5);
          if (bVar7) {
            *puVar5 = uVar1;
          }
          puVar4 = (uint *)(uint)!bVar7;
        } while (puVar4 != (uint *)0x0);
        bVar7 = uVar3 == uVar6;
        DataMemoryBarrier(0xb);
        uVar3 = uVar6;
        if (bVar7) {
          while ((uVar1 & 0xc) == 4) {
            uVar6 = 0x80;
            software_interrupt(0);
            puVar4 = puVar5;
            uVar1 = *(uint *)(iVar2 + -0x410);
          }
          return CONCAT44(uVar6,puVar4);
        }
      } while( true );
    }
    uVar1 = uVar6 | 2;
    uVar3 = uVar6;
    if (uVar6 == uVar1) {
      return CONCAT44(iVar2,uVar6) | 2;
    }
  } while( true );
}



/* ===== FUN_00022cbc @ 00022cbc size=116 ===== */

undefined8 FUN_00022cbc(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  bool bVar6;
  
  if (((uint)param_1 & 2) != 0) {
    return CONCAT44(param_2,param_1);
  }
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar4 = (uint *)(iVar5 - 0x410);
  uVar3 = *puVar4;
  do {
    uVar2 = uVar3 & 0xfffffffd;
    DataMemoryBarrier(0xb);
    do {
      uVar1 = *puVar4;
      if (uVar1 != uVar3) break;
      bVar6 = (bool)hasExclusiveAccess(puVar4);
      if (bVar6) {
        *puVar4 = uVar2;
      }
      param_1 = (uint *)(uint)!bVar6;
    } while (param_1 != (uint *)0x0);
    bVar6 = uVar3 == uVar1;
    DataMemoryBarrier(0xb);
    uVar3 = uVar1;
    if (bVar6) {
      while ((uVar2 & 0xc) == 4) {
        uVar1 = 0x80;
        software_interrupt(0);
        param_1 = puVar4;
        uVar2 = *(uint *)(iVar5 + -0x410);
      }
      return CONCAT44(uVar1,param_1);
    }
  } while( true );
}



/* ===== FUN_00022d30 @ 00022d30 size=560 ===== */

void FUN_00022d30(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *extraout_r2;
  int *piVar4;
  uint uVar5;
  uint *puVar6;
  int *extraout_r3;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int local_34;
  
  iVar12 = DAT_00022f60 + 0x22d4c;
  piVar10 = (int *)**(undefined4 **)(iVar12 + DAT_00022f64);
  if (piVar10 == (int *)0x0) {
    uVar7 = 0;
    iVar11 = 0;
    iVar13 = 0;
    local_34 = 0;
    uVar14 = 0;
    goto LAB_00022dc0;
  }
  piVar4 = piVar10 + **(int **)(iVar12 + DAT_00022f68) * 8;
  do {
    if (piVar10 < piVar4) {
      if (*piVar10 == 7) {
        uVar7 = piVar10[7];
        local_34 = piVar10[4];
        iVar13 = piVar10[5];
        iVar11 = piVar10[2];
        if (param_2 < uVar7) {
          param_2 = uVar7;
        }
        uVar14 = uVar7;
        if (uVar7 != 0) {
          uVar14 = uVar7 - 1;
        }
        goto LAB_00022dc0;
      }
    }
    else {
      uVar7 = 0;
      local_34 = 0;
      iVar11 = 0;
      iVar13 = 0;
      uVar14 = uVar7;
LAB_00022dc0:
      uVar5 = uVar7;
      if (uVar7 == 0) {
        uVar5 = 1;
      }
      iVar2 = FUN_0001bcf8(uVar14 + param_1,uVar5);
      iVar2 = uVar5 * iVar2;
      iVar8 = iVar13 + param_2 + iVar2;
      puVar6 = *(uint **)(iVar12 + DAT_00022f6c);
      iVar3 = FUN_00026ce4(*puVar6 + 0x490 + iVar8);
      iVar1 = DAT_00022f70;
      puVar9 = (undefined4 *)(DAT_00022f70 + 0x22e2c);
      FUN_00020350(iVar3,0,*puVar6 + 0x490 + iVar8);
      piVar10 = (int *)(iVar3 + param_2 + 0x48f & -param_2);
      *puVar9 = 0x3e;
      *(int *)(iVar1 + 0x23054) = iVar2;
      *(int **)(iVar1 + 0x22e3c) = (int *)((int)piVar10 + iVar2);
      *(undefined1 *)(iVar1 + 0x22e40) = 1;
      thunk_FUN_00029380((int *)((int)piVar10 + iVar2),iVar11,local_34);
      *piVar10 = iVar1 + 0x22e34;
      software_interrupt(0);
      if (piVar10 < (int *)0xfffff001) {
        *(undefined4 *)(iVar1 + 0x23064) = 0x40;
        iVar3 = DAT_00022f78;
        *(uint *)(FUN_0002304c + iVar1) = uVar7;
        *(int *)(iVar1 + 0x23044) = local_34;
        *(int *)(iVar1 + 0x23048) = iVar13;
        *(int *)(iVar1 + 0x23040) = iVar11;
        *(undefined4 *)(iVar1 + 0x23058) = 1;
        **(undefined4 **)(iVar12 + iVar3) = 1;
        **(undefined4 **)(iVar12 + DAT_00022f7c) = (undefined4 *)(iVar1 + 0x23064);
        *(int *)(iVar1 + 0x23080) = iVar1 + 0x2302c;
        iVar11 = FUN_0001bcf8(uVar14 + iVar13,uVar5);
        if (param_2 < 0x10) {
          param_2 = 0x10;
        }
        iVar2 = uVar5 * iVar11 + iVar2;
        *puVar6 = *puVar6 + 0xf + iVar2 & 0xfffffff0;
        **(int **)(iVar12 + DAT_00022f80) = iVar2;
        **(uint **)(iVar12 + DAT_00022f84) = param_2;
        **(undefined4 **)(iVar12 + DAT_00022f88) = 1;
        return;
      }
      param_1 = FUN_00021c14();
      piVar4 = extraout_r2;
      piVar10 = extraout_r3;
    }
    piVar10 = piVar10 + 8;
  } while( true );
}



/* ===== FUN_00023028 @ 00023028 size=12 ===== */

void FUN_00023028(void)

{
  FUN_00022d30(8,0x10);
  return;
}



/* ===== FUN_00023034 @ 00023034 size=24 ===== */

int FUN_00023034(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)coproc_movefrom_User_R_Thread_and_Process_ID();
  return *(int *)(*piVar1 + 8) + *(int *)(param_1 + 4);
}



/* ===== FUN_0002304c @ 0002304c size=84 ===== */

void FUN_0002304c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)coproc_movefrom_User_R_Thread_and_Process_ID();
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar1 = (int)piVar4 + *(int *)(param_1 + 0x28);
  iVar5 = *piVar4;
  *(int *)(iVar5 + iVar2 * 8) = iVar1;
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 *)(iVar5 + iVar2 * 8 + 4) = 1;
  uVar3 = FUN_00029bf4(iVar1,*(undefined4 *)(param_1 + 0x14),uVar3);
                    /* WARNING: Could not recover jumptable at 0x0002c238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0002c23c)(uVar3,0,*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18));
  return;
}



/* ===== FUN_0002309c @ 0002309c size=68 ===== */

void FUN_0002309c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_000230e0 + 0x230ac;
  **(undefined4 **)(iVar1 + DAT_000230e4) = *(undefined4 *)(param_1 + 0x1c);
  **(undefined4 **)(iVar1 + DAT_000230e8) = *(undefined4 *)(param_1 + 0x2c);
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 == 0) {
    iVar2 = 0x1000;
  }
  **(int **)(iVar1 + DAT_000230ec) = iVar2;
  return;
}



/* ===== FUN_000230f0 @ 000230f0 size=276 ===== */

void FUN_000230f0(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = *param_1;
  software_interrupt(0);
  iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
  do {
    iVar2 = FUN_00026ab0(uVar4,0);
    if (iVar2 != -1) break;
  } while (*(int *)(iVar5 + *(int *)(DAT_00023204 + 0x23130)) == 4);
  DataMemoryBarrier(0xb);
  piVar3 = (int *)(DAT_00023208 + 0x2314c);
  do {
    iVar5 = *piVar3;
    if (iVar5 != 0) goto LAB_00023160;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = 1;
LAB_00023160:
  DataMemoryBarrier(0xb);
  if (iVar5 != 0) {
    FUN_000266a8();
  }
  iVar5 = DAT_0002320c;
  iVar2 = *(int *)(DAT_0002320c + 0x23180) + -1;
  *(int *)(DAT_0002320c + 0x23180) = iVar2;
  if (iVar2 == 0) {
    FUN_00026958(3,iVar5 + 0x23184,0);
    FUN_00026958(2,iVar5 + 0x23198,0);
  }
  piVar3 = (int *)(DAT_00023210 + 0x231bc);
  do {
    iVar5 = *piVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      if (iVar2 != iVar5) goto LAB_000231d8;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 0;
LAB_000231d8:
    DataMemoryBarrier(0xb);
    if (iVar5 == iVar2) {
      if (iVar5 < 2) {
        return;
      }
      software_interrupt(0);
      return;
    }
  } while( true );
}



/* ===== FUN_00023214 @ 00023214 size=1204 ===== */

undefined8 FUN_00023214(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint local_60;
  undefined1 auStack_5c [8];
  int local_54;
  undefined1 *local_50;
  int local_44;
  int local_40;
  undefined4 *local_3c;
  uint local_38;
  undefined4 local_34 [3];
  uint local_28 [3];
  
  iVar6 = DAT_000236c8;
  puVar8 = &local_60;
  FUN_00020350(local_34,0,0x14);
  piVar3 = (int *)(DAT_000236cc + 0x2324c);
  local_34[0] = 1;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    if (iVar5 != 0) goto LAB_00023268;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = 1;
LAB_00023268:
  DataMemoryBarrier(0xb);
  if (iVar5 != 0) {
    FUN_000266a8();
  }
  iVar5 = DAT_000236d0;
  iVar7 = *(int *)(DAT_000236d0 + 0x23288);
  *(int *)(DAT_000236d0 + 0x23288) = iVar7 + 1;
  if (iVar7 == 0) {
    iVar7 = FUN_00026958(2,local_34,iVar5 + 0x232a0);
    if (iVar7 < 0) {
      *(int *)(iVar5 + 0x23288) = *(int *)(iVar5 + 0x23288) + -1;
    }
    else {
      iVar7 = FUN_00026958(3,local_34,iVar5 + 0x2328c);
      if (-1 < iVar7) goto LAB_00023370;
      iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
      uVar9 = *(undefined4 *)(iVar6 + *(int *)(DAT_000236d4 + 0x232e0));
      *(int *)(iVar5 + 0x23288) = *(int *)(iVar5 + 0x23288) + -1;
LAB_000232ec:
      FUN_00026958(2,DAT_000236d8 + 0x2331c,0);
      iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar6 + *(int *)(DAT_000236dc + 0x23314)) = uVar9;
    }
  }
  else {
LAB_00023370:
    piVar3 = (int *)(DAT_000236e4 + 0x23380);
    do {
      iVar5 = *piVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar3;
        if (iVar7 != iVar5) goto LAB_0002339c;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = 0;
LAB_0002339c:
      DataMemoryBarrier(0xb);
    } while (iVar5 != iVar7);
    if (1 < iVar5) {
      software_interrupt(0);
    }
    local_28[0] = local_28[0] | 0x10000;
    iVar5 = FUN_000270bc(0,local_28,auStack_5c);
    if (-1 < iVar5) {
      iVar5 = *(int *)(iVar6 + 0x23244 + DAT_000236f4);
      if (iVar5 == 0) goto LAB_0002354c;
      FUN_000225d0(&local_54,DAT_000236f8 + 0x23488,&local_60);
      puVar10 = param_1;
      while( true ) {
        software_interrupt(0);
        local_60 = DAT_000236fc;
        if (0xfffff000 < DAT_000236fc) {
          iVar7 = coproc_movefrom_User_R_Thread_and_Process_ID();
          *(uint *)(iVar7 + *(int *)(DAT_00023700 + 0x234bc)) = -DAT_000236fc;
          local_60 = 0xffffffff;
        }
        iVar7 = DAT_00023704;
        if (local_60 != 0) break;
        param_1 = (undefined4 *)(DAT_00023704 + 0x234e8);
        iVar11 = DAT_00023708 + 0x234f4;
        local_40 = DAT_0002370c + 0x234f8;
        local_44 = iVar11;
        local_3c = puVar10;
        local_38 = local_60;
        FUN_00026958(2,DAT_00023704 + 0x23504,0);
        FUN_00026958(3,iVar7 + 0x234f0,0);
        FUN_000270bc(2,auStack_5c,0);
        iVar2 = DAT_00023710;
        *param_1 = 0;
        *(undefined4 *)(iVar7 + 0x234ec) = 0;
        FUN_00026a74(iVar11,&local_44,**(undefined4 **)(iVar6 + 0x23244 + iVar2));
        FUN_00026cac(0x7f);
        puVar8 = (uint *)0x0;
LAB_0002354c:
        local_54 = DAT_00023714 + 0x2355c;
        puVar10 = param_1;
        local_50 = (undefined1 *)puVar8;
      }
      if ((int)local_60 < 0) {
LAB_0002356c:
        local_44 = -1;
      }
      else {
        iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
        do {
          uVar4 = FUN_00026ab0(local_60,&local_44,0);
          if (uVar4 != 0xffffffff) break;
        } while (*(int *)(iVar6 + *(int *)(DAT_00023724 + 0x23678)) == 4);
        if (uVar4 != local_60) goto LAB_0002356c;
      }
      if (iVar5 != 0) {
        FUN_000225d8(&local_54,0);
      }
      DataMemoryBarrier(0xb);
      piVar3 = (int *)(DAT_00023718 + 0x2359c);
      do {
        iVar6 = *piVar3;
        if (iVar6 != 0) goto LAB_000235b0;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = 1;
LAB_000235b0:
      DataMemoryBarrier(0xb);
      if (iVar6 != 0) {
        FUN_000266a8();
      }
      iVar6 = DAT_0002371c;
      iVar5 = *(int *)(DAT_0002371c + 0x235d0) + -1;
      *(int *)(DAT_0002371c + 0x235d0) = iVar5;
      if (iVar5 == 0) {
        iVar5 = FUN_00026958(2,iVar6 + 0x235e8,0);
        iVar6 = FUN_00026958(3,iVar6 + 0x235d4,0);
        if (iVar5 == 0 && iVar6 == 0) goto LAB_000235dc;
LAB_000236bc:
        local_44 = -1;
      }
      else {
LAB_000235dc:
        iVar6 = FUN_000270bc(2,auStack_5c,0);
        if (iVar6 != 0) goto LAB_000236bc;
      }
      uVar9 = 0;
      piVar3 = (int *)(DAT_00023720 + 0x23604);
      do {
        iVar6 = *piVar3;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar3;
          if (iVar5 != iVar6) goto LAB_00023620;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = 0;
LAB_00023620:
        DataMemoryBarrier(0xb);
      } while (iVar6 != iVar5);
      if (1 < iVar6) {
        uVar9 = 0x81;
        software_interrupt(0);
      }
      goto LAB_0002364c;
    }
    DataMemoryBarrier(0xb);
    piVar3 = (int *)(DAT_000236e8 + 0x23400);
    do {
      iVar6 = *piVar3;
      if (iVar6 != 0) goto LAB_00023414;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 1;
LAB_00023414:
    DataMemoryBarrier(0xb);
    if (iVar6 != 0) {
      FUN_000266a8();
    }
    iVar6 = DAT_000236ec;
    iVar5 = *(int *)(DAT_000236ec + 0x23434) + -1;
    *(int *)(DAT_000236ec + 0x23434) = iVar5;
    if (iVar5 == 0) {
      iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
      uVar9 = *(undefined4 *)(iVar5 + *(int *)(DAT_000236f0 + 0x23454));
      FUN_00026958(3,iVar6 + 0x23438);
      goto LAB_000232ec;
    }
  }
  uVar9 = 0;
  piVar3 = (int *)(DAT_000236e0 + 0x23324);
  do {
    iVar6 = *piVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      if (iVar5 != iVar6) goto LAB_00023340;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = 0;
LAB_00023340:
    DataMemoryBarrier(0xb);
  } while (iVar6 != iVar5);
  if (1 < iVar6) {
    uVar9 = 0x81;
    software_interrupt(0);
  }
  local_44 = -1;
LAB_0002364c:
  return CONCAT44(uVar9,local_44);
}



/* ===== FUN_00023728 @ 00023728 size=100 ===== */

uint FUN_00023728(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    iVar1 = FUN_00023214(DAT_0002378c + 0x23740);
    uVar2 = (uint)(iVar1 == 0);
  }
  else {
    if (*(int *)(DAT_00023790 + 0x2375c) == 0) {
      uVar2 = FUN_00023214();
      return uVar2;
    }
    uVar3 = FUN_00022c10();
    uVar2 = FUN_00023214(param_1);
    FUN_00022cbc(uVar3);
  }
  return uVar2;
}



/* ===== FUN_000237c8 @ 000237c8 size=248 ===== */

undefined4 FUN_000237c8(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = param_1 - param_3;
  iVar4 = DAT_000238c0 + 0x237f0;
  if (uVar2 < *param_2) {
    if (param_2[uVar2 * 3 + 4] != 0) {
      param_2[uVar2 * 3 + 2] = **(int **)(iVar4 + DAT_000238c4) + 1;
      param_2[uVar2 * 3 + 4] = 0;
    }
    if (**(int **)(iVar4 + DAT_000238c8) != param_1) {
      return 1;
    }
  }
  else if (param_2[1] != 0) {
    iVar1 = FUN_000237c8(param_1,param_2[1],*param_2 + param_3);
    if (iVar1 != 0) {
      return 1;
    }
    param_1 = param_3 + *param_2;
  }
  uVar2 = param_1 - param_3;
  if (param_3 == 0) {
    uVar3 = **(int **)(iVar4 + DAT_000238cc) + 1;
  }
  else {
    uVar3 = 0;
  }
  do {
    if (uVar2 <= uVar3) {
      return 0;
    }
    iVar1 = param_3 + -1 + uVar2;
    uVar2 = uVar2 - 1;
  } while (param_2[uVar2 * 3 + 4] == 0);
  **(int **)(iVar4 + DAT_000238c8) = iVar1;
  return 1;
}



/* ===== FUN_000238d0 @ 000238d0 size=88 ===== */

int FUN_000238d0(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_2 + 0x5c);
  uVar1 = *(ushort *)(param_2 + 0x4e);
  piVar3 = param_1 + 1;
  *param_1 = param_2;
  *(ushort *)(param_2 + 0x4e) = uVar1 | 0x20;
  for (; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
    if ((*(ushort *)(piVar4[1] + 0x4e) & 0x20) == 0) {
      iVar2 = FUN_000238d0(piVar3);
      piVar3 = piVar3 + iVar2;
    }
  }
  return (int)piVar3 - (int)param_1 >> 2;
}



/* ===== FUN_00023928 @ 00023928 size=288 ===== */

int FUN_00023928(int param_1,undefined4 param_2,int param_3,uint param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = *(int *)(param_1 + 0x84);
  iVar2 = (param_4 & 0xfffffff8) + param_3;
  iVar10 = *(int *)(param_1 + 0x80);
  iVar3 = DAT_00023a48 + 0x23958;
  iVar7 = 0;
  iVar4 = DAT_00023a4c + 0x2396c;
  iVar8 = DAT_00023a50 + 0x23978;
  iVar5 = DAT_00023a54 + 0x23980;
  for (; param_3 != iVar2; param_3 = param_3 + 8) {
    uVar6 = *(uint *)(param_3 + 4);
    iVar1 = (*param_5)(param_1,param_2,param_3,iVar9,iVar10);
    if (iVar1 != 0) {
      uVar6 = uVar6 >> 8;
      FUN_00027280(2,iVar3,**(undefined4 **)(iVar8 + DAT_00023a58));
      if (uVar6 != 0) {
        FUN_00027280(2,iVar5,iVar10 + *(int *)(iVar9 + uVar6 * 0x10));
      }
      if (iVar1 < 0) {
        param_1 = 1;
        FUN_00027280(2,DAT_00023a5c + 0x23a18,*(undefined1 *)(param_3 + 4));
        software_interrupt(0);
        **(int **)(iVar8 + DAT_00023a60) = iVar1;
      }
      FUN_00027280(2,iVar4);
      iVar7 = iVar7 + iVar1;
    }
  }
  return iVar7;
}



/* ===== FUN_00023a64 @ 00023a64 size=132 ===== */

int * FUN_00023a64(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  if ((param_1[1] != 0) || ((*(byte *)(param_1 + 3) & 0xf) == 6)) {
    if (*(short *)((int)param_1 + 0xe) == 0) {
      param_4 = param_4 & 1;
    }
    else {
      param_4 = 0;
    }
    if (param_4 == 0) {
      uVar2 = *(byte *)(param_1 + 3) & 0xf;
      bVar4 = uVar2 != 5;
      bVar3 = uVar2 - 5 == 1;
      if (1 < uVar2 - 5) {
        bVar4 = 1 < uVar2;
        bVar3 = uVar2 == 2;
      }
      if (!bVar4 || bVar3) {
        iVar1 = FUN_00020410(param_2 + *param_1,param_3);
        if (iVar1 == 0) {
          return param_1;
        }
        return (int *)0x0;
      }
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}



/* ===== FUN_00023ae8 @ 00023ae8 size=56 ===== */

void FUN_00023ae8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1[0x34] == 0) {
    return;
  }
  puVar1 = (undefined4 *)(param_1[0x34] + *param_1);
  puVar2 = (undefined4 *)((param_1[0x36] & 0xfffffffcU) + (int)puVar1);
  for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (*(code *)*puVar1)();
  }
  return;
}



/* ===== FUN_00023b40 @ 00023b40 size=56 ===== */

void FUN_00023b40(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1[0x35] == 0) {
    return;
  }
  puVar2 = (undefined4 *)(param_1[0x35] + *param_1);
  puVar1 = (undefined4 *)((param_1[0x37] & 0xfffffffcU) + (int)puVar2);
  while (puVar2 != puVar1) {
    puVar1 = puVar1 + -1;
    (*(code *)*puVar1)();
  }
  return;
}



/* ===== FUN_00023b78 @ 00023b78 size=1364 ===== */

undefined4 FUN_00023b78(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  code *pcVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  char cVar17;
  undefined4 *puVar18;
  bool bVar19;
  undefined4 *local_48;
  int local_44;
  uint local_40;
  
  iVar10 = DAT_000240cc + 0x23b90;
  piVar7 = *(int **)(iVar10 + DAT_000240d0);
  if ((int *)*piVar7 != param_1) {
    piVar3 = (int *)**(undefined4 **)(iVar10 + DAT_000240d4);
    piVar8 = (int *)0x0;
    do {
      piVar13 = piVar8;
      piVar8 = piVar3;
      if (piVar8 == (int *)0x0) {
        **(undefined4 **)(iVar10 + DAT_000240d8) = 10;
        return 1;
      }
      piVar3 = (int *)piVar8[1];
    } while (piVar8 != param_1);
    if (piVar13 == (int *)0x0) {
      **(undefined4 **)(iVar10 + DAT_000240d4) = piVar3;
    }
    else {
      piVar13[1] = (int)piVar3;
    }
    puVar9 = (undefined4 *)*param_1;
    if (*(short *)(puVar9 + 0x13) == 1) {
      uVar4 = puVar9[0x10];
      piVar3 = *(int **)(iVar10 + DAT_000240dc);
      puVar18 = (undefined4 *)(*piVar3 + 0x40);
LAB_00023c14:
      local_48 = puVar18;
      puVar18 = local_48;
      if ((local_48 != (undefined4 *)0x0) &&
         (puVar18 = (undefined4 *)local_48[2], puVar18 != (undefined4 *)0x0)) goto LAB_00023cd8;
      do {
        for (uVar15 = 0; uVar15 < (uint)param_1[3]; uVar15 = uVar15 + 1) {
          piVar8 = *(int **)(param_1[2] + uVar15 * 4);
          sVar6 = (short)piVar8[0x13] + -1;
          *(short *)(piVar8 + 0x13) = sVar6;
          if ((sVar6 == 0) &&
             ((((piVar8[0x28] != 0 || (piVar8[0x35] != 0)) && (param_2 != 0)) &&
              ((*(ushort *)((int)piVar8 + 0x4e) & 8) == 0)))) {
            *(ushort *)((int)piVar8 + 0x4e) = *(ushort *)((int)piVar8 + 0x4e) | 8;
            if (piVar8[0x35] != 0) {
              FUN_00023b40(piVar8);
            }
            if (piVar8[0x28] != 0) {
              (*(code *)(piVar8[0x28] + *piVar8))();
            }
          }
        }
        iVar16 = 0;
        uVar15 = 0xffffffff;
        cVar17 = '\0';
        piVar8 = (int *)coproc_movefrom_User_R_Thread_and_Process_ID();
        local_44 = 0;
        for (local_40 = 0; local_40 < (uint)param_1[3]; local_40 = local_40 + 1) {
          param_2 = *(int *)(param_1[2] + local_40 * 4);
          if (*(short *)(param_2 + 0x4c) == 0) {
            uVar12 = 0;
            piVar13 = *(int **)(param_2 + 0xfc);
            for (iVar1 = 0; iVar1 != *(int *)(param_2 + 0xf8); iVar1 = iVar1 + 1) {
              if (*piVar13 == 1) {
                uVar2 = piVar13[2];
                if (uVar2 <= uVar15) {
                  uVar15 = uVar2;
                }
                if (uVar12 < uVar2 + piVar13[5]) {
                  uVar12 = uVar2 + piVar13[5];
                }
              }
              piVar13 = piVar13 + 8;
            }
            if (*(int *)(param_2 + 0x1c) != 0) {
              if ((**(int **)(iVar10 + DAT_000240e8) != 0) &&
                 (iVar1 = FUN_000237c8(*(undefined4 *)(param_2 + 0x2c),
                                       **(int **)(iVar10 + DAT_000240e8),0,
                                       (*(ushort *)(param_2 + 0x4e) & 7) >> 2), iVar1 == 0)) {
                **(undefined4 **)(iVar10 + DAT_000240f0) = **(undefined4 **)(iVar10 + DAT_000240ec);
              }
              iVar1 = *(int *)(param_2 + 0x28);
              if (iVar1 == 0) {
                iVar5 = *piVar8;
                cVar17 = *(char *)(iVar5 + *(int *)(param_2 + 0x2c) * 8 + 4);
                if (cVar17 != '\0') goto LAB_00023ed4;
                iVar1 = local_44;
                if (*(int *)(iVar5 + *(int *)(param_2 + 0x2c) * 8) != -1) {
                  FUN_00021048();
                  *(undefined4 *)(iVar5 + *(int *)(param_2 + 0x2c) * 8) = 0xffffffff;
                }
              }
              else if (iVar1 == iVar16) {
                iVar16 = iVar16 - *(int *)(param_2 + 0x1c);
                iVar1 = local_44;
              }
              else {
                iVar5 = iVar1 + *(int *)(param_2 + 0x1c);
                if ((iVar5 != local_44) &&
                   (bVar19 = iVar16 == **(int **)(iVar10 + DAT_000240f4), iVar16 = iVar5, bVar19)) {
                  **(int **)(iVar10 + DAT_000240f4) = local_44;
                }
              }
              local_44 = iVar1;
              cVar17 = '\x01';
            }
LAB_00023ed4:
            uVar2 = -**(int **)(iVar10 + DAT_000240f8);
            uVar15 = uVar15 & uVar2;
            uVar2 = **(int **)(iVar10 + DAT_000240f8) + -1 + uVar12 & uVar2;
            if (uVar15 < uVar2) {
              uVar2 = uVar2 - uVar15;
              software_interrupt(0);
              if (0xfffff000 < *(uint *)(param_2 + 0x38)) {
                **(int **)(iVar10 + DAT_000240e4) = -*(uint *)(param_2 + 0x38);
              }
            }
            piVar13 = (int *)*(int *)(param_2 + 0x60);
            while (piVar13 != (int *)0x0) {
              iVar1 = *piVar13;
              FUN_00021048(piVar13,uVar2);
              piVar13 = (int *)iVar1;
              uVar2 = extraout_r1;
            }
            iVar1 = *piVar3;
            if (param_2 == *piVar3) {
              iVar1 = *(int *)(param_2 + 0xc);
              if (iVar1 != 0) {
                *(undefined4 *)(iVar1 + 0x10) = 0;
              }
              *piVar3 = iVar1;
            }
            else {
              do {
                iVar5 = iVar1;
                if (iVar5 == 0) goto LAB_00023f54;
                iVar1 = *(int *)(iVar5 + 0xc);
              } while (param_2 != *(int *)(iVar5 + 0xc));
              iVar1 = *(int *)(param_2 + 0xc);
              *(int *)(iVar5 + 0xc) = iVar1;
              if (iVar1 != 0) {
                *(int *)(iVar1 + 0x10) = iVar5;
              }
            }
LAB_00023f54:
            piVar13 = (int *)*piVar7;
            if (piVar13 != (int *)0x0) {
              if (param_2 == *piVar13) {
                iVar1 = piVar13[4];
                *piVar7 = iVar1;
                if (iVar1 != 0) {
                  *(undefined4 *)(iVar1 + 0x14) = 0;
                }
              }
              else {
                do {
                  piVar14 = piVar13;
                  piVar13 = (int *)piVar14[4];
                  if (piVar13 == (int *)0x0) goto LAB_00023f88;
                } while (param_2 != *piVar13);
                iVar1 = piVar13[4];
                FUN_00021048(piVar13,uVar2);
                piVar14[4] = iVar1;
                uVar2 = extraout_r1_00;
                if (iVar1 != 0) {
                  *(int **)(iVar1 + 0x14) = piVar14;
                }
              }
            }
LAB_00023f88:
            FUN_00021048(*(undefined4 *)(param_2 + 4),uVar2);
            if (param_2 != *param_1) {
              FUN_00021048(*(undefined4 *)(param_2 + 0x40));
            }
            FUN_00021048(param_2);
          }
        }
        if (local_48 != (undefined4 *)0x0) {
          local_48[2] = puVar18;
        }
        FUN_00021048(uVar4);
        iVar1 = param_1[4];
        while (iVar1 != 0) {
          iVar1 = *(int *)(iVar1 + 0x10);
          FUN_00021048();
          param_2 = iVar1;
        }
        FUN_00021048(param_1[2]);
        FUN_00021048(param_1);
        if (cVar17 == '\0') {
LAB_00024050:
          piVar7 = *(int **)(iVar10 + DAT_000240fc);
          iVar10 = *piVar7;
          if (iVar10 == 0) {
            return 0;
          }
          pcVar11 = *(code **)(iVar10 + 8);
          if (pcVar11 == (code *)0x0) {
            return 0;
          }
          *(undefined4 *)(iVar10 + 0xc) = 2;
          (*pcVar11)();
          *(undefined4 *)(*piVar7 + 0xc) = 0;
          (*pcVar11)();
          return 0;
        }
        iVar1 = **(int **)(iVar10 + DAT_000240e0) + 1;
        **(int **)(iVar10 + DAT_000240e0) = iVar1;
        if (iVar1 != 0) {
          if (iVar16 == **(int **)(iVar10 + DAT_000240f4)) {
            **(int **)(iVar10 + DAT_000240f4) = local_44;
          }
          goto LAB_00024050;
        }
        software_interrupt(0);
        puVar9 = *(undefined4 **)(iVar10 + DAT_000240e4);
        *puVar9 = 0xffffffe2;
LAB_00023cd8:
        if (puVar9 != *(undefined4 **)*puVar18) goto LAB_00023c14;
        puVar18 = (undefined4 *)puVar18[2];
      } while( true );
    }
    *(short *)(puVar9 + 0x13) = *(short *)(puVar9 + 0x13) + -1;
    FUN_00021048();
  }
  return 0;
}



/* ===== FUN_00024258 @ 00024258 size=596 ===== */

int FUN_00024258(int param_1,int *param_2,int *param_3,uint param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  
  if (((param_5 == (int *)0x0) || (iVar3 = *param_5, iVar3 == 0)) ||
     ((*(byte *)(iVar3 + 0xd) & 3) != 3)) {
    piVar13 = (int *)0x0;
    uVar14 = 0xffffffff;
    iVar3 = 0;
    for (; param_2 != (int *)0x0 && iVar3 == 0; param_2 = (int *)param_2[2]) {
      iVar12 = param_2[1];
      iVar15 = 0;
LAB_000243b0:
      if (iVar15 != iVar12) {
        piVar13 = *(int **)(*param_2 + iVar15 * 4);
        uVar7 = (uint)(param_3 != (int *)0x0) & (piVar13[0x14] ^ 0x100U) >> 8 ^ 1;
        if (param_3 == piVar13) {
          uVar7 = 1;
        }
        if (uVar7 == 0) {
          for (puVar8 = (undefined4 *)param_3[0x18]; puVar8 != (undefined4 *)0x0;
              puVar8 = (undefined4 *)*puVar8) {
            if ((int *)puVar8[1] == piVar13) goto LAB_000242e8;
          }
        }
        else {
LAB_000242e8:
          if ((((param_4 & 2) == 0) || (piVar13[0xf] != 1)) && (uVar7 = piVar13[0x15], uVar7 != 0))
          {
            iVar9 = piVar13[0x21];
            if (uVar14 == 0xffffffff) {
              pbVar5 = (byte *)(param_1 + -1);
              uVar14 = 0;
              while( true ) {
                pbVar5 = pbVar5 + 1;
                if (*pbVar5 == 0) break;
                uVar14 = (uint)*pbVar5 + uVar14 * 0x10;
                uVar14 = uVar14 & 0xfffffff ^ uVar14 >> 0x18 & 0xf0;
              }
            }
            uVar10 = 0;
            for (uVar4 = uVar7; uVar6 = uVar14, -1 < (int)uVar4; uVar4 = uVar4 << 1) {
              uVar10 = uVar10 + 1;
            }
            do {
              uVar10 = uVar10 - 1;
              if ((uVar10 < 3) || (uVar4 = uVar7 << (uVar10 & 0xff), (int)uVar4 < 0))
              goto LAB_0002434c;
              do {
                if (uVar6 < uVar4) break;
                uVar6 = uVar6 - uVar4;
                uVar1 = uVar4 * 2;
                uVar2 = uVar4 & 0x7fffffff;
                uVar4 = uVar1;
              } while (uVar7 <= uVar1 && uVar2 >> 0x1e == 0);
            } while( true );
          }
        }
        goto LAB_000243ac;
      }
      iVar3 = 0;
LAB_000243c0:
    }
    if (iVar3 == 0) {
      return 0;
    }
    param_3 = piVar13;
    if (param_5 == (int *)0x0) goto LAB_0002446c;
  }
  *param_5 = iVar3;
  param_5[1] = (int)param_3;
LAB_0002446c:
  if ((*(byte *)(iVar3 + 0xc) & 0xf) == 6) {
    return *(int *)(iVar3 + 4);
  }
  if (1 < (*(byte *)(iVar3 + 0xc) >> 4) - 1) {
    return 0;
  }
  return *param_3 + *(int *)(iVar3 + 4);
LAB_0002434c:
  for (; uVar7 <= uVar6; uVar6 = uVar6 - uVar7) {
  }
  iVar11 = piVar13[0x20];
  for (iVar16 = *(int *)(piVar13[0x16] + uVar6 * 4); iVar16 != 0;
      iVar16 = *(int *)(piVar13[0x1a] + iVar16 * 4)) {
    iVar3 = FUN_00023a64(iVar9 + iVar16 * 0x10,iVar11,param_1,param_4);
    if (iVar3 != 0) goto LAB_000243c0;
  }
LAB_000243ac:
  iVar15 = iVar15 + 1;
  goto LAB_000243b0;
}



/* ===== FUN_000244ac @ 000244ac size=172 ===== */

void FUN_000244ac(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_00024558 + 0x244d4;
  iVar5 = *(int *)(param_1[0x32] + param_2 * 8);
  iVar4 = *param_1;
  iVar3 = param_1[0x20] +
          *(int *)(param_1[0x21] + (*(uint *)(param_1[0x32] + param_2 * 8 + 4) >> 8) * 0x10);
  puVar1 = (undefined4 *)
           FUN_00024258(iVar3,**(int **)(iVar2 + DAT_0002455c) + 0x40,param_1,1,0,param_2,param_3);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00027280(2,DAT_00024564 + 0x24528,**(undefined4 **)(iVar2 + DAT_00024560),iVar3);
    iVar5 = 1;
    software_interrupt(0);
    puVar1 = *(undefined4 **)(iVar2 + DAT_00024568);
    *puVar1 = 0xffffffff;
  }
  *(undefined4 **)(iVar5 + iVar4) = puVar1;
  return;
}



/* ===== FUN_0002456c @ 0002456c size=500 ===== */

uint FUN_0002456c(int *param_1,undefined4 param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int local_30;
  int *local_2c;
  
  iVar6 = *param_3;
  iVar5 = *param_1;
  uVar3 = param_3[1] & 0xff;
  uVar1 = (uint)param_3[1] >> 8;
  iVar8 = DAT_00024760 + 0x245a0;
  iVar7 = param_4 + uVar1 * 0x10;
  local_2c = (int *)0x0;
  piVar2 = param_1;
  local_30 = iVar7;
  if (uVar1 == 0) {
    iVar4 = *(int *)(iVar7 + 4);
  }
  else if (*(byte *)(iVar7 + 0xc) >> 4 == 0) {
    iVar4 = iVar5 + *(int *)(iVar7 + 4);
  }
  else {
    uVar9 = uVar3 - 0x11;
    bVar13 = 0x15 < uVar3;
    bVar11 = uVar3 == 0x16;
    if (!bVar11) {
      bVar13 = 1 < uVar9;
    }
    bVar12 = uVar9 == 2;
    if (!bVar13 || (bVar11 || bVar12)) {
      uVar9 = 1;
    }
    if (bVar13 && (!bVar11 && !bVar12)) {
      uVar9 = 0;
    }
    if (uVar3 == 0x14) {
      uVar10 = 2;
    }
    else {
      uVar10 = 0;
    }
    iVar4 = FUN_00024258(param_5 + *(int *)(param_4 + uVar1 * 0x10),param_2,param_1,uVar9 | uVar10,
                         &local_30);
    piVar2 = local_2c;
    if (((iVar4 == 0) && ((*(byte *)(iVar7 + 0xc) & 0xf) != 6)) &&
       (*(byte *)(iVar7 + 0xc) >> 4 != 2)) {
      return 1;
    }
  }
  switch(uVar3) {
  case 0:
    return uVar3;
  case 1:
    FUN_00027280(2,DAT_00024764 + 0x246b4);
    iVar6 = 1;
    software_interrupt(0);
    **(undefined4 **)(iVar8 + DAT_00024768) = 0xffffffff;
    goto LAB_000246d0;
  case 2:
    goto LAB_0002470c;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    break;
  case 0x11:
    iVar7 = piVar2[0xb];
    goto LAB_000246dc;
  case 0x12:
LAB_0002470c:
    *(int *)(iVar5 + iVar6) = *(int *)(iVar5 + iVar6) + iVar4;
    return 0;
  case 0x13:
    if (piVar2[10] == 0) {
      FUN_0002a62c(piVar2);
    }
    iVar4 = iVar4 + *(int *)(iVar5 + iVar6) + piVar2[10];
    goto LAB_00024748;
  case 0x14:
    thunk_FUN_00029380(iVar5 + iVar6,iVar4,*(undefined4 *)(iVar7 + 8));
    return 0;
  case 0x15:
    goto LAB_00024748;
  case 0x16:
LAB_00024748:
    *(int *)(iVar5 + iVar6) = iVar4;
    return 0;
  case 0x17:
LAB_000246d0:
    iVar7 = *(int *)(iVar5 + iVar6) + *param_1;
LAB_000246dc:
    *(int *)(iVar5 + iVar6) = iVar7;
    return 0;
  }
  return 0xffffffff;
}



/* ===== FUN_00026570 @ 00026570 size=288 ===== */

uint FUN_00026570(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  double in_d0;
  uint uVar4;
  
  uVar4 = (uint)((ulonglong)in_d0 >> 0x20);
  uVar1 = SUB84(in_d0,0);
  uVar2 = (uVar4 & 0x7fffffff) >> 0x14;
  uVar3 = uVar2 - 0x3ff;
  if ((int)uVar3 < 0x14) {
    if ((int)uVar3 < 0) {
      if (0.0 < in_d0 + DAT_00026690) {
        if ((longlong)in_d0 < 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = 0;
        }
      }
    }
    else {
      if ((DAT_0002669c >> (uVar3 & 0xff) & uVar4) == 0 && uVar1 == 0) {
        return uVar1;
      }
      if (0.0 < in_d0 + DAT_00026690) {
        uVar1 = 0;
      }
    }
  }
  else {
    if (0x33 < (int)uVar3) {
      if (uVar3 == 0x400) {
        in_d0 = in_d0 + in_d0;
      }
      return SUB84(in_d0,0);
    }
    uVar2 = 0xffffffff >> (uVar2 - 0x413 & 0xff);
    if ((uVar2 & uVar1) == 0) {
      return uVar1;
    }
    if (0.0 < in_d0 + DAT_00026690) {
      if ((0 < (int)uVar4) && (uVar3 != 0x14)) {
        uVar1 = uVar1 + (1 << (0x34 - uVar3 & 0xff));
      }
      uVar1 = uVar1 & ~uVar2;
    }
  }
  return uVar1;
}



/* ===== thunk_FUN_0002ab38 @ 000266a0 size=4 ===== */

undefined4 thunk_FUN_0002ab38(void)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  double in_d0;
  undefined4 extraout_s1;
  double dVar4;
  
  iVar2 = (int)((ulonglong)in_d0 >> 0x20);
  if (0xfffff < iVar2) {
    iVar1 = 0;
LAB_0002ab80:
    if (DAT_0002ac28 < iVar2) {
      return SUB84(in_d0 + in_d0,0);
    }
    iVar1 = (iVar2 >> 0x14) + -0x3ff + iVar1;
    dVar4 = (double)VectorSignedToFloat(iVar1 - (iVar1 >> 0x1f),(byte)(in_fpscr >> 0x16) & 3);
    uVar3 = FUN_0002bee8(SUB84(in_d0,0));
    return SUB84((double)CONCAT44(extraout_s1,uVar3) * DAT_0002ac10 + dVar4 * DAT_0002ac18 +
                 dVar4 * DAT_0002ac20,0);
  }
  dVar4 = DAT_0002ac00;
  if (((ulonglong)in_d0 & 0x7fffffff00000000) != 0 || SUB84(in_d0,0) != 0) {
    if (-1 < (longlong)in_d0) {
      iVar1 = -0x36;
      in_d0 = in_d0 * DAT_0002ac08;
      iVar2 = (int)((ulonglong)in_d0 >> 0x20);
      goto LAB_0002ab80;
    }
    dVar4 = in_d0 - in_d0;
  }
  return SUB84(dVar4 / 0.0,0);
}



/* ===== thunk_FUN_0002ac30 @ 000266a4 size=4 ===== */

uint thunk_FUN_0002ac30(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  double *pdVar12;
  uint uVar13;
  bool bVar14;
  uint in_fpscr;
  undefined4 uVar15;
  double in_d0;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  uint uVar16;
  double in_d1;
  double dVar17;
  double dVar18;
  double dVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  uVar6 = DAT_0002b198;
  uVar13 = DAT_0002b194;
  uVar2 = SUB84(in_d0,0);
  uVar3 = (uint)((ulonglong)in_d0 >> 0x20);
  dVar17 = in_d0;
  if (uVar3 == DAT_0002b194 && uVar2 == 0) goto LAB_0002acd0;
  uVar16 = SUB84(in_d1,0);
  uVar20 = (uint)((ulonglong)in_d1 >> 0x20);
  uVar10 = uVar20 & 0x7fffffff;
  if (((ulonglong)in_d1 & 0x7fffffff00000000) == 0 && uVar16 == 0) {
LAB_0002b328:
    dVar17 = 0.0;
    goto LAB_0002acd0;
  }
  uVar8 = uVar3 & 0x7fffffff;
  if ((((int)DAT_0002b198 < (int)uVar8) ||
      ((int)DAT_0002b198 < (int)uVar10 || uVar2 != 0 && uVar8 == DAT_0002b198)) ||
     (uVar16 != 0 && uVar10 == DAT_0002b198)) {
    dVar17 = in_d0 + in_d1;
    goto LAB_0002acd0;
  }
  iVar5 = 0;
  if (-1 < (longlong)in_d0) {
LAB_0002ad68:
    if (uVar16 != 0) goto LAB_0002adec;
    if (uVar10 == DAT_0002b198) {
      if (uVar8 == 0x3ff00000 && uVar2 == 0) goto LAB_0002b328;
      if (DAT_0002b1a0 < (int)uVar8) {
        dVar17 = 0.0;
        if (-1 < (longlong)in_d1) {
          dVar17 = in_d1;
        }
        goto LAB_0002acd0;
      }
      if ((longlong)in_d1 < 0) {
        dVar17 = -in_d1;
        goto LAB_0002acd0;
      }
LAB_0002adb0:
      dVar17 = 0.0;
      goto LAB_0002acd0;
    }
LAB_0002ad4c:
    if (uVar10 == DAT_0002b194) {
      if ((longlong)in_d1 < 0) {
        dVar17 = 1.0 / in_d0;
      }
      goto LAB_0002acd0;
    }
    if (uVar20 != 0x40000000) {
      bVar14 = uVar3 == 0;
      if (-1 < (longlong)in_d0) {
        bVar14 = uVar20 == DAT_0002b1a4;
      }
      if (bVar14) {
        if ((DAT_0002b564 & ~uVar3) == 0) {
          return SUB84(in_d0 + in_d0 * in_d0,0);
        }
        if ((int)uVar3 < 1) {
          if (((ulonglong)in_d0 & 0x7fffffff00000000) == 0 && uVar2 == 0) {
            return uVar2;
          }
          if (uVar3 != 0) {
            return SUB84((in_d0 - in_d0) / (in_d0 - in_d0),0);
          }
        }
        iVar5 = (int)uVar3 >> 0x14;
        if (iVar5 == 0) {
          iVar5 = 0;
          while (uVar13 = 0, uVar3 == 0) {
            iVar5 = iVar5 + -0x15;
            uVar3 = uVar2 >> 0xb;
            uVar2 = uVar2 << 0x15;
          }
          for (; (uVar3 & 0x100000) == 0; uVar3 = uVar3 << 1) {
            uVar13 = uVar13 + 1;
          }
          uVar3 = uVar3 | uVar2 >> (0x20 - uVar13 & 0xff);
          uVar2 = uVar2 << (uVar13 & 0xff);
          iVar5 = iVar5 - (uVar13 - 1);
        }
        uVar3 = uVar3 & 0xfffff | 0x100000;
        uVar13 = 0;
        if ((iVar5 - 0x3ffU & 1) != 0) {
          iVar5 = (int)uVar2 >> 0x1f;
          uVar2 = uVar2 << 1;
          uVar3 = uVar3 * 2 - iVar5;
        }
        uVar6 = uVar2 << 1;
        iVar4 = uVar3 * 2 - ((int)uVar2 >> 0x1f);
        iVar7 = 0x16;
        uVar2 = 0x200000;
        iVar5 = 0;
        do {
          iVar9 = iVar5 + uVar2;
          if (iVar9 <= iVar4) {
            iVar4 = iVar4 - iVar9;
            iVar5 = iVar9 + uVar2;
            uVar13 = uVar13 + uVar2;
          }
          iVar7 = iVar7 + -1;
          uVar2 = uVar2 >> 1;
          iVar4 = iVar4 * 2 - ((int)uVar6 >> 0x1f);
          uVar6 = uVar6 << 1;
        } while (iVar7 != 0);
        iVar9 = 0x20;
        uVar2 = 0x80000000;
        uVar3 = 0;
        iVar7 = 0;
        do {
          uVar10 = uVar2 + iVar7;
          iVar11 = iVar5;
          if ((iVar5 < iVar4) || (uVar10 <= uVar6 && iVar4 == iVar5)) {
            iVar7 = uVar10 + uVar2;
            if (((int)uVar10 < 0) && (-1 < iVar7)) {
              iVar11 = iVar5 + 1;
            }
            iVar4 = iVar4 - iVar5;
            if (uVar6 < uVar10) {
              iVar4 = iVar4 + -1;
            }
            uVar6 = uVar6 - uVar10;
            uVar3 = uVar3 + uVar2;
          }
          iVar9 = iVar9 + -1;
          iVar4 = iVar4 * 2 - ((int)uVar6 >> 0x1f);
          uVar2 = uVar2 >> 1;
          uVar6 = uVar6 << 1;
          iVar5 = iVar11;
        } while (iVar9 != 0);
        if (iVar4 != 0 || uVar6 != 0) {
          if (uVar3 == 0xffffffff) {
            uVar13 = uVar13 + 1;
            uVar3 = 0;
          }
          else {
            uVar3 = uVar3 + 1 & 0xfffffffe;
          }
        }
        uVar3 = uVar3 >> 1;
        if ((uVar13 & 1) != 0) {
          uVar3 = uVar3 | 0x80000000;
        }
        return uVar3;
      }
      goto LAB_0002adec;
    }
LAB_0002adc0:
    dVar17 = in_d0 * in_d0;
    goto LAB_0002acd0;
  }
  if (DAT_0002b19c < (int)uVar10) {
    iVar5 = 2;
    goto LAB_0002ad68;
  }
  if ((int)uVar10 <= DAT_0002b19c + -0x3500000) goto LAB_0002ad68;
  iVar5 = ((int)uVar10 >> 0x14) + -0x3ff;
  if (0x14 < iVar5) {
    uVar1 = uVar16 >> (0x34U - iVar5 & 0xff);
    if (uVar16 == uVar1 << (0x34U - iVar5 & 0xff)) {
      iVar5 = 2 - (uVar1 & 1);
    }
    else {
      iVar5 = 0;
    }
    goto LAB_0002ad68;
  }
  if (uVar16 == 0) {
    uVar16 = (int)uVar10 >> (0x14U - iVar5 & 0xff);
    if (uVar10 == uVar16 << (0x14U - iVar5 & 0xff)) {
      iVar5 = 2 - (uVar16 & 1);
    }
    else {
      iVar5 = 0;
    }
    goto LAB_0002ad4c;
  }
  iVar5 = 0;
LAB_0002adec:
  uVar15 = FUN_0002b568();
  dVar17 = (double)CONCAT44(extraout_s1,uVar15);
  if ((uVar2 == 0) &&
     (((ulonglong)in_d0 & 0x7fffffff00000000) == 0 || (uVar3 & 0x3fffffff) == uVar13)) {
    if ((longlong)in_d1 < 0) {
      dVar17 = 1.0 / dVar17;
    }
    if (-1 < (longlong)in_d0) goto LAB_0002acd0;
    in_d0 = dVar17;
    if (uVar8 != 0x3ff00000 || iVar5 != 0) {
      if (iVar5 == 1) {
        dVar17 = -dVar17;
      }
      goto LAB_0002acd0;
    }
  }
  else if (iVar5 != 0 || -1 < (longlong)in_d0) {
    if (DAT_0002b1a8 < (int)uVar10) {
      if (DAT_0002b1a8 + 0x2100000 < (int)uVar10) {
        if (DAT_0002b1a8 + -0x1f00001 < (int)uVar8) {
LAB_0002aea4:
          in_d0 = DAT_0002b118;
          if ((int)uVar20 < 1) goto LAB_0002adb0;
          goto LAB_0002adc0;
        }
LAB_0002ae80:
        in_d0 = DAT_0002b118;
        if (-1 < (longlong)in_d1) goto LAB_0002adb0;
        goto LAB_0002adc0;
      }
      if ((int)uVar8 <= DAT_0002b1ac) goto LAB_0002ae80;
      if ((int)uVar13 < (int)uVar8) goto LAB_0002aea4;
      dVar18 = in_d0 - 1.0;
      dVar21 = -(DAT_0002b130 * (-(DAT_0002b120 + -dVar18 * 0.25) * dVar18 + 0.5) * dVar18 * dVar18)
               + dVar18 * DAT_0002b128;
      dVar17 = (double)CONCAT44((int)((ulonglong)(dVar21 + dVar18 * DAT_0002b138) >> 0x20),
                                DAT_0002b190);
      dVar21 = dVar21 - (dVar17 + -dVar18 * DAT_0002b138);
    }
    else {
      if ((uVar3 & uVar6) == 0) {
        iVar4 = -0x35;
        dVar17 = dVar17 * DAT_0002b140;
        uVar8 = (uint)((ulonglong)dVar17 >> 0x20);
      }
      else {
        iVar4 = 0;
      }
      uVar2 = uVar8 & 0xfffff;
      uVar13 = uVar2 | uVar13;
      iVar4 = ((int)uVar8 >> 0x14) + -0x3ff + iVar4;
      if (DAT_0002b1b4 < (int)uVar2) {
        if (DAT_0002b1b8 < (int)uVar2) {
          iVar4 = iVar4 + 1;
          uVar13 = uVar13 - 0x100000;
          goto LAB_0002afc8;
        }
        iVar7 = 1;
      }
      else {
LAB_0002afc8:
        iVar7 = 0;
      }
      pdVar12 = (double *)(DAT_0002b1bc + 0x2afe8 + iVar7 * 8);
      dVar23 = *pdVar12;
      dVar21 = (double)(((ulonglong)uVar13 << 0x20) + ((ulonglong)dVar17 & 0xffffffff));
      dVar22 = 1.0 / (dVar23 + dVar21);
      dVar17 = (double)((ulonglong)(((int)uVar13 >> 1 | 0x20000000U) + 0x80000 + iVar7 * 0x40000) <<
                       0x20);
      dVar25 = (dVar21 - dVar23) * dVar22;
      dVar18 = (double)((ulonglong)dVar25 & 0xffffffff00000000);
      dVar24 = -dVar18;
      dVar19 = dVar25 * dVar25;
      dVar22 = ((dVar21 - dVar23) + dVar24 * dVar17 + dVar24 * (dVar21 - (dVar17 - dVar23))) *
               dVar22;
      dVar21 = (dVar25 + dVar18) * dVar22 +
               dVar19 * dVar19 *
               (DAT_0002b170 +
               (DAT_0002b168 +
               (DAT_0002b160 +
               (DAT_0002b158 + (DAT_0002b148 + dVar19 * DAT_0002b150) * dVar19) * dVar19) * dVar19)
               * dVar19);
      dVar17 = (double)((ulonglong)(dVar18 * dVar18 + 3.0 + dVar21) & 0xffffffff00000000);
      dVar21 = (dVar21 - ((dVar17 - 3.0) + dVar24 * dVar18)) * dVar25 + dVar22 * dVar17;
      dVar18 = (double)((ulonglong)(dVar21 + dVar18 * dVar17) & 0xffffffff00000000);
      dVar21 = (dVar21 - (dVar18 + dVar24 * dVar17)) * DAT_0002b180 + dVar18 * DAT_0002b188 +
               pdVar12[2];
      dVar19 = (double)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
      dVar17 = (double)((ulonglong)(dVar21 + dVar18 * DAT_0002b178 + pdVar12[4] + dVar19) &
                       0xffffffff00000000);
      dVar21 = dVar21 - (((dVar17 - dVar19) - pdVar12[4]) + -dVar18 * DAT_0002b178);
    }
    dVar18 = dVar21 * in_d1 + (in_d1 - (double)((ulonglong)uVar20 << 0x20)) * dVar17;
    dVar17 = dVar17 * (double)((ulonglong)uVar20 << 0x20);
    dVar19 = 1.0;
    dVar21 = dVar18 + dVar17;
    uVar2 = (uint)((ulonglong)dVar21 >> 0x20);
    if (iVar5 == 1 && (longlong)in_d0 < 0) {
      dVar19 = -1.0;
    }
    if (DAT_0002b1b0 < (int)uVar2) {
      dVar23 = DAT_0002b118;
      if ((dVar21 == 1024.0) && (dVar18 + DAT_0002b330 <= 1024.0 - dVar17)) goto LAB_0002b1d8;
LAB_0002af68:
      dVar19 = dVar19 * dVar23;
    }
    else {
      if ((DAT_0002b38c < (int)(uVar2 & 0x7fffffff)) &&
         ((dVar23 = DAT_0002b378, uVar2 + DAT_0002b390 != 0 || SUB84(dVar21,0) != 0 ||
          (dVar18 <= dVar21 - dVar17)))) goto LAB_0002af68;
LAB_0002b1d8:
      if (DAT_0002b384 < (int)(uVar2 & 0x7fffffff)) {
        uVar2 = uVar2 + (0x100000 >> (((int)(uVar2 & 0x7fffffff) >> 0x14) - 0x3feU & 0xff));
        uVar3 = ((uVar2 & 0x7fffffff) >> 0x14) - 0x3ff;
        iVar5 = (int)(uVar2 & 0xfffff | 0x100000) >> (0x14 - uVar3 & 0xff);
        dVar17 = dVar17 - (double)((ulonglong)(uVar2 & ~(DAT_0002b388 >> (uVar3 & 0xff))) << 0x20);
        if ((longlong)dVar21 < 0) {
          iVar5 = -iVar5;
        }
      }
      else {
        iVar5 = 0;
      }
      dVar21 = (double)CONCAT44((int)((ulonglong)(dVar17 + dVar18) >> 0x20),DAT_0002b380);
      dVar17 = dVar21 * DAT_0002b338 + (dVar18 - (dVar21 - dVar17)) * DAT_0002b350;
      dVar23 = dVar17 + dVar21 * DAT_0002b340;
      dVar18 = dVar23 * dVar23;
      dVar17 = dVar17 - (dVar23 + -dVar21 * DAT_0002b340);
      dVar18 = dVar23 + -(DAT_0002b370 +
                         (DAT_0002b368 +
                         (DAT_0002b358 + (DAT_0002b348 + dVar18 * DAT_0002b360) * dVar18) * dVar18)
                         * dVar18) * dVar18;
      dVar17 = 1.0 - (((dVar23 * dVar18) / (dVar18 - 2.0) - (dVar17 + dVar23 * dVar17)) - dVar23);
      iVar5 = (int)((ulonglong)dVar17 >> 0x20) + iVar5 * 0x100000;
      if (iVar5 < 0x100000) {
        uVar15 = FUN_0002b580();
        dVar23 = (double)CONCAT44(extraout_s1_00,uVar15);
      }
      else {
        dVar23 = (double)CONCAT44(iVar5,SUB84(dVar17,0));
      }
    }
    dVar17 = dVar23 * dVar19;
    goto LAB_0002acd0;
  }
  dVar17 = (in_d0 - in_d0) / (in_d0 - in_d0);
LAB_0002acd0:
  return SUB84(dVar17,0);
}



/* ===== FUN_000266a8 @ 000266a8 size=120 ===== */

undefined8 FUN_000266a8(int *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (*param_1 == 2) {
    param_2 = 0x80;
    software_interrupt(0);
  }
  do {
    iVar3 = *param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_1;
      if (iVar2 != iVar3) break;
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = 2;
      }
      param_2 = (uint)!bVar1;
    } while (param_2 != 0);
    DataMemoryBarrier(0xb);
    if (iVar3 == iVar2) {
      if (iVar3 == 0) {
        return CONCAT44(param_2,param_1);
      }
      param_2 = 0x80;
      software_interrupt(0);
    }
  } while( true );
}



/* ===== FUN_00026940 @ 00026940 size=20 ===== */

void FUN_00026940(void)

{
  FUN_00023034(DAT_00026954 + 0x26950);
  return;
}



/* ===== FUN_00026958 @ 00026958 size=120 ===== */

void FUN_00026958(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 auStack_2c [4];
  uint local_28;
  undefined4 local_24;
  
  iVar3 = DAT_000269d0 + 0x26978;
  puVar2 = param_2;
  if ((param_2 != (undefined1 *)0x0) && ((*(uint *)(param_2 + 4) & 0x4000000) == 0)) {
    puVar2 = auStack_2c;
    thunk_FUN_00029380(puVar2,param_2,0x14);
    iVar1 = DAT_000269d4;
    if ((local_28 & 4) != 0) {
      iVar1 = DAT_000269d8;
    }
    local_24 = *(undefined4 *)(iVar3 + iVar1);
    local_28 = local_28 | 0x4000000;
  }
  FUN_00026db8(param_1,puVar2,param_3,8);
  return;
}



/* ===== FUN_000269dc @ 000269dc size=84 ===== */

/* WARNING: Removing unreachable block (ram,0x0002bdac) */

undefined4 FUN_000269dc(undefined4 *param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  undefined4 in_fpscr;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  
  *param_1 = unaff_r4;
  param_1[1] = unaff_r5;
  param_1[2] = unaff_r6;
  param_1[3] = unaff_r7;
  param_1[4] = unaff_r8;
  param_1[5] = unaff_r9;
  param_1[6] = unaff_r10;
  param_1[7] = unaff_r11;
  param_1[8] = register0x00000054;
  param_1[9] = unaff_lr;
  *(undefined8 *)(param_1 + 10) = unaff_d8;
  *(undefined8 *)(param_1 + 0xc) = unaff_d9;
  *(undefined8 *)(param_1 + 0xe) = unaff_d10;
  *(undefined8 *)(param_1 + 0x10) = unaff_d11;
  *(undefined8 *)(param_1 + 0x12) = unaff_d12;
  *(undefined8 *)(param_1 + 0x14) = unaff_d13;
  *(undefined8 *)(param_1 + 0x16) = unaff_d14;
  *(undefined8 *)(param_1 + 0x18) = unaff_d15;
  param_1[0x1b] = in_fpscr;
  param_1[0x40] = 0;
  return 0;
}



/* ===== FUN_00026a00 @ 00026a00 size=92 ===== */

/* WARNING: Removing unreachable block (ram,0x00026a38) */

uint FUN_00026a00(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (0xffffefff < param_1) {
    if (param_1 == 0xffffffda) {
      software_interrupt(0);
    }
    iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(uint *)(iVar1 + *(int *)(DAT_0002b700 + 0x2b6f8)) = -param_1;
    return 0xffffffff;
  }
  return param_1;
}



/* ===== FUN_00026a40 @ 00026a40 size=48 ===== */

uint FUN_00026a40(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_00026a70 + 0x26a68)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_00026a74 @ 00026a74 size=48 ===== */

uint FUN_00026a74(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_00026aa4 + 0x26a9c)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_00026aa8 @ 00026aa8 size=56 ===== */

uint FUN_00026aa8(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_000270b8 + 0x270b0)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_00026ab0 @ 00026ab0 size=84 ===== */

undefined4 FUN_00026ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(DAT_00026b04 + 0x26abc) == 0) {
    uVar1 = FUN_00026aa8();
    return uVar1;
  }
  uVar1 = FUN_00022c10();
  uVar2 = FUN_00026aa8(param_1,param_2,param_3);
  FUN_00022cbc(uVar1);
  return uVar2;
}



/* ===== FUN_00026b08 @ 00026b08 size=48 ===== */

uint FUN_00026b08(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_00026b38 + 0x26b30)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_00026b3c @ 00026b3c size=12 ===== */

undefined4 FUN_00026b3c(void)

{
  return *(undefined4 *)((int)&DAT_00026b48 + DAT_00026b48);
}



/* ===== FUN_00026b4c @ 00026b4c size=16 ===== */

void FUN_00026b4c(void)

{
  software_interrupt(0);
  return;
}



/* ===== FUN_00026b5c @ 00026b5c size=16 ===== */

void FUN_00026b5c(void)

{
  software_interrupt(0);
  return;
}



/* ===== FUN_00026b6c @ 00026b6c size=48 ===== */

uint FUN_00026b6c(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_00026b9c + 0x26b94)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_00026ba0 @ 00026ba0 size=48 ===== */

uint FUN_00026ba0(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_00026bd0 + 0x26bc8)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_00026bd4 @ 00026bd4 size=204 ===== */

uint FUN_00026bd4(uint param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r3;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint local_8;
  undefined4 uStack_4;
  
  uVar3 = 0;
  puVar5 = param_2;
  if (((uint)param_2 & 0x40) != 0) {
    puVar5 = &local_8;
    uVar3 = param_3;
  }
  uVar3 = uVar3 & 0xffff;
  if (*(int *)(DAT_00026ca0 + 0x26bfc) == 0) {
    software_interrupt(0);
    if (0xfffff000 < param_1) {
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(uint *)(iVar2 + *(int *)(DAT_00026ca4 + 0x26c34)) = -param_1;
      param_1 = 0xffffffff;
    }
  }
  else {
    uVar4 = param_1;
    local_8 = param_3;
    uStack_4 = param_4;
    uVar1 = FUN_00022c10();
    software_interrupt(0);
    iVar2 = extraout_r3;
    if (0xfffff000 < param_1) {
      uVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      iVar2 = *(int *)(DAT_00026ca8 + 0x26c8c);
      *(uint *)(uVar3 + iVar2) = -param_1;
      param_1 = 0xffffffff;
    }
    FUN_00022cbc(uVar1,param_2,uVar3,iVar2,uVar4,puVar5);
  }
  return param_1;
}



/* ===== FUN_00026cac @ 00026cac size=52 ===== */

void FUN_00026cac(uint param_1)

{
  int iVar1;
  int extraout_r1;
  uint extraout_r2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  do {
    software_interrupt(0);
    if (0xfffff000 < param_1) {
      *(uint *)(iVar1 + *(int *)(DAT_00026ce0 + 0x26cd8)) = -param_1;
    }
    FUN_00021c14();
    iVar1 = extraout_r1;
    param_1 = extraout_r2;
  } while( true );
}



/* ===== FUN_00026ce4 @ 00026ce4 size=84 ===== */

int FUN_00026ce4(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((*(int *)(DAT_00026d38 + 0x26cf8) == 0) && (iVar2 = FUN_0002b69c(), iVar2 < 0)) ||
     ((iVar2 = *(int *)(DAT_00026d3c + 0x26d0c), param_1 != 0 &&
      (iVar1 = FUN_0002b69c(iVar2 + param_1), iVar1 < 0)))) {
    iVar2 = -1;
  }
  return iVar2;
}



/* ===== FUN_00026d40 @ 00026d40 size=16 ===== */

void FUN_00026d40(void)

{
  software_interrupt(0);
  return;
}



/* ===== FUN_00026d50 @ 00026d50 size=96 ===== */

uint FUN_00026d50(uint param_1)

{
  int iVar1;
  uint in_stack_00000004;
  
  if ((in_stack_00000004 & 0xfff) == 0) {
    software_interrupt(0);
    if (param_1 < 0xfffff001) {
      return param_1;
    }
    iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(uint *)(iVar1 + *(int *)(DAT_00026db4 + 0x26dac)) = -param_1;
  }
  else {
    iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar1 + *(int *)(DAT_00026db0 + 0x26d78)) = 0x16;
  }
  return 0xffffffff;
}



/* ===== FUN_00026db8 @ 00026db8 size=48 ===== */

uint FUN_00026db8(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_00026de8 + 0x26de0)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_00026dec @ 00026dec size=16 ===== */

void FUN_00026dec(void)

{
  software_interrupt(0);
  return;
}



/* ===== FUN_00026dfc @ 00026dfc size=48 ===== */

uint FUN_00026dfc(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_00026e2c + 0x26e24)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_00026e30 @ 00026e30 size=84 ===== */

undefined4 FUN_00026e30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(DAT_00026e84 + 0x26e3c) == 0) {
    uVar1 = FUN_00026dfc();
    return uVar1;
  }
  uVar1 = FUN_00022c10();
  uVar2 = FUN_00026dfc(param_1,param_2,param_3);
  FUN_00022cbc(uVar1);
  return uVar2;
}



/* ===== FUN_00026e88 @ 00026e88 size=48 ===== */

uint FUN_00026e88(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_00026eb8 + 0x26eb0)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_00026ebc @ 00026ebc size=88 ===== */

uint FUN_00026ebc(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 - 0xcU < 3) {
    software_interrupt(0);
    if (param_1 < 0xfffff001) {
      return param_1;
    }
    iVar2 = *(int *)(DAT_00026f14 + 0x26ee8);
  }
  else {
    software_interrupt(0);
    if (param_1 < 0xfffff001) {
      return param_1;
    }
    iVar2 = *(int *)((int)&DAT_00026f14 + DAT_00026f18);
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + iVar2) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_00026f1c @ 00026f1c size=140 ===== */

undefined4 FUN_00026f1c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = param_3;
  uStack_4 = param_4;
  if ((*(int *)(DAT_00026fa8 + 0x26f40) == 0) || (param_2 != 7 && param_2 != 0xe)) {
    uVar1 = FUN_00026ebc(param_1,param_2,param_3,*(int *)(DAT_00026fa8 + 0x26f40),param_1,&local_8);
  }
  else {
    uVar2 = FUN_00022c10();
    uVar1 = FUN_00026ebc(param_1,param_2,param_3);
    FUN_00022cbc(uVar2);
  }
  return uVar1;
}



/* ===== FUN_00026fac @ 00026fac size=48 ===== */

uint FUN_00026fac(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_00026fdc + 0x26fd4)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_00026fe0 @ 00026fe0 size=156 ===== */

uint FUN_00026fe0(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(DAT_0002707c + 0x26ff0) == 0) {
    software_interrupt(0);
    if (0xfffff000 < param_1) {
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(uint *)(iVar2 + *(int *)(DAT_00027080 + 0x2701c)) = -param_1;
      param_1 = 0xffffffff;
    }
  }
  else {
    uVar1 = FUN_00022c10();
    software_interrupt(0);
    if (0xfffff000 < param_1) {
      param_2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(uint *)(param_2 + *(int *)(DAT_00027084 + 0x27068)) = -param_1;
      param_1 = 0xffffffff;
    }
    FUN_00022cbc(uVar1,param_2);
  }
  return param_1;
}



/* ===== FUN_000270bc @ 000270bc size=128 ===== */

undefined8 FUN_000270bc(uint param_1,int *param_2)

{
  int iVar1;
  int local_10 [2];
  
  if ((param_2 != (int *)0x0) && ((*param_2 < 0 || ((param_2[1] & 1U) != 0)))) {
    param_2 = local_10;
  }
  software_interrupt(0);
  if (0xfffff000 < param_1) {
    iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(uint *)(iVar1 + *(int *)(DAT_0002713c + 0x27130)) = -param_1;
    param_1 = 0xffffffff;
  }
  return CONCAT44(param_2,param_1);
}



/* ===== FUN_00027140 @ 00027140 size=68 ===== */

int FUN_00027140(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined1 auStack_18 [20];
  
  if (param_1 == (undefined1 *)0x0) {
    param_1 = auStack_18;
    param_2 = 0;
  }
  local_1c = &local_20;
  local_20 = param_2;
  iVar1 = FUN_000271a0(param_1,&local_1c,1,0x10,param_3);
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}



/* ===== FUN_00027184 @ 00027184 size=28 ===== */

void FUN_00027184(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_000271a0(param_1,param_2,0xffffffff,param_3,param_4,param_2,param_3);
  return;
}



/* ===== FUN_000271a0 @ 000271a0 size=164 ===== */

int FUN_000271a0(int *param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int local_18 [4];
  
  if (param_1 == param_2 || param_1 == (int *)0x0) {
    if (param_1 == (int *)0x0) {
      param_4 = 0xffffffff;
    }
    iVar4 = 0;
    param_1 = local_18;
  }
  else {
    iVar4 = 1;
  }
  if (param_3 <= param_4) {
    param_4 = param_3;
  }
  puVar2 = (uint *)*param_2;
  for (uVar1 = param_4; uVar1 != 0; uVar1 = uVar1 - 1) {
    puVar3 = puVar2 + 1;
    uVar5 = *puVar2;
    if (0x7f < uVar5) {
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar4 + *(int *)(DAT_00027244 + 0x27224)) = 0x54;
      return -1;
    }
    *(char *)param_1 = (char)uVar5;
    puVar2 = (uint *)0x0;
    if (uVar5 == 0) break;
    param_1 = (int *)((int)param_1 + iVar4);
    puVar2 = puVar3;
  }
  if (param_1 != local_18) {
    *param_2 = (int)puVar2;
  }
  return param_4 - uVar1;
}



/* ===== FUN_00027248 @ 00027248 size=56 ===== */

ushort * FUN_00027248(int param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  
  uVar5 = FUN_00026f1c(param_1,3);
  if (uVar5 == 0xffffffff) {
    return (ushort *)0x0;
  }
  cVar1 = *param_2;
  puVar6 = (ushort *)0x0;
  iVar12 = DAT_0001e264 + 0x1dec4;
  if (cVar1 == 'r') {
    uVar7 = 0;
LAB_0001df04:
    if (param_2[1] == 'b') {
      param_2 = param_2 + 1;
    }
    if (param_2[1] == '+') {
      param_2 = param_2 + 1;
      uVar7 = (uVar7 | 1) + 1;
    }
    while( true ) {
      param_2 = param_2 + 1;
      if (*param_2 == '\0') break;
      if (*param_2 == 'x') {
        uVar7 = uVar7 | 0x80;
      }
    }
    puVar6 = (ushort *)FUN_000212e0(0x44);
    if (puVar6 == (ushort *)0x0) {
      return (ushort *)0x0;
    }
    puVar6[4] = 0;
    puVar6[5] = 0;
    *puVar6 = 0x2000;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x20] = 0;
    uVar3 = DAT_0001e26c;
    puVar6[0x21] = 0;
    if (param_1 < 0) {
      if (param_1 != -1) {
        uVar7 = uVar7 | 0x20000;
      }
      iVar4 = FUN_00026bd4(uVar5,uVar7,0x1b6);
      *(int *)(puVar6 + 2) = iVar4;
      if (-1 < iVar4) {
LAB_0001df98:
        *puVar6 = *puVar6 & 0x2000 | (ushort)uVar7 & 0x400 |
                  (ushort)DAT_0001e270 & (ushort)(uVar7 >> 2) | (ushort)(((uVar7 & 3) + 1 ^ 3) << 4)
        ;
        if (*(int *)(puVar6 + 2) != 0x7fffffff) {
          iVar8 = coproc_movefrom_User_R_Thread_and_Process_ID();
          uVar10 = *(undefined4 *)(iVar8 + *(int *)(DAT_0001e274 + 0x1dfe4));
          iVar4 = FUN_00020ab8();
          if (iVar4 != 0) {
            *puVar6 = *puVar6 | 0x100;
          }
          *(undefined4 *)(iVar8 + *(int *)(DAT_0001e278 + 0x1e004)) = uVar10;
        }
        if (*(int *)(puVar6 + 4) == 0) {
          iVar4 = FUN_000212e0(0x1000);
          *(int *)(puVar6 + 4) = iVar4;
          if (iVar4 == 0) {
            puVar6[6] = 0;
            puVar6[7] = 0;
          }
          else {
            *(int *)(puVar6 + 6) = iVar4 + 0x1000;
            *puVar6 = *puVar6 | 0x4000;
          }
        }
        uVar10 = *(undefined4 *)(puVar6 + 4);
        *(undefined4 *)(puVar6 + 0xc) = uVar10;
        *(undefined4 *)(puVar6 + 0xe) = uVar10;
        *(undefined4 *)(puVar6 + 8) = uVar10;
        *(undefined4 *)(puVar6 + 10) = uVar10;
        *(undefined1 *)(puVar6 + 1) = 0;
        puVar6[0x16] = 0;
        puVar6[0x17] = 0;
        *(undefined4 *)(puVar6 + 0x1a) = **(undefined4 **)(iVar12 + DAT_0001e27c);
        if ((*puVar6 & 0x2000) == 0) {
          return puVar6;
        }
        iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
        iVar4 = iVar4 + -0x490;
        piVar9 = *(int **)(iVar12 + DAT_0001e280);
        if (piVar9[2] != iVar4) {
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar9;
            if (iVar8 != 0) goto LAB_0001e0b0;
            bVar2 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar2);
          *piVar9 = 1;
LAB_0001e0b0:
          DataMemoryBarrier(0xb);
          if (iVar8 != 0) {
            FUN_000266a8(piVar9);
          }
          piVar9[2] = iVar4;
        }
        piVar9[1] = piVar9[1] + 1;
        piVar11 = *(int **)(iVar12 + DAT_0001e284);
        if (piVar11[2] != iVar4) {
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar11;
            if (iVar8 != 0) goto LAB_0001e108;
            bVar2 = (bool)hasExclusiveAccess(piVar11);
          } while (!bVar2);
          *piVar11 = 1;
LAB_0001e108:
          DataMemoryBarrier(0xb);
          if (iVar8 != 0) {
            FUN_000266a8(piVar11);
          }
          piVar11[2] = iVar4;
        }
        iVar4 = piVar11[1];
        uVar10 = **(undefined4 **)(iVar12 + DAT_0001e288);
        **(undefined4 **)(iVar12 + DAT_0001e288) = puVar6;
        *(undefined4 *)(puVar6 + 0x10) = uVar10;
        if (iVar4 == 0) {
          piVar11[2] = 0;
          do {
            iVar12 = *piVar11;
            DataMemoryBarrier(0xb);
            do {
              iVar4 = *piVar11;
              if (iVar4 != iVar12) goto LAB_0001e164;
              bVar2 = (bool)hasExclusiveAccess(piVar11);
            } while (!bVar2);
            *piVar11 = 0;
LAB_0001e164:
            DataMemoryBarrier(0xb);
          } while (iVar12 != iVar4);
          if (1 < iVar12) {
            software_interrupt(0);
          }
        }
        iVar12 = piVar9[1];
        piVar9[1] = iVar12 + -1;
        if (iVar12 + -1 != 0) {
          return puVar6;
        }
        piVar9[2] = 0;
        do {
          iVar12 = *piVar9;
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar9;
            if (iVar4 != iVar12) goto LAB_0001e1c8;
            bVar2 = (bool)hasExclusiveAccess(piVar9);
          } while (!bVar2);
          *piVar9 = 0;
LAB_0001e1c8:
          DataMemoryBarrier(0xb);
          if (iVar12 == iVar4) {
            if (1 < iVar12) {
              software_interrupt(0);
              return puVar6;
            }
            return puVar6;
          }
        } while( true );
      }
      goto LAB_0001e24c;
    }
    *(int *)(puVar6 + 2) = param_1;
    if ((((uVar7 & uVar3) + 1 & ~(uVar5 + 1)) == 0) &&
       (((uVar7 & ~uVar5 & 0x400) == 0 || (iVar4 = FUN_00026f1c(param_1,4,0x400), iVar4 == 0)))) {
      uVar7 = uVar7 | uVar5 & 0x20000;
      goto LAB_0001df98;
    }
  }
  else {
    if (cVar1 == 'w') {
      uVar7 = 0x241;
      goto LAB_0001df04;
    }
    if (cVar1 == 'a') {
      uVar7 = 0x441;
      goto LAB_0001df04;
    }
  }
  iVar12 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar12 + *(int *)(DAT_0001e268 + 0x1def0)) = 0x16;
  if (puVar6 == (ushort *)0x0) {
    return (ushort *)0x0;
  }
LAB_0001e24c:
  if ((*puVar6 & 0x2000) != 0) {
    FUN_00021048(puVar6);
  }
  return (ushort *)0x0;
}



/* ===== FUN_00027280 @ 00027280 size=40 ===== */

void FUN_00027280(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_000272a8(param_1,param_2,&uStack_8,param_4,param_1,&uStack_8);
  return;
}



/* ===== FUN_000272a8 @ 000272a8 size=132 ===== */

int FUN_000272a8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_94 [64];
  undefined2 local_54;
  undefined1 local_52;
  undefined4 local_50;
  undefined1 *local_4c;
  undefined2 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_4c = auStack_94;
  local_20 = 1;
  local_54 = 0xd0;
  local_52 = 0;
  local_28 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_34 = 0;
  local_50 = param_1;
  local_48 = &local_54;
  local_44 = local_4c;
  local_40 = local_4c;
  local_3c = local_4c;
  local_38 = local_4c;
  iVar1 = FUN_0001e64c(&local_54);
  if ((0 < iVar1) && (iVar2 = FUN_0001fc5c(&local_54), iVar2 != 0)) {
    iVar1 = -1;
  }
  return iVar1;
}



/* ===== FUN_0002732c @ 0002732c size=148 ===== */

uint FUN_0002732c(ushort *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  if ((*param_1 & 4) == 0) {
    if ((int)param_3 < 0) {
      param_3 = 0x7fffffff;
    }
    if (*(int *)(param_1 + 2) == -2) {
      if (*(code **)(param_1 + 0x24) == (code *)0x0) goto LAB_00027398;
      uVar1 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x22),param_2,param_3);
    }
    else {
      uVar1 = FUN_00026e30(*(int *)(param_1 + 2),param_2,param_3);
    }
    if ((int)uVar1 < 1) {
      if (uVar1 == 0) {
        *param_1 = *param_1 | 4;
        return 0;
      }
LAB_00027398:
      *param_1 = *param_1 | 8;
      return 0;
    }
    if (uVar1 <= param_3) {
      return uVar1;
    }
    FUN_00021c14();
  }
  return 0;
}



/* ===== FUN_000273c0 @ 000273c0 size=296 ===== */

uint FUN_000273c0(ushort *param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  code *pcVar11;
  
  iVar10 = coproc_movefrom_User_R_Thread_and_Process_ID();
  uVar8 = param_3;
  while( true ) {
    if (uVar8 == 0) {
      return param_3;
    }
    uVar4 = uVar8;
    if ((int)uVar8 < 0) {
      uVar4 = 0x7fffffff;
    }
    if (*(int *)(param_1 + 2) == -2) break;
    iVar3 = FUN_0002b788(*(int *)(param_1 + 2),param_2,uVar4);
LAB_00027468:
    if (iVar3 < 0) goto LAB_00027414;
    uVar8 = uVar8 - iVar3;
    param_2 = param_2 + iVar3;
  }
  pcVar11 = *(code **)(param_1 + 0x26);
  if (pcVar11 == (code *)0x0) {
    *(undefined4 *)(iVar10 + *(int *)(DAT_000274e8 + 0x27414)) = 0x16;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x22);
    *(undefined4 *)(iVar10 + *(int *)(DAT_000274f0 + 0x2745c)) = 0xb;
    iVar3 = (*pcVar11)(uVar2,param_2);
    if (iVar3 != 0) goto LAB_00027468;
  }
LAB_00027414:
  iVar10 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *param_1 = *param_1 | 8;
  iVar10 = *(int *)(iVar10 + *(int *)(DAT_000274ec + 0x27430));
  if (iVar10 == 4 || iVar10 == 0xb) {
    pcVar6 = *(char **)(param_1 + 4);
    uVar4 = *(int *)(param_1 + 6) - (int)pcVar6;
    if (uVar4 != 0) {
      pcVar9 = (char *)(param_2 + -1);
      if (uVar8 < uVar4) {
        pcVar5 = pcVar6 + uVar8;
      }
      else {
        pcVar5 = pcVar6 + uVar4;
      }
      do {
        pcVar9 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar7 = pcVar6 + 1;
        *pcVar6 = cVar1;
        if ((cVar1 == '\n') && ((*param_1 & 0x100) != 0)) break;
        pcVar6 = pcVar7;
      } while (pcVar5 != pcVar7);
      *(char **)(param_1 + 8) = pcVar6;
      uVar8 = uVar8 - ((int)pcVar6 - *(int *)(param_1 + 4));
    }
  }
  return param_3 - uVar8;
}



/* ===== FUN_000274f4 @ 000274f4 size=296 ===== */

uint FUN_000274f4(int param_1,uint param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_3 & 0x200;
  if ((*param_3 & 0x200) != 0) {
LAB_00027510:
    uVar3 = FUN_000273c0(param_3,param_1,param_2);
    return uVar3;
  }
  iVar1 = *(int *)(param_3 + 8);
  uVar2 = *(int *)(param_3 + 6) - iVar1;
  if (*(int *)(param_3 + 2) == -3) {
    uVar3 = param_2;
    if (uVar2 <= param_2) {
      uVar3 = uVar2;
    }
    thunk_FUN_00029380(iVar1,param_1,uVar3);
    *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + uVar3;
    uVar3 = param_2;
  }
  else if (uVar2 < param_2) {
    if ((*(int *)(param_3 + 4) == iVar1) || (iVar1 = FUN_0001e424(param_3), iVar1 == 0))
    goto LAB_00027510;
  }
  else {
    thunk_FUN_00029380(iVar1,param_1,param_2);
    *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + param_2;
    uVar3 = param_2;
    if (((*param_3 & 0x100) != 0) &&
       ((iVar1 = FUN_00029a70(param_1,10,param_2), iVar1 != 0 &&
        (uVar2 = FUN_0001e424(param_3), uVar2 != 0)))) {
      if (param_2 < uVar2) {
        uVar2 = param_2;
      }
      iVar1 = FUN_00029860(param_1 + (param_2 - uVar2),10);
      if (iVar1 != 0) {
        iVar1 = (param_1 + param_2) - iVar1;
        uVar3 = param_2 - iVar1;
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) - iVar1;
      }
    }
  }
  return uVar3;
}



/* ===== FUN_0002761c @ 0002761c size=44 ===== */

void FUN_0002761c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0002732c(param_1,*(int *)(param_1 + 8),*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)
                      );
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 8);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 8) + iVar1;
  return;
}



/* ===== FUN_00027648 @ 00027648 size=152 ===== */

undefined4 FUN_00027648(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if ((uVar1 & param_2) == 0) {
    if ((uVar1 & 0x880) == 0) {
      *param_1 = uVar1 | param_2;
      goto LAB_00027694;
    }
  }
  else {
LAB_00027694:
    if ((*param_1 & 0x10) == 0) {
      if ((*param_1 & 0x40) == 0) {
LAB_000276cc:
        *param_1 = *param_1 | 1;
        return 0;
      }
      iVar2 = FUN_0001e424(param_1);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_1 + 4);
        *param_1 = *param_1 & 0xffbf;
        goto LAB_000276cc;
      }
      goto LAB_00027680;
    }
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + *(int *)(DAT_000276e0 + 0x27680)) = 9;
LAB_00027680:
  *param_1 = *param_1 | 8;
  return 0xffffffff;
}



/* ===== FUN_000276e4 @ 000276e4 size=224 ===== */

uint FUN_000276e4(ushort *param_1,ushort param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  if ((uVar1 & param_2) == 0) {
    if ((uVar1 & 0x880) == 0) {
      *param_1 = uVar1 | param_2;
      goto LAB_00027730;
    }
  }
  else {
LAB_00027730:
    uVar1 = *param_1;
    if ((uVar1 & 0x20) == 0) {
      if ((uVar1 & 3) != 0) {
        if (((uVar1 & 4) == 0) &&
           ((*(int *)(param_1 + 10) != *(int *)(param_1 + 8) || ((uVar1 & 2) != 0)))) {
          if ((uVar1 & 0x400) == 0) {
            uVar4 = 1;
          }
          else {
            uVar4 = 2;
          }
          iVar3 = FUN_0002b93c(param_1,0,uVar4);
          if (iVar3 != 0) goto LAB_0002771c;
        }
        *param_1 = *param_1 & 0xfffc;
        uVar4 = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)(param_1 + 0xc) = uVar4;
        *(undefined4 *)(param_1 + 8) = uVar4;
        *(undefined4 *)(param_1 + 10) = uVar4;
      }
      uVar1 = *param_1;
      uVar2 = uVar1 & 0xb00;
      *param_1 = uVar1 | 0x40;
      if ((uVar1 & 0xb00) == 0) {
        *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_1 + 6);
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + *(int *)(DAT_000277c4 + 0x2771c)) = 9;
LAB_0002771c:
  *param_1 = *param_1 | 8;
  return 0xffffffff;
}



/* ===== FUN_000277c8 @ 000277c8 size=108 ===== */

ulonglong FUN_000277c8(uint param_1,ulonglong *param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 < 0) {
    if ((param_1 & 0x800) == 0) {
      uVar1 = (uint)*param_2;
      if (param_1 == 0x100) {
        uVar1 = (uint)(char)uVar1;
      }
      else if (param_1 == 0x200) {
        uVar1 = (uint)(short)uVar1;
      }
      return (longlong)(int)uVar1;
    }
  }
  else if ((param_1 & 0x800) == 0) {
    uVar1 = (uint)*param_2;
    if (param_1 == 0x100) {
      uVar1 = uVar1 & 0xff;
    }
    else if (param_1 == 0x200) {
      uVar1 = uVar1 & 0xffff;
    }
    return (ulonglong)uVar1;
  }
  return *param_2;
}



/* ===== FUN_00027834 @ 00027834 size=48 ===== */

void FUN_00027834(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == 0x100) {
    *(char *)param_1 = (char)param_3;
    return;
  }
  if (param_2 != 0x800) {
    if (param_2 == 0x200) {
      *(short *)param_1 = (short)param_3;
    }
    else {
      *param_1 = param_3;
    }
    return;
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  return;
}



/* ===== FUN_00027864 @ 00027864 size=276 ===== */

undefined1 *
FUN_00027864(undefined1 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,char param_6
            )

{
  bool bVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  char cVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  
  if ((param_5 < 0) && (param_5 = -param_5, param_4 < 0)) {
    bVar1 = true;
    iVar7 = -param_3;
    iVar8 = -(param_4 + (uint)(param_3 != 0));
  }
  else {
    bVar1 = false;
    iVar7 = param_3;
    iVar8 = param_4;
  }
  *param_1 = 0;
  iVar2 = FUN_0001bcf8(0xffffffff,param_5,param_3,param_4,param_1,param_2,param_3);
  FUN_0001bda0(0xffffffff,param_5);
  iVar6 = extraout_r1 + 1;
  if (param_5 == iVar6) {
    iVar2 = iVar2 + 1;
    iVar6 = 0;
  }
  do {
    puVar5 = param_1;
    uVar9 = FUN_0001bda0(iVar7,param_5);
    iVar7 = (int)uVar9;
    if (iVar8 != 0) {
      uVar10 = FUN_0001bda0(iVar8,param_5);
      iVar3 = (int)((ulonglong)uVar10 >> 0x20);
      iVar8 = (int)uVar10;
      uVar10 = FUN_0001bda0(iVar3 * iVar6 + (int)(uVar9 >> 0x20),param_5);
      uVar9 = CONCAT44((int)((ulonglong)uVar10 >> 0x20),(int)uVar10 + iVar3 * iVar2 + iVar7);
    }
    iVar7 = (int)uVar9;
    cVar4 = (char)(uVar9 >> 0x20);
    if (uVar9 < 0xa00000000) {
      cVar4 = cVar4 + '0';
    }
    else {
      cVar4 = cVar4 + param_6;
    }
    param_1 = puVar5 + -1;
    puVar5[-1] = cVar4;
  } while (iVar8 != 0 || iVar7 != 0);
  if (bVar1) {
    puVar5[-2] = 0x2d;
    param_1 = puVar5 + -2;
  }
  return param_1;
}



/* ===== FUN_00027978 @ 00027978 size=1892 ===== */

/* WARNING: Removing unreachable block (ram,0x00027a1c) */

int FUN_00027978(undefined4 param_1,undefined4 *param_2,code *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char extraout_r1;
  char extraout_r1_00;
  double *pdVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  double *pdVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  byte bVar16;
  char *pcVar17;
  char *pcVar18;
  int iVar19;
  undefined4 *puVar20;
  byte *pbVar21;
  byte bVar22;
  uint uVar23;
  char cVar24;
  int iVar25;
  bool bVar26;
  bool bVar27;
  uint in_fpscr;
  double in_d0;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  int local_e4;
  char local_c8 [8];
  char local_c0;
  char local_b4 [4];
  undefined2 local_b0;
  byte local_ae;
  byte abStack_ad [21];
  undefined4 local_98;
  uint local_94;
  char *local_90;
  int local_8c;
  int local_88;
  char *local_84;
  undefined4 local_80;
  byte *local_7c;
  byte *local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined4 local_68 [13];
  
  local_e4 = param_2[1];
  bVar16 = *(byte *)(param_2 + 2);
  pbVar21 = (byte *)*param_2;
  local_c0 = 'e';
  if ((bVar16 | 0x20) == 0x61) {
    bVar26 = (int)pbVar21 < 0;
    local_c0 = 'p';
    if (bVar26) {
      pbVar21 = (byte *)0xe;
    }
  }
  else {
    bVar26 = false;
    if ((int)pbVar21 < 0) {
      pbVar21 = (byte *)0x6;
    }
  }
  local_c8[0] = '\0';
  if ((param_2[3] & 2) == 0) {
    if ((param_2[3] & 1) != 0) {
      local_c8[0] = ' ';
    }
  }
  else {
    local_c8[0] = '+';
  }
  local_84 = (char *)0x0;
  local_c8[1] = 0;
  uVar10 = in_fpscr & 0xfffffff | (uint)(in_d0 == 0.0) << 0x1e;
  dVar29 = DAT_00027e08;
  if (SUB41(uVar10 >> 0x1e,0)) {
    pbVar14 = (byte *)0xffffffff;
    iVar19 = 0x11;
    iVar25 = 9;
    uVar23 = 10;
    if (SUB84(in_d0,0) != (int)((ulonglong)in_d0 >> 0x20)) {
      local_c8[0] = '-';
    }
  }
  else {
    dVar28 = in_d0;
    if (in_d0 < 0.0) {
      local_c8[0] = '-';
      dVar28 = -in_d0;
    }
    uVar10 = in_fpscr & 0xfffffff | (uint)(dVar28 * 0.25 == dVar28) << 0x1e;
    if (SUB41(uVar10 >> 0x1e,0)) {
      local_84 = (char *)0x0;
      param_2[4] = 0x20;
      pcVar18 = (char *)0x20;
      if (bVar16 < 0x61) {
        pcVar18 = local_84;
      }
      local_8c = 0x70;
      local_88 = 3;
      puVar20 = &local_80;
      if (bVar16 < 0x61) {
        local_84 = (char *)((int)pcVar18 + 4);
      }
      local_84 = (char *)((int)local_84 + DAT_00027e28 + 0x27ca8);
      bVar22 = bVar16;
      goto LAB_00027c24;
    }
    if ((bVar16 | 0x20) == 0x61) {
      pbVar14 = (byte *)0x7;
      iVar19 = 0xe;
      iVar25 = 8;
      pdVar12 = (double *)(DAT_00027e34 + 0x27dc8);
      uVar23 = 0x10;
      dVar29 = DAT_00027e18;
      dVar31 = DAT_00027e20;
    }
    else {
      pbVar14 = (byte *)0x8;
      iVar19 = 0x11;
      iVar25 = 9;
      pdVar12 = (double *)(DAT_00027e30 + 0x27d98);
      uVar23 = 10;
      dVar31 = DAT_00027e10;
    }
    pdVar4 = pdVar12 + 9;
    iVar7 = 0x100;
    in_d0 = dVar28;
    do {
      pdVar4 = pdVar4 + -1;
      if (dVar31 <= dVar28) {
        dVar30 = in_d0 / *pdVar4;
        uVar1 = uVar10 & 0xfffffff | (uint)(dVar30 < dVar31) << 0x1f;
        uVar10 = uVar1 | (uint)(NAN(dVar30) || NAN(dVar31)) << 0x1c;
        if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar10 >> 0x1c) & 1)) {
          pbVar14 = pbVar14 + iVar7;
          in_d0 = dVar30;
        }
      }
      else {
        dVar30 = in_d0 * *pdVar4;
        uVar10 = uVar10 & 0xfffffff | (uint)(dVar30 < dVar29) << 0x1f;
        if (SUB41(uVar10 >> 0x1f,0)) {
          pbVar14 = pbVar14 + -iVar7;
          in_d0 = dVar30;
        }
      }
      iVar7 = iVar7 >> 1;
    } while (pdVar12 != pdVar4);
    uVar1 = uVar10 & 0xfffffff | (uint)(in_d0 < dVar29) << 0x1f;
    uVar10 = uVar1 | (uint)(NAN(in_d0) || NAN(dVar29)) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar10 >> 0x1c) & 1)) {
      pbVar14 = pbVar14 + 1;
      in_d0 = in_d0 / *pdVar12;
    }
  }
  iVar7 = 2;
  pbVar13 = &local_ae;
  while( true ) {
    iVar3 = (uint)(0.0 < in_d0) * (int)(longlong)in_d0;
    dVar28 = (double)VectorUnsignedToFloat(iVar3,(byte)(uVar10 >> 0x16) & 3);
    in_d0 = (in_d0 - dVar28) * dVar29;
    pbVar8 = pbVar13 + iVar25;
    do {
      iVar3 = FUN_0001bda0(iVar3,uVar23);
      pbVar8 = pbVar8 + -1;
      *pbVar8 = extraout_r1 + 0x30;
    } while (pbVar13 != pbVar8);
    if (iVar7 == 1) break;
    iVar7 = 1;
    pbVar13 = pbVar13 + iVar25;
  }
  if (bVar16 < 0x61) {
    bVar16 = bVar16 + 0x20;
    local_c0 = local_c0 + -0x20;
  }
  if ((int)pbVar21 < 1 || bVar16 != 0x67) {
    pbVar13 = pbVar21;
    if ((bVar16 == 0x66) && (pbVar13 = pbVar14 + (int)pbVar21, (int)(pbVar14 + (int)pbVar21) < -1))
    {
      pbVar14 = (byte *)0xffffffff;
      FUN_00020350(&local_b0,0x30,0x11);
      pbVar13 = (byte *)0xffffffff;
    }
  }
  else {
    pbVar21 = pbVar21 + -1;
    pbVar13 = pbVar21;
  }
  cVar2 = local_c0;
  iVar25 = iVar19;
  if (iVar19 <= (int)pbVar13) {
    iVar25 = iVar19 + 1;
  }
  local_b0 = 0x3000;
  if ((int)pbVar13 < iVar19) {
    pbVar8 = abStack_ad + (int)pbVar13;
    if ((uint)abStack_ad[(int)pbVar13] < (uVar23 >> 1) + 0x30) {
      iVar19 = 0;
    }
    else {
      iVar19 = 1;
    }
  }
  else {
    iVar19 = 0;
    pbVar8 = (byte *)((int)&local_b0 + iVar25 + 1);
  }
  do {
    do {
      pbVar6 = pbVar8;
      pbVar8 = pbVar6 + -1;
      uVar10 = (uint)pbVar6[-1] + iVar19 & 0xff;
      pbVar6[-1] = (byte)((uint)pbVar6[-1] + iVar19);
    } while (uVar10 == 0x30);
  } while (uVar23 + 0x2f < uVar10);
  if ((bVar16 | 0x20) == 0x61) {
    while( true ) {
      pbVar6 = pbVar6 + -1;
      bVar22 = *pbVar6;
      if (bVar22 == 0) break;
      if (0x39 < bVar22) {
        *pbVar6 = bVar22 + local_c0 + -0x49;
      }
    }
    if (pbVar8 <= (byte *)((int)&local_b0 + 1)) goto LAB_00027e70;
    pbVar14 = (byte *)((int)pbVar14 << 2);
LAB_000280a4:
    pbVar6 = &local_ae;
  }
  else {
    if ((byte *)((int)&local_b0 + 1) < pbVar8) goto LAB_000280a4;
LAB_00027e70:
    pbVar6 = (byte *)((int)&local_b0 + 1);
    pbVar14 = pbVar14 + 1;
    pbVar8 = pbVar6;
  }
  pbVar8[1] = 0;
  if (bVar16 == 0x67) {
    bVar27 = SBORROW4((int)pbVar13,(int)pbVar14);
    pbVar5 = pbVar13 + -(int)pbVar14;
    if ((int)pbVar14 <= (int)pbVar13) {
      bVar27 = SCARRY4((int)pbVar14,4);
      pbVar5 = pbVar14 + 4;
    }
    if ((int)pbVar5 < 0 == bVar27) {
      pbVar21 = pbVar13 + -(int)pbVar14;
      goto LAB_000280b4;
    }
LAB_00027ea8:
    pbVar13 = (byte *)0x0;
    bVar22 = bVar16;
  }
  else {
    if (bVar16 != 0x66) goto LAB_00027ea8;
LAB_000280b4:
    if ((int)pbVar14 < 0) {
      pbVar6 = pbVar6 + -1;
      *pbVar6 = 0x30;
    }
    bVar22 = 0x66;
    pbVar13 = pbVar14;
  }
  local_88 = 1;
  local_84 = local_c8 + 4;
  pbVar5 = pbVar6 + 1;
  local_c8[4] = *pbVar6;
  local_8c = 0xb0;
  pbVar8 = pbVar8 + (1 - (int)pbVar5);
  local_c8[5] = 0;
  if ((int)pbVar13 < 0) {
    puVar20 = &local_80;
  }
  else {
    local_78 = pbVar5;
    local_80 = 0x70;
    if ((int)pbVar13 < (int)pbVar8) {
      if (0 < (int)pbVar13) {
        local_7c = pbVar13;
        pbVar5 = pbVar5 + (int)pbVar13;
        pbVar8 = pbVar8 + -(int)pbVar13;
        goto LAB_000280f0;
      }
      puVar20 = &local_80;
    }
    else {
      local_7c = pbVar8;
      iVar19 = (int)pbVar13 - (int)pbVar8;
      pbVar8 = (byte *)0x0;
      if (iVar19 == 0) {
LAB_000280f0:
        puVar20 = &local_74;
      }
      else {
        puVar20 = local_68;
        local_70 = iVar19;
        pbVar8 = (byte *)0x0;
        local_74 = 0xb0;
        local_6c = DAT_00027e38 + 0x27faf;
      }
    }
    pbVar13 = (byte *)0xffffffff;
  }
  uVar10 = param_2[3];
  if ((pbVar8 != (byte *)0x0 || (uVar10 & 0x10) != 0) ||
     (puVar11 = puVar20, 0 < (int)pbVar21 && (bVar16 != 0x61 && bVar16 != 0x67))) {
    *puVar20 = 0x70;
    puVar20[1] = 1;
    puVar11 = puVar20 + 3;
    puVar20[2] = DAT_00027e3c + 0x28020;
  }
  puVar20 = puVar11;
  if (pbVar13 + 1 != (byte *)0x0) {
    puVar11[1] = ~(uint)pbVar13;
    puVar20 = puVar11 + 3;
    *puVar11 = 0xb0;
    puVar11[2] = DAT_00027e40 + 0x2803f;
  }
  puVar11 = puVar20;
  if (pbVar8 != (byte *)0x0) {
    puVar20[1] = pbVar8;
    *puVar20 = 0x70;
    puVar11 = puVar20 + 3;
    puVar20[2] = pbVar5;
  }
  puVar15 = puVar11;
  if ((((int)(uVar10 << 0x1b) < 0 || bVar16 != 0x67) && (!bVar26)) &&
     (iVar19 = (int)pbVar8 - (int)(pbVar13 + 1), iVar19 < (int)pbVar21)) {
    *puVar11 = 0xb0;
    puVar15 = puVar11 + 3;
    puVar11[1] = (int)pbVar21 - iVar19;
    puVar11[2] = DAT_00027e44 + 0x2809b;
  }
  puVar20 = puVar15;
  if (bVar22 != 0x66) {
    iVar19 = 2;
    if (bVar16 == 0x61) {
      iVar25 = 3;
    }
    else {
      iVar25 = 4;
    }
    bVar26 = (int)pbVar14 < 0;
    if (bVar26) {
      pbVar14 = (byte *)-(int)pbVar14;
    }
    local_b4[3] = 0;
    pcVar18 = local_b4 + 3;
    if (bVar26) {
      cVar24 = '-';
    }
    else {
      cVar24 = '+';
    }
    do {
      pcVar17 = pcVar18;
      FUN_0001be9c(pbVar14,10);
      iVar7 = iVar19 + 1;
      iVar19 = iVar7;
      if (iVar7 < iVar25) {
        iVar19 = 3;
      }
      pcVar18 = pcVar17 + -1;
      *pcVar18 = extraout_r1_00 + '0';
      pbVar14 = (byte *)((ulonglong)DAT_00027e48 * ZEXT48(pbVar14) >> 0x23);
    } while ((iVar7 < iVar25) || (pbVar14 != (byte *)0x0));
    pcVar17[-2] = cVar24;
    pcVar17[-3] = cVar2;
    *puVar15 = 0x70;
    puVar15[1] = iVar19;
    puVar20 = puVar15 + 3;
    puVar15[2] = pcVar17 + -3;
  }
LAB_00027c24:
  puVar15 = &local_98;
  puVar11 = puVar15;
  do {
    local_e4 = local_e4 - puVar11[4];
    puVar9 = puVar11 + 7;
    puVar11 = puVar11 + 3;
  } while (puVar9 < puVar20);
  local_98 = 0xa0;
  local_90 = local_c8;
  uVar10 = (uint)(local_c8[0] != '\0');
  local_94 = uVar10;
  if (((bVar22 | 0x20) == 0x61) && (0xf < local_8c)) {
    local_c8[uVar10] = '0';
    local_94 = uVar10 + 2;
    local_c8[uVar10 + 1] = local_c0 + '\b';
    local_c8[uVar10 + 2] = '\0';
  }
  local_e4 = local_e4 - local_94;
  if (0 < local_e4) {
    if ((param_2[3] & 8) == 0) {
      if (param_2[4] == 0x30) {
        local_88 = local_88 + local_e4;
      }
      else {
        local_94 = local_94 + local_e4;
      }
    }
    else {
      *puVar20 = 0xa0;
      puVar20[1] = local_e4;
      puVar20[2] = DAT_00027e2c + 0x27d77;
      puVar20 = puVar20 + 3;
    }
  }
  iVar19 = 0;
  do {
    iVar7 = puVar15[1];
    iVar25 = (*param_3)(param_1,*puVar15,iVar7,puVar15[2]);
    if (iVar25 != iVar7) {
      return -1;
    }
    puVar15 = puVar15 + 3;
    iVar19 = iVar19 + iVar25;
  } while (puVar15 < puVar20);
  return iVar19;
}



/* ===== FUN_0002812c @ 0002812c size=204 ===== */

int FUN_0002812c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  
  iVar3 = param_1[4] + -1;
  param_1[4] = iVar3;
  if (iVar3 < 0) {
    *(byte *)((int)param_1 + 0x19) = *(byte *)((int)param_1 + 0x19) | 2;
    iVar1 = -1;
  }
  else {
    iVar1 = -3;
    param_1[4] = 0x7fffffff;
    local_28 = param_1;
    local_24 = param_2;
    uStack_20 = param_3;
    do {
      iVar2 = FUN_00028a48(param_1);
      if (iVar2 < 0) break;
      local_28 = (undefined4 *)CONCAT31(local_28._1_3_,(char)*param_1);
      iVar1 = FUN_0002b7e0(&local_24,&local_28,1,param_1 + 7);
      if (-1 < iVar1) {
        param_1[9] = local_24;
        goto LAB_000281b4;
      }
    } while (iVar1 == -2);
    if (iVar1 == -3) {
      iVar1 = -1;
      param_1[9] = 0xffffffff;
    }
    else {
      iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar2 + *(int *)(DAT_000281f8 + 0x281ec)) = 0x54;
      *(undefined1 *)((int)param_1 + 0x1b) = 1;
    }
LAB_000281b4:
    param_1[4] = iVar3;
  }
  return iVar1;
}



/* ===== FUN_000281fc @ 000281fc size=2024 ===== */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_000281fc(ushort *param_1,byte *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  bool bVar13;
  int iVar14;
  ushort uVar15;
  uint *puVar16;
  uint *puVar17;
  bool bVar18;
  int *piVar19;
  uint *puVar20;
  bool bVar21;
  undefined4 *local_218;
  uint uStack_1f8;
  int local_1f4;
  undefined4 local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  undefined4 local_1e0;
  undefined1 local_1dc;
  byte local_1db;
  char local_1d9;
  undefined4 local_1d8;
  uint local_1d0;
  int local_1c8;
  undefined4 local_1c4;
  undefined4 local_1b8;
  uint auStack_1b4 [17];
  undefined4 local_170 [9];
  int local_14c;
  int local_148;
  uint *local_144;
  byte *local_140;
  int local_13c;
  undefined4 local_138;
  uint local_134;
  int local_130;
  short local_12c;
  char acStack_128 [93];
  undefined1 local_cb;
  uint uVar12;
  
  local_14c = -1;
  FUN_00020350(local_170,0,0x24);
  iVar7 = *(int *)(param_1 + 0x1a);
  if (iVar7 == 0) {
    iVar14 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (*(int *)(param_1 + 0x20) != iVar14 + -0x490) {
      puVar3 = param_1 + 0x1c;
      DataMemoryBarrier(0xb);
      do {
        if (*(int *)puVar3 != 0) goto LAB_00028278;
        bVar13 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar13);
      puVar3[0] = 1;
      puVar3[1] = 0;
LAB_00028278:
      DataMemoryBarrier(0xb);
      if (*(int *)puVar3 != 0) {
        FUN_000266a8();
      }
      *(int *)(param_1 + 0x20) = iVar14 + -0x490;
    }
    *(int *)(param_1 + 0x1e) = *(int *)(param_1 + 0x1e) + 1;
  }
  bVar13 = true;
  bVar18 = false;
  FUN_000289fc(&local_1f4,param_1);
  local_1c8 = DAT_000289e4 + 0x282bc;
  local_1dc = *(undefined1 *)(local_1ec + 3);
  local_13c = 0;
  local_1b8 = local_1c4;
  piVar8 = (int *)(DAT_000289e8 + 0x282e0);
  piVar9 = (int *)(DAT_000289ec + 0x282ec);
  local_218 = param_3;
LAB_000282ec:
  uVar10 = (uint)*param_2;
  bVar6 = local_1db & 1;
  if (uVar10 == 0) goto LAB_000284e4;
  local_130 = 0x7fffffff;
  local_1e4 = 0x7fffffff;
  local_12c = 1;
  uVar2 = *(ushort *)(*piVar8 + uVar10 * 2);
  uVar15 = uVar2 & 0x20;
  pbVar1 = param_2;
  local_1db = bVar6;
  if ((uVar2 & 0x20) == 0) {
    if (uVar10 == 0x25) {
      pbVar1 = param_2 + 1;
      param_2 = param_2 + 1;
      if (*pbVar1 == 0x25) {
        local_134 = 0x17;
      }
      else {
        local_140 = param_2;
        iVar14 = FUN_00028b18(local_170);
        if (iVar14 < 0) goto LAB_000284e4;
        param_2 = param_2 + iVar14;
        if ((byte)local_12c != '\0') {
          iVar14 = local_14c;
          if (local_14c == -2) {
            local_144 = (uint *)*local_218;
            local_218 = local_218 + 1;
          }
          else {
            while (iVar14 < local_148) {
              uVar15 = 1;
              local_170[iVar14 + 1] = *local_218;
              iVar14 = iVar14 + 1;
              local_218 = local_218 + 1;
            }
            if (uVar15 != 0) {
              local_14c = iVar14;
            }
            local_144 = (uint *)local_170[local_148];
          }
        }
      }
      if ((DAT_000289f4 >> (local_134 & 0xff) & 1U) == 0) goto LAB_00028354;
      goto LAB_00028434;
    }
LAB_000289bc:
    local_1e4 = local_130;
    uVar10 = FUN_00028a48(&local_1f4);
    if (uVar10 == *param_2) goto LAB_0002839c;
    FUN_00028acc(&local_1f4);
    goto LAB_000284e4;
  }
  do {
    param_2 = pbVar1;
    pbVar1 = param_2 + 1;
  } while ((*(ushort *)(*piVar8 + (uint)param_2[1] * 2) & 0x20) != 0);
  local_134 = 0x18;
LAB_00028354:
  piVar19 = (int *)(DAT_000289f0 + 0x28364);
  do {
    iVar14 = FUN_00028a48(&local_1f4);
    if (iVar14 < 0) break;
  } while ((*(ushort *)(*piVar19 + local_1f4 * 2) & 0x20) != 0);
  FUN_00028acc(&local_1f4);
  if (local_134 == 0x18) goto LAB_0002839c;
LAB_00028434:
  local_1e4 = local_130;
  if (local_130 == 0) goto LAB_000284e4;
  if (local_134 == 0x17) goto LAB_000289bc;
  if (local_134 == 0) {
    if ((byte)local_12c != '\0') {
      FUN_00027834(local_144,local_138,local_1e8,local_1e8 >> 0x1f);
    }
    goto LAB_0002839c;
  }
  if ((int)local_134 < 0x10) {
    iVar14 = FUN_00028e28(local_170,&local_1f4);
    if ((iVar14 != -1) && (bVar13 = false, -1 < iVar14)) goto LAB_0002839c;
    goto LAB_000284e4;
  }
  if ((int)local_134 < 0x12) {
LAB_00028874:
    if (0xf < (int)local_134) {
      local_1d8 = 0;
      puVar5 = local_144;
      if ((byte)local_12c == '\0') {
        puVar5 = &uStack_1f8;
      }
      if (local_134 != 0x10) {
        bVar21 = true;
        if (local_134 == 0x11) {
          while (iVar14 = FUN_0002812c(&local_1f4), -1 < iVar14) {
            if ((local_1d0 < 0x100) && ((*(ushort *)(*piVar9 + local_1d0 * 2) & 0x20) != 0))
            goto LAB_000289b4;
            *puVar5 = local_1d0;
            bVar21 = false;
            bVar13 = false;
            puVar5 = puVar5 + (byte)local_12c;
          }
        }
        else {
          while (iVar14 = FUN_0002812c(&local_1f4), -1 < iVar14) {
            if (local_1d0 < 0x100) {
              bVar13 = false;
              if (acStack_128[local_1d0] == '\0') break;
            }
            else if (bVar18) goto LAB_000289b4;
            *puVar5 = local_1d0;
            bVar13 = false;
            puVar5 = puVar5 + (byte)local_12c;
            bVar21 = bVar13;
          }
        }
        goto LAB_00028990;
      }
      if (local_1e4 == 0x7fffffff) {
        local_1e4 = 1;
      }
      while (iVar14 = FUN_0002812c(&local_1f4), -1 < iVar14) {
        bVar13 = false;
        *puVar5 = local_1d0;
        puVar5 = puVar5 + (byte)local_12c;
      }
      FUN_00028acc(&local_1f4);
      if (local_1e4 < 1) goto LAB_00028668;
    }
    goto LAB_000284e4;
  }
  puVar5 = local_144;
  if ((byte)local_12c == '\0') {
    puVar5 = auStack_1b4;
  }
  if (local_12c < 0) {
    puVar16 = (uint *)0x0;
    puVar17 = puVar16;
  }
  else {
    puVar16 = puVar5;
    puVar17 = (uint *)0xffffffff;
  }
  if (local_134 != 0x14) {
    if (local_134 == 0x15) {
      bVar21 = true;
      puVar20 = (uint *)0x0;
      piVar19 = (int *)(DAT_000289f8 + 0x286b0);
      while ((iVar14 = FUN_00028a48(&local_1f4), -1 < iVar14 &&
             ((*(ushort *)(*piVar19 + local_1f4 * 2) & 0x20) == 0))) {
        if (puVar20 == puVar17) {
          puVar17 = puVar20 + 0x40;
          puVar16 = (uint *)FUN_00029c94(puVar16,(int)puVar20 + 0x101);
        }
        bVar6 = (byte)local_12c;
        *(char *)((int)puVar16 + (int)puVar20) = (char)local_1f4;
        puVar20 = (uint *)((int)puVar20 + (uint)bVar6);
        bVar21 = false;
        bVar13 = false;
      }
    }
    else {
      bVar21 = param_2[1] == 0x5e;
      if (bVar21) {
        param_2 = param_2 + 2;
      }
      else {
        param_2 = param_2 + 1;
      }
      bVar18 = !bVar21;
      FUN_00020350(acStack_128,bVar21,0x100);
      if (*param_2 == 0x5d) {
        param_2 = param_2 + 1;
        local_cb = bVar18;
      }
      for (; bVar6 = *param_2, bVar6 != 0x5d; param_2 = param_2 + 1) {
        if (bVar6 == 0) goto LAB_000284e4;
        if (((bVar6 == 0x2d) && (uVar10 = (uint)param_2[1], uVar10 != 0x5d)) &&
           (uVar12 = (uint)param_2[-1], param_2[-1] < uVar10)) {
          do {
            uVar11 = uVar12 + 1;
            acStack_128[uVar12 + 1] = bVar18;
            uVar12 = uVar11;
          } while ((int)uVar11 < (int)uVar10);
          param_2 = param_2 + 1;
        }
        acStack_128[*param_2] = bVar18;
      }
      if (local_134 == 0x12) goto LAB_00028874;
      puVar20 = (uint *)0x0;
      bVar21 = true;
      while ((iVar14 = FUN_00028a48(&local_1f4), -1 < iVar14 &&
             (bVar13 = false, acStack_128[local_1f4] != '\0'))) {
        if (puVar20 == puVar17) {
          puVar17 = puVar20 + 0x40;
          puVar16 = (uint *)FUN_00029c94(puVar16,(int)puVar20 + 0x101);
        }
        bVar6 = (byte)local_12c;
        *(char *)((int)puVar16 + (int)puVar20) = (char)local_1f4;
        puVar20 = (uint *)((int)puVar20 + (uint)bVar6);
        bVar13 = false;
        bVar21 = bVar13;
      }
    }
    FUN_00028acc(&local_1f4);
    if (!bVar21) {
      if (local_12c < 0) {
        *puVar5 = (uint)puVar16;
      }
      *(undefined1 *)((int)puVar16 + (int)puVar20) = 0;
      goto LAB_00028668;
    }
    goto LAB_000284e4;
  }
  if (local_130 == 0x7fffffff) {
    local_1e4 = 1;
  }
  if (local_12c < 0) {
    puVar16 = (uint *)FUN_000212e0(local_1e4);
  }
  iVar14 = 0;
  while( true ) {
    iVar4 = FUN_00028a48(&local_1f4);
    bVar6 = (byte)local_12c;
    if (iVar4 < 0) break;
    bVar13 = false;
    *(char *)((int)puVar16 + iVar14) = (char)local_1f4;
    iVar14 = iVar14 + (uint)bVar6;
  }
  FUN_00028acc(&local_1f4);
  if (0 < local_1e4) goto LAB_000284e4;
  if (local_12c < 0) {
    *puVar5 = (uint)puVar16;
  }
LAB_00028668:
  local_13c = local_13c + (uint)(byte)local_12c;
LAB_0002839c:
  param_2 = param_2 + 1;
  if ((*param_1 & 8) != 0) goto LAB_000284e4;
  goto LAB_000282ec;
LAB_000289b4:
  bVar13 = false;
LAB_00028990:
  FUN_00028acc(&local_1f4);
  if (bVar21 || local_1d9 != '\0') goto LAB_000284e4;
  *puVar5 = 0;
  goto LAB_00028668;
LAB_000284e4:
  if ((*param_1 & 8) == 0) {
    if (*param_2 == 0) {
      bVar13 = false;
    }
    if ((!bVar13) || ((*param_1 & 4) == 0)) goto LAB_00028518;
  }
  local_13c = -1;
LAB_00028518:
  if ((local_1db & 1) != 0) {
    FUN_0002b958(local_1f0,local_1ec);
    if (local_1e8 != 0) {
      local_1e0 = 0;
    }
    *(undefined4 *)(local_1ec + 0x28) = local_1e0;
  }
  if ((iVar7 == 0) &&
     (iVar7 = *(int *)(param_1 + 0x1e), *(int *)(param_1 + 0x1e) = iVar7 + -1, iVar7 + -1 == 0)) {
    puVar3 = param_1 + 0x1c;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    do {
      iVar7 = *(int *)(param_1 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        if (*(int *)puVar3 != iVar7) goto LAB_00028590;
        bVar13 = (bool)hasExclusiveAccess(puVar3);
      } while (!bVar13);
      puVar3[0] = 0;
      puVar3[1] = 0;
LAB_00028590:
      DataMemoryBarrier(0xb);
    } while (iVar7 != *(int *)puVar3);
    if (1 < iVar7) {
      software_interrupt(0);
    }
  }
  return local_13c;
}



/* ===== FUN_000289fc @ 000289fc size=72 ===== */

void FUN_000289fc(int param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 0x19) = 0;
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(ushort **)(param_1 + 8) = param_2;
  if ((uVar1 & 2) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x14);
  }
  *(undefined2 *)(param_1 + 0x1a) = 0;
  iVar2 = DAT_00028a44;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(int *)(param_1 + 0x30) = iVar2 + 0x28a34;
  *(int *)(param_1 + 0x3c) = iVar2 + 0x28a34;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x38) = 0x2e;
  return;
}



/* ===== FUN_00028a48 @ 00028a48 size=132 ===== */

undefined4 FUN_00028a48(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[4];
  *param_1 = 0xffffffff;
  param_1[4] = iVar1 + -1;
  if (iVar1 + -1 < 0) {
    *(byte *)((int)param_1 + 0x19) = *(byte *)((int)param_1 + 0x19) | 2;
    return 0xffffffff;
  }
  if (*(byte *)((int)param_1 + 0x19) == 0) {
    iVar1 = (*(code *)param_1[0xb])();
    if (iVar1 == -1) {
      *(byte *)((int)param_1 + 0x19) = *(byte *)((int)param_1 + 0x19) | 2;
      return 0xffffffff;
    }
    param_1[1] = iVar1;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x19) = 0;
  }
  *param_1 = param_1[1];
  param_1[3] = param_1[3] + 1;
  return param_1[1];
}



/* ===== FUN_00028acc @ 00028acc size=76 ===== */

void FUN_00028acc(undefined4 *param_1)

{
  param_1[4] = param_1[4] + 1;
  if (*(char *)((int)param_1 + 0x19) == '\x02') {
    *(undefined1 *)((int)param_1 + 0x19) = 0;
    *param_1 = param_1[1];
    return;
  }
  if (*(char *)((int)param_1 + 0x19) != '\0') {
    return;
  }
  *(undefined1 *)((int)param_1 + 0x19) = 1;
  param_1[3] = param_1[3] + -1;
  return;
}



/* ===== FUN_00028b18 @ 00028b18 size=748 ===== */

int FUN_00028b18(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  byte bVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  iVar4 = DAT_00028e04;
  pbVar11 = *(byte **)(param_1 + 0x30);
  if (*pbVar11 - 0x30 < 10) {
    iVar3 = 0;
    do {
      if (iVar3 <= iVar4) {
        pbVar6 = *(byte **)(param_1 + 0x30);
        *(byte **)(param_1 + 0x30) = pbVar6 + 1;
        iVar3 = iVar3 * 10 + (*pbVar6 - 0x30);
      }
      uVar2 = (uint)**(byte **)(param_1 + 0x30);
    } while (uVar2 - 0x30 < 10);
    if (uVar2 != 0x24) {
      if (*(int *)(param_1 + 0x24) < 0) {
        *(int *)(param_1 + 0x40) = iVar3;
        *(undefined4 *)(param_1 + 0x24) = 0xfffffffe;
LAB_00028c5c:
        pcVar5 = (char *)(DAT_00028e10 + 0x28c70);
        do {
          if (*pcVar5 == **(char **)(param_1 + 0x30)) {
            *(char **)(param_1 + 0x30) = *(char **)(param_1 + 0x30) + 1;
            break;
          }
          pcVar5 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        if (((int)pcVar5 - (DAT_00028e14 + 0x28c8c) < 2) && (**(char **)(param_1 + 0x30) == *pcVar5)
           ) {
          pcVar5 = pcVar5 + 8;
          *(char **)(param_1 + 0x30) = *(char **)(param_1 + 0x30) + 1;
        }
        bVar8 = pcVar5[8];
        pcVar5 = (char *)(DAT_00028e18 + 0x28cc4);
        uVar2 = (uint)bVar8 << 8;
        *(uint *)(param_1 + 0x38) = uVar2;
        do {
          while( true ) {
            pcVar7 = *(char **)(param_1 + 0x30);
            pcVar9 = pcVar5 + 1;
            if (*pcVar7 != *pcVar5) break;
            if ((*pcVar7 != 'm') ||
               (((pcVar7[1] + 0xa5U & 0xf7) != 0 && ((byte)(pcVar7[1] | 0x20U) != 0x73)))) {
              iVar4 = (int)pcVar5 - (DAT_00028e1c + 0x28d14);
              pbVar6 = (byte *)(DAT_00028e20 + 0x28d2a);
              do {
                pbVar10 = pbVar6;
                pbVar6 = pbVar10 + 1;
              } while ((int)(uint)*pbVar10 < iVar4);
              if ((ushort)((ushort)(*(byte *)(param_1 + 0x45) | bVar8) &
                          ~*(ushort *)(((int)pbVar10 * 2 - DAT_00028e24) + -0x28d4a)) == 0) {
                if (iVar4 == 1) {
                  *(undefined4 *)(param_1 + 0x38) = 0x400;
                }
                else if ((0x13 < iVar4) && ((uVar2 & 0x400) != 0)) {
                  iVar4 = iVar4 + -4;
                }
                *(int *)(param_1 + 0x3c) = iVar4;
                return (int)pcVar7 - (int)pbVar11;
              }
              goto LAB_00028b90;
            }
            *(char **)(param_1 + 0x30) = pcVar7 + 1;
            pcVar5 = pcVar9;
            if (*(char *)(param_1 + 0x44) != '\0') {
              *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) | 0x80;
            }
          }
          pcVar5 = pcVar9;
        } while (*pcVar9 != '\0');
      }
LAB_00028b90:
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar4 + *(int *)(DAT_00028e08 + 0x28ba8)) = 0x16;
      return -1;
    }
    bVar1 = false;
    *(byte **)(param_1 + 0x30) = *(byte **)(param_1 + 0x30) + 1;
  }
  else {
    bVar1 = true;
    iVar3 = 0;
  }
  do {
    bVar8 = 0x10;
    pcVar5 = (char *)(DAT_00028e0c + 0x28bd0);
    while (*pcVar5 != **(char **)(param_1 + 0x30)) {
      pcVar5 = pcVar5 + 1;
      bVar8 = bVar8 << 1;
      if (*pcVar5 == '\0') {
        if ((*(byte *)(param_1 + 0x45) & 0x10) == 0) {
          if (bVar1) {
            if (-1 < *(int *)(param_1 + 0x24)) goto LAB_00028b90;
            *(undefined4 *)(param_1 + 0x24) = 0xfffffffe;
          }
          else {
            if ((*(int *)(param_1 + 0x24) == -2) || (8 < iVar3 - 1U)) goto LAB_00028b90;
            *(uint *)(param_1 + 0x28) = iVar3 - 1U;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x44) = 0;
        }
        iVar4 = DAT_00028e04;
        iVar3 = 0;
        goto LAB_00028c44;
      }
    }
    *(char **)(param_1 + 0x30) = *(char **)(param_1 + 0x30) + 1;
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) | bVar8;
  } while( true );
LAB_00028c44:
  pbVar6 = *(byte **)(param_1 + 0x30);
  do {
    if (9 < (byte)(*pbVar6 - 0x30)) goto LAB_00028c5c;
  } while (iVar4 < iVar3);
  *(byte **)(param_1 + 0x30) = pbVar6 + 1;
  iVar3 = iVar3 * 10 + (*pbVar6 - 0x30);
  *(int *)(param_1 + 0x40) = iVar3;
  goto LAB_00028c44;
}



/* ===== FUN_00028e28 @ 00028e28 size=1328 ===== */

undefined4 FUN_00028e28(int param_1,uint *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  byte bVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  int iVar14;
  double dVar15;
  undefined8 uVar16;
  undefined1 auStack_d4 [4];
  char local_d0 [172];
  
  iVar14 = *(int *)(param_1 + 0x3c);
  bVar10 = *(byte *)(DAT_00029358 + iVar14 + 0x28e42);
  uVar11 = (uint)bVar10;
  if (iVar14 == 1) {
    pbVar13 = (byte *)(DAT_0002935c + 0x28e60);
    do {
      iVar3 = FUN_00028a48(param_2);
      if ((iVar3 < 0) || ((uint)*pbVar13 != *param_2)) {
        FUN_00028acc(param_2);
        if ((byte *)(DAT_00029360 + 0x28e90) < pbVar13) goto LAB_00028e94;
        goto LAB_00028ee4;
      }
      pbVar13 = pbVar13 + 1;
    } while (*pbVar13 != 0);
    if (*(char *)(param_1 + 0x44) != '\0') {
      uVar9 = *(undefined4 *)(param_1 + 0x38);
      uVar4 = *(undefined4 *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      uVar16 = 0;
LAB_00028edc:
      FUN_00027834(uVar4,uVar9,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    }
LAB_00028eb4:
    uVar4 = 0;
  }
  else {
LAB_00028ee4:
    FUN_00028a48(param_2);
    uVar6 = *param_2;
    if ((int)uVar6 < 0) {
      return 0xffffffff;
    }
    if ((uVar6 - 0x2b & 0xfffffffd) == 0) {
      local_d0[0] = (char)uVar6;
      FUN_00028a48(param_2);
      pcVar7 = local_d0 + 1;
    }
    else {
      pcVar7 = local_d0;
    }
    if ((bVar10 & 0xef) == 0) {
      if (*param_2 != 0x30) {
        if (uVar11 == 0) {
          uVar11 = 10;
        }
        goto LAB_00028f6c;
      }
      FUN_00028a48(param_2);
      if ((*param_2 | 0x20) != 0x78) {
        FUN_00028acc(param_2);
        iVar3 = *(int *)(param_1 + 0x3c);
        *param_2 = 0x30;
        if (iVar3 < 8) {
          uVar11 = (bVar10 >> 1) + 8;
        }
        else {
          uVar11 = 10;
        }
        goto LAB_00028f6c;
      }
      iVar3 = FUN_00028a48();
      if (-1 < iVar3) {
        uVar11 = 0x10;
        *pcVar7 = '0';
        pcVar7[1] = 'x';
        pcVar7 = pcVar7 + 2;
        goto LAB_00028f6c;
      }
      goto LAB_000290d8;
    }
LAB_00028f6c:
    if (*param_2 == 0x30) {
      pcVar8 = pcVar7 + 1;
      *pcVar7 = '0';
      do {
        FUN_00028a48(param_2);
      } while (*param_2 == 0x30);
      bVar1 = true;
    }
    else {
      bVar1 = false;
      pcVar8 = pcVar7;
    }
    bVar2 = false;
    iVar3 = 0;
    piVar5 = (int *)(DAT_00029364 + 0x28f90);
    while ((uVar6 = *param_2, (*(ushort *)(*piVar5 + uVar6 * 2) & 0x10) != 0 &&
           ((uVar11 == 0x10 || ((int)(uVar6 - 0x2f) <= (int)uVar11))))) {
      if ((int)pcVar8 - (int)local_d0 < 0x41) {
        *pcVar8 = (char)uVar6;
        bVar2 = true;
        bVar1 = bVar2;
        pcVar8 = pcVar8 + 1;
      }
      else {
        iVar3 = iVar3 + 1;
      }
      FUN_00028a48(param_2);
    }
    if (*(int *)(param_1 + 0x3c) < 8) {
      FUN_00028acc(param_2);
      iVar3 = 0;
      *pcVar8 = '\0';
      if (bVar1) {
        if (*(char *)(param_1 + 0x44) != '\0') {
          if ((local_d0[0] != '-') && (iVar3 = 0, iVar14 < 6)) {
            iVar3 = 1;
          }
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
          uVar4 = *(undefined4 *)(param_1 + 0x2c);
          uVar9 = *(undefined4 *)(param_1 + 0x38);
          uVar16 = FUN_0002a078(local_d0,0,uVar11,1 - iVar3);
          goto LAB_00028edc;
        }
        goto LAB_00028eb4;
      }
    }
    else {
      pbVar13 = (byte *)param_2[0xf];
      while( true ) {
        if (*pbVar13 == 0) break;
        if ((uint)*pbVar13 != *param_2) {
          if ((byte *)param_2[0xf] < pbVar13) goto LAB_000290d8;
          goto LAB_000291ac;
        }
        FUN_00028a48(param_2);
        pbVar13 = pbVar13 + 1;
      }
      FUN_00020768(pcVar8,param_2[0xc]);
      pcVar7 = pcVar8 + param_2[0xd];
      pcVar8 = pcVar7;
      if ((!bVar2) && (*param_2 == 0x30)) {
        iVar3 = iVar3 + 1;
        pcVar8 = pcVar7 + 1;
        *pcVar7 = '0';
        do {
          iVar3 = iVar3 + -1;
          FUN_00028a48(param_2);
        } while (*param_2 == 0x30);
        bVar1 = true;
      }
      piVar5 = (int *)(DAT_00029368 + 0x29128);
      while (uVar6 = *param_2, (*(ushort *)(*piVar5 + uVar6 * 2) & 0x10) != 0) {
        if ((uVar11 != 0x10) && ((int)uVar11 < (int)(uVar6 - 0x2f))) {
          if (!bVar1) goto LAB_000291bc;
          goto LAB_0002927c;
        }
        if ((int)pcVar8 - (int)local_d0 < 0x41) {
          *pcVar8 = (char)uVar6;
          bVar1 = true;
          pcVar8 = pcVar8 + 1;
        }
        FUN_00028a48(param_2);
      }
LAB_000291ac:
      if (bVar1) {
        if ((uVar11 != 0x10) || ((*param_2 | 0x20) != 0x70)) {
LAB_0002927c:
          if ((*param_2 | 0x20) != 0x65) goto LAB_00029218;
        }
        *pcVar8 = (char)*param_2;
        FUN_00028a48(param_2);
        uVar11 = *param_2;
        if (-1 < (int)uVar11) {
          if ((uVar11 - 0x2b & 0xfffffffd) == 0) {
            pcVar8[1] = (char)uVar11;
            FUN_00028a48(param_2);
            pcVar7 = pcVar8 + 2;
          }
          else {
            pcVar7 = pcVar8 + 1;
          }
          if (*param_2 == 0x30) {
            pcVar8 = pcVar7 + 1;
            *pcVar7 = '0';
            do {
              FUN_00028a48(param_2);
            } while (*param_2 == 0x30);
            bVar10 = 1;
          }
          else {
            bVar10 = 0;
            pcVar8 = pcVar7;
          }
          while (*param_2 - 0x30 < 10) {
            if (bVar10 < 0x14) {
              bVar10 = bVar10 + 1;
              *pcVar8 = (char)*param_2;
              pcVar8 = pcVar8 + 1;
            }
            FUN_00028a48(param_2);
          }
          if (bVar10 != 0) goto LAB_00029218;
        }
      }
      else if (uVar11 != 0x10) {
LAB_000291bc:
        uVar11 = *param_2;
        if ((uVar11 | 0x20) == 0x69) {
          pcVar7 = pcVar8;
          pbVar13 = (byte *)(DAT_00029374 + 0x29263);
        }
        else {
          if ((uVar11 | 0x20) != 0x6e) goto LAB_000290d8;
          pcVar7 = pcVar8;
          pbVar13 = (byte *)(DAT_0002936c + 0x291e0);
        }
        do {
          pbVar12 = pbVar13;
          pcVar8 = pcVar7 + 1;
          *pcVar7 = (char)uVar11;
          FUN_00028a48(param_2);
          uVar11 = *param_2;
          pcVar7 = pcVar8;
          pbVar13 = pbVar12 + 1;
        } while ((uVar11 | 0x20) == (uint)*pbVar12);
        if (pbVar12 == (byte *)(DAT_00029370 + 0x29211) || *pbVar12 == 0) {
LAB_00029218:
          *pcVar8 = '\0';
          dVar15 = (double)FUN_0002a2fc(local_d0,auStack_d4,iVar3);
          if (*(char *)(param_1 + 0x44) != '\0') {
            if (((*(uint *)(param_1 + 0x38) & 0x800) == 0) &&
               ((*(uint *)(param_1 + 0x38) & 0x400) == 0)) {
              *(float *)*(double **)(param_1 + 0x2c) = (float)dVar15;
            }
            else {
              **(double **)(param_1 + 0x2c) = dVar15;
            }
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
          }
          FUN_00028acc(param_2);
          goto LAB_00028eb4;
        }
      }
LAB_000290d8:
      FUN_00028acc(param_2);
    }
LAB_00028e94:
    uVar4 = 0xfffffffe;
  }
  return uVar4;
}



/* ===== FUN_00029380 @ 00029380 size=1248 ===== */

void FUN_00029380(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  ushort uVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint *puVar14;
  bool bVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  if (0x3f < param_3) {
    uVar8 = (uint)param_1 & 7;
    if (uVar8 == ((uint)param_2 & 7)) {
      if (((uint)param_1 & 7) != 0) {
        uVar9 = (int)param_1 * -0x20000000;
        param_3 = param_3 - (uVar9 >> 0x1d);
        puVar14 = param_1;
        puVar11 = param_2;
        if ((int)uVar9 < 0) {
          puVar11 = param_2 + 1;
          uVar8 = *param_2;
          puVar14 = param_1 + 1;
          *param_1 = uVar8;
        }
        uVar6 = (ushort)uVar8;
        bVar16 = (bool)((byte)(uVar9 >> 0x1e) & 1);
        bVar15 = ((uint)param_1 & 1) != 0;
        puVar2 = puVar11;
        if (bVar16) {
          puVar2 = (uint *)((int)puVar11 + 2);
          uVar6 = (ushort)*puVar11;
        }
        bVar5 = 0;
        param_2 = puVar2;
        if (bVar15) {
          param_2 = (uint *)((int)puVar2 + 1);
          bVar5 = (byte)*puVar2;
        }
        puVar11 = puVar14;
        if (bVar16) {
          puVar11 = (uint *)((int)puVar14 + 2);
          *(ushort *)puVar14 = uVar6;
        }
        param_1 = puVar11;
        if (bVar15) {
          param_1 = (uint *)((int)puVar11 + 1);
          *(byte *)puVar11 = bVar5;
        }
      }
      uVar8 = param_3 - 0x40;
      if (0x3f < param_3) {
        if (0x1ff < uVar8) {
          uVar20 = *(undefined8 *)param_2;
          uVar21 = *(undefined8 *)(param_2 + 0x10);
          uVar22 = *(undefined8 *)(param_2 + 0x20);
          uVar23 = *(undefined8 *)(param_2 + 0x30);
          uVar24 = *(undefined8 *)(param_2 + 0x40);
          uVar17 = *(undefined8 *)(param_2 + 2);
          uVar18 = *(undefined8 *)(param_2 + 4);
          uVar19 = *(undefined8 *)(param_2 + 6);
          param_2 = param_2 + 8;
          param_3 = param_3 - 0x2c0;
          if (0x27f < uVar8) {
            do {
              *(undefined8 *)param_1 = uVar20;
              uVar20 = *(undefined8 *)param_2;
              *(undefined8 *)(param_1 + 2) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 2);
              *(undefined8 *)(param_1 + 4) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 4);
              *(undefined8 *)(param_1 + 6) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 6);
              *(undefined8 *)(param_1 + 8) = uVar20;
              uVar20 = *(undefined8 *)(param_2 + 0x48);
              *(undefined8 *)(param_1 + 10) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 10);
              *(undefined8 *)(param_1 + 0xc) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0xc);
              *(undefined8 *)(param_1 + 0xe) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0xe);
              *(undefined8 *)(param_1 + 0x10) = uVar21;
              uVar21 = *(undefined8 *)(param_2 + 0x10);
              *(undefined8 *)(param_1 + 0x12) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 0x12);
              *(undefined8 *)(param_1 + 0x14) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0x14);
              *(undefined8 *)(param_1 + 0x16) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0x16);
              *(undefined8 *)(param_1 + 0x18) = uVar21;
              uVar21 = *(undefined8 *)(param_2 + 0x58);
              *(undefined8 *)(param_1 + 0x1a) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 0x1a);
              *(undefined8 *)(param_1 + 0x1c) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0x1c);
              *(undefined8 *)(param_1 + 0x1e) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0x1e);
              *(undefined8 *)(param_1 + 0x20) = uVar22;
              uVar22 = *(undefined8 *)(param_2 + 0x20);
              *(undefined8 *)(param_1 + 0x22) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 0x22);
              *(undefined8 *)(param_1 + 0x24) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0x24);
              *(undefined8 *)(param_1 + 0x26) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0x26);
              *(undefined8 *)(param_1 + 0x28) = uVar22;
              uVar22 = *(undefined8 *)(param_2 + 0x68);
              *(undefined8 *)(param_1 + 0x2a) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 0x2a);
              *(undefined8 *)(param_1 + 0x2c) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0x2c);
              *(undefined8 *)(param_1 + 0x2e) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0x2e);
              *(undefined8 *)(param_1 + 0x30) = uVar23;
              uVar23 = *(undefined8 *)(param_2 + 0x30);
              *(undefined8 *)(param_1 + 0x32) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 0x32);
              *(undefined8 *)(param_1 + 0x34) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0x34);
              *(undefined8 *)(param_1 + 0x36) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0x36);
              *(undefined8 *)(param_1 + 0x38) = uVar23;
              uVar23 = *(undefined8 *)(param_2 + 0x78);
              *(undefined8 *)(param_1 + 0x3a) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 0x3a);
              *(undefined8 *)(param_1 + 0x3c) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0x3c);
              *(undefined8 *)(param_1 + 0x3e) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0x3e);
              *(undefined8 *)(param_1 + 0x40) = uVar24;
              uVar24 = *(undefined8 *)(param_2 + 0x40);
              *(undefined8 *)(param_1 + 0x42) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 0x42);
              *(undefined8 *)(param_1 + 0x44) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0x44);
              *(undefined8 *)(param_1 + 0x46) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0x46);
              *(undefined8 *)(param_1 + 0x48) = uVar24;
              uVar24 = *(undefined8 *)(param_2 + 0x88);
              *(undefined8 *)(param_1 + 0x4a) = uVar17;
              uVar17 = *(undefined8 *)(param_2 + 0x4a);
              *(undefined8 *)(param_1 + 0x4c) = uVar18;
              uVar18 = *(undefined8 *)(param_2 + 0x4c);
              *(undefined8 *)(param_1 + 0x4e) = uVar19;
              uVar19 = *(undefined8 *)(param_2 + 0x4e);
              param_1 = param_1 + 0x50;
              param_2 = param_2 + 0x50;
              bVar15 = 0x13f < param_3;
              param_3 = param_3 - 0x140;
            } while (bVar15);
          }
          *(undefined8 *)param_1 = uVar20;
          uVar20 = *(undefined8 *)param_2;
          *(undefined8 *)(param_1 + 2) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)(param_1 + 4) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 4);
          *(undefined8 *)(param_1 + 6) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 6);
          *(undefined8 *)(param_1 + 8) = uVar20;
          *(undefined8 *)(param_1 + 10) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 10);
          *(undefined8 *)(param_1 + 0xc) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0xc);
          *(undefined8 *)(param_1 + 0xe) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 0xe);
          *(undefined8 *)(param_1 + 0x10) = uVar21;
          uVar20 = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)(param_1 + 0x12) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 0x12);
          *(undefined8 *)(param_1 + 0x14) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0x14);
          *(undefined8 *)(param_1 + 0x16) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 0x16);
          *(undefined8 *)(param_1 + 0x18) = uVar20;
          *(undefined8 *)(param_1 + 0x1a) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 0x1a);
          *(undefined8 *)(param_1 + 0x1c) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0x1c);
          *(undefined8 *)(param_1 + 0x1e) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 0x1e);
          *(undefined8 *)(param_1 + 0x20) = uVar22;
          uVar20 = *(undefined8 *)(param_2 + 0x20);
          *(undefined8 *)(param_1 + 0x22) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 0x22);
          *(undefined8 *)(param_1 + 0x24) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0x24);
          *(undefined8 *)(param_1 + 0x26) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 0x26);
          *(undefined8 *)(param_1 + 0x28) = uVar20;
          *(undefined8 *)(param_1 + 0x2a) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 0x2a);
          *(undefined8 *)(param_1 + 0x2c) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0x2c);
          *(undefined8 *)(param_1 + 0x2e) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 0x2e);
          *(undefined8 *)(param_1 + 0x30) = uVar23;
          uVar20 = *(undefined8 *)(param_2 + 0x30);
          *(undefined8 *)(param_1 + 0x32) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 0x32);
          *(undefined8 *)(param_1 + 0x34) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0x34);
          *(undefined8 *)(param_1 + 0x36) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 0x36);
          *(undefined8 *)(param_1 + 0x38) = uVar20;
          *(undefined8 *)(param_1 + 0x3a) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 0x3a);
          *(undefined8 *)(param_1 + 0x3c) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0x3c);
          *(undefined8 *)(param_1 + 0x3e) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 0x3e);
          *(undefined8 *)(param_1 + 0x40) = uVar24;
          uVar20 = *(undefined8 *)(param_2 + 0x40);
          *(undefined8 *)(param_1 + 0x42) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 0x42);
          *(undefined8 *)(param_1 + 0x44) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0x44);
          *(undefined8 *)(param_1 + 0x46) = uVar19;
          uVar19 = *(undefined8 *)(param_2 + 0x46);
          *(undefined8 *)(param_1 + 0x48) = uVar20;
          param_2 = param_2 + 0x48;
          *(undefined8 *)(param_1 + 0x4a) = uVar17;
          *(undefined8 *)(param_1 + 0x4c) = uVar18;
          *(undefined8 *)(param_1 + 0x4e) = uVar19;
          param_1 = param_1 + 0x50;
          uVar8 = param_3 + 0x140;
        }
        do {
          bVar15 = 0x3f < uVar8;
          uVar8 = uVar8 - 0x40;
          uVar18 = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          uVar17 = *(undefined8 *)(param_2 + 4);
          *(undefined8 *)(param_1 + 2) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 6);
          *(undefined8 *)(param_1 + 4) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)(param_1 + 6) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 10);
          *(undefined8 *)(param_1 + 8) = uVar17;
          uVar17 = *(undefined8 *)(param_2 + 0xc);
          *(undefined8 *)(param_1 + 10) = uVar18;
          uVar18 = *(undefined8 *)(param_2 + 0xe);
          *(undefined8 *)(param_1 + 0xc) = uVar17;
          param_2 = param_2 + 0x10;
          *(undefined8 *)(param_1 + 0xe) = uVar18;
          param_1 = param_1 + 0x10;
        } while (bVar15);
        if ((uVar8 & 0x3f) == 0) {
          return;
        }
      }
      uVar9 = uVar8 & 0x38;
      pbVar12 = (byte *)((int)param_1 + uVar9);
      pbVar3 = (byte *)((int)param_2 + uVar9);
      iVar10 = 0x34 - uVar9;
      switch(uVar9) {
      case 0x38:
        *(undefined8 *)(pbVar12 + -0x38) = *(undefined8 *)(pbVar3 + -0x38);
      case 0x30:
        *(undefined8 *)(pbVar12 + -0x30) = *(undefined8 *)(pbVar3 + -0x30);
      case 0x28:
        *(undefined8 *)(pbVar12 + -0x28) = *(undefined8 *)(pbVar3 + -0x28);
      case 0x20:
        *(undefined8 *)(pbVar12 + -0x20) = *(undefined8 *)(pbVar3 + -0x20);
      case 0x18:
        *(undefined8 *)(pbVar12 + -0x18) = *(undefined8 *)(pbVar3 + -0x18);
      case 0x10:
        *(undefined8 *)(pbVar12 + -0x10) = *(undefined8 *)(pbVar3 + -0x10);
      case 8:
        *(undefined8 *)(pbVar12 + -8) = *(undefined8 *)(pbVar3 + -8);
      case 0:
        pbVar13 = pbVar12;
        pbVar4 = pbVar3;
        if ((uVar8 & 4) != 0) {
          pbVar4 = pbVar3 + 4;
          iVar10 = *(int *)pbVar3;
          pbVar13 = pbVar12 + 4;
          *(int *)pbVar12 = iVar10;
        }
        uVar7 = (undefined2)iVar10;
        bVar16 = (bool)((byte)(uVar8 >> 1) & 1);
        bVar15 = (uVar8 & 1) != 0;
        pbVar3 = pbVar4;
        if (bVar16) {
          pbVar3 = pbVar4 + 2;
          uVar7 = *(undefined2 *)pbVar4;
        }
        bVar5 = 0;
        if (bVar15) {
          bVar5 = *pbVar3;
        }
        pbVar3 = pbVar13;
        if (bVar16) {
          pbVar3 = pbVar13 + 2;
          *(undefined2 *)pbVar13 = uVar7;
        }
        if (bVar15) {
          *pbVar3 = bVar5;
        }
        return;
      }
    }
    HintPreloadData(param_2);
    HintPreloadData(param_2 + 0x10);
    HintPreloadData(param_2 + 0x20);
    uVar9 = param_3;
    if (((uint)param_1 & 7) != 0) {
      uVar1 = (int)param_1 * -0x20000000;
      uVar9 = param_3 - (uVar1 >> 0x1d);
      puVar14 = param_1;
      puVar11 = param_2;
      if ((int)uVar1 < 0) {
        puVar11 = param_2 + 1;
        uVar8 = *param_2;
        puVar14 = param_1 + 1;
        *param_1 = uVar8;
      }
      bVar5 = (byte)uVar8;
      bVar16 = (bool)((byte)(uVar1 >> 0x1e) & 1);
      uVar8 = (int)param_1 * -0x80000000;
      bVar15 = uVar8 != 0;
      puVar2 = puVar11;
      if (bVar15) {
        puVar2 = (uint *)((int)puVar11 + 1);
        bVar5 = (byte)*puVar11;
      }
      param_2 = puVar2;
      if (bVar16) {
        param_2 = (uint *)((int)puVar2 + 2);
        uVar8 = (uint)(ushort)*puVar2;
      }
      puVar11 = puVar14;
      if (bVar15) {
        puVar11 = (uint *)((int)puVar14 + 1);
        *(byte *)puVar14 = bVar5;
      }
      param_1 = puVar11;
      if (bVar16) {
        param_1 = (uint *)((int)puVar11 + 2);
        *(ushort *)puVar11 = (ushort)uVar8;
      }
    }
    HintPreloadData(param_2 + 0x30);
    param_3 = uVar9 - 0x40;
    if (0x3f < uVar9) {
      HintPreloadData(param_2 + 0x40);
      uVar17 = *(undefined8 *)param_2;
      uVar18 = *(undefined8 *)(param_2 + 2);
      uVar19 = *(undefined8 *)(param_2 + 4);
      uVar20 = *(undefined8 *)(param_2 + 6);
      uVar21 = *(undefined8 *)(param_2 + 8);
      uVar22 = *(undefined8 *)(param_2 + 10);
      uVar23 = *(undefined8 *)(param_2 + 0xc);
      uVar24 = *(undefined8 *)(param_2 + 0xe);
      uVar8 = uVar9 - 0x80;
      puVar11 = param_2;
      while (uVar9 = uVar8, param_2 = puVar11 + 0x10, 0x3f < param_3) {
        HintPreloadData(puVar11 + 0x50);
        *(undefined8 *)param_1 = uVar17;
        *(undefined8 *)(param_1 + 2) = uVar18;
        *(undefined8 *)(param_1 + 4) = uVar19;
        *(undefined8 *)(param_1 + 6) = uVar20;
        uVar17 = *(undefined8 *)param_2;
        uVar18 = *(undefined8 *)(puVar11 + 0x12);
        uVar19 = *(undefined8 *)(puVar11 + 0x14);
        uVar20 = *(undefined8 *)(puVar11 + 0x16);
        *(undefined8 *)(param_1 + 8) = uVar21;
        *(undefined8 *)(param_1 + 10) = uVar22;
        *(undefined8 *)(param_1 + 0xc) = uVar23;
        *(undefined8 *)(param_1 + 0xe) = uVar24;
        param_1 = param_1 + 0x10;
        uVar21 = *(undefined8 *)(puVar11 + 0x18);
        uVar22 = *(undefined8 *)(puVar11 + 0x1a);
        uVar23 = *(undefined8 *)(puVar11 + 0x1c);
        uVar24 = *(undefined8 *)(puVar11 + 0x1e);
        uVar8 = uVar9 - 0x40;
        puVar11 = param_2;
        param_3 = uVar9;
      }
      *(undefined8 *)param_1 = uVar17;
      *(undefined8 *)(param_1 + 2) = uVar18;
      *(undefined8 *)(param_1 + 4) = uVar19;
      *(undefined8 *)(param_1 + 6) = uVar20;
      *(undefined8 *)(param_1 + 8) = uVar21;
      *(undefined8 *)(param_1 + 10) = uVar22;
      *(undefined8 *)(param_1 + 0xc) = uVar23;
      *(undefined8 *)(param_1 + 0xe) = uVar24;
      param_1 = param_1 + 0x10;
      param_3 = uVar9 & 0x3f;
      if (param_3 == 0) {
        return;
      }
    }
  }
  uVar8 = 0x34 - (param_3 & 0x38);
  switch(param_3 & 0x38) {
  case 0x38:
    uVar17 = *(undefined8 *)param_2;
    param_2 = param_2 + 2;
    *(undefined8 *)param_1 = uVar17;
    param_1 = param_1 + 2;
  case 0x30:
    uVar17 = *(undefined8 *)param_2;
    param_2 = param_2 + 2;
    *(undefined8 *)param_1 = uVar17;
    param_1 = param_1 + 2;
  case 0x28:
    uVar17 = *(undefined8 *)param_2;
    param_2 = param_2 + 2;
    *(undefined8 *)param_1 = uVar17;
    param_1 = param_1 + 2;
  case 0x20:
    uVar17 = *(undefined8 *)param_2;
    param_2 = param_2 + 2;
    *(undefined8 *)param_1 = uVar17;
    param_1 = param_1 + 2;
  case 0x18:
    uVar17 = *(undefined8 *)param_2;
    param_2 = param_2 + 2;
    *(undefined8 *)param_1 = uVar17;
    param_1 = param_1 + 2;
  case 0x10:
    uVar17 = *(undefined8 *)param_2;
    param_2 = param_2 + 2;
    *(undefined8 *)param_1 = uVar17;
    param_1 = param_1 + 2;
  case 8:
    uVar17 = *(undefined8 *)param_2;
    param_2 = param_2 + 2;
    *(undefined8 *)param_1 = uVar17;
    param_1 = param_1 + 2;
  case 0:
    puVar14 = param_1;
    puVar11 = param_2;
    if ((param_3 & 4) != 0) {
      puVar11 = param_2 + 1;
      uVar8 = *param_2;
      puVar14 = param_1 + 1;
      *param_1 = uVar8;
    }
    uVar6 = (ushort)uVar8;
    bVar16 = (bool)((byte)(param_3 >> 1) & 1);
    bVar15 = (param_3 & 1) != 0;
    puVar2 = puVar11;
    if (bVar16) {
      puVar2 = (uint *)((int)puVar11 + 2);
      uVar6 = (ushort)*puVar11;
    }
    if (bVar15) {
      puVar2 = (uint *)(uint)(byte)*puVar2;
    }
    puVar11 = puVar14;
    if (bVar16) {
      puVar11 = (uint *)((int)puVar14 + 2);
      *(ushort *)puVar14 = uVar6;
    }
    if (bVar15) {
      *(byte *)puVar11 = (byte)puVar2;
    }
    return;
  }
}



/* ===== FUN_00029860 @ 00029860 size=240 ===== */

uint * FUN_00029860(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_2 & 0xff;
  while ((param_3 != 0 && (((uint)param_1 & 3) != 0))) {
    if ((byte)*param_1 == uVar5) {
      return param_1;
    }
    param_3 = param_3 - 1;
    param_1 = (uint *)((int)param_1 + 1);
  }
  uVar2 = (param_2 & 0xff) << 8 | uVar5;
  do {
    if (param_3 < 4) {
      puVar1 = param_1;
      do {
        puVar3 = puVar1;
        if ((uint *)((int)param_1 + param_3) == puVar3) {
          return (uint *)0x0;
        }
        puVar1 = (uint *)((int)puVar3 + 1);
      } while ((byte)*puVar3 != uVar5);
      return puVar3;
    }
    uVar4 = (uVar2 | uVar2 << 0x10) ^ *param_1;
    if ((uVar4 + DAT_00029950 ^ uVar4 | DAT_00029950) != 0xffffffff) {
      if ((byte)*param_1 == uVar5) {
        return param_1;
      }
      if (*(byte *)((int)param_1 + 1) == uVar5) {
        return (uint *)((int)param_1 + 1);
      }
      if (*(byte *)((int)param_1 + 2) == uVar5) {
        return (uint *)((int)param_1 + 2);
      }
      if (*(byte *)((int)param_1 + 3) == uVar5) {
        return (uint *)((int)param_1 + 3);
      }
    }
    param_3 = param_3 - 4;
    param_1 = param_1 + 1;
  } while( true );
}



/* ===== FUN_000299bc @ 000299bc size=176 ===== */

uint * FUN_000299bc(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_2 & 0xff;
  while (puVar1 = param_1, ((uint)puVar1 & 3) != 0) {
    param_1 = (uint *)((int)puVar1 + 1);
    if ((byte)*puVar1 == uVar4) {
      return puVar1;
    }
  }
  uVar2 = (param_2 & 0xff) << 8 | uVar4;
  while( true ) {
    do {
      puVar3 = puVar1;
      uVar5 = (uVar2 | uVar2 << 0x10) ^ *puVar3;
      puVar1 = puVar3 + 1;
    } while ((uVar5 + DAT_00029a6c ^ uVar5 | DAT_00029a6c) == 0xffffffff);
    if ((byte)*puVar3 == uVar4) {
      return puVar3;
    }
    if (*(byte *)((int)puVar3 + 1) == uVar4) {
      return (uint *)((int)puVar3 + 1);
    }
    if (*(byte *)((int)puVar3 + 2) == uVar4) break;
    if (*(byte *)((int)puVar3 + 3) == uVar4) {
      return (uint *)((int)puVar3 + 3);
    }
  }
  return (uint *)((int)puVar3 + 2);
}



/* ===== FUN_00029a70 @ 00029a70 size=228 ===== */

uint * FUN_00029a70(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_2 & 0xff;
  puVar1 = (uint *)(param_1 + param_3);
  while ((param_3 != 0 && (((uint)puVar1 & 3) != 0))) {
    puVar1 = (uint *)((int)puVar1 + -1);
    if (*(byte *)puVar1 == uVar4) {
      return puVar1;
    }
    param_3 = param_3 - 1;
  }
  uVar2 = (param_2 & 0xff) << 8 | uVar4;
  do {
    if (param_3 < 4) {
      puVar3 = (uint *)((int)puVar1 - param_3);
      do {
        if (puVar1 == puVar3) {
          return (uint *)0x0;
        }
        puVar1 = (uint *)((int)puVar1 + -1);
      } while (*(byte *)puVar1 != uVar4);
      return puVar1;
    }
    puVar3 = puVar1 + -1;
    uVar5 = (uVar2 | uVar2 << 0x10) ^ *puVar3;
    if ((uVar5 + DAT_00029b54 ^ uVar5 | DAT_00029b54) != 0xffffffff) {
      if (*(byte *)((int)puVar1 + -1) == uVar4) {
        return (uint *)((int)puVar1 + -1);
      }
      if (*(byte *)((int)puVar1 + -2) == uVar4) {
        return (uint *)((int)puVar1 + -2);
      }
      if (*(byte *)((int)puVar1 + -3) == uVar4) {
        return (uint *)((int)puVar1 + -3);
      }
      if ((byte)*puVar3 == uVar4) {
        return puVar3;
      }
    }
    param_3 = param_3 - 4;
    puVar1 = puVar3;
  } while( true );
}



/* ===== FUN_00029b58 @ 00029b58 size=84 ===== */

int FUN_00029b58(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = 0;
  cVar3 = *param_1;
  if (cVar3 == '\0') {
    return 0;
  }
  do {
    pcVar1 = (char *)(param_2 + -1);
    do {
      pcVar1 = pcVar1 + 1;
      if (*pcVar1 == '\0') {
        return iVar2;
      }
    } while (*pcVar1 != cVar3);
    iVar2 = iVar2 + 1;
    cVar3 = param_1[iVar2];
  } while (cVar3 != '\0');
  return iVar2;
}



/* ===== FUN_00029bac @ 00029bac size=72 ===== */

int FUN_00029bac(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == '\0') {
    iVar1 = FUN_0002087c(param_1,0);
    return iVar1;
  }
  iVar1 = 0;
  while (iVar2 = FUN_0002087c(param_1,param_2), iVar2 != 0) {
    param_1 = iVar2 + 1;
    iVar1 = iVar2;
  }
  return iVar1;
}



/* ===== FUN_00029bf4 @ 00029bf4 size=24 ===== */

int FUN_00029bf4(int param_1,undefined4 param_2,int param_3)

{
  thunk_FUN_00029380();
  return param_1 + param_3;
}



/* ===== FUN_00029c0c @ 00029c0c size=84 ===== */

char * FUN_00029c0c(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return (char *)0x0;
  }
  do {
    pcVar2 = (char *)(param_2 + -1);
    while( true ) {
      pcVar2 = pcVar2 + 1;
      if (*pcVar2 == '\0') break;
      if (*pcVar2 == cVar1) {
        return param_1;
      }
    }
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
  } while( true );
}



/* ===== FUN_00029c60 @ 00029c60 size=52 ===== */

int FUN_00029c60(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000203b0();
  iVar2 = FUN_000212e0(iVar1 + 1);
  if (iVar2 != 0) {
    thunk_FUN_00029380(iVar2,param_1,iVar1 + 1);
  }
  return iVar2;
}



/* ===== FUN_00029c94 @ 00029c94 size=848 ===== */

undefined4 * FUN_00029c94(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 auStack_38 [20];
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_000212e0(param_2);
    return puVar1;
  }
  if (param_2 == 0) {
    FUN_00021048();
    return (undefined4 *)0x0;
  }
  if (0xffffffdf < param_2) {
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar3 + *(int *)(DAT_00029fe8 + 0x29cec)) = 0xc;
    return (undefined4 *)0x0;
  }
  iVar3 = DAT_00029ff0 + 0x29d14;
  if (param_2 + 0xb < 0x10) {
    uVar7 = 0x10;
  }
  else {
    uVar7 = param_2 + 0xb & 0xfffffff8;
  }
  FUN_000225d0(auStack_38,*(undefined4 *)(DAT_00029fe4 + 0x29cac + DAT_00029fec),iVar3);
  FUN_000225c0(iVar3);
  iVar9 = DAT_00029ff8;
  iVar3 = DAT_00029ff4;
  uVar4 = param_1[-1];
  uVar8 = uVar4 & 0xfffffffc;
  puVar1 = param_1;
  if ((uVar4 & 2) != 0) {
    iVar3 = param_1[-2];
    uVar4 = *(int *)(DAT_00029ff8 + 0x2a278) + 3 + iVar3 + uVar7 & -*(int *)(DAT_00029ff8 + 0x2a278)
    ;
    if (uVar4 - iVar3 != uVar8) {
      iVar2 = FUN_0002b71c((int)param_1 + (-8 - iVar3),uVar8 + iVar3,uVar4,1);
      if (iVar2 == -1) {
        if ((uVar8 < uVar7 + 4) &&
           (puVar1 = (undefined4 *)FUN_000212e0(uVar7 - 7), puVar1 != (undefined4 *)0x0)) {
          thunk_FUN_00029380(puVar1,param_1,uVar8 - 8);
          FUN_00021048(param_1);
        }
      }
      else {
        iVar5 = *(int *)(iVar9 + 0x2a280);
        puVar1 = (undefined4 *)(iVar2 + iVar3 + 8);
        *(uint *)(iVar2 + iVar3 + 4) = uVar4 - iVar3 | 2;
        uVar4 = (iVar5 - uVar8) + uVar4;
        *(uint *)(iVar9 + 0x2a280) = uVar4;
        iVar3 = DAT_00029ffc;
        if (*(uint *)(iVar9 + 0x2a28c) < uVar4) {
          *(uint *)(iVar9 + 0x2a28c) = uVar4;
        }
        if (*(uint *)(iVar3 + 0x2a30c) < uVar4 + *(int *)(FUN_0002a2fc + iVar3 + 4)) {
          *(uint *)(iVar3 + 0x2a30c) = uVar4 + *(int *)(FUN_0002a2fc + iVar3 + 4);
        }
      }
    }
    goto LAB_00029d9c;
  }
  uVar6 = uVar8;
  if (uVar8 < uVar7) {
    puVar10 = (undefined4 *)((int)param_1 + (uVar8 - 8));
    uVar6 = puVar10[1];
    if (*(undefined4 **)(DAT_00029ff4 + 0x29d88) == puVar10) {
      uVar6 = (uVar6 & 0xfffffffc) + uVar8;
      if (uVar7 + 0x10 <= uVar6) {
        iVar9 = (int)param_1 + (uVar7 - 8);
        param_1[-1] = uVar4 & 1 | uVar7;
        *(int *)(iVar3 + 0x29d88) = iVar9;
        *(uint *)(iVar9 + 4) = uVar6 - uVar7 | 1;
        goto LAB_00029d9c;
      }
    }
    else if (((*(uint *)((int)puVar10 + (uVar6 & 0xfffffffe) + 4) & 1) == 0) &&
            (uVar6 = (uVar6 & 0xfffffffc) + uVar8, uVar7 <= uVar6)) {
      iVar3 = puVar10[2];
      iVar9 = puVar10[3];
      if ((*(undefined4 **)(iVar3 + 0xc) == puVar10) &&
         (*(undefined4 **)(iVar9 + 8) == *(undefined4 **)(iVar3 + 0xc))) {
        *(int *)(iVar3 + 0xc) = iVar9;
        *(int *)(iVar9 + 8) = iVar3;
        goto LAB_00029eb0;
      }
      FUN_00021c14();
    }
    puVar1 = (undefined4 *)FUN_000212e0(uVar7 - 7);
    if (puVar1 == (undefined4 *)0x0) goto LAB_00029d9c;
    if (puVar10 != puVar1 + -2) {
      uVar8 = uVar8 - 4;
      if (uVar8 < 0x28) {
        *puVar1 = *param_1;
        puVar1[1] = param_1[1];
        puVar1[2] = param_1[2];
        if (0x13 < uVar8) {
          puVar1[3] = param_1[3];
          puVar1[4] = param_1[4];
          if (0x1b < uVar8) {
            puVar1[5] = param_1[5];
            puVar1[6] = param_1[6];
            if (0x23 < uVar8) {
              puVar1[7] = param_1[7];
              puVar1[8] = param_1[8];
            }
          }
        }
      }
      else {
        thunk_FUN_00029380(puVar1,param_1);
      }
      FUN_00021048(param_1);
      goto LAB_00029d9c;
    }
    uVar6 = uVar8 + (puVar1[-1] & 0xfffffffc);
  }
LAB_00029eb0:
  if (uVar6 - uVar7 < 0x10) {
    param_1[-1] = param_1[-1] & 1 | uVar6;
    *(uint *)((int)param_1 + (uVar6 - 4)) = *(uint *)((int)param_1 + (uVar6 - 4)) | 1;
    puVar1 = param_1;
  }
  else {
    param_1[-1] = param_1[-1] & 1 | uVar7;
    *(uint *)((int)param_1 + (uVar7 - 4)) = uVar6 - uVar7 | 1;
    *(uint *)((int)param_1 + (uVar6 - 4)) = *(uint *)((int)param_1 + (uVar6 - 4)) | 1;
    FUN_00021048((int)param_1 + uVar7);
    puVar1 = param_1;
  }
LAB_00029d9c:
  FUN_000225d8(auStack_38,1);
  return puVar1;
}



/* ===== FUN_0002a078 @ 0002a078 size=628 ===== */

ulonglong FUN_0002a078(byte *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  byte bVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined8 local_40;
  int iStack_2c;
  
  pbVar7 = param_1;
  do {
    pbVar6 = pbVar7;
    uVar4 = (uint)*pbVar6;
    uVar1 = *(ushort *)(*(int *)(DAT_0002a2ec + 0x2a098) + uVar4 * 2);
    uVar12 = uVar1 & 0x20;
    pbVar7 = pbVar6 + 1;
  } while ((uVar1 & 0x20) != 0);
  if (uVar4 == 0x2b) {
LAB_0002a0c4:
    pbVar6 = pbVar6 + 1;
  }
  else if (uVar4 == 0x2d) {
    uVar12 = 1;
    goto LAB_0002a0c4;
  }
  if ((param_3 & 0xffffffef) == 0) {
    if (*pbVar6 == 0x30) {
      param_3 = param_3 + 8;
      param_1 = pbVar6 + 1;
      pbVar7 = param_1;
      if ((pbVar6[1] | 0x20) == 0x78) {
        param_3 = param_3 * 2;
        pbVar7 = pbVar6 + 2;
      }
    }
    else {
      param_3 = param_3 + 10;
      pbVar7 = pbVar6;
    }
    pbVar6 = pbVar7;
    if (0xf < (int)param_3) {
      param_3 = 0x10;
    }
  }
  else if (0x22 < param_3 - 2) {
    local_40 = 0;
    goto LAB_0002a1bc;
  }
  iVar11 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar14 = false;
  local_40 = 0;
  uVar10 = *(undefined4 *)(iVar11 + *(int *)(DAT_0002a2f0 + 0x2a120));
  uVar15 = VectorShiftRight(CONCAT44(param_3,param_3),0x20);
  while( true ) {
    pbVar7 = pbVar6 + 1;
    uVar4 = (uint)(byte)(*pbVar6 - 0x30);
    if (9 < uVar4) {
      bVar9 = *pbVar6 | 0x20;
      if (bVar9 < 0x61) {
        uVar4 = 0x28;
      }
      else {
        uVar4 = (uint)(byte)(bVar9 + 0xa9);
      }
    }
    if ((int)param_3 <= (int)uVar4) break;
    uVar3 = (uint)local_40;
    bVar13 = 0x3fffffe < local_40._4_4_;
    if (local_40._4_4_ == 0x3ffffff) {
      bVar13 = 0xfffffffe < (uint)local_40;
    }
    iStack_2c = (int)((ulonglong)uVar15 >> 0x20);
    pbVar6 = pbVar7;
    param_1 = pbVar7;
    if (bVar13 && (local_40._4_4_ != 0x3ffffff || (uint)local_40 != 0xffffffff)) {
      uVar4 = param_3 * (byte)local_40 + uVar4;
      uVar8 = uVar3 >> 8 | local_40._4_4_ << 0x18;
      uVar3 = local_40._4_4_ >> 8;
      lVar2 = (ulonglong)param_3 * (ulonglong)uVar8;
      local_40._4_4_ = (uint)((ulonglong)lVar2 >> 0x20);
      iVar5 = param_3 * uVar3 + uVar8 * iStack_2c + local_40._4_4_;
      local_40._0_4_ = (uint)lVar2;
      uVar3 = (uint)local_40 + (uVar4 >> 8);
      uVar8 = iVar5 + (uint)CARRY4((uint)local_40,uVar4 >> 8);
      bVar13 = 0xfffffe < uVar8;
      if (uVar8 == 0xffffff) {
        bVar13 = 0xfffffffe < uVar3;
      }
      if (bVar13 && (uVar8 != 0xffffff || uVar3 != 0xffffffff)) {
        uVar12 = uVar12 & param_4;
        bVar14 = true;
        uVar10 = 0x22;
        local_40 = 0xffffffffffffffff;
      }
      else {
        local_40 = CONCAT44((iVar5 * 0x100 | (uint)local_40 >> 0x18) +
                            (uint)CARRY4((uint)local_40 * 0x100,uVar4),
                            (uint)local_40 * 0x100 + uVar4);
      }
    }
    else {
      local_40 = (ulonglong)param_3 * (local_40 & 0xffffffff) +
                 CONCAT44(param_3 * local_40._4_4_ + (uint)local_40 * iStack_2c,uVar4);
    }
  }
  if (bVar14) {
    *(undefined4 *)(iVar11 + *(int *)(DAT_0002a2f8 + 0x2a2e8)) = uVar10;
  }
LAB_0002a1bc:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  if (uVar12 == 0) {
    uVar4 = 0xffffffff;
    uVar3 = 0x7fffffff;
  }
  else {
    uVar4 = 0;
    uVar3 = 0x80000000;
  }
  bVar14 = uVar3 <= local_40._4_4_;
  bVar13 = local_40._4_4_ == uVar3;
  if (bVar13) {
    bVar14 = uVar4 <= (uint)local_40;
  }
  if (bVar14 && (!bVar13 || (uint)local_40 != uVar4)) {
    param_1 = (byte *)0x1;
  }
  if (!bVar14 || bVar13 && (uint)local_40 == uVar4) {
    param_1 = (byte *)0x0;
  }
  if (param_4 == 0) {
    param_1 = (byte *)0x0;
  }
  if (param_1 != (byte *)0x0) {
    iVar11 = coproc_movefrom_User_R_Thread_and_Process_ID();
    local_40 = CONCAT44(uVar3,uVar4);
    *(undefined4 *)(iVar11 + *(int *)(DAT_0002a2f4 + 0x2a218)) = 0x22;
  }
  if (uVar12 != 0) {
    local_40 = CONCAT44(-(local_40._4_4_ + ((uint)local_40 != 0)),-(uint)local_40);
  }
  return local_40;
}



/* ===== FUN_0002a2fc @ 0002a2fc size=716 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0002a2fc(byte *param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  uint in_fpscr;
  double dVar15;
  double dVar16;
  double dVar17;
  
  iVar7 = *(int *)(DAT_0002a5c8 + 0x2a310);
  pbVar9 = param_1;
  do {
    pbVar4 = pbVar9;
    uVar12 = (uint)*pbVar4;
    uVar11 = *(ushort *)(iVar7 + uVar12 * 2);
    uVar6 = uVar11 & 0x20;
    pbVar9 = pbVar4 + 1;
  } while ((uVar11 & 0x20) != 0);
  if (uVar12 == 0x2b) {
LAB_0002a33c:
    pbVar4 = pbVar4 + 1;
  }
  else if (uVar12 == 0x2d) {
    uVar6 = 1;
    goto LAB_0002a33c;
  }
  if ((*pbVar4 == 0x30) && ((pbVar4[1] | 0x20) == 0x78)) {
    dVar17 = 16.0;
    pbVar9 = pbVar4 + 1;
    pbVar4 = pbVar4 + 2;
    uVar11 = 0x10;
    uVar12 = 0x70;
  }
  else {
    uVar11 = 8;
    pbVar9 = (byte *)0x0;
    uVar12 = 0x65;
    dVar17 = 10.0;
  }
  dVar15 = 0.0;
  iVar13 = -1;
  pbVar8 = (byte *)0x0;
  do {
    while( true ) {
      pbVar14 = pbVar4;
      pbVar3 = pbVar8;
      pbVar4 = pbVar14 + 1;
      uVar10 = (uint)*pbVar14;
      uVar2 = *(ushort *)(iVar7 + uVar10 * 2);
      if ((uVar2 & uVar11) == 0) break;
      pbVar8 = pbVar3;
      if (((1 < iVar13 + 1U) || (iVar13 = 0, uVar10 != 0x30)) &&
         (iVar13 = iVar13 + 1, iVar13 < 0x12)) {
        if ((uVar2 & 8) == 0) {
          iVar5 = (uVar10 | 0x20) - 0x57;
        }
        else {
          iVar5 = uVar10 - 0x30;
        }
        dVar16 = (double)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
        dVar15 = dVar15 * dVar17 + dVar16;
      }
    }
  } while ((uVar10 == 0x2e) && (pbVar8 = pbVar4, pbVar3 == (byte *)0x0));
  if (iVar13 == -1) {
    if ((pbVar9 == (byte *)0x0) && (pbVar9 = param_1, pbVar3 == (byte *)0x0)) {
      iVar7 = 0;
      do {
        pbVar8 = pbVar14 + -1;
        pbVar4 = (byte *)(DAT_0002a5cc + iVar7 + 0x2a43d);
        while( true ) {
          pbVar8 = pbVar8 + 1;
          pbVar3 = pbVar4 + 1;
          if ((*pbVar8 | 0x20) != *pbVar4) break;
          pbVar4 = pbVar3;
          if (*pbVar3 == 0) {
            dVar15 = (double)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
            dVar15 = dVar15 / 0.0;
            pbVar9 = pbVar14 + (*(byte *)(DAT_0002a5d4 + 0x2a498 + iVar7) - 2);
            if (uVar6 != 0) {
              dVar15 = -dVar15;
            }
            goto LAB_0002a4a8;
          }
        }
        iVar7 = iVar7 + (uint)*(byte *)(DAT_0002a5d0 + 0x2a440 + iVar7);
      } while (*(char *)(DAT_0002a5d0 + 0x2a440 + iVar7) != '\0');
    }
    goto LAB_0002a4a8;
  }
  if (0x11 < iVar13) {
    param_3 = param_3 + iVar13 + -0x11;
  }
  if (pbVar3 != (byte *)0x0) {
    param_1 = pbVar3 + -(int)pbVar14;
  }
  if (pbVar3 != (byte *)0x0) {
    param_3 = param_3 + (int)param_1;
  }
  if (pbVar9 != (byte *)0x0) {
    param_3 = (byte *)((int)param_3 << 2);
    dVar17 = 2.0;
  }
  if (uVar6 != 0) {
    dVar15 = -dVar15;
  }
  pbVar9 = pbVar14;
  if ((uVar10 | 0x20) == uVar12) {
    if (pbVar14[1] == 0x2b) {
      iVar13 = 1;
LAB_0002a518:
      pbVar4 = pbVar14 + 2;
    }
    else {
      if (pbVar14[1] == 0x2d) {
        iVar13 = -1;
        goto LAB_0002a518;
      }
      pbVar4 = pbVar14 + 1;
      iVar13 = 1;
    }
    iVar5 = 0;
    pbVar9 = pbVar4;
    while( true ) {
      bVar1 = *pbVar9;
      pbVar8 = pbVar9 + 1;
      if ((*(ushort *)(iVar7 + (uint)bVar1 * 2) & 8) == 0) break;
      pbVar9 = pbVar8;
      if (iVar5 < 0x155) {
        iVar5 = iVar5 * 10 + (bVar1 - 0x30);
      }
    }
    param_3 = param_3 + iVar13 * iVar5;
    if (pbVar4 == pbVar9) {
      pbVar9 = pbVar14;
    }
  }
  if (dVar15 != 0.0) {
    for (uVar12 = ((uint)param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f); uVar12 != 0;
        uVar12 = (int)uVar12 >> 1) {
      if ((uVar12 & 1) != 0) {
        if ((int)param_3 < 0) {
          dVar15 = dVar15 / dVar17;
        }
        else {
          dVar15 = dVar15 * dVar17;
        }
      }
      dVar17 = dVar17 * dVar17;
    }
    if (dVar15 * 0.25 == dVar15) {
      iVar7 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar7 + *(int *)(DAT_0002a5d8 + 0x2a594)) = 0x22;
    }
  }
LAB_0002a4a8:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar9;
  }
  return SUB84(dVar15,0);
}



/* ===== FUN_0002a62c @ 0002a62c size=192 ===== */

void FUN_0002a62c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  iVar4 = DAT_0002a6ec + 0x2a640;
  uVar3 = *(uint *)(param_1 + 0x20);
  if (uVar3 <= **(uint **)(iVar4 + DAT_0002a6f0)) goto LAB_0002a670;
  do {
    FUN_0001da38(**(undefined4 **)(iVar4 + DAT_0002a6f4),DAT_0002a6f8 + 0x2a664);
    param_1 = FUN_00022404(0x1e);
LAB_0002a670:
    puVar5 = *(uint **)(iVar4 + DAT_0002a6fc);
    iVar1 = FUN_0001bcf8((*puVar5 - 1) + uVar3,uVar3);
    uVar2 = uVar3 * iVar1 + *(int *)(param_1 + 0x1c);
  } while (**(uint **)(iVar4 + DAT_0002a700) < uVar2);
  *puVar5 = uVar2;
  *(uint *)(param_1 + 0x28) = uVar3 * iVar1;
  if ((*(ushort *)(param_1 + 0x4e) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0002a6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined4 **)(iVar4 + DAT_0002a704))(param_1);
    return;
  }
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 1;
  return;
}



/* ===== FUN_0002ab38 @ 0002ab38 size=200 ===== */

undefined4 FUN_0002ab38(void)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  double in_d0;
  undefined4 extraout_s1;
  double dVar4;
  
  iVar2 = (int)((ulonglong)in_d0 >> 0x20);
  if (0xfffff < iVar2) {
    iVar1 = 0;
LAB_0002ab80:
    if (DAT_0002ac28 < iVar2) {
      return SUB84(in_d0 + in_d0,0);
    }
    iVar1 = (iVar2 >> 0x14) + -0x3ff + iVar1;
    dVar4 = (double)VectorSignedToFloat(iVar1 - (iVar1 >> 0x1f),(byte)(in_fpscr >> 0x16) & 3);
    uVar3 = FUN_0002bee8(SUB84(in_d0,0));
    return SUB84((double)CONCAT44(extraout_s1,uVar3) * DAT_0002ac10 + dVar4 * DAT_0002ac18 +
                 dVar4 * DAT_0002ac20,0);
  }
  dVar4 = DAT_0002ac00;
  if (((ulonglong)in_d0 & 0x7fffffff00000000) != 0 || SUB84(in_d0,0) != 0) {
    if (-1 < (longlong)in_d0) {
      iVar1 = -0x36;
      in_d0 = in_d0 * DAT_0002ac08;
      iVar2 = (int)((ulonglong)in_d0 >> 0x20);
      goto LAB_0002ab80;
    }
    dVar4 = in_d0 - in_d0;
  }
  return SUB84(dVar4 / 0.0,0);
}



/* ===== FUN_0002ac30 @ 0002ac30 size=2084 ===== */

uint FUN_0002ac30(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  double *pdVar12;
  uint uVar13;
  bool bVar14;
  uint in_fpscr;
  undefined4 uVar15;
  double in_d0;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  uint uVar16;
  double in_d1;
  double dVar17;
  double dVar18;
  double dVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  uVar6 = DAT_0002b198;
  uVar13 = DAT_0002b194;
  uVar2 = SUB84(in_d0,0);
  uVar3 = (uint)((ulonglong)in_d0 >> 0x20);
  dVar17 = in_d0;
  if (uVar3 == DAT_0002b194 && uVar2 == 0) goto LAB_0002acd0;
  uVar16 = SUB84(in_d1,0);
  uVar20 = (uint)((ulonglong)in_d1 >> 0x20);
  uVar10 = uVar20 & 0x7fffffff;
  if (((ulonglong)in_d1 & 0x7fffffff00000000) == 0 && uVar16 == 0) {
LAB_0002b328:
    dVar17 = 0.0;
    goto LAB_0002acd0;
  }
  uVar8 = uVar3 & 0x7fffffff;
  if ((((int)DAT_0002b198 < (int)uVar8) ||
      ((int)DAT_0002b198 < (int)uVar10 || uVar2 != 0 && uVar8 == DAT_0002b198)) ||
     (uVar16 != 0 && uVar10 == DAT_0002b198)) {
    dVar17 = in_d0 + in_d1;
    goto LAB_0002acd0;
  }
  iVar5 = 0;
  if (-1 < (longlong)in_d0) {
LAB_0002ad68:
    if (uVar16 != 0) goto LAB_0002adec;
    if (uVar10 == DAT_0002b198) {
      if (uVar8 == 0x3ff00000 && uVar2 == 0) goto LAB_0002b328;
      if (DAT_0002b1a0 < (int)uVar8) {
        dVar17 = 0.0;
        if (-1 < (longlong)in_d1) {
          dVar17 = in_d1;
        }
        goto LAB_0002acd0;
      }
      if ((longlong)in_d1 < 0) {
        dVar17 = -in_d1;
        goto LAB_0002acd0;
      }
LAB_0002adb0:
      dVar17 = 0.0;
      goto LAB_0002acd0;
    }
LAB_0002ad4c:
    if (uVar10 == DAT_0002b194) {
      if ((longlong)in_d1 < 0) {
        dVar17 = 1.0 / in_d0;
      }
      goto LAB_0002acd0;
    }
    if (uVar20 != 0x40000000) {
      bVar14 = uVar3 == 0;
      if (-1 < (longlong)in_d0) {
        bVar14 = uVar20 == DAT_0002b1a4;
      }
      if (bVar14) {
        if ((DAT_0002b564 & ~uVar3) == 0) {
          return SUB84(in_d0 + in_d0 * in_d0,0);
        }
        if ((int)uVar3 < 1) {
          if (((ulonglong)in_d0 & 0x7fffffff00000000) == 0 && uVar2 == 0) {
            return uVar2;
          }
          if (uVar3 != 0) {
            return SUB84((in_d0 - in_d0) / (in_d0 - in_d0),0);
          }
        }
        iVar5 = (int)uVar3 >> 0x14;
        if (iVar5 == 0) {
          iVar5 = 0;
          while (uVar13 = 0, uVar3 == 0) {
            iVar5 = iVar5 + -0x15;
            uVar3 = uVar2 >> 0xb;
            uVar2 = uVar2 << 0x15;
          }
          for (; (uVar3 & 0x100000) == 0; uVar3 = uVar3 << 1) {
            uVar13 = uVar13 + 1;
          }
          uVar3 = uVar3 | uVar2 >> (0x20 - uVar13 & 0xff);
          uVar2 = uVar2 << (uVar13 & 0xff);
          iVar5 = iVar5 - (uVar13 - 1);
        }
        uVar3 = uVar3 & 0xfffff | 0x100000;
        uVar13 = 0;
        if ((iVar5 - 0x3ffU & 1) != 0) {
          iVar5 = (int)uVar2 >> 0x1f;
          uVar2 = uVar2 << 1;
          uVar3 = uVar3 * 2 - iVar5;
        }
        uVar6 = uVar2 << 1;
        iVar4 = uVar3 * 2 - ((int)uVar2 >> 0x1f);
        iVar7 = 0x16;
        uVar2 = 0x200000;
        iVar5 = 0;
        do {
          iVar9 = iVar5 + uVar2;
          if (iVar9 <= iVar4) {
            iVar4 = iVar4 - iVar9;
            iVar5 = iVar9 + uVar2;
            uVar13 = uVar13 + uVar2;
          }
          iVar7 = iVar7 + -1;
          uVar2 = uVar2 >> 1;
          iVar4 = iVar4 * 2 - ((int)uVar6 >> 0x1f);
          uVar6 = uVar6 << 1;
        } while (iVar7 != 0);
        iVar9 = 0x20;
        uVar2 = 0x80000000;
        uVar3 = 0;
        iVar7 = 0;
        do {
          uVar10 = uVar2 + iVar7;
          iVar11 = iVar5;
          if ((iVar5 < iVar4) || (uVar10 <= uVar6 && iVar4 == iVar5)) {
            iVar7 = uVar10 + uVar2;
            if (((int)uVar10 < 0) && (-1 < iVar7)) {
              iVar11 = iVar5 + 1;
            }
            iVar4 = iVar4 - iVar5;
            if (uVar6 < uVar10) {
              iVar4 = iVar4 + -1;
            }
            uVar6 = uVar6 - uVar10;
            uVar3 = uVar3 + uVar2;
          }
          iVar9 = iVar9 + -1;
          iVar4 = iVar4 * 2 - ((int)uVar6 >> 0x1f);
          uVar2 = uVar2 >> 1;
          uVar6 = uVar6 << 1;
          iVar5 = iVar11;
        } while (iVar9 != 0);
        if (iVar4 != 0 || uVar6 != 0) {
          if (uVar3 == 0xffffffff) {
            uVar13 = uVar13 + 1;
            uVar3 = 0;
          }
          else {
            uVar3 = uVar3 + 1 & 0xfffffffe;
          }
        }
        uVar3 = uVar3 >> 1;
        if ((uVar13 & 1) != 0) {
          uVar3 = uVar3 | 0x80000000;
        }
        return uVar3;
      }
      goto LAB_0002adec;
    }
LAB_0002adc0:
    dVar17 = in_d0 * in_d0;
    goto LAB_0002acd0;
  }
  if (DAT_0002b19c < (int)uVar10) {
    iVar5 = 2;
    goto LAB_0002ad68;
  }
  if ((int)uVar10 <= DAT_0002b19c + -0x3500000) goto LAB_0002ad68;
  iVar5 = ((int)uVar10 >> 0x14) + -0x3ff;
  if (0x14 < iVar5) {
    uVar1 = uVar16 >> (0x34U - iVar5 & 0xff);
    if (uVar16 == uVar1 << (0x34U - iVar5 & 0xff)) {
      iVar5 = 2 - (uVar1 & 1);
    }
    else {
      iVar5 = 0;
    }
    goto LAB_0002ad68;
  }
  if (uVar16 == 0) {
    uVar16 = (int)uVar10 >> (0x14U - iVar5 & 0xff);
    if (uVar10 == uVar16 << (0x14U - iVar5 & 0xff)) {
      iVar5 = 2 - (uVar16 & 1);
    }
    else {
      iVar5 = 0;
    }
    goto LAB_0002ad4c;
  }
  iVar5 = 0;
LAB_0002adec:
  uVar15 = FUN_0002b568();
  dVar17 = (double)CONCAT44(extraout_s1,uVar15);
  if ((uVar2 == 0) &&
     (((ulonglong)in_d0 & 0x7fffffff00000000) == 0 || (uVar3 & 0x3fffffff) == uVar13)) {
    if ((longlong)in_d1 < 0) {
      dVar17 = 1.0 / dVar17;
    }
    if (-1 < (longlong)in_d0) goto LAB_0002acd0;
    in_d0 = dVar17;
    if (uVar8 != 0x3ff00000 || iVar5 != 0) {
      if (iVar5 == 1) {
        dVar17 = -dVar17;
      }
      goto LAB_0002acd0;
    }
  }
  else if (iVar5 != 0 || -1 < (longlong)in_d0) {
    if (DAT_0002b1a8 < (int)uVar10) {
      if (DAT_0002b1a8 + 0x2100000 < (int)uVar10) {
        if (DAT_0002b1a8 + -0x1f00001 < (int)uVar8) {
LAB_0002aea4:
          in_d0 = DAT_0002b118;
          if ((int)uVar20 < 1) goto LAB_0002adb0;
          goto LAB_0002adc0;
        }
LAB_0002ae80:
        in_d0 = DAT_0002b118;
        if (-1 < (longlong)in_d1) goto LAB_0002adb0;
        goto LAB_0002adc0;
      }
      if ((int)uVar8 <= DAT_0002b1ac) goto LAB_0002ae80;
      if ((int)uVar13 < (int)uVar8) goto LAB_0002aea4;
      dVar18 = in_d0 - 1.0;
      dVar21 = -(DAT_0002b130 * (-(DAT_0002b120 + -dVar18 * 0.25) * dVar18 + 0.5) * dVar18 * dVar18)
               + dVar18 * DAT_0002b128;
      dVar17 = (double)CONCAT44((int)((ulonglong)(dVar21 + dVar18 * DAT_0002b138) >> 0x20),
                                DAT_0002b190);
      dVar21 = dVar21 - (dVar17 + -dVar18 * DAT_0002b138);
    }
    else {
      if ((uVar3 & uVar6) == 0) {
        iVar4 = -0x35;
        dVar17 = dVar17 * DAT_0002b140;
        uVar8 = (uint)((ulonglong)dVar17 >> 0x20);
      }
      else {
        iVar4 = 0;
      }
      uVar2 = uVar8 & 0xfffff;
      uVar13 = uVar2 | uVar13;
      iVar4 = ((int)uVar8 >> 0x14) + -0x3ff + iVar4;
      if (DAT_0002b1b4 < (int)uVar2) {
        if (DAT_0002b1b8 < (int)uVar2) {
          iVar4 = iVar4 + 1;
          uVar13 = uVar13 - 0x100000;
          goto LAB_0002afc8;
        }
        iVar7 = 1;
      }
      else {
LAB_0002afc8:
        iVar7 = 0;
      }
      pdVar12 = (double *)(DAT_0002b1bc + 0x2afe8 + iVar7 * 8);
      dVar23 = *pdVar12;
      dVar21 = (double)(((ulonglong)uVar13 << 0x20) + ((ulonglong)dVar17 & 0xffffffff));
      dVar22 = 1.0 / (dVar23 + dVar21);
      dVar17 = (double)((ulonglong)(((int)uVar13 >> 1 | 0x20000000U) + 0x80000 + iVar7 * 0x40000) <<
                       0x20);
      dVar25 = (dVar21 - dVar23) * dVar22;
      dVar18 = (double)((ulonglong)dVar25 & 0xffffffff00000000);
      dVar24 = -dVar18;
      dVar19 = dVar25 * dVar25;
      dVar22 = ((dVar21 - dVar23) + dVar24 * dVar17 + dVar24 * (dVar21 - (dVar17 - dVar23))) *
               dVar22;
      dVar21 = (dVar25 + dVar18) * dVar22 +
               dVar19 * dVar19 *
               (DAT_0002b170 +
               (DAT_0002b168 +
               (DAT_0002b160 +
               (DAT_0002b158 + (DAT_0002b148 + dVar19 * DAT_0002b150) * dVar19) * dVar19) * dVar19)
               * dVar19);
      dVar17 = (double)((ulonglong)(dVar18 * dVar18 + 3.0 + dVar21) & 0xffffffff00000000);
      dVar21 = (dVar21 - ((dVar17 - 3.0) + dVar24 * dVar18)) * dVar25 + dVar22 * dVar17;
      dVar18 = (double)((ulonglong)(dVar21 + dVar18 * dVar17) & 0xffffffff00000000);
      dVar21 = (dVar21 - (dVar18 + dVar24 * dVar17)) * DAT_0002b180 + dVar18 * DAT_0002b188 +
               pdVar12[2];
      dVar19 = (double)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
      dVar17 = (double)((ulonglong)(dVar21 + dVar18 * DAT_0002b178 + pdVar12[4] + dVar19) &
                       0xffffffff00000000);
      dVar21 = dVar21 - (((dVar17 - dVar19) - pdVar12[4]) + -dVar18 * DAT_0002b178);
    }
    dVar18 = dVar21 * in_d1 + (in_d1 - (double)((ulonglong)uVar20 << 0x20)) * dVar17;
    dVar17 = dVar17 * (double)((ulonglong)uVar20 << 0x20);
    dVar19 = 1.0;
    dVar21 = dVar18 + dVar17;
    uVar2 = (uint)((ulonglong)dVar21 >> 0x20);
    if (iVar5 == 1 && (longlong)in_d0 < 0) {
      dVar19 = -1.0;
    }
    if (DAT_0002b1b0 < (int)uVar2) {
      dVar23 = DAT_0002b118;
      if ((dVar21 == 1024.0) && (dVar18 + DAT_0002b330 <= 1024.0 - dVar17)) goto LAB_0002b1d8;
LAB_0002af68:
      dVar19 = dVar19 * dVar23;
    }
    else {
      if ((DAT_0002b38c < (int)(uVar2 & 0x7fffffff)) &&
         ((dVar23 = DAT_0002b378, uVar2 + DAT_0002b390 != 0 || SUB84(dVar21,0) != 0 ||
          (dVar18 <= dVar21 - dVar17)))) goto LAB_0002af68;
LAB_0002b1d8:
      if (DAT_0002b384 < (int)(uVar2 & 0x7fffffff)) {
        uVar2 = uVar2 + (0x100000 >> (((int)(uVar2 & 0x7fffffff) >> 0x14) - 0x3feU & 0xff));
        uVar3 = ((uVar2 & 0x7fffffff) >> 0x14) - 0x3ff;
        iVar5 = (int)(uVar2 & 0xfffff | 0x100000) >> (0x14 - uVar3 & 0xff);
        dVar17 = dVar17 - (double)((ulonglong)(uVar2 & ~(DAT_0002b388 >> (uVar3 & 0xff))) << 0x20);
        if ((longlong)dVar21 < 0) {
          iVar5 = -iVar5;
        }
      }
      else {
        iVar5 = 0;
      }
      dVar21 = (double)CONCAT44((int)((ulonglong)(dVar17 + dVar18) >> 0x20),DAT_0002b380);
      dVar17 = dVar21 * DAT_0002b338 + (dVar18 - (dVar21 - dVar17)) * DAT_0002b350;
      dVar23 = dVar17 + dVar21 * DAT_0002b340;
      dVar18 = dVar23 * dVar23;
      dVar17 = dVar17 - (dVar23 + -dVar21 * DAT_0002b340);
      dVar18 = dVar23 + -(DAT_0002b370 +
                         (DAT_0002b368 +
                         (DAT_0002b358 + (DAT_0002b348 + dVar18 * DAT_0002b360) * dVar18) * dVar18)
                         * dVar18) * dVar18;
      dVar17 = 1.0 - (((dVar23 * dVar18) / (dVar18 - 2.0) - (dVar17 + dVar23 * dVar17)) - dVar23);
      iVar5 = (int)((ulonglong)dVar17 >> 0x20) + iVar5 * 0x100000;
      if (iVar5 < 0x100000) {
        uVar15 = FUN_0002b580();
        dVar23 = (double)CONCAT44(extraout_s1_00,uVar15);
      }
      else {
        dVar23 = (double)CONCAT44(iVar5,SUB84(dVar17,0));
      }
    }
    dVar17 = dVar23 * dVar19;
    goto LAB_0002acd0;
  }
  dVar17 = (in_d0 - in_d0) / (in_d0 - in_d0);
LAB_0002acd0:
  return SUB84(dVar17,0);
}



/* ===== FUN_0002b568 @ 0002b568 size=20 ===== */

undefined4 FUN_0002b568(undefined4 param_1)

{
  return param_1;
}



/* ===== FUN_0002b580 @ 0002b580 size=244 ===== */

undefined4 FUN_0002b580(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  double in_d0;
  undefined4 extraout_s1;
  double dVar5;
  
  uVar1 = (uint)((ulonglong)in_d0 >> 0x20);
  uVar2 = (uVar1 & 0x7fffffff) >> 0x14;
  if (uVar2 == 0) {
    if (((ulonglong)in_d0 & 0x7fffffff00000000) == 0 && SUB84(in_d0,0) == 0) {
LAB_0002b5f4:
      return SUB84(in_d0,0);
    }
    in_d0 = in_d0 * DAT_0002b678;
    uVar1 = (uint)((ulonglong)in_d0 >> 0x20);
    uVar2 = ((uVar1 & 0x7fffffff) >> 0x14) - 0x36;
  }
  else if (uVar2 == 0x7ff) {
    in_d0 = in_d0 + in_d0;
    goto LAB_0002b5f4;
  }
  iVar3 = param_1 + uVar2;
  if (iVar3 < 0x7ff) {
    dVar5 = DAT_0002b688;
    if (param_1 < DAT_0002b698) goto LAB_0002b5d4;
    if (0 < iVar3) {
      return SUB84(in_d0,0);
    }
    if (-0x36 < iVar3) {
      return SUB84((double)(((ulonglong)(uVar1 & 0x800fffff | (iVar3 + 0x36) * 0x100000) << 0x20) +
                           ((ulonglong)in_d0 & 0xffffffff)) * DAT_0002b690,0);
    }
    if (param_1 < 0xc351) goto LAB_0002b5d4;
  }
  dVar5 = DAT_0002b680;
LAB_0002b5d4:
  uVar4 = FUN_0002c158(SUB84(dVar5,0));
  return SUB84((double)CONCAT44(extraout_s1,uVar4) * dVar5,0);
}



/* ===== FUN_0002b69c @ 0002b69c size=64 ===== */

/* WARNING: Removing unreachable block (ram,0x0002b6cc) */
/* WARNING: Removing unreachable block (ram,0x0002b6c8) */
/* WARNING: Removing unreachable block (ram,0x0002b6bc) */
/* WARNING: Removing unreachable block (ram,0x0002b6b4) */
/* WARNING: Removing unreachable block (ram,0x0002b6c4) */
/* WARNING: Removing unreachable block (ram,0x0002b6d4) */

undefined4 FUN_0002b69c(undefined4 param_1)

{
  software_interrupt(0);
  *(undefined4 *)(DAT_0002b6dc + 0x2b6c0) = param_1;
  return 0;
}



/* ===== FUN_0002b71c @ 0002b71c size=52 ===== */

uint FUN_0002b71c(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_0002b750 + 0x2b748)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_0002b754 @ 0002b754 size=48 ===== */

uint FUN_0002b754(uint param_1)

{
  int iVar1;
  
  software_interrupt(0);
  if (param_1 < 0xfffff001) {
    return param_1;
  }
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(uint *)(iVar1 + *(int *)(DAT_0002b784 + 0x2b77c)) = -param_1;
  return 0xffffffff;
}



/* ===== FUN_0002b788 @ 0002b788 size=84 ===== */

undefined4 FUN_0002b788(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(DAT_0002b7dc + 0x2b794) == 0) {
    uVar1 = FUN_0002b754();
    return uVar1;
  }
  uVar1 = FUN_00022c10();
  uVar2 = FUN_0002b754(param_1,param_2,param_3);
  FUN_00022cbc(uVar1);
  return uVar2;
}



/* ===== FUN_0002b7e0 @ 0002b7e0 size=152 ===== */

uint FUN_0002b7e0(undefined4 *param_1,char *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  char local_14 [4];
  undefined4 local_10;
  char *local_c;
  
  if (param_4 == 0) {
    param_4 = DAT_0002b878 + 0x2b800;
  }
  if (param_2 == (char *)0x0) {
    local_14[0] = '\0';
    param_2 = local_14;
    param_1 = (undefined4 *)0x0;
  }
  else {
    if (*param_2 == '\0') {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = 0;
      }
      return 0;
    }
    if (param_3 == 0) {
      return 0;
    }
  }
  local_c = param_2;
  uVar1 = FUN_0002b87c(&local_10,&local_c,0xffffffff,1,param_4);
  uVar2 = ~uVar1 >> 0x1f;
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  if (uVar2 != 0) {
    *param_1 = local_10;
  }
  return uVar1;
}



/* ===== FUN_0002b87c @ 0002b87c size=184 ===== */

int FUN_0002b87c(uint *param_1,undefined4 *param_2,uint param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  bool bVar6;
  uint local_c;
  
  if (param_5 == (uint *)0x0) {
    param_5 = (uint *)(DAT_0002b934 + 0x2b894);
  }
  if (param_5 == param_1 || param_1 == (uint *)0x0) {
    bVar6 = param_1 == (uint *)0x0;
    param_1 = &local_c;
    if (bVar6) {
      param_4 = 0xffffffff;
    }
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  pbVar2 = (byte *)*param_2;
  uVar1 = param_4;
  if (param_3 <= param_4) {
    param_4 = param_3;
    uVar1 = param_3;
  }
  for (; pbVar4 = pbVar2, param_4 != 0; param_4 = param_4 - 1) {
    uVar5 = (uint)*pbVar2;
    pbVar2 = pbVar2 + 1;
    *param_1 = uVar5;
    pbVar4 = (byte *)0x0;
    if (uVar5 == 0) break;
    if (0x7f < uVar5) {
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar3 + *(int *)(DAT_0002b938 + 0x2b920)) = 0x54;
      return -1;
    }
    param_1 = param_1 + iVar3;
  }
  if (param_1 != &local_c) {
    *param_2 = pbVar4;
  }
  return uVar1 - param_4;
}



/* ===== FUN_0002b93c @ 0002b93c size=28 ===== */

void FUN_0002b93c(undefined4 param_1,int param_2,undefined4 param_3)

{
  FUN_0002bafc(param_1,param_2,param_2,param_2 >> 0x1f,param_3,param_2,param_3);
  return;
}



/* ===== FUN_0002b958 @ 0002b958 size=420 ===== */

uint FUN_0002b958(uint param_1,ushort *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar5 = *(int *)(param_2 + 0x1a);
  if (iVar5 == 0) {
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (*(int *)(param_2 + 0x20) != iVar6 + -0x490) {
      puVar2 = param_2 + 0x1c;
      DataMemoryBarrier(0xb);
      do {
        if (*(int *)puVar2 != 0) goto LAB_0002b9a8;
        bVar7 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar7);
      puVar2[0] = 1;
      puVar2[1] = 0;
LAB_0002b9a8:
      DataMemoryBarrier(0xb);
      if (*(int *)puVar2 != 0) {
        FUN_000266a8();
      }
      *(int *)(param_2 + 0x20) = iVar6 + -0x490;
    }
    *(int *)(param_2 + 0x1e) = *(int *)(param_2 + 0x1e) + 1;
  }
  uVar3 = *(uint *)(param_2 + 8);
  uVar4 = *param_2;
  bVar7 = 0xfffffffe < param_1;
  if (param_1 != 0xffffffff) {
    bVar7 = *(uint *)(param_2 + 0xc) <= uVar3;
  }
  if (((bVar7) || (uVar3 <= *(uint *)(param_2 + 4))) ||
     ((uint)*(byte *)(uVar3 - 1) != (param_1 & 0xff))) {
    if ((0x80 < (uVar4 & 0x83)) || (iVar6 = FUN_00027648(param_2,0x80), iVar6 == 0)) {
      uVar1 = *param_2;
      if (((uVar1 & 2) == 0) || (((uVar1 & 1) == 0 && (*(int *)(param_2 + 0x14) == 0)))) {
        if (param_1 == 0xffffffff) goto LAB_0002ba70;
        *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 4);
        param_2[0x14] = 1;
        param_2[0x15] = 0;
        uVar4 = (ushort)(uVar1 + 1);
        *(uint *)(param_2 + ((uVar1 + 1 & 1) + 8) * 2 + 2) = param_1;
        goto LAB_0002ba4c;
      }
    }
    param_1 = 0xffffffff;
  }
  else {
    *(uint *)(param_2 + 8) = uVar3 - 1;
LAB_0002ba4c:
    *param_2 = uVar4 & 0xfffb;
  }
LAB_0002ba70:
  if ((iVar5 == 0) &&
     (iVar5 = *(int *)(param_2 + 0x1e), *(int *)(param_2 + 0x1e) = iVar5 + -1, iVar5 + -1 == 0)) {
    puVar2 = param_2 + 0x1c;
    param_2[0x20] = 0;
    param_2[0x21] = 0;
    do {
      iVar5 = *(int *)(param_2 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        if (*(int *)puVar2 != iVar5) goto LAB_0002bab4;
        bVar7 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar7);
      puVar2[0] = 0;
      puVar2[1] = 0;
LAB_0002bab4:
      DataMemoryBarrier(0xb);
    } while (iVar5 != *(int *)puVar2);
    if (1 < iVar5) {
      software_interrupt(0);
    }
  }
  return param_1;
}



/* ===== FUN_0002bafc @ 0002bafc size=448 ===== */

undefined4
FUN_0002bafc(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (2 < param_5) {
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar3 + *(int *)(DAT_0002bcbc + 0x2bb28)) = 0x16;
    return 0xffffffff;
  }
  iVar3 = *(int *)(param_1 + 0x1a);
  local_20 = param_3;
  uStack_1c = param_4;
  uStack_18 = param_3;
  if (iVar3 == 0) {
    iVar5 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (*(int *)(param_1 + 0x20) != iVar5 + -0x490) {
      puVar2 = param_1 + 0x1c;
      DataMemoryBarrier(0xb);
      do {
        if (*(int *)puVar2 != 0) goto LAB_0002bb7c;
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      puVar2[0] = 1;
      puVar2[1] = 0;
LAB_0002bb7c:
      DataMemoryBarrier(0xb);
      if (*(int *)puVar2 != 0) {
        FUN_000266a8();
      }
      *(int *)(param_1 + 0x20) = iVar5 + -0x490;
    }
    *(int *)(param_1 + 0x1e) = *(int *)(param_1 + 0x1e) + 1;
  }
  if ((((*param_1 & 0x40) == 0) || (iVar5 = FUN_0001e424(param_1), iVar5 == 0)) &&
     ((param_5 != 1 || (iVar5 = FUN_0002bcc0(param_1,&local_20), -1 < iVar5)))) {
    if (*(int *)(param_1 + 2) == -2) {
      if (*(code **)(param_1 + 0x28) == (code *)0x0) goto LAB_0002bc34;
      iVar5 = (**(code **)(param_1 + 0x28))(*(undefined4 *)(param_1 + 0x22),&local_20,param_5);
    }
    else {
      iVar5 = FUN_0002bd6c(param_1,&local_20,param_5);
    }
    if (-1 < iVar5) {
      uVar6 = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = *param_1 & 0xffb8;
      uVar4 = *(undefined4 *)(param_1 + 4);
      *(undefined1 *)(param_1 + 1) = 0;
      *(undefined4 *)(param_1 + 8) = uVar4;
      *(undefined4 *)(param_1 + 10) = uVar4;
      *(undefined4 *)(param_1 + 0xc) = uVar4;
      *(undefined4 *)(param_1 + 0xe) = uVar4;
      goto LAB_0002bc38;
    }
  }
LAB_0002bc34:
  uVar6 = 0xffffffff;
LAB_0002bc38:
  if ((iVar3 == 0) &&
     (iVar3 = *(int *)(param_1 + 0x1e), *(int *)(param_1 + 0x1e) = iVar3 + -1, iVar3 + -1 == 0)) {
    puVar2 = param_1 + 0x1c;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x1c);
      DataMemoryBarrier(0xb);
      do {
        if (*(int *)puVar2 != iVar3) goto LAB_0002bc7c;
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      puVar2[0] = 0;
      puVar2[1] = 0;
LAB_0002bc7c:
      DataMemoryBarrier(0xb);
    } while (iVar3 != *(int *)puVar2);
    if (1 < iVar3) {
      software_interrupt(0);
    }
  }
  return uVar6;
}



/* ===== FUN_0002bcc0 @ 0002bcc0 size=168 ===== */

uint FUN_0002bcc0(ushort *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *param_1;
  uVar2 = uVar1 & 3;
  if ((((uVar1 & 3) != 0) && (uVar2 = uVar2 - 1, uVar2 != 0)) && ((uVar1 & 0x800) != 0)) {
    if ((uVar2 == 2) || (*(int *)(param_1 + 0x14) != 0)) {
      return 0xffffffff;
    }
    uVar2 = -(uint)*(byte *)((int)param_1 + 3);
    if (*(int *)(param_1 + 0x16) != 0) {
      uVar2 = uVar2 - (byte)param_1[1];
    }
  }
  if ((uVar1 & 0x40) == 0) {
    iVar4 = *(int *)(param_1 + 10);
  }
  else {
    iVar4 = *(int *)(param_1 + 4);
  }
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar2 = (iVar4 - *(int *)(param_1 + 8)) + uVar2;
  uVar3 = uVar6 - uVar2;
  uVar5 = uVar7 - (((int)uVar2 >> 0x1f) + (uint)(uVar6 < uVar2));
  *param_2 = uVar3;
  param_2[1] = uVar5;
  if ((int)(uVar7 - (uVar5 + (uVar6 < uVar3))) < 0 !=
      (SBORROW4(uVar7,uVar5) != SBORROW4(uVar7 - uVar5,(uint)(uVar6 < uVar3)))) {
    uVar2 = -uVar2;
  }
  if ((int)uVar2 < 0) {
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar4 + *(int *)(DAT_0002bd68 + 0x2bd5c)) = 0x4b;
    return uVar2;
  }
  return uVar2;
}



/* ===== FUN_0002bd6c @ 0002bd6c size=48 ===== */

undefined4 FUN_0002bd6c(int param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_0002c1c8(*(undefined4 *)(param_1 + 4),param_2,(int)*param_2,
                       *(undefined4 *)((int)param_2 + 4),param_3,param_2);
  uVar1 = (undefined4)lVar2;
  if (-1 < lVar2) {
    *param_2 = lVar2;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== FUN_0002bdd0 @ 0002bdd0 size=260 ===== */

undefined4 * FUN_0002bdd0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 auStack_20 [16];
  
  iVar4 = DAT_0002bed4 + 0x2bdec;
  if ((param_1 == 0) || (iVar1 = FUN_0001bcf8(param_2 * param_1,param_1), iVar1 == param_2)) {
    iVar1 = DAT_0002bee0 + 0x2be3c;
    FUN_000225d0(auStack_20,*(undefined4 *)(iVar4 + DAT_0002bedc),iVar1);
    FUN_000225c0(iVar1);
    puVar3 = (undefined4 *)FUN_000212e0(param_2 * param_1);
    if ((puVar3 != (undefined4 *)0x0) && ((puVar3[-1] & 2) == 0)) {
      uVar2 = (puVar3[-1] & 0xfffffffc) - 4;
      if (uVar2 < 0x28) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        if (0x13 < uVar2) {
          puVar3[3] = 0;
          puVar3[4] = 0;
          if (0x1b < uVar2) {
            puVar3[5] = 0;
            puVar3[6] = 0;
            if (0x23 < uVar2) {
              puVar3[7] = 0;
              puVar3[8] = 0;
            }
          }
        }
      }
      else {
        FUN_00020350();
      }
    }
    FUN_000225d8(auStack_20,1);
  }
  else {
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    puVar3 = (undefined4 *)0x0;
    *(undefined4 *)(iVar4 + *(int *)(DAT_0002bed8 + 0x2be1c)) = 0xc;
  }
  return puVar3;
}



/* ===== FUN_0002bee8 @ 0002bee8 size=508 ===== */

undefined4 FUN_0002bee8(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  undefined4 uVar5;
  double in_d0;
  double dVar6;
  int in_s15;
  double dVar7;
  double dVar8;
  double in_d18;
  double dVar9;
  double dVar10;
  
  uVar3 = (uint)((ulonglong)in_d0 >> 0x20);
  if ((int)uVar3 < 0x100000) {
    dVar6 = DAT_0002c0e8;
    if (((ulonglong)in_d0 & 0x7fffffff00000000) == 0 && SUB84(in_d0,0) == 0) {
LAB_0002bf14:
      return SUB84(dVar6 / 0.0,0);
    }
    if ((longlong)in_d0 < 0) {
      dVar6 = in_d0 - in_d0;
      goto LAB_0002bf14;
    }
    iVar2 = -0x36;
    in_d0 = in_d0 * DAT_0002c0f0;
    uVar3 = (uint)((ulonglong)in_d0 >> 0x20);
  }
  else {
    iVar2 = 0;
  }
  if (DAT_0002c148 < (int)uVar3) {
    return SUB84(in_d0 + in_d0,0);
  }
  uVar1 = uVar3 & 0xfffff;
  uVar4 = uVar1 + DAT_0002c14c & 0x100000;
  iVar2 = ((int)uVar3 >> 0x14) + -0x3ff + iVar2 + (uVar4 >> 0x14);
  dVar6 = (double)(((ulonglong)(uVar4 ^ 0x3ff00000 | uVar1) << 0x20) +
                  ((ulonglong)in_d0 & 0xffffffff)) - 1.0;
  if ((uVar1 + 2 & 0xfffff) < 3) {
    uVar3 = in_fpscr & 0xfffffff | (uint)(dVar6 == 0.0) << 0x1e;
    if (!SUB41(uVar3 >> 0x1e,0)) {
      if (iVar2 != 0) {
        in_d18 = DAT_0002c0f8;
        in_s15 = iVar2;
      }
      dVar8 = (-dVar6 * DAT_0002c108 + 0.5) * dVar6 * dVar6;
      if (iVar2 != 0) {
        dVar7 = (double)VectorSignedToFloat(in_s15,(byte)(uVar3 >> 0x16) & 3);
        uVar5 = SUB84(-((dVar8 + -dVar7 * in_d18) - dVar6) + dVar7 * DAT_0002c100,0);
      }
      else {
        uVar5 = SUB84(dVar6 - dVar8,0);
      }
      return uVar5;
    }
    if (iVar2 != 0) {
      dVar6 = (double)VectorSignedToFloat(iVar2,(byte)(uVar3 >> 0x16) & 3);
      return SUB84(dVar6 * DAT_0002c0f8 + dVar6 * DAT_0002c100,0);
    }
    return 0;
  }
  dVar7 = dVar6 / (dVar6 + 2.0);
  dVar9 = (double)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  dVar10 = dVar7 * dVar7;
  dVar8 = dVar10 * dVar10;
  dVar8 = (DAT_0002c140 + (DAT_0002c138 + (DAT_0002c130 + dVar8 * DAT_0002c118) * dVar8) * dVar8) *
          dVar10 + (DAT_0002c128 + (DAT_0002c120 + dVar8 * DAT_0002c110) * dVar8) * dVar8;
  if ((int)(DAT_0002c154 - uVar1 | uVar1 + DAT_0002c150) < 1) {
    dVar10 = (dVar6 - dVar8) * dVar7;
    if (iVar2 == 0) goto LAB_0002c0c8;
    dVar10 = dVar10 + -dVar9 * DAT_0002c0f8;
  }
  else {
    dVar10 = dVar6 * 0.5 * dVar6;
    dVar7 = (dVar8 + dVar10) * dVar7;
    if (iVar2 == 0) {
      dVar10 = dVar10 - dVar7;
LAB_0002c0c8:
      return SUB84(dVar6 - dVar10,0);
    }
    dVar10 = dVar10 - (dVar7 + dVar9 * DAT_0002c0f8);
  }
  return SUB84(-(dVar10 - dVar6) + dVar9 * DAT_0002c100,0);
}



/* ===== FUN_0002c158 @ 0002c158 size=32 ===== */

undefined4 FUN_0002c158(undefined4 param_1)

{
  return param_1;
}



/* ===== FUN_0002c178 @ 0002c178 size=76 ===== */

undefined8 FUN_0002c178(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  software_interrupt(0);
  uVar1 = param_1;
  if (0xfffff000 < param_1) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(uint *)(iVar2 + *(int *)(DAT_0002c1c4 + 0x2c1ac)) = -param_1;
    uVar1 = 0xffffffff;
  }
  iVar2 = (int)uVar1 >> 0x1f;
  if (uVar1 == 0) {
    uVar1 = param_1;
    iVar2 = param_2;
  }
  return CONCAT44(iVar2,uVar1);
}



/* ===== FUN_0002c1c8 @ 0002c1c8 size=108 ===== */

undefined4
FUN_0002c1c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(DAT_0002c234 + 0x2c1d8) == 0) {
    uVar1 = FUN_0002c178();
    return uVar1;
  }
  uVar2 = FUN_00022c10();
  uVar1 = FUN_0002c178(param_1,(int)((ulonglong)uVar2 >> 0x20),param_3,param_4,param_5);
  FUN_00022cbc((int)uVar2);
  return uVar1;
}


