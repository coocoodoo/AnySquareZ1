// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/pprof   functions: 2
/* printerApi/common/pprof.Run @ 00646054 (size 1600) */

void printerApi_common_pprof_Run(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  undefined4 *local_44;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  printerApi_common_logger_Debug();
  FUN_0001eed8();
  if (in_stack_00000010 != 0) {
    FUN_00148b2c();
    FUN_000715a4();
  }
  FUN_000715a4();
  FUN_00391324();
  FUN_000715a4();
  FUN_00391324();
  FUN_000715a4();
  FUN_00391324();
  FUN_000715a4();
  FUN_00391324();
  FUN_000715a4();
  FUN_00391324();
  FUN_0008a578();
  FUN_000715a4();
  FUN_0039125c();
  FUN_0008a578();
  FUN_000715a4();
  FUN_0039125c();
  FUN_0008a578();
  FUN_000715a4();
  FUN_0039125c();
  FUN_0008a578();
  FUN_000715a4();
  FUN_0039125c();
  FUN_0008a578();
  FUN_000715a4();
  FUN_0039125c();
  FUN_0008a578();
  FUN_000715a4();
  FUN_0039125c();
  uVar1 = in_stack_00000004;
  iVar3 = in_stack_00000008;
  if (in_stack_00000008 == 0) {
    uVar1 = DAT_00646704;
    iVar3 = 6;
  }
  FUN_0001eed8();
  FUN_000989a0(0);
  if (*(int *)PTR_DAT_0064670c != 0) {
    FUN_000986a8();
    *unaff_r8 = uVar1;
    unaff_r8[1] = *local_44;
    unaff_r8[2] = 1;
    unaff_r8[3] = local_44[3];
  }
  *local_44 = uVar1;
  local_44[1] = iVar3;
  local_44[2] = PTR_DAT_00646710;
  local_44[3] = 1;
  FUN_0001eed8();
  *local_44 = PTR_printerApi_common_pprof_Run_func1_00646718;
  puVar2 = local_44;
  if (*(int *)PTR_DAT_0064670c != 0) {
    puVar2 = (undefined4 *)FUN_00098688();
    *unaff_r8 = local_44;
    unaff_r8[1] = uVar1;
  }
  puVar2[1] = local_44;
  puVar2[3] = iVar3;
  puVar2[2] = uVar1;
  FUN_0005e168();
  printerApi_common_logger_Debug();
  return;
}



/* printerApi/common/pprof.Run.func1 @ 00646720 (size 320) */

void printerApi_common_pprof_Run_func1(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int unaff_r10;
  int iStack_38;
  int iStack_34;
  byte bStack_30;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar1 = iStack_38;
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  FUN_00392974();
  if (iStack_38 == 0) {
    bVar2 = 0;
  }
  else if (*DAT_00646864 == iStack_38) {
    iVar3 = *DAT_00646868;
    iStack_38 = iStack_34;
    FUN_000169b8();
    bVar2 = bStack_30 ^ 1;
    iStack_34 = iVar3;
  }
  else {
    bVar2 = 1;
  }
  if (bVar2 != 0) {
    (**(code **)(iVar1 + 0xc))();
    iStack_4 = iStack_38;
    FUN_00098a28(0,&uStack_14);
    FUN_0008a578();
    uStack_14 = DAT_0064686c;
    iStack_10 = iStack_34;
    FUN_0008a578();
    uStack_c = DAT_0064686c;
    iStack_8 = iStack_34;
    printerApi_common_logger_Errorf();
  }
  return;
}



