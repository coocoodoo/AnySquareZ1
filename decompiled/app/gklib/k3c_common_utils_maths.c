// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/common/utils/maths   functions: 25
/* k3c/common/utils/maths.AsStrided @ 00488f38 (size 576) */

void k3c_common_utils_maths_AsStrided(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int extraout_r2;
  undefined4 uVar7;
  int extraout_r3;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 *unaff_r8;
  uint uVar12;
  int unaff_r10;
  uint uVar13;
  uint extraout_r12;
  undefined1 *puVar14;
  undefined4 unaff_lr;
  uint uVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar14 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      uVar6 = *(uint *)((int)register0x00000054 + 0x14);
      uVar16 = uVar6 == 0;
      if (!(bool)uVar16) {
        uVar16 = uVar6 == 1;
        if (1 < uVar6) {
          uVar3 = **(undefined4 **)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x14) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               (*(undefined4 **)((int)register0x00000054 + 0x10))[1];
          *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0048917c;
          *(undefined4 *)((int)register0x00000054 + -0x20) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar3;
          FUN_000986b8();
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          iVar4 = 0;
          do {
            if (*(int *)((int)register0x00000054 + -0x14) <= iVar4) {
              *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_00489188;
              FUN_00022cf8();
              puVar2 = *(undefined4 **)((int)register0x00000054 + -0x20);
              uVar3 = *(undefined4 *)((int)register0x00000054 + -0x14);
              puVar2[1] = uVar3;
              puVar2[2] = uVar3;
              if (*(int *)PTR_DAT_00489184 == 0) {
                uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
                uVar7 = *(undefined4 *)((int)register0x00000054 + 0x10);
                uVar8 = *(undefined4 *)((int)register0x00000054 + 0x1c);
              }
              else {
                puVar2 = (undefined4 *)FUN_0009db74();
                uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
                *unaff_r8 = uVar3;
                uVar7 = *(undefined4 *)((int)register0x00000054 + 0x10);
                unaff_r8[1] = uVar7;
                uVar8 = *(undefined4 *)((int)register0x00000054 + 0x1c);
                unaff_r8[2] = uVar8;
              }
              *puVar2 = uVar3;
              puVar2[4] = *(undefined4 *)((int)register0x00000054 + 0x14);
              puVar2[5] = *(undefined4 *)((int)register0x00000054 + 0x18);
              puVar2[3] = uVar7;
              puVar2[7] = *(undefined4 *)((int)register0x00000054 + 0x20);
              puVar2[8] = *(undefined4 *)((int)register0x00000054 + 0x24);
              puVar2[6] = uVar8;
              *(undefined4 **)((int)register0x00000054 + 0x28) = puVar2;
              return;
            }
            *(int *)((int)register0x00000054 + -0x10) = iVar4;
            *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_00489180;
            *(undefined4 *)((int)register0x00000054 + -0x20) =
                 *(undefined4 *)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0xc);
            FUN_000986b8();
            iVar1 = *(int *)((int)register0x00000054 + -0x10);
            uVar17 = CONCAT44(iVar1 * 3,iVar1);
            iVar4 = *(int *)((int)register0x00000054 + -4);
            iVar1 = iVar4 + iVar1 * 0xc;
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x18);
            iVar9 = *(int *)((int)register0x00000054 + -0xc);
            *(int *)(iVar1 + 4) = iVar9;
            *(int *)(iVar1 + 8) = iVar9;
            if (*(int *)PTR_DAT_00489184 != 0) {
              uVar17 = FUN_0009db64();
              *unaff_r8 = uVar3;
              unaff_r8[1] = *(undefined4 *)(extraout_r2 + (int)((ulonglong)uVar17 >> 0x20) * 4);
              iVar4 = extraout_r2;
              iVar1 = extraout_r3;
            }
            iVar5 = (int)((ulonglong)uVar17 >> 0x20);
            *(int *)((int)register0x00000054 + -8) = iVar5;
            *(undefined4 *)(iVar4 + iVar5 * 4) = uVar3;
            uVar6 = *(uint *)((int)register0x00000054 + 8);
            iVar10 = *(int *)((int)register0x00000054 + 4);
            piVar11 = *(int **)((int)register0x00000054 + 0x1c);
            unaff_r8 = *(undefined4 **)((int)register0x00000054 + 0x20);
            for (uVar12 = 0; (int)uVar12 < iVar9; uVar12 = uVar12 + 1) {
              uVar16 = 1;
              if (unaff_r8 == (undefined4 *)0x0) {
LAB_00489144:
                FUN_0009dbd4(0,0);
                goto LAB_00489150;
              }
              uVar16 = unaff_r8 == (undefined4 *)0x1;
              if (unaff_r8 < (undefined4 *)0x2) {
LAB_00489138:
                FUN_0009dbd4(1,1);
                goto LAB_00489144;
              }
              uVar13 = *piVar11 * (int)uVar17 + uVar12 * piVar11[1];
              uVar16 = uVar6 == uVar13;
              if ((int)uVar6 <= (int)uVar13) {
LAB_00489124:
                *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0048918c;
                *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00489190;
                FUN_00095b00();
                goto LAB_00489138;
              }
              if (uVar6 <= uVar13) {
LAB_00489118:
                FUN_0009dbd4(uVar13,uVar6);
                goto LAB_00489124;
              }
              uVar15 = *(uint *)(iVar1 + 4);
              uVar16 = uVar12 == uVar15;
              if (uVar15 <= uVar12) {
                FUN_0009dbd4(uVar12,uVar15);
                uVar13 = extraout_r12;
                goto LAB_00489118;
              }
              *(undefined8 *)(*(int *)(iVar4 + iVar5 * 4) + uVar12 * 8) =
                   *(undefined8 *)(iVar10 + uVar13 * 8);
              iVar5 = *(int *)((int)register0x00000054 + -8);
            }
            iVar4 = (int)uVar17 + 1;
          } while( true );
        }
LAB_00489150:
        FUN_0009dbd4(1,1);
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if ((bool)uVar16) {
        register0x00000054 = (BADSPACEBASE *)puVar14;
      }
    }
    unaff_lr = 0x489174;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/utils/maths.Cos @ 00489194 (size 224) */

void k3c_common_utils_maths_Cos(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint extraout_r1;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  
  while (register0x00000054 <= *(undefined1 **)(unaff_r10 + 8)) {
LAB_00489268:
    unaff_lr = 0x489270;
    param_1 = FUN_0009bf64(param_1);
  }
  puVar8 = (undefined1 *)((int)register0x00000054 + -0x24);
  *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
  iVar3 = *(int *)((int)register0x00000054 + 4);
  iVar4 = *(int *)((int)register0x00000054 + 8);
  iVar1 = 0;
  do {
    if (iVar4 <= iVar1) {
      *(int *)((int)register0x00000054 + 0x10) = iVar3;
      *(int *)((int)register0x00000054 + 0x14) = iVar4;
      *(undefined4 *)((int)register0x00000054 + 0x18) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      return;
    }
    *(int *)((int)register0x00000054 + -0xc) = iVar1;
    uVar2 = 0;
    while( true ) {
      iVar5 = iVar3 + iVar1 * 0xc;
      uVar6 = *(uint *)(iVar5 + 4);
      iVar7 = *(int *)(iVar3 + iVar1 * 0xc);
      uVar9 = uVar2 == uVar6;
      if ((int)uVar6 <= (int)uVar2) break;
      if (uVar6 <= uVar2) {
LAB_00489258:
        param_1 = FUN_0009dbd4(uVar2,uVar6);
        register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
        if ((bool)uVar9) {
          register0x00000054 = (BADSPACEBASE *)puVar8;
        }
        goto LAB_00489268;
      }
      *(int *)((int)register0x00000054 + -4) = iVar5;
      *(int *)((int)register0x00000054 + -8) = iVar1 * 3;
      *(uint *)((int)register0x00000054 + -0x10) = uVar2;
      *(undefined8 *)((int)register0x00000054 + -0x20) = *(undefined8 *)(iVar7 + uVar2 * 8);
      k3c_common_cmath__Cfunc_cos();
      iVar3 = *(int *)((int)register0x00000054 + 4);
      uVar2 = *(uint *)((int)register0x00000054 + -0x10);
      uVar9 = uVar2 == *(uint *)(*(int *)((int)register0x00000054 + -4) + 4);
      if (*(uint *)(*(int *)((int)register0x00000054 + -4) + 4) <= uVar2) {
        FUN_0009dbd4(uVar2);
        uVar2 = extraout_r1;
        goto LAB_00489258;
      }
      *(undefined8 *)(*(int *)(iVar3 + *(int *)((int)register0x00000054 + -8) * 4) + uVar2 * 8) =
           *(undefined8 *)((int)register0x00000054 + -0x18);
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)((int)register0x00000054 + -0xc);
      iVar4 = *(int *)((int)register0x00000054 + 8);
    }
    iVar1 = iVar1 + 1;
  } while( true );
}



/* k3c/common/utils/maths.Exp @ 00489274 (size 368) */

void k3c_common_utils_maths_Exp(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r3;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  undefined8 uVar11;
  
  while (register0x00000054 <= *(undefined1 **)(unaff_r10 + 8)) {
LAB_004893d8:
    unaff_lr = 0x4893e0;
    param_1 = FUN_0009bf64(param_1);
  }
  puVar9 = (undefined1 *)((int)register0x00000054 + -0x30);
  *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_004893e8;
  *(undefined4 *)((int)register0x00000054 + -0x28) = *(undefined4 *)((int)register0x00000054 + 8);
  *(undefined4 *)((int)register0x00000054 + -0x24) = *(undefined4 *)((int)register0x00000054 + 8);
  FUN_000986b8();
  iVar1 = *(int *)((int)register0x00000054 + -0x20);
  *(int *)((int)register0x00000054 + -4) = iVar1;
  iVar3 = 0;
  do {
    iVar4 = *(int *)((int)register0x00000054 + 8);
    if (iVar4 <= iVar3) {
      *(int *)((int)register0x00000054 + 0x10) = iVar1;
      *(int *)((int)register0x00000054 + 0x14) = iVar4;
      *(int *)((int)register0x00000054 + 0x18) = iVar4;
      return;
    }
    *(int *)((int)register0x00000054 + -0x18) = iVar3;
    *(int *)((int)register0x00000054 + -0x10) = iVar3 * 3;
    *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + 4) + iVar3 * 0xc;
    uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + iVar3 * 0xc + 4);
    *(undefined4 *)((int)register0x00000054 + -0x14) = uVar6;
    *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_004893ec;
    *(undefined4 *)((int)register0x00000054 + -0x28) = uVar6;
    *(undefined4 *)((int)register0x00000054 + -0x24) = uVar6;
    FUN_000986b8();
    iVar1 = *(int *)((int)register0x00000054 + -0x20);
    *(int *)((int)register0x00000054 + -0xc) = iVar1;
    iVar4 = *(int *)((int)register0x00000054 + -8);
    iVar5 = *(int *)((int)register0x00000054 + 4);
    iVar3 = *(int *)((int)register0x00000054 + -0x10);
    uVar7 = 0;
    while( true ) {
      uVar8 = *(uint *)(iVar4 + 4);
      iVar4 = *(int *)(iVar5 + iVar3 * 4);
      uVar10 = uVar7 == uVar8;
      if ((int)uVar8 <= (int)uVar7) break;
      if (uVar8 <= uVar7) {
LAB_004893c8:
        param_1 = FUN_0009dbd4(uVar7,uVar8);
        register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
        if ((bool)uVar10) {
          register0x00000054 = (BADSPACEBASE *)puVar9;
        }
        goto LAB_004893d8;
      }
      *(uint *)((int)register0x00000054 + -0x1c) = uVar7;
      *(undefined8 *)((int)register0x00000054 + -0x2c) = *(undefined8 *)(iVar4 + uVar7 * 8);
      k3c_common_cmath__Cfunc_exp();
      uVar2 = *(uint *)((int)register0x00000054 + -0x1c);
      uVar10 = uVar2 == *(uint *)((int)register0x00000054 + -0x14);
      if (*(uint *)((int)register0x00000054 + -0x14) <= uVar2) {
        FUN_0009dbd4();
        goto LAB_004893c8;
      }
      iVar1 = *(int *)((int)register0x00000054 + -0xc);
      *(undefined8 *)(iVar1 + uVar2 * 8) = *(undefined8 *)((int)register0x00000054 + -0x24);
      uVar7 = uVar2 + 1;
      iVar4 = *(int *)((int)register0x00000054 + -8);
      iVar5 = *(int *)((int)register0x00000054 + 4);
      iVar3 = *(int *)((int)register0x00000054 + -0x10);
    }
    uVar11 = CONCAT44(*(int *)((int)register0x00000054 + -4),iVar1);
    iVar1 = *(int *)((int)register0x00000054 + -4) + iVar3 * 4;
    uVar6 = *(undefined4 *)((int)register0x00000054 + -0x14);
    *(undefined4 *)(iVar1 + 4) = uVar6;
    *(undefined4 *)(iVar1 + 8) = uVar6;
    if (*DAT_004893f0 != 0) {
      uVar11 = FUN_0009db64();
      *unaff_r8 = (int)uVar11;
      unaff_r8[1] = *(undefined4 *)((int)((ulonglong)uVar11 >> 0x20) + extraout_r3 * 4);
      iVar3 = extraout_r3;
    }
    iVar1 = (int)((ulonglong)uVar11 >> 0x20);
    *(int *)(iVar1 + iVar3 * 4) = (int)uVar11;
    iVar3 = *(int *)((int)register0x00000054 + -0x18) + 1;
  } while( true );
}



/* k3c/common/utils/maths.Maximum @ 004893f4 (size 212) */

void k3c_common_utils_maths_Maximum(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 8);
      bVar5 = false;
      if ((iVar1 == *(int *)((int)register0x00000054 + 0x14)) && (bVar5 = iVar1 == 0, !bVar5)) {
        *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_004894cc;
        *(int *)((int)register0x00000054 + -0x20) = iVar1;
        *(int *)((int)register0x00000054 + -0x1c) = iVar1;
        FUN_000986b8();
        iVar1 = *(int *)((int)register0x00000054 + -0x18);
        *(int *)((int)register0x00000054 + -4) = iVar1;
        iVar2 = 0;
        while (iVar3 = *(int *)((int)register0x00000054 + 8), iVar2 < iVar3) {
          *(int *)((int)register0x00000054 + -8) = iVar1 + iVar2 * 8;
          uVar6 = *(undefined8 *)(*(int *)((int)register0x00000054 + 4) + iVar2 * 8);
          uVar7 = *(undefined8 *)(*(int *)((int)register0x00000054 + 0x10) + iVar2 * 8);
          *(int *)((int)register0x00000054 + -0xc) = iVar2 + 1;
          *(undefined8 *)((int)register0x00000054 + -0x24) = uVar6;
          *(undefined8 *)((int)register0x00000054 + -0x1c) = uVar7;
          k3c_common_cmath__Cfunc_fmax();
          **(undefined8 **)((int)register0x00000054 + -8) =
               *(undefined8 *)((int)register0x00000054 + -0x14);
          iVar1 = *(int *)((int)register0x00000054 + -4);
          iVar2 = *(int *)((int)register0x00000054 + -0xc);
        }
        *(int *)((int)register0x00000054 + 0x1c) = iVar1;
        *(int *)((int)register0x00000054 + 0x20) = iVar3;
        *(int *)((int)register0x00000054 + 0x24) = iVar3;
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_004894d0;
      *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_004894d4;
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x4894c4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/utils/maths.Mean @ 004894d8 (size 828) */

/* WARNING: Removing unreachable block (ram,0x00489528) */

void k3c_common_utils_maths_Mean(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint extraout_r1;
  int iVar5;
  uint uVar6;
  uint extraout_r2;
  int iVar7;
  int extraout_r3;
  double *pdVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int unaff_r10;
  undefined1 *puVar12;
  undefined4 unaff_lr;
  undefined1 uVar13;
  uint in_fpscr;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  double dVar14;
  double dVar15;
  uint unaff_s30;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar12 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      iVar5 = *(int *)((int)register0x00000054 + 0x10);
      if (iVar5 == 0) {
        piVar3 = *(int **)((int)register0x00000054 + 4);
        dVar14 = 0.0;
        iVar10 = 0;
        for (iVar5 = *(int *)((int)register0x00000054 + 8); 0 < iVar5; iVar5 = iVar5 + -1) {
          for (iVar7 = 0; iVar7 < piVar3[1]; iVar7 = iVar7 + 1) {
            dVar14 = dVar14 + *(double *)(*piVar3 + iVar7 * 8);
            iVar10 = iVar10 + 1;
          }
          piVar3 = piVar3 + 3;
        }
        *(int *)((int)register0x00000054 + -0xc) = iVar10;
        *(double *)((int)register0x00000054 + -0x1c) = dVar14;
        *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_00489820;
        FUN_000987f4();
        pdVar8 = *(double **)((int)register0x00000054 + -0x2c);
        dVar14 = (double)VectorSignedToFloat(unaff_s30 & 0xffff0000 |
                                             *(uint *)((int)register0x00000054 + -0xc) & 0xffff,
                                             (byte)(in_fpscr >> 0x16) & 3);
        uVar4 = *(uint *)((int)register0x00000054 + -0x24);
        *pdVar8 = *(double *)((int)register0x00000054 + -0x1c) / dVar14;
        uVar9 = 1;
        goto LAB_00489614;
      }
      if ((*(int *)(iVar5 + 8) == DAT_00489818) && (iVar5 == DAT_0048981c)) {
        iVar5 = **(int **)((int)register0x00000054 + 0x14);
      }
      else {
        iVar5 = 0;
      }
      if (iVar5 != 0) {
        if (iVar5 == 1) {
          iVar10 = *(int *)((int)register0x00000054 + 8);
          iVar7 = *(int *)((int)register0x00000054 + 4);
          uVar4 = 0;
          pdVar8 = (double *)0x0;
          uVar9 = 0;
          for (iVar5 = 0; iVar5 < iVar10; iVar5 = iVar5 + 1) {
            uVar6 = 0;
            dVar14 = 0.0;
            while( true ) {
              uVar2 = *(uint *)(iVar7 + iVar5 * 0xc + 4);
              if ((int)uVar2 <= (int)uVar6) break;
              if (uVar2 <= uVar6) {
                uVar2 = FUN_0009dbd4(uVar6,uVar2);
                dVar14 = (double)CONCAT44(extraout_s1,extraout_s0);
                uVar4 = extraout_r1;
                uVar6 = extraout_r2;
                iVar5 = extraout_r3;
                goto LAB_00489720;
              }
              iVar1 = uVar6 * 8;
              uVar6 = uVar6 + 1;
              dVar14 = dVar14 + *(double *)(*(int *)(iVar7 + iVar5 * 0xc) + iVar1);
            }
            uVar9 = uVar9 + 1;
            unaff_s30 = unaff_s30 & 0xffff0000 | uVar2 & 0xffff;
            dVar15 = (double)VectorSignedToFloat(unaff_s30,(byte)(in_fpscr >> 0x16) & 3);
            dVar14 = dVar14 / dVar15;
            if (uVar4 < uVar9) {
              *(int *)((int)register0x00000054 + -0x10) = iVar5;
              *(double *)((int)register0x00000054 + -8) = dVar14;
              *(double **)((int)register0x00000054 + -0x40) = pdVar8;
              *(uint *)((int)register0x00000054 + -0x3c) = uVar9;
              *(uint *)((int)register0x00000054 + -0x38) = uVar4;
              *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_00489820;
              FUN_000987f4();
              pdVar8 = *(double **)((int)register0x00000054 + -0x2c);
              uVar9 = *(uint *)((int)register0x00000054 + -0x28);
              uVar4 = *(uint *)((int)register0x00000054 + -0x24);
              iVar5 = *(int *)((int)register0x00000054 + -0x10);
              iVar10 = *(int *)((int)register0x00000054 + 8);
              iVar7 = *(int *)((int)register0x00000054 + 4);
              dVar14 = *(double *)((int)register0x00000054 + -8);
            }
            pdVar8[uVar9 - 1] = dVar14;
          }
        }
        else {
          uVar9 = 0;
          uVar4 = 0;
          pdVar8 = (double *)0x0;
        }
LAB_00489614:
        *(double **)((int)register0x00000054 + 0x18) = pdVar8;
        *(uint *)((int)register0x00000054 + 0x1c) = uVar9;
        *(uint *)((int)register0x00000054 + 0x20) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00489620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x44))();
        return;
      }
      uVar6 = *(uint *)((int)register0x00000054 + 8);
      iVar5 = *(int *)((int)register0x00000054 + 4);
      uVar2 = 0;
      uVar4 = 0;
      pdVar8 = (double *)0x0;
      uVar9 = 0;
      while (uVar13 = uVar6 == 0, !(bool)uVar13) {
        if (*(int *)(iVar5 + 4) <= (int)uVar2) goto LAB_00489614;
        dVar14 = 0.0;
        for (iVar10 = 0; iVar10 < (int)uVar6; iVar10 = iVar10 + 1) {
          uVar11 = *(uint *)(iVar5 + iVar10 * 0xc + 4);
          uVar13 = uVar2 == uVar11;
          if (uVar11 <= uVar2) {
            FUN_0009dbd4(uVar2,uVar11);
            goto LAB_004897f8;
          }
          dVar14 = dVar14 + *(double *)(*(int *)(iVar5 + iVar10 * 0xc) + uVar2 * 8);
        }
        uVar9 = uVar9 + 1;
        unaff_s30 = unaff_s30 & 0xffff0000 | uVar6 & 0xffff;
        dVar15 = (double)VectorSignedToFloat(unaff_s30,(byte)(in_fpscr >> 0x16) & 3);
        dVar14 = dVar14 / dVar15;
        if (uVar4 < uVar9) {
          *(double *)((int)register0x00000054 + -8) = dVar14;
          *(uint *)((int)register0x00000054 + -0x14) = uVar2;
          *(double **)((int)register0x00000054 + -0x40) = pdVar8;
          *(uint *)((int)register0x00000054 + -0x3c) = uVar9;
          *(uint *)((int)register0x00000054 + -0x38) = uVar4;
          *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_00489820;
          FUN_000987f4();
          pdVar8 = *(double **)((int)register0x00000054 + -0x2c);
          uVar9 = *(uint *)((int)register0x00000054 + -0x28);
          uVar4 = *(uint *)((int)register0x00000054 + -0x24);
          uVar2 = *(uint *)((int)register0x00000054 + -0x14);
          uVar6 = *(uint *)((int)register0x00000054 + 8);
          iVar5 = *(int *)((int)register0x00000054 + 4);
          dVar14 = *(double *)((int)register0x00000054 + -8);
        }
LAB_00489720:
        pdVar8[uVar9 - 1] = dVar14;
        uVar2 = uVar2 + 1;
      }
LAB_004897f8:
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if ((bool)uVar13) {
        register0x00000054 = (BADSPACEBASE *)puVar12;
      }
    }
    unaff_lr = 0x489810;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/utils/maths.NewNdarray @ 00489824 (size 576) */

