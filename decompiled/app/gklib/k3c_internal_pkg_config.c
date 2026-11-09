// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/config   functions: 8
/* k3c/internal/pkg/config.LoadConfig @ 0042e3ac (size 776) */

/* WARNING: Removing unreachable block (ram,0x0042e4a0) */
/* WARNING: Removing unreachable block (ram,0x0042e4f4) */
/* WARNING: Removing unreachable block (ram,0x0042e4f8) */

void k3c_internal_pkg_config_LoadConfig(void)

{
  undefined *puVar1;
  int extraout_r1;
  undefined4 extraout_r2;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000008;
  undefined4 *puStack_7c;
  int iStack_74;
  undefined *puStack_34;
  undefined *puStack_30;
  undefined *puStack_2c;
  undefined *puStack_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_14;
  undefined **ppuStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  while (&uStack_c <= *(undefined4 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_common_utils_file_GetBytes();
  puVar1 = PTR_DAT_0042e6b8;
  if (iStack_74 == 0) {
    FUN_00022cf8();
    iStack_4 = in_stack_00000008;
    FUN_000908bc();
    if (*(int *)PTR_DAT_0042e6bc != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(int *)(iStack_4 + 0xa0);
      FUN_00026bd4();
    }
    FUN_0009de70(0,iStack_4,puVar1);
    *(undefined4 *)(iStack_4 + 0xa0) = extraout_r2;
    FUN_001574a4();
    if (*(char *)(iStack_4 + 0x24) != '\0') {
      FUN_00022cf8();
      *puStack_7c = PTR_k3c_internal_pkg_config_LoadConfig_gowrap1_0042e6d8;
      if (*(int *)PTR_DAT_0042e6bc != 0) {
        puStack_7c = (undefined4 *)FUN_0009db54();
        *unaff_r8 = iStack_4;
      }
      puStack_7c[1] = iStack_4;
      FUN_00062dd0();
    }
    return;
  }
  (**(code **)(iStack_74 + 0xc))();
  FUN_0009def4(0,&puStack_34);
  puStack_34 = PTR_DAT_0042e6c4;
  puStack_30 = PTR_DAT_0042e6dc;
  FUN_0008f77c();
  puStack_2c = PTR_DAT_0042e6c4;
  puStack_24 = PTR_DAT_0042e6c4;
  puStack_20 = PTR_DAT_0042e6e0;
  FUN_0008f77c();
  puStack_1c = PTR_DAT_0042e6c4;
  puStack_14 = PTR_k3c_internal_pkg_config_LoadConfig_Println_func1_0042e6e4;
  uStack_c = 4;
  uStack_8 = 4;
  ppuStack_10 = &puStack_34;
  FUN_00178514();
  return;
}



/* k3c/internal/pkg/config.LoadConfig.gowrap1 @ 0042e6e8 (size 84) */

void k3c_internal_pkg_config_LoadConfig_gowrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  k3c_internal_pkg_config___Config__reloadPasswd();
  return;
}



/* k3c/internal/pkg/config.LoadConfig.Println.func2 @ 0042e73c (size 108) */

void k3c_internal_pkg_config_LoadConfig_Println_func2(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  FUN_0013bc78();
  return;
}



/* k3c/internal/pkg/config.LoadConfig.Println.func1 @ 0042e7a8 (size 108) */

void k3c_internal_pkg_config_LoadConfig_Println_func1(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  FUN_0013bc78();
  return;
}



/* k3c/internal/pkg/config.(*Config).reloadPasswd @ 0042e814 (size 1008) */

/* WARNING: Removing unreachable block (ram,0x0042e9d8) */

void k3c_internal_pkg_config___Config__reloadPasswd(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 *local_b4;
  undefined4 *local_ac;
  int local_a8;
  undefined4 *local_a4;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [7];
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (local_40 <= *(undefined4 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0009df04(0,&local_14);
  local_14 = *(undefined4 *)(in_stack_00000004 + 4);
  local_10 = *(undefined4 *)(in_stack_00000004 + 8);
  local_8 = 0xb;
  local_c = DAT_0042ec08;
  local_ac = (undefined4 *)0x0;
  FUN_0014f8fc();
  while (k3c_common_utils_file_GetBytes(), local_a8 == 0) {
    FUN_00022cf8();
    *local_a4 = 0;
    local_b4 = local_ac;
    local_4 = local_a4;
    FUN_001574a4();
    puVar3 = (undefined4 *)*local_4;
    for (iVar2 = local_4[1]; 0 < iVar2; iVar2 = iVar2 + -1) {
      local_b4 = (undefined4 *)*puVar3;
      uVar4 = puVar3[3];
      uVar5 = puVar3[2];
      FUN_00093a08();
      local_a4[1] = uVar4;
      puVar1 = local_a4;
      if (*DAT_0042ec44 != 0) {
        puVar1 = (undefined4 *)FUN_0009db64();
        *unaff_r8 = uVar5;
        unaff_r8[1] = *puVar1;
      }
      *puVar1 = uVar5;
      puVar3 = puVar3 + 4;
    }
    FUN_0009defc(0,&local_7c);
    local_7c = DAT_0042ec0c;
    local_78 = DAT_0042ec10;
    FUN_0008f77c();
    local_74 = DAT_0042ec0c;
    local_70 = local_b4;
    local_6c = DAT_0042ec0c;
    local_68 = DAT_0042ec14;
    local_24 = DAT_0042ec18;
    local_1c = 3;
    local_18 = 3;
    local_20 = &local_7c;
    unaff_r8 = (undefined4 *)0x2;
    FUN_00178514();
    FUN_0009a76c();
    local_ac = local_a4;
  }
  (**(code **)(local_a8 + 0xc))();
  FUN_0009def4(0,&local_5c);
  local_5c = DAT_0042ec0c;
  local_58 = DAT_0042ec34;
  FUN_0008f77c();
  local_54 = DAT_0042ec0c;
  local_50 = 2;
  local_4c = DAT_0042ec0c;
  local_48 = DAT_0042ec38;
  FUN_0008f77c();
  local_44 = DAT_0042ec0c;
  local_40[0] = 2;
  local_24 = DAT_0042ec3c;
  local_1c = 4;
  local_18 = 4;
  local_20 = &local_5c;
  FUN_00178514();
  return;
}



/* k3c/internal/pkg/config.(*Config).reloadPasswd.Println.func3 @ 0042ec48 (size 108) */

void k3c_internal_pkg_config___Config__reloadPasswd_Println_func3(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  FUN_0013bc78();
  return;
}



/* k3c/internal/pkg/config.(*Config).reloadPasswd.Printf.func2 @ 0042ecb4 (size 124) */

void k3c_internal_pkg_config___Config__reloadPasswd_Printf_func2(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  FUN_0013b7d0();
  return;
}



/* k3c/internal/pkg/config.(*Config).reloadPasswd.Print.func1 @ 0042ed30 (size 108) */

void k3c_internal_pkg_config___Config__reloadPasswd_Print_func1(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  FUN_0013ba2c();
  return;
}



