// rk_dvbm.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== IS_ERR_OR_NULL @ 000100a0 size=18 ===== */

bool IS_ERR_OR_NULL(uint param_1)

{
  if (param_1 == 0) {
    return true;
  }
  return 0xfffff000 < param_1;
}



/* ===== rk_dvbm_update_next_adr @ 000100b2 size=88 ===== */

void rk_dvbm_update_next_adr(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x118);
  iVar3 = *(int *)(param_1 + 0x124);
  iVar1 = *(int *)(param_1 + 0x128);
  __aeabi_uidivmod(*(int *)(param_1 + 0x150) + 1,*(undefined4 *)(param_1 + 0x170),param_3,param_4,
                   param_4);
  iVar4 = *(int *)(param_1 + 0x110);
  __aeabi_uidivmod(*(int *)(param_1 + 0x120) * extraout_r1,*(int *)(param_1 + 0x114) - iVar2);
  *(int *)(param_1 + 0xd4) = iVar2 + iVar4 + extraout_r1_00;
  __aeabi_uidivmod(*(int *)(param_1 + 0x130) * extraout_r1,iVar3 - iVar1);
  *(int *)(param_1 + 0xe0) = iVar1 + iVar4 + extraout_r1_01;
  return;
}



/* ===== rk_dvbm_get_port @ 0001010a size=48 ===== */

int rk_dvbm_get_port(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    if (*DAT_0001013c << 0x1f < 0) {
      printk(DAT_00010140,DAT_00010144,param_2,*DAT_0001013c << 0x1f,param_4);
    }
    if (param_2 == 0) {
      return iVar1 + 0xf0;
    }
    if (param_2 == 1) {
      return iVar1 + 0xb0;
    }
  }
  return 0;
}



/* ===== port_to_ctx @ 00010148 size=36 ===== */

int * port_to_ctx(void)

{
  int iVar1;
  int *piVar2;
  int *extraout_r3;
  
  iVar1 = IS_ERR_OR_NULL();
  if (iVar1 == 0) {
    if (*extraout_r3 == 0) {
      piVar2 = extraout_r3 + -0x3c;
    }
    else {
      piVar2 = (int *)0x0;
      if (*extraout_r3 == 1) {
        piVar2 = extraout_r3 + -0x2c;
      }
    }
  }
  else {
    piVar2 = *(int **)(DAT_0001016c + 4);
  }
  return piVar2;
}



/* ===== rk_dvbm_put @ 00010170 size=26 ===== */

