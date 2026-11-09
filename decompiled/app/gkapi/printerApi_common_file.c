// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/file   functions: 21
/* printerApi/common/file.CreateDirIfNoexist @ 003ee0ac (size 208) */

void printerApi_common_file_CreateDirIfNoexist(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 local_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0012a748();
  if (local_10 != 0) {
    FUN_00122c24();
    if ((char)local_10 != '\0') {
      FUN_00128658();
      return;
    }
    return;
  }
  return;
}



/* printerApi/common/file.FileExist @ 003ee188 (size 108) */

void printerApi_common_file_FileExist(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined1 in_stack_0000000c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0012a748();
  FUN_00122c24();
  return;
}



/* printerApi/common/file.WaitFileReadable @ 003ee200 (size 1236) */

void printerApi_common_file_WaitFileReadable(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  undefined4 *in_stack_00000014;
  undefined4 *in_stack_00000018;
  undefined **in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 *local_68;
  undefined **local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined1 local_4d;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined **local_44;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  int local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined *local_10;
  undefined **local_c;
  undefined *local_8;
  undefined **local_4;
  
  while (puVar5 = in_stack_00000008, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x3ee6d0;
    FUN_00096bb8();
  }
  local_68 = in_stack_00000008;
  FUN_00148fb4();
  if (local_60 == (undefined4 *)0x0) {
    FUN_0001eed8();
    puVar5[1] = 0xd;
    *puVar5 = PTR_DAT_003ee6e0;
    return;
  }
  local_34 = in_stack_0000000c;
  if (in_stack_0000000c < 1) {
    local_34 = 1;
  }
  local_3c = in_stack_00000010;
  local_38 = in_stack_00000014;
  if (in_stack_00000014 == (undefined4 *)0x0 && in_stack_00000010 == 0 || (int)in_stack_00000014 < 0
     ) {
    local_38 = (undefined4 *)0x0;
    local_3c = DAT_003ee6d8;
  }
  local_4c = local_60;
  iVar3 = 0;
  local_48 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  do {
    puVar5 = local_4c;
    if (local_34 <= iVar3) {
      if (local_48 == (undefined4 *)0x0) {
        FUN_0001eed8();
        local_68[1] = 0xd;
        *local_68 = PTR_DAT_003ee700;
        local_48 = (undefined4 *)PTR_DAT_003ee6e4;
        local_24 = local_68;
      }
      FUN_00098a28(0,&local_10,local_4c);
      FUN_0008a578();
      local_10 = PTR_SUB_003ee704;
      local_c = local_64;
      if (local_48 == (undefined4 *)0x0) {
        local_8 = (undefined *)0x0;
      }
      else {
        local_8 = (undefined *)local_48[1];
      }
      local_4 = (undefined **)local_24;
      FUN_00130144();
      return;
    }
    local_40 = iVar3;
    FUN_0012a748();
    local_48 = local_5c;
    local_24 = local_58;
    local_68 = puVar5;
    if (local_5c == (undefined4 *)0x0) {
      if (in_stack_0000001c == (undefined **)0x0 && in_stack_00000018 != (undefined4 *)0x0 ||
          0 < (int)in_stack_0000001c) {
        local_44 = local_64;
        local_20 = local_60;
        (*(code *)local_64[7])();
        bVar1 = puVar5 < in_stack_00000018 && in_stack_0000001c == local_64 ||
                in_stack_0000001c != local_64 && (int)local_64 <= (int)in_stack_0000001c;
        ppuVar4 = local_44;
        local_60 = local_20;
      }
      else {
        bVar1 = false;
        ppuVar4 = local_64;
      }
      local_48 = local_58;
      local_24 = local_54;
      if (bVar1) {
        (*(code *)ppuVar4[7])();
        FUN_00098a28(0,&local_10,local_64,puVar5,unaff_lr,local_60);
        FUN_0008a4bc();
        local_10 = PTR_DAT_003ee6e8;
        local_c = local_64;
        FUN_0008a4bc();
        local_8 = PTR_DAT_003ee6e8;
        local_4 = local_64;
        local_68 = (undefined4 *)&DAT_0000001e;
        local_64 = &local_10;
        local_60 = (undefined4 *)0x2;
        local_5c = (undefined4 *)0x2;
        FUN_00130144();
      }
      else {
        local_68 = local_4c;
        local_64 = (undefined **)0x0;
        local_60 = (undefined4 *)0x0;
        FUN_0012576c();
        if (local_58 == (undefined4 *)0x0) {
          local_1c = local_5c;
          local_4d = 0;
          local_68 = (undefined4 *)&local_4d;
          local_64 = (undefined **)0x1;
          local_60 = (undefined4 *)0x1;
          FUN_00124764();
          if (local_1c == (undefined4 *)0x0) {
            puVar6 = *(undefined4 **)PTR_DAT_003ee6f4;
            puVar5 = *(undefined4 **)PTR_DAT_003ee6f0;
          }
          else {
            FUN_00127938();
            puVar6 = (undefined4 *)0x1;
            puVar5 = local_68;
          }
          puVar2 = local_24;
          if (local_48 == (undefined4 *)0x0) {
            bVar1 = false;
          }
          else if (*(undefined4 **)PTR_DAT_003ee6f8 == local_48) {
            local_64 = *(undefined ***)PTR_DAT_003ee6fc;
            local_2c = puVar5;
            local_14 = puVar6;
            FUN_000169b8();
            bVar1 = false;
            puVar5 = local_2c;
            puVar6 = local_14;
            local_68 = puVar2;
          }
          else {
            bVar1 = true;
          }
          local_48 = local_48;
          local_24 = local_24;
          if ((!bVar1) && (local_48 = puVar5, local_24 = puVar6, puVar5 == (undefined4 *)0x0)) {
            return;
          }
        }
      }
    }
    if (local_40 < local_34 + -1) {
      local_68 = local_38;
      local_30 = local_48;
      local_18 = local_24;
      FUN_000953d0();
      local_48 = local_30;
      local_24 = local_18;
    }
    iVar3 = local_40 + 1;
  } while( true );
}



/* printerApi/common/file.DownloadFile @ 003ee70c (size 4832) */

