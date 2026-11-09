// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/cloud/param   functions: 18
/* printerApi/cloud/param.ListUdiskFileParam.Validate @ 0044b620 (size 228) */

void printerApi_cloud_param_ListUdiskFileParam_Validate(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_00000030;
  undefined *in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 *puStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x44b700;
    FUN_00096bb8();
  }
  if (in_stack_00000030 == 0) {
    FUN_0001eed8();
    puStack_8[1] = 0xd;
    *puStack_8 = PTR_DAT_0044b718;
    in_stack_00000034 = PTR_DAT_0044b710;
                    /* WARNING: Could not recover jumptable at 0x0044b6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (in_stack_00000024 < 0) {
    FUN_0001eed8();
    puStack_8[1] = 0x1e;
    *puStack_8 = PTR_DAT_0044b714;
    in_stack_00000034 = PTR_DAT_0044b710;
                    /* WARNING: Could not recover jumptable at 0x0044b6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (in_stack_00000028 < 0) {
    FUN_0001eed8();
    puStack_8[1] = 0x1f;
    *puStack_8 = PTR_DAT_0044b70c;
    in_stack_00000034 = PTR_DAT_0044b710;
                    /* WARNING: Could not recover jumptable at 0x0044b680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  in_stack_00000034 = (undefined *)0x0;
  in_stack_00000038 = 0;
                    /* WARNING: Could not recover jumptable at 0x0044b694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/cloud/param.DeleteUdiskFileParam.Validate @ 0044b71c (size 476) */

void printerApi_cloud_param_DeleteUdiskFileParam_Validate
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  undefined8 uVar8;
  
  do {
    uVar8 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      if (*(int *)((int)register0x00000054 + 0x28) == 0) {
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0044b908;
        FUN_0001eed8();
        puVar4 = *(undefined4 **)((int)register0x00000054 + -0xc);
        puVar4[1] = 0xd;
        *puVar4 = PTR_DAT_0044b914;
        *(undefined **)((int)register0x00000054 + 0x34) = PTR_DAT_0044b910;
        *(undefined4 **)((int)register0x00000054 + 0x38) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x0044b8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x14))();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)((int)register0x00000054 + 0x2c);
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + 0x30);
      FUN_00148180();
      uVar5 = *(uint *)((int)register0x00000054 + -4);
      if ((int)uVar5 < 6) {
        cVar1 = '\0';
LAB_0044b790:
        if (cVar1 != '\0') {
          bVar2 = 0;
LAB_0044b800:
          if (bVar2 == 0) goto LAB_0044b868;
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + 0x2c);
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + 0x30);
          FUN_00148180();
          uVar5 = *(uint *)((int)register0x00000054 + -4);
          if ((int)uVar5 < 4) {
            cVar1 = '\0';
          }
          else {
            uVar3 = uVar5 - 4;
            uVar7 = uVar5 == uVar3;
            if (uVar5 < uVar3) {
              FUN_00098758();
              goto LAB_0044b8e0;
            }
            *(uint *)((int)register0x00000054 + -0x10) =
                 *(int *)((int)register0x00000054 + -8) + uVar3;
            *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0044b904;
            *(undefined4 *)((int)register0x00000054 + -8) = 4;
            FUN_000150d4();
            cVar1 = *(char *)((int)register0x00000054 + -4);
          }
          if (cVar1 == '\0') {
            *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0044b908;
            FUN_0001eed8();
            puVar4 = *(undefined4 **)((int)register0x00000054 + -0xc);
            puVar4[1] = 0x10;
            *puVar4 = PTR_DAT_0044b90c;
            *(undefined **)((int)register0x00000054 + 0x34) = PTR_DAT_0044b910;
            *(undefined4 **)((int)register0x00000054 + 0x38) = puVar4;
            return;
          }
