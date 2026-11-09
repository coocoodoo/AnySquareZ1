// ghash-generic.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== ghash_exit_tfm @ 000101c0 size=10 ===== */

void ghash_exit_tfm(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    kfree_sensitive();
    return;
  }
  return;
}



/* ===== ghash_init @ 000101ca size=16 ===== */

undefined4 ghash_init(int param_1)

{
  memset((void *)(param_1 + 0x10),0,0x14);
  return 0;
}



/* ===== ghash_final @ 000101da size=58 ===== */

undefined4 ghash_final(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1[8] != 0) {
    param_1[8] = -1;
    gf128mul_4k_lle(param_1 + 4,*(undefined4 *)(*param_1 + 0x18));
  }
  param_1[8] = 0;
  piVar1 = param_1 + 4;
  do {
    piVar2 = piVar1 + 1;
    *param_2 = *piVar1;
    piVar1 = piVar2;
    param_2 = param_2 + 1;
  } while (piVar2 != param_1 + 8);
  return 0;
}



/* ===== ghash_update @ 00010214 size=174 ===== */

undefined4 ghash_update(int *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  
  uVar3 = param_1[8];
  puVar8 = (uint *)(param_1 + 4);
  iVar9 = *param_1;
  if (uVar3 != 0) {
    uVar5 = uVar3;
    if (param_3 <= uVar3) {
      uVar5 = param_3;
    }
    param_3 = param_3 - uVar5;
    puVar6 = (uint *)(uVar5 + (int)param_2);
    param_1[8] = uVar3 - uVar5;
    pbVar2 = (byte *)((0x10 - uVar3) + (int)puVar8);
    for (; param_2 != puVar6; param_2 = (uint *)((int)param_2 + 1)) {
      *pbVar2 = *pbVar2 ^ (byte)*param_2;
      pbVar2 = pbVar2 + 1;
    }
    param_2 = puVar6;
    if (param_1[8] == 0) {
      gf128mul_4k_lle(puVar8,*(undefined4 *)(iVar9 + 0x18));
    }
  }
  puVar6 = param_2 + (param_3 >> 4) * 4;
  while (param_2 != puVar6) {
    puVar1 = param_2 + 4;
    puVar4 = puVar8;
    puVar7 = param_2;
    do {
      param_2 = puVar7 + 1;
      *puVar4 = *puVar4 ^ *puVar7;
      puVar4 = puVar4 + 1;
      puVar7 = param_2;
    } while (param_2 != puVar1);
    gf128mul_4k_lle(puVar8,*(undefined4 *)(iVar9 + 0x18));
  }
  iVar9 = (param_3 >> 4) * -0x10 + param_3;
  if (iVar9 != 0) {
    puVar6 = (uint *)(iVar9 + (int)param_2);
    param_1[8] = 0x10 - iVar9;
    for (; param_2 != puVar6; param_2 = (uint *)((int)param_2 + 1)) {
      *(byte *)puVar8 = (byte)*puVar8 ^ (byte)*param_2;
      puVar8 = (uint *)((int)puVar8 + 1);
    }
  }
  return 0;
}



/* ===== ghash_setkey @ 000102c2 size=88 ===== */

undefined4 ghash_setkey(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_28 [5];
  
  puVar4 = local_28;
  if (param_3 == 0x10) {
    if (*(int *)(param_1 + 0x18) != 0) {
      kfree_sensitive();
    }
    puVar2 = param_2;
    do {
      puVar3 = puVar2 + 2;
      uVar1 = puVar2[1];
      *puVar4 = *puVar2;
      puVar4[1] = uVar1;
      puVar4 = puVar4 + 2;
      puVar2 = puVar3;
    } while (puVar3 != param_2 + 4);
    uVar1 = gf128mul_init_4k_lle(local_28);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    memset(local_28,0,0x10);
    if (*(int *)(param_1 + 0x18) == 0) {
      uVar1 = 0xfffffff4;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== init_module @ 0001031c size=6 ===== */

void init_module(void)

{
  crypto_register_shash(DAT_00010324);
  return;
}



/* ===== cleanup_module @ 00010328 size=6 ===== */

void cleanup_module(void)

{
  crypto_unregister_shash(DAT_00010330);
  return;
}



/* ===== <EXTERNAL>::crypto_register_shash @ 00011004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_register_shash(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_unregister_shash @ 00011008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_unregister_shash(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree_sensitive @ 0001100c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree_sensitive(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00011010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gf128mul_init_4k_lle @ 00011014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void gf128mul_init_4k_lle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gf128mul_4k_lle @ 00011018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void gf128mul_4k_lle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


