// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/util/cast   functions: 8
/* k3c/internal/pkg/util/cast.ToFloat64E @ 00429c98 (size 1304) */

/* WARNING: Type propagation algorithm not settling */

void k3c_internal_pkg_util_cast_ToFloat64E(undefined4 param_1)

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
      if (puVar4 == (undefined *)0x0) goto LAB_0042a0d4;
      uVar10 = *(uint *)(puVar4 + 8);
      if (DAT_0042a1b4 < uVar10) {
        if (DAT_0042a1e4 < uVar10) {
          uVar12 = DAT_0042a1fc;
          puVar1 = DAT_0042a204;
          puVar2 = DAT_0042a208;
          uVar3 = DAT_0042a200;
          if (uVar10 <= DAT_0042a1fc) goto joined_r0x00429e78;
          puVar1 = DAT_0042a210;
          puVar2 = PTR_DAT_0042a218;
          uVar12 = DAT_0042a214;
          if (uVar10 != DAT_0042a20c) goto joined_r0x00429fc0;
        }
        else {
          puVar1 = DAT_0042a1ec;
          if (uVar10 != DAT_0042a1e8) {
            puVar2 = DAT_0042a1f8;
            uVar12 = DAT_0042a1e4;
            if (uVar10 == DAT_0042a1f0) {
              if (puVar4 == DAT_0042a1f4) {
                *(undefined8 *)((int)register0x00000054 + 0xc) =
                     **(undefined8 **)((int)register0x00000054 + 8);
                *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00429e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((int)register0x00000054 + -0x44))();
                return;
              }
              goto LAB_0042a0d4;
            }
joined_r0x00429fc0:
            puVar1 = puVar2;
            if (uVar10 != uVar12) goto LAB_0042a0d4;
          }
        }
joined_r0x00429fcc:
        if (puVar4 != puVar1) goto LAB_0042a0d4;
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
LAB_0042a0ac:
            *(uint *)((int)register0x00000054 + -0x40) = uVar10;
            *(uint *)((int)register0x00000054 + -0x3c) = uVar12;
            FUN_0008b984();
            *(undefined8 *)((int)register0x00000054 + 0xc) =
                 *(undefined8 *)((int)register0x00000054 + -0x38);
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x44))();
            return;
          }
          if (uVar10 == 8) {
            uVar10 = (uint)(byte)*puVar8;
            uVar12 = 0;
            goto LAB_0042a0ac;
          }
          if (uVar10 == 9) {
            uVar10 = (uint)(ushort)*puVar8;
            uVar12 = 0;
            goto LAB_0042a0ac;
          }
        }
        else {
          if (uVar10 == 10) {
            uVar10 = *puVar8;
            uVar12 = 0;
            goto LAB_0042a0ac;
          }
          if (uVar10 == 0xb) {
            uVar10 = *puVar8;
            uVar12 = puVar8[1];
            goto LAB_0042a0ac;
          }
          if (uVar10 == 0xc) {
            uVar10 = *puVar8;
            uVar12 = 0;
            goto LAB_0042a0ac;
          }
        }
        uVar14 = 0;
        *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_0042a220;
        FUN_00022cf8();
        puVar9 = *(undefined4 **)((int)register0x00000054 + -0x3c);
        puVar9[1] = 0x12;
        *puVar9 = PTR_DAT_0042a224;
        puVar9[2] = *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_0042a228;
        *(undefined4 **)((int)register0x00000054 + -0x3c) = puVar9;
        FUN_00095b00();
      }
      else {
        if (DAT_0042a1b8 < uVar10) {
          puVar1 = DAT_0042a1d4;
          if (uVar10 == DAT_0042a1d0) goto joined_r0x00429fcc;
          puVar1 = DAT_0042a1dc;
          if (uVar10 != DAT_0042a1d8) {
            if ((uVar10 == DAT_0042a1b4) && (puVar4 == DAT_0042a1e0)) {
              *(double *)((int)register0x00000054 + 0xc) =
                   (double)**(float **)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00429ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x44))();
              return;
            }
            goto LAB_0042a0d4;
          }
        }
        else {
          uVar12 = DAT_0042a1b8;
          puVar1 = DAT_0042a1c8;
          puVar2 = DAT_0042a1cc;
          uVar3 = DAT_0042a1c4;
          if (uVar10 == DAT_0042a1bc) {
            if (puVar4 == DAT_0042a1c0) {
              uVar5 = (*(undefined4 **)((int)register0x00000054 + 8))[1];
              *(undefined4 *)((int)register0x00000054 + -0x40) =
                   **(undefined4 **)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar5;
              *(undefined4 *)((int)register0x00000054 + -0x38) = 0x40;
              FUN_000b5538();
              *(undefined8 *)((int)register0x00000054 + 0xc) =
                   *(undefined8 *)((int)register0x00000054 + -0x34);
              *(undefined4 *)((int)register0x00000054 + 0x14) =
                   *(undefined4 *)((int)register0x00000054 + -0x2c);
              *(undefined4 *)((int)register0x00000054 + 0x18) =
                   *(undefined4 *)((int)register0x00000054 + -0x28);
              return;
            }
            goto LAB_0042a0d4;
          }
joined_r0x00429e78:
          if ((uVar10 != uVar3) && (puVar1 = puVar2, uVar10 != uVar12)) goto LAB_0042a0d4;
        }
        if (puVar4 != puVar1) {
LAB_0042a0d4:
          *(undefined **)((int)register0x00000054 + -0x10) = puVar4;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined **)((int)register0x00000054 + -8) = puVar4;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_0042a21c;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 0x23;
          *(undefined1 **)((int)register0x00000054 + -0x38) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x34) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 2;
          FUN_001386c4();
          *(undefined8 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + 0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
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
            goto LAB_00429f70;
          }
          uVar14 = 0;
          if (uVar10 == 3) {
            iVar7 = (int)(char)*piVar6;
            iVar11 = iVar7 >> 0x1f;
LAB_00429f70:
            *(int *)((int)register0x00000054 + -0x40) = iVar7;
            *(int *)((int)register0x00000054 + -0x3c) = iVar11;
            FUN_0008b910();
            *(undefined8 *)((int)register0x00000054 + 0xc) =
                 *(undefined8 *)((int)register0x00000054 + -0x38);
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
            return;
          }
        }
        else {
          if (uVar10 == 4) {
            iVar7 = (int)(short)*piVar6;
            iVar11 = iVar7 >> 0x1f;
            goto LAB_00429f70;
          }
          if (uVar10 == 5) {
            iVar7 = *piVar6;
            iVar11 = iVar7 >> 0x1f;
            goto LAB_00429f70;
          }
          uVar14 = 0;
          if (uVar10 == 6) {
            iVar7 = *piVar6;
            iVar11 = piVar6[1];
            goto LAB_00429f70;
          }
        }
      }
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_0042a220;
      FUN_00022cf8();
      puVar9 = *(undefined4 **)((int)register0x00000054 + -0x3c);
      puVar9[1] = 0x11;
      *puVar9 = PTR_DAT_0042a22c;
      puVar9[2] = *(undefined4 *)((int)register0x00000054 + -0x24);
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_0042a228;
      *(undefined4 **)((int)register0x00000054 + -0x3c) = puVar9;
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if ((bool)uVar14) {
        register0x00000054 = (BADSPACEBASE *)puVar13;
      }
    }
    unaff_lr = 0x42a1ac;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/util/cast.ToIntE @ 0042a230 (size 1448) */

