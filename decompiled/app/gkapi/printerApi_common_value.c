// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/value   functions: 7
/* printerApi/common/value.InitValue @ 00416320 (size 2076) */

void printerApi_common_value_InitValue(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  undefined1 *extraout_r1_07;
  undefined1 *extraout_r1_08;
  undefined **ppuVar4;
  int extraout_r2;
  int extraout_r2_00;
  char *pcVar5;
  int extraout_r3;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar6;
  int *in_stack_00000004;
  undefined **ppuStack_74;
  undefined **ppuStack_70;
  undefined **ppuStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined1 *puStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined **ppuStack_48;
  undefined1 auStack_44 [28];
  undefined **ppuStack_28;
  undefined **ppuStack_24;
  undefined **ppuStack_20;
  undefined *puStack_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  int *piStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x416b74;
    FUN_00096bb8();
  }
  ppuStack_74 = (undefined **)PTR_DAT_00416b04;
  FUN_0001eed8();
  piStack_4 = (int *)ppuStack_70;
  FUN_0008b6b8();
  ppuVar4 = ppuStack_74;
  if (*(int *)PTR_DAT_00416b08 != 0) {
    ppuStack_20 = ppuStack_74;
    uVar6 = FUN_00098698(piStack_4,ppuStack_74,piStack_4[4]);
    ppuStack_70 = (undefined **)uVar6;
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = (int)((ulonglong)uVar6 >> 0x20);
    unaff_r8[2] = (int)ppuStack_70[3];
    ppuStack_74 = (undefined **)PTR_DAT_00416b04;
    FUN_000228e8();
    ppuVar4 = ppuStack_20;
  }
  uVar1 = FUN_00098a1c(0,piStack_4,ppuVar4);
  piStack_4[4] = (int)PTR_s_startfalse_s__dvaluefloat___s<ni_0077367d_0x40f_00416b0c;
  piStack_4[5] = 5;
  piStack_4[3] = extraout_r2_00;
  FUN_00098a1c(uVar1,&ppuStack_74);
  iStack_60 = 5;
  printerApi_common_value_ApiValue_loadConfig();
  if (*(int *)PTR_DAT_00416b08 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r3;
    unaff_r8[1] = piStack_4[2];
    iStack_58 = extraout_r3;
  }
  piStack_4[2] = iStack_58;
  if (iStack_58 == 0) {
    in_stack_00000004 = (int *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00416b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  iVar3 = *(int *)(iStack_58 + 0x20);
  pcVar5 = *(char **)(iStack_58 + 0x1c);
  if (((((iVar3 == 5) && (*pcVar5 == 'd')) && (pcVar5[1] == 'e')) &&
      (((pcVar5[2] == 'b' && (pcVar5[3] == 'u')) && (pcVar5[4] == 'g')))) || (iVar3 == 0)) {
    ppuStack_70 = *(undefined ***)PTR_DAT_00416b10;
    ppuStack_74 = (undefined **)PTR_DAT_00416b14;
    ppuStack_6c = (undefined **)0x0;
    puStack_68 = (undefined1 *)0x0;
    uStack_64 = 0x53;
    func_0x001df89c();
    iVar3 = iStack_60;
    if (*(int *)PTR_DAT_00416b08 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *piStack_4;
      iVar3 = extraout_r1;
    }
    *piStack_4 = iVar3;
    ppuStack_70 = *(undefined ***)PTR_DAT_00416b18;
    ppuStack_74 = (undefined **)PTR_DAT_00416b14;
    ppuStack_6c = (undefined **)0x0;
    puStack_68 = (undefined1 *)0x0;
    uStack_64 = 0x53;
    func_0x001df89c();
    if (*(int *)PTR_DAT_00416b08 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r1_00;
      unaff_r8[1] = piStack_4[1];
      iStack_60 = extraout_r1_00;
    }
    piStack_4[1] = iStack_60;
    uVar2 = 0xff;
    goto LAB_00416840;
  }
  if (iVar3 == 5) {
    if (((*pcVar5 == 'e') && (pcVar5[1] == 'r')) &&
       ((pcVar5[2] == 'r' && ((pcVar5[3] == 'o' && (pcVar5[4] == 'r')))))) {
      ppuStack_70 = *(undefined ***)PTR_DAT_00416b10;
      ppuStack_74 = (undefined **)PTR_DAT_00416b14;
      ppuStack_6c = (undefined **)0x0;
      puStack_68 = (undefined1 *)0x0;
      uStack_64 = 0x53;
      func_0x001df89c();
      iVar3 = iStack_60;
      if (*(int *)PTR_DAT_00416b08 != 0) {
        FUN_00098688();
        *unaff_r8 = extraout_r1_01;
        unaff_r8[1] = *piStack_4;
        iVar3 = extraout_r1_01;
      }
      *piStack_4 = iVar3;
      ppuStack_70 = *(undefined ***)PTR_DAT_00416b18;
      ppuStack_74 = (undefined **)PTR_DAT_00416b14;
      ppuStack_6c = (undefined **)0x0;
      puStack_68 = (undefined1 *)0x0;
      uStack_64 = 0x53;
      func_0x001df89c();
      if (*(int *)PTR_DAT_00416b08 != 0) {
        FUN_00098688();
        *unaff_r8 = extraout_r1_02;
        unaff_r8[1] = piStack_4[1];
        iStack_60 = extraout_r1_02;
      }
      piStack_4[1] = iStack_60;
      uVar2 = 1;
      goto LAB_00416840;
    }
    if ((((*pcVar5 == 'u') && (pcVar5[1] == 'p')) && (pcVar5[2] == 'p')) &&
       ((pcVar5[3] == 'e' && (pcVar5[4] == 'r')))) {
      ppuStack_70 = *(undefined ***)PTR_DAT_00416b10;
      ppuStack_74 = (undefined **)PTR_DAT_00416b14;
      ppuStack_6c = (undefined **)0x0;
      puStack_68 = (undefined1 *)0x0;
      uStack_64 = 0x53;
      func_0x001df89c();
      iVar3 = iStack_60;
      if (*(int *)PTR_DAT_00416b08 != 0) {
        FUN_00098688();
        *unaff_r8 = extraout_r1_03;
        unaff_r8[1] = *piStack_4;
        iVar3 = extraout_r1_03;
      }
      *piStack_4 = iVar3;
      ppuStack_70 = *(undefined ***)PTR_DAT_00416b18;
      ppuStack_74 = (undefined **)PTR_DAT_00416b14;
      ppuStack_6c = (undefined **)0x0;
      puStack_68 = (undefined1 *)0x0;
      uStack_64 = 0x53;
      func_0x001df89c();
      if (*(int *)PTR_DAT_00416b08 != 0) {
        FUN_00098688();
        *unaff_r8 = extraout_r1_04;
        unaff_r8[1] = piStack_4[1];
        iStack_60 = extraout_r1_04;
      }
      piStack_4[1] = iStack_60;
      uVar2 = 3;
      goto LAB_00416840;
    }
  }
  ppuStack_70 = *(undefined ***)PTR_DAT_00416b10;
  ppuStack_74 = (undefined **)PTR_DAT_00416b14;
  ppuStack_6c = (undefined **)0x0;
  puStack_68 = (undefined1 *)0x0;
  uStack_64 = 0x53;
  func_0x001df89c();
  iVar3 = iStack_60;
  if (*(int *)PTR_DAT_00416b08 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_05;
    unaff_r8[1] = *piStack_4;
    iVar3 = extraout_r1_05;
  }
  *piStack_4 = iVar3;
  ppuStack_70 = *(undefined ***)PTR_DAT_00416b18;
  ppuStack_74 = (undefined **)PTR_DAT_00416b14;
  ppuStack_6c = (undefined **)0x0;
  puStack_68 = (undefined1 *)0x0;
  uStack_64 = 0x53;
  func_0x001df89c();
  if (*(int *)PTR_DAT_00416b08 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1_06;
    unaff_r8[1] = piStack_4[1];
    iStack_60 = extraout_r1_06;
  }
  piStack_4[1] = iStack_60;
  uVar2 = 0;
LAB_00416840:
  iVar3 = piStack_4[2];
  ppuStack_6c = *(undefined ***)(iVar3 + 0x28);
  if (ppuStack_6c == (undefined **)0x0) {
    ppuStack_6c = (undefined **)0xe;
    ppuStack_70 = (undefined **)PTR_DAT_00416b1c;
  }
  else {
    ppuStack_70 = (undefined **)*(undefined **)(iVar3 + 0x24);
  }
  if (*(char *)(iVar3 + 0x2c) != '\0') {
    uVar2 = 0xff;
  }
  if (((*(int *)(iVar3 + 0x20) == 5) && (pcVar5 = *(char **)(iVar3 + 0x1c), *pcVar5 == 'd')) &&
     ((pcVar5[1] == 'e' && (((pcVar5[2] == 'b' && (pcVar5[3] == 'u')) && (pcVar5[4] == 'g')))))) {
    uStack_5c = 5;
  }
  else {
    uStack_5c = 2;
  }
  puStack_68 = *(undefined1 **)(iVar3 + 0x30);
  uStack_64 = *(undefined4 *)(iVar3 + 0x34);
  ppuStack_74 = (undefined **)CONCAT31(ppuStack_74._1_3_,uVar2);
  iStack_60 = 1;
  iStack_58 = 7;
  printerApi_common_logger_InitLogger();
  puStack_c = PTR_SUB_00416b20;
  puStack_8 = PTR_DAT_00416b24;
  ppuStack_74 = &puStack_c;
  ppuStack_70 = (undefined **)0x1;
  ppuStack_6c = (undefined **)0x1;
  printerApi_common_logger_Info();
  if (*(char *)(piStack_4[2] + 0x2d) != '\0') {
    FUN_00098e04(*(char *)(piStack_4[2] + 0x2d),piStack_4,auStack_44);
    ppuStack_74 = (undefined **)PTR_DAT_00416b28;
    FUN_0001eed8();
    ppuStack_24 = ppuStack_70;
    *ppuStack_70 = PTR_printerApi_common_value_InitValue_gowrap1_00416b2c;
    ppuVar4 = ppuStack_70 + 1;
    if (*(int *)PTR_DAT_00416b08 != 0) {
      ppuStack_74 = (undefined **)PTR_DAT_00416b04;
      ppuStack_6c = (undefined **)auStack_44;
      ppuStack_70 = ppuVar4;
      ppuStack_28 = ppuVar4;
      FUN_00022914();
      ppuVar4 = ppuStack_28;
    }
    FUN_00098e04(ppuStack_24,auStack_44,ppuVar4);
    ppuStack_74 = ppuStack_24;
    FUN_0005e168();
  }
  ppuStack_70 = *(undefined ***)(piStack_4[2] + 0x8c);
  ppuStack_74 = *(undefined ***)(piStack_4[2] + 0x88);
  if (ppuStack_70 == (undefined **)0x0) {
    ppuStack_70 = (undefined **)0x22;
    ppuStack_74 = (undefined **)PTR_DAT_00416b30;
  }
  iStack_50 = (int)ppuStack_70;
  ppuStack_48 = ppuStack_74;
  FUN_0008a578();
  ppuStack_74 = (undefined **)PTR_SUB_00416b20;
  ppuStack_70 = ppuStack_6c;
  printerApi_common_ini_Load();
  if (puStack_68 == (undefined1 *)0x0) {
    ppuVar4 = ppuStack_6c;
    if (*(int *)PTR_DAT_00416b08 != 0) {
      FUN_00098688();
      *unaff_r8 = (int)extraout_r1_07;
      unaff_r8[1] = piStack_4[6];
      ppuVar4 = (undefined **)extraout_r1_07;
    }
    piStack_4[6] = (int)ppuVar4;
  }
  else {
    puStack_54 = puStack_68;
    uStack_4c = uStack_64;
    FUN_00098a28(0,&puStack_1c);
    ppuStack_74 = ppuStack_48;
    ppuStack_70 = (undefined **)iStack_50;
    FUN_0008a578();
    puStack_1c = PTR_SUB_00416b20;
    puStack_18 = (undefined1 *)ppuStack_6c;
    if (puStack_54 == (undefined1 *)0x0) {
      uStack_14 = 0;
    }
    else {
      uStack_14 = *(undefined4 *)(puStack_54 + 4);
    }
    uStack_10 = uStack_4c;
    ppuStack_74 = (undefined **)PTR_DAT_00416b34;
    ppuStack_70 = (undefined **)0x20;
    ppuStack_6c = &puStack_1c;
    puStack_68 = (undefined1 *)0x2;
    uStack_64 = 2;
    printerApi_common_logger_Errorf();
    ppuStack_74 = (undefined **)PTR_DAT_00416b38;
    ppuStack_70 = (undefined **)0x0;
    ppuStack_6c = (undefined **)0x0;
    FUN_0008a61c();
    ppuStack_74 = (undefined **)PTR_DAT_00416b3c;
    ppuStack_70 = (undefined **)puStack_68;
    printerApi_common_ini_Load();
    ppuVar4 = ppuStack_6c;
    if (*(int *)PTR_DAT_00416b08 != 0) {
      FUN_00098688();
      *unaff_r8 = (int)extraout_r1_08;
      unaff_r8[1] = piStack_4[6];
      ppuVar4 = (undefined **)extraout_r1_08;
    }
    piStack_4[6] = (int)ppuVar4;
  }
  in_stack_00000004 = piStack_4;
                    /* WARNING: Could not recover jumptable at 0x00416b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/common/value.InitValue.gowrap1 @ 00416b78 (size 88) */

void printerApi_common_value_InitValue_gowrap1(undefined4 param_1)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined1 auStack_1c [28];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    param_1 = FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)auStack_1c;
  }
  FUN_00098e04(param_1,unaff_r7 + 4,auStack_1c);
  printerApi_common_value_ApiValue_reloadPasswd();
  return;
}



