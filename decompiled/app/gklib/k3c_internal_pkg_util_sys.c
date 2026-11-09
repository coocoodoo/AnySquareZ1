// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/util/sys   functions: 2
/* k3c/internal/pkg/util/sys.GetCpuInfo @ 00443d24 (size 784) */

/* WARNING: Removing unreachable block (ram,0x00443e54) */

void k3c_internal_pkg_util_sys_GetCpuInfo(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_r3;
  undefined4 uVar6;
  undefined4 uVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  
code_r0x00443d24:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar8 = (undefined1 *)((int)register0x00000054 + -0x68);
    *(undefined4 *)((int)register0x00000054 + -0x68) = unaff_lr;
    *(undefined **)((int)register0x00000054 + -100) =
         PTR_s__proc_cpuinfo_unregisteredstate__008262d0_0xd97_00444038;
    *(undefined4 *)((int)register0x00000054 + -0x60) = 0xd;
    FUN_0012e1dc();
    if (*(int *)((int)register0x00000054 + -0x50) != 0) {
      *(undefined **)((int)register0x00000054 + 4) = PTR_DAT_00444040;
      *(undefined4 *)((int)register0x00000054 + 8) = 1;
      return;
    }
    *(undefined4 *)((int)register0x00000054 + -100) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x60) =
         *(undefined4 *)((int)register0x00000054 + -0x5c);
    *(undefined4 *)((int)register0x00000054 + -0x5c) =
         *(undefined4 *)((int)register0x00000054 + -0x58);
    FUN_00099104();
    *(undefined4 *)((int)register0x00000054 + -100) =
         *(undefined4 *)((int)register0x00000054 + -0x58);
    *(undefined4 *)((int)register0x00000054 + -0x60) =
         *(undefined4 *)((int)register0x00000054 + -0x54);
    *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0044403c;
    *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
    *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
    *(undefined4 *)((int)register0x00000054 + -0x50) = 0xffffffff;
    FUN_0014f168();
    iVar1 = *(int *)((int)register0x00000054 + -0x4c);
    *(int *)((int)register0x00000054 + -0x20) = iVar1;
    iVar3 = *(int *)((int)register0x00000054 + -0x48);
    *(int *)((int)register0x00000054 + -0x3c) = iVar3;
    iVar4 = 0;
    iVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    do {
      *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0x38) = uVar6;
      if (iVar3 <= iVar4) {
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
        *(undefined4 *)((int)register0x00000054 + -100) = extraout_r3;
        FUN_00020ce0();
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00444050;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x60);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x1c);
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00444054;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x5c);
        *(undefined **)((int)register0x00000054 + -100) =
             PTR_s__d_core__sunixpacketprocess_idgc_00823504_0xf6c_00444058;
        *(undefined4 *)((int)register0x00000054 + -0x60) = 10;
        *(undefined1 **)((int)register0x00000054 + -0x5c) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x58) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 2;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + 4) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined4 *)((int)register0x00000054 + 8) =
             *(undefined4 *)((int)register0x00000054 + -0x4c);
        return;
      }
      *(int *)((int)register0x00000054 + -0x28) = iVar4;
      *(int *)((int)register0x00000054 + -0x2c) = iVar5;
      uVar6 = *(undefined4 *)(iVar1 + iVar4 * 8);
      *(undefined4 *)((int)register0x00000054 + -0x18) = uVar6;
      uVar7 = *(undefined4 *)(iVar1 + iVar4 * 8 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x34) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -100) = uVar6;
      *(undefined4 *)((int)register0x00000054 + -0x60) = uVar7;
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00444044;
      *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
      internal_stringslite_Index();
      if (*(int *)((int)register0x00000054 + -0x54) == -1) {
        iVar5 = *(int *)((int)register0x00000054 + -0x2c);
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x38);
        uVar7 = *(undefined4 *)((int)register0x00000054 + -0x1c);
      }
      else {
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00444044;
        *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 0xffffffff;
        FUN_0014f168();
        uVar9 = 1;
        if (*(int *)((int)register0x00000054 + -0x48) == 0) goto LAB_00444018;
        *(int *)((int)register0x00000054 + -0x40) = *(int *)((int)register0x00000054 + -0x48);
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x4c);
        *(undefined4 **)((int)register0x00000054 + -0x24) = puVar2;
        uVar6 = puVar2[1];
        *(undefined4 *)((int)register0x00000054 + -100) = *puVar2;
        *(undefined4 *)((int)register0x00000054 + -0x60) = uVar6;
        FUN_00151ce4();
        iVar1 = *(int *)((int)register0x00000054 + -0x58);
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x5c);
        if (iVar1 == 9) {
          *(undefined4 *)((int)register0x00000054 + -0x30) = 9;
          *(undefined4 *)((int)register0x00000054 + -0x14) = uVar6;
          *(undefined4 *)((int)register0x00000054 + -100) = uVar6;
          *(undefined **)((int)register0x00000054 + -0x60) =
               PTR_s_processorendpointseventtimefork__00823504_0x152_00444048;
          *(undefined4 *)((int)register0x00000054 + -0x5c) = 9;
          FUN_00018250();
          if (*(char *)((int)register0x00000054 + -0x58) != '\0') {
            iVar5 = *(int *)((int)register0x00000054 + -0x2c) + 1;
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x38);
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x1c);
            goto LAB_00443ddc;
          }
          iVar1 = *(int *)((int)register0x00000054 + -0x30);
          uVar6 = *(undefined4 *)((int)register0x00000054 + -0x14);
        }
        if (iVar1 == 10) {
          *(undefined4 *)((int)register0x00000054 + -100) = uVar6;
          *(undefined **)((int)register0x00000054 + -0x60) =
               PTR_s_model_name_d_core__sunixpacketpr_00823504_0xf62_0044404c;
          *(undefined4 *)((int)register0x00000054 + -0x5c) = 10;
          FUN_00018250();
          if (*(char *)((int)register0x00000054 + -0x58) == '\0') {
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x38);
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x1c);
          }
          else {
            uVar9 = *(uint *)((int)register0x00000054 + -0x40) == 1;
            if (*(uint *)((int)register0x00000054 + -0x40) < 2) goto LAB_0044400c;
            uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x24) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -100) =
                 *(undefined4 *)(*(int *)((int)register0x00000054 + -0x24) + 8);
            *(undefined4 *)((int)register0x00000054 + -0x60) = uVar6;
            FUN_00151ce4();
            uVar7 = *(undefined4 *)((int)register0x00000054 + -0x5c);
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x58);
          }
        }
        else {
          uVar6 = *(undefined4 *)((int)register0x00000054 + -0x38);
          uVar7 = *(undefined4 *)((int)register0x00000054 + -0x1c);
        }
        iVar5 = *(int *)((int)register0x00000054 + -0x2c);
      }
