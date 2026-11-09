// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/utils/cast   functions: 6
/* printerApi/common/utils/cast.ToFloat64E @ 003ec4e0 (size 1304) */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_utils_cast_ToFloat64E(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int unaff_r10;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  undefined1 uVar14;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar13 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      puVar4 = *(undefined **)((int)register0x00000054 + 4);
      if (puVar4 == (undefined *)0x0) goto LAB_003ec91c;
      uVar10 = *(uint *)(puVar4 + 8);
      if (_UNK_003ec9fc < uVar10) {
        if (_UNK_003eca2c < uVar10) {
          uVar12 = _UNK_003eca44;
          puVar1 = _UNK_003eca4c;
          puVar2 = _UNK_003eca50;
          uVar3 = _UNK_003eca48;
          if (uVar10 <= _UNK_003eca44) goto joined_r0x003ec6c0;
          puVar1 = _UNK_003eca58;
          puVar2 = PTR_DAT_003eca60;
          uVar12 = _UNK_003eca5c;
          if (uVar10 != _UNK_003eca54) goto joined_r0x003ec808;
        }
        else {
          puVar1 = _UNK_003eca34;
          if (uVar10 != _UNK_003eca30) {
            puVar2 = _UNK_003eca40;
            uVar12 = _UNK_003eca2c;
            if (uVar10 == _UNK_003eca38) {
              if (puVar4 == _UNK_003eca3c) {
                *(undefined8 *)((int)register0x00000054 + 0xc) =
                     **(undefined8 **)((int)register0x00000054 + 8);
                *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x003ec688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((int)register0x00000054 + -0x44))();
                return;
              }
              goto LAB_003ec91c;
            }
joined_r0x003ec808:
            puVar1 = puVar2;
            if (uVar10 != uVar12) goto LAB_003ec91c;
          }
        }
joined_r0x003ec814:
        if (puVar4 != puVar1) goto LAB_003ec91c;
        if (puVar4 == (undefined *)0x0) {
          uVar10 = 0;
          puVar8 = (uint *)0x0;
        }
        else {
          *(undefined **)((int)register0x00000054 + -0x20) = puVar4;
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          if (*(int *)((int)register0x00000054 + -0x20) == 0) {
            uVar10 = 0;
            puVar8 = (uint *)0x0;
          }
          else {
            uVar10 = *(byte *)(*(int *)((int)register0x00000054 + -0x20) + 0xf) & 0x1f;
            puVar8 = *(uint **)((int)register0x00000054 + -0x1c);
          }
        }
        *(uint *)((int)register0x00000054 + -0x24) = uVar10;
        if (uVar10 < 10) {
          if (uVar10 == 7) {
            uVar10 = *puVar8;
            uVar12 = 0;
LAB_003ec8f4:
            *(uint *)((int)register0x00000054 + -0x40) = uVar10;
            *(uint *)((int)register0x00000054 + -0x3c) = uVar12;
            FUN_000869d0();
            *(undefined8 *)((int)register0x00000054 + 0xc) =
                 *(undefined8 *)((int)register0x00000054 + -0x38);
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x003ec918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x44))();
            return;
          }
          if (uVar10 == 8) {
            uVar10 = (uint)(byte)*puVar8;
            uVar12 = 0;
            goto LAB_003ec8f4;
          }
          if (uVar10 == 9) {
            uVar10 = (uint)(ushort)*puVar8;
            uVar12 = 0;
            goto LAB_003ec8f4;
          }
        }
        else {
          if (uVar10 == 10) {
            uVar10 = *puVar8;
            uVar12 = 0;
            goto LAB_003ec8f4;
          }
          if (uVar10 == 0xb) {
            uVar10 = *puVar8;
            uVar12 = puVar8[1];
            goto LAB_003ec8f4;
          }
          if (uVar10 == 0xc) {
            uVar10 = *puVar8;
            uVar12 = 0;
            goto LAB_003ec8f4;
          }
        }
        uVar14 = 0;
        *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_003eca68;
        FUN_0001eed8();
        puVar9 = *(undefined4 **)((int)register0x00000054 + -0x3c);
        puVar9[1] = 0x12;
        *puVar9 = PTR_DAT_0077c85e_3_003eca6c;
        puVar9[2] = *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_003eca70;
        *(undefined4 **)((int)register0x00000054 + -0x3c) = puVar9;
        FUN_00090814();
      }
      else {
        if (_UNK_003eca00 < uVar10) {
          puVar1 = _UNK_003eca1c;
          if (uVar10 == _UNK_003eca18) goto joined_r0x003ec814;
          puVar1 = _UNK_003eca24;
          if (uVar10 != _UNK_003eca20) {
            if ((uVar10 == _UNK_003ec9fc) && (puVar4 == _UNK_003eca28)) {
              *(double *)((int)register0x00000054 + 0xc) =
                   (double)**(float **)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x003ec624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x44))();
              return;
            }
            goto LAB_003ec91c;
          }
        }
        else {
          uVar12 = _UNK_003eca00;
          puVar1 = _UNK_003eca10;
          puVar2 = _UNK_003eca14;
          uVar3 = _UNK_003eca0c;
          if (uVar10 == _UNK_003eca04) {
            if (puVar4 == _UNK_003eca08) {
              uVar5 = (*(undefined4 **)((int)register0x00000054 + 8))[1];
              *(undefined4 *)((int)register0x00000054 + -0x40) =
                   **(undefined4 **)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar5;
              *(undefined4 *)((int)register0x00000054 + -0x38) = 0x40;
              FUN_000a787c();
              *(undefined8 *)((int)register0x00000054 + 0xc) =
                   *(undefined8 *)((int)register0x00000054 + -0x34);
              *(undefined4 *)((int)register0x00000054 + 0x14) =
                   *(undefined4 *)((int)register0x00000054 + -0x2c);
              *(undefined4 *)((int)register0x00000054 + 0x18) =
                   *(undefined4 *)((int)register0x00000054 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x003ec568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x44))();
              return;
            }
            goto LAB_003ec91c;
          }
