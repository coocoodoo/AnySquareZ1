// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/reactor   functions: 56
/* k3c/internal/pkg/reactor.NewReactorGreenlet @ 0044549c (size 444) */

void k3c_internal_pkg_reactor_NewReactorGreenlet(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *extraout_r2;
  int *extraout_r2_00;
  int *extraout_r2_01;
  uint uVar6;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  bool bVar8;
  undefined8 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0044565c;
      FUN_00022cf8();
      iVar2 = *(int *)((int)register0x00000054 + -0x1c);
      if (*DAT_00445660 == 0) {
        iVar1 = *(int *)((int)register0x00000054 + 4);
      }
      else {
        FUN_0009db54();
        iVar1 = *(int *)((int)register0x00000054 + 4);
        *unaff_r8 = iVar1;
        iVar2 = extraout_r1;
      }
      *(int *)((int)register0x00000054 + -4) = iVar2;
      *(int *)(iVar2 + 8) = iVar1;
      *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_00445664;
      *(int *)((int)register0x00000054 + -8) = iVar1;
      iVar2 = *(int *)((int)register0x00000054 + -0xc);
      if (iVar2 == 0) {
        uVar6 = 0;
        iVar2 = 0;
        uVar4 = 0;
      }
      else {
        uVar6 = *(byte *)(iVar2 + 0xf) & 0x1f;
        if ((*(byte *)(iVar2 + 0xf) & 0x20) == 0) {
          uVar6 = uVar6 | 0x80;
        }
        uVar4 = *(undefined4 *)((int)register0x00000054 + -8);
      }
      *(int *)((int)register0x00000054 + -0x20) = iVar2;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar4;
      *(uint *)((int)register0x00000054 + -0x18) = uVar6;
      FUN_000dda6c();
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      FUN_00099f68();
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      FUN_00078304();
      uVar9 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -0x1c),
                       *(int *)((int)register0x00000054 + -0x18));
      piVar5 = *(int **)((int)register0x00000054 + -4);
      piVar5[1] = *(int *)((int)register0x00000054 + -0x18);
      if (*DAT_00445660 != 0) {
        uVar9 = FUN_0009db64();
        *unaff_r8 = (int)((ulonglong)uVar9 >> 0x20);
        unaff_r8[1] = *extraout_r2;
        piVar5 = extraout_r2;
      }
      iVar2 = (int)((ulonglong)uVar9 >> 0x20);
      *piVar5 = iVar2;
      *(int *)((int)register0x00000054 + -0x20) = iVar2;
      *(int *)((int)register0x00000054 + -0x1c) = (int)uVar9;
      *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_00445668;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 1;
      internal_stringslite_Index();
      uVar6 = *(uint *)((int)register0x00000054 + -0x10);
      if (uVar6 == 0xffffffff) {
        piVar5 = *(int **)((int)register0x00000054 + -4);
        goto LAB_00445608;
      }
      piVar5 = *(int **)((int)register0x00000054 + -4);
      uVar3 = piVar5[1];
      bVar8 = uVar6 == uVar3;
      if (uVar6 <= uVar3) {
        piVar5[1] = uVar3 - uVar6;
        iVar2 = *piVar5 + (uVar6 & (int)-(uVar3 - uVar6) >> 0x1f);
        if (*DAT_00445660 != 0) {
          iVar2 = FUN_0009db64();
          *unaff_r8 = iVar2;
          unaff_r8[1] = *extraout_r2_00;
          piVar5 = extraout_r2_00;
        }
        *piVar5 = iVar2;
LAB_00445608:
        piVar5[0x10] = 0;
        piVar5[0xf] = 5;
        if (*DAT_00445660 != 0) {
          iVar2 = FUN_0009db54(piVar5[0xe]);
          *unaff_r8 = iVar2;
          piVar5 = extraout_r2_01;
        }
        piVar5[0xe] = DAT_0044566c;
        *(int **)((int)register0x00000054 + 8) = piVar5;
        return;
      }
      param_1 = FUN_0009dc34();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      if (bVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x445654;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/reactor.(*ReactorGreenlet).goGreenlet @ 00445670 (size 504) */

void k3c_internal_pkg_reactor___ReactorGreenlet__goGreenlet(void)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar3;
  int in_stack_00000004;
  int local_48;
  char local_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_1c = DAT_00445874;
  local_18 = in_stack_00000004;
  local_4 = &local_1c;
  github_com_petermattis_goid_getg(0);
  local_24 = *(undefined4 *)(local_48 + 0x54);
  local_20 = *(undefined4 *)(local_48 + 0x58);
  *(undefined4 *)(in_stack_00000004 + 0x10) = local_24;
  *(undefined4 *)(in_stack_00000004 + 0x14) = local_20;
  FUN_000a8eec();
  if (local_34 == '\0') {
    FUN_0008f6c0();
    uVar2 = DAT_00445880;
    FUN_000a9dd0();
    *(undefined4 *)(in_stack_00000004 + 0x3c) = 3;
    iVar1 = in_stack_00000004;
    if (*DAT_00445884 != 0) {
      uVar3 = FUN_0009db54(*(undefined4 *)(in_stack_00000004 + 0x38));
      iVar1 = (int)((ulonglong)uVar3 >> 0x20);
      *unaff_r8 = (int)uVar3;
    }
    *(undefined4 *)(iVar1 + 0x38) = DAT_00445888;
    if ((*(undefined4 **)(iVar1 + 8) != (undefined4 *)0x0) && (*(char *)(iVar1 + 0x44) == '\0')) {
      (*(code *)**(undefined4 **)(iVar1 + 8))();
      *(undefined4 **)(in_stack_00000004 + 0x30) = &local_24;
      iVar1 = in_stack_00000004;
      if (*DAT_00445884 != 0) {
        FUN_0009db64();
        *unaff_r8 = extraout_r1;
        unaff_r8[1] = *(undefined4 *)(extraout_r2 + 0x34);
        uVar2 = extraout_r1;
        iVar1 = extraout_r2;
      }
      *(undefined4 *)(iVar1 + 0x34) = uVar2;
    }
    (*(code *)*local_4)();
    return;
  }
  FUN_0009df04(0,&local_14);
  local_14 = DAT_0044588c;
  local_10 = DAT_00445890;
  FUN_0008f6c0();
  local_c = DAT_0044587c;
  local_8 = &local_24;
  k3c_internal_pkg_logger_Error();
  (*(code *)*local_4)();
  return;
}



/* k3c/internal/pkg/reactor.(*ReactorGreenlet).goGreenlet.func1 @ 00445894 (size 440) */

void k3c_internal_pkg_reactor___ReactorGreenlet__goGreenlet_func1(void)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int in_stack_ffffffb0;
  undefined4 local_48;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x445a48;
    FUN_0009bf00();
  }
  puVar4 = &stack0x00000004;
  iVar1 = *(int *)(unaff_r7 + 4);
  FUN_00054ee0();
  iVar2 = extraout_r1;
  if ((in_stack_ffffffb0 != 0) && (iVar2 = iVar1, *(char *)(iVar1 + 0x44) == '\0')) {
    FUN_0042debc();
    iVar5 = 0;
    FUN_00099104();
    github_com_petermattis_goid_getg(local_48);
    FUN_0009def4(0,&local_20,*(undefined4 *)(iVar5 + 0x54),*(undefined4 *)(iVar5 + 0x58),unaff_lr,
                 iVar5,puVar4);
    local_20 = DAT_00445a50;
    local_1c = DAT_00445a54;
    FUN_0008f6c0();
    local_18 = DAT_00445a58;
    FUN_0008f77c();
    local_8 = DAT_00445a50;
    k3c_internal_pkg_logger_Error();
  }
  FUN_000aac30(DAT_00445a5c,iVar2);
  FUN_000a9a78();
  *(undefined4 *)(iVar1 + 0x3c) = 3;
  if (*DAT_00445a64 != 0) {
    uVar3 = FUN_0009db54(*(undefined4 *)(iVar1 + 0x38));
    iVar1 = (int)((ulonglong)uVar3 >> 0x20);
    *unaff_r8 = (int)uVar3;
  }
  *(undefined4 *)(iVar1 + 0x38) = DAT_00445a68;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  FUN_000ab080();
  return;
}



/* k3c/internal/pkg/reactor.(*ReactorGreenlet).SwitchTo @ 00445a6c (size 1100) */

void k3c_internal_pkg_reactor___ReactorGreenlet__SwitchTo(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int extraout_r1;
  int iVar6;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined4 extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  undefined8 uVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_00445ebc;
      FUN_000aac30();
      k3c_internal_pkg_reactor_Getcurrent();
      iVar1 = *(int *)((int)register0x00000054 + -0x48);
      if (iVar1 == 0) {
        *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_00445ec0;
        FUN_00022cf8();
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -0x44);
        github_com_petermattis_goid_getg(*(undefined4 *)((int)register0x00000054 + -0x44));
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x48) + 0x54);
        uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x48) + 0x58);
        iVar1 = *(int *)((int)register0x00000054 + -8);
        *(undefined4 *)(iVar1 + 0x10) = uVar5;
        *(undefined4 *)(iVar1 + 0x14) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x48) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x44) = uVar2;
        FUN_0008f6c0();
        *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_00445ec4;
        *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_00445ec8;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = DAT_00445ecc;
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -8);
        FUN_000a9dd0();
        iVar1 = *(int *)((int)register0x00000054 + -8);
        *(undefined4 *)(iVar1 + 0x3c) = 3;
        if (*DAT_00445ed0 != 0) {
          FUN_0009db54(3,iVar1,*(undefined4 *)(iVar1 + 0x38));
          *unaff_r8 = extraout_r2;
          iVar1 = extraout_r1;
        }
        *(undefined4 *)(iVar1 + 0x38) = DAT_00445ed4;
      }
      iVar6 = *(int *)((int)register0x00000054 + 4);
      if (iVar6 == iVar1) {
        *(undefined4 *)((int)register0x00000054 + -0x28) = *(undefined4 *)(iVar6 + 0x30);
        *(undefined4 *)((int)register0x00000054 + -0xc) = *(undefined4 *)(iVar6 + 0x34);
        *(undefined8 *)((int)register0x00000054 + -0x14) =
             *(undefined8 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        FUN_0008f6c0();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x40);
        iVar1 = *(int *)((int)register0x00000054 + 4);
        *(int *)(iVar1 + 0x30) = DAT_00445ed8;
        if (*DAT_00445ed0 != 0) {
          uVar2 = FUN_0009db64();
          *unaff_r8 = uVar2;
          unaff_r8[1] = *(undefined4 *)(extraout_r2_02 + 0x34);
          iVar1 = extraout_r2_02;
        }
        *(undefined4 *)(iVar1 + 0x34) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_00445ebc;
        FUN_000ab080();
        iVar1 = *(int *)((int)register0x00000054 + -0x28);
        if (iVar1 == 0) {
          *(undefined8 *)((int)register0x00000054 + 0x10) = *DAT_00445edc;
          return;
        }
        uVar8 = iVar1 == DAT_00445ed8;
        if ((bool)uVar8) {
          *(undefined8 *)((int)register0x00000054 + 0x10) =
               **(undefined8 **)((int)register0x00000054 + -0xc);
          return;
        }
        *(int *)((int)register0x00000054 + -0x48) = iVar1;
        *(int *)((int)register0x00000054 + -0x44) = DAT_00445ed8;
        *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_00445eec;
        FUN_000209b4();
        iVar1 = extraout_r1_00;
        iVar6 = extraout_r2_03;
LAB_00445e6c:
        *(int *)((int)register0x00000054 + -0x48) = iVar1;
        *(int *)((int)register0x00000054 + -0x44) = iVar6;
        *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_00445eec;
        FUN_000209b4();
LAB_00445e80:
        *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_00445ef0;
        *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_00445ef4;
        FUN_00095b00();
        iVar1 = extraout_r1_01;
        iVar6 = extraout_r2_04;
      }
      else {
        *(int *)((int)register0x00000054 + -8) = iVar1;
        if (iVar6 != 0) {
          if (*(int *)(iVar6 + 0x14) == 0 && *(int *)(iVar6 + 0x10) == 0) {
            *(undefined8 *)((int)register0x00000054 + -0x1c) =
                 *(undefined8 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x48) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x44) =
                 *(undefined4 *)((int)register0x00000054 + -0x18);
            FUN_0008f6c0();
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x40);
            iVar1 = *(int *)((int)register0x00000054 + 4);
            *(int *)(iVar1 + 0x28) = DAT_00445ed8;
            if (*DAT_00445ed0 != 0) {
              uVar2 = FUN_0009db64();
              *unaff_r8 = uVar2;
              unaff_r8[1] = *(undefined4 *)(extraout_r2_00 + 0x2c);
              iVar1 = extraout_r2_00;
            }
            *(undefined4 *)(iVar1 + 0x2c) = uVar2;
            *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_00445ee0;
            FUN_00022cf8();
            puVar3 = *(undefined4 **)((int)register0x00000054 + -0x44);
            *puVar3 = DAT_00445ee4;
            if (*DAT_00445ed0 == 0) {
              uVar2 = *(undefined4 *)((int)register0x00000054 + 4);
            }
            else {
              puVar3 = (undefined4 *)FUN_0009db54();
              uVar2 = *(undefined4 *)((int)register0x00000054 + 4);
              *unaff_r8 = uVar2;
            }
            puVar3[1] = uVar2;
            *(undefined4 **)((int)register0x00000054 + -0x48) = puVar3;
            FUN_00062dd0();
          }
          else {
            *(undefined8 *)((int)register0x00000054 + -0x24) =
                 *(undefined8 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x48) =
                 *(undefined4 *)((int)register0x00000054 + -0x24);
            *(undefined4 *)((int)register0x00000054 + -0x44) =
                 *(undefined4 *)((int)register0x00000054 + -0x20);
            FUN_0008f6c0();
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x40);
            iVar1 = *(int *)((int)register0x00000054 + 4);
            *(int *)(iVar1 + 0x30) = DAT_00445ed8;
            if (*DAT_00445ed0 != 0) {
              uVar2 = FUN_0009db64();
              *unaff_r8 = uVar2;
              unaff_r8[1] = *(undefined4 *)(extraout_r2_01 + 0x34);
              iVar1 = extraout_r2_01;
            }
            *(undefined4 *)(iVar1 + 0x34) = uVar2;
            *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + -1;
            *(int *)((int)register0x00000054 + -0x48) = iVar1 + 0x18;
            *(undefined4 *)((int)register0x00000054 + -0x44) = 0xffffffff;
            FUN_000ac72c();
          }
          iVar1 = *(int *)((int)register0x00000054 + -8);
          iVar6 = *(int *)(iVar1 + 0x40);
          *(int *)((int)register0x00000054 + -4) = iVar1 + 0x18;
          *(int *)(iVar1 + 0x40) = iVar6 + 1;
          *(int *)((int)register0x00000054 + -0x48) = iVar1 + 0x18;
          *(undefined4 *)((int)register0x00000054 + -0x44) = 1;
          FUN_000ac72c();
          iVar1 = *(int *)((int)register0x00000054 + -8);
          *(undefined4 *)(iVar1 + 0x3c) = 4;
          if (*DAT_00445ed0 != 0) {
            uVar9 = FUN_0009db54(*(undefined4 *)(iVar1 + 0x38));
            iVar1 = (int)((ulonglong)uVar9 >> 0x20);
            *unaff_r8 = (int)uVar9;
          }
          *(undefined4 *)(iVar1 + 0x38) = DAT_00445ee8;
          *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_00445ebc;
          FUN_000ab080();
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + -4);
          FUN_000ac8e0();
          iVar4 = *(int *)((int)register0x00000054 + -8);
          uVar8 = 0;
          if (*(char *)(iVar4 + 0x44) == '\0') {
            *(undefined4 *)(iVar4 + 0x3c) = 3;
            if (*DAT_00445ed0 != 0) {
              uVar9 = FUN_0009db54(iVar4,*(undefined4 *)(iVar4 + 0x38));
              iVar4 = (int)uVar9;
              *unaff_r8 = (int)((ulonglong)uVar9 >> 0x20);
            }
            *(undefined4 *)(iVar4 + 0x38) = DAT_00445ed4;
            iVar1 = *(int *)(iVar4 + 0x30);
            if (iVar1 == 0) {
              *(undefined8 *)((int)register0x00000054 + 0x10) = *DAT_00445edc;
              return;
            }
            uVar8 = 0;
            iVar6 = DAT_00445ed8;
            if (iVar1 == DAT_00445ed8) {
              *(undefined8 *)((int)register0x00000054 + 0x10) = **(undefined8 **)(iVar4 + 0x34);
              return;
            }
            goto LAB_00445e6c;
          }
          goto LAB_00445e80;
        }
        *(undefined4 *)((int)register0x00000054 + -0x48) = DAT_00445ebc;
        FUN_000ab080();
        iVar1 = *(int *)(*(int *)((int)register0x00000054 + -8) + 0x30);
        if (iVar1 == 0) {
          *(undefined8 *)((int)register0x00000054 + 0x10) = *DAT_00445edc;
          return;
        }
        uVar8 = 0;
        iVar6 = DAT_00445ed8;
        if (iVar1 == DAT_00445ed8) {
          *(undefined8 *)((int)register0x00000054 + 0x10) =
               **(undefined8 **)(*(int *)((int)register0x00000054 + -8) + 0x34);
          return;
        }
      }
      *(int *)((int)register0x00000054 + -0x48) = iVar1;
      *(int *)((int)register0x00000054 + -0x44) = iVar6;
      *(undefined4 *)((int)register0x00000054 + -0x40) = DAT_00445eec;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x4c);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x445eb4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/reactor.(*ReactorGreenlet).SwitchTo.gowrap1 @ 00445ef8 (size 84) */

