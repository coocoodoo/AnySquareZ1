// gkapi — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gkapi   package: printerApi/common/utils/sys   functions: 1
/* printerApi/common/utils/sys.GetGID @ 00646874 (size 352) */

void printerApi_common_utils_sys_GetGID(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  undefined8 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x54);
      *(undefined4 *)((int)register0x00000054 + -0x54) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x50) = DAT_006469d8;
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 0x40;
      *(undefined4 *)((int)register0x00000054 + -0x48) = 0x40;
      FUN_000933e8();
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = 0x40;
      *(undefined4 *)((int)register0x00000054 + -0x48) = 0x40;
      *(undefined1 *)((int)register0x00000054 + -0x44) = 0;
      uVar2 = FUN_000485e0();
      uVar4 = *(uint *)((int)register0x00000054 + -0x40);
      uVar7 = CONCAT44(uVar4,uVar2);
      uVar6 = uVar4 == 0x40;
      if (uVar4 < 0x41) {
        if ((int)uVar4 < 10) {
          cVar1 = '\0';
        }
        else {
          *(uint *)((int)register0x00000054 + -0x10) = uVar4;
          *(undefined4 *)((int)register0x00000054 + -0x50) =
               *(undefined4 *)((int)register0x00000054 + -4);
          *(undefined4 *)((int)register0x00000054 + -0x4c) = DAT_006469dc;
          *(undefined4 *)((int)register0x00000054 + -0x48) = 10;
          FUN_000150d4();
          cVar1 = *(char *)((int)register0x00000054 + -0x44);
          uVar4 = *(uint *)((int)register0x00000054 + -0x10);
        }
        if (cVar1 == '\0') {
          uVar2 = 0x40;
          iVar3 = *(int *)((int)register0x00000054 + -4);
LAB_00646930:
          *(undefined4 *)((int)register0x00000054 + -0xc) = uVar2;
          *(int *)((int)register0x00000054 + -8) = iVar3;
          *(int *)((int)register0x00000054 + -0x50) = iVar3;
          *(uint *)((int)register0x00000054 + -0x4c) = uVar4;
          *(undefined4 *)((int)register0x00000054 + -0x48) = uVar2;
          *(undefined1 *)((int)register0x00000054 + -0x44) = 0x20;
          FUN_0001516c();
          uVar4 = *(uint *)((int)register0x00000054 + -0x40);
          uVar6 = *(uint *)((int)register0x00000054 + -0xc) == uVar4;
          if (uVar4 <= *(uint *)((int)register0x00000054 + -0xc)) {
            *(undefined1 **)((int)register0x00000054 + -0x50) =
                 (undefined1 *)((int)register0x00000054 + -0x30);
            *(undefined4 *)((int)register0x00000054 + -0x4c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(uint *)((int)register0x00000054 + -0x48) = uVar4;
            FUN_00093e34();
            *(undefined4 *)((int)register0x00000054 + -0x50) =
                 *(undefined4 *)((int)register0x00000054 + -0x44);
            *(undefined4 *)((int)register0x00000054 + -0x4c) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            *(undefined4 *)((int)register0x00000054 + -0x48) = 10;
            *(undefined4 *)((int)register0x00000054 + -0x44) = 0x40;
            FUN_000a8078();
            *(undefined4 *)((int)register0x00000054 + 4) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            *(undefined4 *)((int)register0x00000054 + 8) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            return;
          }
          FUN_00098738();
        }
        else {
          uVar6 = uVar4 == 10;
          if (9 < uVar4) {
            uVar4 = uVar4 - 10;
            iVar3 = *(int *)((int)register0x00000054 + -4) + 10;
            uVar2 = 0x36;
            goto LAB_00646930;
          }
        }
        uVar7 = FUN_00098758(10);
      }
      param_1 = FUN_00098738((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x40);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x54);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x6469d0;
    param_1 = FUN_00096bb8(param_1);
  } while( true );
}



