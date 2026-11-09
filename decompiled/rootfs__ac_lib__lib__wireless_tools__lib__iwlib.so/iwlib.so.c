// iwlib.so — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== FUN_00010000 @ 00010000 size=20 ===== */

void FUN_00010000(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00010014(param_4,param_2,0x10);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== FUN_00010014 @ 00010014 size=24 ===== */

void FUN_00010014(void)

{
  FUN_00010014();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== FUN_0001002c @ 0001002c size=76 ===== */

undefined4 FUN_0001002c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined1 auStack_4d0 [16];
  undefined4 uStack_4c0;
  uint uStack_4bc;
  undefined1 auStack_4b0 [280];
  undefined1 uStack_398;
  undefined1 uStack_397;
  
  iVar1 = DAT_00010118;
  iVar2 = FUN_00010000(param_1,param_2,0x8b01,auStack_4d0);
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  uStack_4c0 = FUN_00010078(auStack_4b0,0,0x498);
  uStack_4bc = 0x498;
  iVar2 = FUN_00010000(param_1,param_2,0x8b0b,auStack_4d0);
  if (iVar2 < 0) {
    puVar4 = *(undefined4 **)(iVar1 + 0x1005c + DAT_0001011c);
    pcVar3 = FUN_000100b8 + DAT_00010120;
  }
  else {
    if (299 < (uStack_4bc & 0xffff)) {
      FUN_000100dc(DAT_00010124 + 0x100e0,param_2,uStack_397);
      FUN_000100ec(DAT_00010128 + 0x100f0,uStack_398);
      return 0;
    }
    puVar4 = *(undefined4 **)(iVar1 + 0x1005c + DAT_0001011c);
    pcVar3 = (code *)((int)&DAT_00010118 + DAT_0001012c);
  }
  FUN_000100b8(*puVar4,pcVar3,param_2);
  return 0;
}



/* ===== FUN_00010078 @ 00010078 size=88 ===== */

undefined4 FUN_00010078(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int unaff_r5;
  int unaff_r6;
  undefined1 in_stack_00000138;
  
  FUN_00010078();
  iVar1 = FUN_00010000();
  if (iVar1 < 0) {
    puVar3 = *(undefined4 **)(unaff_r5 + DAT_0001011c);
    pcVar2 = FUN_000100b8 + DAT_00010120;
  }
  else {
    if (299 < *(ushort *)(unaff_r6 + 0x14)) {
      FUN_000100dc(DAT_00010124 + 0x100e0);
      FUN_000100ec(DAT_00010128 + 0x100f0,in_stack_00000138);
      return 0;
    }
    puVar3 = *(undefined4 **)(unaff_r5 + DAT_0001011c);
    pcVar2 = (code *)((int)&DAT_00010118 + DAT_0001012c);
  }
  FUN_000100b8(*puVar3,pcVar2);
  return 0;
}



/* ===== FUN_000100b8 @ 000100b8 size=8 ===== */

undefined4 FUN_000100b8(void)

{
  FUN_000100b8();
  return 0;
}



/* ===== FUN_000100dc @ 000100dc size=16 ===== */

undefined4 FUN_000100dc(void)

{
  undefined1 in_stack_00000138;
  
  FUN_000100dc();
  FUN_000100ec(DAT_00010128 + 0x100f0,in_stack_00000138);
  return 0;
}



/* ===== FUN_000100ec @ 000100ec size=20 ===== */

undefined4 FUN_000100ec(void)

{
  FUN_000100ec();
  return 0;
}



/* ===== FUN_00010130 @ 00010130 size=28 ===== */

int FUN_00010130(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  puVar3 = (undefined4 *)(DAT_0001016c + 0x10144);
  do {
    iVar1 = FUN_0001014c(*puVar3,2,0);
    if (-1 < iVar1) {
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 4);
  return -1;
}



/* ===== FUN_0001014c @ 0001014c size=32 ===== */

int FUN_0001014c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int unaff_r4;
  undefined4 *unaff_r5;
  
  while( true ) {
    iVar1 = FUN_0001014c(param_1,param_2,param_3);
    if (-1 < iVar1) {
      return iVar1;
    }
    unaff_r4 = unaff_r4 + 1;
    if (unaff_r4 == 4) break;
    param_3 = 0;
    param_2 = 2;
    param_1 = *unaff_r5;
    unaff_r5 = unaff_r5 + 1;
  }
  return -1;
}



/* ===== FUN_00010398 @ 00010398 size=52 ===== */

undefined4 FUN_00010398(void)

{
  int iVar1;
  int iVar2;
  int unaff_r6;
  undefined4 in_stack_00000004;
  
  iVar1 = FUN_00010398();
  if (iVar1 == 0) {
    FUN_000103bc(FUN_000103bc + DAT_000104a4,**(undefined4 **)(unaff_r6 + 0x103a4 + DAT_000104a0));
LAB_000103c0:
    in_stack_00000004 = 0xffffffff;
  }
  else {
    FUN_000103e0(&stack0x00000008,0x400,iVar1);
    iVar2 = FUN_000103f0(&stack0x00000008,DAT_000104a8 + 0x103f4);
    if (iVar2 == 0) {
      iVar2 = FUN_00010408(&stack0x00000008,DAT_000104ac + 0x1040c);
      if (iVar2 == 0) {
        in_stack_00000004 = 0xb;
      }
      else {
        in_stack_00000004 = 0xf;
      }
    }
    else {
      FUN_00010438(&stack0x00000008,0x400,iVar1);
      iVar2 = FUN_00010444(&stack0x00000008,0x7c);
      if ((iVar2 == 0) ||
         (iVar2 = FUN_00010484(iVar2 + 1,DAT_000104b4 + 0x10488,&stack0x00000004), iVar2 != 1)) {
        FUN_00010464(FUN_00010464 + DAT_000104b0,
                     **(undefined4 **)(unaff_r6 + 0x103a4 + DAT_000104a0));
        FUN_0001046c(iVar1);
        goto LAB_000103c0;
      }
    }
    FUN_00010420(iVar1);
  }
  return in_stack_00000004;
}



/* ===== FUN_000103bc @ 000103bc size=20 ===== */

undefined4 FUN_000103bc(void)

{
  FUN_000103bc();
  return 0xffffffff;
}



/* ===== FUN_000103e0 @ 000103e0 size=16 ===== */

undefined4 FUN_000103e0(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r6;
  undefined4 in_stack_00000004;
  
  FUN_000103e0();
  iVar1 = FUN_000103f0();
  if (iVar1 == 0) {
    iVar1 = FUN_00010408();
    if (iVar1 == 0) {
      in_stack_00000004 = 0xb;
    }
    else {
      in_stack_00000004 = 0xf;
    }
  }
  else {
    FUN_00010438();
    iVar1 = FUN_00010444();
    if ((iVar1 == 0) ||
       (iVar1 = FUN_00010484(iVar1 + 1,DAT_000104b4 + 0x10488,unaff_r4 + -4), iVar1 != 1)) {
      FUN_00010464(FUN_00010464 + DAT_000104b0,**(undefined4 **)(unaff_r6 + DAT_000104a0));
      FUN_0001046c();
      return 0xffffffff;
    }
  }
  FUN_00010420();
  return in_stack_00000004;
}



/* ===== FUN_000103f0 @ 000103f0 size=36 ===== */

undefined4 FUN_000103f0(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r6;
  undefined4 in_stack_00000004;
  
  iVar1 = FUN_000103f0();
  if (iVar1 == 0) {
    iVar1 = FUN_00010408();
    if (iVar1 == 0) {
      in_stack_00000004 = 0xb;
    }
    else {
      in_stack_00000004 = 0xf;
    }
  }
  else {
    FUN_00010438();
    iVar1 = FUN_00010444();
    if ((iVar1 == 0) ||
       (iVar1 = FUN_00010484(iVar1 + 1,DAT_000104b4 + 0x10488,unaff_r4 + -4), iVar1 != 1)) {
      FUN_00010464(FUN_00010464 + DAT_000104b0,**(undefined4 **)(unaff_r6 + DAT_000104a0));
      FUN_0001046c();
      return 0xffffffff;
    }
  }
  FUN_00010420();
  return in_stack_00000004;
}



/* ===== FUN_00010408 @ 00010408 size=24 ===== */

undefined4 FUN_00010408(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00010408();
  if (iVar1 == 0) {
    uVar2 = 0xb;
  }
  else {
    uVar2 = 0xf;
  }
  FUN_00010420();
  return uVar2;
}



/* ===== FUN_00010420 @ 00010420 size=12 ===== */

undefined4 FUN_00010420(void)

{
  undefined4 in_stack_00000004;
  
  FUN_00010420();
  return in_stack_00000004;
}



/* ===== FUN_00010438 @ 00010438 size=12 ===== */

undefined4 FUN_00010438(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r6;
  undefined4 in_stack_00000004;
  
  FUN_00010438();
  iVar1 = FUN_00010444();
  if ((iVar1 == 0) ||
     (iVar1 = FUN_00010484(iVar1 + 1,DAT_000104b4 + 0x10488,unaff_r4 + -4), iVar1 != 1)) {
    FUN_00010464(FUN_00010464 + DAT_000104b0,**(undefined4 **)(unaff_r6 + DAT_000104a0));
    FUN_0001046c();
    in_stack_00000004 = 0xffffffff;
  }
  else {
    FUN_00010420();
  }
  return in_stack_00000004;
}



/* ===== FUN_00010444 @ 00010444 size=48 ===== */

undefined4 FUN_00010444(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r6;
  undefined4 in_stack_00000004;
  
  iVar1 = FUN_00010444();
  if ((iVar1 == 0) ||
     (iVar1 = FUN_00010484(iVar1 + 1,DAT_000104b4 + 0x10488,unaff_r4 + -4), iVar1 != 1)) {
    FUN_00010464(FUN_00010464 + DAT_000104b0,**(undefined4 **)(unaff_r6 + DAT_000104a0));
    FUN_0001046c();
    in_stack_00000004 = 0xffffffff;
  }
  else {
    FUN_00010420();
  }
  return in_stack_00000004;
}



/* ===== FUN_00010464 @ 00010464 size=8 ===== */

undefined4 FUN_00010464(void)

{
  FUN_00010464();
  FUN_0001046c();
  return 0xffffffff;
}



/* ===== FUN_0001046c @ 0001046c size=8 ===== */

undefined4 FUN_0001046c(void)

{
  FUN_0001046c();
  return 0xffffffff;
}



/* ===== FUN_00010484 @ 00010484 size=16 ===== */

undefined4 FUN_00010484(void)

{
  int iVar1;
  int unaff_r6;
  undefined4 in_stack_00000004;
  
  iVar1 = FUN_00010484();
  if (iVar1 == 1) {
    FUN_00010420();
  }
  else {
    FUN_00010464(FUN_00010464 + DAT_000104b0,**(undefined4 **)(unaff_r6 + DAT_000104a0));
    FUN_0001046c();
    in_stack_00000004 = 0xffffffff;
  }
  return in_stack_00000004;
}



/* ===== FUN_000104b8 @ 000104b8 size=8 ===== */

undefined4 FUN_000104b8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000104c0();
  if (iVar1 < 0) {
    FUN_000104d4(DAT_00010550 + 0x104d8);
    return 0xffffffff;
  }
  if (param_1 != 0) {
    FUN_000104f8(DAT_00010554 + 0x104fc,param_1,0x1d);
  }
  FUN_00010508(FUN_0001050c + DAT_00010558,0x16);
  iVar2 = FUN_0001050c();
  if (0xf < iVar2) {
    FUN_00010524(DAT_0001055c + 0x10528,iVar2);
  }
  FUN_0001053c(iVar1,DAT_00010560 + 0x10540,0);
  FUN_00010544(iVar1);
  return 0;
}



/* ===== FUN_000104c0 @ 000104c0 size=44 ===== */

undefined4 FUN_000104c0(void)

{
  int iVar1;
  int iVar2;
  int unaff_r5;
  
  iVar1 = FUN_000104c0();
  if (iVar1 < 0) {
    FUN_000104d4(DAT_00010550 + 0x104d8);
    return 0xffffffff;
  }
  if (unaff_r5 != 0) {
    FUN_000104f8(DAT_00010554 + 0x104fc);
  }
  FUN_00010508(FUN_0001050c + DAT_00010558,0x16);
  iVar2 = FUN_0001050c();
  if (0xf < iVar2) {
    FUN_00010524(DAT_0001055c + 0x10528,iVar2);
  }
  FUN_0001053c(iVar1,DAT_00010560 + 0x10540,0);
  FUN_00010544(iVar1);
  return 0;
}



/* ===== FUN_000104d4 @ 000104d4 size=12 ===== */

undefined4 FUN_000104d4(void)

{
  FUN_000104d4();
  return 0xffffffff;
}



/* ===== FUN_000104f8 @ 000104f8 size=16 ===== */

undefined4 FUN_000104f8(void)

{
  int iVar1;
  
  FUN_000104f8();
  FUN_00010508(FUN_0001050c + DAT_00010558,0x16);
  iVar1 = FUN_0001050c();
  if (0xf < iVar1) {
    FUN_00010524(DAT_0001055c + 0x10528,iVar1);
  }
  FUN_0001053c();
  FUN_00010544();
  return 0;
}



/* ===== FUN_00010508 @ 00010508 size=4 ===== */

undefined4 FUN_00010508(void)

{
  int iVar1;
  
  FUN_00010508();
  iVar1 = FUN_0001050c();
  if (0xf < iVar1) {
    FUN_00010524(DAT_0001055c + 0x10528,iVar1);
  }
  FUN_0001053c();
  FUN_00010544();
  return 0;
}



/* ===== FUN_0001050c @ 0001050c size=24 ===== */

undefined4 FUN_0001050c(void)

{
  int iVar1;
  
  iVar1 = FUN_0001050c();
  if (0xf < iVar1) {
    FUN_00010524(DAT_0001055c + 0x10528,iVar1);
  }
  FUN_0001053c();
  FUN_00010544();
  return 0;
}



