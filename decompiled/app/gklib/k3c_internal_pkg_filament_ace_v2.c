// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/filament/ace_v2   functions: 493
/* k3c/internal/pkg/filament/ace_v2.map.init.2 @ 00629a80 (size 684) */

void k3c_internal_pkg_filament_ace_v2_map_init_2(void)

{
  undefined4 *puVar1;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined4 uStack_14;
  undefined4 *puStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x629d28;
    FUN_0009bf64();
  }
  FUN_000908bc();
  FUN_00092908();
  puStack_8[1] = 7;
  puVar1 = puStack_8;
  if (*(int *)PTR_DAT_00629d34 != 0) {
    uVar2 = FUN_0009db54(puStack_8,*puStack_8);
    puVar1 = (undefined4 *)uVar2;
    *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
  }
  *puVar1 = PTR_s_SUCCESSnil_keyderivedInitialExpi_008216f7_0xd72_00629d38;
  FUN_00092908();
  puStack_8[1] = 0xb;
  puVar1 = puStack_8;
  if (*(int *)PTR_DAT_00629d34 != 0) {
    puVar1 = (undefined4 *)FUN_0009db54(puStack_8,0xb,*puStack_8);
    *unaff_r8 = extraout_r2;
  }
  *puVar1 = PTR_DAT_00629d3c;
  FUN_00092908();
  puStack_8[1] = 9;
  puVar1 = puStack_8;
  if (*(int *)PTR_DAT_00629d34 != 0) {
    uVar2 = FUN_0009db54(puStack_8,*puStack_8);
    puVar1 = (undefined4 *)uVar2;
    *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
  }
  *puVar1 = PTR_s_FORBIDDEN__color__unwindingassis_00823504_0x5c9_00629d40;
  FUN_00092908();
  puStack_8[1] = 6;
  puVar1 = puStack_8;
  if (*(int *)PTR_DAT_00629d34 != 0) {
    uVar2 = FUN_0009db54(puStack_8,*puStack_8);
    puVar1 = (undefined4 *)uVar2;
    *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
  }
  *puVar1 = PTR_s_FAILEDX25519_w__0wtls13_AcceptSe_008216f7_0x354_00629d44;
  FUN_00092908();
  puStack_8[1] = 0xd;
  puVar1 = puStack_8;
  if (*(int *)PTR_DAT_00629d34 != 0) {
    uVar2 = FUN_0009db54(puStack_8,*puStack_8);
    puVar1 = (undefined4 *)uVar2;
    *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
  }
  *puVar1 = PTR_s_ANTICOLLISIONaccess_denieduser_c_008262d0_0x1945_00629d48;
  FUN_00092908();
  puStack_8[1] = 5;
  puVar1 = puStack_8;
  if (*(int *)PTR_DAT_00629d34 != 0) {
    uVar2 = FUN_0009db54(puStack_8,*puStack_8);
    puVar1 = (undefined4 *)uVar2;
    *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
  }
  *puVar1 = PTR_DAT_00629d4c;
  FUN_00092908();
  puStack_8[1] = 10;
  puVar1 = puStack_8;
  if (*(int *)PTR_DAT_00629d34 != 0) {
    uVar2 = FUN_0009db54(puStack_8,*puStack_8);
    puVar1 = (undefined4 *)uVar2;
    *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
  }
  *puVar1 = PTR_DAT_00629d50;
  FUN_00092908();
  puStack_8[1] = 0xb;
  if (*(int *)PTR_DAT_00629d34 != 0) {
    uVar2 = FUN_0009db74(puStack_8,*puStack_8);
    puStack_8 = (undefined4 *)uVar2;
    *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
    unaff_r8[1] = uStack_14;
    unaff_r8[2] = *(undefined4 *)PTR_DAT_00629d54;
  }
  *puStack_8 = PTR_DAT_00629d58;
  *(undefined4 *)PTR_DAT_00629d54 = uStack_14;
                    /* WARNING: Could not recover jumptable at 0x00629d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*V2ProtoHandler).BuildRequest @ 00629d5c (size 940) */

void k3c_internal_pkg_filament_ace_v2___V2ProtoHandler__BuildRequest(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined2 uVar9;
  int iVar10;
  int unaff_r10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  bool bVar12;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar11 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 0x10);
      if (100 < iVar1) {
        iVar1 = 100;
      }
      *(int *)((int)register0x00000054 + -0x10) = iVar1;
      *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_0062a10c;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
      *(int *)((int)register0x00000054 + -0x14) = iVar1 + 0xb;
      *(int *)((int)register0x00000054 + -0x38) = iVar1 + 0xb;
      FUN_000986b8();
      uVar3 = (*(undefined4 **)((int)register0x00000054 + 4))[1];
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x34);
      uVar6 = **(undefined4 **)((int)register0x00000054 + 4);
      uVar8 = *(uint *)((int)register0x00000054 + -0x14);
      uVar2 = uVar3;
      if (uVar8 < uVar3) {
        *(uint *)((int)register0x00000054 + -0xc) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -4) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x40) = uVar5;
        *(uint *)((int)register0x00000054 + -0x3c) = uVar3;
        *(uint *)((int)register0x00000054 + -0x38) = uVar8;
        *(uint *)((int)register0x00000054 + -0x34) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0062a10c;
        FUN_000987f4();
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x2c);
        uVar3 = *(uint *)((int)register0x00000054 + -0x28);
        uVar8 = *(uint *)((int)register0x00000054 + -0x24);
        uVar6 = *(undefined4 *)((int)register0x00000054 + -4);
        uVar2 = *(uint *)((int)register0x00000054 + -0xc);
      }
      *(uint *)((int)register0x00000054 + -0x18) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -8) = uVar5;
      *(uint *)((int)register0x00000054 + -0x14) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x40) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar6;
      *(uint *)((int)register0x00000054 + -0x38) = uVar2;
      FUN_0009e3a4();
      uVar2 = *(int *)((int)register0x00000054 + -0x18) + 1;
      uVar8 = *(uint *)((int)register0x00000054 + -0x14);
      if (uVar8 < uVar2) {
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(uint *)((int)register0x00000054 + -0x3c) = uVar2;
        *(uint *)((int)register0x00000054 + -0x38) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0062a10c;
        FUN_000987f4();
        iVar1 = *(int *)((int)register0x00000054 + -0x2c);
        uVar2 = *(uint *)((int)register0x00000054 + -0x28);
        uVar8 = *(uint *)((int)register0x00000054 + -0x24);
      }
      else {
        iVar1 = *(int *)((int)register0x00000054 + -8);
      }
      *(undefined1 *)(iVar1 + (uVar2 - 1)) = *(undefined1 *)((int)register0x00000054 + 8);
      uVar2 = uVar2 + 2;
      if (uVar8 < uVar2) {
        *(int *)((int)register0x00000054 + -0x40) = iVar1;
        *(uint *)((int)register0x00000054 + -0x3c) = uVar2;
        *(uint *)((int)register0x00000054 + -0x38) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0062a10c;
        FUN_000987f4();
        iVar1 = *(int *)((int)register0x00000054 + -0x2c);
        uVar2 = *(uint *)((int)register0x00000054 + -0x28);
        uVar8 = *(uint *)((int)register0x00000054 + -0x24);
      }
      uVar9 = *(undefined2 *)((int)register0x00000054 + 10);
      *(char *)(iVar1 + (uVar2 - 2)) = (char)uVar9;
      *(char *)(iVar1 + (uVar2 - 2) + 1) = (char)((ushort)uVar9 >> 8);
      uVar2 = uVar2 + 1;
      if (uVar8 < uVar2) {
        *(int *)((int)register0x00000054 + -0x40) = iVar1;
        *(uint *)((int)register0x00000054 + -0x3c) = uVar2;
        *(uint *)((int)register0x00000054 + -0x38) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0062a10c;
        FUN_000987f4();
        iVar1 = *(int *)((int)register0x00000054 + -0x2c);
        uVar2 = *(uint *)((int)register0x00000054 + -0x28);
        uVar8 = *(uint *)((int)register0x00000054 + -0x24);
      }
      *(undefined1 *)(iVar1 + (uVar2 - 1)) = *(undefined1 *)((int)register0x00000054 + 9);
      uVar2 = uVar2 + 1;
      if (uVar8 < uVar2) {
        *(int *)((int)register0x00000054 + -0x40) = iVar1;
        *(uint *)((int)register0x00000054 + -0x3c) = uVar2;
        *(uint *)((int)register0x00000054 + -0x38) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0062a10c;
        FUN_000987f4();
        iVar1 = *(int *)((int)register0x00000054 + -0x2c);
        uVar2 = *(uint *)((int)register0x00000054 + -0x28);
        uVar8 = *(uint *)((int)register0x00000054 + -0x24);
      }
      iVar7 = *(int *)((int)register0x00000054 + -0x10);
      *(char *)(iVar1 + (uVar2 - 1)) = (char)iVar7;
      uVar3 = uVar2 + iVar7;
      if (uVar8 < uVar3) {
        *(uint *)((int)register0x00000054 + -0x18) = uVar2;
        *(int *)((int)register0x00000054 + -0x40) = iVar1;
        *(uint *)((int)register0x00000054 + -0x3c) = uVar3;
        *(uint *)((int)register0x00000054 + -0x38) = uVar8;
        *(int *)((int)register0x00000054 + -0x34) = iVar7;
        *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0062a10c;
        FUN_000987f4();
        iVar1 = *(int *)((int)register0x00000054 + -0x2c);
        uVar3 = *(uint *)((int)register0x00000054 + -0x28);
        uVar8 = *(uint *)((int)register0x00000054 + -0x24);
        uVar2 = *(uint *)((int)register0x00000054 + -0x18);
        iVar7 = *(int *)((int)register0x00000054 + -0x10);
      }
      *(uint *)((int)register0x00000054 + -0x14) = uVar8;
      *(uint *)((int)register0x00000054 + -0x18) = uVar3;
      *(int *)((int)register0x00000054 + -8) = iVar1;
      *(uint *)((int)register0x00000054 + -0x40) = iVar1 + uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(int *)((int)register0x00000054 + -0x38) = iVar7;
      FUN_0009e3a4();
      uVar2 = *(uint *)((int)register0x00000054 + -0x18);
      bVar12 = uVar2 == 2;
      if (1 < uVar2) {
        uVar8 = *(uint *)((int)register0x00000054 + -0x14);
        iVar1 = *(int *)((int)register0x00000054 + -8);
        uVar3 = 0xffffffff;
        for (iVar7 = 0; uVar9 = (undefined2)uVar3, iVar7 < (int)(uVar2 - 2); iVar7 = iVar7 + 1) {
          uVar3 = uVar3 ^ *(byte *)(iVar1 + ((int)(2 - uVar8) >> 0x1f & 2U) + iVar7);
          for (iVar10 = 0; iVar10 < 8; iVar10 = iVar10 + 1) {
            if ((uVar3 & 1) == 0) {
              uVar3 = (uVar3 & 0xffff) >> 1;
            }
            else {
              uVar3 = (uVar3 & 0xffff) >> 1 ^ DAT_0062a110;
            }
          }
        }
        uVar2 = uVar2 + 2;
        if (uVar8 < uVar2) {
          *(undefined2 *)((int)register0x00000054 + -0x1a) = uVar9;
          *(int *)((int)register0x00000054 + -0x40) = iVar1;
          *(uint *)((int)register0x00000054 + -0x3c) = uVar2;
          *(uint *)((int)register0x00000054 + -0x38) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x34) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0062a10c;
          FUN_000987f4();
          iVar1 = *(int *)((int)register0x00000054 + -0x2c);
          uVar2 = *(uint *)((int)register0x00000054 + -0x28);
          uVar8 = *(uint *)((int)register0x00000054 + -0x24);
          uVar9 = *(undefined2 *)((int)register0x00000054 + -0x1a);
        }
        *(char *)(iVar1 + (uVar2 - 2)) = (char)uVar9;
        *(char *)(iVar1 + (uVar2 - 2) + 1) = (char)((ushort)uVar9 >> 8);
        uVar2 = uVar2 + 1;
        uVar4 = *(undefined1 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        if (uVar8 < uVar2) {
          *(undefined1 *)((int)register0x00000054 + -0x1b) = uVar4;
          *(int *)((int)register0x00000054 + -0x40) = iVar1;
          *(uint *)((int)register0x00000054 + -0x3c) = uVar2;
          *(uint *)((int)register0x00000054 + -0x38) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0062a10c;
          FUN_000987f4();
          iVar1 = *(int *)((int)register0x00000054 + -0x2c);
          uVar2 = *(uint *)((int)register0x00000054 + -0x28);
          uVar8 = *(uint *)((int)register0x00000054 + -0x24);
          uVar4 = *(undefined1 *)((int)register0x00000054 + -0x1b);
        }
        *(undefined1 *)(iVar1 + (uVar2 - 1)) = uVar4;
        *(int *)((int)register0x00000054 + 0x18) = iVar1;
        *(uint *)((int)register0x00000054 + 0x1c) = uVar2;
        *(uint *)((int)register0x00000054 + 0x20) = uVar8;
        return;
      }
      param_1 = FUN_0009dc34(2);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if (bVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar11;
      }
    }
    unaff_lr = 0x62a104;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*V2ProtoHandler).ParseResponse @ 0062a114 (size 1236) */