/* WARNING: Removing unreachable block (ram,0x003ef2f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_file_DownloadFile(undefined4 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_r2;
  uint uVar8;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  int iVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  int *unaff_r8;
  int unaff_r10;
  int iVar13;
  undefined1 *puVar14;
  undefined4 unaff_lr;
  bool bVar15;
  
  while ((undefined1 *)((int)register0x00000054 + -0x184) <= *(undefined1 **)(unaff_r10 + 8)) {
LAB_003efaa4:
    unaff_lr = 0x3efaac;
    param_1 = FUN_00096bb8(param_1);
  }
  puVar14 = (undefined1 *)((int)register0x00000054 + -0x204);
  *(undefined4 *)((int)register0x00000054 + -0x204) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
  *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
  uVar2 = FUN_00098a04(0,(undefined1 *)((int)register0x00000054 + -0xb0));
  if (*(int *)((int)register0x00000054 + 0x18) != 0) {
    FUN_00098dd4(uVar2,*(undefined4 *)((int)register0x00000054 + 0x14),
                 (undefined1 *)((int)register0x00000054 + -0xb0));
  }
  iVar6 = *(int *)((int)register0x00000054 + -0x84);
  iVar3 = *(int *)((int)register0x00000054 + -0x88);
  if (iVar6 < 0 || iVar6 == 0 && *(int *)((int)register0x00000054 + -0x88) == 0) {
    iVar6 = 0x4e9;
    iVar3 = DAT_003eef8c;
  }
  *(int *)((int)register0x00000054 + -0x1a4) = iVar3;
  *(int *)((int)register0x00000054 + -0x1a0) = iVar6;
  *(undefined4 *)((int)register0x00000054 + -0x200) = DAT_003eef90;
  FUN_0001eed8();
  *(undefined4 *)((int)register0x00000054 + -0x54) =
       *(undefined4 *)((int)register0x00000054 + -0x1fc);
  *(undefined4 *)((int)register0x00000054 + -0x200) = DAT_003eef94;
  FUN_0001eed8();
  iVar3 = *(int *)((int)register0x00000054 + -0x1fc);
  *(undefined1 *)(iVar3 + 0x50) = 1;
  if (*DAT_003eef98 == 0) {
    iVar6 = *(int *)((int)register0x00000054 + -0x54);
  }
  else {
    iVar3 = FUN_00098688();
    *unaff_r8 = iVar3;
    iVar6 = *(int *)((int)register0x00000054 + -0x54);
    unaff_r8[1] = *(int *)(iVar6 + 0x7c);
  }
  *(int *)(iVar6 + 0x7c) = iVar3;
  *(undefined4 *)(iVar6 + 0x80) = DAT_003eef9c;
  *(undefined4 *)(iVar6 + 0x84) = 4;
  *(undefined4 *)(iVar6 + 0x98) = DAT_003eefa0;
  *(undefined4 *)(iVar6 + 0x9c) = 6;
  *(undefined4 *)(iVar6 + 0xa0) = DAT_003eefa4;
  *(undefined4 *)(iVar6 + 0xa4) = 1;
  *(undefined4 *)(iVar6 + 0xa8) = DAT_003eefa8;
  *(undefined4 *)(iVar6 + 0xac) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x200) = DAT_003eefac;
  FUN_0001eed8();
  *(undefined4 **)((int)register0x00000054 + -0x58) =
       *(undefined4 **)((int)register0x00000054 + -0x1fc);
  **(undefined4 **)((int)register0x00000054 + -0x1fc) = DAT_003eefb0;
  *(undefined4 *)((int)register0x00000054 + -0x200) = DAT_003eefb4;
  FUN_0001eed8();
  puVar4 = *(undefined4 **)((int)register0x00000054 + -0x1fc);
  *puVar4 = DAT_003eefb8;
  puVar4[1] = 2;
  *(undefined1 *)(puVar4 + 0xe) = 1;
  puVar4[0xf] = DAT_003eefa4;
  puVar4[0x10] = 1;
  puVar4[0x11] = DAT_003eefbc;
  puVar4[0x12] = 0;
  puVar4[0x13] = 3;
  if (*DAT_003eef98 == 0) {
    iVar3 = *(int *)((int)register0x00000054 + -0x58);
    iVar6 = *(int *)((int)register0x00000054 + -0x54);
  }
  else {
    puVar4 = (undefined4 *)FUN_000986a8();
    *unaff_r8 = (int)puVar4;
    iVar3 = *(int *)((int)register0x00000054 + -0x58);
    unaff_r8[1] = *(int *)(iVar3 + 4);
    unaff_r8[2] = iVar3;
    iVar6 = *(int *)((int)register0x00000054 + -0x54);
    unaff_r8[3] = *(int *)(iVar6 + 0x6c);
  }
  *(undefined4 **)(iVar3 + 4) = puVar4;
  *(int *)(iVar6 + 0x6c) = iVar3;
  *(undefined **)((int)register0x00000054 + -0x200) = PTR_DAT_003eefc0;
  FUN_0001eed8();
  puVar4 = *(undefined4 **)((int)register0x00000054 + -0x1fc);
  puVar4[5] = *(undefined4 *)((int)register0x00000054 + -0x1a4);
  puVar4[6] = *(undefined4 *)((int)register0x00000054 + -0x1a0);
  *puVar4 = PTR_DAT_003eefc4;
  if (*DAT_003eef98 == 0) {
    iVar3 = *(int *)((int)register0x00000054 + -0x54);
  }
  else {
    puVar4 = (undefined4 *)FUN_00098678();
    iVar3 = *(int *)((int)register0x00000054 + -0x54);
    *unaff_r8 = iVar3;
  }
  *(undefined4 **)((int)register0x00000054 + -0x68) = puVar4;
  puVar4[1] = iVar3;
  *(undefined4 *)((int)register0x00000054 + -0x200) = *(undefined4 *)((int)register0x00000054 + 4);
  *(undefined4 *)((int)register0x00000054 + -0x1fc) = *(undefined4 *)((int)register0x00000054 + 8);
  internal_filepathlite_Dir(puVar4);
  *(undefined4 *)((int)register0x00000054 + -0xdc) =
       *(undefined4 *)((int)register0x00000054 + -0x1f8);
  *(undefined4 *)((int)register0x00000054 + -0x1b0) =
       *(undefined4 *)((int)register0x00000054 + -500);
  if (*(int *)((int)register0x00000054 + -0x98) == 0) {
    *(undefined4 *)((int)register0x00000054 + -0x200) = 5;
    *(undefined **)((int)register0x00000054 + -0x1fc) = PTR_DAT_003eefcc;
    *(undefined4 *)((int)register0x00000054 + -0x1f8) = 0x3e;
    printerApi_common_utils_str_RandomStringWithCharset();
    uVar2 = *(undefined4 *)((int)register0x00000054 + -500);
    uVar7 = *(undefined4 *)((int)register0x00000054 + -0x1f0);
    *(undefined4 *)((int)register0x00000054 + -0x200) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x1fc) = *(undefined4 *)((int)register0x00000054 + 4)
    ;
    *(undefined4 *)((int)register0x00000054 + -0x1f8) = *(undefined4 *)((int)register0x00000054 + 8)
    ;
    *(undefined **)((int)register0x00000054 + -500) = PTR_DAT_003eefc8;
    *(undefined4 *)((int)register0x00000054 + -0x1f0) = 1;
    *(undefined4 *)((int)register0x00000054 + -0x1ec) = uVar2;
    *(undefined4 *)((int)register0x00000054 + -0x1e8) = uVar7;
    FUN_00071620();
    *(undefined4 *)((int)register0x00000054 + -0xd0) =
         *(undefined4 *)((int)register0x00000054 + -0x1e4);
    *(undefined4 *)((int)register0x00000054 + -0x1a8) =
         *(undefined4 *)((int)register0x00000054 + -0x1e0);
    *(undefined4 *)((int)register0x00000054 + -0x200) =
         *(undefined4 *)((int)register0x00000054 + -0x1e4);
    *(undefined4 *)((int)register0x00000054 + -0x1fc) =
         *(undefined4 *)((int)register0x00000054 + -0x1e0);
    FUN_00127c60();
    uVar7 = *(undefined4 *)((int)register0x00000054 + -0x1a8);
    uVar2 = *(undefined4 *)((int)register0x00000054 + -0xd0);
  }
  else {
    *(undefined4 *)((int)register0x00000054 + -0x200) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x1fc) = *(undefined4 *)((int)register0x00000054 + 4)
    ;
    *(undefined4 *)((int)register0x00000054 + -0x1f8) = *(undefined4 *)((int)register0x00000054 + 8)
    ;
    *(undefined **)((int)register0x00000054 + -500) = PTR_DAT_003eefc8;
    *(undefined4 *)((int)register0x00000054 + -0x1f0) = 1;
    *(undefined4 *)((int)register0x00000054 + -0x1ec) =
         *(undefined4 *)((int)register0x00000054 + -0x9c);
    *(int *)((int)register0x00000054 + -0x1e8) = *(int *)((int)register0x00000054 + -0x98);
    FUN_00071620();
    uVar2 = *(undefined4 *)((int)register0x00000054 + -0x1e4);
    uVar7 = *(undefined4 *)((int)register0x00000054 + -0x1e0);
  }
  *(undefined4 *)((int)register0x00000054 + -0xd0) = uVar2;
  *(undefined4 *)((int)register0x00000054 + -0x1a8) = uVar7;
  *(undefined4 *)((int)register0x00000054 + -0x200) = uVar2;
  *(undefined4 *)((int)register0x00000054 + -0x1fc) = uVar7;
  *(undefined4 *)((int)register0x00000054 + -0x1f8) = 0x441;
  *(undefined4 *)((int)register0x00000054 + -500) = 0x1a4;
  FUN_0012576c();
  if (*(int *)((int)register0x00000054 + -0x1ec) != 0) {
    *(int *)((int)register0x00000054 + 0x20) = *(int *)((int)register0x00000054 + -0x1ec);
    *(undefined4 *)((int)register0x00000054 + 0x24) =
         *(undefined4 *)((int)register0x00000054 + -0x1e8);
    FUN_0004fb3c();
    return;
  }
  *(undefined4 *)((int)register0x00000054 + -0xb4) =
       *(undefined4 *)((int)register0x00000054 + -0x1f0);
  *(undefined **)((int)register0x00000054 + -0x20) =
       PTR_printerApi_common_file_DownloadFile_deferwrap1_003eefd0;
  *(undefined4 *)((int)register0x00000054 + -0x1c) =
       *(undefined4 *)((int)register0x00000054 + -0x1f0);
  *(undefined1 **)((int)register0x00000054 + -0x104) =
       (undefined1 *)((int)register0x00000054 + -0x20);
  *(undefined1 **)((int)register0x00000054 + -0x200) =
       (undefined1 *)((int)register0x00000054 + -0x110);
  iVar3 = FUN_0004f500();
  if (iVar3 != 0) {
    FUN_0004fb3c();
    return;
  }
  iVar3 = *(int *)((int)register0x00000054 + -0xa4);
  iVar6 = *(int *)((int)register0x00000054 + -0xa0);
  if (iVar6 < 1 && (iVar6 != 0 || iVar3 == 0)) {
    iVar3 = 0x40000;
    iVar6 = 0;
  }
  iVar9 = *(int *)((int)register0x00000054 + -0x90);
  if (iVar9 < 1) {
    iVar9 = 3;
  }
  *(int *)((int)register0x00000054 + -0x144) = iVar3;
  *(int *)((int)register0x00000054 + -0x140) = iVar6;
  *(int *)((int)register0x00000054 + -0x188) = iVar9;
  FUN_00098a24(0,(undefined1 *)((int)register0x00000054 + -0xcc));
  iVar3 = 0;
  do {
    if (4 < iVar3) goto LAB_003ef1d4;
    *(int *)((int)register0x00000054 + -0x114) = iVar3;
    *(undefined4 *)((int)register0x00000054 + -0x200) =
         *(undefined4 *)((int)register0x00000054 + -0xb4);
    FUN_0012aae0();
    if (*(int *)((int)register0x00000054 + -500) != 0) {
      *(int *)((int)register0x00000054 + 0x20) = *(int *)((int)register0x00000054 + -500);
      *(undefined4 *)((int)register0x00000054 + 0x24) =
           *(undefined4 *)((int)register0x00000054 + -0x1f0);
      FUN_0004fb3c();
      return;
    }
    if (*(int *)((int)register0x00000054 + -0x1fc) == 0) {
      uVar7 = 0;
      uVar2 = 0;
    }
    else {
      pcVar10 = *(code **)(*(int *)((int)register0x00000054 + -0x1fc) + 0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x200) =
           *(undefined4 *)((int)register0x00000054 + -0x1f8);
      (*pcVar10)();
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x1fc);
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x1f8);
    }
    *(undefined4 *)((int)register0x00000054 + -0x194) = uVar2;
    *(undefined4 *)((int)register0x00000054 + -400) = uVar7;
    *(undefined **)((int)register0x00000054 + -0x200) = PTR_DAT_003eefd8;
    *(undefined **)((int)register0x00000054 + -0x1fc) = PTR_DAT_003eefdc;
    *(undefined **)((int)register0x00000054 + -0x1f8) = PTR_DAT_003eefe0;
    *(undefined4 *)((int)register0x00000054 + -500) = 3;
    *(undefined4 *)((int)register0x00000054 + -0x1f0) =
         *(undefined4 *)((int)register0x00000054 + 0xc);
    *(undefined4 *)((int)register0x00000054 + -0x1ec) =
         *(undefined4 *)((int)register0x00000054 + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x1e8) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x1e4) = 0;
    FUN_0037fdd4(uVar2);
    if (*(int *)((int)register0x00000054 + -0x1dc) != 0) {
      *(int *)((int)register0x00000054 + 0x20) = *(int *)((int)register0x00000054 + -0x1dc);
      *(undefined4 *)((int)register0x00000054 + 0x24) =
           *(undefined4 *)((int)register0x00000054 + -0x1d8);
      FUN_0004fb3c();
      return;
    }
    uVar2 = *(undefined4 *)((int)register0x00000054 + -0x1e0);
    if (*(int *)((int)register0x00000054 + -0x194) != 0 ||
        *(int *)((int)register0x00000054 + -400) != 0) {
      *(undefined4 *)((int)register0x00000054 + -0xd4) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(int *)((int)register0x00000054 + -0x200) = *(int *)((int)register0x00000054 + -0x194);
      *(int *)((int)register0x00000054 + -0x1fc) = *(int *)((int)register0x00000054 + -400);
      FUN_0008a4bc();
      *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_003eefe4;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x1f8);
      *(undefined **)((int)register0x00000054 + -0x200) =
           PTR_s_bytes__d___error__RED_DEBUGgorou_0077568d_0x78f_003eefe8;
      *(undefined4 *)((int)register0x00000054 + -0x1fc) = 9;
      *(undefined1 **)((int)register0x00000054 + -0x1f8) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -500) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x1f0) = 1;
      FUN_001331ac();
      *(undefined4 *)((int)register0x00000054 + -0x18c) =
           *(undefined4 *)((int)register0x00000054 + -0x1e8);
      *(undefined4 *)((int)register0x00000054 + -0xb8) =
           *(undefined4 *)((int)register0x00000054 + -0x1ec);
      *(undefined4 *)((int)register0x00000054 + -0x74) =
           *(undefined4 *)(*(int *)((int)register0x00000054 + -0xd4) + 0x1c);
      *(undefined **)((int)register0x00000054 + -0x200) = PTR_DAT_003eefec;
      *(undefined4 *)((int)register0x00000054 + -0x1fc) = 5;
      FUN_00313ba4(*(undefined4 *)((int)register0x00000054 + -0x1e8));
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x1f8);
      *(undefined4 *)((int)register0x00000054 + -0x118) =
           *(undefined4 *)((int)register0x00000054 + -500);
      *(undefined **)((int)register0x00000054 + -0x200) = PTR_DAT_003eeff0;
      FUN_0001eed8();
      puVar4 = *(undefined4 **)((int)register0x00000054 + -0x1fc);
      puVar4[1] = *(undefined4 *)((int)register0x00000054 + -0x18c);
      if (*DAT_003eef98 == 0) {
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0xb8);
      }
      else {
        puVar4 = (undefined4 *)FUN_00098678();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0xb8);
        uRam00000000 = uVar2;
      }
      *(undefined4 **)((int)register0x00000054 + -0x60) = puVar4;
      *puVar4 = uVar2;
      *(undefined **)((int)register0x00000054 + -0x200) = PTR_DAT_003eeff4;
      *(undefined4 *)((int)register0x00000054 + -0x1fc) =
           *(undefined4 *)((int)register0x00000054 + -0x74);
      *(undefined4 *)((int)register0x00000054 + -0x1f8) =
           *(undefined4 *)((int)register0x00000054 + -0x5c);
      *(undefined4 *)((int)register0x00000054 + -500) =
           *(undefined4 *)((int)register0x00000054 + -0x118);
      FUN_0008e7bc();
      puVar4 = *(undefined4 **)((int)register0x00000054 + -0x1f0);
      puVar4[1] = 1;
      puVar4[2] = 1;
      if (*DAT_003eef98 == 0) {
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x60);
      }
      else {
        puVar4 = (undefined4 *)FUN_00098688();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x60);
        _DAT_00000004 = *puVar4;
        uRam00000000 = uVar2;
      }
      *puVar4 = uVar2;
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0xd4);
    }
    *(undefined4 *)((int)register0x00000054 + -0x200) =
         *(undefined4 *)((int)register0x00000054 + -0x68);
    *(undefined4 *)((int)register0x00000054 + -0x1fc) = uVar2;
    FUN_00343318();
    if (*(int *)((int)register0x00000054 + -500) != 0) {
      pcVar10 = *(code **)(*(int *)((int)register0x00000054 + -500) + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x200) =
           *(undefined4 *)((int)register0x00000054 + -0x1f0);
      (*pcVar10)();
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x1fc);
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x1f8);
      *(undefined4 *)((int)register0x00000054 + -0x200) = 0;
      *(undefined **)((int)register0x00000054 + -0x1fc) = PTR_DAT_003ef7e8;
      *(undefined4 *)((int)register0x00000054 + -0x1f8) = 0x23;
      *(undefined4 *)((int)register0x00000054 + -500) = uVar2;
      *(undefined4 *)((int)register0x00000054 + -0x1f0) = uVar7;
      FUN_000715a4();
      *(undefined4 *)((int)register0x00000054 + -0x200) =
           *(undefined4 *)((int)register0x00000054 + -0x1ec);
      *(undefined4 *)((int)register0x00000054 + -0x1fc) =
           *(undefined4 *)((int)register0x00000054 + -0x1e8);
      *(undefined4 *)((int)register0x00000054 + -0x1f8) = 0;
      *(undefined4 *)((int)register0x00000054 + -500) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x1f0) = 0;
      FUN_00130144();
      *(undefined4 *)((int)register0x00000054 + 0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x1ec);
      *(undefined4 *)((int)register0x00000054 + 0x24) =
           *(undefined4 *)((int)register0x00000054 + -0x1e8);
      FUN_0004fb3c();
      return;
    }
    iVar3 = *(int *)((int)register0x00000054 + -0x1f8);
    *(int *)((int)register0x00000054 + -0xd8) = iVar3;
    *(undefined4 *)((int)register0x00000054 + -0x11c) = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)((int)register0x00000054 + -0x5c) = *(undefined4 *)(iVar3 + 0x24);
    *(undefined **)((int)register0x00000054 + -0x200) = PTR_DAT_003eeff8;
    FUN_0001eed8();
    puVar4 = *(undefined4 **)((int)register0x00000054 + -0x1fc);
    *puVar4 = PTR_printerApi_common_file_DownloadFile_deferwrap2_003eeffc;
    puVar4[1] = *(undefined4 *)((int)register0x00000054 + -0x11c);
    if (*DAT_003eef98 == 0) {
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x5c);
    }
    else {
      puVar4 = (undefined4 *)FUN_00098678();
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x5c);
      uRam00000000 = uVar2;
    }
    puVar4[2] = uVar2;
    *(undefined4 **)((int)register0x00000054 + -0x200) = puVar4;
    iVar3 = FUN_0004f204();
    if (iVar3 != 0) {
      FUN_0004fb3c();
      return;
    }
    iVar3 = *(int *)((int)register0x00000054 + -0xac);
    uVar11 = *(uint *)(*(int *)((int)register0x00000054 + -0xd8) + 0x28);
    iVar6 = *(int *)(*(int *)((int)register0x00000054 + -0xd8) + 0x2c);
    if (*(int *)((int)register0x00000054 + -0xb0) != 0 && iVar3 == 0 || 0 < iVar3) {
      iVar9 = uVar11 + *(uint *)((int)register0x00000054 + -0x194);
      iVar13 = iVar6 + *(int *)((int)register0x00000054 + -400) +
               (uint)CARRY4(uVar11,*(uint *)((int)register0x00000054 + -0x194));
      if (iVar9 != *(int *)((int)register0x00000054 + -0xb0) || iVar3 != iVar13) {
        *(int *)((int)register0x00000054 + -0x120) = iVar13;
        FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x18));
        *(int *)((int)register0x00000054 + -0x200) = iVar9;
        *(undefined4 *)((int)register0x00000054 + -0x1fc) =
             *(undefined4 *)((int)register0x00000054 + -0x120);
        FUN_0008a4bc();
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_003ef7d8;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x1f8);
        *(undefined4 *)((int)register0x00000054 + -0x200) =
             *(undefined4 *)((int)register0x00000054 + -0xb0);
        *(undefined4 *)((int)register0x00000054 + -0x1fc) =
             *(undefined4 *)((int)register0x00000054 + -0xac);
        FUN_0008a4bc();
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_003ef7d8;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x1f8);
        *(undefined **)((int)register0x00000054 + -0x200) = PTR_DAT_003ef7dc;
        *(undefined4 *)((int)register0x00000054 + -0x1fc) = 0x37;
        *(undefined1 **)((int)register0x00000054 + -0x1f8) =
             (undefined1 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -500) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x1f0) = 2;
        FUN_00130144();
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x1ec);
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x1e8);
        FUN_0004fb3c();
        return;
      }
    }
    if (*(char *)((int)register0x00000054 + -0x8c) == '\0') {
      *(uint *)((int)register0x00000054 + -0x19c) = uVar11;
      *(int *)((int)register0x00000054 + -0x198) = iVar6;
      *(undefined4 *)((int)register0x00000054 + -0x200) =
           *(undefined4 *)((int)register0x00000054 + -0xdc);
      *(undefined4 *)((int)register0x00000054 + -0x1fc) =
           *(undefined4 *)((int)register0x00000054 + -0x1b0);
      uVar2 = printerApi_common_file_DiskUsage();
      uVar2 = FUN_00098e0c(uVar2,(undefined1 *)((int)register0x00000054 + -0x1f8),
                           (undefined1 *)((int)register0x00000054 + -0xf8));
      FUN_00098e0c(uVar2,(undefined1 *)((int)register0x00000054 + -0xf8),
                   (undefined1 *)((int)register0x00000054 + -0x15c));
      if (*(uint *)((int)register0x00000054 + -0x148) < *(uint *)((int)register0x00000054 + -0x198)
          || *(uint *)((int)register0x00000054 + -0x148) ==
             *(uint *)((int)register0x00000054 + -0x198) &&
             *(uint *)((int)register0x00000054 + -0x14c) <
             *(uint *)((int)register0x00000054 + -0x19c)) {
        uVar2 = *(undefined4 *)PTR_DAT_003ef7e4;
        *(undefined4 *)((int)register0x00000054 + 0x20) = *(undefined4 *)PTR_DAT_003ef7e0;
        *(undefined4 *)((int)register0x00000054 + 0x24) = uVar2;
        FUN_0004fb3c();
        return;
      }
    }
    *(undefined **)((int)register0x00000054 + -0x200) = PTR_DAT_003ef000;
    *(undefined4 *)((int)register0x00000054 + -0x1fc) =
         *(undefined4 *)((int)register0x00000054 + -0x144);
    *(undefined4 *)((int)register0x00000054 + -0x1f8) =
         *(undefined4 *)((int)register0x00000054 + -0x140);
    *(undefined4 *)((int)register0x00000054 + -500) =
         *(undefined4 *)((int)register0x00000054 + -0x144);
    *(undefined4 *)((int)register0x00000054 + -0x1f0) =
         *(undefined4 *)((int)register0x00000054 + -0x140);
    FUN_0006d978();
    uVar5 = *(undefined4 *)((int)register0x00000054 + -0x1ec);
    *(undefined4 *)((int)register0x00000054 + -100) = uVar5;
    uVar7 = 0;
    uVar2 = 0;
LAB_003ef838:
    *(undefined4 *)((int)register0x00000054 + -0x160) = uVar7;
    *(undefined4 *)((int)register0x00000054 + -0x164) = uVar2;
    pcVar10 = *(code **)(*(int *)(*(int *)((int)register0x00000054 + -0xd8) + 0x20) + 0x10);
    *(undefined4 *)((int)register0x00000054 + -0x200) =
         *(undefined4 *)(*(int *)((int)register0x00000054 + -0xd8) + 0x24);
    *(undefined4 *)((int)register0x00000054 + -0x1fc) = uVar5;
    *(undefined4 *)((int)register0x00000054 + -0x1f8) =
         *(undefined4 *)((int)register0x00000054 + -0x144);
    *(undefined4 *)((int)register0x00000054 + -500) =
         *(undefined4 *)((int)register0x00000054 + -0x144);
    (*pcVar10)();
    uVar11 = *(uint *)((int)register0x00000054 + -0x1f0);
    iVar3 = *(int *)((int)register0x00000054 + -0x1ec);
    uVar5 = *(undefined4 *)((int)register0x00000054 + -0x1e8);
    if ((int)uVar11 < 1) {
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x160);
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x164);
    }
    else {
      *(uint *)((int)register0x00000054 + -0x17c) = uVar11;
      lVar1 = (ulonglong)DAT_003efab4 * (ulonglong)*(uint *)((int)register0x00000054 + -0x188);
      *(int *)((int)register0x00000054 + -0x124) = (int)lVar1;
      *(uint *)((int)register0x00000054 + -0x128) =
           ((int)*(uint *)((int)register0x00000054 + -0x188) >> 0x1f) * DAT_003efab4 +
           (int)((ulonglong)lVar1 >> 0x20);
      uVar8 = *(uint *)((int)register0x00000054 + -0x164);
      uVar12 = uVar8 + uVar11;
      *(uint *)((int)register0x00000054 + -0x164) = uVar12;
      iVar3 = *(int *)((int)register0x00000054 + -0x160) + ((int)uVar11 >> 0x1f) +
              (uint)CARRY4(uVar8,uVar11);
      *(int *)((int)register0x00000054 + -0x160) = iVar3;
      *(uint *)((int)register0x00000054 + -0x200) =
           *(uint *)((int)register0x00000054 + -0x194) + uVar12;
      unaff_r8 = *(int **)((int)register0x00000054 + -400);
      *(uint *)((int)register0x00000054 + -0x1fc) =
           (int)unaff_r8 + (uint)CARRY4(*(uint *)((int)register0x00000054 + -0x194),uVar12) + iVar3;
      FUN_0008695c();
      *(undefined8 *)((int)register0x00000054 + -0x130) =
           *(undefined8 *)((int)register0x00000054 + -0x1f8);
      *(undefined4 *)((int)register0x00000054 + -0x200) =
           *(undefined4 *)((int)register0x00000054 + -0xb0);
      *(undefined4 *)((int)register0x00000054 + -0x1fc) =
           *(undefined4 *)((int)register0x00000054 + -0xac);
      uVar2 = FUN_0008695c();
      *(undefined8 *)((int)register0x00000054 + -0x138) =
           *(undefined8 *)((int)register0x00000054 + -0x1f8);
      FUN_00098e14(uVar2,(undefined1 *)((int)register0x00000054 + -0xcc),
                   (undefined1 *)((int)register0x00000054 + -0x200));
      FUN_0010327c();
      iVar3 = *(int *)((int)register0x00000054 + -0x1e8);
      *(double *)((int)register0x00000054 + -0x184) =
           *(double *)((int)register0x00000054 + -0x130) /
           *(double *)((int)register0x00000054 + -0x138);
      iVar6 = *(int *)((int)register0x00000054 + -0x128);
      if ((iVar3 != iVar6 && iVar6 <= iVar3 ||
           iVar3 == iVar6 &&
           *(uint *)((int)register0x00000054 + -0x124) < *(uint *)((int)register0x00000054 + -0x1ec)
          ) || (*(double *)((int)register0x00000054 + -0x130) /
                *(double *)((int)register0x00000054 + -0x138) == 1.0)) {
        uVar2 = FUN_0010cf30();
        FUN_00098e14(uVar2,(undefined1 *)((int)register0x00000054 + -0x200),
                     (undefined1 *)((int)register0x00000054 + -0xcc));
        if (*(undefined4 **)((int)register0x00000054 + -0x94) != (undefined4 *)0x0) {
          pcVar10 = (code *)**(undefined4 **)((int)register0x00000054 + -0x94);
          *(undefined8 *)((int)register0x00000054 + -0x200) =
               *(undefined8 *)((int)register0x00000054 + -0x184);
          *(undefined4 *)((int)register0x00000054 + -0x1f8) =
               *(undefined4 *)((int)register0x00000054 + -0x164);
          *(undefined4 *)((int)register0x00000054 + -500) =
               *(undefined4 *)((int)register0x00000054 + -0x160);
          *(undefined4 *)((int)register0x00000054 + -0x1f0) =
               *(undefined4 *)((int)register0x00000054 + -0xb0);
          *(undefined4 *)((int)register0x00000054 + -0x1ec) =
               *(undefined4 *)((int)register0x00000054 + -0xac);
          (*pcVar10)();
          if (*(int *)((int)register0x00000054 + -0x1e8) != 0) {
            *(int *)((int)register0x00000054 + 0x20) = *(int *)((int)register0x00000054 + -0x1e8);
            *(undefined4 *)((int)register0x00000054 + 0x24) =
                 *(undefined4 *)((int)register0x00000054 + -0x1e4);
            FUN_0004fb3c();
            return;
          }
        }
      }
      uVar8 = *(uint *)((int)register0x00000054 + -0x144);
      uVar11 = *(uint *)((int)register0x00000054 + -0x17c);
      bVar15 = uVar8 == uVar11;
      if (uVar8 < uVar11) {
        param_1 = FUN_00098738();
        register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x204);
        if (bVar15) {
          register0x00000054 = (BADSPACEBASE *)puVar14;
        }
        goto LAB_003efaa4;
      }
      *(undefined4 *)((int)register0x00000054 + -0x200) =
           *(undefined4 *)((int)register0x00000054 + -0xb4);
      *(undefined4 *)((int)register0x00000054 + -0x1fc) =
           *(undefined4 *)((int)register0x00000054 + -100);
      *(uint *)((int)register0x00000054 + -0x1f8) = uVar11;
      *(uint *)((int)register0x00000054 + -500) = uVar8;
      FUN_00124ccc();
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x1e8);
      if (*(int *)((int)register0x00000054 + -0x1ec) != 0) {
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1ec) + 4);
        *(undefined4 *)((int)register0x00000054 + -4) = uVar5;
        *(undefined4 *)((int)register0x00000054 + -0x200) = DAT_003efab8;
        *(undefined4 *)((int)register0x00000054 + -0x1fc) = 0x14;
        *(undefined1 **)((int)register0x00000054 + -0x1f8) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -500) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x1f0) = 1;
        FUN_00130144();
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x1ec);
        *(undefined4 *)((int)register0x00000054 + 0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x1e8);
        FUN_0004fb3c();
        return;
      }
      uVar2 = *(undefined4 *)((int)register0x00000054 + -0x164);
      uVar7 = *(undefined4 *)((int)register0x00000054 + -0x160);
      iVar3 = 0;
    }
    if (iVar3 == 0) goto LAB_003ef82c;
    if (iVar3 == *(int *)PTR_DAT_003ef7d0) {
      *(int *)((int)register0x00000054 + -0x168) = iVar3;
      *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar5;
      uVar2 = *(undefined4 *)PTR_DAT_003ef7d4;
      *(int *)((int)register0x00000054 + -0x200) = iVar3;
      *(undefined4 *)((int)register0x00000054 + -0x1fc) = uVar5;
      *(undefined4 *)((int)register0x00000054 + -0x1f8) = uVar2;
      FUN_000169b8();
      if (*(char *)((int)register0x00000054 + -500) != '\0') {
LAB_003ef1d4:
        if (*(int *)((int)register0x00000054 + -0x98) != 0) {
          *(undefined4 *)((int)register0x00000054 + -0x200) =
               *(undefined4 *)((int)register0x00000054 + -0xd0);
          *(undefined4 *)((int)register0x00000054 + -0x1fc) =
               *(undefined4 *)((int)register0x00000054 + -0x1a8);
          printerApi_common_file_FileMD5();
          if (*(int *)((int)register0x00000054 + -0x1f0) != 0) {
            *(undefined4 *)((int)register0x00000054 + -8) = 0;
            *(undefined4 *)((int)register0x00000054 + -4) = 0;
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1f0) + 4);
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0x1ec);
            *(undefined **)((int)register0x00000054 + -0x200) = PTR_DAT_003ef7ec;
            *(undefined4 *)((int)register0x00000054 + -0x1fc) = 0x17;
            *(undefined1 **)((int)register0x00000054 + -0x1f8) =
                 (undefined1 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -500) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x1f0) = 1;
            FUN_00130144();
            *(undefined4 *)((int)register0x00000054 + 0x20) =
                 *(undefined4 *)((int)register0x00000054 + -0x1ec);
            *(undefined4 *)((int)register0x00000054 + 0x24) =
                 *(undefined4 *)((int)register0x00000054 + -0x1e8);
            FUN_0004fb3c();
            return;
          }
          *(undefined4 *)((int)register0x00000054 + -0x200) =
               *(undefined4 *)((int)register0x00000054 + -0x9c);
          *(undefined4 *)((int)register0x00000054 + -0x1fc) =
               *(undefined4 *)((int)register0x00000054 + -0x98);
          FUN_00149688();
          if (*(char *)((int)register0x00000054 + -0x1f0) == '\0') {
            *(undefined **)((int)register0x00000054 + -0x200) = PTR_DAT_003ef800;
            FUN_0001eed8();
            puVar4 = *(undefined4 **)((int)register0x00000054 + -0x1fc);
            puVar4[1] = 0x14;
            *puVar4 = PTR_DAT_003ef804;
            *(undefined **)((int)register0x00000054 + 0x20) = PTR_DAT_003ef808;
            *(undefined4 **)((int)register0x00000054 + 0x24) = puVar4;
            FUN_0004fb3c();
            return;
          }
        }
        if (*(char *)((int)register0x00000054 + -0xa8) != '\0') {
LAB_003ef2b4:
          *(undefined4 *)((int)register0x00000054 + -0x200) =
               *(undefined4 *)((int)register0x00000054 + -0xd0);
          *(undefined4 *)((int)register0x00000054 + -0x1fc) =
               *(undefined4 *)((int)register0x00000054 + -0x1a8);
          *(undefined4 *)((int)register0x00000054 + -0x1f8) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -500) =
               *(undefined4 *)((int)register0x00000054 + 8);
          FUN_00126cb0();
          *(undefined4 *)((int)register0x00000054 + 0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x1f0);
          *(undefined4 *)((int)register0x00000054 + 0x24) =
               *(undefined4 *)((int)register0x00000054 + -0x1ec);
          FUN_0004fb3c();
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0x200) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x1fc) =
             *(undefined4 *)((int)register0x00000054 + 8);
        printerApi_common_file_FileExist();
        if (*(char *)((int)register0x00000054 + -0x1f8) == '\0') goto LAB_003ef2b4;
        *(undefined4 *)((int)register0x00000054 + -0x200) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x1fc) =
             *(undefined4 *)((int)register0x00000054 + 8);
        internal_filepathlite_Base();
        *(undefined4 *)((int)register0x00000054 + -0xe0) =
             *(undefined4 *)((int)register0x00000054 + -0x1f8);
        *(undefined4 *)((int)register0x00000054 + -0x1b4) =
             *(undefined4 *)((int)register0x00000054 + -500);
        *(undefined4 *)((int)register0x00000054 + -0x200) =
             *(undefined4 *)((int)register0x00000054 + -0x1f8);
        *(undefined4 *)((int)register0x00000054 + -0x1fc) =
             *(undefined4 *)((int)register0x00000054 + -500);
        *(undefined **)((int)register0x00000054 + -0x1f8) = PTR_DAT_003ef7f0;
        *(undefined4 *)((int)register0x00000054 + -500) = 1;
        FUN_00146598();
        uVar11 = *(uint *)((int)register0x00000054 + -0x1f0);
        if (uVar11 == 0xffffffff) {
          iVar9 = *(int *)((int)register0x00000054 + -0xe0);
          uVar11 = *(uint *)((int)register0x00000054 + -0x1b4);
          iVar3 = 0;
          iVar6 = 0;
LAB_003ef378:
          *(uint *)((int)register0x00000054 + -0x13c) = uVar11;
          *(int *)((int)register0x00000054 + -0x70) = iVar6;
          *(int *)((int)register0x00000054 + -0x16c) = iVar3;
          *(undefined4 *)((int)register0x00000054 + -0x200) = 0;
          *(int *)((int)register0x00000054 + -0x1fc) = iVar9;
          *(uint *)((int)register0x00000054 + -0x1f8) = uVar11;
          *(undefined **)((int)register0x00000054 + -500) = PTR_DAT_003ef7f4;
          *(undefined4 *)((int)register0x00000054 + -0x1f0) = 1;
          *(undefined **)((int)register0x00000054 + -0x1ec) = PTR_DAT_003ef7f8;
          *(undefined4 *)((int)register0x00000054 + -0x1e8) = 3;
          *(int *)((int)register0x00000054 + -0x1e4) = iVar6;
          *(int *)((int)register0x00000054 + -0x1e0) = iVar3;
          FUN_000716ac();
          FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x30),
                       *(undefined4 *)((int)register0x00000054 + -0x1d8),
                       *(undefined4 *)((int)register0x00000054 + -0x1dc));
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + -0x1b0);
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + -0xdc);
          *(undefined4 *)((int)register0x00000054 + -0x24) = extraout_r2;
          *(undefined4 *)((int)register0x00000054 + -0x28) = extraout_r3;
          *(undefined1 **)((int)register0x00000054 + -0x200) =
               (undefined1 *)((int)register0x00000054 + -0x30);
          *(undefined4 *)((int)register0x00000054 + -0x1fc) = 2;
          *(undefined4 *)((int)register0x00000054 + -0x1f8) = 2;
          FUN_00159184();
          *(undefined4 *)((int)register0x00000054 + -0x200) =
               *(undefined4 *)((int)register0x00000054 + -500);
          *(undefined4 *)((int)register0x00000054 + -0x1fc) =
               *(undefined4 *)((int)register0x00000054 + -0x1f0);
          *(undefined4 *)((int)register0x00000054 + -0x1f8) = 0;
          FUN_001575d0();
          iVar3 = *(int *)((int)register0x00000054 + -0x1f0);
          if (iVar3 == 0) {
            FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x40));
            *(undefined4 *)((int)register0x00000054 + -0x3c) =
                 *(undefined4 *)((int)register0x00000054 + -0x1b0);
            *(undefined4 *)((int)register0x00000054 + -0x40) =
                 *(undefined4 *)((int)register0x00000054 + -0xdc);
            *(undefined4 *)((int)register0x00000054 + -0x200) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x1fc) =
                 *(undefined4 *)((int)register0x00000054 + -0xe0);
            *(undefined4 *)((int)register0x00000054 + -0x1f8) =
                 *(undefined4 *)((int)register0x00000054 + -0x13c);
            *(undefined **)((int)register0x00000054 + -500) = PTR_DAT_003ef7f4;
            *(undefined4 *)((int)register0x00000054 + -0x1f0) = 1;
            *(undefined **)((int)register0x00000054 + -0x1ec) = PTR_DAT_003ef7fc;
            *(undefined4 *)((int)register0x00000054 + -0x1e8) = 3;
            *(undefined4 *)((int)register0x00000054 + -0x1e4) =
                 *(undefined4 *)((int)register0x00000054 + -0x70);
            *(undefined4 *)((int)register0x00000054 + -0x1e0) =
                 *(undefined4 *)((int)register0x00000054 + -0x16c);
            FUN_000716ac();
            *(undefined4 *)((int)register0x00000054 + -0x34) =
                 *(undefined4 *)((int)register0x00000054 + -0x1d8);
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x1dc);
            *(undefined1 **)((int)register0x00000054 + -0x200) =
                 (undefined1 *)((int)register0x00000054 + -0x40);
            *(undefined4 *)((int)register0x00000054 + -0x1fc) = 2;
            *(undefined4 *)((int)register0x00000054 + -0x1f8) = 2;
            FUN_00159184();
            *(undefined4 *)((int)register0x00000054 + -0x200) =
                 *(undefined4 *)((int)register0x00000054 + -0xd0);
            *(undefined4 *)((int)register0x00000054 + -0x1fc) =
                 *(undefined4 *)((int)register0x00000054 + -0x1a8);
            *(undefined4 *)((int)register0x00000054 + -0x1f8) =
                 *(undefined4 *)((int)register0x00000054 + -500);
            *(undefined4 *)((int)register0x00000054 + -500) =
                 *(undefined4 *)((int)register0x00000054 + -0x1f0);
            FUN_00126cb0();
            *(undefined4 *)((int)register0x00000054 + 0x20) =
                 *(undefined4 *)((int)register0x00000054 + -0x1f0);
            *(undefined4 *)((int)register0x00000054 + 0x24) =
                 *(undefined4 *)((int)register0x00000054 + -0x1ec);
            FUN_0004fb3c();
            return;
          }
          *(int *)((int)register0x00000054 + -0x174) = iVar3;
          iVar9 = *(int *)((int)register0x00000054 + -500);
          *(int *)((int)register0x00000054 + -0x7c) = iVar9;
          iVar13 = 0;
          iVar6 = 0;
          do {
            if (iVar3 <= iVar13) {
              *(undefined4 *)((int)register0x00000054 + -8) = 0;
              *(undefined4 *)((int)register0x00000054 + -4) = 0;
              *(int *)((int)register0x00000054 + -0x200) = iVar6 + 1;
              FUN_0001cec0();
              *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_003ef814;
              *(undefined4 *)((int)register0x00000054 + -4) =
                   *(undefined4 *)((int)register0x00000054 + -0x1fc);
              *(undefined1 **)((int)register0x00000054 + -0x200) =
                   (undefined1 *)((int)register0x00000054 + -0x1d4);
              *(undefined4 *)((int)register0x00000054 + -0x1fc) =
                   *(undefined4 *)((int)register0x00000054 + -0xe0);
              *(undefined4 *)((int)register0x00000054 + -0x1f8) =
                   *(undefined4 *)((int)register0x00000054 + -0x13c);
              *(undefined **)((int)register0x00000054 + -500) = PTR_DAT_003ef7f4;
              *(undefined4 *)((int)register0x00000054 + -0x1f0) = 1;
              *(undefined **)((int)register0x00000054 + -0x1ec) = PTR_DAT_003ef818;
              *(undefined4 *)((int)register0x00000054 + -0x1e8) = 4;
              *(undefined4 *)((int)register0x00000054 + -0x1e4) =
                   *(undefined4 *)((int)register0x00000054 + -0x70);
              *(undefined4 *)((int)register0x00000054 + -0x1e0) =
                   *(undefined4 *)((int)register0x00000054 + -0x16c);
              FUN_000716ac();
              *(undefined4 *)((int)register0x00000054 + -0x200) =
                   *(undefined4 *)((int)register0x00000054 + -0x1dc);
              *(undefined4 *)((int)register0x00000054 + -0x1fc) =
                   *(undefined4 *)((int)register0x00000054 + -0x1d8);
              *(undefined1 **)((int)register0x00000054 + -0x1f8) =
                   (undefined1 *)((int)register0x00000054 + -8);
              *(undefined4 *)((int)register0x00000054 + -500) = 1;
              *(undefined4 *)((int)register0x00000054 + -0x1f0) = 1;
              FUN_001331ac();
              FUN_00098a28(0,(undefined1 *)((int)register0x00000054 + -0x50),
                           *(undefined4 *)((int)register0x00000054 + -0x1e8),
                           *(undefined4 *)((int)register0x00000054 + -0x1ec));
              *(undefined4 *)((int)register0x00000054 + -0x4c) =
                   *(undefined4 *)((int)register0x00000054 + -0x1b0);
              *(undefined4 *)((int)register0x00000054 + -0x50) =
                   *(undefined4 *)((int)register0x00000054 + -0xdc);
              *(undefined4 *)((int)register0x00000054 + -0x44) = extraout_r2_00;
              *(undefined4 *)((int)register0x00000054 + -0x48) = extraout_r3_00;
              *(undefined1 **)((int)register0x00000054 + -0x200) =
                   (undefined1 *)((int)register0x00000054 + -0x50);
              *(undefined4 *)((int)register0x00000054 + -0x1fc) = 2;
              *(undefined4 *)((int)register0x00000054 + -0x1f8) = 2;
              FUN_00159184();
              *(undefined4 *)((int)register0x00000054 + -0x200) =
                   *(undefined4 *)((int)register0x00000054 + -0xd0);
              *(undefined4 *)((int)register0x00000054 + -0x1fc) =
                   *(undefined4 *)((int)register0x00000054 + -0x1a8);
              *(undefined4 *)((int)register0x00000054 + -0x1f8) =
                   *(undefined4 *)((int)register0x00000054 + -500);
              *(undefined4 *)((int)register0x00000054 + -500) =
                   *(undefined4 *)((int)register0x00000054 + -0x1f0);
              FUN_00126cb0();
              if (*(int *)((int)register0x00000054 + -0x1f0) != 0) {
                *(int *)((int)register0x00000054 + 0x20) =
                     *(int *)((int)register0x00000054 + -0x1f0);
                *(undefined4 *)((int)register0x00000054 + 0x24) =
                     *(undefined4 *)((int)register0x00000054 + -0x1ec);
                FUN_0004fb3c();
                return;
              }
              *(undefined4 *)((int)register0x00000054 + -0x200) = 0x24;
              *(undefined4 *)((int)register0x00000054 + -0x1fc) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x1f8) = 0;
              *(undefined4 *)((int)register0x00000054 + -500) = 0;
              FUN_000f65f0();
              *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
              *(undefined4 *)((int)register0x00000054 + 0x24) = 0;
              FUN_0004fb3c();
              return;
            }
            *(int *)((int)register0x00000054 + -0x114) = iVar13;
            *(int *)((int)register0x00000054 + -0x178) = iVar6;
            uVar2 = *(undefined4 *)(iVar9 + iVar13 * 8);
            *(undefined4 *)((int)register0x00000054 + -0x78) = uVar2;
            uVar7 = *(undefined4 *)(iVar9 + iVar13 * 8 + 4);
            *(undefined4 *)((int)register0x00000054 + -0x170) = uVar7;
            *(undefined4 *)((int)register0x00000054 + -0x200) = uVar2;
            *(undefined4 *)((int)register0x00000054 + -0x1fc) = uVar7;
            *(undefined **)((int)register0x00000054 + -0x1f8) = PTR_DAT_003ef80c;
            *(undefined4 *)((int)register0x00000054 + -500) = 1;
            internal_stringslite_Index();
            *(undefined4 *)((int)register0x00000054 + -0x1ac) =
                 *(undefined4 *)((int)register0x00000054 + -0x1f0);
            *(undefined4 *)((int)register0x00000054 + -0x200) =
                 *(undefined4 *)((int)register0x00000054 + -0x78);
            *(undefined4 *)((int)register0x00000054 + -0x1fc) =
                 *(undefined4 *)((int)register0x00000054 + -0x170);
            *(undefined **)((int)register0x00000054 + -0x1f8) = PTR_DAT_003ef810;
            *(undefined4 *)((int)register0x00000054 + -500) = 1;
            internal_stringslite_Index(*(undefined4 *)((int)register0x00000054 + -0x1f0));
            iVar3 = *(int *)((int)register0x00000054 + -0x1ac);
            if (iVar3 == -1) {
              iVar6 = *(int *)((int)register0x00000054 + -0x178);
            }
            else {
              uVar11 = *(uint *)((int)register0x00000054 + -0x1f0);
              if (uVar11 == 0xffffffff) {
                iVar6 = *(int *)((int)register0x00000054 + -0x178);
              }
              else if (iVar3 < (int)uVar11) {
                if (*(uint *)((int)register0x00000054 + -0x170) < uVar11) goto LAB_003ef824;
                uVar8 = iVar3 + 1;
                if (uVar11 < uVar8) goto LAB_003ef81c;
                *(uint *)((int)register0x00000054 + -0x200) =
                     *(int *)((int)register0x00000054 + -0x78) +
                     (uVar8 & (int)(1 - (uVar11 - iVar3)) >> 0x1f);
                *(uint *)((int)register0x00000054 + -0x1fc) = (uVar11 - iVar3) + -1;
                FUN_000a9008();
                iVar6 = *(int *)((int)register0x00000054 + -0x1f8);
                if (*(int *)((int)register0x00000054 + -0x1f8) <=
                    *(int *)((int)register0x00000054 + -0x178)) {
                  iVar6 = *(int *)((int)register0x00000054 + -0x178);
                }
              }
              else {
                iVar6 = *(int *)((int)register0x00000054 + -0x178);
              }
            }
            iVar13 = *(int *)((int)register0x00000054 + -0x114) + 1;
            iVar9 = *(int *)((int)register0x00000054 + -0x7c);
            iVar3 = *(int *)((int)register0x00000054 + -0x174);
          } while( true );
        }
        if (uVar11 <= *(uint *)((int)register0x00000054 + -0x1b4)) {
          iVar3 = *(uint *)((int)register0x00000054 + -0x1b4) - uVar11;
          iVar9 = *(int *)((int)register0x00000054 + -0xe0);
          iVar6 = (uVar11 & -iVar3 >> 0x1f) + iVar9;
          goto LAB_003ef378;
        }
        goto LAB_003ef828;
      }
      iVar3 = *(int *)((int)register0x00000054 + -0x168);
      uVar5 = *(undefined4 *)((int)register0x00000054 + -0x6c);
    }
    *(undefined4 *)((int)register0x00000054 + -8) = 0;
    *(undefined4 *)((int)register0x00000054 + -4) = 0;
    uVar2 = 0;
    if (iVar3 != 0) {
      uVar2 = *(undefined4 *)(iVar3 + 4);
    }
    *(undefined4 *)((int)register0x00000054 + -8) = uVar2;
    *(undefined4 *)((int)register0x00000054 + -4) = uVar5;
    *(undefined **)((int)register0x00000054 + -0x200) = PTR_DAT_003eefd4;
    *(undefined4 *)((int)register0x00000054 + -0x1fc) = 0x1f;
    *(undefined1 **)((int)register0x00000054 + -0x1f8) =
         (undefined1 *)((int)register0x00000054 + -8);
    *(undefined4 *)((int)register0x00000054 + -500) = 1;
    *(undefined4 *)((int)register0x00000054 + -0x1f0) = 1;
    printerApi_common_logger_Errorf();
    *(undefined4 *)((int)register0x00000054 + -0x200) = DAT_003eefb8;
    *(undefined4 *)((int)register0x00000054 + -0x1fc) = 2;
    FUN_000953d0();
    pcVar10 = *(code **)(*(int *)(*(int *)((int)register0x00000054 + -0xd8) + 0x20) + 0xc);
    *(undefined4 *)((int)register0x00000054 + -0x200) =
         *(undefined4 *)(*(int *)((int)register0x00000054 + -0xd8) + 0x24);
    (*pcVar10)();
    iVar3 = *(int *)((int)register0x00000054 + -0x114) + 1;
  } while( true );
LAB_003ef81c:
  FUN_00098758(uVar8);
LAB_003ef824:
  FUN_00098718();
LAB_003ef828:
  uVar7 = FUN_00098718();
  uVar2 = extraout_r3_01;
LAB_003ef82c:
  uVar5 = *(undefined4 *)((int)register0x00000054 + -100);
  goto LAB_003ef838;
}



/* printerApi/common/file.DownloadFile.deferwrap2 @ 003efabc (size 92) */