/* ===== FUN_00010524 @ 00010524 size=24 ===== */

undefined4 FUN_00010524(void)

{
  FUN_00010524();
  FUN_0001053c();
  FUN_00010544();
  return 0;
}



/* ===== FUN_0001053c @ 0001053c size=8 ===== */

undefined4 FUN_0001053c(void)

{
  FUN_0001053c();
  FUN_00010544();
  return 0;
}



/* ===== FUN_00010544 @ 00010544 size=12 ===== */

undefined4 FUN_00010544(void)

{
  FUN_00010544();
  return 0;
}



/* ===== FUN_00010564 @ 00010564 size=48 ===== */

undefined4 FUN_00010564(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_4d8 [16];
  undefined4 *puStack_4c8;
  uint uStack_4c4;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined1 auStack_4ac [132];
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 auStack_420 [9];
  undefined4 auStack_3fc [15];
  undefined4 auStack_3c0 [8];
  byte bStack_3a0;
  undefined4 auStack_388 [218];
  
  FUN_00010594(&uStack_4b8,0,0x498);
  uStack_4c4 = 0x498;
  puStack_4c8 = &uStack_4b8;
  iVar1 = FUN_00010000(param_1,param_2,0x8b0b,auStack_4d8);
  iVar7 = DAT_000107fc + 0x105c4;
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  if ((uStack_4c4 & 0xffff) < 300) {
    bStack_3a0 = 9;
  }
  else if (0xf < bStack_3a0) {
    FUN_000105f8(param_3,&uStack_4b8,0x24c);
    goto LAB_000105fc;
  }
  FUN_00010720(param_3,0,0x24c);
  *param_3 = uStack_4b8;
  param_3[1] = uStack_4b4;
  param_3[2] = uStack_4b0;
  FUN_00010748(param_3 + 0x4c,auStack_4ac,0x84);
  puVar9 = auStack_420;
  param_3[10] = uStack_428;
  param_3[0xb] = uStack_424;
  puVar5 = param_3 + 0xd;
  do {
    puVar4 = puVar5 + 2;
    uVar2 = *puVar9;
    uVar3 = puVar9[1];
    puVar9 = puVar9 + 2;
    *puVar5 = uVar2;
    puVar5[1] = uVar3;
    puVar5 = puVar4;
  } while (puVar9 != auStack_420 + 8);
  puVar8 = auStack_3fc;
  *puVar4 = *puVar9;
  puVar5 = param_3 + 0x2e;
  do {
    uVar2 = *puVar8;
    uVar3 = puVar8[1];
    puVar8 = puVar8 + 2;
    *puVar5 = uVar2;
    puVar5[1] = uVar3;
    puVar5 = puVar5 + 2;
  } while (puVar8 != auStack_3fc + 0xe);
  puVar9 = auStack_3c0;
  *(undefined4 *)((int)param_3 + 0xf2) = auStack_3fc[0xe];
  puVar5 = param_3 + 0x3e;
  do {
    uVar2 = *puVar9;
    uVar3 = puVar9[1];
    puVar9 = puVar9 + 2;
    *puVar5 = uVar2;
    puVar5[1] = uVar3;
    puVar5 = puVar5 + 2;
  } while (puVar9 != auStack_388);
  param_3[0xc] = auStack_388[0];
LAB_000105fc:
  piVar6 = *(int **)(iVar7 + DAT_00010800);
  if (*piVar6 == 0) {
    if (*(byte *)(param_3 + 0x46) < 0xb) {
      puVar5 = *(undefined4 **)(iVar7 + DAT_00010804);
      FUN_00010634(*puVar5,FUN_00010634 + DAT_00010808,param_2);
      FUN_00010644(DAT_0001080c + 0x10648,*puVar5);
      FUN_00010654(DAT_00010810 + 0x10658,*puVar5);
    }
    if (0x16 < *(byte *)(param_3 + 0x46)) {
      puVar5 = *(undefined4 **)(iVar7 + DAT_00010804);
      FUN_0001067c(*puVar5,DAT_00010814 + 0x10678,param_2);
      FUN_00010690(*puVar5,DAT_00010818 + 0x10694,0x16);
      FUN_000106a0(DAT_0001081c + 0x106a4,*puVar5);
    }
    if ((10 < *(byte *)(param_3 + 0x46)) &&
       (*(byte *)(param_3 + 0x46) < *(byte *)((int)param_3 + 0x119))) {
      puVar5 = *(undefined4 **)(iVar7 + DAT_00010804);
      FUN_000106d4(*puVar5,DAT_00010820 + 0x106d0,param_2);
      FUN_000106e8(*puVar5,FUN_000106e8 + DAT_00010824,*(undefined1 *)(param_3 + 0x46));
      FUN_000106f8(DAT_00010828 + 0x106fc,*puVar5);
    }
  }
  *piVar6 = 1;
  return 0;
}



/* ===== FUN_00010594 @ 00010594 size=112 ===== */

undefined4 FUN_00010594(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r4;
  int unaff_r5;
  undefined4 *puVar5;
  undefined4 *unaff_r6;
  int *piVar6;
  int iVar7;
  ushort unaff_r9;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 in_stack_00000114;
  byte in_stack_00000138;
  undefined4 in_stack_00000150;
  
  FUN_00010594();
  iVar1 = FUN_00010000();
  iVar7 = DAT_000107fc + 0x105c4;
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if ((unaff_r9 < 300) || (in_stack_00000138 < 0x10)) {
      FUN_00010720();
      uVar3 = unaff_r6[1];
      *unaff_r4 = *unaff_r6;
      uVar2 = unaff_r6[2];
      unaff_r4[1] = uVar3;
      unaff_r4[2] = uVar2;
      FUN_00010748(unaff_r4 + 0x4c,unaff_r5 + 4,0x84);
      puVar8 = (undefined4 *)(unaff_r5 + 0x90);
      uVar2 = *(undefined4 *)(unaff_r5 + 0x8c);
      unaff_r4[10] = *(undefined4 *)(unaff_r5 + 0x88);
      unaff_r4[0xb] = uVar2;
      puVar5 = unaff_r4 + 0xd;
      do {
        puVar4 = puVar5 + 2;
        uVar2 = *puVar8;
        uVar3 = puVar8[1];
        puVar8 = puVar8 + 2;
        *puVar5 = uVar2;
        puVar5[1] = uVar3;
        puVar5 = puVar4;
      } while (puVar8 != (undefined4 *)(unaff_r5 + 0xb0));
      puVar9 = (undefined4 *)(unaff_r5 + 0xb4);
      *puVar4 = *puVar8;
      puVar5 = unaff_r4 + 0x2e;
      do {
        uVar2 = *puVar9;
        uVar3 = puVar9[1];
        puVar9 = puVar9 + 2;
        *puVar5 = uVar2;
        puVar5[1] = uVar3;
        puVar5 = puVar5 + 2;
      } while (puVar9 != (undefined4 *)(unaff_r5 + 0xec));
      puVar8 = (undefined4 *)(unaff_r5 + 0xf0);
      *(undefined4 *)((int)unaff_r4 + 0xf2) = in_stack_00000114;
      puVar5 = unaff_r4 + 0x3e;
      do {
        uVar2 = *puVar8;
        uVar3 = puVar8[1];
        puVar8 = puVar8 + 2;
        *puVar5 = uVar2;
        puVar5[1] = uVar3;
        puVar5 = puVar5 + 2;
      } while (puVar8 != (undefined4 *)(unaff_r5 + 0x128));
      unaff_r4[0xc] = in_stack_00000150;
    }
    else {
      FUN_000105f8();
    }
    piVar6 = *(int **)(iVar7 + DAT_00010800);
    if (*piVar6 == 0) {
      if (*(byte *)(unaff_r4 + 0x46) < 0xb) {
        puVar5 = *(undefined4 **)(iVar7 + DAT_00010804);
        FUN_00010634(*puVar5,FUN_00010634 + DAT_00010808);
        FUN_00010644(DAT_0001080c + 0x10648,*puVar5);
        FUN_00010654(DAT_00010810 + 0x10658,*puVar5);
      }
      if (0x16 < *(byte *)(unaff_r4 + 0x46)) {
        puVar5 = *(undefined4 **)(iVar7 + DAT_00010804);
        FUN_0001067c(*puVar5,DAT_00010814 + 0x10678);
        FUN_00010690(*puVar5,DAT_00010818 + 0x10694,0x16);
        FUN_000106a0(DAT_0001081c + 0x106a4,*puVar5);
      }
      if ((10 < *(byte *)(unaff_r4 + 0x46)) &&
         (*(byte *)(unaff_r4 + 0x46) < *(byte *)((int)unaff_r4 + 0x119))) {
        puVar5 = *(undefined4 **)(iVar7 + DAT_00010804);
        FUN_000106d4(*puVar5,DAT_00010820 + 0x106d0);
        FUN_000106e8(*puVar5,FUN_000106e8 + DAT_00010824,*(undefined1 *)(unaff_r4 + 0x46));
        FUN_000106f8(DAT_00010828 + 0x106fc,*puVar5);
      }
    }
    uVar2 = 0;
    *piVar6 = 1;
  }
  return uVar2;
}



/* ===== FUN_000105f8 @ 000105f8 size=60 ===== */

undefined4 FUN_000105f8(void)

{
  int unaff_r4;
  undefined4 *puVar1;
  int *piVar2;
  int unaff_r7;
  
  FUN_000105f8();
  piVar2 = *(int **)(unaff_r7 + DAT_00010800);
  if (*piVar2 == 0) {
    if (*(byte *)(unaff_r4 + 0x118) < 0xb) {
      puVar1 = *(undefined4 **)(unaff_r7 + DAT_00010804);
      FUN_00010634(*puVar1,FUN_00010634 + DAT_00010808);
      FUN_00010644(DAT_0001080c + 0x10648,*puVar1);
      FUN_00010654(DAT_00010810 + 0x10658,*puVar1);
    }
    if (0x16 < *(byte *)(unaff_r4 + 0x118)) {
      puVar1 = *(undefined4 **)(unaff_r7 + DAT_00010804);
      FUN_0001067c(*puVar1,DAT_00010814 + 0x10678);
      FUN_00010690(*puVar1,DAT_00010818 + 0x10694,0x16);
      FUN_000106a0(DAT_0001081c + 0x106a4,*puVar1);
    }
    if ((10 < *(byte *)(unaff_r4 + 0x118)) &&
       (*(byte *)(unaff_r4 + 0x118) < *(byte *)(unaff_r4 + 0x119))) {
      puVar1 = *(undefined4 **)(unaff_r7 + DAT_00010804);
      FUN_000106d4(*puVar1,DAT_00010820 + 0x106d0);
      FUN_000106e8(*puVar1,FUN_000106e8 + DAT_00010824,*(undefined1 *)(unaff_r4 + 0x118));
      FUN_000106f8(DAT_00010828 + 0x106fc,*puVar1);
    }
  }
  *piVar2 = 1;
  return 0;
}



/* ===== FUN_00010634 @ 00010634 size=16 ===== */

undefined4 FUN_00010634(void)

{
  int unaff_r4;
  undefined4 *unaff_r5;
  undefined4 *puVar1;
  undefined4 *unaff_r6;
  int unaff_r7;
  
  FUN_00010634();
  FUN_00010644(DAT_0001080c + 0x10648,*unaff_r5);
  FUN_00010654(DAT_00010810 + 0x10658,*unaff_r5);
  if (0x16 < *(byte *)(unaff_r4 + 0x118)) {
    puVar1 = *(undefined4 **)(unaff_r7 + DAT_00010804);
    FUN_0001067c(*puVar1,DAT_00010814 + 0x10678);
    FUN_00010690(*puVar1,DAT_00010818 + 0x10694,0x16);
    FUN_000106a0(DAT_0001081c + 0x106a4,*puVar1);
  }
  if ((10 < *(byte *)(unaff_r4 + 0x118)) &&
     (*(byte *)(unaff_r4 + 0x118) < *(byte *)(unaff_r4 + 0x119))) {
    puVar1 = *(undefined4 **)(unaff_r7 + DAT_00010804);
    FUN_000106d4(*puVar1,DAT_00010820 + 0x106d0);
    FUN_000106e8(*puVar1,FUN_000106e8 + DAT_00010824,*(undefined1 *)(unaff_r4 + 0x118));
    FUN_000106f8(DAT_00010828 + 0x106fc,*puVar1);
  }
  *unaff_r6 = 1;
  return 0;
}



/* ===== FUN_00010644 @ 00010644 size=16 ===== */

undefined4 FUN_00010644(void)

{
  int unaff_r4;
  undefined4 *unaff_r5;
  undefined4 *puVar1;
  undefined4 *unaff_r6;
  int unaff_r7;
  
  FUN_00010644();
  FUN_00010654(DAT_00010810 + 0x10658,*unaff_r5);
  if (0x16 < *(byte *)(unaff_r4 + 0x118)) {
    puVar1 = *(undefined4 **)(unaff_r7 + DAT_00010804);
    FUN_0001067c(*puVar1,DAT_00010814 + 0x10678);
    FUN_00010690(*puVar1,DAT_00010818 + 0x10694,0x16);
    FUN_000106a0(DAT_0001081c + 0x106a4,*puVar1);
  }
  if ((10 < *(byte *)(unaff_r4 + 0x118)) &&
     (*(byte *)(unaff_r4 + 0x118) < *(byte *)(unaff_r4 + 0x119))) {
    puVar1 = *(undefined4 **)(unaff_r7 + DAT_00010804);
    FUN_000106d4(*puVar1,DAT_00010820 + 0x106d0);
    FUN_000106e8(*puVar1,FUN_000106e8 + DAT_00010824,*(undefined1 *)(unaff_r4 + 0x118));
    FUN_000106f8(DAT_00010828 + 0x106fc,*puVar1);
  }
  *unaff_r6 = 1;
  return 0;
}