void k3c_common_utils_maths_NewNdarray(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *extraout_r1;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_r3;
  int extraout_r3_00;
  int iVar7;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  bool bVar9;
  undefined8 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x38) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_00489a68;
      FUN_00022cf8();
      bVar9 = *(undefined **)((int)register0x00000054 + 4) == PTR_DAT_00489a6c;
      if (bVar9) {
        iVar1 = *(int *)((int)register0x00000054 + -0x30);
        puVar2 = *(undefined4 **)((int)register0x00000054 + 8);
        uVar4 = puVar2[1];
        *(undefined4 *)((int)register0x00000054 + -8) = uVar4;
        uVar5 = puVar2[2];
        uVar10 = CONCAT44(*puVar2,iVar1);
        *(undefined4 *)(iVar1 + 4) = uVar4;
        *(undefined4 *)(iVar1 + 8) = uVar5;
        if (*(int *)PTR_DAT_00489a70 != 0) {
          uVar10 = FUN_0009db54();
          *unaff_r8 = (int)((ulonglong)uVar10 >> 0x20);
        }
        *(undefined4 **)((int)register0x00000054 + -4) = (undefined4 *)uVar10;
        *(undefined4 *)uVar10 = (int)((ulonglong)uVar10 >> 0x20);
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_00489a74;
        FUN_00022cf8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x30);
        *puVar2 = *(undefined4 *)((int)register0x00000054 + -8);
        iVar6 = 0;
        for (iVar1 = 0; iVar1 < (*(int **)((int)register0x00000054 + -4))[1]; iVar1 = iVar1 + 1) {
          iVar7 = *(int *)(**(int **)((int)register0x00000054 + -4) + iVar1 * 0xc + 4);
          if (iVar7 <= iVar6) {
            iVar7 = iVar6;
          }
          iVar6 = iVar7;
        }
        *(int *)((int)register0x00000054 + -0xc) = iVar6;
        *(undefined4 **)((int)register0x00000054 + -0x34) = puVar2;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x28) = 1;
        *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_00489a78;
        FUN_000987f4();
        iVar6 = *(int *)((int)register0x00000054 + -0x20);
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)(iVar6 + 4) = *(undefined4 *)((int)register0x00000054 + -0xc);
        iVar1 = *(int *)((int)register0x00000054 + -4);
        *(undefined4 *)(iVar1 + 0x10) = 2;
        *(undefined4 *)(iVar1 + 0x14) = uVar4;
        if (*(int *)PTR_DAT_00489a70 != 0) {
          iVar6 = FUN_0009db64();
          *unaff_r8 = iVar6;
          unaff_r8[1] = *(int *)(extraout_r3 + 0xc);
          iVar1 = extraout_r3;
        }
        *(int *)(iVar1 + 0xc) = iVar6;
        uVar4 = *(undefined4 *)(iVar1 + 4);
        *(undefined4 *)((int)register0x00000054 + -8) = uVar4;
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_00489a74;
        FUN_00022cf8(uVar4);
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x30);
        *puVar2 = *(undefined4 *)((int)register0x00000054 + -8);
        iVar6 = 0;
        for (iVar1 = 0; iVar1 < (*(int **)((int)register0x00000054 + -4))[1]; iVar1 = iVar1 + 1) {
          iVar7 = *(int *)(**(int **)((int)register0x00000054 + -4) + iVar1 * 0xc + 4);
          if (iVar7 <= iVar6) {
            iVar7 = iVar6;
          }
          iVar6 = iVar7;
        }
        *(int *)((int)register0x00000054 + -0x10) = iVar6;
        *(undefined4 **)((int)register0x00000054 + -0x34) = puVar2;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x28) = 1;
        *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_00489a78;
        FUN_000987f4();
        piVar3 = *(int **)((int)register0x00000054 + -0x20);
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x18);
        *piVar3 = *(int *)((int)register0x00000054 + -0x10) << 3;
        piVar3[1] = 8;
        iVar1 = *(int *)((int)register0x00000054 + -4);
        *(undefined4 *)(iVar1 + 0x1c) = 2;
        *(undefined4 *)(iVar1 + 0x20) = uVar4;
        if (*(int *)PTR_DAT_00489a70 != 0) {
          FUN_0009db64();
          *unaff_r8 = (int)extraout_r1;
          unaff_r8[1] = *(int *)(extraout_r3_00 + 0x18);
          piVar3 = extraout_r1;
          iVar1 = extraout_r3_00;
        }
        *(int **)(iVar1 + 0x18) = piVar3;
        *(int *)((int)register0x00000054 + 0xc) = iVar1;
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_00489a7c;
      *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_00489a80;
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x38);
      if (bVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x489a60;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/utils/maths.NewNdarray_Copy @ 00489a84 (size 1368) */

void k3c_common_utils_maths_NewNdarray_Copy(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *extraout_r1;
  undefined4 uVar3;
  int *piVar4;
  int *extraout_r2;
  int iVar5;
  int *extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r3;
  int iVar6;
  int *extraout_r3_00;
  undefined4 uVar7;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  bool bVar9;
  undefined8 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00489fe0;
      FUN_00022cf8();
      bVar9 = *(undefined **)((int)register0x00000054 + 4) == PTR_DAT_00489fe4;
      if (bVar9) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 4);
        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar3;
        *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00489fe8;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x38) = uVar3;
        FUN_000986b8();
        iVar2 = *(int *)((int)register0x00000054 + -0x10);
        uVar10 = CONCAT44(iVar2,*(undefined4 *)((int)register0x00000054 + -0x34));
        piVar4 = *(int **)((int)register0x00000054 + -4);
        piVar4[1] = iVar2;
        piVar4[2] = iVar2;
        if (*(int *)PTR_DAT_00489fec != 0) {
          uVar10 = FUN_0009db64();
          *unaff_r8 = (int)uVar10;
          unaff_r8[1] = *extraout_r2;
          piVar4 = extraout_r2;
        }
        *piVar4 = (int)uVar10;
        iVar2 = *piVar4;
        uVar7 = **(undefined4 **)((int)register0x00000054 + 8);
        uVar3 = (*(undefined4 **)((int)register0x00000054 + 8))[1];
        *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00489fe8;
        *(int *)((int)register0x00000054 + -0x3c) = iVar2;
        *(int *)((int)register0x00000054 + -0x38) = (int)((ulonglong)uVar10 >> 0x20);
        *(undefined4 *)((int)register0x00000054 + -0x34) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar3;
        FUN_00093f5c();
        iVar2 = *(int *)((int)register0x00000054 + 0x10);
        if (iVar2 == 0) {
          piVar4 = *(int **)((int)register0x00000054 + -4);
          *(int *)((int)register0x00000054 + -8) = piVar4[1];
          iVar5 = 0;
          for (iVar2 = 0; iVar2 < piVar4[1]; iVar2 = iVar2 + 1) {
            iVar6 = *(int *)(*piVar4 + iVar2 * 0xc + 4);
            if (iVar6 <= iVar5) {
              iVar6 = iVar5;
            }
            iVar5 = iVar6;
          }
          *(int *)((int)register0x00000054 + -0x14) = iVar5;
          *(undefined1 **)((int)register0x00000054 + -0x40) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
          *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_00489ff0;
          FUN_000987f4();
          *(undefined4 *)(*(int *)((int)register0x00000054 + -0x2c) + 4) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00489ff0;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x38) = 2;
          FUN_000986b8();
          iVar5 = *(int *)((int)register0x00000054 + -0x34);
          iVar2 = *(int *)((int)register0x00000054 + -4);
          *(undefined4 *)(iVar2 + 0x10) = 2;
          *(undefined4 *)(iVar2 + 0x14) = 2;
          if (*(int *)PTR_DAT_00489fec != 0) {
            iVar5 = FUN_0009db64();
            *unaff_r8 = iVar5;
            unaff_r8[1] = *(int *)(extraout_r2_03 + 0xc);
            iVar2 = extraout_r2_03;
          }
          *(int *)(iVar2 + 0xc) = iVar5;
          *(undefined4 *)((int)register0x00000054 + -0x10) = *(undefined4 *)(iVar2 + 4);
          *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00489ff4;
          FUN_00022cf8();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x3c);
          *puVar1 = *(undefined4 *)((int)register0x00000054 + -0x10);
          iVar5 = 0;
          for (iVar2 = 0; iVar2 < (*(int **)((int)register0x00000054 + -4))[1]; iVar2 = iVar2 + 1) {
            iVar6 = *(int *)(**(int **)((int)register0x00000054 + -4) + iVar2 * 0xc + 4);
            if (iVar6 <= iVar5) {
              iVar6 = iVar5;
            }
            iVar5 = iVar6;
          }
          *(int *)((int)register0x00000054 + -0x18) = iVar5;
          *(undefined4 **)((int)register0x00000054 + -0x40) = puVar1;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
          *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_00489ff0;
          FUN_000987f4();
          iVar2 = *(int *)((int)register0x00000054 + -0x2c);
          iVar5 = *(int *)((int)register0x00000054 + -0x24);
          *(undefined4 *)(iVar2 + 4) = *(undefined4 *)((int)register0x00000054 + -0x18);
          piVar4 = *(int **)((int)register0x00000054 + -4);
          piVar4[4] = 2;
          piVar4[5] = iVar5;
          if (*(int *)PTR_DAT_00489fec != 0) {
            iVar2 = FUN_0009db64();
            *unaff_r8 = iVar2;
            unaff_r8[1] = extraout_r3_00[3];
            piVar4 = extraout_r3_00;
          }
          piVar4[3] = iVar2;
        }
        else {
          *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00489ff0;
          *(int *)((int)register0x00000054 + -0x3c) = iVar2;
          *(int *)((int)register0x00000054 + -0x38) = iVar2;
          FUN_000986b8();
          iVar2 = *(int *)((int)register0x00000054 + 0x10);
          uVar10 = CONCAT44(iVar2,*(undefined4 *)((int)register0x00000054 + -0x34));
          piVar4 = *(int **)((int)register0x00000054 + -4);
          piVar4[4] = iVar2;
          piVar4[5] = iVar2;
          if (*(int *)PTR_DAT_00489fec != 0) {
            uVar10 = FUN_0009db64();
            *unaff_r8 = (int)uVar10;
            unaff_r8[1] = extraout_r2_00[3];
            piVar4 = extraout_r2_00;
          }
          piVar4[3] = (int)uVar10;
          if (*(int *)((int)register0x00000054 + 0xc) != piVar4[3]) {
            *(int *)((int)register0x00000054 + -0x40) = piVar4[3];
            *(int *)((int)register0x00000054 + -0x3c) = *(int *)((int)register0x00000054 + 0xc);
            *(int *)((int)register0x00000054 + -0x38) = (int)((ulonglong)uVar10 >> 0x20) << 2;
            FUN_0009e3a4();
            piVar4 = *(int **)((int)register0x00000054 + -4);
          }
        }
        iVar2 = *(int *)((int)register0x00000054 + 0x1c);
        if (iVar2 == 0) {
          *(int *)((int)register0x00000054 + -0xc) = piVar4[1];
          iVar5 = 0;
          for (iVar2 = 0; iVar2 < piVar4[1]; iVar2 = iVar2 + 1) {
            iVar6 = *(int *)(*piVar4 + iVar2 * 0xc + 4);
            if (iVar6 <= iVar5) {
              iVar6 = iVar5;
            }
            iVar5 = iVar6;
          }
          *(int *)((int)register0x00000054 + -0x10) = iVar5 << 3;
          *(undefined1 **)((int)register0x00000054 + -0x40) =
               (undefined1 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
          *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_00489ff0;
          FUN_000987f4();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x2c);
          *puVar1 = *(undefined4 *)((int)register0x00000054 + -0x10);
          puVar1[1] = 8;
          *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00489ff0;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x38) = 2;
          FUN_000986b8();
          iVar5 = *(int *)((int)register0x00000054 + -0x34);
          iVar2 = *(int *)((int)register0x00000054 + -4);
          *(undefined4 *)(iVar2 + 0x1c) = 2;
          *(undefined4 *)(iVar2 + 0x20) = 2;
          if (*(int *)PTR_DAT_00489fec != 0) {
            iVar5 = FUN_0009db64();
            *unaff_r8 = iVar5;
            unaff_r8[1] = *(int *)(extraout_r2_02 + 0x18);
            iVar2 = extraout_r2_02;
          }
          *(int *)(iVar2 + 0x18) = iVar5;
          uVar3 = *(undefined4 *)(iVar2 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x10) = uVar3;
          *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00489ff4;
          FUN_00022cf8(uVar3);
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x3c);
          *puVar1 = *(undefined4 *)((int)register0x00000054 + -0x10);
          iVar5 = 0;
          for (iVar2 = 0; iVar2 < (*(int **)((int)register0x00000054 + -4))[1]; iVar2 = iVar2 + 1) {
            iVar6 = *(int *)(**(int **)((int)register0x00000054 + -4) + iVar2 * 0xc + 4);
            if (iVar6 <= iVar5) {
              iVar6 = iVar5;
            }
            iVar5 = iVar6;
          }
          *(int *)((int)register0x00000054 + -0x1c) = iVar5;
          *(undefined4 **)((int)register0x00000054 + -0x40) = puVar1;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
          *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_00489ff0;
          FUN_000987f4();
          piVar4 = *(int **)((int)register0x00000054 + -0x2c);
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x24);
          *piVar4 = *(int *)((int)register0x00000054 + -0x1c) << 3;
          piVar4[1] = 8;
          iVar2 = *(int *)((int)register0x00000054 + -4);
          *(undefined4 *)(iVar2 + 0x1c) = 2;
          *(undefined4 *)(iVar2 + 0x20) = uVar3;
          if (*(int *)PTR_DAT_00489fec != 0) {
            FUN_0009db64();
            *unaff_r8 = (int)extraout_r1;
            unaff_r8[1] = *(int *)(extraout_r3 + 0x18);
            piVar4 = extraout_r1;
            iVar2 = extraout_r3;
          }
          *(int **)(iVar2 + 0x18) = piVar4;
        }
        else {
          *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00489ff0;
          *(int *)((int)register0x00000054 + -0x3c) = iVar2;
          *(int *)((int)register0x00000054 + -0x38) = iVar2;
          FUN_000986b8();
          uVar3 = *(undefined4 *)((int)register0x00000054 + 0x1c);
          uVar10 = CONCAT44(uVar3,*(undefined4 *)((int)register0x00000054 + -0x34));
          iVar2 = *(int *)((int)register0x00000054 + -4);
          *(undefined4 *)(iVar2 + 0x1c) = uVar3;
          *(undefined4 *)(iVar2 + 0x20) = uVar3;
          if (*(int *)PTR_DAT_00489fec != 0) {
            uVar10 = FUN_0009db64();
            *unaff_r8 = (int)uVar10;
            unaff_r8[1] = *(int *)(extraout_r2_01 + 0x18);
            iVar2 = extraout_r2_01;
          }
          *(int *)(iVar2 + 0x18) = (int)uVar10;
          if (*(int *)((int)register0x00000054 + 0x18) != *(int *)(iVar2 + 0x18)) {
            *(int *)((int)register0x00000054 + -0x40) = *(int *)(iVar2 + 0x18);
            *(int *)((int)register0x00000054 + -0x3c) = *(int *)((int)register0x00000054 + 0x18);
            *(int *)((int)register0x00000054 + -0x38) = (int)((ulonglong)uVar10 >> 0x20) << 2;
            FUN_0009e3a4();
            iVar2 = *(int *)((int)register0x00000054 + -4);
          }
        }
        *(int *)((int)register0x00000054 + 0x24) = iVar2;
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00489ff8;
      *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_00489ffc;
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if (bVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x489fd8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/utils/maths.(*Ndarray).Len @ 0048a000 (size 16) */

void k3c_common_utils_maths___Ndarray__Len(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0048a00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/common/utils/maths.(*Ndarray).Slice @ 0048a010 (size 1796) */

void k3c_common_utils_maths___Ndarray__Slice(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int extraout_r1;
  undefined *puVar5;
  uint uVar6;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  uint extraout_r2_04;
  int *extraout_r2_05;
  uint extraout_r2_06;
  undefined *puVar7;
  uint uVar8;
  uint extraout_r3;
  int extraout_r3_00;
  int iVar9;
  uint extraout_r3_01;
  uint extraout_r3_02;
  int *extraout_r3_03;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  int *unaff_r8;
  undefined4 *puVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int unaff_r10;
  undefined1 *puVar21;
  undefined4 unaff_lr;
  undefined1 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  while (puVar1 = PTR_DAT_0048a718, register0x00000054 <= *(undefined1 **)(unaff_r10 + 8)) {
LAB_0048a708:
    unaff_lr = 0x48a710;
    param_1 = FUN_0009bf64(param_1);
  }
  puVar21 = (undefined1 *)((int)register0x00000054 + -0x68);
  *(undefined4 *)((int)register0x00000054 + -0x68) = unaff_lr;
  puVar5 = *(undefined **)((int)register0x00000054 + 8);
  if (puVar5 == (undefined *)0x0) {
    puVar7 = *(undefined **)((int)register0x00000054 + 0x10);
    if (puVar7 == (undefined *)0x0) {
      piVar10 = *(int **)((int)register0x00000054 + 4);
      piVar12 = (int *)*piVar10;
      uVar14 = piVar10[1];
      uVar16 = piVar10[2];
    }
    else {
      piVar10 = *(int **)((int)register0x00000054 + 4);
      uVar16 = 0;
      piVar12 = (int *)0x0;
      uVar14 = 0;
    }
  }
  else {
    puVar7 = *(undefined **)((int)register0x00000054 + 0x10);
    piVar10 = *(int **)((int)register0x00000054 + 4);
    uVar16 = 0;
    piVar12 = (int *)0x0;
    uVar14 = 0;
  }
  if (puVar5 == (undefined *)0x0) {
    if (puVar7 == PTR_DAT_0048a718) {
      uVar6 = **(uint **)((int)register0x00000054 + 0x14);
      *(uint *)((int)register0x00000054 + -0x2c) = uVar6;
      uVar8 = uVar14 + 1;
      if (uVar16 < uVar8) {
        *(int **)((int)register0x00000054 + -100) = piVar12;
        *(uint *)((int)register0x00000054 + -0x60) = uVar8;
        *(uint *)((int)register0x00000054 + -0x5c) = uVar16;
        *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0048a71c;
        FUN_000987f4();
        piVar12 = *(int **)((int)register0x00000054 + -0x50);
        uVar8 = *(uint *)((int)register0x00000054 + -0x4c);
        uVar16 = *(uint *)((int)register0x00000054 + -0x48);
        uVar6 = *(uint *)((int)register0x00000054 + -0x2c);
        piVar10 = *(int **)((int)register0x00000054 + 4);
      }
      uVar3 = 0;
      piVar12[uVar8 * 3 + -2] = 0;
      piVar12[uVar8 * 3 + -1] = 0;
      uVar14 = uVar8;
      if (*(int *)PTR_DAT_0048a720 != 0) {
        puVar17 = (undefined4 *)piVar12[uVar8 * 3 + -3];
        uVar24 = FUN_0009db54(puVar17);
        uVar3 = (undefined4)((ulonglong)uVar24 >> 0x20);
        *puVar17 = (int)uVar24;
        uVar6 = extraout_r2;
        uVar14 = extraout_r3;
      }
      unaff_r8 = (int *)PTR_DAT_0048a724;
      *(int **)((int)register0x00000054 + -0x18) = piVar12;
      *(uint *)((int)register0x00000054 + -0x3c) = uVar14;
      *(uint *)((int)register0x00000054 + -0x38) = uVar16;
      piVar12[uVar8 * 3 + -3] = (int)PTR_DAT_0048a724;
      iVar2 = 0;
      goto LAB_0048a5f8;
    }
    goto LAB_0048a504;
  }
  uVar6 = uVar14;
  if (puVar7 == (undefined *)0x0) {
    if (puVar5 == PTR_DAT_0048a718) {
      uVar8 = **(uint **)((int)register0x00000054 + 0xc);
      if (piVar10[1] <= (int)uVar8) goto LAB_0048a3a4;
      if (uVar8 < (uint)piVar10[1]) {
        uVar6 = uVar14 + 1;
        iVar20 = *piVar10 + uVar8 * 0xc;
        uVar3 = *(undefined4 *)(*piVar10 + uVar8 * 0xc);
        iVar2 = *(int *)(iVar20 + 4);
        iVar20 = *(int *)(iVar20 + 8);
        if (uVar16 < uVar6) {
          *(undefined4 *)((int)register0x00000054 + -0x14) = uVar3;
          *(int *)((int)register0x00000054 + -0x1c) = iVar2;
          *(int *)((int)register0x00000054 + -0x20) = iVar20;
          *(int **)((int)register0x00000054 + -100) = piVar12;
          *(uint *)((int)register0x00000054 + -0x60) = uVar6;
          *(uint *)((int)register0x00000054 + -0x5c) = uVar16;
          *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0048a71c;
          FUN_000987f4();
          piVar12 = *(int **)((int)register0x00000054 + -0x50);
          uVar6 = *(uint *)((int)register0x00000054 + -0x4c);
          uVar16 = *(uint *)((int)register0x00000054 + -0x48);
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x14);
          iVar2 = *(int *)((int)register0x00000054 + -0x1c);
          iVar20 = *(int *)((int)register0x00000054 + -0x20);
          piVar10 = *(int **)((int)register0x00000054 + 4);
        }
        uVar24 = CONCAT44(uVar6,uVar3);
        unaff_r8 = piVar12 + uVar6 * 3 + -3;
        unaff_r8[1] = iVar2;
        unaff_r8[2] = iVar20;
        if (*(int *)PTR_DAT_0048a720 != 0) {
          uVar24 = FUN_0009db64();
          *unaff_r8 = (int)uVar24;
          unaff_r8[1] = piVar12[uVar6 * 3 + -3];
        }
        uVar14 = (uint)((ulonglong)uVar24 >> 0x20);
        piVar12[uVar6 * 3 + -3] = (int)uVar24;
        uVar6 = uVar6 * 0xc - 0xc;
        goto LAB_0048a3a4;
      }
    }
    else {
LAB_0048a3a4:
      *(int **)((int)register0x00000054 + -0x18) = piVar12;
      *(uint *)((int)register0x00000054 + -0x3c) = uVar14;
      *(uint *)((int)register0x00000054 + -0x38) = uVar16;
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0048a72c;
      FUN_00022cf8();
      iVar2 = *(int *)((int)register0x00000054 + 4);
      if (1 < *(uint *)(iVar2 + 0x1c)) {
        uVar24 = CONCAT44(*(undefined4 **)((int)register0x00000054 + -0x60),iVar2);
        **(undefined4 **)((int)register0x00000054 + -0x60) =
             *(undefined4 *)(*(int *)(iVar2 + 0x18) + 4);
        *(undefined4 *)(iVar2 + 0x1c) = 1;
        *(undefined4 *)(iVar2 + 0x20) = 1;
        if (*(int *)PTR_DAT_0048a720 != 0) {
          uVar24 = FUN_0009db64();
          *unaff_r8 = (int)((ulonglong)uVar24 >> 0x20);
          unaff_r8[1] = *(int *)((int)uVar24 + 0x18);
        }
        *(int *)((int)uVar24 + 0x18) = (int)((ulonglong)uVar24 >> 0x20);
        *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0048a72c;
        FUN_00022cf8();
        iVar2 = *(int *)((int)register0x00000054 + 4);
        if (1 < *(uint *)(iVar2 + 0x10)) {
          uVar24 = CONCAT44(*(undefined4 **)((int)register0x00000054 + -0x60),iVar2);
          **(undefined4 **)((int)register0x00000054 + -0x60) =
               *(undefined4 *)(*(int *)(iVar2 + 0xc) + 4);
          *(undefined4 *)(iVar2 + 0x10) = 1;
          *(undefined4 *)(iVar2 + 0x14) = 1;
          if (*(int *)PTR_DAT_0048a720 != 0) {
            uVar24 = FUN_0009db64();
            *unaff_r8 = (int)((ulonglong)uVar24 >> 0x20);
            unaff_r8[1] = *(int *)((int)uVar24 + 0xc);
          }
          piVar10 = (int *)uVar24;
          piVar10[3] = (int)((ulonglong)uVar24 >> 0x20);
          uVar14 = *(uint *)((int)register0x00000054 + -0x3c);
          uVar16 = *(uint *)((int)register0x00000054 + -0x38);
          piVar12 = *(int **)((int)register0x00000054 + -0x18);
LAB_0048a478:
          *(int **)((int)register0x00000054 + -0xc) = piVar12;
          *(uint *)((int)register0x00000054 + -8) = uVar14;
          *(uint *)((int)register0x00000054 + -4) = uVar16;
          iVar2 = piVar10[3];
          iVar20 = piVar10[4];
          iVar18 = piVar10[5];
          iVar9 = piVar10[6];
          iVar13 = piVar10[7];
          iVar11 = piVar10[8];
          *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0048a730;
          *(undefined1 **)((int)register0x00000054 + -0x60) =
               (undefined1 *)((int)register0x00000054 + -0xc);
          *(int *)((int)register0x00000054 + -0x5c) = iVar2;
          *(int *)((int)register0x00000054 + -0x58) = iVar20;
          *(int *)((int)register0x00000054 + -0x54) = iVar18;
          *(int *)((int)register0x00000054 + -0x50) = iVar9;
          *(int *)((int)register0x00000054 + -0x4c) = iVar13;
          *(int *)((int)register0x00000054 + -0x48) = iVar11;
          k3c_common_utils_maths_NewNdarray_Copy();
          *(undefined4 *)((int)register0x00000054 + 0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
                    /* WARNING: Could not recover jumptable at 0x0048a4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x68))();
          return;
        }
        FUN_0009dbd4(1);
      }
      FUN_0009dbd4(1);
      uVar8 = extraout_r2_01;
    }
    FUN_0009dbd4(uVar8);
    uVar8 = extraout_r3_01;
LAB_0048a4ec:
    FUN_0009dbd4(uVar8);
    uVar14 = extraout_r2_02;
LAB_0048a4f4:
    FUN_0009dbd4(uVar14);
    uVar8 = extraout_r2_03;
  }
  else {
    if ((puVar5 != PTR_DAT_0048a718) ||
       (uVar8 = **(uint **)((int)register0x00000054 + 0xc), puVar7 != PTR_DAT_0048a718))
    goto LAB_0048a478;
    iVar2 = **(int **)((int)register0x00000054 + 0x14);
    if (piVar10[1] <= (int)uVar8) goto LAB_0048a478;
    unaff_r8 = (int *)PTR_DAT_0048a718;
    if (uVar8 < (uint)piVar10[1]) {
      if (*(int *)(*piVar10 + uVar8 * 0xc + 4) <= iVar2) goto LAB_0048a478;
      *(uint *)((int)register0x00000054 + -0x1c) = uVar8 * 3;
      *(uint *)((int)register0x00000054 + -0x40) = uVar8;
      *(int *)((int)register0x00000054 + -0x30) = iVar2;
      *(uint *)((int)register0x00000054 + -0x38) = uVar16;
      *(uint *)((int)register0x00000054 + -0x3c) = uVar14;
      *(int **)((int)register0x00000054 + -0x18) = piVar12;
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0048a728;
      FUN_00022cf8();
      piVar15 = *(int **)((int)register0x00000054 + 4);
      uVar14 = *(uint *)((int)register0x00000054 + -0x40);
      unaff_r8 = (int *)puVar1;
      if (uVar14 < (uint)piVar15[1]) {
        piVar10 = (int *)(*piVar15 + *(int *)((int)register0x00000054 + -0x1c) * 4);
        uVar8 = *(uint *)((int)register0x00000054 + -0x30);
        if (uVar8 < (uint)piVar10[1]) {
          puVar4 = *(undefined8 **)((int)register0x00000054 + -0x60);
          uVar14 = *(int *)((int)register0x00000054 + -0x3c) + 1;
          *puVar4 = *(undefined8 *)
                     (*(int *)(*piVar15 + *(int *)((int)register0x00000054 + -0x1c) * 4) + uVar8 * 8
                     );
          uVar16 = *(uint *)((int)register0x00000054 + -0x38);
          if (uVar16 < uVar14) {
            *(undefined8 **)((int)register0x00000054 + -0x10) = puVar4;
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + -0x18);
            *(uint *)((int)register0x00000054 + -0x60) = uVar14;
            *(uint *)((int)register0x00000054 + -0x5c) = uVar16;
            *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
            *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0048a71c;
            FUN_000987f4();
            piVar12 = *(int **)((int)register0x00000054 + -0x50);
            uVar14 = *(uint *)((int)register0x00000054 + -0x4c);
            uVar16 = *(uint *)((int)register0x00000054 + -0x48);
            piVar15 = *(int **)((int)register0x00000054 + 4);
            puVar4 = *(undefined8 **)((int)register0x00000054 + -0x10);
          }
          else {
            piVar12 = *(int **)((int)register0x00000054 + -0x18);
          }
          uVar24 = CONCAT44(puVar4,piVar15);
          iVar2 = uVar14 * 0xc + -0xc;
          piVar12[uVar14 * 3 + -2] = 1;
          piVar12[uVar14 * 3 + -1] = 1;
          if (*(int *)PTR_DAT_0048a720 != 0) {
            uVar24 = FUN_0009db64();
            *(int *)puVar1 = (int)((ulonglong)uVar24 >> 0x20);
            *(undefined4 *)(puVar1 + 4) = *(undefined4 *)((int)piVar12 + extraout_r3_00);
            uVar16 = extraout_r2_00;
            iVar2 = extraout_r3_00;
          }
          piVar10 = (int *)uVar24;
          *(int *)((int)piVar12 + iVar2) = (int)((ulonglong)uVar24 >> 0x20);
          goto LAB_0048a478;
        }
        goto LAB_0048a4ec;
      }
      goto LAB_0048a4f4;
    }
  }
  FUN_0009dbd4(uVar8);
  uVar14 = uVar6;
LAB_0048a504:
  *(uint *)((int)register0x00000054 + -0x3c) = uVar14;
  *(int **)((int)register0x00000054 + -0x18) = piVar12;
  *(uint *)((int)register0x00000054 + -0x38) = uVar16;
  *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0048a72c;
  FUN_00022cf8();
  iVar2 = *(int *)((int)register0x00000054 + 4);
  if (*(int *)(iVar2 + 0x1c) != 0) {
    uVar24 = CONCAT44(*(undefined4 **)((int)register0x00000054 + -0x60),iVar2);
    **(undefined4 **)((int)register0x00000054 + -0x60) = **(undefined4 **)(iVar2 + 0x18);
    *(undefined4 *)(iVar2 + 0x1c) = 1;
    *(undefined4 *)(iVar2 + 0x20) = 1;
    if (*(int *)PTR_DAT_0048a720 != 0) {
      uVar24 = FUN_0009db64();
      *unaff_r8 = (int)((ulonglong)uVar24 >> 0x20);
      unaff_r8[1] = *(int *)((int)uVar24 + 0x18);
    }
    *(int *)((int)uVar24 + 0x18) = (int)((ulonglong)uVar24 >> 0x20);
    *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0048a72c;
    FUN_00022cf8();
    iVar2 = *(int *)((int)register0x00000054 + 4);
    if (*(int *)(iVar2 + 0x10) != 0) {
      uVar24 = CONCAT44(*(undefined4 **)((int)register0x00000054 + -0x60),iVar2);
      **(undefined4 **)((int)register0x00000054 + -0x60) = **(undefined4 **)(iVar2 + 0xc);
      *(undefined4 *)(iVar2 + 0x10) = 1;
      *(undefined4 *)(iVar2 + 0x14) = 1;
      if (*(int *)PTR_DAT_0048a720 != 0) {
        uVar24 = FUN_0009db64();
        *unaff_r8 = (int)((ulonglong)uVar24 >> 0x20);
        unaff_r8[1] = *(int *)((int)uVar24 + 0xc);
      }
      piVar10 = (int *)uVar24;
      piVar10[3] = (int)((ulonglong)uVar24 >> 0x20);
      uVar16 = *(uint *)((int)register0x00000054 + -0x38);
      uVar14 = *(uint *)((int)register0x00000054 + -0x3c);
      piVar12 = *(int **)((int)register0x00000054 + -0x18);
      goto LAB_0048a478;
    }
    FUN_0009dbd4(0,0);
  }
  uVar24 = FUN_0009dbd4(0,0);
  uVar6 = extraout_r2_04;
  uVar14 = extraout_r3_02;
LAB_0048a5f4:
  do {
    uVar3 = (undefined4)((ulonglong)uVar24 >> 0x20);
    iVar2 = (int)uVar24 + 1;
LAB_0048a5f8:
    uVar24 = CONCAT44(uVar3,iVar2);
    if (piVar10[1] <= iVar2) goto LAB_0048a504;
    unaff_r8 = (int *)(iVar2 * 3);
    uVar8 = *(uint *)(*piVar10 + iVar2 * 0xc + 4);
    uVar22 = uVar6 == uVar8;
    if ((int)uVar6 < (int)uVar8) {
      if (uVar6 < uVar8) {
        uVar23 = *(undefined8 *)(*(int *)(*piVar10 + iVar2 * 0xc) + uVar6 * 8);
        uVar22 = uVar14 == 0;
        if (!(bool)uVar22) {
          piVar15 = (int *)piVar12[2];
          iVar18 = piVar12[1];
          piVar19 = (int *)(iVar18 + 1);
          iVar20 = *piVar12;
          unaff_r8 = piVar19;
          if (piVar15 < piVar19) {
            *(int *)((int)register0x00000054 + -0x34) = iVar2;
            *(undefined8 *)((int)register0x00000054 + -0x28) = uVar23;
            *(int *)((int)register0x00000054 + -100) = iVar20;
            *(int **)((int)register0x00000054 + -0x60) = piVar19;
            *(int **)((int)register0x00000054 + -0x5c) = piVar15;
            *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
            *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0048a734;
            FUN_000987f4();
            iVar20 = *(int *)((int)register0x00000054 + -0x50);
            unaff_r8 = *(int **)((int)register0x00000054 + -0x4c);
            piVar10 = *(int **)((int)register0x00000054 + -0x18);
            piVar10[2] = *(int *)((int)register0x00000054 + -0x48);
            if (*(int *)PTR_DAT_0048a720 != 0) {
              FUN_0009db64();
              *piVar19 = extraout_r1;
              *(int *)(iVar18 + 5) = *extraout_r3_03;
              iVar20 = extraout_r1;
              unaff_r8 = extraout_r2_05;
              piVar10 = extraout_r3_03;
            }
            *piVar10 = iVar20;
            iVar2 = *(int *)((int)register0x00000054 + -0x34);
            uVar14 = *(uint *)((int)register0x00000054 + -0x3c);
            piVar10 = *(int **)((int)register0x00000054 + 4);
            piVar12 = *(int **)((int)register0x00000054 + -0x18);
            uVar16 = *(uint *)((int)register0x00000054 + -0x38);
            uVar23 = *(undefined8 *)((int)register0x00000054 + -0x28);
            uVar3 = 0;
            uVar6 = *(uint *)((int)register0x00000054 + -0x2c);
          }
          uVar24 = CONCAT44(uVar3,iVar2);
          piVar12[1] = (int)unaff_r8;
          *(undefined8 *)(iVar20 + (int)((int)unaff_r8 + -1) * 8) = uVar23;
          goto LAB_0048a5f4;
        }
        FUN_0009dbd4(uVar3);
        uVar6 = extraout_r2_06;
      }
      param_1 = FUN_0009dbd4(uVar6,uVar8);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x68);
      if ((bool)uVar22) {
        register0x00000054 = (BADSPACEBASE *)puVar21;
      }
      goto LAB_0048a708;
    }
  } while( true );
}



/* k3c/common/utils/maths.(*Ndarray).Slice1 @ 0048a738 (size 1860) */

void k3c_common_utils_maths___Ndarray__Slice1(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined8 *puVar4;
  undefined8 *extraout_r1_00;
  undefined4 uVar5;
  undefined4 *extraout_r1_01;
  undefined4 *extraout_r1_02;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined4 *extraout_r2;
  uint uVar8;
  int extraout_r2_00;
  undefined4 uVar9;
  uint extraout_r2_01;
  uint extraout_r2_02;
  uint extraout_r2_03;
  undefined4 *extraout_r2_04;
  uint extraout_r2_05;
  undefined4 *extraout_r2_06;
  undefined *puVar10;
  uint uVar11;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  undefined4 *extraout_r3_02;
  int *piVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 *unaff_r8;
  undefined4 *puVar16;
  int unaff_r10;
  undefined1 *puVar17;
  undefined4 unaff_lr;
  undefined1 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  while (puVar7 = (undefined4 *)PTR_DAT_0048ae80,
        register0x00000054 <= *(undefined1 **)(unaff_r10 + 8)) {
LAB_0048ae70:
    unaff_lr = 0x48ae78;
    param_1 = FUN_0009bf64(param_1);
  }
  puVar17 = (undefined1 *)((int)register0x00000054 + -0x60);
  *(undefined4 *)((int)register0x00000054 + -0x60) = unaff_lr;
  puVar6 = *(undefined **)((int)register0x00000054 + 8);
  if (puVar6 == (undefined *)0x0) {
    puVar10 = *(undefined **)((int)register0x00000054 + 0x10);
    if (puVar10 == (undefined *)0x0) {
      piVar12 = *(int **)((int)register0x00000054 + 4);
      puVar13 = (undefined4 *)*piVar12;
      uVar14 = piVar12[1];
      uVar15 = piVar12[2];
    }
    else {
      piVar12 = *(int **)((int)register0x00000054 + 4);
      puVar13 = (undefined4 *)0x0;
      uVar14 = 0;
      uVar15 = 0;
    }
  }
  else {
    puVar10 = *(undefined **)((int)register0x00000054 + 0x10);
    piVar12 = *(int **)((int)register0x00000054 + 4);
    puVar13 = (undefined4 *)0x0;
    uVar14 = 0;
    uVar15 = 0;
  }
  if (puVar6 == (undefined *)0x0) {
    if (puVar10 == PTR_DAT_0048ae80) {
      puVar7 = (undefined4 *)**(undefined4 **)((int)register0x00000054 + 0x14);
      *(undefined4 **)((int)register0x00000054 + -0x24) = puVar7;
      uVar11 = uVar14 + 1;
      if (uVar15 < uVar11) {
        *(undefined4 **)((int)register0x00000054 + -0x5c) = puVar13;
        *(uint *)((int)register0x00000054 + -0x58) = uVar11;
        *(uint *)((int)register0x00000054 + -0x54) = uVar15;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
        *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0048ae84;
        FUN_000987f4();
        puVar13 = *(undefined4 **)((int)register0x00000054 + -0x48);
        uVar11 = *(uint *)((int)register0x00000054 + -0x44);
        puVar7 = *(undefined4 **)((int)register0x00000054 + -0x24);
        piVar12 = *(int **)((int)register0x00000054 + 4);
      }
      uVar3 = 0;
      puVar13[uVar11 * 3 + -2] = 0;
      puVar13[uVar11 * 3 + -1] = 0;
      uVar14 = uVar11;
      if (*(int *)PTR_DAT_0048ae88 != 0) {
        uVar3 = puVar13[uVar11 * 3 + -3];
        FUN_0009db54();
        *unaff_r8 = uVar3;
        uVar3 = extraout_r1;
        puVar7 = extraout_r2;
        uVar14 = extraout_r3;
      }
      *(undefined4 **)((int)register0x00000054 + -0x10) = puVar13;
      *(uint *)((int)register0x00000054 + -0x34) = uVar14;
      puVar13[uVar11 * 3 + -3] = PTR_DAT_0048ae8c;
      iVar1 = 0;
      goto LAB_0048ad64;
    }
    goto LAB_0048ac78;
  }
  uVar11 = uVar14;
  if (puVar10 == (undefined *)0x0) {
    if (puVar6 == PTR_DAT_0048ae80) {
      uVar8 = **(uint **)((int)register0x00000054 + 0xc);
      if (piVar12[1] <= (int)uVar8) goto LAB_0048aab0;
      if (uVar8 < (uint)piVar12[1]) {
        uVar11 = uVar14 + 1;
        iVar1 = *piVar12 + uVar8 * 0xc;
        uVar3 = *(undefined4 *)(*piVar12 + uVar8 * 0xc);
        uVar5 = *(undefined4 *)(iVar1 + 4);
        uVar9 = *(undefined4 *)(iVar1 + 8);
        if (uVar15 < uVar11) {
          *(undefined4 *)((int)register0x00000054 + -0x14) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -8) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x18) = uVar9;
          *(undefined4 **)((int)register0x00000054 + -0x5c) = puVar13;
          *(uint *)((int)register0x00000054 + -0x58) = uVar11;
          *(uint *)((int)register0x00000054 + -0x54) = uVar15;
          *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
          *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0048ae84;
          FUN_000987f4();
          puVar13 = *(undefined4 **)((int)register0x00000054 + -0x48);
          uVar11 = *(uint *)((int)register0x00000054 + -0x44);
          uVar3 = *(undefined4 *)((int)register0x00000054 + -8);
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x14);
          uVar9 = *(undefined4 *)((int)register0x00000054 + -0x18);
          piVar12 = *(int **)((int)register0x00000054 + 4);
        }
        uVar20 = CONCAT44(uVar11,uVar3);
        puVar13[uVar11 * 3 + -2] = uVar5;
        puVar13[uVar11 * 3 + -1] = uVar9;
        if (*(int *)PTR_DAT_0048ae88 != 0) {
          uVar20 = FUN_0009db64();
          *unaff_r8 = (int)uVar20;
          unaff_r8[1] = puVar13[uVar11 * 3 + -3];
        }
        uVar14 = (uint)((ulonglong)uVar20 >> 0x20);
        puVar13[uVar11 * 3 + -3] = (int)uVar20;
        uVar11 = uVar11 * 0xc - 0xc;
        goto LAB_0048aab0;
      }
    }
    else {
LAB_0048aab0:
      *(uint *)((int)register0x00000054 + -0x34) = uVar14;
      *(undefined4 **)((int)register0x00000054 + -0x10) = puVar13;
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048ae94;
      FUN_00022cf8();
      iVar1 = *(int *)((int)register0x00000054 + 4);
      if (1 < *(uint *)(iVar1 + 0x1c)) {
        uVar20 = CONCAT44(*(undefined4 **)((int)register0x00000054 + -0x58),iVar1);
        **(undefined4 **)((int)register0x00000054 + -0x58) =
             *(undefined4 *)(*(int *)(iVar1 + 0x18) + 4);
        *(undefined4 *)(iVar1 + 0x1c) = 1;
        *(undefined4 *)(iVar1 + 0x20) = 1;
        if (*(int *)PTR_DAT_0048ae88 != 0) {
          uVar20 = FUN_0009db64();
          *unaff_r8 = (int)((ulonglong)uVar20 >> 0x20);
          unaff_r8[1] = *(undefined4 *)((int)uVar20 + 0x18);
        }
        *(int *)((int)uVar20 + 0x18) = (int)((ulonglong)uVar20 >> 0x20);
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048ae94;
        FUN_00022cf8();
        iVar1 = *(int *)((int)register0x00000054 + 4);
        if (1 < *(uint *)(iVar1 + 0x10)) {
          uVar20 = CONCAT44(*(undefined4 **)((int)register0x00000054 + -0x58),iVar1);
          **(undefined4 **)((int)register0x00000054 + -0x58) =
               *(undefined4 *)(*(int *)(iVar1 + 0xc) + 4);
          *(undefined4 *)(iVar1 + 0x10) = 1;
          *(undefined4 *)(iVar1 + 0x14) = 1;
          if (*(int *)PTR_DAT_0048ae88 != 0) {
            uVar20 = FUN_0009db64();
            *unaff_r8 = (int)((ulonglong)uVar20 >> 0x20);
            unaff_r8[1] = *(undefined4 *)((int)uVar20 + 0xc);
          }
          *(int *)((int)uVar20 + 0xc) = (int)((ulonglong)uVar20 >> 0x20);
          uVar14 = *(uint *)((int)register0x00000054 + -0x34);
          puVar13 = *(undefined4 **)((int)register0x00000054 + -0x10);
          puVar7 = unaff_r8;
LAB_0048ab7c:
          if (uVar14 == 0) {
            uVar5 = 0;
            uVar9 = 0;
            uVar3 = 0;
            puVar6 = PTR_DAT_0048ae8c;
          }
          else {
            *(uint *)((int)register0x00000054 + -0x34) = uVar14;
            *(undefined4 **)((int)register0x00000054 + -0x10) = puVar13;
            *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048ae8c;
            *(uint *)((int)register0x00000054 + -0x58) = uVar14;
            *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
            *(uint *)((int)register0x00000054 + -0x50) = uVar14;
            *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0048ae84;
            FUN_000987f4();
            puVar6 = *(undefined **)((int)register0x00000054 + -0x48);
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x44);
            uVar9 = *(undefined4 *)((int)register0x00000054 + -0x40);
            puVar13 = *(undefined4 **)((int)register0x00000054 + -0x10);
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x34);
          }
          *(undefined **)((int)register0x00000054 + -0xc) = puVar6;
          *(undefined4 *)((int)register0x00000054 + -0x14) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x18) = uVar9;
          *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048ae84;
          *(undefined **)((int)register0x00000054 + -0x58) = puVar6;
          *(undefined4 *)((int)register0x00000054 + -0x54) = uVar5;
          *(undefined4 **)((int)register0x00000054 + -0x50) = puVar13;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar3;
          FUN_00093f5c();
          puVar13 = *(undefined4 **)((int)register0x00000054 + 4);
          puVar13[1] = *(undefined4 *)((int)register0x00000054 + -0x14);
          puVar13[2] = *(undefined4 *)((int)register0x00000054 + -0x18);
          if (*(int *)PTR_DAT_0048ae88 == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0xc);
          }
          else {
            FUN_0009db64();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0xc);
            *puVar7 = uVar3;
            puVar7[1] = *extraout_r1_01;
            puVar13 = extraout_r1_01;
          }
          *puVar13 = uVar3;
          *(undefined4 **)((int)register0x00000054 + 0x18) = puVar13;
                    /* WARNING: Could not recover jumptable at 0x0048ac44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x60))();
          return;
        }
        FUN_0009dbd4(1);
      }
      FUN_0009dbd4(1);
      uVar8 = extraout_r2_01;
    }
    FUN_0009dbd4(uVar8);
    uVar15 = extraout_r3_00;
LAB_0048ac60:
    FUN_0009dbd4(uVar15);
    uVar14 = extraout_r2_02;
LAB_0048ac68:
    FUN_0009dbd4(uVar14);
    uVar8 = extraout_r2_03;
  }
  else {
    if ((puVar6 != PTR_DAT_0048ae80) ||
       (uVar8 = **(uint **)((int)register0x00000054 + 0xc), puVar10 != PTR_DAT_0048ae80))
    goto LAB_0048ab7c;
    iVar1 = **(int **)((int)register0x00000054 + 0x14);
    if (piVar12[1] <= (int)uVar8) goto LAB_0048ab7c;
    unaff_r8 = (undefined4 *)PTR_DAT_0048ae80;
    if (uVar8 < (uint)piVar12[1]) {
      if (*(int *)(*piVar12 + uVar8 * 0xc + 4) <= iVar1) goto LAB_0048ab7c;
      *(uint *)((int)register0x00000054 + -0x14) = uVar8 * 3;
      *(undefined4 **)((int)register0x00000054 + -0x10) = puVar13;
      *(uint *)((int)register0x00000054 + -0x38) = uVar8;
      *(int *)((int)register0x00000054 + -0x28) = iVar1;
      *(uint *)((int)register0x00000054 + -0x34) = uVar14;
      *(uint *)((int)register0x00000054 + -0x30) = uVar15;
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048ae90;
      FUN_00022cf8();
      piVar2 = *(int **)((int)register0x00000054 + 4);
      uVar14 = *(uint *)((int)register0x00000054 + -0x38);
      unaff_r8 = puVar7;
      if (uVar14 < (uint)piVar2[1]) {
        piVar12 = (int *)(*piVar2 + *(int *)((int)register0x00000054 + -0x14) * 4);
        uVar15 = *(uint *)((int)register0x00000054 + -0x28);
        if (uVar15 < (uint)piVar12[1]) {
          puVar4 = *(undefined8 **)((int)register0x00000054 + -0x58);
          uVar14 = *(int *)((int)register0x00000054 + -0x34) + 1;
          *puVar4 = *(undefined8 *)
                     (*(int *)(*piVar2 + *(int *)((int)register0x00000054 + -0x14) * 4) + uVar15 * 8
                     );
          if (*(uint *)((int)register0x00000054 + -0x30) < uVar14) {
            *(undefined8 **)((int)register0x00000054 + -4) = puVar4;
            *(undefined4 *)((int)register0x00000054 + -0x5c) =
                 *(undefined4 *)((int)register0x00000054 + -0x10);
            *(uint *)((int)register0x00000054 + -0x58) = uVar14;
            *(uint *)((int)register0x00000054 + -0x54) = *(uint *)((int)register0x00000054 + -0x30);
            *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
            *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0048ae84;
            FUN_000987f4();
            puVar13 = *(undefined4 **)((int)register0x00000054 + -0x48);
            uVar14 = *(uint *)((int)register0x00000054 + -0x44);
            piVar2 = *(int **)((int)register0x00000054 + 4);
            puVar4 = *(undefined8 **)((int)register0x00000054 + -4);
          }
          else {
            puVar13 = *(undefined4 **)((int)register0x00000054 + -0x10);
          }
          iVar1 = uVar14 * 0xc + -0xc;
          puVar13[uVar14 * 3 + -2] = 1;
          puVar13[uVar14 * 3 + -1] = 1;
          if (*(int *)PTR_DAT_0048ae88 != 0) {
            FUN_0009db64(piVar2);
            *puVar7 = extraout_r1_00;
            *(undefined4 *)((int)puVar7 + 4) = *(undefined4 *)((int)puVar13 + extraout_r2_00);
            puVar4 = extraout_r1_00;
            iVar1 = extraout_r2_00;
          }
          *(undefined8 **)((int)puVar13 + iVar1) = puVar4;
          goto LAB_0048ab7c;
        }
        goto LAB_0048ac60;
      }
      goto LAB_0048ac68;
    }
  }
  FUN_0009dbd4(uVar8);
  uVar14 = uVar11;
LAB_0048ac78:
  *(uint *)((int)register0x00000054 + -0x34) = uVar14;
  *(undefined4 **)((int)register0x00000054 + -0x10) = puVar13;
  *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048ae94;
  FUN_00022cf8();
  iVar1 = *(int *)((int)register0x00000054 + 4);
  if (*(int *)(iVar1 + 0x1c) != 0) {
    uVar20 = CONCAT44(*(undefined4 **)((int)register0x00000054 + -0x58),iVar1);
    **(undefined4 **)((int)register0x00000054 + -0x58) = **(undefined4 **)(iVar1 + 0x18);
    *(undefined4 *)(iVar1 + 0x1c) = 1;
    *(undefined4 *)(iVar1 + 0x20) = 1;
    if (*(int *)PTR_DAT_0048ae88 != 0) {
      uVar20 = FUN_0009db64();
      *unaff_r8 = (int)((ulonglong)uVar20 >> 0x20);
      unaff_r8[1] = *(undefined4 *)((int)uVar20 + 0x18);
    }
    *(int *)((int)uVar20 + 0x18) = (int)((ulonglong)uVar20 >> 0x20);
    *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048ae94;
    FUN_00022cf8();
    iVar1 = *(int *)((int)register0x00000054 + 4);
    if (*(int *)(iVar1 + 0x10) != 0) {
      uVar20 = CONCAT44(*(undefined4 **)((int)register0x00000054 + -0x58),iVar1);
      **(undefined4 **)((int)register0x00000054 + -0x58) = **(undefined4 **)(iVar1 + 0xc);
      *(undefined4 *)(iVar1 + 0x10) = 1;
      *(undefined4 *)(iVar1 + 0x14) = 1;
      if (*(int *)PTR_DAT_0048ae88 != 0) {
        uVar20 = FUN_0009db64();
        *unaff_r8 = (int)((ulonglong)uVar20 >> 0x20);
        unaff_r8[1] = *(undefined4 *)((int)uVar20 + 0xc);
      }
      *(int *)((int)uVar20 + 0xc) = (int)((ulonglong)uVar20 >> 0x20);
      uVar14 = *(uint *)((int)register0x00000054 + -0x34);
      puVar13 = *(undefined4 **)((int)register0x00000054 + -0x10);
      puVar7 = unaff_r8;
      goto LAB_0048ab7c;
    }
    FUN_0009dbd4(0,0);
  }
  uVar20 = FUN_0009dbd4(0,0);
  puVar7 = extraout_r2_04;
  uVar14 = extraout_r3_01;
LAB_0048ad60:
  do {
    uVar3 = (undefined4)((ulonglong)uVar20 >> 0x20);
    iVar1 = (int)uVar20 + 1;
LAB_0048ad64:
    uVar20 = CONCAT44(uVar3,iVar1);
    if (piVar12[1] <= iVar1) goto LAB_0048ac78;
    unaff_r8 = *(undefined4 **)(*piVar12 + iVar1 * 0xc + 4);
    uVar18 = puVar7 == unaff_r8;
    if ((int)puVar7 < (int)unaff_r8) {
      if (puVar7 < unaff_r8) {
        uVar19 = *(undefined8 *)(*(int *)(*piVar12 + iVar1 * 0xc) + (int)puVar7 * 8);
        uVar18 = uVar14 == 0;
        if (!(bool)uVar18) {
          uVar11 = puVar13[2];
          uVar15 = puVar13[1] + 1;
          puVar16 = (undefined4 *)*puVar13;
          unaff_r8 = puVar16;
          if (uVar11 < uVar15) {
            *(int *)((int)register0x00000054 + -0x2c) = iVar1;
            *(undefined8 *)((int)register0x00000054 + -0x20) = uVar19;
            *(undefined4 **)((int)register0x00000054 + -0x5c) = puVar16;
            *(uint *)((int)register0x00000054 + -0x58) = uVar15;
            *(uint *)((int)register0x00000054 + -0x54) = uVar11;
            *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
            *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0048ae98;
            FUN_000987f4();
            unaff_r8 = *(undefined4 **)((int)register0x00000054 + -0x48);
            uVar15 = *(uint *)((int)register0x00000054 + -0x44);
            puVar7 = *(undefined4 **)((int)register0x00000054 + -0x10);
            puVar7[2] = *(undefined4 *)((int)register0x00000054 + -0x40);
            if (*(int *)PTR_DAT_0048ae88 != 0) {
              FUN_0009db64();
              *puVar16 = extraout_r1_02;
              puVar16[1] = *extraout_r3_02;
              unaff_r8 = extraout_r1_02;
              uVar15 = extraout_r2_05;
              puVar7 = extraout_r3_02;
            }
            *puVar7 = unaff_r8;
            iVar1 = *(int *)((int)register0x00000054 + -0x2c);
            uVar14 = *(uint *)((int)register0x00000054 + -0x34);
            piVar12 = *(int **)((int)register0x00000054 + 4);
            puVar13 = *(undefined4 **)((int)register0x00000054 + -0x10);
            uVar19 = *(undefined8 *)((int)register0x00000054 + -0x20);
            uVar3 = 0;
            puVar7 = *(undefined4 **)((int)register0x00000054 + -0x24);
          }
          uVar20 = CONCAT44(uVar3,iVar1);
          puVar13[1] = uVar15;
          *(undefined8 *)(unaff_r8 + (uVar15 - 1) * 2) = uVar19;
          goto LAB_0048ad60;
        }
        FUN_0009dbd4(uVar3);
        puVar7 = extraout_r2_06;
      }
      param_1 = FUN_0009dbd4(puVar7,unaff_r8);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x60);
      if ((bool)uVar18) {
        register0x00000054 = (BADSPACEBASE *)puVar17;
      }
      goto LAB_0048ae70;
    }
  } while( true );
}



/* k3c/common/utils/maths.Rfft @ 0048ae9c (size 1432) */

void k3c_common_utils_maths_Rfft(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  uint uVar6;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  uint extraout_r3_02;
  int extraout_r3_03;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *unaff_r7;
  undefined8 *puVar13;
  undefined8 *unaff_r8;
  int unaff_r9;
  int unaff_r10;
  undefined1 *puVar14;
  undefined4 unaff_lr;
  undefined1 uVar15;
  undefined8 uVar16;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar14 = (undefined1 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x68) = unaff_lr;
      uVar6 = *(uint *)((int)register0x00000054 + 0x10);
      if (uVar6 == 0) {
        uVar5 = *(uint *)((int)register0x00000054 + 8);
        uVar1 = *(uint *)((int)register0x00000054 + 0x14);
        uVar15 = uVar5 == uVar1;
        if (uVar1 < uVar5) {
          iVar7 = *(int *)((int)register0x00000054 + 4);
          uVar6 = *(uint *)(iVar7 + uVar1 * 0xc + 4);
          goto LAB_0048aee8;
        }
      }
      else {
        uVar1 = *(uint *)((int)register0x00000054 + 0x14);
        uVar5 = *(uint *)((int)register0x00000054 + 8);
        iVar7 = *(int *)((int)register0x00000054 + 4);
LAB_0048aee8:
        *(uint *)((int)register0x00000054 + -0x1c) = uVar6;
        if (uVar1 != 0) goto LAB_0048af2c;
        uVar15 = uVar5 == 0;
        if (!(bool)uVar15) {
          uVar2 = *(undefined4 *)(iVar7 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x40) = uVar2;
          *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0048b438;
          *(undefined4 *)((int)register0x00000054 + -0x60) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar2;
          FUN_000986b8();
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          iVar7 = 0;
LAB_0048b31c:
          if (*(int *)((int)register0x00000054 + -0x40) <= iVar7) {
            uVar1 = *(int *)((int)register0x00000054 + -0x40) - 1;
            uVar6 = *(uint *)((int)register0x00000054 + -0x1c);
            uVar5 = *(uint *)((int)register0x00000054 + -0x40);
            iVar7 = *(int *)((int)register0x00000054 + -4);
LAB_0048af2c:
            if (uVar1 < uVar5) {
              *(uint *)((int)register0x00000054 + -0x44) = uVar5;
              *(int *)((int)register0x00000054 + -8) = iVar7;
              iVar3 = uVar1 * 3;
              iVar7 = iVar7 + uVar1 * 0xc;
              iVar11 = *(int *)(iVar7 + 4);
              if (iVar11 <= (int)uVar6) {
                if (iVar11 < (int)uVar6) {
                  *(int *)((int)register0x00000054 + -0xc) = iVar7;
                  *(int *)((int)register0x00000054 + -0x20) = iVar3;
                  *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0048b43c;
                  iVar11 = uVar6 - iVar11;
                  *(int *)((int)register0x00000054 + -0x38) = iVar11;
                  *(int *)((int)register0x00000054 + -0x60) = iVar11;
                  *(int *)((int)register0x00000054 + -0x5c) = iVar11;
                  FUN_000986b8();
                  uVar6 = *(uint *)(*(int *)((int)register0x00000054 + -0xc) + 8);
                  iVar7 = *(int *)(*(int *)((int)register0x00000054 + -0xc) + 4);
                  iVar3 = *(int *)((int)register0x00000054 + -0x38);
                  uVar1 = iVar7 + iVar3;
                  uVar2 = *(undefined4 *)((int)register0x00000054 + -0x58);
                  unaff_r7 = *(undefined8 **)((int)register0x00000054 + -8);
                  unaff_r8 = *(undefined8 **)
                              ((int)unaff_r7 + *(int *)((int)register0x00000054 + -0x20) * 4);
                  if (uVar6 < uVar1) {
                    *(undefined4 *)((int)register0x00000054 + -4) = uVar2;
                    *(int *)((int)register0x00000054 + -0x24) = iVar7;
                    *(undefined8 **)((int)register0x00000054 + -100) = unaff_r8;
                    *(uint *)((int)register0x00000054 + -0x60) = uVar1;
                    *(uint *)((int)register0x00000054 + -0x5c) = uVar6;
                    *(int *)((int)register0x00000054 + -0x58) = iVar3;
                    *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0048b43c;
                    FUN_000987f4();
                    unaff_r8 = *(undefined8 **)((int)register0x00000054 + -0x50);
                    uVar1 = *(uint *)((int)register0x00000054 + -0x4c);
                    uVar6 = *(uint *)((int)register0x00000054 + -0x48);
                    iVar7 = *(int *)((int)register0x00000054 + -0x24);
                    iVar3 = *(int *)((int)register0x00000054 + -0x38);
                    uVar2 = *(undefined4 *)((int)register0x00000054 + -4);
                  }
                  *(uint *)((int)register0x00000054 + -0x24) = uVar6;
                  *(uint *)((int)register0x00000054 + -0x28) = uVar1;
                  *(undefined8 **)((int)register0x00000054 + -0x10) = unaff_r8;
                  *(undefined8 **)((int)register0x00000054 + -100) = unaff_r8 + iVar7;
                  *(undefined4 *)((int)register0x00000054 + -0x60) = uVar2;
                  *(int *)((int)register0x00000054 + -0x5c) = iVar3 << 3;
                  FUN_0009e3a4();
                  iVar7 = *(int *)((int)register0x00000054 + -0xc);
                  *(undefined4 *)(iVar7 + 4) = *(undefined4 *)((int)register0x00000054 + -0x28);
                  *(undefined4 *)(iVar7 + 8) = *(undefined4 *)((int)register0x00000054 + -0x24);
                  if (*(int *)PTR_DAT_0048b440 == 0) {
                    uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
                    iVar7 = *(int *)((int)register0x00000054 + -0x20);
                    iVar3 = *(int *)((int)register0x00000054 + -8);
                  }
                  else {
                    FUN_0009db64();
                    uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
                    *(undefined4 *)unaff_r8 = uVar2;
                    iVar7 = *(int *)((int)register0x00000054 + -0x20);
                    iVar3 = *(int *)((int)register0x00000054 + -8);
                    *(undefined4 *)((int)unaff_r8 + 4) = *(undefined4 *)(iVar3 + iVar7 * 4);
                  }
                  *(undefined4 *)(iVar3 + iVar7 * 4) = uVar2;
                  uVar5 = *(uint *)((int)register0x00000054 + -0x44);
                }
LAB_0048b078:
                *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0048b444;
                *(uint *)((int)register0x00000054 + -0x60) = uVar5;
                *(uint *)((int)register0x00000054 + -0x5c) = uVar5;
                FUN_000986b8();
                iVar7 = *(int *)((int)register0x00000054 + -0x58);
                *(int *)((int)register0x00000054 + -4) = iVar7;
                iVar3 = 0;
LAB_0048b0b0:
                if (iVar3 < *(int *)((int)register0x00000054 + -0x44)) {
                  *(int *)((int)register0x00000054 + -0x2c) = iVar3;
                  *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0048b448;
                  *(undefined4 *)((int)register0x00000054 + -0x60) =
                       *(undefined4 *)((int)register0x00000054 + -0x1c);
                  *(undefined4 *)((int)register0x00000054 + -0x5c) =
                       *(undefined4 *)((int)register0x00000054 + -0x1c);
                  FUN_000986b8();
                  iVar7 = *(int *)((int)register0x00000054 + -0x2c) * 3;
                  iVar3 = *(int *)((int)register0x00000054 + -4);
                  iVar11 = iVar3 + *(int *)((int)register0x00000054 + -0x2c) * 0xc;
                  uVar2 = *(undefined4 *)((int)register0x00000054 + -0x58);
                  puVar4 = *(undefined8 **)((int)register0x00000054 + -0x1c);
                  *(undefined8 **)(iVar11 + 4) = puVar4;
                  *(undefined8 **)(iVar11 + 8) = puVar4;
                  if (*(int *)PTR_DAT_0048b440 != 0) {
                    FUN_0009db64();
                    *(undefined4 *)unaff_r8 = uVar2;
                    *(undefined4 *)((int)unaff_r8 + 4) =
                         *(undefined4 *)(extraout_r2 + extraout_r1 * 4);
                    iVar7 = extraout_r1;
                    iVar3 = extraout_r2;
                    iVar11 = extraout_r3;
                  }
                  *(undefined4 *)(iVar3 + iVar7 * 4) = uVar2;
                  iVar9 = *(int *)((int)register0x00000054 + -8);
                  puVar10 = (undefined8 *)0x0;
                  goto LAB_0048b2b4;
                }
                uVar2 = *(undefined4 *)(iVar7 + 4);
                *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar2;
                *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0048b444;
                *(undefined4 *)((int)register0x00000054 + -0x60) = uVar2;
                *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar2;
                FUN_000986b8();
                iVar7 = *(int *)((int)register0x00000054 + -0x58);
                *(int *)((int)register0x00000054 + -0x14) = iVar7;
                iVar3 = 0;
                do {
                  iVar11 = *(int *)((int)register0x00000054 + -0x3c);
                  if (iVar11 <= iVar3) {
                    *(int *)((int)register0x00000054 + 0x18) = iVar7;
                    *(int *)((int)register0x00000054 + 0x1c) = iVar11;
                    *(int *)((int)register0x00000054 + 0x20) = iVar11;
                    /* WARNING: Could not recover jumptable at 0x0048b224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (**(code **)((int)register0x00000054 + -0x68))();
                    return;
                  }
                  *(int *)((int)register0x00000054 + -0x30) = iVar3;
                  *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0048b448;
                  *(undefined4 *)((int)register0x00000054 + -0x60) =
                       *(undefined4 *)((int)register0x00000054 + -0x44);
                  *(undefined4 *)((int)register0x00000054 + -0x5c) =
                       *(undefined4 *)((int)register0x00000054 + -0x44);
                  FUN_000986b8();
                  iVar3 = *(int *)((int)register0x00000054 + -0x30);
                  uVar16 = CONCAT44(iVar3 * 3,iVar3);
                  iVar7 = *(int *)((int)register0x00000054 + -0x14);
                  iVar3 = iVar7 + iVar3 * 0xc;
                  uVar2 = *(undefined4 *)((int)register0x00000054 + -0x58);
                  puVar4 = *(undefined8 **)((int)register0x00000054 + -0x44);
                  *(undefined8 **)(iVar3 + 4) = puVar4;
                  *(undefined8 **)(iVar3 + 8) = puVar4;
                  if (*(int *)PTR_DAT_0048b440 != 0) {
                    uVar16 = FUN_0009db64();
                    *(undefined4 *)unaff_r8 = uVar2;
                    *(undefined4 *)((int)unaff_r8 + 4) =
                         *(undefined4 *)(extraout_r2_00 + (int)((ulonglong)uVar16 >> 0x20) * 4);
                    iVar7 = extraout_r2_00;
                    iVar3 = extraout_r3_00;
                  }
                  iVar11 = (int)((ulonglong)uVar16 >> 0x20);
                  puVar12 = (undefined8 *)uVar16;
                  *(undefined4 *)(iVar7 + iVar11 * 4) = uVar2;
                  iVar9 = *(int *)((int)register0x00000054 + -4);
                  for (puVar10 = (undefined8 *)0x0; (int)puVar10 < (int)puVar4;
                      puVar10 = (undefined8 *)((int)puVar10 + 1)) {
                    if (puVar4 <= puVar10) {
LAB_0048b28c:
                      FUN_0009dbd4(puVar10,puVar4);
                      iVar7 = extraout_r1_00;
                      iVar3 = extraout_r2_01;
                      iVar11 = extraout_r3_01;
                      goto LAB_0048b298;
                    }
                    unaff_r8 = *(undefined8 **)(iVar9 + (int)puVar10 * 0xc + 4);
                    if (unaff_r8 <= puVar12) {
LAB_0048b284:
                      FUN_0009dbd4(puVar12,unaff_r8);
                      goto LAB_0048b28c;
                    }
                    unaff_r8 = *(undefined8 **)(iVar3 + 4);
                    unaff_r9 = *(int *)(iVar7 + iVar11 * 4);
                    puVar13 = (undefined8 *)
                              (*(int *)(iVar9 + (int)puVar10 * 0xc) + (int)puVar12 * 0x10);
                    if (unaff_r8 <= puVar10) {
                      puVar12 = (undefined8 *)FUN_0009dbd4(puVar10,unaff_r8);
                      goto LAB_0048b284;
                    }
                    unaff_r8 = (undefined8 *)(unaff_r9 + (int)puVar10 * 0x10);
                    uVar16 = puVar13[1];
                    *unaff_r8 = *puVar13;
                    unaff_r8[1] = uVar16;
                  }
                  iVar3 = (int)puVar12 + 1;
                } while( true );
              }
              if (uVar6 <= *(uint *)(iVar7 + 8)) {
                *(uint *)(iVar7 + 4) = uVar6;
                goto LAB_0048b078;
              }
              goto LAB_0048b308;
            }
            goto LAB_0048b310;
          }
          *(int *)((int)register0x00000054 + -0x34) = iVar7;
          *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0048b43c;
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          FUN_000986b8();
          iVar3 = *(int *)((int)register0x00000054 + -0x34);
          uVar16 = CONCAT44(iVar3 * 3,iVar3);
          iVar7 = *(int *)((int)register0x00000054 + -4);
          iVar3 = iVar7 + iVar3 * 0xc;
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x58);
          puVar10 = *(undefined8 **)((int)register0x00000054 + 8);
          *(undefined8 **)(iVar3 + 4) = puVar10;
          *(undefined8 **)(iVar3 + 8) = puVar10;
          if (*(int *)PTR_DAT_0048b440 != 0) {
            uVar16 = FUN_0009db64();
            *(undefined4 *)unaff_r8 = uVar2;
            *(undefined4 *)((int)unaff_r8 + 4) =
                 *(undefined4 *)(extraout_r2_02 + (int)((ulonglong)uVar16 >> 0x20) * 4);
            iVar7 = extraout_r2_02;
            iVar3 = extraout_r3_03;
          }
          iVar11 = (int)((ulonglong)uVar16 >> 0x20);
          puVar4 = (undefined8 *)uVar16;
          *(undefined4 *)(iVar7 + iVar11 * 4) = uVar2;
          iVar9 = *(int *)((int)register0x00000054 + 4);
          for (puVar12 = (undefined8 *)0x0; uVar15 = puVar10 == puVar12, (int)puVar12 < (int)puVar10
              ; puVar12 = (undefined8 *)((int)puVar12 + 1)) {
            if (puVar10 <= puVar12) {
LAB_0048b408:
              FUN_0009dbd4(puVar12,puVar10);
              goto LAB_0048b414;
            }
            unaff_r8 = *(undefined8 **)(iVar9 + (int)puVar12 * 0xc + 4);
            unaff_r7 = *(undefined8 **)(iVar9 + (int)puVar12 * 0xc);
            uVar15 = puVar4 == unaff_r8;
            if (unaff_r8 <= puVar4) {
LAB_0048b400:
              FUN_0009dbd4(puVar4,unaff_r8);
              goto LAB_0048b408;
            }
            unaff_r8 = *(undefined8 **)(iVar3 + 4);
            unaff_r9 = *(int *)(iVar7 + iVar11 * 4);
            unaff_r7 = unaff_r7 + (int)puVar4;
            uVar15 = puVar12 == unaff_r8;
            if (unaff_r8 <= puVar12) {
              puVar4 = (undefined8 *)FUN_0009dbd4(puVar12,unaff_r8);
              goto LAB_0048b400;
            }
            unaff_r8 = (undefined8 *)(unaff_r9 + (int)puVar12 * 8);
            *unaff_r8 = *unaff_r7;
          }
          goto LAB_0048b314;
        }
LAB_0048b414:
        FUN_0009dbd4(0,0);
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x68);
      if ((bool)uVar15) {
        register0x00000054 = (BADSPACEBASE *)puVar14;
      }
    }
    unaff_lr = 0x48b430;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
LAB_0048b298:
  unaff_r7 = (undefined8 *)(unaff_r9 + (int)puVar10 * 0x10);
  *unaff_r7 = *unaff_r8;
  unaff_r7[1] = 0;
  puVar10 = (undefined8 *)((int)puVar10 + 1);
LAB_0048b2b4:
  if ((int)puVar4 <= (int)puVar10) goto LAB_0048b128;
  unaff_r7 = *(undefined8 **)(iVar9 + iVar7 * 4 + 4);
  unaff_r8 = *(undefined8 **)(iVar9 + iVar7 * 4);
  if (unaff_r7 <= puVar10) goto LAB_0048b2fc;
  unaff_r7 = *(undefined8 **)(iVar11 + 4);
  unaff_r9 = *(int *)(iVar3 + iVar7 * 4);
  unaff_r8 = unaff_r8 + (int)puVar10;
  if (unaff_r7 <= puVar10) goto LAB_0048b2f0;
  goto LAB_0048b298;
LAB_0048b128:
  *(int *)((int)register0x00000054 + -0x18) = iVar11;
  uVar2 = *(undefined4 *)(iVar11 + 4);
  uVar8 = *(undefined4 *)(iVar11 + 8);
  *(undefined4 *)((int)register0x00000054 + -100) = *(undefined4 *)(iVar3 + iVar7 * 4);
  *(undefined4 *)((int)register0x00000054 + -0x60) = uVar2;
  *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar8;
  k3c_common_utils_maths_fft();
  iVar7 = *(int *)((int)register0x00000054 + -0x18);
  uVar6 = *(int *)((int)register0x00000054 + -0x1c) / 2 + 1;
  if (*(uint *)(iVar7 + 8) < uVar6) goto LAB_0048b2e8;
  *(uint *)(iVar7 + 4) = uVar6;
  iVar3 = *(int *)((int)register0x00000054 + -0x2c) + 1;
  iVar7 = *(int *)((int)register0x00000054 + -4);
  goto LAB_0048b0b0;
LAB_0048b2e8:
  FUN_0009dc14(iVar7,uVar6);
LAB_0048b2f0:
  FUN_0009dbd4(puVar10,unaff_r7);
LAB_0048b2fc:
  iVar3 = FUN_0009dbd4(puVar10,unaff_r7);
  uVar6 = extraout_r3_02;
LAB_0048b308:
  FUN_0009dc14(iVar3,uVar6);
LAB_0048b310:
  puVar4 = (undefined8 *)FUN_0009dbd4();
LAB_0048b314:
  iVar7 = (int)puVar4 + 1;
  goto LAB_0048b31c;
}



/* k3c/common/utils/maths.fft @ 0048b44c (size 644) */

void k3c_common_utils_maths_fft(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  double *pdVar4;
  uint extraout_r2;
  int extraout_r2_00;
  uint uVar5;
  uint extraout_r3;
  uint extraout_r3_00;
  undefined8 *puVar6;
  int iVar7;
  uint unaff_r5;
  undefined8 *puVar8;
  double *pdVar9;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  bool bVar11;
  uint in_fpscr;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  uint unaff_s30;
  undefined8 uVar18;
  
code_r0x0048b44c:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar10 = (undefined1 *)((int)register0x00000054 + -0x40);
    *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
    uVar1 = *(uint *)((int)register0x00000054 + 8);
    uVar2 = uVar1 - 1;
    uVar5 = uVar1;
    if ((uVar1 & uVar2) != 0) {
      uVar2 = uVar2 | (int)uVar2 >> 1;
      uVar2 = uVar2 | (int)uVar2 >> 2;
      uVar2 = uVar2 | (int)uVar2 >> 4;
      uVar2 = uVar2 | (int)uVar2 >> 8;
      uVar2 = uVar2 | (int)uVar2 >> 0x10;
      uVar1 = (uVar2 | (int)uVar2 >> 0x1f) + 1;
      uVar5 = *(uint *)((int)register0x00000054 + 8);
    }
    *(uint *)((int)register0x00000054 + -0x1c) = uVar1;
    *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_0048b6d4;
    *(uint *)((int)register0x00000054 + -0x38) = uVar1;
    *(uint *)((int)register0x00000054 + -0x34) = uVar5;
    *(undefined4 *)((int)register0x00000054 + -0x30) = *(undefined4 *)((int)register0x00000054 + 4);
    FUN_00072580();
    uVar18 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x1c),
                      *(undefined4 *)((int)register0x00000054 + -0x2c));
    iVar3 = 0;
    uVar5 = 0;
    do {
      uVar1 = (uint)((ulonglong)uVar18 >> 0x20);
      iVar7 = (int)uVar18;
      if ((int)uVar1 <= iVar3) {
        *(int *)((int)register0x00000054 + -4) = iVar7;
        uVar5 = 1;
        do {
          iVar3 = (int)((ulonglong)uVar18 >> 0x20);
          if (iVar3 <= (int)uVar5) {
            if (*(int *)((int)register0x00000054 + 8) <= iVar3) {
              iVar3 = *(int *)((int)register0x00000054 + 8);
            }
            if (*(int *)((int)register0x00000054 + 4) != (int)uVar18) {
              *(int *)((int)register0x00000054 + -0x3c) = *(int *)((int)register0x00000054 + 4);
              *(int *)((int)register0x00000054 + -0x38) = (int)uVar18;
              *(int *)((int)register0x00000054 + -0x34) = iVar3 << 4;
              FUN_0009e3a4();
            }
            return;
          }
          *(uint *)((int)register0x00000054 + -0x10) = uVar5;
          uVar1 = 0;
          while ((int)uVar1 < (int)uVar5) {
            *(uint *)((int)register0x00000054 + -0xc) = uVar1;
            dVar12 = (double)VectorSignedToFloat(unaff_s30 & 0xffff0000 | uVar1 & 0xffff,
                                                 (byte)(in_fpscr >> 0x16) & 3);
            unaff_s30 = unaff_s30 & 0xffff0000 | uVar5 & 0xffff;
            dVar15 = (double)VectorSignedToFloat(unaff_s30,(byte)(in_fpscr >> 0x16) & 3);
            dVar15 = (dVar12 * *DAT_0048b6d8) / dVar15;
            *(double *)((int)register0x00000054 + -0x18) = dVar15;
            uVar2 = uVar1;
            while ((int)uVar1 < (int)((ulonglong)uVar18 >> 0x20)) {
              *(uint *)((int)register0x00000054 + -8) = uVar1;
              *(undefined8 *)((int)register0x00000054 + -0x3c) = 0;
              *(double *)((int)register0x00000054 + -0x34) = dVar15;
              k3c_common_cmath_CmplxExp();
              iVar3 = *(int *)((int)register0x00000054 + -0x10);
              uVar1 = *(uint *)((int)register0x00000054 + -8);
              uVar5 = iVar3 + uVar1;
              uVar2 = *(uint *)((int)register0x00000054 + -0x1c);
              if (uVar2 <= uVar5) {
LAB_0048b688:
                uVar18 = FUN_0009dbd4(uVar5,uVar2);
                iVar3 = extraout_r2_00;
                uVar5 = extraout_r3_00;
                goto LAB_0048b698;
              }
              iVar7 = *(int *)((int)register0x00000054 + -4);
              uVar18 = CONCAT44(uVar2,iVar7);
              pdVar4 = (double *)(iVar7 + uVar5 * 0x10);
              dVar15 = *(double *)((int)register0x00000054 + -0x2c) * *pdVar4 -
                       *(double *)((int)register0x00000054 + -0x24) * pdVar4[1];
              dVar12 = *(double *)((int)register0x00000054 + -0x24) * *pdVar4 +
                       *(double *)((int)register0x00000054 + -0x2c) * pdVar4[1];
              if (uVar2 <= uVar1) {
                FUN_0009dbd4(uVar1,uVar2);
                uVar5 = extraout_r2;
                uVar2 = extraout_r3;
                goto LAB_0048b688;
              }
              pdVar9 = (double *)(iVar7 + uVar1 * 0x10);
              dVar17 = pdVar9[1];
              *pdVar4 = *pdVar9 - dVar15;
              pdVar4[1] = dVar17 - dVar12;
              *pdVar9 = dVar15 + *pdVar9;
              pdVar9[1] = pdVar9[1] + dVar12;
              uVar5 = *(uint *)((int)register0x00000054 + -0x10);
              uVar2 = *(uint *)((int)register0x00000054 + -0xc);
              dVar15 = *(double *)((int)register0x00000054 + -0x18);
              uVar1 = uVar1 + iVar3 * 2;
              unaff_r5 = uVar1;
            }
            uVar1 = uVar2 + 1;
          }
          uVar5 = uVar5 << 1;
        } while( true );
      }
      if (iVar3 < (int)uVar5) {
        puVar6 = (undefined8 *)(iVar7 + iVar3 * 0x10);
        bVar11 = uVar5 == uVar1;
        if (uVar1 <= uVar5) goto LAB_0048b6b8;
        puVar8 = (undefined8 *)(iVar7 + uVar5 * 0x10);
        uVar13 = puVar8[1];
        uVar14 = *puVar6;
        uVar16 = puVar6[1];
        *puVar6 = *puVar8;
        puVar6[1] = uVar13;
        *puVar8 = uVar14;
        puVar8[1] = uVar16;
      }
      unaff_r5 = (int)uVar1 / 2;
LAB_0048b698:
      do {
        if ((int)uVar5 < (int)unaff_r5) break;
        uVar1 = (int)unaff_r5 / 2;
        uVar5 = uVar5 - unaff_r5;
        unaff_r5 = uVar1;
      } while (1 < (int)uVar1);
      iVar3 = iVar3 + 1;
      uVar5 = uVar5 + unaff_r5;
    } while( true );
  }
  goto LAB_0048b6c4;
LAB_0048b6b8:
  param_1 = FUN_0009dbd4(uVar5);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
  if (bVar11) {
    register0x00000054 = (BADSPACEBASE *)puVar10;
  }
LAB_0048b6c4:
  unaff_lr = 0x48b6cc;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x0048b44c;
}



/* k3c/common/utils/maths.Sin @ 0048b6dc (size 224) */

void k3c_common_utils_maths_Sin(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint extraout_r1;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  
  while (register0x00000054 <= *(undefined1 **)(unaff_r10 + 8)) {
LAB_0048b7b0:
    unaff_lr = 0x48b7b8;
    param_1 = FUN_0009bf64(param_1);
  }
  puVar8 = (undefined1 *)((int)register0x00000054 + -0x24);
  *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
  iVar3 = *(int *)((int)register0x00000054 + 4);
  iVar4 = *(int *)((int)register0x00000054 + 8);
  iVar1 = 0;
  do {
    if (iVar4 <= iVar1) {
      *(int *)((int)register0x00000054 + 0x10) = iVar3;
      *(int *)((int)register0x00000054 + 0x14) = iVar4;
      *(undefined4 *)((int)register0x00000054 + 0x18) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      return;
    }
    *(int *)((int)register0x00000054 + -0xc) = iVar1;
    uVar2 = 0;
    while( true ) {
      iVar5 = iVar3 + iVar1 * 0xc;
      uVar6 = *(uint *)(iVar5 + 4);
      iVar7 = *(int *)(iVar3 + iVar1 * 0xc);
      uVar9 = uVar2 == uVar6;
      if ((int)uVar6 <= (int)uVar2) break;
      if (uVar6 <= uVar2) {
LAB_0048b7a0:
        param_1 = FUN_0009dbd4(uVar2,uVar6);
        register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
        if ((bool)uVar9) {
          register0x00000054 = (BADSPACEBASE *)puVar8;
        }
        goto LAB_0048b7b0;
      }
      *(int *)((int)register0x00000054 + -4) = iVar5;
      *(int *)((int)register0x00000054 + -8) = iVar1 * 3;
      *(uint *)((int)register0x00000054 + -0x10) = uVar2;
      *(undefined8 *)((int)register0x00000054 + -0x20) = *(undefined8 *)(iVar7 + uVar2 * 8);
      k3c_common_cmath__Cfunc_sin();
      iVar3 = *(int *)((int)register0x00000054 + 4);
      uVar2 = *(uint *)((int)register0x00000054 + -0x10);
      uVar9 = uVar2 == *(uint *)(*(int *)((int)register0x00000054 + -4) + 4);
      if (*(uint *)(*(int *)((int)register0x00000054 + -4) + 4) <= uVar2) {
        FUN_0009dbd4(uVar2);
        uVar2 = extraout_r1;
        goto LAB_0048b7a0;
      }
      *(undefined8 *)(*(int *)(iVar3 + *(int *)((int)register0x00000054 + -8) * 4) + uVar2 * 8) =
           *(undefined8 *)((int)register0x00000054 + -0x18);
      uVar2 = uVar2 + 1;
      iVar1 = *(int *)((int)register0x00000054 + -0xc);
      iVar4 = *(int *)((int)register0x00000054 + 8);
    }
    iVar1 = iVar1 + 1;
  } while( true );
}



/* k3c/common/utils/maths.Sum2 @ 0048b7bc (size 544) */

void k3c_common_utils_maths_Sum2(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r1;
  int iVar4;
  int extraout_r2;
  int iVar5;
  int extraout_r3;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  bool bVar11;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  double dVar12;
  
  while (register0x00000054 <= *(undefined1 **)(unaff_r10 + 8)) {
LAB_0048b9d0:
    unaff_lr = 0x48b9d8;
    param_1 = FUN_0009bf64(param_1);
  }
  puVar10 = (undefined1 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
  if (*(int *)((int)register0x00000054 + 0x10) == 1) {
    iVar4 = *(int *)((int)register0x00000054 + 8);
    iVar5 = *(int *)((int)register0x00000054 + 4);
    uVar3 = 0;
    iVar6 = 0;
    uVar7 = 0;
    for (iVar2 = 0; iVar2 < iVar4; iVar2 = iVar2 + 1) {
      uVar8 = 0;
      dVar12 = 0.0;
      while( true ) {
        uVar9 = *(uint *)(iVar5 + iVar2 * 0xc + 4);
        bVar11 = uVar8 == uVar9;
        if ((int)uVar9 <= (int)uVar8) break;
        if (uVar9 <= uVar8) {
          param_1 = FUN_0009dbd4(uVar8,uVar9);
          register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
          if (bVar11) {
            register0x00000054 = (BADSPACEBASE *)puVar10;
          }
          goto LAB_0048b9d0;
        }
        iVar1 = uVar8 * 8;
        uVar8 = uVar8 + 1;
        dVar12 = dVar12 + *(double *)(*(int *)(iVar5 + iVar2 * 0xc) + iVar1);
      }
      uVar7 = uVar7 + 1;
      if (uVar3 < uVar7) {
        *(int *)((int)register0x00000054 + -4) = iVar2;
        *(double *)((int)register0x00000054 + -0x10) = dVar12;
        *(int *)((int)register0x00000054 + -0x3c) = iVar6;
        *(uint *)((int)register0x00000054 + -0x38) = uVar7;
        *(uint *)((int)register0x00000054 + -0x34) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_0048b9e0;
        FUN_000987f4();
        iVar6 = *(int *)((int)register0x00000054 + -0x28);
        uVar7 = *(uint *)((int)register0x00000054 + -0x24);
        uVar3 = *(uint *)((int)register0x00000054 + -0x20);
        iVar2 = *(int *)((int)register0x00000054 + -4);
        iVar4 = *(int *)((int)register0x00000054 + 8);
        iVar5 = *(int *)((int)register0x00000054 + 4);
        dVar12 = *(double *)((int)register0x00000054 + -0x10);
      }
LAB_0048b90c:
      *(double *)(iVar6 + (uVar7 - 1) * 8) = dVar12;
    }
  }
  else {
    if (*(int *)((int)register0x00000054 + 0x10) == 0) {
      iVar4 = *(int *)((int)register0x00000054 + 8);
      iVar5 = *(int *)((int)register0x00000054 + 4);
      uVar8 = 0;
      uVar3 = 0;
      iVar6 = 0;
      uVar7 = 0;
      do {
        if (iVar4 == 0) {
LAB_0048b900:
          iVar2 = FUN_0009dbd4(0,0);
          dVar12 = (double)CONCAT44(extraout_s1,extraout_s0);
          uVar3 = extraout_r1;
          iVar4 = extraout_r2;
          iVar5 = extraout_r3;
          goto LAB_0048b90c;
        }
        if (*(int *)(iVar5 + 4) <= (int)uVar8) goto LAB_0048b824;
        dVar12 = 0.0;
        for (iVar2 = 0; iVar2 < iVar4; iVar2 = iVar2 + 1) {
          uVar9 = *(uint *)(iVar5 + iVar2 * 0xc + 4);
          if (uVar9 <= uVar8) {
            FUN_0009dbd4(uVar8,uVar9);
            goto LAB_0048b900;
          }
          dVar12 = dVar12 + *(double *)(*(int *)(iVar5 + iVar2 * 0xc) + uVar8 * 8);
        }
        uVar7 = uVar7 + 1;
        if (uVar3 < uVar7) {
          *(double *)((int)register0x00000054 + -0x18) = dVar12;
          *(uint *)((int)register0x00000054 + -8) = uVar8;
          *(int *)((int)register0x00000054 + -0x3c) = iVar6;
          *(uint *)((int)register0x00000054 + -0x38) = uVar7;
          *(uint *)((int)register0x00000054 + -0x34) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_0048b9e0;
          FUN_000987f4();
          iVar6 = *(int *)((int)register0x00000054 + -0x28);
          uVar7 = *(uint *)((int)register0x00000054 + -0x24);
          uVar3 = *(uint *)((int)register0x00000054 + -0x20);
          uVar8 = *(uint *)((int)register0x00000054 + -8);
          iVar4 = *(int *)((int)register0x00000054 + 8);
          iVar5 = *(int *)((int)register0x00000054 + 4);
          dVar12 = *(double *)((int)register0x00000054 + -0x18);
        }
        *(double *)(iVar6 + (uVar7 - 1) * 8) = dVar12;
        uVar8 = uVar8 + 1;
      } while( true );
    }
    uVar7 = 0;
    uVar3 = 0;
    iVar6 = 0;
  }
LAB_0048b824:
  *(int *)((int)register0x00000054 + 0x14) = iVar6;
  *(uint *)((int)register0x00000054 + 0x18) = uVar7;
  *(uint *)((int)register0x00000054 + 0x1c) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0048b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((int)register0x00000054 + -0x40))();
  return;
}



/* k3c/common/utils/maths.i0 @ 0048b9e4 (size 196) */

void k3c_common_utils_maths_i0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r10;
  uint in_fpscr;
  uint unaff_s30;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  for (uVar1 = 1; (int)uVar1 <= in_stack_00000004; uVar1 = uVar1 + 1) {
    VectorSignedToFloat(unaff_s30 & 0xffff0000 | uVar1 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    k3c_common_cmath__Cfunc_pow();
    uVar3 = 1;
    for (iVar2 = 1; iVar2 <= (int)uVar1; iVar2 = iVar2 + 1) {
      uVar3 = uVar3 * iVar2;
    }
    unaff_s30 = unaff_s30 & 0xffff0000 | uVar3 & 0xffff;
    VectorSignedToFloat(unaff_s30,(byte)(in_fpscr >> 0x16) & 3);
    k3c_common_cmath__Cfunc_pow();
  }
  return;
}



/* k3c/common/utils/maths.Kaiser @ 0048baa8 (size 268) */

void k3c_common_utils_maths_Kaiser(void)

{
  uint uVar1;
  int unaff_r10;
  uint in_fpscr;
  uint unaff_s30;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_000986b8();
  for (uVar1 = 0; (int)uVar1 < in_stack_00000004; uVar1 = uVar1 + 1) {
    VectorSignedToFloat(unaff_s30 & 0xffff0000 | uVar1 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
    unaff_s30 = unaff_s30 & 0xffff0000 | in_stack_00000004 - 1U & 0xffff;
    VectorSignedToFloat(unaff_s30,(byte)(in_fpscr >> 0x16) & 3);
    k3c_common_cmath__Cfunc_pow();
    k3c_common_cmath__Cfunc_sqrt();
    k3c_common_utils_maths_i0();
    k3c_common_utils_maths_i0();
    *(double *)(uStack_20 + uVar1 * 8) =
         (double)CONCAT44(local_1c,0x40000000) / (double)CONCAT44(local_1c,0x40000000);
  }
  return;
}



/* k3c/common/utils/maths.InterpolateWithBinarySearch @ 0048bbbc (size 752) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_common_utils_maths_InterpolateWithBinarySearch(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint extraout_r1;
  double *pdVar3;
  double *extraout_r2;
  uint uVar4;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint uVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  double dVar8;
  double dVar9;
  undefined4 extraout_s2;
  double dVar10;
  undefined4 extraout_s3;
  double dVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x34) = unaff_lr;
      uVar2 = *(uint *)((int)register0x00000054 + 8);
      uVar7 = uVar2 == 0;
      if (!(bool)uVar7) {
        pdVar3 = *(double **)((int)register0x00000054 + 4);
        dVar8 = *pdVar3;
        dVar10 = *(double *)((int)register0x00000054 + 0x1c);
        if (dVar10 <= dVar8) {
          if (*(uint *)((int)register0x00000054 + 0x14) != 0) {
            if (1 < uVar2) {
              if (1 < *(uint *)((int)register0x00000054 + 0x14)) {
                dVar9 = **(double **)((int)register0x00000054 + 0x10);
                dVar11 = (*(double **)((int)register0x00000054 + 0x10))[1];
                if (dVar11 <= dVar9) {
                  dVar9 = dVar9 + ((dVar10 - dVar8) * (dVar11 - dVar9)) / (pdVar3[1] - dVar8);
                }
                goto LAB_0048bcc4;
              }
              FUN_0009dbd4(1,1);
            }
            FUN_0009dbd4(1,1);
          }
          FUN_0009dbd4(0,0);
LAB_0048bcf0:
          FUN_0009dbd4();
          uVar4 = extraout_r3;
LAB_0048bcf4:
          FUN_0009dbd4(uVar4);
          uVar4 = extraout_r3_00;
LAB_0048bcfc:
          uVar1 = FUN_0009dbd4(uVar4);
          dVar10 = (double)CONCAT44(extraout_s3,extraout_s2);
          uVar2 = extraout_r1;
          pdVar3 = extraout_r2;
          uVar4 = extraout_r3_01;
        }
        else {
          uVar1 = uVar2 - 1;
          if (pdVar3[uVar1] <= dVar10) {
            uVar4 = uVar2 - 2;
            if (uVar2 <= uVar4) goto LAB_0048bcfc;
            if (*(uint *)((int)register0x00000054 + 0x14) <= uVar4) goto LAB_0048bcf4;
            if (*(uint *)((int)register0x00000054 + 0x14) <= uVar1) goto LAB_0048bcf0;
            dVar9 = *(double *)(*(int *)((int)register0x00000054 + 0x10) + uVar4 * 8);
            dVar8 = *(double *)(*(int *)((int)register0x00000054 + 0x10) + uVar1 * 8);
            if (dVar8 <= dVar9) {
              dVar9 = ((dVar10 - pdVar3[uVar4]) * (dVar8 - dVar9)) / (pdVar3[uVar1] - pdVar3[uVar4])
                      + dVar9;
            }
            goto LAB_0048bcc4;
          }
          uVar4 = 0;
        }
        while (uVar5 = uVar4, (int)uVar4 <= (int)uVar1) {
          uVar5 = uVar4 + (int)(uVar1 - uVar4) / 2;
          uVar7 = uVar2 == uVar5;
          if (uVar2 <= uVar5) goto LAB_0048be88;
          if (dVar10 <= pdVar3[uVar5]) {
            if (pdVar3[uVar5] <= dVar10) break;
            uVar1 = uVar5 - 1;
          }
          else {
            uVar4 = uVar5 + 1;
          }
        }
        if ((uVar5 == 0) || ((int)uVar2 <= (int)uVar5)) {
          *(uint *)((int)register0x00000054 + -0x1c) = uVar5;
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
          *(uint *)((int)register0x00000054 + -0x30) = uVar5;
          FUN_00020ce0();
          *(undefined4 *)((int)register0x00000054 + -0x10) = _UNK_0048beb0;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined8 *)((int)register0x00000054 + -0x18) =
               *(undefined8 *)((int)register0x00000054 + 0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -8) = _UNK_0048beb4;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x30) = _UNK_0048beb8;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 0x23;
          *(undefined1 **)((int)register0x00000054 + -0x28) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x24) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x20) = 2;
          k3c_common_logger_Debugf();
          uVar2 = *(uint *)((int)register0x00000054 + 8);
          pdVar3 = *(double **)((int)register0x00000054 + 4);
          uVar5 = *(uint *)((int)register0x00000054 + -0x1c);
          dVar10 = *(double *)((int)register0x00000054 + 0x1c);
        }
        uVar1 = uVar5 - 1;
        uVar7 = uVar2 == uVar1;
        if (uVar1 < uVar2) {
          uVar4 = *(uint *)((int)register0x00000054 + 0x14);
          uVar7 = uVar4 == uVar1;
          if (uVar1 < uVar4) {
            uVar7 = uVar2 == uVar5;
            if (uVar5 < uVar2) {
              uVar7 = uVar4 == uVar5;
              if (uVar5 < uVar4) {
                dVar9 = *(double *)(*(int *)((int)register0x00000054 + 0x10) + uVar1 * 8);
                dVar8 = *(double *)(*(int *)((int)register0x00000054 + 0x10) + uVar5 * 8);
                if (dVar8 <= dVar9) {
                  dVar9 = ((dVar10 - pdVar3[uVar1]) * (dVar8 - dVar9)) /
                          (pdVar3[uVar5] - pdVar3[uVar1]) + dVar9;
                }
LAB_0048bcc4:
                *(double *)((int)register0x00000054 + 0x24) = dVar9;
                    /* WARNING: Could not recover jumptable at 0x0048bcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((int)register0x00000054 + -0x34))();
                return;
              }
              FUN_0009dbd4(uVar5,uVar4);
            }
            uVar1 = FUN_0009dbd4(uVar5);
          }
          FUN_0009dbd4(uVar1,uVar4);
        }
        FUN_0009dbd4();
LAB_0048be88:
        FUN_0009dbd4(uVar5);
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x34);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x48bea8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/utils/maths.Economyqr_Decomposition @ 0048bebc (size 2136) */

void k3c_common_utils_maths_Economyqr_Decomposition(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  double *pdVar4;
  double *extraout_r1;
  double *extraout_r1_00;
  double *extraout_r1_01;
  int iVar5;
  int extraout_r2;
  double *pdVar6;
  int extraout_r2_00;
  int extraout_r2_01;
  double *extraout_r2_02;
  int extraout_r2_03;
  double *extraout_r2_04;
  uint uVar7;
  uint extraout_r3;
  double *extraout_r3_00;
  double *extraout_r3_01;
  double *pdVar8;
  int iVar9;
  int iVar10;
  double *pdVar11;
  double *pdVar12;
  double *unaff_r6;
  double *unaff_r8;
  double *pdVar13;
  int unaff_r10;
  undefined1 *puVar14;
  undefined4 unaff_lr;
  undefined1 uVar15;
  undefined4 uVar16;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  double dVar17;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar18;
  undefined8 uVar19;
  
code_r0x0048bebc:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar14 = (undefined1 *)((int)register0x00000054 + -0x60);
    *(undefined4 *)((int)register0x00000054 + -0x60) = unaff_lr;
    iVar1 = *(int *)((int)register0x00000054 + 8);
    if (iVar1 == 0) {
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048c718;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 0x12;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
      FUN_001386c4();
      *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
      *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
      *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
      *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
      *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
      *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
      *(undefined4 *)((int)register0x00000054 + 0x28) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + 0x2c) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
                    /* WARNING: Could not recover jumptable at 0x0048bf60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((int)register0x00000054 + -0x60))();
      return;
    }
    *(undefined4 *)((int)register0x00000054 + -0x24) =
         *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
    *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048c714;
    *(int *)((int)register0x00000054 + -0x58) = iVar1;
    *(int *)((int)register0x00000054 + -0x54) = iVar1;
    uVar16 = FUN_000986b8();
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -0x50)
    ;
    for (iVar1 = 0; iVar5 = *(int *)((int)register0x00000054 + 8), iVar1 < iVar5; iVar1 = iVar1 + 1)
    {
      *(int *)((int)register0x00000054 + -0x28) = iVar1;
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048c71c;
      *(int *)((int)register0x00000054 + -0x58) = iVar5;
      *(int *)((int)register0x00000054 + -0x54) = iVar5;
      FUN_000986b8(uVar16);
      iVar1 = *(int *)((int)register0x00000054 + -0x28);
      uVar19 = CONCAT44(iVar1 * 3,iVar1);
      iVar5 = *(int *)((int)register0x00000054 + -4);
      iVar1 = iVar5 + iVar1 * 0xc;
      uVar16 = *(undefined4 *)((int)register0x00000054 + -0x50);
      iVar9 = *(int *)((int)register0x00000054 + 8);
      *(int *)(iVar1 + 4) = iVar9;
      *(int *)(iVar1 + 8) = iVar9;
      if (*(int *)PTR_DAT_0048c720 != 0) {
        uVar19 = FUN_0009db64();
        *(undefined4 *)unaff_r8 = uVar16;
        *(undefined4 *)((int)unaff_r8 + 4) =
             *(undefined4 *)(extraout_r2 + (int)((ulonglong)uVar19 >> 0x20) * 4);
        iVar5 = extraout_r2;
      }
      iVar10 = (int)((ulonglong)uVar19 >> 0x20);
      iVar1 = (int)uVar19;
      *(undefined4 *)(iVar5 + iVar10 * 4) = uVar16;
      if (iVar1 < iVar9) {
        *(undefined8 *)(*(int *)(iVar5 + iVar10 * 4) + iVar1 * 8) = 0x3ff0000000000000;
      }
      uVar16 = 0;
    }
    *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048c714;
    *(int *)((int)register0x00000054 + -0x58) = iVar5;
    *(int *)((int)register0x00000054 + -0x54) = iVar5;
    FUN_000986b8(uVar16);
    iVar1 = *(int *)((int)register0x00000054 + -0x50);
    *(int *)((int)register0x00000054 + -8) = iVar1;
    iVar5 = 0;
    while (pdVar6 = *(double **)((int)register0x00000054 + 8), iVar5 < (int)pdVar6) {
      *(int *)((int)register0x00000054 + -0x2c) = iVar5;
      iVar9 = iVar5 * 3;
      *(int *)((int)register0x00000054 + -0x18) = iVar9;
      iVar10 = *(int *)(*(int *)((int)register0x00000054 + 4) + iVar5 * 0xc + 4);
      unaff_r6 = *(double **)(*(int *)((int)register0x00000054 + 4) + iVar5 * 0xc);
      if (iVar10 == 0) {
        unaff_r8 = (double *)0x0;
        uVar16 = 0;
        iVar5 = 0;
        puVar2 = PTR_DAT_0048c724;
      }
      else {
        *(int *)((int)register0x00000054 + -0x1c) = iVar10;
        *(double **)((int)register0x00000054 + -0xc) = unaff_r6;
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048c724;
        *(int *)((int)register0x00000054 + -0x58) = iVar10;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
        *(int *)((int)register0x00000054 + -0x50) = iVar10;
        *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0048c71c;
        FUN_000987f4();
        puVar2 = *(undefined **)((int)register0x00000054 + -0x48);
        uVar16 = *(undefined4 *)((int)register0x00000054 + -0x44);
        unaff_r8 = *(double **)((int)register0x00000054 + -0x40);
        iVar9 = *(int *)((int)register0x00000054 + -0x18);
        iVar5 = *(int *)((int)register0x00000054 + -0x1c);
        unaff_r6 = *(double **)((int)register0x00000054 + -0xc);
        iVar1 = *(int *)((int)register0x00000054 + -8);
      }
      *(double **)((int)register0x00000054 + -0x1c) = unaff_r8;
      *(undefined4 *)((int)register0x00000054 + -0x20) = uVar16;
      *(undefined **)((int)register0x00000054 + -0xc) = puVar2;
      *(undefined **)((int)register0x00000054 + -0x5c) = puVar2;
      *(double **)((int)register0x00000054 + -0x58) = unaff_r6;
      *(int *)((int)register0x00000054 + -0x10) = iVar1 + iVar9 * 4;
      *(int *)((int)register0x00000054 + -0x54) = iVar5 << 3;
      FUN_0009e3a4();
      iVar1 = *(int *)((int)register0x00000054 + -0x10);
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)((int)register0x00000054 + -0x1c);
      if (*(int *)PTR_DAT_0048c720 == 0) {
        uVar16 = *(undefined4 *)((int)register0x00000054 + -0xc);
        iVar5 = *(int *)((int)register0x00000054 + -0x18);
        iVar1 = *(int *)((int)register0x00000054 + -8);
      }
      else {
        FUN_0009db64();
        uVar16 = *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)unaff_r8 = uVar16;
        iVar5 = *(int *)((int)register0x00000054 + -0x18);
        iVar1 = *(int *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)unaff_r8 + 4) = *(undefined4 *)(iVar1 + iVar5 * 4);
      }
      *(undefined4 *)(iVar1 + iVar5 * 4) = uVar16;
      iVar5 = *(int *)((int)register0x00000054 + -0x2c) + 1;
    }
    iVar5 = *(int *)((int)register0x00000054 + -0x24);
    pdVar4 = (double *)0x0;
    do {
      if ((int)pdVar4 < iVar5) {
        dVar17 = 0.0;
        pdVar8 = pdVar4;
        goto LAB_0048c480;
      }
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048c714;
      *(double **)((int)register0x00000054 + -0x58) = pdVar6;
      *(double **)((int)register0x00000054 + -0x54) = pdVar6;
      FUN_000986b8();
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + -0x50);
      for (iVar1 = 0; iVar1 < *(int *)((int)register0x00000054 + 8); iVar1 = iVar1 + 1) {
        *(int *)((int)register0x00000054 + -0x30) = iVar1;
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048c71c;
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        FUN_000986b8();
        iVar9 = *(int *)((int)register0x00000054 + -0x30);
        uVar19 = CONCAT44(iVar9 * 3,iVar9);
        iVar5 = *(int *)((int)register0x00000054 + -0x14);
        iVar1 = iVar5 + iVar9 * 0xc;
        uVar16 = *(undefined4 *)((int)register0x00000054 + -0x50);
        pdVar11 = *(double **)((int)register0x00000054 + -0x24);
        *(double **)(iVar1 + 4) = pdVar11;
        *(double **)(iVar1 + 8) = pdVar11;
        unaff_r6 = *(double **)((int)register0x00000054 + -4);
        if (*(int *)PTR_DAT_0048c720 != 0) {
          uVar19 = FUN_0009db64();
          *(undefined4 *)unaff_r8 = uVar16;
          *(undefined4 *)((int)unaff_r8 + 4) =
               *(undefined4 *)(extraout_r2_00 + (int)((ulonglong)uVar19 >> 0x20) * 4);
          iVar5 = extraout_r2_00;
        }
        iVar10 = (int)((ulonglong)uVar19 >> 0x20);
        iVar1 = (int)uVar19;
        *(undefined4 *)(iVar5 + iVar10 * 4) = uVar16;
        pdVar6 = *(double **)((int)unaff_r6 + iVar9 * 0xc + 8);
        pdVar8 = *(double **)((int)unaff_r6 + iVar10 * 4);
        if (pdVar6 < pdVar11) goto LAB_0048c460;
        pdVar6 = *(double **)(iVar5 + iVar10 * 4);
        if (pdVar8 != pdVar6) {
          *(double **)((int)register0x00000054 + -0x5c) = pdVar6;
          *(double **)((int)register0x00000054 + -0x58) = pdVar8;
          *(int *)((int)register0x00000054 + -0x54) = (int)pdVar11 << 3;
          FUN_0009e3a4();
          iVar1 = *(int *)((int)register0x00000054 + -0x30);
          unaff_r6 = *(double **)((int)register0x00000054 + -4);
        }
      }
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048c714;
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      FUN_000986b8();
      iVar1 = *(int *)((int)register0x00000054 + -0x50);
      *(int *)((int)register0x00000054 + -4) = iVar1;
      iVar5 = 0;
      while( true ) {
        iVar9 = *(int *)((int)register0x00000054 + -0x24);
        if (iVar9 <= iVar5) {
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + 0x18) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(int *)((int)register0x00000054 + 0x1c) = iVar1;
          *(int *)((int)register0x00000054 + 0x20) = iVar9;
          *(int *)((int)register0x00000054 + 0x24) = iVar9;
          *(undefined4 *)((int)register0x00000054 + 0x28) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x2c) = 0;
          return;
        }
        *(int *)((int)register0x00000054 + -0x34) = iVar5;
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048c71c;
        *(int *)((int)register0x00000054 + -0x58) = iVar9;
        *(int *)((int)register0x00000054 + -0x54) = iVar9;
        FUN_000986b8();
        iVar5 = *(int *)((int)register0x00000054 + -0x34);
        uVar19 = CONCAT44(iVar5 * 3,iVar5);
        iVar1 = *(int *)((int)register0x00000054 + -4);
        iVar5 = iVar1 + iVar5 * 0xc;
        pdVar8 = *(double **)((int)register0x00000054 + -0x50);
        pdVar11 = *(double **)((int)register0x00000054 + -0x24);
        *(double **)(iVar5 + 4) = pdVar11;
        *(double **)(iVar5 + 8) = pdVar11;
        if (*(int *)PTR_DAT_0048c720 != 0) {
          uVar19 = FUN_0009db64();
          *(double **)unaff_r8 = pdVar8;
          *(undefined4 *)((int)unaff_r8 + 4) =
               *(undefined4 *)(extraout_r2_01 + (int)((ulonglong)uVar19 >> 0x20) * 4);
          iVar1 = extraout_r2_01;
        }
        iVar5 = (int)((ulonglong)uVar19 >> 0x20);
        uVar3 = (uint)uVar19;
        *(double **)(iVar1 + iVar5 * 4) = pdVar8;
        uVar7 = *(uint *)((int)register0x00000054 + 8);
        if (uVar7 <= uVar3) goto LAB_0048c458;
        pdVar8 = *(double **)((int)register0x00000054 + -8);
        unaff_r6 = *(double **)((int)pdVar8 + iVar5 * 4 + 8);
        iVar9 = *(int *)((int)pdVar8 + iVar5 * 4);
        if (unaff_r6 < pdVar11) break;
        iVar5 = *(int *)(iVar1 + iVar5 * 4);
        if (iVar5 != iVar9) {
          *(int *)((int)register0x00000054 + -0x5c) = iVar5;
          *(int *)((int)register0x00000054 + -0x58) = iVar9;
          *(int *)((int)register0x00000054 + -0x54) = (int)pdVar11 << 3;
          FUN_0009e3a4();
          uVar3 = *(uint *)((int)register0x00000054 + -0x34);
          iVar1 = *(int *)((int)register0x00000054 + -4);
        }
        iVar5 = uVar3 + 1;
      }
      uVar3 = FUN_0009dc14(uVar3,pdVar11,unaff_r6);
      uVar7 = extraout_r3;
LAB_0048c458:
      iVar1 = FUN_0009dbd4(uVar3,uVar7);
      pdVar6 = extraout_r3_00;
LAB_0048c460:
      iVar1 = FUN_0009dc14(iVar1,pdVar11,pdVar6);
      dVar17 = (double)CONCAT44(extraout_s1,extraout_s0);
      pdVar4 = extraout_r1;
      pdVar6 = extraout_r2_02;
      while( true ) {
        pdVar4 = (double *)((int)pdVar4 + 1);
        dVar17 = dVar17 + pdVar11[(int)pdVar8] * pdVar11[(int)pdVar8];
LAB_0048c480:
        if ((int)pdVar6 <= (int)pdVar4) break;
        unaff_r6 = *(double **)(iVar1 + (int)pdVar4 * 0xc + 4);
        pdVar11 = *(double **)(iVar1 + (int)pdVar4 * 0xc);
        uVar15 = pdVar8 == unaff_r6;
        if (unaff_r6 <= pdVar8) goto LAB_0048c6f8;
      }
      uVar15 = pdVar6 == pdVar8;
      if (pdVar6 <= pdVar8) goto LAB_0048c6ec;
      unaff_r6 = (double *)(iVar1 + (int)pdVar8 * 0xc);
      iVar1 = *(int *)(iVar1 + (int)pdVar8 * 0xc);
      uVar15 = pdVar8 == *(double **)((int)unaff_r6 + 4);
      if (*(double **)((int)unaff_r6 + 4) <= pdVar8) goto LAB_0048c6e4;
      *(double **)((int)register0x00000054 + -0x18) = pdVar8;
      dVar17 = SQRT(dVar17);
      if (0.0 < *(double *)(iVar1 + (int)pdVar8 * 8)) {
        dVar17 = -dVar17;
      }
      *(double *)((int)register0x00000054 + -0x3c) = dVar17;
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0048c71c;
      *(double **)((int)register0x00000054 + -0x58) = pdVar6;
      *(double **)((int)register0x00000054 + -0x54) = pdVar6;
      FUN_000986b8();
      iVar9 = *(int *)((int)register0x00000054 + -0x50);
      dVar17 = *(double *)((int)register0x00000054 + -0x3c);
      iVar1 = *(int *)((int)register0x00000054 + -8);
      pdVar6 = *(double **)((int)register0x00000054 + 8);
      pdVar4 = *(double **)((int)register0x00000054 + -0x18);
      for (pdVar11 = pdVar4; pdVar8 = pdVar4, (int)pdVar11 < (int)pdVar6;
          pdVar11 = (double *)((int)pdVar11 + 1)) {
        if (pdVar11 == pdVar4) {
          unaff_r6 = *(double **)(iVar1 + (int)pdVar11 * 0xc + 4);
          uVar15 = pdVar4 == unaff_r6;
          if (unaff_r6 <= pdVar4) goto LAB_0048c6d8;
          unaff_r6 = (double *)(iVar9 + (int)pdVar11 * 8);
          *unaff_r6 = *(double *)(*(int *)(iVar1 + (int)pdVar11 * 0xc) + (int)pdVar4 * 8) - dVar17;
        }
        else {
          unaff_r6 = *(double **)(iVar1 + (int)pdVar11 * 0xc + 4);
          uVar15 = pdVar4 == unaff_r6;
          if (unaff_r6 <= pdVar4) goto LAB_0048c6cc;
          unaff_r6 = (double *)(iVar9 + (int)pdVar11 * 8);
          *unaff_r6 = *(double *)(*(int *)(iVar1 + (int)pdVar11 * 0xc) + (int)pdVar4 * 8);
        }
      }
      dVar17 = 0.0;
      for (pdVar11 = pdVar4; (int)pdVar11 < (int)pdVar6; pdVar11 = (double *)((int)pdVar11 + 1)) {
        dVar18 = *(double *)(iVar9 + (int)pdVar11 * 8);
        dVar17 = dVar17 + dVar18 * dVar18;
      }
      pdVar11 = pdVar4;
      if (SQRT(dVar17) != 0.0) {
        for (; (int)pdVar11 < (int)pdVar6; pdVar11 = (double *)((int)pdVar11 + 1)) {
          pdVar12 = (double *)(iVar9 + (int)pdVar11 * 8);
          *pdVar12 = *pdVar12 / SQRT(dVar17);
        }
        iVar5 = *(int *)((int)register0x00000054 + -0x24);
        do {
          if ((int)pdVar8 < iVar5) {
            dVar17 = 0.0;
            pdVar11 = pdVar4;
            goto LAB_0048c64c;
          }
          pdVar8 = *(double **)((int)register0x00000054 + -4);
          unaff_r6 = (double *)0x0;
LAB_0048c57c:
          if ((int)pdVar6 <= (int)unaff_r6) goto LAB_0048c150;
          dVar17 = 0.0;
          for (pdVar11 = pdVar4; pdVar12 = pdVar4, (int)pdVar11 < (int)pdVar6;
              pdVar11 = (double *)((int)pdVar11 + 1)) {
            pdVar13 = *(double **)((int)pdVar8 + (int)unaff_r6 * 0xc + 4);
            unaff_r8 = *(double **)((int)pdVar8 + (int)unaff_r6 * 0xc);
            if (pdVar13 <= pdVar11) goto LAB_0048c628;
            unaff_r8 = unaff_r8 + (int)pdVar11;
            dVar17 = dVar17 + *unaff_r8 * *(double *)(iVar9 + (int)pdVar11 * 8);
          }
LAB_0048c5fc:
          if ((int)pdVar6 <= (int)pdVar12) goto LAB_0048c578;
          pdVar13 = *(double **)((int)pdVar8 + (int)unaff_r6 * 0xc + 4);
          unaff_r8 = *(double **)((int)pdVar8 + (int)unaff_r6 * 0xc);
          if (pdVar12 < pdVar13) goto LAB_0048c5dc;
          FUN_0009dbd4(pdVar12,pdVar13);
          pdVar11 = extraout_r1_00;
          pdVar4 = pdVar12;
LAB_0048c628:
          iVar9 = FUN_0009dbd4(pdVar11,pdVar13);
          dVar17 = (double)CONCAT44(extraout_s1_00,extraout_s0_00);
          pdVar11 = extraout_r1_01;
          iVar1 = extraout_r2_03;
          pdVar6 = extraout_r3_01;
          pdVar12 = pdVar4;
          while( true ) {
            pdVar11 = (double *)((int)pdVar11 + 1);
            dVar17 = dVar17 + pdVar12[(int)pdVar8] * *pdVar13;
            pdVar4 = unaff_r6;
LAB_0048c64c:
            pdVar12 = pdVar4;
            if ((int)pdVar6 <= (int)pdVar11) break;
            unaff_r8 = *(double **)(iVar1 + (int)pdVar11 * 0xc + 4);
            pdVar13 = (double *)(iVar9 + (int)pdVar11 * 8);
            uVar15 = pdVar8 == unaff_r8;
            unaff_r6 = pdVar4;
            pdVar12 = *(double **)(iVar1 + (int)pdVar11 * 0xc);
            if (unaff_r8 <= pdVar8) goto LAB_0048c6c0;
          }
          for (; (int)pdVar12 < (int)pdVar6; pdVar12 = (double *)((int)pdVar12 + 1)) {
            unaff_r8 = *(double **)(iVar1 + (int)pdVar12 * 0xc + 4);
            uVar15 = pdVar8 == unaff_r8;
            if (unaff_r8 <= pdVar8) {
              FUN_0009dbd4(pdVar8,unaff_r8);
              pdVar4 = pdVar12;
LAB_0048c6c0:
              FUN_0009dbd4(pdVar8,unaff_r8);
              unaff_r6 = pdVar4;
              goto LAB_0048c6cc;
            }
            pdVar11 = (double *)(*(int *)(iVar1 + (int)pdVar12 * 0xc) + (int)pdVar8 * 8);
            unaff_r8 = (double *)(iVar9 + (int)pdVar12 * 8);
            *pdVar11 = *pdVar11 - dVar17 * (*unaff_r8 + *unaff_r8);
          }
          pdVar8 = (double *)((int)pdVar8 + 1);
        } while( true );
      }
      iVar5 = *(int *)((int)register0x00000054 + -0x24);
LAB_0048c150:
      pdVar4 = (double *)((int)pdVar4 + 1);
    } while( true );
  }
  goto LAB_0048c708;
LAB_0048c578:
  unaff_r6 = (double *)((int)unaff_r6 + 1);
  goto LAB_0048c57c;
LAB_0048c5dc:
  unaff_r8 = unaff_r8 + (int)pdVar12;
  dVar18 = *(double *)(iVar9 + (int)pdVar12 * 8);
  *unaff_r8 = *unaff_r8 - dVar17 * (dVar18 + dVar18);
  pdVar12 = (double *)((int)pdVar12 + 1);
  goto LAB_0048c5fc;
LAB_0048c6cc:
  FUN_0009dbd4(pdVar8,unaff_r6);
LAB_0048c6d8:
  FUN_0009dbd4(pdVar8,unaff_r6);
LAB_0048c6e4:
  FUN_0009dbd4(pdVar8);
  pdVar6 = extraout_r2_04;
LAB_0048c6ec:
  FUN_0009dbd4(pdVar8,pdVar6);
LAB_0048c6f8:
  param_1 = FUN_0009dbd4(pdVar8,unaff_r6);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x60);
  if ((bool)uVar15) {
    register0x00000054 = (BADSPACEBASE *)puVar14;
  }
LAB_0048c708:
  unaff_lr = 0x48c710;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x0048bebc;
}



/* k3c/common/utils/maths.solveUpperTriangular @ 0048c728 (size 476) */

void k3c_common_utils_maths_solveUpperTriangular(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r2;
  uint extraout_r2_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  double dVar10;
  double dVar11;
  
code_r0x0048c728:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar8 = (undefined1 *)((int)register0x00000054 + -0x20);
    *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
    iVar1 = *(int *)((int)register0x00000054 + 8);
    if (iVar1 != *(int *)((int)register0x00000054 + 0x14)) {
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0048c90c;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 0x24;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
      FUN_001386c4();
      *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
      *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
      *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
      *(undefined4 *)((int)register0x00000054 + 0x28) =
           *(undefined4 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + 0x2c) =
           *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0048c7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((int)register0x00000054 + -0x20))();
      return;
    }
    *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0048c908;
    *(int *)((int)register0x00000054 + -0x18) = iVar1;
    *(int *)((int)register0x00000054 + -0x14) = iVar1;
    FUN_000986b8();
    iVar1 = *(int *)((int)register0x00000054 + -0x10);
    uVar2 = *(uint *)((int)register0x00000054 + 8);
    iVar4 = *(int *)((int)register0x00000054 + 4);
    uVar3 = uVar2;
    while( true ) {
      uVar3 = uVar3 - 1;
      if ((int)uVar3 < 0) {
        *(int *)((int)register0x00000054 + 0x1c) = iVar1;
        *(uint *)((int)register0x00000054 + 0x20) = uVar2;
        *(uint *)((int)register0x00000054 + 0x24) = uVar2;
        *(undefined4 *)((int)register0x00000054 + 0x28) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x2c) = 0;
        return;
      }
      uVar9 = uVar2 == uVar3;
      if (uVar2 <= uVar3) break;
      uVar6 = *(uint *)(iVar4 + uVar3 * 0xc + 4);
      iVar5 = *(int *)(iVar4 + uVar3 * 0xc);
      uVar9 = uVar3 == uVar6;
      if (uVar6 <= uVar3) goto LAB_0048c8e0;
      dVar10 = *(double *)(iVar5 + uVar3 * 8);
      if (ABS(dVar10) < *(double *)PTR_DAT_0048c910) {
        *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0048c914;
        *(undefined4 *)((int)register0x00000054 + -0x18) = 0x1e;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
        FUN_001386c4();
        *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x2c) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      dVar11 = 0.0;
      uVar7 = uVar3;
      while (uVar7 = uVar7 + 1, (int)uVar7 < (int)uVar2) {
        uVar9 = uVar7 == uVar6;
        if (uVar6 <= uVar7) {
          FUN_0009dbd4(uVar7,uVar6);
          uVar3 = extraout_r2;
          goto LAB_0048c8e0;
        }
        dVar11 = dVar11 + *(double *)(iVar5 + uVar7 * 8) * *(double *)(iVar1 + uVar7 * 8);
      }
      *(double *)(iVar1 + uVar3 * 8) =
           (*(double *)(*(int *)((int)register0x00000054 + 0x10) + uVar3 * 8) - dVar11) / dVar10;
    }
    goto LAB_0048c8ec;
  }
  goto LAB_0048c8f8;
LAB_0048c8e0:
  FUN_0009dbd4(uVar3,uVar6);
  uVar3 = extraout_r2_00;
LAB_0048c8ec:
  param_1 = FUN_0009dbd4(uVar3);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
  if ((bool)uVar9) {
    register0x00000054 = (BADSPACEBASE *)puVar8;
  }
LAB_0048c8f8:
  unaff_lr = 0x48c900;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x0048c728;
}



/* k3c/common/utils/maths.solveQR @ 0048c918 (size 748) */

void k3c_common_utils_maths_solveQR(undefined4 param_1)

{
  int iVar1;
  double *pdVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r3;
  int iVar6;
  int extraout_r3_00;
  int unaff_r4;
  int unaff_r5;
  double *unaff_r6;
  double *unaff_r7;
  double *unaff_r8;
  double *unaff_r9;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  undefined8 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x48) = unaff_lr;
      uVar8 = *(int *)((int)register0x00000054 + 0x14) == 0;
      if (!(bool)uVar8) {
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 0x10) + 4);
        *(undefined4 *)((int)register0x00000054 + -0x14) = uVar3;
        *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0048cc08;
        *(undefined4 *)((int)register0x00000054 + -0x40) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar3;
        FUN_000986b8();
        iVar1 = *(int *)((int)register0x00000054 + -0x38);
        *(int *)((int)register0x00000054 + -0xc) = iVar1;
        iVar4 = 0;
        while (iVar5 = *(int *)((int)register0x00000054 + -0x14), iVar4 < iVar5) {
          *(int *)((int)register0x00000054 + -0x18) = iVar4;
          *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0048cc0c;
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)((int)register0x00000054 + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + 0x14);
          FUN_000986b8();
          iVar4 = *(int *)((int)register0x00000054 + -0x18);
          uVar9 = CONCAT44(iVar4 * 3,iVar4);
          iVar1 = *(int *)((int)register0x00000054 + -0xc);
          iVar4 = iVar1 + iVar4 * 0xc;
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x38);
          unaff_r5 = *(int *)((int)register0x00000054 + 0x14);
          *(int *)(iVar4 + 4) = unaff_r5;
          *(int *)(iVar4 + 8) = unaff_r5;
          if (*(int *)PTR_DAT_0048cc10 != 0) {
            uVar9 = FUN_0009db64();
            *(undefined4 *)unaff_r8 = uVar3;
            *(undefined4 *)((int)unaff_r8 + 4) =
                 *(undefined4 *)(extraout_r2 + (int)((ulonglong)uVar9 >> 0x20) * 4);
            iVar1 = extraout_r2;
            iVar4 = extraout_r3;
          }
          *(undefined4 *)(iVar1 + (int)((ulonglong)uVar9 >> 0x20) * 4) = uVar3;
          unaff_r4 = *(int *)((int)register0x00000054 + 0x10);
          unaff_r6 = (double *)0x0;
          while( true ) {
            pdVar2 = (double *)uVar9;
            if (unaff_r5 <= (int)unaff_r6) break;
            unaff_r8 = *(double **)(unaff_r4 + (int)unaff_r6 * 0xc + 4);
            unaff_r7 = *(double **)(unaff_r4 + (int)unaff_r6 * 0xc);
            uVar8 = pdVar2 == unaff_r8;
            if (unaff_r8 <= pdVar2) {
LAB_0048cbe0:
              FUN_0009dbd4(pdVar2,unaff_r8);
              goto LAB_0048cbe8;
            }
            unaff_r8 = *(double **)(iVar4 + 4);
            unaff_r9 = *(double **)(iVar1 + (int)((ulonglong)uVar9 >> 0x20) * 4);
            unaff_r7 = unaff_r7 + (int)pdVar2;
            uVar8 = unaff_r6 == unaff_r8;
            if (unaff_r8 <= unaff_r6) {
              pdVar2 = (double *)FUN_0009dbd4(unaff_r6,unaff_r8);
              goto LAB_0048cbe0;
            }
LAB_0048cb90:
            unaff_r8 = unaff_r9 + (int)unaff_r6;
            *unaff_r8 = *unaff_r7;
            unaff_r6 = (double *)((int)unaff_r6 + 1);
          }
          iVar4 = (int)pdVar2 + 1;
        }
        if (iVar5 != 0) {
          if (*(int *)((int)register0x00000054 + 0x20) == *(int *)(iVar1 + 4)) {
            *(int *)((int)register0x00000054 + -0x10) = *(int *)(iVar1 + 4);
            *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0048cc0c;
            *(int *)((int)register0x00000054 + -0x40) = iVar5;
            *(int *)((int)register0x00000054 + -0x3c) = iVar5;
            FUN_000986b8();
            iVar1 = *(int *)((int)register0x00000054 + -0x38);
            iVar4 = *(int *)((int)register0x00000054 + -0x10);
            iVar5 = *(int *)((int)register0x00000054 + 0x1c);
            iVar6 = *(int *)((int)register0x00000054 + -0xc);
            unaff_r4 = *(int *)((int)register0x00000054 + -0x14);
            unaff_r5 = 0;
            do {
              if (unaff_r4 <= unaff_r5) {
                *(undefined4 *)((int)register0x00000054 + -0x44) =
                     *(undefined4 *)((int)register0x00000054 + 4);
                *(undefined4 *)((int)register0x00000054 + -0x40) =
                     *(undefined4 *)((int)register0x00000054 + 8);
                *(undefined4 *)((int)register0x00000054 + -0x3c) =
                     *(undefined4 *)((int)register0x00000054 + 0xc);
                *(int *)((int)register0x00000054 + -0x38) = iVar1;
                *(int *)((int)register0x00000054 + -0x34) = unaff_r4;
                *(int *)((int)register0x00000054 + -0x30) = unaff_r4;
                k3c_common_utils_maths_solveUpperTriangular();
                if (*(int *)((int)register0x00000054 + -0x20) == 0) {
                  *(undefined4 *)((int)register0x00000054 + 0x28) =
                       *(undefined4 *)((int)register0x00000054 + -0x2c);
                  *(undefined4 *)((int)register0x00000054 + 0x2c) =
                       *(undefined4 *)((int)register0x00000054 + -0x28);
                  *(undefined4 *)((int)register0x00000054 + 0x30) =
                       *(undefined4 *)((int)register0x00000054 + -0x24);
                  *(undefined4 *)((int)register0x00000054 + 0x34) = 0;
                  *(undefined4 *)((int)register0x00000054 + 0x38) = 0;
                  return;
                }
                *(undefined4 *)((int)register0x00000054 + -8) = 0;
                *(undefined4 *)((int)register0x00000054 + -4) = 0;
                *(undefined4 *)((int)register0x00000054 + -8) =
                     *(undefined4 *)(*(int *)((int)register0x00000054 + -0x20) + 4);
                *(undefined4 *)((int)register0x00000054 + -4) =
                     *(undefined4 *)((int)register0x00000054 + -0x1c);
                *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0048cc14;
                *(undefined4 *)((int)register0x00000054 + -0x40) = 0x23;
                *(undefined1 **)((int)register0x00000054 + -0x3c) =
                     (undefined1 *)((int)register0x00000054 + -8);
                *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
                *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
                FUN_001386c4();
                *(undefined4 *)((int)register0x00000054 + 0x28) = 0;
                *(undefined4 *)((int)register0x00000054 + 0x2c) = 0;
                *(undefined4 *)((int)register0x00000054 + 0x30) = 0;
                *(undefined4 *)((int)register0x00000054 + 0x34) =
                     *(undefined4 *)((int)register0x00000054 + -0x30);
                *(undefined4 *)((int)register0x00000054 + 0x38) =
                     *(undefined4 *)((int)register0x00000054 + -0x2c);
                return;
              }
              for (unaff_r6 = (double *)0x0; (int)unaff_r6 < iVar4;
                  unaff_r6 = (double *)((int)unaff_r6 + 1)) {
                pdVar2 = *(double **)(iVar6 + unaff_r5 * 0xc + 4);
                unaff_r9 = (double *)(iVar1 + unaff_r5 * 8);
                unaff_r7 = *(double **)(iVar6 + unaff_r5 * 0xc);
                if (pdVar2 <= unaff_r6) {
                  FUN_0009dbd4(unaff_r6,pdVar2);
                  goto LAB_0048cb70;
                }
                *unaff_r9 = *unaff_r9 +
                            unaff_r7[(int)unaff_r6] * *(double *)(iVar5 + (int)unaff_r6 * 8);
              }
              unaff_r5 = unaff_r5 + 1;
            } while( true );
          }
LAB_0048cb70:
          *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0048cc18;
          *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_0048cc1c;
          FUN_00095b00();
        }
        uVar9 = FUN_0009dbd4(0,0);
        iVar1 = extraout_r2_00;
        iVar4 = extraout_r3_00;
        goto LAB_0048cb90;
      }
LAB_0048cbe8:
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x48);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x48cc00;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/utils/maths.LinearFit @ 0048cc20 (size 1348) */

void k3c_common_utils_maths_LinearFit(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double *pdVar4;
  double *extraout_r1;
  undefined4 extraout_r1_00;
  int iVar5;
  int extraout_r2;
  int extraout_r2_00;
  double *extraout_r2_01;
  int extraout_r2_02;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  int iVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  double *unaff_r7;
  double *pdVar10;
  double *unaff_r8;
  double *unaff_r9;
  int unaff_r10;
  int extraout_r12;
  int iVar11;
  undefined1 *puVar12;
  undefined4 unaff_lr;
  undefined1 uVar13;
  undefined4 extraout_s0;
  undefined4 extraout_s1;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar12 = (undefined1 *)((int)register0x00000054 + -0x74);
      *(undefined4 *)((int)register0x00000054 + -0x74) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0048d168;
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + 8);
      FUN_000986b8();
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -100);
      *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0048d16c;
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           *(undefined4 *)((int)register0x00000054 + 0x14);
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + 0x14);
      FUN_000986b8();
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -100);
      *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0048d16c;
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           *(undefined4 *)((int)register0x00000054 + 0x14);
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + 0x14);
      FUN_000986b8();
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -100);
      iVar2 = *(int *)((int)register0x00000054 + 0x20);
      if (iVar2 == 0) {
        iVar1 = *(int *)((int)register0x00000054 + 8);
        uVar3 = *(undefined4 *)((int)register0x00000054 + 4);
        iVar7 = *(int *)((int)register0x00000054 + 0x10);
        pdVar8 = *(double **)((int)register0x00000054 + 0x18);
        iVar2 = *(int *)((int)register0x00000054 + 0xc);
        goto LAB_0048cdf8;
      }
      *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0048d16c;
      *(int *)((int)register0x00000054 + -0x6c) = iVar2;
      *(int *)((int)register0x00000054 + -0x68) = iVar2;
      FUN_000986b8();
      pdVar9 = *(double **)((int)register0x00000054 + -100);
      iVar2 = *(int *)((int)register0x00000054 + 0x1c);
      pdVar10 = *(double **)((int)register0x00000054 + 0x20);
      for (iVar1 = 0; iVar1 < (int)pdVar10; iVar1 = iVar1 + 1) {
        pdVar9[iVar1] = SQRT(*(double *)(iVar2 + iVar1 * 8));
      }
      iVar1 = *(int *)((int)register0x00000054 + 8);
      uVar13 = iVar1 == 0;
      if (!(bool)uVar13) {
        *(double **)((int)register0x00000054 + -0x10) = pdVar9;
        iVar7 = *(int *)(*(int *)((int)register0x00000054 + 4) + 4);
        *(int *)((int)register0x00000054 + -0x24) = iVar7;
        iVar2 = 0;
        do {
          if (iVar2 < iVar1) {
            *(int *)((int)register0x00000054 + -0x30) = iVar2;
            *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0048d16c;
            *(int *)((int)register0x00000054 + -0x6c) = iVar7;
            *(int *)((int)register0x00000054 + -0x68) = iVar7;
            FUN_000986b8();
            iVar1 = *(int *)((int)register0x00000054 + -0x30);
            uVar16 = CONCAT44(iVar1 * 3,iVar1);
            iVar2 = *(int *)((int)register0x00000054 + -4);
            iVar1 = iVar2 + iVar1 * 0xc;
            uVar3 = *(undefined4 *)((int)register0x00000054 + -100);
            iVar7 = *(int *)((int)register0x00000054 + -0x24);
            *(int *)(iVar1 + 4) = iVar7;
            *(int *)(iVar1 + 8) = iVar7;
            if (*(int *)PTR_DAT_0048d170 != 0) {
              uVar16 = FUN_0009db64();
              *(undefined4 *)unaff_r8 = uVar3;
              *(undefined4 *)((int)unaff_r8 + 4) =
                   *(undefined4 *)(extraout_r2 + (int)((ulonglong)uVar16 >> 0x20) * 4);
              iVar2 = extraout_r2;
              iVar1 = extraout_r3;
            }
            *(undefined4 *)(iVar2 + (int)((ulonglong)uVar16 >> 0x20) * 4) = uVar3;
            iVar6 = *(int *)((int)register0x00000054 + 4);
            pdVar9 = *(double **)((int)register0x00000054 + -0x10);
            pdVar10 = *(double **)((int)register0x00000054 + 0x20);
            unaff_r8 = (double *)0x0;
            goto LAB_0048d0e0;
          }
          iVar6 = *(int *)((int)register0x00000054 + 0x10);
          iVar7 = *(int *)((int)register0x00000054 + -8);
          pdVar8 = *(double **)((int)register0x00000054 + 0x14);
          for (pdVar4 = (double *)0x0; (int)pdVar4 < (int)pdVar8;
              pdVar4 = (double *)((int)pdVar4 + 1)) {
            if (pdVar10 <= pdVar4) goto LAB_0048d0c8;
            unaff_r7 = (double *)(iVar7 + (int)pdVar4 * 8);
            unaff_r8 = (double *)(iVar6 + (int)pdVar4 * 8);
            *unaff_r7 = *unaff_r8 * pdVar9[(int)pdVar4];
          }
          uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
          iVar2 = iVar1;
LAB_0048cdf8:
          *(undefined4 *)((int)register0x00000054 + -0x18) = uVar3;
          *(double **)((int)register0x00000054 + -0x28) = pdVar8;
          *(int *)((int)register0x00000054 + -0x14) = iVar7;
          *(undefined4 *)((int)register0x00000054 + -0x70) = uVar3;
          *(int *)((int)register0x00000054 + -0x6c) = iVar1;
          *(int *)((int)register0x00000054 + -0x68) = iVar2;
          k3c_common_utils_maths_Economyqr_Decomposition();
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -100);
          iVar6 = *(int *)((int)register0x00000054 + -0x60);
          *(int *)((int)register0x00000054 + -0x2c) = iVar6;
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          *(undefined4 *)((int)register0x00000054 + -0x68) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          k3c_common_utils_maths_solveQR();
          iVar2 = *(int *)((int)register0x00000054 + 8);
          if (iVar2 != 0) {
            iVar6 = *(int *)(*(int *)((int)register0x00000054 + -0x18) + 4);
            if (iVar6 == *(int *)((int)register0x00000054 + -0x48)) {
              *(undefined4 *)((int)register0x00000054 + -0x34) =
                   *(undefined4 *)((int)register0x00000054 + -0x44);
              *(int *)((int)register0x00000054 + -0x24) = iVar6;
              *(int *)((int)register0x00000054 + -0x38) = *(int *)((int)register0x00000054 + -0x48);
              *(undefined4 *)((int)register0x00000054 + -0x20) =
                   *(undefined4 *)((int)register0x00000054 + -0x4c);
              *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0048d16c;
              *(int *)((int)register0x00000054 + -0x6c) = iVar2;
              *(int *)((int)register0x00000054 + -0x68) = iVar2;
              FUN_000986b8();
              uVar16 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x24),
                                *(undefined4 *)((int)register0x00000054 + -100));
              iVar2 = *(int *)((int)register0x00000054 + 8);
              iVar1 = *(int *)((int)register0x00000054 + -0x20);
              iVar6 = *(int *)((int)register0x00000054 + -0x18);
              iVar7 = 0;
              do {
                if (iVar2 <= iVar7) {
                  iVar1 = *(int *)((int)register0x00000054 + 0x14);
                  if (iVar2 == iVar1) {
                    *(int *)((int)register0x00000054 + -4) = (int)uVar16;
                    *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0048d16c;
                    *(int *)((int)register0x00000054 + -0x6c) = iVar1;
                    *(int *)((int)register0x00000054 + -0x68) = iVar1;
                    FUN_000986b8();
                    iVar2 = *(int *)((int)register0x00000054 + -100);
                    iVar1 = *(int *)((int)register0x00000054 + -0x14);
                    iVar6 = *(int *)((int)register0x00000054 + -4);
                    iVar7 = *(int *)((int)register0x00000054 + 0x14);
                    for (iVar11 = 0; iVar11 < iVar7; iVar11 = iVar11 + 1) {
                      *(double *)(iVar2 + iVar11 * 8) =
                           *(double *)(iVar1 + iVar11 * 8) - *(double *)(iVar6 + iVar11 * 8);
                    }
                    if (*(char *)((int)register0x00000054 + 0x28) == '\0') {
                      iVar1 = *(int *)((int)register0x00000054 + -0x2c);
                      if (iVar1 == 0) {
                        iVar1 = 0;
                        iVar6 = 0;
                      }
                      else {
                        *(int *)((int)register0x00000054 + -4) = iVar2;
                        *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0048d16c;
                        *(int *)((int)register0x00000054 + -0x6c) = iVar1;
                        *(int *)((int)register0x00000054 + -0x68) = iVar1;
                        FUN_000986b8();
                        iVar6 = *(int *)((int)register0x00000054 + -100);
                        iVar2 = *(int *)((int)register0x00000054 + -0x1c);
                        iVar1 = *(int *)((int)register0x00000054 + -0x2c);
                        for (iVar7 = 0; iVar7 < iVar1; iVar7 = iVar7 + 1) {
                          dVar14 = 0.0;
                          for (iVar11 = 0; iVar11 < *(int *)(iVar2 + iVar7 * 0xc + 4);
                              iVar11 = iVar11 + 1) {
                            dVar15 = *(double *)(*(int *)(iVar2 + iVar7 * 0xc) + iVar11 * 8);
                            dVar14 = dVar14 + dVar15 * dVar15;
                          }
                          *(double *)(iVar6 + iVar7 * 8) = dVar14;
                        }
                        iVar7 = *(int *)((int)register0x00000054 + 0x14);
                        iVar2 = *(int *)((int)register0x00000054 + -4);
                      }
                    }
                    else {
                      iVar6 = *(int *)((int)register0x00000054 + -0xc);
                      iVar1 = iVar7;
                    }
                    *(undefined4 *)((int)register0x00000054 + 0x2c) =
                         *(undefined4 *)((int)register0x00000054 + -0x20);
                    *(undefined4 *)((int)register0x00000054 + 0x30) =
                         *(undefined4 *)((int)register0x00000054 + -0x38);
                    *(undefined4 *)((int)register0x00000054 + 0x34) =
                         *(undefined4 *)((int)register0x00000054 + -0x34);
                    *(int *)((int)register0x00000054 + 0x38) = iVar6;
                    *(int *)((int)register0x00000054 + 0x3c) = iVar1;
                    *(int *)((int)register0x00000054 + 0x40) = iVar1;
                    *(int *)((int)register0x00000054 + 0x44) = iVar2;
                    *(int *)((int)register0x00000054 + 0x48) = iVar7;
                    *(int *)((int)register0x00000054 + 0x4c) = iVar7;
                    return;
                  }
                  *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0048d174;
                  *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_0048d178;
                  uVar16 = FUN_00095b00();
                  iVar2 = extraout_r2_00;
                  iVar1 = extraout_r3_00;
                  goto LAB_0048d058;
                }
                for (pdVar8 = (double *)0x0; (int)pdVar8 < (int)((ulonglong)uVar16 >> 0x20);
                    pdVar8 = (double *)((int)pdVar8 + 1)) {
                  unaff_r8 = *(double **)(iVar6 + iVar7 * 0xc + 4);
                  unaff_r9 = (double *)((int)uVar16 + iVar7 * 8);
                  unaff_r7 = *(double **)(iVar6 + iVar7 * 0xc);
                  if (unaff_r8 <= pdVar8) {
                    FUN_0009dbd4(pdVar8,unaff_r8);
                    goto LAB_0048d0a8;
                  }
LAB_0048d058:
                  pdVar10 = unaff_r7 + (int)pdVar8;
                  unaff_r7 = (double *)(iVar1 + (int)pdVar8 * 8);
                  *unaff_r9 = *unaff_r9 + *pdVar10 * *unaff_r7;
                }
                iVar7 = iVar7 + 1;
              } while( true );
            }
