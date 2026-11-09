// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/filament   functions: 2
/* printerApi/service/filament.SetInfo @ 00484984 (size 492) */

void printerApi_service_filament_SetInfo(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  undefined *in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined *local_34;
  undefined4 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined *local_c;
  int local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00098a24(0,&stack0x00000018);
  if ((in_stack_00000010 != 3) && (in_stack_00000008 == 0)) {
    local_34 = PTR_DAT_00484b74;
    FUN_0001eed8();
    local_30[1] = 0xc;
    *local_30 = PTR_DAT_00484b78;
    FUN_00098a24(0,&stack0x00000018,local_30);
    return;
  }
  uVar1 = printerApi_service_filament_GetInfo();
  FUN_00098e14(uVar1,&local_34,&local_14);
  if (in_stack_00000010 == 3) {
    if (3 < local_8) {
      local_8 = 3;
    }
    if (local_c != in_stack_0000000c) {
      local_34 = local_c;
      local_30 = (undefined4 *)in_stack_0000000c;
      local_2c = (undefined *)(local_8 << 2);
      FUN_00098ec8();
    }
  }
  if (in_stack_00000008 != 0) {
    local_14 = in_stack_00000004;
    local_10 = in_stack_00000008;
  }
  local_34 = PTR_DAT_00484b80;
  local_30 = (undefined4 *)0x1b;
  internal_filepathlite_Dir();
  local_34 = local_2c;
  local_30 = (undefined4 *)local_28;
  printerApi_common_file_CreateDirIfNoexist();
  if (local_2c != (undefined *)0x0) {
    FUN_00098a24(0,&stack0x00000018,local_28,local_2c);
    return;
  }
  local_34 = PTR_DAT_00484b84;
  local_30 = &local_14;
  FUN_0001cd7c();
  local_34 = PTR_DAT_00484b84;
  local_30 = (undefined4 *)local_2c;
  FUN_001707f4();
  local_34 = PTR_DAT_00484b80;
  local_30 = (undefined4 *)0x1b;
  local_20 = 0x1a4;
  FUN_00126134();
  if (local_1c == 0) {
    local_34 = (undefined *)0x24;
    local_30 = (undefined4 *)0x0;
    local_2c = (undefined *)0x0;
    local_28 = 0;
    uVar1 = FUN_000f65f0();
    FUN_00098e14(uVar1,&local_14,&stack0x00000018);
    return;
  }
  FUN_00098a24(0,&stack0x00000018,local_18,local_1c);
  return;
}



/* printerApi/service/filament.GetInfo @ 00484b88 (size 264) */

/* WARNING: Removing unreachable block (ram,0x00484c44) */

void printerApi_service_filament_GetInfo(void)

{
  undefined4 uVar1;
  int unaff_r10;
  char local_24;
  int local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00098a24(0,&stack0x00000004);
  uVar1 = printerApi_common_file_FileExist();
  if (local_24 != '\0') {
    FUN_00125de4();
    if (local_18 == 0) {
      FUN_0001eed8();
      FUN_0016a168();
      FUN_00098e14(0,0x1b,&stack0x00000004);
      return;
    }
    FUN_00098e14(local_18,PTR_DAT_00484ca0,&stack0x00000004);
    return;
  }
  FUN_00098e14(uVar1,PTR_DAT_00484ca0,&stack0x00000004);
  return;
}



