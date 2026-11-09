// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/gcode   functions: 11
/* printerApi/common/gcode.getVectors @ 0041fcd8 (size 348) */

void printerApi_common_gcode_getVectors(void)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_34;
  undefined4 local_2c;
  undefined4 local_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  uStack_34 = 0;
  FUN_00146be8();
  uVar3 = 0;
  iVar4 = 0;
  uVar5 = 0;
  for (iVar2 = 0; iVar2 < (int)local_28; iVar2 = iVar2 + 1) {
    if (*(int *)(local_2c + iVar2 * 8 + 4) != 0) {
      FUN_00148fb4();
      FUN_000a787c();
      uVar5 = uVar5 + 1;
      uVar1 = CONCAT44(uStack_34,1);
      if (uVar3 < uVar5) {
        uStack_34 = DAT_0041fe3c;
        FUN_00093524();
        iVar4 = -1;
        uVar5 = local_2c;
        uVar3 = local_28;
      }
      *(undefined8 *)(iVar4 + (uVar5 - 1) * 8) = uVar1;
    }
  }
  return;
}



/* printerApi/common/gcode.readThumbnail @ 0041fe40 (size 876) */

/* WARNING: Removing unreachable block (ram,0x0041ff5c) */

void printerApi_common_gcode_readThumbnail(void)

{
  int iVar1;
  uint uVar2;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  uint local_34;
  int local_30;
  uint local_24;
  int local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  for (iVar1 = 0; iVar1 < 0x14; iVar1 = iVar1 + 1) {
    FUN_000953d0();
    FUN_00187f60();
    if (local_30 != 0) {
      return;
    }
    if ((int)local_34 < 0x19) {
      uVar2 = 0;
    }
    else {
      FUN_000150d4();
      uVar2 = local_34 & 0xff;
    }
    if (uVar2 == 0) {
      if ((int)local_34 < 0x15) {
        uVar2 = 0;
      }
      else {
        FUN_000150d4();
        uVar2 = local_34 & 0xff;
      }
    }
    else {
      uVar2 = 1;
    }
    if (uVar2 != 0) break;
  }
  while( true ) {
    if (0x13 < iVar1) {
      return;
    }
    FUN_000953d0();
    FUN_00187f60();
    if (local_30 != 0) break;
    if ((int)local_34 < 0xf) {
      uVar2 = 0;
    }
    else {
      FUN_000150d4();
      uVar2 = local_34 & 0xff;
    }
    if (uVar2 == 0) {
      if ((int)local_34 < 0x13) {
        uVar2 = 0;
      }
      else {
        FUN_000150d4();
        uVar2 = local_34 & 0xff;
      }
    }
    else {
      uVar2 = 1;
    }
    if (uVar2 != 0) {
      return;
    }
    if (((int)local_34 < 2) || (FUN_000150d4(), (char)local_34 == '\0')) {
      return;
    }
    FUN_0014913c();
    FUN_0014913c();
    FUN_0014913c();
    local_34 = local_24;
    local_30 = local_20;
    FUN_000715a4();
  }
  return;
}



/* printerApi/common/gcode.IsValidGcodeFile @ 004201d0 (size 352) */

/* WARNING: Removing unreachable block (ram,0x004202d8) */
/* WARNING: Removing unreachable block (ram,0x00420300) */

void printerApi_common_gcode_IsValidGcodeFile(void)

{
  int iVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  int local_6c;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 auStack_2c [44];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00125350();
  FUN_00098a0c(0,auStack_2c);
  FUN_000933e8();
  FUN_00098a0c(0,local_58,0);
  local_54 = 0x400;
  local_50 = 0x400;
  local_4c = DAT_00420338;
  local_48 = in_stack_00000004;
  local_34 = 0xffffffff;
  local_30 = 0xffffffff;
  FUN_00098de4(0xffffffff,local_58,auStack_2c);
  iVar1 = 0;
  while( true ) {
    if (4 < iVar1) {
      return;
    }
    FUN_000953d0();
    FUN_00187f60();
    if (local_6c != 0) break;
    iVar1 = iVar1 + 1;
  }
  return;
}



/* printerApi/common/gcode.readPngImage @ 00420340 (size 720) */

/* WARNING: Removing unreachable block (ram,0x00420408) */

void printerApi_common_gcode_readPngImage(void)

{
  int iVar1;
  uint uVar2;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  uint local_2c;
  int local_28;
  uint local_1c;
  int local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  for (iVar1 = 0; iVar1 < 0x14; iVar1 = iVar1 + 1) {
    FUN_000953d0();
    FUN_00187f60();
    if (local_28 != 0) {
      return;
    }
    if ((int)local_2c < 0x19) {
      uVar2 = 0;
    }
    else {
      FUN_000150d4();
      uVar2 = local_2c & 0xff;
    }
    if (uVar2 != 0) break;
  }
  while( true ) {
    if (0x13 < iVar1) {
      return;
    }
    FUN_000953d0();
    FUN_00187f60();
    if (local_28 != 0) break;
    if ((int)local_2c < 0xf) {
      uVar2 = 0;
    }
    else {
      FUN_000150d4();
      uVar2 = local_2c & 0xff;
    }
    if (uVar2 != 0) {
      return;
    }
    if (((int)local_2c < 2) || (FUN_000150d4(), (char)local_2c == '\0')) {
      return;
    }
    FUN_0014913c();
    FUN_0014913c();
    FUN_0014913c();
    local_2c = local_1c;
    local_28 = local_18;
    FUN_000715a4();
  }
  return;
}



/* printerApi/common/gcode.readPaintInfos @ 0042062c (size 1196) */

/* WARNING: Removing unreachable block (ram,0x004208a8) */

void printerApi_common_gcode_readPaintInfos(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int extraout_r3;
  int extraout_r3_00;
  int iVar12;
  int unaff_r10;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  bool bVar14;
  undefined1 uVar15;
  
code_r0x0042062c:
  if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x2c)) {
    puVar13 = (undefined1 *)((int)register0x00000054 + -0xac);
    *(undefined4 *)((int)register0x00000054 + -0xac) = unaff_lr;
    *(undefined **)((int)register0x00000054 + -0xa8) = PTR_DAT_00420adc;
    FUN_0001eed8();
    *(undefined4 **)((int)register0x00000054 + -4) =
         *(undefined4 **)((int)register0x00000054 + -0xa4);
    **(undefined4 **)((int)register0x00000054 + -0xa4) = 0;
    *(undefined4 *)((int)register0x00000054 + -0xa8) = *(undefined4 *)((int)register0x00000054 + 4);
    FUN_0012aae0();
    bVar14 = *(int *)((int)register0x00000054 + -0x9c) == 0;
    if (!bVar14) {
      FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x14),
                   *(undefined4 *)((int)register0x00000054 + -0x98),
                   *(int *)((int)register0x00000054 + -0x9c));
      *(undefined **)((int)register0x00000054 + -0x14) = PTR_SUB_00420ae8;
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00420aec;
      iVar2 = extraout_r3;
      if (!bVar14) {
        iVar2 = *(int *)(extraout_r3 + 4);
      }
      *(int *)((int)register0x00000054 + -0xc) = iVar2;
      *(undefined4 *)((int)register0x00000054 + -8) = extraout_r2_00;
      *(undefined1 **)((int)register0x00000054 + -0xa8) =
           (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 2;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 2;
      printerApi_common_logger_Error();
      puVar4 = *(undefined4 **)((int)register0x00000054 + -4);
      uVar8 = puVar4[1];
      uVar3 = puVar4[2];
      *(undefined4 *)((int)register0x00000054 + 8) = *puVar4;
      *(undefined4 *)((int)register0x00000054 + 0xc) = uVar8;
      *(undefined4 *)((int)register0x00000054 + 0x10) = uVar3;
      return;
    }
    *(int *)((int)register0x00000054 + -0x80) = *(int *)((int)register0x00000054 + -0xa4);
    *(undefined4 *)((int)register0x00000054 + -0x74) =
         *(undefined4 *)((int)register0x00000054 + -0xa0);
    pcVar11 = *(code **)(*(int *)((int)register0x00000054 + -0xa4) + 0x1c);
    *(undefined4 *)((int)register0x00000054 + -0xa8) =
         *(undefined4 *)((int)register0x00000054 + -0xa0);
    (*pcVar11)();
    if (*(int *)((int)register0x00000054 + -0xa0) < 1 &&
        (*(int *)((int)register0x00000054 + -0xa0) != 0 ||
        *(uint *)((int)register0x00000054 + -0xa4) < 0x100001)) {
      pcVar11 = *(code **)(*(int *)((int)register0x00000054 + -0x80) + 0x1c);
      *(undefined4 *)((int)register0x00000054 + -0xa8) =
           *(undefined4 *)((int)register0x00000054 + -0x74);
      (*pcVar11)();
      iVar2 = *(int *)((int)register0x00000054 + -0xa4);
      iVar7 = *(int *)((int)register0x00000054 + -0xa0);
    }
    else {
      iVar7 = 0;
      iVar2 = 0x8000;
    }
    *(undefined4 *)((int)register0x00000054 + -0xa8) = *(undefined4 *)((int)register0x00000054 + 4);
    *(int *)((int)register0x00000054 + -0xa4) = -iVar2;
    *(uint *)((int)register0x00000054 + -0xa0) = -(iVar7 + (uint)(iVar2 != 0));
    *(undefined4 *)((int)register0x00000054 + -0x9c) = 2;
    FUN_00125350();
    FUN_00098a0c(0,(undefined1 *)((int)register0x00000054 + -0x40));
    *(undefined **)((int)register0x00000054 + -0xa8) = PTR_DAT_00420ae0;
    *(undefined4 *)((int)register0x00000054 + -0xa4) = 0x8000;
    *(undefined4 *)((int)register0x00000054 + -0xa0) = 0x8000;
    FUN_000933e8();
    FUN_00098a0c(0,(undefined1 *)((int)register0x00000054 + -0x6c),
                 *(undefined4 *)((int)register0x00000054 + -0x9c));
    *(undefined4 *)((int)register0x00000054 + -0x6c) = extraout_r2;
    *(undefined4 *)((int)register0x00000054 + -0x68) = 0x8000;
    *(undefined4 *)((int)register0x00000054 + -100) = 0x8000;
    *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00420ae4;
    *(undefined4 *)((int)register0x00000054 + -0x5c) = *(undefined4 *)((int)register0x00000054 + 4);
    *(undefined4 *)((int)register0x00000054 + -0x48) = 0xffffffff;
    *(undefined4 *)((int)register0x00000054 + -0x44) = 0xffffffff;
    FUN_00098de4(0xffffffff,(undefined1 *)((int)register0x00000054 + -0x6c),
                 (undefined1 *)((int)register0x00000054 + -0x40));
    uVar3 = 0;
    uVar8 = 0;
    while( true ) {
      *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x70) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = 1000;
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 0;
      FUN_000953d0();
      *(undefined1 **)((int)register0x00000054 + -0xa8) =
           (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined1 *)((int)register0x00000054 + -0xa4) = 10;
      FUN_00187f60();
      if (*(int *)((int)register0x00000054 + -0x98) != 0) break;
      uVar9 = *(uint *)((int)register0x00000054 + -0x9c);
      *(uint *)((int)register0x00000054 + -0x84) = uVar9;
      iVar2 = *(int *)((int)register0x00000054 + -0xa0);
      *(int *)((int)register0x00000054 + -0x78) = iVar2;
      if ((int)uVar9 < 0x15) {
        cVar1 = '\0';
      }
      else {
        *(int *)((int)register0x00000054 + -0xa8) = iVar2;
        *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_00420af0;
        *(undefined4 *)((int)register0x00000054 + -0xa0) = 0x15;
        FUN_000150d4();
        cVar1 = *(char *)((int)register0x00000054 + -0x9c);
        uVar9 = *(uint *)((int)register0x00000054 + -0x84);
        iVar2 = *(int *)((int)register0x00000054 + -0x78);
      }
      if (cVar1 == '\0') {
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x7c);
        uVar8 = *(undefined4 *)((int)register0x00000054 + -0x70);
      }
      else {
        *(int *)((int)register0x00000054 + -0xa8) = iVar2;
        *(uint *)((int)register0x00000054 + -0xa4) = uVar9;
        *(undefined **)((int)register0x00000054 + -0xa0) = PTR_DAT_00420af4;
        *(undefined4 *)((int)register0x00000054 + -0x9c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x98) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x94) = 0xffffffff;
        FUN_00146be8();
        uVar10 = *(uint *)((int)register0x00000054 + -0x8c);
        uVar9 = uVar10 - 1;
        uVar15 = uVar10 == uVar9;
        if (uVar10 <= uVar9) goto LAB_00420ac4;
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x90) + uVar9 * 8 + 4);
        *(undefined4 *)((int)register0x00000054 + -0xa8) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -0x90) + uVar9 * 8);
        *(undefined4 *)((int)register0x00000054 + -0xa4) = uVar3;
        printerApi_common_gcode_getVectors();
        uVar8 = *(undefined4 *)((int)register0x00000054 + -0xa0);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x9c);
        iVar2 = *(int *)((int)register0x00000054 + -0x78);
        uVar9 = *(uint *)((int)register0x00000054 + -0x84);
      }
      *(undefined4 *)((int)register0x00000054 + -0x70) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar3;
      if ((int)uVar9 < 0xe) {
        cVar1 = '\0';
      }
      else {
        *(int *)((int)register0x00000054 + -0xa8) = iVar2;
        *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_00420af8;
        *(undefined4 *)((int)register0x00000054 + -0xa0) = 0xe;
        FUN_000150d4();
        cVar1 = *(char *)((int)register0x00000054 + -0x9c);
        uVar9 = *(uint *)((int)register0x00000054 + -0x84);
        iVar2 = *(int *)((int)register0x00000054 + -0x78);
        uVar8 = *(undefined4 *)((int)register0x00000054 + -0x70);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x7c);
      }
      if (cVar1 != '\0') {
        uVar15 = uVar9 == 0xf;
        if (uVar9 < 0xf) goto LAB_00420abc;
        *(uint *)((int)register0x00000054 + -0xa8) = iVar2 + ((int)(0xf - uVar9) >> 0x1f & 0xfU);
        *(uint *)((int)register0x00000054 + -0xa4) = uVar9 - 0xf;
        FUN_00148fb4();
        *(undefined4 *)((int)register0x00000054 + -0xa8) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0xa0);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        FUN_00071920();
        *(undefined4 *)((int)register0x00000054 + -0xa8) =
             *(undefined4 *)((int)register0x00000054 + -0x9c);
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0x98);
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_00420afc;
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + -4);
        FUN_0016a168();
        if (*(int *)((int)register0x00000054 + -0x94) != 0) {
          puVar4 = *(undefined4 **)((int)register0x00000054 + -4);
          uVar8 = puVar4[1];
          uVar3 = puVar4[2];
          *(undefined4 *)((int)register0x00000054 + 8) = *puVar4;
          *(undefined4 *)((int)register0x00000054 + 0xc) = uVar8;
          *(undefined4 *)((int)register0x00000054 + 0x10) = uVar3;
          return;
        }
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x7c);
        uVar8 = *(undefined4 *)((int)register0x00000054 + -0x70);
      }
    }
    piVar5 = *(int **)((int)register0x00000054 + -4);
    iVar2 = *piVar5;
    iVar7 = piVar5[1];
    uVar10 = *(uint *)((int)register0x00000054 + -0x7c);
    iVar12 = *(int *)((int)register0x00000054 + -0x70);
    uVar9 = 0;
    do {
      if (iVar7 <= (int)uVar9) {
        iVar7 = piVar5[1];
        iVar2 = piVar5[2];
        *(int *)((int)register0x00000054 + 8) = *piVar5;
        *(int *)((int)register0x00000054 + 0xc) = iVar7;
        *(int *)((int)register0x00000054 + 0x10) = iVar2;
        return;
      }
      FUN_00098dfc(piVar5,iVar2,(undefined1 *)((int)register0x00000054 + -0x6c));
      uVar6 = *(uint *)((int)register0x00000054 + -0x6c);
      uVar15 = uVar10 == uVar6;
      if ((int)uVar6 < (int)uVar10) {
        if (uVar10 <= uVar6) goto LAB_00420ab4;
        piVar5 = *(int **)((int)register0x00000054 + -4);
        uVar15 = uVar9 == piVar5[1];
        if ((uint)piVar5[1] <= uVar9) goto LAB_00420aac;
        *(undefined8 *)(*piVar5 + uVar9 * 0x20 + 0x18) = *(undefined8 *)(iVar12 + uVar6 * 8);
      }
      else {
        piVar5 = *(int **)((int)register0x00000054 + -4);
      }
      iVar2 = extraout_r3_00 + 0x20;
      uVar9 = uVar9 + 1;
    } while( true );
  }
  goto LAB_00420acc;
