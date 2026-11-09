// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/wifi   functions: 12
/* printerApi/service/wifi.init @ 0049cfac (size 100) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_wifi_init(void)

{
  undefined4 extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x49d00c;
    FUN_00096bb8();
  }
  FUN_0040c2b0();
  if (*_UNK_0049d018 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *_UNK_0049d01c;
    uStack_4 = extraout_r1;
  }
  *_UNK_0049d01c = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x0049d000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/wifi.WifiInfos.Len @ 0049d020 (size 12) */

void printerApi_service_wifi_WifiInfos_Len(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 uStack00000010;
  
  uStack00000010 = in_stack_00000008;
                    /* WARNING: Could not recover jumptable at 0x0049d028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/wifi.WifiInfos.Swap @ 0049d030 (size 228) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_wifi_WifiInfos_Swap(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int extraout_r3;
  int iVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x48) = unaff_lr;
      uVar4 = *(uint *)((int)register0x00000054 + 8);
      uVar1 = *(uint *)((int)register0x00000054 + 0x10);
      uVar8 = uVar4 == uVar1;
      if (uVar1 < uVar4) {
        iVar2 = *(int *)((int)register0x00000054 + 4) + uVar1 * 0x30;
        *(int *)((int)register0x00000054 + -0x34) = iVar2;
        FUN_00098ddc(iVar2,iVar2,(undefined1 *)((int)register0x00000054 + -0x30));
        uVar1 = *(uint *)((int)register0x00000054 + 0x14);
        uVar8 = uVar4 == uVar1;
        if (uVar1 < uVar4) {
          iVar6 = *_UNK_0049d118;
          iVar2 = uVar1 * 3;
          iVar5 = extraout_r3 + uVar1 * 0x30;
          *(int *)((int)register0x00000054 + -0x38) = iVar5;
          if (iVar6 != 0) {
            *(undefined4 *)((int)register0x00000054 + -0x44) = _UNK_0049d11c;
            *(undefined4 *)((int)register0x00000054 + -0x40) =
                 *(undefined4 *)((int)register0x00000054 + -0x34);
            *(int *)((int)register0x00000054 + -0x3c) = iVar5;
            iVar2 = FUN_00022914();
            iVar5 = *(int *)((int)register0x00000054 + -0x38);
          }
          FUN_00098ddc(iVar2,iVar5,*(undefined4 *)((int)register0x00000054 + -0x34));
          uVar3 = 0;
          if (*_UNK_0049d118 != 0) {
            *(undefined4 *)((int)register0x00000054 + -0x44) = _UNK_0049d11c;
            *(undefined4 *)((int)register0x00000054 + -0x40) =
                 *(undefined4 *)((int)register0x00000054 + -0x38);
            *(undefined1 **)((int)register0x00000054 + -0x3c) =
                 (undefined1 *)((int)register0x00000054 + -0x30);
            uVar3 = FUN_00022914();
          }
          FUN_00098ddc(uVar3,(undefined1 *)((int)register0x00000054 + -0x30),
                       *(undefined4 *)((int)register0x00000054 + -0x38));
                    /* WARNING: Could not recover jumptable at 0x0049d0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x48))();
          return;
        }
        FUN_000986f8(uVar1,uVar4);
      }
      param_1 = FUN_000986f8();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x48);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x49d110;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/wifi.WifiInfos.Less @ 0049d120 (size 148) */

void printerApi_service_wifi_WifiInfos_Less(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      uVar4 = *(uint *)((int)register0x00000054 + 8);
      uVar1 = *(uint *)((int)register0x00000054 + 0x10);
      uVar9 = uVar4 == uVar1;
      if (uVar1 < uVar4) {
        iVar5 = *(int *)((int)register0x00000054 + 4) + uVar1 * 0x30;
        uVar1 = *(uint *)((int)register0x00000054 + 0x14);
        uVar9 = uVar4 == uVar1;
        if (uVar1 < uVar4) {
          uVar6 = *(undefined4 *)(iVar5 + 0x1c);
          iVar2 = *(int *)((int)register0x00000054 + 4) + uVar1 * 0x30;
          uVar7 = *(undefined4 *)(iVar2 + 0x18);
          uVar3 = *(undefined4 *)(iVar2 + 0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x14) = *(undefined4 *)(iVar5 + 0x18);
          *(undefined4 *)((int)register0x00000054 + -0x10) = uVar6;
          *(undefined4 *)((int)register0x00000054 + -0xc) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -8) = uVar3;
          FUN_00014fd4();
          *(bool *)((int)register0x00000054 + 0x18) = *(int *)((int)register0x00000054 + -4) < 0;
                    /* WARNING: Could not recover jumptable at 0x0049d198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x18))();
          return;
        }
        FUN_000986f8();
      }
      param_1 = FUN_000986f8();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x49d1b0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/wifi.(*WifiManager).WifiLists @ 0049d1b4 (size 2124) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_wifi___WifiManager__WifiLists(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int extraout_r2;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 extraout_r2_00;
  undefined *puVar7;
  undefined4 extraout_r3;
  undefined *extraout_r3_00;
  int iVar8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  bool bVar10;
  undefined1 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x26c)) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x2ec);
      *(undefined4 *)((int)register0x00000054 + -0x2ec) = unaff_lr;
      FUN_00098a20(0,(undefined1 *)((int)register0x00000054 + -0x24));
      *(undefined4 *)((int)register0x00000054 + -0x20) = 2;
      *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0049d9e0;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 5;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0049d9e4;
      *(undefined4 *)((int)register0x00000054 + -0x10) = 4;
      *(undefined **)((int)register0x00000054 + -0x14) =
           PTR_s_scan_x00NONEWPA_ssidAUTHdbus_to_p_0077367d_0x2f3_0049d9e8;
      *(undefined **)((int)register0x00000054 + -0x2e8) =
           PTR_s_wpa_clikillall_error_ServiceConf_00774847_0x7a6_0049d9ec;
      *(undefined4 *)((int)register0x00000054 + -0x2e4) = 7;
      *(undefined1 **)((int)register0x00000054 + -0x2e0) =
           (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x2dc) = 3;
      *(undefined4 *)((int)register0x00000054 + -0x2d8) = 3;
      FUN_0015b708();
      *(undefined4 *)((int)register0x00000054 + -0x2e8) =
           *(undefined4 *)((int)register0x00000054 + -0x2d4);
      FUN_0015cd18();
      iVar4 = *(int *)((int)register0x00000054 + -0x2e4);
      if (iVar4 != 0) {
        *(int *)((int)register0x00000054 + -0x2a4) = iVar4;
        *(undefined4 *)((int)register0x00000054 + -0x250) =
             *(undefined4 *)((int)register0x00000054 + -0x2e0);
        pcVar5 = *(code **)(iVar4 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x2e8) =
             *(undefined4 *)((int)register0x00000054 + -0x2e0);
        (*pcVar5)();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x2e4);
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x2e0);
        *(undefined4 *)((int)register0x00000054 + -0x2e8) = 0;
        *(undefined **)((int)register0x00000054 + -0x2e4) = PTR_DAT_0049da0c;
        *(undefined4 *)((int)register0x00000054 + -0x2e0) = 0x10;
        *(undefined4 *)((int)register0x00000054 + -0x2dc) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x2d8) = uVar6;
        FUN_000715a4();
        *(undefined4 *)((int)register0x00000054 + -0x2e8) =
             *(undefined4 *)((int)register0x00000054 + -0x2d4);
        *(undefined4 *)((int)register0x00000054 + -0x2e4) =
             *(undefined4 *)((int)register0x00000054 + -0x2d0);
        *(undefined4 *)((int)register0x00000054 + -0x2e0) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x2dc) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x2d8) = 0;
        printerApi_common_logger_Errorf();
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x2a4);
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x250);
                    /* WARNING: Could not recover jumptable at 0x0049d544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x2ec))();
        return;
      }
      iVar4 = *(int *)((int)register0x00000054 + 0xc);
      if (0 < iVar4 || iVar4 == 0 && *(int *)((int)register0x00000054 + 8) != 0) {
        *(int *)((int)register0x00000054 + -0x2e8) = *(int *)((int)register0x00000054 + 8);
        *(int *)((int)register0x00000054 + -0x2e4) = iVar4;
        FUN_000953d0();
      }
      FUN_00098a20(0,(undefined1 *)((int)register0x00000054 + -0x24));
      *(undefined4 *)((int)register0x00000054 + -0x20) = 2;
      *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0049d9e0;
      *(undefined4 *)((int)register0x00000054 + -0x18) = 5;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0049d9e4;
      *(undefined4 *)((int)register0x00000054 + -0x10) = 0xb;
      *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_0049d9f0;
      *(undefined **)((int)register0x00000054 + -0x2e8) =
           PTR_s_wpa_clikillall_error_ServiceConf_00774847_0x7a6_0049d9ec;
      *(undefined4 *)((int)register0x00000054 + -0x2e4) = 7;
      *(undefined1 **)((int)register0x00000054 + -0x2e0) =
           (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x2dc) = 3;
      *(undefined4 *)((int)register0x00000054 + -0x2d8) = 3;
      FUN_0015b708();
      *(undefined4 *)((int)register0x00000054 + -0x290) =
           *(undefined4 *)((int)register0x00000054 + -0x2d4);
      *(undefined **)((int)register0x00000054 + -0x2e8) = PTR_DAT_0049d9f4;
      FUN_0001eed8();
      iVar4 = *(int *)((int)register0x00000054 + -0x2e4);
      *(undefined4 *)(iVar4 + 4) = 0;
      iVar8 = *(int *)((int)register0x00000054 + -0x290);
      *(undefined **)(iVar8 + 0x30) = PTR_DAT_0049d9f8;
      if (*(int *)PTR_DAT_0049d9fc != 0) {
        FUN_00098688();
        _DAT_0000000b = *(undefined4 *)(iVar8 + 0x34);
        iVar4 = extraout_r2;
        _DAT_00000007 = extraout_r2;
      }
      *(int *)((int)register0x00000054 + -4) = iVar4;
      *(int *)(iVar8 + 0x34) = iVar4;
      *(int *)((int)register0x00000054 + -0x2e8) = iVar8;
      FUN_0015cd18();
      iVar4 = *(int *)((int)register0x00000054 + -0x2e4);
      if (iVar4 != 0) {
        *(int *)((int)register0x00000054 + -0x2a8) = iVar4;
        *(undefined4 *)((int)register0x00000054 + -0x254) =
             *(undefined4 *)((int)register0x00000054 + -0x2e0);
        pcVar5 = *(code **)(iVar4 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x2e8) =
             *(undefined4 *)((int)register0x00000054 + -0x2e0);
        (*pcVar5)();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x2e4);
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x2e0);
        *(undefined4 *)((int)register0x00000054 + -0x2e8) = 0;
        *(undefined **)((int)register0x00000054 + -0x2e4) = PTR_DAT_0049da08;
        *(undefined4 *)((int)register0x00000054 + -0x2e0) = 0x17;
        *(undefined4 *)((int)register0x00000054 + -0x2dc) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x2d8) = uVar6;
        FUN_000715a4();
        *(undefined4 *)((int)register0x00000054 + -0x2e8) =
             *(undefined4 *)((int)register0x00000054 + -0x2d4);
        *(undefined4 *)((int)register0x00000054 + -0x2e4) =
             *(undefined4 *)((int)register0x00000054 + -0x2d0);
        *(undefined4 *)((int)register0x00000054 + -0x2e0) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x2dc) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x2d8) = 0;
        printerApi_common_logger_Errorf();
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x2a8);
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x254);
                    /* WARNING: Could not recover jumptable at 0x0049d4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x2ec))();
        return;
      }
      iVar4 = *(int *)(*(int *)((int)register0x00000054 + -4) + 4);
      uVar1 = *(uint *)(*(int *)((int)register0x00000054 + -4) + 8);
      if (uVar1 <= (uint)-iVar4) {
        *(int *)((int)register0x00000054 + -0x2e8) = iVar4;
        *(uint *)((int)register0x00000054 + -0x2e4) = uVar1;
        *(undefined **)((int)register0x00000054 + -0x2e0) = PTR_DAT_0049da00;
        *(undefined4 *)((int)register0x00000054 + -0x2dc) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x2d8) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x2d4) = 0xffffffff;
        FUN_00146be8();
        if (*(int *)((int)register0x00000054 + -0x2cc) == 0) {
          *(undefined **)((int)register0x00000054 + 0x10) = PTR_DAT_0049da04;
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x0049d41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x2ec))();
          return;
        }
        *(int *)((int)register0x00000054 + -0x2c0) = *(int *)((int)register0x00000054 + -0x2cc);
        *(undefined4 *)((int)register0x00000054 + -0x298) =
             *(undefined4 *)((int)register0x00000054 + -0x2d0);
        uVar2 = FUN_00098a1c(0,(undefined1 *)((int)register0x00000054 + -0x80));
        FUN_0009886c(uVar2,(undefined1 *)((int)register0x00000054 + -0x24c));
        *(undefined1 **)((int)register0x00000054 + -0x74) =
             (undefined1 *)((int)register0x00000054 + -0x24c);
        FUN_00065dd4();
        *(undefined4 *)((int)register0x00000054 + -0x78) =
             *(undefined4 *)((int)register0x00000054 + -0x2e8);
        iVar4 = 0;
        uVar1 = 0;
        uVar2 = 0;
        puVar7 = PTR_DAT_0049da04;
        while( true ) {
          *(undefined **)((int)register0x00000054 + -0x28c) = puVar7;
          *(undefined4 *)((int)register0x00000054 + -0x2b4) = uVar2;
          *(uint *)((int)register0x00000054 + -0x2b0) = uVar1;
          if (*(int *)((int)register0x00000054 + -0x2c0) <= iVar4) break;
          *(int *)((int)register0x00000054 + -0x29c) = iVar4;
          uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x298) + iVar4 * 8 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x2e8) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + -0x298) + iVar4 * 8);
          *(undefined4 *)((int)register0x00000054 + -0x2e4) = uVar2;
          FUN_00146f38();
          if (*(int *)((int)register0x00000054 + -0x2dc) == 5) {
            iVar4 = *(int *)((int)register0x00000054 + -0x2e0);
            *(int *)((int)register0x00000054 + -600) = iVar4;
            iVar8 = *(int *)(iVar4 + 0x24);
            if (iVar8 == 0) {
              bVar10 = true;
            }
            else {
              *(undefined4 *)((int)register0x00000054 + -0x2e8) = *(undefined4 *)(iVar4 + 0x20);
              *(int *)((int)register0x00000054 + -0x2e4) = iVar8;
              *(undefined **)((int)register0x00000054 + -0x2e0) =
                   PTR_s__x00NONEWPA_ssidAUTHdbus_to_port_0077367d_0x2f7_0049da10;
              *(undefined4 *)((int)register0x00000054 + -0x2dc) = 4;
              FUN_00148928();
              bVar10 = *(int *)((int)register0x00000054 + -0x2d4) == 0;
              iVar4 = *(int *)((int)register0x00000054 + -600);
            }
            if (bVar10) {
              uVar2 = *(undefined4 *)((int)register0x00000054 + -0x2b4);
              uVar1 = *(uint *)((int)register0x00000054 + -0x2b0);
              puVar7 = *(undefined **)((int)register0x00000054 + -0x28c);
            }
            else {
              uVar2 = *(undefined4 *)(iVar4 + 0x14);
              *(undefined4 *)((int)register0x00000054 + -0x2e8) = *(undefined4 *)(iVar4 + 0x10);
              *(undefined4 *)((int)register0x00000054 + -0x2e4) = uVar2;
              FUN_000a9008();
              if (*(int *)((int)register0x00000054 + -0x2dc) == 0) {
                *(undefined4 *)((int)register0x00000054 + -0x2b8) =
                     *(undefined4 *)((int)register0x00000054 + -0x2e0);
                uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -600) + 0xc);
                *(undefined4 *)((int)register0x00000054 + -0x2e8) =
                     *(undefined4 *)(*(int *)((int)register0x00000054 + -600) + 8);
                *(undefined4 *)((int)register0x00000054 + -0x2e4) = uVar2;
                FUN_000a9008();
                if (*(int *)((int)register0x00000054 + -0x2dc) == 0) {
                  *(undefined4 *)((int)register0x00000054 + -0x2ac) =
                       *(undefined4 *)((int)register0x00000054 + -0x2e0);
                  uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -600) + 0x20);
                  uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -600) + 0x24);
                  *(undefined4 *)((int)register0x00000054 + -0x2e8) = 0;
                  *(undefined **)((int)register0x00000054 + -0x2e4) = PTR_DAT_0049da14;
                  *(undefined4 *)((int)register0x00000054 + -0x2e0) = 1;
                  *(undefined4 *)((int)register0x00000054 + -0x2dc) = uVar2;
                  *(undefined4 *)((int)register0x00000054 + -0x2d8) = uVar6;
                  *(undefined **)((int)register0x00000054 + -0x2d4) = PTR_DAT_0049da14;
                  *(undefined4 *)((int)register0x00000054 + -0x2d0) = 1;
                  FUN_00071620();
                  *(undefined4 *)((int)register0x00000054 + -0x2e8) =
                       *(undefined4 *)((int)register0x00000054 + -0x2cc);
                  *(undefined4 *)((int)register0x00000054 + -0x2e4) =
                       *(undefined4 *)((int)register0x00000054 + -0x2c8);
                  FUN_000b1444();
                  if (*(int *)((int)register0x00000054 + -0x2d8) == 0) {
                    *(undefined4 *)((int)register0x00000054 + -0x294) =
                         *(undefined4 *)((int)register0x00000054 + -0x2e0);
                    *(undefined4 *)((int)register0x00000054 + -700) =
                         *(undefined4 *)((int)register0x00000054 + -0x2dc);
                    uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -600) + 0x1c);
                    *(undefined4 *)((int)register0x00000054 + -0x2e8) =
                         *(undefined4 *)(*(int *)((int)register0x00000054 + -600) + 0x18);
                    *(undefined4 *)((int)register0x00000054 + -0x2e4) = uVar2;
                    FUN_00148fb4();
                    uVar2 = FUN_00098a08(0,(undefined1 *)((int)register0x00000054 + -0x288),
                                         *(undefined4 *)((int)register0x00000054 + -0x2dc),
                                         *(undefined4 *)((int)register0x00000054 + -0x2e0));
                    uVar6 = (*(undefined4 **)((int)register0x00000054 + -600))[1];
                    *(undefined4 *)((int)register0x00000054 + -0x288) =
                         **(undefined4 **)((int)register0x00000054 + -600);
                    *(undefined4 *)((int)register0x00000054 + -0x284) = uVar6;
                    *(undefined4 *)((int)register0x00000054 + -0x280) =
                         *(undefined4 *)((int)register0x00000054 + -0x2ac);
                    *(undefined4 *)((int)register0x00000054 + -0x27c) =
                         *(undefined4 *)((int)register0x00000054 + -0x2b8);
                    *(undefined4 *)((int)register0x00000054 + -0x278) = extraout_r3;
                    *(undefined4 *)((int)register0x00000054 + -0x274) = extraout_r2_00;
                    *(undefined4 *)((int)register0x00000054 + -0x270) =
                         *(undefined4 *)((int)register0x00000054 + -0x294);
                    *(undefined4 *)((int)register0x00000054 + -0x26c) =
                         *(undefined4 *)((int)register0x00000054 + -700);
                    FUN_00098a08(uVar2,(undefined1 *)((int)register0x00000054 + -100));
                    *(undefined **)((int)register0x00000054 + -0x2e8) = PTR_DAT_0049da20;
                    *(undefined1 **)((int)register0x00000054 + -0x2e4) =
                         (undefined1 *)((int)register0x00000054 + -0x80);
                    *(undefined4 *)((int)register0x00000054 + -0x2e0) =
                         *(undefined4 *)((int)register0x00000054 + -0x270);
                    *(undefined4 *)((int)register0x00000054 + -0x2dc) =
                         *(undefined4 *)((int)register0x00000054 + -0x26c);
                    FUN_0008e314();
                    *(undefined1 *)((int)register0x00000054 + -0x2c1) =
                         *(undefined1 *)((int)register0x00000054 + -0x2d4);
                    FUN_00098ddc(*(undefined1 *)((int)register0x00000054 + -0x2d4),
                                 *(undefined4 *)((int)register0x00000054 + -0x2d8),
                                 (undefined1 *)((int)register0x00000054 + -100));
                    if (*(char *)((int)register0x00000054 + -0x2c1) == '\0') {
                      *(undefined **)((int)register0x00000054 + -0x2e8) = PTR_DAT_0049da20;
                      *(undefined1 **)((int)register0x00000054 + -0x2e4) =
                           (undefined1 *)((int)register0x00000054 + -0x80);
                      *(undefined4 *)((int)register0x00000054 + -0x2e0) =
                           *(undefined4 *)((int)register0x00000054 + -0x270);
                      *(undefined4 *)((int)register0x00000054 + -0x2dc) =
                           *(undefined4 *)((int)register0x00000054 + -0x26c);
                      FUN_0008e7bc();
                      uVar6 = *(undefined4 *)((int)register0x00000054 + -0x2d8);
                      uVar2 = 0;
                      if (*(int *)PTR_DAT_0049d9fc != 0) {
                        *(undefined4 *)((int)register0x00000054 + -8) = uVar6;
                        *(undefined **)((int)register0x00000054 + -0x2e8) = PTR_DAT_0049da24;
                        *(undefined4 *)((int)register0x00000054 + -0x2e4) = uVar6;
                        *(undefined1 **)((int)register0x00000054 + -0x2e0) =
                             (undefined1 *)((int)register0x00000054 + -0x288);
                        uVar2 = FUN_00022914();
                        uVar6 = *(undefined4 *)((int)register0x00000054 + -8);
                      }
                      FUN_00098ddc(uVar2,(undefined1 *)((int)register0x00000054 + -0x288),uVar6);
                      *(undefined4 *)((int)register0x00000054 + -0x2e8) =
                           *(undefined4 *)((int)register0x00000054 + -0x278);
                      *(undefined4 *)((int)register0x00000054 + -0x2e4) =
                           *(undefined4 *)((int)register0x00000054 + -0x274);
                      printerApi_service_wifi_parseFlags();
                      *(undefined4 *)((int)register0x00000054 + -0x268) =
                           *(undefined4 *)((int)register0x00000054 + -0x2e0);
                      *(undefined4 *)((int)register0x00000054 + -0x264) =
                           *(undefined4 *)((int)register0x00000054 + -0x2dc);
                      *(undefined4 *)((int)register0x00000054 + -0x260) =
                           *(undefined4 *)((int)register0x00000054 + -0x2d8);
                      *(undefined4 *)((int)register0x00000054 + -0x25c) =
                           *(undefined4 *)((int)register0x00000054 + -0x2d4);
                      uVar3 = *(int *)((int)register0x00000054 + -0x2b4) + 1;
                      uVar1 = *(uint *)((int)register0x00000054 + -0x2b0);
                      if (uVar1 < uVar3) {
                        *(undefined4 *)((int)register0x00000054 + -0x2e8) =
                             *(undefined4 *)((int)register0x00000054 + -0x28c);
                        *(uint *)((int)register0x00000054 + -0x2e4) = uVar3;
                        *(uint *)((int)register0x00000054 + -0x2e0) = uVar1;
                        *(undefined4 *)((int)register0x00000054 + -0x2dc) = 1;
                        *(undefined **)((int)register0x00000054 + -0x2d8) = PTR_DAT_0049da24;
                        FUN_00093524();
                        iVar4 = *(int *)((int)register0x00000054 + -0x2d4);
                        uVar3 = *(uint *)((int)register0x00000054 + -0x2d0);
                        uVar1 = *(uint *)((int)register0x00000054 + -0x2cc);
                      }
                      else {
                        iVar4 = *(int *)((int)register0x00000054 + -0x28c);
                      }
                      *(uint *)((int)register0x00000054 + -0x2b4) = uVar3;
                      iVar8 = iVar4 + uVar3 * 0x30 + -0x30;
                      if (*(int *)PTR_DAT_0049d9fc != 0) {
                        *(int *)((int)register0x00000054 + -0xc) = iVar4;
                        *(uint *)((int)register0x00000054 + -0x2a0) = uVar1;
                        *(int *)((int)register0x00000054 + -8) = iVar8;
                        *(undefined **)((int)register0x00000054 + -0x2e8) = PTR_DAT_0049da24;
                        *(int *)((int)register0x00000054 + -0x2e4) = iVar8;
                        *(undefined1 **)((int)register0x00000054 + -0x2e0) =
                             (undefined1 *)((int)register0x00000054 + -0x288);
                        FUN_00022914();
                        uVar3 = *(uint *)((int)register0x00000054 + -0x2b4);
                        uVar1 = *(uint *)((int)register0x00000054 + -0x2a0);
                        iVar4 = *(int *)((int)register0x00000054 + -0xc);
                        iVar8 = *(int *)((int)register0x00000054 + -8);
                      }
                      FUN_00098ddc(uVar3,(undefined1 *)((int)register0x00000054 + -0x288),iVar8,
                                   iVar4);
                      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x2b4);
                      puVar7 = extraout_r3_00;
                    }
                    else {
                      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x2b4);
                      uVar1 = *(uint *)((int)register0x00000054 + -0x2b0);
                      puVar7 = *(undefined **)((int)register0x00000054 + -0x28c);
                    }
                  }
                  else {
                    FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x34));
                    *(undefined **)((int)register0x00000054 + -0x34) = PTR_SUB_0049da18;
                    *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_0049da1c;
                    uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -600) + 0x24);
                    *(undefined4 *)((int)register0x00000054 + -0x2e8) =
                         *(undefined4 *)(*(int *)((int)register0x00000054 + -600) + 0x20);
                    *(undefined4 *)((int)register0x00000054 + -0x2e4) = uVar2;
                    FUN_0008a578();
                    *(undefined **)((int)register0x00000054 + -0x2c) = PTR_SUB_0049da18;
                    *(undefined4 *)((int)register0x00000054 + -0x28) =
                         *(undefined4 *)((int)register0x00000054 + -0x2e0);
                    *(undefined1 **)((int)register0x00000054 + -0x2e8) =
                         (undefined1 *)((int)register0x00000054 + -0x34);
                    *(undefined4 *)((int)register0x00000054 + -0x2e4) = 2;
                    *(undefined4 *)((int)register0x00000054 + -0x2e0) = 2;
                    printerApi_common_logger_Debug();
                    uVar2 = *(undefined4 *)((int)register0x00000054 + -0x2b4);
                    uVar1 = *(uint *)((int)register0x00000054 + -0x2b0);
                    puVar7 = *(undefined **)((int)register0x00000054 + -0x28c);
                  }
                }
                else {
                  uVar2 = *(undefined4 *)((int)register0x00000054 + -0x2b4);
                  uVar1 = *(uint *)((int)register0x00000054 + -0x2b0);
                  puVar7 = *(undefined **)((int)register0x00000054 + -0x28c);
                }
              }
              else {
                uVar2 = *(undefined4 *)((int)register0x00000054 + -0x2b4);
                uVar1 = *(uint *)((int)register0x00000054 + -0x2b0);
                puVar7 = *(undefined **)((int)register0x00000054 + -0x28c);
              }
            }
          }
          else {
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x2b4);
            uVar1 = *(uint *)((int)register0x00000054 + -0x2b0);
            puVar7 = *(undefined **)((int)register0x00000054 + -0x28c);
          }
          iVar4 = *(int *)((int)register0x00000054 + -0x29c) + 1;
        }
        *(undefined **)((int)register0x00000054 + -0x2e8) = puVar7;
        *(undefined4 *)((int)register0x00000054 + -0x2e4) = uVar2;
        *(uint *)((int)register0x00000054 + -0x2e0) = uVar1;
        FUN_0008a61c();
        *(undefined **)((int)register0x00000054 + -0x2e8) = PTR_DAT_0049da28;
        *(undefined4 *)((int)register0x00000054 + -0x2e4) =
             *(undefined4 *)((int)register0x00000054 + -0x2dc);
        FUN_0019ad1c();
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x28c);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x2b4);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x2b0);
        *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x0049d9dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x2ec))();
        return;
      }
      uVar11 = iVar4 == 0;
      if (!(bool)uVar11) {
        FUN_00085954();
      }
      param_1 = FUN_00085994();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x2ec);
      if ((bool)uVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x49da48;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/wifi.parseFlags @ 0049da4c (size 836) */

/* WARNING: Removing unreachable block (ram,0x0049dcbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_wifi_parseFlags(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *extraout_r2;
  int extraout_r2_00;
  uint uVar6;
  uint extraout_r3;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  char cVar17;
  int unaff_r10;
  undefined1 *puVar18;
  undefined4 unaff_lr;
  bool bVar19;
  undefined8 uVar20;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar18 = (undefined1 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x68) = unaff_lr;
      if (*(int *)((int)register0x00000054 + 8) == 5) {
        pcVar3 = *(char **)((int)register0x00000054 + 4);
        if ((((*pcVar3 == '[') && (pcVar3[1] == 'E')) && (pcVar3[2] == 'S')) &&
           ((pcVar3[3] == 'S' && (pcVar3[4] == ']')))) {
          *(undefined **)((int)register0x00000054 + 0xc) =
               PTR_s_NONEWPA_ssidAUTHdbus_to_porttcp4_0077367d_0x2fb_0049dd94;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 4;
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0049dac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x68))();
          return;
        }
      }
      else {
        pcVar3 = *(char **)((int)register0x00000054 + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -100) = *(undefined4 *)PTR_DAT_0049dd98;
      *(char **)((int)register0x00000054 + -0x60) = pcVar3;
      *(int *)((int)register0x00000054 + -0x5c) = *(int *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x58) = 0xffffffff;
      FUN_00410b74();
      piVar1 = *(int **)((int)register0x00000054 + -0x54);
      iVar4 = *(int *)((int)register0x00000054 + -0x50);
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x2c);
      uVar6 = 0;
      uVar9 = 0;
      while( true ) {
        if (iVar4 < 1) {
          *(uint *)((int)register0x00000054 + -0x3c) = uVar9;
          *(undefined1 **)((int)register0x00000054 + -0x20) = puVar5;
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x10));
          *(undefined4 *)((int)register0x00000054 + -0xc) = 5;
          *(undefined4 *)((int)register0x00000054 + -0x10) = _UNK_0049dda4;
          *(undefined4 *)((int)register0x00000054 + -4) = 4;
          *(undefined4 *)((int)register0x00000054 + -8) = _UNK_0049dda8;
          iVar2 = 0;
          iVar4 = extraout_r2_00;
          do {
            if (1 < iVar2) {
              *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0049dc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x68))();
              return;
            }
            *(int *)((int)register0x00000054 + -0x30) = iVar2;
            uVar12 = *(undefined4 *)((int)register0x00000054 + iVar2 * 8 + -0x10);
            *(undefined4 *)((int)register0x00000054 + -0x24) = uVar12;
            iVar7 = *(int *)((int)register0x00000054 + iVar2 * 8 + -0xc);
            *(int *)((int)register0x00000054 + -0x40) = iVar7;
            for (iVar14 = 0; iVar14 < (int)uVar9; iVar14 = iVar14 + 1) {
              *(int *)((int)register0x00000054 + -0x34) = iVar14;
              iVar15 = *(int *)(iVar4 + iVar14 * 8 + 4);
              uVar13 = *(undefined4 *)(iVar4 + iVar14 * 8);
              if (iVar15 < iVar7) {
                cVar17 = '\0';
              }
              else {
                *(int *)((int)register0x00000054 + -0x38) = iVar15;
                *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar13;
                *(undefined4 *)((int)register0x00000054 + -100) = uVar13;
                *(undefined4 *)((int)register0x00000054 + -0x60) = uVar12;
                *(int *)((int)register0x00000054 + -0x5c) = iVar7;
                FUN_000150d4(iVar2,(undefined1 *)((int)register0x00000054 + -0x10));
                cVar17 = *(char *)((int)register0x00000054 + -0x58);
                iVar4 = *(int *)((int)register0x00000054 + -0x20);
                iVar7 = *(int *)((int)register0x00000054 + -0x40);
                uVar9 = *(uint *)((int)register0x00000054 + -0x3c);
                uVar12 = *(undefined4 *)((int)register0x00000054 + -0x24);
                iVar14 = *(int *)((int)register0x00000054 + -0x34);
                iVar15 = *(int *)((int)register0x00000054 + -0x38);
                uVar13 = *(undefined4 *)((int)register0x00000054 + -0x1c);
                iVar2 = *(int *)((int)register0x00000054 + -0x30);
              }
              if (cVar17 != '\0') {
                *(undefined4 *)((int)register0x00000054 + -100) = uVar13;
                *(int *)((int)register0x00000054 + -0x60) = iVar15;
                *(undefined4 *)((int)register0x00000054 + -0x5c) = _UNK_0049ddac;
                *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
                *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
                *(undefined4 *)((int)register0x00000054 + -0x50) = 0xffffffff;
                FUN_00146be8();
                if (*(int *)((int)register0x00000054 + -0x48) == 3) {
                  puVar16 = *(undefined4 **)((int)register0x00000054 + -0x4c);
                  *(undefined4 **)((int)register0x00000054 + -0x28) = puVar16;
                  uVar12 = puVar16[1];
                  uVar13 = *puVar16;
                  uVar8 = puVar16[2];
                  uVar10 = puVar16[3];
                  *(undefined4 *)((int)register0x00000054 + -100) = 0;
                  *(undefined4 *)((int)register0x00000054 + -0x60) = uVar13;
                  *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar12;
                  *(undefined4 *)((int)register0x00000054 + -0x58) = uVar8;
                  *(undefined4 *)((int)register0x00000054 + -0x54) = uVar10;
                  FUN_000715a4();
                  uVar13 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + 0x10);
                  uVar12 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x28) + 0x14);
                  *(undefined4 *)((int)register0x00000054 + 0xc) =
                       *(undefined4 *)((int)register0x00000054 + -0x50);
                  *(undefined4 *)((int)register0x00000054 + 0x10) =
                       *(undefined4 *)((int)register0x00000054 + -0x4c);
                  *(undefined4 *)((int)register0x00000054 + 0x14) = uVar13;
                  *(undefined4 *)((int)register0x00000054 + 0x18) = uVar12;
                    /* WARNING: Could not recover jumptable at 0x0049dd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)((int)register0x00000054 + -0x68))();
                  return;
                }
                iVar2 = *(int *)((int)register0x00000054 + -0x30);
                iVar4 = *(int *)((int)register0x00000054 + -0x20);
                iVar7 = *(int *)((int)register0x00000054 + -0x40);
                uVar9 = *(uint *)((int)register0x00000054 + -0x3c);
                uVar12 = *(undefined4 *)((int)register0x00000054 + -0x24);
                iVar14 = *(int *)((int)register0x00000054 + -0x34);
              }
            }
            iVar2 = iVar2 + 1;
          } while( true );
        }
        uVar11 = piVar1[1];
        bVar19 = uVar11 == 1;
        if (uVar11 < 2) break;
        uVar9 = uVar9 + 1;
        uVar13 = *(undefined4 *)(*piVar1 + 8);
        uVar12 = *(undefined4 *)(*piVar1 + 0xc);
        if (uVar6 < uVar9) {
          *(int *)((int)register0x00000054 + -0x30) = iVar4;
          *(int **)((int)register0x00000054 + -0x14) = piVar1;
          *(undefined4 *)((int)register0x00000054 + -0x18) = uVar13;
          *(undefined4 *)((int)register0x00000054 + -0x34) = uVar12;
          *(undefined1 **)((int)register0x00000054 + -100) = puVar5;
          *(uint *)((int)register0x00000054 + -0x60) = uVar9;
          *(uint *)((int)register0x00000054 + -0x5c) = uVar6;
          *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_SUB_0049dd9c;
          FUN_00093524();
          puVar5 = *(undefined1 **)((int)register0x00000054 + -0x50);
          uVar9 = *(uint *)((int)register0x00000054 + -0x4c);
          uVar6 = *(uint *)((int)register0x00000054 + -0x48);
          piVar1 = *(int **)((int)register0x00000054 + -0x14);
          iVar4 = *(int *)((int)register0x00000054 + -0x30);
          uVar12 = *(undefined4 *)((int)register0x00000054 + -0x34);
          uVar13 = *(undefined4 *)((int)register0x00000054 + -0x18);
        }
        uVar20 = CONCAT44(iVar4,piVar1);
        iVar4 = uVar9 - 1;
        puVar16 = (undefined4 *)(puVar5 + iVar4 * 8);
        puVar16[1] = uVar12;
        if (*(int *)PTR_DAT_0049dda0 != 0) {
          uVar20 = FUN_00098688();
          *puVar16 = uVar13;
          puVar16[1] = *(undefined4 *)(extraout_r2 + iVar4 * 8);
          puVar5 = extraout_r2;
          uVar6 = extraout_r3;
        }
        *(undefined4 *)(puVar5 + iVar4 * 8) = uVar13;
        piVar1 = (int *)((int)uVar20 + 0xc);
        iVar4 = (int)((ulonglong)uVar20 >> 0x20) + -1;
      }
      param_1 = FUN_000986f8(1,uVar11);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x68);
      if (bVar19) {
        register0x00000054 = (BADSPACEBASE *)puVar18;
      }
    }
    unaff_lr = 0x49dd8c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/wifi.(*WifiManager).WifiStatus @ 0049ddb0 (size 2236) */

/* WARNING: Removing unreachable block (ram,0x0049e18c) */
/* WARNING: Removing unreachable block (ram,0x0049e198) */
/* WARNING: Removing unreachable block (ram,0x0049e1a4) */
/* WARNING: Removing unreachable block (ram,0x0049e4b8) */
/* WARNING: Removing unreachable block (ram,0x0049e4dc) */
/* WARNING: Removing unreachable block (ram,0x0049e500) */
/* WARNING: Removing unreachable block (ram,0x0049e4f8) */
/* WARNING: Removing unreachable block (ram,0x0049e514) */
/* WARNING: Removing unreachable block (ram,0x0049e450) */
/* WARNING: Removing unreachable block (ram,0x0049e474) */
/* WARNING: Removing unreachable block (ram,0x0049e498) */
/* WARNING: Removing unreachable block (ram,0x0049e490) */
/* WARNING: Removing unreachable block (ram,0x0049e4ac) */
/* WARNING: Removing unreachable block (ram,0x0049e3c8) */
/* WARNING: Removing unreachable block (ram,0x0049e520) */
/* WARNING: Removing unreachable block (ram,0x0049e590) */
/* WARNING: Removing unreachable block (ram,0x0049e5b4) */
/* WARNING: Removing unreachable block (ram,0x0049e638) */
/* WARNING: Removing unreachable block (ram,0x0049e5d0) */
/* WARNING: Removing unreachable block (ram,0x0049e64c) */
/* WARNING: Removing unreachable block (ram,0x0049e528) */
/* WARNING: Removing unreachable block (ram,0x0049e54c) */
/* WARNING: Removing unreachable block (ram,0x0049e570) */
/* WARNING: Removing unreachable block (ram,0x0049e568) */
/* WARNING: Removing unreachable block (ram,0x0049e584) */
/* WARNING: Removing unreachable block (ram,0x0049e3d0) */
/* WARNING: Removing unreachable block (ram,0x0049e3d8) */
/* WARNING: Removing unreachable block (ram,0x0049e3e0) */
/* WARNING: Removing unreachable block (ram,0x0049e3e8) */
/* WARNING: Removing unreachable block (ram,0x0049e40c) */
/* WARNING: Removing unreachable block (ram,0x0049e430) */
/* WARNING: Removing unreachable block (ram,0x0049e428) */
/* WARNING: Removing unreachable block (ram,0x0049e444) */
/* WARNING: Removing unreachable block (ram,0x0049e2e4) */
/* WARNING: Removing unreachable block (ram,0x0049e358) */
/* WARNING: Removing unreachable block (ram,0x0049e360) */
/* WARNING: Removing unreachable block (ram,0x0049e384) */
/* WARNING: Removing unreachable block (ram,0x0049e3a8) */
/* WARNING: Removing unreachable block (ram,0x0049e3a0) */
/* WARNING: Removing unreachable block (ram,0x0049e3bc) */
/* WARNING: Removing unreachable block (ram,0x0049e2ec) */
/* WARNING: Removing unreachable block (ram,0x0049e2f8) */
/* WARNING: Removing unreachable block (ram,0x0049e304) */
/* WARNING: Removing unreachable block (ram,0x0049e310) */
/* WARNING: Removing unreachable block (ram,0x0049e31c) */
/* WARNING: Removing unreachable block (ram,0x0049e328) */
/* WARNING: Removing unreachable block (ram,0x0049e340) */
/* WARNING: Removing unreachable block (ram,0x0049e350) */
/* WARNING: Removing unreachable block (ram,0x0049e1cc) */
/* WARNING: Removing unreachable block (ram,0x0049e1d8) */
/* WARNING: Removing unreachable block (ram,0x0049e1e4) */
/* WARNING: Removing unreachable block (ram,0x0049e1f0) */
/* WARNING: Removing unreachable block (ram,0x0049e22c) */
/* WARNING: Removing unreachable block (ram,0x0049e234) */
/* WARNING: Removing unreachable block (ram,0x0049e240) */
/* WARNING: Removing unreachable block (ram,0x0049e24c) */
/* WARNING: Removing unreachable block (ram,0x0049e288) */
/* WARNING: Removing unreachable block (ram,0x0049e290) */
/* WARNING: Removing unreachable block (ram,0x0049e29c) */
/* WARNING: Removing unreachable block (ram,0x0049e2a8) */
/* WARNING: Removing unreachable block (ram,0x0049e2b4) */
/* WARNING: Removing unreachable block (ram,0x0049e2cc) */
/* WARNING: Removing unreachable block (ram,0x0049e2dc) */
/* WARNING: Removing unreachable block (ram,0x0049e258) */
/* WARNING: Removing unreachable block (ram,0x0049e270) */
/* WARNING: Removing unreachable block (ram,0x0049e280) */
/* WARNING: Removing unreachable block (ram,0x0049e1fc) */
/* WARNING: Removing unreachable block (ram,0x0049e214) */
/* WARNING: Removing unreachable block (ram,0x0049e224) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_wifi___WifiManager__WifiStatus(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *unaff_r8;
  int unaff_r10;
  int local_7c;
  undefined4 *local_78;
  int local_74;
  undefined *local_34;
  undefined *local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined *local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (iVar3 = DAT_0049e5dc, &local_14 <= *(undefined ***)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_4 = (undefined4 *)0x0;
  FUN_00155144();
  local_4 = local_78;
  FUN_0001eed8();
  *(undefined4 *)(iVar3 + 4) = 0;
  FUN_00098a20(0,&local_24);
  puVar1 = PTR_s_wpa_clikillall_error_ServiceConf_00774847_0x7a6_0049e5f4;
  local_20 = 2;
  local_24 = PTR_DAT_0049e5e8;
  local_18 = 5;
  local_1c = PTR_DAT_0049e5ec;
  local_10 = 6;
  local_14 = PTR_DAT_0049e5f0;
  FUN_0015bb08();
  *(undefined **)(local_74 + 0x30) = PTR_DAT_0049e5f8;
  iVar4 = local_74;
  if (*(int *)PTR_DAT_0049e5fc != 0) {
    iVar4 = FUN_00098688();
    *unaff_r8 = iVar3;
    unaff_r8[1] = *(int *)(iVar4 + 0x34);
  }
  *(int *)(iVar4 + 0x34) = iVar3;
  FUN_0015cd18();
  if (local_7c != 0) {
    (*(code *)*local_4)();
    return;
  }
  if ((uint)-*(int *)(iVar3 + 4) < *(uint *)(iVar3 + 8)) {
    if (*(int *)(iVar3 + 4) == 0) goto LAB_0049e6b0;
  }
  else {
    FUN_00098a28(0,&local_34);
    local_34 = PTR_SUB_0049e600;
    local_30 = PTR_DAT_0049e604;
    FUN_0008a578();
    local_2c = PTR_SUB_0049e600;
    local_28 = puVar1;
    uVar2 = printerApi_common_logger_Debug();
    iVar4 = *(int *)(iVar3 + 4);
    if (*(uint *)(iVar3 + 8) <= (uint)-iVar4) {
      if (*(uint *)(iVar3 + 8) == 0) {
        FUN_0001eed8();
        _DAT_00000006 = 0x11;
        puRam00000002 = PTR_DAT_0049e614;
        (*(code *)*local_4)();
        return;
      }
      local_c = iVar4;
      FUN_0001eed8();
      local_8 = 2;
      FUN_00146be8();
      iVar3 = 0;
      while( true ) {
        if (local_74 <= iVar3) {
          (*(code *)*local_4)();
          return;
        }
        iVar4 = 0;
        FUN_00146be8(3);
        if (local_74 == 0) break;
        FUN_00148fb4();
        if (local_74 == 2) {
          FUN_00148fb4();
        }
        iVar3 = iVar3 + 1;
      }
      uVar2 = FUN_000986f8(0,0);
    }
    if (iVar4 != 0) {
      FUN_00085954(uVar2);
    }
    FUN_00085994();
  }
  FUN_00085954();
LAB_0049e6b0:
  uVar2 = FUN_00085994();
  FUN_0004fb3c(uVar2);
  return;
}



/* printerApi/service/wifi.(*WifiManager).Connect @ 0049e6cc (size 2976) */

void printerApi_service_wifi___WifiManager__Connect(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined4 extraout_r2;
  int iVar7;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined *in_stack_00000008;
  int in_stack_0000000c;
  undefined *in_stack_00000018;
  int in_stack_0000001c;
  undefined4 local_42c;
  undefined **local_428;
  undefined **local_424;
  undefined **local_420;
  undefined **local_41c;
  undefined **local_418;
  undefined **local_414;
  int local_410;
  undefined **local_40c;
  int local_404;
  int local_400;
  int local_3fc;
  int local_3f8;
  int local_3f4;
  undefined **local_3f0;
  undefined **local_3ec;
  int local_3e8;
  int local_3e4;
  undefined *local_3e0;
  undefined *local_3dc;
  undefined *local_3d8;
  int local_3d4;
  undefined **local_3d0;
  undefined **local_3cc;
  undefined **local_3c8;
  undefined *local_3c4;
  undefined4 local_3c0;
  undefined *local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b0;
  undefined *local_3ac;
  undefined4 local_3a8;
  undefined *local_3a4;
  undefined4 local_3a0;
  undefined *local_39c;
  undefined4 local_398;
  undefined *local_394;
  undefined4 local_390;
  undefined *local_38c;
  undefined4 local_388;
  undefined *local_384;
  undefined4 local_380;
  undefined *local_37c;
  undefined4 local_378;
  undefined *local_374;
  undefined4 local_370;
  undefined *local_36c;
  undefined4 local_368;
  undefined *local_364;
  undefined *local_35c;
  int local_358;
  undefined *local_354;
  undefined4 local_350;
  undefined *local_34c;
  undefined4 local_348;
  undefined *local_344;
  undefined4 local_340;
  undefined *local_33c;
  undefined4 local_338;
  undefined *local_334;
  undefined4 local_330;
  undefined *local_32c;
  undefined4 local_328;
  undefined *local_324;
  undefined4 local_320;
  undefined *local_31c;
  undefined4 local_318;
  undefined *local_314;
  undefined4 local_310;
  undefined *local_30c;
  undefined4 local_308;
  undefined *local_304;
  undefined4 local_300;
  undefined **local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined **local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined **local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined **local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined **local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  int local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined **local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined **local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined **local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined *local_290;
  undefined4 local_28c;
  undefined *local_288;
  undefined4 local_284;
  undefined *local_280;
  undefined4 local_27c;
  undefined4 local_274;
  undefined *local_270;
  undefined4 local_26c;
  undefined *local_268;
  undefined4 local_264;
  undefined *local_260;
  undefined4 local_25c;
  undefined *local_258;
  undefined4 local_254;
  undefined4 local_24c;
  undefined *local_248;
  undefined *local_240;
  undefined4 local_23c;
  undefined *local_238;
  undefined4 local_234;
  undefined4 local_22c;
  undefined *local_228;
  undefined4 local_224;
  undefined *local_220;
  undefined4 local_21c;
  undefined *local_218;
  undefined4 local_214;
  undefined *local_210;
  undefined4 local_20c;
  undefined4 local_204;
  undefined *local_200;
  undefined4 local_1fc;
  undefined *local_1f8;
  undefined4 local_1f4;
  undefined *local_1f0;
  undefined4 local_1ec;
  undefined *local_1e8;
  undefined4 local_1e4;
  undefined4 local_1dc;
  undefined *local_1d8;
  undefined4 local_1d4;
  undefined *local_1d0;
  undefined4 local_1cc;
  undefined *local_1c8;
  undefined4 local_1c4;
  undefined *local_1c0;
  int local_1bc;
  undefined *local_1b8;
  undefined4 local_1b4;
  undefined *local_1b0;
  undefined4 local_1ac;
  undefined *local_1a8;
  undefined4 local_1a4;
  undefined *local_1a0;
  undefined4 local_19c;
  undefined *local_198;
  undefined4 local_194;
  undefined *local_190;
  undefined *local_188;
  int local_184;
  undefined *local_180;
  undefined4 local_17c;
  undefined *local_178;
  undefined4 local_174;
  undefined *local_170;
  undefined4 local_16c;
  undefined *local_168;
  undefined4 local_164;
  undefined *local_160;
  undefined4 local_15c;
  undefined *local_158;
  undefined4 local_154;
  undefined *local_150;
  undefined4 local_14c;
  undefined *local_148;
  undefined4 local_144;
  undefined *local_140;
  undefined4 local_13c;
  undefined *local_138;
  undefined4 local_134;
  undefined *local_130;
  undefined4 local_12c;
  undefined **local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined **local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined **local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined **local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined **local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined **local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined **local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined **local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined **local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined *local_bc;
  undefined **local_b8;
  undefined *local_b4;
  undefined **local_b0;
  undefined *local_ac;
  undefined **local_a8;
  undefined ***local_a4;
  undefined *local_a0;
  undefined4 local_9c;
  undefined *local_98;
  undefined4 local_94;
  undefined *local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined *local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined4 local_74;
  undefined *local_70;
  undefined4 local_6c;
  undefined *local_68;
  undefined4 local_64;
  undefined4 local_5c;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined *local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined *local_20;
  undefined4 local_1c;
  undefined4 local_14;
  undefined *local_10;
  undefined4 local_c;
  undefined *local_8;
  undefined4 local_4;
  
  while (&local_3ac <= *(undefined ***)(unaff_r10 + 8)) {
    unaff_lr = 0x49f2bc;
    FUN_00096bb8();
  }
  local_420 = (undefined **)((in_stack_0000000c * 3) / 2);
  local_3e8 = (in_stack_0000001c * 3) / 2;
  local_428 = (undefined **)PTR_DAT_0049eefc;
  local_424 = (undefined **)0x0;
  local_42c = unaff_lr;
  local_3e4 = (int)local_420;
  FUN_000933e8(0);
  local_428 = local_41c;
  local_424 = (undefined **)0x0;
  local_420 = (undefined **)local_3e4;
  local_41c = (undefined **)in_stack_00000008;
  local_418 = (undefined **)in_stack_0000000c;
  local_414._0_3_ = 0x22;
  FUN_000afe64();
  local_428 = (undefined **)0x0;
  local_424 = (undefined **)local_410;
  local_420 = local_40c;
  FUN_00093e34();
  local_3d8 = (undefined *)local_41c;
  local_3fc = (int)local_418;
  local_428 = (undefined **)PTR_DAT_0049eefc;
  local_424 = (undefined **)0x0;
  local_420 = (undefined **)local_3e8;
  FUN_000933e8(local_41c);
  local_428 = local_41c;
  local_424 = (undefined **)0x0;
  local_420 = (undefined **)local_3e8;
  local_41c = (undefined **)in_stack_00000018;
  local_418 = (undefined **)in_stack_0000001c;
  local_414 = (undefined **)CONCAT13(local_414._3_1_,0x22);
  FUN_000afe64();
  local_428 = (undefined **)0x0;
  local_424 = (undefined **)local_410;
  local_420 = local_40c;
  FUN_00093e34();
  local_3dc = (undefined *)local_41c;
  local_400 = (int)local_418;
  uVar4 = FUN_000989cc(0,&local_128);
  uVar4 = FUN_00098a28(uVar4,&local_138);
  local_134 = 7;
  local_138 = PTR_s_killall_error_ServiceConfirmEXT__00774847_0x7ad_0049ef00;
  local_12c = 6;
  local_130 = PTR_DAT_0049ef04;
  local_124 = 2;
  local_120 = 2;
  local_128 = &local_138;
  uVar4 = FUN_00098a10(uVar4,&local_160);
  puVar3 = PTR_DAT_0049ef18;
  puVar2 = PTR_DAT_0049ef0c;
  puVar1 = PTR_s_wpa_clikillall_error_ServiceConf_00774847_0x7a6_0049ef08;
  local_15c = 7;
  local_160 = PTR_s_wpa_clikillall_error_ServiceConf_00774847_0x7a6_0049ef08;
  local_154 = 2;
  local_158 = PTR_DAT_0049ef0c;
  local_14c = 5;
  local_150 = PTR_DAT_0049ef10;
  local_144 = 0xe;
  local_148 = PTR_DAT_0049ef14;
  local_13c = 1;
  local_140 = PTR_DAT_0049ef18;
  local_118 = 5;
  local_114 = 5;
  local_11c = &local_160;
  uVar4 = FUN_00098a18(uVar4,&local_180);
  local_17c = 7;
  local_180 = puVar1;
  local_174 = 2;
  local_178 = puVar2;
  local_16c = 5;
  local_170 = PTR_DAT_0049ef10;
  local_164 = 0xb;
  local_168 = PTR_DAT_0049ef1c;
  local_10c = 4;
  local_108 = 4;
  local_110 = &local_180;
  uVar4 = FUN_00098a00(uVar4,&local_1b8);
  local_1b4 = 7;
  local_1b8 = puVar1;
  local_1ac = 2;
  local_1b0 = puVar2;
  local_1a4 = 5;
  local_1a8 = PTR_DAT_0049ef10;
  local_19c = 0xb;
  local_1a0 = PTR_DAT_0049ef20;
  local_194 = 1;
  local_198 = puVar3;
  local_190 = PTR_s_ssidAUTHdbus_to_porttcp4tcp61234_0077367d_0x303_0049ef24;
  local_184 = local_3fc;
  local_188 = local_3d8;
  local_100 = 7;
  local_fc = 7;
  local_104 = &local_1b8;
  uVar4 = FUN_00098a00(uVar4,&local_1f0);
  local_1ec = 7;
  local_1f0 = puVar1;
  local_1e4 = 2;
  local_1e8 = puVar2;
  local_1dc = 5;
  local_1d4 = 0xb;
  local_1d8 = PTR_DAT_0049ef20;
  local_1cc = 1;
  local_1d0 = puVar3;
  local_1c4 = 3;
  local_1c8 = PTR_DAT_0049ef28;
  local_1bc = local_400;
  local_1c0 = local_3dc;
  local_f4 = 7;
  local_f0 = 7;
  local_f8 = &local_1f0;
  uVar4 = FUN_00098a10(uVar4,&local_218);
  local_214 = 7;
  local_218 = puVar1;
  local_20c = 2;
  local_210 = puVar2;
  local_204 = 5;
  local_1fc = 0xe;
  local_200 = PTR_DAT_0049ef2c;
  local_1f4 = 1;
  local_1f8 = puVar3;
  local_e8 = 5;
  local_e4 = 5;
  local_ec = &local_218;
  uVar4 = FUN_00098a10(uVar4,&local_240);
  local_23c = 7;
  local_240 = puVar1;
  local_234 = 2;
  local_238 = puVar2;
  local_22c = 5;
  local_224 = 0xe;
  local_228 = PTR_DAT_0049ef30;
  local_21c = 1;
  local_220 = puVar3;
  local_dc = 5;
  local_d8 = 5;
  local_e0 = &local_240;
  uVar4 = FUN_00098a18(uVar4,&local_260);
  local_25c = 7;
  local_260 = puVar1;
  local_254 = 2;
  local_258 = puVar2;
  local_24c = 5;
  local_248 = PTR_DAT_0049ef34;
  local_d0 = 4;
  local_cc = 4;
  local_d4 = &local_260;
  FUN_00098a08(uVar4,&local_290);
  local_28c = 6;
  local_290 = PTR_DAT_0049ef04;
  local_284 = 2;
  local_288 = PTR_DAT_0049ef38;
  local_27c = 2;
  local_280 = puVar2;
  local_274 = 5;
  local_26c = 2;
  local_270 = PTR_DAT_0049ef3c;
  local_264 = 1;
  local_268 = PTR_DAT_0049ef40;
  local_c4 = 6;
  local_c0 = 6;
  local_c8 = &local_290;
  if (in_stack_0000001c == 0) {
    local_428 = (undefined **)PTR_DAT_0049eefc;
    local_424 = (undefined **)0x0;
    local_420 = (undefined **)local_3e4;
    FUN_000933e8();
    local_428 = local_41c;
    local_424 = (undefined **)0x0;
    local_420 = (undefined **)local_3e4;
    local_41c = (undefined **)in_stack_00000008;
    local_418 = (undefined **)in_stack_0000000c;
    local_414 = (undefined **)CONCAT13(local_414._3_1_,0x22);
    FUN_000afe64();
    local_428 = (undefined **)0x0;
    local_424 = (undefined **)local_410;
    local_420 = local_40c;
    FUN_00093e34();
    local_3e0 = (undefined *)local_41c;
    local_404 = (int)local_418;
    uVar4 = FUN_000989cc(0,&local_2fc);
    uVar4 = FUN_00098a28(uVar4,&local_30c);
    local_308 = 7;
    local_30c = PTR_s_killall_error_ServiceConfirmEXT__00774847_0x7ad_0049ef00;
    local_300 = 6;
    local_304 = PTR_DAT_0049ef04;
    local_2f8 = 2;
    local_2f4 = 2;
    local_2fc = &local_30c;
    uVar4 = FUN_00098a10(uVar4,&local_334);
    puVar3 = PTR_DAT_0049ef18;
    puVar2 = PTR_DAT_0049ef0c;
    puVar1 = PTR_s_wpa_clikillall_error_ServiceConf_00774847_0x7a6_0049ef08;
    local_330 = 7;
    local_334 = PTR_s_wpa_clikillall_error_ServiceConf_00774847_0x7a6_0049ef08;
    local_328 = 2;
    local_32c = PTR_DAT_0049ef0c;
    local_320 = 5;
    local_324 = PTR_DAT_0049ef10;
    local_318 = 0xe;
    local_31c = PTR_DAT_0049ef14;
    local_310 = 1;
    local_314 = PTR_DAT_0049ef18;
    local_2ec = 5;
    local_2e8 = 5;
    local_2f0 = &local_334;
    uVar4 = FUN_00098a18(uVar4,&local_354);
    local_350 = 7;
    local_354 = puVar1;
    local_348 = 2;
    local_34c = puVar2;
    local_340 = 5;
    local_344 = PTR_DAT_0049ef10;
    local_338 = 0xb;
    local_33c = PTR_DAT_0049ef1c;
    local_2e0 = 4;
    local_2dc = 4;
    local_2e4 = &local_354;
    uVar4 = FUN_00098a00(uVar4,&local_38c);
    local_388 = 7;
    local_38c = puVar1;
    local_380 = 2;
    local_384 = puVar2;
    local_378 = 5;
    local_37c = PTR_DAT_0049ef10;
    local_370 = 0xb;
    local_374 = PTR_DAT_0049ef20;
    local_368 = 1;
    local_36c = puVar3;
    local_364 = PTR_s_ssidAUTHdbus_to_porttcp4tcp61234_0077367d_0x303_0049ef24;
    local_358 = local_404;
    local_35c = local_3e0;
    local_2d4 = 7;
    local_2d0 = 7;
    local_2d8 = &local_38c;
    uVar4 = FUN_00098a00(uVar4,&local_3c4);
    local_3c0 = 7;
    local_3c4 = puVar1;
    local_3b8 = 2;
    local_3bc = puVar2;
    local_3b0 = 5;
    local_3a8 = 0xb;
    local_3ac = PTR_DAT_0049ef20;
    local_3a0 = 1;
    local_3a4 = puVar3;
    local_398 = 8;
    local_39c = PTR_s_key_mgmtREJECTEDEXTERNALNameLost_0077568d_0x338_0049ef44;
    local_390 = 4;
    local_394 = PTR_s_NONEWPA_ssidAUTHdbus_to_porttcp4_0077367d_0x2fb_0049ef48;
    local_2c8 = 7;
    local_2c4 = 7;
    local_2cc = &local_3c4;
    uVar4 = FUN_00098a10(uVar4,(int)&local_42c + DAT_0049ef4c);
    local_24 = 7;
    local_28 = puVar1;
    local_1c = 2;
    local_20 = puVar2;
    local_14 = 5;
    local_c = 0xe;
    local_10 = PTR_DAT_0049ef2c;
    local_4 = 1;
    local_8 = puVar3;
    local_2bc = 5;
    local_2b8 = 5;
    local_2c0 = (int)&local_42c + DAT_0049ef4c;
    uVar4 = FUN_00098a10(uVar4,&local_50);
    local_4c = 7;
    local_50 = puVar1;
    local_44 = 2;
    local_48 = puVar2;
    local_3c = 5;
    local_34 = 0xe;
    local_38 = PTR_DAT_0049ef30;
    local_2c = 1;
    local_30 = puVar3;
    local_2b0 = 5;
    local_2ac = 5;
    local_2b4 = &local_50;
    uVar4 = FUN_00098a18(uVar4,&local_70);
    local_6c = 7;
    local_70 = puVar1;
    local_64 = 2;
    local_68 = puVar2;
    local_5c = 5;
    local_58 = PTR_DAT_0049ef34;
    local_2a4 = 4;
    local_2a0 = 4;
    local_2a8 = &local_70;
    FUN_00098a08(uVar4,&local_a0);
    local_9c = 6;
    local_a0 = PTR_DAT_0049ef04;
    local_94 = 2;
    local_98 = PTR_DAT_0049ef38;
    local_8c = 2;
    local_90 = puVar2;
    local_84 = 5;
    local_88 = extraout_r2;
    local_7c = 2;
    local_80 = PTR_DAT_0049ef3c;
    local_74 = 1;
    local_78 = PTR_DAT_0049ef40;
    local_298 = 6;
    local_294 = 6;
    local_29c = &local_a0;
    pppuVar6 = &local_2fc;
  }
  else {
    pppuVar6 = &local_128;
  }
  iVar7 = 9;
  while( true ) {
    if (iVar7 < 1) {
      local_428 = (undefined **)in_stack_00000004;
      printerApi_service_wifi___WifiManager__WifiStatus();
      if (local_420 != (undefined **)0x0) {
        local_bc = local_420[1];
        local_b8 = local_41c;
        local_428 = (undefined **)PTR_DAT_0049f2e0;
        local_424 = (undefined **)0x1b;
        local_420 = &local_bc;
        local_41c = (undefined **)0x1;
        local_418 = (undefined **)0x1;
        FUN_00130144();
        FUN_0004fb3c();
        return;
      }
      ppuVar5 = local_424;
      if (*(int *)((int)local_424 + 0x40) == 9) {
        local_3d4 = (int)local_424;
        local_428 = *(undefined ***)((int)local_424 + 0x3c);
        local_424 = (undefined **)PTR_DAT_0049f2e4;
        local_420 = (undefined **)&DAT_00000009;
        FUN_000150d4();
        ppuVar5 = (undefined **)local_3d4;
        if ((char)local_41c != '\0') {
          FUN_0004fb3c();
          return;
        }
      }
      local_bc = (undefined *)0x0;
      local_b8 = (undefined **)0x0;
      local_428 = *(undefined ***)((int)ppuVar5 + 0x3c);
      local_424 = *(undefined ***)((int)ppuVar5 + 0x40);
      FUN_0008a578();
      local_bc = PTR_SUB_0049f2d4;
      local_b8 = local_420;
      local_428 = (undefined **)PTR_DAT_0049f2e8;
      local_424 = (undefined **)0x20;
      local_420 = &local_bc;
      local_41c = (undefined **)0x1;
      local_418 = (undefined **)0x1;
      FUN_00130144();
      FUN_0004fb3c();
      return;
    }
    local_a4 = pppuVar6;
    local_3c8 = *pppuVar6;
    local_3f0 = pppuVar6[1];
    local_3ec = pppuVar6[2];
    local_428 = (undefined **)DAT_0049f2c4;
    local_424 = (undefined **)DAT_0049f2c8;
    local_420 = (undefined **)DAT_0049f2cc;
    local_41c = (undefined **)0xd;
    local_3e4 = iVar7;
    FUN_00155144();
    local_3f4 = (int)local_418;
    local_3cc = local_414;
    local_428 = (undefined **)local_410;
    iVar7 = FUN_0004f204();
    if (iVar7 != 0) break;
    local_428 = (undefined **)in_stack_00000004;
    local_424 = (undefined **)local_3f4;
    local_420 = local_3cc;
    local_41c = local_3c8;
    local_418 = local_3f0;
    local_414 = local_3ec;
    printerApi_service_wifi___WifiManager__ExecCommand();
    local_3f8 = local_410;
    local_3d0 = local_40c;
    local_428 = local_3c8;
    local_424 = local_3f0;
    local_420 = local_3ec;
    local_41c = (undefined **)PTR_DAT_0049f2d0;
    local_418 = (undefined **)0x1;
    FUN_00147454();
    FUN_00098a28(0,&local_b4,local_410,local_414);
    local_b4 = PTR_SUB_0049f2d4;
    local_b0 = (undefined **)PTR_DAT_0049f2d8;
    FUN_0008a578();
    local_ac = PTR_SUB_0049f2d4;
    local_a8 = local_420;
    local_428 = &local_b4;
    local_424 = (undefined **)0x2;
    local_420 = (undefined **)0x2;
    printerApi_common_logger_Debug();
    if (local_3f8 != 0) {
      local_428 = local_3c8;
      local_424 = local_3f0;
      local_420 = local_3ec;
      local_41c = (undefined **)PTR_DAT_0049f2d0;
      local_418 = (undefined **)0x1;
      FUN_00147454();
      FUN_00098a28(0,&local_b4,local_410,local_414);
      FUN_0008a578();
      local_b4 = PTR_SUB_0049f2d4;
      local_b0 = local_420;
      local_ac = (undefined *)0x0;
      if (local_3f8 != 0) {
        local_ac = *(undefined **)(local_3f8 + 4);
      }
      local_a8 = local_3d0;
      local_428 = (undefined **)PTR_DAT_0049f2dc;
      local_424 = (undefined **)0x18;
      local_420 = &local_b4;
      local_41c = (undefined **)0x2;
      local_418 = (undefined **)0x2;
      printerApi_common_logger_Errorf();
    }
    pppuVar6 = local_a4 + 3;
    iVar7 = local_3e4 + -1;
  }
  FUN_0004fb3c();
  return;
}



/* printerApi/service/wifi.(*WifiManager).ExecCommand @ 0049f2ec (size 168) */

void printerApi_service_wifi___WifiManager__ExecCommand(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  bool bVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      iVar3 = *(int *)((int)register0x00000054 + 0x14);
      bVar6 = iVar3 == 1;
      if (iVar3 != 0) {
        puVar1 = *(undefined4 **)((int)register0x00000054 + 0x10);
        uVar2 = *puVar1;
        uVar4 = puVar1[1];
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x18) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x14) = uVar4;
        *(uint *)((int)register0x00000054 + -0x10) =
             (int)puVar1 + (1 - *(int *)((int)register0x00000054 + 0x18) >> 0x1f & 8U);
        *(int *)((int)register0x00000054 + -0xc) = iVar3 + -1;
        *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + 0x18) + -1;
        FUN_0015bb08();
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + -4);
        FUN_0015cd18();
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        return;
      }
      param_1 = FUN_00098758(1,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      if (bVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x49f390;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/wifi.(*WifiInfos).Len @ 0049f514 (size 100) */

void printerApi_service_wifi___WifiInfos__Len(undefined4 param_1)

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
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
                    /* WARNING: Could not recover jumptable at 0x0049f544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -4))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x49f558;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/wifi.(*WifiInfos).Less @ 0049f578 (size 204) */

void printerApi_service_wifi___WifiInfos__Less(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      piVar4 = *(int **)(unaff_r10 + 0x10);
      if ((piVar4 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar4)) {
        *piVar4 = (int)((int)register0x00000054 + -0x14);
      }
      piVar4 = *(int **)((int)register0x00000054 + 4);
      uVar10 = piVar4 == (int *)0x0;
      if (!(bool)uVar10) {
        uVar5 = piVar4[1];
        uVar1 = *(uint *)((int)register0x00000054 + 8);
        uVar10 = uVar1 == uVar5;
        if (uVar1 < uVar5) {
          iVar7 = *piVar4 + uVar1 * 0x30;
          uVar1 = *(uint *)((int)register0x00000054 + 0xc);
          uVar10 = uVar1 == uVar5;
          if (uVar1 < uVar5) {
            uVar8 = *(undefined4 *)(iVar7 + 0x1c);
            iVar2 = *piVar4 + uVar1 * 0x30;
            uVar6 = *(undefined4 *)(iVar2 + 0x18);
            uVar3 = *(undefined4 *)(iVar2 + 0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x14) = *(undefined4 *)(iVar7 + 0x18);
            *(undefined4 *)((int)register0x00000054 + -0x10) = uVar8;
            *(undefined4 *)((int)register0x00000054 + -0xc) = uVar6;
            *(undefined4 *)((int)register0x00000054 + -8) = uVar3;
            FUN_00014fd4();
            *(bool *)((int)register0x00000054 + 0x10) = *(int *)((int)register0x00000054 + -4) < 0;
                    /* WARNING: Could not recover jumptable at 0x0049f608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x18))();
            return;
          }
          FUN_000986f8();
        }
        FUN_000986f8();
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x49f624;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/wifi.(*WifiInfos).Swap @ 0049f644 (size 284) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_wifi___WifiInfos__Swap(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int extraout_r3;
  int iVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x48) = unaff_lr;
      piVar4 = *(int **)(unaff_r10 + 0x10);
      if ((piVar4 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar4)) {
        *piVar4 = (int)((int)register0x00000054 + -0x44);
      }
      piVar4 = *(int **)((int)register0x00000054 + 4);
      uVar9 = piVar4 == (int *)0x0;
      if (!(bool)uVar9) {
        uVar5 = piVar4[1];
        uVar1 = *(uint *)((int)register0x00000054 + 8);
        uVar9 = uVar1 == uVar5;
        if (uVar1 < uVar5) {
          iVar2 = *piVar4 + uVar1 * 0x30;
          *(int *)((int)register0x00000054 + -4) = iVar2;
          FUN_00098ddc(iVar2,iVar2,(undefined1 *)((int)register0x00000054 + -0x38));
          uVar1 = *(uint *)((int)register0x00000054 + 0xc);
          uVar9 = uVar1 == uVar5;
          if (uVar1 < uVar5) {
            iVar7 = *_UNK_0049f764;
            iVar2 = uVar1 * 3;
            iVar6 = extraout_r3 + uVar1 * 0x30;
            *(int *)((int)register0x00000054 + -8) = iVar6;
            if (iVar7 != 0) {
              *(undefined4 *)((int)register0x00000054 + -0x44) = _UNK_0049f768;
              *(undefined4 *)((int)register0x00000054 + -0x40) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(int *)((int)register0x00000054 + -0x3c) = iVar6;
              iVar2 = FUN_00022914();
              iVar6 = *(int *)((int)register0x00000054 + -8);
            }
            FUN_00098ddc(iVar2,iVar6,*(undefined4 *)((int)register0x00000054 + -4));
            uVar3 = 0;
            if (*_UNK_0049f764 != 0) {
              *(undefined4 *)((int)register0x00000054 + -0x44) = _UNK_0049f768;
              *(undefined4 *)((int)register0x00000054 + -0x40) =
                   *(undefined4 *)((int)register0x00000054 + -8);
              *(undefined1 **)((int)register0x00000054 + -0x3c) =
                   (undefined1 *)((int)register0x00000054 + -0x38);
              uVar3 = FUN_00022914();
            }
            FUN_00098ddc(uVar3,(undefined1 *)((int)register0x00000054 + -0x38),
                         *(undefined4 *)((int)register0x00000054 + -8));
                    /* WARNING: Could not recover jumptable at 0x0049f720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x48))();
            return;
          }
          FUN_000986f8(uVar1,uVar5);
        }
        FUN_000986f8();
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x48);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x49f740;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