void k3c_internal_pkg_filament_ace_v2___V2ProtoHandler__ParseResponse(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 extraout_r2;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  int unaff_r10;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  undefined1 uVar14;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar13 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      uVar6 = *(uint *)((int)register0x00000054 + 0xc);
      if ((int)uVar6 < 10) {
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(uint *)((int)register0x00000054 + -0x3c) = uVar6;
        FUN_00020ce0();
        *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0062a5ec;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0062a604;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 0x19;
        *(undefined1 **)((int)register0x00000054 + -0x34) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x30) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 1;
        FUN_001386c4();
        *(undefined1 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined1 *)((int)register0x00000054 + 0x15) = 0;
        *(undefined2 *)((int)register0x00000054 + 0x16) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
                    /* WARNING: Could not recover jumptable at 0x0062a454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x40))();
        return;
      }
      puVar9 = *(undefined4 **)((int)register0x00000054 + 4);
      uVar10 = puVar9[1];
      uVar14 = uVar10 == 0;
      if (!(bool)uVar14) {
        pbVar12 = *(byte **)((int)register0x00000054 + 8);
        if (*(byte *)*puVar9 != *pbVar12) {
LAB_0062a334:
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x18));
          bVar1 = *pbVar12;
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062a5f4;
          *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_0062a5f8 + (uint)bVar1 * 8;
          bVar1 = pbVar12[1];
          *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0062a5f4;
          *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062a5f8 + (uint)bVar1 * 8;
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0062a600;
          *(undefined4 *)((int)register0x00000054 + -0x38) = 0x1f;
          *(undefined1 **)((int)register0x00000054 + -0x34) =
               (undefined1 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x30) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 2;
          FUN_001386c4();
          *(undefined1 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined1 *)((int)register0x00000054 + 0x15) = 0;
          *(undefined2 *)((int)register0x00000054 + 0x16) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + 0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
                    /* WARNING: Could not recover jumptable at 0x0062a3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x40))();
          return;
        }
        uVar14 = uVar10 == 1;
        if (1 < uVar10) {
          if (((byte *)*puVar9)[1] != pbVar12[1]) goto LAB_0062a334;
          if (*(byte *)(puVar9 + 3) != pbVar12[uVar6 - 1]) {
            *(undefined4 *)((int)register0x00000054 + -8) = 0;
            *(undefined4 *)((int)register0x00000054 + -4) = 0;
            bVar1 = pbVar12[uVar6 - 1];
            *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0062a5f4;
            *(undefined **)((int)register0x00000054 + -4) = PTR_DAT_0062a5f8 + (uint)bVar1 * 8;
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0062a5fc;
            *(undefined4 *)((int)register0x00000054 + -0x38) = 0x19;
            *(undefined1 **)((int)register0x00000054 + -0x34) =
                 (undefined1 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x30) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x2c) = 1;
            FUN_001386c4();
            *(undefined1 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined1 *)((int)register0x00000054 + 0x15) = 0;
            *(undefined2 *)((int)register0x00000054 + 0x16) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x24) =
                 *(undefined4 *)((int)register0x00000054 + -0x28);
            *(undefined4 *)((int)register0x00000054 + 0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x24);
            return;
          }
          uVar3 = *(undefined2 *)(pbVar12 + 3);
          uVar10 = (uint)pbVar12[6];
          if (uVar6 != uVar10 + 10) {
            *(uint *)((int)register0x00000054 + -0x1c) = uVar10 + 10;
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x18),uVar6);
            *(undefined4 *)((int)register0x00000054 + -0x3c) = extraout_r2;
            FUN_00020ce0();
            *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062a5ec;
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x38);
            *(undefined4 *)((int)register0x00000054 + -0x3c) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c);
            FUN_00020ce0();
            *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0062a5ec;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x38);
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0062a5f0;
            *(undefined4 *)((int)register0x00000054 + -0x38) = 0x29;
            *(undefined1 **)((int)register0x00000054 + -0x34) =
                 (undefined1 *)((int)register0x00000054 + -0x18);
            *(undefined4 *)((int)register0x00000054 + -0x30) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x2c) = 2;
            FUN_001386c4();
            *(undefined1 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined1 *)((int)register0x00000054 + 0x15) = 0;
            *(undefined2 *)((int)register0x00000054 + 0x16) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x24) =
                 *(undefined4 *)((int)register0x00000054 + -0x28);
            *(undefined4 *)((int)register0x00000054 + 0x28) =
                 *(undefined4 *)((int)register0x00000054 + -0x24);
            return;
          }
          uVar4 = uVar10 + 7;
          uVar8 = *(uint *)((int)register0x00000054 + 0x10);
          uVar14 = uVar8 == uVar4;
          if (uVar4 <= uVar8) {
            uVar14 = uVar4 == 7;
            if (6 < uVar4) {
              uVar14 = uVar6 == uVar4;
              if (uVar4 < uVar6) {
                uVar11 = uVar10 + 8;
                bVar1 = pbVar12[uVar4];
                uVar14 = uVar6 == uVar11;
                if (uVar11 < uVar6) {
                  bVar2 = pbVar12[uVar11];
                  uVar6 = 0xffffffff;
                  for (iVar5 = 0; iVar5 < (int)(uVar10 + 5); iVar5 = iVar5 + 1) {
                    uVar6 = uVar6 ^ pbVar12[iVar5 + 2];
                    for (iVar7 = 0; iVar7 < 8; iVar7 = iVar7 + 1) {
                      if ((uVar6 & 1) == 0) {
                        uVar6 = (uVar6 & 0xffff) >> 1;
                      }
                      else {
                        uVar6 = (uVar6 & 0xffff) >> 1 ^ DAT_0062a610;
                      }
                    }
                  }
                  if ((uVar6 & 0xffff) != (uint)CONCAT11(bVar2,bVar1)) {
                    *(short *)((int)register0x00000054 + -0x1e) = (short)uVar6;
                    FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x18));
                    *(ushort *)((int)register0x00000054 + -0x3c) = CONCAT11(bVar2,bVar1);
                    FUN_00020c68();
                    *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062a608;
                    *(undefined4 *)((int)register0x00000054 + -0x14) =
                         *(undefined4 *)((int)register0x00000054 + -0x38);
                    *(undefined2 *)((int)register0x00000054 + -0x3c) =
                         *(undefined2 *)((int)register0x00000054 + -0x1e);
                    FUN_00020c68();
                    *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0062a608;
                    *(undefined4 *)((int)register0x00000054 + -0xc) =
                         *(undefined4 *)((int)register0x00000054 + -0x38);
                    *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0062a60c;
                    *(undefined4 *)((int)register0x00000054 + -0x38) = 0x32;
                    *(undefined1 **)((int)register0x00000054 + -0x34) =
                         (undefined1 *)((int)register0x00000054 + -0x18);
                    *(undefined4 *)((int)register0x00000054 + -0x30) = 2;
                    *(undefined4 *)((int)register0x00000054 + -0x2c) = 2;
                    FUN_001386c4();
                    *(undefined1 *)((int)register0x00000054 + 0x14) = 0;
                    *(undefined1 *)((int)register0x00000054 + 0x15) = 0;
                    *(undefined2 *)((int)register0x00000054 + 0x16) = 0;
                    *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
                    *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
                    *(undefined4 *)((int)register0x00000054 + 0x24) =
                         *(undefined4 *)((int)register0x00000054 + -0x28);
                    *(undefined4 *)((int)register0x00000054 + 0x28) =
                         *(undefined4 *)((int)register0x00000054 + -0x24);
                    return;
                  }
                  bVar1 = pbVar12[5];
                  *(byte *)((int)register0x00000054 + 0x14) = pbVar12[2] & 0x7f;
                  *(byte *)((int)register0x00000054 + 0x15) = bVar1;
                  *(undefined2 *)((int)register0x00000054 + 0x16) = uVar3;
                  *(byte **)((int)register0x00000054 + 0x18) = pbVar12 + 7;
                  *(uint *)((int)register0x00000054 + 0x1c) = uVar10;
                  *(uint *)((int)register0x00000054 + 0x20) = uVar8 - 7;
                  *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
                  *(undefined4 *)((int)register0x00000054 + 0x28) = 0;
                  return;
                }
                FUN_0009dbd4(uVar11);
              }
              uVar4 = FUN_0009dbd4();
            }
            uVar4 = FUN_0009dc34(7,uVar4);
          }
          FUN_0009dc14(uVar4,uVar4);
        }
        FUN_0009dbd4(1,1);
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if ((bool)uVar14) {
        register0x00000054 = (BADSPACEBASE *)puVar13;
      }
    }
    unaff_lr = 0x62a5e4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.SerializeFeedOrRollback @ 0062a614 (size 136) */

void k3c_internal_pkg_filament_ace_v2_SerializeFeedOrRollback(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *(undefined4 *)(local_18 + 4) = in_stack_00000004;
  *(undefined4 *)(local_18 + 8) = in_stack_00000008;
  *(undefined4 *)(local_18 + 0xc) = in_stack_0000000c;
  *(undefined4 *)(local_18 + 0x10) = in_stack_00000010;
  google_golang_org_protobuf_proto_Marshal();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.SerializeUpdateSpeed @ 0062a6a8 (size 120) */

void k3c_internal_pkg_filament_ace_v2_SerializeUpdateSpeed(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *(undefined4 *)(local_18 + 4) = in_stack_00000004;
  *(undefined4 *)(local_18 + 8) = in_stack_00000008;
  google_golang_org_protobuf_proto_Marshal();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.SerializeDrying @ 0062a72c (size 128) */

void k3c_internal_pkg_filament_ace_v2_SerializeDrying(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *(undefined4 *)(local_18 + 4) = in_stack_00000004;
  *(undefined4 *)(local_18 + 8) = in_stack_00000008;
  *(undefined1 *)(local_18 + 0xc) = in_stack_0000000c;
  google_golang_org_protobuf_proto_Marshal();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.SerializeSetRfidEnable @ 0062a7b8 (size 120) */

void k3c_internal_pkg_filament_ace_v2_SerializeSetRfidEnable(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *(undefined4 *)(local_18 + 4) = in_stack_00000004;
  *(undefined1 *)(local_18 + 8) = in_stack_00000008;
  google_golang_org_protobuf_proto_Marshal();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.SerializeSetFeedCheck @ 0062a83c (size 120) */

void k3c_internal_pkg_filament_ace_v2_SerializeSetFeedCheck(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *(undefined4 *)(local_18 + 4) = in_stack_00000004;
  *(undefined4 *)(local_18 + 8) = in_stack_00000008;
  google_golang_org_protobuf_proto_Marshal();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.ParseKeyStateResponse @ 0062a8c0 (size 232) */

void k3c_internal_pkg_filament_ace_v2_ParseKeyStateResponse(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  google_golang_org_protobuf_proto_Unmarshal();
  if (local_14 == 0) {
    return;
  }
  FUN_001386c4();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.ParseInfoResponse @ 0062a9b8 (size 232) */

void k3c_internal_pkg_filament_ace_v2_ParseInfoResponse(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  google_golang_org_protobuf_proto_Unmarshal();
  if (local_14 == 0) {
    return;
  }
  FUN_001386c4();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.ParseStatusResponse @ 0062aab0 (size 232) */

void k3c_internal_pkg_filament_ace_v2_ParseStatusResponse(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  google_golang_org_protobuf_proto_Unmarshal();
  if (local_14 == 0) {
    return;
  }
  FUN_001386c4();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.ParseFilamentInfoResponse @ 0062aba8 (size 232) */

void k3c_internal_pkg_filament_ace_v2_ParseFilamentInfoResponse(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  google_golang_org_protobuf_proto_Unmarshal();
  if (local_14 == 0) {
    return;
  }
  FUN_001386c4();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.ParseGenericResponse @ 0062aca0 (size 232) */

void k3c_internal_pkg_filament_ace_v2_ParseGenericResponse(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  google_golang_org_protobuf_proto_Unmarshal();
  if (local_14 == 0) {
    return;
  }
  FUN_001386c4();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.ParseFeedInfoResponse @ 0062ad98 (size 232) */

void k3c_internal_pkg_filament_ace_v2_ParseFeedInfoResponse(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  google_golang_org_protobuf_proto_Unmarshal();
  if (local_14 == 0) {
    return;
  }
  FUN_001386c4();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.SerializeAssignDeviceId @ 0062ae90 (size 136) */

void k3c_internal_pkg_filament_ace_v2_SerializeAssignDeviceId(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *(undefined4 *)(local_18 + 4) = in_stack_00000004;
  *(undefined4 *)(local_18 + 8) = in_stack_00000008;
  *(undefined4 *)(local_18 + 0xc) = in_stack_0000000c;
  *(undefined4 *)(local_18 + 0x10) = in_stack_00000010;
  google_golang_org_protobuf_proto_Marshal();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.ParseDiscoverDeviceResponse @ 0062af24 (size 232) */

void k3c_internal_pkg_filament_ace_v2_ParseDiscoverDeviceResponse(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  google_golang_org_protobuf_proto_Unmarshal();
  if (local_14 == 0) {
    return;
  }
  FUN_001386c4();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.SerializeSetFan @ 0062b01c (size 132) */

void k3c_internal_pkg_filament_ace_v2_SerializeSetFan(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *(int *)(local_18 + 4) = in_stack_00000004;
  *(bool *)(local_18 + 8) = in_stack_00000004 != 0;
  *(bool *)(local_18 + 9) = in_stack_00000004 != 0;
  google_golang_org_protobuf_proto_Marshal();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.SerializeIapUpgrade @ 0062b0ac (size 168) */

void k3c_internal_pkg_filament_ace_v2_SerializeIapUpgrade(void)

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
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *(undefined4 *)(local_18 + 4) = in_stack_00000004;
  *(undefined4 *)(local_18 + 8) = in_stack_00000008;
  *(undefined4 *)(local_18 + 0x10) = in_stack_00000010;
  if (*DAT_0062b15c != 0) {
    local_18 = FUN_0009db54();
    *unaff_r8 = in_stack_0000000c;
  }
  *(undefined4 *)(local_18 + 0xc) = in_stack_0000000c;
  google_golang_org_protobuf_proto_Marshal();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.SerializeIapFirmware @ 0062b164 (size 168) */

void k3c_internal_pkg_filament_ace_v2_SerializeIapFirmware(void)

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
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *(undefined4 *)(local_18 + 4) = in_stack_00000004;
  *(undefined4 *)(local_18 + 0xc) = in_stack_0000000c;
  *(undefined4 *)(local_18 + 0x10) = in_stack_00000010;
  if (*DAT_0062b214 != 0) {
    local_18 = FUN_0009db54();
    *unaff_r8 = in_stack_00000008;
  }
  *(undefined4 *)(local_18 + 8) = in_stack_00000008;
  google_golang_org_protobuf_proto_Marshal();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.ParseVersionResponse @ 0062b21c (size 232) */

void k3c_internal_pkg_filament_ace_v2_ParseVersionResponse(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  google_golang_org_protobuf_proto_Unmarshal();
  if (local_14 == 0) {
    return;
  }
  FUN_001386c4();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.CommandType.Enum @ 0062b314 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_CommandType_Enum(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62b34c;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *uStack_8 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0062b340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.CommandType.String @ 0062b358 (size 124) */

void k3c_internal_pkg_filament_ace_v2_CommandType_String(undefined4 param_1)

{
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      bVar2 = *DAT_0062b3d8 == 0;
      if (!bVar2) {
        *(undefined4 *)((int)register0x00000054 + -0x14) = *DAT_0062b3dc;
        google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_EnumStringOf();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    unaff_lr = 0x62b3d0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.CommandType.Descriptor @ 0062b3e0 (size 96) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_CommandType_Descriptor(undefined4 param_1)

{
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      bVar2 = *_UNK_0062b444 == 0;
      if (!bVar2) {
        *(undefined4 *)((int)register0x00000054 + -0xc) = *_UNK_0062b448;
        google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0062b420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    unaff_lr = 0x62b43c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.CommandType.Type @ 0062b44c (size 84) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_CommandType_Type(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      bVar3 = *_UNK_0062b4a4 == 0;
      if (!bVar3) {
        uVar1 = *_UNK_0062b4a8;
        *(undefined4 *)((int)register0x00000054 + 8) = _UNK_0062b4ac;
        *(undefined4 *)((int)register0x00000054 + 0xc) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0062b480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0xc))();
        return;
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62b49c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.CommandType.Number @ 0062b4b0 (size 12) */

void k3c_internal_pkg_filament_ace_v2_CommandType_Number(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0062b4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.CommandType.EnumDescriptor @ 0062b4c0 (size 144) */

void k3c_internal_pkg_filament_ace_v2_CommandType_EnumDescriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062b558, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62b54c;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062b55c;
  uVar3 = *(undefined4 *)PTR_DAT_0062b560;
  uVar4 = *(undefined4 *)PTR_DAT_0062b564;
  FUN_00022cf8();
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062b540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.RespCode.Enum @ 0062b56c (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_RespCode_Enum(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62b5a4;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *uStack_8 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0062b598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.RespCode.String @ 0062b5b0 (size 124) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_RespCode_String
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      bVar2 = *_UNK_0062b630 == 1;
      if (1 < *_UNK_0062b630) {
        *(int *)((int)register0x00000054 + -0x14) = *_UNK_0062b634 + 0x10;
        google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_EnumStringOf();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0062b610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x18))();
        return;
      }
      unaff_lr = 0x62b61c;
      uVar3 = FUN_0009dbd4(1);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62b628;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.RespCode.Descriptor @ 0062b638 (size 96) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_RespCode_Descriptor
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      bVar2 = *_UNK_0062b69c == 1;
      if (1 < *_UNK_0062b69c) {
        *(int *)((int)register0x00000054 + -0xc) = *_UNK_0062b6a0 + 0x10;
        google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0062b67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      unaff_lr = 0x62b688;
      uVar3 = FUN_0009dbd4(1);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62b694;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.RespCode.Type @ 0062b6a4 (size 84) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_RespCode_Type
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  undefined8 uVar4;
  
  do {
    uVar4 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      bVar3 = *_UNK_0062b6fc == 1;
      if (1 < *_UNK_0062b6fc) {
        iVar1 = *_UNK_0062b700;
        *(undefined4 *)((int)register0x00000054 + 8) = _UNK_0062b704;
        *(int *)((int)register0x00000054 + 0xc) = iVar1 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x0062b6dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0xc))();
        return;
      }
      unaff_lr = 0x62b6e8;
      uVar4 = FUN_0009dbd4(1);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62b6f4;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.RespCode.Number @ 0062b708 (size 12) */

void k3c_internal_pkg_filament_ace_v2_RespCode_Number(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0062b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.RespCode.EnumDescriptor @ 0062b718 (size 148) */

void k3c_internal_pkg_filament_ace_v2_RespCode_EnumDescriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062b7b4, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62b7a8;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062b7b8;
  uVar3 = *(undefined4 *)PTR_DAT_0062b7bc;
  uVar4 = *(undefined4 *)PTR_DAT_0062b7c0;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 1;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062b79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.WorkState.Enum @ 0062b7c8 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_WorkState_Enum(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62b800;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *uStack_8 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0062b7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.WorkState.String @ 0062b80c (size 124) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_WorkState_String
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      bVar2 = *_UNK_0062b88c == 2;
      if (2 < *_UNK_0062b88c) {
        *(int *)((int)register0x00000054 + -0x14) = *_UNK_0062b890 + 0x20;
        google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_EnumStringOf();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0062b86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x18))();
        return;
      }
      unaff_lr = 0x62b878;
      uVar3 = FUN_0009dbd4(2);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62b884;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.WorkState.Descriptor @ 0062b894 (size 96) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_WorkState_Descriptor
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      bVar2 = *_UNK_0062b8f8 == 2;
      if (2 < *_UNK_0062b8f8) {
        *(int *)((int)register0x00000054 + -0xc) = *_UNK_0062b8fc + 0x20;
        google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0062b8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      unaff_lr = 0x62b8e4;
      uVar3 = FUN_0009dbd4(2);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62b8f0;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.WorkState.Type @ 0062b900 (size 84) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_WorkState_Type
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  undefined8 uVar4;
  
  do {
    uVar4 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      bVar3 = *_UNK_0062b958 == 2;
      if (2 < *_UNK_0062b958) {
        iVar1 = *_UNK_0062b95c;
        *(undefined4 *)((int)register0x00000054 + 8) = _UNK_0062b960;
        *(int *)((int)register0x00000054 + 0xc) = iVar1 + 0x20;
                    /* WARNING: Could not recover jumptable at 0x0062b938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0xc))();
        return;
      }
      unaff_lr = 0x62b944;
      uVar4 = FUN_0009dbd4(2);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62b950;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.WorkState.Number @ 0062b964 (size 12) */

void k3c_internal_pkg_filament_ace_v2_WorkState_Number(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0062b96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.WorkState.EnumDescriptor @ 0062b974 (size 152) */

void k3c_internal_pkg_filament_ace_v2_WorkState_EnumDescriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062ba14, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62ba08;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062ba18;
  uVar3 = *(undefined4 *)PTR_DAT_0062ba1c;
  uVar4 = *(undefined4 *)PTR_DAT_0062ba20;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 2;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062b9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.SlotState.Enum @ 0062ba28 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_SlotState_Enum(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62ba60;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *uStack_8 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0062ba54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.SlotState.String @ 0062ba6c (size 124) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_SlotState_String
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      bVar2 = *_UNK_0062baec == 3;
      if (3 < *_UNK_0062baec) {
        *(int *)((int)register0x00000054 + -0x14) = *_UNK_0062baf0 + 0x30;
        google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_EnumStringOf();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0062bacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x18))();
        return;
      }
      unaff_lr = 0x62bad8;
      uVar3 = FUN_0009dbd4(3);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62bae4;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.SlotState.Descriptor @ 0062baf4 (size 96) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_SlotState_Descriptor
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      bVar2 = *_UNK_0062bb58 == 3;
      if (3 < *_UNK_0062bb58) {
        *(int *)((int)register0x00000054 + -0xc) = *_UNK_0062bb5c + 0x30;
        google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0062bb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      unaff_lr = 0x62bb44;
      uVar3 = FUN_0009dbd4(3);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62bb50;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.SlotState.Type @ 0062bb60 (size 84) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_SlotState_Type
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  undefined8 uVar4;
  
  do {
    uVar4 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      bVar3 = *_UNK_0062bbb8 == 3;
      if (3 < *_UNK_0062bbb8) {
        iVar1 = *_UNK_0062bbbc;
        *(undefined4 *)((int)register0x00000054 + 8) = _UNK_0062bbc0;
        *(int *)((int)register0x00000054 + 0xc) = iVar1 + 0x30;
                    /* WARNING: Could not recover jumptable at 0x0062bb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0xc))();
        return;
      }
      unaff_lr = 0x62bba4;
      uVar4 = FUN_0009dbd4(3);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62bbb0;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.SlotState.Number @ 0062bbc4 (size 12) */

void k3c_internal_pkg_filament_ace_v2_SlotState_Number(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0062bbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.SlotState.EnumDescriptor @ 0062bbd4 (size 152) */

void k3c_internal_pkg_filament_ace_v2_SlotState_EnumDescriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062bc74, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62bc68;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062bc78;
  uVar3 = *(undefined4 *)PTR_DAT_0062bc7c;
  uVar4 = *(undefined4 *)PTR_DAT_0062bc80;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 3;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062bc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.FilamentState.Enum @ 0062bc88 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_FilamentState_Enum(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62bcc0;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *uStack_8 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0062bcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.FilamentState.String @ 0062bccc (size 124) */

void k3c_internal_pkg_filament_ace_v2_FilamentState_String
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      bVar2 = *DAT_0062bd4c == 4;
      if (4 < *DAT_0062bd4c) {
        *(int *)((int)register0x00000054 + -0x14) = *DAT_0062bd50 + 0x40;
        google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_EnumStringOf();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      unaff_lr = 0x62bd38;
      uVar3 = FUN_0009dbd4(4);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62bd44;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.FilamentState.Descriptor @ 0062bd54 (size 96) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_FilamentState_Descriptor
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      bVar2 = *_UNK_0062bdb8 == 4;
      if (4 < *_UNK_0062bdb8) {
        *(int *)((int)register0x00000054 + -0xc) = *_UNK_0062bdbc + 0x40;
        google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0062bd98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      unaff_lr = 0x62bda4;
      uVar3 = FUN_0009dbd4(4);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62bdb0;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.FilamentState.Type @ 0062bdc0 (size 84) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_FilamentState_Type
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  undefined8 uVar4;
  
  do {
    uVar4 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      bVar3 = *_UNK_0062be18 == 4;
      if (4 < *_UNK_0062be18) {
        iVar1 = *_UNK_0062be1c;
        *(undefined4 *)((int)register0x00000054 + 8) = _UNK_0062be20;
        *(int *)((int)register0x00000054 + 0xc) = iVar1 + 0x40;
                    /* WARNING: Could not recover jumptable at 0x0062bdf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0xc))();
        return;
      }
      unaff_lr = 0x62be04;
      uVar4 = FUN_0009dbd4(4);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62be10;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.FilamentState.Number @ 0062be24 (size 12) */

void k3c_internal_pkg_filament_ace_v2_FilamentState_Number(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0062be2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.FilamentState.EnumDescriptor @ 0062be34 (size 152) */

void k3c_internal_pkg_filament_ace_v2_FilamentState_EnumDescriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062bed4, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62bec8;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062bed8;
  uVar3 = *(undefined4 *)PTR_DAT_0062bedc;
  uVar4 = *(undefined4 *)PTR_DAT_0062bee0;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 4;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062bebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.DryState.Enum @ 0062bee8 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_DryState_Enum(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62bf20;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *uStack_8 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0062bf14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.DryState.String @ 0062bf2c (size 124) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_DryState_String
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      bVar2 = *_UNK_0062bfac == 5;
      if (5 < *_UNK_0062bfac) {
        *(int *)((int)register0x00000054 + -0x14) = *_UNK_0062bfb0 + 0x50;
        google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_EnumStringOf();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0062bf8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x18))();
        return;
      }
      unaff_lr = 0x62bf98;
      uVar3 = FUN_0009dbd4(5);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62bfa4;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.DryState.Descriptor @ 0062bfb4 (size 96) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_DryState_Descriptor
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      bVar2 = *_UNK_0062c018 == 5;
      if (5 < *_UNK_0062c018) {
        *(int *)((int)register0x00000054 + -0xc) = *_UNK_0062c01c + 0x50;
        google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0062bff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      unaff_lr = 0x62c004;
      uVar3 = FUN_0009dbd4(5);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62c010;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.DryState.Type @ 0062c020 (size 84) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_DryState_Type
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  undefined8 uVar4;
  
  do {
    uVar4 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      bVar3 = *_UNK_0062c078 == 5;
      if (5 < *_UNK_0062c078) {
        iVar1 = *_UNK_0062c07c;
        *(undefined4 *)((int)register0x00000054 + 8) = _UNK_0062c080;
        *(int *)((int)register0x00000054 + 0xc) = iVar1 + 0x50;
                    /* WARNING: Could not recover jumptable at 0x0062c058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0xc))();
        return;
      }
      unaff_lr = 0x62c064;
      uVar4 = FUN_0009dbd4(5);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62c070;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.DryState.Number @ 0062c084 (size 12) */

void k3c_internal_pkg_filament_ace_v2_DryState_Number(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0062c08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.DryState.EnumDescriptor @ 0062c094 (size 152) */

void k3c_internal_pkg_filament_ace_v2_DryState_EnumDescriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062c134, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62c128;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062c138;
  uVar3 = *(undefined4 *)PTR_DAT_0062c13c;
  uVar4 = *(undefined4 *)PTR_DAT_0062c140;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 5;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062c11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.KeyIndex.Enum @ 0062c148 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_KeyIndex_Enum(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62c180;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *uStack_8 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0062c174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.KeyIndex.String @ 0062c18c (size 124) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_KeyIndex_String
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      bVar2 = *_UNK_0062c20c == 6;
      if (6 < *_UNK_0062c20c) {
        *(int *)((int)register0x00000054 + -0x14) = *_UNK_0062c210 + 0x60;
        google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_EnumStringOf();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0062c1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x18))();
        return;
      }
      unaff_lr = 0x62c1f8;
      uVar3 = FUN_0009dbd4(6);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62c204;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.KeyIndex.Descriptor @ 0062c214 (size 96) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_KeyIndex_Descriptor
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      bVar2 = *_UNK_0062c278 == 6;
      if (6 < *_UNK_0062c278) {
        *(int *)((int)register0x00000054 + -0xc) = *_UNK_0062c27c + 0x60;
        google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0062c258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      unaff_lr = 0x62c264;
      uVar3 = FUN_0009dbd4(6);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62c270;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.KeyIndex.Type @ 0062c280 (size 84) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_KeyIndex_Type
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  undefined8 uVar4;
  
  do {
    uVar4 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      bVar3 = *_UNK_0062c2d8 == 6;
      if (6 < *_UNK_0062c2d8) {
        iVar1 = *_UNK_0062c2dc;
        *(undefined4 *)((int)register0x00000054 + 8) = _UNK_0062c2e0;
        *(int *)((int)register0x00000054 + 0xc) = iVar1 + 0x60;
                    /* WARNING: Could not recover jumptable at 0x0062c2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0xc))();
        return;
      }
      unaff_lr = 0x62c2c4;
      uVar4 = FUN_0009dbd4(6);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62c2d0;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.KeyIndex.Number @ 0062c2e4 (size 12) */

void k3c_internal_pkg_filament_ace_v2_KeyIndex_Number(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0062c2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.KeyIndex.EnumDescriptor @ 0062c2f4 (size 152) */

void k3c_internal_pkg_filament_ace_v2_KeyIndex_EnumDescriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062c394, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62c388;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062c398;
  uVar3 = *(undefined4 *)PTR_DAT_0062c39c;
  uVar4 = *(undefined4 *)PTR_DAT_0062c3a0;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 6;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062c37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.TestType.Enum @ 0062c3a8 (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_TestType_Enum(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62c3e0;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *uStack_8 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0062c3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.TestType.String @ 0062c3ec (size 124) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_TestType_String
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      bVar2 = *_UNK_0062c46c == 7;
      if (7 < *_UNK_0062c46c) {
        *(int *)((int)register0x00000054 + -0x14) = *_UNK_0062c470 + 0x70;
        google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_EnumStringOf();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0062c44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x18))();
        return;
      }
      unaff_lr = 0x62c458;
      uVar3 = FUN_0009dbd4(7);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62c464;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.TestType.Descriptor @ 0062c474 (size 96) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_TestType_Descriptor
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      bVar2 = *_UNK_0062c4d8 == 7;
      if (7 < *_UNK_0062c4d8) {
        *(int *)((int)register0x00000054 + -0xc) = *_UNK_0062c4dc + 0x70;
        google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0062c4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      unaff_lr = 0x62c4c4;
      uVar3 = FUN_0009dbd4(7);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62c4d0;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.TestType.Type @ 0062c4e0 (size 84) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_TestType_Type
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  undefined8 uVar4;
  
  do {
    uVar4 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      bVar3 = *_UNK_0062c538 == 7;
      if (7 < *_UNK_0062c538) {
        iVar1 = *_UNK_0062c53c;
        *(undefined4 *)((int)register0x00000054 + 8) = _UNK_0062c540;
        *(int *)((int)register0x00000054 + 0xc) = iVar1 + 0x70;
                    /* WARNING: Could not recover jumptable at 0x0062c518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0xc))();
        return;
      }
      unaff_lr = 0x62c524;
      uVar4 = FUN_0009dbd4(7);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62c530;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.TestType.Number @ 0062c544 (size 12) */

void k3c_internal_pkg_filament_ace_v2_TestType_Number(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0062c54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.TestType.EnumDescriptor @ 0062c554 (size 152) */

void k3c_internal_pkg_filament_ace_v2_TestType_EnumDescriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062c5f4, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62c5e8;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062c5f8;
  uVar3 = *(undefined4 *)PTR_DAT_0062c5fc;
  uVar4 = *(undefined4 *)PTR_DAT_0062c600;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 7;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062c5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*GenericRequest).Reset @ 0062c608 (size 160) */

void k3c_internal_pkg_filament_ace_v2___GenericRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062c6ac != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062c6b0;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009df00(0,uVar1);
      bVar3 = *(int *)PTR_DAT_0062c6b4 == 0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062c6b8;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -4);
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062c688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62c6a4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*GenericRequest).String @ 0062c6bc (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___GenericRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62c6fc;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062c6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*GenericRequest).ProtoMessage @ 0062c708 (size 4) */

void k3c_internal_pkg_filament_ace_v2___GenericRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062c708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*GenericRequest).ProtoReflect @ 0062c718 (size 200) */

void k3c_internal_pkg_filament_ace_v2___GenericRequest__ProtoReflect(undefined4 param_1)

{
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(int *)PTR_DAT_0062c7e4 == 0;
      if (!bVar2) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062c7e8;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062c7ec;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062c798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0x1c) = *(undefined4 *)PTR_DAT_0062c7e8;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062c7f0;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062c7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    unaff_lr = 0x62c7dc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*GenericRequest).Descriptor @ 0062c7f4 (size 144) */

void k3c_internal_pkg_filament_ace_v2___GenericRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062c88c, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62c880;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062c890;
  uVar3 = *(undefined4 *)PTR_DAT_0062c894;
  uVar4 = *(undefined4 *)PTR_DAT_0062c898;
  FUN_00022cf8();
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062c874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*GenericResponse).Reset @ 0062c8a0 (size 160) */

void k3c_internal_pkg_filament_ace_v2___GenericResponse__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062c944 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062c948;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009defc(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062c94c == 1;
      if (1 < *(uint *)PTR_DAT_0062c94c) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062c950;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0xbc;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062c924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(1);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62c93c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*GenericResponse).String @ 0062c954 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___GenericResponse__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62c994;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062c988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*GenericResponse).ProtoMessage @ 0062c9a0 (size 4) */

void k3c_internal_pkg_filament_ace_v2___GenericResponse__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062c9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*GenericResponse).ProtoReflect @ 0062c9b0 (size 200) */

void k3c_internal_pkg_filament_ace_v2___GenericResponse__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062ca7c == 1;
      if (1 < *(uint *)PTR_DAT_0062ca7c) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062ca80 + 0xbc;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062ca84;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062ca34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062ca80 + 0xbc;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062ca88;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062ca5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62ca68;
      uVar3 = FUN_0009dbd4(1);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62ca74;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*GenericResponse).Descriptor @ 0062ca8c (size 148) */

void k3c_internal_pkg_filament_ace_v2___GenericResponse__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062cb28, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62cb1c;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062cb2c;
  uVar3 = *(undefined4 *)PTR_DAT_0062cb30;
  uVar4 = *(undefined4 *)PTR_DAT_0062cb34;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 1;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*GenericResponse).GetCode @ 0062cb3c (size 36) */

void k3c_internal_pkg_filament_ace_v2___GenericResponse__GetCode(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0062cb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062cb5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DiscoverDeviceResponse).Reset @ 0062cb60 (size 160) */

void k3c_internal_pkg_filament_ace_v2___DiscoverDeviceResponse__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062cc04 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062cc08;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def4(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062cc0c == 2;
      if (2 < *(uint *)PTR_DAT_0062cc0c) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062cc10;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x178;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062cbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(2);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62cbfc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DiscoverDeviceResponse).String @ 0062cc14 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___DiscoverDeviceResponse__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62cc54;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062cc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DiscoverDeviceResponse).ProtoMessage @ 0062cc60 (size 4) */

void k3c_internal_pkg_filament_ace_v2___DiscoverDeviceResponse__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062cc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DiscoverDeviceResponse).ProtoReflect @ 0062cc70 (size 200) */

void k3c_internal_pkg_filament_ace_v2___DiscoverDeviceResponse__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062cd3c == 2;
      if (2 < *(uint *)PTR_DAT_0062cd3c) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062cd40 + 0x178;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062cd44;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062ccf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062cd40 + 0x178;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062cd48;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062cd1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62cd28;
      uVar3 = FUN_0009dbd4(2);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62cd34;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DiscoverDeviceResponse).Descriptor @ 0062cd4c (size 152) */

void k3c_internal_pkg_filament_ace_v2___DiscoverDeviceResponse__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062cdec, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62cde0;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062cdf0;
  uVar3 = *(undefined4 *)PTR_DAT_0062cdf4;
  uVar4 = *(undefined4 *)PTR_DAT_0062cdf8;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 2;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062cdd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DiscoverDeviceResponse).GetUid1 @ 0062ce00 (size 36) */

void k3c_internal_pkg_filament_ace_v2___DiscoverDeviceResponse__GetUid1(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0062ce14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062ce20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DiscoverDeviceResponse).GetUid2 @ 0062ce24 (size 36) */

void k3c_internal_pkg_filament_ace_v2___DiscoverDeviceResponse__GetUid2(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    return;
  }
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DiscoverDeviceResponse).GetUid3 @ 0062ce48 (size 36) */

void k3c_internal_pkg_filament_ace_v2___DiscoverDeviceResponse__GetUid3(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x0062ce5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062ce68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*AssignDeviceIdRequest).Reset @ 0062ce6c (size 160) */

void k3c_internal_pkg_filament_ace_v2___AssignDeviceIdRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062cf10 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062cf14;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def0(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062cf18 == 3;
      if (3 < *(uint *)PTR_DAT_0062cf18) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062cf1c;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x234;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062cef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(3);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62cf08;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*AssignDeviceIdRequest).String @ 0062cf20 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___AssignDeviceIdRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62cf60;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062cf54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*AssignDeviceIdRequest).ProtoMessage @ 0062cf6c (size 4) */

void k3c_internal_pkg_filament_ace_v2___AssignDeviceIdRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062cf6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*AssignDeviceIdRequest).ProtoReflect @ 0062cf7c (size 200) */

void k3c_internal_pkg_filament_ace_v2___AssignDeviceIdRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062d048 == 3;
      if (3 < *(uint *)PTR_DAT_0062d048) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062d04c + 0x234;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062d050;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062d000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062d04c + 0x234;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062d054;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062d028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62d034;
      uVar3 = FUN_0009dbd4(3);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62d040;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*AssignDeviceIdRequest).Descriptor @ 0062d058 (size 152) */

void k3c_internal_pkg_filament_ace_v2___AssignDeviceIdRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062d0f8, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62d0ec;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062d0fc;
  uVar3 = *(undefined4 *)PTR_DAT_0062d100;
  uVar4 = *(undefined4 *)PTR_DAT_0062d104;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 3;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062d0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*AssignDeviceIdRequest).GetUid1 @ 0062d10c (size 36) */

void k3c_internal_pkg_filament_ace_v2___AssignDeviceIdRequest__GetUid1(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0062d120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062d12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*AssignDeviceIdRequest).GetUid2 @ 0062d130 (size 36) */

void k3c_internal_pkg_filament_ace_v2___AssignDeviceIdRequest__GetUid2(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x0062d144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062d150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*AssignDeviceIdRequest).GetUid3 @ 0062d154 (size 36) */

void k3c_internal_pkg_filament_ace_v2___AssignDeviceIdRequest__GetUid3(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x0062d168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062d174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*AssignDeviceIdRequest).GetDeviceId @ 0062d178 (size 36) */

void k3c_internal_pkg_filament_ace_v2___AssignDeviceIdRequest__GetDeviceId(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0062d18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062d198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedOrRollbackRequest).Reset @ 0062d19c (size 160) */

void k3c_internal_pkg_filament_ace_v2___FeedOrRollbackRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062d240 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062d244;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def0(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062d248 == 4;
      if (4 < *(uint *)PTR_DAT_0062d248) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062d24c;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x2f0;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062d220. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(4);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62d238;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedOrRollbackRequest).String @ 0062d250 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___FeedOrRollbackRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62d290;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062d284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedOrRollbackRequest).ProtoMessage @ 0062d29c (size 4) */

void k3c_internal_pkg_filament_ace_v2___FeedOrRollbackRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062d29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedOrRollbackRequest).ProtoReflect @ 0062d2ac (size 200) */

void k3c_internal_pkg_filament_ace_v2___FeedOrRollbackRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062d378 == 4;
      if (4 < *(uint *)PTR_DAT_0062d378) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062d37c + 0x2f0;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062d380;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062d330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062d37c + 0x2f0;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062d384;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062d358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62d364;
      uVar3 = FUN_0009dbd4(4);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62d370;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedOrRollbackRequest).Descriptor @ 0062d388 (size 152) */

void k3c_internal_pkg_filament_ace_v2___FeedOrRollbackRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062d428, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62d41c;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062d42c;
  uVar3 = *(undefined4 *)PTR_DAT_0062d430;
  uVar4 = *(undefined4 *)PTR_DAT_0062d434;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 4;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062d410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedOrRollbackRequest).GetIndex @ 0062d43c (size 36) */

void k3c_internal_pkg_filament_ace_v2___FeedOrRollbackRequest__GetIndex(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0062d450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062d45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedOrRollbackRequest).GetSpeed @ 0062d460 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FeedOrRollbackRequest__GetSpeed(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x0062d474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062d480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedOrRollbackRequest).GetLength @ 0062d484 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FeedOrRollbackRequest__GetLength(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x0062d498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062d4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedOrRollbackRequest).GetMode @ 0062d4a8 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FeedOrRollbackRequest__GetMode(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0062d4bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062d4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*StopFeedOrRollbackRequest).Reset @ 0062d4cc (size 160) */

void k3c_internal_pkg_filament_ace_v2___StopFeedOrRollbackRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062d570 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062d574;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009defc(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062d578 == 5;
      if (5 < *(uint *)PTR_DAT_0062d578) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062d57c;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x3ac;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(5);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62d568;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*StopFeedOrRollbackRequest).String @ 0062d580 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___StopFeedOrRollbackRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62d5c0;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062d5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*StopFeedOrRollbackRequest).ProtoMessage @ 0062d5cc (size 4) */

void k3c_internal_pkg_filament_ace_v2___StopFeedOrRollbackRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062d5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*StopFeedOrRollbackRequest).ProtoReflect @ 0062d5dc (size 200) */

void k3c_internal_pkg_filament_ace_v2___StopFeedOrRollbackRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062d6a8 == 5;
      if (5 < *(uint *)PTR_DAT_0062d6a8) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062d6ac + 0x3ac;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062d6b0;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062d660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062d6ac + 0x3ac;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062d6b4;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062d688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62d694;
      uVar3 = FUN_0009dbd4(5);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62d6a0;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*StopFeedOrRollbackRequest).Descriptor @ 0062d6b8 (size 152) */

void k3c_internal_pkg_filament_ace_v2___StopFeedOrRollbackRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062d758, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62d74c;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062d75c;
  uVar3 = *(undefined4 *)PTR_DAT_0062d760;
  uVar4 = *(undefined4 *)PTR_DAT_0062d764;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 5;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062d740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*StopFeedOrRollbackRequest).GetIndex @ 0062d76c (size 36) */

void k3c_internal_pkg_filament_ace_v2___StopFeedOrRollbackRequest__GetIndex(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0062d780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062d78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*UpdateSpeedRequest).Reset @ 0062d790 (size 164) */

void k3c_internal_pkg_filament_ace_v2___UpdateSpeedRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062d838 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062d83c;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def8(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062d840 == 6;
      if (6 < *(uint *)PTR_DAT_0062d840) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062d844;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x468;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062d818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(6);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62d830;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*UpdateSpeedRequest).String @ 0062d848 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___UpdateSpeedRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62d888;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062d87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*UpdateSpeedRequest).ProtoMessage @ 0062d894 (size 4) */

void k3c_internal_pkg_filament_ace_v2___UpdateSpeedRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062d894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*UpdateSpeedRequest).ProtoReflect @ 0062d8a4 (size 204) */

void k3c_internal_pkg_filament_ace_v2___UpdateSpeedRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062d974 == 6;
      if (6 < *(uint *)PTR_DAT_0062d974) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062d978 + 0x468;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062d97c;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062d92c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062d978 + 0x468;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062d980;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062d954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62d960;
      uVar3 = FUN_0009dbd4(6);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62d96c;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*UpdateSpeedRequest).Descriptor @ 0062d984 (size 152) */

void k3c_internal_pkg_filament_ace_v2___UpdateSpeedRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062da24, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62da18;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062da28;
  uVar3 = *(undefined4 *)PTR_DAT_0062da2c;
  uVar4 = *(undefined4 *)PTR_DAT_0062da30;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 6;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062da0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*UpdateSpeedRequest).GetIndex @ 0062da38 (size 36) */

void k3c_internal_pkg_filament_ace_v2___UpdateSpeedRequest__GetIndex(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0062da4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062da58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*UpdateSpeedRequest).GetSpeed @ 0062da5c (size 36) */

void k3c_internal_pkg_filament_ace_v2___UpdateSpeedRequest__GetSpeed(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x0062da70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062da7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedInfo).Reset @ 0062da80 (size 164) */

void k3c_internal_pkg_filament_ace_v2___FeedInfo__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062db28 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062db2c;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def4(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062db30 == 7;
      if (7 < *(uint *)PTR_DAT_0062db30) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062db34;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x524;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062db08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(7);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62db20;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedInfo).String @ 0062db38 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___FeedInfo__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62db78;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062db6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedInfo).ProtoMessage @ 0062db84 (size 4) */

void k3c_internal_pkg_filament_ace_v2___FeedInfo__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062db84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedInfo).ProtoReflect @ 0062db94 (size 204) */

void k3c_internal_pkg_filament_ace_v2___FeedInfo__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062dc64 == 7;
      if (7 < *(uint *)PTR_DAT_0062dc64) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062dc68 + 0x524;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062dc6c;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062dc1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062dc68 + 0x524;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062dc70;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062dc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62dc50;
      uVar3 = FUN_0009dbd4(7);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62dc5c;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedInfo).Descriptor @ 0062dc74 (size 152) */

void k3c_internal_pkg_filament_ace_v2___FeedInfo__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062dd14, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62dd08;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062dd18;
  uVar3 = *(undefined4 *)PTR_DAT_0062dd1c;
  uVar4 = *(undefined4 *)PTR_DAT_0062dd20;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 7;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062dcfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedInfo).GetSteps @ 0062dd28 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FeedInfo__GetSteps(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0062dd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062dd48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedInfo).GetLength @ 0062dd4c (size 36) */

void k3c_internal_pkg_filament_ace_v2___FeedInfo__GetLength(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x0062dd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062dd6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedInfo).GetDecoder @ 0062dd70 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FeedInfo__GetDecoder(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x0062dd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062dd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedInfoResponse).Reset @ 0062dd94 (size 160) */

void k3c_internal_pkg_filament_ace_v2___FeedInfoResponse__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062de38 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062de3c;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def4(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062de40 == 8;
      if (8 < *(uint *)PTR_DAT_0062de40) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062de44;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x5e0;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062de18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(8);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62de30;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedInfoResponse).String @ 0062de48 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___FeedInfoResponse__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62de88;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062de7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedInfoResponse).ProtoMessage @ 0062de94 (size 4) */

void k3c_internal_pkg_filament_ace_v2___FeedInfoResponse__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062de94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedInfoResponse).ProtoReflect @ 0062dea4 (size 200) */

void k3c_internal_pkg_filament_ace_v2___FeedInfoResponse__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062df70 == 8;
      if (8 < *(uint *)PTR_DAT_0062df70) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062df74 + 0x5e0;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062df78;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062df28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062df74 + 0x5e0;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062df7c;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62df5c;
      uVar3 = FUN_0009dbd4(8);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62df68;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedInfoResponse).Descriptor @ 0062df80 (size 152) */

void k3c_internal_pkg_filament_ace_v2___FeedInfoResponse__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062e020, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62e014;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062e024;
  uVar3 = *(undefined4 *)PTR_DAT_0062e028;
  uVar4 = *(undefined4 *)PTR_DAT_0062e02c;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 8;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062e008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedInfoResponse).GetFeedInfo @ 0062e034 (size 64) */

void k3c_internal_pkg_filament_ace_v2___FeedInfoResponse__GetFeedInfo(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
    uStack0000000c = *(undefined4 *)(in_stack_00000004 + 8);
    uStack00000010 = *(undefined4 *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x0062e058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
  uStack0000000c = 0;
  uStack00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062e070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFeedCheckRequest).Reset @ 0062e074 (size 164) */

void k3c_internal_pkg_filament_ace_v2___SetFeedCheckRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062e11c != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062e120;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def8(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062e124 == 9;
      if (9 < *(uint *)PTR_DAT_0062e124) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062e128;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x69c;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062e0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(9);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62e114;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFeedCheckRequest).String @ 0062e12c (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___SetFeedCheckRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62e16c;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062e160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFeedCheckRequest).ProtoMessage @ 0062e178 (size 4) */

void k3c_internal_pkg_filament_ace_v2___SetFeedCheckRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062e178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFeedCheckRequest).ProtoReflect @ 0062e188 (size 204) */

void k3c_internal_pkg_filament_ace_v2___SetFeedCheckRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062e258 == 9;
      if (9 < *(uint *)PTR_DAT_0062e258) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062e25c + 0x69c;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062e260;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062e210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062e25c + 0x69c;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062e264;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062e238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62e244;
      uVar3 = FUN_0009dbd4(9);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62e250;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFeedCheckRequest).Descriptor @ 0062e268 (size 152) */

void k3c_internal_pkg_filament_ace_v2___SetFeedCheckRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062e308, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62e2fc;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062e30c;
  uVar3 = *(undefined4 *)PTR_DAT_0062e310;
  uVar4 = *(undefined4 *)PTR_DAT_0062e314;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 9;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062e2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFeedCheckRequest).GetCheckLength @ 0062e31c (size 36) */

void k3c_internal_pkg_filament_ace_v2___SetFeedCheckRequest__GetCheckLength(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0062e330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062e33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFeedCheckRequest).GetErrorLength @ 0062e340 (size 36) */

void k3c_internal_pkg_filament_ace_v2___SetFeedCheckRequest__GetErrorLength(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062e360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryingRequest).Reset @ 0062e364 (size 164) */

void k3c_internal_pkg_filament_ace_v2___DryingRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062e40c != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062e410;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def4(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062e414 == 10;
      if (10 < *(uint *)PTR_DAT_0062e414) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062e418;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x758;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062e3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(10);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62e404;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DryingRequest).String @ 0062e41c (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___DryingRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62e45c;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062e450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryingRequest).ProtoMessage @ 0062e468 (size 4) */

void k3c_internal_pkg_filament_ace_v2___DryingRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062e468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryingRequest).ProtoReflect @ 0062e478 (size 204) */

void k3c_internal_pkg_filament_ace_v2___DryingRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062e548 == 10;
      if (10 < *(uint *)PTR_DAT_0062e548) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062e54c + 0x758;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062e550;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062e500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062e54c + 0x758;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062e554;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062e528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62e534;
      uVar3 = FUN_0009dbd4(10);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62e540;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DryingRequest).Descriptor @ 0062e558 (size 152) */

void k3c_internal_pkg_filament_ace_v2___DryingRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062e5f8, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62e5ec;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062e5fc;
  uVar3 = *(undefined4 *)PTR_DAT_0062e600;
  uVar4 = *(undefined4 *)PTR_DAT_0062e604;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 10;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062e5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryingRequest).GetTemp @ 0062e60c (size 36) */

void k3c_internal_pkg_filament_ace_v2___DryingRequest__GetTemp(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0062e620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062e62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryingRequest).GetDuration @ 0062e630 (size 36) */

void k3c_internal_pkg_filament_ace_v2___DryingRequest__GetDuration(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x0062e644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062e650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryingRequest).GetAutoRoll @ 0062e654 (size 36) */

void k3c_internal_pkg_filament_ace_v2___DryingRequest__GetAutoRoll(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined1 *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x0062e668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062e674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*GetTempResponse).Reset @ 0062e678 (size 164) */

void k3c_internal_pkg_filament_ace_v2___GetTempResponse__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062e720 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062e724;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009dee8(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062e728 == 0xb;
      if (0xb < *(uint *)PTR_DAT_0062e728) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062e72c;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x814;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062e700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0xb);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62e718;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*GetTempResponse).String @ 0062e730 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___GetTempResponse__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62e770;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062e764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*GetTempResponse).ProtoMessage @ 0062e77c (size 4) */

