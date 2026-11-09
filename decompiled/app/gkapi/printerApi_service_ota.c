// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/ota   functions: 5
/* printerApi/service/ota.Upgrade @ 00484ca4 (size 3660) */

void printerApi_service_ota_Upgrade(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  undefined8 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x13c)) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x1bc);
      *(undefined4 *)((int)register0x00000054 + -0x1bc) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
      *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
      FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x20));
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x14) = 10;
      *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_004854a4;
      *(undefined1 **)((int)register0x00000054 + -0x1b8) =
           (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x1b4) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x1b0) = 2;
      FUN_00159184();
      *(undefined4 *)((int)register0x00000054 + -0x1b8) =
           *(undefined4 *)((int)register0x00000054 + -0x1ac);
      *(undefined4 *)((int)register0x00000054 + -0x1b4) =
           *(undefined4 *)((int)register0x00000054 + -0x1a8);
      printerApi_common_file_FileExist();
      if (*(char *)((int)register0x00000054 + -0x1b0) != '\0') {
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x30));
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x24) = 10;
        *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_004854a4;
        *(undefined1 **)((int)register0x00000054 + -0x1b8) =
             (undefined1 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x1b0) = 2;
        FUN_00159184();
        *(undefined4 *)((int)register0x00000054 + -0x1b8) =
             *(undefined4 *)((int)register0x00000054 + -0x1ac);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + -0x1a8);
        printerApi_common_file_RemoveForce();
      }
      *(undefined4 *)((int)register0x00000054 + -0x1b8) = DAT_004854a8;
      *(undefined4 *)((int)register0x00000054 + -0x1b4) = DAT_004854ac;
      *(undefined4 *)((int)register0x00000054 + -0x1b0) = DAT_004854b0;
      *(undefined4 *)((int)register0x00000054 + -0x1ac) = 0x117;
      FUN_00155144();
      *(undefined4 *)((int)register0x00000054 + -0x154) =
           *(undefined4 *)((int)register0x00000054 + -0x1a8);
      *(undefined4 *)((int)register0x00000054 + -0xd4) =
           *(undefined4 *)((int)register0x00000054 + -0x1a4);
      *(undefined4 *)((int)register0x00000054 + -0xfc) =
           *(undefined4 *)((int)register0x00000054 + -0x1a0);
      *(undefined1 **)((int)register0x00000054 + -0x1b8) =
           (undefined1 *)((int)register0x00000054 + -0x108);
      iVar2 = FUN_0004f500();
      if (iVar2 != 0) {
        FUN_0004fb3c();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x1b8) =
           *(undefined4 *)((int)register0x00000054 + -0x154);
      *(undefined4 *)((int)register0x00000054 + -0x1b4) =
           *(undefined4 *)((int)register0x00000054 + -0xd4);
      *(undefined4 *)((int)register0x00000054 + -0x1b0) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x1ac) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x1a8) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x1a4) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x1a0) =
           *(undefined4 *)((int)register0x00000054 + 0x14);
      *(undefined4 *)((int)register0x00000054 + -0x19c) =
           *(undefined4 *)((int)register0x00000054 + 0x18);
      printerApi_common_file_Unzip();
      if (*(int *)((int)register0x00000054 + -0x198) != 0) {
        *(undefined4 *)((int)register0x00000054 + -0xd8) =
             *(undefined4 *)((int)register0x00000054 + -0x194);
        *(int *)((int)register0x00000054 + -0x158) = *(int *)((int)register0x00000054 + -0x198);
        *(undefined4 *)((int)register0x00000054 + -0x1b8) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + 8);
        FUN_00127c60();
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0xd0));
        *(undefined4 *)((int)register0x00000054 + -0x1b8) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + 8);
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -0xd0) = PTR_SUB_004854b4;
        *(undefined4 *)((int)register0x00000054 + -0xcc) =
             *(undefined4 *)((int)register0x00000054 + -0x1b0);
        uVar3 = 0;
        if (*(int *)((int)register0x00000054 + -0x158) != 0) {
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x158) + 4);
        }
        *(undefined4 *)((int)register0x00000054 + -200) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0xc4) =
             *(undefined4 *)((int)register0x00000054 + -0xd8);
        *(undefined **)((int)register0x00000054 + -0x1b8) = PTR_DAT_004854b8;
        *(undefined4 *)((int)register0x00000054 + -0x1b4) = 0x1b;
        *(undefined1 **)((int)register0x00000054 + -0x1b0) =
             (undefined1 *)((int)register0x00000054 + -0xd0);
        *(undefined4 *)((int)register0x00000054 + -0x1ac) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x1a8) = 2;
        FUN_00130144();
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x1a4);
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x1a0);
        FUN_0004fb3c();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x1b8) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x1b4) =
           *(undefined4 *)((int)register0x00000054 + 8);
      FUN_00127c60();
      FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x40));
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x34) = 10;
      *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_004854a4;
      *(undefined1 **)((int)register0x00000054 + -0x1b8) =
           (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x1b4) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x1b0) = 2;
      FUN_00159184();
      *(undefined4 *)((int)register0x00000054 + -0xe8) =
           *(undefined4 *)((int)register0x00000054 + -0x1ac);
      *(undefined4 *)((int)register0x00000054 + -0x168) =
           *(undefined4 *)((int)register0x00000054 + -0x1a8);
      *(undefined **)((int)register0x00000054 + -0x4c) =
           PTR_printerApi_service_ota_Upgrade_deferwrap1_004854bc;
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + -0x1a8);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x1ac);
      *(undefined1 **)((int)register0x00000054 + -0x114) =
           (undefined1 *)((int)register0x00000054 + -0x4c);
      *(undefined1 **)((int)register0x00000054 + -0x1b8) =
           (undefined1 *)((int)register0x00000054 + -0x120);
      iVar2 = FUN_0004f500();
      if (iVar2 != 0) {
        FUN_0004fb3c();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x1b8) = DAT_004854a8;
      *(undefined4 *)((int)register0x00000054 + -0x1b4) = DAT_004854ac;
      *(undefined4 *)((int)register0x00000054 + -0x1b0) = DAT_004854b0;
      *(undefined4 *)((int)register0x00000054 + -0x1ac) = 0x117;
      FUN_00155144();
      *(undefined4 *)((int)register0x00000054 + -0x154) =
           *(undefined4 *)((int)register0x00000054 + -0x1a8);
      *(undefined4 *)((int)register0x00000054 + -0xd4) =
           *(undefined4 *)((int)register0x00000054 + -0x1a4);
      *(undefined4 *)((int)register0x00000054 + -300) =
           *(undefined4 *)((int)register0x00000054 + -0x1a0);
      *(undefined1 **)((int)register0x00000054 + -0x1b8) =
           (undefined1 *)((int)register0x00000054 + -0x138);
      iVar2 = FUN_0004f500();
      if (iVar2 != 0) {
        FUN_0004fb3c();
        return;
      }
      FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x5c));
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + -0x168);
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0xe8);
      *(undefined4 *)((int)register0x00000054 + -0x50) = 9;
      *(undefined **)((int)register0x00000054 + -0x54) =
           PTR_s_setup_tarmotor_mcuupdate_sheleme_0077568d_0xd14_004854c0;
      *(undefined1 **)((int)register0x00000054 + -0x1b8) =
           (undefined1 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0x1b4) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x1b0) = 2;
      FUN_00159184();
      *(undefined4 *)((int)register0x00000054 + -0xec) =
           *(undefined4 *)((int)register0x00000054 + -0x1ac);
      *(undefined4 *)((int)register0x00000054 + -0x16c) =
           *(undefined4 *)((int)register0x00000054 + -0x1a8);
      *(undefined4 *)((int)register0x00000054 + -0x1b8) =
           *(undefined4 *)((int)register0x00000054 + -0x1ac);
      *(undefined4 *)((int)register0x00000054 + -0x1b4) =
           *(undefined4 *)((int)register0x00000054 + -0x1a8);
      printerApi_common_file_FileExist();
      if (*(char *)((int)register0x00000054 + -0x1b0) == '\0') {
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x6c));
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x168);
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -0xe8);
        *(undefined4 *)((int)register0x00000054 + -0x60) = 0xc;
        *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_004854c4;
        *(undefined1 **)((int)register0x00000054 + -0x1b8) =
             (undefined1 *)((int)register0x00000054 + -0x6c);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x1b0) = 2;
        FUN_00159184();
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0x1ac);
        uVar7 = *(undefined4 *)((int)register0x00000054 + -0x1a8);
      }
      else {
        uVar7 = *(undefined4 *)((int)register0x00000054 + -0x16c);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -0xec);
      }
      *(undefined4 *)((int)register0x00000054 + -0xe4) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x164) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0x1b8) =
           *(undefined4 *)((int)register0x00000054 + -0x154);
      *(undefined4 *)((int)register0x00000054 + -0x1b4) =
           *(undefined4 *)((int)register0x00000054 + -0xd4);
      *(undefined4 *)((int)register0x00000054 + -0x1b0) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x1ac) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0x1a8) =
           *(undefined4 *)((int)register0x00000054 + -0xe8);
      *(undefined4 *)((int)register0x00000054 + -0x1a4) =
           *(undefined4 *)((int)register0x00000054 + -0x168);
      printerApi_common_file_TarExtract();
      if (*(int *)((int)register0x00000054 + -0x1a0) != 0) {
        *(undefined4 *)((int)register0x00000054 + -0xd8) =
             *(undefined4 *)((int)register0x00000054 + -0x19c);
        *(int *)((int)register0x00000054 + -0x158) = *(int *)((int)register0x00000054 + -0x1a0);
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0xd0));
        *(undefined4 *)((int)register0x00000054 + -0x1b8) =
             *(undefined4 *)((int)register0x00000054 + -0xe4);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + -0x164);
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -0xd0) = PTR_SUB_00485b54;
        *(undefined4 *)((int)register0x00000054 + -0xcc) =
             *(undefined4 *)((int)register0x00000054 + -0x1b0);
        if (*(int *)((int)register0x00000054 + -0x158) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x158) + 4);
        }
        *(undefined4 *)((int)register0x00000054 + -200) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0xc4) =
             *(undefined4 *)((int)register0x00000054 + -0xd8);
        *(undefined **)((int)register0x00000054 + -0x1b8) = PTR_DAT_00485b98;
        *(undefined4 *)((int)register0x00000054 + -0x1b4) = 0x18;
        *(undefined1 **)((int)register0x00000054 + -0x1b0) =
             (undefined1 *)((int)register0x00000054 + -0xd0);
        *(undefined4 *)((int)register0x00000054 + -0x1ac) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x1a8) = 2;
        FUN_00130144();
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x1a4);
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x1a0);
        FUN_0004fb3c();
        return;
      }
      if (*(int *)((int)register0x00000054 + 0x1c) != -1) {
        *(undefined4 *)((int)register0x00000054 + -0x1b8) =
             *(undefined4 *)((int)register0x00000054 + -0xe8);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + -0x168);
        printerApi_service_ota_findFilamentHubFirmware();
        if (*(int *)((int)register0x00000054 + -0x1ac) == 0) {
          *(undefined **)((int)register0x00000054 + -0x1b8) = PTR_DAT_004854c8;
          FUN_0001eed8();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0x1b4);
          puVar4[1] = 0x1f;
          *puVar4 = PTR_DAT_004854cc;
          *(undefined **)((int)register0x00000054 + 0x20) = PTR_DAT_004854d0;
          *(undefined4 **)((int)register0x00000054 + 0x24) = puVar4;
          FUN_0004fb3c();
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0x1b8) =
             *(undefined4 *)((int)register0x00000054 + 0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + -0x1b0);
        *(int *)((int)register0x00000054 + -0x1b0) = *(int *)((int)register0x00000054 + -0x1ac);
        printerApi_service_ota_filamentHubFirmwareUpgrade();
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x1ac);
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x1a8);
        FUN_0004fb3c();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x1b8) = *(undefined4 *)PTR_DAT_004854d4;
      FUN_0009bf4c();
      uVar10 = CONCAT44(PTR_DAT_004854d8,*(undefined **)((int)register0x00000054 + -0x1b4));
      uVar9 = 0;
      if (*(undefined **)((int)register0x00000054 + -0x1b4) == PTR_DAT_004854d8) {
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0x1b0);
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x80));
        *(undefined4 *)((int)register0x00000054 + -0x7c) =
             *(undefined4 *)((int)register0x00000054 + -0x168);
        *(undefined4 *)((int)register0x00000054 + -0x80) =
             *(undefined4 *)((int)register0x00000054 + -0xe8);
        *(undefined4 *)((int)register0x00000054 + -0x74) = 0xf;
        *(undefined **)((int)register0x00000054 + -0x78) = PTR_DAT_004854dc;
        *(undefined1 **)((int)register0x00000054 + -0x1b8) =
             (undefined1 *)((int)register0x00000054 + -0x80);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x1b0) = 2;
        FUN_00159184();
        *(undefined4 *)((int)register0x00000054 + -0x1b8) =
             *(undefined4 *)((int)register0x00000054 + -0x1ac);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + -0x1a8);
        *(undefined4 *)((int)register0x00000054 + -0x1b0) = 0;
        FUN_001575d0();
        if (*(int *)((int)register0x00000054 + -0x1a8) == 1) {
          uVar7 = **(undefined4 **)((int)register0x00000054 + -0x1ac);
          uVar3 = (*(undefined4 **)((int)register0x00000054 + -0x1ac))[1];
          *(undefined1 **)((int)register0x00000054 + -0x1b8) =
               (undefined1 *)((int)register0x00000054 + -0x70);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = uVar3;
          printerApi_service_ota_firmwareUpgrade();
          if (*(int *)((int)register0x00000054 + -0x1ac) != 0) {
            *(int *)((int)register0x00000054 + 0x20) = *(int *)((int)register0x00000054 + -0x1ac);
            *(undefined4 *)((int)register0x00000054 + 0x24) =
                 *(undefined4 *)((int)register0x00000054 + -0x1a8);
            FUN_0004fb3c();
            return;
          }
        }
        else {
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x90));
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + -0x168);
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)((int)register0x00000054 + -0xe8);
          *(undefined4 *)((int)register0x00000054 + -0x84) = 0x11;
          *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_004854e0;
          *(undefined1 **)((int)register0x00000054 + -0x1b8) =
               (undefined1 *)((int)register0x00000054 + -0x90);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = 2;
          FUN_00159184();
          *(undefined4 *)((int)register0x00000054 + -0x1b8) =
               *(undefined4 *)((int)register0x00000054 + -0x1ac);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) =
               *(undefined4 *)((int)register0x00000054 + -0x1a8);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = 0;
          FUN_001575d0();
          if (*(int *)((int)register0x00000054 + -0x1a8) == 1) {
            *(undefined4 *)((int)register0x00000054 + -0xdc) =
                 *(undefined4 *)((int)register0x00000054 + -0x1ac);
            *(undefined **)((int)register0x00000054 + -8) = PTR_SUB_004854b4;
            *(undefined **)((int)register0x00000054 + -4) = PTR_DAT_004854e4;
            *(undefined1 **)((int)register0x00000054 + -0x1b8) =
                 (undefined1 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x1b4) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x1b0) = 1;
            printerApi_common_logger_Debug();
            uVar7 = **(undefined4 **)((int)register0x00000054 + -0xdc);
            uVar3 = (*(undefined4 **)((int)register0x00000054 + -0xdc))[1];
            *(undefined1 **)((int)register0x00000054 + -0x1b8) =
                 (undefined1 *)((int)register0x00000054 + -0x70);
            *(undefined **)((int)register0x00000054 + -0x1b4) = PTR_DAT_004854e8;
            *(undefined4 *)((int)register0x00000054 + -0x1b0) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x1ac) = uVar7;
            *(undefined4 *)((int)register0x00000054 + -0x1a8) = uVar3;
            printerApi_service_k3c_wrapper___K3cwrapper__FirmwareOtaStart();
            if (*(int *)((int)register0x00000054 + -0x1a4) != 0) {
              *(undefined4 *)((int)register0x00000054 + -8) = 0;
              *(undefined4 *)((int)register0x00000054 + -4) = 0;
              *(undefined4 *)((int)register0x00000054 + -8) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1a4) + 4);
              *(undefined4 *)((int)register0x00000054 + -4) =
                   *(undefined4 *)((int)register0x00000054 + -0x1a0);
              *(undefined **)((int)register0x00000054 + -0x1b8) = PTR_DAT_004854ec;
              *(undefined4 *)((int)register0x00000054 + -0x1b4) = 0x1e;
              *(undefined1 **)((int)register0x00000054 + -0x1b0) =
                   (undefined1 *)((int)register0x00000054 + -8);
              *(undefined4 *)((int)register0x00000054 + -0x1ac) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x1a8) = 1;
              FUN_00130144();
              *(undefined4 *)((int)register0x00000054 + 0x20) =
                   *(undefined4 *)((int)register0x00000054 + -0x1a4);
              *(undefined4 *)((int)register0x00000054 + 0x24) =
                   *(undefined4 *)((int)register0x00000054 + -0x1a0);
              FUN_0004fb3c();
              return;
            }
          }
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0xa0));
          *(undefined4 *)((int)register0x00000054 + -0x9c) =
               *(undefined4 *)((int)register0x00000054 + -0x168);
          *(undefined4 *)((int)register0x00000054 + -0xa0) =
               *(undefined4 *)((int)register0x00000054 + -0xe8);
          *(undefined4 *)((int)register0x00000054 + -0x94) = 0x14;
          *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_004854f0;
          *(undefined1 **)((int)register0x00000054 + -0x1b8) =
               (undefined1 *)((int)register0x00000054 + -0xa0);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = 2;
          FUN_00159184();
          *(undefined4 *)((int)register0x00000054 + -0x1b8) =
               *(undefined4 *)((int)register0x00000054 + -0x1ac);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) =
               *(undefined4 *)((int)register0x00000054 + -0x1a8);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = 0;
          FUN_001575d0();
          if (*(int *)((int)register0x00000054 + -0x1a8) == 1) {
            *(undefined4 *)((int)register0x00000054 + -0xdc) =
                 *(undefined4 *)((int)register0x00000054 + -0x1ac);
            *(undefined **)((int)register0x00000054 + -8) = PTR_SUB_004854b4;
            *(undefined **)((int)register0x00000054 + -4) = PTR_DAT_004854f4;
            *(undefined1 **)((int)register0x00000054 + -0x1b8) =
                 (undefined1 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x1b4) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x1b0) = 1;
            printerApi_common_logger_Debug();
            uVar7 = **(undefined4 **)((int)register0x00000054 + -0xdc);
            uVar3 = (*(undefined4 **)((int)register0x00000054 + -0xdc))[1];
            *(undefined1 **)((int)register0x00000054 + -0x1b8) =
                 (undefined1 *)((int)register0x00000054 + -0x70);
            *(undefined **)((int)register0x00000054 + -0x1b4) = PTR_DAT_004854f8;
            *(undefined4 *)((int)register0x00000054 + -0x1b0) = 10;
            *(undefined4 *)((int)register0x00000054 + -0x1ac) = uVar7;
            *(undefined4 *)((int)register0x00000054 + -0x1a8) = uVar3;
            printerApi_service_k3c_wrapper___K3cwrapper__FirmwareOtaStart();
            if (*(int *)((int)register0x00000054 + -0x1a4) != 0) {
              *(undefined4 *)((int)register0x00000054 + -8) = 0;
              *(undefined4 *)((int)register0x00000054 + -4) = 0;
              *(undefined4 *)((int)register0x00000054 + -8) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1a4) + 4);
              *(undefined4 *)((int)register0x00000054 + -4) =
                   *(undefined4 *)((int)register0x00000054 + -0x1a0);
              *(undefined **)((int)register0x00000054 + -0x1b8) = PTR_DAT_004854fc;
              *(undefined4 *)((int)register0x00000054 + -0x1b4) = 0x25;
              *(undefined1 **)((int)register0x00000054 + -0x1b0) =
                   (undefined1 *)((int)register0x00000054 + -8);
              *(undefined4 *)((int)register0x00000054 + -0x1ac) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x1a8) = 1;
              FUN_00130144();
              *(undefined4 *)((int)register0x00000054 + 0x20) =
                   *(undefined4 *)((int)register0x00000054 + -0x1a4);
              *(undefined4 *)((int)register0x00000054 + 0x24) =
                   *(undefined4 *)((int)register0x00000054 + -0x1a0);
              FUN_0004fb3c();
              return;
            }
          }
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0xb0));
          *(undefined4 *)((int)register0x00000054 + -0xac) =
               *(undefined4 *)((int)register0x00000054 + -0x168);
          *(undefined4 *)((int)register0x00000054 + -0xb0) =
               *(undefined4 *)((int)register0x00000054 + -0xe8);
          *(undefined4 *)((int)register0x00000054 + -0xa4) = 0x13;
          *(undefined **)((int)register0x00000054 + -0xa8) = PTR_DAT_00485b50;
          *(undefined1 **)((int)register0x00000054 + -0x1b8) =
               (undefined1 *)((int)register0x00000054 + -0xb0);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = 2;
          FUN_00159184();
          *(undefined4 *)((int)register0x00000054 + -0x1b8) =
               *(undefined4 *)((int)register0x00000054 + -0x1ac);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) =
               *(undefined4 *)((int)register0x00000054 + -0x1a8);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = 0;
          FUN_001575d0();
          if (*(int *)((int)register0x00000054 + -0x1a8) == 1) {
            *(undefined4 *)((int)register0x00000054 + -0xdc) =
                 *(undefined4 *)((int)register0x00000054 + -0x1ac);
            *(undefined **)((int)register0x00000054 + -8) = PTR_SUB_00485b54;
            *(undefined **)((int)register0x00000054 + -4) = PTR_DAT_00485b58;
            *(undefined1 **)((int)register0x00000054 + -0x1b8) =
                 (undefined1 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x1b4) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x1b0) = 1;
            printerApi_common_logger_Debug();
            uVar7 = **(undefined4 **)((int)register0x00000054 + -0xdc);
            uVar3 = (*(undefined4 **)((int)register0x00000054 + -0xdc))[1];
            *(undefined1 **)((int)register0x00000054 + -0x1b8) =
                 (undefined1 *)((int)register0x00000054 + -0x70);
            *(undefined **)((int)register0x00000054 + -0x1b4) =
                 PTR_s_motor_mcuupdate_shelement_<_<def_0077568d_0xd1d_00485b5c;
            *(undefined4 *)((int)register0x00000054 + -0x1b0) = 9;
            *(undefined4 *)((int)register0x00000054 + -0x1ac) = uVar7;
            *(undefined4 *)((int)register0x00000054 + -0x1a8) = uVar3;
            printerApi_service_k3c_wrapper___K3cwrapper__FirmwareOtaStart();
            if (*(int *)((int)register0x00000054 + -0x1a4) != 0) {
              *(undefined4 *)((int)register0x00000054 + -8) = 0;
              *(undefined4 *)((int)register0x00000054 + -4) = 0;
              *(undefined4 *)((int)register0x00000054 + -8) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1a4) + 4);
              *(undefined4 *)((int)register0x00000054 + -4) =
                   *(undefined4 *)((int)register0x00000054 + -0x1a0);
              *(undefined **)((int)register0x00000054 + -0x1b8) = PTR_DAT_00485b60;
              *(undefined4 *)((int)register0x00000054 + -0x1b4) = 0x24;
              *(undefined1 **)((int)register0x00000054 + -0x1b0) =
                   (undefined1 *)((int)register0x00000054 + -8);
              *(undefined4 *)((int)register0x00000054 + -0x1ac) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x1a8) = 1;
              FUN_00130144();
              *(undefined4 *)((int)register0x00000054 + 0x20) =
                   *(undefined4 *)((int)register0x00000054 + -0x1a4);
              *(undefined4 *)((int)register0x00000054 + 0x24) =
                   *(undefined4 *)((int)register0x00000054 + -0x1a0);
              FUN_0004fb3c();
              return;
            }
          }
        }
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0xc0));
        *(undefined4 *)((int)register0x00000054 + -0xbc) =
             *(undefined4 *)((int)register0x00000054 + -0x168);
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + -0xe8);
        *(undefined4 *)((int)register0x00000054 + -0xb4) = 9;
        *(undefined **)((int)register0x00000054 + -0xb8) =
             PTR_s_update_shelement_<_<defs>_Metada_0077568d_0xd26_00485b64;
        *(undefined1 **)((int)register0x00000054 + -0x1b8) =
             (undefined1 *)((int)register0x00000054 + -0xc0);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x1b0) = 2;
        FUN_00159184();
        *(undefined4 *)((int)register0x00000054 + -0xf0) =
             *(undefined4 *)((int)register0x00000054 + -0x1ac);
        *(undefined4 *)((int)register0x00000054 + -0x170) =
             *(undefined4 *)((int)register0x00000054 + -0x1a8);
        *(undefined4 *)((int)register0x00000054 + -0x1b8) =
             *(undefined4 *)((int)register0x00000054 + -0x1ac);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + -0x1a8);
        printerApi_common_file_FileExist();
        if (*(char *)((int)register0x00000054 + -0x1b0) == '\0') {
          *(undefined **)((int)register0x00000054 + -0x1b8) = PTR_DAT_00485b8c;
          FUN_0001eed8();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0x1b4);
          puVar4[1] = 0x13;
          *puVar4 = PTR_DAT_00485b90;
          *(undefined **)((int)register0x00000054 + 0x20) = PTR_DAT_00485b94;
          *(undefined4 **)((int)register0x00000054 + 0x24) = puVar4;
          FUN_0004fb3c();
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0x1b8) =
             *(undefined4 *)((int)register0x00000054 + -0xf0);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + -0x170);
        *(undefined4 *)((int)register0x00000054 + -0x1b0) = 0x1ed;
        FUN_00126318();
        if (*(int *)((int)register0x00000054 + -0x1ac) != 0) {
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1ac) + 4);
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x1a8);
          *(undefined **)((int)register0x00000054 + -0x1b8) = PTR_DAT_00485b68;
          *(undefined4 *)((int)register0x00000054 + -0x1b4) = 0x20;
          *(undefined1 **)((int)register0x00000054 + -0x1b0) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 1;
          FUN_00130144();
          *(undefined4 *)((int)register0x00000054 + 0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x1a4);
          *(undefined4 *)((int)register0x00000054 + 0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x1a0);
          FUN_0004fb3c();
          return;
        }
        *(undefined **)((int)register0x00000054 + -0x1b8) = PTR_DAT_00485b6c;
        *(undefined **)((int)register0x00000054 + -0x1b4) = PTR_DAT_00485b70;
        *(undefined4 *)((int)register0x00000054 + -0x1b0) = DAT_00485b74;
        *(undefined4 *)((int)register0x00000054 + -0x1ac) = 0x1a3;
        FUN_00155144();
        *(undefined4 *)((int)register0x00000054 + -0x154) =
             *(undefined4 *)((int)register0x00000054 + -0x1a8);
        *(undefined4 *)((int)register0x00000054 + -0xd4) =
             *(undefined4 *)((int)register0x00000054 + -0x1a4);
        *(undefined4 *)((int)register0x00000054 + -0x144) =
             *(undefined4 *)((int)register0x00000054 + -0x1a0);
        *(undefined1 **)((int)register0x00000054 + -0x1b8) =
             (undefined1 *)((int)register0x00000054 + -0x150);
        iVar2 = FUN_0004f500();
        if (iVar2 != 0) {
          FUN_0004fb3c();
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x170);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0xf0);
        *(undefined4 *)((int)register0x00000054 + -0x1b8) =
             *(undefined4 *)((int)register0x00000054 + -0x154);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + -0xd4);
        *(undefined **)((int)register0x00000054 + -0x1b0) =
             PTR_s__bin_shisindexEpsilonOmicronUpsi_00774847_0x5bc_00485b78;
        *(undefined4 *)((int)register0x00000054 + -0x1ac) = 7;
        *(undefined1 **)((int)register0x00000054 + -0x1a8) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x1a4) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x1a0) = 1;
        FUN_0015bb08();
        *(undefined4 *)((int)register0x00000054 + -0x1b8) =
             *(undefined4 *)((int)register0x00000054 + -0x19c);
        FUN_0015e624();
        *(undefined4 *)((int)register0x00000054 + -0x158) =
             *(undefined4 *)((int)register0x00000054 + -0x1a8);
        *(undefined4 *)((int)register0x00000054 + -0xe0) =
             *(undefined4 *)((int)register0x00000054 + -0x1b4);
        *(undefined4 *)((int)register0x00000054 + -0x160) =
             *(undefined4 *)((int)register0x00000054 + -0x1b0);
        *(undefined4 *)((int)register0x00000054 + -0xd8) =
             *(undefined4 *)((int)register0x00000054 + -0x1a4);
        *(undefined4 *)((int)register0x00000054 + -0x15c) =
             *(undefined4 *)((int)register0x00000054 + -0x1ac);
        *(undefined1 **)((int)register0x00000054 + -0x1b8) =
             (undefined1 *)((int)register0x00000054 + -400);
        FUN_00093e34();
        *(undefined4 *)((int)register0x00000054 + -0x1b8) =
             *(undefined4 *)((int)register0x00000054 + -0x1ac);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + -0x1a8);
        FUN_00148fb4();
        uVar6 = *(uint *)((int)register0x00000054 + -0x1ac);
        if ((int)uVar6 < 7) {
          cVar1 = '\0';
LAB_00485864:
          if (cVar1 != '\0') {
            FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0xd0));
            *(undefined4 *)((int)register0x00000054 + -0x1b8) =
                 *(undefined4 *)((int)register0x00000054 + -0xe0);
            *(undefined4 *)((int)register0x00000054 + -0x1b4) =
                 *(undefined4 *)((int)register0x00000054 + -0x160);
            *(undefined4 *)((int)register0x00000054 + -0x1b0) =
                 *(undefined4 *)((int)register0x00000054 + -0x15c);
            FUN_0008a61c();
            *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_00485b80;
            *(undefined4 *)((int)register0x00000054 + -0xcc) =
                 *(undefined4 *)((int)register0x00000054 + -0x1ac);
            if (*(int *)((int)register0x00000054 + -0x158) == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x158) + 4);
            }
            *(undefined4 *)((int)register0x00000054 + -200) = uVar3;
            *(undefined4 *)((int)register0x00000054 + -0xc4) =
                 *(undefined4 *)((int)register0x00000054 + -0xd8);
            *(undefined **)((int)register0x00000054 + -0x1b8) = PTR_DAT_00485b84;
            *(undefined4 *)((int)register0x00000054 + -0x1b4) = 0x23;
            *(undefined1 **)((int)register0x00000054 + -0x1b0) =
                 (undefined1 *)((int)register0x00000054 + -0xd0);
            *(undefined4 *)((int)register0x00000054 + -0x1ac) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x1a8) = 2;
            printerApi_common_logger_Errorf();
            *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
            FUN_0004fb3c();
            return;
          }
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0xd0));
          *(undefined4 *)((int)register0x00000054 + -0x1b8) =
               *(undefined4 *)((int)register0x00000054 + -0xe0);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) =
               *(undefined4 *)((int)register0x00000054 + -0x160);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + -0x15c);
          FUN_0008a61c();
          *(undefined **)((int)register0x00000054 + -0xd0) = PTR_DAT_00485b80;
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + -0x1ac);
          if (*(int *)((int)register0x00000054 + -0x158) == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x158) + 4);
          }
          *(undefined4 *)((int)register0x00000054 + -200) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0xc4) =
               *(undefined4 *)((int)register0x00000054 + -0xd8);
          *(undefined **)((int)register0x00000054 + -0x1b8) = PTR_DAT_00485b88;
          *(undefined4 *)((int)register0x00000054 + -0x1b4) = 0x2b;
          *(undefined1 **)((int)register0x00000054 + -0x1b0) =
               (undefined1 *)((int)register0x00000054 + -0xd0);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 2;
          printerApi_common_logger_Errorf();
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0xd0));
          *(undefined4 *)((int)register0x00000054 + -0x1b8) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x1b4) =
               *(undefined4 *)((int)register0x00000054 + -0xe0);
          *(undefined4 *)((int)register0x00000054 + -0x1b0) =
               *(undefined4 *)((int)register0x00000054 + -0x160);
          FUN_00093e34();
          *(undefined4 *)((int)register0x00000054 + -0x1b8) =
               *(undefined4 *)((int)register0x00000054 + -0x1ac);
          *(undefined4 *)((int)register0x00000054 + -0x1b4) =
               *(undefined4 *)((int)register0x00000054 + -0x1a8);
          FUN_0008a578();
          *(undefined **)((int)register0x00000054 + -0xd0) = PTR_SUB_00485b54;
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + -0x1b0);
          uVar3 = 0;
          if (*(int *)((int)register0x00000054 + -0x158) != 0) {
            uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x158) + 4);
          }
          *(undefined4 *)((int)register0x00000054 + -200) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0xc4) =
               *(undefined4 *)((int)register0x00000054 + -0xd8);
          *(undefined **)((int)register0x00000054 + -0x1b8) = PTR_DAT_00485b88;
          *(undefined4 *)((int)register0x00000054 + -0x1b4) = 0x2b;
          *(undefined1 **)((int)register0x00000054 + -0x1b0) =
               (undefined1 *)((int)register0x00000054 + -0xd0);
          *(undefined4 *)((int)register0x00000054 + -0x1ac) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x1a8) = 2;
          FUN_00130144();
          *(undefined4 *)((int)register0x00000054 + 0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x1a4);
          *(undefined4 *)((int)register0x00000054 + 0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x1a0);
          FUN_0004fb3c();
          return;
        }
        uVar5 = uVar6 - 7;
        uVar9 = uVar6 == uVar5;
        if (uVar5 <= uVar6) {
          *(uint *)((int)register0x00000054 + -0x1b8) =
               *(int *)((int)register0x00000054 + -0x1b0) + uVar5;
          *(undefined **)((int)register0x00000054 + -0x1b4) =
               PTR_s_successsetInforefreshgetInfoheat_00774847_0x171_00485b7c;
          *(undefined4 *)((int)register0x00000054 + -0x1b0) = 7;
          FUN_000150d4();
          cVar1 = *(char *)((int)register0x00000054 + -0x1ac);
          goto LAB_00485864;
        }
        uVar10 = FUN_00098758();
      }
      *(undefined8 *)((int)register0x00000054 + -0x1b8) = uVar10;
      *(undefined **)((int)register0x00000054 + -0x1b0) = PTR_DAT_00485b9c;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1bc);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x485b48;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/ota.Upgrade.deferwrap1 @ 00485ba0 (size 92) */