/* ===== FUN_00010654 @ 00010654 size=40 ===== */

undefined4 FUN_00010654(void)

{
  int unaff_r4;
  undefined4 *puVar1;
  undefined4 *unaff_r6;
  int unaff_r7;
  
  FUN_00010654();
  if (0x16 < *(byte *)(unaff_r4 + 0x118)) {
    puVar1 = *(undefined4 **)(unaff_r7 + DAT_00010804);
    FUN_0001067c(*puVar1,DAT_00010814 + 0x10678);
    FUN_00010690(*puVar1,DAT_00010818 + 0x10694,0x16);
    FUN_000106a0(DAT_0001081c + 0x106a4,*puVar1);
  }
  if ((10 < *(byte *)(unaff_r4 + 0x118)) &&
     (*(byte *)(unaff_r4 + 0x118) < *(byte *)(unaff_r4 + 0x119))) {
    puVar1 = *(undefined4 **)(unaff_r7 + DAT_00010804);
    FUN_000106d4(*puVar1,DAT_00010820 + 0x106d0);
    FUN_000106e8(*puVar1,FUN_000106e8 + DAT_00010824,*(undefined1 *)(unaff_r4 + 0x118));
    FUN_000106f8(DAT_00010828 + 0x106fc,*puVar1);
  }
  *unaff_r6 = 1;
  return 0;
}



/* ===== FUN_0001067c @ 0001067c size=20 ===== */

undefined4 FUN_0001067c(void)

{
  int unaff_r4;
  undefined4 *unaff_r5;
  undefined4 *puVar1;
  undefined4 *unaff_r6;
  int unaff_r7;
  
  FUN_0001067c();
  FUN_00010690(*unaff_r5,DAT_00010818 + 0x10694,0x16);
  FUN_000106a0(DAT_0001081c + 0x106a4,*unaff_r5);
  if ((10 < *(byte *)(unaff_r4 + 0x118)) &&
     (*(byte *)(unaff_r4 + 0x118) < *(byte *)(unaff_r4 + 0x119))) {
    puVar1 = *(undefined4 **)(unaff_r7 + DAT_00010804);
    FUN_000106d4(*puVar1,DAT_00010820 + 0x106d0);
    FUN_000106e8(*puVar1,FUN_000106e8 + DAT_00010824,*(undefined1 *)(unaff_r4 + 0x118));
    FUN_000106f8(DAT_00010828 + 0x106fc,*puVar1);
  }
  *unaff_r6 = 1;
  return 0;
}



/* ===== FUN_00010690 @ 00010690 size=16 ===== */

undefined4 FUN_00010690(void)

{
  int unaff_r4;
  undefined4 *unaff_r5;
  undefined4 *puVar1;
  undefined4 *unaff_r6;
  int unaff_r7;
  
  FUN_00010690();
  FUN_000106a0(DAT_0001081c + 0x106a4,*unaff_r5);
  if ((10 < *(byte *)(unaff_r4 + 0x118)) &&
     (*(byte *)(unaff_r4 + 0x118) < *(byte *)(unaff_r4 + 0x119))) {
    puVar1 = *(undefined4 **)(unaff_r7 + DAT_00010804);
    FUN_000106d4(*puVar1,DAT_00010820 + 0x106d0);
    FUN_000106e8(*puVar1,FUN_000106e8 + DAT_00010824,*(undefined1 *)(unaff_r4 + 0x118));
    FUN_000106f8(DAT_00010828 + 0x106fc,*puVar1);
  }
  *unaff_r6 = 1;
  return 0;
}



/* ===== FUN_000106a0 @ 000106a0 size=52 ===== */

undefined4 FUN_000106a0(void)

{
  int unaff_r4;
  undefined4 *puVar1;
  undefined4 *unaff_r6;
  int unaff_r7;
  
  FUN_000106a0();
  if ((10 < *(byte *)(unaff_r4 + 0x118)) &&
     (*(byte *)(unaff_r4 + 0x118) < *(byte *)(unaff_r4 + 0x119))) {
    puVar1 = *(undefined4 **)(unaff_r7 + DAT_00010804);
    FUN_000106d4(*puVar1,DAT_00010820 + 0x106d0);
    FUN_000106e8(*puVar1,FUN_000106e8 + DAT_00010824,*(undefined1 *)(unaff_r4 + 0x118));
    FUN_000106f8(DAT_00010828 + 0x106fc,*puVar1);
  }
  *unaff_r6 = 1;
  return 0;
}



/* ===== FUN_000106d4 @ 000106d4 size=20 ===== */

undefined4 FUN_000106d4(void)

{
  int unaff_r4;
  undefined4 *unaff_r5;
  undefined4 *unaff_r6;
  
  FUN_000106d4();
  FUN_000106e8(*unaff_r5,FUN_000106e8 + DAT_00010824,*(undefined1 *)(unaff_r4 + 0x118));
  FUN_000106f8(DAT_00010828 + 0x106fc,*unaff_r5);
  *unaff_r6 = 1;
  return 0;
}



/* ===== FUN_000106e8 @ 000106e8 size=16 ===== */

undefined4 FUN_000106e8(void)

{
  undefined4 *unaff_r5;
  undefined4 *unaff_r6;
  
  FUN_000106e8();
  FUN_000106f8(DAT_00010828 + 0x106fc,*unaff_r5);
  *unaff_r6 = 1;
  return 0;
}



/* ===== FUN_000106f8 @ 000106f8 size=28 ===== */

undefined4 FUN_000106f8(void)

{
  undefined4 *unaff_r6;
  
  FUN_000106f8();
  *unaff_r6 = 1;
  return 0;
}



/* ===== FUN_00010720 @ 00010720 size=40 ===== */

undefined4 FUN_00010720(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_r4;
  undefined4 *puVar4;
  int unaff_r5;
  int *piVar5;
  undefined4 *unaff_r6;
  int unaff_r7;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000150;
  
  FUN_00010720();
  uVar2 = unaff_r6[1];
  *unaff_r4 = *unaff_r6;
  uVar1 = unaff_r6[2];
  unaff_r4[1] = uVar2;
  unaff_r4[2] = uVar1;
  FUN_00010748(unaff_r4 + 0x4c,unaff_r5 + 4,0x84);
  puVar6 = (undefined4 *)(unaff_r5 + 0x90);
  uVar1 = *(undefined4 *)(unaff_r5 + 0x8c);
  unaff_r4[10] = *(undefined4 *)(unaff_r5 + 0x88);
  unaff_r4[0xb] = uVar1;
  puVar4 = unaff_r4 + 0xd;
  do {
    puVar3 = puVar4 + 2;
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
    puVar4 = puVar3;
  } while (puVar6 != (undefined4 *)(unaff_r5 + 0xb0));
  puVar7 = (undefined4 *)(unaff_r5 + 0xb4);
  *puVar3 = *puVar6;
  puVar4 = unaff_r4 + 0x2e;
  do {
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    puVar7 = puVar7 + 2;
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
    puVar4 = puVar4 + 2;
  } while (puVar7 != (undefined4 *)(unaff_r5 + 0xec));
  puVar6 = (undefined4 *)(unaff_r5 + 0xf0);
  *(undefined4 *)((int)unaff_r4 + 0xf2) = in_stack_00000114;
  puVar4 = unaff_r4 + 0x3e;
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
    puVar4 = puVar4 + 2;
  } while (puVar6 != (undefined4 *)(unaff_r5 + 0x128));
  unaff_r4[0xc] = in_stack_00000150;
  piVar5 = *(int **)(unaff_r7 + DAT_00010800);
  if (*piVar5 == 0) {
    if (*(byte *)(unaff_r4 + 0x46) < 0xb) {
      puVar4 = *(undefined4 **)(unaff_r7 + DAT_00010804);
      FUN_00010634(*puVar4,FUN_00010634 + DAT_00010808);
      FUN_00010644(DAT_0001080c + 0x10648,*puVar4);
      FUN_00010654(DAT_00010810 + 0x10658,*puVar4);
    }
    if (0x16 < *(byte *)(unaff_r4 + 0x46)) {
      puVar4 = *(undefined4 **)(unaff_r7 + DAT_00010804);
      FUN_0001067c(*puVar4,DAT_00010814 + 0x10678);
      FUN_00010690(*puVar4,DAT_00010818 + 0x10694,0x16);
      FUN_000106a0(DAT_0001081c + 0x106a4,*puVar4);
    }
    if ((10 < *(byte *)(unaff_r4 + 0x46)) &&
       (*(byte *)(unaff_r4 + 0x46) < *(byte *)((int)unaff_r4 + 0x119))) {
      puVar4 = *(undefined4 **)(unaff_r7 + DAT_00010804);
      FUN_000106d4(*puVar4,DAT_00010820 + 0x106d0);
      FUN_000106e8(*puVar4,FUN_000106e8 + DAT_00010824,*(undefined1 *)(unaff_r4 + 0x46));
      FUN_000106f8(DAT_00010828 + 0x106fc,*puVar4);
    }
  }
  *piVar5 = 1;
  return 0;
}



/* ===== FUN_00010748 @ 00010748 size=180 ===== */

undefined4 FUN_00010748(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_r4;
  undefined4 *puVar4;
  int unaff_r5;
  int *piVar5;
  int unaff_r7;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 in_stack_00000114;
  undefined4 in_stack_00000150;
  
  FUN_00010748();
  puVar6 = (undefined4 *)(unaff_r5 + 0x90);
  uVar1 = *(undefined4 *)(unaff_r5 + 0x8c);
  *(undefined4 *)(unaff_r4 + 0x28) = *(undefined4 *)(unaff_r5 + 0x88);
  *(undefined4 *)(unaff_r4 + 0x2c) = uVar1;
  puVar4 = (undefined4 *)(unaff_r4 + 0x34);
  do {
    puVar3 = puVar4 + 2;
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
    puVar4 = puVar3;
  } while (puVar6 != (undefined4 *)(unaff_r5 + 0xb0));
  puVar7 = (undefined4 *)(unaff_r5 + 0xb4);
  *puVar3 = *puVar6;
  puVar4 = (undefined4 *)(unaff_r4 + 0xb8);
  do {
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    puVar7 = puVar7 + 2;
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
    puVar4 = puVar4 + 2;
  } while (puVar7 != (undefined4 *)(unaff_r5 + 0xec));
  puVar6 = (undefined4 *)(unaff_r5 + 0xf0);
  *(undefined4 *)(unaff_r4 + 0xf2) = in_stack_00000114;
  puVar4 = (undefined4 *)(unaff_r4 + 0xf8);
  do {
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    puVar6 = puVar6 + 2;
    *puVar4 = uVar1;
    puVar4[1] = uVar2;
    puVar4 = puVar4 + 2;
  } while (puVar6 != (undefined4 *)(unaff_r5 + 0x128));
  *(undefined4 *)(unaff_r4 + 0x30) = in_stack_00000150;
  piVar5 = *(int **)(unaff_r7 + DAT_00010800);
  if (*piVar5 == 0) {
    if (*(byte *)(unaff_r4 + 0x118) < 0xb) {
      puVar4 = *(undefined4 **)(unaff_r7 + DAT_00010804);
      FUN_00010634(*puVar4,FUN_00010634 + DAT_00010808);
      FUN_00010644(DAT_0001080c + 0x10648,*puVar4);
      FUN_00010654(DAT_00010810 + 0x10658,*puVar4);
    }
    if (0x16 < *(byte *)(unaff_r4 + 0x118)) {
      puVar4 = *(undefined4 **)(unaff_r7 + DAT_00010804);
      FUN_0001067c(*puVar4,DAT_00010814 + 0x10678);
      FUN_00010690(*puVar4,DAT_00010818 + 0x10694,0x16);
      FUN_000106a0(DAT_0001081c + 0x106a4,*puVar4);
    }
    if ((10 < *(byte *)(unaff_r4 + 0x118)) &&
       (*(byte *)(unaff_r4 + 0x118) < *(byte *)(unaff_r4 + 0x119))) {
      puVar4 = *(undefined4 **)(unaff_r7 + DAT_00010804);
      FUN_000106d4(*puVar4,DAT_00010820 + 0x106d0);
      FUN_000106e8(*puVar4,FUN_000106e8 + DAT_00010824,*(undefined1 *)(unaff_r4 + 0x118));
      FUN_000106f8(DAT_00010828 + 0x106fc,*puVar4);
    }
  }
  *piVar5 = 1;
  return 0;
}



/* ===== FUN_0001082c @ 0001082c size=56 ===== */

uint FUN_0001082c(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_48 [16];
  int iStack_38;
  ushort uStack_34;
  undefined2 uStack_32;
  
  iVar6 = DAT_00010920 + 0x10858;
  uVar5 = 0x10;
  iVar2 = 0;
  do {
    iVar1 = FUN_00010864(iVar2,uVar5 * 0x18);
    if (iVar1 == 0) {
      FUN_00010890(**(undefined4 **)(iVar6 + DAT_00010924),DAT_00010928 + 0x10884,
                   DAT_0001092c + 0x1089c);
      if (iVar2 == 0) goto LAB_00010910;
      break;
    }
    uStack_34 = (ushort)uVar5;
    uStack_32 = 0;
    iStack_38 = iVar1;
    iVar2 = FUN_00010000(param_1,param_2,0x8b0d,auStack_48);
    if (-1 < iVar2) {
      *param_3 = iVar1;
      return (uint)uStack_34;
    }
    piVar3 = (int *)FUN_000108dc();
    iVar2 = iVar1;
    if (*piVar3 != 7) break;
    uVar4 = (uint)uStack_34;
    if ((int)uVar4 <= (int)uVar5) {
      uVar4 = uVar5 << 1;
    }
    uVar5 = uVar4;
  } while ((int)uVar4 < 1000);
  FUN_0001090c(iVar2);
LAB_00010910:
  *param_3 = 0;
  return 0xffffffff;
}



