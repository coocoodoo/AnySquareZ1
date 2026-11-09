// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/app   functions: 22
/* k3c/internal/app.(*State).String @ 0071dabc (size 244) */

void k3c_internal_app___State__String(void)

{
  undefined4 uVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined *in_stack_0000000c;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uStack_28;
  int iStack_20;
  undefined4 uStack_1c;
  undefined *puStack_10;
  undefined *puStack_c;
  int iStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x71dbac;
    FUN_0009bf64();
  }
  uVar1 = *in_stack_00000004;
  uVar4 = 0;
  uVar5 = 0;
  uVar7 = 1;
  puVar3 = PTR_DAT_0071dbb4;
  puVar6 = PTR_DAT_0071dbb8;
  FUN_0015dd98();
  bVar2 = iStack_20 == 0;
  if (!bVar2) {
    FUN_0009df04(0,&puStack_10,uStack_28,uStack_1c,UNRECOVERED_JUMPTABLE,puVar3,uVar1,uVar4,uVar5,
                 puVar6,uVar7);
    puStack_10 = PTR_DAT_0071dbbc;
    puStack_c = PTR_DAT_0071dbc0;
    if (!bVar2) {
      iStack_20 = *(int *)(iStack_20 + 4);
    }
    iStack_8 = iStack_20;
    func_0x0017945c();
  }
  FUN_00099104();
  in_stack_0000000c = puVar6;
  in_stack_00000008 = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0071dba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/app.init.0 @ 0071dbc4 (size 492) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_app_init_0(void)

