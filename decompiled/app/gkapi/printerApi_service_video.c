// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/video   functions: 17
/* printerApi/service/video.init @ 0049b9d4 (size 280) */

void printerApi_service_video_init(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x10) = *(undefined4 *)PTR_DAT_0049baf0;
      FUN_0009bf4c();
      bVar4 = *(undefined **)((int)register0x00000054 + -0xc) == PTR_DAT_0049baf4;
      if (bVar4) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0049baf8;
        FUN_0001eed8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0xc);
        if (*(int *)PTR_DAT_0049bafc == 0) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
        }
        else {
          FUN_00098698();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          *unaff_r8 = uVar1;
          unaff_r8[1] = extraout_r1;
          unaff_r8[2] = *(undefined4 *)PTR_DAT_0049bb00;
          puVar2 = extraout_r1;
        }
        *puVar2 = uVar1;
        *(undefined4 **)PTR_DAT_0049bb00 = puVar2;
        FUN_0008b6b8();
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x10);
        if (*(int *)PTR_DAT_0049bafc != 0) {
          FUN_00098688();
          *unaff_r8 = extraout_r1_00;
          unaff_r8[1] = *(undefined4 *)PTR_DAT_0049bb04;
          uVar1 = extraout_r1_00;
        }
        *(undefined4 *)PTR_DAT_0049bb04 = uVar1;
        FUN_0008b6b8();
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x10);
        if (*(int *)PTR_DAT_0049bafc != 0) {
          FUN_00098688();
          *unaff_r8 = extraout_r1_01;
          unaff_r8[1] = *(undefined4 *)PTR_DAT_0049bb08;
          uVar1 = extraout_r1_01;
        }
        *(undefined4 *)PTR_DAT_0049bb08 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0049bac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x14))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x10) =
           *(undefined **)((int)register0x00000054 + -0xc);
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0049baf4;
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0049bb0c;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x49bae8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/video.Init @ 0049bb10 (size 228) */

void printerApi_service_video_Init(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x49bbf0;
    FUN_00096bb8();
  }
  printerApi_service_k3c___K3c__Subscribe();
  FUN_0008a578();
  printerApi_service_event___Dispatcher__RegisterEvent();
  FUN_0008a578();
  printerApi_service_event___Dispatcher__RegisterEvent();
                    /* WARNING: Could not recover jumptable at 0x0049bbe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/video.CallVideoStreamService @ 0049bc24 (size 164) */

void printerApi_service_video_CallVideoStreamService(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 *local_28;
  undefined1 auStack_20 [32];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (*(int *)PTR_DAT_0049bccc != 0) {
    FUN_00098e14(in_stack_00000008,&stack0x0000000c,auStack_20);
    printerApi_service_video___Video__CallVideoStreamService();
    return;
  }
  FUN_0001eed8();
  local_28[1] = 0x17;
  *local_28 = PTR_DAT_0049bcd4;
  return;
}



/* printerApi/service/video.(*Video).CallVideoStreamService @ 0049bcdc (size 620) */

void printerApi_service_video___Video__CallVideoStreamService(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined1 *local_48;
  undefined **local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined3 uStack_37;
  int local_34;
  undefined1 auStack_2c [8];
  undefined4 local_24;
  int local_20;
  undefined1 local_1c [8];
  undefined4 local_14;
  int *local_10;
  int local_c;
  undefined *local_8;
  undefined1 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_20 = in_stack_00000004 + 0xc;
  FUN_000b3994();
  local_48 = *(undefined1 **)(in_stack_00000004 + 0x14);
  local_44 = (undefined **)in_stack_00000010;
  FUN_0008d510();
  if ((char)local_3c != '\0') {
    FUN_000b3de4();
    local_8 = (undefined *)0x0;
    local_4 = (undefined1 *)0x0;
    FUN_0001cec0();
    local_8 = PTR_DAT_0049bf5c;
    local_4 = local_48;
    local_48 = (undefined1 *)0x16;
    local_44 = &local_8;
    local_40 = (undefined4 *)0x1;
    local_3c = 1;
    FUN_00130144();
    return;
  }
  local_48 = (undefined1 *)0x1;
  FUN_00017058();
  local_24 = local_44;
  FUN_00098e14(in_stack_00000004,&stack0x00000010,&local_48);
  printerApi_service_k3c_wrapper___K3cwrapper__PublishVideoStreamRequest();
  local_48 = *(undefined1 **)(in_stack_00000004 + 0x14);
  local_44 = (undefined **)in_stack_00000010;
  FUN_0008d6bc();
  if (*(int *)PTR_DAT_0049bf54 != 0) {
    local_40 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_24;
    unaff_r8[1] = *local_40;
  }
  *local_40 = local_24;
  FUN_000b3de4();
  local_c = 0;
  (**(code **)(in_stack_00000008 + 0x10))();
  FUN_00098a28(0,local_1c,local_48);
  local_14 = local_24;
  local_10 = &local_c;
  local_48 = auStack_2c;
  local_44 = (undefined **)0x0;
  local_40 = (undefined4 *)0x0;
  local_3c = 2;
  _local_38 = CONCAT31(uStack_37,1);
  FUN_00067f3c();
  if (local_34 == 0) {
    (**(code **)(in_stack_00000008 + 0x14))();
    return;
  }
  if (*(int *)(local_c + 0x18) == 0) {
    return;
  }
  return;
}