void k3c_internal_pkg_reactor___ReactorGreenlet__SwitchTo_gowrap1(void)

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
  k3c_internal_pkg_reactor___ReactorGreenlet__goGreenlet();
  return;
}



/* k3c/internal/pkg/reactor.(*ReactorGreenlet).Switch @ 00445f4c (size 44) */

void k3c_internal_pkg_reactor___ReactorGreenlet__Switch(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x445f74;
    FUN_0009bf64();
  }
  k3c_internal_pkg_reactor___ReactorGreenlet__goGreenlet();
                    /* WARNING: Could not recover jumptable at 0x00445f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/reactor.Getcurrent @ 00445f78 (size 160) */

void k3c_internal_pkg_reactor_Getcurrent(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      github_com_petermattis_goid_getg(param_1);
      uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x20) + 0x58);
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + -0x20) + 0x54);
      *(undefined4 *)((int)register0x00000054 + -4) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x20) = DAT_0044601c;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_00446020;
      *(undefined1 **)((int)register0x00000054 + -0x18) =
           (undefined1 *)((int)register0x00000054 + -8);
      FUN_000a8eec();
      if (*(char *)((int)register0x00000054 + -0xc) == '\0') {
        *(undefined4 *)((int)register0x00000054 + 4) = 0;
        return;
      }
      bVar3 = *(int *)((int)register0x00000054 + -0x14) == DAT_00446024;
      if (bVar3) {
        *(undefined4 *)((int)register0x00000054 + 4) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        return;
      }
      *(int *)((int)register0x00000054 + -0x20) = *(int *)((int)register0x00000054 + -0x14);
      *(int *)((int)register0x00000054 + -0x1c) = DAT_00446024;
      *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_00446028;
      unaff_lr = 0x446008;
      uVar4 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x446014;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/reactor.(*Poll).poll @ 0044602c (size 408) */

void k3c_internal_pkg_reactor___Poll__poll(void)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int unaff_r10;
  int *in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  uint local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  
  while (iVar3 = in_stack_00000008, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  for (iVar4 = in_stack_00000004[1]; 0 < iVar4; iVar4 = iVar4 + -1) {
  }
  golang_org_x_sys_unix_Poll();
  if (0 < (int)local_34) {
    FUN_000986b8();
    iVar5 = *in_stack_00000004;
    iVar4 = in_stack_00000004[1];
    uVar7 = 0;
    for (iVar6 = 0; iVar6 < iVar4; iVar6 = iVar6 + 1) {
      iVar8 = iVar5 + iVar6 * 8;
      sVar1 = *(short *)(iVar8 + 6);
      uVar9 = *(undefined4 *)(iVar5 + iVar6 * 8);
      uVar2 = *(undefined2 *)(iVar8 + 4);
      if (sVar1 != 0) {
        uVar7 = uVar7 + 1;
        if (local_34 < uVar7) {
          FUN_000987f4();
          iVar3 = local_30;
          local_34 = local_28;
          uVar7 = local_2c;
        }
        *(undefined4 *)(iVar3 + (uVar7 - 1) * 8) = uVar9;
        iVar8 = iVar3 + (uVar7 - 1) * 8;
        *(undefined2 *)(iVar8 + 4) = uVar2;
        *(short *)(iVar8 + 6) = sVar1;
      }
    }
    return;
  }
  return;
}



/* k3c/internal/pkg/reactor.(*ReactorTimer).SetCheckStall @ 004461cc (size 16) */

