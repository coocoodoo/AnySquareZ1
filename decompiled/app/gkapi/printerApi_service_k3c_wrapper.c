// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/k3c_wrapper   functions: 83
/* printerApi/service/k3c_wrapper.init @ 00431404 (size 176) */

void printerApi_service_k3c_wrapper_init(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x10) = *(undefined4 *)PTR_DAT_004314b8;
      FUN_0009bf4c();
      bVar4 = *(undefined **)((int)register0x00000054 + -0xc) == PTR_DAT_004314bc;
      if (bVar4) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_004314c0;
        FUN_0001eed8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0xc);
        if (*(int *)PTR_DAT_004314c4 == 0) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
        }
        else {
          FUN_00098698();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          *unaff_r8 = uVar1;
          unaff_r8[1] = extraout_r1;
          unaff_r8[2] = *(undefined4 *)PTR_DAT_004314c8;
          puVar2 = extraout_r1;
        }
        *puVar2 = uVar1;
        *(undefined4 **)PTR_DAT_004314c8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0043148c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x14))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x10) =
           *(undefined **)((int)register0x00000054 + -0xc);
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_004314bc;
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_004314cc;
      param_1 = FUN_0001cb94();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x4314b0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishAxisMoveStatus @ 004314d0 (size 348) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishAxisMoveStatus(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int local_38;
  int local_28;
  undefined *local_20;
  undefined4 local_1c;
  int local_18;
  int local_8;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = local_38;
  uVar1 = 0;
  if (*(int *)PTR_DAT_00431634 != 0) {
    uVar1 = FUN_00022914();
  }
  FUN_00098e2c(uVar1,&stack0x00000008,local_4);
  FUN_00098a20(0,&local_20);
  local_20 = PTR_DAT_00431638;
  local_1c = 0x15;
  FUN_0001eed8();
  local_8 = local_38;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_00431634 != 0) {
    FUN_00098698();
    *unaff_r8 = local_4;
    unaff_r8[1] = extraout_r3;
    unaff_r8[2] = *(int *)(local_8 + 0x5c);
    local_38 = extraout_r3;
  }
  *(int *)(local_38 + 0x18) = local_4;
  *(int *)(local_8 + 0x5c) = local_38;
  local_18 = local_8;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_28 == 0) {
    printerApi_service_k3c_Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).OpenDelayPhoto @ 00431648 (size 84) */

void printerApi_service_k3c_wrapper___K3cwrapper__OpenDelayPhoto(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x431698;
    FUN_00096bb8();
  }
  printerApi_service_k3c_wrapper___K3cwrapper__SetDelayPhotoEnable();
                    /* WARNING: Could not recover jumptable at 0x0043168c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).CloseDelayPhoto @ 0043169c (size 84) */

void printerApi_service_k3c_wrapper___K3cwrapper__CloseDelayPhoto(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4316ec;
    FUN_00096bb8();
  }
  printerApi_service_k3c_wrapper___K3cwrapper__SetDelayPhotoEnable();
                    /* WARNING: Could not recover jumptable at 0x004316e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetDelayPhotoEnable @ 004316f0 (size 680) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetDelayPhotoEnable(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 *local_8c;
  int local_80;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [20];
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  undefined *local_4;
  
  while (puVar1 = PTR_DAT_0043199c, auStack_20 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_18 = puVar1;
  FUN_0001cec0();
  puVar1 = local_18;
  local_1c = 1;
  FUN_0008e7bc();
  *local_8c = PTR_DAT_004319a8;
  if (*(int *)PTR_DAT_004319ac != 0) {
    local_8c = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = local_8c[1];
  }
  local_8c[1] = local_1c;
  FUN_00098a20(0,&local_64);
  local_64 = PTR_DAT_004319b0;
  local_60 = 0x14;
  local_5c = PTR_DAT_004319a0;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = puVar1;
  FUN_0001cd7c();
  puVar2 = local_4;
  puVar1 = PTR_DAT_004319bc;
  printerApi_service_k3c___K3c__CallContext();
  if (local_80 != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar3 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar3,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_004319c0;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_004319c0;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar4 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = puVar2;
  if (*(int *)PTR_DAT_004319ac != 0) {
    puVar4 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar1;
  }
  *puVar4 = puVar1;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).GetDelayPhotoConfig @ 004319d0 (size 588) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__GetDelayPhotoConfig(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_0000000c;
  int iStack_74;
  undefined *puStack_5c;
  undefined4 uStack_58;
  undefined *puStack_54;
  undefined1 auStack_44 [24];
  undefined1 auStack_2c [24];
  undefined *puStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  while (puVar1 = PTR_DAT_00431c20, &puStack_14 <= *(undefined ***)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x431c18;
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  FUN_00098a20(0,&puStack_5c,puVar1);
  puStack_5c = PTR_DAT_00431c24;
  uStack_58 = 0x14;
  puStack_54 = PTR_DAT_00431c28;
  FUN_0001eed8();
  iStack_4 = 1;
  FUN_0001cd7c();
  iVar2 = iStack_4;
  puVar1 = PTR_DAT_00431c34;
  printerApi_service_k3c___K3c__CallContext();
  if (iStack_74 == 0) {
    if (*(int *)(iStack_4 + 0x14) != 0) {
      uVar3 = FUN_00098e0c(iStack_4,*(int *)(iStack_4 + 0x14),auStack_2c);
      FUN_00098e0c(uVar3,auStack_2c,auStack_44);
      FUN_00098a28(0,&puStack_14);
      FUN_0008a578();
      puStack_14 = PTR_SUB_00431c38;
      uStack_10 = in_stack_0000000c;
      FUN_0008a578();
      puStack_c = PTR_SUB_00431c38;
      uStack_8 = in_stack_0000000c;
      FUN_001331ac();
      FUN_0001eed8();
      puVar4 = (undefined4 *)&DAT_00000007;
      _DAT_0000000b = iVar2;
      if (*(int *)PTR_DAT_00431c44 != 0) {
        puVar4 = (undefined4 *)FUN_00098678();
        *unaff_r8 = puVar1;
      }
      *puVar4 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00431bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00431bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00431c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetBoxFanSpeed @ 00431c4c (size 192) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetBoxFanSpeed(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x431d08;
    FUN_00096bb8();
  }
  FUN_0008a4bc();
  FUN_001331ac();
  printerApi_service_k3c_wrapper___K3cwrapper__RunScript();
                    /* WARNING: Could not recover jumptable at 0x00431cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetAirFilterFanSpeed @ 00431d18 (size 192) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetAirFilterFanSpeed(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x431dd4;
    FUN_00096bb8();
  }
  FUN_0008a4bc();
  FUN_001331ac();
  printerApi_service_k3c_wrapper___K3cwrapper__RunScript();
                    /* WARNING: Could not recover jumptable at 0x00431dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishFilamentFeed @ 00431de4 (size 348) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishFilamentFeed(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  int local_38;
  int local_28;
  undefined *local_20;
  undefined4 local_1c;
  int local_18;
  int local_8;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = local_38;
  uVar1 = 0;
  if (*(int *)PTR_DAT_00431f48 != 0) {
    uVar1 = FUN_00022914();
  }
  FUN_00098e0c(uVar1,&stack0x00000008,local_4);
  FUN_00098a20(0,&local_20);
  local_20 = PTR_DAT_00431f4c;
  local_1c = 0x15;
  FUN_0001eed8();
  local_8 = local_38;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_00431f48 != 0) {
    FUN_00098698();
    *unaff_r8 = local_4;
    unaff_r8[1] = extraout_r3;
    unaff_r8[2] = *(int *)(local_8 + 0x5c);
    local_38 = extraout_r3;
  }
  *(int *)(local_38 + 8) = local_4;
  *(int *)(local_8 + 0x5c) = local_38;
  local_18 = local_8;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_28 == 0) {
    printerApi_service_k3c_Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishFilamentUnwind @ 00431f5c (size 348) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishFilamentUnwind(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  int local_38;
  int local_28;
  undefined *local_20;
  undefined4 local_1c;
  int local_18;
  int local_8;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = local_38;
  uVar1 = 0;
  if (*(int *)PTR_DAT_004320c0 != 0) {
    uVar1 = FUN_00022914();
  }
  FUN_00098e0c(uVar1,&stack0x00000008,local_4);
  FUN_00098a20(0,&local_20);
  local_20 = PTR_DAT_004320c4;
  local_1c = 0x15;
  FUN_0001eed8();
  local_8 = local_38;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_004320c0 != 0) {
    FUN_00098698();
    *unaff_r8 = local_4;
    unaff_r8[1] = extraout_r3;
    unaff_r8[2] = *(int *)(local_8 + 0x5c);
    local_38 = extraout_r3;
  }
  *(int *)(local_38 + 0xc) = local_4;
  *(int *)(local_8 + 0x5c) = local_38;
  local_18 = local_8;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_28 == 0) {
    printerApi_service_k3c_Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishFilamentInfoUpdate @ 004320d4 (size 348) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishFilamentInfoUpdate(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  int local_38;
  int local_28;
  undefined *local_20;
  undefined4 local_1c;
  int local_18;
  int local_8;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = local_38;
  uVar1 = 0;
  if (*(int *)PTR_DAT_00432238 != 0) {
    uVar1 = FUN_00022914();
  }
  FUN_00098e14(uVar1,&stack0x00000008,local_4);
  FUN_00098a20(0,&local_20);
  local_20 = PTR_DAT_0043223c;
  local_1c = 0x15;
  FUN_0001eed8();
  local_8 = local_38;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_00432238 != 0) {
    FUN_00098698();
    *unaff_r8 = local_4;
    unaff_r8[1] = extraout_r3;
    unaff_r8[2] = *(int *)(local_8 + 0x5c);
    local_38 = extraout_r3;
  }
  *(int *)(local_38 + 0x10) = local_4;
  *(int *)(local_8 + 0x5c) = local_38;
  local_18 = local_8;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_28 == 0) {
    printerApi_service_k3c_Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).StartDrying @ 0043224c (size 1020) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__StartDrying(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 *local_88;
  int local_7c;
  undefined *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  int local_1c;
  int local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  int local_4;
  
  while (iVar1 = DAT_0043264c, &local_1c <= *(int **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_18 = iVar1;
  FUN_0001cec0();
  iVar1 = local_18;
  local_1c = 1;
  FUN_0008e7bc();
  *local_88 = PTR_DAT_00432658;
  puVar5 = local_88;
  if (*(int *)PTR_DAT_0043265c != 0) {
    puVar5 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = puVar5[1];
  }
  puVar5[1] = local_1c;
  FUN_0001cec0();
  iVar3 = local_18;
  local_1c = iVar1;
  FUN_0008e7bc();
  *local_88 = PTR_DAT_00432658;
  puVar5 = local_88;
  if (*(int *)PTR_DAT_0043265c != 0) {
    puVar5 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = puVar5[1];
  }
  puVar5[1] = local_1c;
  FUN_0001cec0();
  iVar1 = local_18;
  local_1c = iVar3;
  FUN_0008e7bc();
  *local_88 = PTR_DAT_00432658;
  puVar5 = local_88;
  if (*(int *)PTR_DAT_0043265c != 0) {
    puVar5 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = puVar5[1];
  }
  puVar5[1] = local_1c;
  FUN_0001cec0();
  iVar3 = local_18;
  local_1c = iVar1;
  FUN_0008e7bc();
  *local_88 = PTR_DAT_00432658;
  if (*(int *)PTR_DAT_0043265c != 0) {
    local_88 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = local_88[1];
  }
  local_88[1] = local_1c;
  FUN_00098a20(0,&local_64);
  local_64 = PTR_DAT_0043266c;
  local_60 = 0x19;
  local_5c = DAT_00432650;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = iVar3;
  FUN_0001cd7c();
  iVar1 = local_4;
  puVar2 = PTR_DAT_00432678;
  printerApi_service_k3c___K3c__CallContext();
  if (local_7c != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar4 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar4,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_0043267c;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_0043267c;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar5 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = iVar1;
  if (*(int *)PTR_DAT_0043265c != 0) {
    puVar5 = (undefined4 *)FUN_00098678();
    *unaff_r8 = (int)puVar2;
  }
  *puVar5 = puVar2;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetDryingParam @ 0043268c (size 904) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetDryingParam(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 *local_88;
  int local_7c;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined *local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  undefined *local_4;
  
  while (puVar1 = PTR_DAT_00432a18, &local_1c <= *(undefined ***)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_18 = puVar1;
  FUN_0001cec0();
  puVar1 = local_18;
  local_1c = (undefined *)0x1;
  FUN_0008e7bc();
  *local_88 = PTR_DAT_00432a24;
  puVar4 = local_88;
  if (*(int *)PTR_DAT_00432a28 != 0) {
    puVar4 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = puVar4[1];
  }
  puVar4[1] = local_1c;
  FUN_0001cec0();
  puVar2 = local_18;
  local_1c = puVar1;
  FUN_0008e7bc();
  *local_88 = PTR_DAT_00432a24;
  puVar4 = local_88;
  if (*(int *)PTR_DAT_00432a28 != 0) {
    puVar4 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = puVar4[1];
  }
  puVar4[1] = local_1c;
  FUN_0001cec0();
  puVar1 = local_18;
  local_1c = puVar2;
  FUN_0008e7bc();
  *local_88 = PTR_DAT_00432a24;
  if (*(int *)PTR_DAT_00432a28 != 0) {
    local_88 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = local_88[1];
  }
  local_88[1] = local_1c;
  FUN_00098a20(0,&local_64);
  local_64 = PTR_DAT_00432a34;
  local_60 = 0x12;
  local_5c = PTR_DAT_00432a1c;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = puVar1;
  FUN_0001cd7c();
  puVar2 = local_4;
  puVar1 = PTR_DAT_00432a40;
  printerApi_service_k3c___K3c__CallContext();
  if (local_7c != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar3 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar3,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_00432a44;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_00432a44;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar4 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = puVar2;
  if (*(int *)PTR_DAT_00432a28 != 0) {
    puVar4 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar1;
  }
  *puVar4 = puVar1;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).StopDrying @ 00432a54 (size 672) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__StopDrying(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 *local_88;
  int local_7c;
  undefined *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  int local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  int local_4;
  
  while (iVar1 = DAT_00432cf8, &local_1c <= *(undefined4 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_18 = iVar1;
  FUN_0001cec0();
  iVar1 = local_18;
  local_1c = 1;
  FUN_0008e7bc();
  *local_88 = PTR_DAT_00432d04;
  if (*(int *)PTR_DAT_00432d08 != 0) {
    local_88 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = local_88[1];
  }
  local_88[1] = local_1c;
  FUN_00098a20(0,&local_64);
  local_64 = PTR_DAT_00432d0c;
  local_60 = 0x18;
  local_5c = DAT_00432cfc;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = iVar1;
  FUN_0001cd7c();
  iVar1 = local_4;
  puVar2 = PTR_DAT_00432d18;
  printerApi_service_k3c___K3c__CallContext();
  if (local_7c != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar3 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar3,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_00432d1c;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_00432d1c;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar4 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = iVar1;
  if (*(int *)PTR_DAT_00432d08 != 0) {
    puVar4 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar2;
  }
  *puVar4 = puVar2;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).FeedFilament @ 00432d2c (size 788) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__FeedFilament(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  int local_7c;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined **local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  undefined *local_4;
  
  while (puVar1 = PTR_DAT_00433044, &local_1c <= *(undefined ****)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_18 = puVar1;
  FUN_00098a28(0,&local_14);
  FUN_0001cec0();
  local_14 = PTR_DAT_00433048;
  local_10 = 1;
  FUN_0001cec0();
  local_c = PTR_DAT_00433048;
  local_8 = 1;
  FUN_001331ac();
  FUN_0008a578();
  puVar1 = local_18;
  local_1c = &local_14;
  FUN_0008e7bc();
  iVar3 = 2;
  puRam00000002 = PTR_SUB_00433058;
  if (*(int *)PTR_DAT_0043305c != 0) {
    iVar3 = FUN_00098688();
    *unaff_r8 = (int)local_1c;
    unaff_r8[1] = *(int *)(iVar3 + 4);
  }
  *(undefined ***)(iVar3 + 4) = local_1c;
  FUN_00098a20(0,&local_64);
  local_64 = PTR_DAT_00433060;
  local_60 = 0xc;
  local_5c = PTR_DAT_00433050;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = puVar1;
  FUN_0001cd7c();
  puVar2 = local_4;
  puVar1 = PTR_DAT_0043306c;
  printerApi_service_k3c___K3c__CallContext();
  if (local_7c != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar4 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar4,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_00433058;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_00433058;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar5 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = puVar2;
  if (*(int *)PTR_DAT_0043305c != 0) {
    puVar5 = (undefined4 *)FUN_00098678();
    *unaff_r8 = (int)puVar1;
  }
  *puVar5 = puVar1;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).UnwindFilament @ 0043307c (size 788) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__UnwindFilament(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  int local_7c;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined **local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  undefined *local_4;
  
  while (puVar1 = PTR_DAT_00433394, &local_1c <= *(undefined ****)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_18 = puVar1;
  FUN_00098a28(0,&local_14);
  FUN_0001cec0();
  local_14 = PTR_DAT_00433398;
  local_10 = 1;
  FUN_0001cec0();
  local_c = PTR_DAT_00433398;
  local_8 = 1;
  FUN_001331ac();
  FUN_0008a578();
  puVar1 = local_18;
  local_1c = &local_14;
  FUN_0008e7bc();
  iVar3 = 2;
  puRam00000002 = PTR_SUB_004333a8;
  if (*(int *)PTR_DAT_004333ac != 0) {
    iVar3 = FUN_00098688();
    *unaff_r8 = (int)local_1c;
    unaff_r8[1] = *(int *)(iVar3 + 4);
  }
  *(undefined ***)(iVar3 + 4) = local_1c;
  FUN_00098a20(0,&local_64);
  local_64 = PTR_DAT_004333b0;
  local_60 = 0xc;
  local_5c = PTR_DAT_004333a0;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = puVar1;
  FUN_0001cd7c();
  puVar2 = local_4;
  puVar1 = PTR_DAT_004333bc;
  printerApi_service_k3c___K3c__CallContext();
  if (local_7c != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar4 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar4,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_004333a8;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_004333a8;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar5 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = puVar2;
  if (*(int *)PTR_DAT_004333ac != 0) {
    puVar5 = (undefined4 *)FUN_00098678();
    *unaff_r8 = (int)puVar1;
  }
  *puVar5 = puVar1;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetAutoRefill @ 004333cc (size 272) */

