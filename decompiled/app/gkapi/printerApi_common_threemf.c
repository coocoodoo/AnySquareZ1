// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/threemf   functions: 27
/* printerApi/common/threemf.init.func1 @ 0043e6ec (size 144) */

void printerApi_common_threemf_init_func1(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_ffffffa4;
  undefined4 uVar2;
  undefined1 auStack_58 [24];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [24];
  undefined1 auStack_1c [24];
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x43e778;
    FUN_00096bb8();
  }
  FUN_0001eed8();
  uVar1 = in_stack_00000004;
  uVar2 = in_stack_00000008;
  local_4 = in_stack_ffffffa4;
  printerApi_common_file_DiskUsage();
  local_38 = local_40;
  uVar1 = FUN_00098e0c(local_40,auStack_58,auStack_34,local_3c,unaff_lr,uVar1,uVar2);
  uVar1 = FUN_00098e0c(uVar1,auStack_34,auStack_1c);
  FUN_00098e0c(uVar1,auStack_1c,local_4);
  return;
}



/* printerApi/common/threemf.Detect @ 0043e784 (size 156) */

void printerApi_common_threemf_Detect(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  undefined8 uVar6;
  
  do {
    uVar6 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      if (*(int *)((int)register0x00000054 + 8) == 0) {
        *(undefined1 *)((int)register0x00000054 + 0xc) = 0;
                    /* WARNING: Could not recover jumptable at 0x0043e808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x14))();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0xc) = *(int *)((int)register0x00000054 + 8);
      FUN_00148180();
      uVar3 = *(uint *)((int)register0x00000054 + -4);
      if ((int)uVar3 < 4) {
        uVar1 = 0;
        goto LAB_0043e7f8;
      }
      uVar2 = uVar3 - 4;
      bVar5 = uVar3 == uVar2;
      if (uVar2 <= uVar3) {
        *(uint *)((int)register0x00000054 + -0x10) = *(int *)((int)register0x00000054 + -8) + uVar2;
        *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_0043e824;
        *(undefined4 *)((int)register0x00000054 + -8) = 4;
        FUN_000150d4();
        uVar1 = *(undefined1 *)((int)register0x00000054 + -4);
LAB_0043e7f8:
        *(undefined1 *)((int)register0x00000054 + 0xc) = uVar1;
        return;
      }
      unaff_lr = 0x43e810;
      uVar6 = FUN_00098758();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      param_3 = extraout_r2;
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    param_1 = FUN_00096bb8((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x43e81c;
    param_3 = extraout_r2_00;
  } while( true );
}



/* printerApi/common/threemf.Get3mfTempGcodePath @ 0043e828 (size 900) */

void printerApi_common_threemf_Get3mfTempGcodePath(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_r2;
  uint extraout_r2_00;
  undefined4 uVar7;
  undefined4 extraout_r3;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  bool bVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x58) = unaff_lr;
      if (*(int *)((int)register0x00000054 + 8) == 0) {
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0043ebd4;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 0x18;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 0;
        FUN_00130144();
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
                    /* WARNING: Could not recover jumptable at 0x0043eb88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x58))();
        return;
      }
      iVar5 = *(int *)(*(int *)(*(int *)PTR_DAT_0043ebb0 + 8) + 0x16c);
      puVar3 = *(undefined **)(*(int *)(*(int *)PTR_DAT_0043ebb0 + 8) + 0x168);
      if (iVar5 == 0) {
        iVar5 = 0x18;
        puVar3 = PTR_DAT_0043ebb4;
      }
      *(undefined **)((int)register0x00000054 + -0x24) = puVar3;
      *(int *)((int)register0x00000054 + -0x2c) = iVar5;
      *(undefined **)((int)register0x00000054 + -0x54) = puVar3;
      *(int *)((int)register0x00000054 + -0x50) = iVar5;
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x48) = *(int *)((int)register0x00000054 + 8);
      FUN_00157f48();
      if (*(int *)((int)register0x00000054 + -0x3c) != 0) {
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -0x3c) + 4);
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0043ebb8;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 0x22;
        *(undefined1 **)((int)register0x00000054 + -0x4c) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 1;
        FUN_00130144();
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        return;
      }
      uVar6 = *(uint *)((int)register0x00000054 + -0x40);
      *(uint *)((int)register0x00000054 + -0x30) = uVar6;
      iVar5 = *(int *)((int)register0x00000054 + -0x44);
      *(int *)((int)register0x00000054 + -0x28) = iVar5;
      if ((int)uVar6 < 2) {
        cVar1 = '\0';
      }
      else {
        *(int *)((int)register0x00000054 + -0x54) = iVar5;
        *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_0043ebbc;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 2;
        FUN_000150d4();
        cVar1 = *(char *)((int)register0x00000054 + -0x48);
        uVar6 = *(uint *)((int)register0x00000054 + -0x30);
        iVar5 = *(int *)((int)register0x00000054 + -0x28);
      }
      if (cVar1 != '\0') {
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + 8);
        FUN_0008a578();
        *(undefined **)((int)register0x00000054 + -8) = PTR_SUB_0043ebcc;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_0043ebd0;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 0x29;
        *(undefined1 **)((int)register0x00000054 + -0x4c) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x48) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 1;
        FUN_00130144();
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        return;
      }
      if ((int)uVar6 < 4) {
        cVar1 = '\0';
LAB_0043e998:
        if (cVar1 == '\0') {
LAB_0043e9b4:
          *(uint *)((int)register0x00000054 + -0x34) = uVar6;
          *(int *)((int)register0x00000054 + -0x54) = iVar5;
          *(uint *)((int)register0x00000054 + -0x50) = uVar6;
          FUN_00148180();
          uVar6 = *(uint *)((int)register0x00000054 + -0x48);
          if (5 < (int)uVar6) {
            uVar2 = uVar6 - 6;
            uVar9 = uVar6 == uVar2;
            if (uVar6 < uVar2) {
              FUN_00098758();
              goto LAB_0043eb90;
            }
            *(uint *)((int)register0x00000054 + -0x54) =
                 uVar2 + *(int *)((int)register0x00000054 + -0x4c);
            *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_0043ebc4;
            *(undefined4 *)((int)register0x00000054 + -0x4c) = 6;
            FUN_000150d4();
            if (*(char *)((int)register0x00000054 + -0x48) != '\0') {
              uVar4 = *(undefined4 *)((int)register0x00000054 + -0x34);
              uVar7 = *(undefined4 *)((int)register0x00000054 + -0x28);
              goto LAB_0043ea4c;
            }
          }
          *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_0043ebc4;
          *(undefined4 *)((int)register0x00000054 + -0x44) = 6;
          FUN_000715a4();
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0x40);
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0x3c);
LAB_0043ea4c:
          FUN_00098a20(0,(undefined1 *)((int)register0x00000054 + -0x20),uVar4,uVar7);
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -0x14) = 9;
          *(undefined **)((int)register0x00000054 + -0x18) =
               PTR_s__3mf_tempthumbnailgkapi_loggklib_0077568d_0x693_0043ebc8;
          *(undefined4 *)((int)register0x00000054 + -0xc) = extraout_r2;
          *(undefined4 *)((int)register0x00000054 + -0x10) = extraout_r3;
          *(undefined1 **)((int)register0x00000054 + -0x54) =
               (undefined1 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x50) = 3;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = 3;
          FUN_00159184();
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
          return;
        }
        uVar2 = uVar6 - 4;
        bVar10 = uVar2 <= uVar6;
        uVar9 = uVar6 == uVar2;
        uVar6 = uVar2;
        if (bVar10) goto LAB_0043e9b4;
LAB_0043eb90:
        uVar2 = FUN_00098718();
        uVar6 = extraout_r2_00;
      }
      else {
        uVar2 = uVar6 - 4;
        uVar9 = uVar6 == uVar2;
        if (uVar2 <= uVar6) {
          *(uint *)((int)register0x00000054 + -0x54) = iVar5 + uVar2;
          *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_0043ebc0;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = 4;
          FUN_000150d4();
          cVar1 = *(char *)((int)register0x00000054 + -0x48);
          uVar6 = *(uint *)((int)register0x00000054 + -0x30);
          iVar5 = *(int *)((int)register0x00000054 + -0x28);
          goto LAB_0043e998;
        }
      }
      param_1 = FUN_00098758(uVar2,uVar6);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x58);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x43eba8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/threemf.HasPlateMetadata @ 0043ebd8 (size 716) */

/* WARNING: Removing unreachable block (ram,0x0043edc0) */
/* WARNING: Removing unreachable block (ram,0x0043edd4) */
/* WARNING: Removing unreachable block (ram,0x0043ee84) */
/* WARNING: Removing unreachable block (ram,0x0043ee8c) */
/* WARNING: Removing unreachable block (ram,0x0043ee90) */
/* WARNING: Removing unreachable block (ram,0x0043ede0) */
/* WARNING: Removing unreachable block (ram,0x0043edcc) */
/* WARNING: Removing unreachable block (ram,0x0043ee24) */

void printerApi_common_threemf_HasPlateMetadata(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_r3;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined1 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uVar4;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined *local_1c [2];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x43eea0;
    FUN_00096bb8();
  }
  local_4 = (undefined **)0x0;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  if (in_stack_00000008 != 0) {
    uVar4 = in_stack_00000004;
    iVar1 = in_stack_00000008;
    FUN_004245e8();
    if (local_40 != 0) {
      FUN_00098a28(0,&local_14,local_3c,local_40,unaff_lr,uVar4,iVar1);
      if (*(int *)PTR_DAT_0043eeac == 0) {
        local_14 = 0;
      }
      else {
        local_14 = *(undefined4 *)(*(int *)PTR_DAT_0043eeac + 4);
      }
      local_10 = *(undefined4 *)PTR_DAT_0043eeb0;
      if (extraout_r3 == 0) {
        local_c = 0;
      }
      else {
        local_c = *(undefined4 *)(extraout_r3 + 4);
      }
      FUN_00130144();
      return;
    }
    local_1c[0] = PTR_printerApi_common_threemf_HasPlateMetadata_deferwrap1_0043eea8;
    local_4 = local_1c;
    iVar3 = *(int *)(local_44 + 0xc);
    iVar2 = *(int *)(local_44 + 0x10);
    for (iVar1 = 0; iVar1 < iVar2; iVar1 = iVar1 + 1) {
      if (0xe < *(int *)(*(int *)(iVar3 + iVar1 * 4) + 4)) {
        FUN_000150d4();
      }
    }
    in_stack_0000000c = 0;
    in_stack_00000010 = 0;
    in_stack_00000014 = 0;
    (*(code *)*local_4)();
    return;
  }
  FUN_00130144();
  return;
}



/* printerApi/common/threemf.HasPlateMetadata.deferwrap1 @ 0043eec4 (size 100) */

void printerApi_common_threemf_HasPlateMetadata_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if ((undefined4 *)**(int **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = *(undefined4 *)**(int **)(unaff_r7 + 4);
    FUN_00127938();
  }
  return;
}



/* printerApi/common/threemf.PreCheck @ 0043ef28 (size 1904) */

void printerApi_common_threemf_PreCheck(void)

{
  undefined **ppuVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int extraout_r3;
  int extraout_r3_00;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  int unaff_r10;
  undefined4 unaff_lr;
  bool bVar12;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined **local_a0;
  uint uStack_9c;
  undefined4 local_98;
  undefined *local_48 [2];
  undefined *local_40;
  undefined4 local_3c;
  undefined *local_38;
  undefined **local_34;
  undefined *local_30;
  undefined **local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined *local_20;
  undefined *local_1c;
  undefined *local_18;
  undefined **local_14;
  undefined *local_10;
  undefined **local_c;
  int local_8;
  undefined **local_4;
  
  ppuVar1 = local_a0;
  while (&local_2c <= *(undefined ****)(unaff_r10 + 8)) {
    unaff_lr = 0x43f694;
    FUN_00096bb8();
  }
  local_4 = (undefined **)0x0;
  FUN_004245e8();
  if (uStack_9c != 0) {
    FUN_00098a28(0,&local_18,local_98,uStack_9c,unaff_lr,in_stack_00000004,in_stack_00000008);
    if (*(int *)PTR_DAT_0043f6a8 == 0) {
      local_18 = (undefined *)0x0;
    }
    else {
      local_18 = *(undefined **)(*(int *)PTR_DAT_0043f6a8 + 4);
    }
    local_14 = *(undefined ***)PTR_DAT_0043f6ac;
    if (extraout_r3 == 0) {
      local_10 = (undefined *)0x0;
    }
    else {
      local_10 = *(undefined **)(extraout_r3 + 4);
    }
    FUN_00130144();
    return;
  }
  local_48[0] = PTR_printerApi_common_threemf_PreCheck_deferwrap1_0043f69c;
  local_4 = local_48;
  local_20 = PTR_SUB_0043f6a0;
  local_1c = PTR_DAT_0043f6a4;
  local_a0 = (undefined **)0x1;
  printerApi_common_logger_Debug();
  iVar4 = *(int *)((int)ppuVar1 + 0xc);
  iVar2 = *(int *)((int)ppuVar1 + 0x10);
  iVar6 = 0;
  uVar7 = 0;
  iVar8 = 0;
  local_8 = iVar4;
  for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
    iVar9 = *(int *)(iVar4 + iVar5 * 4);
    if (*(int *)(iVar9 + 4) < 0xf) {
      uVar10 = 0;
    }
    else {
      local_a0 = (undefined **)&DAT_0000000f;
      FUN_000150d4();
      uVar10 = uStack_9c & 0xff;
      iVar4 = local_8;
    }
    if (uVar10 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)(iVar9 + 4);
      if ((int)uVar10 < 6) {
        uVar10 = 0;
      }
      else {
        if (uVar10 < uVar10 - 6) {
          uVar3 = FUN_00098758(uVar10 - 6,uVar10);
          FUN_0004fb3c(uVar3);
          return;
        }
        local_a0 = (undefined **)&DAT_00000006;
        FUN_000150d4();
        uVar10 = uStack_9c & 0xff;
        iVar4 = local_8;
      }
    }
    if (uVar10 != 0) {
      uVar10 = *(uint *)(iVar9 + 0x48);
      iVar4 = *(int *)(iVar9 + 0x4c);
      FUN_00098a28(0,&local_18);
      FUN_0008a578();
      local_18 = PTR_SUB_0043f6a0;
      local_14 = local_a0;
      FUN_000869d0();
      FUN_0008a4bc();
      local_10 = PTR_DAT_0043f6c0;
      local_c = local_a0;
      local_a0 = &local_18;
      uStack_9c = 2;
      local_98 = 2;
      printerApi_common_logger_Debugf();
      iVar6 = iVar6 + 1;
      bVar12 = CARRY4(uVar7,uVar10);
      uVar7 = uVar7 + uVar10;
      iVar8 = iVar8 + iVar4 + (uint)bVar12;
      iVar4 = local_8;
    }
  }
  if (iVar6 != 0) {
    (*(code *)**(undefined4 **)PTR_DAT_0043f6d4)();
    if (uStack_9c != 0) {
      FUN_00098a28(0,&local_18,local_98,uStack_9c,unaff_lr,in_stack_0000000c,in_stack_00000010);
      if (*(int *)PTR_DAT_0043f6d8 == 0) {
        local_18 = (undefined *)0x0;
      }
      else {
        local_18 = *(undefined **)(*(int *)PTR_DAT_0043f6d8 + 4);
      }
      local_14 = *(undefined ***)PTR_DAT_0043f6dc;
      if (extraout_r3_00 == 0) {
        local_10 = (undefined *)0x0;
      }
      else {
        local_10 = *(undefined **)(extraout_r3_00 + 4);
      }
      FUN_00130144();
      (*(code *)*local_4)();
      return;
    }
    puVar11 = (undefined *)(iVar8 + (uint)(0xf37fffff < uVar7));
    if (local_a0[5] < puVar11 ||
        local_a0[5] == puVar11 && local_a0[4] < (undefined *)(uVar7 + 0xc800000)) {
      FUN_00098a18(0,&local_40);
      local_40 = (undefined *)0x0;
      if (*(int *)PTR_DAT_0043f6e0 != 0) {
        local_40 = *(undefined **)(*(int *)PTR_DAT_0043f6e0 + 4);
      }
      local_3c = *(undefined4 *)PTR_DAT_0043f6e4;
      FUN_0008a4bc();
      local_38 = PTR_DAT_0043f6e8;
      local_34 = local_a0;
      FUN_0008a4bc();
      local_30 = PTR_DAT_0043f6e8;
      local_2c = local_a0;
      local_28 = PTR_DAT_0043f6ec;
      local_24 = PTR_DAT_0043f6f0;
      FUN_00130144();
      (*(code *)*local_4)();
      return;
    }
    FUN_00098a18(0,&local_40);
    FUN_0001cec0();
    local_40 = PTR_DAT_0043f6ec;
    local_3c = in_stack_00000010;
    FUN_000869d0();
    FUN_0008a4bc();
    local_38 = PTR_DAT_0043f6c0;
    local_34 = local_a0;
    FUN_000869d0();
    FUN_0008a4bc();
    local_30 = PTR_DAT_0043f6c0;
    local_2c = local_a0;
    local_28 = PTR_DAT_0043f6c0;
    local_24 = PTR_DAT_0043f6f8;
    printerApi_common_logger_RedDebugf();
    (*(code *)*local_4)();
    return;
  }
  local_20 = (undefined *)0x0;
  if (*(int *)PTR_DAT_0043f6c8 != 0) {
    local_20 = *(undefined **)(*(int *)PTR_DAT_0043f6c8 + 4);
  }
  local_1c = *(undefined **)PTR_DAT_0043f6cc;
  FUN_00130144();
  (*(code *)*local_4)();
  return;
}



/* printerApi/common/threemf.PreCheck.deferwrap1 @ 0043f700 (size 100) */

void printerApi_common_threemf_PreCheck_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if ((undefined4 *)**(int **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = *(undefined4 *)**(int **)(unaff_r7 + 4);
    FUN_00127938();
  }
  return;
}



/* printerApi/common/threemf.Unpack @ 0043f764 (size 728) */

void printerApi_common_threemf_Unpack(void)

{
  undefined4 *extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 *in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *in_stack_ffffffb4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  int in_stack_ffffffb8;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_3c;
  undefined1 local_20 [16];
  undefined *local_10;
  undefined4 local_c;
  undefined4 *local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x43fa38;
    FUN_00096bb8();
  }
  FUN_00098a24(0,&stack0x00000028);
  if (in_stack_00000010 == 0) {
    internal_filepathlite_Dir();
    in_stack_00000010 = in_stack_ffffffb8;
    in_stack_0000000c = in_stack_ffffffb4;
    in_stack_ffffffb4 = in_stack_0000000c;
  }
  if (in_stack_00000018 == 0) {
    in_stack_00000014 = DAT_0043fa40;
    in_stack_00000018 = 0xd;
  }
  if (in_stack_00000020 == 0 && in_stack_0000001c == 0) {
    in_stack_0000001c = DAT_0043fa44;
    in_stack_00000020 = 0x117;
  }
  puVar2 = (undefined4 *)0x0;
  FUN_00017058();
  puVar5 = in_stack_ffffffb4;
  FUN_0001eed8();
  *puVar2 = 0;
  puVar2[1] = 0;
  local_8 = puVar2;
  FUN_0001eed8();
  puVar1 = PTR_DAT_0043fa54;
  local_4 = puVar2;
  FUN_0001eed8();
  *puVar2 = PTR_printerApi_common_threemf_Unpack_func1_0043fa58;
  puVar3 = puVar2;
  if (*(int *)PTR_DAT_0043fa5c != 0) {
    FUN_000986a8();
    *unaff_r8 = in_stack_ffffffb4;
    unaff_r8[1] = local_4;
    unaff_r8[2] = local_8;
    unaff_r8[3] = in_stack_00000004;
    puVar5 = &stack0x0000000c;
    puVar1 = PTR_DAT_0043fa60;
    puVar3 = extraout_r2;
    FUN_00022914();
  }
  puVar2[1] = in_stack_ffffffb4;
  puVar2[2] = local_4;
  puVar2[3] = local_8;
  puVar2[5] = in_stack_00000008;
  puVar2[4] = in_stack_00000004;
  FUN_00098e04(puVar2,&stack0x0000000c,puVar2 + 6,in_stack_ffffffb4,unaff_lr,puVar1,puVar3);
  FUN_0005e168();
  FUN_001000a4();
  FUN_00098a28(0,local_20,*puVar5);
  uVar6 = 0;
  FUN_00067f3c();
  if (local_3c == 0) {
    local_10 = (undefined *)0x0;
    local_c = 0;
    FUN_0008a4bc();
    local_10 = PTR_DAT_0043fa64;
    uVar4 = 0x17;
    ppuVar7 = &local_10;
    uVar8 = 1;
    uVar9 = 1;
    puVar1 = PTR_DAT_0043fa68;
    local_c = uVar6;
    FUN_00130144();
    FUN_00098a24(0,&stack0x00000028,0,1,unaff_lr,puVar1,uVar4,ppuVar7,uVar8,uVar9);
    return;
  }
  FUN_00098e14(local_3c,local_4,&stack0x00000028);
  return;
}



