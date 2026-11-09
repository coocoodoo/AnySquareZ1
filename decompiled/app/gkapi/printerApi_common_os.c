// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/os   functions: 4
/* printerApi/common/os.NetworkMac @ 003eb0d4 (size 784) */

void printerApi_common_os_NetworkMac(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int extraout_r3;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int local_5c;
  int local_58;
  int local_50;
  int local_48;
  uint local_44;
  uint local_40;
  undefined1 auStack_28 [8];
  char *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_8;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x3eb3e0;
    FUN_00096bb8();
  }
  FUN_001b77e4();
  if (local_50 != 0) {
    printerApi_common_os_RandomMac();
    return;
  }
  while( true ) {
    if (local_58 < 1) {
      printerApi_common_os_RandomMac();
      return;
    }
    local_4 = local_5c;
    FUN_00098dfc(local_5c,local_5c,auStack_28,local_58,unaff_lr);
    if ((((local_18 != 0) && (local_1c == 5)) && (*local_20 == 'w')) &&
       (((local_20[1] == 'l' && (local_20[2] == 'a')) &&
        ((local_20[3] == 'n' && (local_20[4] == '0')))))) break;
    local_5c = local_4 + 0x20;
    local_58 = extraout_r3 + -1;
  }
  if (local_14 != 0) {
    local_8 = local_18;
    uVar5 = local_14 * 3 - 1;
    FUN_000933e8();
    uVar8 = 0;
    iVar4 = 0;
    iVar6 = local_8;
    for (iVar7 = 0; iVar7 < local_14; iVar7 = iVar7 + 1) {
      bVar1 = *(byte *)(iVar6 + iVar7);
      if (0 < iVar7) {
        uVar8 = uVar8 + 1;
        if (uVar5 < uVar8) {
          FUN_00093524();
          iVar4 = local_48;
          iVar6 = local_8;
          uVar5 = local_40;
          uVar8 = local_44;
        }
        *(undefined1 *)(iVar4 + (uVar8 - 1)) = 0x3a;
      }
      uVar2 = PTR_DAT_003eb3f4[bVar1 >> 4];
      uVar9 = uVar8 + 1;
      if (uVar5 < uVar8 + 1) {
        FUN_00093524();
        iVar4 = local_48;
        iVar6 = local_8;
        uVar5 = local_40;
        uVar9 = local_44;
      }
      puVar3 = PTR_DAT_003eb3f4;
      *(undefined1 *)(iVar4 + (uVar9 - 1)) = uVar2;
      uVar2 = puVar3[bVar1 & 0xf];
      uVar8 = uVar9 + 1;
      if (uVar5 < uVar9 + 1) {
        FUN_00093524();
        iVar4 = local_48;
        iVar6 = local_8;
        uVar5 = local_40;
        uVar8 = local_44;
      }
      *(undefined1 *)(iVar4 + (uVar8 - 1)) = uVar2;
    }
    FUN_00093e34();
  }
  FUN_0014913c();
  FUN_00147d60();
  return;
}



/* printerApi/common/os.CPUSerial @ 003eb3f8 (size 380) */

/* WARNING: Removing unreachable block (ram,0x003eb4e4) */
/* WARNING: Removing unreachable block (ram,0x003eb4f4) */
/* WARNING: Removing unreachable block (ram,0x003eb504) */
/* WARNING: Removing unreachable block (ram,0x003eb510) */
/* WARNING: Removing unreachable block (ram,0x003eb51c) */
/* WARNING: Removing unreachable block (ram,0x003eb528) */
/* WARNING: Removing unreachable block (ram,0x003eb534) */
/* WARNING: Removing unreachable block (ram,0x003eb540) */

void printerApi_common_os_CPUSerial(void)

{
  int iVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_1c;
  undefined4 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00125de4();
  if (local_1c != 0) {
    return;
  }
  FUN_00093e34();
  FUN_00146be8();
  for (iVar1 = 0; iVar1 < local_14; iVar1 = iVar1 + 1) {
    FUN_00146f38();
  }
  return;
}



/* printerApi/common/os.MachineId @ 003eb580 (size 116) */

void printerApi_common_os_MachineId(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_os_CPUSerial();
  if (local_18 == 0) {
    github_com_google_uuid_NewString();
  }
  FUN_000715a4();
  return;
}



/* printerApi/common/os.RandomMac @ 003eb5fc (size 472) */