/* printerApi/common/value.ApiValue.loadConfig @ 00416bd0 (size 656) */

/* WARNING: Removing unreachable block (ram,0x00416c9c) */
/* WARNING: Removing unreachable block (ram,0x00416ce8) */
/* WARNING: Removing unreachable block (ram,0x00416ce0) */
/* WARNING: Removing unreachable block (ram,0x00416cec) */

void printerApi_common_value_ApiValue_loadConfig(void)

{
  undefined4 uVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  char cStack_94;
  int iStack_88;
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *puStack_44;
  undefined *puStack_3c;
  undefined *puStack_38;
  undefined *puStack_34;
  undefined1 auStack_20 [12];
  undefined *puStack_14;
  undefined **ppuStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (auStack_20 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x416e5c;
    FUN_00096bb8();
  }
  printerApi_common_file_FileExist();
  if (cStack_94 == '\0') {
    uVar1 = 0x20;
  }
  else {
    uVar1 = 0xe;
  }
  printerApi_common_utils_file_GetBytes();
  if (iStack_88 != 0) {
    (**(code **)(iStack_88 + 0xc))();
    FUN_00098a18(0,&puStack_4c);
    puStack_4c = PTR_SUB_00416e74;
    puStack_48 = PTR_DAT_00416e84;
    FUN_0008a578();
    puStack_44 = PTR_SUB_00416e74;
    puStack_3c = PTR_SUB_00416e74;
    puStack_38 = PTR_DAT_00416e88;
    FUN_0008a578();
    puStack_34 = PTR_SUB_00416e74;
    puStack_14 = PTR_printerApi_common_value_ApiValue_loadConfig_Print_func1_00416e8c;
    uStack_c = 4;
    uStack_8 = 4;
    ppuStack_10 = &puStack_4c;
    FUN_001e1190();
                    /* WARNING: Could not recover jumptable at 0x00416e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0001eed8();
  uStack_4 = uVar1;
  FUN_0016a168();
                    /* WARNING: Could not recover jumptable at 0x00416d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/common/value.ApiValue.loadConfig.Printf.func2 @ 00416e90 (size 124) */

void printerApi_common_value_ApiValue_loadConfig_Printf_func2(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  FUN_00133250();
  return;
}



/* printerApi/common/value.ApiValue.loadConfig.Print.func1 @ 00416f0c (size 108) */

void printerApi_common_value_ApiValue_loadConfig_Print_func1(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  FUN_001334ac();
  return;
}



/* printerApi/common/value.ApiValue.reloadPasswd @ 00416f78 (size 720) */

void printerApi_common_value_ApiValue_reloadPasswd(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_0000000c;
  undefined4 *local_84;
  undefined4 *local_7c;
  int local_78;
  undefined4 *local_74;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 *local_4;
  
  while (&local_10 <= *(undefined4 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00098a28(0,&local_54);
  local_54 = *(undefined4 *)(in_stack_0000000c + 4);
  local_50 = *(undefined4 *)(in_stack_0000000c + 8);
  local_48 = 0xb;
  local_4c = DAT_0041724c;
  local_84 = (undefined4 *)0x2;
  local_7c = (undefined4 *)0x0;
  FUN_00147454();
  do {
    printerApi_common_utils_file_GetBytes();
    if (local_78 == 0) {
      FUN_0001eed8();
      *local_74 = 0;
      local_84 = local_7c;
      local_4 = local_74;
      FUN_0016a168();
      puVar2 = (undefined4 *)*local_4;
      for (iVar1 = local_4[1]; local_7c = local_74, 0 < iVar1; iVar1 = iVar1 + -1) {
        local_84 = (undefined4 *)*puVar2;
        uVar3 = puVar2[3];
        local_40 = (undefined4 *)puVar2[2];
        local_44 = puVar2;
        FUN_0008e7bc();
        local_74[1] = uVar3;
        puVar2 = local_74;
        if (*DAT_00417274 != 0) {
          puVar2 = (undefined4 *)FUN_00098688();
          *unaff_r8 = local_40;
          unaff_r8[1] = *puVar2;
        }
        *puVar2 = local_40;
        puVar2 = local_44 + 4;
      }
    }
    else {
      (**(code **)(local_78 + 0xc))();
      local_40 = local_74;
      FUN_00098a18(0,&local_24);
      local_24 = DAT_00417250;
      local_20 = DAT_00417260;
      FUN_0008a578();
      local_1c = DAT_00417250;
      local_18 = local_84;
      local_14 = DAT_00417250;
      local_10 = DAT_00417264;
      FUN_0008a578();
      local_c = DAT_00417250;
      local_8 = local_84;
      local_84 = (undefined4 *)&DAT_00000004;
      printerApi_common_logger_Error();
    }
    FUN_00098a20(0,&local_3c);
    local_3c = DAT_00417250;
    local_38 = DAT_00417254;
    FUN_0008a578();
    local_34 = DAT_00417250;
    local_30 = local_84;
    local_2c = DAT_00417250;
    local_28 = DAT_00417258;
    local_84 = (undefined4 *)0x3;
    printerApi_common_logger_Debug();
    FUN_000953d0();
  } while( true );
}



/* printerApi/common/value.init.0 @ 00417278 (size 84) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_value_init_0(void)

{
  undefined4 extraout_r1;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4172c8;
    FUN_00096bb8();
  }
  printerApi_common_value_InitValue();
  if (*_UNK_004172d0 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = *_UNK_004172d4;
    uStack_4 = extraout_r1;
  }
  *_UNK_004172d4 = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x004172bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



