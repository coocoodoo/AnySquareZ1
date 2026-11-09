// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/common/protocol   functions: 7
/* k3c/common/protocol.init @ 004705b8 (size 356) */

void k3c_common_protocol_init(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined *puStack_50;
  undefined4 *puStack_4c;
  int iStack_48;
  uint uStack_3c;
  int iStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  int iStack_1c;
  undefined1 auStack_18 [20];
  undefined *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  uVar1 = FUN_001160a8();
  uVar1 = FUN_0009e2f0(uVar1,&puStack_50,auStack_18);
  FUN_0009e2f0(uVar1,auStack_18,&uStack_30);
  if ((uStack_2c & 0x80000000) != 0) {
    uVar2 = (uStack_30 & 0x7fffffff) >> 0x1e | (uStack_30 >> 0x1f | uStack_2c << 1) << 1;
    uStack_28 = uVar2 + DAT_00470720;
    iStack_24 = ((uStack_2c & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar2,DAT_00470720);
  }
  uStack_34 = (uint)((ulonglong)DAT_00470724 * (ulonglong)uStack_28);
  iStack_38 = iStack_24 * DAT_00470724 +
              (int)((ulonglong)DAT_00470724 * (ulonglong)uStack_28 >> 0x20);
  uStack_3c = uStack_30 & 0x3fffffff;
  puStack_50 = DAT_00470728;
  FUN_00022cf8(iStack_38);
  puStack_4 = (undefined *)puStack_4c;
  puStack_50 = (undefined *)puStack_4c;
  puStack_4c = (undefined4 *)(uStack_34 + uStack_3c + DAT_0047072c);
  iStack_48 = iStack_38 + ((int)uStack_3c >> 0x1f) + (uint)CARRY4(uStack_34,uStack_3c) +
              DAT_00470730 + (uint)CARRY4(uStack_34 + uStack_3c,DAT_0047072c);
  FUN_00227114();
  puStack_4c = *(undefined4 **)PTR_DAT_00470734;
  puStack_50 = PTR_DAT_00470738;
  FUN_00020dac();
  iStack_1c = iStack_48;
  puStack_50 = PTR_DAT_0047073c;
  FUN_00022cf8();
  *puStack_4c = PTR_DAT_00470740;
  if (*(int *)PTR_DAT_00470744 != 0) {
    puStack_4c = (undefined4 *)FUN_0009db74();
    *unaff_r8 = puStack_4;
    unaff_r8[1] = puStack_4c;
    unaff_r8[2] = *(undefined4 *)PTR_DAT_00470748;
  }
  puStack_4c[1] = puStack_4;
  puStack_4c[2] = iStack_1c;
  puStack_4c[3] = puStack_4;
  *(undefined4 **)PTR_DAT_00470748 = puStack_4c;
  return;
}



/* k3c/common/protocol.(*encryptXOR).Encrypt @ 0047074c (size 524) */

void k3c_common_protocol___encryptXOR__Encrypt(undefined4 param_1)

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
      *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0047095c;
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_000986b8();
      iVar3 = *(int *)((int)register0x00000054 + -0x10);
      *(int *)((int)register0x00000054 + -4) = iVar3;
      piVar6 = *(int **)((int)register0x00000054 + 4);
      uVar7 = piVar6[1];
      *(uint *)((int)register0x00000054 + -8) = uVar7;
      iVar9 = *(int *)((int)register0x00000054 + 0xc);
      iVar10 = *(int *)((int)register0x00000054 + 8);
      uVar11 = 0;
LAB_0047079c:
      if (iVar9 <= (int)uVar11) {
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 0;
        *(int *)((int)register0x00000054 + -0x18) = iVar3;
        *(int *)((int)register0x00000054 + -0x14) = iVar9;
        FUN_00099104();
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        return;
      }
      iVar12 = uVar11 + ((int)((int)((ulonglong)((longlong)(int)uVar11 * (longlong)DAT_00470960) >>
                                    0x20) + uVar11) >> 2) * -5;
      if (iVar12 == 0) {
        *(undefined1 *)(iVar3 + uVar11) = *(undefined1 *)(iVar10 + uVar11);
LAB_00470798:
        uVar11 = uVar11 + 1;
        goto LAB_0047079c;
      }
      uVar1 = (int)uVar7 >> 0x1f;
      if (iVar12 - 1U < 2) {
        bVar2 = *(byte *)(iVar10 + uVar11);
        uVar16 = 1;
        if (uVar7 == 0) goto LAB_00470944;
        uVar13 = piVar6[1];
        uVar4 = (int)uVar11 >> 0x1f;
        FUN_0009edd4((uVar7 ^ uVar1) - uVar1,(uVar11 ^ uVar4) - uVar4);
        uVar4 = (extraout_r1 ^ uVar4) - uVar4;
        uVar16 = uVar13 == uVar4;
        if (uVar13 <= uVar4) goto LAB_0047093c;
        piVar6 = *(int **)((int)register0x00000054 + 4);
        bVar8 = *(byte *)(*piVar6 + uVar4) ^ bVar2;
        if (*DAT_00470964 == bVar8) {
          iVar3 = *(int *)((int)register0x00000054 + -4);
          *(byte *)(iVar3 + uVar11) = bVar2;
        }
        else {
          iVar3 = *(int *)((int)register0x00000054 + -4);
          *(byte *)(iVar3 + uVar11) = bVar8;
        }
        uVar7 = *(uint *)((int)register0x00000054 + -8);
        iVar9 = *(int *)((int)register0x00000054 + 0xc);
        goto LAB_00470798;
      }
      if (1 < iVar12 - 3U) goto LAB_00470798;
      bVar2 = *(byte *)(iVar10 + uVar11);
      uVar13 = (uint)bVar2;
      uVar4 = uVar11 + (int)uVar11 / 2;
      uVar16 = uVar7 == 0;
      if (!(bool)uVar16) {
        uVar14 = piVar6[1];
        uVar5 = (int)uVar4 >> 0x1f;
        FUN_0009edd4((uVar7 ^ uVar1) - uVar1,(uVar4 ^ uVar5) - uVar5);
        uVar5 = (extraout_r1_00 ^ uVar5) - uVar5;
        uVar16 = uVar14 == uVar5;
        if (uVar5 < uVar14) {
          piVar6 = *(int **)((int)register0x00000054 + 4);
          bVar8 = *(byte *)(*piVar6 + uVar5) ^ bVar2;
          if (*DAT_00470964 == bVar8) {
            iVar3 = *(int *)((int)register0x00000054 + -4);
            *(byte *)(iVar3 + uVar11) = bVar2;
          }
          else {
            iVar3 = *(int *)((int)register0x00000054 + -4);
            *(byte *)(iVar3 + uVar11) = bVar8;
          }
          uVar7 = *(uint *)((int)register0x00000054 + -8);
          iVar9 = *(int *)((int)register0x00000054 + 0xc);
          goto LAB_00470798;
        }
        FUN_0009dbd4(uVar5,uVar14);
      }
      uVar4 = FUN_000539a0();
LAB_0047093c:
      FUN_0009dbd4(uVar4,uVar13);
LAB_00470944:
      param_1 = FUN_000539a0();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if ((bool)uVar16) {
        register0x00000054 = (BADSPACEBASE *)puVar15;
      }
    }
    unaff_lr = 0x470954;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/protocol.(*encryptXOR).Decrypt @ 00470968 (size 524) */