{
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  int *piStack_2c;
  int iStack_28;
  undefined *apuStack_18 [2];
  undefined *puStack_10;
  undefined *puStack_8;
  undefined *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x71ddac;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  piStack_2c[1] = 5;
  *piStack_2c = (int)PTR_s_INFO_startprobearrayfalse<nil>_s_00820821_0x57d_0071ddbc;
  FUN_0008ec5c();
  internal_runtime_atomic_Store();
  piStack_2c = (int *)&SUB_00000010;
  k3c_internal_pkg_config_LoadConfig();
  if (iStack_28 != 0) {
    FUN_00022cf8();
    _DAT_00000018 = 5;
    _DAT_00000014 = PTR_s_startprobearrayfalse<nil>_s__dva_00820821_0x582_0071ddcc;
    if (*(int *)PTR_DAT_0071ddd0 != 0) {
      piStack_2c = (int *)FUN_0009db74();
      *unaff_r8 = iStack_28;
      unaff_r8[1] = (int)piStack_2c;
      unaff_r8[2] = *(int *)PTR_DAT_0071ddd4;
    }
    *piStack_2c = iStack_28;
    *(int **)PTR_DAT_0071ddd4 = piStack_2c;
    k3c_internal_app___State__String();
    FUN_0009df04(0,apuStack_18);
    FUN_0008f77c();
    apuStack_18[0] = PTR_DAT_0071ddb4;
    FUN_0008f77c();
    puStack_10 = PTR_DAT_0071ddb4;
    k3c_internal_pkg_logger_Debug();
                    /* WARNING: Could not recover jumptable at 0x0071dd68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  k3c_internal_pkg_config_LoadConfig();
  puStack_8 = PTR_DAT_0071ddb4;
  puStack_4 = PTR_DAT_0071ddd8;
  k3c_internal_pkg_logger_Error();
  FUN_00131c2c();
                    /* WARNING: Could not recover jumptable at 0x0071dda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/app.Start @ 0071dddc (size 5200) */

void k3c_internal_app_Start(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined *puVar6;
  code *pcVar7;
  undefined4 extraout_r1_02;
  undefined *extraout_r1_03;
  char cVar8;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  int iVar9;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 uVar10;
  undefined4 *extraout_r2_04;
  undefined4 extraout_r2_05;
  undefined4 extraout_r2_06;
  undefined4 extraout_r2_07;
  undefined *extraout_r2_08;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 extraout_r3;
  int iVar13;
  undefined4 uVar14;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar15;
  undefined4 unaff_lr;
  bool bVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x50)) {
      puVar15 = (undefined1 *)((int)register0x00000054 + -0xd0);
      *(undefined4 *)((int)register0x00000054 + -0xd0) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071e5c4;
      FUN_00022cf8();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -200);
      *puVar1 = PTR_k3c_internal_app_Start_func1_0071e5c8;
      puVar1[2] = 0x1c;
      puVar1[1] = PTR_DAT_0071e5cc;
      if (*(int *)PTR_DAT_0071e5d0 != 0) {
        puVar1 = (undefined4 *)FUN_0009db64();
        *unaff_r8 = puVar1;
        unaff_r8[1] = *(undefined4 *)PTR_DAT_0071e5d4;
      }
      *(undefined4 **)PTR_DAT_0071e5d4 = puVar1;
      *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071e5d8;
      FUN_00022cf8();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -200);
      *(undefined4 **)((int)register0x00000054 + -4) = puVar1;
      puVar1[1] = 0;
      *puVar1 = 0;
      *(undefined4 *)((int)register0x00000054 + -0xcc) = *(undefined4 *)PTR_DAT_0071e5dc;
      *(undefined **)((int)register0x00000054 + -200) = PTR_DAT_0071e5e0;
      *(undefined4 **)((int)register0x00000054 + -0xc4) = puVar1;
      *(undefined4 *)((int)register0x00000054 + -0xc0) = DAT_0071e5e4;
      *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
      *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0071e5e8;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = 0x30;
      FUN_00173d8c();
      iVar5 = *(int *)((int)register0x00000054 + -4);
      *(undefined4 *)(iVar5 + 0xc) = 0xc;
      if (*(int *)PTR_DAT_0071e5d0 != 0) {
        FUN_0009db54(0xc,iVar5,*(undefined4 *)(iVar5 + 8));
        *unaff_r8 = extraout_r2;
        iVar5 = extraout_r1;
      }
      *(undefined **)(iVar5 + 8) = PTR_DAT_0071e5ec;
      *(undefined4 *)((int)register0x00000054 + -0xcc) = *(undefined4 *)PTR_DAT_0071e5dc;
      *(undefined **)((int)register0x00000054 + -200) = PTR_DAT_0071e5e0;
      *(int *)((int)register0x00000054 + -0xc4) = iVar5 + 8;
      *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0071e5f0;
      *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
      *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0071e5f4;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = 0x28;
      FUN_00173d8c();
      iVar5 = *(int *)((int)register0x00000054 + -4);
      *(undefined4 *)(iVar5 + 0x14) = 0xd;
      if (*(int *)PTR_DAT_0071e5d0 != 0) {
        uVar18 = FUN_0009db54(*(undefined4 *)(iVar5 + 0x10));
        iVar5 = (int)((ulonglong)uVar18 >> 0x20);
        *unaff_r8 = (int)uVar18;
      }
      *(undefined **)(iVar5 + 0x10) = PTR_s__tmp_unix_udsgcode_macro_1pid_ca_008262d0_0xcba_0071e5f8
      ;
      *(undefined4 *)((int)register0x00000054 + -0xcc) = *(undefined4 *)PTR_DAT_0071e5dc;
      *(undefined **)((int)register0x00000054 + -200) = PTR_DAT_0071e5e0;
      *(int *)((int)register0x00000054 + -0xc4) = iVar5 + 0x10;
      *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0071e5fc;
      *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
      *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0071e600;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = 0x26;
      FUN_00173d8c();
      iVar5 = *(int *)((int)register0x00000054 + -4);
      *(undefined4 *)(iVar5 + 0x1c) = 0xe;
      if (*(int *)PTR_DAT_0071e5d0 != 0) {
        uVar18 = FUN_0009db54(*(undefined4 *)(iVar5 + 0x18));
        iVar5 = (int)((ulonglong)uVar18 >> 0x20);
        *unaff_r8 = (int)uVar18;
      }
      *(int *)((int)register0x00000054 + -100) = iVar5 + 0x20;
      *(undefined **)(iVar5 + 0x18) =
           PTR_s__tmp_gklib_logquery_endstopsstep_008262d0_0x1bea_0071e604;
      *(undefined4 *)((int)register0x00000054 + -0xcc) = *(undefined4 *)PTR_DAT_0071e5dc;
      *(undefined **)((int)register0x00000054 + -200) = PTR_DAT_0071e5e0;
      *(int *)((int)register0x00000054 + -0xc4) = iVar5 + 0x18;
      *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0071e608;
      *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
      *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0071e60c;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = 0x23;
      FUN_00173d8c();
      *(undefined1 *)(*(int *)((int)register0x00000054 + -4) + 0x20) = 1;
      *(undefined4 *)((int)register0x00000054 + -0xcc) = *(undefined4 *)PTR_DAT_0071e5dc;
      *(undefined **)((int)register0x00000054 + -200) = PTR_DAT_0071e610;
      *(undefined4 *)((int)register0x00000054 + -0xc4) =
           *(undefined4 *)((int)register0x00000054 + -100);
      *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0071e614;
      *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
      *(undefined **)((int)register0x00000054 + -0xb8) =
           PTR_s_enable_debug_messagescustom_temp_0082e789_0xae2_0071e618;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = 0x15;
      FUN_00173d8c();
      iVar5 = *(int *)((int)register0x00000054 + -4);
      *(undefined4 *)(iVar5 + 0x28) = 0;
      if (*(int *)PTR_DAT_0071e5d0 != 0) {
        FUN_0009db54(0,iVar5,*(undefined4 *)(iVar5 + 0x24));
        *unaff_r8 = extraout_r2_00;
        iVar5 = extraout_r1_00;
      }
      *(undefined4 *)(iVar5 + 0x24) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xcc) = *(undefined4 *)PTR_DAT_0071e5dc;
      *(undefined **)((int)register0x00000054 + -200) = PTR_DAT_0071e5e0;
      *(int *)((int)register0x00000054 + -0xc4) = iVar5 + 0x24;
      *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0071e61c;
      *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
      *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0071e620;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = 0x2e;
      FUN_00173d8c();
      iVar5 = *(int *)((int)register0x00000054 + -4);
      *(undefined4 *)(iVar5 + 0x30) = 0;
      if (*(int *)PTR_DAT_0071e5d0 != 0) {
        FUN_0009db54(0,iVar5,*(undefined4 *)(iVar5 + 0x2c));
        *unaff_r8 = extraout_r2_01;
        iVar5 = extraout_r1_01;
      }
      *(undefined4 *)(iVar5 + 0x2c) = 0;
      *(int *)((int)register0x00000054 + -0x68) = iVar5 + 0x35;
      *(undefined4 *)((int)register0x00000054 + -0xcc) = *(undefined4 *)PTR_DAT_0071e5dc;
      *(undefined **)((int)register0x00000054 + -200) = PTR_DAT_0071e5e0;
      *(int *)((int)register0x00000054 + -0xc4) = iVar5 + 0x2c;
      *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0071e624;
      *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
      *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0071e628;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = 0x28;
      FUN_00173d8c();
      *(undefined1 *)(*(int *)((int)register0x00000054 + -4) + 0x35) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xcc) = *(undefined4 *)PTR_DAT_0071e5dc;
      *(undefined **)((int)register0x00000054 + -200) = PTR_DAT_0071e610;
      *(undefined4 *)((int)register0x00000054 + -0xc4) =
           *(undefined4 *)((int)register0x00000054 + -0x68);
      *(undefined **)((int)register0x00000054 + -0xc0) =
           PTR_s_consoleheaterstmc2209adxl345butt_008216f7_0x4ff_0071e62c;
      *(undefined4 *)((int)register0x00000054 + -0xbc) = 7;
      *(undefined **)((int)register0x00000054 + -0xb8) =
           PTR_s_log_to_terminaladc_temperatureus_008262d0_0x29c1_0071e630;
      *(undefined4 *)((int)register0x00000054 + -0xb4) = 0xf;
      FUN_00173d8c();
      iVar5 = *(int *)PTR_DAT_0071e634;
      bVar16 = iVar5 == 1;
      if (iVar5 != 0) break;
      param_1 = FUN_0009dc34(1,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xd0);
      if (bVar16) {
        register0x00000054 = (BADSPACEBASE *)puVar15;
      }
    }
    unaff_lr = 0x71f348;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
  iVar9 = *(int *)PTR_DAT_0071e638;
  iVar13 = *(int *)PTR_DAT_0071e63c;
  *(undefined4 *)((int)register0x00000054 + -0xcc) = *(undefined4 *)PTR_DAT_0071e5dc;
  *(uint *)((int)register0x00000054 + -200) = iVar13 + (1 - iVar9 >> 0x1f & 8U);
  *(int *)((int)register0x00000054 + -0xc4) = iVar5 + -1;
  *(int *)((int)register0x00000054 + -0xc0) = iVar9 + -1;
  FUN_00174e3c();
  iVar5 = *(int *)PTR_DAT_0071e5dc;
  *(undefined4 *)((int)register0x00000054 + -0xa0) = *(undefined4 *)(iVar5 + 0x1c);
  *(undefined4 *)((int)register0x00000054 + -0x78) = *(undefined4 *)(iVar5 + 0x18);
  FUN_000908bc();
  uVar2 = *(undefined4 *)((int)register0x00000054 + -0xcc);
  *(undefined4 *)((int)register0x00000054 + -0x74) = uVar2;
  if (*(int *)((int)register0x00000054 + -0xa0) == 1) {
    uVar2 = (*(undefined4 **)((int)register0x00000054 + -0x78))[1];
    *(undefined4 *)((int)register0x00000054 + -0xcc) =
         **(undefined4 **)((int)register0x00000054 + -0x78);
    *(undefined4 *)((int)register0x00000054 + -200) = uVar2;
    FUN_0008f77c();
    *(undefined4 *)((int)register0x00000054 + -0x10) =
         *(undefined4 *)((int)register0x00000054 + -0xc4);
    *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071e640;
    *(undefined4 *)((int)register0x00000054 + -200) =
         *(undefined4 *)((int)register0x00000054 + -0x74);
    *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0071e644;
    *(undefined4 *)((int)register0x00000054 + -0xc0) = 0xb;
    FUN_00093a08();
    puVar1 = *(undefined4 **)((int)register0x00000054 + -0xbc);
    *puVar1 = PTR_DAT_0071e648;
    if (*(int *)PTR_DAT_0071e5d0 == 0) {
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
    }
    else {
      puVar1 = (undefined4 *)FUN_0009db64();
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
      *unaff_r8 = uVar2;
      unaff_r8[1] = puVar1[1];
    }
    puVar1[1] = uVar2;
  }
  else {
    *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071e640;
    *(undefined4 *)((int)register0x00000054 + -200) = uVar2;
    *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0071e644;
    *(undefined4 *)((int)register0x00000054 + -0xc0) = 0xb;
    FUN_00093a08();
    puVar6 = PTR_DAT_0071e648;
    puVar1 = *(undefined4 **)((int)register0x00000054 + -0xbc);
    *puVar1 = PTR_DAT_0071e648;
    if (*(int *)PTR_DAT_0071e5d0 != 0) {
      puVar1 = (undefined4 *)FUN_0009db54(puVar1,puVar6,puVar1[1]);
      *unaff_r8 = extraout_r2_02;
    }
    puVar1[1] = PTR_DAT_0071e64c;
  }
  uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x14);
  *(undefined4 *)((int)register0x00000054 + -0xcc) =
       *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x10);
  *(undefined4 *)((int)register0x00000054 + -200) = uVar2;
  FUN_0008f77c();
  *(undefined4 *)((int)register0x00000054 + -0x10) =
       *(undefined4 *)((int)register0x00000054 + -0xc4);
  *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071e640;
  *(undefined4 *)((int)register0x00000054 + -200) = *(undefined4 *)((int)register0x00000054 + -0x74)
  ;
  *(undefined **)((int)register0x00000054 + -0xc4) =
       PTR_s_apiserverquery_adctimelapsek3c_e_00823504_0xb0_0071e650;
  *(undefined4 *)((int)register0x00000054 + -0xc0) = 9;
  FUN_00093a08();
  puVar1 = *(undefined4 **)((int)register0x00000054 + -0xbc);
  *puVar1 = PTR_DAT_0071e648;
  if (*(int *)PTR_DAT_0071e5d0 == 0) {
    uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
  }
  else {
    puVar1 = (undefined4 *)FUN_0009db64();
    uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
    *unaff_r8 = uVar2;
    unaff_r8[1] = puVar1[1];
  }
  puVar1[1] = uVar2;
  *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071e640;
  *(undefined4 *)((int)register0x00000054 + -200) = *(undefined4 *)((int)register0x00000054 + -0x74)
  ;
  *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0071e654;
  *(undefined4 *)((int)register0x00000054 + -0xc0) = 0xc;
  FUN_00093a08();
  puVar6 = PTR_DAT_0071e648;
  puVar1 = *(undefined4 **)((int)register0x00000054 + -0xbc);
  *puVar1 = PTR_DAT_0071e648;
  if (*(int *)PTR_DAT_0071e5d0 != 0) {
    puVar1 = (undefined4 *)FUN_0009db54(puVar1,puVar6,puVar1[1]);
    *unaff_r8 = extraout_r2_03;
  }
  puVar1[1] = PTR_DAT_0071e658;
  iVar5 = *(int *)(**(int **)PTR_DAT_0071e65c + 0x20);
  if (iVar5 == 0) {
LAB_0071e414:
    uVar17 = 0xff;
  }
  else if (iVar5 == 5) {
    pcVar3 = *(char **)(**(int **)PTR_DAT_0071e65c + 0x1c);
    if ((((*pcVar3 == 'd') && (pcVar3[1] == 'e')) && (pcVar3[2] == 'b')) &&
       ((pcVar3[3] == 'u' && (pcVar3[4] == 'g')))) goto LAB_0071e414;
    if (((*pcVar3 != 'e') || (pcVar3[1] != 'r')) ||
       ((pcVar3[2] != 'r' || ((pcVar3[3] != 'o' || (pcVar3[4] != 'r')))))) goto LAB_0071e45c;
    uVar17 = 0;
  }
  else {
LAB_0071e45c:
    uVar17 = 0;
  }
  *(undefined1 *)((int)register0x00000054 + -0xa1) = uVar17;
  *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
  *(undefined4 *)((int)register0x00000054 + -8) = 0;
  uVar2 = *(undefined4 *)(**(int **)PTR_DAT_0071e65c + 0x20);
  *(undefined4 *)((int)register0x00000054 + -0xcc) =
       *(undefined4 *)(**(int **)PTR_DAT_0071e65c + 0x1c);
  *(undefined4 *)((int)register0x00000054 + -200) = uVar2;
  FUN_0008f77c();
  *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_0071e648;
  *(undefined4 *)((int)register0x00000054 + -8) = *(undefined4 *)((int)register0x00000054 + -0xc4);
  uVar2 = *(undefined4 *)PTR_DAT_0071e660;
  *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071e664;
  *(undefined4 *)((int)register0x00000054 + -200) = uVar2;
  *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0071e668;
  *(undefined4 *)((int)register0x00000054 + -0xc0) = 0x19;
  *(undefined1 **)((int)register0x00000054 + -0xbc) = (undefined1 *)((int)register0x00000054 + -0xc)
  ;
  *(undefined4 *)((int)register0x00000054 + -0xb8) = 1;
  *(undefined4 *)((int)register0x00000054 + -0xb4) = 1;
  FUN_0013b668();
  if ((((*(int *)(**(int **)PTR_DAT_0071e65c + 0x20) == 5) &&
       (pcVar3 = *(char **)(**(int **)PTR_DAT_0071e65c + 0x1c), *pcVar3 == 'd')) &&
      (pcVar3[1] == 'e')) && (((pcVar3[2] == 'b' && (pcVar3[3] == 'u')) && (pcVar3[4] == 'g')))) {
    uVar2 = 0x32;
  }
  else {
    uVar2 = 3;
  }
  *(undefined4 *)((int)register0x00000054 + -0x98) = uVar2;
  iVar5 = *(int *)((int)register0x00000054 + -4);
  uVar18 = CONCAT44(iVar5,uVar2);
  if (*(char *)(iVar5 + 0x35) == '\0') {
    iVar9 = *(int *)(iVar5 + 0x1c);
    if (iVar9 != 0) {
      *(undefined4 *)((int)register0x00000054 + -0xcc) = *(undefined4 *)(iVar5 + 0x18);
      *(int *)((int)register0x00000054 + -200) = iVar9;
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)((int)register0x00000054 + -0xc4);
      *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071e640;
      *(undefined4 *)((int)register0x00000054 + -200) =
           *(undefined4 *)((int)register0x00000054 + -0x74);
      *(undefined **)((int)register0x00000054 + -0xc4) =
           PTR_s_log_filegcode_fdcpu_infobed_mesh_008216f7_0xf55_0071e66c;
      *(undefined4 *)((int)register0x00000054 + -0xc0) = 8;
      FUN_00093a08();
      puVar1 = *(undefined4 **)((int)register0x00000054 + -0xbc);
      *puVar1 = PTR_DAT_0071e648;
      if (*(int *)PTR_DAT_0071e5d0 == 0) {
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
      }
      else {
        puVar1 = (undefined4 *)FUN_0009db64();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
        *unaff_r8 = uVar2;
        unaff_r8[1] = puVar1[1];
      }
      puVar1[1] = uVar2;
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x18);
      uVar10 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x1c);
      uVar14 = *(undefined4 *)(**(int **)PTR_DAT_0071eea4 + 0x44);
      uVar12 = *(undefined4 *)(**(int **)PTR_DAT_0071eea4 + 0x48);
      *(undefined1 *)((int)register0x00000054 + -0xcc) =
           *(undefined1 *)((int)register0x00000054 + -0xa1);
      *(undefined4 *)((int)register0x00000054 + -200) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0xc4) = uVar10;
      *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar14;
      *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar12;
      *(undefined4 *)((int)register0x00000054 + -0xb8) = 1;
      *(undefined4 *)((int)register0x00000054 + -0xb4) =
           *(undefined4 *)((int)register0x00000054 + -0x98);
      *(undefined4 *)((int)register0x00000054 + -0xb0) = 7;
      *(undefined1 *)((int)register0x00000054 + -0xac) = 1;
      k3c_internal_pkg_logger_InitLogger();
      uVar18 = CONCAT44(*(undefined4 *)((int)register0x00000054 + -4),
                        *(undefined4 *)((int)register0x00000054 + -0x98));
    }
  }
  else {
    uVar2 = *(undefined4 *)(iVar5 + 0x1c);
    *(undefined4 *)((int)register0x00000054 + -0xcc) = *(undefined4 *)(iVar5 + 0x18);
    *(undefined4 *)((int)register0x00000054 + -200) = uVar2;
    FUN_0008f77c();
    *(undefined4 *)((int)register0x00000054 + -0x10) =
         *(undefined4 *)((int)register0x00000054 + -0xc4);
    *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071eea8;
    *(undefined4 *)((int)register0x00000054 + -200) =
         *(undefined4 *)((int)register0x00000054 + -0x74);
    *(undefined **)((int)register0x00000054 + -0xc4) =
         PTR_s_log_filegcode_fdcpu_infobed_mesh_008216f7_0xf55_0071eeac;
    *(undefined4 *)((int)register0x00000054 + -0xc0) = 8;
    FUN_00093a08();
    puVar1 = *(undefined4 **)((int)register0x00000054 + -0xbc);
    *puVar1 = PTR_DAT_0071eeb0;
    if (*(int *)PTR_DAT_0071eeb4 == 0) {
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
    }
    else {
      puVar1 = (undefined4 *)FUN_0009db64();
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
      *unaff_r8 = uVar2;
      unaff_r8[1] = puVar1[1];
    }
    puVar1[1] = uVar2;
    *(undefined1 *)((int)register0x00000054 + -0xcc) =
         *(undefined1 *)((int)register0x00000054 + -0xa1);
    uVar18 = k3c_internal_pkg_logger_InitConsoleLogger();
  }
  k3c_internal_app_installSignalHandler((int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  puVar1 = *(undefined4 **)((int)register0x00000054 + -4);
  iVar5 = puVar1[1];
  *(int *)((int)register0x00000054 + -0x7c) = iVar5;
  if (iVar5 != 0) {
    *(undefined4 *)((int)register0x00000054 + -0xcc) = *puVar1;
    *(int *)((int)register0x00000054 + -200) = iVar5;
    FUN_0008f77c();
    *(undefined4 *)((int)register0x00000054 + -0x10) =
         *(undefined4 *)((int)register0x00000054 + -0xc4);
    *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071eea8;
    *(undefined4 *)((int)register0x00000054 + -200) =
         *(undefined4 *)((int)register0x00000054 + -0x74);
    *(undefined **)((int)register0x00000054 + -0xc4) =
         PTR_s_debuginputdictionaryerror_exitgc_00823504_0xeae_0071eeb8;
    *(undefined4 *)((int)register0x00000054 + -0xc0) = 10;
    FUN_00093a08();
    puVar1 = *(undefined4 **)((int)register0x00000054 + -0xbc);
    *puVar1 = PTR_DAT_0071eeb0;
    if (*(int *)PTR_DAT_0071eeb4 == 0) {
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
    }
    else {
      puVar1 = (undefined4 *)FUN_0009db64();
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
      *unaff_r8 = uVar2;
      unaff_r8[1] = puVar1[1];
    }
    puVar1[1] = uVar2;
    uVar2 = (*(undefined4 **)((int)register0x00000054 + -4))[1];
    *(undefined4 *)((int)register0x00000054 + -0xcc) =
         **(undefined4 **)((int)register0x00000054 + -4);
    *(undefined4 *)((int)register0x00000054 + -200) = uVar2;
    *(undefined4 *)((int)register0x00000054 + -0xc4) = 0;
    *(undefined4 *)((int)register0x00000054 + -0xc0) = 0x1a4;
    FUN_0012dc78();
    uVar18 = *(undefined8 *)((int)register0x00000054 + -0xb8);
    uVar17 = *(int *)((int)register0x00000054 + -0xb8) == 0;
    if (!(bool)uVar17) goto LAB_0071f2c8;
    *(undefined4 *)((int)register0x00000054 + -0x50) =
         *(undefined4 *)((int)register0x00000054 + -0xbc);
    FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x34));
    *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0071eeb0;
    *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_0071eebc;
    uVar2 = (*(undefined4 **)((int)register0x00000054 + -4))[1];
    *(undefined4 *)((int)register0x00000054 + -0xcc) =
         **(undefined4 **)((int)register0x00000054 + -4);
    *(undefined4 *)((int)register0x00000054 + -200) = uVar2;
    FUN_0008f77c();
    *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0071eeb0;
    *(undefined4 *)((int)register0x00000054 + -0x28) =
         *(undefined4 *)((int)register0x00000054 + -0xc4);
    *(undefined1 **)((int)register0x00000054 + -0xcc) =
         (undefined1 *)((int)register0x00000054 + -0x34);
    *(undefined4 *)((int)register0x00000054 + -200) = 2;
    *(undefined4 *)((int)register0x00000054 + -0xc4) = 2;
    k3c_internal_pkg_logger_Warn();
    *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071eea8;
    *(undefined4 *)((int)register0x00000054 + -200) =
         *(undefined4 *)((int)register0x00000054 + -0x74);
    *(undefined **)((int)register0x00000054 + -0xc4) =
         PTR_s_gcode_fdcpu_infobed_meshlis2dw12_008216f7_0xf5d_0071eec0;
    *(undefined4 *)((int)register0x00000054 + -0xc0) = 8;
    FUN_00093a08();
    puVar1 = *(undefined4 **)((int)register0x00000054 + -0xbc);
    *puVar1 = PTR_DAT_0071eec4;
    if (*(int *)PTR_DAT_0071eeb4 == 0) {
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x50);
    }
    else {
      FUN_0009db64();
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x50);
      *unaff_r8 = uVar2;
      unaff_r8[1] = extraout_r2_04[1];
      puVar1 = extraout_r2_04;
    }
    puVar1[1] = uVar2;
    puVar1 = *(undefined4 **)((int)register0x00000054 + -4);
  }
  iVar5 = puVar1[10];
  if (iVar5 != 0) {
    *(undefined4 *)((int)register0x00000054 + -0xcc) = puVar1[9];
    *(int *)((int)register0x00000054 + -200) = iVar5;
    FUN_0008f77c();
    *(undefined4 *)((int)register0x00000054 + -0x10) =
         *(undefined4 *)((int)register0x00000054 + -0xc4);
    *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071eea8;
    *(undefined4 *)((int)register0x00000054 + -200) =
         *(undefined4 *)((int)register0x00000054 + -0x74);
    *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0071eec8;
    *(undefined4 *)((int)register0x00000054 + -0xc0) = 0xb;
    FUN_00093a08();
    puVar1 = *(undefined4 **)((int)register0x00000054 + -0xbc);
    *puVar1 = PTR_DAT_0071eeb0;
    if (*(int *)PTR_DAT_0071eeb4 == 0) {
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
    }
    else {
      puVar1 = (undefined4 *)FUN_0009db64();
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
      *unaff_r8 = uVar2;
      unaff_r8[1] = puVar1[1];
    }
    puVar1[1] = uVar2;
    uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x30);
    *(undefined4 *)((int)register0x00000054 + -0xcc) =
         *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x2c);
    *(undefined4 *)((int)register0x00000054 + -200) = uVar2;
    FUN_0008f77c();
    *(undefined4 *)((int)register0x00000054 + -0x10) =
         *(undefined4 *)((int)register0x00000054 + -0xc4);
    *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071eea8;
    *(undefined4 *)((int)register0x00000054 + -200) =
         *(undefined4 *)((int)register0x00000054 + -0x74);
    *(undefined **)((int)register0x00000054 + -0xc4) =
         PTR_s_dictionaryerror_exitgcode_movehe_00823504_0xeb8_0071eecc;
    *(undefined4 *)((int)register0x00000054 + -0xc0) = 10;
    FUN_00093a08();
    puVar1 = *(undefined4 **)((int)register0x00000054 + -0xbc);
    *puVar1 = PTR_DAT_0071eeb0;
    if (*(int *)PTR_DAT_0071eeb4 == 0) {
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
    }
    else {
      puVar1 = (undefined4 *)FUN_0009db64();
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
      *unaff_r8 = uVar2;
      unaff_r8[1] = puVar1[1];
    }
    puVar1[1] = uVar2;
  }
  *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0071eeb0;
  *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0071eed0;
  *(undefined1 **)((int)register0x00000054 + -0xcc) =
       (undefined1 *)((int)register0x00000054 + -0x24);
  *(undefined4 *)((int)register0x00000054 + -200) = 1;
  *(undefined4 *)((int)register0x00000054 + -0xc4) = 1;
  k3c_internal_pkg_logger_Info();
  FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x4c));
  *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0071eeb0;
  *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_0071eed4;
  *(undefined4 *)((int)register0x00000054 + -0xcc) =
       *(undefined4 *)((int)register0x00000054 + -0x98);
  FUN_00020ce0();
  *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0071eed8;
  *(undefined4 *)((int)register0x00000054 + -0x40) = *(undefined4 *)((int)register0x00000054 + -200)
  ;
  *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0071eeb0;
  *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_0071eedc;
  *(undefined1 **)((int)register0x00000054 + -0xcc) =
       (undefined1 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -200) = 3;
  *(undefined4 *)((int)register0x00000054 + -0xc4) = 3;
  k3c_internal_pkg_logger_Info();
  *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0071eeb0;
  *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0071eee0;
  *(undefined1 **)((int)register0x00000054 + -0xcc) =
       (undefined1 *)((int)register0x00000054 + -0x24);
  *(undefined4 *)((int)register0x00000054 + -200) = 1;
  *(undefined4 *)((int)register0x00000054 + -0xc4) = 1;
  uVar2 = k3c_internal_pkg_logger_Info();
  k3c_internal_pkg_chelper__Cfunc_init_logging_callback(uVar2);
  *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0071eeb0;
  *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0071eee4;
  *(undefined1 **)((int)register0x00000054 + -0xcc) =
       (undefined1 *)((int)register0x00000054 + -0x24);
  *(undefined4 *)((int)register0x00000054 + -200) = 1;
  *(undefined4 *)((int)register0x00000054 + -0xc4) = 1;
  k3c_internal_pkg_logger_Info();
  *(undefined4 *)((int)register0x00000054 + -0xcc) = 0;
  *(undefined4 *)((int)register0x00000054 + -200) = 0;
  FUN_0008f77c();
  *(undefined4 *)((int)register0x00000054 + -0x10) =
       *(undefined4 *)((int)register0x00000054 + -0xc4);
  *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071eea8;
  *(undefined4 *)((int)register0x00000054 + -200) = *(undefined4 *)((int)register0x00000054 + -0x74)
  ;
  *(undefined **)((int)register0x00000054 + -0xc4) =
       PTR_s_software_versionfilament_tracker_008262d0_0x384a_0071eee8;
  *(undefined4 *)((int)register0x00000054 + -0xc0) = 0x10;
  FUN_00093a08();
  puVar1 = *(undefined4 **)((int)register0x00000054 + -0xbc);
  *puVar1 = PTR_DAT_0071eeb0;
  if (*(int *)PTR_DAT_0071eeb4 == 0) {
    uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
  }
  else {
    puVar1 = (undefined4 *)FUN_0009db64();
    uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
    *unaff_r8 = uVar2;
    unaff_r8[1] = puVar1[1];
  }
  puVar1[1] = uVar2;
  k3c_internal_pkg_util_sys_GetCpuInfo();
  FUN_0008f77c();
  *(undefined4 *)((int)register0x00000054 + -0x10) =
       *(undefined4 *)((int)register0x00000054 + -0xc4);
  *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071eea8;
  *(undefined4 *)((int)register0x00000054 + -200) = *(undefined4 *)((int)register0x00000054 + -0x74)
  ;
  *(undefined **)((int)register0x00000054 + -0xc4) =
       PTR_s_cpu_infobed_meshlis2dw12duration_008216f7_0xf65_0071eeec;
  *(undefined4 *)((int)register0x00000054 + -0xc0) = 8;
  FUN_00093a08();
  puVar1 = *(undefined4 **)((int)register0x00000054 + -0xbc);
  *puVar1 = PTR_DAT_0071eeb0;
  if (*(int *)PTR_DAT_0071eeb4 == 0) {
    uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
  }
  else {
    puVar1 = (undefined4 *)FUN_0009db64();
    uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
    *unaff_r8 = uVar2;
    unaff_r8[1] = puVar1[1];
  }
  puVar1[1] = uVar2;
  iVar5 = *(int *)PTR_DAT_0071eef0;
  uVar17 = iVar5 == 1;
  if (iVar5 != 0) {
    iVar9 = *(int *)PTR_DAT_0071eef4;
    *(uint *)((int)register0x00000054 + -0xcc) = *(int *)PTR_DAT_0071eef8 + (1 - iVar9 >> 0x1f & 8U)
    ;
    *(int *)((int)register0x00000054 + -200) = iVar5 + -1;
    *(int *)((int)register0x00000054 + -0xc4) = iVar9 + -1;
    *(undefined **)((int)register0x00000054 + -0xc0) = PTR_DAT_0071eefc;
    *(undefined4 *)((int)register0x00000054 + -0xbc) = 1;
    FUN_0014f8fc();
    *(undefined4 *)((int)register0x00000054 + -0x14) =
         *(undefined4 *)((int)register0x00000054 + -0xb8);
    *(undefined4 *)((int)register0x00000054 + -0x80) =
         *(undefined4 *)((int)register0x00000054 + -0xb4);
    *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071eea8;
    *(undefined4 *)((int)register0x00000054 + -200) =
         *(undefined4 *)((int)register0x00000054 + -0x74);
    *(undefined **)((int)register0x00000054 + -0xc4) =
         PTR_s_software_versionfilament_tracker_008262d0_0x384a_0071eee8;
    *(undefined4 *)((int)register0x00000054 + -0xc0) = 0x10;
    FUN_00025f60();
    puVar6 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0xbc);
    uVar17 = 0;
    puVar11 = PTR_DAT_0071eeb0;
    if (puVar6 == PTR_DAT_0071eeb0) {
      puVar1 = (undefined4 *)(*(undefined4 **)((int)register0x00000054 + -0xbc))[1];
      *(undefined4 *)((int)register0x00000054 + -0x18) = *puVar1;
      *(undefined4 *)((int)register0x00000054 + -0x84) = puVar1[1];
      *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071eea8;
      *(undefined4 *)((int)register0x00000054 + -200) =
           *(undefined4 *)((int)register0x00000054 + -0x74);
      *(undefined **)((int)register0x00000054 + -0xc4) =
           PTR_s_cpu_infobed_meshlis2dw12duration_008216f7_0xf65_0071eeec;
      *(undefined4 *)((int)register0x00000054 + -0xc0) = 8;
      FUN_00025f60();
      puVar6 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0xbc);
      uVar17 = puVar6 == PTR_DAT_0071eeb0;
      if ((bool)uVar17) {
        puVar1 = (undefined4 *)(*(undefined4 **)((int)register0x00000054 + -0xbc))[1];
        *(undefined4 *)((int)register0x00000054 + -0x88) = puVar1[1];
        *(undefined4 *)((int)register0x00000054 + -0x1c) = *puVar1;
        FUN_0009defc(0,(undefined1 *)((int)register0x00000054 + -0x4c));
        *(undefined4 *)((int)register0x00000054 + -0xcc) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -200) =
             *(undefined4 *)((int)register0x00000054 + -0x80);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_0071eeb0;
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + -0xc4);
        *(undefined4 *)((int)register0x00000054 + -0xcc) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -200) =
             *(undefined4 *)((int)register0x00000054 + -0x84);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x44) = PTR_DAT_0071eeb0;
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -0xc4);
        *(undefined4 *)((int)register0x00000054 + -0xcc) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -200) =
             *(undefined4 *)((int)register0x00000054 + -0x88);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x3c) = PTR_DAT_0071eeb0;
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0xc4);
        *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071ef00;
        *(undefined4 *)((int)register0x00000054 + -200) = 0x22;
        *(undefined1 **)((int)register0x00000054 + -0xc4) =
             (undefined1 *)((int)register0x00000054 + -0x4c);
        *(undefined4 *)((int)register0x00000054 + -0xc0) = 3;
        *(undefined4 *)((int)register0x00000054 + -0xbc) = 3;
        k3c_internal_pkg_logger_Infof();
        *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071ef04;
        *(undefined4 *)((int)register0x00000054 + -200) = 0x13;
        *(undefined4 *)((int)register0x00000054 + -0xc4) = 0x441;
        *(undefined4 *)((int)register0x00000054 + -0xc0) = 0x1b6;
        FUN_0012dc78();
        if (*(int *)((int)register0x00000054 + -0xb8) == 0) {
          piVar4 = *(int **)((int)register0x00000054 + -0xbc);
          if (piVar4 == (int *)0x0) {
            uVar2 = 0xffffffff;
          }
          else {
            iVar5 = *piVar4;
            if (*(char *)(iVar5 + 0x34) != '\0') {
              *(int **)((int)register0x00000054 + -0x5c) = piVar4;
              *(int *)((int)register0x00000054 + -0xcc) = iVar5;
              FUN_00121498();
              piVar4 = *(int **)((int)register0x00000054 + -0x5c);
            }
            uVar2 = *(undefined4 *)(*piVar4 + 0x10);
          }
          *(undefined4 *)((int)register0x00000054 + -0xcc) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -200) = 2;
          FUN_000fe180();
        }
        FUN_0002e190();
        if (*(char *)(**(int **)PTR_DAT_0071eea4 + 0x8c) != '\0') {
          *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0071eeb0;
          *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0071ef08;
          *(undefined1 **)((int)register0x00000054 + -0xcc) =
               (undefined1 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -200) = 1;
          *(undefined4 *)((int)register0x00000054 + -0xc4) = 1;
          k3c_internal_pkg_logger_Debug();
          iVar5 = **(int **)PTR_DAT_0071eea4;
          uVar10 = *(undefined4 *)(iVar5 + 0x94);
          uVar12 = *(undefined4 *)(iVar5 + 0x98);
          uVar2 = *(undefined4 *)(iVar5 + 0x9c);
          *(undefined4 *)((int)register0x00000054 + -0xcc) = *(undefined4 *)(iVar5 + 0x90);
          *(undefined4 *)((int)register0x00000054 + -200) = uVar10;
          *(undefined4 *)((int)register0x00000054 + -0xc4) = uVar12;
          *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar2;
          k3c_common_pprof_Run();
        }
        *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071ef0c;
        FUN_00022cf8();
        puVar1 = *(undefined4 **)((int)register0x00000054 + -200);
        *puVar1 = PTR_DAT_0071ef10;
        puVar1[1] = PTR_DAT_0071ef14;
        if (*(int *)((int)register0x00000054 + -0x7c) == 0) {
          uVar2 = 2;
          uVar10 = 2;
        }
        else {
          *(undefined4 **)((int)register0x00000054 + -0xcc) = puVar1;
          *(undefined4 *)((int)register0x00000054 + -200) = 3;
          *(undefined4 *)((int)register0x00000054 + -0xc4) = 2;
          *(undefined4 *)((int)register0x00000054 + -0xc0) = 1;
          *(undefined **)((int)register0x00000054 + -0xbc) = PTR_DAT_0071f350;
          FUN_000987f4();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0xb8);
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0xb0);
          if (*(int *)PTR_DAT_0071f354 != 0) {
            uVar18 = FUN_0009db54(puVar1[2]);
            puVar1 = (undefined4 *)((ulonglong)uVar18 >> 0x20);
            *unaff_r8 = (int)uVar18;
            uVar2 = extraout_r2_05;
          }
          puVar1[2] = PTR_DAT_0071f358;
          uVar10 = 3;
        }
        *(undefined4 *)((int)register0x00000054 + -0x8c) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x90) = uVar10;
        *(undefined4 **)((int)register0x00000054 + -0x54) = puVar1;
        k3c_internal_pkg_reactor_NewReactor();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0xcc);
        *(undefined4 *)((int)register0x00000054 + -0x60) = uVar2;
        do {
          pcVar7 = (code *)**(undefined4 **)PTR_DAT_0071f35c;
          *(undefined4 *)((int)register0x00000054 + -0xcc) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -200) =
               *(undefined4 *)((int)register0x00000054 + -0x74);
          *(undefined4 *)((int)register0x00000054 + -0xc4) =
               *(undefined4 *)((int)register0x00000054 + -0x54);
          *(undefined4 *)((int)register0x00000054 + -0xc0) =
               *(undefined4 *)((int)register0x00000054 + -0x90);
          *(undefined4 *)((int)register0x00000054 + -0xbc) =
               *(undefined4 *)((int)register0x00000054 + -0x8c);
          *(undefined **)((int)register0x00000054 + -0xb8) = PTR_DAT_0071f360;
          (*pcVar7)();
          *(undefined4 *)((int)register0x00000054 + -0x6c) =
               *(undefined4 *)((int)register0x00000054 + -0xb4);
          *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071f364;
          *(undefined4 *)((int)register0x00000054 + -200) =
               *(undefined4 *)((int)register0x00000054 + -0xb4);
          FUN_0008ec5c();
          iVar5 = *(int *)((int)register0x00000054 + -0x6c);
          uVar2 = **(undefined4 **)PTR_DAT_0071f368;
          if (*(int *)PTR_DAT_0071f354 != 0) {
            iVar5 = FUN_0009db64();
            *unaff_r8 = extraout_r2_06;
            unaff_r8[1] = *(undefined4 *)(iVar5 + 0x68);
            uVar2 = extraout_r2_06;
          }
          *(undefined4 *)(iVar5 + 0x68) = uVar2;
          *(int *)((int)register0x00000054 + -0xcc) = iVar5;
          k3c_internal_app_registerModules();
          uVar2 = *(undefined4 *)((int)register0x00000054 + -200);
          if (*(int *)PTR_DAT_0071f354 == 0) {
            iVar5 = *(int *)((int)register0x00000054 + -0x6c);
          }
          else {
            FUN_0009db64();
            *unaff_r8 = extraout_r1_02;
            iVar5 = *(int *)((int)register0x00000054 + -0x6c);
            unaff_r8[1] = *(undefined4 *)(iVar5 + 0x2c);
            uVar2 = extraout_r1_02;
          }
          *(undefined4 *)(iVar5 + 0x2c) = uVar2;
          *(int *)((int)register0x00000054 + -0xcc) = iVar5;
          k3c_internal_pkg_printer___Printer__Run();
          *(undefined4 *)((int)register0x00000054 + -0x70) =
               *(undefined4 *)((int)register0x00000054 + -200);
          *(undefined4 *)((int)register0x00000054 + -0x9c) =
               *(undefined4 *)((int)register0x00000054 + -0xc4);
          FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x34),
                       *(undefined4 *)((int)register0x00000054 + -0xc4),
                       *(undefined4 *)((int)register0x00000054 + -200));
          *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0071f36c;
          *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_0071f370;
          *(undefined4 *)((int)register0x00000054 + -0xcc) = extraout_r3;
          *(undefined4 *)((int)register0x00000054 + -200) = extraout_r2_07;
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0071f36c;
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)((int)register0x00000054 + -0xc4);
          *(undefined1 **)((int)register0x00000054 + -0xcc) =
               (undefined1 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -200) = 2;
          *(undefined4 *)((int)register0x00000054 + -0xc4) = 2;
          k3c_internal_pkg_logger_Error();
          iVar5 = *(int *)((int)register0x00000054 + -0x9c);
          if (iVar5 == 4) {
            pcVar3 = *(char **)((int)register0x00000054 + -0x70);
            if (((*pcVar3 != 'e') || (pcVar3[1] != 'x')) ||
               ((pcVar3[2] != 'i' || (pcVar3[3] != 't')))) goto LAB_0071f124;
            cVar8 = '\x01';
          }
          else {
            pcVar3 = *(char **)((int)register0x00000054 + -0x70);
LAB_0071f124:
            if (iVar5 == 10) {
              *(char **)((int)register0x00000054 + -0xcc) = pcVar3;
              *(undefined **)((int)register0x00000054 + -200) =
                   PTR_s_error_exitgcode_moveheater_bedfo_00823504_0xec2_0071f374;
              *(undefined4 *)((int)register0x00000054 + -0xc4) = 10;
              FUN_00018250();
              cVar8 = *(char *)((int)register0x00000054 + -0xc0);
              pcVar3 = *(char **)((int)register0x00000054 + -0x70);
              iVar5 = *(int *)((int)register0x00000054 + -0x9c);
            }
            else {
              cVar8 = '\0';
            }
          }
          if (cVar8 != '\0') {
            if (iVar5 == 10) {
              *(char **)((int)register0x00000054 + -0xcc) = pcVar3;
              *(undefined **)((int)register0x00000054 + -200) =
                   PTR_s_error_exitgcode_moveheater_bedfo_00823504_0xec2_0071f374;
              *(undefined4 *)((int)register0x00000054 + -0xc4) = 10;
              FUN_00018250();
              if (*(char *)((int)register0x00000054 + -0xc0) != '\0') {
                *(undefined4 *)((int)register0x00000054 + -0xcc) = 0xffffffff;
                FUN_00131c2c();
              }
            }
            *(undefined4 *)((int)register0x00000054 + -0xcc) = 0;
            FUN_00131c2c();
            return;
          }
          *(undefined **)((int)register0x00000054 + -0x34) = PTR_DAT_0071f36c;
          *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_0071f378;
          *(undefined **)((int)register0x00000054 + -0x2c) = PTR_DAT_0071f37c;
          *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_0071f380;
          *(undefined1 **)((int)register0x00000054 + -0xcc) =
               (undefined1 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -200) = 2;
          *(undefined4 *)((int)register0x00000054 + -0xc4) = 2;
          k3c_internal_pkg_logger_Debug();
          *(undefined4 *)((int)register0x00000054 + -0xcc) = DAT_0071f384;
          *(undefined4 *)((int)register0x00000054 + -200) = 0;
          FUN_0009a76c();
          *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0071f36c;
          *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0071f388;
          *(undefined1 **)((int)register0x00000054 + -0xcc) =
               (undefined1 *)((int)register0x00000054 + -0x24);
          *(undefined4 *)((int)register0x00000054 + -200) = 1;
          *(undefined4 *)((int)register0x00000054 + -0xc4) = 1;
          k3c_internal_pkg_logger_Error();
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + -0x70);
          *(undefined4 *)((int)register0x00000054 + -200) =
               *(undefined4 *)((int)register0x00000054 + -0x9c);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + -0xc4);
          *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0071f38c;
          *(undefined4 *)((int)register0x00000054 + -200) =
               *(undefined4 *)((int)register0x00000054 + -0x74);
          *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0071f390;
          *(undefined4 *)((int)register0x00000054 + -0xc0) = 0xc;
          FUN_00093a08();
          puVar1 = *(undefined4 **)((int)register0x00000054 + -0xbc);
          *puVar1 = PTR_DAT_0071f36c;
          if (*(int *)PTR_DAT_0071f354 == 0) {
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
          }
          else {
            puVar1 = (undefined4 *)FUN_0009db64();
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x10);
            *unaff_r8 = uVar2;
            unaff_r8[1] = puVar1[1];
          }
          puVar1[1] = uVar2;
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x60);
        } while( true );
      }
      *(undefined **)((int)register0x00000054 + -0xcc) = puVar6;
      *(undefined **)((int)register0x00000054 + -200) = PTR_DAT_0071eeb0;
      *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0071f394;
      FUN_000209b4();
      puVar6 = extraout_r1_03;
      puVar11 = extraout_r2_08;
    }
    *(undefined **)((int)register0x00000054 + -0xcc) = puVar6;
    *(undefined **)((int)register0x00000054 + -200) = puVar11;
    *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0071f394;
    FUN_000209b4();
  }
  uVar18 = FUN_0009dc34(1,0);