/* printerApi/common/threemf.Unpack.func1 @ 0043fa6c (size 304) */

void printerApi_common_threemf_Unpack_func1(void)

{
  undefined4 uVar1;
  undefined4 extraout_r3;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_r7;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *apuStack_80 [7];
  undefined1 auStack_64 [20];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_45;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [20];
  undefined4 uStack_24;
  undefined1 auStack_20 [20];
  undefined4 *puStack_c;
  undefined4 uStack_8;
  undefined4 *puStack_4;
  
  while( true ) {
    if (*(undefined4 ***)(unaff_r10 + 8) < &puStack_c) break;
    UNRECOVERED_JUMPTABLE = (code *)0x43fba0;
    FUN_00096b54();
  }
  uStack_3c = *(undefined4 *)(unaff_r7 + 4);
  uVar2 = *(undefined4 *)(unaff_r7 + 0x10);
  uVar3 = *(undefined4 *)(unaff_r7 + 0x14);
  puStack_c = *(undefined4 **)(unaff_r7 + 0xc);
  uStack_8 = *(undefined4 *)(unaff_r7 + 8);
  uStack_40 = DAT_0043fba8;
  puStack_4 = &uStack_40;
  uStack_45 = 1;
  uVar1 = FUN_00098a24(0,auStack_38);
  FUN_00098e04(uVar1,(undefined4 *)(unaff_r7 + 0x18),apuStack_80);
  uVar1 = printerApi_common_threemf_doUnpack();
  uVar1 = FUN_00098e14(uVar1,auStack_64,auStack_38,uStack_50,UNRECOVERED_JUMPTABLE,uVar2,uVar3);
  uVar2 = FUN_00098e14(uVar1,auStack_38,auStack_20);
  uVar1 = uStack_4c;
  if (*DAT_0043fbac != 0) {
    uStack_24 = uStack_4c;
    FUN_00098688();
    *(undefined4 *)(unaff_r7 + 0x18) = uStack_4c;
    *(undefined4 *)(unaff_r7 + 0x1c) = puStack_c[1];
    apuStack_80[0] = auStack_20;
    uVar2 = FUN_00022914();
    uVar1 = uStack_24;
  }
  FUN_00098e14(uVar2,auStack_20,uStack_8);
  *puStack_c = extraout_r3;
  puStack_c[1] = uVar1;
  uStack_45 = 0;
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0043fb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/common/threemf.Unpack.func1.deferwrap1 @ 0043fbb4 (size 84) */

void printerApi_common_threemf_Unpack_func1_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_00017cc4();
  return;
}