void k3c_internal_pkg_filament_ace_v2___GetTempResponse__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062e77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*GetTempResponse).ProtoReflect @ 0062e78c (size 204) */

void k3c_internal_pkg_filament_ace_v2___GetTempResponse__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062e85c == 0xb;
      if (0xb < *(uint *)PTR_DAT_0062e85c) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062e860 + 0x814;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062e864;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062e814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062e860 + 0x814;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062e868;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062e83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62e848;
      uVar3 = FUN_0009dbd4(0xb);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62e854;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*GetTempResponse).Descriptor @ 0062e86c (size 152) */

void k3c_internal_pkg_filament_ace_v2___GetTempResponse__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062e90c, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62e900;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062e910;
  uVar3 = *(undefined4 *)PTR_DAT_0062e914;
  uVar4 = *(undefined4 *)PTR_DAT_0062e918;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0xb;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062e8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*GetTempResponse).GetBox1Temp @ 0062e920 (size 40) */

void k3c_internal_pkg_filament_ace_v2___GetTempResponse__GetBox1Temp(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0062e934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062e944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*GetTempResponse).GetBox2Temp @ 0062e948 (size 40) */

void k3c_internal_pkg_filament_ace_v2___GetTempResponse__GetBox2Temp(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x0062e95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062e96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*GetTempResponse).GetPtc1Temp @ 0062e970 (size 40) */

void k3c_internal_pkg_filament_ace_v2___GetTempResponse__GetPtc1Temp(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x0062e984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062e994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*GetTempResponse).GetPtc2Temp @ 0062e998 (size 40) */

void k3c_internal_pkg_filament_ace_v2___GetTempResponse__GetPtc2Temp(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0062e9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062e9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*GetTempResponse).GetEnvTemp @ 0062e9c0 (size 40) */

void k3c_internal_pkg_filament_ace_v2___GetTempResponse__GetEnvTemp(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x0062e9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062e9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*GetTempResponse).GetEnvHumidity @ 0062e9e8 (size 40) */

void k3c_internal_pkg_filament_ace_v2___GetTempResponse__GetEnvHumidity(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0062e9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062ea0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetDryTempRequest).Reset @ 0062ea10 (size 160) */

void k3c_internal_pkg_filament_ace_v2___SetDryTempRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062eab4 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062eab8;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009defc(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062eabc == 0xc;
      if (0xc < *(uint *)PTR_DAT_0062eabc) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062eac0;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x8d0;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062ea94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0xc);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62eaac;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetDryTempRequest).String @ 0062eac4 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___SetDryTempRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62eb04;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062eaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetDryTempRequest).ProtoMessage @ 0062eb10 (size 4) */

void k3c_internal_pkg_filament_ace_v2___SetDryTempRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062eb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetDryTempRequest).ProtoReflect @ 0062eb20 (size 200) */

void k3c_internal_pkg_filament_ace_v2___SetDryTempRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062ebec == 0xc;
      if (0xc < *(uint *)PTR_DAT_0062ebec) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062ebf0 + 0x8d0;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062ebf4;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062eba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062ebf0 + 0x8d0;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062ebf8;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062ebcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62ebd8;
      uVar3 = FUN_0009dbd4(0xc);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62ebe4;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetDryTempRequest).Descriptor @ 0062ebfc (size 152) */

void k3c_internal_pkg_filament_ace_v2___SetDryTempRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062ec9c, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62ec90;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062eca0;
  uVar3 = *(undefined4 *)PTR_DAT_0062eca4;
  uVar4 = *(undefined4 *)PTR_DAT_0062eca8;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0xc;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062ec84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetDryTempRequest).GetTemp @ 0062ecb0 (size 36) */

void k3c_internal_pkg_filament_ace_v2___SetDryTempRequest__GetTemp(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0062ecc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062ecd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetDryPowerRequest).Reset @ 0062ecd4 (size 164) */

void k3c_internal_pkg_filament_ace_v2___SetDryPowerRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062ed7c != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062ed80;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009defc(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062ed84 == 0xd;
      if (0xd < *(uint *)PTR_DAT_0062ed84) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062ed88;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x98c;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062ed5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0xd);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62ed74;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetDryPowerRequest).String @ 0062ed8c (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___SetDryPowerRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62edcc;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062edc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetDryPowerRequest).ProtoMessage @ 0062edd8 (size 4) */

void k3c_internal_pkg_filament_ace_v2___SetDryPowerRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062edd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetDryPowerRequest).ProtoReflect @ 0062ede8 (size 204) */

void k3c_internal_pkg_filament_ace_v2___SetDryPowerRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062eeb8 == 0xd;
      if (0xd < *(uint *)PTR_DAT_0062eeb8) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062eebc + 0x98c;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062eec0;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062ee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062eebc + 0x98c;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062eec4;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062ee98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62eea4;
      uVar3 = FUN_0009dbd4(0xd);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62eeb0;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetDryPowerRequest).Descriptor @ 0062eec8 (size 152) */

void k3c_internal_pkg_filament_ace_v2___SetDryPowerRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062ef68, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62ef5c;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062ef6c;
  uVar3 = *(undefined4 *)PTR_DAT_0062ef70;
  uVar4 = *(undefined4 *)PTR_DAT_0062ef74;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0xd;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062ef50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetDryPowerRequest).GetPower @ 0062ef7c (size 36) */

void k3c_internal_pkg_filament_ace_v2___SetDryPowerRequest__GetPower(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0062ef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062ef9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetValveRequest).Reset @ 0062efa0 (size 164) */

void k3c_internal_pkg_filament_ace_v2___SetValveRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062f048 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062f04c;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009defc(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062f050 == 0xe;
      if (0xe < *(uint *)PTR_DAT_0062f050) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062f054;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0xa48;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062f028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0xe);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62f040;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetValveRequest).String @ 0062f058 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___SetValveRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62f098;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062f08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetValveRequest).ProtoMessage @ 0062f0a4 (size 4) */

void k3c_internal_pkg_filament_ace_v2___SetValveRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062f0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetValveRequest).ProtoReflect @ 0062f0b4 (size 204) */

void k3c_internal_pkg_filament_ace_v2___SetValveRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062f184 == 0xe;
      if (0xe < *(uint *)PTR_DAT_0062f184) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062f188 + 0xa48;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062f18c;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062f13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062f188 + 0xa48;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062f190;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062f164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62f170;
      uVar3 = FUN_0009dbd4(0xe);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62f17c;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetValveRequest).Descriptor @ 0062f194 (size 152) */

void k3c_internal_pkg_filament_ace_v2___SetValveRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062f234, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62f228;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062f238;
  uVar3 = *(undefined4 *)PTR_DAT_0062f23c;
  uVar4 = *(undefined4 *)PTR_DAT_0062f240;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0xe;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062f21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetValveRequest).GetValve1 @ 0062f248 (size 36) */

void k3c_internal_pkg_filament_ace_v2___SetValveRequest__GetValve1(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined1 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0062f25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062f268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetValveRequest).GetValve2 @ 0062f26c (size 36) */

void k3c_internal_pkg_filament_ace_v2___SetValveRequest__GetValve2(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined1 *)(in_stack_00000004 + 5);
                    /* WARNING: Could not recover jumptable at 0x0062f280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062f28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryTestRequest).Reset @ 0062f290 (size 164) */

void k3c_internal_pkg_filament_ace_v2___DryTestRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062f338 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062f33c;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009defc(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062f340 == 0xf;
      if (0xf < *(uint *)PTR_DAT_0062f340) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062f344;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0xb04;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062f318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0xf);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62f330;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DryTestRequest).String @ 0062f348 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___DryTestRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62f388;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062f37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryTestRequest).ProtoMessage @ 0062f394 (size 4) */

void k3c_internal_pkg_filament_ace_v2___DryTestRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062f394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryTestRequest).ProtoReflect @ 0062f3a4 (size 204) */

void k3c_internal_pkg_filament_ace_v2___DryTestRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062f474 == 0xf;
      if (0xf < *(uint *)PTR_DAT_0062f474) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062f478 + 0xb04;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062f47c;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062f42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062f478 + 0xb04;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062f480;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062f454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62f460;
      uVar3 = FUN_0009dbd4(0xf);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62f46c;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DryTestRequest).Descriptor @ 0062f484 (size 152) */

void k3c_internal_pkg_filament_ace_v2___DryTestRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062f524, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62f518;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062f528;
  uVar3 = *(undefined4 *)PTR_DAT_0062f52c;
  uVar4 = *(undefined4 *)PTR_DAT_0062f530;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0xf;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062f50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryTestRequest).GetEnable @ 0062f538 (size 36) */

void k3c_internal_pkg_filament_ace_v2___DryTestRequest__GetEnable(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined1 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0062f54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062f558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*UpgradeRequest).Reset @ 0062f55c (size 160) */

void k3c_internal_pkg_filament_ace_v2___UpgradeRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062f600 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062f604;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def0(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062f608 == 0x10;
      if (0x10 < *(uint *)PTR_DAT_0062f608) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062f60c;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0xbc0;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062f5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x10);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62f5f8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*UpgradeRequest).String @ 0062f610 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___UpgradeRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62f650;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062f644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*UpgradeRequest).ProtoMessage @ 0062f65c (size 4) */

void k3c_internal_pkg_filament_ace_v2___UpgradeRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062f65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*UpgradeRequest).ProtoReflect @ 0062f66c (size 200) */

void k3c_internal_pkg_filament_ace_v2___UpgradeRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062f738 == 0x10;
      if (0x10 < *(uint *)PTR_DAT_0062f738) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062f73c + 0xbc0;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062f740;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062f6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062f73c + 0xbc0;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062f744;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062f718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62f724;
      uVar3 = FUN_0009dbd4(0x10);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62f730;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*UpgradeRequest).Descriptor @ 0062f748 (size 152) */

void k3c_internal_pkg_filament_ace_v2___UpgradeRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062f7e8, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62f7dc;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062f7ec;
  uVar3 = *(undefined4 *)PTR_DAT_0062f7f0;
  uVar4 = *(undefined4 *)PTR_DAT_0062f7f4;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x10;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062f7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*UpgradeRequest).GetSize @ 0062f7fc (size 36) */

void k3c_internal_pkg_filament_ace_v2___UpgradeRequest__GetSize(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0062f810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062f81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*UpgradeRequest).GetCrc @ 0062f820 (size 36) */

void k3c_internal_pkg_filament_ace_v2___UpgradeRequest__GetCrc(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x0062f834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062f840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*UpgradeRequest).GetVersion @ 0062f844 (size 52) */

void k3c_internal_pkg_filament_ace_v2___UpgradeRequest__GetVersion(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
    uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0062f860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
  uStack0000000c = 0;
                    /* WARNING: Could not recover jumptable at 0x0062f874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FirmwareRequest).Reset @ 0062f878 (size 164) */

void k3c_internal_pkg_filament_ace_v2___FirmwareRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062f920 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062f924;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def0(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062f928 == 0x11;
      if (0x11 < *(uint *)PTR_DAT_0062f928) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062f92c;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0xc7c;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062f900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x11);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62f918;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FirmwareRequest).String @ 0062f930 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___FirmwareRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62f970;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062f964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FirmwareRequest).ProtoMessage @ 0062f97c (size 4) */

void k3c_internal_pkg_filament_ace_v2___FirmwareRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062f97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FirmwareRequest).ProtoReflect @ 0062f98c (size 204) */

void k3c_internal_pkg_filament_ace_v2___FirmwareRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062fa5c == 0x11;
      if (0x11 < *(uint *)PTR_DAT_0062fa5c) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062fa60 + 0xc7c;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062fa64;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062fa14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062fa60 + 0xc7c;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062fa68;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062fa3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62fa48;
      uVar3 = FUN_0009dbd4(0x11);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62fa54;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FirmwareRequest).Descriptor @ 0062fa6c (size 152) */

void k3c_internal_pkg_filament_ace_v2___FirmwareRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062fb0c, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62fb00;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062fb10;
  uVar3 = *(undefined4 *)PTR_DAT_0062fb14;
  uVar4 = *(undefined4 *)PTR_DAT_0062fb18;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x11;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062faf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FirmwareRequest).GetAddress @ 0062fb20 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FirmwareRequest__GetAddress(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0062fb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0062fb40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FirmwareRequest).GetFirmware @ 0062fb44 (size 64) */

void k3c_internal_pkg_filament_ace_v2___FirmwareRequest__GetFirmware(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
    uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0xc);
    uStack00000010 = *(undefined4 *)(in_stack_00000004 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0062fb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*VersionResponse).Reset @ 0062fb84 (size 164) */

void k3c_internal_pkg_filament_ace_v2___VersionResponse__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062fc2c != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062fc30;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def0(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062fc34 == 0x12;
      if (0x12 < *(uint *)PTR_DAT_0062fc34) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062fc38;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0xd38;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0062fc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x12);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62fc24;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*VersionResponse).String @ 0062fc3c (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___VersionResponse__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62fc7c;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062fc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*VersionResponse).ProtoMessage @ 0062fc88 (size 4) */

void k3c_internal_pkg_filament_ace_v2___VersionResponse__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062fc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*VersionResponse).ProtoReflect @ 0062fc98 (size 204) */

void k3c_internal_pkg_filament_ace_v2___VersionResponse__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0062fd68 == 0x12;
      if (0x12 < *(uint *)PTR_DAT_0062fd68) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0062fd6c + 0xd38;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0062fd70;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0062fd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0062fd6c + 0xd38;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0062fd74;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0062fd48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x62fd54;
      uVar3 = FUN_0009dbd4(0x12);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x62fd60;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*VersionResponse).Descriptor @ 0062fd78 (size 152) */

void k3c_internal_pkg_filament_ace_v2___VersionResponse__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0062fe18, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62fe0c;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0062fe1c;
  uVar3 = *(undefined4 *)PTR_DAT_0062fe20;
  uVar4 = *(undefined4 *)PTR_DAT_0062fe24;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x12;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0062fe00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*VersionResponse).GetVersion @ 0062fe2c (size 52) */

void k3c_internal_pkg_filament_ace_v2___VersionResponse__GetVersion(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
    uStack0000000c = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x0062fe48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
  uStack0000000c = 0;
                    /* WARNING: Could not recover jumptable at 0x0062fe5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*VersionResponse).GetBootVersion @ 0062fe60 (size 52) */

void k3c_internal_pkg_filament_ace_v2___VersionResponse__GetBootVersion(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
    uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0062fe7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
  uStack0000000c = 0;
                    /* WARNING: Could not recover jumptable at 0x0062fe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*RfidRequest).Reset @ 0062fe94 (size 164) */

void k3c_internal_pkg_filament_ace_v2___RfidRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0062ff3c != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0062ff40;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009defc(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0062ff44 == 0x13;
      if (0x13 < *(uint *)PTR_DAT_0062ff44) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0062ff48;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0xdf4;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
        return;
      }
      param_1 = FUN_0009dbd4(0x13);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x62ff34;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*RfidRequest).String @ 0062ff4c (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___RfidRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x62ff8c;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0062ff80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*RfidRequest).ProtoMessage @ 0062ff98 (size 4) */

void k3c_internal_pkg_filament_ace_v2___RfidRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0062ff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*RfidRequest).ProtoReflect @ 0062ffa8 (size 204) */