/* printerApi/service/video.(*Video).RegisterNotifyCallback @ 0049bf64 (size 308) */

void printerApi_service_video___Video__RegisterNotifyCallback(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 *puStack_14;
  char cStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x49c094;
    FUN_00096bb8();
  }
  FUN_0008e314();
  if (cStack_10 != '\0') {
    FUN_0008a578();
    FUN_00130144();
                    /* WARNING: Could not recover jumptable at 0x0049c088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0008e7bc();
  if (*(int *)PTR_DAT_0049c0a0 != 0) {
    puStack_14 = (undefined4 *)FUN_00098688();
    *unaff_r8 = in_stack_00000010;
    unaff_r8[1] = *puStack_14;
  }
  *puStack_14 = in_stack_00000010;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x0049c018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/video.(*Video).RPCID @ 0049c0ac (size 60) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_video___Video__RPCID(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x49c0e4;
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd();
                    /* WARNING: Could not recover jumptable at 0x0049c0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/video.(*Video).SendRaw @ 0049c0f0 (size 876) */

/* WARNING: Removing unreachable block (ram,0x0049c190) */

void printerApi_service_video___Video__SendRaw(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_ffffff4c;
  char cStack_a8;
  int iStack_a4;
  undefined1 auStack_94 [48];
  int *piStack_64;
  undefined1 auStack_3c [24];
  int iStack_24;
  int *piStack_20;
  undefined *puStack_1c;
  int iStack_18;
  int *piStack_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  int iStack_8;
  undefined **ppuStack_4;
  
  while (auStack_3c <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x49c460;
    FUN_00096bb8();
  }
  ppuStack_4 = (undefined **)0x0;
  FUN_0001eed8();
  uVar2 = in_stack_0000000c;
  iStack_8 = in_stack_ffffff4c;
  FUN_0016a168();
  if (iStack_a4 != 0) {
    puStack_10 = *(undefined **)(iStack_a4 + 4);
    printerApi_common_logger_Errorf();
                    /* WARNING: Could not recover jumptable at 0x0049c1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar1 = FUN_000989cc(0,auStack_94);
  if (*(int *)(iStack_8 + 8) == 0) {
    func_0x00098d64(*(int *)(iStack_8 + 0xc),*(int *)(iStack_8 + 0xc) + 8,auStack_94,iStack_8,
                    UNRECOVERED_JUMPTABLE,in_stack_00000008,uVar2,in_stack_00000010);
  }
  else {
    func_0x00098d64(uVar1,*(int *)(iStack_8 + 8) + 8,auStack_94,iStack_8,UNRECOVERED_JUMPTABLE,
                    in_stack_00000008,uVar2,in_stack_00000010);
  }
  if (piStack_64 == (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0049c44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  piStack_20 = piStack_64;
  iStack_24 = in_stack_00000004 + 0xc;
  FUN_000b3994();
  puStack_1c = PTR_printerApi_service_video___Video__SendRaw_deferwrap1_0049c474;
  iStack_18 = iStack_24;
  ppuStack_4 = &puStack_1c;
  if (*piStack_20 == 0) {
    puStack_10 = (undefined *)0x0;
    uStack_c = 0;
    FUN_00093e34();
    FUN_0008a578();
    puStack_10 = PTR_SUB_0049c484;
    uStack_c = in_stack_0000000c;
    printerApi_common_logger_Errorf();
    printerApi_service_video___Video__notify();
    (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0049c438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar2 = *(undefined4 *)(in_stack_00000004 + 0x14);
  FUN_0008d510();
  cStack_a8 = (char)in_stack_ffffff4c;
  if (cStack_a8 == '\0') {
    puStack_10 = (undefined *)0x0;
    uStack_c = 0;
    FUN_0001cec0();
    puStack_10 = PTR_DAT_0049c47c;
    uStack_c = uVar2;
    printerApi_common_logger_Errorf();
    (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0049c384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  piStack_14 = piStack_20;
  FUN_000172bc();
  FUN_00020b1c();
  (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0049c304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/video.(*Video).SendRaw.deferwrap1 @ 0049c48c (size 84) */

void printerApi_service_video___Video__SendRaw_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000b3de4();
  return;
}



/* printerApi/service/video.(*Video).notify @ 0049c4e0 (size 220) */

void printerApi_service_video___Video__notify(void)

{
  undefined4 uVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 *puStack_20;
  char cStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  undefined *puStack_8;
  undefined *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x49c5b8;
    FUN_00096bb8();
  }
  uVar1 = *(undefined4 *)(in_stack_00000008 + 4);
  FUN_0008e314();
  if (cStack_1c != '\0') {
    (**(code **)*puStack_20)();
                    /* WARNING: Could not recover jumptable at 0x0049c540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_00098a20(0,&puStack_18);
  puStack_18 = PTR_SUB_0049c5c4;
  puStack_14 = PTR_DAT_0049c5c8;
  FUN_0008a578();
  puStack_10 = PTR_SUB_0049c5c4;
  puStack_8 = PTR_SUB_0049c5c4;
  puStack_4 = PTR_DAT_0049c5cc;
  uStack_c = uVar1;
  printerApi_common_logger_Debug();
                    /* WARNING: Could not recover jumptable at 0x0049c5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/video.(*Video).Name @ 0049c5d0 (size 24) */

void printerApi_service_video___Video__Name(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = *in_stack_00000004;
  uStack0000000c = in_stack_00000004[1];
                    /* WARNING: Could not recover jumptable at 0x0049c5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/video.(*Video).Closed @ 0049c5e8 (size 12) */

void printerApi_service_video___Video__Closed(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uStack00000008;
  
  uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x0049c5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/video.OpenAICamera @ 0049c5f8 (size 152) */

void printerApi_service_video_OpenAICamera(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0008a578();
  printerApi_service_event___Dispatcher__Dispatch();
  printerApi_service_video_OpCamerea();
  return;
}



/* printerApi/service/video.OpCamerea @ 0049c6a8 (size 404) */

void printerApi_service_video_OpCamerea(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 *in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined *local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 *local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_29;
  undefined4 local_28;
  undefined *local_24;
  undefined *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined *local_14;
  undefined *local_10;
  undefined4 local_c;
  undefined *local_8;
  undefined4 *local_4;
  
  while (puVar1 = PTR_DAT_0049c848, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_4 = (undefined4 *)0x0;
  local_29 = 0;
  in_stack_00000018 = 0;
  in_stack_0000001c = 0;
  if (in_stack_00000010 == 1) {
    local_28 = in_stack_0000000c[1];
    local_c = *in_stack_0000000c;
  }
  else {
    local_28 = 0;
    local_c = 0;
  }
  internal_runtime_atomic_Xadd();
  local_24 = local_4c;
  FUN_0008b6b8();
  local_8 = puVar1;
  local_4c = PTR_s_filepathindicatefileNameXX_Appid_0077568d_0x1a8_0049c850;
  local_48 = 8;
  FUN_0008e7bc();
  local_44[1] = local_28;
  puVar2 = local_44;
  if (*(int *)PTR_DAT_0049c854 != 0) {
    puVar2 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_c;
    unaff_r8[1] = *puVar2;
  }
  *puVar2 = local_c;
  local_20 = local_24;
  local_1c = in_stack_00000004;
  local_18 = in_stack_00000008;
  local_14 = PTR_DAT_0049c84c;
  local_10 = local_8;
  local_4c = DAT_0049c860;
  local_48 = 2;
  FUN_00155144();
  local_4 = local_3c;
  local_29 = 1;
  FUN_00098e14(local_44,&local_20,&local_4c);
  printerApi_service_video_CallVideoStreamService();
  in_stack_00000018 = local_34;
  in_stack_0000001c = local_30;
  local_29 = 0;
  (*(code *)*local_4)();
  return;
}



/* printerApi/service/video.SetCameraLed @ 0049c864 (size 608) */

/* WARNING: Removing unreachable block (ram,0x0049c8b8) */

void printerApi_service_video_SetCameraLed(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *local_58;
  undefined *local_54;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined *local_48;
  undefined4 *local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_31;
  undefined4 local_30;
  undefined *local_2c;
  undefined *local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined *local_8;
  undefined4 *local_4;
  
  while (puVar1 = PTR_DAT_0049cacc, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_4 = (undefined4 *)0x0;
  local_31 = 0;
  in_stack_00000008 = 0;
  in_stack_0000000c = 0;
  if ((*(int *)PTR_DAT_0049cac8 == 0) || (*(char *)(*(int *)PTR_DAT_0049cac8 + 0x1c) == '\0')) {
    FUN_0001eed8();
    local_58[1] = 0x10;
    *local_58 = PTR_DAT_0049cafc;
    return;
  }
  internal_runtime_atomic_Xadd();
  local_2c = local_54;
  FUN_0008b6b8();
  local_c = puVar1;
  FUN_0001cec0();
  local_10 = 1;
  local_54 = PTR_DAT_0049cad4;
  local_50 = 6;
  FUN_0008e7bc();
  *local_4c = PTR_DAT_0049cad8;
  puVar2 = local_4c;
  if (*(int *)PTR_DAT_0049cadc != 0) {
    puVar2 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_10;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = local_10;
  local_28 = local_2c;
  local_24 = PTR_DAT_0049cae0;
  local_20 = 6;
  local_1c = PTR_DAT_0049cad0;
  local_18 = local_c;
  local_54 = DAT_0049caec;
  local_50 = 2;
  FUN_00155144();
  local_4 = local_44;
  local_31 = 1;
  FUN_00098e14(local_4c,&local_28,&local_54);
  printerApi_service_video_CallVideoStreamService();
  local_30 = local_3c;
  local_14 = local_38;
  if (*(int *)PTR_DAT_0049cac8 != 0) {
    *(undefined4 *)(*(int *)PTR_DAT_0049cac8 + 0x20) = in_stack_00000004;
  }
  FUN_0009bf4c();
  if (local_48 == PTR_DAT_0049caf4) {
    local_8 = local_54;
    printerApi_service_k3c_wrapper___K3cwrapper__PublishCameraLedStatus();
    in_stack_00000008 = local_30;
    in_stack_0000000c = local_14;
    local_31 = 0;
    (*(code *)*local_4)();
    return;
  }
  local_54 = PTR_DAT_0049cb04;
  uVar3 = FUN_0001cb94();
  FUN_0004fb3c(uVar3);
  return;
}



/* printerApi/service/video.OpenDelayCamera @ 0049cb08 (size 168) */

void printerApi_service_video_OpenDelayCamera(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0008a578();
  printerApi_service_event___Dispatcher__Dispatch();
  printerApi_service_video_OpCamerea();
  return;
}



/* printerApi/service/video.Init.func1 @ 0049cbc8 (size 40) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_video_Init_func1(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uStack0000000c;
  
  *(undefined1 *)(*_UNK_0049cbf4 + 0x1c) = 1;
  *(undefined4 *)(*_UNK_0049cbf4 + 0x20) = 1;
  uStack0000000c = 1;
                    /* WARNING: Could not recover jumptable at 0x0049cbec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/video.Init.func2 @ 0049cbf8 (size 44) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_video_Init_func2(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uStack0000000c;
  
  *(undefined1 *)(*_UNK_0049cc28 + 0x1c) = 0;
  *(undefined4 *)(*_UNK_0049cc28 + 0x20) = 0;
  uStack0000000c = 1;
                    /* WARNING: Could not recover jumptable at 0x0049cc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