LAB_0071f2c8:
  *(int *)((int)register0x00000054 + -0x94) = (int)uVar18;
  *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  if (!(bool)uVar17) {
    uVar18 = CONCAT44((int)((ulonglong)uVar18 >> 0x20),*(undefined4 *)((int)uVar18 + 4));
  }
  do {
    *(int *)((int)register0x00000054 + -0x58) = (int)((ulonglong)uVar18 >> 0x20);
    *(undefined8 *)((int)register0x00000054 + -0x24) = uVar18;
    *(undefined1 **)((int)register0x00000054 + -0xcc) =
         (undefined1 *)((int)register0x00000054 + -0x24);
    *(undefined4 *)((int)register0x00000054 + -200) = 1;
    *(undefined4 *)((int)register0x00000054 + -0xc4) = 1;
    k3c_internal_pkg_logger_Error();
    uVar2 = 0;
    if (*(int *)((int)register0x00000054 + -0x94) != 0) {
      uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x94) + 4);
    }
    *(undefined4 *)((int)register0x00000054 + -0xcc) = uVar2;
    *(undefined4 *)((int)register0x00000054 + -200) =
         *(undefined4 *)((int)register0x00000054 + -0x58);
    uVar18 = FUN_00095b00();
  } while( true );
}



/* k3c/internal/app.Start.func1 @ 0071f398 (size 216) */

