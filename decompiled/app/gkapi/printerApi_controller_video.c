// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/controller/video   functions: 4
/* printerApi/controller/video.VideoController.VideoStreamReply @ 00669ed8 (size 144) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_video_VideoController_VideoStreamReply(undefined4 param_1)

{
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = *_UNK_00669f6c;
      FUN_0009bf4c();
      bVar2 = *(int *)((int)register0x00000054 + -0x28) == _UNK_00669f70;
      if (bVar2) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined1 **)((int)register0x00000054 + -0x2c) =
             (undefined1 *)((int)register0x00000054 + -4);
        FUN_00098e04((undefined1 *)((int)register0x00000054 + -4),
                     (undefined1 *)((int)register0x00000054 + 0x10),
                     (undefined1 *)((int)register0x00000054 + -0x28));
        printerApi_service_k3c_wrapper___K3cwrapper__PublishVideoStreamReply();
        *(undefined4 *)((int)register0x00000054 + 0x38) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x3c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00669f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x30))();
        return;
      }
      *(int *)((int)register0x00000054 + -0x2c) = *(int *)((int)register0x00000054 + -0x28);
      *(int *)((int)register0x00000054 + -0x28) = _UNK_00669f70;
      *(undefined4 *)((int)register0x00000054 + -0x24) = _UNK_00669f74;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    unaff_lr = 0x669f64;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/video.VideoController.CameraInfoNotify @ 00669f78 (size 276) */

void printerApi_controller_video_VideoController_CameraInfoNotify
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  undefined8 uVar4;
  
  do {
    uVar4 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      if (*(int *)((int)register0x00000054 + 0x10) == 0) {
        uVar1 = *(undefined4 *)PTR_DAT_0066a090;
        *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)PTR_DAT_0066a094;
        *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x20) = uVar1;
        FUN_0008a578();
        *(undefined4 *)((int)register0x00000054 + -0x24) = *(undefined4 *)PTR_DAT_0066a098;
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0066a09c;
        printerApi_service_event___Dispatcher__Dispatch();
      }
      else {
        uVar1 = *(undefined4 *)PTR_DAT_0066a0a0;
        *(undefined4 *)((int)register0x00000054 + -0x10) = *(undefined4 *)PTR_DAT_0066a0a4;
        *(undefined4 *)((int)register0x00000054 + -0xc) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x20) = uVar1;
        FUN_0008a578();
        *(undefined4 *)((int)register0x00000054 + -0x24) = *(undefined4 *)PTR_DAT_0066a098;
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0066a09c;
        printerApi_service_event___Dispatcher__Dispatch();
      }
      *(undefined4 *)((int)register0x00000054 + -0x24) = *(undefined4 *)PTR_DAT_0066a0a8;
      FUN_0009bf4c();
      bVar3 = *(undefined **)((int)register0x00000054 + -0x20) == PTR_DAT_0066a0ac;
      if (bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined1 **)((int)register0x00000054 + -0x24) =
             (undefined1 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        printerApi_service_k3c_wrapper___K3cwrapper__PublishCameraInfo();
        *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
                    /* WARNING: Could not recover jumptable at 0x0066a064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x24) =
           *(undefined **)((int)register0x00000054 + -0x20);
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0066a0ac;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0066a0b0;
      unaff_lr = 0x66a07c;
      uVar4 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_00096bb8((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x66a088;
    param_3 = extraout_r2_00;
  } while( true );
}



/* printerApi/controller/video.(*VideoController).CameraInfoNotify @ 0066a0b4 (size 132) */

void printerApi_controller_video___VideoController__CameraInfoNotify(undefined4 param_1)

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
        printerApi_controller_video_VideoController_CameraInfoNotify();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0066a104. Too many branches */
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
    unaff_lr = 0x66a118;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/video.(*VideoController).VideoStreamReply @ 0066a138 (size 132) */

void printerApi_controller_video___VideoController__VideoStreamReply(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x3c);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098ddc(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x3c));
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x38);
        printerApi_controller_video_VideoController_VideoStreamReply();
        *(undefined4 *)((int)register0x00000054 + 0x3c) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x40) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0066a188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x40))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x66a19c;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



