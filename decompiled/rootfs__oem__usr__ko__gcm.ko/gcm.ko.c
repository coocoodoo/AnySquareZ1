// gcm.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== aead_request_complete @ 000101c0 size=4 ===== */

void aead_request_complete(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000101c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))();
  return;
}



/* ===== crypto_ipsec_check_assoclen @ 000101c4 size=20 ===== */

undefined4 crypto_ipsec_check_assoclen(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x10) {
    return 0;
  }
  if (param_1 == 0x14) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== crypto_gcm_reqctx @ 000101d8 size=16 ===== */

uint crypto_gcm_reqctx(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x1c);
  return param_1 + 0x30 + uVar1 & ~uVar1;
}



/* ===== crypto_gcm_setauthsize @ 000101e8 size=32 ===== */

undefined4 crypto_gcm_setauthsize(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (0xc < param_2 - 4U) {
    return 0xffffffea;
  }
  if ((1 << (param_2 - 4U & 0xff) & 0x1f11U) == 0) {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== crypto_gcm_init_crypt @ 00010208 size=50 ===== */

void crypto_gcm_init_crypt(int param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_r2;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x10);
  uVar5 = crypto_gcm_reqctx(param_1,param_2,param_1);
  iVar1 = (int)uVar5;
  bVar4 = *(int *)(extraout_r2 + 0x24) != *(int *)(extraout_r2 + 0x28);
  iVar2 = *(int *)(iVar3 + 0x10);
  iVar3 = extraout_r2;
  if (bVar4) {
    iVar3 = iVar1 + 0x60;
  }
  *(int *)(iVar1 + 0xb0) = (int)((ulonglong)uVar5 >> 0x20) + 0x10;
  *(int *)(iVar1 + 0xb4) = iVar1;
  if (!bVar4) {
    iVar3 = iVar1 + 0x30;
  }
  *(int *)(iVar1 + 0xb8) = iVar1 + 0x30;
  *(int *)(iVar1 + 0xbc) = iVar3;
  *(int *)(iVar1 + 0xd0) = iVar2 + 8;
  return;
}



/* ===== gcm_hash_update @ 0001023a size=40 ===== */

void gcm_hash_update(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined8 uVar2;
  
  uVar2 = crypto_gcm_reqctx();
  iVar1 = (int)uVar2;
  *(int *)(iVar1 + 0xb8) = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)(iVar1 + 0xbc) = param_1;
  *(undefined4 *)(iVar1 + 200) = param_4;
  *(undefined4 *)(iVar1 + 0xcc) = extraout_r2;
  *(undefined4 *)(iVar1 + 0xc4) = param_5;
  *(undefined4 *)(iVar1 + 0xd0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(iVar1 + 0xc0) + -0x24))();
  return;
}



/* ===== crypto_rfc4543_copy_src_to_dst @ 00010262 size=80 ===== */

void crypto_rfc4543_copy_src_to_dst(int param_1,int param_2)

{
  int *piVar1;
  int local_1c0 [3];
  undefined4 uStack_1b4;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  int local_1a0;
  undefined4 local_19c;
  int local_14;
  
  piVar1 = DAT_000102b4;
  local_19c = *(undefined4 *)(param_1 + 0x14);
  local_14 = *DAT_000102b4;
  local_1c0[0] = *(int *)(*(int *)(param_1 + 0x10) + -8);
  if (param_2 != 0) {
    local_1c0[0] = 0;
  }
  local_1a0 = *(int *)(*(int *)(param_1 + 0x10) + 0x14) + 8;
  local_1c0[2] = *(undefined4 *)(param_1 + 0x24);
  uStack_1b4 = *(undefined4 *)(param_1 + 0x28);
  local_1c0[0] = (*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c)) - local_1c0[0];
  local_1c0[1] = 0;
  local_1a8 = 0;
  uStack_1a4 = 0;
  crypto_skcipher_encrypt(local_1c0);
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== crypto_rfc4543_crypt @ 000102b8 size=148 ===== */

void crypto_rfc4543_crypt(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = param_1 + 0x30;
  iVar7 = *(int *)(param_1 + 0x10);
  iVar6 = *(int *)(iVar7 + -8);
  uVar4 = *(uint *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x14) + 0x1c);
  puVar5 = (undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 4) + 0x30 + iVar8 + uVar4 & ~uVar4);
  if ((*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28)) &&
     (iVar1 = crypto_rfc4543_copy_src_to_dst(), iVar1 != 0)) {
    return;
  }
  *puVar5 = *(undefined4 *)(iVar7 + 0x18);
  if (param_2 != 0) {
    iVar6 = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x20);
  puVar5[1] = *puVar2;
  puVar5[2] = puVar2[1];
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(int *)(param_1 + 0x40) = *(int *)(iVar7 + 0x10) + 8;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0xc);
  *(int *)(param_1 + 0x4c) = iVar6;
  *(undefined4 **)(param_1 + 0x50) = puVar5;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x28);
  iVar7 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x48) = (*(int *)(param_1 + 0x18) + iVar7) - iVar6;
  if (param_2 != 0) {
    crypto_aead_encrypt(iVar8,uVar3,iVar7,param_4);
    return;
  }
  crypto_aead_decrypt(iVar8,uVar3,iVar7,param_4);
  return;
}



/* ===== crypto_rfc4543_setauthsize @ 0001034c size=16 ===== */

undefined4 crypto_rfc4543_setauthsize(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0x10) {
    uVar1 = crypto_aead_setauthsize(*(undefined4 *)(param_1 + 0x18));
    return uVar1;
  }
  return 0xffffffea;
}



