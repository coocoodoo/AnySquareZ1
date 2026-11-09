// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/serialhdl   functions: 59
/* k3c/internal/pkg/serialhdl.NewSerialReader @ 004836f8 (size 920) */

void k3c_internal_pkg_serialhdl_NewSerialReader(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined *extraout_r1_02;
  undefined *puVar4;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  undefined4 *puVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *in_stack_ffffffe0;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x483a8c;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  if (*(int *)PTR_DAT_00483a98 != 0) {
    FUN_0009db64();
    *unaff_r8 = in_stack_00000004;
    unaff_r8[1] = in_stack_00000008;
    in_stack_ffffffe0 = extraout_r1;
  }
  *in_stack_ffffffe0 = in_stack_00000004;
  in_stack_ffffffe0[2] = in_stack_0000000c;
  in_stack_ffffffe0[1] = in_stack_00000008;
  in_stack_ffffffe0[3] = 0;
  in_stack_ffffffe0[4] = 0;
  uVar2 = in_stack_0000000c;
  k3c_internal_pkg_msgproto_NewMessageParser();
  if (*(int *)PTR_DAT_00483a98 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = in_stack_ffffffe0[5];
    in_stack_ffffffe4 = extraout_r1_00;
  }
  in_stack_ffffffe0[5] = in_stack_ffffffe4;
  puVar3 = in_stack_ffffffe0;
  if (*(int *)PTR_DAT_00483a9c == 0) {
    if (*(int *)PTR_DAT_00483a98 != 0) {
      uVar6 = FUN_0009db54(in_stack_ffffffe0,*(undefined4 *)PTR_DAT_00483a9c);
      puVar3 = (undefined4 *)uVar6;
      *unaff_r8 = (int)((ulonglong)uVar6 >> 0x20);
    }
    *(undefined **)PTR_DAT_00483a9c = PTR_DAT_00483aa0;
  }
  uVar6 = CONCAT44(*(undefined4 *)PTR_DAT_00483a9c,puVar3);
  puVar3[6] = PTR_DAT_00483aa4;
  if (*(int *)PTR_DAT_00483a98 != 0) {
    uVar6 = FUN_0009db74();
    *unaff_r8 = (int)((ulonglong)uVar6 >> 0x20);
    unaff_r8[1] = *(undefined4 *)((int)uVar6 + 0x1c);
    unaff_r8[2] = *(undefined4 *)((int)uVar6 + 0x2c);
  }
  iVar1 = (int)uVar6;
  *(int *)(iVar1 + 0x1c) = (int)((ulonglong)uVar6 >> 0x20);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  k3c_internal_pkg_chelper__Cfunc_serialqueue_alloc_commandqueue(iVar1);
  FUN_00020ce0();
  in_stack_ffffffe0[8] = PTR_DAT_00483aa8;
  puVar3 = in_stack_ffffffe0;
  if (*(int *)PTR_DAT_00483a98 != 0) {
    uVar2 = FUN_0009db64();
    *unaff_r8 = uVar2;
    unaff_r8[1] = extraout_r2[9];
    puVar3 = extraout_r2;
  }
  puVar3[9] = uVar2;
  puVar7 = (undefined4 *)&SUB_00001000;
  puVar4 = PTR_DAT_00483aac;
  FUN_000986b8();
  in_stack_ffffffe0[0xd] = 0x1000;
  in_stack_ffffffe0[0xe] = 0x1000;
  puVar3 = in_stack_ffffffe0;
  if (*(int *)PTR_DAT_00483a98 != 0) {
    in_stack_ffffffe8 = FUN_0009db64();
    *unaff_r8 = in_stack_ffffffe8;
    unaff_r8[1] = extraout_r2_00[0xc];
    puVar3 = extraout_r2_00;
  }
  puVar3[0xc] = in_stack_ffffffe8;
  uVar2 = FUN_0009defc(0,puVar3 + 0xf);
  *(undefined4 *)(extraout_r2_01 + 0x54) = 0;
  iVar1 = extraout_r2_01;
  if (*(int *)PTR_DAT_00483a98 != 0) {
    FUN_0009db54(uVar2,*(undefined4 *)(extraout_r2_01 + 0x58));
    *unaff_r8 = extraout_r1_01;
    iVar1 = extraout_r2_02;
  }
  *(undefined4 *)(iVar1 + 0x58) = 0;
  FUN_000908bc();
  if (*(int *)PTR_DAT_00483a98 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_02;
    unaff_r8[1] = in_stack_ffffffe0[0x17];
    puVar4 = extraout_r1_02;
  }
  in_stack_ffffffe0[0x17] = puVar4;
  FUN_00022cf8();
  *puVar7 = PTR_k3c_internal_pkg_serialhdl___SerialReader___handle_unknown_init_fm_00483ab4;
  if (*(int *)PTR_DAT_00483a98 != 0) {
    puVar7 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = in_stack_ffffffe0;
  }
  puVar7[1] = in_stack_ffffffe0;
  puVar3 = (undefined4 *)PTR_DAT_00483ab8;
  k3c_internal_pkg_serialhdl___SerialReader__Register_response();
  FUN_00022cf8();
  *puVar3 = PTR_k3c_internal_pkg_serialhdl___SerialReader__handle_output_fm_00483ac0;
  if (*(int *)PTR_DAT_00483a98 != 0) {
    puVar3 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = in_stack_ffffffe0;
  }
  puVar3[1] = in_stack_ffffffe0;
  uVar2 = 7;
  uVar9 = 0;
  uVar10 = 0;
  puVar7 = in_stack_ffffffe0;
  puVar8 = (undefined4 *)PTR_DAT_00483ac4;
  puVar4 = PTR_s__outputandroidwindowsopenbsdsola_008216f7_0xc29_00483ac8;
  k3c_internal_pkg_serialhdl___SerialReader__Register_response();
  in_stack_ffffffe0[0x18] = 0;
  in_stack_ffffffe0[0x19] = 0;
  puVar5 = in_stack_ffffffe0 + 0x1a;
  if (*(int *)PTR_DAT_00483a98 != 0) {
    puVar7 = (undefined4 *)PTR_DAT_00483acc;
    puVar8 = puVar5;
    FUN_00026bd4();
  }
  uVar2 = FUN_0009df00(0,puVar5,in_stack_ffffffe0,puVar5,UNRECOVERED_JUMPTABLE,puVar7,puVar8,puVar3,
                       puVar4,uVar2,uVar9,uVar10);
  *(undefined4 *)(extraout_r2_03 + 0x7c) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00483a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).timeoutThread @ 00483ad0 (size 460) */

void k3c_internal_pkg_serialhdl___SerialReader__timeoutThread(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_r10;
  int in_stack_00000004;
  int local_68;
  undefined4 *local_64;
  uint local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  undefined4 local_24;
  uint local_20;
  int local_1c;
  int local_18;
  undefined1 auStack_14 [20];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  uVar1 = FUN_001160a8();
  uVar1 = FUN_0009e2f0(uVar1,&local_68,auStack_14);
  FUN_0009e2f0(uVar1,auStack_14,&local_38);
  if ((local_34 & 0x80000000) != 0) {
    uVar3 = (local_38 & 0x7fffffff) >> 0x1e | (local_38 >> 0x1f | local_34 << 1) << 1;
    local_30 = uVar3 + DAT_00483ca0;
    local_2c = ((local_34 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar3,DAT_00483ca0);
  }
  local_54 = local_30 + DAT_00483ca4;
  local_50 = local_2c + -0xf + (uint)CARRY4(local_30,DAT_00483ca4);
  while( true ) {
    while( true ) {
      uVar1 = FUN_001160a8();
      uVar1 = FUN_0009e2f0(uVar1,&local_68,auStack_14);
      FUN_0009e2f0(uVar1,auStack_14,&local_4c);
      iVar2 = local_40;
      uVar3 = local_44;
      if ((local_48 & 0x80000000) != 0) {
        uVar3 = (local_4c & 0x7fffffff) >> 0x1e | (local_4c >> 0x1f | local_48 << 1) << 1;
        iVar2 = ((local_48 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar3,DAT_00483ca0);
        uVar3 = uVar3 + DAT_00483ca0;
      }
      iVar4 = (iVar2 - (local_50 + (uint)(uVar3 < local_54))) + -0xf +
              (uint)CARRY4(uVar3 - local_54,DAT_00483ca4);
      if (iVar4 < 1 && (iVar4 != 0 || (uVar3 - local_54) + DAT_00483ca4 < 3)) break;
      local_50 = iVar2 + -0xf + (uint)CARRY4(uVar3,DAT_00483ca4);
      local_24 = DAT_00483cac;
      local_18 = in_stack_00000004;
      local_68 = in_stack_00000004 + 0x68;
      local_64 = &local_24;
      local_54 = uVar3 + DAT_00483ca4;
      local_20 = uVar3 + DAT_00483ca4;
      local_1c = local_50;
      FUN_000aa704();
    }
    if (*(int *)(in_stack_00000004 + 0x20) == 0) break;
    local_68 = DAT_00483ca8;
    local_64 = (undefined4 *)0x0;
    FUN_0009a76c();
  }
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).timeoutThread.func1 @ 00483cb0 (size 352) */

void k3c_internal_pkg_serialhdl___SerialReader__timeoutThread_func1(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r7;
  undefined4 *puVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  bool bVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      bVar9 = *(undefined **)((int)register0x00000054 + 0xc) == PTR_DAT_00483e14;
      if (bVar9) {
        uVar1 = *(uint *)(unaff_r7 + 4);
        iVar2 = *(int *)(unaff_r7 + 8);
        iVar3 = *(int *)((int)register0x00000054 + 0x10);
        uVar4 = *(uint *)(iVar3 + 0x18);
        iVar5 = *(int *)(iVar3 + 0x1c);
        puVar7 = *(undefined4 **)(unaff_r7 + 0xc);
        *(undefined4 **)((int)register0x00000054 + -0x14) = puVar7;
        iVar5 = iVar5 + (uint)(uVar1 < uVar4);
        if ((iVar2 != iVar5 && -1 < iVar2 - iVar5 || iVar2 == iVar5 && 0x3c < uVar1 - uVar4) ||
           (*(char *)*puVar7 == '\0')) {
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + 8);
          uVar6 = *(undefined4 *)(iVar3 + 0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x2c) = *(undefined4 *)(iVar3 + 0x18);
          *(undefined4 *)((int)register0x00000054 + -0x28) = uVar6;
          FUN_0008f6c0();
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00483e18;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_00483e1c;
          *(undefined4 *)((int)register0x00000054 + -0x28) = 0x23;
          *(undefined1 **)((int)register0x00000054 + -0x24) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x20) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x1c) = 2;
          k3c_internal_pkg_logger_Warnf();
          *(int *)((int)register0x00000054 + -0x2c) =
               *(int *)((int)register0x00000054 + -0x14) + 0x68;
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + 8);
          FUN_000a9a78();
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               **(undefined4 **)((int)register0x00000054 + -0x14);
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
          k3c_internal_pkg_reactor___Reactor__Async_complete();
        }
        *(undefined1 *)((int)register0x00000054 + 0x14) = 1;
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x2c) =
           *(undefined **)((int)register0x00000054 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_00483e14;
      *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_00483e20;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if (bVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x483e0c;
    param_1 = FUN_0009bf00(param_1);
  } while( true );
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).bg_thread @ 00483e24 (size 56) */

void k3c_internal_pkg_serialhdl___SerialReader__bg_thread(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined1 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x483e58;
    FUN_0009bf64();
  }
  do {
    k3c_internal_pkg_serialhdl___SerialReader__taskThread();
  } while (uStack_4 == '\0');
                    /* WARNING: Could not recover jumptable at 0x00483e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).taskThread @ 00483e5c (size 2020) */

/* WARNING: Removing unreachable block (ram,0x00483f6c) */

