// gf128mul.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== u128_xor @ 000101c0 size=36 ===== */

void u128_xor(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_3[1];
  *param_1 = *param_2 ^ *param_3;
  param_1[1] = uVar1 ^ uVar2;
  uVar2 = param_2[3];
  uVar1 = param_3[3];
  param_1[2] = param_2[2] ^ param_3[2];
  param_1[3] = uVar2 ^ uVar1;
  return;
}



/* ===== gf128mul_x8_ble @ 000101e4 size=50 ===== */

void gf128mul_x8_ble(uint *param_1,uint *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_2[2];
  uVar2 = param_2[3];
  uVar4 = *param_2;
  uVar3 = param_2[1];
  uVar1 = *(ushort *)(DAT_00010218 + (uVar2 >> 0x18) * 2);
  param_1[2] = uVar3 >> 0x18 | uVar5 << 8;
  param_1[3] = uVar2 << 8 | uVar5 >> 0x18;
  *param_1 = (uint)uVar1 ^ uVar4 << 8;
  param_1[1] = uVar3 << 8 | uVar4 >> 0x18;
  return;
}



/* ===== gf128mul_64k_bbe @ 0001021c size=72 ===== */

void gf128mul_64k_bbe(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pbVar4 = (byte *)((int)param_1 + 0xf);
  puVar1 = (undefined4 *)(*param_2 + (uint)*pbVar4 * 0x10);
  local_28 = *puVar1;
  uStack_24 = puVar1[1];
  uStack_20 = puVar1[2];
  uStack_1c = puVar1[3];
  piVar2 = param_2 + 1;
  do {
    pbVar4 = pbVar4 + -1;
    piVar3 = piVar2 + 1;
    u128_xor(&local_28,&local_28,*piVar2 + (uint)*pbVar4 * 0x10);
    piVar2 = piVar3;
  } while (param_2 + 0x10 != piVar3);
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  param_1[3] = uStack_1c;
  return;
}



/* ===== gf128mul_x_lle @ 00010264 size=66 ===== */

void gf128mul_x_lle(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar12 = *param_2;
  uVar10 = param_2[1];
  uVar13 = param_2[3];
  uVar14 = param_2[2];
  uVar3 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10;
  uVar6 = uVar3 | (uVar10 >> 0x10 & 0xff) << 8;
  uVar4 = uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10;
  uVar7 = uVar4 | (uVar13 >> 0x10 & 0xff) << 8;
  uVar5 = uVar14 << 0x18 | (uVar14 >> 8 & 0xff) << 0x10;
  uVar8 = uVar5 | (uVar14 >> 0x10 & 0xff) << 8;
  uVar9 = (uVar7 | uVar13 >> 0x18) >> 1;
  uVar11 = (uVar6 | uVar10 >> 0x18) >> 1;
  uVar1 = (uVar8 | uVar14 >> 0x18) >> 1;
  uVar2 = (uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 | (uVar12 >> 0x10 & 0xff) << 8 |
          uVar12 >> 0x18) >> 1;
  uVar13 = (int)((uVar13 >> 0x18) << 0x1f) >> 0x1f & 0xe1000000U ^ uVar2;
  param_1[2] = uVar1 << 0x18 | ((uVar8 & 0x1fe00) >> 9) << 0x10 | ((uVar5 & 0x1fe0000) >> 0x11) << 8
               | ((uVar10 >> 0x18) << 0x1f | uVar1) >> 0x18;
  param_1[3] = uVar9 << 0x18 | ((uVar7 & 0x1fe00) >> 9) << 0x10 | ((uVar4 & 0x1fe0000) >> 0x11) << 8
               | (uVar9 | (uVar14 >> 0x18) << 0x1f) >> 0x18;
  *param_1 = uVar2 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 | (uVar13 >> 0x10 & 0xff) << 8 |
             uVar13 >> 0x18;
  param_1[1] = uVar11 << 0x18 | ((uVar6 & 0x1fe00) >> 9) << 0x10 |
               ((uVar3 & 0x1fe0000) >> 0x11) << 8 | (uVar11 | (uVar12 >> 0x18) << 0x1f) >> 0x18;
  return;
}