LAB_00420aac:
  uVar6 = FUN_000986f8(uVar9);
LAB_00420ab4:
  FUN_000986f8(uVar6,uVar10);
LAB_00420abc:
  FUN_00098758(0xf);
LAB_00420ac4:
  param_1 = FUN_000986f8();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xac);
  if ((bool)uVar15) {
    register0x00000054 = (BADSPACEBASE *)puVar13;
  }
LAB_00420acc:
  unaff_lr = 0x420ad4;
  param_1 = FUN_00096bb8(param_1);
  goto code_r0x0042062c;
}



/* printerApi/common/gcode.readSize @ 00420b00 (size 904) */

/* WARNING: Removing unreachable block (ram,0x00420d34) */

void printerApi_common_gcode_readSize(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 extraout_r2;
  code *pcVar6;
  undefined4 extraout_r2_00;
  int extraout_r3;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  bool bVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x30)) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0xb0);
      *(undefined4 *)((int)register0x00000054 + -0xb0) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0xac) =
           *(undefined4 *)((int)register0x00000054 + 4);
      FUN_0012aae0();
      bVar8 = *(int *)((int)register0x00000054 + -0xa0) == 0;
      if (!bVar8) {
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x10),
                     *(undefined4 *)((int)register0x00000054 + -0x9c),
                     *(int *)((int)register0x00000054 + -0xa0));
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_SUB_00420e8c;
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00420e90;
        iVar1 = extraout_r3;
        if (!bVar8) {
          iVar1 = *(int *)(extraout_r3 + 4);
        }
        *(int *)((int)register0x00000054 + -8) = iVar1;
        *(undefined4 *)((int)register0x00000054 + -4) = extraout_r2;
        *(undefined1 **)((int)register0x00000054 + -0xac) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0xa8) = 2;
        *(undefined4 *)((int)register0x00000054 + -0xa4) = 2;
        printerApi_common_logger_Debug();
        uVar10 = *(undefined8 *)PTR_DAT_00420e94;
        *(undefined8 *)((int)register0x00000054 + 8) = uVar10;
        *(undefined8 *)((int)register0x00000054 + 0x10) = uVar10;
        return;
      }
      *(int *)((int)register0x00000054 + -0x7c) = *(int *)((int)register0x00000054 + -0xa8);
      *(undefined4 *)((int)register0x00000054 + -0x70) =
           *(undefined4 *)((int)register0x00000054 + -0xa4);
      pcVar6 = *(code **)(*(int *)((int)register0x00000054 + -0xa8) + 0x1c);
      *(undefined4 *)((int)register0x00000054 + -0xac) =
           *(undefined4 *)((int)register0x00000054 + -0xa4);
      (*pcVar6)();
      if (*(int *)((int)register0x00000054 + -0xa4) < 1 &&
          (*(int *)((int)register0x00000054 + -0xa4) != 0 ||
          *(uint *)((int)register0x00000054 + -0xa8) < 0x401)) {
        pcVar6 = *(code **)(*(int *)((int)register0x00000054 + -0x7c) + 0x1c);
        *(undefined4 *)((int)register0x00000054 + -0xac) =
             *(undefined4 *)((int)register0x00000054 + -0x70);
        (*pcVar6)();
        iVar1 = *(int *)((int)register0x00000054 + -0xa8);
        iVar3 = *(int *)((int)register0x00000054 + -0xa4);
      }
      else {
        iVar3 = 0;
        iVar1 = 0x400;
      }
      *(undefined4 *)((int)register0x00000054 + -0xac) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0xa8) = -iVar1;
      *(uint *)((int)register0x00000054 + -0xa4) = -(iVar3 + (uint)(iVar1 != 0));
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 2;
      FUN_00125350();
      FUN_00098a0c(0,(undefined1 *)((int)register0x00000054 + -0x3c));
      *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_00420e98;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = 0x8000;
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 0x8000;
      FUN_000933e8();
      FUN_00098a0c(0,(undefined1 *)((int)register0x00000054 + -0x68),
                   *(undefined4 *)((int)register0x00000054 + -0xa0));
      *(undefined4 *)((int)register0x00000054 + -0x68) = extraout_r2_00;
      *(undefined4 *)((int)register0x00000054 + -100) = 0x8000;
      *(undefined4 *)((int)register0x00000054 + -0x60) = 0x8000;
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00420e9c;
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x44) = 0xffffffff;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 0xffffffff;
      FUN_00098de4(0xffffffff,(undefined1 *)((int)register0x00000054 + -0x68),
                   (undefined1 *)((int)register0x00000054 + -0x3c));
      do {
        do {
          *(undefined4 *)((int)register0x00000054 + -0xac) = 1000;
          *(undefined4 *)((int)register0x00000054 + -0xa8) = 0;
          FUN_000953d0();
          *(undefined1 **)((int)register0x00000054 + -0xac) =
               (undefined1 *)((int)register0x00000054 + -0x3c);
          *(undefined1 *)((int)register0x00000054 + -0xa8) = 10;
          FUN_00187f60();
          if (*(int *)((int)register0x00000054 + -0x9c) != 0) {
            uVar10 = *(undefined8 *)PTR_DAT_00420e94;
            *(undefined8 *)((int)register0x00000054 + 8) = uVar10;
            *(undefined8 *)((int)register0x00000054 + 0x10) = uVar10;
            return;
          }
          iVar1 = *(int *)((int)register0x00000054 + -0xa0);
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0xa4);
          if (iVar1 < 0xd) {
            cVar5 = '\0';
          }
          else {
            *(int *)((int)register0x00000054 + -0x80) = iVar1;
            *(undefined4 *)((int)register0x00000054 + -0x74) = uVar4;
            *(undefined4 *)((int)register0x00000054 + -0xac) = uVar4;
            *(undefined **)((int)register0x00000054 + -0xa8) = PTR_DAT_00420ea0;
            *(undefined4 *)((int)register0x00000054 + -0xa4) = 0xd;
            FUN_000150d4();
            cVar5 = *(char *)((int)register0x00000054 + -0xa0);
            uVar4 = *(undefined4 *)((int)register0x00000054 + -0x74);
            iVar1 = *(int *)((int)register0x00000054 + -0x80);
          }
        } while (cVar5 == '\0');
        *(undefined4 *)((int)register0x00000054 + -0xac) = uVar4;
        *(int *)((int)register0x00000054 + -0xa8) = iVar1;
        *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_00420ea4;
        *(undefined4 *)((int)register0x00000054 + -0xa0) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x9c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x98) = 0xffffffff;
        FUN_00146be8();
      } while (*(int *)((int)register0x00000054 + -0x90) != 4);
      uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x94) + 0x14);
      *(undefined4 *)((int)register0x00000054 + -0xac) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + -0x94) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0xa8) = uVar4;
      *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_00772eb2_3_00420ea8;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x9c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x98) = 0xffffffff;
      FUN_00146be8();
      uVar9 = *(int *)((int)register0x00000054 + -0x90) == 0;
      if (!(bool)uVar9) {
        *(int *)((int)register0x00000054 + -0x78) = *(int *)((int)register0x00000054 + -0x90);
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x94);
        *(undefined4 **)((int)register0x00000054 + -0x6c) = puVar2;
        uVar4 = puVar2[1];
        *(undefined4 *)((int)register0x00000054 + -0xac) = *puVar2;
        *(undefined4 *)((int)register0x00000054 + -0xa8) = uVar4;
        FUN_00148fb4();
        *(undefined4 *)((int)register0x00000054 + -0xac) =
             *(undefined4 *)((int)register0x00000054 + -0xa4);
        *(undefined4 *)((int)register0x00000054 + -0xa8) =
             *(undefined4 *)((int)register0x00000054 + -0xa0);
        *(undefined4 *)((int)register0x00000054 + -0xa4) = 0x20;
        FUN_000a787c();
        uVar9 = *(uint *)((int)register0x00000054 + -0x78) == 1;
        if (1 < *(uint *)((int)register0x00000054 + -0x78)) {
          *(undefined8 *)((int)register0x00000054 + -0x88) =
               *(undefined8 *)((int)register0x00000054 + -0xa0);
          uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x6c) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0xac) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -0x6c) + 8);
          *(undefined4 *)((int)register0x00000054 + -0xa8) = uVar4;
          FUN_00148fb4();
          *(undefined4 *)((int)register0x00000054 + -0xac) =
               *(undefined4 *)((int)register0x00000054 + -0xa4);
          *(undefined4 *)((int)register0x00000054 + -0xa8) =
               *(undefined4 *)((int)register0x00000054 + -0xa0);
          *(undefined4 *)((int)register0x00000054 + -0xa4) = 0x20;
          FUN_000a787c();
          *(undefined8 *)((int)register0x00000054 + 8) =
               *(undefined8 *)((int)register0x00000054 + -0x88);
          *(undefined8 *)((int)register0x00000054 + 0x10) =
               *(undefined8 *)((int)register0x00000054 + -0xa0);
          return;
        }
        FUN_000986f8(1,1);
      }
      param_1 = FUN_000986f8(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xb0);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x420e84;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/gcode.GetFileDetail @ 00420eac (size 1020) */