void k3c_internal_pkg_serialhdl___SerialReader__taskThread(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *extraout_r2;
  undefined1 *puVar9;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  bool bVar10;
  int in_stack_00000004;
  uint in_stack_ffffff2c;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 *local_c8;
  undefined4 local_c4;
  uint local_5c;
  undefined4 *local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined *local_40 [2];
  int local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_14;
  int local_10;
  undefined *local_c;
  undefined *local_8;
  undefined **local_4;
  
  while (&local_5c <= *(uint **)(unaff_r10 + 8)) {
    unaff_lr = 0x48463c;
    FUN_0009bf64();
  }
  local_4 = (undefined **)0x0;
  local_8 = PTR_DAT_00484644;
  FUN_00022cf8(0);
  local_40[0] = PTR_k3c_internal_pkg_serialhdl___SerialReader__taskThread_func1_0048464c;
  local_38 = in_stack_00000004;
  local_4 = local_40;
  local_5c = in_stack_ffffff2c;
LAB_00483ee4:
  while( true ) {
    uVar1 = local_5c;
    iVar7 = *(int *)(in_stack_00000004 + 0x28);
    if (iVar7 == 0) {
      (*(code *)*local_4)();
      k3c_internal_pkg_util_sys_CatchPanic();
      return;
    }
    puVar11 = PTR_DAT_00484650;
    k3c_internal_pkg_chelper_Serialqueue_pull();
    if (*(int *)(local_5c + 0x40) < 0) {
      (*(code *)*local_4)();
      k3c_internal_pkg_util_sys_CatchPanic();
      return;
    }
    bVar10 = *(int *)(local_5c + 0x5c) == 0;
    if (bVar10 && (!bVar10 || *(int *)(local_5c + 0x58) == 0)) break;
    FUN_000908bc();
    local_54 = iVar7;
    FUN_0008f6c0();
    puVar6 = PTR_DAT_00484658;
    local_c = puVar11;
    FUN_00093a08();
    *local_c8 = PTR_DAT_0048465c;
    puVar2 = local_c8;
    if (*(int *)PTR_DAT_00484660 != 0) {
      puVar2 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = local_c;
      unaff_r8[1] = puVar2[1];
    }
    puVar2[1] = local_c;
    FUN_0008f6c0();
    local_c = puVar6;
    FUN_00093a08();
    *local_c8 = PTR_DAT_0048465c;
    puVar2 = local_c8;
    if (*(int *)PTR_DAT_00484660 != 0) {
      puVar2 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = local_c;
      unaff_r8[1] = puVar2[1];
    }
    puVar2[1] = local_c;
    local_10 = in_stack_00000004 + 0x68;
    FUN_000a8eec();
    if ((char)local_c4 != '\0') {
      local_48 = local_c8;
      FUN_000a9a78();
      if (PTR_DAT_0048466c != &DAT_0000000d) goto LAB_00484614;
      k3c_internal_pkg_reactor___Reactor__Async_complete();
    }
  }
  FUN_000908bc();
  if (-1 < *(int *)(local_5c + 0x40)) {
    FUN_00017ffc();
    if (((uVar1 & 0xff) == 0) && (puVar11 <= (undefined *)-local_5c)) goto code_r0x0048418c;
    goto LAB_0048460c;
  }
  goto LAB_00484610;
code_r0x0048418c:
  iVar7 = *(int *)(local_5c + 0x40);
  FUN_000986b8();
  puVar8 = *(undefined1 **)(local_5c + 0x40);
  for (puVar9 = (undefined1 *)0x0; (int)puVar9 < iVar7; puVar9 = puVar9 + 1) {
    if (puVar8 <= puVar9) goto LAB_00484600;
    puVar9[uVar1] = puVar9[local_5c];
  }
  k3c_internal_pkg_msgproto___MessageParser__Parse();
  local_58 = local_c8;
  FUN_0008f6c0();
  puVar11 = PTR_DAT_00484658;
  local_c = puVar8;
  FUN_00093a08();
  *local_c8 = PTR_DAT_0048465c;
  puVar2 = local_c8;
  if (*(int *)PTR_DAT_00484660 != 0) {
    puVar2 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = local_c;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = local_c;
  FUN_0008f6c0();
  local_c = puVar11;
  FUN_00093a08();
  *local_c8 = PTR_DAT_0048465c;
  puVar2 = local_c8;
  if (*(int *)PTR_DAT_00484660 != 0) {
    puVar2 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = local_c;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = local_c;
  FUN_00093560();
  puVar11 = PTR_DAT_0048467c;
  if ((char)local_c4 == '\0') goto LAB_00483ee4;
  puVar9 = &DAT_0000000d;
  if ((undefined *)*local_c8 != PTR_DAT_00484678) goto LAB_004845ec;
  local_50 = *(undefined4 *)local_c8[1];
  uVar4 = ((undefined4 *)local_c8[1])[1];
  FUN_00093560();
  if ((char)local_c4 == '\0') {
LAB_00484420:
    local_14 = in_stack_00000004 + 0x3c;
    FUN_000ac304();
    iVar7 = *(int *)(in_stack_00000004 + 0x5c);
    uVar4 = local_50;
    FUN_00025f60();
    puVar6 = (undefined *)*local_c8;
    local_44 = (undefined4 *)local_c8[1];
    FUN_000ac3e4();
    if (puVar6 == (undefined *)0x0) goto LAB_00483ee4;
    if (puVar6 == PTR_DAT_00484680) {
      (*(code *)*local_44)();
      if (iVar7 != 0) {
        local_4c = uVar4;
        FUN_0009df04(0,&local_34);
        FUN_0008f77c();
        local_34 = PTR_DAT_00484678;
        if (iVar7 == 0) {
          local_2c = 0;
        }
        else {
          local_2c = *(undefined4 *)(iVar7 + 4);
        }
        local_28 = local_4c;
        local_c8 = (undefined4 *)0x2;
        local_30 = uVar4;
        k3c_internal_pkg_logger_Errorf();
      }
      goto LAB_00483ee4;
    }
    FUN_000209b4();
  }
  else if ((undefined *)*local_c8 == PTR_DAT_00484668) {
    uVar5 = *(undefined4 *)local_c8[1];
    uVar3 = ((undefined4 *)local_c8[1])[1];
    uVar12 = 10;
    FUN_000bcf0c();
    FUN_0009df04(0,&local_24,local_c8,3,unaff_lr,uVar5,uVar3,uVar12);
    local_24 = local_50;
    local_c8 = (undefined4 *)0x0;
    local_20 = uVar4;
    FUN_0014f8fc();
    local_50 = local_c4;
    goto LAB_00484420;
  }
  FUN_000209b4();
  puVar9 = puVar11;
LAB_004845ec:
  FUN_000209b4();
  puVar8 = extraout_r2;
LAB_00484600:
  FUN_0009dbd4(puVar9,puVar8);
LAB_0048460c:
  local_5c = FUN_0008a988();
LAB_00484610:
  FUN_0008a988(local_5c);
LAB_00484614:
  uVar4 = FUN_000209b4();
  FUN_00054344(uVar4);
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).taskThread.func1 @ 0048468c (size 144) */

void k3c_internal_pkg_serialhdl___SerialReader__taskThread_func1(void)

{
  undefined4 uVar1;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 *local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  uVar1 = *(undefined4 *)(unaff_r7 + 8);
  FUN_00022cf8();
  *local_14 = DAT_00484724;
  if (*DAT_00484728 != 0) {
    local_14 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = uVar1;
  }
  local_14[1] = uVar1;
  FUN_0002d31c();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).taskThread.func1.1 @ 00484734 (size 120) */

/* WARNING: Removing unreachable block (ram,0x0048475c) */

void k3c_internal_pkg_serialhdl___SerialReader__taskThread_func1_1(void)

{
  int iVar1;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar2;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  iVar1 = *(int *)(unaff_r7 + 4);
  if (*(int *)(iVar1 + 0x20) != 0) {
    k3c_internal_pkg_serialhdl___SerialReader__taskThread_func1_1_Serialqueue_free_commandqueue_1
              (iVar1);
    *(undefined4 *)(iVar1 + 0x20) = 0;
    if (*DAT_004847b0 != 0) {
      uVar2 = FUN_0009db54(*(undefined4 *)(iVar1 + 0x24));
      iVar1 = (int)((ulonglong)uVar2 >> 0x20);
      *unaff_r8 = (int)uVar2;
    }
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).taskThread.func1.1.Serialqueue_free_commandqueue.1 @ 004847b4 (size 132) */

void k3c_internal_pkg_serialhdl___SerialReader__taskThread_func1_1_Serialqueue_free_commandqueue_1
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
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      bVar3 = *(int *)((int)register0x00000054 + 4) == DAT_0048483c;
      if (bVar3) {
        uVar1 = **(undefined4 **)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
        *(int *)((int)register0x00000054 + -0x18) = DAT_0048483c;
        *(undefined1 **)((int)register0x00000054 + -0x14) =
             (undefined1 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
        FUN_0008ee8c();
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -8);
        k3c_internal_pkg_chelper__Cfunc_serialqueue_free_commandqueue();
        return;
      }
      *(int *)((int)register0x00000054 + -0x18) = *(int *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x14) = DAT_0048483c;
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00484840;
      unaff_lr = 0x484828;
      uVar4 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x484834;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/serialhdl.(*SerialReader)._get_identify_data @ 00484844 (size 836) */

void k3c_internal_pkg_serialhdl___SerialReader___get_identify_data(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *extraout_r1;
  int *piVar5;
  undefined *extraout_r2;
  undefined *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int unaff_r10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  undefined1 uVar12;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar11 = (undefined1 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x60) = unaff_lr;
      uVar1 = 0;
      uVar2 = 0;
      puVar3 = PTR_DAT_00484b8c;
      while( true ) {
        while( true ) {
          *(undefined **)((int)register0x00000054 + -0x20) = puVar3;
          *(uint *)((int)register0x00000054 + -0x34) = uVar1;
          *(uint *)((int)register0x00000054 + -0x30) = uVar2;
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
          *(uint *)((int)register0x00000054 + -0x5c) = uVar1;
          FUN_00020ce0();
          *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00484b90;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00484b90;
          *(undefined **)((int)register0x00000054 + -4) = PTR_DAT_00484b94;
          *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00484b98;
          *(undefined4 *)((int)register0x00000054 + -0x58) = 0x1b;
          *(undefined1 **)((int)register0x00000054 + -0x54) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x50) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = 2;
          FUN_0013b72c();
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_00484b9c;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = 0x11;
          k3c_internal_pkg_serialhdl___SerialReader__Send_with_response();
          if (*(int *)((int)register0x00000054 + -0x44) != 0) {
            pcVar4 = *(code **)(*(int *)((int)register0x00000054 + -0x44) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x5c) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            (*pcVar4)();
            *(undefined4 *)((int)register0x00000054 + -0x18) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x5c) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            *(undefined4 *)((int)register0x00000054 + -0x58) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00484bb4;
            *(undefined4 *)((int)register0x00000054 + -0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            *(undefined1 **)((int)register0x00000054 + -0x5c) =
                 (undefined1 *)((int)register0x00000054 + -0x18);
            *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x54) = 1;
            k3c_internal_pkg_logger_Error();
            *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00484ba0;
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(undefined **)((int)register0x00000054 + -0x54) =
               PTR_s_offset_s__s__s___sPULLUPDEV_IDse_008216f7_0x4e_00484ba4;
          *(undefined4 *)((int)register0x00000054 + -0x50) = 6;
          FUN_00025f60();
          puVar3 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x4c);
          uVar12 = puVar3 == PTR_DAT_00484ba8;
          puVar6 = PTR_DAT_00484ba8;
          if (!(bool)uVar12) goto LAB_00484b64;
          puVar7 = (uint *)(*(undefined4 **)((int)register0x00000054 + -0x4c))[1];
          uVar1 = *(uint *)((int)register0x00000054 + -0x34);
          if (puVar7[1] == (int)uVar1 >> 0x1f && uVar1 == *puVar7) break;
          uVar2 = *(uint *)((int)register0x00000054 + -0x30);
          puVar3 = *(undefined **)((int)register0x00000054 + -0x20);
        }
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00484ba0;
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined **)((int)register0x00000054 + -0x54) =
             PTR_s_data_of_____<__GOGC]___s___,r2__p_00820821_0x12d_00484bb0;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 4;
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x48) == '\0') {
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          FUN_0008f820();
          *(undefined **)((int)register0x00000054 + 0x10) = PTR_DAT_00484bac;
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          return;
        }
        puVar3 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x4c);
        piVar5 = (int *)(*(undefined4 **)((int)register0x00000054 + -0x4c))[1];
        if (puVar3 != PTR_DAT_00484bac) break;
        if (piVar5[1] == 0) {
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          FUN_0008f820();
          *(undefined **)((int)register0x00000054 + 0x10) = PTR_DAT_00484bac;
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          return;
        }
        if (puVar3 != PTR_DAT_00484bac) break;
        iVar8 = *piVar5;
        *(int *)((int)register0x00000054 + -0x1c) = iVar8;
        iVar9 = piVar5[1];
        *(int *)((int)register0x00000054 + -0x28) = iVar9;
        uVar1 = *(uint *)((int)register0x00000054 + -0x34);
        puVar3 = *(undefined **)((int)register0x00000054 + -0x20);
        uVar2 = *(uint *)((int)register0x00000054 + -0x30);
        for (iVar10 = 0; iVar10 < iVar9; iVar10 = iVar10 + 1) {
          uVar1 = uVar1 + 1;
          uVar12 = *(undefined1 *)(iVar8 + iVar10);
          if (uVar2 < uVar1) {
            *(int *)((int)register0x00000054 + -0x2c) = iVar10;
            *(undefined1 *)((int)register0x00000054 + -0x35) = uVar12;
            *(undefined **)((int)register0x00000054 + -0x5c) = puVar3;
            *(uint *)((int)register0x00000054 + -0x58) = uVar1;
            *(uint *)((int)register0x00000054 + -0x54) = uVar2;
            *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
            *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00484bb8;
            FUN_000987f4();
            puVar3 = *(undefined **)((int)register0x00000054 + -0x48);
            uVar1 = *(uint *)((int)register0x00000054 + -0x44);
            uVar2 = *(uint *)((int)register0x00000054 + -0x40);
            iVar8 = *(int *)((int)register0x00000054 + -0x1c);
            iVar9 = *(int *)((int)register0x00000054 + -0x28);
            iVar10 = *(int *)((int)register0x00000054 + -0x2c);
            uVar12 = *(undefined1 *)((int)register0x00000054 + -0x35);
          }
          puVar3[uVar1 - 1] = uVar12;
        }
      }
      uVar12 = puVar3 == PTR_DAT_00484bac;
      *(undefined **)((int)register0x00000054 + -0x5c) = puVar3;
      *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00484bac;
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00484bbc;
      FUN_000209b4();
      puVar3 = extraout_r1;
      puVar6 = extraout_r2;
LAB_00484b64:
      *(undefined **)((int)register0x00000054 + -0x5c) = puVar3;
      *(undefined **)((int)register0x00000054 + -0x58) = puVar6;
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00484bbc;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x60);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar11;
      }
    }
    unaff_lr = 0x484b84;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/serialhdl.(*SerialReader)._start_session @ 00484bc0 (size 1272) */