void k3c_internal_pkg_util_cast_ToIntE(undefined4 param_1)

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
      if (puVar4 == (undefined *)0x0) goto LAB_0042a6c4;
      uVar11 = *(uint *)(puVar4 + 8);
      if (DAT_0042a7dc < uVar11) {
        if (DAT_0042a80c < uVar11) {
          if (uVar11 <= DAT_0042a824) {
            if (uVar11 == DAT_0042a828) {
              if (puVar4 == DAT_0042a82c) {
                if (**(char **)((int)register0x00000054 + 8) != '\0') {
                  *(undefined4 *)((int)register0x00000054 + 0xc) = 1;
                  *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
                  *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042a55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)((int)register0x00000054 + -0x4c))();
                  return;
                }
                *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
                *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
                *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042a578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((int)register0x00000054 + -0x4c))();
                return;
              }
            }
            else if ((uVar11 == DAT_0042a824) && (puVar4 == DAT_0042a830)) {
              *(undefined4 *)((int)register0x00000054 + 0xc) =
                   **(undefined4 **)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042a5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x4c))();
              return;
            }
            goto LAB_0042a6c4;
          }
          puVar1 = DAT_0042a838;
          puVar2 = PTR_DAT_0042a840;
          uVar3 = DAT_0042a83c;
          if (uVar11 != DAT_0042a834) goto joined_r0x0042a5dc;
joined_r0x0042a5e8:
          if (puVar4 != puVar1) {
LAB_0042a6c4:
            *(undefined **)((int)register0x00000054 + -0x10) = puVar4;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined **)((int)register0x00000054 + -8) = puVar4;
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_0042a844;
            *(undefined4 *)((int)register0x00000054 + -0x44) = 0x1f;
            *(undefined1 **)((int)register0x00000054 + -0x40) =
                 (undefined1 *)((int)register0x00000054 + -0x10);
            *(undefined4 *)((int)register0x00000054 + -0x3c) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x38) = 2;
            FUN_001386c4();
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
LAB_0042a6ac:
              *(uint *)((int)register0x00000054 + 0xc) = uVar11;
              *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042a6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x4c))();
              return;
            }
            if (uVar11 == 8) {
              uVar11 = (uint)(byte)*puVar9;
              goto LAB_0042a6ac;
            }
            if (uVar11 == 9) {
              uVar11 = (uint)(ushort)*puVar9;
              goto LAB_0042a6ac;
            }
          }
          else {
            if (uVar11 == 10) {
              uVar11 = *puVar9;
              goto LAB_0042a6ac;
            }
            if (uVar11 == 0xb) {
              uVar11 = *puVar9;
              goto LAB_0042a6ac;
            }
            if (uVar11 == 0xc) {
              uVar11 = *puVar9;
              goto LAB_0042a6ac;
            }
          }
          uVar13 = 0;
          *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_0042a848;
          FUN_00022cf8();
          puVar10 = *(undefined4 **)((int)register0x00000054 + -0x44);
          puVar10[1] = 0x12;
          *puVar10 = PTR_DAT_0042a84c;
          puVar10[2] = *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_0042a850;
          *(undefined4 **)((int)register0x00000054 + -0x44) = puVar10;
          FUN_00095b00();
          goto LAB_0042a754;
        }
        puVar1 = DAT_0042a814;
        if (uVar11 != DAT_0042a810) {
          puVar1 = DAT_0042a81c;
          puVar2 = DAT_0042a820;
          uVar3 = DAT_0042a80c;
          if (uVar11 != DAT_0042a818) goto joined_r0x0042a438;
          goto joined_r0x0042a5e8;
        }
