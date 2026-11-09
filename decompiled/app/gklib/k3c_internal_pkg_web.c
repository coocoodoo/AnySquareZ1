// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/web   functions: 99
/* k3c/internal/pkg/web.NewAPIDumpHelper @ 00474b4c (size 236) */

void k3c_internal_pkg_web_NewAPIDumpHelper(void)

{
  int iVar1;
  undefined4 *extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar3;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 *local_c;
  
  while (uVar2 = DAT_00474c3c, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  if (*DAT_00474c40 != 0) {
    FUN_0009db64();
    *unaff_r8 = in_stack_00000004;
    unaff_r8[1] = in_stack_00000008;
    local_c = extraout_r1;
  }
  *local_c = in_stack_00000004;
  local_c[1] = in_stack_00000008;
  iVar1 = in_stack_0000000c;
  if (in_stack_0000000c == 0) {
    iVar1 = DAT_00474c44;
  }
  uVar3 = CONCAT44(local_c,iVar1);
  if (*DAT_00474c40 != 0) {
    uVar3 = FUN_0009db54();
    *unaff_r8 = (int)uVar3;
  }
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  *(int *)(iVar1 + 8) = (int)uVar3;
  *(undefined1 *)(iVar1 + 0x14) = 0;
  *(undefined8 *)(iVar1 + 0xc) = in_stack_00000010;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  FUN_000908bc();
  if (*DAT_00474c40 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = *(undefined4 *)(iVar1 + 0x1c);
    uVar2 = extraout_r1_00;
  }
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  return;
}



/* k3c/internal/pkg/web.(*APIDumpHelper)._stop @ 00474c48 (size 540) */

void k3c_internal_pkg_web___APIDumpHelper___stop(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int extraout_r2;
  int *piVar4;
  int iVar5;
  int extraout_r2_00;
  uint uVar6;
  int iVar7;
  int extraout_r3;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *unaff_r8;
  int unaff_r10;
  undefined8 uVar11;
  int *in_stack_00000004;
  undefined8 in_stack_00000008;
  int local_40;
  undefined4 local_34;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_000908bc();
  piVar1 = in_stack_00000004;
  if (*DAT_00474e68 != 0) {
    piVar1 = (int *)FUN_0009db64();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = piVar1[7];
    local_40 = extraout_r2;
  }
  piVar1[7] = local_40;
  piVar4 = (int *)piVar1[6];
  piVar3 = *(int **)(*(int *)(*piVar1 + 0xc) + 0x2c);
  *(undefined8 *)(piVar4 + 1) = *DAT_00474e6c;
  uVar6 = piVar3[1];
  FUN_000986b8();
  iVar5 = *piVar3;
  iVar7 = piVar3[1];
  uVar10 = 0;
  piVar1 = piVar3;
  iVar2 = iVar5;
  iVar8 = iVar7;
  for (iVar9 = 0; uVar11 = CONCAT44(piVar1,local_34), iVar9 < iVar8; iVar9 = iVar9 + 1) {
    unaff_r8 = *(int **)(iVar2 + iVar9 * 4);
    if (unaff_r8 != piVar4) {
      uVar10 = uVar10 + 1;
      if (uVar6 < uVar10) {
        FUN_000987f4();
        local_34 = local_2c;
        piVar1 = piVar3;
        iVar2 = iVar5;
        iVar8 = iVar7;
        uVar6 = local_24;
        uVar10 = local_28;
      }
      uVar11 = CONCAT44(piVar1,local_34);
      if (*DAT_00474e68 != 0) {
        uVar11 = FUN_0009db64();
        *unaff_r8 = (int)unaff_r8;
        unaff_r8[1] = *(int *)((int)uVar11 + (uVar10 - 1) * 4);
        iVar2 = extraout_r2_00;
        iVar8 = extraout_r3;
      }
      *(int **)((int)uVar11 + (uVar10 - 1) * 4) = unaff_r8;
    }
    piVar1 = (int *)((ulonglong)uVar11 >> 0x20);
    local_34 = (undefined4)uVar11;
  }
  piVar1[1] = uVar10;
  piVar1[2] = uVar6;
  if (*DAT_00474e68 != 0) {
    uVar11 = FUN_0009db74();
    *unaff_r8 = (int)uVar11;
    unaff_r8[1] = *(int *)((ulonglong)uVar11 >> 0x20);
    unaff_r8[2] = in_stack_00000004[6];
  }
  *(undefined4 *)((ulonglong)uVar11 >> 0x20) = (int)uVar11;
  in_stack_00000004[6] = 0;
  if ((char)in_stack_00000004[5] == '\0') {
    return;
  }
  k3c_internal_pkg_web___APIDumpHelper__tryCatchExcept();
  *(undefined1 *)(in_stack_00000004 + 5) = 0;
  if ((int *)in_stack_00000004[7] == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)in_stack_00000004[7];
  }
  if (0 < iVar2) {
    k3c_internal_pkg_web___APIDumpHelper___start();
  }
  return;
}



/* k3c/internal/pkg/web.(*APIDumpHelper).tryCatchExcept @ 00474e74 (size 120) */

void k3c_internal_pkg_web___APIDumpHelper__tryCatchExcept(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 local_c;
  int local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_c = DAT_00474ef8;
  local_8 = in_stack_00000004;
  local_4 = &local_c;
  (*(code *)**(undefined4 **)(in_stack_00000004 + 8))();
  (*(code *)*local_4)();
  return;
}



/* k3c/internal/pkg/web.(*APIDumpHelper).tryCatchExcept.func1 @ 00474efc (size 172) */

void k3c_internal_pkg_web___APIDumpHelper__tryCatchExcept_func1(void)

{
  int iVar1;
  undefined1 *extraout_r2;
  int unaff_r7;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *local_20;
  int local_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  local_20 = &stack0x00000004;
  iVar1 = *(int *)(unaff_r7 + 4);
  FUN_00054ee0();
  if (local_1c != 0) {
    local_20 = DAT_00474fac;
    k3c_internal_pkg_logger_Errorf();
  }
  FUN_000908bc();
  if (*DAT_00474fb0 != 0) {
    iVar1 = FUN_0009db64();
    *unaff_r8 = (int)extraout_r2;
    unaff_r8[1] = *(int *)(iVar1 + 0x1c);
    local_20 = extraout_r2;
  }
  *(undefined1 **)(iVar1 + 0x1c) = local_20;
  return;
}



/* k3c/internal/pkg/web.(*APIDumpHelper)._start @ 00474fb4 (size 268) */

void k3c_internal_pkg_web___APIDumpHelper___start(void)

{
  int extraout_r1;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 *puStack_2c;
  int local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (*(char *)(in_stack_00000004 + 0x14) != '\0') {
    return;
  }
  *(undefined1 *)(in_stack_00000004 + 0x14) = 1;
  k3c_internal_pkg_web___APIDumpHelper___start_func1();
  k3c_internal_pkg_chelper__Cfunc_get_monotonic(in_stack_00000004);
  FUN_00022cf8();
  *puStack_2c = DAT_004750c8;
  if (*DAT_004750cc != 0) {
    puStack_2c = (undefined4 *)FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
  }
  puStack_2c[1] = in_stack_00000004;
  k3c_internal_pkg_reactor___Reactor__Register_timer();
  if (*DAT_004750cc != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *(int *)(in_stack_00000004 + 0x18);
    local_20 = extraout_r1;
  }
  *(int *)(in_stack_00000004 + 0x18) = local_20;
  return;
}



/* k3c/internal/pkg/web.(*APIDumpHelper)._start.func1 @ 004750d0 (size 120) */

void k3c_internal_pkg_web___APIDumpHelper___start_func1(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 local_c;
  int local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_c = DAT_00475154;
  local_8 = in_stack_00000004;
  local_4 = &local_c;
  (*(code *)**(undefined4 **)(in_stack_00000004 + 8))();
  (*(code *)*local_4)();
  return;
}



/* k3c/internal/pkg/web.(*APIDumpHelper)._start.func1.1 @ 00475158 (size 216) */

void k3c_internal_pkg_web___APIDumpHelper___start_func1_1(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  int local_24;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  iVar1 = *(int *)(unaff_r7 + 4);
  FUN_00054ee0();
  uVar2 = DAT_00475234;
  if (local_24 == 0) {
    return;
  }
  k3c_internal_pkg_logger_Errorf();
  *(undefined1 *)(iVar1 + 0x14) = 0;
  FUN_000908bc();
  if (*DAT_00475238 != 0) goto LAB_0047520c;
  do {
    *(undefined4 *)(iVar1 + 0x1c) = uVar2;
    FUN_00095b00();
LAB_0047520c:
    FUN_0009db64();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *(undefined4 *)(iVar1 + 0x1c);
    uVar2 = extraout_r1;
  } while( true );
}



/* k3c/internal/pkg/web.(*APIDumpHelper).AddClient @ 0047523c (size 52) */

void k3c_internal_pkg_web___APIDumpHelper__AddClient(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x47526c;
    FUN_0009bf64();
  }
  k3c_internal_pkg_web___APIDumpHelper__add_client();
                    /* WARNING: Could not recover jumptable at 0x00475260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/web.(*APIDumpHelper).add_client @ 00475270 (size 216) */

void k3c_internal_pkg_web___APIDumpHelper__add_client(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_web___WebRequest__get_dict();
  FUN_00090d70();
  puVar1 = (undefined4 *)0x0;
  if (*(int *)PTR_DAT_00475358 != 0) {
    puVar1 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = local_14;
    unaff_r8[1] = *puVar1;
  }
  *puVar1 = local_14;
  k3c_internal_pkg_web___APIDumpHelper___start();
  return;
}



/* k3c/internal/pkg/web.(*APIDumpHelper).AddInternalClient @ 0047535c (size 52) */

void k3c_internal_pkg_web___APIDumpHelper__AddInternalClient(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x47538c;
    FUN_0009bf64();
  }
  k3c_internal_pkg_web___APIDumpHelper__add_internal_client();
                    /* WARNING: Could not recover jumptable at 0x00475380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/web.(*APIDumpHelper).add_internal_client @ 00475390 (size 204) */

void k3c_internal_pkg_web___APIDumpHelper__add_internal_client(void)

{
  undefined *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 *local_1c;
  undefined4 *local_14;
  
  while (puVar1 = PTR_DAT_00475460, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *local_1c = PTR_DAT_00475464;
  *(undefined1 *)(local_1c + 3) = 0;
  FUN_000908bc();
  FUN_00090d70();
  if (*(int *)PTR_DAT_00475470 != 0) {
    local_14 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *local_14;
  }
  *local_14 = puVar1;
  k3c_internal_pkg_web___APIDumpHelper___start();
  return;
}



/* k3c/internal/pkg/web.(*APIDumpHelper)._update @ 00475474 (size 764) */

void k3c_internal_pkg_web___APIDumpHelper___update(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint extraout_r3;
  int iVar4;
  int *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  char cVar5;
  ulonglong uVar6;
  int local_a8;
  int *local_a4;
  int local_98;
  int local_68;
  int *local_64;
  int local_38;
  int local_34;
  int *local_30 [12];
  
  while (&local_38 <= *(int **)(unaff_r10 + 8)) {
    unaff_lr = 0x47576c;
    FUN_0009bf64();
  }
  iVar1 = in_stack_00000004;
  k3c_internal_pkg_web___APIDumpHelper__tryCatchExceptForDataCb();
  if (local_98 != 0) {
    k3c_internal_pkg_logger_Errorf();
    return;
  }
  if (local_a8 == 0) {
    return;
  }
  FUN_0009dee4(0,local_30,in_stack_00000004,*(undefined4 *)(in_stack_00000004 + 0x1c),unaff_lr,iVar1
               ,in_stack_00000008);
  uVar6 = (ulonglong)extraout_r3;
  FUN_00091764();
  do {
    cVar5 = (char)uVar6;
    if (local_30[0] == (int *)0x0) {
      return;
    }
    iVar3 = *local_30[0];
    iVar1 = local_30[0][1];
    (**(code **)(iVar3 + 0xc))();
    if (cVar5 == '\0') {
      FUN_000908bc();
      FUN_0009dee4(0,&local_68);
      FUN_00091764();
      while (local_68 != 0) {
        iVar4 = *local_64;
        iVar1 = local_64[1];
        FUN_00093a08();
        *local_a4 = iVar4;
        piVar2 = local_a4;
        if (*(int *)PTR_DAT_00475784 != 0) {
          piVar2 = (int *)FUN_0009db64();
          *unaff_r8 = iVar1;
          unaff_r8[1] = piVar2[1];
        }
        piVar2[1] = iVar1;
        FUN_000919c8();
      }
      FUN_00093a08();
      *local_a4 = local_a8;
      piVar2 = local_a4;
      if (*(int *)PTR_DAT_00475784 != 0) {
        piVar2 = (int *)FUN_0009db64();
        *unaff_r8 = (int)local_a4;
        unaff_r8[1] = piVar2[1];
      }
      piVar2[1] = (int)local_a4;
      uVar6 = ZEXT48(PTR_DAT_0047577c);
      (**(code **)(iVar3 + 0x10))();
    }
    else {
      uVar6 = (ulonglong)*(uint *)(in_stack_00000004 + 0x1c);
      local_38 = iVar3;
      local_34 = iVar1;
      FUN_000912d4();
      if (*(int **)(in_stack_00000004 + 0x1c) == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = **(int **)(in_stack_00000004 + 0x1c);
      }
      if (iVar1 == 0) {
        k3c_internal_pkg_web___APIDumpHelper___stop();
        return;
      }
    }
    FUN_000919c8();
  } while( true );
}



/* k3c/internal/pkg/web.(*APIDumpHelper).tryCatchExceptForDataCb @ 00475788 (size 188) */

void k3c_internal_pkg_web___APIDumpHelper__tryCatchExceptForDataCb(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 local_14;
  undefined4 *local_10;
  undefined8 *local_c;
  int local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  local_14 = DAT_00475850;
  local_10 = &stack0x00000020;
  local_c = &stack0x00000018;
  local_8 = in_stack_00000004;
  local_4 = &local_14;
  (*(code *)**(undefined4 **)(in_stack_00000004 + 4))();
  in_stack_00000010 = DAT_00475854;
  (*(code *)*local_4)();
  return;
}



/* k3c/internal/pkg/web.(*APIDumpHelper).tryCatchExceptForDataCb.func1 @ 00475858 (size 224) */

void k3c_internal_pkg_web___APIDumpHelper__tryCatchExceptForDataCb_func1(void)

{
  undefined4 *extraout_r2;
  undefined4 *puVar1;
  undefined4 *extraout_r2_00;
  undefined4 uVar2;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined8 *local_8;
  undefined4 *local_4;
  
  uVar3 = CONCAT44(uStack_20,local_24);
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x475934;
    FUN_0009bf00();
  }
  local_4 = *(undefined4 **)(unaff_r7 + 4);
  puVar4 = &stack0x00000004;
  local_8 = *(undefined8 **)(unaff_r7 + 8);
  FUN_00054ee0();
  *local_4 = local_24;
  uVar2 = 0;
  puVar1 = local_4;
  if (*DAT_0047593c != 0) {
    uVar3 = FUN_0009db64();
    *unaff_r8 = (int)((ulonglong)uVar3 >> 0x20);
    uVar2 = extraout_r2[1];
    unaff_r8[1] = uVar2;
    puVar1 = extraout_r2;
  }
  puVar1[1] = (int)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 != 0) {
    FUN_0009df04(0,&local_18,puVar1,uVar2,unaff_lr,puVar4);
    local_18 = DAT_00475940;
    local_14 = DAT_00475944;
    local_10 = *extraout_r2_00;
    local_c = extraout_r2_00[1];
    k3c_internal_pkg_logger_Error();
    k3c_internal_pkg_web___APIDumpHelper___stop();
    *local_8 = 0x200000002;
  }
  return;
}



/* k3c/internal/pkg/web.(*InternalDumpClient).Get_messages @ 00475948 (size 32) */

void k3c_internal_pkg_web___InternalDumpClient__Get_messages(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  uStack00000008 = *in_stack_00000004;
  uStack0000000c = in_stack_00000004[1];
  uStack00000010 = in_stack_00000004[2];
                    /* WARNING: Could not recover jumptable at 0x00475964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/web.(*InternalDumpClient).Finalize @ 00475968 (size 16) */

void k3c_internal_pkg_web___InternalDumpClient__Finalize(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  
  *(undefined1 *)(in_stack_00000004 + 0xc) = 1;
                    /* WARNING: Could not recover jumptable at 0x00475974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/web.(*InternalDumpClient).Is_closed @ 00475978 (size 16) */

void k3c_internal_pkg_web___InternalDumpClient__Is_closed(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x00475984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/web.(*InternalDumpClient).Send @ 00475988 (size 508) */

void k3c_internal_pkg_web___InternalDumpClient__Send(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int extraout_r1;
  int iVar5;
  uint extraout_r2;
  int extraout_r2_00;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int *extraout_r3;
  int iVar9;
  int extraout_r3_00;
  int iVar10;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  undefined1 uVar12;
  undefined8 uVar13;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar11 = (undefined1 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x60) = unaff_lr;
      FUN_000908bc();
      uVar13 = CONCAT44(PTR_DAT_00475b88,*(undefined **)((int)register0x00000054 + 8));
      uVar12 = 0;
      if (*(undefined **)((int)register0x00000054 + 8) == PTR_DAT_00475b88) {
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x5c);
        FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x30));
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00475b88;
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined1 **)((int)register0x00000054 + -0x54) =
             (undefined1 *)((int)register0x00000054 + -0x30);
        FUN_00091764();
        iVar5 = *(int *)((int)register0x00000054 + -0x34);
        while( true ) {
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x30);
          if (puVar1 == (undefined4 *)0x0) {
            piVar3 = *(int **)((int)register0x00000054 + 4);
            uVar4 = piVar3[2];
            uVar8 = piVar3[1] + 1;
            iVar10 = *piVar3;
            if (uVar4 < uVar8) {
              *(int *)((int)register0x00000054 + -0x5c) = iVar10;
              *(uint *)((int)register0x00000054 + -0x58) = uVar8;
              *(uint *)((int)register0x00000054 + -0x54) = uVar4;
              *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
              *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00475b8c;
              FUN_000987f4();
              iVar10 = *(int *)((int)register0x00000054 + -0x48);
              uVar8 = *(uint *)((int)register0x00000054 + -0x44);
              piVar3 = *(int **)((int)register0x00000054 + 4);
              piVar3[2] = *(int *)((int)register0x00000054 + -0x40);
              if (*(int *)PTR_DAT_00475b90 != 0) {
                FUN_0009db64();
                *unaff_r8 = extraout_r1;
                unaff_r8[1] = *extraout_r3;
                iVar10 = extraout_r1;
                uVar8 = extraout_r2;
                piVar3 = extraout_r3;
              }
              *piVar3 = iVar10;
              iVar5 = *(int *)((int)register0x00000054 + -0x34);
            }
            piVar3[1] = uVar8;
            iVar9 = uVar8 - 1;
            if (*(int *)PTR_DAT_00475b90 != 0) {
              piVar3 = (int *)FUN_0009db64();
              *unaff_r8 = extraout_r2_00;
              unaff_r8[1] = *(int *)(iVar10 + extraout_r3_00 * 4);
              iVar5 = extraout_r2_00;
              iVar9 = extraout_r3_00;
            }
            *(int *)(iVar10 + iVar9 * 4) = iVar5;
            if (9999 < piVar3[1]) {
              *(undefined1 *)(piVar3 + 3) = 1;
            }
                    /* WARNING: Could not recover jumptable at 0x00475b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x60))();
            return;
          }
          puVar6 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x2c);
          uVar12 = puVar6 == PTR_DAT_00475b88;
          if (!(bool)uVar12) break;
          uVar7 = *puVar1;
          uVar2 = puVar1[1];
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               (*(undefined4 **)((int)register0x00000054 + -0x2c))[1];
          *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00475b8c;
          *(int *)((int)register0x00000054 + -0x58) = iVar5;
          *(undefined4 *)((int)register0x00000054 + -0x54) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x50) = uVar2;
          FUN_00093a08();
          piVar3 = *(int **)((int)register0x00000054 + -0x4c);
          if (*(int *)PTR_DAT_00475b90 == 0) {
            iVar5 = *(int *)((int)register0x00000054 + -0x38);
          }
          else {
            piVar3 = (int *)FUN_0009db64();
            iVar5 = *(int *)((int)register0x00000054 + -0x38);
            *unaff_r8 = iVar5;
            unaff_r8[1] = *piVar3;
          }
          *piVar3 = iVar5;
          *(undefined1 **)((int)register0x00000054 + -0x5c) =
               (undefined1 *)((int)register0x00000054 + -0x30);
          FUN_000919c8();
          iVar5 = *(int *)((int)register0x00000054 + -0x34);
        }
        *(undefined **)((int)register0x00000054 + -0x5c) = puVar6;
        *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00475b88;
        *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00475b94;
        uVar13 = FUN_000209b4();
      }
      *(undefined8 *)((int)register0x00000054 + -0x5c) = uVar13;
      *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00475b94;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x60);
      if ((bool)uVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar11;
      }
    }
    unaff_lr = 0x475b80;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/web.NewWebRequest @ 00475b98 (size 1044) */

/* WARNING: Removing unreachable block (ram,0x00475da4) */
/* WARNING: Removing unreachable block (ram,0x00475de8) */
/* WARNING: Removing unreachable block (ram,0x00475de0) */
/* WARNING: Removing unreachable block (ram,0x00475dec) */
/* WARNING: Removing unreachable block (ram,0x00475e08) */
/* WARNING: Removing unreachable block (ram,0x00475dfc) */
/* WARNING: Removing unreachable block (ram,0x00475e20) */
/* WARNING: Removing unreachable block (ram,0x00475e28) */

void k3c_internal_pkg_web_NewWebRequest(void)

{
  undefined4 uVar1;
  undefined4 *extraout_r1;
  undefined4 *puVar2;
  undefined *extraout_r1_00;
  undefined *puVar3;
  int extraout_r1_01;
  undefined *extraout_r1_02;
  undefined *puVar4;
  int extraout_r2;
  undefined4 uVar5;
  undefined4 extraout_r3;
  undefined4 *extraout_r3_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  bool bVar6;
  undefined8 uVar7;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *local_28;
  int local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  puVar2 = local_28;
  if (*(int *)PTR_DAT_00475fb4 != 0) {
    FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
    puVar2 = extraout_r1;
  }
  *puVar2 = in_stack_00000004;
  puVar4 = PTR_DAT_00475fb8;
  FUN_00022cf8();
  FUN_000908bc();
  if (*(int *)PTR_DAT_00475fb4 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = *local_28;
    puVar4 = extraout_r1_00;
  }
  *local_28 = puVar4;
  FUN_000766e8();
  FUN_001574a4();
  if (local_18 != 0) {
    (**(code **)(local_18 + 0xc))();
    FUN_0008f77c();
    k3c_internal_pkg_logger_Error();
    return;
  }
  FUN_00025f60();
  bVar6 = (undefined *)*local_28 != PTR_DAT_00475fc4;
  if (bVar6) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)local_28[1];
  }
  *(undefined8 *)(puVar2 + 1) = uVar7;
  if (bVar6) {
    k3c_internal_pkg_logger_Error();
    return;
  }
  FUN_00025f60();
  puVar4 = PTR_DAT_00475fcc;
  puVar3 = (undefined *)*local_28;
  if (puVar3 == PTR_DAT_00475fcc) {
    uVar5 = *(undefined4 *)local_28[1];
    uVar1 = ((undefined4 *)local_28[1])[1];
  }
  else {
    uVar1 = 0;
    uVar5 = 0;
  }
  puVar2[4] = uVar1;
  if (*(int *)PTR_DAT_00475fb4 == 0) {
    bVar6 = puVar3 == puVar4;
  }
  else {
    FUN_0009db64();
    *unaff_r8 = extraout_r3;
    unaff_r8[1] = puVar2[3];
    bVar6 = extraout_r1_01 == extraout_r2;
    uVar5 = extraout_r3;
  }
  puVar2[3] = uVar5;
  puVar4 = PTR_DAT_00475fb8;
  if (bVar6) {
    FUN_00093560();
    FUN_000908bc();
    if (*(int *)PTR_DAT_00475fb4 != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1_02;
      unaff_r8[1] = puVar2[5];
      puVar4 = extraout_r1_02;
    }
    puVar2[5] = puVar4;
    puVar2[6] = 0;
    if (*(int *)PTR_DAT_00475fb4 != 0) {
      uVar5 = FUN_0009db54(puVar2[7]);
      *unaff_r8 = uVar5;
      puVar2 = extraout_r3_00;
    }
    puVar2[7] = 0;
    *(undefined1 *)(puVar2 + 8) = 0;
    return;
  }
  k3c_internal_pkg_logger_Error();
  return;
}



/* k3c/internal/pkg/web.(*WebRequest).Send @ 00475fe0 (size 168) */

void k3c_internal_pkg_web___WebRequest__Send(void)

{
  int iVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined *in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 *puStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x476084;
    FUN_0009bf64();
  }
  if (*(int *)(in_stack_00000004 + 0x18) != 0) {
    FUN_00022cf8();
    puStack_8[1] = 0x22;
    *puStack_8 = PTR_DAT_00476094;
    in_stack_00000010 = PTR_DAT_00476098;
                    /* WARNING: Could not recover jumptable at 0x00476078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 0x18) = in_stack_00000008;
  iVar1 = in_stack_00000004;
  if (*(int *)PTR_DAT_0047608c != 0) {
    iVar1 = FUN_0009db64();
    *unaff_r8 = in_stack_0000000c;
    unaff_r8[1] = *(undefined4 *)(iVar1 + 0x1c);
  }
  *(undefined4 *)(iVar1 + 0x1c) = in_stack_0000000c;
  in_stack_00000010 = (undefined *)0x0;
  in_stack_00000014 = 0;
                    /* WARNING: Could not recover jumptable at 0x00476048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/web.(*WebRequest).GetDict @ 0047609c (size 84) */

void k3c_internal_pkg_web___WebRequest__GetDict(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4760ec;
    FUN_0009bf64();
  }
  k3c_internal_pkg_web___WebRequest__get_dict();
                    /* WARNING: Could not recover jumptable at 0x004760e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/web.(*WebRequest).get_dict @ 004760f0 (size 160) */

void k3c_internal_pkg_web___WebRequest__get_dict(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_web___WebRequest__get();
  if (local_c != 0) {
    if (local_c == DAT_00476194) {
      return;
    }
    return;
  }
  return;
}



/* k3c/internal/pkg/web.(*WebRequest).GetStr @ 00476198 (size 92) */

void k3c_internal_pkg_web___WebRequest__GetStr(void)

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
    UNRECOVERED_JUMPTABLE = (code *)0x4761f0;
    FUN_0009bf64();
  }
  k3c_internal_pkg_web___WebRequest__get_str();
                    /* WARNING: Could not recover jumptable at 0x004761e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/web.(*WebRequest).get_str @ 004761f4 (size 188) */

void k3c_internal_pkg_web___WebRequest__get_str(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 local_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_web___WebRequest__get();
  if (local_c != 0) {
    if (local_c == DAT_004762b4) {
      return;
    }
    return;
  }
  return;
}



/* k3c/internal/pkg/web.(*WebRequest).GetInt @ 004762b8 (size 164) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_web___WebRequest__GetInt(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int *piStack_8;
  char cStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x476358;
    FUN_0009bf64();
  }
  FUN_00093560();
  in_stack_00000014 = in_stack_00000010;
  if ((cStack_4 != '\0') && (*piStack_8 != 0)) {
    if (*piStack_8 == _UNK_00476364) {
      in_stack_00000014 = (int)(longlong)*(double *)piStack_8[1];
    }
    else {
      in_stack_00000014 = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0047634c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/web.(*WebRequest).GetFloat @ 00476368 (size 84) */

void k3c_internal_pkg_web___WebRequest__GetFloat(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined8 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4763b8;
    FUN_0009bf64();
  }
  k3c_internal_pkg_web___WebRequest__get_float();
                    /* WARNING: Could not recover jumptable at 0x004763ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/web.(*WebRequest).get_float @ 004763bc (size 180) */

void k3c_internal_pkg_web___WebRequest__get_float(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined8 in_stack_00000018;
  undefined4 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_web___WebRequest__get();
  if (local_10 != 0) {
    if (local_10 == DAT_00476474) {
      return;
    }
    return;
  }
  return;
}



/* k3c/internal/pkg/web.(*WebRequest).Get @ 00476478 (size 116) */

void k3c_internal_pkg_web___WebRequest__Get(void)

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
    UNRECOVERED_JUMPTABLE = (code *)0x4764e8;
    FUN_0009bf64();
  }
  k3c_internal_pkg_web___WebRequest__get();
                    /* WARNING: Could not recover jumptable at 0x004764dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/web.(*WebRequest).get @ 004764ec (size 528) */

/* WARNING: Removing unreachable block (ram,0x004765d4) */

void k3c_internal_pkg_web___WebRequest__get(void)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined *in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte local_1c;
  undefined *local_10;
  undefined *local_c;
  undefined *local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4766f8;
    FUN_0009bf64();
  }
  uVar2 = *(undefined4 *)(in_stack_00000004 + 0x14);
  puVar4 = PTR_DAT_00476700;
  uVar5 = in_stack_00000008;
  uVar6 = in_stack_0000000c;
  FUN_00093560();
  if (local_1c == 0) {
    if (in_stack_00000010 == PTR_DAT_00476704) {
      cVar3 = '\x01';
    }
    else {
      cVar3 = '\0';
      if (in_stack_00000010 == PTR_DAT_00476708) {
        cVar3 = '\x01';
      }
    }
    if (cVar3 != '\0') {
      FUN_0009df04(0,&local_10,in_stack_00000010,cVar3,unaff_lr,puVar4,uVar2,uVar5,uVar6);
      local_10 = PTR_DAT_0047670c;
      local_c = PTR_DAT_00476714;
      FUN_0008f77c();
      local_8 = PTR_DAT_0047670c;
      local_4 = uVar5;
      k3c_internal_pkg_logger_Error();
      return;
    }
  }
  if (in_stack_00000018 == 0) {
    bVar1 = 0;
  }
  else {
    k3c_common_utils_collections_ContainsKind();
    bVar1 = local_1c ^ 1;
  }
  if ((bVar1 != 0) && (uVar5 = in_stack_00000008, FUN_00093560(), local_1c != 0)) {
    FUN_0009df04(0,&local_10);
    local_10 = PTR_DAT_0047670c;
    local_c = PTR_DAT_00476710;
    FUN_0008f77c();
    local_8 = PTR_DAT_0047670c;
    local_4 = uVar5;
    k3c_internal_pkg_logger_Error();
    return;
  }
  return;
}



/* k3c/internal/pkg/web.(*WebRequest).GetClientConnection @ 00476718 (size 16) */

void k3c_internal_pkg_web___WebRequest__GetClientConnection(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x00476724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/web.(*WebRequest).Set_error @ 00476728 (size 508) */

void k3c_internal_pkg_web___WebRequest__Set_error(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 local_18;
  undefined4 *local_10;
  
  while (uVar3 = in_stack_00000008, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_common_errors_FromError();
  *(undefined1 *)(in_stack_00000004 + 0x20) = 1;
  FUN_000908bc();
  FUN_0008f77c();
  puVar1 = PTR_s_errorlevelwlan0labelgklib_s__s___00820821_0x5fa_0047692c;
  FUN_00093a08();
  *local_10 = PTR_DAT_00476930;
  puVar4 = local_10;
  if (*(int *)PTR_DAT_00476934 != 0) {
    puVar4 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = local_18;
    unaff_r8[1] = puVar4[1];
  }
  puVar4[1] = local_18;
  FUN_0008f77c();
  puVar2 = PTR_s_codeunixinforeadseekopensyncfile_00820821_0xe1_00476938;
  FUN_00093a08();
  *local_10 = PTR_DAT_0047693c;
  puVar4 = local_10;
  if (*(int *)PTR_DAT_00476934 != 0) {
    puVar4 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = puVar4[1];
  }
  puVar4[1] = puVar1;
  FUN_0008f77c();
  FUN_00093a08();
  *local_10 = PTR_DAT_00476930;
  if (*(int *)PTR_DAT_00476934 != 0) {
    local_10 = (undefined4 *)FUN_0009db84();
    *unaff_r8 = puVar2;
    unaff_r8[1] = local_10[1];
    unaff_r8[2] = uVar3;
    unaff_r8[3] = *(undefined4 *)(in_stack_00000004 + 0x1c);
  }
  local_10[1] = puVar2;
  *(undefined **)(in_stack_00000004 + 0x18) = PTR_DAT_00476928;
  *(undefined4 *)(in_stack_00000004 + 0x1c) = uVar3;
  return;
}



/* k3c/internal/pkg/web.NewServerSocket @ 00476944 (size 2620) */

/* WARNING: Removing unreachable block (ram,0x00476b3c) */
/* WARNING: Removing unreachable block (ram,0x00476cec) */

void k3c_internal_pkg_web_NewServerSocket(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *extraout_r1;
  int *extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int *extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint extraout_r2;
  undefined *puVar9;
  undefined *extraout_r2_00;
  undefined *extraout_r2_01;
  int extraout_r3;
  uint uVar10;
  int *extraout_r3_00;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  bool bVar12;
  undefined8 uVar13;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x1c)) {
      puVar11 = (undefined1 *)((int)register0x00000054 + -0x9c);
      *(undefined4 *)((int)register0x00000054 + -0x9c) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_00477104;
      FUN_00022cf8();
      piVar4 = *(int **)((int)register0x00000054 + -0x94);
      if (*(int *)PTR_DAT_00477108 == 0) {
        iVar1 = *(int *)((int)register0x00000054 + 8);
        iVar5 = *(int *)((int)register0x00000054 + 4);
      }
      else {
        FUN_0009db64();
        iVar1 = *(int *)((int)register0x00000054 + 8);
        *unaff_r8 = iVar1;
        iVar5 = *(int *)((int)register0x00000054 + 4);
        unaff_r8[1] = iVar5;
        piVar4 = extraout_r1;
      }
      *piVar4 = iVar1;
      piVar4[1] = iVar5;
      iVar1 = *(int *)(iVar1 + 0xc);
      if (*(int *)PTR_DAT_00477108 != 0) {
        FUN_0009db54();
        *unaff_r8 = extraout_r3;
        piVar4 = extraout_r1_00;
        iVar1 = extraout_r3;
      }
      *(int **)((int)register0x00000054 + -8) = piVar4;
      piVar4[2] = iVar1;
      piVar4[3] = 0;
      piVar4[4] = 0;
      piVar4[5] = 0;
      FUN_000908bc();
      iVar1 = *(int *)((int)register0x00000054 + -0x98);
      if (*(int *)PTR_DAT_00477108 == 0) {
        iVar5 = *(int *)((int)register0x00000054 + -8);
      }
      else {
        FUN_0009db64();
        *unaff_r8 = extraout_r1_01;
        iVar5 = *(int *)((int)register0x00000054 + -8);
        unaff_r8[1] = *(int *)(iVar5 + 0x18);
        iVar1 = extraout_r1_01;
      }
      *(int *)(iVar5 + 0x18) = iVar1;
      uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar6;
      *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_0047710c;
      *(undefined4 *)((int)register0x00000054 + -0x94) = uVar6;
      *(undefined **)((int)register0x00000054 + -0x90) =
           PTR_s_apiserverquery_adctimelapsek3c_e_00823504_0xb0_00477110;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 9;
      FUN_00093560(iVar5);
      *(undefined1 *)((int)register0x00000054 + -0x71) =
           *(undefined1 *)((int)register0x00000054 + -0x84);
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           (*(undefined4 **)((int)register0x00000054 + -0x88))[1];
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           **(undefined4 **)((int)register0x00000054 + -0x88);
      *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_0047710c;
      *(undefined4 *)((int)register0x00000054 + -0x94) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      *(undefined **)((int)register0x00000054 + -0x90) =
           PTR_s_debuginputdictionaryerror_exitgc_00823504_0xeae_00477114;
      *(undefined4 *)((int)register0x00000054 + -0x8c) = 10;
      FUN_00093560();
      if ((*(char *)((int)register0x00000054 + -0x71) == '\0') ||
         (*(byte *)((int)register0x00000054 + -0x84) != 0)) {
        *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_00477408;
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0047740c;
        *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_00477410;
        *(undefined **)((int)register0x00000054 + -0x18) =
             PTR_DAT_00477414 + (uint)*(byte *)((int)register0x00000054 + -0x84) * 8;
        *(undefined1 **)((int)register0x00000054 + -0x98) =
             (undefined1 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x94) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x90) = 2;
        k3c_internal_pkg_logger_Warn();
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        return;
      }
      bVar12 = *(undefined **)((int)register0x00000054 + -0x6c) == PTR_DAT_00477118;
      if (bVar12) {
        uVar6 = **(undefined4 **)((int)register0x00000054 + -0x44);
        uVar7 = (*(undefined4 **)((int)register0x00000054 + -0x44))[1];
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x94) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x90) = uVar7;
        k3c_internal_pkg_web___ServerSocket___remove_socket_file();
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             (*(undefined4 **)((int)register0x00000054 + -0x44))[1];
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             **(undefined4 **)((int)register0x00000054 + -0x44);
        *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_0047711c;
        FUN_00022cf8();
        piVar4 = *(int **)((int)register0x00000054 + -0x94);
        piVar4[1] = *(int *)((int)register0x00000054 + -0x60);
        if (*(int *)PTR_DAT_00477108 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -0x30);
        }
        else {
          piVar4 = (int *)FUN_0009db54();
          iVar1 = *(int *)((int)register0x00000054 + -0x30);
          *unaff_r8 = iVar1;
        }
        *piVar4 = iVar1;
        piVar4[3] = 4;
        puVar9 = PTR_s_unixinforeadseekopensyncfilelink_00820821_0xe5_00477120;
        piVar4[2] = (int)PTR_s_unixinforeadseekopensyncfilelink_00820821_0xe5_00477120;
        *(undefined **)((int)register0x00000054 + -0x98) = puVar9;
        *(undefined4 *)((int)register0x00000054 + -0x94) = 4;
        *(int **)((int)register0x00000054 + -0x90) = piVar4;
        FUN_001c6670();
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x88);
        uVar7 = **(undefined4 **)((int)register0x00000054 + -0x44);
        uVar6 = (*(undefined4 **)((int)register0x00000054 + -0x44))[1];
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x8c);
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x84);
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x98) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x94) = uVar6;
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_00477118;
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
        *(undefined **)((int)register0x00000054 + -0x98) =
             PTR_s_listening_on__sWebRequestErrorne_008262d0_0x2a66_00477124;
        *(undefined4 *)((int)register0x00000054 + -0x94) = 0xf;
        *(undefined1 **)((int)register0x00000054 + -0x90) =
             (undefined1 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x8c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x88) = 1;
        k3c_internal_pkg_logger_Debugf();
        if (*(int *)((int)register0x00000054 + -100) != 0) {
          pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -100) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x98) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          (*pcVar2)();
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x98) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          *(undefined4 *)((int)register0x00000054 + -0x94) =
               *(undefined4 *)((int)register0x00000054 + -0x90);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_00477118;
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x90);
          *(undefined1 **)((int)register0x00000054 + -0x98) =
               (undefined1 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x94) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x90) = 1;
          k3c_internal_pkg_logger_Error();
        }
        iVar1 = *(int *)((int)register0x00000054 + -8);
        *(undefined **)(iVar1 + 0xc) = PTR_DAT_00477128;
        if (*(int *)PTR_DAT_00477108 == 0) {
          piVar4 = *(int **)((int)register0x00000054 + -0x38);
        }
        else {
          FUN_0009db64();
          piVar4 = *(int **)((int)register0x00000054 + -0x38);
          *unaff_r8 = (int)piVar4;
          unaff_r8[1] = *(int *)(extraout_r1_02 + 0x10);
          iVar1 = extraout_r1_02;
        }
        *(int **)(iVar1 + 0x10) = piVar4;
        if ((piVar4 == (int *)0x0) || (*piVar4 == 0)) {
          puVar9 = (undefined *)0x0;
          piVar4 = (int *)0x0;
        }
        else {
          *(int *)((int)register0x00000054 + -0xc) = *piVar4;
          *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_0047712c;
          FUN_00022cf8();
          piVar4 = *(int **)((int)register0x00000054 + -0x94);
          if (*(int *)PTR_DAT_00477108 == 0) {
            iVar1 = *(int *)((int)register0x00000054 + -0xc);
          }
          else {
            FUN_0009db54();
            iVar1 = *(int *)((int)register0x00000054 + -0xc);
            *unaff_r8 = iVar1;
            piVar4 = extraout_r1_03;
          }
          *piVar4 = iVar1;
          puVar9 = PTR_DAT_00477130;
        }
        *(int **)((int)register0x00000054 + -0x54) = piVar4;
        *(undefined **)((int)register0x00000054 + -0x70) = puVar9;
        *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_00477134;
        FUN_00022cf8();
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_00477138;
        FUN_00022cf8();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x94);
        *puVar3 = PTR_k3c_internal_pkg_web_NewServerSocket_func1_0047713c;
        if (*(int *)PTR_DAT_00477108 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -4);
        }
        else {
          puVar3 = (undefined4 *)FUN_0009db54();
          iVar1 = *(int *)((int)register0x00000054 + -4);
          *unaff_r8 = iVar1;
        }
        puVar3[1] = iVar1;
        pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x70) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined4 **)((int)register0x00000054 + -0x94) = puVar3;
        (*pcVar2)();
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             **(undefined4 **)((int)register0x00000054 + -4);
        *(undefined1 *)((int)register0x00000054 + -0x94) = 1;
        FUN_000f706c();
        if (*(int *)((int)register0x00000054 + -0x90) != 0) {
          pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x90) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x98) =
               *(undefined4 *)((int)register0x00000054 + -0x8c);
          (*pcVar2)();
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x98) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          *(undefined4 *)((int)register0x00000054 + -0x94) =
               *(undefined4 *)((int)register0x00000054 + -0x90);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_00477118;
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x90);
          *(undefined1 **)((int)register0x00000054 + -0x98) =
               (undefined1 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x94) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x90) = 1;
          k3c_internal_pkg_logger_Error();
        }
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -8) + 8);
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             **(undefined4 **)((int)register0x00000054 + -4);
        *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_00477140;
        FUN_00022cf8();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x94);
        *puVar3 = PTR_k3c_internal_pkg_web___ServerSocket___handle_accept_fm_00477144;
        if (*(int *)PTR_DAT_00477108 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -8);
        }
        else {
          puVar3 = (undefined4 *)FUN_0009db54();
          iVar1 = *(int *)((int)register0x00000054 + -8);
          *unaff_r8 = iVar1;
        }
        *(undefined4 **)((int)register0x00000054 + -0x10) = puVar3;
        puVar3[1] = iVar1;
        *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_00477148;
        FUN_00022cf8(puVar3);
        uVar13 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x68),
                          *(undefined4 **)((int)register0x00000054 + -0x94));
        **(undefined4 **)((int)register0x00000054 + -0x94) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        if (*(int *)PTR_DAT_00477108 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -0x10);
        }
        else {
          uVar13 = FUN_0009db54();
          iVar1 = *(int *)((int)register0x00000054 + -0x10);
          *unaff_r8 = iVar1;
        }
        iVar5 = (int)uVar13;
        *(int *)((int)register0x00000054 + -0x50) = iVar5;
        *(int *)(iVar5 + 4) = iVar1;
        *(undefined4 *)(iVar5 + 8) = 0;
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x3c) + 0x40);
        *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_0047714c;
        *(undefined4 *)((int)register0x00000054 + -0x94) = uVar6;
        *(int *)((int)register0x00000054 + -0x90) = (int)((ulonglong)uVar13 >> 0x20);
        FUN_00092908();
        piVar4 = *(int **)((int)register0x00000054 + -0x8c);
        if (*(int *)PTR_DAT_00477108 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -0x50);
        }
        else {
          piVar4 = (int *)FUN_0009db64();
          iVar1 = *(int *)((int)register0x00000054 + -0x50);
          *unaff_r8 = iVar1;
          unaff_r8[1] = *piVar4;
        }
        *piVar4 = iVar1;
        piVar4 = *(int **)(*(int *)((int)register0x00000054 + -0x3c) + 0x3c);
        uVar8 = piVar4[2];
        uVar10 = piVar4[1] + 1;
        iVar5 = *piVar4;
        if (uVar8 < uVar10) {
          *(int **)((int)register0x00000054 + -0x40) = piVar4;
          *(int *)((int)register0x00000054 + -0x98) = iVar5;
          *(uint *)((int)register0x00000054 + -0x94) = uVar10;
          *(uint *)((int)register0x00000054 + -0x90) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = 1;
          *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_00477150;
          FUN_000987f4();
          iVar5 = *(int *)((int)register0x00000054 + -0x84);
          uVar10 = *(uint *)((int)register0x00000054 + -0x80);
          piVar4 = *(int **)((int)register0x00000054 + -0x40);
          piVar4[2] = *(int *)((int)register0x00000054 + -0x7c);
          if (*(int *)PTR_DAT_00477108 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r1_04;
            unaff_r8[1] = *extraout_r3_00;
            iVar5 = extraout_r1_04;
            uVar10 = extraout_r2;
            piVar4 = extraout_r3_00;
          }
          *piVar4 = iVar5;
          iVar1 = *(int *)((int)register0x00000054 + -0x50);
        }
        piVar4[1] = uVar10;
        *(undefined4 *)(iVar5 + (uVar10 - 1) * 8) = *(undefined4 *)((int)register0x00000054 + -0x68)
        ;
        iVar5 = iVar5 + (uVar10 - 1) * 8;
        *(undefined2 *)(iVar5 + 4) = 0x11;
        *(undefined2 *)(iVar5 + 6) = 0;
        if (*(int *)PTR_DAT_00477108 == 0) {
          iVar5 = *(int *)((int)register0x00000054 + -8);
        }
        else {
          FUN_0009db64();
          *unaff_r8 = extraout_r1_05;
          iVar5 = *(int *)((int)register0x00000054 + -8);
          unaff_r8[1] = *(int *)(iVar5 + 0x14);
          iVar1 = extraout_r1_05;
        }
        *(int *)(iVar5 + 0x14) = iVar1;
        *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_00477140;
        FUN_00022cf8();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x94);
        *puVar3 = PTR_k3c_internal_pkg_web___ServerSocket___handle_disconnect_fm_00477154;
        if (*(int *)PTR_DAT_00477108 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -8);
        }
        else {
          puVar3 = (undefined4 *)FUN_0009db54();
          iVar1 = *(int *)((int)register0x00000054 + -8);
          *unaff_r8 = iVar1;
        }
        *(undefined4 **)((int)register0x00000054 + -0x10) = puVar3;
        puVar3[1] = iVar1;
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 0x24);
        *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_00477158;
        *(undefined4 *)((int)register0x00000054 + -0x94) = uVar6;
        *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_0047715c;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = 0x12;
        FUN_00093560(puVar3);
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x88);
        iVar1 = puVar3[1];
        uVar10 = puVar3[2];
        puVar9 = (undefined *)*puVar3;
        if (*(char *)((int)register0x00000054 + -0x84) == '\0') {
          uVar10 = 0;
          iVar1 = 0;
          puVar9 = PTR_DAT_00477160;
        }
        uVar8 = iVar1 + 1;
        if (uVar10 < uVar8) {
          *(undefined **)((int)register0x00000054 + -0x98) = puVar9;
          *(uint *)((int)register0x00000054 + -0x94) = uVar8;
          *(uint *)((int)register0x00000054 + -0x90) = uVar10;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = 1;
          *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_00477164;
          FUN_000987f4();
          puVar9 = *(undefined **)((int)register0x00000054 + -0x84);
          uVar8 = *(uint *)((int)register0x00000054 + -0x80);
          uVar10 = *(uint *)((int)register0x00000054 + -0x7c);
        }
        *(uint *)((int)register0x00000054 + -0x58) = uVar8;
        *(uint *)((int)register0x00000054 + -0x5c) = uVar10;
        if (*(int *)PTR_DAT_00477108 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -0x10);
        }
        else {
          FUN_0009db64();
          iVar1 = *(int *)((int)register0x00000054 + -0x10);
          *unaff_r8 = iVar1;
          unaff_r8[1] = *(int *)(extraout_r2_00 + (uVar8 - 1) * 4);
          puVar9 = extraout_r2_00;
        }
        *(undefined **)((int)register0x00000054 + -0x14) = puVar9;
        *(int *)(puVar9 + (uVar8 - 1) * 4) = iVar1;
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 0x24);
        *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_004773e8;
        *(undefined4 *)((int)register0x00000054 + -0x94) = uVar6;
        *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_004773ec;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = 0x12;
        FUN_00093a08();
        piVar4 = *(int **)((int)register0x00000054 + -0x88);
        piVar4[1] = *(int *)((int)register0x00000054 + -0x58);
        piVar4[2] = *(int *)((int)register0x00000054 + -0x5c);
        if (*(int *)PTR_DAT_004773f0 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -0x14);
        }
        else {
          piVar4 = (int *)FUN_0009db64();
          iVar1 = *(int *)((int)register0x00000054 + -0x14);
          *unaff_r8 = iVar1;
          unaff_r8[1] = *piVar4;
        }
        *piVar4 = iVar1;
        *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_004773f4;
        FUN_00022cf8();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x94);
        *puVar3 = PTR_k3c_internal_pkg_web___ServerSocket___handle_shutdown_fm_004773f8;
        if (*(int *)PTR_DAT_004773f0 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -8);
        }
        else {
          puVar3 = (undefined4 *)FUN_0009db54();
          iVar1 = *(int *)((int)register0x00000054 + -8);
          *unaff_r8 = iVar1;
        }
        *(undefined4 **)((int)register0x00000054 + -0x10) = puVar3;
        puVar3[1] = iVar1;
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 0x24);
        *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_004773e8;
        *(undefined4 *)((int)register0x00000054 + -0x94) = uVar6;
        *(undefined **)((int)register0x00000054 + -0x90) =
             PTR_s_project_shutdownlen_out_of_range_008262d0_0x38fa_004773fc;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = 0x10;
        FUN_00093560(puVar3);
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x88);
        iVar1 = puVar3[1];
        uVar10 = puVar3[2];
        puVar9 = (undefined *)*puVar3;
        if (*(char *)((int)register0x00000054 + -0x84) == '\0') {
          uVar10 = 0;
          iVar1 = 0;
          puVar9 = PTR_DAT_00477400;
        }
        uVar8 = iVar1 + 1;
        if (uVar10 < uVar8) {
          *(undefined **)((int)register0x00000054 + -0x98) = puVar9;
          *(uint *)((int)register0x00000054 + -0x94) = uVar8;
          *(uint *)((int)register0x00000054 + -0x90) = uVar10;
          *(undefined4 *)((int)register0x00000054 + -0x8c) = 1;
          *(undefined **)((int)register0x00000054 + -0x88) = PTR_DAT_00477404;
          FUN_000987f4();
          puVar9 = *(undefined **)((int)register0x00000054 + -0x84);
          uVar8 = *(uint *)((int)register0x00000054 + -0x80);
          uVar10 = *(uint *)((int)register0x00000054 + -0x7c);
        }
        *(uint *)((int)register0x00000054 + -0x58) = uVar8;
        *(uint *)((int)register0x00000054 + -0x5c) = uVar10;
        if (*(int *)PTR_DAT_004773f0 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -0x10);
        }
        else {
          FUN_0009db64();
          iVar1 = *(int *)((int)register0x00000054 + -0x10);
          *unaff_r8 = iVar1;
          unaff_r8[1] = *(int *)(extraout_r2_01 + (uVar8 - 1) * 4);
          puVar9 = extraout_r2_01;
        }
        *(undefined **)((int)register0x00000054 + -0x14) = puVar9;
        *(int *)(puVar9 + (uVar8 - 1) * 4) = iVar1;
        uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 0x24);
        *(undefined **)((int)register0x00000054 + -0x98) = PTR_DAT_004773e8;
        *(undefined4 *)((int)register0x00000054 + -0x94) = uVar6;
        *(undefined **)((int)register0x00000054 + -0x90) =
             PTR_s_project_shutdownlen_out_of_range_008262d0_0x38fa_004773fc;
        *(undefined4 *)((int)register0x00000054 + -0x8c) = 0x10;
        FUN_00093a08();
        piVar4 = *(int **)((int)register0x00000054 + -0x88);
        piVar4[1] = *(int *)((int)register0x00000054 + -0x58);
        piVar4[2] = *(int *)((int)register0x00000054 + -0x5c);
        if (*(int *)PTR_DAT_004773f0 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -0x14);
        }
        else {
          piVar4 = (int *)FUN_0009db64();
          iVar1 = *(int *)((int)register0x00000054 + -0x14);
          *unaff_r8 = iVar1;
          unaff_r8[1] = *piVar4;
        }
        *piVar4 = iVar1;
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             *(undefined4 *)((int)register0x00000054 + -8);
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x98) =
           *(undefined **)((int)register0x00000054 + -0x6c);
      *(undefined **)((int)register0x00000054 + -0x94) = PTR_DAT_00477118;
      *(undefined **)((int)register0x00000054 + -0x90) = PTR_DAT_00477418;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x9c);
      if (bVar12) {
        register0x00000054 = (BADSPACEBASE *)puVar11;
      }
    }
    unaff_lr = 0x4773e0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/web.NewServerSocket.func1 @ 0047741c (size 16) */

void k3c_internal_pkg_web_NewServerSocket_func1(void)

{
  int unaff_r7;
  undefined4 in_stack_00000004;
  
  **(undefined4 **)(unaff_r7 + 4) = in_stack_00000004;
  return;
}



/* k3c/internal/pkg/web.(*ServerSocket)._handle_accept @ 0047742c (size 520) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_web___ServerSocket___handle_accept(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int local_1c;
  undefined4 *local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_logger_Debug();
  (**(code **)(*(int *)(in_stack_00000004 + 0xc) + 0xc))();
  if (local_1c == 0) {
    k3c_internal_pkg_util_Fileno();
    FUN_000f706c();
    (*_DAT_0000000d)();
    FUN_0008f77c();
    k3c_internal_pkg_logger_Error();
    k3c_internal_pkg_web_NewClientConnection();
    FUN_00093a08();
    if (*DAT_00477644 != 0) {
      local_18 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = 0;
      unaff_r8[1] = *local_18;
    }
    *local_18 = 0;
    return;
  }
  (**(code **)(local_1c + 0xc))();
  FUN_0008f77c();
  k3c_internal_pkg_logger_Error();
  return;
}



/* k3c/internal/pkg/web.(*ServerSocket)._handle_disconnect @ 0047764c (size 724) */

void k3c_internal_pkg_web___ServerSocket___handle_disconnect(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *extraout_r1;
  int *piVar4;
  int extraout_r3;
  int iVar5;
  uint uVar6;
  int *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  int in_stack_00000004;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int local_70;
  int local_60;
  uint local_5c;
  uint local_58;
  int local_30 [12];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x47791c;
    FUN_0009bf64();
  }
  FUN_0009dee4(0,local_30,in_stack_00000004,*(undefined4 *)(in_stack_00000004 + 0x18),unaff_lr);
  FUN_00091764();
  local_70 = extraout_r3;
  while (local_30[0] != 0) {
    k3c_internal_pkg_web___ClientConnection__Close();
    if (local_70 != 0) {
      (**(code **)(local_70 + 0xc))();
      FUN_0008f77c();
      local_70 = 1;
      k3c_internal_pkg_logger_Error();
    }
    FUN_000919c8();
  }
  if (*(int *)(in_stack_00000004 + 0xc) != 0) {
    iVar2 = *(int *)(in_stack_00000004 + 8);
    piVar4 = *(int **)(in_stack_00000004 + 0x14);
    local_70 = *(int *)(iVar2 + 0x40);
    FUN_00025164();
    piVar1 = *(int **)(iVar2 + 0x3c);
    iVar2 = *piVar1;
    for (iVar5 = 0; iVar5 < piVar1[1]; iVar5 = iVar5 + 1) {
      if (*(int *)(iVar2 + iVar5 * 8) == *piVar4) {
        uVar3 = piVar1[2];
        uVar6 = piVar1[1] - 1;
        local_70 = iVar2 + ((int)(1 - (uVar3 - iVar5)) >> 0x1f & (iVar5 + 1) * 8);
        if (uVar3 < uVar6) {
          FUN_000987f4();
          uVar3 = local_58;
          iVar2 = local_60;
          uVar6 = local_5c;
        }
        FUN_0009e3a4();
        piVar1[1] = uVar6;
        piVar1[2] = uVar3;
        if (*DAT_00477934 != 0) {
          FUN_0009db64();
          *unaff_r8 = iVar2;
          unaff_r8[1] = *extraout_r1;
          piVar1 = extraout_r1;
        }
        *piVar1 = iVar2;
        break;
      }
    }
    (**(code **)(*(int *)(in_stack_00000004 + 0xc) + 0x14))();
    if (local_70 != 0) {
      (**(code **)(local_70 + 0xc))();
      FUN_0008f77c();
      k3c_internal_pkg_logger_Error();
    }
  }
  return;
}



/* k3c/internal/pkg/web.(*ServerSocket)._remove_socket_file @ 00477938 (size 304) */

void k3c_internal_pkg_web___ServerSocket___remove_socket_file(void)

{
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 local_1c;
  undefined4 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0012ffc0();
  if (local_1c != 0) {
    k3c_common_utils_file_PathExists();
    if (local_18 == 0) {
      if ((char)local_1c != '\0') {
        FUN_0008f77c();
        k3c_internal_pkg_logger_Debugf();
        return;
      }
    }
    else {
      (**(code **)(local_18 + 0xc))();
      k3c_internal_pkg_logger_Debugf();
    }
  }
  return;
}



/* k3c/internal/pkg/web.NewClientConnection @ 00477a74 (size 1236) */

void k3c_internal_pkg_web_NewClientConnection(void)

{
  uint *puVar1;
  int iVar2;
  uint *extraout_r1;
  uint *extraout_r1_00;
  uint *extraout_r1_01;
  uint **ppuVar3;
  undefined1 *puVar5;
  uint extraout_r1_02;
  uint *extraout_r1_03;
  uint extraout_r1_04;
  uint *extraout_r1_05;
  uint *extraout_r1_06;
  uint *extraout_r1_07;
  uint *extraout_r2;
  uint *extraout_r2_00;
  uint *extraout_r2_01;
  uint *extraout_r2_02;
  uint *extraout_r2_03;
  uint uVar7;
  uint extraout_r3;
  uint extraout_r3_00;
  uint extraout_r3_01;
  uint *puVar8;
  uint *extraout_r3_02;
  uint *puVar9;
  uint *unaff_r8;
  int unaff_r10;
  undefined8 uVar10;
  uint *in_stack_00000004;
  uint *in_stack_00000008;
  uint *in_stack_0000000c;
  undefined4 in_stack_00000010;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  uint *local_48;
  undefined4 local_44;
  uint *local_40;
  uint *local_3c;
  uint local_38;
  undefined1 auStack_30 [16];
  uint local_20;
  uint *local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  uint *local_c;
  uint local_8;
  uint *local_4;
  uint **ppuVar4;
  undefined1 *puVar6;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_54 = DAT_00477f4c;
  FUN_00022cf8();
  uVar7 = *in_stack_00000004;
  puVar1 = in_stack_00000004;
  if (*DAT_00477f50 != 0) {
    FUN_0009db54();
    *unaff_r8 = extraout_r3;
    local_50 = extraout_r1;
    puVar1 = extraout_r2;
    uVar7 = extraout_r3;
  }
  *local_50 = uVar7;
  uVar7 = puVar1[1];
  if (*DAT_00477f50 != 0) {
    FUN_0009db54();
    *unaff_r8 = extraout_r3_00;
    local_50 = extraout_r1_00;
    puVar1 = extraout_r2_00;
    uVar7 = extraout_r3_00;
  }
  local_50[1] = uVar7;
  uVar7 = puVar1[2];
  if (*DAT_00477f50 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r3_01;
    unaff_r8[1] = (uint)extraout_r2_01;
    local_50 = extraout_r1_01;
    puVar1 = extraout_r2_01;
    uVar7 = extraout_r3_01;
  }
  local_50[2] = uVar7;
  local_50[3] = (uint)puVar1;
  local_54 = (uint *)*DAT_00477f58;
  local_4 = local_50;
  (**(code **)(*DAT_00477f54 + 0x18))();
  ppuVar4 = &local_50;
  puVar6 = auStack_30;
  do {
    ppuVar3 = (uint **)((int)ppuVar4 + 1);
    *puVar6 = *(undefined1 *)ppuVar4;
    ppuVar4 = ppuVar3;
    puVar6 = puVar6 + 1;
  } while ((int)ppuVar3 <= (int)&local_44 + 3);
  puVar6 = auStack_30;
  ppuVar4 = &local_54;
  do {
    puVar5 = puVar6 + 1;
    *(undefined1 *)ppuVar4 = *puVar6;
    puVar6 = puVar5;
    ppuVar4 = (uint **)((int)ppuVar4 + 1);
  } while ((int)puVar5 <= (int)(auStack_30 + 0xf));
  github_com_satori_go_2euuid_UUID_String();
  local_4[5] = (uint)local_40;
  uVar7 = local_44;
  puVar1 = local_4;
  if (*DAT_00477f50 != 0) {
    FUN_0009db84();
    *unaff_r8 = extraout_r1_02;
    unaff_r8[1] = extraout_r2_02[4];
    unaff_r8[2] = (uint)in_stack_0000000c;
    unaff_r8[3] = extraout_r2_02[0xd];
    uVar7 = extraout_r1_02;
    puVar1 = extraout_r2_02;
  }
  puVar1[4] = uVar7;
  puVar1[0xc] = (uint)in_stack_00000008;
  puVar1[0xd] = (uint)in_stack_0000000c;
  local_54 = in_stack_00000008;
  local_50 = in_stack_0000000c;
  k3c_internal_pkg_util_Fileno();
  local_14 = local_4[2];
  local_20 = (uint)local_4c;
  local_54 = DAT_00477f5c;
  FUN_00022cf8();
  *local_50 = DAT_00477f60;
  local_c = local_50;
  if (*DAT_00477f50 != 0) {
    local_c = (uint *)FUN_0009db54();
    *unaff_r8 = (uint)local_4;
  }
  local_c[1] = (uint)local_4;
  local_54 = DAT_00477f5c;
  FUN_00022cf8();
  *local_50 = DAT_00477f64;
  local_10 = local_50;
  if (*DAT_00477f50 != 0) {
    local_10 = (uint *)FUN_0009db54();
    *unaff_r8 = (uint)local_4;
  }
  local_10[1] = (uint)local_4;
  local_54 = DAT_00477f68;
  FUN_00022cf8(local_10);
  uVar10 = CONCAT44(local_20,local_50);
  *local_50 = local_20;
  if (*DAT_00477f50 != 0) {
    uVar10 = FUN_0009db64();
    *unaff_r8 = (uint)local_c;
    unaff_r8[1] = (uint)local_10;
  }
  local_4c = (uint *)((ulonglong)uVar10 >> 0x20);
  local_8 = (uint)uVar10;
  *(uint **)(local_8 + 4) = local_c;
  *(uint **)(local_8 + 8) = local_10;
  local_50 = *(uint **)(local_14 + 0x40);
  local_54 = DAT_00477f6c;
  FUN_00092908();
  puVar1 = local_48;
  if (*DAT_00477f50 != 0) {
    puVar1 = (uint *)FUN_0009db64();
    *unaff_r8 = local_8;
    unaff_r8[1] = *puVar1;
  }
  *puVar1 = local_8;
  puVar1 = *(uint **)(local_14 + 0x3c);
  puVar8 = (uint *)(puVar1[1] + 1);
  puVar9 = (uint *)*puVar1;
  if ((uint *)puVar1[2] < puVar8) {
    local_48 = (uint *)0x1;
    local_44 = DAT_00477f70;
    local_54 = (uint *)*puVar1;
    local_50 = puVar8;
    local_4c = (uint *)puVar1[2];
    local_1c = puVar1;
    FUN_000987f4();
    local_1c[2] = local_38;
    puVar1 = local_1c;
    if (*DAT_00477f50 != 0) {
      FUN_0009db64();
      *unaff_r8 = (uint)extraout_r1_03;
      unaff_r8[1] = *extraout_r3_02;
      local_40 = extraout_r1_03;
      local_3c = extraout_r2_03;
      puVar1 = extraout_r3_02;
    }
    *puVar1 = (uint)local_40;
    puVar8 = local_3c;
    puVar9 = local_40;
  }
  puVar1[1] = (uint)puVar8;
  iVar2 = (int)puVar8 - 1;
  puVar9[iVar2 * 2] = local_20;
  *(undefined2 *)(puVar9 + iVar2 * 2 + 1) = 0x11;
  *(undefined2 *)((int)puVar9 + iVar2 * 8 + 6) = 0;
  uVar7 = local_8;
  if (*DAT_00477f50 != 0) {
    FUN_0009db84();
    *unaff_r8 = extraout_r1_04;
    unaff_r8[1] = local_4[6];
    unaff_r8[2] = local_4[7];
    unaff_r8[3] = local_4[0xe];
    uVar7 = extraout_r1_04;
  }
  local_4[6] = uVar7;
  local_4[8] = 0;
  local_4[9] = 0;
  uVar7 = DAT_00477f74;
  local_4[7] = DAT_00477f74;
  local_4[0xf] = 0;
  local_4[0x10] = 0;
  local_4[0xe] = uVar7;
  *(undefined1 *)(local_4 + 10) = 0;
  local_4[0xb] = 0;
  local_54 = local_4;
  local_50 = DAT_00477f78;
  local_4c = (uint *)0x1;
  local_48 = (uint *)DAT_00477f7c;
  local_44 = 0xe;
  k3c_internal_pkg_web___ClientConnection__set_client_info();
  local_54 = DAT_00477f80;
  FUN_00022cf8();
  puVar1 = local_50;
  if (*DAT_00477f50 != 0) {
    FUN_0009db74();
    *unaff_r8 = (uint)extraout_r1_05;
    unaff_r8[1] = (uint)extraout_r1_05;
    unaff_r8[2] = local_4[0x11];
    puVar1 = extraout_r1_05;
  }
  *puVar1 = (uint)puVar1;
  puVar1[1] = (uint)puVar1;
  puVar1[5] = 0;
  local_4[0x11] = (uint)puVar1;
  local_18 = local_4[2];
  local_54 = DAT_00477f84;
  FUN_00022cf8(local_4);
  puVar1 = local_50;
  if (*DAT_00477f50 != 0) {
    FUN_0009db54();
    *unaff_r8 = local_18;
    puVar1 = extraout_r1_06;
  }
  puVar1[1] = local_18;
  *(undefined1 *)puVar1 = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = DAT_00477f74;
  if (*DAT_00477f50 != 0) {
    FUN_0009db64();
    *unaff_r8 = (uint)extraout_r1_07;
    unaff_r8[1] = local_4[0x12];
    puVar1 = extraout_r1_07;
  }
  local_4[0x12] = (uint)puVar1;
  return;
}



/* k3c/internal/pkg/web.(*ClientConnection).dump_request_log @ 00477f88 (size 368) */

void k3c_internal_pkg_web___ClientConnection__dump_request_log(void)

{
  undefined4 *extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0009df04(0,&local_14);
  local_14 = DAT_004780fc;
  local_10 = DAT_00478100;
  FUN_0008f77c();
  local_c = DAT_00478104;
  FUN_0013b72c();
  local_4 = local_30;
  FUN_000987f4();
  local_30[1] = local_2c;
  if (*DAT_0047810c != 0) {
    FUN_0009db64();
    *unaff_r8 = local_4;
    unaff_r8[1] = *extraout_r2;
    local_30 = extraout_r2;
  }
  *local_30 = local_4;
  FUN_0014f8fc();
  FUN_0008f77c();
  k3c_internal_pkg_logger_Debug();
  return;
}



/* k3c/internal/pkg/web.(*ClientConnection).set_client_info @ 00478114 (size 532) */

void k3c_internal_pkg_web___ClientConnection__set_client_info(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  undefined4 *local_34;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (in_stack_00000014 == 0) {
    local_8 = 0;
    local_4 = (undefined4 *)0x0;
    FUN_0008f77c();
    local_8 = DAT_0047832c;
    local_34 = &local_8;
    FUN_0013b72c();
  }
  FUN_0009df04(0,&local_18);
  FUN_0008f77c();
  local_18 = DAT_0047832c;
  local_14 = local_34;
  FUN_0008f77c();
  local_10 = DAT_0047832c;
  local_c = local_34;
  k3c_internal_pkg_logger_Infof();
  local_8 = 0;
  local_4 = (undefined4 *)0x0;
  FUN_0008f77c();
  local_8 = DAT_0047832c;
  local_4 = &local_18;
  FUN_0013b72c();
  if (in_stack_0000000c != 0) {
    FUN_0009df04(0,&local_18);
    FUN_0008f77c();
    local_18 = DAT_0047832c;
    local_14 = &local_8;
    FUN_0008f77c();
    local_10 = DAT_0047832c;
    local_c = &local_8;
    FUN_0013b72c();
    return;
  }
  return;
}



/* k3c/internal/pkg/web.(*ClientConnection).Close @ 0047833c (size 676) */

void k3c_internal_pkg_web___ClientConnection__Close(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *extraout_r1;
  int *piVar5;
  int iVar6;
  int extraout_r2;
  int iVar7;
  int iVar8;
  int extraout_r3;
  int extraout_r3_00;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar12;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int iVar13;
  undefined4 uVar14;
  int local_30;
  uint local_2c;
  uint local_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4785dc;
    FUN_0009bf64();
  }
  if (*(int *)(in_stack_00000004 + 0x18) == 0) {
    return;
  }
  uVar14 = 0xc;
  iVar13 = DAT_004785e4;
  k3c_internal_pkg_web___ClientConnection__set_client_info();
  iVar3 = *(int *)(in_stack_00000004 + 8);
  piVar5 = *(int **)(in_stack_00000004 + 0x18);
  iVar7 = *(int *)(iVar3 + 0x40);
  iVar9 = *piVar5;
  iVar2 = DAT_004785e8;
  FUN_00025164();
  piVar1 = *(int **)(iVar3 + 0x3c);
  iVar3 = *piVar1;
  iVar8 = piVar1[1];
  iVar10 = 0;
  do {
    if (iVar8 <= iVar10) {
LAB_004784e8:
      iVar10 = in_stack_00000004;
      if (*DAT_004785f0 != 0) {
        uVar12 = FUN_0009db54(in_stack_00000004,*(undefined4 *)(in_stack_00000004 + 0x18),iVar3,
                              iVar8,unaff_lr,iVar2,iVar7,iVar9,iVar13,uVar14);
        *unaff_r8 = (int)((ulonglong)uVar12 >> 0x20);
        iVar10 = (int)uVar12;
      }
      *(undefined4 *)(iVar10 + 0x18) = 0;
      (**(code **)(*(int *)(iVar10 + 0x30) + 0xc))();
      if (iVar7 != 0) {
        (**(code **)(iVar7 + 0xc))();
        FUN_0008f77c();
        k3c_internal_pkg_logger_Error();
      }
      FUN_000263c8();
      return;
    }
    if (*(int *)(iVar3 + iVar10 * 8) == *piVar5) {
      uVar4 = piVar1[2];
      iVar7 = iVar3 + ((int)(1 - (uVar4 - iVar10)) >> 0x1f & (iVar10 + 1) * 8);
      iVar9 = (iVar8 - iVar10) + -1;
      iVar6 = iVar3;
      uVar11 = iVar8 - 1U;
      if (uVar4 < iVar8 - 1U) {
        iVar13 = iVar9;
        uVar14 = DAT_004785ec;
        FUN_000987f4();
        uVar4 = local_28;
        iVar6 = local_30;
        uVar11 = local_2c;
      }
      iVar2 = iVar6 + (iVar8 - (iVar8 - iVar10)) * 8;
      iVar9 = iVar9 * 8;
      FUN_0009e3a4();
      piVar1[1] = uVar11;
      piVar1[2] = uVar4;
      iVar3 = extraout_r2;
      iVar8 = extraout_r3;
      if (*DAT_004785f0 != 0) {
        FUN_0009db64();
        *unaff_r8 = iVar6;
        iVar3 = *extraout_r1;
        unaff_r8[1] = iVar3;
        piVar1 = extraout_r1;
        iVar8 = extraout_r3_00;
      }
      *piVar1 = iVar6;
      goto LAB_004784e8;
    }
    iVar10 = iVar10 + 1;
  } while( true );
}



/* k3c/internal/pkg/web.(*ClientConnection).Is_closed @ 004785fc (size 40) */

void k3c_internal_pkg_web___ClientConnection__Is_closed(void)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  if (*(int *)(in_stack_00000004 + 0x18) != 0) {
    uStack00000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00478614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uStack00000008 = 1;
                    /* WARNING: Could not recover jumptable at 0x00478620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/web.(*ClientConnection)._process_received @ 00478624 (size 1936) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_web___ClientConnection___process_received(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_r1;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  int *extraout_r2;
  undefined4 uVar8;
  undefined4 extraout_r2_00;
  int *extraout_r2_01;
  int extraout_r2_02;
  int extraout_r3;
  uint extraout_r3_00;
  int extraout_r3_01;
  int iVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  int *unaff_r8;
  int *piVar13;
  int *piVar14;
  int unaff_r10;
  int iVar15;
  undefined1 *puVar16;
  undefined4 unaff_lr;
  bool bVar17;
  undefined8 uVar18;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0xc)) {
      puVar16 = (undefined1 *)((int)register0x00000054 + -0x8c);
      *(undefined4 *)((int)register0x00000054 + -0x8c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_00478db8;
      *(undefined4 *)((int)register0x00000054 + -0x84) = 0x1000;
      *(undefined4 *)((int)register0x00000054 + -0x80) = 0x1000;
      FUN_000986b8();
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + -0x7c);
      pcVar6 = *(code **)(*(int *)(*(int *)((int)register0x00000054 + 4) + 0x30) + 0x14);
      *(undefined4 *)((int)register0x00000054 + -0x88) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x34);
      *(undefined4 *)((int)register0x00000054 + -0x84) =
           *(undefined4 *)((int)register0x00000054 + -0x7c);
      *(undefined4 *)((int)register0x00000054 + -0x80) = 0x1000;
      *(undefined4 *)((int)register0x00000054 + -0x7c) = 0x1000;
      (*pcVar6)();
      iVar1 = *(int *)((int)register0x00000054 + -0x74);
      if (iVar1 != 0) {
        *(int *)((int)register0x00000054 + -0x4c) = iVar1;
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0x70);
        pcVar6 = *(code **)(iVar1 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)((int)register0x00000054 + -0x70);
        (*pcVar6)();
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)((int)register0x00000054 + -0x84);
        *(undefined4 *)((int)register0x00000054 + -0x84) =
             *(undefined4 *)((int)register0x00000054 + -0x80);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_00478dbc;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x80);
        *(undefined1 **)((int)register0x00000054 + -0x88) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x84) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
        k3c_internal_pkg_logger_Debug();
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_00478dbc;
        *(undefined4 *)((int)register0x00000054 + -4) = DAT_00478dc0;
        *(undefined1 **)((int)register0x00000054 + -0x88) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x84) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x80) = 1;
        k3c_internal_pkg_logger_Error();
        iVar1 = *(int *)((int)register0x00000054 + -0x4c);
        if (iVar1 == DAT_00478dc4) {
          *(int *)((int)register0x00000054 + -0x88) = iVar1;
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x80) = DAT_00478dc8;
          FUN_00019b34();
          if (*(char *)((int)register0x00000054 + -0x7c) != '\0') {
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            k3c_internal_pkg_web___ClientConnection__Close();
            *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            return;
          }
          iVar1 = *(int *)((int)register0x00000054 + -0x4c);
        }
        if (*DAT_00478dcc == iVar1) {
          uVar5 = *DAT_00478dd0;
          *(int *)((int)register0x00000054 + -0x88) = iVar1;
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          *(undefined4 *)((int)register0x00000054 + -0x80) = uVar5;
          FUN_00019b34();
          if (*(char *)((int)register0x00000054 + -0x7c) != '\0') {
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            k3c_internal_pkg_web___ClientConnection__Close();
            *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            return;
          }
        }
        *(undefined4 *)((int)register0x00000054 + -0x88) =
             *(undefined4 *)((int)register0x00000054 + 4);
        k3c_internal_pkg_web___ClientConnection__Close();
        uVar5 = 0;
        if (*(int *)((int)register0x00000054 + -0x4c) != 0) {
          uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x4c) + 4);
        }
        *(undefined4 *)((int)register0x00000054 + 0x10) = uVar5;
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        return;
      }
      iVar7 = *(int *)((int)register0x00000054 + -0x78);
      *(int *)((int)register0x00000054 + -0x48) = iVar7;
      iVar1 = *(int *)((int)register0x00000054 + 4);
      iVar9 = *(int *)((int)register0x00000054 + -0x1c);
      uVar2 = 0;
      iVar4 = 0;
      uVar10 = 0;
      iVar11 = 0;
      while( true ) {
        *(int *)((int)register0x00000054 + -0x60) = iVar11;
        *(int *)((int)register0x00000054 + -0x34) = iVar4;
        if (iVar7 <= (int)uVar2) {
          iVar7 = 0;
          while (iVar7 < iVar11) {
            *(int *)((int)register0x00000054 + -0x44) = iVar7;
            *(undefined4 *)((int)register0x00000054 + -0x2c) = *(undefined4 *)(iVar1 + 0x44);
            *(undefined4 *)((int)register0x00000054 + -0x30) = *(undefined4 *)(iVar4 + iVar7 * 8);
            *(undefined4 *)((int)register0x00000054 + -0x58) =
                 *(undefined4 *)(iVar4 + iVar7 * 8 + 4);
            *(undefined8 *)((int)register0x00000054 + -0x40) =
                 *(undefined8 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            FUN_0008f6c0();
            piVar14 = *(int **)((int)register0x00000054 + -0x2c);
            iVar1 = *piVar14;
            *(undefined4 *)((int)register0x00000054 + -0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0x80);
            if (iVar1 == 0) {
              if (*DAT_00478dd4 != 0) {
                piVar14 = (int *)FUN_0009db84();
                *unaff_r8 = (int)piVar14;
                unaff_r8[1] = *piVar14;
                unaff_r8[2] = (int)piVar14;
                unaff_r8[3] = piVar14[1];
              }
              *piVar14 = (int)piVar14;
              piVar14[1] = (int)piVar14;
              piVar14[5] = 0;
            }
            *(int *)((int)register0x00000054 + -0x24) = piVar14[1];
            *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_00478de4;
            FUN_00022cf8();
            piVar14 = *(int **)((int)register0x00000054 + -0x84);
            piVar14[3] = DAT_00478de8;
            if (*DAT_00478dd4 == 0) {
              iVar1 = *(int *)((int)register0x00000054 + -0x1c);
            }
            else {
              piVar14 = (int *)FUN_0009db54();
              iVar1 = *(int *)((int)register0x00000054 + -0x1c);
              *unaff_r8 = iVar1;
            }
            piVar14[4] = iVar1;
            if (*DAT_00478dd4 == 0) {
              piVar13 = *(int **)((int)register0x00000054 + -0x24);
            }
            else {
              piVar14 = (int *)FUN_0009db54();
              piVar13 = *(int **)((int)register0x00000054 + -0x24);
              *unaff_r8 = (int)piVar13;
            }
            piVar14[1] = (int)piVar13;
            iVar1 = *piVar13;
            if (*DAT_00478dd4 != 0) {
              piVar14 = (int *)FUN_0009db74();
              *unaff_r8 = iVar1;
              unaff_r8[1] = (int)piVar14;
              unaff_r8[2] = *extraout_r2_01;
              piVar13 = extraout_r2_01;
            }
            *piVar14 = iVar1;
            *piVar13 = (int)piVar14;
            iVar1 = *piVar14;
            if (*DAT_00478dd4 == 0) {
              iVar11 = *(int *)((int)register0x00000054 + -0x2c);
            }
            else {
              piVar14 = (int *)FUN_0009db84();
              *unaff_r8 = (int)piVar14;
              unaff_r8[1] = *(int *)(extraout_r2_02 + 4);
              iVar11 = *(int *)((int)register0x00000054 + -0x2c);
              unaff_r8[2] = iVar11;
              unaff_r8[3] = piVar14[2];
              iVar1 = extraout_r2_02;
            }
            *(int **)(iVar1 + 4) = piVar14;
            piVar14[2] = iVar11;
            *(int *)(iVar11 + 0x14) = *(int *)(iVar11 + 0x14) + 1;
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + -0x30);
            *(undefined4 *)((int)register0x00000054 + -0x80) =
                 *(undefined4 *)((int)register0x00000054 + -0x58);
            k3c_internal_pkg_web_NewWebRequest();
            if (*(int *)((int)register0x00000054 + -0x7c) == 0) {
              FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x18));
              *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_00478dbc;
              *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_00478df4;
              *(undefined4 *)((int)register0x00000054 + -0x88) =
                   *(undefined4 *)((int)register0x00000054 + -0x30);
              *(undefined4 *)((int)register0x00000054 + -0x84) =
                   *(undefined4 *)((int)register0x00000054 + -0x58);
              FUN_0008f77c();
              *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00478dbc;
              *(undefined4 *)((int)register0x00000054 + -0xc) =
                   *(undefined4 *)((int)register0x00000054 + -0x80);
              *(undefined1 **)((int)register0x00000054 + -0x88) =
                   (undefined1 *)((int)register0x00000054 + -0x18);
              *(undefined4 *)((int)register0x00000054 + -0x84) = 2;
              *(undefined4 *)((int)register0x00000054 + -0x80) = 2;
              k3c_internal_pkg_logger_Error();
            }
            else {
              *(int *)((int)register0x00000054 + -0x38) = *(int *)((int)register0x00000054 + -0x7c);
              *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_00478dec;
              FUN_00022cf8();
              puVar3 = *(undefined4 **)((int)register0x00000054 + -0x84);
              *puVar3 = DAT_00478df0;
              if (*DAT_00478dd4 == 0) {
                iVar1 = *(int *)((int)register0x00000054 + 4);
                iVar11 = *(int *)((int)register0x00000054 + -0x38);
              }
              else {
                puVar3 = (undefined4 *)FUN_0009db64();
                iVar1 = *(int *)((int)register0x00000054 + 4);
                *unaff_r8 = iVar1;
                iVar11 = *(int *)((int)register0x00000054 + -0x38);
                unaff_r8[1] = iVar11;
              }
              puVar3[1] = iVar1;
              puVar3[2] = iVar11;
              *(undefined4 *)((int)register0x00000054 + -0x88) = *(undefined4 *)(iVar1 + 8);
              *(undefined4 **)((int)register0x00000054 + -0x84) = puVar3;
              *(undefined8 *)((int)register0x00000054 + -0x80) = 0;
              k3c_internal_pkg_reactor_NewReactorCallback();
            }
            iVar4 = *(int *)((int)register0x00000054 + -0x34);
            iVar1 = *(int *)((int)register0x00000054 + 4);
            iVar11 = *(int *)((int)register0x00000054 + -0x60);
            iVar7 = *(int *)((int)register0x00000054 + -0x44) + 1;
          }
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          return;
        }
        bVar17 = uVar2 == 0x1000;
        if (0xfff < uVar2) break;
        *(uint *)((int)register0x00000054 + -0x5c) = uVar10;
        *(uint *)((int)register0x00000054 + -0x54) = uVar2;
        cVar12 = *(char *)(iVar9 + uVar2);
        if (cVar12 == '\x03') {
          uVar5 = *(undefined4 *)(iVar1 + 0x20);
          uVar8 = *(undefined4 *)(iVar1 + 0x24);
          *(undefined4 *)((int)register0x00000054 + -0x88) = *(undefined4 *)(iVar1 + 0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x84) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x80) = uVar8;
          k3c_common_protocol_Decrypt();
          iVar1 = *(int *)((int)register0x00000054 + -0x70);
          bVar17 = iVar1 == 0;
          if (!bVar17) {
            *(int *)((int)register0x00000054 + -0x50) = iVar1;
            FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x18),
                         *(undefined4 *)((int)register0x00000054 + -0x6c),iVar1);
            iVar1 = extraout_r3_01;
            if (!bVar17) {
              iVar1 = *(int *)(extraout_r3_01 + 4);
            }
            *(undefined4 *)((int)register0x00000054 + -0x20) = extraout_r2_00;
            *(int *)((int)register0x00000054 + -0x18) = iVar1;
            *(undefined4 *)((int)register0x00000054 + -0x14) = extraout_r2_00;
            iVar1 = *(int *)((int)register0x00000054 + 4);
            uVar5 = *(undefined4 *)(iVar1 + 0x20);
            uVar8 = *(undefined4 *)(iVar1 + 0x24);
            *(undefined4 *)((int)register0x00000054 + -0x88) = *(undefined4 *)(iVar1 + 0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x84) = uVar5;
            *(undefined4 *)((int)register0x00000054 + -0x80) = uVar8;
            FUN_0008f820();
            *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00478ddc;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x7c);
            *(undefined4 *)((int)register0x00000054 + -0x88) = DAT_00478de0;
            *(undefined4 *)((int)register0x00000054 + -0x84) = 0x1e;
            *(undefined1 **)((int)register0x00000054 + -0x80) =
                 (undefined1 *)((int)register0x00000054 + -0x18);
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x78) = 2;
            k3c_internal_pkg_logger_Errorf();
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + 4);
            k3c_internal_pkg_web___ClientConnection__Close();
            uVar5 = 0;
            if (*(int *)((int)register0x00000054 + -0x50) != 0) {
              uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x50) + 4);
            }
            *(undefined4 *)((int)register0x00000054 + 0x10) = uVar5;
            *(undefined4 *)((int)register0x00000054 + 0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x20);
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0x88) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               *(undefined4 *)((int)register0x00000054 + -0x7c);
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + -0x78);
          FUN_00099104();
          uVar2 = *(int *)((int)register0x00000054 + -0x60) + 1;
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x7c);
          uVar8 = *(undefined4 *)((int)register0x00000054 + -0x78);
          uVar10 = *(uint *)((int)register0x00000054 + -0x5c);
          if (uVar10 < uVar2) {
            *(undefined4 *)((int)register0x00000054 + -0x44) = uVar8;
            *(undefined4 *)((int)register0x00000054 + -0x20) = uVar5;
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 *(undefined4 *)((int)register0x00000054 + -0x34);
            *(uint *)((int)register0x00000054 + -0x84) = uVar2;
            *(uint *)((int)register0x00000054 + -0x80) = uVar10;
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_00478dbc;
            FUN_000987f4();
            iVar4 = *(int *)((int)register0x00000054 + -0x74);
            uVar2 = *(uint *)((int)register0x00000054 + -0x70);
            uVar10 = *(uint *)((int)register0x00000054 + -0x6c);
            uVar8 = *(undefined4 *)((int)register0x00000054 + -0x44);
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x20);
          }
          else {
            iVar4 = *(int *)((int)register0x00000054 + -0x34);
          }
          uVar18 = CONCAT44(uVar5,uVar2);
          iVar1 = uVar2 - 1;
          *(undefined4 *)(iVar4 + iVar1 * 8 + 4) = uVar8;
          if (*DAT_00478dd4 == 0) {
            iVar7 = *(int *)((int)register0x00000054 + 4);
          }
          else {
            uVar18 = FUN_0009db74();
            uRam00000003 = (undefined4)((ulonglong)uVar18 >> 0x20);
            _DAT_00000007 = *(undefined4 *)(iVar4 + iVar1 * 8);
            iVar7 = *(int *)((int)register0x00000054 + 4);
            _DAT_0000000b = *(undefined4 *)(iVar7 + 0x1c);
            uVar10 = extraout_r3_00;
          }
          iVar11 = (int)uVar18;
          *(int *)(iVar4 + iVar1 * 8) = (int)((ulonglong)uVar18 >> 0x20);
          *(undefined4 *)(iVar7 + 0x20) = 0;
          *(undefined4 *)(iVar7 + 0x24) = 0;
          *(undefined4 *)(iVar7 + 0x1c) = DAT_00478dd8;
          iVar7 = *(int *)((int)register0x00000054 + -0x48);
          uVar2 = *(uint *)((int)register0x00000054 + -0x54);
          iVar1 = *(int *)((int)register0x00000054 + 4);
          iVar9 = *(int *)((int)register0x00000054 + -0x1c);
          unaff_r8 = (int *)0x3;
        }
        else {
          piVar13 = *(int **)(iVar1 + 0x24);
          piVar14 = (int *)(*(int *)(iVar1 + 0x20) + 1);
          iVar15 = *(int *)(iVar1 + 0x1c);
          if (piVar13 < piVar14) {
            *(char *)((int)register0x00000054 + -0x61) = cVar12;
            *(int *)((int)register0x00000054 + -0x88) = iVar15;
            *(int **)((int)register0x00000054 + -0x84) = piVar14;
            *(int **)((int)register0x00000054 + -0x80) = piVar13;
            *(undefined4 *)((int)register0x00000054 + -0x7c) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x78) = DAT_00478db8;
            FUN_000987f4();
            iVar15 = *(int *)((int)register0x00000054 + -0x74);
            piVar14 = *(int **)((int)register0x00000054 + -0x70);
            iVar1 = *(int *)((int)register0x00000054 + 4);
            *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)((int)register0x00000054 + -0x6c);
            if (*DAT_00478dd4 != 0) {
              FUN_0009db64();
              *piVar13 = extraout_r1;
              piVar13[1] = *(int *)(extraout_r3 + 0x1c);
              iVar15 = extraout_r1;
              piVar14 = extraout_r2;
              iVar1 = extraout_r3;
            }
            *(int *)(iVar1 + 0x1c) = iVar15;
            uVar2 = *(uint *)((int)register0x00000054 + -0x54);
            iVar9 = *(int *)((int)register0x00000054 + -0x1c);
            uVar10 = *(uint *)((int)register0x00000054 + -0x5c);
            iVar11 = *(int *)((int)register0x00000054 + -0x60);
            cVar12 = *(char *)((int)register0x00000054 + -0x61);
            iVar4 = *(int *)((int)register0x00000054 + -0x34);
            iVar7 = *(int *)((int)register0x00000054 + -0x48);
          }
          *(int **)(iVar1 + 0x20) = piVar14;
          unaff_r8 = (int *)((int)piVar14 + -1);
          *(char *)(iVar15 + (int)unaff_r8) = cVar12;
        }
        uVar2 = uVar2 + 1;
      }
      param_1 = FUN_0009dbd4(uVar2,0x1000);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x8c);
      if (bVar17) {
        register0x00000054 = (BADSPACEBASE *)puVar16;
      }
    }
    unaff_lr = 0x478db0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/web.(*ClientConnection)._process_received.func1 @ 00478df8 (size 96) */

void k3c_internal_pkg_web___ClientConnection___process_received_func1(void)

{
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  k3c_internal_pkg_web___ClientConnection___process_request();
  FUN_0008f6c0();
  return;
}



/* k3c/internal/pkg/web.(*ClientConnection)._process_request @ 00478e60 (size 920) */

void k3c_internal_pkg_web___ClientConnection___process_request(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 *local_5c;
  int local_58;
  undefined4 *local_54;
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4791f4;
    FUN_0009bf64();
  }
  uVar3 = in_stack_00000004[1];
  uVar5 = in_stack_00000008[3];
  uVar6 = in_stack_00000008[4];
  k3c_internal_pkg_web___WebHooks__get_callback();
  if (local_58 == 0) {
    FUN_0009df04(0,&local_10,in_stack_00000008,in_stack_00000008[3],unaff_lr,uVar3,uVar5);
    local_10 = DAT_00479200;
    local_c = DAT_00479204;
    FUN_0008f77c();
    local_8 = DAT_00479200;
    local_4 = uVar6;
    k3c_internal_pkg_logger_Error();
    uVar3 = *DAT_00479208;
    local_54 = (undefined4 *)in_stack_00000008[4];
    uVar5 = *DAT_0047920c;
    local_5c = DAT_00479210;
    FUN_000763e8();
    FUN_00022cf8();
    local_5c[1] = 0xf;
    *local_5c = DAT_0047921c;
    local_5c[3] = uVar3;
    if (*DAT_00479220 != 0) {
      FUN_0009db64();
      *unaff_r8 = uVar5;
      unaff_r8[1] = local_48;
      local_5c = extraout_r2;
    }
    local_5c[2] = uVar5;
    local_5c[5] = local_44;
    local_5c[4] = local_48;
    puVar2 = in_stack_00000008;
    k3c_internal_pkg_web___WebRequest__Set_error();
  }
  else {
    local_5c = in_stack_00000008;
    puVar2 = in_stack_00000004;
    k3c_internal_pkg_web___ClientConnection___process_request1();
    if (local_50 != 0) {
      k3c_common_errors_FromError();
      puVar2 = in_stack_00000008;
      k3c_internal_pkg_web___WebRequest__Set_error();
    }
  }
  if (*(double *)(in_stack_00000008 + 1) == 0.0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar2;
    if (in_stack_00000008[6] == 0) {
      FUN_000908bc();
      in_stack_00000008[6] = DAT_0047922c;
      puVar4 = in_stack_00000008;
      puVar1 = puVar2;
      if (*DAT_00479220 != 0) {
        puVar2 = (undefined4 *)FUN_0009db64();
        *unaff_r8 = puVar2;
        unaff_r8[1] = extraout_r2_00[7];
        puVar4 = extraout_r2_00;
      }
      puVar4[7] = puVar2;
    }
    FUN_000908bc();
    FUN_0008f6c0();
    FUN_00093a08();
    *local_54 = DAT_00479238;
    puVar2 = local_54;
    if (*DAT_00479220 != 0) {
      puVar2 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = local_5c;
      unaff_r8[1] = puVar2[1];
    }
    puVar2[1] = local_5c;
    uVar5 = in_stack_00000008[6];
    uVar3 = in_stack_00000008[7];
    FUN_00093a08();
    *local_54 = uVar5;
    if (*DAT_00479220 != 0) {
      local_54 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = uVar3;
      unaff_r8[1] = local_54[1];
    }
    local_54[1] = uVar3;
  }
  if (puVar1 != (undefined4 *)0x0) {
    k3c_internal_pkg_web___ClientConnection__Send();
    return;
  }
  return;
}



/* k3c/internal/pkg/web.(*ClientConnection)._process_request1 @ 0047923c (size 152) */

void k3c_internal_pkg_web___ClientConnection___process_request1(void)

{
  int unaff_r10;
  undefined4 *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  in_stack_0000001c = 0;
  (*(code *)*in_stack_00000008)();
  k3c_internal_pkg_util_sys_CatchPanic();
  return;
}



/* k3c/internal/pkg/web.(*ClientConnection).Send @ 004792e4 (size 620) */

void k3c_internal_pkg_web___ClientConnection__Send(void)

{
  uint uVar1;
  int *extraout_r1;
  int *piVar2;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar3;
  uint extraout_r3;
  uint uVar4;
  uint *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  bool bVar5;
  int *in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  uint uVar6;
  undefined8 in_stack_ffffffb8;
  undefined8 uVar7;
  uint local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  uint local_18 [2];
  undefined4 local_10;
  undefined4 local_8;
  uint local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x47954c;
    FUN_0009bf64();
  }
  if (in_stack_00000008 == 0) {
    return;
  }
  uVar6 = (uint)((ulonglong)in_stack_ffffffb8 >> 0x20);
  FUN_0015db30();
  if (local_38 != 0) {
    (**(code **)(local_38 + 0xc))();
    local_8 = 0;
    local_4 = 0;
    FUN_0008f77c();
    local_4 = uVar6;
    local_8 = DAT_00479564;
    k3c_internal_pkg_logger_Error();
    return;
  }
  uVar3 = uVar6;
  uVar1 = local_40;
  uVar4 = local_3c;
  if (*(char *)(*(int *)(*in_stack_00000004 + 0x68) + 0x30) != '\0') {
    uVar7 = CONCAT44(local_3c,local_40);
    k3c_common_protocol_Encrypt();
    bVar5 = local_34 == 0;
    uVar4 = 0;
    uVar3 = local_40;
    uVar1 = local_3c;
    if (!bVar5) {
      FUN_0009df04(0,local_18,local_3c,0,unaff_lr,uVar6,uVar7);
      local_18[0] = local_34;
      if (!bVar5) {
        local_18[0] = *(uint *)(local_34 + 4);
      }
      FUN_0008f820();
      local_10 = DAT_00479554;
      k3c_internal_pkg_logger_Errorf();
      uVar1 = extraout_r2;
      uVar4 = extraout_r3;
    }
  }
  k3c_internal_pkg_reactor___ReactorMutex__Lock();
  uVar1 = uVar1 + 1;
  if (uVar4 < uVar1) {
    FUN_000987f4();
    uVar3 = 0;
    uVar1 = local_34;
    uVar4 = local_30;
  }
  *(undefined1 *)(uVar3 + (uVar1 - 1)) = 3;
  in_stack_00000004[0xf] = uVar1;
  in_stack_00000004[0x10] = uVar4;
  piVar2 = in_stack_00000004;
  if (*DAT_00479560 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r2_00;
    unaff_r8[1] = extraout_r1[0xe];
    piVar2 = extraout_r1;
    uVar3 = extraout_r2_00;
  }
  piVar2[0xe] = uVar3;
  k3c_internal_pkg_reactor___ReactorMutex__Unlock();
  if ((char)in_stack_00000004[10] == '\0') {
    k3c_internal_pkg_web___ClientConnection___do_send();
  }
  return;
}



/* k3c/internal/pkg/web.(*ClientConnection)._do_send @ 00479568 (size 824) */

void k3c_internal_pkg_web___ClientConnection___do_send(void)

{
  int iVar1;
  int extraout_r2;
  int extraout_r2_00;
  int *piVar2;
  uint uVar3;
  int extraout_r3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *unaff_r8;
  int unaff_r10;
  undefined8 uVar8;
  int in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  char local_48;
  uint local_44;
  int local_40;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_4 = (undefined4 *)0x0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  if (*(int *)(in_stack_00000004 + 0x18) == 0) {
    return;
  }
  k3c_internal_pkg_reactor___ReactorMutex__Lock();
  local_20 = *(undefined4 *)(in_stack_00000004 + 0x48);
  local_24 = DAT_004798ac;
  local_4 = &local_24;
  iVar4 = *(int *)(in_stack_00000004 + 0x3c);
  iVar6 = *(int *)(in_stack_00000004 + 0x40);
  (**(code **)(*(int *)(in_stack_00000004 + 0x30) + 0x28))();
  iVar5 = iVar4;
  iVar7 = iVar6;
  if (local_40 != 0) {
    (**(code **)(local_40 + 0xc))();
    FUN_0009defc(0,&local_1c);
    local_1c = DAT_004798b0;
    local_18 = DAT_004798b4;
    iVar5 = *(int *)(in_stack_00000004 + 0x10);
    iVar7 = *(int *)(in_stack_00000004 + 0x14);
    FUN_0008f77c();
    local_14 = DAT_004798b0;
    local_10 = iVar4;
    FUN_0008f77c();
    local_c = DAT_004798b0;
    local_8 = iVar4;
    k3c_internal_pkg_logger_Error();
    if (*DAT_004798b8 == local_40) {
      FUN_00019b34();
      local_48 = (char)iVar6;
      if (local_48 != '\0') {
        k3c_internal_pkg_web___ClientConnection__Close();
        in_stack_00000010 = 0;
        in_stack_00000014 = 0;
        (*(code *)*local_4)();
        return;
      }
    }
    local_44 = 0;
  }
  iVar4 = in_stack_00000004;
  if ((int)local_44 < *(int *)(in_stack_00000004 + 0x3c)) {
    if (*(char *)(in_stack_00000004 + 0x28) == '\0') {
      piVar2 = *(int **)(*(int *)(in_stack_00000004 + 8) + 0x3c);
      iVar5 = **(int **)(in_stack_00000004 + 0x18);
      iVar7 = *piVar2;
      for (iVar6 = 0; iVar6 < piVar2[1]; iVar6 = iVar6 + 1) {
        unaff_r8 = (int *)(iVar7 + iVar6 * 8);
        if (*(int *)(iVar7 + iVar6 * 8) == iVar5) {
          *(undefined2 *)(unaff_r8 + 1) = 0x14;
          break;
        }
      }
      *(undefined1 *)(in_stack_00000004 + 0x28) = 1;
      *(undefined4 *)(in_stack_00000004 + 0x2c) = 5;
    }
  }
  else if (*(char *)(in_stack_00000004 + 0x28) != '\0') {
    piVar2 = *(int **)(*(int *)(in_stack_00000004 + 8) + 0x3c);
    iVar5 = **(int **)(in_stack_00000004 + 0x18);
    iVar7 = *piVar2;
    iVar6 = piVar2[1];
    iVar1 = 0;
    goto LAB_00479830;
  }
  do {
    uVar3 = *(uint *)(iVar4 + 0x3c);
    if (local_44 <= uVar3) {
      iVar5 = *(int *)(iVar4 + 0x40) - local_44;
      *(uint *)(iVar4 + 0x3c) = uVar3 - local_44;
      *(int *)(iVar4 + 0x40) = iVar5;
      iVar5 = *(int *)(iVar4 + 0x38) + (local_44 & -iVar5 >> 0x1f);
      if (*DAT_004798c0 != 0) {
        iVar5 = FUN_0009db64();
        *unaff_r8 = iVar5;
        unaff_r8[1] = *(int *)(extraout_r2 + 0x38);
        iVar4 = extraout_r2;
      }
      *(int *)(iVar4 + 0x38) = iVar5;
      in_stack_00000010 = 0;
      in_stack_00000014 = 0;
      (*(code *)*local_4)();
      return;
    }
    uVar8 = FUN_0009dc34(local_44,uVar3);
    iVar4 = extraout_r2_00;
    iVar6 = extraout_r3;
    do {
      local_44 = (uint)((ulonglong)uVar8 >> 0x20);
      iVar1 = (int)uVar8 + 1;
LAB_00479830:
      uVar8 = CONCAT44(local_44,iVar1);
      if (iVar6 <= iVar1) goto LAB_00479850;
      unaff_r8 = (int *)(iVar7 + iVar1 * 8);
    } while (*(int *)(iVar7 + iVar1 * 8) != iVar5);
    *(undefined2 *)(unaff_r8 + 1) = 0x11;
LAB_00479850:
    *(undefined1 *)(iVar4 + 0x28) = 0;
  } while( true );
}



/* k3c/internal/pkg/web.(*ClientConnection)._do_send.deferwrap1 @ 004798c4 (size 84) */

void k3c_internal_pkg_web___ClientConnection___do_send_deferwrap1(void)

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
  k3c_internal_pkg_reactor___ReactorMutex__Unlock();
  return;
}



/* k3c/internal/pkg/web.NewWebHooks @ 00479918 (size 1496) */

void k3c_internal_pkg_web_NewWebHooks(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *extraout_r1;
  undefined *extraout_r1_00;
  undefined *extraout_r1_01;
  undefined *puVar3;
  undefined *extraout_r1_02;
  undefined *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int extraout_r3;
  int iVar7;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 *puStack_54;
  undefined4 *puStack_48;
  undefined *puStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined1 auStack_28 [4];
  undefined4 *puStack_24;
  undefined *puStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  while (puVar4 = PTR_DAT_00479ef4, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x479eec;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  puStack_4 = puStack_54;
  if (*(int *)PTR_DAT_00479ef8 != 0) {
    FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
    puStack_4 = extraout_r1;
  }
  *puStack_4 = in_stack_00000004;
  FUN_000908bc();
  if (*(int *)PTR_DAT_00479ef8 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = puStack_4[1];
    puVar4 = extraout_r1_00;
  }
  puStack_4[1] = puVar4;
  FUN_00022cf8();
  *puStack_54 = PTR_k3c_internal_pkg_web___WebHooks___handle_list_endpoints_fm_00479f00;
  if (*(int *)PTR_DAT_00479ef8 != 0) {
    puStack_54 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = puStack_4;
  }
  puStack_54[1] = puStack_4;
  puVar4 = PTR_DAT_00479f04;
  puVar6 = (undefined4 *)puStack_4[1];
  puStack_8 = puStack_54;
  FUN_00093a08();
  puVar1 = puStack_48;
  if (*(int *)PTR_DAT_00479ef8 != 0) {
    puVar1 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puStack_8;
    unaff_r8[1] = *puVar1;
  }
  *puVar1 = puStack_8;
  FUN_000908bc();
  puVar3 = puVar4;
  if (*(int *)PTR_DAT_00479ef8 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_01;
    unaff_r8[1] = puStack_4[2];
    puVar3 = extraout_r1_01;
  }
  puStack_4[2] = puVar3;
  FUN_000908bc();
  if (*(int *)PTR_DAT_00479ef8 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_02;
    unaff_r8[1] = puStack_4[3];
    puVar4 = extraout_r1_02;
  }
  puStack_4[3] = puVar4;
  FUN_0009e2f0(puStack_4,puStack_4,auStack_28);
  FUN_00022cf8();
  *puVar6 = PTR_k3c_internal_pkg_web___WebHooks___handle_info_request_fm_00479f0c;
  if (*(int *)PTR_DAT_00479ef8 != 0) {
    puVar6 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = puStack_4;
  }
  puVar6[1] = puStack_4;
  puStack_54 = puStack_24;
  puStack_8 = puVar6;
  FUN_00093560();
  puVar1 = (undefined4 *)((uint)puStack_44 & 0xff);
  if (puVar1 == (undefined4 *)0x0) {
    puStack_54 = puStack_24;
    FUN_00093a08();
    puVar1 = puStack_48;
    if (*(int *)PTR_DAT_00479ef8 != 0) {
      puVar1 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = puStack_8;
      unaff_r8[1] = *puVar1;
    }
    *puVar1 = puStack_8;
  }
  FUN_0009e2f0(puVar1,puStack_4,auStack_28);
  FUN_00022cf8();
  *puStack_54 = PTR_k3c_internal_pkg_web___WebHooks___handle_estop_request_fm_00479f14;
  puVar1 = puStack_54;
  if (*(int *)PTR_DAT_00479ef8 != 0) {
    puVar1 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = puStack_4;
  }
  puVar1[1] = puStack_4;
  puStack_54 = puStack_24;
  puStack_8 = puVar1;
  FUN_00093560();
  puVar1 = (undefined4 *)((uint)puStack_44 & 0xff);
  if (puVar1 == (undefined4 *)0x0) {
    puStack_54 = puStack_24;
    FUN_00093a08();
    puVar1 = puStack_48;
    if (*(int *)PTR_DAT_00479ef8 != 0) {
      puVar1 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = puStack_8;
      unaff_r8[1] = *puVar1;
    }
    *puVar1 = puStack_8;
  }
  FUN_0009e2f0(puVar1,puStack_4,auStack_28);
  FUN_00022cf8();
  *puStack_54 = PTR_k3c_internal_pkg_web___WebHooks___handle_rpc_registration_fm_00479f1c;
  puVar1 = puStack_54;
  if (*(int *)PTR_DAT_00479ef8 != 0) {
    puVar1 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = puStack_4;
  }
  puVar1[1] = puStack_4;
  puStack_54 = puStack_24;
  puStack_8 = puVar1;
  FUN_00093560();
  if ((char)puStack_44 == '\0') {
    puStack_54 = puStack_24;
    FUN_00093a08();
    puVar1 = puStack_48;
    if (*(int *)PTR_DAT_00479ef8 != 0) {
      puVar1 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = puStack_8;
      unaff_r8[1] = *puVar1;
    }
    *puVar1 = puStack_8;
  }
  FUN_00022cf8();
  puStack_c = puStack_54;
  *puStack_54 = PTR_k3c_internal_pkg_web_WebHooks__handle_ready_fm_00479f28;
  puVar1 = puStack_54 + 1;
  if (*(int *)PTR_DAT_00479ef8 != 0) {
    puStack_10 = puStack_54 + 1;
    puStack_54 = (undefined4 *)FUN_00026c00();
    puVar1 = puStack_10;
  }
  FUN_0009e2f0(puStack_54,puStack_4,puVar1);
  FUN_00093560();
  iVar7 = puStack_48[1];
  uVar2 = puStack_48[2];
  puStack_14 = (undefined *)*puStack_48;
  if (((uint)puStack_44 & 0xff) == 0) {
    uVar2 = 0;
    iVar7 = 0;
    puStack_14 = PTR_DAT_00479f34;
  }
  uVar5 = iVar7 + 1U;
  if (uVar2 < iVar7 + 1U) {
    puStack_48 = (undefined4 *)PTR_DAT_00479f38;
    FUN_000987f4();
    uVar2 = uStack_3c;
    uVar5 = uStack_40;
    puStack_14 = puStack_44;
  }
  iVar7 = uVar5 - 1;
  if (*(int *)PTR_DAT_00479ef8 != 0) {
    FUN_0009db64();
    *unaff_r8 = puStack_c;
    unaff_r8[1] = *(undefined4 *)(puStack_14 + extraout_r3 * 4);
    iVar7 = extraout_r3;
  }
  *(undefined4 **)(puStack_14 + iVar7 * 4) = puStack_c;
  FUN_00093a08();
  puStack_48[1] = uVar5;
  puStack_48[2] = uVar2;
  if (*(int *)PTR_DAT_00479ef8 != 0) {
    puStack_48 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puStack_14;
    unaff_r8[1] = *puStack_48;
  }
  *puStack_48 = puStack_14;
  in_stack_00000008 = puStack_4;
                    /* WARNING: Could not recover jumptable at 0x00479ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/web.WebHooks.Register_endpoint @ 00479f3c (size 236) */

void k3c_internal_pkg_web_WebHooks_Register_endpoint(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 *in_stack_00000008;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined *in_stack_00000024;
  undefined4 *in_stack_00000028;
  undefined4 *puStack_8;
  char cStack_4;
  
  while (puVar1 = in_stack_00000008, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x47a024;
    FUN_0009bf64();
  }
  FUN_00093560();
  if (cStack_4 != '\0') {
    FUN_00022cf8();
    puVar1[1] = 0x26;
    *puVar1 = PTR_DAT_0047a038;
    in_stack_00000024 = PTR_DAT_0047a03c;
    in_stack_00000028 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0047a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_00093a08();
  if (*(int *)PTR_DAT_0047a030 != 0) {
    puStack_8 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = in_stack_00000020;
    unaff_r8[1] = *puStack_8;
  }
  *puStack_8 = in_stack_00000020;
  in_stack_00000024 = (undefined *)0x0;
  in_stack_00000028 = (undefined4 *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00479fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/web.(*WebHooks)._handle_list_endpoints @ 0047a040 (size 300) */

void k3c_internal_pkg_web___WebHooks___handle_list_endpoints(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_1c;
  undefined4 local_10;
  undefined4 *local_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_000908bc();
  k3c_common_utils_str_MapStringKeys();
  FUN_0008f820();
  FUN_00093a08();
  *local_c = DAT_0047a17c;
  if (*DAT_0047a180 != 0) {
    local_c = (undefined4 *)FUN_0009db64();
    *unaff_r8 = local_10;
    unaff_r8[1] = local_c[1];
  }
  local_c[1] = local_10;
  if (*(int *)(in_stack_00000008 + 0x18) == 0) {
    *(undefined4 *)(in_stack_00000008 + 0x18) = DAT_0047a174;
    if (*DAT_0047a180 != 0) {
      in_stack_00000008 = FUN_0009db64();
      *unaff_r8 = local_1c;
      unaff_r8[1] = *(undefined4 *)(in_stack_00000008 + 0x1c);
    }
    *(undefined4 *)(in_stack_00000008 + 0x1c) = local_1c;
  }
  return;
}



/* k3c/internal/pkg/web.(*WebHooks)._handle_info_request @ 0047a184 (size 2116) */

void k3c_internal_pkg_web___WebHooks___handle_info_request(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 uVar7;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  bool bVar9;
  
code_r0x0047a184:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar8 = (undefined1 *)((int)register0x00000054 + -0x78);
    *(undefined4 *)((int)register0x00000054 + -0x78) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -0x74) = *(undefined4 *)((int)register0x00000054 + 8);
    *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0047a93c;
    *(undefined4 *)((int)register0x00000054 + -0x6c) = 0xb;
    *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
    *(undefined4 *)((int)register0x00000054 + -100) = 0;
    k3c_internal_pkg_web___WebRequest__get_dict();
    if (*(int *)((int)register0x00000054 + -0x60) != 0) {
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           **(undefined4 **)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_0047a940;
      *(int *)((int)register0x00000054 + -8) = *(int *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x74) = DAT_0047a944;
      *(undefined4 *)((int)register0x00000054 + -0x70) = 2;
      *(undefined1 **)((int)register0x00000054 + -0x6c) =
           (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0x68) = 1;
      *(undefined4 *)((int)register0x00000054 + -100) = 1;
      FUN_0013b72c();
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x70) =
           *(undefined4 *)((int)register0x00000054 + -0x60);
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           *(undefined4 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
      *(undefined4 *)((int)register0x00000054 + -100) = 0;
      k3c_internal_pkg_web___ClientConnection__set_client_info();
    }
    iVar3 = **(int **)((int)register0x00000054 + 4);
    *(int *)((int)register0x00000054 + -0x34) = iVar3;
    if (*(int *)(iVar3 + 0x14) == 0x10) {
      *(undefined4 *)((int)register0x00000054 + -0x74) = *(undefined4 *)(iVar3 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0047a948;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x10;
      FUN_00018250();
      if (*(char *)((int)register0x00000054 + -0x68) != '\0') {
        iVar3 = *(int *)((int)register0x00000054 + -0x34);
        uVar6 = 5;
        uVar4 = DAT_0047a94c;
        goto LAB_0047a300;
      }
      iVar3 = *(int *)((int)register0x00000054 + -0x34);
    }
    if (*(int *)(iVar3 + 0x14) == 0x66) {
      *(undefined4 *)((int)register0x00000054 + -0x74) = *(undefined4 *)(iVar3 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x70) = DAT_0047a950;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = 0x66;
      FUN_00018250();
      if (*(char *)((int)register0x00000054 + -0x68) != '\0') {
        iVar3 = *(int *)((int)register0x00000054 + -0x34);
        uVar6 = 7;
        uVar4 = DAT_0047a954;
        goto LAB_0047a300;
      }
      iVar3 = *(int *)((int)register0x00000054 + -0x34);
    }
    if (*(char *)(iVar3 + 0x18) == '\0') {
      uVar6 = 5;
      uVar4 = DAT_0047a95c;
    }
    else {
      uVar6 = 8;
      uVar4 = DAT_0047a958;
    }
LAB_0047a300:
    *(undefined4 *)((int)register0x00000054 + -0x30) = uVar4;
    *(undefined4 *)((int)register0x00000054 + -0x50) = uVar6;
    *(undefined4 *)((int)register0x00000054 + -0x48) = *(undefined4 *)(iVar3 + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x58) = *(undefined4 *)(iVar3 + 0x14);
    *(undefined4 *)((int)register0x00000054 + -0x74) = DAT_0047a940;
    *(undefined4 *)((int)register0x00000054 + -0x70) = 10;
    *(undefined4 *)((int)register0x00000054 + -0x6c) = 0;
    FUN_0009090c();
    *(undefined4 *)((int)register0x00000054 + -0x38) =
         *(undefined4 *)((int)register0x00000054 + -0x68);
    *(undefined4 *)((int)register0x00000054 + -0x74) =
         *(undefined4 *)((int)register0x00000054 + -0x30);
    *(undefined4 *)((int)register0x00000054 + -0x70) =
         *(undefined4 *)((int)register0x00000054 + -0x50);
    FUN_0008f77c();
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -0x6c)
    ;
    *(undefined4 *)((int)register0x00000054 + -0x74) = DAT_0047a940;
    *(undefined4 *)((int)register0x00000054 + -0x70) =
         *(undefined4 *)((int)register0x00000054 + -0x38);
    *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0047a960;
    *(undefined4 *)((int)register0x00000054 + -0x68) = 5;
    FUN_00093a08();
    piVar1 = *(int **)((int)register0x00000054 + -100);
    *piVar1 = DAT_0047a964;
    if (*DAT_0047a968 == 0) {
      iVar3 = *(int *)((int)register0x00000054 + -4);
    }
    else {
      piVar1 = (int *)FUN_0009db64();
      iVar3 = *(int *)((int)register0x00000054 + -4);
      *unaff_r8 = iVar3;
      unaff_r8[1] = piVar1[1];
    }
    piVar1[1] = iVar3;
    *(undefined4 *)((int)register0x00000054 + -0x74) =
         *(undefined4 *)((int)register0x00000054 + -0x48);
    *(undefined4 *)((int)register0x00000054 + -0x70) =
         *(undefined4 *)((int)register0x00000054 + -0x58);
    FUN_0008f77c();
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -0x6c)
    ;
    *(undefined4 *)((int)register0x00000054 + -0x74) = DAT_0047a940;
    *(undefined4 *)((int)register0x00000054 + -0x70) =
         *(undefined4 *)((int)register0x00000054 + -0x38);
    *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0047a96c;
    *(undefined4 *)((int)register0x00000054 + -0x68) = 0xd;
    FUN_00093a08();
    piVar1 = *(int **)((int)register0x00000054 + -100);
    *piVar1 = DAT_0047a964;
    if (*DAT_0047a968 == 0) {
      iVar3 = *(int *)((int)register0x00000054 + -4);
    }
    else {
      piVar1 = (int *)FUN_0009db64();
      iVar3 = *(int *)((int)register0x00000054 + -4);
      *unaff_r8 = iVar3;
      unaff_r8[1] = piVar1[1];
    }
    piVar1[1] = iVar3;
    *(undefined4 *)((int)register0x00000054 + -0x74) = DAT_0047a940;
    *(undefined4 *)((int)register0x00000054 + -0x70) =
         *(undefined4 *)((int)register0x00000054 + -0x38);
    *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0047a970;
    *(undefined4 *)((int)register0x00000054 + -0x68) = 8;
    FUN_00093a08();
    iVar3 = DAT_0047a964;
    piVar1 = *(int **)((int)register0x00000054 + -100);
    *piVar1 = DAT_0047a964;
    if (*DAT_0047a968 != 0) {
      piVar1 = (int *)FUN_0009db54(piVar1,iVar3,piVar1[1]);
      *unaff_r8 = extraout_r2;
    }
    piVar1[1] = DAT_0047a974;
    *(undefined4 *)((int)register0x00000054 + -0x74) = DAT_0047a940;
    *(undefined4 *)((int)register0x00000054 + -0x70) =
         *(undefined4 *)((int)register0x00000054 + -0x38);
    *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0047a978;
    *(undefined4 *)((int)register0x00000054 + -0x68) = 0xc;
    FUN_00093a08();
    iVar3 = DAT_0047a964;
    piVar1 = *(int **)((int)register0x00000054 + -100);
    *piVar1 = DAT_0047a964;
    if (*DAT_0047a968 != 0) {
      piVar1 = (int *)FUN_0009db54(piVar1,iVar3,piVar1[1]);
      *unaff_r8 = extraout_r2_00;
    }
    piVar1[1] = DAT_0047a97c;
    *(undefined4 *)((int)register0x00000054 + -0x74) = DAT_0047a940;
    *(undefined4 *)((int)register0x00000054 + -0x70) =
         *(undefined4 *)((int)register0x00000054 + -0x38);
    *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0047a980;
    *(undefined4 *)((int)register0x00000054 + -0x68) = 0xb;
    FUN_00093a08();
    iVar3 = DAT_0047a964;
    piVar1 = *(int **)((int)register0x00000054 + -100);
    *piVar1 = DAT_0047a964;
    if (*DAT_0047a968 != 0) {
      piVar1 = (int *)FUN_0009db54(piVar1,iVar3,piVar1[1]);
      *unaff_r8 = extraout_r2_01;
    }
    piVar1[1] = DAT_0047a984;
    uVar4 = *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 0x34);
    *(undefined4 *)((int)register0x00000054 + -0x74) =
         *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 0x30);
    *(undefined4 *)((int)register0x00000054 + -0x70) = uVar4;
    FUN_0008f77c();
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -0x6c)
    ;
    *(undefined4 *)((int)register0x00000054 + -0x74) = DAT_0047a940;
    *(undefined4 *)((int)register0x00000054 + -0x70) =
         *(undefined4 *)((int)register0x00000054 + -0x38);
    *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0047a988;
    *(undefined4 *)((int)register0x00000054 + -0x68) = 0xb;
    FUN_00093a08();
    piVar1 = *(int **)((int)register0x00000054 + -100);
    *piVar1 = DAT_0047a964;
    if (*DAT_0047a968 == 0) {
      iVar3 = *(int *)((int)register0x00000054 + -4);
    }
    else {
      piVar1 = (int *)FUN_0009db64();
      iVar3 = *(int *)((int)register0x00000054 + -4);
      *unaff_r8 = iVar3;
      unaff_r8[1] = piVar1[1];
    }
    piVar1[1] = iVar3;
    uVar4 = *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 0x3c);
    *(undefined4 *)((int)register0x00000054 + -0x74) =
         *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 0x38);
    *(undefined4 *)((int)register0x00000054 + -0x70) = uVar4;
    FUN_0008f77c();
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -0x6c)
    ;
    *(undefined4 *)((int)register0x00000054 + -0x74) = DAT_0047a940;
    *(undefined4 *)((int)register0x00000054 + -0x70) =
         *(undefined4 *)((int)register0x00000054 + -0x38);
    *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0047a98c;
    *(undefined4 *)((int)register0x00000054 + -0x68) = 10;
    FUN_00093a08();
    piVar1 = *(int **)((int)register0x00000054 + -100);
    *piVar1 = DAT_0047a964;
    if (*DAT_0047a968 == 0) {
      iVar3 = *(int *)((int)register0x00000054 + -4);
    }
    else {
      piVar1 = (int *)FUN_0009db64();
      iVar3 = *(int *)((int)register0x00000054 + -4);
      *unaff_r8 = iVar3;
      unaff_r8[1] = piVar1[1];
    }
    piVar1[1] = iVar3;
    *(undefined4 *)((int)register0x00000054 + -0x74) = 0x14;
    *(undefined4 *)((int)register0x00000054 + -0x70) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x6c) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
    FUN_000ffcf0();
    *(undefined4 *)((int)register0x00000054 + -0x74) =
         *(undefined4 *)((int)register0x00000054 + -100);
    FUN_00020ce0();
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -0x70)
    ;
    *(undefined4 *)((int)register0x00000054 + -0x74) = DAT_0047a940;
    *(undefined4 *)((int)register0x00000054 + -0x70) =
         *(undefined4 *)((int)register0x00000054 + -0x38);
    *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0047a990;
    *(undefined4 *)((int)register0x00000054 + -0x68) = 10;
    FUN_00093a08();
    puVar2 = *(undefined4 **)((int)register0x00000054 + -100);
    *puVar2 = DAT_0047a994;
    if (*DAT_0047a968 == 0) {
      iVar3 = *(int *)((int)register0x00000054 + -4);
    }
    else {
      puVar2 = (undefined4 *)FUN_0009db64();
      iVar3 = *(int *)((int)register0x00000054 + -4);
      *unaff_r8 = iVar3;
      unaff_r8[1] = puVar2[1];
    }
    puVar2[1] = iVar3;
    *(undefined4 *)((int)register0x00000054 + -0x74) = 199;
    *(undefined4 *)((int)register0x00000054 + -0x70) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x6c) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
    FUN_000ffcf0();
    *(undefined4 *)((int)register0x00000054 + -0x74) =
         *(undefined4 *)((int)register0x00000054 + -100);
    FUN_00020ce0();
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -0x70)
    ;
    *(undefined4 *)((int)register0x00000054 + -0x74) = DAT_0047a940;
    *(undefined4 *)((int)register0x00000054 + -0x70) =
         *(undefined4 *)((int)register0x00000054 + -0x38);
    *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0047a998;
    *(undefined4 *)((int)register0x00000054 + -0x68) = 7;
    FUN_00093a08();
    puVar2 = *(undefined4 **)((int)register0x00000054 + -100);
    *puVar2 = DAT_0047a994;
    if (*DAT_0047a968 == 0) {
      iVar3 = *(int *)((int)register0x00000054 + -4);
    }
    else {
      puVar2 = (undefined4 *)FUN_0009db64();
      iVar3 = *(int *)((int)register0x00000054 + -4);
      *unaff_r8 = iVar3;
      unaff_r8[1] = puVar2[1];
    }
    puVar2[1] = iVar3;
    *(undefined4 *)((int)register0x00000054 + -0x74) = 200;
    *(undefined4 *)((int)register0x00000054 + -0x70) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x6c) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x68) = 0;
    FUN_000ffcf0();
    *(undefined4 *)((int)register0x00000054 + -0x74) =
         *(undefined4 *)((int)register0x00000054 + -100);
    FUN_00020ce0();
    *(undefined4 *)((int)register0x00000054 + -4) = *(undefined4 *)((int)register0x00000054 + -0x70)
    ;
    *(undefined4 *)((int)register0x00000054 + -0x74) = DAT_0047a940;
    *(undefined4 *)((int)register0x00000054 + -0x70) =
         *(undefined4 *)((int)register0x00000054 + -0x38);
    *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0047a99c;
    *(undefined4 *)((int)register0x00000054 + -0x68) = 8;
    FUN_00093a08();
    puVar2 = *(undefined4 **)((int)register0x00000054 + -100);
    *puVar2 = DAT_0047a994;
    if (*DAT_0047a968 == 0) {
      iVar3 = *(int *)((int)register0x00000054 + -4);
    }
    else {
      puVar2 = (undefined4 *)FUN_0009db64();
      iVar3 = *(int *)((int)register0x00000054 + -4);
      *unaff_r8 = iVar3;
      unaff_r8[1] = puVar2[1];
    }
    puVar2[1] = iVar3;
    *(undefined4 *)((int)register0x00000054 + -0x44) =
         *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 8);
    FUN_0009def4(0,(undefined1 *)((int)register0x00000054 + -0x2c));
    *(undefined4 *)((int)register0x00000054 + -0x28) = 8;
    *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_0047a9a0;
    *(undefined4 *)((int)register0x00000054 + -0x20) = 0xb;
    *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0047a9a4;
    *(undefined4 *)((int)register0x00000054 + -0x18) = 0x10;
    *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0047a9a8;
    *(undefined4 *)((int)register0x00000054 + -0x10) = 8;
    *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_0047a9ac;
    iVar3 = 0;
    uVar4 = extraout_r2_02;
    do {
      if (3 < iVar3) {
        iVar3 = *(int *)((int)register0x00000054 + 8);
        if (*(int *)(iVar3 + 0x18) == 0) {
          *(undefined4 *)(iVar3 + 0x18) = DAT_0047aa40;
          if (*DAT_0047aa44 == 0) {
            iVar5 = *(int *)((int)register0x00000054 + -0x38);
          }
          else {
            iVar3 = FUN_0009db64();
            iVar5 = *(int *)((int)register0x00000054 + -0x38);
            *unaff_r8 = iVar5;
            unaff_r8[1] = *(int *)(iVar3 + 0x1c);
          }
          *(int *)(iVar3 + 0x1c) = iVar5;
        }
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        return;
      }
      *(int *)((int)register0x00000054 + -0x4c) = iVar3;
      uVar6 = *(undefined4 *)((int)register0x00000054 + iVar3 * 8 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar6;
      uVar7 = *(undefined4 *)((int)register0x00000054 + iVar3 * 8 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x54) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0x74) = DAT_0047a940;
      *(undefined4 *)((int)register0x00000054 + -0x70) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0x68) = uVar7;
      FUN_00025f60();
      iVar3 = **(int **)((int)register0x00000054 + -100);
      if (iVar3 != 0) {
        bVar9 = iVar3 == DAT_0047a964;
        if (!bVar9) goto LAB_0047aa18;
        puVar2 = (undefined4 *)(*(int **)((int)register0x00000054 + -100))[1];
        uVar4 = puVar2[1];
        *(undefined4 *)((int)register0x00000054 + -0x74) = *puVar2;
        *(undefined4 *)((int)register0x00000054 + -0x70) = uVar4;
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x6c);
        *(undefined4 *)((int)register0x00000054 + -0x74) = DAT_0047a940;
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        FUN_00093a08();
        piVar1 = *(int **)((int)register0x00000054 + -100);
        *piVar1 = DAT_0047a964;
        if (*DAT_0047a968 == 0) {
          iVar3 = *(int *)((int)register0x00000054 + -4);
        }
        else {
          piVar1 = (int *)FUN_0009db64();
          iVar3 = *(int *)((int)register0x00000054 + -4);
          *unaff_r8 = iVar3;
          unaff_r8[1] = piVar1[1];
        }
        piVar1[1] = iVar3;
      }
      iVar3 = *(int *)((int)register0x00000054 + -0x4c) + 1;
      uVar4 = *(undefined4 *)((int)register0x00000054 + -0x44);
    } while( true );
  }
  goto LAB_0047aa30;
LAB_0047aa18:
  *(int *)((int)register0x00000054 + -0x74) = iVar3;
  *(int *)((int)register0x00000054 + -0x70) = DAT_0047a964;
  *(undefined4 *)((int)register0x00000054 + -0x6c) = DAT_0047aa48;
  param_1 = FUN_000209b4();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x78);
  if (bVar9) {
    register0x00000054 = (BADSPACEBASE *)puVar8;
  }
LAB_0047aa30:
  unaff_lr = 0x47aa38;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x0047a184;
}



/* k3c/internal/pkg/web.(*WebHooks)._handle_rpc_registration @ 0047aa4c (size 712) */

void k3c_internal_pkg_web___WebHooks___handle_rpc_registration(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *extraout_r1;
  undefined4 uVar3;
  int iVar4;
  int extraout_r2;
  undefined4 uVar5;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  bool bVar7;
  undefined8 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_0047ad18;
      *(undefined4 *)((int)register0x00000054 + -0x38) = 0x11;
      *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_0047ad1c;
      *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0047ad20;
      k3c_internal_pkg_web___WebRequest__get_dict();
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_0047ad24;
      *(undefined4 *)((int)register0x00000054 + -0x38) = 0xd;
      *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_0047ad1c;
      *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0047ad20;
      k3c_internal_pkg_web___WebRequest__get_str();
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_0047ad28;
      FUN_00022cf8();
      piVar2 = *(int **)((int)register0x00000054 + -0x3c);
      iVar4 = **(int **)((int)register0x00000054 + 8);
      if (*DAT_0047ad2c != 0) {
        FUN_0009db54();
        *unaff_r8 = extraout_r2;
        piVar2 = extraout_r1;
        iVar4 = extraout_r2;
      }
      *(int **)((int)register0x00000054 + -4) = piVar2;
      *piVar2 = iVar4;
      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x14));
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_0047ad30;
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_0047ad34;
      *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_0047ad38;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = 0x3e;
      *(undefined1 **)((int)register0x00000054 + -0x38) =
           (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x34) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x30) = 2;
      k3c_internal_pkg_logger_Infof();
      uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
      *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_0047ad3c;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x2c) == '\0') {
        FUN_000908bc();
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x18) = uVar5;
        uVar3 = **(undefined4 **)((int)register0x00000054 + -4);
        *(int *)((int)register0x00000054 + -0x40) = DAT_0047ad40;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x38) = uVar3;
        FUN_00092c70();
        uVar8 = CONCAT44(DAT_0047ad3c,*(undefined4 **)((int)register0x00000054 + -0x34));
        **(undefined4 **)((int)register0x00000054 + -0x34) = DAT_0047ad3c;
        if (*DAT_0047ad2c == 0) {
          iVar4 = *(int *)((int)register0x00000054 + -0x20);
        }
        else {
          uVar8 = FUN_0009db64();
          iVar4 = *(int *)((int)register0x00000054 + -0x20);
          *unaff_r8 = iVar4;
          unaff_r8[1] = *(int *)((int)uVar8 + 4);
        }
        *(int *)((int)uVar8 + 4) = iVar4;
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
        *(int *)((int)register0x00000054 + -0x40) = (int)((ulonglong)uVar8 >> 0x20);
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        FUN_00093a08();
        piVar2 = *(int **)((int)register0x00000054 + -0x30);
        *piVar2 = DAT_0047ad40;
        if (*DAT_0047ad2c == 0) {
          iVar4 = *(int *)((int)register0x00000054 + -0x18);
        }
        else {
          piVar2 = (int *)FUN_0009db64();
          iVar4 = *(int *)((int)register0x00000054 + -0x18);
          *unaff_r8 = iVar4;
          unaff_r8[1] = piVar2[1];
        }
        piVar2[1] = iVar4;
        goto LAB_0047acd4;
      }
      iVar4 = **(int **)((int)register0x00000054 + -0x30);
      bVar7 = iVar4 == DAT_0047ad40;
      if (bVar7) {
        iVar4 = (*(int **)((int)register0x00000054 + -0x30))[1];
        uVar5 = **(undefined4 **)((int)register0x00000054 + -4);
        *(int *)((int)register0x00000054 + -0x40) = DAT_0047ad40;
        *(int *)((int)register0x00000054 + -0x3c) = iVar4;
        *(undefined4 *)((int)register0x00000054 + -0x38) = uVar5;
        FUN_00092c70();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x34);
        *puVar1 = DAT_0047ad3c;
        if (*DAT_0047ad2c == 0) {
          iVar4 = *(int *)((int)register0x00000054 + -0x20);
        }
        else {
          puVar1 = (undefined4 *)FUN_0009db64();
          iVar4 = *(int *)((int)register0x00000054 + -0x20);
          *unaff_r8 = iVar4;
          unaff_r8[1] = puVar1[1];
        }
        puVar1[1] = iVar4;
LAB_0047acd4:
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        return;
      }
      *(int *)((int)register0x00000054 + -0x40) = iVar4;
      *(int *)((int)register0x00000054 + -0x3c) = DAT_0047ad40;
      *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_0047ad44;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if (bVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x47ad10;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/web.(*WebHooks).get_callback @ 0047ad48 (size 272) */

void k3c_internal_pkg_web___WebHooks__get_callback(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int *local_14;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (uVar1 = in_stack_00000008, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00025f60();
  if (*local_14 != 0) {
    return;
  }
  local_8 = 0;
  local_4 = (undefined4 *)0x0;
  FUN_0008f77c();
  local_8 = DAT_0047ae60;
  local_4 = (undefined4 *)uVar1;
  FUN_0013b72c();
  local_8 = 0;
  local_4 = (undefined4 *)0x0;
  FUN_0008f77c();
  local_8 = DAT_0047ae60;
  local_4 = &local_8;
  k3c_internal_pkg_logger_Error();
  return;
}



/* k3c/internal/pkg/web.(*WebHooks).Get_status @ 0047ae68 (size 512) */

void k3c_internal_pkg_web___WebHooks__Get_status(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 uStack_30;
  undefined4 uStack_28;
  char cStack_24;
  undefined4 *puStack_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x47b064;
    FUN_0009bf64();
  }
  iVar2 = *in_stack_00000004;
  if (*(int *)(iVar2 + 0x14) == 0x10) {
    uStack_30 = *(undefined4 *)(iVar2 + 0x10);
    uStack_28 = 0x10;
    FUN_00018250();
    if (cStack_24 != '\0') goto LAB_0047af34;
  }
  if (*(int *)(iVar2 + 0x14) == 0x66) {
    uStack_30 = *(undefined4 *)(iVar2 + 0x10);
    uStack_28 = 0x66;
    FUN_00018250();
  }
LAB_0047af34:
  FUN_000908bc();
  FUN_0008f77c();
  puVar1 = PTR_s_statechdirwritemkdirchmodchowncl_00820821_0x631_0047b088;
  FUN_00093a08();
  *puStack_20 = PTR_DAT_0047b08c;
  puVar3 = puStack_20;
  if (*(int *)PTR_DAT_0047b090 != 0) {
    puVar3 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = uStack_28;
    unaff_r8[1] = puVar3[1];
  }
  puVar3[1] = uStack_28;
  FUN_0008f77c();
  FUN_00093a08();
  *puStack_20 = PTR_DAT_0047b08c;
  if (*(int *)PTR_DAT_0047b090 != 0) {
    puStack_20 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = puStack_20[1];
  }
  puStack_20[1] = puVar1;
  in_stack_00000010 = uStack_30;
                    /* WARNING: Could not recover jumptable at 0x0047b058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/web.(*WebHooks).Call_remote_method @ 0047b098 (size 1156) */

/* WARNING: Removing unreachable block (ram,0x0047b1ec) */

void k3c_internal_pkg_web___WebHooks__Call_remote_method(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *extraout_r1;
  undefined *extraout_r2;
  undefined *puVar6;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
code_r0x0047b098:
  if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x28)) {
    puVar7 = (undefined1 *)((int)register0x00000054 + -0xa8);
    *(undefined4 *)((int)register0x00000054 + -0xa8) = unaff_lr;
    uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
    *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_0047b520;
    *(undefined4 *)((int)register0x00000054 + -0xa0) = uVar3;
    *(undefined4 *)((int)register0x00000054 + -0x9c) = *(undefined4 *)((int)register0x00000054 + 8);
    *(undefined4 *)((int)register0x00000054 + -0x98) =
         *(undefined4 *)((int)register0x00000054 + 0xc);
    FUN_00093560();
    if (*(char *)((int)register0x00000054 + -0x90) == '\0') {
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa4) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0047b528;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x9c);
      *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_0047b52c;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 0x21;
      *(undefined1 **)((int)register0x00000054 + -0x9c) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x98) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x94) = 1;
      FUN_001386c4();
      *(undefined4 *)((int)register0x00000054 + 0x18) =
           *(undefined4 *)((int)register0x00000054 + -0x90);
      *(undefined4 *)((int)register0x00000054 + 0x1c) =
           *(undefined4 *)((int)register0x00000054 + -0x8c);
      return;
    }
    uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
    *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_0047b520;
    *(undefined4 *)((int)register0x00000054 + -0xa0) = uVar3;
    *(undefined4 *)((int)register0x00000054 + -0x9c) = *(undefined4 *)((int)register0x00000054 + 8);
    *(undefined4 *)((int)register0x00000054 + -0x98) =
         *(undefined4 *)((int)register0x00000054 + 0xc);
    FUN_00025f60();
    puVar4 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x94);
    uVar8 = 0;
    puVar6 = PTR_DAT_0047b524;
    if (puVar4 == PTR_DAT_0047b524) {
      *(undefined4 *)((int)register0x00000054 + -0x6c) =
           (*(undefined4 **)((int)register0x00000054 + -0x94))[1];
      FUN_000908bc();
      *(undefined4 *)((int)register0x00000054 + -0x80) =
           *(undefined4 *)((int)register0x00000054 + -0xa4);
      FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x38));
      *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_0047b524;
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + -0x6c);
      *(undefined1 **)((int)register0x00000054 + -0x9c) =
           (undefined1 *)((int)register0x00000054 + -0x38);
      FUN_00091764();
      do {
        if (*(int **)((int)register0x00000054 + -0x38) == (int *)0x0) {
          if (*(int **)((int)register0x00000054 + -0x80) == (int *)0x0) {
            iVar1 = 0;
          }
          else {
            iVar1 = **(int **)((int)register0x00000054 + -0x80);
          }
          if (iVar1 != 0) {
            uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
            *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_0047b520;
            *(undefined4 *)((int)register0x00000054 + -0xa0) = uVar3;
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x98) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            FUN_00093a08();
            puVar2 = *(undefined4 **)((int)register0x00000054 + -0x94);
            *puVar2 = PTR_DAT_0047b524;
            if (*(int *)PTR_DAT_0047b530 == 0) {
              uVar3 = *(undefined4 *)((int)register0x00000054 + -0x80);
            }
            else {
              puVar2 = (undefined4 *)FUN_0009db64();
              uVar3 = *(undefined4 *)((int)register0x00000054 + -0x80);
              *unaff_r8 = uVar3;
              unaff_r8[1] = puVar2[1];
            }
            puVar2[1] = uVar3;
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
            return;
          }
          uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
          *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_0047b520;
          *(undefined4 *)((int)register0x00000054 + -0xa0) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x9c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x98) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_000263c8();
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xa4) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0xa0) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0047b528;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x9c);
          *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_0047b538;
          *(undefined4 *)((int)register0x00000054 + -0xa0) = 0x25;
          *(undefined1 **)((int)register0x00000054 + -0x9c) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x98) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x94) = 1;
          FUN_001386c4();
          *(undefined4 *)((int)register0x00000054 + 0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x90);
          *(undefined4 *)((int)register0x00000054 + 0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x8c);
          return;
        }
        iVar1 = **(int **)((int)register0x00000054 + -0x38);
        if (*(int *)(iVar1 + 0x18) != 0) {
          *(int *)((int)register0x00000054 + -0x74) = iVar1;
          *(undefined4 *)((int)register0x00000054 + -0x84) =
               **(undefined4 **)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -0x78) =
               (*(undefined4 **)((int)register0x00000054 + -0x34))[1];
          *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_0047b524;
          *(undefined4 *)((int)register0x00000054 + -0xa0) =
               *(undefined4 *)((int)register0x00000054 + -0x80);
          *(int *)((int)register0x00000054 + -0x9c) = iVar1;
          FUN_00092c70();
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x98);
          *puVar2 = *(undefined4 *)((int)register0x00000054 + -0x84);
          if (*(int *)PTR_DAT_0047b530 == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x78);
          }
          else {
            puVar2 = (undefined4 *)FUN_0009db64();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x78);
            *unaff_r8 = uVar3;
            unaff_r8[1] = puVar2[1];
          }
          puVar2[1] = uVar3;
          FUN_000908bc();
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0xa4);
          *(undefined4 *)((int)register0x00000054 + -0x70) = uVar3;
          *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_0047b520;
          *(undefined4 *)((int)register0x00000054 + -0xa0) = uVar3;
          *(undefined **)((int)register0x00000054 + -0x9c) =
               PTR_s_paramsmethodscriptstatusreadatTM_008214ab_0x3c_0047b534;
          *(undefined4 *)((int)register0x00000054 + -0x98) = 6;
          FUN_00093a08();
          puVar2 = *(undefined4 **)((int)register0x00000054 + -0x94);
          *puVar2 = *(undefined4 *)((int)register0x00000054 + 0x10);
          if (*(int *)PTR_DAT_0047b530 == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + 0x14);
          }
          else {
            puVar2 = (undefined4 *)FUN_0009db64();
            uVar3 = *(undefined4 *)((int)register0x00000054 + 0x14);
            *unaff_r8 = uVar3;
            unaff_r8[1] = puVar2[1];
          }
          puVar2[1] = uVar3;
          puVar4 = PTR_DAT_0047b520;
          uVar8 = *(undefined **)((int)register0x00000054 + -0x84) == PTR_DAT_0047b520;
          if (!(bool)uVar8) goto LAB_0047b4e4;
          FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x68));
          *(undefined **)((int)register0x00000054 + -0xa4) = puVar4;
          *(undefined4 *)((int)register0x00000054 + -0xa0) =
               *(undefined4 *)((int)register0x00000054 + -0x78);
          *(undefined1 **)((int)register0x00000054 + -0x9c) =
               (undefined1 *)((int)register0x00000054 + -0x68);
          FUN_00091764();
          while (puVar2 = *(undefined4 **)((int)register0x00000054 + -0x68),
                puVar2 != (undefined4 *)0x0) {
            uVar5 = *puVar2;
            uVar3 = puVar2[1];
            *(undefined4 *)((int)register0x00000054 + -0x88) =
                 **(undefined4 **)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + -0x7c) =
                 (*(undefined4 **)((int)register0x00000054 + -100))[1];
            *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_0047b520;
            *(undefined4 *)((int)register0x00000054 + -0xa0) =
                 *(undefined4 *)((int)register0x00000054 + -0x70);
            *(undefined4 *)((int)register0x00000054 + -0x9c) = uVar5;
            *(undefined4 *)((int)register0x00000054 + -0x98) = uVar3;
            FUN_00093a08();
            puVar2 = *(undefined4 **)((int)register0x00000054 + -0x94);
            *puVar2 = *(undefined4 *)((int)register0x00000054 + -0x88);
            if (*(int *)PTR_DAT_0047b530 == 0) {
              uVar3 = *(undefined4 *)((int)register0x00000054 + -0x7c);
            }
            else {
              puVar2 = (undefined4 *)FUN_0009db64();
              uVar3 = *(undefined4 *)((int)register0x00000054 + -0x7c);
              *unaff_r8 = uVar3;
              unaff_r8[1] = puVar2[1];
            }
            puVar2[1] = uVar3;
            *(undefined1 **)((int)register0x00000054 + -0xa4) =
                 (undefined1 *)((int)register0x00000054 + -0x68);
            FUN_000919c8();
          }
          *(undefined4 *)((int)register0x00000054 + -0xa4) =
               *(undefined4 *)((int)register0x00000054 + -0x74);
          *(undefined **)((int)register0x00000054 + -0xa0) = PTR_DAT_0047b520;
          *(undefined4 *)((int)register0x00000054 + -0x9c) =
               *(undefined4 *)((int)register0x00000054 + -0x70);
          k3c_internal_pkg_web___ClientConnection__Send();
        }
        *(undefined1 **)((int)register0x00000054 + -0xa4) =
             (undefined1 *)((int)register0x00000054 + -0x38);
        FUN_000919c8();
      } while( true );
    }
    goto LAB_0047b4f8;
  }
  goto LAB_0047b510;
LAB_0047b4e4:
  *(undefined **)((int)register0x00000054 + -0xa4) =
       *(undefined **)((int)register0x00000054 + -0x84);
  *(undefined **)((int)register0x00000054 + -0xa0) = PTR_DAT_0047b520;
  *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_0047b53c;
  FUN_000209b4();
  puVar4 = extraout_r1;
  puVar6 = extraout_r2;
LAB_0047b4f8:
  *(undefined **)((int)register0x00000054 + -0xa4) = puVar4;
  *(undefined **)((int)register0x00000054 + -0xa0) = puVar6;
  *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_0047b53c;
  param_1 = FUN_000209b4();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xa8);
  if ((bool)uVar8) {
    register0x00000054 = (BADSPACEBASE *)puVar7;
  }
LAB_0047b510:
  unaff_lr = 0x47b518;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x0047b098;
}



/* k3c/internal/pkg/web.(*WebHooks).Register_mux_endpoint @ 0047b540 (size 1112) */

void k3c_internal_pkg_web___WebHooks__Register_mux_endpoint(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  bool bVar8;
  undefined8 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -100);
      *(undefined4 *)((int)register0x00000054 + -100) = unaff_lr;
      uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0047b99c;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093560();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x50);
      uVar5 = *puVar1;
      uVar3 = puVar1[2];
      if (*(char *)((int)register0x00000054 + -0x4c) == '\0') {
        FUN_0009e2f0(uVar3,*(undefined4 *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + -0x40));
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0047b9a0;
        FUN_00022cf8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x5c);
        *puVar1 = PTR_k3c_internal_pkg_web___WebHooks___handle_mux_fm_0047b9a4;
        if (*(int *)PTR_DAT_0047b9a8 == 0) {
          uVar3 = *(undefined4 *)((int)register0x00000054 + 4);
        }
        else {
          puVar1 = (undefined4 *)FUN_0009db54();
          uVar3 = *(undefined4 *)((int)register0x00000054 + 4);
          *unaff_r8 = uVar3;
        }
        *(undefined4 **)((int)register0x00000054 + -0x24) = puVar1;
        puVar1[1] = uVar3;
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0047b9ac;
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x4c) == '\0') {
          *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0047b9ac;
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x3c);
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093a08();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x50);
          if (*(int *)PTR_DAT_0047b9a8 == 0) {
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x24);
          }
          else {
            puVar1 = (undefined4 *)FUN_0009db64();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -0x24);
            *unaff_r8 = uVar3;
            unaff_r8[1] = *puVar1;
          }
          *puVar1 = uVar3;
        }
        FUN_000908bc();
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -0x60);
        *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0047b99c;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00093a08();
        uVar9 = CONCAT44(*(undefined4 *)((int)register0x00000054 + 0x14),
                         *(int *)((int)register0x00000054 + -0x50));
        *(undefined4 *)(*(int *)((int)register0x00000054 + -0x50) + 4) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        if (*(int *)PTR_DAT_0047b9a8 == 0) {
          uVar5 = *(undefined4 *)((int)register0x00000054 + 0x10);
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x2c);
        }
        else {
          uVar9 = FUN_0009db84();
          uVar5 = *(undefined4 *)((int)register0x00000054 + 0x10);
          *unaff_r8 = uVar5;
          unaff_r8[1] = *(undefined4 *)uVar9;
          uVar3 = *(undefined4 *)((int)register0x00000054 + -0x2c);
          unaff_r8[2] = uVar3;
          unaff_r8[3] = ((undefined4 *)uVar9)[2];
        }
        iVar2 = (int)((ulonglong)uVar9 >> 0x20);
        *(undefined4 *)uVar9 = uVar5;
        ((undefined4 *)uVar9)[2] = uVar3;
        iVar4 = iVar2;
        uVar6 = uVar5;
      }
      else {
        iVar2 = *(int *)((int)register0x00000054 + 0x14);
        iVar4 = puVar1[1];
        uVar6 = *(undefined4 *)((int)register0x00000054 + 0x10);
      }
      *(undefined4 *)((int)register0x00000054 + -0x28) = uVar5;
      *(int *)((int)register0x00000054 + -0x44) = iVar4;
      if (iVar2 == iVar4) {
        *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar3;
        *(undefined4 *)((int)register0x00000054 + -0x60) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar6;
        *(int *)((int)register0x00000054 + -0x58) = iVar4;
        FUN_00018250();
        if (*(char *)((int)register0x00000054 + -0x54) != '\0') {
          *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0047b9b0;
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x58) =
               *(undefined4 *)((int)register0x00000054 + 0x18);
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               *(undefined4 *)((int)register0x00000054 + 0x1c);
          FUN_00093560();
          if (*(char *)((int)register0x00000054 + -0x4c) == '\0') {
            *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0047b9b0;
            *(undefined4 *)((int)register0x00000054 + -0x5c) =
                 *(undefined4 *)((int)register0x00000054 + -0x2c);
            *(undefined4 *)((int)register0x00000054 + -0x58) =
                 *(undefined4 *)((int)register0x00000054 + 0x18);
            *(undefined4 *)((int)register0x00000054 + -0x54) =
                 *(undefined4 *)((int)register0x00000054 + 0x1c);
            FUN_00093a08();
            puVar1 = *(undefined4 **)((int)register0x00000054 + -0x50);
            if (*(int *)PTR_DAT_0047b9a8 == 0) {
              uVar3 = *(undefined4 *)((int)register0x00000054 + 0x20);
            }
            else {
              puVar1 = (undefined4 *)FUN_0009db64();
              uVar3 = *(undefined4 *)((int)register0x00000054 + 0x20);
              *unaff_r8 = uVar3;
              unaff_r8[1] = *puVar1;
            }
            *puVar1 = uVar3;
            return;
          }
          FUN_0009def4(0,(undefined1 *)((int)register0x00000054 + -0x20));
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0047b9b4;
          *(undefined4 *)((int)register0x00000054 + -0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + 0x14);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0047b9b4;
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + 0x18);
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + 0x1c);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0047b9b4;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0047b9b0;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0047b9b8;
          *(undefined4 *)((int)register0x00000054 + -0x5c) = 0x2e;
          *(undefined1 **)((int)register0x00000054 + -0x58) =
               (undefined1 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x54) = 4;
          *(undefined4 *)((int)register0x00000054 + -0x50) = 4;
          FUN_001386c4();
          uVar3 = 0;
          if (*(int *)((int)register0x00000054 + -0x4c) != 0) {
            uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x4c) + 4);
          }
          *(undefined4 *)((int)register0x00000054 + -0x60) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x5c) =
               *(undefined4 *)((int)register0x00000054 + -0x48);
          FUN_00095b00();
        }
      }
      FUN_0009def4(0,(undefined1 *)((int)register0x00000054 + -0x20));
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0047b9b4;
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + 0x14);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_0047b9b4;
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + 0x18);
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + 0x1c);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0047b9b4;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x60) =
           *(undefined4 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_0047b9b4;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x58);
      *(undefined **)((int)register0x00000054 + -0x60) = PTR_DAT_0047b9bc;
      *(undefined4 *)((int)register0x00000054 + -0x5c) = 0x30;
      *(undefined1 **)((int)register0x00000054 + -0x58) =
           (undefined1 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x54) = 4;
      *(undefined4 *)((int)register0x00000054 + -0x50) = 4;
      FUN_001386c4();
      bVar8 = *(int *)((int)register0x00000054 + -0x4c) == 0;
      uVar3 = 0;
      if (!bVar8) {
        uVar3 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x4c) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0x60) = uVar3;
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -100);
      if (bVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x47b994;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/web.(*WebHooks)._handle_mux @ 0047b9c0 (size 628) */

void k3c_internal_pkg_web___WebHooks___handle_mux(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  bool bVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x50);
      *(undefined4 *)((int)register0x00000054 + -0x50) = unaff_lr;
      uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 0xc);
      uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 8) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_0047bc38;
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x44) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0x40) = uVar5;
      FUN_00025f60();
      puVar2 = *(undefined4 **)((int)register0x00000054 + -0x3c);
      uVar1 = puVar2[2];
      *(undefined4 *)((int)register0x00000054 + -0x14) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x18) = *puVar2;
      *(undefined4 *)((int)register0x00000054 + -0x20) = puVar2[1];
      *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_0047bc3c;
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x44) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x38) == '\0') {
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_0047bc48;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_0047bc4c;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
        k3c_internal_pkg_web___WebRequest__get();
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        k3c_internal_pkg_util_cast_ToStringE();
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x44);
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x40);
      }
      else {
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_0047bc40;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_0047bc44;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
        k3c_internal_pkg_web___WebRequest__get();
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        k3c_internal_pkg_util_cast_ToStringE();
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x44);
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x40);
      }
      *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x24) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_0047bc3c;
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x44) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x40) = uVar4;
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x38) != '\0') {
        *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_0047bc3c;
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        FUN_00025f60();
        pcVar3 = *(code **)**(undefined4 **)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        (*pcVar3)();
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        return;
      }
      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x24);
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_0047bc40;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x20);
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -8) = DAT_0047bc40;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_0047bc50;
      *(undefined4 *)((int)register0x00000054 + -0x48) = 0x22;
      *(undefined1 **)((int)register0x00000054 + -0x44) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x40) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = 2;
      FUN_001386c4();
      bVar7 = *(int *)((int)register0x00000054 + -0x38) == 0;
      uVar1 = 0;
      if (!bVar7) {
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x38) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x50);
      if (bVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x47bc30;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/web.NewGCodeHelper @ 0047bc54 (size 1484) */

void k3c_internal_pkg_web_NewGCodeHelper(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  undefined8 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047c224;
      FUN_00022cf8();
      puVar4 = *(undefined4 **)((int)register0x00000054 + -0x38);
      if (*(int *)PTR_DAT_0047c228 == 0) {
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      else {
        FUN_0009db54();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
        *unaff_r8 = uVar1;
        puVar4 = extraout_r1;
      }
      *(undefined4 **)((int)register0x00000054 + -4) = puVar4;
      *puVar4 = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar1;
      *(undefined **)((int)register0x00000054 + -0x38) =
           PTR_s_gcodeok__sM8844_helpReady_________00820821_0x5d2_0047c22c;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 5;
      *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_0047c230;
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0047c234;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      uVar7 = CONCAT44(PTR_DAT_0047c238,*(undefined **)((int)register0x00000054 + -0x28));
      uVar6 = 0;
      if (*(undefined **)((int)register0x00000054 + -0x28) == PTR_DAT_0047c238) {
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x24);
        if (*(int *)PTR_DAT_0047c228 == 0) {
          iVar2 = *(int *)((int)register0x00000054 + -4);
        }
        else {
          FUN_0009db64();
          *unaff_r8 = extraout_r1_00;
          iVar2 = *(int *)((int)register0x00000054 + -4);
          unaff_r8[1] = *(undefined4 *)(iVar2 + 4);
          uVar1 = extraout_r1_00;
        }
        *(undefined4 *)(iVar2 + 4) = uVar1;
        *(undefined1 *)(iVar2 + 8) = 0;
        FUN_000908bc();
        uVar1 = *(undefined4 *)((int)register0x00000054 + -0x3c);
        if (*(int *)PTR_DAT_0047c228 == 0) {
          iVar2 = *(int *)((int)register0x00000054 + -4);
        }
        else {
          FUN_0009db64();
          *unaff_r8 = extraout_r1_01;
          iVar2 = *(int *)((int)register0x00000054 + -4);
          unaff_r8[1] = *(undefined4 *)(iVar2 + 0xc);
          uVar1 = extraout_r1_01;
        }
        *(undefined4 *)(iVar2 + 0xc) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x38) =
             PTR_s_webhooksresponsesignal__truncate_008216f7_0x1055_0047c23c;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 8;
        *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_0047c230;
        *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0047c234;
        k3c_internal_pkg_printer___Printer__Lookup_object();
        puVar3 = *(undefined **)((int)register0x00000054 + -0x28);
        uVar6 = puVar3 == PTR_DAT_0047c240;
        if ((bool)uVar6) {
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          FUN_0009e2f0(puVar3,*(undefined4 *)((int)register0x00000054 + -0x24),
                       (undefined1 *)((int)register0x00000054 + -0x1c));
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047c244;
          FUN_00022cf8();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0x38);
          *puVar4 = PTR_k3c_internal_pkg_web___GCodeHelper___handle_help_fm_0047c248;
          if (*(int *)PTR_DAT_0047c228 == 0) {
            uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          }
          else {
            puVar4 = (undefined4 *)FUN_0009db54();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
            *unaff_r8 = uVar1;
          }
          *(undefined4 **)((int)register0x00000054 + -8) = puVar4;
          puVar4[1] = uVar1;
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047c24c;
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined **)((int)register0x00000054 + -0x34) =
               PTR_s_gcode_helpGet_status_dev_stdinre_00823504_0xf8a_0047c250;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 10;
          FUN_00093560();
          puVar4 = (undefined4 *)(uint)*(byte *)((int)register0x00000054 + -0x28);
          if (puVar4 == (undefined4 *)0x0) {
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047c24c;
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x18);
            *(undefined **)((int)register0x00000054 + -0x34) =
                 PTR_s_gcode_helpGet_status_dev_stdinre_00823504_0xf8a_0047c250;
            *(undefined4 *)((int)register0x00000054 + -0x30) = 10;
            FUN_00093a08();
            puVar4 = *(undefined4 **)((int)register0x00000054 + -0x2c);
            if (*(int *)PTR_DAT_0047c228 == 0) {
              uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
            }
            else {
              puVar4 = (undefined4 *)FUN_0009db64();
              uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
              *unaff_r8 = uVar1;
              unaff_r8[1] = *puVar4;
            }
            *puVar4 = uVar1;
          }
          FUN_0009e2f0(puVar4,*(undefined4 *)((int)register0x00000054 + -0x20),
                       (undefined1 *)((int)register0x00000054 + -0x1c));
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047c244;
          FUN_00022cf8();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0x38);
          *puVar4 = PTR_k3c_internal_pkg_web___GCodeHelper___handle_script_fm_0047c254;
          if (*(int *)PTR_DAT_0047c228 == 0) {
            uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          }
          else {
            puVar4 = (undefined4 *)FUN_0009db54();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
            *unaff_r8 = uVar1;
          }
          *(undefined4 **)((int)register0x00000054 + -8) = puVar4;
          puVar4[1] = uVar1;
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047c24c;
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0047c258;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 0xc;
          FUN_00093560();
          puVar4 = (undefined4 *)(uint)*(byte *)((int)register0x00000054 + -0x28);
          if (puVar4 == (undefined4 *)0x0) {
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047c24c;
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x18);
            *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0047c258;
            *(undefined4 *)((int)register0x00000054 + -0x30) = 0xc;
            FUN_00093a08();
            puVar4 = *(undefined4 **)((int)register0x00000054 + -0x2c);
            if (*(int *)PTR_DAT_0047c228 == 0) {
              uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
            }
            else {
              puVar4 = (undefined4 *)FUN_0009db64();
              uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
              *unaff_r8 = uVar1;
              unaff_r8[1] = *puVar4;
            }
            *puVar4 = uVar1;
          }
          FUN_0009e2f0(puVar4,*(undefined4 *)((int)register0x00000054 + -0x20),
                       (undefined1 *)((int)register0x00000054 + -0x1c));
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047c244;
          FUN_00022cf8();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0x38);
          *puVar4 = PTR_k3c_internal_pkg_web___GCodeHelper___handle_restart_fm_0047c25c;
          if (*(int *)PTR_DAT_0047c228 == 0) {
            uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          }
          else {
            puVar4 = (undefined4 *)FUN_0009db54();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
            *unaff_r8 = uVar1;
          }
          *(undefined4 **)((int)register0x00000054 + -8) = puVar4;
          puVar4[1] = uVar1;
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047c24c;
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined **)((int)register0x00000054 + -0x34) =
               PTR_s_gcode_restartobjects_queryobject_008262d0_0xdcb_0047c260;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 0xd;
          FUN_00093560();
          puVar4 = (undefined4 *)(uint)*(byte *)((int)register0x00000054 + -0x28);
          if (puVar4 == (undefined4 *)0x0) {
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047c24c;
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x18);
            *(undefined **)((int)register0x00000054 + -0x34) =
                 PTR_s_gcode_restartobjects_queryobject_008262d0_0xdcb_0047c260;
            *(undefined4 *)((int)register0x00000054 + -0x30) = 0xd;
            FUN_00093a08();
            puVar4 = *(undefined4 **)((int)register0x00000054 + -0x2c);
            if (*(int *)PTR_DAT_0047c228 == 0) {
              uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
            }
            else {
              puVar4 = (undefined4 *)FUN_0009db64();
              uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
              *unaff_r8 = uVar1;
              unaff_r8[1] = *puVar4;
            }
            *puVar4 = uVar1;
          }
          FUN_0009e2f0(puVar4,*(undefined4 *)((int)register0x00000054 + -0x20),
                       (undefined1 *)((int)register0x00000054 + -0x1c));
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047c244;
          FUN_00022cf8();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0x38);
          *puVar4 = PTR_k3c_internal_pkg_web___GCodeHelper___handle_firmware_restart_fm_0047c264;
          if (*(int *)PTR_DAT_0047c228 == 0) {
            uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          }
          else {
            puVar4 = (undefined4 *)FUN_0009db54();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
            *unaff_r8 = uVar1;
          }
          *(undefined4 **)((int)register0x00000054 + -8) = puVar4;
          puVar4[1] = uVar1;
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047c24c;
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0047c268;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 0x16;
          FUN_00093560();
          puVar4 = (undefined4 *)(uint)*(byte *)((int)register0x00000054 + -0x28);
          if (puVar4 == (undefined4 *)0x0) {
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047c24c;
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x18);
            *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0047c268;
            *(undefined4 *)((int)register0x00000054 + -0x30) = 0x16;
            FUN_00093a08();
            puVar4 = *(undefined4 **)((int)register0x00000054 + -0x2c);
            if (*(int *)PTR_DAT_0047c228 == 0) {
              uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
            }
            else {
              puVar4 = (undefined4 *)FUN_0009db64();
              uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
              *unaff_r8 = uVar1;
              unaff_r8[1] = *puVar4;
            }
            *puVar4 = uVar1;
          }
          FUN_0009e2f0(puVar4,*(undefined4 *)((int)register0x00000054 + -0x20),
                       (undefined1 *)((int)register0x00000054 + -0x1c));
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047c244;
          FUN_00022cf8();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0x38);
          *puVar4 = PTR_k3c_internal_pkg_web___GCodeHelper___handle_subscribe_output_fm_0047c26c;
          if (*(int *)PTR_DAT_0047c228 == 0) {
            uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          }
          else {
            puVar4 = (undefined4 *)FUN_0009db54();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
            *unaff_r8 = uVar1;
          }
          *(undefined4 **)((int)register0x00000054 + -8) = puVar4;
          puVar4[1] = uVar1;
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047c24c;
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0047c270;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 0x16;
          FUN_00093560();
          if (*(char *)((int)register0x00000054 + -0x28) == '\0') {
            *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047c24c;
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x18);
            *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0047c270;
            *(undefined4 *)((int)register0x00000054 + -0x30) = 0x16;
            FUN_00093a08();
            puVar4 = *(undefined4 **)((int)register0x00000054 + -0x2c);
            if (*(int *)PTR_DAT_0047c228 == 0) {
              uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
            }
            else {
              puVar4 = (undefined4 *)FUN_0009db64();
              uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
              *unaff_r8 = uVar1;
              unaff_r8[1] = *puVar4;
            }
            *puVar4 = uVar1;
          }
          *(undefined4 *)((int)register0x00000054 + 8) =
               *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0047c1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x40))();
          return;
        }
        *(undefined **)((int)register0x00000054 + -0x3c) = puVar3;
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_0047c240;
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0047c274;
        uVar7 = FUN_000209b4();
      }
      *(undefined8 *)((int)register0x00000054 + -0x3c) = uVar7;
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0047c274;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x47c21c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/web.(*GCodeHelper)._handle_script @ 0047c278 (size 324) */

void k3c_internal_pkg_web___GCodeHelper___handle_script(void)

{
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x47c3c0;
    FUN_0009bf64();
  }
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  local_1c = DAT_0047c3c8;
  local_18 = in_stack_00000008;
  local_4 = &local_1c;
  uVar3 = 6;
  uVar1 = in_stack_00000008;
  uVar2 = DAT_0047c3cc;
  uVar4 = DAT_0047c3d0;
  uVar5 = DAT_0047c3d4;
  k3c_internal_pkg_web___WebRequest__get_str();
  FUN_0009df04(0,&local_14,local_2c,local_30,unaff_lr,uVar1,uVar2,uVar3,uVar4,uVar5);
  local_14 = DAT_0047c3d8;
  local_10 = DAT_0047c3dc;
  FUN_0008f77c();
  local_c = DAT_0047c3d8;
  local_8 = uVar3;
  k3c_internal_pkg_logger_Info();
  k3c_internal_pkg_gcode___GCodeDispatch__Run_script();
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  (*(code *)*local_4)();
  return;
}



/* k3c/internal/pkg/web.(*GCodeHelper)._handle_script.func1 @ 0047c3e0 (size 552) */

void k3c_internal_pkg_web___GCodeHelper___handle_script_func1(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_r2;
  char *pcVar6;
  undefined4 extraout_r3;
  char *extraout_r3_00;
  int iVar7;
  int unaff_r7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x20) = *(undefined4 *)(unaff_r7 + 4);
      *(undefined1 **)((int)register0x00000054 + -0x40) =
           (undefined1 *)((int)register0x00000054 + 4);
      FUN_00054ee0();
      iVar1 = *(int *)((int)register0x00000054 + -0x3c);
      if (iVar1 == 0) {
        return;
      }
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x38);
      if (iVar1 != DAT_0047c60c) {
        pcVar6 = (char *)0x0;
        iVar7 = 0;
      }
      else {
        pcVar6 = (char *)*puVar3;
        iVar7 = puVar3[1];
      }
      *(undefined4 **)((int)register0x00000054 + -0x1c) = puVar3;
      *(int *)((int)register0x00000054 + -0x24) = iVar1;
      if ((((iVar1 != DAT_0047c60c) || (iVar7 != 4)) || (*pcVar6 != 'e')) ||
         (((pcVar6[1] != 'x' || (pcVar6[2] != 'i')) || (uVar9 = pcVar6[3] == 't', !(bool)uVar9)))) {
        FUN_0042debc();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x40);
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x38) = uVar4;
        FUN_00099104();
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10),
                     *(undefined4 *)((int)register0x00000054 + -0x30),
                     *(undefined4 *)((int)register0x00000054 + -0x34));
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x40) = extraout_r3;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = extraout_r2;
        FUN_0008f77c();
        *(int *)((int)register0x00000054 + -8) = DAT_0047c60c;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_0047c610;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 0xc;
        *(undefined1 **)((int)register0x00000054 + -0x38) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x34) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 2;
        k3c_internal_pkg_logger_Errorf();
        if (*(int *)((int)register0x00000054 + -0x24) == 0) {
          iVar1 = 0;
          iVar5 = 0;
        }
        else {
          *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_0047c614;
          *(int *)((int)register0x00000054 + -0x3c) = *(int *)((int)register0x00000054 + -0x24);
          FUN_00020dac();
          iVar1 = *(int *)((int)register0x00000054 + -0x38);
          iVar5 = *(int *)((int)register0x00000054 + -0x24);
        }
        if (iVar1 == 0) {
          *(int *)((int)register0x00000054 + -0x18) = iVar5;
          *(undefined4 *)((int)register0x00000054 + -0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_0047c61c;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 2;
          *(undefined1 **)((int)register0x00000054 + -0x38) =
               (undefined1 *)((int)register0x00000054 + -0x18);
          *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 1;
          FUN_001386c4();
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x28);
          k3c_internal_pkg_web___WebRequest__Set_error();
          return;
        }
        uVar9 = iVar5 == 0;
        if (!(bool)uVar9) {
          *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_0047c618;
          *(int *)((int)register0x00000054 + -0x3c) = iVar5;
          FUN_00020dac();
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0x38);
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x1c);
          k3c_internal_pkg_web___WebRequest__Set_error();
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_0047c620;
        FUN_00020b18();
        pcVar6 = extraout_r3_00;
      }
      *(char **)((int)register0x00000054 + -0x40) = pcVar6;
      *(int *)((int)register0x00000054 + -0x3c) = iVar7;
      FUN_0008f77c();
      *(int *)((int)register0x00000054 + -0x40) = DAT_0047c60c;
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + -0x38);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x47c604;
    param_1 = FUN_0009bf00(param_1);
  } while( true );
}



/* k3c/internal/pkg/web.(*GCodeHelper)._handle_restart @ 0047c624 (size 180) */

void k3c_internal_pkg_web___GCodeHelper___handle_restart(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  local_c = DAT_0047c6e4;
  local_8 = in_stack_00000008;
  local_4 = &local_c;
  k3c_internal_pkg_gcode___GCodeDispatch__Run_script();
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  (*(code *)*local_4)();
  return;
}



/* k3c/internal/pkg/web.(*GCodeHelper)._handle_restart.func1 @ 0047c6ec (size 692) */

void k3c_internal_pkg_web___GCodeHelper___handle_restart_func1(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 extraout_r2;
  int extraout_r2_00;
  char *pcVar6;
  undefined4 extraout_r3;
  int iVar7;
  int iVar8;
  int unaff_r7;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0x5c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x38) = *(undefined4 *)(unaff_r7 + 4);
      *(undefined1 **)((int)register0x00000054 + -0x58) =
           (undefined1 *)((int)register0x00000054 + 4);
      FUN_00054ee0();
      iVar1 = *(int *)((int)register0x00000054 + -0x54);
      if (iVar1 == 0) {
        return;
      }
      puVar4 = *(undefined4 **)((int)register0x00000054 + -0x50);
      if (iVar1 != DAT_0047c9a4) {
        pcVar6 = (char *)0x0;
        iVar8 = 0;
      }
      else {
        pcVar6 = (char *)*puVar4;
        iVar8 = puVar4[1];
      }
      *(undefined4 **)((int)register0x00000054 + -0x2c) = puVar4;
      *(int *)((int)register0x00000054 + -0x3c) = iVar1;
      *(char **)((int)register0x00000054 + -0x30) = pcVar6;
      *(int *)((int)register0x00000054 + -0x40) = iVar8;
      if ((((iVar1 != DAT_0047c9a4) || (iVar8 != 4)) || (*pcVar6 != 'e')) ||
         (((pcVar6[1] != 'x' || (pcVar6[2] != 'i')) || (uVar10 = pcVar6[3] == 't', !(bool)uVar10))))
      {
        FUN_0042debc();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x58);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar5;
        FUN_00099104();
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        github_com_petermattis_goid_getg(*(undefined4 *)((int)register0x00000054 + -0x4c));
        FUN_0009def4(0,(undefined1 *)((int)register0x00000054 + -0x20),
                     *(undefined4 *)(*(int *)((int)register0x00000054 + -0x58) + 0x54),
                     *(undefined4 *)(*(int *)((int)register0x00000054 + -0x58) + 0x58));
        *(int *)((int)register0x00000054 + -0x20) = DAT_0047c9a4;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0047c9a8;
        *(undefined4 *)((int)register0x00000054 + -0x58) = extraout_r2;
        *(undefined4 *)((int)register0x00000054 + -0x54) = extraout_r3;
        FUN_0008f6c0();
        *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_0047c9ac;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        FUN_0008f77c();
        *(int *)((int)register0x00000054 + -8) = DAT_0047c9a4;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined1 **)((int)register0x00000054 + -0x58) =
             (undefined1 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x54) = 4;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 4;
        k3c_internal_pkg_logger_Error();
        *(undefined1 *)(*(int *)((int)register0x00000054 + -0x38) + 0x20) = 1;
        FUN_000908bc();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x58) = DAT_0047c9b0;
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x50) = DAT_0047c9b4;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 5;
        FUN_00093a08();
        iVar1 = DAT_0047c9a4;
        piVar3 = *(int **)((int)register0x00000054 + -0x48);
        *piVar3 = DAT_0047c9a4;
        if (*DAT_0047c9b8 != 0) {
          piVar3 = (int *)FUN_0009db54(piVar3,iVar1,piVar3[1]);
          *unaff_r8 = extraout_r2_00;
        }
        piVar3[1] = DAT_0047c9bc;
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined4 *)((int)register0x00000054 + -0x58) = DAT_0047c9b0;
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x50) = DAT_0047c9c0;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 7;
        FUN_00093a08();
        piVar3 = *(int **)((int)register0x00000054 + -0x48);
        *piVar3 = DAT_0047c9a4;
        if (*DAT_0047c9b8 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -0x28);
          iVar8 = *(int *)((int)register0x00000054 + -0x24);
          iVar7 = *(int *)((int)register0x00000054 + -0x38);
        }
        else {
          piVar3 = (int *)FUN_0009db84();
          iVar1 = *(int *)((int)register0x00000054 + -0x28);
          *unaff_r8 = iVar1;
          unaff_r8[1] = piVar3[1];
          iVar8 = *(int *)((int)register0x00000054 + -0x24);
          unaff_r8[2] = iVar8;
          iVar7 = *(int *)((int)register0x00000054 + -0x38);
          unaff_r8[3] = *(int *)(iVar7 + 0x1c);
        }
        piVar3[1] = iVar1;
        *(undefined4 *)(iVar7 + 0x18) = DAT_0047c9b0;
        *(int *)(iVar7 + 0x1c) = iVar8;
        return;
      }
      *(char **)((int)register0x00000054 + -0x58) = pcVar6;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 4;
      FUN_0008f77c();
      *(int *)((int)register0x00000054 + -0x58) = DAT_0047c9a4;
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + -0x50);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x5c);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x47c99c;
    param_1 = FUN_0009bf00(param_1);
  } while( true );
}



/* k3c/internal/pkg/web.(*GCodeHelper)._handle_firmware_restart @ 0047c9c4 (size 180) */

void k3c_internal_pkg_web___GCodeHelper___handle_firmware_restart(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  local_c = DAT_0047ca84;
  local_8 = in_stack_00000008;
  local_4 = &local_c;
  k3c_internal_pkg_gcode___GCodeDispatch__Run_script();
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  (*(code *)*local_4)();
  return;
}



/* k3c/internal/pkg/web.(*GCodeHelper)._handle_firmware_restart.func1 @ 0047ca8c (size 692) */

void k3c_internal_pkg_web___GCodeHelper___handle_firmware_restart_func1(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 extraout_r2;
  int extraout_r2_00;
  char *pcVar6;
  undefined4 extraout_r3;
  int iVar7;
  int iVar8;
  int unaff_r7;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -0x5c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x38) = *(undefined4 *)(unaff_r7 + 4);
      *(undefined1 **)((int)register0x00000054 + -0x58) =
           (undefined1 *)((int)register0x00000054 + 4);
      FUN_00054ee0();
      iVar1 = *(int *)((int)register0x00000054 + -0x54);
      if (iVar1 == 0) {
        return;
      }
      puVar4 = *(undefined4 **)((int)register0x00000054 + -0x50);
      if (iVar1 != DAT_0047cd44) {
        pcVar6 = (char *)0x0;
        iVar8 = 0;
      }
      else {
        pcVar6 = (char *)*puVar4;
        iVar8 = puVar4[1];
      }
      *(undefined4 **)((int)register0x00000054 + -0x2c) = puVar4;
      *(int *)((int)register0x00000054 + -0x3c) = iVar1;
      *(char **)((int)register0x00000054 + -0x30) = pcVar6;
      *(int *)((int)register0x00000054 + -0x40) = iVar8;
      if ((((iVar1 != DAT_0047cd44) || (iVar8 != 4)) || (*pcVar6 != 'e')) ||
         (((pcVar6[1] != 'x' || (pcVar6[2] != 'i')) || (uVar10 = pcVar6[3] == 't', !(bool)uVar10))))
      {
        FUN_0042debc();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x58);
        uVar5 = *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar5;
        FUN_00099104();
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x48);
        github_com_petermattis_goid_getg(*(undefined4 *)((int)register0x00000054 + -0x4c));
        FUN_0009def4(0,(undefined1 *)((int)register0x00000054 + -0x20),
                     *(undefined4 *)(*(int *)((int)register0x00000054 + -0x58) + 0x54),
                     *(undefined4 *)(*(int *)((int)register0x00000054 + -0x58) + 0x58));
        *(int *)((int)register0x00000054 + -0x20) = DAT_0047cd44;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_0047cd48;
        *(undefined4 *)((int)register0x00000054 + -0x58) = extraout_r2;
        *(undefined4 *)((int)register0x00000054 + -0x54) = extraout_r3;
        FUN_0008f6c0();
        *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_0047cd4c;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        FUN_0008f77c();
        *(int *)((int)register0x00000054 + -8) = DAT_0047cd44;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined1 **)((int)register0x00000054 + -0x58) =
             (undefined1 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x54) = 4;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 4;
        k3c_internal_pkg_logger_Error();
        *(undefined1 *)(*(int *)((int)register0x00000054 + -0x38) + 0x20) = 1;
        FUN_000908bc();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x58);
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x58) = DAT_0047cd50;
        *(undefined4 *)((int)register0x00000054 + -0x54) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x50) = DAT_0047cd54;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 5;
        FUN_00093a08();
        iVar1 = DAT_0047cd44;
        piVar3 = *(int **)((int)register0x00000054 + -0x48);
        *piVar3 = DAT_0047cd44;
        if (*DAT_0047cd58 != 0) {
          piVar3 = (int *)FUN_0009db54(piVar3,iVar1,piVar3[1]);
          *unaff_r8 = extraout_r2_00;
        }
        piVar3[1] = DAT_0047cd5c;
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined4 *)((int)register0x00000054 + -0x58) = DAT_0047cd50;
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x50) = DAT_0047cd60;
        *(undefined4 *)((int)register0x00000054 + -0x4c) = 7;
        FUN_00093a08();
        piVar3 = *(int **)((int)register0x00000054 + -0x48);
        *piVar3 = DAT_0047cd44;
        if (*DAT_0047cd58 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -0x28);
          iVar8 = *(int *)((int)register0x00000054 + -0x24);
          iVar7 = *(int *)((int)register0x00000054 + -0x38);
        }
        else {
          piVar3 = (int *)FUN_0009db84();
          iVar1 = *(int *)((int)register0x00000054 + -0x28);
          *unaff_r8 = iVar1;
          unaff_r8[1] = piVar3[1];
          iVar8 = *(int *)((int)register0x00000054 + -0x24);
          unaff_r8[2] = iVar8;
          iVar7 = *(int *)((int)register0x00000054 + -0x38);
          unaff_r8[3] = *(int *)(iVar7 + 0x1c);
        }
        piVar3[1] = iVar1;
        *(undefined4 *)(iVar7 + 0x18) = DAT_0047cd50;
        *(int *)(iVar7 + 0x1c) = iVar8;
        return;
      }
      *(char **)((int)register0x00000054 + -0x58) = pcVar6;
      *(undefined4 *)((int)register0x00000054 + -0x54) = 4;
      FUN_0008f77c();
      *(int *)((int)register0x00000054 + -0x58) = DAT_0047cd44;
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + -0x50);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x5c);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x47cd3c;
    param_1 = FUN_0009bf00(param_1);
  } while( true );
}



/* k3c/internal/pkg/web.(*GCodeHelper)._output_callback @ 0047cd64 (size 520) */

/* WARNING: Removing unreachable block (ram,0x0047cdcc) */

void k3c_internal_pkg_web___GCodeHelper___output_callback(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  int iVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  bool bVar7;
  undefined8 uVar8;
  
code_r0x0047cd64:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar6 = (undefined1 *)((int)register0x00000054 + -0x58);
    *(undefined4 *)((int)register0x00000054 + -0x58) = unaff_lr;
    FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x38),
                 *(int *)((int)register0x00000054 + 4),
                 *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc));
    *(undefined4 *)((int)register0x00000054 + -0x54) = DAT_0047cf70;
    *(undefined4 *)((int)register0x00000054 + -0x50) = extraout_r3;
    *(undefined1 **)((int)register0x00000054 + -0x4c) =
         (undefined1 *)((int)register0x00000054 + -0x38);
    FUN_00091764();
    do {
      if (*(int **)((int)register0x00000054 + -0x38) == (int *)0x0) {
        return;
      }
      iVar1 = **(int **)((int)register0x00000054 + -0x38);
      iVar5 = (*(int **)((int)register0x00000054 + -0x34))[1];
      if (*(int *)(iVar1 + 0x18) == 0) {
        uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x54) = DAT_0047cf70;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar4;
        *(int *)((int)register0x00000054 + -0x4c) = iVar1;
        FUN_00092c70();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x48);
        *puVar2 = 0;
        if (*DAT_0047cf80 != 0) {
          puVar2 = (undefined4 *)FUN_0009db54(puVar2,0,puVar2[1]);
          *unaff_r8 = extraout_r2;
        }
        puVar2[1] = 0;
      }
      else {
        iVar3 = **(int **)((int)register0x00000054 + -0x34);
        bVar7 = iVar3 == DAT_0047cf74;
        if (!bVar7) goto LAB_0047cf48;
        *(int *)((int)register0x00000054 + -0x3c) = iVar1;
        *(int *)((int)register0x00000054 + -0x40) = iVar5;
        FUN_000908bc();
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x54);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        *(int *)((int)register0x00000054 + -0x54) = DAT_0047cf74;
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_0047cf78;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 8;
        FUN_00093a08();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x44);
        *puVar2 = DAT_0047cf7c;
        if (*DAT_0047cf80 == 0) {
          uVar4 = *(undefined4 *)((int)register0x00000054 + -8);
        }
        else {
          puVar2 = (undefined4 *)FUN_0009db64();
          uVar4 = *(undefined4 *)((int)register0x00000054 + -8);
          *unaff_r8 = uVar4;
          unaff_r8[1] = puVar2[1];
        }
        puVar2[1] = uVar4;
        *(int *)((int)register0x00000054 + -0x54) = DAT_0047cf74;
        *(undefined4 *)((int)register0x00000054 + -0x50) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_0047cf84;
        *(undefined4 *)((int)register0x00000054 + -0x48) = 6;
        FUN_00093a08();
        uVar8 = CONCAT44(DAT_0047cf74,*(int **)((int)register0x00000054 + -0x44));
        **(int **)((int)register0x00000054 + -0x44) = DAT_0047cf74;
        if (*DAT_0047cf80 == 0) {
          uVar4 = *(undefined4 *)((int)register0x00000054 + -4);
        }
        else {
          uVar8 = FUN_0009db64();
          uVar4 = *(undefined4 *)((int)register0x00000054 + -4);
          *unaff_r8 = uVar4;
          unaff_r8[1] = *(undefined4 *)((int)uVar8 + 4);
        }
        *(undefined4 *)((int)uVar8 + 4) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(int *)((int)register0x00000054 + -0x50) = (int)((ulonglong)uVar8 >> 0x20);
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        k3c_internal_pkg_web___ClientConnection__Send();
      }
      *(undefined1 **)((int)register0x00000054 + -0x54) =
           (undefined1 *)((int)register0x00000054 + -0x38);
      FUN_000919c8();
    } while( true );
  }
  goto LAB_0047cf60;
LAB_0047cf48:
  *(int *)((int)register0x00000054 + -0x54) = iVar3;
  *(int *)((int)register0x00000054 + -0x50) = DAT_0047cf74;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_0047cf88;
  param_1 = FUN_000209b4();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x58);
  if (bVar7) {
    register0x00000054 = (BADSPACEBASE *)puVar6;
  }
LAB_0047cf60:
  unaff_lr = 0x47cf68;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x0047cd64;
}



/* k3c/internal/pkg/web.(*GCodeHelper)._handle_subscribe_output @ 0047cf8c (size 500) */

void k3c_internal_pkg_web___GCodeHelper___handle_subscribe_output(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int extraout_r1;
  uint extraout_r2;
  int extraout_r3;
  int extraout_r3_00;
  uint uVar4;
  int iVar5;
  int *unaff_r8;
  int unaff_r10;
  undefined8 uVar6;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_000908bc(in_stack_00000008);
  puVar1 = DAT_0047d188;
  k3c_internal_pkg_web___WebRequest__get_dict();
  puVar2 = *(undefined4 **)(in_stack_00000004 + 0xc);
  FUN_00092c70();
  *puVar1 = DAT_0047d188;
  if (*DAT_0047d190 != 0) {
    puVar1 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = local_20;
    unaff_r8[1] = puVar1[1];
  }
  puVar1[1] = local_20;
  if (*(char *)(in_stack_00000004 + 8) == '\0') {
    iVar3 = *(int *)(in_stack_00000004 + 4);
    FUN_00022cf8();
    *puVar2 = DAT_0047d198;
    if (*DAT_0047d190 != 0) {
      puVar2 = (undefined4 *)FUN_0009db54();
      *unaff_r8 = in_stack_00000004;
    }
    puVar2[1] = in_stack_00000004;
    uVar4 = *(int *)(iVar3 + 0x20) + 1;
    iVar5 = *(int *)(iVar3 + 0x1c);
    if (*(uint *)(iVar3 + 0x24) < uVar4) {
      FUN_000987f4();
      *(undefined4 *)(iVar3 + 0x24) = local_18;
      if (*DAT_0047d190 != 0) {
        FUN_0009db64();
        *unaff_r8 = extraout_r1;
        unaff_r8[1] = *(int *)(extraout_r3 + 0x1c);
        local_20 = extraout_r1;
        local_1c = extraout_r2;
        iVar3 = extraout_r3;
      }
      *(int *)(iVar3 + 0x1c) = local_20;
      uVar4 = local_1c;
      iVar5 = local_20;
    }
    uVar6 = CONCAT44(in_stack_00000004,puVar2);
    *(uint *)(iVar3 + 0x20) = uVar4;
    iVar3 = uVar4 - 1;
    if (*DAT_0047d190 != 0) {
      uVar6 = FUN_0009db64();
      *unaff_r8 = (int)uVar6;
      unaff_r8[1] = *(int *)(iVar5 + extraout_r3_00 * 4);
      iVar3 = extraout_r3_00;
    }
    *(int *)(iVar5 + iVar3 * 4) = (int)uVar6;
    *(undefined1 *)((int)((ulonglong)uVar6 >> 0x20) + 8) = 1;
  }
  return;
}



/* k3c/internal/pkg/web.NewQueryStatusHelper @ 0047d1a0 (size 1228) */

void k3c_internal_pkg_web_NewQueryStatusHelper(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  bool bVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x40) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047d670;
      FUN_00022cf8();
      puVar4 = *(undefined4 **)((int)register0x00000054 + -0x38);
      if (*(int *)PTR_DAT_0047d674 == 0) {
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
      }
      else {
        FUN_0009db54();
        uVar1 = *(undefined4 *)((int)register0x00000054 + 4);
        *unaff_r8 = uVar1;
        puVar4 = extraout_r1;
      }
      *(undefined4 **)((int)register0x00000054 + -4) = puVar4;
      *puVar4 = uVar1;
      FUN_000908bc();
      uVar1 = *(undefined4 *)((int)register0x00000054 + -0x3c);
      if (*(int *)PTR_DAT_0047d674 == 0) {
        iVar2 = *(int *)((int)register0x00000054 + -4);
      }
      else {
        FUN_0009db84();
        *unaff_r8 = extraout_r1_00;
        iVar2 = *(int *)((int)register0x00000054 + -4);
        unaff_r8[1] = *(undefined4 *)(iVar2 + 4);
        unaff_r8[2] = *(undefined4 *)(iVar2 + 8);
        unaff_r8[3] = *(undefined4 *)(iVar2 + 0x14);
        uVar1 = extraout_r1_00;
      }
      *(undefined4 *)(iVar2 + 4) = uVar1;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined **)(iVar2 + 8) = PTR_DAT_0047d678;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      FUN_000908bc();
      uVar1 = *(undefined4 *)((int)register0x00000054 + -0x3c);
      if (*(int *)PTR_DAT_0047d674 == 0) {
        iVar2 = *(int *)((int)register0x00000054 + -4);
      }
      else {
        FUN_0009db64();
        *unaff_r8 = extraout_r1_01;
        iVar2 = *(int *)((int)register0x00000054 + -4);
        unaff_r8[1] = *(undefined4 *)(iVar2 + 0x18);
        uVar1 = extraout_r1_01;
      }
      *(undefined4 *)(iVar2 + 0x18) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x38) =
           PTR_s_webhooksresponsesignal__truncate_008216f7_0x1055_0047d67c;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 8;
      *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_0047d680;
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0047d678;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      puVar3 = *(undefined **)((int)register0x00000054 + -0x28);
      bVar6 = puVar3 == PTR_DAT_0047d684;
      if (bVar6) {
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        FUN_0009e2f0(puVar3,*(undefined4 *)((int)register0x00000054 + -0x24),
                     (undefined1 *)((int)register0x00000054 + -0x1c));
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047d688;
        FUN_00022cf8();
        puVar4 = *(undefined4 **)((int)register0x00000054 + -0x38);
        *puVar4 = PTR_k3c_internal_pkg_web___QueryStatusHelper___handle_list_fm_0047d68c;
        if (*(int *)PTR_DAT_0047d674 == 0) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
        }
        else {
          puVar4 = (undefined4 *)FUN_0009db54();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          *unaff_r8 = uVar1;
        }
        *(undefined4 **)((int)register0x00000054 + -8) = puVar4;
        puVar4[1] = uVar1;
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047d690;
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0047d694;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 0xc;
        FUN_00093560();
        puVar4 = (undefined4 *)(uint)*(byte *)((int)register0x00000054 + -0x28);
        if (puVar4 == (undefined4 *)0x0) {
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047d690;
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0047d694;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 0xc;
          FUN_00093a08();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0x2c);
          if (*(int *)PTR_DAT_0047d674 == 0) {
            uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
          }
          else {
            puVar4 = (undefined4 *)FUN_0009db64();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
            *unaff_r8 = uVar1;
            unaff_r8[1] = *puVar4;
          }
          *puVar4 = uVar1;
        }
        FUN_0009e2f0(puVar4,*(undefined4 *)((int)register0x00000054 + -0x20),
                     (undefined1 *)((int)register0x00000054 + -0x1c));
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047d688;
        FUN_00022cf8();
        puVar4 = *(undefined4 **)((int)register0x00000054 + -0x38);
        *puVar4 = PTR_k3c_internal_pkg_web___QueryStatusHelper___handle_query_fm_0047d698;
        if (*(int *)PTR_DAT_0047d674 == 0) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
        }
        else {
          puVar4 = (undefined4 *)FUN_0009db54();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          *unaff_r8 = uVar1;
        }
        *(undefined4 **)((int)register0x00000054 + -8) = puVar4;
        puVar4[1] = uVar1;
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047d690;
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined **)((int)register0x00000054 + -0x34) =
             PTR_s_objects_queryobjects_emptystop_s_008262d0_0xdd8_0047d69c;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 0xd;
        FUN_00093560();
        puVar4 = (undefined4 *)(uint)*(byte *)((int)register0x00000054 + -0x28);
        if (puVar4 == (undefined4 *)0x0) {
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047d690;
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined **)((int)register0x00000054 + -0x34) =
               PTR_s_objects_queryobjects_emptystop_s_008262d0_0xdd8_0047d69c;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 0xd;
          FUN_00093a08();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0x2c);
          if (*(int *)PTR_DAT_0047d674 == 0) {
            uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
          }
          else {
            puVar4 = (undefined4 *)FUN_0009db64();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
            *unaff_r8 = uVar1;
            unaff_r8[1] = *puVar4;
          }
          *puVar4 = uVar1;
        }
        FUN_0009e2f0(puVar4,*(undefined4 *)((int)register0x00000054 + -0x20),
                     (undefined1 *)((int)register0x00000054 + -0x1c));
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047d688;
        FUN_00022cf8();
        puVar4 = *(undefined4 **)((int)register0x00000054 + -0x38);
        *puVar4 = PTR_k3c_internal_pkg_web___QueryStatusHelper___handle_subscribe_fm_0047d6a0;
        if (*(int *)PTR_DAT_0047d674 == 0) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
        }
        else {
          puVar4 = (undefined4 *)FUN_0009db54();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          *unaff_r8 = uVar1;
        }
        *(undefined4 **)((int)register0x00000054 + -8) = puVar4;
        puVar4[1] = uVar1;
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047d690;
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0047d6a4;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 0x11;
        FUN_00093560();
        puVar4 = (undefined4 *)(uint)*(byte *)((int)register0x00000054 + -0x28);
        if (puVar4 == (undefined4 *)0x0) {
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047d690;
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0047d6a4;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 0x11;
          FUN_00093a08();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0x2c);
          if (*(int *)PTR_DAT_0047d674 == 0) {
            uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
          }
          else {
            puVar4 = (undefined4 *)FUN_0009db64();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
            *unaff_r8 = uVar1;
            unaff_r8[1] = *puVar4;
          }
          *puVar4 = uVar1;
        }
        FUN_0009e2f0(puVar4,*(undefined4 *)((int)register0x00000054 + -0x20),
                     (undefined1 *)((int)register0x00000054 + -0x1c));
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047d688;
        FUN_00022cf8();
        puVar4 = *(undefined4 **)((int)register0x00000054 + -0x38);
        *puVar4 = PTR_k3c_internal_pkg_web___QueryStatusHelper___handle_object_query_fm_0047d6a8;
        if (*(int *)PTR_DAT_0047d674 == 0) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
        }
        else {
          puVar4 = (undefined4 *)FUN_0009db54();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -4);
          *unaff_r8 = uVar1;
        }
        *(undefined4 **)((int)register0x00000054 + -8) = puVar4;
        puVar4[1] = uVar1;
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047d690;
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0047d6ac;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 0x14;
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x28) == '\0') {
          *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0047d690;
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0047d6ac;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 0x14;
          FUN_00093a08();
          puVar4 = *(undefined4 **)((int)register0x00000054 + -0x2c);
          if (*(int *)PTR_DAT_0047d674 == 0) {
            uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
          }
          else {
            puVar4 = (undefined4 *)FUN_0009db64();
            uVar1 = *(undefined4 *)((int)register0x00000054 + -8);
            *unaff_r8 = uVar1;
            unaff_r8[1] = *puVar4;
          }
          *puVar4 = uVar1;
        }
        *(undefined4 *)((int)register0x00000054 + 8) = *(undefined4 *)((int)register0x00000054 + -4)
        ;
                    /* WARNING: Could not recover jumptable at 0x0047d644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x40))();
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x3c) = puVar3;
      *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_0047d684;
      *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0047d6b0;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x40);
      if (bVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x47d668;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/web.(*QueryStatusHelper)._do_query @ 0047d6b4 (size 5880) */

void k3c_internal_pkg_web___QueryStatusHelper___do_query(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int extraout_r1;
  undefined4 uVar8;
  int extraout_r1_00;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int iVar12;
  int extraout_r2;
  undefined4 uVar13;
  uint uVar14;
  int extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r3;
  int extraout_r3_00;
  uint uVar15;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  int *piVar16;
  int extraout_r3_04;
  int *extraout_r3_05;
  uint extraout_r3_06;
  int *piVar17;
  int *piVar18;
  int *unaff_r8;
  int *piVar19;
  int *piVar20;
  int unaff_r10;
  int iVar21;
  int extraout_r12;
  undefined1 *puVar22;
  undefined4 unaff_lr;
  int iVar23;
  undefined1 uVar24;
  bool bVar25;
  undefined8 uVar26;
  
code_r0x0047d6b4:
  if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x1d4)) {
    puVar22 = (undefined1 *)((int)register0x00000054 + -0x254);
    *(undefined4 *)((int)register0x00000054 + -0x254) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -0x168) =
         *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x18);
    FUN_000908bc();
    iVar7 = *(int *)((int)register0x00000054 + -0x250);
    if (*DAT_0047defc == 0) {
      iVar12 = *(int *)((int)register0x00000054 + 4);
    }
    else {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      iVar12 = *(int *)((int)register0x00000054 + 4);
      unaff_r8[1] = *(int *)(iVar12 + 0x18);
      iVar7 = extraout_r1;
    }
    *(int *)((int)register0x00000054 + -0x118) = iVar7;
    *(int *)(iVar12 + 0x18) = iVar7;
    *(undefined4 *)((int)register0x00000054 + -0x174) = *(undefined4 *)(iVar12 + 8);
    *(undefined4 *)((int)register0x00000054 + -0x210) = *(undefined4 *)(iVar12 + 0xc);
    *(undefined4 *)((int)register0x00000054 + -0x20c) = *(undefined4 *)(iVar12 + 0x10);
    *(undefined4 *)(iVar12 + 0xc) = 0;
    *(undefined4 *)(iVar12 + 0x10) = 0;
    if (*DAT_0047defc != 0) {
      iVar7 = *(int *)(iVar12 + 8);
      FUN_0009db54();
      *unaff_r8 = iVar7;
      iVar12 = extraout_r2;
    }
    *(undefined4 *)(iVar12 + 8) = DAT_0047df00;
    FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x30));
    *(undefined4 *)((int)register0x00000054 + -0x250) = DAT_0047df04;
    *(undefined4 *)((int)register0x00000054 + -0x24c) = extraout_r3;
    *(undefined1 **)((int)register0x00000054 + -0x248) =
         (undefined1 *)((int)register0x00000054 + -0x30);
    FUN_00091764();
    iVar7 = *(int *)((int)register0x00000054 + -0x174);
    uVar8 = *(undefined4 *)((int)register0x00000054 + -0x20c);
    iVar12 = *(int *)((int)register0x00000054 + -0x210);
    while( true ) {
      *(int *)((int)register0x00000054 + -0x210) = iVar12;
      *(int *)((int)register0x00000054 + -0x174) = iVar7;
      if (*(int *)((int)register0x00000054 + -0x30) == 0) break;
      *(undefined4 *)((int)register0x00000054 + -0x20c) = uVar8;
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x2c);
      uVar13 = puVar1[1];
      uVar8 = puVar1[2];
      *(undefined4 *)((int)register0x00000054 + -0x250) = *puVar1;
      *(undefined4 *)((int)register0x00000054 + -0x24c) = uVar13;
      *(undefined4 *)((int)register0x00000054 + -0x248) = uVar8;
      FUN_0008f820();
      uVar2 = *(int *)((int)register0x00000054 + -0x210) + 1;
      iVar7 = *(int *)((int)register0x00000054 + -0x244);
      uVar14 = *(uint *)((int)register0x00000054 + -0x20c);
      if (uVar14 < uVar2) {
        *(int *)((int)register0x00000054 + -0x11c) = iVar7;
        *(undefined4 *)((int)register0x00000054 + -0x250) =
             *(undefined4 *)((int)register0x00000054 + -0x174);
        *(uint *)((int)register0x00000054 + -0x24c) = uVar2;
        *(uint *)((int)register0x00000054 + -0x248) = uVar14;
        *(undefined4 *)((int)register0x00000054 + -0x244) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x240) = DAT_0047df08;
        FUN_000987f4();
        iVar12 = *(int *)((int)register0x00000054 + -0x23c);
        uVar2 = *(uint *)((int)register0x00000054 + -0x238);
        uVar14 = *(uint *)((int)register0x00000054 + -0x234);
        iVar7 = *(int *)((int)register0x00000054 + -0x11c);
      }
      else {
        iVar12 = *(int *)((int)register0x00000054 + -0x174);
      }
      *(int *)((int)register0x00000054 + -0x174) = iVar12;
      *(uint *)((int)register0x00000054 + -0x210) = uVar2;
      *(uint *)((int)register0x00000054 + -0x20c) = uVar14;
      *(uint *)(iVar12 + (uVar2 - 1) * 8) = DAT_0047df0c;
      iVar12 = iVar12 + (uVar2 - 1) * 8;
      if (*DAT_0047defc != 0) {
        FUN_0009db64();
        *unaff_r8 = extraout_r1_00;
        unaff_r8[1] = *(int *)(iVar12 + 4);
        iVar7 = extraout_r1_00;
      }
      *(int *)(iVar12 + 4) = iVar7;
      *(undefined1 **)((int)register0x00000054 + -0x250) =
           (undefined1 *)((int)register0x00000054 + -0x30);
      FUN_000919c8();
      iVar7 = *(int *)((int)register0x00000054 + -0x174);
      uVar8 = *(undefined4 *)((int)register0x00000054 + -0x20c);
      iVar12 = *(int *)((int)register0x00000054 + -0x210);
    }
    iVar9 = 0;
    do {
      piVar20 = DAT_0047df14;
      piVar10 = DAT_0047df10;
      if (iVar12 <= iVar9) {
        if (*(int *)((int)register0x00000054 + -0x118) != 0) {
          *(double *)((int)register0x00000054 + 0x10) =
               *(double *)((int)register0x00000054 + 8) + 0.25;
          return;
        }
        iVar7 = **(int **)((int)register0x00000054 + 4);
        iVar12 = (*(int **)((int)register0x00000054 + 4))[5];
        *(int *)((int)register0x00000054 + -0x1a4) = iVar12;
        iVar7 = *(int *)(*(int *)(iVar7 + 0xc) + 0x2c);
        *(int *)((int)register0x00000054 + -400) = iVar7;
        *(undefined8 *)(iVar12 + 4) = *DAT_0047df2c;
        uVar8 = *(undefined4 *)(iVar7 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x22c) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0x250) = DAT_0047df30;
        *(undefined4 *)((int)register0x00000054 + -0x24c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x248) = uVar8;
        FUN_000986b8();
        piVar10 = *(int **)((int)register0x00000054 + -400);
        uVar26 = CONCAT44(piVar10,*(undefined4 *)((int)register0x00000054 + -0x244));
        iVar7 = *piVar10;
        *(int *)((int)register0x00000054 + -0x120) = iVar7;
        iVar12 = piVar10[1];
        *(int *)((int)register0x00000054 + -0x1d0) = iVar12;
        piVar10 = *(int **)((int)register0x00000054 + -0x1a4);
        uVar2 = *(uint *)((int)register0x00000054 + -0x22c);
        iVar9 = 0;
        uVar14 = 0;
        while( true ) {
          iVar21 = (int)((ulonglong)uVar26 >> 0x20);
          if (iVar12 <= iVar9) break;
          unaff_r8 = *(int **)(iVar7 + iVar9 * 4);
          if (unaff_r8 != piVar10) {
            uVar14 = uVar14 + 1;
            if (uVar2 < uVar14) {
              *(int *)((int)register0x00000054 + -0x1d4) = iVar9;
              *(int **)((int)register0x00000054 + -0x19c) = unaff_r8;
              *(int *)((int)register0x00000054 + -0x250) = (int)uVar26;
              *(uint *)((int)register0x00000054 + -0x24c) = uVar14;
              *(uint *)((int)register0x00000054 + -0x248) = uVar2;
              *(undefined4 *)((int)register0x00000054 + -0x244) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x240) = DAT_0047df30;
              FUN_000987f4();
              uVar14 = *(uint *)((int)register0x00000054 + -0x238);
              uVar2 = *(uint *)((int)register0x00000054 + -0x234);
              uVar26 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -400),
                                *(undefined4 *)((int)register0x00000054 + -0x23c));
              iVar7 = *(int *)((int)register0x00000054 + -0x120);
              iVar12 = *(int *)((int)register0x00000054 + -0x1d0);
              piVar10 = *(int **)((int)register0x00000054 + -0x1a4);
              iVar9 = *(int *)((int)register0x00000054 + -0x1d4);
              unaff_r8 = *(int **)((int)register0x00000054 + -0x19c);
            }
            iVar21 = uVar14 - 1;
            if (*DAT_0047defc != 0) {
              *(int *)((int)register0x00000054 + -0x1d4) = iVar21;
              uVar26 = FUN_0009db64();
              *unaff_r8 = (int)unaff_r8;
              iVar21 = *(int *)((int)register0x00000054 + -0x1d4);
              unaff_r8[1] = *(int *)((int)uVar26 + iVar21 * 4);
              iVar7 = extraout_r2_00;
              iVar12 = extraout_r3_00;
            }
            *(int **)((int)uVar26 + iVar21 * 4) = unaff_r8;
          }
          iVar9 = iVar9 + 1;
        }
        *(uint *)(iVar21 + 4) = uVar14;
        *(uint *)(iVar21 + 8) = uVar2;
        if (*DAT_0047defc == 0) {
          iVar7 = *(int *)((int)register0x00000054 + 4);
        }
        else {
          uVar26 = FUN_0009db74();
          *unaff_r8 = (int)uVar26;
          unaff_r8[1] = *(int *)((ulonglong)uVar26 >> 0x20);
          iVar7 = *(int *)((int)register0x00000054 + 4);
          unaff_r8[2] = *(int *)(iVar7 + 0x14);
        }
        *(undefined4 *)((ulonglong)uVar26 >> 0x20) = (int)uVar26;
        *(undefined4 *)(iVar7 + 0x14) = 0;
        *(undefined8 *)((int)register0x00000054 + 0x10) = *DAT_0047df2c;
        return;
      }
      uVar2 = *(uint *)(iVar7 + iVar9 * 8);
      uVar24 = uVar2 == DAT_0047df0c;
      uVar14 = DAT_0047df0c;
      if (!(bool)uVar24) goto LAB_0047ede8;
      puVar1 = *(undefined4 **)(iVar7 + iVar9 * 8 + 4);
      uVar2 = puVar1[1];
      uVar24 = 1;
      if (uVar2 == 0) goto LAB_0047eddc;
      puVar1 = (undefined4 *)*puVar1;
      piVar18 = (int *)*puVar1;
      if (piVar18 == (int *)0x0) {
        piVar18 = (int *)0x0;
      }
      else {
        uVar24 = piVar18 == DAT_0047df10;
        if (!(bool)uVar24) goto LAB_0047edc8;
        piVar18 = (int *)puVar1[1];
      }
      uVar24 = uVar2 == 1;
      if (uVar2 < 2) goto LAB_0047edbc;
      unaff_r8 = (int *)puVar1[2];
      if (unaff_r8 == (int *)0x0) {
        unaff_r8 = (int *)0x0;
      }
      else {
        uVar24 = unaff_r8 == DAT_0047df14;
        if (!(bool)uVar24) goto LAB_0047eda8;
        unaff_r8 = (int *)puVar1[3];
      }
      uVar24 = uVar2 == 2;
      if (uVar2 < 3) goto LAB_0047ed9c;
      iVar7 = puVar1[4];
      if (iVar7 == 0) {
        uVar8 = 0;
      }
      else {
        uVar24 = iVar7 == DAT_0047df18;
        iVar12 = DAT_0047df18;
        if (!(bool)uVar24) goto LAB_0047ed88;
        uVar8 = puVar1[5];
      }
      uVar24 = uVar2 == 3;
      if (uVar2 < 4) goto LAB_0047ed7c;
      piVar17 = (int *)puVar1[6];
      if (piVar17 == (int *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar24 = piVar17 == DAT_0047df14;
        if (!(bool)uVar24) goto LAB_0047ed68;
        uVar13 = puVar1[7];
      }
      *(int *)((int)register0x00000054 + -0x1d0) = iVar9;
      *(undefined4 *)((int)register0x00000054 + -0x194) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0x1a0) = uVar13;
      *(int **)((int)register0x00000054 + -0x198) = unaff_r8;
      *(int **)((int)register0x00000054 + -0x134) = piVar18;
      if ((piVar18 == (int *)0x0) || (piVar18[6] != 0)) {
        FUN_000908bc();
        *(undefined4 *)((int)register0x00000054 + -0x138) =
             *(undefined4 *)((int)register0x00000054 + -0x250);
        FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x30));
        *(int **)((int)register0x00000054 + -0x250) = DAT_0047df14;
        *(undefined4 *)((int)register0x00000054 + -0x24c) =
             *(undefined4 *)((int)register0x00000054 + -0x198);
        *(undefined1 **)((int)register0x00000054 + -0x248) =
             (undefined1 *)((int)register0x00000054 + -0x30);
        FUN_00091764();
        while (puVar1 = *(undefined4 **)((int)register0x00000054 + -0x30),
              puVar1 != (undefined4 *)0x0) {
          uVar8 = *puVar1;
          *(undefined4 *)((int)register0x00000054 + -0x17c) = uVar8;
          uVar13 = puVar1[1];
          *(undefined4 *)((int)register0x00000054 + -0x218) = uVar13;
          *(undefined4 *)((int)register0x00000054 + -0x220) =
               **(undefined4 **)((int)register0x00000054 + -0x2c);
          *(undefined4 *)((int)register0x00000054 + -0x184) =
               (*(undefined4 **)((int)register0x00000054 + -0x2c))[1];
          *(int **)((int)register0x00000054 + -0x250) = DAT_0047df14;
          uVar14 = *(uint *)((int)register0x00000054 + -0x118);
          *(uint *)((int)register0x00000054 + -0x24c) = uVar14;
          *(undefined4 *)((int)register0x00000054 + -0x248) = uVar8;
          *(undefined4 *)((int)register0x00000054 + -0x244) = uVar13;
          FUN_00025f60();
          piVar17 = (int *)**(undefined4 **)((int)register0x00000054 + -0x240);
          iVar7 = (*(undefined4 **)((int)register0x00000054 + -0x240))[1];
          if (piVar17 == (int *)0x0) {
            *(int *)((int)register0x00000054 + -0x188) = iVar7;
            *(undefined4 *)((int)register0x00000054 + -0x224) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x250) =
                 **(undefined4 **)((int)register0x00000054 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x24c) =
                 *(undefined4 *)((int)register0x00000054 + -0x17c);
            *(undefined4 *)((int)register0x00000054 + -0x248) =
                 *(undefined4 *)((int)register0x00000054 + -0x218);
            *(undefined4 *)((int)register0x00000054 + -0x244) = 0;
            piVar17 = (int *)0x0;
            *(undefined4 *)((int)register0x00000054 + -0x240) = 0;
            k3c_internal_pkg_printer___Printer__Lookup_object();
            if (*(int *)((int)register0x00000054 + -0x23c) == 0) {
              FUN_000908bc();
              *(undefined4 *)((int)register0x00000054 + -0x128) =
                   *(undefined4 *)((int)register0x00000054 + -0x250);
              *(int **)((int)register0x00000054 + -0x250) = DAT_0047e7e0;
              *(undefined4 *)((int)register0x00000054 + -0x24c) =
                   *(undefined4 *)((int)register0x00000054 + -0x118);
              *(undefined4 *)((int)register0x00000054 + -0x248) =
                   *(undefined4 *)((int)register0x00000054 + -0x17c);
              *(undefined4 *)((int)register0x00000054 + -0x244) =
                   *(undefined4 *)((int)register0x00000054 + -0x218);
              FUN_00093a08();
              puVar1 = *(undefined4 **)((int)register0x00000054 + -0x240);
              *puVar1 = DAT_0047e7e0;
              if (*DAT_0047e7e4 == 0) {
                iVar7 = *(int *)((int)register0x00000054 + -0x128);
              }
              else {
                puVar1 = (undefined4 *)FUN_0009db64();
                iVar7 = *(int *)((int)register0x00000054 + -0x128);
                *unaff_r8 = iVar7;
                unaff_r8[1] = puVar1[1];
              }
              puVar1[1] = iVar7;
              piVar17 = DAT_0047e7e0;
            }
            else {
              *(int *)((int)register0x00000054 + -0x250) =
                   *(int *)((int)register0x00000054 + -0x23c);
              *(undefined4 *)((int)register0x00000054 + -0x24c) =
                   *(undefined4 *)((int)register0x00000054 + -0x238);
              *(undefined4 *)((int)register0x00000054 + -0x248) = DAT_0047df34;
              *(undefined4 *)((int)register0x00000054 + -0x244) = 10;
              k3c_common_utils_reflects_GetMethod();
              iVar12 = *(int *)((int)register0x00000054 + -0x240);
              uVar26 = CONCAT44(DAT_0047df38,iVar12);
              iVar7 = 0;
              if (iVar12 == 0) {
LAB_0047e03c:
                FUN_000908bc(iVar7);
                *(undefined4 *)((int)register0x00000054 + -0x128) =
                     *(undefined4 *)((int)register0x00000054 + -0x250);
                *(int **)((int)register0x00000054 + -0x250) = DAT_0047e7e0;
                *(undefined4 *)((int)register0x00000054 + -0x24c) =
                     *(undefined4 *)((int)register0x00000054 + -0x118);
                *(undefined4 *)((int)register0x00000054 + -0x248) =
                     *(undefined4 *)((int)register0x00000054 + -0x17c);
                *(undefined4 *)((int)register0x00000054 + -0x244) =
                     *(undefined4 *)((int)register0x00000054 + -0x218);
                FUN_00093a08();
                puVar1 = *(undefined4 **)((int)register0x00000054 + -0x240);
                *puVar1 = DAT_0047e7e0;
                if (*DAT_0047e7e4 == 0) {
                  iVar7 = *(int *)((int)register0x00000054 + -0x128);
                }
                else {
                  puVar1 = (undefined4 *)FUN_0009db64();
                  iVar7 = *(int *)((int)register0x00000054 + -0x128);
                  *unaff_r8 = iVar7;
                  unaff_r8[1] = puVar1[1];
                }
                puVar1[1] = iVar7;
                piVar17 = DAT_0047e7e0;
              }
              else {
                uVar24 = iVar12 == DAT_0047df38;
                if (!(bool)uVar24) {
LAB_0047ed54:
                  *(undefined8 *)((int)register0x00000054 + -0x250) = uVar26;
                  *(undefined4 *)((int)register0x00000054 + -0x248) = DAT_0047ee30;
                  FUN_000209b4();
                  goto LAB_0047ed68;
                }
                iVar7 = *(int *)((int)register0x00000054 + -0x23c);
                *(int *)((int)register0x00000054 + -0x170) = iVar7;
                uVar2 = *(uint *)(iVar7 + 8);
                uVar15 = uVar2 & 0x1f;
                *(uint *)((int)register0x00000054 + -0x1d8) = uVar15;
                piVar17 = *(int **)(iVar7 + 4);
                if (uVar15 < 0x15) {
                  uVar14 = uVar15 - 0x12;
                  if (uVar14 < 2) goto LAB_0047de84;
                  uVar24 = uVar15 == 0x14;
                  if (!(bool)uVar24) {
LAB_0047ed1c:
                    *(undefined4 *)((int)register0x00000054 + -0x250) = DAT_0047ee34;
                    FUN_00022cf8();
                    puVar1 = *(undefined4 **)((int)register0x00000054 + -0x24c);
                    puVar1[1] = 0x13;
                    *puVar1 = DAT_0047ee38;
                    puVar1[2] = *(undefined4 *)((int)register0x00000054 + -0x1d8);
                    *(undefined4 *)((int)register0x00000054 + -0x250) = DAT_0047ee3c;
                    *(undefined4 **)((int)register0x00000054 + -0x24c) = puVar1;
                    uVar26 = FUN_00095b00();
                    goto LAB_0047ed54;
                  }
LAB_0047de68:
                  bVar25 = *piVar17 != 0;
LAB_0047dea4:
                  if (!bVar25) goto LAB_0047e03c;
                }
                else {
                  if (0x16 < uVar15) {
                    if (uVar15 == 0x17) goto LAB_0047de68;
                    uVar24 = uVar15 == 0x1a;
                    if (!(bool)uVar24) goto LAB_0047ed1c;
                  }
LAB_0047de84:
                  if ((uVar2 & 0x200) == 0) {
                    if ((uVar2 & 0x80) != 0) {
                      piVar17 = (int *)*piVar17;
                    }
                    bVar25 = false;
                    if (piVar17 != (int *)0x0) {
                      bVar25 = true;
                    }
                    goto LAB_0047dea4;
                  }
                }
                *(undefined8 *)((int)register0x00000054 + -0x1b4) =
                     *(undefined8 *)((int)register0x00000054 + 8);
                *(undefined4 *)((int)register0x00000054 + -0x250) =
                     *(undefined4 *)((int)register0x00000054 + -0x1b4);
                *(undefined4 *)((int)register0x00000054 + -0x24c) =
                     *(undefined4 *)((int)register0x00000054 + -0x1b0);
                FUN_0008f6c0();
                uVar8 = *(undefined4 *)((int)register0x00000054 + -0x248);
                *(undefined4 *)((int)register0x00000054 + -0x148) = DAT_0047df20;
                *(undefined4 *)((int)register0x00000054 + -0x144) = uVar8;
                iVar7 = *(int *)((int)register0x00000054 + -0x148);
                if (iVar7 == 0) {
                  uVar2 = 0;
                  iVar7 = 0;
                  uVar8 = 0;
                }
                else {
                  uVar2 = *(byte *)(iVar7 + 0xf) & 0x1f;
                  if ((*(byte *)(iVar7 + 0xf) & 0x20) == 0) {
                    uVar2 = uVar2 | 0x80;
                  }
                }
                *(uint *)((int)register0x00000054 + -100) = uVar2;
                *(int *)((int)register0x00000054 + -0x6c) = iVar7;
                *(undefined4 *)((int)register0x00000054 + -0x68) = uVar8;
                puVar1 = *(undefined4 **)((int)register0x00000054 + -0x170);
                uVar13 = puVar1[1];
                uVar8 = puVar1[2];
                *(undefined4 *)((int)register0x00000054 + -0x250) = *puVar1;
                *(undefined4 *)((int)register0x00000054 + -0x24c) = uVar13;
                *(undefined4 *)((int)register0x00000054 + -0x248) = uVar8;
                *(undefined1 **)((int)register0x00000054 + -0x244) =
                     (undefined1 *)((int)register0x00000054 + -0x6c);
                *(undefined4 *)((int)register0x00000054 + -0x240) = 1;
                *(undefined4 *)((int)register0x00000054 + -0x23c) = 1;
                FUN_000d659c();
                if (*(int *)((int)register0x00000054 + -0x234) == 0) {
                  iVar7 = *(int *)((int)register0x00000054 + -0x188);
                  piVar17 = *(int **)((int)register0x00000054 + -0x224);
                }
                else {
                  puVar1 = *(undefined4 **)((int)register0x00000054 + -0x238);
                  uVar13 = puVar1[1];
                  uVar8 = puVar1[2];
                  *(undefined4 *)((int)register0x00000054 + -0x250) = *puVar1;
                  *(undefined4 *)((int)register0x00000054 + -0x24c) = uVar13;
                  *(undefined4 *)((int)register0x00000054 + -0x248) = uVar8;
                  *(undefined1 *)((int)register0x00000054 + -0x244) = 1;
                  FUN_000e70e8();
                  *(undefined4 *)((int)register0x00000054 + -0x1dc) =
                       *(undefined4 *)((int)register0x00000054 + -0x240);
                  *(undefined4 *)((int)register0x00000054 + -0x124) =
                       *(undefined4 *)((int)register0x00000054 + -0x23c);
                  *(int **)((int)register0x00000054 + -0x250) = DAT_0047e7e0;
                  *(undefined4 *)((int)register0x00000054 + -0x24c) =
                       *(undefined4 *)((int)register0x00000054 + -0x118);
                  *(undefined4 *)((int)register0x00000054 + -0x248) =
                       *(undefined4 *)((int)register0x00000054 + -0x17c);
                  *(undefined4 *)((int)register0x00000054 + -0x244) =
                       *(undefined4 *)((int)register0x00000054 + -0x218);
                  FUN_00093a08();
                  uVar26 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x1dc),
                                    *(undefined4 **)((int)register0x00000054 + -0x240));
                  **(undefined4 **)((int)register0x00000054 + -0x240) =
                       *(undefined4 *)((int)register0x00000054 + -0x1dc);
                  if (*DAT_0047e7e4 == 0) {
                    iVar7 = *(int *)((int)register0x00000054 + -0x124);
                  }
                  else {
                    uVar26 = FUN_0009db64();
                    iVar7 = *(int *)((int)register0x00000054 + -0x124);
                    *unaff_r8 = iVar7;
                    unaff_r8[1] = *(int *)((int)uVar26 + 4);
                  }
                  *(int *)((int)uVar26 + 4) = iVar7;
                  piVar17 = (int *)((ulonglong)uVar26 >> 0x20);
                }
              }
            }
          }
          piVar10 = DAT_0047e7ec;
          *(int *)((int)register0x00000054 + -0x124) = iVar7;
          *(int **)((int)register0x00000054 + -0x1dc) = piVar17;
          if (*(int **)((int)register0x00000054 + -0x220) == (int *)0x0) {
            if (piVar17 == DAT_0047e7e8) {
              FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x60),DAT_0047e7e8,iVar7);
              *(undefined4 *)((int)register0x00000054 + -0x250) = extraout_r2_02;
              *(undefined4 *)((int)register0x00000054 + -0x24c) = extraout_r3_03;
              *(undefined1 **)((int)register0x00000054 + -0x248) =
                   (undefined1 *)((int)register0x00000054 + -0x60);
              FUN_00091764();
              uVar2 = 0;
              iVar7 = 0;
              iVar12 = 0;
              do {
                piVar10 = *(int **)((int)register0x00000054 + -0x60);
                if (piVar10 == (int *)0x0) goto LAB_0047e248;
                uVar14 = iVar12 + 1;
                iVar9 = *piVar10;
                iVar12 = piVar10[1];
                if (uVar2 < uVar14) {
                  *(int *)((int)register0x00000054 + -0x1f0) = iVar12;
                  *(int *)((int)register0x00000054 + -0x154) = iVar9;
                  *(int *)((int)register0x00000054 + -0x250) = iVar7;
                  *(uint *)((int)register0x00000054 + -0x24c) = uVar14;
                  *(uint *)((int)register0x00000054 + -0x248) = uVar2;
                  *(undefined4 *)((int)register0x00000054 + -0x244) = 1;
                  *(undefined4 *)((int)register0x00000054 + -0x240) = DAT_0047e7f8;
                  FUN_000987f4();
                  iVar7 = *(int *)((int)register0x00000054 + -0x23c);
                  uVar14 = *(uint *)((int)register0x00000054 + -0x238);
                  uVar2 = *(uint *)((int)register0x00000054 + -0x234);
                  iVar12 = *(int *)((int)register0x00000054 + -0x1f0);
                  iVar9 = *(int *)((int)register0x00000054 + -0x154);
                }
                *(uint *)((int)register0x00000054 + -0x204) = uVar14;
                *(uint *)((int)register0x00000054 + -0x200) = uVar2;
                iVar21 = uVar14 - 1;
                *(int *)(iVar7 + iVar21 * 8 + 4) = iVar12;
                if (*DAT_0047e7e4 != 0) {
                  FUN_0009db64();
                  *unaff_r8 = iVar9;
                  unaff_r8[1] = *(int *)(extraout_r1_01 + iVar21 * 8);
                  iVar7 = extraout_r1_01;
                }
                *(int *)((int)register0x00000054 + -0x164) = iVar7;
                *(int *)(iVar7 + iVar21 * 8) = iVar9;
                *(undefined1 **)((int)register0x00000054 + -0x250) =
                     (undefined1 *)((int)register0x00000054 + -0x60);
                FUN_000919c8();
                uVar2 = *(uint *)((int)register0x00000054 + -0x200);
                iVar7 = *(int *)((int)register0x00000054 + -0x164);
                iVar12 = *(int *)((int)register0x00000054 + -0x204);
              } while( true );
            }
            if (piVar17 == DAT_0047e7ec) {
              FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x60),DAT_0047e7e8,iVar7);
              *(int **)((int)register0x00000054 + -0x250) = piVar10;
              *(undefined4 *)((int)register0x00000054 + -0x24c) = extraout_r3_02;
              *(undefined1 **)((int)register0x00000054 + -0x248) =
                   (undefined1 *)((int)register0x00000054 + -0x60);
              FUN_00091764();
              uVar2 = 0;
              iVar7 = 0;
              iVar12 = 0;
              piVar17 = unaff_r8;
              piVar19 = piVar20;
              goto LAB_0047ebac;
            }
            if (piVar17 != DAT_0047e7e0) {
              uVar2 = 0;
              iVar12 = 0;
              iVar7 = 0;
              goto LAB_0047e248;
            }
            FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x60),iVar7);
            *(undefined4 *)((int)register0x00000054 + -0x250) = extraout_r3_01;
            *(undefined4 *)((int)register0x00000054 + -0x24c) = extraout_r2_01;
            *(undefined1 **)((int)register0x00000054 + -0x248) =
                 (undefined1 *)((int)register0x00000054 + -0x60);
            FUN_00091764();
            uVar2 = 0;
            iVar7 = 0;
            iVar12 = 0;
            do {
              piVar10 = *(int **)((int)register0x00000054 + -0x60);
              if (piVar10 == (int *)0x0) goto LAB_0047e248;
              uVar14 = iVar12 + 1;
              iVar9 = *piVar10;
              iVar12 = piVar10[1];
              if (uVar2 < uVar14) {
                *(int *)((int)register0x00000054 + -0x1f8) = iVar12;
                *(int *)((int)register0x00000054 + -0x15c) = iVar9;
                *(int *)((int)register0x00000054 + -0x250) = iVar7;
                *(uint *)((int)register0x00000054 + -0x24c) = uVar14;
                *(uint *)((int)register0x00000054 + -0x248) = uVar2;
                *(undefined4 *)((int)register0x00000054 + -0x244) = 1;
                *(int *)((int)register0x00000054 + -0x240) = DAT_0047ee1c;
                FUN_000987f4();
                iVar7 = *(int *)((int)register0x00000054 + -0x23c);
                uVar14 = *(uint *)((int)register0x00000054 + -0x238);
                uVar2 = *(uint *)((int)register0x00000054 + -0x234);
                iVar12 = *(int *)((int)register0x00000054 + -0x1f8);
                iVar9 = *(int *)((int)register0x00000054 + -0x15c);
              }
              *(uint *)((int)register0x00000054 + -0x204) = uVar14;
              *(uint *)((int)register0x00000054 + -0x200) = uVar2;
              iVar21 = uVar14 - 1;
              *(int *)(iVar7 + iVar21 * 8 + 4) = iVar12;
              if (*DAT_0047ee24 != 0) {
                FUN_0009db64();
                *unaff_r8 = iVar9;
                unaff_r8[1] = *(int *)(extraout_r1_05 + iVar21 * 8);
                iVar7 = extraout_r1_05;
              }
              *(int *)((int)register0x00000054 + -0x164) = iVar7;
              *(int *)(iVar7 + iVar21 * 8) = iVar9;
              *(undefined1 **)((int)register0x00000054 + -0x250) =
                   (undefined1 *)((int)register0x00000054 + -0x60);
              FUN_000919c8();
              uVar2 = *(uint *)((int)register0x00000054 + -0x200);
              iVar7 = *(int *)((int)register0x00000054 + -0x164);
              iVar12 = *(int *)((int)register0x00000054 + -0x204);
            } while( true );
          }
          iVar7 = *(int *)((int)register0x00000054 + -0x184);
          piVar10 = *(int **)((int)register0x00000054 + -0x220);
          while( true ) {
            *(int *)((int)register0x00000054 + -0x184) = iVar7;
            *(int **)((int)register0x00000054 + -0x220) = piVar10;
            *(int **)((int)register0x00000054 + -0x250) = DAT_0047e7e0;
            *(undefined4 *)((int)register0x00000054 + -0x24c) =
                 *(undefined4 *)((int)register0x00000054 + -0x168);
            *(undefined4 *)((int)register0x00000054 + -0x248) =
                 *(undefined4 *)((int)register0x00000054 + -0x17c);
            *(undefined4 *)((int)register0x00000054 + -0x244) =
                 *(undefined4 *)((int)register0x00000054 + -0x218);
            FUN_00025f60();
            piVar10 = (int *)**(undefined4 **)((int)register0x00000054 + -0x240);
            puVar4 = (undefined1 *)(*(undefined4 **)((int)register0x00000054 + -0x240))[1];
            if (piVar10 == (int *)0x0) {
              uVar8 = FUN_0009def8(0,(undefined1 *)((int)register0x00000054 + -0x88));
              FUN_0009de88(uVar8,(undefined1 *)((int)register0x00000054 + -0x114));
              *(undefined1 **)((int)register0x00000054 + -0x7c) =
                   (undefined1 *)((int)register0x00000054 + -0x114);
              FUN_0006aa3c();
              *(undefined4 *)((int)register0x00000054 + -0x80) =
                   *(undefined4 *)((int)register0x00000054 + -0x250);
              puVar4 = (undefined1 *)((int)register0x00000054 + -0x88);
              piVar10 = DAT_0047e7e0;
            }
            *(undefined1 **)((int)register0x00000054 + -0x16c) = puVar4;
            *(int **)((int)register0x00000054 + -0x208) = piVar10;
            FUN_000908bc();
            piVar5 = *(int **)((int)register0x00000054 + -0x250);
            piVar11 = *(int **)((int)register0x00000054 + -0x220);
            if (piVar11 != DAT_0047e7f4) {
              piVar16 = *(int **)((int)register0x00000054 + -0x184);
              iVar12 = 0;
              iVar9 = 0;
            }
            else {
              piVar16 = *(int **)((int)register0x00000054 + -0x184);
              iVar12 = *piVar16;
              iVar9 = piVar16[1];
            }
            *(int **)((int)register0x00000054 + -0x13c) = piVar5;
            if (piVar11 != DAT_0047e7f4) break;
            *(int *)((int)register0x00000054 + -0x1e8) = iVar9;
            *(int *)((int)register0x00000054 + -0x14c) = iVar12;
            iVar7 = 0;
            piVar18 = (int *)0x0;
            piVar17 = (int *)((int)register0x00000054 + -0x1b4);
            piVar19 = (int *)0x0;
            while( true ) {
              unaff_r8 = piVar17;
              piVar20 = piVar19;
              if (iVar9 <= iVar7) goto LAB_0047e3b4;
              iVar21 = *(int *)(iVar12 + iVar7 * 8);
              if (iVar21 != DAT_0047ee1c) break;
              piVar10 = *(int **)(iVar12 + iVar7 * 8 + 4);
              piVar19 = (int *)((int)piVar19 + 1);
              iVar23 = *piVar10;
              *(int *)((int)register0x00000054 + -0x130) = iVar23;
              iVar21 = piVar10[1];
              if (piVar18 < piVar19) {
                *(int *)((int)register0x00000054 + -0x1d4) = iVar7;
                *(int *)((int)register0x00000054 + -0x1e0) = iVar21;
                *(int **)((int)register0x00000054 + -0x250) = piVar17;
                *(int **)((int)register0x00000054 + -0x24c) = piVar19;
                *(int **)((int)register0x00000054 + -0x248) = piVar18;
                *(undefined4 *)((int)register0x00000054 + -0x244) = 1;
                *(int *)((int)register0x00000054 + -0x240) = DAT_0047ee1c;
                FUN_000987f4();
                piVar17 = *(int **)((int)register0x00000054 + -0x23c);
                piVar19 = *(int **)((int)register0x00000054 + -0x238);
                piVar18 = *(int **)((int)register0x00000054 + -0x234);
                piVar11 = *(int **)((int)register0x00000054 + -0x220);
                iVar12 = *(int *)((int)register0x00000054 + -0x14c);
                iVar9 = *(int *)((int)register0x00000054 + -0x1e8);
                iVar7 = *(int *)((int)register0x00000054 + -0x1d4);
                iVar21 = *(int *)((int)register0x00000054 + -0x1e0);
                iVar23 = *(int *)((int)register0x00000054 + -0x130);
              }
              iVar6 = (int)piVar19 + -1;
              uVar26 = CONCAT44(piVar11,iVar6);
              piVar17[iVar6 * 2 + 1] = iVar21;
              if (*DAT_0047ee24 != 0) {
                uVar26 = FUN_0009db64(iVar6,piVar11,DAT_0047ee1c,piVar17);
                iVar23 = *(int *)((int)register0x00000054 + -0x130);
                *piVar17 = iVar23;
                piVar17[1] = extraout_r3_05[(int)uVar26 * 2];
                piVar17 = extraout_r3_05;
              }
              piVar11 = (int *)((ulonglong)uVar26 >> 0x20);
              piVar17[(int)uVar26 * 2] = iVar23;
              iVar7 = iVar7 + 1;
              piVar5 = *(int **)((int)register0x00000054 + -0x13c);
              piVar16 = *(int **)((int)register0x00000054 + -0x184);
            }
            *(int *)((int)register0x00000054 + -0x250) = iVar21;
            *(int *)((int)register0x00000054 + -0x24c) = DAT_0047ee1c;
            *(undefined4 *)((int)register0x00000054 + -0x248) = DAT_0047ee30;
            FUN_000209b4();
            iVar7 = extraout_r1_03;
            while( true ) {
              *(int *)((int)register0x00000054 + -0x164) = iVar7;
              *(int *)(iVar7 + iVar9 * 8) = iVar12;
              *(undefined1 **)((int)register0x00000054 + -0x250) =
                   (undefined1 *)((int)register0x00000054 + -0x60);
              FUN_000919c8();
              uVar2 = *(uint *)((int)register0x00000054 + -0x200);
              iVar7 = *(int *)((int)register0x00000054 + -0x164);
              iVar12 = *(int *)((int)register0x00000054 + -0x204);
LAB_0047ebac:
              piVar10 = *(int **)((int)register0x00000054 + -0x60);
              unaff_r8 = piVar17;
              piVar20 = piVar19;
              if (piVar10 == (int *)0x0) break;
              uVar14 = iVar12 + 1;
              iVar12 = *piVar10;
              iVar21 = piVar10[1];
              if (uVar2 < uVar14) {
                *(int *)((int)register0x00000054 + -500) = iVar21;
                *(int *)((int)register0x00000054 + -0x158) = iVar12;
                *(int *)((int)register0x00000054 + -0x250) = iVar7;
                *(uint *)((int)register0x00000054 + -0x24c) = uVar14;
                *(uint *)((int)register0x00000054 + -0x248) = uVar2;
                *(undefined4 *)((int)register0x00000054 + -0x244) = 1;
                *(int *)((int)register0x00000054 + -0x240) = DAT_0047ee1c;
                FUN_000987f4();
                iVar7 = *(int *)((int)register0x00000054 + -0x23c);
                uVar14 = *(uint *)((int)register0x00000054 + -0x238);
                uVar2 = *(uint *)((int)register0x00000054 + -0x234);
                iVar21 = *(int *)((int)register0x00000054 + -500);
                iVar12 = *(int *)((int)register0x00000054 + -0x158);
              }
              *(uint *)((int)register0x00000054 + -0x204) = uVar14;
              *(uint *)((int)register0x00000054 + -0x200) = uVar2;
              iVar9 = uVar14 - 1;
              *(int *)(iVar7 + iVar9 * 8 + 4) = iVar21;
              if (*DAT_0047ee24 != 0) {
                FUN_0009db64();
                *piVar17 = iVar12;
                piVar17[1] = *(int *)(extraout_r1_04 + iVar9 * 8);
                iVar7 = extraout_r1_04;
              }
            }
LAB_0047e248:
            *(int *)((int)register0x00000054 + -0x250) = iVar7;
            *(int *)((int)register0x00000054 + -0x24c) = iVar12;
            *(uint *)((int)register0x00000054 + -0x248) = uVar2;
            FUN_0008f820();
            iVar7 = *(int *)((int)register0x00000054 + -0x244);
            piVar10 = DAT_0047e7f0;
            if (*(int *)(iVar7 + 4) != 0) {
              *(int *)((int)register0x00000054 + -300) = iVar7;
              *(int **)((int)register0x00000054 + -0x250) = DAT_0047e7e0;
              *(undefined4 *)((int)register0x00000054 + -0x24c) =
                   *(undefined4 *)((int)register0x00000054 + -0x198);
              *(undefined4 *)((int)register0x00000054 + -0x248) =
                   *(undefined4 *)((int)register0x00000054 + -0x17c);
              *(undefined4 *)((int)register0x00000054 + -0x244) =
                   *(undefined4 *)((int)register0x00000054 + -0x218);
              FUN_00093a08();
              piVar10 = *(int **)((int)register0x00000054 + -0x240);
              *piVar10 = (int)DAT_0047e7f0;
              if (*DAT_0047e7e4 == 0) {
                iVar7 = *(int *)((int)register0x00000054 + -300);
              }
              else {
                piVar10 = (int *)FUN_0009db64();
                iVar7 = *(int *)((int)register0x00000054 + -300);
                *unaff_r8 = iVar7;
                unaff_r8[1] = piVar10[1];
              }
              piVar10[1] = iVar7;
              piVar10 = DAT_0047e7f0;
            }
          }
          piVar19 = (int *)0x0;
          piVar17 = (int *)((int)register0x00000054 + -0x1b4);
          piVar18 = (int *)0x0;
LAB_0047e3b4:
          piVar10 = DAT_0047e7f0;
          if (piVar11 == DAT_0047e7f0) {
            iVar12 = *piVar16;
            uVar26 = CONCAT44(iVar12,piVar5);
            iVar7 = piVar16[1];
            *(int *)((int)register0x00000054 + -0x1ec) = iVar7;
            *(int *)((int)register0x00000054 + -0x150) = iVar12;
            unaff_r8 = (int *)0x0;
            while( true ) {
              iVar12 = (int)((ulonglong)uVar26 >> 0x20);
              piVar5 = (int *)uVar26;
              if (iVar7 <= (int)unaff_r8) break;
              piVar19 = (int *)((int)piVar19 + 1);
              piVar10 = *(int **)(iVar12 + (int)unaff_r8 * 8);
              *(int **)((int)register0x00000054 + -0x160) = piVar10;
              piVar20 = *(int **)(iVar12 + (int)unaff_r8 * 8 + 4);
              if (piVar18 < piVar19) {
                *(int **)((int)register0x00000054 + -0x1d4) = unaff_r8;
                *(int **)((int)register0x00000054 + -0x1fc) = piVar20;
                *(int **)((int)register0x00000054 + -0x250) = piVar17;
                *(int **)((int)register0x00000054 + -0x24c) = piVar19;
                *(int **)((int)register0x00000054 + -0x248) = piVar18;
                *(undefined4 *)((int)register0x00000054 + -0x244) = 1;
                *(int *)((int)register0x00000054 + -0x240) = DAT_0047ee1c;
                FUN_000987f4();
                piVar17 = *(int **)((int)register0x00000054 + -0x23c);
                piVar19 = *(int **)((int)register0x00000054 + -0x238);
                piVar18 = *(int **)((int)register0x00000054 + -0x234);
                uVar26 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x150),
                                  *(undefined4 *)((int)register0x00000054 + -0x13c));
                iVar7 = *(int *)((int)register0x00000054 + -0x1ec);
                unaff_r8 = *(int **)((int)register0x00000054 + -0x1d4);
                piVar20 = *(int **)((int)register0x00000054 + -0x1fc);
                piVar10 = *(int **)((int)register0x00000054 + -0x160);
              }
              iVar12 = (int)piVar19 + -1;
              piVar17[iVar12 * 2 + 1] = (int)piVar20;
              if (*DAT_0047ee24 != 0) {
                *(int *)((int)register0x00000054 + -0x1d4) = iVar12;
                uVar26 = FUN_0009db64();
                piVar20 = *(int **)((int)register0x00000054 + -0x160);
                *unaff_r8 = (int)piVar20;
                iVar12 = *(int *)((int)register0x00000054 + -0x1d4);
                unaff_r8[1] = piVar17[iVar12 * 2];
                iVar7 = extraout_r3_04;
                piVar10 = piVar20;
              }
              piVar17[iVar12 * 2] = (int)piVar10;
              unaff_r8 = (int *)((int)unaff_r8 + 1);
              piVar10 = DAT_0047ee28;
            }
          }
          *(int **)((int)register0x00000054 + -0x1e4) = piVar19;
          *(int **)((int)register0x00000054 + -0x140) = piVar17;
          iVar7 = 0;
          while (iVar7 < (int)piVar19) {
            iVar12 = piVar17[iVar7 * 2];
            unaff_r8 = *(int **)((int)register0x00000054 + -0x1dc);
            if (unaff_r8 == DAT_0047e7e8) {
              uVar8 = *(undefined4 *)((int)register0x00000054 + -0x124);
            }
            else {
              uVar8 = 0;
            }
            *(int *)((int)register0x00000054 + -0x1d4) = iVar7;
            *(int *)((int)register0x00000054 + -0x18c) = iVar12;
            piVar18 = (int *)piVar17[iVar7 * 2 + 1];
            *(int **)((int)register0x00000054 + -0x228) = piVar18;
            if (unaff_r8 == DAT_0047e7e8) {
              *(int **)((int)register0x00000054 + -0x250) = DAT_0047e7e8;
              *(undefined4 *)((int)register0x00000054 + -0x24c) = uVar8;
              *(int *)((int)register0x00000054 + -0x248) = iVar12;
              *(int **)((int)register0x00000054 + -0x244) = piVar18;
              FUN_00025f60();
              *(undefined8 *)((int)register0x00000054 + -0x1bc) =
                   **(undefined8 **)((int)register0x00000054 + -0x240);
              *(undefined4 *)((int)register0x00000054 + -0x250) =
                   *(undefined4 *)((int)register0x00000054 + -0x1bc);
              *(undefined4 *)((int)register0x00000054 + -0x24c) =
                   *(undefined4 *)((int)register0x00000054 + -0x1b8);
              FUN_0008f6c0();
              iVar12 = *(int *)((int)register0x00000054 + -0x18c);
              piVar18 = *(int **)((int)register0x00000054 + -0x228);
              unaff_r8 = *(int **)((int)register0x00000054 + -0x1dc);
              *(undefined4 *)((int)register0x00000054 + -0x180) =
                   *(undefined4 *)((int)register0x00000054 + -0x248);
              *(undefined4 *)((int)register0x00000054 + -0x21c) = DAT_0047e7fc;
              piVar5 = *(int **)((int)register0x00000054 + -0x13c);
              iVar7 = *(int *)((int)register0x00000054 + -0x1d4);
            }
            else if (unaff_r8 == DAT_0047e7ec) {
              *(int **)((int)register0x00000054 + -0x250) = DAT_0047e7ec;
              *(undefined4 *)((int)register0x00000054 + -0x24c) =
                   *(undefined4 *)((int)register0x00000054 + -0x124);
              *(int *)((int)register0x00000054 + -0x248) = iVar12;
              *(int **)((int)register0x00000054 + -0x244) = piVar18;
              FUN_00025f60();
              uVar8 = (*(undefined4 **)((int)register0x00000054 + -0x240))[1];
              *(undefined4 *)((int)register0x00000054 + -0x250) =
                   **(undefined4 **)((int)register0x00000054 + -0x240);
              *(undefined4 *)((int)register0x00000054 + -0x24c) = uVar8;
              FUN_0008f77c();
              iVar12 = *(int *)((int)register0x00000054 + -0x18c);
              piVar18 = *(int **)((int)register0x00000054 + -0x228);
              unaff_r8 = *(int **)((int)register0x00000054 + -0x1dc);
              *(undefined4 *)((int)register0x00000054 + -0x21c) = DAT_0047e7f8;
              *(undefined4 *)((int)register0x00000054 + -0x180) =
                   *(undefined4 *)((int)register0x00000054 + -0x248);
              piVar5 = *(int **)((int)register0x00000054 + -0x13c);
              iVar7 = *(int *)((int)register0x00000054 + -0x1d4);
            }
            else if (unaff_r8 == DAT_0047e7e0) {
              *(int **)((int)register0x00000054 + -0x250) = DAT_0047e7e0;
              *(undefined4 *)((int)register0x00000054 + -0x24c) =
                   *(undefined4 *)((int)register0x00000054 + -0x124);
              *(int *)((int)register0x00000054 + -0x248) = iVar12;
              *(int **)((int)register0x00000054 + -0x244) = piVar18;
              FUN_00025f60();
              uVar8 = (*(undefined4 **)((int)register0x00000054 + -0x240))[1];
              iVar12 = *(int *)((int)register0x00000054 + -0x18c);
              piVar18 = *(int **)((int)register0x00000054 + -0x228);
              unaff_r8 = *(int **)((int)register0x00000054 + -0x1dc);
              *(undefined4 *)((int)register0x00000054 + -0x21c) =
                   **(undefined4 **)((int)register0x00000054 + -0x240);
              *(undefined4 *)((int)register0x00000054 + -0x180) = uVar8;
              piVar5 = *(int **)((int)register0x00000054 + -0x13c);
              iVar7 = *(int *)((int)register0x00000054 + -0x1d4);
            }
            else {
              *(undefined4 *)((int)register0x00000054 + -0x21c) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x180) = 0;
            }
            piVar10 = *(int **)((int)register0x00000054 + -0x208);
            if (piVar10 == DAT_0047e7e8) {
              *(undefined4 *)((int)register0x00000054 + -0x1a8) =
                   *(undefined4 *)((int)register0x00000054 + -0x16c);
              *(int **)((int)register0x00000054 + -0x250) = DAT_0047e7e8;
              *(undefined4 *)((int)register0x00000054 + -0x24c) =
                   *(undefined4 *)((int)register0x00000054 + -0x1a8);
              *(int *)((int)register0x00000054 + -0x248) = iVar12;
              *(int **)((int)register0x00000054 + -0x244) = piVar18;
              FUN_00025f60(*(undefined4 *)((int)register0x00000054 + -0x1a8),iVar7,DAT_0047e7f4);
              *(undefined8 *)((int)register0x00000054 + -0x1c4) =
                   **(undefined8 **)((int)register0x00000054 + -0x240);
              *(undefined4 *)((int)register0x00000054 + -0x250) =
                   *(undefined4 *)((int)register0x00000054 + -0x1c4);
              *(undefined4 *)((int)register0x00000054 + -0x24c) =
                   *(undefined4 *)((int)register0x00000054 + -0x1c0);
              FUN_0008f6c0();
              bVar25 = *(int *)((int)register0x00000054 + -0x134) == 0;
              iVar7 = *(int *)((int)register0x00000054 + -0x1d4);
              iVar12 = *(int *)((int)register0x00000054 + -0x18c);
              piVar18 = *(int **)((int)register0x00000054 + -0x228);
              unaff_r8 = *(int **)((int)register0x00000054 + -0x1dc);
              *(undefined4 *)((int)register0x00000054 + -0x214) = DAT_0047ee20;
              *(undefined4 *)((int)register0x00000054 + -0x178) =
                   *(undefined4 *)((int)register0x00000054 + -0x248);
              piVar5 = *(int **)((int)register0x00000054 + -0x13c);
              piVar20 = DAT_0047ee10;
              piVar10 = DAT_0047ee18;
            }
            else {
              *(undefined4 *)((int)register0x00000054 + -0x1a8) = 0;
              if (piVar10 == DAT_0047e7ec) {
                *(undefined4 *)((int)register0x00000054 + -0x1ac) =
                     *(undefined4 *)((int)register0x00000054 + -0x16c);
                *(int **)((int)register0x00000054 + -0x250) = DAT_0047e7ec;
                *(undefined4 *)((int)register0x00000054 + -0x24c) =
                     *(undefined4 *)((int)register0x00000054 + -0x1ac);
                *(int *)((int)register0x00000054 + -0x248) = iVar12;
                *(int **)((int)register0x00000054 + -0x244) = piVar18;
                FUN_00025f60(*(undefined4 *)((int)register0x00000054 + -0x1ac),iVar7,DAT_0047e7f4);
                uVar8 = (*(undefined4 **)((int)register0x00000054 + -0x240))[1];
                *(undefined4 *)((int)register0x00000054 + -0x250) =
                     **(undefined4 **)((int)register0x00000054 + -0x240);
                *(undefined4 *)((int)register0x00000054 + -0x24c) = uVar8;
                FUN_0008f77c();
                bVar25 = *(int *)((int)register0x00000054 + -0x134) == 0;
                iVar7 = *(int *)((int)register0x00000054 + -0x1d4);
                iVar12 = *(int *)((int)register0x00000054 + -0x18c);
                piVar18 = *(int **)((int)register0x00000054 + -0x228);
                unaff_r8 = *(int **)((int)register0x00000054 + -0x1dc);
                *(int *)((int)register0x00000054 + -0x214) = DAT_0047ee1c;
                *(undefined4 *)((int)register0x00000054 + -0x178) =
                     *(undefined4 *)((int)register0x00000054 + -0x248);
                piVar5 = *(int **)((int)register0x00000054 + -0x13c);
                piVar20 = DAT_0047ee10;
                piVar10 = DAT_0047ee18;
              }
              else {
                *(undefined4 *)((int)register0x00000054 + -0x1ac) = 0;
                if (piVar10 == DAT_0047e7e0) {
                  *(int **)((int)register0x00000054 + -0x250) = DAT_0047e7e0;
                  *(undefined4 *)((int)register0x00000054 + -0x24c) =
                       *(undefined4 *)((int)register0x00000054 + -0x16c);
                  *(int *)((int)register0x00000054 + -0x248) = iVar12;
                  *(int **)((int)register0x00000054 + -0x244) = piVar18;
                  FUN_00025f60(*(undefined4 *)((int)register0x00000054 + -0x16c),iVar7,DAT_0047e7f4)
                  ;
                  uVar8 = (*(undefined4 **)((int)register0x00000054 + -0x240))[1];
                  bVar25 = *(int *)((int)register0x00000054 + -0x134) == 0;
                  iVar12 = *(int *)((int)register0x00000054 + -0x18c);
                  piVar18 = *(int **)((int)register0x00000054 + -0x228);
                  unaff_r8 = *(int **)((int)register0x00000054 + -0x1dc);
                  *(undefined4 *)((int)register0x00000054 + -0x214) =
                       **(undefined4 **)((int)register0x00000054 + -0x240);
                  *(undefined4 *)((int)register0x00000054 + -0x178) = uVar8;
                  piVar5 = *(int **)((int)register0x00000054 + -0x13c);
                  iVar7 = *(int *)((int)register0x00000054 + -0x1d4);
                  piVar20 = DAT_0047e7e8;
                  piVar10 = DAT_0047e7e0;
                }
                else {
                  bVar25 = *(int *)((int)register0x00000054 + -0x134) == 0;
                  *(undefined4 *)((int)register0x00000054 + -0x214) = 0;
                  *(undefined4 *)((int)register0x00000054 + -0x178) = 0;
                  piVar20 = DAT_0047ee10;
                  piVar10 = DAT_0047e7e0;
                }
              }
            }
            if (bVar25) {
LAB_0047e968:
              *(int **)((int)register0x00000054 + -0x250) = piVar10;
              *(int **)((int)register0x00000054 + -0x24c) = piVar5;
              *(int *)((int)register0x00000054 + -0x248) = iVar12;
              *(int **)((int)register0x00000054 + -0x244) = piVar18;
              FUN_00093a08(piVar5,iVar7);
              puVar1 = *(undefined4 **)((int)register0x00000054 + -0x240);
              *puVar1 = *(undefined4 *)((int)register0x00000054 + -0x21c);
              if (*DAT_0047ee24 == 0) {
                iVar7 = *(int *)((int)register0x00000054 + -0x180);
              }
              else {
                puVar1 = (undefined4 *)FUN_0009db64();
                iVar7 = *(int *)((int)register0x00000054 + -0x180);
                *unaff_r8 = iVar7;
                unaff_r8[1] = puVar1[1];
              }
              puVar1[1] = iVar7;
            }
            else {
              *(undefined4 *)((int)register0x00000054 + -0x250) =
                   *(undefined4 *)((int)register0x00000054 + -0x21c);
              *(undefined4 *)((int)register0x00000054 + -0x24c) =
                   *(undefined4 *)((int)register0x00000054 + -0x180);
              *(undefined4 *)((int)register0x00000054 + -0x248) =
                   *(undefined4 *)((int)register0x00000054 + -0x214);
              *(undefined4 *)((int)register0x00000054 + -0x244) =
                   *(undefined4 *)((int)register0x00000054 + -0x178);
              FUN_000c88f0();
              if (*(char *)((int)register0x00000054 + -0x240) == '\0') {
                piVar5 = *(int **)((int)register0x00000054 + -0x13c);
                iVar12 = *(int *)((int)register0x00000054 + -0x18c);
                piVar18 = *(int **)((int)register0x00000054 + -0x228);
                iVar7 = extraout_r1_02;
                piVar10 = DAT_0047ee18;
                goto LAB_0047e968;
              }
            }
            piVar5 = *(int **)((int)register0x00000054 + -0x13c);
            piVar19 = *(int **)((int)register0x00000054 + -0x1e4);
            piVar17 = *(int **)((int)register0x00000054 + -0x140);
            piVar10 = DAT_0047e7f0;
            iVar7 = *(int *)((int)register0x00000054 + -0x1d4) + 1;
          }
          if (piVar5 == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = *piVar5;
          }
          if ((iVar7 != 0) || (*(int *)((int)register0x00000054 + -0x134) == 0)) {
            *(int **)((int)register0x00000054 + -0x250) = DAT_0047e7e0;
            *(undefined4 *)((int)register0x00000054 + -0x24c) =
                 *(undefined4 *)((int)register0x00000054 + -0x138);
            *(undefined4 *)((int)register0x00000054 + -0x248) =
                 *(undefined4 *)((int)register0x00000054 + -0x17c);
            *(undefined4 *)((int)register0x00000054 + -0x244) =
                 *(undefined4 *)((int)register0x00000054 + -0x218);
            FUN_00093a08();
            puVar1 = *(undefined4 **)((int)register0x00000054 + -0x240);
            *puVar1 = DAT_0047e7e0;
            if (*DAT_0047e7e4 == 0) {
              iVar7 = *(int *)((int)register0x00000054 + -0x13c);
            }
            else {
              puVar1 = (undefined4 *)FUN_0009db64();
              iVar7 = *(int *)((int)register0x00000054 + -0x13c);
              *unaff_r8 = iVar7;
              unaff_r8[1] = puVar1[1];
            }
            puVar1[1] = iVar7;
          }
          *(undefined1 **)((int)register0x00000054 + -0x250) =
               (undefined1 *)((int)register0x00000054 + -0x30);
          FUN_000919c8();
        }
        if (*(int **)((int)register0x00000054 + -0x138) == (int *)0x0) {
          iVar7 = 0;
        }
        else {
          iVar7 = **(int **)((int)register0x00000054 + -0x138);
        }
        if (((iVar7 != 0) || (*(int *)((int)register0x00000054 + -0x134) == 0)) &&
           (*(int *)((int)register0x00000054 + -0x1a0) != 0)) {
          FUN_000908bc();
          *(undefined4 *)((int)register0x00000054 + -0x128) =
               *(undefined4 *)((int)register0x00000054 + -0x250);
          *(undefined8 *)((int)register0x00000054 + -0x1cc) =
               *(undefined8 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x250) =
               *(undefined4 *)((int)register0x00000054 + -0x1cc);
          *(undefined4 *)((int)register0x00000054 + -0x24c) =
               *(undefined4 *)((int)register0x00000054 + -0x1c8);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -0x11c) =
               *(undefined4 *)((int)register0x00000054 + -0x248);
          *(int **)((int)register0x00000054 + -0x250) = DAT_0047df14;
          *(undefined4 *)((int)register0x00000054 + -0x24c) =
               *(undefined4 *)((int)register0x00000054 + -0x128);
          *(undefined4 *)((int)register0x00000054 + -0x248) = DAT_0047df1c;
          *(undefined4 *)((int)register0x00000054 + -0x244) = 9;
          FUN_00093a08();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x240);
          *puVar1 = DAT_0047df20;
          if (*DAT_0047defc == 0) {
            iVar7 = *(int *)((int)register0x00000054 + -0x11c);
          }
          else {
            puVar1 = (undefined4 *)FUN_0009db64();
            iVar7 = *(int *)((int)register0x00000054 + -0x11c);
            *unaff_r8 = iVar7;
            unaff_r8[1] = puVar1[1];
          }
          puVar1[1] = iVar7;
          *(int **)((int)register0x00000054 + -0x250) = DAT_0047df14;
          *(undefined4 *)((int)register0x00000054 + -0x24c) =
               *(undefined4 *)((int)register0x00000054 + -0x128);
          *(undefined4 *)((int)register0x00000054 + -0x248) = DAT_0047df24;
          *(undefined4 *)((int)register0x00000054 + -0x244) = 6;
          FUN_00093a08();
          uVar26 = CONCAT44(DAT_0047df14,*(undefined4 **)((int)register0x00000054 + -0x240));
          **(undefined4 **)((int)register0x00000054 + -0x240) = DAT_0047df14;
          if (*DAT_0047defc == 0) {
            iVar7 = *(int *)((int)register0x00000054 + -0x138);
          }
          else {
            uVar26 = FUN_0009db64();
            iVar7 = *(int *)((int)register0x00000054 + -0x138);
            *unaff_r8 = iVar7;
            unaff_r8[1] = *(int *)((int)uVar26 + 4);
          }
          *(int *)((int)uVar26 + 4) = iVar7;
          *(int *)((int)register0x00000054 + -0x250) = (int)((ulonglong)uVar26 >> 0x20);
          *(undefined4 *)((int)register0x00000054 + -0x24c) =
               *(undefined4 *)((int)register0x00000054 + -0x1a0);
          *(undefined4 *)((int)register0x00000054 + -0x248) = DAT_0047df28;
          *(undefined4 *)((int)register0x00000054 + -0x244) = 6;
          FUN_00093a08();
          uVar26 = CONCAT44(DAT_0047df14,*(undefined4 **)((int)register0x00000054 + -0x240));
          **(undefined4 **)((int)register0x00000054 + -0x240) = DAT_0047df14;
          if (*DAT_0047defc == 0) {
            iVar7 = *(int *)((int)register0x00000054 + -0x128);
          }
          else {
            uVar26 = FUN_0009db64();
            iVar7 = *(int *)((int)register0x00000054 + -0x128);
            *unaff_r8 = iVar7;
            unaff_r8[1] = *(int *)((int)uVar26 + 4);
          }
          *(int *)((int)uVar26 + 4) = iVar7;
          pcVar3 = (code *)**(undefined4 **)((int)register0x00000054 + -0x194);
          *(int *)((int)register0x00000054 + -0x250) = (int)((ulonglong)uVar26 >> 0x20);
          *(undefined4 *)((int)register0x00000054 + -0x24c) =
               *(undefined4 *)((int)register0x00000054 + -0x1a0);
          (*pcVar3)();
        }
      }
      else {
        uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
        *(undefined4 *)((int)register0x00000054 + -0x250) = DAT_0047df04;
        *(undefined4 *)((int)register0x00000054 + -0x24c) = uVar8;
        *(int **)((int)register0x00000054 + -0x248) = piVar18;
        FUN_00025164();
      }
      iVar9 = *(int *)((int)register0x00000054 + -0x1d0) + 1;
      iVar12 = *(int *)((int)register0x00000054 + -0x210);
      iVar7 = *(int *)((int)register0x00000054 + -0x174);
    } while( true );
  }
  goto LAB_0047ee00;
LAB_0047ed68:
  *(int **)((int)register0x00000054 + -0x250) = piVar17;
  *(int **)((int)register0x00000054 + -0x24c) = piVar20;
  *(undefined4 *)((int)register0x00000054 + -0x248) = DAT_0047ee30;
  FUN_000209b4();
LAB_0047ed7c:
  iVar12 = 0x47ed88;
  FUN_0009dbd4(3,3);
  iVar7 = extraout_r12;
LAB_0047ed88:
  *(int *)((int)register0x00000054 + -0x250) = iVar7;
  *(int *)((int)register0x00000054 + -0x24c) = iVar12;
  *(undefined4 *)((int)register0x00000054 + -0x248) = DAT_0047ee30;
  FUN_000209b4();
LAB_0047ed9c:
  FUN_0009dbd4(2,2);
LAB_0047eda8:
  *(int **)((int)register0x00000054 + -0x250) = unaff_r8;
  *(int **)((int)register0x00000054 + -0x24c) = piVar20;
  *(undefined4 *)((int)register0x00000054 + -0x248) = DAT_0047ee30;
  FUN_000209b4();
LAB_0047edbc:
  FUN_0009dbd4(1,1);
LAB_0047edc8:
  *(int **)((int)register0x00000054 + -0x250) = piVar18;
  *(int **)((int)register0x00000054 + -0x24c) = piVar10;
  *(undefined4 *)((int)register0x00000054 + -0x248) = DAT_0047ee30;
  FUN_000209b4();
LAB_0047eddc:
  FUN_0009dbd4(0,0);
  uVar2 = extraout_r3_06;
LAB_0047ede8:
  *(uint *)((int)register0x00000054 + -0x250) = uVar2;
  *(uint *)((int)register0x00000054 + -0x24c) = uVar14;
  *(undefined4 *)((int)register0x00000054 + -0x248) = DAT_0047ee30;
  param_1 = FUN_000209b4();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x254);
  if ((bool)uVar24) {
    register0x00000054 = (BADSPACEBASE *)puVar22;
  }
LAB_0047ee00:
  unaff_lr = 0x47ee08;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x0047d6b4;
}



/* k3c/internal/pkg/web.(*QueryStatusHelper).handle_query @ 0047ee40 (size 1924) */

void k3c_internal_pkg_web___QueryStatusHelper__handle_query(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int extraout_r1;
  int iVar9;
  uint uVar10;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined1 *puVar11;
  undefined4 extraout_r2;
  int iVar12;
  uint uVar13;
  uint extraout_r2_00;
  int iVar14;
  int extraout_r3;
  int extraout_r3_00;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar15;
  undefined4 unaff_lr;
  bool bVar16;
  undefined8 uVar17;
  
code_r0x0047ee40:
  if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0xd4)) {
    puVar15 = (undefined1 *)((int)register0x00000054 + -0x154);
    *(undefined4 *)((int)register0x00000054 + -0x154) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -0x150) = *(undefined4 *)((int)register0x00000054 + 8)
    ;
    *(undefined4 *)((int)register0x00000054 + -0x14c) = DAT_0047f5c8;
    *(undefined4 *)((int)register0x00000054 + -0x148) = 7;
    *(undefined4 *)((int)register0x00000054 + -0x144) = DAT_0047f5cc;
    *(undefined4 *)((int)register0x00000054 + -0x140) = DAT_0047f5d0;
    k3c_internal_pkg_web___WebRequest__get_dict();
    *(undefined4 *)((int)register0x00000054 + -0x108) =
         *(undefined4 *)((int)register0x00000054 + -0x13c);
    FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x44),
                 *(undefined4 *)((int)register0x00000054 + -0x13c));
    *(int *)((int)register0x00000054 + -0x150) = DAT_0047f5d4;
    *(undefined4 *)((int)register0x00000054 + -0x14c) = extraout_r2;
    *(undefined1 **)((int)register0x00000054 + -0x148) =
         (undefined1 *)((int)register0x00000054 + -0x44);
    FUN_00091764();
    do {
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x44);
      if (puVar3 == (undefined4 *)0x0) {
        *(undefined4 *)((int)register0x00000054 + -0x118) =
             **(undefined4 **)((int)register0x00000054 + 8);
        FUN_000908bc();
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x150);
        *(undefined4 *)((int)register0x00000054 + -0x150) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x14c) = DAT_0047f5f0;
        *(undefined4 *)((int)register0x00000054 + -0x148) = 0x11;
        *(int *)((int)register0x00000054 + -0x144) = DAT_0047f5d4;
        *(undefined4 *)((int)register0x00000054 + -0x140) = uVar4;
        k3c_internal_pkg_web___WebRequest__get_dict();
        *(undefined4 *)((int)register0x00000054 + -0x10c) =
             *(undefined4 *)((int)register0x00000054 + -0x13c);
        if (*(char *)((int)register0x00000054 + 0xc) != '\0') {
          uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
          *(undefined4 *)((int)register0x00000054 + -0x150) = DAT_0047f5f4;
          *(undefined4 *)((int)register0x00000054 + -0x14c) = uVar4;
          *(undefined4 *)((int)register0x00000054 + -0x148) =
               *(undefined4 *)((int)register0x00000054 + -0x118);
          FUN_0009275c();
          if (*(char *)((int)register0x00000054 + -0x140) != '\0') {
            uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
            *(undefined4 *)((int)register0x00000054 + -0x150) = DAT_0047f5f4;
            *(undefined4 *)((int)register0x00000054 + -0x14c) = uVar4;
            *(undefined4 *)((int)register0x00000054 + -0x148) =
                 *(undefined4 *)((int)register0x00000054 + -0x118);
            FUN_00025164();
          }
        }
        uVar4 = *(undefined4 *)(**(int **)((int)register0x00000054 + 4) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x11c) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x150) = uVar4;
        k3c_internal_pkg_reactor_NewReactorCompletion(*(int **)((int)register0x00000054 + 4));
        *(undefined4 *)((int)register0x00000054 + -0x120) =
             *(undefined4 *)((int)register0x00000054 + -0x14c);
        *(undefined4 *)((int)register0x00000054 + -0x150) = DAT_0047f5f8;
        FUN_00022cf8();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x14c);
        *puVar3 = DAT_0047f5fc;
        if (*DAT_0047f600 == 0) {
          iVar9 = *(int *)((int)register0x00000054 + -0x120);
        }
        else {
          puVar3 = (undefined4 *)FUN_0009db54();
          iVar9 = *(int *)((int)register0x00000054 + -0x120);
          *unaff_r8 = iVar9;
        }
        *(undefined4 **)((int)register0x00000054 + -4) = puVar3;
        puVar3[1] = iVar9;
        FUN_000908bc();
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -0x150);
        *(undefined4 *)((int)register0x00000054 + -0x150) = DAT_0047f604;
        FUN_00022cf8();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x14c);
        *puVar3 = 0;
        puVar3[1] = 0;
        iVar9 = DAT_0047f5d4;
        puVar3[2] = DAT_0047f5d4;
        if (*DAT_0047f600 == 0) {
          iVar8 = *(int *)((int)register0x00000054 + -0x108);
          iVar12 = *(int *)((int)register0x00000054 + -4);
          iVar14 = *(int *)((int)register0x00000054 + -8);
        }
        else {
          puVar3 = (undefined4 *)FUN_0009db74();
          iVar8 = *(int *)((int)register0x00000054 + -0x108);
          *unaff_r8 = iVar8;
          iVar12 = *(int *)((int)register0x00000054 + -4);
          unaff_r8[1] = iVar12;
          iVar14 = *(int *)((int)register0x00000054 + -8);
          unaff_r8[2] = iVar14;
          iVar9 = extraout_r3;
        }
        puVar3[3] = iVar8;
        puVar3[4] = DAT_0047f608;
        puVar3[5] = iVar12;
        puVar3[6] = iVar9;
        puVar3[7] = iVar14;
        *(undefined4 **)((int)register0x00000054 + -0x150) = puVar3;
        *(undefined4 *)((int)register0x00000054 + -0x14c) = 4;
        *(undefined4 *)((int)register0x00000054 + -0x148) = 4;
        FUN_0008f820();
        iVar8 = *(int *)((int)register0x00000054 + 4);
        uVar10 = *(uint *)(iVar8 + 0x10);
        uVar13 = *(int *)(iVar8 + 0xc) + 1;
        iVar9 = *(int *)(iVar8 + 8);
        iVar12 = *(int *)((int)register0x00000054 + -0x144);
        if (uVar10 < uVar13) {
          *(int *)((int)register0x00000054 + -0xc) = iVar12;
          *(int *)((int)register0x00000054 + -0x150) = iVar9;
          *(uint *)((int)register0x00000054 + -0x14c) = uVar13;
          *(uint *)((int)register0x00000054 + -0x148) = uVar10;
          *(undefined4 *)((int)register0x00000054 + -0x144) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x140) = DAT_0047f60c;
          FUN_000987f4();
          iVar9 = *(int *)((int)register0x00000054 + -0x13c);
          uVar13 = *(uint *)((int)register0x00000054 + -0x138);
          iVar8 = *(int *)((int)register0x00000054 + 4);
          *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)((int)register0x00000054 + -0x134);
          if (*DAT_0047f600 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r1_00;
            unaff_r8[1] = *(int *)(extraout_r3_00 + 8);
            iVar9 = extraout_r1_00;
            uVar13 = extraout_r2_00;
            iVar8 = extraout_r3_00;
          }
          *(int *)(iVar8 + 8) = iVar9;
          iVar12 = *(int *)((int)register0x00000054 + -0xc);
        }
        *(uint *)(iVar8 + 0xc) = uVar13;
        *(int *)(iVar9 + (uVar13 - 1) * 8) = DAT_0047f5e0;
        uVar17 = CONCAT44(iVar9 + (uVar13 - 1) * 8,iVar8);
        if (*DAT_0047f600 != 0) {
          uVar17 = FUN_0009db64();
          *unaff_r8 = iVar12;
          unaff_r8[1] = *(int *)((int)((ulonglong)uVar17 >> 0x20) + 4);
        }
        *(int *)((int)((ulonglong)uVar17 >> 0x20) + 4) = iVar12;
        if (*(int *)((int)uVar17 + 0x14) == 0) {
          *(undefined4 *)((int)register0x00000054 + -0x150) = DAT_0047f610;
          FUN_00022cf8();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x14c);
          *puVar3 = DAT_0047f614;
          if (*DAT_0047f600 == 0) {
            iVar9 = *(int *)((int)register0x00000054 + 4);
          }
          else {
            puVar3 = (undefined4 *)FUN_0009db54();
            iVar9 = *(int *)((int)register0x00000054 + 4);
            *unaff_r8 = iVar9;
          }
          puVar3[1] = iVar9;
          *(undefined4 *)((int)register0x00000054 + -0x150) =
               *(undefined4 *)((int)register0x00000054 + -0x11c);
          *(undefined4 **)((int)register0x00000054 + -0x14c) = puVar3;
          *(undefined8 *)((int)register0x00000054 + -0x148) = 0;
          k3c_internal_pkg_reactor___Reactor__Register_timer();
          iVar9 = *(int *)((int)register0x00000054 + -0x140);
          if (*DAT_0047f600 == 0) {
            iVar8 = *(int *)((int)register0x00000054 + 4);
          }
          else {
            FUN_0009db64();
            *unaff_r8 = extraout_r1_01;
            iVar8 = *(int *)((int)register0x00000054 + 4);
            unaff_r8[1] = *(int *)(iVar8 + 0x14);
            iVar9 = extraout_r1_01;
          }
          *(int *)(iVar8 + 0x14) = iVar9;
        }
        *(undefined4 *)((int)register0x00000054 + -0x150) =
             *(undefined4 *)((int)register0x00000054 + -0x120);
        *(undefined8 *)((int)register0x00000054 + -0x14c) = *DAT_0047f618;
        *(undefined4 *)((int)register0x00000054 + -0x144) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x140) = 0;
        k3c_internal_pkg_reactor___ReactorCompletion__Wait();
        puVar11 = *(undefined1 **)((int)register0x00000054 + -0x138);
        iVar9 = *(int *)((int)register0x00000054 + -0x13c);
        if (*(int *)((int)register0x00000054 + -0x13c) == 0) {
          uVar4 = FUN_0009def8(0,(undefined1 *)((int)register0x00000054 + -0x68));
          FUN_0009de88(uVar4,(undefined1 *)((int)register0x00000054 + -0xf4));
          *(undefined1 **)((int)register0x00000054 + -0x5c) =
               (undefined1 *)((int)register0x00000054 + -0xf4);
          FUN_0006aa3c();
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + -0x150);
          puVar11 = (undefined1 *)((int)register0x00000054 + -0x68);
          iVar9 = DAT_0047f5d4;
        }
        if (iVar9 != DAT_0047f5d4) {
          *(int *)((int)register0x00000054 + -0x150) = iVar9;
          *(int *)((int)register0x00000054 + -0x14c) = DAT_0047f5d4;
          *(undefined4 *)((int)register0x00000054 + -0x148) = DAT_0047f60c;
          FUN_000209b4();
          goto LAB_0047f4f8;
        }
        *(int *)((int)register0x00000054 + -0x150) = DAT_0047f5d4;
        *(undefined1 **)((int)register0x00000054 + -0x14c) = puVar11;
        *(undefined4 *)((int)register0x00000054 + -0x148) = DAT_0047f61c;
        *(undefined4 *)((int)register0x00000054 + -0x144) = 6;
        FUN_00025f60();
        iVar9 = *(int *)((int)register0x00000054 + 8);
        if (*(int *)(iVar9 + 0x18) == 0) {
          uVar17 = CONCAT44((*(undefined4 **)((int)register0x00000054 + -0x140))[1],iVar9);
          *(undefined4 *)(iVar9 + 0x18) = **(undefined4 **)((int)register0x00000054 + -0x140);
          if (*DAT_0047f600 == 0) {
            cVar1 = *(char *)((int)register0x00000054 + 0xc);
          }
          else {
            uVar17 = FUN_0009db64();
            *unaff_r8 = (int)((ulonglong)uVar17 >> 0x20);
            unaff_r8[1] = *(int *)((int)uVar17 + 0x1c);
            cVar1 = *(char *)((int)register0x00000054 + 0xc);
          }
          *(int *)((int)uVar17 + 0x1c) = (int)((ulonglong)uVar17 >> 0x20);
        }
        else {
          cVar1 = *(char *)((int)register0x00000054 + 0xc);
        }
        if (cVar1 != '\0') {
          *(undefined4 *)((int)register0x00000054 + -0x150) = DAT_0047f620;
          FUN_00022cf8();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x14c);
          *puVar3 = DAT_0047f624;
          if (*DAT_0047f600 == 0) {
            iVar9 = *(int *)((int)register0x00000054 + -0x118);
          }
          else {
            puVar3 = (undefined4 *)FUN_0009db54();
            iVar9 = *(int *)((int)register0x00000054 + -0x118);
            *unaff_r8 = iVar9;
          }
          *(undefined4 **)((int)register0x00000054 + -0x10) = puVar3;
          puVar3[1] = iVar9;
          *(undefined4 *)((int)register0x00000054 + -0x150) = DAT_0047f604;
          FUN_00022cf8();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x14c);
          *puVar3 = DAT_0047f628;
          if (*DAT_0047f600 == 0) {
            iVar9 = *(int *)((int)register0x00000054 + -0x118);
            iVar8 = *(int *)((int)register0x00000054 + -0x108);
            iVar12 = *(int *)((int)register0x00000054 + -0x10);
            iVar14 = *(int *)((int)register0x00000054 + -0x10c);
          }
          else {
            puVar3 = (undefined4 *)FUN_0009db84();
            iVar9 = *(int *)((int)register0x00000054 + -0x118);
            *unaff_r8 = iVar9;
            iVar8 = *(int *)((int)register0x00000054 + -0x108);
            unaff_r8[1] = iVar8;
            iVar12 = *(int *)((int)register0x00000054 + -0x10);
            unaff_r8[2] = iVar12;
            iVar14 = *(int *)((int)register0x00000054 + -0x10c);
            unaff_r8[3] = iVar14;
          }
          *(undefined4 **)((int)register0x00000054 + -0x14) = puVar3;
          puVar3[1] = iVar9;
          iVar2 = DAT_0047f5d4;
          puVar3[2] = DAT_0047f5d4;
          puVar3[3] = iVar8;
          puVar3[4] = DAT_0047f608;
          puVar3[5] = iVar12;
          puVar3[6] = iVar2;
          puVar3[7] = iVar14;
          uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 4);
          *(undefined4 *)((int)register0x00000054 + -0x150) = DAT_0047f5f4;
          *(undefined4 *)((int)register0x00000054 + -0x14c) = uVar4;
          *(int *)((int)register0x00000054 + -0x148) = iVar9;
          FUN_00092c70();
          piVar6 = *(int **)((int)register0x00000054 + -0x144);
          piVar6[1] = 4;
          piVar6[2] = 4;
          if (*DAT_0047f600 == 0) {
            iVar9 = *(int *)((int)register0x00000054 + -0x14);
          }
          else {
            piVar6 = (int *)FUN_0009db64();
            iVar9 = *(int *)((int)register0x00000054 + -0x14);
            *unaff_r8 = iVar9;
            unaff_r8[1] = *piVar6;
          }
          *piVar6 = iVar9;
        }
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
        return;
      }
      uVar7 = *puVar3;
      uVar4 = puVar3[1];
      *(undefined4 *)((int)register0x00000054 + -0x128) =
           **(undefined4 **)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x110) =
           (*(undefined4 **)((int)register0x00000054 + -0x40))[1];
      *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0x48) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0xfc) = DAT_0047f5d8;
      *(undefined1 **)((int)register0x00000054 + -0xf8) =
           (undefined1 *)((int)register0x00000054 + -0x4c);
      iVar8 = *(int *)((int)register0x00000054 + -0xfc);
      iVar9 = DAT_0047f5dc;
      if (iVar8 == 0) {
        iVar8 = 0;
        iVar9 = 0;
      }
      pcVar5 = *(code **)(iVar9 + 0x54);
      *(int *)((int)register0x00000054 + -0x150) = iVar8;
      (*pcVar5)();
      if (*(int *)((int)register0x00000054 + -0x14c) != 0x18) {
        *(undefined4 *)((int)register0x00000054 + -0x150) = DAT_0047f5e4;
        FUN_00022cf8();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x14c);
        puVar3[1] = 0x10;
        *puVar3 = DAT_0047f5e8;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = DAT_0047f5ec;
        *(undefined4 **)((int)register0x00000054 + 0x1c) = puVar3;
        return;
      }
      iVar8 = *(int *)((int)register0x00000054 + -0x128);
      iVar9 = extraout_r1;
      if (iVar8 != 0) {
        bVar16 = iVar8 == DAT_0047f5e0;
        if (!bVar16) goto LAB_0047f5a0;
        iVar12 = **(int **)((int)register0x00000054 + -0x110);
        *(int *)((int)register0x00000054 + -0x114) = iVar12;
        iVar8 = (*(int **)((int)register0x00000054 + -0x110))[1];
        *(int *)((int)register0x00000054 + -300) = iVar8;
        iVar14 = 0;
        while (iVar9 = DAT_0047f5e0, iVar14 < iVar8) {
          *(int *)((int)register0x00000054 + -0x124) = iVar14;
          uVar4 = *(undefined4 *)(iVar12 + iVar14 * 8 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x104) = *(undefined4 *)(iVar12 + iVar14 * 8);
          *(undefined4 *)((int)register0x00000054 + -0x100) = uVar4;
          iVar8 = *(int *)((int)register0x00000054 + -0x104);
          iVar9 = DAT_0047f5dc;
          if (iVar8 == 0) {
            iVar8 = 0;
            iVar9 = 0;
          }
          pcVar5 = *(code **)(iVar9 + 0x54);
          *(int *)((int)register0x00000054 + -0x150) = iVar8;
          (*pcVar5)();
          if (*(int *)((int)register0x00000054 + -0x14c) != 0x18) {
            *(undefined4 *)((int)register0x00000054 + -0x150) = DAT_0047f5e4;
            FUN_00022cf8();
            puVar3 = *(undefined4 **)((int)register0x00000054 + -0x14c);
            puVar3[1] = 0x10;
            *puVar3 = DAT_0047f5e8;
            *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x18) = DAT_0047f5ec;
            *(undefined4 **)((int)register0x00000054 + 0x1c) = puVar3;
            return;
          }
LAB_0047f4f8:
          iVar8 = *(int *)((int)register0x00000054 + -300);
          iVar12 = *(int *)((int)register0x00000054 + -0x114);
          iVar14 = *(int *)((int)register0x00000054 + -0x124) + 1;
        }
      }
      *(undefined1 **)((int)register0x00000054 + -0x150) =
           (undefined1 *)((int)register0x00000054 + -0x44);
      FUN_000919c8((undefined1 *)((int)register0x00000054 + -0x44),iVar9);
    } while( true );
  }
  goto LAB_0047f5b8;
LAB_0047f5a0:
  *(int *)((int)register0x00000054 + -0x150) = iVar8;
  *(int *)((int)register0x00000054 + -0x14c) = DAT_0047f5e0;
  *(undefined4 *)((int)register0x00000054 + -0x148) = DAT_0047f60c;
  param_1 = FUN_000209b4();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x154);
  if (bVar16) {
    register0x00000054 = (BADSPACEBASE *)puVar15;
  }
LAB_0047f5b8:
  unaff_lr = 0x47f5c0;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x0047ee40;
}



/* k3c/internal/pkg/web.(*QueryStatusHelper)._handle_object_query @ 0047f62c (size 2012) */

void k3c_internal_pkg_web___QueryStatusHelper___handle_object_query(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  bool bVar11;
  undefined8 uVar12;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x50)) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0xd0);
      *(undefined4 *)((int)register0x00000054 + -0xd0) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0xcc) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -200) = DAT_0047fe08;
      *(undefined4 *)((int)register0x00000054 + -0xc4) = 7;
      *(undefined4 *)((int)register0x00000054 + -0xc0) = DAT_0047fe0c;
      *(int *)((int)register0x00000054 + -0xbc) = DAT_0047fe10;
      k3c_internal_pkg_web___WebRequest__get_dict();
      piVar1 = *(int **)((int)register0x00000054 + -0xb8);
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
      if (iVar2 == 0) {
        *(undefined4 *)((int)register0x00000054 + -0xcc) = DAT_0047fe1c;
        FUN_00022cf8();
        puVar6 = *(undefined4 **)((int)register0x00000054 + -200);
        puVar6[1] = 0xd;
        *puVar6 = DAT_0047fe20;
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = DAT_0047fe24;
        *(undefined4 **)((int)register0x00000054 + 0x18) = puVar6;
        return;
      }
      *(int **)((int)register0x00000054 + -0x6c) = piVar1;
      if (piVar1 == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *piVar1;
      }
      *(int *)((int)register0x00000054 + -0xa4) = iVar2;
      *(undefined4 *)((int)register0x00000054 + -0xcc) = DAT_0047fe14;
      *(undefined4 *)((int)register0x00000054 + -200) = 0;
      *(int *)((int)register0x00000054 + -0xc4) = iVar2;
      FUN_000986b8();
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0xc0);
      FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x38));
      *(undefined4 *)((int)register0x00000054 + -0xcc) = DAT_0047fe18;
      *(undefined4 *)((int)register0x00000054 + -200) =
           *(undefined4 *)((int)register0x00000054 + -0x6c);
      *(undefined1 **)((int)register0x00000054 + -0xc4) =
           (undefined1 *)((int)register0x00000054 + -0x38);
      FUN_00091764();
      iVar2 = *(int *)((int)register0x00000054 + -4);
      uVar3 = *(uint *)((int)register0x00000054 + -0xa4);
      iVar4 = 0;
      while (puVar6 = *(undefined4 **)((int)register0x00000054 + -0x38), puVar6 != (undefined4 *)0x0
            ) {
        uVar5 = iVar4 + 1;
        uVar8 = *puVar6;
        uVar7 = puVar6[1];
        if (uVar3 < uVar5) {
          *(undefined4 *)((int)register0x00000054 + -0x9c) = uVar7;
          *(undefined4 *)((int)register0x00000054 + -0x5c) = uVar8;
          *(int *)((int)register0x00000054 + -0xcc) = iVar2;
          *(uint *)((int)register0x00000054 + -200) = uVar5;
          *(uint *)((int)register0x00000054 + -0xc4) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0xc0) = 1;
          *(undefined4 *)((int)register0x00000054 + -0xbc) = DAT_0047fe14;
          FUN_000987f4();
          iVar2 = *(int *)((int)register0x00000054 + -0xb8);
          uVar5 = *(uint *)((int)register0x00000054 + -0xb4);
          uVar3 = *(uint *)((int)register0x00000054 + -0xb0);
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0x9c);
          uVar8 = *(undefined4 *)((int)register0x00000054 + -0x5c);
        }
        *(uint *)((int)register0x00000054 + -0xa8) = uVar5;
        *(uint *)((int)register0x00000054 + -0xa4) = uVar3;
        iVar4 = uVar5 - 1;
        *(undefined4 *)(iVar2 + iVar4 * 8 + 4) = uVar7;
        if (*DAT_0047fe28 != 0) {
          iVar2 = FUN_0009db64();
          *unaff_r8 = uVar8;
          unaff_r8[1] = *(undefined4 *)(iVar2 + iVar4 * 8);
        }
        *(int *)((int)register0x00000054 + -0x68) = iVar2;
        *(undefined4 *)(iVar2 + iVar4 * 8) = uVar8;
        *(undefined1 **)((int)register0x00000054 + -0xcc) =
             (undefined1 *)((int)register0x00000054 + -0x38);
        FUN_000919c8();
        iVar2 = *(int *)((int)register0x00000054 + -0x68);
        uVar3 = *(uint *)((int)register0x00000054 + -0xa4);
        iVar4 = *(int *)((int)register0x00000054 + -0xa8);
      }
      *(int *)((int)register0x00000054 + -0xa8) = iVar4;
      *(int *)((int)register0x00000054 + -8) = iVar2;
      FUN_000908bc();
      iVar2 = *DAT_0047fe2c;
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)((int)register0x00000054 + -0xcc);
      if (iVar2 == 0) {
        if (*DAT_0047fe28 != 0) {
          uVar7 = FUN_0009db54(*DAT_0047fe2c);
          *unaff_r8 = uVar7;
        }
        iVar2 = DAT_0047fe10;
        *DAT_0047fe2c = DAT_0047fe10;
      }
      k3c_internal_pkg_chelper__Cfunc_get_monotonic(iVar2);
      uVar12 = *(undefined8 *)((int)register0x00000054 + -0xcc);
      *(undefined8 *)((int)register0x00000054 + -0x7c) = uVar12;
      iVar2 = 0;
LAB_0047f874:
      if (*(int *)((int)register0x00000054 + -0xa8) <= iVar2) {
        FUN_000908bc();
        *(undefined4 *)((int)register0x00000054 + -0x70) =
             *(undefined4 *)((int)register0x00000054 + -0xcc);
        *(undefined8 *)((int)register0x00000054 + -0x94) =
             *(undefined8 *)((int)register0x00000054 + -0x7c);
        *(undefined4 *)((int)register0x00000054 + -0xcc) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        *(undefined4 *)((int)register0x00000054 + -200) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
        FUN_0008f6c0();
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0xc4);
        *(undefined4 *)((int)register0x00000054 + -0xcc) = DAT_0047fe18;
        *(undefined4 *)((int)register0x00000054 + -200) =
             *(undefined4 *)((int)register0x00000054 + -0x70);
        *(undefined4 *)((int)register0x00000054 + -0xc4) = DAT_0047fe48;
        *(undefined4 *)((int)register0x00000054 + -0xc0) = 9;
        FUN_00093a08();
        puVar6 = *(undefined4 **)((int)register0x00000054 + -0xbc);
        *puVar6 = DAT_0047fe38;
        if (*DAT_0047fe28 == 0) {
          uVar7 = *(undefined4 *)((int)register0x00000054 + -4);
        }
        else {
          puVar6 = (undefined4 *)FUN_0009db64();
          uVar7 = *(undefined4 *)((int)register0x00000054 + -4);
          *unaff_r8 = uVar7;
          unaff_r8[1] = puVar6[1];
        }
        puVar6[1] = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0xcc) = DAT_0047fe18;
        *(undefined4 *)((int)register0x00000054 + -200) =
             *(undefined4 *)((int)register0x00000054 + -0x70);
        *(undefined4 *)((int)register0x00000054 + -0xc4) = DAT_0047fe4c;
        *(undefined4 *)((int)register0x00000054 + -0xc0) = 6;
        FUN_00093a08();
        uVar12 = CONCAT44(DAT_0047fe18,*(undefined4 **)((int)register0x00000054 + -0xbc));
        **(undefined4 **)((int)register0x00000054 + -0xbc) = DAT_0047fe18;
        if (*DAT_0047fe28 == 0) {
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0x74);
        }
        else {
          uVar12 = FUN_0009db64();
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0x74);
          *unaff_r8 = uVar7;
          unaff_r8[1] = *(undefined4 *)((int)uVar12 + 4);
        }
        *(undefined4 *)((int)uVar12 + 4) = uVar7;
        iVar2 = *(int *)((int)register0x00000054 + 8);
        if (*(int *)(iVar2 + 0x18) == 0) {
          *(int *)(iVar2 + 0x18) = (int)((ulonglong)uVar12 >> 0x20);
          if (*DAT_0047fe28 == 0) {
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x70);
          }
          else {
            iVar2 = FUN_0009db64();
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x70);
            *unaff_r8 = uVar7;
            unaff_r8[1] = *(undefined4 *)(iVar2 + 0x1c);
          }
          *(undefined4 *)(iVar2 + 0x1c) = uVar7;
        }
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        return;
      }
      *(int *)((int)register0x00000054 + -0x80) = iVar2;
      uVar7 = *(undefined4 *)(*(int *)((int)register0x00000054 + -8) + iVar2 * 8);
      *(undefined4 *)((int)register0x00000054 + -100) = uVar7;
      uVar8 = *(undefined4 *)(*(int *)((int)register0x00000054 + -8) + iVar2 * 8 + 4);
      *(undefined4 *)((int)register0x00000054 + -0xa0) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0xcc) =
           **(undefined4 **)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -200) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0xc4) = uVar8;
      *(undefined4 *)((int)register0x00000054 + -0xc0) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xbc) = 0;
      k3c_internal_pkg_printer___Printer__Lookup_object((int)uVar12);
      if (*(int *)((int)register0x00000054 + -0xb8) == 0) {
        *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xcc) =
             *(undefined4 *)((int)register0x00000054 + -100);
        *(undefined4 *)((int)register0x00000054 + -200) =
             *(undefined4 *)((int)register0x00000054 + -0xa0);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_0047fe14;
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + -0xc4);
        *(undefined4 *)((int)register0x00000054 + -0xcc) = DAT_0047fe44;
        *(undefined4 *)((int)register0x00000054 + -200) = 0x14;
        *(undefined1 **)((int)register0x00000054 + -0xc4) =
             (undefined1 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0xc0) = 1;
        *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
        FUN_001386c4();
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0xb8);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0xb4);
        return;
      }
      *(int *)((int)register0x00000054 + -0xcc) = *(int *)((int)register0x00000054 + -0xb8);
      *(undefined4 *)((int)register0x00000054 + -200) =
           *(undefined4 *)((int)register0x00000054 + -0xb4);
      *(undefined4 *)((int)register0x00000054 + -0xc4) = DAT_0047fe30;
      *(undefined4 *)((int)register0x00000054 + -0xc0) = 10;
      k3c_common_utils_reflects_GetMethod();
      iVar2 = *(int *)((int)register0x00000054 + -0xbc);
      uVar12 = CONCAT44(DAT_0047fe34,iVar2);
      if (iVar2 == 0) goto LAB_0047fb58;
      uVar10 = iVar2 == DAT_0047fe34;
      if (!(bool)uVar10) goto LAB_0047fde4;
      iVar2 = *(int *)((int)register0x00000054 + -0xb8);
      *(int *)((int)register0x00000054 + -0x60) = iVar2;
      uVar3 = *(uint *)(iVar2 + 8);
      uVar5 = uVar3 & 0x1f;
      *(uint *)((int)register0x00000054 + -0x84) = uVar5;
      piVar1 = *(int **)(iVar2 + 4);
      if (0x14 < uVar5) {
        if (0x16 < uVar5) {
          if (uVar5 == 0x17) goto LAB_0047f954;
          uVar10 = uVar5 == 0x1a;
          if (!(bool)uVar10) goto LAB_0047fdac;
        }
LAB_0047f970:
        if ((uVar3 & 0x200) == 0) {
          if ((uVar3 & 0x80) != 0) {
            piVar1 = (int *)*piVar1;
          }
          bVar11 = false;
          if (piVar1 != (int *)0x0) {
            bVar11 = true;
          }
          goto LAB_0047f990;
        }
LAB_0047f998:
        *(undefined8 *)((int)register0x00000054 + -0x8c) =
             *(undefined8 *)((int)register0x00000054 + -0x7c);
        *(undefined4 *)((int)register0x00000054 + -0xcc) =
             *(undefined4 *)((int)register0x00000054 + -0x8c);
        *(undefined4 *)((int)register0x00000054 + -200) =
             *(undefined4 *)((int)register0x00000054 + -0x88);
        FUN_0008f6c0();
        uVar7 = *(undefined4 *)((int)register0x00000054 + -0xc4);
        *(undefined4 *)((int)register0x00000054 + -0x54) = DAT_0047fe38;
        *(undefined4 *)((int)register0x00000054 + -0x50) = uVar7;
        iVar2 = *(int *)((int)register0x00000054 + -0x54);
        if (iVar2 == 0) {
          uVar3 = 0;
          iVar2 = 0;
          uVar7 = 0;
        }
        else {
          uVar3 = *(byte *)(iVar2 + 0xf) & 0x1f;
          if ((*(byte *)(iVar2 + 0xf) & 0x20) == 0) {
            uVar3 = uVar3 | 0x80;
          }
        }
        *(uint *)((int)register0x00000054 + -0x44) = uVar3;
        *(int *)((int)register0x00000054 + -0x4c) = iVar2;
        *(undefined4 *)((int)register0x00000054 + -0x48) = uVar7;
        puVar6 = *(undefined4 **)((int)register0x00000054 + -0x60);
        uVar8 = puVar6[1];
        uVar7 = puVar6[2];
        *(undefined4 *)((int)register0x00000054 + -0xcc) = *puVar6;
        *(undefined4 *)((int)register0x00000054 + -200) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0xc4) = uVar7;
        *(undefined1 **)((int)register0x00000054 + -0xc0) =
             (undefined1 *)((int)register0x00000054 + -0x4c);
        *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
        *(undefined4 *)((int)register0x00000054 + -0xb8) = 1;
        FUN_000d659c();
        if (*(int *)((int)register0x00000054 + -0xb0) != 1) {
          *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + -100);
          *(undefined4 *)((int)register0x00000054 + -200) =
               *(undefined4 *)((int)register0x00000054 + -0xa0);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_0047fe14;
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0xc4);
          *(undefined4 *)((int)register0x00000054 + -0xcc) = DAT_0047fe3c;
          *(undefined4 *)((int)register0x00000054 + -200) = 0x39;
          *(undefined1 **)((int)register0x00000054 + -0xc4) =
               (undefined1 *)((int)register0x00000054 + -0x40);
          *(undefined4 *)((int)register0x00000054 + -0xc0) = 1;
          *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
          FUN_001386c4();
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0xb8);
          *(undefined4 *)((int)register0x00000054 + 0x18) =
               *(undefined4 *)((int)register0x00000054 + -0xb4);
          return;
        }
        puVar6 = *(undefined4 **)((int)register0x00000054 + -0xb4);
        uVar8 = puVar6[1];
        uVar7 = puVar6[2];
        *(undefined4 *)((int)register0x00000054 + -0xcc) = *puVar6;
        *(undefined4 *)((int)register0x00000054 + -200) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0xc4) = uVar7;
        *(undefined1 *)((int)register0x00000054 + -0xc0) = 1;
        FUN_000e70e8();
        *(undefined4 *)((int)register0x00000054 + -0x98) =
             *(undefined4 *)((int)register0x00000054 + -0xbc);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0xb8);
        *(undefined4 *)((int)register0x00000054 + -0xcc) = DAT_0047fe18;
        *(undefined4 *)((int)register0x00000054 + -200) =
             *(undefined4 *)((int)register0x00000054 + -0x74);
        *(undefined4 *)((int)register0x00000054 + -0xc4) =
             *(undefined4 *)((int)register0x00000054 + -100);
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + -0xa0);
        FUN_00093a08();
        puVar6 = *(undefined4 **)((int)register0x00000054 + -0xbc);
        *puVar6 = *(undefined4 *)((int)register0x00000054 + -0x98);
        if (*DAT_0047fe28 == 0) {
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0x58);
        }
        else {
          puVar6 = (undefined4 *)FUN_0009db64();
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0x58);
          *unaff_r8 = uVar7;
          unaff_r8[1] = puVar6[1];
        }
        puVar6[1] = uVar7;
        iVar2 = *(int *)((int)register0x00000054 + -0x80) + 1;
        uVar12 = *(undefined8 *)((int)register0x00000054 + -0x7c);
        goto LAB_0047f874;
      }
      if (uVar5 - 0x12 < 2) goto LAB_0047f970;
      if (uVar5 == 0x14) {
LAB_0047f954:
        bVar11 = *piVar1 != 0;
LAB_0047f990:
        if (!bVar11) {
LAB_0047fb58:
          *(undefined4 *)((int)register0x00000054 + -0x40) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + -100);
          *(undefined4 *)((int)register0x00000054 + -200) =
               *(undefined4 *)((int)register0x00000054 + -0xa0);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_0047fe14;
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + -0xc4);
          *(undefined4 *)((int)register0x00000054 + -0xcc) = DAT_0047fe40;
          *(undefined4 *)((int)register0x00000054 + -200) = 0x26;
          *(undefined1 **)((int)register0x00000054 + -0xc4) =
               (undefined1 *)((int)register0x00000054 + -0x40);
          *(undefined4 *)((int)register0x00000054 + -0xc0) = 1;
          *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
          FUN_001386c4();
          *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0xb8);
          *(undefined4 *)((int)register0x00000054 + 0x18) =
               *(undefined4 *)((int)register0x00000054 + -0xb4);
          return;
        }
        goto LAB_0047f998;
      }
      uVar10 = false;
LAB_0047fdac:
      *(undefined4 *)((int)register0x00000054 + -0xcc) = DAT_0047fe50;
      FUN_00022cf8();
      puVar6 = *(undefined4 **)((int)register0x00000054 + -200);
      puVar6[1] = 0x13;
      *puVar6 = DAT_0047fe54;
      puVar6[2] = *(undefined4 *)((int)register0x00000054 + -0x84);
      *(undefined4 *)((int)register0x00000054 + -0xcc) = DAT_0047fe58;
      *(undefined4 **)((int)register0x00000054 + -200) = puVar6;
      uVar12 = FUN_00095b00();
LAB_0047fde4:
      *(undefined8 *)((int)register0x00000054 + -0xcc) = uVar12;
      *(undefined4 *)((int)register0x00000054 + -0xc4) = DAT_0047fe5c;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xd0);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x47fe04;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/web.Add_early_printer_objects_webhooks @ 0047fe60 (size 112) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_web_Add_early_printer_objects_webhooks(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x47fecc;
    FUN_0009bf64();
  }
  k3c_internal_pkg_web_NewWebHooks();
  k3c_internal_pkg_printer___Printer__Add_object();
  k3c_internal_pkg_web_NewGCodeHelper();
  k3c_internal_pkg_web_NewQueryStatusHelper();
                    /* WARNING: Could not recover jumptable at 0x0047fec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/web.MustLookupWebhooks @ 0047fedc (size 200) */

void k3c_internal_pkg_web_MustLookupWebhooks(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined **)((int)register0x00000054 + -0x28) =
           PTR_s_webhooksresponsesignal__truncate_008216f7_0x1055_0047ffa8;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 8;
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0047ffac;
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_0047ffb0;
      k3c_internal_pkg_printer___Printer__Lookup_object();
      if (*(undefined **)((int)register0x00000054 + -0x18) == PTR_DAT_0047ffb4) {
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0047ffb8;
      *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0047ffbc;
      *(undefined **)((int)register0x00000054 + -8) =
           *(undefined **)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0047ffc0;
      *(undefined4 *)((int)register0x00000054 + -0x28) = 0x22;
      *(undefined1 **)((int)register0x00000054 + -0x24) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x20) = 2;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = 2;
      FUN_001386c4();
      bVar3 = *(int *)((int)register0x00000054 + -0x18) == 0;
      uVar1 = 0;
      if (!bVar3) {
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x18) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x28) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x47ffa0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/web.NewAPIDumpHelper.func1 @ 0047ffc4 (size 4) */

void k3c_internal_pkg_web_NewAPIDumpHelper_func1(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0047ffc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/web.(*WebHooks).Register_endpoint @ 0047ffd4 (size 304) */

/* WARNING: Removing unreachable block (ram,0x00480034) */

void k3c_internal_pkg_web___WebHooks__Register_endpoint(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  bool bVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      piVar3 = *(int **)(unaff_r10 + 0x10);
      if ((piVar3 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar3)) {
        *piVar3 = (int)((int)register0x00000054 + -0x2c);
      }
      bVar6 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar6) {
        FUN_0009e2f0(param_1,*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + -0x14));
        *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_00480108;
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x20) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00093560();
        if (*(char *)((int)register0x00000054 + -0x18) == '\0') {
          *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_00480108;
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x20) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          FUN_00093a08();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x1c);
          if (*(int *)PTR_DAT_00480118 == 0) {
            uVar4 = *(undefined4 *)((int)register0x00000054 + 0x10);
          }
          else {
            puVar1 = (undefined4 *)FUN_0009db64();
            uVar4 = *(undefined4 *)((int)register0x00000054 + 0x10);
            *unaff_r8 = uVar4;
            unaff_r8[1] = *puVar1;
          }
          *puVar1 = uVar4;
          puVar2 = (undefined *)0x0;
          puVar1 = (undefined4 *)0x0;
        }
        else {
          *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0048010c;
          FUN_00022cf8();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0x28);
          puVar1[1] = 0x26;
          *puVar1 = PTR_DAT_00480110;
          puVar2 = PTR_DAT_00480114;
        }
        *(undefined **)((int)register0x00000054 + 0x14) = puVar2;
        *(undefined4 **)((int)register0x00000054 + 0x18) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x004800d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x30))();
        return;
      }
      param_1 = FUN_0001f190();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if (bVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x4800e4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/web.(*QueryStatusHelper)._handle_list-fm @ 0048011c (size 812) */

void k3c_internal_pkg_web___QueryStatusHelper___handle_list_fm(void)

{
  int *piVar1;
  int iVar2;
  int *extraout_r2;
  int *piVar3;
  int *extraout_r2_00;
  int *piVar4;
  int *extraout_r3;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int unaff_r7;
  int *unaff_r8;
  int unaff_r10;
  undefined8 uVar10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int *piStack_88;
  int *piStack_84;
  int *piStack_80;
  undefined4 uStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  int *piStack_6c;
  int iStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int iStack_4c;
  int iStack_48;
  int *piStack_44;
  int iStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  int iStack_30;
  int *piStack_2c;
  undefined1 auStack_c [12];
  
  while (auStack_c <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&piStack_88;
  }
  FUN_0009dee4(0,&iStack_30,*(undefined4 *)(**(int **)(unaff_r7 + 4) + 0x28));
  piStack_88 = DAT_0048044c;
  piStack_80 = &iStack_30;
  piStack_84 = extraout_r2;
  FUN_00091764();
  piVar1 = (int *)0x0;
  piVar4 = (int *)0x0;
  piVar3 = (int *)0x0;
  while (iStack_30 != 0) {
    piVar3 = (int *)((int)piVar3 + 1);
    iVar2 = *piStack_2c;
    iVar9 = piStack_2c[1];
    if (piVar4 < piVar3) {
      uStack_7c = 1;
      piStack_78 = DAT_00480450;
      piStack_88 = piVar1;
      piStack_84 = piVar3;
      piStack_80 = piVar4;
      iStack_64 = *piStack_2c;
      iStack_48 = piStack_2c[1];
      FUN_000987f4();
      piVar1 = piStack_74;
      piVar4 = piStack_6c;
      piVar3 = piStack_70;
      iVar2 = iStack_64;
      iVar9 = iStack_48;
    }
    iVar6 = (int)piVar3 + -1;
    piVar1[iVar6 * 2] = iVar2;
    piStack_54 = piVar3;
    piStack_50 = piVar4;
    piStack_3c = piVar1;
    if (*DAT_00480454 != 0) {
      FUN_0009db64();
      *unaff_r8 = iVar9;
      unaff_r8[1] = piVar1[iVar6 * 2 + 1];
    }
    piVar1[iVar6 * 2 + 1] = iVar9;
    piStack_88 = &iStack_30;
    FUN_000919c8();
    piVar1 = piStack_3c;
    piVar4 = piStack_50;
    piVar3 = piStack_54;
  }
  piVar4 = (int *)0x0;
  piVar5 = (int *)0x0;
  piVar7 = (int *)0x0;
  iVar2 = 0;
  piStack_54 = piVar3;
  piStack_34 = piVar1;
  while (piStack_60 = piVar7, piStack_5c = piVar4, piStack_44 = piVar5, iVar2 < (int)piVar3) {
    piStack_58 = (int *)piVar1[iVar2 * 2];
    iStack_40 = piVar1[iVar2 * 2 + 1];
    iStack_4c = iVar2;
    if (piStack_58 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piStack_88 = DAT_00480458;
      piStack_84 = piStack_58;
      FUN_00020dac();
      piVar1 = piStack_34;
      piVar3 = piStack_54;
      piVar8 = piStack_80;
    }
    uVar10 = CONCAT44(iStack_4c,piVar1);
    piVar4 = piStack_5c;
    piVar5 = piStack_44;
    piVar7 = piStack_60;
    unaff_r8 = piStack_58;
    if (piVar8 != (int *)0x0) {
      piVar7 = (int *)((int)piStack_60 + 1);
      if (piStack_5c < piVar7) {
        uStack_7c = 1;
        piStack_78 = DAT_00480450;
        piStack_88 = piStack_44;
        piStack_84 = piVar7;
        piStack_80 = piStack_5c;
        FUN_000987f4();
        piVar1 = piStack_34;
        piVar3 = piStack_54;
        piVar4 = piStack_6c;
        piVar5 = piStack_74;
        piVar7 = piStack_70;
      }
      iVar2 = iStack_40;
      uVar10 = CONCAT44(iStack_4c,piVar1);
      iVar9 = (int)piVar7 + -1;
      piVar5[iVar9 * 2] = (int)piStack_58;
      unaff_r8 = (int *)*DAT_00480454;
      if (unaff_r8 != (int *)0x0) {
        uVar10 = FUN_0009db64();
        *unaff_r8 = iVar2;
        unaff_r8[1] = piVar5[iVar9 * 2 + 1];
        piVar3 = extraout_r2_00;
        piVar4 = extraout_r3;
      }
      piVar5[iVar9 * 2 + 1] = iVar2;
    }
    piVar1 = (int *)uVar10;
    iVar2 = (int)((ulonglong)uVar10 >> 0x20) + 1;
  }
  FUN_000908bc();
  piStack_84 = piStack_88;
  piStack_38 = piStack_88;
  piStack_88 = DAT_0048045c;
  piStack_80 = (int *)DAT_00480460;
  uStack_7c = 7;
  FUN_00093a08();
  piStack_78[1] = (int)piStack_60;
  piStack_78[2] = (int)piStack_5c;
  piVar1 = piStack_78;
  if (*DAT_00480454 != 0) {
    piVar1 = (int *)FUN_0009db64();
    *unaff_r8 = (int)piStack_44;
    unaff_r8[1] = *piVar1;
  }
  *piVar1 = (int)piStack_44;
  if (*(int *)(in_stack_00000004 + 0x18) == 0) {
    *(int **)(in_stack_00000004 + 0x18) = DAT_0048045c;
    if (*DAT_00480454 != 0) {
      in_stack_00000004 = FUN_0009db64();
      *unaff_r8 = (int)piStack_38;
      unaff_r8[1] = *(int *)(in_stack_00000004 + 0x1c);
    }
    *(int **)(in_stack_00000004 + 0x1c) = piStack_38;
  }
  return;
}



/* k3c/internal/pkg/web.(*QueryStatusHelper)._handle_query-fm @ 00480464 (size 132) */

void k3c_internal_pkg_web___QueryStatusHelper___handle_query_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_1c;
  }
  uStack_1c = *(undefined4 *)(unaff_r7 + 4);
  uStack_18 = in_stack_00000004;
  uStack_14 = 0;
  k3c_internal_pkg_web___QueryStatusHelper__handle_query();
  return;
}



/* k3c/internal/pkg/web.(*QueryStatusHelper)._handle_subscribe-fm @ 004804e8 (size 124) */

void k3c_internal_pkg_web___QueryStatusHelper___handle_subscribe_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_1c;
  }
  uStack_1c = *(undefined4 *)(unaff_r7 + 4);
  uStack_18 = in_stack_00000004;
  uStack_14 = 1;
  k3c_internal_pkg_web___QueryStatusHelper__handle_query();
  return;
}



/* k3c/internal/pkg/web.(*QueryStatusHelper)._handle_object_query-fm @ 00480564 (size 124) */

void k3c_internal_pkg_web___QueryStatusHelper___handle_object_query_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_18;
  }
  uStack_18 = *(undefined4 *)(unaff_r7 + 4);
  uStack_14 = in_stack_00000004;
  k3c_internal_pkg_web___QueryStatusHelper___handle_object_query();
  return;
}



/* k3c/internal/pkg/web.(*QueryStatusHelper)._do_query-fm @ 00480644 (size 100) */

void k3c_internal_pkg_web___QueryStatusHelper___do_query_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
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
  k3c_internal_pkg_web___QueryStatusHelper___do_query();
  return;
}



/* k3c/internal/pkg/web.(*ClientConnection).Send-fm @ 004806a8 (size 100) */

void k3c_internal_pkg_web___ClientConnection__Send_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_c;
  }
  uStack_c = *(undefined4 *)(unaff_r7 + 4);
  uStack_8 = in_stack_00000004;
  uStack_4 = in_stack_00000008;
  k3c_internal_pkg_web___ClientConnection__Send();
  return;
}



/* k3c/internal/pkg/web.(*GCodeHelper)._handle_help-fm @ 0048070c (size 168) */

void k3c_internal_pkg_web___GCodeHelper___handle_help_fm(void)

{
  int *piVar1;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar2;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)register0x00000054;
  }
  if (*(int *)(in_stack_00000004 + 0x18) == 0) {
    uVar2 = CONCAT44(*(undefined4 *)(*(int *)(*(int *)(unaff_r7 + 4) + 4) + 0x34),in_stack_00000004)
    ;
    *(undefined4 *)(in_stack_00000004 + 0x18) = DAT_004807b8;
    if (*DAT_004807bc != 0) {
      uVar2 = FUN_0009db64();
      *unaff_r8 = (int)((ulonglong)uVar2 >> 0x20);
      unaff_r8[1] = *(undefined4 *)((int)uVar2 + 0x1c);
    }
    *(int *)((int)uVar2 + 0x1c) = (int)((ulonglong)uVar2 >> 0x20);
  }
  return;
}



/* k3c/internal/pkg/web.(*GCodeHelper)._handle_script-fm @ 004807c0 (size 124) */

void k3c_internal_pkg_web___GCodeHelper___handle_script_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_18;
  }
  uStack_18 = *(undefined4 *)(unaff_r7 + 4);
  uStack_14 = in_stack_00000004;
  k3c_internal_pkg_web___GCodeHelper___handle_script();
  return;
}



/* k3c/internal/pkg/web.(*GCodeHelper)._handle_restart-fm @ 0048083c (size 124) */

void k3c_internal_pkg_web___GCodeHelper___handle_restart_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_18;
  }
  uStack_18 = *(undefined4 *)(unaff_r7 + 4);
  uStack_14 = in_stack_00000004;
  k3c_internal_pkg_web___GCodeHelper___handle_restart();
  return;
}



/* k3c/internal/pkg/web.(*GCodeHelper)._handle_firmware_restart-fm @ 004808b8 (size 124) */

void k3c_internal_pkg_web___GCodeHelper___handle_firmware_restart_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_18;
  }
  uStack_18 = *(undefined4 *)(unaff_r7 + 4);
  uStack_14 = in_stack_00000004;
  k3c_internal_pkg_web___GCodeHelper___handle_firmware_restart();
  return;
}



/* k3c/internal/pkg/web.(*GCodeHelper)._handle_subscribe_output-fm @ 00480934 (size 124) */

void k3c_internal_pkg_web___GCodeHelper___handle_subscribe_output_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_18;
  }
  uStack_18 = *(undefined4 *)(unaff_r7 + 4);
  uStack_14 = in_stack_00000004;
  k3c_internal_pkg_web___GCodeHelper___handle_subscribe_output();
  return;
}



/* k3c/internal/pkg/web.(*GCodeHelper)._output_callback-fm @ 004809b0 (size 100) */

void k3c_internal_pkg_web___GCodeHelper___output_callback_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_c;
  }
  uStack_c = *(undefined4 *)(unaff_r7 + 4);
  uStack_8 = in_stack_00000004;
  uStack_4 = in_stack_00000008;
  k3c_internal_pkg_web___GCodeHelper___output_callback();
  return;
}



/* k3c/internal/pkg/web.(*WebHooks)._handle_list_endpoints-fm @ 00480a14 (size 124) */

void k3c_internal_pkg_web___WebHooks___handle_list_endpoints_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_18;
  }
  uStack_18 = *(undefined4 *)(unaff_r7 + 4);
  uStack_14 = in_stack_00000004;
  k3c_internal_pkg_web___WebHooks___handle_list_endpoints();
  return;
}



/* k3c/internal/pkg/web.(*WebHooks)._handle_info_request-fm @ 00480a90 (size 124) */

void k3c_internal_pkg_web___WebHooks___handle_info_request_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_18;
  }
  uStack_18 = *(undefined4 *)(unaff_r7 + 4);
  uStack_14 = in_stack_00000004;
  k3c_internal_pkg_web___WebHooks___handle_info_request();
  return;
}



/* k3c/internal/pkg/web.(*WebHooks)._handle_estop_request-fm @ 00480b0c (size 128) */

void k3c_internal_pkg_web___WebHooks___handle_estop_request_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_14;
  }
  uStack_14 = **(undefined4 **)(unaff_r7 + 4);
  uStack_10 = DAT_00480b90;
  uStack_c = 0x20;
  k3c_internal_pkg_printer___Printer__Invoke_shutdown();
  return;
}



/* k3c/internal/pkg/web.(*WebHooks)._handle_rpc_registration-fm @ 00480b94 (size 124) */

void k3c_internal_pkg_web___WebHooks___handle_rpc_registration_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_18;
  }
  uStack_18 = *(undefined4 *)(unaff_r7 + 4);
  uStack_14 = in_stack_00000004;
  k3c_internal_pkg_web___WebHooks___handle_rpc_registration();
  return;
}



/* k3c/internal/pkg/web.WebHooks._handle_ready-fm @ 00480c10 (size 244) */

void k3c_internal_pkg_web_WebHooks__handle_ready_fm(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int extraout_r3;
  int unaff_r7;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar3 = *(int **)(unaff_r10 + 0x10);
  if ((piVar3 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar3)) {
    *piVar3 = (int)&puStack_18;
  }
  puStack_18 = DAT_00480d08;
  FUN_00022cf8();
  puVar1 = puStack_14;
  uVar2 = 0;
  if (*DAT_00480d0c != 0) {
    puStack_18 = DAT_00480d08;
    iStack_10 = unaff_r7 + 4;
    uVar2 = FUN_00026c00();
  }
  FUN_0009e2f0(uVar2,unaff_r7 + 4,puStack_14);
  puStack_18 = puStack_14;
  puStack_14 = (undefined4 *)*puStack_14;
  k3c_internal_pkg_web_NewServerSocket();
  if (*DAT_00480d0c != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r3;
    unaff_r8[1] = puVar1[4];
    iStack_10 = extraout_r3;
  }
  puVar1[4] = iStack_10;
  return;
}



/* k3c/internal/pkg/web.(*ClientConnection)._process_received-fm @ 00480d10 (size 108) */

void k3c_internal_pkg_web___ClientConnection___process_received_fm(void)

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
  k3c_internal_pkg_web___ClientConnection___process_received();
  return;
}



/* k3c/internal/pkg/web.(*ClientConnection)._do_send-fm @ 00480d7c (size 108) */

void k3c_internal_pkg_web___ClientConnection___do_send_fm(void)

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
  k3c_internal_pkg_web___ClientConnection___do_send();
  return;
}



/* k3c/internal/pkg/web.(*ServerSocket)._handle_accept-fm @ 00480de8 (size 108) */

void k3c_internal_pkg_web___ServerSocket___handle_accept_fm(void)

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
  k3c_internal_pkg_web___ServerSocket___handle_accept();
  return;
}



/* k3c/internal/pkg/web.(*ServerSocket)._handle_disconnect-fm @ 00480e54 (size 124) */

void k3c_internal_pkg_web___ServerSocket___handle_disconnect_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_18;
  }
  uStack_18 = *(undefined4 *)(unaff_r7 + 4);
  uStack_14 = in_stack_00000004;
  uStack_10 = in_stack_00000008;
  uStack_c = in_stack_0000000c;
  k3c_internal_pkg_web___ServerSocket___handle_disconnect();
  return;
}



/* k3c/internal/pkg/web.(*ServerSocket)._handle_shutdown-fm @ 00480ed0 (size 176) */

void k3c_internal_pkg_web___ServerSocket___handle_shutdown_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int *apiStack_3c [2];
  int *piStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)apiStack_3c;
  }
  FUN_0009dee4(0,&iStack_30,*(undefined4 *)(*(int *)(unaff_r7 + 4) + 0x18));
  apiStack_3c[0] = DAT_00480f84;
  piStack_34 = &iStack_30;
  FUN_00091764();
  while (iStack_30 != 0) {
    apiStack_3c[0] = (int *)*puStack_2c;
    k3c_internal_pkg_web___ClientConnection__dump_request_log();
    apiStack_3c[0] = &iStack_30;
    FUN_000919c8();
  }
  return;
}



/* k3c/internal/pkg/web.(*WebHooks)._handle_mux-fm @ 00480f88 (size 124) */

void k3c_internal_pkg_web___WebHooks___handle_mux_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_18;
  }
  uStack_18 = *(undefined4 *)(unaff_r7 + 4);
  uStack_14 = in_stack_00000004;
  k3c_internal_pkg_web___WebHooks___handle_mux();
  return;
}



/* k3c/internal/pkg/web.(*APIDumpHelper)._update-fm @ 00481004 (size 100) */

void k3c_internal_pkg_web___APIDumpHelper___update_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined8 in_stack_0000000c;
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
  k3c_internal_pkg_web___APIDumpHelper___update();
  return;
}