void printerApi_common_file_DownloadFile_deferwrap2(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 auStack_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)auStack_c;
  }
  auStack_c[0] = *(undefined4 *)(unaff_r7 + 8);
  (**(code **)(*(int *)(unaff_r7 + 4) + 0xc))();
  return;
}



/* printerApi/common/file.DownloadFile.deferwrap1 @ 003efb18 (size 96) */

void printerApi_common_file_DownloadFile_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 auStack_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)auStack_c;
  }
  if (*(undefined4 **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    auStack_c[0] = **(undefined4 **)(unaff_r7 + 4);
    FUN_00127938();
  }
  return;
}



/* printerApi/common/file.FileMD5 @ 003efb78 (size 640) */

void printerApi_common_file_FileMD5(undefined4 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int unaff_r10;
  undefined1 *puVar14;
  undefined4 unaff_lr;
  undefined1 uVar15;
  undefined1 *puVar6;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x30)) {
      puVar14 = (undefined1 *)((int)register0x00000054 + -0xb0);
      *(undefined4 *)((int)register0x00000054 + -0xb0) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0xac) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0xa8) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 0;
      FUN_0012576c();
      if (*(int *)((int)register0x00000054 + -0x98) != 0) {
        *(undefined4 *)((int)register0x00000054 + 0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(int *)((int)register0x00000054 + 0x14) = *(int *)((int)register0x00000054 + -0x98);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -8) =
           *(undefined4 *)((int)register0x00000054 + -0x9c);
      *(undefined4 *)((int)register0x00000054 + -0xac) = DAT_003efdfc;
      FUN_0001eed8(*(undefined4 *)((int)register0x00000054 + -0x9c));
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0xa8);
      *(undefined4 **)((int)register0x00000054 + -4) = puVar3;
      *puVar3 = DAT_003efe00;
      puVar3[1] = DAT_003efe04;
      puVar3[2] = DAT_003efe08;
      puVar3[3] = DAT_003efe0c;
      puVar3[0x14] = 0;
      puVar3[0x15] = 0;
      puVar3[0x16] = 0;
      uVar8 = *(undefined4 *)PTR_DAT_003efe10;
      *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_003efe14;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = uVar8;
      FUN_0001cf8c();
      *(undefined4 *)((int)register0x00000054 + -0xac) =
           *(undefined4 *)((int)register0x00000054 + -0xa4);
      *(undefined4 *)((int)register0x00000054 + -0xa8) =
           *(undefined4 *)((int)register0x00000054 + -4);
      *(undefined **)((int)register0x00000054 + -0xa4) = PTR_DAT_003efe18;
      *(undefined4 *)((int)register0x00000054 + -0xa0) =
           *(undefined4 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x9c) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x98) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x94) = 0;
      uVar8 = FUN_000e40d4();
      FUN_00098d84(uVar8,*(undefined4 *)((int)register0x00000054 + -4),
                   (undefined1 *)((int)register0x00000054 + -0x68));
      *(undefined1 **)((int)register0x00000054 + -0xac) =
           (undefined1 *)((int)register0x00000054 + -0x68);
      FUN_0029279c();
      puVar6 = (undefined1 *)((int)register0x00000054 + -0xa8);
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x80);
      do {
        puVar5 = puVar6 + 1;
        *puVar9 = *puVar6;
        puVar6 = puVar5;
        puVar9 = puVar9 + 1;
      } while ((int)puVar5 <= (int)((int)register0x00000054 + -0x99));
      *(undefined4 *)((int)register0x00000054 + -0xac) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa8) = 0x10;
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0xa0) = 0x10;
      *(undefined **)((int)register0x00000054 + -0x9c) = PTR_DAT_003efe1c;
      FUN_00093524();
      *(undefined4 *)((int)register0x00000054 + -0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x98);
      *(undefined4 *)((int)register0x00000054 + -0x70) =
           *(undefined4 *)((int)register0x00000054 + -0x94);
      *(undefined4 *)((int)register0x00000054 + -0xac) =
           *(undefined4 *)((int)register0x00000054 + -0x98);
      *(undefined1 **)((int)register0x00000054 + -0xa8) =
           (undefined1 *)((int)register0x00000054 + -0x80);
      *(undefined4 *)((int)register0x00000054 + -0xa4) = 0x10;
      FUN_00098ec8();
      iVar4 = *(int *)((int)register0x00000054 + -0x70) << 1;
      *(int *)((int)register0x00000054 + -0x6c) = iVar4;
      *(undefined **)((int)register0x00000054 + -0xac) = PTR_DAT_003efe1c;
      *(int *)((int)register0x00000054 + -0xa8) = iVar4;
      *(int *)((int)register0x00000054 + -0xa4) = iVar4;
      FUN_000933e8();
      iVar4 = *(int *)((int)register0x00000054 + -0xa0);
      iVar7 = *(int *)((int)register0x00000054 + -0x70);
      iVar10 = *(int *)((int)register0x00000054 + -0xc);
      iVar11 = 0;
      uVar12 = 0;
      while( true ) {
        puVar2 = PTR_DAT_003efe20;
        if (iVar7 <= iVar11) {
          *(undefined4 *)((int)register0x00000054 + -0xac) = 0;
          *(int *)((int)register0x00000054 + -0xa8) = iVar4;
          *(undefined4 *)((int)register0x00000054 + -0xa4) =
               *(undefined4 *)((int)register0x00000054 + -0x6c);
          FUN_00093e34();
          *(undefined4 *)((int)register0x00000054 + 0xc) =
               *(undefined4 *)((int)register0x00000054 + -0xa0);
          *(undefined4 *)((int)register0x00000054 + 0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x9c);
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
          return;
        }
        bVar1 = *(byte *)(iVar10 + iVar11);
        uVar15 = uVar12 == iVar7 * 2;
        if ((uint)(iVar7 * 2) <= uVar12) goto LAB_003efddc;
        *(undefined *)(iVar4 + uVar12) = PTR_DAT_003efe20[bVar1 >> 4];
        uVar13 = uVar12 + 1;
        uVar15 = uVar13 == iVar7 * 2;
        if ((uint)(iVar7 * 2) <= uVar13) break;
        *(undefined *)(iVar4 + uVar13) = puVar2[bVar1 & 0xf];
        iVar11 = iVar11 + 1;
        uVar12 = uVar12 + 2;
      }
      FUN_000986f8(uVar13,*(undefined4 *)((int)register0x00000054 + -0x6c));
