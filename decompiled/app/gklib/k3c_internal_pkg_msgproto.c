// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/internal/pkg/msgproto   functions: 100
/* k3c/internal/pkg/msgproto.init @ 00430218 (size 1728) */

void k3c_internal_pkg_msgproto_init(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  undefined4 *extraout_r1_01;
  undefined4 *extraout_r1_02;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puStack_5c;
  undefined4 *puStack_4c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4308d4;
    FUN_0009bf64();
  }
  FUN_000908bc();
  FUN_00093a08();
  *puStack_4c = 0;
  puVar1 = PTR_DAT_004308dc;
  FUN_00093a08();
  *puStack_4c = 1;
  if (*(int *)PTR_DAT_004308e8 != 0) {
    FUN_0009db64();
    *unaff_r8 = puStack_5c;
    unaff_r8[1] = *(undefined4 *)PTR_DAT_004308ec;
  }
  *(undefined1 **)PTR_DAT_004308ec = puStack_5c;
  FUN_000908bc();
  FUN_00022cf8(puVar1);
  *puStack_5c = 1;
  puStack_5c[1] = 0;
  *(undefined4 *)(puStack_5c + 4) = 5;
  puStack_5c[8] = 0;
  FUN_00093a08();
  *puStack_4c = PTR_DAT_004308fc;
  puVar3 = puStack_4c;
  if (*(int *)PTR_DAT_004308e8 != 0) {
    puVar3 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puStack_5c;
    unaff_r8[1] = puVar3[1];
  }
  puVar3[1] = puStack_5c;
  FUN_00022cf8();
  *puVar1 = 1;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 4) = 5;
  puVar1[8] = 1;
  FUN_00022cf8();
  puVar3 = (undefined4 *)puVar1;
  if (*(int *)PTR_DAT_004308e8 != 0) {
    FUN_0009db54();
    *unaff_r8 = puVar1;
    puVar3 = extraout_r1;
  }
  *puVar3 = puVar1;
  FUN_00093a08();
  *puStack_4c = PTR_DAT_00430908;
  puVar2 = puStack_4c;
  if (*(int *)PTR_DAT_004308e8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar3;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = puVar3;
  FUN_00022cf8();
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 4) = 3;
  FUN_00022cf8();
  puVar3 = (undefined4 *)puVar1;
  if (*(int *)PTR_DAT_004308e8 != 0) {
    FUN_0009db54();
    *unaff_r8 = puVar1;
    puVar3 = extraout_r1_00;
  }
  *puVar3 = puVar1;
  FUN_00093a08();
  *puStack_4c = PTR_DAT_00430914;
  puVar2 = puStack_4c;
  if (*(int *)PTR_DAT_004308e8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar3;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = puVar3;
  FUN_00022cf8();
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[8] = 1;
  *(undefined4 *)(puVar1 + 4) = 3;
  FUN_00022cf8();
  puVar3 = (undefined4 *)puVar1;
  if (*(int *)PTR_DAT_004308e8 != 0) {
    FUN_0009db54();
    *unaff_r8 = puVar1;
    puVar3 = extraout_r1_01;
  }
  *puVar3 = puVar1;
  FUN_00093a08();
  *puStack_4c = PTR_DAT_00430920;
  puVar2 = puStack_4c;
  if (*(int *)PTR_DAT_004308e8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar3;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = puVar3;
  FUN_00022cf8();
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 4) = 2;
  FUN_00022cf8();
  puVar3 = (undefined4 *)puVar1;
  if (*(int *)PTR_DAT_004308e8 != 0) {
    FUN_0009db54();
    *unaff_r8 = puVar1;
    puVar3 = extraout_r1_02;
  }
  *puVar3 = puVar1;
  FUN_00093a08();
  *puStack_4c = PTR_DAT_0043092c;
  puVar2 = puStack_4c;
  if (*(int *)PTR_DAT_004308e8 != 0) {
    puVar2 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar3;
    unaff_r8[1] = puVar2[1];
  }
  puVar2[1] = puVar3;
  FUN_00022cf8();
  puVar1[1] = 1;
  *(undefined4 *)(puVar1 + 4) = 0x40;
  FUN_00093a08();
  *puStack_4c = PTR_DAT_00430938;
  puVar3 = puStack_4c;
  if (*(int *)PTR_DAT_004308e8 != 0) {
    puVar3 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = puVar3[1];
  }
  puVar3[1] = puVar1;
  FUN_00022cf8();
  *puVar1 = 0;
  puVar1[1] = 1;
  *(undefined4 *)(puVar1 + 4) = 0x40;
  FUN_00093a08();
  *puStack_4c = PTR_DAT_00430944;
  puVar3 = puStack_4c;
  if (*(int *)PTR_DAT_004308e8 != 0) {
    puVar3 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = puVar1;
    unaff_r8[1] = puVar3[1];
  }
  puVar3[1] = puVar1;
  FUN_00022cf8();
  *puVar1 = 0;
  puVar1[1] = 1;
  *(undefined4 *)(puVar1 + 4) = 0x40;
  FUN_00093a08();
  *puStack_4c = PTR_DAT_00430950;
  if (*(int *)PTR_DAT_004308e8 != 0) {
    puStack_4c = (undefined4 *)FUN_0009db84();
    *unaff_r8 = puVar1;
    unaff_r8[1] = puStack_4c[1];
    unaff_r8[2] = puVar1;
    unaff_r8[3] = *(undefined4 *)PTR_DAT_00430954;
  }
  puStack_4c[1] = puVar1;
  *(undefined **)PTR_DAT_00430954 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x004308c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_uint32).GetIs_dynamic_string @ 00430958 (size 16) */

void k3c_internal_pkg_msgproto___PT_uint32__GetIs_dynamic_string(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(in_stack_00000004 + 1);
                    /* WARNING: Could not recover jumptable at 0x00430964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_uint32).Get_max_length @ 00430968 (size 16) */

void k3c_internal_pkg_msgproto___PT_uint32__Get_max_length(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00430974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_uint32).Encode @ 00430978 (size 1216) */

void k3c_internal_pkg_msgproto___PT_uint32__Encode(void)

{
  bool bVar1;
  bool bVar2;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int *extraout_r2;
  int *extraout_r2_00;
  int *extraout_r2_01;
  int *extraout_r2_02;
  int *extraout_r2_03;
  int *extraout_r3;
  int *extraout_r3_00;
  int *extraout_r3_01;
  int *piVar3;
  int *extraout_r3_02;
  int *extraout_r3_03;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int unaff_r10;
  int iVar7;
  bool bVar8;
  bool bVar9;
  int *in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  uint local_2c;
  int local_28;
  int local_20;
  int *local_1c;
  int local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_util_cast_ToInt64();
  bVar8 = local_28 == 0;
  bVar2 = 0 < local_28;
  bVar9 = local_28 == -1;
  bVar1 = local_28 < -1;
  if ((local_2c < 0xfc000000 && bVar9 || bVar1) || (0xbffffff < local_2c && bVar8 || 0 < local_28))
  {
    iVar4 = in_stack_00000008[1];
    piVar5 = (int *)(iVar4 + 1);
    iVar7 = *in_stack_00000008;
    piVar6 = piVar5;
    if ((int *)in_stack_00000008[2] < piVar5) {
      FUN_000987f4();
      in_stack_00000008[2] = local_18;
      iVar7 = local_20;
      piVar6 = local_1c;
      piVar3 = in_stack_00000008;
      if (*DAT_00430e40 != 0) {
        FUN_0009db64();
        *piVar5 = extraout_r1;
        *(int *)(iVar4 + 5) = *extraout_r3;
        iVar7 = extraout_r1;
        piVar6 = extraout_r2;
        piVar3 = extraout_r3;
      }
      *piVar3 = iVar7;
    }
    in_stack_00000008[1] = (int)piVar6;
    *(byte *)((int)piVar6 + iVar7 + -1) =
         (byte)(local_2c >> 0x1c) | (byte)(local_28 << 4) & 0x7f | 0x80;
  }
  if ((local_2c < DAT_00430e44 && bVar9 || bVar1) || (0x17ffff < local_2c && bVar8 || bVar2)) {
    iVar4 = in_stack_00000008[1];
    piVar5 = (int *)(iVar4 + 1);
    iVar7 = *in_stack_00000008;
    piVar6 = piVar5;
    if ((int *)in_stack_00000008[2] < piVar5) {
      FUN_000987f4();
      in_stack_00000008[2] = local_18;
      iVar7 = local_20;
      piVar6 = local_1c;
      piVar3 = in_stack_00000008;
      if (*DAT_00430e40 != 0) {
        FUN_0009db64();
        *piVar5 = extraout_r1_00;
        *(int *)(iVar4 + 5) = *extraout_r3_00;
        iVar7 = extraout_r1_00;
        piVar6 = extraout_r2_00;
        piVar3 = extraout_r3_00;
      }
      *piVar3 = iVar7;
    }
    in_stack_00000008[1] = (int)piVar6;
    *(byte *)((int)piVar6 + iVar7 + -1) = (byte)(local_2c >> 0x15) & 0x7f | 0x80;
  }
  piVar6 = (int *)(uint)(local_2c < DAT_00430e48 && bVar9 || bVar1);
  if (piVar6 != (int *)0x0 || (0x2fff < local_2c && bVar8 || bVar2)) {
    iVar4 = in_stack_00000008[1];
    piVar6 = (int *)(iVar4 + 1);
    iVar7 = *in_stack_00000008;
    piVar5 = piVar6;
    if ((int *)in_stack_00000008[2] < piVar6) {
      FUN_000987f4();
      in_stack_00000008[2] = local_18;
      iVar7 = local_20;
      piVar5 = local_1c;
      piVar3 = in_stack_00000008;
      if (*DAT_00430e40 != 0) {
        FUN_0009db64();
        *piVar6 = extraout_r1_01;
        *(int *)(iVar4 + 5) = *extraout_r3_01;
        iVar7 = extraout_r1_01;
        piVar5 = extraout_r2_01;
        piVar3 = extraout_r3_01;
      }
      *piVar3 = iVar7;
    }
    in_stack_00000008[1] = (int)piVar5;
    piVar6 = (int *)(local_2c >> 0xe & 0x7f | 0x80);
    *(char *)((int)piVar5 + iVar7 + -1) = (char)piVar6;
  }
  piVar5 = in_stack_00000008;
  if ((local_2c < 0xffffffe0 && bVar9 || bVar1) || (0x5f < local_2c && bVar8 || bVar2)) {
    piVar3 = (int *)(in_stack_00000008[1] + 1);
    iVar7 = *in_stack_00000008;
    if ((int *)in_stack_00000008[2] < piVar3) {
      FUN_000987f4();
      in_stack_00000008[2] = local_18;
      iVar7 = local_20;
      piVar3 = local_1c;
      piVar5 = in_stack_00000008;
      if (*DAT_00430e40 != 0) {
        FUN_0009db64();
        *piVar6 = extraout_r1_02;
        piVar6[1] = *extraout_r3_02;
        iVar7 = extraout_r1_02;
        piVar3 = extraout_r2_02;
        piVar5 = extraout_r3_02;
      }
      *piVar5 = iVar7;
    }
    piVar5[1] = (int)piVar3;
    *(byte *)((int)piVar3 + iVar7 + -1) = (byte)(local_2c >> 7) & 0x7f | 0x80;
  }
  piVar3 = (int *)(piVar5[1] + 1);
  iVar7 = *piVar5;
  if ((int *)piVar5[2] < (int *)(piVar5[1] + 1)) {
    FUN_000987f4();
    in_stack_00000008[2] = local_18;
    if (*DAT_00430e40 != 0) {
      FUN_0009db64();
      *piVar6 = extraout_r1_03;
      piVar6[1] = *extraout_r3_03;
      local_20 = extraout_r1_03;
      local_1c = extraout_r2_03;
      in_stack_00000008 = extraout_r3_03;
    }
    *in_stack_00000008 = local_20;
    piVar3 = local_1c;
    iVar7 = local_20;
    piVar5 = in_stack_00000008;
  }
  piVar5[1] = (int)piVar3;
  *(byte *)((int)piVar3 + iVar7 + -1) = (byte)local_2c & 0x7f;
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_uint32).Parse @ 00430e4c (size 256) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto___PT_uint32__Parse(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_r10;
  undefined1 *puVar6;
  undefined4 unaff_lr;
  undefined1 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar6 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      uVar2 = *(uint *)((int)register0x00000054 + 0xc);
      uVar1 = *(uint *)((int)register0x00000054 + 0x14);
      uVar7 = uVar2 == uVar1;
      if (uVar1 < uVar2) {
        uVar3 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
        uVar5 = uVar3 & 0x7f;
        if ((uVar3 & 0x60) == 0x60) {
          uVar5 = uVar3 | 0xffffffe0;
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = 0;
        }
        while( true ) {
          uVar1 = uVar1 + 1;
          if ((uVar3 & 0x80) == 0) {
            *(uint *)((int)register0x00000054 + -4) = uVar1;
            if (*(char *)(*(int *)((int)register0x00000054 + 4) + 8) == '\0') {
              uVar4 = 0;
            }
            *(uint *)((int)register0x00000054 + -0x10) = uVar5;
            *(uint *)((int)register0x00000054 + -0xc) = uVar4;
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + 0x18) = _UNK_00430f50;
            *(undefined4 *)((int)register0x00000054 + 0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + 0x20) =
                 *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00430f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x14))();
            return;
          }
          uVar7 = uVar2 == uVar1;
          if (uVar2 <= uVar1) break;
          uVar3 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
          uVar4 = uVar5 >> 0x19 | uVar4 << 7;
          uVar5 = uVar3 & 0x7f | uVar5 << 7;
        }
        FUN_0009dbd4(uVar1);
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if ((bool)uVar7) {
        register0x00000054 = (BADSPACEBASE *)puVar6;
      }
    }
    unaff_lr = 0x430f48;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*PT_string).GetIs_dynamic_string @ 00430f54 (size 16) */

void k3c_internal_pkg_msgproto___PT_string__GetIs_dynamic_string(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(in_stack_00000004 + 1);
                    /* WARNING: Could not recover jumptable at 0x00430f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_string).Encode @ 00430f64 (size 1428) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto___PT_string__Encode(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_r2;
  int iVar5;
  int extraout_r3;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar6;
  undefined4 in_stack_00000008;
  undefined *in_stack_0000000c;
  int *in_stack_00000010;
  int iStack_60;
  
  while (pcVar1 = _UNK_004314fc, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x4314f4;
    FUN_0009bf64();
  }
  if (in_stack_0000000c == (undefined *)0x0) {
    (*_UNK_004314fc)();
                    /* WARNING: Could not recover jumptable at 0x0043130c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  uVar3 = *(uint *)(in_stack_0000000c + 8);
  if (_UNK_00431500 < uVar3) {
    if (_UNK_00431530 < uVar3) {
      if (uVar3 == _UNK_00431540) {
        if (in_stack_0000000c == _UNK_00431544) {
          iVar4 = in_stack_00000010[1];
          iVar2 = *in_stack_00000010;
          FUN_000986b8();
          for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
            *(char *)(iStack_60 + iVar5) = (char)*(undefined4 *)(iVar2 + iVar5 * 4);
          }
          (*pcVar1)();
          goto LAB_0043133c;
        }
      }
      else if (uVar3 == _UNK_00431548) {
        if (in_stack_0000000c == _UNK_0043154c) {
          iVar5 = in_stack_00000010[1];
          iVar2 = *in_stack_00000010;
          FUN_000986b8();
          iVar4 = 0;
          goto LAB_004313a4;
        }
      }
      else if ((uVar3 == _UNK_00431550) && (in_stack_0000000c == _UNK_00431554)) {
        iVar4 = in_stack_00000010[1];
        iVar2 = *in_stack_00000010;
        FUN_000986b8();
        for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
          *(char *)(iStack_60 + iVar5) = (char)*(undefined4 *)(iVar2 + iVar5 * 4);
        }
        (*pcVar1)();
        goto LAB_0043133c;
      }
    }
    else if (uVar3 == _UNK_00431534) {
      if (in_stack_0000000c == _UNK_0043153c) {
        (*_UNK_004314fc)();
        goto LAB_0043133c;
      }
    }
    else if ((uVar3 == _UNK_00431530) && (in_stack_0000000c == _UNK_00431538)) {
      iVar4 = in_stack_00000010[1];
      iVar2 = *in_stack_00000010;
      FUN_000986b8();
      for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
        *(char *)(iStack_60 + iVar5) = (char)*(undefined4 *)(iVar2 + iVar5 * 8);
      }
      (*pcVar1)();
      goto LAB_0043133c;
    }
  }
  else if (_UNK_00431504 < uVar3) {
    if (uVar3 == _UNK_0043151c) {
      if (in_stack_0000000c == _UNK_00431520) {
        iVar4 = in_stack_00000010[1];
        iVar2 = *in_stack_00000010;
        FUN_000986b8();
        for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
          *(char *)(iStack_60 + iVar5) = (char)*(undefined4 *)(iVar2 + iVar5 * 4);
        }
        (*pcVar1)();
        goto LAB_0043133c;
      }
    }
    else if (uVar3 == _UNK_00431524) {
      if (in_stack_0000000c == _UNK_00431528) {
        iVar4 = in_stack_00000010[1];
        iVar2 = *in_stack_00000010;
        FUN_000986b8();
        for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
          *(char *)(iStack_60 + iVar5) = (char)*(undefined4 *)(iVar2 + iVar5 * 8);
        }
        (*pcVar1)();
        goto LAB_0043133c;
      }
    }
    else if ((uVar3 == _UNK_00431500) && (in_stack_0000000c == _UNK_0043152c)) {
      iVar4 = in_stack_00000010[1];
      iVar2 = *in_stack_00000010;
      FUN_000986b8();
      for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
        *(char *)(iStack_60 + iVar5) = (char)*(undefined2 *)(iVar2 + iVar5 * 2);
      }
      (*pcVar1)();
      goto LAB_0043133c;
    }
  }
  else if (uVar3 == _UNK_00431508) {
    if (in_stack_0000000c == PTR_DAT_00431514) {
      (*_UNK_004314fc)();
      goto LAB_0043133c;
    }
  }
  else if ((uVar3 == _UNK_00431504) && (in_stack_0000000c == PTR_DAT_0043150c)) {
    iVar4 = in_stack_00000010[1];
    iVar2 = *in_stack_00000010;
    FUN_000986b8();
    for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
      *(undefined1 *)(iStack_60 + iVar5) = *(undefined1 *)(iVar2 + iVar5);
    }
    (*pcVar1)();
    goto LAB_0043133c;
  }
  FUN_001386c4();
  uVar6 = FUN_00095b00();
  iVar2 = extraout_r2;
  iVar4 = extraout_r3;
  do {
    iVar5 = (int)((ulonglong)uVar6 >> 0x20);
    iStack_60 = (int)uVar6;
    *(char *)(iStack_60 + iVar4) = (char)*(undefined2 *)(iVar2 + iVar4 * 2);
    iVar4 = iVar4 + 1;
LAB_004313a4:
    uVar6 = CONCAT44(iVar5,iStack_60);
  } while (iVar4 < iVar5);
  (*pcVar1)();
LAB_0043133c:
                    /* WARNING: Could not recover jumptable at 0x0043133c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_string).Encode.func1 @ 0043155c (size 460) */

void k3c_internal_pkg_msgproto___PT_string__Encode_func1(void)

{
  int *piVar1;
  int *piVar2;
  int extraout_r1;
  int *extraout_r1_00;
  uint extraout_r2;
  uint uVar3;
  int *extraout_r3;
  int iVar4;
  uint uVar5;
  int unaff_r7;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  int iStack_28;
  uint uStack_24;
  uint uStack_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x431724;
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r7 + 4);
  if (0xff < in_stack_00000008) {
    FUN_00020ce0();
    k3c_internal_pkg_logger_Panicf();
  }
  uVar3 = piVar1[1] + 1;
  iVar4 = *piVar1;
  piVar2 = piVar1;
  if ((uint)piVar1[2] < uVar3) {
    FUN_000987f4();
    piVar1[2] = uStack_20;
    iVar4 = iStack_28;
    uVar3 = uStack_24;
    if (*(int *)PTR_DAT_00431738 != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *extraout_r3;
      iVar4 = extraout_r1;
      uVar3 = extraout_r2;
      piVar2 = extraout_r3;
    }
    *piVar2 = iVar4;
  }
  piVar2[1] = uVar3;
  *(char *)(iVar4 + (uVar3 - 1)) = (char)in_stack_00000008;
  uVar3 = piVar2[2];
  uVar5 = piVar2[1] + in_stack_00000008;
  iVar4 = *piVar2;
  if ((uint)piVar2[2] < (uint)(piVar2[1] + in_stack_00000008)) {
    FUN_000987f4();
    uVar3 = uStack_20;
    uVar5 = uStack_24;
    iVar4 = iStack_28;
  }
  FUN_0009e3a4();
  piVar1[1] = uVar5;
  piVar1[2] = uVar3;
  if (*(int *)PTR_DAT_00431738 != 0) {
    FUN_0009db64();
    *unaff_r8 = iVar4;
    unaff_r8[1] = *extraout_r1_00;
    piVar1 = extraout_r1_00;
  }
  *piVar1 = iVar4;
                    /* WARNING: Could not recover jumptable at 0x00431718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_string).Parse @ 0043173c (size 244) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto___PT_string__Parse(undefined4 param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      uVar3 = *(uint *)((int)register0x00000054 + 0xc);
      uVar2 = *(uint *)((int)register0x00000054 + 0x14);
      uVar8 = uVar3 == uVar2;
      if (uVar2 < uVar3) {
        iVar4 = *(int *)((int)register0x00000054 + 8);
        bVar1 = *(byte *)(iVar4 + uVar2);
        uVar5 = uVar2 + bVar1 + 1;
        if ((int)uVar3 <= (int)uVar5) {
          *(int *)((int)register0x00000054 + -0x14) = iVar4;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          FUN_0008f820();
          *(undefined4 *)((int)register0x00000054 + 0x18) = _UNK_00431834;
          *(undefined4 *)((int)register0x00000054 + 0x1c) =
               *(undefined4 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00431804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x18))();
          return;
        }
        uVar3 = *(uint *)((int)register0x00000054 + 0x10);
        uVar8 = uVar3 == uVar5;
        if (uVar5 <= uVar3) {
          uVar6 = uVar2 + 1;
          uVar8 = uVar6 == uVar5;
          if (uVar6 <= uVar5) {
            *(uint *)((int)register0x00000054 + -4) = uVar5;
            *(uint *)((int)register0x00000054 + -0x14) =
                 iVar4 + (uVar6 & (int)(1 - (uVar3 - uVar2)) >> 0x1f);
            *(uint *)((int)register0x00000054 + -0x10) = (uint)bVar1;
            *(uint *)((int)register0x00000054 + -0xc) = (uVar3 - uVar2) + -1;
            FUN_0008f820();
            *(undefined4 *)((int)register0x00000054 + 0x18) = _UNK_00431834;
            *(undefined4 *)((int)register0x00000054 + 0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + 0x20) =
                 *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x004317d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x18))();
            return;
          }
          uVar2 = FUN_0009dc34(uVar6,uVar5);
        }
        FUN_0009dc14(uVar2,uVar5);
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x43182c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*PT_string).Get_max_length @ 00431838 (size 16) */

void k3c_internal_pkg_msgproto___PT_string__Get_max_length(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00431844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_progmem_buffer).Encode @ 00431848 (size 72) */

void k3c_internal_pkg_msgproto___PT_progmem_buffer__Encode(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x43188c;
    FUN_0009bf64();
  }
  k3c_internal_pkg_msgproto___PT_string__Encode();
                    /* WARNING: Could not recover jumptable at 0x00431880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_progmem_buffer).Parse @ 00431890 (size 236) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto___PT_progmem_buffer__Parse(undefined4 param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      uVar4 = *(uint *)((int)register0x00000054 + 0xc);
      uVar2 = *(uint *)((int)register0x00000054 + 0x14);
      uVar10 = uVar4 == uVar2;
      if (uVar2 < uVar4) {
        iVar6 = *(int *)((int)register0x00000054 + 8);
        bVar1 = *(byte *)(iVar6 + uVar2);
        uVar7 = uVar2 + bVar1 + 1;
        if ((int)uVar4 <= (int)uVar7) {
          *(int *)((int)register0x00000054 + -0x14) = iVar6;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          FUN_0008f820();
          uVar3 = *(undefined4 *)((int)register0x00000054 + -8);
          uVar5 = 0;
LAB_00431940:
          *(undefined4 *)((int)register0x00000054 + 0x18) = _UNK_00431980;
          *(undefined4 *)((int)register0x00000054 + 0x1c) = uVar3;
          *(undefined4 *)((int)register0x00000054 + 0x20) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00431950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x18))();
          return;
        }
        uVar4 = *(uint *)((int)register0x00000054 + 0x10);
        uVar10 = uVar4 == uVar7;
        if (uVar7 <= uVar4) {
          uVar8 = uVar2 + 1;
          uVar10 = uVar8 == uVar7;
          if (uVar8 <= uVar7) {
            *(uint *)((int)register0x00000054 + -4) = uVar7;
            *(uint *)((int)register0x00000054 + -0x14) =
                 iVar6 + (uVar8 & (int)(1 - (uVar4 - uVar2)) >> 0x1f);
            *(uint *)((int)register0x00000054 + -0x10) = (uint)bVar1;
            *(uint *)((int)register0x00000054 + -0xc) = (uVar4 - uVar2) + -1;
            FUN_0008f820();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -8);
            uVar5 = *(undefined4 *)((int)register0x00000054 + -4);
            goto LAB_00431940;
          }
          uVar2 = FUN_0009dc34(uVar8,uVar7);
        }
        FUN_0009dc14(uVar2,uVar7);
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x431978;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*PT_buffer).Encode @ 00431984 (size 72) */

void k3c_internal_pkg_msgproto___PT_buffer__Encode(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4319c8;
    FUN_0009bf64();
  }
  k3c_internal_pkg_msgproto___PT_string__Encode();
                    /* WARNING: Could not recover jumptable at 0x004319bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_buffer).Parse @ 004319cc (size 236) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto___PT_buffer__Parse(undefined4 param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_lr;
      uVar4 = *(uint *)((int)register0x00000054 + 0xc);
      uVar2 = *(uint *)((int)register0x00000054 + 0x14);
      uVar10 = uVar4 == uVar2;
      if (uVar2 < uVar4) {
        iVar6 = *(int *)((int)register0x00000054 + 8);
        bVar1 = *(byte *)(iVar6 + uVar2);
        uVar7 = uVar2 + bVar1 + 1;
        if ((int)uVar4 <= (int)uVar7) {
          *(int *)((int)register0x00000054 + -0x14) = iVar6;
          *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xc) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          FUN_0008f820();
          uVar3 = *(undefined4 *)((int)register0x00000054 + -8);
          uVar5 = 0;
LAB_00431a7c:
          *(undefined4 *)((int)register0x00000054 + 0x18) = _UNK_00431abc;
          *(undefined4 *)((int)register0x00000054 + 0x1c) = uVar3;
          *(undefined4 *)((int)register0x00000054 + 0x20) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00431a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x18))();
          return;
        }
        uVar4 = *(uint *)((int)register0x00000054 + 0x10);
        uVar10 = uVar4 == uVar7;
        if (uVar7 <= uVar4) {
          uVar8 = uVar2 + 1;
          uVar10 = uVar8 == uVar7;
          if (uVar8 <= uVar7) {
            *(uint *)((int)register0x00000054 + -4) = uVar7;
            *(uint *)((int)register0x00000054 + -0x14) =
                 iVar6 + (uVar8 & (int)(1 - (uVar4 - uVar2)) >> 0x1f);
            *(uint *)((int)register0x00000054 + -0x10) = (uint)bVar1;
            *(uint *)((int)register0x00000054 + -0xc) = (uVar4 - uVar2) + -1;
            FUN_0008f820();
            uVar3 = *(undefined4 *)((int)register0x00000054 + -8);
            uVar5 = *(undefined4 *)((int)register0x00000054 + -4);
            goto LAB_00431a7c;
          }
          uVar2 = FUN_0009dc34(uVar8,uVar7);
        }
        FUN_0009dc14(uVar2,uVar7);
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x18);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x431ab4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.NewEnumeration_error @ 00431ac0 (size 296) */

void k3c_internal_pkg_msgproto_NewEnumeration_error(void)

{
  undefined4 *puVar1;
  undefined4 extraout_r3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 *in_stack_00000014;
  undefined4 *puStack_2c;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined *apuStack_14 [2];
  undefined *puStack_c;
  undefined4 *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x431be4;
    FUN_0009bf64();
  }
  FUN_00022cf8();
  puStack_2c[3] = in_stack_00000008;
  if (*(int *)PTR_DAT_00431bf0 != 0) {
    puStack_2c = (undefined4 *)FUN_0009db64();
    *unaff_r8 = in_stack_00000004;
    unaff_r8[1] = in_stack_0000000c;
  }
  puStack_2c[2] = in_stack_00000004;
  puStack_2c[5] = in_stack_00000010;
  puStack_2c[4] = in_stack_0000000c;
  puStack_4 = puStack_2c;
  FUN_0009df04(0,apuStack_14);
  FUN_0008f77c();
  apuStack_14[0] = PTR_DAT_00431bf4;
  FUN_0008f77c();
  puStack_c = PTR_DAT_00431bf4;
  FUN_001386c4();
  puVar1 = puStack_4;
  *puStack_4 = uStack_1c;
  if (*(int *)PTR_DAT_00431bf0 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r3;
    unaff_r8[1] = puVar1[1];
    uStack_18 = extraout_r3;
  }
  puVar1[1] = uStack_18;
  in_stack_00000014 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00431bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*Enumeration_error).Get_enum_params @ 00431bfc (size 40) */

void k3c_internal_pkg_msgproto___Enumeration_error__Get_enum_params(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 8);
  uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0xc);
  uStack00000010 = *(undefined4 *)(in_stack_00000004 + 0x10);
  uStack00000014 = *(undefined4 *)(in_stack_00000004 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x00431c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*Enumeration_error).Enumeration_error @ 00431c24 (size 156) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto___Enumeration_error__Enumeration_error(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 auStack_10 [2];
  undefined4 uStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x431cbc;
    FUN_0009bf64();
  }
  FUN_0009df04(0,auStack_10);
  FUN_0008f77c();
  auStack_10[0] = _UNK_00431cc4;
  FUN_0008f77c();
  uStack_8 = _UNK_00431cc4;
  k3c_internal_pkg_logger_Errorf();
                    /* WARNING: Could not recover jumptable at 0x00431cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.NewEnumeration @ 00431ccc (size 752) */