/* ===== FUN_00010864 @ 00010864 size=44 ===== */

uint FUN_00010864(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint unaff_r4;
  int *unaff_r6;
  int unaff_r7;
  int unaff_r8;
  undefined4 in_stack_00000004;
  
  while (param_1 = FUN_00010864(param_1,param_2), param_1 != 0) {
    iVar1 = FUN_00010000(in_stack_00000004);
    if (-1 < iVar1) {
      *unaff_r6 = param_1;
      return unaff_r4 & 0xffff;
    }
    piVar2 = (int *)FUN_000108dc();
    unaff_r8 = param_1;
    if (*piVar2 != 7) goto LAB_00010908;
    uVar3 = unaff_r4 & 0xffff;
    if ((int)uVar3 <= (int)unaff_r4) {
      uVar3 = unaff_r4 << 1;
    }
    if (999 < (int)uVar3) goto LAB_00010908;
    param_2 = uVar3 * 0x18;
    unaff_r4 = uVar3;
  }
  FUN_00010890(**(undefined4 **)(unaff_r7 + DAT_00010924),DAT_00010928 + 0x10884,
               DAT_0001092c + 0x1089c);
  if (unaff_r8 != 0) {
LAB_00010908:
    FUN_0001090c(unaff_r8);
  }
  *unaff_r6 = 0;
  return 0xffffffff;
}



/* ===== FUN_00010890 @ 00010890 size=28 ===== */

undefined4 FUN_00010890(void)

{
  undefined4 *unaff_r6;
  int unaff_r8;
  
  FUN_00010890();
  if (unaff_r8 != 0) {
    FUN_0001090c();
  }
  *unaff_r6 = 0;
  return 0xffffffff;
}



/* ===== FUN_000108dc @ 000108dc size=48 ===== */

uint FUN_000108dc(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint unaff_r4;
  int unaff_r5;
  int *unaff_r6;
  int unaff_r7;
  undefined4 in_stack_00000004;
  ushort in_stack_0000001c;
  
  while (piVar3 = (int *)FUN_000108dc(), *piVar3 == 7) {
    uVar4 = (uint)in_stack_0000001c;
    if ((int)uVar4 <= (int)unaff_r4) {
      uVar4 = unaff_r4 << 1;
    }
    if (999 < (int)uVar4) break;
    iVar1 = FUN_00010864(unaff_r5,uVar4 * 0x18);
    if (iVar1 == 0) {
      FUN_00010890(**(undefined4 **)(unaff_r7 + DAT_00010924),DAT_00010928 + 0x10884,
                   DAT_0001092c + 0x1089c);
      if (unaff_r5 == 0) goto LAB_00010910;
      break;
    }
    in_stack_0000001c = (ushort)uVar4;
    iVar2 = FUN_00010000(in_stack_00000004);
    unaff_r4 = uVar4;
    unaff_r5 = iVar1;
    if (-1 < iVar2) {
      *unaff_r6 = iVar1;
      return uVar4 & 0xffff;
    }
  }
  FUN_0001090c(unaff_r5);
LAB_00010910:
  *unaff_r6 = 0;
  return 0xffffffff;
}



/* ===== FUN_0001090c @ 0001090c size=20 ===== */

undefined4 FUN_0001090c(void)

{
  undefined4 *unaff_r6;
  
  FUN_0001090c();
  *unaff_r6 = 0;
  return 0xffffffff;
}



/* ===== FUN_00010940 @ 00010940 size=36 ===== */