/* WARNING: Removing unreachable block (ram,0x00484fd4) */

void k3c_internal_pkg_serialhdl___SerialReader___start_session(undefined4 param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r2;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  double dVar10;
  undefined8 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      uVar11 = CONCAT44(*(int *)((int)register0x00000054 + 4),
                        *(undefined4 *)((int)register0x00000054 + 8));
      *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc) =
           *(undefined4 *)((int)register0x00000054 + 8);
      if (*(int *)PTR_DAT_004850bc == 0) {
        uVar4 = *(undefined4 *)((int)register0x00000054 + 0xc);
      }
      else {
        uVar11 = FUN_0009db64();
        uVar4 = *(undefined4 *)((int)register0x00000054 + 0xc);
        *unaff_r8 = uVar4;
        unaff_r8[1] = *(undefined4 *)((int)((ulonglong)uVar11 >> 0x20) + 0x10);
      }
      *(undefined4 *)((int)((ulonglong)uVar11 >> 0x20) + 0x10) = uVar4;
      pcVar1 = *(code **)((int)uVar11 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar4;
      (*pcVar1)();
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined1 *)((int)register0x00000054 + -0x38) =
           *(undefined1 *)((int)register0x00000054 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + 0x14);
      k3c_internal_pkg_chelper__Cfunc_serialqueue_alloc();
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + -0x30);
      FUN_00020ce0();
      uVar4 = *(undefined4 *)((int)register0x00000054 + -0x38);
      iVar5 = *(int *)((int)register0x00000054 + 4);
      *(undefined **)(iVar5 + 0x28) = PTR_DAT_004850c0;
      if (*(int *)PTR_DAT_004850bc != 0) {
        uVar4 = FUN_0009db64();
        *unaff_r8 = uVar4;
        unaff_r8[1] = *(undefined4 *)(extraout_r2 + 0x2c);
        iVar5 = extraout_r2;
      }
      *(undefined4 *)(iVar5 + 0x2c) = uVar4;
      *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_004850c4;
      FUN_00022cf8();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x38);
      *puVar2 = PTR_k3c_internal_pkg_serialhdl___SerialReader___start_session_gowrap1_004850c8;
      if (*(int *)PTR_DAT_004850bc == 0) {
        uVar4 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      else {
        puVar2 = (undefined4 *)FUN_0009db54();
        uVar4 = *(undefined4 *)((int)register0x00000054 + 4);
        *unaff_r8 = uVar4;
      }
      puVar2[1] = uVar4;
      *(undefined4 **)((int)register0x00000054 + -0x3c) = puVar2;
      FUN_00062dd0();
      *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_004850c4;
      FUN_00022cf8();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x38);
      *puVar2 = PTR_k3c_internal_pkg_serialhdl___SerialReader___start_session_gowrap2_004850cc;
      if (*(int *)PTR_DAT_004850bc == 0) {
        uVar4 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      else {
        puVar2 = (undefined4 *)FUN_0009db54();
        uVar4 = *(undefined4 *)((int)register0x00000054 + 4);
        *unaff_r8 = uVar4;
      }
      puVar2[1] = uVar4;
      *(undefined4 **)((int)register0x00000054 + -0x3c) = puVar2;
      FUN_00062dd0();
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_004850d0;
      FUN_00022cf8();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x38);
      *puVar2 = PTR_k3c_internal_pkg_serialhdl___SerialReader___get_identify_data_fm_004850d4;
      if (*(int *)PTR_DAT_004850bc == 0) {
        uVar4 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      else {
        puVar2 = (undefined4 *)FUN_0009db54();
        uVar4 = *(undefined4 *)((int)register0x00000054 + 4);
        *unaff_r8 = uVar4;
      }
      puVar2[1] = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined4 **)((int)register0x00000054 + -0x38) = puVar2;
      *(undefined8 *)((int)register0x00000054 + -0x34) = 0;
      k3c_internal_pkg_reactor_NewReactorCallback();
      uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x2c) + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x18) = uVar4;
      k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar4);
      dVar10 = *(double *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + -0x18);
      *(double *)((int)register0x00000054 + -0x38) = dVar10 + 5.0;
      *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
      k3c_internal_pkg_reactor___ReactorCompletion__Wait();
      if (*(int *)((int)register0x00000054 + -0x28) == 0) {
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
        *(undefined4 *)((int)register0x00000054 + -0x38) = uVar4;
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_004850f8;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined **)((int)register0x00000054 + -0x3c) =
             PTR_s__sTimeout_on_connectMax_realtime_0082e789_0x7c0_004850fc;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 0x14;
        *(undefined1 **)((int)register0x00000054 + -0x34) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x30) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 1;
        k3c_internal_pkg_logger_Errorf();
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        k3c_internal_pkg_serialhdl___SerialReader__Disconnect();
        *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_00485100;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
        FUN_0009a76c();
        *(undefined1 *)((int)register0x00000054 + 0x18) = 0;
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      *(int *)((int)register0x00000054 + -0x1c) = *(int *)((int)register0x00000054 + -0x28);
      uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
      *(undefined4 *)((int)register0x00000054 + -0x38) = uVar4;
      k3c_internal_pkg_msgproto_NewMessageParser();
      uVar11 = CONCAT44(PTR_DAT_004850d8,*(undefined **)((int)register0x00000054 + -0x1c));
      uVar9 = 0;
      if (*(undefined **)((int)register0x00000054 + -0x1c) == PTR_DAT_004850d8) {
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0xc);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar4 = puVar2[2];
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x38) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x34) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar4;
        *(undefined1 *)((int)register0x00000054 + -0x2c) = 1;
        k3c_internal_pkg_msgproto___MessageParser__Process_identify();
        if (*(int *)PTR_DAT_004850bc == 0) {
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0x10);
          iVar5 = *(int *)((int)register0x00000054 + 4);
        }
        else {
          FUN_0009db64();
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0x10);
          *unaff_r8 = uVar4;
          iVar5 = *(int *)((int)register0x00000054 + 4);
          unaff_r8[1] = *(undefined4 *)(iVar5 + 0x14);
        }
        *(undefined4 *)(iVar5 + 0x14) = uVar4;
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_004850d0;
        FUN_00022cf8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x38);
        *puVar2 = PTR_k3c_internal_pkg_serialhdl___SerialReader__Handle_unknown_fm_004850dc;
        if (*(int *)PTR_DAT_004850bc == 0) {
          uVar4 = *(undefined4 *)((int)register0x00000054 + 4);
        }
        else {
          puVar2 = (undefined4 *)FUN_0009db54();
          uVar4 = *(undefined4 *)((int)register0x00000054 + 4);
          *unaff_r8 = uVar4;
        }
        puVar2[1] = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar4;
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004850e0;
        *(undefined4 **)((int)register0x00000054 + -0x34) = puVar2;
        *(undefined **)((int)register0x00000054 + -0x30) =
             PTR_s__unknowncommandsbad_instnetedns0_008216f7_0x18ed_004850e4;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 8;
        *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
        k3c_internal_pkg_serialhdl___SerialReader__Register_response();
        if (*(char *)((int)register0x00000054 + 0x10) == 'c') {
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004850e8;
          *(undefined4 *)((int)register0x00000054 + -0x34) = 0x10;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
          k3c_internal_pkg_msgproto___MessageParser__Get_constant_float();
          dVar10 = *(double *)((int)register0x00000054 + -0x28);
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004850ec;
          *(undefined4 *)((int)register0x00000054 + -0x34) = 0xb;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
          k3c_internal_pkg_msgproto___MessageParser__Get_constant_float();
          dVar10 = *(double *)((int)register0x00000054 + -0x28);
        }
        if (dVar10 != 0.0) {
          uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28);
          *(undefined4 *)((int)register0x00000054 + -0x38) = uVar4;
          *(double *)((int)register0x00000054 + -0x34) = dVar10;
          k3c_internal_pkg_serialhdl___SerialReader___start_session_Serialqueue_set_wire_frequency_func1
                    ();
        }
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined **)((int)register0x00000054 + -0x38) =
             PTR_s_RECEIVE_WINDOWHugePages_FreeInac_008262d0_0x27ba_004850f0;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 0xe;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x28) = 2;
        k3c_internal_pkg_msgproto___MessageParser__Get_constant();
        puVar3 = *(undefined **)((int)register0x00000054 + -0x24);
        if (puVar3 == (undefined *)0x0) {
          iVar5 = 0;
LAB_00484fc0:
          if (iVar5 != 0) {
            uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x3c) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28);
            *(undefined4 *)((int)register0x00000054 + -0x38) = uVar4;
            *(int *)((int)register0x00000054 + -0x34) = iVar5;
            k3c_internal_pkg_serialhdl___SerialReader___start_session_Serialqueue_set_receive_window_func2
                      ();
          }
          *(undefined1 *)((int)register0x00000054 + 0x18) = 1;
          return;
        }
        uVar9 = puVar3 == PTR_DAT_004850f4;
        if ((bool)uVar9) {
          iVar5 = **(int **)((int)register0x00000054 + -0x20);
          goto LAB_00484fc0;
        }
        *(undefined **)((int)register0x00000054 + -0x3c) = puVar3;
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004850f4;
        *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_00485104;
        uVar11 = FUN_000209b4();
      }
      *(undefined8 *)((int)register0x00000054 + -0x3c) = uVar11;
      *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_00485104;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x4850b4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/serialhdl.(*SerialReader)._start_session.Serialqueue_set_receive_window.func2 @ 00485108 (size 140) */

void k3c_internal_pkg_serialhdl___SerialReader___start_session_Serialqueue_set_receive_window_func2
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
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      bVar3 = *(int *)((int)register0x00000054 + 4) == DAT_00485198;
      if (bVar3) {
        uVar1 = **(undefined4 **)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
        *(int *)((int)register0x00000054 + -0x18) = DAT_00485198;
        *(undefined1 **)((int)register0x00000054 + -0x14) =
             (undefined1 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
        FUN_0008ee8c();
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        k3c_internal_pkg_chelper__Cfunc_serialqueue_set_receive_window();
        return;
      }
      *(int *)((int)register0x00000054 + -0x18) = *(int *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x14) = DAT_00485198;
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_0048519c;
      unaff_lr = 0x485184;
      uVar4 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x485190;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/serialhdl.(*SerialReader)._start_session.Serialqueue_set_wire_frequency.func1 @ 004851a0 (size 140) */

void k3c_internal_pkg_serialhdl___SerialReader___start_session_Serialqueue_set_wire_frequency_func1
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
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      bVar3 = *(int *)((int)register0x00000054 + 4) == DAT_00485230;
      if (bVar3) {
        uVar1 = **(undefined4 **)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
        *(int *)((int)register0x00000054 + -0x18) = DAT_00485230;
        *(undefined1 **)((int)register0x00000054 + -0x14) =
             (undefined1 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
        FUN_0008ee8c();
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined8 *)((int)register0x00000054 + -0x14) =
             *(undefined8 *)((int)register0x00000054 + 0xc);
        k3c_internal_pkg_chelper__Cfunc_serialqueue_set_wire_frequency();
        return;
      }
      *(int *)((int)register0x00000054 + -0x18) = *(int *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x14) = DAT_00485230;
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00485234;
      unaff_lr = 0x48521c;
      uVar4 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x485228;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/serialhdl.(*SerialReader)._start_session.gowrap2 @ 00485238 (size 84) */

void k3c_internal_pkg_serialhdl___SerialReader___start_session_gowrap2(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_4;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  k3c_internal_pkg_serialhdl___SerialReader__timeoutThread();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader)._start_session.gowrap1 @ 0048528c (size 108) */

void k3c_internal_pkg_serialhdl___SerialReader___start_session_gowrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 uStack_c;
  char cStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_c;
  }
  uStack_4 = *(undefined4 *)(unaff_r7 + 4);
  do {
    uStack_c = uStack_4;
    k3c_internal_pkg_serialhdl___SerialReader__taskThread();
  } while (cStack_8 == '\0');
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Connect_canbus @ 004852f8 (size 4) */