void printerApi_common_gcode_GetFileDetail(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 extraout_r2;
  int extraout_r2_00;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int extraout_r3;
  int extraout_r3_00;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  bool bVar8;
  undefined8 uVar9;
  undefined4 in_stack_00000004;
  uint in_stack_00000008;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *in_stack_ffffff1c;
  undefined4 *puVar18;
  int local_e0;
  undefined4 local_dc;
  undefined4 *local_d8;
  undefined4 *local_d4;
  undefined4 *local_b0;
  undefined4 *local_ac;
  undefined4 *local_a8;
  undefined4 *local_a4;
  undefined4 *local_a0;
  undefined4 *local_9c;
  undefined4 *local_98;
  undefined4 *local_94;
  undefined4 *local_90;
  undefined4 *local_8c;
  int local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [44];
  undefined *local_1c [2];
  undefined *local_14;
  undefined *local_10;
  int local_c;
  undefined **local_4;
  
  while (&local_78 <= *(undefined4 ***)(unaff_r10 + 8)) {
    unaff_lr = 0x4212ac;
    FUN_00096bb8();
  }
  local_4 = (undefined **)0x0;
  uVar1 = FUN_00098a08(0,&stack0x0000000c);
  uVar1 = FUN_00098a08(uVar1,&local_b0);
  uVar12 = 0;
  uVar15 = 0;
  FUN_0012576c(uVar1);
  bVar8 = local_e0 == 0;
  if (bVar8) {
    local_1c[0] = PTR_printerApi_common_gcode_GetFileDetail_deferwrap1_004212b4;
    local_4 = local_1c;
    puVar3 = in_stack_ffffff1c;
    printerApi_common_gcode_IsValidGcodeFile();
    if ((in_stack_00000008 & 0xff) != 0) {
      puVar16 = (undefined4 *)0x0;
      FUN_00125350();
      FUN_00098a0c(0,auStack_48);
      puVar10 = (undefined4 *)&DAT_00008000;
      puVar13 = (undefined4 *)&DAT_00008000;
      FUN_000933e8();
      FUN_00098a0c(0,&local_74,puVar16);
      local_70 = 0x8000;
      local_6c = 0x8000;
      local_68 = PTR_DAT_004212bc;
      local_50 = 0xffffffff;
      local_4c = 0xffffffff;
      local_74 = extraout_r2;
      FUN_00098de4(in_stack_ffffff1c,&local_74,auStack_48);
      printerApi_common_gcode_readThumbnail();
      local_b0 = puVar10;
      local_ac = puVar13;
      printerApi_common_gcode_readPngImage();
      local_a0 = puVar10;
      local_9c = puVar13;
      printerApi_common_gcode_GetBoundaries();
      local_98 = puVar10;
      local_94 = (undefined4 *)0x0;
      puVar17 = puVar16;
      if (puVar13 != (undefined4 *)0x0) {
        puVar11 = puVar13;
        puVar14 = puVar16;
        puVar17 = puVar3;
        local_80 = puVar10;
        printerApi_common_gcode_readSize();
        puVar18 = local_80;
        printerApi_common_gcode_GetSvgData();
        local_84 = (undefined4 *)0x0;
        local_88 = 0;
        puVar3 = local_d4;
        puVar4 = local_80;
        puVar6 = puVar13;
        local_8c = (undefined4 *)PTR_DAT_004212c0;
        while (0 < (int)puVar6) {
          FUN_00098df4(local_d8,puVar4,&local_74,puVar6,unaff_lr,puVar10,puVar11,puVar14,puVar17,
                       puVar18);
          uVar1 = local_70;
          puVar2 = (undefined4 *)(local_88 + 1);
          puVar6 = puVar2;
          uVar12 = local_74;
          if (local_84 < puVar2) {
            local_7c = local_74;
            puVar17 = (undefined4 *)0x1;
            puVar10 = local_8c;
            puVar14 = local_84;
            puVar18 = (undefined4 *)PTR_SUB_004212c4;
            local_78 = puVar4;
            FUN_00093524();
            puVar6 = puVar16;
            local_84 = local_d8;
            local_8c = puVar13;
            uVar12 = local_7c;
            puVar4 = local_78;
            puVar3 = local_d4;
            puVar11 = puVar2;
          }
          uVar9 = CONCAT44(puVar3,puVar6);
          puVar7 = (undefined1 *)((int)puVar6 + -1);
          local_8c[(int)puVar7 * 2 + 1] = uVar1;
          iVar5 = extraout_r3;
          if (*(int *)PTR_DAT_004212cc != 0) {
            uVar9 = FUN_00098688(puVar6,puVar3);
            *puVar3 = uVar12;
            puVar3[1] = local_8c[(int)puVar7 * 2];
            iVar5 = extraout_r3_00;
          }
          puVar3 = (undefined4 *)((ulonglong)uVar9 >> 0x20);
          local_88 = (int)uVar9;
          local_8c[(int)puVar7 * 2] = uVar12;
          puVar4 = puVar4 + 9;
          puVar6 = (undefined4 *)(iVar5 + -1);
        }
        local_98 = puVar11;
        local_94 = puVar14;
        if (puVar3 != (undefined4 *)0x0) {
          if (local_d8 == (undefined4 *)0x0) {
            local_d8 = (undefined4 *)PTR_DAT_004212c0;
          }
          puVar17 = puVar3;
          FUN_001686a8();
          local_98 = local_d8;
          local_94 = puVar3;
          local_a8 = puVar18;
          local_a4 = puVar13;
        }
      }
      printerApi_common_gcode_readPaintInfos();
      local_90 = puVar17;
      FUN_00098ddc(local_98,&local_b0,&stack0x0000000c);
      (*(code *)*local_4)();
      return;
    }
    FUN_00098ddc(0,&local_b0,&stack0x0000000c);
    (*(code *)*local_4)();
    return;
  }
  FUN_00098a28(0,&local_14,local_e0,local_dc,unaff_lr,in_stack_00000004,in_stack_00000008,uVar12,
               uVar15);
  local_14 = PTR_SUB_004212c4;
  local_10 = PTR_DAT_004212c8;
  local_c = extraout_r2_00;
  if (!bVar8) {
    local_c = *(int *)(extraout_r2_00 + 4);
  }
  uVar1 = printerApi_common_logger_Debug();
  FUN_00098ddc(uVar1,&local_b0,&stack0x0000000c);
  return;
}



/* printerApi/common/gcode.GetFileDetail.deferwrap1 @ 004212d4 (size 96) */

void printerApi_common_gcode_GetFileDetail_deferwrap1(void)

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



/* printerApi/common/gcode.GetBoundaries @ 00421334 (size 1920) */

int printerApi_common_gcode_GetBoundaries(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint extraout_r2;
  undefined8 *puVar8;
  int iVar9;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  char cVar11;
  char cVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -100)) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0xe4);
      *(undefined4 *)((int)register0x00000054 + -0xe4) = unaff_lr;
      for (iVar1 = 0; *(int *)((int)register0x00000054 + -0x98) = iVar1, iVar1 < 0x32;
          iVar1 = iVar1 + 1) {
        *(undefined4 *)((int)register0x00000054 + -0xe0) = 1000;
        *(undefined4 *)((int)register0x00000054 + -0xdc) = 0;
        FUN_000953d0();
        *(undefined4 *)((int)register0x00000054 + -0xe0) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined1 *)((int)register0x00000054 + -0xdc) = 10;
        FUN_00187f60();
        if (*(int *)((int)register0x00000054 + -0xd0) != 0) {
          *(undefined4 *)((int)register0x00000054 + 8) = 0;
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          return 0;
        }
        iVar1 = *(int *)((int)register0x00000054 + -0xd4);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0xd8);
        if (iVar1 < 0x1f) {
          cVar11 = '\0';
        }
        else {
          *(int *)((int)register0x00000054 + -0x9c) = iVar1;
          *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0xe0) = uVar5;
          *(undefined **)((int)register0x00000054 + -0xdc) = PTR_DAT_00421ab8;
          *(undefined4 *)((int)register0x00000054 + -0xd8) = 0x1f;
          FUN_000150d4();
          cVar11 = *(char *)((int)register0x00000054 + -0xd4);
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x6c);
          iVar1 = *(int *)((int)register0x00000054 + -0x9c);
        }
        if (cVar11 == '\0') {
          if (iVar1 < 0x18) {
            cVar11 = '\0';
          }
          else {
            *(undefined4 *)((int)register0x00000054 + -0xe0) = uVar5;
            *(undefined **)((int)register0x00000054 + -0xdc) = PTR_DAT_00421abc;
            *(undefined4 *)((int)register0x00000054 + -0xd8) = 0x18;
            FUN_000150d4();
            cVar11 = *(char *)((int)register0x00000054 + -0xd4);
          }
          if (cVar11 != '\0') {
            iVar1 = *(int *)((int)register0x00000054 + -0x98);
            break;
          }
          iVar1 = *(int *)((int)register0x00000054 + -0x98);
        }
        else {
          iVar1 = *(int *)((int)register0x00000054 + -0x98) + -7;
        }
      }
      cVar12 = SBORROW4(iVar1,0x32);
      cVar11 = iVar1 + -0x32 < 0;
      uVar6 = 0;
      iVar7 = 0;
      uVar5 = 0;
LAB_0042146c:
      if (cVar11 == cVar12) {
LAB_00421874:
        *(int *)((int)register0x00000054 + 8) = iVar7;
        *(undefined4 *)((int)register0x00000054 + 0xc) = uVar5;
        *(uint *)((int)register0x00000054 + 0x10) = uVar6;
        return iVar1;
      }
      *(int *)((int)register0x00000054 + -0x40) = iVar7;
      *(undefined4 *)((int)register0x00000054 + -0x94) = uVar5;
      *(uint *)((int)register0x00000054 + -0x90) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0xe0) = 1000;
      *(undefined4 *)((int)register0x00000054 + -0xdc) = 0;
      FUN_000953d0();
      *(undefined4 *)((int)register0x00000054 + -0xe0) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined1 *)((int)register0x00000054 + -0xdc) = 10;
      FUN_00187f60();
      if (*(int *)((int)register0x00000054 + -0xd0) != 0) {
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        *(int *)((int)register0x00000054 + 0x10) = *(int *)((int)register0x00000054 + -0x90);
        return *(int *)((int)register0x00000054 + -0x90);
      }
      iVar1 = *(int *)((int)register0x00000054 + -0xd4);
      *(int *)((int)register0x00000054 + -0xa0) = iVar1;
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0xd8);
      *(undefined4 *)((int)register0x00000054 + -0x70) = uVar5;
      if (iVar1 < 0x15) {
        cVar11 = '\0';
      }
      else {
        *(undefined4 *)((int)register0x00000054 + -0xe0) = uVar5;
        *(undefined **)((int)register0x00000054 + -0xdc) = PTR_DAT_00421ac0;
        *(undefined4 *)((int)register0x00000054 + -0xd8) = 0x15;
        FUN_000150d4();
        cVar11 = *(char *)((int)register0x00000054 + -0xd4);
        iVar1 = *(int *)((int)register0x00000054 + -0xa0);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x70);
      }
      if (cVar11 == '\0') {
        uVar6 = *(uint *)((int)register0x00000054 + -0x90);
        iVar7 = *(int *)((int)register0x00000054 + -0x40);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x94);
        iVar1 = 0;
        goto LAB_00421874;
      }
      FUN_00098a14(0,(undefined1 *)((int)register0x00000054 + -100),iVar1,uVar5);
      *(undefined **)((int)register0x00000054 + -0xe0) = PTR_DAT_00421ac4;
      *(undefined4 *)((int)register0x00000054 + -0xdc) = 0xd;
      FUN_0040c2b0();
      *(undefined4 *)((int)register0x00000054 + -0x78) =
           *(undefined4 *)((int)register0x00000054 + -0xd8);
      *(undefined **)((int)register0x00000054 + -0xe0) = PTR_DAT_00421ac8;
      *(undefined4 *)((int)register0x00000054 + -0xdc) = 0x1a;
      FUN_0040c2b0();
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + -0xd8);
      *(undefined **)((int)register0x00000054 + -0xe0) = PTR_DAT_00421acc;
      *(undefined4 *)((int)register0x00000054 + -0xdc) = 0x10;
      FUN_0040c2b0();
      *(undefined4 *)((int)register0x00000054 + -0x84) =
           *(undefined4 *)((int)register0x00000054 + -0xd8);
      *(undefined4 *)((int)register0x00000054 + -0xe0) =
           *(undefined4 *)((int)register0x00000054 + -0x78);
      *(undefined4 *)((int)register0x00000054 + -0xdc) =
           *(undefined4 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0xd8) =
           *(undefined4 *)((int)register0x00000054 + -0xa0);
      FUN_0040f810();
      iVar1 = *(int *)((int)register0x00000054 + -0xd4);
      if (iVar1 == 0) {
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x1c));
        *(undefined **)((int)register0x00000054 + -0x1c) = PTR_SUB_00421ad4;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00421ae8;
        *(undefined4 *)((int)register0x00000054 + -0xe0) =
             *(undefined4 *)((int)register0x00000054 + -0x70);
        *(undefined4 *)((int)register0x00000054 + -0xdc) =
             *(undefined4 *)((int)register0x00000054 + -0xa0);
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -0x14) = PTR_SUB_00421ad4;
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0xd8);
        uVar5 = *(undefined4 *)PTR_DAT_00421adc;
        *(undefined **)((int)register0x00000054 + -0xe0) = PTR_DAT_00421ae0;
        *(undefined4 *)((int)register0x00000054 + -0xdc) = uVar5;
        *(undefined1 **)((int)register0x00000054 + -0xd8) =
             (undefined1 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0xd4) = 2;
        *(undefined4 *)((int)register0x00000054 + -0xd0) = 2;
        FUN_001335b0();
        cVar12 = SBORROW4(*(int *)((int)register0x00000054 + -0x98),0x32);
        cVar11 = *(int *)((int)register0x00000054 + -0x98) + -0x32 < 0;
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x94);
        uVar6 = *(uint *)((int)register0x00000054 + -0x90);
        iVar7 = *(int *)((int)register0x00000054 + -0x40);