void k3c_internal_pkg_msgproto_NewEnumeration(undefined4 param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  bool bVar9;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x68);
      *(undefined4 *)((int)register0x00000054 + -0x68) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00431fc0;
      FUN_00022cf8();
      bVar9 = *(int *)((int)register0x00000054 + 4) == 0;
      if (!bVar9) {
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x60);
        *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00431fc4;
        *(int *)((int)register0x00000054 + -0x60) = *(int *)((int)register0x00000054 + 4);
        FUN_00020dac();
        iVar4 = *(int *)((int)register0x00000054 + -4);
        *(undefined4 *)(iVar4 + 4) = *(undefined4 *)((int)register0x00000054 + -0x5c);
        if (*(int *)PTR_DAT_00431fc8 == 0) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + 8);
        }
        else {
          FUN_0009db64();
          uVar1 = *(undefined4 *)((int)register0x00000054 + 8);
          *unaff_r8 = uVar1;
          unaff_r8[1] = *(undefined4 *)(extraout_r1 + 8);
          iVar4 = extraout_r1;
        }
        *(undefined4 *)(iVar4 + 8) = uVar1;
        *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00431fcc;
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + 4);
        FUN_00020dac();
        pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x5c) + 0x14);
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + 8);
        (*pcVar2)();
        iVar4 = *(int *)((int)register0x00000054 + -4);
        *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)((int)register0x00000054 + -0x60);
        *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)((int)register0x00000054 + 0x10);
        if (*(int *)PTR_DAT_00431fc8 == 0) {
          uVar1 = *(undefined4 *)((int)register0x00000054 + 0xc);
          uVar6 = *(undefined4 *)((int)register0x00000054 + 0x14);
        }
        else {
          FUN_0009db84();
          uVar1 = *(undefined4 *)((int)register0x00000054 + 0xc);
          *unaff_r8 = uVar1;
          unaff_r8[1] = *(undefined4 *)(extraout_r1_00 + 0x10);
          uVar6 = *(undefined4 *)((int)register0x00000054 + 0x14);
          unaff_r8[2] = uVar6;
          unaff_r8[3] = *(undefined4 *)(extraout_r1_00 + 0x18);
          iVar4 = extraout_r1_00;
        }
        *(undefined4 *)(iVar4 + 0x10) = uVar1;
        *(undefined4 *)(iVar4 + 0x18) = uVar6;
        FUN_000908bc();
        uVar1 = *(undefined4 *)((int)register0x00000054 + -100);
        if (*(int *)PTR_DAT_00431fc8 == 0) {
          iVar4 = *(int *)((int)register0x00000054 + -4);
        }
        else {
          FUN_0009db64();
          *unaff_r8 = extraout_r1_01;
          iVar4 = *(int *)((int)register0x00000054 + -4);
          unaff_r8[1] = *(undefined4 *)(iVar4 + 0x1c);
          uVar1 = extraout_r1_01;
        }
        *(undefined4 *)(iVar4 + 0x1c) = uVar1;
        FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x34));
        *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00431fd0;
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        *(undefined1 **)((int)register0x00000054 + -0x5c) =
             (undefined1 *)((int)register0x00000054 + -0x34);
        FUN_00091764();
        while (puVar3 = *(undefined4 **)((int)register0x00000054 + -0x34),
              puVar3 != (undefined4 *)0x0) {
          puVar7 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x30);
          uVar6 = *puVar3;
          uVar1 = puVar3[1];
          puVar5 = (undefined8 *)(*(undefined4 **)((int)register0x00000054 + -0x30))[1];
          if (puVar7 == PTR_DAT_00431fd4) {
            *(undefined4 *)((int)register0x00000054 + -0x50) = uVar1;
            *(undefined8 **)((int)register0x00000054 + -0x40) = puVar5;
            *(undefined **)((int)register0x00000054 + -0x54) = puVar7;
            *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar6;
            *(undefined4 *)((int)register0x00000054 + -0x44) = *(undefined4 *)puVar5;
            *(undefined4 *)((int)register0x00000054 + -100) = uVar6;
            *(undefined4 *)((int)register0x00000054 + -0x60) = uVar1;
            FUN_0008f77c();
            uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00431fd8;
            *(undefined4 *)((int)register0x00000054 + -0x60) = uVar1;
            *(undefined4 *)((int)register0x00000054 + -0x5c) =
                 *(undefined4 *)((int)register0x00000054 + -0x44);
            FUN_00092908();
            puVar3 = *(undefined4 **)((int)register0x00000054 + -0x58);
            *puVar3 = PTR_DAT_00431fdc;
            if (*(int *)PTR_DAT_00431fc8 == 0) {
              uVar1 = *(undefined4 *)((int)register0x00000054 + -0x38);
            }
            else {
              puVar3 = (undefined4 *)FUN_0009db64();
              uVar1 = *(undefined4 *)((int)register0x00000054 + -0x38);
              *unaff_r8 = uVar1;
              unaff_r8[1] = puVar3[1];
            }
            puVar3[1] = uVar1;
            uVar1 = *(undefined4 *)((int)register0x00000054 + -0x50);
            puVar5 = *(undefined8 **)((int)register0x00000054 + -0x40);
            puVar7 = *(undefined **)((int)register0x00000054 + -0x54);
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x3c);
          }
          if (puVar7 == PTR_DAT_00431fe0) {
            *(undefined8 *)((int)register0x00000054 + -0x4c) = *puVar5;
            *(undefined4 *)((int)register0x00000054 + -100) = uVar6;
            *(undefined4 *)((int)register0x00000054 + -0x60) = uVar1;
            FUN_0008f77c();
            uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -4) + 0x1c);
            *(undefined4 *)((int)register0x00000054 + -0x38) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00431fd8;
            *(undefined4 *)((int)register0x00000054 + -0x60) = uVar1;
            *(int *)((int)register0x00000054 + -0x5c) =
                 (int)(longlong)*(double *)((int)register0x00000054 + -0x4c);
            FUN_00092908();
            puVar3 = *(undefined4 **)((int)register0x00000054 + -0x58);
            *puVar3 = PTR_DAT_00431fdc;
            if (*(int *)PTR_DAT_00431fc8 == 0) {
              uVar1 = *(undefined4 *)((int)register0x00000054 + -0x38);
            }
            else {
              puVar3 = (undefined4 *)FUN_0009db64();
              uVar1 = *(undefined4 *)((int)register0x00000054 + -0x38);
              *unaff_r8 = uVar1;
              unaff_r8[1] = puVar3[1];
            }
            puVar3[1] = uVar1;
          }
          *(undefined1 **)((int)register0x00000054 + -100) =
               (undefined1 *)((int)register0x00000054 + -0x34);
          FUN_000919c8();
        }
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -4);
        return;
      }
      *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00431fe4;
      param_1 = FUN_00020b18();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x68);
      if (bVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x431fb8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*Enumeration).Encode @ 00431fe8 (size 352) */

void k3c_internal_pkg_msgproto___Enumeration__Encode(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int unaff_r10;
  undefined1 *puVar5;
  undefined4 unaff_lr;
  undefined1 uVar6;
  undefined8 uVar7;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar5 = (undefined1 *)((int)register0x00000054 + -0x2c);
      *(undefined4 *)((int)register0x00000054 + -0x2c) = unaff_lr;
      uVar7 = CONCAT44(PTR_DAT_0043214c,*(undefined **)((int)register0x00000054 + 0xc));
      uVar6 = 0;
      if (*(undefined **)((int)register0x00000054 + 0xc) == PTR_DAT_0043214c) {
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x18);
        uVar2 = **(undefined4 **)((int)register0x00000054 + 0x10);
        uVar4 = (*(undefined4 **)((int)register0x00000054 + 0x10))[1];
        *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_00432150;
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x20) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar4;
        FUN_00093560();
        uVar6 = *(char *)((int)register0x00000054 + -0x14) == '\0';
        if (!(bool)uVar6) {
          uVar2 = **(undefined4 **)((int)register0x00000054 + -0x18);
          uVar1 = (*(undefined4 **)((int)register0x00000054 + -0x18))[1];
          pcVar3 = *(code **)(*(int *)(*(int *)((int)register0x00000054 + 4) + 4) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x28) =
               *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 8);
          *(undefined4 *)((int)register0x00000054 + -0x24) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x20) = uVar2;
          *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar1;
          (*pcVar3)();
                    /* WARNING: Could not recover jumptable at 0x00432074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((int)register0x00000054 + -0x2c))();
          return;
        }
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x10));
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar1;
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0043214c;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_00432154;
        *(undefined4 *)((int)register0x00000054 + -0x24) = 0x29;
        *(undefined1 **)((int)register0x00000054 + -0x20) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x18) = 2;
        k3c_internal_pkg_logger_Errorf();
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x14);
        uVar4 = **(undefined4 **)((int)register0x00000054 + 0x10);
        uVar2 = (*(undefined4 **)((int)register0x00000054 + 0x10))[1];
        *(undefined4 *)((int)register0x00000054 + -0x28) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x20) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar2;
        k3c_internal_pkg_msgproto_NewEnumeration_error();
        *(undefined **)((int)register0x00000054 + -0x28) = PTR_DAT_00432158;
        *(undefined4 *)((int)register0x00000054 + -0x24) =
             *(undefined4 *)((int)register0x00000054 + -0x18);
        uVar7 = FUN_00095b00();
      }
      *(undefined8 *)((int)register0x00000054 + -0x28) = uVar7;
      *(undefined **)((int)register0x00000054 + -0x20) = PTR_DAT_0043215c;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x2c);
      if ((bool)uVar6) {
        register0x00000054 = (BADSPACEBASE *)puVar5;
      }
    }
    unaff_lr = 0x432144;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*Enumeration).Parse @ 00432160 (size 268) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto___Enumeration__Parse(void)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int *in_stack_00000010;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  undefined1 *in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined1 auStack_8 [8];
  
  while (piVar1 = in_stack_00000010, &stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x432268;
    FUN_0009bf64();
  }
  (**(code **)(*(int *)(in_stack_00000004 + 4) + 0x18))();
  k3c_internal_pkg_util_cast_ToInt64();
  FUN_00024fd0();
  iVar3 = *piVar1;
  puVar2 = (undefined1 *)piVar1[1];
  if (iVar3 == 0) {
    puVar2 = auStack_8;
    FUN_0013b72c();
    FUN_0008f77c();
    iVar3 = _UNK_00432278;
  }
  in_stack_00000018 = iVar3;
  in_stack_0000001c = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0043225c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*Enumeration).GetIs_dynamic_string @ 0043227c (size 16) */

void k3c_internal_pkg_msgproto___Enumeration__GetIs_dynamic_string(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(in_stack_00000004 + 1);
                    /* WARNING: Could not recover jumptable at 0x00432288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*Enumeration).Get_max_length @ 0043228c (size 16) */

void k3c_internal_pkg_msgproto___Enumeration__Get_max_length(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x00432298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.Lookup_params @ 0043229c (size 1388) */

/* WARNING: Removing unreachable block (ram,0x0043235c) */

void k3c_internal_pkg_msgproto_Lookup_params(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined *puVar5;
  uint extraout_r1;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r3;
  uint uVar9;
  undefined4 uVar10;
  undefined *extraout_r3_00;
  int *piVar11;
  undefined *puVar12;
  char cVar13;
  uint uVar14;
  undefined *puVar15;
  int iVar16;
  undefined4 uVar17;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar18;
  undefined4 unaff_lr;
  undefined1 uVar19;
  
code_r0x0043229c:
  if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x50)) {
    puVar18 = (undefined1 *)((int)register0x00000054 + -0xd0);
    *(undefined4 *)((int)register0x00000054 + -0xd0) = unaff_lr;
    *(undefined4 *)((int)register0x00000054 + -0xcc) = *(undefined4 *)((int)register0x00000054 + 4);
    *(undefined4 *)((int)register0x00000054 + -200) = *(undefined4 *)((int)register0x00000054 + 8);
    *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0043280c;
    *(undefined4 *)((int)register0x00000054 + -0xc0) = 1;
    *(undefined4 *)((int)register0x00000054 + -0xbc) = 0;
    *(undefined4 *)((int)register0x00000054 + -0xb8) = 0xffffffff;
    FUN_0014f168();
    iVar1 = *(int *)((int)register0x00000054 + -0xb0);
    uVar19 = iVar1 == 1;
    if (iVar1 != 0) {
      iVar6 = *(int *)((int)register0x00000054 + -0xb4) +
              (1 - *(int *)((int)register0x00000054 + -0xac) >> 0x1f & 8U);
      *(int *)((int)register0x00000054 + -4) = iVar6;
      iVar1 = iVar1 + -1;
      *(int *)((int)register0x00000054 + -0x5c) = iVar1;
      uVar4 = 0;
      piVar11 = (int *)((int)register0x00000054 + -100);
      uVar14 = 0;
      for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
        iVar16 = *(int *)(iVar6 + iVar2 * 8 + 4);
        uVar17 = *(undefined4 *)(iVar6 + iVar2 * 8);
        if (iVar16 != 0) {
          *(int *)((int)register0x00000054 + -0x60) = iVar2;
          *(int **)((int)register0x00000054 + -0x40) = piVar11;
          *(uint *)((int)register0x00000054 + -0x68) = uVar4;
          *(uint *)((int)register0x00000054 + -100) = uVar14 + 1;
          *(undefined4 *)((int)register0x00000054 + -0xcc) = uVar17;
          *(int *)((int)register0x00000054 + -200) = iVar16;
          *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_00432810;
          *(undefined4 *)((int)register0x00000054 + -0xc0) = 1;
          *(undefined4 *)((int)register0x00000054 + -0xbc) = 0;
          *(undefined4 *)((int)register0x00000054 + -0xb8) = 0xffffffff;
          FUN_0014f168(uVar14 + 1);
          iVar1 = *(int *)((int)register0x00000054 + -0xb4);
          iVar2 = *(int *)((int)register0x00000054 + -0xb0);
          iVar6 = *(int *)((int)register0x00000054 + -0xac);
          uVar4 = *(uint *)((int)register0x00000054 + -0x68);
          uVar14 = *(uint *)((int)register0x00000054 + -100);
          if (uVar4 < uVar14) {
            *(int *)((int)register0x00000054 + -0x88) = iVar2;
            *(int *)((int)register0x00000054 + -0x58) = iVar1;
            *(int *)((int)register0x00000054 + -0x84) = iVar6;
            *(undefined4 *)((int)register0x00000054 + -0xcc) =
                 *(undefined4 *)((int)register0x00000054 + -0x40);
            *(uint *)((int)register0x00000054 + -200) = uVar14;
            *(uint *)((int)register0x00000054 + -0xc4) = uVar4;
            *(undefined4 *)((int)register0x00000054 + -0xc0) = 1;
            *(undefined **)((int)register0x00000054 + -0xbc) = PTR_DAT_00432814;
            FUN_000987f4();
            piVar11 = *(int **)((int)register0x00000054 + -0xb8);
            uVar14 = *(uint *)((int)register0x00000054 + -0xb4);
            uVar4 = *(uint *)((int)register0x00000054 + -0xb0);
            iVar6 = *(int *)((int)register0x00000054 + -0x84);
            iVar1 = *(int *)((int)register0x00000054 + -0x58);
            iVar2 = *(int *)((int)register0x00000054 + -0x88);
          }
          else {
            piVar11 = *(int **)((int)register0x00000054 + -0x40);
          }
          piVar11[uVar14 * 3 + -2] = iVar2;
          piVar11[uVar14 * 3 + -1] = iVar6;
          if (*(int *)PTR_DAT_00432818 != 0) {
            iVar1 = FUN_0009db64();
            *unaff_r8 = iVar1;
            unaff_r8[1] = piVar11[uVar14 * 3 + -3];
            uVar4 = extraout_r3;
          }
          piVar11[uVar14 * 3 + -3] = iVar1;
          iVar2 = *(int *)((int)register0x00000054 + -0x60);
          iVar6 = *(int *)((int)register0x00000054 + -4);
          iVar1 = *(int *)((int)register0x00000054 + -0x5c);
        }
      }
      uVar4 = 0;
      uVar7 = 0;
      puVar15 = PTR_DAT_0043281c;
      do {
        if ((int)uVar14 < 1) {
          *(undefined **)((int)register0x00000054 + 0x10) = puVar15;
          *(uint *)((int)register0x00000054 + 0x14) = uVar7;
          *(uint *)((int)register0x00000054 + 0x18) = uVar4;
          return;
        }
        uVar9 = piVar11[1];
        if (uVar9 != 0) {
          uVar19 = uVar9 == 1;
          if (uVar9 < 2) goto LAB_004327e0;
          *(uint *)((int)register0x00000054 + -0x5c) = uVar14;
          *(uint *)((int)register0x00000054 + -0x7c) = uVar7;
          *(int **)((int)register0x00000054 + -8) = piVar11;
          *(undefined **)((int)register0x00000054 + -0x50) = puVar15;
          *(uint *)((int)register0x00000054 + -0x78) = uVar4;
          puVar3 = (undefined4 *)*piVar11;
          uVar17 = puVar3[2];
          uVar8 = puVar3[3];
          uVar10 = *(undefined4 *)PTR_DAT_00432820;
          puVar15 = (undefined *)puVar3[1];
          *(undefined **)((int)register0x00000054 + -0x74) = puVar15;
          *(undefined4 *)((int)register0x00000054 + -0x4c) = *puVar3;
          *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_00432824;
          *(undefined4 *)((int)register0x00000054 + -200) = uVar10;
          *(undefined4 *)((int)register0x00000054 + -0xc4) = uVar17;
          *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar8;
          FUN_00025f60();
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               **(undefined4 **)((int)register0x00000054 + -0xbc);
          *(undefined4 *)((int)register0x00000054 + -0x54) =
               (*(undefined4 **)((int)register0x00000054 + -0xbc))[1];
          FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x3c));
          *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_00432824;
          *(undefined4 *)((int)register0x00000054 + -200) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          puVar12 = (undefined *)((int)register0x00000054 + -0x3c);
          *(undefined **)((int)register0x00000054 + -0xc4) = puVar12;
          FUN_00091764();
          iVar1 = *(int *)((int)register0x00000054 + -0x74);
          while (puVar3 = *(undefined4 **)((int)register0x00000054 + -0x3c),
                puVar3 != (undefined4 *)0x0) {
            iVar2 = puVar3[1];
            *(int *)((int)register0x00000054 + -0x6c) = iVar2;
            uVar17 = *puVar3;
            *(undefined4 *)((int)register0x00000054 + -0x44) = uVar17;
            puVar12 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x38);
            *(undefined **)((int)register0x00000054 + -0x70) = puVar12;
            uVar8 = (*(undefined4 **)((int)register0x00000054 + -0x38))[1];
            *(undefined4 *)((int)register0x00000054 + -0x48) = uVar8;
            if (iVar2 == iVar1) {
              *(undefined4 *)((int)register0x00000054 + -0xcc) =
                   *(undefined4 *)((int)register0x00000054 + -0x4c);
              *(undefined4 *)((int)register0x00000054 + -200) = uVar17;
              *(int *)((int)register0x00000054 + -0xc4) = iVar1;
              FUN_00018250();
              cVar13 = *(char *)((int)register0x00000054 + -0xc0);
              uVar17 = *(undefined4 *)((int)register0x00000054 + -0x44);
              iVar2 = *(int *)((int)register0x00000054 + -0x6c);
              uVar8 = *(undefined4 *)((int)register0x00000054 + -0x48);
              puVar12 = *(undefined **)((int)register0x00000054 + -0x70);
            }
            else {
              cVar13 = '\0';
            }
            if (cVar13 == '\0') {
              *(undefined1 **)((int)register0x00000054 + -0xcc) =
                   (undefined1 *)((int)register0x00000054 + -0xa8);
              *(undefined **)((int)register0x00000054 + -200) = PTR_DAT_00432834;
              *(undefined4 *)((int)register0x00000054 + -0xc4) = 1;
              *(undefined4 *)((int)register0x00000054 + -0xc0) = uVar17;
              *(int *)((int)register0x00000054 + -0xbc) = iVar2;
              FUN_0007636c();
              iVar1 = *(int *)((int)register0x00000054 + -0xb4);
              uVar4 = *(uint *)((int)register0x00000054 + -0x74);
              if ((int)uVar4 < iVar1) {
                cVar13 = '\0';
              }
              else {
                uVar14 = uVar4 - iVar1;
                uVar19 = uVar4 == uVar14;
                if (uVar4 < uVar14) goto LAB_004327d8;
                iVar2 = uVar4 - uVar14;
                if (iVar1 == iVar2) {
                  *(uint *)((int)register0x00000054 + -0xcc) =
                       *(int *)((int)register0x00000054 + -0x4c) + (uVar14 & -iVar2 >> 0x1f);
                  *(undefined4 *)((int)register0x00000054 + -200) =
                       *(undefined4 *)((int)register0x00000054 + -0xb8);
                  *(int *)((int)register0x00000054 + -0xc4) = iVar2;
                  FUN_00018250();
                  cVar13 = *(char *)((int)register0x00000054 + -0xc0);
                }
                else {
                  cVar13 = '\0';
                }
              }
              uVar17 = *(undefined4 *)((int)register0x00000054 + -0x44);
              iVar2 = *(int *)((int)register0x00000054 + -0x6c);
              uVar8 = *(undefined4 *)((int)register0x00000054 + -0x48);
              puVar12 = *(undefined **)((int)register0x00000054 + -0x70);
            }
            else {
              cVar13 = '\x01';
            }
            puVar15 = PTR_DAT_00432824;
            if (cVar13 != '\0') {
              uVar19 = puVar12 == PTR_DAT_00432824;
              if (!(bool)uVar19) goto LAB_004327c4;
              *(undefined4 *)((int)register0x00000054 + -0xcc) =
                   *(undefined4 *)((int)register0x00000054 + -0x80);
              *(undefined4 *)((int)register0x00000054 + -200) =
                   *(undefined4 *)((int)register0x00000054 + -0x54);
              *(undefined4 *)((int)register0x00000054 + -0xc4) = uVar17;
              *(int *)((int)register0x00000054 + -0xc0) = iVar2;
              *(undefined4 *)((int)register0x00000054 + -0xbc) = uVar8;
              k3c_internal_pkg_msgproto_NewEnumeration();
              uVar17 = *(undefined4 *)((int)register0x00000054 + -0xb8);
              puVar5 = PTR_DAT_00432828;
              goto LAB_00432568;
            }
            *(undefined1 **)((int)register0x00000054 + -0xcc) =
                 (undefined1 *)((int)register0x00000054 + -0x3c);
            FUN_000919c8();
            iVar1 = *(int *)((int)register0x00000054 + -0x74);
            puVar15 = (undefined *)0x0;
          }
          puVar5 = *(undefined **)((int)register0x00000054 + -0x80);
          uVar17 = *(undefined4 *)((int)register0x00000054 + -0x54);
LAB_00432568:
          uVar19 = puVar5 == (undefined *)0x0;
          if ((bool)uVar19) goto LAB_004327b8;
          *(undefined4 *)((int)register0x00000054 + -0x54) = uVar17;
          *(int *)((int)register0x00000054 + -0x60) = *(int *)((int)register0x00000054 + -0x7c) + 1;
          *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_0043282c;
          *(undefined **)((int)register0x00000054 + -200) = puVar5;
          FUN_00020dac();
          uVar17 = *(undefined4 *)((int)register0x00000054 + -0xc4);
          uVar4 = *(uint *)((int)register0x00000054 + -0x78);
          uVar7 = *(uint *)((int)register0x00000054 + -0x60);
          if (uVar4 < uVar7) {
            *(undefined4 *)((int)register0x00000054 + -0xc) = uVar17;
            *(undefined4 *)((int)register0x00000054 + -0xcc) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            *(uint *)((int)register0x00000054 + -200) = uVar7;
            *(uint *)((int)register0x00000054 + -0xc4) = uVar4;
            *(undefined4 *)((int)register0x00000054 + -0xc0) = 1;
            *(undefined **)((int)register0x00000054 + -0xbc) = PTR_DAT_00432830;
            FUN_000987f4();
            puVar12 = *(undefined **)((int)register0x00000054 + -0xb8);
            uVar7 = *(uint *)((int)register0x00000054 + -0xb4);
            uVar4 = *(uint *)((int)register0x00000054 + -0xb0);
            uVar17 = *(undefined4 *)((int)register0x00000054 + -0xc);
          }
          else {
            puVar12 = *(undefined **)((int)register0x00000054 + -0x50);
          }
          iVar1 = uVar7 - 1;
          *(undefined4 *)(puVar12 + iVar1 * 0x10 + 4) =
               *(undefined4 *)((int)register0x00000054 + -0x74);
          *(undefined4 *)(puVar12 + iVar1 * 0x10 + 8) = uVar17;
          if (*(int *)PTR_DAT_00432818 == 0) {
            iVar2 = *(int *)((int)register0x00000054 + -0x4c);
            iVar6 = *(int *)((int)register0x00000054 + -0x54);
            puVar15 = puVar12;
          }
          else {
            FUN_0009db84();
            iVar2 = *(int *)((int)register0x00000054 + -0x4c);
            *unaff_r8 = iVar2;
            unaff_r8[1] = *(int *)(extraout_r3_00 + iVar1 * 0x10);
            iVar6 = *(int *)((int)register0x00000054 + -0x54);
            unaff_r8[2] = iVar6;
            unaff_r8[3] = *(int *)(puVar12 + iVar1 * 0x10 + 0xc);
            uVar4 = extraout_r1;
            uVar7 = extraout_r2;
            puVar15 = extraout_r3_00;
          }
          *(int *)(puVar15 + iVar1 * 0x10) = iVar2;
          *(int *)(puVar12 + iVar1 * 0x10 + 0xc) = iVar6;
          piVar11 = *(int **)((int)register0x00000054 + -8);
          uVar14 = *(uint *)((int)register0x00000054 + -0x5c);
        }
        piVar11 = piVar11 + 3;
        uVar14 = uVar14 - 1;
      } while( true );
    }
    goto LAB_004327ec;
  }
  goto LAB_004327fc;
LAB_004327b8:
  *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_00432838;
  FUN_00020b18();
LAB_004327c4:
  *(undefined **)((int)register0x00000054 + -0xcc) = puVar12;
  *(undefined **)((int)register0x00000054 + -200) = puVar15;
  *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_0043283c;
  FUN_000209b4();
  uVar14 = extraout_r2_00;
LAB_004327d8:
  FUN_0009dc34(uVar14);
LAB_004327e0:
  FUN_0009dbd4(1,1);
LAB_004327ec:
  param_1 = FUN_0009dc34(1,0);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xd0);
  if ((bool)uVar19) {
    register0x00000054 = (BADSPACEBASE *)puVar18;
  }
LAB_004327fc:
  unaff_lr = 0x432804;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x0043229c;
}



/* k3c/internal/pkg/msgproto.Lookup_output_params @ 00432840 (size 812) */

void k3c_internal_pkg_msgproto_Lookup_output_params(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *extraout_r2;
  uint uVar8;
  int *extraout_r3;
  uint extraout_r3_00;
  int *piVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  int *unaff_r8;
  int unaff_r10;
  undefined1 *puVar13;
  undefined4 unaff_lr;
  undefined1 uVar14;
  bool bVar15;
  undefined8 uVar16;
  
code_r0x00432840:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar13 = (undefined1 *)((int)register0x00000054 + -0x68);
    *(undefined4 *)((int)register0x00000054 + -0x68) = unaff_lr;
    iVar2 = *(int *)((int)register0x00000054 + 8);
    iVar4 = *(int *)((int)register0x00000054 + 4);
    piVar7 = (int *)0x0;
    piVar9 = (int *)0x0;
    uVar14 = 0;
    puVar10 = PTR_DAT_00432b70;
LAB_00432890:
    *(undefined1 *)((int)register0x00000054 + -0x3e) = uVar14;
    *(undefined **)((int)register0x00000054 + -0x14) = puVar10;
    *(int **)((int)register0x00000054 + -0x34) = piVar9;
    *(int **)((int)register0x00000054 + -0x30) = piVar7;
    *(int *)((int)register0x00000054 + -0x10) = iVar4;
    *(int *)((int)register0x00000054 + -0x2c) = iVar2;
    *(int *)((int)register0x00000054 + -100) = iVar4;
    *(int *)((int)register0x00000054 + -0x60) = iVar2;
    *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00432b74;
    *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
    internal_stringslite_Index();
    uVar3 = *(uint *)((int)register0x00000054 + -0x54);
    if ((int)uVar3 < 0) {
      *(undefined4 *)((int)register0x00000054 + 0xc) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + 0x10) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + 0x14) =
           *(undefined4 *)((int)register0x00000054 + -0x30);
      return;
    }
    uVar8 = uVar3 + 1;
    uVar5 = *(uint *)((int)register0x00000054 + -0x2c);
    uVar14 = uVar5 == uVar8;
    if ((bool)uVar14 || (int)uVar5 < (int)uVar8) {
      iVar4 = *(int *)((int)register0x00000054 + -0x10);
    }
    else {
      if (uVar5 <= uVar8) goto LAB_00432b54;
      iVar4 = *(int *)((int)register0x00000054 + -0x10);
      if (*(char *)(iVar4 + uVar8) == '%') {
        bVar15 = uVar8 <= uVar5;
        piVar9 = *(int **)((int)register0x00000054 + -0x34);
        piVar7 = *(int **)((int)register0x00000054 + -0x30);
        puVar10 = *(undefined **)((int)register0x00000054 + -0x14);
        uVar14 = *(undefined1 *)((int)register0x00000054 + -0x3e);
        goto LAB_00432924;
      }
    }
    *(uint *)((int)register0x00000054 + -0x38) = uVar3;
    *(uint *)((int)register0x00000054 + -0x1c) = uVar8;
    iVar2 = 0;
    do {
      uVar16 = CONCAT44(uVar5,uVar3);
      if (iVar2 < 4) {
        uVar11 = iVar2 + uVar3 + 1;
        uVar14 = uVar5 == uVar11;
        if (uVar11 <= uVar5) {
          uVar14 = uVar3 == uVar11;
          if (uVar3 <= uVar11) {
            uVar6 = *(undefined4 *)PTR_DAT_00432b78;
            *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00432b7c;
            *(undefined4 *)((int)register0x00000054 + -0x60) = uVar6;
            *(int *)((int)register0x00000054 + -0x20) = iVar2 + 1;
            *(uint *)((int)register0x00000054 + -0x5c) = iVar4 + (uVar3 & -1 - iVar2 >> 0x1f);
            *(int *)((int)register0x00000054 + -0x58) = iVar2 + 1;
            FUN_00025f60();
            iVar4 = **(int **)((int)register0x00000054 + -0x54);
            iVar2 = (*(int **)((int)register0x00000054 + -0x54))[1];
            if (iVar4 != 0) {
              piVar9 = (int *)(*(int *)((int)register0x00000054 + -0x34) + 1);
              piVar7 = *(int **)((int)register0x00000054 + -0x30);
              if (piVar7 < piVar9) {
                *(int *)((int)register0x00000054 + -0x3c) = iVar4;
                *(int *)((int)register0x00000054 + -0x18) = iVar2;
                *(undefined4 *)((int)register0x00000054 + -100) =
                     *(undefined4 *)((int)register0x00000054 + -0x14);
                *(int **)((int)register0x00000054 + -0x60) = piVar9;
                *(int **)((int)register0x00000054 + -0x5c) = piVar7;
                *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
                *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00432b80;
                FUN_000987f4();
                puVar10 = *(undefined **)((int)register0x00000054 + -0x50);
                piVar9 = *(int **)((int)register0x00000054 + -0x4c);
                piVar7 = *(int **)((int)register0x00000054 + -0x48);
                iVar4 = *(int *)((int)register0x00000054 + -0x3c);
                iVar2 = *(int *)((int)register0x00000054 + -0x18);
              }
              else {
                puVar10 = *(undefined **)((int)register0x00000054 + -0x14);
              }
              iVar12 = (int)piVar9 + -1;
              *(int *)(puVar10 + iVar12 * 8) = iVar4;
              if (*(int *)PTR_DAT_00432b84 != 0) {
                iVar2 = FUN_0009db64();
                *unaff_r8 = iVar2;
                unaff_r8[1] = *(int *)(puVar10 + iVar12 * 8 + 4);
                piVar9 = extraout_r2;
                piVar7 = extraout_r3;
              }
              *(int *)(puVar10 + iVar12 * 8 + 4) = iVar2;
              cVar1 = '\x01';
              goto LAB_00432a7c;
            }
            goto LAB_00432950;
          }
          uVar16 = FUN_0009dc34(uVar3,uVar11,iVar2,uVar8);
        }
        FUN_0009dbf4((int)uVar16,uVar11,(int)((ulonglong)uVar16 >> 0x20));
        uVar8 = extraout_r3_00;
        goto LAB_00432b54;
      }
      cVar1 = *(char *)((int)register0x00000054 + -0x3e);
      piVar9 = *(int **)((int)register0x00000054 + -0x34);
      piVar7 = *(int **)((int)register0x00000054 + -0x30);
      puVar10 = *(undefined **)((int)register0x00000054 + -0x14);
LAB_00432a7c:
      if (cVar1 == '\0') {
        uVar5 = *(uint *)((int)register0x00000054 + -0x2c);
        uVar8 = *(uint *)((int)register0x00000054 + -0x1c);
        bVar15 = uVar8 <= uVar5;
        uVar14 = 0;
      }
      else {
        *(char *)((int)register0x00000054 + -0x3d) = cVar1;
        *(undefined **)((int)register0x00000054 + -0xc) = puVar10;
        *(int **)((int)register0x00000054 + -0x24) = piVar9;
        *(int **)((int)register0x00000054 + -0x28) = piVar7;
        *(undefined4 *)((int)register0x00000054 + -8) = 0;
        *(undefined4 *)((int)register0x00000054 + -4) = 0;
        *(undefined4 *)((int)register0x00000054 + -100) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x60) =
             *(undefined4 *)((int)register0x00000054 + 8);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00432b88;
        *(undefined4 *)((int)register0x00000054 + -4) =
             *(undefined4 *)((int)register0x00000054 + -0x5c);
        *(undefined **)((int)register0x00000054 + -100) = PTR_DAT_00432b8c;
        *(undefined4 *)((int)register0x00000054 + -0x60) = 0x1e;
        *(undefined1 **)((int)register0x00000054 + -0x5c) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x58) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x54) = 1;
        k3c_internal_pkg_logger_Panicf();
        uVar5 = *(uint *)((int)register0x00000054 + -0x2c);
        uVar8 = *(uint *)((int)register0x00000054 + -0x1c);
        bVar15 = uVar8 <= uVar5;
        piVar9 = *(int **)((int)register0x00000054 + -0x24);
        piVar7 = *(int **)((int)register0x00000054 + -0x28);
        puVar10 = *(undefined **)((int)register0x00000054 + -0xc);
        uVar14 = *(undefined1 *)((int)register0x00000054 + -0x3d);
      }
      uVar3 = *(uint *)((int)register0x00000054 + -0x38);
      iVar4 = *(int *)((int)register0x00000054 + -0x10);
      unaff_r8 = piVar7;