void k3c_common_protocol___encryptXOR__Decrypt(undefined4 param_1)

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
      *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_00470b78;
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_000986b8();
      iVar3 = *(int *)((int)register0x00000054 + -0x10);
      *(int *)((int)register0x00000054 + -4) = iVar3;
      piVar6 = *(int **)((int)register0x00000054 + 4);
      uVar7 = piVar6[1];
      *(uint *)((int)register0x00000054 + -8) = uVar7;
      iVar9 = *(int *)((int)register0x00000054 + 0xc);
      iVar10 = *(int *)((int)register0x00000054 + 8);
      uVar11 = 0;
LAB_004709b8:
      if (iVar9 <= (int)uVar11) {
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 0;
        *(int *)((int)register0x00000054 + -0x18) = iVar3;
        *(int *)((int)register0x00000054 + -0x14) = iVar9;
        FUN_00099104();
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        return;
      }
      iVar12 = uVar11 + ((int)((int)((ulonglong)((longlong)(int)uVar11 * (longlong)DAT_00470b7c) >>
                                    0x20) + uVar11) >> 2) * -5;
      if (iVar12 == 0) {
        *(undefined1 *)(iVar3 + uVar11) = *(undefined1 *)(iVar10 + uVar11);
LAB_004709b4:
        uVar11 = uVar11 + 1;
        goto LAB_004709b8;
      }
      uVar1 = (int)uVar7 >> 0x1f;
      if (iVar12 - 1U < 2) {
        bVar2 = *(byte *)(iVar10 + uVar11);
        uVar16 = 1;
        if (uVar7 == 0) goto LAB_00470b60;
        uVar13 = piVar6[1];
        uVar4 = (int)uVar11 >> 0x1f;
        FUN_0009edd4((uVar7 ^ uVar1) - uVar1,(uVar11 ^ uVar4) - uVar4);
        uVar4 = (extraout_r1 ^ uVar4) - uVar4;
        uVar16 = uVar13 == uVar4;
        if (uVar13 <= uVar4) goto LAB_00470b58;
        piVar6 = *(int **)((int)register0x00000054 + 4);
        bVar8 = *(byte *)(*piVar6 + uVar4) ^ bVar2;
        if (*DAT_00470b80 == bVar8) {
          iVar3 = *(int *)((int)register0x00000054 + -4);
          *(byte *)(iVar3 + uVar11) = bVar2;
        }
        else {
          iVar3 = *(int *)((int)register0x00000054 + -4);
          *(byte *)(iVar3 + uVar11) = bVar8;
        }
        uVar7 = *(uint *)((int)register0x00000054 + -8);
        iVar9 = *(int *)((int)register0x00000054 + 0xc);
        goto LAB_004709b4;
      }
      if (1 < iVar12 - 3U) goto LAB_004709b4;
      bVar2 = *(byte *)(iVar10 + uVar11);
      uVar13 = (uint)bVar2;
      uVar4 = uVar11 + (int)uVar11 / 2;
      uVar16 = uVar7 == 0;
      if (!(bool)uVar16) {
        uVar14 = piVar6[1];
        uVar5 = (int)uVar4 >> 0x1f;
        FUN_0009edd4((uVar7 ^ uVar1) - uVar1,(uVar4 ^ uVar5) - uVar5);
        uVar5 = (extraout_r1_00 ^ uVar5) - uVar5;
        uVar16 = uVar14 == uVar5;
        if (uVar5 < uVar14) {
          piVar6 = *(int **)((int)register0x00000054 + 4);
          bVar8 = *(byte *)(*piVar6 + uVar5) ^ bVar2;
          if (*DAT_00470b80 == bVar8) {
            iVar3 = *(int *)((int)register0x00000054 + -4);
            *(byte *)(iVar3 + uVar11) = bVar2;
          }
          else {
            iVar3 = *(int *)((int)register0x00000054 + -4);
            *(byte *)(iVar3 + uVar11) = bVar8;
          }
          uVar7 = *(uint *)((int)register0x00000054 + -8);
          iVar9 = *(int *)((int)register0x00000054 + 0xc);
          goto LAB_004709b4;
        }
        FUN_0009dbd4(uVar5,uVar14);
      }
      uVar4 = FUN_000539a0();