void k3c_internal_app_Start_func1(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  int unaff_r7;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = unaff_lr;
      FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10),*(undefined4 *)(unaff_r7 + 4),
                   *(undefined4 *)(unaff_r7 + 8));
      bVar3 = *DAT_0071f474 == 0;
      if (!bVar3) {
        *(undefined4 *)((int)register0x00000054 + -0x14) = extraout_r2;
        *(undefined4 *)((int)register0x00000054 + -0x18) = extraout_r3;
        uVar1 = ((undefined4 *)*DAT_0071f478)[1];
        *(undefined4 *)((int)register0x00000054 + -0x38) = *(undefined4 *)*DAT_0071f478;
        *(undefined4 *)((int)register0x00000054 + -0x34) = uVar1;
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_0071f47c;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_0071f47c;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        uVar1 = *DAT_0071f480;
        *(undefined4 *)((int)register0x00000054 + -0x38) = DAT_0071f484;
        *(undefined4 *)((int)register0x00000054 + -0x34) = uVar1;
        *(undefined1 **)((int)register0x00000054 + -0x30) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x28) = 2;
        FUN_0013bb30();
        return;
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x3c);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x71f46c;
    param_1 = FUN_0009bf00(param_1);
  } while( true );
}



/* k3c/internal/app.registerModules @ 0071f488 (size 5368) */