LAB_0044b868:
          *(undefined4 *)((int)register0x00000054 + 0x34) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x38) = 0;
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 0x2c);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x30);
        FUN_00148180();
        uVar5 = *(uint *)((int)register0x00000054 + -4);
        if ((int)uVar5 < 4) {
          bVar2 = 0;
LAB_0044b7fc:
          bVar2 = bVar2 ^ 1;
          goto LAB_0044b800;
        }
        uVar3 = uVar5 - 4;
        uVar7 = uVar5 == uVar3;
        if (uVar3 <= uVar5) {
          *(uint *)((int)register0x00000054 + -0x10) =
               *(int *)((int)register0x00000054 + -8) + uVar3;
          *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0044b900;
          *(undefined4 *)((int)register0x00000054 + -8) = 4;
          FUN_000150d4();
          bVar2 = *(byte *)((int)register0x00000054 + -4);
          goto LAB_0044b7fc;
        }
LAB_0044b8e0:
        FUN_00098758();
      }
      else {
        uVar3 = uVar5 - 6;
        uVar7 = uVar5 == uVar3;
        if (uVar3 <= uVar5) {
          *(uint *)((int)register0x00000054 + -0x10) =
               uVar3 + *(int *)((int)register0x00000054 + -8);
          *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0044b8fc;
          *(undefined4 *)((int)register0x00000054 + -8) = 6;
          FUN_000150d4();
          cVar1 = *(char *)((int)register0x00000054 + -4);
          goto LAB_0044b790;
        }
      }
      unaff_lr = 0x44b8e8;
      uVar8 = FUN_00098758();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      param_3 = extraout_r2;
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    param_1 = FUN_00096bb8((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x44b8f4;
    param_3 = extraout_r2_00;
  } while( true );
}



/* printerApi/cloud/param.ListFileNopagingReplyDataRecords.Len @ 0044b918 (size 12) */