bool FUN_00010940(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int unaff_r6;
  int unaff_r7;
  int iVar6;
  bool bVar7;
  
  iVar2 = FUN_00010940();
  if (iVar2 == 0) {
    bVar7 = true;
  }
  else {
    iVar2 = FUN_00010964();
    if (iVar2 == 0) {
      iVar2 = FUN_00010980();
      bVar7 = false;
      if (iVar2 == 0) {
        iVar6 = DAT_00010a1c + 0x109a4;
        bVar4 = 0;
        bVar5 = 0;
        iVar2 = 0;
        do {
          uVar1 = *(undefined1 *)(iVar6 + iVar2);
          iVar2 = iVar2 + 1;
          iVar3 = FUN_000109b4(unaff_r7 + 0xb,uVar1);
          if (iVar3 != 0) {
            bVar5 = 1;
          }
          iVar3 = FUN_000109c8(unaff_r6 + 0xb,uVar1);
          if (iVar3 != 0) {
            bVar4 = 1;
          }
        } while (iVar2 != 3);
        bVar7 = (bool)(bVar5 & bVar4);
        if (bVar7 == false) {
          iVar2 = FUN_000109ec(unaff_r7 + 0xb,0x61);
          iVar6 = FUN_000109fc(unaff_r6 + 0xb,0x61);
          bVar7 = iVar2 != 0;
          if (iVar6 == 0) {
            bVar7 = false;
          }
        }
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



/* ===== FUN_00010964 @ 00010964 size=28 ===== */

bool FUN_00010964(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int unaff_r6;
  int unaff_r7;
  int iVar6;
  bool bVar7;
  
  iVar2 = FUN_00010964();
  if (iVar2 == 0) {
    iVar2 = FUN_00010980();
    bVar7 = false;
    if (iVar2 == 0) {
      iVar6 = DAT_00010a1c + 0x109a4;
      bVar4 = 0;
      bVar5 = 0;
      iVar2 = 0;
      do {
        uVar1 = *(undefined1 *)(iVar6 + iVar2);
        iVar2 = iVar2 + 1;
        iVar3 = FUN_000109b4(unaff_r7 + 0xb,uVar1);
        if (iVar3 != 0) {
          bVar5 = 1;
        }
        iVar3 = FUN_000109c8(unaff_r6 + 0xb,uVar1);
        if (iVar3 != 0) {
          bVar4 = 1;
        }
      } while (iVar2 != 3);
      bVar7 = (bool)(bVar5 & bVar4);
      if (bVar7 == false) {
        iVar2 = FUN_000109ec(unaff_r7 + 0xb,0x61);
        iVar6 = FUN_000109fc(unaff_r6 + 0xb,0x61);
        bVar7 = iVar2 != 0;
        if (iVar6 == 0) {
          bVar7 = false;
        }
      }
    }
  }
  else {
    bVar7 = false;
  }
  return bVar7;
}



/* ===== FUN_00010980 @ 00010980 size=52 ===== */

uint FUN_00010980(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint unaff_r4;
  uint uVar4;
  uint uVar5;
  int unaff_r6;
  int unaff_r7;
  int iVar6;
  
  iVar2 = FUN_00010980();
  if (iVar2 == 0) {
    iVar6 = DAT_00010a1c + 0x109a4;
    uVar4 = 0;
    uVar5 = 0;
    iVar2 = 0;
    do {
      uVar1 = *(undefined1 *)(iVar6 + iVar2);
      iVar2 = iVar2 + 1;
      iVar3 = FUN_000109b4(unaff_r7 + 0xb,uVar1);
      if (iVar3 != 0) {
        uVar5 = 1;
      }
      iVar3 = FUN_000109c8(unaff_r6 + 0xb,uVar1);
      if (iVar3 != 0) {
        uVar4 = 1;
      }
    } while (iVar2 != 3);
    unaff_r4 = uVar5 & uVar4;
    if (unaff_r4 == 0) {
      iVar2 = FUN_000109ec(unaff_r7 + 0xb,0x61);
      iVar6 = FUN_000109fc(unaff_r6 + 0xb,0x61);
      unaff_r4 = (uint)(iVar2 != 0);
      if (iVar6 == 0) {
        unaff_r4 = 0;
      }
    }
  }
  return unaff_r4;
}



/* ===== FUN_000109b4 @ 000109b4 size=20 ===== */

uint FUN_000109b4(void)

{
  int iVar1;
  int iVar2;
  uint unaff_r4;
  uint uVar3;
  uint unaff_r5;
  int unaff_r8;
  
  while( true ) {
    iVar1 = FUN_000109b4();
    if (iVar1 != 0) {
      unaff_r5 = 1;
    }
    iVar1 = FUN_000109c8();
    if (iVar1 != 0) {
      unaff_r4 = 1;
    }
    if (unaff_r8 == 3) break;
    unaff_r8 = unaff_r8 + 1;
  }
  uVar3 = unaff_r5 & unaff_r4;
  if (uVar3 == 0) {
    iVar1 = FUN_000109ec();
    iVar2 = FUN_000109fc();
    uVar3 = (uint)(iVar1 != 0);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== FUN_000109c8 @ 000109c8 size=36 ===== */

uint FUN_000109c8(void)

{
  int iVar1;
  int iVar2;
  uint unaff_r4;
  uint uVar3;
  uint unaff_r5;
  int unaff_r8;
  
  while( true ) {
    iVar1 = FUN_000109c8();
    if (iVar1 != 0) {
      unaff_r4 = 1;
    }
    if (unaff_r8 == 3) break;
    unaff_r8 = unaff_r8 + 1;
    iVar1 = FUN_000109b4();
    if (iVar1 != 0) {
      unaff_r5 = 1;
    }
  }
  uVar3 = unaff_r5 & unaff_r4;
  if (uVar3 == 0) {
    iVar1 = FUN_000109ec();
    iVar2 = FUN_000109fc();
    uVar3 = (uint)(iVar1 != 0);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== FUN_000109ec @ 000109ec size=16 ===== */

bool FUN_000109ec(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_000109ec();
  iVar2 = FUN_000109fc();
  return iVar2 != 0 && iVar1 != 0;
}



/* ===== FUN_000109fc @ 000109fc size=28 ===== */

bool FUN_000109fc(void)

{
  int iVar1;
  int unaff_r4;
  
  iVar1 = FUN_000109fc();
  return iVar1 != 0 && unaff_r4 != 0;
}



/* ===== FUN_00010aa0 @ 00010aa0 size=104 ===== */

undefined4 FUN_00010aa0(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 auStack_48 [16];
  int iStack_38;
  uint uStack_34;
  
  iVar2 = FUN_00010000(param_1,param_2,0x8b01,auStack_48);
  iVar7 = DAT_00010db4 + 0x10ad0;
  if (iVar2 < 0) {
    return 0xfffffffe;
  }
  if (*(int *)(param_3 + 0xac) != 0) {
    FUN_00010d58(auStack_48,param_2,0x10);
    iStack_38 = *(int *)(param_3 + 0xb0);
    iVar2 = FUN_00010000(param_1,param_2,0x8b06,auStack_48);
    if (iVar2 < 0) {
      uVar5 = **(undefined4 **)(iVar7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010d8c();
      uVar4 = FUN_00010d94(*puVar3);
      FUN_00010da8(uVar5,DAT_00010dd0 + 0x10da4,uVar4);
      uVar4 = 0xffffffff;
      goto LAB_00010ae8;
    }
  }
  uVar4 = 0;
LAB_00010ae8:
  if (*(int *)(param_3 + 0x20) != 0) {
    FUN_00010afc((int)*(undefined8 *)(param_3 + 0x28),&iStack_38);
    iVar2 = FUN_00010000(param_1,param_2,0x8b04,auStack_48);
    if (iVar2 < 0) {
      uVar5 = **(undefined4 **)(iVar7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010b28();
      uVar4 = FUN_00010b30(*puVar3);
      FUN_00010b44(uVar5,DAT_00010dbc + 0x10b40,uVar4);
      uVar4 = 0xffffffff;
    }
  }
  if (*(int *)(param_3 + 0x34) != 0) {
    uVar8 = *(uint *)(param_3 + 0x7c);
    if ((uVar8 & 0xff) != 0) {
      iStack_38 = 0;
      uStack_34 = (uint)(ushort)((ushort)(uVar8 & 0xff) | 0x800) << 0x10;
      iVar2 = FUN_00010000(param_1,param_2,0x8b2a,auStack_48);
      if (iVar2 < 0) {
        uVar9 = **(undefined4 **)(iVar7 + DAT_00010db8);
        puVar3 = (undefined4 *)FUN_00010ba0();
        uVar6 = *puVar3;
        uVar5 = FUN_00010bac(uVar6);
        uVar4 = 0xffffffff;
        FUN_00010bc8(uVar9,DAT_00010dc0 + 0x10bc4,uVar6,uVar5);
      }
    }
    iStack_38 = param_3 + 0x38;
    uStack_34 = CONCAT22((short)uVar8,(short)*(undefined4 *)(param_3 + 0x78)) & 0xff00ffff;
    if ((uVar8 & 0x800) != 0) {
      iStack_38 = 0;
    }
    iVar2 = FUN_00010000(param_1,param_2,0x8b2a,auStack_48);
    if (iVar2 < 0) {
      uVar9 = **(undefined4 **)(iVar7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010c18();
      uVar6 = *puVar3;
      uVar5 = FUN_00010c24(uVar6);
      uVar4 = 0xffffffff;
      FUN_00010c40(uVar9,DAT_00010dc4 + 0x10c3c,uVar6,uVar5);
    }
  }
  if (*(int *)(param_3 + 0x14) != 0) {
    iStack_38 = *(int *)(param_3 + 0x18);
    uStack_34 = CONCAT31((int3)((uint)*(undefined4 *)(param_3 + 0x1c) >> 8),1);
    iVar2 = FUN_00010000(param_1,param_2,0x8b02,auStack_48);
    if (iVar2 < 0) {
      uVar5 = **(undefined4 **)(iVar7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010c94();
      uVar4 = FUN_00010c9c(*puVar3);
      FUN_00010cb0(uVar5,DAT_00010dc8 + 0x10cac,uVar4);
      uVar4 = 0xffffffff;
    }
  }
  if (*(int *)(param_3 + 0x80) != 0) {
    iVar2 = FUN_00010cc4();
    iStack_38 = param_3 + 0x88;
    sVar1 = FUN_00010cd4();
    if (iVar2 < 0x15) {
      sVar1 = sVar1 + 1;
    }
    uStack_34 = CONCAT22((short)*(undefined4 *)(param_3 + 0x84),sVar1);
    iVar2 = FUN_00010000(param_1,param_2,0x8b1a,auStack_48);
    if (iVar2 < 0) {
      uVar4 = 0xffffffff;
      uVar6 = **(undefined4 **)(iVar7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010d20();
      uVar5 = FUN_00010d28(*puVar3);
      FUN_00010d3c(uVar6,DAT_00010dcc + 0x10d38,uVar5);
    }
  }
  return uVar4;
}



/* ===== FUN_00010afc @ 00010afc size=44 ===== */

undefined4 FUN_00010afc(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar4;
  int unaff_r7;
  undefined4 uVar5;
  
  FUN_00010afc();
  iVar1 = FUN_00010000();
  if (iVar1 < 0) {
    uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar2 = (undefined4 *)FUN_00010b28();
    uVar3 = FUN_00010b30(*puVar2);
    FUN_00010b44(uVar4,DAT_00010dbc + 0x10b40,uVar3);
    unaff_r5 = 0xffffffff;
  }
  if (*(int *)(unaff_r4 + 0x34) != 0) {
    if (((*(uint *)(unaff_r4 + 0x7c) & 0xff) != 0) && (iVar1 = FUN_00010000(), iVar1 < 0)) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar2 = (undefined4 *)FUN_00010ba0();
      uVar4 = *puVar2;
      uVar3 = FUN_00010bac(uVar4);
      unaff_r5 = 0xffffffff;
      FUN_00010bc8(uVar5,DAT_00010dc0 + 0x10bc4,uVar4,uVar3);
    }
    iVar1 = FUN_00010000();
    if (iVar1 < 0) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar2 = (undefined4 *)FUN_00010c18();
      uVar4 = *puVar2;
      uVar3 = FUN_00010c24(uVar4);
      unaff_r5 = 0xffffffff;
      FUN_00010c40(uVar5,DAT_00010dc4 + 0x10c3c,uVar4,uVar3);
    }
  }
  if ((*(int *)(unaff_r4 + 0x14) != 0) && (iVar1 = FUN_00010000(), iVar1 < 0)) {
    uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar2 = (undefined4 *)FUN_00010c94();
    uVar3 = FUN_00010c9c(*puVar2);
    FUN_00010cb0(uVar4,DAT_00010dc8 + 0x10cac,uVar3);
    unaff_r5 = 0xffffffff;
  }
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    FUN_00010cc4();
    FUN_00010cd4();
    iVar1 = FUN_00010000();
    if (iVar1 < 0) {
      unaff_r5 = 0xffffffff;
      uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar2 = (undefined4 *)FUN_00010d20();
      uVar3 = FUN_00010d28(*puVar2);
      FUN_00010d3c(uVar4,DAT_00010dcc + 0x10d38,uVar3);
    }
  }
  return unaff_r5;
}



/* ===== FUN_00010b28 @ 00010b28 size=8 ===== */

undefined4 FUN_00010b28(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 uVar4;
  int unaff_r7;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)FUN_00010b28();
  FUN_00010b30(*puVar1);
  FUN_00010b44();
  if (*(int *)(unaff_r4 + 0x34) != 0) {
    if (((*(uint *)(unaff_r4 + 0x7c) & 0xff) != 0) && (iVar2 = FUN_00010000(), iVar2 < 0)) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar1 = (undefined4 *)FUN_00010ba0();
      uVar4 = *puVar1;
      uVar3 = FUN_00010bac(uVar4);
      FUN_00010bc8(uVar5,DAT_00010dc0 + 0x10bc4,uVar4,uVar3);
    }
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar1 = (undefined4 *)FUN_00010c18();
      uVar4 = *puVar1;
      uVar3 = FUN_00010c24(uVar4);
      FUN_00010c40(uVar5,DAT_00010dc4 + 0x10c3c,uVar4,uVar3);
    }
  }
  if ((*(int *)(unaff_r4 + 0x14) != 0) && (iVar2 = FUN_00010000(), iVar2 < 0)) {
    uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar1 = (undefined4 *)FUN_00010c94();
    uVar3 = FUN_00010c9c(*puVar1);
    FUN_00010cb0(uVar4,DAT_00010dc8 + 0x10cac,uVar3);
  }
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    FUN_00010cc4();
    FUN_00010cd4();
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar1 = (undefined4 *)FUN_00010d20();
      uVar3 = FUN_00010d28(*puVar1);
      FUN_00010d3c(uVar4,DAT_00010dcc + 0x10d38,uVar3);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00010b30 @ 00010b30 size=20 ===== */

undefined4 FUN_00010b30(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 uVar4;
  int unaff_r7;
  undefined4 uVar5;
  
  FUN_00010b30();
  FUN_00010b44();
  if (*(int *)(unaff_r4 + 0x34) != 0) {
    if (((*(uint *)(unaff_r4 + 0x7c) & 0xff) != 0) && (iVar1 = FUN_00010000(), iVar1 < 0)) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar2 = (undefined4 *)FUN_00010ba0();
      uVar4 = *puVar2;
      uVar3 = FUN_00010bac(uVar4);
      FUN_00010bc8(uVar5,DAT_00010dc0 + 0x10bc4,uVar4,uVar3);
    }
    iVar1 = FUN_00010000();
    if (iVar1 < 0) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar2 = (undefined4 *)FUN_00010c18();
      uVar4 = *puVar2;
      uVar3 = FUN_00010c24(uVar4);
      FUN_00010c40(uVar5,DAT_00010dc4 + 0x10c3c,uVar4,uVar3);
    }
  }
  if ((*(int *)(unaff_r4 + 0x14) != 0) && (iVar1 = FUN_00010000(), iVar1 < 0)) {
    uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar2 = (undefined4 *)FUN_00010c94();
    uVar3 = FUN_00010c9c(*puVar2);
    FUN_00010cb0(uVar4,DAT_00010dc8 + 0x10cac,uVar3);
  }
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    FUN_00010cc4();
    FUN_00010cd4();
    iVar1 = FUN_00010000();
    if (iVar1 < 0) {
      uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar2 = (undefined4 *)FUN_00010d20();
      uVar3 = FUN_00010d28(*puVar2);
      FUN_00010d3c(uVar4,DAT_00010dcc + 0x10d38,uVar3);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00010b44 @ 00010b44 size=92 ===== */

undefined4 FUN_00010b44(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 uVar4;
  int unaff_r7;
  undefined4 uVar5;
  
  FUN_00010b44();
  if (*(int *)(unaff_r4 + 0x34) != 0) {
    if (((*(uint *)(unaff_r4 + 0x7c) & 0xff) != 0) && (iVar1 = FUN_00010000(), iVar1 < 0)) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar2 = (undefined4 *)FUN_00010ba0();
      uVar4 = *puVar2;
      uVar3 = FUN_00010bac(uVar4);
      FUN_00010bc8(uVar5,DAT_00010dc0 + 0x10bc4,uVar4,uVar3);
    }
    iVar1 = FUN_00010000();
    if (iVar1 < 0) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar2 = (undefined4 *)FUN_00010c18();
      uVar4 = *puVar2;
      uVar3 = FUN_00010c24(uVar4);
      FUN_00010c40(uVar5,DAT_00010dc4 + 0x10c3c,uVar4,uVar3);
    }
  }
  if ((*(int *)(unaff_r4 + 0x14) != 0) && (iVar1 = FUN_00010000(), iVar1 < 0)) {
    uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar2 = (undefined4 *)FUN_00010c94();
    uVar3 = FUN_00010c9c(*puVar2);
    FUN_00010cb0(uVar4,DAT_00010dc8 + 0x10cac,uVar3);
  }
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    FUN_00010cc4();
    FUN_00010cd4();
    iVar1 = FUN_00010000();
    if (iVar1 < 0) {
      uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar2 = (undefined4 *)FUN_00010d20();
      uVar3 = FUN_00010d28(*puVar2);
      FUN_00010d3c(uVar4,DAT_00010dcc + 0x10d38,uVar3);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00010ba0 @ 00010ba0 size=12 ===== */

undefined4 FUN_00010ba0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 uVar4;
  int unaff_r7;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)FUN_00010ba0();
  FUN_00010bac(*puVar1);
  FUN_00010bc8();
  iVar2 = FUN_00010000();
  if (iVar2 < 0) {
    uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar1 = (undefined4 *)FUN_00010c18();
    uVar4 = *puVar1;
    uVar3 = FUN_00010c24(uVar4);
    FUN_00010c40(uVar5,DAT_00010dc4 + 0x10c3c,uVar4,uVar3);
  }
  if ((*(int *)(unaff_r4 + 0x14) != 0) && (iVar2 = FUN_00010000(), iVar2 < 0)) {
    uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar1 = (undefined4 *)FUN_00010c94();
    uVar3 = FUN_00010c9c(*puVar1);
    FUN_00010cb0(uVar4,DAT_00010dc8 + 0x10cac,uVar3);
  }
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    FUN_00010cc4();
    FUN_00010cd4();
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar1 = (undefined4 *)FUN_00010d20();
      uVar3 = FUN_00010d28(*puVar1);
      FUN_00010d3c(uVar4,DAT_00010dcc + 0x10d38,uVar3);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00010bac @ 00010bac size=28 ===== */

undefined4 FUN_00010bac(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 uVar4;
  int unaff_r7;
  undefined4 uVar5;
  
  FUN_00010bac();
  FUN_00010bc8();
  iVar1 = FUN_00010000();
  if (iVar1 < 0) {
    uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar2 = (undefined4 *)FUN_00010c18();
    uVar4 = *puVar2;
    uVar3 = FUN_00010c24(uVar4);
    FUN_00010c40(uVar5,DAT_00010dc4 + 0x10c3c,uVar4,uVar3);
  }
  if ((*(int *)(unaff_r4 + 0x14) != 0) && (iVar1 = FUN_00010000(), iVar1 < 0)) {
    uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar2 = (undefined4 *)FUN_00010c94();
    uVar3 = FUN_00010c9c(*puVar2);
    FUN_00010cb0(uVar4,DAT_00010dc8 + 0x10cac,uVar3);
  }
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    FUN_00010cc4();
    FUN_00010cd4();
    iVar1 = FUN_00010000();
    if (iVar1 < 0) {
      uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar2 = (undefined4 *)FUN_00010d20();
      uVar3 = FUN_00010d28(*puVar2);
      FUN_00010d3c(uVar4,DAT_00010dcc + 0x10d38,uVar3);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00010bc8 @ 00010bc8 size=80 ===== */

undefined4 FUN_00010bc8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar4;
  int unaff_r7;
  undefined4 uVar5;
  
  FUN_00010bc8();
  iVar1 = FUN_00010000();
  if (iVar1 < 0) {
    uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar2 = (undefined4 *)FUN_00010c18();
    uVar4 = *puVar2;
    uVar3 = FUN_00010c24(uVar4);
    unaff_r5 = 0xffffffff;
    FUN_00010c40(uVar5,DAT_00010dc4 + 0x10c3c,uVar4,uVar3);
  }
  if ((*(int *)(unaff_r4 + 0x14) != 0) && (iVar1 = FUN_00010000(), iVar1 < 0)) {
    uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar2 = (undefined4 *)FUN_00010c94();
    uVar3 = FUN_00010c9c(*puVar2);
    FUN_00010cb0(uVar4,DAT_00010dc8 + 0x10cac,uVar3);
    unaff_r5 = 0xffffffff;
  }
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    FUN_00010cc4();
    FUN_00010cd4();
    iVar1 = FUN_00010000();
    if (iVar1 < 0) {
      unaff_r5 = 0xffffffff;
      uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar2 = (undefined4 *)FUN_00010d20();
      uVar3 = FUN_00010d28(*puVar2);
      FUN_00010d3c(uVar4,DAT_00010dcc + 0x10d38,uVar3);
    }
  }
  return unaff_r5;
}



/* ===== FUN_00010c18 @ 00010c18 size=12 ===== */

undefined4 FUN_00010c18(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 uVar4;
  int unaff_r7;
  
  puVar1 = (undefined4 *)FUN_00010c18();
  FUN_00010c24(*puVar1);
  FUN_00010c40();
  if ((*(int *)(unaff_r4 + 0x14) != 0) && (iVar2 = FUN_00010000(), iVar2 < 0)) {
    uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar1 = (undefined4 *)FUN_00010c94();
    uVar3 = FUN_00010c9c(*puVar1);
    FUN_00010cb0(uVar4,DAT_00010dc8 + 0x10cac,uVar3);
  }
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    FUN_00010cc4();
    FUN_00010cd4();
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar1 = (undefined4 *)FUN_00010d20();
      uVar3 = FUN_00010d28(*puVar1);
      FUN_00010d3c(uVar4,DAT_00010dcc + 0x10d38,uVar3);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00010c24 @ 00010c24 size=28 ===== */

undefined4 FUN_00010c24(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 uVar4;
  int unaff_r7;
  
  FUN_00010c24();
  FUN_00010c40();
  if ((*(int *)(unaff_r4 + 0x14) != 0) && (iVar1 = FUN_00010000(), iVar1 < 0)) {
    uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar2 = (undefined4 *)FUN_00010c94();
    uVar3 = FUN_00010c9c(*puVar2);
    FUN_00010cb0(uVar4,DAT_00010dc8 + 0x10cac,uVar3);
  }
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    FUN_00010cc4();
    FUN_00010cd4();
    iVar1 = FUN_00010000();
    if (iVar1 < 0) {
      uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar2 = (undefined4 *)FUN_00010d20();
      uVar3 = FUN_00010d28(*puVar2);
      FUN_00010d3c(uVar4,DAT_00010dcc + 0x10d38,uVar3);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00010c40 @ 00010c40 size=84 ===== */

undefined4 FUN_00010c40(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar4;
  int unaff_r7;
  
  FUN_00010c40();
  if ((*(int *)(unaff_r4 + 0x14) != 0) && (iVar1 = FUN_00010000(), iVar1 < 0)) {
    uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar2 = (undefined4 *)FUN_00010c94();
    uVar3 = FUN_00010c9c(*puVar2);
    FUN_00010cb0(uVar4,DAT_00010dc8 + 0x10cac,uVar3);
    unaff_r5 = 0xffffffff;
  }
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    FUN_00010cc4();
    FUN_00010cd4();
    iVar1 = FUN_00010000();
    if (iVar1 < 0) {
      unaff_r5 = 0xffffffff;
      uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar2 = (undefined4 *)FUN_00010d20();
      uVar3 = FUN_00010d28(*puVar2);
      FUN_00010d3c(uVar4,DAT_00010dcc + 0x10d38,uVar3);
    }
  }
  return unaff_r5;
}



/* ===== FUN_00010c94 @ 00010c94 size=8 ===== */

undefined4 FUN_00010c94(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 uVar4;
  int unaff_r7;
  undefined2 uStack00000016;
  
  puVar1 = (undefined4 *)FUN_00010c94();
  FUN_00010c9c(*puVar1);
  FUN_00010cb0();
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    FUN_00010cc4();
    FUN_00010cd4();
    uStack00000016 = (undefined2)*(undefined4 *)(unaff_r4 + 0x84);
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar1 = (undefined4 *)FUN_00010d20();
      uVar3 = FUN_00010d28(*puVar1);
      FUN_00010d3c(uVar4,DAT_00010dcc + 0x10d38,uVar3);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00010c9c @ 00010c9c size=20 ===== */

undefined4 FUN_00010c9c(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 uVar4;
  int unaff_r7;
  undefined2 uStack00000016;
  
  FUN_00010c9c();
  FUN_00010cb0();
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    FUN_00010cc4();
    FUN_00010cd4();
    uStack00000016 = (undefined2)*(undefined4 *)(unaff_r4 + 0x84);
    iVar1 = FUN_00010000();
    if (iVar1 < 0) {
      uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar2 = (undefined4 *)FUN_00010d20();
      uVar3 = FUN_00010d28(*puVar2);
      FUN_00010d3c(uVar4,DAT_00010dcc + 0x10d38,uVar3);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00010cb0 @ 00010cb0 size=20 ===== */

undefined4 FUN_00010cb0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 uVar4;
  int unaff_r7;
  undefined2 uStack00000016;
  
  FUN_00010cb0();
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    FUN_00010cc4();
    FUN_00010cd4();
    uStack00000016 = (undefined2)*(undefined4 *)(unaff_r4 + 0x84);
    iVar1 = FUN_00010000();
    if (iVar1 < 0) {
      uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar2 = (undefined4 *)FUN_00010d20();
      uVar3 = FUN_00010d28(*puVar2);
      FUN_00010d3c(uVar4,DAT_00010dcc + 0x10d38,uVar3);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00010cc4 @ 00010cc4 size=16 ===== */

undefined4 FUN_00010cc4(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 uVar4;
  undefined4 unaff_r5;
  int unaff_r7;
  undefined2 uStack00000016;
  
  FUN_00010cc4();
  FUN_00010cd4();
  uStack00000016 = (undefined2)*(undefined4 *)(unaff_r4 + 0x84);
  iVar1 = FUN_00010000();
  if (iVar1 < 0) {
    unaff_r5 = 0xffffffff;
    uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar2 = (undefined4 *)FUN_00010d20();
    uVar3 = FUN_00010d28(*puVar2);
    FUN_00010d3c(uVar4,DAT_00010dcc + 0x10d38,uVar3);
  }
  return unaff_r5;
}



/* ===== FUN_00010cd4 @ 00010cd4 size=76 ===== */

undefined4 FUN_00010cd4(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_r4;
  undefined4 uVar4;
  undefined4 unaff_r5;
  int unaff_r7;
  undefined2 uStack00000016;
  
  FUN_00010cd4();
  uStack00000016 = (undefined2)*(undefined4 *)(unaff_r4 + 0x84);
  iVar1 = FUN_00010000();
  if (iVar1 < 0) {
    unaff_r5 = 0xffffffff;
    uVar4 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar2 = (undefined4 *)FUN_00010d20();
    uVar3 = FUN_00010d28(*puVar2);
    FUN_00010d3c(uVar4,DAT_00010dcc + 0x10d38,uVar3);
  }
  return unaff_r5;
}



/* ===== FUN_00010d20 @ 00010d20 size=8 ===== */

void FUN_00010d20(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00010d20();
  FUN_00010d28(*puVar1);
  FUN_00010d3c();
  return;
}



/* ===== FUN_00010d28 @ 00010d28 size=20 ===== */

void FUN_00010d28(void)

{
  FUN_00010d28();
  FUN_00010d3c();
  return;
}



/* ===== FUN_00010d3c @ 00010d3c size=16 ===== */

void FUN_00010d3c(void)

{
  FUN_00010d3c();
  return;
}



/* ===== FUN_00010d58 @ 00010d58 size=52 ===== */

undefined4 FUN_00010d58(void)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_r4;
  undefined4 uVar5;
  undefined4 uVar6;
  int unaff_r7;
  uint uVar7;
  undefined4 uVar8;
  int in_stack_00000010;
  uint in_stack_00000014;
  
  FUN_00010d58();
  in_stack_00000010 = *(int *)(unaff_r4 + 0xb0);
  iVar2 = FUN_00010000();
  if (iVar2 < 0) {
    uVar6 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
    puVar3 = (undefined4 *)FUN_00010d8c();
    uVar4 = FUN_00010d94(*puVar3);
    FUN_00010da8(uVar6,DAT_00010dd0 + 0x10da4,uVar4);
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = 0;
  }
  if (*(int *)(unaff_r4 + 0x20) != 0) {
    FUN_00010afc((int)*(undefined8 *)(unaff_r4 + 0x28),&stack0x00000010);
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar6 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010b28();
      uVar4 = FUN_00010b30(*puVar3);
      FUN_00010b44(uVar6,DAT_00010dbc + 0x10b40,uVar4);
      uVar4 = 0xffffffff;
    }
  }
  if (*(int *)(unaff_r4 + 0x34) != 0) {
    uVar7 = *(uint *)(unaff_r4 + 0x7c);
    if ((uVar7 & 0xff) != 0) {
      in_stack_00000010 = 0;
      in_stack_00000014 = (uint)(ushort)((ushort)(uVar7 & 0xff) | 0x800) << 0x10;
      iVar2 = FUN_00010000();
      if (iVar2 < 0) {
        uVar8 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
        puVar3 = (undefined4 *)FUN_00010ba0();
        uVar5 = *puVar3;
        uVar6 = FUN_00010bac(uVar5);
        uVar4 = 0xffffffff;
        FUN_00010bc8(uVar8,DAT_00010dc0 + 0x10bc4,uVar5,uVar6);
      }
    }
    in_stack_00000010 = unaff_r4 + 0x38;
    in_stack_00000014 = CONCAT22((short)uVar7,(short)*(undefined4 *)(unaff_r4 + 0x78)) & 0xff00ffff;
    if ((uVar7 & 0x800) != 0) {
      in_stack_00000010 = 0;
    }
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar8 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010c18();
      uVar5 = *puVar3;
      uVar6 = FUN_00010c24(uVar5);
      uVar4 = 0xffffffff;
      FUN_00010c40(uVar8,DAT_00010dc4 + 0x10c3c,uVar5,uVar6);
    }
  }
  if (*(int *)(unaff_r4 + 0x14) != 0) {
    in_stack_00000010 = *(int *)(unaff_r4 + 0x18);
    in_stack_00000014 = CONCAT31((int3)((uint)*(undefined4 *)(unaff_r4 + 0x1c) >> 8),1);
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar6 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010c94();
      uVar4 = FUN_00010c9c(*puVar3);
      FUN_00010cb0(uVar6,DAT_00010dc8 + 0x10cac,uVar4);
      uVar4 = 0xffffffff;
    }
  }
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    iVar2 = FUN_00010cc4();
    in_stack_00000010 = unaff_r4 + 0x88;
    sVar1 = FUN_00010cd4();
    if (iVar2 < 0x15) {
      sVar1 = sVar1 + 1;
    }
    in_stack_00000014 = CONCAT22((short)*(undefined4 *)(unaff_r4 + 0x84),sVar1);
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar4 = 0xffffffff;
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010d20();
      uVar6 = FUN_00010d28(*puVar3);
      FUN_00010d3c(uVar5,DAT_00010dcc + 0x10d38,uVar6);
    }
  }
  return uVar4;
}



/* ===== FUN_00010d8c @ 00010d8c size=8 ===== */

undefined4 FUN_00010d8c(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int unaff_r4;
  undefined4 uVar5;
  int unaff_r7;
  uint uVar6;
  undefined4 uVar7;
  int in_stack_00000010;
  uint in_stack_00000014;
  
  puVar4 = (undefined4 *)FUN_00010d8c();
  FUN_00010d94(*puVar4);
  FUN_00010da8();
  if (*(int *)(unaff_r4 + 0x20) != 0) {
    FUN_00010afc((int)*(undefined8 *)(unaff_r4 + 0x28),&stack0x00000010);
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar4 = (undefined4 *)FUN_00010b28();
      uVar3 = FUN_00010b30(*puVar4);
      FUN_00010b44(uVar5,DAT_00010dbc + 0x10b40,uVar3);
    }
  }
  if (*(int *)(unaff_r4 + 0x34) != 0) {
    uVar6 = *(uint *)(unaff_r4 + 0x7c);
    if ((uVar6 & 0xff) != 0) {
      in_stack_00000010 = 0;
      in_stack_00000014 = (uint)(ushort)((ushort)(uVar6 & 0xff) | 0x800) << 0x10;
      iVar2 = FUN_00010000();
      if (iVar2 < 0) {
        uVar7 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
        puVar4 = (undefined4 *)FUN_00010ba0();
        uVar5 = *puVar4;
        uVar3 = FUN_00010bac(uVar5);
        FUN_00010bc8(uVar7,DAT_00010dc0 + 0x10bc4,uVar5,uVar3);
      }
    }
    in_stack_00000010 = unaff_r4 + 0x38;
    in_stack_00000014 = CONCAT22((short)uVar6,(short)*(undefined4 *)(unaff_r4 + 0x78)) & 0xff00ffff;
    if ((uVar6 & 0x800) != 0) {
      in_stack_00000010 = 0;
    }
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar7 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar4 = (undefined4 *)FUN_00010c18();
      uVar5 = *puVar4;
      uVar3 = FUN_00010c24(uVar5);
      FUN_00010c40(uVar7,DAT_00010dc4 + 0x10c3c,uVar5,uVar3);
    }
  }
  if (*(int *)(unaff_r4 + 0x14) != 0) {
    in_stack_00000010 = *(int *)(unaff_r4 + 0x18);
    in_stack_00000014 = CONCAT31((int3)((uint)*(undefined4 *)(unaff_r4 + 0x1c) >> 8),1);
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar4 = (undefined4 *)FUN_00010c94();
      uVar3 = FUN_00010c9c(*puVar4);
      FUN_00010cb0(uVar5,DAT_00010dc8 + 0x10cac,uVar3);
    }
  }
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    iVar2 = FUN_00010cc4();
    in_stack_00000010 = unaff_r4 + 0x88;
    sVar1 = FUN_00010cd4();
    if (iVar2 < 0x15) {
      sVar1 = sVar1 + 1;
    }
    in_stack_00000014 = CONCAT22((short)*(undefined4 *)(unaff_r4 + 0x84),sVar1);
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar4 = (undefined4 *)FUN_00010d20();
      uVar3 = FUN_00010d28(*puVar4);
      FUN_00010d3c(uVar5,DAT_00010dcc + 0x10d38,uVar3);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00010d94 @ 00010d94 size=20 ===== */

undefined4 FUN_00010d94(void)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_r4;
  undefined4 uVar5;
  int unaff_r7;
  uint uVar6;
  undefined4 uVar7;
  int in_stack_00000010;
  uint in_stack_00000014;
  
  FUN_00010d94();
  FUN_00010da8();
  if (*(int *)(unaff_r4 + 0x20) != 0) {
    FUN_00010afc((int)*(undefined8 *)(unaff_r4 + 0x28),&stack0x00000010);
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010b28();
      uVar4 = FUN_00010b30(*puVar3);
      FUN_00010b44(uVar5,DAT_00010dbc + 0x10b40,uVar4);
    }
  }
  if (*(int *)(unaff_r4 + 0x34) != 0) {
    uVar6 = *(uint *)(unaff_r4 + 0x7c);
    if ((uVar6 & 0xff) != 0) {
      in_stack_00000010 = 0;
      in_stack_00000014 = (uint)(ushort)((ushort)(uVar6 & 0xff) | 0x800) << 0x10;
      iVar2 = FUN_00010000();
      if (iVar2 < 0) {
        uVar7 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
        puVar3 = (undefined4 *)FUN_00010ba0();
        uVar5 = *puVar3;
        uVar4 = FUN_00010bac(uVar5);
        FUN_00010bc8(uVar7,DAT_00010dc0 + 0x10bc4,uVar5,uVar4);
      }
    }
    in_stack_00000010 = unaff_r4 + 0x38;
    in_stack_00000014 = CONCAT22((short)uVar6,(short)*(undefined4 *)(unaff_r4 + 0x78)) & 0xff00ffff;
    if ((uVar6 & 0x800) != 0) {
      in_stack_00000010 = 0;
    }
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar7 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010c18();
      uVar5 = *puVar3;
      uVar4 = FUN_00010c24(uVar5);
      FUN_00010c40(uVar7,DAT_00010dc4 + 0x10c3c,uVar5,uVar4);
    }
  }
  if (*(int *)(unaff_r4 + 0x14) != 0) {
    in_stack_00000010 = *(int *)(unaff_r4 + 0x18);
    in_stack_00000014 = CONCAT31((int3)((uint)*(undefined4 *)(unaff_r4 + 0x1c) >> 8),1);
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010c94();
      uVar4 = FUN_00010c9c(*puVar3);
      FUN_00010cb0(uVar5,DAT_00010dc8 + 0x10cac,uVar4);
    }
  }
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    iVar2 = FUN_00010cc4();
    in_stack_00000010 = unaff_r4 + 0x88;
    sVar1 = FUN_00010cd4();
    if (iVar2 < 0x15) {
      sVar1 = sVar1 + 1;
    }
    in_stack_00000014 = CONCAT22((short)*(undefined4 *)(unaff_r4 + 0x84),sVar1);
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010d20();
      uVar4 = FUN_00010d28(*puVar3);
      FUN_00010d3c(uVar5,DAT_00010dcc + 0x10d38,uVar4);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00010da8 @ 00010da8 size=12 ===== */

undefined4 FUN_00010da8(void)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_r4;
  undefined4 uVar5;
  int unaff_r7;
  uint uVar6;
  undefined4 uVar7;
  int in_stack_00000010;
  uint in_stack_00000014;
  
  FUN_00010da8();
  if (*(int *)(unaff_r4 + 0x20) != 0) {
    FUN_00010afc((int)*(undefined8 *)(unaff_r4 + 0x28),&stack0x00000010);
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010b28();
      uVar4 = FUN_00010b30(*puVar3);
      FUN_00010b44(uVar5,DAT_00010dbc + 0x10b40,uVar4);
    }
  }
  if (*(int *)(unaff_r4 + 0x34) != 0) {
    uVar6 = *(uint *)(unaff_r4 + 0x7c);
    if ((uVar6 & 0xff) != 0) {
      in_stack_00000010 = 0;
      in_stack_00000014 = (uint)(ushort)((ushort)(uVar6 & 0xff) | 0x800) << 0x10;
      iVar2 = FUN_00010000();
      if (iVar2 < 0) {
        uVar7 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
        puVar3 = (undefined4 *)FUN_00010ba0();
        uVar5 = *puVar3;
        uVar4 = FUN_00010bac(uVar5);
        FUN_00010bc8(uVar7,DAT_00010dc0 + 0x10bc4,uVar5,uVar4);
      }
    }
    in_stack_00000010 = unaff_r4 + 0x38;
    in_stack_00000014 = CONCAT22((short)uVar6,(short)*(undefined4 *)(unaff_r4 + 0x78)) & 0xff00ffff;
    if ((uVar6 & 0x800) != 0) {
      in_stack_00000010 = 0;
    }
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar7 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010c18();
      uVar5 = *puVar3;
      uVar4 = FUN_00010c24(uVar5);
      FUN_00010c40(uVar7,DAT_00010dc4 + 0x10c3c,uVar5,uVar4);
    }
  }
  if (*(int *)(unaff_r4 + 0x14) != 0) {
    in_stack_00000010 = *(int *)(unaff_r4 + 0x18);
    in_stack_00000014 = CONCAT31((int3)((uint)*(undefined4 *)(unaff_r4 + 0x1c) >> 8),1);
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010c94();
      uVar4 = FUN_00010c9c(*puVar3);
      FUN_00010cb0(uVar5,DAT_00010dc8 + 0x10cac,uVar4);
    }
  }
  if (*(int *)(unaff_r4 + 0x80) != 0) {
    iVar2 = FUN_00010cc4();
    in_stack_00000010 = unaff_r4 + 0x88;
    sVar1 = FUN_00010cd4();
    if (iVar2 < 0x15) {
      sVar1 = sVar1 + 1;
    }
    in_stack_00000014 = CONCAT22((short)*(undefined4 *)(unaff_r4 + 0x84),sVar1);
    iVar2 = FUN_00010000();
    if (iVar2 < 0) {
      uVar5 = **(undefined4 **)(unaff_r7 + DAT_00010db8);
      puVar3 = (undefined4 *)FUN_00010d20();
      uVar4 = FUN_00010d28(*puVar3);
      FUN_00010d3c(uVar5,DAT_00010dcc + 0x10d38,uVar4);
    }
  }
  return 0xffffffff;
}