/* ===== crypto_rfc4543_setkey @ 0001035c size=52 ===== */

undefined4 crypto_rfc4543_setkey(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (3 < param_3) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + (param_3 - 4));
    uVar3 = *(uint *)(iVar1 + 8) & 0xfff000ff;
    *(uint *)(iVar1 + 8) = uVar3;
    *(uint *)(iVar1 + 8) = uVar3 | DAT_00010390 & *(uint *)(param_1 + 8);
    uVar2 = crypto_aead_setkey();
    return uVar2;
  }
  return 0xffffffea;
}



/* ===== crypto_rfc4106_setkey @ 00010394 size=52 ===== */

undefined4 crypto_rfc4106_setkey(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (3 < param_3) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + (param_3 - 4));
    uVar3 = *(uint *)(iVar1 + 8) & 0xfff000ff;
    *(uint *)(iVar1 + 8) = uVar3;
    *(uint *)(iVar1 + 8) = uVar3 | DAT_000103c8 & *(uint *)(param_1 + 8);
    uVar2 = crypto_aead_setkey();
    return uVar2;
  }
  return 0xffffffea;
}



/* ===== crypto_rfc4543_init_tfm @ 000103cc size=82 ===== */

uint crypto_rfc4543_init_tfm(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = crypto_spawn_tfm2(*(int *)(param_1 + 0x14) + 0x160);
  if (uVar1 < 0xfffff001) {
    uVar2 = crypto_get_default_null_skcipher();
    if (uVar2 < 0xfffff001) {
      *(uint *)(param_1 + 0x18) = uVar1;
      *(uint *)(param_1 + 0x1c) = uVar2;
      *(uint *)(param_1 + 4) =
           (*(int *)(uVar1 + 4) + 7U & 0xfffffff8) +
           (*(uint *)(*(int *)(uVar1 + 0x14) + 0x1c) & 0xfffffff8) + 0x3c;
      uVar1 = 0;
    }
    else {
      crypto_destroy_tfm(uVar1,uVar1 + 8);
      uVar1 = uVar2;
    }
  }
  return uVar1;
}



/* ===== crypto_rfc4106_init_tfm @ 0001041e size=48 ===== */

uint crypto_rfc4106_init_tfm(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = crypto_spawn_tfm2(*(int *)(param_1 + 0x14) + 0x160);
  if (uVar3 < 0xfffff001) {
    *(uint *)(param_1 + 0x18) = uVar3;
    piVar1 = (int *)(uVar3 + 0x14);
    piVar2 = (int *)(uVar3 + 4);
    uVar3 = 0;
    *(uint *)(param_1 + 4) =
         (*piVar2 + 7U & 0xfffffff8) + (*(uint *)(*piVar1 + 0x1c) & 0xfffffff8) + 0xa8;
  }
  return uVar3;
}



/* ===== crypto_gcm_init_tfm @ 0001044e size=92 ===== */

int * crypto_gcm_init_tfm(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x14);
  piVar1 = (int *)crypto_spawn_tfm2(iVar4 + 0x17c);
  if (piVar1 < (int *)0xfffff001) {
    piVar2 = (int *)crypto_spawn_tfm2(iVar4 + 0x160);
    if (piVar2 < (int *)0xfffff001) {
      *(int **)(param_1 + 0x18) = piVar2;
      *(int **)(param_1 + 0x1c) = piVar1;
      uVar3 = *piVar2 + 0x28;
      if (uVar3 < piVar1[8] + 0x28U) {
        uVar3 = piVar1[8] + 0x28U;
      }
      *(uint *)(param_1 + 4) =
           (*(uint *)(*(int *)(param_1 + 0x14) + 0x1c) & 0xfffffff8) + 0xb0 + uVar3;
      piVar1 = (int *)0x0;
    }
    else {
      crypto_destroy_tfm(piVar1,piVar1 + 10);
      piVar1 = piVar2;
    }
  }
  return piVar1;
}



/* ===== crypto_rfc4106_free @ 000104aa size=22 ===== */

void crypto_rfc4106_free(int param_1)

{
  crypto_drop_spawn(param_1 + 400);
  kfree(param_1);
  return;
}



/* ===== crypto_rfc4543_free @ 000104c0 size=2 ===== */

void crypto_rfc4543_free(int param_1)

{
  crypto_drop_spawn(param_1 + 400);
  kfree(param_1);
  return;
}



/* ===== crypto_gcm_free @ 000104c2 size=30 ===== */

void crypto_gcm_free(int param_1)

{
  crypto_drop_spawn(param_1 + 400);
  crypto_drop_spawn(param_1 + 0x1ac);
  kfree(param_1);
  return;
}



/* ===== sg_set_buf @ 000104e0 size=40 ===== */

void sg_set_buf(uint *param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = *DAT_0001050c;
  if ((uVar2 & 3) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(2,0x104fe);
    (*pcVar1)();
  }
  param_1[2] = param_3;
  *param_1 = *param_1 & 3 | uVar2 + (param_2 + 0x50000000 >> 0xc) * 0x20;
  param_1[1] = param_2 & 0xfff;
  return;
}



/* ===== gcm_hash_crypt_remain_continue @ 00010510 size=146 ===== */