LAB_00421460:
        iVar1 = *(int *)((int)register0x00000054 + -0x98);
        goto LAB_0042146c;
      }
      uVar13 = *(uint *)((int)register0x00000054 + -0xd0) == 1;
      if (*(uint *)((int)register0x00000054 + -0xd0) < 2) goto LAB_00421a9c;
      uVar5 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -100) = *(undefined4 *)(iVar1 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x60) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0xe0) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0xdc) =
           *(undefined4 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0xd8) =
           *(undefined4 *)((int)register0x00000054 + -0xa0);
      FUN_0040f810();
      iVar1 = *(int *)((int)register0x00000054 + -0xd4);
      if (iVar1 == 0) {
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x2c));
        *(undefined **)((int)register0x00000054 + -0x2c) = PTR_SUB_00421ad4;
        *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_00421ae4;
        *(undefined4 *)((int)register0x00000054 + -0xe0) =
             *(undefined4 *)((int)register0x00000054 + -0x70);
        *(undefined4 *)((int)register0x00000054 + -0xdc) =
             *(undefined4 *)((int)register0x00000054 + -0xa0);
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -0x24) = PTR_SUB_00421ad4;
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + -0xd8);
        uVar5 = *(undefined4 *)PTR_DAT_00421adc;
        *(undefined **)((int)register0x00000054 + -0xe0) = PTR_DAT_00421ae0;
        *(undefined4 *)((int)register0x00000054 + -0xdc) = uVar5;
        *(undefined1 **)((int)register0x00000054 + -0xd8) =
             (undefined1 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0xd4) = 2;
        *(undefined4 *)((int)register0x00000054 + -0xd0) = 2;
        FUN_001335b0();
        cVar12 = SBORROW4(*(int *)((int)register0x00000054 + -0x98),0x32);
        cVar11 = *(int *)((int)register0x00000054 + -0x98) + -0x32 < 0;
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x94);
        uVar6 = *(uint *)((int)register0x00000054 + -0x90);
        iVar7 = *(int *)((int)register0x00000054 + -0x40);
        goto LAB_00421460;
      }
      uVar6 = *(uint *)((int)register0x00000054 + -0xd0);
      uVar13 = uVar6 == 1;
      if (uVar6 < 2) goto LAB_00421a94;
      *(uint *)((int)register0x00000054 + -0xa4) = uVar6;
      *(int *)((int)register0x00000054 + -0x74) = iVar1;
      uVar5 = *(undefined4 *)(iVar1 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0xe0) = *(undefined4 *)(iVar1 + 8);
      *(undefined4 *)((int)register0x00000054 + -0xdc) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0xd8) = 0x40;
      FUN_000a787c();
      *(undefined8 *)((int)register0x00000054 + -0x5c) =
           *(undefined8 *)((int)register0x00000054 + -0xd4);
      uVar13 = *(uint *)((int)register0x00000054 + -0xa4) == 2;
      if (*(uint *)((int)register0x00000054 + -0xa4) < 3) goto LAB_00421a88;
      uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x74) + 0x14);
      *(undefined4 *)((int)register0x00000054 + -0xe0) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + -0x74) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0xdc) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0xd8) = 0x40;
      FUN_000a787c();
      *(undefined8 *)((int)register0x00000054 + -0x54) =
           *(undefined8 *)((int)register0x00000054 + -0xd4);
      *(undefined4 *)((int)register0x00000054 + -0xe0) =
           *(undefined4 *)((int)register0x00000054 + -0x84);
      *(undefined4 *)((int)register0x00000054 + -0xdc) =
           *(undefined4 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0xd8) =
           *(undefined4 *)((int)register0x00000054 + -0xa0);
      FUN_0040f810();
      iVar1 = *(int *)((int)register0x00000054 + -0xd4);
      if (iVar1 == 0) {
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x3c));
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_SUB_00421ad4;
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_00421ad8;
        *(undefined4 *)((int)register0x00000054 + -0xe0) =
             *(undefined4 *)((int)register0x00000054 + -0x70);
        *(undefined4 *)((int)register0x00000054 + -0xdc) =
             *(undefined4 *)((int)register0x00000054 + -0xa0);
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_SUB_00421ad4;
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -0xd8);
        uVar5 = *(undefined4 *)PTR_DAT_00421adc;
        *(undefined **)((int)register0x00000054 + -0xe0) = PTR_DAT_00421ae0;
        *(undefined4 *)((int)register0x00000054 + -0xdc) = uVar5;
        *(undefined1 **)((int)register0x00000054 + -0xd8) =
             (undefined1 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0xd4) = 2;
        *(undefined4 *)((int)register0x00000054 + -0xd0) = 2;
        FUN_001335b0();
        cVar12 = SBORROW4(*(int *)((int)register0x00000054 + -0x98),0x32);
        cVar11 = *(int *)((int)register0x00000054 + -0x98) + -0x32 < 0;
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x94);
        uVar6 = *(uint *)((int)register0x00000054 + -0x90);
        iVar7 = *(int *)((int)register0x00000054 + -0x40);
        goto LAB_00421460;
      }
      uVar13 = *(uint *)((int)register0x00000054 + -0xd0) == 1;
      if (1 < *(uint *)((int)register0x00000054 + -0xd0)) {
        *(undefined4 *)((int)register0x00000054 + -0x80) = *(undefined4 *)(iVar1 + 8);
        *(undefined4 *)((int)register0x00000054 + -0xac) = *(undefined4 *)(iVar1 + 0xc);
        *(undefined **)((int)register0x00000054 + -0xe0) = PTR_DAT_00421ad0;
        *(undefined4 *)((int)register0x00000054 + -0xdc) = 0x1b;
        FUN_0040c2b0();
        *(undefined4 *)((int)register0x00000054 + -0xe0) =
             *(undefined4 *)((int)register0x00000054 + -0xd8);
        *(undefined4 *)((int)register0x00000054 + -0xdc) =
             *(undefined4 *)((int)register0x00000054 + -0x80);
        *(undefined4 *)((int)register0x00000054 + -0xd8) =
             *(undefined4 *)((int)register0x00000054 + -0xac);
        *(undefined4 *)((int)register0x00000054 + -0xd4) = 0xffffffff;
        FUN_00410b74();
        piVar2 = *(int **)((int)register0x00000054 + -0xd0);
        iVar1 = *(int *)((int)register0x00000054 + -0xcc);
        while( true ) {
          if (iVar1 < 1) break;
          uVar6 = piVar2[1];
          uVar13 = uVar6 == 1;
          if (uVar6 < 2) {
LAB_00421a74:
            FUN_000986f8(1,uVar6);
            goto LAB_00421a80;
          }
          *(int *)((int)register0x00000054 + -0x88) = iVar1;
          *(int **)((int)register0x00000054 + -4) = piVar2;
          *(uint *)((int)register0x00000054 + -0xa8) = uVar6;
          iVar1 = *piVar2;
          *(int *)((int)register0x00000054 + -0x7c) = iVar1;
          uVar5 = *(undefined4 *)(iVar1 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0xe0) = *(undefined4 *)(iVar1 + 8);
          *(undefined4 *)((int)register0x00000054 + -0xdc) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0xd8) = 0x40;
          FUN_000a787c();
          uVar13 = *(uint *)((int)register0x00000054 + -0xa8) == 2;
          if (*(uint *)((int)register0x00000054 + -0xa8) < 3) {
            FUN_000986f8(2,2);
            uVar6 = extraout_r2;
            goto LAB_00421a74;
          }
          *(undefined8 *)((int)register0x00000054 + -0xb4) =
               *(undefined8 *)((int)register0x00000054 + -0xd4);
          uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x7c) + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0xe0) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -0x7c) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0xdc) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0xd8) = 0x40;
          FUN_000a787c();
          uVar6 = *(int *)((int)register0x00000054 + -0x48) + 1;
          uVar14 = *(undefined8 *)((int)register0x00000054 + -0xd4);
          iVar1 = *(int *)((int)register0x00000054 + -0x4c);
          if (*(uint *)((int)register0x00000054 + -0x44) < uVar6) {
            *(undefined8 *)((int)register0x00000054 + -0xbc) = uVar14;
            *(int *)((int)register0x00000054 + -0xe0) = iVar1;
            *(uint *)((int)register0x00000054 + -0xdc) = uVar6;
            *(uint *)((int)register0x00000054 + -0xd8) = *(uint *)((int)register0x00000054 + -0x44);
            *(undefined4 *)((int)register0x00000054 + -0xd4) = 1;
            *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_00421aec;
            FUN_00093524();
            iVar1 = *(int *)((int)register0x00000054 + -0xcc);
            uVar6 = *(uint *)((int)register0x00000054 + -200);
            *(undefined4 *)((int)register0x00000054 + -0x44) =
                 *(undefined4 *)((int)register0x00000054 + -0xc4);
            *(int *)((int)register0x00000054 + -0x4c) = iVar1;
            uVar14 = *(undefined8 *)((int)register0x00000054 + -0xbc);
          }
          *(uint *)((int)register0x00000054 + -0x48) = uVar6;
          puVar8 = (undefined8 *)(iVar1 + (uVar6 - 1) * 0x10);
          *puVar8 = *(undefined8 *)((int)register0x00000054 + -0xb4);
          puVar8[1] = uVar14;
          piVar2 = (int *)(*(int *)((int)register0x00000054 + -4) + 0xc);
          iVar1 = *(int *)((int)register0x00000054 + -0x88) + -1;
        }
        uVar3 = *(int *)((int)register0x00000054 + -0x94) + 1;
        uVar6 = *(uint *)((int)register0x00000054 + -0x90);
        if (uVar6 < uVar3) {
          *(undefined4 *)((int)register0x00000054 + -0xe0) =
               *(undefined4 *)((int)register0x00000054 + -0x40);
          *(uint *)((int)register0x00000054 + -0xdc) = uVar3;
          *(uint *)((int)register0x00000054 + -0xd8) = uVar6;
          *(undefined4 *)((int)register0x00000054 + -0xd4) = 1;
          *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_00421af0;
          FUN_00093524();
          iVar7 = *(int *)((int)register0x00000054 + -0xcc);
          uVar3 = *(uint *)((int)register0x00000054 + -200);
          uVar6 = *(uint *)((int)register0x00000054 + -0xc4);
        }
        else {
          iVar7 = *(int *)((int)register0x00000054 + -0x40);
        }
        *(uint *)((int)register0x00000054 + -0x94) = uVar3;
        iVar1 = iVar7 + uVar3 * 0x24 + -0x24;
        if (*(int *)PTR_DAT_00421af4 == 0) {
          iVar9 = *(int *)((int)register0x00000054 + -0x98);
          iVar4 = iVar9;
        }
        else {
          *(int *)((int)register0x00000054 + -8) = iVar7;
          *(uint *)((int)register0x00000054 + -0x8c) = uVar6;
          *(int *)((int)register0x00000054 + -0xc) = iVar1;
          *(undefined **)((int)register0x00000054 + -0xe0) = PTR_DAT_00421af0;
          *(int *)((int)register0x00000054 + -0xdc) = iVar1;
          *(undefined1 **)((int)register0x00000054 + -0xd8) =
               (undefined1 *)((int)register0x00000054 + -100);
          FUN_00022914();
          iVar4 = *(int *)((int)register0x00000054 + -0x98);
          uVar3 = *(uint *)((int)register0x00000054 + -0x94);
          uVar6 = *(uint *)((int)register0x00000054 + -0x8c);
          iVar7 = *(int *)((int)register0x00000054 + -8);
          iVar9 = *(int *)((int)register0x00000054 + -0x98);
          iVar1 = *(int *)((int)register0x00000054 + -0xc);
        }
        cVar12 = SBORROW4(iVar4,0x32);
        cVar11 = iVar4 + -0x32 < 0;
        FUN_00098df4(uVar3,(undefined1 *)((int)register0x00000054 + -100),iVar1,iVar9);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x94);
        goto LAB_00421460;
      }