joined_r0x003ec6c0:
          if ((uVar10 != uVar3) && (puVar1 = puVar2, uVar10 != uVar12)) goto LAB_003ec91c;
        }
        if (puVar4 != puVar1) {
LAB_003ec91c:
          *(undefined **)((int)register0x00000054 + -0x10) = puVar4;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined **)((int)register0x00000054 + -8) = puVar4;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_003eca64;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 0x23;
          *(undefined1 **)((int)register0x00000054 + -0x38) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x34) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 2;
          FUN_00130144();
          *(undefined8 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + 0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x003ec974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x44))();
          return;
        }
        if (puVar4 == (undefined *)0x0) {
          uVar10 = 0;
          piVar6 = (int *)0x0;
        }
        else {
          *(undefined **)((int)register0x00000054 + -0x18) = puVar4;
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + 8);
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            uVar10 = 0;
            piVar6 = (int *)0x0;
          }
          else {
            uVar10 = *(byte *)(*(int *)((int)register0x00000054 + -0x18) + 0xf) & 0x1f;
            piVar6 = *(int **)((int)register0x00000054 + -0x14);
          }
        }
        *(uint *)((int)register0x00000054 + -0x24) = uVar10;
        if (uVar10 < 4) {
          if (uVar10 == 2) {
            iVar7 = *piVar6;
            iVar11 = iVar7 >> 0x1f;
            goto LAB_003ec7b8;
          }
          uVar14 = 0;
          if (uVar10 == 3) {
            iVar7 = (int)(char)*piVar6;
            iVar11 = iVar7 >> 0x1f;
LAB_003ec7b8:
            *(int *)((int)register0x00000054 + -0x40) = iVar7;
            *(int *)((int)register0x00000054 + -0x3c) = iVar11;
            FUN_0008695c();
            *(undefined8 *)((int)register0x00000054 + 0xc) =
                 *(undefined8 *)((int)register0x00000054 + -0x38);
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x003ec7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x44))();
            return;
          }
        }
        else {
          if (uVar10 == 4) {
            iVar7 = (int)(short)*piVar6;
            iVar11 = iVar7 >> 0x1f;
            goto LAB_003ec7b8;
          }
          if (uVar10 == 5) {
            iVar7 = *piVar6;
            iVar11 = iVar7 >> 0x1f;
            goto LAB_003ec7b8;
          }
          uVar14 = 0;
          if (uVar10 == 6) {
            iVar7 = *piVar6;
            iVar11 = piVar6[1];
            goto LAB_003ec7b8;
          }
        }
      }
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_003eca68;
      FUN_0001eed8();
      puVar9 = *(undefined4 **)((int)register0x00000054 + -0x3c);
      puVar9[1] = 0x11;
      *puVar9 = PTR_DAT_003eca74;
      puVar9[2] = *(undefined4 *)((int)register0x00000054 + -0x24);
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_003eca70;
      *(undefined4 **)((int)register0x00000054 + -0x3c) = puVar9;
      param_1 = FUN_00090814();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if ((bool)uVar14) {
        register0x00000054 = (BADSPACEBASE *)puVar13;
      }
    }
    unaff_lr = 0x3ec9f4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/utils/cast.ToIntE @ 003eca78 (size 1448) */

void printerApi_common_utils_cast_ToIntE(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  double *pdVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint extraout_r1;
  int unaff_r10;
  undefined1 *puVar12;
  undefined4 unaff_lr;
  undefined1 uVar13;
  double dVar14;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar12 = (undefined1 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = unaff_lr;
      puVar4 = *(undefined **)((int)register0x00000054 + 4);
      if (puVar4 == (undefined *)0x0) goto LAB_003ecf0c;
      uVar11 = *(uint *)(puVar4 + 8);
      if (DAT_003ed024 < uVar11) {
        if (DAT_003ed054 < uVar11) {
          if (uVar11 <= DAT_003ed06c) {
            if (uVar11 == DAT_003ed070) {
              if (puVar4 == DAT_003ed074) {
                if (**(char **)((int)register0x00000054 + 8) != '\0') {
                  *(undefined4 *)((int)register0x00000054 + 0xc) = 1;
                  *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
                  *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x003ecda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)((int)register0x00000054 + -0x4c))();
                  return;
                }
                *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
                *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
                *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x003ecdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((int)register0x00000054 + -0x4c))();
                return;
              }
            }
            else if ((uVar11 == DAT_003ed06c) && (puVar4 == DAT_003ed078)) {
              *(undefined4 *)((int)register0x00000054 + 0xc) =
                   **(undefined4 **)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x003ecdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x4c))();
              return;
            }
            goto LAB_003ecf0c;
          }
          puVar1 = DAT_003ed080;
          puVar2 = PTR_DAT_003ed088;
          uVar3 = DAT_003ed084;
          if (uVar11 != DAT_003ed07c) goto joined_r0x003ece24;