void gcm_hash_crypt_remain_continue
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int local_28;
  uint uStack_24;
  undefined4 local_20;
  uint uStack_1c;
  
  piVar8 = &local_28;
  local_28 = param_1;
  uStack_24 = param_2;
  local_20 = param_3;
  uStack_1c = param_4;
  iVar2 = crypto_gcm_reqctx();
  uVar6 = *(uint *)(param_1 + 0x18);
  local_28 = 0;
  uStack_24 = uVar6 << 0x1b | ((uVar6 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
              ((uVar6 & 0x1fffffff) >> 0xd & 0xff) << 8 | (uVar6 & 0x1fffffff) >> 0x15;
  piVar7 = (int *)(iVar2 + 0x20);
  uVar6 = *(uint *)(iVar2 + 0xa0);
  local_20 = 0;
  uStack_1c = uVar6 << 0x1b | ((uVar6 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
              ((uVar6 & 0x1fffffff) >> 0xd & 0xff) << 8 | (uVar6 & 0x1fffffff) >> 0x15;
  piVar5 = piVar7;
  do {
    iVar3 = *piVar8;
    iVar4 = piVar8[1];
    piVar8 = piVar8 + 2;
    *piVar5 = iVar3;
    piVar5[1] = iVar4;
    piVar5 = piVar5 + 2;
  } while (piVar8 != (int *)&stack0xffffffe8);
  sg_init_one(iVar2 + 0x90,piVar7,0x10);
  uVar1 = DAT_000105a4;
  *(undefined4 *)(iVar2 + 0xc4) = param_2;
  *(int *)(iVar2 + 0xcc) = iVar2 + 0x90;
  *(undefined4 *)(iVar2 + 0xb8) = uVar1;
  *(int *)(iVar2 + 0xbc) = param_1;
  *(int **)(iVar2 + 0xd0) = piVar7;
  *(undefined4 *)(iVar2 + 200) = 0x10;
  iVar2 = crypto_ahash_finup(iVar2 + 0xb0);
  if (iVar2 == 0) {
    iVar2 = crypto_gcm_reqctx(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001059a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0xa8))(param_1,param_2);
    return;
  }
  return;
}



/* ===== gcm_hash_crypt_continue @ 000105a8 size=58 ===== */

void gcm_hash_crypt_continue(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = param_2;
  uVar3 = crypto_gcm_reqctx();
  uVar2 = *(uint *)((int)uVar3 + 0xa0) & 0xf;
  if (uVar2 != 0) {
    iVar1 = gcm_hash_update(param_1,DAT_000105e8,*DAT_000105e4 + 0x10,0x10 - uVar2,
                            (int)((ulonglong)uVar3 >> 0x20),uVar4,param_3);
    if (iVar1 != 0) {
      return;
    }
  }
  gcm_hash_crypt_remain_continue(param_1,param_2);
  return;
}



/* ===== gcm_hash_crypt_done @ 000105ec size=32 ===== */

void gcm_hash_crypt_done(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if ((param_2 == 0) && (param_2 = gcm_hash_crypt_continue(uVar1), param_2 == -0x73)) {
    return;
  }
  aead_request_complete(uVar1,param_2);
  return;
}



/* ===== gcm_hash_assoc_remain_continue @ 0001060c size=58 ===== */

void gcm_hash_assoc_remain_continue(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = param_2;
  uVar2 = crypto_gcm_reqctx();
  iVar1 = *(int *)((int)uVar2 + 0xa0);
  if (iVar1 == 0) {
    gcm_hash_crypt_remain_continue(param_1);
    return;
  }
  iVar1 = gcm_hash_update(param_1,DAT_00010648,*(undefined4 *)((int)uVar2 + 0xa4),iVar1,
                          (int)((ulonglong)uVar2 >> 0x20),uVar3,param_3);
  if (iVar1 == 0) {
    gcm_hash_crypt_continue(param_1,param_2);
    return;
  }
  return;
}



/* ===== gcm_hash_assoc_remain_done @ 0001064c size=32 ===== */

void gcm_hash_assoc_remain_done(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if ((param_2 == 0) && (param_2 = gcm_hash_assoc_remain_continue(uVar1), param_2 == -0x73)) {
    return;
  }
  aead_request_complete(uVar1,param_2);
  return;
}



/* ===== gcm_hash_crypt_remain_done @ 0001066c size=32 ===== */

void gcm_hash_crypt_remain_done(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if ((param_2 == 0) && (param_2 = gcm_hash_crypt_remain_continue(uVar1), param_2 == -0x73)) {
    return;
  }
  aead_request_complete(uVar1,param_2);
  return;
}



/* ===== crypto_rfc4543_decrypt @ 0001068c size=24 ===== */

void crypto_rfc4543_decrypt(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  
  iVar1 = crypto_ipsec_check_assoclen(*(undefined4 *)(param_1 + 0x18),param_2,param_3,param_1);
  if (iVar1 == 0) {
    crypto_rfc4543_crypt(extraout_r3,0,extraout_r2,param_4);
    return;
  }
  return;
}



/* ===== crypto_rfc4543_encrypt @ 000106a4 size=24 ===== */

void crypto_rfc4543_encrypt(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  
  iVar1 = crypto_ipsec_check_assoclen(*(undefined4 *)(param_1 + 0x18),param_2,param_3,param_1);
  if (iVar1 == 0) {
    crypto_rfc4543_crypt(extraout_r3,1,extraout_r2,param_4);
    return;
  }
  return;
}



/* ===== crypto_rfc4106_setauthsize @ 000106bc size=32 ===== */

undefined4 crypto_rfc4106_setauthsize(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 - 8U < 9) && ((1 << (param_2 - 8U & 0xff) & 0x111U) != 0)) {
    uVar1 = crypto_aead_setauthsize(*(undefined4 *)(param_1 + 0x18));
    return uVar1;
  }
  return 0xffffffea;
}