void k3c_internal_pkg_filament_ace_v2___RfidRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_00630078 == 0x13;
      if (0x13 < *(uint *)PTR_DAT_00630078) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0063007c + 0xdf4;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_00630080;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x00630030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0063007c + 0xdf4;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00630084;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x00630058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x630064;
      uVar3 = FUN_0009dbd4(0x13);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x630070;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*RfidRequest).Descriptor @ 00630088 (size 152) */

void k3c_internal_pkg_filament_ace_v2___RfidRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_00630128, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x63011c;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0063012c;
  uVar3 = *(undefined4 *)PTR_DAT_00630130;
  uVar4 = *(undefined4 *)PTR_DAT_00630134;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x13;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00630110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*RfidRequest).GetIndex @ 0063013c (size 36) */

void k3c_internal_pkg_filament_ace_v2___RfidRequest__GetIndex(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00630150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0063015c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetRfidEnableRequest).Reset @ 00630160 (size 160) */

void k3c_internal_pkg_filament_ace_v2___SetRfidEnableRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_00630204 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00630208;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def8(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0063020c == 0x14;
      if (0x14 < *(uint *)PTR_DAT_0063020c) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_00630210;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0xeb0;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x006301e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x14);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6301fc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetRfidEnableRequest).String @ 00630214 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___SetRfidEnableRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x630254;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x00630248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetRfidEnableRequest).ProtoMessage @ 00630260 (size 4) */

void k3c_internal_pkg_filament_ace_v2___SetRfidEnableRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00630260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetRfidEnableRequest).ProtoReflect @ 00630270 (size 200) */

void k3c_internal_pkg_filament_ace_v2___SetRfidEnableRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0063033c == 0x14;
      if (0x14 < *(uint *)PTR_DAT_0063033c) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_00630340 + 0xeb0;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_00630344;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_00630340 + 0xeb0;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00630348;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        return;
      }
      unaff_lr = 0x630328;
      uVar3 = FUN_0009dbd4(0x14);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x630334;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetRfidEnableRequest).Descriptor @ 0063034c (size 152) */

void k3c_internal_pkg_filament_ace_v2___SetRfidEnableRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_006303ec, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6303e0;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_006303f0;
  uVar3 = *(undefined4 *)PTR_DAT_006303f4;
  uVar4 = *(undefined4 *)PTR_DAT_006303f8;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x14;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x006303d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetRfidEnableRequest).GetIndex @ 00630400 (size 36) */

void k3c_internal_pkg_filament_ace_v2___SetRfidEnableRequest__GetIndex(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00630414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00630420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetRfidEnableRequest).GetEnable @ 00630424 (size 36) */

void k3c_internal_pkg_filament_ace_v2___SetRfidEnableRequest__GetEnable(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined1 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x00630438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00630444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FlashLedRequest).Reset @ 00630448 (size 164) */

void k3c_internal_pkg_filament_ace_v2___FlashLedRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_006304f0 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_006304f4;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009dee8(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_006304f8 == 0x15;
      if (0x15 < *(uint *)PTR_DAT_006304f8) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_006304fc;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0xf6c;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x006304d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x15);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6304e8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FlashLedRequest).String @ 00630500 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___FlashLedRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x630540;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x00630534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FlashLedRequest).ProtoMessage @ 0063054c (size 4) */

void k3c_internal_pkg_filament_ace_v2___FlashLedRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0063054c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FlashLedRequest).ProtoReflect @ 0063055c (size 204) */

void k3c_internal_pkg_filament_ace_v2___FlashLedRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0063062c == 0x15;
      if (0x15 < *(uint *)PTR_DAT_0063062c) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_00630630 + 0xf6c;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_00630634;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x006305e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_00630630 + 0xf6c;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00630638;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0063060c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x630618;
      uVar3 = FUN_0009dbd4(0x15);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x630624;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FlashLedRequest).Descriptor @ 0063063c (size 152) */

void k3c_internal_pkg_filament_ace_v2___FlashLedRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_006306dc, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6306d0;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_006306e0;
  uVar3 = *(undefined4 *)PTR_DAT_006306e4;
  uVar4 = *(undefined4 *)PTR_DAT_006306e8;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x15;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x006306c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FlashLedRequest).GetComponents @ 006306f0 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FlashLedRequest__GetComponents(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00630704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00630710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FlashLedRequest).GetLoop @ 00630714 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FlashLedRequest__GetLoop(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x00630728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00630734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FlashLedRequest).GetQuick1 @ 00630738 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FlashLedRequest__GetQuick1(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x0063074c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FlashLedRequest).GetSlow1 @ 0063075c (size 36) */

void k3c_internal_pkg_filament_ace_v2___FlashLedRequest__GetSlow1(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00630770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0063077c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FlashLedRequest).GetQuick2 @ 00630780 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FlashLedRequest__GetQuick2(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x00630794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x006307a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FlashLedRequest).GetSlow2 @ 006307a4 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FlashLedRequest__GetSlow2(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x006307b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x006307c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFanRequest).Reset @ 006307c8 (size 164) */

void k3c_internal_pkg_filament_ace_v2___SetFanRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_00630870 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00630874;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def8(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_00630878 == 0x16;
      if (0x16 < *(uint *)PTR_DAT_00630878) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0063087c;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x1028;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x00630850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x16);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x630868;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFanRequest).String @ 00630880 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___SetFanRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6308c0;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x006308b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFanRequest).ProtoMessage @ 006308cc (size 4) */

void k3c_internal_pkg_filament_ace_v2___SetFanRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x006308cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFanRequest).ProtoReflect @ 006308dc (size 204) */

void k3c_internal_pkg_filament_ace_v2___SetFanRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_006309ac == 0x16;
      if (0x16 < *(uint *)PTR_DAT_006309ac) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_006309b0 + 0x1028;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_006309b4;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x00630964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_006309b0 + 0x1028;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006309b8;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0063098c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x630998;
      uVar3 = FUN_0009dbd4(0x16);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x6309a4;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFanRequest).Descriptor @ 006309bc (size 152) */

void k3c_internal_pkg_filament_ace_v2___SetFanRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_00630a5c, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x630a50;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_00630a60;
  uVar3 = *(undefined4 *)PTR_DAT_00630a64;
  uVar4 = *(undefined4 *)PTR_DAT_00630a68;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x16;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00630a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFanRequest).GetSpeed @ 00630a70 (size 36) */

void k3c_internal_pkg_filament_ace_v2___SetFanRequest__GetSpeed(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00630a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00630a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFanRequest).GetFan1 @ 00630a94 (size 36) */

void k3c_internal_pkg_filament_ace_v2___SetFanRequest__GetFan1(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined1 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x00630aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00630ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFanRequest).GetFan2 @ 00630ab8 (size 36) */

void k3c_internal_pkg_filament_ace_v2___SetFanRequest__GetFan2(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined1 *)(in_stack_00000004 + 9);
                    /* WARNING: Could not recover jumptable at 0x00630acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00630ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetOutputRequest).Reset @ 00630adc (size 164) */

void k3c_internal_pkg_filament_ace_v2___SetOutputRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_00630b84 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00630b88;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def8(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_00630b8c == 0x17;
      if (0x17 < *(uint *)PTR_DAT_00630b8c) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_00630b90;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x10e4;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x00630b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x17);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x630b7c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetOutputRequest).String @ 00630b94 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___SetOutputRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x630bd4;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x00630bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetOutputRequest).ProtoMessage @ 00630be0 (size 4) */

void k3c_internal_pkg_filament_ace_v2___SetOutputRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00630be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetOutputRequest).ProtoReflect @ 00630bf0 (size 204) */

void k3c_internal_pkg_filament_ace_v2___SetOutputRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_00630cc0 == 0x17;
      if (0x17 < *(uint *)PTR_DAT_00630cc0) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_00630cc4 + 0x10e4;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_00630cc8;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x00630c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_00630cc4 + 0x10e4;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00630ccc;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x00630ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x630cac;
      uVar3 = FUN_0009dbd4(0x17);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x630cb8;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetOutputRequest).Descriptor @ 00630cd0 (size 152) */

void k3c_internal_pkg_filament_ace_v2___SetOutputRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_00630d70, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x630d64;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_00630d74;
  uVar3 = *(undefined4 *)PTR_DAT_00630d78;
  uVar4 = *(undefined4 *)PTR_DAT_00630d7c;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x17;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00630d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetOutputRequest).GetComponents @ 00630d84 (size 36) */

void k3c_internal_pkg_filament_ace_v2___SetOutputRequest__GetComponents(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00630d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00630da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetOutputRequest).GetState @ 00630da8 (size 36) */

void k3c_internal_pkg_filament_ace_v2___SetOutputRequest__GetState(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x00630dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00630dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetKeyLogEnableRequest).Reset @ 00630dcc (size 164) */

void k3c_internal_pkg_filament_ace_v2___SetKeyLogEnableRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_00630e74 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00630e78;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009defc(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_00630e7c == 0x18;
      if (0x18 < *(uint *)PTR_DAT_00630e7c) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_00630e80;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x11a0;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x00630e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x18);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x630e6c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetKeyLogEnableRequest).String @ 00630e84 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___SetKeyLogEnableRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x630ec4;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x00630eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetKeyLogEnableRequest).ProtoMessage @ 00630ed0 (size 4) */

void k3c_internal_pkg_filament_ace_v2___SetKeyLogEnableRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00630ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetKeyLogEnableRequest).ProtoReflect @ 00630ee0 (size 204) */

void k3c_internal_pkg_filament_ace_v2___SetKeyLogEnableRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_00630fb0 == 0x18;
      if (0x18 < *(uint *)PTR_DAT_00630fb0) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_00630fb4 + 0x11a0;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_00630fb8;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x00630f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_00630fb4 + 0x11a0;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00630fbc;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x00630f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x630f9c;
      uVar3 = FUN_0009dbd4(0x18);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x630fa8;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetKeyLogEnableRequest).Descriptor @ 00630fc0 (size 152) */

void k3c_internal_pkg_filament_ace_v2___SetKeyLogEnableRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_00631060, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x631054;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_00631064;
  uVar3 = *(undefined4 *)PTR_DAT_00631068;
  uVar4 = *(undefined4 *)PTR_DAT_0063106c;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x18;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00631048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SetKeyLogEnableRequest).GetEnable @ 00631074 (size 36) */

void k3c_internal_pkg_filament_ace_v2___SetKeyLogEnableRequest__GetEnable(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined1 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00631088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00631094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*KeyStateResponse).Reset @ 00631098 (size 164) */

void k3c_internal_pkg_filament_ace_v2___KeyStateResponse__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_00631140 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00631144;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009defc(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_00631148 == 0x19;
      if (0x19 < *(uint *)PTR_DAT_00631148) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_0063114c;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x125c;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x00631120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x19);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x631138;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*KeyStateResponse).String @ 00631150 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___KeyStateResponse__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x631190;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x00631184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*KeyStateResponse).ProtoMessage @ 0063119c (size 4) */

void k3c_internal_pkg_filament_ace_v2___KeyStateResponse__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0063119c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*KeyStateResponse).ProtoReflect @ 006311ac (size 204) */

void k3c_internal_pkg_filament_ace_v2___KeyStateResponse__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0063127c == 0x19;
      if (0x19 < *(uint *)PTR_DAT_0063127c) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_00631280 + 0x125c;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_00631284;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x00631234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_00631280 + 0x125c;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00631288;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0063125c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x631268;
      uVar3 = FUN_0009dbd4(0x19);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x631274;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*KeyStateResponse).Descriptor @ 0063128c (size 152) */

void k3c_internal_pkg_filament_ace_v2___KeyStateResponse__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_0063132c, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x631320;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_00631330;
  uVar3 = *(undefined4 *)PTR_DAT_00631334;
  uVar4 = *(undefined4 *)PTR_DAT_00631338;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x19;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00631314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*KeyStateResponse).GetState @ 00631340 (size 36) */

void k3c_internal_pkg_filament_ace_v2___KeyStateResponse__GetState(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00631354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00631360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*LinearCalibrationRequest).Reset @ 00631364 (size 164) */

void k3c_internal_pkg_filament_ace_v2___LinearCalibrationRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0063140c != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00631410;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def8(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_00631414 == 0x1a;
      if (0x1a < *(uint *)PTR_DAT_00631414) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_00631418;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x1318;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x006313ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x1a);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x631404;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*LinearCalibrationRequest).String @ 0063141c (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___LinearCalibrationRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x63145c;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x00631450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*LinearCalibrationRequest).ProtoMessage @ 00631468 (size 4) */

void k3c_internal_pkg_filament_ace_v2___LinearCalibrationRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00631468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*LinearCalibrationRequest).ProtoReflect @ 00631478 (size 204) */

void k3c_internal_pkg_filament_ace_v2___LinearCalibrationRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_00631548 == 0x1a;
      if (0x1a < *(uint *)PTR_DAT_00631548) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0063154c + 0x1318;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_00631550;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x00631500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0063154c + 0x1318;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00631554;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x00631528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x631534;
      uVar3 = FUN_0009dbd4(0x1a);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x631540;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*LinearCalibrationRequest).Descriptor @ 00631558 (size 152) */

void k3c_internal_pkg_filament_ace_v2___LinearCalibrationRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_006315f8, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6315ec;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_006315fc;
  uVar3 = *(undefined4 *)PTR_DAT_00631600;
  uVar4 = *(undefined4 *)PTR_DAT_00631604;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x1a;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x006315e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*LinearCalibrationRequest).GetId @ 0063160c (size 36) */

void k3c_internal_pkg_filament_ace_v2___LinearCalibrationRequest__GetId(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00631620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0063162c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*LinearCalibrationRequest).GetType @ 00631630 (size 36) */

void k3c_internal_pkg_filament_ace_v2___LinearCalibrationRequest__GetType(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x00631644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00631650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ColorInfo).Reset @ 00631654 (size 164) */

void k3c_internal_pkg_filament_ace_v2___ColorInfo__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_006316fc != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00631700;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009defc(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_00631704 == 0x1b;
      if (0x1b < *(uint *)PTR_DAT_00631704) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_00631708;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x13d4;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x006316dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x1b);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6316f4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*ColorInfo).String @ 0063170c (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___ColorInfo__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x63174c;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x00631740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ColorInfo).ProtoMessage @ 00631758 (size 4) */

void k3c_internal_pkg_filament_ace_v2___ColorInfo__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00631758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ColorInfo).ProtoReflect @ 00631768 (size 204) */

void k3c_internal_pkg_filament_ace_v2___ColorInfo__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_00631838 == 0x1b;
      if (0x1b < *(uint *)PTR_DAT_00631838) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_0063183c + 0x13d4;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_00631840;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x006317f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_0063183c + 0x13d4;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00631844;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x00631818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x631824;
      uVar3 = FUN_0009dbd4(0x1b);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x631830;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*ColorInfo).Descriptor @ 00631848 (size 152) */

void k3c_internal_pkg_filament_ace_v2___ColorInfo__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_006318e8, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6318dc;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_006318ec;
  uVar3 = *(undefined4 *)PTR_DAT_006318f0;
  uVar4 = *(undefined4 *)PTR_DAT_006318f4;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x1b;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x006318d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ColorInfo).GetRgba @ 006318fc (size 36) */

void k3c_internal_pkg_filament_ace_v2___ColorInfo__GetRgba(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00631910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0063191c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ExtruderTemp).Reset @ 00631920 (size 164) */

void k3c_internal_pkg_filament_ace_v2___ExtruderTemp__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_006319c8 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_006319cc;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def0(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_006319d0 == 0x1c;
      if (0x1c < *(uint *)PTR_DAT_006319d0) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_006319d4;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x1490;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x006319a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x1c);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6319c0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*ExtruderTemp).String @ 006319d8 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___ExtruderTemp__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x631a18;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x00631a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ExtruderTemp).ProtoMessage @ 00631a24 (size 4) */

void k3c_internal_pkg_filament_ace_v2___ExtruderTemp__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00631a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ExtruderTemp).ProtoReflect @ 00631a34 (size 204) */

void k3c_internal_pkg_filament_ace_v2___ExtruderTemp__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_00631b04 == 0x1c;
      if (0x1c < *(uint *)PTR_DAT_00631b04) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_00631b08 + 0x1490;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_00631b0c;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x00631abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_00631b08 + 0x1490;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00631b10;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x00631ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x631af0;
      uVar3 = FUN_0009dbd4(0x1c);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x631afc;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*ExtruderTemp).Descriptor @ 00631b14 (size 152) */

void k3c_internal_pkg_filament_ace_v2___ExtruderTemp__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_00631bb4, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x631ba8;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_00631bb8;
  uVar3 = *(undefined4 *)PTR_DAT_00631bbc;
  uVar4 = *(undefined4 *)PTR_DAT_00631bc0;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x1c;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00631b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ExtruderTemp).GetMinTemp @ 00631bc8 (size 36) */

void k3c_internal_pkg_filament_ace_v2___ExtruderTemp__GetMinTemp(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00631bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00631be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ExtruderTemp).GetMaxTemp @ 00631bec (size 36) */

void k3c_internal_pkg_filament_ace_v2___ExtruderTemp__GetMaxTemp(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x00631c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00631c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ExtruderTemp).GetMinSpeed @ 00631c10 (size 36) */

void k3c_internal_pkg_filament_ace_v2___ExtruderTemp__GetMinSpeed(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x00631c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00631c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ExtruderTemp).GetMaxSpeed @ 00631c34 (size 36) */

void k3c_internal_pkg_filament_ace_v2___ExtruderTemp__GetMaxSpeed(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00631c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00631c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*HotbedTemp).Reset @ 00631c58 (size 164) */

void k3c_internal_pkg_filament_ace_v2___HotbedTemp__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_00631d00 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00631d04;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def8(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_00631d08 == 0x1d;
      if (0x1d < *(uint *)PTR_DAT_00631d08) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_00631d0c;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x154c;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x00631ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x1d);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x631cf8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*HotbedTemp).String @ 00631d10 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___HotbedTemp__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x631d50;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x00631d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*HotbedTemp).ProtoMessage @ 00631d5c (size 4) */

void k3c_internal_pkg_filament_ace_v2___HotbedTemp__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00631d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*HotbedTemp).ProtoReflect @ 00631d6c (size 204) */

void k3c_internal_pkg_filament_ace_v2___HotbedTemp__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_00631e3c == 0x1d;
      if (0x1d < *(uint *)PTR_DAT_00631e3c) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_00631e40 + 0x154c;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_00631e44;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x00631df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_00631e40 + 0x154c;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00631e48;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x00631e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x631e28;
      uVar3 = FUN_0009dbd4(0x1d);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x631e34;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*HotbedTemp).Descriptor @ 00631e4c (size 152) */

void k3c_internal_pkg_filament_ace_v2___HotbedTemp__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_00631eec, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x631ee0;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_00631ef0;
  uVar3 = *(undefined4 *)PTR_DAT_00631ef4;
  uVar4 = *(undefined4 *)PTR_DAT_00631ef8;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x1d;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00631ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*HotbedTemp).GetMinTemp @ 00631f00 (size 36) */

void k3c_internal_pkg_filament_ace_v2___HotbedTemp__GetMinTemp(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00631f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00631f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*HotbedTemp).GetMaxTemp @ 00631f24 (size 36) */

void k3c_internal_pkg_filament_ace_v2___HotbedTemp__GetMaxTemp(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x00631f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00631f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).Reset @ 00631f48 (size 164) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_00631ff0 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00631ff4;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009dec0(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_00631ff8 == 0x1e;
      if (0x1e < *(uint *)PTR_DAT_00631ff8) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_00631ffc;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x1608;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x00631fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x1e);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x631fe8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).String @ 00632000 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x632040;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x00632034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).ProtoMessage @ 0063204c (size 4) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0063204c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).ProtoReflect @ 0063205c (size 204) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_0063212c == 0x1e;
      if (0x1e < *(uint *)PTR_DAT_0063212c) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_00632130 + 0x1608;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_00632134;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x006320e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_00632130 + 0x1608;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00632138;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x0063210c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x632118;
      uVar3 = FUN_0009dbd4(0x1e);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x632124;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).Descriptor @ 0063213c (size 152) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_006321dc, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6321d0;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_006321e0;
  uVar3 = *(undefined4 *)PTR_DAT_006321e4;
  uVar4 = *(undefined4 *)PTR_DAT_006321e8;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x1e;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x006321c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).GetIndex @ 006321f0 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__GetIndex(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00632204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00632210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).GetVersion @ 00632214 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__GetVersion(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x00632228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00632234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).GetSku @ 00632238 (size 52) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__GetSku(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
    uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00632254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
  uStack0000000c = 0;
                    /* WARNING: Could not recover jumptable at 0x00632268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).GetType @ 0063226c (size 52) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__GetType(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x14);
    uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00632288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
  uStack0000000c = 0;
                    /* WARNING: Could not recover jumptable at 0x0063229c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).GetColors @ 006322a0 (size 64) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__GetColors(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x1c);
    uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x20);
    uStack00000010 = *(undefined4 *)(in_stack_00000004 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x006322c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
  uStack0000000c = 0;
  uStack00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x006322dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).GetExtruderTemp @ 006322e0 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__GetExtruderTemp(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x006322f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00632300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).GetHotbedTemp @ 00632304 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__GetHotbedTemp(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x2c);
                    /* WARNING: Could not recover jumptable at 0x00632318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00632324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).GetDiameter @ 00632328 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__GetDiameter(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0063233c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00632348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).GetLength @ 0063234c (size 36) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__GetLength(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x34);
                    /* WARNING: Could not recover jumptable at 0x00632360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0063236c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).GetIconType @ 00632370 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__GetIconType(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00632384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00632390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).GetRemainder @ 00632394 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__GetRemainder(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x3c);
                    /* WARNING: Could not recover jumptable at 0x006323a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x006323b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).GetCode @ 006323b8 (size 36) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__GetCode(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x006323cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x006323d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*RfidTestRequest).Reset @ 006323dc (size 164) */

void k3c_internal_pkg_filament_ace_v2___RfidTestRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_00632484 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00632488;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009defc(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_0063248c == 0x1f;
      if (0x1f < *(uint *)PTR_DAT_0063248c) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_00632490;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x16c4;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x00632464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x1f);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x63247c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*RfidTestRequest).String @ 00632494 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___RfidTestRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6324d4;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x006324c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*RfidTestRequest).ProtoMessage @ 006324e0 (size 4) */

void k3c_internal_pkg_filament_ace_v2___RfidTestRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x006324e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*RfidTestRequest).ProtoReflect @ 006324f0 (size 204) */

void k3c_internal_pkg_filament_ace_v2___RfidTestRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_006325c0 == 0x1f;
      if (0x1f < *(uint *)PTR_DAT_006325c0) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_006325c4 + 0x16c4;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_006325c8;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x00632578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_006325c4 + 0x16c4;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006325cc;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x006325a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x6325ac;
      uVar3 = FUN_0009dbd4(0x1f);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x6325b8;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*RfidTestRequest).Descriptor @ 006325d0 (size 152) */

void k3c_internal_pkg_filament_ace_v2___RfidTestRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_00632670, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x632664;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_00632674;
  uVar3 = *(undefined4 *)PTR_DAT_00632678;
  uVar4 = *(undefined4 *)PTR_DAT_0063267c;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x1f;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00632658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*RfidTestRequest).GetEnable @ 00632684 (size 36) */

void k3c_internal_pkg_filament_ace_v2___RfidTestRequest__GetEnable(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined1 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00632698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x006326a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryStatus).Reset @ 006326a8 (size 160) */

void k3c_internal_pkg_filament_ace_v2___DryStatus__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_0063274c != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00632750;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def0(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_00632754 == 0x20;
      if (0x20 < *(uint *)PTR_DAT_00632754) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_00632758;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x1780;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0063272c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x20);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x632744;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DryStatus).String @ 0063275c (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___DryStatus__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x63279c;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x00632790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryStatus).ProtoMessage @ 006327a8 (size 4) */

void k3c_internal_pkg_filament_ace_v2___DryStatus__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x006327a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryStatus).ProtoReflect @ 006327b8 (size 200) */

void k3c_internal_pkg_filament_ace_v2___DryStatus__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_00632884 == 0x20;
      if (0x20 < *(uint *)PTR_DAT_00632884) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_00632888 + 0x1780;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0063288c;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0063283c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_00632888 + 0x1780;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00632890;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x00632864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x632870;
      uVar3 = FUN_0009dbd4(0x20);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x63287c;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DryStatus).Descriptor @ 00632894 (size 152) */

void k3c_internal_pkg_filament_ace_v2___DryStatus__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_00632934, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x632928;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_00632938;
  uVar3 = *(undefined4 *)PTR_DAT_0063293c;
  uVar4 = *(undefined4 *)PTR_DAT_00632940;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x20;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0063291c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryStatus).GetStatus @ 00632948 (size 36) */

void k3c_internal_pkg_filament_ace_v2___DryStatus__GetStatus(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0063295c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00632968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryStatus).GetTargetTemp @ 0063296c (size 36) */

void k3c_internal_pkg_filament_ace_v2___DryStatus__GetTargetTemp(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x00632980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0063298c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryStatus).GetDuration @ 00632990 (size 36) */

void k3c_internal_pkg_filament_ace_v2___DryStatus__GetDuration(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x006329a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x006329b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*DryStatus).GetRemainTime @ 006329b4 (size 36) */

void k3c_internal_pkg_filament_ace_v2___DryStatus__GetRemainTime(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x006329c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x006329d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SlotStatus).Reset @ 006329d8 (size 164) */

void k3c_internal_pkg_filament_ace_v2___SlotStatus__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_00632a80 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00632a84;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def8(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_00632a88 == 0x21;
      if (0x21 < *(uint *)PTR_DAT_00632a88) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_00632a8c;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x183c;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x00632a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x21);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x632a78;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SlotStatus).String @ 00632a90 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___SlotStatus__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x632ad0;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x00632ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SlotStatus).ProtoMessage @ 00632adc (size 4) */

void k3c_internal_pkg_filament_ace_v2___SlotStatus__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00632adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SlotStatus).ProtoReflect @ 00632aec (size 204) */

void k3c_internal_pkg_filament_ace_v2___SlotStatus__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_00632bbc == 0x21;
      if (0x21 < *(uint *)PTR_DAT_00632bbc) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_00632bc0 + 0x183c;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_00632bc4;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x00632b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_00632bc0 + 0x183c;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00632bc8;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x00632b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x632ba8;
      uVar3 = FUN_0009dbd4(0x21);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x632bb4;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SlotStatus).Descriptor @ 00632bcc (size 152) */

void k3c_internal_pkg_filament_ace_v2___SlotStatus__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_00632c6c, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x632c60;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_00632c70;
  uVar3 = *(undefined4 *)PTR_DAT_00632c74;
  uVar4 = *(undefined4 *)PTR_DAT_00632c78;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x21;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00632c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SlotStatus).GetStatus @ 00632c80 (size 36) */