void k3c_internal_pkg_serialhdl___SerialReader__Connect_canbus(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x004852f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Connect_pipe @ 00485308 (size 780) */

void k3c_internal_pkg_serialhdl___SerialReader__Connect_pipe(undefined4 param_1)

{
  int iVar1;
  int extraout_r1;
  undefined4 uVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  double dVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x68) = unaff_lr;
      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00485618;
      *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_0048561c;
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -100) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
      *(undefined4 *)((int)register0x00000054 + -0x60) = uVar2;
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_00485618;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x5c);
      *(undefined1 **)((int)register0x00000054 + -100) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x60) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = 2;
      uVar2 = k3c_internal_pkg_logger_Info();
      uVar2 = k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar2);
      dVar5 = *(double *)((int)register0x00000054 + -100);
      *(double *)((int)register0x00000054 + -0x38) = dVar5;
      while( true ) {
        *(double *)((int)register0x00000054 + -0x40) = *DAT_00485620 + dVar5;
        k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar2);
        uVar4 = *(double *)((int)register0x00000054 + -100) ==
                *(double *)((int)register0x00000054 + -0x40);
        if (!(bool)uVar4 &&
            *(double *)((int)register0x00000054 + -0x40) <=
            *(double *)((int)register0x00000054 + -100)) break;
        *(undefined4 *)((int)register0x00000054 + -100) = 0xffffff9c;
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x58) = DAT_00485624;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 0x1ff;
        FUN_000fbb74();
        if (*(int *)((int)register0x00000054 + -0x4c) == 0) {
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_0012f368();
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_0048562c;
          FUN_00022cf8(*(undefined4 *)((int)register0x00000054 + -0x58));
          iVar1 = *(int *)((int)register0x00000054 + -0x60);
          if (*(int *)PTR_DAT_00485630 == 0) {
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x30);
          }
          else {
            FUN_0009db54();
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x30);
            *unaff_r8 = uVar2;
            iVar1 = extraout_r1;
          }
          *(undefined4 *)(iVar1 + 8) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_00485634;
          *(int *)((int)register0x00000054 + -0x5c) = iVar1;
          *(undefined1 *)((int)register0x00000054 + -0x58) = 0x75;
          *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
          k3c_internal_pkg_serialhdl___SerialReader___start_session();
          uVar2 = 0;
          if (*(char *)((int)register0x00000054 + -0x50) != '\0') {
            return;
          }
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          *(int *)((int)register0x00000054 + -0x44) = *(int *)((int)register0x00000054 + -0x4c);
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
          uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
          *(undefined4 *)((int)register0x00000054 + -0x60) = uVar2;
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00485618;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          if (*(int *)((int)register0x00000054 + -0x44) == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x44) + 4);
          }
          *(undefined4 *)((int)register0x00000054 + -8) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00485628;
          *(undefined4 *)((int)register0x00000054 + -0x60) = 0x19;
          *(undefined1 **)((int)register0x00000054 + -0x5c) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x58) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x54) = 2;
          uVar2 = k3c_internal_pkg_logger_Errorf();
          k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar2);
          dVar5 = *(double *)((int)register0x00000054 + -100);
          *(undefined4 *)((int)register0x00000054 + -100) =
               **(undefined4 **)((int)register0x00000054 + 4);
          *(double *)((int)register0x00000054 + -0x60) = dVar5 + 5.0;
          uVar2 = k3c_internal_pkg_reactor___Reactor__Pause();
        }
        dVar5 = *(double *)((int)register0x00000054 + -0x38);
      }
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x28));
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -100) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
      *(undefined4 *)((int)register0x00000054 + -0x60) = uVar2;
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_00485618;
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + -0x5c);
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00485638;
      *(undefined4 *)((int)register0x00000054 + -0x60) = 0x11;
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_00485618;
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + -0x5c);
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0048563c;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
      *(undefined **)((int)register0x00000054 + -100) =
           PTR_s__s_s_s_irq__limitsFAILEDX25519_w_008216f7_0x342_00485640;
      *(undefined4 *)((int)register0x00000054 + -0x60) = 6;
      *(undefined1 **)((int)register0x00000054 + -0x5c) =
           (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x58) = 3;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 3;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -100) =
           *(undefined4 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -100) = DAT_00485618;
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + -0x5c);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x68);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x485610;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Connect_uart @ 00485644 (size 948) */

void k3c_internal_pkg_serialhdl___SerialReader__Connect_uart(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *extraout_r1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  double dVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0x5c) = unaff_lr;
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
      uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
      *(undefined4 *)((int)register0x00000054 + -0x54) = uVar4;
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_004859fc;
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_004859fc;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      FUN_00020ce0();
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00485a00;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x54);
      *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00485a04;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 0x21;
      *(undefined1 **)((int)register0x00000054 + -0x50) =
           (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 3;
      *(undefined4 *)((int)register0x00000054 + -0x48) = 3;
      uVar4 = k3c_internal_pkg_logger_Infof();
      uVar4 = k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar4);
      while( true ) {
        k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar4);
        dVar7 = *(double *)((int)register0x00000054 + -0x58);
        uVar6 = dVar7 == *(double *)PTR_DAT_00485a08 + dVar7;
        if (!(bool)uVar6 && *(double *)PTR_DAT_00485a08 + dVar7 <= dVar7) break;
        *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00485a0c;
        FUN_00022cf8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x54);
        puVar1[1] = *(undefined4 *)((int)register0x00000054 + 0xc);
        if (*(int *)PTR_DAT_00485a10 == 0) {
          uVar4 = *(undefined4 *)((int)register0x00000054 + 8);
        }
        else {
          puVar1 = (undefined4 *)FUN_0009db54();
          uVar4 = *(undefined4 *)((int)register0x00000054 + 8);
          *unaff_r8 = uVar4;
        }
        *(undefined4 **)((int)register0x00000054 + -0x30) = puVar1;
        *puVar1 = uVar4;
        puVar1[2] = *(undefined4 *)((int)register0x00000054 + 0x10);
        puVar1[3] = DAT_00485a14;
        puVar1[4] = 0;
        *(undefined4 **)((int)register0x00000054 + -0x58) = puVar1;
        github_com_tarm_serial_OpenPort();
        if (*(int *)((int)register0x00000054 + -0x50) == 0) {
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00485a1c;
          *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_00485a20;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = 1;
          k3c_common_utils_reflects_GetPrivateFieldValue();
          uVar6 = *(undefined **)((int)register0x00000054 + -0x48) == PTR_DAT_00485a24;
          if (!(bool)uVar6) {
            *(undefined **)((int)register0x00000054 + -0x58) =
                 *(undefined **)((int)register0x00000054 + -0x48);
            *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00485a24;
            *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_00485a30;
            FUN_000209b4();
            break;
          }
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00485a28;
          FUN_00022cf8();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x54);
          if (*(int *)PTR_DAT_00485a10 == 0) {
            uVar4 = *(undefined4 *)((int)register0x00000054 + -0x38);
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x30);
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x2c);
          }
          else {
            FUN_0009db74();
            uVar4 = *(undefined4 *)((int)register0x00000054 + -0x38);
            *unaff_r8 = uVar4;
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x30);
            unaff_r8[1] = uVar2;
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x2c);
            unaff_r8[2] = uVar3;
            puVar1 = extraout_r1;
          }
          *puVar1 = uVar4;
          puVar1[1] = uVar2;
          puVar1[2] = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00485a2c;
          *(undefined4 **)((int)register0x00000054 + -0x50) = puVar1;
          *(undefined1 *)((int)register0x00000054 + -0x4c) = 0x75;
          *(undefined4 *)((int)register0x00000054 + -0x48) = 0;
          k3c_internal_pkg_serialhdl___SerialReader___start_session();
          uVar4 = 0;
          if (*(char *)((int)register0x00000054 + -0x44) != '\0') {
            return;
          }
        }
        else {
          *(int *)((int)register0x00000054 + -0x3c) = *(int *)((int)register0x00000054 + -0x50);
          *(undefined4 *)((int)register0x00000054 + -0x34) =
               *(undefined4 *)((int)register0x00000054 + -0x4c);
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x28));
          uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
          *(undefined4 *)((int)register0x00000054 + -0x54) = uVar4;
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_004859fc;
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x50);
          if (*(int *)((int)register0x00000054 + -0x3c) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x3c) + 4);
          }
          *(undefined4 *)((int)register0x00000054 + -0x20) = uVar4;
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00485a18;
          *(undefined4 *)((int)register0x00000054 + -0x54) = 0x20;
          *(undefined1 **)((int)register0x00000054 + -0x50) =
               (undefined1 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x4c) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x48) = 2;
          uVar4 = k3c_internal_pkg_logger_Errorf();
          k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar4);
          dVar7 = *(double *)((int)register0x00000054 + -0x58);
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               **(undefined4 **)((int)register0x00000054 + 4);
          *(double *)((int)register0x00000054 + -0x54) = dVar7 + 6.0;
          uVar4 = k3c_internal_pkg_reactor___Reactor__Pause();
        }
      }
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
      uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
      *(undefined4 *)((int)register0x00000054 + -0x54) = uVar4;
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_004859fc;
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + -0x50);
      *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00485a34;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 0x11;
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_004859fc;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x50);
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00485a38;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined **)((int)register0x00000054 + -0x58) =
           PTR_s__s_s_s_irq__limitsFAILEDX25519_w_008216f7_0x342_00485a3c;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 6;
      *(undefined1 **)((int)register0x00000054 + -0x50) =
           (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 3;
      *(undefined4 *)((int)register0x00000054 + -0x48) = 3;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_004859fc;
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + -0x50);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x5c);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x4859f4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Connect_remote @ 00485a40 (size 648) */

/* WARNING: Removing unreachable block (ram,0x00485b24) */

void k3c_internal_pkg_serialhdl___SerialReader__Connect_remote(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  undefined1 uVar4;
  double dVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x50) = unaff_lr;
      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar2;
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00485ccc;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00485ccc;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00485cd0;
      *(undefined4 *)((int)register0x00000054 + -0x48) = 0x1c;
      *(undefined1 **)((int)register0x00000054 + -0x44) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x40) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = 2;
      uVar2 = k3c_internal_pkg_logger_Debugf();
      while( true ) {
        k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar2);
        dVar5 = *(double *)((int)register0x00000054 + -0x4c);
        uVar4 = dVar5 == *(double *)PTR_DAT_00485cd4 + dVar5;
        if (!(bool)uVar4 && *(double *)PTR_DAT_00485cd4 + dVar5 <= dVar5) break;
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        k3c_internal_pkg_serialhdl_NewRemoteDev();
        iVar1 = *(int *)((int)register0x00000054 + -0x40);
        if (iVar1 == 0) {
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_00485cdc;
          *(undefined1 *)((int)register0x00000054 + -0x40) = 0x6e;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
          k3c_internal_pkg_serialhdl___SerialReader___start_session();
          uVar2 = 0;
          if (*(char *)((int)register0x00000054 + -0x38) != '\0') {
            return;
          }
        }
        else {
          *(int *)((int)register0x00000054 + -0x30) = iVar1;
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x3c);
          k3c_internal_pkg_chelper__Cfunc_get_monotonic(iVar1);
          dVar5 = *(double *)((int)register0x00000054 + -0x4c);
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               **(undefined4 **)((int)register0x00000054 + 4);
          *(double *)((int)register0x00000054 + -0x48) = dVar5 + 5.0;
          k3c_internal_pkg_reactor___Reactor__Pause();
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
          uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
          *(undefined4 *)((int)register0x00000054 + -0x4c) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
          *(undefined4 *)((int)register0x00000054 + -0x48) = uVar2;
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00485ccc;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x44);
          uVar2 = 0;
          if (*(int *)((int)register0x00000054 + -0x30) != 0) {
            uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x30) + 4);
          }
          *(undefined4 *)((int)register0x00000054 + -8) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00485cd8;
          *(undefined4 *)((int)register0x00000054 + -0x48) = 0x1e;
          *(undefined1 **)((int)register0x00000054 + -0x44) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x40) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 2;
          uVar2 = k3c_internal_pkg_logger_Errorf();
        }
      }
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x28));
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar2;
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_00485ccc;
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00485ce0;
      *(undefined4 *)((int)register0x00000054 + -0x48) = 0x11;
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00485ccc;
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00485ce4;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
      *(undefined **)((int)register0x00000054 + -0x4c) =
           PTR_s__s_s_s_irq__limitsFAILEDX25519_w_008216f7_0x342_00485ce8;
      *(undefined4 *)((int)register0x00000054 + -0x48) = 6;
      *(undefined1 **)((int)register0x00000054 + -0x44) =
           (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x40) = 3;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = 3;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00485ccc;
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x50);
      if ((bool)uVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x485cc4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).ConnectFile @ 00485cec (size 252) */

void k3c_internal_pkg_serialhdl___SerialReader__ConnectFile(void)

{
  undefined4 uVar1;
  int extraout_r1;
  int iVar2;
  int extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  *(undefined4 *)(in_stack_00000004 + 0xc) = in_stack_00000008;
  iVar2 = in_stack_00000004;
  if (*DAT_00485dec != 0) {
    FUN_0009db64();
    *unaff_r8 = in_stack_0000000c;
    unaff_r8[1] = *(undefined4 *)(extraout_r1 + 0x10);
    iVar2 = extraout_r1;
  }
  uVar1 = in_stack_00000010;
  *(undefined4 *)(iVar2 + 0x10) = in_stack_0000000c;
  k3c_internal_pkg_msgproto___MessageParser__Process_identify();
  (**(code **)(*(int *)(in_stack_00000004 + 0xc) + 0x10))();
  local_10 = CONCAT31((int3)((uint)uVar1 >> 8),0x66);
  k3c_internal_pkg_chelper__Cfunc_serialqueue_alloc();
  FUN_00020ce0();
  *(undefined4 *)(in_stack_00000004 + 0x28) = DAT_00485df0;
  if (*DAT_00485dec != 0) {
    local_10 = FUN_0009db64();
    *unaff_r8 = local_10;
    unaff_r8[1] = *(undefined4 *)(extraout_r2 + 0x2c);
    in_stack_00000004 = extraout_r2;
  }
  *(undefined4 *)(in_stack_00000004 + 0x2c) = local_10;
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Set_clock_est @ 00485df4 (size 108) */

void k3c_internal_pkg_serialhdl___SerialReader__Set_clock_est(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_serialhdl___SerialReader__Set_clock_est_Serialqueue_set_clock_est_func1();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Set_clock_est.Serialqueue_set_clock_est.func1 @ 00485e60 (size 180) */

void k3c_internal_pkg_serialhdl___SerialReader__Set_clock_est_Serialqueue_set_clock_est_func1
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
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      bVar3 = *(int *)((int)register0x00000054 + 4) == DAT_00485f18;
      if (bVar3) {
        uVar1 = **(undefined4 **)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
        *(int *)((int)register0x00000054 + -0x2c) = DAT_00485f18;
        *(undefined1 **)((int)register0x00000054 + -0x28) =
             (undefined1 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
        FUN_0008ee8c();
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined8 *)((int)register0x00000054 + -0x28) =
             *(undefined8 *)((int)register0x00000054 + 0xc);
        *(undefined8 *)((int)register0x00000054 + -0x20) =
             *(undefined8 *)((int)register0x00000054 + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + 0x20);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + 0x24);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x28);
        k3c_internal_pkg_chelper__Cfunc_serialqueue_set_clock_est();
        return;
      }
      *(int *)((int)register0x00000054 + -0x2c) = *(int *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x28) = DAT_00485f18;
      *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_00485f1c;
      unaff_lr = 0x485f04;
      uVar4 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x485f10;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Disconnect @ 00485f20 (size 352) */