LAB_00421a80:
      FUN_000986f8(1);
LAB_00421a88:
      FUN_000986f8(2,2);
LAB_00421a94:
      FUN_000986f8(1);
LAB_00421a9c:
      param_1 = FUN_000986f8(1);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xe4);
      if ((bool)uVar13) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x421ab0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/gcode.generateSVGPaths @ 00421af8 (size 3688) */

void printerApi_common_gcode_generateSVGPaths(undefined4 param_1)

{
  uint uVar1;
  double *pdVar2;
  int iVar3;
  int extraout_r1;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  double dVar10;
  undefined4 extraout_s1;
  
code_r0x00421af8:
  if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0xb4)) {
    puVar8 = (undefined1 *)((int)register0x00000054 + -0x134);
    *(undefined4 *)((int)register0x00000054 + -0x134) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -0x88) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x84) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x80) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
    FUN_00098a18(0,(undefined1 *)((int)register0x00000054 + -0x20));
    *(undefined8 *)((int)register0x00000054 + -0x90) =
         *(undefined8 *)((int)register0x00000054 + 0x20);
    *(undefined4 *)((int)register0x00000054 + -0x130) =
         *(undefined4 *)((int)register0x00000054 + -0x90);
    *(undefined4 *)((int)register0x00000054 + -300) =
         *(undefined4 *)((int)register0x00000054 + -0x8c);
    FUN_0008a4bc();
    *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00422338;
    *(undefined4 *)((int)register0x00000054 + -0x1c) =
         *(undefined4 *)((int)register0x00000054 + -0x128);
    *(undefined8 *)((int)register0x00000054 + -0x98) =
         *(undefined8 *)((int)register0x00000054 + 0x28);
    *(undefined4 *)((int)register0x00000054 + -0x130) =
         *(undefined4 *)((int)register0x00000054 + -0x98);
    *(undefined4 *)((int)register0x00000054 + -300) =
         *(undefined4 *)((int)register0x00000054 + -0x94);
    FUN_0008a4bc();
    *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00422338;
    *(undefined4 *)((int)register0x00000054 + -0x14) =
         *(undefined4 *)((int)register0x00000054 + -0x128);
    *(undefined8 *)((int)register0x00000054 + -0xa0) =
         *(undefined8 *)((int)register0x00000054 + 0x20);
    *(undefined4 *)((int)register0x00000054 + -0x130) =
         *(undefined4 *)((int)register0x00000054 + -0xa0);
    *(undefined4 *)((int)register0x00000054 + -300) =
         *(undefined4 *)((int)register0x00000054 + -0x9c);
    FUN_0008a4bc();
    *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00422338;
    *(undefined4 *)((int)register0x00000054 + -0xc) =
         *(undefined4 *)((int)register0x00000054 + -0x128);
    *(undefined8 *)((int)register0x00000054 + -0xa8) =
         *(undefined8 *)((int)register0x00000054 + 0x28);
    *(undefined4 *)((int)register0x00000054 + -0x130) =
         *(undefined4 *)((int)register0x00000054 + -0xa8);
    *(undefined4 *)((int)register0x00000054 + -300) =
         *(undefined4 *)((int)register0x00000054 + -0xa4);
    FUN_0008a4bc();
    *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00422338;
    *(undefined4 *)((int)register0x00000054 + -4) =
         *(undefined4 *)((int)register0x00000054 + -0x128);
    *(undefined **)((int)register0x00000054 + -0x130) = PTR_DAT_0042233c;
    *(undefined4 *)((int)register0x00000054 + -300) = 0x54;
    *(undefined1 **)((int)register0x00000054 + -0x128) =
         (undefined1 *)((int)register0x00000054 + -0x20);
    *(undefined4 *)((int)register0x00000054 + -0x124) = 4;
    *(undefined4 *)((int)register0x00000054 + -0x120) = 4;
    FUN_001331ac();
    uVar5 = *(undefined4 *)((int)register0x00000054 + -0x11c);
    iVar6 = *(int *)((int)register0x00000054 + -0x118);
    if (*(undefined1 **)((int)register0x00000054 + -0x88) == (undefined1 *)0x0) {
      *(undefined1 **)((int)register0x00000054 + -0x88) =
           (undefined1 *)((int)register0x00000054 + -0x88);
LAB_00421c48:
      *(double *)((int)register0x00000054 + -0xd0) =
           *(double *)((int)register0x00000054 + 0x20) / *(double *)((int)register0x00000054 + 0x10)
      ;
      uVar1 = *(uint *)((int)register0x00000054 + -0x7c);
      iVar3 = *(int *)((int)register0x00000054 + -0x80);
      uVar4 = iVar3 + iVar6;
      iVar7 = *(int *)((int)register0x00000054 + -0x84);
      if (uVar1 < uVar4) {
        *(int *)((int)register0x00000054 + -0xd8) = iVar6;
        *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
        *(int *)((int)register0x00000054 + -0xbc) = iVar3;
        *(int *)((int)register0x00000054 + -0x130) = iVar7;
        *(uint *)((int)register0x00000054 + -300) = uVar4;
        *(uint *)((int)register0x00000054 + -0x128) = uVar1;
        *(int *)((int)register0x00000054 + -0x124) = iVar6;
        *(undefined **)((int)register0x00000054 + -0x120) = PTR_DAT_00422340;
        FUN_00093524();
        iVar7 = *(int *)((int)register0x00000054 + -0x11c);
        uVar4 = *(uint *)((int)register0x00000054 + -0x118);
        uVar1 = *(uint *)((int)register0x00000054 + -0x114);
        iVar3 = *(int *)((int)register0x00000054 + -0xbc);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x6c);
        iVar6 = *(int *)((int)register0x00000054 + -0xd8);
      }
      *(uint *)((int)register0x00000054 + -0xbc) = uVar4;
      *(int *)((int)register0x00000054 + -0x3c) = iVar7;
      *(uint *)((int)register0x00000054 + -0xc0) = uVar1;
      *(int *)((int)register0x00000054 + -0x130) = iVar7 + iVar3;
      *(undefined4 *)((int)register0x00000054 + -300) = uVar5;
      *(int *)((int)register0x00000054 + -0x128) = iVar6;
      FUN_00098ec8();
      *(undefined4 *)((int)register0x00000054 + -0x80) =
           *(undefined4 *)((int)register0x00000054 + -0xbc);
      *(undefined4 *)((int)register0x00000054 + -0x7c) =
           *(undefined4 *)((int)register0x00000054 + -0xc0);
      *(undefined4 *)((int)register0x00000054 + -0x84) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      if (*(undefined1 **)((int)register0x00000054 + -0x88) == (undefined1 *)0x0) {
        *(undefined1 **)((int)register0x00000054 + -0x88) =
             (undefined1 *)((int)register0x00000054 + -0x88);
LAB_00421d08:
        uVar1 = *(uint *)((int)register0x00000054 + -0x7c);
        iVar6 = *(int *)((int)register0x00000054 + -0x80);
        uVar4 = iVar6 + 9;
        iVar3 = *(int *)((int)register0x00000054 + -0x84);
        if (uVar1 < uVar4) {
          *(int *)((int)register0x00000054 + -0xbc) = iVar6;
          *(int *)((int)register0x00000054 + -0x130) = iVar3;
          *(uint *)((int)register0x00000054 + -300) = uVar4;
          *(uint *)((int)register0x00000054 + -0x128) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -0x124) = 9;
          *(undefined **)((int)register0x00000054 + -0x120) = PTR_DAT_00422340;
          FUN_00093524();
          iVar3 = *(int *)((int)register0x00000054 + -0x11c);
          uVar4 = *(uint *)((int)register0x00000054 + -0x118);
          uVar1 = *(uint *)((int)register0x00000054 + -0x114);
          iVar6 = *(int *)((int)register0x00000054 + -0xbc);
        }
        *(uint *)((int)register0x00000054 + -0xbc) = uVar1;
        *(uint *)((int)register0x00000054 + -0xc0) = uVar4;
        *(int *)((int)register0x00000054 + -0x3c) = iVar3;
        *(int *)((int)register0x00000054 + -0x130) = iVar3 + iVar6;
        *(undefined **)((int)register0x00000054 + -300) =
             PTR_s_<defs>_Metadata_send_donesucRepo_0077568d_0xd38_00422344;
        *(undefined4 *)((int)register0x00000054 + -0x128) = 9;
        FUN_00098ec8();
        *(undefined4 *)((int)register0x00000054 + -0x80) =
             *(undefined4 *)((int)register0x00000054 + -0xc0);
        *(undefined4 *)((int)register0x00000054 + -0x7c) =
             *(undefined4 *)((int)register0x00000054 + -0xbc);
        *(undefined4 *)((int)register0x00000054 + -0x84) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        if (*(undefined1 **)((int)register0x00000054 + -0x88) == (undefined1 *)0x0) {
          *(undefined1 **)((int)register0x00000054 + -0x88) =
               (undefined1 *)((int)register0x00000054 + -0x88);
LAB_00421dc0:
          uVar1 = *(uint *)((int)register0x00000054 + -0x7c);
          iVar6 = *(int *)((int)register0x00000054 + -0x80);
          uVar4 = iVar6 + 0x4d;
          iVar3 = *(int *)((int)register0x00000054 + -0x84);
          if (uVar1 < uVar4) {
            *(int *)((int)register0x00000054 + -0xbc) = iVar6;
            *(int *)((int)register0x00000054 + -0x130) = iVar3;
            *(uint *)((int)register0x00000054 + -300) = uVar4;
            *(uint *)((int)register0x00000054 + -0x128) = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x124) = 0x4d;
            *(undefined **)((int)register0x00000054 + -0x120) = PTR_DAT_00422340;
            FUN_00093524();
            iVar3 = *(int *)((int)register0x00000054 + -0x11c);
            uVar4 = *(uint *)((int)register0x00000054 + -0x118);
            uVar1 = *(uint *)((int)register0x00000054 + -0x114);
            iVar6 = *(int *)((int)register0x00000054 + -0xbc);
          }
          *(uint *)((int)register0x00000054 + -0xbc) = uVar1;
          *(uint *)((int)register0x00000054 + -0xc0) = uVar4;
          *(int *)((int)register0x00000054 + -0x3c) = iVar3;
          *(int *)((int)register0x00000054 + -0x130) = iVar3 + iVar6;
          *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_00422348;
          *(undefined4 *)((int)register0x00000054 + -0x128) = 0x4d;
          FUN_00098ec8();
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + -0xc0);
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + -0xbc);
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x3c);
          if (*(undefined1 **)((int)register0x00000054 + -0x88) == (undefined1 *)0x0) {
            *(undefined1 **)((int)register0x00000054 + -0x88) =
                 (undefined1 *)((int)register0x00000054 + -0x88);
LAB_00421e78:
            uVar1 = *(uint *)((int)register0x00000054 + -0x7c);
            iVar6 = *(int *)((int)register0x00000054 + -0x80);
            uVar4 = iVar6 + 0x50;
            iVar3 = *(int *)((int)register0x00000054 + -0x84);
            if (uVar1 < uVar4) {
              *(int *)((int)register0x00000054 + -0xbc) = iVar6;
              *(int *)((int)register0x00000054 + -0x130) = iVar3;
              *(uint *)((int)register0x00000054 + -300) = uVar4;
              *(uint *)((int)register0x00000054 + -0x128) = uVar1;
              *(undefined4 *)((int)register0x00000054 + -0x124) = 0x50;
              *(undefined **)((int)register0x00000054 + -0x120) = PTR_DAT_00422340;
              FUN_00093524();
              iVar3 = *(int *)((int)register0x00000054 + -0x11c);
              uVar4 = *(uint *)((int)register0x00000054 + -0x118);
              uVar1 = *(uint *)((int)register0x00000054 + -0x114);
              iVar6 = *(int *)((int)register0x00000054 + -0xbc);
            }
            *(int *)((int)register0x00000054 + -0x3c) = iVar3;
            *(uint *)((int)register0x00000054 + -0xbc) = uVar4;
            *(uint *)((int)register0x00000054 + -0xc0) = uVar1;
            *(int *)((int)register0x00000054 + -0x130) = iVar3 + iVar6;
            *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_0042234c;
            *(undefined4 *)((int)register0x00000054 + -0x128) = 0x50;
            FUN_00098ec8();
            *(undefined4 *)((int)register0x00000054 + -0x80) =
                 *(undefined4 *)((int)register0x00000054 + -0xbc);
            *(undefined4 *)((int)register0x00000054 + -0x7c) =
                 *(undefined4 *)((int)register0x00000054 + -0xc0);
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            if (*(undefined1 **)((int)register0x00000054 + -0x88) == (undefined1 *)0x0) {
              *(undefined1 **)((int)register0x00000054 + -0x88) =
                   (undefined1 *)((int)register0x00000054 + -0x88);
LAB_00421f30:
              uVar1 = *(uint *)((int)register0x00000054 + -0x7c);
              iVar6 = *(int *)((int)register0x00000054 + -0x80);
              uVar4 = iVar6 + 0x50;
              iVar3 = *(int *)((int)register0x00000054 + -0x84);
              if (uVar1 < uVar4) {
                *(int *)((int)register0x00000054 + -0xbc) = iVar6;
                *(int *)((int)register0x00000054 + -0x130) = iVar3;
                *(uint *)((int)register0x00000054 + -300) = uVar4;
                *(uint *)((int)register0x00000054 + -0x128) = uVar1;
                *(undefined4 *)((int)register0x00000054 + -0x124) = 0x50;
                *(undefined **)((int)register0x00000054 + -0x120) = PTR_DAT_00422340;
                FUN_00093524();
                iVar3 = *(int *)((int)register0x00000054 + -0x11c);
                uVar4 = *(uint *)((int)register0x00000054 + -0x118);
                uVar1 = *(uint *)((int)register0x00000054 + -0x114);
                iVar6 = *(int *)((int)register0x00000054 + -0xbc);
              }
              *(uint *)((int)register0x00000054 + -0xbc) = uVar1;
              *(uint *)((int)register0x00000054 + -0xc0) = uVar4;
              *(int *)((int)register0x00000054 + -0x3c) = iVar3;
              *(int *)((int)register0x00000054 + -0x130) = iVar3 + iVar6;
              *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_00422350;
              *(undefined4 *)((int)register0x00000054 + -0x128) = 0x50;
              FUN_00098ec8();
              *(undefined4 *)((int)register0x00000054 + -0x80) =
                   *(undefined4 *)((int)register0x00000054 + -0xc0);
              *(undefined4 *)((int)register0x00000054 + -0x7c) =
                   *(undefined4 *)((int)register0x00000054 + -0xbc);
              *(undefined4 *)((int)register0x00000054 + -0x84) =
                   *(undefined4 *)((int)register0x00000054 + -0x3c);
              if (*(undefined1 **)((int)register0x00000054 + -0x88) == (undefined1 *)0x0) {
                *(undefined1 **)((int)register0x00000054 + -0x88) =
                     (undefined1 *)((int)register0x00000054 + -0x88);
LAB_00421fe8:
                uVar1 = *(uint *)((int)register0x00000054 + -0x7c);
                iVar6 = *(int *)((int)register0x00000054 + -0x80);
                uVar4 = iVar6 + 0xf;
                iVar3 = *(int *)((int)register0x00000054 + -0x84);
                if (uVar1 < uVar4) {
                  *(int *)((int)register0x00000054 + -0xbc) = iVar6;
                  *(int *)((int)register0x00000054 + -0x130) = iVar3;
                  *(uint *)((int)register0x00000054 + -300) = uVar4;
                  *(uint *)((int)register0x00000054 + -0x128) = uVar1;
                  *(undefined4 *)((int)register0x00000054 + -0x124) = 0xf;
                  *(undefined **)((int)register0x00000054 + -0x120) = PTR_DAT_00422340;
                  FUN_00093524();
                  iVar3 = *(int *)((int)register0x00000054 + -0x11c);
                  uVar4 = *(uint *)((int)register0x00000054 + -0x118);
                  uVar1 = *(uint *)((int)register0x00000054 + -0x114);
                  iVar6 = *(int *)((int)register0x00000054 + -0xbc);
                }
                *(int *)((int)register0x00000054 + -0x3c) = iVar3;
                *(uint *)((int)register0x00000054 + -0xbc) = uVar4;
                *(uint *)((int)register0x00000054 + -0xc0) = uVar1;
                *(int *)((int)register0x00000054 + -0x130) = iVar3 + iVar6;
                *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_00422354;
                *(undefined4 *)((int)register0x00000054 + -0x128) = 0xf;
                FUN_00098ec8();
                *(undefined4 *)((int)register0x00000054 + -0x80) =
                     *(undefined4 *)((int)register0x00000054 + -0xbc);
                *(undefined4 *)((int)register0x00000054 + -0x7c) =
                     *(undefined4 *)((int)register0x00000054 + -0xc0);
                *(undefined4 *)((int)register0x00000054 + -0x84) =
                     *(undefined4 *)((int)register0x00000054 + -0x3c);
                if (*(undefined1 **)((int)register0x00000054 + -0x88) == (undefined1 *)0x0) {
                  *(undefined1 **)((int)register0x00000054 + -0x88) =
                       (undefined1 *)((int)register0x00000054 + -0x88);
LAB_004220a0:
                  uVar1 = *(uint *)((int)register0x00000054 + -0x7c);
                  iVar6 = *(int *)((int)register0x00000054 + -0x80);
                  uVar4 = iVar6 + 10;
                  iVar3 = *(int *)((int)register0x00000054 + -0x84);
                  if (uVar1 < uVar4) {
                    *(int *)((int)register0x00000054 + -0xbc) = iVar6;
                    *(int *)((int)register0x00000054 + -0x130) = iVar3;
                    *(uint *)((int)register0x00000054 + -300) = uVar4;
                    *(uint *)((int)register0x00000054 + -0x128) = uVar1;
                    *(undefined4 *)((int)register0x00000054 + -0x124) = 10;
                    *(undefined **)((int)register0x00000054 + -0x120) = PTR_DAT_00422340;
                    FUN_00093524();
                    iVar3 = *(int *)((int)register0x00000054 + -0x11c);
                    uVar4 = *(uint *)((int)register0x00000054 + -0x118);
                    uVar1 = *(uint *)((int)register0x00000054 + -0x114);
                    iVar6 = *(int *)((int)register0x00000054 + -0xbc);
                  }
                  *(uint *)((int)register0x00000054 + -0xbc) = uVar1;
                  *(uint *)((int)register0x00000054 + -0xc0) = uVar4;
                  *(int *)((int)register0x00000054 + -0x3c) = iVar3;
                  *(int *)((int)register0x00000054 + -0x130) = iVar3 + iVar6;
                  *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_00422358;
                  *(undefined4 *)((int)register0x00000054 + -0x128) = 10;
                  FUN_00098ec8();
                  *(undefined4 *)((int)register0x00000054 + -0x80) =
                       *(undefined4 *)((int)register0x00000054 + -0xc0);
                  *(undefined4 *)((int)register0x00000054 + -0x7c) =
                       *(undefined4 *)((int)register0x00000054 + -0xbc);
                  *(undefined4 *)((int)register0x00000054 + -0x84) =
                       *(undefined4 *)((int)register0x00000054 + -0x3c);
                  iVar6 = *(int *)((int)register0x00000054 + 4);
                  iVar3 = *(int *)((int)register0x00000054 + 8);
                  do {
                    if (iVar3 < 1) {
                      if (*(undefined1 **)((int)register0x00000054 + -0x88) == (undefined1 *)0x0) {
                        *(undefined1 **)((int)register0x00000054 + -0x88) =
                             (undefined1 *)((int)register0x00000054 + -0x88);
                      }
                      else if (*(undefined1 **)((int)register0x00000054 + -0x88) !=
                               (undefined1 *)((int)register0x00000054 + -0x88)) goto LAB_00422634;
                      uVar1 = *(uint *)((int)register0x00000054 + -0x7c);
                      iVar6 = *(int *)((int)register0x00000054 + -0x80);
                      uVar4 = iVar6 + 6;
                      iVar3 = *(int *)((int)register0x00000054 + -0x84);
                      if (uVar1 < uVar4) {
                        *(int *)((int)register0x00000054 + -0xbc) = iVar6;
                        *(int *)((int)register0x00000054 + -0x130) = iVar3;
                        *(uint *)((int)register0x00000054 + -300) = uVar4;
                        *(uint *)((int)register0x00000054 + -0x128) = uVar1;
                        *(undefined4 *)((int)register0x00000054 + -0x124) = 6;
                        *(undefined **)((int)register0x00000054 + -0x120) = PTR_DAT_0042299c;
                        FUN_00093524();
                        iVar3 = *(int *)((int)register0x00000054 + -0x11c);
                        uVar4 = *(uint *)((int)register0x00000054 + -0x118);
                        uVar1 = *(uint *)((int)register0x00000054 + -0x114);
                        iVar6 = *(int *)((int)register0x00000054 + -0xbc);
                      }
                      *(uint *)((int)register0x00000054 + -0xbc) = uVar1;
                      *(uint *)((int)register0x00000054 + -0xc0) = uVar4;
                      *(int *)((int)register0x00000054 + -0x3c) = iVar3;
                      *(int *)((int)register0x00000054 + -0x130) = iVar3 + iVar6;
                      *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_004229a4;
                      *(undefined4 *)((int)register0x00000054 + -0x128) = 6;
                      FUN_00098ec8();
                      uVar1 = *(uint *)((int)register0x00000054 + -0xc0);
                      *(uint *)((int)register0x00000054 + -0x80) = uVar1;
                      *(undefined4 *)((int)register0x00000054 + -0x7c) =
                           *(undefined4 *)((int)register0x00000054 + -0xbc);
                      iVar6 = *(int *)((int)register0x00000054 + -0x3c);
                      *(int *)((int)register0x00000054 + -0x84) = iVar6;
                      if (uVar1 <= (uint)-iVar6) {
                        *(int *)((int)register0x00000054 + 0x30) = iVar6;
                        *(uint *)((int)register0x00000054 + 0x34) = uVar1;
                        return;
                      }
                      if (iVar6 != 0) {
                        FUN_00085954();
                      }
                      FUN_00085994();
LAB_00422634:
                      *(undefined **)((int)register0x00000054 + -0x130) = PTR_SUB_004229a8;
                      *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_004229ac;
                      FUN_00090814();
                      iVar6 = extraout_r1;
                      goto LAB_00422648;
                    }
                    *(int *)((int)register0x00000054 + -0xbc) = iVar3;
                    *(int *)((int)register0x00000054 + -0x40) = iVar6;
                    FUN_00098df4(iVar6,iVar6,(undefined1 *)((int)register0x00000054 + -0x68));
                    *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
                    *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
                    *(undefined4 *)((int)register0x00000054 + -0x130) =
                         *(undefined4 *)((int)register0x00000054 + -0x68);
                    *(undefined4 *)((int)register0x00000054 + -300) =
                         *(undefined4 *)((int)register0x00000054 + -100);
                    FUN_0008a578();
                    *(undefined **)((int)register0x00000054 + -0x28) = PTR_SUB_00422360;
                    *(undefined4 *)((int)register0x00000054 + -0x24) =
                         *(undefined4 *)((int)register0x00000054 + -0x128);
                    *(undefined **)((int)register0x00000054 + -0x130) = PTR_DAT_00422364;
                    *(undefined4 *)((int)register0x00000054 + -300) = 0x27;
                    *(undefined1 **)((int)register0x00000054 + -0x128) =
                         (undefined1 *)((int)register0x00000054 + -0x28);
                    *(undefined4 *)((int)register0x00000054 + -0x124) = 1;
                    *(undefined4 *)((int)register0x00000054 + -0x120) = 1;
                    FUN_001331ac();
                    uVar5 = *(undefined4 *)((int)register0x00000054 + -0x11c);
                    iVar6 = *(int *)((int)register0x00000054 + -0x118);
                    if (*(undefined1 **)((int)register0x00000054 + -0x88) == (undefined1 *)0x0) {
                      *(undefined1 **)((int)register0x00000054 + -0x88) =
                           (undefined1 *)((int)register0x00000054 + -0x88);
                    }
                    else {
                      uVar9 = *(undefined1 **)((int)register0x00000054 + -0x88) ==
                              (undefined1 *)((int)register0x00000054 + -0x88);
                      if (!(bool)uVar9) goto LAB_004228e8;
                    }
                    uVar1 = *(uint *)((int)register0x00000054 + -0x7c);
                    iVar3 = *(int *)((int)register0x00000054 + -0x80);
                    uVar4 = iVar6 + iVar3;
                    iVar7 = *(int *)((int)register0x00000054 + -0x84);
                    if (uVar1 < uVar4) {
                      *(int *)((int)register0x00000054 + -0xc0) = iVar3;
                      *(int *)((int)register0x00000054 + -0xdc) = iVar6;
                      *(undefined4 *)((int)register0x00000054 + -0x70) = uVar5;
                      *(int *)((int)register0x00000054 + -0x130) = iVar7;
                      *(uint *)((int)register0x00000054 + -300) = uVar4;
                      *(uint *)((int)register0x00000054 + -0x128) = uVar1;
                      *(int *)((int)register0x00000054 + -0x124) = iVar6;
                      *(undefined **)((int)register0x00000054 + -0x120) = PTR_DAT_00422340;
                      FUN_00093524();
                      iVar7 = *(int *)((int)register0x00000054 + -0x11c);
                      uVar4 = *(uint *)((int)register0x00000054 + -0x118);
                      uVar1 = *(uint *)((int)register0x00000054 + -0x114);
                      iVar3 = *(int *)((int)register0x00000054 + -0xc0);
                      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x70);
                      iVar6 = *(int *)((int)register0x00000054 + -0xdc);
                    }
                    *(int *)((int)register0x00000054 + -0x3c) = iVar7;
                    *(uint *)((int)register0x00000054 + -0xc0) = uVar1;
                    *(uint *)((int)register0x00000054 + -0xc4) = uVar4;
                    *(int *)((int)register0x00000054 + -0x130) = iVar7 + iVar3;
                    *(undefined4 *)((int)register0x00000054 + -300) = uVar5;
                    *(int *)((int)register0x00000054 + -0x128) = iVar6;
                    FUN_00098ec8();
                    *(undefined4 *)((int)register0x00000054 + -0x80) =
                         *(undefined4 *)((int)register0x00000054 + -0xc4);
                    *(undefined4 *)((int)register0x00000054 + -0x7c) =
                         *(undefined4 *)((int)register0x00000054 + -0xc0);
                    *(undefined4 *)((int)register0x00000054 + -0x84) =
                         *(undefined4 *)((int)register0x00000054 + -0x3c);
                    *(undefined1 **)((int)register0x00000054 + -0x130) =
                         (undefined1 *)((int)register0x00000054 + -0x10c);
                    *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_00422368;
                    *(undefined4 *)((int)register0x00000054 + -0x128) = 0x12;
                    *(undefined4 *)((int)register0x00000054 + -0x124) =
                         *(undefined4 *)((int)register0x00000054 + -0x68);
                    *(undefined4 *)((int)register0x00000054 + -0x120) =
                         *(undefined4 *)((int)register0x00000054 + -100);
                    *(undefined **)((int)register0x00000054 + -0x11c) =
                         PTR_s___d__M_<_g>_WPA2PSKgetListbw_sto_00774847_0x610_0042236c;
                    *(undefined4 *)((int)register0x00000054 + -0x118) = 7;
                    FUN_00071620();
                    uVar5 = *(undefined4 *)((int)register0x00000054 + -0x114);
                    iVar6 = *(int *)((int)register0x00000054 + -0x110);
                    if (*(undefined1 **)((int)register0x00000054 + -0x88) == (undefined1 *)0x0) {
                      *(undefined1 **)((int)register0x00000054 + -0x88) =
                           (undefined1 *)((int)register0x00000054 + -0x88);
                    }
                    else {
                      uVar9 = *(undefined1 **)((int)register0x00000054 + -0x88) ==
                              (undefined1 *)((int)register0x00000054 + -0x88);
                      if (!(bool)uVar9) goto LAB_004228d4;
                    }
                    uVar1 = *(uint *)((int)register0x00000054 + -0x7c);
                    iVar3 = *(int *)((int)register0x00000054 + -0x80);
                    uVar4 = iVar6 + iVar3;
                    iVar7 = *(int *)((int)register0x00000054 + -0x84);
                    if (uVar1 < uVar4) {
                      *(int *)((int)register0x00000054 + -0xe0) = iVar6;
                      *(undefined4 *)((int)register0x00000054 + -0x74) = uVar5;
                      *(int *)((int)register0x00000054 + -0xc0) = iVar3;
                      *(int *)((int)register0x00000054 + -0x130) = iVar7;
                      *(uint *)((int)register0x00000054 + -300) = uVar4;
                      *(uint *)((int)register0x00000054 + -0x128) = uVar1;
                      *(int *)((int)register0x00000054 + -0x124) = iVar6;
                      *(undefined **)((int)register0x00000054 + -0x120) = PTR_DAT_0042299c;
                      FUN_00093524();
                      iVar7 = *(int *)((int)register0x00000054 + -0x11c);
                      uVar4 = *(uint *)((int)register0x00000054 + -0x118);
                      uVar1 = *(uint *)((int)register0x00000054 + -0x114);
                      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x74);
                      iVar6 = *(int *)((int)register0x00000054 + -0xe0);
                      iVar3 = *(int *)((int)register0x00000054 + -0xc0);
                    }
                    *(uint *)((int)register0x00000054 + -0xc0) = uVar1;
                    *(uint *)((int)register0x00000054 + -0xc4) = uVar4;
                    *(int *)((int)register0x00000054 + -0x3c) = iVar7;
                    *(int *)((int)register0x00000054 + -0x130) = iVar7 + iVar3;
                    *(undefined4 *)((int)register0x00000054 + -300) = uVar5;
                    *(int *)((int)register0x00000054 + -0x128) = iVar6;
                    FUN_00098ec8();
                    *(undefined4 *)((int)register0x00000054 + -0x80) =
                         *(undefined4 *)((int)register0x00000054 + -0xc4);
                    *(undefined4 *)((int)register0x00000054 + -0x7c) =
                         *(undefined4 *)((int)register0x00000054 + -0xc0);
                    *(undefined4 *)((int)register0x00000054 + -0x84) =
                         *(undefined4 *)((int)register0x00000054 + -0x3c);
                    pdVar2 = *(double **)((int)register0x00000054 + -0x50);
                    iVar3 = *(int *)((int)register0x00000054 + -0x4c);
                    *(int *)((int)register0x00000054 + -0xc0) = iVar3;
                    for (iVar6 = 0; iVar6 < iVar3; iVar6 = iVar6 + 1) {
                      *(int *)((int)register0x00000054 + -0xd4) = iVar6;
                      *(double **)((int)register0x00000054 + -0x44) = pdVar2;
                      dVar10 = *pdVar2;
                      *(double *)((int)register0x00000054 + -0xec) =
                           (*(double *)((int)register0x00000054 + 0x18) - pdVar2[1]) *
                           *(double *)((int)register0x00000054 + -0xd0);
                      uVar5 = FUN_00098a28(SUB84(dVar10 * *(double *)
                                                           ((int)register0x00000054 + -0xd0),0),0,
                                           (undefined1 *)((int)register0x00000054 + -0x38));
                      *(ulonglong *)((int)register0x00000054 + -0xb0) = CONCAT44(extraout_s1,uVar5);
                      *(undefined4 *)((int)register0x00000054 + -0x130) =
                           *(undefined4 *)((int)register0x00000054 + -0xb0);
                      *(undefined4 *)((int)register0x00000054 + -300) =
                           *(undefined4 *)((int)register0x00000054 + -0xac);
                      FUN_0008a4bc();
                      *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004229b0;
                      *(undefined4 *)((int)register0x00000054 + -0x34) =
                           *(undefined4 *)((int)register0x00000054 + -0x128);
                      *(undefined8 *)((int)register0x00000054 + -0xb8) =
                           *(undefined8 *)((int)register0x00000054 + -0xec);
                      *(undefined4 *)((int)register0x00000054 + -0x130) =
                           *(undefined4 *)((int)register0x00000054 + -0xb8);
                      *(undefined4 *)((int)register0x00000054 + -300) =
                           *(undefined4 *)((int)register0x00000054 + -0xb4);
                      FUN_0008a4bc();
                      *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004229b0;
                      *(undefined4 *)((int)register0x00000054 + -0x2c) =
                           *(undefined4 *)((int)register0x00000054 + -0x128);
                      *(undefined **)((int)register0x00000054 + -0x130) =
                           PTR_s__f__f65_12noncetoken_info_ctrlEC_00773bd2_0x365_004229b4;
                      *(undefined4 *)((int)register0x00000054 + -300) = 5;
                      *(undefined1 **)((int)register0x00000054 + -0x128) =
                           (undefined1 *)((int)register0x00000054 + -0x38);
                      *(undefined4 *)((int)register0x00000054 + -0x124) = 2;
                      *(undefined4 *)((int)register0x00000054 + -0x120) = 2;
                      FUN_001331ac();
                      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x11c);
                      iVar6 = *(int *)((int)register0x00000054 + -0x118);
                      if (*(undefined1 **)((int)register0x00000054 + -0x88) == (undefined1 *)0x0) {
                        *(undefined1 **)((int)register0x00000054 + -0x88) =
                             (undefined1 *)((int)register0x00000054 + -0x88);
                      }
                      else {
                        uVar9 = *(undefined1 **)((int)register0x00000054 + -0x88) ==
                                (undefined1 *)((int)register0x00000054 + -0x88);
                        if (!(bool)uVar9) goto LAB_004228c0;
                      }
                      uVar1 = *(uint *)((int)register0x00000054 + -0x7c);
                      iVar3 = *(int *)((int)register0x00000054 + -0x80);
                      uVar4 = iVar3 + iVar6;
                      iVar7 = *(int *)((int)register0x00000054 + -0x84);
                      if (uVar1 < uVar4) {
                        *(undefined4 *)((int)register0x00000054 + -0x78) = uVar5;
                        *(int *)((int)register0x00000054 + -0xe4) = iVar6;
                        *(int *)((int)register0x00000054 + -0xc4) = iVar3;
                        *(int *)((int)register0x00000054 + -0x130) = iVar7;
                        *(uint *)((int)register0x00000054 + -300) = uVar4;
                        *(uint *)((int)register0x00000054 + -0x128) = uVar1;
                        *(int *)((int)register0x00000054 + -0x124) = iVar6;
                        *(undefined **)((int)register0x00000054 + -0x120) = PTR_DAT_0042299c;
                        FUN_00093524();
                        iVar7 = *(int *)((int)register0x00000054 + -0x11c);
                        uVar4 = *(uint *)((int)register0x00000054 + -0x118);
                        uVar1 = *(uint *)((int)register0x00000054 + -0x114);
                        iVar3 = *(int *)((int)register0x00000054 + -0xc4);
                        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x78);
                        iVar6 = *(int *)((int)register0x00000054 + -0xe4);
                      }
                      *(uint *)((int)register0x00000054 + -0xc4) = uVar1;
                      *(uint *)((int)register0x00000054 + -200) = uVar4;
                      *(int *)((int)register0x00000054 + -0x3c) = iVar7;
                      *(int *)((int)register0x00000054 + -0x130) = iVar7 + iVar3;
                      *(undefined4 *)((int)register0x00000054 + -300) = uVar5;
                      *(int *)((int)register0x00000054 + -0x128) = iVar6;
                      FUN_00098ec8();
                      *(undefined4 *)((int)register0x00000054 + -0x80) =
                           *(undefined4 *)((int)register0x00000054 + -200);
                      *(undefined4 *)((int)register0x00000054 + -0x7c) =
                           *(undefined4 *)((int)register0x00000054 + -0xc4);
                      *(undefined4 *)((int)register0x00000054 + -0x84) =
                           *(undefined4 *)((int)register0x00000054 + -0x3c);
                      iVar6 = *(int *)((int)register0x00000054 + -0xd4);
                      if (iVar6 < *(int *)((int)register0x00000054 + -0x4c) + -1) {
                        if (*(undefined1 **)((int)register0x00000054 + -0x88) == (undefined1 *)0x0)
                        {
                          *(undefined1 **)((int)register0x00000054 + -0x88) =
                               (undefined1 *)((int)register0x00000054 + -0x88);
                        }
                        else {
                          uVar9 = *(undefined1 **)((int)register0x00000054 + -0x88) ==
                                  (undefined1 *)((int)register0x00000054 + -0x88);
                          if (!(bool)uVar9) goto LAB_004228ac;
                        }
                        iVar3 = *(int *)((int)register0x00000054 + -0x80);
                        uVar1 = iVar3 + 3;
                        uVar4 = *(uint *)((int)register0x00000054 + -0x7c);
                        iVar7 = *(int *)((int)register0x00000054 + -0x84);
                        if (uVar4 < uVar1) {
                          *(int *)((int)register0x00000054 + -0xc4) = iVar3;
                          *(int *)((int)register0x00000054 + -0x130) = iVar7;
                          *(uint *)((int)register0x00000054 + -300) = uVar1;
                          *(uint *)((int)register0x00000054 + -0x128) = uVar4;
                          *(undefined4 *)((int)register0x00000054 + -0x124) = 3;
                          *(undefined **)((int)register0x00000054 + -0x120) = PTR_DAT_0042299c;
                          FUN_00093524();
                          iVar7 = *(int *)((int)register0x00000054 + -0x11c);
                          uVar1 = *(uint *)((int)register0x00000054 + -0x118);
                          uVar4 = *(uint *)((int)register0x00000054 + -0x114);
                          iVar6 = *(int *)((int)register0x00000054 + -0xd4);
                          iVar3 = *(int *)((int)register0x00000054 + -0xc4);
                        }
                        *(undefined1 *)(iVar7 + iVar3) = 0x20;
                        *(undefined1 *)(iVar7 + iVar3 + 1) = 0x4c;
                        *(undefined1 *)(iVar7 + iVar3 + 2) = 0x20;
                        *(uint *)((int)register0x00000054 + -0x80) = uVar1;
                        *(uint *)((int)register0x00000054 + -0x7c) = uVar4;
                        *(int *)((int)register0x00000054 + -0x84) = iVar7;
                      }
LAB_00422648:
                      pdVar2 = (double *)(*(int *)((int)register0x00000054 + -0x44) + 0x10);
                      iVar3 = *(int *)((int)register0x00000054 + -0xc0);
                    }
                    if (*(undefined1 **)((int)register0x00000054 + -0x88) == (undefined1 *)0x0) {
                      *(undefined1 **)((int)register0x00000054 + -0x88) =
                           (undefined1 *)((int)register0x00000054 + -0x88);
                    }
                    else {
                      uVar9 = *(undefined1 **)((int)register0x00000054 + -0x88) ==
                              (undefined1 *)((int)register0x00000054 + -0x88);
                      if (!(bool)uVar9) goto LAB_00422898;
                    }
                    uVar1 = *(uint *)((int)register0x00000054 + -0x7c);
                    iVar6 = *(int *)((int)register0x00000054 + -0x80);
                    uVar4 = iVar6 + 0x3b;
                    iVar3 = *(int *)((int)register0x00000054 + -0x84);
                    if (uVar1 < uVar4) {
                      *(int *)((int)register0x00000054 + -0xc0) = iVar6;
                      *(int *)((int)register0x00000054 + -0x130) = iVar3;
                      *(uint *)((int)register0x00000054 + -300) = uVar4;
                      *(uint *)((int)register0x00000054 + -0x128) = uVar1;
                      *(undefined4 *)((int)register0x00000054 + -0x124) = 0x3b;
                      *(undefined **)((int)register0x00000054 + -0x120) = PTR_DAT_0042299c;
                      FUN_00093524();
                      iVar3 = *(int *)((int)register0x00000054 + -0x11c);
                      uVar4 = *(uint *)((int)register0x00000054 + -0x118);
                      uVar1 = *(uint *)((int)register0x00000054 + -0x114);
                      iVar6 = *(int *)((int)register0x00000054 + -0xc0);
                    }
                    *(uint *)((int)register0x00000054 + -0xc0) = uVar1;
                    *(uint *)((int)register0x00000054 + -0xc4) = uVar4;
                    *(int *)((int)register0x00000054 + -0x3c) = iVar3;
                    *(int *)((int)register0x00000054 + -0x130) = iVar3 + iVar6;
                    *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_004229a0;
                    *(undefined4 *)((int)register0x00000054 + -0x128) = 0x3b;
                    FUN_00098ec8();
                    *(undefined4 *)((int)register0x00000054 + -0x80) =
                         *(undefined4 *)((int)register0x00000054 + -0xc4);
                    *(undefined4 *)((int)register0x00000054 + -0x7c) =
                         *(undefined4 *)((int)register0x00000054 + -0xc0);
                    *(undefined4 *)((int)register0x00000054 + -0x84) =
                         *(undefined4 *)((int)register0x00000054 + -0x3c);
                    if (*(undefined1 **)((int)register0x00000054 + -0x88) == (undefined1 *)0x0) {
                      *(undefined1 **)((int)register0x00000054 + -0x88) =
                           (undefined1 *)((int)register0x00000054 + -0x88);
                    }
                    else {
                      uVar9 = *(undefined1 **)((int)register0x00000054 + -0x88) ==
                              (undefined1 *)((int)register0x00000054 + -0x88);
                      if (!(bool)uVar9) goto LAB_00422884;
                    }
                    uVar1 = *(uint *)((int)register0x00000054 + -0x7c);
                    iVar6 = *(int *)((int)register0x00000054 + -0x80);
                    uVar4 = iVar6 + 7;
                    iVar3 = *(int *)((int)register0x00000054 + -0x84);
                    if (uVar1 < uVar4) {
                      *(int *)((int)register0x00000054 + -0xc0) = iVar6;
                      *(int *)((int)register0x00000054 + -0x130) = iVar3;
                      *(uint *)((int)register0x00000054 + -300) = uVar4;
                      *(uint *)((int)register0x00000054 + -0x128) = uVar1;
                      *(undefined4 *)((int)register0x00000054 + -0x124) = 7;
                      *(undefined **)((int)register0x00000054 + -0x120) = PTR_DAT_0042299c;
                      FUN_00093524();
                      iVar3 = *(int *)((int)register0x00000054 + -0x11c);
                      uVar4 = *(uint *)((int)register0x00000054 + -0x118);
                      uVar1 = *(uint *)((int)register0x00000054 + -0x114);
                      iVar6 = *(int *)((int)register0x00000054 + -0xc0);
                    }
                    *(uint *)((int)register0x00000054 + -0xc0) = uVar1;
                    *(int *)((int)register0x00000054 + -0x3c) = iVar3;
                    *(uint *)((int)register0x00000054 + -0xc4) = uVar4;
                    *(int *)((int)register0x00000054 + -0x130) = iVar3 + iVar6;
                    *(undefined **)((int)register0x00000054 + -300) =
                         PTR_s_<_g>_WPA2PSKgetListbw_stop0_0_0__00774847_0x617_0042235c;
                    *(undefined4 *)((int)register0x00000054 + -0x128) = 7;
                    FUN_00098ec8();
                    *(undefined4 *)((int)register0x00000054 + -0x80) =
                         *(undefined4 *)((int)register0x00000054 + -0xc4);
                    *(undefined4 *)((int)register0x00000054 + -0x7c) =
                         *(undefined4 *)((int)register0x00000054 + -0xc0);
                    *(undefined4 *)((int)register0x00000054 + -0x84) =
                         *(undefined4 *)((int)register0x00000054 + -0x3c);
                    *(undefined4 *)((int)register0x00000054 + -0x130) = 1000;
                    *(undefined4 *)((int)register0x00000054 + -300) = 0;
                    FUN_000953d0();
                    iVar6 = *(int *)((int)register0x00000054 + -0x40) + 0x24;
                    iVar3 = *(int *)((int)register0x00000054 + -0xbc) + -1;
                  } while( true );
                }
                if (*(undefined1 **)((int)register0x00000054 + -0x88) ==
                    (undefined1 *)((int)register0x00000054 + -0x88)) goto LAB_004220a0;
                uVar9 = 0;
                goto LAB_004228fc;
              }
              if (*(undefined1 **)((int)register0x00000054 + -0x88) ==
                  (undefined1 *)((int)register0x00000054 + -0x88)) goto LAB_00421fe8;
              uVar9 = 0;
              goto LAB_00422910;
            }
            if (*(undefined1 **)((int)register0x00000054 + -0x88) ==
                (undefined1 *)((int)register0x00000054 + -0x88)) goto LAB_00421f30;
            uVar9 = 0;
            goto LAB_00422924;
          }
          if (*(undefined1 **)((int)register0x00000054 + -0x88) ==
              (undefined1 *)((int)register0x00000054 + -0x88)) goto LAB_00421e78;
          uVar9 = 0;
          goto LAB_00422938;
        }
        if (*(undefined1 **)((int)register0x00000054 + -0x88) ==
            (undefined1 *)((int)register0x00000054 + -0x88)) goto LAB_00421dc0;
        uVar9 = 0;
        goto LAB_0042294c;
      }
      if (*(undefined1 **)((int)register0x00000054 + -0x88) ==
          (undefined1 *)((int)register0x00000054 + -0x88)) goto LAB_00421d08;
      uVar9 = 0;
      goto LAB_00422960;
    }
    if (*(undefined1 **)((int)register0x00000054 + -0x88) ==
        (undefined1 *)((int)register0x00000054 + -0x88)) goto LAB_00421c48;
    uVar9 = 0;
    goto LAB_00422974;
  }
  goto LAB_0042298c;