LAB_00432924:
      if (bVar15) goto LAB_0043286c;
      FUN_0009dc34(uVar8);
LAB_00432950:
      iVar4 = *(int *)((int)register0x00000054 + -0x10);
      uVar5 = *(uint *)((int)register0x00000054 + -0x2c);
      uVar3 = *(uint *)((int)register0x00000054 + -0x38);
      iVar2 = *(int *)((int)register0x00000054 + -0x20);
      uVar8 = *(uint *)((int)register0x00000054 + -0x1c);
    } while( true );
  }
  goto LAB_00432b60;
LAB_00432b54:
  param_1 = FUN_0009dbd4(uVar8);
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x68);
  if ((bool)uVar14) {
    register0x00000054 = (BADSPACEBASE *)puVar13;
  }
LAB_00432b60:
  unaff_lr = 0x432b68;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x00432840;
LAB_0043286c:
  unaff_r8 = (int *)(uVar5 - uVar3);
  iVar4 = iVar4 + (uVar8 & 1 - (int)unaff_r8 >> 0x1f);
  iVar2 = (int)unaff_r8 + -1;
  goto LAB_00432890;
}



/* k3c/internal/pkg/msgproto.Convert_msg_format @ 00432b90 (size 256) */

void k3c_internal_pkg_msgproto_Convert_msg_format(void)

{
  int iVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined *local_28;
  undefined4 local_24;
  undefined *local_20;
  undefined4 local_1c;
  undefined *local_18;
  undefined4 local_14;
  undefined *local_10;
  undefined4 local_c;
  undefined *local_8;
  undefined4 local_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0009dedc(0,&local_38);
  local_34 = 2;
  local_38 = DAT_00432c94;
  local_2c = 2;
  local_30 = DAT_00432c98;
  local_24 = 3;
  local_28 = PTR_DAT_00432c9c;
  local_1c = 3;
  local_20 = PTR_DAT_00432ca0;
  local_14 = 2;
  local_18 = PTR_DAT_00432ca4;
  local_c = 4;
  local_10 = PTR_s____s_msgPWD_PATHicmpigmpftpspop3_00820821_0x421_00432ca8;
  local_4 = 3;
  local_8 = PTR_DAT_00432cac;
  iVar1 = 0;
  while (iVar1 < 7) {
    iVar1 = iVar1 + 1;
    FUN_00151e6c(iVar1);
  }
  return;
}



/* k3c/internal/pkg/msgproto.NewMessageFormat @ 00432cb4 (size 1056) */

void k3c_internal_pkg_msgproto_NewMessageFormat(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int *piVar5;
  int extraout_r1_02;
  int iVar6;
  int extraout_r2;
  int extraout_r2_00;
  int extraout_r2_01;
  uint extraout_r2_02;
  int iVar7;
  int *piVar8;
  int *extraout_r3;
  int *extraout_r3_00;
  int iVar9;
  int extraout_r3_01;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *unaff_r8;
  int *piVar14;
  int unaff_r10;
  undefined1 *puVar15;
  undefined4 unaff_lr;
  bool bVar16;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar15 = (undefined1 *)((int)register0x00000054 + -0x44);
      *(undefined4 *)((int)register0x00000054 + -0x44) = unaff_lr;
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_004330d8;
      FUN_00022cf8();
      iVar1 = *(int *)((int)register0x00000054 + -0x3c);
      *(int *)((int)register0x00000054 + -4) = iVar1;
      uVar4 = *(uint *)(iVar1 + 0x30);
      iVar6 = *(int *)(iVar1 + 0x2c);
      iVar7 = *(int *)((int)register0x00000054 + 8);
      uVar10 = iVar6 + iVar7;
      iVar1 = *(int *)(iVar1 + 0x28);
      if (uVar4 < uVar10) {
        *(int *)((int)register0x00000054 + -0x14) = iVar6;
        *(int *)((int)register0x00000054 + -0x40) = iVar1;
        *(uint *)((int)register0x00000054 + -0x3c) = uVar10;
        *(uint *)((int)register0x00000054 + -0x38) = uVar4;
        *(int *)((int)register0x00000054 + -0x34) = iVar7;
        *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004330dc;
        FUN_000987f4();
        iVar1 = *(int *)((int)register0x00000054 + -0x2c);
        uVar10 = *(uint *)((int)register0x00000054 + -0x28);
        uVar4 = *(uint *)((int)register0x00000054 + -0x24);
        iVar6 = *(int *)((int)register0x00000054 + -0x14);
        iVar7 = *(int *)((int)register0x00000054 + 8);
      }
      *(uint *)((int)register0x00000054 + -0x14) = uVar4;
      *(uint *)((int)register0x00000054 + -0x18) = uVar10;
      *(int *)((int)register0x00000054 + -8) = iVar1;
      *(int *)((int)register0x00000054 + -0x40) = iVar1 + iVar6;
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(int *)((int)register0x00000054 + -0x38) = iVar7;
      FUN_0009e3a4();
      iVar1 = *(int *)((int)register0x00000054 + -4);
      *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)((int)register0x00000054 + -0x18);
      *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)((int)register0x00000054 + -0x14);
      if (*(int *)PTR_DAT_004330e0 == 0) {
        iVar6 = *(int *)((int)register0x00000054 + -8);
        iVar7 = *(int *)((int)register0x00000054 + 0x10);
      }
      else {
        FUN_0009db84();
        iVar6 = *(int *)((int)register0x00000054 + -8);
        *unaff_r8 = iVar6;
        unaff_r8[1] = *(int *)(extraout_r1 + 0x28);
        iVar7 = *(int *)((int)register0x00000054 + 0x10);
        unaff_r8[2] = iVar7;
        unaff_r8[3] = *(int *)(extraout_r1 + 0xc);
        iVar1 = extraout_r1;
      }
      *(int *)(iVar1 + 0x28) = iVar6;
      uVar2 = *(undefined4 *)((int)register0x00000054 + 0x14);
      *(undefined4 *)(iVar1 + 0x10) = uVar2;
      *(int *)(iVar1 + 0xc) = iVar7;
      *(int *)((int)register0x00000054 + -0x40) = iVar7;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar2;
      k3c_internal_pkg_msgproto_Convert_msg_format();
      iVar1 = *(int *)((int)register0x00000054 + -0x38);
      iVar6 = *(int *)((int)register0x00000054 + -4);
      *(undefined4 *)(iVar6 + 0x38) = *(undefined4 *)((int)register0x00000054 + -0x34);
      if (*(int *)PTR_DAT_004330e0 != 0) {
        FUN_0009db64();
        *unaff_r8 = extraout_r1_00;
        unaff_r8[1] = *(int *)(extraout_r2 + 0x34);
        iVar1 = extraout_r1_00;
        iVar6 = extraout_r2;
      }
      *(int *)(iVar6 + 0x34) = iVar1;
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x3c) =
           *(undefined4 *)((int)register0x00000054 + 0x14);
      *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004330e4;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x2c) = 0xffffffff;
      FUN_0014f168();
      bVar16 = *(int *)((int)register0x00000054 + -0x24) == 0;
      if (!bVar16) {
        iVar6 = **(int **)((int)register0x00000054 + -0x28);
        iVar1 = *(int *)((int)register0x00000054 + -4);
        *(int *)(iVar1 + 0x18) = (*(int **)((int)register0x00000054 + -0x28))[1];
        if (*(int *)PTR_DAT_004330e0 != 0) {
          iVar6 = FUN_0009db64();
          *unaff_r8 = iVar6;
          unaff_r8[1] = *(int *)(extraout_r2_00 + 0x14);
          iVar1 = extraout_r2_00;
        }
        *(int *)(iVar1 + 0x14) = iVar6;
        *(undefined4 *)((int)register0x00000054 + -0x40) =
             *(undefined4 *)((int)register0x00000054 + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x3c) =
             *(undefined4 *)((int)register0x00000054 + 0x14);
        *(undefined4 *)((int)register0x00000054 + -0x38) =
             *(undefined4 *)((int)register0x00000054 + 0x18);
        k3c_internal_pkg_msgproto_Lookup_params();
        iVar6 = *(int *)((int)register0x00000054 + -0x2c);
        iVar1 = *(int *)((int)register0x00000054 + -0x34);
        piVar8 = *(int **)((int)register0x00000054 + -4);
        piVar8[8] = *(int *)((int)register0x00000054 + -0x30);
        piVar8[9] = iVar6;
        if (*(int *)PTR_DAT_004330e0 != 0) {
          FUN_0009db74();
          *unaff_r8 = extraout_r2_01;
          unaff_r8[1] = extraout_r3[7];
          unaff_r8[2] = *extraout_r3;
          iVar1 = extraout_r2_01;
          piVar8 = extraout_r3;
        }
        piVar8[7] = iVar1;
        piVar8[1] = 0;
        piVar8[2] = 0;
        *piVar8 = (int)PTR_DAT_004330e8;
        FUN_000908bc();
        iVar1 = *(int *)((int)register0x00000054 + -0x40);
        if (*(int *)PTR_DAT_004330e0 == 0) {
          piVar8 = *(int **)((int)register0x00000054 + -4);
        }
        else {
          FUN_0009db64();
          *unaff_r8 = extraout_r1_01;
          piVar8 = *(int **)((int)register0x00000054 + -4);
          unaff_r8[1] = piVar8[0xf];
          iVar1 = extraout_r1_01;
        }
        piVar8[0xf] = iVar1;
        piVar5 = (int *)piVar8[7];
        iVar1 = piVar8[8];
        while (0 < iVar1) {
          *(int *)((int)register0x00000054 + -0x14) = iVar1;
          *(int **)((int)register0x00000054 + -0xc) = piVar5;
          uVar10 = piVar8[2];
          uVar4 = piVar8[1] + 1;
          iVar7 = piVar5[2];
          iVar12 = piVar5[3];
          *(int *)((int)register0x00000054 + -8) = iVar12;
          iVar13 = *piVar5;
          piVar14 = (int *)piVar5[1];
          *(int **)((int)register0x00000054 + -0x18) = piVar14;
          iVar6 = *piVar8;
          if (uVar10 < uVar4) {
            *(int *)((int)register0x00000054 + -0x10) = iVar13;
            *(int *)((int)register0x00000054 + -0x1c) = iVar7;
            *(int *)((int)register0x00000054 + -0x40) = iVar6;
            *(uint *)((int)register0x00000054 + -0x3c) = uVar4;
            *(uint *)((int)register0x00000054 + -0x38) = uVar10;
            *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
            *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004330ec;
            FUN_000987f4();
            iVar6 = *(int *)((int)register0x00000054 + -0x2c);
            uVar4 = *(uint *)((int)register0x00000054 + -0x28);
            piVar8 = *(int **)((int)register0x00000054 + -4);
            piVar8[2] = *(int *)((int)register0x00000054 + -0x24);
            if (*(int *)PTR_DAT_004330e0 != 0) {
              FUN_0009db64();
              *piVar14 = extraout_r1_02;
              piVar14[1] = *extraout_r3_00;
              iVar6 = extraout_r1_02;
              uVar4 = extraout_r2_02;
              piVar8 = extraout_r3_00;
            }
            *piVar8 = iVar6;
            iVar7 = *(int *)((int)register0x00000054 + -0x1c);
            iVar12 = *(int *)((int)register0x00000054 + -8);
            iVar13 = *(int *)((int)register0x00000054 + -0x10);
            piVar14 = *(int **)((int)register0x00000054 + -0x18);
            piVar5 = *(int **)((int)register0x00000054 + -0xc);
            iVar1 = *(int *)((int)register0x00000054 + -0x14);
          }
          piVar8[1] = uVar4;
          iVar9 = uVar4 - 1;
          iVar11 = iVar6 + iVar9 * 0x10;
          *(int **)(iVar11 + 4) = piVar14;
          *(int *)(iVar11 + 8) = iVar7;
          if (*(int *)PTR_DAT_004330e0 != 0) {
            piVar8 = (int *)FUN_0009db84(piVar8,piVar5,iVar1);
            *piVar14 = iVar13;
            piVar14[1] = *(int *)(iVar6 + extraout_r3_01 * 0x10);
            piVar14[2] = iVar12;
            piVar14[3] = *(int *)(iVar11 + 0xc);
            piVar14 = *(int **)((int)register0x00000054 + -0x18);
            iVar9 = extraout_r3_01;
          }
          *(int *)(iVar6 + iVar9 * 0x10) = iVar13;
          *(int *)(iVar11 + 0xc) = iVar12;
          uVar2 = 0;
          if (iVar7 != 0) {
            uVar2 = *(undefined4 *)(iVar7 + 4);
          }
          *(undefined4 *)((int)register0x00000054 + -0x10) = uVar2;
          iVar1 = piVar8[0xf];
          *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_004330f0;
          *(int *)((int)register0x00000054 + -0x3c) = iVar1;
          *(int *)((int)register0x00000054 + -0x38) = iVar13;
          *(int **)((int)register0x00000054 + -0x34) = piVar14;
          FUN_00093a08();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x30);
          *puVar3 = *(undefined4 *)((int)register0x00000054 + -0x10);
          if (*(int *)PTR_DAT_004330e0 == 0) {
            iVar1 = *(int *)((int)register0x00000054 + -8);
          }
          else {
            puVar3 = (undefined4 *)FUN_0009db64();
            iVar1 = *(int *)((int)register0x00000054 + -8);
            *piVar14 = iVar1;
            piVar14[1] = puVar3[1];
          }
          puVar3[1] = iVar1;
          piVar5 = (int *)(*(int *)((int)register0x00000054 + -0xc) + 0x10);
          piVar8 = *(int **)((int)register0x00000054 + -4);
          iVar1 = *(int *)((int)register0x00000054 + -0x14) + -1;
        }
        *(int **)((int)register0x00000054 + 0x1c) = piVar8;
        return;
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x44);
      if (bVar16) {
        register0x00000054 = (BADSPACEBASE *)puVar15;
      }
    }
    unaff_lr = 0x4330d0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*MessageFormat).Encode @ 004330f4 (size 1880) */

void k3c_internal_pkg_msgproto___MessageFormat__Encode(undefined4 param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *piVar16;
  code *pcVar17;
  undefined4 *puVar18;
  undefined4 *extraout_r1;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  undefined4 *puVar26;
  undefined4 uVar27;
  byte *pbVar28;
  undefined4 *unaff_r8;
  undefined4 *puVar29;
  int unaff_r10;
  undefined1 *puVar30;
  undefined4 unaff_lr;
  undefined1 uVar31;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar30 = (undefined1 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x48) = unaff_lr;
      *(undefined4 **)((int)register0x00000054 + -0x44) = DAT_00433850;
      FUN_00022cf8();
      iVar20 = DAT_00433854;
      piVar16 = *(int **)((int)register0x00000054 + -0x40);
      *(int **)((int)register0x00000054 + -4) = piVar16;
      *piVar16 = DAT_00433854;
      uVar19 = piVar16[2];
      iVar22 = piVar16[1];
      iVar24 = *(int *)(*(int *)((int)register0x00000054 + 4) + 0x2c);
      uVar25 = iVar22 + iVar24;
      uVar27 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x28);
      iVar23 = DAT_00433854;
      if (uVar19 < uVar25) {
        *(int *)((int)register0x00000054 + -0x18) = iVar24;
        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar27;
        *(int *)((int)register0x00000054 + -0x1c) = iVar22;
        *(int *)((int)register0x00000054 + -0x44) = iVar20;
        *(uint *)((int)register0x00000054 + -0x40) = uVar25;
        *(uint *)((int)register0x00000054 + -0x3c) = uVar19;
        *(int *)((int)register0x00000054 + -0x38) = iVar24;
        *(undefined4 **)((int)register0x00000054 + -0x34) = DAT_00433858;
        FUN_000987f4();
        uVar25 = *(uint *)((int)register0x00000054 + -0x2c);
        uVar19 = *(uint *)((int)register0x00000054 + -0x28);
        iVar22 = *(int *)((int)register0x00000054 + -0x1c);
        iVar24 = *(int *)((int)register0x00000054 + -0x18);
        uVar27 = *(undefined4 *)((int)register0x00000054 + -0x10);
        iVar23 = *(int *)((int)register0x00000054 + -0x30);
      }
      *(uint *)((int)register0x00000054 + -0x18) = uVar19;
      *(uint *)((int)register0x00000054 + -0x1c) = uVar25;
      *(int *)((int)register0x00000054 + -0x10) = iVar23;
      *(int *)((int)register0x00000054 + -0x44) = iVar23 + iVar22;
      *(undefined4 *)((int)register0x00000054 + -0x40) = uVar27;
      *(int *)((int)register0x00000054 + -0x3c) = iVar24;
      FUN_0009e3a4();
      puVar18 = *(undefined4 **)((int)register0x00000054 + -4);
      puVar18[1] = *(undefined4 *)((int)register0x00000054 + -0x1c);
      puVar18[2] = *(undefined4 *)((int)register0x00000054 + -0x18);
      if (*DAT_0043385c == 0) {
        uVar27 = *(undefined4 *)((int)register0x00000054 + -0x10);
      }
      else {
        FUN_0009db64();
        uVar27 = *(undefined4 *)((int)register0x00000054 + -0x10);
        *unaff_r8 = uVar27;
        unaff_r8[1] = *extraout_r1;
        puVar18 = extraout_r1;
      }
      *puVar18 = uVar27;
      iVar23 = **(int **)((int)register0x00000054 + 4);
      iVar20 = (*(int **)((int)register0x00000054 + 4))[1];
      *(int *)((int)register0x00000054 + -0x18) = iVar20;
      uVar25 = *(uint *)((int)register0x00000054 + 0xc);
      iVar22 = *(int *)((int)register0x00000054 + 8);
      uVar19 = 0;
      while( true ) {
        puVar29 = DAT_004338d0;
        puVar15 = DAT_004338c8;
        puVar14 = DAT_004338c0;
        puVar13 = DAT_004338bc;
        puVar12 = DAT_004338b0;
        puVar11 = DAT_004338ac;
        puVar10 = DAT_004338a4;
        puVar9 = DAT_00433894;
        puVar8 = DAT_0043388c;
        puVar7 = DAT_00433888;
        puVar6 = DAT_00433878;
        puVar5 = DAT_00433874;
        puVar4 = DAT_0043386c;
        puVar3 = DAT_00433858;
        puVar2 = DAT_00433850;
        if (iVar20 <= (int)uVar19) {
          uVar21 = puVar18[1];
          uVar27 = puVar18[2];
          *(undefined4 *)((int)register0x00000054 + 0x14) = *puVar18;
          *(undefined4 *)((int)register0x00000054 + 0x18) = uVar21;
          *(undefined4 *)((int)register0x00000054 + 0x1c) = uVar27;
          return;
        }
        uVar31 = uVar25 == uVar19;
        if (uVar25 <= uVar19) goto LAB_00433834;
        puVar26 = *(undefined4 **)(iVar22 + uVar19 * 8);
        pbVar28 = *(byte **)(iVar22 + uVar19 * 8 + 4);
        if (puVar26 == (undefined4 *)0x0) break;
        *(uint *)((int)register0x00000054 + -0x24) = uVar19;
        *(int *)((int)register0x00000054 + -0x14) = iVar23;
        unaff_r8 = (undefined4 *)puVar26[2];
        iVar20 = *(int *)(iVar23 + 8);
        *(int *)((int)register0x00000054 + -0x20) = iVar20;
        uVar27 = *(undefined4 *)(iVar23 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x10) = uVar27;
        if (DAT_00433860 < unaff_r8) {
          if (DAT_00433898 < unaff_r8) {
            if (DAT_004338b4 < unaff_r8) {
              if (unaff_r8 == DAT_004338c4) {
                unaff_r8 = DAT_004338c8;
                if (puVar26 != DAT_004338c8) break;
                *(undefined2 *)((int)register0x00000054 + -0x44) = *(undefined2 *)pbVar28;
                FUN_00020c68();
                pcVar17 = *(code **)(*(int *)((int)register0x00000054 + -0x20) + 0xc);
                uVar27 = *(undefined4 *)((int)register0x00000054 + -0x40);
                *(undefined4 *)((int)register0x00000054 + -0x44) =
                     *(undefined4 *)((int)register0x00000054 + -0x10);
                *(undefined4 *)((int)register0x00000054 + -0x40) =
                     *(undefined4 *)((int)register0x00000054 + -4);
                *(undefined4 **)((int)register0x00000054 + -0x3c) = DAT_004338c8;
                *(undefined4 *)((int)register0x00000054 + -0x38) = uVar27;
                (*pcVar17)();
                puVar29 = puVar15;
              }
              else {
                if ((unaff_r8 != DAT_004338cc) || (unaff_r8 = DAT_004338d0, puVar26 != DAT_004338d0)
                   ) break;
                *(undefined4 *)((int)register0x00000054 + -0x44) = *(undefined4 *)pbVar28;
                FUN_00020ce0();
                pcVar17 = *(code **)(*(int *)((int)register0x00000054 + -0x20) + 0xc);
                uVar27 = *(undefined4 *)((int)register0x00000054 + -0x40);
                *(undefined4 *)((int)register0x00000054 + -0x44) =
                     *(undefined4 *)((int)register0x00000054 + -0x10);
                *(undefined4 *)((int)register0x00000054 + -0x40) =
                     *(undefined4 *)((int)register0x00000054 + -4);
                *(undefined4 **)((int)register0x00000054 + -0x3c) = DAT_004338d0;
                *(undefined4 *)((int)register0x00000054 + -0x38) = uVar27;
                (*pcVar17)();
              }
            }
            else if (unaff_r8 == DAT_004338b8) {
              unaff_r8 = DAT_004338bc;
              if (puVar26 != DAT_004338bc) break;
              *(undefined4 *)((int)register0x00000054 + -0x44) = *(undefined4 *)pbVar28;
              FUN_00020ce0();
              pcVar17 = *(code **)(*(int *)((int)register0x00000054 + -0x20) + 0xc);
              uVar27 = *(undefined4 *)((int)register0x00000054 + -0x40);
              *(undefined4 *)((int)register0x00000054 + -0x44) =
                   *(undefined4 *)((int)register0x00000054 + -0x10);
              *(undefined4 *)((int)register0x00000054 + -0x40) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(undefined4 **)((int)register0x00000054 + -0x3c) = DAT_004338bc;
              *(undefined4 *)((int)register0x00000054 + -0x38) = uVar27;
              (*pcVar17)();
              puVar29 = puVar13;
            }
            else {
              if ((unaff_r8 != DAT_004338b4) || (unaff_r8 = DAT_004338c0, puVar26 != DAT_004338c0))
              break;
              uVar27 = *(undefined4 *)(pbVar28 + 4);
              uVar21 = *(undefined4 *)(pbVar28 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x44) = *(undefined4 *)pbVar28;
              *(undefined4 *)((int)register0x00000054 + -0x40) = uVar27;
              *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar21;
              FUN_0008f820();
              pcVar17 = *(code **)(*(int *)((int)register0x00000054 + -0x20) + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x44) =
                   *(undefined4 *)((int)register0x00000054 + -0x10);
              *(undefined4 *)((int)register0x00000054 + -0x40) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(undefined4 **)((int)register0x00000054 + -0x3c) = DAT_004338c0;
              (*pcVar17)();
              puVar29 = puVar14;
            }
          }
          else if (DAT_0043389c < unaff_r8) {
            if (unaff_r8 == DAT_004338a8) {
              unaff_r8 = DAT_004338ac;
              if (puVar26 != DAT_004338ac) break;
              uVar27 = *(undefined4 *)(pbVar28 + 4);
              *(undefined4 *)((int)register0x00000054 + -0x44) = *(undefined4 *)pbVar28;
              *(undefined4 *)((int)register0x00000054 + -0x40) = uVar27;
              FUN_0008f6c0();
              pcVar17 = *(code **)(*(int *)((int)register0x00000054 + -0x20) + 0xc);
              uVar27 = *(undefined4 *)((int)register0x00000054 + -0x3c);
              *(undefined4 *)((int)register0x00000054 + -0x44) =
                   *(undefined4 *)((int)register0x00000054 + -0x10);
              *(undefined4 *)((int)register0x00000054 + -0x40) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(undefined4 **)((int)register0x00000054 + -0x3c) = DAT_004338ac;
              *(undefined4 *)((int)register0x00000054 + -0x38) = uVar27;
              (*pcVar17)();
              puVar29 = puVar11;
            }
            else {
              if ((unaff_r8 != DAT_00433898) || (unaff_r8 = DAT_004338b0, puVar26 != DAT_004338b0))
              break;
              uVar27 = *(undefined4 *)(pbVar28 + 4);
              uVar21 = *(undefined4 *)(pbVar28 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x44) = *(undefined4 *)pbVar28;
              *(undefined4 *)((int)register0x00000054 + -0x40) = uVar27;
              *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar21;
              FUN_0008f820();
              pcVar17 = *(code **)(*(int *)((int)register0x00000054 + -0x20) + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x44) =
                   *(undefined4 *)((int)register0x00000054 + -0x10);
              *(undefined4 *)((int)register0x00000054 + -0x40) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(undefined4 **)((int)register0x00000054 + -0x3c) = DAT_004338b0;
              (*pcVar17)();
              puVar29 = puVar12;
            }
          }
          else if (unaff_r8 == DAT_004338a0) {
            unaff_r8 = DAT_00433858;
            if (puVar26 != DAT_00433858) break;
            bVar1 = *pbVar28;
            pcVar17 = *(code **)(iVar20 + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x44) = uVar27;
            *(undefined4 **)((int)register0x00000054 + -0x40) = puVar18;
            *(undefined4 **)((int)register0x00000054 + -0x3c) = DAT_00433858;
            *(uint *)((int)register0x00000054 + -0x38) = DAT_0043387c + (uint)bVar1 * 8;
            (*pcVar17)();
            puVar29 = puVar3;
          }
          else {
            if ((unaff_r8 != DAT_0043389c) || (unaff_r8 = DAT_004338a4, puVar26 != DAT_004338a4))
            break;
            uVar27 = *(undefined4 *)(pbVar28 + 4);
            uVar21 = *(undefined4 *)(pbVar28 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x44) = *(undefined4 *)pbVar28;
            *(undefined4 *)((int)register0x00000054 + -0x40) = uVar27;
            *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar21;
            FUN_0008f820();
            pcVar17 = *(code **)(*(int *)((int)register0x00000054 + -0x20) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x44) =
                 *(undefined4 *)((int)register0x00000054 + -0x10);
            *(undefined4 *)((int)register0x00000054 + -0x40) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            *(undefined4 **)((int)register0x00000054 + -0x3c) = DAT_004338a4;
            (*pcVar17)();
            puVar29 = puVar10;
          }
        }
        else if (DAT_00433864 < unaff_r8) {
          if (DAT_00433880 < unaff_r8) {
            if (unaff_r8 == DAT_00433890) {
              unaff_r8 = DAT_00433850;
              if (puVar26 != DAT_00433850) break;
              uVar27 = *(undefined4 *)(pbVar28 + 4);
              uVar21 = *(undefined4 *)(pbVar28 + 8);
              *(undefined4 *)((int)register0x00000054 + -0x44) = *(undefined4 *)pbVar28;
              *(undefined4 *)((int)register0x00000054 + -0x40) = uVar27;
              *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar21;
              FUN_0008f820();
              pcVar17 = *(code **)(*(int *)((int)register0x00000054 + -0x20) + 0xc);
              *(undefined4 *)((int)register0x00000054 + -0x44) =
                   *(undefined4 *)((int)register0x00000054 + -0x10);
              *(undefined4 *)((int)register0x00000054 + -0x40) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(undefined4 **)((int)register0x00000054 + -0x3c) = DAT_00433850;
              (*pcVar17)();
              puVar29 = puVar2;
            }
            else {
              if ((unaff_r8 != DAT_00433860) || (unaff_r8 = DAT_00433894, puVar26 != DAT_00433894))
              break;
              uVar27 = *(undefined4 *)(pbVar28 + 4);
              *(undefined4 *)((int)register0x00000054 + -0x44) = *(undefined4 *)pbVar28;
              *(undefined4 *)((int)register0x00000054 + -0x40) = uVar27;
              FUN_0008f6c0();
              pcVar17 = *(code **)(*(int *)((int)register0x00000054 + -0x20) + 0xc);
              uVar27 = *(undefined4 *)((int)register0x00000054 + -0x3c);
              *(undefined4 *)((int)register0x00000054 + -0x44) =
                   *(undefined4 *)((int)register0x00000054 + -0x10);
              *(undefined4 *)((int)register0x00000054 + -0x40) =
                   *(undefined4 *)((int)register0x00000054 + -4);
              *(undefined4 **)((int)register0x00000054 + -0x3c) = DAT_00433894;
              *(undefined4 *)((int)register0x00000054 + -0x38) = uVar27;
              (*pcVar17)();
              puVar29 = puVar9;
            }
          }
          else if (unaff_r8 == DAT_00433884) {
            unaff_r8 = DAT_00433888;
            if (puVar26 != DAT_00433888) break;
            *(undefined4 *)((int)register0x00000054 + -0x44) = *(undefined4 *)pbVar28;
            FUN_00020ce0();
            pcVar17 = *(code **)(*(int *)((int)register0x00000054 + -0x20) + 0xc);
            uVar27 = *(undefined4 *)((int)register0x00000054 + -0x40);
            *(undefined4 *)((int)register0x00000054 + -0x44) =
                 *(undefined4 *)((int)register0x00000054 + -0x10);
            *(undefined4 *)((int)register0x00000054 + -0x40) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            *(undefined4 **)((int)register0x00000054 + -0x3c) = DAT_00433888;
            *(undefined4 *)((int)register0x00000054 + -0x38) = uVar27;
            (*pcVar17)();
            puVar29 = puVar7;
          }
          else {
            if ((unaff_r8 != DAT_00433880) || (unaff_r8 = DAT_0043388c, puVar26 != DAT_0043388c))
            break;
            uVar27 = *(undefined4 *)(pbVar28 + 4);
            uVar21 = *(undefined4 *)(pbVar28 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x44) = *(undefined4 *)pbVar28;
            *(undefined4 *)((int)register0x00000054 + -0x40) = uVar27;
            *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar21;
            FUN_0008f820();
            pcVar17 = *(code **)(*(int *)((int)register0x00000054 + -0x20) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x44) =
                 *(undefined4 *)((int)register0x00000054 + -0x10);
            *(undefined4 *)((int)register0x00000054 + -0x40) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            *(undefined4 **)((int)register0x00000054 + -0x3c) = DAT_0043388c;
            (*pcVar17)();
            puVar29 = puVar8;
          }
        }
        else if (unaff_r8 == DAT_00433868) {
          unaff_r8 = DAT_0043386c;
          if (puVar26 != DAT_0043386c) break;
          uVar27 = *(undefined4 *)(pbVar28 + 4);
          *(undefined4 *)((int)register0x00000054 + -0x44) = *(undefined4 *)pbVar28;
          *(undefined4 *)((int)register0x00000054 + -0x40) = uVar27;
          FUN_0008f77c();
          pcVar17 = *(code **)(*(int *)((int)register0x00000054 + -0x20) + 0xc);
          uVar27 = *(undefined4 *)((int)register0x00000054 + -0x3c);
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)((int)register0x00000054 + -4);
          *(undefined4 **)((int)register0x00000054 + -0x3c) = DAT_0043386c;
          *(undefined4 *)((int)register0x00000054 + -0x38) = uVar27;
          (*pcVar17)();
          puVar29 = puVar4;
        }
        else if (unaff_r8 == DAT_00433870) {
          unaff_r8 = DAT_00433874;
          if (puVar26 != DAT_00433874) break;
          uVar27 = *(undefined4 *)(pbVar28 + 4);
          uVar21 = *(undefined4 *)(pbVar28 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x44) = *(undefined4 *)pbVar28;
          *(undefined4 *)((int)register0x00000054 + -0x40) = uVar27;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar21;
          FUN_0008f820();
          pcVar17 = *(code **)(*(int *)((int)register0x00000054 + -0x20) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -0x10);
          *(undefined4 *)((int)register0x00000054 + -0x40) =
               *(undefined4 *)((int)register0x00000054 + -4);
          *(undefined4 **)((int)register0x00000054 + -0x3c) = DAT_00433874;
          (*pcVar17)();
          puVar29 = puVar5;
        }
        else {
          if ((unaff_r8 != DAT_00433864) || (unaff_r8 = DAT_00433878, puVar26 != DAT_00433878))
          break;
          bVar1 = *pbVar28;
          pcVar17 = *(code **)(iVar20 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x44) = uVar27;
          *(undefined4 **)((int)register0x00000054 + -0x40) = puVar18;
          *(undefined4 **)((int)register0x00000054 + -0x3c) = DAT_00433878;
          *(uint *)((int)register0x00000054 + -0x38) = DAT_0043387c + (uint)bVar1 * 8;
          (*pcVar17)();
          puVar29 = puVar6;
        }
        iVar23 = *(int *)((int)register0x00000054 + -0x14) + 0x10;
        uVar19 = *(int *)((int)register0x00000054 + -0x24) + 1;
        uVar25 = *(uint *)((int)register0x00000054 + 0xc);
        puVar18 = *(undefined4 **)((int)register0x00000054 + -4);
        iVar20 = *(int *)((int)register0x00000054 + -0x18);
        iVar22 = *(int *)((int)register0x00000054 + 8);
        unaff_r8 = puVar29;
      }
      *(undefined4 **)((int)register0x00000054 + -0xc) = puVar26;
      *(byte **)((int)register0x00000054 + -8) = pbVar28;
      *(undefined4 *)((int)register0x00000054 + -0x44) = DAT_004338d4;
      *(undefined4 *)((int)register0x00000054 + -0x40) = 0x1a;
      *(undefined1 **)((int)register0x00000054 + -0x3c) =
           (undefined1 *)((int)register0x00000054 + -0xc);
      *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
      FUN_001386c4();
      uVar31 = *(int *)((int)register0x00000054 + -0x30) == 0;
      uVar27 = 0;
      if (!(bool)uVar31) {
        uVar27 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x30) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0x44) = uVar27;
      *(undefined4 *)((int)register0x00000054 + -0x40) =
           *(undefined4 *)((int)register0x00000054 + -0x2c);
      uVar19 = FUN_00095b00();