LAB_0048d0a8:
            *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0048d174;
            *(undefined **)((int)register0x00000054 + -0x6c) = PTR_DAT_0048d17c;
            FUN_00095b00();
          }
          FUN_0009dbd4(0,0);
          pdVar4 = extraout_r1;
          pdVar10 = extraout_r2_01;
LAB_0048d0c8:
          uVar3 = FUN_0009dbd4(pdVar4,pdVar10);
          uVar16 = CONCAT44(extraout_r1_00,uVar3);
          dVar14 = (double)CONCAT44(extraout_s1,extraout_s0);
          iVar2 = extraout_r2_02;
          iVar1 = extraout_r3_01;
          pdVar9 = pdVar8;
          pdVar10 = unaff_r7;
          iVar11 = extraout_r12;
LAB_0048d0d4:
          unaff_r9 = (double *)(iVar11 + (int)unaff_r8 * 8);
          *unaff_r9 = dVar14;
          unaff_r8 = (double *)((int)unaff_r8 + 1);
LAB_0048d0e0:
          iVar5 = (int)((ulonglong)uVar16 >> 0x20);
          pdVar8 = (double *)uVar16;
          unaff_r7 = pdVar10;
          if ((int)unaff_r8 < iVar7) {
            uVar13 = pdVar10 == pdVar8;
            if (pdVar8 < pdVar10) {
              unaff_r9 = *(double **)(iVar6 + iVar5 * 4 + 4);
              uVar13 = unaff_r8 == unaff_r9;
              if (unaff_r8 < unaff_r9) goto code_r0x0048d108;
              goto LAB_0048d134;
            }
            goto LAB_0048d140;
          }
          iVar2 = (int)pdVar8 + 1;
          iVar1 = *(int *)((int)register0x00000054 + 8);
        } while( true );
      }