/* printerApi/common/threemf.Extract @ 0043fc08 (size 1756) */

void printerApi_common_threemf_Extract(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_r2;
  int extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar4;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  undefined *in_stack_00000014;
  int in_stack_00000018;
  undefined4 *in_stack_00000028;
  undefined4 *in_stack_0000002c;
  undefined4 *in_stack_00000030;
  undefined4 *in_stack_00000034;
  byte bStack00000038;
  char cStack00000039;
  char cStack0000003a;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *local_c4;
  undefined4 *local_c0;
  undefined4 *local_bc;
  undefined4 local_b8;
  int local_b4;
  uint local_b0;
  undefined1 auStack_a8 [20];
  undefined4 local_94;
  undefined4 *local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 auStack_1c [20];
  undefined4 local_8;
  undefined4 *local_4;
  
  while (&local_50 <= *(undefined4 ***)(unaff_r10 + 8)) {
    unaff_lr = 0x4402e0;
    FUN_00096bb8();
  }
  uVar1 = FUN_00098a1c(0,&stack0x0000003c);
  if (in_stack_00000010 == (undefined4 *)0x0) {
    in_stack_00000010 = *(undefined4 **)(*(int *)(*(int *)PTR_DAT_004402e8 + 8) + 0x16c);
    in_stack_0000000c = *(undefined4 **)(*(int *)(*(int *)PTR_DAT_004402e8 + 8) + 0x168);
    if (in_stack_00000010 == (undefined4 *)0x0) {
      in_stack_00000010 = (undefined4 *)&DAT_00000018;
      in_stack_0000000c = (undefined4 *)PTR_DAT_004402ec;
    }
  }
  if (in_stack_0000002c == (undefined4 *)0x0) {
    in_stack_00000028 = in_stack_0000000c;
    in_stack_0000002c = in_stack_00000010;
  }
  if (in_stack_00000018 == 0) {
    in_stack_00000014 = PTR_DAT_004402f0;
    in_stack_00000018 = 0xd;
  }
  uVar2 = FUN_00098a1c(uVar1,&local_54);
  uVar1 = extraout_r2;
  uVar3 = (uint)bStack00000038;
  if (bStack00000038 == 0) {
    local_c4 = in_stack_0000000c;
    local_c0 = in_stack_00000010;
    printerApi_common_threemf_PreCheck();
    local_40 = local_bc;
    local_3c = local_b8;
    if (local_b4 != 0) {
      local_8 = *(undefined4 *)(local_b4 + 4);
      local_4 = (undefined4 *)local_b0;
      uVar1 = 0x17;
      local_c4 = &local_8;
      local_c0 = (undefined4 *)0x1;
      local_bc = (undefined4 *)0x1;
      puVar5 = PTR_DAT_004402f4;
      FUN_00130144();
      local_78 = local_b8;
      FUN_00098e04(local_b8,&local_54,&stack0x0000003c,local_b4,unaff_lr,puVar5,uVar1);
      return;
    }
    uVar2 = 0;
    uVar1 = local_b8;
    uVar3 = local_b0;
  }
  uVar1 = FUN_00098a24(uVar2,auStack_1c,uVar1,uVar3,unaff_lr);
  FUN_00098e04(uVar1,&stack0x0000000c,&local_c4,in_stack_00000004,unaff_lr,in_stack_00000004,
               in_stack_00000008);
  uVar1 = printerApi_common_threemf_Unpack();
  uVar1 = FUN_00098e14(uVar1,auStack_a8,auStack_1c,local_94);
  uVar1 = FUN_00098e14(uVar1,auStack_1c,&local_70);
  if (extraout_r3 != 0) {
    FUN_00098e04(uVar1,&local_54,&stack0x0000003c);
    return;
  }
  local_4c = local_68;
  local_48 = local_64;
  local_44 = local_60;
  if (cStack00000039 != '\0') {
    local_54 = local_70;
    local_50 = local_6c;
    FUN_00098e04(local_70,&local_54,&stack0x0000003c,local_6c,unaff_lr,in_stack_00000004,
                 in_stack_00000008);
    return;
  }
  local_88 = in_stack_00000034;
  local_5c = in_stack_00000030;
  if (in_stack_00000034 == (undefined4 *)0x0) {
    internal_filepathlite_Base();
    printerApi_common_threemf_GenerateTargetFilename();
    local_88 = local_c0;
    local_5c = local_c4;
  }
  if ((int)local_88 < 1) {
    uVar3 = 0;
  }
  else {
    local_c4 = (undefined4 *)0x1;
    local_84 = local_88;
    local_58 = local_5c;
    FUN_000150d4();
    uVar3 = (uint)local_c0 & 0xff;
    local_88 = local_84;
    local_5c = local_58;
  }
  if (uVar3 == 0) {
    FUN_00098a28(0,&local_2c);
    local_28 = in_stack_0000002c;
    local_2c = in_stack_00000028;
    local_c4 = (undefined4 *)0x2;
    FUN_00159184();
    local_88 = local_bc;
    local_5c = local_c0;
  }
  internal_filepathlite_Dir();
  printerApi_common_file_CreateDirIfNoexist();
  if (local_c4 != (undefined4 *)0x0) {
    local_4 = local_c0;
    if (local_60 != (undefined4 *)0x0) {
      local_7c = local_c4;
      local_30 = local_c0;
      (*(code *)*local_60)();
      local_c4 = local_7c;
      local_4 = local_30;
    }
    local_8 = 0;
    if (local_c4 != (undefined4 *)0x0) {
      local_8 = local_c4[1];
    }
    uVar1 = 0x1c;
    local_c4 = &local_8;
    local_c0 = (undefined4 *)0x1;
    local_bc = (undefined4 *)0x1;
    puVar5 = PTR_DAT_004402fc;
    FUN_00130144();
    local_78 = local_b8;
    FUN_00098e04(local_b8,&local_54,&stack0x0000003c,local_b4,unaff_lr,puVar5,uVar1);
    return;
  }
  FUN_00127c60();
  local_80 = local_c4;
  local_34 = local_c0;
  if (local_c4 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    local_c4 = *(undefined4 **)PTR_DAT_00440300;
    local_c0 = *(undefined4 **)PTR_DAT_00440304;
    FUN_00122c24();
    uVar3 = (uint)local_bc & 0xff ^ 1;
  }
  if (uVar3 != 0) {
    if (local_60 != (undefined4 *)0x0) {
      (*(code *)*local_60)();
    }
    local_8 = 0;
    if (local_80 != (undefined4 *)0x0) {
      local_8 = local_80[1];
    }
    uVar1 = 0x1d;
    local_c4 = &local_8;
    local_c0 = (undefined4 *)0x1;
    local_bc = (undefined4 *)0x1;
    puVar5 = PTR_DAT_00440308;
    local_4 = local_34;
    FUN_00130144();
    local_78 = local_b8;
    FUN_00098e04(local_b8,&local_54,&stack0x0000003c,local_b4,unaff_lr,puVar5,uVar1);
    return;
  }
  local_c4 = local_5c;
  local_c0 = local_88;
  FUN_00126cb0();
  uVar4 = CONCAT44(local_88,local_60);
  if (local_bc != (undefined4 *)0x0) {
    local_4 = (undefined4 *)local_b8;
    if (local_60 != (undefined4 *)0x0) {
      local_74 = local_b8;
      local_8c = local_bc;
      (*(code *)*local_60)();
      local_bc = local_8c;
      local_4 = (undefined4 *)local_74;
    }
    local_8 = 0;
    if (local_bc != (undefined4 *)0x0) {
      local_8 = local_bc[1];
    }
    uVar1 = 0x1f;
    local_c4 = &local_8;
    local_c0 = (undefined4 *)0x1;
    local_bc = (undefined4 *)0x1;
    puVar5 = PTR_DAT_0044030c;
    FUN_00130144();
    local_78 = local_b8;
    FUN_00098e04(local_b8,&local_54,&stack0x0000003c,local_b4,unaff_lr,puVar5,uVar1);
    return;
  }
  if (local_60 != (undefined4 *)0x0) {
    if (cStack0000003a != '\0') {
      local_38 = local_60;
      puVar6 = (undefined4 *)PTR_DAT_00440310;
      FUN_0001eed8();
      *local_6c = PTR_printerApi_common_threemf_Extract_func1_00440314;
      local_70 = puVar6;
      if (*(int *)PTR_DAT_00440318 != 0) {
        local_6c = (undefined4 *)FUN_00098688();
        *unaff_r8 = local_38;
        unaff_r8[1] = local_5c;
        local_70 = puVar6;
      }
      uVar4 = CONCAT44(local_88,local_6c);
      local_6c[1] = local_38;
      local_6c[3] = local_88;
      local_6c[2] = local_5c;
      local_44 = local_6c;
      goto LAB_00440268;
    }
    if (local_60 != (undefined4 *)0x0) {
      local_44 = local_60;
      uVar4 = CONCAT44(local_88,local_60);
      goto LAB_00440268;
    }
  }
  if (cStack0000003a != '\0') {
    puVar6 = (undefined4 *)PTR_DAT_0044031c;
    FUN_0001eed8();
    uVar4 = CONCAT44(local_88,local_6c);
    *local_6c = PTR_printerApi_common_threemf_Extract_func2_00440320;
    local_6c[2] = local_88;
    if (*(int *)PTR_DAT_00440318 != 0) {
      uVar4 = FUN_00098678();
      *unaff_r8 = local_5c;
    }
    local_44 = (undefined4 *)uVar4;
    local_44[1] = local_5c;
    local_70 = puVar6;
  }
LAB_00440268:
  local_50 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
  local_54 = local_5c;
  FUN_00098e04((int)uVar4,&local_54,&stack0x0000003c,local_50,unaff_lr,local_70);
  return;
}