/* WARNING: Removing unreachable block (ram,0x00485f44) */

void k3c_internal_pkg_serialhdl___SerialReader__Disconnect(void)

{
  int iVar1;
  int extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar2;
  int in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  iVar1 = in_stack_00000004;
  if (*(int *)(in_stack_00000004 + 0x28) != 0) {
    k3c_internal_pkg_serialhdl___SerialReader__Disconnect_Serialqueue_exit_func2(in_stack_00000004);
    if (*(int *)(in_stack_00000004 + 0x54) != 0) {
      *(undefined4 *)(in_stack_00000004 + 0x54) = 0;
      iVar1 = in_stack_00000004;
      if (*DAT_00486084 != 0) {
        iVar1 = FUN_0009db54(in_stack_00000004,0,*(undefined4 *)(in_stack_00000004 + 0x58));
        *unaff_r8 = extraout_r2;
      }
      *(undefined4 *)(iVar1 + 0x58) = 0;
    }
    k3c_internal_pkg_serialhdl___SerialReader__Disconnect_Serialqueue_free_func3();
    *(undefined4 *)(in_stack_00000004 + 0x28) = 0;
    iVar1 = in_stack_00000004;
    if (*DAT_00486084 != 0) {
      FUN_0009db54(0,in_stack_00000004,*(undefined4 *)(in_stack_00000004 + 0x2c));
      *unaff_r8 = extraout_r2_00;
      iVar1 = extraout_r1;
    }
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))();
    *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
    iVar1 = in_stack_00000004;
    if (*DAT_00486084 != 0) {
      uVar2 = FUN_0009db54(*(undefined4 *)(in_stack_00000004 + 0x10));
      iVar1 = (int)((ulonglong)uVar2 >> 0x20);
      *unaff_r8 = (int)uVar2;
    }
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  FUN_000aa704();
  if (*DAT_00486084 != 0) {
    FUN_00026bd4();
  }
  FUN_0009df00(0,iVar1 + 0x68);
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Disconnect.Serialqueue_free.func3 @ 00486090 (size 132) */

void k3c_internal_pkg_serialhdl___SerialReader__Disconnect_Serialqueue_free_func3
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
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      bVar3 = *(int *)((int)register0x00000054 + 4) == DAT_00486118;
      if (bVar3) {
        uVar1 = **(undefined4 **)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
        *(int *)((int)register0x00000054 + -0x18) = DAT_00486118;
        *(undefined1 **)((int)register0x00000054 + -0x14) =
             (undefined1 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
        FUN_0008ee8c();
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -8);
        k3c_internal_pkg_chelper__Cfunc_serialqueue_free();
        return;
      }
      *(int *)((int)register0x00000054 + -0x18) = *(int *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x14) = DAT_00486118;
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_0048611c;
      unaff_lr = 0x486104;
      uVar4 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x486110;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Disconnect.Serialqueue_exit.func2 @ 00486120 (size 132) */

void k3c_internal_pkg_serialhdl___SerialReader__Disconnect_Serialqueue_exit_func2
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
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      bVar3 = *(int *)((int)register0x00000054 + 4) == DAT_004861a8;
      if (bVar3) {
        uVar1 = **(undefined4 **)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
        *(int *)((int)register0x00000054 + -0x18) = DAT_004861a8;
        *(undefined1 **)((int)register0x00000054 + -0x14) =
             (undefined1 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
        FUN_0008ee8c();
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + -8);
        k3c_internal_pkg_chelper__Cfunc_serialqueue_exit();
        return;
      }
      *(int *)((int)register0x00000054 + -0x18) = *(int *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x14) = DAT_004861a8;
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_004861ac;
      unaff_lr = 0x486194;
      uVar4 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x4861a0;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Stats @ 004861b0 (size 192) */

void k3c_internal_pkg_serialhdl___SerialReader__Stats(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (*(int *)(in_stack_00000004 + 0x28) != 0) {
    k3c_internal_pkg_serialhdl___SerialReader__Stats_Serialqueue_get_stats_func1();
    FUN_00099104();
    FUN_00151ab0();
    return;
  }
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Stats.Serialqueue_get_stats.func1 @ 00486278 (size 172) */

void k3c_internal_pkg_serialhdl___SerialReader__Stats_Serialqueue_get_stats_func1
               (undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_r2;
  int extraout_r3;
  int iVar3;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  undefined1 uVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_lr;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      uVar5 = 0;
      iVar3 = DAT_00486328;
      if (iVar2 == DAT_00486328) {
        uVar5 = *(int *)((int)register0x00000054 + 0x10) == 0;
        if (!(bool)uVar5) {
          uVar1 = **(undefined4 **)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -8) = uVar1;
          *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
          *(int *)((int)register0x00000054 + -0x18) = DAT_00486328;
          *(undefined1 **)((int)register0x00000054 + -0x14) =
               (undefined1 *)((int)register0x00000054 + -4);
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
          FUN_0008ee8c();
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          k3c_internal_pkg_chelper__Cfunc_serialqueue_get_stats();
          return;
        }
        FUN_0009dbd4(0,0);
        iVar2 = extraout_r2;
        iVar3 = extraout_r3;
      }
      *(int *)((int)register0x00000054 + -0x18) = iVar2;
      *(int *)((int)register0x00000054 + -0x14) = iVar3;
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_0048632c;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x1c);
      if ((bool)uVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x486320;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Get_reactor @ 00486330 (size 16) */

void k3c_internal_pkg_serialhdl___SerialReader__Get_reactor(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x0048633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Get_msgparser @ 00486340 (size 16) */

void k3c_internal_pkg_serialhdl___SerialReader__Get_msgparser(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x0048634c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Get_serialqueue @ 00486350 (size 24) */

void k3c_internal_pkg_serialhdl___SerialReader__Get_serialqueue(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x28);
  uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x2c);
                    /* WARNING: Could not recover jumptable at 0x00486364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Get_default_command_queue @ 00486368 (size 24) */

void k3c_internal_pkg_serialhdl___SerialReader__Get_default_command_queue(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x20);
  uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x0048637c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Register_response @ 00486380 (size 500) */

void k3c_internal_pkg_serialhdl___SerialReader__Register_response(void)

{
  undefined4 uVar1;
  int *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  int *in_stack_0000001c;
  int *local_3c;
  undefined4 local_20 [2];
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x486570;
    FUN_0009bf64();
  }
  local_4 = (undefined4 *)0x0;
  if (in_stack_00000018 != 0) {
    if (in_stack_00000018 != DAT_00486578) {
      uVar1 = FUN_000209b4();
      FUN_00054344(uVar1);
      return;
    }
    if (-1 < *in_stack_0000001c) {
      FUN_0009df04(0,local_20,0,*in_stack_0000001c,unaff_lr);
      uVar1 = in_stack_00000014;
      FUN_0008f77c();
      local_20[0] = DAT_0048657c;
      FUN_00020ce0();
      local_18 = DAT_00486578;
      local_14 = uVar1;
      local_3c = (int *)0x2;
      FUN_0013b72c();
    }
  }
  local_10 = in_stack_00000004 + 0x3c;
  FUN_000ac4dc();
  local_c = DAT_00486584;
  local_8 = local_10;
  local_4 = &local_c;
  if (in_stack_00000008 == 0) {
    FUN_000263c8();
  }
  else {
    FUN_00093a08();
    *local_3c = in_stack_00000008;
    if (*DAT_0048658c != 0) {
      local_3c = (int *)FUN_0009db64();
      *unaff_r8 = in_stack_0000000c;
      unaff_r8[1] = local_3c[1];
    }
    local_3c[1] = in_stack_0000000c;
  }
  (*(code *)*local_4)();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Register_response.deferwrap1 @ 00486594 (size 84) */

void k3c_internal_pkg_serialhdl___SerialReader__Register_response_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&local_4;
  }
  local_4 = *(undefined4 *)(unaff_r7 + 4);
  FUN_000ac608();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Raw_send @ 004865e8 (size 148) */

void k3c_internal_pkg_serialhdl___SerialReader__Raw_send(void)

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
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x486678;
    FUN_0009bf64();
  }
  k3c_internal_pkg_chelper_Serialqueue_send();
                    /* WARNING: Could not recover jumptable at 0x0048666c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Raw_send_wait_ack @ 0048667c (size 552) */

void k3c_internal_pkg_serialhdl___SerialReader__Raw_send_wait_ack(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -100);
      *(undefined4 *)((int)register0x00000054 + -100) = unaff_lr;
      puVar1 = *(undefined4 **)((int)register0x00000054 + 4);
      uVar2 = puVar1[0x18];
      iVar4 = puVar1[0x19];
      *(undefined4 **)((int)register0x00000054 + -0x1c) = puVar1 + 0x1a;
      iVar3 = uVar2 + 1;
      *(int *)((int)register0x00000054 + -0x24) = iVar3;
      puVar1[0x18] = iVar3;
      iVar4 = iVar4 + (uint)(0xfffffffe < uVar2);
      *(int *)((int)register0x00000054 + -0x28) = iVar4;
      puVar1[0x19] = iVar4;
      *(undefined4 *)((int)register0x00000054 + -0x60) = *puVar1;
      k3c_internal_pkg_reactor_NewReactorCompletion();
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x28);
      FUN_0008f6c0();
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x5c) = DAT_004868a8;
      *(undefined4 *)((int)register0x00000054 + -0x54) = DAT_004868ac;
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + -0x20);
      FUN_000a9dd0();
      uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28);
      *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + 0x24);
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + 0x28);
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + 0x14);
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + 0x18);
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + 0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + 0x20);
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + -0x28);
      k3c_internal_pkg_chelper_Serialqueue_send();
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + -0x20);
      *(undefined8 *)((int)register0x00000054 + -0x5c) = *DAT_004868b0;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
      k3c_internal_pkg_reactor___ReactorCompletion__Wait();
      iVar3 = *(int *)((int)register0x00000054 + -0x4c);
      uVar7 = iVar3 == 0;
      if (!(bool)uVar7) {
        uVar7 = iVar3 == DAT_004868b4;
        if ((bool)uVar7) {
          *(undefined4 *)((int)register0x00000054 + 0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          return;
        }
        *(int *)((int)register0x00000054 + -0x60) = iVar3;
        *(int *)((int)register0x00000054 + -0x5c) = DAT_004868b4;
        *(undefined4 *)((int)register0x00000054 + -0x58) = DAT_004868b8;
        FUN_000209b4();
      }
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x18));
      uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
      *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar5;
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_004868bc;
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_004868c0;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = 0x18;
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_004868bc;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      *(int *)((int)register0x00000054 + -8) = DAT_004868b4;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_004868c4;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = 6;
      *(undefined1 **)((int)register0x00000054 + -0x58) =
           (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x54) = 3;
      *(undefined4 *)((int)register0x00000054 + -0x50) = 3;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -0x60) = DAT_004868bc;
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -100);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x4868a0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Send @ 004868c8 (size 280) */