void k3c_internal_pkg_filament_ace_v2___SlotStatus__GetStatus(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00632c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00632ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*SlotStatus).GetFilament @ 00632ca4 (size 36) */

void k3c_internal_pkg_filament_ace_v2___SlotStatus__GetFilament(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x00632cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00632cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*StatusResponse).Reset @ 00632cc8 (size 164) */

void k3c_internal_pkg_filament_ace_v2___StatusResponse__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_00632d70 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00632d74;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009ded8(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_00632d78 == 0x22;
      if (0x22 < *(uint *)PTR_DAT_00632d78) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_00632d7c;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x18f8;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x00632d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x22);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x632d68;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*StatusResponse).String @ 00632d80 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___StatusResponse__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x632dc0;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x00632db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*StatusResponse).ProtoMessage @ 00632dcc (size 4) */

void k3c_internal_pkg_filament_ace_v2___StatusResponse__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00632dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*StatusResponse).ProtoReflect @ 00632ddc (size 204) */

void k3c_internal_pkg_filament_ace_v2___StatusResponse__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_00632eac == 0x22;
      if (0x22 < *(uint *)PTR_DAT_00632eac) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_00632eb0 + 0x18f8;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_00632eb4;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x00632e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_00632eb0 + 0x18f8;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00632eb8;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x00632e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x632e98;
      uVar3 = FUN_0009dbd4(0x22);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x632ea4;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*StatusResponse).Descriptor @ 00632ebc (size 152) */

void k3c_internal_pkg_filament_ace_v2___StatusResponse__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_00632f5c, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x632f50;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_00632f60;
  uVar3 = *(undefined4 *)PTR_DAT_00632f64;
  uVar4 = *(undefined4 *)PTR_DAT_00632f68;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x22;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00632f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*StatusResponse).GetStatus @ 00632f70 (size 36) */

void k3c_internal_pkg_filament_ace_v2___StatusResponse__GetStatus(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00632f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00632f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*StatusResponse).GetDryStatus @ 00632f94 (size 36) */

void k3c_internal_pkg_filament_ace_v2___StatusResponse__GetDryStatus(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x00632fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00632fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*StatusResponse).GetTemp @ 00632fb8 (size 36) */

void k3c_internal_pkg_filament_ace_v2___StatusResponse__GetTemp(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x00632fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00632fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*StatusResponse).GetHumidity @ 00632fdc (size 36) */

void k3c_internal_pkg_filament_ace_v2___StatusResponse__GetHumidity(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00632ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00632ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*StatusResponse).GetRfid1Enable @ 00633000 (size 36) */

void k3c_internal_pkg_filament_ace_v2___StatusResponse__GetRfid1Enable(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined1 *)(in_stack_00000004 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x00633014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00633020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*StatusResponse).GetRfid2Enable @ 00633024 (size 36) */

void k3c_internal_pkg_filament_ace_v2___StatusResponse__GetRfid2Enable(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined1 *)(in_stack_00000004 + 0x15);
                    /* WARNING: Could not recover jumptable at 0x00633038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00633044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*StatusResponse).GetFeedAssistCount @ 00633048 (size 36) */

void k3c_internal_pkg_filament_ace_v2___StatusResponse__GetFeedAssistCount(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0063305c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00633068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*StatusResponse).GetContAssistTime @ 0063306c (size 36) */

void k3c_internal_pkg_filament_ace_v2___StatusResponse__GetContAssistTime(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x00633080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0063308c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*StatusResponse).GetSlotStatus @ 00633090 (size 64) */

void k3c_internal_pkg_filament_ace_v2___StatusResponse__GetSlotStatus(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x20);
    uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x24);
    uStack00000010 = *(undefined4 *)(in_stack_00000004 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x006330b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
  uStack0000000c = 0;
  uStack00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x006330cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*InfoResponse).Reset @ 006330d0 (size 164) */

void k3c_internal_pkg_filament_ace_v2___InfoResponse__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_00633178 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0063317c;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009deec(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_00633180 == 0x23;
      if (0x23 < *(uint *)PTR_DAT_00633180) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_00633184;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x19b4;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x00633158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x23);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x633170;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*InfoResponse).String @ 00633188 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___InfoResponse__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6331c8;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x006331bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*InfoResponse).ProtoMessage @ 006331d4 (size 4) */

void k3c_internal_pkg_filament_ace_v2___InfoResponse__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x006331d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*InfoResponse).ProtoReflect @ 006331e4 (size 204) */

void k3c_internal_pkg_filament_ace_v2___InfoResponse__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_006332b4 == 0x23;
      if (0x23 < *(uint *)PTR_DAT_006332b4) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_006332b8 + 0x19b4;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_006332bc;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0063326c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_006332b8 + 0x19b4;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006332c0;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x00633294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x6332a0;
      uVar3 = FUN_0009dbd4(0x23);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x6332ac;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*InfoResponse).Descriptor @ 006332c4 (size 152) */

void k3c_internal_pkg_filament_ace_v2___InfoResponse__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_00633364, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x633358;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_00633368;
  uVar3 = *(undefined4 *)PTR_DAT_0063336c;
  uVar4 = *(undefined4 *)PTR_DAT_00633370;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x23;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0063334c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*InfoResponse).GetVersion @ 00633378 (size 52) */

void k3c_internal_pkg_filament_ace_v2___InfoResponse__GetVersion(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
    uStack0000000c = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x00633394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
  uStack0000000c = 0;
                    /* WARNING: Could not recover jumptable at 0x006333a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*InfoResponse).GetBootVersion @ 006333ac (size 52) */

void k3c_internal_pkg_filament_ace_v2___InfoResponse__GetBootVersion(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
    uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x006333c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
  uStack0000000c = 0;
                    /* WARNING: Could not recover jumptable at 0x006333dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*InfoResponse).GetFirstRequest @ 006333e0 (size 36) */

void k3c_internal_pkg_filament_ace_v2___InfoResponse__GetFirstRequest(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined1 *)(in_stack_00000004 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x006333f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00633400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*TestResult).Reset @ 00633404 (size 164) */

void k3c_internal_pkg_filament_ace_v2___TestResult__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_006334ac != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_006334b0;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def4(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_006334b4 == 0x24;
      if (0x24 < *(uint *)PTR_DAT_006334b4) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_006334b8;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x1a70;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0063348c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x24);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6334a4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*TestResult).String @ 006334bc (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___TestResult__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6334fc;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x006334f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*TestResult).ProtoMessage @ 00633508 (size 4) */

void k3c_internal_pkg_filament_ace_v2___TestResult__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00633508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*TestResult).ProtoReflect @ 00633518 (size 204) */

void k3c_internal_pkg_filament_ace_v2___TestResult__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_006335e8 == 0x24;
      if (0x24 < *(uint *)PTR_DAT_006335e8) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_006335ec + 0x1a70;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_006335f0;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x006335a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_006335ec + 0x1a70;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006335f4;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x006335c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x6335d4;
      uVar3 = FUN_0009dbd4(0x24);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x6335e0;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*TestResult).Descriptor @ 006335f8 (size 152) */

void k3c_internal_pkg_filament_ace_v2___TestResult__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_00633698, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x63368c;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0063369c;
  uVar3 = *(undefined4 *)PTR_DAT_006336a0;
  uVar4 = *(undefined4 *)PTR_DAT_006336a4;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x24;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00633680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*TestResult).GetSn @ 006336ac (size 52) */

void k3c_internal_pkg_filament_ace_v2___TestResult__GetSn(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
    uStack0000000c = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x006336c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
  uStack0000000c = 0;
                    /* WARNING: Could not recover jumptable at 0x006336dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*TestResult).GetResult @ 006336e0 (size 36) */

void k3c_internal_pkg_filament_ace_v2___TestResult__GetResult(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x006336f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00633700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ReadTesterRequest).Reset @ 00633704 (size 164) */

void k3c_internal_pkg_filament_ace_v2___ReadTesterRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_006337ac != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_006337b0;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009defc(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_006337b4 == 0x25;
      if (0x25 < *(uint *)PTR_DAT_006337b4) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_006337b8;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x1b2c;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x0063378c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x25);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6337a4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*ReadTesterRequest).String @ 006337bc (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___ReadTesterRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6337fc;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x006337f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ReadTesterRequest).ProtoMessage @ 00633808 (size 4) */

void k3c_internal_pkg_filament_ace_v2___ReadTesterRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00633808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ReadTesterRequest).ProtoReflect @ 00633818 (size 204) */

void k3c_internal_pkg_filament_ace_v2___ReadTesterRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_006338e8 == 0x25;
      if (0x25 < *(uint *)PTR_DAT_006338e8) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_006338ec + 0x1b2c;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_006338f0;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x006338a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_006338ec + 0x1b2c;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006338f4;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x006338c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x6338d4;
      uVar3 = FUN_0009dbd4(0x25);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x6338e0;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*ReadTesterRequest).Descriptor @ 006338f8 (size 152) */

void k3c_internal_pkg_filament_ace_v2___ReadTesterRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_00633998, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x63398c;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_0063399c;
  uVar3 = *(undefined4 *)PTR_DAT_006339a0;
  uVar4 = *(undefined4 *)PTR_DAT_006339a4;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x25;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00633980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ReadTesterRequest).GetType @ 006339ac (size 36) */

void k3c_internal_pkg_filament_ace_v2___ReadTesterRequest__GetType(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x006339c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x006339cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ReadTesterResponse).Reset @ 006339d0 (size 164) */

void k3c_internal_pkg_filament_ace_v2___ReadTesterResponse__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_00633a78 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00633a7c;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def8(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_00633a80 == 0x26;
      if (0x26 < *(uint *)PTR_DAT_00633a80) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_00633a84;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x1be8;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x00633a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x26);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x633a70;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*ReadTesterResponse).String @ 00633a88 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___ReadTesterResponse__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x633ac8;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x00633abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ReadTesterResponse).ProtoMessage @ 00633ad4 (size 4) */

void k3c_internal_pkg_filament_ace_v2___ReadTesterResponse__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00633ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ReadTesterResponse).ProtoReflect @ 00633ae4 (size 204) */

void k3c_internal_pkg_filament_ace_v2___ReadTesterResponse__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_00633bb4 == 0x26;
      if (0x26 < *(uint *)PTR_DAT_00633bb4) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_00633bb8 + 0x1be8;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_00633bbc;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_00633bb8 + 0x1be8;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00633bc0;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        return;
      }
      unaff_lr = 0x633ba0;
      uVar3 = FUN_0009dbd4(0x26);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x633bac;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*ReadTesterResponse).Descriptor @ 00633bc4 (size 152) */

void k3c_internal_pkg_filament_ace_v2___ReadTesterResponse__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_00633c64, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x633c58;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_00633c68;
  uVar3 = *(undefined4 *)PTR_DAT_00633c6c;
  uVar4 = *(undefined4 *)PTR_DAT_00633c70;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x26;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00633c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ReadTesterResponse).GetType @ 00633c78 (size 36) */

void k3c_internal_pkg_filament_ace_v2___ReadTesterResponse__GetType(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00633c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00633c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*ReadTesterResponse).GetResult @ 00633c9c (size 36) */

void k3c_internal_pkg_filament_ace_v2___ReadTesterResponse__GetResult(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x00633cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00633cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*WriteTesterResultRequest).Reset @ 00633cc0 (size 164) */

void k3c_internal_pkg_filament_ace_v2___WriteTesterResultRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_00633d68 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00633d6c;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def8(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_00633d70 == 0x27;
      if (0x27 < *(uint *)PTR_DAT_00633d70) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_00633d74;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x1ca4;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x00633d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x27);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x633d60;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*WriteTesterResultRequest).String @ 00633d78 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___WriteTesterResultRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x633db8;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x00633dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*WriteTesterResultRequest).ProtoMessage @ 00633dc4 (size 4) */

void k3c_internal_pkg_filament_ace_v2___WriteTesterResultRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00633dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*WriteTesterResultRequest).ProtoReflect @ 00633dd4 (size 204) */

void k3c_internal_pkg_filament_ace_v2___WriteTesterResultRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_00633ea4 == 0x27;
      if (0x27 < *(uint *)PTR_DAT_00633ea4) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_00633ea8 + 0x1ca4;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_00633eac;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x00633e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_00633ea8 + 0x1ca4;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00633eb0;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x00633e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x633e90;
      uVar3 = FUN_0009dbd4(0x27);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x633e9c;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*WriteTesterResultRequest).Descriptor @ 00633eb4 (size 152) */

void k3c_internal_pkg_filament_ace_v2___WriteTesterResultRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_00633f54, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x633f48;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_00633f58;
  uVar3 = *(undefined4 *)PTR_DAT_00633f5c;
  uVar4 = *(undefined4 *)PTR_DAT_00633f60;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x27;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00633f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*WriteTesterResultRequest).GetType @ 00633f68 (size 36) */

void k3c_internal_pkg_filament_ace_v2___WriteTesterResultRequest__GetType(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00633f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00633f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*WriteTesterResultRequest).GetResult @ 00633f8c (size 36) */

void k3c_internal_pkg_filament_ace_v2___WriteTesterResultRequest__GetResult(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
                    /* WARNING: Could not recover jumptable at 0x00633fa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00633fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*WriteTesterSnRequest).Reset @ 00633fb0 (size 164) */

void k3c_internal_pkg_filament_ace_v2___WriteTesterSnRequest__Reset(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      if (*(int *)PTR_DAT_00634058 != 0) {
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0063405c;
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        FUN_00026bd4();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      FUN_0009def4(0,uVar1);
      bVar3 = *(uint *)PTR_DAT_00634060 == 0x28;
      if (0x28 < *(uint *)PTR_DAT_00634060) {
        *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)PTR_DAT_00634064;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 4);
        google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -4) + 0x1d60;
        google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
                    /* WARNING: Could not recover jumptable at 0x00634038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0009dbd4(0x28);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x634050;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*WriteTesterSnRequest).String @ 00634068 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___WriteTesterSnRequest__String(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6340a8;
    FUN_0009bf64();
  }
  google_golang_org_protobuf_internal_impl_Export_MessageStringOf();
                    /* WARNING: Could not recover jumptable at 0x0063409c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*WriteTesterSnRequest).ProtoMessage @ 006340b4 (size 4) */

void k3c_internal_pkg_filament_ace_v2___WriteTesterSnRequest__ProtoMessage(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x006340b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*WriteTesterSnRequest).ProtoReflect @ 006340c4 (size 204) */

void k3c_internal_pkg_filament_ace_v2___WriteTesterSnRequest__ProtoReflect
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      bVar2 = *(uint *)PTR_DAT_00634194 == 0x28;
      if (0x28 < *(uint *)PTR_DAT_00634194) {
        if (*(int *)((int)register0x00000054 + 4) != 0) {
          *(int *)((int)register0x00000054 + -4) = *(int *)PTR_DAT_00634198 + 0x1d60;
          *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + 4);
          google_golang_org_protobuf_internal_impl_Export_MessageStateOf();
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          google_golang_org_protobuf_internal_impl___messageState__LoadMessageInfo();
          if (*(int *)((int)register0x00000054 + -0x18) == 0) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            google_golang_org_protobuf_internal_impl___messageState__StoreMessageInfo();
          }
          *(undefined **)((int)register0x00000054 + 8) = PTR_DAT_0063419c;
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -8);
                    /* WARNING: Could not recover jumptable at 0x0063414c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = *(int *)PTR_DAT_00634198 + 0x1d60;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006341a0;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        google_golang_org_protobuf_internal_impl___MessageInfo__MessageOf();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
                    /* WARNING: Could not recover jumptable at 0x00634174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      unaff_lr = 0x634180;
      uVar3 = FUN_0009dbd4(0x28);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x63418c;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*WriteTesterSnRequest).Descriptor @ 006341a4 (size 152) */

void k3c_internal_pkg_filament_ace_v2___WriteTesterSnRequest__Descriptor(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (puVar1 = PTR_DAT_00634244, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x634238;
    FUN_0009bf64();
  }
  FUN_000ab1c4();
  uVar2 = *(undefined4 *)PTR_DAT_00634248;
  uVar3 = *(undefined4 *)PTR_DAT_0063424c;
  uVar4 = *(undefined4 *)PTR_DAT_00634250;
  FUN_00022cf8();
  *(undefined4 *)puVar1 = 0x28;
  in_stack_00000014 = puVar1;
  in_stack_00000018 = 1;
  in_stack_0000001c = 1;
  in_stack_00000008 = uVar2;
  in_stack_0000000c = uVar3;
  in_stack_00000010 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0063422c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*WriteTesterSnRequest).GetType @ 00634258 (size 36) */

void k3c_internal_pkg_filament_ace_v2___WriteTesterSnRequest__GetType(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x0063426c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00634278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*WriteTesterSnRequest).GetSn @ 0063427c (size 52) */

void k3c_internal_pkg_filament_ace_v2___WriteTesterSnRequest__GetSn(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  if (in_stack_00000004 != 0) {
    uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
    uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x00634298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 0;
  uStack0000000c = 0;
                    /* WARNING: Could not recover jumptable at 0x006342ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.init.0 @ 006342b0 (size 36) */

void k3c_internal_pkg_filament_ace_v2_init_0(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6342d0;
    FUN_0009bf64();
  }
  k3c_internal_pkg_filament_ace_v2_file_ace_proto_v2_proto_init();
                    /* WARNING: Could not recover jumptable at 0x006342c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.file_ace_proto_v2_proto_init @ 006342d4 (size 536) */

void k3c_internal_pkg_filament_ace_v2_file_ace_proto_v2_proto_init(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 extraout_r3;
  undefined4 uVar4;
  undefined4 extraout_r3_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  bool bVar8;
  undefined *puVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x88)) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x108);
      *(undefined4 *)((int)register0x00000054 + -0x108) = unaff_lr;
      if (*(int *)PTR_DAT_006344f0 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006342f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x108))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x84) = PTR_DAT_006344f4;
      *(undefined **)((int)register0x00000054 + -0x80) = PTR_DAT_006344f8;
      iVar1 = *(int *)((int)register0x00000054 + -0x84);
      puVar3 = PTR_DAT_006344fc;
      if (iVar1 == 0) {
        iVar1 = 0;
        puVar3 = (undefined *)0x0;
      }
      pcVar2 = *(code **)(puVar3 + 0x8c);
      *(int *)((int)register0x00000054 + -0x104) = iVar1;
      (*pcVar2)();
      *(undefined4 *)((int)register0x00000054 + -0x7c) =
           *(undefined4 *)((int)register0x00000054 + -0x100);
      FUN_0009e228(*(undefined4 *)((int)register0x00000054 + -0x100),PTR_DAT_00634500,
                   (undefined1 *)((int)register0x00000054 + -0x78),
                   *(undefined4 *)((int)register0x00000054 + -0xfc));
      *(undefined4 *)((int)register0x00000054 + -0x78) =
           *(undefined4 *)((int)register0x00000054 + -0x7c);
      *(undefined4 *)((int)register0x00000054 + -0x74) = extraout_r3;
      *(undefined4 *)((int)register0x00000054 + -0x104) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x100) = 0x15bc;
      FUN_00017ffc();
      bVar8 = false;
      if ((*(char *)((int)register0x00000054 + -0xf8) == '\0') &&
         (bVar8 = *(uint *)((int)register0x00000054 + -0xfc) == -(int)PTR_DAT_00634504,
         *(uint *)((int)register0x00000054 + -0xfc) <= (uint)-(int)PTR_DAT_00634504)) {
        *(undefined **)((int)register0x00000054 + -0x70) = PTR_DAT_00634504;
        *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x15bc;
        *(undefined4 *)((int)register0x00000054 + -0x68) = 0x15bc;
        uVar4 = *(undefined4 *)PTR_DAT_0063450c;
        uVar5 = *(undefined4 *)PTR_DAT_00634510;
        *(undefined4 *)((int)register0x00000054 + -0x44) = *(undefined4 *)PTR_DAT_00634508;
        *(undefined4 *)((int)register0x00000054 + -0x40) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar5;
        uVar4 = *(undefined4 *)PTR_DAT_00634518;
        uVar5 = *(undefined4 *)PTR_DAT_0063451c;
        *(undefined4 *)((int)register0x00000054 + -0x38) = *(undefined4 *)PTR_DAT_00634514;
        *(undefined4 *)((int)register0x00000054 + -0x34) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar5;
        uVar4 = *(undefined4 *)PTR_DAT_00634524;
        uVar5 = *(undefined4 *)PTR_DAT_00634528;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = *(undefined4 *)PTR_DAT_00634520;
        *(undefined4 *)((int)register0x00000054 + -0x28) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar5;
        uVar4 = *(undefined4 *)PTR_DAT_0063452c;
        uVar5 = *(undefined4 *)PTR_DAT_00634530;
        uVar6 = *(undefined4 *)PTR_DAT_00634534;
        *(undefined4 *)((int)register0x00000054 + -0x20) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x18) = uVar6;
        FUN_0009e228(uVar4,(undefined1 *)((int)register0x00000054 + -0x78),
                     (undefined1 *)((int)register0x00000054 + -0x104));
        google_golang_org_protobuf_internal_filetype_Builder_Build();
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x88);
        *(undefined4 *)PTR_DAT_006344f0 = *(undefined4 *)((int)register0x00000054 + -0x8c);
        if (*(int *)PTR_DAT_00634538 != 0) {
          FUN_0009db84();
          *unaff_r8 = extraout_r3_00;
          unaff_r8[1] = *(undefined4 *)PTR_DAT_0063453c;
          unaff_r8[2] = *(undefined4 *)PTR_DAT_00634508;
          unaff_r8[3] = *(undefined4 *)PTR_DAT_00634514;
          uVar4 = extraout_r3_00;
        }
        *(undefined4 *)PTR_DAT_0063453c = uVar4;
        *(undefined4 *)PTR_DAT_0063450c = 0;
        *(undefined4 *)PTR_DAT_00634510 = 0;
        *(undefined4 *)PTR_DAT_00634508 = 0;
        *(undefined4 *)PTR_DAT_00634518 = 0;
        *(undefined4 *)PTR_DAT_0063451c = 0;
        *(undefined4 *)PTR_DAT_00634514 = 0;
                    /* WARNING: Could not recover jumptable at 0x006344d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x108))();
        return;
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x108);
      if (bVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x6344e8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*CircularQueue).IsEmpty @ 00634540 (size 32) */