/* ===== gf128mul_x8_lle @ 000102a6 size=74 ===== */

void gf128mul_x8_lle(uint *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_1[1];
  uVar4 = param_1[3];
  uVar5 = *param_1;
  uVar2 = param_1[2];
  uVar1 = *(ushort *)(DAT_000102f0 + (uVar4 >> 0x18) * 2 + 0x200);
  param_1[2] = (uVar2 >> 0x10) << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 |
               uVar3 >> 0x18;
  param_1[3] = (uVar4 >> 0x10) << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 & 0xff) << 8 |
               uVar2 >> 0x18;
  uVar2 = (uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8) >> 8;
  uVar4 = (uint)uVar1 << 0x10 ^ uVar2;
  *param_1 = uVar2 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
             (uint)(uVar1 >> 8);
  param_1[1] = (uVar3 >> 0x10) << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 |
               uVar5 >> 0x18;
  return;
}



/* ===== gf128mul_lle @ 000102f4 size=188 ===== */

void gf128mul_lle(undefined4 *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  puVar3 = &local_98;
  local_98 = *param_1;
  uStack_94 = param_1[1];
  uStack_90 = param_1[2];
  uStack_8c = param_1[3];
  iVar1 = 0;
  do {
    puVar3 = (undefined4 *)((int)puVar3 + 0x10);
    iVar1 = iVar1 + 1;
    gf128mul_x_lle(puVar3);
  } while (iVar1 != 7);
  pbVar4 = param_2 + 0x10;
  memset(param_1,0,0x10);
  while( true ) {
    pbVar4 = pbVar4 + -1;
    uVar2 = (uint)*pbVar4;
    if ((int)(uVar2 << 0x18) < 0) {
      u128_xor(param_1,param_1,&local_98);
    }
    if ((int)(uVar2 << 0x19) < 0) {
      u128_xor(param_1,param_1,auStack_88);
    }
    if ((int)(uVar2 << 0x1a) < 0) {
      u128_xor(param_1,param_1,auStack_78);
    }
    if ((int)(uVar2 << 0x1b) < 0) {
      u128_xor(param_1,param_1,auStack_68);
    }
    if ((int)(uVar2 << 0x1c) < 0) {
      u128_xor(param_1,param_1,auStack_58);
    }
    if ((int)(uVar2 << 0x1d) < 0) {
      u128_xor(param_1,param_1,auStack_48);
    }
    if ((int)(uVar2 << 0x1e) < 0) {
      u128_xor(param_1,param_1,auStack_38);
    }
    if ((int)(uVar2 << 0x1f) < 0) {
      u128_xor(param_1,param_1,auStack_28);
    }
    if (param_2 == pbVar4) break;
    gf128mul_x8_lle(param_1);
  }
  return;
}



/* ===== gf128mul_4k_lle @ 000103b0 size=64 ===== */

void gf128mul_4k_lle(byte *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pbVar3 = param_1 + 0xf;
  puVar2 = (undefined4 *)(param_2 + (uint)*pbVar3 * 0x10);
  local_28 = *puVar2;
  uStack_24 = puVar2[1];
  uStack_20 = puVar2[2];
  uStack_1c = puVar2[3];
  while (pbVar3 != param_1) {
    uVar1 = gf128mul_x8_lle(&local_28);
    pbVar3 = pbVar3 + -1;
    u128_xor(uVar1,&local_28,param_2 + (uint)*pbVar3 * 0x10);
  }
  *(undefined4 *)pbVar3 = local_28;
  *(undefined4 *)(pbVar3 + 4) = uStack_24;
  *(undefined4 *)(pbVar3 + 8) = uStack_20;
  *(undefined4 *)(pbVar3 + 0xc) = uStack_1c;
  return;
}



