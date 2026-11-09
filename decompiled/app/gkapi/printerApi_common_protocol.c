// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/protocol   functions: 3
/* printerApi/common/protocol.(*encryptXOR).Encrypt @ 003eb9bc (size 524) */

void printerApi_common_protocol___encryptXOR__Encrypt(undefined4 param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int unaff_r10;
  undefined1 *puVar15;
  undefined4 unaff_lr;
  undefined1 uVar16;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar15 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_003ebbcc;
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_000933e8();
      iVar3 = *(int *)((int)register0x00000054 + -0x10);
      *(int *)((int)register0x00000054 + -4) = iVar3;
      piVar6 = *(int **)((int)register0x00000054 + 4);
      uVar7 = piVar6[1];
      *(uint *)((int)register0x00000054 + -8) = uVar7;
      iVar9 = *(int *)((int)register0x00000054 + 0xc);
      iVar10 = *(int *)((int)register0x00000054 + 8);
      uVar11 = 0;
LAB_003eba0c:
      if (iVar9 <= (int)uVar11) {
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 0;
        *(int *)((int)register0x00000054 + -0x18) = iVar3;
        *(int *)((int)register0x00000054 + -0x14) = iVar9;
        FUN_00093e34();
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        return;
      }
      iVar12 = uVar11 + ((int)((int)((ulonglong)((longlong)(int)uVar11 * (longlong)DAT_003ebbd0) >>
                                    0x20) + uVar11) >> 2) * -5;
      if (iVar12 == 0) {
        *(undefined1 *)(iVar3 + uVar11) = *(undefined1 *)(iVar10 + uVar11);
LAB_003eba08:
        uVar11 = uVar11 + 1;
        goto LAB_003eba0c;
      }
      uVar1 = (int)uVar7 >> 0x1f;
      if (iVar12 - 1U < 2) {
        bVar2 = *(byte *)(iVar10 + uVar11);
        uVar16 = 1;
        if (uVar7 == 0) goto LAB_003ebbb4;
        uVar13 = piVar6[1];
        uVar4 = (int)uVar11 >> 0x1f;
        FUN_00099924((uVar7 ^ uVar1) - uVar1,(uVar11 ^ uVar4) - uVar4);
        uVar4 = (extraout_r1 ^ uVar4) - uVar4;
        uVar16 = uVar13 == uVar4;
        if (uVar13 <= uVar4) goto LAB_003ebbac;
        piVar6 = *(int **)((int)register0x00000054 + 4);
        bVar8 = *(byte *)(*piVar6 + uVar4) ^ bVar2;
        if (*DAT_003ebbd4 == bVar8) {
          iVar3 = *(int *)((int)register0x00000054 + -4);
          *(byte *)(iVar3 + uVar11) = bVar2;
        }
        else {
          iVar3 = *(int *)((int)register0x00000054 + -4);
          *(byte *)(iVar3 + uVar11) = bVar8;
        }
        uVar7 = *(uint *)((int)register0x00000054 + -8);
        iVar9 = *(int *)((int)register0x00000054 + 0xc);
        goto LAB_003eba08;
      }
      if (1 < iVar12 - 3U) goto LAB_003eba08;
      bVar2 = *(byte *)(iVar10 + uVar11);
      uVar13 = (uint)bVar2;
      uVar4 = uVar11 + (int)uVar11 / 2;
      uVar16 = uVar7 == 0;
      if (!(bool)uVar16) {
        uVar14 = piVar6[1];
        uVar5 = (int)uVar4 >> 0x1f;
        FUN_00099924((uVar7 ^ uVar1) - uVar1,(uVar4 ^ uVar5) - uVar5);
        uVar5 = (extraout_r1_00 ^ uVar5) - uVar5;
        uVar16 = uVar14 == uVar5;
        if (uVar5 < uVar14) {
          piVar6 = *(int **)((int)register0x00000054 + 4);
          bVar8 = *(byte *)(*piVar6 + uVar5) ^ bVar2;
          if (*DAT_003ebbd4 == bVar8) {
            iVar3 = *(int *)((int)register0x00000054 + -4);
            *(byte *)(iVar3 + uVar11) = bVar2;
          }
          else {
            iVar3 = *(int *)((int)register0x00000054 + -4);
            *(byte *)(iVar3 + uVar11) = bVar8;
          }
          uVar7 = *(uint *)((int)register0x00000054 + -8);
          iVar9 = *(int *)((int)register0x00000054 + 0xc);
          goto LAB_003eba08;
        }
        FUN_000986f8(uVar5,uVar14);
      }
      uVar4 = FUN_0004f198();
LAB_003ebbac:
      FUN_000986f8(uVar4,uVar13);
LAB_003ebbb4:
      param_1 = FUN_0004f198();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if ((bool)uVar16) {
        register0x00000054 = (BADSPACEBASE *)puVar15;
      }
    }
    unaff_lr = 0x3ebbc4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/protocol.Md5 @ 003ebbd8 (size 504) */