/* printerApi/common/threemf.Extract.func2 @ 00440324 (size 280) */

int printerApi_common_threemf_Extract_func2(void)

{
  byte bVar1;
  int iVar2;
  int unaff_r10;
  int iStack_2c;
  byte bStack_24;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  iVar2 = iStack_2c;
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  FUN_00127c60();
  if (iStack_2c == 0) {
    bVar1 = 0;
  }
  else {
    iStack_2c = *DAT_00440440;
    FUN_00122c24();
    bVar1 = bStack_24 ^ 1;
  }
  if (bVar1 != 0) {
    FUN_00098a28(0,&uStack_10);
    FUN_0008a578();
    uStack_10 = DAT_00440448;
    iStack_c = iStack_2c;
    if (iVar2 == 0) {
      uStack_8 = 0;
    }
    else {
      uStack_8 = *(undefined4 *)(iVar2 + 4);
    }
    iVar2 = printerApi_common_logger_Errorf();
  }
  return iVar2;
}



/* printerApi/common/threemf.Extract.func1 @ 00440450 (size 300) */

int printerApi_common_threemf_Extract_func1(void)

{
  byte bVar1;
  int iVar2;
  int unaff_r7;
  int unaff_r10;
  int iStack_2c;
  byte bStack_24;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  iVar2 = iStack_2c;
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  (*(code *)**(undefined4 **)(unaff_r7 + 4))();
  FUN_00127c60();
  if (iStack_2c == 0) {
    bVar1 = 0;
  }
  else {
    iStack_2c = *DAT_00440580;
    FUN_00122c24();
    bVar1 = bStack_24 ^ 1;
  }
  if (bVar1 != 0) {
    FUN_00098a28(0,&uStack_10);
    FUN_0008a578();
    uStack_10 = DAT_00440588;
    iStack_c = iStack_2c;
    if (iVar2 == 0) {
      uStack_8 = 0;
    }
    else {
      uStack_8 = *(undefined4 *)(iVar2 + 4);
    }
    iVar2 = printerApi_common_logger_Errorf();
  }
  return iVar2;
}



/* printerApi/common/threemf.GenerateTargetFilename @ 00440590 (size 668) */