LAB_00433834:
      param_1 = FUN_0009dbd4(uVar19,uVar25);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x48);
      if ((bool)uVar31) {
        register0x00000054 = (BADSPACEBASE *)puVar30;
      }
    }
    unaff_lr = 0x433848;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*MessageFormat).Encode_by_name @ 004338d8 (size 444) */

void k3c_internal_pkg_msgproto___MessageFormat__Encode_by_name(void)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *extraout_r1;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *unaff_r8;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 *local_34;
  undefined *local_24;
  uint local_20;
  uint local_1c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  *local_34 = PTR_DAT_00433a9c;
  uVar3 = local_34[2];
  uVar6 = local_34[1] + *(int *)(in_stack_00000004 + 0x2c);
  puVar2 = PTR_DAT_00433a9c;
  if (uVar3 < uVar6) {
    FUN_000987f4();
    puVar2 = local_24;
    uVar3 = local_1c;
    uVar6 = local_20;
  }
  FUN_0009e3a4();
  local_34[1] = uVar6;
  local_34[2] = uVar3;
  if (*(int *)PTR_DAT_00433aa4 != 0) {
    FUN_0009db64();
    *unaff_r8 = puVar2;
    unaff_r8[1] = *extraout_r1;
    local_34 = extraout_r1;
  }
  *local_34 = puVar2;
  iVar4 = *(int *)(in_stack_00000004 + 0x1c);
  for (iVar1 = *(int *)(in_stack_00000004 + 0x20); 0 < iVar1; iVar1 = iVar1 + -1) {
    iVar5 = *(int *)(iVar4 + 8);
    FUN_00025f60();
    (**(code **)(iVar5 + 0xc))();
    iVar4 = iVar4 + 0x10;
  }
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageFormat).Parse @ 00433aac (size 320) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto___MessageFormat__Parse(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 *in_stack_0000001c;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x433be8;
    FUN_0009bf64();
  }
  iVar3 = *(int *)(in_stack_00000004 + 0x2c);
  FUN_000908bc();
  iVar4 = *(int *)(in_stack_00000004 + 0x1c);
  puVar2 = (undefined4 *)(in_stack_00000014 + iVar3);
  for (iVar1 = *(int *)(in_stack_00000004 + 0x20); 0 < iVar1; iVar1 = iVar1 + -1) {
    (**(code **)(*(int *)(iVar4 + 8) + 0x18))();
    FUN_00093a08();
    *puVar2 = uStack_2c;
    if (*_UNK_00433bf4 != 0) {
      puVar2 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = uStack_28;
      unaff_r8[1] = puVar2[1];
    }
    puVar2[1] = uStack_28;
    iVar4 = iVar4 + 0x10;
    puVar2 = puStack_24;
  }
  in_stack_0000001c = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00433bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageFormat).Format_params @ 00433bf8 (size 588) */

void k3c_internal_pkg_msgproto___MessageFormat__Format_params(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint extraout_r2;
  int iVar5;
  int iVar6;
  int extraout_r3;
  int iVar7;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar8;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  char cStack_50;
  undefined **ppuStack_4c;
  int iStack_48;
  int iStack_40;
  uint uStack_3c;
  uint uStack_38;
  undefined *puStack_8;
  undefined **ppuStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x433e40;
    FUN_0009bf64();
  }
  uVar3 = *(uint *)(in_stack_00000004 + 0x20);
  FUN_000986b8();
  piVar4 = *(int **)(in_stack_00000004 + 0x1c);
  iVar7 = 0;
  for (iVar5 = *(int *)(in_stack_00000004 + 0x20); uVar1 = in_stack_00000008, 0 < iVar5;
      iVar5 = iVar5 + -1) {
    ppuStack_4c = (undefined **)*piVar4;
    iVar6 = piVar4[2];
    FUN_00025f60();
    (**(code **)(iVar6 + 0x10))();
    cStack_50 = (char)uVar1;
    if (cStack_50 != '\0') {
      puStack_8 = (undefined *)0x0;
      ppuStack_4 = (undefined **)0x0;
      FUN_0008f77c();
      puStack_8 = PTR_DAT_00433e50;
      ppuStack_4 = ppuStack_4c;
      FUN_0013b72c();
      ppuStack_4c = &puStack_8;
    }
    FUN_0008f77c();
    uVar2 = iVar7 + 1;
    if (uVar3 < uVar2) {
      FUN_000987f4();
      uVar2 = uStack_3c;
      uVar3 = uStack_38;
      iStack_48 = iStack_40;
    }
    uVar8 = CONCAT44(ppuStack_4c,uVar2);
    *(undefined **)(iStack_48 + (uVar2 - 1) * 8) = PTR_DAT_00433e50;
    iVar6 = iStack_48 + (uVar2 - 1) * 8;
    if (*(int *)PTR_DAT_00433e58 != 0) {
      uVar8 = FUN_0009db64();
      *unaff_r8 = (int)((ulonglong)uVar8 >> 0x20);
      unaff_r8[1] = *(undefined4 *)(iVar6 + 4);
      uVar3 = extraout_r2;
      iStack_48 = extraout_r3;
    }
    iVar7 = (int)uVar8;
    *(int *)(iVar6 + 4) = (int)((ulonglong)uVar8 >> 0x20);
    piVar4 = piVar4 + 4;
  }
  FUN_0013b72c();
                    /* WARNING: Could not recover jumptable at 0x00433e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageFormat).GetName @ 00433e5c (size 24) */

void k3c_internal_pkg_msgproto___MessageFormat__GetName(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x14);
  uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00433e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.NewOutputFormat @ 00433e74 (size 440) */

void k3c_internal_pkg_msgproto_NewOutputFormat(void)

{
  uint uVar1;
  int *extraout_r1;
  int *piVar2;
  int extraout_r1_00;
  int iVar3;
  int *extraout_r2;
  int extraout_r2_00;
  int iVar4;
  int *extraout_r3;
  uint uVar5;
  int *unaff_r8;
  int unaff_r10;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 in_stack_00000018;
  int *local_2c;
  int local_24;
  undefined *local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  uVar1 = local_2c[4];
  uVar5 = local_2c[3] + in_stack_00000008;
  iVar3 = local_2c[2];
  if ((uint)local_2c[4] < (uint)(local_2c[3] + in_stack_00000008)) {
    local_24 = in_stack_00000008;
    local_20 = PTR_DAT_00434034;
    FUN_000987f4();
    uVar1 = local_14;
    uVar5 = local_18;
    iVar3 = local_1c;
  }
  iVar4 = in_stack_00000008;
  FUN_0009e3a4();
  local_2c[3] = uVar5;
  local_2c[4] = uVar1;
  piVar2 = local_2c;
  if (*(int *)PTR_DAT_00434038 != 0) {
    FUN_0009db84();
    *unaff_r8 = iVar3;
    unaff_r8[1] = extraout_r1[2];
    unaff_r8[2] = in_stack_00000010;
    unaff_r8[3] = extraout_r1[10];
    piVar2 = extraout_r1;
  }
  piVar2[2] = iVar3;
  piVar2[0xb] = in_stack_00000014;
  piVar2[10] = in_stack_00000010;
  k3c_internal_pkg_msgproto_Convert_msg_format();
  local_2c[6] = local_24;
  iVar3 = iVar4;
  piVar2 = local_2c;
  if (*(int *)PTR_DAT_00434038 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = extraout_r2[5];
    iVar3 = extraout_r1_00;
    piVar2 = extraout_r2;
  }
  piVar2[5] = iVar3;
  k3c_internal_pkg_msgproto_Lookup_output_params();
  local_2c[8] = local_24;
  local_2c[9] = (int)local_20;
  if (*(int *)PTR_DAT_00434038 != 0) {
    FUN_0009db74();
    *unaff_r8 = extraout_r2_00;
    unaff_r8[1] = extraout_r3[7];
    unaff_r8[2] = *extraout_r3;
    iVar4 = extraout_r2_00;
    local_2c = extraout_r3;
  }
  local_2c[7] = iVar4;
  local_2c[1] = 7;
  *local_2c = (int)PTR_s__outputandroidwindowsopenbsdsola_008216f7_0xc29_0043403c;
  return;
}



/* k3c/internal/pkg/msgproto.(*OutputFormat).Parse @ 00434040 (size 724) */

void k3c_internal_pkg_msgproto___OutputFormat__Parse(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  uint extraout_r1;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_r2;
  int iVar7;
  uint extraout_r3;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar11;
  undefined4 unaff_lr;
  undefined1 uVar12;
  
code_r0x00434040:
  if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
    puVar11 = (undefined1 *)((int)register0x00000054 + -0x60);
    *(undefined4 *)((int)register0x00000054 + -0x60) = unaff_lr;
    iVar1 = *(int *)((int)register0x00000054 + 4);
    puVar4 = (undefined4 *)(*(int *)((int)register0x00000054 + 0x14) + *(int *)(iVar1 + 0xc));
    iVar5 = *(int *)(iVar1 + 0x20);
    *(int *)((int)register0x00000054 + -0x1c) = iVar5;
    iVar1 = *(int *)(iVar1 + 0x1c);
    *(int *)((int)register0x00000054 + -4) = iVar1;
    iVar7 = 0;
    uVar8 = 0;
    uVar10 = 0;
    puVar9 = PTR_DAT_00434318;
    do {
      *(undefined4 **)((int)register0x00000054 + -0x20) = puVar4;
      *(undefined **)((int)register0x00000054 + -0x10) = puVar9;
      *(uint *)((int)register0x00000054 + -0x2c) = uVar10;
      *(uint *)((int)register0x00000054 + -0x28) = uVar8;
      if (iVar5 <= iVar7) {
        FUN_000908bc();
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -0x5c);
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x54) =
             *(undefined4 *)((int)register0x00000054 + -0x28);
        FUN_0008f820();
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x50);
        *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00434330;
        *(undefined4 *)((int)register0x00000054 + -0x58) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined **)((int)register0x00000054 + -0x54) =
             PTR_s__msgPWD_PATHicmpigmpftpspop3smtp_00820821_0x425_00434334;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 4;
        FUN_00093a08();
        puVar4 = *(undefined4 **)((int)register0x00000054 + -0x4c);
        *puVar4 = PTR_DAT_00434338;
        if (*(int *)PTR_DAT_0043432c == 0) {
          uVar6 = *(undefined4 *)((int)register0x00000054 + -0xc);
        }
        else {
          puVar4 = (undefined4 *)FUN_0009db64();
          uVar6 = *(undefined4 *)((int)register0x00000054 + -0xc);
          *unaff_r8 = uVar6;
          unaff_r8[1] = puVar4[1];
        }
        puVar4[1] = uVar6;
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x20);
                    /* WARNING: Could not recover jumptable at 0x004342e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x60))();
        return;
      }
      iVar5 = *(int *)(iVar1 + iVar7 * 8);
      unaff_r8 = (undefined4 *)(iVar1 + iVar7 * 8);
      uVar12 = 1;
      if (iVar5 == 0) goto LAB_004342f8;
      *(int *)((int)register0x00000054 + -0x24) = iVar7;
      *(int *)((int)register0x00000054 + -0x34) = iVar5;
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r8[1];
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0043431c;
      *(int *)((int)register0x00000054 + -0x58) = iVar5;
      FUN_00020dac();
      pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x54) + 0x18);
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x50) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x4c) =
           *(undefined4 *)((int)register0x00000054 + -0x20);
      (*pcVar2)();
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + -0x48);
      *(undefined4 *)((int)register0x00000054 + -0x30) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + -0x44);
      *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_00434320;
      *(undefined4 *)((int)register0x00000054 + -0x58) =
           *(undefined4 *)((int)register0x00000054 + -0x34);
      FUN_00020dac();
      pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x54) + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x5c) =
           *(undefined4 *)((int)register0x00000054 + -0x14);
      (*pcVar2)();
      if (*(char *)((int)register0x00000054 + -0x58) == '\0') {
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x18);
        puVar3 = *(undefined **)((int)register0x00000054 + -0x38);
      }
      else {
        uVar12 = *(undefined **)((int)register0x00000054 + -0x38) == PTR_DAT_00434324;
        if (!(bool)uVar12) goto LAB_004342e4;
        uVar6 = (*(undefined4 **)((int)register0x00000054 + -0x18))[1];
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             **(undefined4 **)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x58) = uVar6;
        FUN_0008f77c();
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x54);
        puVar3 = PTR_DAT_00434324;
      }
      uVar10 = *(int *)((int)register0x00000054 + -0x2c) + 1;
      uVar8 = *(uint *)((int)register0x00000054 + -0x28);
      if (uVar8 < uVar10) {
        *(undefined **)((int)register0x00000054 + -0x38) = puVar3;
        *(undefined4 *)((int)register0x00000054 + -0x18) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x5c) =
             *(undefined4 *)((int)register0x00000054 + -0x10);
        *(uint *)((int)register0x00000054 + -0x58) = uVar10;
        *(uint *)((int)register0x00000054 + -0x54) = uVar8;
        *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
        *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00434328;
        FUN_000987f4();
        puVar9 = *(undefined **)((int)register0x00000054 + -0x48);
        uVar10 = *(uint *)((int)register0x00000054 + -0x44);
        uVar8 = *(uint *)((int)register0x00000054 + -0x40);
        puVar3 = *(undefined **)((int)register0x00000054 + -0x38);
        uVar6 = *(undefined4 *)((int)register0x00000054 + -0x18);
      }
      else {
        puVar9 = *(undefined **)((int)register0x00000054 + -0x10);
      }
      iVar1 = uVar10 - 1;
      *(undefined **)(puVar9 + iVar1 * 8) = puVar3;
      if (*(int *)PTR_DAT_0043432c != 0) {
        FUN_0009db64();
        *unaff_r8 = extraout_r2;
        unaff_r8[1] = *(undefined4 *)(puVar9 + iVar1 * 8 + 4);
        uVar10 = extraout_r1;
        uVar6 = extraout_r2;
        uVar8 = extraout_r3;
      }
      *(undefined4 *)(puVar9 + iVar1 * 8 + 4) = uVar6;
      iVar7 = *(int *)((int)register0x00000054 + -0x24) + 1;
      iVar1 = *(int *)((int)register0x00000054 + -4);
      iVar5 = *(int *)((int)register0x00000054 + -0x1c);
      puVar4 = *(undefined4 **)((int)register0x00000054 + -0x30);
      unaff_r8 = puVar4;
    } while( true );
  }
  goto LAB_00434308;
LAB_004342e4:
  *(undefined **)((int)register0x00000054 + -0x5c) =
       *(undefined **)((int)register0x00000054 + -0x38);
  *(undefined **)((int)register0x00000054 + -0x58) = PTR_DAT_00434324;
  *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00434328;
  FUN_000209b4();
LAB_004342f8:
  *(undefined **)((int)register0x00000054 + -0x5c) = PTR_DAT_0043433c;
  param_1 = FUN_00020b18();
  register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x60);
  if ((bool)uVar12) {
    register0x00000054 = (BADSPACEBASE *)puVar11;
  }
LAB_00434308:
  unaff_lr = 0x434310;
  param_1 = FUN_0009bf64(param_1);
  goto code_r0x00434040;
}



/* k3c/internal/pkg/msgproto.(*OutputFormat).Format_params @ 00434340 (size 160) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto___OutputFormat__Format_params(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4343dc;
    FUN_0009bf64();
  }
  FUN_00025f60();
  FUN_0013b72c();
                    /* WARNING: Could not recover jumptable at 0x004343d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*OutputFormat).GetName @ 004343f0 (size 24) */

void k3c_internal_pkg_msgproto___OutputFormat__GetName(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = *in_stack_00000004;
  uStack0000000c = in_stack_00000004[1];
                    /* WARNING: Could not recover jumptable at 0x00434404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*UnknownFormat).Parse @ 00434408 (size 596) */

void k3c_internal_pkg_msgproto___UnknownFormat__Parse(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x34);
      *(undefined4 *)((int)register0x00000054 + -0x34) = unaff_lr;
      *(undefined1 *)((int)register0x00000054 + -0x18) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x17) = 0;
      *(undefined1 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined1 *)((int)register0x00000054 + -0x17) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 5;
      *(undefined1 *)((int)register0x00000054 + -0x10) = 1;
      uVar4 = *(uint *)((int)register0x00000054 + 0xc);
      uVar1 = *(uint *)((int)register0x00000054 + 0x14);
      uVar10 = uVar4 == uVar1;
      if (uVar1 < uVar4) {
        uVar6 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
        uVar8 = uVar6 & 0x7f;
        if ((uVar6 & 0x60) == 0x60) {
          uVar8 = uVar6 | 0xffffffe0;
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = 0;
        }
        while( true ) {
          uVar1 = uVar1 + 1;
          if ((uVar6 & 0x80) == 0) {
            if (*(char *)((int)register0x00000054 + -0x10) == '\0') {
              uVar7 = 0;
            }
            *(uint *)((int)register0x00000054 + -0x30) = uVar8;
            *(uint *)((int)register0x00000054 + -0x2c) = uVar7;
            FUN_0008f6c0();
            iVar5 = *(int *)((int)register0x00000054 + -0x28);
            uVar2 = DAT_00434668;
            if (*(int *)((int)register0x00000054 + 0x14) ==
                *(int *)((int)register0x00000054 + 0xc) + -1) {
              iVar5 = DAT_00434660 +
                      (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) +
                                     *(int *)((int)register0x00000054 + 0x14)) * 8;
              uVar2 = DAT_00434664;
            }
            *(undefined4 *)((int)register0x00000054 + -0x1c) = uVar2;
            *(int *)((int)register0x00000054 + -0xc) = iVar5;
            FUN_000908bc();
            uVar2 = *(undefined4 *)((int)register0x00000054 + -0x30);
            *(undefined4 *)((int)register0x00000054 + -4) = uVar2;
            *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0043466c;
            *(undefined4 *)((int)register0x00000054 + -0x2c) = uVar2;
            *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_00434670;
            *(undefined4 *)((int)register0x00000054 + -0x24) = 6;
            FUN_00093a08();
            puVar3 = *(undefined4 **)((int)register0x00000054 + -0x20);
            *puVar3 = *(undefined4 *)((int)register0x00000054 + -0x1c);
            if (*DAT_00434674 == 0) {
              uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
            }
            else {
              puVar3 = (undefined4 *)FUN_0009db64();
              uVar2 = *(undefined4 *)((int)register0x00000054 + -0xc);
              *unaff_r8 = uVar2;
              unaff_r8[1] = puVar3[1];
            }
            puVar3[1] = uVar2;
            *(undefined4 *)((int)register0x00000054 + -0x30) =
                 *(undefined4 *)((int)register0x00000054 + 8);
            *(undefined4 *)((int)register0x00000054 + -0x2c) =
                 *(undefined4 *)((int)register0x00000054 + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x28) =
                 *(undefined4 *)((int)register0x00000054 + 0x10);
            FUN_0008f820();
            *(undefined4 *)((int)register0x00000054 + -8) =
                 *(undefined4 *)((int)register0x00000054 + -0x24);
            *(undefined4 *)((int)register0x00000054 + -0x30) = DAT_0043466c;
            *(undefined4 *)((int)register0x00000054 + -0x2c) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_00434678;
            *(undefined4 *)((int)register0x00000054 + -0x24) = 4;
            FUN_00093a08();
            puVar3 = *(undefined4 **)((int)register0x00000054 + -0x20);
            *puVar3 = DAT_0043467c;
            if (*DAT_00434674 == 0) {
              uVar2 = *(undefined4 *)((int)register0x00000054 + -8);
            }
            else {
              puVar3 = (undefined4 *)FUN_0009db64();
              uVar2 = *(undefined4 *)((int)register0x00000054 + -8);
              *unaff_r8 = uVar2;
              unaff_r8[1] = puVar3[1];
            }
            puVar3[1] = uVar2;
            *(undefined4 *)((int)register0x00000054 + 0x18) =
                 *(undefined4 *)((int)register0x00000054 + -4);
            *(int *)((int)register0x00000054 + 0x1c) = *(int *)((int)register0x00000054 + 0xc) + -3;
            return;
          }
          uVar10 = uVar4 == uVar1;
          if (uVar4 <= uVar1) break;
          uVar6 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
          unaff_r8 = (undefined4 *)(uVar6 & 0x7f);
          uVar7 = uVar8 >> 0x19 | uVar7 << 7;
          uVar8 = (uint)unaff_r8 | uVar8 << 7;
        }
        FUN_0009dbd4(uVar1);
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x34);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x434658;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*UnknownFormat).Format_params @ 00434680 (size 180) */

void k3c_internal_pkg_msgproto___UnknownFormat__Format_params(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x434730;
    FUN_0009bf64();
  }
  FUN_00025f60();
  FUN_0008f77c();
  FUN_0013b72c();
                    /* WARNING: Could not recover jumptable at 0x00434724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*UnknownFormat).GetName @ 00434748 (size 24) */