/* ===== gf128mul_x_bbe @ 000103f0 size=60 ===== */

void gf128mul_x_bbe(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar8 = *param_2;
  uVar10 = param_2[1];
  uVar7 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
  uVar1 = (uVar10 >> 8 & 0xff) << 0x10;
  uVar3 = (uVar10 >> 0x10 & 0xff) << 8;
  uVar6 = uVar10 << 0x18 | uVar1 | uVar3 | uVar10 >> 0x18;
  uVar11 = param_2[2];
  uVar12 = param_2[3];
  uVar2 = (uVar12 >> 8 & 0xff) << 0x10;
  uVar4 = (uVar12 >> 0x10 & 0xff) << 8;
  uVar9 = uVar12 << 0x18 | uVar2 | uVar4 | uVar12 >> 0x18;
  uVar8 = uVar7 * 2 + (uint)CARRY4(uVar6,uVar6);
  uVar5 = (uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
          uVar11 >> 0x18) * 2 + (uint)CARRY4(uVar9,uVar9);
  *param_1 = uVar8 * 0x1000000 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18;
  param_1[1] = (uVar6 * 2 & 0xff | (uVar11 & 0xff) >> 7) << 0x18 |
               ((uVar3 | uVar10 >> 0x18) >> 7 & 0xff) << 0x10 | ((uVar1 | uVar3) >> 0xf & 0xff) << 8
               | (uVar10 << 0x18 & 0x7fffffff | uVar1) >> 0x17;
  param_1[2] = uVar5 * 0x1000000 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
               uVar5 >> 0x18;
  param_1[3] = ((int)uVar7 >> 0x1f & 0x87U ^ uVar9 * 2) << 0x18 |
               ((uVar4 | uVar12 >> 0x18) >> 7 & 0xff) << 0x10 | ((uVar2 | uVar4) >> 0xf & 0xff) << 8
               | (uVar12 << 0x18 & 0x7fffffff | uVar2) >> 0x17;
  return;
}



/* ===== gf128mul_x8_bbe @ 0001042c size=66 ===== */