joined_r0x0042a374:
        if (puVar4 != puVar1) goto LAB_0042a6c4;
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
          goto LAB_0042a3f0;
        }
        uVar13 = 0;
        if (uVar11 == 0xe) {
          dVar14 = *pdVar6;
LAB_0042a3f0:
          *(int *)((int)register0x00000054 + 0xc) = (int)(longlong)dVar14;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042a40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x4c))();
          return;
        }
      }
      else {
        if (DAT_0042a7e0 < uVar11) {
          puVar1 = DAT_0042a7fc;
          if (uVar11 != DAT_0042a7f8) {
            puVar1 = DAT_0042a804;
            puVar2 = DAT_0042a808;
            uVar3 = DAT_0042a7dc;
            if (uVar11 == DAT_0042a800) goto joined_r0x0042a374;
joined_r0x0042a5dc:
            puVar1 = puVar2;
            if (uVar11 != uVar3) goto LAB_0042a6c4;
            goto joined_r0x0042a5e8;
          }
        }
        else {
          if (uVar11 == DAT_0042a7e4) {
            if (puVar4 == DAT_0042a7e8) {
              uVar5 = (*(undefined4 **)((int)register0x00000054 + 8))[1];
              *(undefined4 *)((int)register0x00000054 + -0x48) =
                   **(undefined4 **)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x44) = uVar5;
              FUN_000b6cc4();
              *(undefined4 *)((int)register0x00000054 + 0xc) =
                   *(undefined4 *)((int)register0x00000054 + -0x40);
              *(undefined4 *)((int)register0x00000054 + 0x10) =
                   *(undefined4 *)((int)register0x00000054 + -0x3c);
              *(undefined4 *)((int)register0x00000054 + 0x14) =
                   *(undefined4 *)((int)register0x00000054 + -0x38);
              return;
            }
            goto LAB_0042a6c4;
          }
          puVar1 = DAT_0042a7f0;
          puVar2 = DAT_0042a7f4;
          uVar3 = DAT_0042a7e0;
          if (uVar11 != DAT_0042a7ec) {
joined_r0x0042a438:
            puVar1 = puVar2;
            if (uVar11 != uVar3) goto LAB_0042a6c4;
          }
        }
        if (puVar4 != puVar1) goto LAB_0042a6c4;
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
LAB_0042a4f8:
            *(int *)((int)register0x00000054 + 0xc) = iVar8;
            *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            return;
          }
          uVar13 = 0;
          if (uVar11 == 3) {
            iVar8 = (int)(char)*piVar7;
            goto LAB_0042a4f8;
          }
        }
        else {
          if (uVar11 == 4) {
            iVar8 = (int)(short)*piVar7;
            goto LAB_0042a4f8;
          }
          if (uVar11 == 5) {
            iVar8 = *piVar7;
            goto LAB_0042a4f8;
          }
          uVar13 = 0;
          if (uVar11 == 6) {
            iVar8 = *piVar7;
            goto LAB_0042a4f8;
          }
        }
LAB_0042a754:
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_0042a848;
        FUN_00022cf8();
        puVar10 = *(undefined4 **)((int)register0x00000054 + -0x44);
        puVar10[1] = 0x11;
        *puVar10 = PTR_DAT_0042a854;
        puVar10[2] = *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_0042a850;
        *(undefined4 **)((int)register0x00000054 + -0x44) = puVar10;
        FUN_00095b00();
        uVar11 = extraout_r1;
      }
      *(uint *)((int)register0x00000054 + -0x2c) = uVar11;
      *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_0042a848;
      FUN_00022cf8();
      puVar10 = *(undefined4 **)((int)register0x00000054 + -0x44);
      puVar10[1] = 0x13;
      *puVar10 = PTR_DAT_0042a858;
      puVar10[2] = *(undefined4 *)((int)register0x00000054 + -0x2c);
      *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_0042a850;
      *(undefined4 **)((int)register0x00000054 + -0x44) = puVar10;
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x4c);
      if ((bool)uVar13) {
        register0x00000054 = (BADSPACEBASE *)puVar12;
      }
    }
    unaff_lr = 0x42a7d4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/util/cast.ToStringE @ 0042a85c (size 1724) */

/* WARNING: Type propagation algorithm not settling */