void printerApi_common_threemf_GenerateTargetFilename(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r3;
  int iVar5;
  uint extraout_r3_00;
  int unaff_r4;
  int iVar6;
  int iVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  bool bVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + 8);
      FUN_00148180();
      uVar3 = *(uint *)((int)register0x00000054 + -0x18);
      if ((int)uVar3 < 4) {
        cVar1 = '\0';
LAB_004405f8:
        if (cVar1 == '\0') {
          uVar4 = *(uint *)((int)register0x00000054 + 8);
          unaff_r4 = *(int *)((int)register0x00000054 + 4);
          uVar3 = uVar4;
        }
        else {
          uVar3 = *(uint *)((int)register0x00000054 + 8) - 4;
          if (uVar3 <= *(uint *)((int)register0x00000054 + 8)) {
            *(uint *)((int)register0x00000054 + -4) = uVar3;
            *(undefined4 *)((int)register0x00000054 + -0x24) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(uint *)((int)register0x00000054 + -0x20) = uVar3;
            FUN_00148180();
            uVar3 = *(uint *)((int)register0x00000054 + -0x18);
            if ((int)uVar3 < 6) {
LAB_00440690:
              if (*(int *)((int)register0x00000054 + 8) == 4) {
                uVar2 = 5;
                iVar5 = DAT_00440838;
              }
              else {
                uVar2 = *(undefined4 *)((int)register0x00000054 + -4);
                iVar5 = *(int *)((int)register0x00000054 + 4);
              }
              *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
              *(int *)((int)register0x00000054 + -0x20) = iVar5;
              *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar2;
              *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_00440834;
              *(undefined4 *)((int)register0x00000054 + -0x14) = 6;
              FUN_000715a4();
              *(undefined4 *)((int)register0x00000054 + 0xc) =
                   *(undefined4 *)((int)register0x00000054 + -0x10);
              *(undefined4 *)((int)register0x00000054 + 0x10) =
                   *(undefined4 *)((int)register0x00000054 + -0xc);
              return;
            }
            if (uVar3 - 6 <= uVar3) {
              *(uint *)((int)register0x00000054 + -0x24) =
                   (uVar3 - 6) + *(int *)((int)register0x00000054 + -0x1c);
              *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_00440834;
              *(undefined4 *)((int)register0x00000054 + -0x1c) = 6;
              FUN_000150d4();
              if (*(char *)((int)register0x00000054 + -0x18) != '\0') {
                *(undefined4 *)((int)register0x00000054 + 0xc) =
                     *(undefined4 *)((int)register0x00000054 + 4);
                *(undefined4 *)((int)register0x00000054 + 0x10) =
                     *(undefined4 *)((int)register0x00000054 + -4);
                return;
              }
              goto LAB_00440690;
            }
            FUN_00098758();
          }
          FUN_00098718();
          uVar4 = extraout_r2;
          uVar3 = extraout_r3;
        }
        do {
          uVar3 = uVar3 - 1;
          if ((int)uVar3 < 0) {
LAB_00440730:
            iVar6 = 0;
            iVar5 = 0;
            goto LAB_00440738;
          }
          uVar9 = uVar4 == uVar3;
          if (uVar4 <= uVar3) goto LAB_0044080c;
          if (*(char *)(unaff_r4 + uVar3) == '/') goto LAB_00440730;
        } while (*(char *)(unaff_r4 + uVar3) != '.');
        iVar6 = uVar4 - uVar3;
        iVar5 = unaff_r4 + (uVar3 & -iVar6 >> 0x1f);
LAB_00440738:
        if ((int)uVar4 < iVar6) {
          cVar1 = '\0';
LAB_0044079c:
          if (cVar1 == '\0') {
LAB_004407b8:
            if (uVar4 == 0) {
              uVar4 = 5;
              unaff_r4 = DAT_00440838;
            }
            *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
            *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
            *(uint *)((int)register0x00000054 + -0x1c) = uVar4;
            *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_00440834;
            *(undefined4 *)((int)register0x00000054 + -0x14) = 6;
            FUN_000715a4();
            *(undefined4 *)((int)register0x00000054 + 0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x10);
            *(undefined4 *)((int)register0x00000054 + 0x10) =
                 *(undefined4 *)((int)register0x00000054 + -0xc);
            return;
          }
          uVar3 = uVar4 - iVar6;
          bVar10 = uVar3 <= uVar4;
          uVar9 = uVar4 == uVar3;
          uVar4 = uVar3;
          if (bVar10) goto LAB_004407b8;
          uVar3 = FUN_00098718();
          uVar4 = extraout_r2_00;
        }
        else {
          uVar3 = uVar4 - iVar6;
          uVar9 = uVar4 == uVar3;
          if (uVar3 <= uVar4) {
            iVar7 = uVar4 - uVar3;
            if (iVar6 == iVar7) {
              *(int *)((int)register0x00000054 + -8) = iVar6;
              *(uint *)((int)register0x00000054 + -0x24) = (uVar3 & -iVar7 >> 0x1f) + unaff_r4;
              *(int *)((int)register0x00000054 + -0x20) = iVar5;
              *(int *)((int)register0x00000054 + -0x1c) = iVar7;
              FUN_000150d4();
              cVar1 = *(char *)((int)register0x00000054 + -0x18);
              uVar4 = *(uint *)((int)register0x00000054 + 8);
              unaff_r4 = *(int *)((int)register0x00000054 + 4);
              iVar6 = *(int *)((int)register0x00000054 + -8);
            }
            else {
              cVar1 = '\0';
            }
            goto LAB_0044079c;
          }
        }
        FUN_00098758(uVar3,uVar4);
        uVar4 = extraout_r2_01;
        uVar3 = extraout_r3_00;
LAB_0044080c:
        FUN_000986f8(uVar3,uVar4);
      }
      else {
        uVar4 = uVar3 - 4;
        uVar9 = uVar3 == uVar4;
        if (uVar4 <= uVar3) {
          *(uint *)((int)register0x00000054 + -0x24) =
               uVar4 + *(int *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_00440830;
          *(undefined4 *)((int)register0x00000054 + -0x1c) = 4;
          FUN_000150d4();
          cVar1 = *(char *)((int)register0x00000054 + -0x18);
          goto LAB_004405f8;
        }
      }
      param_1 = FUN_00098758();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x440828;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/threemf.doUnpack @ 0044083c (size 4108) */

void printerApi_common_threemf_doUnpack(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *extraout_r1;
  undefined4 *puVar6;
  int extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *extraout_r2_01;
  undefined4 *extraout_r3;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *unaff_r8;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined4 *in_stack_00000024;
  undefined4 *in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 *in_stack_00000030;
  undefined4 *in_stack_00000034;
  undefined4 *in_stack_00000038;
  undefined4 *in_stack_0000003c;
  int *in_stack_00000040;
  undefined8 local_15c;
  undefined4 *local_154;
  undefined4 *local_150;
  undefined4 *local_14c;
  int *local_148;
  undefined4 *local_144;
  undefined4 *local_140;
  undefined1 local_135;
  undefined4 *local_134;
  undefined4 *local_130;
  undefined4 *local_12c;
  undefined4 *local_128;
  undefined4 *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 *local_118;
  undefined4 *local_114;
  undefined4 *local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 *local_104;
  undefined4 *local_100;
  undefined4 *local_fc;
  undefined4 *local_f8;
  undefined4 *local_f4;
  undefined4 *local_f0;
  undefined4 *local_ec;
  int local_e8;
  int local_e4;
  undefined4 *local_e0;
  undefined4 *local_dc;
  undefined4 *local_d8;
  undefined4 *local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  int local_c4;
  undefined4 *local_bc;
  int *local_b8;
  undefined4 *local_b4;
  int *local_b0;
  int *local_ac;
  undefined4 *local_a8;
  int *local_a4;
  int *local_a0;
  int *local_9c;
  undefined4 local_98;
  undefined4 *local_94;
  undefined4 local_90;
  int *local_8c;
  undefined1 auStack_88 [20];
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  int *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  int local_54;
  undefined4 local_50;
  undefined1 auStack_4c [28];
  undefined4 **local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_4;
  
  while (&local_e0 <= *(undefined4 ***)(unaff_r10 + 8)) {
    unaff_lr = 0x44188c;
    FUN_00096bb8();
  }
  local_4 = (undefined4 *)0x0;
  local_135 = 0;
  FUN_00098a24(0,&stack0x00000028);
  in_stack_0000003c = (undefined4 *)0x0;
  in_stack_00000040 = (int *)0x0;
  local_15c._0_4_ = (undefined4 **)in_stack_00000004;
  local_15c._4_4_ = in_stack_00000008;
  FUN_004245e8();
  if (local_150 != (undefined4 *)0x0) {
    FUN_00098a28(0,&local_74,local_150,local_14c,unaff_lr);
    if (*DAT_00441078 == 0) {
      local_74 = 0;
    }
    else {
      local_74 = *(undefined4 *)(*DAT_00441078 + 4);
    }
    local_70 = (undefined4 *)*DAT_0044107c;
    local_6c = 0;
    if (extraout_r2 != 0) {
      local_6c = *(undefined4 *)(extraout_r2 + 4);
    }
    local_15c._0_4_ = (undefined4 **)DAT_00441080;
    local_15c._4_4_ = (undefined4 *)0x6;
    local_154 = &local_74;
    local_150 = (undefined4 *)0x2;
    local_14c = (undefined4 *)0x2;
    FUN_00130144();
    FUN_00098a24(0,&stack0x00000028,local_144,local_148);
    return;
  }
  local_d8 = local_154;
  local_98 = DAT_00441074;
  local_94 = local_154;
  local_4 = &local_98;
  local_135 = 1;
  local_12c = (undefined4 *)0x0;
  local_128 = (undefined4 *)0x0;
  iVar7 = local_154[3];
  iVar8 = local_154[4];
  iVar1 = 0;
  puVar2 = local_154;
  local_e4 = iVar8;
  local_54 = iVar7;
  while (iVar1 < iVar8) {
    local_ac = *(int **)(iVar7 + iVar1 * 4);
    unaff_r8 = (undefined4 *)local_ac[1];
    local_e8 = iVar1;
    if ((int)unaff_r8 < 9) {
      uVar4 = 0;
    }
    else {
      local_15c._0_4_ = (undefined4 **)*local_ac;
      local_15c._4_4_ = DAT_00441084;
      local_154 = (undefined4 *)&DAT_00000009;
      FUN_000150d4(DAT_00441084,9,puVar2);
      uVar4 = (uint)local_150 & 0xff;
      puVar2 = local_d8;
      iVar7 = local_54;
      iVar8 = local_e4;
    }
    if (uVar4 != 0) {
      uVar4 = local_ac[1];
      if ((int)uVar4 < 6) {
        uVar4 = 0;
      }
      else {
        uVar10 = uVar4 - 6;
        if (uVar4 < uVar10) goto LAB_00441870;
        local_15c._0_4_ = (undefined4 **)(*local_ac + uVar10);
        local_15c._4_4_ = DAT_00441088;
        local_154 = (undefined4 *)&DAT_00000006;
        FUN_000150d4(DAT_00441088,6,puVar2);
        uVar4 = (uint)local_150 & 0xff;
        puVar2 = local_d8;
        iVar7 = local_54;
        iVar8 = local_e4;
      }
      if (uVar4 != 0) {
        unaff_r8 = (undefined4 *)(local_ac[0x12] + (int)local_12c);
        local_128 = (undefined4 *)
                    ((int)local_128 + (uint)CARRY4(local_ac[0x12],(uint)local_12c) + local_ac[0x13])
        ;
        local_12c = unaff_r8;
      }
    }
    iVar1 = local_e8 + 1;
  }
  if ((in_stack_00000024 != (undefined4 *)0x0) &&
     (local_128 != (undefined4 *)0x0 ||
      local_128 == (undefined4 *)0x0 && local_12c != (undefined4 *)0x0)) {
    local_15c._0_4_ = (undefined4 **)0x0;
    local_15c._4_4_ = (undefined4 *)0x0;
    local_154 = local_12c;
    local_150 = local_128;
    (*(code *)*in_stack_00000024)();
  }
  uVar3 = FUN_0010cf30();
  uVar3 = FUN_00098e14(uVar3,&local_15c,auStack_88);
  FUN_00098e14(uVar3,auStack_88,&local_d0);
  if ((local_cc & 0x80000000) != 0) {
    uVar4 = (local_d0 & 0x7fffffff) >> 0x1e | (local_d0 >> 0x1f | local_cc << 1) << 1;
    local_c8 = uVar4 + DAT_0044108c;
    local_c4 = ((local_cc & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar4,DAT_0044108c);
  }
  local_90 = 0;
  local_8c = (int *)0x0;
  local_15c = (ulonglong)DAT_00441090 * (ulonglong)local_c8 +
              (CONCAT44(local_c4 * DAT_00441090,local_d0) & 0xffffffff3fffffff) +
              CONCAT44(DAT_00441098,DAT_00441094);
  FUN_0008a4bc();
  local_90 = DAT_0044109c;
  local_8c = local_154;
  local_15c._0_4_ = (undefined4 **)DAT_004410a0;
  local_15c._4_4_ = (undefined4 *)0xe;
  local_154 = &local_90;
  local_150 = (undefined4 *)0x1;
  local_14c = (undefined4 *)0x1;
  FUN_001331ac();
  FUN_00098a28(0,&local_14,local_144,local_148);
  local_10 = in_stack_00000010;
  local_14 = in_stack_0000000c;
  local_15c._0_4_ = (undefined4 **)&local_14;
  local_15c._4_4_ = (undefined4 *)0x2;
  local_154 = (undefined4 *)0x2;
  FUN_00159184();
  local_dc = local_150;
  local_130 = local_14c;
  local_15c._0_4_ = (undefined4 **)local_150;
  local_15c._4_4_ = local_14c;
  local_154 = (undefined4 *)0x1ed;
  FUN_00128658();
  if (local_150 != (undefined4 *)0x0) {
    local_90 = local_150[1];
    local_8c = local_14c;
    local_15c._0_4_ = (undefined4 **)DAT_004410b0;
    local_15c._4_4_ = (undefined4 *)0x1a;
    local_154 = &local_90;
    local_150 = (undefined4 *)0x1;
    local_14c = (undefined4 *)0x1;
    FUN_00130144();
    FUN_00098a24(0,&stack0x00000028,local_144,local_148);
    local_135 = 0;
    (*(code *)*local_4)();
    return;
  }
  local_15c._0_4_ = (undefined4 **)DAT_004410a4;
  FUN_0001eed8();
  local_58 = local_15c._4_4_;
  *local_15c._4_4_ = DAT_004410a8;
  local_15c._4_4_[2] = local_130;
  puVar2 = local_130;
  if (*DAT_004410ac != 0) {
    puVar2 = (undefined4 *)FUN_00098678();
    *unaff_r8 = local_dc;
  }
  local_58[1] = local_dc;
  local_120 = 0;
  local_11c = 0;
  iVar8 = local_d8[3];
  iVar7 = local_d8[4];
  iVar1 = 0;
  local_124 = (undefined4 *)0x0;
  local_d4 = (undefined4 *)0x0;
  puVar6 = local_dc;
  piVar9 = (int *)0x0;
  puVar11 = (undefined4 *)0x0;
  puVar12 = (undefined4 *)0x0;
  local_e4 = iVar7;
  local_54 = iVar8;
  do {
    if (iVar7 <= iVar1) {
      if (puVar12 == (undefined4 *)0x0) {
        (*(code *)*local_58)();
        local_90 = 0;
        if (*DAT_004418cc != 0) {
          local_90 = *(undefined4 *)(*DAT_004418cc + 4);
        }
        local_8c = (int *)*DAT_004418d0;
        local_15c._0_4_ = (undefined4 **)DAT_004418d4;
        local_15c._4_4_ = (undefined4 *)0x25;
        local_154 = &local_90;
        local_150 = (undefined4 *)0x1;
        local_14c = (undefined4 *)0x1;
        FUN_00130144();
        FUN_00098a24(0,&stack0x00000028,local_144,local_148);
        local_135 = 0;
        (*(code *)*local_4)();
        return;
      }
      if (local_124 == (undefined4 *)0x0) {
        local_15c._4_4_ = (undefined4 *)piVar9[1];
        local_15c._0_4_ = (undefined4 **)*piVar9;
        local_124 = local_15c._4_4_;
        local_d4 = (undefined4 **)local_15c;
        internal_filepathlite_Base();
        local_e0 = local_154;
        local_134 = local_150;
        FUN_00098a28(0,&local_74);
        local_15c._0_4_ = (undefined4 **)in_stack_00000014;
        local_15c._4_4_ = in_stack_00000018;
        FUN_0008a578();
        local_74 = DAT_00441894;
        local_70 = local_154;
        local_15c._0_4_ = (undefined4 **)local_e0;
        local_15c._4_4_ = local_134;
        FUN_0008a578();
        local_6c = DAT_00441894;
        local_68 = local_154;
        local_15c._0_4_ = (undefined4 **)DAT_004418a0;
        local_15c._4_4_ = (undefined4 *)0x2b;
        local_154 = &local_74;
        local_150 = (undefined4 *)0x2;
        local_14c = (undefined4 *)0x2;
        printerApi_common_logger_Infof();
      }
      local_15c._0_4_ = (undefined4 **)in_stack_00000004;
      local_15c._4_4_ = in_stack_00000008;
      printerApi_common_threemf_Get3mfTempGcodePath();
      if (local_14c != (undefined4 *)0x0) {
        local_9c = local_148;
        local_f4 = local_14c;
        (*(code *)*local_58)();
        local_90 = 0;
        if (local_f4 != (undefined4 *)0x0) {
          local_90 = local_f4[1];
        }
        local_8c = local_9c;
        local_15c._0_4_ = (undefined4 **)DAT_004418a4;
        local_15c._4_4_ = (undefined4 *)0x23;
        local_154 = &local_90;
        local_150 = (undefined4 *)0x1;
        local_14c = (undefined4 *)0x1;
        FUN_00130144();
        FUN_00098a24(0,&stack0x00000028,local_144,local_148);
        local_135 = 0;
        (*(code *)*local_4)();
        return;
      }
      local_b4 = local_154;
      local_104 = local_150;
      local_15c._0_4_ = (undefined4 **)local_154;
      local_15c._4_4_ = local_150;
      internal_filepathlite_Dir();
      local_15c._0_4_ = (undefined4 **)local_154;
      local_15c._4_4_ = local_150;
      local_154 = (undefined4 *)0x1ed;
      FUN_00128658();
      if (local_150 != (undefined4 *)0x0) {
        local_a8 = local_14c;
        local_100 = local_150;
        (*(code *)*local_58)();
        local_90 = 0;
        if (local_100 != (undefined4 *)0x0) {
          local_90 = local_100[1];
        }
        local_8c = local_a8;
        local_15c._0_4_ = (undefined4 **)DAT_004418a8;
        local_15c._4_4_ = (undefined4 *)0x2b;
        local_154 = &local_90;
        local_150 = (undefined4 *)0x1;
        local_14c = (undefined4 *)0x1;
        FUN_00130144();
        FUN_00098a24(0,&stack0x00000028,local_144,local_148);
        local_135 = 0;
        (*(code *)*local_4)();
        return;
      }
      local_15c._0_4_ = (undefined4 **)local_d4;
      local_15c._4_4_ = local_124;
      local_154 = local_b4;
      local_150 = local_104;
      FUN_00126cb0();
      if (local_14c == (undefined4 *)0x0) {
        local_15c._0_4_ = (undefined4 **)local_b4;
        local_15c._4_4_ = local_104;
        internal_filepathlite_Dir();
        local_15c._0_4_ = (undefined4 **)local_154;
        local_15c._4_4_ = local_150;
        printerApi_common_threemf_syncDir();
        if (local_154 != (undefined4 *)0x0) {
          local_90 = local_154[1];
          local_8c = local_150;
          local_15c._0_4_ = (undefined4 **)DAT_004418b0;
          local_15c._4_4_ = (undefined4 *)&DAT_00000023;
          local_154 = &local_90;
          local_150 = (undefined4 *)0x1;
          local_14c = (undefined4 *)0x1;
          printerApi_common_logger_Warnf();
        }
        FUN_00098a28(0,&local_74);
        local_15c._0_4_ = (undefined4 **)in_stack_00000004;
        local_15c._4_4_ = in_stack_00000008;
        FUN_0008a578();
        local_74 = DAT_00441894;
        local_70 = local_154;
        local_15c._0_4_ = (undefined4 **)local_b4;
        local_15c._4_4_ = local_104;
        FUN_0008a578();
        local_6c = DAT_00441894;
        local_68 = local_154;
        local_15c._0_4_ = (undefined4 **)DAT_004418b4;
        local_15c._4_4_ = (undefined4 *)&DAT_00000023;
        local_154 = &local_74;
        local_150 = (undefined4 *)0x2;
        local_14c = (undefined4 *)0x2;
        printerApi_common_logger_Infof();
        local_15c._0_4_ = (undefined4 **)DAT_004418b8;
        FUN_0001eed8();
        *local_15c._4_4_ = DAT_004418bc;
        local_64 = local_15c._4_4_;
        if (*DAT_004418c0 != 0) {
          FUN_00098688();
          *puVar11 = local_58;
          puVar11[1] = local_b4;
          local_64 = extraout_r2_00;
        }
        puVar2 = local_b4;
        local_64[1] = local_58;
        local_64[3] = local_104;
        local_64[2] = local_b4;
        FUN_00098a24(0,&stack0x00000028);
        in_stack_00000028 = puVar2;
        in_stack_00000030 = local_dc;
        in_stack_00000034 = local_130;
        local_15c._0_4_ = (undefined4 **)DAT_004418c4;
        FUN_0001eed8();
        *local_15c._4_4_ = DAT_004418c8;
        puVar2 = local_15c._4_4_;
        if (*DAT_004418c0 != 0) {
          FUN_00098678();
          *puVar11 = local_64;
          puVar2 = extraout_r2_01;
        }
        puVar2[1] = local_64;
        in_stack_0000003c = (undefined4 *)0x0;
        in_stack_00000040 = (int *)0x0;
        local_135 = 0;
        in_stack_00000038 = puVar2;
        (*(code *)*local_4)();
        return;
      }
      local_f4 = local_14c;
      local_9c = local_148;
      (*(code *)*local_58)();
      local_90 = 0;
      if (local_f4 != (undefined4 *)0x0) {
        local_90 = local_f4[1];
      }
      local_8c = local_9c;
      local_15c._0_4_ = (undefined4 **)DAT_004418ac;
      local_15c._4_4_ = (undefined4 *)0x1d;
      local_154 = &local_90;
      local_150 = (undefined4 *)0x1;
      local_14c = (undefined4 *)0x1;
      FUN_00130144();
      FUN_00098a24(0,&stack0x00000028,local_144,local_148);
      local_135 = 0;
      (*(code *)*local_4)();
      return;
    }
    local_b0 = *(int **)(iVar8 + iVar1 * 4);
    local_118 = local_124;
    local_114 = puVar12;
    local_110 = puVar11;
    local_e8 = iVar1;
    local_bc = local_d4;
    local_b8 = piVar9;
    if (local_b0[1] < 9) {
      uVar4 = 0;
    }
    else {
      local_15c._0_4_ = (undefined4 **)*local_b0;
      local_15c._4_4_ = DAT_00441084;
      local_154 = (undefined4 *)&DAT_00000009;
      FUN_000150d4();
      uVar4 = (uint)local_150 & 0xff;
      puVar2 = local_130;
      puVar6 = local_dc;
      iVar7 = local_e4;
      iVar8 = local_54;
    }
    if (uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar10 = local_b0[1];
      if ((int)uVar10 < 6) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar10 - 6;
        if (uVar10 < uVar4) {
          FUN_00098758(uVar4,uVar10);
LAB_00441870:
          uVar3 = FUN_00098758(uVar10);
          FUN_0004fb3c(uVar3);
          return;
        }
        local_15c._0_4_ = (undefined4 **)(*local_b0 + uVar4);
        local_15c._4_4_ = DAT_00441088;
        local_154 = (undefined4 *)&DAT_00000006;
        FUN_000150d4();
        uVar4 = (uint)local_150 & 0xff;
        puVar2 = local_130;
        puVar6 = local_dc;
        iVar7 = local_e4;
        iVar8 = local_54;
      }
    }
    local_124 = local_118;
    local_d4 = local_bc;
    if (uVar4 != 0) {
      local_15c._0_4_ = (undefined4 **)*local_b0;
      local_15c._4_4_ = (undefined4 *)local_b0[1];
      local_154 = puVar6;
      local_150 = puVar2;
      printerApi_common_threemf_validateZipPath();
      if (local_14c != (undefined4 *)0x0) {
        local_f8 = local_14c;
        local_a0 = local_148;
        (*(code *)*local_58)();
        FUN_00098a24(0,&stack0x00000028);
        in_stack_0000003c = local_f8;
        in_stack_00000040 = local_a0;
        local_135 = 0;
        (*(code *)*local_4)();
        return;
      }
      local_15c._0_4_ = (undefined4 **)*local_b0;
      local_15c._4_4_ = (undefined4 *)local_b0[1];
      internal_filepathlite_Base();
      FUN_00098a28(0,&local_24,local_150,local_154);
      local_20 = local_130;
      local_24 = local_dc;
      local_15c._0_4_ = &local_24;
      local_15c._4_4_ = (undefined4 *)0x2;
      local_154 = (undefined4 *)0x2;
      FUN_00159184();
      puVar2 = local_150;
      local_5c = local_150;
      local_ec = local_14c;
      local_10c = 0;
      local_108 = 0;
      uVar3 = FUN_00098a0c(0,&local_50,0,local_14c);
      local_50 = DAT_004410b4;
      FUN_00098e04(uVar3,&stack0x0000000c,auStack_4c);
      local_30 = &local_12c;
      local_2c = &local_120;
      local_28 = &local_10c;
      local_15c._0_4_ = (undefined4 **)local_b0;
      local_15c._4_4_ = puVar2;
      local_150 = &local_50;
      local_154 = extraout_r3;
      printerApi_common_threemf_extractFileWithProgress();
      if (local_14c != (undefined4 *)0x0) {
        local_a4 = local_148;
        local_fc = local_14c;
        (*(code *)*local_58)();
        FUN_00098a28(0,&local_74);
        local_15c._0_4_ = (undefined4 **)*local_b0;
        local_15c._4_4_ = (undefined4 *)local_b0[1];
        FUN_0008a578();
        local_74 = DAT_00441894;
        local_70 = local_154;
        local_6c = 0;
        if (local_fc != (undefined4 *)0x0) {
          local_6c = local_fc[1];
        }
        local_68 = local_a4;
        local_15c._0_4_ = (undefined4 **)DAT_0044189c;
        local_15c._4_4_ = (undefined4 *)0x15;
        local_154 = &local_74;
        local_150 = (undefined4 *)0x2;
        local_14c = (undefined4 *)0x2;
        FUN_00130144();
        FUN_00098a24(0,&stack0x00000028,local_144,local_148);
        local_135 = 0;
        (*(code *)*local_4)();
        return;
      }
      puVar2 = (undefined4 *)((int)local_114 + 1);
      piVar9 = local_b8;
      puVar6 = local_110;
      if (local_110 < puVar2) {
        local_15c._0_4_ = (undefined4 **)local_b8;
        local_154 = local_110;
        local_150 = (undefined4 *)0x1;
        local_14c = DAT_004410b8;
        local_15c._4_4_ = puVar2;
        FUN_00093524();
        puVar2 = local_144;
        piVar9 = local_148;
        puVar6 = local_140;
      }
      puVar5 = (undefined1 *)((int)puVar2 + -1);
      piVar9[(int)puVar5 * 2 + 1] = (int)local_ec;
      local_114 = puVar2;
      local_110 = puVar6;
      if (*DAT_004410ac != 0) {
        FUN_00098688();
        *puVar6 = local_5c;
        puVar6[1] = piVar9[(int)extraout_r1 * 2];
        puVar5 = extraout_r1;
      }
      piVar9[(int)puVar5 * 2] = (int)local_5c;
      local_15c._0_4_ = (undefined4 **)*local_b0;
      local_15c._4_4_ = (undefined4 *)local_b0[1];
      local_b8 = piVar9;
      internal_filepathlite_Base();
      puVar2 = local_118;
      puVar6 = local_bc;
      if (local_150 == in_stack_00000018) {
        local_15c._0_4_ = (undefined4 **)local_154;
        local_15c._4_4_ = (undefined4 *)in_stack_00000014;
        local_154 = local_150;
        FUN_000150d4();
        puVar2 = local_118;
        puVar6 = local_bc;
        if ((char)local_150 != '\0') {
          puVar2 = local_ec;
          puVar6 = local_5c;
        }
      }
      local_f0 = puVar2;
      local_60 = puVar6;
      FUN_00098a28(0,&local_74);
      local_15c._0_4_ = (undefined4 **)*local_b0;
      local_15c._4_4_ = (undefined4 *)local_b0[1];
      FUN_0008a578();
      local_74 = DAT_00441894;
      local_70 = local_154;
      local_15c._0_4_ = (undefined4 **)local_5c;
      local_15c._4_4_ = local_ec;
      FUN_0008a578();
      local_6c = DAT_00441894;
      local_68 = local_154;
      local_15c._0_4_ = (undefined4 **)DAT_00441898;
      local_15c._4_4_ = (undefined4 *)&DAT_00000013;
      local_154 = &local_74;
      local_150 = (undefined4 *)0x2;
      local_14c = (undefined4 *)0x2;
      printerApi_common_logger_Debugf();
      puVar2 = local_130;
      puVar6 = local_dc;
      iVar7 = local_e4;
      iVar8 = local_54;
      local_124 = local_f0;
      local_d4 = local_60;
    }
    iVar1 = local_e8 + 1;
    piVar9 = local_b8;
    puVar11 = local_110;
    puVar12 = local_114;
  } while( true );
}



/* printerApi/common/threemf.doUnpack.func4 @ 004418d8 (size 44) */

void printerApi_common_threemf_doUnpack_func4(void)

{
  int unaff_r7;
  int unaff_r10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  (*(code *)**(undefined4 **)(unaff_r7 + 4))();
  return;
}



/* printerApi/common/threemf.doUnpack.func3 @ 00441904 (size 392) */

void printerApi_common_threemf_doUnpack_func3(void)

{
  int iVar1;
  byte bVar2;
  int unaff_r7;
  int unaff_r10;
  int iStack_2c;
  byte bStack_24;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iVar1 = iStack_2c;
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  (*(code *)**(undefined4 **)(unaff_r7 + 4))();
  FUN_00127c60();
  if (iStack_2c == 0) {
    bVar2 = 0;
  }
  else {
    iStack_2c = *DAT_00441a90;
    FUN_00122c24();
    bVar2 = bStack_24 ^ 1;
  }
  if (bVar2 == 0) {
    FUN_00098a28(0,&uStack_10);
    uStack_10 = DAT_00441a98;
    iStack_c = DAT_00441aa0;
    FUN_0008a578();
    uStack_8 = DAT_00441a98;
    iStack_4 = iStack_2c;
    printerApi_common_logger_Debug();
  }
  else {
    FUN_00098a28(0,&uStack_10);
    FUN_0008a578();
    uStack_10 = DAT_00441a98;
    iStack_c = iStack_2c;
    if (iVar1 == 0) {
      uStack_8 = 0;
    }
    else {
      uStack_8 = *(undefined4 *)(iVar1 + 4);
    }
    printerApi_common_logger_Errorf();
  }
  return;
}



/* printerApi/common/threemf.doUnpack.func2 @ 00441aa4 (size 304) */

void printerApi_common_threemf_doUnpack_func2(void)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r7;
  int unaff_r10;
  bool bVar6;
  uint in_stack_00000004;
  int in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  if ((*(int *)(unaff_r7 + 0x1c) != 0) &&
     (puVar1 = *(uint **)(unaff_r7 + 0x20), puVar1[1] != 0 || *puVar1 != 0)) {
    puVar2 = *(uint **)(unaff_r7 + 0x24);
    puVar3 = *(uint **)(unaff_r7 + 0x28);
    uVar4 = *puVar2;
    uVar5 = uVar4 + in_stack_00000004;
    *puVar2 = uVar5;
    uVar4 = puVar2[1] + in_stack_00000008 + (uint)CARRY4(uVar4,in_stack_00000004);
    puVar2[1] = uVar4;
    bVar6 = uVar4 != puVar3[1] + (uint)(uVar5 < *puVar3);
    if ((bVar6 || 0x4fffff < uVar5 - *puVar3 && !bVar6) ||
       (puVar1[1] < uVar4 || *puVar1 <= uVar5 && puVar1[1] == uVar4)) {
      *puVar3 = uVar5;
      puVar3[1] = uVar4;
      (*(code *)**(undefined4 **)(unaff_r7 + 0x1c))();
    }
    return;
  }
  return;
}