LAB_00470b58:
      FUN_0009dbd4(uVar4,uVar13);
LAB_00470b60:
      param_1 = FUN_000539a0();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if ((bool)uVar16) {
        register0x00000054 = (BADSPACEBASE *)puVar15;
      }
    }
    unaff_lr = 0x470b70;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/protocol.Md5 @ 00470b84 (size 504) */

void k3c_common_protocol_Md5(undefined4 param_1)

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
      uVar3 = FUN_0009deb8(0,(undefined1 *)((int)register0x00000054 + -0x60));
      *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_00470d80;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = DAT_00470d84;
      *(undefined4 *)((int)register0x00000054 + -0x58) = DAT_00470d88;
      *(undefined4 *)((int)register0x00000054 + -0x54) = DAT_00470d8c;
      *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xc) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -8) = uVar3;
      *(undefined1 **)((int)register0x00000054 + -0x114) =
           (undefined1 *)((int)register0x00000054 + -0xe4);
      *(undefined4 *)((int)register0x00000054 + -0x110) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x10c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      FUN_000766e8();
      *(undefined1 **)((int)register0x00000054 + -0x114) =
           (undefined1 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x110) =
           *(undefined4 *)((int)register0x00000054 + -0x108);
      *(undefined4 *)((int)register0x00000054 + -0x10c) =
           *(undefined4 *)((int)register0x00000054 + -0x104);
      *(undefined4 *)((int)register0x00000054 + -0x108) =
           *(undefined4 *)((int)register0x00000054 + -0x100);
      uVar3 = FUN_0027dd74();
      FUN_0009e260(uVar3,(undefined1 *)((int)register0x00000054 + -0x60),
                   (undefined1 *)((int)register0x00000054 + -0xbc));
      *(undefined1 **)((int)register0x00000054 + -0x114) =
           (undefined1 *)((int)register0x00000054 + -0xbc);
      FUN_0027e070();
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
      *(undefined4 *)((int)register0x00000054 + -0x104) = DAT_00470d90;
      FUN_000987f4();
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x100);
      *(undefined4 *)((int)register0x00000054 + -0xc4) =
           *(undefined4 *)((int)register0x00000054 + -0xfc);
      *(undefined4 *)((int)register0x00000054 + -0x114) =
           *(undefined4 *)((int)register0x00000054 + -0x100);
      *(undefined1 **)((int)register0x00000054 + -0x110) =
           (undefined1 *)((int)register0x00000054 + -0xf4);
      *(undefined4 *)((int)register0x00000054 + -0x10c) = 0x10;
      FUN_0009e3a4();
      iVar4 = *(int *)((int)register0x00000054 + -0xc4) << 1;
      *(int *)((int)register0x00000054 + -0xc0) = iVar4;
      *(undefined4 *)((int)register0x00000054 + -0x114) = DAT_00470d90;
      *(int *)((int)register0x00000054 + -0x110) = iVar4;
      *(int *)((int)register0x00000054 + -0x10c) = iVar4;
      FUN_000986b8();
      iVar9 = *(int *)((int)register0x00000054 + -0x108);
      iVar10 = *(int *)((int)register0x00000054 + -4);
      iVar11 = *(int *)((int)register0x00000054 + -0xc4);
      iVar4 = 0;
      uVar7 = 0;
      while( true ) {
        iVar2 = DAT_00470d94;
        if (iVar11 <= iVar4) {
          *(undefined4 *)((int)register0x00000054 + -0x114) = 0;
          *(int *)((int)register0x00000054 + -0x110) = iVar9;
          *(undefined4 *)((int)register0x00000054 + -0x10c) =
               *(undefined4 *)((int)register0x00000054 + -0xc0);
          FUN_00099104();
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x108);
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x104);
          return;
        }
        bVar1 = *(byte *)(iVar10 + iVar4);
        uVar14 = uVar7 == iVar11 * 2;
        if ((uint)(iVar11 * 2) <= uVar7) goto LAB_00470d60;
        *(undefined1 *)(iVar9 + uVar7) = *(undefined1 *)(DAT_00470d94 + (uint)(bVar1 >> 4));
        uVar12 = uVar7 + 1;
        uVar14 = uVar12 == iVar11 * 2;
        if ((uint)(iVar11 * 2) <= uVar12) break;
        *(undefined1 *)(iVar9 + uVar12) = *(undefined1 *)(iVar2 + (bVar1 & 0xf));
        iVar4 = iVar4 + 1;
        uVar7 = uVar7 + 2;
      }
      FUN_0009dbd4(uVar12,*(undefined4 *)((int)register0x00000054 + -0xc0));
      uVar7 = extraout_r1;