void k3c_internal_pkg_reactor___ReactorTimer__SetCheckStall(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 in_stack_00000008;
  
  *(undefined1 *)(in_stack_00000004 + 0x14) = in_stack_00000008;
                    /* WARNING: Could not recover jumptable at 0x004461d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/reactor.NewReactorCompletion @ 004461dc (size 352) */

void k3c_internal_pkg_reactor_NewReactorCompletion(void)

{
  undefined4 uVar1;
  undefined4 *extraout_r1;
  undefined4 *puVar2;
  undefined4 *extraout_r1_00;
  uint uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  bool bVar4;
  undefined8 uVar5;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_40;
  undefined4 *local_3c;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  undefined1 auStack_18 [20];
  int local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_40 = DAT_00446340;
  FUN_00022cf8();
  puVar2 = local_3c;
  if (*DAT_00446344 != 0) {
    FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
    puVar2 = extraout_r1;
  }
  puVar2[2] = in_stack_00000004;
  *puVar2 = DAT_00446348;
  uVar5 = CONCAT44(puVar2,DAT_0044634c);
  puVar2[1] = DAT_0044634c;
  puVar2[3] = *puVar2;
  if (*DAT_00446344 != 0) {
    uVar5 = FUN_0009db54();
    *unaff_r8 = (int)uVar5;
  }
  local_4 = (int)((ulonglong)uVar5 >> 0x20);
  *(int *)(local_4 + 0x10) = (int)uVar5;
  local_40 = DAT_00446350;
  FUN_00022cf8();
  if (*DAT_00446344 != 0) {
    FUN_0009db74();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = extraout_r1_00;
    unaff_r8[2] = *(undefined4 *)(local_4 + 0x14);
    local_3c = extraout_r1_00;
  }
  *local_3c = local_3c;
  local_3c[1] = local_3c;
  local_3c[5] = 0;
  *(undefined4 **)(local_4 + 0x14) = local_3c;
  uVar1 = FUN_001160a8();
  uVar1 = FUN_0009e2f0(uVar1,&local_40,auStack_18);
  FUN_0009e2f0(uVar1,auStack_18,&local_2c);
  if ((local_28 & 0x80000000) != 0) {
    uVar3 = (local_2c & 0x7fffffff) >> 0x1e | (local_2c >> 0x1f | local_28 << 1) << 1;
    local_24 = uVar3 + DAT_00446354;
    local_20 = ((local_28 & 0x7fffffff) >> 0x1e) + 0xd + (uint)CARRY4(uVar3,DAT_00446354);
  }
  bVar4 = CARRY4(local_24,DAT_00446358);
  *(uint *)(local_4 + 0x18) = local_24 + DAT_00446358;
  *(uint *)(local_4 + 0x1c) = local_20 + -0xf + (uint)bVar4;
  return;
}



/* k3c/internal/pkg/reactor.(*ReactorCompletion).Test @ 0044635c (size 96) */

void k3c_internal_pkg_reactor___ReactorCompletion__Test(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  byte in_stack_00000008;
  byte bStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4463b8;
    FUN_0009bf64();
  }
  if (in_stack_00000004[3] == *in_stack_00000004) {
    FUN_00019a3c();
    in_stack_00000008 = bStack_4 ^ 1;
  }
  else {
    in_stack_00000008 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x004463ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/reactor.(*ReactorCompletion).Complete @ 004463bc (size 268) */

void k3c_internal_pkg_reactor___ReactorCompletion__Complete(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  bool bVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      iVar4 = *(int *)((int)register0x00000054 + 4);
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)((int)register0x00000054 + 8);
      if (*DAT_004464cc == 0) {
        uVar2 = *(undefined4 *)((int)register0x00000054 + 0xc);
      }
      else {
        FUN_0009db64();
        uVar2 = *(undefined4 *)((int)register0x00000054 + 0xc);
        *unaff_r8 = uVar2;
        unaff_r8[1] = *(undefined4 *)(extraout_r1 + 0x10);
        iVar4 = extraout_r1;
      }
      *(undefined4 *)(iVar4 + 0x10) = uVar2;
      if ((*(int **)(iVar4 + 0x14))[5] == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)**(int **)(iVar4 + 0x14);
      }
      while( true ) {
        if (piVar3 == (int *)0x0) {
          return;
        }
        bVar7 = piVar3[3] == DAT_004464d0;
        if (!bVar7) break;
        if ((piVar3[4] != 0) && (iVar5 = *(int *)(piVar3[4] + 0xc), iVar5 != 0)) {
          *(int **)((int)register0x00000054 + -4) = piVar3;
          *(undefined4 *)((int)register0x00000054 + -0x14) = *(undefined4 *)(iVar4 + 8);
          *(int *)((int)register0x00000054 + -0x10) = iVar5;
          *(undefined8 *)((int)register0x00000054 + -0xc) = 0;
          k3c_internal_pkg_reactor___Reactor__UpdateCritTimer();
          piVar3 = *(int **)((int)register0x00000054 + -4);
          iVar4 = *(int *)((int)register0x00000054 + 4);
        }
        piVar1 = piVar3 + 2;
        if ((*piVar1 == 0) || (piVar3 = (int *)*piVar3, (int *)*piVar1 == piVar3)) {
          piVar3 = (int *)0x0;
        }
      }
      *(int *)((int)register0x00000054 + -0x14) = piVar3[3];
      *(int *)((int)register0x00000054 + -0x10) = DAT_004464d0;
      *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_004464d4;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      if (bVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x4464c4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/reactor.(*ReactorCompletion).Wait @ 004464d8 (size 744) */

void k3c_internal_pkg_reactor___ReactorCompletion__Wait(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *extraout_r1;
  int iVar4;
  int iVar5;
  int *extraout_r2;
  int *extraout_r2_00;
  int extraout_r3;
  int *extraout_r3_00;
  int extraout_r3_01;
  int *unaff_r8;
  int unaff_r10;
  undefined8 uVar6;
  int *in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  char local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  iVar2 = in_stack_00000004[3];
  if (iVar2 == *in_stack_00000004) {
    iVar5 = in_stack_00000004[4];
    FUN_00019a3c();
    if (local_18 != '\0') {
      k3c_internal_pkg_reactor_Getcurrent();
      piVar3 = (int *)in_stack_00000004[5];
      if (*piVar3 == 0) {
        if (*DAT_004467c4 != 0) {
          FUN_0009db84(in_stack_00000004);
          *unaff_r8 = (int)extraout_r1;
          unaff_r8[1] = *extraout_r1;
          unaff_r8[2] = (int)extraout_r1;
          unaff_r8[3] = extraout_r1[1];
          piVar3 = extraout_r1;
        }
        *piVar3 = (int)piVar3;
        piVar3[1] = (int)piVar3;
        piVar3[5] = 0;
      }
      piVar1 = (int *)piVar3[1];
      FUN_00022cf8();
      *(undefined4 *)(iVar5 + 0xc) = DAT_004467cc;
      if (*DAT_004467c4 != 0) {
        iVar5 = FUN_0009db54();
        *unaff_r8 = iVar2;
      }
      *(int *)(iVar5 + 0x10) = iVar2;
      if (*DAT_004467c4 != 0) {
        iVar5 = FUN_0009db54();
        *unaff_r8 = (int)piVar1;
      }
      uVar6 = CONCAT44(piVar1,iVar5);
      *(int **)(iVar5 + 4) = piVar1;
      iVar2 = *piVar1;
      if (*DAT_004467c4 != 0) {
        uVar6 = FUN_0009db74();
        *unaff_r8 = extraout_r3;
        unaff_r8[1] = (int)uVar6;
        unaff_r8[2] = *(int *)((ulonglong)uVar6 >> 0x20);
        iVar2 = extraout_r3;
      }
      piVar1 = (int *)uVar6;
      *piVar1 = iVar2;
      *(undefined4 *)((ulonglong)uVar6 >> 0x20) = piVar1;
      uVar6 = CONCAT44(*piVar1,piVar1);
      if (*DAT_004467c4 != 0) {
        uVar6 = FUN_0009db84();
        *unaff_r8 = (int)uVar6;
        unaff_r8[1] = *(int *)((int)((ulonglong)uVar6 >> 0x20) + 4);
        unaff_r8[2] = (int)piVar3;
        unaff_r8[3] = *(int *)((int)uVar6 + 8);
      }
      piVar1 = (int *)uVar6;
      *(int **)((int)((ulonglong)uVar6 >> 0x20) + 4) = piVar1;
      piVar1[2] = (int)piVar3;
      piVar3[5] = piVar3[5] + 1;
      k3c_internal_pkg_reactor___Reactor__Pause();
      uVar6 = CONCAT44(in_stack_00000004[5],in_stack_00000004);
      piVar3 = in_stack_00000004;
      if (piVar1[2] == in_stack_00000004[5]) {
        piVar3 = (int *)piVar1[1];
        iVar2 = *piVar1;
        if (*DAT_004467c4 != 0) {
          uVar6 = FUN_0009db64();
          *unaff_r8 = iVar2;
          unaff_r8[1] = *extraout_r3_00;
          piVar1 = extraout_r2;
          piVar3 = extraout_r3_00;
        }
        *piVar3 = iVar2;
        iVar2 = *piVar1;
        iVar5 = piVar1[1];
        if (*DAT_004467c4 != 0) {
          uVar6 = FUN_0009db94();
          *unaff_r8 = iVar5;
          unaff_r8[1] = *(int *)(extraout_r3_01 + 4);
          unaff_r8[2] = *extraout_r2_00;
          unaff_r8[3] = extraout_r2_00[1];
          unaff_r8[4] = extraout_r2_00[2];
          piVar1 = extraout_r2_00;
          iVar2 = extraout_r3_01;
        }
        iVar4 = (int)((ulonglong)uVar6 >> 0x20);
        piVar3 = (int *)uVar6;
        *(int *)(iVar2 + 4) = iVar5;
        *piVar1 = 0;
        piVar1[1] = 0;
        piVar1[2] = 0;
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + -1;
      }
      if ((piVar3[3] == *piVar3) && (FUN_00019a3c(), local_18 != '\0')) {
        return;
      }
    }
  }
  return;
}



/* k3c/internal/pkg/reactor.NewReactorCallback @ 004467d0 (size 324) */

void k3c_internal_pkg_reactor_NewReactorCallback(void)

{
  undefined4 *extraout_r1;
  undefined4 *puVar1;
  undefined4 extraout_r1_00;
  undefined4 *extraout_r1_01;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined8 in_stack_0000000c;
  undefined4 in_stack_00000014;
  undefined4 *local_14;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  puVar1 = local_14;
  if (*DAT_0044691c != 0) {
    FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
    puVar1 = extraout_r1;
  }
  *puVar1 = in_stack_00000004;
  FUN_00022cf8();
  *local_14 = DAT_00446924;
  if (*DAT_0044691c != 0) {
    local_14 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = puVar1;
  }
  local_14[1] = puVar1;
  k3c_internal_pkg_reactor___Reactor__Register_timer();
  if (*DAT_0044691c != 0) {
    FUN_0009db84();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = puVar1[1];
    unaff_r8[2] = in_stack_00000008;
    unaff_r8[3] = puVar1[2];
    local_8 = extraout_r1_00;
  }
  puVar1[1] = local_8;
  puVar1[2] = in_stack_00000008;
  k3c_internal_pkg_reactor_NewReactorCompletion();
  if (*DAT_0044691c != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_01;
    unaff_r8[1] = puVar1[3];
    local_14 = extraout_r1_01;
  }
  puVar1[3] = local_14;
  return;
}



/* k3c/internal/pkg/reactor.(*ReactorCallback).invoke @ 00446928 (size 424) */

void k3c_internal_pkg_reactor___ReactorCallback__invoke(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_r2;
  int iVar5;
  uint uVar6;
  int iVar7;
  int extraout_r3;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar11;
  int *in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 local_34;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  puVar3 = (undefined4 *)in_stack_00000004[1];
  piVar1 = *(int **)(*in_stack_00000004 + 0x2c);
  *(undefined8 *)(puVar3 + 1) = *DAT_00446ad4;
  uVar6 = piVar1[1];
  FUN_000986b8();
  iVar4 = *piVar1;
  iVar7 = piVar1[1];
  uVar10 = 0;
  piVar2 = piVar1;
  iVar5 = iVar4;
  iVar8 = iVar7;
  for (iVar9 = 0; uVar11 = CONCAT44(piVar2,local_34), iVar9 < iVar8; iVar9 = iVar9 + 1) {
    unaff_r8 = *(undefined4 **)(iVar5 + iVar9 * 4);
    if (unaff_r8 != puVar3) {
      uVar10 = uVar10 + 1;
      if (uVar6 < uVar10) {
        FUN_000987f4();
        local_34 = local_2c;
        piVar2 = piVar1;
        iVar5 = iVar4;
        iVar8 = iVar7;
        uVar6 = local_24;
        uVar10 = local_28;
      }
      uVar11 = CONCAT44(piVar2,local_34);
      if (*DAT_00446adc != 0) {
        uVar11 = FUN_0009db64();
        *unaff_r8 = unaff_r8;
        unaff_r8[1] = *(undefined4 *)((int)uVar11 + (uVar10 - 1) * 4);
        iVar5 = extraout_r2;
        iVar8 = extraout_r3;
      }
      *(undefined4 **)((int)uVar11 + (uVar10 - 1) * 4) = unaff_r8;
    }
    piVar2 = (int *)((ulonglong)uVar11 >> 0x20);
    local_34 = (undefined4)uVar11;
  }
  piVar2[1] = uVar10;
  piVar2[2] = uVar6;
  if (*DAT_00446adc != 0) {
    uVar11 = FUN_0009db64();
    *unaff_r8 = (int)uVar11;
    unaff_r8[1] = *(undefined4 *)((ulonglong)uVar11 >> 0x20);
  }
  *(undefined4 *)((ulonglong)uVar11 >> 0x20) = (int)uVar11;
  k3c_internal_pkg_reactor___ReactorCallback__invoke1();
  k3c_internal_pkg_reactor___ReactorCompletion__Complete();
  return;
}



/* k3c/internal/pkg/reactor.(*ReactorCallback).invoke1 @ 00446ae0 (size 132) */

void k3c_internal_pkg_reactor___ReactorCallback__invoke1(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined8 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  (*(code *)**(undefined4 **)(in_stack_00000004 + 8))();
  k3c_internal_pkg_util_sys_CatchPanic();
  return;
}



/* k3c/internal/pkg/reactor.(*ReactorMutex).Test @ 00446b74 (size 16) */

void k3c_internal_pkg_reactor___ReactorMutex__Test(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x00446b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/reactor.(*ReactorMutex).Lock @ 00446b84 (size 456) */

void k3c_internal_pkg_reactor___ReactorMutex__Lock(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int extraout_r1;
  uint uVar3;
  uint extraout_r2;
  int iVar4;
  int extraout_r2_00;
  int extraout_r2_01;
  int iVar5;
  int extraout_r3;
  int extraout_r3_00;
  int iVar6;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = unaff_lr;
      if (**(char **)((int)register0x00000054 + 4) == '\0') {
        **(char **)((int)register0x00000054 + 4) = '\x01';
                    /* WARNING: Could not recover jumptable at 0x00446c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x2c))();
        return;
      }
      k3c_internal_pkg_reactor_Getcurrent();
      iVar1 = *(int *)((int)register0x00000054 + 4);
      uVar2 = *(uint *)(iVar1 + 0x14);
      uVar3 = *(int *)(iVar1 + 0x10) + 1;
      iVar5 = *(int *)((int)register0x00000054 + -0x28);
      *(int *)((int)register0x00000054 + -4) = iVar5;
      iVar6 = *(int *)(iVar1 + 0xc);
      if (uVar2 < uVar3) {
        *(int *)((int)register0x00000054 + -0x28) = iVar6;
        *(uint *)((int)register0x00000054 + -0x24) = uVar3;
        *(uint *)((int)register0x00000054 + -0x20) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_00446d50;
        FUN_000987f4();
        iVar6 = *(int *)((int)register0x00000054 + -0x14);
        uVar3 = *(uint *)((int)register0x00000054 + -0x10);
        iVar1 = *(int *)((int)register0x00000054 + 4);
        *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((int)register0x00000054 + -0xc);
        if (*DAT_00446d54 != 0) {
          FUN_0009db64();
          *unaff_r8 = extraout_r1;
          unaff_r8[1] = *(int *)(extraout_r3 + 0xc);
          iVar6 = extraout_r1;
          uVar3 = extraout_r2;
          iVar1 = extraout_r3;
        }
        *(int *)(iVar1 + 0xc) = iVar6;
        iVar5 = *(int *)((int)register0x00000054 + -4);
      }
      *(uint *)(iVar1 + 0x10) = uVar3;
      iVar4 = uVar3 - 1;
      if (*DAT_00446d54 != 0) {
        iVar1 = FUN_0009db64();
        *unaff_r8 = extraout_r3_00;
        unaff_r8[1] = *(int *)(iVar6 + extraout_r2_00 * 4);
        iVar4 = extraout_r2_00;
        iVar5 = extraout_r3_00;
      }
      *(int *)(iVar6 + iVar4 * 4) = iVar5;
      do {
        do {
          *(undefined4 *)((int)register0x00000054 + -0x28) = *(undefined4 *)(iVar1 + 4);
          *(undefined8 *)((int)register0x00000054 + -0x24) = *DAT_00446d58;
          k3c_internal_pkg_reactor___Reactor__Pause();
          iVar1 = *(int *)((int)register0x00000054 + 4);
        } while (*(char *)(iVar1 + 8) == '\0');
        uVar8 = 1;
        if (*(int *)(iVar1 + 0x10) == 0) goto LAB_00446d30;
      } while (**(int **)(iVar1 + 0xc) != *(int *)((int)register0x00000054 + -4));
      *(undefined1 *)(iVar1 + 8) = 0;
      iVar6 = *(int *)(iVar1 + 0x10);
      uVar8 = iVar6 == 1;
      if (iVar6 != 0) {
        iVar5 = *(int *)(iVar1 + 0x14);
        *(int *)(iVar1 + 0x10) = iVar6 + -1;
        *(int *)(iVar1 + 0x14) = iVar5 + -1;
        iVar6 = *(int *)(iVar1 + 0xc) + (1 - iVar5 >> 0x1f & 4U);
        if (*DAT_00446d54 != 0) {
          iVar1 = FUN_0009db64();
          *unaff_r8 = extraout_r2_01;
          unaff_r8[1] = *(int *)(iVar1 + 0xc);
          iVar6 = extraout_r2_01;
        }
        *(int *)(iVar1 + 0xc) = iVar6;
        return;
      }
      FUN_0009dc34(1,0);
LAB_00446d30:
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x2c);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x446d48;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/reactor.(*ReactorMutex).Unlock @ 00446d5c (size 144) */

void k3c_internal_pkg_reactor___ReactorMutex__Unlock(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int unaff_r10;
  undefined1 *puVar3;
  undefined4 unaff_lr;
  bool bVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar3 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      puVar2 = *(undefined1 **)((int)register0x00000054 + 4);
      if (*(int *)(puVar2 + 0x10) == 0) {
        *puVar2 = 0;
                    /* WARNING: Could not recover jumptable at 0x00446dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x14))();
        return;
      }
      puVar2[8] = 1;
      bVar4 = *(int *)(puVar2 + 0x10) == 0;
      if (!bVar4) {
        iVar1 = *(int *)(**(int **)(puVar2 + 0xc) + 0xc);
        if (iVar1 != 0) {
          *(undefined4 *)((int)register0x00000054 + -0x10) = *(undefined4 *)(puVar2 + 4);
          *(int *)((int)register0x00000054 + -0xc) = iVar1;
          *(undefined8 *)((int)register0x00000054 + -8) = 0;
          k3c_internal_pkg_reactor___Reactor__UpdateCritTimer();
        }
        return;
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if (bVar4) {
        register0x00000054 = (BADSPACEBASE *)puVar3;
      }
    }
    unaff_lr = 0x446de8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/reactor.(*TimerGroup).register_timer @ 00446dec (size 664) */

void k3c_internal_pkg_reactor___TimerGroup__register_timer(undefined4 param_1)

{
  uint uVar1;
  int *extraout_r1;
  int *extraout_r1_00;
  int *piVar2;
  uint uVar3;
  int extraout_r2;
  int iVar4;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  double dVar5;
  int *in_stack_00000004;
  int in_stack_00000008;
  double in_stack_0000000c;
  undefined4 in_stack_00000014;
  undefined8 local_54;
  undefined8 local_4c;
  int iStack_48;
  uint local_44;
  int iStack_40;
  uint local_3c;
  uint local_38;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_0009bf64();
  }
  dVar5 = in_stack_0000000c;
  if (in_stack_0000000c <= 0.0) {
    k3c_internal_pkg_chelper__Cfunc_get_monotonic(param_1);
    dVar5 = local_54;
  }
  FUN_00022cf8();
  if (*DAT_0044708c != 0) {
    FUN_0009db54();
    *unaff_r8 = in_stack_00000008;
    local_54._4_4_ = extraout_r1;
  }
  *local_54._4_4_ = in_stack_00000008;
  *(double *)(local_54._4_4_ + 1) = dVar5;
  *(undefined1 *)(local_54._4_4_ + 5) = 1;
  uVar3 = in_stack_00000004[1] + 1;
  FUN_000986b8();
  local_44 = in_stack_00000004[1];
  uVar1 = local_44;
  if (uVar3 < local_44) {
    FUN_000987f4();
    uVar1 = local_3c;
    iStack_48 = iStack_40;
    uVar3 = local_38;
  }
  FUN_00093f5c();
  uVar1 = uVar1 + 1;
  if (uVar3 < uVar1) {
    local_44 = DAT_00447090;
    FUN_000987f4();
    uVar1 = local_3c;
    iStack_48 = iStack_40;
    uVar3 = local_38;
  }
  iVar4 = uVar1 - 1;
  if (*DAT_0044708c != 0) {
    uVar1 = FUN_0009db64();
    *unaff_r8 = (int)local_54._4_4_;
    unaff_r8[1] = *(int *)(extraout_r2 + extraout_r3 * 4);
    iStack_48 = extraout_r2;
    iVar4 = extraout_r3;
  }
  *(int **)(iStack_48 + iVar4 * 4) = local_54._4_4_;
  FUN_0008f820();
  FUN_0018939c();
  in_stack_00000004[1] = uVar1;
  in_stack_00000004[2] = uVar3;
  piVar2 = in_stack_00000004;
  if (*DAT_0044708c != 0) {
    FUN_0009db64();
    *unaff_r8 = iStack_48;
    unaff_r8[1] = *extraout_r1_00;
    piVar2 = extraout_r1_00;
  }
  *piVar2 = iStack_48;
  FUN_000afda8();
  *(ulonglong *)(in_stack_00000004 + 3) = CONCAT44(iStack_40,local_44);
  return;
}



/* k3c/internal/pkg/reactor.(*TimerGroup).register_timer.func1 @ 0044709c (size 112) */

void k3c_internal_pkg_reactor___TimerGroup__register_timer_func1(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_r7;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  undefined1 uVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_lr;
      uVar3 = *(uint *)(unaff_r7 + 8);
      uVar1 = *(uint *)((int)register0x00000054 + 4);
      uVar5 = uVar1 == uVar3;
      if (uVar1 < uVar3) {
        uVar2 = *(uint *)((int)register0x00000054 + 8);
        uVar5 = uVar2 == uVar3;
        if (uVar2 < uVar3) {
          *(bool *)((int)register0x00000054 + 0xc) =
               *(double *)(*(int *)(*(int *)(unaff_r7 + 4) + uVar1 * 4) + 4) <
               *(double *)(*(int *)(*(int *)(unaff_r7 + 4) + uVar2 * 4) + 4);
          return;
        }
        FUN_0009dbd4();
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xc);
      if ((bool)uVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x447108;
    param_1 = FUN_0009bf00(param_1);
  } while( true );
}



/* k3c/internal/pkg/reactor.(*TimerGroup).update_timer @ 0044710c (size 356) */

void k3c_internal_pkg_reactor___TimerGroup__update_timer(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *extraout_r1;
  undefined4 *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  double dVar5;
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  double in_stack_0000000c;
  double local_3c;
  undefined8 local_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  uint local_24;
  uint local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_0009bf64();
  }
  dVar5 = in_stack_0000000c;
  if (in_stack_0000000c <= 0.0) {
    k3c_internal_pkg_chelper__Cfunc_get_monotonic(param_1);
    dVar5 = local_3c;
  }
  *(double *)(in_stack_00000008 + 4) = dVar5;
  uVar1 = in_stack_00000004[1];
  FUN_000986b8();
  uVar2 = in_stack_00000004[1];
  uVar3 = uVar2;
  if (uVar1 < uVar2) {
    FUN_000987f4();
    uVar3 = local_24;
    uStack_30 = uStack_28;
    uVar1 = local_20;
  }
  FUN_00093f5c();
  in_stack_00000004[1] = uVar3;
  in_stack_00000004[2] = uVar1;
  puVar4 = in_stack_00000004;
  if (*DAT_00447278 != 0) {
    FUN_0009db64();
    *unaff_r8 = uStack_30;
    unaff_r8[1] = *extraout_r1;
    puVar4 = extraout_r1;
  }
  *puVar4 = uStack_30;
  FUN_000afda8();
  *(ulonglong *)(in_stack_00000004 + 3) = CONCAT44(uStack_28,uVar2);
  return;
}



/* k3c/internal/pkg/reactor.(*TimerGroup)._check_timers @ 0044727c (size 332) */

void k3c_internal_pkg_reactor___TimerGroup___check_timers(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined8 uVar6;
  double dVar7;
  int *in_stack_00000004;
  double in_stack_00000008;
  undefined8 in_stack_00000014;
  double local_2c;
  undefined8 local_24;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4473c4;
    FUN_0009bf64();
  }
  uVar6 = *DAT_004473cc;
  *(undefined8 *)(in_stack_00000004 + 3) = uVar6;
  iVar1 = *(int *)(in_stack_00000004[5] + 0x18);
  iVar2 = in_stack_00000004[1];
  iVar3 = *in_stack_00000004;
  iVar4 = 0;
  do {
    if (iVar2 <= iVar4) {
      return;
    }
    puVar5 = *(undefined4 **)(iVar3 + iVar4 * 4);
    dVar7 = *(double *)(puVar5 + 1);
    if (dVar7 <= in_stack_00000008) {
      *(undefined8 *)(puVar5 + 1) = uVar6;
      (**(code **)*puVar5)(*(code **)*puVar5,iVar1,iVar2,iVar3,unaff_lr,in_stack_00000008);
      *(double *)(puVar5 + 1) = local_2c;
      if (*(int *)(in_stack_00000004[5] + 0x18) != iVar1) {
        FUN_000afda8();
        *(undefined8 *)(in_stack_00000004 + 3) = local_24;
        k3c_internal_pkg_reactor___Reactor___end_greenlet();
        return;
      }
    }
    iVar4 = iVar4 + 1;
    FUN_000afda8();
    *(undefined8 *)(in_stack_00000004 + 3) = local_24;
    uVar6 = *DAT_004473cc;
    local_2c = dVar7;
  } while( true );
}



/* k3c/internal/pkg/reactor.NewReactor @ 004473d0 (size 740) */

void k3c_internal_pkg_reactor_NewReactor(void)

{
  undefined4 *puVar1;
  undefined4 *extraout_r1;
  undefined *extraout_r1_00;
  undefined *puVar2;
  undefined4 *extraout_r2;
  undefined4 *puVar3;
  undefined4 *extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 *puStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x4476b0;
    FUN_0009bf64();
  }
  puVar2 = PTR_DAT_004476b8;
  FUN_00022cf8();
  k3c_internal_pkg_chelper__Cfunc_get_monotonic();
  *(ulonglong *)(puStack_10 + 1) = CONCAT44(puStack_10,puVar2);
  FUN_00022cf8();
  *puStack_10 = PTR_DAT_004476c0;
  *(undefined8 *)(puStack_10 + 3) = *(undefined8 *)PTR_DAT_004476c4;
  puVar1 = puStack_10;
  if (*(int *)PTR_DAT_004476c8 != 0) {
    puVar1 = (undefined4 *)FUN_0009db74();
    *unaff_r8 = puStack_10;
    unaff_r8[1] = puVar1;
    unaff_r8[2] = puStack_10[0xc];
  }
  puVar1[5] = puStack_10;
  puStack_10[0xc] = puVar1;
  puVar2 = PTR_DAT_004476bc;
  FUN_00022cf8();
  *puStack_10 = PTR_DAT_004476c0;
  *(undefined8 *)(puStack_10 + 3) = *(undefined8 *)PTR_DAT_004476c4;
  puVar1 = puStack_10;
  if (*(int *)PTR_DAT_004476c8 != 0) {
    puVar1 = (undefined4 *)FUN_0009db74();
    *unaff_r8 = puStack_10;
    unaff_r8[1] = puVar1;
    unaff_r8[2] = puStack_10[0xb];
  }
  puVar1[5] = puStack_10;
  puStack_10[0xb] = puVar1;
  FUN_0009e308(puVar1,PTR_DAT_004476cc,puStack_10 + 3,puStack_10,unaff_lr,puVar2);
  FUN_00022cf8();
  puStack_10[1] = 0;
  *puStack_10 = 0;
  puStack_10[2] = 0;
  FUN_00022cf8();
  puVar1 = puStack_10;
  if (*(int *)PTR_DAT_004476c8 != 0) {
    FUN_0009db74();
    *unaff_r8 = extraout_r3;
    unaff_r8[1] = extraout_r3;
    unaff_r8[2] = *puStack_10;
    puVar1 = extraout_r3;
  }
  *puVar1 = puVar1;
  puVar1[1] = puVar1;
  puVar1[5] = 0;
  *puStack_10 = puVar1;
  FUN_00022cf8();
  puStack_10[1] = PTR_DAT_004476dc;
  puVar1 = puStack_10;
  puVar3 = puStack_10;
  if (*(int *)PTR_DAT_004476c8 != 0) {
    puVar1 = (undefined4 *)FUN_0009db94();
    *unaff_r8 = puVar1;
    unaff_r8[1] = extraout_r2[2];
    unaff_r8[2] = extraout_r2;
    unaff_r8[3] = puStack_10[5];
    unaff_r8[4] = puStack_10[6];
    puVar3 = extraout_r2;
  }
  puVar3[2] = puVar1;
  puStack_10[5] = puVar3;
  puStack_10[6] = 0;
  FUN_00022cf8();
  puVar1 = puStack_10;
  if (*(int *)PTR_DAT_004476c8 != 0) {
    FUN_0009db84();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = extraout_r1;
    unaff_r8[2] = puStack_10[7];
    unaff_r8[3] = puStack_10[8];
    puVar1 = extraout_r1;
  }
  *puVar1 = puVar1;
  puVar1[1] = puVar1;
  puVar1[5] = 0;
  puStack_10[7] = puVar1;
  puStack_10[9] = 0;
  puStack_10[10] = 0;
  puStack_10[8] = PTR_DAT_004476c0;
  puVar2 = PTR_DAT_004476e0;
  FUN_00022cf8();
  *puStack_10 = PTR_DAT_004476c0;
  puVar1 = puStack_10;
  if (*(int *)PTR_DAT_004476c8 != 0) {
    puVar1 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = puStack_10[0xf];
  }
  puStack_10[0xf] = puVar1;
  FUN_000908bc();
  if (*(int *)PTR_DAT_004476c8 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = puStack_10[0x10];
    puVar2 = extraout_r1_00;
  }
  puStack_10[0x10] = puVar2;
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).Update_timer @ 004476e4 (size 104) */

void k3c_internal_pkg_reactor___Reactor__Update_timer(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined8 in_stack_0000000c;
  undefined8 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_reactor___TimerGroup__update_timer();
  FUN_000afda8();
  *(undefined8 *)(in_stack_00000004 + 0x34) = local_8;
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).Register_timer @ 0044774c (size 120) */

void k3c_internal_pkg_reactor___Reactor__Register_timer(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined8 in_stack_0000000c;
  undefined4 in_stack_00000014;
  undefined4 local_c;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_reactor___TimerGroup__register_timer();
  FUN_000afda8();
  *(ulonglong *)(in_stack_00000004 + 0x34) = CONCAT44(uStack_8,local_c);
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).Unregister_timer @ 004477c4 (size 352) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_reactor___Reactor__Unregister_timer(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int extraout_r2;
  int iVar5;
  int iVar6;
  int extraout_r3;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar11;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 uStack_30;
  undefined4 uStack_28;
  uint uStack_24;
  uint uStack_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x447920;
    FUN_0009bf64();
  }
  piVar1 = *(int **)(in_stack_00000004 + 0x2c);
  *(undefined8 *)(in_stack_00000008 + 1) = *_UNK_00447928;
  uVar3 = piVar1[1];
  FUN_000986b8();
  iVar4 = *piVar1;
  iVar6 = piVar1[1];
  uVar10 = 0;
  piVar2 = piVar1;
  iVar5 = iVar4;
  iVar7 = iVar6;
  puVar8 = in_stack_00000008;
  for (iVar9 = 0; uVar11 = CONCAT44(piVar2,uStack_30), iVar9 < iVar7; iVar9 = iVar9 + 1) {
    unaff_r8 = *(undefined4 **)(iVar5 + iVar9 * 4);
    if (puVar8 != unaff_r8) {
      uVar10 = uVar10 + 1;
      if (uVar3 < uVar10) {
        FUN_000987f4();
        uStack_30 = uStack_28;
        piVar2 = piVar1;
        iVar5 = iVar4;
        iVar7 = iVar6;
        puVar8 = in_stack_00000008;
        uVar3 = uStack_20;
        uVar10 = uStack_24;
      }
      uVar11 = CONCAT44(piVar2,uStack_30);
      if (*_UNK_00447930 != 0) {
        uVar11 = FUN_0009db64();
        *unaff_r8 = unaff_r8;
        unaff_r8[1] = *(undefined4 *)((int)uVar11 + (uVar10 - 1) * 4);
        iVar5 = extraout_r2;
        iVar7 = extraout_r3;
      }
      *(undefined4 **)((int)uVar11 + (uVar10 - 1) * 4) = unaff_r8;
    }
    piVar2 = (int *)((ulonglong)uVar11 >> 0x20);
    uStack_30 = (undefined4)uVar11;
  }
  piVar2[1] = uVar10;
  piVar2[2] = uVar3;
  if (*_UNK_00447930 != 0) {
    uVar11 = FUN_0009db64();
    *unaff_r8 = (int)uVar11;
    unaff_r8[1] = *(undefined4 *)((ulonglong)uVar11 >> 0x20);
  }
  *(undefined4 *)((ulonglong)uVar11 >> 0x20) = (int)uVar11;
                    /* WARNING: Could not recover jumptable at 0x00447914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).UpdateCritTimer @ 00447934 (size 104) */

void k3c_internal_pkg_reactor___Reactor__UpdateCritTimer(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined8 in_stack_0000000c;
  undefined8 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_reactor___TimerGroup__update_timer();
  FUN_000afda8();
  *(undefined8 *)(in_stack_00000004 + 0x34) = local_8;
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).RegisterCritTimer @ 0044799c (size 120) */

void k3c_internal_pkg_reactor___Reactor__RegisterCritTimer(void)

{
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined8 in_stack_0000000c;
  undefined4 in_stack_00000014;
  undefined4 local_c;
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_reactor___TimerGroup__register_timer();
  FUN_000afda8();
  *(ulonglong *)(in_stack_00000004 + 0x34) = CONCAT44(uStack_8,local_c);
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).UnregisterCritTimer @ 00447a14 (size 352) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_reactor___Reactor__UnregisterCritTimer(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int extraout_r2;
  int iVar5;
  int iVar6;
  int extraout_r3;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar11;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined4 uStack_30;
  undefined4 uStack_28;
  uint uStack_24;
  uint uStack_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x447b70;
    FUN_0009bf64();
  }
  piVar1 = *(int **)(in_stack_00000004 + 0x30);
  *(undefined8 *)(in_stack_00000008 + 1) = *_UNK_00447b78;
  uVar3 = piVar1[1];
  FUN_000986b8();
  iVar4 = *piVar1;
  iVar6 = piVar1[1];
  uVar10 = 0;
  piVar2 = piVar1;
  iVar5 = iVar4;
  iVar7 = iVar6;
  puVar8 = in_stack_00000008;
  for (iVar9 = 0; uVar11 = CONCAT44(piVar2,uStack_30), iVar9 < iVar7; iVar9 = iVar9 + 1) {
    unaff_r8 = *(undefined4 **)(iVar5 + iVar9 * 4);
    if (puVar8 != unaff_r8) {
      uVar10 = uVar10 + 1;
      if (uVar3 < uVar10) {
        FUN_000987f4();
        uStack_30 = uStack_28;
        piVar2 = piVar1;
        iVar5 = iVar4;
        iVar7 = iVar6;
        puVar8 = in_stack_00000008;
        uVar3 = uStack_20;
        uVar10 = uStack_24;
      }
      uVar11 = CONCAT44(piVar2,uStack_30);
      if (*DAT_00447b80 != 0) {
        uVar11 = FUN_0009db64();
        *unaff_r8 = unaff_r8;
        unaff_r8[1] = *(undefined4 *)((int)uVar11 + (uVar10 - 1) * 4);
        iVar5 = extraout_r2;
        iVar7 = extraout_r3;
      }
      *(undefined4 **)((int)uVar11 + (uVar10 - 1) * 4) = unaff_r8;
    }
    piVar2 = (int *)((ulonglong)uVar11 >> 0x20);
    uStack_30 = (undefined4)uVar11;
  }
  piVar2[1] = uVar10;
  piVar2[2] = uVar3;
  if (*DAT_00447b80 != 0) {
    uVar11 = FUN_0009db64();
    *unaff_r8 = (int)uVar11;
    unaff_r8[1] = *(undefined4 *)((ulonglong)uVar11 >> 0x20);
  }
  *(undefined4 *)((ulonglong)uVar11 >> 0x20) = (int)uVar11;
                    /* WARNING: Could not recover jumptable at 0x00447b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).Running @ 00447b84 (size 16) */

void k3c_internal_pkg_reactor___Reactor__Running(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *in_stack_00000004;
                    /* WARNING: Could not recover jumptable at 0x00447b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor)._check_timers @ 00447b94 (size 264) */

void k3c_internal_pkg_reactor___Reactor___check_timers(void)

{
  undefined4 uVar1;
  int unaff_r10;
  int in_stack_00000004;
  double in_stack_00000008;
  char in_stack_00000010;
  undefined8 in_stack_00000014;
  undefined8 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (*(double *)(in_stack_00000004 + 0x34) <= in_stack_00000008) {
    uVar1 = k3c_internal_pkg_reactor___TimerGroup___check_timers();
    k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar1);
    k3c_internal_pkg_reactor___TimerGroup___check_timers();
    FUN_000afda8();
    *(undefined8 *)(in_stack_00000004 + 0x34) = local_8;
    return;
  }
  if (in_stack_00000010 == '\0') {
    FUN_000afca0();
    FUN_000afda8();
    return;
  }
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).Completion @ 00447ca4 (size 52) */

void k3c_internal_pkg_reactor___Reactor__Completion(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x447cd4;
    FUN_0009bf64();
  }
  k3c_internal_pkg_reactor_NewReactorCompletion();
                    /* WARNING: Could not recover jumptable at 0x00447cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).Register_callback @ 00447cd8 (size 72) */

void k3c_internal_pkg_reactor___Reactor__Register_callback(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined8 in_stack_0000000c;
  undefined4 in_stack_00000014;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x447d1c;
    FUN_0009bf64();
  }
  k3c_internal_pkg_reactor_NewReactorCallback();
  in_stack_00000014 = *(undefined4 *)(uStack_4 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x00447d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor)._sys_pause @ 00447d20 (size 224) */

void k3c_internal_pkg_reactor___Reactor___sys_pause(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  double in_stack_00000008;
  undefined8 in_stack_00000010;
  double local_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_0009bf64();
  }
  uVar1 = k3c_internal_pkg_chelper__Cfunc_get_monotonic(param_1);
  if (0.0 < in_stack_00000008 - local_2c) {
    FUN_0008f6c0();
    k3c_internal_pkg_logger_Infof();
    FUN_0008b890();
    uVar1 = FUN_0009a76c();
  }
  k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar1);
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).Pause @ 00447e10 (size 832) */

/* WARNING: Removing unreachable block (ram,0x00447e94) */

void k3c_internal_pkg_reactor___Reactor__Pause(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int extraout_r1;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *extraout_r2;
  undefined4 *extraout_r2_00;
  uint uVar6;
  uint extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int *piVar7;
  int *extraout_r3;
  int *extraout_r3_00;
  int extraout_r3_01;
  int extraout_r3_02;
  int *piVar8;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  bool bVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x30);
      *(undefined4 *)((int)register0x00000054 + -0x30) = unaff_lr;
      k3c_internal_pkg_reactor_Getcurrent();
      iVar1 = *(int *)((int)register0x00000054 + -0x2c);
      iVar2 = *(int *)((int)register0x00000054 + 4);
      iVar4 = *(int *)(iVar2 + 0x18);
      if (iVar4 != iVar1) {
        if (iVar4 != 0) {
          *(int *)((int)register0x00000054 + -0x2c) = iVar4;
          *(undefined8 *)((int)register0x00000054 + -0x28) =
               *(undefined8 *)((int)register0x00000054 + 8);
          k3c_internal_pkg_reactor___ReactorGreenlet__SwitchTo();
          *(undefined8 *)((int)register0x00000054 + 0x10) =
               *(undefined8 *)((int)register0x00000054 + -0x20);
          return;
        }
        *(int *)((int)register0x00000054 + -0x2c) = iVar2;
        *(undefined8 *)((int)register0x00000054 + -0x28) =
             *(undefined8 *)((int)register0x00000054 + 8);
        k3c_internal_pkg_reactor___Reactor___sys_pause();
        *(undefined8 *)((int)register0x00000054 + 0x10) =
             *(undefined8 *)((int)register0x00000054 + -0x20);
        return;
      }
      *(int *)((int)register0x00000054 + -4) = iVar1;
      puVar5 = *(undefined4 **)(iVar2 + 0x1c);
      if (puVar5[5] == 0) {
        *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_0044815c;
        FUN_00022cf8();
        puVar5 = *(undefined4 **)((int)register0x00000054 + -0x28);
        *puVar5 = DAT_00448160;
        if (*DAT_00448154 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + 4);
        }
        else {
          puVar5 = (undefined4 *)FUN_0009db54();
          iVar1 = *(int *)((int)register0x00000054 + 4);
          *unaff_r8 = iVar1;
        }
        puVar5[1] = iVar1;
        *(undefined4 **)((int)register0x00000054 + -0x2c) = puVar5;
        k3c_internal_pkg_reactor_NewReactorGreenlet();
        iVar4 = *(int *)((int)register0x00000054 + 4);
        uVar3 = *(uint *)(iVar4 + 0x28);
        uVar6 = *(int *)(iVar4 + 0x24) + 1;
        iVar2 = *(int *)((int)register0x00000054 + -0x28);
        iVar1 = *(int *)(iVar4 + 0x20);
        if (uVar3 < uVar6) {
          *(int *)((int)register0x00000054 + -8) = iVar2;
          *(int *)((int)register0x00000054 + -0x2c) = iVar1;
          *(uint *)((int)register0x00000054 + -0x28) = uVar6;
          *(uint *)((int)register0x00000054 + -0x24) = uVar3;
          *(undefined4 *)((int)register0x00000054 + -0x20) = 1;
          *(int *)((int)register0x00000054 + -0x1c) = DAT_00448158;
          FUN_000987f4();
          iVar1 = *(int *)((int)register0x00000054 + -0x18);
          uVar6 = *(uint *)((int)register0x00000054 + -0x14);
          iVar4 = *(int *)((int)register0x00000054 + 4);
          *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)((int)register0x00000054 + -0x10);
          if (*DAT_00448154 != 0) {
            FUN_0009db64();
            *unaff_r8 = extraout_r1;
            unaff_r8[1] = *(int *)(extraout_r3_01 + 0x20);
            iVar1 = extraout_r1;
            uVar6 = extraout_r2_01;
            iVar4 = extraout_r3_01;
          }
          *(int *)(iVar4 + 0x20) = iVar1;
          iVar2 = *(int *)((int)register0x00000054 + -8);
        }
        *(uint *)(iVar4 + 0x24) = uVar6;
        iVar4 = uVar6 - 1;
        if (*DAT_00448154 != 0) {
          FUN_0009db64();
          *unaff_r8 = extraout_r3_02;
          unaff_r8[1] = *(int *)(iVar1 + extraout_r2_02 * 4);
          iVar4 = extraout_r2_02;
          iVar2 = extraout_r3_02;
        }
        *(int *)(iVar1 + iVar4 * 4) = iVar2;
        goto LAB_00448054;
      }
      piVar7 = (int *)*puVar5;
      if ((undefined4 *)piVar7[2] == puVar5) {
        piVar8 = (int *)piVar7[1];
        iVar2 = *piVar7;
        if (*DAT_00448154 != 0) {
          FUN_0009db64(iVar1);
          *unaff_r8 = iVar2;
          unaff_r8[1] = *piVar8;
          puVar5 = extraout_r2;
          piVar7 = extraout_r3;
        }
        *piVar8 = iVar2;
        iVar1 = *piVar7;
        iVar2 = piVar7[1];
        if (*DAT_00448154 != 0) {
          FUN_0009db94();
          *unaff_r8 = iVar2;
          unaff_r8[1] = *(int *)(iVar1 + 4);
          unaff_r8[2] = *extraout_r3_00;
          unaff_r8[3] = extraout_r3_00[1];
          unaff_r8[4] = extraout_r3_00[2];
          puVar5 = extraout_r2_00;
          piVar7 = extraout_r3_00;
        }
        *(int *)(iVar1 + 4) = iVar2;
        *piVar7 = 0;
        piVar7[1] = 0;
        piVar7[2] = 0;
        puVar5[5] = puVar5[5] + -1;
      }
      bVar10 = piVar7[3] == DAT_00448158;
      if (bVar10) {
        iVar2 = piVar7[4];
LAB_00448054:
        *(int *)((int)register0x00000054 + -8) = iVar2;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_00448164;
        FUN_00022cf8();
        puVar5 = *(undefined4 **)((int)register0x00000054 + -0x28);
        *puVar5 = DAT_00448168;
        if (*DAT_00448154 == 0) {
          iVar1 = *(int *)((int)register0x00000054 + -4);
        }
        else {
          puVar5 = (undefined4 *)FUN_0009db54();
          iVar1 = *(int *)((int)register0x00000054 + -4);
          *unaff_r8 = iVar1;
        }
        puVar5[1] = iVar1;
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 **)((int)register0x00000054 + -0x28) = puVar5;
        *(undefined8 *)((int)register0x00000054 + -0x24) =
             *(undefined8 *)((int)register0x00000054 + 8);
        k3c_internal_pkg_reactor___Reactor__RegisterCritTimer();
        iVar2 = *(int *)((int)register0x00000054 + -4);
        iVar1 = *(int *)((int)register0x00000054 + -0x1c);
        if (*DAT_00448154 != 0) {
          iVar2 = FUN_0009db64();
          *unaff_r8 = extraout_r2_03;
          unaff_r8[1] = *(int *)(iVar2 + 0xc);
          iVar1 = extraout_r2_03;
        }
        *(int *)(iVar2 + 0xc) = iVar1;
        *(undefined1 *)(iVar1 + 0x14) = 0;
        iVar1 = *(int *)((int)register0x00000054 + 4);
        *(undefined8 *)(*(int *)(iVar1 + 0x30) + 0xc) = 0;
        *(undefined8 *)(*(int *)(iVar1 + 0x2c) + 0xc) = 0;
        *(undefined8 *)(iVar1 + 0x34) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x2c) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined8 *)((int)register0x00000054 + -0x28) =
             *(undefined8 *)((int)register0x00000054 + 8);
        k3c_internal_pkg_reactor___ReactorGreenlet__SwitchTo();
        *(undefined8 *)((int)register0x00000054 + 0x10) =
             *(undefined8 *)((int)register0x00000054 + -0x20);
        return;
      }
      *(int *)((int)register0x00000054 + -0x2c) = piVar7[3];
      *(int *)((int)register0x00000054 + -0x28) = DAT_00448158;
      *(undefined4 *)((int)register0x00000054 + -0x24) = DAT_0044816c;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x30);
      if (bVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x44814c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/reactor.(*Reactor).End @ 00448170 (size 16) */

void k3c_internal_pkg_reactor___Reactor__End(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
                    /* WARNING: Could not recover jumptable at 0x0044817c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).Monotonic @ 00448180 (size 44) */

void k3c_internal_pkg_reactor___Reactor__Monotonic(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 in_stack_00000008;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4481a8;
    FUN_0009bf64();
  }
  k3c_internal_pkg_chelper__Cfunc_get_monotonic();
                    /* WARNING: Could not recover jumptable at 0x0044819c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor)._setup_async_callbacks @ 004481ac (size 652) */

void k3c_internal_pkg_reactor___Reactor___setup_async_callbacks(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int extraout_r1;
  uint extraout_r2;
  uint uVar4;
  int *extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  int local_40;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int *local_10;
  int local_c;
  undefined *local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  uVar1 = FUN_0009df0c(0,&local_1c);
  FUN_000f8ec8(uVar1);
  if (local_34 != 0) {
    (**(code **)(local_34 + 0xc))();
    local_8 = (undefined *)0x0;
    local_4 = 0;
    FUN_0008f77c();
    local_8 = PTR_DAT_0044843c;
    local_4 = 2;
    k3c_internal_pkg_logger_Error();
  }
  *(undefined4 *)(in_stack_00000004 + 0xc) = local_1c;
  *(undefined4 *)(in_stack_00000004 + 0x10) = local_18;
  golang_org_x_sys_unix_SetNonblock();
  local_40 = 1;
  golang_org_x_sys_unix_SetNonblock();
  FUN_00022cf8();
  puRam00000001 = PTR_k3c_internal_pkg_reactor___Reactor___got_pipe_signal_fm_00448444;
  local_c = local_40;
  if (*(int *)PTR_DAT_00448448 != 0) {
    local_c = FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
  }
  *(int *)(local_c + 4) = in_stack_00000004;
  FUN_00022cf8(local_c);
  puRam00000001 = (undefined *)local_1c;
  if (*(int *)PTR_DAT_00448448 != 0) {
    local_40 = FUN_0009db54();
    *unaff_r8 = local_c;
  }
  *(int *)(local_40 + 4) = local_c;
  *(undefined4 *)(local_40 + 8) = 0;
  local_14 = local_40;
  FUN_00092908();
  piVar2 = (int *)0x0;
  if (*(int *)PTR_DAT_00448448 != 0) {
    piVar2 = (int *)FUN_0009db64();
    *unaff_r8 = local_14;
    unaff_r8[1] = *piVar2;
  }
  *piVar2 = local_14;
  local_10 = *(int **)(in_stack_00000004 + 0x3c);
  uVar4 = local_10[1] + 1U;
  iVar3 = *local_10;
  if ((uint)local_10[2] < local_10[1] + 1U) {
    FUN_000987f4();
    local_10[2] = local_28;
    if (*(int *)PTR_DAT_00448448 != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *extraout_r3;
      local_30 = extraout_r1;
      local_2c = extraout_r2;
      local_10 = extraout_r3;
    }
    *local_10 = local_30;
    uVar4 = local_2c;
    iVar3 = local_30;
  }
  local_10[1] = uVar4;
  *(undefined4 *)(iVar3 + (uVar4 - 1) * 8) = local_1c;
  iVar3 = iVar3 + (uVar4 - 1) * 8;
  *(undefined2 *)(iVar3 + 4) = 0x11;
  *(undefined2 *)(iVar3 + 6) = 0;
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).Register_async_callback @ 00448458 (size 292) */

void k3c_internal_pkg_reactor___Reactor__Register_async_callback(void)

{
  undefined4 *extraout_r2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined8 in_stack_0000000c;
  undefined4 *local_28;
  undefined4 local_24;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *local_28 = DAT_00448584;
  local_28[1] = DAT_00448588;
  local_28[2] = DAT_0044858c;
  if (*DAT_00448590 != 0) {
    local_28 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = in_stack_00000008;
  }
  local_28[3] = in_stack_00000008;
  FUN_0008f6c0();
  local_28[4] = DAT_00448594;
  if (*DAT_00448590 != 0) {
    local_24 = FUN_0009db64();
    *unaff_r8 = local_24;
    unaff_r8[1] = extraout_r2[5];
    local_28 = extraout_r2;
  }
  local_28[5] = local_24;
  FUN_0008f820();
  k3c_common_core___Queue__Put_nowait();
  FUN_000fd318();
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).Async_complete @ 0044859c (size 232) */

void k3c_internal_pkg_reactor___Reactor__Async_complete(void)

{
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *local_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *local_1c = DAT_0044868c;
  local_1c[1] = DAT_00448690;
  local_1c[2] = DAT_00448694;
  if (*DAT_00448698 != 0) {
    local_1c = (undefined4 *)FUN_0009db64();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = in_stack_0000000c;
  }
  local_1c[3] = in_stack_00000008;
  local_1c[4] = DAT_0044869c;
  local_1c[5] = in_stack_0000000c;
  FUN_0008f820();
  k3c_common_core___Queue__Put_nowait();
  FUN_000fd318();
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).Async_wait_complete @ 004486a4 (size 276) */

void k3c_internal_pkg_reactor___Reactor__Async_wait_complete(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + 4);
      k3c_internal_pkg_reactor_NewReactorCompletion();
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_004487bc;
      FUN_00022cf8();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0x1c);
      *puVar1 = PTR_k3c_internal_pkg_reactor___Reactor__Async_wait_complete_func1_004487c0;
      if (*(int *)PTR_DAT_004487c4 == 0) {
        uVar2 = *(undefined4 *)((int)register0x00000054 + 8);
        uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
      }
      else {
        puVar1 = (undefined4 *)FUN_0009db64();
        uVar2 = *(undefined4 *)((int)register0x00000054 + 8);
        *unaff_r8 = uVar2;
        uVar3 = *(undefined4 *)((int)register0x00000054 + -4);
        unaff_r8[1] = uVar3;
      }
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      *(undefined4 **)((int)register0x00000054 + -0x20) = puVar1;
      FUN_00062dd0();
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -4);
      *(undefined8 *)((int)register0x00000054 + -0x1c) = *(undefined8 *)PTR_DAT_004487c8;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
      k3c_internal_pkg_reactor___ReactorCompletion__Wait();
      bVar5 = *(undefined **)((int)register0x00000054 + -0xc) == PTR_DAT_004487cc;
      if (bVar5) {
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_004487cc;
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined **)((int)register0x00000054 + -0x18) =
             PTR_s_resultparamsmethodscriptstatusre_008214ab_0x36_004487d0;
        *(undefined4 *)((int)register0x00000054 + -0x14) = 6;
        FUN_00025f60();
        uVar2 = (*(undefined4 **)((int)register0x00000054 + -0x10))[1];
        *(undefined4 *)((int)register0x00000054 + 0xc) =
             **(undefined4 **)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + 0x10) = uVar2;
        return;
      }
      *(undefined **)((int)register0x00000054 + -0x20) =
           *(undefined **)((int)register0x00000054 + -0xc);
      *(undefined **)((int)register0x00000054 + -0x1c) = PTR_DAT_004487cc;
      *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_004487d4;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x4487b4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/reactor.(*Reactor).Async_wait_complete.func1 @ 004487d8 (size 216) */