void gf128mul_x8_bbe(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[3];
  uVar2 = param_1[2];
  uVar5 = (uint)*(ushort *)(DAT_00010470 + (uVar3 & 0xff) * 2);
  *param_1 = uVar1 << 0x18 | (uVar3 >> 0x18) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 8 & 0xff;
  param_1[1] = uVar2 << 0x18 | (uVar1 >> 0x18) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 8 & 0xff;
  param_1[2] = uVar4 << 0x18 | (uVar2 >> 0x18) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 8 & 0xff;
  param_1[3] = uVar5 << 0x18 | ((uVar5 ^ (uVar4 >> 0x18) << 8) >> 8) << 0x10 |
               (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 8 & 0xff;
  return;
}



/* ===== gf128mul_bbe @ 00010474 size=192 ===== */

void gf128mul_bbe(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  puVar3 = &local_98;
  local_98 = *param_1;
  uStack_94 = param_1[1];
  uStack_90 = param_1[2];
  uStack_8c = param_1[3];
  iVar2 = 0;
  do {
    puVar3 = (undefined4 *)((int)puVar3 + 0x10);
    iVar2 = iVar2 + 1;
    gf128mul_x_bbe(puVar3);
  } while (iVar2 != 7);
  pbVar4 = (byte *)(param_2 + -1);
  memset(param_1,0,0x10);
  while( true ) {
    pbVar4 = pbVar4 + 1;
    uVar1 = (uint)*pbVar4;
    if ((int)(uVar1 << 0x18) < 0) {
      u128_xor(param_1,param_1,auStack_28);
    }
    if ((int)(uVar1 << 0x19) < 0) {
      u128_xor(param_1,param_1,auStack_38);
    }
    if ((int)(uVar1 << 0x1a) < 0) {
      u128_xor(param_1,param_1,auStack_48);
    }
    if ((int)(uVar1 << 0x1b) < 0) {
      u128_xor(param_1,param_1,auStack_58);
    }
    if ((int)(uVar1 << 0x1c) < 0) {
      u128_xor(param_1,param_1,auStack_68);
    }
    if ((int)(uVar1 << 0x1d) < 0) {
      u128_xor(param_1,param_1,auStack_78);
    }
    if ((int)(uVar1 << 0x1e) < 0) {
      u128_xor(param_1,param_1,auStack_88);
    }
    if ((int)(uVar1 << 0x1f) < 0) {
      u128_xor(param_1,param_1,&local_98);
    }
    if ((byte *)(param_2 + 0xf) == pbVar4) break;
    gf128mul_x8_bbe(param_1);
  }
  return;
}



/* ===== gf128mul_4k_bbe @ 00010534 size=68 ===== */

void gf128mul_4k_bbe(byte *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar2 = (undefined4 *)(param_2 + (uint)*param_1 * 0x10);
  local_28 = *puVar2;
  uStack_24 = puVar2[1];
  uStack_20 = puVar2[2];
  uStack_1c = puVar2[3];
  pbVar3 = param_1;
  while (pbVar3 != param_1 + 0xf) {
    uVar1 = gf128mul_x8_bbe(&local_28);
    pbVar3 = pbVar3 + 1;
    u128_xor(uVar1,&local_28,param_2 + (uint)*pbVar3 * 0x10);
  }
  *(undefined4 *)param_1 = local_28;
  *(undefined4 *)(param_1 + 4) = uStack_24;
  *(undefined4 *)(param_1 + 8) = uStack_20;
  *(undefined4 *)(param_1 + 0xc) = uStack_1c;
  return;
}



/* ===== gf128mul_free_64k @ 00010578 size=32 ===== */

void gf128mul_free_64k(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + -4);
  do {
    puVar1 = puVar1 + 1;
    kfree_sensitive(*puVar1);
  } while (puVar1 != (undefined4 *)(param_1 + 0x3c));
  kfree_sensitive(param_1);
  return;
}



/* ===== gf128mul_init_4k_bbe @ 00010598 size=112 ===== */

int gf128mul_init_4k_bbe(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  
  iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_00010608 + 0x30),0xdc0);
  if (iVar1 != 0) {
    uVar3 = param_1[1];
    uVar4 = param_1[2];
    uVar5 = param_1[3];
    iVar6 = 7;
    *(undefined4 *)(iVar1 + 0x10) = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = uVar3;
    *(undefined4 *)(iVar1 + 0x18) = uVar4;
    *(undefined4 *)(iVar1 + 0x1c) = uVar5;
    iVar9 = 1;
    do {
      iVar2 = iVar1 + iVar9 * 0x20;
      gf128mul_x_bbe(iVar2,iVar9 * -0x10 + iVar2);
      iVar6 = iVar6 + -1;
      iVar9 = iVar9 << 1;
    } while (iVar6 != 0);
    iVar6 = 7;
    iVar9 = 2;
    do {
      puVar10 = (undefined4 *)(iVar1 + iVar9 * 0x10);
      puVar7 = (undefined4 *)(iVar1 + 0x10);
      do {
        puVar8 = puVar7 + 4;
        u128_xor(puVar7 + iVar9 * 4,puVar10,puVar7);
        puVar7 = puVar8;
      } while (puVar10 != puVar8);
      iVar6 = iVar6 + -1;
      iVar9 = iVar9 << 1;
    } while (iVar6 != 0);
  }
  return iVar1;
}



/* ===== gf128mul_init_64k_bbe @ 0001060c size=202 ===== */