joined_r0x003ece30:
          if (puVar4 != puVar1) {
LAB_003ecf0c:
            *(undefined **)((int)register0x00000054 + -0x10) = puVar4;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined **)((int)register0x00000054 + -8) = puVar4;
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_003ed08c;
            *(undefined4 *)((int)register0x00000054 + -0x44) = 0x1f;
            *(undefined1 **)((int)register0x00000054 + -0x40) =
                 (undefined1 *)((int)register0x00000054 + -0x10);
            *(undefined4 *)((int)register0x00000054 + -0x3c) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x38) = 2;
            FUN_00130144();
            *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x34);
            *(undefined4 *)((int)register0x00000054 + 0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x30);
            return;
          }
          if (puVar4 == (undefined *)0x0) {
            uVar11 = 0;
            puVar9 = (uint *)0x0;
          }
          else {
            *(undefined **)((int)register0x00000054 + -0x28) = puVar4;
            *(undefined4 *)((int)register0x00000054 + -0x24) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            if (*(int *)((int)register0x00000054 + -0x28) == 0) {
              uVar11 = 0;
              puVar9 = (uint *)0x0;
            }
            else {
              uVar11 = *(byte *)(*(int *)((int)register0x00000054 + -0x28) + 0xf) & 0x1f;
              puVar9 = *(uint **)((int)register0x00000054 + -0x24);
            }
          }
          *(uint *)((int)register0x00000054 + -0x2c) = uVar11;
          if (uVar11 < 10) {
            if (uVar11 == 7) {
              uVar11 = *puVar9;
LAB_003ecef4:
              *(uint *)((int)register0x00000054 + 0xc) = uVar11;
              *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x003ecf08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x4c))();
              return;
            }
            if (uVar11 == 8) {
              uVar11 = (uint)(byte)*puVar9;
              goto LAB_003ecef4;
            }
            if (uVar11 == 9) {
              uVar11 = (uint)(ushort)*puVar9;
              goto LAB_003ecef4;
            }
          }
          else {
            if (uVar11 == 10) {
              uVar11 = *puVar9;
              goto LAB_003ecef4;
            }
            if (uVar11 == 0xb) {
              uVar11 = *puVar9;
              goto LAB_003ecef4;
            }
            if (uVar11 == 0xc) {
              uVar11 = *puVar9;
              goto LAB_003ecef4;
            }
          }
          uVar13 = 0;
          *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_003ed090;
          FUN_0001eed8();
          puVar10 = *(undefined4 **)((int)register0x00000054 + -0x44);
          puVar10[1] = 0x12;
          *puVar10 = PTR_DAT_0077c85e_3_003ed094;
          puVar10[2] = *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_003ed098;
          *(undefined4 **)((int)register0x00000054 + -0x44) = puVar10;
          FUN_00090814();
          goto LAB_003ecf9c;
        }
        puVar1 = DAT_003ed05c;
        if (uVar11 != DAT_003ed058) {
          puVar1 = DAT_003ed064;
          puVar2 = DAT_003ed068;
          uVar3 = DAT_003ed054;
          if (uVar11 != DAT_003ed060) goto joined_r0x003ecc80;
          goto joined_r0x003ece30;
        }
joined_r0x003ecbbc:
        if (puVar4 != puVar1) goto LAB_003ecf0c;
        if (puVar4 == (undefined *)0x0) {
          uVar11 = 0;
          pdVar6 = (double *)0x0;
        }
        else {
          *(undefined **)((int)register0x00000054 + -0x18) = puVar4;
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + 8);
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            uVar11 = 0;
            pdVar6 = (double *)0x0;
          }
          else {
            uVar11 = *(byte *)(*(int *)((int)register0x00000054 + -0x18) + 0xf) & 0x1f;
            pdVar6 = *(double **)((int)register0x00000054 + -0x14);
          }
        }
        if (uVar11 == 0xd) {
          dVar14 = (double)*(float *)pdVar6;
          goto LAB_003ecc38;
        }
        uVar13 = 0;
        if (uVar11 == 0xe) {
          dVar14 = *pdVar6;
LAB_003ecc38:
          *(int *)((int)register0x00000054 + 0xc) = (int)(longlong)dVar14;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x003ecc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x4c))();
          return;
        }
      }
      else {
        if (DAT_003ed028 < uVar11) {
          puVar1 = DAT_003ed044;
          if (uVar11 != DAT_003ed040) {
            puVar1 = DAT_003ed04c;
            puVar2 = DAT_003ed050;
            uVar3 = DAT_003ed024;
            if (uVar11 == DAT_003ed048) goto joined_r0x003ecbbc;
joined_r0x003ece24:
            puVar1 = puVar2;
            if (uVar11 != uVar3) goto LAB_003ecf0c;
            goto joined_r0x003ece30;
          }
        }
        else {
          if (uVar11 == DAT_003ed02c) {
            if (puVar4 == DAT_003ed030) {
              uVar5 = (*(undefined4 **)((int)register0x00000054 + 8))[1];
              *(undefined4 *)((int)register0x00000054 + -0x48) =
                   **(undefined4 **)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x44) = uVar5;
              FUN_000a9008();
              *(undefined4 *)((int)register0x00000054 + 0xc) =
                   *(undefined4 *)((int)register0x00000054 + -0x40);
              *(undefined4 *)((int)register0x00000054 + 0x10) =
                   *(undefined4 *)((int)register0x00000054 + -0x3c);
              *(undefined4 *)((int)register0x00000054 + 0x14) =
                   *(undefined4 *)((int)register0x00000054 + -0x38);
              return;
            }
            goto LAB_003ecf0c;
          }
          puVar1 = DAT_003ed038;
          puVar2 = DAT_003ed03c;
          uVar3 = DAT_003ed028;
          if (uVar11 != DAT_003ed034) {
joined_r0x003ecc80:
            puVar1 = puVar2;
            if (uVar11 != uVar3) goto LAB_003ecf0c;
          }
        }
        if (puVar4 != puVar1) goto LAB_003ecf0c;
        if (puVar4 == (undefined *)0x0) {
          uVar11 = 0;
          piVar7 = (int *)0x0;
        }
        else {
          *(undefined **)((int)register0x00000054 + -0x20) = puVar4;
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          if (*(int *)((int)register0x00000054 + -0x20) == 0) {
            uVar11 = 0;
            piVar7 = (int *)0x0;
          }
          else {
            uVar11 = *(byte *)(*(int *)((int)register0x00000054 + -0x20) + 0xf) & 0x1f;
            piVar7 = *(int **)((int)register0x00000054 + -0x1c);
          }
        }
        *(uint *)((int)register0x00000054 + -0x2c) = uVar11;
        if (uVar11 < 4) {
          if (uVar11 == 2) {
            iVar8 = *piVar7;
LAB_003ecd40:
            *(int *)((int)register0x00000054 + 0xc) = iVar8;
            *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            return;
          }
          uVar13 = 0;
          if (uVar11 == 3) {
            iVar8 = (int)(char)*piVar7;
            goto LAB_003ecd40;
          }
        }
        else {
          if (uVar11 == 4) {
            iVar8 = (int)(short)*piVar7;
            goto LAB_003ecd40;
          }
          if (uVar11 == 5) {
            iVar8 = *piVar7;
            goto LAB_003ecd40;
          }
          uVar13 = 0;
          if (uVar11 == 6) {
            iVar8 = *piVar7;
            goto LAB_003ecd40;
          }
        }