void k3c_internal_pkg_serialhdl___SerialReader__Send(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  int local_38;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (uVar1 = in_stack_0000000c, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_msgproto___MessageParser__Create_command();
  if (local_38 == 0) {
    FUN_0009df04(0,&local_10);
    local_10 = DAT_004869e4;
    local_c = DAT_004869e8;
    FUN_0008f77c();
    local_8 = DAT_004869e4;
    local_4 = uVar1;
    k3c_internal_pkg_logger_Error();
    return;
  }
  k3c_internal_pkg_chelper_Serialqueue_send();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Send_with_response @ 004869ec (size 264) */

void k3c_internal_pkg_serialhdl___SerialReader__Send_with_response(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_msgproto___MessageParser__Create_command();
  k3c_internal_pkg_serialhdl_NewSerialRetryCommand();
  k3c_internal_pkg_serialhdl___SerialRetryCommand__Get_response();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Alloc_command_queue @ 00486af4 (size 68) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_serialhdl___SerialReader__Alloc_command_queue(undefined4 param_1)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x486b34;
    param_1 = FUN_0009bf64();
  }
  k3c_internal_pkg_chelper__Cfunc_serialqueue_alloc_commandqueue(param_1);
  FUN_00020ce0();
  in_stack_00000008 = _UNK_00486b3c;
                    /* WARNING: Could not recover jumptable at 0x00486b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Dump_debug @ 00486b40 (size 856) */

void k3c_internal_pkg_serialhdl___SerialReader__Dump_debug(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 extraout_r2;
  int iVar6;
  undefined4 extraout_r3;
  int iVar7;
  uint uVar8;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  undefined8 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x80);
      *(undefined4 *)((int)register0x00000054 + -0x80) = unaff_lr;
      k3c_internal_pkg_chelper__Cfunc_get_monotonic(*(undefined4 *)((int)register0x00000054 + 4));
      uVar11 = *(undefined8 *)((int)register0x00000054 + -0x7c);
      *(undefined4 *)((int)register0x00000054 + -0x7c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined8 *)((int)register0x00000054 + -0x78) = uVar11;
      k3c_internal_pkg_serialhdl___SerialReader__Stats();
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x7c) =
           *(undefined4 *)((int)register0x00000054 + -0x70);
      *(undefined4 *)((int)register0x00000054 + -0x78) =
           *(undefined4 *)((int)register0x00000054 + -0x6c);
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_00486e9c;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x74);
      *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_00486ea0;
      *(undefined4 *)((int)register0x00000054 + -0x78) = 0x18;
      *(undefined1 **)((int)register0x00000054 + -0x74) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x70) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = 1;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + -100);
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      *(undefined1 **)((int)register0x00000054 + -0x7c) =
           (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x78) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x74) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x70) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_00486e9c;
      FUN_000987f4();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + -0x60);
      puVar1[1] = *(undefined4 *)((int)register0x00000054 + -0x44);
      if (*DAT_00486ea4 == 0) {
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x2c);
      }
      else {
        puVar1 = (undefined4 *)FUN_0009db64();
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x2c);
        *unaff_r8 = uVar5;
        unaff_r8[1] = *puVar1;
      }
      *(undefined4 **)((int)register0x00000054 + -0x38) = puVar1;
      *puVar1 = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00486ea8;
      iVar2 = *(int *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0xc) = *(undefined4 *)(iVar2 + 0x14);
      uVar5 = *(undefined4 *)(iVar2 + 0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x7c) = *(undefined4 *)(iVar2 + 0x28);
      *(undefined4 *)((int)register0x00000054 + -0x78) = uVar5;
      *(undefined1 **)((int)register0x00000054 + -0x74) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      k3c_internal_pkg_chelper_Serialqueue_extract_old();
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x70);
      FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x28),
                   *(undefined4 *)((int)register0x00000054 + -0x68),
                   *(undefined4 *)((int)register0x00000054 + -0x6c));
      *(undefined4 *)((int)register0x00000054 + -0x24) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x18) = extraout_r3;
      *(undefined4 *)((int)register0x00000054 + -0x14) = extraout_r2;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar5;
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x28);
      iVar2 = 0;
      for (iVar6 = 0; iVar6 < 2; iVar6 = iVar6 + 1) {
        iVar2 = *(int *)(puVar3 + 4) + iVar2;
        uVar10 = iVar2 == 0;
        if (iVar2 < 0) goto LAB_00486e74;
        puVar3 = puVar3 + 0xc;
      }
      uVar10 = iVar2 == 0;
      if (-1 < iVar2) {
        if (iVar2 < 1) {
          uVar4 = 0;
          iVar2 = 0;
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -0x7c) = 0;
          *(int *)((int)register0x00000054 + -0x78) = iVar2;
          *(undefined4 *)((int)register0x00000054 + -0x74) = 0;
          *(int *)((int)register0x00000054 + -0x70) = iVar2;
          *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_00486e9c;
          FUN_000987f4();
          iVar2 = *(int *)((int)register0x00000054 + -0x68);
          uVar4 = *(uint *)((int)register0x00000054 + -0x60);
        }
        puVar1 = (undefined4 *)((int)register0x00000054 + -0x28);
        iVar7 = 0;
        iVar6 = 0;
        while (iVar6 < 2) {
          *(int *)((int)register0x00000054 + -0x44) = iVar6;
          *(undefined4 **)((int)register0x00000054 + -0x30) = puVar1;
          iVar6 = puVar1[1];
          uVar8 = iVar6 + iVar7;
          uVar5 = *puVar1;
          if (uVar4 < uVar8) {
            *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar5;
            *(int *)((int)register0x00000054 + -0x58) = iVar6;
            *(int *)((int)register0x00000054 + -0x54) = iVar7;
            *(int *)((int)register0x00000054 + -0x7c) = iVar2;
            *(uint *)((int)register0x00000054 + -0x78) = uVar8;
            *(uint *)((int)register0x00000054 + -0x74) = uVar4;
            *(int *)((int)register0x00000054 + -0x70) = iVar6;
            *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_00486e9c;
            FUN_000987f4();
            iVar2 = *(int *)((int)register0x00000054 + -0x68);
            uVar8 = *(uint *)((int)register0x00000054 + -100);
            uVar4 = *(uint *)((int)register0x00000054 + -0x60);
            iVar7 = *(int *)((int)register0x00000054 + -0x54);
            iVar6 = *(int *)((int)register0x00000054 + -0x58);
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x3c);
          }
          *(uint *)((int)register0x00000054 + -0x48) = uVar4;
          *(uint *)((int)register0x00000054 + -0x4c) = uVar8;
          *(int *)((int)register0x00000054 + -0x34) = iVar2;
          *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_00486e9c;
          *(int *)((int)register0x00000054 + -0x78) =
               iVar2 + ((int)-(uVar4 - iVar7) >> 0x1f & iVar7 << 3);
          *(uint *)((int)register0x00000054 + -0x74) = uVar8 - iVar7;
          *(undefined4 *)((int)register0x00000054 + -0x70) = uVar5;
          *(int *)((int)register0x00000054 + -0x6c) = iVar6;
          FUN_00093f5c();
          puVar1 = (undefined4 *)(*(int *)((int)register0x00000054 + -0x30) + 0xc);
          iVar7 = *(int *)((int)register0x00000054 + -0x4c);
          uVar4 = *(uint *)((int)register0x00000054 + -0x48);
          iVar2 = *(int *)((int)register0x00000054 + -0x34);
          iVar6 = *(int *)((int)register0x00000054 + -0x44) + 1;
        }
        *(int *)((int)register0x00000054 + -0x7c) = iVar2;
        *(int *)((int)register0x00000054 + -0x78) = iVar7;
        *(uint *)((int)register0x00000054 + -0x74) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_00486eac;
        *(undefined4 *)((int)register0x00000054 + -0x6c) = 1;
        FUN_0014f8fc();
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -100);
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_00486e9c;
      *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_00486eb0;
      FUN_00095b00();
LAB_00486e74:
      *(undefined4 *)((int)register0x00000054 + -0x7c) = DAT_00486e9c;
      *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_00486eb4;
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x80);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x486e94;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/serialhdl.(*SerialReader)._handle_unknown_init @ 00486eb8 (size 352) */

void k3c_internal_pkg_serialhdl___SerialReader___handle_unknown_init(void)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *local_24;
  undefined4 local_20 [2];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x487014;
    FUN_0009bf64();
  }
  uVar2 = *(int *)(in_stack_00000004 + 0x7c) + 1;
  *(uint *)(in_stack_00000004 + 0x7c) = uVar2;
  if ((0x14 < uVar2) &&
     ((uint)((ulonglong)DAT_0048701c * (ulonglong)uVar2 >> 0x2d) * 10000 - uVar2 != 0)) {
    return;
  }
  FUN_0009def4(0,local_20,in_stack_00000004,uVar2,unaff_lr);
  FUN_0008f77c();
  local_20[0] = DAT_00487020;
  FUN_00025f60();
  uVar1 = in_stack_00000008;
  local_14 = local_24[1];
  local_18 = *local_24;
  FUN_00025f60();
  local_10 = *local_24;
  local_c = local_24[1];
  FUN_00020ce0();
  local_8 = DAT_00487030;
  local_4 = uVar1;
  k3c_internal_pkg_logger_Warnf();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Handle_unknown @ 00487038 (size 252) */

void k3c_internal_pkg_serialhdl___SerialReader__Handle_unknown(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *puStack_1c;
  undefined *apuStack_18 [2];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x487130;
    FUN_0009bf64();
  }
  FUN_0009defc(0,apuStack_18);
  FUN_0008f77c();
  apuStack_18[0] = PTR_DAT_00487138;
  FUN_00025f60();
  uStack_10 = *puStack_1c;
  uStack_c = puStack_1c[1];
  FUN_00025f60();
  uStack_8 = *puStack_1c;
  uStack_4 = puStack_1c[1];
  k3c_internal_pkg_logger_Warnf();
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x00487124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialDev).Close @ 0048714c (size 108) */

/* WARNING: Removing unreachable block (ram,0x00487170) */
/* WARNING: Removing unreachable block (ram,0x0048719c) */

void k3c_internal_pkg_serialhdl___SerialDev__Close(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4871b4;
    FUN_0009bf64();
  }
  if ((int *)*in_stack_00000004 == (int *)0x0) {
    if (in_stack_00000004[2] != 0) {
      FUN_0012fb5c();
    }
  }
  else if (*(int *)*in_stack_00000004 != 0) {
    FUN_0012fb5c();
  }
                    /* WARNING: Could not recover jumptable at 0x004871a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialDev).GetFd @ 004871b8 (size 100) */