void k3c_internal_app_registerModules(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 extraout_r2_03;
  undefined4 extraout_r2_04;
  undefined4 extraout_r2_05;
  undefined4 extraout_r2_06;
  undefined4 extraout_r2_07;
  undefined4 extraout_r2_08;
  undefined4 extraout_r2_09;
  undefined4 extraout_r2_10;
  undefined4 extraout_r2_11;
  undefined4 extraout_r2_12;
  undefined4 extraout_r2_13;
  undefined4 extraout_r2_14;
  undefined4 extraout_r2_15;
  undefined4 extraout_r2_16;
  undefined4 extraout_r2_17;
  undefined4 extraout_r2_18;
  undefined4 extraout_r2_19;
  undefined4 extraout_r2_20;
  undefined4 extraout_r2_21;
  undefined4 extraout_r2_22;
  undefined4 extraout_r2_23;
  undefined4 extraout_r2_24;
  undefined4 extraout_r2_25;
  undefined4 extraout_r2_26;
  undefined4 extraout_r2_27;
  undefined4 extraout_r2_28;
  undefined4 extraout_r2_29;
  undefined4 extraout_r2_30;
  undefined4 extraout_r2_31;
  undefined4 extraout_r2_32;
  undefined4 extraout_r2_33;
  undefined4 extraout_r2_34;
  undefined4 extraout_r2_35;
  undefined4 extraout_r2_36;
  undefined4 extraout_r2_37;
  undefined4 extraout_r2_38;
  undefined4 extraout_r2_39;
  undefined4 extraout_r2_40;
  undefined4 extraout_r2_41;
  undefined4 extraout_r2_42;
  undefined4 extraout_r2_43;
  undefined4 extraout_r2_44;
  undefined4 extraout_r2_45;
  undefined4 extraout_r2_46;
  undefined4 extraout_r2_47;
  undefined4 extraout_r2_48;
  undefined4 extraout_r2_49;
  undefined4 extraout_r2_50;
  undefined4 extraout_r2_51;
  undefined4 extraout_r2_52;
  undefined4 extraout_r2_53;
  undefined4 extraout_r2_54;
  undefined4 extraout_r2_55;
  undefined4 extraout_r2_56;
  undefined4 extraout_r2_57;
  undefined4 extraout_r2_58;
  undefined4 extraout_r2_59;
  undefined4 extraout_r2_60;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar3;
  undefined4 in_stack_00000008;
  undefined4 *local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0009090c();
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2;
  }
  puVar2[1] = PTR_DAT_00720350;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_00;
  }
  puVar2[1] = PTR_DAT_00720358;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_01;
  }
  puVar2[1] = PTR_DAT_00720360;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_02;
  }
  puVar2[1] = PTR_DAT_00720368;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_03;
  }
  puVar2[1] = PTR_DAT_00720370;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_04;
  }
  puVar2[1] = PTR_DAT_00720378;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_05;
  }
  puVar2[1] = PTR_DAT_00720380;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_06;
  }
  puVar2[1] = PTR_DAT_00720388;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_07;
  }
  puVar2[1] = PTR_DAT_00720390;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_08;
  }
  puVar2[1] = PTR_DAT_00720398;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_09;
  }
  puVar2[1] = PTR_DAT_007203a0;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_10;
  }
  puVar2[1] = PTR_DAT_007203a8;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_11;
  }
  puVar2[1] = PTR_DAT_007203b0;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_12;
  }
  puVar2[1] = PTR_DAT_007203b8;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_13;
  }
  puVar2[1] = PTR_DAT_007203b8;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_14;
  }
  puVar2[1] = PTR_DAT_007203b8;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_15;
  }
  puVar2[1] = PTR_DAT_007203b8;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_16;
  }
  puVar2[1] = PTR_DAT_007203b8;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_17;
  }
  puVar2[1] = PTR_DAT_007203d0;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_18;
  }
  puVar2[1] = PTR_DAT_007203d8;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_19;
  }
  puVar2[1] = PTR_DAT_007203e0;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_20;
  }
  puVar2[1] = PTR_DAT_007203e8;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_21;
  }
  puVar2[1] = PTR_DAT_007203f0;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_22;
  }
  puVar2[1] = PTR_DAT_007203f8;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_23;
  }
  puVar2[1] = PTR_DAT_00720400;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_24;
  }
  puVar2[1] = PTR_DAT_00720408;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_25;
  }
  puVar2[1] = PTR_DAT_00720410;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_26;
  }
  puVar2[1] = PTR_DAT_00720418;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_27;
  }
  puVar2[1] = PTR_DAT_00720420;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_28;
  }
  puVar2[1] = PTR_DAT_00720428;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_29;
  }
  puVar2[1] = PTR_DAT_00720430;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_30;
  }
  puVar2[1] = PTR_DAT_00720438;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_31;
  }
  puVar2[1] = PTR_DAT_00720440;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_32;
  }
  puVar2[1] = PTR_DAT_00720448;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_33;
  }
  puVar2[1] = PTR_DAT_00720450;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_34;
  }
  puVar2[1] = PTR_DAT_00720458;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_35;
  }
  puVar2[1] = PTR_DAT_00720460;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_36;
  }
  puVar2[1] = PTR_DAT_00720468;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_37;
  }
  puVar2[1] = PTR_DAT_00720470;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_38;
  }
  puVar2[1] = PTR_DAT_00720478;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_39;
  }
  puVar2[1] = PTR_DAT_00720480;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_40;
  }
  puVar2[1] = PTR_DAT_00720488;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_41;
  }
  puVar2[1] = PTR_DAT_00720490;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720348;
  *local_8 = PTR_DAT_00720348;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_0072034c != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_42;
  }
  puVar2[1] = PTR_DAT_00720498;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_43;
  }
  puVar2[1] = PTR_DAT_00720aec;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_44;
  }
  puVar2[1] = PTR_DAT_00720af8;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_45;
  }
  puVar2[1] = PTR_DAT_00720b00;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_46;
  }
  puVar2[1] = PTR_DAT_00720b08;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_47;
  }
  puVar2[1] = PTR_DAT_00720b10;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_48;
  }
  puVar2[1] = PTR_DAT_00720b18;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_49;
  }
  puVar2[1] = PTR_DAT_00720b20;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_50;
  }
  puVar2[1] = PTR_DAT_00720b28;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_51;
  }
  puVar2[1] = PTR_DAT_00720b30;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_52;
  }
  puVar2[1] = PTR_DAT_00720b38;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_53;
  }
  puVar2[1] = PTR_DAT_00720b40;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_54;
  }
  puVar2[1] = PTR_DAT_00720b48;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_55;
  }
  puVar2[1] = PTR_DAT_00720b50;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_56;
  }
  puVar2[1] = PTR_DAT_00720b58;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_57;
  }
  puVar2[1] = PTR_DAT_00720b60;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_58;
  }
  puVar2[1] = PTR_DAT_00720b68;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_59;
  }
  puVar2[1] = PTR_DAT_00720b70;
  FUN_00093a08();
  puVar1 = PTR_DAT_00720ae4;
  *local_8 = PTR_DAT_00720ae4;
  puVar2 = local_8;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db54(local_8,puVar1,local_8[1]);
    *unaff_r8 = extraout_r2_60;
  }
  puVar2[1] = PTR_DAT_00720b78;
  FUN_00093a08();
  *local_8 = PTR_DAT_00720ae4;
  if (*(int *)PTR_DAT_00720ae8 != 0) {
    uVar3 = FUN_0009db54(local_8,local_8[1]);
    local_8 = (undefined4 *)uVar3;
    *unaff_r8 = (int)((ulonglong)uVar3 >> 0x20);
  }
  local_8[1] = PTR_DAT_00720b80;
  return;
}



/* k3c/internal/app.writeDiagnostics @ 00720b84 (size 332) */

void k3c_internal_app_writeDiagnostics(void)

{
  int iVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 *local_3c;
  int local_2c;
  undefined1 local_18 [16];
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0001af6c();
  FUN_00022cf8();
  iVar1 = 0;
  puRam00000000 = PTR_k3c_internal_app_writeDiagnostics_func1_00720cdc;
  if (*(int *)PTR_DAT_00720ce0 != 0) {
    iVar1 = FUN_0009db64();
    *unaff_r8 = local_3c;
    unaff_r8[1] = in_stack_00000008;
  }
  *(undefined4 **)(iVar1 + 4) = local_3c;
  *(undefined4 *)(iVar1 + 8) = in_stack_00000004;
  *(undefined4 *)(iVar1 + 0xc) = in_stack_00000008;
  FUN_00062dd0();
  FUN_0010921c();
  FUN_0009df04(0,local_18,*local_3c);
  FUN_0006cba4();
  if (local_2c == 0) {
    local_8 = DAT_00720ce8;
    local_4 = DAT_00720cec;
    k3c_internal_pkg_logger_Warnf();
  }
  return;
}



/* k3c/internal/app.writeDiagnostics.func1 @ 00720cf4 (size 1200) */

void k3c_internal_app_writeDiagnostics_func1(void)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 *extraout_r3;
  int unaff_r7;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 *puStack_90;
  undefined4 *puStack_8c;
  undefined4 *puStack_88;
  undefined4 *puStack_84;
  int iStack_80;
  undefined4 *puStack_7c;
  int iStack_78;
  undefined4 *puStack_74;
  undefined4 uStack_70;
  undefined1 uStack_69;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  undefined1 auStack_4c [20];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 *puStack_4;
  
  while (&uStack_14 <= *(undefined4 **)(unaff_r10 + 8)) {
    unaff_lr = 0x7211a8;
    FUN_0009bf00();
  }
  uStack_20 = *(undefined4 *)(unaff_r7 + 4);
  iStack_60 = *(int *)(unaff_r7 + 8);
  puStack_50 = *(undefined4 **)(unaff_r7 + 0xc);
  uStack_24 = DAT_007211b0;
  puStack_4 = &uStack_24;
  uStack_69 = 1;
  uVar1 = FUN_001160a8();
  uVar1 = FUN_0009e2f0(uVar1,&puStack_90,auStack_4c);
  FUN_0009e2f0(uVar1,auStack_4c,&puStack_90);
  puStack_7c = (undefined4 *)DAT_007211b4;
  iStack_78 = 0xf;
  FUN_00101cdc();
  puStack_54 = puStack_74;
  uStack_64 = uStack_70;
  FUN_0009df04(0,&uStack_34,uStack_70,puStack_74,unaff_lr);
  uStack_30 = 4;
  uStack_34 = DAT_007211b8;
  puStack_90 = (undefined4 *)0x0;
  puStack_8c = (undefined4 *)DAT_007211bc;
  puStack_88 = (undefined4 *)0x9;
  puStack_84 = extraout_r3;
  iStack_80 = extraout_r2;
  FUN_0007636c();
  iStack_28 = iStack_78;
  uStack_2c = puStack_7c;
  puStack_90 = &uStack_34;
  puStack_8c = (undefined4 *)0x2;
  puStack_88 = (undefined4 *)0x2;
  FUN_0028054c();
  puStack_58 = puStack_84;
  uStack_68 = iStack_80;
  puStack_90 = puStack_84;
  puStack_8c = (undefined4 *)iStack_80;
  puStack_88 = (undefined4 *)0x1ed;
  FUN_001309b8();
  if (puStack_84 == (undefined4 *)0x0) {
    puStack_90 = puStack_58;
    puStack_8c = (undefined4 *)uStack_68;
    puStack_88 = puStack_54;
    puStack_84 = (undefined4 *)uStack_64;
    iStack_80 = iStack_60;
    puStack_7c = puStack_50;
    k3c_internal_app_writeMemStats();
    if (iStack_78 != 0) {
      uStack_1c = *(undefined4 *)(iStack_78 + 4);
      puStack_18 = puStack_74;
      puStack_90 = DAT_007211c8;
      puStack_8c = (undefined4 *)0x12;
      puStack_88 = &uStack_1c;
      puStack_84 = (undefined4 *)0x1;
      iStack_80 = 1;
      k3c_internal_pkg_logger_Warnf();
    }
    puStack_90 = puStack_58;
    puStack_8c = (undefined4 *)uStack_68;
    puStack_88 = puStack_54;
    puStack_84 = (undefined4 *)uStack_64;
    k3c_internal_app_writeHeapProfile();
    if (iStack_80 != 0) {
      uStack_1c = *(undefined4 *)(iStack_80 + 4);
      puStack_18 = puStack_7c;
      puStack_90 = DAT_007211cc;
      puStack_8c = (undefined4 *)0x16;
      puStack_88 = &uStack_1c;
      puStack_84 = (undefined4 *)0x1;
      iStack_80 = 1;
      k3c_internal_pkg_logger_Warnf();
    }
    puStack_90 = puStack_58;
    puStack_8c = (undefined4 *)uStack_68;
    puStack_88 = puStack_54;
    puStack_84 = (undefined4 *)uStack_64;
    k3c_internal_app_writeAllocsProfile();
    if (iStack_80 != 0) {
      uStack_1c = *(undefined4 *)(iStack_80 + 4);
      puStack_18 = puStack_7c;
      puStack_90 = DAT_007211d0;
      puStack_8c = (undefined4 *)0x18;
      puStack_88 = &uStack_1c;
      puStack_84 = (undefined4 *)0x1;
      iStack_80 = 1;
      k3c_internal_pkg_logger_Warnf();
    }
    puStack_90 = puStack_58;
    puStack_8c = (undefined4 *)uStack_68;
    puStack_88 = puStack_54;
    puStack_84 = (undefined4 *)uStack_64;
    k3c_internal_app_writeGoroutineProfile();
    if (iStack_80 != 0) {
      uStack_1c = *(undefined4 *)(iStack_80 + 4);
      puStack_18 = puStack_7c;
      puStack_90 = DAT_007211d4;
      puStack_8c = (undefined4 *)0x1b;
      puStack_88 = &uStack_1c;
      puStack_84 = (undefined4 *)0x1;
      iStack_80 = 1;
      k3c_internal_pkg_logger_Warnf();
    }
    uStack_1c = 0;
    puStack_18 = (undefined4 *)0x0;
    puStack_90 = puStack_58;
    puStack_8c = (undefined4 *)uStack_68;
    FUN_0008f77c();
    uStack_1c = DAT_007211c0;
    puStack_18 = puStack_88;
    puStack_90 = DAT_007211d8;
    puStack_8c = (undefined4 *)&DAT_00000019;
    puStack_88 = &uStack_1c;
    puStack_84 = (undefined4 *)0x1;
    iStack_80 = 1;
    k3c_internal_pkg_logger_Infof();
    k3c_internal_app_cleanOldDiagDirs();
    if (puStack_90 != (undefined4 *)0x0) {
      uStack_1c = puStack_90[1];
      puStack_18 = puStack_8c;
      puStack_90 = DAT_007211dc;
      puStack_8c = (undefined4 *)&DAT_00000019;
      puStack_88 = &uStack_1c;
      puStack_84 = (undefined4 *)0x1;
      iStack_80 = 1;
      k3c_internal_pkg_logger_Warnf();
    }
    uStack_69 = 0;
    (*(code *)*puStack_4)();
    return;
  }
  uStack_38 = iStack_80;
  puStack_5c = puStack_84;
  FUN_0009df04(0,&uStack_14);
  puStack_90 = puStack_58;
  puStack_8c = (undefined4 *)uStack_68;
  FUN_0008f77c();
  uStack_14 = DAT_007211c0;
  uStack_10 = puStack_88;
  if (puStack_5c == (undefined4 *)0x0) {
    uStack_c = 0;
  }
  else {
    uStack_c = puStack_5c[1];
  }
  uStack_8 = uStack_38;
  puStack_90 = DAT_007211c4;
  puStack_8c = (undefined4 *)0x1d;
  puStack_88 = &uStack_14;
  puStack_84 = (undefined4 *)0x2;
  iStack_80 = 2;
  k3c_internal_pkg_logger_Warnf();
  uStack_69 = 0;
  (*(code *)*puStack_4)();
  return;
}



/* k3c/internal/app.writeDiagnostics.func1.deferwrap1 @ 007211e0 (size 84) */

void k3c_internal_app_writeDiagnostics_func1_deferwrap1(void)

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
  FUN_0001bbd8();
  return;
}



/* k3c/internal/app.writeMemStats @ 00721234 (size 4372) */

