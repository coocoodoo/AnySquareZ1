// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/file_processor   functions: 16
/* printerApi/service/file_processor.(*ThreeMFCleaner).Cleanup @ 004fac68 (size 2632) */

/* WARNING: Removing unreachable block (ram,0x004fad3c) */
/* WARNING: Removing unreachable block (ram,0x004fb2fc) */

void printerApi_service_file_processor___ThreeMFCleaner__Cleanup(undefined4 param_1)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar6;
  undefined4 extraout_r2;
  undefined4 uVar7;
  char cVar8;
  undefined4 extraout_r3;
  undefined4 uVar9;
  undefined4 uVar10;
  int unaff_r10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  undefined1 uVar12;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x14)) {
      puVar11 = (undefined1 *)((int)register0x00000054 + -0x94);
      *(undefined4 *)((int)register0x00000054 + -0x94) = unaff_lr;
      if (*(char *)(*(int *)((int)register0x00000054 + 4) + 0x18) != '\0') {
        *(undefined **)((int)register0x00000054 + -8) = PTR_SUB_004fb480;
        *(undefined **)((int)register0x00000054 + -4) = PTR_DAT_004fb4ac;
        *(undefined1 **)((int)register0x00000054 + -0x90) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x8c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x88) = 1;
        printerApi_common_logger_Debug();
        *(undefined4 *)((int)register0x00000054 + 8) = 0;
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
                    /* WARNING: Could not recover jumptable at 0x004fb2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x94))();
        return;
      }
      iVar6 = *(int *)(*(int *)(*(int *)PTR_DAT_004fb474 + 8) + 0x16c);
      puVar1 = *(undefined **)(*(int *)(*(int *)PTR_DAT_004fb474 + 8) + 0x168);
      if (iVar6 == 0) {
        iVar6 = 0x18;
        puVar1 = PTR_DAT_004fb478;
      }
      *(undefined **)((int)register0x00000054 + -0x90) = puVar1;
      *(int *)((int)register0x00000054 + -0x8c) = iVar6;
      internal_filepathlite_Clean(*(int *)((int)register0x00000054 + 4));
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + -0x88);
      *(undefined4 *)((int)register0x00000054 + -0x68) =
           *(undefined4 *)((int)register0x00000054 + -0x84);
      FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x28),
                   *(undefined4 *)((int)register0x00000054 + -0x84),
                   *(undefined4 *)((int)register0x00000054 + -0x88));
      *(undefined4 *)((int)register0x00000054 + -0x24) = extraout_r2;
      *(undefined4 *)((int)register0x00000054 + -0x28) = extraout_r3;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = 9;
      *(undefined **)((int)register0x00000054 + -0x20) =
           PTR_s__3mf_tempthumbnailgkapi_loggklib_0077568d_0x693_004fb47c;
      *(undefined1 **)((int)register0x00000054 + -0x90) =
           (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x88) = 2;
      FUN_00159184();
      iVar6 = *(int *)((int)register0x00000054 + 4);
      iVar4 = *(int *)(iVar6 + 0xc);
      if (iVar4 == 0) {
        cVar8 = '\0';
        goto LAB_004fb2e8;
      }
      uVar7 = *(undefined4 *)(iVar6 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           *(undefined4 *)((int)register0x00000054 + -0x80);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x84);
      *(undefined4 *)((int)register0x00000054 + -0x90) = uVar7;
      *(int *)((int)register0x00000054 + -0x8c) = iVar4;
      internal_filepathlite_Clean(iVar6);
      iVar6 = *(int *)((int)register0x00000054 + -0x84);
      *(int *)((int)register0x00000054 + -0x70) = iVar6;
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x88);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar7;
      if (iVar6 < *(int *)((int)register0x00000054 + -0x6c)) {
        cVar8 = '\0';
      }
      else {
        *(undefined4 *)((int)register0x00000054 + -0x90) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        *(int *)((int)register0x00000054 + -0x88) = *(int *)((int)register0x00000054 + -0x6c);
        FUN_000150d4();
        cVar8 = *(char *)((int)register0x00000054 + -0x84);
        uVar7 = *(undefined4 *)((int)register0x00000054 + -0x4c);
        iVar6 = *(int *)((int)register0x00000054 + -0x70);
      }
      if (cVar8 == '\0') {
        if (iVar6 < *(int *)((int)register0x00000054 + -0x68)) {
          cVar8 = '\0';
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -0x90) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x8c) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          *(int *)((int)register0x00000054 + -0x88) = *(int *)((int)register0x00000054 + -0x68);
          FUN_000150d4();
          cVar8 = *(char *)((int)register0x00000054 + -0x84);
        }
        if (cVar8 == '\0') {
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
          *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar7;
          FUN_0008a578();
          *(undefined **)((int)register0x00000054 + -8) = PTR_SUB_004fb480;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x88);
          *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_004fb490;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = 0x2e;
          *(undefined1 **)((int)register0x00000054 + -0x88) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x84) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
          printerApi_common_logger_Warnf();
          cVar8 = '\0';
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
          *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar7;
          FUN_0008a578();
          *(undefined **)((int)register0x00000054 + -8) = PTR_SUB_004fb480;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x88);
          *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_004fb484;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = 0x3b;
          *(undefined1 **)((int)register0x00000054 + -0x88) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x84) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
          printerApi_common_logger_Warnf();
          uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
          *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar7;
          FUN_00127c60();
          if (*(int *)((int)register0x00000054 + -0x88) == 0) {
            cVar8 = '\0';
          }
          else {
            uVar7 = *(undefined4 *)PTR_DAT_004fb488;
            uVar10 = *(undefined4 *)PTR_DAT_004fb48c;
            *(int *)((int)register0x00000054 + -0x90) = *(int *)((int)register0x00000054 + -0x88);
            *(undefined4 *)((int)register0x00000054 + -0x8c) =
                 *(undefined4 *)((int)register0x00000054 + -0x84);
            *(undefined4 *)((int)register0x00000054 + -0x88) = uVar7;
            *(undefined4 *)((int)register0x00000054 + -0x84) = uVar10;
            FUN_00122c24();
            if (*(char *)((int)register0x00000054 + -0x80) == '\0') {
              cVar8 = '\x01';
            }
            else {
              cVar8 = '\0';
            }
          }
        }
        goto LAB_004fb2e0;
      }
      uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x90) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar7;
      FUN_00127c60();
      iVar6 = *(int *)((int)register0x00000054 + -0x88);
      *(int *)((int)register0x00000054 + -0x54) = iVar6;
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + -0x84);
      if (iVar6 == 0) {
        bVar2 = 0;
        iVar6 = 0;
      }
      else {
        uVar7 = *(undefined4 *)PTR_DAT_004fb488;
        uVar10 = *(undefined4 *)PTR_DAT_004fb48c;
        *(int *)((int)register0x00000054 + -0x90) = iVar6;
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             *(undefined4 *)((int)register0x00000054 + -0x84);
        *(undefined4 *)((int)register0x00000054 + -0x88) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x84) = uVar10;
        FUN_00122c24();
        bVar2 = *(byte *)((int)register0x00000054 + -0x80) ^ 1;
        iVar6 = *(int *)((int)register0x00000054 + -0x54);
      }
      *(byte *)((int)register0x00000054 + -0x72) = bVar2;
      if (bVar2 != 0) {
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x18));
        uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x90) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
        *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar7;
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_SUB_004fb480;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x88);
        if (*(int *)((int)register0x00000054 + -0x54) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x54) + 4);
        }
        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_004fb4a8;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = 0x3a;
        *(undefined1 **)((int)register0x00000054 + -0x88) =
             (undefined1 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x84) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x80) = 2;
        printerApi_common_logger_Errorf();
        goto LAB_004fb2dc;
      }
      if (iVar6 != 0) goto LAB_004fb2dc;
      FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x18));
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_SUB_004fb480;
      *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_004fb494;
      uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x90) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar7;
      FUN_0008a578();
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_SUB_004fb480;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x88);
      *(undefined1 **)((int)register0x00000054 + -0x90) =
           (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x88) = 2;
      printerApi_common_logger_Info();
      iVar6 = *(int *)((int)register0x00000054 + 4);
      uVar5 = *(uint *)(iVar6 + 0xc);
      iVar4 = *(int *)(iVar6 + 8);
      if ((int)uVar5 < 6) {
        cVar8 = '\0';
LAB_004fb058:
        uVar3 = uVar5;
        if (cVar8 == '\0') break;
        uVar3 = uVar5 - 6;
        uVar12 = uVar5 == uVar3;
        if (uVar3 <= uVar5) break;
        FUN_00098718(uVar3,uVar3,uVar5);
      }
      else {
        uVar3 = uVar5 - 6;
        uVar12 = uVar5 == uVar3;
        if (uVar3 <= uVar5) {
          *(int *)((int)register0x00000054 + -0x38) = iVar4;
          *(uint *)((int)register0x00000054 + -0x5c) = uVar5;
          *(uint *)((int)register0x00000054 + -0x90) = iVar4 + uVar3;
          *(undefined **)((int)register0x00000054 + -0x8c) = PTR_DAT_004fb498;
          *(undefined4 *)((int)register0x00000054 + -0x88) = 6;
          FUN_000150d4();
          cVar8 = *(char *)((int)register0x00000054 + -0x84);
          uVar5 = *(uint *)((int)register0x00000054 + -0x5c);
          iVar6 = *(int *)((int)register0x00000054 + 4);
          iVar4 = *(int *)((int)register0x00000054 + -0x38);
          goto LAB_004fb058;
        }
      }
      param_1 = FUN_00098758();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x94);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar11;
      }
    }
    unaff_lr = 0x4fb6ec;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
  *(undefined4 *)((int)register0x00000054 + -0x90) = 0;
  *(int *)((int)register0x00000054 + -0x8c) = iVar4;
  *(uint *)((int)register0x00000054 + -0x88) = uVar3;
  *(undefined **)((int)register0x00000054 + -0x84) =
       PTR_s__acmboolint8chanfuncpartcallkind_0077367d_0x2b_004fb49c;
  *(undefined4 *)((int)register0x00000054 + -0x80) = 4;
  FUN_000715a4(4,0,iVar6);
  *(undefined4 *)((int)register0x00000054 + -0x3c) =
       *(undefined4 *)((int)register0x00000054 + -0x7c);
  *(undefined4 *)((int)register0x00000054 + -0x60) =
       *(undefined4 *)((int)register0x00000054 + -0x78);
  *(undefined4 *)((int)register0x00000054 + -0x90) =
       *(undefined4 *)((int)register0x00000054 + -0x7c);
  *(undefined4 *)((int)register0x00000054 + -0x8c) =
       *(undefined4 *)((int)register0x00000054 + -0x78);
  FUN_00127c60();
  iVar6 = *(int *)((int)register0x00000054 + -0x88);
  *(int *)((int)register0x00000054 + -0x58) = iVar6;
  uVar7 = *(undefined4 *)((int)register0x00000054 + -0x84);
  *(undefined4 *)((int)register0x00000054 + -0x34) = uVar7;
  if (iVar6 == 0) {
    bVar2 = 0;
    iVar6 = 0;
  }
  else {
    uVar10 = *(undefined4 *)PTR_DAT_004fb488;
    uVar9 = *(undefined4 *)PTR_DAT_004fb48c;
    *(int *)((int)register0x00000054 + -0x90) = iVar6;
    *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar7;
    *(undefined4 *)((int)register0x00000054 + -0x88) = uVar10;
    *(undefined4 *)((int)register0x00000054 + -0x84) = uVar9;
    FUN_00122c24();
    bVar2 = *(byte *)((int)register0x00000054 + -0x80) ^ 1;
    uVar7 = *(undefined4 *)((int)register0x00000054 + -0x34);
    iVar6 = *(int *)((int)register0x00000054 + -0x58);
  }
  if (bVar2 == 0) {
    if (iVar6 == 0) {
      FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x18));
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_SUB_004fb480;
      *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_004fb4a0;
      *(undefined4 *)((int)register0x00000054 + -0x90) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           *(undefined4 *)((int)register0x00000054 + -0x60);
      FUN_0008a578();
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_SUB_004fb480;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x88);
      *(undefined1 **)((int)register0x00000054 + -0x90) =
           (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x88) = 2;
      printerApi_common_logger_Info();
      uVar7 = extraout_r1;
    }
  }
  else {
    FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x18));
    *(undefined4 *)((int)register0x00000054 + -0x90) =
         *(undefined4 *)((int)register0x00000054 + -0x3c);
    *(undefined4 *)((int)register0x00000054 + -0x8c) =
         *(undefined4 *)((int)register0x00000054 + -0x60);
    FUN_0008a578();
    *(undefined **)((int)register0x00000054 + -0x18) = PTR_SUB_004fb480;
    *(undefined4 *)((int)register0x00000054 + -0x14) =
         *(undefined4 *)((int)register0x00000054 + -0x88);
    if (*(int *)((int)register0x00000054 + -0x58) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x58) + 4);
    }
    *(undefined4 *)((int)register0x00000054 + -0x10) = uVar7;
    *(undefined4 *)((int)register0x00000054 + -0xc) =
         *(undefined4 *)((int)register0x00000054 + -0x34);
    *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_004fb4a4;
    *(undefined4 *)((int)register0x00000054 + -0x8c) = 0x38;
    *(undefined1 **)((int)register0x00000054 + -0x88) =
         (undefined1 *)((int)register0x00000054 + -0x18);
    *(undefined4 *)((int)register0x00000054 + -0x84) = 2;
    *(undefined4 *)((int)register0x00000054 + -0x80) = 2;
    printerApi_common_logger_Warnf();
    uVar7 = extraout_r1_00;
  }
  *(undefined4 *)((int)register0x00000054 + -0x90) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x8c) =
       *(undefined4 *)((int)register0x00000054 + -0x70);
  internal_filepathlite_Dir(*(undefined4 *)((int)register0x00000054 + -0x70),uVar7);
  uVar7 = *(undefined4 *)((int)register0x00000054 + -0x88);
  iVar6 = *(int *)((int)register0x00000054 + -0x84);
  iVar4 = *(int *)((int)register0x00000054 + -0x6c);
  while( true ) {
    *(int *)((int)register0x00000054 + -0x50) = iVar6;
    *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar7;
    if (iVar6 < iVar4) {
      cVar8 = '\0';
    }
    else {
      *(undefined4 *)((int)register0x00000054 + -0x90) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      *(int *)((int)register0x00000054 + -0x88) = iVar4;
      FUN_000150d4();
      cVar8 = *(char *)((int)register0x00000054 + -0x84);
      iVar6 = *(int *)((int)register0x00000054 + -0x50);
      iVar4 = *(int *)((int)register0x00000054 + -0x6c);
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x2c);
    }
    if (cVar8 == '\0') {
      bVar2 = 0;
    }
    else if (iVar6 == iVar4) {
      *(undefined4 *)((int)register0x00000054 + -0x90) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      *(int *)((int)register0x00000054 + -0x88) = iVar6;
      FUN_000150d4();
      bVar2 = *(byte *)((int)register0x00000054 + -0x84) ^ 1;
      iVar6 = *(int *)((int)register0x00000054 + -0x50);
      iVar4 = *(int *)((int)register0x00000054 + -0x6c);
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x2c);
    }
    else {
      bVar2 = 1;
    }
    if (bVar2 == 0) break;
    *(undefined4 *)((int)register0x00000054 + -0x90) = uVar7;
    *(int *)((int)register0x00000054 + -0x8c) = iVar6;
    FUN_00127c60(uVar7,iVar6,iVar4);
    if (*(int *)((int)register0x00000054 + -0x88) != 0) break;
    FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x18));
    *(undefined **)((int)register0x00000054 + -0x18) = PTR_SUB_004fb6f8;
    *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_004fb708;
    *(undefined4 *)((int)register0x00000054 + -0x90) =
         *(undefined4 *)((int)register0x00000054 + -0x2c);
    *(undefined4 *)((int)register0x00000054 + -0x8c) =
         *(undefined4 *)((int)register0x00000054 + -0x50);
    FUN_0008a578();
    *(undefined **)((int)register0x00000054 + -0x10) = PTR_SUB_004fb6f8;
    *(undefined4 *)((int)register0x00000054 + -0xc) =
         *(undefined4 *)((int)register0x00000054 + -0x88);
    *(undefined1 **)((int)register0x00000054 + -0x90) =
         (undefined1 *)((int)register0x00000054 + -0x18);
    *(undefined4 *)((int)register0x00000054 + -0x8c) = 2;
    *(undefined4 *)((int)register0x00000054 + -0x88) = 2;
    uVar7 = printerApi_common_logger_Debug();
    *(undefined4 *)((int)register0x00000054 + -0x90) =
         *(undefined4 *)((int)register0x00000054 + -0x2c);
    *(undefined4 *)((int)register0x00000054 + -0x8c) =
         *(undefined4 *)((int)register0x00000054 + -0x50);
    internal_filepathlite_Dir(uVar7);
    uVar7 = *(undefined4 *)((int)register0x00000054 + -0x88);
    iVar6 = *(int *)((int)register0x00000054 + -0x84);
    iVar4 = *(int *)((int)register0x00000054 + -0x6c);
  }
LAB_004fb2dc:
  cVar8 = *(char *)((int)register0x00000054 + -0x72);
LAB_004fb2e0:
  iVar6 = *(int *)((int)register0x00000054 + 4);
LAB_004fb2e8:
  iVar4 = *(int *)(iVar6 + 0x14);
  if (iVar4 != 0) {
    *(char *)((int)register0x00000054 + -0x71) = cVar8;
    *(undefined4 *)((int)register0x00000054 + -0x90) = *(undefined4 *)(iVar6 + 0x10);
    *(int *)((int)register0x00000054 + -0x8c) = iVar4;
    internal_filepathlite_Clean(iVar6);
    if (*(int *)((int)register0x00000054 + -0x84) < *(int *)((int)register0x00000054 + -0x68)) {
      cVar8 = '\0';
    }
    else {
      *(undefined4 *)((int)register0x00000054 + -0x90) =
           *(undefined4 *)((int)register0x00000054 + -0x88);
      *(undefined4 *)((int)register0x00000054 + -0x8c) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(int *)((int)register0x00000054 + -0x88) = *(int *)((int)register0x00000054 + -0x68);
      FUN_000150d4();
      cVar8 = *(char *)((int)register0x00000054 + -0x84);
    }
    if (cVar8 == '\0') {
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
      *(undefined4 *)((int)register0x00000054 + -0x90) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar7;
      FUN_0008a578();
      *(undefined **)((int)register0x00000054 + -8) = PTR_SUB_004fb6f8;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x88);
      *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_004fb6fc;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 0x2c;
      *(undefined1 **)((int)register0x00000054 + -0x88) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x84) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
      printerApi_common_logger_Warnf();
      cVar8 = *(char *)((int)register0x00000054 + -0x71);
    }
    else {
      uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
      *(undefined4 *)((int)register0x00000054 + -0x90) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar7;
      FUN_00129904();
      iVar6 = *(int *)((int)register0x00000054 + -0x88);
      *(int *)((int)register0x00000054 + -100) = iVar6;
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + -0x84);
      if (iVar6 == 0) {
        bVar2 = 0;
        iVar6 = 0;
      }
      else {
        uVar7 = *(undefined4 *)PTR_DAT_004fb488;
        uVar10 = *(undefined4 *)PTR_DAT_004fb48c;
        *(int *)((int)register0x00000054 + -0x90) = iVar6;
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             *(undefined4 *)((int)register0x00000054 + -0x84);
        *(undefined4 *)((int)register0x00000054 + -0x88) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x84) = uVar10;
        FUN_00122c24();
        bVar2 = *(byte *)((int)register0x00000054 + -0x80) ^ 1;
        iVar6 = *(int *)((int)register0x00000054 + -100);
      }
      if (bVar2 == 0) {
        if (iVar6 == 0) {
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x18));
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_SUB_004fb480;
          *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_004fb4b0;
          uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0x90) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar7;
          FUN_0008a578();
          *(undefined **)((int)register0x00000054 + -0x10) = PTR_SUB_004fb480;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x88);
          *(undefined1 **)((int)register0x00000054 + -0x90) =
               (undefined1 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x8c) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x88) = 2;
          printerApi_common_logger_Info();
        }
        cVar8 = *(char *)((int)register0x00000054 + -0x71);
      }
      else {
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x18));
        uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x90) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar7;
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_SUB_004fb480;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x88);
        if (*(int *)((int)register0x00000054 + -100) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -100) + 4);
        }
        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_004fb6f4;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = 0x38;
        *(undefined1 **)((int)register0x00000054 + -0x88) =
             (undefined1 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x84) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x80) = 2;
        printerApi_common_logger_Errorf();
        cVar8 = '\x01';
      }
    }
    iVar6 = *(int *)((int)register0x00000054 + 4);
  }
  *(undefined1 *)(iVar6 + 0x18) = 1;
  if (cVar8 != '\0') {
    uVar7 = *(undefined4 *)PTR_DAT_004fb704;
    *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)PTR_DAT_004fb700;
    *(undefined4 *)((int)register0x00000054 + 0xc) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x004fb588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((int)register0x00000054 + -0x94))();
    return;
  }
  *(undefined4 *)((int)register0x00000054 + 8) = 0;
  *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
                    /* WARNING: Could not recover jumptable at 0x004fb59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((int)register0x00000054 + -0x94))();
  return;
}



/* printerApi/service/file_processor.(*ThreeMFCleaner).Serialize @ 004fb70c (size 220) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_file_processor___ThreeMFCleaner__Serialize(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 uStack_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x4fb7e4;
    FUN_00096bb8();
  }
  FUN_001707f4();
  if (uStack_1c != 0) {
    in_stack_00000008 = 0;
    in_stack_0000000c = 0;
    in_stack_00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x004fb75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0001cd7c();
  FUN_001707f4();
                    /* WARNING: Could not recover jumptable at 0x004fb7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/file_processor.(*ThreeMFCleaner).CanCleanup @ 004fb7f8 (size 68) */

void printerApi_service_file_processor___ThreeMFCleaner__CanCleanup(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  if (*(char *)(in_stack_00000004 + 0x18) == '\0') {
    if (*(int *)(in_stack_00000004 + 0xc) == 0) {
      uStack00000008 = 0;
      if (*(int *)(in_stack_00000004 + 0x14) != 0) {
        uStack00000008 = 1;
      }
    }
    else {
      uStack00000008 = 1;
    }
  }
  else {
    uStack00000008 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004fb838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/file_processor.(*NoOpCleaner).Cleanup @ 004fb83c (size 20) */

void printerApi_service_file_processor___NoOpCleaner__Cleanup(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = 0;
  uStack0000000c = 0;
                    /* WARNING: Could not recover jumptable at 0x004fb84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/file_processor.(*NoOpCleaner).Serialize @ 004fb850 (size 176) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_file_processor___NoOpCleaner__Serialize(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined1 *puStack_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4fb8fc;
    FUN_00096bb8();
  }
  FUN_0001eed8();
  *puStack_2c = 0x7b;
  puStack_2c[1] = 0x7d;
  FUN_0001cd7c();
  FUN_001707f4();
                    /* WARNING: Could not recover jumptable at 0x004fb8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/file_processor.(*NoOpCleaner).CanCleanup @ 004fb910 (size 12) */

void printerApi_service_file_processor___NoOpCleaner__CanCleanup(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uStack00000008;
  
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x004fb918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/file_processor.DeserializeCleaner @ 004fb920 (size 600) */

/* WARNING: Removing unreachable block (ram,0x004fba08) */

void printerApi_service_file_processor_DeserializeCleaner(void)

{
  char *pcVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 *local_28;
  int local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (in_stack_00000008 == 0) {
    return;
  }
  FUN_0001eed8();
  FUN_0016a168();
  if (local_18 != 0) {
    return;
  }
  pcVar1 = (char *)*local_28;
  if (local_28[1] == 3) {
    if (((*pcVar1 == '3') && (pcVar1[1] == 'm')) && (pcVar1[2] == 'f')) {
      FUN_0001eed8();
      FUN_0016a168();
      return;
    }
  }
  else if ((((local_28[1] == 4) && (*pcVar1 == 'n')) && (pcVar1[1] == 'o')) &&
          ((pcVar1[2] == 'o' && (pcVar1[3] == 'p')))) {
    return;
  }
  FUN_0008a578();
  printerApi_common_logger_Warnf();
  return;
}



/* printerApi/service/file_processor.(*Processor).Process @ 004fbba0 (size 628) */

void printerApi_service_file_processor___Processor__Process(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined *in_stack_00000004;
  undefined *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  undefined4 *in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined *local_74;
  undefined4 *local_70;
  undefined **local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_40 [20];
  undefined *local_2c;
  int local_28;
  undefined1 auStack_20 [20];
  undefined *local_c;
  undefined *local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  uVar1 = FUN_0010cf30();
  FUN_00098e14(uVar1,&local_74,auStack_20);
  if (in_stack_0000000c == (undefined4 *)0x0) {
    local_74 = PTR_DAT_004fbe30;
    FUN_0001eed8();
    local_70[1] = 0x12;
    *local_70 = PTR_DAT_004fbe34;
    return;
  }
  local_74 = in_stack_00000008;
  local_70 = in_stack_0000000c;
  printerApi_common_file_FileExist();
  if ((char)local_6c == '\0') {
    local_8 = (undefined *)0x0;
    local_4 = 0;
    local_74 = in_stack_00000008;
    local_70 = in_stack_0000000c;
    FUN_0008a578();
    local_8 = PTR_SUB_004fbe28;
    local_4 = local_6c;
    local_74 = PTR_DAT_004fbe2c;
    local_70 = (undefined4 *)0x12;
    local_6c = &local_8;
    local_68 = 1;
    local_64 = 1;
    FUN_00130144();
    return;
  }
  if (in_stack_00000014 == 0) {
    in_stack_00000014 = *(int *)(*(int *)(*DAT_004fbe18 + 8) + 0x16c);
    in_stack_00000010 = *(undefined4 *)(*(int *)(*DAT_004fbe18 + 8) + 0x168);
    if (in_stack_00000014 == 0) {
      in_stack_00000014 = 0x18;
      in_stack_00000010 = DAT_004fbe1c;
    }
  }
  if (in_stack_00000020 == 0) {
    in_stack_0000001c = DAT_004fbe20;
    in_stack_00000020 = 0xd;
  }
  if (in_stack_00000028 == 0 && in_stack_00000024 == 0) {
    in_stack_00000024 = DAT_004fbe24;
    in_stack_00000028 = 0x117;
  }
  local_74 = in_stack_00000008;
  local_70 = in_stack_0000000c;
  printerApi_common_threemf_Detect();
  if ((char)local_6c != '\0') {
    local_74 = in_stack_00000004;
    uVar1 = FUN_00098ddc(in_stack_00000004,&stack0x00000008,&local_70);
    FUN_00098e14(uVar1,auStack_20,auStack_40);
    printerApi_service_file_processor___Processor__process3MF();
    if (local_28 == 0) {
      if (in_stack_00000034 != (undefined4 *)0x0) {
        local_c = local_2c;
        local_74 = local_2c;
        (*(code *)*in_stack_00000034)();
      }
      return;
    }
    return;
  }
  local_74 = in_stack_00000004;
  uVar1 = FUN_00098ddc(in_stack_00000004,&stack0x00000008,&local_70);
  FUN_00098e14(uVar1,auStack_20,auStack_40);
  printerApi_service_file_processor___Processor__processGCode();
  return;
}



/* printerApi/service/file_processor.(*Processor).process3MF @ 004fbe3c (size 3052) */

/* WARNING: Removing unreachable block (ram,0x004fc408) */
/* WARNING: Removing unreachable block (ram,0x004fbf4c) */

void printerApi_service_file_processor___Processor__process3MF(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined **extraout_r2;
  undefined4 extraout_r2_00;
  int extraout_r3;
  undefined **extraout_r3_00;
  undefined **ppuVar3;
  undefined4 *extraout_r3_01;
  undefined4 *puVar4;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined **in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 *in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  char cStack0000002c;
  char cStack0000002d;
  char cStack0000002e;
  undefined4 in_stack_00000030;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined8 local_1c0;
  undefined **local_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  undefined **local_1ac;
  int local_1a8;
  undefined4 local_1a4;
  undefined1 auStack_188 [28];
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 *local_15c;
  undefined4 *local_158;
  undefined4 local_154;
  undefined4 local_150;
  int local_14c;
  undefined **local_148;
  undefined4 *local_144;
  undefined4 local_140;
  int local_13c;
  int local_138;
  undefined **local_134;
  int local_130;
  double local_12c;
  undefined **local_124;
  undefined **local_120;
  undefined **local_11c;
  undefined **local_118;
  undefined4 *local_114;
  undefined **local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined **local_fc;
  undefined4 local_f8;
  undefined4 *local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined *local_d8;
  undefined4 local_d4;
  undefined *local_d0;
  undefined4 local_cc;
  undefined *local_c8;
  undefined4 local_c4;
  undefined4 *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 *local_a4;
  undefined **local_a0;
  undefined4 local_9c;
  undefined4 *local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined **local_84;
  undefined4 local_80;
  undefined **local_7c;
  undefined4 local_78;
  char local_74;
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [28];
  undefined *local_48;
  undefined4 *local_44;
  undefined ***local_40;
  undefined4 *local_3c;
  undefined **local_38;
  undefined1 local_34;
  undefined *local_30;
  undefined **local_2c;
  undefined *local_28;
  undefined **local_24;
  undefined *local_20;
  undefined **local_1c;
  undefined *local_18;
  undefined **local_14;
  undefined *local_10;
  undefined **local_c;
  undefined *local_8;
  undefined **local_4;
  
  while (&local_144 <= *(undefined4 ***)(unaff_r10 + 8)) {
    unaff_lr = 0x4fca84;
    FUN_00096bb8();
  }
  local_1c0._0_4_ = (undefined **)in_stack_00000008;
  local_1c0._4_4_ = (undefined **)in_stack_0000000c;
  internal_filepathlite_Base();
  FUN_00098a28(0,&local_10,uStack_1b4,local_1b8,unaff_lr);
  local_1c0._4_4_ = extraout_r2;
  FUN_0008a578();
  local_10 = PTR_SUB_004fc6ec;
  local_c = local_1b8;
  local_1c0._0_4_ = (undefined **)in_stack_00000018;
  FUN_0001cec0();
  local_8 = PTR_DAT_004fc6f0;
  local_4 = local_1c0._4_4_;
  local_1c0._0_4_ = (undefined **)PTR_DAT_004fc6f4;
  local_1c0._4_4_ = (undefined **)0x31;
  local_1b8 = &local_10;
  uStack_1b4 = 2;
  local_1b0 = 2;
  printerApi_common_logger_Debugf();
  if (cStack0000002c == '\0') {
    local_1c0._0_4_ = (undefined **)in_stack_00000008;
    local_1c0._4_4_ = (undefined **)in_stack_0000000c;
    local_1b8 = in_stack_00000010;
    uStack_1b4 = in_stack_00000014;
    printerApi_common_threemf_PreCheck();
    if (local_1a8 != 0) {
      local_138 = local_1a8;
      local_18 = *(undefined **)(local_1a8 + 4);
      local_68 = local_1a4;
      local_14 = (undefined **)local_1a4;
      local_1c0._0_4_ = (undefined **)PTR_DAT_004fc6f8;
      local_1c0._4_4_ = (undefined **)0x27;
      local_1b8 = &local_18;
      uStack_1b4 = 1;
      local_1b0 = 1;
      printerApi_common_logger_Errorf();
      local_18 = (undefined *)0x0;
      if (local_138 != 0) {
        local_18 = *(undefined **)(local_138 + 4);
      }
      local_14 = (undefined **)local_68;
      local_1c0._0_4_ = (undefined **)PTR_DAT_004fc6fc;
      local_1c0._4_4_ = (undefined **)0x13;
      local_1b8 = &local_18;
      uStack_1b4 = 1;
      local_1b0 = 1;
      FUN_00130144();
      return;
    }
    local_14c = local_1b0;
    local_148 = local_1ac;
    FUN_00098a20(0,&local_30);
    local_30 = PTR_SUB_004fc6ec;
    local_2c = (undefined **)PTR_DAT_004fc700;
    FUN_000869d0();
    local_12c = *(double *)PTR_DAT_004fc704 *
                *(double *)PTR_DAT_004fc704 * (double)CONCAT44(uStack_1b4,local_1b8);
    local_1c0 = local_12c;
    FUN_0008a4bc();
    local_28 = PTR_DAT_004fc708;
    local_24 = local_1b8;
    local_20 = PTR_SUB_004fc6ec;
    local_1c = (undefined **)PTR_DAT_004fc70c;
    local_1c0._0_4_ = &local_30;
    local_1c0._4_4_ = (undefined **)0x3;
    local_1b8 = (undefined **)0x3;
    printerApi_common_logger_Debug();
  }
  else {
    local_148 = (undefined **)0x0;
    local_14c = 0;
  }
  FUN_00098a08(0,&local_a0,local_14c,local_148);
  local_a0 = in_stack_00000010;
  local_9c = in_stack_00000014;
  local_98 = in_stack_0000001c;
  local_94 = in_stack_00000020;
  local_90 = in_stack_00000024;
  local_8c = in_stack_00000028;
  local_88 = in_stack_00000030;
  local_74 = cStack0000002c;
  if ((cStack0000002d == '\0') && (cStack0000002e != '\0')) {
    local_1c0._0_4_ = (undefined **)in_stack_00000008;
    local_1c0._4_4_ = (undefined **)in_stack_0000000c;
    internal_filepathlite_Dir();
    local_84 = local_1b8;
    local_80 = uStack_1b4;
    local_1c0._0_4_ = (undefined **)in_stack_00000008;
    local_1c0._4_4_ = (undefined **)in_stack_0000000c;
    internal_filepathlite_Base();
    local_1c0._0_4_ = local_1b8;
    local_1c0._4_4_ = (undefined **)uStack_1b4;
    printerApi_common_threemf_GenerateTargetFilename();
    local_7c = local_1b8;
    local_78 = uStack_1b4;
  }
  local_1c0._0_4_ = (undefined **)in_stack_00000008;
  local_1c0._4_4_ = (undefined **)in_stack_0000000c;
  printerApi_common_threemf_Get3mfTempGcodePath();
  if (local_1b0 == 0) {
    local_70 = local_1b8;
    local_140 = uStack_1b4;
    local_a8 = in_stack_00000008;
    local_a4 = in_stack_0000000c;
    local_fc = local_1b8;
    local_f8 = uStack_1b4;
    local_e0 = 0;
    local_dc = 0;
    local_c8 = PTR_DAT_004fc714;
    local_c4 = 3;
    FUN_00098a20(0,&local_48);
    local_48 = 
    PTR_printerApi_service_file_processor___Processor__process3MF_UpdateResumeArtifacts_func1_004fc718
    ;
    local_44 = &local_a8;
    local_40 = &local_fc;
    local_3c = &local_e0;
    local_38 = &local_c8;
    local_34 = 1;
    local_1c0._0_4_ = &local_48;
    printerApi_service_poweroff_resume_mutatePrintRecord();
    if (local_1c0._4_4_ == (undefined **)0x0) {
      FUN_00098a28(0,&local_10);
      local_1c0._0_4_ = (undefined **)in_stack_00000008;
      local_1c0._4_4_ = (undefined **)in_stack_0000000c;
      FUN_0008a578();
      local_10 = PTR_SUB_004fc6ec;
      local_c = local_1b8;
      local_1c0._0_4_ = local_70;
      local_1c0._4_4_ = (undefined **)local_140;
      FUN_0008a578();
      local_8 = PTR_SUB_004fc6ec;
      local_4 = local_1b8;
      local_1c0._0_4_ = (undefined **)PTR_DAT_004fc728;
      local_1c0._4_4_ = (undefined **)&DAT_00000041;
      local_1b8 = &local_10;
      uStack_1b4 = 2;
      local_1b0 = 2;
      printerApi_common_logger_Debugf();
    }
    else {
      local_158 = local_1c0._4_4_;
      uStack_1b4 = *(undefined4 *)PTR_DAT_004fc720;
      local_118 = local_1b8;
      local_1c0._0_4_ = local_1c0._4_4_;
      local_1c0._4_4_ = local_1b8;
      local_1b8 = *(undefined ***)PTR_DAT_004fc71c;
      FUN_000a2c04();
      if ((char)local_1b0 == '\0') {
        local_18 = (undefined *)0x0;
        if (local_158 != (undefined4 *)0x0) {
          local_18 = (undefined *)local_158[1];
        }
        local_14 = local_118;
        local_1c0._0_4_ = (undefined **)PTR_DAT_004fc724;
        local_1c0._4_4_ = (undefined **)&DAT_00000037;
        local_1b8 = &local_18;
        uStack_1b4 = 1;
        local_1b0 = 1;
        printerApi_common_logger_Warnf();
      }
    }
  }
  else {
    local_18 = *(undefined **)(local_1b0 + 4);
    local_14 = local_1ac;
    local_1c0._0_4_ = (undefined **)PTR_DAT_004fc710;
    local_1c0._4_4_ = (undefined **)&DAT_00000046;
    local_1b8 = &local_18;
    uStack_1b4 = 1;
    local_1b0 = 1;
    printerApi_common_logger_Warnf();
  }
  uVar2 = FUN_00098a1c(0,auStack_64);
  local_1c0._0_4_ = (undefined **)in_stack_00000008;
  local_1c0._4_4_ = (undefined **)in_stack_0000000c;
  FUN_00098ddc(uVar2,&local_a0,&local_1b8);
  uVar2 = printerApi_common_threemf_Extract();
  uVar2 = FUN_00098e04(uVar2,auStack_188,auStack_64,local_16c);
  uVar2 = FUN_00098e04(uVar2,auStack_64,&local_a0);
  if (extraout_r3 == 0) {
    FUN_00098e14(uVar2,&stack0x00000038,&local_1c0);
    FUN_0010327c();
    puVar1 = local_98;
    local_144 = in_stack_0000000c;
    local_134 = local_1ac;
    local_130 = local_1a8;
    local_bc = in_stack_00000008;
    local_110 = local_a0;
    local_154 = local_9c;
    local_f4 = local_98;
    local_150 = local_94;
    local_1c0._0_4_ = (undefined **)PTR_DAT_004fc740;
    FUN_0001eed8(in_stack_0000000c);
    local_1c0._4_4_[1] = (undefined *)local_144;
    local_114 = local_1c0._4_4_;
    if (*(int *)PTR_DAT_004fc744 != 0) {
      local_114 = (undefined4 *)FUN_00098698();
      *puVar1 = local_bc;
      puVar1[1] = local_110;
      puVar1[2] = local_f4;
    }
    *local_114 = local_bc;
    local_114[3] = local_154;
    local_114[2] = local_110;
    local_114[5] = local_150;
    local_114[4] = local_f4;
    *(undefined1 *)(local_114 + 6) = 0;
    local_1c0._0_4_ = (undefined **)PTR_DAT_004fc748;
    FUN_0001eed8();
    local_1c0._4_4_[1] = (undefined *)in_stack_0000000c;
    local_c0 = local_1c0._4_4_;
    uVar2 = in_stack_00000008;
    if (*(int *)PTR_DAT_004fc744 != 0) {
      local_c0 = (undefined4 *)FUN_00098678();
      *puVar1 = extraout_r2_00;
      uVar2 = extraout_r2_00;
    }
    *local_c0 = uVar2;
    local_c0[3] = local_9c;
    ppuVar3 = local_a0;
    if (*(int *)PTR_DAT_004fc744 != 0) {
      local_c0 = (undefined4 *)FUN_00098678();
      *puVar1 = extraout_r3_00;
      ppuVar3 = extraout_r3_00;
    }
    local_c0[2] = ppuVar3;
    local_c0[5] = local_94;
    puVar4 = local_98;
    if (*(int *)PTR_DAT_004fc744 != 0) {
      local_c0 = (undefined4 *)FUN_00098688();
      *puVar1 = extraout_r3_01;
      puVar1[1] = local_114;
      puVar4 = extraout_r3_01;
    }
    local_c0[4] = puVar4;
    local_c0[6] = PTR_DAT_004fca8c;
    local_c0[7] = local_114;
    *(undefined1 *)(local_c0 + 8) = 1;
    local_c0[9] = local_14c;
    local_c0[10] = local_148;
    local_c0[0xb] = local_134;
    local_c0[0xc] = local_130;
    *(undefined1 *)(local_c0 + 0xd) = 1;
    local_b8 = *local_c0;
    local_b4 = local_c0[1];
    local_10c = local_c0[2];
    local_108 = local_c0[3];
    local_f0 = local_c0[4];
    local_ec = local_c0[5];
    local_d8 = PTR_DAT_004fca90;
    local_d4 = 3;
    FUN_00098a20(0,&local_48);
    local_48 = 
    PTR_printerApi_service_file_processor___Processor__process3MF_UpdateResumeArtifacts_func3_004fca94
    ;
    local_44 = &local_b8;
    local_40 = (undefined ***)&local_10c;
    local_3c = &local_f0;
    local_38 = &local_d8;
    local_34 = 0;
    local_1c0._0_4_ = &local_48;
    printerApi_service_poweroff_resume_mutatePrintRecord();
    if (local_1c0._4_4_ != (undefined **)0x0) {
      local_15c = local_1c0._4_4_;
      uStack_1b4 = *(undefined4 *)PTR_DAT_004fca9c;
      local_11c = local_1b8;
      local_1c0._0_4_ = local_1c0._4_4_;
      local_1c0._4_4_ = local_1b8;
      local_1b8 = *(undefined ***)PTR_DAT_004fca98;
      FUN_000a2c04();
      if ((char)local_1b0 == '\0') {
        local_18 = (undefined *)0x0;
        if (local_15c != (undefined4 *)0x0) {
          local_18 = (undefined *)local_15c[1];
        }
        local_14 = local_11c;
        local_1c0._0_4_ = (undefined **)PTR_DAT_004fcaa0;
        local_1c0._4_4_ = (undefined **)0x2f;
        local_1b8 = &local_18;
        uStack_1b4 = 1;
        local_1b0 = 1;
        printerApi_common_logger_Warnf();
      }
    }
    local_1c0._0_4_ = (undefined **)in_stack_00000008;
    local_1c0._4_4_ = (undefined **)in_stack_0000000c;
    internal_filepathlite_Base();
    local_1c0._0_4_ = (undefined **)local_c0[2];
    local_1c0._4_4_ = (undefined **)local_c0[3];
    local_120 = local_1b8;
    local_160 = uStack_1b4;
    internal_filepathlite_Base();
    local_124 = local_1b8;
    local_164 = uStack_1b4;
    FUN_00098a20(0,&local_30);
    local_1c0._0_4_ = local_120;
    local_1c0._4_4_ = (undefined **)local_160;
    FUN_0008a578();
    local_30 = PTR_SUB_004fcaa4;
    local_2c = local_1b8;
    local_1c0._0_4_ = local_124;
    local_1c0._4_4_ = (undefined **)local_164;
    FUN_0008a578();
    local_28 = PTR_SUB_004fcaa4;
    local_24 = local_1b8;
    local_1c0._0_4_ = local_134;
    local_1c0._4_4_ = (undefined **)local_130;
    FUN_0008a4bc();
    local_20 = PTR_DAT_004fcaa8;
    local_1c = local_1b8;
    local_1c0._0_4_ = (undefined **)PTR_DAT_004fcaac;
    local_1c0._4_4_ = (undefined **)0x45;
    local_1b8 = &local_30;
    uStack_1b4 = 3;
    local_1b0 = 3;
    printerApi_common_logger_Infof();
    if (0xd < local_130 || local_130 == 0xd && DAT_004fcab0 < local_134) {
      FUN_00098a28(0,&local_10,local_130);
      FUN_0008a4bc();
      local_10 = PTR_DAT_004fcaa8;
      local_c = local_1b8;
      local_1c0._0_4_ = (undefined **)in_stack_00000008;
      local_1c0._4_4_ = (undefined **)in_stack_0000000c;
      FUN_0008a578();
      local_8 = PTR_SUB_004fcaa4;
      local_4 = local_1b8;
      local_1c0._0_4_ = (undefined **)DAT_004fcab4;
      local_1c0._4_4_ = (undefined **)0x43;
      local_1b8 = &local_10;
      uStack_1b4 = 2;
      local_1b0 = 2;
      printerApi_common_logger_Warnf();
    }
    return;
  }
  local_18 = *(undefined **)(extraout_r3 + 4);
  local_6c = local_168;
  local_14 = (undefined **)local_168;
  local_1c0._0_4_ = (undefined **)PTR_DAT_004fc72c;
  local_1c0._4_4_ = (undefined **)0x26;
  local_1b8 = &local_18;
  uStack_1b4 = 1;
  local_1b0 = 1;
  local_13c = extraout_r3;
  printerApi_common_logger_Errorf();
  local_b0 = 0;
  local_ac = 0;
  local_104 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e4 = 0;
  local_d0 = PTR_DAT_004fc730;
  local_cc = 5;
  FUN_00098a20(0,&local_48);
  local_48 = 
  PTR_printerApi_service_file_processor___Processor__process3MF_UpdateResumeArtifacts_func2_004fc734
  ;
  local_44 = &local_b0;
  local_40 = (undefined ***)&local_104;
  local_3c = &local_e8;
  local_38 = &local_d0;
  local_34 = 0;
  local_1c0._0_4_ = &local_48;
  printerApi_service_poweroff_resume_mutatePrintRecord();
  if (local_1c0._4_4_ != (undefined **)0x0) {
    local_18 = (undefined *)0x0;
    if (local_1c0._4_4_ != (undefined **)0x0) {
      local_18 = *(undefined **)((int)local_1c0._4_4_ + 4);
    }
    local_14 = local_1b8;
    local_1c0._0_4_ = (undefined **)PTR_DAT_004fc738;
    local_1c0._4_4_ = (undefined **)0x44;
    local_1b8 = &local_18;
    uStack_1b4 = 1;
    local_1b0 = 1;
    printerApi_common_logger_Warnf();
  }
  if (local_13c == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    local_18 = *(undefined **)(local_13c + 4);
  }
  local_14 = (undefined **)local_6c;
  local_1c0._0_4_ = (undefined **)PTR_DAT_004fc73c;
  local_1c0._4_4_ = (undefined **)0x12;
  local_1b8 = &local_18;
  uStack_1b4 = 1;
  local_1b0 = 1;
  FUN_00130144();
  return;
}



/* printerApi/service/file_processor.(*Processor).process3MF.UpdateResumeArtifacts.func3 @ 004fcab8 (size 1108) */

void printerApi_service_file_processor___Processor__process3MF_UpdateResumeArtifacts_func3(void)

{
  char cVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar2;
  undefined4 extraout_r1_03;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *extraout_r2_01;
  undefined4 *extraout_r2_02;
  undefined4 *puVar3;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar4;
  int in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  char cStack_24;
  undefined1 uStack_1d;
  code *pcStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  puStack_10 = *(undefined4 **)(unaff_r7 + 8);
  puStack_c = *(undefined4 **)(unaff_r7 + 0xc);
  puStack_8 = *(undefined4 **)(unaff_r7 + 0x10);
  cVar1 = *(char *)(unaff_r7 + 0x14);
  puStack_4 = *(undefined4 **)(unaff_r7 + 4);
  if (*(int *)(in_stack_00000004 + 0x38) == 0) {
    FUN_0008b6b8();
    if (*DAT_004fcf10 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(undefined4 *)(in_stack_00000004 + 0x38);
      uStack_38 = extraout_r1;
    }
    *(undefined4 *)(in_stack_00000004 + 0x38) = uStack_38;
  }
  FUN_00148fb4();
  puStack_4[1] = uStack_2c;
  uVar2 = uStack_30;
  puVar3 = puStack_4;
  if (*DAT_004fcf10 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = *extraout_r2;
    uVar2 = extraout_r1_00;
    puVar3 = extraout_r2;
  }
  *puVar3 = uVar2;
  FUN_00148fb4();
  puStack_10[1] = uStack_2c;
  uVar2 = uStack_30;
  puVar3 = puStack_10;
  if (*DAT_004fcf10 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_01;
    unaff_r8[1] = *extraout_r2_00;
    uVar2 = extraout_r1_01;
    puVar3 = extraout_r2_00;
  }
  *puVar3 = uVar2;
  FUN_00148fb4();
  puStack_c[1] = uStack_2c;
  uVar2 = uStack_30;
  puVar3 = puStack_c;
  if (*DAT_004fcf10 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_02;
    unaff_r8[1] = *extraout_r2_01;
    uVar2 = extraout_r1_02;
    puVar3 = extraout_r2_01;
  }
  *puVar3 = uVar2;
  FUN_00148fb4();
  puStack_8[1] = uStack_2c;
  puVar3 = puStack_8;
  if (*DAT_004fcf10 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_03;
    unaff_r8[1] = *extraout_r2_02;
    uStack_30 = extraout_r1_03;
    puVar3 = extraout_r2_02;
  }
  *puVar3 = uStack_30;
  uStack_1d = 0;
  pcStack_1c = DAT_004fcf14;
  iStack_18 = in_stack_00000004;
  puStack_14 = &uStack_1d;
  (*DAT_004fcf14)();
  (*pcStack_1c)();
  (*pcStack_1c)();
  (*pcStack_1c)();
  uVar2 = DAT_004fcf2c;
  if (cVar1 == '\0') {
    FUN_0008e314();
    uVar2 = DAT_004fcf2c;
    if (cStack_24 != '\0') {
      FUN_00021c74();
      printerApi_common_utils_cast_ToBool();
      uStack_30._0_1_ = (char)uVar2;
      if ((char)uStack_30 != '\0') {
        FUN_0008e7bc();
        *puStack_28 = DAT_004fcf30;
        if (*DAT_004fcf10 != 0) {
          uVar4 = FUN_00098678(puStack_28,puStack_28[1]);
          puStack_28 = (undefined4 *)uVar4;
          *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
        }
        puStack_28[1] = DAT_004fcf38;
      }
    }
  }
  else {
    FUN_00021c74();
    printerApi_common_utils_cast_ToBool();
    uStack_30._0_1_ = (char)uVar2;
    if ((char)uStack_30 == '\0') {
      FUN_0008e7bc();
      *puStack_28 = DAT_004fcf30;
      if (*DAT_004fcf10 != 0) {
        uVar4 = FUN_00098678(puStack_28,puStack_28[1]);
        puStack_28 = (undefined4 *)uVar4;
        *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
      }
      puStack_28[1] = DAT_004fcf34;
    }
  }
  return;
}



/* printerApi/service/file_processor.(*Processor).process3MF.UpdateResumeArtifacts.func3.1 @ 004fcf3c (size 392) */

void printerApi_service_file_processor___Processor__process3MF_UpdateResumeArtifacts_func3_1(void)

{
  int iVar1;
  undefined1 *puVar2;
  int unaff_r7;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  int local_18;
  char local_14;
  undefined4 *local_10;
  
  while (iVar1 = in_stack_00000008, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  puVar2 = *(undefined1 **)(unaff_r7 + 8);
  local_18 = in_stack_00000004;
  FUN_00021c74();
  printerApi_common_utils_cast_ToString();
  FUN_00148fb4();
  if (in_stack_00000010 != 0) {
    if (in_stack_00000010 == iVar1) {
      local_18 = iVar1;
      FUN_000150d4();
      local_14 = (char)iVar1;
      if (local_14 != '\0') {
        return;
      }
    }
    FUN_0008a578();
    FUN_0008e7bc();
    *local_10 = DAT_004fd0cc;
    if (*DAT_004fd0d0 != 0) {
      local_10 = (undefined4 *)FUN_00098688();
      *unaff_r8 = local_18;
      unaff_r8[1] = local_10[1];
    }
    local_10[1] = local_18;
    *puVar2 = 1;
    return;
  }
  if (iVar1 != 0) {
    FUN_000220dc();
    *puVar2 = 1;
  }
  return;
}



/* printerApi/service/file_processor.(*Processor).process3MF.UpdateResumeArtifacts.func2 @ 004fd0d4 (size 1108) */

void printerApi_service_file_processor___Processor__process3MF_UpdateResumeArtifacts_func2(void)

{
  char cVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar2;
  undefined4 extraout_r1_03;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *extraout_r2_01;
  undefined4 *extraout_r2_02;
  undefined4 *puVar3;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar4;
  int in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  char cStack_24;
  undefined1 uStack_1d;
  code *pcStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  puStack_10 = *(undefined4 **)(unaff_r7 + 8);
  puStack_c = *(undefined4 **)(unaff_r7 + 0xc);
  puStack_8 = *(undefined4 **)(unaff_r7 + 0x10);
  cVar1 = *(char *)(unaff_r7 + 0x14);
  puStack_4 = *(undefined4 **)(unaff_r7 + 4);
  if (*(int *)(in_stack_00000004 + 0x38) == 0) {
    FUN_0008b6b8();
    if (*DAT_004fd52c != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(undefined4 *)(in_stack_00000004 + 0x38);
      uStack_38 = extraout_r1;
    }
    *(undefined4 *)(in_stack_00000004 + 0x38) = uStack_38;
  }
  FUN_00148fb4();
  puStack_4[1] = uStack_2c;
  uVar2 = uStack_30;
  puVar3 = puStack_4;
  if (*DAT_004fd52c != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = *extraout_r2;
    uVar2 = extraout_r1_00;
    puVar3 = extraout_r2;
  }
  *puVar3 = uVar2;
  FUN_00148fb4();
  puStack_10[1] = uStack_2c;
  uVar2 = uStack_30;
  puVar3 = puStack_10;
  if (*DAT_004fd52c != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_01;
    unaff_r8[1] = *extraout_r2_00;
    uVar2 = extraout_r1_01;
    puVar3 = extraout_r2_00;
  }
  *puVar3 = uVar2;
  FUN_00148fb4();
  puStack_c[1] = uStack_2c;
  uVar2 = uStack_30;
  puVar3 = puStack_c;
  if (*DAT_004fd52c != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_02;
    unaff_r8[1] = *extraout_r2_01;
    uVar2 = extraout_r1_02;
    puVar3 = extraout_r2_01;
  }
  *puVar3 = uVar2;
  FUN_00148fb4();
  puStack_8[1] = uStack_2c;
  puVar3 = puStack_8;
  if (*DAT_004fd52c != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_03;
    unaff_r8[1] = *extraout_r2_02;
    uStack_30 = extraout_r1_03;
    puVar3 = extraout_r2_02;
  }
  *puVar3 = uStack_30;
  uStack_1d = 0;
  pcStack_1c = DAT_004fd530;
  iStack_18 = in_stack_00000004;
  puStack_14 = &uStack_1d;
  (*DAT_004fd530)();
  (*pcStack_1c)();
  (*pcStack_1c)();
  (*pcStack_1c)();
  uVar2 = DAT_004fd548;
  if (cVar1 == '\0') {
    FUN_0008e314();
    uVar2 = DAT_004fd548;
    if (cStack_24 != '\0') {
      FUN_00021c74();
      printerApi_common_utils_cast_ToBool();
      uStack_30._0_1_ = (char)uVar2;
      if ((char)uStack_30 != '\0') {
        FUN_0008e7bc();
        *puStack_28 = DAT_004fd54c;
        if (*DAT_004fd52c != 0) {
          uVar4 = FUN_00098678(puStack_28,puStack_28[1]);
          puStack_28 = (undefined4 *)uVar4;
          *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
        }
        puStack_28[1] = DAT_004fd554;
      }
    }
  }
  else {
    FUN_00021c74();
    printerApi_common_utils_cast_ToBool();
    uStack_30._0_1_ = (char)uVar2;
    if ((char)uStack_30 == '\0') {
      FUN_0008e7bc();
      *puStack_28 = DAT_004fd54c;
      if (*DAT_004fd52c != 0) {
        uVar4 = FUN_00098678(puStack_28,puStack_28[1]);
        puStack_28 = (undefined4 *)uVar4;
        *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
      }
      puStack_28[1] = DAT_004fd550;
    }
  }
  return;
}



/* printerApi/service/file_processor.(*Processor).process3MF.UpdateResumeArtifacts.func2.1 @ 004fd558 (size 392) */

void printerApi_service_file_processor___Processor__process3MF_UpdateResumeArtifacts_func2_1(void)

{
  int iVar1;
  undefined1 *puVar2;
  int unaff_r7;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  int local_18;
  char local_14;
  undefined4 *local_10;
  
  while (iVar1 = in_stack_00000008, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  puVar2 = *(undefined1 **)(unaff_r7 + 8);
  local_18 = in_stack_00000004;
  FUN_00021c74();
  printerApi_common_utils_cast_ToString();
  FUN_00148fb4();
  if (in_stack_00000010 != 0) {
    if (in_stack_00000010 == iVar1) {
      local_18 = iVar1;
      FUN_000150d4();
      local_14 = (char)iVar1;
      if (local_14 != '\0') {
        return;
      }
    }
    FUN_0008a578();
    FUN_0008e7bc();
    *local_10 = DAT_004fd6e8;
    if (*DAT_004fd6ec != 0) {
      local_10 = (undefined4 *)FUN_00098688();
      *unaff_r8 = local_18;
      unaff_r8[1] = local_10[1];
    }
    local_10[1] = local_18;
    *puVar2 = 1;
    return;
  }
  if (iVar1 != 0) {
    FUN_000220dc();
    *puVar2 = 1;
  }
  return;
}



/* printerApi/service/file_processor.(*Processor).process3MF.UpdateResumeArtifacts.func1 @ 004fd6f0 (size 1108) */

void printerApi_service_file_processor___Processor__process3MF_UpdateResumeArtifacts_func1(void)

{
  char cVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar2;
  undefined4 extraout_r1_03;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *extraout_r2_01;
  undefined4 *extraout_r2_02;
  undefined4 *puVar3;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar4;
  int in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  char cStack_24;
  undefined1 uStack_1d;
  code *pcStack_1c;
  int iStack_18;
  undefined1 *puStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  puStack_10 = *(undefined4 **)(unaff_r7 + 8);
  puStack_c = *(undefined4 **)(unaff_r7 + 0xc);
  puStack_8 = *(undefined4 **)(unaff_r7 + 0x10);
  cVar1 = *(char *)(unaff_r7 + 0x14);
  puStack_4 = *(undefined4 **)(unaff_r7 + 4);
  if (*(int *)(in_stack_00000004 + 0x38) == 0) {
    FUN_0008b6b8();
    if (*DAT_004fdb48 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(undefined4 *)(in_stack_00000004 + 0x38);
      uStack_38 = extraout_r1;
    }
    *(undefined4 *)(in_stack_00000004 + 0x38) = uStack_38;
  }
  FUN_00148fb4();
  puStack_4[1] = uStack_2c;
  uVar2 = uStack_30;
  puVar3 = puStack_4;
  if (*DAT_004fdb48 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = *extraout_r2;
    uVar2 = extraout_r1_00;
    puVar3 = extraout_r2;
  }
  *puVar3 = uVar2;
  FUN_00148fb4();
  puStack_10[1] = uStack_2c;
  uVar2 = uStack_30;
  puVar3 = puStack_10;
  if (*DAT_004fdb48 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_01;
    unaff_r8[1] = *extraout_r2_00;
    uVar2 = extraout_r1_01;
    puVar3 = extraout_r2_00;
  }
  *puVar3 = uVar2;
  FUN_00148fb4();
  puStack_c[1] = uStack_2c;
  uVar2 = uStack_30;
  puVar3 = puStack_c;
  if (*DAT_004fdb48 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_02;
    unaff_r8[1] = *extraout_r2_01;
    uVar2 = extraout_r1_02;
    puVar3 = extraout_r2_01;
  }
  *puVar3 = uVar2;
  FUN_00148fb4();
  puStack_8[1] = uStack_2c;
  puVar3 = puStack_8;
  if (*DAT_004fdb48 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_03;
    unaff_r8[1] = *extraout_r2_02;
    uStack_30 = extraout_r1_03;
    puVar3 = extraout_r2_02;
  }
  *puVar3 = uStack_30;
  uStack_1d = 0;
  pcStack_1c = DAT_004fdb4c;
  iStack_18 = in_stack_00000004;
  puStack_14 = &uStack_1d;
  (*DAT_004fdb4c)();
  (*pcStack_1c)();
  (*pcStack_1c)();
  (*pcStack_1c)();
  uVar2 = DAT_004fdb64;
  if (cVar1 == '\0') {
    FUN_0008e314();
    uVar2 = DAT_004fdb64;
    if (cStack_24 != '\0') {
      FUN_00021c74();
      printerApi_common_utils_cast_ToBool();
      uStack_30._0_1_ = (char)uVar2;
      if ((char)uStack_30 != '\0') {
        FUN_0008e7bc();
        *puStack_28 = DAT_004fdb68;
        if (*DAT_004fdb48 != 0) {
          uVar4 = FUN_00098678(puStack_28,puStack_28[1]);
          puStack_28 = (undefined4 *)uVar4;
          *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
        }
        puStack_28[1] = DAT_004fdb70;
      }
    }
  }
  else {
    FUN_00021c74();
    printerApi_common_utils_cast_ToBool();
    uStack_30._0_1_ = (char)uVar2;
    if ((char)uStack_30 == '\0') {
      FUN_0008e7bc();
      *puStack_28 = DAT_004fdb68;
      if (*DAT_004fdb48 != 0) {
        uVar4 = FUN_00098678(puStack_28,puStack_28[1]);
        puStack_28 = (undefined4 *)uVar4;
        *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
      }
      puStack_28[1] = DAT_004fdb6c;
    }
  }
  return;
}



/* printerApi/service/file_processor.(*Processor).process3MF.UpdateResumeArtifacts.func1.1 @ 004fdb74 (size 392) */

void printerApi_service_file_processor___Processor__process3MF_UpdateResumeArtifacts_func1_1(void)

{
  int iVar1;
  undefined1 *puVar2;
  int unaff_r7;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  int local_18;
  char local_14;
  undefined4 *local_10;
  
  while (iVar1 = in_stack_00000008, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  puVar2 = *(undefined1 **)(unaff_r7 + 8);
  local_18 = in_stack_00000004;
  FUN_00021c74();
  printerApi_common_utils_cast_ToString();
  FUN_00148fb4();
  if (in_stack_00000010 != 0) {
    if (in_stack_00000010 == iVar1) {
      local_18 = iVar1;
      FUN_000150d4();
      local_14 = (char)iVar1;
      if (local_14 != '\0') {
        return;
      }
    }
    FUN_0008a578();
    FUN_0008e7bc();
    *local_10 = DAT_004fdd04;
    if (*DAT_004fdd08 != 0) {
      local_10 = (undefined4 *)FUN_00098688();
      *unaff_r8 = local_18;
      unaff_r8[1] = local_10[1];
    }
    local_10[1] = local_18;
    *puVar2 = 1;
    return;
  }
  if (iVar1 != 0) {
    FUN_000220dc();
    *puVar2 = 1;
  }
  return;
}



/* printerApi/service/file_processor.(*Processor).processGCode @ 004fdd0c (size 384) */

void printerApi_service_file_processor___Processor__processGCode(void)

{
  undefined4 uVar1;
  undefined **extraout_r2;
  undefined **extraout_r2_00;
  undefined **ppuVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined **in_stack_00000008;
  undefined *in_stack_0000000c;
  undefined4 *in_stack_00000034;
  undefined4 in_stack_0000004c;
  undefined **local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined *local_10;
  undefined *local_c;
  undefined *local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4fde88;
    FUN_00096bb8();
  }
  local_38 = in_stack_00000008;
  local_34 = (undefined4 *)in_stack_0000000c;
  internal_filepathlite_Base();
  FUN_00098a28(0,&local_10,local_2c,local_30,unaff_lr);
  local_10 = PTR_SUB_004fde90;
  local_c = PTR_DAT_004fde94;
  FUN_0008a578();
  local_8 = PTR_SUB_004fde90;
  local_4 = local_30;
  local_38 = &local_10;
  local_34 = (undefined **)0x2;
  local_30 = 2;
  uVar1 = printerApi_common_logger_Debug();
  FUN_00098e14(uVar1,&stack0x00000038,&local_38);
  FUN_0010327c();
  local_18 = local_24;
  local_1c = local_20;
  local_38 = (undefined **)PTR_DAT_004fde98;
  FUN_0001eed8();
  local_34[1] = in_stack_0000000c;
  local_14 = local_34;
  ppuVar2 = in_stack_00000008;
  if (*(int *)PTR_DAT_004fde9c != 0) {
    local_14 = (undefined4 *)FUN_00098678();
    *unaff_r8 = extraout_r2;
    ppuVar2 = extraout_r2;
  }
  *local_14 = ppuVar2;
  local_14[3] = in_stack_0000000c;
  ppuVar2 = in_stack_00000008;
  if (*(int *)PTR_DAT_004fde9c != 0) {
    local_14 = (undefined4 *)FUN_00098678();
    *unaff_r8 = extraout_r2_00;
    ppuVar2 = extraout_r2_00;
  }
  local_14[2] = ppuVar2;
  local_14[5] = (undefined *)0x0;
  local_14[4] = (undefined *)0x0;
  local_14[6] = PTR_DAT_004fdea0;
  local_14[7] = PTR_DAT_004fdea4;
  *(undefined1 *)(local_14 + 8) = 0;
  local_14[9] = (undefined *)0x0;
  local_14[10] = (undefined *)0x0;
  local_14[0xb] = local_18;
  local_14[0xc] = local_1c;
  *(undefined1 *)(local_14 + 0xd) = 0;
  if (in_stack_00000034 != (undefined4 *)0x0) {
    local_38 = (undefined **)local_14;
    (*(code *)*in_stack_00000034)();
  }
  return;
}