int * gf128mul_init_64k_bbe(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  
  iVar12 = DAT_000106d8;
  piVar1 = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_000106d8 + 0x18),0xdc0);
  if (piVar1 != (int *)0x0) {
    piVar11 = piVar1 + -1;
    do {
      iVar2 = kmem_cache_alloc(*(undefined4 *)(iVar12 + 0x30),0xdc0);
      piVar11 = piVar11 + 1;
      *piVar11 = iVar2;
      if (iVar2 == 0) {
        gf128mul_free_64k(piVar1);
        return (int *)0x0;
      }
    } while (piVar11 != piVar1 + 0xf);
    uVar5 = param_1[1];
    uVar6 = param_1[2];
    uVar8 = param_1[3];
    iVar12 = *piVar1;
    *(undefined4 *)(iVar12 + 0x10) = *param_1;
    *(undefined4 *)(iVar12 + 0x14) = uVar5;
    *(undefined4 *)(iVar12 + 0x18) = uVar6;
    *(undefined4 *)(iVar12 + 0x1c) = uVar8;
    iVar2 = 7;
    iVar12 = 1;
    do {
      iVar3 = *piVar1 + iVar12 * 0x20;
      gf128mul_x_bbe(iVar3,iVar12 * -0x10 + iVar3);
      iVar2 = iVar2 + -1;
      iVar12 = iVar12 << 1;
      piVar11 = piVar1;
    } while (iVar2 != 0);
    while( true ) {
      iVar2 = 7;
      iVar12 = 2;
      do {
        iVar14 = iVar12 * 0x10;
        iVar3 = 0x10;
        do {
          iVar9 = *piVar11;
          iVar4 = iVar14 + iVar3;
          iVar7 = iVar9 + iVar3;
          iVar3 = iVar3 + 0x10;
          u128_xor(iVar4 + iVar9,iVar9 + iVar14,iVar7);
        } while (iVar14 != iVar3);
        iVar2 = iVar2 + -1;
        iVar12 = iVar12 << 1;
      } while (iVar2 != 0);
      if (piVar11 == piVar1 + 0xf) break;
      iVar2 = 8;
      iVar12 = 0x80;
      do {
        iVar3 = iVar12 * 0x10;
        iVar12 = iVar12 >> 1;
        puVar10 = (undefined4 *)(*piVar11 + iVar3);
        puVar13 = (undefined4 *)(piVar11[1] + iVar3);
        uVar5 = puVar10[1];
        uVar6 = puVar10[2];
        uVar8 = puVar10[3];
        *puVar13 = *puVar10;
        puVar13[1] = uVar5;
        puVar13[2] = uVar6;
        puVar13[3] = uVar8;
        gf128mul_x8_bbe(piVar11[1] + iVar3);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      piVar11 = piVar11 + 1;
    }
  }
  return piVar1;
}



/* ===== gf128mul_init_4k_lle @ 000106dc size=106 ===== */

int gf128mul_init_4k_lle
              (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_00010748 + 0x30),0xdc0,param_3,DAT_00010748,param_4);
  if (iVar1 != 0) {
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    iVar8 = 7;
    *(undefined4 *)(iVar1 + 0x800) = *param_1;
    *(undefined4 *)(iVar1 + 0x804) = uVar2;
    *(undefined4 *)(iVar1 + 0x808) = uVar3;
    *(undefined4 *)(iVar1 + 0x80c) = uVar4;
    iVar5 = 0x40;
    do {
      gf128mul_x_lle(iVar1 + iVar5 * 0x10,iVar1 + iVar5 * 0x20);
      iVar8 = iVar8 + -1;
      iVar5 = iVar5 >> 1;
    } while (iVar8 != 0);
    iVar8 = 7;
    iVar5 = 2;
    do {
      iVar9 = iVar1 + iVar5 * 0x10;
      iVar6 = iVar1 + 0x10;
      do {
        iVar7 = iVar6 + 0x10;
        u128_xor(iVar5 * 0x10 + iVar6,iVar9,iVar6);
        iVar6 = iVar7;
      } while (iVar9 != iVar7);
      iVar8 = iVar8 + -1;
      iVar5 = iVar5 << 1;
    } while (iVar8 != 0);
  }
  return iVar1;
}



/* ===== <EXTERNAL>::kmem_cache_alloc @ 00011004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmem_cache_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree_sensitive @ 00011008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree_sensitive(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 0001100c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


