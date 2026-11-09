// gklib — Go names from GoReSym + Ghidra 12.1.3 decompiler

// binary: gklib   package: k3c/common/collections   functions: 10
/* k3c/common/collections.(*SortedMap).Insert @ 0042c9b4 (size 448) */

void k3c_common_collections___SortedMap__Insert(void)

{
  int *piVar1;
  int extraout_r1;
  int extraout_r1_00;
  int iVar2;
  int extraout_r1_01;
  uint extraout_r2;
  uint uVar3;
  int *extraout_r3;
  int extraout_r3_00;
  int iVar4;
  int *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int *in_stack_00000004;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  int in_stack_00000014;
  int iStack_24;
  undefined4 *puStack_14;
  int iStack_10;
  uint uStack_c;
  int iStack_8;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x42cb70;
    FUN_0009bf64();
  }
  if (in_stack_00000004[3] == 0) {
    FUN_000908bc();
    if (*DAT_0042cb78 != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = in_stack_00000004[3];
      iStack_24 = extraout_r1;
    }
    in_stack_00000004[3] = iStack_24;
  }
  FUN_00093560();
  if ((char)iStack_10 == '\0') {
    piVar1 = in_stack_00000004;
    uVar3 = in_stack_00000004[1] + 1U;
    iVar4 = *in_stack_00000004;
    if ((uint)in_stack_00000004[2] < in_stack_00000004[1] + 1U) {
      puStack_14 = DAT_0042cb80;
      FUN_000987f4();
      in_stack_00000004[2] = iStack_8;
      piVar1 = in_stack_00000004;
      if (*DAT_0042cb78 != 0) {
        FUN_0009db64();
        *unaff_r8 = extraout_r1_00;
        unaff_r8[1] = *extraout_r3;
        iStack_10 = extraout_r1_00;
        uStack_c = extraout_r2;
        piVar1 = extraout_r3;
      }
      *piVar1 = iStack_10;
      uVar3 = uStack_c;
      iVar4 = iStack_10;
    }
    piVar1[1] = uVar3;
    iVar2 = uVar3 - 1;
    *(undefined4 *)(iVar4 + iVar2 * 8 + 4) = in_stack_0000000c;
    if (*DAT_0042cb78 != 0) {
      FUN_0009db64();
      *unaff_r8 = in_stack_00000008;
      unaff_r8[1] = *(int *)(extraout_r3_00 + extraout_r1_01 * 8);
      iVar2 = extraout_r1_01;
      iVar4 = extraout_r3_00;
    }
    *(int *)(iVar4 + iVar2 * 8) = in_stack_00000008;
  }
  FUN_00093a08();
  *puStack_14 = in_stack_00000010;
  if (*DAT_0042cb78 != 0) {
    puStack_14 = (undefined4 *)FUN_0009db64();
    *unaff_r8 = in_stack_00000014;
    unaff_r8[1] = puStack_14[1];
  }
  puStack_14[1] = in_stack_00000014;
                    /* WARNING: Could not recover jumptable at 0x0042cb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/common/collections.(*SortedMap).Get @ 0042cb84 (size 180) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_common_collections___SortedMap__Get(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined1 in_stack_00000018;
  undefined4 *puStack_8;
  char cStack_4;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x42cc34;
    FUN_0009bf64();
  }
  FUN_00093560();
  if (cStack_4 != '\0') {
    FUN_00025f60();
    in_stack_00000010 = *puStack_8;
    in_stack_00000014 = puStack_8[1];
    in_stack_00000018 = 1;
                    /* WARNING: Could not recover jumptable at 0x0042cc0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  in_stack_00000010 = 0;
  in_stack_00000014 = 0;
  in_stack_00000018 = 0;
                    /* WARNING: Could not recover jumptable at 0x0042cc28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/common/collections.(*SortedMap).MustGet @ 0042cc40 (size 248) */

void k3c_common_collections___SortedMap__MustGet(undefined4 param_1)