LAB_003ecf9c:
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_003ed090;
        FUN_0001eed8();
        puVar10 = *(undefined4 **)((int)register0x00000054 + -0x44);
        puVar10[1] = 0x11;
        *puVar10 = PTR_DAT_003ed09c;
        puVar10[2] = *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_003ed098;
        *(undefined4 **)((int)register0x00000054 + -0x44) = puVar10;
        FUN_00090814();
        uVar11 = extraout_r1;
      }
      *(uint *)((int)register0x00000054 + -0x2c) = uVar11;
      *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_003ed090;
      FUN_0001eed8();
      puVar10 = *(undefined4 **)((int)register0x00000054 + -0x44);
      puVar10[1] = 0x13;
      *puVar10 = PTR_s_reflect_Value_Floatbad_unicode_f_0077d605_0x135_003ed0a0;
      puVar10[2] = *(undefined4 *)((int)register0x00000054 + -0x2c);
      *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_003ed098;
      *(undefined4 **)((int)register0x00000054 + -0x44) = puVar10;
      param_1 = FUN_00090814();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x4c);
      if ((bool)uVar13) {
        register0x00000054 = (BADSPACEBASE *)puVar12;
      }
    }
    unaff_lr = 0x3ed01c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/utils/cast.ToString @ 003ed0a4 (size 68) */

void printerApi_common_utils_cast_ToString(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_utils_cast_ToStringE();
  return;
}



/* printerApi/common/utils/cast.ToStringE @ 003ed0e8 (size 1724) */

/* WARNING: Type propagation algorithm not settling */