void printerApi_common_protocol_Md5(undefined4 param_1)

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
      *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_003ebdd4;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = DAT_003ebdd8;
      *(undefined4 *)((int)register0x00000054 + -0x58) = DAT_003ebddc;
      *(undefined4 *)((int)register0x00000054 + -0x54) = DAT_003ebde0;
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
      *(undefined4 *)((int)register0x00000054 + -0x104) = DAT_003ebde4;
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
      *(undefined4 *)((int)register0x00000054 + -0x114) = DAT_003ebde4;
      *(int *)((int)register0x00000054 + -0x110) = iVar4;
      *(int *)((int)register0x00000054 + -0x10c) = iVar4;
      FUN_000933e8();
      iVar9 = *(int *)((int)register0x00000054 + -0x108);
      iVar10 = *(int *)((int)register0x00000054 + -4);
      iVar11 = *(int *)((int)register0x00000054 + -0xc4);
      iVar4 = 0;
      uVar7 = 0;
      while( true ) {
        iVar2 = DAT_003ebde8;
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
        if ((uint)(iVar11 * 2) <= uVar7) goto LAB_003ebdb4;
        *(undefined1 *)(iVar9 + uVar7) = *(undefined1 *)(DAT_003ebde8 + (uint)(bVar1 >> 4));
        uVar12 = uVar7 + 1;
        uVar14 = uVar12 == iVar11 * 2;
        if ((uint)(iVar11 * 2) <= uVar12) break;
        *(undefined1 *)(iVar9 + uVar12) = *(undefined1 *)(iVar2 + (bVar1 & 0xf));
        iVar4 = iVar4 + 1;
        uVar7 = uVar7 + 2;
      }
      FUN_000986f8(uVar12,*(undefined4 *)((int)register0x00000054 + -0xc0));
      uVar7 = extraout_r1;
LAB_003ebdb4:
      param_1 = FUN_000986f8(uVar7,*(undefined4 *)((int)register0x00000054 + -0xc0));
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x118);
      if ((bool)uVar14) {
        register0x00000054 = (BADSPACEBASE *)puVar13;
      }
    }
    unaff_lr = 0x3ebdcc;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/protocol.Encrypt @ 003ebdec (size 604) */