LAB_003efddc:
      param_1 = FUN_000986f8(uVar12,*(undefined4 *)((int)register0x00000054 + -0x6c));
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xb0);
      if ((bool)uVar15) {
        register0x00000054 = (BADSPACEBASE *)puVar14;
      }
    }
    unaff_lr = 0x3efdf4;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/file.DiskUsage @ 003efe24 (size 252) */

void printerApi_common_file_DiskUsage(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined1 *puVar2;
  int local_78;
  undefined4 local_74;
  undefined1 auStack_70 [4];
  uint local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  int local_5c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  while( true ) {
    if (*(uint **)(unaff_r10 + 8) < &local_8) break;
    unaff_lr = 0x3eff1c;
    FUN_00096bb8();
  }
  uVar1 = FUN_00098a20(0,&stack0x0000000c);
  FUN_000989e0(uVar1,auStack_70);
  puVar2 = auStack_70;
  FUN_000f12f4();
  if (local_78 != 0) {
    FUN_00098a20(0,&stack0x0000000c,local_78,local_74);
    return;
  }
  uVar1 = FUN_00098a20(0,&local_18);
  local_18 = (uint)((ulonglong)local_68 * (ulonglong)local_6c);
  local_14 = ((int)local_6c >> 0x1f) * local_68 +
             local_6c * local_64 + (int)((ulonglong)local_68 * (ulonglong)local_6c >> 0x20);
  local_8 = (uint)((ulonglong)local_60 * (ulonglong)local_6c);
  local_4 = ((int)local_6c >> 0x1f) * local_60 +
            local_6c * local_5c + (int)((ulonglong)local_60 * (ulonglong)local_6c >> 0x20);
  local_10 = local_18 - local_8;
  local_c = local_14 - (local_4 + (uint)(local_18 < local_8));
  FUN_00098e0c(uVar1,&local_18,&stack0x0000000c,local_c,unaff_lr,in_stack_00000004,in_stack_00000008
               ,puVar2);
  return;
}



