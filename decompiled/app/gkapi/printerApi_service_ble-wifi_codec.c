// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/service/ble-wifi/codec   functions: 2
/* printerApi/service/ble-wifi/codec.(*DeEncoder).Decode @ 0049cc2c (size 472) */

void printerApi_service_ble_wifi_codec___DeEncoder__Decode(void)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined4 unaff_lr;
  byte *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 *local_30;
  byte *local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_c;
  uint local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    unaff_lr = 0x49ce00;
    FUN_00096bb8();
  }
  uVar1 = FUN_00098a18(0,&stack0x00000014);
  FUN_00098a18(uVar1,&local_24);
  if (in_stack_0000000c < 8) {
    FUN_0001eed8();
    local_30[1] = 0xf;
    *local_30 = PTR_DAT_0049ce18;
    FUN_00098dfc(local_30,&local_24,&stack0x00000014);
    return;
  }
  local_24 = *in_stack_00000008 & 0xf;
  local_20 = (uint)(*in_stack_00000008 >> 4);
  local_1c = (uint)CONCAT11(in_stack_00000008[1],in_stack_00000008[2]);
  local_18 = (uint)CONCAT11(in_stack_00000008[3],in_stack_00000008[4]);
  local_14 = (uint)in_stack_00000008[5];
  if (local_18 == 0) {
    FUN_00098dfc(in_stack_00000008,&local_24,&stack0x00000014,in_stack_0000000c,unaff_lr);
    return;
  }
  if ((int)(local_18 + 8) <= in_stack_0000000c) {
    FUN_000933e8();
    local_c = local_18;
    local_8 = local_18;
    if (local_28 != in_stack_00000008 + (8 - in_stack_00000010 >> 0x1f & 8)) {
      local_28 = (byte *)FUN_00098ec8();
    }
    FUN_00098dfc(local_28,&local_24,&stack0x00000014);
    return;
  }
  FUN_0001eed8();
  local_30[1] = 0xf;
  *local_30 = PTR_DAT_0049ce10;
  FUN_00098dfc(local_30,&local_24,&stack0x00000014);
  return;
}



/* printerApi/service/ble-wifi/codec.(*DeEncoder).Encode @ 0049ce1c (size 400) */

void printerApi_service_ble_wifi_codec___DeEncoder__Encode(undefined4 param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  bool bVar7;
  undefined1 *puVar4;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = unaff_lr;
      uVar1 = FUN_00098a24(0,(undefined1 *)((int)register0x00000054 + -0x14));
      puVar4 = (undefined1 *)((int)register0x00000054 + -0x1c);
      do {
        puVar3 = puVar4 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar3;
      } while ((int)puVar3 <= (int)((int)register0x00000054 + -0x15));
      *(byte *)((int)register0x00000054 + -0x1c) =
           (byte)*(undefined4 *)((int)register0x00000054 + 8) & 0xf |
           (byte)((*(uint *)((int)register0x00000054 + 0xc) & 0xf) << 4);
      *(char *)((int)register0x00000054 + -0x1b) =
           (char)((uint)*(undefined4 *)((int)register0x00000054 + 0x10) >> 8);
      *(char *)((int)register0x00000054 + -0x1a) =
           (char)*(undefined4 *)((int)register0x00000054 + 0x10);
      *(char *)((int)register0x00000054 + -0x19) =
           (char)((uint)*(undefined4 *)((int)register0x00000054 + 0x14) >> 8);
      *(char *)((int)register0x00000054 + -0x18) =
           (char)*(undefined4 *)((int)register0x00000054 + 0x14);
      *(char *)((int)register0x00000054 + -0x17) =
           (char)*(undefined4 *)((int)register0x00000054 + 0x18);
      *(undefined1 *)((int)register0x00000054 + -0x16) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x15) = 0;
      *(undefined1 **)((int)register0x00000054 + -0x38) =
           (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined1 **)((int)register0x00000054 + -0x34) =
           (undefined1 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x30) = 8;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 8;
      FUN_0014ea28();
      if (*(int *)((int)register0x00000054 + -0x24) != 0) {
        *(undefined4 *)((int)register0x00000054 + 0x28) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x2c) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x30) = 0;
        *(int *)((int)register0x00000054 + 0x34) = *(int *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + 0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        return;
      }
      *(undefined1 **)((int)register0x00000054 + -0x38) =
           (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x34) =
           *(undefined4 *)((int)register0x00000054 + 0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + 0x20);
      *(undefined4 *)((int)register0x00000054 + -0x2c) =
           *(undefined4 *)((int)register0x00000054 + 0x24);
      FUN_0014ea28();
      if (*(int *)((int)register0x00000054 + -0x24) != 0) {
        *(undefined4 *)((int)register0x00000054 + 0x28) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x2c) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x30) = 0;
        *(int *)((int)register0x00000054 + 0x34) = *(int *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + 0x38) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        return;
      }
      uVar5 = *(uint *)((int)register0x00000054 + -0x10);
      uVar2 = *(uint *)((int)register0x00000054 + -8);
      bVar7 = uVar5 == uVar2;
      if (uVar2 <= uVar5) {
        *(uint *)((int)register0x00000054 + 0x28) =
             *(int *)((int)register0x00000054 + -0x14) +
             (uVar2 & (int)-(*(int *)((int)register0x00000054 + -0xc) - uVar2) >> 0x1f);
        *(uint *)((int)register0x00000054 + 0x2c) = uVar5 - uVar2;
        *(uint *)((int)register0x00000054 + 0x30) = *(int *)((int)register0x00000054 + -0xc) - uVar2
        ;
        *(undefined4 *)((int)register0x00000054 + 0x34) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x38) = 0;
        return;
      }
      param_1 = FUN_00098758();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x3c);
      if (bVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x49cfa8;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