/* ===== crypto_xor.constprop.5 @ 000106dc size=28 ===== */

void crypto_xor_constprop_5(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  
  puVar1 = param_2;
  do {
    puVar2 = puVar1 + 1;
    *param_1 = *param_1 ^ *puVar1;
    param_1 = param_1 + 1;
    puVar1 = puVar2;
  } while (puVar2 != param_2 + 4);
  return;
}



/* ===== crypto_gcm_verify @ 000106f8 size=80 ===== */

undefined4 crypto_gcm_verify(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = crypto_gcm_reqctx();
  iVar5 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + -8);
  iVar3 = iVar1 + 0x20;
  crypto_xor_constprop_5(iVar1 + 0x10,iVar3);
  scatterwalk_map_and_copy
            (iVar3,*(undefined4 *)(param_1 + 0x24),(*(int *)(param_1 + 0x18) + iVar5) - iVar4,iVar4,
             0,param_2);
  iVar1 = __crypto_memneq(iVar3,iVar1 + 0x10,iVar4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffb6;
  }
  return uVar2;
}



/* ===== gcm_dec_hash_continue @ 00010748 size=52 ===== */

void gcm_dec_hash_continue(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = crypto_gcm_reqctx();
  crypto_gcm_init_crypt(param_1,*(undefined4 *)(iVar2 + 0xa0));
  uVar1 = DAT_0001077c;
  *(undefined4 *)(iVar2 + 0xd4) = param_2;
  *(undefined4 *)(iVar2 + 200) = uVar1;
  *(undefined4 *)(iVar2 + 0xcc) = param_1;
  iVar2 = crypto_skcipher_decrypt(iVar2 + 0xb0);
  if (iVar2 == 0) {
    crypto_gcm_verify(param_1);
    return;
  }
  return;
}



/* ===== gcm_decrypt_done @ 00010780 size=22 ===== */

void gcm_decrypt_done(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if (param_2 == 0) {
    param_2 = crypto_gcm_verify(uVar1);
  }
  aead_request_complete(uVar1,param_2);
  return;
}



/* ===== gcm_enc_copy_hash @ 00010796 size=52 ===== */

undefined4 gcm_enc_copy_hash(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = crypto_gcm_reqctx();
  iVar2 = *(int *)(param_1 + 0x10);
  crypto_xor_constprop_5(iVar1 + 0x10,iVar1 + 0x20);
  scatterwalk_map_and_copy
            (iVar1 + 0x10,*(undefined4 *)(param_1 + 0x28),
             *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18),*(undefined4 *)(iVar2 + -8),1,
             param_2);
  return 0;
}



/* ===== kzalloc.constprop.6 @ 000107ca size=8 ===== */

void kzalloc_constprop_6(undefined4 param_1)

{
  __kmalloc(param_1,0xdc0);
  return;
}



/* ===== crypto_gcm_setkey @ 000107d2 size=206 ===== */

int crypto_gcm_setkey(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  piVar6 = *(int **)(param_1 + 0x18);
  iVar7 = *(int *)(param_1 + 0x1c);
  uVar4 = piVar6[2];
  piVar6[2] = uVar4 & 0xfff000ff;
  piVar6[2] = uVar4 & 0xfff000ff | DAT_000108a0 & *(uint *)(param_1 + 8);
  iVar2 = crypto_skcipher_setkey(piVar6);
  if (iVar2 == 0) {
    iVar3 = kzalloc_constprop_6(*piVar6 + 0x68);
    if (iVar3 == 0) {
      iVar2 = -0xc;
    }
    else {
      *(undefined4 *)(iVar3 + 0x20) = 0;
      iVar2 = iVar3 + 0x30;
      __init_swait_queue_head(iVar3 + 0x24,DAT_000108a8,DAT_000108a4);
      sg_init_one(iVar2,iVar3,0x10);
      uVar1 = DAT_000108ac;
      *(int *)(iVar3 + 0x48) = iVar2;
      *(int *)(iVar3 + 0x4c) = iVar2;
      *(int **)(iVar3 + 0x60) = piVar6 + 2;
      *(undefined4 *)(iVar3 + 0x58) = uVar1;
      *(int *)(iVar3 + 0x5c) = iVar3 + 0x20;
      *(undefined4 *)(iVar3 + 100) = 0x600;
      *(undefined4 *)(iVar3 + 0x40) = 0x10;
      *(int *)(iVar3 + 0x44) = iVar3 + 0x10;
      iVar2 = crypto_skcipher_encrypt(iVar3 + 0x40);
      if ((iVar2 == -0x73) || (iVar2 == -0x10)) {
        wait_for_completion(iVar3 + 0x20);
        iVar2 = *(int *)(iVar3 + 0x2c);
        *(undefined4 *)(iVar3 + 0x20) = 0;
      }
      uVar4 = DAT_000108a0;
      if (iVar2 == 0) {
        uVar5 = *(uint *)(iVar7 + 0x28) & 0xfff000ff;
        *(uint *)(iVar7 + 0x28) = uVar5;
        *(uint *)(iVar7 + 0x28) = uVar5 | uVar4 & *(uint *)(param_1 + 8);
        iVar2 = crypto_ahash_setkey(iVar7,iVar3,0x10);
      }
      kfree_sensitive(iVar3);
    }
  }
  return iVar2;
}



/* ===== crypto_gcm_create_common @ 000108b0 size=318 ===== */

