// phy-rockchip-csi2-dphy-hw.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== read_csi2_dphy_reg @ 000101c0 size=26 ===== */

void read_csi2_dphy_reg(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + param_2 * 4);
  if ((param_2 == 0) || (iVar1 != 0)) {
    DataSynchronizationBarrier(0xf);
    *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1);
  }
  return;
}



/* ===== get_lvds_data_width @ 000101da size=46 ===== */

undefined4 get_lvds_data_width(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (0xb < param_1 - 0x3007U) {
    return 2;
  }
  uVar1 = 1 << (param_1 - 0x3007U & 0xff);
  if ((uVar1 & 0x189) != 0) {
    return 0;
  }
  if ((uVar1 & 0xe02) == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



/* ===== rk3568_csi2_dphy_hw_individual_init @ 00010208 size=6 ===== */

void rk3568_csi2_dphy_hw_individual_init(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = DAT_00010210;
  return;
}



/* ===== rk3588_csi2_dphy_hw_individual_init @ 00010214 size=6 ===== */

void rk3588_csi2_dphy_hw_individual_init(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = DAT_0001021c;
  return;
}



/* ===== rv1106_csi2_dphy_hw_individual_init @ 00010220 size=6 ===== */

void rv1106_csi2_dphy_hw_individual_init(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = DAT_00010228;
  return;
}



/* ===== rk3562_csi2_dphy_hw_individual_init @ 0001022c size=6 ===== */

void rk3562_csi2_dphy_hw_individual_init(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = DAT_00010234;
  return;
}



/* ===== write_csi2_dphy_reg @ 00010238 size=42 ===== */

void write_csi2_dphy_reg(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (((param_2 == 0) || (param_2 == 0x12)) || (*(int *)(iVar1 + param_2 * 4) != 0)) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(iVar1 + param_2 * 4)) = param_3;
  }
  return;
}



/* ===== csi_mipidphy_wr_ths_settle @ 00010262 size=42 ===== */

void csi_mipidphy_wr_ths_settle(undefined4 param_1,uint param_2,int param_3)

{
  uint local_14;
  
  local_14 = 0;
  read_csi2_dphy_reg(param_1,*(undefined1 *)(param_3 + DAT_0001028c + 0x984),&local_14,DAT_0001028c,
                     param_1);
  local_14 = local_14 & 0xffffff80 | param_2;
  write_csi2_dphy_reg();
  return;
}



/* ===== write_sys_grf_reg @ 00010290 size=40 ===== */

void write_sys_grf_reg(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0xc) + param_2 * 0xc;
  iVar1 = *(int *)(iVar2 + 4);
  if (iVar1 != 0) {
    uVar3 = *(uint *)(iVar2 + 8);
    regmap_write(*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 0xc),
                 param_3 << (uVar3 & 0xff) | iVar1 << (uVar3 + 0x10 & 0xff));
    return;
  }
  return;
}



/* ===== write_grf_reg @ 000102b8 size=40 ===== */

void write_grf_reg(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0xc) + param_2 * 0xc;
  iVar1 = *(int *)(iVar2 + 4);
  if (iVar1 != 0) {
    uVar3 = *(uint *)(iVar2 + 8);
    regmap_write(*(undefined4 *)(param_1 + 4),
                 *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 0xc),
                 param_3 << (uVar3 & 0xff) | iVar1 << (uVar3 + 0x10 & 0xff));
    return;
  }
  return;
}



/* ===== rockchip_csi2_dphy_hw_remove @ 000102e0 size=14 ===== */

undefined4
rockchip_csi2_dphy_hw_remove(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __pm_runtime_disable(param_1 + 0x10,1,param_3,param_4,param_4);
  return 0;
}



/* ===== csi2_dphy_hw_ttl_mode_disable @ 000102ee size=38 ===== */

void csi2_dphy_hw_ttl_mode_disable(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  write_csi2_dphy_reg(param_1,0,1);
  uVar1 = *(undefined4 *)(param_1 + 0x104);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  clk_bulk_disable(uVar1,uVar2);
  clk_bulk_unprepare(uVar1,uVar2);
  return;
}



/* ===== rockchip_csi2_dphy_hw_probe @ 00010314 size=334 ===== */