void printerApi_common_utils_cast_ToStringE(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  code *pcVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  byte bVar13;
  int unaff_r10;
  undefined1 *puVar14;
  undefined4 unaff_lr;
  undefined1 uVar15;
  bool bVar16;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar14 = (undefined1 *)((int)register0x00000054 + -0x6c);
      *(undefined4 *)((int)register0x00000054 + -0x6c) = unaff_lr;
      puVar5 = *(undefined **)((int)register0x00000054 + 4);
      if (puVar5 == (undefined *)0x0) {
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x003ed758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x6c))();
        return;
      }
      uVar11 = *(uint *)(puVar5 + 8);
      if (DAT_003ed7a8 < uVar11) {
        if (DAT_003ed7e4 < uVar11) {
          if (DAT_003ed7f8 < uVar11) {
            puVar1 = DAT_003ed814;
            puVar2 = DAT_003ed81c;
            uVar3 = DAT_003ed818;
            if (uVar11 == DAT_003ed810) goto joined_r0x003ed3f0;
          }
          else {
            puVar2 = PTR_DAT_003ed80c;
            uVar3 = DAT_003ed7f8;
            if (uVar11 == DAT_003ed7fc) {
              if (puVar5 == PTR_DAT_003ed800) {
                if (**(char **)((int)register0x00000054 + 8) == '\0') {
                  uVar6 = 5;
                  puVar5 = PTR_s_false_s__dvaluefloat___s<nil>_ni_0077367d_0x414_003ed808;
                }
                else {
                  uVar6 = 4;
                  puVar5 = PTR_DAT_003ed804;
                }
                *(undefined **)((int)register0x00000054 + 0xc) = puVar5;
                *(undefined4 *)((int)register0x00000054 + 0x10) = uVar6;
                *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x003ed458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((int)register0x00000054 + -0x6c))();
                return;
              }
              goto LAB_003ed504;
            }
          }
joined_r0x003ed49c:
          puVar1 = puVar2;
          if (uVar11 == uVar3) {
joined_r0x003ed3f0:
            if (puVar5 == puVar1) {
              *(undefined **)((int)register0x00000054 + -8) = puVar5;
              *(undefined4 *)((int)register0x00000054 + -4) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_003ed820;
              *(undefined4 *)((int)register0x00000054 + -100) = 2;
              *(undefined1 **)((int)register0x00000054 + -0x60) =
                   (undefined1 *)((int)register0x00000054 + -8);
              *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
              FUN_001331ac();
              *(undefined4 *)((int)register0x00000054 + 0xc) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              *(undefined4 *)((int)register0x00000054 + 0x10) =
                   *(undefined4 *)((int)register0x00000054 + -0x50);
              *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x003ed500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x6c))();
              return;
            }
          }
        }
        else {
          puVar1 = DAT_003ed7dc;
          uVar3 = DAT_003ed7e4;
          puVar2 = DAT_003ed7f4;
          uVar4 = DAT_003ed7f0;
          if (uVar11 != DAT_003ed7e8) goto joined_r0x003ed3c8;
          if (puVar5 == DAT_003ed7ec) {
            *(undefined8 *)((int)register0x00000054 + -0x3c) =
                 **(undefined8 **)((int)register0x00000054 + 8);
            *(undefined **)((int)register0x00000054 + -0x68) = DAT_003ed7dc;
            *(undefined4 *)((int)register0x00000054 + -100) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x60) = 0x18;
            FUN_000933e8();
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 *)((int)register0x00000054 + -100) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x60) = 0x18;
            *(undefined8 *)((int)register0x00000054 + -0x5c) =
                 *(undefined8 *)((int)register0x00000054 + -0x3c);
            *(undefined1 *)((int)register0x00000054 + -0x54) = 0x66;
            *(undefined4 *)((int)register0x00000054 + -0x50) = 0xffffffff;
            *(undefined4 *)((int)register0x00000054 + -0x4c) = 0x40;
            FUN_000aa858();
            *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + -0x48);
            *(undefined4 *)((int)register0x00000054 + -0x60) =
                 *(undefined4 *)((int)register0x00000054 + -0x44);
            FUN_00093e34();
            *(undefined4 *)((int)register0x00000054 + 0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 *)((int)register0x00000054 + 0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x003ed3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x6c))();
            return;
          }
        }
      }
      else if (DAT_003ed7ac < uVar11) {
        if (DAT_003ed7c4 < uVar11) {
          puVar2 = DAT_003ed7e0;
          uVar3 = DAT_003ed7a8;
          if (uVar11 != DAT_003ed7d4) goto joined_r0x003ed49c;
          if (puVar5 == DAT_003ed7d8) {
            *(double *)((int)register0x00000054 + -0x34) =
                 (double)**(float **)((int)register0x00000054 + 8);
            *(undefined **)((int)register0x00000054 + -0x68) = DAT_003ed7dc;
            *(undefined4 *)((int)register0x00000054 + -100) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x60) = 0x18;
            FUN_000933e8();
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 *)((int)register0x00000054 + -100) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x60) = 0x18;
            *(undefined8 *)((int)register0x00000054 + -0x5c) =
                 *(undefined8 *)((int)register0x00000054 + -0x34);
            *(undefined1 *)((int)register0x00000054 + -0x54) = 0x66;
            *(undefined4 *)((int)register0x00000054 + -0x50) = 0xffffffff;
            *(undefined4 *)((int)register0x00000054 + -0x4c) = 0x20;
            FUN_000aa858();
            *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + -0x48);
            *(undefined4 *)((int)register0x00000054 + -0x60) =
                 *(undefined4 *)((int)register0x00000054 + -0x44);
            FUN_00093e34();
            *(undefined4 *)((int)register0x00000054 + 0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 *)((int)register0x00000054 + 0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x003ed2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x6c))();
            return;
          }
        }
        else {
          puVar1 = DAT_003ed7cc;
          if (uVar11 == DAT_003ed7c8) goto joined_r0x003ed3f0;
          if ((uVar11 == DAT_003ed7c4) && (puVar5 == DAT_003ed7d0)) {
            uVar12 = **(undefined4 **)((int)register0x00000054 + 8);
            uVar6 = (*(undefined4 **)((int)register0x00000054 + 8))[1];
            *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
            *(undefined4 *)((int)register0x00000054 + -100) = uVar12;
            *(undefined4 *)((int)register0x00000054 + -0x60) = uVar6;
            FUN_00093e34();
            *(undefined4 *)((int)register0x00000054 + 0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 *)((int)register0x00000054 + 0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x003ed218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x6c))();
            return;
          }
        }
      }
      else {
        puVar1 = DAT_003ed7bc;
        uVar3 = DAT_003ed7ac;
        puVar2 = DAT_003ed7c0;
        uVar4 = DAT_003ed7b8;
        if (uVar11 != DAT_003ed7b0) {
joined_r0x003ed3c8:
          if (uVar11 != uVar4) goto joined_r0x003ed49c;
          goto joined_r0x003ed3f0;
        }
        if (puVar5 == DAT_003ed7b4) {
          uVar6 = (*(undefined4 **)((int)register0x00000054 + 8))[1];
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               **(undefined4 **)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + 0x10) = uVar6;
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
          return;
        }
      }