int crypto_gcm_create_common
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 local_24;
  
  local_24 = param_4;
  iVar1 = crypto_check_attr_type(param_2,3,&local_24,param_4,param_1,param_2,param_3);
  if (iVar1 != 0) {
    return iVar1;
  }
  puVar2 = (undefined4 *)kzalloc_constprop_6(0x1c8);
  if (puVar2 == (undefined4 *)0x0) {
    return -0xc;
  }
  iVar1 = crypto_grab_ahash(puVar2 + 0x6b,puVar2 + 0xc,param_4,0,local_24);
  if (iVar1 != 0) goto LAB_00010910;
  iVar4 = puVar2[0x6d];
  iVar1 = strcmp((char *)(iVar4 + 0x28),DAT_000109f0);
  if ((iVar1 == 0) && (*(int *)(iVar4 + -8) == 0x10)) {
    iVar1 = crypto_grab_skcipher(puVar2 + 100,puVar2 + 0xc,param_3,0,local_24);
    if (iVar1 != 0) goto LAB_00010910;
    iVar3 = puVar2[0x66];
    iVar1 = strncmp((char *)(iVar3 + 0x28),DAT_000109f4,4);
    if (((iVar1 == 0) && (*(int *)(iVar3 + -0xc) == 0x10)) && (*(int *)(iVar3 + 0x14) == 1)) {
      iVar1 = snprintf((char *)(puVar2 + 0x16),0x80,DAT_000109f8,iVar3 + 0x2c);
      if ((iVar1 < 0x80) &&
         (iVar1 = snprintf((char *)(puVar2 + 0x36),0x80,DAT_000109fc,iVar3 + 0xa8,iVar4 + 0xa8),
         iVar1 < 0x80)) {
        puVar2[0x14] = (*(int *)(iVar4 + 0x20) + *(int *)(iVar3 + 0x20)) / 2;
        puVar2[0x11] = 1;
        puVar2[0x13] = *(uint *)(iVar4 + 0x1c) | *(uint *)(iVar3 + 0x1c);
        puVar2[0x12] = 8;
        puVar2[8] = 0xc;
        puVar2[10] = *(undefined4 *)(iVar3 + -8);
        puVar2[9] = 0x10;
        puVar2[6] = DAT_00010a00;
        puVar2[7] = DAT_00010a04;
        puVar2[2] = DAT_00010a08;
        puVar2[3] = DAT_00010a0c;
        puVar2[4] = DAT_00010a10;
        puVar2[5] = DAT_00010a14;
        *puVar2 = DAT_00010a18;
        iVar1 = aead_register_instance(param_1,puVar2);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        iVar1 = -0x24;
      }
      goto LAB_00010910;
    }
  }
  iVar1 = -0x16;
LAB_00010910:
  crypto_gcm_free(puVar2);
  return iVar1;
}



/* ===== crypto_gcm_create @ 00010a1c size=76 ===== */

void crypto_gcm_create(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char acStack_94 [128];
  int local_14;
  
  piVar1 = DAT_00010a68;
  local_14 = *DAT_00010a68;
  uVar2 = crypto_attr_alg_name(*(undefined4 *)(param_2 + 4));
  if (uVar2 < 0xfffff001) {
    iVar3 = snprintf(acStack_94,0x80,DAT_00010a6c,uVar2);
    if (iVar3 < 0x80) {
      uVar2 = crypto_gcm_create_common(param_1,param_2,acStack_94,DAT_00010a70);
    }
    else {
      uVar2 = 0xffffffdc;
    }
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



/* ===== crypto_gcm_base_create @ 00010a74 size=48 ===== */

void crypto_gcm_base_create(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = crypto_attr_alg_name(*(undefined4 *)(param_2 + 4));
  if ((uVar1 < 0xfffff001) &&
     (uVar2 = crypto_attr_alg_name(*(undefined4 *)(param_2 + 8)), uVar2 < 0xfffff001)) {
    crypto_gcm_create_common(param_1,param_2,uVar1,uVar2);
    return;
  }
  return;
}



/* ===== crypto_rfc4106_create @ 00010aa4 size=226 ===== */

int crypto_rfc4106_create(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_1c [2];
  
  iVar1 = crypto_check_attr_type(param_2,3,local_1c);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)kzalloc_constprop_6(0x1ac);
    if (puVar2 == (undefined4 *)0x0) {
      iVar1 = -0xc;
    }
    else {
      uVar3 = crypto_attr_alg_name(*(undefined4 *)(param_2 + 4));
      iVar1 = crypto_grab_aead(puVar2 + 100,puVar2 + 0xc,uVar3,0,local_1c[0]);
      if (iVar1 == 0) {
        iVar1 = puVar2[0x66];
        if ((*(int *)(iVar1 + -0x10) == 0xc) && (*(int *)(iVar1 + 0x14) == 1)) {
          iVar4 = snprintf((char *)(puVar2 + 0x16),0x80,DAT_00010b88,iVar1 + 0x28);
          if ((iVar4 < 0x80) &&
             (iVar4 = snprintf((char *)(puVar2 + 0x36),0x80,DAT_00010b88,iVar1 + 0xa8), iVar4 < 0x80
             )) {
            uVar3 = *(undefined4 *)(iVar1 + 0x20);
            puVar2[0x11] = 1;
            puVar2[0x14] = uVar3;
            puVar2[0x13] = *(undefined4 *)(iVar1 + 0x1c);
            puVar2[0x12] = 8;
            puVar2[8] = 8;
            puVar2[10] = *(undefined4 *)(iVar1 + -8);
            puVar2[9] = *(undefined4 *)(iVar1 + -0xc);
            puVar2[6] = DAT_00010b8c;
            puVar2[7] = DAT_00010b90;
            puVar2[2] = DAT_00010b94;
            puVar2[3] = DAT_00010b98;
            puVar2[4] = DAT_00010b9c;
            puVar2[5] = DAT_00010ba0;
            *puVar2 = DAT_00010ba4;
            iVar1 = aead_register_instance(param_1,puVar2);
            if (iVar1 == 0) {
              return 0;
            }
          }
          else {
            iVar1 = -0x24;
          }
        }
        else {
          iVar1 = -0x16;
        }
      }
      crypto_rfc4106_free(puVar2);
    }
  }
  return iVar1;
}