void printerApi_cloud_param_ListFileNopagingReplyDataRecords_Len(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 uStack00000010;
  
  uStack00000010 = in_stack_00000008;
                    /* WARNING: Could not recover jumptable at 0x0044b920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/cloud/param.ListFileNopagingReplyDataRecords.Swap @ 0044b928 (size 220) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_cloud_param_ListFileNopagingReplyDataRecords_Swap(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int extraout_r3;
  int iVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x38) = unaff_lr;
      uVar4 = *(uint *)((int)register0x00000054 + 8);
      uVar1 = *(uint *)((int)register0x00000054 + 0x10);
      uVar7 = uVar4 == uVar1;
      if (uVar1 < uVar4) {
        iVar2 = *(int *)((int)register0x00000054 + 4) + uVar1 * 0x20;
        *(int *)((int)register0x00000054 + -0x24) = iVar2;
        FUN_00098dfc(iVar2,iVar2,(undefined1 *)((int)register0x00000054 + -0x20));
        uVar1 = *(uint *)((int)register0x00000054 + 0x14);
        uVar7 = uVar4 == uVar1;
        if (uVar1 < uVar4) {
          iVar5 = *_UNK_0044ba08;
          iVar2 = extraout_r3 + uVar1 * 0x20;
          *(int *)((int)register0x00000054 + -0x28) = iVar2;
          if (iVar5 != 0) {
            *(undefined4 *)((int)register0x00000054 + -0x34) = _UNK_0044ba0c;
            *(undefined4 *)((int)register0x00000054 + -0x30) =
                 *(undefined4 *)((int)register0x00000054 + -0x24);
            *(int *)((int)register0x00000054 + -0x2c) = iVar2;
            uVar1 = FUN_00022914();
            iVar2 = *(int *)((int)register0x00000054 + -0x28);
          }
          FUN_00098dfc(uVar1,iVar2,*(undefined4 *)((int)register0x00000054 + -0x24));
          uVar3 = 0;
          if (*_UNK_0044ba08 != 0) {
            *(undefined4 *)((int)register0x00000054 + -0x34) = _UNK_0044ba0c;
            *(undefined4 *)((int)register0x00000054 + -0x30) =
                 *(undefined4 *)((int)register0x00000054 + -0x28);
            *(undefined1 **)((int)register0x00000054 + -0x2c) =
                 (undefined1 *)((int)register0x00000054 + -0x20);
            uVar3 = FUN_00022914();
          }
          FUN_00098dfc(uVar3,(undefined1 *)((int)register0x00000054 + -0x20),
                       *(undefined4 *)((int)register0x00000054 + -0x28));
                    /* WARNING: Could not recover jumptable at 0x0044b9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x38))();
          return;
        }
        FUN_000986f8(uVar1,uVar4);
      }
      param_1 = FUN_000986f8();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x38);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x44ba00;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/cloud/param.ListFileNopagingReplyDataRecords.Less @ 0044ba10 (size 168) */

void printerApi_cloud_param_ListFileNopagingReplyDataRecords_Less(undefined4 param_1)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      uVar3 = *(uint *)((int)register0x00000054 + 8);
      uVar1 = *(uint *)((int)register0x00000054 + 0x10);
      uVar6 = uVar3 == uVar1;
      if (uVar1 < uVar3) {
        pcVar4 = (char *)(*(int *)((int)register0x00000054 + 4) + uVar1 * 0x20);
        uVar1 = *(uint *)((int)register0x00000054 + 0x14);
        uVar6 = uVar3 == uVar1;
        if (uVar1 < uVar3) {
          pcVar2 = (char *)(*(int *)((int)register0x00000054 + 4) + uVar1 * 0x20);
          if (*pcVar4 != *pcVar2) {
            *(char *)((int)register0x00000054 + 0x18) = *pcVar4;
                    /* WARNING: Could not recover jumptable at 0x0044ba5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0xc))();
            return;
          }
          *(bool *)((int)register0x00000054 + 0x18) =
               *(int *)(pcVar2 + 0x10) < *(int *)(pcVar4 + 0x10) ||
               *(int *)(pcVar2 + 0x10) == *(int *)(pcVar4 + 0x10) &&
               *(uint *)(pcVar2 + 0xc) < *(uint *)(pcVar4 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x0044ba9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
        FUN_000986f8();
      }
      param_1 = FUN_000986f8();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x44bab4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/cloud/param.ListVideoFileNopagingReplyDataRecords.Len @ 0044bab8 (size 12) */

void printerApi_cloud_param_ListVideoFileNopagingReplyDataRecords_Len(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 uStack00000010;
  
  uStack00000010 = in_stack_00000008;
                    /* WARNING: Could not recover jumptable at 0x0044bac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/cloud/param.ListVideoFileNopagingReplyDataRecords.Swap @ 0044bac8 (size 228) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_cloud_param_ListVideoFileNopagingReplyDataRecords_Swap(undefined4 param_1)

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
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      uVar4 = *(uint *)((int)register0x00000054 + 8);
      uVar1 = *(uint *)((int)register0x00000054 + 0x10);
      uVar8 = uVar4 == uVar1;
      if (uVar1 < uVar4) {
        iVar2 = *(int *)((int)register0x00000054 + 4) + uVar1 * 0x28;
        *(int *)((int)register0x00000054 + -0x2c) = iVar2;
        FUN_00098dec(iVar2,iVar2,(undefined1 *)((int)register0x00000054 + -0x28));
        uVar1 = *(uint *)((int)register0x00000054 + 0x14);
        uVar8 = uVar4 == uVar1;
        if (uVar1 < uVar4) {
          iVar6 = *_UNK_0044bbb0;
          iVar2 = uVar1 * 5;
          iVar5 = extraout_r3 + uVar1 * 0x28;
          *(int *)((int)register0x00000054 + -0x30) = iVar5;
          if (iVar6 != 0) {
            *(undefined4 *)((int)register0x00000054 + -0x3c) = _UNK_0044bbb4;
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x2c);
            *(int *)((int)register0x00000054 + -0x34) = iVar5;
            iVar2 = FUN_00022914();
            iVar5 = *(int *)((int)register0x00000054 + -0x30);
          }
          FUN_00098dec(iVar2,iVar5,*(undefined4 *)((int)register0x00000054 + -0x2c));
          uVar3 = 0;
          if (*_UNK_0044bbb0 != 0) {
            *(undefined4 *)((int)register0x00000054 + -0x3c) = _UNK_0044bbb4;
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x30);
            *(undefined1 **)((int)register0x00000054 + -0x34) =
                 (undefined1 *)((int)register0x00000054 + -0x28);
            uVar3 = FUN_00022914();
          }
          FUN_00098dec(uVar3,(undefined1 *)((int)register0x00000054 + -0x28),
                       *(undefined4 *)((int)register0x00000054 + -0x30));
                    /* WARNING: Could not recover jumptable at 0x0044bb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x40))();
          return;
        }
        FUN_000986f8(uVar1,uVar4);
      }
      param_1 = FUN_000986f8();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x44bba8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/cloud/param.ListVideoFileNopagingReplyDataRecords.Less @ 0044bbb8 (size 152) */

void printerApi_cloud_param_ListVideoFileNopagingReplyDataRecords_Less(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      uVar4 = *(uint *)((int)register0x00000054 + 8);
      uVar1 = *(uint *)((int)register0x00000054 + 0x10);
      uVar8 = uVar4 == uVar1;
      if (uVar1 < uVar4) {
        iVar5 = *(int *)((int)register0x00000054 + 4) + uVar1 * 0x28;
        uVar1 = *(uint *)((int)register0x00000054 + 0x14);
        uVar8 = uVar4 == uVar1;
        if (uVar1 < uVar4) {
          iVar6 = *(int *)(iVar5 + 0x24);
          iVar2 = *(int *)((int)register0x00000054 + 4) + uVar1 * 0x28;
          iVar3 = *(int *)(iVar2 + 0x24);
          *(bool *)((int)register0x00000054 + 0x18) =
               iVar3 < iVar6 || iVar3 == iVar6 && *(uint *)(iVar2 + 0x20) < *(uint *)(iVar5 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0044bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0xc))();
          return;
        }
        FUN_000986f8();
      }
      param_1 = FUN_000986f8();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x44bc4c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/cloud/param.OtaUpdateParam.Validate @ 0044bc50 (size 320) */

void printerApi_cloud_param_OtaUpdateParam_Validate(void)

{
  undefined4 *puVar1;
  int unaff_r10;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000054;
  undefined4 *in_stack_00000058;
  int in_stack_0000005c;
  int in_stack_00000060;
  int in_stack_00000068;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  int local_c;
  int local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  github_com_hashicorp_go_version_newVersion();
  puVar1 = in_stack_00000058;
  if (local_8 != 0) {
    return;
  }
  FUN_0028b1f4();
  if (local_c != 0) {
    return;
  }
  if (-1 < in_stack_00000060 && (in_stack_00000060 != 0 || in_stack_0000005c != 0)) {
    if (in_stack_00000068 < 10) {
      FUN_0001eed8();
      puVar1[1] = 0x18;
      *puVar1 = PTR_DAT_0044bd9c;
      return;
    }
    return;
  }
  FUN_0001eed8();
  puVar1[1] = 0x1d;
  *puVar1 = PTR_DAT_0044bda4;
  return;
}



/* printerApi/cloud/param.(*ListUdiskFileParam).Validate @ 0044bda8 (size 296) */

void printerApi_cloud_param___ListUdiskFileParam__Validate(undefined4 param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x3c);
      }
      bVar5 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar5) {
        FUN_00098ddc(param_1,*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + -0x30));
        if (*(int *)((int)register0x00000054 + -4) == 0) {
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0044bed4;
          FUN_0001eed8();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x38);
          puVar3[1] = 0xd;
          *puVar3 = PTR_DAT_0044bee4;
          puVar1 = PTR_DAT_0044bedc;
        }
        else if (*(int *)((int)register0x00000054 + -0x10) < 0) {
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0044bed4;
          FUN_0001eed8();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x38);
          puVar3[1] = 0x1e;
          *puVar3 = PTR_DAT_0044bee0;
          puVar1 = PTR_DAT_0044bedc;
        }
        else if (*(int *)((int)register0x00000054 + -0xc) < 0) {
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0044bed4;
          FUN_0001eed8();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x38);
          puVar3[1] = 0x1f;
          *puVar3 = PTR_DAT_0044bed8;
          puVar1 = PTR_DAT_0044bedc;
        }
        else {
          puVar3 = (undefined4 *)0x0;
          puVar1 = (undefined *)0x0;
        }
        *(undefined **)((int)register0x00000054 + 8) = puVar1;
        *(undefined4 **)((int)register0x00000054 + 0xc) = puVar3;
                    /* WARNING: Could not recover jumptable at 0x0044be9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x40))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x44beb0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/cloud/param.(*DeleteUdiskFileParam).Validate @ 0044bee8 (size 132) */