LAB_003ed504:
      *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_003ed824;
      *(undefined **)((int)register0x00000054 + -100) = puVar5;
      FUN_0001d060();
      if (*(int *)((int)register0x00000054 + -0x60) != 0) {
        if (*(int *)((int)register0x00000054 + -0x60) != 1) {
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_003ed828;
          *(undefined4 *)((int)register0x00000054 + -100) = 0x22;
          *(undefined1 **)((int)register0x00000054 + -0x60) =
               (undefined1 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x5c) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x58) = 2;
          FUN_00130144();
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          *(undefined4 *)((int)register0x00000054 + 0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          return;
        }
        pcVar9 = *(code **)(*(int *)((int)register0x00000054 + -0x5c) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + 8);
        (*pcVar9)();
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -100);
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x60);
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        return;
      }
      iVar7 = *(int *)((int)register0x00000054 + 4);
      if (iVar7 == 0) {
        uVar6 = *(undefined4 *)((int)register0x00000054 + 8);
        bVar13 = 0;
      }
      else {
        *(int *)((int)register0x00000054 + -0x20) = iVar7;
        uVar6 = *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar6;
        if (*(int *)((int)register0x00000054 + -0x20) == 0) {
          bVar13 = 0;
        }
        else {
          bVar13 = *(byte *)(*(int *)((int)register0x00000054 + -0x20) + 0xf) & 0x1f;
        }
      }
      if (bVar13 != 0x16) goto LAB_003ed66c;
      if (iVar7 == 0) {
        uVar11 = 0;
        bVar16 = false;
        piVar8 = (int *)0x0;
      }
      else {
        *(int *)((int)register0x00000054 + -0x28) = iVar7;
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar6;
        if (*(int *)((int)register0x00000054 + -0x28) == 0) {
          uVar11 = 0;
          bVar16 = false;
          piVar8 = (int *)0x0;
        }
        else {
          bVar13 = *(byte *)(*(int *)((int)register0x00000054 + -0x28) + 0xf);
          uVar11 = bVar13 & 0x1f;
          bVar16 = (bVar13 & 0x20) == 0;
          piVar8 = *(int **)((int)register0x00000054 + -0x24);
        }
      }
      *(uint *)((int)register0x00000054 + -0x2c) = uVar11;
      if (uVar11 < 0x15) {
        if (uVar11 - 0x12 < 2) goto code_r0x003ed62c;
        if (uVar11 == 0x14) {
LAB_003ed608:
          bVar16 = *piVar8 != 0;
          goto LAB_003ed644;
        }
      }
      else {
        if (uVar11 < 0x17) {
code_r0x003ed62c:
          if (bVar16) {
            piVar8 = (int *)*piVar8;
          }
          bVar16 = false;
          if (piVar8 != (int *)0x0) {
            bVar16 = true;
          }
LAB_003ed644:
          if (!bVar16) {
            *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
            return;
          }
LAB_003ed66c:
          pcVar9 = *(code **)(*(int *)((int)register0x00000054 + -0x5c) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x68) = uVar6;
          (*pcVar9)();
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -100);
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
          return;
        }
        if (uVar11 == 0x17) goto LAB_003ed608;
        if (uVar11 == 0x1a) goto code_r0x003ed62c;
      }
      uVar15 = 0;
      *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_003ed82c;
      FUN_0001eed8();
      puVar10 = *(undefined4 **)((int)register0x00000054 + -100);
      puVar10[1] = 0x13;
      *puVar10 = DAT_003ed830;
      puVar10[2] = *(undefined4 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_003ed834;
      *(undefined4 **)((int)register0x00000054 + -100) = puVar10;
      param_1 = FUN_00090814();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x6c);
      if ((bool)uVar15) {
        register0x00000054 = (BADSPACEBASE *)puVar14;
      }
    }
    unaff_lr = 0x3ed7a0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/utils/cast.ToBool @ 003ed838 (size 60) */

void printerApi_common_utils_cast_ToBool(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_utils_cast_ToBoolE();
  return;
}



/* printerApi/common/utils/cast.ToBoolE @ 003ed874 (size 1964) */

/* WARNING: Type propagation algorithm not settling */