/* printerApi/common/file.CopyFile @ 003eff20 (size 404) */

/* WARNING: Removing unreachable block (ram,0x003effe0) */

void printerApi_common_file_CopyFile(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 local_3c;
  int local_38;
  undefined *local_18 [2];
  undefined *local_10 [2];
  undefined **local_8;
  undefined **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_8 = (undefined **)0x0;
  local_4 = (undefined **)0x0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  FUN_0012576c(0);
  if (local_38 == 0) {
    local_10[0] = PTR_printerApi_common_file_CopyFile_deferwrap1_003f00c0;
    local_8 = local_10;
    FUN_0012576c(local_3c);
    local_18[0] = PTR_printerApi_common_file_CopyFile_deferwrap2_003f00c4;
    local_4 = local_18;
    FUN_000e40d4();
    (*(code *)*local_4)();
    (*(code *)*local_8)();
    return;
  }
  return;
}



/* printerApi/common/file.CopyFile.deferwrap2 @ 003f00d0 (size 96) */

void printerApi_common_file_CopyFile_deferwrap2(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if (*(undefined4 **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = **(undefined4 **)(unaff_r7 + 4);
    FUN_00127938();
  }
  return;
}



/* printerApi/common/file.CopyFile.deferwrap1 @ 003f0130 (size 96) */

void printerApi_common_file_CopyFile_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if (*(undefined4 **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = **(undefined4 **)(unaff_r7 + 4);
    FUN_00127938();
  }
  return;
}



/* printerApi/common/file.Unzip @ 003f0190 (size 624) */

void printerApi_common_file_Unzip(void)

{
  undefined4 extraout_r2;
  int extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined *local_84;
  undefined4 *local_7c;
  undefined4 local_78;
  int local_70;
  undefined *local_60;
  undefined *local_5c;
  undefined *local_58;
  undefined *local_54;
  undefined *local_50;
  undefined *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while( true ) {
    if (*(undefined4 **)(unaff_r10 + 8) < &local_10) break;
    unaff_lr = 0x3f03fc;
    FUN_00096bb8();
  }
  if (in_stack_00000020 == 0) {
    FUN_00098a20(0,&local_40);
    local_3c = in_stack_00000010;
    local_40 = in_stack_0000000c;
    local_34 = 2;
    local_38 = DAT_003f0408;
    local_2c = in_stack_00000018;
    local_30 = in_stack_00000014;
    local_84 = PTR_DAT_003f040c;
    local_7c = &local_40;
    local_78 = 3;
    FUN_0015bb08();
  }
  else {
    FUN_00098a10(0,&local_28);
    local_24 = 2;
    local_28 = DAT_003f0404;
    local_20 = in_stack_0000001c;
    local_14 = in_stack_00000010;
    local_18 = in_stack_0000000c;
    local_c = 2;
    local_10 = DAT_003f0408;
    local_4 = in_stack_00000018;
    local_8 = in_stack_00000014;
    local_84 = PTR_DAT_003f040c;
    local_7c = &local_28;
    local_78 = 5;
    FUN_0015bb08();
  }
  FUN_000ebb78();
  *(undefined4 *)(local_70 + 0x18) = in_stack_00000008;
  *(undefined **)(local_70 + 0x1c) = local_84;
  if (*(int *)PTR_DAT_003f0410 != 0) {
    FUN_00098688();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(undefined4 *)(extraout_r3 + 0x14);
    in_stack_00000004 = extraout_r2;
    local_70 = extraout_r3;
  }
  *(undefined4 *)(local_70 + 0x14) = in_stack_00000004;
  FUN_0015e88c();
  if (local_7c != (undefined4 *)0x0) {
    FUN_00093e34();
    uVar1 = 5;
    puVar2 = local_7c;
    FUN_00148fb4();
    FUN_00098a18(0,&local_60,5,local_84,unaff_lr,uVar1,puVar2);
    local_60 = PTR_SUB_003f0414;
    local_5c = PTR_DAT_003f0418;
    FUN_0008a578();
    local_58 = PTR_SUB_003f0414;
    local_54 = local_84;
    local_50 = PTR_SUB_003f0414;
    local_4c = PTR_DAT_003f041c;
    if (local_7c == (undefined4 *)0x0) {
      local_48 = 0;
    }
    else {
      local_48 = local_7c[1];
    }
    local_44 = local_78;
    printerApi_common_logger_Error();
    return;
  }
  return;
}



/* printerApi/common/file.TarExtract @ 003f0420 (size 436) */

void printerApi_common_file_TarExtract(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  int unaff_r10;
  undefined1 *puVar4;
  undefined4 unaff_lr;
  bool bVar5;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      uVar3 = *(uint *)((int)register0x00000054 + 0x10);
      if ((int)uVar3 < 7) {
        cVar1 = '\0';
        goto LAB_003f0478;
      }
      uVar2 = uVar3 - 7;
      bVar5 = uVar3 == uVar2;
      if (uVar2 <= uVar3) {
        *(uint *)((int)register0x00000054 + -0x40) = *(int *)((int)register0x00000054 + 0xc) + uVar2
        ;
        *(undefined **)((int)register0x00000054 + -0x3c) =
             PTR_s__tar_gzmessagestreamsloki_go_sym_00774847_0x212_003f05d8;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 7;
        FUN_000150d4();
        cVar1 = *(char *)((int)register0x00000054 + -0x34);
        uVar3 = *(uint *)((int)register0x00000054 + 0x10);
LAB_003f0478:
        if (cVar1 != '\0') {
          FUN_00098a18(0,(undefined1 *)((int)register0x00000054 + -0x20),uVar3);
          *(undefined4 *)((int)register0x00000054 + -0x1c) = 3;
          *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_003f05dc;
          *(undefined4 *)((int)register0x00000054 + -0x14) = extraout_r2;
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0xc) = 2;
          *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_003f05e0;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + 0x18);
          *(undefined4 *)((int)register0x00000054 + -8) =
               *(undefined4 *)((int)register0x00000054 + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)((int)register0x00000054 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x3c) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_003f05e4;
          *(undefined4 *)((int)register0x00000054 + -0x34) = 3;
          *(undefined1 **)((int)register0x00000054 + -0x30) =
               (undefined1 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 4;
          *(undefined4 *)((int)register0x00000054 + -0x28) = 4;
          FUN_0015bb08();
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          FUN_0015cd18();
          *(undefined4 *)((int)register0x00000054 + 0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x3c);
          *(undefined4 *)((int)register0x00000054 + 0x20) =
               *(undefined4 *)((int)register0x00000054 + -0x38);
          return;
        }
        FUN_00098a18(0,(undefined1 *)((int)register0x00000054 + -0x20),uVar3);
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 2;
        *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_003f05e8;
        *(undefined4 *)((int)register0x00000054 + -0x14) = extraout_r2_00;
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0xc) = 2;
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_003f05e0;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + 0x18);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_003f05e4;
        *(undefined4 *)((int)register0x00000054 + -0x34) = 3;
        *(undefined1 **)((int)register0x00000054 + -0x30) =
             (undefined1 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x2c) = 4;
        *(undefined4 *)((int)register0x00000054 + -0x28) = 4;
        FUN_0015bb08();
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        FUN_0015cd18();
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + 0x20) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        return;
      }
      param_1 = FUN_00098758();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if (bVar5) {
        register0x00000054 = (BADSPACEBASE *)puVar4;
      }
    }
    unaff_lr = 0x3f05d0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