void k3c_internal_app_writeMemStats(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar6;
  undefined4 extraout_r2;
  undefined4 uVar7;
  uint uVar8;
  uint extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  uint uVar9;
  int unaff_r10;
  undefined4 unaff_lr;
  bool bVar10;
  undefined1 local_15e4 [5604];
  undefined4 *puVar5;
  
  while( true ) {
    iVar1 = DAT_00721e84;
    bVar10 = &stack0x00000000 == (undefined1 *)0x15e4;
    if ((undefined1 *)0x15e3 < &stack0x00000000) {
      bVar10 = local_15e4 == *(undefined1 **)(unaff_r10 + 8);
    }
    if (((undefined1 *)0x15e3 < &stack0x00000000 && *(undefined1 **)(unaff_r10 + 8) <= local_15e4)
        && !bVar10) break;
    unaff_lr = 0x72245c;
    FUN_0009bf64();
  }
  *(undefined4 *)(&stack0x00000000 + DAT_00721e84) = unaff_lr;
  *(undefined4 *)(&stack0x00000000 + DAT_00721e88 + DAT_00721e84) = 0;
  (&stack0x0000002f)[DAT_00721e84] = 0;
  *(undefined4 *)(&stack0x00000000 + DAT_00721e8c + DAT_00721e84) = 0;
  *(undefined4 *)(&stack0x00000000 + DAT_00721e90 + DAT_00721e84) = 0;
  *(undefined4 *)(&stack0x00000000 + DAT_00721e94 + DAT_00721e84) = 0;
  *(undefined4 *)(&stack0x00000000 + DAT_00721e98 + DAT_00721e84) = 0;
  *(undefined4 *)(&stack0x00000004 + DAT_00721e84) =
       *(undefined4 *)(&stack0x00000000 + DAT_00721e9c + DAT_00721e84);
  *(undefined4 *)(&stack0x00000008 + DAT_00721e84) =
       *(undefined4 *)(&stack0x00000000 + DAT_00721ea0 + DAT_00721e84);
  FUN_0008f77c();
  uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
  *(undefined4 *)(&stack0x00000000 + DAT_00721e94 + iVar1) = DAT_00721ea4;
  *(undefined4 *)(&stack0x00000000 + DAT_00721e98 + iVar1) = uVar2;
  *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_00721ea8;
  *(undefined4 *)(&stack0x00000008 + iVar1) = 0xf;
  *(undefined1 **)(&stack0x0000000c + iVar1) = &stack0x00000000 + DAT_00721e94 + iVar1;
  *(undefined4 *)(&stack0x00000010 + iVar1) = 1;
  *(undefined4 *)(&stack0x00000014 + iVar1) = 1;
  FUN_0013b72c();
  FUN_0009df04(0,&stack0x00000000 + DAT_00721eac + iVar1,*(undefined4 *)(&stack0x0000001c + iVar1),
               *(undefined4 *)(&stack0x00000018 + iVar1));
  *(undefined4 *)(&stack0x00000000 + DAT_00721eb4 + iVar1) =
       *(undefined4 *)(&stack0x00000000 + DAT_00721eb0 + iVar1);
  *(undefined4 *)(&stack0x00000000 + DAT_00721eac + iVar1) =
       *(undefined4 *)(&stack0x00000000 + DAT_00721eb8 + iVar1);
  *(undefined4 *)(&stack0x00000000 + DAT_00721ebc + iVar1) = extraout_r2;
  *(undefined4 *)(&stack0x00000000 + DAT_00721ec0 + iVar1) = extraout_r3;
  *(undefined1 **)(&stack0x00000004 + iVar1) = &stack0x00000000 + DAT_00721eac + iVar1;
  *(undefined4 *)(&stack0x00000008 + iVar1) = 2;
  *(undefined4 *)(&stack0x0000000c + iVar1) = 2;
  FUN_0028054c();
  *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000010 + iVar1);
  *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x00000014 + iVar1);
  *(undefined4 *)(&stack0x0000000c + iVar1) = 0x242;
  *(undefined4 *)(&stack0x00000010 + iVar1) = 0x1b6;
  FUN_0012dc78();
  if (*(int *)(&stack0x00000018 + iVar1) == 0) {
    uVar2 = *(undefined4 *)(&stack0x00000014 + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721ec4 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000000 + DAT_00721ecc + iVar1) = DAT_00721ec8;
    *(undefined4 *)(&stack0x00000000 + DAT_00721ed0 + iVar1) = uVar2;
    *(undefined1 **)(&stack0x00000000 + DAT_00721e88 + iVar1) =
         &stack0x00000000 + DAT_00721ecc + iVar1;
    (&stack0x0000002f)[iVar1] = 1;
    puVar4 = (undefined4 *)(&stack0x00000030 + iVar1);
    do {
      puVar5 = puVar4 + 1;
      *puVar4 = 0;
      puVar4 = puVar5;
    } while ((int)puVar5 <= (int)(&stack0x00000000 + DAT_00721ed4 + iVar1));
    *(undefined1 **)(&stack0x00000004 + iVar1) = &stack0x00000030 + iVar1;
    FUN_0004e290();
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_00721ed8;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721ec4 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_00721edc;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x1d;
    *(undefined4 *)(&stack0x00000014 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 0;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 0;
    FUN_0013b668();
    uVar2 = FUN_001160a8();
    uVar2 = FUN_0009e2f0(uVar2,&stack0x00000004 + iVar1,&stack0x00000000 + DAT_00721ee0 + iVar1);
    FUN_0009e2f0(uVar2,&stack0x00000000 + DAT_00721ee0 + iVar1,&stack0x00000004 + iVar1);
    *(undefined4 *)(&stack0x00000018 + iVar1) = DAT_00721ee4;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 0x13;
    FUN_00101cdc();
    uVar2 = *(undefined4 *)(&stack0x00000020 + iVar1);
    uVar7 = *(undefined4 *)(&stack0x00000024 + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721e94 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000000 + DAT_00721e98 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000008 + iVar1) = uVar7;
    FUN_0008f77c();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721e94 + iVar1) = DAT_00721ea4;
    *(undefined4 *)(&stack0x00000000 + DAT_00721e98 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_00721ed8;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721ec4 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_00721ee8;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 9;
    *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_00721e94 + iVar1;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 1;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 1;
    FUN_0013b668();
    *(undefined4 *)(&stack0x00000000 + DAT_00721e94 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000000 + DAT_00721e98 + iVar1) = 0;
    if (*(int *)(&stack0x00000000 + DAT_00721eec + iVar1) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(&stack0x00000000 + DAT_00721eec + iVar1) + 4);
    }
    *(undefined4 *)(&stack0x00000000 + DAT_00721e94 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000000 + DAT_00721e98 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721ef0 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_00721ed8;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721ec4 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_00721ef4;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0xc;
    *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_00721e94 + iVar1;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 1;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 1;
    FUN_0013b668();
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_00721ed8;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721ec4 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_00721ef8;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x1a;
    *(undefined4 *)(&stack0x00000014 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 0;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 0;
    FUN_0013b668();
    FUN_0009df04(0,&stack0x00000000 + DAT_00721efc + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000030 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x00000034 + iVar1);
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721efc + iVar1) = DAT_00721f00;
    *(undefined4 *)(&stack0x00000000 + DAT_00721f04 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000030 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x00000034 + iVar1);
    FUN_0008b984();
    *(double *)(&stack0x00000000 + DAT_00721f0c + iVar1) =
         *DAT_00721f08 * *DAT_00721f08 * *(double *)(&stack0x0000000c + iVar1);
    uVar2 = *(undefined4 *)(&stack0x00000000 + DAT_00721f10 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721f0c + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = uVar2;
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721f18 + iVar1) = DAT_00721f14;
    *(undefined4 *)(&stack0x00000000 + DAT_00721f1c + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_00721ed8;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721ec4 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_00721f20;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x21;
    *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_00721efc + iVar1;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 2;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 2;
    FUN_0013b668();
    FUN_0009df04(0,&stack0x00000000 + DAT_00721efc + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000038 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x0000003c + iVar1);
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721efc + iVar1) = DAT_00721f00;
    *(undefined4 *)(&stack0x00000000 + DAT_00721f04 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000038 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x0000003c + iVar1);
    FUN_0008b984();
    *(double *)(&stack0x00000000 + DAT_00721f24 + iVar1) =
         *DAT_00721f08 * *DAT_00721f08 * *(double *)(&stack0x0000000c + iVar1);
    uVar2 = *(undefined4 *)(&stack0x00000000 + DAT_00721f28 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721f24 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = uVar2;
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721f18 + iVar1) = DAT_00721f14;
    *(undefined4 *)(&stack0x00000000 + DAT_00721f1c + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_00721ed8;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721ec4 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_00721f2c;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x21;
    *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_00721efc + iVar1;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 2;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 2;
    FUN_0013b668();
    FUN_0009df04(0,&stack0x00000000 + DAT_00721efc + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000040 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x00000044 + iVar1);
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721efc + iVar1) = DAT_00721f00;
    *(undefined4 *)(&stack0x00000000 + DAT_00721f04 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000040 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x00000044 + iVar1);
    FUN_0008b984();
    *(double *)(&stack0x00000000 + DAT_00721f30 + iVar1) =
         *DAT_00721f08 * *DAT_00721f08 * *(double *)(&stack0x0000000c + iVar1);
    uVar2 = *(undefined4 *)(&stack0x00000000 + DAT_00721f34 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721f30 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = uVar2;
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721f18 + iVar1) = DAT_00721f14;
    *(undefined4 *)(&stack0x00000000 + DAT_00721f1c + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_00721ed8;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721ec4 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_00721f38;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x21;
    *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_00721efc + iVar1;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 2;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 2;
    FUN_0013b668();
    FUN_0009df04(0,&stack0x00000000 + DAT_00721efc + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000060 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x00000064 + iVar1);
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721efc + iVar1) = DAT_00721f00;
    *(undefined4 *)(&stack0x00000000 + DAT_00721f04 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000060 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x00000064 + iVar1);
    FUN_0008b984();
    *(double *)(&stack0x00000000 + DAT_00721f3c + iVar1) =
         *DAT_00721f08 * *DAT_00721f08 * *(double *)(&stack0x0000000c + iVar1);
    uVar2 = *(undefined4 *)(&stack0x00000000 + DAT_00721f40 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721f3c + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = uVar2;
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721f18 + iVar1) = DAT_00721f14;
    *(undefined4 *)(&stack0x00000000 + DAT_00721f1c + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_00721ed8;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721ec4 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_00721f44;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x21;
    *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_00721efc + iVar1;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 2;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 2;
    FUN_0013b668();
    FUN_0009df04(0,&stack0x00000000 + DAT_00721efc + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000068 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x0000006c + iVar1);
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721efc + iVar1) = DAT_00721f00;
    *(undefined4 *)(&stack0x00000000 + DAT_00721f04 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000068 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x0000006c + iVar1);
    FUN_0008b984();
    *(double *)(&stack0x00000000 + DAT_00721f48 + iVar1) =
         *DAT_00721f08 * *DAT_00721f08 * *(double *)(&stack0x0000000c + iVar1);
    uVar2 = *(undefined4 *)(&stack0x00000000 + DAT_00721f4c + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721f48 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = uVar2;
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721f18 + iVar1) = DAT_00721f14;
    *(undefined4 *)(&stack0x00000000 + DAT_00721f1c + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_00721ed8;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721ec4 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_00721f50;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x21;
    *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_00721efc + iVar1;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 2;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 2;
    FUN_0013b668();
    FUN_0009df04(0,&stack0x00000000 + DAT_00721efc + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000070 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x00000074 + iVar1);
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721efc + iVar1) = DAT_00721f00;
    *(undefined4 *)(&stack0x00000000 + DAT_00721f04 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000070 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x00000074 + iVar1);
    FUN_0008b984();
    *(double *)(&stack0x00000000 + DAT_00721f54 + iVar1) =
         *DAT_00721f08 * *DAT_00721f08 * *(double *)(&stack0x0000000c + iVar1);
    uVar2 = *(undefined4 *)(&stack0x00000000 + DAT_00721f58 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721f54 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = uVar2;
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721f18 + iVar1) = DAT_00721f14;
    *(undefined4 *)(&stack0x00000000 + DAT_00721f1c + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_00721ed8;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721ec4 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_00721f5c;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x21;
    *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_00721efc + iVar1;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 2;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 2;
    FUN_0013b668();
    FUN_0009df04(0,&stack0x00000000 + DAT_00721efc + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000078 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x0000007c + iVar1);
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721efc + iVar1) = DAT_00721f00;
    *(undefined4 *)(&stack0x00000000 + DAT_00721f04 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000078 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x0000007c + iVar1);
    FUN_0008b984();
    *(double *)(&stack0x00000000 + DAT_00721f60 + iVar1) =
         *(double *)(&stack0x0000000c + iVar1) * *DAT_00721f08 * *DAT_00721f08;
    uVar2 = *(undefined4 *)(&stack0x00000000 + DAT_00721f64 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721f60 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = uVar2;
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721f18 + iVar1) = DAT_00721f14;
    *(undefined4 *)(&stack0x00000000 + DAT_00721f1c + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_00721ed8;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721ec4 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_00721f68;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x21;
    *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_00721efc + iVar1;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 2;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 2;
    FUN_0013b668();
    FUN_0009df04(0,&stack0x00000000 + DAT_00721efc + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000080 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x00000084 + iVar1);
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721efc + iVar1) = DAT_00721f00;
    *(undefined4 *)(&stack0x00000000 + DAT_00721f04 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000080 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x00000084 + iVar1);
    FUN_0008b984();
    *(double *)(&stack0x00000000 + DAT_00721f6c + iVar1) =
         *(double *)(&stack0x0000000c + iVar1) * *DAT_00721f08 * *DAT_00721f08;
    uVar2 = *(undefined4 *)(&stack0x00000000 + DAT_00721f70 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721f6c + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = uVar2;
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721f18 + iVar1) = DAT_00721f14;
    *(undefined4 *)(&stack0x00000000 + DAT_00721f1c + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_00721ed8;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721ec4 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_00721f74;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x21;
    *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_00721efc + iVar1;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 2;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 2;
    FUN_0013b668();
    *(undefined4 *)(&stack0x00000000 + DAT_00721e94 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000000 + DAT_00721e98 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x00000088 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x0000008c + iVar1);
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721e94 + iVar1) = DAT_00721f00;
    *(undefined4 *)(&stack0x00000000 + DAT_00721e98 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_00721ed8;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721ec4 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_00721f78;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x12;
    *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_00721e94 + iVar1;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 1;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 1;
    FUN_0013b668();
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_00721ed8;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721ec4 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_00721f7c;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x16;
    *(undefined4 *)(&stack0x00000014 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 0;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 0;
    FUN_0013b668();
    *(undefined4 *)(&stack0x00000000 + DAT_00721e94 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000000 + DAT_00721e98 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721f80 + iVar1);
    FUN_00020ce0();
    uVar2 = *(undefined4 *)(&stack0x00000008 + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00721e94 + iVar1) = DAT_00721f84;
    *(undefined4 *)(&stack0x00000000 + DAT_00721e98 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_00721ed8;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_00721ec4 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_00721f88;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x11;
    *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_00721e94 + iVar1;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 1;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 1;
    FUN_0013b668();
    uVar3 = *(uint *)(&stack0x000000e0 + iVar1);
    iVar6 = *(int *)(&stack0x000000e4 + iVar1);
    if (iVar6 == 0 && uVar3 == 0) {
      *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_0072249c;
      *(undefined4 *)(&stack0x00000008 + iVar1) =
           *(undefined4 *)(&stack0x00000000 + DAT_007224a0 + iVar1);
      *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_007224a8;
      *(undefined4 *)(&stack0x00000010 + iVar1) = 0x12;
      *(undefined4 *)(&stack0x00000014 + iVar1) = 0;
      *(undefined4 *)(&stack0x00000018 + iVar1) = 0;
      *(undefined4 *)(&stack0x0000001c + iVar1) = 0;
      FUN_0013b668();
    }
    else {
      if (iVar6 < 0 || (0 < iVar6 || iVar6 == 0 && DAT_00721f8c <= uVar3)) {
        *(uint *)(&stack0x00000000 + DAT_00722464 + iVar1) = uVar3;
        *(int *)(&stack0x00000000 + DAT_00722468 + iVar1) = iVar6;
        *(uint *)(&stack0x00000004 + iVar1) = uVar3;
        *(int *)(&stack0x00000008 + iVar1) = iVar6;
        *(uint *)(&stack0x0000000c + iVar1) = DAT_0072246c;
        *(undefined4 *)(&stack0x00000010 + iVar1) = 0;
        FUN_0008bccc();
        uVar8 = *(uint *)(&stack0x00000014 + iVar1);
        iVar6 = *(int *)(&stack0x00000018 + iVar1);
        uVar9 = (uint)((ulonglong)uVar8 * (ulonglong)DAT_0072246c);
        uVar3 = *(uint *)(&stack0x00000000 + DAT_00722464 + iVar1) - uVar9;
        if ((int)(*(int *)(&stack0x00000000 + DAT_00722468 + iVar1) -
                 (DAT_0072246c * iVar6 + (int)((ulonglong)uVar8 * (ulonglong)DAT_0072246c >> 0x20) +
                 (uint)(*(uint *)(&stack0x00000000 + DAT_00722464 + iVar1) < uVar9))) < 0) {
          uVar3 = uVar3 + DAT_0072246c;
          bVar10 = uVar8 != 0;
          uVar8 = uVar8 - 1;
          iVar6 = iVar6 + -1 + (uint)bVar10;
        }
      }
      else {
        iVar6 = 0;
        uVar8 = 0;
      }
      uVar2 = FUN_0009df00(0,&stack0x00000000 + DAT_00722470 + iVar1,uVar8,(int)uVar3 >> 0x1f);
      *(uint *)(&stack0x00000000 + DAT_00722470 + iVar1) = uVar3;
      *(undefined4 *)(&stack0x00000000 + DAT_00722474 + iVar1) = extraout_r3_00;
      *(uint *)(&stack0x00000000 + DAT_0072247c + iVar1) = extraout_r2_00 + DAT_00722478;
      *(uint *)(&stack0x00000000 + DAT_00722480 + iVar1) =
           iVar6 + 0xe + (uint)CARRY4(extraout_r2_00,DAT_00722478);
      *(undefined4 *)(&stack0x00000000 + DAT_00722488 + iVar1) = *DAT_00722484;
      FUN_0009e2f0(uVar2,&stack0x00000000 + DAT_00722470 + iVar1,&stack0x00000004 + iVar1);
      *(undefined4 *)(&stack0x00000018 + iVar1) = DAT_0072248c;
      *(undefined4 *)(&stack0x0000001c + iVar1) = 0x13;
      FUN_00101cdc();
      uVar2 = *(undefined4 *)(&stack0x00000020 + iVar1);
      uVar7 = *(undefined4 *)(&stack0x00000024 + iVar1);
      *(undefined4 *)(&stack0x00000000 + DAT_00722490 + iVar1) = 0;
      *(undefined4 *)(&stack0x00000000 + DAT_00722494 + iVar1) = 0;
      *(undefined4 *)(&stack0x00000004 + iVar1) = uVar2;
      *(undefined4 *)(&stack0x00000008 + iVar1) = uVar7;
      FUN_0008f77c();
      uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
      *(undefined4 *)(&stack0x00000000 + DAT_00722490 + iVar1) = DAT_00722498;
      *(undefined4 *)(&stack0x00000000 + DAT_00722494 + iVar1) = uVar2;
      *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_0072249c;
      *(undefined4 *)(&stack0x00000008 + iVar1) =
           *(undefined4 *)(&stack0x00000000 + DAT_007224a0 + iVar1);
      *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_007224a4;
      *(undefined4 *)(&stack0x00000010 + iVar1) = 0x11;
      *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_00722490 + iVar1;
      *(undefined4 *)(&stack0x00000018 + iVar1) = 1;
      *(undefined4 *)(&stack0x0000001c + iVar1) = 1;
      FUN_0013b668();
    }
    FUN_0009df04(0,&stack0x00000000 + DAT_007224ac + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x000000e8 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x000000ec + iVar1);
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_007224ac + iVar1) = DAT_007224b0;
    *(undefined4 *)(&stack0x00000000 + DAT_007224b4 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = *(undefined4 *)(&stack0x000000e8 + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(&stack0x000000ec + iVar1);
    FUN_0008b984();
    *(double *)(&stack0x00000000 + DAT_007224bc + iVar1) =
         *(double *)(&stack0x0000000c + iVar1) / *DAT_007224b8;
    uVar2 = *(undefined4 *)(&stack0x00000000 + DAT_007224c0 + iVar1);
    *(undefined4 *)(&stack0x00000004 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_007224bc + iVar1);
    *(undefined4 *)(&stack0x00000008 + iVar1) = uVar2;
    FUN_0008f6c0();
    uVar2 = *(undefined4 *)(&stack0x0000000c + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_007224c8 + iVar1) = DAT_007224c4;
    *(undefined4 *)(&stack0x00000000 + DAT_007224cc + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_0072249c;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_007224a0 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_007224d0;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x1f;
    *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_007224ac + iVar1;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 2;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 2;
    FUN_0013b668();
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_0072249c;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_007224a0 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_007224d4;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x1d;
    *(undefined4 *)(&stack0x00000014 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 0;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 0;
    FUN_0013b668();
    FUN_00063de8();
    uVar2 = *(undefined4 *)(&stack0x00000004 + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00722490 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000000 + DAT_00722494 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar2;
    FUN_00020ce0();
    uVar2 = *(undefined4 *)(&stack0x00000008 + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00722490 + iVar1) = DAT_007224d8;
    *(undefined4 *)(&stack0x00000000 + DAT_00722494 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_0072249c;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_007224a0 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_007224dc;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x11;
    *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_00722490 + iVar1;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 1;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 1;
    FUN_0013b668();
    uVar2 = *DAT_007224e0;
    *(undefined4 *)(&stack0x00000000 + DAT_00722490 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000000 + DAT_00722494 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar2;
    FUN_00020ce0();
    uVar2 = *(undefined4 *)(&stack0x00000008 + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00722490 + iVar1) = DAT_007224d8;
    *(undefined4 *)(&stack0x00000000 + DAT_00722494 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_0072249c;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_007224a0 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_007224e4;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x11;
    *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_00722490 + iVar1;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 1;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 1;
    FUN_0013b668();
    *(undefined4 *)(&stack0x00000004 + iVar1) = 0;
    FUN_0001d3d0();
    uVar2 = *(undefined4 *)(&stack0x00000008 + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00722490 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000000 + DAT_00722494 + iVar1) = 0;
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar2;
    FUN_00020ce0();
    uVar2 = *(undefined4 *)(&stack0x00000008 + iVar1);
    *(undefined4 *)(&stack0x00000000 + DAT_00722490 + iVar1) = DAT_007224d8;
    *(undefined4 *)(&stack0x00000000 + DAT_00722494 + iVar1) = uVar2;
    *(undefined4 *)(&stack0x00000004 + iVar1) = DAT_0072249c;
    *(undefined4 *)(&stack0x00000008 + iVar1) =
         *(undefined4 *)(&stack0x00000000 + DAT_007224a0 + iVar1);
    *(undefined4 *)(&stack0x0000000c + iVar1) = DAT_007224e8;
    *(undefined4 *)(&stack0x00000010 + iVar1) = 0x11;
    *(undefined1 **)(&stack0x00000014 + iVar1) = &stack0x00000000 + DAT_00722490 + iVar1;
    *(undefined4 *)(&stack0x00000018 + iVar1) = 1;
    *(undefined4 *)(&stack0x0000001c + iVar1) = 1;
    FUN_0013b668();
    *(undefined4 *)(&stack0x00000000 + DAT_007224ec + iVar1) = 0;
    *(undefined4 *)(&stack0x00000000 + DAT_007224f0 + iVar1) = 0;
    (&stack0x0000002f)[iVar1] = 0;
    (*(code *)**(undefined4 **)(&stack0x00000000 + DAT_007224f4 + iVar1))();
    return;
  }
  uVar2 = *(undefined4 *)(&stack0x0000001c + iVar1);
  *(int *)(&stack0x00000000 + DAT_007224ec + iVar1) = *(int *)(&stack0x00000018 + iVar1);
  *(undefined4 *)(&stack0x00000000 + DAT_007224f0 + iVar1) = uVar2;
  return;
}



/* k3c/internal/app.writeMemStats.func1 @ 007224fc (size 76) */

void k3c_internal_app_writeMemStats_func1(void)

{
  int iVar1;
  int unaff_r7;
  int unaff_r10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  iVar1 = *(int *)(unaff_r7 + 4);
  FUN_0012eb1c();
  if (iVar1 != 0) {
    FUN_0012fb5c();
  }
  return;
}



/* k3c/internal/app.writeHeapProfile @ 00722548 (size 448) */

void k3c_internal_app_writeHeapProfile(void)

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
  undefined4 *puVar3;
  int local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x72270c;
    FUN_0009bf64();
  }
  local_4 = (undefined4 *)0x0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  if ((*DAT_00722714 == 0) || (0x10000 < *DAT_00722714)) {
    *DAT_00722714 = 0x10000;
  }
  local_c = 0;
  local_8 = 0;
  FUN_0008f77c();
  local_c = DAT_00722718;
  uVar2 = 0xd;
  puVar3 = &local_c;
  uVar1 = DAT_0072271c;
  FUN_0013b72c();
  FUN_0009df04(0,&local_1c,local_2c,local_30,unaff_lr,uVar1,uVar2,puVar3);
  local_18 = in_stack_00000008;
  local_1c = in_stack_00000004;
  FUN_0028054c();
  FUN_0012dc78();
  if (local_30 == 0) {
    local_24 = DAT_00722720;
    local_20 = 1;
    local_4 = &local_24;
    FUN_0040cf70();
    (*(code *)*local_4)();
    return;
  }
  return;
}



/* k3c/internal/app.writeHeapProfile.func1 @ 00722728 (size 76) */

void k3c_internal_app_writeHeapProfile_func1(void)

{
  int iVar1;
  int unaff_r7;
  int unaff_r10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  iVar1 = *(int *)(unaff_r7 + 4);
  FUN_0012eb1c();
  if (iVar1 != 0) {
    FUN_0012fb5c();
  }
  return;
}



/* k3c/internal/app.writeAllocsProfile @ 00722774 (size 556) */

void k3c_internal_app_writeAllocsProfile(void)

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
  undefined4 *puVar3;
  int iVar4;
  int local_34;
  undefined4 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x7229a4;
    FUN_0009bf64();
  }
  local_4 = (undefined4 *)0x0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  if ((*DAT_007229ac == 0) || (0x10000 < *DAT_007229ac)) {
    *DAT_007229ac = 0x10000;
  }
  local_c = 0;
  local_8 = 0;
  FUN_0008f77c();
  local_c = DAT_007229b0;
  uVar2 = 0xf;
  puVar3 = &local_c;
  uVar1 = DAT_007229b4;
  FUN_0013b72c();
  FUN_0009df04(0,&local_1c,local_30,local_34,unaff_lr,uVar1,uVar2,puVar3);
  local_18 = in_stack_00000008;
  local_1c = in_stack_00000004;
  FUN_0028054c();
  iVar4 = 0x242;
  FUN_0012dc78();
  if (local_34 == 0) {
    local_24 = DAT_007229b8;
    local_20 = 1;
    local_4 = &local_24;
    FUN_0040a774();
    if (iVar4 != 0) {
      FUN_0040af48();
      in_stack_00000014 = 1;
      (*(code *)*local_4)();
      return;
    }
    FUN_001386c4();
    (*(code *)*local_4)();
    return;
  }
  return;
}



/* k3c/internal/app.writeAllocsProfile.func1 @ 007229c8 (size 76) */

void k3c_internal_app_writeAllocsProfile_func1(void)

{
  int iVar1;
  int unaff_r7;
  int unaff_r10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  iVar1 = *(int *)(unaff_r7 + 4);
  FUN_0012eb1c();
  if (iVar1 != 0) {
    FUN_0012fb5c();
  }
  return;
}



/* k3c/internal/app.writeGoroutineProfile @ 00722a14 (size 508) */

void k3c_internal_app_writeGoroutineProfile(void)

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
  undefined4 *puVar3;
  int iVar4;
  int local_34;
  undefined4 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x722c14;
    FUN_0009bf64();
  }
  local_4 = (undefined4 *)0x0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  local_c = 0;
  local_8 = 0;
  FUN_0008f77c();
  local_c = DAT_00722c1c;
  uVar2 = 0x12;
  puVar3 = &local_c;
  uVar1 = DAT_00722c20;
  FUN_0013b72c();
  FUN_0009df04(0,&local_1c,local_30,local_34,unaff_lr,uVar1,uVar2,puVar3);
  local_18 = in_stack_00000008;
  local_1c = in_stack_00000004;
  FUN_0028054c();
  iVar4 = 0x242;
  FUN_0012dc78();
  if (local_34 == 0) {
    local_24 = DAT_00722c24;
    local_20 = 1;
    local_4 = &local_24;
    FUN_0040a774();
    if (iVar4 != 0) {
      FUN_0040af48();
      in_stack_00000014 = 1;
      (*(code *)*local_4)();
      return;
    }
    FUN_001386c4();
    (*(code *)*local_4)();
    return;
  }
  return;
}



/* k3c/internal/app.writeGoroutineProfile.func1 @ 00722c34 (size 76) */

void k3c_internal_app_writeGoroutineProfile_func1(void)

{
  int iVar1;
  int unaff_r7;
  int unaff_r10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  iVar1 = *(int *)(unaff_r7 + 4);
  FUN_0012eb1c();
  if (iVar1 != 0) {
    FUN_0012fb5c();
  }
  return;
}



/* k3c/internal/app.cleanOldDiagDirs @ 00722c80 (size 896) */

void k3c_internal_app_cleanOldDiagDirs(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *extraout_r2;
  undefined4 uVar10;
  undefined4 *extraout_r3;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  uint *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 *local_7c;
  undefined4 *local_78;
  uint local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;
  uint local_4;
  
  uVar2 = local_74;
  puVar1 = local_78;
  while (&local_4 <= *(uint **)(unaff_r10 + 8)) {
    unaff_lr = 0x722ffc;
    FUN_0009bf64();
  }
  local_7c = (undefined4 *)&DAT_00000004;
  FUN_00129c88();
  if (local_6c != 0) {
    return;
  }
  puVar11 = (undefined4 *)0x0;
  puVar12 = (undefined4 *)0x0;
  for (iVar9 = 0; uVar3 = local_70, uVar7 = local_74, iVar9 < (int)uVar2; iVar9 = iVar9 + 1) {
    iVar8 = puVar1[iVar9 * 2];
    uVar10 = puVar1[iVar9 * 2 + 1];
    (**(code **)(iVar8 + 0x10))();
    if ((char)local_7c == '\0') {
      uVar5 = 0;
    }
    else {
      (**(code **)(iVar8 + 0x14))();
      if ((int)local_78 < 9) {
        uVar5 = 0;
      }
      else {
        local_7c = DAT_00723008;
        local_78 = (undefined4 *)&DAT_00000009;
        FUN_00018250();
        uVar5 = local_74 & 0xff;
      }
    }
    if (uVar5 != 0) {
      puVar6 = (undefined4 *)((int)puVar11 + 1);
      (**(code **)(iVar8 + 0x14))();
      FUN_0009df04(0,&local_20,local_78,local_7c,unaff_lr,uVar10);
      local_1c = 4;
      local_20 = DAT_00723004;
      local_7c = (undefined4 *)0x2;
      local_78 = (undefined4 *)0x2;
      FUN_0028054c();
      puVar4 = puVar12;
      puVar11 = puVar6;
      if (puVar12 < puVar6) {
        local_74 = 1;
        local_70 = DAT_0072300c;
        FUN_000987f4();
        puVar4 = local_64;
        puVar11 = local_68;
        local_7c = puVar6;
        local_78 = puVar12;
      }
      puVar12 = puVar4;
      puVar13 = (undefined1 *)((int)puVar11 + -1);
      *(undefined4 *)((int)puVar13 * 8 + 4) = uVar3;
      if (*DAT_00723010 != 0) {
        uVar7 = FUN_0009db64();
        *unaff_r8 = uVar7;
        unaff_r8[1] = *(uint *)((int)puVar13 * 8);
        puVar12 = extraout_r2;
        puVar11 = extraout_r3;
      }
      *(uint *)((int)puVar13 * 8) = uVar7;
    }
  }
  if (5 < (int)puVar11) {
    FUN_001898d8(puVar1);
    local_78 = puVar12;
    for (iVar9 = 0; iVar9 < (int)((int)puVar11 + -5); iVar9 = iVar9 + 1) {
      FUN_00131e84();
      if (local_78 != (undefined4 *)0x0) {
        FUN_0009df04(0,&local_10);
        FUN_0008f77c();
        local_10 = DAT_0072300c;
        local_c = local_78;
        if (local_78 == (undefined4 *)0x0) {
          local_8 = 0;
        }
        else {
          local_8 = local_78[1];
        }
        local_4 = local_74;
        local_78 = &local_10;
        local_74 = 2;
        k3c_internal_pkg_logger_Warnf();
      }
    }
    return;
  }
  return;
}



/* k3c/internal/app.init.1 @ 00723018 (size 320) */

void k3c_internal_app_init_1(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined *apuStack_10 [2];
  undefined *puStack_8;
  undefined *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x723154;
    FUN_0009bf64();
  }
  FUN_0012accc();
  if (iStack_24 != 0) {
    func_0x001078c8();
    if ((iStack_20 == 0) && (0 < iStack_24 || iStack_24 == 0 && iStack_28 != 0)) {
      *(int *)PTR_DAT_00723160 = iStack_28;
      *(int *)PTR_DAT_00723164 = iStack_24;
    }
    else {
      FUN_0009df04(0,apuStack_10);
      FUN_0008f77c();
      apuStack_10[0] = PTR_DAT_00723168;
      puStack_8 = PTR_DAT_0072316c;
      puStack_4 = PTR_DAT_00723170;
      k3c_internal_pkg_logger_Warnf();
    }
  }
  if ((*(int *)PTR_DAT_00723178 == 0) || (0x10000 < *(int *)PTR_DAT_00723178)) {
    *(undefined4 *)PTR_DAT_00723178 = 0x10000;
  }
                    /* WARNING: Could not recover jumptable at 0x00723148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/app.installSignalHandler @ 0072317c (size 200) */

void k3c_internal_app_installSignalHandler(void)

{
  undefined **ppuVar1;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined *local_24;
  undefined *local_18;
  undefined *local_14;
  undefined *local_10;
  undefined *local_c;
  undefined *local_8;
  undefined *local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  local_18 = PTR_DAT_00723248;
  local_14 = PTR_DAT_0072324c;
  local_10 = PTR_DAT_00723248;
  local_c = PTR_SUB_00723250;
  local_8 = PTR_DAT_00723248;
  local_4 = PTR_SUB_00723254;
  FUN_0001af6c();
  ppuVar1 = &local_18;
  FUN_00471a6c();
  FUN_00022cf8();
  local_18 = PTR_k3c_internal_app_installSignalHandler_func1_00723260;
  if (*(int *)PTR_DAT_00723264 != 0) {
    ppuVar1 = (undefined **)FUN_0009db54();
    *unaff_r8 = local_24;
  }
  ppuVar1[1] = local_24;
  FUN_00062dd0();
  return;
}



/* k3c/internal/app.installSignalHandler.func1 @ 00723268 (size 760) */

/* WARNING: Removing unreachable block (ram,0x007234a0) */

void k3c_internal_app_installSignalHandler_func1(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  bool bVar6;
  undefined8 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x38);
      *(undefined4 *)((int)register0x00000054 + -0x38) = unaff_lr;
      uVar1 = *(undefined4 *)(unaff_r7 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x34) = uVar1;
      *(undefined1 **)((int)register0x00000054 + -0x30) =
           (undefined1 *)((int)register0x00000054 + -8);
      FUN_0001bfb0();
      iVar2 = *(int *)((int)register0x00000054 + -8);
      *(int *)((int)register0x00000054 + -0x20) = iVar2;
      *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(iVar2 + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -0x10) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_00723564;
      *(undefined4 *)((int)register0x00000054 + -0x30) = 0x2b;
      *(undefined1 **)((int)register0x00000054 + -0x2c) =
           (undefined1 *)((int)register0x00000054 + -0x10);
      *(undefined4 *)((int)register0x00000054 + -0x28) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x24) = 1;
      k3c_internal_pkg_logger_Warnf();
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + -0x20);
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + -0x18);
      k3c_internal_app_writeDiagnostics();
      *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_00723568;
      *(undefined4 *)((int)register0x00000054 + -0x30) = 0xc;
      FUN_0012accc();
      if ((*(int *)((int)register0x00000054 + -0x28) != 1) ||
         (**(char **)((int)register0x00000054 + -0x2c) != '1')) goto LAB_00723404;
      *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_0072356c;
      *(undefined4 *)((int)register0x00000054 + -0x30) = 0x8000;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 0x8000;
      FUN_000986b8();
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x30) = 0x8000;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 0x8000;
      *(undefined1 *)((int)register0x00000054 + -0x28) = 1;
      uVar1 = FUN_0004cde8();
      uVar4 = *(uint *)((int)register0x00000054 + -0x24);
      bVar6 = uVar4 == 0x8000;
      if (uVar4 < 0x8001) {
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -0x14);
        *(uint *)((int)register0x00000054 + -0x2c) = uVar4;
        FUN_00099104();
        *(undefined4 *)((int)register0x00000054 + -0x34) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        FUN_0008f77c();
        *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00723570;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_00723574;
        *(undefined4 *)((int)register0x00000054 + -0x30) = 0x12;
        *(undefined1 **)((int)register0x00000054 + -0x2c) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x28) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x24) = 1;
        k3c_internal_pkg_logger_Debugf();