LAB_00422884:
  *(undefined **)((int)register0x00000054 + -0x130) = PTR_SUB_004229a8;
  *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_004229b8;
  FUN_00090814();
LAB_00422898:
  *(undefined **)((int)register0x00000054 + -0x130) = PTR_SUB_004229a8;
  *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_004229bc;
  FUN_00090814();
LAB_004228ac:
  *(undefined **)((int)register0x00000054 + -0x130) = PTR_SUB_004229a8;
  *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_004229c0;
  FUN_00090814();
LAB_004228c0:
  *(undefined **)((int)register0x00000054 + -0x130) = PTR_SUB_004229a8;
  *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_004229c4;
  FUN_00090814();
LAB_004228d4:
  *(undefined **)((int)register0x00000054 + -0x130) = PTR_SUB_004229a8;
  *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_004229c8;
  FUN_00090814();
LAB_004228e8:
  *(undefined **)((int)register0x00000054 + -0x130) = PTR_SUB_004229a8;
  *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_004229cc;
  FUN_00090814();
LAB_004228fc:
  *(undefined **)((int)register0x00000054 + -0x130) = PTR_SUB_004229a8;
  *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_004229d0;
  FUN_00090814();
LAB_00422910:
  *(undefined **)((int)register0x00000054 + -0x130) = PTR_SUB_004229a8;
  *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_004229d4;
  FUN_00090814();