void k3c_internal_pkg_reactor___Reactor__Async_wait_complete_func1(void)

{
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 *puStack_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  (*(code *)**(undefined4 **)(unaff_r7 + 4))();
  FUN_000908bc();
  FUN_00093a08();
  *puStack_14 = uStack_1c;
  if (*DAT_004488bc != 0) {
    puStack_14 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = uStack_18;
    unaff_r8[1] = puStack_14[1];
  }
  puStack_14[1] = uStack_18;
  k3c_internal_pkg_reactor___Reactor__Async_complete();
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor)._got_pipe_signal @ 004488c0 (size 640) */

void k3c_internal_pkg_reactor___Reactor___got_pipe_signal(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar6;
  int extraout_r1;
  int extraout_r1_00;
  int *piVar7;
  undefined4 uVar8;
  int extraout_r2;
  int extraout_r3;
  int iVar9;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  bool bVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  undefined1 *puVar5;
  undefined1 *puVar11;
  
  do {
    iVar1 = DAT_00448b44;
    bVar12 = (undefined1 *)register0x00000054 == (undefined1 *)0xfb0;
    if ((undefined1 *)0xfaf < register0x00000054) {
      bVar12 = (undefined1 *)((int)register0x00000054 + -0xfb0) == *(undefined1 **)(unaff_r10 + 8);
    }
    if (((undefined1 *)0xfaf < register0x00000054 &&
        *(undefined1 **)(unaff_r10 + 8) <= (undefined1 *)((int)register0x00000054 + -0xfb0)) &&
        !bVar12) {
      puVar10 = (undefined1 *)((int)register0x00000054 + DAT_00448b44);
      puVar11 = (undefined1 *)((int)register0x00000054 + DAT_00448b44);
      *(undefined4 *)((int)register0x00000054 + DAT_00448b44) = unaff_lr;
      puVar5 = (undefined1 *)((int)register0x00000054 + DAT_00448b44 + 0x20);
      do {
        puVar4 = puVar5 + 1;
        *puVar5 = 0;
        puVar5 = puVar4;
      } while ((int)puVar4 <= (int)((int)register0x00000054 + DAT_00448b48 + DAT_00448b44));
      *(undefined4 *)((int)register0x00000054 + DAT_00448b44 + 4) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + DAT_00448b4c + DAT_00448b44) + 0xc);
      *(undefined1 **)((int)register0x00000054 + DAT_00448b44 + 8) =
           (undefined1 *)((int)register0x00000054 + DAT_00448b44 + 0x20);
      *(undefined4 *)((int)register0x00000054 + DAT_00448b44 + 0xc) = 0x1000;
      *(undefined4 *)((int)register0x00000054 + DAT_00448b44 + 0x10) = 0x1000;
      FUN_000fd114();
LAB_0044891c:
      do {
        do {
          do {
            do {
              *(undefined4 *)((int)register0x00000054 + iVar1 + 4) =
                   *(undefined4 *)(*(int *)((int)register0x00000054 + DAT_00448b4c + iVar1) + 0x14);
              k3c_common_core___Queue__Get_nowait();
              if (*(int *)((int)register0x00000054 + iVar1 + 8) == 0) {
                *(undefined4 *)((int)register0x00000054 + DAT_00448b7c + iVar1) = 0;
                *(undefined4 *)((int)register0x00000054 + DAT_00448b80 + iVar1) = 0;
                return;
              }
            } while (*(int *)((int)register0x00000054 + iVar1 + 8) != DAT_00448b50);
            piVar7 = (int *)**(int **)((int)register0x00000054 + iVar1 + 0xc);
            iVar2 = (*(int **)((int)register0x00000054 + iVar1 + 0xc))[1];
          } while (iVar2 == 0);
          *(int *)((int)register0x00000054 + DAT_00448b54 + iVar1) = iVar2;
          *(int **)((int)register0x00000054 + DAT_00448b58 + iVar1) = piVar7;
          iVar2 = *piVar7;
          iVar9 = piVar7[1];
          bVar12 = false;
          if (iVar2 == DAT_00448b5c) {
            *(int *)((int)register0x00000054 + DAT_00448b60 + iVar1) = iVar2;
            *(int *)((int)register0x00000054 + DAT_00448b64 + iVar1) = iVar9;
            *(int *)((int)register0x00000054 + iVar1 + 4) = iVar2;
            *(int *)((int)register0x00000054 + iVar1 + 8) = iVar9;
            *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) = DAT_00448b68;
            FUN_00019a3c();
            if (*(char *)((int)register0x00000054 + iVar1 + 0x10) != '\0') {
              if (*(int *)((int)register0x00000054 + DAT_00448b54 + iVar1) == 3) {
                iVar3 = *(int *)((int)register0x00000054 + DAT_00448b58 + iVar1);
                iVar2 = *(int *)(iVar3 + 8);
                uVar13 = iVar2 == DAT_00448b6c;
                iVar9 = DAT_00448b6c;
                if (!(bool)uVar13) goto LAB_00448b1c;
                iVar2 = *(int *)(iVar3 + 0x10);
                uVar13 = iVar2 == DAT_00448b70;
                iVar9 = DAT_00448b70;
                if (!(bool)uVar13) goto LAB_00448b08;
                uVar6 = *(undefined4 *)(iVar3 + 0xc);
                uVar14 = **(undefined8 **)(iVar3 + 0x14);
                *(undefined4 *)((int)register0x00000054 + iVar1 + 4) =
                     *(undefined4 *)((int)register0x00000054 + DAT_00448b4c + iVar1);
                *(undefined4 *)((int)register0x00000054 + iVar1 + 8) = uVar6;
                *(undefined8 *)((int)register0x00000054 + iVar1 + 0xc) = uVar14;
                k3c_internal_pkg_reactor_NewReactorCallback();
              }
              goto LAB_0044891c;
            }
            iVar2 = *(int *)((int)register0x00000054 + DAT_00448b60 + iVar1);
            bVar12 = iVar2 == DAT_00448b5c;
            piVar7 = *(int **)((int)register0x00000054 + DAT_00448b58 + iVar1);
            iVar9 = *(int *)((int)register0x00000054 + DAT_00448b64 + iVar1);
          }
        } while (!bVar12);
        *(int *)((int)register0x00000054 + iVar1 + 4) = iVar2;
        *(int *)((int)register0x00000054 + iVar1 + 8) = iVar9;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) = DAT_00448b74;
        FUN_00019a3c(DAT_00448b74,DAT_00448b50,piVar7);
      } while ((*(char *)((int)register0x00000054 + iVar1 + 0x10) == '\0') ||
              (*(int *)((int)register0x00000054 + DAT_00448b54 + iVar1) != 3));
      iVar2 = *(int *)((int)register0x00000054 + DAT_00448b58 + iVar1);
      uVar13 = *(int *)(iVar2 + 8) == DAT_00448b78;
      if ((bool)uVar13) {
        uVar8 = *(undefined4 *)(iVar2 + 0x10);
        uVar6 = *(undefined4 *)(iVar2 + 0x14);
        *(undefined4 *)((int)register0x00000054 + iVar1 + 4) = *(undefined4 *)(iVar2 + 0xc);
        *(undefined4 *)((int)register0x00000054 + iVar1 + 8) = uVar8;
        *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) = uVar6;
        k3c_internal_pkg_reactor___ReactorCompletion__Complete();
        goto LAB_0044891c;
      }
      *(int *)((int)register0x00000054 + iVar1 + 4) = *(int *)(iVar2 + 8);
      *(int *)((int)register0x00000054 + iVar1 + 8) = DAT_00448b78;
      *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) = DAT_00448b88;
      FUN_000209b4();
      iVar2 = extraout_r1;
      iVar9 = extraout_r3;