/* ===== FUN_00010e04 @ 00010e04 size=36 ===== */

undefined4 FUN_00010e04(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_s1;
  undefined1 auStack_38 [16];
  uint uStack_28;
  undefined4 uStack_24;
  
  FUN_00010e28(param_3,0,0xb8);
  iVar1 = FUN_00010000(param_1,param_2,0x8b01,auStack_38);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_00010e5c(param_3,&uStack_28,0x10);
    *(undefined1 *)(param_3 + 0x10) = 0;
    iVar1 = FUN_00010000(param_1,param_2,0x8b03,auStack_38);
    if (-1 < iVar1) {
      *(undefined4 *)(param_3 + 0x14) = 1;
      *(uint *)(param_3 + 0x18) = uStack_28;
      *(uint *)(param_3 + 0x1c) = uStack_24;
    }
    iVar1 = FUN_00010000(param_1,param_2,0x8b05,auStack_38);
    if (-1 < iVar1) {
      *(undefined4 *)(param_3 + 0x20) = 1;
      uVar2 = FUN_00010ec4(&uStack_28);
      *(uint *)(param_3 + 0x30) = (uint)uStack_24._3_1_;
      *(ulonglong *)(param_3 + 0x28) = CONCAT44(extraout_s1,uVar2);
    }
    uStack_28 = param_3 + 0x38;
    uStack_24 = 0x40;
    iVar1 = FUN_00010000(param_1,param_2,0x8b2b,auStack_38);
    if (-1 < iVar1) {
      *(undefined4 *)(param_3 + 0x34) = 1;
      *(uint *)(param_3 + 0x78) = uStack_24 & 0xffff;
      *(uint *)(param_3 + 0x7c) = uStack_24 >> 0x10;
    }
    uStack_28 = param_3 + 0x88;
    uStack_24 = 0x21;
    iVar1 = FUN_00010000(param_1,param_2,0x8b1b,auStack_38);
    if (-1 < iVar1) {
      *(undefined4 *)(param_3 + 0x80) = 1;
      *(uint *)(param_3 + 0x84) = uStack_24 >> 0x10;
    }
    iVar1 = FUN_00010000(param_1,param_2,0x8b07,auStack_38);
    if (-1 < iVar1) {
      *(undefined4 *)(param_3 + 0xac) = 1;
      if (6 < uStack_28) {
        uStack_28 = 7;
      }
      *(uint *)(param_3 + 0xb0) = uStack_28;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00010e28 @ 00010e28 size=52 ===== */

undefined4 FUN_00010e28(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r4;
  undefined4 extraout_s1;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  FUN_00010e28();
  iVar1 = FUN_00010000();
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_00010e5c();
    *(undefined1 *)(unaff_r4 + 0x10) = 0;
    iVar1 = FUN_00010000();
    if (-1 < iVar1) {
      *(undefined4 *)(unaff_r4 + 0x14) = 1;
      *(uint *)(unaff_r4 + 0x18) = in_stack_00000010;
      *(uint *)(unaff_r4 + 0x1c) = in_stack_00000014;
    }
    iVar1 = FUN_00010000();
    if (-1 < iVar1) {
      *(undefined4 *)(unaff_r4 + 0x20) = 1;
      uVar2 = FUN_00010ec4(&stack0x00000010);
      *(uint *)(unaff_r4 + 0x30) = in_stack_00000014 >> 0x18;
      *(ulonglong *)(unaff_r4 + 0x28) = CONCAT44(extraout_s1,uVar2);
    }
    in_stack_00000010 = unaff_r4 + 0x38;
    in_stack_00000014 = 0x40;
    iVar1 = FUN_00010000();
    if (-1 < iVar1) {
      *(undefined4 *)(unaff_r4 + 0x34) = 1;
      *(uint *)(unaff_r4 + 0x78) = in_stack_00000014 & 0xffff;
      *(uint *)(unaff_r4 + 0x7c) = in_stack_00000014 >> 0x10;
    }
    in_stack_00000010 = unaff_r4 + 0x88;
    in_stack_00000014 = 0x21;
    iVar1 = FUN_00010000();
    if (-1 < iVar1) {
      *(undefined4 *)(unaff_r4 + 0x80) = 1;
      *(uint *)(unaff_r4 + 0x84) = in_stack_00000014 >> 0x10;
    }
    iVar1 = FUN_00010000();
    if (-1 < iVar1) {
      *(undefined4 *)(unaff_r4 + 0xac) = 1;
      if (6 < in_stack_00000010) {
        in_stack_00000010 = 7;
      }
      *(uint *)(unaff_r4 + 0xb0) = in_stack_00000010;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== FUN_00010e5c @ 00010e5c size=104 ===== */

undefined4 FUN_00010e5c(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r4;
  undefined4 *unaff_r8;
  undefined4 extraout_s1;
  uint in_stack_00000014;
  
  FUN_00010e5c();
  *(undefined1 *)(unaff_r4 + 0x10) = 0;
  iVar1 = FUN_00010000();
  if (-1 < iVar1) {
    *(undefined4 *)(unaff_r4 + 0x14) = 1;
    uVar2 = unaff_r8[1];
    *(undefined4 *)(unaff_r4 + 0x18) = *unaff_r8;
    *(undefined4 *)(unaff_r4 + 0x1c) = uVar2;
  }
  iVar1 = FUN_00010000();
  if (-1 < iVar1) {
    *(undefined4 *)(unaff_r4 + 0x20) = 1;
    uVar2 = FUN_00010ec4();
    *(uint *)(unaff_r4 + 0x30) = in_stack_00000014 >> 0x18;
    *(ulonglong *)(unaff_r4 + 0x28) = CONCAT44(extraout_s1,uVar2);
  }
  iVar1 = FUN_00010000();
  if (-1 < iVar1) {
    *(undefined4 *)(unaff_r4 + 0x34) = 1;
    *(undefined4 *)(unaff_r4 + 0x78) = 0x40;
    *(undefined4 *)(unaff_r4 + 0x7c) = 0;
  }
  uVar3 = unaff_r4 + 0x88;
  iVar1 = FUN_00010000();
  if (-1 < iVar1) {
    *(undefined4 *)(unaff_r4 + 0x80) = 1;
    *(undefined4 *)(unaff_r4 + 0x84) = 0;
  }
  iVar1 = FUN_00010000();
  if (-1 < iVar1) {
    *(undefined4 *)(unaff_r4 + 0xac) = 1;
    if (6 < uVar3) {
      uVar3 = 7;
    }
    *(uint *)(unaff_r4 + 0xb0) = uVar3;
  }
  return 0;
}



/* ===== FUN_00010ec4 @ 00010ec4 size=204 ===== */

undefined4 FUN_00010ec4(void)

{
  int iVar1;
  uint uVar2;
  int unaff_r4;
  undefined4 uVar3;
  undefined4 extraout_s1;
  uint in_stack_00000014;
  
  uVar3 = FUN_00010ec4();
  *(uint *)(unaff_r4 + 0x30) = in_stack_00000014 >> 0x18;
  *(ulonglong *)(unaff_r4 + 0x28) = CONCAT44(extraout_s1,uVar3);
  iVar1 = FUN_00010000();
  if (-1 < iVar1) {
    *(undefined4 *)(unaff_r4 + 0x34) = 1;
    *(undefined4 *)(unaff_r4 + 0x78) = 0x40;
    *(undefined4 *)(unaff_r4 + 0x7c) = 0;
  }
  uVar2 = unaff_r4 + 0x88;
  iVar1 = FUN_00010000();
  if (-1 < iVar1) {
    *(undefined4 *)(unaff_r4 + 0x80) = 1;
    *(undefined4 *)(unaff_r4 + 0x84) = 0;
  }
  iVar1 = FUN_00010000();
  if (-1 < iVar1) {
    *(undefined4 *)(unaff_r4 + 0xac) = 1;
    if (6 < uVar2) {
      uVar2 = 7;
    }
    *(uint *)(unaff_r4 + 0xb0) = uVar2;
  }
  return 0;
}



/* ===== FUN_00012534 @ 00012534 size=28 ===== */

undefined4 FUN_00012534(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  
  *param_2 = 2;
  iVar1 = FUN_00012550(param_1,DAT_000125e0 + 0x12554);
  if (iVar1 == 0) {
    param_2[1] = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_00012564(param_1);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_00012594(param_1);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_000125c8(param_2 + 1,*(undefined4 *)puVar2[4],puVar2[3]);
        FUN_000125d4(param_1,*puVar2);
        return 0;
      }
      puVar2 = (undefined4 *)FUN_000125a0();
      puVar3 = (undefined4 *)FUN_000125a8();
      *puVar3 = *puVar2;
      return 0xffffffff;
    }
    uVar5 = puVar2[3];
    uVar4 = *puVar2;
    param_2[1] = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                 uVar5 >> 0x18;
    FUN_00012584(param_1,uVar4);
  }
  return 1;
}



/* ===== FUN_00012550 @ 00012550 size=20 ===== */

undefined4 FUN_00012550(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_r6;
  
  iVar1 = FUN_00012550();
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_r6 + 4) = 0;
  }
  else {
    iVar1 = FUN_00012564();
    if (iVar1 == 0) {
      iVar1 = FUN_00012594();
      if (iVar1 != 0) {
        FUN_000125c8(unaff_r6 + 4,**(undefined4 **)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0xc));
        FUN_000125d4();
        return 0;
      }
      puVar2 = (undefined4 *)FUN_000125a0();
      puVar3 = (undefined4 *)FUN_000125a8();
      *puVar3 = *puVar2;
      return 0xffffffff;
    }
    uVar4 = *(uint *)(iVar1 + 0xc);
    *(uint *)(unaff_r6 + 4) =
         uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
    FUN_00012584();
  }
  return 1;
}