undefined4 rockchip_csi2_dphy_hw_probe(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  
  iVar9 = param_1 + 0x10;
  piVar2 = (int *)devm_kmalloc(iVar9,0x124,0xdc0);
  if (piVar2 == (int *)0x0) {
    return 0xfffffff4;
  }
  *piVar2 = iVar9;
  iVar3 = of_match_device(DAT_00010464,iVar9);
  if (iVar3 == 0) {
    return 0xffffffea;
  }
  iVar3 = *(int *)(iVar3 + 0xc0);
  uVar4 = syscon_regmap_lookup_by_phandle(*(undefined4 *)(param_1 + 0x174),DAT_00010468);
  uVar8 = DAT_0001046c;
  if (uVar4 < 0xfffff001) {
    piVar2[1] = uVar4;
    if (*(int *)(iVar3 + 0x28) == 1) {
      uVar4 = syscon_regmap_lookup_by_phandle(*(undefined4 *)(param_1 + 0x174),DAT_00010470);
      uVar8 = DAT_00010474;
      if (0xfffff000 < uVar4) goto LAB_0001035a;
      piVar2[2] = uVar4;
    }
    iVar6 = devm_clk_bulk_get_all(iVar9,piVar2 + 8);
    piVar2[0x41] = iVar6;
    if (iVar6 < 0) {
      _dev_err(iVar9,DAT_00010478);
    }
    uVar4 = devm_reset_control_array_get(iVar9,0,1);
    piVar2[9] = uVar4;
    if (0xfffff000 < uVar4) {
      dev_err_probe(iVar9,uVar4,DAT_0001047c);
    }
    piVar2[6] = iVar3;
    piVar2[0x43] = 0;
    piVar2[0x44] = 0;
    piVar2[3] = *(int *)(iVar3 + 0x10);
    piVar2[4] = *(int *)(iVar3 + 0x14);
    piVar2[5] = *(int *)(iVar3 + 0x18);
    piVar7 = (int *)platform_get_resource(param_1,0x200);
    uVar4 = devm_ioremap_resource(iVar9,piVar7);
    piVar2[7] = uVar4;
    if (0xfffff000 < uVar4) {
      uVar4 = devm_ioremap(iVar9,*piVar7,(piVar7[1] + 1) - *piVar7);
      piVar2[7] = uVar4;
      uVar8 = DAT_00010480;
      if (0xfffff000 < uVar4) goto LAB_0001035a;
    }
    uVar1 = DAT_00010488;
    uVar8 = DAT_00010484;
    piVar2[0x45] = *(int *)(iVar3 + 0x20);
    piVar2[0x46] = *(int *)(iVar3 + 0x24);
    iVar3 = *(int *)(iVar3 + 0x28);
    uVar5 = 0;
    piVar2[0x40] = 0;
    if (iVar3 == 3) {
      piVar2[0x47] = DAT_0001048c;
      iVar3 = DAT_00010490;
    }
    else {
      piVar2[0x47] = 0;
      iVar3 = 0;
    }
    piVar2[0x48] = iVar3;
    __mutex_init(piVar2 + 0x3d,uVar1,uVar8);
    *(int **)(param_1 + 0x50) = piVar2;
    pm_runtime_enable(iVar9);
    _dev_info(iVar9,DAT_00010494);
  }
  else {
LAB_0001035a:
    _dev_err(iVar9,uVar8);
    uVar5 = 0xffffffed;
  }
  return uVar5;
}



/* ===== csi2_dphy_hw_ttl_mode_enable @ 00010498 size=96 ===== */

int csi2_dphy_hw_ttl_mode_enable
              (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = param_1[8];
  uVar2 = param_1[0x41];
  iVar1 = clk_bulk_prepare(uVar2,uVar3,param_3,param_4,param_4);
  if (iVar1 == 0) {
    iVar1 = clk_bulk_enable(uVar2,uVar3);
    if (iVar1 == 0) {
      write_csi2_dphy_reg(param_1,0,0x7d);
      write_csi2_dphy_reg(param_1,0xf,0x5f);
      write_csi2_dphy_reg(param_1,0x21,1);
      write_csi2_dphy_reg(param_1,0x23,1);
      return 0;
    }
    clk_bulk_unprepare(uVar2,uVar3);
  }
  _dev_err(*param_1,DAT_000104f8);
  return iVar1;
}



/* ===== csi2_dphy_hw_stream_off @ 000104fc size=98 ===== */