LAB_00448b08:
      *(int *)((int)register0x00000054 + iVar1 + 4) = iVar2;
      *(int *)((int)register0x00000054 + iVar1 + 8) = iVar9;
      *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) = DAT_00448b88;
      FUN_000209b4();
      iVar2 = extraout_r1_00;
      iVar9 = extraout_r2;
LAB_00448b1c:
      *(int *)((int)register0x00000054 + iVar1 + 4) = iVar2;
      *(int *)((int)register0x00000054 + iVar1 + 8) = iVar9;
      *(undefined4 *)((int)register0x00000054 + iVar1 + 0xc) = DAT_00448b88;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)puVar10;
      if ((bool)uVar13) {
        register0x00000054 = (BADSPACEBASE *)puVar11;
      }
    }
    unaff_lr = 0x448b3c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/reactor.(*Reactor).Mutex @ 00448b8c (size 128) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_reactor___Reactor__Mutex(void)

{
  undefined1 *extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined1 in_stack_00000008;
  undefined1 *in_stack_0000000c;
  undefined1 *puStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x448c08;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  if (*_UNK_00448c14 != 0) {
    FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
    puStack_8 = extraout_r1;
  }
  *(undefined4 *)(puStack_8 + 4) = in_stack_00000004;
  *puStack_8 = in_stack_00000008;
  puStack_8[8] = 0;
  *(undefined4 *)(puStack_8 + 0x10) = 0;
  *(undefined4 *)(puStack_8 + 0x14) = 0;
  *(undefined4 *)(puStack_8 + 0xc) = _UNK_00448c18;
  in_stack_0000000c = puStack_8;
                    /* WARNING: Could not recover jumptable at 0x00448bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).Run @ 00448c1c (size 352) */

void k3c_internal_pkg_reactor___Reactor__Run(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  int extraout_r1_00;
  uint extraout_r2;
  uint uVar5;
  undefined1 *extraout_r3;
  undefined4 *extraout_r3_00;
  int iVar6;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *local_24;
  int local_14;
  uint local_10;
  undefined4 local_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  if (*(int *)(in_stack_00000004 + 0xc) == -1) {
    k3c_internal_pkg_reactor___Reactor___setup_async_callbacks();
  }
  *in_stack_00000004 = 1;
  FUN_00022cf8();
  *local_24 = PTR_k3c_internal_pkg_reactor___Reactor___dispatch_loop_fm_00448d84;
  puVar1 = local_24;
  if (*(int *)PTR_DAT_00448d88 != 0) {
    puVar1 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = (int)in_stack_00000004;
  }
  puVar1[1] = in_stack_00000004;
  k3c_internal_pkg_reactor_NewReactorGreenlet();
  puVar2 = in_stack_00000004;
  uVar5 = *(int *)(in_stack_00000004 + 0x24) + 1U;
  iVar6 = *(int *)(in_stack_00000004 + 0x20);
  if (*(uint *)(in_stack_00000004 + 0x28) < *(int *)(in_stack_00000004 + 0x24) + 1U) {
    FUN_000987f4();
    *(undefined4 *)(in_stack_00000004 + 0x28) = local_c;
    puVar2 = in_stack_00000004;
    if (*(int *)PTR_DAT_00448d88 != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(int *)(extraout_r3 + 0x20);
      local_14 = extraout_r1;
      local_10 = extraout_r2;
      puVar2 = extraout_r3;
    }
    *(int *)(puVar2 + 0x20) = local_14;
    uVar5 = local_10;
    iVar6 = local_14;
  }
  *(uint *)(puVar2 + 0x24) = uVar5;
  iVar4 = uVar5 - 1;
  iVar3 = 0;
  if (*(int *)PTR_DAT_00448d88 != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)extraout_r3_00;
    iVar3 = *(int *)(iVar6 + extraout_r1_00 * 4);
    unaff_r8[1] = iVar3;
    iVar4 = extraout_r1_00;
    local_24 = extraout_r3_00;
  }
  *(undefined4 **)(iVar6 + iVar4 * 4) = local_24;
  k3c_internal_pkg_reactor___ReactorGreenlet__goGreenlet(iVar3);
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor)._end_greenlet @ 00448d90 (size 804) */

