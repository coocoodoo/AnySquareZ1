// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/controller/delayPhotography   functions: 4
/* printerApi/controller/delayPhotography.DelayPhotographyController.Server @ 0064c1d4 (size 460) */

/* WARNING: Removing unreachable block (ram,0x0064c30c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_delayPhotography_DelayPhotographyController_Server(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  int iStack_30;
  undefined4 *puStack_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x64c3a4;
    FUN_00096bb8();
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  FUN_00155144();
  FUN_00021c74();
  printerApi_common_utils_cast_ToFloat64E();
  printerApi_service_k3c_wrapper___K3cwrapper__SetDelayPhotoEnable();
  if (iStack_30 == 0) {
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
    (*(code *)*puStack_28)();
                    /* WARNING: Could not recover jumptable at 0x0064c390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  printerApi_common_logger_Errorf();
  (*(code *)*puStack_28)();
                    /* WARNING: Could not recover jumptable at 0x0064c368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/delayPhotography.DelayPhotographyController.Camera @ 0064c3c8 (size 224) */

void printerApi_controller_delayPhotography_DelayPhotographyController_Camera(undefined4 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      if (*(undefined **)((int)register0x00000054 + 0xc) == PTR_DAT_0064c4ac) {
        uVar1 = *(undefined4 *)((int)register0x00000054 + 0x10);
      }
      else {
        uVar1 = 0;
      }
      *(undefined **)((int)register0x00000054 + -0x14) = PTR_DAT_0064c4ac;
      *(undefined4 *)((int)register0x00000054 + -0x10) = uVar1;
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0064c4b0;
      *(undefined4 *)((int)register0x00000054 + -8) = 6;
      FUN_00021c74();
      puVar2 = (undefined *)**(undefined4 **)((int)register0x00000054 + -4);
      bVar4 = puVar2 == PTR_DAT_0064c4b4;
      if (bVar4) {
        if (*(double *)(*(undefined4 **)((int)register0x00000054 + -4))[1] == 1.0) {
          *(undefined4 *)((int)register0x00000054 + -0x14) = *(undefined4 *)PTR_DAT_0064c4b8;
          *(undefined1 *)((int)register0x00000054 + -0x10) = 1;
          printerApi_cloud___printerHandler__SetDelayPhoto();
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -0x14) = *(undefined4 *)PTR_DAT_0064c4b8;
          *(undefined1 *)((int)register0x00000054 + -0x10) = 0;
          printerApi_cloud___printerHandler__SetDelayPhoto();
        }
        *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
                    /* WARNING: Could not recover jumptable at 0x0064c480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x18))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x14) = puVar2;
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0064c4b4;
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0064c4bc;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x64c4a4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/delayPhotography.(*DelayPhotographyController).Camera @ 0064c4c0 (size 132) */

void printerApi_controller_delayPhotography___DelayPhotographyController__Camera(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_delayPhotography_DelayPhotographyController_Camera();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064c510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x64c524;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/delayPhotography.(*DelayPhotographyController).Server @ 0064c544 (size 132) */

void printerApi_controller_delayPhotography___DelayPhotographyController__Server(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x24);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e0c(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x24));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        printerApi_controller_delayPhotography_DelayPhotographyController_Server();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064c594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x64c5a8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