/* ===== crypto_rfc4543_create @ 00010ba8 size=228 ===== */

int crypto_rfc4543_create(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_1c;
  
  local_1c = param_4;
  iVar1 = crypto_check_attr_type(param_2,3,&local_1c,param_4,param_1,param_2,param_3);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)kzalloc_constprop_6(0x1ac);
    if (puVar2 == (undefined4 *)0x0) {
      iVar1 = -0xc;
    }
    else {
      uVar3 = crypto_attr_alg_name(*(undefined4 *)(param_2 + 4));
      iVar1 = crypto_grab_aead(puVar2 + 100,puVar2 + 0xc,uVar3,0,local_1c);
      if (iVar1 == 0) {
        iVar1 = puVar2[0x66];
        if ((*(int *)(iVar1 + -0x10) == 0xc) && (*(int *)(iVar1 + 0x14) == 1)) {
          iVar4 = snprintf((char *)(puVar2 + 0x16),0x80,DAT_00010c8c,iVar1 + 0x28);
          if ((iVar4 < 0x80) &&
             (iVar4 = snprintf((char *)(puVar2 + 0x36),0x80,DAT_00010c8c,iVar1 + 0xa8), iVar4 < 0x80
             )) {
            uVar3 = *(undefined4 *)(iVar1 + 0x20);
            puVar2[0x11] = 1;
            puVar2[0x14] = uVar3;
            uVar3 = *(undefined4 *)(iVar1 + 0x1c);
            puVar2[0x12] = 0xc;
            puVar2[0x13] = uVar3;
            puVar2[8] = 8;
            puVar2[10] = *(undefined4 *)(iVar1 + -8);
            puVar2[9] = *(undefined4 *)(iVar1 + -0xc);
            puVar2[6] = DAT_00010c90;
            puVar2[7] = DAT_00010c94;
            puVar2[2] = DAT_00010c98;
            puVar2[3] = DAT_00010c9c;
            puVar2[4] = DAT_00010ca0;
            puVar2[5] = DAT_00010ca4;
            *puVar2 = DAT_00010ca8;
            iVar1 = aead_register_instance(param_1,puVar2);
            if (iVar1 == 0) {
              return 0;
            }
          }
          else {
            iVar1 = -0x24;
          }
        }
        else {
          iVar1 = -0x16;
        }
      }
      crypto_rfc4106_free(puVar2);
    }
  }
  return iVar1;
}



/* ===== crypto_rfc4106_exit_tfm @ 00010cac size=10 ===== */

void crypto_rfc4106_exit_tfm(int param_1)

{
  crypto_destroy_tfm(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x18) + 8);
  return;
}



/* ===== crypto_rfc4543_exit_tfm @ 00010cb6 size=20 ===== */

void crypto_rfc4543_exit_tfm(int param_1)

{
  crypto_destroy_tfm(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x18) + 8);
  crypto_put_default_null_skcipher();
  return;
}



/* ===== crypto_gcm_exit_tfm @ 00010cca size=28 ===== */

void crypto_gcm_exit_tfm(int param_1)

{
  crypto_destroy_tfm(*(int *)(param_1 + 0x1c),*(int *)(param_1 + 0x1c) + 0x28);
  crypto_destroy_tfm(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x18) + 8);
  return;
}



/* ===== crypto_rfc4106_crypt @ 00010ce6 size=264 ===== */

int crypto_rfc4106_crypt(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = param_1 + 0x30;
  iVar4 = *(int *)(iVar6 + 0x10);
  uVar2 = *(uint *)(*(int *)(iVar4 + 0x14) + 0x1c);
  puVar3 = (undefined4 *)(*(int *)(iVar4 + 4) + 0x30 + param_1 + 0x90 + uVar2 & ~uVar2);
  puVar7 = puVar3 + 3;
  scatterwalk_map_and_copy
            (puVar7,*(undefined4 *)(param_1 + 0x24),0,*(int *)(param_1 + 0x18) + -8,0,param_2,
             param_3);
  *puVar3 = *(undefined4 *)(iVar6 + 0x14);
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  puVar3[1] = *puVar1;
  puVar3[2] = puVar1[1];
  sg_init_table(iVar5,3);
  sg_set_buf(iVar5,puVar7,*(int *)(param_1 + 0x18) + -8);
  uVar2 = scatterwalk_ffwd(param_1 + 0x40U,*(undefined4 *)(param_1 + 0x24),
                           *(undefined4 *)(param_1 + 0x18));
  if (param_1 + 0x40U != uVar2) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(uint *)(param_1 + 0x40) = uVar2 & 0xfffffffc | 1;
  }
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28)) {
    sg_init_table(param_1 + 0x60,3);
    sg_set_buf(param_1 + 0x60,puVar7,*(int *)(param_1 + 0x18) + -8);
    uVar2 = scatterwalk_ffwd(param_1 + 0x70U,*(undefined4 *)(param_1 + 0x28),
                             *(undefined4 *)(param_1 + 0x18));
    if (param_1 + 0x70U != uVar2) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(uint *)(param_1 + 0x70) = uVar2 & 0xfffffffc | 1;
    }
  }
  *(int *)(param_1 + 0xa0) = iVar4 + 8;
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xc);
  iVar4 = iVar5;
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28)) {
    iVar4 = param_1 + 0x60;
  }
  *(int *)(param_1 + 0xb4) = iVar5;
  *(int *)(param_1 + 0xb8) = iVar4;
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 **)(param_1 + 0xb0) = puVar3;
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0x18) + -8;
  return param_1 + 0x90;
}