void printerApi_service_ota_Upgrade_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *(undefined4 *)(unaff_r7 + 4);
  uStack_c = *(undefined4 *)(unaff_r7 + 8);
  printerApi_common_file_RemoveForce();
  return;
}



/* printerApi/service/ota.firmwareUpgrade @ 00485bfc (size 432) */

/* WARNING: Removing unreachable block (ram,0x00485d30) */

void printerApi_service_ota_firmwareUpgrade(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_logger_Debug();
  printerApi_service_k3c_wrapper___K3cwrapper__FirmwareOtaStart();
  if (local_10 == 0) {
    printerApi_common_logger_Debug();
    printerApi_service_k3c_wrapper___K3cwrapper__FirmwareOtaStart();
    return;
  }
  FUN_00130144();
  return;
}



/* printerApi/service/ota.findFilamentHubFirmware @ 00485dcc (size 300) */

/* WARNING: Removing unreachable block (ram,0x00485e98) */

void printerApi_service_ota_findFilamentHubFirmware(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int local_30;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x485ef4;
    FUN_00096bb8();
  }
  iVar2 = *DAT_00485efc;
  iVar3 = *DAT_00485f00;
  iVar1 = 0;
  while( true ) {
    if (iVar3 <= iVar1) {
      return;
    }
    uVar4 = *(undefined4 *)(iVar2 + iVar1 * 8 + 4);
    FUN_00098a28(0,&local_10,iVar2,*(undefined4 *)(iVar2 + iVar1 * 8),unaff_lr);
    local_c = in_stack_00000008;
    local_10 = in_stack_00000004;
    local_4 = uVar4;
    FUN_00159184();
    FUN_001575d0();
    if (local_30 == 1) break;
    if (1 < local_30) {
      FUN_0019ae40();
      return;
    }
    iVar1 = iVar1 + 1;
  }
  return;
}



/* printerApi/service/ota.filamentHubFirmwareUpgrade @ 00485f04 (size 284) */

void printerApi_service_ota_filamentHubFirmwareUpgrade(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined *local_28;
  undefined4 *local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  FUN_0009bf4c(0);
  if (local_28 != PTR_DAT_00486028) {
    uVar1 = FUN_0001cb94();
    FUN_0004fb3c(uVar1);
    return;
  }
  FUN_00155144();
  printerApi_service_k3c_wrapper___K3cwrapper__UpgradeFilamenthub();
  (*(code *)*local_14)();
  return;
}