LAB_0048d148:
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x74);
      if ((bool)uVar13) {
        register0x00000054 = (BADSPACEBASE *)puVar12;
      }
    }
    unaff_lr = 0x48d160;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
code_r0x0048d108:
  unaff_r9 = *(double **)(iVar1 + 4);
  iVar11 = *(int *)(iVar2 + iVar5 * 4);
  dVar14 = *(double *)(*(int *)(iVar6 + iVar5 * 4) + (int)unaff_r8 * 8) * pdVar9[(int)pdVar8];
  uVar13 = unaff_r8 == unaff_r9;
  if (unaff_r9 <= unaff_r8) {
    FUN_0009dbd4(unaff_r8,unaff_r9);
LAB_0048d134:
    pdVar8 = (double *)FUN_0009dbd4(unaff_r8,unaff_r9);
LAB_0048d140:
    FUN_0009dbd4(pdVar8,pdVar10);
    goto LAB_0048d148;
  }
  goto LAB_0048d0d4;
}



/* k3c/common/utils/maths.updateWeights @ 0048d180 (size 304) */

undefined4 k3c_common_utils_maths_updateWeights(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_r10;
  undefined4 uVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined8 local_1c;
  undefined4 uStack_18;
  undefined8 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  uVar5 = FUN_000986b8();
  bVar1 = true;
  iVar2 = in_stack_00000004;
  iVar3 = in_stack_00000008;
  for (iVar4 = 0; iVar4 < iVar3; iVar4 = iVar4 + 1) {
    if (ABS(*(double *)(iVar2 + iVar4 * 8)) < 1.0) {
      FUN_000b0b80();
      FUN_000b0b80();
      *(undefined8 *)(uStack_18 + iVar4 * 8) = local_14;
      bVar1 = false;
      iVar2 = in_stack_00000004;
      iVar3 = in_stack_00000008;
    }
    else {
      *(undefined8 *)(uStack_18 + iVar4 * 8) = 0;
    }
    uVar5 = 0;
  }
  if (bVar1) {
    for (iVar2 = 0; iVar2 < iVar3; iVar2 = iVar2 + 1) {
      uVar5 = 0;
      *(undefined8 *)(uStack_18 + iVar2 * 8) = 0x3ff0000000000000;
    }
  }
  return uVar5;
}