LAB_00443ddc:
      iVar4 = *(int *)((int)register0x00000054 + -0x28) + 1;
      iVar1 = *(int *)((int)register0x00000054 + -0x20);
      iVar3 = *(int *)((int)register0x00000054 + -0x3c);
    } while( true );
  }
  goto LAB_00444028;
LAB_0044400c:
  FUN_0009dbd4(1,1);
LAB_00444018:
  param_1 = FUN_0009dbd4(0,0);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x68);
  if ((bool)uVar9) {
    register0x00000054 = (BADSPACEBASE *)puVar8;
  }
LAB_00444028:
  unaff_lr = 0x444030;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x00443d24;
}



/* k3c/internal/pkg/util/sys.CatchPanic @ 0044405c (size 408) */

void k3c_internal_pkg_util_sys_CatchPanic(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 extraout_r2;
  char *pcVar5;
  undefined4 extraout_r3;
  int iVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x48) = unaff_lr;
      *(undefined1 **)((int)register0x00000054 + -0x44) =
           (undefined1 *)((int)register0x00000054 + 4);
      FUN_00054ee0();
      iVar1 = *(int *)((int)register0x00000054 + -0x40);
      if (iVar1 == 0) {
        return;
      }
      puVar3 = *(undefined4 **)((int)register0x00000054 + -0x3c);
      if (iVar1 != DAT_004441f8) {
        pcVar5 = (char *)0x0;
        iVar6 = 0;
      }
      else {
        pcVar5 = (char *)*puVar3;
        iVar6 = puVar3[1];
      }
      *(undefined4 **)((int)register0x00000054 + -0x24) = puVar3;
      *(int *)((int)register0x00000054 + -0x2c) = iVar1;
      if ((((iVar1 != DAT_004441f8) || (iVar6 != 4)) || (*pcVar5 != 'e')) ||
         (((pcVar5[1] != 'x' || (pcVar5[2] != 'i')) || (uVar8 = pcVar5[3] == 't', !(bool)uVar8)))) {
        FUN_0042debc();
        uVar2 = *(undefined4 *)((int)register0x00000054 + -0x44);
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined4 *)((int)register0x00000054 + -0x44) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x40) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar4;
        FUN_00099104();
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)((int)register0x00000054 + -0x38);
        *(undefined4 *)((int)register0x00000054 + -0x30) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        github_com_petermattis_goid_getg(*(undefined4 *)((int)register0x00000054 + -0x38));
        FUN_0009def4(0,(undefined1 *)((int)register0x00000054 + -0x20),
                     *(undefined4 *)(*(int *)((int)register0x00000054 + -0x44) + 0x54),
                     *(undefined4 *)(*(int *)((int)register0x00000054 + -0x44) + 0x58));
        *(int *)((int)register0x00000054 + -0x20) = DAT_004441f8;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = DAT_004441fc;
        *(undefined4 *)((int)register0x00000054 + -0x44) = extraout_r2;
        *(undefined4 *)((int)register0x00000054 + -0x40) = extraout_r3;
        FUN_0008f6c0();
        *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_00444200;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined4 *)((int)register0x00000054 + -0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x24);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        FUN_0008f77c();
        *(int *)((int)register0x00000054 + -8) = DAT_004441f8;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x3c);
        *(undefined1 **)((int)register0x00000054 + -0x44) =
             (undefined1 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -0x40) = 4;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 4;
        k3c_internal_pkg_logger_Error();
        return;
      }
      *(char **)((int)register0x00000054 + -0x44) = pcVar5;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 4;
      FUN_0008f77c();
      *(int *)((int)register0x00000054 + -0x44) = DAT_004441f8;
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x48);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x4441f0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



