// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/common/utils/file   functions: 3
/* k3c/common/utils/file.GetBytes @ 0042d454 (size 96) */

void k3c_common_utils_file_GetBytes(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0012e1dc();
  return;
}



/* k3c/common/utils/file.PathExists @ 0042d4b4 (size 204) */

void k3c_common_utils_file_PathExists(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00132cc8();
  if (local_10 != 0) {
    FUN_0012ae4c();
    if ((char)local_10 != '\0') {
      return;
    }
    return;
  }
  return;
}



/* k3c/common/utils/file.DeleteBackFileNameWhileMore @ 0042d58c (size 1168) */

void k3c_common_utils_file_DeleteBackFileNameWhileMore(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint extraout_r3;
  int iVar11;
  code *pcVar12;
  int unaff_r10;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  undefined1 uVar14;
  
code_r0x0042d58c:
  if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x24)) {
    puVar13 = (undefined1 *)((int)register0x00000054 + -0xa4);
    *(undefined4 *)((int)register0x00000054 + -0xa4) = unaff_lr;
    uVar5 = *(uint *)((int)register0x00000054 + 8);
    iVar11 = *(int *)((int)register0x00000054 + 4);
    uVar8 = uVar5;
    do {
      uVar3 = uVar8;
      uVar8 = uVar3 - 1;
      if ((int)uVar8 < 0) break;
      uVar14 = uVar5 == uVar8;
      if (uVar5 <= uVar8) goto LAB_0042da00;
    } while (*(char *)(iVar11 + uVar8) != '/');
    uVar14 = uVar5 == uVar3;
    if (uVar3 <= uVar5) {
      uVar6 = uVar3 & (int)(1 - (uVar5 - uVar8)) >> 0x1f;
      iVar4 = iVar11;
      if (uVar8 == 0xffffffff) {
        uVar3 = 2;
        iVar4 = DAT_0042da20;
      }
      *(uint *)((int)register0x00000054 + -0x6c) = uVar3;
      *(int *)((int)register0x00000054 + -0x4c) = iVar4;
      *(uint *)((int)register0x00000054 + -0xa0) = iVar11 + uVar6;
      *(uint *)((int)register0x00000054 + -0x9c) = (uVar5 - uVar8) + -1;
      *(undefined4 *)((int)register0x00000054 + -0x98) = DAT_0042da24;
      *(undefined4 *)((int)register0x00000054 + -0x94) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x90) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 0xffffffff;
      FUN_0014f168();
      uVar14 = *(int *)((int)register0x00000054 + -0x84) == 0;
      if (!(bool)uVar14) {
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             **(undefined4 **)((int)register0x00000054 + -0x88);
        *(undefined4 *)((int)register0x00000054 + -0x74) =
             (*(undefined4 **)((int)register0x00000054 + -0x88))[1];
        *(undefined4 *)((int)register0x00000054 + -0xa0) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined4 *)((int)register0x00000054 + -0x9c) =
             *(undefined4 *)((int)register0x00000054 + -0x6c);
        FUN_003cd144();
        if (*(int *)((int)register0x00000054 + -0x8c) != 0) {
          *(int *)((int)register0x00000054 + 0x18) = *(int *)((int)register0x00000054 + -0x8c);
          *(undefined4 *)((int)register0x00000054 + 0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x88);
          return;
        }
        iVar11 = *(int *)((int)register0x00000054 + -0x98);
        *(int *)((int)register0x00000054 + -0x58) = iVar11;
        iVar4 = *(int *)((int)register0x00000054 + -0x94);
        *(int *)((int)register0x00000054 + -0x78) = iVar4;
        iVar7 = 0;
        iVar9 = 0;
        do {
          if (iVar4 <= iVar7) {
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
            return;
          }
          *(int *)((int)register0x00000054 + -0x60) = iVar7;
          *(int *)((int)register0x00000054 + -0x68) = iVar9;
          iVar4 = *(int *)(iVar11 + iVar7 * 8);
          *(int *)((int)register0x00000054 + -0x70) = iVar4;
          uVar10 = *(undefined4 *)(iVar11 + iVar7 * 8 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x50) = uVar10;
          pcVar12 = *(code **)(iVar4 + 0x18);
          *(undefined4 *)((int)register0x00000054 + -0xa0) = uVar10;
          (*pcVar12)();
          *(undefined4 *)((int)register0x00000054 + -0x7c) =
               *(undefined4 *)((int)register0x00000054 + -0x98);
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x9c);
          FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x74);
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          *(undefined4 *)((int)register0x00000054 + -0xc) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_0042da24;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined1 **)((int)register0x00000054 + -0xa0) =
               (undefined1 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x9c) = 3;
          *(undefined4 *)((int)register0x00000054 + -0x98) = 3;
          *(undefined4 *)((int)register0x00000054 + -0x94) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x90) = 0;
          FUN_0014f8fc();
          iVar11 = *(int *)((int)register0x00000054 + -0x88);
          uVar5 = *(uint *)((int)register0x00000054 + -0x7c);
          if ((int)uVar5 < iVar11) {
            cVar2 = '\0';
          }
          else {
            uVar8 = uVar5 - iVar11;
            uVar14 = uVar5 == uVar8;
            if (uVar5 < uVar8) goto LAB_0042d9e8;
            iVar4 = uVar5 - uVar8;
            if (iVar11 == iVar4) {
              *(uint *)((int)register0x00000054 + -0xa0) =
                   (uVar8 & -iVar4 >> 0x1f) + *(int *)((int)register0x00000054 + -0x5c);
              *(undefined4 *)((int)register0x00000054 + -0x9c) =
                   *(undefined4 *)((int)register0x00000054 + -0x8c);
              *(int *)((int)register0x00000054 + -0x98) = iVar4;
              FUN_00018250();
              cVar2 = *(char *)((int)register0x00000054 + -0x94);
            }
            else {
              cVar2 = '\0';
            }
          }
          if (cVar2 == '\0') {
            FUN_0009def4(0,(undefined1 *)((int)register0x00000054 + -0x38));
            *(undefined4 *)((int)register0x00000054 + -0x34) =
                 *(undefined4 *)((int)register0x00000054 + -0x74);
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            *(undefined4 *)((int)register0x00000054 + -0x2c) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0042da24;
            *(undefined4 *)((int)register0x00000054 + -0x24) =
                 *(undefined4 *)((int)register0x00000054 + 0x10);
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x1c) = 4;
            *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0042da28;
            *(undefined1 **)((int)register0x00000054 + -0xa0) =
                 (undefined1 *)((int)register0x00000054 + -0x38);
            *(undefined4 *)((int)register0x00000054 + -0x9c) = 4;
            *(undefined4 *)((int)register0x00000054 + -0x98) = 4;
            *(undefined4 *)((int)register0x00000054 + -0x94) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x90) = 0;
            FUN_0014f8fc();
            iVar11 = *(int *)((int)register0x00000054 + -0x88);
            uVar5 = *(uint *)((int)register0x00000054 + -0x7c);
            if ((int)uVar5 < iVar11) {
              cVar2 = '\0';
            }
            else {
              uVar8 = uVar5 - iVar11;
              uVar14 = uVar5 == uVar8;
              if (uVar5 < uVar8) goto LAB_0042d9e4;
              iVar4 = uVar5 - uVar8;
              if (iVar11 == iVar4) {
                *(uint *)((int)register0x00000054 + -0xa0) =
                     (uVar8 & -iVar4 >> 0x1f) + *(int *)((int)register0x00000054 + -0x5c);
                *(undefined4 *)((int)register0x00000054 + -0x9c) =
                     *(undefined4 *)((int)register0x00000054 + -0x8c);
                *(int *)((int)register0x00000054 + -0x98) = iVar4;
                FUN_00018250();
                cVar2 = *(char *)((int)register0x00000054 + -0x94);
              }
              else {
                cVar2 = '\0';
              }
            }
          }
          else {
            cVar2 = '\x01';
          }
          if (cVar2 == '\0') {
            pcVar12 = *(code **)(*(int *)((int)register0x00000054 + -0x70) + 0x14);
            *(undefined4 *)((int)register0x00000054 + -0xa0) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            (*pcVar12)();
            if ((*(uint *)((int)register0x00000054 + -0x9c) & DAT_0042da2c) == 0) {
              *(undefined4 *)((int)register0x00000054 + -0xa0) =
                   *(undefined4 *)((int)register0x00000054 + -0x5c);
              *(undefined4 *)((int)register0x00000054 + -0x9c) =
                   *(undefined4 *)((int)register0x00000054 + -0x7c);
              *(undefined4 *)((int)register0x00000054 + -0x98) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              *(undefined4 *)((int)register0x00000054 + -0x94) =
                   *(undefined4 *)((int)register0x00000054 + -0x74);
              internal_stringslite_Index();
              bVar1 = false;
              if (*(int *)((int)register0x00000054 + -0x90) != -1) {
                bVar1 = true;
              }
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              iVar9 = *(int *)((int)register0x00000054 + -0x68) + 1;
              if (*(int *)((int)register0x00000054 + 0x14) < iVar9) {
                *(int *)((int)register0x00000054 + -100) = iVar9;
                FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x48));
                *(undefined4 *)((int)register0x00000054 + -0x44) =
                     *(undefined4 *)((int)register0x00000054 + -0x6c);
                *(undefined4 *)((int)register0x00000054 + -0x48) =
                     *(undefined4 *)((int)register0x00000054 + -0x4c);
                *(undefined4 *)((int)register0x00000054 + -0x3c) =
                     *(undefined4 *)((int)register0x00000054 + -0x7c);
                *(undefined4 *)((int)register0x00000054 + -0x40) =
                     *(undefined4 *)((int)register0x00000054 + -0x5c);
                *(undefined1 **)((int)register0x00000054 + -0xa0) =
                     (undefined1 *)((int)register0x00000054 + -0x48);
                *(undefined4 *)((int)register0x00000054 + -0x9c) = 2;
                *(undefined4 *)((int)register0x00000054 + -0x98) = 2;
                FUN_0028054c();
                *(undefined4 *)((int)register0x00000054 + -0xa0) =
                     *(undefined4 *)((int)register0x00000054 + -0x94);
                *(undefined4 *)((int)register0x00000054 + -0x9c) =
                     *(undefined4 *)((int)register0x00000054 + -0x90);
                FUN_0012ffc0();
                iVar9 = *(int *)((int)register0x00000054 + -100);
              }
            }
            else {
              iVar9 = *(int *)((int)register0x00000054 + -0x68);
            }
          }
          else {
            iVar9 = *(int *)((int)register0x00000054 + -0x68);
          }
          iVar7 = *(int *)((int)register0x00000054 + -0x60) + 1;
          iVar11 = *(int *)((int)register0x00000054 + -0x58);
          iVar4 = *(int *)((int)register0x00000054 + -0x78);
        } while( true );
      }
      goto LAB_0042d9f0;
    }
    goto LAB_0042d9fc;
  }
  goto LAB_0042da10;
LAB_0042d9e4:
  FUN_0009dc34();
  uVar8 = extraout_r2;
LAB_0042d9e8:
  FUN_0009dc34(uVar8);
LAB_0042d9f0:
  param_1 = FUN_0009dbd4(0,0);
LAB_0042d9fc:
  FUN_0009dbf4(param_1);
  uVar5 = extraout_r2_00;
  uVar8 = extraout_r3;
LAB_0042da00:
  param_1 = FUN_0009dbd4(uVar8,uVar5);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xa4);
  if ((bool)uVar14) {
    register0x00000054 = (BADSPACEBASE *)puVar13;
  }
LAB_0042da10:
  unaff_lr = 0x42da18;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x0042d58c;
}