/* k3c/common/utils/maths.RobustFit @ 0048d2b8 (size 1864) */

int k3c_common_utils_maths_RobustFit(undefined4 param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  double *extraout_r1;
  double *pdVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 extraout_r2;
  double *extraout_r2_00;
  double *extraout_r2_01;
  int iVar10;
  int iVar11;
  int extraout_r3;
  double *extraout_r3_00;
  double *extraout_r3_01;
  double *extraout_r3_02;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  int unaff_r10;
  undefined1 *puVar17;
  undefined4 unaff_lr;
  undefined1 uVar18;
  uint in_fpscr;
  undefined4 extraout_s0;
  double dVar19;
  undefined4 extraout_s1;
  double dVar20;
  double dVar21;
  double dVar22;
  uint unaff_s30;
  
  while ((undefined1 *)((int)register0x00000054 + -0x34) <= *(undefined1 **)(unaff_r10 + 8)) {
LAB_0048d9f4:
    unaff_lr = 0x48d9fc;
    param_1 = FUN_0009bf64(param_1);
  }
  puVar17 = (undefined1 *)((int)register0x00000054 + -0xb4);
  *(undefined4 *)((int)register0x00000054 + -0xb4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -0xb0) = *(undefined4 *)((int)register0x00000054 + 4);
  *(undefined4 *)((int)register0x00000054 + -0xac) = *(undefined4 *)((int)register0x00000054 + 8);
  *(undefined4 *)((int)register0x00000054 + -0xa8) = *(undefined4 *)((int)register0x00000054 + 0xc);
  *(undefined4 *)((int)register0x00000054 + -0xa4) = *(undefined4 *)((int)register0x00000054 + 0x10)
  ;
  *(undefined4 *)((int)register0x00000054 + -0xa0) = *(undefined4 *)((int)register0x00000054 + 0x14)
  ;
  *(undefined4 *)((int)register0x00000054 + -0x9c) = *(undefined4 *)((int)register0x00000054 + 0x18)
  ;
  *(undefined1 **)((int)register0x00000054 + -0x98) =
       (undefined1 *)((int)register0x00000054 + -0x24);
  *(undefined4 *)((int)register0x00000054 + -0x94) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x90) = 0;
  *(undefined1 *)((int)register0x00000054 + -0x8c) = 0;
  k3c_common_utils_maths_LinearFit();
  uVar2 = *(undefined4 *)((int)register0x00000054 + -0x84);
  *(undefined4 *)((int)register0x00000054 + -0x48) = uVar2;
  *(undefined4 *)((int)register0x00000054 + -0x1c) =
       *(undefined4 *)((int)register0x00000054 + -0x70);
  *(undefined4 *)((int)register0x00000054 + -0x18) =
       *(undefined4 *)((int)register0x00000054 + -0x88);
  *(undefined4 *)((int)register0x00000054 + -0x14) =
       *(undefined4 *)((int)register0x00000054 + -0x7c);
  *(undefined4 *)((int)register0x00000054 + -0x4c) =
       *(undefined4 *)((int)register0x00000054 + -0x6c);
  *(undefined4 *)((int)register0x00000054 + -0x44) =
       *(undefined4 *)((int)register0x00000054 + -0x80);
  *(undefined4 *)((int)register0x00000054 + -0x40) =
       *(undefined4 *)((int)register0x00000054 + -0x78);
  *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_0048da04;
  *(undefined4 *)((int)register0x00000054 + -0xac) = uVar2;
  *(undefined4 *)((int)register0x00000054 + -0xa8) = uVar2;
  FUN_000986b8();
  *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_0048da04;
  *(undefined4 *)((int)register0x00000054 + -0xac) = *(undefined4 *)((int)register0x00000054 + 0x14)
  ;
  *(undefined4 *)((int)register0x00000054 + -0xa8) = *(undefined4 *)((int)register0x00000054 + 0x14)
  ;
  FUN_000986b8();
  iVar3 = *(int *)((int)register0x00000054 + -0xa4);
  iVar4 = *(int *)((int)register0x00000054 + -0x40);
  pdVar7 = *(double **)((int)register0x00000054 + 0x14);
  iVar10 = *(int *)((int)register0x00000054 + -0x14);
  for (pdVar12 = (double *)0x0; (int)pdVar12 < iVar4; pdVar12 = (double *)((int)pdVar12 + 1)) {
    dVar19 = *(double *)(iVar10 + (int)pdVar12 * 8);
    dVar20 = *(double *)PTR_DAT_0048da08;
    uVar8 = in_fpscr & 0xfffffff | (uint)(dVar19 < dVar20) << 0x1f |
            (uint)(dVar19 == dVar20) << 0x1e;
    in_fpscr = uVar8 | (uint)(NAN(dVar19) || NAN(dVar20)) << 0x1c;
    bVar1 = (byte)(uVar8 >> 0x18);
    if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      uVar18 = pdVar7 == pdVar12;
      if (pdVar7 <= pdVar12) goto LAB_0048d9d8;
      *(double *)(iVar3 + (int)pdVar12 * 8) = dVar19;
    }
    else {
      uVar18 = pdVar7 == pdVar12;
      if (pdVar7 <= pdVar12) goto LAB_0048d9e4;
      *(double *)(iVar3 + (int)pdVar12 * 8) = dVar20;
    }
  }
  *(int *)((int)register0x00000054 + -4) = iVar3;
  *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_0048da04;
  *(double **)((int)register0x00000054 + -0xac) = pdVar7;
  *(double **)((int)register0x00000054 + -0xa8) = pdVar7;
  FUN_000986b8();
  iVar3 = *(int *)((int)register0x00000054 + -0xa4);
  *(int *)((int)register0x00000054 + -8) = iVar3;
  iVar4 = *(int *)((int)register0x00000054 + -4);
  uVar8 = *(uint *)((int)register0x00000054 + 0x14);
  for (iVar10 = 0; iVar10 < (int)uVar8; iVar10 = iVar10 + 1) {
    dVar19 = *(double *)(iVar4 + iVar10 * 8);
    uVar5 = in_fpscr & 0xfffffff | (uint)(dVar19 < 1.0) << 0x1f;
    in_fpscr = uVar5 | (uint)NAN(dVar19) << 0x1c;
    if ((byte)(uVar5 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      *(int *)((int)register0x00000054 + -0x34) = iVar10;
      *(double *)((int)register0x00000054 + -0x5c) = dVar19;
      *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_0048da0c;
      *(undefined4 *)((int)register0x00000054 + -0xac) = 0x46;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 0;
      FUN_001386c4();
      iVar3 = *(int *)((int)register0x00000054 + -8);
      iVar4 = *(int *)((int)register0x00000054 + -4);
      uVar8 = *(uint *)((int)register0x00000054 + 0x14);
      iVar10 = *(int *)((int)register0x00000054 + -0x34);
      dVar19 = *(double *)((int)register0x00000054 + -0x5c);
    }
    *(double *)(iVar3 + iVar10 * 8) = 1.0 / SQRT(1.0 - dVar19);
  }
  iVar4 = *(int *)((int)register0x00000054 + 0x10);
  dVar19 = 0.0;
  for (iVar10 = 0; iVar10 < (int)uVar8; iVar10 = iVar10 + 1) {
    dVar19 = dVar19 + *(double *)(iVar4 + iVar10 * 8);
  }
  dVar20 = (double)VectorSignedToFloat(unaff_s30 & 0xffff0000 | uVar8 & 0xffff,
                                       (byte)(in_fpscr >> 0x16) & 3);
  dVar21 = 0.0;
  for (iVar10 = 0; iVar10 < (int)uVar8; iVar10 = iVar10 + 1) {
    dVar22 = *(double *)(iVar4 + iVar10 * 8) - dVar19 / dVar20;
    dVar21 = dVar21 + dVar22 * dVar22;
  }
  unaff_s30 = unaff_s30 & 0xffff0000 | uVar8 - 1 & 0xffff;
  dVar19 = (double)VectorSignedToFloat(unaff_s30,(byte)(in_fpscr >> 0x16) & 3);
  *(double *)((int)register0x00000054 + -0x54) = *(double *)PTR_DAT_0048da10 * SQRT(dVar21 / dVar19)
  ;
  iVar11 = 0;
  pdVar7 = *(double **)((int)register0x00000054 + -0x48);
  iVar10 = *(int *)((int)register0x00000054 + -0x18);
  uVar2 = *(undefined4 *)((int)register0x00000054 + -0x44);
LAB_0048d570:
  if (0x31 < iVar11) {
LAB_0048d7b0:
    *(int *)((int)register0x00000054 + 0x1c) = iVar10;
    *(double **)((int)register0x00000054 + 0x20) = pdVar7;
    *(undefined4 *)((int)register0x00000054 + 0x24) = uVar2;
    return iVar3;
  }
  *(int *)((int)register0x00000054 + -0x3c) = iVar11;
  *(int *)((int)register0x00000054 + -0xc) = iVar10;
  *(double **)((int)register0x00000054 + -0x20) = pdVar7;
  *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_0048da04;
  *(uint *)((int)register0x00000054 + -0xac) = uVar8;
  *(uint *)((int)register0x00000054 + -0xa8) = uVar8;
  FUN_000986b8(PTR_DAT_0048da04,iVar4);
  iVar3 = *(int *)((int)register0x00000054 + -0xa4);
  pdVar7 = *(double **)((int)register0x00000054 + 0x14);
  iVar4 = *(int *)((int)register0x00000054 + -8);
  iVar10 = *(int *)((int)register0x00000054 + -0x1c);
  pdVar12 = *(double **)((int)register0x00000054 + -0x4c);
  for (pdVar13 = (double *)0x0; (int)pdVar13 < (int)pdVar12; pdVar13 = (double *)((int)pdVar13 + 1))
  {
    uVar18 = pdVar7 == pdVar13;
    if (pdVar7 <= pdVar13) goto LAB_0048d9d0;
    *(double *)(iVar3 + (int)pdVar13 * 8) =
         *(double *)(iVar10 + (int)pdVar13 * 8) * *(double *)(iVar4 + (int)pdVar13 * 8);
  }
  *(int *)((int)register0x00000054 + -4) = iVar3;
  *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_0048da04;
  *(double **)((int)register0x00000054 + -0xac) = pdVar7;
  *(double **)((int)register0x00000054 + -0xa8) = pdVar7;
  FUN_000986b8();
  iVar3 = *(int *)((int)register0x00000054 + -0xa4);
  iVar4 = *(int *)((int)register0x00000054 + -4);
  iVar10 = *(int *)((int)register0x00000054 + 0x14);
  for (iVar11 = 0; iVar11 < iVar10; iVar11 = iVar11 + 1) {
    pdVar12 = (double *)(iVar3 + iVar11 * 8);
    *pdVar12 = ABS(*(double *)(iVar4 + iVar11 * 8));
  }
  *(int *)((int)register0x00000054 + -0x10) = iVar3;
  *(int *)((int)register0x00000054 + -0x24) = *(int *)((int)register0x00000054 + -0x48) + -1;
  *(int *)((int)register0x00000054 + -0xb0) = iVar3;
  *(int *)((int)register0x00000054 + -0xac) = iVar10;
  *(int *)((int)register0x00000054 + -0xa8) = iVar10;
  FUN_00189874();
  uVar5 = *(uint *)((int)register0x00000054 + 0x14);
  uVar8 = *(uint *)((int)register0x00000054 + -0x24);
  uVar18 = uVar5 == uVar8;
  if (uVar5 < uVar8) goto LAB_0048d9cc;
  iVar3 = uVar5 - *(int *)((int)register0x00000054 + -0x48);
  pdVar13 = *(double **)((int)register0x00000054 + -0x10);
  pdVar12 = (double *)((int)pdVar13 + (-1 - iVar3 >> 0x1f & uVar8 << 3));
  if (iVar3 == -1) {
    dVar19 = 0.0;
  }
  else {
    pdVar7 = (double *)(iVar3 + 1);
    if (((uint)pdVar7 & 1) == 0) {
      uVar8 = (uint)pdVar7 >> 1;
      pdVar13 = (double *)(uVar8 - 1);
      uVar18 = pdVar13 == pdVar7;
      if (pdVar7 <= pdVar13) goto LAB_0048d9b8;
      pdVar13 = pdVar12 + (int)pdVar13;
      uVar18 = pdVar7 == (double *)((uint)pdVar7 >> 1);
      if (pdVar7 <= (double *)((uint)pdVar7 >> 1)) goto LAB_0048d9b0;
      dVar19 = (*pdVar13 + pdVar12[uVar8]) * 0.5;
    }
    else {
      uVar8 = (uint)pdVar7 >> 1;
      uVar18 = pdVar7 == (double *)((uint)pdVar7 >> 1);
      if (pdVar7 <= (double *)((uint)pdVar7 >> 1)) goto LAB_0048d9c4;
      dVar19 = pdVar12[uVar8];
    }
  }
  dVar20 = *(double *)PTR_DAT_0048da14;
  *(undefined8 *)((int)register0x00000054 + -0xb0) =
       *(undefined8 *)((int)register0x00000054 + -0x54);
  *(double *)((int)register0x00000054 + -0xa8) = dVar19 / dVar20;
  FUN_000afca0();
  *(undefined8 *)((int)register0x00000054 + -100) = *(undefined8 *)((int)register0x00000054 + -0xa0)
  ;
  *(undefined **)((int)register0x00000054 + -0xb0) = PTR_DAT_0048da04;
  *(undefined4 *)((int)register0x00000054 + -0xac) = *(undefined4 *)((int)register0x00000054 + 0x14)
  ;
  *(undefined4 *)((int)register0x00000054 + -0xa8) = *(undefined4 *)((int)register0x00000054 + 0x14)
  ;
  FUN_000986b8();
  dVar19 = *(double *)((int)register0x00000054 + -100);
  dVar20 = *(double *)PTR_DAT_0048da18;
  iVar3 = *(int *)((int)register0x00000054 + -0xa4);
  iVar4 = *(int *)((int)register0x00000054 + -4);
  iVar10 = *(int *)((int)register0x00000054 + 0x14);
  for (iVar11 = 0; iVar11 < iVar10; iVar11 = iVar11 + 1) {
    *(double *)(iVar3 + iVar11 * 8) = *(double *)(iVar4 + iVar11 * 8) / (dVar19 * dVar20);
  }
  *(int *)((int)register0x00000054 + -0xb0) = iVar3;
  *(int *)((int)register0x00000054 + -0xac) = iVar10;
  *(int *)((int)register0x00000054 + -0xa8) = iVar10;
  k3c_common_utils_maths_updateWeights();
  uVar2 = *(undefined4 *)((int)register0x00000054 + -0xa4);
  uVar6 = *(undefined4 *)((int)register0x00000054 + -0xa0);
  uVar9 = *(undefined4 *)((int)register0x00000054 + -0x9c);
  *(undefined4 *)((int)register0x00000054 + -0xb0) = *(undefined4 *)((int)register0x00000054 + 4);
  *(undefined4 *)((int)register0x00000054 + -0xac) = *(undefined4 *)((int)register0x00000054 + 8);
  *(undefined4 *)((int)register0x00000054 + -0xa8) = *(undefined4 *)((int)register0x00000054 + 0xc);
  *(undefined4 *)((int)register0x00000054 + -0xa4) = *(undefined4 *)((int)register0x00000054 + 0x10)
  ;
  *(undefined4 *)((int)register0x00000054 + -0xa0) = *(undefined4 *)((int)register0x00000054 + 0x14)
  ;
  pdVar16 = *(double **)((int)register0x00000054 + 0x18);
  *(double **)((int)register0x00000054 + -0x9c) = pdVar16;
  *(undefined4 *)((int)register0x00000054 + -0x98) = uVar2;
  *(undefined4 *)((int)register0x00000054 + -0x94) = uVar6;
  *(undefined4 *)((int)register0x00000054 + -0x90) = uVar9;
  *(undefined1 *)((int)register0x00000054 + -0x8c) = 1;
  k3c_common_utils_maths_LinearFit();
  iVar3 = *(int *)((int)register0x00000054 + -0x88);
  pdVar7 = *(double **)((int)register0x00000054 + -0x84);
  uVar2 = *(undefined4 *)((int)register0x00000054 + -0x80);
  iVar4 = *(int *)((int)register0x00000054 + 4);
  pdVar12 = *(double **)((int)register0x00000054 + 8);
  pdVar13 = (double *)0x0;
  while( true ) {
    if ((int)pdVar13 < (int)pdVar12) {
      pdVar14 = (double *)0x0;
      dVar19 = 0.0;
      goto LAB_0048d968;
    }
    *(int *)((int)register0x00000054 + -0x18) = iVar3;
    *(double **)((int)register0x00000054 + -0x24) = pdVar7;
    *(undefined4 *)((int)register0x00000054 + -0x44) = uVar2;
    pdVar13 = *(double **)((int)register0x00000054 + -0xc);
    pdVar14 = *(double **)((int)register0x00000054 + -0x20);
    pdVar15 = (double *)0x0;
    pdVar16 = (double *)0x0;
    while( true ) {
      if ((int)pdVar7 <= (int)pdVar15) {
        iVar10 = iVar3;
        if (pdVar16 == pdVar7) goto LAB_0048d7b0;
        iVar11 = *(int *)((int)register0x00000054 + -0x3c) + 1;
        iVar3 = *(int *)((int)register0x00000054 + -8);
        iVar4 = *(int *)((int)register0x00000054 + 0x10);
        uVar8 = *(uint *)((int)register0x00000054 + 0x14);
        pdVar7 = *(double **)((int)register0x00000054 + -0x24);
        iVar10 = *(int *)((int)register0x00000054 + -0x18);
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x44);
        goto LAB_0048d570;
      }
      if (pdVar14 <= pdVar15) break;
      *(double **)((int)register0x00000054 + -0x38) = pdVar15;
      *(double **)((int)register0x00000054 + -0x28) = pdVar16;
      dVar19 = *(double *)(iVar3 + (int)pdVar15 * 8);
      dVar20 = pdVar13[(int)pdVar15];
      *(double *)((int)register0x00000054 + -0x30) = ABS(dVar19 - dVar20);
      *(double *)((int)register0x00000054 + -0xb0) = ABS(dVar19);
      *(double *)((int)register0x00000054 + -0xa8) = ABS(dVar20);
      FUN_000afca0();
      uVar8 = in_fpscr & 0xfffffff |
              (uint)(*(double *)((int)register0x00000054 + -0xa0) * *(double *)PTR_DAT_0048da10 <
                    *(double *)((int)register0x00000054 + -0x30)) << 0x1f;
      in_fpscr = uVar8 | (uint)(NAN(*(double *)((int)register0x00000054 + -0xa0) *
                                    *(double *)PTR_DAT_0048da10) ||
                               NAN(*(double *)((int)register0x00000054 + -0x30))) << 0x1c;
      if ((byte)(uVar8 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
        pdVar16 = (double *)(*(int *)((int)register0x00000054 + -0x28) + 1);
      }
      else {
        pdVar16 = *(double **)((int)register0x00000054 + -0x28);
      }
      pdVar15 = (double *)(*(int *)((int)register0x00000054 + -0x38) + 1);
      pdVar13 = *(double **)((int)register0x00000054 + -0xc);
      pdVar14 = *(double **)((int)register0x00000054 + -0x20);
      iVar3 = *(int *)((int)register0x00000054 + -0x18);
      pdVar7 = *(double **)((int)register0x00000054 + -0x24);
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x44);
      pdVar12 = *(double **)((int)register0x00000054 + 8);
    }
    iVar3 = FUN_0009dbd4(pdVar15,pdVar14);
    dVar19 = (double)CONCAT44(extraout_s1,extraout_s0);
    pdVar7 = extraout_r1;
    uVar2 = extraout_r2;
    iVar4 = extraout_r3;
    while( true ) {
      pdVar15 = pdVar15 + (int)pdVar14;
      iVar10 = (int)pdVar14 * 8;
      pdVar14 = (double *)((int)pdVar14 + 1);
      dVar19 = dVar19 + *pdVar15 * *(double *)(iVar3 + iVar10);
LAB_0048d968:
      if ((int)pdVar7 <= (int)pdVar14) break;
      pdVar16 = *(double **)(iVar4 + (int)pdVar13 * 0xc + 4);
      pdVar15 = *(double **)(iVar4 + (int)pdVar13 * 0xc);
      uVar18 = pdVar14 == pdVar16;
      if (pdVar16 <= pdVar14) goto LAB_0048d9a4;
    }
    pdVar14 = *(double **)((int)register0x00000054 + 0x14);
    uVar18 = pdVar14 == pdVar13;
    if (pdVar14 <= pdVar13) break;
    pdVar16 = *(double **)((int)register0x00000054 + -0x4c);
    uVar18 = pdVar13 == pdVar16;
    if (pdVar16 <= pdVar13) {
      FUN_0009dbd4(pdVar13,pdVar16);
      break;
    }
    *(double *)(*(int *)((int)register0x00000054 + -0x1c) + (int)pdVar13 * 8) =
         *(double *)(*(int *)((int)register0x00000054 + 0x10) + (int)pdVar13 * 8) - dVar19;
    pdVar13 = (double *)((int)pdVar13 + 1);
  }
  FUN_0009dbd4(pdVar13,pdVar14);