void k3c_internal_pkg_util_cast_ToStringE(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  code *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  byte bVar12;
  int unaff_r10;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  undefined1 uVar14;
  bool bVar15;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar13 = (undefined1 *)((int)register0x00000054 + -0x6c);
      *(undefined4 *)((int)register0x00000054 + -0x6c) = unaff_lr;
      iVar5 = *(int *)((int)register0x00000054 + 4);
      if (iVar5 == 0) {
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042aecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x6c))();
        return;
      }
      uVar10 = *(uint *)(iVar5 + 8);
      if (DAT_0042af1c < uVar10) {
        if (DAT_0042af58 < uVar10) {
          if (DAT_0042af6c < uVar10) {
            iVar1 = DAT_0042af88;
            iVar2 = DAT_0042af90;
            uVar3 = DAT_0042af8c;
            if (uVar10 == DAT_0042af84) goto joined_r0x0042ab64;
          }
          else {
            iVar2 = DAT_0042af80;
            uVar3 = DAT_0042af6c;
            if (uVar10 == DAT_0042af70) {
              if (iVar5 == DAT_0042af74) {
                if (**(char **)((int)register0x00000054 + 8) == '\0') {
                  uVar11 = 5;
                  uVar6 = DAT_0042af7c;
                }
                else {
                  uVar11 = 4;
                  uVar6 = DAT_0042af78;
                }
                *(undefined4 *)((int)register0x00000054 + 0xc) = uVar6;
                *(undefined4 *)((int)register0x00000054 + 0x10) = uVar11;
                *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042abcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((int)register0x00000054 + -0x6c))();
                return;
              }
              goto LAB_0042ac78;
            }
          }
joined_r0x0042ac10:
          iVar1 = iVar2;
          if (uVar10 == uVar3) {
joined_r0x0042ab64:
            if (iVar5 == iVar1) {
              *(int *)((int)register0x00000054 + -8) = iVar5;
              *(undefined4 *)((int)register0x00000054 + -4) =
                   *(undefined4 *)((int)register0x00000054 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_0042af94;
              *(undefined4 *)((int)register0x00000054 + -100) = 2;
              *(undefined1 **)((int)register0x00000054 + -0x60) =
                   (undefined1 *)((int)register0x00000054 + -8);
              *(undefined4 *)((int)register0x00000054 + -0x5c) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
              FUN_0013b72c();
              *(undefined4 *)((int)register0x00000054 + 0xc) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              *(undefined4 *)((int)register0x00000054 + 0x10) =
                   *(undefined4 *)((int)register0x00000054 + -0x50);
              *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042ac74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x6c))();
              return;
            }
          }
        }
        else {
          iVar1 = DAT_0042af50;
          uVar3 = DAT_0042af58;
          iVar2 = DAT_0042af68;
          uVar4 = DAT_0042af64;
          if (uVar10 != DAT_0042af5c) goto joined_r0x0042ab3c;
          if (iVar5 == DAT_0042af60) {
            *(undefined8 *)((int)register0x00000054 + -0x3c) =
                 **(undefined8 **)((int)register0x00000054 + 8);
            *(int *)((int)register0x00000054 + -0x68) = DAT_0042af50;
            *(undefined4 *)((int)register0x00000054 + -100) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x60) = 0x18;
            FUN_000986b8();
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 *)((int)register0x00000054 + -100) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x60) = 0x18;
            *(undefined8 *)((int)register0x00000054 + -0x5c) =
                 *(undefined8 *)((int)register0x00000054 + -0x3c);
            *(undefined1 *)((int)register0x00000054 + -0x54) = 0x66;
            *(undefined4 *)((int)register0x00000054 + -0x50) = 0xffffffff;
            *(undefined4 *)((int)register0x00000054 + -0x4c) = 0x40;
            FUN_000b8514();
            *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + -0x48);
            *(undefined4 *)((int)register0x00000054 + -0x60) =
                 *(undefined4 *)((int)register0x00000054 + -0x44);
            FUN_00099104();
            *(undefined4 *)((int)register0x00000054 + 0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 *)((int)register0x00000054 + 0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042ab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x6c))();
            return;
          }
        }
      }
      else if (DAT_0042af20 < uVar10) {
        if (DAT_0042af38 < uVar10) {
          iVar2 = DAT_0042af54;
          uVar3 = DAT_0042af1c;
          if (uVar10 != DAT_0042af48) goto joined_r0x0042ac10;
          if (iVar5 == DAT_0042af4c) {
            *(double *)((int)register0x00000054 + -0x34) =
                 (double)**(float **)((int)register0x00000054 + 8);
            *(int *)((int)register0x00000054 + -0x68) = DAT_0042af50;
            *(undefined4 *)((int)register0x00000054 + -100) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x60) = 0x18;
            FUN_000986b8();
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 *)((int)register0x00000054 + -100) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x60) = 0x18;
            *(undefined8 *)((int)register0x00000054 + -0x5c) =
                 *(undefined8 *)((int)register0x00000054 + -0x34);
            *(undefined1 *)((int)register0x00000054 + -0x54) = 0x66;
            *(undefined4 *)((int)register0x00000054 + -0x50) = 0xffffffff;
            *(undefined4 *)((int)register0x00000054 + -0x4c) = 0x20;
            FUN_000b8514();
            *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)((int)register0x00000054 + -0x48);
            *(undefined4 *)((int)register0x00000054 + -0x60) =
                 *(undefined4 *)((int)register0x00000054 + -0x44);
            FUN_00099104();
            *(undefined4 *)((int)register0x00000054 + 0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 *)((int)register0x00000054 + 0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042aa4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x6c))();
            return;
          }
        }
        else {
          iVar1 = DAT_0042af40;
          if (uVar10 == DAT_0042af3c) goto joined_r0x0042ab64;
          if ((uVar10 == DAT_0042af38) && (iVar5 == DAT_0042af44)) {
            uVar11 = **(undefined4 **)((int)register0x00000054 + 8);
            uVar6 = (*(undefined4 **)((int)register0x00000054 + 8))[1];
            *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
            *(undefined4 *)((int)register0x00000054 + -100) = uVar11;
            *(undefined4 *)((int)register0x00000054 + -0x60) = uVar6;
            FUN_00099104();
            *(undefined4 *)((int)register0x00000054 + 0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 *)((int)register0x00000054 + 0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042a98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x6c))();
            return;
          }
        }
      }
      else {
        iVar1 = DAT_0042af30;
        uVar3 = DAT_0042af20;
        iVar2 = DAT_0042af34;
        uVar4 = DAT_0042af2c;
        if (uVar10 != DAT_0042af24) {
joined_r0x0042ab3c:
          if (uVar10 != uVar4) goto joined_r0x0042ac10;
          goto joined_r0x0042ab64;
        }
        if (iVar5 == DAT_0042af28) {
          uVar6 = (*(undefined4 **)((int)register0x00000054 + 8))[1];
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               **(undefined4 **)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + 0x10) = uVar6;
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
          return;
        }
      }
