// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/rpc/socket/pool/client/bean   functions: 2
/* printerApi/common/rpc/socket/pool/client/bean.SafeBean.CheckSafety @ 00646b3c (size 460) */

void printerApi_common_rpc_socket_pool_client_bean_SafeBean_CheckSafety(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  undefined8 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      puVar1 = *(undefined **)((int)register0x00000054 + 0xc);
      uVar8 = CONCAT44(PTR_SUB_00646d0c,puVar1);
      if (puVar1 == (undefined *)0x0) {
        *(undefined **)((int)register0x00000054 + 0x14) = PTR_DAT_00646d1c;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0xb;
                    /* WARNING: Could not recover jumptable at 0x00646ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      uVar7 = 0;
      if (puVar1 == PTR_SUB_00646d0c) {
        iVar4 = (*(undefined4 **)((int)register0x00000054 + 0x10))[1];
        if (iVar4 == 0) {
          *(undefined **)((int)register0x00000054 + 0x14) = PTR_DAT_00646d1c;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0xb;
                    /* WARNING: Could not recover jumptable at 0x00646cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(int *)((int)register0x00000054 + -8) = iVar4;
        *(undefined4 *)((int)register0x00000054 + -4) =
             **(undefined4 **)((int)register0x00000054 + 0x10);
        puVar1 = *(undefined **)((int)register0x00000054 + 4);
        if (puVar1 == (undefined *)0x0) {
          uVar2 = *(undefined4 *)(*(int *)PTR_DAT_00646d10 + 0xc);
          *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_00646d14;
          *(undefined4 *)((int)register0x00000054 + -0x18) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
          FUN_00021c74();
          iVar4 = (*(undefined4 **)((int)register0x00000054 + -0xc))[1];
          if (iVar4 == *(int *)((int)register0x00000054 + -8)) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 **(undefined4 **)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            *(int *)((int)register0x00000054 + -0x14) = iVar4;
            FUN_000150d4();
            if (*(char *)((int)register0x00000054 + -0x10) != '\0') {
              uVar2 = 0;
              puVar1 = (undefined *)0x0;
              goto LAB_00646c9c;
            }
          }
          uVar2 = 0xb;
          puVar1 = PTR_DAT_00646d18;
LAB_00646c9c:
          *(undefined **)((int)register0x00000054 + 0x14) = puVar1;
          *(undefined4 *)((int)register0x00000054 + 0x18) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00646ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        uVar7 = puVar1 == PTR_SUB_00646d0c;
        if ((bool)uVar7) {
          uVar3 = **(undefined4 **)((int)register0x00000054 + 8);
          uVar2 = (*(undefined4 **)((int)register0x00000054 + 8))[1];
          uVar5 = *(undefined4 *)(*(int *)PTR_DAT_00646d10 + 0xc);
          *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_00646d14;
          *(undefined4 *)((int)register0x00000054 + -0x18) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x14) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x10) = uVar2;
          FUN_00021c74();
          iVar4 = (*(undefined4 **)((int)register0x00000054 + -0xc))[1];
          if (iVar4 == *(int *)((int)register0x00000054 + -8)) {
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 **(undefined4 **)((int)register0x00000054 + -0xc);
            *(undefined4 *)((int)register0x00000054 + -0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            *(int *)((int)register0x00000054 + -0x14) = iVar4;
            FUN_000150d4();
            if (*(char *)((int)register0x00000054 + -0x10) != '\0') {
              *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00646c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x20))();
              return;
            }
          }
          *(undefined **)((int)register0x00000054 + 0x14) = PTR_DAT_00646d18;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0xb;
                    /* WARNING: Could not recover jumptable at 0x00646c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        *(undefined **)((int)register0x00000054 + -0x1c) = puVar1;
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_SUB_00646d0c;
        *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_00646d20;
        uVar8 = FUN_0001cb94();
      }
      *(undefined8 *)((int)register0x00000054 + -0x1c) = uVar8;
      *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_00646d20;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x646d04;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/rpc/socket/pool/client/bean.(*SafeBean).CheckSafety @ 00646d24 (size 484) */

void printerApi_common_rpc_socket_pool_client_bean___SafeBean__CheckSafety(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  undefined8 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_lr;
      piVar3 = *(int **)(unaff_r10 + 0x10);
      if ((piVar3 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar3)) {
        *piVar3 = (int)((int)register0x00000054 + -0x1c);
      }
      uVar9 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!(bool)uVar9) {
        puVar1 = *(undefined **)((int)register0x00000054 + 0x10);
        uVar10 = CONCAT44(PTR_SUB_00646f0c,puVar1);
        puVar7 = PTR_DAT_00646f10;
        if (puVar1 == (undefined *)0x0) {
          uVar2 = 0xb;
LAB_00646ea4:
          *(undefined **)((int)register0x00000054 + 0x18) = puVar7;
          *(undefined4 *)((int)register0x00000054 + 0x1c) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00646eac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x20))();
          return;
        }
        uVar9 = 0;
        if (puVar1 == PTR_SUB_00646f0c) {
          iVar5 = (*(undefined4 **)((int)register0x00000054 + 0x14))[1];
          if (iVar5 == 0) {
            uVar2 = 0xb;
            goto LAB_00646ea4;
          }
          *(int *)((int)register0x00000054 + -8) = iVar5;
          *(undefined4 *)((int)register0x00000054 + -4) =
               **(undefined4 **)((int)register0x00000054 + 0x14);
          puVar7 = *(undefined **)((int)register0x00000054 + 8);
          if (puVar7 == (undefined *)0x0) {
            uVar2 = *(undefined4 *)(*(int *)PTR_DAT_00646f14 + 0xc);
            *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_00646f18;
            *(undefined4 *)((int)register0x00000054 + -0x18) = uVar2;
            *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
            FUN_00021c74();
            iVar5 = (*(undefined4 **)((int)register0x00000054 + -0xc))[1];
            if (iVar5 == *(int *)((int)register0x00000054 + -8)) {
              *(undefined4 *)((int)register0x00000054 + -0x1c) =
                   **(undefined4 **)((int)register0x00000054 + -0xc);
              *(undefined4 *)((int)register0x00000054 + -0x18) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(int *)((int)register0x00000054 + -0x14) = iVar5;
              FUN_000150d4();
              if (*(char *)((int)register0x00000054 + -0x10) != '\0') {
                uVar2 = 0;
                puVar7 = (undefined *)0x0;
                goto LAB_00646ea4;
              }
            }
            uVar2 = 0xb;
            puVar7 = PTR_DAT_00646f1c;
            goto LAB_00646ea4;
          }
          uVar9 = puVar7 == PTR_SUB_00646f0c;
          if ((bool)uVar9) {
            uVar4 = **(undefined4 **)((int)register0x00000054 + 0xc);
            uVar2 = (*(undefined4 **)((int)register0x00000054 + 0xc))[1];
            uVar6 = *(undefined4 *)(*(int *)PTR_DAT_00646f14 + 0xc);
            *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_00646f18;
            *(undefined4 *)((int)register0x00000054 + -0x18) = uVar6;
            *(undefined4 *)((int)register0x00000054 + -0x14) = uVar4;
            *(undefined4 *)((int)register0x00000054 + -0x10) = uVar2;
            FUN_00021c74();
            iVar5 = (*(undefined4 **)((int)register0x00000054 + -0xc))[1];
            if (iVar5 == *(int *)((int)register0x00000054 + -8)) {
              *(undefined4 *)((int)register0x00000054 + -0x1c) =
                   **(undefined4 **)((int)register0x00000054 + -0xc);
              *(undefined4 *)((int)register0x00000054 + -0x18) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(int *)((int)register0x00000054 + -0x14) = iVar5;
              FUN_000150d4();
              if (*(char *)((int)register0x00000054 + -0x10) != '\0') {
                uVar2 = 0;
                puVar7 = (undefined *)0x0;
                goto LAB_00646ea4;
              }
            }
            uVar2 = 0xb;
            puVar7 = PTR_DAT_00646f1c;
            goto LAB_00646ea4;
          }
          *(undefined **)((int)register0x00000054 + -0x1c) = puVar7;
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_SUB_00646f0c;
          *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_00646f20;
          uVar10 = FUN_0001cb94();
        }
        *(undefined8 *)((int)register0x00000054 + -0x1c) = uVar10;
        *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_00646f20;
        FUN_0001cb94();
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x646ee8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



