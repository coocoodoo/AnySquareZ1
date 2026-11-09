// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/controller/camera   functions: 2
/* printerApi/controller/camera.CameraQueryController.QueryCameraStatus @ 00648870 (size 88) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_camera_CameraQueryController_QueryCameraStatus(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x6488c4;
    FUN_00096bb8();
  }
  printerApi_service_video_OpCamerea();
                    /* WARNING: Could not recover jumptable at 0x006488b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/camera.(*CameraQueryController).QueryCameraStatus @ 006488d0 (size 152) */

/* WARNING: Removing unreachable block (ram,0x006488f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_camera___CameraQueryController__QueryCameraStatus(undefined4 param_1)

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
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0x1c) = _UNK_0064896c;
        *(undefined4 *)((int)register0x00000054 + -0x18) = 0xb;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
        printerApi_service_video_OpCamerea();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00648934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x20))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x20);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x648948;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