undefined4 rk_dvbm_put(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    iVar1 = port_to_ctx();
    if (iVar1 == 0) {
      uVar2 = 0xffffffea;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== rk_dvbm_set_cb @ 0001018a size=38 ===== */

undefined4 rk_dvbm_set_cb(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    uVar1 = 0xffffffea;
  }
  else {
    if (*param_1 == 1) {
      uVar3 = port_to_ctx();
      puVar2 = (undefined4 *)((ulonglong)uVar3 >> 0x20);
      *(undefined4 *)((int)uVar3 + 0xc0) = *puVar2;
      *(undefined4 *)((int)uVar3 + 0xc4) = puVar2[1];
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== rk_dvbm_dump_regs @ 000101b0 size=82 ===== */

void rk_dvbm_dump_regs(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = DAT_00010204;
  uVar3 = *(uint *)(param_1 + 0x164);
  uVar4 = *(uint *)(param_1 + 0x168);
  uVar1 = DAT_00010210;
  if ((int)(*DAT_00010204 << 0x1c) < 0) {
    printk(DAT_0001020c,DAT_00010208);
    uVar1 = DAT_00010210;
  }
  for (; uVar3 <= uVar4; uVar3 = uVar3 + 4) {
    if ((*puVar2 & 8) != 0) {
      DataSynchronizationBarrier(0xf);
      printk(uVar1,uVar3,*(undefined4 *)(*(int *)(param_1 + 8) + uVar3));
    }
  }
  if ((*puVar2 & 8) == 0) {
    return;
  }
  printk(DAT_0001020c,DAT_00010208);
  return;
}



/* ===== rk_dvbm_irq @ 00010214 size=28 ===== */

undefined4 rk_dvbm_irq(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = DAT_00010230;
  *(undefined4 *)(param_2 + 0xa4) = 0;
  *(undefined4 *)(param_2 + 0xa8) = 0;
  if (*piVar1 << 0x1e < 0) {
    printk(DAT_00010238,DAT_00010234,0,*piVar1 << 0x1e,param_4);
  }
  return 2;
}



/* ===== rk_dvbm_unlink @ 0001023c size=116 ===== */

undefined4 rk_dvbm_unlink(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_c;
  
  if (param_1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    local_c = param_2;
    uVar6 = port_to_ctx(param_1,param_1,param_3,param_4,param_1);
    piVar3 = (int *)((ulonglong)uVar6 >> 0x20);
    iVar1 = (int)uVar6;
    iVar5 = *piVar3;
    if (iVar5 == 0) {
      *(byte *)(iVar1 + 0x10) = *(byte *)(iVar1 + 0x10) & 0xfe;
    }
    else if (iVar5 == 1) {
      *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) & 0xfe;
      piVar3[1] = 0;
      uVar4 = *(byte *)(iVar1 + 0x18) & 1;
      if ((((*(byte *)(iVar1 + 0x18) & 1) == 0) && (local_c = uVar4, *(int *)(iVar1 + 0xb4) != 0))
         && (*(code **)(iVar1 + 0xc0) != (code *)0x0)) {
        (**(code **)(iVar1 + 0xc0))(*(undefined4 *)(iVar1 + 0xc4),0x13,&local_c);
      }
    }
    uVar2 = 0;
    if ((*DAT_000102b0 & 1) != 0) {
      uVar2 = DAT_000102b8;
      if (iVar5 != 0) {
        uVar2 = DAT_000102b4;
      }
      printk(DAT_000102bc,uVar2);
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* ===== rk_dvbm_link @ 000102c0 size=136 ===== */

undefined4 rk_dvbm_link(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (param_1 == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    uVar6 = port_to_ctx(param_1,param_1);
    puVar1 = DAT_00010348;
    piVar4 = (int *)((ulonglong)uVar6 >> 0x20);
    iVar2 = (int)uVar6;
    iVar5 = *piVar4;
    if (iVar5 == 0) {
      if (piVar4[1] != 0) {
        rk_dvbm_unlink(piVar4);
        (**(code **)(DAT_0001034c + 4))(DAT_00010350);
      }
      *(byte *)(iVar2 + 0x10) = *(byte *)(iVar2 + 0x10) | 1;
    }
    else if (iVar5 == 1) {
      if (piVar4[1] == 0) {
        *(byte *)(iVar2 + 0x14) = *(byte *)(iVar2 + 0x14) | 1;
      }
      piVar4[1] = 1;
      if ((int)(*puVar1 << 0x1c) < 0) {
        printk(DAT_00010360);
      }
      rk_dvbm_dump_regs(iVar2);
      if ((int)(*puVar1 << 0x1c) < 0) {
        printk(DAT_00010360);
      }
    }
    uVar3 = 0;
    if ((*puVar1 & 1) != 0) {
      uVar3 = DAT_00010358;
      if (iVar5 == 0) {
        uVar3 = DAT_00010354;
      }
      printk(DAT_0001035c,uVar3,*(undefined4 *)(iVar2 + 0x150),*(undefined4 *)(iVar2 + 0x154));
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* ===== rk_dvbm_isr @ 00010364 size=190 ===== */

undefined4 rk_dvbm_isr(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0xa8);
  iVar3 = param_2;
  if ((int)(uVar1 << 0x1a) < 0) {
    if (*DAT_00010424 << 0x1e < 0) {
      printk(DAT_0001042c,DAT_00010428,uVar2,*DAT_00010424,param_1,param_2);
    }
    *(undefined4 *)(param_2 + 0xf4) = 1;
  }
  if ((int)(uVar1 << 0x19) < 0) {
    if (*DAT_00010424 << 0x1e < 0) {
      printk(DAT_00010430,DAT_00010428);
    }
    *(undefined4 *)(param_2 + 0xf4) = 0;
  }
  if ((int)(uVar1 << 0x18) < 0) {
    if (*DAT_00010424 << 0x1e < 0) {
      printk(DAT_00010434,DAT_00010428,uVar2,*DAT_00010424,param_1,iVar3);
    }
    *(undefined4 *)(param_2 + 0xb4) = 1;
  }
  if ((int)(uVar1 << 0x17) < 0) {
    if (*DAT_00010424 << 0x1e < 0) {
      printk(DAT_00010438,DAT_00010428,uVar2,*DAT_00010424,param_1,iVar3);
    }
    *(undefined4 *)(param_2 + 0xb4) = 0;
  }
  if ((int)(uVar1 << 0x1f) < 0) {
    if (*DAT_00010424 << 0x1e < 0) {
      printk(DAT_0001043c,DAT_00010428,uVar2,*(byte *)(param_2 + 0x18) & 1,
             *(undefined4 *)(param_2 + 0x16c),iVar3);
    }
    if ((-1 < (int)((uint)*(byte *)(param_2 + 0x18) << 0x1f)) && (*(int *)(param_2 + 0x16c) == 0)) {
      rk_dvbm_unlink(param_2 + 0xb0);
    }
  }
  if ((uVar1 & 0xc) != 0) {
    rk_dvbm_dump_regs(param_2);
  }
  return 1;
}



/* ===== rk_dvbm_ctrl @ 00010440 size=650 ===== */

undefined4 rk_dvbm_ctrl(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  int iVar8;
  uint *puVar9;
  int extraout_r1;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  undefined8 uVar23;
  longlong lVar24;
  uint *puVar10;
  
  if (param_2 < 0x17) {
    uVar23 = port_to_ctx(param_1,param_3,param_3,param_4,param_1,param_2,param_3);
    uVar7 = DAT_0001071c;
    puVar12 = (uint *)((ulonglong)uVar23 >> 0x20);
    iVar8 = (int)uVar23;
    switch(param_2) {
    case 1:
      puVar9 = puVar12;
      puVar14 = (uint *)(iVar8 + 0x104);
      do {
        puVar10 = puVar9 + 1;
        *puVar14 = *puVar9;
        puVar9 = puVar10;
        puVar14 = puVar14 + 1;
      } while (puVar10 != puVar12 + 0xc);
      iVar11 = *(int *)(iVar8 + 0x110);
      iVar18 = *(int *)(iVar8 + 0x118);
      iVar20 = *(int *)(iVar8 + 0x114);
      iVar15 = iVar11 + iVar18;
      *(int *)(iVar8 + 0x38) = iVar15;
      *(int *)(iVar8 + 0x3c) = iVar11 + iVar20;
      *(int *)(iVar8 + 0x40) = iVar15;
      iVar15 = *(int *)(iVar8 + 0x128) + iVar11;
      uVar16 = *(undefined4 *)(iVar8 + 0x11c);
      *(int *)(iVar8 + 0x50) = *(int *)(iVar8 + 0x124) + iVar11;
      *(int *)(iVar8 + 0x54) = iVar15;
      uVar17 = *(undefined4 *)(iVar8 + 0x120);
      *(int *)(iVar8 + 0x4c) = iVar15;
      *(undefined4 *)(iVar8 + 0x5c) = *(undefined4 *)(iVar8 + 0x130);
      *(undefined4 *)(iVar8 + 0x48) = uVar17;
      *(undefined4 *)(iVar8 + 0x44) = uVar16;
      *(undefined4 *)(iVar8 + 0x58) = *(undefined4 *)(iVar8 + 300);
      *(undefined4 *)(iVar8 + 0x60) = uVar16;
      *(undefined4 *)(iVar8 + 100) = uVar16;
      *(undefined4 *)(iVar8 + 0x68) = uVar16;
      *(undefined4 *)(iVar8 + 0x6c) = uVar16;
      iVar11 = __aeabi_uidiv(uVar17,uVar16);
      *(int *)(iVar8 + 0x14c) = iVar11;
      uVar7 = __aeabi_uidiv(iVar20 - iVar18,uVar16);
      *(undefined4 *)(iVar8 + 0x134) = 0;
      *(undefined4 *)(iVar8 + 0x138) = 0;
      *(undefined4 *)(iVar8 + 0x13c) = uVar7;
      *(uint *)(iVar8 + 0x140) = iVar11 + 0x1fU & 0xffffffe0;
      puVar12 = DAT_00010708;
      *(undefined4 *)(iVar8 + 0x160) = uVar7;
      if (((int)(*puVar12 << 0x1f) < 0) &&
         (printk(DAT_0001070c,iVar8 + 0x110,uVar16,uVar17), (int)(*puVar12 << 0x1f) < 0)) {
        printk(DAT_00010710,*(undefined4 *)(iVar8 + 0x38),*(undefined4 *)(iVar8 + 0x3c),
               *(undefined4 *)(iVar8 + 0x4c),*(undefined4 *)(iVar8 + 0x50));
      }
      iVar20 = *(int *)(iVar8 + 0x48);
      iVar15 = *(int *)(iVar8 + 0x114);
      iVar18 = *(int *)(iVar8 + 0x118);
      iVar11 = iVar20;
      do {
        __aeabi_uidivmod(iVar11,iVar15 - iVar18);
        if (extraout_r1 == 0) break;
        param_2 = param_2 + 1;
        iVar11 = iVar11 + iVar20;
      } while (param_2 != 0x10000);
      *(uint *)(iVar8 + 0x170) = param_2;
      *(undefined4 *)(iVar8 + 0x150) = 0;
      *(undefined4 *)(iVar8 + 0x154) = 0;
      *(undefined4 *)(iVar8 + 0x158) = 0;
      *(undefined4 *)(iVar8 + 0x15c) = 0;
      rk_dvbm_update_next_adr(iVar8);
      break;
    case 2:
      lVar24 = ktime_get();
      if ((*(int *)(iVar8 + 0x158) != 0 || *(int *)(iVar8 + 0x15c) != 0) &&
         ((int)(*DAT_00010708 << 0x1f) < 0)) {
        uVar6 = lVar24 - *(longlong *)(iVar8 + 0x158);
        iVar11 = (int)(uVar6 >> 0x20);
        uVar3 = uVar6;
        if ((longlong)uVar6 < 0) {
          uVar3 = CONCAT44(-iVar11 - (uint)((int)uVar6 != 0),-(int)uVar6);
        }
        uVar19 = (uint)(uVar3 >> 0x20);
        lVar2 = (ulonglong)DAT_000106f8 * (uVar3 & 0xffffffff);
        uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
        bVar22 = CARRY4((uint)lVar2,DAT_000106f8);
        uVar3 = (ulonglong)DAT_000106fc * (uVar3 & 0xffffffff) +
                (ulonglong)
                CONCAT14(CARRY4(uVar13,DAT_000106fc) || CARRY4(uVar13 + DAT_000106fc,(uint)bVar22),
                         uVar13 + DAT_000106fc + (uint)bVar22);
        uVar13 = (uint)(uVar3 >> 0x20);
        uVar21 = (uint)((ulonglong)DAT_000106f8 * (ulonglong)uVar19 + (uVar3 & 0xffffffff) >> 0x20);
        uVar3 = (ulonglong)DAT_000106fc * (ulonglong)uVar19 +
                (ulonglong)CONCAT14(CARRY4(uVar21,uVar13),uVar21 + uVar13) >> 9;
        if ((longlong)uVar6 < 0) {
          uVar3 = CONCAT44(-(int)(uVar3 >> 0x20) - (uint)((int)uVar3 != 0),-(int)uVar3);
        }
        printk(DAT_00010714,*(undefined4 *)(iVar8 + 0x150),*(undefined4 *)(iVar8 + 0x154),iVar11,
               uVar3);
      }
      *(longlong *)(iVar8 + 0x158) = lVar24;
      break;
    case 3:
      *(uint *)(iVar8 + 0x154) = *puVar12;
      *(uint *)(iVar8 + 0x134) = *(int *)(iVar8 + 0x150) + 1U & 0xff;
      rk_dvbm_update_next_adr();
      uVar13 = *DAT_00010708;
      iVar11 = *(int *)(iVar8 + 0x150) + 1;
      *(int *)(iVar8 + 0x150) = iVar11;
      if ((uVar13 & 1) == 0) {
        return 0;
      }
      printk(DAT_00010718,iVar11,*(undefined4 *)(iVar8 + 0x154));
      break;
    case 0x11:
      uVar13 = *puVar12;
      *(byte *)(iVar8 + 0x18) = *(byte *)(iVar8 + 0x18) & 0xfe | (byte)(uVar13 & 1);
      uVar16 = DAT_00010724;
      if ((uVar13 & 1) == 0) {
        uVar16 = DAT_00010720;
      }
      _dev_info(*(undefined4 *)(iVar8 + 4),uVar7,uVar16);
      break;
    case 0x12:
      bVar1 = *(byte *)(iVar8 + 0x18);
      bVar5 = (byte)*puVar12 & 1;
      *(byte *)(iVar8 + 0x18) = bVar1 & 0xfe | bVar5;
      bVar4 = (byte)((puVar12[1] & 1) << 1);
      *(byte *)(iVar8 + 0x18) = bVar1 & 0xfc | bVar5 | bVar4;
      *(byte *)(iVar8 + 0x18) = bVar1 & 0xf8 | bVar5 | bVar4 | (byte)((puVar12[2] & 1) << 2);
      break;
    case 0x13:
      *puVar12 = *(uint *)(iVar8 + 0x3c);
      puVar12[1] = *(uint *)(iVar8 + 0x38);
      puVar12[3] = *(uint *)(iVar8 + 0x50);
      puVar12[4] = *(uint *)(iVar8 + 0x4c);
      puVar12[5] = *(uint *)(iVar8 + 0xe0);
      puVar12[2] = *(uint *)(iVar8 + 0xd4);
      puVar12[8] = (uint)(*(uint *)(iVar8 + 0x160) <= *(uint *)(iVar8 + 0x138));
      puVar12[6] = *(uint *)(iVar8 + 0x134);
      puVar12[7] = *(uint *)(iVar8 + 0x138);
      break;
    case 0x14:
      puVar9 = (uint *)(iVar8 + 0x134);
      do {
        puVar14 = puVar9 + 1;
        *puVar12 = *puVar9;
        puVar12 = puVar12 + 1;
        puVar9 = puVar14;
      } while (puVar14 != (uint *)(iVar8 + 0x144));
      break;
    case 0x15:
      rk_dvbm_dump_regs();
    }
    uVar7 = 0;
  }
  else {
    printk(DAT_00010704,DAT_00010700);
    uVar7 = 0xffffffea;
  }
  return uVar7;
}



/* ===== rk_dvbm_probe @ 00010728 size=358 ===== */

int rk_dvbm_probe(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = param_1 + 0x10;
  _dev_info(iVar7,DAT_00010890,param_3,param_4,param_1,param_2,param_3,param_4);
  puVar2 = (undefined4 *)devm_kmalloc(iVar7,0x178,0xdc0);
  if (puVar2 == (undefined4 *)0x0) {
    return -0xc;
  }
  _dev_info(iVar7,DAT_00010894,puVar2);
  puVar2[0x52] = 0;
  puVar2[1] = iVar7;
  puVar2[0x2e] = 0;
  puVar2[0x3c] = 0;
  puVar2[0x2c] = 1;
  *(undefined4 **)(param_1 + 0x50) = puVar2;
  pm_runtime_enable(iVar7);
  iVar3 = platform_get_irq(param_1,0);
  puVar2[0x2b] = iVar3;
  uVar4 = DAT_00010898;
  if ((iVar3 < 0) ||
     (iVar3 = platform_get_resource(param_1,0x200,0), uVar4 = DAT_0001089c, iVar3 == 0)) {
    _dev_err(iVar7,uVar4);
  }
  else {
    uVar4 = devm_ioremap_resource(iVar7,iVar3);
    puVar2[2] = uVar4;
    iVar5 = IS_ERR_OR_NULL();
    uVar4 = DAT_000108a0;
    if (iVar5 == 0) {
      uVar4 = devm_clk_get(puVar2[1],DAT_000108a4);
      *puVar2 = uVar4;
      iVar5 = IS_ERR_OR_NULL();
      uVar4 = DAT_000108a8;
      if (iVar5 == 0) {
        uVar4 = __devm_reset_control_get(puVar2[1],DAT_000108ac,0,0,0,1);
        puVar2[0x25] = uVar4;
        iVar6 = IS_ERR_OR_NULL();
        iVar5 = DAT_000108b4;
        uVar4 = DAT_000108b0;
        if (iVar6 == 0) {
          puVar2[0x5b] = 1;
          *(undefined4 **)(iVar5 + 4) = puVar2;
          *(ushort *)(puVar2 + 6) = *(ushort *)(puVar2 + 6) & 0xf0f8;
          uVar1 = DAT_000108b8;
          puVar2[7] = puVar2[7] & 0xffc00000 | DAT_000108b8 & 0x3fffff;
          puVar2[8] = puVar2[8] & 0xffc00000 | uVar1 & 0x3fffff;
          puVar2[9] = puVar2[9] & 0xffc00000 | uVar1 & 0x3fffff;
          *(ushort *)(puVar2 + 10) = ~(~(*(ushort *)(puVar2 + 10) >> 9) << 9);
          puVar2[0x59] = 0x80;
          puVar2[0x5a] = 0xb8;
          iVar3 = *(int *)(param_1 + 0x3c);
          if (iVar3 == 0) {
            iVar3 = *(int *)(param_1 + 0x10);
          }
          iVar3 = devm_request_threaded_irq
                            (iVar7,puVar2[0x2b],DAT_000108bc,DAT_000108c0,0x2000,iVar3,puVar2);
          if (iVar3 == 0) {
            _dev_info(iVar7,DAT_000108c8);
            return 0;
          }
          _dev_err(iVar7,DAT_000108c4);
          goto LAB_00010796;
        }
      }
    }
    _dev_err(iVar7,uVar4,iVar3);
  }
  iVar3 = -0x13;
LAB_00010796:
  __pm_runtime_disable(iVar7,1);
  return iVar3;
}



/* ===== rk_dvbm_remove @ 000108cc size=26 ===== */

undefined4 rk_dvbm_remove(int param_1)

{
  _dev_info(param_1 + 0x10,DAT_000108e8);
  __pm_runtime_disable(param_1 + 0x10,1);
  return 0;
}



/* ===== init_module @ 000108ec size=8 ===== */

void init_module(void)

{
  __platform_driver_register(DAT_000108f8,DAT_000108f4);
  return;
}



/* ===== cleanup_module @ 000108fc size=6 ===== */

void cleanup_module(void)

{
  platform_driver_unregister(DAT_00010904);
  return;
}



/* ===== <EXTERNAL>::devm_request_threaded_irq @ 00012000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_request_threaded_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_kmalloc @ 00012008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_driver_unregister @ 0001200c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_driver_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_irq @ 00012010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_clk_get @ 00012018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_clk_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pm_runtime_enable @ 0001201c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pm_runtime_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_info @ 00012020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_err @ 00012024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_resource @ 0001202c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 00012030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 00012034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__platform_driver_register @ 00012038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __platform_driver_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__devm_reset_control_get @ 0001203c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __devm_reset_control_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_ioremap_resource @ 00012040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_ioremap_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ktime_get @ 00012044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ktime_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidivmod @ 00012048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_disable @ 00012050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