LAB_00723404:
        k3c_internal_pkg_logger_Sync();
        *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_00723578;
        FUN_00022cf8();
        puVar3 = *(undefined4 **)((int)register0x00000054 + -0x30);
        *puVar3 = DAT_0072357c;
        if (*DAT_00723580 == 0) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x1c);
        }
        else {
          puVar3 = (undefined4 *)FUN_0009db54();
          uVar1 = *(undefined4 *)((int)register0x00000054 + -0x1c);
          *unaff_r8 = uVar1;
        }
        puVar3[1] = uVar1;
        *(undefined4 **)((int)register0x00000054 + -0x34) = puVar3;
        FUN_00062dd0();
        *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_00723584;
        internal_runtime_atomic_Loadp();
        iVar2 = *(int *)((int)register0x00000054 + -0x30);
        if (iVar2 == 0) {
          *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_00723588;
          *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
          FUN_0009a76c();
          *(undefined4 *)((int)register0x00000054 + -0x34) = DAT_00723584;
          internal_runtime_atomic_Loadp();
          iVar2 = *(int *)((int)register0x00000054 + -0x30);
        }
        if (iVar2 == 0) {
          *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00723570;
          *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_00723590;
          *(undefined1 **)((int)register0x00000054 + -0x34) =
               (undefined1 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x30) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 1;
          k3c_internal_pkg_logger_Warn();
          k3c_internal_pkg_logger_Sync();
          *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
          FUN_00131c2c();
        }
        else {
          if (*(int *)(iVar2 + 0x20) == 0) {
            *(undefined4 *)(iVar2 + 0x20) = 4;
            if (*DAT_00723580 != 0) {
              uVar7 = FUN_0009db54(iVar2,*(undefined4 *)(iVar2 + 0x1c));
              iVar2 = (int)uVar7;
              *unaff_r8 = (int)((ulonglong)uVar7 >> 0x20);
            }
            *(undefined4 *)(iVar2 + 0x1c) = DAT_0072358c;
          }
          **(undefined1 **)(iVar2 + 0xc) = 0;
        }
        uVar1 = *DAT_00723598;
        *(undefined4 *)((int)register0x00000054 + -0x34) = *DAT_00723594;
        *(undefined4 *)((int)register0x00000054 + -0x30) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x2c) = DAT_0072359c;
        FUN_00109464();
        return;
      }
      param_1 = FUN_0009dc14(uVar1,uVar4,0x8000);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x38);
      if (bVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x72355c;
    param_1 = FUN_0009bf00(param_1);
  } while( true );
}



/* k3c/internal/app.installSignalHandler.func1.1 @ 007235a0 (size 172) */

/* WARNING: Removing unreachable block (ram,0x007235e4) */

void k3c_internal_app_installSignalHandler_func1_1(void)

{
  int unaff_r10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  FUN_0001bfb0();
  return;
}



/* k3c/internal/app.installSignalHandler.func1.2 @ 00723654 (size 148) */

void k3c_internal_app_installSignalHandler_func1_2(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x7236e4;
    FUN_0009bf64();
  }
  FUN_0008f6c0();
  k3c_internal_pkg_logger_Warnf();
  k3c_internal_pkg_logger_Sync();
  FUN_00131c2c();
                    /* WARNING: Could not recover jumptable at 0x007236d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