void k3c_internal_pkg_serialhdl___SerialDev__GetFd(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x487218;
    FUN_0009bf64();
  }
  piVar1 = *(int **)(in_stack_00000004 + 8);
  if (piVar1 == (int *)0x0) {
    in_stack_00000008 = 0xffffffff;
  }
  else {
    if (*(char *)(*piVar1 + 0x34) != '\0') {
      FUN_00121498();
    }
    in_stack_00000008 = *(undefined4 *)(*piVar1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x0048720c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/serialhdl.NewSerialDev @ 0048721c (size 124) */

void k3c_internal_pkg_serialhdl_NewSerialDev(void)

{
  undefined4 *extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  if (*DAT_004872a0 != 0) {
    FUN_0009db74();
    *unaff_r8 = in_stack_00000004;
    unaff_r8[1] = in_stack_00000008;
    unaff_r8[2] = in_stack_0000000c;
    local_8 = extraout_r1;
  }
  *local_8 = in_stack_00000004;
  local_8[1] = in_stack_00000008;
  local_8[2] = in_stack_0000000c;
  return;
}



/* k3c/internal/pkg/serialhdl.(*RemoteDev).Close @ 004872a4 (size 88) */

/* WARNING: Removing unreachable block (ram,0x004872e0) */

void k3c_internal_pkg_serialhdl___RemoteDev__Close(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4872f8;
    FUN_0009bf64();
  }
  if (*(int *)(in_stack_00000004 + 8) != 0) {
    FUN_001b6be8();
  }
  if (*(int *)(in_stack_00000004 + 0xc) != 0) {
    FUN_0012fb5c();
  }
                    /* WARNING: Could not recover jumptable at 0x004872ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/serialhdl.(*RemoteDev).GetFd @ 004872fc (size 100) */

void k3c_internal_pkg_serialhdl___RemoteDev__GetFd(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x48735c;
    FUN_0009bf64();
  }
  piVar1 = *(int **)(in_stack_00000004 + 0xc);
  if (piVar1 == (int *)0x0) {
    in_stack_00000008 = 0xffffffff;
  }
  else {
    if (*(char *)(*piVar1 + 0x34) != '\0') {
      FUN_00121498();
    }
    in_stack_00000008 = *(undefined4 *)(*piVar1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00487350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/serialhdl.NewRemoteDev @ 00487360 (size 716) */

void k3c_internal_pkg_serialhdl_NewRemoteDev(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar6;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  bool bVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x68) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -100) = *(undefined4 *)((int)register0x00000054 + 4)
      ;
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined **)((int)register0x00000054 + -0x5c) =
           PTR_s_tcp_initbusy1a86baud_to_M400G1_Z_00820821_0x239_00487630;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 4;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x50) = 0xffffffff;
      FUN_0014f168();
      bVar8 = *(uint *)((int)register0x00000054 + -0x48) == 1;
      if (1 < *(uint *)((int)register0x00000054 + -0x48)) {
        uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x4c) + 8);
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x4c) + 0xc);
        *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00487634;
        *(undefined4 *)((int)register0x00000054 + -0x60) = 3;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x58) = uVar1;
        FUN_001be528();
        iVar2 = *(int *)((int)register0x00000054 + -0x50);
        if (iVar2 != 0) {
          *(int *)((int)register0x00000054 + -0x40) = iVar2;
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x4c);
          pcVar5 = *(code **)(iVar2 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0x4c);
          (*pcVar5)();
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x30),
                       *(undefined4 *)((int)register0x00000054 + -0x5c),
                       *(undefined4 *)((int)register0x00000054 + -0x60));
          *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_00487640;
          *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_00487648;
          *(undefined4 *)((int)register0x00000054 + -100) = extraout_r3_00;
          *(undefined4 *)((int)register0x00000054 + -0x60) = extraout_r2_00;
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_00487640;
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x5c);
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          *(undefined **)((int)register0x00000054 + -0x10) =
               PTR_k3c_internal_pkg_serialhdl_NewRemoteDev_Print_func1_0048764c;
          *(undefined4 *)((int)register0x00000054 + -8) = 2;
          *(undefined4 *)((int)register0x00000054 + -4) = 2;
          *(undefined1 **)((int)register0x00000054 + -0xc) =
               (undefined1 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -100) = *(undefined4 *)PTR_DAT_00487650;
          *(undefined4 *)((int)register0x00000054 + -0x60) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x5c) = 2;
          *(undefined1 **)((int)register0x00000054 + -0x58) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          FUN_00178514();
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x40);
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x38);
          return;
        }
        *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00487634;
        *(undefined4 *)((int)register0x00000054 + -0x60) = 3;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        FUN_001bf62c();
        iVar2 = *(int *)((int)register0x00000054 + -0x50);
        if (iVar2 == 0) {
          *(undefined4 *)((int)register0x00000054 + -0x34) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          *(undefined1 *)((int)register0x00000054 + -0x60) = 1;
          FUN_001bf30c();
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          FUN_001b74cc();
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00487638;
          FUN_00022cf8();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x60);
          puVar3[1] = *(undefined4 *)((int)register0x00000054 + 8);
          if (*(int *)PTR_DAT_0048763c == 0) {
            uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
            uVar4 = *(undefined4 *)((int)register0x00000054 + -0x34);
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x3c);
          }
          else {
            puVar3 = (undefined4 *)FUN_0009db74();
            uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
            *unaff_r8 = uVar1;
            uVar4 = *(undefined4 *)((int)register0x00000054 + -0x34);
            unaff_r8[1] = uVar4;
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x3c);
            unaff_r8[2] = uVar6;
          }
          *puVar3 = uVar1;
          puVar3[2] = uVar4;
          puVar3[3] = uVar6;
          *(undefined4 **)((int)register0x00000054 + 0xc) = puVar3;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          return;
        }
        *(int *)((int)register0x00000054 + -0x40) = iVar2;
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        pcVar5 = *(code **)(iVar2 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        (*pcVar5)();
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x20),
                     *(undefined4 *)((int)register0x00000054 + -0x5c),
                     *(undefined4 *)((int)register0x00000054 + -0x60));
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_00487640;
        *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_00487644;
        *(undefined4 *)((int)register0x00000054 + -100) = extraout_r3;
        *(undefined4 *)((int)register0x00000054 + -0x60) = extraout_r2;
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00487640;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x5c);
        *(undefined1 **)((int)register0x00000054 + -100) =
             (undefined1 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x60) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = 2;
        k3c_internal_pkg_logger_Error();
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        return;
      }
      param_1 = FUN_0009dbd4(1);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x68);
      if (bVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x487628;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/serialhdl.NewRemoteDev.Print.func1 @ 00487654 (size 108) */

void k3c_internal_pkg_serialhdl_NewRemoteDev_Print_func1(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  FUN_0013ba2c();
  return;
}



/* k3c/internal/pkg/serialhdl.NewSerialRetryCommand @ 004876c0 (size 276) */

void k3c_internal_pkg_serialhdl_NewSerialRetryCommand(void)

{
  undefined4 *extraout_r1;
  undefined4 *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 *local_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  puVar1 = local_1c;
  if (*DAT_004877dc != 0) {
    FUN_0009db74();
    *unaff_r8 = in_stack_00000004;
    unaff_r8[1] = in_stack_00000008;
    unaff_r8[2] = in_stack_00000014;
    puVar1 = extraout_r1;
  }
  *puVar1 = in_stack_00000004;
  puVar1[2] = in_stack_0000000c;
  puVar1[1] = in_stack_00000008;
  puVar1[3] = in_stack_00000010;
  puVar1[4] = in_stack_00000014;
  puVar1[5] = 0;
  FUN_00022cf8();
  *local_1c = DAT_004877e4;
  if (*DAT_004877dc != 0) {
    local_1c = (undefined4 *)FUN_0009db54();
    *unaff_r8 = puVar1;
  }
  local_1c[1] = puVar1;
  k3c_internal_pkg_serialhdl___SerialReader__Register_response();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialRetryCommand).Get_response @ 004877ec (size 1020) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_serialhdl___SerialRetryCommand__Get_response(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_r10;
  double dVar6;
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 *in_stack_00000018;
  undefined4 local_80;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&local_c <= *(undefined4 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  iVar2 = 5;
  dVar6 = *DAT_00487bec;
  while( true ) {
    if (in_stack_0000000c + -1 < 0) {
      FUN_000908bc();
      return;
    }
    for (iVar4 = 0; iVar4 < in_stack_0000000c; iVar4 = iVar4 + 1) {
      if (iVar4 != in_stack_0000000c + -1) {
        k3c_internal_pkg_chelper_Serialqueue_send(SUB84(dVar6,0));
      }
    }
    uVar3 = *in_stack_00000004;
    uVar5 = *(undefined4 *)(in_stack_00000008 + in_stack_0000000c * 0xc + -0xc);
    k3c_internal_pkg_serialhdl___SerialReader__Raw_send_wait_ack();
    if (in_stack_00000004[5] != 0) break;
    if (iVar2 < 1) {
      uVar3 = in_stack_00000004[3];
      uVar5 = in_stack_00000004[4];
      k3c_internal_pkg_serialhdl___SerialReader__Register_response();
      local_8 = 0;
      local_4 = 0;
      FUN_0008f77c();
      local_8 = DAT_00487bf0;
      local_4 = 0;
      FUN_0013b72c();
      FUN_00022cf8();
      puVar1 = (undefined4 *)&DAT_0000001e;
      _DAT_00000022 = uVar5;
      if (*DAT_00487c04 != 0) {
        puVar1 = (undefined4 *)FUN_0009db54();
        *in_stack_00000018 = uVar3;
      }
      *puVar1 = uVar3;
      return;
    }
    iVar2 = iVar2 + -1;
    k3c_internal_pkg_chelper__Cfunc_get_monotonic(in_stack_00000004);
    local_80 = (undefined4)((ulonglong)(dVar6 + (double)CONCAT44(uVar5,uVar3)) >> 0x20);
    k3c_internal_pkg_reactor___Reactor__Pause();
    FUN_0009defc(0,&local_20);
    uVar3 = in_stack_00000004[2];
    FUN_0008f77c();
    local_20 = DAT_00487bf0;
    local_1c = local_80;
    local_18 = in_stack_00000004[3];
    local_14 = in_stack_00000004[4];
    FUN_00020ce0();
    local_10 = DAT_00487bf4;
    local_c = uVar3;
    k3c_internal_pkg_logger_Debugf();
    dVar6 = dVar6 + dVar6;
  }
  k3c_internal_pkg_serialhdl___SerialReader__Register_response();
  return;
}



/* k3c/internal/pkg/serialhdl.Cheetah_reset @ 00487c0c (size 796) */

void k3c_internal_pkg_serialhdl_Cheetah_reset(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar7;
  int unaff_r10;
  undefined4 unaff_lr;
  bool bVar8;
  double dVar9;
  undefined1 auStack_fd0 [4048];
  undefined1 *puVar6;
  
  while( true ) {
    iVar1 = DAT_00487f38;
    bVar8 = &stack0x00000000 == (undefined1 *)0xfd0;
    if ((undefined1 *)0xfcf < &stack0x00000000) {
      bVar8 = auStack_fd0 == *(undefined1 **)(unaff_r10 + 8);
    }
    if (((undefined1 *)0xfcf < &stack0x00000000 && *(undefined1 **)(unaff_r10 + 8) <= auStack_fd0)
        && !bVar8) break;
    unaff_lr = 0x487f30;
    FUN_0009bf64();
  }
  *(undefined4 *)(&stack0x00000000 + DAT_00487f38) = unaff_lr;
  *(undefined4 *)(&stack0x00000000 + DAT_00487f3c + DAT_00487f38) = 0;
  (&stack0x00000023)[DAT_00487f38] = 0;
  FUN_0009defc(0,&stack0x00000000 + DAT_00487f40 + DAT_00487f38);
  *(undefined4 *)(&stack0x00000000 + DAT_00487f48 + iVar1) =
       *(undefined4 *)(&stack0x00000000 + DAT_00487f44 + iVar1);
  *(undefined4 *)(&stack0x00000000 + DAT_00487f40 + iVar1) =
       *(undefined4 *)(&stack0x00000000 + DAT_00487f4c + iVar1);
  *(undefined4 *)(&stack0x00000000 + DAT_00487f50 + iVar1) = 0x960;
  *(undefined1 **)(&stack0x00000004 + iVar1) = &stack0x00000000 + DAT_00487f40 + iVar1;
  github_com_tarm_serial_OpenPort();
  if (*(int *)(&stack0x0000000c + iVar1) == 0) {
    puVar2 = *(undefined4 **)(&stack0x00000008 + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00487f58 + iVar1) = DAT_00487f54;
    *(undefined4 **)(&stack0x00000000 + DAT_00487f5c + iVar1) = puVar2;
    *(undefined1 **)(&stack0x00000000 + DAT_00487f3c + iVar1) =
         &stack0x00000000 + DAT_00487f58 + iVar1;
    (&stack0x00000023)[iVar1] = 1;
    puVar6 = &stack0x00000024 + iVar1;
    do {
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while ((int)puVar5 <= (int)(&stack0x00000000 + DAT_00487f60 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *puVar2;
    *(undefined1 **)(&stack0x00000008 + iVar1) = &stack0x00000024 + iVar1;
    *(undefined4 *)(&stack0x0000000c + iVar1) = 0x1000;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x1000;
    FUN_0012cc70();
    uVar4 = 0;
    if (*(int *)(&stack0x00000018 + iVar1) != 0) {
      pcVar3 = *(code **)(*(int *)(&stack0x00000018 + iVar1) + 0xc);
      *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x0000001c + iVar1);
      (*pcVar3)();
      uVar4 = *(undefined4 *)(&stack0x00000008 + iVar1);
      uVar7 = *(undefined4 *)(&stack0x0000000c + iVar1);
      *(undefined4 *)(&stack0x00000000 + DAT_00487f64 + iVar1) = 0;
      *(undefined4 *)(&stack0x00000000 + DAT_00487f68 + iVar1) = 0;
      *(undefined4 *)(&stack0x00000004 + iVar1) = uVar4;
      *(undefined4 *)(&stack0x00000008 + iVar1) = uVar7;
      FUN_0008f77c();
      uVar4 = *(undefined4 *)(&stack0x0000000c + iVar1);
      *(undefined4 *)(&stack0x00000000 + DAT_00487f64 + iVar1) = DAT_00487f6c;
      *(undefined4 *)(&stack0x00000000 + DAT_00487f68 + iVar1) = uVar4;
      *(undefined1 **)(&stack0x00000004 + iVar1) = &stack0x00000000 + DAT_00487f64 + iVar1;
      *(undefined4 *)(&stack0x00000008 + iVar1) = 1;
      *(undefined4 *)(&stack0x0000000c + iVar1) = 1;
      uVar4 = k3c_internal_pkg_logger_Error();
    }
    k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar4);
    dVar9 = *(double *)(&stack0x00000004 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00487f70 + iVar1);
    *(double *)(&stack0x00000008 + iVar1) = *DAT_00487f74 + dVar9;
    uVar4 = k3c_internal_pkg_reactor___Reactor__Pause();
    k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar4);
    dVar9 = *(double *)(&stack0x00000004 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00487f70 + iVar1);
    *(double *)(&stack0x00000008 + iVar1) = dVar9 + *DAT_00487f74;
    uVar4 = k3c_internal_pkg_reactor___Reactor__Pause();
    k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar4);
    dVar9 = *(double *)(&stack0x00000004 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00487f70 + iVar1);
    *(double *)(&stack0x00000008 + iVar1) = dVar9 + *DAT_00487f74;
    uVar4 = k3c_internal_pkg_reactor___Reactor__Pause();
    k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar4);
    dVar9 = *(double *)(&stack0x00000004 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00487f70 + iVar1);
    *(double *)(&stack0x00000008 + iVar1) = dVar9 + *DAT_00487f74;
    uVar4 = k3c_internal_pkg_reactor___Reactor__Pause();
    k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar4);
    dVar9 = *(double *)(&stack0x00000004 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00487f70 + iVar1);
    *(double *)(&stack0x00000008 + iVar1) = dVar9 + *DAT_00487f74;
    uVar4 = k3c_internal_pkg_reactor___Reactor__Pause();
    k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar4);
    dVar9 = *(double *)(&stack0x00000004 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00487f70 + iVar1);
    *(double *)(&stack0x00000008 + iVar1) = dVar9 + *DAT_00487f74;
    k3c_internal_pkg_reactor___Reactor__Pause();
    (&stack0x00000023)[iVar1] = 0;
    (*(code *)**(undefined4 **)(&stack0x00000000 + DAT_00487f3c + iVar1))();
    return;
  }
  pcVar3 = *(code **)(*(int *)(&stack0x0000000c + iVar1) + 0xc);
  *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000010 + iVar1);
  (*pcVar3)();
  uVar4 = *(undefined4 *)(&stack0x00000008 + iVar1);
  uVar7 = *(undefined4 *)(&stack0x0000000c + iVar1);
  *(undefined4 *)(&stack0x00000000 + DAT_00487f64 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000000 + DAT_00487f68 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000004 + iVar1) = uVar4;
  *(undefined4 *)(&stack0x00000008 + iVar1) = uVar7;
  FUN_0008f77c();
  uVar4 = *(undefined4 *)(&stack0x0000000c + iVar1);
  *(undefined4 *)(&stack0x00000000 + DAT_00487f64 + iVar1) = DAT_00487f6c;
  *(undefined4 *)(&stack0x00000000 + DAT_00487f68 + iVar1) = uVar4;
  *(undefined1 **)(&stack0x00000004 + iVar1) = &stack0x00000000 + DAT_00487f64 + iVar1;
  *(undefined4 *)(&stack0x00000008 + iVar1) = 1;
  *(undefined4 *)(&stack0x0000000c + iVar1) = 1;
  k3c_internal_pkg_logger_Error();
  return;
}



/* k3c/internal/pkg/serialhdl.Cheetah_reset.deferwrap1 @ 00487f7c (size 100) */