void k3c_internal_pkg_msgproto___UnknownFormat__GetName(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack00000008 = *in_stack_00000004;
  uStack0000000c = in_stack_00000004[1];
                    /* WARNING: Could not recover jumptable at 0x0043475c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.NewMessageParser @ 00434760 (size 836) */

void k3c_internal_pkg_msgproto_NewMessageParser(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *extraout_r1;
  undefined *extraout_r1_00;
  undefined *extraout_r1_01;
  undefined *puVar3;
  undefined *extraout_r1_02;
  undefined4 *extraout_r1_03;
  undefined *extraout_r1_04;
  undefined *puVar4;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined8 uVar5;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 *local_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00022cf8();
  local_28[2] = in_stack_00000008;
  puVar1 = local_28;
  if (*(int *)PTR_DAT_00434aac != 0) {
    puVar1 = (undefined4 *)FUN_0009db54();
    *unaff_r8 = in_stack_00000004;
  }
  puVar1[1] = in_stack_00000004;
  puVar4 = PTR_DAT_00434ab0;
  FUN_00022cf8();
  local_28[1] = 8;
  puVar2 = local_28;
  if (*(int *)PTR_DAT_00434aac != 0) {
    uVar5 = FUN_0009db74(local_28,*local_28);
    *unaff_r8 = (int)((ulonglong)uVar5 >> 0x20);
    unaff_r8[1] = (undefined4 *)uVar5;
    unaff_r8[2] = puVar1[3];
    puVar2 = (undefined4 *)uVar5;
  }
  *puVar2 = PTR_s__unknowncommandsbad_instnetedns0_008216f7_0x18ed_00434ab4;
  puVar1[3] = puVar2;
  FUN_000908bc();
  puVar3 = puVar4;
  if (*(int *)PTR_DAT_00434aac != 0) {
    FUN_0009db74();
    *unaff_r8 = extraout_r1;
    unaff_r8[1] = puVar1[4];
    unaff_r8[2] = puVar1[5];
    puVar3 = extraout_r1;
  }
  puVar1[4] = puVar3;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[5] = PTR_DAT_00434ab8;
  FUN_000908bc();
  puVar3 = puVar4;
  if (*(int *)PTR_DAT_00434aac != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_00;
    unaff_r8[1] = puVar1[8];
    puVar3 = extraout_r1_00;
  }
  puVar1[8] = puVar3;
  FUN_000908bc();
  puVar3 = puVar4;
  if (*(int *)PTR_DAT_00434aac != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_01;
    unaff_r8[1] = puVar1[9];
    puVar3 = extraout_r1_01;
  }
  puVar1[9] = puVar3;
  FUN_000908bc();
  if (*(int *)PTR_DAT_00434aac != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r1_02;
    unaff_r8[1] = puVar1[0x12];
    puVar4 = extraout_r1_02;
  }
  puVar1[0x12] = puVar4;
  FUN_00022cf8(puVar1);
  *(undefined1 *)local_28 = 1;
  *(undefined1 *)((int)local_28 + 1) = 0;
  local_28[1] = 5;
  *(undefined1 *)(local_28 + 2) = 1;
  puVar4 = PTR_DAT_00434ac0;
  FUN_00022cf8();
  puVar2 = local_28;
  if (*(int *)PTR_DAT_00434aac != 0) {
    FUN_0009db74();
    *unaff_r8 = local_28;
    unaff_r8[1] = extraout_r1_03;
    unaff_r8[2] = puVar1[0x13];
    puVar2 = extraout_r1_03;
  }
  *puVar2 = local_28;
  puVar1[0x13] = puVar2;
  FUN_000908bc();
  if (*(int *)PTR_DAT_00434aac != 0) {
    FUN_0009db94();
    *unaff_r8 = extraout_r1_04;
    unaff_r8[1] = puVar1[10];
    unaff_r8[2] = puVar1[0xb];
    unaff_r8[3] = puVar1[0xd];
    unaff_r8[4] = puVar1[0xf];
    puVar4 = extraout_r1_04;
  }
  puVar1[10] = puVar4;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0xf] = PTR_DAT_00434ab8;
  FUN_00022cf8();
  *local_28 = PTR_k3c_internal_pkg_msgproto___MessageParser__mpError_fm_00434ac8;
  if (*(int *)PTR_DAT_00434aac != 0) {
    local_28 = (undefined4 *)FUN_0009db74();
    *unaff_r8 = puVar1;
    unaff_r8[1] = local_28;
    unaff_r8[2] = *puVar1;
  }
  local_28[1] = puVar1;
  *puVar1 = local_28;
  k3c_internal_pkg_msgproto___MessageParser__Init_messages();
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Check_packet @ 00434ad0 (size 444) */

void k3c_internal_pkg_msgproto___MessageParser__Check_packet(undefined4 param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  bool bVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x24);
      *(undefined4 *)((int)register0x00000054 + -0x24) = unaff_lr;
      if (*(int *)((int)register0x00000054 + 0xc) < 5) {
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x00434be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      pbVar4 = *(byte **)((int)register0x00000054 + 8);
      uVar5 = (uint)*pbVar4;
      if (0x3b < (uVar5 - 5 & 0xff)) {
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x00434bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      bVar1 = pbVar4[1];
      if ((bVar1 & 0xfffffff0) != 0x10) {
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00434c90;
        *(undefined **)((int)register0x00000054 + -0xc) = PTR_DAT_00434c94;
        *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00434c98;
        *(undefined **)((int)register0x00000054 + -4) = PTR_DAT_00434c9c + (uint)bVar1 * 8;
        *(undefined1 **)((int)register0x00000054 + -0x20) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x1c) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x18) = 2;
        k3c_internal_pkg_logger_Warn();
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x00434bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      if (*(int *)((int)register0x00000054 + 0xc) < (int)uVar5) {
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
                    /* WARNING: Could not recover jumptable at 0x00434b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      uVar3 = uVar5 - 1 & 0xff;
      if (pbVar4[uVar3] != 0x7e) {
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x00434b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      uVar2 = uVar5 - 3 & 0xff;
      bVar11 = uVar2 == uVar3;
      if (uVar2 <= uVar3) {
        uVar7 = 0xffffffff;
        for (iVar6 = 0; iVar6 < (int)uVar2; iVar6 = iVar6 + 1) {
          uVar8 = pbVar4[iVar6] ^ uVar7 ^ (pbVar4[iVar6] ^ uVar7) << 4;
          uVar9 = uVar8 & 0xff;
          uVar7 = ((uVar7 & 0xffff) >> 8 | uVar9 << 8) ^ (uVar8 & 0xff) >> 4 ^ uVar9 << 3;
        }
        *(char *)((int)register0x00000054 + -0x12) = (char)(uVar7 >> 8);
        *(char *)((int)register0x00000054 + -0x11) = (char)uVar7;
        if (uVar3 - uVar2 == 2) {
          iVar6 = 0;
          while( true ) {
            if (1 < iVar6) {
              *(uint *)((int)register0x00000054 + 0x14) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00434c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x24))();
              return;
            }
            if (*(byte *)((int)register0x00000054 + iVar6 + -0x12) !=
                pbVar4[iVar6 + (uVar2 & (int)-(*(int *)((int)register0x00000054 + 0x10) - uVar2) >>
                                        0x1f)]) break;
            iVar6 = iVar6 + 1;
          }
        }
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x00434c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      param_1 = FUN_0009dc34();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      if (bVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x434c88;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Dump @ 00434ca0 (size 1220) */

void k3c_internal_pkg_msgproto___MessageParser__Dump(undefined4 param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *extraout_r2;
  undefined4 uVar8;
  undefined4 *extraout_r3;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *unaff_r8;
  undefined4 *puVar12;
  uint uVar13;
  int unaff_r10;
  uint uVar14;
  undefined1 *puVar15;
  undefined4 unaff_lr;
  uint uVar16;
  undefined1 uVar17;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x2c)) {
      puVar15 = (undefined1 *)((int)register0x00000054 + -0xac);
      *(undefined4 *)((int)register0x00000054 + -0xac) = unaff_lr;
      uVar17 = *(uint *)((int)register0x00000054 + 0xc) == 1;
      if (1 < *(uint *)((int)register0x00000054 + 0xc)) {
        bVar1 = *(byte *)(*(int *)((int)register0x00000054 + 8) + 1);
        *(undefined4 *)((int)register0x00000054 + -8) = DAT_00435168;
        *(uint *)((int)register0x00000054 + -4) = DAT_0043516c + (uint)bVar1 * 8;
        *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_00435170;
        *(undefined4 *)((int)register0x00000054 + -0xa4) = 9;
        *(undefined1 **)((int)register0x00000054 + -0xa0) =
             (undefined1 *)((int)register0x00000054 + -8);
        *(undefined4 *)((int)register0x00000054 + -0x9c) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x98) = 1;
        FUN_0013b72c();
        *(undefined4 *)((int)register0x00000054 + -0x6c) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
        *(undefined4 *)((int)register0x00000054 + -0x4c) =
             *(undefined4 *)((int)register0x00000054 + -0x94);
        *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_00435174;
        FUN_00022cf8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0xa4);
        puVar2[1] = *(undefined4 *)((int)register0x00000054 + -0x6c);
        if (*DAT_00435178 == 0) {
          uVar6 = *(undefined4 *)((int)register0x00000054 + -0x4c);
        }
        else {
          puVar2 = (undefined4 *)FUN_0009db54();
          uVar6 = *(undefined4 *)((int)register0x00000054 + -0x4c);
          *unaff_r8 = uVar6;
        }
        *puVar2 = uVar6;
        iVar7 = *(int *)((int)register0x00000054 + 4);
        uVar8 = *(undefined4 *)(iVar7 + 0xc);
        uVar4 = *(uint *)((int)register0x00000054 + 0xc);
        iVar9 = *(int *)((int)register0x00000054 + 8);
        uVar10 = 2;
        puVar11 = (undefined4 *)0x1;
        puVar12 = (undefined4 *)0x1;
        uVar6 = DAT_0043517c;
        while (uVar17 = uVar4 == uVar10, unaff_r8 = puVar12, uVar10 < uVar4) {
          *(undefined4 **)((int)register0x00000054 + -0x5c) = puVar2;
          uVar13 = (uint)*(byte *)(iVar9 + uVar10);
          uVar16 = uVar13 & 0x7f;
          if ((uVar13 & 0x60) == 0x60) {
            uVar16 = uVar13 | 0xffffffe0;
            uVar14 = 0xffffffff;
          }
          else {
            uVar14 = 0;
          }
          *(undefined4 **)((int)register0x00000054 + -0x78) = puVar11;
          *(undefined4 **)((int)register0x00000054 + -0x7c) = puVar12;
          uVar3 = uVar10;
          while (uVar3 = uVar3 + 1, (uVar13 & 0x80) != 0) {
            uVar17 = uVar4 == uVar3;
            if (uVar4 <= uVar3) goto LAB_00435140;
            uVar13 = (uint)*(byte *)(iVar9 + uVar3);
            uVar14 = uVar16 >> 0x19 | uVar14 << 7;
            uVar16 = uVar13 & 0x7f | uVar16 << 7;
            unaff_r8 = *(undefined4 **)((int)register0x00000054 + -0x7c);
          }
          *(undefined4 *)((int)register0x00000054 + -0x74) = uVar6;
          *(undefined4 *)((int)register0x00000054 + -0x58) = uVar8;
          *(uint *)((int)register0x00000054 + -0x80) = uVar10;
          if (*(char *)(**(int **)(iVar7 + 0x4c) + 8) == '\0') {
            uVar14 = 0;
          }
          *(uint *)((int)register0x00000054 + -0xa8) = uVar16;
          *(uint *)((int)register0x00000054 + -0xa4) = uVar14;
          FUN_0008f6c0();
          uVar6 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x20);
          *(undefined4 **)((int)register0x00000054 + -0x50) =
               *(undefined4 **)((int)register0x00000054 + -0xa0);
          uVar8 = **(undefined4 **)((int)register0x00000054 + -0xa0);
          *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_00435180;
          *(undefined4 *)((int)register0x00000054 + -0xa4) = uVar6;
          *(undefined4 *)((int)register0x00000054 + -0xa0) = uVar8;
          FUN_0009275c();
          if (*(char *)((int)register0x00000054 + -0x98) == '\0') {
            *(undefined4 *)((int)register0x00000054 + -0x18) = DAT_00435188;
            *(undefined4 *)((int)register0x00000054 + -0x14) = DAT_0043518c;
            *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_00435190;
            *(undefined4 *)((int)register0x00000054 + -0xc) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            *(undefined1 **)((int)register0x00000054 + -0xa8) =
                 (undefined1 *)((int)register0x00000054 + -0x18);
            *(undefined4 *)((int)register0x00000054 + -0xa4) = 2;
            *(undefined4 *)((int)register0x00000054 + -0xa0) = 2;
            k3c_internal_pkg_logger_Warn();
            iVar7 = *(int *)((int)register0x00000054 + -0x74);
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x58);
          }
          else {
            iVar7 = **(int **)((int)register0x00000054 + -0x9c);
            uVar17 = iVar7 == 0;
            if ((bool)uVar17) {
              *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_0043519c;
              FUN_00020b18();
LAB_00435140:
              FUN_0009dbd4();
              break;
            }
            *(int *)((int)register0x00000054 + -0x58) =
                 (*(int **)((int)register0x00000054 + -0x9c))[1];
            *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_00435184;
            *(int *)((int)register0x00000054 + -0xa4) = iVar7;
            FUN_00020dac();
            iVar7 = *(int *)((int)register0x00000054 + -0xa0);
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x58);
          }
          *(int *)((int)register0x00000054 + -0x74) = iVar7;
          *(undefined4 *)((int)register0x00000054 + -0x58) = uVar6;
          pcVar5 = *(code **)(iVar7 + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0xa8) = uVar6;
          *(undefined4 *)((int)register0x00000054 + -0xa4) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0xa0) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x9c) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x98) =
               *(undefined4 *)((int)register0x00000054 + -0x80);
          (*pcVar5)();
          *(undefined4 *)((int)register0x00000054 + -0x60) =
               *(undefined4 *)((int)register0x00000054 + -0x94);
          *(undefined4 *)((int)register0x00000054 + -0x80) =
               *(undefined4 *)((int)register0x00000054 + -0x90);
          FUN_000908bc();
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0xa8);
          FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x48));
          *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_00435194;
          *(undefined4 *)((int)register0x00000054 + -0xa4) =
               *(undefined4 *)((int)register0x00000054 + -0x60);
          *(undefined1 **)((int)register0x00000054 + -0xa0) =
               (undefined1 *)((int)register0x00000054 + -0x48);
          FUN_00091764();
          while (puVar2 = *(undefined4 **)((int)register0x00000054 + -0x48),
                puVar2 != (undefined4 *)0x0) {
            *(undefined4 *)((int)register0x00000054 + -0x54) = *puVar2;
            *(undefined4 *)((int)register0x00000054 + -0x70) = puVar2[1];
            uVar6 = (*(undefined4 **)((int)register0x00000054 + -0x44))[1];
            *(undefined4 *)((int)register0x00000054 + -0xa8) =
                 **(undefined4 **)((int)register0x00000054 + -0x44);
            *(undefined4 *)((int)register0x00000054 + -0xa4) = uVar6;
            k3c_internal_pkg_util_cast_ToStringE();
            *(undefined4 *)((int)register0x00000054 + -0x84) =
                 *(undefined4 *)((int)register0x00000054 + -0x9c);
            *(undefined4 *)((int)register0x00000054 + -0x68) =
                 *(undefined4 *)((int)register0x00000054 + -0xa0);
            *(undefined4 *)((int)register0x00000054 + -0xa8) = DAT_00435198;
            *(undefined4 *)((int)register0x00000054 + -0xa4) =
                 *(undefined4 *)((int)register0x00000054 + -100);
            *(undefined4 *)((int)register0x00000054 + -0xa0) =
                 *(undefined4 *)((int)register0x00000054 + -0x54);
            *(undefined4 *)((int)register0x00000054 + -0x9c) =
                 *(undefined4 *)((int)register0x00000054 + -0x70);
            FUN_00093a08();
            puVar2 = *(undefined4 **)((int)register0x00000054 + -0x98);
            puVar2[1] = *(undefined4 *)((int)register0x00000054 + -0x84);
            if (*DAT_00435178 == 0) {
              uVar6 = *(undefined4 *)((int)register0x00000054 + -0x68);
            }
            else {
              puVar2 = (undefined4 *)FUN_0009db64();
              uVar6 = *(undefined4 *)((int)register0x00000054 + -0x68);
              *unaff_r8 = uVar6;
              unaff_r8[1] = *puVar2;
            }
            *puVar2 = uVar6;
            *(undefined1 **)((int)register0x00000054 + -0xa8) =
                 (undefined1 *)((int)register0x00000054 + -0x48);
            FUN_000919c8();
          }
          *(int *)((int)register0x00000054 + -0x6c) = *(int *)((int)register0x00000054 + -0x7c) + 1;
          pcVar5 = *(code **)(*(int *)((int)register0x00000054 + -0x74) + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0xa8) =
               *(undefined4 *)((int)register0x00000054 + -0x58);
          *(undefined4 *)((int)register0x00000054 + -0xa4) =
               *(undefined4 *)((int)register0x00000054 + -100);
          (*pcVar5)();
          uVar6 = *(undefined4 *)((int)register0x00000054 + -0xa0);
          uVar8 = *(undefined4 *)((int)register0x00000054 + -0x9c);
          puVar11 = *(undefined4 **)((int)register0x00000054 + -0x78);
          puVar12 = *(undefined4 **)((int)register0x00000054 + -0x6c);
          if (puVar11 < puVar12) {
            *(undefined4 *)((int)register0x00000054 + -0x4c) = uVar6;
            *(undefined4 *)((int)register0x00000054 + -0x6c) = uVar8;
            *(undefined4 *)((int)register0x00000054 + -0xa8) =
                 *(undefined4 *)((int)register0x00000054 + -0x5c);
            *(undefined4 **)((int)register0x00000054 + -0xa4) = puVar12;
            *(undefined4 **)((int)register0x00000054 + -0xa0) = puVar11;
            *(undefined4 *)((int)register0x00000054 + -0x9c) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x98) = DAT_00435188;
            FUN_000987f4();
            puVar2 = *(undefined4 **)((int)register0x00000054 + -0x94);
            puVar12 = *(undefined4 **)((int)register0x00000054 + -0x90);
            puVar11 = *(undefined4 **)((int)register0x00000054 + -0x8c);
            uVar6 = *(undefined4 *)((int)register0x00000054 + -0x4c);
            uVar8 = *(undefined4 *)((int)register0x00000054 + -0x6c);
          }
          else {
            puVar2 = *(undefined4 **)((int)register0x00000054 + -0x5c);
          }
          iVar7 = (int)puVar12 + -1;
          puVar2[iVar7 * 2 + 1] = uVar8;
          if (*DAT_00435178 != 0) {
            uVar6 = FUN_0009db64();
            *unaff_r8 = uVar6;
            unaff_r8[1] = puVar2[iVar7 * 2];
            puVar11 = extraout_r2;
            puVar12 = extraout_r3;
          }
          puVar2[iVar7 * 2] = uVar6;
          uVar4 = *(uint *)((int)register0x00000054 + 0xc);
          uVar10 = *(uint *)((int)register0x00000054 + -0x80);
          if ((int)(uVar4 - 3) <= (int)uVar10) {
            *(undefined4 **)((int)register0x00000054 + 0x14) = puVar2;
            *(undefined4 **)((int)register0x00000054 + 0x18) = puVar12;
            *(undefined4 **)((int)register0x00000054 + 0x1c) = puVar11;
            return;
          }
          iVar9 = *(int *)((int)register0x00000054 + 8);
          uVar8 = *(undefined4 *)((int)register0x00000054 + -0x58);
          uVar6 = *(undefined4 *)((int)register0x00000054 + -0x74);
          iVar7 = *(int *)((int)register0x00000054 + 4);
        }
        FUN_0009dbd4(uVar10);
      }
      param_1 = FUN_0009dbd4(1);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xac);
      if ((bool)uVar17) {
        register0x00000054 = (BADSPACEBASE *)puVar15;
      }
    }
    unaff_lr = 0x435160;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Format_params @ 004351a0 (size 444) */

void k3c_internal_pkg_msgproto___MessageParser__Format_params(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int *piStack_2c;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined *puStack_8;
  undefined *puStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x435358;
    FUN_0009bf64();
  }
  FUN_00025f60();
  iVar3 = *piStack_2c;
  iVar2 = piStack_2c[1];
  FUN_00025f60();
  puVar1 = PTR_DAT_0043536c;
  if (*piStack_2c == 0) {
    FUN_00025f60();
    if (piStack_2c[1] != 0) {
      FUN_0009df04(0,&puStack_10);
      FUN_0008f77c();
      puStack_10 = PTR_DAT_00435370;
      puStack_c = puVar1;
      FUN_0008f77c();
      puStack_8 = PTR_DAT_00435370;
      puStack_4 = puVar1;
      FUN_0013b72c();
                    /* WARNING: Could not recover jumptable at 0x004352e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    FUN_0015db30();
    FUN_00099104();
    in_stack_0000000c = 3;
                    /* WARNING: Could not recover jumptable at 0x00435328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  k3c_internal_pkg_msgproto___MessageFormat__Format_params();
  in_stack_0000000c = iVar3;
  in_stack_00000010 = iVar2;
                    /* WARNING: Could not recover jumptable at 0x0043534c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Parse @ 00435378 (size 572) */

void k3c_internal_pkg_msgproto___MessageParser__Parse(undefined4 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  undefined1 uVar11;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = unaff_lr;
      uVar4 = *(uint *)((int)register0x00000054 + 0xc);
      uVar11 = uVar4 == 2;
      if (2 < uVar4) {
        uVar8 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + 2);
        uVar9 = uVar8 & 0x7f;
        if ((uVar8 & 0x60) == 0x60) {
          uVar9 = uVar8 | 0xffffffe0;
        }
        uVar1 = 3;
        while ((uVar8 & 0x80) != 0) {
          uVar11 = uVar4 == uVar1;
          if (uVar4 <= uVar1) goto LAB_00435598;
          uVar8 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
          uVar1 = uVar1 + 1;
          uVar9 = uVar8 & 0x7f | uVar9 << 7;
        }
        uVar5 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x20);
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004355b8;
        *(undefined4 *)((int)register0x00000054 + -0x34) = uVar5;
        *(uint *)((int)register0x00000054 + -0x30) = uVar9;
        FUN_0009275c();
        if (*(char *)((int)register0x00000054 + -0x28) == '\0') {
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0xc);
          puVar2 = PTR_DAT_004355c0;
          goto LAB_00435478;
        }
        iVar6 = **(int **)((int)register0x00000054 + -0x2c);
        uVar11 = iVar6 == 0;
        if (!(bool)uVar11) {
          *(int *)((int)register0x00000054 + -0x14) =
               (*(int **)((int)register0x00000054 + -0x2c))[1];
          *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004355bc;
          *(int *)((int)register0x00000054 + -0x34) = iVar6;
          FUN_00020dac();
          uVar5 = *(undefined4 *)((int)register0x00000054 + -0x14);
          puVar2 = *(undefined **)((int)register0x00000054 + -0x30);
LAB_00435478:
          *(undefined **)((int)register0x00000054 + -0x1c) = puVar2;
          *(undefined4 *)((int)register0x00000054 + -0x14) = uVar5;
          pcVar7 = *(code **)(puVar2 + 0x14);
          *(undefined4 *)((int)register0x00000054 + -0x38) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x34) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x30) =
               *(undefined4 *)((int)register0x00000054 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x2c) =
               *(undefined4 *)((int)register0x00000054 + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x28) = 2;
          (*pcVar7)();
          *(undefined4 *)((int)register0x00000054 + -0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          if (*(int *)((int)register0x00000054 + -0x20) !=
              *(int *)((int)register0x00000054 + 0xc) + -3) {
            *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_004355c4;
            *(undefined **)((int)register0x00000054 + -4) = PTR_DAT_004355c8;
            *(undefined1 **)((int)register0x00000054 + -0x38) =
                 (undefined1 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x34) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x30) = 1;
            k3c_internal_pkg_logger_Error();
          }
          pcVar7 = *(code **)(*(int *)((int)register0x00000054 + -0x1c) + 0x10);
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x14);
          (*pcVar7)();
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + -0x34) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          FUN_0008f77c();
          *(undefined4 *)((int)register0x00000054 + -0x10) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004355cc;
          *(undefined4 *)((int)register0x00000054 + -0x34) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          *(undefined **)((int)register0x00000054 + -0x30) = PTR_DAT_004355d0;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 5;
          FUN_00093a08();
          puVar3 = *(undefined4 **)((int)register0x00000054 + -0x28);
          *puVar3 = PTR_DAT_004355c4;
          if (*(int *)PTR_DAT_004355d4 == 0) {
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x10);
          }
          else {
            puVar3 = (undefined4 *)FUN_0009db64();
            uVar5 = *(undefined4 *)((int)register0x00000054 + -0x10);
            *unaff_r8 = uVar5;
            unaff_r8[1] = puVar3[1];
          }
          puVar3[1] = uVar5;
          *(undefined4 *)((int)register0x00000054 + 0x14) =
               *(undefined4 *)((int)register0x00000054 + -0x18);
          return;
        }
        *(undefined **)((int)register0x00000054 + -0x38) = PTR_DAT_004355d8;
        FUN_00020b18();
LAB_00435598:
        FUN_0009dbd4();
      }
      param_1 = FUN_0009dbd4(2);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x3c);
      if ((bool)uVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x4355b0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Parse_buffer @ 004355dc (size 404) */

void k3c_internal_pkg_msgproto___MessageParser__Parse_buffer(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int unaff_r10;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  undefined1 uVar9;
  uint in_fpscr;
  undefined8 uVar10;
  uint unaff_s30;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar8 = (undefined1 *)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x3c) = unaff_lr;
      if (*(int *)((int)register0x00000054 + 0xc) == 0) {
        *(undefined4 *)((int)register0x00000054 + 0x10) = DAT_00435774;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00435634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x3c))();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x38) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(int *)((int)register0x00000054 + -0x34) = *(int *)((int)register0x00000054 + 0xc);
      FUN_000b6cc4();
      iVar1 = *(int *)((int)register0x00000054 + -0x30);
      iVar2 = 0;
      uVar3 = 0;
      iVar4 = 0;
      uVar5 = 0;
      while( true ) {
        *(int *)((int)register0x00000054 + -4) = iVar4;
        *(uint *)((int)register0x00000054 + -0xc) = uVar5;
        *(uint *)((int)register0x00000054 + -0x10) = uVar3;
        *(int *)((int)register0x00000054 + -8) = iVar2;
        *(int *)((int)register0x00000054 + -0x14) = iVar1;
        uVar10 = VectorSignedToFloat(unaff_s30 & 0xffff0000 |
                                     *(uint *)((int)register0x00000054 + 0xc) >> 1 & 0xffff,
                                     (byte)(in_fpscr >> 0x16) & 3);
        *(undefined8 *)((int)register0x00000054 + -0x38) = uVar10;
        FUN_000b0130();
        unaff_s30 = (uint)(longlong)*(double *)((int)register0x00000054 + -0x30);
        iVar2 = *(int *)((int)register0x00000054 + -8);
        if ((int)unaff_s30 <= iVar2) break;
        uVar3 = *(int *)((int)register0x00000054 + -0x10) + 1;
        uVar5 = *(uint *)((int)register0x00000054 + -0xc);
        if (uVar5 < uVar3) {
          *(undefined4 *)((int)register0x00000054 + -0x38) =
               *(undefined4 *)((int)register0x00000054 + -4);
          *(uint *)((int)register0x00000054 + -0x34) = uVar3;
          *(uint *)((int)register0x00000054 + -0x30) = uVar5;
          *(undefined4 *)((int)register0x00000054 + -0x2c) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x28) = DAT_00435778;
          FUN_000987f4();
          iVar4 = *(int *)((int)register0x00000054 + -0x24);
          uVar3 = *(uint *)((int)register0x00000054 + -0x20);
          uVar5 = *(uint *)((int)register0x00000054 + -0x1c);
          iVar2 = *(int *)((int)register0x00000054 + -8);
        }
        else {
          iVar4 = *(int *)((int)register0x00000054 + -4);
        }
        uVar7 = *(uint *)((int)register0x00000054 + -0x14);
        *(uint *)(iVar4 + (uVar3 - 1) * 4) = uVar7 & 0xff;
        iVar2 = iVar2 + 1;
        iVar1 = (int)uVar7 >> 8;
      }
      uVar7 = *(uint *)((int)register0x00000054 + -0x10);
      iVar1 = *(int *)((int)register0x00000054 + -4);
      uVar5 = 0;
      uVar3 = uVar7;
      while( true ) {
        uVar3 = uVar3 - 1;
        if ((int)uVar3 <= (int)uVar5) {
          *(int *)((int)register0x00000054 + 0x10) = iVar1;
          *(uint *)((int)register0x00000054 + 0x14) = uVar7;
          *(undefined4 *)((int)register0x00000054 + 0x18) =
               *(undefined4 *)((int)register0x00000054 + -0xc);
          return;
        }
        uVar9 = uVar5 == uVar7;
        if (uVar7 <= uVar5) goto LAB_0043575c;
        uVar6 = *(undefined4 *)(iVar1 + uVar5 * 4);
        uVar9 = uVar3 == uVar7;
        if (uVar7 <= uVar3) break;
        *(undefined4 *)(iVar1 + uVar5 * 4) = *(undefined4 *)(iVar1 + uVar3 * 4);
        *(undefined4 *)(iVar1 + uVar3 * 4) = uVar6;
        uVar5 = uVar5 + 1;
      }
      FUN_0009dbd4(uVar3);
LAB_0043575c:
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x3c);
      if ((bool)uVar9) {
        register0x00000054 = (BADSPACEBASE *)puVar8;
      }
    }
    unaff_lr = 0x43576c;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Lookup_command @ 0043577c (size 816) */