void printerApi_service_k3c_wrapper___K3cwrapper__SetAutoRefill(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  char in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 *puStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4334d8;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  FUN_0008e7bc();
  puVar1 = PTR_DAT_004334e8;
  *puStack_c = PTR_DAT_004334e8;
  puVar2 = puStack_c;
  if (*(int *)PTR_DAT_004334ec != 0) {
    puVar2 = (undefined4 *)FUN_00098678(puStack_c,puVar1,puStack_c[1]);
    *unaff_r8 = extraout_r2;
  }
  puVar2[1] = PTR_DAT_004334f0;
  if (in_stack_00000010 != '\0') {
    FUN_0008e7bc();
    *puStack_c = PTR_DAT_004334e8;
    if (*(int *)PTR_DAT_004334ec != 0) {
      uVar3 = FUN_00098678(puStack_c,puStack_c[1]);
      puStack_c = (undefined4 *)uVar3;
      *unaff_r8 = (int)((ulonglong)uVar3 >> 0x20);
    }
    puStack_c[1] = PTR_SUB_004334f4;
  }
  printerApi_service_k3c_wrapper___K3cwrapper__SetConfig();
                    /* WARNING: Could not recover jumptable at 0x004334cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetConfig @ 004334f8 (size 536) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetConfig(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *puVar4;
  undefined4 local_7c;
  undefined4 local_78;
  int local_6c;
  undefined *local_5c;
  undefined4 local_58;
  undefined *local_54;
  undefined4 local_50;
  undefined1 local_44 [24];
  undefined1 auStack_2c [24];
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  int local_4;
  
  while (&local_c <= *(undefined ***)(unaff_r10 + 8)) {
    unaff_lr = 0x43370c;
    FUN_00096bb8();
  }
  puVar4 = PTR_DAT_00433714;
  internal_runtime_atomic_Xadd64();
  FUN_00098a20(0,&local_5c,local_78,local_7c,unaff_lr,puVar4);
  local_5c = PTR_DAT_00433718;
  local_58 = 0x17;
  local_54 = PTR_DAT_0043371c;
  local_50 = in_stack_00000010;
  FUN_0001eed8();
  local_4 = 1;
  FUN_0001cd7c();
  iVar1 = local_4;
  puVar4 = PTR_DAT_00433728;
  printerApi_service_k3c___K3c__CallContext();
  if (local_6c != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar2 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_2c);
  FUN_00098e0c(uVar2,auStack_2c,local_44);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_0043372c;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_0043372c;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar3 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = iVar1;
  if (*(int *)PTR_DAT_00433738 != 0) {
    puVar3 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar4;
  }
  *puVar3 = puVar4;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).QueryFilamentHubObjectsStatus @ 00433740 (size 172) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__QueryFilamentHubObjectsStatus(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  int iStack_14;
  int iStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x4337e8;
    FUN_00096bb8();
  }
  FUN_00098a04(0,&stack0x00000010);
  printerApi_service_k3c_wrapper___K3cwrapper__QueryObjectsStatusWithContext();
  if (iStack_10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004337b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_00098dd4(iStack_14,iStack_14 + 500,&stack0x00000010);
  in_stack_00000044 = 0;
  in_stack_00000048 = 0;
                    /* WARNING: Could not recover jumptable at 0x004337dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetSlotInfo @ 004337f4 (size 556) */

void printerApi_service_k3c_wrapper___K3cwrapper__SetSlotInfo(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 local_7c;
  undefined4 local_78;
  int local_6c;
  undefined *local_5c;
  undefined4 local_58;
  undefined *local_54;
  undefined4 local_50;
  undefined1 local_44 [24];
  undefined1 auStack_2c [24];
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  undefined1 *local_4;
  
  while (&local_c <= *(undefined ***)(unaff_r10 + 8)) {
    unaff_lr = 0x433a1c;
    FUN_00096bb8();
  }
  uVar2 = 1;
  puVar1 = PTR_DAT_00433a24;
  internal_runtime_atomic_Xadd64();
  FUN_00098a20(0,&local_5c,local_78,local_7c,unaff_lr,puVar1,uVar2);
  local_5c = PTR_DAT_00433a28;
  local_58 = 0x1e;
  puVar3 = &stack0x00000010;
  FUN_0001cd7c();
  local_54 = PTR_DAT_00433a2c;
  local_50 = 0;
  FUN_0001eed8();
  local_4 = puVar3;
  FUN_0001cd7c();
  puVar3 = local_4;
  puVar1 = PTR_DAT_00433a38;
  printerApi_service_k3c___K3c__CallContext();
  if (local_6c != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar2 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_2c);
  FUN_00098e0c(uVar2,auStack_2c,local_44);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_00433a3c;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_00433a3c;
  local_8 = in_stack_0000000c;
  puVar4 = (undefined4 *)&DAT_00000007;
  FUN_001331ac();
  FUN_0001eed8();
  puVar4[1] = puVar3;
  if (*(int *)PTR_DAT_00433a48 != 0) {
    puVar4 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar1;
  }
  *puVar4 = puVar1;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).QuerySlotFilamentInfo @ 00433a50 (size 860) */

void printerApi_service_k3c_wrapper___K3cwrapper__QuerySlotFilamentInfo(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *extraout_r2;
  undefined4 uVar3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined4 *in_stack_ffffff70;
  undefined4 uVar10;
  int local_84;
  undefined4 local_80;
  undefined *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined1 local_50 [24];
  undefined1 auStack_38 [20];
  undefined1 auStack_24 [4];
  undefined4 *local_20;
  int local_1c;
  int local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  int local_4;
  
  while (auStack_24 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x433da8;
    FUN_00096bb8();
  }
  FUN_000989f4(0,&stack0x00000018);
  iVar6 = 1;
  iVar4 = DAT_00433db0;
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_18 = iVar4;
  FUN_0001cec0();
  iVar4 = local_18;
  local_1c = iVar6;
  FUN_0008e7bc();
  *in_stack_ffffff70 = PTR_DAT_00433dbc;
  puVar2 = in_stack_ffffff70;
  if (*(int *)PTR_DAT_00433dc0 != 0) {
    FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = extraout_r2[1];
    in_stack_ffffff70 = extraout_r2;
  }
  in_stack_ffffff70[1] = local_1c;
  FUN_0001cec0();
  iVar6 = local_18;
  puVar5 = PTR_s_indexspeedGroupfoundtls__Earlyli_00773bd2_0x144_00433dc4;
  local_1c = iVar4;
  FUN_0008e7bc();
  *puVar2 = PTR_DAT_00433dbc;
  if (*(int *)PTR_DAT_00433dc0 != 0) {
    puVar2 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = local_1c;
  FUN_00098a20(0,&local_6c);
  local_6c = PTR_DAT_00433dc8;
  local_68 = 0x1a;
  local_64 = DAT_00433db4;
  local_60 = local_18;
  FUN_0001eed8();
  local_4 = iVar6;
  FUN_0001cd7c();
  iVar4 = local_4;
  puVar1 = PTR_DAT_00433dd4;
  uVar3 = *in_stack_00000004;
  puVar9 = PTR_DAT_00433dd0;
  printerApi_service_k3c___K3c__CallContext();
  if (local_84 != 0) {
    FUN_00098db4(local_80,local_4 + 0x10,&stack0x00000018,local_84,unaff_lr,uVar3,in_stack_00000008,
                 in_stack_0000000c,puVar9,puVar5);
    return;
  }
  if (*(int *)(local_4 + 0x54) == 0) {
    FUN_00098db4(local_4,local_4 + 0x10,&stack0x00000018);
    return;
  }
  uVar3 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x54),auStack_38);
  FUN_00098e0c(uVar3,auStack_38,local_50);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_00433dd8;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_00433dd8;
  puVar7 = (undefined4 *)&DAT_00000007;
  ppuVar8 = &local_14;
  uVar3 = 2;
  uVar10 = 2;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  puVar5 = PTR_DAT_00433de0;
  FUN_0001eed8();
  puVar7[1] = iVar4;
  puVar2 = puVar7;
  if (*(int *)PTR_DAT_00433dc0 != 0) {
    puVar7 = (undefined4 *)FUN_00098678();
    *unaff_r8 = (int)puVar1;
  }
  *puVar7 = puVar1;
  local_20 = puVar7;
  FUN_00098db4(puVar7,local_4 + 0x10,&stack0x00000018,local_4,unaff_lr,puVar5,puVar2,ppuVar8,uVar3,
               uVar10);
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishFilamentHubFeed @ 00433de8 (size 348) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishFilamentHubFeed(void)

{
  undefined4 uVar1;
  int *extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  int *local_38;
  int local_28;
  undefined *local_20;
  undefined4 local_1c;
  int local_18;
  int *local_8;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = (int)local_38;
  uVar1 = 0;
  if (*(int *)PTR_DAT_00433f4c != 0) {
    uVar1 = FUN_00022914();
  }
  FUN_00098dec(uVar1,&stack0x00000008,local_4);
  FUN_00098a20(0,&local_20);
  local_20 = PTR_DAT_00433f50;
  local_1c = 0x15;
  FUN_0001eed8();
  local_8 = local_38;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_00433f4c != 0) {
    FUN_00098698();
    *unaff_r8 = local_4;
    unaff_r8[1] = (int)extraout_r3;
    unaff_r8[2] = *(int *)((int)local_8 + 0x5c);
    local_38 = extraout_r3;
  }
  *local_38 = local_4;
  *(int **)((int)local_8 + 0x5c) = local_38;
  local_18 = (int)local_8;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_28 == 0) {
    printerApi_service_k3c_Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishFilamentHubUnwind @ 00433f60 (size 348) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishFilamentHubUnwind(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  int local_38;
  int local_28;
  undefined *local_20;
  undefined4 local_1c;
  int local_18;
  int local_8;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = local_38;
  uVar1 = 0;
  if (*(int *)PTR_DAT_004340c4 != 0) {
    uVar1 = FUN_00022914();
  }
  FUN_00098dec(uVar1,&stack0x00000008,local_4);
  FUN_00098a20(0,&local_20);
  local_20 = PTR_DAT_004340c8;
  local_1c = 0x15;
  FUN_0001eed8();
  local_8 = local_38;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_004340c4 != 0) {
    FUN_00098698();
    *unaff_r8 = local_4;
    unaff_r8[1] = extraout_r3;
    unaff_r8[2] = *(int *)(local_8 + 0x5c);
    local_38 = extraout_r3;
  }
  *(int *)(local_38 + 4) = local_4;
  *(int *)(local_8 + 0x5c) = local_38;
  local_18 = local_8;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_28 == 0) {
    printerApi_service_k3c_Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).QueryFilamenthubVersion @ 004340d8 (size 776) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__QueryFilamenthubVersion(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 *local_88;
  int local_7c;
  undefined *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  int local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  int local_4;
  
  while (iVar1 = DAT_004343e4, &local_1c <= *(undefined4 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_18 = iVar1;
  FUN_0001cec0();
  iVar1 = local_18;
  local_1c = 1;
  FUN_0008e7bc();
  *local_88 = PTR_DAT_004343f0;
  if (*(int *)PTR_DAT_004343f4 != 0) {
    local_88 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = local_88[1];
  }
  local_88[1] = local_1c;
  FUN_00098a20(0,&local_64);
  local_64 = PTR_DAT_004343f8;
  local_60 = 0x1a;
  local_5c = DAT_004343e8;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = iVar1;
  FUN_0001cd7c();
  iVar1 = local_4;
  puVar2 = PTR_DAT_00434404;
  printerApi_service_k3c___K3c__CallContext();
  if (local_7c != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x18) == 0) {
    FUN_00148180();
    FUN_00148b2c();
    return;
  }
  uVar3 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x18),auStack_34);
  FUN_00098e0c(uVar3,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_00434408;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_00434408;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar4 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = iVar1;
  if (*(int *)PTR_DAT_004343f4 != 0) {
    puVar4 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar2;
  }
  *puVar4 = puVar2;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).Recognition @ 0043441c (size 788) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__Recognition(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_0000000c;
  undefined4 *puStack_88;
  int iStack_7c;
  undefined *puStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [24];
  int iStack_1c;
  int iStack_18;
  undefined *puStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  while (iVar1 = _UNK_00434734, &iStack_1c <= *(int **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43472c;
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  iStack_18 = iVar1;
  FUN_0001cec0();
  iVar1 = iStack_18;
  iStack_1c = 1;
  FUN_0008e7bc();
  *puStack_88 = PTR_DAT_00434740;
  puVar5 = puStack_88;
  if (*(int *)PTR_DAT_00434744 != 0) {
    puVar5 = (undefined4 *)FUN_00098688();
    *unaff_r8 = iStack_1c;
    unaff_r8[1] = puVar5[1];
  }
  puVar5[1] = iStack_1c;
  FUN_0001cec0();
  iVar3 = iStack_18;
  iStack_1c = iVar1;
  FUN_0008e7bc();
  *puStack_88 = PTR_DAT_00434740;
  if (*(int *)PTR_DAT_00434744 != 0) {
    puStack_88 = (undefined4 *)FUN_00098688();
    *unaff_r8 = iStack_1c;
    unaff_r8[1] = puStack_88[1];
  }
  puStack_88[1] = iStack_1c;
  FUN_00098a20(0,&puStack_64);
  puStack_64 = PTR_DAT_0043474c;
  uStack_60 = 0x21;
  uStack_5c = _UNK_00434738;
  iStack_58 = iStack_18;
  FUN_0001eed8();
  iStack_4 = iVar3;
  FUN_0001cd7c();
  iVar1 = iStack_4;
  puVar2 = PTR_DAT_00434758;
  printerApi_service_k3c___K3c__CallContext();
  if (iStack_7c != 0) {
                    /* WARNING: Could not recover jumptable at 0x00434720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (*(int *)(iStack_4 + 0x14) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00434710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar4 = FUN_00098e0c(iStack_4,*(int *)(iStack_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar4,auStack_34,auStack_4c);
  FUN_00098a28(0,&puStack_14);
  FUN_0008a578();
  puStack_14 = PTR_SUB_0043475c;
  uStack_10 = in_stack_0000000c;
  FUN_0008a578();
  puStack_c = PTR_SUB_0043475c;
  uStack_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar5 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = iVar1;
  if (*(int *)PTR_DAT_00434744 != 0) {
    puVar5 = (undefined4 *)FUN_00098678();
    *unaff_r8 = (int)puVar2;
  }
  *puVar5 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x004346fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).UpgradeFilamenthub @ 0043476c (size 796) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__UpgradeFilamenthub(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  int local_7c;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined **local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  undefined *local_4;
  
  while (puVar1 = PTR_DAT_00434a8c, &local_1c <= *(undefined ****)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_18 = puVar1;
  FUN_00098a28(0,&local_14);
  FUN_0001cec0();
  local_14 = PTR_DAT_00434a90;
  local_10 = 1;
  FUN_0008a578();
  local_c = PTR_SUB_00434a94;
  local_8 = 0;
  FUN_001331ac();
  FUN_0008a578();
  puVar1 = local_18;
  local_1c = &local_14;
  FUN_0008e7bc();
  iVar3 = 2;
  puRam00000002 = PTR_SUB_00434a94;
  if (*(int *)PTR_DAT_00434aa4 != 0) {
    iVar3 = FUN_00098688();
    *unaff_r8 = (int)local_1c;
    unaff_r8[1] = *(int *)(iVar3 + 4);
  }
  *(undefined ***)(iVar3 + 4) = local_1c;
  FUN_00098a20(0,&local_64);
  local_64 = PTR_DAT_00434aa8;
  local_60 = 0xc;
  local_5c = PTR_DAT_00434a9c;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = puVar1;
  FUN_0001cd7c();
  puVar2 = local_4;
  puVar1 = PTR_DAT_00434ab4;
  printerApi_service_k3c___K3c__CallContext();
  if (local_7c != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar4 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar4,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_00434a94;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_00434a94;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar5 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = puVar2;
  if (*(int *)PTR_DAT_00434aa4 != 0) {
    puVar5 = (undefined4 *)FUN_00098678();
    *unaff_r8 = (int)puVar1;
  }
  *puVar5 = puVar1;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).ExtSpoolFilamentDetected @ 00434ac4 (size 516) */

void printerApi_service_k3c_wrapper___K3cwrapper__ExtSpoolFilamentDetected(void)

{
  char *pcVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined *in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *local_24;
  undefined4 *local_1c;
  int local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  in_stack_00000008 = 0;
  in_stack_0000000c = (undefined *)0x0;
  in_stack_00000010 = 0;
  FUN_00155144();
  printerApi_service_k3c_wrapper___K3cwrapper__QueryObjectsStatusWithContext();
  if (local_18 == 0) {
    if (local_1c[0x80] != 1) {
      FUN_0001eed8();
      local_24[1] = 0x12;
      *local_24 = PTR_DAT_00434ce8;
      in_stack_00000008 = 0xffffffff;
      in_stack_0000000c = PTR_DAT_00434cec;
      (*(code *)*local_1c)();
      return;
    }
    if (local_1c[0x82] == 6) {
      pcVar1 = (char *)local_1c[0x81];
      if ((((*pcVar1 == 'r') && (pcVar1[1] == 'u')) && (pcVar1[2] == 'n')) &&
         (((pcVar1[3] == 'o' && (pcVar1[4] == 'u')) && (pcVar1[5] == 't')))) {
        in_stack_00000008 = 0;
        in_stack_0000000c = (undefined *)0x0;
        in_stack_00000010 = 0;
        (*(code *)*local_1c)();
        return;
      }
    }
    in_stack_00000008 = 1;
    in_stack_0000000c = (undefined *)0x0;
    in_stack_00000010 = 0;
    (*(code *)*local_1c)();
    return;
  }
  in_stack_00000008 = 0xffffffff;
  (*(code *)*local_1c)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).GetFilamentHubCurrentFilament @ 00434cf0 (size 312) */

void printerApi_service_k3c_wrapper___K3cwrapper__GetFilamentHubCurrentFilament(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 *local_1c;
  int local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  in_stack_00000008 = 0;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  FUN_00155144();
  printerApi_service_k3c_wrapper___K3cwrapper__QueryObjectsStatusWithContext();
  if (local_18 != 0) {
    in_stack_00000008 = 0;
    in_stack_0000000c = 0;
    (*(code *)*local_1c)();
    return;
  }
  in_stack_00000008 = local_1c[0x7d];
  in_stack_0000000c = local_1c[0x7e];
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  (*(code *)*local_1c)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).GetFilamenthubConfig @ 00434e44 (size 784) */

void printerApi_service_k3c_wrapper___K3cwrapper__GetFilamenthubConfig(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 *in_stack_00000004;
  undefined *in_stack_0000001c;
  undefined4 *in_stack_00000020;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined4 in_stack_ffffff68;
  undefined4 local_94;
  undefined4 *local_90;
  int local_8c;
  undefined4 local_88;
  undefined *local_6c;
  undefined4 local_68;
  undefined *local_64;
  undefined4 local_5c;
  undefined4 local_54;
  undefined1 local_50 [24];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 *local_1c;
  undefined *local_18 [2];
  undefined *local_10;
  int local_8;
  undefined4 *local_4;
  
  while (auStack_2c <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x435158;
    FUN_00096bb8();
  }
  local_4 = (undefined4 *)0x0;
  FUN_00098a24(0,&stack0x00000008);
  in_stack_0000001c = (undefined *)0x0;
  in_stack_00000020 = (undefined4 *)0x0;
  uVar8 = 1;
  FUN_00155144();
  local_20 = local_94;
  local_4 = local_90;
  iVar3 = 1;
  uVar6 = 0;
  puVar1 = PTR_DAT_0043516c;
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  FUN_00098a20(0,&local_6c,puVar1);
  local_6c = PTR_DAT_00435170;
  local_68 = 0x17;
  local_64 = PTR_DAT_00435174;
  local_5c = uVar8;
  FUN_0001eed8();
  local_8 = iVar3;
  FUN_0001cd7c();
  iVar3 = local_8;
  puVar1 = PTR_DAT_00435180;
  uVar8 = *in_stack_00000004;
  puVar2 = PTR_DAT_0043517c;
  printerApi_service_k3c___K3c__CallContext();
  if (local_8c != 0) {
    local_54 = local_88;
    FUN_00098e14(local_88,local_8 + 0x10,&stack0x00000008,local_8c,unaff_lr,uVar8,in_stack_ffffff68,
                 local_20,puVar2,uVar6);
    in_stack_00000020 = (undefined4 *)local_54;
    (*(code *)*local_4)();
    return;
  }
  if (*(int *)(local_8 + 0x24) == 0) {
    FUN_00098e14(local_8,local_8 + 0x10,&stack0x00000008);
    in_stack_0000001c = (undefined *)0x0;
    in_stack_00000020 = (undefined4 *)0x0;
    (*(code *)*local_4)();
    return;
  }
  uVar8 = FUN_00098e0c(local_8,*(int *)(local_8 + 0x24),auStack_38);
  FUN_00098e0c(uVar8,auStack_38,local_50);
  FUN_00098a28(0,local_18);
  FUN_0008a578();
  local_18[0] = PTR_SUB_00435184;
  FUN_0008a578();
  local_10 = PTR_SUB_00435184;
  puVar4 = (undefined4 *)&DAT_00000007;
  ppuVar7 = local_18;
  uVar8 = 2;
  uVar6 = 2;
  FUN_001331ac();
  puVar2 = PTR_DAT_0043518c;
  FUN_0001eed8();
  puVar4[1] = iVar3;
  puVar5 = puVar4;
  if (*(int *)PTR_DAT_00435190 != 0) {
    puVar4 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar1;
  }
  *puVar4 = puVar1;
  local_1c = puVar4;
  FUN_00098e14(puVar4,local_8 + 0x10,&stack0x00000008,local_8,unaff_lr,puVar2,puVar5,ppuVar7,uVar8,
               uVar6);
  in_stack_0000001c = PTR_DAT_00435194;
  in_stack_00000020 = local_1c;
  (*(code *)*local_4)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).FirmwareOtaStart @ 00435198 (size 1060) */

/* WARNING: Removing unreachable block (ram,0x00435414) */

void printerApi_service_k3c_wrapper___K3cwrapper__FirmwareOtaStart(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 *in_stack_00000004;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 local_a4;
  undefined4 *local_a0;
  int local_9c;
  undefined4 local_98;
  undefined *local_78;
  undefined4 local_74;
  undefined *local_70;
  undefined *local_6c;
  undefined1 local_5c [24];
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [16];
  undefined4 local_2c;
  undefined **local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined *local_18;
  undefined4 local_14;
  undefined *local_10;
  undefined4 local_c;
  undefined *local_8;
  undefined4 *local_4;
  
  while (auStack_3c <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4355c0;
    FUN_00096bb8();
  }
  local_4 = (undefined4 *)0x0;
  uVar5 = 0;
  puVar3 = PTR_DAT_004355c8;
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_24 = puVar3;
  FUN_00098a28(0,&local_18);
  FUN_0008a578();
  local_18 = PTR_SUB_004355cc;
  local_14 = uVar5;
  FUN_0008a578();
  local_10 = PTR_SUB_004355cc;
  ppuVar6 = &local_18;
  puVar8 = (undefined4 *)0x2;
  local_c = uVar5;
  FUN_001331ac();
  FUN_0008a578();
  puVar3 = local_24;
  local_28 = ppuVar6;
  FUN_0008e7bc();
  *puVar8 = PTR_SUB_004355cc;
  puVar4 = puVar8;
  if (*(int *)PTR_DAT_004355dc != 0) {
    puVar8 = (undefined4 *)FUN_00098688();
    *unaff_r8 = (int)local_28;
    unaff_r8[1] = puVar8[1];
  }
  puVar8[1] = local_28;
  FUN_00098a20(0,&local_78);
  local_78 = PTR_DAT_004355e0;
  local_74 = 0xc;
  local_70 = PTR_DAT_004355d4;
  local_6c = local_24;
  FUN_0001eed8();
  uVar5 = DAT_004355f0;
  local_8 = puVar3;
  FUN_00155144();
  local_2c = local_a4;
  local_4 = local_a0;
  FUN_0001cd7c();
  puVar1 = local_8;
  puVar3 = PTR_DAT_004355f8;
  uVar2 = *in_stack_00000004;
  puVar7 = PTR_DAT_004355f4;
  printerApi_service_k3c___K3c__CallContext();
  if (local_9c != 0) {
    local_20 = *(undefined4 *)(local_9c + 4);
    printerApi_common_logger_Errorf();
    (*(code *)*local_4)();
    return;
  }
  if (*(int *)(local_8 + 0x10) != 0) {
    uVar5 = FUN_00098e0c(local_8,*(int *)(local_8 + 0x10),auStack_44,local_98,unaff_lr,uVar2,puVar4,
                         local_2c,puVar7,uVar5);
    FUN_00098e0c(uVar5,auStack_44,local_5c);
    FUN_00098a28(0,&local_18);
    FUN_0008a578();
    local_18 = PTR_SUB_004355cc;
    FUN_0008a578();
    local_10 = PTR_SUB_004355cc;
    puVar4 = (undefined4 *)&DAT_00000007;
    FUN_001331ac();
    FUN_0001eed8();
    puVar4[1] = puVar1;
    if (*(int *)PTR_DAT_004355dc != 0) {
      puVar4 = (undefined4 *)FUN_00098678();
      *unaff_r8 = (int)puVar3;
    }
    *puVar4 = puVar3;
    (*(code *)*local_4)();
    return;
  }
  (*(code *)*local_4)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetFlowCaliByEndpoint @ 0043560c (size 664) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetFlowCaliByEndpoint(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_ffffff70;
  undefined *puVar4;
  undefined4 local_8c;
  undefined4 *local_80;
  int local_74;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  undefined4 local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  int local_4;
  
  while (&local_14 <= *(undefined ***)(unaff_r10 + 8)) {
    unaff_lr = 0x4358a0;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  local_18 = in_stack_ffffff70;
  FUN_0001cec0();
  local_1c = local_8c;
  FUN_0008e7bc();
  *local_80 = PTR_DAT_004358b0;
  puVar3 = local_80;
  if (*(int *)PTR_DAT_004358b4 != 0) {
    puVar3 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = puVar3[1];
  }
  puVar3[1] = local_1c;
  puVar4 = PTR_DAT_004358b8;
  internal_runtime_atomic_Xadd64();
  FUN_00098a20(0,&local_64,local_80,1,unaff_lr,puVar4);
  local_64 = PTR_DAT_004358bc;
  local_60 = 0xe;
  local_5c = PTR_DAT_004358a8;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = 1;
  FUN_0001cd7c();
  iVar1 = local_4;
  puVar4 = PTR_DAT_004358c8;
  printerApi_service_k3c___K3c__CallContext();
  if (local_74 != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar2 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar2,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_004358cc;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_004358cc;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar3 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = iVar1;
  if (*(int *)PTR_DAT_004358b4 != 0) {
    puVar3 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar4;
  }
  *puVar3 = puVar4;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).Info @ 004358dc (size 620) */

void printerApi_service_k3c_wrapper___K3cwrapper__Info(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_r3;
  undefined4 uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined **ppuVar9;
  undefined4 in_stack_ffffff84;
  undefined4 in_stack_ffffff88;
  int local_6c;
  undefined4 local_68;
  undefined *local_5c;
  undefined4 local_58;
  undefined1 local_44 [24];
  undefined1 auStack_2c [24];
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  int local_4;
  
  while( true ) {
    if (*(undefined ***)(unaff_r10 + 8) < &local_c) break;
    unaff_lr = 0x435b44;
    FUN_00096bb8();
  }
  uVar1 = FUN_00098a0c(0,&stack0x00000010);
  iVar6 = 1;
  puVar4 = PTR_DAT_00435b4c;
  internal_runtime_atomic_Xadd64();
  FUN_00098a20(0,&local_5c,in_stack_ffffff84,in_stack_ffffff88,unaff_lr,puVar4);
  local_5c = PTR_DAT_00435b50;
  local_58 = 4;
  FUN_0001eed8();
  local_4 = iVar6;
  FUN_0001cd7c();
  iVar6 = local_4;
  puVar4 = PTR_DAT_00435b5c;
  uVar2 = *in_stack_00000004;
  puVar5 = PTR_DAT_00435b58;
  printerApi_service_k3c___K3c__CallContext();
  if (local_6c == 0) {
    if (*(int *)(local_4 + 0x3c) == 0) {
      uVar1 = *(undefined4 *)(local_4 + 0x20);
      *(undefined4 *)PTR_DAT_00435b60 = *(undefined4 *)(local_4 + 0x24);
      iVar6 = local_4;
      if (*(int *)PTR_DAT_00435b64 != 0) {
        iVar6 = FUN_00098688();
        *unaff_r8 = uVar1;
        unaff_r8[1] = *(undefined4 *)PTR_DAT_00435b68;
      }
      *(undefined4 *)PTR_DAT_00435b68 = uVar1;
      FUN_00098de4(iVar6,iVar6 + 0x10,&stack0x00000010);
      return;
    }
    uVar1 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x3c),auStack_2c);
    FUN_00098e0c(uVar1,auStack_2c,local_44);
    FUN_00098a28(0,&local_14);
    FUN_0008a578();
    local_14 = PTR_SUB_00435b6c;
    local_10 = in_stack_0000000c;
    FUN_0008a578();
    local_c = PTR_SUB_00435b6c;
    puVar7 = (undefined4 *)&DAT_00000007;
    ppuVar9 = &local_14;
    uVar1 = 2;
    uVar2 = 2;
    local_8 = in_stack_0000000c;
    FUN_001331ac();
    puVar5 = PTR_DAT_00435b74;
    FUN_0001eed8();
    puVar7[1] = iVar6;
    puVar8 = puVar7;
    if (*(int *)PTR_DAT_00435b64 == 0) {
      uVar3 = 0;
    }
    else {
      puVar7 = (undefined4 *)FUN_00098678();
      *unaff_r8 = puVar4;
      uVar3 = extraout_r3;
    }
    *puVar7 = puVar4;
    FUN_00098a0c(0,&stack0x00000010,puVar7,uVar3,unaff_lr,puVar5,puVar8,ppuVar9,uVar1,uVar2);
    return;
  }
  FUN_00098a0c(0,&stack0x00000010,local_6c,local_68,unaff_lr,uVar2,in_stack_00000008,
               in_stack_0000000c,puVar5,uVar1);
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).IsReady @ 00435b7c (size 84) */

void printerApi_service_k3c_wrapper___K3cwrapper__IsReady(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  int iStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x435bcc;
    FUN_00096bb8();
  }
  internal_runtime_atomic_Load();
  in_stack_00000008 = iStack_4 - 2U < 2;
                    /* WARNING: Could not recover jumptable at 0x00435bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).QueryFirmwareVersion @ 00435bd0 (size 772) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__QueryFirmwareVersion(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_8c;
  undefined4 *puStack_88;
  int iStack_84;
  undefined *puStack_64;
  undefined4 uStack_60;
  undefined *puStack_5c;
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [8];
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  int iStack_8;
  undefined4 *puStack_4;
  
  while (puVar1 = PTR_DAT_00435ee0, auStack_24 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x435ed8;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  FUN_00098a20(0,&puStack_64,puVar1);
  puStack_64 = PTR_DAT_00435ee4;
  uStack_60 = 0x11;
  puStack_5c = PTR_DAT_00435ee8;
  FUN_0001eed8();
  iStack_8 = 1;
  FUN_00155144();
  uStack_1c = uStack_8c;
  puStack_4 = puStack_88;
  FUN_0001cd7c();
  iVar2 = iStack_8;
  puVar1 = PTR_DAT_00435f00;
  printerApi_service_k3c___K3c__CallContext();
  if (iStack_84 != 0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00435ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (*(int *)(iStack_8 + 0x24) == 0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00435e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar3 = FUN_00098e0c(iStack_8,*(int *)(iStack_8 + 0x24),auStack_34);
  FUN_00098e0c(uVar3,auStack_34,auStack_4c);
  FUN_00098a28(0,&puStack_18);
  FUN_0008a578();
  puStack_18 = PTR_SUB_00435f04;
  uStack_14 = uStack_1c;
  FUN_0008a578();
  puStack_10 = PTR_SUB_00435f04;
  uStack_c = uStack_1c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar4 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = iVar2;
  if (*(int *)PTR_DAT_00435f10 != 0) {
    puVar4 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar1;
  }
  *puVar4 = puVar1;
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00435e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).QueryFirmwareUpgradeState @ 00435f18 (size 772) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__QueryFirmwareUpgradeState(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_8c;
  undefined4 *puStack_88;
  int iStack_84;
  undefined *puStack_64;
  undefined4 uStack_60;
  undefined *puStack_5c;
  undefined1 auStack_4c [24];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [8];
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  int iStack_8;
  undefined4 *puStack_4;
  
  while (puVar1 = PTR_DAT_00436228, auStack_24 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x436220;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  FUN_00098a20(0,&puStack_64,puVar1);
  puStack_64 = PTR_DAT_0043622c;
  uStack_60 = 0x11;
  puStack_5c = PTR_DAT_00436230;
  FUN_0001eed8();
  iStack_8 = 1;
  FUN_00155144();
  uStack_1c = uStack_8c;
  puStack_4 = puStack_88;
  FUN_0001cd7c();
  iVar2 = iStack_8;
  puVar1 = PTR_DAT_00436248;
  printerApi_service_k3c___K3c__CallContext();
  if (iStack_84 != 0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0043620c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (*(int *)(iStack_8 + 0x24) == 0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x004361d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar3 = FUN_00098e0c(iStack_8,*(int *)(iStack_8 + 0x24),auStack_34);
  FUN_00098e0c(uVar3,auStack_34,auStack_4c);
  FUN_00098a28(0,&puStack_18);
  FUN_0008a578();
  puStack_18 = PTR_SUB_0043624c;
  uStack_14 = uStack_1c;
  FUN_0008a578();
  puStack_10 = PTR_SUB_0043624c;
  uStack_c = uStack_1c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar4 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = iVar2;
  if (*(int *)PTR_DAT_00436258 != 0) {
    puVar4 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar1;
  }
  *puVar4 = puVar1;
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x004361a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).OtaStart @ 00436260 (size 1028) */

/* WARNING: Removing unreachable block (ram,0x004364bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__OtaStart(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_a4;
  undefined4 *puStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined *puStack_78;
  undefined4 uStack_74;
  undefined *puStack_70;
  undefined *puStack_6c;
  undefined1 auStack_5c [24];
  undefined1 auStack_44 [8];
  undefined1 auStack_3c [16];
  undefined4 uStack_2c;
  undefined **ppuStack_28;
  undefined *puStack_24;
  undefined *apuStack_20 [2];
  undefined *puStack_18;
  undefined *puStack_10;
  undefined4 uStack_c;
  undefined *puStack_8;
  undefined4 *puStack_4;
  
  while (auStack_3c <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x436668;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  uVar5 = 0;
  puVar3 = PTR_DAT_00436670;
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  puStack_10 = (undefined *)0x0;
  uStack_c = 0;
  puStack_24 = puVar3;
  FUN_0008a578();
  puStack_10 = PTR_SUB_00436674;
  ppuVar6 = &puStack_10;
  puVar8 = (undefined4 *)0x1;
  uStack_c = uVar5;
  FUN_001331ac();
  FUN_0008a578();
  puVar3 = puStack_24;
  ppuStack_28 = ppuVar6;
  FUN_0008e7bc();
  *puVar8 = PTR_SUB_00436674;
  puVar4 = puVar8;
  if (*(int *)PTR_DAT_00436684 != 0) {
    puVar8 = (undefined4 *)FUN_00098688();
    *unaff_r8 = (int)ppuStack_28;
    unaff_r8[1] = puVar8[1];
  }
  puVar8[1] = ppuStack_28;
  FUN_00098a20(0,&puStack_78);
  puStack_78 = PTR_DAT_00436688;
  uStack_74 = 0xc;
  puStack_70 = PTR_DAT_0043667c;
  puStack_6c = puStack_24;
  FUN_0001eed8();
  uVar5 = _UNK_00436698;
  puStack_8 = puVar3;
  FUN_00155144();
  uStack_2c = uStack_a4;
  puStack_4 = puStack_a0;
  FUN_0001cd7c();
  puVar1 = puStack_8;
  puVar3 = PTR_DAT_004366a0;
  uVar2 = *in_stack_00000004;
  puVar7 = PTR_DAT_0043669c;
  printerApi_service_k3c___K3c__CallContext();
  if (iStack_9c != 0) {
    puStack_10 = *(undefined **)(iStack_9c + 4);
    printerApi_common_logger_Errorf();
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00436518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (*(int *)(puStack_8 + 0x10) != 0) {
    uVar5 = FUN_00098e0c(puStack_8,*(int *)(puStack_8 + 0x10),auStack_44,uStack_98,
                         UNRECOVERED_JUMPTABLE,uVar2,puVar4,uStack_2c,puVar7,uVar5);
    FUN_00098e0c(uVar5,auStack_44,auStack_5c);
    FUN_00098a28(0,apuStack_20);
    FUN_0008a578();
    apuStack_20[0] = PTR_SUB_00436674;
    FUN_0008a578();
    puStack_18 = PTR_SUB_00436674;
    puVar4 = (undefined4 *)&DAT_00000007;
    FUN_001331ac();
    FUN_0001eed8();
    puVar4[1] = puVar1;
    if (*(int *)PTR_DAT_00436684 != 0) {
      puVar4 = (undefined4 *)FUN_00098678();
      *unaff_r8 = (int)puVar3;
    }
    *puVar4 = puVar3;
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0043662c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00436654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.FormatPrintFileScript @ 004366b4 (size 360) */

void printerApi_service_k3c_wrapper_FormatPrintFileScript(void)

{
  undefined *puVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined *local_18;
  undefined *local_14;
  undefined *local_10;
  undefined *local_c;
  undefined *local_8;
  undefined **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00098a28(0,&local_10);
  local_10 = PTR_SUB_00436820;
  local_c = PTR_DAT_00436824;
  FUN_0008a578();
  local_8 = PTR_SUB_00436820;
  printerApi_common_logger_RedDebug();
  puVar1 = PTR_DAT_00436828;
  FUN_00148928();
  local_18 = (undefined *)0x0;
  local_14 = (undefined *)0x0;
  FUN_0008a578();
  local_18 = PTR_SUB_00436820;
  local_14 = puVar1;
  FUN_001331ac();
  FUN_00098a28(0,&local_10);
  local_10 = PTR_SUB_00436820;
  local_c = PTR_DAT_00436830;
  FUN_0008a578();
  local_8 = PTR_SUB_00436820;
  local_4 = &local_18;
  printerApi_common_logger_Debug();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PrintFile @ 00436834 (size 700) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__PrintFile(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 *local_88;
  int local_7c;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  undefined *local_4;
  
  while (puVar1 = PTR_DAT_00436af4, &local_1c <= *(undefined4 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_18 = puVar1;
  printerApi_service_k3c_wrapper_FormatPrintFileScript();
  FUN_0008a578();
  puVar1 = local_18;
  local_1c = 0;
  FUN_0008e7bc();
  *local_88 = PTR_SUB_00436b00;
  if (*(int *)PTR_DAT_00436b04 != 0) {
    local_88 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = local_88[1];
  }
  local_88[1] = local_1c;
  FUN_00098a20(0,&local_64);
  local_64 = PTR_DAT_00436b08;
  local_60 = 0xc;
  local_5c = PTR_DAT_00436af8;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = puVar1;
  FUN_0001cd7c();
  puVar2 = local_4;
  puVar1 = PTR_DAT_00436b14;
  printerApi_service_k3c___K3c__CallContext();
  if (local_7c != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x24) == 0) {
    return;
  }
  uVar3 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x24),auStack_34);
  FUN_00098e0c(uVar3,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_00436b00;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_00436b00;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar4 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = puVar2;
  if (*(int *)PTR_DAT_00436b04 != 0) {
    puVar4 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar1;
  }
  *puVar4 = puVar1;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).QueryObjectsStatusWithContext @ 00436b24 (size 1004) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__QueryObjectsStatusWithContext(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined **in_stack_00000010;
  int in_stack_00000014;
  undefined *local_d8;
  undefined4 *local_d4;
  int local_c8;
  undefined *local_a8;
  undefined4 local_a4;
  undefined *local_a0;
  undefined *local_9c;
  undefined *local_98;
  undefined *local_90;
  undefined1 local_8c [24];
  undefined1 auStack_74 [12];
  undefined1 auStack_68 [12];
  undefined *local_5c;
  undefined **local_58;
  undefined *local_54;
  undefined4 local_50;
  undefined *local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  undefined *local_4;
  
  while (auStack_68 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (in_stack_00000014 == 0) {
    FUN_000989f8(0,&local_54);
    local_50 = 3;
    local_54 = PTR_DAT_00436f14;
    local_48 = 10;
    local_4c = PTR_s_heater_bedinitFailedpushFailedgc_007765bd_0x356_00436f18;
    in_stack_00000014 = 8;
    local_40 = 8;
    local_44 = PTR_s_extruderai_imagereceive_M109_S_f_00774847_0xace_00436f1c;
    local_38 = 0xc;
    local_3c = PTR_DAT_00436f20;
    local_30 = 10;
    local_34 = PTR_s_gcode_movedisconnectworkReportcl_007765bd_0x374_00436f24;
    local_28 = 0xb;
    local_2c = PTR_DAT_00436f28;
    local_20 = 0xe;
    local_24 = PTR_DAT_00436f2c;
    local_18 = 0xc;
    local_1c = PTR_DAT_00436f30;
    in_stack_00000010 = &local_54;
  }
  local_58 = in_stack_00000010;
  FUN_0008b708();
  local_90 = local_d8;
  for (iVar5 = 0; puVar1 = PTR_DAT_00436f3c, iVar5 < in_stack_00000014; iVar5 = iVar5 + 1) {
    local_d8 = local_58[iVar5 * 2 + 1];
    FUN_0008e7bc();
    *local_d4 = 0;
    puVar3 = local_d4;
    if (*(int *)PTR_DAT_00436f38 != 0) {
      puVar3 = (undefined4 *)FUN_00098678(local_d4,0,local_d4[1]);
      *unaff_r8 = extraout_r2;
    }
    puVar3[1] = 0;
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_5c = puVar1;
  FUN_0008e7bc();
  *local_d4 = PTR_DAT_00436f34;
  if (*(int *)PTR_DAT_00436f38 != 0) {
    local_d4 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_90;
    unaff_r8[1] = local_d4[1];
  }
  local_d4[1] = local_90;
  FUN_00098a20(0,&local_a8);
  local_a8 = PTR_DAT_00436f48;
  local_a4 = 0xd;
  local_98 = local_d8;
  local_a0 = PTR_DAT_00436f40;
  local_9c = local_5c;
  FUN_0001eed8();
  local_4 = puVar1;
  FUN_0001cd7c();
  puVar2 = local_4;
  puVar1 = PTR_DAT_00436f54;
  printerApi_service_k3c___K3c__CallContext();
  if (local_c8 != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x2e4) == 0) {
    return;
  }
  uVar4 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x2e4),auStack_74);
  FUN_00098e0c(uVar4,auStack_74,local_8c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_00436f58;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_00436f58;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar3 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = puVar2;
  if (*(int *)PTR_DAT_00436f38 != 0) {
    puVar3 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar1;
  }
  *puVar3 = puVar1;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).QueryObjectsStatus @ 00436f68 (size 108) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__QueryObjectsStatus(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x436fd0;
    FUN_00096bb8();
  }
  printerApi_service_k3c_wrapper___K3cwrapper__QueryObjectsStatusWithContext();
                    /* WARNING: Could not recover jumptable at 0x00436fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).Subscribe @ 00436fe0 (size 64) */

void printerApi_service_k3c_wrapper___K3cwrapper__Subscribe(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43701c;
    FUN_00096bb8();
  }
  printerApi_service_k3c___K3c__Subscribe();
                    /* WARNING: Could not recover jumptable at 0x00437010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).UnSubscribe @ 00437020 (size 64) */

void printerApi_service_k3c_wrapper___K3cwrapper__UnSubscribe(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43705c;
    FUN_00096bb8();
  }
  printerApi_service_k3c___K3c__UnSubscribe();
                    /* WARNING: Could not recover jumptable at 0x00437050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).RunScript @ 00437060 (size 512) */

void printerApi_service_k3c_wrapper___K3cwrapper__RunScript(void)

{
  undefined *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 *local_4c;
  undefined4 *local_40;
  int local_34;
  undefined *local_24;
  undefined4 local_20;
  undefined *local_1c;
  undefined *local_18;
  undefined4 local_c;
  undefined *local_8;
  undefined *local_4;
  
  while (puVar1 = PTR_DAT_00437264, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (in_stack_00000014 == 0) {
    FUN_0001eed8();
    local_4c[1] = 0xc;
    *local_4c = PTR_DAT_00437290;
    return;
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_8 = puVar1;
  FUN_0008a578();
  puVar1 = local_8;
  local_c = 0;
  FUN_0008e7bc();
  *local_40 = PTR_SUB_00437270;
  if (*(int *)PTR_DAT_00437274 != 0) {
    local_40 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_c;
    unaff_r8[1] = local_40[1];
  }
  local_40[1] = local_c;
  FUN_00098a20(0,&local_24);
  local_24 = PTR_DAT_00437278;
  local_20 = 0xc;
  local_1c = PTR_DAT_00437268;
  local_18 = local_8;
  FUN_0001eed8();
  local_4 = puVar1;
  FUN_0001cd7c();
  printerApi_service_k3c___K3c__CallContext();
  if (local_34 != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).IsWorking @ 00437298 (size 144) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__IsWorking(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined4 uStack_10;
  undefined1 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x437324;
    FUN_00096bb8();
  }
  if (*(int *)(*in_stack_00000004 + 0x6c) == 8) {
    uStack_10 = _UNK_0043732c;
    FUN_000150d4();
    if (uStack_8 != '\0') {
      in_stack_00000008 = 1;
      goto LAB_00437314;
    }
  }
  internal_runtime_atomic_Load();
  if (uStack_10 == 3) {
    in_stack_00000008 = 1;
  }
  else {
    in_stack_00000008 = 0;
  }
LAB_00437314:
                    /* WARNING: Could not recover jumptable at 0x00437318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetFanSpeed @ 00437330 (size 192) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetFanSpeed(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4373ec;
    FUN_00096bb8();
  }
  FUN_0008a4bc();
  FUN_001331ac();
  printerApi_service_k3c_wrapper___K3cwrapper__RunScript();
                    /* WARNING: Could not recover jumptable at 0x004373e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).TurnOffAllStepper @ 004373fc (size 92) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__TurnOffAllStepper(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x437454;
    FUN_00096bb8();
  }
  printerApi_service_k3c_wrapper___K3cwrapper__RunScript();
                    /* WARNING: Could not recover jumptable at 0x00437448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetZoffset @ 00437460 (size 192) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetZoffset(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43751c;
    FUN_00096bb8();
  }
  FUN_0008a4bc();
  FUN_001331ac();
  printerApi_service_k3c_wrapper___K3cwrapper__RunScript();
                    /* WARNING: Could not recover jumptable at 0x00437510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).RunMethod @ 0043752c (size 552) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__RunMethod(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int local_74;
  undefined4 local_5c;
  undefined4 local_58;
  undefined *local_54;
  undefined1 local_44 [24];
  undefined1 auStack_2c [24];
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  int local_4;
  
  while (puVar1 = PTR_DAT_00437758, &local_14 <= *(undefined ***)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  FUN_00098a20(0,&local_5c,puVar1);
  local_5c = in_stack_00000010;
  local_58 = in_stack_00000014;
  local_54 = PTR_DAT_0043775c;
  FUN_0001eed8();
  local_4 = 1;
  FUN_0001cd7c();
  iVar2 = local_4;
  puVar1 = PTR_DAT_00437768;
  printerApi_service_k3c___K3c__CallContext();
  if (local_74 != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar3 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_2c);
  FUN_00098e0c(uVar3,auStack_2c,local_44);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_0043776c;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_0043776c;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar4 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = iVar2;
  if (*(int *)PTR_DAT_00437778 != 0) {
    puVar4 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar1;
  }
  *puVar4 = puVar1;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PrintCancel @ 00437780 (size 92) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__PrintCancel(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4377d8;
    FUN_00096bb8();
  }
  printerApi_service_k3c_wrapper___K3cwrapper__RunMethod();
                    /* WARNING: Could not recover jumptable at 0x004377cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PrintPause @ 004377e4 (size 92) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__PrintPause(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43783c;
    FUN_00096bb8();
  }
  printerApi_service_k3c_wrapper___K3cwrapper__RunMethod();
                    /* WARNING: Could not recover jumptable at 0x00437830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PrintResume @ 00437848 (size 92) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__PrintResume(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4378a0;
    FUN_00096bb8();
  }
  printerApi_service_k3c_wrapper___K3cwrapper__RunMethod();
                    /* WARNING: Could not recover jumptable at 0x00437894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).FirmwareRestart @ 004378ac (size 92) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__FirmwareRestart(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x437904;
    FUN_00096bb8();
  }
  printerApi_service_k3c_wrapper___K3cwrapper__RunScript();
                    /* WARNING: Could not recover jumptable at 0x004378f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetPrintSpeed @ 00437910 (size 796) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetPrintSpeed(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_0000000c;
  int in_stack_00000018;
  undefined4 in_stack_ffffff70;
  undefined *puVar4;
  undefined4 local_8c;
  undefined4 local_84;
  undefined4 *local_80;
  int local_74;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  undefined4 local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  int local_4;
  
  while (&local_14 <= *(undefined ***)(unaff_r10 + 8)) {
    unaff_lr = 0x437c28;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  local_18 = in_stack_ffffff70;
  FUN_0001cec0();
  uVar2 = local_18;
  local_1c = local_8c;
  local_84 = 5;
  FUN_0008e7bc();
  *local_80 = PTR_DAT_00437c38;
  puVar3 = local_80;
  if (*(int *)PTR_DAT_00437c3c != 0) {
    puVar3 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = puVar3[1];
  }
  puVar3[1] = local_1c;
  if (in_stack_00000018 != 0) {
    FUN_0001cec0();
    local_1c = uVar2;
    local_84 = 10;
    FUN_0008e7bc();
    *local_80 = PTR_DAT_00437c38;
    puVar3 = local_80;
    if (*(int *)PTR_DAT_00437c3c != 0) {
      puVar3 = (undefined4 *)FUN_00098688();
      *unaff_r8 = local_1c;
      unaff_r8[1] = puVar3[1];
    }
    puVar3[1] = local_1c;
  }
  puVar4 = PTR_DAT_00437c44;
  internal_runtime_atomic_Xadd64();
  FUN_00098a20(0,&local_64,local_80,local_84,unaff_lr,puVar4);
  local_64 = PTR_DAT_00437c48;
  local_60 = 0x11;
  local_5c = PTR_DAT_00437c30;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = 1;
  FUN_0001cd7c();
  iVar1 = local_4;
  puVar4 = PTR_DAT_00437c54;
  printerApi_service_k3c___K3c__CallContext();
  if (local_74 != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar2 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar2,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_00437c58;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_00437c58;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar3 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = iVar1;
  if (*(int *)PTR_DAT_00437c3c != 0) {
    puVar3 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar4;
  }
  *puVar3 = puVar4;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishCloudPrintStatus @ 00437c68 (size 304) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishCloudPrintStatus(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  int local_34;
  int local_24;
  undefined *local_1c;
  undefined4 local_18;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = local_34;
  uVar1 = 0;
  if (*(int *)PTR_DAT_00437da0 != 0) {
    uVar1 = FUN_00022914();
  }
  FUN_00098e0c(uVar1,&stack0x00000008,local_4);
  FUN_00098a20(0,&local_1c);
  local_1c = PTR_DAT_00437da4;
  local_18 = 0x15;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_00437da0 != 0) {
    FUN_00098678();
    *unaff_r8 = local_4;
    local_34 = extraout_r3;
  }
  *(int *)(local_34 + 0x2c) = local_4;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_24 == 0) {
    printerApi_service_k3c_Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).GetExcludeParts @ 00437db0 (size 876) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__GetExcludeParts(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 local_84;
  undefined4 local_80;
  int local_74;
  undefined *local_64;
  undefined4 local_60;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined *local_1c;
  undefined *local_18;
  undefined4 local_14;
  undefined *local_10;
  undefined4 local_c;
  int local_8;
  undefined4 *local_4;
  
  while (&local_14 <= *(undefined4 **)(unaff_r10 + 8)) {
    unaff_lr = 0x438118;
    FUN_00096bb8();
  }
  puVar4 = PTR_DAT_00438120;
  internal_runtime_atomic_Xadd64();
  FUN_00098a20(0,&local_64,local_80,local_84,unaff_lr,puVar4);
  local_64 = PTR_DAT_00438124;
  local_60 = 0x1a;
  FUN_0001eed8();
  local_8 = 1;
  FUN_0001cd7c();
  iVar1 = local_8;
  puVar4 = PTR_DAT_00438130;
  printerApi_service_k3c___K3c__CallContext();
  if (local_74 != 0) {
    return;
  }
  if (*(int *)(local_8 + 0x14) != 0) {
    uVar2 = FUN_00098e0c(local_8,*(int *)(local_8 + 0x14),auStack_34);
    FUN_00098e0c(uVar2,auStack_34,local_4c);
    FUN_00098a28(0,&local_18);
    FUN_0008a578();
    local_18 = PTR_SUB_00438134;
    local_14 = in_stack_0000000c;
    FUN_0008a578();
    local_10 = PTR_SUB_00438134;
    local_c = in_stack_0000000c;
    FUN_001331ac();
    FUN_0001eed8();
    puVar3 = (undefined4 *)&DAT_00000007;
    DAT_0000000b = (undefined1)iVar1;
    _SUB_0000000c = (undefined3)((uint)iVar1 >> 8);
    if (*(int *)PTR_DAT_00438140 != 0) {
      puVar3 = (undefined4 *)FUN_00098678();
      *unaff_r8 = puVar4;
    }
    *puVar3 = puVar4;
    return;
  }
  puVar5 = PTR_DAT_00438148;
  FUN_0001eed8();
  local_4 = in_stack_00000008;
  FUN_0008b6b8();
  local_1c = puVar5;
  FUN_0008e7bc();
  puVar3 = (undefined4 *)0x0;
  _DAT_00000004 = 0;
  _DAT_00000008 = 0;
  if (*(int *)PTR_DAT_00438140 != 0) {
    puVar3 = (undefined4 *)FUN_00098698(0,0,uRam00000000);
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = local_1c;
    unaff_r8[2] = *local_4;
  }
  *puVar3 = 0;
  *local_4 = local_1c;
  FUN_0016a168();
  if (puVar4 == (undefined *)0x0) {
    FUN_00021c74();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetExcludeParts @ 00438154 (size 688) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetExcludeParts(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 local_8c;
  undefined4 *local_88;
  int local_7c;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  undefined *local_4;
  
  while (puVar1 = PTR_DAT_00438408, &local_1c <= *(undefined4 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_18 = puVar1;
  FUN_0008a61c();
  puVar1 = local_18;
  local_1c = local_8c;
  FUN_0008e7bc();
  *local_88 = PTR_DAT_00438414;
  if (*(int *)PTR_DAT_00438418 != 0) {
    local_88 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = local_88[1];
  }
  local_88[1] = local_1c;
  FUN_00098a20(0,&local_64);
  local_64 = PTR_DAT_0043841c;
  local_60 = 0x1a;
  local_5c = PTR_DAT_0043840c;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = puVar1;
  FUN_0001cd7c();
  puVar2 = local_4;
  puVar1 = PTR_DAT_00438428;
  printerApi_service_k3c___K3c__CallContext();
  if (local_7c != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar3 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar3,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_0043842c;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_0043842c;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar4 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = puVar2;
  if (*(int *)PTR_DAT_00438418 != 0) {
    puVar4 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar1;
  }
  *puVar4 = puVar1;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetFanSpeedByEndpoint @ 0043843c (size 788) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetFanSpeedByEndpoint(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 *local_88;
  int local_7c;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined *local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  undefined *local_4;
  
  while (puVar1 = PTR_DAT_00438754, &local_1c <= *(undefined ***)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_18 = puVar1;
  FUN_0001cec0();
  puVar1 = local_18;
  local_1c = (undefined *)0x1;
  FUN_0008e7bc();
  *local_88 = PTR_DAT_00438760;
  puVar4 = local_88;
  if (*(int *)PTR_DAT_00438764 != 0) {
    puVar4 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = puVar4[1];
  }
  puVar4[1] = local_1c;
  FUN_0001cec0();
  puVar2 = local_18;
  local_1c = puVar1;
  FUN_0008e7bc();
  *local_88 = PTR_DAT_00438760;
  if (*(int *)PTR_DAT_00438764 != 0) {
    local_88 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = local_88[1];
  }
  local_88[1] = local_1c;
  FUN_00098a20(0,&local_64);
  local_64 = PTR_DAT_0043876c;
  local_60 = 0xb;
  local_5c = PTR_DAT_00438758;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = puVar2;
  FUN_0001cd7c();
  puVar2 = local_4;
  puVar1 = PTR_DAT_00438778;
  printerApi_service_k3c___K3c__CallContext();
  if (local_7c != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar3 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar3,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_0043877c;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_0043877c;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar4 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = puVar2;
  if (*(int *)PTR_DAT_00438764 != 0) {
    puVar4 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar1;
  }
  *puVar4 = puVar1;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetClearDetect @ 0043878c (size 664) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetClearDetect(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_ffffff70;
  undefined *puVar4;
  undefined4 local_8c;
  undefined4 *local_80;
  int local_74;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  undefined4 local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  int local_4;
  
  while (&local_14 <= *(undefined ***)(unaff_r10 + 8)) {
    unaff_lr = 0x438a20;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  local_18 = in_stack_ffffff70;
  FUN_0001cec0();
  local_1c = local_8c;
  FUN_0008e7bc();
  *local_80 = PTR_DAT_00438a30;
  puVar3 = local_80;
  if (*(int *)PTR_DAT_00438a34 != 0) {
    puVar3 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = puVar3[1];
  }
  puVar3[1] = local_1c;
  puVar4 = PTR_DAT_00438a38;
  internal_runtime_atomic_Xadd64();
  FUN_00098a20(0,&local_64,local_80,1,unaff_lr,puVar4);
  local_64 = PTR_DAT_00438a3c;
  local_60 = 0x19;
  local_5c = PTR_DAT_00438a28;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = 1;
  FUN_0001cd7c();
  iVar1 = local_4;
  puVar4 = PTR_DAT_00438a48;
  printerApi_service_k3c___K3c__CallContext();
  if (local_74 != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar2 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar2,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_00438a4c;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_00438a4c;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar3 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = iVar1;
  if (*(int *)PTR_DAT_00438a34 != 0) {
    puVar3 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar4;
  }
  *puVar3 = puVar4;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).EndClearDetect @ 00438a5c (size 628) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__EndClearDetect(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar4;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_ffffff74;
  undefined *puVar5;
  undefined4 *local_7c;
  int local_70;
  undefined *local_60;
  undefined4 local_5c;
  undefined *local_58;
  undefined4 local_54;
  undefined1 local_48 [24];
  undefined1 auStack_30 [24];
  undefined4 local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  int local_4;
  
  while (&local_10 <= *(undefined4 **)(unaff_r10 + 8)) {
    unaff_lr = 0x438ccc;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  local_18 = in_stack_ffffff74;
  FUN_0008e7bc();
  *local_7c = PTR_DAT_00438cdc;
  puVar3 = local_7c;
  if (*(int *)PTR_DAT_00438ce0 != 0) {
    uVar4 = FUN_00098678(local_7c,local_7c[1]);
    puVar3 = (undefined4 *)uVar4;
    *unaff_r8 = (int)((ulonglong)uVar4 >> 0x20);
  }
  puVar3[1] = PTR_SUB_00438ce4;
  puVar5 = PTR_DAT_00438ce8;
  internal_runtime_atomic_Xadd64();
  FUN_00098a20(0,&local_60,local_7c,1,unaff_lr,puVar5);
  local_60 = PTR_DAT_00438cec;
  local_5c = 0x18;
  local_58 = PTR_DAT_00438cd4;
  local_54 = local_18;
  FUN_0001eed8();
  local_4 = 1;
  FUN_0001cd7c();
  iVar1 = local_4;
  puVar5 = PTR_DAT_00438cf8;
  printerApi_service_k3c___K3c__CallContext();
  if (local_70 != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar2 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_30);
  FUN_00098e0c(uVar2,auStack_30,local_48);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_00438cfc;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_00438cfc;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar3 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = iVar1;
  if (*(int *)PTR_DAT_00438ce0 != 0) {
    puVar3 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar5;
  }
  *puVar3 = puVar5;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishDownloadStatus @ 00438d0c (size 304) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishDownloadStatus(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int local_34;
  int local_24;
  undefined *local_1c;
  undefined4 local_18;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = local_34;
  uVar1 = 0;
  if (*(int *)PTR_DAT_00438e44 != 0) {
    uVar1 = FUN_00022914();
  }
  FUN_00098e24(uVar1,&stack0x00000008,local_4);
  FUN_00098a20(0,&local_1c);
  local_1c = PTR_DAT_00438e48;
  local_18 = 0x15;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_00438e44 != 0) {
    FUN_00098678();
    *unaff_r8 = local_4;
    local_34 = extraout_r3;
  }
  *(int *)(local_34 + 0x30) = local_4;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_24 == 0) {
    printerApi_service_k3c_Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishVideoStreamRequest @ 00438e54 (size 304) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishVideoStreamRequest(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  int local_34;
  int local_24;
  undefined *local_1c;
  undefined4 local_18;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = local_34;
  uVar1 = 0;
  if (*(int *)PTR_DAT_00438f8c != 0) {
    uVar1 = FUN_00022914();
  }
  FUN_00098e14(uVar1,&stack0x00000008,local_4);
  FUN_00098a20(0,&local_1c);
  local_1c = PTR_DAT_00438f90;
  local_18 = 0x15;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_00438f8c != 0) {
    FUN_00098678();
    *unaff_r8 = local_4;
    local_34 = extraout_r3;
  }
  *(int *)(local_34 + 0x34) = local_4;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_24 == 0) {
    printerApi_service_k3c_Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishVideoStreamReply @ 00438f9c (size 304) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishVideoStreamReply(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  int iStack_34;
  int iStack_24;
  undefined *puStack_1c;
  undefined4 uStack_18;
  int iStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x4390c8;
    FUN_00096bb8();
  }
  FUN_0001eed8();
  iStack_4 = iStack_34;
  uVar1 = 0;
  if (*(int *)PTR_DAT_004390d4 != 0) {
    uVar1 = FUN_00022914();
  }
  FUN_00098e04(uVar1,&stack0x00000008,iStack_4);
  FUN_00098a20(0,&puStack_1c);
  puStack_1c = PTR_DAT_004390d8;
  uStack_18 = 0x15;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_004390d4 != 0) {
    FUN_00098678();
    *unaff_r8 = iStack_4;
    iStack_34 = extraout_r3;
  }
  *(int *)(iStack_34 + 0x38) = iStack_4;
  FUN_0001cd7c();
  FUN_001707f4();
  if (iStack_24 == 0) {
    printerApi_service_k3c_Publish();
    in_stack_00000024 = 0;
    in_stack_00000028 = 0;
                    /* WARNING: Could not recover jumptable at 0x004390bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0043908c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishCameraInfo @ 004390e4 (size 260) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishCameraInfo(void)

{
  undefined4 *extraout_r1;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *puStack_34;
  int iStack_24;
  undefined *puStack_1c;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x4391e4;
    FUN_00096bb8();
  }
  FUN_0001eed8();
  puStack_4 = puStack_34;
  *puStack_34 = in_stack_00000008;
  FUN_00098a20(0,&puStack_1c);
  puStack_1c = PTR_DAT_004391f0;
  uStack_18 = 0x15;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_004391f8 != 0) {
    FUN_00098678();
    *unaff_r8 = (int)puStack_4;
    puStack_34 = extraout_r1;
  }
  puStack_34[0xf] = puStack_4;
  puStack_14 = puStack_34;
  FUN_0001cd7c();
  FUN_001707f4();
  if (iStack_24 == 0) {
    printerApi_service_k3c_Publish();
    in_stack_0000000c = 0;
    in_stack_00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x004391d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004391a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishCameraLedStatus @ 00439200 (size 260) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishCameraLedStatus(void)

{
  undefined4 *extraout_r1;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *local_34;
  int local_24;
  undefined *local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = local_34;
  *local_34 = in_stack_00000008;
  FUN_00098a20(0,&local_1c);
  local_1c = PTR_DAT_0043930c;
  local_18 = 0x15;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_00439314 != 0) {
    FUN_00098678();
    *unaff_r8 = (int)local_4;
    local_34 = extraout_r1;
  }
  local_34[0x10] = local_4;
  local_14 = local_34;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_24 == 0) {
    printerApi_service_k3c_Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetExtruderTemp @ 0043931c (size 672) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetExtruderTemp(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 *local_88;
  int local_7c;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  undefined *local_4;
  
  while (puVar1 = PTR_DAT_004395c0, &local_1c <= *(undefined4 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_18 = puVar1;
  FUN_0001cec0();
  puVar1 = local_18;
  local_1c = 1;
  FUN_0008e7bc();
  *local_88 = PTR_DAT_004395cc;
  if (*(int *)PTR_DAT_004395d0 != 0) {
    local_88 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = local_88[1];
  }
  local_88[1] = local_1c;
  FUN_00098a20(0,&local_64);
  local_64 = PTR_DAT_004395d4;
  local_60 = 0x12;
  local_5c = PTR_DAT_004395c4;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = puVar1;
  FUN_0001cd7c();
  puVar2 = local_4;
  puVar1 = PTR_DAT_004395e0;
  printerApi_service_k3c___K3c__CallContext();
  if (local_7c != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar3 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar3,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_004395e4;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_004395e4;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar4 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = puVar2;
  if (*(int *)PTR_DAT_004395d0 != 0) {
    puVar4 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar1;
  }
  *puVar4 = puVar1;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetHeaterbedTemp @ 004395f4 (size 672) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetHeaterbedTemp(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 *local_88;
  int local_7c;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  undefined *local_4;
  
  while (puVar1 = PTR_DAT_00439898, &local_1c <= *(undefined4 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_18 = puVar1;
  FUN_0001cec0();
  puVar1 = local_18;
  local_1c = 1;
  FUN_0008e7bc();
  *local_88 = PTR_DAT_004398a4;
  if (*(int *)PTR_DAT_004398a8 != 0) {
    local_88 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = local_88[1];
  }
  local_88[1] = local_1c;
  FUN_00098a20(0,&local_64);
  local_64 = PTR_DAT_004398ac;
  local_60 = 0x13;
  local_5c = PTR_DAT_0043989c;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = puVar1;
  FUN_0001cd7c();
  puVar2 = local_4;
  puVar1 = PTR_DAT_004398b8;
  printerApi_service_k3c___K3c__CallContext();
  if (local_7c != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar3 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar3,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_004398bc;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_004398bc;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar4 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = puVar2;
  if (*(int *)PTR_DAT_004398a8 != 0) {
    puVar4 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar1;
  }
  *puVar4 = puVar1;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetChamberTemp @ 004398cc (size 672) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetChamberTemp(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  undefined4 *local_88;
  int local_7c;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  undefined *local_4;
  
  while (puVar1 = PTR_DAT_00439b70, &local_1c <= *(undefined4 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_18 = puVar1;
  FUN_0001cec0();
  puVar1 = local_18;
  local_1c = 1;
  FUN_0008e7bc();
  *local_88 = PTR_DAT_00439b7c;
  if (*(int *)PTR_DAT_00439b80 != 0) {
    local_88 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = local_88[1];
  }
  local_88[1] = local_1c;
  FUN_00098a20(0,&local_64);
  local_64 = PTR_DAT_00439b84;
  local_60 = 0x11;
  local_5c = PTR_DAT_00439b74;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = puVar1;
  FUN_0001cd7c();
  puVar2 = local_4;
  puVar1 = PTR_DAT_00439b90;
  printerApi_service_k3c___K3c__CallContext();
  if (local_7c != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar3 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar3,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_00439b94;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_00439b94;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar4 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = puVar2;
  if (*(int *)PTR_DAT_00439b80 != 0) {
    puVar4 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar1;
  }
  *puVar4 = puVar1;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishCloudDeleteFile @ 00439ba4 (size 316) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishCloudDeleteFile(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  int local_34;
  int local_24;
  undefined *local_1c;
  undefined4 local_18;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = local_34;
  uVar1 = 0;
  if (*(int *)PTR_DAT_00439ce8 != 0) {
    uVar1 = FUN_00022914();
  }
  FUN_00098e0c(uVar1,&stack0x00000008,local_4);
  FUN_00098a20(0,&local_1c);
  local_1c = PTR_DAT_00439cec;
  local_18 = 0x15;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_00439ce8 != 0) {
    FUN_00098678();
    *unaff_r8 = local_4;
    local_34 = extraout_r3;
  }
  *(int *)(local_34 + 0x44) = local_4;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_24 == 0) {
    printerApi_service_k3c___K3c__Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishDeviceOtaDownloadStatus @ 00439cf8 (size 360) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishDeviceOtaDownloadStatus(void)

{
  undefined4 uVar1;
  int *extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int *local_38;
  int local_28;
  undefined *local_20;
  undefined4 local_1c;
  int local_18;
  int *local_8;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = (int)local_38;
  uVar1 = 0;
  if (*(int *)PTR_DAT_00439e68 != 0) {
    uVar1 = FUN_00022914();
  }
  FUN_00098e24(uVar1,&stack0x00000008,local_4);
  FUN_00098a20(0,&local_20);
  local_20 = PTR_DAT_00439e6c;
  local_1c = 0x15;
  FUN_0001eed8();
  local_8 = local_38;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_00439e68 != 0) {
    FUN_00098698();
    *unaff_r8 = local_4;
    unaff_r8[1] = (int)extraout_r3;
    unaff_r8[2] = *(int *)((int)local_8 + 0x48);
    local_38 = extraout_r3;
  }
  *local_38 = local_4;
  *(int **)((int)local_8 + 0x48) = local_38;
  local_18 = (int)local_8;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_28 == 0) {
    printerApi_service_k3c___K3c__Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishDeviceOtaUpgradeStatus @ 00439e7c (size 360) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishDeviceOtaUpgradeStatus(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int local_38;
  int local_28;
  undefined *local_20;
  undefined4 local_1c;
  int local_18;
  int local_8;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = local_38;
  uVar1 = 0;
  if (*(int *)PTR_DAT_00439fec != 0) {
    uVar1 = FUN_00022914();
  }
  FUN_00098e2c(uVar1,&stack0x00000008,local_4);
  FUN_00098a20(0,&local_20);
  local_20 = PTR_DAT_00439ff0;
  local_1c = 0x15;
  FUN_0001eed8();
  local_8 = local_38;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_00439fec != 0) {
    FUN_00098698();
    *unaff_r8 = local_4;
    unaff_r8[1] = extraout_r3;
    unaff_r8[2] = *(int *)(local_8 + 0x48);
    local_38 = extraout_r3;
  }
  *(int *)(local_38 + 4) = local_4;
  *(int *)(local_8 + 0x48) = local_38;
  local_18 = local_8;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_28 == 0) {
    printerApi_service_k3c___K3c__Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishCloudOtaUpgradeStatus @ 0043a000 (size 316) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishCloudOtaUpgradeStatus(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  int local_34;
  int local_24;
  undefined *local_1c;
  undefined4 local_18;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = local_34;
  uVar1 = 0;
  if (*(int *)PTR_DAT_0043a144 != 0) {
    uVar1 = FUN_00022914();
  }
  FUN_00098e1c(uVar1,&stack0x00000008,local_4);
  FUN_00098a20(0,&local_1c);
  local_1c = PTR_DAT_0043a148;
  local_18 = 0x15;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_0043a144 != 0) {
    FUN_00098678();
    *unaff_r8 = local_4;
    local_34 = extraout_r3;
  }
  *(int *)(local_34 + 0x4c) = local_4;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_24 == 0) {
    printerApi_service_k3c___K3c__Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).FilamentDetected @ 0043a154 (size 1244) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__FilamentDetected(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *puStack_9c;
  undefined4 uStack_98;
  undefined4 *puStack_94;
  int iStack_90;
  undefined *puStack_70;
  undefined4 uStack_6c;
  undefined *puStack_68;
  undefined *puStack_64;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined *puStack_24;
  undefined *puStack_20;
  undefined *puStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  while (puVar1 = PTR_DAT_0043a63c, auStack_30 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43a634;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  puStack_20 = puVar1;
  FUN_0008b6b8();
  puStack_24 = puVar1;
  FUN_0008e7bc();
  *puStack_9c = 0;
  puVar3 = puStack_9c;
  if (*(int *)PTR_DAT_0043a648 != 0) {
    puVar3 = (undefined4 *)FUN_00098678(puStack_9c,0,puStack_9c[1]);
    *unaff_r8 = extraout_r2;
  }
  puVar3[1] = 0;
  puVar1 = PTR_DAT_0043a64c;
  FUN_0008e7bc();
  puVar3 = puStack_9c;
  if (*(int *)PTR_DAT_0043a648 != 0) {
    FUN_00098688();
    *unaff_r8 = puStack_24;
    unaff_r8[1] = *extraout_r1;
    puVar3 = extraout_r1;
  }
  *puVar3 = puStack_24;
  FUN_0008b6b8();
  puStack_24 = puVar1;
  FUN_0008e7bc();
  puVar1 = PTR_SUB_0043a658;
  *puStack_9c = PTR_SUB_0043a658;
  puVar3 = puStack_9c;
  if (*(int *)PTR_DAT_0043a648 != 0) {
    puVar3 = (undefined4 *)FUN_00098678(puStack_9c,puVar1,puStack_9c[1]);
    *unaff_r8 = extraout_r2_00;
  }
  puVar1 = puStack_20;
  puVar3[1] = PTR_DAT_0043a65c;
  FUN_0008e7bc();
  puVar3 = puStack_9c;
  if (*(int *)PTR_DAT_0043a648 != 0) {
    FUN_00098688();
    *unaff_r8 = puStack_24;
    unaff_r8[1] = *extraout_r1_00;
    puVar3 = extraout_r1_00;
  }
  *puVar3 = puStack_24;
  FUN_00098a20(0,&puStack_70);
  puStack_70 = PTR_DAT_0043a664;
  uStack_6c = 0xd;
  puStack_68 = PTR_DAT_0043a64c;
  puStack_64 = puStack_20;
  FUN_0001eed8();
  puVar3 = _UNK_0043a674;
  puStack_c = puVar1;
  FUN_00155144();
  uStack_28 = uStack_98;
  puStack_4 = puStack_94;
  FUN_0001cd7c();
  puVar2 = puStack_c;
  puVar1 = PTR_DAT_0043a67c;
  printerApi_service_k3c___K3c__CallContext();
  if (iStack_90 != 0) {
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0043a620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (*(int *)(puStack_c + 0x1c) == 0) {
    FUN_0001eed8();
    puStack_8 = puStack_9c;
    FUN_00021c74();
    uVar5 = puVar3[2];
    uVar6 = puVar3[3];
    uVar4 = *puVar3;
    puStack_8[1] = puVar3[1];
    puStack_8[2] = uVar5;
    puStack_8[3] = uVar6;
    if (*(int *)PTR_DAT_0043a648 != 0) {
      uVar4 = FUN_00098688();
      *unaff_r8 = uVar4;
      unaff_r8[1] = *puStack_8;
    }
    *puStack_8 = uVar4;
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0043a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar4 = FUN_00098e0c(puStack_c,*(int *)(puStack_c + 0x1c),auStack_40);
  FUN_00098e0c(uVar4,auStack_40,auStack_58);
  FUN_00098a28(0,&puStack_1c);
  FUN_0008a578();
  puStack_1c = PTR_SUB_0043a658;
  uStack_18 = uStack_28;
  FUN_0008a578();
  puStack_14 = PTR_SUB_0043a658;
  uStack_10 = uStack_28;
  FUN_001331ac();
  FUN_0001eed8();
  puVar3 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = puVar2;
  if (*(int *)PTR_DAT_0043a648 != 0) {
    puVar3 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar1;
  }
  *puVar3 = puVar1;
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0043a544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishWifiSetStatus @ 0043a694 (size 316) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishWifiSetStatus(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  int iStack_34;
  int iStack_24;
  undefined *puStack_1c;
  undefined4 uStack_18;
  int iStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x43a7cc;
    FUN_00096bb8();
  }
  FUN_0001eed8();
  iStack_4 = iStack_34;
  uVar1 = 0;
  if (*(int *)PTR_DAT_0043a7d8 != 0) {
    uVar1 = FUN_00022914();
  }
  FUN_00098e1c(uVar1,&stack0x00000008,iStack_4);
  FUN_00098a20(0,&puStack_1c);
  puStack_1c = PTR_DAT_0043a7dc;
  uStack_18 = 0x15;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_0043a7d8 != 0) {
    FUN_00098678();
    *unaff_r8 = iStack_4;
    iStack_34 = extraout_r3;
  }
  *(int *)(iStack_34 + 0x54) = iStack_4;
  FUN_0001cd7c();
  FUN_001707f4();
  if (iStack_24 == 0) {
    printerApi_service_k3c___K3c__Publish();
    in_stack_00000018 = 0;
    in_stack_0000001c = 0;
                    /* WARNING: Could not recover jumptable at 0x0043a7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0043a784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishTips @ 0043a7e8 (size 304) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishTips(void)

{
  undefined4 *extraout_r1;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *local_38;
  int local_28;
  undefined *local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = local_38;
  *local_38 = in_stack_00000008;
  FUN_00098a20(0,&local_20);
  local_20 = PTR_DAT_0043a920;
  local_1c = 0x15;
  FUN_0001eed8();
  local_8 = local_38;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_0043a92c != 0) {
    FUN_00098698();
    *unaff_r8 = (int)local_4;
    unaff_r8[1] = (int)extraout_r1;
    unaff_r8[2] = local_8[0x17];
    local_38 = extraout_r1;
  }
  local_38[9] = local_4;
  local_8[0x17] = local_38;
  local_18 = local_8;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_28 == 0) {
    printerApi_service_k3c_Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetLedStatusByEndpoint @ 0043a934 (size 664) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetLedStatusByEndpoint(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_ffffff70;
  undefined *puVar4;
  undefined4 local_8c;
  undefined4 *local_80;
  int local_74;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  undefined4 local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  int local_4;
  
  while (&local_14 <= *(undefined ***)(unaff_r10 + 8)) {
    unaff_lr = 0x43abc8;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  local_18 = in_stack_ffffff70;
  FUN_0001cec0();
  local_1c = local_8c;
  FUN_0008e7bc();
  *local_80 = PTR_DAT_0043abd8;
  puVar3 = local_80;
  if (*(int *)PTR_DAT_0043abdc != 0) {
    puVar3 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = puVar3[1];
  }
  puVar3[1] = local_1c;
  puVar4 = PTR_DAT_0043abe0;
  internal_runtime_atomic_Xadd64();
  FUN_00098a20(0,&local_64,local_80,1,unaff_lr,puVar4);
  local_64 = PTR_DAT_0043abe4;
  local_60 = 0xb;
  local_5c = PTR_DAT_0043abd0;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = 1;
  FUN_0001cd7c();
  iVar1 = local_4;
  puVar4 = PTR_DAT_0043abf0;
  printerApi_service_k3c___K3c__CallContext();
  if (local_74 != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar2 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar2,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_0043abf4;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_0043abf4;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar3 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = iVar1;
  if (*(int *)PTR_DAT_0043abdc != 0) {
    puVar3 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar4;
  }
  *puVar3 = puVar4;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetAutoLevelByEndpoint @ 0043ac04 (size 664) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetAutoLevelByEndpoint(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_ffffff70;
  undefined *puVar4;
  undefined4 local_8c;
  undefined4 *local_80;
  int local_74;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  undefined4 local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  int local_4;
  
  while (&local_14 <= *(undefined ***)(unaff_r10 + 8)) {
    unaff_lr = 0x43ae98;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  local_18 = in_stack_ffffff70;
  FUN_0001cec0();
  local_1c = local_8c;
  FUN_0008e7bc();
  *local_80 = PTR_DAT_0043aea8;
  puVar3 = local_80;
  if (*(int *)PTR_DAT_0043aeac != 0) {
    puVar3 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = puVar3[1];
  }
  puVar3[1] = local_1c;
  puVar4 = PTR_DAT_0043aeb0;
  internal_runtime_atomic_Xadd64();
  FUN_00098a20(0,&local_64,local_80,1,unaff_lr,puVar4);
  local_64 = PTR_DAT_0043aeb4;
  local_60 = 0x10;
  local_5c = PTR_DAT_0043aea0;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = 1;
  FUN_0001cd7c();
  iVar1 = local_4;
  puVar4 = PTR_DAT_0043aec0;
  printerApi_service_k3c___K3c__CallContext();
  if (local_74 != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar2 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar2,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_0043aec4;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_0043aec4;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar3 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = iVar1;
  if (*(int *)PTR_DAT_0043aeac != 0) {
    puVar3 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar4;
  }
  *puVar3 = puVar4;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PoweroffResume @ 0043aed4 (size 764) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__PoweroffResume(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_0000000c;
  int local_84;
  undefined *local_6c;
  undefined4 local_68;
  undefined *local_64;
  undefined *local_60;
  undefined1 local_54 [24];
  undefined1 auStack_3c [24];
  undefined **local_24;
  undefined *local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  undefined *local_4;
  
  while (puVar1 = PTR_DAT_0043b1d4, &local_24 <= *(undefined ****)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  internal_runtime_atomic_Xadd64();
  FUN_0008b6b8();
  local_20 = puVar1;
  local_c = (undefined *)0x0;
  local_8 = 0;
  FUN_0001cec0();
  local_c = PTR_DAT_0043b1d8;
  local_8 = 1;
  FUN_001331ac();
  FUN_0008a578();
  puVar1 = local_20;
  local_24 = &local_c;
  FUN_0008e7bc();
  iVar3 = 1;
  puRam00000001 = PTR_SUB_0043b1e8;
  if (*(int *)PTR_DAT_0043b1ec != 0) {
    iVar3 = FUN_00098688();
    *unaff_r8 = (int)local_24;
    unaff_r8[1] = *(int *)(iVar3 + 4);
  }
  *(undefined ***)(iVar3 + 4) = local_24;
  FUN_00098a20(0,&local_6c);
  local_6c = PTR_DAT_0043b1f0;
  local_68 = 0xc;
  local_64 = PTR_DAT_0043b1e0;
  local_60 = local_20;
  FUN_0001eed8();
  local_4 = puVar1;
  FUN_0001cd7c();
  puVar2 = local_4;
  puVar1 = PTR_DAT_0043b1fc;
  printerApi_service_k3c___K3c__CallContext();
  if (local_84 != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar4 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_3c);
  FUN_00098e0c(uVar4,auStack_3c,local_54);
  FUN_00098a28(0,&local_1c);
  FUN_0008a578();
  local_1c = PTR_SUB_0043b1e8;
  local_18 = in_stack_0000000c;
  FUN_0008a578();
  local_14 = PTR_SUB_0043b1e8;
  local_10 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar5 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = puVar2;
  if (*(int *)PTR_DAT_0043b1ec != 0) {
    puVar5 = (undefined4 *)FUN_00098678();
    *unaff_r8 = (int)puVar1;
  }
  *puVar5 = puVar1;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PoweroffResumeStart @ 0043b20c (size 84) */

void printerApi_service_k3c_wrapper___K3cwrapper__PoweroffResumeStart(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43b25c;
    FUN_00096bb8();
  }
  printerApi_service_k3c_wrapper___K3cwrapper__PoweroffResume();
                    /* WARNING: Could not recover jumptable at 0x0043b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PoweroffResumeCancel @ 0043b260 (size 84) */

void printerApi_service_k3c_wrapper___K3cwrapper__PoweroffResumeCancel(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43b2b0;
    FUN_00096bb8();
  }
  printerApi_service_k3c_wrapper___K3cwrapper__PoweroffResume();
                    /* WARNING: Could not recover jumptable at 0x0043b2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishPoweroffResumeStatus @ 0043b2b4 (size 348) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishPoweroffResumeStatus(void)

{
  undefined4 uVar1;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  int local_38;
  int local_28;
  undefined *local_20;
  undefined4 local_1c;
  int local_18;
  int local_8;
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0001eed8();
  local_4 = local_38;
  uVar1 = 0;
  if (*(int *)PTR_DAT_0043b418 != 0) {
    uVar1 = FUN_00022914();
  }
  FUN_00098dcc(uVar1,&stack0x00000008,local_4);
  FUN_00098a20(0,&local_20);
  local_20 = PTR_DAT_0043b41c;
  local_1c = 0x15;
  FUN_0001eed8();
  local_8 = local_38;
  FUN_0001eed8();
  if (*(int *)PTR_DAT_0043b418 != 0) {
    FUN_00098698();
    *unaff_r8 = local_4;
    unaff_r8[1] = extraout_r3;
    unaff_r8[2] = *(int *)(local_8 + 0x5c);
    local_38 = extraout_r3;
  }
  *(int *)(local_38 + 0x1c) = local_4;
  *(int *)(local_8 + 0x5c) = local_38;
  local_18 = local_8;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_28 == 0) {
    printerApi_service_k3c_Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).SetResonanceByEndpoint @ 0043b42c (size 664) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_service_k3c_wrapper___K3cwrapper__SetResonanceByEndpoint(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_ffffff70;
  undefined *puVar4;
  undefined4 local_8c;
  undefined4 *local_80;
  int local_74;
  undefined *local_64;
  undefined4 local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined1 local_4c [24];
  undefined1 auStack_34 [24];
  undefined4 local_1c;
  undefined4 local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined *local_c;
  undefined4 local_8;
  int local_4;
  
  while (&local_14 <= *(undefined ***)(unaff_r10 + 8)) {
    unaff_lr = 0x43b6c0;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  local_18 = in_stack_ffffff70;
  FUN_0001cec0();
  local_1c = local_8c;
  FUN_0008e7bc();
  *local_80 = PTR_DAT_0043b6d0;
  puVar3 = local_80;
  if (*(int *)PTR_DAT_0043b6d4 != 0) {
    puVar3 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_1c;
    unaff_r8[1] = puVar3[1];
  }
  puVar3[1] = local_1c;
  puVar4 = PTR_DAT_0043b6d8;
  internal_runtime_atomic_Xadd64();
  FUN_00098a20(0,&local_64,local_80,1,unaff_lr,puVar4);
  local_64 = PTR_DAT_0043b6dc;
  local_60 = 0x16;
  local_5c = PTR_DAT_0043b6c8;
  local_58 = local_18;
  FUN_0001eed8();
  local_4 = 1;
  FUN_0001cd7c();
  iVar1 = local_4;
  puVar4 = PTR_DAT_0043b6e8;
  printerApi_service_k3c___K3c__CallContext();
  if (local_74 != 0) {
    return;
  }
  if (*(int *)(local_4 + 0x14) == 0) {
    return;
  }
  uVar2 = FUN_00098e0c(local_4,*(int *)(local_4 + 0x14),auStack_34);
  FUN_00098e0c(uVar2,auStack_34,local_4c);
  FUN_00098a28(0,&local_14);
  FUN_0008a578();
  local_14 = PTR_SUB_0043b6ec;
  local_10 = in_stack_0000000c;
  FUN_0008a578();
  local_c = PTR_SUB_0043b6ec;
  local_8 = in_stack_0000000c;
  FUN_001331ac();
  FUN_0001eed8();
  puVar3 = (undefined4 *)&DAT_00000007;
  _DAT_0000000b = iVar1;
  if (*(int *)PTR_DAT_0043b6d4 != 0) {
    puVar3 = (undefined4 *)FUN_00098678();
    *unaff_r8 = puVar4;
  }
  *puVar3 = puVar4;
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishUserBind @ 0043b6fc (size 368) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishUserBind(void)

{
  undefined4 *extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 *local_38;
  int local_28;
  undefined *local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00098a20(0,&local_20);
  local_20 = PTR_DAT_0043b870;
  local_1c = 0x15;
  FUN_0001eed8();
  local_4 = local_38;
  FUN_0001eed8();
  local_8 = local_38;
  FUN_0001eed8();
  local_38[1] = 4;
  *local_38 = PTR_s_bindMQTT_ID__s_dmqtticmpigmpftps_0077367d_0x113_0043b880;
  local_38[3] = in_stack_0000000c;
  if (*(int *)PTR_DAT_0043b884 != 0) {
    FUN_000986c8();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = in_stack_00000010;
    unaff_r8[2] = extraout_r2;
    unaff_r8[3] = local_8[5];
    unaff_r8[4] = local_8;
    unaff_r8[5] = local_4[0x17];
    local_38 = extraout_r2;
  }
  local_38[2] = in_stack_00000008;
  local_38[5] = in_stack_00000014;
  local_38[4] = in_stack_00000010;
  local_8[5] = local_38;
  local_4[0x17] = local_8;
  local_18 = local_4;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_28 == 0) {
    printerApi_service_k3c_Publish();
    return;
  }
  return;
}



/* printerApi/service/k3c_wrapper.(*K3cwrapper).PublishUserUnBind @ 0043b88c (size 344) */

void printerApi_service_k3c_wrapper___K3cwrapper__PublishUserUnBind(void)

{
  undefined4 *extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *local_38;
  int local_28;
  undefined *local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00098a20(0,&local_20);
  local_20 = PTR_DAT_0043b9e8;
  local_1c = 0x15;
  FUN_0001eed8();
  local_4 = local_38;
  FUN_0001eed8();
  local_8 = local_38;
  FUN_0001eed8();
  local_38[1] = 6;
  *local_38 = PTR_DAT_0043b9f8;
  local_38[3] = 0;
  local_38[2] = 0;
  local_38[5] = 0;
  local_38[4] = 0;
  if (*(int *)PTR_DAT_0043b9fc != 0) {
    FUN_000986a8();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = local_8[5];
    unaff_r8[2] = local_8;
    unaff_r8[3] = local_4[0x17];
    local_38 = extraout_r2;
  }
  local_8[5] = local_38;
  local_4[0x17] = local_8;
  local_18 = local_4;
  FUN_0001cd7c();
  FUN_001707f4();
  if (local_28 == 0) {
    printerApi_service_k3c_Publish();
    return;
  }
  return;
}



