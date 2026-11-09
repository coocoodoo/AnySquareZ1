// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/ini   functions: 12
/* printerApi/common/ini.init @ 004128ac (size 100) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_ini_init(void)

{
  undefined4 extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x41290c;
    FUN_00096bb8();
  }
  FUN_0040c2b0();
  if (*_UNK_00412918 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *_UNK_0041291c;
    uStack_4 = extraout_r1;
  }
  *_UNK_0041291c = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x00412900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/ini.Load @ 00412920 (size 268) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_ini_Load(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  while (puVar2 = in_stack_00000008, uVar1 = in_stack_00000004,
        &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x412a28;
    FUN_00096bb8();
  }
  printerApi_common_ini_parseSource();
  if (iStack_18 != 0) {
    in_stack_0000000c = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00412a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0008b6b8();
  FUN_0001eed8();
  *puVar2 = uStack_20;
  puVar3 = puVar2;
  if (*_UNK_00412a34 != 0) {
    puVar3 = (undefined4 *)FUN_00098688();
    *unaff_r8 = uStack_1c;
    unaff_r8[1] = uVar1;
  }
  puVar3[1] = uStack_1c;
  puVar3[2] = uVar1;
  printerApi_common_ini___File__load();
  if (puVar2 == (undefined4 *)0x0) {
    in_stack_00000010 = (undefined4 *)0x0;
    in_stack_00000014 = 0;
    in_stack_0000000c = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00412a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  in_stack_0000000c = (undefined4 *)0x0;
  in_stack_00000010 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x004129e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/ini.parseSource @ 00412a38 (size 836) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_ini_parseSource(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 *puStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_34;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x412d78;
    FUN_00096bb8();
  }
  if (in_stack_00000004 != (undefined *)0x0) {
    if (*(int *)(in_stack_00000004 + 8) == _UNK_00412d80) {
      if (in_stack_00000004 == _UNK_00412d84) {
        FUN_0012576c();
        if (iStack_34 == 0) {
          in_stack_0000000c = (undefined *)_UNK_00412d88;
          in_stack_00000014 = 0;
          in_stack_00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x00412ae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
        in_stack_0000000c = (undefined *)0x0;
        in_stack_00000010 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00412ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else if ((*(int *)(in_stack_00000004 + 8) == _UNK_00412d8c) &&
            (in_stack_00000004 == PTR_DAT_00412d90)) {
      uVar2 = in_stack_00000008[1];
      uVar3 = in_stack_00000008[2];
      uVar1 = *in_stack_00000008;
      FUN_0001eed8();
      puStack_44[1] = uVar2;
      puStack_44[2] = uVar3;
      if (*(int *)PTR_DAT_00412d98 != 0) {
        puStack_44 = (undefined4 *)FUN_00098678();
        *unaff_r8 = uVar1;
      }
      *puStack_44 = uVar1;
      puStack_44[3] = 0;
      puStack_44[4] = 0;
      puStack_44[5] = 0xffffffff;
      FUN_0001cf8c();
      if (iStack_40 == 0) {
        FUN_0001cd7c();
        in_stack_0000000c = PTR_DAT_00412db4;
      }
      else {
        FUN_0001cd7c();
        in_stack_0000000c = PTR_DAT_00412dac;
      }
      in_stack_00000014 = 0;
      in_stack_00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x00412c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    FUN_0001d060();
    if (iStack_40 == 0) {
      in_stack_00000010 = in_stack_00000008;
      in_stack_00000014 = 0;
      in_stack_00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x00412d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    if (iStack_40 == 1) {
      if (iStack_3c == 0) {
        FUN_0001cd7c();
        in_stack_0000000c = PTR_DAT_00412db4;
      }
      else {
        FUN_0001cf8c();
        FUN_0001cd7c();
        in_stack_0000000c = PTR_DAT_00412dac;
      }
      in_stack_00000014 = 0;
      in_stack_00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x00412cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  FUN_00130144();
  in_stack_0000000c = (undefined *)0x0;
  in_stack_00000010 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00412d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/common/ini.(*File).load @ 00412dc4 (size 1756) */

/* WARNING: Removing unreachable block (ram,0x00413314) */
/* WARNING: Removing unreachable block (ram,0x00413250) */