void k3c_internal_pkg_serialhdl_Cheetah_reset_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if ((undefined4 *)**(int **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = *(undefined4 *)**(int **)(unaff_r7 + 4);
    FUN_0012fb5c();
  }
  return;
}



/* k3c/internal/pkg/serialhdl.Arduino_reset @ 00487fe0 (size 664) */

void k3c_internal_pkg_serialhdl_Arduino_reset(void)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar7;
  int unaff_r10;
  undefined4 *puVar8;
  undefined4 unaff_lr;
  bool bVar10;
  double dVar11;
  undefined1 auStack_fd0 [4048];
  undefined1 *puVar6;
  undefined4 *puVar9;
  
  while( true ) {
    iVar1 = DAT_00488288;
    bVar10 = &stack0x00000000 == (undefined1 *)0xfd0;
    if ((undefined1 *)0xfcf < &stack0x00000000) {
      bVar10 = auStack_fd0 == *(undefined1 **)(unaff_r10 + 8);
    }
    if (((undefined1 *)0xfcf < &stack0x00000000 && *(undefined1 **)(unaff_r10 + 8) <= auStack_fd0)
        && !bVar10) break;
    unaff_lr = 0x488280;
    FUN_0009bf64();
  }
  puVar8 = (undefined4 *)(&stack0x00000000 + DAT_00488288);
  puVar9 = (undefined4 *)(&stack0x00000000 + DAT_00488288);
  *(undefined4 *)(&stack0x00000000 + DAT_00488288) = unaff_lr;
  *(undefined4 *)(&stack0x00000000 + DAT_0048828c + DAT_00488288) = 0;
  (&stack0x00000023)[DAT_00488288] = 0;
  FUN_0009defc(0,&stack0x00000000 + DAT_00488290 + DAT_00488288);
  *(undefined4 *)(&stack0x00000000 + DAT_00488298 + iVar1) =
       *(undefined4 *)(&stack0x00000000 + DAT_00488294 + iVar1);
  *(undefined4 *)(&stack0x00000000 + DAT_00488290 + iVar1) =
       *(undefined4 *)(&stack0x00000000 + DAT_0048829c + iVar1);
  *(undefined4 *)(&stack0x00000000 + DAT_004882a0 + iVar1) = 0x960;
  *(undefined1 **)(&stack0x00000004 + iVar1) = &stack0x00000000 + DAT_00488290 + iVar1;
  github_com_tarm_serial_OpenPort();
  if (*(int *)(&stack0x0000000c + iVar1) == 0) {
    puVar2 = *(undefined4 **)(&stack0x00000008 + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_004882a8 + iVar1) = DAT_004882a4;
    *(undefined4 **)(&stack0x00000000 + DAT_004882ac + iVar1) = puVar2;
    *(undefined1 **)(&stack0x00000000 + DAT_0048828c + iVar1) =
         &stack0x00000000 + DAT_004882a8 + iVar1;
    (&stack0x00000023)[iVar1] = 1;
    puVar6 = &stack0x00000024 + iVar1;
    do {
      puVar5 = puVar6 + 1;
      *puVar6 = 0;
      puVar6 = puVar5;
    } while ((int)puVar5 <= (int)(&stack0x00000000 + DAT_004882b0 + iVar1));
    *(undefined4 *)(&stack0x00000004 + iVar1) = *puVar2;
    *(undefined1 **)(&stack0x00000008 + iVar1) = &stack0x00000024 + iVar1;
    *(undefined4 *)(&stack0x0000000c + iVar1) = 0x1000;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x1000;
    FUN_0012cc70();
    uVar4 = 0;
    if (*(int *)(&stack0x00000018 + iVar1) != 0) {
      pcVar3 = *(code **)(*(int *)(&stack0x00000018 + iVar1) + 0xc);
      *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x0000001c + iVar1);
      (*pcVar3)();
      uVar4 = *(undefined4 *)(&stack0x00000008 + iVar1);
      uVar7 = *(undefined4 *)(&stack0x0000000c + iVar1);
      *(undefined4 *)(&stack0x00000000 + DAT_004882b4 + iVar1) = 0;
      *(undefined4 *)(&stack0x00000000 + DAT_004882b8 + iVar1) = 0;
      *(undefined4 *)(&stack0x00000004 + iVar1) = uVar4;
      *(undefined4 *)(&stack0x00000008 + iVar1) = uVar7;
      FUN_0008f77c();
      uVar4 = *(undefined4 *)(&stack0x0000000c + iVar1);
      *(undefined4 *)(&stack0x00000000 + DAT_004882b4 + iVar1) = DAT_004882bc;
      *(undefined4 *)(&stack0x00000000 + DAT_004882b8 + iVar1) = uVar4;
      *(undefined1 **)(&stack0x00000004 + iVar1) = &stack0x00000000 + DAT_004882b4 + iVar1;
      *(undefined4 *)(&stack0x00000008 + iVar1) = 1;
      *(undefined4 *)(&stack0x0000000c + iVar1) = 1;
      uVar4 = k3c_internal_pkg_logger_Error();
    }
    k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar4);
    dVar11 = *(double *)(&stack0x00000004 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_004882c0 + iVar1);
    *(double *)(&stack0x00000008 + iVar1) = *DAT_004882c4 + dVar11;
    uVar4 = k3c_internal_pkg_reactor___Reactor__Pause();
    k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar4);
    dVar11 = *(double *)(&stack0x00000004 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_004882c0 + iVar1);
    *(double *)(&stack0x00000008 + iVar1) = dVar11 + *DAT_004882c4;
    uVar4 = k3c_internal_pkg_reactor___Reactor__Pause();
    k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar4);
    dVar11 = *(double *)(&stack0x00000004 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_004882c0 + iVar1);
    *(double *)(&stack0x00000008 + iVar1) = dVar11 + *DAT_004882c4;
    k3c_internal_pkg_reactor___Reactor__Pause();
    (&stack0x00000023)[iVar1] = 0;
    (*(code *)**(undefined4 **)(&stack0x00000000 + DAT_0048828c + iVar1))();
                    /* WARNING: Could not recover jumptable at 0x004881f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar8)();
    return;
  }
  pcVar3 = *(code **)(*(int *)(&stack0x0000000c + iVar1) + 0xc);
  *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000010 + iVar1);
  (*pcVar3)();
  uVar4 = *(undefined4 *)(&stack0x00000008 + iVar1);
  uVar7 = *(undefined4 *)(&stack0x0000000c + iVar1);
  *(undefined4 *)(&stack0x00000000 + DAT_004882b4 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000000 + DAT_004882b8 + iVar1) = 0;
  *(undefined4 *)(&stack0x00000004 + iVar1) = uVar4;
  *(undefined4 *)(&stack0x00000008 + iVar1) = uVar7;
  FUN_0008f77c();
  uVar4 = *(undefined4 *)(&stack0x0000000c + iVar1);
  *(undefined4 *)(&stack0x00000000 + DAT_004882b4 + iVar1) = DAT_004882bc;
  *(undefined4 *)(&stack0x00000000 + DAT_004882b8 + iVar1) = uVar4;
  *(undefined1 **)(&stack0x00000004 + iVar1) = &stack0x00000000 + DAT_004882b4 + iVar1;
  *(undefined4 *)(&stack0x00000008 + iVar1) = 1;
  *(undefined4 *)(&stack0x0000000c + iVar1) = 1;
  k3c_internal_pkg_logger_Error();
                    /* WARNING: Could not recover jumptable at 0x00488268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar9)();
  return;
}



/* k3c/internal/pkg/serialhdl.Arduino_reset.deferwrap1 @ 004882cc (size 100) */

void k3c_internal_pkg_serialhdl_Arduino_reset_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if ((undefined4 *)**(int **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = *(undefined4 *)**(int **)(unaff_r7 + 4);
    FUN_0012fb5c();
  }
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Disconnect.func1 @ 00488330 (size 108) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_serialhdl___SerialReader__Disconnect_func1
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar1;
  undefined4 unaff_lr;
  bool bVar2;
  undefined8 uVar3;
  
  do {
    uVar3 = CONCAT44(*(undefined1 **)(unaff_r10 + 8),param_1);
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar1 = (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_lr;
      bVar2 = *(int *)((int)register0x00000054 + 0xc) == _UNK_004883a0;
      if (bVar2) {
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        k3c_internal_pkg_reactor___ReactorCompletion__Complete();
        *(undefined1 *)((int)register0x00000054 + 0x14) = 1;
                    /* WARNING: Could not recover jumptable at 0x00488374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x10))();
        return;
      }
      *(int *)((int)register0x00000054 + -0xc) = *(int *)((int)register0x00000054 + 0xc);
      *(int *)((int)register0x00000054 + -8) = _UNK_004883a0;
      *(undefined4 *)((int)register0x00000054 + -4) = _UNK_004883a4;
      unaff_lr = 0x48838c;
      uVar3 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x10);
      param_3 = extraout_r2;
      if (bVar2) {
        register0x00000054 = (BADSPACEBASE *)puVar1;
      }
    }
    param_1 = FUN_0009bf64((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x488398;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/serialhdl.(*SerialRetryCommand).handle_callback-fm @ 00488428 (size 144) */

void k3c_internal_pkg_serialhdl___SerialRetryCommand__handle_callback_fm(void)

{
  int iVar1;
  int *piVar2;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar2 = *(int **)(unaff_r10 + 0x10);
  if ((piVar2 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar2)) {
    *piVar2 = (int)register0x00000054;
  }
  iVar1 = *(int *)(unaff_r7 + 4);
  if (*DAT_004884bc != 0) {
    iVar1 = FUN_0009db64();
    *unaff_r8 = in_stack_00000004;
    unaff_r8[1] = *(undefined4 *)(iVar1 + 0x14);
  }
  *(undefined4 *)(iVar1 + 0x14) = in_stack_00000004;
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader)._handle_unknown_init-fm @ 004884c0 (size 108) */

void k3c_internal_pkg_serialhdl___SerialReader___handle_unknown_init_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *(undefined4 *)(unaff_r7 + 4);
  uStack_c = in_stack_00000004;
  k3c_internal_pkg_serialhdl___SerialReader___handle_unknown_init();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).handle_output-fm @ 0048852c (size 276) */

void k3c_internal_pkg_serialhdl___SerialReader__handle_output_fm(void)

{
  int *piVar1;
  int extraout_r2;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_2c;
  }
  FUN_0009defc(0,&uStack_18,*(undefined4 *)(unaff_r7 + 4));
  uStack_2c = *(undefined4 *)(extraout_r2 + 4);
  uStack_28 = *(undefined4 *)(extraout_r2 + 8);
  FUN_0008f77c();
  uStack_18 = DAT_00488644;
  uStack_14 = puStack_24;
  uStack_2c = DAT_00488648;
  uStack_28 = in_stack_00000004;
  puStack_24 = (undefined4 *)DAT_0048864c;
  uStack_20 = 5;
  FUN_00025f60();
  uStack_10 = *puStack_1c;
  uStack_c = puStack_1c[1];
  uStack_2c = DAT_00488648;
  uStack_28 = in_stack_00000004;
  puStack_24 = (undefined4 *)DAT_00488650;
  uStack_20 = 4;
  FUN_00025f60();
  uStack_8 = *puStack_1c;
  uStack_4 = puStack_1c[1];
  uStack_2c = DAT_00488654;
  uStack_28 = 8;
  puStack_24 = &uStack_18;
  uStack_20 = 3;
  puStack_1c = (undefined4 *)0x3;
  k3c_internal_pkg_logger_Warnf();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader)._get_identify_data-fm @ 004886dc (size 108) */

void k3c_internal_pkg_serialhdl___SerialReader___get_identify_data_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined8 *)*piVar1)) {
    *piVar1 = (int)&uStack_14;
  }
  uStack_14 = *(undefined4 *)(unaff_r7 + 4);
  uStack_10 = in_stack_00000004;
  k3c_internal_pkg_serialhdl___SerialReader___get_identify_data();
  return;
}



/* k3c/internal/pkg/serialhdl.(*SerialReader).Handle_unknown-fm @ 00488748 (size 292) */

void k3c_internal_pkg_serialhdl___SerialReader__Handle_unknown_fm(void)

{
  int *piVar1;
  int extraout_r2;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_2c;
  }
  FUN_0009defc(0,&uStack_18,*(undefined4 *)(unaff_r7 + 4));
  uStack_2c = *(undefined4 *)(extraout_r2 + 4);
  uStack_28 = *(undefined4 *)(extraout_r2 + 8);
  FUN_0008f77c();
  uStack_18 = DAT_00488870;
  uStack_14 = puStack_24;
  uStack_2c = DAT_00488874;
  uStack_28 = in_stack_00000004;
  puStack_24 = (undefined4 *)DAT_00488878;
  uStack_20 = 6;
  FUN_00025f60();
  uStack_10 = *puStack_1c;
  uStack_c = puStack_1c[1];
  uStack_2c = DAT_00488874;
  uStack_28 = in_stack_00000004;
  puStack_24 = (undefined4 *)DAT_0048887c;
  uStack_20 = 4;
  FUN_00025f60();
  uStack_8 = *puStack_1c;
  uStack_4 = puStack_1c[1];
  uStack_2c = DAT_00488880;
  uStack_28 = 0x1d;
  puStack_24 = &uStack_18;
  uStack_20 = 3;
  puStack_1c = (undefined4 *)0x3;
  k3c_internal_pkg_logger_Warnf();
  return;
}



