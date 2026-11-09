// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/crypto   functions: 4
/* printerApi/common/crypto.NewAesCBC @ 0042f404 (size 140) */

void printerApi_common_crypto_NewAesCBC(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 *local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_8[1] = in_stack_00000008;
  local_8[2] = in_stack_0000000c;
  if (*DAT_0042f498 != 0) {
    local_8 = (undefined4 *)FUN_00098688();
    *unaff_r8 = in_stack_00000004;
    unaff_r8[1] = in_stack_00000010;
  }
  *local_8 = in_stack_00000004;
  local_8[4] = in_stack_00000014;
  local_8[5] = in_stack_00000018;
  local_8[3] = in_stack_00000010;
  return;
}



/* printerApi/common/crypto.(*AesCBC).Encrypt @ 0042f49c (size 500) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_crypto___AesCBC__Encrypt(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 *local_3c;
  int local_34;
  int local_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (in_stack_0000000c != 0) {
    FUN_001e6d64();
    if (local_2c != 0) {
      return;
    }
    (**(code **)(local_34 + 0xc))();
    printerApi_common_crypto___AesCBC__pad();
    FUN_001e33f4();
    FUN_000933e8();
    (*_DAT_00000010)();
    FUN_001686a8();
    return;
  }
  FUN_0001eed8();
  local_3c[1] = 10;
  *local_3c = PTR_DAT_0042f6a0;
  return;
}



/* printerApi/common/crypto.(*AesCBC).pad @ 0042f6a8 (size 284) */

void printerApi_common_crypto___AesCBC__pad(undefined4 param_1)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  bool bVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = unaff_lr;
      uVar2 = *(uint *)((int)register0x00000054 + 0x14);
      bVar8 = uVar2 == 0;
      if (!bVar8) {
        uVar5 = (int)*(uint *)((int)register0x00000054 + 0xc) >> 0x1f;
        FUN_00099924((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f),
                     (*(uint *)((int)register0x00000054 + 0xc) ^ uVar5) - uVar5);
        iVar3 = *(int *)((int)register0x00000054 + 0x14) - ((extraout_r1 ^ uVar5) - uVar5);
        *(char *)((int)register0x00000054 + -0x15) = (char)iVar3;
        *(undefined1 **)((int)register0x00000054 + -0x38) =
             (undefined1 *)((int)register0x00000054 + -0x15);
        *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 1;
        *(int *)((int)register0x00000054 + -0x2c) = iVar3;
        FUN_00152e9c();
        iVar3 = *(int *)((int)register0x00000054 + -0x24);
        iVar4 = *(int *)((int)register0x00000054 + 0xc);
        uVar5 = iVar4 + iVar3;
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x28);
        uVar2 = *(uint *)((int)register0x00000054 + 0x10);
        if (uVar2 < uVar5) {
          *(undefined4 *)((int)register0x00000054 + -8) = uVar6;
          *(int *)((int)register0x00000054 + -0x14) = iVar3;
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(uint *)((int)register0x00000054 + -0x34) = uVar5;
          *(uint *)((int)register0x00000054 + -0x30) = uVar2;
          *(int *)((int)register0x00000054 + -0x2c) = iVar3;
          *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_0042f7c8;
          FUN_00093524();
          iVar1 = *(int *)((int)register0x00000054 + -0x24);
          uVar5 = *(uint *)((int)register0x00000054 + -0x20);
          uVar2 = *(uint *)((int)register0x00000054 + -0x1c);
          iVar3 = *(int *)((int)register0x00000054 + -0x14);
          iVar4 = *(int *)((int)register0x00000054 + 0xc);
          uVar6 = *(undefined4 *)((int)register0x00000054 + -8);
        }
        else {
          iVar1 = *(int *)((int)register0x00000054 + 8);
        }
        *(int *)((int)register0x00000054 + -4) = iVar1;
        *(uint *)((int)register0x00000054 + -0xc) = uVar5;
        *(uint *)((int)register0x00000054 + -0x10) = uVar2;
        *(int *)((int)register0x00000054 + -0x38) = iVar1 + iVar4;
        *(undefined4 *)((int)register0x00000054 + -0x34) = uVar6;
        *(int *)((int)register0x00000054 + -0x30) = iVar3;
        FUN_00098ec8();
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        return;
      }
      param_1 = FUN_0004f198();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x3c);
      if (bVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x42f7c0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/crypto.Md5 @ 0042f7cc (size 504) */

void printerApi_common_crypto_Md5(undefined4 param_1)

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
      *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_0042f9c8;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = DAT_0042f9cc;
      *(undefined4 *)((int)register0x00000054 + -0x58) = DAT_0042f9d0;
      *(undefined4 *)((int)register0x00000054 + -0x54) = DAT_0042f9d4;
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
      *(undefined4 *)((int)register0x00000054 + -0x104) = DAT_0042f9d8;
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
      *(undefined4 *)((int)register0x00000054 + -0x114) = DAT_0042f9d8;
      *(int *)((int)register0x00000054 + -0x110) = iVar4;
      *(int *)((int)register0x00000054 + -0x10c) = iVar4;
      FUN_000933e8();
      iVar9 = *(int *)((int)register0x00000054 + -0x108);
      iVar10 = *(int *)((int)register0x00000054 + -4);
      iVar11 = *(int *)((int)register0x00000054 + -0xc4);
      iVar4 = 0;
      uVar7 = 0;
      while( true ) {
        iVar2 = DAT_0042f9dc;
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
        if ((uint)(iVar11 * 2) <= uVar7) goto LAB_0042f9a8;
        *(undefined1 *)(iVar9 + uVar7) = *(undefined1 *)(DAT_0042f9dc + (uint)(bVar1 >> 4));
        uVar12 = uVar7 + 1;
        uVar14 = uVar12 == iVar11 * 2;
        if ((uint)(iVar11 * 2) <= uVar12) break;
        *(undefined1 *)(iVar9 + uVar12) = *(undefined1 *)(iVar2 + (bVar1 & 0xf));
        iVar4 = iVar4 + 1;
        uVar7 = uVar7 + 2;
      }
      FUN_000986f8(uVar12,*(undefined4 *)((int)register0x00000054 + -0xc0));
      uVar7 = extraout_r1;
LAB_0042f9a8:
      param_1 = FUN_000986f8(uVar7,*(undefined4 *)((int)register0x00000054 + -0xc0));
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x118);
      if ((bool)uVar14) {
        register0x00000054 = (BADSPACEBASE *)puVar13;
      }
    }
    unaff_lr = 0x42f9c0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