/* printerApi/common/file.RemoveForce @ 003f05ec (size 140) */

void printerApi_common_file_RemoveForce(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_00098a28(0,&local_10);
  local_c = 3;
  local_10 = DAT_003f067c;
  local_4 = in_stack_00000008;
  local_8 = in_stack_00000004;
  FUN_0015b708();
  FUN_0015cd18();
  return;
}



/* printerApi/common/file.ZipWithPassword @ 003f0684 (size 380) */

void printerApi_common_file_ZipWithPassword(void)

{
  int extraout_r2;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 *local_40;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  if (in_stack_00000020 == 0) {
    FUN_0001eed8();
    local_40[1] = 0x11;
    *local_40 = PTR_DAT_003f0814;
    return;
  }
  FUN_00098a20(0,&local_18);
  local_14 = 2;
  local_18 = PTR_DAT_003f0804;
  local_c = in_stack_00000010;
  local_10 = in_stack_0000000c;
  local_4 = in_stack_00000018;
  local_8 = in_stack_00000014;
  if (3 < extraout_r2 + 3U) {
    FUN_00093524();
  }
  FUN_0008ed10();
  FUN_0015bb08();
  FUN_0015cd18();
  return;
}



/* printerApi/common/file.DetectMimeType @ 003f081c (size 484) */