/* printerApi/common/threemf.doUnpack.func1 @ 00441bd4 (size 300) */

void printerApi_common_threemf_doUnpack_func1(void)

{
  int unaff_r10;
  int local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  FUN_00129904();
  if (local_2c == 0) {
    FUN_00098a28(0,&local_10);
    local_10 = DAT_00441d04;
    local_c = DAT_00441d0c;
    FUN_0008a578();
    local_8 = DAT_00441d04;
    printerApi_common_logger_Debug();
  }
  else {
    FUN_00098a28(0,&local_10);
    FUN_0008a578();
    local_10 = DAT_00441d04;
    if (local_2c == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(undefined4 *)(local_2c + 4);
    }
    printerApi_common_logger_Errorf();
  }
  return;
}



/* printerApi/common/threemf.doUnpack.deferwrap1 @ 00441d10 (size 100) */

void printerApi_common_threemf_doUnpack_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if ((undefined4 *)**(int **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = *(undefined4 *)**(int **)(unaff_r7 + 4);
    FUN_00127938();
  }
  return;
}



/* printerApi/common/threemf.validateZipPath @ 00441d74 (size 804) */

/* WARNING: Removing unreachable block (ram,0x00441fe8) */
/* WARNING: Removing unreachable block (ram,0x00442004) */
/* WARNING: Removing unreachable block (ram,0x00442008) */

