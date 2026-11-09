// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/controller/cloudController   functions: 27
/* printerApi/controller/cloudController.CloudController.CnCode @ 00648970 (size 1108) */

void printerApi_controller_cloudController_CloudController_CnCode(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *extraout_r2;
  int extraout_r3;
  int iVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined *puStack_40;
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x648dc0;
    FUN_00096bb8();
  }
  FUN_0008b6b8();
  printerApi_common_config_GetMachineCode(uStack_48);
  puVar1 = PTR_DAT_00648dcc;
  FUN_0008e7bc();
  puStack_38[1] = uStack_44;
  puVar3 = puStack_38;
  if (*(int *)PTR_DAT_00648dd0 != 0) {
    puVar3 = (undefined4 *)FUN_00098688();
    *unaff_r8 = uStack_48;
    unaff_r8[1] = *puVar3;
  }
  *puVar3 = uStack_48;
  printerApi_cloud___Cloud__ConnectState();
  puVar4 = PTR_DAT_00648dc8;
  FUN_0008e7bc();
  puStack_38[1] = puVar1;
  puVar3 = puStack_38;
  if (*(int *)PTR_DAT_00648dd0 != 0) {
    puVar3 = (undefined4 *)FUN_00098688();
    *unaff_r8 = uStack_48;
    unaff_r8[1] = *puVar3;
  }
  *puVar3 = uStack_48;
  printerApi_common_config_DeviceZone();
  puVar1 = PTR_DAT_00648dc8;
  FUN_0008e7bc();
  puStack_38[1] = uStack_48;
  puVar3 = puStack_38;
  if (*(int *)PTR_DAT_00648dd0 != 0) {
    puVar3 = (undefined4 *)FUN_00098688();
    *unaff_r8 = puVar4;
    unaff_r8[1] = *puVar3;
  }
  *puVar3 = puVar4;
  printerApi_common_config_DeviceEnv();
  puVar4 = PTR_DAT_00648dc8;
  FUN_0008e7bc();
  puStack_38[1] = uStack_48;
  puVar3 = puStack_38;
  if (*(int *)PTR_DAT_00648dd0 != 0) {
    puVar3 = (undefined4 *)FUN_00098688();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *puVar3;
  }
  *puVar3 = puVar1;
  printerApi_common_config_BleName();
  puVar1 = PTR_DAT_00648dc8;
  FUN_0008e7bc();
  puStack_38[1] = uStack_48;
  puVar3 = puStack_38;
  if (*(int *)PTR_DAT_00648dd0 != 0) {
    puVar3 = (undefined4 *)FUN_00098688();
    *unaff_r8 = puVar4;
    unaff_r8[1] = *puVar3;
  }
  *puVar3 = puVar4;
  printerApi_common_os_NetworkMac(puVar3);
  puVar4 = PTR_DAT_00648dc8;
  FUN_0008e7bc();
  puStack_38[1] = uStack_48;
  puVar3 = puStack_38;
  if (*(int *)PTR_DAT_00648dd0 != 0) {
    puVar3 = (undefined4 *)FUN_00098688();
    *unaff_r8 = puVar1;
    unaff_r8[1] = *puVar3;
  }
  *puVar3 = puVar1;
  printerApi_common_config_LanPrintIsOpen();
  puVar1 = PTR_DAT_00648dc8;
  uStack_48._0_1_ = (char)puVar4;
  if ((char)uStack_48 == '\0') {
    uVar2 = 5;
    puVar4 = PTR_DAT_00648df0;
  }
  else {
    uVar2 = 3;
    puVar4 = PTR_DAT_00648dec;
  }
  puStack_40 = PTR_DAT_00648df4;
  uStack_3c = 0xe;
  FUN_0008e7bc();
  puStack_38[1] = uVar2;
  puVar3 = puStack_38;
  if (*(int *)PTR_DAT_00648dd0 != 0) {
    puVar3 = (undefined4 *)FUN_00098688();
    *unaff_r8 = puVar4;
    unaff_r8[1] = *puVar3;
  }
  *puVar3 = puVar4;
  printerApi_common_config_LanPrintIsOpen();
  uStack_48._0_1_ = (char)puVar1;
  if ((char)uStack_48 != '\0') {
    puStack_40 = PTR_DAT_00648dd8;
    uStack_3c = 5;
    FUN_0008e7bc();
    puStack_38[1] = 10;
    puVar3 = puStack_38;
    if (*(int *)PTR_DAT_00648dd0 != 0) {
      uVar6 = FUN_00098678(puStack_38,*puStack_38);
      puVar3 = (undefined4 *)uVar6;
      *unaff_r8 = (int)((ulonglong)uVar6 >> 0x20);
    }
    *puVar3 = PTR_s_disconnectworkReportcloud_failmq_007765bd_0x37e_00648df8;
  }
  FUN_001707f4();
  *(undefined4 *)(in_stack_0000001c + 0x14) = uStack_3c;
  *(undefined4 **)(in_stack_0000001c + 0x18) = puStack_38;
  iVar5 = in_stack_0000001c;
  if (*(int *)PTR_DAT_00648dd0 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x10);
    puStack_40 = extraout_r2;
    iVar5 = extraout_r3;
  }
  *(undefined **)(iVar5 + 0x10) = puStack_40;
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00648db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/cloudController.CloudController.WifiConnected @ 00648dfc (size 36) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_cloudController_CloudController_WifiConnected(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  
  *(undefined4 *)(*_UNK_00648e24 + 0x40c) = in_stack_00000014;
  uStack0000001c = 0;
  uStack00000020 = 0;
                    /* WARNING: Could not recover jumptable at 0x00648e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/cloudController.CloudController.WifiDisConnected @ 00648e28 (size 52) */

void printerApi_controller_cloudController_CloudController_WifiDisConnected(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x648e58;
    FUN_00096bb8();
  }
  printerApi_cloud_Stop();
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x00648e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/cloudController.CloudController.SetEnv @ 00648e5c (size 752) */

void printerApi_controller_cloudController_CloudController_SetEnv(void)

{
  undefined *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  char *in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined *in_stack_00000020;
  undefined4 *in_stack_00000024;
  undefined4 *puStack_58;
  char cStack_50;
  undefined *puStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  undefined4 *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined4 *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined **ppuStack_4;
  
  while (puVar1 = PTR_DAT_00649158, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x649150;
    FUN_00096bb8();
  }
  ppuStack_4 = (undefined **)0x0;
  in_stack_00000020 = (undefined *)0x0;
  in_stack_00000024 = (undefined4 *)0x0;
  FUN_000b3994();
  puStack_2c = PTR_printerApi_controller_cloudController_CloudController_SetEnv_deferwrap1_0064915c;
  puStack_28 = PTR_DAT_00649158;
  ppuStack_4 = &puStack_2c;
  printerApi_common_config_DeviceEnv();
  puVar3 = in_stack_00000018;
  if (in_stack_00000018 == puStack_58) {
    puStack_58 = (undefined4 *)puVar1;
    FUN_000150d4();
    if (cStack_50 != '\0') {
      FUN_00098a20(0,&puStack_1c);
      puStack_1c = PTR_SUB_00649178;
      puStack_18 = PTR_DAT_0064917c;
      FUN_0008a578();
      puStack_14 = PTR_SUB_00649178;
      puStack_10 = puVar3;
      puStack_c = PTR_SUB_00649178;
      puStack_8 = PTR_DAT_00649180;
      printerApi_common_logger_Debug();
      in_stack_00000020 = (undefined *)0x0;
      in_stack_00000024 = (undefined4 *)0x0;
      (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064913c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  puVar3 = in_stack_00000018;
  pcVar2 = in_stack_00000014;
  if ((in_stack_00000018 == (undefined4 *)&DAT_00000004) &&
     (((((*in_stack_00000014 == 'p' && (in_stack_00000014[1] == 'r')) &&
        (in_stack_00000014[2] == 'o')) && (in_stack_00000014[3] == 'd')) ||
      (((*in_stack_00000014 == 't' && (in_stack_00000014[1] == 'e')) &&
       ((in_stack_00000014[2] == 's' && (in_stack_00000014[3] == 't')))))))) {
    printerApi_common_config_SetDeviceEnv();
    printerApi_common_config_SaveDeviceCfg();
    if (pcVar2 == (char *)0x0) {
      FUN_00098a28(0,&puStack_3c);
      uStack_38 = 10;
      puStack_3c = PTR_s__useremaintotal_stepace_drying_m_007765bd_0x298_00649164;
      uStack_30 = 9;
      puStack_34 = PTR_s__updatingorigin3mfunzippingcance_0077568d_0x6b7_00649168;
      FUN_00159184();
      FUN_00127c60();
      printerApi_cloud_Stop();
      in_stack_00000020 = (undefined *)0x0;
      in_stack_00000024 = (undefined4 *)0x0;
      (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064906c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    uStack_24 = *(undefined4 *)(pcVar2 + 4);
    puStack_20 = puVar3;
    FUN_00130144();
    (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00648fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0001eed8();
  puStack_58[1] = 0xb;
  *puStack_58 = PTR_DAT_00649170;
  in_stack_00000020 = PTR_DAT_00649174;
  in_stack_00000024 = puStack_58;
  (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x006490b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/cloudController.CloudController.SetEnv.deferwrap1 @ 00649184 (size 84) */

void printerApi_controller_cloudController_CloudController_SetEnv_deferwrap1(void)

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



/* printerApi/controller/cloudController.CloudController.CreateDevice @ 006491d8 (size 1404) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_cloudController_CloudController_CreateDevice(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined *extraout_r2;
  int extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_0000001c;
  undefined *puStack_84;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  uint uStack_78;
  undefined4 *puStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [12];
  char cStack_5c;
  undefined1 uStack_51;
  undefined *puStack_50;
  undefined *puStack_4c;
  undefined *puStack_48;
  undefined *puStack_44;
  undefined *puStack_40;
  undefined1 auStack_3c [20];
  undefined *puStack_28;
  undefined *puStack_24;
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  uint uStack_8;
  undefined **ppuStack_4;
  
  while (&uStack_8 <= *(uint **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x649758;
    FUN_00096bb8();
  }
  ppuStack_4 = (undefined **)0x0;
  uStack_51 = 0;
  puStack_84 = PTR_DAT_00649760;
  FUN_000b3994();
  puStack_28 = 
  PTR_printerApi_controller_cloudController_CloudController_CreateDevice_deferwrap1_00649764;
  puStack_24 = PTR_DAT_00649760;
  ppuStack_4 = &puStack_28;
  uStack_51 = 1;
  printerApi_common_config_LanPrintIsOpen();
  if ((((uint)puStack_84 & 0xff) == 0) &&
     (printerApi_common_config_NTPSync(), puStack_84 != (undefined *)0x0)) {
    uStack_c = *(undefined4 *)(puStack_84 + 4);
    uStack_8 = (uint)puStack_80;
    puStack_84 = PTR_DAT_00649768;
    puStack_80 = (undefined4 *)0x25;
    puStack_7c = &uStack_c;
    uStack_78 = 1;
    puStack_74 = (undefined4 *)0x1;
    printerApi_common_logger_Errorf();
  }
  printerApi_common_config_DeviceEnv();
  printerApi_common_config_SetDeviceEnv();
  puStack_84 = (undefined *)0x0;
  puStack_80 = (undefined4 *)0x0;
  puStack_7c = (undefined4 *)0x0;
  uStack_78 = 0;
  puStack_74 = (undefined4 *)0x0;
  uStack_70 = 0;
  printerApi_common_config_SetCloudUnionid();
  printerApi_common_config_SaveDeviceCfg();
  if (puStack_84 != (undefined *)0x0) {
    uStack_c = *(undefined4 *)(puStack_84 + 4);
    uStack_8 = (uint)puStack_80;
    puStack_84 = PTR_DAT_0064976c;
    puStack_80 = (undefined4 *)&DAT_00000020;
    puStack_7c = &uStack_c;
    uStack_78 = 1;
    puStack_74 = (undefined4 *)0x1;
    printerApi_common_logger_Errorf();
    puStack_84 = PTR_DAT_00649770;
    FUN_0001eed8();
    puStack_80[1] = 0x1c;
    *puStack_80 = PTR_DAT_00649774;
    uStack_51 = 0;
    (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00649370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  puStack_84 = *(undefined **)PTR_DAT_0064977c;
  printerApi_cloud___Cloud__CreateDevice();
  if (puStack_80 != (undefined4 *)0x0) {
    uStack_c = *(undefined4 *)((int)puStack_80 + 4);
    uStack_8 = (uint)puStack_7c;
    puStack_84 = PTR_DAT_0064978c;
    puStack_80 = (undefined4 *)&DAT_00000017;
    puStack_7c = &uStack_c;
    uStack_78 = 1;
    puStack_74 = (undefined4 *)0x1;
    printerApi_common_logger_Errorf();
    puStack_84 = PTR_DAT_00649770;
    FUN_0001eed8();
    puStack_80[1] = 0x13;
    *puStack_80 = PTR_DAT_00649790;
    uStack_51 = 0;
    (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00649528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  puStack_84 = *(undefined **)PTR_DAT_0064977c;
  puStack_80 = (undefined4 *)0x1;
  printerApi_cloud___Cloud__Connect();
  puVar3 = puStack_7c;
  uVar4 = uStack_78;
  if (puStack_7c == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0;
    uVar4 = 0;
  }
  if (puVar3 != (undefined4 *)0x0) {
    uStack_c = *(undefined4 *)((int)puVar3 + 4);
    puStack_84 = PTR_DAT_00649784;
    puStack_80 = (undefined4 *)&SUB_00000024;
    puStack_7c = &uStack_c;
    uStack_78 = 1;
    puStack_74 = (undefined4 *)0x1;
    uStack_8 = uVar4;
    printerApi_common_logger_Errorf();
    puStack_84 = PTR_DAT_00649770;
    FUN_0001eed8();
    puStack_80[1] = 0x15;
    *puStack_80 = PTR_DAT_00649788;
    uStack_51 = 0;
    (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064949c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uVar2 = FUN_0010cf30();
  uVar2 = FUN_00098e14(uVar2,&puStack_84,auStack_20);
  FUN_00098e14(uVar2,auStack_20,&puStack_84);
  uStack_70 = _UNK_00649780;
  uStack_6c = 3;
  uVar2 = FUN_00102dac();
  FUN_00098e14(uVar2,auStack_68,auStack_3c);
  do {
    puStack_84 = *(undefined **)PTR_DAT_0064977c;
    printerApi_cloud___Cloud__ConnectState();
    if (puStack_7c == (undefined4 *)0x9) {
      puStack_84 = (undefined *)puStack_80;
      puStack_80 = (undefined4 *)PTR_s_connectedParseBool_method___MISS_0077568d_0x561_00649798;
      puStack_7c = (undefined4 *)0x9;
      FUN_000150d4();
      if ((uStack_78 & 0xff) == 0) goto LAB_0064958c;
      cVar1 = '\0';
    }
    else {
LAB_0064958c:
      uVar2 = FUN_0010cf30();
      uVar2 = FUN_00098e14(uVar2,&puStack_84,auStack_20);
      uVar2 = FUN_00098e14(uVar2,auStack_20,&puStack_84);
      FUN_00098e14(uVar2,auStack_3c,&uStack_70);
      FUN_00100b64();
      cVar1 = cStack_5c;
    }
    if (cVar1 == '\0') {
      FUN_0008b6b8();
      puStack_40 = puStack_84;
      printerApi_common_config_GetMachineCode(puStack_84);
      puStack_4c = (undefined *)puStack_80;
      puStack_44 = puStack_84;
      puStack_84 = PTR_DAT_0064979c;
      puStack_80 = (undefined4 *)puStack_40;
      puStack_7c = (undefined4 *)PTR_DAT_006497a0;
      uStack_78 = 6;
      FUN_0008e7bc();
      puStack_74[1] = puStack_4c;
      puVar3 = puStack_74;
      if (*(int *)PTR_DAT_006497a4 != 0) {
        puVar3 = (undefined4 *)FUN_00098688();
        *unaff_r8 = puStack_44;
        unaff_r8[1] = *puVar3;
      }
      *puVar3 = puStack_44;
      puStack_84 = *(undefined **)PTR_DAT_0064977c;
      printerApi_cloud___Cloud__ConnectState();
      puStack_50 = (undefined *)puStack_7c;
      puStack_48 = (undefined *)puStack_80;
      puStack_84 = PTR_DAT_0064979c;
      puStack_80 = (undefined4 *)puStack_40;
      puStack_7c = (undefined4 *)PTR_DAT_006497a8;
      uStack_78 = 5;
      FUN_0008e7bc();
      puStack_74[1] = puStack_50;
      puVar3 = puStack_74;
      if (*(int *)PTR_DAT_006497a4 != 0) {
        puVar3 = (undefined4 *)FUN_00098688();
        *unaff_r8 = puStack_48;
        unaff_r8[1] = *puVar3;
      }
      *puVar3 = puStack_48;
      puStack_84 = PTR_DAT_0064979c;
      puStack_80 = (undefined4 *)puStack_40;
      FUN_001707f4();
      *(uint *)(in_stack_0000001c + 0x14) = uStack_78;
      *(undefined4 **)(in_stack_0000001c + 0x18) = puStack_74;
      puVar3 = puStack_7c;
      if (*(int *)PTR_DAT_006497a4 != 0) {
        FUN_00098688();
        *unaff_r8 = extraout_r2;
        unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x10);
        puVar3 = (undefined4 *)extraout_r2;
        in_stack_0000001c = extraout_r3;
      }
      *(undefined4 **)(in_stack_0000001c + 0x10) = puVar3;
      uStack_51 = 0;
      (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00649744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    puStack_84 = _UNK_00649794;
    puStack_80 = (undefined4 *)0x0;
    FUN_000953d0();
  } while( true );
}



/* printerApi/controller/cloudController.CloudController.CreateDevice.deferwrap1 @ 006497ac (size 84) */

void printerApi_controller_cloudController_CloudController_CreateDevice_deferwrap1(void)

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



/* printerApi/controller/cloudController.CloudController.SetZone @ 00649800 (size 768) */

void printerApi_controller_cloudController_CloudController_SetZone(void)

{
  undefined *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  char *in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined *in_stack_00000020;
  undefined4 *in_stack_00000024;
  undefined4 *puStack_58;
  char cStack_50;
  undefined *puStack_3c;
  undefined4 uStack_38;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  undefined4 *puStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined4 *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined **ppuStack_4;
  
  while (puVar1 = PTR_DAT_00649b0c, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x649b04;
    FUN_00096bb8();
  }
  ppuStack_4 = (undefined **)0x0;
  in_stack_00000020 = (undefined *)0x0;
  in_stack_00000024 = (undefined4 *)0x0;
  FUN_000b3994();
  puStack_2c = PTR_printerApi_controller_cloudController_CloudController_SetZone_deferwrap1_00649b10
  ;
  puStack_28 = PTR_DAT_00649b0c;
  ppuStack_4 = &puStack_2c;
  printerApi_common_config_DeviceZone();
  puVar3 = in_stack_00000018;
  if (in_stack_00000018 == puStack_58) {
    puStack_58 = (undefined4 *)puVar1;
    FUN_000150d4();
    if (cStack_50 != '\0') {
      FUN_00098a20(0,&puStack_1c);
      puStack_1c = PTR_SUB_00649b2c;
      puStack_18 = PTR_DAT_00649b30;
      FUN_0008a578();
      puStack_14 = PTR_SUB_00649b2c;
      puStack_10 = puVar3;
      puStack_c = PTR_SUB_00649b2c;
      puStack_8 = PTR_DAT_00649b34;
      printerApi_common_logger_Debug();
      in_stack_00000020 = (undefined *)0x0;
      in_stack_00000024 = (undefined4 *)0x0;
      (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00649af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  puVar3 = in_stack_00000018;
  pcVar2 = in_stack_00000014;
  if (in_stack_00000018 == (undefined4 *)0x2) {
    if ((*in_stack_00000014 == 'c') && (in_stack_00000014[1] == 'n')) {
LAB_00649910:
      printerApi_common_config_SetDeviceZone();
      printerApi_common_config_SaveDeviceCfg();
      if (pcVar2 != (char *)0x0) {
        uStack_24 = *(undefined4 *)(pcVar2 + 4);
        puStack_20 = puVar3;
        FUN_00130144();
        (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064999c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
      FUN_00098a28(0,&puStack_3c);
      uStack_38 = 10;
      puStack_3c = PTR_s__useremaintotal_stepace_drying_m_007765bd_0x298_00649b18;
      uStack_30 = 9;
      puStack_34 = PTR_s__updatingorigin3mfunzippingcance_0077568d_0x6b7_00649b1c;
      FUN_00159184();
      FUN_00127c60();
      printerApi_cloud_Stop();
      in_stack_00000020 = (undefined *)0x0;
      in_stack_00000024 = (undefined4 *)0x0;
      (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00649a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else if (((((in_stack_00000018 == (undefined4 *)&DAT_00000006) && (*in_stack_00000014 == 'g')) &&
            (in_stack_00000014[1] == 'l')) &&
           ((in_stack_00000014[2] == 'o' && (in_stack_00000014[3] == 'b')))) &&
          ((in_stack_00000014[4] == 'a' && (in_stack_00000014[5] == 'l')))) goto LAB_00649910;
  FUN_0001eed8();
  puStack_58[1] = 0xc;
  *puStack_58 = PTR_DAT_00649b24;
  in_stack_00000020 = PTR_DAT_00649b28;
  in_stack_00000024 = puStack_58;
  (*(code *)*ppuStack_4)();
                    /* WARNING: Could not recover jumptable at 0x00649a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/cloudController.CloudController.SetZone.deferwrap1 @ 00649b38 (size 84) */

void printerApi_controller_cloudController_CloudController_SetZone_deferwrap1(void)

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



/* printerApi/controller/cloudController.CloudController.CloudRecommendList @ 00649b8c (size 504) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_cloudController_CloudController_CloudRecommendList(void)

{
  undefined4 *puVar1;
  undefined *extraout_r2;
  undefined *puVar2;
  int extraout_r3;
  int iVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *puStack_2c;
  undefined4 *puStack_24;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x649d88;
    FUN_00096bb8();
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
  FUN_00155144();
  printerApi_cloud___fileHandler__CloudRecommendList();
  if (puStack_24 == (undefined4 *)0x0) {
    FUN_0008b6b8();
    FUN_0008a61c();
    puVar2 = PTR_s_recordstaskUrlmqtt_v5mochi_2pubc_00774847_0x7fa_00649da4;
    FUN_0008e7bc();
    *puStack_2c = PTR_DAT_00649da8;
    puVar1 = puStack_2c;
    if (*(int *)PTR_DAT_00649dac != 0) {
      puVar1 = (undefined4 *)FUN_00098688();
      *unaff_r8 = 1;
      unaff_r8[1] = puVar1[1];
    }
    puVar1[1] = 1;
    FUN_001707f4();
    *(undefined4 *)(in_stack_0000001c + 0x14) = 7;
    *(undefined4 **)(in_stack_0000001c + 0x18) = puStack_2c;
    iVar3 = in_stack_0000001c;
    if (*(int *)PTR_DAT_00649dac != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r2;
      unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x10);
      puVar2 = extraout_r2;
      iVar3 = extraout_r3;
    }
    *(undefined **)(iVar3 + 0x10) = puVar2;
    in_stack_00000020 = 0;
    in_stack_00000024 = 0;
    (*pcRam00000000)();
                    /* WARNING: Could not recover jumptable at 0x00649d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  (*(code *)*puStack_24)();
                    /* WARNING: Could not recover jumptable at 0x00649d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* printerApi/controller/cloudController.CloudController.CloudRecommendDownload @ 00649db0 (size 2136) */

/* WARNING: Removing unreachable block (ram,0x0064a090) */
/* WARNING: Removing unreachable block (ram,0x0064a24c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_cloudController_CloudController_CloudRecommendDownload(void)

{
  undefined4 *puVar1;
  undefined **ppuVar2;
  int iVar3;
  undefined **extraout_r2;
  undefined **extraout_r2_00;
  undefined **ppuVar4;
  undefined **extraout_r2_01;
  undefined4 uVar5;
  uint uVar6;
  int extraout_r3;
  int extraout_r3_00;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar7;
  undefined **in_stack_00000014;
  undefined *in_stack_00000018;
  uint in_stack_0000001c;
  int in_stack_00000020;
  undefined **in_stack_00000024;
  undefined **in_stack_00000028;
  undefined **in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  undefined4 *in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuStack_148;
  undefined **ppuStack_144;
  undefined4 *puStack_140;
  undefined *puStack_13c;
  undefined4 uStack_138;
  int iStack_134;
  undefined4 uStack_130;
  undefined1 uStack_125;
  undefined4 *puStack_124;
  int iStack_120;
  undefined1 auStack_11c [16];
  uint uStack_10c;
  uint uStack_108;
  undefined4 *puStack_104;
  undefined **ppuStack_100;
  uint uStack_fc;
  int iStack_f8;
  undefined1 uStack_f4;
  undefined **ppuStack_e8;
  undefined **ppuStack_e4;
  undefined **ppuStack_e0;
  undefined1 auStack_d4 [12];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined *puStack_c0;
  undefined1 auStack_bc [48];
  undefined ***pppuStack_8c;
  undefined **ppuStack_88;
  undefined1 auStack_84 [8];
  undefined **ppuStack_7c;
  undefined *puStack_78;
  undefined *puStack_74;
  undefined4 *puStack_70;
  undefined4 auStack_6c [13];
  undefined *puStack_38;
  undefined **ppuStack_34;
  undefined *puStack_30;
  undefined **ppuStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  undefined *puStack_20;
  undefined **ppuStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined **ppuStack_10;
  undefined **ppuStack_c;
  undefined **ppuStack_8;
  undefined *puStack_4;
  
  while (auStack_d4 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x64a678;
    FUN_00096bb8();
  }
  puStack_4 = (undefined *)0x0;
  uStack_125 = 0;
  in_stack_00000038 = (undefined4 *)0x0;
  in_stack_0000003c = 0;
  uVar5 = *(undefined4 *)PTR_DAT_0064a5dc;
  uVar8 = 1;
  printerApi_cloud___Cloud__ReportWorkStatus(0);
  puStack_4 = PTR_DAT_0064a5e0;
  uStack_125 = 1;
  iVar3 = *(int *)(*(int *)(*(int *)PTR_DAT_0064a5e4 + 8) + 0x16c);
  puVar9 = *(undefined **)(*(int *)(*(int *)PTR_DAT_0064a5e4 + 8) + 0x168);
  if (iVar3 == 0) {
    iVar3 = 0x18;
    puVar9 = PTR_DAT_0064a5e8;
  }
  FUN_00098a28(0,auStack_84,iVar3,puVar9,UNRECOVERED_JUMPTABLE,uVar5,uVar8);
  puStack_78 = in_stack_00000018;
  ppuStack_7c = in_stack_00000014;
  puVar9 = (undefined *)0x2;
  ppuStack_148 = (undefined **)0x2;
  uVar5 = FUN_00159184();
  ppuStack_100 = ppuStack_144;
  puStack_124 = puStack_140;
  FUN_0009bf4c(uVar5);
  if (puVar9 != PTR_DAT_0064a5f0) {
    ppuStack_148 = _UNK_0064a680;
    uVar5 = FUN_0001cb94();
    FUN_0004fb3c(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0064a66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ppuStack_88 = ppuStack_148;
  printerApi_common_file_FileExist();
  if (((char)ppuStack_148 != '\0') &&
     (printerApi_common_file_FileMD5(), in_stack_00000028 == ppuStack_144)) {
    ppuStack_148 = ppuStack_144;
    ppuVar2 = in_stack_00000024;
    FUN_000150d4();
    if ((char)ppuStack_144 != '\0') {
      FUN_0001eed8();
      ppuVar2[1] = (undefined *)0x14;
      *ppuVar2 = PTR_DAT_0064a638;
      ppuStack_8 = ppuVar2;
      FUN_0001eed8();
      ppuVar2[1] = in_stack_00000018;
      ppuVar4 = in_stack_00000014;
      ppuVar10 = ppuVar2;
      if (*(int *)PTR_DAT_0064a61c != 0) {
        ppuVar2 = (undefined **)FUN_00098678();
        *unaff_r8 = extraout_r2_00;
        ppuVar4 = extraout_r2_00;
      }
      *ppuVar2 = (undefined *)ppuVar4;
      ppuStack_c = ppuVar2;
      FUN_0001eed8();
      *(undefined8 *)ppuVar10 = *(undefined8 *)PTR_DAT_0064a640;
      ppuStack_148 = ppuStack_c;
      ppuStack_144 = ppuVar10;
      printerApi_service_k3c_wrapper___K3cwrapper__PublishDownloadStatus();
      FUN_00098a20(0,&puStack_28);
      puStack_28 = PTR_SUB_0064a634;
      puStack_24 = PTR_DAT_0064a644;
      FUN_0008a578();
      puStack_20 = PTR_SUB_0064a634;
      ppuStack_1c = ppuStack_148;
      puStack_18 = PTR_SUB_0064a634;
      puStack_14 = PTR_DAT_0064a648;
      ppuVar2 = &puStack_28;
      ppuStack_148 = (undefined **)0x3;
      printerApi_common_logger_Debug();
      FUN_0008b6b8();
      ppuStack_148 = (undefined **)PTR_s_existnablanotinminusradicinfinas_00773bd2_0x2e3_0064a614;
      ppuStack_144 = (undefined **)0x5;
      ppuStack_10 = ppuVar2;
      FUN_0008e7bc();
      *puStack_140 = PTR_DAT_0064a618;
      puVar1 = puStack_140;
      if (*(int *)PTR_DAT_0064a61c != 0) {
        uVar7 = FUN_00098678(puStack_140,puStack_140[1]);
        puVar1 = (undefined4 *)uVar7;
        *unaff_r8 = (int)((ulonglong)uVar7 >> 0x20);
      }
      puVar1[1] = PTR_DAT_0064a64c;
      FUN_001707f4();
      *(undefined ***)(in_stack_00000034 + 0x14) = ppuStack_144;
      *(undefined4 **)(in_stack_00000034 + 0x18) = puStack_140;
      ppuVar2 = ppuStack_148;
      iVar3 = in_stack_00000034;
      if (*(int *)PTR_DAT_0064a61c != 0) {
        FUN_00098688();
        *unaff_r8 = extraout_r2_01;
        unaff_r8[1] = *(undefined4 *)(extraout_r3_00 + 0x10);
        ppuVar2 = extraout_r2_01;
        iVar3 = extraout_r3_00;
      }
      *(undefined ***)(iVar3 + 0x10) = ppuVar2;
      in_stack_00000038 = (undefined4 *)0x0;
      in_stack_0000003c = 0;
      uStack_125 = 0;
      printerApi_controller_cloudController_CloudController_CloudRecommendDownload_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0064a5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  uVar5 = printerApi_common_file_DiskUsage();
  uVar5 = FUN_00098e0c(uVar5,&ppuStack_148,&uStack_fc);
  FUN_00098e0c(uVar5,&uStack_fc,auStack_11c);
  uVar6 = in_stack_00000020 + (uint)(0xf37fffff < in_stack_0000001c);
  if (uStack_108 < uVar6 || uStack_108 == uVar6 && uStack_10c < in_stack_0000001c + 0xc800000) {
    FUN_00098a28(0,&puStack_38);
    FUN_0008a4bc();
    puStack_38 = PTR_DAT_0064a624;
    ppuStack_34 = ppuStack_148;
    FUN_0008a4bc();
    puStack_30 = PTR_DAT_0064a628;
    ppuStack_2c = ppuStack_148;
    ppuStack_148 = &puStack_38;
    ppuStack_144 = (undefined **)0x2;
    puStack_140 = (undefined4 *)0x2;
    printerApi_common_logger_Errorf();
    in_stack_0000003c = *(undefined4 *)PTR_DAT_0064a630;
    in_stack_00000038 = (undefined4 *)PTR_DAT_0064a604;
    uStack_125 = 0;
    printerApi_controller_cloudController_CloudController_CloudRecommendDownload_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0064a40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar5 = FUN_00098a04(0,&uStack_fc);
  uStack_fc = in_stack_0000001c;
  iStack_f8 = in_stack_00000020;
  ppuStack_e8 = in_stack_00000024;
  ppuStack_e4 = in_stack_00000028;
  uStack_f4 = 1;
  uVar5 = FUN_00098a00(uVar5,&puStack_c0);
  puStack_c0 = 
  PTR_printerApi_controller_cloudController_CloudController_CloudRecommendDownload_func1_0064a5f4;
  FUN_00098ddc(uVar5,&stack0x00000004,auStack_bc);
  pppuStack_8c = &ppuStack_88;
  ppuStack_e0 = &puStack_c0;
  uVar5 = FUN_00098a04(0,auStack_6c);
  FUN_00098dd4(uVar5,&uStack_fc,auStack_6c);
  ppuStack_148 = in_stack_0000002c;
  ppuStack_144 = (undefined **)in_stack_00000030;
  puStack_140 = auStack_6c;
  puStack_13c = (undefined *)0x1;
  uStack_138 = 1;
  printerApi_common_file_DownloadFile();
  if (iStack_134 != 0) {
    iStack_120 = iStack_134;
    puStack_74 = *(undefined **)(iStack_134 + 4);
    uStack_c8 = uStack_130;
    puStack_70 = (undefined4 *)uStack_130;
    ppuStack_148 = (undefined **)0x9;
    ppuStack_144 = in_stack_00000014;
    puStack_140 = (undefined4 *)in_stack_00000018;
    puStack_13c = PTR_DAT_0064a5fc;
    uStack_138 = 0xb;
    FUN_00071620();
    ppuStack_148 = &puStack_74;
    ppuStack_144 = (undefined **)0x1;
    puStack_140 = (undefined4 *)0x1;
    printerApi_common_logger_Errorf();
    func_0x00122b08();
    if ((char)ppuStack_148 == '\0') {
      in_stack_00000038 = (undefined4 *)iStack_120;
      in_stack_0000003c = uStack_c8;
      uStack_125 = 0;
      printerApi_controller_cloudController_CloudController_CloudRecommendDownload_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0064a164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    in_stack_0000003c = *(undefined4 *)PTR_DAT_0064a600;
    in_stack_00000038 = (undefined4 *)PTR_DAT_0064a604;
    uStack_125 = 0;
    printerApi_controller_cloudController_CloudController_CloudRecommendDownload_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0064a144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  ppuVar2 = in_stack_00000014;
  printerApi_common_threemf_Detect();
  if (((uint)ppuStack_148 & 0xff) != 0) {
    ppuVar2 = ppuStack_100;
    printerApi_common_threemf_HasPlateMetadata();
    if (ppuStack_144 == (undefined **)0x0) {
      uVar6 = (uint)ppuStack_148 & 0xff;
    }
    else {
      puStack_74 = *(undefined **)((int)ppuStack_144 + 4);
      puStack_70 = puStack_140;
      ppuStack_148 = &puStack_74;
      ppuStack_144 = (undefined **)0x1;
      puStack_140 = (undefined4 *)0x1;
      ppuVar2 = (undefined **)PTR_DAT_0064a608;
      printerApi_common_logger_Warnf();
      uVar6 = 1;
    }
    if ((uVar6 == 0) &&
       (ppuVar2 = ppuStack_100, printerApi_common_threemf_ConvertLegacy3MF(),
       puStack_140 != (undefined4 *)0x0)) {
      puStack_104 = puStack_140;
      puStack_74 = (undefined *)puStack_140[1];
      uStack_c4 = puStack_13c;
      puStack_70 = (undefined4 *)puStack_13c;
      ppuStack_148 = &puStack_74;
      ppuStack_144 = (undefined **)0x1;
      puStack_140 = (undefined4 *)0x1;
      printerApi_common_logger_Errorf();
      in_stack_00000038 = puStack_104;
      in_stack_0000003c = uStack_c4;
      uStack_125 = 0;
      printerApi_controller_cloudController_CloudController_CloudRecommendDownload_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0064a2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  FUN_0008b6b8();
  ppuStack_148 = (undefined **)PTR_s_existnablanotinminusradicinfinas_00773bd2_0x2e3_0064a614;
  ppuStack_144 = (undefined **)0x5;
  ppuStack_10 = ppuVar2;
  FUN_0008e7bc();
  *puStack_140 = PTR_DAT_0064a618;
  puVar1 = puStack_140;
  if (*(int *)PTR_DAT_0064a61c != 0) {
    uVar7 = FUN_00098678(puStack_140,puStack_140[1]);
    puVar1 = (undefined4 *)uVar7;
    *unaff_r8 = (int)((ulonglong)uVar7 >> 0x20);
  }
  puVar1[1] = PTR_DAT_0064a620;
  FUN_001707f4();
  *(undefined ***)(in_stack_00000034 + 0x14) = ppuStack_144;
  *(undefined4 **)(in_stack_00000034 + 0x18) = puStack_140;
  ppuVar2 = ppuStack_148;
  iVar3 = in_stack_00000034;
  if (*(int *)PTR_DAT_0064a61c != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x10);
    ppuVar2 = extraout_r2;
    iVar3 = extraout_r3;
  }
  *(undefined ***)(iVar3 + 0x10) = ppuVar2;
  in_stack_00000038 = (undefined4 *)0x0;
  in_stack_0000003c = 0;
  uStack_125 = 0;
  printerApi_controller_cloudController_CloudController_CloudRecommendDownload_deferwrap1();
                    /* WARNING: Could not recover jumptable at 0x0064a36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/cloudController.CloudController.CloudRecommendDownload.func1 @ 0064a684 (size 392) */

void printerApi_controller_cloudController_CloudController_CloudRecommendDownload_func1(void)

{
  undefined4 *extraout_r2;
  undefined4 uVar1;
  undefined4 extraout_r3;
  int unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 in_stack_00000004;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 *puStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  FUN_00098a28(0,&uStack_18);
  FUN_00071620();
  FUN_0008a578();
  uStack_18 = DAT_0064a818;
  uStack_14 = 9;
  FUN_0008a4bc();
  uStack_10 = DAT_0064a81c;
  uStack_c = 9;
  printerApi_common_logger_Debug();
  FUN_0001eed8();
  uStack_4 = 2;
  uRam00000002 = CONCAT44(0x14,DAT_0064a820);
  FUN_0001eed8();
  puStack_8 = (undefined4 *)0x2;
  uVar1 = *(undefined4 *)(unaff_r7 + 0x14);
  uRam00000002 = CONCAT44(*(undefined4 *)(unaff_r7 + 0x18),(undefined4)uRam00000002);
  if (*DAT_0064a824 != 0) {
    FUN_00098678();
    *unaff_r8 = extraout_r3;
    puStack_8 = extraout_r2;
    uVar1 = extraout_r3;
  }
  *puStack_8 = uVar1;
  FUN_0001eed8();
  uRam00000002 = in_stack_00000004;
  printerApi_service_k3c_wrapper___K3cwrapper__PublishDownloadStatus();
  return;
}



/* printerApi/controller/cloudController.CloudController.BindQuery @ 0064a828 (size 1180) */

/* WARNING: Removing unreachable block (ram,0x0064aa90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_cloudController_CloudController_BindQuery(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r2;
  undefined *extraout_r2_00;
  undefined *extraout_r2_01;
  undefined *puVar4;
  int extraout_r3;
  int extraout_r3_00;
  int extraout_r3_01;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  int in_stack_0000001c;
  uint in_stack_ffffff60;
  undefined *puVar6;
  undefined4 uStack_94;
  undefined4 *puStack_90;
  undefined4 uStack_8c;
  undefined4 *puStack_88;
  int iStack_70;
  undefined4 uStack_6c;
  undefined1 uStack_65;
  int iStack_64;
  undefined1 auStack_60 [36];
  undefined4 *puStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [32];
  undefined4 *puStack_4;
  
  while (auStack_24 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x64acc8;
    FUN_00096bb8();
  }
  puStack_4 = (undefined4 *)0x0;
  uStack_65 = 0;
  printerApi_common_config_LanPrintIsOpen();
  if ((in_stack_ffffff60 & 0xff) != 0) {
    FUN_0008b6b8();
    uStack_94 = 4;
    FUN_0008e7bc();
    *puStack_90 = PTR_DAT_0064acd8;
    puVar1 = puStack_90;
    if (*(int *)PTR_DAT_0064acdc != 0) {
      uVar5 = FUN_00098678(puStack_90,puStack_90[1]);
      puVar1 = (undefined4 *)uVar5;
      *unaff_r8 = (int)((ulonglong)uVar5 >> 0x20);
    }
    puVar1[1] = PTR_DAT_0064ace0;
    uStack_94 = 8;
    FUN_0008e7bc();
    puVar4 = PTR_SUB_0064ace8;
    *puStack_90 = PTR_SUB_0064ace8;
    puVar1 = puStack_90;
    if (*(int *)PTR_DAT_0064acdc != 0) {
      puVar1 = (undefined4 *)FUN_00098678(puStack_90,puVar4,puStack_90[1]);
      *unaff_r8 = extraout_r2;
    }
    puVar1[1] = PTR_DAT_0064acec;
    uStack_94 = 8;
    puVar4 = PTR_s_iconpathZ_ADJUSTble_nameTest100M_0077568d_0x3f0_0064acf0;
    FUN_0008e7bc();
    *puStack_90 = PTR_SUB_0064ace8;
    puVar1 = puStack_90;
    if (*(int *)PTR_DAT_0064acdc != 0) {
      uVar5 = FUN_00098678(puStack_90,puStack_90[1]);
      puVar1 = (undefined4 *)uVar5;
      *unaff_r8 = (int)((ulonglong)uVar5 >> 0x20);
    }
    puVar1[1] = PTR_DAT_0064acf4;
    FUN_001707f4();
    *(undefined4 *)(in_stack_0000001c + 0x14) = uStack_94;
    *(undefined4 **)(in_stack_0000001c + 0x18) = puStack_90;
    if (*(int *)PTR_DAT_0064acdc != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r2_00;
      unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x10);
      puVar4 = extraout_r2_00;
      in_stack_0000001c = extraout_r3;
    }
    *(undefined **)(in_stack_0000001c + 0x10) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x0064a9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uStack_94 = 1;
  puVar4 = PTR_DAT_0064acf8;
  puVar6 = PTR_DAT_0064acfc;
  uVar2 = _UNK_0064ad00;
  FUN_00155144();
  puVar1 = puStack_90;
  puStack_4 = puStack_88;
  uStack_65 = 1;
  FUN_00098a14(0,auStack_28,uStack_8c,*_UNK_0064ad04,UNRECOVERED_JUMPTABLE,puVar4,puVar6,uVar2);
  uVar2 = *(undefined4 *)(extraout_r3_00 + 0x24);
  printerApi_cloud___userHandler__BindQuery();
  iStack_64 = iStack_70;
  uVar3 = FUN_00098df4(iStack_70,&uStack_94,auStack_28,uStack_6c);
  FUN_00098df4(uVar3,auStack_28,auStack_60);
  if (iStack_64 != 0) {
    uStack_30 = *(undefined4 *)(iStack_64 + 4);
    uStack_94 = 1;
    puStack_90 = (undefined4 *)0x1;
    printerApi_common_logger_Errorf();
    uStack_65 = 0;
    (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064aaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0008b6b8();
  uStack_34 = uVar2;
  FUN_0001cec0();
  uStack_94 = 4;
  puVar4 = PTR_s_bindMQTT_ID__s_dmqtticmpigmpftps_0077367d_0x113_0064acd4;
  puStack_3c = puVar1;
  FUN_0008e7bc();
  *puStack_90 = PTR_DAT_0064acd8;
  puVar1 = puStack_90;
  if (*(int *)PTR_DAT_0064acdc != 0) {
    puVar1 = (undefined4 *)FUN_00098688();
    *unaff_r8 = puStack_3c;
    unaff_r8[1] = puVar1[1];
  }
  puVar1[1] = puStack_3c;
  FUN_0008a578();
  uStack_94 = 8;
  puStack_3c = (undefined4 *)puVar4;
  FUN_0008e7bc();
  *puStack_90 = PTR_SUB_0064ace8;
  puVar1 = puStack_90;
  if (*(int *)PTR_DAT_0064acdc != 0) {
    puVar1 = (undefined4 *)FUN_00098688();
    *unaff_r8 = puStack_3c;
    unaff_r8[1] = puVar1[1];
  }
  puVar1[1] = puStack_3c;
  uStack_94 = 8;
  puVar4 = PTR_s_iconpathZ_ADJUSTble_nameTest100M_0077568d_0x3f0_0064acf0;
  FUN_0008e7bc();
  *puStack_90 = PTR_SUB_0064ace8;
  puVar1 = puStack_90;
  if (*(int *)PTR_DAT_0064acdc != 0) {
    uVar5 = FUN_00098678(puStack_90,puStack_90[1]);
    puVar1 = (undefined4 *)uVar5;
    *unaff_r8 = (int)((ulonglong)uVar5 >> 0x20);
  }
  puVar1[1] = _UNK_0064ad0c;
  FUN_001707f4();
  *(undefined4 *)(in_stack_0000001c + 0x14) = uStack_94;
  *(undefined4 **)(in_stack_0000001c + 0x18) = puStack_90;
  if (*(int *)PTR_DAT_0064acdc != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2_01;
    unaff_r8[1] = *(undefined4 *)(extraout_r3_01 + 0x10);
    puVar4 = extraout_r2_01;
    in_stack_0000001c = extraout_r3_01;
  }
  *(undefined **)(in_stack_0000001c + 0x10) = puVar4;
  uStack_65 = 0;
  (*(code *)*puStack_4)();
                    /* WARNING: Could not recover jumptable at 0x0064acb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/cloudController.CloudController.GetTaskURL @ 0064b0e0 (size 408) */

void printerApi_controller_cloudController_CloudController_GetTaskURL(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *extraout_r2;
  undefined *puVar3;
  undefined4 *puVar4;
  int extraout_r3;
  int iVar5;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  char cStack_34;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x64b274;
    FUN_00096bb8();
  }
  if (((*(int *)(*(int *)PTR_DAT_0064b27c + 0x2fc) != 0) && (*(int *)PTR_DAT_0064b280 != 0)) &&
     (printerApi_common_config_LanPrintIsOpen(), puVar1 = PTR_DAT_0064b288, cStack_34 == '\0')) {
    puVar4 = *(undefined4 **)(*(int *)PTR_DAT_0064b27c + 0x2f8);
    FUN_0014913c();
    FUN_0008b6b8();
    FUN_0008a578();
    puVar3 = PTR_s_taskUrlmqtt_v5mochi_2pubcompConn_00774847_0x801_0064b290;
    FUN_0008e7bc();
    *puVar4 = PTR_SUB_0064b294;
    puVar2 = puVar4;
    if (*(int *)PTR_DAT_0064b298 != 0) {
      puVar2 = (undefined4 *)FUN_00098688();
      *unaff_r8 = puVar1;
      unaff_r8[1] = puVar2[1];
    }
    puVar2[1] = puVar1;
    FUN_001707f4();
    *(undefined4 *)(in_stack_0000001c + 0x14) = 7;
    *(undefined4 **)(in_stack_0000001c + 0x18) = puVar4;
    iVar5 = in_stack_0000001c;
    if (*(int *)PTR_DAT_0064b298 != 0) {
      FUN_00098688();
      *unaff_r8 = extraout_r2;
      unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x10);
      puVar3 = extraout_r2;
      iVar5 = extraout_r3;
    }
    *(undefined **)(iVar5 + 0x10) = puVar3;
  }
  in_stack_00000020 = 0;
  in_stack_00000024 = 0;
                    /* WARNING: Could not recover jumptable at 0x0064b268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/cloudController.CloudController.CloudRecommendDownload.deferwrap1 @ 0064b29c (size 96) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_cloudController_CloudController_CloudRecommendDownload_deferwrap1(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_10;
  undefined1 uStack_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x64b2dc;
    FUN_00096bb8();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *_UNK_0064b300;
  uStack_c = 0;
  printerApi_cloud___Cloud__ReportWorkStatus();
                    /* WARNING: Could not recover jumptable at 0x0064b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* printerApi/controller/cloudController.(*CloudController).BindQuery @ 0064b304 (size 132) */

void printerApi_controller_cloudController___CloudController__BindQuery(undefined4 param_1)

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
        printerApi_controller_cloudController_CloudController_BindQuery();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064b354. Too many branches */
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
    unaff_lr = 0x64b368;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/cloudController.(*CloudController).CloudRecommendDownload @ 0064b388 (size 132) */

void printerApi_controller_cloudController___CloudController__CloudRecommendDownload
               (undefined4 param_1)

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
        printerApi_controller_cloudController_CloudController_CloudRecommendDownload();
        *(undefined4 *)((int)register0x00000054 + 0x3c) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x40) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064b3d8. Too many branches */
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
    unaff_lr = 0x64b3ec;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/cloudController.(*CloudController).CloudRecommendList @ 0064b40c (size 132) */

void printerApi_controller_cloudController___CloudController__CloudRecommendList(undefined4 param_1)

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
        printerApi_controller_cloudController_CloudController_CloudRecommendList();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064b45c. Too many branches */
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
    unaff_lr = 0x64b470;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/cloudController.(*CloudController).CnCode @ 0064b490 (size 132) */

void printerApi_controller_cloudController___CloudController__CnCode(undefined4 param_1)

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
        printerApi_controller_cloudController_CloudController_CnCode();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064b4e0. Too many branches */
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
    unaff_lr = 0x64b4f4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/cloudController.(*CloudController).CreateDevice @ 0064b514 (size 132) */

void printerApi_controller_cloudController___CloudController__CreateDevice(undefined4 param_1)

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
        printerApi_controller_cloudController_CloudController_CreateDevice();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064b564. Too many branches */
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
    unaff_lr = 0x64b578;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/cloudController.(*CloudController).GetTaskURL @ 0064b598 (size 132) */

void printerApi_controller_cloudController___CloudController__GetTaskURL(undefined4 param_1)

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
        printerApi_controller_cloudController_CloudController_GetTaskURL();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064b5e8. Too many branches */
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
    unaff_lr = 0x64b5fc;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/cloudController.(*CloudController).SetEnv @ 0064b61c (size 132) */

void printerApi_controller_cloudController___CloudController__SetEnv(undefined4 param_1)

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
        printerApi_controller_cloudController_CloudController_SetEnv();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064b66c. Too many branches */
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
    unaff_lr = 0x64b680;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/cloudController.(*CloudController).SetZone @ 0064b6a0 (size 132) */

void printerApi_controller_cloudController___CloudController__SetZone(undefined4 param_1)

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
        printerApi_controller_cloudController_CloudController_SetZone();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064b6f0. Too many branches */
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
    unaff_lr = 0x64b704;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/cloudController.(*CloudController).Unbind @ 0064b724 (size 132) */

void printerApi_controller_cloudController___CloudController__Unbind(undefined4 param_1)

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
        printerApi_controller_cloudController_CloudController_Unbind();
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x28) =
             *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0064b774. Too many branches */
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
    unaff_lr = 0x64b788;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/cloudController.(*CloudController).WifiConnected @ 0064b7a8 (size 136) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_controller_cloudController___CloudController__WifiConnected(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)((int)register0x00000054 + -0x14);
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        FUN_00098e14(*(int *)((int)register0x00000054 + 4),
                     (undefined1 *)((int)register0x00000054 + 8),
                     (undefined1 *)((int)register0x00000054 + -0x14));
        *(undefined4 *)(*_UNK_0064b834 + 0x40c) = *(undefined4 *)((int)register0x00000054 + -4);
        *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
                    /* WARNING: Could not recover jumptable at 0x0064b7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x18))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x64b810;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/controller/cloudController.(*CloudController).WifiDisConnected @ 0064b838 (size 112) */

void printerApi_controller_cloudController___CloudController__WifiDisConnected(undefined4 param_1)

{
  int *piVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  bool bVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -4);
      *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
      piVar1 = *(int **)(unaff_r10 + 0x10);
      if ((piVar1 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar1)) {
        *piVar1 = (int)register0x00000054;
      }
      bVar3 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar3) {
        printerApi_cloud_Stop();
        *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x0064b874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -4))();
        return;
      }
      param_1 = FUN_0001b370();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -4);
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x64b888;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