/* ===== FUN_00012564 @ 00012564 size=36 ===== */

undefined4 FUN_00012564(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_r6;
  
  iVar1 = FUN_00012564();
  if (iVar1 != 0) {
    uVar4 = *(uint *)(iVar1 + 0xc);
    *(uint *)(unaff_r6 + 4) =
         uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
    FUN_00012584();
    return 1;
  }
  iVar1 = FUN_00012594();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_000125a0();
    puVar3 = (undefined4 *)FUN_000125a8();
    *puVar3 = *puVar2;
    return 0xffffffff;
  }
  FUN_000125c8(unaff_r6 + 4,**(undefined4 **)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0xc));
  FUN_000125d4();
  return 0;
}



/* ===== FUN_00012584 @ 00012584 size=12 ===== */

undefined4 FUN_00012584(void)

{
  FUN_00012584();
  return 1;
}



/* ===== FUN_00012594 @ 00012594 size=24 ===== */

undefined4 FUN_00012594(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_r4;
  int unaff_r6;
  
  iVar1 = FUN_00012594();
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)FUN_000125a0();
    puVar3 = (undefined4 *)FUN_000125a8();
    *puVar3 = *puVar2;
    return 0xffffffff;
  }
  FUN_000125c8(unaff_r6 + 4,**(undefined4 **)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0xc));
  FUN_000125d4();
  return unaff_r4;
}