void printerApi_common_threemf_validateZipPath(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int local_40;
  int local_3c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_filepathlite_Clean();
  uVar1 = DAT_0044209c;
  internal_stringslite_Index();
  if (local_3c < 0) {
    if (local_40 < 1) {
      FUN_00098a28(0,&local_20,local_40);
      local_1c = in_stack_00000010;
      local_20 = in_stack_0000000c;
      FUN_00159184();
      internal_filepathlite_Clean();
      internal_filepathlite_Clean();
      FUN_000150d4();
      return;
    }
    FUN_000150d4();
    FUN_00098a28(0,&local_10,local_40);
    local_10 = 0;
    if (*DAT_004420a0 != 0) {
      local_10 = *(undefined4 *)(*DAT_004420a0 + 4);
    }
    local_c = *DAT_004420a4;
    FUN_0008a578();
    local_8 = DAT_004420a8;
    local_4 = 1;
    FUN_00130144();
    return;
  }
  FUN_00098a28(0,&local_10);
  local_10 = 0;
  if (*DAT_004420a0 != 0) {
    local_10 = *(undefined4 *)(*DAT_004420a0 + 4);
  }
  local_c = *DAT_004420a4;
  FUN_0008a578();
  local_8 = DAT_004420a8;
  local_4 = uVar1;
  FUN_00130144();
  return;
}