void printerApi_common_protocol_Encrypt(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x78);
      *(undefined4 *)((int)register0x00000054 + -0x78) = unaff_lr;
      iVar1 = *(int *)PTR_DAT_003ec04c;
      *(int *)((int)register0x00000054 + -0x24) = *(int *)((int)register0x00000054 + 8) + iVar1;
      iVar4 = *(int *)PTR_DAT_003ec050;
      *(undefined **)((int)register0x00000054 + -0x74) = PTR_DAT_003ec054;
      *(undefined4 *)((int)register0x00000054 + -0x70) = 0;
      *(int *)((int)register0x00000054 + -0x6c) =
           *(int *)((int)register0x00000054 + 8) + iVar1 + iVar4 + 4;
      FUN_000933e8();
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x68);
      iVar1 = *(int *)PTR_DAT_003ec050;
      iVar4 = *(int *)((int)register0x00000054 + -0x24);
      uVar5 = *(uint *)((int)register0x00000054 + 8);
      *(uint *)((int)register0x00000054 + -0x28) = uVar5 >> 0x18;
      *(uint *)((int)register0x00000054 + -0x2c) = uVar5 >> 0x10;
      *(uint *)((int)register0x00000054 + -0x30) = uVar5 >> 8;
      FUN_00098a24(0,(undefined1 *)((int)register0x00000054 + -0x14));
      *(int *)((int)register0x00000054 + -0xc) = iVar4 + iVar1 + 4;
      *(undefined4 *)((int)register0x00000054 + -0x14) = uVar2;
      uVar2 = *(undefined4 *)PTR_DAT_003ec058;
      uVar6 = *(undefined4 *)PTR_DAT_003ec04c;
      uVar7 = *(undefined4 *)PTR_DAT_003ec05c;
      *(undefined1 **)((int)register0x00000054 + -0x74) =
           (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x70) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0x68) = uVar7;
      FUN_0014ea28();
      *(undefined1 *)((int)register0x00000054 + -0x58) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x57) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x56) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x55) = 0;
      *(char *)((int)register0x00000054 + -0x58) =
           (char)*(undefined4 *)((int)register0x00000054 + -0x28);
      *(char *)((int)register0x00000054 + -0x57) =
           (char)*(undefined4 *)((int)register0x00000054 + -0x2c);
      *(char *)((int)register0x00000054 + -0x56) =
           (char)*(undefined4 *)((int)register0x00000054 + -0x30);
      *(char *)((int)register0x00000054 + -0x55) =
           (char)*(undefined4 *)((int)register0x00000054 + 8);
      *(undefined1 **)((int)register0x00000054 + -0x74) =
           (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined1 **)((int)register0x00000054 + -0x70) =
           (undefined1 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x6c) = 4;
      *(undefined4 *)((int)register0x00000054 + -0x68) = 4;
      FUN_0014ea28();
      *(undefined4 *)((int)register0x00000054 + -0x74) = *(undefined4 *)PTR_DAT_003ec050;
      *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_003ec060;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x3e;
      printerApi_common_utils_str_RandomStringWithCharset();
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + -100);
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x70) =
           *(undefined4 *)((int)register0x00000054 + -100);
      uVar2 = printerApi_common_protocol_Md5();
      uVar9 = *(uint *)((int)register0x00000054 + -0x68) == 0x10;
      if (0xf < *(uint *)((int)register0x00000054 + -0x68)) {
        *(undefined4 *)((int)register0x00000054 + -0x18) = 8;
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + -0x6c) + 8;
        *(undefined1 **)((int)register0x00000054 + -0x74) =
             (undefined1 *)((int)register0x00000054 + -0x54);
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        FUN_00093e34();
        *(undefined1 **)((int)register0x00000054 + -0x74) =
             (undefined1 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -100);
        printerApi_common_protocol___encryptXOR__Encrypt();
        *(undefined1 **)((int)register0x00000054 + -0x74) =
             (undefined1 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -100);
        FUN_0014eb14();
        *(undefined1 **)((int)register0x00000054 + -0x74) =
             (undefined1 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        FUN_0014eb14();
        uVar3 = *(uint *)((int)register0x00000054 + -0x10);
        uVar5 = *(uint *)((int)register0x00000054 + -8);
        uVar9 = uVar3 == uVar5;
        if (uVar5 <= uVar3) {
          *(uint *)((int)register0x00000054 + 0x10) =
               *(int *)((int)register0x00000054 + -0x14) +
               (uVar5 & (int)-(*(int *)((int)register0x00000054 + -0xc) - uVar5) >> 0x1f);
          *(uint *)((int)register0x00000054 + 0x14) = uVar3 - uVar5;
          *(uint *)((int)register0x00000054 + 0x18) =
               *(int *)((int)register0x00000054 + -0xc) - uVar5;
          *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
          return;
        }
        uVar2 = FUN_00098758();
      }
      param_1 = FUN_00098718(uVar2,0x10);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x78);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x3ec044;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