/* ===== crypto_rfc4106_decrypt @ 00010dee size=28 ===== */

void crypto_rfc4106_decrypt(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_r3;
  
  iVar1 = crypto_ipsec_check_assoclen(*(undefined4 *)(param_1 + 0x18),param_2,param_3,param_1);
  if (iVar1 == 0) {
    crypto_rfc4106_crypt(extraout_r3);
    crypto_aead_decrypt();
    return;
  }
  return;
}



/* ===== crypto_rfc4106_encrypt @ 00010e0a size=28 ===== */

void crypto_rfc4106_encrypt(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_r3;
  
  iVar1 = crypto_ipsec_check_assoclen(*(undefined4 *)(param_1 + 0x18),param_2,param_3,param_1);
  if (iVar1 == 0) {
    crypto_rfc4106_crypt(extraout_r3);
    crypto_aead_encrypt();
    return;
  }
  return;
}



/* ===== crypto_gcm_init_common @ 00010e26 size=168 ===== */

void crypto_gcm_init_common(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *__s;
  
  puVar1 = (undefined4 *)crypto_gcm_reqctx();
  __s = puVar1 + 4;
  memset(__s,0,0x10);
  puVar2 = *(undefined4 **)(param_1 + 0x20);
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = puVar2[2];
  puVar1[3] = 0x1000000;
  sg_init_table(puVar1 + 0xc,3,puVar2,0x1000000,param_4);
  sg_set_buf(puVar1 + 0xc,__s,0x10);
  puVar2 = (undefined4 *)
           scatterwalk_ffwd(puVar1 + 0x10,*(undefined4 *)(param_1 + 0x24),
                            *(undefined4 *)(param_1 + 0x18));
  if (puVar1 + 0x10 != puVar2) {
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x10] = (uint)puVar2 & 0xfffffffc | 1;
  }
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28)) {
    sg_init_table(puVar1 + 0x18,3);
    sg_set_buf(puVar1 + 0x18,__s,0x10);
    puVar2 = (undefined4 *)
             scatterwalk_ffwd(puVar1 + 0x1c,*(undefined4 *)(param_1 + 0x28),
                              *(undefined4 *)(param_1 + 0x18));
    if (puVar1 + 0x1c != puVar2) {
      puVar1[0x1d] = 0;
      puVar1[0x1e] = 0;
      puVar1[0x1c] = (uint)puVar2 & 0xfffffffc | 1;
    }
  }
  return;
}



/* ===== gcm_hash_assoc_continue @ 00010ece size=52 ===== */

void gcm_hash_assoc_continue(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x18) & 0xf;
  if ((uVar2 != 0) &&
     (iVar1 = gcm_hash_update(param_1,DAT_00010f08,*DAT_00010f04 + 0x10,0x10 - uVar2,param_2,param_2
                              ,param_3), iVar1 != 0)) {
    return;
  }
  gcm_hash_assoc_remain_continue(param_1,param_2);
  return;
}



/* ===== gcm_hash_assoc_done @ 00010f0c size=34 ===== */

void gcm_hash_assoc_done(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if ((param_2 == 0) && (param_2 = gcm_hash_assoc_continue(uVar1), param_2 == -0x73)) {
    return;
  }
  aead_request_complete(uVar1,param_2);
  return;
}



/* ===== gcm_hash_init_continue @ 00010f2e size=48 ===== */

void gcm_hash_init_continue(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    gcm_hash_assoc_remain_continue();
    return;
  }
  iVar1 = gcm_hash_update(param_1,DAT_00010f60,*(undefined4 *)(param_1 + 0x24),
                          *(int *)(param_1 + 0x18),param_2,param_2,param_3);
  if (iVar1 == 0) {
    gcm_hash_assoc_continue(param_1,param_2);
    return;
  }
  return;
}



/* ===== gcm_hash @ 00010f64 size=64 ===== */

int gcm_hash(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = crypto_gcm_reqctx();
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x10) + 0x14);
  *(undefined4 **)(iVar2 + 0xc0) = puVar3 + 10;
  uVar1 = DAT_00010fa4;
  *(undefined4 *)(iVar2 + 0xc4) = param_2;
  *(undefined4 *)(iVar2 + 0xb8) = uVar1;
  *(int *)(iVar2 + 0xbc) = param_1;
  if ((int)(puVar3[10] << 0x1f) < 0) {
    iVar2 = -0x7e;
  }
  else {
    iVar2 = (*(code *)*puVar3)(iVar2 + 0xb0);
    if (iVar2 == 0) {
      iVar2 = gcm_hash_init_continue(param_1,param_2);
      return iVar2;
    }
  }
  return iVar2;
}



/* ===== crypto_gcm_decrypt @ 00010fa8 size=56 ===== */