void k3c_internal_pkg_reactor___Reactor___end_greenlet(void)

{
  int *piVar1;
  int *piVar2;
  int *extraout_r1;
  int *extraout_r2;
  int extraout_r2_00;
  int iVar3;
  int extraout_r2_01;
  int *piVar4;
  int iVar5;
  int extraout_r3;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *unaff_r8;
  int unaff_r10;
  undefined8 uVar11;
  int in_stack_00000004;
  int in_stack_00000008;
  int local_44;
  undefined4 local_3c;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  piVar2 = *(int **)(in_stack_00000004 + 0x1c);
  if (*piVar2 == 0) {
    if (*DAT_004490b8 != 0) {
      FUN_0009db84(in_stack_00000004);
      *unaff_r8 = (int)extraout_r1;
      unaff_r8[1] = *extraout_r1;
      unaff_r8[2] = (int)extraout_r1;
      unaff_r8[3] = extraout_r1[1];
      piVar2 = extraout_r1;
    }
    *piVar2 = (int)piVar2;
    piVar2[1] = (int)piVar2;
    piVar2[5] = 0;
  }
  piVar1 = (int *)piVar2[1];
  FUN_00022cf8();
  *(undefined4 *)(local_44 + 0xc) = DAT_004490c0;
  if (*DAT_004490b8 != 0) {
    local_44 = FUN_0009db54();
    *unaff_r8 = in_stack_00000008;
  }
  uVar11 = CONCAT44(in_stack_00000008,local_44);
  *(int *)(local_44 + 0x10) = in_stack_00000008;
  if (*DAT_004490b8 != 0) {
    uVar11 = FUN_0009db54();
    *unaff_r8 = (int)piVar1;
  }
  *(int **)((int)uVar11 + 4) = piVar1;
  iVar7 = *piVar1;
  if (*DAT_004490b8 != 0) {
    uVar11 = FUN_0009db74();
    *unaff_r8 = iVar7;
    unaff_r8[1] = (int)uVar11;
    unaff_r8[2] = *extraout_r2;
    piVar1 = extraout_r2;
  }
  piVar4 = (int *)uVar11;
  *piVar4 = iVar7;
  *piVar1 = (int)piVar4;
  iVar7 = *piVar4;
  if (*DAT_004490b8 != 0) {
    uVar11 = FUN_0009db84();
    *unaff_r8 = (int)uVar11;
    unaff_r8[1] = *(int *)(extraout_r2_00 + 4);
    unaff_r8[2] = (int)piVar2;
    unaff_r8[3] = *(int *)((int)uVar11 + 8);
    iVar7 = extraout_r2_00;
  }
  *(int *)(iVar7 + 4) = (int)uVar11;
  *(int **)((int)uVar11 + 8) = piVar2;
  piVar2[5] = piVar2[5] + 1;
  piVar1 = *(int **)((int)((ulonglong)uVar11 >> 0x20) + 0xc);
  piVar4 = *(int **)(in_stack_00000004 + 0x30);
  *(undefined8 *)(piVar1 + 1) = *DAT_004490c4;
  uVar8 = piVar4[1];
  FUN_000986b8();
  iVar3 = *piVar4;
  iVar5 = piVar4[1];
  uVar10 = 0;
  piVar2 = piVar4;
  iVar7 = iVar3;
  iVar6 = iVar5;
  for (iVar9 = 0; uVar11 = CONCAT44(piVar2,local_3c), iVar9 < iVar6; iVar9 = iVar9 + 1) {
    unaff_r8 = *(int **)(iVar7 + iVar9 * 4);
    if (unaff_r8 != piVar1) {
      uVar10 = uVar10 + 1;
      if (uVar8 < uVar10) {
        FUN_000987f4();
        local_3c = local_34;
        piVar2 = piVar4;
        iVar7 = iVar3;
        iVar6 = iVar5;
        uVar8 = local_2c;
        uVar10 = local_30;
      }
      uVar11 = CONCAT44(piVar2,local_3c);
      if (*DAT_004490b8 != 0) {
        uVar11 = FUN_0009db64();
        *unaff_r8 = (int)unaff_r8;
        unaff_r8[1] = *(int *)((int)uVar11 + (uVar10 - 1) * 4);
        iVar7 = extraout_r2_01;
        iVar6 = extraout_r3;
      }
      *(int **)((int)uVar11 + (uVar10 - 1) * 4) = unaff_r8;
    }
    piVar2 = (int *)((ulonglong)uVar11 >> 0x20);
    local_3c = (undefined4)uVar11;
  }
  piVar2[1] = uVar10;
  piVar2[2] = uVar8;
  if (*DAT_004490b8 != 0) {
    uVar11 = FUN_0009db74();
    *unaff_r8 = (int)uVar11;
    unaff_r8[1] = *(int *)((ulonglong)uVar11 >> 0x20);
    unaff_r8[2] = *(int *)(in_stack_00000008 + 0xc);
  }
  *(undefined4 *)((ulonglong)uVar11 >> 0x20) = (int)uVar11;
  *(undefined4 *)(in_stack_00000008 + 0xc) = 0;
  k3c_internal_pkg_reactor___ReactorGreenlet__SwitchTo();
  if (*DAT_004490b8 != 0) {
    FUN_0009db64();
    *unaff_r8 = in_stack_00000008;
    unaff_r8[1] = *(int *)(in_stack_00000004 + 0x18);
  }
  *(int *)(in_stack_00000004 + 0x18) = in_stack_00000008;
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).Register_fd @ 004490cc (size 384) */