LAB_00470d60:
      param_1 = FUN_0009dbd4(uVar7,*(undefined4 *)((int)register0x00000054 + -0xc0));
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x118);
      if ((bool)uVar14) {
        register0x00000054 = (BADSPACEBASE *)puVar13;
      }
    }
    unaff_lr = 0x470d78;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/protocol.Encrypt @ 00470d98 (size 604) */

void k3c_common_protocol_Encrypt(undefined4 param_1)

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
      iVar1 = *(int *)PTR_DAT_00470ff8;
      *(int *)((int)register0x00000054 + -0x24) = *(int *)((int)register0x00000054 + 8) + iVar1;
      iVar4 = *(int *)PTR_DAT_00470ffc;
      *(undefined **)((int)register0x00000054 + -0x74) = PTR_DAT_00471000;
      *(undefined4 *)((int)register0x00000054 + -0x70) = 0;
      *(int *)((int)register0x00000054 + -0x6c) =
           *(int *)((int)register0x00000054 + 8) + iVar1 + iVar4 + 4;
      FUN_000986b8();
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x68);
      iVar1 = *(int *)PTR_DAT_00470ffc;
      iVar4 = *(int *)((int)register0x00000054 + -0x24);
      uVar5 = *(uint *)((int)register0x00000054 + 8);
      *(uint *)((int)register0x00000054 + -0x28) = uVar5 >> 0x18;
      *(uint *)((int)register0x00000054 + -0x2c) = uVar5 >> 0x10;
      *(uint *)((int)register0x00000054 + -0x30) = uVar5 >> 8;
      FUN_0009df00(0,(undefined1 *)((int)register0x00000054 + -0x14));
      *(int *)((int)register0x00000054 + -0xc) = iVar4 + iVar1 + 4;
      *(undefined4 *)((int)register0x00000054 + -0x14) = uVar2;
      uVar2 = *(undefined4 *)PTR_DAT_00471004;
      uVar6 = *(undefined4 *)PTR_DAT_00470ff8;
      uVar7 = *(undefined4 *)PTR_DAT_00471008;
      *(undefined1 **)((int)register0x00000054 + -0x74) =
           (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x70) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0x68) = uVar7;
      FUN_00152f6c();
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
      FUN_00152f6c();
      *(undefined4 *)((int)register0x00000054 + -0x74) = *(undefined4 *)PTR_DAT_00470ffc;
      *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_0047100c;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x3e;
      k3c_common_protocol_RandomStringWithCharset();
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + -100);
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x70) =
           *(undefined4 *)((int)register0x00000054 + -100);
      uVar2 = k3c_common_protocol_Md5();
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
        FUN_00099104();
        *(undefined1 **)((int)register0x00000054 + -0x74) =
             (undefined1 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -100);
        k3c_common_protocol___encryptXOR__Encrypt();
        *(undefined1 **)((int)register0x00000054 + -0x74) =
             (undefined1 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -100);
        FUN_00153058();
        *(undefined1 **)((int)register0x00000054 + -0x74) =
             (undefined1 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        FUN_00153058();
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
        uVar2 = FUN_0009dc34();
      }
      param_1 = FUN_0009dbf4(uVar2,0x10);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x78);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x470ff0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/protocol.Decrypt @ 00471010 (size 708) */