void crypto_gcm_decrypt(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = crypto_gcm_reqctx();
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + -8);
  crypto_gcm_init_common(param_1);
  uVar2 = sg_next(iVar1 + 0x30);
  *(undefined4 *)(iVar1 + 0xa8) = DAT_00010fe0;
  *(int *)(iVar1 + 0xa0) = iVar3 - iVar4;
  *(undefined4 *)(iVar1 + 0xa4) = uVar2;
  gcm_hash(param_1,uVar5);
  return;
}



/* ===== gcm_encrypt_continue @ 00010fe4 size=56 ===== */

void gcm_encrypt_continue(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = crypto_gcm_reqctx();
  if (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x28)) {
    iVar2 = iVar1 + 0x30;
  }
  else {
    iVar2 = iVar1 + 0x60;
  }
  uVar3 = sg_next(iVar2);
  *(undefined4 *)(iVar1 + 0xa4) = uVar3;
  *(undefined4 *)(iVar1 + 0xa0) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0xa8) = DAT_0001101c;
  gcm_hash(param_1,param_2);
  return;
}



/* ===== crypto_gcm_encrypt @ 00011020 size=58 ===== */

void crypto_gcm_encrypt(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = crypto_gcm_reqctx();
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  crypto_gcm_init_common(param_1);
  crypto_gcm_init_crypt(param_1,*(undefined4 *)(param_1 + 0x1c));
  uVar1 = DAT_0001105c;
  *(undefined4 *)(iVar2 + 0xd4) = uVar3;
  *(undefined4 *)(iVar2 + 200) = uVar1;
  *(int *)(iVar2 + 0xcc) = param_1;
  iVar2 = crypto_skcipher_encrypt(iVar2 + 0xb0);
  if (iVar2 == 0) {
    gcm_encrypt_continue(param_1,uVar3);
    return;
  }
  return;
}



/* ===== gcm_encrypt_done @ 00011060 size=34 ===== */

void gcm_encrypt_done(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if ((param_2 == 0) && (param_2 = gcm_encrypt_continue(uVar1), param_2 == -0x73)) {
    return;
  }
  aead_request_complete(uVar1,param_2);
  return;
}



/* ===== gcm_hash_init_done @ 00011082 size=34 ===== */

void gcm_hash_init_done(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if ((param_2 == 0) && (param_2 = gcm_hash_init_continue(uVar1), param_2 == -0x73)) {
    return;
  }
  aead_request_complete(uVar1,param_2);
  return;
}



/* ===== gcm_hash_len_done @ 000110a4 size=40 ===== */

void gcm_hash_len_done(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  if (param_2 == 0) {
    iVar1 = crypto_gcm_reqctx(uVar2);
    param_2 = (**(code **)(iVar1 + 0xa8))(uVar2);
    if (param_2 == -0x73) {
      return;
    }
  }
  aead_request_complete(uVar2,param_2);
  return;
}



/* ===== init_module @ 000110cc size=52 ===== */

int init_module(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = kzalloc_constprop_6(0x20);
  piVar1 = DAT_00011100;
  *DAT_00011100 = iVar2;
  if (iVar2 == 0) {
    iVar2 = -0xc;
  }
  else {
    sg_init_one(iVar2 + 0x10,iVar2);
    iVar2 = crypto_register_templates(DAT_00011104,4);
    if (iVar2 != 0) {
      kfree(*piVar1);
    }
  }
  return iVar2;
}



/* ===== cleanup_module @ 00011108 size=22 ===== */

void cleanup_module(void)

{
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  kfree(*DAT_00011120);
  crypto_unregister_templates(DAT_00011124,4,extraout_r2,in_r3);
  return;
}



/* ===== <EXTERNAL>::crypto_skcipher_encrypt @ 00012000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_skcipher_encrypt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::aead_register_instance @ 00012004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void aead_register_instance(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00012008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_swait_queue_head @ 00012014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_swait_queue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_grab_ahash @ 00012018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_grab_ahash(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_ahash_setkey @ 0001201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_ahash_setkey(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree @ 00012020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_spawn_tfm2 @ 00012024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_spawn_tfm2(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sg_init_one @ 00012028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sg_init_one(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_unregister_templates @ 0001202c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_unregister_templates(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_aead_setauthsize @ 00012030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_aead_setauthsize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_aead_decrypt @ 00012034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_aead_decrypt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_skcipher_setkey @ 00012038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_skcipher_setkey(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_destroy_tfm @ 0001203c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_destroy_tfm(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00012040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_skcipher_decrypt @ 00012044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_skcipher_decrypt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_aead_setkey @ 00012048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_aead_setkey(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_drop_spawn @ 0001204c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_drop_spawn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_aead_encrypt @ 00012054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_aead_encrypt(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00012058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree_sensitive @ 0001205c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree_sensitive(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_ahash_finup @ 00012060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_ahash_finup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_grab_aead @ 00012064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_grab_aead(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00012068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wait_for_completion @ 0001206c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wait_for_completion(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__crypto_memneq @ 00012070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __crypto_memneq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00012074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_put_default_null_skcipher @ 00012078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_put_default_null_skcipher(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_register_templates @ 0001207c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_register_templates(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::scatterwalk_map_and_copy @ 00012080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void scatterwalk_map_and_copy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_get_default_null_skcipher @ 00012084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_get_default_null_skcipher(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sg_next @ 00012088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sg_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_grab_skcipher @ 0001208c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_grab_skcipher(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_attr_alg_name @ 00012090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_attr_alg_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::crypto_check_attr_type @ 00012098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void crypto_check_attr_type(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::scatterwalk_ffwd @ 000120a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void scatterwalk_ffwd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sg_init_table @ 000120a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sg_init_table(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kmalloc @ 000120a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