LAB_0042ac78:
      *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_0042af98;
      *(int *)((int)register0x00000054 + -100) = iVar5;
      FUN_00020e80();
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
          *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_0042af9c;
          *(undefined4 *)((int)register0x00000054 + -100) = 0x22;
          *(undefined1 **)((int)register0x00000054 + -0x60) =
               (undefined1 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x5c) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x58) = 2;
          FUN_001386c4();
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          *(undefined4 *)((int)register0x00000054 + 0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          return;
        }
        pcVar8 = *(code **)(*(int *)((int)register0x00000054 + -0x5c) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + 8);
        (*pcVar8)();
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -100);
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x60);
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        return;
      }
      iVar5 = *(int *)((int)register0x00000054 + 4);
      if (iVar5 == 0) {
        uVar6 = *(undefined4 *)((int)register0x00000054 + 8);
        bVar12 = 0;
      }
      else {
        *(int *)((int)register0x00000054 + -0x20) = iVar5;
        uVar6 = *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar6;
        if (*(int *)((int)register0x00000054 + -0x20) == 0) {
          bVar12 = 0;
        }
        else {
          bVar12 = *(byte *)(*(int *)((int)register0x00000054 + -0x20) + 0xf) & 0x1f;
        }
      }
      if (bVar12 != 0x16) goto LAB_0042ade0;
      if (iVar5 == 0) {
        uVar10 = 0;
        bVar15 = false;
        piVar7 = (int *)0x0;
      }
      else {
        *(int *)((int)register0x00000054 + -0x28) = iVar5;
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar6;
        if (*(int *)((int)register0x00000054 + -0x28) == 0) {
          uVar10 = 0;
          bVar15 = false;
          piVar7 = (int *)0x0;
        }
        else {
          bVar12 = *(byte *)(*(int *)((int)register0x00000054 + -0x28) + 0xf);
          uVar10 = bVar12 & 0x1f;
          bVar15 = (bVar12 & 0x20) == 0;
          piVar7 = *(int **)((int)register0x00000054 + -0x24);
        }
      }
      *(uint *)((int)register0x00000054 + -0x2c) = uVar10;
      if (uVar10 < 0x15) {
        if (uVar10 - 0x12 < 2) goto code_r0x0042ada0;
        if (uVar10 == 0x14) {
LAB_0042ad7c:
          bVar15 = *piVar7 != 0;
          goto LAB_0042adb8;
        }
      }
      else {
        if (uVar10 < 0x17) {
code_r0x0042ada0:
          if (bVar15) {
            piVar7 = (int *)*piVar7;
          }
          bVar15 = false;
          if (piVar7 != (int *)0x0) {
            bVar15 = true;
          }
LAB_0042adb8:
          if (!bVar15) {
            *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
            return;
          }
LAB_0042ade0:
          pcVar8 = *(code **)(*(int *)((int)register0x00000054 + -0x5c) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x68) = uVar6;
          (*pcVar8)();
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -100);
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
          return;
        }
        if (uVar10 == 0x17) goto LAB_0042ad7c;
        if (uVar10 == 0x1a) goto code_r0x0042ada0;
      }
      uVar14 = 0;
      *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_0042afa0;
      FUN_00022cf8();
      puVar9 = *(undefined4 **)((int)register0x00000054 + -100);
      puVar9[1] = 0x13;
      *puVar9 = DAT_0042afa4;
      puVar9[2] = *(undefined4 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x68) = DAT_0042afa8;
      *(undefined4 **)((int)register0x00000054 + -100) = puVar9;
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x6c);
      if ((bool)uVar14) {
        register0x00000054 = (BADSPACEBASE *)puVar13;
      }
    }
    unaff_lr = 0x42af14;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/util/cast.ToStringSlice @ 0042afac (size 208) */