LAB_00422924:
  *(undefined **)((int)register0x00000054 + -0x130) = PTR_SUB_004229a8;
  *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_004229d8;
  FUN_00090814();
LAB_00422938:
  *(undefined **)((int)register0x00000054 + -0x130) = PTR_SUB_004229a8;
  *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_004229dc;
  FUN_00090814();
LAB_0042294c:
  *(undefined **)((int)register0x00000054 + -0x130) = PTR_SUB_004229a8;
  *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_004229e0;
  FUN_00090814();
LAB_00422960:
  *(undefined **)((int)register0x00000054 + -0x130) = PTR_SUB_004229a8;
  *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_004229e4;
  FUN_00090814();
LAB_00422974:
  *(undefined **)((int)register0x00000054 + -0x130) = PTR_SUB_004229a8;
  *(undefined **)((int)register0x00000054 + -300) = PTR_DAT_004229e8;
  param_1 = FUN_00090814();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x134);
  if ((bool)uVar9) {
    register0x00000054 = (BADSPACEBASE *)puVar8;
  }
LAB_0042298c:
  unaff_lr = 0x422994;
  param_1 = FUN_00096bb8(param_1);
  goto code_r0x00421af8;
}



/* printerApi/common/gcode.GetSvgData @ 004229ec (size 276) */

void printerApi_common_gcode_GetSvgData(void)

{
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined *local_18;
  undefined *local_14;
  undefined *local_10;
  undefined *local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00098a20(0,&local_18);
  local_18 = PTR_SUB_00422b04;
  local_14 = PTR_DAT_00422b08;
  FUN_0008a4bc();
  local_10 = PTR_DAT_00422b0c;
  FUN_0008a4bc();
  local_8 = PTR_DAT_00422b0c;
  printerApi_common_logger_Info();
  if (in_stack_00000018 != 0) {
    printerApi_common_gcode_generateSVGPaths();
    return;
  }
  return;
}



