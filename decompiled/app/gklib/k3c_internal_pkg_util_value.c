// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/util/value   functions: 3
/* k3c/internal/pkg/util/value.init @ 0042c118 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_util_value_init(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x42c150;
    FUN_0009bf64();
  }
  *_UNK_0042c15c = CONCAT44(_UNK_0042c158,1);
                    /* WARNING: Could not recover jumptable at 0x0042c144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/util/value.IsNone @ 0042c160 (size 568) */

/* WARNING: Removing unreachable block (ram,0x0042c30c) */
/* WARNING: Removing unreachable block (ram,0x0042c210) */

void k3c_internal_pkg_util_value_IsNone(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  bool bVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      if (iVar2 == 0) {
        *(undefined1 *)((int)register0x00000054 + 0xc) = 1;
                    /* WARNING: Could not recover jumptable at 0x0042c34c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      if (*(int *)(iVar2 + 8) == DAT_0042c39c) {
        if (iVar2 == DAT_0042c3a0) {
          iVar2 = (*(undefined4 **)((int)register0x00000054 + 8))[1];
          if (*DAT_0042c3a4 == iVar2) {
            uVar6 = *DAT_0042c3a8;
            *(undefined4 *)((int)register0x00000054 + -0x24) =
                 **(undefined4 **)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x20) = uVar6;
            *(int *)((int)register0x00000054 + -0x1c) = iVar2;
            FUN_00018250();
            uVar9 = *(undefined1 *)((int)register0x00000054 + -0x18);
          }
          else {
            uVar9 = 0;
          }
          *(undefined1 *)((int)register0x00000054 + 0xc) = uVar9;
          return;
        }
      }
      else if ((*(int *)(iVar2 + 8) == DAT_0042c3ac) && (iVar2 == DAT_0042c3b0)) {
        *(undefined1 *)((int)register0x00000054 + 0xc) = 0;
                    /* WARNING: Could not recover jumptable at 0x0042c218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      *(int *)((int)register0x00000054 + -8) = iVar2;
      *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + 8);
      iVar7 = *(int *)((int)register0x00000054 + -8);
      iVar2 = DAT_0042c3b4;
      if (iVar7 == 0) {
        iVar7 = 0;
        iVar2 = 0;
      }
      pcVar3 = *(code **)(iVar2 + 0x54);
      *(int *)((int)register0x00000054 + -0x24) = iVar7;
      (*pcVar3)();
      if ((5 < *(int *)((int)register0x00000054 + -0x20) - 0x12U) &&
         (*(int *)((int)register0x00000054 + -0x20) != 0x1a)) {
        *(undefined1 *)((int)register0x00000054 + 0xc) = 0;
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0xc) = *(undefined4 *)((int)register0x00000054 + 8)
      ;
      if (*(int *)((int)register0x00000054 + -0x10) == 0) {
        uVar5 = 0;
        bVar10 = false;
        puVar4 = (undefined4 *)0x0;
      }
      else {
        bVar1 = *(byte *)(*(int *)((int)register0x00000054 + -0x10) + 0xf);
        uVar5 = bVar1 & 0x1f;
        bVar10 = (bVar1 & 0x20) == 0;
        puVar4 = *(undefined4 **)((int)register0x00000054 + -0xc);
      }
      *(uint *)((int)register0x00000054 + -0x14) = uVar5;
      if (uVar5 < 0x15) {
        if (uVar5 - 0x12 < 2) goto LAB_0042c314;
        if (uVar5 == 0x14) {
LAB_0042c2e4:
          puVar4 = (undefined4 *)*puVar4;
          goto LAB_0042c330;
        }
      }
      else {
        if (uVar5 < 0x17) {
LAB_0042c314:
          if (bVar10) {
            puVar4 = (undefined4 *)*puVar4;
          }
LAB_0042c330:
          *(bool *)((int)register0x00000054 + 0xc) = puVar4 == (undefined4 *)0x0;
          return;
        }
        if (uVar5 == 0x17) goto LAB_0042c2e4;
        if (uVar5 == 0x1a) goto LAB_0042c314;
      }
      uVar9 = 0;
      *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0042c3b8;
      FUN_00022cf8();
      puVar4 = *(undefined4 **)((int)register0x00000054 + -0x20);
      puVar4[1] = 0x13;
      *puVar4 = DAT_0042c3bc;
      puVar4[2] = *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0042c3c0;
      *(undefined4 **)((int)register0x00000054 + -0x20) = puVar4;
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x42c394;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/util/value.False @ 0042c3c4 (size 1384) */

/* WARNING: Type propagation algorithm not settling */

void k3c_internal_pkg_util_value_False(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double *pdVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint extraout_r1;
  uint uVar11;
  int unaff_r10;
  undefined1 *puVar12;
  undefined4 unaff_lr;
  undefined1 uVar13;
  double dVar14;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar12 = (undefined1 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = unaff_lr;
      puVar3 = *(undefined **)((int)register0x00000054 + 4);
      if (puVar3 == (undefined *)0x0) goto LAB_0042c864;
      uVar9 = *(uint *)(puVar3 + 8);
      if (DAT_0042c930 < uVar9) {
        if (DAT_0042c968 < uVar9) {
          if (DAT_0042c980 < uVar9) {
            puVar1 = DAT_0042c994;
            puVar2 = PTR_DAT_0042c99c;
            uVar11 = DAT_0042c998;
            if (uVar9 != DAT_0042c990) goto joined_r0x0042c754;
            goto joined_r0x0042c760;
          }
          puVar2 = DAT_0042c98c;
          uVar11 = DAT_0042c980;
          if (uVar9 == DAT_0042c984) {
            if (puVar3 == DAT_0042c988) {
              *(byte *)((int)register0x00000054 + 0xc) =
                   **(byte **)((int)register0x00000054 + 8) ^ 1;
                    /* WARNING: Could not recover jumptable at 0x0042c624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x2c))();
              return;
            }
            goto LAB_0042c864;
          }
joined_r0x0042c630:
          puVar1 = puVar2;
          if (uVar9 != uVar11) goto LAB_0042c864;
          goto joined_r0x0042c63c;
        }
        puVar1 = DAT_0042c970;
        if (uVar9 != DAT_0042c96c) {
          puVar1 = DAT_0042c978;
          puVar2 = DAT_0042c97c;
          uVar11 = DAT_0042c968;
          if (uVar9 == DAT_0042c974) goto joined_r0x0042c760;
          goto joined_r0x0042c630;
        }
joined_r0x0042c51c:
        if (puVar3 != puVar1) goto LAB_0042c864;
        if (puVar3 == (undefined *)0x0) {
          uVar9 = 0;
          pdVar4 = (double *)0x0;
        }
        else {
          *(undefined **)((int)register0x00000054 + -0x18) = puVar3;
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + 8);
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            uVar9 = 0;
            pdVar4 = (double *)0x0;
          }
          else {
            uVar9 = *(byte *)(*(int *)((int)register0x00000054 + -0x18) + 0xf) & 0x1f;
            pdVar4 = *(double **)((int)register0x00000054 + -0x14);
          }
        }
        if (uVar9 == 0xd) {
          dVar14 = (double)*(float *)pdVar4;
          goto LAB_0042c598;
        }
        uVar13 = 0;
        if (uVar9 == 0xe) {
          dVar14 = *pdVar4;
LAB_0042c598:
          *(bool *)((int)register0x00000054 + 0xc) = dVar14 == 0.0;
                    /* WARNING: Could not recover jumptable at 0x0042c5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x2c))();
          return;
        }
      }
      else {
        if (DAT_0042c934 < uVar9) {
          if (DAT_0042c94c < uVar9) {
            puVar1 = DAT_0042c960;
            puVar2 = DAT_0042c964;
            uVar11 = DAT_0042c930;
            if (uVar9 == DAT_0042c95c) goto joined_r0x0042c51c;
joined_r0x0042c754:
            puVar1 = puVar2;
            if (uVar9 != uVar11) goto LAB_0042c864;
          }
          else {
            puVar1 = DAT_0042c954;
            puVar2 = DAT_0042c958;
            uVar11 = DAT_0042c94c;
            if (uVar9 != DAT_0042c950) goto joined_r0x0042c630;
          }
joined_r0x0042c760:
          if (puVar3 != puVar1) goto LAB_0042c864;
          if (puVar3 == (undefined *)0x0) {
            uVar9 = 0;
            puVar7 = (uint *)0x0;
          }
          else {
            *(undefined **)((int)register0x00000054 + -0x10) = puVar3;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            if (*(int *)((int)register0x00000054 + -0x10) == 0) {
              uVar9 = 0;
              puVar7 = (uint *)0x0;
            }
            else {
              uVar9 = *(byte *)(*(int *)((int)register0x00000054 + -0x10) + 0xf) & 0x1f;
              puVar7 = *(uint **)((int)register0x00000054 + -0xc);
            }
          }
          *(uint *)((int)register0x00000054 + -0x1c) = uVar9;
          if (uVar9 < 10) {
            if (uVar9 == 7) {
              uVar9 = *puVar7;
              uVar11 = 0;
LAB_0042c840:
              *(bool *)((int)register0x00000054 + 0xc) = uVar11 == 0 && uVar9 == 0;
                    /* WARNING: Could not recover jumptable at 0x0042c860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x2c))();
              return;
            }
            if (uVar9 == 8) {
              uVar9 = (uint)(byte)*puVar7;
              uVar11 = 0;
              goto LAB_0042c840;
            }
            if (uVar9 == 9) {
              uVar9 = (uint)(ushort)*puVar7;
              uVar11 = 0;
              goto LAB_0042c840;
            }
          }
          else {
            if (uVar9 == 10) {
              uVar9 = *puVar7;
              uVar11 = 0;
              goto LAB_0042c840;
            }
            if (uVar9 == 0xb) {
              uVar9 = *puVar7;
              uVar11 = puVar7[1];
              goto LAB_0042c840;
            }
            if (uVar9 == 0xc) {
              uVar9 = *puVar7;
              uVar11 = 0;
              goto LAB_0042c840;
            }
          }
          uVar13 = 0;
          *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0042c9a0;
          FUN_00022cf8();
          puVar8 = *(undefined4 **)((int)register0x00000054 + -0x24);
          puVar8[1] = 0x12;
          *puVar8 = PTR_DAT_0042c9a4;
          puVar8[2] = *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0042c9a8;
          *(undefined4 **)((int)register0x00000054 + -0x24) = puVar8;
          FUN_00095b00();
        }
        else {
          if (uVar9 == DAT_0042c938) {
            if (puVar3 == DAT_0042c93c) {
              *(bool *)((int)register0x00000054 + 0xc) =
                   *(int *)(*(int *)((int)register0x00000054 + 8) + 4) == 0;
              return;
            }
            goto LAB_0042c864;
          }
          puVar1 = DAT_0042c944;
          puVar2 = DAT_0042c948;
          uVar11 = DAT_0042c934;
          if (uVar9 != DAT_0042c940) goto joined_r0x0042c630;
joined_r0x0042c63c:
          if (puVar3 != puVar1) {
LAB_0042c864:
            *(undefined1 *)((int)register0x00000054 + 0xc) = 0;
            return;
          }
          if (puVar3 == (undefined *)0x0) {
            uVar9 = 0;
            piVar5 = (int *)0x0;
          }
          else {
            *(undefined **)((int)register0x00000054 + -8) = puVar3;
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            if (*(int *)((int)register0x00000054 + -8) == 0) {
              uVar9 = 0;
              piVar5 = (int *)0x0;
            }
            else {
              uVar9 = *(byte *)(*(int *)((int)register0x00000054 + -8) + 0xf) & 0x1f;
              piVar5 = *(int **)((int)register0x00000054 + -4);
            }
          }
          *(uint *)((int)register0x00000054 + -0x1c) = uVar9;
          if (uVar9 < 4) {
            if (uVar9 == 2) {
              iVar6 = *piVar5;
              iVar10 = iVar6 >> 0x1f;
LAB_0042c708:
              *(bool *)((int)register0x00000054 + 0xc) = iVar10 == 0 && iVar6 == 0;
              return;
            }
            uVar13 = 0;
            if (uVar9 == 3) {
              iVar6 = (int)(char)*piVar5;
              iVar10 = iVar6 >> 0x1f;
              goto LAB_0042c708;
            }
          }
          else {
            if (uVar9 == 4) {
              iVar6 = (int)(short)*piVar5;
              iVar10 = iVar6 >> 0x1f;
              goto LAB_0042c708;
            }
            if (uVar9 == 5) {
              iVar6 = *piVar5;
              iVar10 = iVar6 >> 0x1f;
              goto LAB_0042c708;
            }
            uVar13 = 0;
            if (uVar9 == 6) {
              iVar6 = *piVar5;
              iVar10 = piVar5[1];
              goto LAB_0042c708;
            }
          }
        }
        *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0042c9a0;
        FUN_00022cf8();
        puVar8 = *(undefined4 **)((int)register0x00000054 + -0x24);
        puVar8[1] = 0x11;
        *puVar8 = PTR_DAT_0042c9ac;
        puVar8[2] = *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0042c9a8;
        *(undefined4 **)((int)register0x00000054 + -0x24) = puVar8;
        FUN_00095b00();
        uVar9 = extraout_r1;
      }
      *(uint *)((int)register0x00000054 + -0x1c) = uVar9;
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0042c9a0;
      FUN_00022cf8();
      puVar8 = *(undefined4 **)((int)register0x00000054 + -0x24);
      puVar8[1] = 0x13;
      *puVar8 = PTR_DAT_0042c9b0;
      puVar8[2] = *(undefined4 *)((int)register0x00000054 + -0x1c);
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0042c9a8;
      *(undefined4 **)((int)register0x00000054 + -0x24) = puVar8;
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x2c);
      if ((bool)uVar13) {
        register0x00000054 = (BADSPACEBASE *)puVar12;
      }
    }
    unaff_lr = 0x42c928;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