void k3c_internal_pkg_msgproto___MessageParser__Lookup_command(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  bool bVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x4c);
      *(undefined4 *)((int)register0x00000054 + -0x4c) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00151ce4();
      *(undefined4 *)((int)register0x00000054 + -0x48) =
           *(undefined4 *)((int)register0x00000054 + -0x40);
      *(undefined4 *)((int)register0x00000054 + -0x44) =
           *(undefined4 *)((int)register0x00000054 + -0x3c);
      *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00435ab0;
      *(undefined4 *)((int)register0x00000054 + -0x3c) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x34) = 0xffffffff;
      FUN_0014f168();
      bVar8 = *(int *)((int)register0x00000054 + -0x2c) == 0;
      if (!bVar8) {
        uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x24);
        uVar6 = **(undefined4 **)((int)register0x00000054 + -0x30);
        *(undefined4 *)((int)register0x00000054 + -0x20) = uVar6;
        uVar5 = (*(undefined4 **)((int)register0x00000054 + -0x30))[1];
        *(undefined4 *)((int)register0x00000054 + -0x24) = uVar5;
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_00435ab4;
        *(undefined4 *)((int)register0x00000054 + -0x44) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x40) = uVar6;
        *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar5;
        FUN_00025f60();
        iVar1 = **(int **)((int)register0x00000054 + -0x38);
        if (iVar1 == 0) {
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          FUN_0008f77c();
          pcVar3 = *(code **)**(undefined4 **)((int)register0x00000054 + 4);
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0x40);
          *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_00435ad0;
          *(undefined4 *)((int)register0x00000054 + -0x44) = 0x19;
          *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00435ac8;
          *(undefined4 *)((int)register0x00000054 + -0x3c) = uVar4;
          (*pcVar3)();
          *(undefined4 *)((int)register0x00000054 + -8) = 0;
          *(undefined4 *)((int)register0x00000054 + -4) = 0;
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + -0x20);
          *(undefined4 *)((int)register0x00000054 + -0x44) =
               *(undefined4 *)((int)register0x00000054 + -0x24);
          FUN_0008f77c();
          *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00435ac8;
          *(undefined4 *)((int)register0x00000054 + -4) =
               *(undefined4 *)((int)register0x00000054 + -0x40);
          *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_00435ad0;
          *(undefined4 *)((int)register0x00000054 + -0x44) = 0x19;
          *(undefined1 **)((int)register0x00000054 + -0x40) =
               (undefined1 *)((int)register0x00000054 + -8);
          *(undefined4 *)((int)register0x00000054 + -0x3c) = 1;
          *(undefined4 *)((int)register0x00000054 + -0x38) = 1;
          FUN_001386c4();
          *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x18) =
               *(undefined4 *)((int)register0x00000054 + -0x34);
          *(undefined4 *)((int)register0x00000054 + 0x1c) =
               *(undefined4 *)((int)register0x00000054 + -0x30);
          return;
        }
        *(int *)((int)register0x00000054 + -0x1c) = iVar1;
        if (*(int *)((int)register0x00000054 + 0xc) == *(int *)(iVar1 + 0x10)) {
          uVar4 = *(undefined4 *)(iVar1 + 0xc);
          *(undefined4 *)((int)register0x00000054 + -0x48) =
               *(undefined4 *)((int)register0x00000054 + 8);
          *(undefined4 *)((int)register0x00000054 + -0x44) = uVar4;
          *(int *)((int)register0x00000054 + -0x40) = *(int *)((int)register0x00000054 + 0xc);
          FUN_00018250();
          if (*(char *)((int)register0x00000054 + -0x3c) != '\0') {
            *(undefined **)((int)register0x00000054 + 0x10) = PTR_DAT_00435acc;
            *(undefined4 *)((int)register0x00000054 + 0x14) =
                 *(undefined4 *)((int)register0x00000054 + -0x1c);
            *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
            *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
            return;
          }
        }
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_00435ab8;
        FUN_00022cf8();
        puVar2 = *(undefined4 **)((int)register0x00000054 + -0x44);
        puVar2[1] = *(undefined4 *)((int)register0x00000054 + 0xc);
        if (*(int *)PTR_DAT_00435abc == 0) {
          uVar4 = *(undefined4 *)((int)register0x00000054 + 8);
        }
        else {
          puVar2 = (undefined4 *)FUN_0009db54();
          uVar4 = *(undefined4 *)((int)register0x00000054 + 8);
          *unaff_r8 = uVar4;
        }
        *puVar2 = uVar4;
        uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1c) + 0xc);
        puVar2[3] = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1c) + 0x10);
        if (*(int *)PTR_DAT_00435abc != 0) {
          puVar2 = (undefined4 *)FUN_0009db54();
          *unaff_r8 = uVar4;
        }
        puVar2[2] = uVar4;
        *(undefined4 **)((int)register0x00000054 + -0x48) = puVar2;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x40) = 2;
        FUN_0008f820();
        pcVar3 = *(code **)**(undefined4 **)((int)register0x00000054 + 4);
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_00435ac0;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 0x21;
        *(undefined **)((int)register0x00000054 + -0x40) = PTR_DAT_00435ac4;
        (*pcVar3)();
        FUN_0009df04(0,(undefined1 *)((int)register0x00000054 + -0x18));
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x44) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x18) = PTR_DAT_00435ac8;
        *(undefined4 *)((int)register0x00000054 + -0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1c) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x48) =
             *(undefined4 *)(*(int *)((int)register0x00000054 + -0x1c) + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x44) = uVar4;
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_00435ac8;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x40);
        *(undefined **)((int)register0x00000054 + -0x48) = PTR_DAT_00435ac0;
        *(undefined4 *)((int)register0x00000054 + -0x44) = 0x21;
        *(undefined1 **)((int)register0x00000054 + -0x40) =
             (undefined1 *)((int)register0x00000054 + -0x18);
        *(undefined4 *)((int)register0x00000054 + -0x3c) = 2;
        *(undefined4 *)((int)register0x00000054 + -0x38) = 2;
        FUN_001386c4();
        *(undefined4 *)((int)register0x00000054 + 0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x34);
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + -0x30);
        return;
      }
      param_1 = FUN_0009dbd4(0,0);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x4c);
      if (bVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x435aa8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Lookup_msgid @ 00435ad4 (size 224) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto___MessageParser__Lookup_msgid
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x48);
      *(undefined4 *)((int)register0x00000054 + -0x24) = _UNK_00435bb8;
      *(undefined4 *)((int)register0x00000054 + -0x20) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093560();
      if (*(char *)((int)register0x00000054 + -0x10) != '\0') {
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             **(undefined4 **)((int)register0x00000054 + -0x14);
                    /* WARNING: Could not recover jumptable at 0x00435b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x28))();
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -8) = 0;
      *(undefined4 *)((int)register0x00000054 + -4) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_0008f77c();
      *(undefined4 *)((int)register0x00000054 + -8) = _UNK_00435bbc;
      *(undefined4 *)((int)register0x00000054 + -4) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      *(undefined4 *)((int)register0x00000054 + -0x24) = _UNK_00435bc0;
      *(undefined4 *)((int)register0x00000054 + -0x20) = 0x13;
      *(undefined1 **)((int)register0x00000054 + -0x1c) =
           (undefined1 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x18) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x14) = 1;
      FUN_001386c4();
      bVar3 = *(int *)((int)register0x00000054 + -0x10) == 0;
      uVar1 = 0;
      if (!bVar3) {
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0x10) + 4);
      }
      *(undefined4 *)((int)register0x00000054 + -0x24) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0xc);
      unaff_lr = 0x435ba4;
      uVar4 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x435bb0;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Create_command @ 00435bc4 (size 1528) */

void k3c_internal_pkg_msgproto___MessageParser__Create_command(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined *extraout_r2;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar10;
  undefined4 unaff_lr;
  undefined1 uVar11;
  undefined8 uVar12;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0xd8)) {
      puVar10 = (undefined1 *)((int)register0x00000054 + -0x158);
      *(undefined4 *)((int)register0x00000054 + -0x158) = unaff_lr;
      *(undefined4 *)((int)register0x00000054 + -0x154) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x150) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00151ce4();
      *(undefined4 *)((int)register0x00000054 + -0x154) =
           *(undefined4 *)((int)register0x00000054 + -0x14c);
      *(undefined4 *)((int)register0x00000054 + -0x150) =
           *(undefined4 *)((int)register0x00000054 + -0x148);
      *(undefined **)((int)register0x00000054 + -0x14c) = PTR_DAT_004361c0;
      *(undefined4 *)((int)register0x00000054 + -0x148) = 1;
      *(undefined4 *)((int)register0x00000054 + -0x144) = 0;
      *(undefined4 *)((int)register0x00000054 + -0x140) = 0xffffffff;
      FUN_0014f168();
      if (*(int *)((int)register0x00000054 + -0x138) == 0) {
        *(undefined **)((int)register0x00000054 + 0x10) = PTR_DAT_004361d0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x128) =
           *(undefined4 *)((int)register0x00000054 + -0x134);
      *(int *)((int)register0x00000054 + -300) = *(int *)((int)register0x00000054 + -0x138);
      uVar4 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x24);
      puVar5 = *(undefined4 **)((int)register0x00000054 + -0x13c);
      *(undefined4 **)((int)register0x00000054 + -0x104) = puVar5;
      uVar7 = puVar5[1];
      *(undefined4 *)((int)register0x00000054 + -0x114) = uVar7;
      uVar9 = *puVar5;
      *(undefined4 *)((int)register0x00000054 + -0xf0) = uVar9;
      *(undefined **)((int)register0x00000054 + -0x154) = PTR_DAT_004361c4;
      *(undefined4 *)((int)register0x00000054 + -0x150) = uVar4;
      *(undefined4 *)((int)register0x00000054 + -0x14c) = uVar9;
      *(undefined4 *)((int)register0x00000054 + -0x148) = uVar7;
      FUN_00025f60();
      if (**(int **)((int)register0x00000054 + -0x144) == 0) {
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x154) =
             *(undefined4 *)((int)register0x00000054 + -0xf0);
        *(undefined4 *)((int)register0x00000054 + -0x150) =
             *(undefined4 *)((int)register0x00000054 + -0x114);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_004361c8;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x14c);
        *(undefined **)((int)register0x00000054 + -0x154) = PTR_DAT_004361cc;
        *(undefined4 *)((int)register0x00000054 + -0x150) = 0x21;
        *(undefined1 **)((int)register0x00000054 + -0x14c) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x148) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x144) = 1;
        k3c_internal_pkg_logger_Errorf();
        *(undefined **)((int)register0x00000054 + 0x10) = PTR_DAT_004361d0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        return;
      }
      *(int *)((int)register0x00000054 + -0xec) = **(int **)((int)register0x00000054 + -0x144);
      uVar4 = FUN_0009def8(0,(undefined1 *)((int)register0x00000054 + -0x5c));
      FUN_0009de88(uVar4,(undefined1 *)((int)register0x00000054 + -0xe8));
      *(undefined1 **)((int)register0x00000054 + -0x50) =
           (undefined1 *)((int)register0x00000054 + -0xe8);
      FUN_0006aa3c();
      *(undefined4 *)((int)register0x00000054 + -0x54) =
           *(undefined4 *)((int)register0x00000054 + -0x154);
      iVar6 = *(int *)((int)register0x00000054 + -0x104) +
              (1 - *(int *)((int)register0x00000054 + -0x128) >> 0x1f & 8U);
      *(int *)((int)register0x00000054 + -4) = iVar6;
      iVar8 = *(int *)((int)register0x00000054 + -300) + -1;
      *(int *)((int)register0x00000054 + -0x10c) = iVar8;
      iVar1 = 0;
      while (iVar1 < iVar8) {
        *(int *)((int)register0x00000054 + -0x110) = iVar1;
        uVar4 = *(undefined4 *)(iVar6 + iVar1 * 8 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x154) = *(undefined4 *)(iVar6 + iVar1 * 8);
        *(undefined4 *)((int)register0x00000054 + -0x150) = uVar4;
        *(undefined **)((int)register0x00000054 + -0x14c) = PTR_DAT_004361d4;
        *(undefined4 *)((int)register0x00000054 + -0x148) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x144) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x140) = 0xffffffff;
        FUN_0014f168(iVar1);
        uVar11 = *(uint *)((int)register0x00000054 + -0x138) == 1;
        if (*(uint *)((int)register0x00000054 + -0x138) < 2) goto LAB_004361a4;
        iVar1 = *(int *)((int)register0x00000054 + -0x13c);
        *(int *)((int)register0x00000054 + -0x108) = iVar1;
        uVar4 = *(undefined4 *)(iVar1 + 0xc);
        *(undefined4 *)((int)register0x00000054 + -0x154) = *(undefined4 *)(iVar1 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x150) = uVar4;
        FUN_0008f77c();
        uVar7 = **(undefined4 **)((int)register0x00000054 + -0x108);
        uVar4 = (*(undefined4 **)((int)register0x00000054 + -0x108))[1];
        *(undefined4 *)((int)register0x00000054 + -8) =
             *(undefined4 *)((int)register0x00000054 + -0x14c);
        *(undefined **)((int)register0x00000054 + -0x154) = PTR_DAT_004361d8;
        *(undefined1 **)((int)register0x00000054 + -0x150) =
             (undefined1 *)((int)register0x00000054 + -0x5c);
        *(undefined4 *)((int)register0x00000054 + -0x14c) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x148) = uVar4;
        FUN_00093a08();
        puVar5 = *(undefined4 **)((int)register0x00000054 + -0x144);
        *puVar5 = PTR_DAT_004361c8;
        if (*(int *)PTR_DAT_004361dc == 0) {
          uVar4 = *(undefined4 *)((int)register0x00000054 + -8);
        }
        else {
          puVar5 = (undefined4 *)FUN_0009db64();
          uVar4 = *(undefined4 *)((int)register0x00000054 + -8);
          *unaff_r8 = uVar4;
          unaff_r8[1] = puVar5[1];
        }
        puVar5[1] = uVar4;
        iVar6 = *(int *)((int)register0x00000054 + -4);
        iVar8 = *(int *)((int)register0x00000054 + -0x10c);
        iVar1 = *(int *)((int)register0x00000054 + -0x110) + 1;
      }
      FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x40));
      *(undefined **)((int)register0x00000054 + -0x154) = PTR_DAT_004361d8;
      *(undefined1 **)((int)register0x00000054 + -0x150) =
           (undefined1 *)((int)register0x00000054 + -0x5c);
      *(undefined1 **)((int)register0x00000054 + -0x14c) =
           (undefined1 *)((int)register0x00000054 + -0x40);
      FUN_00091764();
LAB_00435e94:
      puVar5 = *(undefined4 **)((int)register0x00000054 + -0x40);
      if (puVar5 == (undefined4 *)0x0) {
        *(undefined4 *)((int)register0x00000054 + -0x154) =
             *(undefined4 *)((int)register0x00000054 + -0xec);
        *(undefined1 **)((int)register0x00000054 + -0x150) =
             (undefined1 *)((int)register0x00000054 + -0x5c);
        k3c_internal_pkg_msgproto___MessageFormat__Encode_by_name();
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             *(undefined4 *)((int)register0x00000054 + -0x14c);
        *(undefined4 *)((int)register0x00000054 + 0x14) =
             *(undefined4 *)((int)register0x00000054 + -0x148);
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + -0x144);
        return;
      }
      uVar7 = *puVar5;
      *(undefined4 *)((int)register0x00000054 + -0xf4) = uVar7;
      uVar4 = puVar5[1];
      *(undefined4 *)((int)register0x00000054 + -0x118) = uVar4;
      uVar9 = *(undefined4 *)(*(int *)((int)register0x00000054 + -0xec) + 0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x124) =
           **(undefined4 **)((int)register0x00000054 + -0x3c);
      *(undefined4 *)((int)register0x00000054 + -0x100) =
           (*(undefined4 **)((int)register0x00000054 + -0x3c))[1];
      *(undefined **)((int)register0x00000054 + -0x154) = PTR_DAT_004361d8;
      *(undefined4 *)((int)register0x00000054 + -0x150) = uVar9;
      *(undefined4 *)((int)register0x00000054 + -0x14c) = uVar7;
      *(undefined4 *)((int)register0x00000054 + -0x148) = uVar4;
      FUN_00025f60();
      iVar1 = **(int **)((int)register0x00000054 + -0x144);
      if (iVar1 == 0) {
        *(undefined4 *)((int)register0x00000054 + -0x10) = 0;
        *(undefined4 *)((int)register0x00000054 + -0xc) = 0;
        *(undefined4 *)((int)register0x00000054 + -0x154) =
             *(undefined4 *)((int)register0x00000054 + -0xf4);
        *(undefined4 *)((int)register0x00000054 + -0x150) =
             *(undefined4 *)((int)register0x00000054 + -0x118);
        FUN_0008f77c();
        *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_004361c8;
        *(undefined4 *)((int)register0x00000054 + -0xc) =
             *(undefined4 *)((int)register0x00000054 + -0x14c);
        *(undefined **)((int)register0x00000054 + -0x154) = PTR_DAT_004361f4;
        *(undefined4 *)((int)register0x00000054 + -0x150) = 0x1d;
        *(undefined1 **)((int)register0x00000054 + -0x14c) =
             (undefined1 *)((int)register0x00000054 + -0x10);
        *(undefined4 *)((int)register0x00000054 + -0x148) = 1;
        *(undefined4 *)((int)register0x00000054 + -0x144) = 1;
        k3c_internal_pkg_logger_Errorf();
        *(undefined **)((int)register0x00000054 + 0x10) = PTR_DAT_004361d0;
        *(undefined4 *)((int)register0x00000054 + 0x14) = 0;
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
        return;
      }
      *(int *)((int)register0x00000054 + -0x11c) = iVar1;
      iVar6 = (*(int **)((int)register0x00000054 + -0x144))[1];
      *(int *)((int)register0x00000054 + -0xf8) = iVar6;
      *(int *)((int)register0x00000054 + -0x154) = iVar1;
      *(int *)((int)register0x00000054 + -0x150) = iVar6;
      *(undefined **)((int)register0x00000054 + -0x14c) = PTR_DAT_004361e0;
      *(undefined4 *)((int)register0x00000054 + -0x148) = 0x11;
      k3c_common_utils_reflects_ReflectFieldValue();
      uVar12 = CONCAT44(PTR_DAT_004361e4,*(undefined **)((int)register0x00000054 + -0x144));
      uVar11 = *(undefined **)((int)register0x00000054 + -0x144) == PTR_DAT_004361e4;
      if (!(bool)uVar11) goto LAB_00436190;
      *(undefined1 *)((int)register0x00000054 + -0x12d) =
           **(undefined1 **)((int)register0x00000054 + -0x140);
      *(undefined4 *)((int)register0x00000054 + -0x154) =
           *(undefined4 *)((int)register0x00000054 + -0x11c);
      *(undefined4 *)((int)register0x00000054 + -0x150) =
           *(undefined4 *)((int)register0x00000054 + -0xf8);
      *(undefined **)((int)register0x00000054 + -0x14c) =
           PTR_s_Is_intoutputexec__netdnsdomaingo_008216f7_0x2c4_004361e8;
      *(undefined4 *)((int)register0x00000054 + -0x148) = 6;
      k3c_common_utils_reflects_ReflectFieldValue();
      uVar12 = CONCAT44(PTR_DAT_004361e4,*(undefined **)((int)register0x00000054 + -0x144));
      uVar11 = *(undefined **)((int)register0x00000054 + -0x144) == PTR_DAT_004361e4;
      if (!(bool)uVar11) goto LAB_0043617c;
      if (*(char *)((int)register0x00000054 + -0x12d) != '\0') {
        puVar2 = *(undefined **)((int)register0x00000054 + -0x124);
        uVar11 = puVar2 == PTR_DAT_004361c8;
        puVar3 = PTR_DAT_004361c8;
        if (!(bool)uVar11) goto LAB_00436168;
        uVar7 = **(undefined4 **)((int)register0x00000054 + -0x100);
        uVar4 = (*(undefined4 **)((int)register0x00000054 + -0x100))[1];
        *(undefined4 *)((int)register0x00000054 + -0x154) =
             *(undefined4 *)((int)register0x00000054 + 4);
        *(undefined4 *)((int)register0x00000054 + -0x150) = uVar7;
        *(undefined4 *)((int)register0x00000054 + -0x14c) = uVar4;
        k3c_internal_pkg_msgproto___MessageParser__Parse_buffer();
        *(undefined4 *)((int)register0x00000054 + -0x154) =
             *(undefined4 *)((int)register0x00000054 + -0x148);
        *(undefined4 *)((int)register0x00000054 + -0x150) =
             *(undefined4 *)((int)register0x00000054 + -0x144);
        *(undefined4 *)((int)register0x00000054 + -0x14c) =
             *(undefined4 *)((int)register0x00000054 + -0x140);
        FUN_0008f820();
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x148);
        puVar3 = PTR_DAT_004361ec;
LAB_00436048:
        *(undefined **)((int)register0x00000054 + -0x120) = puVar3;
        *(undefined4 *)((int)register0x00000054 + -0xfc) = uVar4;
        *(undefined **)((int)register0x00000054 + -0x154) = PTR_DAT_004361d8;
        *(undefined1 **)((int)register0x00000054 + -0x150) =
             (undefined1 *)((int)register0x00000054 + -0x5c);
        *(undefined4 *)((int)register0x00000054 + -0x14c) =
             *(undefined4 *)((int)register0x00000054 + -0xf4);
        *(undefined4 *)((int)register0x00000054 + -0x148) =
             *(undefined4 *)((int)register0x00000054 + -0x118);
        FUN_00093a08();
        puVar5 = *(undefined4 **)((int)register0x00000054 + -0x144);
        *puVar5 = *(undefined4 *)((int)register0x00000054 + -0x120);
        if (*(int *)PTR_DAT_004361dc == 0) {
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0xfc);
        }
        else {
          puVar5 = (undefined4 *)FUN_0009db64();
          uVar4 = *(undefined4 *)((int)register0x00000054 + -0xfc);
          *unaff_r8 = uVar4;
          unaff_r8[1] = puVar5[1];
        }
        puVar5[1] = uVar4;
        *(undefined1 **)((int)register0x00000054 + -0x154) =
             (undefined1 *)((int)register0x00000054 + -0x40);
        FUN_000919c8();
        goto LAB_00435e94;
      }
      if (**(char **)((int)register0x00000054 + -0x140) == '\0') {
        puVar3 = *(undefined **)((int)register0x00000054 + -0x124);
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x100);
        goto LAB_00436048;
      }
      uVar11 = *(undefined **)((int)register0x00000054 + -0x124) == PTR_DAT_004361c8;
      if ((bool)uVar11) {
        uVar4 = (*(undefined4 **)((int)register0x00000054 + -0x100))[1];
        *(undefined4 *)((int)register0x00000054 + -0x154) =
             **(undefined4 **)((int)register0x00000054 + -0x100);
        *(undefined4 *)((int)register0x00000054 + -0x150) = uVar4;
        *(undefined4 *)((int)register0x00000054 + -0x14c) = 10;
        *(undefined4 *)((int)register0x00000054 + -0x148) = 0x40;
        FUN_000b66a4();
        *(undefined4 *)((int)register0x00000054 + -0x154) =
             *(undefined4 *)((int)register0x00000054 + -0x144);
        *(undefined4 *)((int)register0x00000054 + -0x150) =
             *(undefined4 *)((int)register0x00000054 + -0x140);
        FUN_0008f6c0();
        uVar4 = *(undefined4 *)((int)register0x00000054 + -0x14c);
        puVar3 = PTR_DAT_004361f0;
        goto LAB_00436048;
      }
      *(undefined **)((int)register0x00000054 + -0x154) =
           *(undefined **)((int)register0x00000054 + -0x124);
      *(undefined **)((int)register0x00000054 + -0x150) = PTR_DAT_004361c8;
      *(undefined **)((int)register0x00000054 + -0x14c) = PTR_DAT_004361f8;
      puVar2 = (undefined *)FUN_000209b4();
      puVar3 = extraout_r2;
LAB_00436168:
      *(undefined **)((int)register0x00000054 + -0x154) = puVar2;
      *(undefined **)((int)register0x00000054 + -0x150) = puVar3;
      *(undefined **)((int)register0x00000054 + -0x14c) = PTR_DAT_004361f8;
      uVar12 = FUN_000209b4();
LAB_0043617c:
      *(undefined8 *)((int)register0x00000054 + -0x154) = uVar12;
      *(undefined **)((int)register0x00000054 + -0x14c) = PTR_DAT_004361f8;
      uVar12 = FUN_000209b4();
LAB_00436190:
      *(undefined8 *)((int)register0x00000054 + -0x154) = uVar12;
      *(undefined **)((int)register0x00000054 + -0x14c) = PTR_DAT_004361f8;
      FUN_000209b4();
LAB_004361a4:
      param_1 = FUN_0009dbd4(1);
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x158);
      if ((bool)uVar11) {
        register0x00000054 = (BADSPACEBASE *)puVar10;
      }
    }
    unaff_lr = 0x4361b8;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Fill_enumerations @ 004361fc (size 1288) */

void k3c_internal_pkg_msgproto___MessageParser__Fill_enumerations(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *extraout_r1;
  undefined *extraout_r1_00;
  int extraout_r1_01;
  undefined *extraout_r2;
  int iVar5;
  int *piVar6;
  int iVar7;
  int extraout_r3;
  undefined8 *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined *puVar11;
  uint uVar12;
  undefined *puVar13;
  int iVar14;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined1 *puVar15;
  undefined4 unaff_lr;
  undefined1 uVar16;
  char cVar17;
  undefined8 uVar18;
  double dVar19;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < (undefined1 *)((int)register0x00000054 + -0x50)) {
      puVar15 = (undefined1 *)((int)register0x00000054 + -0xd0);
      *(undefined4 *)((int)register0x00000054 + -0xd0) = unaff_lr;
      FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x30));
      *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_00436708;
      *(undefined4 *)((int)register0x00000054 + -200) = *(undefined4 *)((int)register0x00000054 + 8)
      ;
      *(undefined1 **)((int)register0x00000054 + -0xc4) =
           (undefined1 *)((int)register0x00000054 + -0x30);
      FUN_00091764();
      while( true ) {
        puVar1 = *(undefined4 **)((int)register0x00000054 + -0x30);
        if (puVar1 == (undefined4 *)0x0) {
          return;
        }
        *(undefined4 *)((int)register0x00000054 + -0x6c) = *puVar1;
        *(undefined4 *)((int)register0x00000054 + -0x90) = puVar1[1];
        *(undefined4 *)((int)register0x00000054 + -0x8c) =
             **(undefined4 **)((int)register0x00000054 + -0x2c);
        *(undefined4 *)((int)register0x00000054 + -0x68) =
             (*(undefined4 **)((int)register0x00000054 + -0x2c))[1];
        FUN_000908bc();
        uVar2 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0x10);
        *(undefined4 *)((int)register0x00000054 + -0x74) =
             *(undefined4 *)((int)register0x00000054 + -0xcc);
        *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_00436708;
        *(undefined4 *)((int)register0x00000054 + -200) = uVar2;
        *(undefined4 *)((int)register0x00000054 + -0xc4) =
             *(undefined4 *)((int)register0x00000054 + -0x6c);
        *(undefined4 *)((int)register0x00000054 + -0xc0) =
             *(undefined4 *)((int)register0x00000054 + -0x90);
        FUN_00093a08();
        uVar18 = CONCAT44(PTR_DAT_00436708,*(undefined4 **)((int)register0x00000054 + -0xbc));
        **(undefined4 **)((int)register0x00000054 + -0xbc) = PTR_DAT_00436708;
        if (*(int *)PTR_DAT_0043670c == 0) {
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x74);
        }
        else {
          uVar18 = FUN_0009db64();
          uVar2 = *(undefined4 *)((int)register0x00000054 + -0x74);
          *unaff_r8 = uVar2;
          unaff_r8[1] = *(undefined4 *)((int)uVar18 + 4);
        }
        iVar7 = (int)((ulonglong)uVar18 >> 0x20);
        *(undefined4 *)((int)uVar18 + 4) = uVar2;
        iVar5 = *(int *)((int)register0x00000054 + -0x8c);
        uVar16 = iVar5 == iVar7;
        if (!(bool)uVar16) break;
        FUN_0009dee4(0,(undefined1 *)((int)register0x00000054 + -0x60));
        *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_00436708;
        *(undefined4 *)((int)register0x00000054 + -200) =
             *(undefined4 *)((int)register0x00000054 + -0x68);
        *(undefined1 **)((int)register0x00000054 + -0xc4) =
             (undefined1 *)((int)register0x00000054 + -0x60);
        FUN_00091764();
        while (piVar6 = *(int **)((int)register0x00000054 + -0x60), piVar6 != (int *)0x0) {
          puVar9 = (undefined *)**(undefined4 **)((int)register0x00000054 + -0x5c);
          puVar8 = (undefined8 *)(*(undefined4 **)((int)register0x00000054 + -0x5c))[1];
          if (puVar9 != PTR_DAT_00436710) {
            uVar18 = 0;
          }
          else {
            uVar18 = *puVar8;
          }
          puVar3 = (undefined *)piVar6[1];
          *(undefined **)((int)register0x00000054 + -0x98) = puVar3;
          iVar7 = *piVar6;
          *(int *)((int)register0x00000054 + -0x70) = iVar7;
          if (puVar9 != PTR_DAT_00436710) {
            *(undefined8 **)((int)register0x00000054 + -0x78) = puVar8;
            *(undefined **)((int)register0x00000054 + -0xac) = puVar9;
            puVar13 = puVar3;
            puVar11 = PTR_DAT_00436710;
            while( true ) {
              *(undefined **)((int)register0x00000054 + -0x9c) = puVar13;
              puVar4 = puVar13;
              if (puVar13 == (undefined *)0x0) {
                cVar17 = '\0';
              }
              else {
                uVar12 = (uint)(byte)puVar13[iVar7 + -1];
                if (uVar12 < 0x100) {
                  cVar17 = (PTR_DAT_00436714[uVar12] & 4) != 0;
                }
                else {
                  *(undefined4 *)((int)register0x00000054 + -0xcc) = *(undefined4 *)PTR_DAT_00436718
                  ;
                  *(uint *)((int)register0x00000054 + -200) = uVar12;
                  FUN_000c4ff0();
                  cVar17 = *(char *)((int)register0x00000054 + -0xc4);
                  puVar3 = *(undefined **)((int)register0x00000054 + -0x98);
                  iVar7 = *(int *)((int)register0x00000054 + -0x70);
                  puVar8 = *(undefined8 **)((int)register0x00000054 + -0x78);
                  puVar9 = *(undefined **)((int)register0x00000054 + -0xac);
                  puVar4 = *(undefined **)((int)register0x00000054 + -0x9c);
                  puVar11 = PTR_DAT_00436710;
                }
              }
              uVar18 = CONCAT44(puVar4,puVar3);
              unaff_r8 = (undefined4 *)PTR_DAT_00436714;
              if (cVar17 == '\0') break;
              puVar13 = puVar4 + -1;
              uVar16 = puVar4 == puVar13;
              if (puVar4 < puVar13) goto LAB_004366d4;
            }
            puVar13 = (undefined *)0x0;
            if (puVar4 == puVar3) {
              iVar5 = 0;
LAB_004364f4:
              unaff_r8 = (undefined4 *)PTR_DAT_00436714;
              uVar16 = 0;
              puVar3 = PTR_DAT_0043671c;
              if (puVar9 == PTR_DAT_0043671c) {
                puVar9 = *(undefined **)((int)puVar8 + 4);
                uVar16 = puVar9 == (undefined *)0x0;
                if (!(bool)uVar16) {
                  puVar1 = *(undefined4 **)puVar8;
                  puVar13 = (undefined *)*puVar1;
                  uVar16 = 0;
                  if (puVar13 == puVar11) {
                    uVar16 = puVar9 == (undefined *)0x1;
                    if ((undefined *)0x1 < puVar9) {
                      puVar9 = (undefined *)puVar1[2];
                      uVar16 = puVar9 == puVar11;
                      if ((bool)uVar16) {
                        *(int *)((int)register0x00000054 + -0xa4) = iVar5;
                        dVar19 = *(double *)puVar1[3];
                        iVar7 = (int)(longlong)*(double *)puVar1[1];
                        *(int *)((int)register0x00000054 + -0xa8) = iVar7;
                        iVar10 = (int)(longlong)dVar19;
                        *(int *)((int)register0x00000054 + -0x94) = iVar10;
                        iVar14 = 0;
                        while (puVar9 = PTR_DAT_00436714, puVar3 = PTR_DAT_0043671c,
                              unaff_r8 = (undefined4 *)PTR_DAT_00436714, iVar14 < iVar10) {
                          *(int *)((int)register0x00000054 + -0xa0) = iVar14;
                          *(int *)((int)register0x00000054 + -0x88) = iVar14 + iVar7;
                          *(int *)((int)register0x00000054 + -0xcc) = iVar5 + iVar14;
                          *(int *)((int)register0x00000054 + -200) = iVar5 + iVar14 >> 0x1f;
                          *(undefined4 *)((int)register0x00000054 + -0xc4) = 10;
                          FUN_000bcf0c();
                          *(undefined4 *)((int)register0x00000054 + -0x7c) =
                               *(undefined4 *)((int)register0x00000054 + -0xc0);
                          *(undefined4 *)((int)register0x00000054 + -0xb0) =
                               *(undefined4 *)((int)register0x00000054 + -0xbc);
                          *(undefined4 *)((int)register0x00000054 + -0xcc) =
                               *(undefined4 *)((int)register0x00000054 + -0x88);
                          FUN_00020ce0();
                          *(undefined4 *)((int)register0x00000054 + -100) =
                               *(undefined4 *)((int)register0x00000054 + -200);
                          *(undefined4 *)((int)register0x00000054 + -0xcc) = 0;
                          *(undefined4 *)((int)register0x00000054 + -200) =
                               *(undefined4 *)((int)register0x00000054 + -0x70);
                          *(undefined4 *)((int)register0x00000054 + -0xc4) =
                               *(undefined4 *)((int)register0x00000054 + -0x9c);
                          *(undefined4 *)((int)register0x00000054 + -0xc0) =
                               *(undefined4 *)((int)register0x00000054 + -0x7c);
                          *(undefined4 *)((int)register0x00000054 + -0xbc) =
                               *(undefined4 *)((int)register0x00000054 + -0xb0);
                          FUN_0007636c();
                          *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_00436708;
                          *(undefined4 *)((int)register0x00000054 + -200) =
                               *(undefined4 *)((int)register0x00000054 + -0x74);
                          *(undefined4 *)((int)register0x00000054 + -0xc4) =
                               *(undefined4 *)((int)register0x00000054 + -0xb8);
                          *(undefined4 *)((int)register0x00000054 + -0xc0) =
                               *(undefined4 *)((int)register0x00000054 + -0xb4);
                          FUN_00093a08();
                          puVar1 = *(undefined4 **)((int)register0x00000054 + -0xbc);
                          *puVar1 = PTR_DAT_00436720;
                          if (*(int *)PTR_DAT_0043670c == 0) {
                            uVar2 = *(undefined4 *)((int)register0x00000054 + -100);
                          }
                          else {
                            puVar1 = (undefined4 *)FUN_0009db64();
                            uVar2 = *(undefined4 *)((int)register0x00000054 + -100);
                            *(undefined4 *)puVar9 = uVar2;
                            *(undefined4 *)(puVar9 + 4) = puVar1[1];
                          }
                          puVar1[1] = uVar2;
                          iVar5 = *(int *)((int)register0x00000054 + -0xa4);
                          puVar4 = *(undefined **)((int)register0x00000054 + -0x9c);
                          iVar7 = *(int *)((int)register0x00000054 + -0xa8);
                          iVar10 = *(int *)((int)register0x00000054 + -0x94);
                          iVar14 = *(int *)((int)register0x00000054 + -0xa0) + 1;
                        }
                        goto LAB_00436324;
                      }
                      *(undefined **)((int)register0x00000054 + -0xcc) = puVar9;
                      *(undefined **)((int)register0x00000054 + -200) = puVar11;
                      *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_00436724;
                      FUN_000209b4(PTR_DAT_00436724,puVar4,PTR_DAT_0043671c,iVar7);
                    }
                    FUN_0009dbd4(1,1);
                    puVar4 = extraout_r1;
                  }
                  *(undefined **)((int)register0x00000054 + -0xcc) = puVar13;
                  *(undefined **)((int)register0x00000054 + -200) = puVar11;
                  *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_00436724;
                  FUN_000209b4(PTR_DAT_00436724,puVar4);
                }
                FUN_0009dbd4(0,0);
                puVar4 = extraout_r1_00;
                puVar3 = extraout_r2;
              }
              *(undefined **)((int)register0x00000054 + -0xcc) = puVar9;
              *(undefined **)((int)register0x00000054 + -200) = puVar3;
              *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_00436724;
              uVar18 = FUN_000209b4(PTR_DAT_00436724,puVar4);
            }
            else {
              uVar16 = 0;
              if (puVar4 < puVar3) {
                *(uint *)((int)register0x00000054 + -0xcc) =
                     iVar7 + ((uint)puVar4 & -((int)puVar3 - (int)puVar4) >> 0x1f);
                *(int *)((int)register0x00000054 + -200) = (int)puVar3 - (int)puVar4;
                FUN_000b6cc4();
                iVar5 = *(int *)((int)register0x00000054 + -0xc4);
                puVar4 = *(undefined **)((int)register0x00000054 + -0x9c);
                iVar7 = *(int *)((int)register0x00000054 + -0x70);
                puVar8 = *(undefined8 **)((int)register0x00000054 + -0x78);
                puVar9 = *(undefined **)((int)register0x00000054 + -0xac);
                puVar11 = PTR_DAT_00436710;
                goto LAB_004364f4;
              }
            }
            uVar18 = FUN_0009dc34((int)((ulonglong)uVar18 >> 0x20),(int)uVar18);
LAB_004366d4:
            FUN_0009dbf4((int)uVar18,puVar13,(int)((ulonglong)uVar18 >> 0x20));
            iVar7 = extraout_r1_01;
            iVar5 = extraout_r3;
            goto LAB_004366e0;
          }
          *(undefined8 *)((int)register0x00000054 + -0x84) = uVar18;
          *(undefined4 *)((int)register0x00000054 + -0xcc) =
               *(undefined4 *)((int)register0x00000054 + -0x84);
          *(undefined4 *)((int)register0x00000054 + -200) =
               *(undefined4 *)((int)register0x00000054 + -0x80);
          FUN_0008f6c0();
          *(undefined4 *)((int)register0x00000054 + -100) =
               *(undefined4 *)((int)register0x00000054 + -0xc4);
          *(undefined **)((int)register0x00000054 + -0xcc) = PTR_DAT_00436708;
          *(undefined4 *)((int)register0x00000054 + -200) =
               *(undefined4 *)((int)register0x00000054 + -0x74);
          *(undefined4 *)((int)register0x00000054 + -0xc4) =
               *(undefined4 *)((int)register0x00000054 + -0x70);
          *(undefined4 *)((int)register0x00000054 + -0xc0) =
               *(undefined4 *)((int)register0x00000054 + -0x98);
          FUN_00093a08();
          uVar18 = CONCAT44(PTR_DAT_00436710,*(undefined4 **)((int)register0x00000054 + -0xbc));
          **(undefined4 **)((int)register0x00000054 + -0xbc) = PTR_DAT_00436710;
          if (*(int *)PTR_DAT_0043670c == 0) {
            puVar3 = *(undefined **)((int)register0x00000054 + -100);
          }
          else {
            uVar18 = FUN_0009db64();
            puVar3 = *(undefined **)((int)register0x00000054 + -100);
            *unaff_r8 = puVar3;
            unaff_r8[1] = *(undefined4 *)((int)uVar18 + 4);
          }
          puVar4 = (undefined *)((ulonglong)uVar18 >> 0x20);
          *(undefined **)((int)uVar18 + 4) = puVar3;
LAB_00436324:
          *(undefined1 **)((int)register0x00000054 + -0xcc) =
               (undefined1 *)((int)register0x00000054 + -0x60);
          FUN_000919c8((undefined1 *)((int)register0x00000054 + -0x60),puVar4,puVar3);
        }
        *(undefined1 **)((int)register0x00000054 + -0xcc) =
             (undefined1 *)((int)register0x00000054 + -0x30);
        FUN_000919c8();
      }