void k3c_common_protocol_Decrypt(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  undefined1 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x74);
      *(undefined4 *)((int)register0x00000054 + -0x74) = unaff_lr;
      uVar4 = *(uint *)PTR_DAT_004712d8;
      iVar6 = *(int *)((int)register0x00000054 + 8);
      if (iVar6 < (int)(uVar4 + 4)) goto LAB_0047127c;
      uVar11 = *(uint *)((int)register0x00000054 + 0xc) == uVar4;
      if (uVar4 <= *(uint *)((int)register0x00000054 + 0xc)) {
        *(uint *)((int)register0x00000054 + -0x14) = uVar4 + 4;
        *(uint *)((int)register0x00000054 + -0xc) = uVar4;
        uVar1 = *(undefined4 *)PTR_DAT_004712dc;
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar1;
        *(uint *)((int)register0x00000054 + -0x68) = uVar4;
        FUN_00018250();
        if (*(char *)((int)register0x00000054 + -100) == '\0') {
          iVar6 = *(int *)((int)register0x00000054 + 8);
LAB_0047127c:
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(int *)((int)register0x00000054 + 0x14) = iVar6;
          *(undefined4 *)((int)register0x00000054 + 0x18) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
          return;
        }
        uVar5 = *(uint *)((int)register0x00000054 + 0xc);
        uVar4 = *(uint *)((int)register0x00000054 + -0x14);
        uVar11 = uVar5 == uVar4;
        if (uVar4 <= uVar5) {
          uVar2 = *(uint *)((int)register0x00000054 + -0xc);
          uVar11 = uVar2 == uVar4;
          if (uVar2 <= uVar4) {
            uVar4 = uVar2 & (int)-(uVar5 - uVar2) >> 0x1f;
            iVar7 = *(int *)((int)register0x00000054 + 4);
            iVar6 = iVar7 + uVar4;
            iVar6 = CONCAT13(*(undefined1 *)(iVar7 + uVar4),
                             CONCAT12(*(undefined1 *)(iVar6 + 1),
                                      CONCAT11(*(undefined1 *)(iVar6 + 2),*(undefined1 *)(iVar6 + 3)
                                              )));
            if (iVar6 == 0) {
              *(undefined **)((int)register0x00000054 + 0x10) = PTR_DAT_004712f4;
              *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
              return;
            }
            iVar8 = iVar6 + uVar2;
            uVar4 = iVar8 + 4;
            uVar9 = *(uint *)((int)register0x00000054 + 8);
            uVar11 = uVar9 == uVar4;
            if ((int)uVar9 < (int)uVar4) {
              *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_004712e8;
              FUN_00022cf8();
              puVar3 = *(undefined4 **)((int)register0x00000054 + -0x6c);
              puVar3[1] = 0x10;
              *puVar3 = PTR_DAT_004712ec;
              *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
              *(undefined **)((int)register0x00000054 + 0x1c) = PTR_DAT_004712f0;
              *(undefined4 **)((int)register0x00000054 + 0x20) = puVar3;
              return;
            }
            if (uVar4 <= uVar9) {
              *(uint *)((int)register0x00000054 + -0x10) = uVar5 - uVar2;
              *(int *)((int)register0x00000054 + -0x18) = iVar6;
              *(uint *)((int)register0x00000054 + -0xc) = uVar4;
              *(undefined1 **)((int)register0x00000054 + -0x70) =
                   (undefined1 *)((int)register0x00000054 + -0x38);
              *(uint *)((int)register0x00000054 + -0x6c) =
                   (uVar4 & (int)(4 - (uVar5 - iVar8)) >> 0x1f) + iVar7;
              *(uint *)((int)register0x00000054 + -0x68) = (uVar9 - iVar8) + -4;
              FUN_00099104();
              iVar6 = *(int *)((int)register0x00000054 + -0x60);
              uVar1 = *(undefined4 *)((int)register0x00000054 + -100);
              if (iVar6 == 0) {
                uVar1 = *(undefined4 *)PTR_DAT_004712e0;
                iVar6 = *(int *)PTR_DAT_004712e4;
              }
              *(undefined4 *)((int)register0x00000054 + -0x70) = uVar1;
              *(int *)((int)register0x00000054 + -0x6c) = iVar6;
              uVar1 = k3c_common_protocol_Md5();
              uVar11 = *(uint *)((int)register0x00000054 + -100) == 0x10;
              if (0xf < *(uint *)((int)register0x00000054 + -100)) {
                *(undefined4 *)((int)register0x00000054 + -4) = 8;
                *(int *)((int)register0x00000054 + -8) =
                     *(int *)((int)register0x00000054 + -0x68) + 8;
                uVar4 = *(uint *)((int)register0x00000054 + -0x14);
                uVar11 = *(uint *)((int)register0x00000054 + -0xc) == uVar4;
                if (uVar4 <= *(uint *)((int)register0x00000054 + -0xc)) {
                  *(undefined1 **)((int)register0x00000054 + -0x70) =
                       (undefined1 *)((int)register0x00000054 + -0x58);
                  *(uint *)((int)register0x00000054 + -0x6c) =
                       (uVar4 & 4 - *(int *)((int)register0x00000054 + -0x10) >> 0x1f) +
                       *(int *)((int)register0x00000054 + 4);
                  *(undefined4 *)((int)register0x00000054 + -0x68) =
                       *(undefined4 *)((int)register0x00000054 + -0x18);
                  FUN_00099104();
                  *(undefined1 **)((int)register0x00000054 + -0x70) =
                       (undefined1 *)((int)register0x00000054 + -8);
                  *(undefined4 *)((int)register0x00000054 + -0x6c) =
                       *(undefined4 *)((int)register0x00000054 + -100);
                  *(undefined4 *)((int)register0x00000054 + -0x68) =
                       *(undefined4 *)((int)register0x00000054 + -0x60);
                  k3c_common_protocol___encryptXOR__Decrypt();
                  *(undefined4 *)((int)register0x00000054 + -0x70) = 0;
                  *(undefined4 *)((int)register0x00000054 + -0x6c) =
                       *(undefined4 *)((int)register0x00000054 + -100);
                  *(undefined4 *)((int)register0x00000054 + -0x68) =
                       *(undefined4 *)((int)register0x00000054 + -0x60);
                  FUN_000766e8();
                  *(undefined4 *)((int)register0x00000054 + 0x10) =
                       *(undefined4 *)((int)register0x00000054 + -100);
                  *(undefined4 *)((int)register0x00000054 + 0x14) =
                       *(undefined4 *)((int)register0x00000054 + -0x60);
                  *(undefined4 *)((int)register0x00000054 + 0x18) =
                       *(undefined4 *)((int)register0x00000054 + -0x5c);
                  *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
                  *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
                  return;
                }
                uVar1 = FUN_0009dc34();
              }
              uVar4 = FUN_0009dbf4(uVar1,0x10);
            }
            FUN_0009dc34(uVar4,uVar9);
          }
          FUN_0009dc34();
        }
        FUN_0009dc14();
      }
      param_1 = FUN_0009dc14();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x74);
      if ((bool)uVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x4712d0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/protocol.RandomStringWithCharset @ 004712f8 (size 204) */

void k3c_common_protocol_RandomStringWithCharset(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_004713c8;
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + 4);
      FUN_000986b8();
      iVar1 = *(int *)((int)register0x00000054 + -0x10);
      *(int *)((int)register0x00000054 + -4) = iVar1;
      iVar3 = 0;
      while( true ) {
        if (*(int *)((int)register0x00000054 + 4) <= iVar3) {
          *(undefined4 *)((int)register0x00000054 + -0x1c) = 0;
          *(int *)((int)register0x00000054 + -0x18) = iVar1;
          *(int *)((int)register0x00000054 + -0x14) = *(int *)((int)register0x00000054 + 4);
          FUN_00099104();
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0xc);
          return;
        }
        *(int *)((int)register0x00000054 + -8) = iVar3;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = *DAT_004713cc;
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00226118();
        uVar2 = *(uint *)((int)register0x00000054 + -0x14);
        bVar5 = *(uint *)((int)register0x00000054 + 0xc) == uVar2;
        if (*(uint *)((int)register0x00000054 + 0xc) <= uVar2) break;
        iVar3 = *(int *)((int)register0x00000054 + -8);
        iVar1 = *(int *)((int)register0x00000054 + -4);
        *(undefined1 *)(iVar1 + iVar3) =
             *(undefined1 *)(*(int *)((int)register0x00000054 + 8) + uVar2);
        iVar3 = iVar3 + 1;
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x4713c0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