void printerApi_common_os_RandomMac(undefined4 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int extraout_r2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x54);
      *(undefined4 *)((int)register0x00000054 + -0x54) = unaff_lr;
      uVar1 = github_com_google_uuid_NewString();
      uVar2 = *(uint *)((int)register0x00000054 + -0x4c);
      uVar4 = uVar2 == 0x1a;
      if (0x19 < uVar2) {
        uVar4 = uVar2 == 0x1c;
        if (0x1b < uVar2) {
          uVar4 = uVar2 == 0x1e;
          if (0x1d < uVar2) {
            uVar4 = uVar2 == 0x20;
            if (0x1f < uVar2) {
              uVar4 = uVar2 == 0x22;
              if (0x21 < uVar2) {
                uVar4 = uVar2 == 0x24;
                if (0x23 < uVar2) {
                  *(undefined4 *)((int)register0x00000054 + -0x34) =
                       *(undefined4 *)((int)register0x00000054 + -0x50);
                  FUN_00098a08(0,(undefined1 *)((int)register0x00000054 + -0x30));
                  *(int *)((int)register0x00000054 + -0x50) = extraout_r2 + 0x18;
                  *(undefined4 *)((int)register0x00000054 + -0x4c) = 2;
                  FUN_0008a578();
                  *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_003eb7d8;
                  *(undefined4 *)((int)register0x00000054 + -0x2c) =
                       *(undefined4 *)((int)register0x00000054 + -0x48);
                  *(int *)((int)register0x00000054 + -0x50) =
                       *(int *)((int)register0x00000054 + -0x34) + 0x1a;
                  *(undefined4 *)((int)register0x00000054 + -0x4c) = 2;
                  FUN_0008a578();
                  *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_003eb7d8;
                  *(undefined4 *)((int)register0x00000054 + -0x24) =
                       *(undefined4 *)((int)register0x00000054 + -0x48);
                  *(int *)((int)register0x00000054 + -0x50) =
                       *(int *)((int)register0x00000054 + -0x34) + 0x1c;
                  *(undefined4 *)((int)register0x00000054 + -0x4c) = 2;
                  FUN_0008a578();
                  *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_003eb7d8;
                  *(undefined4 *)((int)register0x00000054 + -0x1c) =
                       *(undefined4 *)((int)register0x00000054 + -0x48);
                  *(int *)((int)register0x00000054 + -0x50) =
                       *(int *)((int)register0x00000054 + -0x34) + 0x1e;
                  *(undefined4 *)((int)register0x00000054 + -0x4c) = 2;
                  FUN_0008a578();
                  *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_003eb7d8;
                  *(undefined4 *)((int)register0x00000054 + -0x14) =
                       *(undefined4 *)((int)register0x00000054 + -0x48);
                  *(int *)((int)register0x00000054 + -0x50) =
                       *(int *)((int)register0x00000054 + -0x34) + 0x20;
                  *(undefined4 *)((int)register0x00000054 + -0x4c) = 2;
                  FUN_0008a578();
                  *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_003eb7d8;
                  *(undefined4 *)((int)register0x00000054 + -0xc) =
                       *(undefined4 *)((int)register0x00000054 + -0x48);
                  *(int *)((int)register0x00000054 + -0x50) =
                       *(int *)((int)register0x00000054 + -0x34) + 0x22;
                  *(undefined4 *)((int)register0x00000054 + -0x4c) = 2;
                  FUN_0008a578();
                  *(undefined4 *)((int)register0x00000054 + -8) = DAT_003eb7d8;
                  *(undefined4 *)((int)register0x00000054 + -4) =
                       *(undefined4 *)((int)register0x00000054 + -0x48);
                  *(undefined4 *)((int)register0x00000054 + -0x50) = DAT_003eb7dc;
                  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0x11;
                  *(undefined1 **)((int)register0x00000054 + -0x48) =
                       (undefined1 *)((int)register0x00000054 + -0x30);
                  *(undefined4 *)((int)register0x00000054 + -0x44) = 6;
                  *(undefined4 *)((int)register0x00000054 + -0x40) = 6;
                  FUN_001331ac();
                  *(undefined4 *)((int)register0x00000054 + -0x50) =
                       *(undefined4 *)((int)register0x00000054 + -0x3c);
                  *(undefined4 *)((int)register0x00000054 + -0x4c) =
                       *(undefined4 *)((int)register0x00000054 + -0x38);
                  FUN_00147d60();
                  *(undefined4 *)((int)register0x00000054 + 4) =
                       *(undefined4 *)((int)register0x00000054 + -0x48);
                  *(undefined4 *)((int)register0x00000054 + 8) =
                       *(undefined4 *)((int)register0x00000054 + -0x44);
                  return;
                }
                uVar1 = FUN_00098718(uVar1,0x24);
              }
              uVar1 = FUN_00098718(uVar1,0x22);
            }
            uVar1 = FUN_00098718(uVar1,0x20);
          }
          uVar1 = FUN_00098718(uVar1,0x1e);
        }
        uVar1 = FUN_00098718(uVar1,0x1c);
      }
      param_1 = FUN_00098718(uVar1,0x1a);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x54);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x3eb7d0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