LAB_004366e0:
      *(int *)((int)register0x00000054 + -0xcc) = iVar5;
      *(int *)((int)register0x00000054 + -200) = iVar7;
      *(undefined **)((int)register0x00000054 + -0xc4) = PTR_DAT_00436724;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0xd0);
      if ((bool)uVar16) {
        register0x00000054 = (BADSPACEBASE *)puVar15;
      }
    }
    unaff_lr = 0x436700;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Init_messages @ 00436728 (size 1320) */

void k3c_internal_pkg_msgproto___MessageParser__Init_messages(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  uint *puVar4;
  undefined4 **ppuVar5;
  uint extraout_r1;
  int extraout_r1_00;
  undefined4 *extraout_r2;
  undefined4 *puVar6;
  undefined4 *extraout_r2_00;
  undefined4 *extraout_r2_01;
  uint uVar7;
  uint extraout_r2_02;
  uint uVar8;
  int extraout_r3;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  uint *in_stack_00000018;
  int in_stack_0000001c;
  undefined4 *local_80;
  undefined4 **local_7c;
  undefined4 *local_78;
  uint *local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 *local_30;
  uint *local_2c;
  undefined1 auStack_8 [8];
  
  while (auStack_8 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_0009dee4(0,&local_30);
  local_80 = in_stack_00000008;
  local_7c = &local_30;
  FUN_00091764();
  while (local_30 != (undefined4 *)0x0) {
    ppuVar5 = (undefined4 **)*local_2c;
    puVar9 = (undefined4 *)*local_30;
    puVar1 = (uint *)local_30[1];
    iVar11 = 8;
    pcVar12 = PTR_s_responsesignal__truncatereadlink_008216f7_0x105d_00436c58;
    for (iVar10 = 0; iVar10 < in_stack_00000010; iVar10 = iVar10 + 1) {
      if (*(undefined4 ***)(in_stack_0000000c + iVar10 * 4) == ppuVar5) {
        iVar11 = 7;
        pcVar12 = PTR_s_commandrpi_usbPWM_MAXADC_MAXdir__008216f7_0x8cc_00436c88;
      }
    }
    for (iVar10 = 0; iVar10 < in_stack_0000001c; iVar10 = iVar10 + 1) {
      if ((undefined4 **)in_stack_00000018[iVar10] == ppuVar5) {
        iVar11 = 6;
        pcVar12 = PTR_s_outputexec__netdnsdomaingopherte_008216f7_0x2ca_00436c8c;
      }
    }
    FUN_00022cf8();
    FUN_00020ce0();
    *local_80 = PTR_DAT_00436c60;
    puVar2 = local_80;
    puVar6 = local_80;
    if (*(int *)PTR_DAT_00436c64 != 0) {
      puVar2 = (undefined4 *)FUN_0009db64();
      *in_stack_00000018 = (uint)puVar2;
      in_stack_00000018[1] = extraout_r2[1];
      puVar6 = extraout_r2;
    }
    puVar6[1] = puVar2;
    FUN_0008f77c();
    local_80[2] = PTR_DAT_00436c68;
    ppuVar3 = local_7c;
    puVar2 = local_80;
    if (*(int *)PTR_DAT_00436c64 != 0) {
      ppuVar3 = (undefined4 **)FUN_0009db64();
      *in_stack_00000018 = (uint)ppuVar3;
      in_stack_00000018[1] = extraout_r2_00[3];
      puVar2 = extraout_r2_00;
    }
    puVar2[3] = ppuVar3;
    FUN_0008f77c();
    local_80[4] = PTR_DAT_00436c68;
    if (*(int *)PTR_DAT_00436c64 != 0) {
      local_7c = (undefined4 **)FUN_0009db64();
      *in_stack_00000018 = (uint)local_7c;
      in_stack_00000018[1] = extraout_r2_01[5];
      local_80 = extraout_r2_01;
    }
    local_80[5] = local_7c;
    FUN_0008f820();
    uVar7 = *(int *)(in_stack_00000004 + 0x18) + 1;
    uVar8 = *(uint *)(in_stack_00000004 + 0x14);
    iVar10 = in_stack_00000004;
    if (*(uint *)(in_stack_00000004 + 0x1c) < uVar7) {
      local_74 = (uint *)PTR_DAT_00436c6c;
      FUN_000987f4();
      *(undefined4 *)(in_stack_00000004 + 0x1c) = local_68;
      uVar8 = local_70;
      uVar7 = local_6c;
      if (*(int *)PTR_DAT_00436c64 != 0) {
        FUN_0009db64();
        *in_stack_00000018 = extraout_r1;
        in_stack_00000018[1] = *(uint *)(extraout_r3 + 0x14);
        uVar8 = extraout_r1;
        uVar7 = extraout_r2_02;
        iVar10 = extraout_r3;
      }
      *(uint *)(iVar10 + 0x14) = uVar8;
    }
    *(uint *)(iVar10 + 0x18) = uVar7;
    *(undefined **)(uVar8 + (uVar7 - 1) * 8) = PTR_DAT_00436c70;
    iVar10 = uVar8 + (uVar7 - 1) * 8;
    if (*(int *)PTR_DAT_00436c64 != 0) {
      FUN_0009db64();
      *in_stack_00000018 = (uint)local_78;
      in_stack_00000018[1] = *(uint *)(extraout_r1_00 + 4);
      iVar10 = extraout_r1_00;
    }
    *(undefined4 **)(iVar10 + 4) = local_78;
    FUN_00093a08();
    *local_74 = (uint)ppuVar5;
    FUN_00020ce0();
    k3c_internal_pkg_msgproto___PT_uint32__Encode();
    if ((((iVar11 == 6) && (*pcVar12 == 'o')) && (pcVar12[1] == 'u')) &&
       (((pcVar12[2] == 't' && (pcVar12[3] == 'p')) && ((pcVar12[4] == 'u' && (pcVar12[5] == 't'))))
       )) {
      k3c_internal_pkg_msgproto_NewOutputFormat();
      local_80 = *(undefined4 **)(in_stack_00000004 + 0x20);
      FUN_00092908();
      *puVar9 = PTR_DAT_00436c7c;
      puVar2 = puVar9;
      if (*(int *)PTR_DAT_00436c64 != 0) {
        puVar2 = (undefined4 *)FUN_0009db64();
        *in_stack_00000018 = local_70;
        in_stack_00000018[1] = puVar2[1];
      }
      puVar2[1] = local_70;
      local_7c = ppuVar5;
      local_78 = puVar9;
    }
    else {
      local_70 = *(uint *)(in_stack_00000004 + 0x10);
      k3c_internal_pkg_msgproto_NewMessageFormat();
      FUN_00092908();
      *puVar9 = PTR_DAT_00436c80;
      if (*(int *)PTR_DAT_00436c64 != 0) {
        puVar9 = (undefined4 *)FUN_0009db64();
        *in_stack_00000018 = local_6c;
        in_stack_00000018[1] = puVar9[1];
      }
      puVar9[1] = local_6c;
      local_80 = *(undefined4 **)(in_stack_00000004 + 0x24);
      local_7c = *(undefined4 ***)(local_6c + 0x14);
      local_78 = *(undefined4 **)(local_6c + 0x18);
      FUN_00093a08();
      puVar4 = puVar1;
      if (*(int *)PTR_DAT_00436c64 != 0) {
        puVar4 = (uint *)FUN_0009db64();
        *in_stack_00000018 = local_6c;
        in_stack_00000018[1] = *puVar4;
      }
      *puVar4 = local_6c;
    }
    FUN_000919c8();
    local_74 = puVar1;
  }
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Process_identify @ 00436c90 (size 2836) */

/* WARNING: Removing unreachable block (ram,0x00436cd4) */

void k3c_internal_pkg_msgproto___MessageParser__Process_identify(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined *extraout_r1;
  undefined *puVar6;
  uint uVar7;
  int extraout_r2;
  int *piVar8;
  int extraout_r2_00;
  uint extraout_r2_01;
  bool bVar9;
  int extraout_r3;
  int extraout_r3_00;
  double *pdVar10;
  int iVar11;
  int *unaff_r8;
  int unaff_r10;
  undefined4 unaff_lr;
  bool bVar12;
  double dVar13;
  undefined8 uVar14;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  char in_stack_00000014;
  undefined *puVar15;
  int *in_stack_fffffd4c;
  int *piVar16;
  undefined1 *in_stack_fffffd5c;
  int *in_stack_fffffd60;
  int *in_stack_fffffd64;
  undefined1 auStack_254 [8];
  int *local_24c;
  int local_248;
  double *local_244;
  undefined1 *local_240;
  undefined1 *local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined1 *local_230;
  undefined1 auStack_22c [108];
  undefined1 auStack_1c0 [8];
  undefined *local_1b8;
  undefined1 *local_1b4;
  undefined1 auStack_1a4 [108];
  undefined1 auStack_138 [8];
  undefined *local_130;
  undefined1 *local_12c;
  undefined1 auStack_11c [140];
  undefined1 auStack_90 [8];
  undefined *local_88;
  undefined1 *local_84;
  undefined *local_74 [3];
  undefined4 *local_68;
  int *local_64;
  undefined *local_38;
  undefined *local_34;
  int local_30;
  undefined *local_28;
  undefined *local_24;
  undefined *local_20;
  undefined4 local_1c;
  undefined1 *local_18;
  int local_14;
  int local_10;
  int *local_c;
  int *local_8;
  undefined **local_4;
  
  while (&local_23c <= *(undefined1 ***)(unaff_r10 + 8)) {
    unaff_lr = 0x4377f0;
    FUN_0009bf64();
  }
  local_4 = (undefined **)0x0;
  if (in_stack_00000014 == '\0') {
    bVar9 = false;
  }
  else {
    FUN_00022cf8();
    in_stack_fffffd4c[1] = in_stack_0000000c;
    in_stack_fffffd4c[2] = in_stack_00000010;
    piVar16 = in_stack_fffffd4c;
    if (*(int *)PTR_DAT_00437534 != 0) {
      in_stack_fffffd4c = (int *)FUN_0009db54();
      *unaff_r8 = in_stack_00000008;
    }
    *in_stack_fffffd4c = in_stack_00000008;
    in_stack_fffffd4c[3] = 0;
    in_stack_fffffd4c[4] = 0;
    in_stack_fffffd4c[5] = -1;
    local_24c = in_stack_fffffd4c;
    FUN_00022cf8();
    uVar1 = 0;
    local_c = piVar16;
    FUN_0042f3b8(piVar16);
    if (in_stack_fffffd64 == (int *)0x0) {
      local_74[0] = 
      PTR_k3c_internal_pkg_msgproto___MessageParser__Process_identify_deferwrap1_00437540;
      local_4 = local_74;
      if (in_stack_fffffd5c != (undefined1 *)0x0) {
        FUN_00020dac();
      }
      in_stack_fffffd5c = (undefined1 *)0x0;
      in_stack_fffffd60 = (int *)0x0;
      in_stack_fffffd4c = local_c;
      FUN_000ad8d0();
      uVar7 = local_c[3];
      if ((uint)local_c[1] < uVar7) goto LAB_004377d4;
      in_stack_00000010 = local_c[2] - uVar7;
      in_stack_0000000c = local_c[1] - uVar7;
      in_stack_00000008 = *local_c + (uVar7 & -in_stack_00000010 >> 0x1f);
      bVar9 = true;
    }
    else {
      (*(code *)in_stack_fffffd64[3])();
      local_20 = (undefined *)0x0;
      local_1c = 0;
      FUN_0008f77c();
      local_20 = PTR_DAT_0043754c;
      in_stack_fffffd4c = (int *)0x1;
      local_1c = uVar1;
      k3c_internal_pkg_logger_Error();
      bVar9 = false;
    }
  }
  *(int *)(in_stack_00000004 + 0x40) = in_stack_0000000c;
  *(int *)(in_stack_00000004 + 0x44) = in_stack_00000010;
  if (*(int *)PTR_DAT_00437534 != 0) {
    FUN_0009db64();
    *unaff_r8 = extraout_r2;
    unaff_r8[1] = *(int *)(in_stack_00000004 + 0x3c);
    in_stack_00000008 = extraout_r2;
  }
  *(int *)(in_stack_00000004 + 0x3c) = in_stack_00000008;
  puVar6 = PTR_DAT_00437550;
  local_10 = in_stack_00000008;
  FUN_00022cf8();
  local_8 = in_stack_fffffd4c;
  FUN_000908bc();
  if (*(int *)PTR_DAT_00437534 != 0) {
    FUN_0009db64();
    *unaff_r8 = (int)extraout_r1;
    unaff_r8[1] = *local_8;
    puVar6 = extraout_r1;
  }
  *local_8 = (int)puVar6;
  iVar11 = local_10;
  puVar6 = PTR_DAT_00437554;
  piVar16 = local_8;
  FUN_001574a4();
  bVar12 = in_stack_fffffd5c == (undefined1 *)0x0;
  if (!bVar12) {
    FUN_0009defc(0,&local_38,in_stack_fffffd60,in_stack_fffffd5c,unaff_lr,iVar11,in_stack_0000000c,
                 in_stack_00000010,puVar6);
    local_38 = PTR_DAT_0043754c;
    local_34 = PTR_DAT_00437558;
    local_30 = extraout_r3;
    if (!bVar12) {
      local_30 = *(int *)(extraout_r3 + 4);
    }
    FUN_0008f820();
    local_28 = PTR_DAT_0043755c;
    local_24 = puVar6;
    k3c_internal_pkg_logger_Error();
  }
  puVar15 = PTR_DAT_00437550;
  FUN_00093560();
  puVar6 = (undefined *)*piVar16;
  if ((char)in_stack_fffffd5c == '\0') {
    uVar1 = FUN_0009def8(0,auStack_90);
    FUN_0009de88(uVar1,auStack_11c);
    local_84 = auStack_11c;
    FUN_0006aa3c();
    puVar6 = PTR_DAT_00437550;
    local_88 = puVar15;
  }
  if (puVar6 == PTR_DAT_00437550) {
    k3c_internal_pkg_msgproto___MessageParser__Fill_enumerations();
    FUN_00025f60();
    if ((undefined *)*piVar16 == PTR_DAT_00437550) {
      local_10 = piVar16[1];
      FUN_00025f60();
      if ((undefined *)*piVar16 == PTR_DAT_00437550) {
        puVar15 = PTR_DAT_00437550;
        local_14 = piVar16[1];
        FUN_00093560();
        puVar2 = (undefined1 *)piVar16[1];
        puVar6 = (undefined *)*piVar16;
        if (((uint)in_stack_fffffd5c & 0xff) == 0) {
          uVar1 = FUN_0009def8(0,auStack_138);
          FUN_0009dea8(uVar1,auStack_1a4);
          local_12c = auStack_1a4;
          FUN_0006aa3c();
          puVar2 = auStack_138;
          puVar6 = PTR_DAT_00437570;
          local_130 = puVar15;
        }
        if (puVar6 == PTR_DAT_00437570) {
          local_240 = puVar2;
          uVar1 = FUN_0009def8(0,auStack_1c0);
          FUN_0009dea8(uVar1,auStack_22c);
          local_1b4 = auStack_22c;
          FUN_0006aa3c();
          local_1b8 = puVar15;
          FUN_0009dee4(0,&local_68);
          FUN_00091764();
          piVar3 = (int *)0x0;
          piVar8 = (int *)0x0;
          puVar2 = auStack_254;
          while (local_68 != (undefined4 *)0x0) {
            if ((undefined *)*local_64 != PTR_DAT_00437574) goto LAB_00437770;
            pdVar10 = (double *)local_64[1];
            piVar8 = (int *)((int)piVar8 + 1);
            dVar13 = *pdVar10;
            if (piVar3 < piVar8) {
              piVar16 = (int *)PTR_DAT_00437578;
              puVar2 = in_stack_fffffd5c;
              piVar8 = in_stack_fffffd60;
              piVar3 = in_stack_fffffd64;
              local_244 = pdVar10;
              local_234 = *local_68;
              FUN_000987f4();
              pdVar10 = local_244;
              in_stack_fffffd5c = puVar2;
              in_stack_fffffd60 = piVar8;
              in_stack_fffffd64 = piVar3;
            }
            local_230 = puVar2;
            *(int *)(puVar2 + ((int)piVar8 + -1) * 4) = (int)(longlong)dVar13;
            dVar13 = *pdVar10;
            FUN_00093a08();
            *piVar16 = (int)(longlong)dVar13;
            FUN_000919c8();
            puVar2 = local_230;
          }
          local_18 = puVar2;
          FUN_0009dee4(0,&local_68);
          FUN_00091764();
          while (local_68 != (undefined4 *)0x0) {
            if ((undefined *)*local_64 != PTR_DAT_00437574) goto LAB_0043775c;
            dVar13 = *(double *)local_64[1];
            FUN_00093a08();
            *piVar16 = (int)(longlong)dVar13;
            FUN_000919c8();
          }
          FUN_0009dee4(0,&local_68);
          FUN_00091764();
          piVar4 = (int *)0x0;
          piVar8 = (int *)0x0;
          puVar2 = auStack_254;
          while (local_68 != (undefined4 *)0x0) {
            piVar8 = (int *)((int)piVar8 + 1);
            iVar11 = *local_64;
            if (piVar4 < piVar8) {
              piVar16 = (int *)PTR_DAT_00437578;
              puVar2 = in_stack_fffffd5c;
              piVar8 = in_stack_fffffd60;
              piVar4 = in_stack_fffffd64;
              local_238 = *local_68;
              FUN_000987f4();
              in_stack_fffffd5c = puVar2;
              in_stack_fffffd60 = piVar8;
              in_stack_fffffd64 = piVar4;
            }
            local_23c = puVar2;
            *(int *)(puVar2 + ((int)piVar8 + -1) * 4) = iVar11;
            FUN_00093a08();
            *piVar16 = iVar11;
            FUN_000919c8();
            puVar2 = local_23c;
          }
          k3c_internal_pkg_msgproto___MessageParser__Init_messages();
          iVar11 = *local_8;
          uVar1 = 6;
          puVar6 = PTR_DAT_00437550;
          puVar15 = PTR_s_config_panic_resultparamsmethods_008214ab_0x24_0043757c;
          FUN_00093560();
          if ((char)puVar2 == '\0') goto LAB_00437580;
          if ((undefined *)*piVar3 == PTR_DAT_00437550) {
            FUN_0009dee4(0,&local_68,piVar3[1],(undefined *)*piVar3,unaff_lr,puVar6,iVar11,puVar15,
                         uVar1,piVar3,puVar2,piVar8,piVar4);
            FUN_00091764();
            do {
              if (local_68 == (undefined4 *)0x0) {
LAB_00437580:
                FUN_00025f60();
                if ((undefined *)*piVar3 == PTR_DAT_00437800) {
                  iVar5 = *(int *)piVar3[1];
                  *(int *)(in_stack_00000004 + 0x30) = ((int *)piVar3[1])[1];
                  iVar11 = in_stack_00000004;
                  if (*(int *)PTR_DAT_00437804 != 0) {
                    iVar5 = FUN_0009db64();
                    *unaff_r8 = iVar5;
                    unaff_r8[1] = *(int *)(extraout_r3_00 + 0x2c);
                    iVar11 = extraout_r3_00;
                  }
                  *(int *)(iVar11 + 0x2c) = iVar5;
                  FUN_00025f60();
                  if ((undefined *)*piVar3 == PTR_DAT_00437800) {
                    iVar11 = *(int *)piVar3[1];
                    *(int *)(in_stack_00000004 + 0x38) = ((int *)piVar3[1])[1];
                    if (*(int *)PTR_DAT_00437804 != 0) {
                      iVar11 = FUN_0009db64();
                      *unaff_r8 = iVar11;
                      unaff_r8[1] = *(int *)(extraout_r2_00 + 0x34);
                      in_stack_00000004 = extraout_r2_00;
                    }
                    *(int *)(in_stack_00000004 + 0x34) = iVar11;
                    if (bVar9) {
                      (*(code *)*local_4)();
                    }
                    return;
                  }
                  FUN_000209b4();
                }
                uVar14 = FUN_000209b4();
              }
              else {
                iVar11 = *local_64;
                local_248 = local_64[1];
                FUN_00093a08();
                uVar14 = CONCAT44(local_248,piVar3);
                *piVar3 = iVar11;
                if (*(int *)PTR_DAT_00437804 != 0) {
                  iVar11 = FUN_0009db64();
                  uVar14 = CONCAT44(local_248,iVar11);
                  *unaff_r8 = local_248;
                  unaff_r8[1] = *(int *)(iVar11 + 4);
                }
              }
              *(int *)((int)uVar14 + 4) = (int)((ulonglong)uVar14 >> 0x20);
              FUN_000919c8();
            } while( true );
          }
          FUN_000209b4();
LAB_0043775c:
          FUN_000209b4();
LAB_00437770:
          FUN_000209b4();
        }
        FUN_000209b4();
      }
      FUN_000209b4();
    }
    FUN_000209b4();
  }
  FUN_000209b4();
  uVar7 = extraout_r2_01;
LAB_004377d4:
  uVar1 = FUN_0009dc34(uVar7);
  FUN_00054344(uVar1);
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Process_identify.deferwrap1 @ 00437810 (size 92) */

void k3c_internal_pkg_msgproto___MessageParser__Process_identify_deferwrap1(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 auStack_c [3];
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined1 *)*piVar1)) {
    *piVar1 = (int)auStack_c;
  }
  auStack_c[0] = *(undefined4 *)(unaff_r7 + 8);
  (**(code **)(*(int *)(unaff_r7 + 4) + 0xc))();
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Get_raw_data_dictionary @ 0043786c (size 32) */

void k3c_internal_pkg_msgproto___MessageParser__Get_raw_data_dictionary(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x3c);
  uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x40);
  uStack00000010 = *(undefined4 *)(in_stack_00000004 + 0x44);
                    /* WARNING: Could not recover jumptable at 0x00437888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Get_version_info @ 0043788c (size 40) */

void k3c_internal_pkg_msgproto___MessageParser__Get_version_info(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  undefined4 uStack00000010;
  undefined4 uStack00000014;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x2c);
  uStack0000000c = *(undefined4 *)(in_stack_00000004 + 0x30);
  uStack00000010 = *(undefined4 *)(in_stack_00000004 + 0x34);
  uStack00000014 = *(undefined4 *)(in_stack_00000004 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x004378b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Get_messages @ 004378b4 (size 200) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto___MessageParser__Get_messages(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x437978;
    FUN_0009bf64();
  }
  if (*(int *)(in_stack_00000004 + 0x18) == 0) {
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_20 = *(undefined4 *)(in_stack_00000004 + 0x14);
  }
  else {
    FUN_000987f4();
  }
  FUN_00093f5c();
  in_stack_00000008 = uStack_20;
  in_stack_0000000c = uStack_1c;
  in_stack_00000010 = uStack_18;
                    /* WARNING: Could not recover jumptable at 0x0043796c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Get_enumerations @ 00437984 (size 16) */

void k3c_internal_pkg_msgproto___MessageParser__Get_enumerations(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00437990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Get_constants @ 00437994 (size 16) */

void k3c_internal_pkg_msgproto___MessageParser__Get_constants(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x004379a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Get_constant @ 004379a4 (size 352) */

void k3c_internal_pkg_msgproto___MessageParser__Get_constant(void)

{
  undefined *puVar1;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  int *local_24;
  char local_20;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  FUN_00093560();
  if (local_20 == '\0') {
    if (in_stack_00000010 == 0) {
      FUN_0008f77c();
      k3c_internal_pkg_logger_Errorf();
      return;
    }
    return;
  }
  puVar1 = PTR_DAT_00437b0c;
  if (*local_24 == 0) {
    puVar1 = (undefined *)0x0;
  }
  (**(code **)(puVar1 + 0x54))();
  k3c_internal_pkg_msgproto___MessageParser__get_constant4kind();
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageParser).get_constant4kind @ 00437b18 (size 1100) */

void k3c_internal_pkg_msgproto___MessageParser__get_constant4kind(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined *extraout_r1;
  undefined *extraout_r1_00;
  undefined *extraout_r2;
  undefined *puVar7;
  undefined *extraout_r2_00;
  undefined4 uVar8;
  int unaff_r10;
  undefined1 *puVar9;
  undefined4 unaff_lr;
  undefined1 uVar10;
  uint in_fpscr;
  undefined8 uVar11;
  double dVar12;
  uint unaff_s30;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar9 = (undefined1 *)((int)register0x00000054 + -0x58);
      *(undefined4 *)((int)register0x00000054 + -0x58) = unaff_lr;
      iVar1 = *(int *)((int)register0x00000054 + 0x14);
      iVar3 = *(int *)((int)register0x00000054 + 0x10);
      if (iVar1 == iVar3) {
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + 0x1c) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
                    /* WARNING: Could not recover jumptable at 0x00437f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x58))();
        return;
      }
      if (iVar3 == 0x18) {
        puVar4 = *(undefined **)((int)register0x00000054 + 8);
        uVar10 = 0;
        puVar7 = PTR_DAT_00437f68;
        if (puVar4 == PTR_DAT_00437f68) {
          uVar8 = **(undefined4 **)((int)register0x00000054 + 0xc);
          uVar5 = (*(undefined4 **)((int)register0x00000054 + 0xc))[1];
          if (iVar1 == 0x18) {
            *(undefined4 *)((int)register0x00000054 + -0x54) = uVar8;
            *(undefined4 *)((int)register0x00000054 + -0x50) = uVar5;
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_00437f68;
            *(undefined4 *)((int)register0x00000054 + 0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -0x4c);
            return;
          }
          if (iVar1 == 2) {
            *(undefined4 *)((int)register0x00000054 + -0x54) = uVar8;
            *(undefined4 *)((int)register0x00000054 + -0x50) = uVar5;
            FUN_000b6cc4();
            if (*(int *)((int)register0x00000054 + -0x48) == 0) {
              *(undefined4 *)((int)register0x00000054 + -0x54) =
                   *(undefined4 *)((int)register0x00000054 + -0x4c);
              FUN_00020ce0();
              *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_00437f6c;
              *(undefined4 *)((int)register0x00000054 + 0x1c) =
                   *(undefined4 *)((int)register0x00000054 + -0x50);
              return;
            }
            pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x48) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x54) =
                 *(undefined4 *)((int)register0x00000054 + -0x44);
            (*pcVar2)();
            *(undefined4 *)((int)register0x00000054 + -8) = 0;
            *(undefined4 *)((int)register0x00000054 + -4) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x54) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            *(undefined4 *)((int)register0x00000054 + -0x50) =
                 *(undefined4 *)((int)register0x00000054 + -0x4c);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00437f68;
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0x4c);
            *(undefined1 **)((int)register0x00000054 + -0x54) =
                 (undefined1 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x4c) = 1;
            k3c_internal_pkg_logger_Error();
            *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_00437f6c;
            *(undefined **)((int)register0x00000054 + 0x1c) = PTR_SUB_00437f78;
            return;
          }
          if (iVar1 == 0xe) {
            *(undefined4 *)((int)register0x00000054 + -0x54) = uVar8;
            *(undefined4 *)((int)register0x00000054 + -0x50) = uVar5;
            *(undefined4 *)((int)register0x00000054 + -0x4c) = 0x40;
            FUN_000b5538();
            if (*(int *)((int)register0x00000054 + -0x40) == 0) {
              *(undefined8 *)((int)register0x00000054 + -0x10) =
                   *(undefined8 *)((int)register0x00000054 + -0x48);
              *(undefined4 *)((int)register0x00000054 + -0x54) =
                   *(undefined4 *)((int)register0x00000054 + -0x10);
              *(undefined4 *)((int)register0x00000054 + -0x50) =
                   *(undefined4 *)((int)register0x00000054 + -0xc);
              FUN_0008f6c0();
              *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_00437f74;
              *(undefined4 *)((int)register0x00000054 + 0x1c) =
                   *(undefined4 *)((int)register0x00000054 + -0x4c);
              return;
            }
            pcVar2 = *(code **)(*(int *)((int)register0x00000054 + -0x40) + 0xc);
            *(undefined4 *)((int)register0x00000054 + -0x54) =
                 *(undefined4 *)((int)register0x00000054 + -0x3c);
            (*pcVar2)();
            *(undefined4 *)((int)register0x00000054 + -8) = 0;
            *(undefined4 *)((int)register0x00000054 + -4) = 0;
            *(undefined4 *)((int)register0x00000054 + -0x54) =
                 *(undefined4 *)((int)register0x00000054 + -0x50);
            *(undefined4 *)((int)register0x00000054 + -0x50) =
                 *(undefined4 *)((int)register0x00000054 + -0x4c);
            FUN_0008f77c();
            *(undefined **)((int)register0x00000054 + -8) = PTR_DAT_00437f68;
            *(undefined4 *)((int)register0x00000054 + -4) =
                 *(undefined4 *)((int)register0x00000054 + -0x4c);
            *(undefined1 **)((int)register0x00000054 + -0x54) =
                 (undefined1 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + -0x50) = 1;
            *(undefined4 *)((int)register0x00000054 + -0x4c) = 1;
            k3c_internal_pkg_logger_Error();
            *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_00437f6c;
            *(undefined **)((int)register0x00000054 + 0x1c) = PTR_SUB_00437f70;
            return;
          }
LAB_00437ef0:
          *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
          *(undefined4 *)((int)register0x00000054 + 0x1c) = 0;
          return;
        }
      }
      else {
        if (iVar3 == 2) {
          puVar4 = *(undefined **)((int)register0x00000054 + 8);
          uVar10 = 0;
          puVar7 = PTR_DAT_00437f6c;
          if (puVar4 == PTR_DAT_00437f6c) {
            uVar6 = **(uint **)((int)register0x00000054 + 0xc);
            if (iVar1 == 0x18) {
              *(uint *)((int)register0x00000054 + -0x54) = uVar6;
              *(int *)((int)register0x00000054 + -0x50) = (int)uVar6 >> 0x1f;
              *(undefined4 *)((int)register0x00000054 + -0x4c) = 10;
              FUN_000bcf0c();
              *(undefined4 *)((int)register0x00000054 + -0x54) =
                   *(undefined4 *)((int)register0x00000054 + -0x48);
              *(undefined4 *)((int)register0x00000054 + -0x50) =
                   *(undefined4 *)((int)register0x00000054 + -0x44);
              FUN_0008f77c();
              *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_00437f68;
              *(undefined4 *)((int)register0x00000054 + 0x1c) =
                   *(undefined4 *)((int)register0x00000054 + -0x4c);
                    /* WARNING: Could not recover jumptable at 0x00437dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x58))();
              return;
            }
            if (iVar1 == 2) {
              *(uint *)((int)register0x00000054 + -0x54) = uVar6;
              FUN_00020ce0();
              *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_00437f6c;
              *(undefined4 *)((int)register0x00000054 + 0x1c) =
                   *(undefined4 *)((int)register0x00000054 + -0x50);
                    /* WARNING: Could not recover jumptable at 0x00437d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x58))();
              return;
            }
            if (iVar1 == 0xe) {
              uVar11 = VectorSignedToFloat(unaff_s30 & 0xffff0000 | uVar6 & 0xffff,
                                           (byte)(in_fpscr >> 0x16) & 3);
              *(undefined8 *)((int)register0x00000054 + -0x18) = uVar11;
              *(undefined4 *)((int)register0x00000054 + -0x54) =
                   *(undefined4 *)((int)register0x00000054 + -0x18);
              *(undefined4 *)((int)register0x00000054 + -0x50) =
                   *(undefined4 *)((int)register0x00000054 + -0x14);
              FUN_0008f6c0();
              *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_00437f74;
              *(undefined4 *)((int)register0x00000054 + 0x1c) =
                   *(undefined4 *)((int)register0x00000054 + -0x4c);
                    /* WARNING: Could not recover jumptable at 0x00437d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x58))();
              return;
            }
            goto LAB_00437ef0;
          }
        }
        else {
          if (iVar3 != 0xe) goto LAB_00437ef0;
          uVar10 = *(undefined **)((int)register0x00000054 + 8) == PTR_DAT_00437f74;
          if ((bool)uVar10) {
            dVar12 = **(double **)((int)register0x00000054 + 0xc);
            if (iVar1 == 0x18) {
              *(double *)((int)register0x00000054 + -0x28) = dVar12;
              *(undefined **)((int)register0x00000054 + -0x54) = PTR_DAT_00437f7c;
              *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x4c) = 0x18;
              FUN_000986b8();
              *(undefined4 *)((int)register0x00000054 + -0x54) =
                   *(undefined4 *)((int)register0x00000054 + -0x48);
              *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x4c) = 0x18;
              *(undefined8 *)((int)register0x00000054 + -0x48) =
                   *(undefined8 *)((int)register0x00000054 + -0x28);
              *(undefined1 *)((int)register0x00000054 + -0x40) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x3c) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x38) = 0x40;
              FUN_000b8514();
              *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
              *(undefined4 *)((int)register0x00000054 + -0x50) =
                   *(undefined4 *)((int)register0x00000054 + -0x34);
              *(undefined4 *)((int)register0x00000054 + -0x4c) =
                   *(undefined4 *)((int)register0x00000054 + -0x30);
              FUN_00099104();
              *(undefined4 *)((int)register0x00000054 + -0x54) =
                   *(undefined4 *)((int)register0x00000054 + -0x48);
              *(undefined4 *)((int)register0x00000054 + -0x50) =
                   *(undefined4 *)((int)register0x00000054 + -0x44);
              FUN_0008f77c();
              *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_00437f68;
              *(undefined4 *)((int)register0x00000054 + 0x1c) =
                   *(undefined4 *)((int)register0x00000054 + -0x4c);
                    /* WARNING: Could not recover jumptable at 0x00437eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x58))();
              return;
            }
            if (iVar1 == 2) {
              *(int *)((int)register0x00000054 + -0x54) = (int)(longlong)dVar12;
              FUN_00020ce0();
              *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_00437f6c;
              *(undefined4 *)((int)register0x00000054 + 0x1c) =
                   *(undefined4 *)((int)register0x00000054 + -0x50);
                    /* WARNING: Could not recover jumptable at 0x00437e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x58))();
              return;
            }
            if (iVar1 == 0xe) {
              *(double *)((int)register0x00000054 + -0x20) = dVar12;
              *(undefined4 *)((int)register0x00000054 + -0x54) =
                   *(undefined4 *)((int)register0x00000054 + -0x20);
              *(undefined4 *)((int)register0x00000054 + -0x50) =
                   *(undefined4 *)((int)register0x00000054 + -0x1c);
              FUN_0008f6c0();
              *(undefined **)((int)register0x00000054 + 0x18) = PTR_DAT_00437f74;
              *(undefined4 *)((int)register0x00000054 + 0x1c) =
                   *(undefined4 *)((int)register0x00000054 + -0x4c);
                    /* WARNING: Could not recover jumptable at 0x00437e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)((int)register0x00000054 + -0x58))();
              return;
            }
            goto LAB_00437ef0;
          }
          *(undefined **)((int)register0x00000054 + -0x54) =
               *(undefined **)((int)register0x00000054 + 8);
          *(undefined **)((int)register0x00000054 + -0x50) = PTR_DAT_00437f74;
          *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00437f80;
          FUN_000209b4();
          puVar4 = extraout_r1;
          puVar7 = extraout_r2;
        }
        *(undefined **)((int)register0x00000054 + -0x54) = puVar4;
        *(undefined **)((int)register0x00000054 + -0x50) = puVar7;
        *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00437f80;
        FUN_000209b4();
        puVar4 = extraout_r1_00;
        puVar7 = extraout_r2_00;
      }
      *(undefined **)((int)register0x00000054 + -0x54) = puVar4;
      *(undefined **)((int)register0x00000054 + -0x50) = puVar7;
      *(undefined **)((int)register0x00000054 + -0x4c) = PTR_DAT_00437f80;
      param_1 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x58);
      if ((bool)uVar10) {
        register0x00000054 = (BADSPACEBASE *)puVar9;
      }
    }
    unaff_lr = 0x437f60;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Get_constant_float @ 00437f84 (size 152) */

void k3c_internal_pkg_msgproto___MessageParser__Get_constant_float(void)

{
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined8 in_stack_00000018;
  undefined4 local_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  k3c_internal_pkg_msgproto___MessageParser__Get_constant();
  if (local_8 != 0) {
    if (local_8 == DAT_00438020) {
      return;
    }
    return;
  }
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Get_constant_int @ 00438024 (size 156) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto___MessageParser__Get_constant_int
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
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
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + 4);
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + 0x10);
      *(undefined4 *)((int)register0x00000054 + -0x10) =
           *(undefined4 *)((int)register0x00000054 + 0x14);
      *(undefined4 *)((int)register0x00000054 + -0xc) = 2;
      k3c_internal_pkg_msgproto___MessageParser__Get_constant();
      iVar1 = *(int *)((int)register0x00000054 + -8);
      if (iVar1 == 0) {
        *(undefined4 *)((int)register0x00000054 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00438098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      bVar3 = iVar1 == _UNK_004380c4;
      if (bVar3) {
        *(undefined4 *)((int)register0x00000054 + 0x18) =
             **(undefined4 **)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x0043808c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)register0x00000054 + -0x24))();
        return;
      }
      *(int *)((int)register0x00000054 + -0x20) = iVar1;
      *(int *)((int)register0x00000054 + -0x1c) = _UNK_004380c4;
      *(undefined4 *)((int)register0x00000054 + -0x18) = _UNK_004380c8;
      unaff_lr = 0x4380b0;
      uVar4 = FUN_000209b4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x24);
      param_3 = extraout_r2;
      if (bVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    param_1 = FUN_0009bf64((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),param_3,unaff_lr);
    unaff_lr = 0x4380bc;
    param_3 = extraout_r2_00;
  } while( true );
}