/* printerApi/common/threemf.extractFileWithProgress @ 004420bc (size 1052) */

/* WARNING: Removing unreachable block (ram,0x00442368) */
/* WARNING: Removing unreachable block (ram,0x00442384) */
/* WARNING: Removing unreachable block (ram,0x004423d0) */
/* WARNING: Removing unreachable block (ram,0x004423c8) */
/* WARNING: Removing unreachable block (ram,0x004423d4) */
/* WARNING: Removing unreachable block (ram,0x00442444) */
/* WARNING: Removing unreachable block (ram,0x00442480) */
/* WARNING: Removing unreachable block (ram,0x00442334) */
/* WARNING: Removing unreachable block (ram,0x00442224) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_threemf_extractFileWithProgress(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int local_64;
  uint local_60;
  int local_5c;
  undefined4 local_2c [2];
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 *local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_8 = (undefined4 *)0x0;
  local_4 = (undefined4 *)0x0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  internal_filepathlite_Dir();
  FUN_00128658();
  if (local_64 == 0) {
    FUN_0042523c();
    local_24[0] = DAT_004424dc;
    local_1c = 0x1ed;
    local_8 = local_24;
    FUN_0042b588();
    FUN_0012576c();
    if (local_5c != 0) {
      (*(code *)*local_8)();
      return;
    }
    local_2c[0] = DAT_004424e0;
    local_4 = local_2c;
    FUN_000933e8();
    do {
      (*_DAT_00000010)();
      if (0 < (int)local_60) {
        if (0x100000 < local_60) {
          uVar1 = FUN_00098738(0,local_60,0x100000);
          FUN_0004fb3c(uVar1);
          return;
        }
        FUN_00124ccc();
        if (in_stack_00000010 != (undefined4 *)0x0) {
          (*(code *)*in_stack_00000010)();
        }
      }
      if (*DAT_004424e8 == 0) {
        FUN_000169b8();
      }
    } while( true );
  }
  return;
}



/* printerApi/common/threemf.extractFileWithProgress.deferwrap2 @ 004424f8 (size 96) */

void printerApi_common_threemf_extractFileWithProgress_deferwrap2(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if (*(undefined4 **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = **(undefined4 **)(unaff_r7 + 4);
    FUN_00127938();
  }
  return;
}



/* printerApi/common/threemf.extractFileWithProgress.deferwrap1 @ 00442558 (size 92) */

void printerApi_common_threemf_extractFileWithProgress_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  local_c[0] = *(undefined4 *)(unaff_r7 + 8);
  (**(code **)(*(int *)(unaff_r7 + 4) + 0xc))();
  return;
}



/* printerApi/common/threemf.ConvertLegacy3MF @ 004425b4 (size 980) */

/* WARNING: Removing unreachable block (ram,0x004425d4) */

void printerApi_common_threemf_ConvertLegacy3MF(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  int iVar3;
  undefined **local_e4;
  undefined **local_e0;
  uint local_dc;
  undefined1 auStack_b4 [28];
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined **local_88;
  int local_84;
  undefined **local_80;
  undefined **local_7c;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined4 *local_68;
  undefined **local_5c;
  undefined **local_58;
  undefined4 local_54;
  undefined **local_50;
  undefined4 local_4c;
  undefined **local_48;
  undefined4 local_44;
  undefined **local_2c;
  undefined4 local_28;
  undefined **local_24;
  undefined4 local_20;
  undefined4 local_18 [2];
  undefined *local_10;
  undefined **local_c;
  undefined *local_8;
  undefined **local_4;
  
  while (auStack_70 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x442984;
    FUN_00096bb8();
  }
  if (in_stack_00000008 == 0) {
    local_e4 = (undefined **)0x0;
    local_e0 = (undefined **)0x0;
    local_dc = 0;
    FUN_00130144();
    return;
  }
  internal_filepathlite_Dir();
  local_80 = local_e4;
  local_90 = local_e0;
  internal_filepathlite_Base();
  printerApi_common_threemf_GenerateTargetFilename();
  local_7c = local_e4;
  local_8c = local_e0;
  uVar1 = in_stack_00000004;
  iVar3 = in_stack_00000008;
  internal_filepathlite_Base();
  FUN_00098a28(0,&local_10,local_e0,local_e4,unaff_lr,uVar1,iVar3);
  FUN_0008a578();
  local_10 = PTR_SUB_0044298c;
  local_c = local_e4;
  FUN_0008a578();
  local_8 = PTR_SUB_0044298c;
  local_4 = local_e4;
  local_e4 = &local_10;
  local_e0 = (undefined **)0x2;
  local_dc = 2;
  printerApi_common_logger_Infof();
  uVar1 = FUN_00098a1c(0,&local_48);
  uVar1 = FUN_00098a08(uVar1,&local_48);
  local_48 = local_80;
  local_44 = local_90;
  local_2c = local_80;
  local_28 = local_90;
  local_24 = local_7c;
  local_20 = local_8c;
  FUN_00098ddc(uVar1,&local_48,&local_e4,local_7c,unaff_lr,in_stack_00000004,in_stack_00000008);
  printerApi_common_threemf_Extract();
  local_84 = local_98;
  uVar1 = FUN_00098e04(local_98,auStack_b4,&local_48,local_94);
  FUN_00098e04(uVar1,&local_48,auStack_78);
  if (local_84 == 0) {
    if (local_68 != (undefined4 *)0x0) {
      (*(code *)*local_68)();
    }
    FUN_00127c60();
    local_88 = local_e4;
    local_5c = local_e0;
    if (local_e4 == (undefined **)0x0) {
      uVar2 = 0;
    }
    else {
      local_e4 = *(undefined ***)PTR_DAT_00442998;
      local_e0 = *(undefined ***)PTR_DAT_0044299c;
      FUN_00122c24();
      uVar2 = local_dc & 0xff ^ 1;
    }
    if (uVar2 != 0) {
      FUN_00098a28(0,&local_10);
      FUN_0008a578();
      local_10 = PTR_SUB_0044298c;
      local_c = local_e4;
      if (local_88 == (undefined **)0x0) {
        local_8 = (undefined *)0x0;
      }
      else {
        local_8 = local_88[1];
      }
      local_4 = local_5c;
      local_e4 = &local_10;
      local_e0 = (undefined **)0x2;
      local_dc = 2;
      printerApi_common_logger_Warnf();
    }
    FUN_00098a28(0,&local_58);
    local_54 = local_90;
    local_58 = local_80;
    local_4c = local_8c;
    local_50 = local_7c;
    local_e4 = (undefined **)0x2;
    FUN_00159184();
    return;
  }
  local_18[0] = *(undefined **)(local_84 + 4);
  local_e4 = (undefined **)local_18;
  local_e0 = (undefined **)0x1;
  local_dc = 1;
  FUN_00130144();
  return;
}



/* printerApi/common/threemf.syncDir @ 004429a8 (size 416) */

void printerApi_common_threemf_syncDir(void)

{
  int iVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int local_20;
  undefined4 local_14 [2];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (iVar1 = in_stack_00000008, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_4 = (undefined4 *)0x0;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  FUN_0012576c(0);
  if (local_20 != 0) {
    local_c = *(undefined4 *)(local_20 + 4);
    FUN_00130144();
    return;
  }
  local_14[0] = DAT_00442b58;
  local_4 = local_14;
  FUN_001268f8();
  if (iVar1 != 0) {
    local_c = *(undefined4 *)(iVar1 + 4);
    local_8 = 0;
    FUN_00130144();
    (*(code *)*local_4)();
    return;
  }
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  (*(code *)*local_4)();
  return;
}



/* printerApi/common/threemf.syncDir.deferwrap1 @ 00442b60 (size 96) */

void printerApi_common_threemf_syncDir_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if (*(undefined4 **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = **(undefined4 **)(unaff_r7 + 4);
    FUN_00127938();
  }
  return;
}