{
  undefined4 uVar1;
  int unaff_r10;
  undefined1 *puVar2;
  undefined4 unaff_lr;
  undefined1 uVar3;
  
  do {
    if (*(undefined1 **)(unaff_r10 + 8) < register0x00000054) {
      puVar2 = (undefined1 *)((int)register0x00000054 + -0x28);
      *(undefined4 *)((int)register0x00000054 + -0x28) = unaff_lr;
      uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
      *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0042cd3c;
      *(undefined4 *)((int)register0x00000054 + -0x20) = uVar1;
      *(undefined4 *)((int)register0x00000054 + -0x1c) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      FUN_00093560();
      uVar3 = *(char *)((int)register0x00000054 + -0x10) == '\0';
      if (!(bool)uVar3) {
        uVar1 = *(undefined4 *)(*(int *)((int)register0x00000054 + 4) + 0xc);
        *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0042cd3c;
        *(undefined4 *)((int)register0x00000054 + -0x20) = uVar1;
        *(undefined4 *)((int)register0x00000054 + -0x1c) =
             *(undefined4 *)((int)register0x00000054 + 8);
        *(undefined4 *)((int)register0x00000054 + -0x18) =
             *(undefined4 *)((int)register0x00000054 + 0xc);
        FUN_00025f60();
        uVar1 = (*(undefined4 **)((int)register0x00000054 + -0x14))[1];
        *(undefined4 *)((int)register0x00000054 + 0x10) =
             **(undefined4 **)((int)register0x00000054 + -0x14);
        *(undefined4 *)((int)register0x00000054 + 0x14) = uVar1;
        return;
      }
      *(undefined4 *)((int)register0x00000054 + -0x24) = 0;
      *(undefined **)((int)register0x00000054 + -0x20) =
           PTR_s_sortedmap_key__extrusion_errorjs_008262d0_0x3501_0042cd40;
      *(undefined4 *)((int)register0x00000054 + -0x1c) = 0xf;
      *(undefined4 *)((int)register0x00000054 + -0x18) =
           *(undefined4 *)((int)register0x00000054 + 8);
      *(undefined4 *)((int)register0x00000054 + -0x14) =
           *(undefined4 *)((int)register0x00000054 + 0xc);
      *(undefined **)((int)register0x00000054 + -0x10) = PTR_DAT_0042cd44;
      *(undefined4 *)((int)register0x00000054 + -0xc) = 10;
      FUN_000763e8();
      *(undefined4 *)((int)register0x00000054 + -0x24) =
           *(undefined4 *)((int)register0x00000054 + -8);
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -4);
      FUN_0008f77c();
      *(undefined **)((int)register0x00000054 + -0x24) = PTR_DAT_0042cd48;
      *(undefined4 *)((int)register0x00000054 + -0x20) =
           *(undefined4 *)((int)register0x00000054 + -0x1c);
      param_1 = FUN_00095b00();
      register0x00000054 = (BADSPACEBASE *)((int)register0x00000054 + -0x28);
      if ((bool)uVar3) {
        register0x00000054 = (BADSPACEBASE *)puVar2;
      }
    }
    unaff_lr = 0x42cd34;
    param_1 = FUN_0009bf64(param_1);
  } while( true );
}



/* k3c/common/collections.(*SortedMap).Has @ 0042cd4c (size 80) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_common_collections___SortedMap__Has(void)

{
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x42cd98;
    FUN_0009bf64();
  }
  FUN_00093560();
                    /* WARNING: Could not recover jumptable at 0x0042cd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/common/collections.(*SortedMap).Delete @ 0042cda4 (size 608) */