void k3c_internal_pkg_util_cast_ToStringSlice(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_24;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x42b078;
    FUN_0009bf64();
  }
  if (in_stack_00000004 != 0) {
    k3c_internal_pkg_util_cast_ToStringSliceE();
    if (uStack_24 != 0) {
      k3c_internal_pkg_logger_Errorf();
    }
                    /* WARNING: Could not recover jumptable at 0x0042b054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
                    /* WARNING: Could not recover jumptable at 0x0042b06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/util/cast.ToStringSliceE @ 0042b084 (size 612) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_util_cast_ToStringSliceE(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r2;
  uint uVar5;
  uint extraout_r3;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int unaff_r10;
  undefined4 uVar11;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar12;
  undefined *in_stack_00000004;
  undefined4 *in_stack_00000008;
  int in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x42b2e4;
    FUN_0009bf64();
  }
  if (in_stack_00000004 != (undefined *)0x0) {
    if (*(int *)(in_stack_00000004 + 8) == _UNK_0042b2ec) {
      if (in_stack_00000004 == _UNK_0042b2f0) {
        uVar3 = *in_stack_00000008;
        uVar2 = in_stack_00000008[1];
        iVar4 = 0;
        uVar5 = 0;
        iVar6 = 0;
        uVar7 = 0;
        uVar12 = CONCAT44(uVar3,uVar2);
        while( true ) {
          iVar8 = (int)((ulonglong)uVar12 >> 0x20);
          if ((int)uVar12 <= iVar4) {
            in_stack_00000018 = 0;
            in_stack_0000001c = 0;
            in_stack_0000000c = iVar6;
            in_stack_00000010 = uVar7;
            in_stack_00000014 = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0042b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return;
          }
          puVar9 = *(undefined4 **)(iVar8 + iVar4 * 8 + 4);
          if (*(undefined **)(iVar8 + iVar4 * 8) != PTR_DAT_0042b300) break;
          uVar10 = *puVar9;
          uVar11 = puVar9[1];
          uVar7 = uVar7 + 1;
          if (uVar5 < uVar7) {
            FUN_000987f4();
            uVar5 = uStack_2c;
            iVar6 = iStack_34;
            uVar7 = uStack_30;
            uVar12 = CONCAT44(uVar3,uVar2);
          }
          puVar1 = PTR_DAT_0042b300;
          iVar8 = uVar7 - 1;
          *(undefined4 *)(iVar6 + iVar8 * 8 + 4) = uVar11;
          if (*(int *)PTR_DAT_0042b304 != 0) {
            uVar12 = FUN_0009db64();
            *(undefined4 *)puVar1 = uVar10;
            *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(iVar6 + iVar8 * 8);
            iVar4 = extraout_r2;
            uVar5 = extraout_r3;
          }
          *(undefined4 *)(iVar6 + iVar8 * 8) = uVar10;
          iVar4 = iVar4 + 1;
        }
        FUN_001386c4();
        in_stack_0000000c = 0;
        in_stack_00000010 = 0;
        in_stack_00000014 = 0;
                    /* WARNING: Could not recover jumptable at 0x0042b2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else if ((*(int *)(in_stack_00000004 + 8) == _UNK_0042b2f4) &&
            (in_stack_00000004 == PTR_DAT_0042b2f8)) {
      in_stack_0000000c = *in_stack_00000008;
      in_stack_00000010 = in_stack_00000008[1];
      in_stack_00000014 = in_stack_00000008[2];
      in_stack_00000018 = 0;
      in_stack_0000001c = 0;
                    /* WARNING: Could not recover jumptable at 0x0042b128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  FUN_001386c4();
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
                    /* WARNING: Could not recover jumptable at 0x0042b18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/util/cast.ToBoolE @ 0042b30c (size 1964) */

/* WARNING: Type propagation algorithm not settling */

void k3c_internal_pkg_util_cast_ToBoolE(undefined4 param_1)

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
      if (puVar4 == (undefined *)0x0) goto LAB_0042b9dc;
      uVar10 = *(uint *)(puVar4 + 8);
      if (DAT_0042bab8 < uVar10) {
        if (DAT_0042bb00 < uVar10) {
          puVar2 = DAT_0042bb1c;
          if (uVar10 != DAT_0042bb18) {
            puVar2 = DAT_0042bb24;
            puVar3 = PTR_DAT_0042bb2c;
            uVar13 = DAT_0042bb28;
            if (uVar10 != DAT_0042bb20) goto joined_r0x0042b8bc;
            goto joined_r0x0042b6b0;
          }
joined_r0x0042b794:
          if (puVar4 != puVar2) {
LAB_0042b9dc:
            *(undefined **)((int)register0x00000054 + -0x14) = puVar4;
            *(undefined4 *)((int)register0x00000054 + -0x10) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined **)((int)register0x00000054 + -0xc) = puVar4;
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0042bb30;
            *(undefined4 *)((int)register0x00000054 + -0x50) = 0x24;
            *(undefined1 **)((int)register0x00000054 + -0x4c) =
                 (undefined1 *)((int)register0x00000054 + -0x14);
            *(undefined4 *)((int)register0x00000054 + -0x48) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x44) = 2;
            FUN_001386c4();
            *(undefined1 *)((int)register0x00000054 + 0xc) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            *(undefined4 *)((int)register0x00000054 + 0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
                    /* WARNING: Could not recover jumptable at 0x0042ba30. Too many branches */
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
LAB_0042b860:
              *(bool *)((int)register0x00000054 + 0xc) = iVar11 == 0 && iVar8 == 1;
              *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042b890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x58))();
              return;
            }
            uVar15 = 0;
            if (uVar10 == 3) {
              iVar8 = (int)(char)*piVar7;
              iVar11 = iVar8 >> 0x1f;
              goto LAB_0042b860;
            }
          }
          else {
            if (uVar10 == 4) {
              iVar8 = (int)(short)*piVar7;
              iVar11 = iVar8 >> 0x1f;
              goto LAB_0042b860;
            }
            if (uVar10 == 5) {
              iVar8 = *piVar7;
              iVar11 = iVar8 >> 0x1f;
              goto LAB_0042b860;
            }
            uVar15 = 0;
            if (uVar10 == 6) {
              iVar8 = *piVar7;
              iVar11 = piVar7[1];
              goto LAB_0042b860;
            }
          }
        }
        else {
          puVar2 = DAT_0042bb08;
          if (uVar10 != DAT_0042bb04) {
            puVar2 = DAT_0042bb10;
            if (uVar10 != DAT_0042bb0c) {
              if ((uVar10 == DAT_0042bb00) && (puVar4 == DAT_0042bb14)) {
                *(undefined1 *)((int)register0x00000054 + 0xc) =
                     **(undefined1 **)((int)register0x00000054 + 8);
                *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
                *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042b77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)((int)register0x00000054 + -0x58))();
                return;
              }
              goto LAB_0042b9dc;
            }
            goto joined_r0x0042b794;
          }