LAB_0048d9a4:
  uVar8 = FUN_0009dbd4(pdVar14,pdVar16);
  pdVar7 = extraout_r3_00;
LAB_0048d9b0:
  FUN_0009dbd4(uVar8,pdVar7);
  pdVar7 = extraout_r3_01;
LAB_0048d9b8:
  uVar8 = FUN_0009dbd4(pdVar13,pdVar7);
  pdVar7 = extraout_r3_02;
LAB_0048d9c4:
  FUN_0009dbd4(uVar8,pdVar7);
LAB_0048d9cc:
  FUN_0009dc34();
LAB_0048d9d0:
  FUN_0009dbd4(pdVar13);
  pdVar7 = extraout_r2_00;
LAB_0048d9d8:
  FUN_0009dbd4(pdVar12,pdVar7);
  pdVar7 = extraout_r2_01;
LAB_0048d9e4:
  param_1 = FUN_0009dbd4(pdVar12,pdVar7);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xb4);
  if ((bool)uVar18) {
    register0x00000054 = (BADSPACEBASE *)puVar17;
  }
  goto LAB_0048d9f4;
}



/* k3c/common/utils/maths.Interpolate2D @ 0048da1c (size 624) */

void k3c_common_utils_maths_Interpolate2D(undefined4 param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *extraout_r2;
  double *extraout_r2_00;
  double *extraout_r2_01;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  int iVar10;
  int unaff_r10;
  int iVar11;
  double *pdVar12;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  double *pdVar14;
  undefined1 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar13 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      pdVar3 = *(double **)((int)register0x00000054 + 0x18);
      iVar4 = *(int *)((int)register0x00000054 + 0x14);
      dVar16 = *(double *)((int)register0x00000054 + 4);
      for (pdVar1 = (double *)0x0; (int)pdVar1 < (int)((int)pdVar3 - 1U);
          pdVar1 = (double *)((int)pdVar1 + 1)) {
        if (*(double *)(iVar4 + (int)pdVar1 * 8) <= dVar16) {
          pdVar5 = (double *)((int)pdVar1 + 1);
          uVar15 = pdVar3 == pdVar5;
          if (pdVar3 <= pdVar5) goto LAB_0048dc70;
          if (dVar16 <= *(double *)(iVar4 + (int)pdVar5 * 8)) goto LAB_0048da90;
        }
      }
      pdVar1 = (double *)0x0;
      pdVar5 = (double *)0x0;
LAB_0048da90:
      dVar17 = *(double *)((int)register0x00000054 + 0xc);
      pdVar2 = *(double **)((int)register0x00000054 + 0x24);
      for (pdVar7 = (double *)0x0; (int)pdVar7 < (int)((int)pdVar2 - 1U);
          pdVar7 = (double *)((int)pdVar7 + 1)) {
        if (*(double *)(*(int *)((int)register0x00000054 + 0x20) + (int)pdVar7 * 8) <= dVar17) {
          pdVar8 = (double *)((int)pdVar7 + 1);
          uVar15 = pdVar2 == pdVar8;
          if (pdVar2 <= pdVar8) goto LAB_0048dc68;
          if (dVar17 <= *(double *)(*(int *)((int)register0x00000054 + 0x20) + (int)pdVar8 * 8))
          goto LAB_0048daf4;
        }
      }
      pdVar7 = (double *)0x0;
      pdVar8 = (double *)0x0;
LAB_0048daf4:
      pdVar9 = *(double **)((int)register0x00000054 + 0x30);
      uVar15 = pdVar9 == pdVar1;
      if (pdVar1 < pdVar9) {
        iVar11 = *(int *)((int)register0x00000054 + 0x2c);
        pdVar14 = *(double **)(iVar11 + (int)pdVar1 * 0xc + 4);
        iVar10 = *(int *)(iVar11 + (int)pdVar1 * 0xc);
        uVar15 = pdVar7 == pdVar14;
        if (pdVar7 < pdVar14) {
          uVar15 = pdVar9 == pdVar5;
          if (pdVar5 < pdVar9) {
            *(int *)((int)register0x00000054 + -4) = iVar10 + (int)pdVar7 * 8;
            pdVar6 = *(double **)(iVar11 + (int)pdVar5 * 0xc + 4);
            pdVar9 = *(double **)(iVar11 + (int)pdVar5 * 0xc);
            uVar15 = pdVar7 == pdVar6;
            if (pdVar7 < pdVar6) {
              pdVar12 = pdVar9 + (int)pdVar7;
              uVar15 = pdVar8 == pdVar14;
              if (pdVar8 < pdVar14) {
                uVar15 = pdVar8 == pdVar6;
                if (pdVar8 < pdVar6) {
                  pdVar6 = pdVar9 + (int)pdVar8;
                  uVar15 = pdVar3 == pdVar1;
                  if (pdVar1 < pdVar3) {
                    pdVar9 = (double *)(iVar4 + (int)pdVar1 * 8);
                    uVar15 = pdVar3 == pdVar5;
                    if (pdVar5 < pdVar3) {
                      iVar11 = (int)pdVar5 * 8;
                      uVar15 = pdVar2 == pdVar7;
                      if (pdVar7 < pdVar2) {
                        pdVar5 = (double *)
                                 (*(int *)((int)register0x00000054 + 0x20) + (int)pdVar7 * 8);
                        uVar15 = pdVar2 == pdVar8;
                        if (pdVar8 < pdVar2) {
                          dVar19 = *(double *)(iVar10 + (int)pdVar8 * 8);
                          dVar16 = dVar16 - *pdVar9;
                          dVar20 = *(double *)(iVar4 + iVar11) - *pdVar9;
                          dVar18 = **(double **)((int)register0x00000054 + -4) +
                                   ((*pdVar12 - **(double **)((int)register0x00000054 + -4)) *
                                   dVar16) / dVar20;
                          *(double *)((int)register0x00000054 + 0x38) =
                               dVar18 + (((dVar19 + ((*pdVar6 - dVar19) * dVar16) / dVar20) - dVar18
                                         ) * (dVar17 - *pdVar5)) /
                                        (*(double *)
                                          (*(int *)((int)register0x00000054 + 0x20) +
                                          (int)pdVar8 * 8) - *pdVar5);
                          return;
                        }
                        FUN_0009dbd4(pdVar8);
                      }
                      FUN_0009dbd4(pdVar7);
                      pdVar3 = extraout_r2;
                    }
                    pdVar1 = (double *)FUN_0009dbd4(pdVar5,pdVar3);
                    pdVar3 = extraout_r2_00;
                  }
                  FUN_0009dbd4(pdVar1,pdVar3);
                }
                pdVar14 = (double *)0x48dc30;
                FUN_0009dbd4(pdVar8,pdVar6);
              }
              FUN_0009dbd4(pdVar8,pdVar14);
            }
            FUN_0009dbd4(pdVar7,pdVar6);
          }
          pdVar14 = (double *)0x48dc54;
          FUN_0009dbd4(pdVar5,pdVar9);
        }
        pdVar1 = (double *)FUN_0009dbd4(pdVar7,pdVar14);
      }
      FUN_0009dbd4(pdVar1,pdVar9);
LAB_0048dc68:
      FUN_0009dbd4(pdVar8);
      pdVar3 = extraout_r2_01;
LAB_0048dc70:
      param_1 = FUN_0009dbd4(pdVar5,pdVar3);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if ((bool)uVar15) {
        register0x00000054 = (BADSPACEBASE *)puVar13;
      }
    }
    unaff_lr = 0x48dc88;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/utils/maths.Round @ 0048dc8c (size 308) */

void k3c_common_utils_maths_Round(void)

{
  int unaff_r10;
  uint in_fpscr;
  uint unaff_s30;
  undefined8 in_stack_00000004;
  uint in_stack_0000000c;
  undefined8 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  VectorSignedToFloat(unaff_s30 & 0xffff0000 | in_stack_0000000c & 0xffff,
                      (byte)(in_fpscr >> 0x16) & 3);
  k3c_common_cmath__Cfunc_pow();
  return;
}