/* WARNING: Removing unreachable block (ram,0x003f08f8) */
/* WARNING: Removing unreachable block (ram,0x003f0910) */
/* WARNING: Removing unreachable block (ram,0x003f0908) */
/* WARNING: Removing unreachable block (ram,0x003f0954) */

void printerApi_common_file_DetectMimeType(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  int local_28;
  undefined *local_c [2];
  undefined **local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_4 = (undefined **)0x0;
  in_stack_0000000c = 0;
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
  FUN_0012576c(0);
  if (local_28 == 0) {
    local_c[0] = PTR_printerApi_common_file_DetectMimeType_deferwrap1_003f0a0c;
    local_4 = local_c;
    FUN_000933e8();
    FUN_00124764();
    FUN_003945a0();
    in_stack_0000000c = 0x200;
    in_stack_00000014 = 0;
    in_stack_00000018 = 0;
    (*(code *)*local_4)();
    return;
  }
  return;
}



/* printerApi/common/file.DetectMimeType.deferwrap1 @ 003f0a1c (size 96) */

void printerApi_common_file_DetectMimeType_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if (*(undefined4 **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = **(undefined4 **)(unaff_r7 + 4);
    FUN_00127938();
  }
  return;
}



/* printerApi/common/file.WriteFileWithSync @ 003f0a7c (size 268) */