joined_r0x0042b6b0:
          if (puVar4 != puVar2) goto LAB_0042b9dc;
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
LAB_0042b9a8:
              *(bool *)((int)register0x00000054 + 0xc) = uVar13 == 0 && uVar10 == 1;
              *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042b9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x58))();
              return;
            }
            if (uVar10 == 8) {
              uVar10 = (uint)(byte)*puVar9;
              uVar13 = 0;
              goto LAB_0042b9a8;
            }
            if (uVar10 == 9) {
              uVar10 = (uint)(ushort)*puVar9;
              uVar13 = 0;
              goto LAB_0042b9a8;
            }
          }
          else {
            if (uVar10 == 10) {
              uVar10 = *puVar9;
              uVar13 = 0;
              goto LAB_0042b9a8;
            }
            if (uVar10 == 0xb) {
              uVar10 = *puVar9;
              uVar13 = puVar9[1];
              goto LAB_0042b9a8;
            }
            if (uVar10 == 0xc) {
              uVar10 = *puVar9;
              uVar13 = 0;
              goto LAB_0042b9a8;
            }
          }
          uVar15 = 0;
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0042bb34;
          FUN_00022cf8();
          puVar6 = *(undefined4 **)((int)register0x00000054 + -0x50);
          puVar6[1] = 0x12;
          *puVar6 = PTR_DAT_0042bb38;
          puVar6[2] = *(undefined4 *)((int)register0x00000054 + -0x30);
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0042bb3c;
          *(undefined4 **)((int)register0x00000054 + -0x50) = puVar6;
          FUN_00095b00();
        }
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0042bb34;
        FUN_00022cf8();
        puVar6 = *(undefined4 **)((int)register0x00000054 + -0x50);
        puVar6[1] = 0x11;
        *puVar6 = PTR_DAT_0042bb40;
        puVar6[2] = *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0042bb3c;
        *(undefined4 **)((int)register0x00000054 + -0x50) = puVar6;
        FUN_00095b00();
      }
      else {
        if (DAT_0042babc < uVar10) {
          puVar2 = DAT_0042baf0;
          if (uVar10 != DAT_0042baec) {
            puVar2 = DAT_0042baf8;
            puVar3 = DAT_0042bafc;
            uVar13 = DAT_0042bab8;
            if (uVar10 == DAT_0042baf4) goto joined_r0x0042b794;
joined_r0x0042b8bc:
            puVar2 = puVar3;
            if (uVar10 != uVar13) goto LAB_0042b9dc;
          }
          goto joined_r0x0042b6b0;
        }
        if (uVar10 != DAT_0042bac0) {
          puVar2 = DAT_0042bae4;
          if ((uVar10 != DAT_0042bae0) && (puVar2 = DAT_0042bae8, uVar10 != DAT_0042babc))
          goto LAB_0042b9dc;
          goto joined_r0x0042b794;
        }
        if (puVar4 != PTR_DAT_0042bac4) goto LAB_0042b9dc;
        iVar11 = (*(undefined4 **)((int)register0x00000054 + 8))[1];
        pcVar5 = (char *)**(undefined4 **)((int)register0x00000054 + 8);
        if (iVar11 == 1) {
          if (*pcVar5 < 'G') {
            cVar1 = *pcVar5;
            if (cVar1 != '0') {
              if (cVar1 == '1') goto LAB_0042b45c;
              if (cVar1 != 'F') goto code_r0x0042b54c;
            }
LAB_0042b538:
            puVar4 = (undefined *)0x0;
            uVar15 = 0;
            puVar6 = (undefined4 *)0x0;
          }
          else {
            cVar1 = *pcVar5;
            if (cVar1 != 'T') {
              if (cVar1 == 'f') goto LAB_0042b538;
              if (cVar1 != 't') goto code_r0x0042b54c;
            }
LAB_0042b45c:
            puVar4 = (undefined *)0x0;
            uVar15 = 1;
            puVar6 = (undefined4 *)0x0;
          }
          goto LAB_0042b64c;
        }
        if (iVar11 == 4) {
          cVar1 = *pcVar5;
          if ((((cVar1 == 'T') && (pcVar5[1] == 'R')) && ((pcVar5[2] == 'U' && (pcVar5[3] == 'E'))))
             || (((((cVar1 == 'T' && (pcVar5[1] == 'r')) && (pcVar5[2] == 'u')) &&
                  (pcVar5[3] == 'e')) ||
                 (((cVar1 == 't' && (pcVar5[1] == 'r')) &&
                  ((pcVar5[2] == 'u' && (pcVar5[3] == 'e')))))))) goto LAB_0042b45c;
        }
        else if ((iVar11 == 5) &&
                ((((((cVar1 = *pcVar5, cVar1 == 'F' && (pcVar5[1] == 'A')) && (pcVar5[2] == 'L')) &&
                   ((pcVar5[3] == 'S' && (pcVar5[4] == 'E')))) ||
                  ((((cVar1 == 'F' && ((pcVar5[1] == 'a' && (pcVar5[2] == 'l')))) &&
                    (pcVar5[3] == 's')) && (pcVar5[4] == 'e')))) ||
                 ((((cVar1 == 'f' && (pcVar5[1] == 'a')) && (pcVar5[2] == 'l')) &&
                  ((pcVar5[3] == 's' && (pcVar5[4] == 'e')))))))) goto LAB_0042b538;
code_r0x0042b54c:
        if (iVar11 == 0) {
          uVar10 = 0;
          iVar11 = 0;
LAB_0042b5b8:
          *(uint *)((int)register0x00000054 + -0x38) = uVar10;
          *(int *)((int)register0x00000054 + -0x2c) = iVar11;
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0042bac8;
          FUN_00022cf8();
          puVar6 = *(undefined4 **)((int)register0x00000054 + -0x50);
          puVar6[1] = 9;
          *puVar6 = PTR_s_ParseBool_method___MISSING____EX_00823504_0xf8_0042bacc;
          puVar6[3] = *(undefined4 *)((int)register0x00000054 + -0x38);
          if (*(int *)PTR_DAT_0042bad0 == 0) {
            uVar12 = *(undefined4 *)((int)register0x00000054 + -0x2c);
          }
          else {
            puVar6 = (undefined4 *)FUN_0009db54();
            uVar12 = *(undefined4 *)((int)register0x00000054 + -0x2c);
            *unaff_r8 = uVar12;
          }
          puVar6[2] = uVar12;
          uVar12 = *(undefined4 *)PTR_DAT_0042bad8;
          puVar6[4] = *(undefined4 *)PTR_DAT_0042bad4;
          if (*(int *)PTR_DAT_0042bad0 != 0) {
            puVar6 = (undefined4 *)FUN_0009db54();
            *unaff_r8 = extraout_r2;
            uVar12 = extraout_r2;
          }
          puVar6[5] = uVar12;
          uVar15 = 0;
          puVar4 = PTR_DAT_0042badc;
LAB_0042b64c:
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
        FUN_0008fab4();
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        FUN_0009e3a4();
        iVar11 = *(int *)((int)register0x00000054 + -4);
        uVar10 = *(uint *)((int)register0x00000054 + -0x34);
        uVar15 = uVar10 == -iVar11;
        if (uVar10 <= (uint)-iVar11) goto LAB_0042b5b8;
      }
      param_1 = FUN_0008a908();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x58);
      if ((bool)uVar15) {
        register0x00000054 = (BADSPACEBASE *)puVar14;
      }
    }
    unaff_lr = 0x42bab4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/util/cast.ToInt64 @ 0042bb44 (size 884) */