undefined4 csi2_dphy_hw_stream_off(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0xc);
  piVar2 = (int *)(iVar3 + 0x100);
  HintPreloadData(piVar2);
  do {
    ExclusiveAccess(piVar2);
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 + -1 == 0) {
    mutex_lock(iVar3 + 0xf4);
    write_csi2_dphy_reg(iVar3,0,1);
    if (*(int *)(iVar3 + 0x24) != 0) {
      reset_control_assert();
    }
    (**(code **)(DAT_00010560 + 4))(DAT_00010564);
    if (*(int *)(iVar3 + 0x24) != 0) {
      reset_control_deassert();
    }
    usleep_range(500,1000);
    mutex_unlock(iVar3 + 0xf4);
  }
  return 0;
}



/* ===== csi2_dphy_hw_stream_on @ 00010568 size=1624 ===== */

undefined4 csi2_dphy_hw_stream_on(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  undefined4 uVar3;
  int extraout_r1_00;
  int extraout_r1_01;
  uint extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  undefined2 uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  uint local_30;
  uint local_2c [2];
  
  uVar9 = *(undefined4 *)(param_2 + 0x2c);
  iVar1 = media_entity_remote_pad(uVar9);
  if (iVar1 == 0) {
    printk(DAT_00010888,param_2 + 0x74);
    iVar1 = 0;
  }
  else {
    iVar1 = media_entity_remote_pad(uVar9);
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  iVar10 = param_1[3];
  iVar13 = **(int **)(iVar10 + 0x18);
  iVar6 = (*(int **)(iVar10 + 0x18))[1];
  iVar7 = 0;
  local_30 = 0;
  if (iVar1 == 0) {
    return 0xffffffed;
  }
  while( true ) {
    if ((int)param_1[0x78] <= iVar7) {
      return 0xffffffed;
    }
    if (iVar1 == param_1[iVar7 * 0x10 + 0x55]) break;
    iVar7 = iVar7 + 1;
  }
  if (param_1 + iVar7 * 0x10 + 0x55 == (undefined4 *)0x0) {
    return 0xffffffed;
  }
  mutex_lock(iVar10 + 0xf4);
  read_csi2_dphy_reg(iVar10,0,local_2c);
  if (*(int *)(iVar10 + 0x110) == 1) {
    local_30 = local_30 | (0xffffffffU >> (0x20 - param_1[iVar7 * 0x10 + 100] & 0xff)) << 2 | 0x40;
  }
  else {
    if (-1 < (int)(local_2c[0] << 0x19)) {
      local_30 = local_30 | 0x40;
    }
    __aeabi_idivmod(param_1[0x79],3);
    if (extraout_r1 == 1) {
      local_30 = local_30 | (0xffffffffU >> (0x20 - param_1[iVar7 * 0x10 + 100] & 0xff)) << 2;
    }
    else if ((extraout_r1 == 2) &&
            (local_30 = local_30 | (0xffffffffU >> (0x20 - param_1[iVar7 * 0x10 + 100] & 0xff)) << 4
            , *(int *)(*(int *)(iVar10 + 0x18) + 0x28) != 0)) {
      write_csi2_dphy_reg(iVar10,0x13,0x40);
    }
  }
  local_30 = local_30 | local_2c[0];
  write_csi2_dphy_reg(iVar10,0);
  if (*(int *)(iVar10 + 0x110) == 1) {
    write_csi2_dphy_reg(iVar10,0xf,0x1e);
    uVar9 = 0x1f;
LAB_00010624:
    write_csi2_dphy_reg(iVar10,0xf,uVar9);
  }
  else {
    uVar9 = read_csi2_dphy_reg(iVar10,0xf,&local_30);
    if (-1 < (int)(local_30 << 0x19)) {
      write_csi2_dphy_reg(uVar9,0xf,0x5e);
      uVar9 = 0x5f;
      goto LAB_00010624;
    }
  }
  iVar1 = param_1[3];
  iVar12 = param_1[0x79];
  if (*(int *)(iVar1 + 0x110) == 1) {
    uVar4 = 0xffffffffU >> (0x20 - param_1[iVar7 * 0x10 + 100] & 0xff) & 0xff;
    if (iVar12 < 3) {
      write_grf_reg(iVar1,0x1d,uVar4);
      write_grf_reg(iVar1,0x1c,1);
      uVar9 = 0x28;
      iVar12 = *(int *)(*(int *)(iVar1 + 0x18) + 0x28);
    }
    else {
      if (*(uint *)(*(int *)(iVar1 + 0x18) + 0x28) < 2) {
        write_grf_reg(iVar1,0x1d,uVar4);
        uVar9 = 0x1c;
      }
      else {
        write_grf_reg(iVar1,0x38,uVar4);
        uVar9 = 0x37;
      }
      write_grf_reg(iVar1,uVar9,1);
      uVar9 = 0x29;
      iVar12 = *(int *)(*(int *)(iVar1 + 0x18) + 0x28);
    }
    uVar5 = 0xfe;
    if (iVar12 != 1) goto LAB_00010678;
LAB_000107bc:
    write_sys_grf_reg(iVar1,uVar9,uVar5);
    goto switchD_00010748_caseD_3;
  }
  iVar2 = strncmp((char *)(*(int *)(param_1[0x2a] + 4) + 8),DAT_0001088c,0xf);
  switch(iVar12) {
  case 1:
    write_grf_reg(iVar1,0x2a,0xffffffffU >> (0x20 - param_1[iVar7 * 0x10 + 100] & 0xff) & 0xff);
    write_grf_reg(iVar1,0x1c,1);
    iVar12 = *(int *)(*(int *)(iVar1 + 0x18) + 0x28);
    if (iVar12 == 0) {
      write_grf_reg(iVar1,0x28,1);
      if (iVar2 == 0) {
        uVar5 = 0;
        goto LAB_0001079c;
      }
      uVar5 = 0;
LAB_000107a2:
      uVar9 = 0x26;
    }
    else {
      if (iVar12 == 1) {
        uVar9 = 0;
        uVar3 = 0x2d;
LAB_000107b0:
        uVar5 = 1;
        write_sys_grf_reg(iVar1,uVar3,uVar9);
        uVar9 = 0x28;
        goto LAB_000107bc;
      }
      if (iVar12 != 3) goto LAB_000108e6;
      uVar5 = 1;
      if (param_1[iVar7 * 0x10 + 0x56] == 5) {
        uVar9 = 0x31;
      }
      else {
        uVar9 = 0x32;
      }
    }
    break;
  case 2:
    write_grf_reg(iVar1,0x2b,0xffffffffU >> (0x20 - param_1[iVar7 * 0x10 + 100] & 0xff) & 0xff);
    write_grf_reg(iVar1,0x24,1);
    iVar12 = *(int *)(*(int *)(iVar1 + 0x18) + 0x28);
    if (iVar12 == 0) {
      write_grf_reg(iVar1,0x28,1);
      uVar5 = 1;
      if (iVar2 != 0) goto LAB_000107a2;
LAB_0001079c:
      uVar9 = 0x27;
      break;
    }
    if (iVar12 == 1) {
      uVar3 = 0x2e;
      uVar9 = 1;
      goto LAB_000107b0;
    }
LAB_000108e6:
    if (iVar12 == 4) {
      uVar5 = 1;
      uVar9 = 0x28;
      break;
    }
  default:
    goto switchD_00010748_caseD_3;
  case 4:
    iVar12 = *(int *)(*(int *)(iVar1 + 0x18) + 0x28);
    if (iVar12 == 1) {
      write_sys_grf_reg(iVar1,0x29,1);
      write_sys_grf_reg(iVar1,0x2f,0);
      write_grf_reg(iVar1,0x2a,0xffffffffU >> (0x20 - param_1[iVar7 * 0x10 + 100] & 0xff) & 0xff);
      uVar9 = 0x1c;
      uVar5 = 1;
    }
    else {
      if (iVar12 != 4) goto switchD_00010748_caseD_3;
      write_grf_reg(iVar1,0x29,1);
      write_grf_reg(iVar1,0x39,0xffffffffU >> (0x20 - param_1[iVar7 * 0x10 + 100] & 0xff) & 0xff);
      uVar5 = 1;
      uVar9 = 0x37;
    }
    break;
  case 5:
    iVar12 = *(int *)(*(int *)(iVar1 + 0x18) + 0x28);
    if (iVar12 == 1) {
      write_sys_grf_reg(iVar1,0x29,1);
      write_sys_grf_reg(iVar1,0x30,1);
      write_grf_reg(iVar1,0x2b,0xffffffffU >> (0x20 - param_1[iVar7 * 0x10 + 100] & 0xff) & 0xff);
      uVar9 = 0x24;
      uVar5 = 1;
    }
    else {
      if (iVar12 != 4) goto switchD_00010748_caseD_3;
      write_grf_reg(iVar1,0x29,1);
      write_grf_reg(iVar1,0x3a,0xffffffffU >> (0x20 - param_1[iVar7 * 0x10 + 100] & 0xff) & 0xff);
      uVar5 = 1;
      uVar9 = 0x35;
    }
  }
LAB_00010678:
  write_grf_reg(iVar1,uVar9,uVar5);
switchD_00010748_caseD_3:
  write_grf_reg(iVar10,0x1b,0);
  bVar14 = param_1[0x77] == 0;
  if (param_1[0x77] == 0) {
    bVar14 = (uint)param_1[0x76] < 0x5dd;
  }
  if (!bVar14) {
    if (*(int *)(iVar10 + 0x110) == 1) {
      write_csi2_dphy_reg(iVar10,8,0x80);
      if (0 < (int)param_1[iVar7 * 0x10 + 100]) {
        write_csi2_dphy_reg(iVar10,9,0x80);
      }
      if (1 < (int)param_1[iVar7 * 0x10 + 100]) {
        write_csi2_dphy_reg(iVar10,10,0x80);
      }
      if (2 < (int)param_1[iVar7 * 0x10 + 100]) {
        write_csi2_dphy_reg(iVar10,0xb,0x80);
      }
      iVar12 = param_1[iVar7 * 0x10 + 100];
      bVar15 = SBORROW4(iVar12,3);
      iVar1 = iVar12 + -3;
      bVar14 = iVar12 == 3;
    }
    else {
      __aeabi_idivmod(param_1[0x79],3);
      if (extraout_r1_00 == 1) {
        write_csi2_dphy_reg(iVar10,8,0x80);
        if (0 < (int)param_1[iVar7 * 0x10 + 100]) {
          write_csi2_dphy_reg(iVar10,9,0x80);
        }
        if (1 < (int)param_1[iVar7 * 0x10 + 100]) {
          write_csi2_dphy_reg(iVar10,10,0x80);
        }
      }
      __aeabi_idivmod(param_1[0x79],3);
      if (extraout_r1_01 != 2) goto LAB_00010840;
      write_csi2_dphy_reg(iVar10,0x11,0x80);
      if (0 < (int)param_1[iVar7 * 0x10 + 100]) {
        write_csi2_dphy_reg(iVar10,0xb,0x80);
      }
      iVar12 = param_1[iVar7 * 0x10 + 100];
      bVar15 = SBORROW4(iVar12,1);
      iVar1 = iVar12 + -1;
      bVar14 = iVar12 == 1;
    }
    if (!bVar14 && iVar1 < 0 == bVar15) {
      write_csi2_dphy_reg(iVar10,0xc,0x80);
    }
  }
LAB_00010840:
  for (iVar1 = 0; iVar1 < iVar6; iVar1 = iVar1 + 1) {
    bVar14 = param_1[0x77] == 0;
    if (param_1[0x77] == 0) {
      bVar14 = (uint)param_1[0x76] <= *(uint *)(iVar13 + iVar1 * 8);
    }
    if (bVar14) {
      uVar11 = *(undefined2 *)(iVar13 + iVar1 * 8 + 4);
      goto LAB_00010a6a;
    }
  }
  if (iVar1 == iVar6) {
    _dev_warn(*param_1,DAT_00010890,param_1[0x76],param_1[0x77],
              *(int *)(iVar13 + (iVar1 + -1) * 8) + 1);
    uVar11 = *(undefined2 *)(iVar13 + (iVar1 + -1) * 8 + 4);
  }
  else {
    uVar11 = 0;
  }
LAB_00010a6a:
  if (*(int *)(iVar10 + 0x110) == 1) {
    csi_mipidphy_wr_ths_settle(iVar10,uVar11,0);
    if (0 < (int)param_1[iVar7 * 0x10 + 100]) {
      csi_mipidphy_wr_ths_settle(iVar10,uVar11,2);
    }
    if (1 < (int)param_1[iVar7 * 0x10 + 100]) {
      csi_mipidphy_wr_ths_settle(iVar10,uVar11,3);
    }
    if (2 < (int)param_1[iVar7 * 0x10 + 100]) {
      csi_mipidphy_wr_ths_settle(iVar10,uVar11,4);
    }
    if ((int)param_1[iVar7 * 0x10 + 100] < 4) goto LAB_00010acc;
  }
  else {
    __aeabi_idivmod(param_1[0x79],3);
    if (extraout_r1_03 == 1) {
      csi_mipidphy_wr_ths_settle(iVar10,uVar11,0);
      csi_mipidphy_wr_ths_settle(iVar10,uVar11,2);
      csi_mipidphy_wr_ths_settle(iVar10,uVar11,3);
    }
    __aeabi_idivmod(param_1[0x79],3);
    if (extraout_r1_04 != 2) goto LAB_00010acc;
    csi_mipidphy_wr_ths_settle(iVar10,uVar11,1);
    csi_mipidphy_wr_ths_settle(iVar10,uVar11,4);
  }
  csi_mipidphy_wr_ths_settle(iVar10,uVar11,5);
LAB_00010acc:
  if (*(int *)(*(int *)(iVar10 + 0x18) + 0x28) == 3) {
    __aeabi_idivmod(param_1[0x79]);
    if (extraout_r1_02 < 2) {
      if (param_1[iVar7 * 0x10 + 0x56] == 5) {
        uVar4 = 2;
        uVar9 = 0x21;
      }
      else {
        write_csi2_dphy_reg(iVar10,0x21,4);
        iVar1 = get_lvds_data_width(param_1[iVar7 * 0x10 + 0x5a]);
        uVar9 = 0x22;
        uVar4 = iVar1 << 4 | 0xf;
      }
    }
    else if (param_1[iVar7 * 0x10 + 0x56] == 5) {
      uVar4 = 2;
      uVar9 = 0x23;
    }
    else {
      write_csi2_dphy_reg(iVar10,0x23,4);
      iVar1 = get_lvds_data_width(param_1[iVar7 * 0x10 + 0x5a]);
      uVar9 = 0x24;
      uVar4 = iVar1 << 4 | 0xf;
    }
    write_csi2_dphy_reg(iVar10,uVar9,uVar4);
    if (param_1[iVar7 * 0x10 + 0x56] == 5) {
      if (*(int *)(iVar10 + 0x110) == 1) {
        uVar9 = 4;
      }
      else {
        uVar9 = 0x14;
      }
      write_csi2_dphy_reg(iVar10,0x25,uVar9);
    }
  }
  piVar8 = (int *)(iVar10 + 0x100);
  HintPreloadData(piVar8);
  do {
    ExclusiveAccess(piVar8);
    bVar14 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar14);
  *piVar8 = *piVar8 + 1;
  mutex_unlock(iVar10 + 0xf4);
  return 0;
}



/* ===== rockchip_csi2_dphy_hw_init @ 00010bd8 size=8 ===== */

void rockchip_csi2_dphy_hw_init(void)

{
  __platform_driver_register(DAT_00010be4,DAT_00010be0);
  return;
}



/* ===== init_module @ 00010be8 size=8 ===== */

void init_module(void)

{
  __platform_driver_register(DAT_00010bf4,DAT_00010bf0);
  return;
}



/* ===== cleanup_module @ 00010bf8 size=6 ===== */

void cleanup_module(void)

{
  platform_driver_unregister(DAT_00010c00);
  return;
}



/* ===== <EXTERNAL>::regmap_write @ 00013000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regmap_write(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_kmalloc @ 00013004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_driver_unregister @ 00013008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_driver_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_ioremap @ 00013010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_ioremap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_bulk_disable @ 00013014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_bulk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::reset_control_assert @ 00013018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void reset_control_assert(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_bulk_unprepare @ 0001301c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_bulk_unprepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_entity_remote_pad @ 00013020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_entity_remote_pad(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_heavy_mb @ 00013024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_heavy_mb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_reset_control_array_get @ 00013028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_reset_control_array_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::syscon_regmap_lookup_by_phandle @ 0001302c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void syscon_regmap_lookup_by_phandle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pm_runtime_enable @ 00013030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pm_runtime_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep_range @ 00013034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usleep_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_info @ 00013038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_bulk_enable @ 0001303c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_bulk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_match_device @ 00013040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_match_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_err @ 00013044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_resource @ 0001304c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::reset_control_deassert @ 00013050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void reset_control_deassert(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_lock @ 00013054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 00013058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 0001305c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 00013060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_warn @ 00013064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_warn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__platform_driver_register @ 00013068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __platform_driver_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 0001306c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_ioremap_resource @ 00013070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_ioremap_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_clk_bulk_get_all @ 00013074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_clk_bulk_get_all(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_bulk_prepare @ 00013078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_bulk_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_err_probe @ 0001307c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_err_probe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_disable @ 00013084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_idivmod @ 00013088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_idivmod(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