/* WARNING: Removing unreachable block (ram,0x003f0b5c) */

void printerApi_common_file_WriteFileWithSync(void)

{
  int iVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  int local_10;
  int local_c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  FUN_0012576c();
  iVar1 = in_stack_0000000c;
  if (local_c == 0) {
    FUN_00124ccc();
    FUN_001268f8();
    if (iVar1 != 0) {
      return;
    }
    if (local_10 != 0) {
      FUN_00127938();
    }
    return;
  }
  return;
}



/* printerApi/common/file.UploadFile @ 003f0b94 (size 1484) */

/* WARNING: Removing unreachable block (ram,0x003f0fd0) */
/* WARNING: Removing unreachable block (ram,0x003f100c) */
/* WARNING: Removing unreachable block (ram,0x003f109c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void printerApi_common_file_UploadFile(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined *in_stack_00000014;
  int in_stack_00000018;
  undefined4 *in_stack_0000001c;
  undefined *in_stack_00000020;
  int local_74;
  int local_68;
  int local_64;
  undefined *local_28 [4];
  undefined4 *local_18;
  undefined *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined **local_8;
  undefined4 local_4;
  
  while (&local_c <= *(undefined4 ***)(unaff_r10 + 8)) {
    FUN_00096bb8();
  }
  local_8 = (undefined **)0x0;
  local_4 = 0;
  FUN_0012576c(0);
  if (local_74 != 0) {
    return;
  }
  local_28[0] = PTR_printerApi_common_file_UploadFile_deferwrap1_003f116c;
  local_8 = local_28;
  FUN_0001eed8();
  local_c = in_stack_00000008;
  FUN_0001eed8();
  *(undefined1 *)(in_stack_00000008 + 0x14) = 1;
  puVar2 = in_stack_00000008;
  if (*(int *)PTR_DAT_003f1178 != 0) {
    puVar2 = (undefined4 *)FUN_00098688();
    *unaff_r8 = puVar2;
    unaff_r8[1] = local_c[0x1f];
  }
  local_c[0x1f] = puVar2;
  local_c[0x20] = DAT_003f117c;
  local_c[0x21] = 2;
  local_c[0x26] = DAT_003f1180;
  local_c[0x27] = 6;
  local_c[0x28] = DAT_003f1184;
  local_c[0x29] = 1;
  local_c[0x2a] = DAT_003f1188;
  local_c[0x2b] = 0;
  FUN_0001eed8();
  local_10 = in_stack_00000008;
  *in_stack_00000008 = DAT_003f1190;
  FUN_0001eed8();
  *in_stack_00000008 = DAT_003f117c;
  in_stack_00000008[1] = 2;
  *(undefined1 *)(in_stack_00000008 + 0xe) = 1;
  in_stack_00000008[0xf] = DAT_003f1184;
  in_stack_00000008[0x10] = 1;
  in_stack_00000008[0x11] = DAT_003f1198;
  in_stack_00000008[0x12] = 0;
  in_stack_00000008[0x13] = 3;
  puVar2 = in_stack_00000008;
  if (*(int *)PTR_DAT_003f1178 != 0) {
    puVar2 = (undefined4 *)FUN_000986a8();
    *unaff_r8 = puVar2;
    unaff_r8[1] = local_10[1];
    unaff_r8[2] = local_10;
    unaff_r8[3] = local_c[0x1b];
  }
  local_10[1] = puVar2;
  local_c[0x1b] = local_10;
  FUN_0001eed8();
  in_stack_00000008[5] = DAT_003f11a0;
  in_stack_00000008[6] = 0x45;
  *in_stack_00000008 = PTR_DAT_003f11a4;
  puVar2 = in_stack_00000008;
  if (*(int *)PTR_DAT_003f1178 != 0) {
    puVar2 = (undefined4 *)FUN_00098678();
    *unaff_r8 = local_c;
  }
  puVar2[1] = local_c;
  puVar1 = PTR_DAT_003f11b0;
  FUN_0037fdd4(puVar2);
  if (local_64 == 0) {
    if (in_stack_00000018 == 0) {
      in_stack_00000018 = 0x18;
      in_stack_00000014 = PTR_DAT_003f11b8;
    }
    if (in_stack_00000020 == (undefined *)0x0 && in_stack_0000001c == (undefined4 *)0x0) {
      FUN_0012a748();
      if (in_stack_0000000c != (undefined4 *)0x0) {
        (*(code *)*local_8)();
        return;
      }
      (**(code **)(puVar1 + 0x1c))();
      in_stack_00000020 = puVar1;
      in_stack_0000001c = in_stack_00000008;
    }
    FUN_00313ba4(*(undefined4 *)(local_68 + 0x1c));
    local_14 = puVar1;
    FUN_0001eed8();
    local_18 = (undefined4 *)&SUB_0000000c;
    _DAT_00000010 = in_stack_00000018;
    if (*(int *)PTR_DAT_003f1178 != 0) {
      local_18 = (undefined4 *)FUN_00098678();
      *unaff_r8 = in_stack_00000014;
    }
    *local_18 = in_stack_00000014;
    FUN_0008e7bc();
    in_stack_0000000c[1] = 1;
    in_stack_0000000c[2] = 1;
    if (*(int *)PTR_DAT_003f1178 != 0) {
      in_stack_0000000c = (undefined4 *)FUN_00098688();
      *unaff_r8 = local_18;
      unaff_r8[1] = *in_stack_0000000c;
    }
    *in_stack_0000000c = local_18;
    *(undefined4 **)(local_68 + 0x2c) = in_stack_0000001c;
    *(undefined **)(local_68 + 0x30) = in_stack_00000020;
    FUN_00343318();
    (*(code *)*local_8)();
    return;
  }
  (*(code *)*local_8)();
  return;
}



/* printerApi/common/file.UploadFile.deferwrap2 @ 003f11d4 (size 92) */

void printerApi_common_file_UploadFile_deferwrap2(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  local_c[0] = *(undefined4 *)(unaff_r7 + 8);
  (**(code **)(*(int *)(unaff_r7 + 4) + 0xc))();
  return;
}



/* printerApi/common/file.UploadFile.deferwrap1 @ 003f1230 (size 96) */

void printerApi_common_file_UploadFile_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 local_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_00096b54();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)local_c;
  }
  if (*(undefined4 **)(unaff_r7 + 4) != (undefined4 *)0x0) {
    local_c[0] = **(undefined4 **)(unaff_r7 + 4);
    FUN_00127938();
  }
  return;
}