void k3c_internal_pkg_util_cast_ToInt64(void)

{
  uint uVar1;
  int unaff_r10;
  int in_stack_00000004;
  char *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (in_stack_00000004 != 0) {
    uVar1 = *(uint *)(in_stack_00000004 + 8);
    if (DAT_0042bebc < uVar1) {
      if (DAT_0042beec < uVar1) {
        if (DAT_0042bf04 < uVar1) {
          if (uVar1 == DAT_0042bf14) {
            if (in_stack_00000004 == DAT_0042bf18) {
              return;
            }
          }
          else if ((uVar1 == DAT_0042bf1c) && (in_stack_00000004 == DAT_0042bf20)) {
            return;
          }
        }
        else if (uVar1 == DAT_0042bf08) {
          if (in_stack_00000004 == DAT_0042bf0c) {
            if (*in_stack_00000008 != '\0') {
              return;
            }
            return;
          }
        }
        else if ((uVar1 == DAT_0042bf04) && (in_stack_00000004 == DAT_0042bf10)) {
          return;
        }
      }
      else if (uVar1 == DAT_0042bef0) {
        if (in_stack_00000004 == DAT_0042bef4) {
          FUN_0008b890();
          return;
        }
      }
      else if (uVar1 == DAT_0042bef8) {
        if (in_stack_00000004 == DAT_0042befc) {
          return;
        }
      }
      else if ((uVar1 == DAT_0042beec) && (in_stack_00000004 == DAT_0042bf00)) {
        return;
      }
    }
    else if (DAT_0042bec0 < uVar1) {
      if (uVar1 == DAT_0042bed8) {
        if (in_stack_00000004 == DAT_0042bedc) {
          return;
        }
      }
      else if (uVar1 == DAT_0042bee0) {
        if (in_stack_00000004 == DAT_0042bee4) {
          FUN_0008b890();
          return;
        }
      }
      else if ((uVar1 == DAT_0042bebc) && (in_stack_00000004 == DAT_0042bee8)) {
        return;
      }
    }
    else if (uVar1 == DAT_0042bec4) {
      if (in_stack_00000004 == DAT_0042bec8) {
        FUN_000b66a4();
        return;
      }
    }
    else if (uVar1 == DAT_0042becc) {
      if (in_stack_00000004 == DAT_0042bed0) {
        return;
      }
    }
    else if ((uVar1 == DAT_0042bec0) && (in_stack_00000004 == DAT_0042bed4)) {
      return;
    }
  }
  k3c_internal_pkg_logger_Debugf();
  return;
}



/* k3c/internal/pkg/util/cast.ForceInt @ 0042bf28 (size 472) */

void k3c_internal_pkg_util_cast_ForceInt(void)

{
  int unaff_r10;
  uint in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  char local_40;
  undefined *local_20 [2];
  undefined *local_18;
  undefined *local_10;
  undefined *local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (0 < in_stack_00000008 || in_stack_00000008 == 0 && 0x7fffffff < in_stack_00000004) {
    FUN_0001f564();
    if (local_40 == '\0') {
      FUN_0008f6c0();
      k3c_internal_pkg_logger_Debugf();
    }
    else {
      FUN_00099f68();
      FUN_00078304();
      FUN_0009def4(0,local_20);
      FUN_0008f6c0();
      local_20[0] = PTR_DAT_0042c104;
      FUN_0008f77c();
      local_18 = PTR_DAT_0042c108;
      FUN_00020ce0();
      local_10 = PTR_DAT_0042c10c;
      FUN_0008f77c();
      local_8 = PTR_DAT_0042c108;
      k3c_internal_pkg_logger_Debugf();
    }
  }
  return;
}