/* k3c/internal/pkg/msgproto.PT_int32.Encode @ 004380cc (size 108) */

void k3c_internal_pkg_msgproto_PT_int32_Encode(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x438118;
    FUN_0009bf64();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = in_stack_00000004;
  uStack_c = in_stack_00000008;
  uStack_8 = in_stack_0000000c;
  uStack_4 = in_stack_00000010;
  k3c_internal_pkg_msgproto___PT_uint32__Encode();
                    /* WARNING: Could not recover jumptable at 0x0043810c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_int32).Encode @ 00438138 (size 112) */

void k3c_internal_pkg_msgproto___PT_int32__Encode(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x438188;
    FUN_0009bf64();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 **)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *in_stack_00000004;
  uStack_c = in_stack_00000008;
  uStack_8 = in_stack_0000000c;
  uStack_4 = in_stack_00000010;
  k3c_internal_pkg_msgproto___PT_uint32__Encode();
                    /* WARNING: Could not recover jumptable at 0x0043817c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.PT_int32.GetIs_dynamic_string @ 004381a8 (size 20) */

void k3c_internal_pkg_msgproto_PT_int32_GetIs_dynamic_string(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(in_stack_00000004 + 1);
                    /* WARNING: Could not recover jumptable at 0x004381b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_int32).GetIs_dynamic_string @ 004381bc (size 20) */

void k3c_internal_pkg_msgproto___PT_int32__GetIs_dynamic_string(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(*in_stack_00000004 + 1);
                    /* WARNING: Could not recover jumptable at 0x004381cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.PT_int32.Get_max_length @ 004381d0 (size 20) */

void k3c_internal_pkg_msgproto_PT_int32_Get_max_length(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x004381e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_int32).Get_max_length @ 004381e4 (size 20) */

void k3c_internal_pkg_msgproto___PT_int32__Get_max_length(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(*in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x004381f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.PT_int32.Parse @ 004381f8 (size 296) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto_PT_int32_Parse(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x10);
      }
      uVar3 = *(uint *)((int)register0x00000054 + 0xc);
      uVar1 = *(uint *)((int)register0x00000054 + 0x14);
      uVar8 = uVar3 == uVar1;
      if (uVar1 < uVar3) {
        uVar4 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
        uVar6 = uVar4 & 0x7f;
        if ((uVar4 & 0x60) == 0x60) {
          uVar6 = uVar4 | 0xffffffe0;
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = 0;
        }
        while( true ) {
          uVar1 = uVar1 + 1;
          if ((uVar4 & 0x80) == 0) {
            *(uint *)((int)register0x00000054 + -4) = uVar1;
            if (*(char *)(*(int *)((int)register0x00000054 + 4) + 8) == '\0') {
              uVar5 = 0;
            }
            *(uint *)((int)register0x00000054 + -0x10) = uVar6;
            *(uint *)((int)register0x00000054 + -0xc) = uVar5;
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + 0x18) = _UNK_00438324;
            *(undefined4 *)((int)register0x00000054 + 0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + 0x20) =
                 *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x004382e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x14))();
            return;
          }
          uVar8 = uVar3 == uVar1;
          if (uVar3 <= uVar1) break;
          uVar4 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
          uVar5 = uVar6 >> 0x19 | uVar5 << 7;
          uVar6 = uVar4 & 0x7f | uVar6 << 7;
        }
        FUN_0009dbd4(uVar1);
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x438300;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*PT_int32).Parse @ 00438328 (size 300) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto___PT_int32__Parse(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x10);
      }
      uVar3 = *(uint *)((int)register0x00000054 + 0xc);
      uVar1 = *(uint *)((int)register0x00000054 + 0x14);
      uVar8 = uVar3 == uVar1;
      if (uVar1 < uVar3) {
        uVar4 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
        uVar6 = uVar4 & 0x7f;
        if ((uVar4 & 0x60) == 0x60) {
          uVar6 = uVar4 | 0xffffffe0;
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = 0;
        }
        while( true ) {
          uVar1 = uVar1 + 1;
          if ((uVar4 & 0x80) == 0) {
            *(uint *)((int)register0x00000054 + -4) = uVar1;
            if (*(char *)(**(int **)((int)register0x00000054 + 4) + 8) == '\0') {
              uVar5 = 0;
            }
            *(uint *)((int)register0x00000054 + -0x10) = uVar6;
            *(uint *)((int)register0x00000054 + -0xc) = uVar5;
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + 0x18) = _UNK_00438458;
            *(undefined4 *)((int)register0x00000054 + 0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + 0x20) =
                 *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00438418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x14))();
            return;
          }
          uVar8 = uVar3 == uVar1;
          if (uVar3 <= uVar1) break;
          uVar4 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
          uVar5 = uVar6 >> 0x19 | uVar5 << 7;
          uVar6 = uVar4 & 0x7f | uVar6 << 7;
        }
        FUN_0009dbd4(uVar1);
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x438434;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.PT_uint16.Encode @ 0043845c (size 108) */

void k3c_internal_pkg_msgproto_PT_uint16_Encode(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4384a8;
    FUN_0009bf64();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = in_stack_00000004;
  uStack_c = in_stack_00000008;
  uStack_8 = in_stack_0000000c;
  uStack_4 = in_stack_00000010;
  k3c_internal_pkg_msgproto___PT_uint32__Encode();
                    /* WARNING: Could not recover jumptable at 0x0043849c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_uint16).Encode @ 004384c8 (size 112) */

void k3c_internal_pkg_msgproto___PT_uint16__Encode(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x438518;
    FUN_0009bf64();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 **)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *in_stack_00000004;
  uStack_c = in_stack_00000008;
  uStack_8 = in_stack_0000000c;
  uStack_4 = in_stack_00000010;
  k3c_internal_pkg_msgproto___PT_uint32__Encode();
                    /* WARNING: Could not recover jumptable at 0x0043850c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.PT_uint16.GetIs_dynamic_string @ 00438538 (size 20) */

void k3c_internal_pkg_msgproto_PT_uint16_GetIs_dynamic_string(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(in_stack_00000004 + 1);
                    /* WARNING: Could not recover jumptable at 0x00438548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_uint16).GetIs_dynamic_string @ 0043854c (size 20) */

void k3c_internal_pkg_msgproto___PT_uint16__GetIs_dynamic_string(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(*in_stack_00000004 + 1);
                    /* WARNING: Could not recover jumptable at 0x0043855c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.PT_uint16.Get_max_length @ 00438560 (size 20) */

void k3c_internal_pkg_msgproto_PT_uint16_Get_max_length(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00438570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_uint16).Get_max_length @ 00438574 (size 20) */

void k3c_internal_pkg_msgproto___PT_uint16__Get_max_length(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(*in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00438584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.PT_uint16.Parse @ 00438588 (size 296) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto_PT_uint16_Parse(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x10);
      }
      uVar3 = *(uint *)((int)register0x00000054 + 0xc);
      uVar1 = *(uint *)((int)register0x00000054 + 0x14);
      uVar8 = uVar3 == uVar1;
      if (uVar1 < uVar3) {
        uVar4 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
        uVar6 = uVar4 & 0x7f;
        if ((uVar4 & 0x60) == 0x60) {
          uVar6 = uVar4 | 0xffffffe0;
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = 0;
        }
        while( true ) {
          uVar1 = uVar1 + 1;
          if ((uVar4 & 0x80) == 0) {
            *(uint *)((int)register0x00000054 + -4) = uVar1;
            if (*(char *)(*(int *)((int)register0x00000054 + 4) + 8) == '\0') {
              uVar5 = 0;
            }
            *(uint *)((int)register0x00000054 + -0x10) = uVar6;
            *(uint *)((int)register0x00000054 + -0xc) = uVar5;
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + 0x18) = _UNK_004386b4;
            *(undefined4 *)((int)register0x00000054 + 0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + 0x20) =
                 *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00438674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x14))();
            return;
          }
          uVar8 = uVar3 == uVar1;
          if (uVar3 <= uVar1) break;
          uVar4 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
          uVar5 = uVar6 >> 0x19 | uVar5 << 7;
          uVar6 = uVar4 & 0x7f | uVar6 << 7;
        }
        FUN_0009dbd4(uVar1);
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x438690;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*PT_uint16).Parse @ 004386b8 (size 300) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto___PT_uint16__Parse(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x10);
      }
      uVar3 = *(uint *)((int)register0x00000054 + 0xc);
      uVar1 = *(uint *)((int)register0x00000054 + 0x14);
      uVar8 = uVar3 == uVar1;
      if (uVar1 < uVar3) {
        uVar4 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
        uVar6 = uVar4 & 0x7f;
        if ((uVar4 & 0x60) == 0x60) {
          uVar6 = uVar4 | 0xffffffe0;
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = 0;
        }
        while( true ) {
          uVar1 = uVar1 + 1;
          if ((uVar4 & 0x80) == 0) {
            *(uint *)((int)register0x00000054 + -4) = uVar1;
            if (*(char *)(**(int **)((int)register0x00000054 + 4) + 8) == '\0') {
              uVar5 = 0;
            }
            *(uint *)((int)register0x00000054 + -0x10) = uVar6;
            *(uint *)((int)register0x00000054 + -0xc) = uVar5;
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + 0x18) = _UNK_004387e8;
            *(undefined4 *)((int)register0x00000054 + 0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + 0x20) =
                 *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x004387a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x14))();
            return;
          }
          uVar8 = uVar3 == uVar1;
          if (uVar3 <= uVar1) break;
          uVar4 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
          uVar5 = uVar6 >> 0x19 | uVar5 << 7;
          uVar6 = uVar4 & 0x7f | uVar6 << 7;
        }
        FUN_0009dbd4(uVar1);
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x4387c4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.PT_int16.Encode @ 004387ec (size 108) */

void k3c_internal_pkg_msgproto_PT_int16_Encode(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x438838;
    FUN_0009bf64();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = in_stack_00000004;
  uStack_c = in_stack_00000008;
  uStack_8 = in_stack_0000000c;
  uStack_4 = in_stack_00000010;
  k3c_internal_pkg_msgproto___PT_uint32__Encode();
                    /* WARNING: Could not recover jumptable at 0x0043882c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_int16).Encode @ 00438858 (size 112) */

void k3c_internal_pkg_msgproto___PT_int16__Encode(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x4388a8;
    FUN_0009bf64();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 **)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *in_stack_00000004;
  uStack_c = in_stack_00000008;
  uStack_8 = in_stack_0000000c;
  uStack_4 = in_stack_00000010;
  k3c_internal_pkg_msgproto___PT_uint32__Encode();
                    /* WARNING: Could not recover jumptable at 0x0043889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.PT_int16.GetIs_dynamic_string @ 004388c8 (size 20) */

void k3c_internal_pkg_msgproto_PT_int16_GetIs_dynamic_string(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(in_stack_00000004 + 1);
                    /* WARNING: Could not recover jumptable at 0x004388d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_int16).GetIs_dynamic_string @ 004388dc (size 20) */

void k3c_internal_pkg_msgproto___PT_int16__GetIs_dynamic_string(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(*in_stack_00000004 + 1);
                    /* WARNING: Could not recover jumptable at 0x004388ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.PT_int16.Get_max_length @ 004388f0 (size 20) */

void k3c_internal_pkg_msgproto_PT_int16_Get_max_length(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00438900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_int16).Get_max_length @ 00438904 (size 20) */

void k3c_internal_pkg_msgproto___PT_int16__Get_max_length(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(*in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00438914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.PT_int16.Parse @ 00438918 (size 296) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto_PT_int16_Parse(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x10);
      }
      uVar3 = *(uint *)((int)register0x00000054 + 0xc);
      uVar1 = *(uint *)((int)register0x00000054 + 0x14);
      uVar8 = uVar3 == uVar1;
      if (uVar1 < uVar3) {
        uVar4 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
        uVar6 = uVar4 & 0x7f;
        if ((uVar4 & 0x60) == 0x60) {
          uVar6 = uVar4 | 0xffffffe0;
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = 0;
        }
        while( true ) {
          uVar1 = uVar1 + 1;
          if ((uVar4 & 0x80) == 0) {
            *(uint *)((int)register0x00000054 + -4) = uVar1;
            if (*(char *)(*(int *)((int)register0x00000054 + 4) + 8) == '\0') {
              uVar5 = 0;
            }
            *(uint *)((int)register0x00000054 + -0x10) = uVar6;
            *(uint *)((int)register0x00000054 + -0xc) = uVar5;
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + 0x18) = _UNK_00438a44;
            *(undefined4 *)((int)register0x00000054 + 0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + 0x20) =
                 *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00438a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x14))();
            return;
          }
          uVar8 = uVar3 == uVar1;
          if (uVar3 <= uVar1) break;
          uVar4 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
          uVar5 = uVar6 >> 0x19 | uVar5 << 7;
          uVar6 = uVar4 & 0x7f | uVar6 << 7;
        }
        FUN_0009dbd4(uVar1);
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x438a20;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*PT_int16).Parse @ 00438a48 (size 300) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto___PT_int16__Parse(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x10);
      }
      uVar3 = *(uint *)((int)register0x00000054 + 0xc);
      uVar1 = *(uint *)((int)register0x00000054 + 0x14);
      uVar8 = uVar3 == uVar1;
      if (uVar1 < uVar3) {
        uVar4 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
        uVar6 = uVar4 & 0x7f;
        if ((uVar4 & 0x60) == 0x60) {
          uVar6 = uVar4 | 0xffffffe0;
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = 0;
        }
        while( true ) {
          uVar1 = uVar1 + 1;
          if ((uVar4 & 0x80) == 0) {
            *(uint *)((int)register0x00000054 + -4) = uVar1;
            if (*(char *)(**(int **)((int)register0x00000054 + 4) + 8) == '\0') {
              uVar5 = 0;
            }
            *(uint *)((int)register0x00000054 + -0x10) = uVar6;
            *(uint *)((int)register0x00000054 + -0xc) = uVar5;
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + 0x18) = _UNK_00438b78;
            *(undefined4 *)((int)register0x00000054 + 0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + 0x20) =
                 *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00438b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x14))();
            return;
          }
          uVar8 = uVar3 == uVar1;
          if (uVar3 <= uVar1) break;
          uVar4 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
          uVar5 = uVar6 >> 0x19 | uVar5 << 7;
          uVar6 = uVar4 & 0x7f | uVar6 << 7;
        }
        FUN_0009dbd4(uVar1);
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x438b54;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.PT_byte.Encode @ 00438b7c (size 108) */

void k3c_internal_pkg_msgproto_PT_byte_Encode(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x438bc8;
    FUN_0009bf64();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = in_stack_00000004;
  uStack_c = in_stack_00000008;
  uStack_8 = in_stack_0000000c;
  uStack_4 = in_stack_00000010;
  k3c_internal_pkg_msgproto___PT_uint32__Encode();
                    /* WARNING: Could not recover jumptable at 0x00438bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_byte).Encode @ 00438be8 (size 112) */

void k3c_internal_pkg_msgproto___PT_byte__Encode(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x438c38;
    FUN_0009bf64();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 **)*piVar1)) {
    *piVar1 = (int)&uStack_10;
  }
  uStack_10 = *in_stack_00000004;
  uStack_c = in_stack_00000008;
  uStack_8 = in_stack_0000000c;
  uStack_4 = in_stack_00000010;
  k3c_internal_pkg_msgproto___PT_uint32__Encode();
                    /* WARNING: Could not recover jumptable at 0x00438c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.PT_byte.GetIs_dynamic_string @ 00438c58 (size 20) */

void k3c_internal_pkg_msgproto_PT_byte_GetIs_dynamic_string(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(in_stack_00000004 + 1);
                    /* WARNING: Could not recover jumptable at 0x00438c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_byte).GetIs_dynamic_string @ 00438c6c (size 20) */

void k3c_internal_pkg_msgproto___PT_byte__GetIs_dynamic_string(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(*in_stack_00000004 + 1);
                    /* WARNING: Could not recover jumptable at 0x00438c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.PT_byte.Get_max_length @ 00438c80 (size 20) */

void k3c_internal_pkg_msgproto_PT_byte_Get_max_length(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00438c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_byte).Get_max_length @ 00438c94 (size 20) */

void k3c_internal_pkg_msgproto___PT_byte__Get_max_length(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(*in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00438ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.PT_byte.Parse @ 00438ca8 (size 296) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto_PT_byte_Parse(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x10);
      }
      uVar3 = *(uint *)((int)register0x00000054 + 0xc);
      uVar1 = *(uint *)((int)register0x00000054 + 0x14);
      uVar8 = uVar3 == uVar1;
      if (uVar1 < uVar3) {
        uVar4 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
        uVar6 = uVar4 & 0x7f;
        if ((uVar4 & 0x60) == 0x60) {
          uVar6 = uVar4 | 0xffffffe0;
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = 0;
        }
        while( true ) {
          uVar1 = uVar1 + 1;
          if ((uVar4 & 0x80) == 0) {
            *(uint *)((int)register0x00000054 + -4) = uVar1;
            if (*(char *)(*(int *)((int)register0x00000054 + 4) + 8) == '\0') {
              uVar5 = 0;
            }
            *(uint *)((int)register0x00000054 + -0x10) = uVar6;
            *(uint *)((int)register0x00000054 + -0xc) = uVar5;
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + 0x18) = _UNK_00438dd4;
            *(undefined4 *)((int)register0x00000054 + 0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + 0x20) =
                 *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00438d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x14))();
            return;
          }
          uVar8 = uVar3 == uVar1;
          if (uVar3 <= uVar1) break;
          uVar4 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
          uVar5 = uVar6 >> 0x19 | uVar5 << 7;
          uVar6 = uVar4 & 0x7f | uVar6 << 7;
        }
        FUN_0009dbd4(uVar1);
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x438db0;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*PT_byte).Parse @ 00438dd8 (size 300) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_internal_pkg_msgproto___PT_byte__Parse(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r10;
  undefined1 *puVar7;
  undefined4 unaff_lr;
  undefined1 uVar8;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar7 = (undefined1 *)((int)register0x00000054 + -0x14);
      *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_lr;
      piVar2 = *(int **)(unaff_r10 + 0x10);
      if ((piVar2 != (int *)0x0) &&
         ((undefined1 *)((int)register0x00000054 + 4) == (undefined1 *)*piVar2)) {
        *piVar2 = (int)((int)register0x00000054 + -0x10);
      }
      uVar3 = *(uint *)((int)register0x00000054 + 0xc);
      uVar1 = *(uint *)((int)register0x00000054 + 0x14);
      uVar8 = uVar3 == uVar1;
      if (uVar1 < uVar3) {
        uVar4 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
        uVar6 = uVar4 & 0x7f;
        if ((uVar4 & 0x60) == 0x60) {
          uVar6 = uVar4 | 0xffffffe0;
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = 0;
        }
        while( true ) {
          uVar1 = uVar1 + 1;
          if ((uVar4 & 0x80) == 0) {
            *(uint *)((int)register0x00000054 + -4) = uVar1;
            if (*(char *)(**(int **)((int)register0x00000054 + 4) + 8) == '\0') {
              uVar5 = 0;
            }
            *(uint *)((int)register0x00000054 + -0x10) = uVar6;
            *(uint *)((int)register0x00000054 + -0xc) = uVar5;
            FUN_0008f6c0();
            *(undefined4 *)((int)register0x00000054 + 0x18) = _UNK_00438f08;
            *(undefined4 *)((int)register0x00000054 + 0x1c) =
                 *(undefined4 *)((int)register0x00000054 + -8);
            *(undefined4 *)((int)register0x00000054 + 0x20) =
                 *(undefined4 *)((int)register0x00000054 + -4);
                    /* WARNING: Could not recover jumptable at 0x00438ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)((int)register0x00000054 + -0x14))();
            return;
          }
          uVar8 = uVar3 == uVar1;
          if (uVar3 <= uVar1) break;
          uVar4 = (uint)*(byte *)(*(int *)((int)register0x00000054 + 8) + uVar1);
          uVar5 = uVar6 >> 0x19 | uVar5 << 7;
          uVar6 = uVar4 & 0x7f | uVar6 << 7;
        }
        FUN_0009dbd4(uVar1);
      }
      param_1 = FUN_0009dbd4();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x14);
      if ((bool)uVar8) {
        register0x00000054 = (BADSPACEBASE *)puVar7;
      }
    }
    unaff_lr = 0x438ee4;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/internal/pkg/msgproto.(*PT_progmem_buffer).GetIs_dynamic_string @ 00438f0c (size 16) */

void k3c_internal_pkg_msgproto___PT_progmem_buffer__GetIs_dynamic_string(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(in_stack_00000004 + 1);
                    /* WARNING: Could not recover jumptable at 0x00438f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_progmem_buffer).Get_max_length @ 00438f1c (size 16) */

void k3c_internal_pkg_msgproto___PT_progmem_buffer__Get_max_length(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00438f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_buffer).GetIs_dynamic_string @ 00438f2c (size 16) */

void k3c_internal_pkg_msgproto___PT_buffer__GetIs_dynamic_string(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(undefined1 *)(in_stack_00000004 + 1);
                    /* WARNING: Could not recover jumptable at 0x00438f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*PT_buffer).Get_max_length @ 00438f3c (size 16) */

void k3c_internal_pkg_msgproto___PT_buffer__Get_max_length(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(in_stack_00000004 + 4);
                    /* WARNING: Could not recover jumptable at 0x00438f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.Enumeration_error.Error @ 00438f4c (size 108) */

void k3c_internal_pkg_msgproto_Enumeration_error_Error(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x438f98;
    FUN_0009bf64();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_c;
  }
  uStack_c = in_stack_00000008;
  (**(code **)(in_stack_00000004 + 0xc))();
  in_stack_0000001c = uStack_8;
  in_stack_00000020 = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x00438f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*Enumeration_error).Error @ 00438fb8 (size 112) */

void k3c_internal_pkg_msgproto___Enumeration_error__Error(void)

{
  int *piVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x439008;
    FUN_0009bf64();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (int **)*piVar1)) {
    *piVar1 = (int)&iStack_c;
  }
  iStack_c = in_stack_00000004[1];
  (**(code **)(*in_stack_00000004 + 0xc))();
  in_stack_00000008 = uStack_8;
  in_stack_0000000c = uStack_4;
                    /* WARNING: Could not recover jumptable at 0x00438ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageParser).mpError-fm @ 00439028 (size 176) */

void k3c_internal_pkg_msgproto___MessageParser__mpError_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_24;
  }
  uStack_20 = *(undefined4 *)(*(int *)(unaff_r7 + 4) + 4);
  puStack_1c = *(undefined4 **)(*(int *)(unaff_r7 + 4) + 8);
  uStack_8 = in_stack_0000000c;
  uStack_4 = in_stack_00000010;
  uStack_24 = 0;
  uStack_18 = in_stack_00000004;
  uStack_14 = in_stack_00000008;
  FUN_0007636c();
  uStack_24 = uStack_10;
  uStack_20 = uStack_c;
  puStack_1c = &uStack_8;
  uStack_18 = 1;
  uStack_14 = 1;
  k3c_internal_pkg_logger_Warnf();
  return;
}



/* k3c/internal/pkg/msgproto.(*MessageParser).Dump-fm @ 00488658 (size 132) */

void k3c_internal_pkg_msgproto___MessageParser__Dump_fm(void)

{
  int *piVar1;
  int unaff_r7;
  int unaff_r10;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf00();
  }
  piVar1 = *(int **)(unaff_r10 + 0x10);
  if ((piVar1 != (int *)0x0) && (&stack0x00000004 == (undefined4 *)*piVar1)) {
    *piVar1 = (int)&uStack_1c;
  }
  uStack_1c = *(undefined4 *)(unaff_r7 + 4);
  uStack_18 = in_stack_00000004;
  uStack_14 = in_stack_00000008;
  uStack_10 = in_stack_0000000c;
  k3c_internal_pkg_msgproto___MessageParser__Dump();
  return;
}