void k3c_internal_pkg_reactor___Reactor__Register_fd(void)

{
  int *piVar1;
  int iVar2;
  int extraout_r1;
  uint extraout_r2;
  int *extraout_r3;
  uint uVar3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  undefined4 *in_stack_00000014;
  undefined4 *puStack_28;
  int *piStack_20;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x449248;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *puStack_28 = in_stack_00000008;
  if (*(int *)PTR_DAT_00449254 != 0) {
    puStack_28 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = in_stack_0000000c;
    unaff_r8[1] = in_stack_00000010;
  }
  puStack_28[1] = in_stack_0000000c;
  puStack_28[2] = in_stack_00000010;
  FUN_00092908();
  if (*(int *)PTR_DAT_00449254 != 0) {
    piStack_20 = (int *)FUN_0009db64();
    *unaff_r8 = (int)puStack_28;
    unaff_r8[1] = *piStack_20;
  }
  *piStack_20 = (int)puStack_28;
  piVar1 = *(int **)(in_stack_00000004 + 0x3c);
  uVar3 = piVar1[1] + 1U;
  iVar2 = *piVar1;
  if ((uint)piVar1[2] < piVar1[1] + 1U) {
    FUN_000987f4();
    piVar1[2] = iStack_10;
    if (*(int *)PTR_DAT_00449254 != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *extraout_r3;
      iStack_18 = extraout_r1;
      uStack_14 = extraout_r2;
      piVar1 = extraout_r3;
    }
    *piVar1 = iStack_18;
    uVar3 = uStack_14;
    iVar2 = iStack_18;
  }
  piVar1[1] = uVar3;
  *(undefined4 *)(iVar2 + (uVar3 - 1) * 8) = in_stack_00000008;
  iVar2 = iVar2 + (uVar3 - 1) * 8;
  *(undefined2 *)(iVar2 + 4) = 0x11;
  *(undefined2 *)(iVar2 + 6) = 0;
  in_stack_00000014 = puStack_28;
                    /* WARNING: Could not recover jumptable at 0x0044923c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor).Unregister_fd @ 00449260 (size 356) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_reactor___Reactor__Unregister_fd(void)

{
  int *piVar1;
  uint uVar2;
  int *extraout_r1;
  int iVar3;
  uint uVar4;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  int *in_stack_00000008;
  int iStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4493c0;
    FUN_0009bf64();
  }
  FUN_00025164();
  piVar1 = *(int **)(in_stack_00000004 + 0x3c);
  iVar3 = 0;
  do {
    if (piVar1[1] <= iVar3) {
LAB_004493b4:
                    /* WARNING: Could not recover jumptable at 0x004493b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    if (*(int *)(*piVar1 + iVar3 * 8) == *in_stack_00000008) {
      uVar4 = piVar1[1] - 1;
      uVar2 = piVar1[2];
      iVar3 = *piVar1;
      if ((uint)piVar1[2] < uVar4) {
        FUN_000987f4();
        uVar2 = uStack_18;
        iVar3 = iStack_20;
        uVar4 = uStack_1c;
      }
      FUN_0009e3a4();
      piVar1[1] = uVar4;
      piVar1[2] = uVar2;
      if (*_UNK_004493d0 != 0) {
        FUN_0009db64();
        *unaff_r8 = iVar3;
        unaff_r8[1] = *extraout_r1;
        piVar1 = extraout_r1;
      }
      *piVar1 = iVar3;
      goto LAB_004493b4;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



/* k3c/internal/pkg/reactor.(*Reactor).Set_fd_wake @ 004493d4 (size 108) */

void k3c_internal_pkg_reactor___Reactor__Set_fd_wake(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  int *in_stack_00000008;
  char cStack0000000c;
  char cStack0000000d;
  
  if (cStack0000000c == '\0') {
    uVar1 = 0x10;
  }
  else {
    uVar1 = 0x11;
  }
  if (cStack0000000d != '\0') {
    uVar1 = uVar1 | 4;
  }
  iVar2 = **(int **)(in_stack_00000004 + 0x3c);
  iVar3 = 0;
  do {
    if ((*(int **)(in_stack_00000004 + 0x3c))[1] <= iVar3) {
LAB_0044943c:
                    /* WARNING: Could not recover jumptable at 0x0044943c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    if (*(int *)(iVar2 + iVar3 * 8) == *in_stack_00000008) {
      *(ushort *)(iVar2 + iVar3 * 8 + 4) = uVar1;
      goto LAB_0044943c;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}



/* k3c/internal/pkg/reactor.(*Reactor)._dispatch_loop @ 00449440 (size 952) */

void k3c_internal_pkg_reactor___Reactor___dispatch_loop(void)

{
  ushort uVar1;
  int iVar2;
  undefined1 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int extraout_r2;
  int iVar6;
  int *unaff_r8;
  int unaff_r10;
  undefined8 uVar7;
  char *in_stack_00000004;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  int local_54;
  int iStack_50;
  int *piStack_48;
  char local_44;
  int iStack_40;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_reactor_Getcurrent();
  pcVar4 = in_stack_00000004;
  if (*DAT_004497fc != 0) {
    pcVar4 = (char *)FUN_0009db64();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(int *)(pcVar4 + 0x18);
    local_54 = extraout_r2;
  }
  *(int *)(pcVar4 + 0x18) = local_54;
  k3c_internal_pkg_chelper__Cfunc_get_monotonic(pcVar4);
  uVar3 = 1;
  do {
    while( true ) {
      iVar2 = iStack_50;
      if (*in_stack_00000004 == '\0') {
        if (*DAT_004497fc != 0) {
          uVar7 = FUN_0009db54(*(undefined4 *)(in_stack_00000004 + 0x18));
          in_stack_00000004 = (char *)((ulonglong)uVar7 >> 0x20);
          *unaff_r8 = (int)uVar7;
        }
        in_stack_00000004[0x18] = '\0';
        in_stack_00000004[0x19] = '\0';
        in_stack_00000004[0x1a] = '\0';
        in_stack_00000004[0x1b] = '\0';
        return;
      }
      piStack_48 = (int *)CONCAT31(piStack_48._1_3_,uVar3);
      uVar5 = k3c_internal_pkg_reactor___Reactor___check_timers();
      FUN_000b0130(uVar5);
      k3c_internal_pkg_reactor___Poll__poll();
      if (iStack_40 == 0) break;
      piStack_48 = DAT_00449808;
      FUN_000a8204();
      iStack_50 = iVar2;
      if (local_44 == '\0') {
        (**(code **)(iStack_40 + 0xc))();
        FUN_0008f77c();
        k3c_internal_pkg_logger_Error();
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
      }
    }
    k3c_internal_pkg_chelper__Cfunc_get_monotonic(iVar2);
    uVar3 = 0;
    for (iVar6 = 0; iStack_50 = (int)(longlong)-(double)CONCAT44(piStack_48,iVar2),
        iVar6 < (int)piStack_48; iVar6 = iVar6 + 1) {
      uVar1 = *(ushort *)(iVar2 + iVar6 * 8 + 6);
      if ((uVar1 & 0x11) != 0) {
        FUN_00024fd0();
        (*(code *)**(undefined4 **)(*piStack_48 + 4))();
        if (*(int *)(in_stack_00000004 + 0x18) != local_54) {
          uVar5 = k3c_internal_pkg_reactor___Reactor___end_greenlet();
          k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar5);
          uVar3 = 1;
          iStack_50 = local_54;
          break;
        }
      }
      if (((uVar1 & 4) != 0) && (FUN_00024fd0(), *piStack_48 != 0)) {
        FUN_00024fd0();
        if (*(int *)(*piStack_48 + 8) != 0) {
          FUN_00024fd0();
          (*(code *)**(undefined4 **)(*piStack_48 + 8))();
        }
        if (*(int *)(in_stack_00000004 + 0x18) != local_54) {
          uVar5 = k3c_internal_pkg_reactor___Reactor___end_greenlet();
          k3c_internal_pkg_chelper__Cfunc_get_monotonic(uVar5);
          uVar3 = 1;
          iStack_50 = local_54;
          break;
        }
      }
      uVar3 = 1;
    }
  } while( true );
}



/* k3c/internal/pkg/reactor.(*ReactorCallback).invoke-fm @ 00449814 (size 100) */

void k3c_internal_pkg_reactor___ReactorCallback__invoke_fm(void)

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
  k3c_internal_pkg_reactor___ReactorCallback__invoke();
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor)._dispatch_loop-fm @ 00449878 (size 116) */

void k3c_internal_pkg_reactor___Reactor___dispatch_loop_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_14;
  }
  uStack_14 = *(undefined4 *)(unaff_r7 + 4);
  uStack_10 = in_stack_00000004;
  uStack_c = in_stack_00000008;
  k3c_internal_pkg_reactor___Reactor___dispatch_loop();
  return;
}



/* k3c/internal/pkg/reactor.(*Reactor)._got_pipe_signal-fm @ 004498ec (size 108) */

void k3c_internal_pkg_reactor___Reactor___got_pipe_signal_fm(void)

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
  k3c_internal_pkg_reactor___Reactor___got_pipe_signal();
  return;
}



/* k3c/internal/pkg/reactor.(*ReactorGreenlet).SwitchTo-fm @ 00449958 (size 100) */

void k3c_internal_pkg_reactor___ReactorGreenlet__SwitchTo_fm(void)

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
  k3c_internal_pkg_reactor___ReactorGreenlet__SwitchTo();
  return;
}



/* k3c/internal/pkg/reactor.(*ReactorCompletion).Complete-fm @ 004805e0 (size 100) */

void k3c_internal_pkg_reactor___ReactorCompletion__Complete_fm(void)

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
  k3c_internal_pkg_reactor___ReactorCompletion__Complete();
  return;
}