void printerApi_common_ini___File__load(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *extraout_r1;
  char *extraout_r1_00;
  int *extraout_r1_01;
  char *pcVar6;
  char *extraout_r1_02;
  char extraout_r2;
  char cVar7;
  int *extraout_r2_00;
  int *piVar8;
  int *extraout_r2_01;
  int extraout_r2_02;
  int *piVar9;
  int *extraout_r2_03;
  int *extraout_r3;
  int *extraout_r3_00;
  int *piVar10;
  int *extraout_r3_01;
  int *extraout_r3_02;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar14;
  int *in_stack_00000004;
  undefined *puVar15;
  int *in_stack_ffffff08;
  undefined4 in_stack_ffffff0c;
  int *piVar16;
  int *piVar17;
  int *piStack_f0;
  int *piStack_ec;
  int *piStack_e8;
  int *piStack_e4;
  int *piStack_e0;
  int *piStack_ac;
  int *piStack_84;
  int *piStack_80;
  int *piStack_7c;
  undefined *puStack_78;
  int iStack_74;
  int iStack_70;
  undefined1 auStack_6c [4];
  undefined4 uStack_68;
  undefined4 uStack_64;
  int *piStack_60;
  int iStack_5c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [44];
  undefined *puStack_14;
  int *piStack_10;
  undefined *puStack_c;
  int *piStack_8;
  undefined **ppuStack_4;
  
  while (&piStack_84 <= *(int ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x413ab0;
    FUN_00096bb8();
  }
  ppuStack_4 = (undefined **)0x0;
  iVar12 = in_stack_00000004[1];
  piVar17 = (int *)0x0;
  if (*in_stack_00000004 != 0) {
    piVar17 = in_stack_ffffff08;
    FUN_0001cf8c();
  }
  piVar13 = (int *)PTR_DAT_0041366c;
  piStack_8 = piVar17;
  if ((piVar17 != (int *)PTR_DAT_0041366c) ||
     (piVar13 = *(int **)(iVar12 + 4), (int)piVar13 < 0x1000)) {
    FUN_00098a0c(0,auStack_40,0,0);
    FUN_000933e8();
    uVar2 = FUN_00098a0c(0,auStack_6c,in_stack_ffffff0c);
    uStack_68 = 0x1000;
    uStack_64 = 0x1000;
    piStack_60 = piStack_8;
    uStack_48 = 0xffffffff;
    uStack_44 = 0xffffffff;
    iStack_5c = iVar12;
    FUN_00098de4(uVar2,auStack_6c,auStack_40);
  }
  puVar3 = (undefined4 *)in_stack_00000004[2];
  puVar15 = PTR_DAT_00413674;
  FUN_0008e314();
  piVar17 = (int *)PTR_s_default_tar_gzmessagestreamsloki_00774847_0x20b_00413678;
  if (((uint)piStack_ec & 0xff) == 0) {
    FUN_0008b6b8();
    puStack_c = puVar15;
    FUN_0001eed8();
    uVar14 = CONCAT44(7,puVar3);
    puVar3[1] = 7;
    piVar17 = (int *)PTR_s_default_tar_gzmessagestreamsloki_00774847_0x20b_00413678;
    *puVar3 = PTR_s_default_tar_gzmessagestreamsloki_00774847_0x20b_00413678;
    if (*(int *)PTR_DAT_00413680 != 0) {
      uVar14 = FUN_00098678();
      *piVar13 = (int)puStack_c;
      piVar17 = extraout_r2_00;
    }
    uVar2 = (undefined4)((ulonglong)uVar14 >> 0x20);
    iVar12 = (int)uVar14;
    *(undefined **)(iVar12 + 8) = puStack_c;
    *(undefined4 *)(iVar12 + 0x10) = 0;
    *(undefined4 *)(iVar12 + 0x14) = 0;
    *(undefined **)(iVar12 + 0xc) = PTR_DAT_00413684;
    piVar10 = (int *)in_stack_00000004[2];
    piVar4 = (int *)PTR_DAT_00413674;
    FUN_0008e7bc();
    piVar16 = piStack_f0;
    if (*(int *)PTR_DAT_00413680 != 0) {
      piVar16 = (int *)FUN_00098688();
      *piVar13 = iVar12;
      piVar13[1] = *piVar16;
    }
    *piVar16 = iVar12;
    piVar5 = (int *)in_stack_00000004[5];
    piVar8 = (int *)(in_stack_00000004[4] + 1);
    piVar9 = (int *)in_stack_00000004[3];
    piVar16 = in_stack_00000004;
    if (piVar5 < piVar8) {
      uVar2 = 1;
      piStack_f0 = (int *)PTR_SUB_00413688;
      piVar4 = piVar9;
      piVar10 = piVar8;
      FUN_00093524();
      in_stack_00000004[5] = (int)piStack_e4;
      piVar9 = piStack_ec;
      piVar8 = piStack_e8;
      if (*(int *)PTR_DAT_00413680 != 0) {
        FUN_00098688();
        *piVar13 = (int)extraout_r1;
        piVar13[1] = extraout_r3[3];
        piVar9 = extraout_r1;
        piVar8 = extraout_r2_01;
        piVar16 = extraout_r3;
      }
      piVar16[3] = (int)piVar9;
      piVar17 = piVar5;
    }
    piVar16[4] = (int)piVar8;
    pcVar6 = (char *)((int)piVar8 + -1);
    piVar9[(int)pcVar6 * 2 + 1] = 7;
    if (*(int *)PTR_DAT_00413680 != 0) {
      FUN_00098678(piVar16,pcVar6,piVar9[(int)pcVar6 * 2],piVar9,UNRECOVERED_JUMPTABLE,piVar4,
                   piVar10,piVar17,uVar2);
      *piVar13 = extraout_r2_02;
      pcVar6 = extraout_r1_00;
      piVar9 = extraout_r3_00;
    }
    piVar17 = (int *)PTR_s_default_tar_gzmessagestreamsloki_00774847_0x20b_00413678;
    piVar9[(int)pcVar6 * 2] = (int)PTR_s_default_tar_gzmessagestreamsloki_00774847_0x20b_00413678;
  }
  piVar16 = (int *)&DAT_00000007;
  FUN_00021c74();
  iStack_74 = *in_stack_00000004;
  iStack_70 = in_stack_00000004[1];
  iVar12 = *piStack_f0;
  puStack_78 = PTR_printerApi_common_ini___File__load_deferwrap1_0041368c;
  ppuStack_4 = &puStack_78;
  cVar7 = '\0';
LAB_00413108:
  do {
    do {
      if (cVar7 != '\0') {
        (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00413558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      FUN_00187f60();
      piStack_84 = piVar17;
      if (piStack_f0 == (int *)0x0) {
        uVar11 = 0;
      }
      else if (*(int **)PTR_DAT_00413690 == piStack_f0) {
        piStack_7c = piStack_ec;
        FUN_000169b8();
        uVar11 = (uint)piVar16 & 0xff ^ 1;
      }
      else {
        uVar11 = 1;
      }
      if (uVar11 != 0) {
        (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00413530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (*(int **)PTR_DAT_00413690 == piStack_f0) {
        FUN_000169b8();
        if ((char)piVar16 == '\0') {
          cVar7 = '\0';
        }
        else {
          cVar7 = '\x01';
        }
      }
      else {
        cVar7 = '\0';
      }
LAB_00413594:
      piVar4 = piStack_f0;
      piVar17 = (int *)PTR_DAT_004136a0;
      FUN_001485a0();
    } while (((piStack_f0 == (int *)0x0) || (cVar1 = (char)*piVar16, cVar1 == ';')) ||
            (cVar1 == '#'));
    piStack_84 = piVar16;
    if (cVar1 != '[') {
      piVar17 = (int *)0x2;
      piVar16 = (int *)PTR_DAT_004136a4;
      FUN_00146a1c();
      if (piStack_f0 == (int *)0x0) {
        if (iVar12 != 0) {
          FUN_00071620();
          FUN_00130144();
          (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0041373c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        goto LAB_00413858;
      }
      if (-1 < (int)piStack_f0) break;
      FUN_00146a1c();
      piVar16 = (int *)0x0;
      piStack_f0 = (int *)0x0;
      printerApi_common_ini___Section__NewKey();
      piVar17 = piVar4;
      goto LAB_00413108;
    }
    piVar16 = (int *)0x1;
    piVar17 = (int *)PTR_DAT_0041369c;
    FUN_00146598();
    if (((int)piStack_f0 < 0) || (piStack_f0 == (int *)0x1)) {
      puStack_14 = (undefined *)0x0;
      piStack_10 = (int *)0x0;
      FUN_0008a578();
      puStack_14 = PTR_SUB_00413ac0;
      piStack_10 = piVar17;
      FUN_00130144();
      (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00413844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    if (piStack_f0 == (int *)0x0) {
      FUN_00098758(1,0);
      FUN_00098718();
LAB_00413858:
      FUN_00090814();
      uVar14 = FUN_00098718();
      cVar7 = extraout_r2;
      goto LAB_00413870;
    }
    FUN_00148fb4();
    if (piVar16 == (int *)0x0) {
      puStack_14 = (undefined *)0x0;
      piStack_10 = (int *)0x0;
      FUN_0008a578();
      puStack_14 = PTR_SUB_00413ac0;
      piStack_10 = piVar17;
      FUN_00130144();
      (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x004137c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    puVar3 = (undefined4 *)in_stack_00000004[2];
    puVar15 = PTR_DAT_00413674;
    FUN_0008e314(in_stack_00000004);
    if (((uint)piStack_ec & 0xff) == 0) {
      FUN_0008b6b8();
      puStack_c = puVar15;
      FUN_0001eed8();
      puVar3[1] = piVar16;
      if (*(int *)PTR_DAT_00413680 != 0) {
        puVar3 = (undefined4 *)FUN_00098688();
        *piVar13 = (int)piVar17;
        piVar13[1] = (int)puStack_c;
      }
      *puVar3 = piVar17;
      puVar3[2] = puStack_c;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[3] = PTR_DAT_00413684;
      FUN_0008e7bc();
      if (*(int *)PTR_DAT_00413680 != 0) {
        piVar4 = (int *)FUN_00098688();
        *piVar13 = (int)puVar3;
        piVar13[1] = *piVar4;
      }
      *piVar4 = (int)puVar3;
      piVar9 = (int *)(in_stack_00000004[4] + 1);
      piVar10 = (int *)in_stack_00000004[3];
      piVar4 = in_stack_00000004;
      if ((int *)in_stack_00000004[5] < piVar9) {
        piStack_f0 = (int *)PTR_SUB_00413688;
        FUN_00093524();
        in_stack_00000004[5] = (int)piStack_e4;
        piVar10 = piStack_ec;
        piVar9 = piStack_e8;
        if (*(int *)PTR_DAT_00413680 != 0) {
          FUN_00098688();
          *piVar13 = (int)extraout_r1_01;
          piVar13[1] = extraout_r3_01[3];
          piVar10 = extraout_r1_01;
          piVar9 = extraout_r2_03;
          piVar4 = extraout_r3_01;
        }
        piVar4[3] = (int)piVar10;
      }
      piVar4[4] = (int)piVar9;
      pcVar6 = (char *)((int)piVar9 + -1);
      piVar10[(int)pcVar6 * 2 + 1] = (int)piVar16;
      if (*(int *)PTR_DAT_00413680 != 0) {
        FUN_00098688();
        *piVar13 = (int)piVar17;
        piVar13[1] = extraout_r3_02[(int)extraout_r1_02 * 2];
        pcVar6 = extraout_r1_02;
        piVar10 = extraout_r3_02;
      }
      piVar10[(int)pcVar6 * 2] = (int)piVar17;
    }
    FUN_00021c74();
    iVar12 = *piStack_f0;
  } while( true );
  if (piStack_f0 < (int *)((int)piStack_f0 + 1)) {
    FUN_00098758((int *)((int)piStack_f0 + 1),piStack_f0);
    uVar2 = FUN_00098718();
    FUN_0004fb3c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00413aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  piStack_ac = piStack_f0;
  printerApi_common_ini_readValue();
  uVar14 = CONCAT44(piVar16,piVar17);
  piVar4 = piVar16;
  piVar10 = piVar17;
  if (piVar17 == (int *)0x0) {
    while (uVar14 = CONCAT44(piVar16,piVar17), piVar9 = piVar17, piVar8 = piVar4, piVar5 = piVar10,
          cVar7 == '\0') {
      while( true ) {
        piVar4 = piVar5;
        piVar17 = piVar9;
        FUN_00187f60();
        piVar10 = piVar4;
        piStack_8 = piVar8;
        if (piStack_f0 == (int *)0x0) {
          uVar11 = 0;
        }
        else if (*(int **)PTR_DAT_00413acc == piStack_f0) {
          piStack_80 = piStack_ec;
          FUN_000169b8();
          uVar11 = (uint)piVar10 & 0xff ^ 1;
        }
        else {
          uVar11 = 1;
        }
        if (uVar11 != 0) {
          (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00413a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        if ((*(int **)PTR_DAT_00413acc == piStack_f0) && (FUN_000169b8(), (char)piVar10 != '\0')) {
          cVar7 = '\x01';
        }
        FUN_0040f810();
        if (piStack_f0 != (int *)0x3) {
          printerApi_common_ini___Section__NewKey();
          piStack_f0 = piVar17;
          goto LAB_00413594;
        }
        printerApi_common_ini_readValue();
        if (((piVar10 == (int *)0x0) || ((char)*piVar4 == '#')) || ((char)*piVar4 == ';')) break;
        piVar9 = piVar10;
        piVar16 = piVar4;
        piVar8 = piVar4;
        piVar5 = piVar10;
        if (piVar17 != (int *)0x0) {
          piStack_f0 = (int *)0x1;
          piVar5 = (int *)PTR_DAT_00413ad8;
          FUN_00071620();
          piVar9 = piStack_e0;
          piVar16 = piStack_e4;
          piVar8 = piVar17;
          piStack_ec = piVar4;
          piStack_e8 = piVar10;
        }
      }
    }
  }
LAB_00413870:
  piVar16 = (int *)((ulonglong)uVar14 >> 0x20);
  piStack_f0 = (int *)uVar14;
  piVar17 = piStack_ac;
  printerApi_common_ini___Section__NewKey();
  goto LAB_00413108;
}



/* printerApi/common/ini.(*File).load.deferwrap1 @ 00413adc (size 92) */

void printerApi_common_ini___File__load_deferwrap1(void)

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



/* printerApi/common/ini.readValue @ 00413b38 (size 140) */

void printerApi_common_ini_readValue(undefined4 param_1)

{
  uint uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_00413bc8;
      *(undefined4 *)((int)register0x00000054 + -8) = 2;
      FUN_00146a1c();
      uVar1 = *(uint *)((int)register0x00000054 + -4);
      if ((int)uVar1 < 0) {
        uVar1 = *(uint *)((int)register0x00000054 + 8);
LAB_00413b8c:
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(uint *)((int)register0x00000054 + -0x10) = uVar1;
        FUN_00148fb4();
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -8);
        return;
      }
      bVar3 = *(uint *)((int)register0x00000054 + 8) == uVar1;
      if (uVar1 <= *(uint *)((int)register0x00000054 + 8)) goto LAB_00413b8c;
      param_1 = FUN_00098718();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x413bc0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/ini.(*File).Section @ 00413bcc (size 708) */

/* WARNING: Removing unreachable block (ram,0x00413c84) */

void printerApi_common_ini___File__Section(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  uint extraout_r1;
  int iVar6;
  int extraout_r1_00;
  uint uVar7;
  uint extraout_r2;
  int extraout_r3;
  uint extraout_r3_00;
  uint uVar8;
  uint *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined *in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  uint *local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  puVar2 = in_stack_00000008;
  iVar3 = in_stack_0000000c;
  if (in_stack_0000000c == 0) {
    puVar2 = PTR_s_default_tar_gzmessagestreamsloki_00774847_0x20b_00413e94;
    iVar3 = 7;
  }
  FUN_0008e314();
  if ((char)local_40 == '\0') {
    local_44 = (uint *)&DAT_00000012;
    FUN_000715a4();
    puVar4 = PTR_DAT_00413ea0;
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  puVar1 = PTR_DAT_00413e98;
  if (puVar4 != (undefined *)0x0) {
    puVar5 = *(undefined4 **)(in_stack_00000004 + 8);
    FUN_0008e314(in_stack_00000004);
    if ((local_40 & 0xff) == 0) {
      FUN_0008b6b8();
      FUN_0001eed8();
      puVar5[1] = iVar3;
      if (*(int *)PTR_DAT_00413ea8 != 0) {
        puVar5 = (undefined4 *)FUN_00098688();
        *unaff_r8 = (uint)puVar2;
        unaff_r8[1] = (uint)puVar1;
      }
      *puVar5 = puVar2;
      puVar5[2] = puVar1;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[3] = PTR_DAT_00413eac;
      FUN_0008e7bc();
      if (*(int *)PTR_DAT_00413ea8 != 0) {
        local_44 = (uint *)FUN_00098688();
        *unaff_r8 = (uint)puVar5;
        unaff_r8[1] = *local_44;
      }
      *local_44 = (uint)puVar5;
      uVar7 = *(int *)(in_stack_00000004 + 0x10) + 1;
      iVar6 = in_stack_00000004;
      uVar8 = *(uint *)(in_stack_00000004 + 0xc);
      if (*(uint *)(in_stack_00000004 + 0x14) < uVar7) {
        FUN_00093524();
        *(undefined4 *)(in_stack_00000004 + 0x14) = local_38;
        iVar6 = in_stack_00000004;
        if (*(int *)PTR_DAT_00413ea8 != 0) {
          FUN_00098688();
          *unaff_r8 = extraout_r1;
          unaff_r8[1] = *(uint *)(extraout_r3 + 0xc);
          local_40 = extraout_r1;
          local_3c = extraout_r2;
          iVar6 = extraout_r3;
        }
        *(uint *)(iVar6 + 0xc) = local_40;
        uVar7 = local_3c;
        uVar8 = local_40;
      }
      *(uint *)(iVar6 + 0x10) = uVar7;
      iVar6 = uVar7 - 1;
      *(int *)(uVar8 + iVar6 * 8 + 4) = iVar3;
      if (*(int *)PTR_DAT_00413ea8 != 0) {
        FUN_00098688();
        *unaff_r8 = (uint)puVar2;
        unaff_r8[1] = *(uint *)(extraout_r3_00 + extraout_r1_00 * 8);
        iVar6 = extraout_r1_00;
        uVar8 = extraout_r3_00;
      }
      *(undefined **)(uVar8 + iVar6 * 8) = puVar2;
    }
    FUN_00021c74();
    return;
  }
  return;
}



/* printerApi/common/ini.(*File).DeleteSection @ 00413eb4 (size 776) */

void printerApi_common_ini___File__DeleteSection(void)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int extraout_r2;
  int iVar6;
  int iVar7;
  int extraout_r3;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *unaff_r8;
  int iVar11;
  int unaff_r10;
  int iVar12;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar13;
  int in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  undefined *in_stack_00000010;
  int *in_stack_00000014;
  int *piStack_64;
  int iStack_5c;
  uint uStack_58;
  uint uStack_54;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x4141b8;
    FUN_00096bb8();
  }
  piStack_64 = in_stack_0000000c;
  FUN_0008e314(in_stack_00000004);
  if ((char)iStack_5c == '\0') {
    piStack_64 = (int *)PTR_DAT_004141c4;
    FUN_000715a4();
    puVar1 = PTR_DAT_004141c8;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  piVar2 = in_stack_00000008;
  if (puVar1 != (undefined *)0x0) {
    FUN_000715a4();
    FUN_0001eed8();
    piVar2[1] = uStack_58;
    if (*(int *)PTR_DAT_004141d4 != 0) {
      piVar2 = (int *)FUN_00098678();
      *unaff_r8 = iStack_5c;
    }
    *piVar2 = iStack_5c;
    in_stack_00000010 = PTR_DAT_004141c8;
    in_stack_00000014 = piVar2;
                    /* WARNING: Could not recover jumptable at 0x00414018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uVar4 = *(int *)(in_stack_00000004 + 0x10) - 1;
  FUN_000933e8();
  uVar13 = CONCAT44(in_stack_00000004,piStack_64);
  iVar5 = *(int *)(in_stack_00000004 + 0xc);
  iVar7 = *(int *)(in_stack_00000004 + 0x10);
  iVar9 = 0;
  uVar10 = 0;
  iVar6 = iVar5;
  iVar8 = iVar7;
  piVar2 = in_stack_0000000c;
  do {
    iVar12 = (int)((ulonglong)uVar13 >> 0x20);
    iVar3 = (int)uVar13;
    if (iVar8 <= iVar9) {
      *(uint *)(iVar12 + 0x10) = uVar10;
      *(uint *)(iVar12 + 0x14) = uVar4;
      if (*(int *)PTR_DAT_004141d4 != 0) {
        uVar13 = FUN_00098688();
        *unaff_r8 = (int)uVar13;
        unaff_r8[1] = *(int *)((int)((ulonglong)uVar13 >> 0x20) + 0xc);
      }
      *(int *)((int)((ulonglong)uVar13 >> 0x20) + 0xc) = (int)uVar13;
      FUN_000220dc();
      in_stack_00000010 = (undefined *)0x0;
      in_stack_00000014 = (int *)0x0;
                    /* WARNING: Could not recover jumptable at 0x004141ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    unaff_r8 = *(int **)(iVar6 + iVar9 * 8 + 4);
    iVar11 = *(int *)(iVar6 + iVar9 * 8);
    if (piVar2 == unaff_r8) {
      FUN_000150d4();
      uVar13 = CONCAT44(in_stack_00000004,iVar3);
      iVar12 = in_stack_00000004;
      iVar6 = iVar5;
      iVar8 = iVar7;
      piVar2 = in_stack_0000000c;
      if ((char)piStack_64 == '\0') goto LAB_004140c0;
    }
    else {
LAB_004140c0:
      uVar10 = uVar10 + 1;
      if (uVar4 < uVar10) {
        piStack_64 = (int *)0x1;
        FUN_00093524();
        iVar3 = iStack_5c;
        iVar12 = in_stack_00000004;
        iVar6 = iVar5;
        iVar8 = iVar7;
        piVar2 = in_stack_0000000c;
        uVar4 = uStack_54;
        uVar10 = uStack_58;
      }
      uVar13 = CONCAT44(iVar12,iVar3);
      iVar12 = uVar10 - 1;
      *(int **)(iVar3 + (iVar12 * 2 + 1) * 4) = unaff_r8;
      unaff_r8 = *(int **)PTR_DAT_004141d4;
      if (unaff_r8 != (int *)0x0) {
        uVar13 = FUN_00098688();
        *unaff_r8 = iVar11;
        unaff_r8[1] = *(int *)((int)uVar13 + iVar12 * 8);
        iVar6 = extraout_r2;
        iVar8 = extraout_r3;
      }
      *(int *)((int)uVar13 + iVar12 * 8) = iVar11;
    }
    iVar9 = iVar9 + 1;
  } while( true );
}



/* printerApi/common/ini.(*File).writeToStringBuilder @ 004141d8 (size 3216) */

/* WARNING: Removing unreachable block (ram,0x00414874) */

void printerApi_common_ini___File__writeToStringBuilder(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  uint extraout_r2;
  int extraout_r2_00;
  int iVar7;
  int extraout_r3;
  int extraout_r3_00;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *unaff_r8;
  int unaff_r10;
  uint uVar14;
  undefined1 *puVar15;
  undefined4 unaff_lr;
  undefined1 uVar16;
  undefined8 uVar17;
  
  while ((undefined1 *)((int)register0x00000054 + -0x11c) <= *(undefined1 **)(unaff_r10 + 8)) {
LAB_00414e94:
    unaff_lr = 0x414e9c;
    param_1 = FUN_00096bb8(param_1);
  }
  puVar15 = (undefined1 *)((int)register0x00000054 + -0x19c);
  *(undefined4 *)((int)register0x00000054 + -0x19c) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = 0;
  iVar1 = 0;
  *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
  iVar5 = *(int *)((int)register0x00000054 + 4);
  iVar6 = *(int *)(iVar5 + 0xc);
  *(int *)((int)register0x00000054 + -4) = iVar6;
  iVar7 = *(int *)(iVar5 + 0x10);
  *(int *)((int)register0x00000054 + -0x5c) = iVar7;
  while( true ) {
    if (iVar7 <= iVar1) {
      *(undefined4 *)((int)register0x00000054 + 8) =
           *(undefined4 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + 0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + 0x10) =
           *(undefined4 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + 0x14) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
                    /* WARNING: Could not recover jumptable at 0x0041453c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((int)register0x00000054 + -0x19c))();
      return;
    }
    *(int *)((int)register0x00000054 + -0x74) = iVar1;
    uVar12 = *(undefined4 *)(iVar6 + iVar1 * 8);
    *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar12;
    uVar8 = *(undefined4 *)(iVar6 + iVar1 * 8 + 4);
    *(undefined4 *)((int)register0x00000054 + -0x80) = uVar8;
    if (0 < iVar1) {
      iVar1 = *(int *)PTR_DAT_00414aac;
      unaff_r8 = *(undefined4 **)PTR_DAT_00414ab0;
      if (*(undefined1 **)((int)register0x00000054 + -0x20) == (undefined1 *)0x0) {
        *(undefined1 **)((int)register0x00000054 + -0x20) =
             (undefined1 *)((int)register0x00000054 + -0x20);
      }
      else {
        uVar16 = *(undefined1 **)((int)register0x00000054 + -0x20) ==
                 (undefined1 *)((int)register0x00000054 + -0x20);
        if (!(bool)uVar16) goto LAB_00414e7c;
      }
      uVar13 = *(uint *)((int)register0x00000054 + -0x14);
      iVar5 = *(int *)((int)register0x00000054 + -0x18);
      uVar14 = iVar5 + iVar1;
      iVar6 = *(int *)((int)register0x00000054 + -0x1c);
      if (uVar13 < uVar14) {
        *(int *)((int)register0x00000054 + -0x84) = iVar1;
        *(undefined4 **)((int)register0x00000054 + -0x30) = unaff_r8;
        *(int *)((int)register0x00000054 + -0x60) = iVar5;
        *(int *)((int)register0x00000054 + -0x198) = iVar6;
        *(uint *)((int)register0x00000054 + -0x194) = uVar14;
        *(uint *)((int)register0x00000054 + -400) = uVar13;
        *(int *)((int)register0x00000054 + -0x18c) = iVar1;
        *(undefined **)((int)register0x00000054 + -0x188) = PTR_DAT_00414ab4;
        FUN_00093524();
        iVar6 = *(int *)((int)register0x00000054 + -0x184);
        uVar14 = *(uint *)((int)register0x00000054 + -0x180);
        uVar13 = *(uint *)((int)register0x00000054 + -0x17c);
        iVar1 = *(int *)((int)register0x00000054 + -0x84);
        unaff_r8 = *(undefined4 **)((int)register0x00000054 + -0x30);
        iVar5 = *(int *)((int)register0x00000054 + -0x60);
      }
      *(int *)((int)register0x00000054 + -8) = iVar6;
      *(uint *)((int)register0x00000054 + -0x60) = uVar13;
      *(uint *)((int)register0x00000054 + -100) = uVar14;
      *(int *)((int)register0x00000054 + -0x198) = iVar6 + iVar5;
      *(undefined4 **)((int)register0x00000054 + -0x194) = unaff_r8;
      *(int *)((int)register0x00000054 + -400) = iVar1;
      FUN_00098ec8();
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + -100);
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + -8);
      iVar5 = *(int *)((int)register0x00000054 + 4);
      uVar8 = *(undefined4 *)((int)register0x00000054 + -0x80);
      uVar12 = *(undefined4 *)((int)register0x00000054 + -0x2c);
    }
    uVar2 = *(undefined4 *)(iVar5 + 8);
    *(undefined **)((int)register0x00000054 + -0x198) = PTR_DAT_00414ab8;
    *(undefined4 *)((int)register0x00000054 + -0x194) = uVar2;
    *(undefined4 *)((int)register0x00000054 + -400) = uVar12;
    *(undefined4 *)((int)register0x00000054 + -0x18c) = uVar8;
    FUN_0008e314();
    if (*(char *)((int)register0x00000054 + -0x184) == '\0') {
      *(undefined1 **)((int)register0x00000054 + -0x198) =
           (undefined1 *)((int)register0x00000054 + -0xcc);
      *(undefined4 *)((int)register0x00000054 + -0x194) =
           *(undefined4 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -400) =
           *(undefined4 *)((int)register0x00000054 + -0x80);
      *(undefined **)((int)register0x00000054 + -0x18c) = PTR_DAT_00414abc;
      *(undefined4 *)((int)register0x00000054 + -0x188) = 0x12;
      FUN_000715a4();
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)**(int **)((int)register0x00000054 + -0x188);
    }
    uVar16 = 1;
    if (puVar3 == (undefined4 *)0x0) goto LAB_00414e68;
    *(undefined4 **)((int)register0x00000054 + -0x54) = puVar3;
    uVar8 = *(undefined4 *)PTR_DAT_00414ab0;
    uVar12 = *(undefined4 *)PTR_DAT_00414aac;
    uVar2 = *puVar3;
    uVar9 = puVar3[1];
    *(undefined1 **)((int)register0x00000054 + -0x198) =
         (undefined1 *)((int)register0x00000054 + -0xec);
    *(undefined **)((int)register0x00000054 + -0x194) = PTR_DAT_00414ac0;
    *(undefined4 *)((int)register0x00000054 + -400) = 1;
    *(undefined4 *)((int)register0x00000054 + -0x18c) = uVar2;
    *(undefined4 *)((int)register0x00000054 + -0x188) = uVar9;
    *(undefined **)((int)register0x00000054 + -0x184) = PTR_DAT_00414ac4;
    *(undefined4 *)((int)register0x00000054 + -0x180) = 1;
    *(undefined4 *)((int)register0x00000054 + -0x17c) = uVar8;
    *(undefined4 *)((int)register0x00000054 + -0x178) = uVar12;
    FUN_000716ac();
    uVar8 = *(undefined4 *)((int)register0x00000054 + -0x174);
    iVar1 = *(int *)((int)register0x00000054 + -0x170);
    if (*(undefined1 **)((int)register0x00000054 + -0x20) != (undefined1 *)0x0) break;
    *(undefined1 **)((int)register0x00000054 + -0x20) =
         (undefined1 *)((int)register0x00000054 + -0x20);
LAB_00414420:
    uVar13 = *(uint *)((int)register0x00000054 + -0x14);
    iVar5 = *(int *)((int)register0x00000054 + -0x18);
    uVar14 = iVar1 + iVar5;
    iVar6 = *(int *)((int)register0x00000054 + -0x1c);
    if (uVar13 < uVar14) {
      *(int *)((int)register0x00000054 + -0x60) = iVar5;
      *(int *)((int)register0x00000054 + -0x88) = iVar1;
      *(undefined4 *)((int)register0x00000054 + -0x34) = uVar8;
      *(int *)((int)register0x00000054 + -0x198) = iVar6;
      *(uint *)((int)register0x00000054 + -0x194) = uVar14;
      *(uint *)((int)register0x00000054 + -400) = uVar13;
      *(int *)((int)register0x00000054 + -0x18c) = iVar1;
      *(undefined **)((int)register0x00000054 + -0x188) = PTR_DAT_00414ab4;
      FUN_00093524();
      iVar6 = *(int *)((int)register0x00000054 + -0x184);
      uVar14 = *(uint *)((int)register0x00000054 + -0x180);
      uVar13 = *(uint *)((int)register0x00000054 + -0x17c);
      uVar8 = *(undefined4 *)((int)register0x00000054 + -0x34);
      iVar1 = *(int *)((int)register0x00000054 + -0x88);
      iVar5 = *(int *)((int)register0x00000054 + -0x60);
    }
    *(uint *)((int)register0x00000054 + -0x60) = uVar13;
    *(uint *)((int)register0x00000054 + -100) = uVar14;
    *(int *)((int)register0x00000054 + -8) = iVar6;
    *(int *)((int)register0x00000054 + -0x198) = iVar6 + iVar5;
    *(undefined4 *)((int)register0x00000054 + -0x194) = uVar8;
    *(int *)((int)register0x00000054 + -400) = iVar1;
    FUN_00098ec8();
    *(undefined4 *)((int)register0x00000054 + -0x18) =
         *(undefined4 *)((int)register0x00000054 + -100);
    *(undefined4 *)((int)register0x00000054 + -0x14) =
         *(undefined4 *)((int)register0x00000054 + -0x60);
    *(undefined4 *)((int)register0x00000054 + -0x1c) = *(undefined4 *)((int)register0x00000054 + -8)
    ;
    if (*(undefined4 **)(*(int *)((int)register0x00000054 + -0x54) + 8) == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = **(undefined4 **)(*(int *)((int)register0x00000054 + -0x54) + 8);
    }
    *(undefined4 *)((int)register0x00000054 + -0x78) = uVar8;
    *(undefined **)((int)register0x00000054 + -0x198) = PTR_DAT_00414ac8;
    *(undefined4 *)((int)register0x00000054 + -0x194) = 0;
    *(undefined4 *)((int)register0x00000054 + -400) = uVar8;
    FUN_000933e8();
    iVar1 = *(int *)((int)register0x00000054 + -0x18c);
    iVar5 = *(int *)((int)register0x00000054 + -0x54);
    iVar6 = *(int *)(iVar5 + 0xc);
    *(int *)((int)register0x00000054 + -0xc) = iVar6;
    iVar7 = *(int *)(iVar5 + 0x10);
    *(int *)((int)register0x00000054 + -0x60) = iVar7;
    uVar8 = *(undefined4 *)((int)register0x00000054 + -0x78);
    uVar13 = 0;
    iVar10 = 0;
    while (*(int *)((int)register0x00000054 + -0x28) = iVar1, iVar10 < iVar7) {
      *(int *)((int)register0x00000054 + -100) = iVar10;
      *(undefined4 *)((int)register0x00000054 + -0x78) = uVar8;
      uVar8 = *(undefined4 *)(iVar6 + iVar10 * 8);
      uVar12 = *(undefined4 *)(iVar6 + iVar10 * 8 + 4);
      *(uint *)((int)register0x00000054 + -0x68) = uVar13 + 1;
      uVar2 = *(undefined4 *)(iVar5 + 8);
      *(undefined **)((int)register0x00000054 + -0x198) = PTR_DAT_00414acc;
      *(undefined4 *)((int)register0x00000054 + -0x194) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -400) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x18c) = uVar12;
      FUN_00021c74();
      uVar8 = **(undefined4 **)((int)register0x00000054 + -0x188);
      uVar14 = *(uint *)((int)register0x00000054 + -0x78);
      uVar13 = *(uint *)((int)register0x00000054 + -0x68);
      if (uVar14 < uVar13) {
        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0x198) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        *(uint *)((int)register0x00000054 + -0x194) = uVar13;
        *(uint *)((int)register0x00000054 + -400) = uVar14;
        *(undefined4 *)((int)register0x00000054 + -0x18c) = 1;
        *(undefined **)((int)register0x00000054 + -0x188) = PTR_DAT_00414ac8;
        FUN_00093524();
        iVar1 = *(int *)((int)register0x00000054 + -0x184);
        uVar13 = *(uint *)((int)register0x00000054 + -0x180);
        uVar14 = *(uint *)((int)register0x00000054 + -0x17c);
        uVar8 = *(undefined4 *)((int)register0x00000054 + -0x10);
      }
      else {
        iVar1 = *(int *)((int)register0x00000054 + -0x28);
      }
      uVar17 = CONCAT44(uVar14,uVar8);
      iVar5 = uVar13 - 1;
      if (*(int *)PTR_DAT_00414ad0 != 0) {
        uVar17 = FUN_00098688();
        *unaff_r8 = (int)uVar17;
        unaff_r8[1] = *(undefined4 *)(extraout_r3 + iVar5 * 4);
        uVar13 = extraout_r2;
        iVar1 = extraout_r3;
      }
      uVar8 = (undefined4)((ulonglong)uVar17 >> 0x20);
      *(int *)(iVar1 + iVar5 * 4) = (int)uVar17;
      iVar5 = *(int *)((int)register0x00000054 + -0x54);
      iVar6 = *(int *)((int)register0x00000054 + -0xc);
      iVar7 = *(int *)((int)register0x00000054 + -0x60);
      iVar10 = *(int *)((int)register0x00000054 + -100) + 1;
    }
    *(uint *)((int)register0x00000054 + -0x7c) = uVar13;
    iVar5 = 0;
    while (iVar5 < (int)uVar13) {
      *(int *)((int)register0x00000054 + -0x60) = iVar5;
      iVar1 = *(int *)(iVar1 + iVar5 * 4);
      *(int *)((int)register0x00000054 + -0x24) = iVar1;
      uVar8 = *(undefined4 *)(iVar1 + 4);
      uVar12 = *(undefined4 *)(iVar1 + 8);
      *(undefined1 **)((int)register0x00000054 + -0x198) =
           (undefined1 *)((int)register0x00000054 + -0x10c);
      *(undefined4 *)((int)register0x00000054 + -0x194) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -400) = uVar12;
      *(undefined **)((int)register0x00000054 + -0x18c) = PTR_DAT_00414ad4;
      *(undefined4 *)((int)register0x00000054 + -0x188) = 1;
      *(undefined **)((int)register0x00000054 + -0x184) = PTR_DAT_00414ad8;
      *(undefined4 *)((int)register0x00000054 + -0x180) = 1;
      *(undefined **)((int)register0x00000054 + -0x17c) = PTR_DAT_00414ad4;
      *(undefined4 *)((int)register0x00000054 + -0x178) = 1;
      FUN_000716ac();
      uVar8 = *(undefined4 *)((int)register0x00000054 + -0x174);
      iVar1 = *(int *)((int)register0x00000054 + -0x170);
      if (*(undefined1 **)((int)register0x00000054 + -0x20) != (undefined1 *)0x0) {
        if (*(undefined1 **)((int)register0x00000054 + -0x20) ==
            (undefined1 *)((int)register0x00000054 + -0x20)) goto LAB_004146c4;
        uVar16 = 0;
LAB_00414e40:
        *(undefined **)((int)register0x00000054 + -0x198) = PTR_SUB_00414eb0;
        *(undefined **)((int)register0x00000054 + -0x194) = PTR_DAT_00414ed0;
        FUN_00090814();
        goto LAB_00414e54;
      }
      *(undefined1 **)((int)register0x00000054 + -0x20) =
           (undefined1 *)((int)register0x00000054 + -0x20);
LAB_004146c4:
      uVar13 = *(uint *)((int)register0x00000054 + -0x14);
      iVar5 = *(int *)((int)register0x00000054 + -0x18);
      uVar14 = iVar5 + iVar1;
      iVar6 = *(int *)((int)register0x00000054 + -0x1c);
      if (uVar13 < uVar14) {
        *(int *)((int)register0x00000054 + -0x8c) = iVar1;
        *(undefined4 *)((int)register0x00000054 + -0x38) = uVar8;
        *(int *)((int)register0x00000054 + -100) = iVar5;
        *(int *)((int)register0x00000054 + -0x198) = iVar6;
        *(uint *)((int)register0x00000054 + -0x194) = uVar14;
        *(uint *)((int)register0x00000054 + -400) = uVar13;
        *(int *)((int)register0x00000054 + -0x18c) = iVar1;
        *(undefined **)((int)register0x00000054 + -0x188) = PTR_DAT_00414ab4;
        FUN_00093524();
        iVar6 = *(int *)((int)register0x00000054 + -0x184);
        uVar14 = *(uint *)((int)register0x00000054 + -0x180);
        uVar13 = *(uint *)((int)register0x00000054 + -0x17c);
        uVar8 = *(undefined4 *)((int)register0x00000054 + -0x38);
        iVar1 = *(int *)((int)register0x00000054 + -0x8c);
        iVar5 = *(int *)((int)register0x00000054 + -100);
      }
      *(uint *)((int)register0x00000054 + -100) = uVar13;
      *(uint *)((int)register0x00000054 + -0x68) = uVar14;
      *(int *)((int)register0x00000054 + -8) = iVar6;
      *(int *)((int)register0x00000054 + -0x198) = iVar6 + iVar5;
      *(undefined4 *)((int)register0x00000054 + -0x194) = uVar8;
      *(int *)((int)register0x00000054 + -400) = iVar1;
      FUN_00098ec8();
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + -100);
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + -8);
      iVar1 = *(int *)(*(int *)((int)register0x00000054 + -0x24) + 0x10);
      if (iVar1 == 0) {
        iVar1 = *(int *)PTR_DAT_00414aac;
        uVar8 = *(undefined4 *)PTR_DAT_00414ab0;
        if (*(undefined1 **)((int)register0x00000054 + -0x20) == (undefined1 *)0x0) {
          *(undefined1 **)((int)register0x00000054 + -0x20) =
               (undefined1 *)((int)register0x00000054 + -0x20);
        }
        else {
          uVar16 = *(undefined1 **)((int)register0x00000054 + -0x20) ==
                   (undefined1 *)((int)register0x00000054 + -0x20);
          if (!(bool)uVar16) goto LAB_00414e2c;
        }
        uVar13 = *(uint *)((int)register0x00000054 + -0x14);
        iVar5 = *(int *)((int)register0x00000054 + -0x18);
        uVar14 = iVar1 + iVar5;
        iVar6 = *(int *)((int)register0x00000054 + -0x1c);
        if (uVar13 < uVar14) {
          *(int *)((int)register0x00000054 + -100) = iVar5;
          *(int *)((int)register0x00000054 + -0x90) = iVar1;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar8;
          *(int *)((int)register0x00000054 + -0x198) = iVar6;
          *(uint *)((int)register0x00000054 + -0x194) = uVar14;
          *(uint *)((int)register0x00000054 + -400) = uVar13;
          *(int *)((int)register0x00000054 + -0x18c) = iVar1;
          *(undefined **)((int)register0x00000054 + -0x188) = PTR_DAT_00414ab4;
          FUN_00093524();
          iVar6 = *(int *)((int)register0x00000054 + -0x184);
          uVar14 = *(uint *)((int)register0x00000054 + -0x180);
          uVar13 = *(uint *)((int)register0x00000054 + -0x17c);
          iVar1 = *(int *)((int)register0x00000054 + -0x90);
          uVar8 = *(undefined4 *)((int)register0x00000054 + -0x3c);
          iVar5 = *(int *)((int)register0x00000054 + -100);
        }
        *(uint *)((int)register0x00000054 + -100) = uVar13;
        *(uint *)((int)register0x00000054 + -0x68) = uVar14;
        *(int *)((int)register0x00000054 + -8) = iVar6;
        *(int *)((int)register0x00000054 + -0x198) = iVar6 + iVar5;
        *(undefined4 *)((int)register0x00000054 + -0x194) = uVar8;
        *(int *)((int)register0x00000054 + -400) = iVar1;
        FUN_00098ec8();
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -100);
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -8);
      }
      else {
        *(undefined4 *)((int)register0x00000054 + -0x198) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -0x24) + 0xc);
        *(int *)((int)register0x00000054 + -0x194) = iVar1;
        *(undefined **)((int)register0x00000054 + -400) = PTR_DAT_00414adc;
        *(undefined4 *)((int)register0x00000054 + -0x18c) = 1;
        internal_stringslite_Index();
        if (*(int *)((int)register0x00000054 + -0x188) != -1) {
          iVar1 = *(int *)PTR_DAT_00414aac;
          uVar8 = *(undefined4 *)PTR_DAT_00414ab0;
          if (*(undefined1 **)((int)register0x00000054 + -0x20) == (undefined1 *)0x0) {
            *(undefined1 **)((int)register0x00000054 + -0x20) =
                 (undefined1 *)((int)register0x00000054 + -0x20);
LAB_00414898:
            uVar13 = *(uint *)((int)register0x00000054 + -0x14);
            iVar5 = *(int *)((int)register0x00000054 + -0x18);
            uVar14 = iVar5 + iVar1;
            iVar6 = *(int *)((int)register0x00000054 + -0x1c);
            if (uVar13 < uVar14) {
              *(int *)((int)register0x00000054 + -0x98) = iVar1;
              *(undefined4 *)((int)register0x00000054 + -0x44) = uVar8;
              *(int *)((int)register0x00000054 + -100) = iVar5;
              *(int *)((int)register0x00000054 + -0x198) = iVar6;
              *(uint *)((int)register0x00000054 + -0x194) = uVar14;
              *(uint *)((int)register0x00000054 + -400) = uVar13;
              *(int *)((int)register0x00000054 + -0x18c) = iVar1;
              *(undefined **)((int)register0x00000054 + -0x188) = PTR_DAT_00414ab4;
              FUN_00093524();
              iVar6 = *(int *)((int)register0x00000054 + -0x184);
              uVar14 = *(uint *)((int)register0x00000054 + -0x180);
              uVar13 = *(uint *)((int)register0x00000054 + -0x17c);
              iVar1 = *(int *)((int)register0x00000054 + -0x98);
              uVar8 = *(undefined4 *)((int)register0x00000054 + -0x44);
              iVar5 = *(int *)((int)register0x00000054 + -100);
            }
            *(uint *)((int)register0x00000054 + -100) = uVar13;
            *(uint *)((int)register0x00000054 + -0x68) = uVar14;
            *(int *)((int)register0x00000054 + -8) = iVar6;
            *(int *)((int)register0x00000054 + -0x198) = iVar6 + iVar5;
            *(undefined4 *)((int)register0x00000054 + -0x194) = uVar8;
            *(int *)((int)register0x00000054 + -400) = iVar1;
            FUN_00098ec8();
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -0x68);
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x24) + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x198) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -0x24) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x194) = uVar8;
            *(undefined **)((int)register0x00000054 + -400) = PTR_DAT_00414adc;
            *(undefined4 *)((int)register0x00000054 + -0x18c) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x188) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x184) = 0xffffffff;
            FUN_00146be8();
            uVar16 = *(int *)((int)register0x00000054 + -0x17c) == 0;
            if (!(bool)uVar16) {
              *(undefined4 *)((int)register0x00000054 + -0xa8) =
                   *(undefined4 *)((int)register0x00000054 + -0x178);
              *(int *)((int)register0x00000054 + -0xac) = *(int *)((int)register0x00000054 + -0x17c)
              ;
              puVar3 = *(undefined4 **)((int)register0x00000054 + -0x180);
              *(undefined4 **)((int)register0x00000054 + -0x58) = puVar3;
              uVar8 = *puVar3;
              uVar12 = puVar3[1];
              *(undefined1 **)((int)register0x00000054 + -0x198) =
                   (undefined1 *)((int)register0x00000054 + -0x14c);
              *(undefined **)((int)register0x00000054 + -0x194) = PTR_DAT_00414ae0;
              *(undefined4 *)((int)register0x00000054 + -400) = 2;
              *(undefined4 *)((int)register0x00000054 + -0x18c) = uVar8;
              *(undefined4 *)((int)register0x00000054 + -0x188) = uVar12;
              FUN_000715a4();
              uVar8 = *(undefined4 *)((int)register0x00000054 + -0x184);
              iVar1 = *(int *)((int)register0x00000054 + -0x180);
              if (*(undefined1 **)((int)register0x00000054 + -0x20) == (undefined1 *)0x0) {
                *(undefined1 **)((int)register0x00000054 + -0x20) =
                     (undefined1 *)((int)register0x00000054 + -0x20);
LAB_004149e4:
                uVar13 = *(uint *)((int)register0x00000054 + -0x14);
                iVar5 = *(int *)((int)register0x00000054 + -0x18);
                uVar14 = iVar1 + iVar5;
                iVar6 = *(int *)((int)register0x00000054 + -0x1c);
                if (uVar13 < uVar14) {
                  *(int *)((int)register0x00000054 + -100) = iVar5;
                  *(int *)((int)register0x00000054 + -0x9c) = iVar1;
                  *(undefined4 *)((int)register0x00000054 + -0x48) = uVar8;
                  *(int *)((int)register0x00000054 + -0x198) = iVar6;
                  *(uint *)((int)register0x00000054 + -0x194) = uVar14;
                  *(uint *)((int)register0x00000054 + -400) = uVar13;
                  *(int *)((int)register0x00000054 + -0x18c) = iVar1;
                  *(undefined **)((int)register0x00000054 + -0x188) = PTR_DAT_00414ab4;
                  FUN_00093524();
                  iVar6 = *(int *)((int)register0x00000054 + -0x184);
                  uVar14 = *(uint *)((int)register0x00000054 + -0x180);
                  uVar13 = *(uint *)((int)register0x00000054 + -0x17c);
                  uVar8 = *(undefined4 *)((int)register0x00000054 + -0x48);
                  iVar1 = *(int *)((int)register0x00000054 + -0x9c);
                  iVar5 = *(int *)((int)register0x00000054 + -100);
                }
                *(uint *)((int)register0x00000054 + -100) = uVar13;
                *(uint *)((int)register0x00000054 + -0x68) = uVar14;
                *(int *)((int)register0x00000054 + -8) = iVar6;
                *(uint *)((int)register0x00000054 + -0x6c) =
                     1 - *(int *)((int)register0x00000054 + -0xa8) >> 0x1f & 8;
                *(int *)((int)register0x00000054 + -0x198) = iVar6 + iVar5;
                *(undefined4 *)((int)register0x00000054 + -0x194) = uVar8;
                *(int *)((int)register0x00000054 + -400) = iVar1;
                FUN_00098ec8();
                *(undefined4 *)((int)register0x00000054 + -0x18) =
                     *(undefined4 *)((int)register0x00000054 + -0x68);
                *(undefined4 *)((int)register0x00000054 + -0x14) =
                     *(undefined4 *)((int)register0x00000054 + -100);
                *(undefined4 *)((int)register0x00000054 + -0x1c) =
                     *(undefined4 *)((int)register0x00000054 + -8);
                iVar1 = *(int *)((int)register0x00000054 + -0x58) +
                        *(int *)((int)register0x00000054 + -0x6c);
                *(int *)((int)register0x00000054 + -0xc) = iVar1;
                iVar5 = *(int *)((int)register0x00000054 + -0xac) + -1;
                *(int *)((int)register0x00000054 + -100) = iVar5;
                iVar6 = 0;
                goto LAB_00414c3c;
              }
              if (*(undefined1 **)((int)register0x00000054 + -0x20) ==
                  (undefined1 *)((int)register0x00000054 + -0x20)) goto LAB_004149e4;
              uVar16 = 0;
LAB_00414df8:
              *(undefined **)((int)register0x00000054 + -0x198) = PTR_SUB_00414eb0;
              *(undefined **)((int)register0x00000054 + -0x194) = PTR_DAT_00414ec4;
              FUN_00090814();
            }
            FUN_000986f8(0,0);
          }
          else {
            if (*(undefined1 **)((int)register0x00000054 + -0x20) ==
                (undefined1 *)((int)register0x00000054 + -0x20)) goto LAB_00414898;
            uVar16 = 0;
          }
          *(undefined **)((int)register0x00000054 + -0x198) = PTR_SUB_00414eb0;
          *(undefined **)((int)register0x00000054 + -0x194) = PTR_DAT_00414ec8;
          FUN_00090814();
LAB_00414e2c:
          *(undefined **)((int)register0x00000054 + -0x198) = PTR_SUB_00414eb0;
          *(undefined **)((int)register0x00000054 + -0x194) = PTR_DAT_00414ecc;
          FUN_00090814();
          goto LAB_00414e40;
        }
        uVar8 = *(undefined4 *)PTR_DAT_00414ea4;
        uVar12 = *(undefined4 *)PTR_DAT_00414ea8;
        uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x24) + 0xc);
        uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x24) + 0x10);
        puVar11 = (undefined1 *)((int)register0x00000054 + -300);
        *(undefined1 **)((int)register0x00000054 + -0x198) = puVar11;
        *(undefined4 *)((int)register0x00000054 + -0x194) = uVar9;
        *(undefined4 *)((int)register0x00000054 + -400) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x18c) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0x188) = uVar12;
        FUN_000715a4();
        uVar8 = *(undefined4 *)((int)register0x00000054 + -0x184);
        iVar1 = *(int *)((int)register0x00000054 + -0x180);
        if (*(undefined1 **)((int)register0x00000054 + -0x20) == (undefined1 *)0x0) {
          *(undefined1 **)((int)register0x00000054 + -0x20) =
               (undefined1 *)((int)register0x00000054 + -0x20);
        }
        else if (*(undefined1 **)((int)register0x00000054 + -0x20) !=
                 (undefined1 *)((int)register0x00000054 + -0x20)) {
          *(undefined **)((int)register0x00000054 + -0x198) = PTR_SUB_00414eb0;
          *(undefined **)((int)register0x00000054 + -0x194) = PTR_DAT_00414eb4;
          uVar17 = FUN_00090814();
          iVar1 = extraout_r2_00;
          iVar5 = extraout_r3_00;
          while( true ) {
            *(int *)((int)register0x00000054 + -0x6c) = (int)uVar17;
            *(undefined1 **)((int)register0x00000054 + -0x70) = puVar11;
            *(int *)((int)register0x00000054 + -8) = iVar6;
            *(int *)((int)register0x00000054 + -0x198) = iVar6 + iVar5;
            *(int *)((int)register0x00000054 + -0x194) = (int)((ulonglong)uVar17 >> 0x20);
            *(int *)((int)register0x00000054 + -400) = iVar1;
            FUN_00098ec8();
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -0x70);
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x6c);
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            iVar6 = *(int *)((int)register0x00000054 + -0x68) + 1;
            iVar1 = *(int *)((int)register0x00000054 + -0xc);
            iVar5 = *(int *)((int)register0x00000054 + -100);
LAB_00414c3c:
            if (iVar5 <= iVar6) break;
            *(int *)((int)register0x00000054 + -0x68) = iVar6;
            uVar8 = *(undefined4 *)(iVar1 + iVar6 * 8);
            uVar12 = *(undefined4 *)(iVar1 + iVar6 * 8 + 4);
            *(undefined1 **)((int)register0x00000054 + -0x198) =
                 (undefined1 *)((int)register0x00000054 + -0x16c);
            *(undefined **)((int)register0x00000054 + -0x194) = PTR_DAT_00414eb8;
            *(undefined4 *)((int)register0x00000054 + -400) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x18c) = uVar8;
            *(undefined4 *)((int)register0x00000054 + -0x188) = uVar12;
            FUN_000715a4();
            iVar1 = *(int *)((int)register0x00000054 + -0x180);
            if (*(undefined1 **)((int)register0x00000054 + -0x20) == (undefined1 *)0x0) {
              *(undefined1 **)((int)register0x00000054 + -0x20) =
                   (undefined1 *)((int)register0x00000054 + -0x20);
            }
            else {
              uVar16 = *(undefined1 **)((int)register0x00000054 + -0x20) ==
                       (undefined1 *)((int)register0x00000054 + -0x20);
              if (!(bool)uVar16) goto LAB_00414de4;
            }
            puVar4 = *(undefined1 **)((int)register0x00000054 + -0x14);
            uVar17 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x184),puVar4);
            iVar5 = *(int *)((int)register0x00000054 + -0x18);
            puVar11 = (undefined1 *)(iVar5 + iVar1);
            iVar6 = *(int *)((int)register0x00000054 + -0x1c);
            if (puVar4 < puVar11) {
              *(int *)((int)register0x00000054 + -0xa0) = iVar1;
              *(undefined4 *)((int)register0x00000054 + -0x4c) =
                   *(undefined4 *)((int)register0x00000054 + -0x184);
              *(int *)((int)register0x00000054 + -0x6c) = iVar5;
              *(int *)((int)register0x00000054 + -0x198) = iVar6;
              *(undefined1 **)((int)register0x00000054 + -0x194) = puVar11;
              *(undefined1 **)((int)register0x00000054 + -400) = puVar4;
              *(int *)((int)register0x00000054 + -0x18c) = iVar1;
              *(undefined **)((int)register0x00000054 + -0x188) = PTR_DAT_00414eac;
              FUN_00093524();
              iVar6 = *(int *)((int)register0x00000054 + -0x184);
              puVar11 = *(undefined1 **)((int)register0x00000054 + -0x180);
              uVar17 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x4c),
                                *(undefined4 *)((int)register0x00000054 + -0x17c));
              iVar1 = *(int *)((int)register0x00000054 + -0xa0);
              iVar5 = *(int *)((int)register0x00000054 + -0x6c);
            }
          }
          iVar1 = *(int *)PTR_DAT_00414ea8;
          uVar8 = *(undefined4 *)PTR_DAT_00414ea4;
          if (*(undefined1 **)((int)register0x00000054 + -0x20) != (undefined1 *)0x0) {
            uVar16 = *(undefined1 **)((int)register0x00000054 + -0x20) ==
                     (undefined1 *)((int)register0x00000054 + -0x20);
            if ((bool)uVar16) goto LAB_00414d3c;
            *(undefined **)((int)register0x00000054 + -0x198) = PTR_SUB_00414eb0;
            *(undefined **)((int)register0x00000054 + -0x194) = PTR_DAT_00414ebc;
            FUN_00090814();
LAB_00414de4:
            *(undefined **)((int)register0x00000054 + -0x198) = PTR_SUB_00414eb0;
            *(undefined **)((int)register0x00000054 + -0x194) = PTR_DAT_00414ec0;
            FUN_00090814();
            goto LAB_00414df8;
          }
          *(undefined1 **)((int)register0x00000054 + -0x20) =
               (undefined1 *)((int)register0x00000054 + -0x20);
LAB_00414d3c:
          uVar13 = *(uint *)((int)register0x00000054 + -0x14);
          iVar5 = *(int *)((int)register0x00000054 + -0x18);
          uVar14 = iVar1 + iVar5;
          iVar6 = *(int *)((int)register0x00000054 + -0x1c);
          if (uVar13 < uVar14) {
            *(int *)((int)register0x00000054 + -100) = iVar5;
            *(int *)((int)register0x00000054 + -0xa4) = iVar1;
            *(undefined4 *)((int)register0x00000054 + -0x50) = uVar8;
            *(int *)((int)register0x00000054 + -0x198) = iVar6;
            *(uint *)((int)register0x00000054 + -0x194) = uVar14;
            *(uint *)((int)register0x00000054 + -400) = uVar13;
            *(int *)((int)register0x00000054 + -0x18c) = iVar1;
            *(undefined **)((int)register0x00000054 + -0x188) = PTR_DAT_00414eac;
            FUN_00093524();
            iVar6 = *(int *)((int)register0x00000054 + -0x184);
            uVar14 = *(uint *)((int)register0x00000054 + -0x180);
            uVar13 = *(uint *)((int)register0x00000054 + -0x17c);
            iVar1 = *(int *)((int)register0x00000054 + -0xa4);
            uVar8 = *(undefined4 *)((int)register0x00000054 + -0x50);
            iVar5 = *(int *)((int)register0x00000054 + -100);
          }
          *(uint *)((int)register0x00000054 + -100) = uVar13;
          *(uint *)((int)register0x00000054 + -0x68) = uVar14;
          *(int *)((int)register0x00000054 + -8) = iVar6;
          *(int *)((int)register0x00000054 + -0x198) = iVar6 + iVar5;
          *(undefined4 *)((int)register0x00000054 + -0x194) = uVar8;
          *(int *)((int)register0x00000054 + -400) = iVar1;
          FUN_00098ec8();
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + -100);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -8);
          goto LAB_00414630;
        }
        uVar13 = *(uint *)((int)register0x00000054 + -0x14);
        iVar5 = *(int *)((int)register0x00000054 + -0x18);
        uVar14 = iVar5 + iVar1;
        iVar6 = *(int *)((int)register0x00000054 + -0x1c);
        if (uVar13 < uVar14) {
          *(int *)((int)register0x00000054 + -0x94) = iVar1;
          *(undefined4 *)((int)register0x00000054 + -0x40) = uVar8;
          *(int *)((int)register0x00000054 + -100) = iVar5;
          *(int *)((int)register0x00000054 + -0x198) = iVar6;
          *(uint *)((int)register0x00000054 + -0x194) = uVar14;
          *(uint *)((int)register0x00000054 + -400) = uVar13;
          *(int *)((int)register0x00000054 + -0x18c) = iVar1;
          *(undefined **)((int)register0x00000054 + -0x188) = PTR_DAT_00414eac;
          FUN_00093524();
          iVar6 = *(int *)((int)register0x00000054 + -0x184);
          uVar14 = *(uint *)((int)register0x00000054 + -0x180);
          uVar13 = *(uint *)((int)register0x00000054 + -0x17c);
          uVar8 = *(undefined4 *)((int)register0x00000054 + -0x40);
          iVar1 = *(int *)((int)register0x00000054 + -0x94);
          iVar5 = *(int *)((int)register0x00000054 + -100);
        }
        *(uint *)((int)register0x00000054 + -100) = uVar13;
        *(uint *)((int)register0x00000054 + -0x68) = uVar14;
        *(int *)((int)register0x00000054 + -8) = iVar6;
        *(int *)((int)register0x00000054 + -0x198) = iVar6 + iVar5;
        *(undefined4 *)((int)register0x00000054 + -0x194) = uVar8;
        *(int *)((int)register0x00000054 + -400) = iVar1;
        FUN_00098ec8();
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -100);
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -8);
      }
LAB_00414630:
      iVar1 = *(int *)((int)register0x00000054 + -0x28);
      uVar13 = *(uint *)((int)register0x00000054 + -0x7c);
      iVar5 = *(int *)((int)register0x00000054 + -0x60) + 1;
    }
    iVar1 = *(int *)((int)register0x00000054 + -0x74) + 1;
    iVar7 = *(int *)((int)register0x00000054 + -0x5c);
    iVar5 = *(int *)((int)register0x00000054 + 4);
    iVar6 = *(int *)((int)register0x00000054 + -4);
  }
  if (*(undefined1 **)((int)register0x00000054 + -0x20) ==
      (undefined1 *)((int)register0x00000054 + -0x20)) goto LAB_00414420;
  uVar16 = 0;
LAB_00414e54:
  *(undefined **)((int)register0x00000054 + -0x198) = PTR_SUB_00414eb0;
  *(undefined **)((int)register0x00000054 + -0x194) = PTR_DAT_00414ed4;
  FUN_00090814();
LAB_00414e68:
  *(undefined **)((int)register0x00000054 + -0x198) = PTR_SUB_00414eb0;
  *(undefined **)((int)register0x00000054 + -0x194) = PTR_DAT_00414ed8;
  FUN_00090814();
LAB_00414e7c:
  *(undefined **)((int)register0x00000054 + -0x198) = PTR_SUB_00414eb0;
  *(undefined **)((int)register0x00000054 + -0x194) = PTR_DAT_00414edc;
  param_1 = FUN_00090814();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x19c);
  if ((bool)uVar16) {
    register0x00000054 = (BADSPACEBASE *)puVar15;
  }
  goto LAB_00414e94;
}



/* printerApi/common/ini.(*File).SaveTo @ 00414ee0 (size 180) */

void printerApi_common_ini___File__SaveTo(undefined4 param_1)

{
  int iVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  undefined1 uVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + 4);
      printerApi_common_ini___File__writeToStringBuilder();
      iVar1 = *(int *)((int)register0x00000054 + -0x38);
      if (*(uint *)((int)register0x00000054 + -0x34) <= (uint)-iVar1) {
        *(undefined1 **)((int)register0x00000054 + -0x40) =
             (undefined1 *)((int)register0x00000054 + -0x20);
        *(int *)((int)register0x00000054 + -0x3c) = iVar1;
        *(uint *)((int)register0x00000054 + -0x38) = *(uint *)((int)register0x00000054 + -0x34);
        FUN_00071920();
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 0x1b6;
        FUN_00126134();
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
                    /* WARNING: Could not recover jumptable at 0x00414f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x44))();
        return;
      }
      uVar3 = iVar1 == 0;
      if (!(bool)uVar3) {
        FUN_00085954();
      }
      param_1 = FUN_00085994();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if ((bool)uVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x414f90;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/ini.(*Section).Key @ 00414f94 (size 212) */

void printerApi_common_ini___Section__Key(void)

{
  int iVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined1 local_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (local_2c == '\0') {
    FUN_000715a4();
    iVar1 = DAT_00415074;
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 != 0) {
    printerApi_common_ini___Section__NewKey();
  }
  return;
}



/* printerApi/common/ini.(*Section).NewKey @ 00415078 (size 740) */

void printerApi_common_ini___Section__NewKey(void)

{
  int iVar1;
  int *piVar2;
  int *extraout_r1;
  int extraout_r1_00;
  uint extraout_r2;
  uint uVar3;
  int extraout_r3;
  int iVar4;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  int *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00148fb4();
  if (local_2c == 0) {
    FUN_000715a4();
    FUN_0001eed8();
    local_30[1] = local_20;
    if (*(int *)PTR_DAT_00415368 != 0) {
      local_30 = (int *)FUN_00098678();
      *unaff_r8 = local_24;
    }
    *local_30 = local_24;
    return;
  }
  piVar2 = *(int **)(in_stack_00000004 + 8);
  FUN_0008e314();
  if ((char)local_24 == '\0') {
    FUN_0001eed8();
    if (*(int *)PTR_DAT_00415368 != 0) {
      FUN_00098698();
      *unaff_r8 = in_stack_00000004;
      unaff_r8[1] = (int)local_30;
      unaff_r8[2] = in_stack_00000010;
      piVar2 = extraout_r1;
    }
    *piVar2 = in_stack_00000004;
    piVar2[2] = local_2c;
    piVar2[1] = (int)local_30;
    piVar2[4] = in_stack_00000014;
    piVar2[3] = in_stack_00000010;
    FUN_0008e7bc();
    if (*(int *)PTR_DAT_00415368 != 0) {
      local_28 = (int *)FUN_00098688();
      *unaff_r8 = (int)piVar2;
      unaff_r8[1] = *local_28;
    }
    *local_28 = (int)piVar2;
    uVar3 = *(int *)(in_stack_00000004 + 0x10) + 1;
    iVar1 = in_stack_00000004;
    iVar4 = *(int *)(in_stack_00000004 + 0xc);
    if (*(uint *)(in_stack_00000004 + 0x14) < uVar3) {
      FUN_00093524();
      *(undefined4 *)(in_stack_00000004 + 0x14) = local_1c;
      iVar1 = in_stack_00000004;
      if (*(int *)PTR_DAT_00415368 != 0) {
        FUN_00098688();
        *unaff_r8 = extraout_r1_00;
        unaff_r8[1] = *(int *)(extraout_r3 + 0xc);
        local_24 = extraout_r1_00;
        local_20 = extraout_r2;
        iVar1 = extraout_r3;
      }
      *(int *)(iVar1 + 0xc) = local_24;
      uVar3 = local_20;
      iVar4 = local_24;
    }
    *(uint *)(iVar1 + 0x10) = uVar3;
    iVar1 = uVar3 - 1;
    *(int *)(iVar4 + iVar1 * 8 + 4) = local_2c;
    if (*(int *)PTR_DAT_00415368 != 0) {
      iVar1 = FUN_00098688();
      *unaff_r8 = (int)local_30;
      unaff_r8[1] = *(int *)(iVar4 + iVar1 * 8);
    }
    *(int **)(iVar4 + iVar1 * 8) = local_30;
  }
  else {
    iVar1 = *local_28;
    *(int *)(iVar1 + 0x10) = in_stack_00000014;
    if (*(int *)PTR_DAT_00415368 != 0) {
      iVar1 = FUN_00098688();
      *unaff_r8 = in_stack_00000010;
      unaff_r8[1] = *(int *)(iVar1 + 0xc);
    }
    *(int *)(iVar1 + 0xc) = in_stack_00000010;
  }
  return;
}