void printerApi_common_utils_cast_ToBoolE(undefined4 param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 extraout_r2;
  uint uVar13;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar14;
  undefined4 unaff_lr;
  undefined1 uVar15;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar14 = (undefined1 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x58) = unaff_lr;
      puVar4 = *(undefined **)((int)register0x00000054 + 4);
      if (puVar4 == (undefined *)0x0) goto LAB_003edf44;
      uVar10 = *(uint *)(puVar4 + 8);
      if (DAT_003ee020 < uVar10) {
        if (DAT_003ee068 < uVar10) {
          puVar2 = DAT_003ee084;
          if (uVar10 != DAT_003ee080) {
            puVar2 = DAT_003ee08c;
            puVar3 = PTR_DAT_003ee094;
            uVar13 = DAT_003ee090;
            if (uVar10 != DAT_003ee088) goto joined_r0x003ede24;
            goto joined_r0x003edc18;
          }
joined_r0x003edcfc:
          if (puVar4 != puVar2) {
LAB_003edf44:
            *(undefined **)((int)register0x00000054 + -0x14) = puVar4;
            *(undefined4 *)((int)register0x00000054 + -0x10) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined **)((int)register0x00000054 + -0xc) = puVar4;
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_003ee098;
            *(undefined4 *)((int)register0x00000054 + -0x50) = 0x24;
            *(undefined1 **)((int)register0x00000054 + -0x4c) =
                 (undefined1 *)((int)register0x00000054 + -0x14);
            *(undefined4 *)((int)register0x00000054 + -0x48) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x44) = 2;
            FUN_00130144();
            *(undefined1 *)((int)register0x00000054 + 0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            *(undefined4 *)((int)register0x00000054 + 0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
                    /* WARNING: Could not recover jumptable at 0x003edf98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x58))();
            return;
          }
          if (puVar4 == (undefined *)0x0) {
            uVar10 = 0;
            piVar7 = (int *)0x0;
          }
          else {
            *(undefined **)((int)register0x00000054 + -0x1c) = puVar4;
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            if (*(int *)((int)register0x00000054 + -0x1c) == 0) {
              uVar10 = 0;
              piVar7 = (int *)0x0;
            }
            else {
              uVar10 = *(byte *)(*(int *)((int)register0x00000054 + -0x1c) + 0xf) & 0x1f;
              piVar7 = *(int **)((int)register0x00000054 + -0x18);
            }
          }
          *(uint *)((int)register0x00000054 + -0x30) = uVar10;
          if (uVar10 < 4) {
            if (uVar10 == 2) {
              iVar8 = *piVar7;
              iVar11 = iVar8 >> 0x1f;
LAB_003eddc8:
              *(bool *)((int)register0x00000054 + 0xc) = iVar11 == 0 && iVar8 == 1;
              *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x003eddf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x58))();
              return;
            }
            uVar15 = 0;
            if (uVar10 == 3) {
              iVar8 = (int)(char)*piVar7;
              iVar11 = iVar8 >> 0x1f;
              goto LAB_003eddc8;
            }
          }
          else {
            if (uVar10 == 4) {
              iVar8 = (int)(short)*piVar7;
              iVar11 = iVar8 >> 0x1f;
              goto LAB_003eddc8;
            }
            if (uVar10 == 5) {
              iVar8 = *piVar7;
              iVar11 = iVar8 >> 0x1f;
              goto LAB_003eddc8;
            }
            uVar15 = 0;
            if (uVar10 == 6) {
              iVar8 = *piVar7;
              iVar11 = piVar7[1];
              goto LAB_003eddc8;
            }
          }
        }
        else {
          puVar2 = DAT_003ee070;
          if (uVar10 != DAT_003ee06c) {
            puVar2 = DAT_003ee078;
            if (uVar10 != DAT_003ee074) {
              if ((uVar10 == DAT_003ee068) && (puVar4 == DAT_003ee07c)) {
                *(undefined1 *)((int)register0x00000054 + 0xc) =
                     **(undefined1 **)((int)register0x00000054 + 8);
                *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
                *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x003edce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((int)register0x00000054 + -0x58))();
                return;
              }
              goto LAB_003edf44;
            }
            goto joined_r0x003edcfc;
          }
joined_r0x003edc18:
          if (puVar4 != puVar2) goto LAB_003edf44;
          if (puVar4 == (undefined *)0x0) {
            uVar10 = 0;
            puVar9 = (uint *)0x0;
          }
          else {
            *(undefined **)((int)register0x00000054 + -0x24) = puVar4;
            *(undefined4 *)((int)register0x00000054 + -0x20) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            if (*(int *)((int)register0x00000054 + -0x24) == 0) {
              uVar10 = 0;
              puVar9 = (uint *)0x0;
            }
            else {
              uVar10 = *(byte *)(*(int *)((int)register0x00000054 + -0x24) + 0xf) & 0x1f;
              puVar9 = *(uint **)((int)register0x00000054 + -0x20);
            }
          }
          *(uint *)((int)register0x00000054 + -0x30) = uVar10;
          if (uVar10 < 10) {
            if (uVar10 == 7) {
              uVar10 = *puVar9;
              uVar13 = 0;
LAB_003edf10:
              *(bool *)((int)register0x00000054 + 0xc) = uVar13 == 0 && uVar10 == 1;
              *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x003edf40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x58))();
              return;
            }
            if (uVar10 == 8) {
              uVar10 = (uint)(byte)*puVar9;
              uVar13 = 0;
              goto LAB_003edf10;
            }
            if (uVar10 == 9) {
              uVar10 = (uint)(ushort)*puVar9;
              uVar13 = 0;
              goto LAB_003edf10;
            }
          }
          else {
            if (uVar10 == 10) {
              uVar10 = *puVar9;
              uVar13 = 0;
              goto LAB_003edf10;
            }
            if (uVar10 == 0xb) {
              uVar10 = *puVar9;
              uVar13 = puVar9[1];
              goto LAB_003edf10;
            }
            if (uVar10 == 0xc) {
              uVar10 = *puVar9;
              uVar13 = 0;
              goto LAB_003edf10;
            }
          }
          uVar15 = 0;
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_003ee09c;
          FUN_0001eed8();
          puVar6 = *(undefined4 **)((int)register0x00000054 + -0x50);
          puVar6[1] = 0x12;
          *puVar6 = PTR_DAT_0077c85e_3_003ee0a0;
          puVar6[2] = *(undefined4 *)((int)register0x00000054 + -0x30);
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_003ee0a4;
          *(undefined4 **)((int)register0x00000054 + -0x50) = puVar6;
          FUN_00090814();
        }
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_003ee09c;
        FUN_0001eed8();
        puVar6 = *(undefined4 **)((int)register0x00000054 + -0x50);
        puVar6[1] = 0x11;
        *puVar6 = PTR_DAT_003ee0a8;
        puVar6[2] = *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_003ee0a4;
        *(undefined4 **)((int)register0x00000054 + -0x50) = puVar6;
        FUN_00090814();
      }
      else {
        if (DAT_003ee024 < uVar10) {
          puVar2 = DAT_003ee058;
          if (uVar10 != DAT_003ee054) {
            puVar2 = DAT_003ee060;
            puVar3 = DAT_003ee064;
            uVar13 = DAT_003ee020;
            if (uVar10 == DAT_003ee05c) goto joined_r0x003edcfc;
joined_r0x003ede24:
            puVar2 = puVar3;
            if (uVar10 != uVar13) goto LAB_003edf44;
          }
          goto joined_r0x003edc18;
        }
        if (uVar10 != DAT_003ee028) {
          puVar2 = DAT_003ee04c;
          if ((uVar10 != DAT_003ee048) && (puVar2 = DAT_003ee050, uVar10 != DAT_003ee024))
          goto LAB_003edf44;
          goto joined_r0x003edcfc;
        }
        if (puVar4 != PTR_SUB_003ee02c) goto LAB_003edf44;
        iVar11 = (*(undefined4 **)((int)register0x00000054 + 8))[1];
        pcVar5 = (char *)**(undefined4 **)((int)register0x00000054 + 8);
        if (iVar11 == 1) {
          if (*pcVar5 < 'G') {
            cVar1 = *pcVar5;
            if (cVar1 != '0') {
              if (cVar1 == '1') goto LAB_003ed9c4;
              if (cVar1 != 'F') goto code_r0x003edab4;
            }
LAB_003edaa0:
            puVar4 = (undefined *)0x0;
            uVar15 = 0;
            puVar6 = (undefined4 *)0x0;
          }
          else {
            cVar1 = *pcVar5;
            if (cVar1 != 'T') {
              if (cVar1 == 'f') goto LAB_003edaa0;
              if (cVar1 != 't') goto code_r0x003edab4;
            }
LAB_003ed9c4:
            puVar4 = (undefined *)0x0;
            uVar15 = 1;
            puVar6 = (undefined4 *)0x0;
          }
          goto LAB_003edbb4;
        }
        if (iVar11 == 4) {
          cVar1 = *pcVar5;
          if ((((cVar1 == 'T') && (pcVar5[1] == 'R')) && ((pcVar5[2] == 'U' && (pcVar5[3] == 'E'))))
             || (((((cVar1 == 'T' && (pcVar5[1] == 'r')) && (pcVar5[2] == 'u')) &&
                  (pcVar5[3] == 'e')) ||
                 (((cVar1 == 't' && (pcVar5[1] == 'r')) &&
                  ((pcVar5[2] == 'u' && (pcVar5[3] == 'e')))))))) goto LAB_003ed9c4;
        }
        else if ((iVar11 == 5) &&
                ((((((cVar1 = *pcVar5, cVar1 == 'F' && (pcVar5[1] == 'A')) && (pcVar5[2] == 'L')) &&
                   ((pcVar5[3] == 'S' && (pcVar5[4] == 'E')))) ||
                  ((((cVar1 == 'F' && ((pcVar5[1] == 'a' && (pcVar5[2] == 'l')))) &&
                    (pcVar5[3] == 's')) && (pcVar5[4] == 'e')))) ||
                 ((((cVar1 == 'f' && (pcVar5[1] == 'a')) && (pcVar5[2] == 'l')) &&
                  ((pcVar5[3] == 's' && (pcVar5[4] == 'e')))))))) goto LAB_003edaa0;
code_r0x003edab4:
        if (iVar11 == 0) {
          uVar10 = 0;
          iVar11 = 0;
LAB_003edb20:
          *(uint *)((int)register0x00000054 + -0x38) = uVar10;
          *(int *)((int)register0x00000054 + -0x2c) = iVar11;
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_003ee030;
          FUN_0001eed8();
          puVar6 = *(undefined4 **)((int)register0x00000054 + -0x50);
          puVar6[1] = 9;
          *puVar6 = PTR_s_ParseBool_method___MISSING____EX_0077568d_0x56a_003ee034;
          puVar6[3] = *(undefined4 *)((int)register0x00000054 + -0x38);
          if (*(int *)PTR_DAT_003ee038 == 0) {
            uVar12 = *(undefined4 *)((int)register0x00000054 + -0x2c);
          }
          else {
            puVar6 = (undefined4 *)FUN_00098678();
            uVar12 = *(undefined4 *)((int)register0x00000054 + -0x2c);
            *unaff_r8 = uVar12;
          }
          puVar6[2] = uVar12;
          uVar12 = *(undefined4 *)PTR_DAT_003ee040;
          puVar6[4] = *(undefined4 *)PTR_DAT_003ee03c;
          if (*(int *)PTR_DAT_003ee038 != 0) {
            puVar6 = (undefined4 *)FUN_00098678();
            *unaff_r8 = extraout_r2;
            uVar12 = extraout_r2;
          }
          puVar6[5] = uVar12;
          uVar15 = 0;
          puVar4 = PTR_DAT_003ee044;
LAB_003edbb4:
          *(undefined1 *)((int)register0x00000054 + 0xc) = uVar15;
          *(undefined **)((int)register0x00000054 + 0x10) = puVar4;
          *(undefined4 **)((int)register0x00000054 + 0x14) = puVar6;
          return;
        }
        *(int *)((int)register0x00000054 + -0x34) = iVar11;
        *(char **)((int)register0x00000054 + -0x28) = pcVar5;
        *(int *)((int)register0x00000054 + -0x54) = iVar11;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
        *(undefined1 *)((int)register0x00000054 + -0x4c) = 0;
        FUN_0008a8b0();
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        FUN_00098ec8();
        iVar11 = *(int *)((int)register0x00000054 + -4);
        uVar10 = *(uint *)((int)register0x00000054 + -0x34);
        uVar15 = uVar10 == -iVar11;
        if (uVar10 <= (uint)-iVar11) goto LAB_003edb20;
      }
      param_1 = FUN_00085954();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x58);
      if ((bool)uVar15) {
        register0x00000054 = (BADSPACEBASE *)puVar14;
      }
    }
    unaff_lr = 0x3ee01c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