void k3c_internal_pkg_filament_ace_v2___CircularQueue__IsEmpty(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(int *)(in_stack_00000004 + 0xfa8) == *(int *)(in_stack_00000004 + 0xfa4);
                    /* WARNING: Could not recover jumptable at 0x0063455c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*CircularQueue).IsFull @ 00634560 (size 116) */

void k3c_internal_pkg_filament_ace_v2___CircularQueue__IsFull(undefined4 param_1)

{
  uint uVar1;
  uint extraout_r1;
  uint uVar2;
  uint uVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      uVar2 = *(uint *)(*(int *)((int)register0x00000054 + 4) + 4000);
      bVar5 = uVar2 == 0;
      if (!bVar5) {
        uVar3 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0xfa8) + 1;
        uVar1 = (int)uVar3 >> 0x1f;
        FUN_0009edd4((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f),(uVar3 ^ uVar1) - uVar1);
        *(bool *)((int)register0x00000054 + 8) =
             *(int *)(*(int *)((int)register0x00000054 + 4) + 0xfa4) ==
             (extraout_r1 ^ uVar1) - uVar1;
                    /* WARNING: Could not recover jumptable at 0x006345bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -4))();
        return;
      }
      param_1 = FUN_000539a0();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x6345d0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*CircularQueue).Enqueue @ 006345d4 (size 684) */

void k3c_internal_pkg_filament_ace_v2___CircularQueue__Enqueue(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  int extraout_r3;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined *local_74;
  undefined4 local_70;
  undefined **local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4d;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined *local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [20];
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x63487c;
    FUN_0009bf64();
  }
  local_4 = (undefined4 *)0x0;
  local_4d = 0;
  local_74 = (undefined *)(in_stack_00000004 + 0xfac);
  local_34 = local_74;
  FUN_000ac4dc();
  local_30 = DAT_00634884;
  local_2c = local_34;
  local_4 = &local_30;
  local_4d = 1;
  uVar2 = FUN_001160a8();
  uVar2 = FUN_0009e2f0(uVar2,&local_74,auStack_18);
  FUN_0009e2f0(uVar2,auStack_18,&local_48);
  iVar4 = extraout_r3;
  if ((local_44 & 0x80000000) != 0) {
    uVar3 = (local_48 & 0x7fffffff) >> 0x1e | (local_48 >> 0x1f | local_44 << 1) << 1;
    iVar4 = uVar3 + DAT_00634888;
    local_3c = ((local_44 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar3,DAT_00634888);
    local_48 = local_48 & 0x3fffffff;
    local_44 = 0;
    local_40 = iVar4;
  }
  local_38 = 0;
  FUN_0009e2f0(0,&local_48,&local_74,iVar4,unaff_lr);
  local_60 = PTR_DAT_0063488c;
  local_5c = 0x18;
  FUN_00101cdc();
  FUN_0009df04(0,&local_28,local_58,local_54);
  FUN_0008f77c();
  local_28 = PTR_DAT_00634890;
  local_24 = local_6c;
  local_74 = in_stack_00000008;
  local_70 = in_stack_0000000c;
  FUN_0008f77c();
  local_20 = PTR_DAT_00634890;
  local_1c = local_6c;
  local_74 = PTR_DAT_00634894;
  local_70 = 5;
  local_6c = &local_28;
  local_68 = 2;
  local_64 = 2;
  FUN_0013b72c();
  uVar2 = local_5c;
  puVar1 = local_60;
  iVar4 = in_stack_00000004;
  uVar3 = *(uint *)(in_stack_00000004 + 4000);
  if (uVar3 != 0) {
    local_4c = *(int *)(in_stack_00000004 + 0xfa8) + 1;
    iVar5 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
    FUN_0009edd4(iVar5,(local_4c ^ (int)local_4c >> 0x1f) - ((int)local_4c >> 0x1f));
    if (*(int *)(iVar4 + 0xfa4) == (extraout_r1 ^ (int)local_4c >> 0x1f) - ((int)local_4c >> 0x1f))
    {
      local_4c = *(int *)(iVar4 + 0xfa4) + 1;
      FUN_0009edd4(iVar5,(local_4c ^ (int)local_4c >> 0x1f) - ((int)local_4c >> 0x1f));
      *(uint *)(iVar4 + 0xfa4) = (extraout_r1_00 ^ (int)local_4c >> 0x1f) - ((int)local_4c >> 0x1f);
    }
    uVar3 = *(uint *)(iVar4 + 0xfa8);
    if (uVar3 < 500) {
      *(undefined4 *)(iVar4 + uVar3 * 8 + 4) = uVar2;
      if (*(int *)PTR_DAT_00634898 != 0) {
        uVar3 = FUN_0009db64();
        *unaff_r8 = puVar1;
        unaff_r8[1] = *(undefined4 *)(iVar4 + uVar3 * 8);
      }
      *(undefined **)(iVar4 + uVar3 * 8) = puVar1;
      uVar3 = *(uint *)(iVar4 + 4000);
      if (uVar3 != 0) {
        local_4c = *(int *)(iVar4 + 0xfa8) + 1;
        FUN_0009edd4((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f),
                     (local_4c ^ (int)local_4c >> 0x1f) - ((int)local_4c >> 0x1f));
        *(uint *)(iVar4 + 0xfa8) =
             (extraout_r1_01 ^ (int)local_4c >> 0x1f) - ((int)local_4c >> 0x1f);
        local_4d = 0;
        (*(code *)*local_4)();
        return;
      }
      uVar3 = FUN_000539a0();
    }
    FUN_0009dbd4(uVar3,500);
  }
  uVar2 = FUN_000539a0();
  FUN_00054344(uVar2);
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*CircularQueue).Enqueue.deferwrap1 @ 0063489c (size 84) */

void k3c_internal_pkg_filament_ace_v2___CircularQueue__Enqueue_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000ac608();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*CircularQueue).GetAllEntries @ 006348f0 (size 528) */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void k3c_internal_pkg_filament_ace_v2___CircularQueue__GetAllEntries(void)

{
  int iVar1;
  uint uVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar3;
  uint extraout_r2;
  int iVar4;
  int extraout_r3;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int unaff_r10;
  undefined8 uVar11;
  int in_stack_00000004;
  undefined *in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  int local_38;
  uint local_34;
  uint local_30;
  undefined *local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = (undefined **)0x0;
  in_stack_00000008 = (undefined *)0x0;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  local_8 = in_stack_00000004 + 0xfac;
  FUN_000ac304();
  local_14 = PTR_k3c_internal_pkg_filament_ace_v2___CircularQueue__GetAllEntries_deferwrap1_00634b04
  ;
  local_10 = local_8;
  local_4 = &local_14;
  uVar2 = *(uint *)(in_stack_00000004 + 0xfa4);
  if (*(uint *)(in_stack_00000004 + 0xfa8) == uVar2) {
    in_stack_00000008 = PTR_DAT_00634b08;
    in_stack_0000000c = 0;
    in_stack_00000010 = 0;
    (*(code *)
      PTR_k3c_internal_pkg_filament_ace_v2___CircularQueue__GetAllEntries_deferwrap1_00634b04)();
    return;
  }
  uVar3 = 0;
  iVar4 = 0;
  uVar5 = 0;
  iVar1 = in_stack_00000004;
  do {
    if (499 < uVar2) {
LAB_00634adc:
      uVar8 = FUN_0009dbd4(uVar2,500);
      FUN_00054344(uVar8);
      return;
    }
    uVar5 = uVar5 + 1;
    uVar8 = *(undefined4 *)(iVar1 + uVar2 * 8);
    uVar6 = *(undefined4 *)(iVar1 + uVar2 * 8 + 4);
    if (uVar3 < uVar5) {
      local_c = uVar8;
      FUN_000987f4();
      iVar1 = in_stack_00000004;
      uVar3 = local_30;
      iVar4 = local_38;
      uVar5 = local_34;
      uVar8 = local_c;
    }
    uVar11 = CONCAT44(uVar2,iVar1);
    puVar10 = (undefined4 *)(uVar5 - 1);
    *(undefined4 *)(iVar4 + (int)puVar10 * 8 + 4) = uVar6;
    if (*(int *)PTR_DAT_00634b10 != 0) {
      uVar11 = FUN_0009db64();
      *puVar10 = uVar8;
      *(undefined4 *)(uVar5 + 3) = *(undefined4 *)(extraout_r3 + (int)puVar10 * 8);
      uVar3 = extraout_r2;
      iVar4 = extraout_r3;
    }
    iVar1 = (int)uVar11;
    *(undefined4 *)(iVar4 + (int)puVar10 * 8) = uVar8;
    uVar7 = *(uint *)(iVar1 + 4000);
    if (uVar7 == 0) {
      FUN_000539a0();
      uVar2 = extraout_r1_00;
      goto LAB_00634adc;
    }
    uVar9 = (int)((ulonglong)uVar11 >> 0x20) + 1;
    uVar2 = (int)uVar9 >> 0x1f;
    FUN_0009edd4((uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f),(uVar9 ^ uVar2) - uVar2);
    uVar2 = (extraout_r1 ^ uVar2) - uVar2;
    if (*(uint *)(iVar1 + 0xfa8) == uVar2) {
      in_stack_00000008 = (undefined *)iVar4;
      in_stack_0000000c = uVar5;
      in_stack_00000010 = uVar3;
      (*(code *)*local_4)();
      return;
    }
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*CircularQueue).GetAllEntries.deferwrap1 @ 00634b14 (size 84) */

void k3c_internal_pkg_filament_ace_v2___CircularQueue__GetAllEntries_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000ac3e4();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*CircularQueue).SaveToFile @ 00634b68 (size 1440) */

/* WARNING: Removing unreachable block (ram,0x00634fa0) */
/* WARNING: Removing unreachable block (ram,0x00634de4) */
/* WARNING: Removing unreachable block (ram,0x00634be8) */

void k3c_internal_pkg_filament_ace_v2___CircularQueue__SaveToFile(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r10;
  undefined **in_stack_00000004;
  undefined **local_c0;
  undefined1 *local_bc;
  undefined **local_b8;
  undefined **local_b4;
  int local_b0;
  undefined1 *local_ac;
  undefined4 local_a8;
  undefined **local_a4;
  undefined4 local_a0;
  undefined1 local_99;
  undefined1 *local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined **local_88;
  int local_84;
  undefined4 local_80;
  undefined **local_7c;
  int local_78;
  undefined1 *local_74;
  undefined4 local_70;
  int local_6c;
  undefined *apuStack_68 [3];
  undefined4 local_5c;
  undefined4 local_58;
  undefined *local_50;
  int local_4c;
  undefined *local_48;
  int local_44;
  undefined *local_40;
  undefined4 local_3c;
  undefined *local_30;
  undefined1 *local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined1 auStack_20 [20];
  undefined *local_c;
  undefined1 *local_8;
  undefined **local_4;
  
  while (&local_44 <= *(int **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = (undefined **)0x0;
  local_99 = 0;
  local_c0 = (undefined **)PTR_s__tmpexitnullbooltruejson____uint_00820821_0x81_00635114;
  local_bc = (undefined1 *)0x4;
  local_b8 = (undefined **)0x1ed;
  FUN_001309b8();
  if (local_b4 != (undefined **)0x0) {
    local_8c = (int)local_b4;
    local_c = *(undefined **)((int)local_b4 + 4);
    local_70 = local_b0;
    local_8 = (undefined1 *)local_b0;
    local_c0 = (undefined **)PTR_DAT_00635118;
    local_bc = (undefined1 *)0x11;
    local_b8 = &local_c;
    local_b4 = (undefined **)0x1;
    local_b0 = 1;
    k3c_internal_pkg_logger_Errorf();
    local_c = (undefined *)0x0;
    if (local_8c != 0) {
      local_c = *(undefined **)(local_8c + 4);
    }
    local_8 = (undefined1 *)local_70;
    local_c0 = (undefined **)PTR_DAT_00635118;
    local_bc = (undefined1 *)0x11;
    local_b8 = &local_c;
    local_b4 = (undefined **)0x1;
    local_b0 = 1;
    FUN_001386c4();
    return;
  }
  uVar2 = FUN_001160a8();
  uVar2 = FUN_0009e2f0(uVar2,&local_c0,auStack_20);
  FUN_0009e2f0(uVar2,auStack_20,&local_c0);
  local_ac = PTR_s_20060102_150405memstats__s_txtal_008262d0_0x29ee_0063511c;
  local_a8 = 0xf;
  FUN_00101cdc();
  local_c = (undefined *)0x0;
  local_8 = (undefined1 *)0x0;
  local_c0 = local_a4;
  local_bc = (undefined1 *)local_a0;
  FUN_0008f77c();
  local_c = PTR_DAT_00635120;
  local_8 = (undefined1 *)local_b8;
  local_c0 = (undefined **)PTR_s_feedinfo__s_txtread_dir_err__vre_008262d0_0x3597_00635124;
  local_bc = (undefined1 *)0xf;
  local_b8 = &local_c;
  local_b4 = (undefined **)0x1;
  local_b0 = 1;
  FUN_0013b72c();
  FUN_0009df04(0,&local_40,local_a8,local_ac);
  local_3c = 4;
  local_40 = PTR_s__tmpexitnullbooltruejson____uint_00820821_0x81_00635114;
  local_c0 = &local_40;
  local_bc = (undefined1 *)0x2;
  local_b8 = (undefined **)0x2;
  FUN_0028054c();
  local_7c = local_b4;
  local_94 = local_b0;
  local_c0 = in_stack_00000004;
  k3c_internal_pkg_filament_ace_v2___CircularQueue__GetAllEntries();
  puVar1 = local_bc;
  local_6c = (int)local_bc;
  local_88 = local_b8;
  local_c0 = local_7c;
  local_bc = (undefined1 *)local_94;
  local_b8 = (undefined **)0x242;
  local_b4 = (undefined **)0x1b6;
  FUN_0012dc78(puVar1);
  if (local_ac != (undefined1 *)0x0) {
    local_98 = local_ac;
    local_c = *(undefined **)(local_ac + 4);
    local_80 = local_a8;
    local_8 = (undefined1 *)local_a8;
    local_c0 = (undefined **)PTR_DAT_00635128;
    local_bc = (undefined1 *)0x11;
    local_b8 = &local_c;
    local_b4 = (undefined **)0x1;
    local_b0 = 1;
    k3c_internal_pkg_logger_Errorf();
    local_c = (undefined *)0x0;
    if (local_98 != (undefined1 *)0x0) {
      local_c = *(undefined **)(local_98 + 4);
    }
    local_8 = (undefined1 *)local_80;
    local_c0 = (undefined **)PTR_DAT_00635128;
    local_bc = (undefined1 *)0x11;
    local_b8 = &local_c;
    local_b4 = (undefined **)0x1;
    local_b0 = 1;
    FUN_001386c4();
    return;
  }
  local_78 = local_b0;
  local_48 = PTR_k3c_internal_pkg_filament_ace_v2___CircularQueue__SaveToFile_deferwrap1_0063512c;
  local_44 = local_b0;
  local_4 = &local_48;
  local_99 = 1;
  local_c0 = (undefined **)PTR_DAT_00635130;
  local_bc = &SUB_00001000;
  local_b8 = (undefined **)0x1000;
  FUN_000986b8(local_b0);
  FUN_0009def4(0,apuStack_68,local_b4);
  local_5c = 0x1000;
  local_58 = 0x1000;
  local_50 = PTR_DAT_00635134;
  local_4c = local_78;
  iVar3 = 0;
  while( true ) {
    if ((int)local_88 <= iVar3) {
      local_c0 = apuStack_68;
      FUN_002fa4bc();
      FUN_0009df04(0,&local_30);
      local_c0 = local_88;
      FUN_00020ce0();
      local_30 = PTR_DAT_00635140;
      local_2c = local_bc;
      local_c0 = local_7c;
      local_bc = (undefined1 *)local_94;
      FUN_0008f77c();
      local_28 = PTR_DAT_00635120;
      local_24 = local_b8;
      local_c0 = (undefined **)PTR_DAT_00635144;
      local_bc = (undefined1 *)0x19;
      local_b8 = &local_30;
      local_b4 = (undefined **)0x2;
      local_b0 = 2;
      k3c_internal_pkg_logger_Infof();
      local_99 = 0;
      (*(code *)*local_4)();
      return;
    }
    local_bc = *(undefined1 **)(local_6c + iVar3 * 8);
    local_b8 = *(undefined ***)(local_6c + iVar3 * 8 + 4);
    local_c0 = (undefined **)0x0;
    local_b4 = (undefined **)PTR_DAT_00635138;
    local_b0 = 1;
    local_84 = iVar3;
    FUN_0007636c();
    local_c0 = apuStack_68;
    local_bc = local_ac;
    local_b8 = (undefined **)local_a8;
    FUN_002fabc4();
    if (local_b0 != 0) break;
    iVar3 = local_84 + 1;
  }
  local_90 = local_b0;
  local_c = *(undefined **)(local_b0 + 4);
  local_74 = local_ac;
  local_8 = local_ac;
  local_c0 = (undefined **)PTR_s_write_err__vclose_notifyremote_e_008262d0_0xa01_0063513c;
  local_bc = (undefined1 *)0xc;
  local_b8 = &local_c;
  local_b4 = (undefined **)0x1;
  local_b0 = 1;
  k3c_internal_pkg_logger_Errorf();
  local_c = (undefined *)0x0;
  if (local_90 != 0) {
    local_c = *(undefined **)(local_90 + 4);
  }
  local_8 = local_74;
  local_c0 = (undefined **)PTR_s_write_err__vclose_notifyremote_e_008262d0_0xa01_0063513c;
  local_bc = (undefined1 *)0xc;
  local_b8 = &local_c;
  local_b4 = (undefined **)0x1;
  local_b0 = 1;
  FUN_001386c4();
  local_99 = 0;
  (*(code *)*local_4)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*CircularQueue).SaveToFile.deferwrap1 @ 00635148 (size 96) */

void k3c_internal_pkg_filament_ace_v2___CircularQueue__SaveToFile_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if (*(undefined4 **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = **(undefined4 **)(unaff_r7 + 4);
    FUN_0012fb5c();
  }
  return;
}



/* k3c/internal/pkg/filament/ace_v2.CleanOldFiles @ 006351a8 (size 1372) */

void k3c_internal_pkg_filament_ace_v2_CleanOldFiles(undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int iVar7;
  undefined4 uVar8;
  uint extraout_r3;
  undefined4 extraout_r3_00;
  uint uVar9;
  code *pcVar10;
  uint uVar11;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar12;
  undefined4 unaff_lr;
  bool bVar13;
  
code_r0x006351a8:
  if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x28)) {
    puVar12 = (undefined1 *)((int)register0x00000054 + -0xa8);
    *(undefined4 *)((int)register0x00000054 + -0xa8) = unaff_lr;
    *(undefined **)((int)register0x00000054 + -0xa4) =
         PTR_s__tmpexitnullbooltruejson____uint_00820821_0x81_00635708;
    *(undefined4 *)((int)register0x00000054 + -0xa0) = 4;
    FUN_00129c88();
    iVar3 = *(int *)((int)register0x00000054 + -0x90);
    if (iVar3 != 0) {
      *(int *)((int)register0x00000054 + -0x5c) = iVar3;
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + -0x8c);
      uVar8 = *(undefined4 *)PTR_DAT_0063570c;
      uVar5 = *(undefined4 *)PTR_DAT_00635710;
      *(int *)((int)register0x00000054 + -0xa4) = iVar3;
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + -0x8c);
      *(undefined4 *)((int)register0x00000054 + -0x9c) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x98) = uVar5;
      FUN_0012ae4c();
      if (*(char *)((int)register0x00000054 + -0x94) == '\0') {
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        if (*(int *)((int)register0x00000054 + -0x5c) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x5c) + 4);
        }
        *(undefined4 *)((int)register0x00000054 + -8) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined **)((int)register0x00000054 + -0xa4) =
             PTR_s_read_dir_err__vreflectlite_Setre_008262d0_0x35a6_00635714;
        *(undefined4 *)((int)register0x00000054 + -0xa0) = 0xf;
        *(undefined1 **)((int)register0x00000054 + -0x9c) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x98) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x94) = 1;
        k3c_internal_pkg_logger_Errorf();
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        uVar8 = 0;
        if (*(int *)((int)register0x00000054 + -0x5c) != 0) {
          uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x5c) + 4);
        }
        *(undefined4 *)((int)register0x00000054 + -8) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined **)((int)register0x00000054 + -0xa4) =
             PTR_s_read_dir_err__vreflectlite_Setre_008262d0_0x35a6_00635714;
        *(undefined4 *)((int)register0x00000054 + -0xa0) = 0xf;
        *(undefined1 **)((int)register0x00000054 + -0x9c) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x98) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x94) = 1;
        FUN_001386c4();
        *(undefined4 *)((int)register0x00000054 + 4) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x8c);
        return;
      }
      *(undefined4 *)((int)register0x00000054 + 4) = 0;
      *(undefined4 *)((int)register0x00000054 + 8) = 0;
      return;
    }
    iVar3 = *(int *)((int)register0x00000054 + -0x9c);
    *(int *)((int)register0x00000054 + -0x4c) = iVar3;
    iVar4 = *(int *)((int)register0x00000054 + -0x98);
    *(int *)((int)register0x00000054 + -0x70) = iVar4;
    iVar6 = 0;
    iVar7 = 0;
    uVar9 = 0;
    uVar11 = 0;
    do {
      *(uint *)((int)register0x00000054 + -0x6c) = uVar9;
      *(uint *)((int)register0x00000054 + -0x68) = uVar11;
      *(int *)((int)register0x00000054 + -0x48) = iVar7;
      if (iVar4 <= iVar6) {
        if (0x14 < (int)uVar9) {
          *(int *)((int)register0x00000054 + -0xa4) = iVar7;
          *(uint *)((int)register0x00000054 + -0xa0) = uVar9;
          *(uint *)((int)register0x00000054 + -0x9c) = uVar11;
          FUN_0008f820();
          *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
          *(undefined **)((int)register0x00000054 + -0x18) =
               PTR_k3c_internal_pkg_filament_ace_v2_CleanOldFiles_func1_00635728;
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x6c);
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x68);
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_0063572c;
          *(undefined4 *)((int)register0x00000054 + -0xa0) =
               *(undefined4 *)((int)register0x00000054 + -0x98);
          *(undefined1 **)((int)register0x00000054 + -0x9c) =
               (undefined1 *)((int)register0x00000054 + -0x18);
          FUN_0018939c();
          iVar3 = *(int *)((int)register0x00000054 + -0x6c) + -0x14;
          *(int *)((int)register0x00000054 + -0x74) = iVar3;
          iVar4 = 0;
          while (iVar4 < iVar3) {
            *(int *)((int)register0x00000054 + -0x78) = iVar4;
            pcVar10 = *(code **)(*(int *)(*(int *)((int)register0x00000054 + -0x48) + iVar4 * 8) +
                                0x18);
            *(undefined4 *)((int)register0x00000054 + -0xa4) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -0x48) + iVar4 * 8 + 4);
            (*pcVar10)();
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x38),
                         *(undefined4 *)((int)register0x00000054 + -0x9c),
                         *(undefined4 *)((int)register0x00000054 + -0xa0));
            *(undefined4 *)((int)register0x00000054 + -0x34) = 4;
            *(undefined **)((int)register0x00000054 + -0x38) =
                 PTR_s__tmpexitnullbooltruejson____uint_00820821_0x81_00635708;
            *(undefined4 *)((int)register0x00000054 + -0x2c) = extraout_r2_00;
            *(undefined4 *)((int)register0x00000054 + -0x30) = extraout_r3_00;
            *(undefined1 **)((int)register0x00000054 + -0xa4) =
                 (undefined1 *)((int)register0x00000054 + -0x38);
            *(undefined4 *)((int)register0x00000054 + -0xa0) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x9c) = 2;
            FUN_0028054c();
            *(undefined4 *)((int)register0x00000054 + -0x54) =
                 *(undefined4 *)((int)register0x00000054 + -0x98);
            *(undefined4 *)((int)register0x00000054 + -0x80) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            *(undefined4 *)((int)register0x00000054 + -0xa4) =
                 *(undefined4 *)((int)register0x00000054 + -0x98);
            *(undefined4 *)((int)register0x00000054 + -0xa0) =
                 *(undefined4 *)((int)register0x00000054 + -0x94);
            FUN_0012ffc0();
            if (*(int *)((int)register0x00000054 + -0x9c) != 0) {
              *(int *)((int)register0x00000054 + -0x60) = *(int *)((int)register0x00000054 + -0x9c);
              *(undefined4 *)((int)register0x00000054 + -0x40) =
                   *(undefined4 *)((int)register0x00000054 + -0x98);
              FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x28));
              *(undefined4 *)((int)register0x00000054 + -0xa4) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              *(undefined4 *)((int)register0x00000054 + -0xa0) =
                   *(undefined4 *)((int)register0x00000054 + -0x80);
              FUN_0008f77c();
              *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_00635730;
              *(undefined4 *)((int)register0x00000054 + -0x24) =
                   *(undefined4 *)((int)register0x00000054 + -0x9c);
              if (*(int *)((int)register0x00000054 + -0x60) == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x60) + 4);
              }
              *(undefined4 *)((int)register0x00000054 + -0x20) = uVar8;
              *(undefined4 *)((int)register0x00000054 + -0x1c) =
                   *(undefined4 *)((int)register0x00000054 + -0x40);
              *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_00635734;
              *(undefined4 *)((int)register0x00000054 + -0xa0) = 0x15;
              *(undefined1 **)((int)register0x00000054 + -0x9c) =
                   (undefined1 *)((int)register0x00000054 + -0x28);
              *(undefined4 *)((int)register0x00000054 + -0x98) = 2;
              *(undefined4 *)((int)register0x00000054 + -0x94) = 2;
              k3c_internal_pkg_logger_Errorf();
            }
            iVar3 = *(int *)((int)register0x00000054 + -0x74);
            iVar4 = *(int *)((int)register0x00000054 + -0x78) + 1;
          }
          *(undefined4 *)((int)register0x00000054 + 4) = 0;
          *(undefined4 *)((int)register0x00000054 + 8) = 0;
          return;
        }
        *(undefined4 *)((int)register0x00000054 + 4) = 0;
        *(undefined4 *)((int)register0x00000054 + 8) = 0;
        return;
      }
      *(int *)((int)register0x00000054 + -0x58) = iVar6;
      iVar4 = *(int *)(iVar3 + iVar6 * 8);
      *(int *)((int)register0x00000054 + -100) = iVar4;
      uVar8 = *(undefined4 *)(iVar3 + iVar6 * 8 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x44) = uVar8;
      pcVar10 = *(code **)(iVar4 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0xa4) = uVar8;
      (*pcVar10)();
      if (*(char *)((int)register0x00000054 + -0xa0) == '\0') {
        pcVar10 = *(code **)(*(int *)((int)register0x00000054 + -100) + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0xa4) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        (*pcVar10)();
        if (*(int *)((int)register0x00000054 + -0x9c) < 9) {
          cVar1 = '\0';
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -0xa4) =
               *(undefined4 *)((int)register0x00000054 + -0xa0);
          *(undefined **)((int)register0x00000054 + -0xa0) =
               PTR_s_feedinfo__s__x__x_Handshake_s__q_00823504_0xc26_00635718;
          *(undefined4 *)((int)register0x00000054 + -0x9c) = 9;
          FUN_00018250();
          cVar1 = *(char *)((int)register0x00000054 + -0x98);
        }
        if (cVar1 == '\0') {
          bVar2 = 1;
        }
        else {
          pcVar10 = *(code **)(*(int *)((int)register0x00000054 + -100) + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0xa4) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          (*pcVar10)();
          uVar11 = *(uint *)((int)register0x00000054 + -0x9c);
          if ((int)uVar11 < 4) {
            bVar2 = 0;
          }
          else {
            uVar9 = uVar11 - 4;
            bVar13 = uVar11 == uVar9;
            if (uVar11 < uVar9) goto LAB_006356f0;
            *(uint *)((int)register0x00000054 + -0xa4) =
                 *(int *)((int)register0x00000054 + -0xa0) + uVar9;
            *(undefined **)((int)register0x00000054 + -0xa0) =
                 PTR_s__txt___Fromxn___q_q_FN__FL__LN___00820821_0x481_0063571c;
            *(undefined4 *)((int)register0x00000054 + -0x9c) = 4;
            FUN_00018250();
            bVar2 = *(byte *)((int)register0x00000054 + -0x98);
          }
          bVar2 = bVar2 ^ 1;
        }
        if (bVar2 == 0) {
          pcVar10 = *(code **)(*(int *)((int)register0x00000054 + -100) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0xa4) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          (*pcVar10)();
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0xa0);
          uVar8 = *(undefined4 *)((int)register0x00000054 + -0x9c);
          if (*(int *)((int)register0x00000054 + -0x98) == 0) {
            uVar9 = *(int *)((int)register0x00000054 + -0x6c) + 1;
            uVar11 = *(uint *)((int)register0x00000054 + -0x68);
            if (uVar11 < uVar9) {
              *(undefined4 *)((int)register0x00000054 + -0x7c) = uVar5;
              *(undefined4 *)((int)register0x00000054 + -0x50) = uVar8;
              *(undefined4 *)((int)register0x00000054 + -0xa4) =
                   *(undefined4 *)((int)register0x00000054 + -0x48);
              *(uint *)((int)register0x00000054 + -0xa0) = uVar9;
              *(uint *)((int)register0x00000054 + -0x9c) = uVar11;
              *(undefined4 *)((int)register0x00000054 + -0x98) = 1;
              *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_00635720;
              FUN_000987f4();
              iVar7 = *(int *)((int)register0x00000054 + -0x90);
              uVar9 = *(uint *)((int)register0x00000054 + -0x8c);
              uVar11 = *(uint *)((int)register0x00000054 + -0x88);
              uVar5 = *(undefined4 *)((int)register0x00000054 + -0x7c);
              uVar8 = *(undefined4 *)((int)register0x00000054 + -0x50);
            }
            else {
              iVar7 = *(int *)((int)register0x00000054 + -0x48);
            }
            *(undefined4 *)(iVar7 + (uVar9 - 1) * 8) = uVar5;
            iVar3 = iVar7 + (uVar9 - 1) * 8;
            if (*(int *)PTR_DAT_00635724 != 0) {
              uVar9 = FUN_0009db64();
              *unaff_r8 = extraout_r2;
              unaff_r8[1] = *(undefined4 *)(iVar3 + 4);
              uVar8 = extraout_r2;
              uVar11 = extraout_r3;
            }
            *(undefined4 *)(iVar3 + 4) = uVar8;
          }
          else {
            uVar11 = *(uint *)((int)register0x00000054 + -0x68);
            uVar9 = *(uint *)((int)register0x00000054 + -0x6c);
            iVar7 = *(int *)((int)register0x00000054 + -0x48);
          }
        }
        else {
          uVar11 = *(uint *)((int)register0x00000054 + -0x68);
          uVar9 = *(uint *)((int)register0x00000054 + -0x6c);
          iVar7 = *(int *)((int)register0x00000054 + -0x48);
        }
      }
      else {
        uVar11 = *(uint *)((int)register0x00000054 + -0x68);
        uVar9 = *(uint *)((int)register0x00000054 + -0x6c);
        iVar7 = *(int *)((int)register0x00000054 + -0x48);
      }
      iVar6 = *(int *)((int)register0x00000054 + -0x58) + 1;
      iVar4 = *(int *)((int)register0x00000054 + -0x70);
      iVar3 = *(int *)((int)register0x00000054 + -0x4c);
    } while( true );
  }
  goto LAB_006356f8;