/* ===== FUN_000125a0 @ 000125a0 size=8 ===== */

undefined4 FUN_000125a0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_000125a0();
  puVar2 = (undefined4 *)FUN_000125a8();
  *puVar2 = *puVar1;
  return 0xffffffff;
}



/* ===== FUN_000125a8 @ 000125a8 size=20 ===== */

undefined4 FUN_000125a8(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_r4;
  
  puVar1 = (undefined4 *)FUN_000125a8();
  *puVar1 = *unaff_r4;
  return 0xffffffff;
}



/* ===== FUN_000125c8 @ 000125c8 size=12 ===== */

void FUN_000125c8(void)

{
  FUN_000125c8();
  FUN_000125d4();
  return;
}



/* ===== FUN_000125d4 @ 000125d4 size=12 ===== */

void FUN_000125d4(void)

{
  FUN_000125d4();
  return;
}



/* ===== FUN_000125e4 @ 000125e4 size=32 ===== */

undefined4 FUN_000125e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint auStack_54 [9];
  undefined1 auStack_30 [16];
  
  uVar1 = FUN_00012604(param_3,0x3a);
  iVar7 = DAT_0001278c + 0x12618;
  if (uVar1 == 0) {
    iVar2 = FUN_00012620();
    if (iVar2 < 0) {
      puVar5 = *(undefined4 **)(iVar7 + DAT_00012790);
      pcVar3 = FUN_00012644 + DAT_00012794;
      param_3 = param_2;
    }
    else {
      iVar2 = FUN_00012658(param_3,&uStack_74);
      if (-1 < iVar2) {
        uStack_64 = uStack_74;
        uStack_60 = uStack_70;
        uStack_5c = uStack_6c;
        uStack_58 = uStack_68;
        auStack_54[0]._0_2_ = 0;
        auStack_54[4] = uVar1;
        FUN_0001269c(auStack_30,param_2,0x10);
        iVar2 = FUN_000126ac(param_1,0x8954,&uStack_64);
        if ((-1 < iVar2) && ((auStack_54[4] & 2) != 0)) {
          puVar8 = auStack_54;
          do {
            uVar1 = *puVar8;
            uVar4 = puVar8[1];
            puVar8 = puVar8 + 2;
            *param_4 = uVar1;
            param_4[1] = uVar4;
            param_4 = param_4 + 2;
          } while (puVar8 != auStack_54 + 4);
          return 0;
        }
        uVar6 = **(undefined4 **)(iVar7 + DAT_00012790);
        puVar5 = (undefined4 *)FUN_000126dc();
        FUN_000126fc(uVar6,DAT_0001279c + 0x126f0,param_3,param_2,*puVar5);
        return 0xffffffff;
      }
      puVar5 = *(undefined4 **)(iVar7 + DAT_00012790);
      pcVar3 = (code *)(DAT_00012798 + 0x1267c);
    }
  }
  else {
    iVar2 = FUN_00012734(param_1,param_2);
    if (iVar2 < 0) {
      puVar5 = *(undefined4 **)(iVar7 + DAT_00012790);
      pcVar3 = (code *)(DAT_000127a0 + 0x12758);
      param_3 = param_2;
    }
    else {
      *(undefined2 *)param_4 = 1;
      iVar2 = FUN_00012768(param_3,(undefined2 *)((int)param_4 + 2));
      if (iVar2 != 0) {
        return 0;
      }
      puVar5 = *(undefined4 **)(iVar7 + DAT_00012790);
      pcVar3 = (code *)((int)&DAT_0001278c + DAT_000127a4);
    }
  }
  FUN_00012644(*puVar5,pcVar3,param_3);
  return 0xffffffff;
}



/* ===== FUN_00012604 @ 00012604 size=28 ===== */

undefined4 FUN_00012604(void)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *unaff_r8;
  undefined2 in_stack_0000002c;
  uint in_stack_0000003c;
  
  uVar1 = FUN_00012604();
  iVar7 = DAT_0001278c + 0x12618;
  if (uVar1 == 0) {
    iVar2 = FUN_00012620();
    if (iVar2 < 0) {
      puVar5 = *(undefined4 **)(iVar7 + DAT_00012790);
      pcVar3 = FUN_00012644 + DAT_00012794;
    }
    else {
      iVar2 = FUN_00012658();
      if (-1 < iVar2) {
        in_stack_0000002c = 0;
        in_stack_0000003c = uVar1;
        FUN_0001269c(&stack0x00000050);
        iVar2 = FUN_000126ac();
        if ((-1 < iVar2) && ((in_stack_0000003c & 2) != 0)) {
          puVar5 = (undefined4 *)&stack0x0000002c;
          do {
            uVar6 = *puVar5;
            uVar4 = puVar5[1];
            puVar5 = puVar5 + 2;
            *unaff_r8 = uVar6;
            unaff_r8[1] = uVar4;
            unaff_r8 = unaff_r8 + 2;
          } while (puVar5 != &stack0x0000003c);
          return 0;
        }
        uVar6 = **(undefined4 **)(iVar7 + DAT_00012790);
        FUN_000126dc();
        FUN_000126fc(uVar6,DAT_0001279c + 0x126f0);
        return 0xffffffff;
      }
      puVar5 = *(undefined4 **)(iVar7 + DAT_00012790);
      pcVar3 = (code *)(DAT_00012798 + 0x1267c);
    }
  }
  else {
    iVar2 = FUN_00012734();
    if (iVar2 < 0) {
      puVar5 = *(undefined4 **)(iVar7 + DAT_00012790);
      pcVar3 = (code *)(DAT_000127a0 + 0x12758);
    }
    else {
      *(undefined2 *)unaff_r8 = 1;
      iVar2 = FUN_00012768();
      if (iVar2 != 0) {
        return 0;
      }
      puVar5 = *(undefined4 **)(iVar7 + DAT_00012790);
      pcVar3 = (code *)((int)&DAT_0001278c + DAT_000127a4);
    }
  }
  FUN_00012644(*puVar5,pcVar3);
  return 0xffffffff;
}



/* ===== FUN_00012620 @ 00012620 size=36 ===== */

undefined4 FUN_00012620(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int unaff_r6;
  undefined4 *unaff_r8;
  uint unaff_r10;
  undefined2 in_stack_0000002c;
  uint in_stack_0000003c;
  
  iVar1 = FUN_00012620();
  if (iVar1 < 0) {
    puVar4 = *(undefined4 **)(unaff_r6 + DAT_00012790);
    pcVar2 = FUN_00012644 + DAT_00012794;
  }
  else {
    iVar1 = FUN_00012658();
    if (-1 < iVar1) {
      in_stack_0000002c = (undefined2)unaff_r10;
      in_stack_0000003c = unaff_r10;
      FUN_0001269c(&stack0x00000050);
      iVar1 = FUN_000126ac();
      if ((-1 < iVar1) && ((in_stack_0000003c & 2) != 0)) {
        puVar4 = (undefined4 *)&stack0x0000002c;
        do {
          uVar5 = *puVar4;
          uVar3 = puVar4[1];
          puVar4 = puVar4 + 2;
          *unaff_r8 = uVar5;
          unaff_r8[1] = uVar3;
          unaff_r8 = unaff_r8 + 2;
        } while (puVar4 != &stack0x0000003c);
        return 0;
      }
      uVar5 = **(undefined4 **)(unaff_r6 + DAT_00012790);
      FUN_000126dc();
      FUN_000126fc(uVar5,DAT_0001279c + 0x126f0);
      return 0xffffffff;
    }
    puVar4 = *(undefined4 **)(unaff_r6 + DAT_00012790);
    pcVar2 = (code *)(DAT_00012798 + 0x1267c);
  }
  FUN_00012644(*puVar4,pcVar2);
  return 0xffffffff;
}



/* ===== FUN_00012644 @ 00012644 size=8 ===== */

undefined4 FUN_00012644(void)

{
  FUN_00012644();
  return 0xffffffff;
}



/* ===== FUN_00012658 @ 00012658 size=68 ===== */

undefined4 FUN_00012658(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_r6;
  undefined4 *unaff_r8;
  uint unaff_r10;
  undefined4 *puVar4;
  undefined2 in_stack_0000002c;
  uint in_stack_0000003c;
  
  iVar1 = FUN_00012658();
  if (iVar1 < 0) {
    FUN_00012644(**(undefined4 **)(unaff_r6 + DAT_00012790),DAT_00012798 + 0x1267c);
  }
  else {
    in_stack_0000002c = (undefined2)unaff_r10;
    in_stack_0000003c = unaff_r10;
    FUN_0001269c(&stack0x00000050);
    iVar1 = FUN_000126ac();
    if ((-1 < iVar1) && ((in_stack_0000003c & 2) != 0)) {
      puVar4 = (undefined4 *)&stack0x0000002c;
      do {
        uVar3 = *puVar4;
        uVar2 = puVar4[1];
        puVar4 = puVar4 + 2;
        *unaff_r8 = uVar3;
        unaff_r8[1] = uVar2;
        unaff_r8 = unaff_r8 + 2;
      } while (puVar4 != &stack0x0000003c);
      return 0;
    }
    uVar3 = **(undefined4 **)(unaff_r6 + DAT_00012790);
    FUN_000126dc();
    FUN_000126fc(uVar3,DAT_0001279c + 0x126f0);
  }
  return 0xffffffff;
}



/* ===== FUN_0001269c @ 0001269c size=16 ===== */

undefined4 FUN_0001269c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_r6;
  undefined4 *unaff_r8;
  undefined4 *puVar4;
  uint in_stack_0000003c;
  
  FUN_0001269c();
  iVar1 = FUN_000126ac();
  if ((iVar1 < 0) || ((in_stack_0000003c & 2) == 0)) {
    uVar3 = **(undefined4 **)(unaff_r6 + DAT_00012790);
    FUN_000126dc();
    FUN_000126fc(uVar3,DAT_0001279c + 0x126f0);
    uVar3 = 0xffffffff;
  }
  else {
    puVar4 = (undefined4 *)&stack0x0000002c;
    do {
      uVar3 = *puVar4;
      uVar2 = puVar4[1];
      puVar4 = puVar4 + 2;
      *unaff_r8 = uVar3;
      unaff_r8[1] = uVar2;
      unaff_r8 = unaff_r8 + 2;
    } while (puVar4 != &stack0x0000003c);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_000126ac @ 000126ac size=88 ===== */

undefined4 FUN_000126ac(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_r6;
  undefined4 *unaff_r8;
  undefined4 *puVar4;
  uint in_stack_0000003c;
  
  iVar1 = FUN_000126ac();
  if ((iVar1 < 0) || ((in_stack_0000003c & 2) == 0)) {
    uVar3 = **(undefined4 **)(unaff_r6 + DAT_00012790);
    FUN_000126dc();
    FUN_000126fc(uVar3,DAT_0001279c + 0x126f0);
    uVar3 = 0xffffffff;
  }
  else {
    puVar4 = (undefined4 *)&stack0x0000002c;
    do {
      uVar3 = *puVar4;
      uVar2 = puVar4[1];
      puVar4 = puVar4 + 2;
      *unaff_r8 = uVar3;
      unaff_r8[1] = uVar2;
      unaff_r8 = unaff_r8 + 2;
    } while (puVar4 != &stack0x0000003c);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== FUN_000126dc @ 000126dc size=32 ===== */

undefined4 FUN_000126dc(void)

{
  FUN_000126dc();
  FUN_000126fc();
  return 0xffffffff;
}



/* ===== FUN_000126fc @ 000126fc size=16 ===== */

undefined4 FUN_000126fc(void)

{
  FUN_000126fc();
  return 0xffffffff;
}



/* ===== FUN_00012734 @ 00012734 size=52 ===== */

undefined4 FUN_00012734(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_r6;
  undefined2 *unaff_r8;
  
  iVar1 = FUN_00012734();
  if (iVar1 < 0) {
    puVar2 = *(undefined4 **)(unaff_r6 + DAT_00012790);
    iVar1 = DAT_000127a0 + 0x12758;
  }
  else {
    *unaff_r8 = 1;
    iVar1 = FUN_00012768();
    if (iVar1 != 0) {
      return 0;
    }
    puVar2 = *(undefined4 **)(unaff_r6 + DAT_00012790);
    iVar1 = (int)&DAT_0001278c + DAT_000127a4;
  }
  FUN_00012644(*puVar2,iVar1);
  return 0xffffffff;
}



/* ===== FUN_00012768 @ 00012768 size=36 ===== */

undefined4 FUN_00012768(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r6;
  
  iVar2 = FUN_00012768();
  if (iVar2 == 0) {
    FUN_00012644(**(undefined4 **)(unaff_r6 + DAT_00012790),(int)&DAT_0001278c + DAT_000127a4);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


