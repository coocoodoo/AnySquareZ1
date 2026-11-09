// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/common/pprof   functions: 2
/* k3c/common/pprof.Run @ 00425c3c (size 1580) */

void k3c_common_pprof_Run(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined *in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  undefined4 local_58;
  undefined4 *local_48;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  if (in_stack_00000010 != 0) {
    FUN_0015185c();
    FUN_0007636c();
  }
  FUN_0007636c();
  FUN_0037cc58();
  FUN_0007636c();
  FUN_0037cc58();
  FUN_0007636c();
  FUN_0037cc58();
  FUN_0007636c();
  FUN_0037cc58();
  FUN_0007636c();
  FUN_0037cc58();
  FUN_0008f77c();
  FUN_0007636c();
  FUN_0037cb90();
  FUN_0008f77c();
  FUN_0007636c();
  FUN_0037cb90();
  FUN_0008f77c();
  FUN_0007636c();
  FUN_0037cb90();
  FUN_0008f77c();
  FUN_0007636c();
  FUN_0037cb90();
  FUN_0008f77c();
  FUN_0007636c();
  FUN_0037cb90();
  FUN_0008f77c();
  FUN_0007636c();
  FUN_0037cb90();
  puVar1 = in_stack_00000004;
  iVar3 = in_stack_00000008;
  if (in_stack_00000008 == 0) {
    puVar1 = PTR_s__6060gcodeok__sM8844_helpReady___00820821_0x5cd_004262d0;
    iVar3 = 5;
  }
  FUN_00022cf8();
  FUN_0009de7c(0);
  if (*(int *)PTR_DAT_004262d8 != 0) {
    FUN_0009db84();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *local_48;
    unaff_r8[2] = local_58;
    unaff_r8[3] = local_48[3];
  }
  *local_48 = puVar1;
  local_48[1] = iVar3;
  local_48[2] = PTR_DAT_004262dc;
  local_48[3] = local_58;
  FUN_00022cf8();
  *local_48 = PTR_k3c_common_pprof_Run_func1_004262e4;
  puVar2 = local_48;
  if (*(int *)PTR_DAT_004262d8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = local_48;
    unaff_r8[1] = puVar1;
  }
  puVar2[1] = local_48;
  puVar2[3] = iVar3;
  puVar2[2] = puVar1;
  FUN_00062dd0();
  FUN_0013bb30();
  return;
}



/* k3c/common/pprof.Run.func1 @ 004262f8 (size 320) */

void k3c_common_pprof_Run_func1(void)

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
    FUN_0009bf00();
  }
  FUN_0037e2a8();
  if (iStack_38 == 0) {
    bVar2 = 0;
  }
  else if (*DAT_0042643c == iStack_38) {
    iVar3 = *DAT_00426440;
    iStack_38 = iStack_34;
    FUN_00019b34();
    bVar2 = bStack_30 ^ 1;
    iStack_34 = iVar3;
  }
  else {
    bVar2 = 1;
  }
  if (bVar2 != 0) {
    (**(code **)(iVar1 + 0xc))();
    iStack_4 = iStack_38;
    FUN_0009df04(0,&uStack_14);
    FUN_0008f77c();
    uStack_14 = DAT_00426444;
    iStack_10 = iStack_34;
    FUN_0008f77c();
    uStack_c = DAT_00426444;
    iStack_8 = iStack_34;
    k3c_common_logger_Errorf();
  }
  return;
}