LAB_006356f0:
  param_1 = FUN_0009dc34();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xa8);
  if (bVar13) {
    register0x00000054 = (BADSPACEBASE *)puVar12;
  }
LAB_006356f8:
  unaff_lr = 0x635700;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x006351a8;
}



/* k3c/internal/pkg/filament/ace_v2.CleanOldFiles.func1 @ 00635738 (size 200) */

void k3c_internal_pkg_filament_ace_v2_CleanOldFiles_func1(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int unaff_r7;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x60) = unaff_lr;
      uVar3 = *(uint *)(unaff_r7 + 8);
      uVar1 = *(uint *)((int)register0x00000054 + 4);
      uVar7 = uVar1 == uVar3;
      if (uVar1 < uVar3) {
        *(uint *)((int)register0x00000054 + -0x30) = uVar3;
        iVar4 = *(int *)(unaff_r7 + 4);
        *(int *)((int)register0x00000054 + -0x2c) = iVar4;
        pcVar5 = *(code **)(*(int *)(iVar4 + uVar1 * 8) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x5c) = *(undefined4 *)(iVar4 + uVar1 * 8 + 4);
        uVar2 = (*pcVar5)();
        FUN_0009e2f0(uVar2,(undefined1 *)((int)register0x00000054 + -0x58),
                     (undefined1 *)((int)register0x00000054 + -0x14));
        uVar1 = *(uint *)((int)register0x00000054 + 8);
        uVar7 = uVar1 == *(uint *)((int)register0x00000054 + -0x30);
        if (uVar1 < *(uint *)((int)register0x00000054 + -0x30)) {
          pcVar5 = *(code **)(*(int *)(*(int *)((int)register0x00000054 + -0x2c) + uVar1 * 8) + 0x10
                             );
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -0x2c) + uVar1 * 8 + 4);
          uVar2 = (*pcVar5)();
          uVar2 = FUN_0009e2f0(uVar2,(undefined1 *)((int)register0x00000054 + -0x58),
                               (undefined1 *)((int)register0x00000054 + -0x28));
          uVar2 = FUN_0009e2f0(uVar2,(undefined1 *)((int)register0x00000054 + -0x14),
                               (undefined1 *)((int)register0x00000054 + -0x5c));
          FUN_0009e2f0(uVar2,(undefined1 *)((int)register0x00000054 + -0x28),
                       (undefined1 *)((int)register0x00000054 + -0x48));
          FUN_00109cdc();
          *(undefined1 *)((int)register0x00000054 + 0xc) =
               *(undefined1 *)((int)register0x00000054 + -0x34);
          return;
        }
        FUN_0009dbd4();
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x60);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x6357fc;
    param_1 = FUN_0009bf00(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*CircularQueue).TriggerSaveAndClean @ 00635800 (size 480) */

/* WARNING: Removing unreachable block (ram,0x00635920) */
/* WARNING: Removing unreachable block (ram,0x0063584c) */

void k3c_internal_pkg_filament_ace_v2___CircularQueue__TriggerSaveAndClean(void)

{
  int iVar1;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int local_30;
  
  while (iVar1 = in_stack_00000004, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_filament_ace_v2___CircularQueue__SaveToFile();
  if (local_30 != 0) {
    k3c_internal_pkg_logger_Errorf();
    FUN_001386c4();
    return;
  }
  k3c_internal_pkg_filament_ace_v2_CleanOldFiles();
  if (iVar1 != 0) {
    k3c_internal_pkg_logger_Errorf();
    FUN_001386c4();
    return;
  }
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*CircularQueue).GetQueueCount @ 006359ec (size 240) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void k3c_internal_pkg_filament_ace_v2___CircularQueue__GetQueueCount(void)

{
  int iVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  int in_stack_00000008;
  code *pcStack_10;
  int iStack_c;
  int iStack_8;
  code **ppcStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x635ae0;
    FUN_0009bf64();
  }
  ppcStack_4 = (code **)0x0;
  in_stack_00000008 = 0;
  iStack_8 = in_stack_00000004 + 0xfac;
  FUN_000ac304();
  pcStack_10 = _UNK_00635ae8;
  iStack_c = iStack_8;
  ppcStack_4 = &pcStack_10;
  iVar1 = *(int *)(in_stack_00000004 + 0xfa4);
  in_stack_00000008 = *(int *)(in_stack_00000004 + 0xfa8);
  if (in_stack_00000008 != iVar1) {
    if (iVar1 <= in_stack_00000008) {
      in_stack_00000008 = in_stack_00000008 - iVar1;
      (*_UNK_00635ae8)();
                    /* WARNING: Could not recover jumptable at 0x00635a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    in_stack_00000008 = (*(int *)(in_stack_00000004 + 4000) - iVar1) + in_stack_00000008;
    (*_UNK_00635ae8)();
                    /* WARNING: Could not recover jumptable at 0x00635aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  in_stack_00000008 = 0;
  (*_UNK_00635ae8)();
                    /* WARNING: Could not recover jumptable at 0x00635acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*CircularQueue).GetQueueCount.deferwrap1 @ 00635aec (size 84) */

void k3c_internal_pkg_filament_ace_v2___CircularQueue__GetQueueCount_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x635b20;
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000ac3e4();
                    /* WARNING: Could not recover jumptable at 0x00635b14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.CommandType.EnumDescriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00635b40 (size 188) */

void k3c_internal_pkg_filament_ace_v2_CommandType_EnumDescriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00635c00;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00635c00) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00635c00;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00635c04 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00635c08 = uVar1;
          if (*(int *)PTR_DAT_00635c0c != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00635c10;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00635c10 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00635be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x635bf8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.RespCode.EnumDescriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00635c14 (size 188) */

void k3c_internal_pkg_filament_ace_v2_RespCode_EnumDescriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00635cd4;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00635cd4) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00635cd4;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00635cd8 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00635cdc = uVar1;
          if (*(int *)PTR_DAT_00635ce0 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00635ce4;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00635ce4 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00635cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x635ccc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.WorkState.EnumDescriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00635ce8 (size 188) */

void k3c_internal_pkg_filament_ace_v2_WorkState_EnumDescriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00635da8;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00635da8) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00635da8;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00635dac = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00635db0 = uVar1;
          if (*(int *)PTR_DAT_00635db4 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00635db8;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00635db8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00635d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x635da0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.SlotState.EnumDescriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00635dbc (size 188) */

void k3c_internal_pkg_filament_ace_v2_SlotState_EnumDescriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00635e7c;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00635e7c) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00635e7c;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00635e80 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00635e84 = uVar1;
          if (*(int *)PTR_DAT_00635e88 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00635e8c;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00635e8c = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00635e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x635e74;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.FilamentState.EnumDescriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00635e90 (size 188) */

void k3c_internal_pkg_filament_ace_v2_FilamentState_EnumDescriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00635f50;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00635f50) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00635f50;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00635f54 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00635f58 = uVar1;
          if (*(int *)PTR_DAT_00635f5c != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00635f60;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00635f60 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00635f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x635f48;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.DryState.EnumDescriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00635f64 (size 188) */

void k3c_internal_pkg_filament_ace_v2_DryState_EnumDescriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00636024;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00636024) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00636024;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00636028 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_0063602c = uVar1;
          if (*(int *)PTR_DAT_00636030 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00636034;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00636034 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00636008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x63601c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.KeyIndex.EnumDescriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00636038 (size 188) */

void k3c_internal_pkg_filament_ace_v2_KeyIndex_EnumDescriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_006360f8;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_006360f8) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006360f8;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_006360fc = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00636100 = uVar1;
          if (*(int *)PTR_DAT_00636104 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00636108;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00636108 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x006360dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x6360f0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.TestType.EnumDescriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 0063610c (size 188) */

void k3c_internal_pkg_filament_ace_v2_TestType_EnumDescriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_006361cc;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_006361cc) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006361cc;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_006361d0 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_006361d4 = uVar1;
          if (*(int *)PTR_DAT_006361d8 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_006361dc;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_006361dc = uVar2;
                    /* WARNING: Could not recover jumptable at 0x006361b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x6361c4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*GenericRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 006361e0 (size 188) */

void k3c_internal_pkg_filament_ace_v2___GenericRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_006362a0;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_006362a0) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006362a0;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_006362a4 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_006362a8 = uVar1;
          if (*(int *)PTR_DAT_006362ac != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_006362b0;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_006362b0 = uVar2;
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x636298;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*GenericResponse).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 006362b4 (size 188) */

void k3c_internal_pkg_filament_ace_v2___GenericResponse__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00636374;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00636374) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00636374;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00636378 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_0063637c = uVar1;
          if (*(int *)PTR_DAT_00636380 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00636384;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00636384 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00636358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x63636c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DiscoverDeviceResponse).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00636388 (size 188) */

void k3c_internal_pkg_filament_ace_v2___DiscoverDeviceResponse__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00636448;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00636448) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00636448;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_0063644c = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00636450 = uVar1;
          if (*(int *)PTR_DAT_00636454 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00636458;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00636458 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0063642c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x636440;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*AssignDeviceIdRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 0063645c (size 188) */

void k3c_internal_pkg_filament_ace_v2___AssignDeviceIdRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_0063651c;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_0063651c) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0063651c;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00636520 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00636524 = uVar1;
          if (*(int *)PTR_DAT_00636528 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_0063652c;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_0063652c = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00636500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x636514;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedOrRollbackRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00636530 (size 188) */

void k3c_internal_pkg_filament_ace_v2___FeedOrRollbackRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_006365f0;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_006365f0) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006365f0;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_006365f4 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_006365f8 = uVar1;
          if (*(int *)PTR_DAT_006365fc != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00636600;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00636600 = uVar2;
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x6365e8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*StopFeedOrRollbackRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00636604 (size 188) */

void k3c_internal_pkg_filament_ace_v2___StopFeedOrRollbackRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_006366c4;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_006366c4) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006366c4;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_006366c8 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_006366cc = uVar1;
          if (*(int *)PTR_DAT_006366d0 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_006366d4;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_006366d4 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x006366a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x6366bc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*UpdateSpeedRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 006366d8 (size 188) */

void k3c_internal_pkg_filament_ace_v2___UpdateSpeedRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00636798;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00636798) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00636798;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_0063679c = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_006367a0 = uVar1;
          if (*(int *)PTR_DAT_006367a4 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_006367a8;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_006367a8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0063677c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x636790;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedInfo).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 006367ac (size 188) */

void k3c_internal_pkg_filament_ace_v2___FeedInfo__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_0063686c;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_0063686c) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0063686c;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00636870 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00636874 = uVar1;
          if (*(int *)PTR_DAT_00636878 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_0063687c;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_0063687c = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00636850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x636864;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FeedInfoResponse).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00636880 (size 188) */

void k3c_internal_pkg_filament_ace_v2___FeedInfoResponse__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00636940;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00636940) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00636940;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00636944 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00636948 = uVar1;
          if (*(int *)PTR_DAT_0063694c != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00636950;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00636950 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00636924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x636938;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFeedCheckRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00636954 (size 188) */

void k3c_internal_pkg_filament_ace_v2___SetFeedCheckRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00636a14;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00636a14) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00636a14;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00636a18 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00636a1c = uVar1;
          if (*(int *)PTR_DAT_00636a20 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00636a24;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00636a24 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x006369f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x636a0c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DryingRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00636a28 (size 188) */

void k3c_internal_pkg_filament_ace_v2___DryingRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00636ae8;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00636ae8) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00636ae8;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00636aec = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00636af0 = uVar1;
          if (*(int *)PTR_DAT_00636af4 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00636af8;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00636af8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00636acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x636ae0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*GetTempResponse).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00636afc (size 188) */

void k3c_internal_pkg_filament_ace_v2___GetTempResponse__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00636bbc;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00636bbc) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00636bbc;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00636bc0 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00636bc4 = uVar1;
          if (*(int *)PTR_DAT_00636bc8 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00636bcc;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00636bcc = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00636ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x636bb4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetDryTempRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00636bd0 (size 188) */

void k3c_internal_pkg_filament_ace_v2___SetDryTempRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00636c90;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00636c90) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00636c90;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00636c94 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00636c98 = uVar1;
          if (*(int *)PTR_DAT_00636c9c != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00636ca0;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00636ca0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00636c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x636c88;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetDryPowerRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00636ca4 (size 188) */

void k3c_internal_pkg_filament_ace_v2___SetDryPowerRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00636d64;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00636d64) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00636d64;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00636d68 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00636d6c = uVar1;
          if (*(int *)PTR_DAT_00636d70 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00636d74;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00636d74 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00636d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x636d5c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetValveRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00636d78 (size 188) */

void k3c_internal_pkg_filament_ace_v2___SetValveRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00636e38;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00636e38) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00636e38;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00636e3c = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00636e40 = uVar1;
          if (*(int *)PTR_DAT_00636e44 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00636e48;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00636e48 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00636e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x636e30;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DryTestRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00636e4c (size 188) */

void k3c_internal_pkg_filament_ace_v2___DryTestRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00636f0c;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00636f0c) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00636f0c;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00636f10 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00636f14 = uVar1;
          if (*(int *)PTR_DAT_00636f18 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00636f1c;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00636f1c = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00636ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x636f04;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*UpgradeRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00636f20 (size 188) */

void k3c_internal_pkg_filament_ace_v2___UpgradeRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00636fe0;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00636fe0) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00636fe0;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00636fe4 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00636fe8 = uVar1;
          if (*(int *)PTR_DAT_00636fec != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00636ff0;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00636ff0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00636fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x636fd8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FirmwareRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00636ff4 (size 188) */

void k3c_internal_pkg_filament_ace_v2___FirmwareRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_006370b4;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_006370b4) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006370b4;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_006370b8 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_006370bc = uVar1;
          if (*(int *)PTR_DAT_006370c0 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_006370c4;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_006370c4 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00637098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x6370ac;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*VersionResponse).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 006370c8 (size 188) */

void k3c_internal_pkg_filament_ace_v2___VersionResponse__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00637188;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00637188) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00637188;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_0063718c = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00637190 = uVar1;
          if (*(int *)PTR_DAT_00637194 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00637198;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00637198 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0063716c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x637180;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*RfidRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 0063719c (size 188) */

void k3c_internal_pkg_filament_ace_v2___RfidRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_0063725c;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_0063725c) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0063725c;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00637260 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00637264 = uVar1;
          if (*(int *)PTR_DAT_00637268 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_0063726c;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_0063726c = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00637240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x637254;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetRfidEnableRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00637270 (size 188) */

void k3c_internal_pkg_filament_ace_v2___SetRfidEnableRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00637330;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00637330) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00637330;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00637334 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00637338 = uVar1;
          if (*(int *)PTR_DAT_0063733c != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00637340;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00637340 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00637314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x637328;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FlashLedRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00637344 (size 188) */

void k3c_internal_pkg_filament_ace_v2___FlashLedRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00637404;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00637404) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00637404;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00637408 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_0063740c = uVar1;
          if (*(int *)PTR_DAT_00637410 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00637414;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00637414 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x006373e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x6373fc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetFanRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00637418 (size 188) */

void k3c_internal_pkg_filament_ace_v2___SetFanRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_006374d8;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_006374d8) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006374d8;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_006374dc = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_006374e0 = uVar1;
          if (*(int *)PTR_DAT_006374e4 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_006374e8;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_006374e8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x006374bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x6374d0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetOutputRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 006374ec (size 188) */

void k3c_internal_pkg_filament_ace_v2___SetOutputRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_006375ac;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_006375ac) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006375ac;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_006375b0 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_006375b4 = uVar1;
          if (*(int *)PTR_DAT_006375b8 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_006375bc;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_006375bc = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00637590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x6375a4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SetKeyLogEnableRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 006375c0 (size 188) */

void k3c_internal_pkg_filament_ace_v2___SetKeyLogEnableRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00637680;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00637680) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00637680;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00637684 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00637688 = uVar1;
          if (*(int *)PTR_DAT_0063768c != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00637690;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00637690 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00637664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x637678;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*KeyStateResponse).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00637694 (size 188) */

void k3c_internal_pkg_filament_ace_v2___KeyStateResponse__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00637754;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00637754) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00637754;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00637758 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_0063775c = uVar1;
          if (*(int *)PTR_DAT_00637760 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00637764;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00637764 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00637738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x63774c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*LinearCalibrationRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00637768 (size 188) */

void k3c_internal_pkg_filament_ace_v2___LinearCalibrationRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00637828;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00637828) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00637828;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_0063782c = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00637830 = uVar1;
          if (*(int *)PTR_DAT_00637834 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00637838;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00637838 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0063780c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x637820;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*ColorInfo).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 0063783c (size 188) */

void k3c_internal_pkg_filament_ace_v2___ColorInfo__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_006378fc;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_006378fc) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006378fc;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00637900 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00637904 = uVar1;
          if (*(int *)PTR_DAT_00637908 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_0063790c;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_0063790c = uVar2;
                    /* WARNING: Could not recover jumptable at 0x006378e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x6378f4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*ExtruderTemp).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00637910 (size 188) */

void k3c_internal_pkg_filament_ace_v2___ExtruderTemp__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_006379d0;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_006379d0) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006379d0;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_006379d4 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_006379d8 = uVar1;
          if (*(int *)PTR_DAT_006379dc != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_006379e0;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_006379e0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x006379b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x6379c8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*HotbedTemp).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 006379e4 (size 188) */

void k3c_internal_pkg_filament_ace_v2___HotbedTemp__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00637aa4;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00637aa4) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00637aa4;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00637aa8 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00637aac = uVar1;
          if (*(int *)PTR_DAT_00637ab0 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00637ab4;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00637ab4 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00637a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x637a9c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentInfoResponse).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00637ab8 (size 188) */

void k3c_internal_pkg_filament_ace_v2___FilamentInfoResponse__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00637b78;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00637b78) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00637b78;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00637b7c = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00637b80 = uVar1;
          if (*(int *)PTR_DAT_00637b84 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00637b88;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00637b88 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00637b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x637b70;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*RfidTestRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00637b8c (size 188) */

void k3c_internal_pkg_filament_ace_v2___RfidTestRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00637c4c;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00637c4c) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00637c4c;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00637c50 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00637c54 = uVar1;
          if (*(int *)PTR_DAT_00637c58 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00637c5c;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00637c5c = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00637c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x637c44;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DryStatus).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00637c60 (size 188) */

void k3c_internal_pkg_filament_ace_v2___DryStatus__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00637d20;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00637d20) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00637d20;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00637d24 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00637d28 = uVar1;
          if (*(int *)PTR_DAT_00637d2c != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00637d30;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00637d30 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00637d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x637d18;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SlotStatus).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00637d34 (size 188) */

void k3c_internal_pkg_filament_ace_v2___SlotStatus__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00637df4;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00637df4) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00637df4;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00637df8 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00637dfc = uVar1;
          if (*(int *)PTR_DAT_00637e00 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00637e04;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00637e04 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00637dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x637dec;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*StatusResponse).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00637e08 (size 188) */

void k3c_internal_pkg_filament_ace_v2___StatusResponse__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00637ec8;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00637ec8) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00637ec8;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00637ecc = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00637ed0 = uVar1;
          if (*(int *)PTR_DAT_00637ed4 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00637ed8;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00637ed8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00637eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x637ec0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*InfoResponse).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00637edc (size 188) */

void k3c_internal_pkg_filament_ace_v2___InfoResponse__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00637f9c;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00637f9c) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00637f9c;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00637fa0 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00637fa4 = uVar1;
          if (*(int *)PTR_DAT_00637fa8 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00637fac;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00637fac = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00637f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x637f94;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*TestResult).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00637fb0 (size 188) */

void k3c_internal_pkg_filament_ace_v2___TestResult__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00638070;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00638070) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00638070;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00638074 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00638078 = uVar1;
          if (*(int *)PTR_DAT_0063807c != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00638080;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00638080 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00638054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x638068;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*ReadTesterRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00638084 (size 188) */

void k3c_internal_pkg_filament_ace_v2___ReadTesterRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00638144;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00638144) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00638144;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_00638148 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_0063814c = uVar1;
          if (*(int *)PTR_DAT_00638150 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00638154;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00638154 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00638128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x63813c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*ReadTesterResponse).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00638158 (size 188) */