void k3c_common_collections___SortedMap__Delete(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_r2;
  int iVar5;
  int extraout_r2_00;
  uint uVar6;
  uint extraout_r3;
  int iVar7;
  uint uVar8;
  int *unaff_r8;
  int iVar9;
  int unaff_r10;
  int iVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar11;
  int *in_stack_00000004;
  undefined4 in_stack_00000008;
  int *in_stack_0000000c;
  undefined1 in_stack_00000010;
  int *piStack_38;
  int iStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x42d000;
    FUN_0009bf64();
  }
  FUN_00093560();
  if ((char)iStack_30 == '\0') {
    in_stack_00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x0042ce88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  piStack_38 = in_stack_0000000c;
  FUN_000263c8();
  iVar3 = in_stack_00000004[1];
  uVar11 = CONCAT44(iVar3,in_stack_00000004);
  if (iVar3 == 1) {
    in_stack_00000004[1] = 0;
    in_stack_00000004[2] = 0;
    piVar1 = in_stack_00000004;
    if (*DAT_0042d00c != 0) {
      uVar11 = FUN_0009db54(in_stack_00000004,*in_stack_00000004);
      piVar1 = (int *)uVar11;
      *unaff_r8 = (int)((ulonglong)uVar11 >> 0x20);
    }
    *piVar1 = 0;
    in_stack_00000010 = 1;
                    /* WARNING: Could not recover jumptable at 0x0042ce7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  iVar4 = *in_stack_00000004;
  uVar6 = in_stack_00000004[2];
  iVar7 = 0;
  uVar8 = 0;
  iVar5 = iVar4;
  piVar1 = in_stack_0000000c;
  do {
    piVar2 = (int *)uVar11;
    if ((int)((ulonglong)uVar11 >> 0x20) <= iVar7) {
      piVar2[1] = uVar8;
      piVar2[2] = uVar6;
      if (*DAT_0042d00c != 0) {
        piVar2 = (int *)FUN_0009db64();
        *unaff_r8 = extraout_r2_00;
        unaff_r8[1] = *piVar2;
        iVar5 = extraout_r2_00;
      }
      *piVar2 = iVar5;
      in_stack_00000010 = 1;
                    /* WARNING: Could not recover jumptable at 0x0042cff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    unaff_r8 = *(int **)(iVar4 + iVar7 * 8 + 4);
    iVar9 = *(int *)(iVar4 + iVar7 * 8);
    if (piVar1 == unaff_r8) {
      FUN_00018250();
      uVar11 = CONCAT44(iVar3,in_stack_00000004);
      piVar1 = in_stack_0000000c;
      if ((char)piStack_38 == '\0') goto LAB_0042cf30;
    }
    else {
LAB_0042cf30:
      uVar8 = uVar8 + 1;
      if (uVar6 < uVar8) {
        piStack_38 = (int *)0x1;
        FUN_000987f4();
        uVar11 = CONCAT44(iVar3,in_stack_00000004);
        iVar5 = iStack_30;
        uVar6 = uStack_28;
        piVar1 = in_stack_0000000c;
        uVar8 = uStack_2c;
      }
      iVar10 = uVar8 - 1;
      *(int **)(iVar5 + iVar10 * 8 + 4) = unaff_r8;
      unaff_r8 = (int *)*DAT_0042d00c;
      if (unaff_r8 != (int *)0x0) {
        uVar11 = FUN_0009db64();
        *unaff_r8 = iVar9;
        unaff_r8[1] = *(int *)(extraout_r2 + iVar10 * 8);
        iVar5 = extraout_r2;
        uVar6 = extraout_r3;
      }
      *(int *)(iVar5 + iVar10 * 8) = iVar9;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}



/* k3c/common/collections.(*SortedMap).Keys @ 0042d014 (size 136) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_common_collections___SortedMap__Keys(void)

{
  undefined4 uVar1;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x42d098;
    FUN_0009bf64();
  }
  uVar1 = *(undefined4 *)(in_stack_00000004 + 4);
  FUN_000986b8();
  FUN_00093f5c();
  in_stack_0000000c = uVar1;
  in_stack_00000010 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0042d08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/common/collections.(*SortedMap).IsEmpty @ 0042d0a4 (size 28) */

void k3c_common_collections___SortedMap__IsEmpty(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int in_stack_00000004;
  undefined1 uStack00000008;
  
  uStack00000008 = *(int *)(in_stack_00000004 + 4) == 0;
                    /* WARNING: Could not recover jumptable at 0x0042d0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/common/collections.(*SortedMap).Values @ 0042d0c0 (size 420) */

void k3c_common_collections___SortedMap__Values(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  uint extraout_r2;
  int iVar4;
  uint extraout_r3;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE_00;
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  int iStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x42d260;
    FUN_0009bf64();
  }
  uVar2 = *(uint *)(in_stack_00000004 + 4);
  if (uVar2 == 0) {
    in_stack_00000008 = 0;
    in_stack_0000000c = 0;
    in_stack_00000010 = 0;
                    /* WARNING: Could not recover jumptable at 0x0042d138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_000986b8();
  iVar4 = *(int *)(in_stack_00000004 + 4);
  uVar7 = 0;
  for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
    uVar7 = uVar7 + 1;
    FUN_00025f60();
    uVar3 = puStack_34[1];
    uVar1 = *puStack_34;
    if (uVar2 < uVar7) {
      puStack_34 = DAT_0042d268;
      FUN_000987f4();
      uVar2 = uStack_28;
      uVar7 = uStack_2c;
      iStack_38 = iStack_30;
    }
    *(undefined4 *)(iStack_38 + (uVar7 - 1) * 8) = uVar1;
    iVar6 = iStack_38 + (uVar7 - 1) * 8;
    if (*DAT_0042d270 != 0) {
      FUN_0009db64();
      *unaff_r8 = extraout_r1;
      unaff_r8[1] = *(undefined4 *)(iVar6 + 4);
      uVar3 = extraout_r1;
      uVar2 = extraout_r2;
      uVar7 = extraout_r3;
    }
    *(undefined4 *)(iVar6 + 4) = uVar3;
  }
  in_stack_0000000c = uVar7;
  in_stack_00000010 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0042d254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* k3c/common/collections.(*SortedMap).Map @ 0042d274 (size 248) */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void k3c_common_collections___SortedMap__Map(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_r8;
  int unaff_r10;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 *puStack_40;
  int iStack_30;
  undefined4 *puStack_2c;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    UNRECOVERED_JUMPTABLE = (code *)0x42d368;
    FUN_0009bf64();
  }
  FUN_000908bc();
  FUN_0009dee4(0,&iStack_30);
  FUN_00091764();
  while (iStack_30 != 0) {
    uVar3 = *puStack_2c;
    uVar2 = puStack_2c[1];
    FUN_00093a08();
    *puStack_40 = uVar3;
    puVar1 = puStack_40;
    if (*_UNK_0042d374 != 0) {
      puVar1 = (undefined4 *)FUN_0009db64();
      *unaff_r8 = uVar2;
      unaff_r8[1] = puVar1[1];
    }
    puVar1[1] = uVar2;
    FUN_000919c8();
  }
                    /* WARNING: Could not recover jumptable at 0x0042d35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* k3c/common/collections.(*SortedMap).Range @ 0042d378 (size 212) */

void k3c_common_collections___SortedMap__Range(void)

{
  int iVar1;
  int iVar2;
  int unaff_r10;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  char local_18;
  
  while (&stack0x00000000 <= *(undefined1 **)(unaff_r10 + 8)) {
    FUN_0009bf64();
  }
  iVar1 = *(int *)(in_stack_00000004 + 4);
  if (iVar1 != 0) {
    iVar2 = 0;
    while( true ) {
      if (iVar1 <= iVar2) {
        return;
      }
      FUN_00025f60();
      (*(code *)*in_stack_00000008)();
      if (local_18 == '\0') break;
      iVar2 = iVar2 + 1;
    }
    return;
  }
  return;
}