void printerApi_cloud_param___DeleteUdiskFileParam__Validate(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x6c);
      *(undefined4 *)((int)register0x00000054 + -0x6c) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x68);
      }
      bVar4 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar4) {
        uVar1 = FUN_00098ddc(param_1,*(int *)((int)register0x00000054 + 4),
                             (undefined1 *)((int)register0x00000054 + -0x30));
        FUN_00098ddc(uVar1,(undefined1 *)((int)register0x00000054 + -0x30),
                     (undefined1 *)((int)register0x00000054 + -0x68));
        printerApi_cloud_param_DeleteUdiskFileParam_Validate();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
                    /* WARNING: Could not recover jumptable at 0x0044bf38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x6c))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x6c);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x44bf4c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/cloud/param.(*ListFileNopagingReplyDataRecords).Len @ 0044bf6c (size 100) */

void printerApi_cloud_param___ListFileNopagingReplyDataRecords__Len(undefined4 param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0044bf9c. Too many branches */
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
    unaff_lr = 0x44bfb0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/cloud/param.(*ListFileNopagingReplyDataRecords).Less @ 0044bfd0 (size 216) */

void printerApi_cloud_param___ListFileNopagingReplyDataRecords__Less(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      piVar4 = *(int **)(unaff_r10 + 0x10);
      if ((piVar4 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar4)) {
        *piVar4 = (int)((int)register0x00000054 + -8);
      }
      piVar4 = *(int **)((int)register0x00000054 + 4);
      uVar8 = piVar4 == (int *)0x0;
      if (!(bool)uVar8) {
        uVar5 = piVar4[1];
        uVar2 = *(uint *)((int)register0x00000054 + 8);
        uVar8 = uVar2 == uVar5;
        if (uVar2 < uVar5) {
          pcVar6 = (char *)(*piVar4 + uVar2 * 0x20);
          uVar2 = *(uint *)((int)register0x00000054 + 0xc);
          uVar8 = uVar2 == uVar5;
          if (uVar2 < uVar5) {
            cVar1 = *pcVar6;
            pcVar3 = (char *)(*piVar4 + uVar2 * 0x20);
            if (cVar1 == *pcVar3) {
              cVar1 = *(int *)(pcVar3 + 0x10) < *(int *)(pcVar6 + 0x10) ||
                      *(int *)(pcVar3 + 0x10) == *(int *)(pcVar6 + 0x10) &&
                      *(uint *)(pcVar3 + 0xc) < *(uint *)(pcVar6 + 0xc);
            }
            *(char *)((int)register0x00000054 + 0x10) = cVar1;
                    /* WARNING: Could not recover jumptable at 0x0044c06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0xc))();
            return;
          }
          FUN_000986f8();
        }
        FUN_000986f8();
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x44c088;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/cloud/param.(*ListFileNopagingReplyDataRecords).Swap @ 0044c0a8 (size 276) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_cloud_param___ListFileNopagingReplyDataRecords__Swap(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int extraout_r3;
  int iVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x38) = unaff_lr;
      piVar4 = *(int **)(unaff_r10 + 0x10);
      if ((piVar4 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar4)) {
        *piVar4 = (int)((int)register0x00000054 + -0x34);
      }
      piVar4 = *(int **)((int)register0x00000054 + 4);
      uVar8 = piVar4 == (int *)0x0;
      if (!(bool)uVar8) {
        uVar5 = piVar4[1];
        uVar1 = *(uint *)((int)register0x00000054 + 8);
        uVar8 = uVar1 == uVar5;
        if (uVar1 < uVar5) {
          iVar2 = *piVar4 + uVar1 * 0x20;
          *(int *)((int)register0x00000054 + -4) = iVar2;
          FUN_00098dfc(iVar2,iVar2,(undefined1 *)((int)register0x00000054 + -0x28));
          uVar1 = *(uint *)((int)register0x00000054 + 0xc);
          uVar8 = uVar1 == uVar5;
          if (uVar1 < uVar5) {
            iVar6 = *_UNK_0044c1c0;
            iVar2 = extraout_r3 + uVar1 * 0x20;
            *(int *)((int)register0x00000054 + -8) = iVar2;
            if (iVar6 != 0) {
              *(undefined4 *)((int)register0x00000054 + -0x34) = _UNK_0044c1c4;
              *(undefined4 *)((int)register0x00000054 + -0x30) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(int *)((int)register0x00000054 + -0x2c) = iVar2;
              uVar1 = FUN_00022914();
              iVar2 = *(int *)((int)register0x00000054 + -8);
            }
            FUN_00098dfc(uVar1,iVar2,*(undefined4 *)((int)register0x00000054 + -4));
            uVar3 = 0;
            if (*_UNK_0044c1c0 != 0) {
              *(undefined4 *)((int)register0x00000054 + -0x34) = _UNK_0044c1c4;
              *(undefined4 *)((int)register0x00000054 + -0x30) =
                   *(undefined4 *)((int)register0x00000054 + -8);
              *(undefined1 **)((int)register0x00000054 + -0x2c) =
                   (undefined1 *)((int)register0x00000054 + -0x28);
              uVar3 = FUN_00022914();
            }
            FUN_00098dfc(uVar3,(undefined1 *)((int)register0x00000054 + -0x28),
                         *(undefined4 *)((int)register0x00000054 + -8));
                    /* WARNING: Could not recover jumptable at 0x0044c17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x38))();
            return;
          }
          FUN_000986f8(uVar1,uVar5);
        }
        FUN_000986f8();
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x38);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x44c19c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/cloud/param.(*ListVideoFileNopagingReplyDataRecords).Len @ 0044c1c8 (size 100) */

void printerApi_cloud_param___ListVideoFileNopagingReplyDataRecords__Len(undefined4 param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0044c1f8. Too many branches */
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
    unaff_lr = 0x44c20c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/cloud/param.(*ListVideoFileNopagingReplyDataRecords).Less @ 0044c22c (size 208) */

void printerApi_cloud_param___ListVideoFileNopagingReplyDataRecords__Less(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      piVar4 = *(int **)(unaff_r10 + 0x10);
      if ((piVar4 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar4)) {
        *piVar4 = (int)((int)register0x00000054 + -8);
      }
      piVar4 = *(int **)((int)register0x00000054 + 4);
      uVar9 = piVar4 == (int *)0x0;
      if (!(bool)uVar9) {
        uVar5 = piVar4[1];
        uVar1 = *(uint *)((int)register0x00000054 + 8);
        uVar9 = uVar1 == uVar5;
        if (uVar1 < uVar5) {
          iVar6 = *piVar4 + uVar1 * 0x28;
          uVar1 = *(uint *)((int)register0x00000054 + 0xc);
          uVar9 = uVar1 == uVar5;
          if (uVar1 < uVar5) {
            iVar7 = *(int *)(iVar6 + 0x24);
            iVar2 = *piVar4 + uVar1 * 0x28;
            iVar3 = *(int *)(iVar2 + 0x24);
            *(bool *)((int)register0x00000054 + 0x10) =
                 iVar7 != iVar3 && iVar3 <= iVar7 ||
                 iVar7 == iVar3 && *(uint *)(iVar2 + 0x20) < *(uint *)(iVar6 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0044c2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0xc))();
            return;
          }
          FUN_000986f8();
        }
        FUN_000986f8();
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x44c2dc;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/cloud/param.(*ListVideoFileNopagingReplyDataRecords).Swap @ 0044c2fc (size 284) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_cloud_param___ListVideoFileNopagingReplyDataRecords__Swap(undefined4 param_1)

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
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      piVar4 = *(int **)(unaff_r10 + 0x10);
      if ((piVar4 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar4)) {
        *piVar4 = (int)((int)register0x00000054 + -0x3c);
      }
      piVar4 = *(int **)((int)register0x00000054 + 4);
      uVar9 = piVar4 == (int *)0x0;
      if (!(bool)uVar9) {
        uVar5 = piVar4[1];
        uVar1 = *(uint *)((int)register0x00000054 + 8);
        uVar9 = uVar1 == uVar5;
        if (uVar1 < uVar5) {
          iVar2 = *piVar4 + uVar1 * 0x28;
          *(int *)((int)register0x00000054 + -4) = iVar2;
          FUN_00098dec(iVar2,iVar2,(undefined1 *)((int)register0x00000054 + -0x30));
          uVar1 = *(uint *)((int)register0x00000054 + 0xc);
          uVar9 = uVar1 == uVar5;
          if (uVar1 < uVar5) {
            iVar7 = *_UNK_0044c41c;
            iVar2 = uVar1 * 5;
            iVar6 = extraout_r3 + uVar1 * 0x28;
            *(int *)((int)register0x00000054 + -8) = iVar6;
            if (iVar7 != 0) {
              *(undefined4 *)((int)register0x00000054 + -0x3c) = _UNK_0044c420;
              *(undefined4 *)((int)register0x00000054 + -0x38) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(int *)((int)register0x00000054 + -0x34) = iVar6;
              iVar2 = FUN_00022914();
              iVar6 = *(int *)((int)register0x00000054 + -8);
            }
            FUN_00098dec(iVar2,iVar6,*(undefined4 *)((int)register0x00000054 + -4));
            uVar3 = 0;
            if (*_UNK_0044c41c != 0) {
              *(undefined4 *)((int)register0x00000054 + -0x3c) = _UNK_0044c420;
              *(undefined4 *)((int)register0x00000054 + -0x38) =
                   *(undefined4 *)((int)register0x00000054 + -8);
              *(undefined1 **)((int)register0x00000054 + -0x34) =
                   (undefined1 *)((int)register0x00000054 + -0x30);
              uVar3 = FUN_00022914();
            }
            FUN_00098dec(uVar3,(undefined1 *)((int)register0x00000054 + -0x30),
                         *(undefined4 *)((int)register0x00000054 + -8));
                    /* WARNING: Could not recover jumptable at 0x0044c3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x40))();
            return;
          }
          FUN_000986f8(uVar1,uVar5);
        }
        FUN_000986f8();
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x44c3f8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/cloud/param.(*OtaUpdateParam).Validate @ 0044c424 (size 136) */

void printerApi_cloud_param___OtaUpdateParam__Validate(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0xa4)) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x124);
      *(undefined4 *)((int)register0x00000054 + -0x124) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x120);
      }
      bVar4 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar4) {
        uVar1 = FUN_00098d24(param_1,*(int *)((int)register0x00000054 + 4),
                             (undefined1 *)((int)register0x00000054 + -0x8c));
        FUN_00098d24(uVar1,(undefined1 *)((int)register0x00000054 + -0x8c),
                     (undefined1 *)((int)register0x00000054 + -0x120));
        printerApi_cloud_param_OtaUpdateParam_Validate();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
                    /* WARNING: Could not recover jumptable at 0x0044c478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x124))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x124);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x44c48c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