void k3c_internal_pkg_filament_ace_v2___ReadTesterResponse__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_00638218;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_00638218) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00638218;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_0063821c = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_00638220 = uVar1;
          if (*(int *)PTR_DAT_00638224 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_00638228;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_00638228 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x006381fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x638210;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*WriteTesterResultRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 0063822c (size 188) */

void k3c_internal_pkg_filament_ace_v2___WriteTesterResultRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_006382ec;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_006382ec) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006382ec;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_006382f0 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_006382f4 = uVar1;
          if (*(int *)PTR_DAT_006382f8 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_006382fc;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_006382fc = uVar2;
                    /* WARNING: Could not recover jumptable at 0x006382d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x6382e4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*WriteTesterSnRequest).Descriptor.file_ace_proto_v2_proto_rawDescGZIP.func1 @ 00638300 (size 188) */

void k3c_internal_pkg_filament_ace_v2___WriteTesterSnRequest__Descriptor_file_ace_proto_v2_proto_rawDescGZIP_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
      FUN_00017ffc();
      bVar4 = false;
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        bVar4 = *(uint *)((int)register0x00000054 + -0x10) == -(int)PTR_DAT_006383c0;
        if (*(uint *)((int)register0x00000054 + -0x10) <= (uint)-(int)PTR_DAT_006383c0) {
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_006383c0;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0x15bc;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0x15bc;
          google_golang_org_protobuf_internal_impl_Export_CompressGZIP();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *(undefined4 *)PTR_DAT_006383c4 = *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)PTR_DAT_006383c8 = uVar1;
          if (*(int *)PTR_DAT_006383cc != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r2;
            unaff_r8[1] = *(undefined4 *)PTR_DAT_006383d0;
            uVar2 = extraout_r2;
          }
          *(undefined4 *)PTR_DAT_006383d0 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x006383a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x1c))();
          return;
        }
      }
      param_1 = FUN_0008a988();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x6383b8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.init @ 006383d4 (size 2788) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2_init(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 extraout_r2_04;
  undefined4 extraout_r2_05;
  undefined4 extraout_r2_06;
  undefined4 extraout_r2_07;
  undefined4 extraout_r2_08;
  undefined4 extraout_r2_09;
  undefined4 extraout_r2_10;
  undefined4 extraout_r2_11;
  undefined4 extraout_r2_12;
  undefined4 extraout_r2_13;
  undefined4 extraout_r2_14;
  undefined4 extraout_r2_15;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_1c;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x638f0c;
    FUN_0009bf64();
  }
  func_0x0009bba4();
  func_0x0009bba4();
  k3c_internal_pkg_filament_ace_v2_map_init_2();
  func_0x0009bba4();
  FUN_000908bc();
  FUN_00092908();
  puStack_10[1] = 4;
  puVar3 = puStack_10;
  if (*(int *)PTR_DAT_00638bec != 0) {
    puVar3 = (undefined4 *)FUN_0009db54(puStack_10,4,*puStack_10);
    *unaff_r8 = extraout_r2;
  }
  *puVar3 = PTR_s_INITIDLEBUSYFREE_txt___Fromxn____00820821_0x471_00638bf0;
  FUN_00092908();
  puStack_10[1] = 4;
  puVar3 = puStack_10;
  if (*(int *)PTR_DAT_00638bec != 0) {
    puVar3 = (undefined4 *)FUN_0009db54(puStack_10,4,*puStack_10);
    *unaff_r8 = extraout_r2_00;
  }
  *puVar3 = PTR_s_IDLEBUSYFREE_txt___Fromxn___q_q__00820821_0x475_00638bf4;
  FUN_00092908();
  puStack_10[1] = 4;
  puVar3 = puStack_10;
  if (*(int *)PTR_DAT_00638bec != 0) {
    puVar3 = (undefined4 *)FUN_0009db54(puStack_10,4,*puStack_10);
    *unaff_r8 = extraout_r2_01;
  }
  *puVar3 = PTR_s_BUSYFREE_txt___Fromxn___q_q_FN___00820821_0x479_00638bf8;
  puVar1 = PTR_DAT_00638be8;
  FUN_00092908();
  puStack_10[1] = 7;
  if (*(int *)PTR_DAT_00638bec != 0) {
    puStack_10 = (undefined4 *)FUN_0009db74(puStack_10,7,*puStack_10);
    *unaff_r8 = extraout_r2_02;
    unaff_r8[1] = uStack_1c;
    unaff_r8[2] = *(undefined4 *)PTR_DAT_00638bfc;
  }
  *puStack_10 = PTR_s_UPGREADKEEPINGMACHINESUCCESSnil_k_008216f7_0xd5d_00638c00;
  *(undefined4 *)PTR_DAT_00638bfc = uStack_1c;
  FUN_000908bc();
  FUN_00093a08();
  *puStack_c = 0;
  FUN_00093a08();
  *puStack_c = 1;
  FUN_00093a08();
  *puStack_c = 2;
  puVar2 = PTR_DAT_00638c04;
  FUN_00093a08();
  *puStack_c = 3;
  if (*(int *)PTR_DAT_00638bec != 0) {
    FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_00638c08;
  }
  *(undefined **)PTR_DAT_00638c08 = puVar1;
  func_0x0009bba4();
  func_0x0009bba4();
  FUN_000908bc();
  FUN_00092908();
  puVar3 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = 5;
  _DAT_0000000d = 0;
  if (*(int *)PTR_DAT_00638bec != 0) {
    puVar3 = (undefined4 *)FUN_0009db54(7,5,CONCAT22(_DAT_00000009,_DAT_00000007));
    *unaff_r8 = extraout_r2_03;
  }
  *puVar3 = PTR_DAT_00638c0c;
  FUN_00092908();
  puVar3 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = 7;
  _DAT_0000000d = 0;
  if (*(int *)PTR_DAT_00638bec != 0) {
    puVar3 = (undefined4 *)FUN_0009db54(7,7,CONCAT22(_DAT_00000009,_DAT_00000007));
    *unaff_r8 = extraout_r2_04;
  }
  *puVar3 = PTR_s_UNKNOWN_events__goid__s_nil__sca_008216f7_0x641_00638c10;
  FUN_00092908();
  puVar3 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = 10;
  _DAT_0000000d = 0;
  if (*(int *)PTR_DAT_00638bec != 0) {
    puVar3 = (undefined4 *)FUN_0009db54(7,10,CONCAT22(_DAT_00000009,_DAT_00000007));
    *unaff_r8 = extraout_r2_05;
  }
  *puVar3 = PTR_DAT_00638c14;
  puVar1 = PTR_DAT_00638be8;
  FUN_00092908();
  puVar3 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = 0xb;
  _DAT_0000000d = 0;
  if (*(int *)PTR_DAT_00638bec != 0) {
    puVar3 = (undefined4 *)FUN_0009db74(7,0xb,CONCAT22(_DAT_00000009,_DAT_00000007));
    *unaff_r8 = extraout_r2_06;
    unaff_r8[1] = puVar2;
    unaff_r8[2] = *(undefined4 *)PTR_DAT_00638c18;
  }
  *puVar3 = PTR_DAT_00638c1c;
  *(undefined **)PTR_DAT_00638c18 = puVar2;
  FUN_000908bc();
  FUN_00093a08();
  *puStack_c = 0;
  FUN_00093a08();
  *puStack_c = 1;
  FUN_00093a08();
  *puStack_c = 2;
  puVar2 = PTR_DAT_00638c04;
  FUN_00093a08();
  *puStack_c = 3;
  if (*(int *)PTR_DAT_00638bec != 0) {
    FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_00638c20;
  }
  *(undefined **)PTR_DAT_00638c20 = puVar1;
  FUN_000908bc();
  FUN_00092908();
  puVar3 = (undefined4 *)&DAT_0000000b;
  _DAT_0000000f = 4;
  _DAT_00000011 = 0;
  if (*(int *)PTR_DAT_00638bec != 0) {
    puVar3 = (undefined4 *)FUN_0009db54(0xb,4,CONCAT22(_DAT_0000000d,_DAT_0000000b));
    *unaff_r8 = extraout_r2_07;
  }
  *puVar3 = PTR_s_FREE_txt___Fromxn___q_q_FN__FL___00820821_0x47d_00638c24;
  FUN_00092908();
  puVar3 = (undefined4 *)&DAT_0000000b;
  _DAT_0000000f = 8;
  _DAT_00000011 = 0;
  if (*(int *)PTR_DAT_00638bec != 0) {
    puVar3 = (undefined4 *)FUN_0009db54(0xb,8,CONCAT22(_DAT_0000000d,_DAT_0000000b));
    *unaff_r8 = extraout_r2_08;
  }
  *puVar3 = _UNK_00638c28;
  FUN_00092908();
  puVar3 = (undefined4 *)&DAT_0000000b;
  _DAT_0000000f = 7;
  _DAT_00000011 = 0;
  if (*(int *)PTR_DAT_00638bec != 0) {
    puVar3 = (undefined4 *)FUN_0009db54(0xb,7,CONCAT22(_DAT_0000000d,_DAT_0000000b));
    *unaff_r8 = extraout_r2_09;
  }
  *puVar3 = _UNK_00638c2c;
  FUN_00092908();
  puVar3 = (undefined4 *)&DAT_0000000b;
  _DAT_0000000f = 8;
  _DAT_00000011 = 0;
  if (*(int *)PTR_DAT_00638bec != 0) {
    puVar3 = (undefined4 *)FUN_0009db54(0xb,8,CONCAT22(_DAT_0000000d,_DAT_0000000b));
    *unaff_r8 = extraout_r2_10;
  }
  *puVar3 = _UNK_00638c30;
  FUN_00092908();
  puVar3 = (undefined4 *)&DAT_0000000b;
  _DAT_0000000f = 9;
  _DAT_00000011 = 0;
  if (*(int *)PTR_DAT_00638bec != 0) {
    puVar3 = (undefined4 *)FUN_0009db54(0xb,9,CONCAT22(_DAT_0000000d,_DAT_0000000b));
    *unaff_r8 = extraout_r2_11;
  }
  *puVar3 = _UNK_00638c34;
  puVar1 = PTR_DAT_00638be8;
  FUN_00092908();
  puVar3 = (undefined4 *)&DAT_0000000b;
  _DAT_0000000f = 9;
  _DAT_00000011 = 0;
  if (*(int *)PTR_DAT_00638bec != 0) {
    puVar3 = (undefined4 *)FUN_0009db74(0xb,9,CONCAT22(_DAT_0000000d,_DAT_0000000b));
    *unaff_r8 = extraout_r2_12;
    unaff_r8[1] = puVar2;
    unaff_r8[2] = *_UNK_00638c38;
  }
  *puVar3 = _UNK_00638c3c;
  *_UNK_00638c38 = puVar2;
  FUN_000908bc();
  FUN_00093a08();
  *puStack_c = 0;
  FUN_00093a08();
  *puStack_c = 1;
  FUN_00093a08();
  *puStack_c = 2;
  FUN_00093a08();
  *puStack_c = 3;
  FUN_00093a08();
  *puStack_c = 4;
  puVar2 = PTR_DAT_00638c04;
  FUN_00093a08();
  *puStack_c = 5;
  if (*(int *)PTR_DAT_00638bec != 0) {
    FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_00638f14;
  }
  *(undefined **)PTR_DAT_00638f14 = puVar1;
  func_0x0009bba4();
  func_0x0009bba4();
  FUN_000908bc();
  FUN_00092908();
  puVar3 = (undefined4 *)&DAT_00000009;
  _DAT_0000000d = 5;
  _DAT_0000000f = 0;
  if (*(int *)PTR_DAT_00638f1c != 0) {
    puVar3 = (undefined4 *)FUN_0009db54(9,5,CONCAT22(_DAT_0000000b,_DAT_00000009));
    *unaff_r8 = extraout_r2_13;
  }
  *puVar3 = PTR_DAT_00638f20;
  FUN_00092908();
  puVar3 = (undefined4 *)&DAT_00000009;
  _DAT_0000000d = 7;
  _DAT_0000000f = 0;
  if (*(int *)PTR_DAT_00638f1c != 0) {
    puVar3 = (undefined4 *)FUN_0009db54(9,7,CONCAT22(_DAT_0000000b,_DAT_00000009));
    *unaff_r8 = extraout_r2_14;
  }
  *puVar3 = PTR_s_MACHINESUCCESSnil_keyderivedInit_008216f7_0xd6b_00638f24;
  puVar1 = PTR_DAT_00638f18;
  FUN_00092908();
  puVar3 = (undefined4 *)&DAT_00000009;
  _DAT_0000000d = 5;
  _DAT_0000000f = 0;
  if (*(int *)PTR_DAT_00638f1c != 0) {
    puVar3 = (undefined4 *)FUN_0009db74(9,5,CONCAT22(_DAT_0000000b,_DAT_00000009));
    *unaff_r8 = extraout_r2_15;
    unaff_r8[1] = puVar2;
    unaff_r8[2] = *(undefined4 *)PTR_DAT_00638f28;
  }
  *puVar3 = PTR_DAT_00638f2c;
  *(undefined **)PTR_DAT_00638f28 = puVar2;
  FUN_000908bc();
  FUN_00093a08();
  *puStack_c = 0;
  FUN_00093a08();
  *puStack_c = 1;
  FUN_00093a08();
  *puStack_c = 2;
  if (*(int *)PTR_DAT_00638f1c != 0) {
    FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_00638f34;
  }
  *(undefined **)PTR_DAT_00638f34 = puVar1;
  FUN_000986b8();
  uVar4 = 5;
  *(undefined4 *)PTR_DAT_00638f3c = 8;
  *(undefined4 *)PTR_DAT_00638f40 = 8;
  if (*(int *)PTR_DAT_00638f1c != 0) {
    uVar4 = FUN_0009db64();
    *unaff_r8 = uVar4;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_00638f44;
  }
  *(undefined4 *)PTR_DAT_00638f44 = uVar4;
  FUN_000986b8();
  uVar4 = 5;
  *(undefined4 *)PTR_DAT_00638f4c = 0x29;
  *(undefined4 *)PTR_DAT_00638f50 = 0x29;
  if (*(int *)PTR_DAT_00638f1c != 0) {
    uVar4 = FUN_0009db64();
    *unaff_r8 = uVar4;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_00638f54;
  }
  *(undefined4 *)PTR_DAT_00638f54 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00638f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/filament/ace_v2.(*CommandType).Descriptor @ 00638f58 (size 152) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___CommandType__Descriptor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  undefined1 uVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0xc);
      }
      uVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar3) {
        uVar3 = *_UNK_00638ff4 == 0;
        if (!(bool)uVar3) {
          *(undefined4 *)((int)register0x00000054 + -0xc) = *_UNK_00638ff8;
          google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
          *(undefined4 *)((int)register0x00000054 + 8) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00638fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x10))();
          return;
        }
        FUN_0009dbd4(0,0);
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if ((bool)uVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x638fd0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*CommandType).Enum @ 00638ffc (size 128) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___CommandType__Enum(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x10);
      }
      bVar4 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar4) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x10) = _UNK_00639080;
        FUN_00022cf8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0xc);
        *puVar1 = *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 **)((int)register0x00000054 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00639048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x14))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x63905c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*CommandType).EnumDescriptor @ 00639084 (size 152) */

void k3c_internal_pkg_filament_ace_v2___CommandType__EnumDescriptor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x1c);
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             **(undefined4 **)((int)register0x00000054 + 4);
        k3c_internal_pkg_filament_ace_v2_CommandType_EnumDescriptor();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x006390e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6390fc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*CommandType).Number @ 0063911c (size 100) */

void k3c_internal_pkg_filament_ace_v2___CommandType__Number(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)register0x00000054;
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + 8) =
             **(undefined4 **)((int)register0x00000054 + 4);
                    /* WARNING: Could not recover jumptable at 0x0063914c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -4))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x639160;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*CommandType).String @ 00639180 (size 120) */

void k3c_internal_pkg_filament_ace_v2___CommandType__String(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0xc);
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             **(undefined4 **)((int)register0x00000054 + 4);
        k3c_internal_pkg_filament_ace_v2_CommandType_String();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x006391c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6391d8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*CommandType).Type @ 006391f8 (size 140) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___CommandType__Type(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -8);
      }
      uVar4 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar4) {
        uVar4 = *_UNK_00639288 == 0;
        if (!(bool)uVar4) {
          uVar1 = *_UNK_0063928c;
          *(undefined4 *)((int)register0x00000054 + 8) = _UNK_00639290;
          *(undefined4 *)((int)register0x00000054 + 0xc) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00639244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
        FUN_0009dbd4(0,0);
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x639264;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*RespCode).Descriptor @ 00639294 (size 152) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___RespCode__Descriptor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  undefined1 uVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0xc);
      }
      uVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar3) {
        uVar3 = *_UNK_00639330 == 1;
        if (1 < *_UNK_00639330) {
          *(int *)((int)register0x00000054 + -0xc) = *_UNK_00639334 + 0x10;
          google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
          *(undefined4 *)((int)register0x00000054 + 8) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x006392f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x10))();
          return;
        }
        FUN_0009dbd4(1);
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if ((bool)uVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x63930c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*RespCode).Enum @ 00639338 (size 128) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___RespCode__Enum(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x10);
      }
      bVar4 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar4) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x10) = _UNK_006393bc;
        FUN_00022cf8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0xc);
        *puVar1 = *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 **)((int)register0x00000054 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00639384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x14))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x639398;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*RespCode).EnumDescriptor @ 006393c0 (size 152) */

void k3c_internal_pkg_filament_ace_v2___RespCode__EnumDescriptor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x1c);
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             **(undefined4 **)((int)register0x00000054 + 4);
        k3c_internal_pkg_filament_ace_v2_RespCode_EnumDescriptor();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00639424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x639438;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*RespCode).Number @ 00639458 (size 100) */

void k3c_internal_pkg_filament_ace_v2___RespCode__Number(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)register0x00000054;
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + 8) =
             **(undefined4 **)((int)register0x00000054 + 4);
                    /* WARNING: Could not recover jumptable at 0x00639488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -4))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x63949c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*RespCode).String @ 006394bc (size 120) */

void k3c_internal_pkg_filament_ace_v2___RespCode__String(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0xc);
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             **(undefined4 **)((int)register0x00000054 + 4);
        k3c_internal_pkg_filament_ace_v2_RespCode_String();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00639500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x639514;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*RespCode).Type @ 00639534 (size 140) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___RespCode__Type(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -8);
      }
      uVar4 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar4) {
        uVar4 = *_UNK_006395c4 == 1;
        if (1 < *_UNK_006395c4) {
          iVar1 = *_UNK_006395c8;
          *(undefined4 *)((int)register0x00000054 + 8) = _UNK_006395cc;
          *(int *)((int)register0x00000054 + 0xc) = iVar1 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00639584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
        FUN_0009dbd4(1);
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x6395a0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*WorkState).Descriptor @ 006395d0 (size 152) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___WorkState__Descriptor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  undefined1 uVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0xc);
      }
      uVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar3) {
        uVar3 = *_UNK_0063966c == 2;
        if (2 < *_UNK_0063966c) {
          *(int *)((int)register0x00000054 + -0xc) = *_UNK_00639670 + 0x20;
          google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
          *(undefined4 *)((int)register0x00000054 + 8) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0063962c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x10))();
          return;
        }
        FUN_0009dbd4(2);
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if ((bool)uVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x639648;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*WorkState).Enum @ 00639674 (size 128) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___WorkState__Enum(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x10);
      }
      bVar4 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar4) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x10) = _UNK_006396f8;
        FUN_00022cf8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0xc);
        *puVar1 = *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 **)((int)register0x00000054 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x006396c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x14))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x6396d4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*WorkState).EnumDescriptor @ 006396fc (size 152) */

void k3c_internal_pkg_filament_ace_v2___WorkState__EnumDescriptor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x1c);
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             **(undefined4 **)((int)register0x00000054 + 4);
        k3c_internal_pkg_filament_ace_v2_WorkState_EnumDescriptor();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00639760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x639774;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*WorkState).Number @ 00639794 (size 100) */

void k3c_internal_pkg_filament_ace_v2___WorkState__Number(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)register0x00000054;
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + 8) =
             **(undefined4 **)((int)register0x00000054 + 4);
                    /* WARNING: Could not recover jumptable at 0x006397c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -4))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x6397d8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*WorkState).String @ 006397f8 (size 120) */

void k3c_internal_pkg_filament_ace_v2___WorkState__String(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0xc);
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             **(undefined4 **)((int)register0x00000054 + 4);
        k3c_internal_pkg_filament_ace_v2_WorkState_String();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0063983c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x639850;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*WorkState).Type @ 00639870 (size 140) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___WorkState__Type(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -8);
      }
      uVar4 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar4) {
        uVar4 = *_UNK_00639900 == 2;
        if (2 < *_UNK_00639900) {
          iVar1 = *_UNK_00639904;
          *(undefined4 *)((int)register0x00000054 + 8) = _UNK_00639908;
          *(int *)((int)register0x00000054 + 0xc) = iVar1 + 0x20;
                    /* WARNING: Could not recover jumptable at 0x006398c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
        FUN_0009dbd4(2);
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x6398dc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SlotState).Descriptor @ 0063990c (size 152) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___SlotState__Descriptor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  undefined1 uVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0xc);
      }
      uVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar3) {
        uVar3 = *_UNK_006399a8 == 3;
        if (3 < *_UNK_006399a8) {
          *(int *)((int)register0x00000054 + -0xc) = *_UNK_006399ac + 0x30;
          google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
          *(undefined4 *)((int)register0x00000054 + 8) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00639968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x10))();
          return;
        }
        FUN_0009dbd4(3);
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if ((bool)uVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x639984;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SlotState).Enum @ 006399b0 (size 128) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___SlotState__Enum(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x10);
      }
      bVar4 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar4) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x10) = _UNK_00639a34;
        FUN_00022cf8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0xc);
        *puVar1 = *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 **)((int)register0x00000054 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x006399fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x14))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x639a10;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SlotState).EnumDescriptor @ 00639a38 (size 152) */

void k3c_internal_pkg_filament_ace_v2___SlotState__EnumDescriptor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x1c);
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             **(undefined4 **)((int)register0x00000054 + 4);
        k3c_internal_pkg_filament_ace_v2_SlotState_EnumDescriptor();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00639a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x639ab0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SlotState).Number @ 00639ad0 (size 100) */

void k3c_internal_pkg_filament_ace_v2___SlotState__Number(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)register0x00000054;
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + 8) =
             **(undefined4 **)((int)register0x00000054 + 4);
                    /* WARNING: Could not recover jumptable at 0x00639b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -4))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x639b14;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SlotState).String @ 00639b34 (size 120) */

void k3c_internal_pkg_filament_ace_v2___SlotState__String(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0xc);
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             **(undefined4 **)((int)register0x00000054 + 4);
        k3c_internal_pkg_filament_ace_v2_SlotState_String();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00639b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x639b8c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*SlotState).Type @ 00639bac (size 140) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___SlotState__Type(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -8);
      }
      uVar4 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar4) {
        uVar4 = *_UNK_00639c3c == 3;
        if (3 < *_UNK_00639c3c) {
          iVar1 = *_UNK_00639c40;
          *(undefined4 *)((int)register0x00000054 + 8) = _UNK_00639c44;
          *(int *)((int)register0x00000054 + 0xc) = iVar1 + 0x30;
                    /* WARNING: Could not recover jumptable at 0x00639bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
        FUN_0009dbd4(3);
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x639c18;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentState).Descriptor @ 00639c48 (size 152) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___FilamentState__Descriptor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  undefined1 uVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0xc);
      }
      uVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar3) {
        uVar3 = *_UNK_00639ce4 == 4;
        if (4 < *_UNK_00639ce4) {
          *(int *)((int)register0x00000054 + -0xc) = *_UNK_00639ce8 + 0x40;
          google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
          *(undefined4 *)((int)register0x00000054 + 8) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00639ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x10))();
          return;
        }
        FUN_0009dbd4(4);
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if ((bool)uVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x639cc0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentState).Enum @ 00639cec (size 128) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___FilamentState__Enum(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x10);
      }
      bVar4 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar4) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x10) = _UNK_00639d70;
        FUN_00022cf8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0xc);
        *puVar1 = *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 **)((int)register0x00000054 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00639d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x14))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x639d4c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentState).EnumDescriptor @ 00639d74 (size 152) */

void k3c_internal_pkg_filament_ace_v2___FilamentState__EnumDescriptor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x1c);
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             **(undefined4 **)((int)register0x00000054 + 4);
        k3c_internal_pkg_filament_ace_v2_FilamentState_EnumDescriptor();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00639dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x639dec;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentState).Number @ 00639e0c (size 100) */

void k3c_internal_pkg_filament_ace_v2___FilamentState__Number(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)register0x00000054;
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + 8) =
             **(undefined4 **)((int)register0x00000054 + 4);
                    /* WARNING: Could not recover jumptable at 0x00639e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -4))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x639e50;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentState).String @ 00639e70 (size 120) */

void k3c_internal_pkg_filament_ace_v2___FilamentState__String(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0xc);
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             **(undefined4 **)((int)register0x00000054 + 4);
        k3c_internal_pkg_filament_ace_v2_FilamentState_String();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00639eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x639ec8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*FilamentState).Type @ 00639ee8 (size 140) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___FilamentState__Type(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -8);
      }
      uVar4 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar4) {
        uVar4 = *_UNK_00639f78 == 4;
        if (4 < *_UNK_00639f78) {
          iVar1 = *_UNK_00639f7c;
          *(undefined4 *)((int)register0x00000054 + 8) = _UNK_00639f80;
          *(int *)((int)register0x00000054 + 0xc) = iVar1 + 0x40;
                    /* WARNING: Could not recover jumptable at 0x00639f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
        FUN_0009dbd4(4);
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x639f54;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DryState).Descriptor @ 00639f84 (size 152) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___DryState__Descriptor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  undefined1 uVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0xc);
      }
      uVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar3) {
        uVar3 = *_UNK_0063a020 == 5;
        if (5 < *_UNK_0063a020) {
          *(int *)((int)register0x00000054 + -0xc) = *_UNK_0063a024 + 0x50;
          google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
          *(undefined4 *)((int)register0x00000054 + 8) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00639fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x10))();
          return;
        }
        FUN_0009dbd4(5);
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if ((bool)uVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x639ffc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DryState).Enum @ 0063a028 (size 128) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___DryState__Enum(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x10);
      }
      bVar4 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar4) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x10) = _UNK_0063a0ac;
        FUN_00022cf8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0xc);
        *puVar1 = *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 **)((int)register0x00000054 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0063a074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x14))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x63a088;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DryState).EnumDescriptor @ 0063a0b0 (size 152) */

void k3c_internal_pkg_filament_ace_v2___DryState__EnumDescriptor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x1c);
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             **(undefined4 **)((int)register0x00000054 + 4);
        k3c_internal_pkg_filament_ace_v2_DryState_EnumDescriptor();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0063a114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x63a128;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DryState).Number @ 0063a148 (size 100) */

void k3c_internal_pkg_filament_ace_v2___DryState__Number(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)register0x00000054;
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + 8) =
             **(undefined4 **)((int)register0x00000054 + 4);
                    /* WARNING: Could not recover jumptable at 0x0063a178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -4))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x63a18c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DryState).String @ 0063a1ac (size 120) */

void k3c_internal_pkg_filament_ace_v2___DryState__String(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0xc);
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             **(undefined4 **)((int)register0x00000054 + 4);
        k3c_internal_pkg_filament_ace_v2_DryState_String();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0063a1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x63a204;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*DryState).Type @ 0063a224 (size 140) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___DryState__Type(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -8);
      }
      uVar4 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar4) {
        uVar4 = *_UNK_0063a2b4 == 5;
        if (5 < *_UNK_0063a2b4) {
          iVar1 = *_UNK_0063a2b8;
          *(undefined4 *)((int)register0x00000054 + 8) = _UNK_0063a2bc;
          *(int *)((int)register0x00000054 + 0xc) = iVar1 + 0x50;
                    /* WARNING: Could not recover jumptable at 0x0063a274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
        FUN_0009dbd4(5);
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x63a290;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*KeyIndex).Descriptor @ 0063a2c0 (size 152) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___KeyIndex__Descriptor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  undefined1 uVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0xc);
      }
      uVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar3) {
        uVar3 = *_UNK_0063a35c == 6;
        if (6 < *_UNK_0063a35c) {
          *(int *)((int)register0x00000054 + -0xc) = *_UNK_0063a360 + 0x60;
          google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
          *(undefined4 *)((int)register0x00000054 + 8) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0063a31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x10))();
          return;
        }
        FUN_0009dbd4(6);
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if ((bool)uVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x63a338;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*KeyIndex).Enum @ 0063a364 (size 128) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___KeyIndex__Enum(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x10);
      }
      bVar4 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar4) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x10) = _UNK_0063a3e8;
        FUN_00022cf8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0xc);
        *puVar1 = *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 **)((int)register0x00000054 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0063a3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x14))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x63a3c4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*KeyIndex).EnumDescriptor @ 0063a3ec (size 152) */

void k3c_internal_pkg_filament_ace_v2___KeyIndex__EnumDescriptor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x1c);
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             **(undefined4 **)((int)register0x00000054 + 4);
        k3c_internal_pkg_filament_ace_v2_KeyIndex_EnumDescriptor();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0063a450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x63a464;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*KeyIndex).Number @ 0063a484 (size 100) */

void k3c_internal_pkg_filament_ace_v2___KeyIndex__Number(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)register0x00000054;
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + 8) =
             **(undefined4 **)((int)register0x00000054 + 4);
                    /* WARNING: Could not recover jumptable at 0x0063a4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -4))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x63a4c8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*KeyIndex).String @ 0063a4e8 (size 120) */

void k3c_internal_pkg_filament_ace_v2___KeyIndex__String(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0xc);
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             **(undefined4 **)((int)register0x00000054 + 4);
        k3c_internal_pkg_filament_ace_v2_KeyIndex_String();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0063a52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x63a540;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*KeyIndex).Type @ 0063a560 (size 140) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___KeyIndex__Type(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -8);
      }
      uVar4 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar4) {
        uVar4 = *_UNK_0063a5f0 == 6;
        if (6 < *_UNK_0063a5f0) {
          iVar1 = *_UNK_0063a5f4;
          *(undefined4 *)((int)register0x00000054 + 8) = _UNK_0063a5f8;
          *(int *)((int)register0x00000054 + 0xc) = iVar1 + 0x60;
                    /* WARNING: Could not recover jumptable at 0x0063a5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
        FUN_0009dbd4(6);
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x63a5cc;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*TestType).Descriptor @ 0063a5fc (size 152) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___TestType__Descriptor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  undefined1 uVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0xc);
      }
      uVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar3) {
        uVar3 = *_UNK_0063a698 == 7;
        if (7 < *_UNK_0063a698) {
          *(int *)((int)register0x00000054 + -0xc) = *_UNK_0063a69c + 0x70;
          google_golang_org_protobuf_internal_impl___EnumInfo__Descriptor();
          *(undefined4 *)((int)register0x00000054 + 8) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0063a658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x10))();
          return;
        }
        FUN_0009dbd4(7);
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if ((bool)uVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x63a674;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*TestType).Enum @ 0063a6a0 (size 128) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___TestType__Enum(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x10);
      }
      bVar4 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar4) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             **(undefined4 **)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x10) = _UNK_0063a724;
        FUN_00022cf8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0xc);
        *puVar1 = *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 **)((int)register0x00000054 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0063a6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x14))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x63a700;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*TestType).EnumDescriptor @ 0063a728 (size 152) */

void k3c_internal_pkg_filament_ace_v2___TestType__EnumDescriptor(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x1c);
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             **(undefined4 **)((int)register0x00000054 + 4);
        k3c_internal_pkg_filament_ace_v2_TestType_EnumDescriptor();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xc);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0063a78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x63a7a0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*TestType).Number @ 0063a7c0 (size 100) */

void k3c_internal_pkg_filament_ace_v2___TestType__Number(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)register0x00000054;
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + 8) =
             **(undefined4 **)((int)register0x00000054 + 4);
                    /* WARNING: Could not recover jumptable at 0x0063a7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -4))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x63a804;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*TestType).String @ 0063a824 (size 120) */

void k3c_internal_pkg_filament_ace_v2___TestType__String(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0xc);
      }
      bVar3 = *(undefined4 **)((int)register0x00000054 + 4) == (undefined4 *)0x0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             **(undefined4 **)((int)register0x00000054 + 4);
        k3c_internal_pkg_filament_ace_v2_TestType_String();
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -8)
        ;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0063a868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x63a87c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/filament/ace_v2.(*TestType).Type @ 0063a89c (size 140) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_filament_ace_v2___TestType__Type(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -8);
      }
      uVar4 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar4) {
        uVar4 = *_UNK_0063a92c == 7;
        if (7 < *_UNK_0063a92c) {
          iVar1 = *_UNK_0063a930;
          *(undefined4 *)((int)register0x00000054 + 8) = _UNK_0063a934;
          *(int *)((int)register0x00000054 + 0xc) = iVar1 + 0x70;
                    /* WARNING: Could not recover jumptable at 0x0063a8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
        FUN_0009dbd4(7);
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x63a908;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



