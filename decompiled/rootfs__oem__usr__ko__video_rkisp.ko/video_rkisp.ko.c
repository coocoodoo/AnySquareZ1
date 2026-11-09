// video_rkisp.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== default_sw_reg_flag @ 00010da8 size=150 ===== */

void default_sw_reg_flag(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar7;
  int aiStack_270 [34];
  int aiStack_1e8 [37];
  int aiStack_154 [38];
  int aiStack_bc [43];
  int *piVar6;
  
  piVar4 = aiStack_270;
  memcpy(aiStack_270,DAT_00010e40,0x88);
  memcpy(aiStack_1e8,DAT_00010e44,0x94);
  memcpy(aiStack_154,DAT_00010e48,0x98);
  memcpy(aiStack_bc,DAT_00010e4c,0xac);
  uVar3 = *(uint *)(param_1 + 0x97a4);
  if (uVar3 == 0x60) {
    piVar4 = aiStack_154;
    iVar2 = 0x26;
  }
  else if (uVar3 < 0x61) {
    if (uVar3 == 0x40) {
      iVar2 = 0x22;
    }
    else {
      if (uVar3 != 0x50) {
        return;
      }
      iVar2 = 0x25;
      piVar4 = aiStack_1e8;
    }
  }
  else {
    if ((uVar3 != 0x70) && (uVar3 != 0x80)) {
      return;
    }
    iVar2 = 0x2b;
    piVar4 = aiStack_bc;
  }
  piVar5 = piVar4;
  do {
    piVar6 = piVar5 + 1;
    iVar1 = *piVar5;
    iVar7 = *(int *)(param_1 + 0x90);
    *(undefined4 *)(iVar7 + iVar1 + 0x6000) = 0xffffffff;
    if (*(char *)(*(int *)(param_1 + 0x94) + 0x7be) != '\0') {
      *(undefined4 *)(iVar7 + iVar1 + 0x6000 + 0xc000) = 0xffffffff;
    }
    piVar5 = piVar6;
  } while (piVar4 + iVar2 != piVar6);
  return;
}



/* ===== irq_handler @ 00010e50 size=100 ===== */

undefined4 irq_handler(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *(int *)(param_2 + 0x40);
  uVar6 = *(undefined4 *)(iVar5 + (*(int *)(iVar5 + 0xc0) + 0x16) * 4);
  uVar1 = *(uint *)(*(int *)(iVar5 + 0x10) + 0x5c4);
  DataSynchronizationBarrier(0xf);
  if (*(uint *)(iVar5 + 0x54) < 0x40) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(*(int *)(iVar5 + 0x10) + 0x5d8);
    DataSynchronizationBarrier(0xf);
  }
  uVar4 = uVar3 | uVar1;
  if (uVar4 != 0) {
    rkisp_isp_isr(uVar1,uVar3,uVar6,uVar4,param_4);
  }
  iVar2 = *(int *)(*(int *)(iVar5 + 0x10) + 0x1c10);
  DataSynchronizationBarrier(0xf);
  if (iVar2 != 0) {
    rkisp_mipi_isr(iVar2,uVar6);
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 0x1500);
  DataSynchronizationBarrier(0xf);
  if (iVar5 != 0) {
    rkisp_mi_isr(iVar5,uVar6);
  }
  return 1;
}



/* ===== isp_config_clk @ 00010eb4 size=220 ===== */

void isp_config_clk(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x54);
  uVar3 = 0x197b;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  if (uVar1 == 0x40) {
    if (param_2 != 0) goto LAB_00010ece;
  }
  else {
    if ((0x5f < uVar1) && (param_2 != 0)) {
LAB_00010ece:
      uVar3 = uVar3 | 0x4000;
    }
    if ((0x6f < uVar1) && (uVar3 = uVar3 | 0x12001, uVar1 == 0x70)) {
      rv1106_sdmmc_get_lock();
    }
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(uint *)(*(int *)(param_1 + 0x10) + 0x10) = uVar3;
  if (*(int *)(param_1 + 0x54) == 0x70) {
    rv1106_sdmmc_put_lock();
  }
  if (*(char *)(param_1 + 0x7be) != '\0') {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(uint *)(*(int *)(param_1 + 0x14) + 0x10) = uVar3;
  }
  uVar1 = *(uint *)(param_1 + 0x54);
  if ((uVar1 & 0xffffffef) == 0x20) {
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x1fe000;
    }
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    iVar2 = *(int *)(param_1 + 0x10);
    goto LAB_00010f2c;
  }
  if (uVar1 < 0x40) {
    return;
  }
  uVar3 = DAT_00010f90;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  if (uVar1 < 0x60) {
    if (uVar1 == 0x40) goto LAB_00010f80;
  }
  else {
    uVar3 = 0;
    if ((uVar1 & 0xffffffdf) == 0x40) {
LAB_00010f80:
      if (param_2 == 0) goto LAB_00010f52;
      uVar3 = uVar3 | 8;
    }
    if (uVar1 == 0x70) {
      rv1106_sdmmc_get_lock();
    }
  }
LAB_00010f52:
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(uint *)(*(int *)(param_1 + 0x10) + 0xc) = uVar3;
  if (*(int *)(param_1 + 0x54) == 0x70) {
    rv1106_sdmmc_put_lock();
  }
  if (*(char *)(param_1 + 0x7be) == '\0') {
    return;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  iVar2 = *(int *)(param_1 + 0x14);
LAB_00010f2c:
  *(uint *)(iVar2 + 0xc) = uVar3;
  return;
}



/* ===== rkisp_hw_shutdown @ 00010f94 size=76 ===== */

void rkisp_hw_shutdown(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(undefined1 *)(iVar1 + 0x7bd) = 1;
  if ((*(int *)(param_1 + 0xf8) == 0) || ((*(byte *)(param_1 + 0xec) & 7) != 0)) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x14) = 0xffff;
    if (*(char *)(iVar1 + 0x7be) != '\0') {
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x14) = 0xffff;
    }
  }
  _dev_info(param_1 + 0x10,DAT_00010fe4,DAT_00010fe0);
  return;
}



/* ===== rkisp_hw_remove @ 00010fe8 size=48 ===== */

undefined4 rkisp_hw_remove(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (*(int *)(iVar1 + 0xf0) != 0) {
    dma_unmap_resource(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xec),
                       *(int *)(iVar1 + 0xf0),0,0,param_2);
  }
  *(undefined4 *)(iVar1 + 0xf0) = 0;
  __pm_runtime_disable(param_1 + 0x10,1);
  return 0;
}



/* ===== ktime_divns.constprop.3 @ 00011018 size=98 ===== */

ulonglong ktime_divns_constprop_3(uint param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = param_2;
  if ((int)param_2 < 0) {
    bVar5 = param_1 != 0;
    param_1 = -param_1;
    uVar3 = -param_2 - (uint)bVar5;
  }
  uVar2 = (uint)((ulonglong)DAT_00011080 * (ulonglong)param_1 >> 0x20);
  bVar5 = CARRY4((uint)((ulonglong)DAT_00011080 * (ulonglong)param_1),DAT_00011080);
  uVar1 = (ulonglong)DAT_00011084 * (ulonglong)param_1 +
          (ulonglong)
          CONCAT14(CARRY4(uVar2,DAT_00011084) || CARRY4(uVar2 + DAT_00011084,(uint)bVar5),
                   uVar2 + DAT_00011084 + (uint)bVar5);
  uVar2 = (uint)(uVar1 >> 0x20);
  uVar4 = (uint)((ulonglong)DAT_00011080 * (ulonglong)uVar3 + (uVar1 & 0xffffffff) >> 0x20);
  uVar1 = (ulonglong)DAT_00011084 * (ulonglong)uVar3 +
          (ulonglong)CONCAT14(CARRY4(uVar4,uVar2),uVar4 + uVar2) >> 9;
  if ((int)param_2 < 0) {
    uVar1 = CONCAT44(-(int)(uVar1 >> 0x20) - (uint)((int)uVar1 != 0),-(int)uVar1);
  }
  return uVar1;
}



/* ===== mipi_irq_hdl @ 00011088 size=268 ===== */

undefined4 mipi_irq_hdl(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  pcVar2 = DAT_00011194;
  iVar6 = *(int *)(param_2 + 0x40);
  piVar1 = (int *)(iVar6 + 0x10);
  if (*(char *)(iVar6 + 0x7be) != '\0') {
    piVar1 = (int *)(iVar6 + 0x14);
  }
  iVar4 = *piVar1;
  if (*(char *)(iVar6 + 0x7bb) == '\0') {
    iVar5 = *(int *)(iVar6 + (*(int *)(iVar6 + 200) + 0x16) * 4);
    if (*DAT_00011194 == '\0') {
      lVar7 = 0;
    }
    else {
      lVar7 = ktime_get();
    }
    uVar3 = *(uint *)(iVar6 + 0x54);
    if ((uVar3 & 0xffffffef) == 0x20) {
      DataSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      if ((*(int *)(iVar4 + 0x7020) != 0 || *(int *)(iVar4 + 0x7024) != 0) ||
          *(int *)(iVar4 + 0x7028) != 0) {
        rkisp_mipi_v13_isr();
      }
    }
    else if (uVar3 < 0x40) {
      DataSynchronizationBarrier(0xf);
      if (*(int *)(iVar4 + 0x1c10) != 0) {
        rkisp_mipi_isr(*(int *)(iVar4 + 0x1c10),iVar5,uVar3 & 0xffffffef,uVar3,param_1,param_2,
                       param_3);
      }
    }
    else {
      DataSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      if (((((*(int *)(iVar4 + 0x1c20) != 0 || *(int *)(iVar4 + 0x1c2c) != 0) ||
            *(int *)(iVar4 + 0x1c24) != 0) || *(int *)(iVar4 + 0x1c28) != 0) &&
          ((*(uint *)(iVar6 + 0x54) & 0xffffffef) != 0x40)) && (*(uint *)(iVar6 + 0x54) != 0x60)) {
        rkisp_mipi_v32_isr();
      }
    }
    if (*pcVar2 != '\0') {
      lVar8 = ktime_get();
      if (-1 < *DAT_00011198) {
        ktime_divns_constprop_3((int)(lVar8 - lVar7),(int)((ulonglong)(lVar8 - lVar7) >> 0x20));
        printk(DAT_000111a0,iVar5 + 0xa8,DAT_0001119c);
      }
    }
  }
  return 1;
}



/* ===== rkisp_runtime_suspend @ 000111a4 size=100 ===== */

void rkisp_runtime_suspend(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(iVar1 + 0xbc) = 0;
  *(undefined1 *)(iVar1 + 0x7bf) = 0;
  *(undefined1 *)(iVar1 + 0x7c1) = 0;
  *(undefined1 *)(iVar1 + 0x7b9) = 1;
  if (((*(uint *)(iVar1 + 0x54) & 0xffffffef) == 0x20) && (-1 < *(int *)(iVar1 + 0x50))) {
    disable_irq();
  }
  isp_config_clk(iVar1,0);
  iVar2 = *(int *)(iVar1 + 0x40);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    uVar3 = *(uint *)(iVar1 + 0x18 + iVar2 * 4);
    if (uVar3 < 0xfffff001) {
      clk_disable(uVar3);
      clk_unprepare(uVar3);
    }
  }
  pinctrl_pm_select_sleep_state(param_1);
  return;
}



/* ===== isp_irq_hdl @ 00011208 size=148 ===== */

undefined4 isp_irq_hdl(undefined4 param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  pcVar2 = DAT_0001129c;
  iVar4 = *(int *)(param_2 + 0x40);
  piVar1 = (int *)(iVar4 + 0x10);
  if (*(char *)(iVar4 + 0x7be) != '\0') {
    piVar1 = (int *)(iVar4 + 0x14);
  }
  iVar7 = *piVar1;
  if (*(char *)(iVar4 + 0x7bb) == '\0') {
    iVar6 = *(int *)(iVar4 + (*(int *)(iVar4 + 0xc0) + 0x16) * 4);
    if (*DAT_0001129c == '\0') {
      lVar8 = 0;
    }
    else {
      lVar8 = ktime_get();
    }
    uVar5 = *(uint *)(iVar7 + 0x5c4);
    DataSynchronizationBarrier(0xf);
    if (*(uint *)(iVar4 + 0x54) < 0x40) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(iVar7 + 0x5d8);
      DataSynchronizationBarrier(0xf);
    }
    if ((uVar3 | uVar5) != 0) {
      rkisp_isp_isr(uVar5,uVar3,iVar6,uVar3 | uVar5,param_1,param_2);
    }
    if (*pcVar2 != '\0') {
      lVar9 = ktime_get();
      if (-1 < *DAT_000112a0) {
        uVar10 = ktime_divns_constprop_3
                           ((int)(lVar9 - lVar8),(int)((ulonglong)(lVar9 - lVar8) >> 0x20));
        printk(DAT_000112a8,iVar6 + 0xa8,DAT_000112a4,uVar5,uVar10);
      }
    }
  }
  return 1;
}



/* ===== mi_irq_hdl @ 000112ac size=160 ===== */

undefined4 mi_irq_hdl(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  uint extraout_r2;
  undefined4 extraout_r3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  
  pcVar2 = DAT_0001134c;
  iVar5 = *(int *)(param_2 + 0x40);
  uVar3 = (uint)*(byte *)(iVar5 + 0x7be);
  piVar1 = (int *)(iVar5 + 0x10);
  if (uVar3 != 0) {
    piVar1 = (int *)(iVar5 + 0x14);
  }
  iVar6 = *piVar1;
  if (*(char *)(iVar5 + 0x7bb) == '\0') {
    iVar8 = *(int *)(iVar5 + (*(int *)(iVar5 + 0xc0) + 0x16) * 4);
    if (*DAT_0001134c == '\0') {
      lVar9 = 0;
      uVar4 = 0;
    }
    else {
      lVar9 = ktime_get();
      uVar3 = extraout_r2;
      uVar4 = extraout_r3;
    }
    uVar7 = *(uint *)(iVar6 + 0x1500);
    DataSynchronizationBarrier(0xf);
    if (uVar7 != 0) {
      if ((uVar7 & 0xfff0ffff) != 0) {
        rkisp_mi_isr(uVar7 & 0xfff0ffff,iVar8,uVar3,uVar4,param_1,param_2,param_3);
      }
      if ((uVar7 & 0xf0000) != 0) {
        iVar8 = *(int *)(iVar5 + (*(int *)(iVar5 + 200) + 0x16) * 4);
        rkisp_mi_isr(uVar7 & 0xf0000,iVar8);
      }
    }
    if (*pcVar2 != '\0') {
      lVar10 = ktime_get();
      if (-1 < *DAT_00011350) {
        uVar11 = ktime_divns_constprop_3
                           ((int)(lVar10 - lVar9),(int)((ulonglong)(lVar10 - lVar9) >> 0x20));
        printk(DAT_00011358,iVar8 + 0xa8,DAT_00011354,uVar7,uVar11);
      }
    }
  }
  return 1;
}



/* ===== rkisp_register_irq @ 0001135c size=254 ===== */

int rkisp_register_irq(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar6 = *param_1;
  iVar7 = param_1[1];
  iVar5 = iVar7 + 0x10;
  iVar1 = platform_get_resource_byname(iVar7,0x400,**(undefined4 **)(iVar6 + 0x14));
  if (iVar1 == 0) {
    iVar1 = platform_get_irq(iVar7,0);
    if (iVar1 < 0) {
      _dev_err(iVar5,DAT_0001145c);
      return iVar1;
    }
    uVar4 = dev_driver_string(iVar5);
    iVar1 = devm_request_threaded_irq(iVar5,iVar1,DAT_0001146c,0,0x80,uVar4,iVar5);
    uVar4 = DAT_00011470;
    iVar2 = iVar1;
    if (iVar1 < 0) {
LAB_000113b2:
      _dev_err(iVar5,uVar4,iVar1);
      return iVar2;
    }
  }
  else {
    for (iVar1 = 0; iVar1 < *(int *)(iVar6 + 0x18); iVar1 = iVar1 + 1) {
      iVar8 = iVar1 * 8;
      iVar2 = platform_get_irq_byname(iVar7,*(undefined4 *)(*(int *)(iVar6 + 0x14) + iVar1 * 8));
      if (iVar2 < 0) {
        iVar1 = *(int *)(*(int *)(iVar6 + 0x14) + iVar8);
        uVar4 = DAT_00011460;
        goto LAB_000113b2;
      }
      iVar3 = strcmp(*(char **)(*(int *)(iVar6 + 0x14) + iVar1 * 8),DAT_00011464);
      if (iVar3 == 0) {
        param_1[0x14] = iVar2;
      }
      uVar9 = *(undefined4 *)(*(int *)(iVar6 + 0x14) + iVar8 + 4);
      uVar4 = dev_driver_string(iVar5);
      iVar3 = devm_request_threaded_irq(iVar5,iVar2,uVar9,0,0x80,uVar4,iVar5);
      if (iVar3 < 0) {
        _dev_err(iVar5,DAT_00011468,*(undefined4 *)(*(int *)(iVar6 + 0x14) + iVar8),iVar3);
        return iVar3;
      }
      if ((param_1[0x14] == iVar2) && ((param_1[0x15] & 0xffffffefU) == 0x20)) {
        disable_irq(iVar2);
      }
    }
  }
  return 0;
}



/* ===== rkisp_hw_probe @ 00011474 size=824 ===== */

uint rkisp_hw_probe(int param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  uint *puVar14;
  int local_48;
  int iStack_44;
  
  uVar13 = *(undefined4 *)(param_1 + 0x174);
  uVar4 = of_match_node(DAT_00011790,uVar13);
  if (0xfffff000 < uVar4) {
    return uVar4;
  }
  iVar9 = param_1 + 0x10;
  puVar5 = (undefined4 *)devm_kmalloc(iVar9,0x7c8,0xdc0);
  uVar8 = DAT_00011794;
  if (puVar5 == (undefined4 *)0x0) {
    return 0xfffffff4;
  }
  piVar11 = *(int **)(uVar4 + 0xc0);
  iVar6 = piVar11[7];
  *(undefined4 **)(param_1 + 0x50) = puVar5;
  puVar5[2] = iVar9;
  *(char *)((int)puVar5 + 0x7be) = (char)iVar6;
  *(undefined1 *)((int)puVar5 + 0x7bb) = 0;
  _dev_info(iVar9,uVar8,0);
  memset(puVar5 + 0x33,0,0x10);
  iVar6 = of_property_read_variable_u32_array(uVar13,DAT_00011798,puVar5 + 0x33,3,0);
  if ((-1 < iVar6) && (*(undefined1 *)(puVar5 + 0x36) = 1, *(char *)((int)puVar5 + 0x7be) != '\0'))
  {
    puVar5[0x33] = ((uint)puVar5[0x33] >> 1) + 0x80;
  }
  _dev_info(iVar9,DAT_0001179c,puVar5[0x33],puVar5[0x34],puVar5[0x35]);
  uVar4 = syscon_regmap_lookup_by_phandle(uVar13,DAT_000117a0);
  puVar5[3] = uVar4;
  if (0xfffff000 < uVar4) {
    _dev_warn(iVar9,DAT_000117a4);
  }
  piVar7 = (int *)platform_get_resource(param_1,0x200,0);
  uVar8 = DAT_000117a8;
  if (piVar7 == (int *)0x0) {
LAB_00011546:
    _dev_err(iVar9,uVar8);
    return 0xffffffea;
  }
  iVar6 = devm_ioremap_resource(iVar9,piVar7);
  puVar5[4] = iVar6;
  if (iVar6 == -0x10) {
    uVar8 = devm_ioremap(iVar9,*piVar7,(piVar7[1] + 1) - *piVar7);
    puVar5[4] = uVar8;
  }
  if (0xfffff000 < (uint)puVar5[4]) {
    _dev_err(iVar9,DAT_000117ac);
    return puVar5[4];
  }
  puVar5[5] = 0;
  if ((char)piVar11[7] != '\0') {
    piVar7 = (int *)platform_get_resource(param_1,0x200,1);
    uVar8 = DAT_000117b0;
    if (piVar7 == (int *)0x0) goto LAB_00011546;
    iVar6 = devm_ioremap_resource(iVar9,piVar7);
    puVar5[5] = iVar6;
    if (iVar6 == -0x10) {
      uVar8 = devm_ioremap(iVar9,*piVar7,(piVar7[1] + 1) - *piVar7);
      puVar5[5] = uVar8;
    }
    if (0xfffff000 < (uint)puVar5[5]) {
      _dev_err(iVar9,DAT_000117b4);
      return puVar5[5];
    }
  }
  uVar3 = device_property_present(iVar9,DAT_000117b8);
  puVar2 = DAT_000117bc;
  *puVar5 = piVar11;
  puVar5[1] = param_1;
  *puVar2 = uVar3;
  puVar5[0x14] = 0xffffffff;
  if (*(char *)((int)puVar5 + 0x7bb) == '\0') {
    rkisp_register_irq(puVar5);
  }
  puVar14 = puVar5 + 6;
  for (iVar6 = 0; iVar6 < piVar11[1]; iVar6 = iVar6 + 1) {
    uVar4 = devm_clk_get(iVar9,*(undefined4 *)(*piVar11 + iVar6 * 4));
    if (0xfffff000 < uVar4) {
      _dev_err(iVar9,DAT_000117c0,*(undefined4 *)(*piVar11 + iVar6 * 4));
      return uVar4;
    }
    *puVar14 = uVar4;
    puVar14 = puVar14 + 1;
  }
  puVar5[0x10] = piVar11[1];
  puVar5[0x11] = piVar11[3];
  puVar5[0x12] = piVar11[4];
  uVar4 = devm_reset_control_array_get(iVar9,0);
  uVar8 = DAT_000117c4;
  if (uVar4 < 0xfffff001) {
    puVar5[0x13] = uVar4;
  }
  else {
    puVar5[0x13] = 0;
  }
  iVar6 = of_property_read_u64(uVar13,uVar8,puVar5 + 0x1ea);
  iVar12 = puVar5[2];
  puVar5[0x3c] = 0;
  uVar13 = DAT_000117c8;
  *(bool *)(puVar5 + 0x1ed) = iVar6 == 0;
  iVar6 = of_parse_phandle(*(undefined4 *)(iVar12 + 0x164),uVar13,0);
  if (iVar6 == 0) {
    _dev_warn(iVar12,DAT_000117cc);
  }
  else {
    iVar6 = of_address_to_resource(iVar6,0,&local_48);
    if (iVar6 == 0) {
      iVar10 = (iStack_44 + 1) - local_48;
      iVar6 = dma_map_resource(iVar12,local_48,iVar10,0,0);
      puVar5[0x3b] = iVar6;
      if (iVar6 != -1) {
        puVar5[0x3c] = iVar10;
        _dev_info(iVar12,DAT_000117ec,iVar10);
      }
    }
    else {
      _dev_err(iVar12,DAT_000117e8);
    }
  }
  puVar5[0x30] = 0;
  *(undefined1 *)((int)puVar5 + 0x7bf) = 0;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  puVar5[0x31] = 0;
  puVar5[0x32] = 0;
  uVar8 = DAT_000117d4;
  uVar13 = DAT_000117d0;
  puVar5[0x15] = piVar11[2];
  *(char *)((int)puVar5 + 0x7be) = (char)piVar11[7];
  __mutex_init(puVar5 + 0x37,uVar8,uVar13);
  puVar5[0x3a] = 0;
  puVar5[0x1ec] = 0;
  puVar5[0x1d0] = puVar5 + 0x1d0;
  puVar5[0x1d1] = puVar5 + 0x1d0;
  *(undefined1 *)((int)puVar5 + 0x7ba) = 0;
  puVar5[0x1d2] = puVar5 + 0x1d2;
  puVar5[0x1d3] = puVar5 + 0x1d2;
  *(undefined2 *)(puVar5 + 0x1ef) = 0;
  *(undefined2 *)(puVar5 + 0x1ee) = 0x101;
  uVar13 = DAT_000117d8;
  *(undefined1 *)((int)puVar5 + 0x7b5) = 1;
  *(undefined1 *)((int)puVar5 + 0x7b6) = 1;
  iVar6 = of_parse_phandle(*(undefined4 *)(param_1 + 0x174),uVar13,0);
  uVar13 = DAT_000117dc;
  if (iVar6 != 0) {
    iVar6 = of_device_is_available();
    uVar3 = (undefined1)iVar6;
    uVar13 = DAT_0001180c;
    if (iVar6 != 0) goto LAB_00011710;
  }
  uVar3 = 0;
  _dev_info(iVar9,uVar13);
LAB_00011710:
  *(undefined1 *)((int)puVar5 + 0x7b7) = uVar3;
  iVar6 = of_reserved_mem_device_init_by_idx(iVar9,*(undefined4 *)(param_1 + 0x174),0);
  if (iVar6 == 0) {
    bVar1 = true;
  }
  else if (*(char *)((int)puVar5 + 0x7b7) == '\0') {
    _dev_info(iVar9,DAT_000117e0);
    bVar1 = false;
  }
  else {
    bVar1 = false;
  }
  if ((*(char *)((int)puVar5 + 0x7b7) != '\0') && (!bVar1)) {
    *(undefined1 *)((int)puVar5 + 0x7b5) = 0;
  }
  puVar5[0x1de] = DAT_000117e4;
  pm_runtime_enable(iVar9);
  return 0;
}



/* ===== rkisp_soft_reset @ 00011810 size=446 ===== */

void rkisp_soft_reset(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = DAT_000119d0;
  iVar3 = *(int *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(iVar3 + 0x10);
  DataSynchronizationBarrier(0xf);
  uVar5 = *(undefined4 *)(iVar3 + 0xc);
  DataSynchronizationBarrier(0xf);
  if (*(char *)(param_1 + 0x7be) != '\0') {
    unaff_r9 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10);
    DataSynchronizationBarrier(0xf);
    unaff_r8 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc);
    DataSynchronizationBarrier(0xf);
  }
  if (param_2 != 0) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar3 + 0x14) = 0xffff;
    if (*(char *)(param_1 + 0x7be) != '\0') {
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14) = 0xffff;
    }
    (**(code **)(iVar1 + 4))(DAT_000119d4);
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    reset_control_assert();
    (**(code **)(iVar1 + 4))(DAT_000119d4);
    reset_control_deassert(*(undefined4 *)(param_1 + 0x4c));
    (**(code **)(iVar1 + 4))(DAT_000119d4);
  }
  if (*(int *)(param_1 + 0x54) == 0x40) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar3 + 0x400) = 6;
  }
  if (*(int *)(param_1 + 0x54) == 0x70) {
    rv1106_sdmmc_get_lock();
    uVar4 = 0x3fffffff;
  }
  else {
    uVar4 = 0xffff;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar3 + 0x14) = uVar4;
  if (*(int *)(param_1 + 0x54) == 0x70) {
    rv1106_sdmmc_put_lock();
  }
  if (*(char *)(param_1 + 0x7be) != '\0') {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14) = 0xffff;
  }
  (**(code **)(iVar1 + 4))(DAT_000119d4);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar3 + 0x10) = uVar6;
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar3 + 0xc) = uVar5;
  if (*(char *)(param_1 + 0x7be) != '\0') {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x10) = unaff_r9;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = unaff_r8;
  }
  uVar2 = *(uint *)(param_1 + 0x54);
  if ((uVar2 & 0xffffffef) == 0x20) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x7000) = 0;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x702c) = 0;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x7030) = 0;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x7034) = 0;
  }
  else if (uVar2 == 0x70) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16a0) = 0x80000000;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x16f0) = 0x80000000;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x306c) = 0;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1814) = 0x37;
  }
  else if (uVar2 == 0x80) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x306c) = 0;
  }
  return;
}



/* ===== rkisp_hw_enum_isp_size @ 000119d8 size=202 ===== */

void rkisp_hw_enum_isp_size(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  
  memset((void *)(param_1 + 0x68),0,0x50);
  cVar1 = *(char *)(param_1 + 0xd8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  iVar7 = *(int *)(param_1 + 0xb8);
  *(undefined1 *)(param_1 + 0x7b9) = 1;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x7bf) = 0;
  *(undefined1 *)(param_1 + 0x7c1) = 0;
  piVar6 = (int *)(param_1 + 0x58);
  for (iVar2 = param_1; iVar2 != iVar7 * 0x14 + param_1; iVar2 = iVar2 + 0x14) {
    iVar3 = *piVar6;
    if ((iVar3 != 0) && (*(char *)(iVar3 + 0xe035) != '\0')) {
      iVar4 = *(int *)(param_1 + 0xbc);
      *(int *)(param_1 + 0xbc) = iVar4 + 1;
      if (iVar4 != 0) {
        *(undefined1 *)(param_1 + 0x7b9) = 0;
      }
      uVar5 = *(uint *)(iVar3 + 0xe3c);
      uVar8 = *(uint *)(iVar3 + 0xe40);
      if (*(char *)(param_1 + 0x7be) != '\0') {
        uVar5 = (uVar5 >> 1) + 0x80;
      }
      *(uint *)(iVar2 + 0x68) = uVar5;
      *(uint *)(iVar2 + 0x6c) = uVar8;
      *(uint *)(iVar2 + 0x70) = uVar8 * uVar5;
      if (cVar1 == '\0') {
        if (*(uint *)(param_1 + 0xcc) < uVar5) {
          *(uint *)(param_1 + 0xcc) = uVar5;
        }
        if (*(uint *)(param_1 + 0xd0) < uVar8) {
          *(uint *)(param_1 + 0xd0) = uVar8;
        }
      }
    }
    piVar6 = piVar6 + 1;
  }
  piVar6 = (int *)(param_1 + 0x58);
  for (uVar8 = 0; uVar8 < *(uint *)(param_1 + 0xb8); uVar8 = uVar8 + 1) {
    iVar2 = *piVar6;
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0xe035) != '\0')) {
      rkisp_params_check_bigmode(iVar2 + 0x6690);
    }
    piVar6 = piVar6 + 1;
  }
  return;
}



/* ===== rkisp_runtime_resume @ 00011aa2 size=272 ===== */

int rkisp_runtime_resume(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  void *__s;
  uint *puVar8;
  
  iVar3 = *(int *)(param_1 + 0x40);
  uVar5 = *(undefined4 *)(iVar3 + 0x10);
  if (*(char *)(iVar3 + 0x7be) == '\0') {
    iVar6 = 1;
  }
  else {
    iVar6 = 2;
  }
  iVar1 = pinctrl_pm_select_default_state();
  if (-1 < iVar1) {
    iVar1 = 0;
    puVar8 = (uint *)(iVar3 + 0x18);
LAB_00011ac8:
    if (iVar1 < *(int *)(iVar3 + 0x40)) {
      uVar7 = *puVar8;
      if (0xfffff000 < uVar7) goto LAB_00011b6e;
      iVar2 = clk_prepare(uVar7);
      if (iVar2 == 0) {
        iVar2 = clk_enable(uVar7);
        if (iVar2 == 0) goto LAB_00011b6e;
        clk_unprepare(uVar7);
      }
      if (-1 < iVar2) goto LAB_00011b6e;
      for (iVar1 = iVar3 + iVar1 * 4; iVar1 != iVar3; iVar1 = iVar1 + -4) {
        uVar7 = *(uint *)(iVar1 + 0x14);
        if (uVar7 < 0xfffff001) {
          clk_disable(uVar7);
          clk_unprepare(uVar7);
        }
      }
    }
    else {
      iVar1 = **(int **)(iVar3 + 0x44) * DAT_00011bb4;
      rkisp_set_clk_rate(*(undefined4 *)(iVar3 + 0x18),iVar1);
      if (*(char *)(iVar3 + 0x7be) != '\0') {
        rkisp_set_clk_rate(*(undefined4 *)(iVar3 + 0x2c),iVar1);
      }
      rkisp_soft_reset(iVar3,0);
      isp_config_clk(iVar3,1);
    }
    piVar4 = (int *)(iVar3 + 0x58);
    for (iVar1 = 0; iVar1 < *(int *)(iVar3 + 0xb8); iVar1 = iVar1 + 1) {
      if (*piVar4 != 0) {
        __s = *(void **)(*piVar4 + 0x90);
        memset(__s,0,iVar6 * 0xc000);
        mmiocpy(__s,uVar5,0x6000);
        if (*(char *)(iVar3 + 0x7be) != '\0') {
          uVar5 = *(undefined4 *)(iVar3 + 0x14);
          mmiocpy((int)__s + 0xc000,uVar5,0x6000);
        }
        default_sw_reg_flag(*piVar4);
      }
      piVar4 = piVar4 + 1;
    }
    rkisp_hw_enum_isp_size(iVar3);
    iVar1 = 0;
    *(undefined1 *)(iVar3 + 0x7a5) = *DAT_00011bb8;
  }
  return iVar1;
LAB_00011b6e:
  iVar1 = iVar1 + 1;
  puVar8 = puVar8 + 1;
  goto LAB_00011ac8;
}



/* ===== rkisp_fwnode_parse @ 00011bc0 size=20 ===== */

undefined4 rkisp_fwnode_parse(undefined4 param_1,int param_2,int param_3)

{
  if (*(int *)(param_2 + 0xc) - 1U < 2) {
    *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(param_2 + 0xc);
  }
  return 0;
}



/* ===== subdev_notifier_unbind @ 00011bd4 size=80 ===== */

void subdev_notifier_unbind(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  iVar2 = param_1;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x944); iVar1 = iVar1 + 1) {
    if (*(int *)(iVar2 + 0x34) == param_2) {
      if ((*(int *)(param_1 + 0x980) != 0) &&
         (pcVar3 = *(code **)(*(int *)(param_1 + 0x980) + 4), pcVar3 != (code *)0x0)) {
        (*pcVar3)(param_1 + 0x948,*(undefined4 *)(param_1 + 0x974),*(undefined4 *)(param_2 + 0x2c),0
                  ,param_4);
      }
      *(undefined4 *)(iVar2 + 0x34) = 0;
    }
    iVar2 = iVar2 + 0x244;
  }
  return;
}



/* ===== rkisp_clr_unready_dev_param_set @ 00011c24 size=40 ===== */

undefined4 rkisp_clr_unready_dev_param_set(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = DAT_00011c4c;
  mutex_lock(DAT_00011c4c);
  for (puVar2 = *(undefined4 **)(iVar1 + 0xc); puVar2 != (undefined4 *)(iVar1 + 0xc);
      puVar2 = (undefined4 *)*puVar2) {
    v4l2_async_notifier_clr_unready_dev(puVar2 + 0xba);
  }
  mutex_unlock(DAT_00011c4c);
  return 0;
}



/* ===== _set_pipeline_default_fmt @ 00011c50 size=854 ===== */

undefined4 _set_pipeline_default_fmt(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 local_238 [46];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  uint local_168;
  uint uStack_164;
  undefined4 local_140;
  undefined4 local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint local_e8;
  uint uStack_e4;
  undefined4 local_e0;
  undefined1 auStack_dc [184];
  
  iVar9 = param_1 + 0xc30;
  memset(&local_180,0,0x40);
  memset(&local_140,0,0x58);
  if (*(int *)(param_1 + 0x318) == 0) {
    local_138 = *(int *)(param_1 + 0xddc);
    local_134 = *(int *)(param_1 + 0xde0);
    local_130 = *(uint *)(param_1 + 0xde4);
    uStack_12c = *(undefined4 *)(param_1 + 0xde8);
    local_128 = *(undefined4 *)(param_1 + 0xdec);
    uStack_124 = *(undefined4 *)(param_1 + 0xdf0);
    uStack_120 = *(undefined4 *)(param_1 + 0xdf4);
    uStack_11c = *(undefined4 *)(param_1 + 0xdf8);
    local_118 = *(undefined4 *)(param_1 + 0xdfc);
    uStack_114 = *(undefined4 *)(param_1 + 0xe00);
    uStack_110 = *(undefined4 *)(param_1 + 0xe04);
    uStack_10c = *(undefined4 *)(param_1 + 0xe08);
  }
  else {
    memcpy(&local_140,(void *)(*(int *)(param_1 + 0x318) + 0x3c),0x58);
    if ((((param_2 == 0) && (local_130 == *(uint *)(param_1 + 0xde4))) &&
        (local_138 == *(int *)(param_1 + 0xddc))) && (local_134 == *(int *)(param_1 + 0xde0))) {
      return 0;
    }
  }
  uVar10 = local_130;
  local_140 = 1;
  local_13c = 0;
  if (((iVar9 != 0) && (iVar2 = *(int *)(*(int *)(param_1 + 0xc98) + 0x1c), iVar2 != 0)) &&
     (pcVar3 = *(code **)(iVar2 + 0x14), pcVar3 != (code *)0x0)) {
    if ((*(int *)(DAT_00011fa8 + 0x1c) == 0) ||
       (pcVar4 = *(code **)(*(int *)(DAT_00011fa8 + 0x1c) + 0x14), pcVar4 == (code *)0x0)) {
      (*pcVar3)(iVar9,0,&local_140);
    }
    else {
      (*pcVar4)(iVar9,0,&local_140);
    }
  }
  rkisp_align_sensor_resolution(param_1,&local_170,0);
  local_178 = 0;
  local_180 = 1;
  local_17c = 0;
  if (((iVar9 != 0) && (iVar2 = *(int *)(*(int *)(param_1 + 0xc98) + 0x1c), iVar2 != 0)) &&
     (pcVar3 = *(code **)(iVar2 + 0x1c), pcVar3 != (code *)0x0)) {
    if ((*(int *)(DAT_00011fa8 + 0x1c) == 0) ||
       (pcVar4 = *(code **)(*(int *)(DAT_00011fa8 + 0x1c) + 0x1c), pcVar4 == (code *)0x0)) {
      (*pcVar3)(iVar9,0,&local_180);
    }
    else {
      (*pcVar4)(iVar9,0,&local_180);
    }
  }
  local_170 = 0;
  uStack_16c = 0;
  local_138 = local_168;
  local_134 = uStack_164;
  if ((uVar10 & 0xf000) == 0x3000) {
    local_130 = 0x2008;
  }
  local_13c = 2;
  local_17c = 2;
  if (iVar9 != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc98) + 0x1c);
    if ((iVar2 != 0) && (pcVar3 = *(code **)(iVar2 + 0x14), pcVar3 != (code *)0x0)) {
      if ((*(int *)(DAT_00011fa8 + 0x1c) == 0) ||
         (pcVar4 = *(code **)(*(int *)(DAT_00011fa8 + 0x1c) + 0x14), pcVar4 == (code *)0x0)) {
        (*pcVar3)(iVar9,0,&local_140);
      }
      else {
        (*pcVar4)(iVar9,0,&local_140);
      }
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0xc98) + 0x1c);
    if ((iVar2 != 0) && (pcVar3 = *(code **)(iVar2 + 0x1c), pcVar3 != (code *)0x0)) {
      if ((*(int *)(DAT_00011fa8 + 0x1c) == 0) ||
         (pcVar4 = *(code **)(*(int *)(DAT_00011fa8 + 0x1c) + 0x1c), pcVar4 == (code *)0x0)) {
        (*pcVar3)(iVar9,0,&local_180);
      }
      else {
        (*pcVar4)(iVar9,0,&local_180);
      }
    }
  }
  uVar1 = DAT_00011fac;
  local_238[0] = DAT_00011fac;
  rkisp_set_stream_def_fmt(param_1,0,local_168,uStack_164);
  uVar6 = local_168;
  uVar8 = uStack_164;
  if (*(int *)(param_1 + 0x97a4) != 1) {
    local_238[0] = uVar1;
    rkisp_set_stream_def_fmt(param_1,1,local_168,uStack_164);
    if ((((*(uint *)(param_1 + 0x97a4) & 0xffffffef) == 0x40) &&
        (*(int *)(param_1 + 0x99ec) == 0x10)) && (iVar9 = *(int *)(param_1 + 0x318), iVar9 != 0)) {
      uVar5 = *(undefined4 *)(iVar9 + 0x9c);
      uVar7 = *(undefined4 *)(iVar9 + 0xa0);
      local_238[0] = rkisp_mbus_pixelcode_to_v4l2(*(undefined4 *)(iVar9 + 0xa4));
      rkisp_set_stream_def_fmt(param_1,2,uVar5,uVar7);
      iVar9 = *(int *)(param_1 + 0x318);
      uVar5 = *(undefined4 *)(iVar9 + 0x14c);
      uVar7 = *(undefined4 *)(iVar9 + 0x150);
      local_238[0] = rkisp_mbus_pixelcode_to_v4l2(*(undefined4 *)(iVar9 + 0x154));
      rkisp_set_stream_def_fmt(param_1,4,uVar5,uVar7);
      iVar9 = *(int *)(param_1 + 0x318);
      uVar10 = *(uint *)(iVar9 + 0x1ac);
      uVar6 = *(uint *)(iVar9 + 0x1a4);
      uVar8 = *(uint *)(iVar9 + 0x1a8);
      local_238[0] = rkisp_mbus_pixelcode_to_v4l2(uVar10);
      rkisp_set_stream_def_fmt(param_1,5,uVar6,uVar8);
    }
  }
  if (((*(int *)(param_1 + 0x97a4) == 0x40) && (*(int *)(param_1 + 0x99ec) == 0x10)) &&
     (iVar9 = *(int *)(param_1 + 0x318), iVar9 != 0)) {
    uVar10 = *(uint *)(iVar9 + 0xfc);
    uVar6 = *(uint *)(iVar9 + 0xf4);
    uVar8 = *(uint *)(iVar9 + 0xf8);
    local_238[0] = rkisp_mbus_pixelcode_to_v4l2(uVar10);
    rkisp_set_stream_def_fmt(param_1,3,uVar6,uVar8);
  }
  if (*(int *)(param_1 + 0x97a4) == 0x60) {
    memset(auStack_dc,0,0xb4);
    local_e8 = uVar6;
    uStack_e4 = uVar8;
    local_e0 = rkisp_mbus_pixelcode_to_v4l2(uVar10);
    iVar9 = param_1 + 0x7848;
    do {
      memcpy(local_238,auStack_dc,0xb4);
      iVar2 = iVar9 + 0x6c0;
      rkisp_dmarx_set_fmt(iVar9,local_e8,uStack_e4,local_e0);
      iVar9 = iVar2;
    } while (param_1 + 0x8c88 != iVar2);
    local_238[0] = DAT_00011fb0;
    rkisp_set_stream_def_fmt(param_1,6,uVar6,uVar8);
  }
  if ((*(int *)(param_1 + 0x97a4) == 0x70) || (*(int *)(param_1 + 0x97a4) == 0x80)) {
    memset(auStack_dc,0,0xb4);
    local_e8 = uVar6;
    uStack_e4 = uVar8;
    local_e0 = rkisp_mbus_pixelcode_to_v4l2(uVar10);
    memcpy(local_238,auStack_dc,0xb4);
    rkisp_dmarx_set_fmt(param_1 + 0x7848,local_e8,uStack_e4,local_e0);
    memcpy(local_238,auStack_dc,0xb4);
    rkisp_dmarx_set_fmt(param_1 + 0x85c8,local_e8,uStack_e4,local_e0);
    if (*(int *)(param_1 + 0x97a4) == 0x70) {
      local_238[0] = uVar1;
      rkisp_set_stream_def_fmt(param_1,7,uVar6,uVar8);
      local_238[0] = uVar1;
      rkisp_set_stream_def_fmt(param_1,8,uVar6 >> 2,uVar8 >> 2);
      local_238[0] = uVar1;
      rkisp_set_stream_def_fmt(param_1,9,uVar6 >> 2,uVar8 >> 2);
    }
  }
  return 0;
}



/* ===== rkisp_runtime_resume @ 00011fb4 size=100 ===== */

uint rkisp_runtime_resume(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x40);
  if (((*(uint *)(iVar4 + 0x99ec) & 0x1b0) != 0) &&
     (iVar2 = rkisp_update_sensor_info(iVar4), -1 < iVar2)) {
    _set_pipeline_default_fmt(iVar4,0);
  }
  puVar1 = DAT_00012018;
  *(undefined4 *)(iVar4 + 0x5fe8) = *DAT_00012018;
  *(undefined4 *)(iVar4 + 0x5ff0) = puVar1[1];
  *(undefined1 *)(iVar4 + 0xe037) = *(undefined1 *)(puVar1 + 2);
  mutex_lock(*(int *)(iVar4 + 0x94) + 0xdc);
  uVar3 = __pm_runtime_resume(*(undefined4 *)(*(int *)(iVar4 + 0x94) + 8),4);
  mutex_unlock(*(int *)(iVar4 + 0x94) + 0xdc);
  return uVar3 & (int)uVar3 >> 0x1f;
}



/* ===== rkisp_runtime_suspend @ 0001201c size=44 ===== */

uint rkisp_runtime_suspend(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 extraout_r2;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  mutex_lock(*(int *)(iVar2 + 0x94) + 0xdc);
  uVar1 = __pm_runtime_idle(*(undefined4 *)(*(int *)(iVar2 + 0x94) + 8),4,extraout_r2,
                            *(int *)(iVar2 + 0x94),param_4);
  mutex_unlock(*(int *)(iVar2 + 0x94) + 0xdc);
  return uVar1 & (int)uVar1 >> 0x1f;
}



/* ===== rkisp_plat_remove @ 00012048 size=138 ===== */

undefined4 rkisp_plat_remove(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x50);
  *(undefined1 *)(iVar3 + 0xe035) = 0;
  iVar1 = *(int *)(iVar3 + 0x94);
  iVar2 = *(int *)(iVar3 + 0x9acc) + 0x16;
  *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
  __pm_runtime_disable(param_1 + 0x10,1,iVar1,iVar2,param_4);
  rkisp_proc_cleanup(iVar3);
  media_device_unregister(iVar3 + 0x158);
  v4l2_async_notifier_unregister(iVar3 + 0x2e8);
  v4l2_async_notifier_cleanup(iVar3 + 0x2e8);
  v4l2_device_unregister(iVar3 + 0x98);
  v4l2_ctrl_handler_free(iVar3 + 0xec);
  rkisp_unregister_params_vdev(iVar3 + 0x6690);
  rkisp_unregister_stats_vdev(iVar3 + 0x6008);
  rkisp_unregister_dmarx_vdev(iVar3);
  rkisp_unregister_stream_vdevs(iVar3);
  rkisp_unregister_csi_subdev(iVar3);
  rkisp_unregister_isp_subdev(iVar3);
  media_device_cleanup(iVar3 + 0x158);
  return 0;
}



/* ===== subdev_notifier_bound @ 000120d2 size=76 ===== */

undefined4 subdev_notifier_bound(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x944);
  if (iVar2 == 4) {
    uVar1 = 0xfffffff0;
  }
  else {
    iVar3 = iVar2 * 0x244 + param_1 + -0x2e8;
    uVar1 = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(iVar3 + 800) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)(iVar3 + 0x324) = uVar1;
    *(int *)(iVar3 + 0x31c) = param_2;
    *(int *)(param_1 + 0x944) = iVar2 + 1;
    if (0 < *(int *)(DAT_00012120 + 0xc)) {
      printk(DAT_00012124,param_2 + 0x74,(undefined4 *)(param_3 + 0x1c),*(int *)(DAT_00012120 + 0xc)
             ,param_4);
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== subdev_notifier_complete @ 00012128 size=424 ===== */

uint subdev_notifier_complete(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  code *pcVar10;
  
  mutex_lock(param_1 + -0xb8);
  uVar7 = 0;
  piVar8 = (int *)(param_1 + 0x38);
  for (uVar9 = 0; uVar9 < *(uint *)(param_1 + 0x944); uVar9 = uVar9 + 1) {
    iVar2 = piVar8[-1];
    bVar1 = uVar9 == 0;
    for (uVar7 = 0; uVar7 < *(ushort *)(iVar2 + 0x20); uVar7 = uVar7 + 1) {
      if (*(int *)(*(int *)(iVar2 + 0x2c) + uVar7 * 0x20 + 0x1c) << 0x1e < 0) goto LAB_000121e4;
    }
    if (uVar7 == *(ushort *)(iVar2 + 0x20)) {
      uVar7 = 0xfffffffa;
      _dev_err(*(undefined4 *)(param_1 + -0x2dc),DAT_000122d4,iVar2 + 0x74);
      goto LAB_000121ac;
    }
LAB_000121e4:
    if (*(int *)(iVar2 + 0x18) == DAT_000122dc) {
      uVar4 = 0x20;
LAB_000121f6:
      *(undefined4 *)(param_1 + 0x9704) = uVar4;
LAB_00012200:
      uVar7 = media_create_pad_link(iVar2,uVar7 & 0xffff,param_1 + 0x948,0,bVar1);
    }
    else {
      if (*(int *)(iVar2 + 0x18) == 0x4001) {
        uVar4 = 0x100;
        goto LAB_000121f6;
      }
      if (((iVar2 != 0) && (iVar5 = *(int *)(*(int *)(iVar2 + 0x68) + 0x1c), iVar5 != 0)) &&
         (pcVar6 = *(code **)(iVar5 + 0x3c), pcVar6 != (code *)0x0)) {
        if ((*(int *)(DAT_000122e4 + 0x1c) == 0) ||
           (pcVar10 = *(code **)(*(int *)(DAT_000122e4 + 0x1c) + 0x3c), pcVar10 == (code *)0x0)) {
          (*pcVar6)(iVar2,0,piVar8);
        }
        else {
          (*pcVar10)(iVar2,0,piVar8);
        }
      }
      if (*piVar8 == 4) {
        *(undefined4 *)(param_1 + 0x9704) = 0x80;
        iVar2 = piVar8[-1];
        goto LAB_00012200;
      }
      *(undefined4 *)(param_1 + 0x9704) = 0x10;
      uVar7 = media_create_pad_link(piVar8[-1],uVar7 & 0xffff,param_1 + 0x89dc,0,bVar1);
      uVar3 = media_create_pad_link(param_1 + 0x89dc,1,param_1 + 0x948,0,bVar1);
      *(bool *)(param_1 + 0x8b61) = bVar1;
      *(undefined1 *)(param_1 + 0x8b60) = 1;
      uVar7 = uVar7 | uVar3;
    }
    if (uVar7 != 0) {
      _dev_err(*(undefined4 *)(param_1 + -0x2dc),DAT_000122e0,piVar8[-1] + 0x74);
    }
    piVar8 = piVar8 + 0x91;
  }
  if (((int)uVar7 < 0) ||
     (uVar7 = __v4l2_device_register_subdev_nodes(param_1 + -0x250,0), (int)uVar7 < 0))
  goto LAB_000121ac;
  if (*(int *)(param_1 + 0x9704) == 0) {
LAB_000122ba:
    uVar7 = _set_pipeline_default_fmt(param_1 + -0x2e8,1);
    uVar4 = DAT_000122e8;
    if ((int)uVar7 < 0) goto LAB_000121ac;
  }
  else {
    uVar7 = rkisp_update_sensor_info(param_1 + -0x2e8);
    uVar4 = DAT_000122d0;
    if (-1 < (int)uVar7) {
      *(undefined1 *)(param_1 + 0xdd4d) = 1;
      goto LAB_000122ba;
    }
  }
  printk(uVar4,param_1 + -0x240);
LAB_000121ac:
  mutex_unlock(param_1 + -0xb8);
  if ((uVar7 == 0) && (*(char *)(param_1 + 0x9774) != '\0')) {
    queue_work_on(1,*DAT_000122d8,param_1 + 0x5d10);
  }
  return uVar7;
}



/* ===== rkisp_pipeline_close @ 000122ec size=98 ===== */

undefined4 rkisp_pipeline_close(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x94);
  HintPreloadData(piVar2);
  do {
    ExclusiveAccess(piVar2);
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    rkisp_rx_buf_pool_free(param_1 + -0x96dc);
    *(undefined1 *)(*(int *)(param_1 + 0x3f0) * 0x14 + *(int *)(param_1 + -0x9648) + 0x78) = 0;
    if (((*(char *)(*(int *)(param_1 + -0x9648) + 0x7c0) != '\0') &&
        (0x5f < *(uint *)(param_1 + 200))) && (*(char *)(DAT_00012350 + 0x1a) == '\0')) {
      *(undefined1 *)(*(int *)(param_1 + -0x9648) + 0x7c2) = 1;
    }
  }
  return 0;
}



/* ===== rkisp_pipeline_set_stream @ 00012354 size=644 ===== */

int rkisp_pipeline_set_stream(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  
  piVar10 = (int *)(param_1 + 0x98);
  if (param_2 == 0) {
    HintPreloadData(piVar10);
    do {
      ExclusiveAccess(piVar10);
      iVar5 = *piVar10;
      bVar1 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar1);
    *piVar10 = iVar5 + -1;
    if (iVar5 + -1 < 1) {
      iVar5 = param_1;
      if (*(char *)(*(int *)(param_1 + -0x9648) + 0x7a5) != '\0') {
        *(undefined1 *)(*(int *)(param_1 + -0x9648) + 0x7a5) = 0;
        *(undefined4 *)(*(int *)(param_1 + -0x9648) + 0x7a0) = 0x100;
        iVar11 = completion_done(*(int *)(param_1 + -0x9648) + 0x790);
        if (iVar11 == 0) {
          complete(*(int *)(param_1 + -0x9648) + 0x790);
        }
      }
      iVar11 = DAT_000125e0;
      iVar2 = *(int *)(param_1 + 0x90);
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        iVar7 = *(int *)(param_1 + 0x9c + iVar2 * 4);
        if ((((*(byte *)(param_1 + 0x495e) < 2) || (*(int *)(iVar7 + 0x18) != DAT_000125d8)) &&
            (iVar7 != 0)) &&
           ((iVar4 = *(int *)(*(int *)(iVar7 + 0x68) + 0xc), iVar4 != 0 &&
            (pcVar8 = *(code **)(iVar4 + 0x28), pcVar8 != (code *)0x0)))) {
          if ((*(int *)(iVar11 + 0xc) == 0) ||
             (pcVar3 = *(code **)(*(int *)(iVar11 + 0xc) + 0x28), pcVar3 == (code *)0x0)) {
            (*pcVar8)(iVar7,0,0,pcVar8,iVar5,param_2,param_3);
          }
          else {
            (*pcVar3)();
          }
        }
      }
      if (-1 < *(int *)(param_1 + 0x148)) {
        disable_irq();
      }
      if (((param_1 + -0x8aac != 0) &&
          (iVar5 = *(int *)(*(int *)(param_1 + -0x8a44) + 0xc), iVar5 != 0)) &&
         (pcVar8 = *(code **)(iVar5 + 0x28), pcVar8 != (code *)0x0)) {
        if ((*(int *)(DAT_000125e0 + 0xc) == 0) ||
           (pcVar3 = *(code **)(*(int *)(DAT_000125e0 + 0xc) + 0x28), pcVar3 == (code *)0x0)) {
          (*pcVar8)(param_1 + -0x8aac,0);
        }
        else {
          (*pcVar3)();
        }
      }
    }
  }
  else {
    HintPreloadData(piVar10);
    do {
      ExclusiveAccess(piVar10);
      iVar5 = *piVar10;
      bVar1 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar1);
    *piVar10 = iVar5 + 1;
    if (iVar5 + 1 < 2) {
      if (-1 < *(int *)(param_1 + 0x148)) {
        enable_irq();
      }
      iVar5 = DAT_000125e0;
      iVar11 = param_1 + -0x8aac;
      if (iVar11 == 0) {
        iVar2 = -0x13;
      }
      else {
        iVar7 = *(int *)(*(int *)(param_1 + -0x8a44) + 0xc);
        iVar2 = DAT_000125dc;
        if ((iVar7 != 0) && (pcVar8 = *(code **)(iVar7 + 0x28), pcVar8 != (code *)0x0)) {
          if ((*(int *)(DAT_000125e0 + 0xc) == 0) ||
             (pcVar3 = *(code **)(*(int *)(DAT_000125e0 + 0xc) + 0x28), pcVar3 == (code *)0x0)) {
            iVar2 = (*pcVar8)(iVar11,1);
          }
          else {
            iVar2 = (*pcVar3)();
          }
          if (-1 < iVar2) {
            iVar7 = 0;
            piVar9 = (int *)(param_1 + 0x9c);
            piVar13 = piVar9;
            do {
              if (*(int *)(param_1 + 0x90) <= iVar7) {
                return 0;
              }
              piVar12 = piVar13 + 1;
              iVar2 = *piVar13;
              if ((((*(byte *)(param_1 + 0x495e) < 2) || (*(int *)(iVar2 + 0x18) != DAT_000125d8))
                  && (iVar2 != 0)) &&
                 ((iVar4 = *(int *)(*(int *)(iVar2 + 0x68) + 0xc), iVar4 != 0 &&
                  (pcVar8 = *(code **)(iVar4 + 0x28), pcVar8 != (code *)0x0)))) {
                if ((*(int *)(iVar5 + 0xc) == 0) ||
                   (pcVar3 = *(code **)(*(int *)(iVar5 + 0xc) + 0x28), pcVar3 == (code *)0x0)) {
                  iVar2 = (*pcVar8)(iVar2,1);
                }
                else {
                  iVar2 = (*pcVar3)(iVar2,1);
                }
                if (((iVar2 < 0) && (iVar2 != DAT_000125dc)) && (iVar2 != -0x13)) goto LAB_000124de;
              }
              iVar7 = iVar7 + 1;
              piVar13 = piVar12;
            } while( true );
          }
        }
      }
      goto LAB_00012508;
    }
  }
  return 0;
LAB_000124de:
  while (iVar7 = iVar7 + -1, -1 < iVar7) {
    iVar4 = piVar9[iVar7];
    if (((iVar4 != 0) && (iVar6 = *(int *)(*(int *)(iVar4 + 0x68) + 0xc), iVar6 != 0)) &&
       (pcVar8 = *(code **)(iVar6 + 0x28), pcVar8 != (code *)0x0)) {
      if ((*(int *)(iVar5 + 0xc) == 0) ||
         (pcVar3 = *(code **)(*(int *)(iVar5 + 0xc) + 0x28), pcVar3 == (code *)0x0)) {
        (*pcVar8)(iVar4,0);
      }
      else {
        (*pcVar3)();
      }
    }
  }
  iVar7 = *(int *)(*(int *)(param_1 + -0x8a44) + 0xc);
  if ((iVar7 != 0) && (pcVar8 = *(code **)(iVar7 + 0x28), pcVar8 != (code *)0x0)) {
    if ((*(int *)(iVar5 + 0xc) == 0) ||
       (pcVar3 = *(code **)(*(int *)(iVar5 + 0xc) + 0x28), pcVar3 == (code *)0x0)) {
      (*pcVar8)(iVar11,0);
    }
    else {
      (*pcVar3)();
    }
  }
LAB_00012508:
  HintPreloadData(piVar10);
  do {
    ExclusiveAccess(piVar10);
    bVar1 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar1);
  *piVar10 = *piVar10 + -1;
  return iVar2;
}



/* ===== rkisp_set_clk_rate @ 000125e4 size=12 ===== */

void rkisp_set_clk_rate(void)

{
  if (*(char *)(DAT_000125f0 + 0x1a) == '\0') {
    clk_set_rate();
    return;
  }
  return;
}



/* ===== rkisp_pipeline_open @ 000125f4 size=644 ===== */

undefined4 rkisp_pipeline_open(int param_1,int param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  ulonglong uVar13;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0xffffffea;
  }
  piVar6 = (int *)(param_1 + 0x94);
  HintPreloadData(piVar6);
  do {
    ExclusiveAccess(piVar6);
    iVar4 = *piVar6;
    bVar12 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar12);
  *piVar6 = iVar4 + 1;
  if (1 < iVar4 + 1) {
    return 0;
  }
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    memset((void *)(param_1 + 0x9c),0,0x20);
    if ((*(uint *)(param_1 + 0x310) & 0x1b0) != 0) {
      do {
        iVar4 = 0;
        while( true ) {
          if ((int)(uint)*(ushort *)(param_2 + 0x20) <= iVar4) goto LAB_000126a8;
          if ((*(int *)(*(int *)(param_2 + 0x2c) + iVar4 * 0x20 + 0x1c) << 0x1f < 0) &&
             (iVar3 = rkisp_media_entity_remote_pad(), iVar3 != 0)) break;
          iVar4 = iVar4 + 1;
        }
        iVar4 = *(int *)(iVar3 + 0x10);
        if ((iVar4 == 0) || (param_2 = param_1 + -0x8aac, iVar4 != param_1 + -0x8aac)) {
          iVar3 = *(int *)(param_1 + 0x90);
          *(int *)(param_1 + 0x90) = iVar3 + 1;
          *(int *)(param_1 + iVar3 * 4 + 0x9c) = iVar4;
          param_2 = iVar4;
        }
      } while (*(short *)(param_2 + 0x20) != 1);
LAB_000126a8:
      if (*(int *)(param_1 + 0x90) == 0) {
        return 0xffffffea;
      }
    }
  }
  iVar4 = *(int *)(param_1 + -0x9648);
  *(undefined1 *)(*(int *)(param_1 + 0x3f0) * 0x14 + iVar4 + 0x78) = 1;
  if (*(char *)(iVar4 + 0x7c0) == '\0') {
    if ((*(uint *)(param_1 + 0x310) & 7) == 0) {
      if ((*(uint *)(param_1 + 0x310) == 0x40) &&
         (*(int *)(*(int *)(param_1 + -0x9648) + 0x18) != 0)) {
        rkisp_set_clk_rate(*(undefined4 *)(iVar4 + 0x18),DAT_0001288c);
        goto LAB_00012668;
      }
      iVar9 = *(int *)(param_1 + 0x9c);
      piVar6 = (int *)(param_1 + 0x9c);
      for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x90); iVar3 = iVar3 + 1) {
        iVar9 = *piVar6;
        if ((*(int *)(iVar9 + 0x18) == DAT_00012890) || (*(int *)(iVar9 + 0x18) == 0x4001))
        goto LAB_00012838;
        piVar6 = piVar6 + 1;
      }
      uVar2 = DAT_00012894;
      if (iVar3 == *(int *)(param_1 + 0x90)) {
LAB_0001281c:
        printk(uVar2,param_1 + -0x9634);
        return 0xffffffe0;
      }
LAB_00012838:
      iVar3 = v4l2_ctrl_find(*(undefined4 *)(iVar9 + 0x70),DAT_00012898,iVar3,iVar9,param_4);
      uVar2 = DAT_0001289c;
      if (iVar3 == 0) goto LAB_0001281c;
      uVar13 = v4l2_ctrl_g_ctrl_int64();
      lVar1 = (ulonglong)(uint)*(byte *)(param_1 + -0x88ac) * (uVar13 & 0xffffffff);
      uVar7 = (int)(uVar13 >> 0x20) * (uint)*(byte *)(param_1 + -0x88ac) +
              (int)((ulonglong)lVar1 >> 0x20);
      uVar5 = (uint)lVar1 >> 3 | uVar7 * 0x20000000;
      uVar7 = uVar7 >> 3;
    }
    else if (*(uint *)(param_1 + 200) < 0x60) {
      uVar5 = 0;
      uVar7 = 0;
      iVar3 = 0;
      iVar9 = iVar4;
      while (iVar3 < *(int *)(iVar4 + 0xb8)) {
        iVar10 = *(int *)(iVar9 + 0x74);
        iVar3 = iVar3 + 1;
        piVar6 = (int *)(iVar9 + 0x70);
        iVar9 = iVar9 + 0x14;
        if (iVar10 == 0) {
          iVar10 = 0x1e;
        }
        uVar11 = iVar10 * *piVar6;
        bVar12 = CARRY4(uVar5,uVar11);
        uVar5 = uVar5 + uVar11;
        uVar7 = uVar7 + bVar12;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x3f0) * 0x14 + iVar4;
      iVar9 = *(int *)(iVar3 + 0x74);
      if (iVar9 == 0) {
        iVar9 = 0x1e;
      }
      uVar5 = iVar9 * *(int *)(iVar3 + 0x70);
      uVar7 = 0;
    }
    iVar3 = DAT_00012884;
    uVar13 = (ulonglong)DAT_0001287c * (ulonglong)uVar5 +
             ((ulonglong)DAT_00012878 * (ulonglong)uVar5 >> 0x20);
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar11 = (uint)((ulonglong)DAT_00012878 * (ulonglong)uVar7 + (uVar13 & 0xffffffff) >> 0x20);
    uVar13 = (ulonglong)DAT_0001287c * (ulonglong)uVar7 +
             (ulonglong)CONCAT14(CARRY4(uVar11,uVar5),uVar11 + uVar5);
    lVar1 = (uVar13 >> 0x12) + (uVar13 >> 0x14);
    iVar10 = (int)((ulonglong)lVar1 >> 0x20);
    for (iVar9 = 0; iVar9 < *(int *)(iVar4 + 0x48); iVar9 = iVar9 + 1) {
      bVar12 = iVar10 == 0;
      if (iVar10 == 0) {
        bVar12 = (uint)lVar1 <= *(uint *)(*(int *)(iVar4 + 0x44) + iVar9 * 8);
      }
      if (bVar12) goto LAB_00012768;
    }
    if (iVar9 == *(int *)(iVar4 + 0x48)) {
      iVar9 = iVar9 + -1;
    }
LAB_00012768:
    rkisp_set_clk_rate(*(undefined4 *)(iVar4 + 0x18),
                       DAT_00012884 * *(int *)(*(int *)(iVar4 + 0x44) + iVar9 * 8));
    if (*(char *)(iVar4 + 0x7be) != '\0') {
      rkisp_set_clk_rate(*(undefined4 *)(iVar4 + 0x2c),
                         iVar3 * *(int *)(*(int *)(iVar4 + 0x44) + iVar9 * 8));
    }
    if (*(int *)(param_1 + 200) == 0x70) {
      rkisp_set_clk_rate(*(undefined4 *)(iVar4 + 0x1c),
                         *(int *)(*(int *)(iVar4 + 0x44) + iVar9 * 8) * DAT_00012884);
    }
    uVar8 = *(undefined4 *)(iVar4 + 8);
    uVar2 = clk_get_rate(*(undefined4 *)(iVar4 + 0x18));
    _dev_info(uVar8,DAT_00012888,uVar2);
  }
  else if ((0x5f < *(uint *)(param_1 + 200)) && (*(char *)(DAT_00012880 + 0x1a) == '\0')) {
    *(undefined1 *)(iVar4 + 0x7c2) = 1;
  }
LAB_00012668:
  if ((*(uint *)(param_1 + 0x310) & 0x117) != 0) {
    rkisp_csi_config_patch();
  }
  return 0;
}



/* ===== rkisp_isp_sd_enum_mbus_code @ 000128a0 size=48 ===== */

undefined4 rkisp_isp_sd_enum_mbus_code(undefined4 param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  
  uVar1 = param_3[1];
  if (*param_3 == 0) {
    if (uVar1 < 0x1b) {
      param_3[2] = *(int *)(DAT_000128d0 + uVar1 * 0x28);
      return 0;
    }
  }
  else if (uVar1 < 0xd) {
    param_3[2] = *(int *)(DAT_000128d0 + uVar1 * 8 + 0x438);
    return 0;
  }
  return 0xffffffea;
}



/* ===== rkisp_isp_sd_set_fmt @ 000128d4 size=240 ===== */

undefined4 rkisp_isp_sd_set_fmt(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint *puVar10;
  
  iVar9 = *(int *)(param_1 + 100);
  if ((param_3 != (int *)0x0) && (uVar4 = param_3[1], (uVar4 & 0xfffffffd) == 0)) {
    if (*param_3 == 0) {
      if (param_2 == 0) {
        return 0xffffffea;
      }
      uVar3 = 0;
      if (uVar4 < *(ushort *)(param_1 + 0x20)) {
        uVar3 = uVar4;
      }
      puVar10 = (uint *)(uVar3 * 0x50 + param_2);
    }
    else {
      puVar10 = (uint *)(param_3 + 2);
    }
    if (uVar4 == 0) {
      iVar5 = 0;
      do {
        if (puVar10[2] == *(uint *)(iVar5 * 0x28 + DAT_000129c4)) {
          if (*puVar10 < 0x110) {
            return 0xffffffea;
          }
          if (puVar10[1] < 0x100) {
            return 0xffffffea;
          }
          puVar8 = (undefined4 *)(DAT_000129c4 + iVar5 * 0x28);
          uVar1 = puVar8[1];
          uVar2 = puVar8[2];
          uVar6 = puVar8[3];
          *(undefined4 *)(iVar9 + 0xd74) = *puVar8;
          *(undefined4 *)(iVar9 + 0xd78) = uVar1;
          *(undefined4 *)(iVar9 + 0xd7c) = uVar2;
          *(undefined4 *)(iVar9 + 0xd80) = uVar6;
          uVar1 = puVar8[5];
          uVar2 = puVar8[6];
          uVar6 = puVar8[7];
          *(undefined4 *)(iVar9 + 0xd84) = puVar8[4];
          *(undefined4 *)(iVar9 + 0xd88) = uVar1;
          *(undefined4 *)(iVar9 + 0xd8c) = uVar2;
          *(undefined4 *)(iVar9 + 0xd90) = uVar6;
          uVar1 = puVar8[9];
          *(undefined4 *)(iVar9 + 0xd94) = puVar8[8];
          *(undefined4 *)(iVar9 + 0xd98) = uVar1;
          uVar4 = puVar10[1];
          uVar3 = puVar10[2];
          uVar7 = puVar10[3];
          *(uint *)(iVar9 + 0xd44) = *puVar10;
          *(uint *)(iVar9 + 0xd48) = uVar4;
          *(uint *)(iVar9 + 0xd4c) = uVar3;
          *(uint *)(iVar9 + 0xd50) = uVar7;
          uVar4 = puVar10[5];
          uVar3 = puVar10[6];
          uVar7 = puVar10[7];
          *(uint *)(iVar9 + 0xd54) = puVar10[4];
          *(uint *)(iVar9 + 0xd58) = uVar4;
          *(uint *)(iVar9 + 0xd5c) = uVar3;
          *(uint *)(iVar9 + 0xd60) = uVar7;
          uVar4 = puVar10[9];
          uVar3 = puVar10[10];
          uVar7 = puVar10[0xb];
          *(uint *)(iVar9 + 0xd64) = puVar10[8];
          *(uint *)(iVar9 + 0xd68) = uVar4;
          *(uint *)(iVar9 + 0xd6c) = uVar3;
          *(uint *)(iVar9 + 0xd70) = uVar7;
          goto LAB_00012974;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0x1b);
    }
    else {
      if (uVar4 != 2) {
LAB_00012974:
        puVar10[3] = 1;
        return 0;
      }
      iVar5 = 0;
      do {
        if (puVar10[2] == *(uint *)(DAT_000129c4 + 0x438 + iVar5 * 8)) {
          iVar5 = DAT_000129c4 + iVar5 * 8;
          uVar1 = *(undefined4 *)(iVar5 + 0x43c);
          *(undefined4 *)(iVar9 + 0xdac) = *(undefined4 *)(iVar5 + 0x438);
          *(undefined4 *)(iVar9 + 0xdb0) = uVar1;
          *puVar10 = *(uint *)(iVar9 + 0xdbc);
          puVar10[1] = *(uint *)(iVar9 + 0xdc0);
          if (*(short *)((int)puVar10 + 0x16) == 0) {
            *(undefined2 *)((int)puVar10 + 0x16) = 1;
          }
          if (((puVar10[4] & 0xfffffffd) != 1) && (puVar10[4] != 10)) {
            puVar10[4] = 1;
          }
          *(uint *)(iVar9 + 0xdcc) = (uint)*(ushort *)((int)puVar10 + 0x16);
          *(uint *)(iVar9 + 0xdd0) = puVar10[4];
          goto LAB_00012974;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0xd);
    }
  }
  return 0xffffffea;
}



/* ===== rkisp_isp_sd_get_selection @ 000129c8 size=272 ===== */

undefined4 rkisp_isp_sd_get_selection(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 100);
  if ((param_3 == (int *)0x0) || (uVar5 = param_3[1], (uVar5 & 0xfffffffd) != 0)) {
LAB_00012ad2:
    uVar1 = 0xffffffea;
  }
  else {
    if (*param_3 == 0) {
      if (param_2 == 0) goto LAB_00012ad2;
      if (*(ushort *)(param_1 + 0x20) <= uVar5) {
        uVar5 = 0;
      }
      piVar6 = (int *)(uVar5 * 0x50 + param_2 + 0x30);
    }
    else {
      piVar6 = param_3 + 4;
    }
    iVar2 = *(int *)(param_1 + 0x208);
    iVar3 = *(int *)(param_1 + 0x20c);
    iVar4 = *(int *)(param_1 + 0x210);
    *piVar6 = *(int *)(param_1 + 0x204);
    piVar6[1] = iVar2;
    piVar6[2] = iVar3;
    piVar6[3] = iVar4;
    if (param_3[2] == 0) {
      if (param_3[1] == 2) {
        iVar7 = *(int *)(param_1 + 0x220);
        iVar2 = *(int *)(param_1 + 0x224);
        iVar3 = *(int *)(param_1 + 0x228);
        *piVar6 = *(int *)(param_1 + 0x21c);
        piVar6[1] = iVar7;
        piVar6[2] = iVar2;
        piVar6[3] = iVar3;
      }
    }
    else {
      if (param_3[2] != 2) goto LAB_00012ad2;
      *piVar6 = 0;
      piVar6[1] = 0;
      if (param_3[1] == 0) {
        uVar5 = *(uint *)(iVar7 + 0x970c);
        if (uVar5 == 0x50) {
          iVar7 = 0xc00;
          uVar5 = 0x1000;
        }
        else if (uVar5 < 0x51) {
          if (uVar5 == 0x20) {
            iVar7 = 0x990;
            uVar5 = 0xcc0;
          }
          else if (uVar5 == 0x30) {
            iVar7 = 0x438;
            uVar5 = 0x780;
          }
          else {
            iVar7 = 0xcf0;
            uVar5 = 0x1140;
          }
        }
        else if (uVar5 == 0x70) {
          iVar7 = 0x6c0;
          uVar5 = 0xc00;
        }
        else if (uVar5 == 0x80) {
          iVar7 = 0xc40;
          uVar5 = 0x1080;
        }
        else if (uVar5 == 0x60) {
          if (*(char *)(*(int *)(iVar7 + -4) + 0x7be) == '\0') {
            iVar7 = 0xdb0;
            uVar5 = 0x1240;
          }
          else {
            iVar7 = 0x1800;
            uVar5 = 0x2000;
          }
        }
        else {
          iVar7 = 0xcf0;
          uVar5 = 0x1140;
        }
        if (uVar5 < *(uint *)(param_1 + 0x1ac)) {
          piVar6[2] = uVar5;
        }
        else {
          piVar6[2] = *(uint *)(param_1 + 0x1ac);
        }
        uVar5 = __aeabi_uidiv(uVar5 * iVar7);
        if (*(uint *)(param_1 + 0x1b0) < uVar5) {
          piVar6[3] = *(uint *)(param_1 + 0x1b0);
        }
        else {
          piVar6[3] = uVar5;
        }
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== rkisp_subdev_fmt_link_validate @ 00012ad8 size=38 ===== */

undefined4
rkisp_subdev_fmt_link_validate(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_3 + 0x10) == *(int *)(param_4 + 0x10)) &&
     (*(uint *)(param_4 + 8) <= *(uint *)(param_3 + 8))) {
    if (*(uint *)(param_3 + 0xc) < *(uint *)(param_4 + 0xc)) {
      uVar1 = 0xffffffea;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffea;
}



/* ===== rkisp_fast_switch_rx_buf @ 00012afe size=144 ===== */

void rkisp_fast_switch_rx_buf(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = DAT_00012b90;
  piVar3 = (int *)(param_1 + 0x7e4c);
  iVar4 = 1;
  do {
    if (piVar3[-2] != 0) {
      if (param_2 == 0) {
        if (*(int **)(iVar4 * 0x6c0 + param_1 + 0x778c) == piVar3) goto LAB_00012b66;
        iVar2 = *piVar3 + -0x280;
      }
      else {
        iVar2 = piVar3[2];
      }
      if (iVar2 != 0) {
        uVar5 = *(undefined4 *)(iVar2 + 0x2a8);
        if (((*(int *)(param_1 + 0x9b1c) == 5) && (param_2 == 0)) &&
           (iVar2 = rkisp_read_reg_cache(param_1,0x3808), iVar2 == iVar1)) {
          if (iVar4 == 3) goto LAB_00012b66;
          rkisp_write(param_1,0x1890,uVar5,0);
        }
        rkisp_write(param_1,*(undefined4 *)(piVar3[-1] + 0x9c),uVar5,0);
      }
    }
LAB_00012b66:
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 0x1b0;
    if (iVar4 == 4) {
      return;
    }
  } while( true );
}



/* ===== rkisp_unite_set_bits @ 00012b94 size=58 ===== */

void rkisp_unite_set_bits
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,char param_6)

{
  rkisp_set_bits();
  if (param_6 != '\0') {
    rkisp_next_set_bits(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



/* ===== rkisp_unite_write @ 00012bce size=46 ===== */

void rkisp_unite_write(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      char param_5)

{
  rkisp_write();
  if (param_5 != '\0') {
    rkisp_next_write(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



/* ===== force_cfg_update @ 00012bfc size=102 ===== */

void force_cfg_update(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x7be);
  if (*(int *)(param_1 + 0x97a4) == 0x50) {
    uVar2 = rkisp_read_reg_cache(param_1,0x1400,param_3,0x50,param_1,param_2,param_3);
    uVar2 = uVar2 | 0x300000;
    rkisp_write(param_1,0x1400,uVar2,1);
  }
  else {
    uVar2 = 0x300000;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x7ba) = 1;
  rkisp_unite_set_bits(param_1,0x1400,0,uVar2,0,uVar1);
  rkisp_unite_write(param_1,0x1404,0x10,1,uVar1);
  return;
}



/* ===== rkisp_config_cmsk_dual @ 00012c62 size=812 ===== */

void rkisp_config_cmsk_dual(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  uint local_1d0;
  undefined1 *local_1cc;
  undefined1 auStack_1a8 [7];
  undefined4 local_1a1;
  ushort local_19d [9];
  undefined2 local_18a;
  ushort local_188;
  undefined1 auStack_e8 [7];
  short asStack_e1 [11];
  undefined2 local_ca;
  ushort local_c8;
  
  memcpy(auStack_1a8,param_2,0xc0);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar11 = (uint)uVar2;
  uVar12 = 0;
  memcpy(auStack_e8,param_2,0xc0);
  iVar7 = *(int *)(param_1 + 0xe58);
  uVar8 = *(uint *)(param_1 + 0xe54) >> 1;
  puVar13 = auStack_1a8;
  uVar3 = *(undefined2 *)((int)param_2 + 0x11);
  uVar4 = param_2[0x10];
  if (*(int *)(param_1 + 0x97a4) == 0x60) {
    uVar9 = 8;
  }
  else {
    uVar9 = 0xc;
  }
  local_1cc = auStack_e8;
  local_1d0 = uVar11;
  do {
    if ((int)((uint)((byte)((byte)uVar3 | (byte)uVar2 | (byte)uVar4) >> (uVar12 & 0xff)) << 0x1f) <
        0) {
      iVar15 = uVar12 * 0xf;
      uVar5 = *(ushort *)((int)param_2 + iVar15 + 7);
      uVar10 = (uint)*(ushort *)((int)param_2 + iVar15 + 0xb) + (uint)uVar5;
      if (uVar8 < uVar10) {
        if (uVar5 < uVar8) {
          *(ushort *)((int)local_19d + iVar15) = ((short)uVar8 + 7) - uVar5 & 0xfff8;
          sVar6 = (short)uVar10 - (short)uVar8;
          uVar5 = sVar6 + 7U & 0xfff8;
          *(ushort *)((int)asStack_e1 + iVar15 + 4) = uVar5;
          *(ushort *)((int)asStack_e1 + iVar15) = (sVar6 + 0x80) - uVar5;
        }
        else {
          uVar10 = ~(1 << (uVar12 & 0xff));
          uVar5 = (ushort)uVar10;
          local_19d[3] = local_19d[3] & uVar5;
          uVar11 = uVar11 & uVar10 & 0xffff;
          local_188 = uVar5 & local_188;
        }
      }
      else {
        uVar10 = ~(1 << (uVar12 & 0xff));
        local_1d0 = local_1d0 & uVar10 & 0xffff;
        uVar5 = (ushort)uVar10;
        asStack_e1[5] = asStack_e1[5] & uVar5;
        local_c8 = uVar5 & local_c8;
      }
      iVar15 = uVar12 * 4 + 0x250;
      uVar10 = (uint)(byte)puVar13[6] << 0x10 | (uint)(byte)puVar13[5] << 8 | (uint)(byte)puVar13[4]
      ;
      rkisp_write(param_1,iVar15,uVar10,0);
      rkisp_next_write(param_1,iVar15,uVar10,0);
      iVar15 = uVar12 * 8 + 0x280;
      iVar14 = uVar12 * 8 + 0x284;
      rkisp_write(param_1,iVar15,*(undefined4 *)((int)&local_1a1 + uVar12 * 0xf),0);
      rkisp_write(param_1,iVar14,*(undefined4 *)(puVar13 + 0xb),0);
      rkisp_next_write(param_1,iVar15,*(undefined4 *)((int)asStack_e1 + uVar12 * 0xf),0);
      rkisp_next_write(param_1,iVar14,*(undefined4 *)(local_1cc + 0xb),0);
    }
    uVar12 = uVar12 + 1;
    puVar13 = puVar13 + 0xf;
    local_1cc = local_1cc + 0xf;
  } while (uVar9 != uVar12);
  uVar12 = 0;
  if (uVar11 != 0) {
    rkisp_write(param_1,0x234,uVar11,0);
    uVar12 = 2;
    rkisp_write(param_1,0x240,uVar1,0);
  }
  if (local_19d[3] != 0) {
    uVar12 = uVar12 | 4;
    rkisp_write(param_1,0x238,local_19d[3],0);
    rkisp_write(param_1,0x244,local_19d[2],0);
  }
  if (local_188 == 0) {
    uVar11 = 0;
    if (uVar12 != 0) goto LAB_00012e32;
  }
  else {
    uVar12 = uVar12 | 8;
    rkisp_write(param_1,0x23c,local_188,0);
    rkisp_write(param_1,0x248,local_18a,0);
LAB_00012e32:
    uVar11 = uVar12 | 3;
    rkisp_write(param_1,0x24c,uVar8 + 0x80 & 0xffff | iVar7 << 0x10,0);
  }
  rkisp_write(param_1,0x230,uVar11,0);
  if (local_1d0 == 0) {
    uVar11 = 0;
  }
  else {
    rkisp_next_write(param_1,0x234,local_1d0,0);
    uVar11 = 2;
    rkisp_next_write(param_1,0x240,uVar1,0);
  }
  if (asStack_e1[5] != 0) {
    uVar11 = uVar11 | 4;
    rkisp_next_write(param_1,0x238,asStack_e1[5],0);
    rkisp_next_write(param_1,0x244,asStack_e1[4],0);
  }
  if (local_c8 == 0) {
    uVar12 = 0;
    if (uVar11 == 0) goto LAB_00012f46;
  }
  else {
    uVar11 = uVar11 | 8;
    rkisp_next_write(param_1,0x23c,local_c8,0);
    rkisp_next_write(param_1,0x248,local_ca,0);
  }
  uVar12 = uVar11 | 3;
  rkisp_next_write(param_1,0x24c,uVar8 + 0x80 & 0xffff | iVar7 << 0x10,0);
LAB_00012f46:
  rkisp_next_write(param_1,0x230,uVar12,0);
  uVar8 = rkisp_next_read(param_1,0x230,1);
  if ((*(char *)(*(int *)(param_1 + 0x94) + 0x7b9) != '\0') && ((uVar8 & 0xf0f) != 0)) {
    rkisp_next_write(param_1,0x230,uVar8 | 0x80000000,0);
    return;
  }
  return;
}



/* ===== rkisp_config_cmsk @ 00012f8e size=456 ===== */

void rkisp_config_cmsk(int param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined2 local_e8;
  ushort local_e6;
  undefined4 auStack_e1 [2];
  undefined2 local_d9;
  ushort local_d7;
  undefined2 local_ca;
  ushort local_c8;
  uint local_34;
  
  if (((*(uint *)(param_1 + 0x97a4) & 0xffffffef) == 0x60) &&
     (disableIRQinterrupts(), *(char *)(param_1 + 0xe034) != '\0')) {
    *(undefined1 *)(param_1 + 0xe034) = 0;
    memcpy(&local_e8,(void *)(param_1 + 0xdf74),0xc0);
    if (*(char *)(*(int *)(param_1 + 0x94) + 0x7be) == '\0') {
      if (*(int *)(param_1 + 0x97a4) == 0x60) {
        uVar1 = 8;
      }
      else {
        uVar1 = 0xc;
      }
      if (local_e6 == 0) {
        uVar3 = 0;
      }
      else {
        rkisp_write(param_1,0x234,local_e6,0);
        uVar3 = 2;
        rkisp_write(param_1,0x240,local_e8,0);
      }
      if (local_d7 != 0) {
        rkisp_write(param_1,0x238,local_d7,0);
        uVar3 = uVar3 | 4;
        rkisp_write(param_1,0x244,local_d9,0);
      }
      if (local_c8 != 0) {
        rkisp_write(param_1,0x23c,local_c8,0);
        uVar3 = uVar3 | 8;
        rkisp_write(param_1,0x248,local_ca,0);
      }
      puVar2 = &local_e8;
      uVar4 = 0;
      do {
        if ((int)((uint)((ushort)(local_c8 | local_d7 | local_e6) >> (uVar4 & 0xff)) << 0x1f) < 0) {
          rkisp_write(param_1,uVar4 * 4 + 0x250,
                      (uint)*(byte *)(puVar2 + 3) << 0x10 | (uint)*(byte *)((int)puVar2 + 5) << 8 |
                      (uint)*(byte *)(puVar2 + 2),0);
          rkisp_write(param_1,uVar4 * 8 + 0x280,*(undefined4 *)((int)auStack_e1 + uVar4 * 0xf),0);
          rkisp_write(param_1,uVar4 * 8 + 0x284,*(undefined4 *)((int)puVar2 + 0xb),0);
        }
        uVar4 = uVar4 + 1;
        puVar2 = (undefined2 *)((int)puVar2 + 0xf);
      } while (uVar4 != uVar1);
      uVar1 = 0;
      if (uVar3 != 0) {
        rkisp_write(param_1,0x24c,
                    (uint)*(ushort *)(param_1 + 0xe54) | *(int *)(param_1 + 0xe58) << 0x10,0);
        uVar1 = uVar3 | (local_34 & 3) << 4 | 3;
      }
      rkisp_write(param_1,0x230,uVar1,0);
      uVar1 = rkisp_read(param_1,0x230,1);
      if ((*(char *)(*(int *)(param_1 + 0x94) + 0x7b9) != '\0') && ((uVar1 & 0xf0f) != 0)) {
        rkisp_write(param_1,0x230,uVar1 | 0x80000000,1);
      }
    }
    else {
      rkisp_config_cmsk_dual(param_1,&local_e8);
    }
  }
  return;
}



/* ===== rkisp_subdev_link_validate @ 00013156 size=16 ===== */

undefined4 rkisp_subdev_link_validate(int param_1)

{
  undefined4 uVar1;
  
  if (*(short *)(*(int *)(param_1 + 0x18) + 0x14) != 1) {
    uVar1 = v4l2_subdev_link_validate();
    return uVar1;
  }
  return 0;
}



/* ===== rkisp_start_3a_run @ 00013166 size=226 ===== */

void rkisp_start_3a_run(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_bc [20];
  undefined4 local_a8;
  undefined1 auStack_a4 [136];
  int local_1c;
  
  piVar1 = DAT_00013248;
  local_1c = *DAT_00013248;
  memset(auStack_a4,0,0x84);
  local_a8 = DAT_0001324c;
  if ((((*(char *)(param_1 + 0xe20) == '\x02') && (*(char *)(param_1 + 0xe48) == '\0')) &&
      (*(int *)(param_1 + 0x97a4) != 0x40)) && (*(char *)(param_1 + 0x7178) != '\0')) {
    v4l2_event_queue(param_1 + 0x6858,&local_a8);
    _cond_resched();
    if ((*(char *)(param_1 + 0x6c6c) == '\0') || (*(char *)(param_1 + 0x6c6d) != '\0')) {
      init_wait_entry(auStack_bc,0);
      iVar2 = 300;
      while ((prepare_to_wait_event(param_1 + 0x9a08,auStack_bc,2),
             *(char *)(param_1 + 0x6c6c) == '\0' || (*(char *)(param_1 + 0x6c6d) != '\0'))) {
        if (iVar2 == 0) goto LAB_000131ec;
        iVar2 = schedule_timeout(iVar2);
      }
      if (iVar2 == 0) {
        iVar2 = 1;
      }
LAB_000131ec:
      finish_wait(param_1 + 0x9a08,auStack_bc);
      if (iVar2 == 0) {
        printk(DAT_00013250,param_1 + 0xa8);
        goto LAB_00013200;
      }
    }
    else {
      iVar2 = 300;
    }
    if (0 < *DAT_00013254) {
      iVar2 = jiffies_to_msecs(iVar2);
      printk(DAT_00013258,param_1 + 0xa8,1000 - iVar2);
    }
  }
LAB_00013200:
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== rkisp_isp_sd_subs_evt @ 0001325c size=24 ===== */

undefined4 rkisp_isp_sd_subs_evt(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  
  if ((*param_3 == 4) && (param_3[1] == 0)) {
    uVar1 = v4l2_event_subscribe(param_2);
    return uVar1;
  }
  return 0xffffffea;
}



/* ===== rkisp_isp_sd_s_power @ 00013274 size=100 ===== */

int rkisp_isp_sd_s_power(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 100);
  iVar2 = param_2;
  if (0 < *DAT_000132d8) {
    printk(DAT_000132e0,iVar1 + 0x10,DAT_000132dc,param_2,param_1,param_2);
  }
  if (param_2 == 0) {
    iVar1 = __pm_runtime_idle(*(undefined4 *)(iVar1 + -0x8c),4);
  }
  else {
    if (0x3f < *(uint *)(iVar1 + 0x970c)) {
      *(undefined4 *)(iVar1 + 0x9a64) = 0;
      *(undefined4 *)(iVar1 + 0x9a60) = 0;
    }
    iVar1 = __pm_runtime_resume(*(undefined4 *)(iVar1 + -0x8c),4);
  }
  if (iVar1 < 0) {
    printk(DAT_000132e4,param_1 + 0x74,DAT_000132dc,param_2,iVar1,iVar2);
  }
  return iVar1;
}



/* ===== rkisp_get_info @ 000132e8 size=160 ===== */

void rkisp_get_info(int param_1,uint *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint local_a4 [5];
  byte local_90;
  int local_1c;
  
  piVar1 = DAT_00013388;
  local_1c = *DAT_00013388;
  if ((*(uint *)(param_1 + 0x99e0) & 0x200) == 0) {
    iVar3 = rkisp_csi_get_hdr_cfg(param_1,local_a4);
    if (iVar3 != 0) goto LAB_00013360;
    bVar2 = 0;
    if (local_a4[0] != 7) goto LAB_00013378;
    if (0x13 < local_90) {
      local_90 = 0x14;
    }
LAB_0001331a:
    uVar4 = 1 << (local_a4[0] & 0xff);
    if ((uVar4 & 800) == 0) {
      if ((uVar4 & 0x3040) == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = 4;
      }
    }
    else {
      uVar4 = 2;
    }
  }
  else {
    local_a4[0] = *(uint *)(param_1 + 0x9b1c);
    bVar2 = *(byte *)(param_1 + 0x982e);
LAB_00013378:
    local_90 = bVar2;
    if (local_a4[0] < 0xe) goto LAB_0001331a;
    uVar4 = 1;
  }
  *(byte *)(param_2 + 3) = local_90;
  if (local_90 != 0) {
    uVar4 = 8;
  }
  if (*(char *)(param_1 + 0xe036) != '\0') {
    uVar4 = uVar4 | 0x10000000;
  }
  *param_2 = uVar4;
  uVar4 = *(uint *)(param_1 + 0xe3c);
  if (*(char *)(*(int *)(param_1 + 0x94) + 0x7be) != '\0') {
    uVar4 = (uVar4 >> 1) + 0x80;
  }
  param_2[1] = uVar4;
  iVar3 = 0;
  param_2[2] = *(uint *)(param_1 + 0xe40);
LAB_00013360:
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}



/* ===== rkisp_restart_monitor @ 0001338c size=584 ===== */

void rkisp_restart_monitor(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_30;
  int *local_2c;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
LAB_00013398:
    *(undefined1 *)(param_1 + 0x25) = 0;
    return;
  }
  iVar11 = *(int *)(param_1 + -4);
  iVar13 = 5;
  _dev_info(*(undefined4 *)(iVar11 + 8),DAT_000135d8,DAT_000135d4);
  iVar2 = DAT_000135ec;
  local_30 = 0;
LAB_000133be:
  do {
    if (*(int *)(param_1 + 0x20) << 0x17 < 0) {
      return;
    }
    if (*(char *)(param_1 + 0x25) == '\0') {
      return;
    }
    iVar3 = wait_for_completion_timeout(param_1 + 0x10,0x1e);
    uVar8 = *(uint *)(param_1 + 0x20);
    if (-1 < (int)(uVar8 << 0x17)) {
      if (iVar3 == 0) {
        if ((uVar8 & 0x801) == 1) goto LAB_000133e2;
      }
      else if (-1 < (int)(uVar8 << 0x15)) goto LAB_000133e2;
      _dev_info(*(undefined4 *)(iVar11 + 8),DAT_000135dc,*(undefined4 *)(iVar11 + 0xc0),uVar8,
                *(undefined1 *)(param_1 + 0x24),local_30);
      bVar1 = *(byte *)(param_1 + 0x24);
      *(byte *)(param_1 + 0x24) = bVar1 + 1;
      if ((5 < bVar1) || (*(char *)(iVar11 + 0x7bd) != '\0')) goto LAB_00013398;
      for (iVar3 = 0; iVar3 < *(int *)(iVar11 + 0xb8); iVar3 = iVar3 + 1) {
        iVar6 = *(int *)(iVar11 + (iVar3 + 0x16) * 4);
        if ((iVar6 != 0) && ((*(uint *)(iVar6 + 0x99ec) & 0xb0) != 0)) {
          if (-1 < *(int *)(iVar6 + 0x99e0) << 0x16) break;
          iVar3 = *(int *)(iVar6 + 0x976c);
          while (iVar3 = iVar3 + -1, -1 < iVar3) {
            iVar12 = *(int *)(iVar6 + 0x9778 + iVar3 * 4);
            if (((iVar12 != 0) && (iVar4 = *(int *)(*(int *)(iVar12 + 0x68) + 0xc), iVar4 != 0)) &&
               (pcVar10 = *(code **)(iVar4 + 0x28), pcVar10 != (code *)0x0)) {
              iVar4 = *(int *)(iVar2 + 0xc);
              if ((iVar4 == 0) || (pcVar7 = *(code **)(iVar4 + 0x28), pcVar7 == (code *)0x0)) {
                (*pcVar10)(iVar12,0);
              }
              else {
                (*pcVar7)();
              }
            }
          }
          *(undefined4 *)(iVar6 + 0x95d8) = 0;
          *(undefined4 *)(iVar6 + 0x95dc) = 0;
          *(undefined4 *)(iVar6 + 0x95e0) = 0;
          *(undefined2 *)(iVar6 + 0x95e4) = 0;
          *(undefined1 *)(iVar6 + 0x95e6) = 0;
          iVar3 = 3;
        }
      }
      iVar3 = (**(code **)(param_1 + 0x1c))
                        (*(undefined4 *)(iVar11 + (*(int *)(iVar11 + 0xc0) + 0x16) * 4));
      if (iVar3 != 0) goto LAB_00013398;
      local_2c = (int *)(iVar11 + 0x58);
      for (iVar3 = 0; iVar3 < *(int *)(iVar11 + 0xb8); iVar3 = iVar3 + 1) {
        iVar6 = *local_2c;
        if ((iVar6 != 0) && ((*(uint *)(iVar6 + 0x99ec) & 0xb0) != 0)) {
          if (-1 < *(int *)(iVar6 + 0x99e0) << 0x16) break;
          if ((int)(*(uint *)(iVar6 + 0x99ec) << 0x1b) < 0) {
            rkisp_write(iVar6,0x1c30,DAT_000135e0,1);
            rkisp_write(iVar6,0x1c34,DAT_000135e4,1);
            rkisp_write(iVar6,0x1c38,DAT_000135e8,1);
          }
          *(undefined4 *)(iVar6 + 0x8e58) = 0;
          *(uint *)(iVar6 + 0x99e0) = *(uint *)(iVar6 + 0x99e0) & 0xfffff7ff;
          piVar5 = (int *)(iVar6 + 0x9778);
          for (iVar12 = 0; iVar12 < *(int *)(iVar6 + 0x976c); iVar12 = iVar12 + 1) {
            iVar4 = *piVar5;
            if (((iVar4 != 0) && (iVar9 = *(int *)(*(int *)(iVar4 + 0x68) + 0xc), iVar9 != 0)) &&
               (pcVar10 = *(code **)(iVar9 + 0x28), pcVar10 != (code *)0x0)) {
              iVar9 = *(int *)(iVar2 + 0xc);
              if ((iVar9 == 0) || (pcVar7 = *(code **)(iVar9 + 0x28), pcVar7 == (code *)0x0)) {
                (*pcVar10)(iVar4,1);
              }
              else {
                (*pcVar7)();
              }
            }
            piVar5 = piVar5 + 1;
          }
        }
        local_2c = local_2c + 1;
      }
      goto LAB_000133be;
    }
LAB_000133e2:
    piVar5 = (int *)(iVar11 + 0x58);
    for (iVar3 = 0; iVar3 < *(int *)(iVar11 + 0xb8); iVar3 = iVar3 + 1) {
      iVar6 = *piVar5;
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x99ec) << 0x1b < 0)) {
        if (-1 < *(int *)(iVar6 + 0x99e0) << 0x16) break;
        if (*(int *)(iVar6 + 0x8e5c) == local_30) {
          if (local_30 != 0) {
            if (iVar13 == 0) {
              iVar13 = -1;
              *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x800;
            }
            else {
              iVar13 = iVar13 + -1;
            }
          }
        }
        else {
          iVar13 = 5;
          local_30 = *(int *)(iVar6 + 0x8e5c);
        }
      }
      piVar5 = piVar5 + 1;
    }
  } while( true );
}



/* ===== rkisp_isp_sd_get_fmt @ 000135f0 size=114 ===== */

undefined4 rkisp_isp_sd_get_fmt(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_3 == (int *)0x0) || (uVar4 = param_3[1], (uVar4 & 0xfffffffd) != 0)) {
LAB_0001365c:
    uVar1 = 0xffffffea;
  }
  else {
    if (*param_3 == 0) {
      if (param_2 == 0) goto LAB_0001365c;
      uVar6 = 0;
      if (uVar4 < *(ushort *)(param_1 + 0x20)) {
        uVar6 = uVar4;
      }
      param_3 = (int *)(uVar6 * 0x50 + param_2);
    }
    else {
      param_3 = param_3 + 2;
    }
    if (uVar4 == 0) {
      iVar2 = *(int *)(param_1 + 0x1b0);
      iVar3 = *(int *)(param_1 + 0x1b4);
      iVar5 = *(int *)(param_1 + 0x1b8);
      *param_3 = *(int *)(param_1 + 0x1ac);
      param_3[1] = iVar2;
      param_3[2] = iVar3;
      param_3[3] = iVar5;
      iVar2 = *(int *)(param_1 + 0x1c0);
      iVar3 = *(int *)(param_1 + 0x1c4);
      iVar5 = *(int *)(param_1 + 0x1c8);
      param_3[4] = *(int *)(param_1 + 0x1bc);
      param_3[5] = iVar2;
      param_3[6] = iVar3;
      param_3[7] = iVar5;
      iVar2 = *(int *)(param_1 + 0x1d0);
      iVar3 = *(int *)(param_1 + 0x1d4);
      iVar5 = *(int *)(param_1 + 0x1d8);
      param_3[8] = *(int *)(param_1 + 0x1cc);
      param_3[9] = iVar2;
      param_3[10] = iVar3;
      param_3[0xb] = iVar5;
    }
    else if (uVar4 == 2) {
      param_3[2] = *(int *)(param_1 + 0x214);
      *param_3 = *(int *)(param_1 + 0x224);
      param_3[1] = *(int *)(param_1 + 0x228);
      *(short *)((int)param_3 + 0x16) = (short)*(undefined4 *)(param_1 + 0x234);
      param_3[4] = *(int *)(param_1 + 0x238);
    }
    uVar1 = 0;
    param_3[3] = 1;
  }
  return uVar1;
}



/* ===== rkisp_stop_3a_run @ 00013662 size=224 ===== */

void rkisp_stop_3a_run(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_bc [20];
  undefined4 local_a8;
  undefined1 auStack_a4 [136];
  int local_1c;
  
  piVar1 = DAT_00013744;
  local_1c = *DAT_00013744;
  memset(auStack_a4,0,0x84);
  local_a8 = DAT_00013748;
  if ((((*(char *)(param_1 + 0xe20) == '\x02') && (*(char *)(param_1 + 0xe48) == '\0')) &&
      (*(int *)(param_1 + 0x97a4) != 0x40)) && (*(char *)(param_1 + 0x7178) != '\0')) {
    if (*(char *)(*(int *)(param_1 + 0x94) + 0x7bd) == '\0') {
      v4l2_event_queue(param_1 + 0x6858,&local_a8);
      _cond_resched();
      if (*(char *)(param_1 + 0x6c6c) == '\0') {
        iVar2 = 300;
      }
      else {
        init_wait_entry(auStack_bc,0);
        iVar2 = 300;
        while( true ) {
          prepare_to_wait_event(param_1 + 0x9a08,auStack_bc,2);
          if (*(char *)(param_1 + 0x6c6c) == '\0') break;
          if (iVar2 == 0) goto LAB_000136ea;
          iVar2 = schedule_timeout(iVar2);
        }
        if (iVar2 == 0) {
          iVar2 = 1;
        }
LAB_000136ea:
        finish_wait(param_1 + 0x9a08,auStack_bc);
        if (iVar2 == 0) {
          printk(DAT_0001374c,param_1 + 0xa8);
          goto LAB_000136fe;
        }
      }
      if (0 < *DAT_00013750) {
        iVar2 = jiffies_to_msecs(iVar2);
        printk(DAT_00013754,param_1 + 0xa8,1000 - iVar2);
      }
    }
  }
LAB_000136fe:
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== rkisp_align_sensor_resolution @ 00013758 size=712 ===== */

undefined4 rkisp_align_sensor_resolution(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  undefined4 local_68 [2];
  undefined4 local_60;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  
  uVar3 = *(uint *)(param_1 + 0xde4);
  uVar10 = *(uint *)(param_1 + 0xddc);
  uVar4 = *(uint *)(param_1 + 0xde0);
  if (param_2 == (uint *)0x0) {
    return 0xffffffea;
  }
  memset(local_68,0,0x40);
  uVar5 = *(uint *)(param_1 + 0x97a4);
  if (uVar5 == 0x50) {
    uVar5 = 0x1000;
    iVar1 = 0xc00;
  }
  else if (uVar5 < 0x51) {
    if (uVar5 == 0x20) {
      uVar5 = 0xcc0;
      iVar1 = 0x990;
    }
    else if (uVar5 == 0x30) {
      uVar5 = 0x780;
      iVar1 = 0x438;
    }
    else {
      uVar5 = 0x1140;
      iVar1 = 0xcf0;
    }
  }
  else if (uVar5 == 0x70) {
    uVar5 = 0xc00;
    iVar1 = 0x6c0;
  }
  else if (uVar5 == 0x80) {
    uVar5 = 0x1080;
    iVar1 = 0xc40;
  }
  else if (uVar5 == 0x60) {
    if (*(char *)(*(int *)(param_1 + 0x94) + 0x7be) == '\0') {
      uVar5 = 0x1240;
      iVar1 = 0xdb0;
    }
    else {
      uVar5 = 0x2000;
      iVar1 = 0x1800;
    }
  }
  else {
    uVar5 = 0x1140;
    iVar1 = 0xcf0;
  }
  uVar8 = uVar10;
  if (uVar10 < 0x110) {
    uVar8 = 0x110;
  }
  if (uVar5 <= uVar8) {
    uVar8 = uVar5;
  }
  uVar2 = __aeabi_uidiv(uVar5 * iVar1,uVar8);
  uVar5 = uVar4;
  if (uVar4 < 0x100) {
    uVar5 = 0x100;
  }
  if (uVar2 <= uVar5) {
    uVar5 = uVar2;
  }
  if ((*(int **)(param_1 + 0x318) != (int *)0x0) &&
     (iVar1 = **(int **)(param_1 + 0x318), iVar1 != 0)) {
    local_68[0] = 1;
    iVar6 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
    if ((iVar6 != 0) && (pcVar7 = *(code **)(iVar6 + 0x18), pcVar7 != (code *)0x0)) {
      if ((*(int *)(DAT_00013a20 + 0x1c) == 0) ||
         (pcVar11 = *(code **)(*(int *)(DAT_00013a20 + 0x1c) + 0x18), pcVar11 == (code *)0x0)) {
        iVar6 = (*pcVar7)(iVar1,0,local_68);
      }
      else {
        iVar6 = (*pcVar11)(iVar1,0,local_68);
      }
      if (iVar6 == 0) {
        if (param_3 == 0) {
          *param_2 = 0;
          param_2[1] = 0;
          if (local_50 < 0x110) {
            local_50 = 0x110;
          }
          if (uVar8 < local_50) {
            param_2[2] = uVar8;
          }
          else {
            param_2[2] = local_50;
          }
          if (local_4c < 0x100) {
            local_4c = 0x100;
          }
          goto LAB_00013910;
        }
        goto LAB_00013830;
      }
    }
    local_60 = 2;
    iVar6 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
    if ((iVar6 != 0) && (pcVar7 = *(code **)(iVar6 + 0x18), pcVar7 != (code *)0x0)) {
      if ((*(int *)(DAT_00013a20 + 0x1c) == 0) ||
         (pcVar11 = *(code **)(*(int *)(DAT_00013a20 + 0x1c) + 0x18), pcVar11 == (code *)0x0)) {
        iVar1 = (*pcVar7)(iVar1,0,local_68);
      }
      else {
        iVar1 = (*pcVar11)(iVar1,0,local_68);
      }
      if (iVar1 == 0) {
        uVar4 = local_50 + 1 & 0xfffffffe;
        uVar3 = local_58 + 1U & 0xfffffffe;
        if (uVar8 <= uVar3) {
          uVar3 = uVar8;
        }
        *param_2 = uVar3;
        if (uVar5 <= local_54) {
          local_54 = uVar5;
        }
        param_2[1] = local_54;
        uVar5 = uVar5 - local_54;
        if (uVar4 < 0x110) {
          uVar4 = 0x110;
        }
        if (uVar8 - uVar3 < uVar4) {
          param_2[2] = uVar8 - uVar3;
        }
        else {
          param_2[2] = uVar4;
        }
        if (local_4c < 0x100) {
          local_4c = 0x100;
        }
LAB_00013910:
        if (local_4c <= uVar5) {
          param_2[3] = local_4c;
          return 0;
        }
        param_2[3] = uVar5;
        return 0;
      }
    }
  }
  if (param_3 == 0) {
    if ((uVar3 & 0xf000) != 0x3000) {
      *param_2 = 0;
      param_2[1] = 0;
      if (0x113f < uVar10) {
        uVar10 = 0x1140;
      }
      param_2[2] = uVar10;
      if (0xcef < uVar4) {
        uVar4 = 0xcf0;
      }
      param_2[3] = uVar4;
      return 0;
    }
    param_2[3] = uVar5 & 0xfffffff8;
    *param_2 = uVar10 - (uVar8 & 0xfffffff0) >> 1 & 0xfffffffc;
    param_2[1] = uVar4 - (uVar5 & 0xfffffff8) >> 1;
    param_2[2] = uVar8 & 0xfffffff0;
    return 0;
  }
LAB_00013830:
  uVar10 = param_2[2];
  uVar4 = *param_2;
  if (uVar8 <= *param_2) {
    uVar4 = uVar8;
  }
  *param_2 = uVar4;
  uVar2 = param_2[1];
  if (uVar5 <= param_2[1]) {
    uVar2 = uVar5;
  }
  param_2[1] = uVar2;
  if (uVar10 < 0x110) {
    uVar10 = 0x110;
  }
  uVar9 = uVar8 - uVar4;
  if (uVar10 <= uVar8 - uVar4) {
    uVar9 = uVar10;
  }
  uVar10 = param_2[3];
  param_2[2] = uVar9;
  if (uVar10 < 0x100) {
    uVar10 = 0x100;
  }
  uVar8 = uVar5 - uVar2;
  if (uVar10 <= uVar5 - uVar2) {
    uVar8 = uVar10;
  }
  param_2[3] = uVar8;
  if ((uVar3 & 0xf000) == 0x3000) {
    if (((uVar9 & 0xfffffff0) != uVar9) || (uVar8 != (uVar8 & 0xfffffff8))) {
      printk(DAT_00013a24,param_1 + 0xa8,uVar4 & 0xfffffffc,uVar2,uVar9 & 0xfffffff0,
             uVar8 & 0xfffffff8);
    }
  }
  return 0;
}



/* ===== rkisp_media_entity_remote_pad @ 00013a28 size=106 ===== */

int rkisp_media_entity_remote_pad(int param_1)

{
  undefined4 *puVar1;
  char *__s2;
  char *__s2_00;
  char *__s2_01;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char *__s1;
  
  __s2_01 = DAT_00013a9c;
  __s2_00 = DAT_00013a98;
  __s2 = DAT_00013a94;
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + 0x30);
  puVar3 = (undefined4 *)*puVar1;
  do {
    if (puVar3 == puVar1) {
      return 0;
    }
    if ((int)(puVar3[5] << 0x1f) < 0) {
      iVar4 = puVar3[2];
      __s1 = *(char **)(*(int *)(iVar4 + 0x10) + 0x10);
      iVar2 = strcmp(__s1,__s2);
      if (((iVar2 != 0) && (iVar2 = strcmp(__s1,__s2_00), iVar2 != 0)) &&
         (iVar2 = strcmp(__s1,__s2_01), iVar2 != 0)) {
        if (iVar4 == param_1) {
          return puVar3[3];
        }
        if (puVar3[3] == param_1) {
          return iVar4;
        }
      }
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}



/* ===== get_remote_sensor @ 00013aa0 size=52 ===== */

undefined4 get_remote_sensor(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 0x2c) != 0) && (iVar1 = rkisp_media_entity_remote_pad(), iVar1 != 0)) {
    iVar3 = *(int *)(iVar1 + 0x10);
    iVar2 = strcmp(*(char **)(iVar3 + 0x10),DAT_00013ad4);
    if ((iVar2 != 0) ||
       ((*(int *)(iVar3 + 0x2c) != 0 && (iVar1 = media_entity_remote_pad(), iVar1 != 0)))) {
      return *(undefined4 *)(iVar1 + 0x10);
    }
  }
  return 0;
}



/* ===== rkisp_subdev_link_setup @ 00013ad8 size=960 ===== */

undefined4 rkisp_subdev_link_setup(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  int local_2c;
  uint local_28;
  uint local_24;
  
  if ((*(ushort *)(param_2 + 0x14) & 0xfffd) != 0) {
    return 0;
  }
  if ((param_1 == 0) || (iVar7 = *(int *)(param_1 + 100), iVar7 == 0x98)) {
    return 0xffffffed;
  }
  iVar2 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  local_24 = param_4;
  if (*(char *)(*(int *)(iVar7 + -4) + 0x7c0) != '\0') {
    if ((*(uint *)(iVar7 + 0x9954) == 0) || ((*(uint *)(iVar7 + 0x9954) & 0xfffffff8) == 0)) {
LAB_00013b36:
      printk(DAT_00013db0,param_1 + 0x74);
      return 0xffffffea;
    }
    pcVar10 = *(char **)(*(int *)(param_3 + 0x10) + 0x10);
    iVar1 = strcmp(pcVar10,DAT_00013da8);
    if ((iVar1 == 0) || (pcVar10 = strstr(pcVar10,DAT_00013dac), pcVar10 != (char *)0x0))
    goto LAB_00013b36;
  }
  pcVar10 = *(char **)(*(int *)(param_3 + 0x10) + 0x10);
  iVar1 = strcmp(pcVar10,DAT_00013db4);
  if (iVar1 == 0) {
    iVar1 = iVar7 + 0x70f0;
    if ((param_4 & 1) == 0) {
      if (*(int *)(iVar7 + 0x280) != 0) {
        *(undefined4 *)(iVar7 + 0x280) = 0;
      }
      uVar4 = 0;
    }
    else {
      if ((*(uint *)(iVar7 + 0x9954) & 0xffffffbf) != 0) goto LAB_00013e16;
      uVar4 = 0x40;
    }
    *(undefined4 *)(iVar7 + 0x9954) = uVar4;
    if (iVar1 != 0) {
LAB_00013cba:
      *(byte *)(iVar1 + 0x66b) = (byte)param_4 & 1;
      goto LAB_00013bc2;
    }
  }
  else {
    iVar1 = strcmp(pcVar10,DAT_00013da8);
    if (iVar1 == 0) {
      uVar5 = *(uint *)(iVar7 + 0x9954);
      if ((param_4 & 1) == 0) {
        if (*(int *)(iVar7 + 0x280) != 0) {
          *(undefined4 *)(iVar7 + 0x280) = 0;
        }
        uVar5 = uVar5 & 0xffffffef;
LAB_00013c7e:
        *(uint *)(iVar7 + 0x9954) = uVar5;
      }
      else {
        if ((uVar5 & 0xfffffee8) != 0) goto LAB_00013e16;
        *(uint *)(iVar7 + 0x9954) = uVar5 | 0x10;
      }
      goto LAB_00013bc2;
    }
    iVar1 = strcmp(pcVar10,DAT_00013dc8);
    if (iVar1 == 0) {
      iVar1 = iVar7 + 0x77b0;
      uVar5 = *(uint *)(iVar7 + 0x9954);
      if ((int)(param_4 << 0x1f) < 0) {
        if ((uVar5 & 0xfffffee8) != 0) goto LAB_00013e16;
        uVar5 = uVar5 | 1;
      }
      else {
        uVar5 = uVar5 & 0xfffffffe;
      }
LAB_00013cb4:
      *(uint *)(iVar7 + 0x9954) = uVar5;
LAB_00013cb6:
      if (iVar1 != 0) goto LAB_00013cba;
    }
    else {
      iVar1 = strcmp(pcVar10,DAT_00013dcc);
      if (iVar1 == 0) {
        iVar1 = iVar7 + 0x7e70;
        uVar5 = *(uint *)(iVar7 + 0x9954);
        if ((int)(param_4 << 0x1f) < 0) {
          if ((uVar5 & 0xfffffee8) != 0) goto LAB_00013e16;
          uVar5 = uVar5 | 2;
        }
        else {
          uVar5 = uVar5 & 0xfffffffd;
        }
        goto LAB_00013cb4;
      }
      iVar1 = strcmp(pcVar10,DAT_00013dd0);
      if (iVar1 == 0) {
        iVar1 = iVar7 + 0x8530;
        uVar5 = *(uint *)(iVar7 + 0x9954);
        if ((int)(param_4 << 0x1f) < 0) {
          if ((uVar5 & 0xfffffee8) != 0) goto LAB_00013e16;
          uVar5 = uVar5 | 4;
        }
        else {
          uVar5 = uVar5 & 0xfffffffb;
        }
        goto LAB_00013cb4;
      }
      iVar1 = strcmp(pcVar10,DAT_00013dd4);
      if (iVar1 == 0) {
        iVar1 = iVar7 + 0x3680;
        goto LAB_00013cb6;
      }
      iVar1 = strcmp(pcVar10,DAT_00013dd8);
      if (iVar1 == 0) {
        iVar1 = iVar7 + 0x3d40;
        goto LAB_00013cb6;
      }
      iVar1 = strcmp(pcVar10,DAT_00013ddc);
      if (iVar1 == 0) {
        iVar1 = iVar7 + 0x4400;
        goto LAB_00013cb6;
      }
      iVar1 = strcmp(pcVar10,DAT_00013de0);
      if (iVar1 == 0) {
        iVar1 = iVar7 + 0x4a68;
LAB_00013d72:
        iVar1 = iVar1 + 0x58;
        goto LAB_00013cb6;
      }
      iVar1 = strcmp(pcVar10,DAT_00013de4);
      if (iVar1 == 0) {
        iVar1 = iVar7 + 0x5180;
        goto LAB_00013cb6;
      }
      iVar1 = strcmp(pcVar10,DAT_00013de8);
      if (iVar1 == 0) {
        iVar1 = iVar7 + 0x57e8;
        goto LAB_00013d72;
      }
      iVar1 = strcmp(pcVar10,DAT_00013dec);
      if (iVar1 == 0) {
        iVar1 = iVar7 + 0x14c0;
        goto LAB_00013cb6;
      }
      iVar1 = strcmp(pcVar10,DAT_00013ee4);
      uVar11 = param_4 & 1;
      if (iVar1 == 0) {
        iVar1 = iVar7 + 0xe00;
        if ((uVar11 != 0) && (*(char *)(iVar7 + 0x8f34) != '\0')) {
LAB_00013e16:
          printk(DAT_00013ee8,param_1 + 0x74,*(undefined4 *)(*(int *)(param_2 + 0x10) + 0x10),
                 pcVar10,iVar2);
          return 0xffffffea;
        }
        goto LAB_00013cb6;
      }
      iVar1 = strcmp(pcVar10,DAT_00013eec);
      if (iVar1 == 0) {
        if ((uVar11 != 0) && (*(char *)(iVar7 + 0x146b) != '\0')) goto LAB_00013e16;
        *(byte *)(iVar7 + 0x8f34) = (byte)param_4 & 1;
      }
      else {
        iVar1 = strcmp(pcVar10,DAT_00013ef0);
        uVar9 = *(uint *)(iVar7 + 0x9954);
        if (iVar1 == 0) {
          uVar5 = uVar9 & 0xffffff7f;
          if (uVar11 == 0) {
            if (*(int *)(iVar7 + 0x280) != 0) {
              *(undefined4 *)(iVar7 + 0x280) = 0;
            }
            goto LAB_00013c7e;
          }
          if (uVar5 != 0) goto LAB_00013e16;
          uVar9 = uVar9 | 0x80;
        }
        else {
          pcVar3 = strstr(pcVar10,DAT_00013ef4);
          if (pcVar3 == (char *)0x0) {
            if (uVar11 == 0) {
              if (*(int *)(iVar7 + 0x280) != 0) {
                *(undefined4 *)(iVar7 + 0x280) = 0;
              }
              goto LAB_00013bc2;
            }
            if ((uVar9 & 0xffffffdf) != 0) goto LAB_00013e16;
            uVar9 = uVar9 | 0x20;
          }
          else if (uVar11 == 0) {
            uVar9 = uVar9 & 0xfffffeff;
          }
          else {
            if ((uVar9 & 0xfffffef8) != 0) goto LAB_00013e16;
            uVar9 = uVar9 | 0x100;
          }
        }
        *(uint *)(iVar7 + 0x9954) = uVar9;
      }
    }
LAB_00013bc2:
    if ((*(uint *)(iVar7 + 0x9954) & 7) != 0) {
      *(undefined4 *)(iVar7 + 0x8bf0) = 1;
      *(undefined1 *)(iVar7 + 0xdf9f) = 0;
      goto LAB_00013bdc;
    }
  }
  *(undefined4 *)(iVar7 + 0x8bf0) = 0;
LAB_00013bdc:
  if (*(int *)(iVar7 + 0x9954) << 0x17 < 0) {
    iVar2 = get_remote_sensor(param_1);
    local_24 = 0;
    local_2c = iVar7 + -0x88;
    local_28 = (uint)((*(uint *)(iVar7 + 0x9954) & 7) != 0);
    if ((*(uint *)(iVar7 + 0x970c) < 0x60) || (*(char *)(*(int *)(iVar7 + -4) + 0x7b9) == '\0')) {
      local_28 = 1;
    }
    if (((iVar2 != 0) && (**(int **)(iVar2 + 0x68) != 0)) &&
       (pcVar6 = *(code **)(**(int **)(iVar2 + 0x68) + 0x18), pcVar6 != (code *)0x0)) {
      if ((*DAT_00013db8 == 0) || (pcVar8 = *(code **)(*DAT_00013db8 + 0x18), pcVar8 == (code *)0x0)
         ) {
        (*pcVar6)(iVar2,DAT_00013ef8,&local_2c);
      }
      else {
        (*pcVar8)(iVar2,DAT_00013dbc,&local_2c);
      }
    }
    *(undefined2 *)(iVar7 + 0xdfa2) = (undefined2)local_24;
  }
  *(bool *)(iVar7 + 0xdf9d) = *(int *)(iVar7 + 0x9954) != 0;
  if (0 < *DAT_00013dc0) {
    printk(DAT_00013dc4,iVar7 + 0x10);
  }
  return 0;
}



/* ===== rkisp_update_sensor_info @ 00013efc size=788 ===== */

int rkisp_update_sensor_info(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  byte *local_50;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar1 = get_remote_sensor(param_1 + 0xc30);
  if (iVar1 != 0) {
    for (iVar9 = 0; iVar9 < *(int *)(param_1 + 0xc2c); iVar9 = iVar9 + 1) {
      iVar10 = iVar9 * 0x244;
      iVar8 = *(int *)(param_1 + 0x31c + iVar10);
      if (iVar1 == iVar8) {
        iVar4 = param_1 + iVar10 + 0x31c;
        if (iVar4 == 0) {
          return -0x13;
        }
        iVar5 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
        if ((iVar5 != 0) && (pcVar6 = *(code **)(iVar5 + 0x3c), pcVar6 != (code *)0x0)) {
          if ((DAT_00014214[7] == 0) ||
             (pcVar3 = *(code **)(DAT_00014214[7] + 0x3c), pcVar3 == (code *)0x0)) {
            iVar1 = (*pcVar6)(iVar8,0,iVar10 + 800 + param_1);
          }
          else {
            iVar1 = (*pcVar3)(iVar1,0);
          }
          if ((iVar1 != 0) && (iVar1 != DAT_00014210)) {
            return iVar1;
          }
        }
        iVar8 = iVar9 * 0x244 + param_1;
        iVar1 = *(int *)(iVar8 + 0x31c);
        *(undefined4 *)(iVar8 + 0x358) = 1;
        *(undefined4 *)(iVar8 + 0x35c) = 0;
        if (iVar1 == 0) {
          return -0x13;
        }
        iVar5 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
        iVar8 = DAT_00014210;
        if ((iVar5 != 0) && (pcVar6 = *(code **)(iVar5 + 0x10), pcVar6 != (code *)0x0)) {
          if ((DAT_00014214[7] == 0) ||
             (pcVar3 = *(code **)(DAT_00014214[7] + 0x10), pcVar3 == (code *)0x0)) {
            iVar1 = (*pcVar6)(iVar1,iVar10 + 0x510 + param_1,iVar10 + 0x358 + param_1);
          }
          else {
            iVar1 = (*pcVar3)();
          }
          iVar8 = 0;
          if ((iVar1 != 0) && (iVar8 = DAT_00014210, iVar1 != DAT_00014210)) {
            return iVar1;
          }
        }
        iVar1 = iVar9 * 0x244 + param_1;
        if ((*(int *)(iVar1 + 800) != 5) || (0x5f < *(uint *)(param_1 + 0x97a4))) goto LAB_00013fbc;
        iVar1 = get_remote_sensor(*(undefined4 *)(iVar1 + 0x31c));
        if (iVar1 == 0) {
          return -0x13;
        }
        iVar11 = param_1 + iVar10;
        iVar5 = 0;
        *(undefined4 *)(param_1 + 0x8e60) = 0;
        *(undefined1 *)(param_1 + 0x8e64) = 0;
        local_50 = (byte *)(param_1 + 0x8e60);
        goto LAB_00013fb2;
      }
    }
  }
  return -0x13;
LAB_00013fb2:
  if (*(int *)(param_1 + 0x8e54) + -1 <= iVar5) {
LAB_00013fbc:
    iVar1 = *(int *)(iVar9 * 0x244 + param_1 + 0x31c);
    if (((iVar1 != 0) && (iVar5 = *(int *)(*(int *)(iVar1 + 0x68) + 0xc), iVar5 != 0)) &&
       (pcVar6 = *(code **)(iVar5 + 0x30), pcVar6 != (code *)0x0)) {
      if ((DAT_00014214[3] == 0) ||
         (pcVar3 = *(code **)(DAT_00014214[3] + 0x30), pcVar3 == (code *)0x0)) {
        (*pcVar6)(iVar1,iVar10 + 0x328 + param_1);
      }
      else {
        (*pcVar3)();
      }
    }
    *(int *)(param_1 + 0x318) = iVar4;
    iVar1 = iVar9 * 0x244 + param_1;
    if (*(int *)(iVar1 + 0x32c) != 0) {
      iVar9 = *(int *)(param_1 + 0x9acc);
      iVar10 = *(int *)(param_1 + 0x94);
      uVar2 = __aeabi_uidiv(*(undefined4 *)(iVar1 + 0x330));
      *(undefined4 *)(iVar9 * 0x14 + iVar10 + 0x74) = uVar2;
      return iVar8;
    }
    return iVar8;
  }
  memset(&local_40,0,0x18);
  local_44 = iVar5;
  if ((**(int **)(iVar1 + 0x68) == 0) ||
     (pcVar6 = *(code **)(**(int **)(iVar1 + 0x68) + 0x18), pcVar6 == (code *)0x0)) {
LAB_000140aa:
    if (iVar5 != 0) {
      memcpy((void *)(iVar11 + 0x358),(void *)(iVar9 * 0x244 + param_1 + 0x358),0x58);
    }
  }
  else {
    if ((*DAT_00014214 == 0) || (pcVar3 = *(code **)(*DAT_00014214 + 0x18), pcVar3 == (code *)0x0))
    {
      iVar8 = (*pcVar6)(iVar1,DAT_00014220,&local_44);
    }
    else {
      iVar8 = (*pcVar3)(iVar1,DAT_00014220,&local_44);
    }
    if (iVar8 != 0) goto LAB_000140aa;
    *(undefined4 *)(iVar11 + 0x360) = local_3c;
    *(undefined4 *)(iVar11 + 0x364) = local_38;
    *(undefined4 *)(iVar11 + 0x368) = local_34;
  }
  uVar7 = *(uint *)(iVar11 + 0x368);
  if (uVar7 == 0x3008) {
LAB_000141fc:
    iVar8 = 0x2c;
  }
  else if (uVar7 < 0x3009) {
    if (uVar7 == 0x200a) goto LAB_000141b2;
    if (uVar7 < 0x200b) {
      if (uVar7 != 0x2001) {
        if ((uVar7 < 0x2001) || (uVar7 < 0x2006)) goto LAB_0001419a;
        iVar8 = 0x1e;
        goto LAB_000140e4;
      }
    }
    else {
      if (0x3002 < uVar7) {
        if (uVar7 != 0x3007) goto LAB_0001419a;
        goto LAB_000141b2;
      }
      if (uVar7 < 0x3001) {
        if (uVar7 != 0x2013) goto LAB_0001419a;
        goto LAB_000141fc;
      }
    }
LAB_000141ec:
    iVar8 = 0x2a;
  }
  else if (uVar7 < 0x3013) {
    if (0x300f < uVar7) goto LAB_000141fc;
    if ((uVar7 != 0x300a) && ((uVar7 < 0x300a || (uVar7 < 0x300e)))) goto LAB_0001419a;
LAB_000141b2:
    iVar8 = 0x2b;
  }
  else if (uVar7 == 0x5002) {
    iVar8 = 0x12;
  }
  else {
    if (uVar7 < 0x5003) {
      if (0x3014 < uVar7) goto LAB_0001419a;
      goto LAB_000141ec;
    }
    if (uVar7 != 0x5003) {
LAB_0001419a:
      printk(DAT_00014224,param_1 + 0xa8);
      return -0x16;
    }
    iVar8 = 0x2f;
  }
LAB_000140e4:
  if (local_40 == 0x40) {
    cVar12 = '\x02';
  }
  else if (local_40 == 0x80) {
    cVar12 = '\x03';
  }
  else {
    cVar12 = local_40 == 0x20;
  }
  *local_50 = (byte)iVar8 | cVar12 << 6;
  if (0 < *DAT_00014218) {
    printk(DAT_0001421c,param_1 + 0xa8,iVar5,cVar12,iVar8,*(undefined4 *)(iVar11 + 0x360),
           *(undefined4 *)(iVar11 + 0x364));
  }
  iVar5 = iVar5 + 1;
  iVar11 = iVar11 + 0x58;
  local_50 = local_50 + 1;
  goto LAB_00013fb2;
}



/* ===== rkisp_isp_sd_set_selection @ 00014228 size=490 ===== */

undefined4 rkisp_isp_sd_set_selection(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  
  iVar11 = *(int *)(param_1 + 100);
  if (((param_3 == (int *)0x0) || (uVar4 = param_3[1], (uVar4 & 0xfffffffd) != 0)) ||
     (param_3[2] != 0)) {
    return 0xffffffea;
  }
  if (*param_3 == 0) {
    if (param_2 == 0) {
      return 0xffffffea;
    }
    uVar7 = uVar4;
    if (*(ushort *)(param_1 + 0x20) <= uVar4) {
      uVar7 = 0;
    }
    puVar8 = (uint *)(uVar7 * 0x50 + param_2 + 0x30);
  }
  else {
    puVar8 = (uint *)(param_3 + 4);
  }
  uVar12 = *(uint *)(param_1 + 0x20c);
  uVar5 = *(uint *)(param_1 + 0x210);
  uVar7 = *puVar8 + 1 & 0xfffffffe;
  uVar6 = puVar8[2] + 1 & 0xfffffffe;
  *puVar8 = uVar7;
  puVar8[2] = uVar6;
  if (uVar4 == 0) {
    rkisp_update_sensor_info(iVar11 + -0x98);
    rkisp_align_sensor_resolution(iVar11 + -0x98,puVar8,1);
  }
  else if (uVar4 == 2) {
    if (uVar12 <= uVar7) {
      uVar7 = uVar12;
    }
    *puVar8 = uVar7;
    uVar4 = puVar8[1];
    if (uVar5 <= puVar8[1]) {
      uVar4 = uVar5;
    }
    puVar8[1] = uVar4;
    if (uVar6 < 0x110) {
      uVar6 = 0x110;
    }
    if (uVar12 - uVar7 < uVar6) {
      puVar8[2] = uVar12 - uVar7;
    }
    else {
      puVar8[2] = uVar6;
    }
    uVar7 = puVar8[3];
    if (uVar7 < 0x100) {
      uVar7 = 0x100;
    }
    if (uVar5 - uVar4 < uVar7) {
      puVar8[3] = uVar5 - uVar4;
    }
    else {
      puVar8[3] = uVar7;
    }
  }
  piVar1 = DAT_00014414;
  if (0 < *DAT_00014414) {
    printk(DAT_0001441c,iVar11 + 0x10,DAT_00014418,param_3[1],*puVar8,puVar8[1],puVar8[2],puVar8[3])
    ;
  }
  if (param_3[1] == 0) {
    uVar4 = puVar8[1];
    uVar7 = puVar8[2];
    uVar5 = puVar8[3];
    *(uint *)(param_1 + 0x204) = *puVar8;
    *(uint *)(param_1 + 0x208) = uVar4;
    *(uint *)(param_1 + 0x20c) = uVar7;
    *(uint *)(param_1 + 0x210) = uVar5;
    if (*(uint *)(iVar11 + 0x970c) < 0x40) goto LAB_000142f6;
    uVar4 = puVar8[1];
    uVar7 = puVar8[2];
    uVar5 = puVar8[3];
    *(uint *)(param_1 + 0x21c) = *puVar8;
    *(uint *)(param_1 + 0x220) = uVar4;
    *(uint *)(param_1 + 0x224) = uVar7;
    *(uint *)(param_1 + 0x228) = uVar5;
    *(undefined4 *)(param_1 + 0x21c) = 0;
    *(undefined4 *)(param_1 + 0x220) = 0;
    uVar4 = *(uint *)(param_1 + 0x21c);
    uVar7 = *(uint *)(param_1 + 0x220);
    uVar5 = *(uint *)(param_1 + 0x224);
    uVar6 = *(uint *)(param_1 + 0x228);
    puVar9 = (uint *)(iVar11 + 0x8e98);
  }
  else {
    puVar9 = (uint *)(param_1 + 0x21c);
    if (0x3f < *(uint *)(iVar11 + 0x970c)) {
      uVar4 = *(uint *)(param_1 + 0x220);
      uVar7 = *(uint *)(param_1 + 0x224);
      uVar5 = *(uint *)(param_1 + 0x228);
      *puVar8 = *puVar9;
      puVar8[1] = uVar4;
      puVar8[2] = uVar7;
      puVar8[3] = uVar5;
    }
    uVar4 = *puVar8;
    uVar7 = puVar8[1];
    uVar5 = puVar8[2];
    uVar6 = puVar8[3];
  }
  *puVar9 = uVar4;
  puVar9[1] = uVar7;
  puVar9[2] = uVar5;
  puVar9[3] = uVar6;
LAB_000142f6:
  uVar3 = DAT_00014424;
  uVar2 = DAT_00014420;
  piVar10 = (int *)(iVar11 + 0x13ec);
  uVar4 = 0;
  do {
    if ((uVar4 < 2) || (uVar4 - 6 < 2)) {
      if (0 < *piVar1) {
        printk(uVar3,iVar11 + 0x10,uVar2,uVar4,piVar10[2],piVar10[3],*piVar10,piVar10[1],puVar8[2],
               puVar8[3],*puVar8,puVar8[1]);
      }
      uVar7 = piVar10[2];
      uVar5 = puVar8[2];
      if (uVar5 < uVar7) {
        piVar10[2] = uVar5;
        *piVar10 = 0;
      }
      else if (uVar5 < *piVar10 + uVar7) {
        *piVar10 = uVar5 - uVar7;
      }
      uVar7 = piVar10[3];
      uVar5 = puVar8[3];
      if (uVar5 < uVar7) {
        piVar10[3] = uVar5;
        piVar10[1] = 0;
      }
      else if (uVar5 < piVar10[1] + uVar7) {
        piVar10[1] = uVar5 - uVar7;
      }
    }
    uVar4 = uVar4 + 1;
    piVar10 = piVar10 + 0x1b0;
  } while (uVar4 != 0xc);
  return 0;
}



/* ===== rkisp_mbus_pixelcode_to_v4l2 @ 00014428 size=180 ===== */

undefined4 rkisp_mbus_pixelcode_to_v4l2(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 == 0x300a) {
    return DAT_000144f0;
  }
  if (param_1 < 0x300b) {
    if (param_1 == 0x3001) {
      return DAT_000144f4;
    }
    if (param_1 < 0x3002) {
      if (param_1 == 0x200a) {
        return DAT_000144f8;
      }
      if (param_1 == 0x2013) {
        return DAT_000144fc;
      }
      uVar2 = 0x2001;
      uVar1 = DAT_000144dc;
    }
    else {
      if (param_1 == 0x3007) {
        return DAT_00014500;
      }
      if (param_1 == 0x3008) {
        return DAT_00014504;
      }
      uVar2 = 0x3002;
      uVar1 = DAT_000144e4;
    }
  }
  else {
    if (param_1 == 0x3012) {
      return DAT_00014508;
    }
    if (param_1 < 0x3013) {
      if (param_1 == 0x3010) {
        return DAT_0001450c;
      }
      if (0x3010 < param_1) {
        return DAT_00014510;
      }
      uVar2 = 0x300e;
      uVar1 = DAT_000144e8;
    }
    else {
      if (param_1 == 0x3014) {
        return DAT_00014514;
      }
      if (param_1 < 0x3014) {
        return DAT_00014518;
      }
      if (param_1 == 0x5002) {
        return DAT_0001451c;
      }
      uVar2 = 0x5003;
      uVar1 = DAT_000144ec;
    }
  }
  if (param_1 != uVar2) {
    uVar1 = DAT_000144e0;
  }
  return uVar1;
}



/* ===== rkisp_trigger_read_back @ 00014520 size=2066 ===== */

void rkisp_trigger_read_back(int param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined4 local_2c [2];
  
  iVar7 = *(int *)(param_1 + 0x94);
  uVar5 = *(uint *)(iVar7 + 0x7a8);
  iVar9 = param_1 + 0x6690;
  cVar1 = *(char *)(iVar7 + 0x7b4);
  *(undefined4 *)(iVar7 + 0xc0) = *(undefined4 *)(param_1 + 0x9acc);
  rkisp_dmarx_get_frame(param_1,local_2c,0,0,1);
  if ((*(char *)(iVar7 + 0x7bf) == '\0') || (param_4 == 0)) {
    if ((param_3 & 0x90) == 0) {
      if ((int)(param_3 << 0x1a) < 0) {
        iVar8 = 5;
        uVar3 = 5;
      }
      else if ((param_3 & 0x40) == 0) {
        iVar8 = *(int *)(param_1 + 0x9b1c);
        uVar3 = rkisp_read(param_1,0x3800);
        uVar3 = uVar3 & 0xf;
      }
      else {
        iVar8 = 6;
        uVar3 = 9;
      }
    }
    else {
      iVar8 = 4;
      uVar3 = 0;
    }
    rkisp_expander_config(param_1,0);
    if (((cVar1 != '\0') && ((~uVar5 & 0x8000000) != 0)) && ((uVar3 & 1) != 0)) {
      printk(DAT_00014908,param_1 + 0xa8);
      return;
    }
    bVar11 = *(int *)(param_1 + 0x9b1c) != iVar8;
    if (bVar11) {
      rkisp_unite_set_bits(param_1,0x3800,0xc,uVar3,0,*(undefined1 *)(iVar7 + 0x7be));
      *(undefined4 *)(param_1 + 0x9ad0) = 2;
    }
    uVar5 = (uint)bVar11;
    if (((*(int *)(param_1 + 0x97a4) == 0x40) && (*(int *)(param_1 + 0x8c88) == 1)) &&
       (param_4 == 0)) {
      if ((*(int *)(param_1 + 0x9b1c) != iVar8) && (*(char *)(param_1 + 0x8fcd) != '\0')) {
        iVar10 = *(int *)(param_1 + 0xe40);
        uVar3 = rkisp_read(param_1,0x880,0);
        if (iVar8 == 4) {
          iVar10 = iVar10 + 0x18;
          uVar3 = uVar3 | 1;
        }
        else {
          uVar3 = uVar3 & 0xfffffffe;
        }
        rkisp_write(param_1,0x880,uVar3,0);
        rkisp_write(param_1,0x414,iVar10,0);
        rkisp_write(param_1,0x5a0,iVar10,0);
      }
      *(int *)(param_1 + 0x9b1c) = iVar8;
      rkisp_rawrd_set_pic_size
                (param_1,*(undefined4 *)(param_1 + 0x8af4),*(undefined4 *)(param_1 + 0x8af8));
    }
    *(int *)(param_1 + 0x9b1c) = iVar8;
    rkisp_params_first_cfg(iVar9,param_1 + 0xe0c,*(undefined4 *)(param_1 + 0xe64));
    rkisp_params_cfg(iVar9,local_2c[0]);
    rkisp_config_cmsk(param_1);
    rkisp_stream_frame_start(param_1,0);
    if ((*(char *)(iVar7 + 0x7b9) == '\0') && (param_4 == 0)) {
      rkisp_update_regs(param_1,4,0x314);
      rkisp_update_regs(param_1,0x884,0x8d0);
      rkisp_update_regs(param_1,0x408,0x880);
      rkisp_update_regs(param_1,0x1004,0x1400);
      rkisp_update_regs(param_1,0xe04,0x1000);
      rkisp_update_regs(param_1,0xc04,0xe00);
      rkisp_update_regs(param_1,0x900,0xc00);
      rkisp_update_regs(param_1,0x1808,0x2200);
      rkisp_update_regs(param_1,0x1408,0x17fc);
      rkisp_update_regs(param_1,0x2224,0x5660);
      if ((*(int *)(param_1 + 0x97a4) == 0x40) &&
         ((iVar8 = rkisp_read(param_1,0x3c00,0), iVar8 << 0x1f < 0 ||
          (iVar8 = rkisp_read(param_1,0x3900,0), iVar8 << 0x1f < 0)))) {
        if (param_2 == 0) {
          param_2 = 1;
        }
        param_2 = param_2 & 0xff;
      }
      else if (*(int *)(param_1 + 0x97a4) == 0x50) {
        uVar4 = rkisp_read(param_1,0x1800,0);
        rkisp_set_bits(param_1,0x1800,0,uVar4,1);
        rkisp_write(param_1,0x1404,0x300000,1);
      }
      else {
        if (*(int *)(param_1 + 0x97a4) == 0x80) {
          rkisp_write(param_1,0x1004,0x10,1);
        }
        rkisp_unite_write(param_1,0x1404,0x10,1,*(undefined1 *)(iVar7 + 0x7be));
      }
      if (0x4f < *(uint *)(param_1 + 0x97a4)) {
        uVar5 = rkisp_read_reg_cache(param_1,0x408);
        if (*(int *)(param_1 + 0x97a4) == 0x80) {
          uVar3 = (*(byte *)(param_1 + 0xe03c) & 7) << 0x14;
        }
        else {
          uVar3 = (uint)*(byte *)(param_1 + 0xe03c) << 0x1e;
        }
        uVar3 = uVar5 | (*(byte *)(param_1 + 0xe03d) & 3) << 0x1c | uVar3;
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(uint *)(*(int *)(iVar7 + 0x10) + 0x408) = uVar3;
        if (*(char *)(iVar7 + 0x7be) != '\0') {
          DataSynchronizationBarrier(0xe);
          arm_heavy_mb();
          *(uint *)(*(int *)(iVar7 + 0x14) + 0x408) = uVar3;
        }
        if (1 < *DAT_0001490c) {
          printk(DAT_00014910,param_1 + 0xa8,*(undefined1 *)(param_1 + 0xe03c),
                 *(undefined1 *)(param_1 + 0xe03d),uVar3);
        }
      }
      uVar5 = 1;
    }
    if (*(uint *)(param_1 + 0x97a4) < 0x41) {
      bVar11 = param_2 != 1;
      if (param_2 < 2) {
        param_2 = 1;
        if (bVar11) goto LAB_0001493e;
        goto LAB_00014948;
      }
      param_2 = 2;
      *(int *)(param_1 + 0x9b18) = *(int *)(param_1 + 0x9b18) + 1;
    }
    else {
LAB_0001493e:
      if (*(int *)(param_1 + 0x9b20) == 0) {
        iVar8 = 0x9b10;
        param_2 = 0;
      }
      else {
        param_2 = 0;
LAB_00014948:
        iVar8 = 0x9b14;
      }
      *(int *)(param_1 + iVar8) = *(int *)(param_1 + iVar8) + 1;
    }
    *(int *)(param_1 + 0x9b0c) = *(int *)(param_1 + 0x9b0c) + 1;
    rkisp_params_cfgsram(iVar9);
    *(uint *)(param_1 + 0x7124) = param_2 + 1;
  }
  else {
    uVar5 = 0;
  }
  bVar2 = *(byte *)(iVar7 + 0x7bf);
  if ((bVar2 != 0) && (*(char *)(param_1 + 0xe039) == '\0')) {
    *(undefined1 *)(param_1 + 0x664d) = 0;
    if (*(int *)(param_1 + 0x9b20) == 0) {
      if (param_4 != 0) {
        iVar8 = *(int *)(param_1 + 0x94);
        rkisp_update_regs(param_1,0x1400);
        rkisp_update_regs(param_1,0x404);
        iVar9 = *(int *)(param_1 + 0x97a4);
        if (iVar9 == 0x50) {
          uVar4 = 0x3a80;
LAB_00014bd0:
          rkisp_update_regs(param_1,uVar4);
        }
        else {
          if (iVar9 == 0x60) {
            rkisp_update_regs(param_1,0x18c0);
            rkisp_update_regs(param_1,0x1600);
            rkisp_update_regs(param_1,0x2c00);
            uVar4 = 0x1c;
            goto LAB_00014bd0;
          }
          if (iVar9 == 0x70) {
            rkisp_update_regs(param_1,0x1600);
            rkisp_update_regs(param_1,0x16f0);
            rkisp_update_regs(param_1,0x16a0);
            uVar4 = 0x2c00;
            goto LAB_00014bd0;
          }
        }
        rkisp_unite_write(param_1,0x1404,0x10,1,*(undefined1 *)(iVar8 + 0x7be));
        uVar5 = param_4;
      }
    }
    else {
      iVar8 = *(int *)(param_1 + 0x94);
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(*(int *)(iVar8 + 0x10) + 0x1400) = 0x300000;
      iVar9 = *(int *)(param_1 + 0x97a4);
      if (iVar9 == 0x50) {
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        puVar6 = (undefined4 *)(*(int *)(iVar8 + 0x10) + 0x3a80);
LAB_000148b4:
        *puVar6 = 0;
      }
      else if (iVar9 == 0x60) {
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(undefined4 *)(*(int *)(iVar8 + 0x10) + 0x18c0) = 0;
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(undefined4 *)(*(int *)(iVar8 + 0x10) + 0x1600) = 0;
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(undefined4 *)(*(int *)(iVar8 + 0x10) + 0x2c00) = 0;
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(undefined4 *)(*(int *)(iVar8 + 0x10) + 0x1c) = 0xc;
        if (*(char *)(iVar8 + 0x7be) != '\0') {
          DataSynchronizationBarrier(0xe);
          arm_heavy_mb();
          *(undefined4 *)(*(int *)(iVar8 + 0x14) + 0x1400) = 0;
          DataSynchronizationBarrier(0xe);
          arm_heavy_mb();
          *(undefined4 *)(*(int *)(iVar8 + 0x14) + 0x18c0) = 0;
          DataSynchronizationBarrier(0xe);
          arm_heavy_mb();
          *(undefined4 *)(*(int *)(iVar8 + 0x14) + 0x1600) = 0;
          DataSynchronizationBarrier(0xe);
          arm_heavy_mb();
          *(undefined4 *)(*(int *)(iVar8 + 0x14) + 0x2c00) = 0;
          DataSynchronizationBarrier(0xe);
          arm_heavy_mb();
          *(undefined4 *)(*(int *)(iVar8 + 0x14) + 0x1c) = 0xc;
        }
      }
      else if (iVar9 == 0x70) {
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(undefined4 *)(*(int *)(iVar8 + 0x10) + 0x1600) = 0;
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(undefined4 *)(*(int *)(iVar8 + 0x10) + 0x16f0) = 0;
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(undefined4 *)(*(int *)(iVar8 + 0x10) + 0x16a0) = 0;
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        puVar6 = (undefined4 *)(*(int *)(iVar8 + 0x10) + 0x2c00);
        goto LAB_000148b4;
      }
      rkisp_unite_write(param_1,0x1404,0x10,1,*(undefined1 *)(iVar8 + 0x7be));
      *(int *)(param_1 + 0x7124) = *(int *)(param_1 + 0x7124) + *(int *)(param_1 + 0x9b20);
      *(undefined1 *)(param_1 + 0x664d) = 1;
      uVar5 = (uint)bVar2;
    }
  }
  if (*(char *)(iVar7 + 0x7b9) == '\0') {
    if (uVar5 == 0) goto LAB_00014aec;
LAB_00014a52:
    uVar5 = 0;
  }
  else {
    if (uVar5 == 0) goto LAB_00014aec;
    iVar9 = rkisp_read_reg_cache(param_1,0x3e04);
    if (-1 < iVar9 << 0x1f) goto LAB_00014a52;
    rkisp_unite_write(param_1,0x3e04,0,1,*(undefined1 *)(iVar7 + 0x7be));
  }
  uVar3 = rkisp_read(param_1,0x400,0);
  rkisp_unite_write(param_1,0x400,uVar3 | 0x200,1,*(undefined1 *)(iVar7 + 0x7be));
  rkisp_update_regs(param_1,0x404);
  uVar3 = rkisp_read(param_1,0x3b00,1);
  if ((*(char *)(iVar7 + 0x7b9) == '\0') && ((uVar3 & 1) != 0)) {
    (**(code **)(DAT_00014d40 + 4))(DAT_00014d44);
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(uint *)(*(int *)(iVar7 + 0x10) + 0x3b00) = uVar3 & 0x7ffffffe;
    if (*(char *)(iVar7 + 0x7be) != '\0') {
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(uint *)(*(int *)(iVar7 + 0x14) + 0x3b00) = uVar3 & 0x7ffffffe;
    }
  }
  if (uVar5 != 0) {
    rkisp_unite_write(param_1,0x3e04,1,1,*(undefined1 *)(iVar7 + 0x7be));
  }
LAB_00014aec:
  uVar5 = rkisp_read(param_1,0x1474,1);
  if ((uVar5 & 0x10000) == 0) {
    uVar3 = *(uint *)(param_1 + 0x9ad8) & 0xfffffff7;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x9ad8) | 8;
  }
  if ((int)(uVar5 << 0xe) < 0) {
    uVar3 = uVar3 | 0x10;
  }
  else {
    uVar3 = uVar3 & 0xffffffef;
  }
  *(uint *)(param_1 + 0x9ad8) = uVar3;
  if (((*(int *)(param_1 + 0x97a4) == 0x40) &&
      (iVar9 = rkisp_read(param_1,0x18c0,1), iVar9 << 0x1f < 0)) ||
     ((*(int *)(param_1 + 0x97a4) == 0x60 && (iVar9 = rkisp_read(param_1,0x18c0,1), iVar9 < 0)))) {
    uVar5 = *(uint *)(param_1 + 0x9ad8) | 0x20;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x9ad8) & 0xffffffdf;
  }
  *(uint *)(param_1 + 0x9ad8) = uVar5;
  if (((*(int *)(param_1 + 0x97a4) == 0x60) && (iVar9 = rkisp_read(param_1,1), iVar9 << 0x1f < 0))
     || ((*(int *)(param_1 + 0x97a4) == 0x70 &&
         (iVar9 = rkisp_read(param_1,0x1810,1), iVar9 << 0xb < 0)))) {
    uVar5 = *(uint *)(param_1 + 0x9ad8) | 0x40;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x9ad8) & 0xffffffbf;
  }
  *(uint *)(param_1 + 0x9ad8) = uVar5;
  uVar5 = rkisp_read(param_1,0x1c00,1);
  uVar5 = (*(uint *)(param_1 + 0x9b1c) & 0xf) << 8 | uVar5 & 0xfffff0ff | (param_2 & 3) << 0xc | 1;
  if (1 < *DAT_00014d48) {
    printk(DAT_00014d4c,param_1 + 0xa8,local_2c[0],param_2 + 1,uVar5);
  }
  if (*(char *)(iVar7 + 0x7bd) == '\0') {
    rkisp_unite_write(param_1,0x1c00,uVar5,1,*(undefined1 *)(iVar7 + 0x7be));
  }
  return;
}



/* ===== rkisp_rdbk_trigger_event @ 00014d50 size=670 ===== */

int rkisp_rdbk_trigger_event(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int extraout_r3;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  byte bVar14;
  uint in_cpsr;
  int *piVar15;
  int *piVar16;
  int local_54 [4];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  uint local_34;
  uint local_30;
  int iStack_2c;
  
  disableIRQinterrupts();
  if (param_2 == 1) {
    if ((*(int *)(param_1 + 0x9af8) == *(int *)(param_1 + 0x9afc)) ||
       (iVar6 = __kfifo_out(param_1 + 0x9af8,param_3,0x1c), iVar6 == 0)) {
      iVar6 = -0x16;
    }
  }
  else if (param_2 == 0) {
    if (param_3 != (undefined4 *)0x0) {
      if (*(uint *)(param_1 + 0x9b00) <
          (uint)(*(int *)(param_1 + 0x9af8) - *(int *)(param_1 + 0x9afc))) {
        printk(DAT_00014ff0,param_1 + 0xa8);
      }
      else {
        __kfifo_in(param_1 + 0x9af8,param_3,0x1c);
      }
    }
    iVar6 = 0;
  }
  else {
    if (param_2 == 2) {
      *param_3 = (int)((ulonglong)
                       ((uint)(*(int *)(param_1 + 0x9af8) - *(int *)(param_1 + 0x9afc)) >> 2) *
                       (ulonglong)DAT_00014ff4 >> 0x20);
    }
    iVar6 = 0;
  }
  bVar14 = (in_cpsr >> 0x1b & 1) != 0;
  cVar12 = (in_cpsr >> 0x1c & 1) != 0;
  cVar11 = (in_cpsr >> 0x1d & 1) != 0;
  if (param_2 != 0) {
    cVar11 = 2 < param_2;
    cVar12 = SBORROW4(param_2,3);
    if (param_2 != 3) {
      return iVar6;
    }
  }
  iVar5 = *(int *)(param_1 + 0x94);
  memset(&local_44,0,0x1c);
  cVar13 = '\x01';
  cVar10 = '\0';
  memset(local_54,0,0x10);
  iVar1 = (uint)(byte)(cVar10 << 4 | cVar13 << 3 | cVar11 << 2 | cVar12 << 1 | bVar14) << 0x1b;
  disableIRQinterrupts();
  if (param_2 == 3) {
    if (*(int *)(param_1 + 0x9b20) != 0) {
      *(int *)(param_1 + 0x9b20) = *(int *)(param_1 + 0x9b20) + -1;
      uVar3 = 0;
      iVar2 = param_1;
      iVar4 = 1;
      iStack_2c = 0;
      goto LAB_00014df4;
    }
    *(undefined1 *)(iVar5 + 0x7b8) = 1;
    *(undefined4 *)(iVar5 + 0xc4) = *(undefined4 *)(param_1 + 0x9acc);
  }
  if (*(char *)(iVar5 + 0x7bd) == '\0') {
    iVar4 = 0;
    if ((*(char *)(iVar5 + 0x7b8) != '\0') &&
       ((-1 < *(int *)(iVar5 + 0x7a0) << 0x14 || (*(char *)(iVar5 + 0x7a5) == '\0')))) {
      if (*(int *)(param_1 + 0x9b1c) - 4U < 3) {
        iVar7 = 0;
        iVar8 = 0;
        iVar2 = 0;
        piVar16 = (int *)(iVar5 + 0x58);
        for (iVar9 = 0; iVar9 < *(int *)(iVar5 + 0xb8); iVar9 = iVar9 + 1) {
          piVar15 = piVar16 + 1;
          iVar2 = *piVar16;
          if ((iVar2 != 0) && (*(int *)(iVar2 + 0x99e0) << 0x16 < 0)) {
            rkisp_rdbk_trigger_event(iVar2,2,local_54 + iVar9,local_54,piVar15,iVar1);
            if (iVar8 < local_54[iVar9]) {
              iVar7 = iVar9;
              iVar8 = local_54[iVar9];
            }
          }
          piVar16 = piVar15;
        }
        iVar9 = iVar8;
        if ((*(char *)(param_1 + 0xe038) != '\0') && (iVar8 == 1)) {
          iVar9 = *(int *)(param_1 + 0xe60);
        }
        if (iVar9 == 0) {
          iStack_2c = 0;
          uVar3 = 0xffffffff;
        }
        else {
          iVar2 = *(int *)(iVar5 + (iVar7 + 0x16) * 4);
          iVar9 = *DAT_00014ff8;
          if (1 < iVar9) {
            printk(DAT_00014ffc,iVar2 + 0xa8,iVar8);
            iVar9 = extraout_r3;
          }
          rkisp_rdbk_trigger_event(iVar2,1,&local_44,iVar9,piVar16,iVar1);
          *(undefined4 *)(iVar2 + 0x8ca8) = *(undefined4 *)(iVar2 + 0x8c90);
          *(undefined4 *)(iVar2 + 0x8cac) = *(undefined4 *)(iVar2 + 0x8c94);
          *(undefined4 *)(iVar2 + 0x8cb0) = *(undefined4 *)(iVar2 + 0x8c98);
          *(undefined4 *)(iVar2 + 0x8cb4) = *(undefined4 *)(iVar2 + 0x8c9c);
          *(undefined4 *)(iVar2 + 0x8cb8) = *(undefined4 *)(iVar2 + 36000);
          *(undefined4 *)(iVar2 + 0x8cbc) = *(undefined4 *)(iVar2 + 0x8ca4);
          if ((*(uint *)(iVar2 + 0x8cb8) < local_34) &&
             (iVar1 = local_34 - *(uint *)(iVar2 + 0x8cb8), iVar1 != 1)) {
            *(int *)(iVar2 + 0xe8c) = *(int *)(iVar2 + 0xe8c) + 1 + iVar1;
          }
          *(uint *)(iVar2 + 36000) = local_34;
          *(undefined4 *)(iVar2 + 0x8c90) = local_44;
          *(undefined4 *)(iVar2 + 0x8c94) = uStack_40;
          *(undefined4 *)(iVar2 + 0x8c98) = local_3c;
          *(undefined4 *)(iVar2 + 0x8c9c) = uStack_38;
          *(undefined4 *)(iVar2 + 0xe70) = local_44;
          *(undefined4 *)(iVar2 + 0xe74) = uStack_40;
          *(uint *)(iVar2 + 0xe60) = local_34 + 1;
          *(int *)(iVar5 + 0xc0) = iVar7;
          *(undefined1 *)(iVar5 + 0x7b8) = 0;
          *(undefined4 *)(iVar2 + 0x9b20) = 0;
          uVar3 = local_30;
          if ((*(char *)(iVar5 + 0x7bf) != '\0') && (*(int *)(iVar5 + 0xc4) != iVar7)) {
            uVar3 = 0;
            *(undefined4 *)(iVar2 + 0x9b20) = 1;
          }
          if (*(char *)(iVar2 + 0xe038) == '\0') {
            iVar4 = 0;
          }
          else if (local_34 == 0) {
            *(undefined1 *)(iVar2 + 0xe039) = 1;
            *(undefined4 *)(iVar2 + 0x9ad0) = 1;
            *(undefined4 *)(iVar2 + 0x9b20) = 0;
            rkisp_fast_switch_rx_buf(iVar2);
          }
        }
      }
      else {
        iStack_2c = 0;
        uVar3 = 0xffffffff;
        iVar2 = 0;
      }
      goto LAB_00014df4;
    }
  }
  else {
    *(undefined1 *)(iVar5 + 0x7b8) = 0;
  }
  iVar2 = 0;
  uVar3 = 0xffffffff;
  iVar4 = iVar2;
  iStack_2c = iVar2;
LAB_00014df4:
  if (-1 < (int)uVar3) {
    rkisp_trigger_read_back(iVar2,uVar3 & 0xff,iStack_2c,iVar4);
  }
  return iVar6;
}



/* ===== rkisp_rdbk_work @ 00015000 size=300 ===== */

void rkisp_rdbk_work(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  
  iVar7 = *(int *)(param_1 + -0x9a54);
  if (*(char *)(iVar7 + 0x7c2) != '\0') {
    iVar13 = 0;
    uVar4 = 0;
    uVar6 = 0;
    *(undefined1 *)(iVar7 + 0x7c2) = 0;
    iVar3 = DAT_00015130;
    iVar8 = iVar7;
    for (iVar11 = 0; iVar11 < *(int *)(iVar7 + 0xb8); iVar11 = iVar11 + 1) {
      if (*(char *)(iVar8 + 0x78) != '\0') {
        iVar10 = *(int *)(iVar8 + 0x74);
        iVar13 = iVar13 + 1;
        if (iVar10 == 0) {
          iVar10 = 0x1e;
        }
        uVar12 = iVar10 * *(int *)(iVar8 + 0x70);
        bVar14 = CARRY4(uVar4,uVar12);
        uVar4 = uVar4 + uVar12;
        uVar6 = uVar6 + bVar14;
      }
      iVar8 = iVar8 + 0x14;
    }
    uVar1 = (ulonglong)DAT_0001513c * (ulonglong)uVar4 +
            ((ulonglong)DAT_00015138 * (ulonglong)uVar4 >> 0x20);
    uVar4 = (uint)(uVar1 >> 0x20);
    uVar12 = (uint)((ulonglong)DAT_00015138 * (ulonglong)uVar6 + (uVar1 & 0xffffffff) >> 0x20);
    uVar1 = (ulonglong)DAT_0001513c * (ulonglong)uVar6 +
            (ulonglong)CONCAT14(CARRY4(uVar12,uVar4),uVar12 + uVar4);
    lVar2 = (uVar1 >> 0x14) * (longlong)iVar13 + (uVar1 >> 0x12);
    iVar11 = (int)((ulonglong)lVar2 >> 0x20);
    for (iVar8 = 0; iVar8 < *(int *)(iVar7 + 0x48); iVar8 = iVar8 + 1) {
      bVar14 = iVar11 == 0;
      if (iVar11 == 0) {
        bVar14 = (uint)lVar2 <= *(uint *)(*(int *)(iVar7 + 0x44) + iVar8 * 8);
      }
      if (bVar14) goto LAB_00015096;
    }
    if (iVar8 == *(int *)(iVar7 + 0x48)) {
      iVar8 = iVar8 + -1;
    }
LAB_00015096:
    rkisp_set_clk_rate(*(undefined4 *)(iVar7 + 0x18),
                       DAT_00015130 * *(int *)(*(int *)(iVar7 + 0x44) + iVar8 * 8));
    if (*(char *)(iVar7 + 0x7be) != '\0') {
      rkisp_set_clk_rate(*(undefined4 *)(iVar7 + 0x2c),
                         iVar3 * *(int *)(*(int *)(iVar7 + 0x44) + iVar8 * 8));
    }
    if (*(int *)(param_1 + -0x344) == 0x70) {
      rkisp_set_clk_rate(*(undefined4 *)(iVar7 + 0x1c),
                         *(int *)(*(int *)(iVar7 + 0x44) + iVar8 * 8) * DAT_00015130);
    }
    uVar9 = *(undefined4 *)(iVar7 + 8);
    uVar5 = clk_get_rate(*(undefined4 *)(iVar7 + 0x18));
    _dev_info(uVar9,DAT_00015134,uVar5);
  }
  rkisp_rdbk_trigger_event(param_1 + -0x9ae8,3,0,param_4);
  return;
}



/* ===== rkisp_isp_sd_s_stream @ 00015140 size=3820 ===== */

undefined4 rkisp_isp_sd_s_stream(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint extraout_r2;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined2 *puVar16;
  int iVar17;
  code *pcVar18;
  int *piVar19;
  uint uVar20;
  sbyte sVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  undefined8 uVar27;
  uint local_b0;
  uint local_ac;
  undefined4 uStack_a8;
  undefined8 local_a0;
  int *local_98;
  uint *local_94;
  uint local_90 [2];
  undefined2 auStack_88 [5];
  uint uStack_7e;
  undefined2 auStack_7a [7];
  uint local_6c;
  ushort local_68;
  ushort local_66;
  ushort local_64 [32];
  
  iVar11 = *(int *)(param_1 + 100);
  iVar12 = iVar11 + -0x98;
  iVar17 = *(int *)(iVar11 + -4);
  piVar19 = (int *)(iVar17 + 0xe8);
  if (param_2 != 0) {
    *(undefined1 *)(iVar17 + 0x7c0) = 1;
    rkisp_start_3a_run(iVar12);
    memset((void *)(iVar11 + 0xde0),0,0x18);
    HintPreloadData(piVar19);
    do {
      ExclusiveAccess(piVar19);
      iVar22 = *piVar19;
      bVar26 = (bool)hasExclusiveAccess(piVar19);
    } while (!bVar26);
    *piVar19 = iVar22 + 1;
    if (*(int *)(iVar17 + 0xbc) < iVar22 + 1) {
      _dev_err(*(undefined4 *)(iVar11 + -0x8c),DAT_000156fc,DAT_000156f8);
      HintPreloadData(piVar19);
      do {
        ExclusiveAccess(piVar19);
        bVar26 = (bool)hasExclusiveAccess(piVar19);
      } while (!bVar26);
      *piVar19 = *piVar19 + -1;
      return 0xffffffea;
    }
    if (0 < *DAT_00015a38) {
      DataSynchronizationBarrier(0xf);
      local_ac = (uint)*(byte *)(iVar11 + 0x1468);
      local_b0 = (uint)*(byte *)(iVar11 + 0x1b28);
      printk(DAT_00015a3c,iVar11 + 0x10,DAT_00015a40,*(undefined4 *)(*(int *)(iVar11 + -0x90) + 8));
    }
    iVar17 = *(int *)(iVar11 + 0x280);
    uVar23 = (uint)*(byte *)(*(int *)(iVar11 + -4) + 0x7be);
    local_a0._0_4_ = *(uint *)(iVar11 + 0xda4);
    if (*(char *)(iVar11 + 0xd88) == '\x02') {
      if (*(char *)(iVar11 + 0xdb0) == '\x02') {
        if (iVar17 == 0) {
          uVar20 = 0;
          local_98 = (int *)0;
        }
        else {
          uVar20 = 0;
          local_98 = (int *)uVar20;
          if (*(int *)(iVar17 + 4) == 2) {
            local_98 = (int *)0xc;
          }
        }
      }
      else {
        uVar24 = *(int *)(iVar11 + 0xd74) - 0x2001;
        if ((uVar24 < 0x13) && ((~(DAT_00015a48 >> (uVar24 & 0xff)) & 1) == 0)) {
          if (0x3f < *(uint *)(iVar11 + 0x970c)) {
            uVar4 = 0;
            goto LAB_000159e0;
          }
          uVar4 = 0x40c;
LAB_00015a18:
          rkisp_write(iVar12,0x5a4,uVar4,0);
        }
        else {
          if (*(uint *)(iVar11 + 0x970c) < 0x40) {
            uVar4 = 0xc;
            goto LAB_00015a18;
          }
          uVar4 = 0x111;
LAB_000159e0:
          local_b0 = uVar23;
          rkisp_unite_write(iVar12,0x2500,uVar4,0);
        }
        if (iVar17 == 0) {
          local_98 = (int *)0x6;
        }
        else if (*(int *)(iVar17 + 4) == 2) {
          local_98 = (int *)0xa;
        }
        else {
          local_98 = (int *)0x6;
        }
        if (*(int *)(iVar11 + 0x970c) == 0x40) {
          if (*(int *)(iVar11 + 0x9a84) == 4) {
            uVar20 = 0x18;
          }
          else {
            uVar20 = 0;
          }
        }
        else {
          uVar20 = 0;
        }
      }
      if (*(int *)(iVar11 + 0x9954) == 0x40) {
        uVar25 = 0x8000;
      }
      else {
        uVar25 = 0;
      }
      iVar22 = 1;
      uVar24 = 0;
    }
    else if (*(char *)(iVar11 + 0xd88) == '\0') {
      if ((iVar17 == 0) || (local_98 = *(int **)(iVar17 + 4), (int)local_98 - 4U < 2)) {
        local_98 = (int *)0x4;
      }
      else if (local_98 != (int *)0x2) {
        local_98 = (int *)0x4;
      }
      uVar25 = 0;
      if (*(int *)(iVar11 + 0x9954) == 0x40) {
        uVar25 = 0x10000;
      }
      iVar22 = 2;
      uVar24 = 4;
      uVar20 = 0;
    }
    else {
      local_98 = (int *)0x0;
      iVar22 = 0;
      uVar24 = 0;
      uVar20 = (uint)local_98;
      uVar25 = (uint)local_98;
    }
    uVar14 = 0;
    if (iVar17 != 0) {
      if (*(int *)(iVar17 + 4) - 1U < 2) {
        uVar6 = *(uint *)(iVar17 + 8);
        uVar14 = (uVar6 & 0x7f) >> 6;
        if (*(int *)(iVar17 + 4) == 1) {
          if ((int)(uVar6 << 0x1a) < 0) {
            uVar14 = uVar14 | 4;
          }
          if ((int)(uVar6 << 0x1c) < 0) {
            uVar14 = uVar14 | 2;
          }
        }
      }
      else {
        uVar14 = 0;
      }
    }
    uVar6 = rkisp_read_reg_cache(iVar12,0x400);
    piVar19 = local_98;
    if ((uVar6 & 0x20) != 0) {
      piVar19 = (int *)((uint)local_98 | 0x20);
    }
    local_b0 = uVar23;
    rkisp_unite_write(iVar12,0x400,piVar19,0);
    local_b0 = uVar23;
    rkisp_unite_write(iVar12,0x404,
                      *(uint *)(iVar11 + 0xd90) | *(int *)(iVar11 + 0xd94) << 3 | uVar25 | uVar14,0)
    ;
    local_b0 = uVar23;
    rkisp_unite_write(iVar12,0x418,0,1);
    if (uVar23 != 0) {
      local_a0._0_4_ = ((uint)local_a0 >> 1) + 0x80;
    }
    local_b0 = uVar23;
    rkisp_unite_write(iVar12,0x408,*(int *)(iVar11 + 0xd9c) * iVar22,0);
    local_b0 = uVar23;
    rkisp_unite_write(iVar12,0x40c,*(undefined4 *)(iVar11 + 0xda0),0);
    local_b0 = uVar23;
    rkisp_unite_write(iVar12,0x410,(uint)local_a0 * iVar22,0);
    local_b0 = uVar23;
    rkisp_unite_write(iVar12,0x594,0,1);
    local_b0 = uVar23;
    rkisp_unite_write(iVar12,0x598,0,1);
    local_b0 = uVar23;
    rkisp_unite_write(iVar12,0x59c,(uint)local_a0,0);
    bVar13 = *(byte *)(iVar11 + 0x14c4) & 1;
    if ((*(byte *)(iVar11 + 0x14c4) & 1) == 0) {
      local_b0 = uVar23;
      rkisp_unite_write(iVar12,0x414,*(uint *)(iVar11 + 0xda8) + uVar20,bVar13);
      uVar20 = *(int *)(iVar11 + 0xda8) + uVar20;
    }
    else {
      local_b0 = uVar23;
      rkisp_unite_write(iVar12,0x414,*(uint *)(iVar11 + 0xda8) >> 1,0);
      bVar13 = 0;
      uVar20 = *(uint *)(iVar11 + 0xda8) >> 1;
    }
    local_b0 = uVar23;
    rkisp_unite_write(iVar12,0x5a0,uVar20,bVar13);
    if (*(uint *)(iVar11 + 0x970c) < 0x40) {
      uVar24 = uVar24 | 0x4a;
    }
    else {
      uVar24 = uVar24 | 0x1004a;
    }
    if (*(char *)(iVar11 + 0xdfa0) != '\0') {
      uVar24 = uVar24 | 0x20;
    }
    local_b0 = uVar23;
    rkisp_unite_write(iVar12,0x5bc,uVar24,1);
    if (((*(uint *)(iVar11 + 0x970c) & 0xffffffef) == 0x40) && (*(byte *)(iVar11 + 0x9794) - 4 < 3))
    {
      rkisp_write(iVar12,0x5d0,1);
    }
    if (*(char *)(iVar11 + 0xdb0) == '\x02') {
      rkisp_params_disable_isp(iVar11 + 0x65f8);
    }
    else {
      puVar5 = local_90;
      puVar9 = DAT_00015b94;
      do {
        puVar7 = puVar9 + 2;
        uVar23 = puVar9[1];
        *puVar5 = *puVar9;
        puVar5[1] = uVar23;
        puVar5 = puVar5 + 2;
        puVar9 = puVar7;
      } while (puVar7 != DAT_00015b94 + 4);
      *(short *)puVar5 = (short)*puVar7;
      puVar5 = &uStack_7e;
      puVar9 = DAT_00015b98;
      do {
        puVar8 = puVar9 + 1;
        puVar7 = puVar5 + 1;
        *puVar5 = *puVar9;
        puVar5 = puVar7;
        puVar9 = puVar8;
      } while (puVar8 != DAT_00015b98 + 4);
      *(short *)puVar7 = (short)*puVar8;
      puVar5 = &local_6c;
      puVar9 = DAT_00015b9c;
      do {
        puVar7 = puVar9 + 2;
        uVar23 = puVar9[1];
        *puVar5 = *puVar9;
        puVar5[1] = uVar23;
        puVar5 = puVar5 + 2;
        puVar9 = puVar7;
      } while (puVar7 != DAT_00015b9c + 4);
      *(short *)puVar5 = (short)*puVar7;
      puVar5 = &uStack_7e;
      if ((*(int *)(iVar11 + 0xdd0) != 3) && (puVar5 = &local_6c, *(int *)(iVar11 + 0xdd0) != 10)) {
        puVar5 = local_90;
      }
      puVar16 = (undefined2 *)((int)puVar5 + -2);
      iVar17 = 0x570;
      do {
        puVar16 = puVar16 + 1;
        iVar22 = iVar17 + 4;
        local_b0 = (uint)*(byte *)(*(int *)(iVar11 + -4) + 0x7be);
        rkisp_unite_write(iVar12,iVar17,*puVar16,0);
        iVar17 = iVar22;
      } while (iVar22 != 0x594);
      uVar23 = rkisp_read_reg_cache(iVar12,0x400);
      local_b0 = (uint)*(byte *)(*(int *)(iVar11 + -4) + 0x7be);
      if (*(int *)(iVar11 + 0xdcc) == 1) {
        uVar23 = uVar23 | 0x6000;
      }
      else {
        uVar23 = uVar23 & 0xffff9fff;
      }
      rkisp_unite_write(iVar12,0x400,uVar23,0);
      rkisp_params_first_cfg(iVar11 + 0x65f8,iVar11 + 0xd74,*(undefined4 *)(iVar11 + 0xdcc));
    }
    if ((*(char *)(*(int *)(iVar11 + -4) + 0x7b9) == '\0') &&
       (*(int *)(*(int *)(iVar11 + -4) + 0xe8) < 2)) {
      rkisp_update_regs(iVar12,0x408,0x414);
      rkisp_update_regs(iVar12,0x59c,0x5a0);
    }
    piVar19 = DAT_00015a38;
    rkisp_config_cmsk(iVar12);
    puVar15 = *(undefined4 **)(iVar11 + 0x280);
    if (((puVar15 == (undefined4 *)0x0) || (puVar15[1] != 5)) &&
       (uVar23 = *(uint *)(iVar11 + 0x9954), (uVar23 & 0x107) == 0)) {
      uVar24 = 0;
      uVar4 = DAT_000160bc;
      if (puVar15 == (undefined4 *)0x0) {
        if (uVar23 == 0x40) {
          iVar22 = 0;
          goto LAB_00015bf2;
        }
LAB_000159a0:
        printk(uVar4,iVar11 + 0x10);
        iVar22 = -0x16;
        uVar23 = uVar24;
        goto LAB_00015bf2;
      }
      if (puVar15[1] - 1 < 2) {
        cVar1 = *(char *)(iVar11 + 0xd98);
        iVar17 = *(int *)(iVar11 + -0x90);
        if (cVar1 == '\n') {
          uVar23 = 0x1000;
          uVar4 = DAT_00016058;
        }
        else if (cVar1 == '\f') {
          uVar23 = 0;
          uVar4 = DAT_0001605c;
        }
        else {
          uVar4 = DAT_00015a44;
          if (cVar1 != '\b') goto LAB_000159a0;
          uVar23 = 0x3000;
          uVar4 = 0x60000000;
        }
        uVar25 = *(uint *)(iVar17 + 0x404);
        DataSynchronizationBarrier(0xf);
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(uint *)(iVar17 + 0x404) = uVar25 | uVar23;
        uVar25 = *(uint *)(*(int *)(iVar11 + -4) + 0xc);
        uVar23 = uVar24;
        if (uVar25 < 0xfffff001) {
          iVar22 = 0;
          if ((*(uint *)(iVar11 + 0x970c) & 0xffffffef) == 0x20) {
            local_ac = 0;
            uStack_a8 = 0;
            local_b0 = 0;
            regmap_update_bits_base(uVar25,0x430,0x60006000,uVar4);
          }
          goto LAB_00015bf2;
        }
      }
      else if (uVar23 != 0x40) {
        if (puVar15[1] == 4) {
          iVar17 = get_remote_sensor(*puVar15);
          if (iVar17 == 0) {
            iVar22 = -0x13;
          }
          else {
            iVar22 = DAT_0001604c;
            if ((**(int **)(iVar17 + 0x68) != 0) &&
               (pcVar10 = *(code **)(**(int **)(iVar17 + 0x68) + 0x18), pcVar10 != (code *)0x0)) {
              if ((*DAT_00016038 == 0) ||
                 (pcVar18 = *(code **)(*DAT_00016038 + 0x18), pcVar18 == (code *)0x0)) {
                iVar22 = (*pcVar10)(iVar17,DAT_0001603c,&local_6c);
              }
              else {
                iVar22 = (*pcVar18)(iVar17,DAT_0001603c,&local_6c);
              }
            }
          }
          uVar23 = DAT_00016044;
          if (iVar22 == 0) {
            uVar24 = (puVar15[2] & 0xf) - 1;
            sVar21 = 4;
            if (uVar24 < 4) {
              sVar21 = *(sbyte *)(uVar24 + DAT_00016040 + 0x56c);
            }
            cVar1 = *(char *)(iVar11 + 0xd98);
            if (cVar1 == '\n') {
              iVar17 = 1;
            }
            else if (cVar1 == '\f') {
              iVar17 = 2;
            }
            else {
              iVar17 = 0;
              if (cVar1 != '\b') {
                iVar22 = -0x16;
                goto LAB_00015fdc;
              }
            }
            uVar24 = DAT_00016044 & (uint)local_66 << 0x10;
            DataSynchronizationBarrier(0xe);
            arm_heavy_mb();
            *(uint *)(*(int *)(iVar11 + -0x90) + 0x24) = uVar24 | local_68 & 0xfff;
            DataSynchronizationBarrier(0xe);
            arm_heavy_mb();
            *(uint *)(*(int *)(iVar11 + -0x90) + 0x28) =
                 uVar23 & (uint)local_64[1] << 0x10 | local_64[0] & 0xfff;
            DataSynchronizationBarrier(0xe);
            arm_heavy_mb();
            iVar22 = *(int *)(iVar11 + -0x90);
            *(uint *)(iVar22 + 0x20) = local_6c | iVar17 << 2 | ((1 << sVar21) + -1) * 0x10 | 1;
            if (0 < *piVar19) {
              DataSynchronizationBarrier(0xf);
              DataSynchronizationBarrier(0xf);
              local_b0 = *(uint *)(*(int *)(iVar11 + -0x90) + 0x28);
              DataSynchronizationBarrier(0xf);
              printk(DAT_00016048,iVar11 + 0x10,*(undefined4 *)(iVar22 + 0x20),
                     *(undefined4 *)(*(int *)(iVar11 + -0x90) + 0x24));
            }
            iVar22 = 0;
          }
          else {
LAB_00015fdc:
            printk(DAT_00016054,iVar11 + 0x10,DAT_00016050,iVar22);
          }
          uVar23 = 0x100;
          goto LAB_00015bf2;
        }
        goto LAB_000159a0;
      }
    }
    else {
      uVar23 = 0x200;
    }
    iVar22 = 0;
LAB_00015bf2:
    if (*(int *)(iVar11 + 0x970c) == 0x70) {
      uVar23 = uVar23 | 1;
    }
    local_ac = (uint)*(byte *)(*(int *)(iVar11 + -4) + 0x7be);
    local_b0 = 1;
    rkisp_unite_set_bits(iVar12,0x18,0,uVar23);
    if (((-1 < iVar22) && ((*(uint *)(iVar11 + 0x970c) & 0xffffffef) != 0x40)) &&
       (*(uint *)(iVar11 + 0x970c) != 0x80)) {
      uVar24 = *(uint *)(iVar11 + 0xdbc);
      uVar23 = (uint)*(byte *)(*(int *)(iVar11 + -4) + 0x7be);
      if (uVar23 != 0) {
        uVar24 = (uVar24 >> 1) + 0x80;
      }
      local_b0 = uVar23;
      rkisp_unite_write(iVar12,0x2304,0);
      local_b0 = uVar23;
      rkisp_unite_write(iVar12,0x2318,0);
      local_b0 = uVar23;
      rkisp_unite_write(iVar12,0x231c,0);
      local_b0 = uVar23;
      rkisp_unite_write(iVar12,0x2320,0);
      local_b0 = uVar23;
      rkisp_unite_write(iVar12,0x2308,*(undefined4 *)(iVar11 + 0xdb4),0);
      local_b0 = uVar23;
      rkisp_unite_write(iVar12,0x230c,*(undefined4 *)(iVar11 + 0xdb8),0);
      local_b0 = uVar23;
      rkisp_unite_write(iVar12,0x2310,uVar24,0);
      if ((*(byte *)(iVar11 + 0x14c4) & 1) == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = 2;
      }
      uVar4 = __aeabi_uidiv(*(undefined4 *)(iVar11 + 0xdc0),uVar4);
      local_b0 = uVar23;
      rkisp_unite_write(iVar12,0x2314,uVar4,0);
      if ((*(uint *)(iVar11 + 0x970c) & 0xffffffef) != 0x60) {
        rkisp_write(iVar12,0x2300,1,0);
      }
    }
    iVar22 = *(int *)(iVar11 + 0x280);
    iVar17 = *(int *)(iVar11 + -0x90);
    if (0 < *piVar19) {
      local_b0 = *(uint *)(*(int *)(iVar11 + -4) + 0xbc);
      printk(DAT_00016024,iVar11 + 0x10,DAT_00016028,*(undefined4 *)(*(int *)(iVar11 + -4) + 0xe8));
    }
    if ((iVar22 != 0) && (*(int *)(iVar22 + 4) == 5)) {
      if ((*(uint *)(iVar11 + 0x970c) & 0xffffffef) == 0x20) {
        DataSynchronizationBarrier(0xf);
        DataSynchronizationBarrier(0xf);
        DataSynchronizationBarrier(0xf);
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(undefined4 *)(iVar17 + 0x7000) = 1;
      }
      else if (*(uint *)(iVar11 + 0x970c) < 0x20) {
        uVar23 = *(uint *)(iVar17 + 0x1c00);
        DataSynchronizationBarrier(0xf);
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(uint *)(iVar17 + 0x1c00) = uVar23 | 1;
      }
    }
    uVar24 = rkisp_read_reg_cache(iVar12,0x400);
    bVar26 = *(int *)(iVar11 + 0x970c) == 0x40;
    uVar23 = extraout_r2;
    if (bVar26) {
      uVar23 = DAT_0001602c;
    }
    local_b0 = (uint)*(byte *)(*(int *)(iVar11 + -4) + 0x7be);
    if (bVar26) {
      uVar23 = uVar23 | uVar24;
    }
    else {
      uVar23 = uVar24 | 0x311;
    }
    rkisp_unite_write(iVar12,0x400,uVar23,*(int *)(*(int *)(iVar11 + -4) + 0xe8) < 2);
    rkisp_clear_reg_cache_bits(iVar12,0x400,0x200);
    *(undefined4 *)(iVar11 + 0x994c) = 0;
    *(undefined4 *)(iVar11 + 0x9950) = 0;
    *(undefined4 *)(iVar11 + 0x9948) = 0x201;
    *(uint *)(iVar11 + 0x9a40) = *(uint *)(iVar11 + 0x9a40) | 1;
    *(undefined4 *)(iVar11 + 0x9a3c) = 0;
    if (*(char *)(*(int *)(iVar11 + -4) + 0x7b9) != '\0') {
      usleep_range(1000,0x4b0);
    }
    if (0 < *piVar19) {
      DataSynchronizationBarrier(0xf);
      local_b0 = *(uint *)(iVar17 + 0x400);
      DataSynchronizationBarrier(0xf);
      printk(DAT_00016030,iVar11 + 0x10,DAT_00016028,*(undefined4 *)(iVar17 + 0x1400));
    }
    iVar17 = *(int *)(iVar11 + -4);
    if ((*(char *)(iVar17 + 0x7a5) != '\0') && (*(int *)(iVar17 + 0xe8) < 2)) {
      *(undefined1 *)(iVar17 + 0x7a4) = 0;
      *(undefined4 *)(*(int *)(iVar11 + -4) + 0x7a0) = 1;
      queue_work_on(1,*DAT_00016034,*(int *)(iVar11 + -4) + 0x780);
    }
    rkisp_stats_first_ddr_config(iVar11 + 0x5f70);
    if (*(char *)(*(int *)(iVar11 + -4) + 0x7ba) == '\0') {
      rkisp_config_dmatx_valid_buf(iVar12);
      force_cfg_update(iVar12);
      hdr_update_dmatx_buf(iVar12);
      if (*(char *)(*(int *)(iVar11 + -4) + 0x7b9) != '\0') {
        piVar19 = (int *)(iVar11 + 0xe00);
        do {
          if (((1 < *piVar19 - 10U) && ((char)piVar19[0x19a] != '\0')) && (piVar19[0x183] == 0)) {
            (**(code **)(piVar19[0x17f] + 0x1c))(piVar19);
          }
          piVar19 = piVar19 + 0x1b0;
        } while ((int *)(iVar11 + 0x5f00) != piVar19);
      }
      rkisp_stats_next_ddr_config(iVar11 + 0x5f70);
    }
    rkisp_rdbk_trigger_event(iVar12,0);
    return 0;
  }
  rkisp_stop_3a_run(iVar12);
  if (*(int *)(iVar11 + 0x9a84) - 4U < 3) {
    iVar17 = iVar11 + 0x7e24;
    do {
      if (*(char *)(iVar17 + -0xb) != '\0') {
        __wake_up(iVar17,3,1,0);
      }
      iVar17 = iVar17 + 0x6c0;
    } while (iVar11 + 0x9264 != iVar17);
  }
  _cond_resched();
  if (((*(uint *)(iVar11 + 0x9948) & 0x100) == 0) && (*(int *)(iVar11 + 0x9a84) - 4U < 3)) {
    init_wait_entry(&local_6c);
    for (iVar17 = 0xf;
        ((prepare_to_wait_event(iVar11 + 0x9970,&local_6c,2), -1 < *(int *)(iVar11 + 0x9948) << 0x17
         && (*(int *)(iVar11 + 0x9a84) - 4U < 3)) && (iVar17 != 0));
        iVar17 = schedule_timeout(iVar17)) {
    }
    finish_wait(iVar11 + 0x9970,&local_6c);
  }
  iVar22 = *(int *)(iVar11 + -4);
  iVar17 = *(int *)(iVar11 + -0x90);
  local_98 = DAT_00015524;
  if (0 < *DAT_00015524) {
    printk(DAT_0001552c,iVar11 + 0x10,DAT_00015528,*(undefined4 *)(iVar22 + 0xe8));
  }
  if (1 < *(int *)(*(int *)(iVar11 + -4) + 0xe8)) goto LAB_00015488;
  if ((*(uint *)(iVar11 + 0x970c) & 0xffffffef) == 0x20) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar17 + 0x702c) = 0;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar17 + 0x7030) = 0;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar17 + 0x7034) = 0;
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
LAB_0001525a:
    DataSynchronizationBarrier(0xf);
  }
  else {
    if (0x3f < *(uint *)(iVar11 + 0x970c)) {
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar17 + 0x1c30) = 0;
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar17 + 0x1c34) = 0;
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar17 + 0x1c38) = 0;
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar17 + 0x1c3c) = 0;
      DataSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      goto LAB_0001525a;
    }
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar17 + 0x1c08) = 0;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar17 + 0x1c14) = 0xffffffff;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar17 + 0x5bc) = 0;
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar17 + 0x5c8) = 0xffffffff;
  if (0x3f < *(uint *)(iVar11 + 0x970c)) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar17 + 0x5d0) = 0;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar17 + 0x5dc) = 0xffffffff;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar17 + 0x14f8) = 0;
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar17 + 0x1504) = 0xffffffff;
  if ((*(uint *)(iVar11 + 0x970c) & 0xffffffef) == 0x20) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar17 + 0x7000) = 0;
  }
  else if (*(uint *)(iVar11 + 0x970c) < 0x20) {
    local_94 = (uint *)(iVar17 + 0x1c00);
    uVar23 = *local_94;
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *local_94 = uVar23 & 0xfffff0fe;
    (**(code **)(DAT_000156f0 + 4))(DAT_000156f4);
  }
  if (0x3f < *(uint *)(iVar11 + 0x970c)) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar17 + 0x2200) = 0;
  }
  uVar23 = *(uint *)(iVar17 + 0x400);
  DataSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(uint *)(iVar17 + 0x400) = uVar23 & 0xffffffee;
  uVar23 = *(uint *)(iVar17 + 0x400);
  DataSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  uVar23 = uVar23 | 0x200;
  *(uint *)(iVar17 + 0x400) = uVar23;
  if (*(char *)(iVar22 + 0x7be) != '\0') {
    rkisp_next_write(iVar12,0x400,uVar23,1);
  }
  local_a0 = ktime_get();
  iVar2 = DAT_0001553c;
  local_a0 = local_a0 + (ulonglong)DAT_00015530;
  while( true ) {
    local_94 = (uint *)(iVar17 + 0x5c0);
    DataSynchronizationBarrier(0xf);
    if (*(int *)(iVar17 + 0x5c0) << 0x1f < 0) break;
    uVar27 = ktime_get();
    iVar3 = (int)((ulonglong)uVar27 >> 0x20);
    bVar26 = (uint)local_a0 < (uint)uVar27;
    if ((int)((local_a0._4_4_ - iVar3) - (uint)bVar26) < 0 !=
        (SBORROW4(local_a0._4_4_,iVar3) != SBORROW4(local_a0._4_4_ - iVar3,(uint)bVar26))) {
      DataSynchronizationBarrier(0xf);
      break;
    }
    (**(code **)(iVar2 + 4))(DAT_000156f4);
  }
  if (0 < *local_98) {
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    printk(DAT_00015534,iVar11 + 0x10,*(undefined4 *)(iVar17 + 0x1400),
           *(undefined4 *)(iVar17 + 0x400));
  }
  if ((*(uint *)(((uint)&local_b0 & 0xffffe000) + 4) & 0xffff00) == 0) {
    uVar23 = clk_get_rate(*(undefined4 *)(iVar22 + 0x18));
    uVar24 = DAT_00015538 * **(int **)(iVar22 + 0x44);
    if (uVar24 < uVar23) {
      rkisp_set_clk_rate(*(undefined4 *)(iVar22 + 0x18),uVar24);
      if (*(char *)(iVar22 + 0x7be) != '\0') {
        rkisp_set_clk_rate(*(undefined4 *)(iVar22 + 0x2c),uVar24);
      }
      (**(code **)(DAT_0001553c + 4))(DAT_00015540);
    }
    rkisp_soft_reset(*(undefined4 *)(iVar11 + -4),0);
  }
  if ((*(uint *)(iVar11 + 0x970c) & 0xffffffef) == 0x20) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar17 + 0x7010) = 0;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar17 + 0x7000) = 0;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar17 + 0x702c) = 0;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar17 + 0x7030) = 0;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar17 + 0x7034) = 0;
  }
  else if (0x3f < *(uint *)(iVar11 + 0x970c)) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar17 + 0x1c10) = 0;
    if (*(char *)(iVar22 + 0x7be) != '\0') {
      rkisp_next_write(iVar12,0x1c10,0,1);
    }
  }
  *(undefined1 *)(iVar22 + 0x7c2) = 0;
  *(undefined1 *)(iVar22 + 0x7c0) = 0;
  *(undefined1 *)(*(int *)(iVar11 + -4) + 0x7b8) = 1;
  *(undefined1 *)(*(int *)(iVar11 + -4) + 0x7ba) = 0;
LAB_00015488:
  *(undefined4 *)(iVar11 + 0x9a40) = 0;
  *(undefined1 *)(iVar11 + 0x9794) = 0;
  *(undefined4 *)(iVar11 + 0x9a88) = 0;
  *(uint *)(iVar11 + 0x9948) = *(byte *)(iVar11 + 0x9948) | 0x100;
  uVar23 = *(uint *)(iVar11 + 0x970c);
  if (0x3f < uVar23) {
    *(undefined4 *)(iVar11 + 0x9a64) = 0;
    *(undefined4 *)(iVar11 + 0x9a60) = 0;
    if ((uVar23 == 0x60) || (uVar23 == 0x70)) {
      memset((void *)(iVar11 + 0xdedc),0,0xc0);
    }
  }
  if (*(uint *)(iVar11 + 0x9784) < 4) {
    __kfifo_free(iVar11 + 0x9710);
    __kfifo_free(iVar11 + 0x972c);
    __kfifo_free(iVar11 + 0x9748);
    __kfifo_free(iVar11 + 0x9764);
    *(undefined4 *)(iVar11 + 0x9784) = 0xff;
  }
  if (*(int *)(iVar11 + 0x97a0) != 0) {
    *(undefined4 *)(iVar11 + 0x97a0) = 0;
  }
  HintPreloadData(piVar19);
  do {
    ExclusiveAccess(piVar19);
    bVar26 = (bool)hasExclusiveAccess(piVar19);
  } while (!bVar26);
  *piVar19 = *piVar19 + -1;
  rkisp_params_stream_stop(iVar11 + 0x65f8);
  *(undefined4 *)(iVar11 + 0xdc8) = 0;
  return 0;
}



/* ===== rkisp_ioctl @ 000160c0 size=418 ===== */

undefined4 rkisp_ioctl(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar2;
  
  iVar6 = *(int *)(param_1 + 100);
  if (param_3 != (undefined4 *)0x0) {
    if (param_2 == DAT_00016264) {
      iVar8 = 0;
      do {
        if (param_3 == *(undefined4 **)(iVar6 + 0x9d60 + iVar8 * 0x2d8)) {
          iVar5 = iVar8 * 0x2d8 + iVar6;
          if (*(int *)(iVar5 + 0x9d64) != 0) {
            iVar7 = *(int *)(*(int *)(iVar6 + -4) + 0x778);
            (**(code **)(iVar7 + 0x28))();
            (**(code **)(iVar7 + 0x20))(*(undefined4 *)(iVar5 + 0x9d64));
            dma_buf_put(*(undefined4 *)(*(int *)(iVar5 + 0x9d60) + 8));
            *(undefined4 *)(iVar5 + 0x9d64) = 0;
          }
          *(undefined4 *)(iVar8 * 0x2d8 + iVar6 + 0x9d60) = 0;
          return 0;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != 0x18);
      return 0;
    }
    if (DAT_00016264 <= param_2) {
      if (param_2 == DAT_0001627c) {
        return 0;
      }
      if (param_2 < DAT_0001627c) {
        if (param_2 == DAT_00016280) {
          rkisp_get_info(iVar6 + -0x98,param_3);
          return 0;
        }
        if (param_2 != (undefined4 *)((int)DAT_00016280 + 0x30003U)) {
          return DAT_00016270;
        }
      }
      else if (param_2 != DAT_00016284) {
        if (param_2 == (undefined4 *)((int)DAT_00016284 + 0x20002U)) {
          uVar3 = rkisp_params_info2ddr_cfg
                            (iVar6 + 0x65f8,param_3,(undefined4 *)((int)DAT_00016284 + 0x20002U),
                             param_4);
          return uVar3;
        }
        if (param_2 != DAT_00016284 + -0x514bfff) {
          return DAT_00016270;
        }
        if (*(short *)(iVar6 + 0x9986) != 1) {
          return 0xffffffea;
        }
        if (*(char *)(iVar6 + 0xdfa0) != '\0') {
          puVar1 = (undefined4 *)(iVar6 + 0x9984);
          puVar4 = param_3;
          do {
            puVar2 = puVar1 + 1;
            *puVar4 = *puVar1;
            puVar1 = puVar2;
            puVar4 = puVar4 + 1;
          } while (puVar2 != (undefined4 *)(iVar6 + 0x99c4));
          memcpy(param_3 + 0x10,*(void **)(iVar6 + 0x6b04),0x2b89);
          return 0;
        }
        return 0xffffffea;
      }
      rkisp_params_get_meshbuf_inf(iVar6 + 0x65f8,param_3);
      return 0;
    }
    if (param_2 == DAT_00016268) {
      rkisp_params_meshbuf_free(iVar6 + 0x65f8,param_2,*param_3,param_3[1]);
      return 0;
    }
    if (param_2 < DAT_00016268) {
      if (param_2 == (undefined4 *)0x56cd) goto LAB_0001623c;
      puVar1 = DAT_0001626c;
      if (param_2 != DAT_0001626c) {
        return DAT_00016270;
      }
    }
    else {
      puVar1 = param_3;
      if (param_2 != DAT_00016274) {
        if (param_2 == DAT_00016278) {
          rkisp_rdbk_trigger_event(iVar6 + -0x98,0);
          return 0;
        }
        return DAT_00016270;
      }
    }
    uVar3 = rkisp_params_set_meshbuf_size(iVar6 + 0x65f8,param_3,puVar1,param_4);
    return uVar3;
  }
  if (param_2 == (undefined4 *)0x56c3) {
    return DAT_00016270;
  }
  if (param_2 != (undefined4 *)0x56cd) {
    return 0xffffffea;
  }
LAB_0001623c:
  if (*(char *)(*(int *)(iVar6 + -4) + 0x7c0) == '\0') {
    *(undefined1 *)(*(int *)(iVar6 + -4) + 0x7b9) = 1;
    *(undefined1 *)(*(int *)(iVar6 + -4) + 0x7bf) = 0;
    rkisp_hw_enum_isp_size(*(undefined4 *)(iVar6 + -4));
    return 0;
  }
  return 0xffffffea;
}



/* ===== rkisp_reset_handle_v2x @ 00016288 size=670 ===== */

undefined4 rkisp_reset_handle_v2x(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int local_c8 [2];
  undefined1 local_c0 [4];
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar3 = *(int *)(param_1 + 8);
  memset(local_c0,0,0xa0);
  local_c8[0] = 0x1408;
  local_c8[1] = 0x1478;
  local_bc = 0x141c;
  uStack_b8 = 0x1488;
  local_b0 = 0x142c;
  uStack_ac = 0x1494;
  local_a4 = 0x143c;
  uStack_a0 = 0x14a0;
  local_98 = 0x1450;
  uStack_94 = 0x14b0;
  local_8c = 0x1460;
  uStack_88 = 0x14bc;
  local_80 = 0x1820;
  uStack_7c = 0x182c;
  local_74 = 0x1830;
  uStack_70 = 0x183c;
  local_68 = 0x1840;
  uStack_64 = 0x184c;
  local_5c = 0x1850;
  uStack_58 = 0x185c;
  local_50 = 0x1870;
  uStack_4c = 0x1878;
  local_44 = 0x1880;
  uStack_40 = 0x1888;
  local_38 = 0x1890;
  uStack_34 = 0x1898;
  local_2c = 0x1980;
  uStack_28 = 0x1990;
  iVar1 = kmalloc_order(0x6000,0xdc0,3);
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    puVar5 = (uint *)(iVar1 + 0x1c00);
    iVar4 = 0;
    _dev_info(*(undefined4 *)(param_1 + 0xc),DAT_0001652c,DAT_00016528);
    mmiocpy(iVar1,iVar3,0x6000);
    rkisp_soft_reset(*(undefined4 *)(param_1 + 0x94),1);
    *(uint *)(iVar1 + 0x400) = *(uint *)(iVar1 + 0x400) & 0xfffffdee;
    *(undefined4 *)(iVar1 + 0x1404) = 0;
    *puVar5 = *puVar5 & 0xfffffffe;
    mmiocpy(iVar3,iVar1,0x19b8);
    mmiocpy(iVar3 + 0x1c00,puVar5,0x4400);
    piVar6 = local_c8;
    do {
      iVar7 = piVar6[1];
      piVar6[2] = *(int *)(iVar1 + *piVar6);
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(*piVar6 + iVar3) = *(undefined4 *)(iVar1 + iVar7);
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 3;
    } while (iVar4 != 0xe);
    *(undefined4 *)(param_1 + 0x99e4) = 0;
    *(uint *)(param_1 + 0x99e0) = *(uint *)(param_1 + 0x99e0) & 0xfb00 | 1;
    *(undefined4 *)(*(int *)(param_1 + 0x94) + 0x7a0) = 1;
    if ((*(uint *)(iVar1 + 0x880) & 0xf) != 0) {
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(uint *)(iVar3 + 0x880) = *(uint *)(iVar1 + 0x880) | 0x20;
    }
    if ((*(uint *)(iVar1 + 0x1000) & 0xf) != 0) {
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(uint *)(iVar3 + 0x1000) = *(uint *)(iVar1 + 0x1000) | 0x100;
    }
    if ((*(uint *)(iVar1 + 0xc00) & 0xf) != 0) {
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(uint *)(iVar3 + 0xc00) = *(uint *)(iVar1 + 0xc00) | 0x100;
    }
    force_cfg_update(param_1);
    *(uint *)(iVar1 + 0x400) = *(uint *)(iVar1 + 0x400) | 0x211;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar3 + 0x400) = *(undefined4 *)(iVar1 + 0x400);
    iVar4 = 0;
    (**(code **)(DAT_00016530 + 4))(DAT_00016534);
    piVar6 = local_c8;
    do {
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(int *)(*piVar6 + iVar3) = piVar6[2];
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 3;
    } while (iVar4 != 0xe);
    if (*(int *)(param_1 + 0x97a4) == 0x40) {
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      uVar2 = rkisp_read_reg_cache(param_1,0x18cc);
      *(undefined4 *)(iVar3 + 0x18cc) = uVar2;
    }
    rkisp_set_bits(param_1,0x5bc,0,0xc,1);
    if (*(byte *)(param_1 + 0x982c) - 4 < 3) {
      if (*(char *)(*(int *)(param_1 + 0x94) + 0x7b8) == '\0') {
        rkisp_trigger_read_back(param_1,1,0,1);
      }
      else {
        rkisp_rdbk_trigger_event(param_1,0);
      }
    }
    kfree(iVar1);
    _dev_info(*(undefined4 *)(param_1 + 0xc),DAT_00016538,DAT_00016528);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== rkisp_check_idle @ 0001653c size=376 ===== */

void rkisp_check_idle(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((((*(char *)(*(int *)(param_1 + 0x94) + 0x7bf) != '\0') && (*(int *)(param_1 + 0x9b20) != 0))
      && ((int)(param_2 << 0x1f) < 0)) && (*(char *)(param_1 + 0xe039) == '\0')) goto LAB_0001664a;
  uVar2 = *(uint *)(param_1 + 0x9ad8);
  uVar3 = uVar2 & param_2 | *(uint *)(param_1 + 0x9ad4);
  *(uint *)(param_1 + 0x9ad4) = uVar3;
  uVar5 = param_1;
  if (2 < *DAT_000166b4) {
    printk(DAT_000166bc,param_1 + 0xa8,DAT_000166b8,param_2,uVar3,uVar2);
    uVar5 = uVar3;
    param_2 = uVar2;
  }
  if ((*(int *)(param_1 + 0x9ad4) == *(int *)(param_1 + 0x9ad8)) &&
     (*(char *)(*(int *)(param_1 + 0x94) + 0x7a5) != '\0')) {
    *(undefined1 *)(*(int *)(param_1 + 0x94) + 0x7a4) = 0;
    *(uint *)(*(int *)(param_1 + 0x94) + 0x7a0) = *(uint *)(*(int *)(param_1 + 0x94) + 0x7a0) | 1;
    iVar1 = completion_done(*(int *)(param_1 + 0x94) + 0x790);
    if (iVar1 == 0) {
      complete(*(int *)(param_1 + 0x94) + 0x790);
    }
  }
  if ((*(uint *)(param_1 + 0x9ad8) & ~*(uint *)(param_1 + 0x9ad4)) != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x9b1c);
  if (2 < iVar1 - 4U) {
    return;
  }
  if (*(char *)(param_1 + 0xe039) != '\0') {
    rkisp_fast_switch_rx_buf(param_1,1);
    *(undefined4 *)(param_1 + 0x9ad0) = 0;
    *(undefined4 *)(param_1 + 0x9ad4) = 0;
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x9ad8) & 0x78;
  if (uVar2 == 0) {
    iVar4 = 0;
    do {
      if (*(char *)(param_1 + 0x1500 + iVar4) != '\0') {
        uVar2 = 0x99e0;
        *(undefined4 *)(param_1 + 0x99e0) = *(undefined4 *)(param_1 + 0x99e0);
        goto LAB_00016632;
      }
      iVar4 = iVar4 + 0x6c0;
    } while (iVar4 != 0x4a40);
    uVar2 = 0x99e0;
    *(undefined4 *)(param_1 + 0x99e0) = 0x100;
  }
LAB_00016632:
  if (iVar1 == 5) {
    uVar3 = 0;
LAB_0001663c:
    uVar3 = uVar3 | 0x10;
  }
  else {
    if (iVar1 == 6) {
      uVar3 = 0x20;
      goto LAB_0001663c;
    }
    uVar3 = 0;
  }
  rkisp2_rawrd_isr(uVar3 | 0x40,param_1,iVar1,uVar2,uVar5,param_2);
LAB_0001664a:
  *(undefined4 *)(param_1 + 0x9ad4) = 0;
  if (*(char *)(*(int *)(param_1 + 0x94) + 0x7c2) == '\0') {
    rkisp_rdbk_trigger_event(param_1,3);
  }
  else {
    queue_work_on(1,*DAT_000166c0,param_1 + 0x9ae8);
  }
  if (*(int *)(param_1 + 0x99e0) != 0x100) {
    return;
  }
  __wake_up(param_1 + 0x9a08,3,1,0);
  return;
}



/* ===== rkisp_rx_buf_pool_free @ 000166c4 size=70 ===== */

void rkisp_rx_buf_pool_free(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x9dfc);
  iVar2 = *(int *)(*(int *)(param_1 + 0x94) + 0x778);
  do {
    if (piVar1[-1] == 0) {
      return;
    }
    if (*piVar1 != 0) {
      (**(code **)(iVar2 + 0x28))();
      (**(code **)(iVar2 + 0x20))(*piVar1);
      dma_buf_put(*(undefined4 *)(piVar1[-1] + 8));
      *piVar1 = 0;
    }
    piVar1[-1] = 0;
    piVar1 = piVar1 + 0xb6;
  } while (piVar1 != (int *)(param_1 + 0xe23c));
  return;
}



/* ===== rkisp_sd_s_rx_buffer @ 0001670a size=792 ===== */

uint rkisp_sd_s_rx_buffer(int param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int local_108;
  int local_104;
  int *local_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar8 = *(int *)(param_1 + 100);
  if (param_2 == 0) {
    return 0xffffffea;
  }
  if (*(char *)(param_2 + 0x24) != '\0') goto LAB_000168b4;
  iVar11 = *(int *)(*(int *)(iVar8 + -4) + 0x778);
  iVar6 = 0;
  do {
    iVar9 = iVar6;
    if (*(int *)(iVar8 + 0x9d60 + iVar6 * 0x2d8) == 0) goto LAB_00016756;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x18);
  iVar9 = 0x17;
LAB_00016756:
  *(int *)(iVar9 * 0x2d8 + iVar8 + 0x9d60) = param_2;
  local_4c = DAT_00016a24;
  if (0 < *DAT_00016a24) {
    local_108 = iVar6;
    local_104 = param_2;
    printk(DAT_00016a2c,iVar8 + 0x10,DAT_00016a28,*(undefined4 *)(param_2 + 0x1c));
  }
  if (*(char *)(param_2 + 0x26) == '\0') {
    uVar2 = (**(code **)(iVar11 + 0x1c))
                      (*(undefined4 *)(*(int *)(iVar8 + -4) + 8),*(undefined4 **)(param_2 + 8),
                       **(undefined4 **)(param_2 + 8));
    uVar4 = uVar2;
    if (uVar2 < 0xfffff001) {
      *(uint *)(iVar9 * 0x2d8 + iVar8 + 0x9d64) = uVar2;
      uVar4 = (**(code **)(iVar11 + 0x24))();
      if (uVar4 == 0) {
        if (*(char *)(*(int *)(iVar8 + -4) + 0x7b6) == '\0') {
          puVar3 = (undefined4 *)(**(code **)(iVar11 + 0x30))(uVar2);
          uVar10 = *puVar3;
        }
        else {
          piVar7 = (int *)(**(code **)(iVar11 + 0x30))();
          uVar10 = *(undefined4 *)(*piVar7 + 0xc);
        }
        piVar7 = (int *)(*(int *)(*(int *)(param_2 + 8) + 4) + 0x1c);
        HintPreloadData(piVar7);
        do {
          ExclusiveAccess(piVar7);
          bVar1 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar1);
        *piVar7 = *piVar7 + 1;
        iVar6 = (**(code **)(iVar11 + 0x2c))(uVar2);
        goto LAB_00016790;
      }
    }
    rkisp_rx_buf_pool_free(iVar8 + -0x98);
    if (uVar4 != 0) {
      return uVar4;
    }
  }
  else {
    uVar10 = *(undefined4 *)(param_2 + 0xc);
    iVar6 = 0;
LAB_00016790:
    *(undefined1 *)(param_2 + 0x24) = 1;
    iVar11 = iVar9 * 0x2d8 + iVar8;
    *(int *)(iVar11 + 0x9d5c) = param_2;
    *(undefined4 *)(iVar11 + 0x9d38) = uVar10;
    *(int *)(iVar11 + 0x9d18) = iVar6;
    if (*(int *)(param_2 + 0x1c) == 0) {
      iVar11 = iVar8 + 0x8530;
    }
    else if (*(int *)(param_2 + 0x1c) == 1) {
      iVar11 = iVar8 + 0x77b0;
    }
    else {
      iVar11 = iVar8 + 0x7e70;
    }
    if (*(char *)(param_2 + 0x25) != '\0') {
      *(undefined4 *)(iVar11 + 0x6a4) = 0;
      if (*(char *)(param_2 + 0x28) != '\0') {
        *(undefined4 *)(iVar11 + 0x6a4) = 2;
      }
      memcpy(&local_108,(void *)(iVar11 + 0x538),0xb4);
      rkisp_dmarx_set_fmt(iVar11,*(undefined4 *)(iVar11 + 0x52c),*(undefined4 *)(iVar11 + 0x530),
                          *(undefined4 *)(iVar11 + 0x534));
      (*(code *)**(undefined4 **)(iVar11 + 0x5fc))(iVar11);
      *(undefined1 *)(param_2 + 0x25) = 0;
    }
    if (0 < *local_4c) {
      local_108 = iVar6;
      printk(DAT_00016a30,iVar8 + 0x10,DAT_00016a28,uVar10);
    }
  }
LAB_000168b4:
  iVar6 = 0;
  do {
    iVar11 = *(int *)(iVar8 + 0x9d60 + iVar6 * 0x2d8);
    if (param_2 == iVar11) {
      if (*(int *)(iVar11 + 0x1c) == 0) {
        piVar7 = (int *)(iVar8 + 0x8530);
      }
      else if (*(int *)(iVar11 + 0x1c) == 1) {
        piVar7 = (int *)(iVar8 + 0x77b0);
      }
      else {
        piVar7 = (int *)(iVar8 + 0x7e70);
      }
      if (1 < *DAT_00016a24) {
        local_104 = *(int *)(iVar6 * 0x2d8 + iVar8 + 0x9d38);
        local_108 = *(int *)(iVar11 + 0x18);
        printk(DAT_00016a34,iVar8 + 0x10,DAT_00016a38,*(undefined4 *)(iVar8 + 0x9a84));
      }
      if (*(int *)(iVar8 + 0x9a84) - 4U < 3) {
        local_44 = *(undefined4 *)(iVar11 + 0x10);
        uStack_40 = *(undefined4 *)(iVar11 + 0x14);
        iVar9 = iVar8 + iVar6 * 0x2d8;
        iVar8 = iVar6 * 0x2d8 + iVar8 + 0x9a90;
        *(undefined4 *)(iVar9 + 0x9aa8) = local_44;
        *(undefined4 *)(iVar9 + 0x9aac) = uStack_40;
        local_34 = *(undefined4 *)(iVar11 + 0x18);
        *(undefined4 *)(iVar9 + 0x9c00) = local_34;
        iVar6 = piVar7[2];
        local_30 = 0;
        uStack_2c = 0;
        disableIRQinterrupts();
        local_3c = local_44;
        uStack_38 = uStack_40;
        if ((piVar7 + 0x181 == (int *)piVar7[0x181]) && (piVar7[0x183] == 0)) {
          piVar7[0x183] = iVar8;
          (**(code **)(piVar7[0x17f] + 0x18))(piVar7);
        }
        else {
          piVar5 = (int *)piVar7[0x182];
          piVar7[0x182] = iVar8 + 0x280;
          *(int **)(iVar8 + 0x280) = piVar7 + 0x181;
          *(int **)(iVar8 + 0x284) = piVar5;
          *piVar5 = iVar8 + 0x280;
        }
        if (*piVar7 == 3) {
          rkisp_rdbk_trigger_event(iVar6,0,&local_44);
        }
      }
      else {
        iVar11 = piVar7[2];
        iVar8 = *(int *)(iVar6 * 0x2d8 + iVar8 + 0x9d38);
        rkisp_write(iVar11,*(undefined4 *)(piVar7[0x180] + 0x9c),iVar8,0);
        if (*(char *)(*(int *)(iVar11 + 0x94) + 0x7be) == '\0') {
          return 0;
        }
        iVar6 = ((uint)piVar7[0x14b] >> 1) - 0x80;
        if (piVar7[0x1a9] == 0) {
          uVar4 = (uint)*(byte *)(piVar7 + 0x149) * iVar6 >> 3;
        }
        else {
          uVar4 = ((int)(*(byte *)(piVar7 + 0x149) + 7) >> 3) * iVar6;
        }
        rkisp_next_write(iVar11,*(undefined4 *)(piVar7[0x180] + 0x9c),uVar4 + iVar8,0);
      }
      return 0;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x18);
  return 0xffffffea;
}



/* ===== rkisp_isp_queue_event_sof @ 00016a3c size=82 ===== */

void rkisp_isp_queue_event_sof(int param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_a0;
  undefined1 auStack_9c [4];
  int local_98;
  int local_14;
  
  piVar2 = DAT_00016a90;
  local_14 = *DAT_00016a90;
  memset(auStack_9c,0,0x84);
  local_a0 = 4;
  piVar3 = (int *)(param_1 + 0x230);
  HintPreloadData(piVar3);
  do {
    ExclusiveAccess(piVar3);
    local_98 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = local_98 + 1;
  v4l2_event_queue(*(undefined4 *)(param_1 + 0xa0),&local_a0);
  if (local_14 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== rkisp_register_isp_subdev @ 00016a94 size=588 ===== */

int rkisp_register_isp_subdev(int param_1,int param_2)

{
  undefined1 uVar1;
  char *__src;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = param_1 + 0xc30;
  __mutex_init(param_1 + 0xdf68,DAT_00016ce4,DAT_00016ce0);
  iVar3 = __kfifo_alloc(param_1 + 0x9af8,0x1c0,1,0xcc0);
  iVar10 = DAT_00016cf0;
  if (iVar3 < 0) {
    printk(DAT_00016ce8,param_2 + 0x10,iVar3);
  }
  else {
    v4l2_subdev_init(iVar11,DAT_00016cec);
    __src = DAT_00016cf4;
    *(int *)(param_1 + 0xc68) = iVar10;
    *(uint *)(param_1 + 0xc90) = *(uint *)(param_1 + 0xc90) | 0xc;
    *(undefined4 *)(param_1 + 0xc48) = 0x20000;
    strcpy((char *)(param_1 + 0xca4),__src);
    *(undefined4 *)(param_1 + 0xd10) = 5;
    *(undefined4 *)(param_1 + 0xd30) = 1;
    *(undefined4 *)(param_1 + 0xd50) = 2;
    *(undefined4 *)(param_1 + 0xd70) = 2;
    iVar3 = media_entity_pads_init(iVar11,4,param_1 + 0xcf4);
    uVar4 = DAT_00016cf8;
    if (-1 < iVar3) {
      *(int *)(param_1 + 0xcc8) = param_1;
      *(undefined4 *)(param_1 + 0xc88) = uVar4;
      *(undefined4 *)(param_1 + 0xcc4) = 4;
      iVar3 = v4l2_device_register_subdev(param_2,iVar11);
      if (-1 < iVar3) {
        memset((void *)(param_1 + 0xe0c),0,0x28);
        *(undefined4 *)(param_1 + 0xe0c) = 0x3007;
        puVar6 = (undefined4 *)(param_1 + 0xe10);
        puVar7 = (undefined4 *)(iVar10 + 0xc);
        do {
          puVar8 = puVar7;
          puVar5 = puVar6;
          puVar7 = puVar8 + 2;
          uVar4 = puVar8[1];
          *puVar5 = *puVar8;
          puVar5[1] = uVar4;
          puVar6 = puVar5 + 2;
        } while (puVar7 != (undefined4 *)(iVar10 + 0x14));
        uVar1 = *(undefined1 *)(puVar8 + 3);
        puVar5[2] = *puVar7;
        *(undefined1 *)(puVar5 + 3) = uVar1;
        *(undefined2 *)(param_1 + 0xe1d) = 0;
        *(undefined1 *)(param_1 + 0xe1f) = 0;
        *(undefined1 *)(param_1 + 0xe20) = 2;
        *(undefined4 *)(param_1 + 0xe24) = 0x2b;
        *(undefined4 *)(param_1 + 0xe2c) = 3;
        *(undefined1 *)(param_1 + 0xe30) = 10;
        memset((void *)(param_1 + 0xe0c),0,0x28);
        puVar6 = DAT_00016d00;
        *(undefined4 *)(param_1 + 0xe0c) = 0x3007;
        puVar7 = (undefined4 *)(param_1 + 0xe10);
        do {
          puVar8 = puVar7;
          puVar5 = puVar6;
          puVar6 = puVar5 + 2;
          uVar4 = puVar5[1];
          *puVar8 = *puVar5;
          puVar8[1] = uVar4;
          puVar7 = puVar8 + 2;
        } while (puVar6 != (undefined4 *)(iVar10 + 0x14));
        uVar1 = *(undefined1 *)(puVar5 + 3);
        puVar8[2] = *puVar6;
        *(undefined1 *)(puVar8 + 3) = uVar1;
        *(undefined2 *)(param_1 + 0xe1d) = 0;
        *(undefined1 *)(param_1 + 0xe1f) = 0;
        *(undefined1 *)(param_1 + 0xe20) = 2;
        *(undefined4 *)(param_1 + 0xe24) = 0x2b;
        *(undefined4 *)(param_1 + 0xe2c) = 3;
        *(undefined1 *)(param_1 + 0xe30) = 10;
        *(undefined4 *)(param_1 + 0xde0) = 600;
        *(undefined4 *)(param_1 + 0xe40) = 600;
        *(undefined4 *)(param_1 + 0xe34) = 0;
        *(undefined4 *)(param_1 + 0xe38) = 0;
        *(undefined4 *)(param_1 + 0xddc) = 800;
        *(undefined4 *)(param_1 + 0xde4) = 0x3007;
        *(undefined4 *)(param_1 + 0xe3c) = 800;
        *(undefined4 *)(param_1 + 0xe4c) = *(undefined4 *)(param_1 + 0xe34);
        *(undefined4 *)(param_1 + 0xe50) = *(undefined4 *)(param_1 + 0xe38);
        *(undefined4 *)(param_1 + 0xe54) = *(undefined4 *)(param_1 + 0xe3c);
        *(undefined4 *)(param_1 + 0xe58) = *(undefined4 *)(param_1 + 0xe40);
        uVar4 = DAT_00016d04[1];
        *(undefined4 *)(param_1 + 0xe44) = *DAT_00016d04;
        *(undefined4 *)(param_1 + 0xe48) = uVar4;
        *(undefined4 *)(param_1 + 0xe64) = 1;
        *(undefined4 *)(param_1 + 0xe68) = 1;
        *(undefined4 *)(param_1 + 0x9838) = 0;
        *(undefined4 *)(param_1 + 0x99e0) = 0x100;
        iVar10 = *(int *)(param_1 + 0x94);
        *(undefined4 *)(param_1 + 0xe60) = 0;
        uVar4 = DAT_00016ce0;
        *(undefined4 *)(iVar10 + 0x79c) = 0;
        *(int *)(iVar10 + 0x77c) = iVar10;
        uVar2 = DAT_00016d08;
        uVar9 = *(uint *)(param_1 + 0x97a4);
        *(undefined4 *)(iVar10 + 0x790) = 0;
        if ((uVar9 & 0xffffffef) == 0x40) {
          *(undefined4 *)(iVar10 + 0x79c) = DAT_00016d0c;
        }
        __init_swait_queue_head(iVar10 + 0x794,uVar2,uVar4);
        *(int *)(iVar10 + 0x784) = iVar10 + 0x784;
        *(int *)(iVar10 + 0x788) = iVar10 + 0x784;
        uVar4 = DAT_00016d10;
        *(undefined4 *)(iVar10 + 0x780) = 0xffffffe0;
        *(undefined4 *)(iVar10 + 0x78c) = uVar4;
        *(undefined4 *)(param_1 + 0x9ae8) = 0xffffffe0;
        *(int *)(param_1 + 0x9aec) = param_1 + 0x9aec;
        uVar4 = DAT_00016d14;
        *(int *)(param_1 + 0x9af0) = param_1 + 0x9aec;
        *(undefined4 *)(param_1 + 0x9af4) = uVar4;
        return 0;
      }
      printk(DAT_00016cfc,(char *)(param_1 + 0xca4));
    }
    __kfifo_free(param_1 + 0x9af8);
  }
  return iVar3;
}



/* ===== rkisp_unregister_isp_subdev @ 00016d18 size=26 ===== */

void rkisp_unregister_isp_subdev(int param_1)

{
  __kfifo_free(param_1 + 0x9af8);
  v4l2_device_unregister_subdev(param_1 + 0xc30);
  return;
}



/* ===== rkisp_mipi_isr @ 00016d32 size=196 ===== */

void rkisp_mipi_isr(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  if (2 < *DAT_00016df8) {
    printk(DAT_00016dfc,param_2 + 0xa8,param_1);
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar1 + 0x1c14) = 0xffffffff;
  if ((DAT_00016e00 & param_1) == 0) {
    if (param_1 != 0x1000000) goto LAB_00016dd0;
    if (*(char *)(param_2 + 0xe5c) == '\0') {
      return;
    }
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x1c08);
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(uint *)(iVar1 + 0x1c08) = uVar2 & 0xfff0000f;
    *(undefined1 *)(param_2 + 0xe5c) = 1;
    if (param_1 != 0x1000000) {
LAB_00016dd0:
      printk(DAT_00016e04,param_2 + 0xa8,param_1);
      uVar2 = *(uint *)(iVar1 + 0x1c00);
      DataSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(uint *)(iVar1 + 0x1c00) = uVar2 | 2;
      return;
    }
  }
  uVar2 = *(uint *)(iVar1 + 0x1c08);
  DataSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(uint *)(iVar1 + 0x1c08) = uVar2 | 0xffff0;
  *(undefined1 *)(param_2 + 0xe5c) = 0;
  return;
}



/* ===== rkisp_mipi_v13_isr @ 00016e08 size=228 ===== */

void rkisp_mipi_v13_isr(uint param_1,uint param_2,uint param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_4 + 8);
  uVar4 = param_1;
  uVar5 = param_2;
  if (2 < *DAT_00016eec) {
    uVar4 = param_3;
    printk(DAT_00016ef0,param_4 + 0xa8,param_1,param_2,param_3,param_2);
  }
  if ((param_1 & 0xff0) != 0) {
    uVar3 = *(uint *)(iVar2 + 0x702c);
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(uint *)(iVar2 + 0x702c) = uVar3 & 0xfffff00f;
    *(undefined1 *)(param_4 + 0xe5c) = 1;
  }
  bVar1 = (DAT_00016ef4 & param_2) != 0;
  if (bVar1) {
    uVar3 = *(uint *)(iVar2 + 0x7030);
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(uint *)(iVar2 + 0x7030) = uVar3 & 0xfff0ff0f;
    *(undefined1 *)(param_4 + 0xe5c) = 1;
  }
  if (((param_3 & 0x3f) == 0) || (param_1 != 0 || param_2 != 0)) {
    if (param_1 != 0) {
      printk(DAT_00016efc,param_4 + 0xa8,param_1,bVar1,uVar4,uVar5);
    }
    if (param_2 != 0) {
      printk(DAT_00016f00,param_4 + 0xa8,param_2);
      return;
    }
  }
  else if (*(char *)(param_4 + 0xe5c) != '\0') {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar2 + 0x702c) = DAT_00016ef8;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar2 + 0x7030) = 0x3ffffff;
    *(undefined1 *)(param_4 + 0xe5c) = 0;
  }
  return;
}



/* ===== rkisp_isp_isr @ 00016f04 size=1748 ===== */

void rkisp_isp_isr(uint param_1,uint param_2,int param_3)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined4 local_2c [2];
  
  iVar7 = *(int *)(param_3 + 0x94);
  piVar1 = (int *)(iVar7 + 0x10);
  if (*(char *)(iVar7 + 0x7be) != '\0') {
    piVar1 = (int *)(iVar7 + 0x14);
  }
  iVar6 = *piVar1;
  if (((int)(param_2 << 0x1f) < 0) && (*(int *)(param_3 + 0x7124) != 0)) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar6 + 0x4400) = 0x80000000;
  }
  piVar1 = DAT_000172c0;
  uVar8 = param_1 & 2;
  if ((*(char *)(iVar7 + 0x7be) != '\0') && (uVar3 = rkisp_read(param_3,0x5c0,1), uVar3 != 0)) {
    rkisp_write(param_3,0x5c8,uVar3,1);
    if (2 < *piVar1) {
      printk(DAT_00017294,param_3 + 0xa8,uVar3);
    }
    if ((uVar8 != 0) && ((uVar3 & 2) == 0)) {
      lVar14 = ktime_get();
      iVar7 = DAT_000172c4;
      uVar9 = DAT_0001729c;
      uVar2 = (ulonglong)DAT_00017298;
      iVar4 = (int)(lVar14 + uVar2 >> 0x20);
      (**(code **)(DAT_000172c4 + 4))(DAT_0001729c);
      while (uVar3 = rkisp_read(param_3,0x5c0,1), (uVar3 & 2) == 0) {
        uVar15 = ktime_get();
        iVar10 = (int)((ulonglong)uVar15 >> 0x20);
        bVar13 = (uint)(lVar14 + uVar2) < (uint)uVar15;
        if ((int)((iVar4 - iVar10) - (uint)bVar13) < 0 !=
            (SBORROW4(iVar4,iVar10) != SBORROW4(iVar4 - iVar10,(uint)bVar13))) {
          uVar3 = rkisp_read(param_3,0x5c0,1);
          iVar7 = 0;
          if ((int)(uVar3 << 0x1e) < 0) goto LAB_00016fe8;
          if (uVar3 == 0) goto LAB_00016ffc;
          iVar7 = -0x6e;
          goto LAB_00016fe8;
        }
        (**(code **)(iVar7 + 4))(uVar9);
      }
      iVar7 = 0;
LAB_00016fe8:
      rkisp_write(param_3,0x5c8,uVar3,1);
      if (iVar7 != 0) {
LAB_00016ffc:
        _dev_err(*(undefined4 *)(param_3 + 0xc),DAT_000172a0);
      }
    }
  }
  if (2 < *piVar1) {
    printk(DAT_000172a4,param_3 + 0xa8,param_1,param_2);
  }
  *(int *)(param_3 + 0x99e8) = *(int *)(param_3 + 0x99e8) + 1;
  if ((param_1 & 0x40) == 0) {
    bVar13 = false;
    goto LAB_000170ba;
  }
  iVar7 = *(int *)(param_3 + 0x94);
  if (*(char *)(iVar7 + 0x7a5) != '\0') {
    *(uint *)(iVar7 + 0x7a0) = *(uint *)(iVar7 + 0x7a0) & 0xff00 | 4;
    iVar7 = completion_done(*(int *)(param_3 + 0x94) + 0x790);
    if (iVar7 == 0) {
      complete(*(int *)(param_3 + 0x94) + 0x790);
    }
  }
  if (*(byte *)(param_3 + 0x982c) - 4 < 3) {
    if (*(char *)(*(int *)(param_3 + 0x94) + 0x7b9) == '\0') {
      rkisp_write(param_3,0x3e04,0,1);
    }
    rkisp_stats_rdbk_enable(param_3 + 0x6008,1);
LAB_00017092:
    bVar13 = false;
  }
  else {
    if ((int)((uint)*(byte *)(param_3 + 0x155c) << 0x1f) < 0) {
      if (*(int *)(*(int *)(param_3 + 0x318) + 4) == 5) {
        if (*(uint *)(param_3 + 0x97a4) < 2) {
          puVar5 = (uint *)(iVar6 + 0x1c40);
        }
        else {
          if ((*(uint *)(param_3 + 0x97a4) & 0xffffffef) != 0x20) goto LAB_0001749e;
          puVar5 = (uint *)(iVar6 + 0x7070);
        }
        if (puVar5 == (uint *)0x0) goto LAB_0001749e;
        DataSynchronizationBarrier(0xf);
        uVar3 = (*puVar5 & 0x1ffff) >> 0x10;
      }
      else {
        DataSynchronizationBarrier(0xf);
        uVar3 = (*(uint *)(iVar6 + 0x5a8) & 7) >> 2;
      }
      *(uint *)(param_3 + 0x1c0c) = uVar3;
    }
LAB_0001749e:
    if (*(int *)(param_3 + 0x9824) < 0) {
      if (uVar8 == 0) {
        uVar15 = ktime_get();
        *(undefined8 *)(param_3 + 0xe70) = uVar15;
        rkisp_isp_queue_event_sof(param_3 + 0xc30);
        rkisp_stream_frame_start(param_3,param_1);
        goto LAB_00017092;
      }
      bVar13 = true;
    }
    else {
      bVar13 = uVar8 != 0;
    }
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar6 + 0x5c8) = 0x40;
  DataSynchronizationBarrier(0xf);
  if (*(int *)(iVar6 + 0x5c4) << 0x19 < 0) {
    printk(DAT_000172a8,param_3 + 0xa8);
  }
LAB_000170ba:
  if ((param_1 & 0xc) != 0) {
    if ((int)(param_1 << 0x1c) < 0) {
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar6 + 0x5c8) = 8;
      uVar9 = *(undefined4 *)(iVar6 + 0x63c);
      DataSynchronizationBarrier(0xf);
      printk(DAT_000172ac,param_3 + 0xa8,uVar9);
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar6 + 0x640) = uVar9;
    }
    if ((int)(param_1 << 0x1d) < 0) {
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar6 + 0x5c8) = 4;
      printk(DAT_000172b0,param_3 + 0xa8);
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar6 + 0x5c8) = 4;
    }
    uVar3 = *(uint *)(param_3 + 0x99e4);
    *(uint *)(param_3 + 0x99e4) = uVar3 + 1;
    if ((0x32 < uVar3) && (-1 < (int)(*(uint *)(param_3 + 0x99e0) << 0x15))) {
      *(uint *)(param_3 + 0x99e0) = *(uint *)(param_3 + 0x99e0) & 0xff | 0x400;
      rkisp_clear_bits(param_3,0x5bc,0xc,1);
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar6 + 0x5c8) = 8;
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar6 + 0x5c8) = 4;
      iVar7 = *(int *)(param_3 + 0x94);
      if (*(char *)(iVar7 + 0x7a5) != '\0') {
        *(uint *)(iVar7 + 0x7a0) = *(byte *)(iVar7 + 0x7a0) | 0x400;
        iVar7 = completion_done(*(int *)(param_3 + 0x94) + 0x790);
        if (iVar7 == 0) {
          complete(*(int *)(param_3 + 0x94) + 0x790);
        }
      }
    }
  }
  if ((int)(param_1 << 0xf) < 0) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar6 + 0x5c8) = 0x10000;
    uVar9 = *(undefined4 *)(iVar6 + 0x63c);
    DataSynchronizationBarrier(0xf);
    printk(DAT_000172b4,param_3 + 0xa8,uVar9);
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar6 + 0x640) = uVar9;
  }
  if ((int)(param_1 << 0x1a) < 0) {
    iVar7 = ktime_get();
    *(int *)(param_3 + 0xe80) = iVar7 - *(int *)(param_3 + 0xe78);
    *(uint *)(param_3 + 0x99e0) = *(uint *)(param_3 + 0x99e0) & 0xff00 | 2;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar6 + 0x5c8) = 0x20;
    DataSynchronizationBarrier(0xf);
    if (*(int *)(iVar6 + 0x5c4) << 0x1a < 0) {
      printk(DAT_000172b8,param_3 + 0xa8);
    }
  }
  if (uVar8 != 0) {
    if ((*(char *)(param_3 + 0xe038) == '\0') || (2 < *(int *)(param_3 + 0x9b1c) - 4U)) {
      iVar7 = ktime_get();
      *(int *)(param_3 + 0xe80) = iVar7 - *(int *)(param_3 + 0xe78);
    }
    *(uint *)(param_3 + 0x99e0) = *(uint *)(param_3 + 0x99e0) & 0xff00 | 1;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar6 + 0x5c8) = 2;
    DataSynchronizationBarrier(0xf);
    if (*(int *)(iVar6 + 0x5c4) << 0x1e < 0) {
      printk(DAT_000172bc,param_3 + 0xa8);
    }
    rkisp_dmarx_get_frame(param_3,param_3 + 0xe88,0,0,1);
    iVar7 = *(int *)(param_3 + 8);
    local_2c[0] = 0;
    if (*(uint *)(param_3 + 0x97a4) < 2) {
      iVar4 = *(int *)(param_3 + 0xe60);
      iVar10 = 0;
      iVar11 = *(int *)(param_3 + 0x9818);
      iVar12 = param_3 + iVar11 * 0x1c;
      *(undefined4 *)(iVar12 + 0x97c0) = 0;
      *(undefined4 *)(iVar12 + 0x97ac) = *(undefined4 *)(iVar12 + 0x97a8);
      do {
        DataSynchronizationBarrier(0xf);
        if (-1 < *(int *)(iVar7 + 0x1c04) << 0x1f) {
          if (iVar10 == 0) goto LAB_000175c6;
          break;
        }
        local_2c[0] = *(undefined4 *)(iVar7 + 0x1c34);
        DataSynchronizationBarrier(0xf);
        iVar10 = iVar10 + 4;
        __kfifo_in(param_3 + iVar11 * 0x1c + 0x97a8,local_2c,4);
        if (*(uint *)(iVar12 + 0x97b0) <
            (uint)(*(int *)(iVar12 + 0x97a8) - *(int *)(iVar12 + 0x97ac))) {
          printk(DAT_00017614,param_3 + 0xa8,DAT_00017610);
        }
      } while (iVar10 != 0x2000);
      iVar7 = iVar11 * 0x1c + param_3;
      *(int *)(iVar7 + 0x97c0) = iVar4 + -1;
      *(int *)(iVar7 + 0x97bc) = iVar10;
      *(uint *)(param_3 + 0x9818) = iVar11 + 1U & 3;
LAB_000175c6:
      if (0 < *DAT_00017618) {
        iVar7 = iVar11 * 0x1c + param_3;
        printk(DAT_0001761c,param_3 + 0xa8,*(int *)(iVar7 + 0x97a8) - *(int *)(iVar7 + 0x97ac),
               *(undefined4 *)(iVar7 + 0x97c0));
      }
    }
    *(undefined4 *)(param_3 + 0x99e4) = 0;
    *(uint *)(param_3 + 0x99e0) = *(uint *)(param_3 + 0x99e0) & 0xfffffbff;
  }
  if ((param_1 & 0x40) != 0) {
    if (*(int *)(param_3 + 0x99e0) << 0x1f < 0) {
      iVar7 = *(int *)(param_3 + 0xe80);
      iVar4 = *(int *)(param_3 + 0xe78);
      uVar15 = ktime_get();
      *(undefined8 *)(param_3 + 0xe78) = uVar15;
      *(int *)(param_3 + 0xe84) = (int)uVar15 - (iVar4 + iVar7);
    }
    *(uint *)(param_3 + 0x99e0) = *(uint *)(param_3 + 0x99e0) & 0xff00 | 4;
    if (*(char *)(param_3 + 0x96d8) != '\0') {
      *(undefined1 *)(param_3 + 0x96d8) = 0;
      __wake_up(param_3 + 0x96c4,3,1);
    }
  }
  if ((DAT_0001760c & param_1) != 0 || (param_2 & 0xfff) != 0) {
    uVar3 = param_1;
    if (uVar8 != 0) {
      DataSynchronizationBarrier(0xf);
      uVar3 = *(uint *)(iVar6 + 0x5c0) & 0x48000 | param_1;
    }
    rkisp_stats_isr(param_3 + 0x6008,uVar3,param_2);
    if ((uVar8 != 0) && (*(char *)(param_3 + 0x664e) != '\0')) {
      rkisp_stats_rdbk_enable(param_3 + 0x6008,0);
    }
    if (2 < *(byte *)(param_3 + 0x982c) - 4) {
      rkisp_config_cmsk(param_3);
    }
  }
  if (uVar8 != 0) {
    if (*(int *)(*(int *)(param_3 + 0x94) + 0x54) == 0x70) {
      (**(code **)(*(int *)(param_3 + 0x5814) + 0x1c))();
    }
    if (*(char *)(param_3 + 0x96d9) != '\0') {
      *(undefined1 *)(param_3 + 0x96d9) = 0;
      __wake_up(param_3 + 0x96cc,3,1);
    }
  }
  rkisp_params_isr(param_3 + 0x6690,param_1);
  if ((*(int *)(param_3 + 0x9824) < 0) && (bVar13)) {
    uVar15 = ktime_get();
    *(undefined8 *)(param_3 + 0xe70) = uVar15;
    rkisp_isp_queue_event_sof(param_3 + 0xc30);
    rkisp_stream_frame_start(param_3,param_1);
  }
  if ((int)(param_1 << 6) < 0) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar6 + 0x5c8) = 0x2000000;
    rkisp_dvbm_event(param_3);
  }
  if ((int)(param_1 << 7) < 0) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar6 + 0x5c8) = 0x1000000;
    rkisp_dvbm_event(param_3);
  }
  if ((int)(param_1 << 8) < 0) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar6 + 0x5c8) = 0x800000;
    rkisp_dvbm_event(param_3);
  }
  if (uVar8 != 0) {
    rkisp_check_idle(param_3,1);
  }
  return;
}



/* ===== rkisp_vs_isr_handler @ 00017620 size=26 ===== */

undefined4 rkisp_vs_isr_handler(undefined4 param_1,int param_2)

{
  if (-1 < *(int *)(*(int *)(param_2 + 0x40) + 0x9824)) {
    rkisp_isp_queue_event_sof(*(int *)(param_2 + 0x40) + 0xc30);
  }
  return 1;
}



/* ===== rkisp_unite_write @ 0001763c size=46 ===== */

void rkisp_unite_write(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      char param_5)

{
  rkisp_write();
  if (param_5 != '\0') {
    rkisp_next_write(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



/* ===== update_rsz_shadow @ 0001766a size=86 ===== */

void update_rsz_shadow(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  if (param_2 == 0) {
    uVar3 = 0x100;
  }
  else if (*(char *)(*(int *)(iVar2 + 0x94) + 0x7b9) == '\0') {
    uVar3 = 0x100;
  }
  else {
    uVar3 = 0x200;
  }
  cVar1 = *(char *)(*(int *)(iVar2 + 0x94) + 0x7be);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x600) + 0x1c);
  rkisp_set_bits(iVar2,uVar4,0,uVar3,0,param_2);
  if (cVar1 != '\0') {
    rkisp_next_set_bits(iVar2,uVar4,0,uVar3,0);
  }
  return;
}



/* ===== rkisp_disable_dcrop @ 000176c0 size=92 ===== */

void rkisp_disable_dcrop(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = *(int *)(param_1 + 0x600);
  iVar4 = *(int *)(param_1 + 8);
  uVar3 = *(uint *)(iVar2 + 0x78) | *(uint *)(iVar2 + 0x7c);
  if (param_2 == 0) {
    uVar5 = 0x20;
  }
  else if (*(char *)(*(int *)(iVar4 + 0x94) + 0x7b9) == '\0') {
    uVar5 = 0x20;
  }
  else {
    uVar5 = 0x40;
  }
  uVar6 = *(undefined4 *)(iVar2 + 0x74);
  cVar1 = *(char *)(*(int *)(iVar4 + 0x94) + 0x7be);
  rkisp_set_bits(iVar4,uVar6,uVar3,uVar5,0,param_2,param_3);
  if (cVar1 != '\0') {
    rkisp_next_set_bits(iVar4,uVar6,uVar3,uVar5,0);
  }
  return;
}



/* ===== rkisp_config_dcrop @ 0001771c size=356 ===== */

void rkisp_config_dcrop(int *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  
  iVar5 = param_1[2];
  uVar9 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = *(uint *)(param_1[0x180] + 0x78);
  cVar1 = *(char *)(*(int *)(iVar5 + 0x94) + 0x7be);
  uVar3 = *param_2;
  uVar4 = param_2[3];
  if ((cVar1 != '\0') && (uVar6 = uVar6 >> 1, *param_1 == 6)) {
    uVar6 = uVar6 & 0xfffffff0;
  }
  rkisp_write(iVar5,*(undefined4 *)(param_1[0x180] + 0x80),uVar3,0);
  rkisp_write(iVar5,*(undefined4 *)(param_1[0x180] + 0x88),uVar6,0);
  rkisp_unite_write(iVar5,*(undefined4 *)(param_1[0x180] + 0x84),uVar9,0,cVar1);
  rkisp_unite_write(iVar5,*(undefined4 *)(param_1[0x180] + 0x8c),uVar4,0,cVar1);
  if ((param_3 == 0) || (*(char *)(*(int *)(iVar5 + 0x94) + 0x7b9) == '\0')) {
    uVar7 = uVar7 | 0x20;
  }
  else {
    uVar7 = uVar7 | 0x40;
  }
  if (cVar1 != '\0') {
    rkisp_next_write(iVar5,*(undefined4 *)(param_1[0x180] + 0x80),0x80,0);
    iVar8 = param_2[2] - uVar6;
    rkisp_next_write(iVar5,*(undefined4 *)(param_1[0x180] + 0x88),iVar8,0);
    rkisp_next_set_bits(iVar5,*(undefined4 *)(param_1[0x180] + 0x74),0,uVar7,0);
    if ((uint)param_1[0x14b] < (uint)param_2[2]) {
      uVar6 = uVar6 + 0x80;
      rkisp_write(iVar5,*(undefined4 *)(param_1[0x180] + 0x88),uVar6,0);
    }
    piVar2 = DAT_00017888;
    if (0 < *DAT_00017888) {
      printk(DAT_00017880,iVar5 + 0xa8,uVar3,uVar9,uVar6,uVar4);
      if (0 < *piVar2) {
        printk(DAT_00017884,iVar5 + 0xa8,0x80,uVar9,iVar8,uVar4);
      }
    }
  }
  rkisp_set_bits(iVar5,*(undefined4 *)(param_1[0x180] + 0x74),0,uVar7,0);
  return;
}



/* ===== rkisp_dump_rsz_regs @ 0001788c size=406 ===== */

void rkisp_dump_rsz_regs(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  uVar20 = *(undefined4 *)(param_1 + 8);
  uVar1 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x1c),0);
  uVar2 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x20),1);
  uVar3 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x24),0);
  uVar4 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x40),1);
  uVar5 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x2c),0);
  uVar6 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x48),1);
  uVar7 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x28),0);
  uVar8 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x44),1);
  uVar9 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x30),0);
  uVar10 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x4c),1);
  uVar11 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x34),0);
  uVar12 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x50),1);
  uVar13 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x54),0);
  uVar14 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 100),1);
  uVar15 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x58),0);
  uVar16 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x68),1);
  uVar17 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x5c),0);
  uVar18 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x6c),1);
  uVar19 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x60),0);
  uVar20 = rkisp_read(uVar20,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x70),1);
  printk(DAT_00017a24,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,
         uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20);
  return;
}



/* ===== rkisp_config_rsz @ 00017a28 size=1660 ===== */

void rkisp_config_rsz(int *param_1,int param_2,int param_3,int param_4,int param_5,
                     undefined1 param_6)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  int local_88;
  int local_80;
  int local_7c;
  int local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  int local_54;
  
  iVar17 = param_1[2];
  uVar1 = *(undefined1 *)(*(int *)(iVar17 + 0x94) + 0x7be);
  if ((*(int *)(iVar17 + 0x97a4) == 0x80) && (*param_1 == 1)) {
    rkisp_write(iVar17,0x1020,0,1);
    rkisp_write(iVar17,0x1024,0,1);
    rkisp_write(iVar17,0x1030,0,1);
    rkisp_write(iVar17,0x1034,0,1);
    rkisp_write(iVar17,0x1038,0,1);
    rkisp_write(iVar17,0x103c,0,1);
    rkisp_write(iVar17,0x1008,*(uint *)(param_2 + 8) | *(int *)(param_2 + 0xc) << 0x10,0);
    rkisp_write(iVar17,0x100c,*(uint *)(param_4 + 8) | *(int *)(param_4 + 0xc) << 0x10,0);
    iVar18 = *(int *)(param_2 + 8);
    iVar20 = *(int *)(param_4 + 8);
    if (iVar18 == iVar20) {
      uVar19 = 0;
    }
    else {
      uVar3 = __aeabi_uidiv((*(int *)(param_3 + 8) + 0xfffff) * 0x1000,*(int *)(param_5 + 8) + -1);
      uVar19 = 3;
      uVar4 = __aeabi_uidiv((iVar18 + 0xfffff) * 0x1000,iVar20 + -1);
      rkisp_write(iVar17,0x1010,uVar4,0);
      rkisp_write(iVar17,0x1014,uVar3,0);
    }
    if (*(int *)(param_2 + 0xc) != *(int *)(param_4 + 0xc)) {
      uVar19 = uVar19 | 0xc;
      uVar3 = __aeabi_uidiv((*(int *)(param_2 + 0xc) + 0xfffff) * 0x1000,
                            *(int *)(param_4 + 0xc) + -1);
      rkisp_write(iVar17,0x1018,uVar3,0);
      rkisp_write(iVar17,0x101c,uVar3,0);
    }
    rkisp_write(iVar17,0x1000,uVar19,0);
    rkisp_write(iVar17,0x1004);
    return;
  }
  rkisp_write(iVar17,*(undefined4 *)(param_1[0x180] + 0x54),0,1);
  rkisp_write(iVar17,*(undefined4 *)(param_1[0x180] + 0x58),0,1);
  rkisp_write(iVar17,*(undefined4 *)(param_1[0x180] + 0x5c),0,1);
  rkisp_write(iVar17,*(undefined4 *)(param_1[0x180] + 0x60),0,1);
  iVar18 = 0;
  do {
    rkisp_unite_write(iVar17,*(undefined4 *)(param_1[0x180] + 0x3c),iVar18,1,uVar1);
    iVar20 = iVar18 + 1;
    rkisp_unite_write(iVar17,*(undefined4 *)(param_1[0x180] + 0x38),iVar18,1,uVar1);
    iVar18 = iVar20;
  } while (iVar20 != 0x40);
  iVar17 = param_1[0x180];
  iVar18 = param_1[2];
  uVar3 = *(undefined4 *)(iVar17 + 0x24);
  uVar4 = *(undefined4 *)(iVar17 + 0x28);
  uVar6 = *(undefined4 *)(iVar17 + 0x2c);
  uVar7 = *(undefined4 *)(iVar17 + 0x30);
  uVar8 = *(undefined4 *)(iVar17 + 0x34);
  uVar10 = *(undefined4 *)(iVar17 + 0x1c);
  uVar11 = *(uint *)(param_2 + 8);
  uVar19 = *(uint *)(param_4 + 8);
  if (uVar11 < uVar19) {
    uVar26 = 0x11;
    local_88 = __aeabi_uidiv((uVar11 + 0xffff) * 0x10000,uVar19 - 1);
    rkisp_write(iVar18,uVar3,local_88,0);
  }
  else if (uVar11 == uVar19) {
    uVar26 = 0;
    local_88 = 1;
  }
  else {
    uVar26 = 1;
    local_88 = __aeabi_uidiv((uVar19 + 0xffff) * 0x10000,uVar11 - 1);
    local_88 = local_88 + 1;
    rkisp_write(iVar18,uVar3,local_88,0);
  }
  uVar11 = *(uint *)(param_3 + 8);
  uVar19 = *(uint *)(param_5 + 8);
  if (uVar11 < uVar19) {
    uVar26 = uVar26 | 0x22;
    iVar17 = __aeabi_uidiv((uVar11 + 0xffff) * 0x10000,uVar19 - 1);
LAB_00017c82:
    rkisp_write(iVar18,uVar6,iVar17,0);
    rkisp_write(iVar18,uVar4,iVar17,0);
  }
  else {
    if (uVar11 != uVar19) {
      uVar26 = uVar26 | 2;
      iVar17 = __aeabi_uidiv((uVar19 + 0xffff) * 0x10000,uVar11 - 1);
      iVar17 = iVar17 + 1;
      goto LAB_00017c82;
    }
    iVar17 = 1;
  }
  uVar11 = *(uint *)(param_2 + 0xc);
  uVar19 = *(uint *)(param_4 + 0xc);
  if (uVar11 < uVar19) {
    uVar26 = uVar26 | 0x44;
    local_80 = __aeabi_uidiv((uVar11 + 0xffff) * 0x10000,uVar19 - 1);
LAB_00017cbe:
    rkisp_write(iVar18,uVar7,local_80,0);
  }
  else {
    if (uVar11 != uVar19) {
      uVar26 = uVar26 | 4;
      local_80 = __aeabi_uidiv((uVar19 + 0xffff) * 0x10000,uVar11 - 1);
      local_80 = local_80 + 1;
      goto LAB_00017cbe;
    }
    local_80 = 1;
  }
  uVar11 = *(uint *)(param_3 + 0xc);
  uVar19 = *(uint *)(param_5 + 0xc);
  if (uVar11 < uVar19) {
    uVar26 = uVar26 | 0x88;
    local_7c = __aeabi_uidiv((uVar11 + 0xffff) * 0x10000,uVar19 - 1);
LAB_00017cec:
    rkisp_write(iVar18,uVar8,local_7c,0);
  }
  else {
    if (uVar11 != uVar19) {
      uVar26 = uVar26 | 8;
      local_7c = __aeabi_uidiv((uVar19 + 0xffff) * 0x10000,uVar11 - 1);
      local_7c = local_7c + 1;
      goto LAB_00017cec;
    }
    local_7c = 1;
  }
  if (*(char *)(*(int *)(iVar18 + 0x94) + 0x7be) == '\0') goto LAB_00018062;
  uVar19 = *(uint *)(param_2 + 8);
  bVar27 = *param_1 != 0;
  uVar12 = 0xc64;
  if (bVar27) {
    uVar12 = 0x1064;
    uVar13 = 0x1060;
  }
  else {
    uVar13 = 0xc60;
  }
  uVar14 = 0xc5c;
  if (bVar27) {
    uVar14 = 0x105c;
  }
  uVar15 = 0xc58;
  if (bVar27) {
    uVar15 = 0x1058;
  }
  uVar16 = 0xc78;
  if (bVar27) {
    uVar16 = 0x1078;
  }
  iVar20 = (uVar19 >> 1) + 0x80;
  local_6c = *(uint *)(param_4 + 8);
  uVar11 = local_6c >> 1;
  local_74 = uVar11;
  if (local_88 != 1) {
    local_74 = __aeabi_uidiv(uVar11 * 0x10000 + -1 + local_88,local_88);
  }
  iVar9 = (uVar11 & 0xffff) * 0x8000;
  if (iVar17 == 1) {
    local_6c = local_6c >> 2;
  }
  else {
    local_6c = __aeabi_uidiv(iVar9 + -1 + iVar17,iVar17);
  }
  if (local_88 == 1) {
    if (iVar17 != 1) {
      local_70 = 0;
      goto LAB_00017e4c;
    }
    local_78 = 0;
LAB_00018096:
    local_54 = uVar19 - local_74;
    local_70 = 0;
  }
  else {
    local_70 = (uVar11 * 0x10000 + local_88) - local_74 * local_88;
    if (iVar17 == 1) {
      local_78 = 0;
    }
    else {
LAB_00017e4c:
      local_78 = (iVar17 + iVar9) - local_6c * iVar17;
    }
    if (local_70 == 0) goto LAB_00018096;
    local_54 = (uVar19 + 1) - local_74;
  }
  uVar23 = local_6c;
  if (local_78 != 0) {
    uVar23 = local_6c + 0x7fffffff;
  }
  iVar9 = uVar19 + uVar23 * -2;
  uVar19 = iVar20 - local_54;
  if (uVar19 < 0x80) {
    uVar23 = uVar19 & 0xfffffffe;
    rkisp_next_write(iVar18,*(undefined4 *)(param_1[0x180] + 0x80),uVar23,0);
    rkisp_next_write(iVar18,*(undefined4 *)(param_1[0x180] + 0x88),iVar20 - uVar23,0);
    uVar21 = *(undefined4 *)(param_1[0x180] + 0x74);
    uVar5 = rkisp_next_read_reg_cache(iVar18,uVar21);
    rkisp_next_write(iVar18,uVar21,uVar5,0);
  }
  else {
    uVar23 = 0x80;
  }
  iVar20 = (iVar20 - iVar9) - uVar23;
  uVar22 = uVar11 & 0xf;
  rkisp_write(iVar18,uVar15,uVar11,0);
  uVar25 = uVar26 | 0x800;
  rkisp_write(iVar18,uVar14,uVar11,0);
  rkisp_write(iVar18,uVar13,0);
  rkisp_write(iVar18,uVar12,0);
  rkisp_write(iVar18,uVar16,0);
  rkisp_next_write(iVar18,uVar15,uVar11,0);
  rkisp_next_write(iVar18,uVar14,uVar11,0);
  rkisp_next_write(iVar18,uVar3,local_88,0);
  rkisp_next_write(iVar18,uVar6,iVar17,0);
  rkisp_next_write(iVar18,uVar4,iVar17,0);
  rkisp_next_write(iVar18,uVar7,local_80,0);
  rkisp_next_write(iVar18,uVar8,local_7c,0);
  rkisp_next_write(iVar18,*(undefined4 *)(param_1[0x180] + 0x54),local_70,0);
  rkisp_next_write(iVar18,*(undefined4 *)(param_1[0x180] + 0x58),local_78,0);
  rkisp_next_write(iVar18,*(undefined4 *)(param_1[0x180] + 0x5c),0);
  rkisp_next_write(iVar18,*(undefined4 *)(param_1[0x180] + 0x60),0);
  rkisp_next_write(iVar18,uVar13,uVar22,0);
  rkisp_next_write(iVar18,uVar12,uVar22,0);
  rkisp_next_write(iVar18,uVar16,uVar19 - uVar23 | iVar20 * 0x10,0);
  piVar2 = DAT_000180b0;
  rkisp_next_write(iVar18,uVar10,uVar26 | 0x1c00,0);
  uVar26 = uVar25;
  if (0 < *piVar2) {
    iVar24 = iVar18 + 0xa8;
    printk(DAT_000180a4,iVar24,uVar11,*(undefined4 *)(param_4 + 0xc),local_88,iVar17,local_80,
           local_7c);
    if ((0 < *piVar2) &&
       (printk(DAT_000180a8,iVar24,local_74,local_6c,local_70,local_78,local_80,local_7c),
       0 < *piVar2)) {
      printk(DAT_000180ac,iVar24,local_54,iVar9,uVar22,uVar22,uVar19 - uVar23,iVar20);
    }
  }
LAB_00018062:
  rkisp_write(iVar18,uVar10,uVar26,0);
  update_rsz_shadow(param_1,param_6);
  return;
}



/* ===== rkisp_disable_rsz @ 000180b4 size=68 ===== */

void rkisp_disable_rsz(int *param_1,undefined4 param_2,undefined4 param_3)

{
  rkisp_unite_write(param_1[2],*(undefined4 *)(param_1[0x180] + 0x1c),0,0,
                    *(undefined1 *)(*(int *)(param_1[2] + 0x94) + 0x7be),param_2,param_3);
  if ((*(int *)(param_1[2] + 0x97a4) == 0x80) && (*param_1 == 1)) {
    return;
  }
  update_rsz_shadow(param_1,param_2);
  return;
}



/* ===== rkisp_write @ 000180f8 size=106 ===== */

void rkisp_write(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  *(undefined4 *)(iVar1 + param_2) = param_3;
  *(undefined4 *)(iVar1 + param_2 + 0x6000) = 0xffffffff;
  if ((*(char *)(*(int *)(param_1 + 0x94) + 0x7b9) != '\0') || (param_4 != 0)) {
    *(undefined4 *)(iVar1 + param_2 + 0x6000) = 0xeeeeeeee;
    if ((*(int *)(param_1 + 0x97a4) == 0x70) && (param_2 < 0x201)) {
      rv1106_sdmmc_get_lock();
    }
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x94) + 0x10) + param_2) = param_3;
    if ((*(int *)(param_1 + 0x97a4) == 0x70) && (param_2 < 0x201)) {
      rv1106_sdmmc_put_lock();
      return;
    }
  }
  return;
}



/* ===== rkisp_next_write @ 00018162 size=68 ===== */

void rkisp_next_write(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  *(undefined4 *)(iVar1 + param_2 + 0xc000) = param_3;
  *(undefined4 *)(iVar1 + param_2 + 0x12000) = 0xffffffff;
  if ((*(char *)(*(int *)(param_1 + 0x94) + 0x7b9) != '\0') || (param_4 != 0)) {
    *(undefined4 *)(iVar1 + param_2 + 0x12000) = 0xeeeeeeee;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x94) + 0x14) + param_2) = param_3;
  }
  return;
}



/* ===== rkisp_read @ 000181a6 size=34 ===== */

undefined4 rkisp_read(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(char *)(*(int *)(param_1 + 0x94) + 0x7b9) == '\0') && (param_3 == 0)) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x90) + param_2);
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x94) + 0x10) + param_2);
    DataSynchronizationBarrier(0xf);
  }
  return uVar1;
}



/* ===== rkisp_next_read @ 000181c8 size=40 ===== */

undefined4 rkisp_next_read(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((*(char *)(*(int *)(param_1 + 0x94) + 0x7b9) == '\0') && (param_3 == 0)) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x90) + param_2 + 0xc000);
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x94) + 0x14) + param_2);
    DataSynchronizationBarrier(0xf);
  }
  return uVar1;
}



/* ===== rkisp_set_bits @ 000181f0 size=40 ===== */

void rkisp_set_bits(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,
                   undefined1 param_5)

{
  undefined8 uVar1;
  
  uVar1 = rkisp_read(param_1,param_2,param_5);
  rkisp_write(param_1,(int)((ulonglong)uVar1 >> 0x20),(uint)uVar1 & ~param_3 | param_4,param_5);
  return;
}



/* ===== rkisp_next_set_bits @ 00018218 size=40 ===== */

void rkisp_next_set_bits(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,
                        undefined1 param_5)

{
  undefined8 uVar1;
  
  uVar1 = rkisp_next_read(param_1,param_2,param_5);
  rkisp_next_write(param_1,(int)((ulonglong)uVar1 >> 0x20),(uint)uVar1 & ~param_3 | param_4,param_5)
  ;
  return;
}



/* ===== rkisp_clear_bits @ 00018240 size=32 ===== */

void rkisp_clear_bits(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = rkisp_read(param_1,param_2,param_4);
  rkisp_write(param_1,(int)((ulonglong)uVar1 >> 0x20),(uint)uVar1 & ~param_3,param_4);
  return;
}



/* ===== rkisp_next_clear_bits @ 00018260 size=32 ===== */

void rkisp_next_clear_bits(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = rkisp_next_read(param_1,param_2,param_4);
  rkisp_next_write(param_1,(int)((ulonglong)uVar1 >> 0x20),(uint)uVar1 & ~param_3,param_4);
  return;
}



/* ===== rkisp_write_reg_cache @ 00018280 size=8 ===== */

void rkisp_write_reg_cache(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 0x90) + param_2) = param_3;
  return;
}



/* ===== rkisp_next_write_reg_cache @ 00018288 size=14 ===== */

void rkisp_next_write_reg_cache(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + *(int *)(param_1 + 0x90) + 0xc000) = param_3;
  return;
}



/* ===== rkisp_read_reg_cache @ 00018296 size=8 ===== */

undefined4 rkisp_read_reg_cache(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x90) + param_2);
}



/* ===== rkisp_next_read_reg_cache @ 0001829e size=14 ===== */

undefined4 rkisp_next_read_reg_cache(int param_1,int param_2)

{
  return *(undefined4 *)(param_2 + *(int *)(param_1 + 0x90) + 0xc000);
}



/* ===== rkisp_set_reg_cache_bits @ 000182ac size=18 ===== */

void rkisp_set_reg_cache_bits(int param_1,int param_2,uint param_3,uint param_4)

{
  *(uint *)(*(int *)(param_1 + 0x90) + param_2) =
       *(uint *)(*(int *)(param_1 + 0x90) + param_2) & ~param_3 | param_4;
  return;
}



/* ===== rkisp_next_set_reg_cache_bits @ 000182be size=22 ===== */

void rkisp_next_set_reg_cache_bits(int param_1,int param_2,uint param_3,uint param_4)

{
  *(uint *)(*(int *)(param_1 + 0x90) + param_2 + 0xc000) =
       *(uint *)(*(int *)(param_1 + 0x90) + param_2 + 0xc000) & ~param_3 | param_4;
  return;
}



/* ===== rkisp_clear_reg_cache_bits @ 000182d4 size=14 ===== */

void rkisp_clear_reg_cache_bits(int param_1,int param_2,uint param_3)

{
  *(uint *)(*(int *)(param_1 + 0x90) + param_2) =
       *(uint *)(*(int *)(param_1 + 0x90) + param_2) & ~param_3;
  return;
}



/* ===== rkisp_next_clear_reg_cache_bits @ 000182e2 size=18 ===== */

void rkisp_next_clear_reg_cache_bits(int param_1,int param_2,uint param_3)

{
  *(uint *)(*(int *)(param_1 + 0x90) + param_2 + 0xc000) =
       *(uint *)(*(int *)(param_1 + 0x90) + param_2 + 0xc000) & ~param_3;
  return;
}



/* ===== rkisp_update_regs @ 000182f4 size=230 ===== */

void rkisp_update_regs(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x94);
  iVar2 = *(int *)(iVar5 + 0x10);
  if (param_3 < 0x5ffd) {
    for (; param_2 <= param_3; param_2 = param_2 + 4) {
      if (((((-1 < *(int *)(param_1 + 0x96d4) << 0x16) || (param_2 - 0x408 < 0xd)) ||
           (param_2 - 0x594 < 0xd)) ||
          (((param_2 - 0x880 < 0x60 || (param_2 - 0xc00 < 0x10fc)) || (param_2 - 0x2300 < 0x30))))
         && (*(int *)(*(int *)(param_1 + 0x90) + param_2 + 0x6000) == -1)) {
        piVar3 = (int *)(*(int *)(param_1 + 0x90) + param_2);
        if ((((param_2 & 0xfffffdff) == 0xc00) || (param_2 == 0x1000)) && (*piVar3 == 0)) {
          *piVar3 = 0x100;
        }
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(int *)(iVar2 + param_2) = *piVar3;
        if (*(char *)(iVar5 + 0x7be) != '\0') {
          iVar4 = param_2 + 0xc000;
          iVar1 = *(int *)(param_1 + 0x90);
          if ((((param_2 & 0xfffffdff) == 0xc00) || (param_2 == 0x1000)) &&
             (*(int *)(iVar1 + iVar4) == 0)) {
            *(undefined4 *)(iVar1 + iVar4) = 0x100;
          }
          DataSynchronizationBarrier(0xe);
          arm_heavy_mb();
          *(undefined4 *)(*(int *)(iVar5 + 0x14) + param_2) = *(undefined4 *)(iVar1 + iVar4);
        }
      }
    }
    return;
  }
  _dev_err(*(undefined4 *)(param_1 + 0xc),DAT_000183e0,DAT_000183dc);
  return;
}



/* ===== rkisp_alloc_buffer @ 000183e4 size=328 ===== */

undefined4 rkisp_alloc_buffer(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  
  iVar7 = param_1 + 0xdf68;
  if (*(char *)(param_2 + 0x24) == '\0') {
    uVar9 = 0x10;
  }
  else {
    uVar9 = 0;
  }
  puVar8 = *(undefined4 **)(*(int *)(param_1 + 0x94) + 0x778);
  iVar10 = param_1;
  iVar4 = param_2;
  mutex_lock(iVar7);
  if (*(int *)(param_2 + 0x1c) == 0) {
    uVar3 = 0xffffffea;
  }
  else {
    if (*(char *)(*(int *)(param_1 + 0x94) + 0x7b5) != '\0') {
      uVar9 = uVar9 | 0x40;
    }
    uVar6 = *(int *)(param_2 + 0x1c) + 0xfffU & 0xfffff000;
    *(uint *)(param_2 + 0x1c) = uVar6;
    iVar10 = 0xcc4;
    uVar9 = (*(code *)*puVar8)(*(undefined4 *)(*(int *)(param_1 + 0x94) + 8),uVar9,uVar6,0,0xcc4,
                               iVar4,param_3);
    if ((uVar9 != 0) && (uVar9 < 0xfffff001)) {
      *(uint *)(param_2 + 0x14) = uVar9;
      if (*(char *)(*(int *)(param_1 + 0x94) + 0x7b6) == '\0') {
        puVar5 = (undefined4 *)(*(code *)puVar8[0xc])();
        *(undefined4 *)(param_2 + 0xc) = *puVar5;
      }
      else {
        piVar2 = (int *)(*(code *)puVar8[0xc])();
        *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(*piVar2 + 0xc);
        (*(code *)puVar8[5])(uVar9);
      }
      if (*(char *)(param_2 + 0x24) != '\0') {
        uVar3 = (*(code *)puVar8[0xb])(uVar9);
        *(undefined4 *)(param_2 + 0x18) = uVar3;
      }
      if (*(char *)(param_2 + 0x25) != '\0') {
        uVar3 = (*(code *)puVar8[2])(uVar9,2);
        *(undefined4 *)(param_2 + 8) = uVar3;
        if (*(char *)(param_2 + 0x26) != '\0') {
          iVar4 = dma_buf_fd(uVar3,0x80000);
          *(int *)(param_2 + 0x20) = iVar4;
          if (iVar4 < 0) {
            dma_buf_put(*(undefined4 *)(param_2 + 8));
            uVar3 = *(undefined4 *)(param_2 + 0x20);
            goto LAB_000184b8;
          }
          piVar2 = (int *)(*(int *)(*(int *)(param_2 + 8) + 4) + 0x1c);
          HintPreloadData(piVar2);
          do {
            ExclusiveAccess(piVar2);
            bVar1 = (bool)hasExclusiveAccess(piVar2);
          } while (!bVar1);
          *piVar2 = *piVar2 + 1;
        }
      }
      if (0 < *DAT_00018534) {
        printk(DAT_00018538,param_1 + 0xa8,DAT_0001852c,*(int *)(param_2 + 0xc),
               *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0xc),*(int *)(param_2 + 0x1c));
      }
      mutex_unlock(iVar7);
      return 0;
    }
    uVar3 = 0xfffffff4;
  }
LAB_000184b8:
  mutex_unlock(iVar7);
  _dev_err(*(undefined4 *)(param_1 + 0xc),DAT_00018530,DAT_0001852c,uVar3,iVar10);
  return uVar3;
}



/* ===== rkisp_free_buffer @ 0001853c size=102 ===== */

void rkisp_free_buffer(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x94) + 0x778);
  iVar2 = param_2;
  mutex_lock(param_1 + 0xdf68);
  if ((param_2 != 0) && (*(int *)(param_2 + 0x14) != 0)) {
    if (0 < *DAT_000185a4) {
      printk(DAT_000185a8,param_1 + 0xa8,DAT_000185ac,*(int *)(param_2 + 0xc),
             *(int *)(param_2 + 0x1c) + *(int *)(param_2 + 0xc),iVar2,param_3);
    }
    if (*(int *)(param_2 + 8) != 0) {
      dma_buf_put();
    }
    (**(code **)(iVar1 + 4))(*(undefined4 *)(param_2 + 0x14));
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined2 *)(param_2 + 0x24) = 0;
    *(undefined1 *)(param_2 + 0x26) = 0;
  }
  mutex_unlock(param_1 + 0xdf68);
  return;
}



/* ===== rkisp_prepare_buffer @ 000185b0 size=22 ===== */

void rkisp_prepare_buffer(int param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_2 + 0x14) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000185c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(*(int *)(param_1 + 0x94) + 0x778) + 0x14))(*(int *)(param_2 + 0x14));
    return;
  }
  return;
}



/* ===== rkisp_finish_buffer @ 000185c6 size=22 ===== */

void rkisp_finish_buffer(int param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_2 + 0x14) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000185d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(*(int *)(param_1 + 0x94) + 0x778) + 0x18))(*(int *)(param_2 + 0x14));
    return;
  }
  return;
}



/* ===== rkisp_attach_hw @ 000185dc size=118 ===== */

undefined4 rkisp_attach_hw(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = of_parse_phandle(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x164),DAT_00018654,0,
                           *(int *)(param_1 + 0xc),param_4);
  uVar2 = DAT_00018658;
  if (((iVar1 == 0) || (iVar3 = of_device_is_available(), uVar2 = DAT_00018658, iVar3 == 0)) ||
     (iVar1 = of_find_device_by_node(iVar1), uVar2 = DAT_0001865c, iVar1 == 0)) {
    _dev_err(*(undefined4 *)(param_1 + 0xc),uVar2);
    uVar2 = 0xffffffed;
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x50);
    if (iVar1 == 0) {
      _dev_err(*(undefined4 *)(param_1 + 0xc),DAT_00018660);
      uVar2 = 0xffffffea;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0xb8);
      uVar2 = 0;
      *(int *)(param_1 + 0x9acc) = iVar3;
      *(int *)(iVar1 + (iVar3 + 0x16) * 4) = param_1;
      *(int *)(iVar1 + 0xb8) = iVar3 + 1;
      *(int *)(param_1 + 0x94) = iVar1;
      *(undefined4 *)(param_1 + 0x97a4) = *(undefined4 *)(iVar1 + 0x54);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x10);
    }
  }
  return uVar2;
}



/* ===== rkisp_alloc_common_dummy_buf @ 00018664 size=438 ===== */

int rkisp_alloc_common_dummy_buf(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = *(int *)(param_1 + 0x94);
  if (*(int *)(iVar8 + 0x764) != 0) {
    return 0;
  }
  uVar10 = 0;
  if (*(int *)(iVar8 + 0xcc) != 0) {
    if (*(int *)(iVar8 + 0xd0) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(int *)(iVar8 + 0xd0) * *(int *)(iVar8 + 0xcc) * 2;
    }
  }
  piVar2 = (int *)(iVar8 + 0x58);
  uVar9 = param_3;
  while ((int *)(iVar8 + 0x58) + *(int *)(iVar8 + 0xb8) != piVar2) {
    piVar3 = piVar2 + 1;
    iVar1 = *piVar2;
    piVar2 = piVar3;
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe035) != '\0')) {
      pcVar6 = (char *)(iVar1 + 0x13b0);
      do {
        uVar9 = 0;
        if (pcVar6[0x153] != '\0') {
          if (*pcVar6 == '\a') {
            uVar9 = *(uint *)(pcVar6 + 0x3c);
          }
          else {
            uVar9 = *(int *)(pcVar6 + 0x2c) * *(int *)(pcVar6 + 0x18);
          }
          if (uVar10 < uVar9) {
            uVar10 = uVar9;
          }
        }
        pcVar6 = pcVar6 + 0x6c0;
      } while (pcVar6 != (char *)(iVar1 + 0x64b0));
    }
  }
  if (uVar10 == 0) {
    return 0;
  }
  if (*(char *)(iVar8 + 0x7b7) == '\0') {
    *(uint *)(iVar8 + 0x76c) = uVar10;
    iVar4 = rkisp_alloc_buffer(param_1,iVar8 + 0x750,uVar9,0,param_1,param_2,param_3);
    if (iVar4 == 0) {
      if (*DAT_00018828 < 1) {
        return 0;
      }
      printk(DAT_00018834,param_1 + 0xa8,DAT_00018820,*(undefined4 *)(iVar8 + 0x75c),
             *(undefined4 *)(iVar8 + 0x76c));
      return 0;
    }
  }
  else {
    iVar1 = __alloc_pages_nodemask(0xcc4,0,0);
    uVar9 = uVar10 + 0xfff >> 0xc;
    if (iVar1 == 0) {
      iVar4 = -0xc;
      goto LAB_00018742;
    }
    piVar2 = (int *)kvmalloc_node(uVar9 * 4,0xcc0,0xffffffff);
    if (piVar2 == (int *)0x0) {
      iVar4 = -0xc;
    }
    else {
      for (piVar3 = piVar2; piVar3 != piVar2 + uVar9; piVar3 = piVar3 + 1) {
        *piVar3 = iVar1;
      }
      piVar3 = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_0001881c + 0x10),0xcc0);
      if (piVar3 == (int *)0x0) {
        iVar4 = -0xc;
      }
      else {
        iVar4 = sg_alloc_table_from_pages(piVar3,piVar2,uVar9,0,uVar10 + 0xfff & 0xfffff000,0xcc0);
        if (iVar4 == 0) {
          uVar5 = dma_map_sg_attrs(*(undefined4 *)(iVar8 + 8),*piVar3,piVar3[1],0,0);
          iVar1 = *DAT_00018828;
          uVar7 = *(undefined4 *)(*piVar3 + 0xc);
          *(int **)(iVar8 + 0x764) = piVar3;
          *(int **)(iVar8 + 0x760) = piVar2;
          *(undefined4 *)(iVar8 + 0x75c) = uVar7;
          if (iVar1 < 1) {
            return 0;
          }
          printk(DAT_00018830,param_1 + 0xa8,DAT_0001882c,uVar7,uVar5,uVar10);
          return 0;
        }
        kfree(piVar3);
      }
      kvfree(piVar2);
    }
    __free_pages(iVar1,0);
  }
  if (-1 < iVar4) {
    return iVar4;
  }
LAB_00018742:
  printk(DAT_00018824,param_1 + 0xa8,DAT_00018820,iVar4);
  return iVar4;
}



/* ===== rkisp_free_common_dummy_buf @ 00018838 size=106 ===== */

void rkisp_free_common_dummy_buf(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x94);
  if ((*(int *)(iVar1 + 0xe8) == 0) && (*(int *)(param_1 + 0x5fe4) < 2)) {
    if (*(char *)(iVar1 + 0x7b7) == '\0') {
      rkisp_free_buffer(param_1,iVar1 + 0x750);
      return;
    }
    puVar2 = *(undefined4 **)(iVar1 + 0x764);
    if (puVar2 != (undefined4 *)0x0) {
      dma_unmap_sg_attrs(*(undefined4 *)(iVar1 + 8),*puVar2,puVar2[1],0,0,param_2);
      sg_free_table(puVar2);
      kfree(puVar2);
      __free_pages(**(undefined4 **)(iVar1 + 0x760),0);
      kvfree(*(undefined4 *)(iVar1 + 0x760));
      *(undefined4 *)(iVar1 + 0x764) = 0;
      *(undefined4 *)(iVar1 + 0x760) = 0;
    }
  }
  return;
}



/* ===== rkisp_stats_vb2_queue_setup @ 000188a4 size=46 ===== */

undefined4
rkisp_stats_vb2_queue_setup(int param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *param_3 = 1;
  uVar2 = *param_2;
  if (uVar2 < 2) {
    uVar2 = 2;
  }
  if (7 < uVar2) {
    uVar2 = 8;
  }
  *param_2 = uVar2;
  *param_4 = *(undefined4 *)(iVar1 + 0x514);
  *(int *)(iVar1 + 0x504) = iVar1 + 0x504;
  *(int *)(iVar1 + 0x508) = iVar1 + 0x504;
  return 0;
}



/* ===== rkisp_stats_enum_fmt_meta_cap @ 000188d2 size=44 ===== */

undefined4 rkisp_stats_enum_fmt_meta_cap(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = video_devdata();
  if ((*param_3 == 0) && (param_3[1] == **(int **)(iVar1 + 0x298))) {
    param_3[0xb] = *(int *)(*(int *)(iVar1 + 0x130) + 0x510);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== rkisp_stats_fh_open @ 000188fe size=44 ===== */

int rkisp_stats_fh_open(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = video_devdata();
  iVar2 = *(int *)(iVar1 + 0x130);
  iVar1 = v4l2_fh_open(param_1);
  if ((iVar1 == 0) && (iVar1 = v4l2_pipeline_pm_get(iVar2 + 0x1c8), iVar1 < 0)) {
    vb2_fop_release(param_1);
  }
  return iVar1;
}



/* ===== rkisp_stats_readout_task @ 0001892a size=60 ===== */

void rkisp_stats_readout_task(int param_1)

{
  int iVar1;
  undefined1 auStack_28 [12];
  int local_1c;
  
  while ((*(int *)(param_1 + 0x5dc) != *(int *)(param_1 + 0x5e0) &&
         (iVar1 = __kfifo_out(param_1 + 0x5dc,auStack_28,0x18), iVar1 != 0))) {
    if (local_1c == 0) {
      (**(code **)(*(int *)(param_1 + 0x608) + 4))(param_1,auStack_28);
    }
  }
  return;
}



/* ===== rkisp_stats_g_fmt_meta_cap @ 00018966 size=54 ===== */

undefined4 rkisp_stats_g_fmt_meta_cap(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = video_devdata();
  iVar3 = *(int *)(iVar1 + 0x130);
  if (*param_3 == **(int **)(iVar1 + 0x298)) {
    uVar2 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[1] = *(int *)(iVar3 + 0x510);
    param_3[2] = *(int *)(iVar3 + 0x514);
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== rkisp_stats_querycap @ 0001899c size=86 ===== */

undefined4 rkisp_stats_querycap(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = param_3;
  iVar2 = video_devdata();
  pcVar1 = DAT_000189f4;
  iVar3 = *(int *)(iVar2 + 0x130);
  strcpy(param_3,DAT_000189f4);
  snprintf(param_3,0x10,DAT_000189f8,pcVar1,*(uint *)(*(int *)(iVar3 + 0x500) + 0x97a4) >> 4,param_2
           ,pcVar4);
  strlcpy(param_3 + 0x10,iVar2 + 0x2a0,0x20);
  strlcpy(param_3 + 0x30,DAT_000189fc,0x20);
  *(undefined4 *)(param_3 + 0x50) = DAT_00018a00;
  return 0;
}



/* ===== rkisp_stats_vb2_buf_queue @ 00018a04 size=236 ===== */

void rkisp_stats_vb2_buf_queue(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  size_t __n;
  void *__src;
  
  iVar3 = *(int *)(*param_1 + 0x28);
  __n = *(size_t *)(iVar3 + 0x514);
  iVar1 = vb2_plane_vaddr(param_1,0);
  param_1[0xa2] = iVar1;
  if (*(int *)(*(int *)(iVar3 + 0x500) + 0x97a4) == 0x70) {
    piVar2 = (int *)vb2_plane_cookie(param_1,0);
    param_1[0xaa] = *(int *)(*piVar2 + 0xc);
  }
  if ((void *)param_1[0xa2] != (void *)0x0) {
    memset((void *)param_1[0xa2],0,__n);
  }
  disableIRQinterrupts();
  iVar1 = *(int *)(iVar3 + 0x500);
  if (((*(int *)(iVar1 + 0x97a4) == 0x70) && (*(char *)(iVar1 + 0xe038) != '\0')) &&
     (__src = *(void **)(iVar3 + 0x62c), __src != (void *)0x0)) {
    if (((*(int *)((int)__src + 0x32e4) == 0) && (*(int *)((int)__src + 0x32e0) != 0)) &&
       (param_1[0xa2] != 0)) {
      _dev_info(*(undefined4 *)(iVar1 + 0xc),DAT_00018af0,0);
      memcpy((void *)param_1[0xa2],__src,0x32ec);
      *(undefined1 *)((int)__src + 0x32e0) = 0;
      *(undefined1 *)((int)__src + 0x32e1) = 0;
      *(undefined1 *)((int)__src + 0x32e2) = 0;
      *(undefined1 *)((int)__src + 0x32e3) = 0;
      if (param_1[4] != 0) {
        param_1[0x15] = 0x32ec;
      }
      param_1[0x5c] = *(int *)((int)__src + 0x32e4);
      vb2_buffer_done(param_1,5);
      return;
    }
  }
  piVar2 = *(int **)(iVar3 + 0x508);
  *(int **)(iVar3 + 0x508) = param_1 + 0xa0;
  param_1[0xa0] = iVar3 + 0x504;
  param_1[0xa1] = (int)piVar2;
  *piVar2 = (int)(param_1 + 0xa0);
  return;
}



/* ===== rkisp_uninit_stats_vdev @ 00018af4 size=32 ===== */

void rkisp_uninit_stats_vdev(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x500) + 0x97a4);
  if (((0x30 < uVar1) && ((uVar1 & 0xffffffef) != 0x40)) && (uVar1 != 0x60)) {
    rkisp_uninit_stats_vdev_v32();
    return;
  }
  return;
}



/* ===== rkisp_stats_vb2_start_streaming @ 00018b14 size=70 ===== */

undefined4
rkisp_stats_vb2_start_streaming
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x28);
  *(undefined1 *)(iVar4 + 0x645) = 0;
  *(undefined4 *)(iVar4 + 0x678) = 0;
  pcVar2 = *(code **)(*(int *)(iVar4 + 0x608) + 8);
  (*pcVar2)(iVar4,0,param_3,pcVar2,param_4);
  *(undefined4 *)(iVar4 + 0x5e0) = 0;
  *(undefined1 *)(iVar4 + 0x5d8) = 1;
  *(undefined4 *)(iVar4 + 0x5dc) = 0;
  piVar3 = (int *)(iVar4 + 0x5f8);
  HintPreloadData(piVar3);
  do {
    ExclusiveAccess(piVar3);
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = *piVar3 + -1;
  return 0;
}



/* ===== tasklet_disable @ 00018b5a size=28 ===== */

void tasklet_disable(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  HintPreloadData(piVar2);
  do {
    ExclusiveAccess(piVar2);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  return;
}



/* ===== rkisp_stats_vb2_stop_streaming @ 00018b76 size=156 ===== */

void rkisp_stats_vb2_stop_streaming
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  iVar4 = *(int *)(param_1 + 0x28);
  disableIRQinterrupts();
  *(undefined1 *)(iVar4 + 0x5d8) = 0;
  tasklet_disable(iVar4 + 0x5f0,param_2,0,
                  (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b,
                  param_4);
  disableIRQinterrupts();
  iVar5 = 8;
  do {
    if (iVar4 + 0x504 == *(int *)(iVar4 + 0x504)) break;
    piVar1 = *(int **)(iVar4 + 0x504);
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *(int **)(iVar2 + 4) = piVar3;
    *piVar3 = iVar2;
    *piVar1 = 0x100;
    piVar1[1] = 0x122;
    vb2_buffer_done(piVar1 + -0xa0,6);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (*(int *)(iVar4 + 0x678) != 0) {
    vb2_buffer_done(*(int *)(iVar4 + 0x678),6);
    if (*(int *)(iVar4 + 0x678) == *(int *)(iVar4 + 0x67c)) {
      *(undefined4 *)(iVar4 + 0x67c) = 0;
    }
    *(undefined4 *)(iVar4 + 0x678) = 0;
  }
  if (*(int *)(iVar4 + 0x67c) != 0) {
    vb2_buffer_done(*(int *)(iVar4 + 0x67c),6);
    *(undefined4 *)(iVar4 + 0x67c) = 0;
  }
  *(undefined2 *)(iVar4 + 0x680) = 0;
  return;
}



/* ===== rkisp_stats_fop_release @ 00018c12 size=34 ===== */

int rkisp_stats_fop_release(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = video_devdata();
  iVar2 = *(int *)(iVar1 + 0x130);
  iVar1 = vb2_fop_release(param_1);
  if (iVar1 == 0) {
    v4l2_pipeline_pm_put(iVar2 + 0x1c8);
  }
  return iVar1;
}



/* ===== rkisp_stats_rdbk_enable @ 00018c34 size=8 ===== */

void rkisp_stats_rdbk_enable(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018c3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x608) + 8))();
  return;
}



/* ===== rkisp_stats_first_ddr_config @ 00018c3c size=20 ===== */

void rkisp_stats_first_ddr_config(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
    rkisp_stats_first_ddr_config_v32();
    return;
  }
  return;
}



/* ===== rkisp_stats_next_ddr_config @ 00018c50 size=20 ===== */

void rkisp_stats_next_ddr_config(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
    rkisp_stats_next_ddr_config_v32();
    return;
  }
  return;
}



/* ===== rkisp_stats_isr @ 00018c64 size=8 ===== */

void rkisp_stats_isr(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018c6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)(param_1 + 0x608))();
  return;
}



/* ===== rkisp_register_stats_vdev @ 00018c6c size=398 ===== */

int rkisp_register_stats_vdev(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar3 = param_1 + 0x141;
  param_1[0x140] = param_3;
  param_1[0x141] = puVar3;
  param_1[0x142] = puVar3;
  puVar6 = param_1 + 0x72;
  strlcpy(param_1 + 0x11a,DAT_00018dfc,0x20,puVar3,param_1,param_2);
  uVar2 = DAT_00018e04;
  uVar1 = DAT_00018e00;
  param_1[0x115] = param_2;
  param_1[0x12f] = uVar1;
  iVar4 = DAT_00018e08;
  param_1[0x12e] = uVar2;
  param_1[0x136] = param_3 + 0x99fc;
  param_1[0xab] = iVar4;
  param_1[7] = iVar4 + 0x24;
  iVar4 = param_1[0x140];
  param_1[0xac] = 0x4800000;
  param_1[0x123] = 0;
  *param_1 = 0xd;
  param_1[1] = 3;
  param_1[0x118] = param_1;
  param_1[10] = param_1;
  if (*(int *)(iVar4 + 0x97a4) == 0x70) {
    param_1[8] = *(undefined4 *)(*(int *)(iVar4 + 0x94) + 0x778);
    if (*(char *)(*(int *)(iVar4 + 0x94) + 0x7b5) != '\0') {
      param_1[3] = 0x40;
    }
  }
  else {
    param_1[8] = DAT_00018e10;
  }
  param_1[0xc] = 0x2d0;
  param_1[0xd] = 0x2000;
  param_1[5] = iVar4 + 0x99fc;
  param_1[2] = *(undefined4 *)(iVar4 + 0xc);
  vb2_queue_init(param_1);
  param_1[399] = 0;
  param_1[400] = 0;
  memset(param_1 + 0x185,0,0x28);
  uVar5 = *(uint *)(param_1[0x140] + 0x97a4);
  if (((0x30 < uVar5) && ((uVar5 & 0xffffffef) != 0x40)) && (uVar5 != 0x60)) {
    rkisp_init_stats_vdev_v32(param_1);
  }
  param_1[0xbe] = param_1;
  param_1[0x13f] = 1;
  iVar4 = media_entity_pads_init(puVar6,1,param_1 + 0x138);
  if (-1 < iVar4) {
    iVar4 = __video_register_device(puVar6,0,0xffffffff,1,*(undefined4 *)param_1[0xab]);
    if (iVar4 < 0) {
      _dev_err(param_1 + 0xae,DAT_00018e0c);
    }
    else {
      iVar4 = media_create_pad_link(param_3 + 0xc30,3,puVar6,0,1);
      if (-1 < iVar4) {
        iVar4 = __kfifo_alloc(param_1 + 0x177,0xc0,1,0xcc0);
        if (iVar4 == 0) {
          tasklet_init(param_1 + 0x17c,DAT_00018e18,param_1);
          tasklet_disable(param_1 + 0x17c);
          return 0;
        }
        _dev_err(param_1 + 0xae,DAT_00018e14,iVar4);
      }
      video_unregister_device(puVar6);
    }
  }
  vb2_queue_release(param_1[0x118]);
  rkisp_uninit_stats_vdev(param_1);
  return iVar4;
}



/* ===== rkisp_unregister_stats_vdev @ 00018e1c size=44 ===== */

void rkisp_unregister_stats_vdev(int param_1)

{
  __kfifo_free(param_1 + 0x5dc);
  tasklet_kill(param_1 + 0x5f0);
  video_unregister_device(param_1 + 0x1c8);
  vb2_queue_release(*(undefined4 *)(param_1 + 0x460));
  rkisp_uninit_stats_vdev(param_1);
  return;
}



/* ===== rkisp_params_vb2_queue_setup @ 00018e48 size=70 ===== */

undefined4
rkisp_params_vb2_queue_setup(int param_1,uint *param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x28);
  uVar1 = *param_2;
  if (uVar1 < 2) {
    uVar1 = 2;
  }
  if (7 < uVar1) {
    uVar1 = 8;
  }
  *param_2 = uVar1;
  *param_3 = 1;
  pcVar2 = *(code **)(*(int *)(iVar3 + 0xa80) + 8);
  (*pcVar2)(iVar3,param_4,pcVar2,param_4,param_4);
  *(int *)(iVar3 + 0x504) = iVar3 + 0x504;
  *(int *)(iVar3 + 0x508) = iVar3 + 0x504;
  if (*(char *)(iVar3 + 0x5de) == '\0') {
    *(undefined1 *)(iVar3 + 0x5dd) = 1;
  }
  else {
    *(undefined1 *)(iVar3 + 0x5de) = 0;
  }
  return 0;
}



/* ===== rkisp_params_vb2_start_streaming @ 00018e8e size=34 ===== */

void rkisp_params_vb2_start_streaming(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(undefined1 *)(iVar1 + 0x5df) = 0;
  *(undefined1 *)(iVar1 + 0x5e0) = 0;
  *(undefined4 *)(iVar1 + 0xa90) = 0;
  disableIRQinterrupts();
  *(undefined1 *)(iVar1 + 0x5dc) = 1;
  return;
}



/* ===== rkisp_params_enum_fmt_meta_out @ 00018eb0 size=44 ===== */

undefined4 rkisp_params_enum_fmt_meta_out(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = video_devdata();
  if ((*param_3 == 0) && (param_3[1] == **(int **)(iVar1 + 0x298))) {
    param_3[0xb] = *(int *)(*(int *)(iVar1 + 0x130) + 0x514);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== rkisp_params_fh_open @ 00018edc size=44 ===== */

int rkisp_params_fh_open(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = video_devdata();
  iVar2 = *(int *)(iVar1 + 0x130);
  iVar1 = v4l2_fh_open(param_1);
  if ((iVar1 == 0) && (iVar1 = v4l2_pipeline_pm_get(iVar2 + 0x1c8), iVar1 < 0)) {
    vb2_fop_release(param_1);
  }
  return iVar1;
}



/* ===== rkisp_params_unsubs_evt @ 00018f08 size=16 ===== */

void rkisp_params_unsubs_evt(int param_1)

{
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x130) + 0xae8) = 0;
  v4l2_event_unsubscribe();
  return;
}



/* ===== rkisp_params_subs_evt @ 00018f18 size=46 ===== */

undefined4 rkisp_params_subs_evt(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if ((param_2[1] == 0) && (*param_2 + 0xf7ffffffU < 2)) {
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 0x130) + 0xae8) = 1;
    uVar1 = v4l2_event_subscribe(param_1,param_2,0);
    return uVar1;
  }
  return 0xffffffea;
}



/* ===== rkisp_params_g_fmt_meta_out @ 00018f46 size=54 ===== */

undefined4 rkisp_params_g_fmt_meta_out(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = video_devdata();
  iVar3 = *(int *)(iVar1 + 0x130);
  if (*param_3 == **(int **)(iVar1 + 0x298)) {
    uVar2 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[1] = *(int *)(iVar3 + 0x514);
    param_3[2] = *(int *)(iVar3 + 0x518);
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== rkisp_params_querycap @ 00018f7c size=76 ===== */

undefined4 rkisp_params_querycap(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_3;
  iVar1 = video_devdata();
  snprintf(param_3,0x10,DAT_00018fc8,DAT_00018fcc,
           *(uint *)(*(int *)(*(int *)(iVar1 + 0x130) + 0x500) + 0x97a4) >> 4,param_2,pcVar2);
  strlcpy(param_3 + 0x10,iVar1 + 0x2a0,0x20);
  strlcpy(param_3 + 0x30,DAT_00018fd0,0x20);
  *(undefined4 *)(param_3 + 0x50) = DAT_00018fd4;
  return 0;
}



/* ===== rkisp_params_vb2_buf_queue @ 00018fd8 size=206 ===== */

void rkisp_params_vb2_buf_queue
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*param_1 + 0x28);
  iVar4 = *(int *)(*(int *)(iVar3 + 0x500) + 0xe60);
  if (*(char *)(iVar3 + 0x5dd) != '\0') {
    uVar1 = vb2_plane_vaddr(param_1,0);
    (*(code *)**(undefined4 **)(iVar3 + 0xa80))(iVar3,uVar1);
    *(undefined1 *)(iVar3 + 0xae9) = 1;
    param_1[0x5c] = iVar4 + -1;
    vb2_buffer_done(param_1,5);
    *(undefined1 *)(iVar3 + 0x5dd) = 0;
    __wake_up(*(int *)(iVar3 + 0x500) + 0x9a08,3,1,0);
    uVar1 = 0;
    if (*(char *)(*(int *)(iVar3 + 0x500) + 0xe039) != '\0') {
      _dev_info(*(undefined4 *)(*(int *)(iVar3 + 0x500) + 0xc),DAT_000190a8);
      *(undefined1 *)(*(int *)(iVar3 + 0x500) + 0xe039) = 0;
      rkisp_trigger_read_back(*(undefined4 *)(iVar3 + 0x500),0,0,0);
      uVar1 = extraout_r2;
    }
    _dev_info(*(undefined4 *)(*(int *)(iVar3 + 0x500) + 0xc),DAT_000190ac,uVar1,param_4);
    return;
  }
  if ((*(uint *)(*(int *)(iVar3 + 0x500) + 0x96d4) & 0x300) != 0) {
    vb2_buffer_done(param_1,5,0x96d4,param_4);
    return;
  }
  iVar4 = vb2_plane_vaddr();
  param_1[0xa2] = iVar4;
  disableIRQinterrupts();
  piVar2 = *(int **)(iVar3 + 0x508);
  *(int **)(iVar3 + 0x508) = param_1 + 0xa0;
  param_1[0xa0] = iVar3 + 0x504;
  param_1[0xa1] = (int)piVar2;
  *piVar2 = (int)(param_1 + 0xa0);
  return;
}



/* ===== rkisp_uninit_params_vdev @ 000190b0 size=32 ===== */

void rkisp_uninit_params_vdev(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x500) + 0x97a4);
  if (((0x30 < uVar1) && ((uVar1 & 0xffffffef) != 0x40)) && (uVar1 != 0x60)) {
    rkisp_uninit_params_vdev_v32();
    return;
  }
  return;
}



/* ===== rkisp_params_fop_release @ 000190d0 size=34 ===== */

int rkisp_params_fop_release(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = video_devdata();
  iVar2 = *(int *)(iVar1 + 0x130);
  iVar1 = vb2_fop_release(param_1);
  if (iVar1 == 0) {
    v4l2_pipeline_pm_put(iVar2 + 0x1c8);
  }
  return iVar1;
}



/* ===== rkisp_params_cfg @ 000190f2 size=14 ===== */

void rkisp_params_cfg(int param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xa80) + 0x18);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000190fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2,1);
    return;
  }
  return;
}



/* ===== rkisp_params_cfgsram @ 00019100 size=36 ===== */

void rkisp_params_cfgsram(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (((-1 < *(int *)(*(int *)(param_1 + 0x500) + 0x96d4) << 0x16) &&
      (*(char *)(*(int *)(*(int *)(param_1 + 0x500) + 0x94) + 0x7b9) == '\0')) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xa80) + 0x1c),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00019120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* ===== rkisp_params_isr @ 00019124 size=8 ===== */

void rkisp_params_isr(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001912a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xa80) + 0x14))();
  return;
}



/* ===== rkisp_params_first_cfg @ 0001912c size=148 ===== */

void rkisp_params_first_cfg(int param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0xae9) != '\0') {
    iVar3 = *(int *)(param_1 + 0x500);
    *(undefined1 *)(param_1 + 0xae9) = 0;
    *(int *)(param_1 + 0x5e4) = param_3;
    *(undefined4 *)(param_1 + 0x5e8) = param_2[8];
    *(undefined4 *)(param_1 + 0x5ec) = *param_2;
    (**(code **)(*(int *)(param_1 + 0xa80) + 0xc))();
    iVar2 = *(int *)(param_1 + 0x5e4);
    if (iVar2 != param_3) {
      if ((*(char *)(iVar3 + 0x1bc0) != '\0') && (*(char *)(iVar3 + 0x1a70) == '\x01')) {
        if (iVar2 == 1) {
          uVar4 = 0x300;
        }
        else {
          uVar4 = 0;
        }
        cVar1 = *(char *)(*(int *)(iVar3 + 0x94) + 0x7be);
        rkisp_set_bits(iVar3,0x1400,0x300,uVar4,0,param_2);
        if (cVar1 != '\0') {
          rkisp_next_set_bits(iVar3,0x1400,0x300,uVar4,0);
        }
      }
      *(int *)(iVar3 + 0xe64) = iVar2;
    }
  }
  return;
}



/* ===== rkisp_params_disable_isp @ 000191c0 size=12 ===== */

void rkisp_params_disable_isp(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xa80) + 0x10);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000191c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* ===== rkisp_params_vb2_stop_streaming @ 000191cc size=170 ===== */

void rkisp_params_vb2_stop_streaming
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  byte bVar12;
  uint in_cpsr;
  uint uVar13;
  uint uVar14;
  
  iVar5 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(iVar5 + 0x500);
  disableIRQinterrupts();
  *(undefined1 *)(iVar5 + 0x5dc) = 0;
  __wake_up(iVar8 + 0x9a08,3,1,0,param_4);
  bVar12 = (in_cpsr >> 0x1b & 1) != 0;
  bVar10 = (in_cpsr >> 0x1c & 1) != 0;
  bVar11 = false;
  bVar9 = false;
  uVar7 = 8;
  uVar13 = in_cpsr & 0xffffff00;
  uVar14 = in_cpsr >> 0x1d & 1;
  do {
    uVar6 = uVar7;
    bVar1 = bVar9 << 4 | bVar11 << 3 | (uVar14 != 0) << 2 | bVar10 << 1 | bVar12;
    disableIRQinterrupts();
    if (iVar5 + 0x504 == *(int *)(iVar5 + 0x504)) break;
    piVar2 = *(int **)(iVar5 + 0x504);
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *(int **)(iVar3 + 4) = piVar4;
    *piVar4 = iVar3;
    *piVar2 = 0x100;
    piVar2[1] = 0x122;
    uVar14 = uVar13 & 0xffffff00;
    bVar12 = (uVar13 >> 0x1b & 1) != 0;
    if (piVar2 + -0xa0 != (int *)0x0) {
      vb2_buffer_done(piVar2 + -0xa0,6,piVar4,(uint)bVar1 << 0x1b);
    }
    bVar10 = SBORROW4(uVar6,1);
    uVar7 = uVar6 - 1;
    bVar9 = (int)uVar7 < 0;
    bVar11 = uVar7 == 0;
    uVar13 = uVar14;
    uVar14 = uVar6;
  } while (!bVar11);
  if (*(int *)(iVar5 + 0xa90) != 0) {
    vb2_buffer_done(*(int *)(iVar5 + 0xa90),6);
    *(undefined4 *)(iVar5 + 0xa90) = 0;
  }
  if (*(char *)(iVar8 + 0xe038) == '\0') {
    rkisp_params_disable_isp(iVar5);
    (**(code **)(*(int *)(iVar5 + 0xa80) + 4))(iVar5);
    *(undefined4 *)(iVar5 + 0xa94) = 0;
  }
  else {
    *(undefined1 *)(iVar5 + 0x5de) = 1;
  }
  return;
}



/* ===== rkisp_params_get_meshbuf_inf @ 00019276 size=12 ===== */

void rkisp_params_get_meshbuf_inf(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xa80) + 0x20);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001927e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* ===== rkisp_params_set_meshbuf_size @ 00019282 size=16 ===== */

undefined4 rkisp_params_set_meshbuf_size(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xa80) + 0x24);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001928a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xffffffea;
}



/* ===== rkisp_params_meshbuf_free @ 00019292 size=32 ===== */

void rkisp_params_meshbuf_free(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xa80) + 0x28);
  if ((UNRECOVERED_JUMPTABLE != (code *)0x0) &&
     (-1 < *(int *)(*(int *)(param_1 + 0x500) + 0x99e0) << 0x16)) {
                    /* WARNING: Could not recover jumptable at 0x000192ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* ===== rkisp_params_stream_stop @ 000192b2 size=32 ===== */

void rkisp_params_stream_stop(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xa80) + 0x2c);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    (*UNRECOVERED_JUMPTABLE)();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xa80) + 0x30);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000192ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  return;
}



/* ===== rkisp_params_check_bigmode @ 000192d2 size=14 ===== */

undefined4 rkisp_params_check_bigmode(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xa80) + 0x34);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000192da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



/* ===== rkisp_params_info2ddr_cfg @ 000192e0 size=16 ===== */

undefined4 rkisp_params_info2ddr_cfg(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(param_1 + 0xa80) + 0x38);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000192e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xffffffea;
}



/* ===== rkisp_register_params_vdev @ 000192f0 size=318 ===== */

int rkisp_register_params_vdev
              (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  
  param_1[0x140] = param_3;
  uVar1 = DAT_00019430;
  iVar6 = 0;
  *(undefined1 *)(param_1 + 0x2ba) = 0;
  strlcpy(param_1 + 0x11a,uVar1,0x20,param_4,param_1,param_2,param_3);
  uVar1 = DAT_00019434;
  param_1[0xac] = 0xc000000;
  param_1[0x12f] = uVar1;
  param_1[0x123] = 1;
  uVar1 = DAT_00019438;
  *param_1 = 0xe;
  param_1[1] = 3;
  uVar2 = DAT_0001943c;
  param_1[0x12e] = uVar1;
  iVar3 = DAT_00019440;
  param_1[8] = uVar2;
  param_1[0x136] = param_3 + 0x99fc;
  param_1[0xc] = 0x2d0;
  param_1[0xd] = 0x2000;
  param_1[0xab] = iVar3;
  param_1[0x115] = param_2;
  param_1[0x118] = param_1;
  param_1[10] = param_1;
  param_1[7] = iVar3 + 0x24;
  param_1[5] = param_1[0x140] + 0x99fc;
  param_1[2] = *(undefined4 *)(param_1[0x140] + 0xc);
  vb2_queue_init(param_1);
  uVar4 = *(uint *)(param_1[0x140] + 0x97a4);
  if (0x30 < uVar4) {
    if (uVar4 == 0x50) goto LAB_00019392;
    if ((uVar4 & 0xffffffdf) != 0x40) {
      iVar6 = rkisp_init_params_vdev_v32(param_1);
      goto LAB_00019392;
    }
  }
  iVar6 = -0x16;
LAB_00019392:
  param_1[0x145] = DAT_00019444;
  if ((param_1[0x2a0] != 0) && (pcVar5 = *(code **)(param_1[0x2a0] + 8), pcVar5 != (code *)0x0)) {
    (*pcVar5)(param_1,param_1 + 0x146);
  }
  if (-1 < iVar6) {
    puVar7 = param_1 + 0x72;
    param_1[0xbe] = param_1;
    param_1[0x13f] = 2;
    iVar6 = media_entity_pads_init(puVar7,1,param_1 + 0x138);
    if (-1 < iVar6) {
      iVar6 = __video_register_device(puVar7,0,0xffffffff,1,*(undefined4 *)param_1[0xab]);
      if (iVar6 < 0) {
        _dev_err(param_1 + 0xae,DAT_00019448);
      }
      else {
        iVar6 = media_create_pad_link(puVar7,0,param_1[0x140] + 0xc30,1,1);
        if (-1 < iVar6) {
          return 0;
        }
        video_unregister_device(puVar7);
      }
    }
  }
  vb2_queue_release(param_1[0x118]);
  rkisp_uninit_params_vdev(param_1);
  return iVar6;
}



/* ===== rkisp_unregister_params_vdev @ 0001944c size=28 ===== */

void rkisp_unregister_params_vdev(int param_1)

{
  video_unregister_device(param_1 + 0x1c8);
  vb2_queue_release(*(undefined4 *)(param_1 + 0x460));
  rkisp_uninit_params_vdev(param_1);
  return;
}



/* ===== find_fmt @ 00019468 size=38 ===== */

int find_fmt(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    if ((*(int **)(param_1 + 0x600))[1] <= iVar1) {
      return 0;
    }
    iVar2 = **(int **)(param_1 + 0x600);
    if (*(int *)(iVar2 + iVar1 * 0x1c) == param_2) break;
    iVar1 = iVar1 + 1;
  }
  return iVar2 + iVar1 * 0x1c;
}



/* ===== restrict_rsz_resolution @ 0001948e size=200 ===== */

void restrict_rsz_resolution(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *param_1;
  iVar5 = param_1[2];
  if ((iVar3 == 0xb) || ((*(int *)(iVar5 + 0x97a4) == 0x60 && (iVar3 == 7)))) {
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(iVar5 + 0xe54);
    uVar4 = *(uint *)(iVar5 + 0xe58);
  }
  else if (iVar3 == 6) {
    *(int *)(param_3 + 8) = param_1[0x17d];
    uVar4 = param_1[0x17e];
  }
  else if (iVar3 - 8U < 2) {
    iVar5 = param_1[0x1a8] * 0x6c0 + iVar5;
    *(uint *)(param_3 + 8) = *(uint *)(iVar5 + 0x13c4) >> 2;
    uVar4 = *(uint *)(iVar5 + 0x13c8) >> 2;
  }
  else {
    if (iVar3 == 10) {
      if (*(char *)(iVar5 + 0xe036) == '\0') {
        iVar3 = 0x10;
      }
      else {
        iVar3 = 0x20;
      }
      iVar1 = __aeabi_uidiv(*(int *)(iVar5 + 0xe54) + -1 + iVar3,iVar3);
      *(uint *)(param_3 + 8) = iVar1 + 3U & 0xfffffffc;
      uVar2 = __aeabi_uidiv(*(int *)(iVar5 + 0xe58) + -1 + iVar3,iVar3);
      *(undefined4 *)(param_3 + 0xc) = uVar2;
      return;
    }
    iVar3 = *(int *)(param_2 + 8);
    if (*(char *)(*(int *)(iVar5 + 0x94) + 0x7be) != '\0') {
      if (iVar3 < *(int *)(iVar5 + 0xe54)) {
        *(int *)(param_3 + 8) = iVar3;
      }
      else {
        *(int *)(param_3 + 8) = *(int *)(iVar5 + 0xe54);
      }
      if (*(int *)(param_2 + 0xc) < *(int *)(iVar5 + 0xe58)) {
        *(int *)(param_3 + 0xc) = *(int *)(param_2 + 0xc);
        return;
      }
      *(int *)(param_3 + 0xc) = *(int *)(iVar5 + 0xe58);
      return;
    }
    *(int *)(param_3 + 8) = iVar3;
    uVar4 = *(uint *)(param_2 + 0xc);
  }
  *(uint *)(param_3 + 0xc) = uVar4;
  return;
}



/* ===== mi_raw_length @ 00019556 size=134 ===== */

void mi_raw_length(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x600) + 0xb8);
  if (uVar1 == 0x1874) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if ((uVar1 & 0xffffffef) != 0x1884) {
      uVar3 = 1;
    }
  }
  rkisp_write(*(undefined4 *)(param_1 + 8),uVar1,*(undefined4 *)(param_1 + 0x544),uVar3,param_1,
              param_2,param_3);
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x97a4);
  if ((iVar2 == 0x50) || (iVar2 == 0x60)) {
    rkisp_set_bits(*(int *)(param_1 + 8),0x1808,0,0x40000000,0);
  }
  if (*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x94) + 0x7be) != '\0') {
    rkisp_next_write(*(int *)(param_1 + 8),*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xb8),
                     *(undefined4 *)(param_1 + 0x544),uVar3);
    rkisp_next_set_bits(*(undefined4 *)(param_1 + 8),0x1808,0,0x40000000,0);
  }
  return;
}



/* ===== video_drvdata @ 000195dc size=12 ===== */

undefined4 video_drvdata(void)

{
  int iVar1;
  
  iVar1 = video_devdata();
  return *(undefined4 *)(iVar1 + 0x130);
}



/* ===== rkisp_fh_open @ 000195e8 size=42 ===== */

int rkisp_fh_open(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = video_drvdata();
  iVar2 = v4l2_fh_open(param_1);
  if ((iVar2 == 0) && (iVar2 = v4l2_pipeline_pm_get(iVar1 + 0x1d8), iVar2 < 0)) {
    vb2_fop_release(param_1);
  }
  return iVar2;
}



/* ===== rkisp_enum_frameintervals @ 00019612 size=124 ===== */

int rkisp_enum_frameintervals(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  undefined1 auStack_38 [4];
  int local_34;
  int local_30;
  
  iVar1 = video_drvdata();
  piVar3 = *(int **)(*(int *)(iVar1 + 8) + 0x318);
  if (*param_3 != 0) {
    return -0x16;
  }
  if (piVar3 == (int *)0x0) {
    printk(DAT_00019694,*(int *)(iVar1 + 8) + 0xa8,DAT_00019690);
    return -0x13;
  }
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    return -0x13;
  }
  iVar4 = *(int *)(*(int *)(iVar1 + 0x68) + 0xc);
  if ((iVar4 != 0) && (pcVar5 = *(code **)(iVar4 + 0x30), pcVar5 != (code *)0x0)) {
    if ((*(int *)(DAT_00019698 + 0xc) == 0) ||
       (pcVar2 = *(code **)(*(int *)(DAT_00019698 + 0xc) + 0x30), pcVar2 == (code *)0x0)) {
      iVar1 = (*pcVar5)(iVar1,auStack_38);
    }
    else {
      iVar1 = (*pcVar2)();
    }
    if (iVar1 == 0) goto LAB_00019668;
    if (iVar1 != DAT_0001969c) {
      return iVar1;
    }
  }
  local_34 = 1;
  local_30 = 0x1e;
LAB_00019668:
  param_3[4] = 2;
  param_3[9] = 1;
  param_3[10] = 1;
  param_3[7] = 1;
  param_3[8] = 1;
  param_3[5] = local_34;
  param_3[6] = local_30;
  return 0;
}



/* ===== rkisp_enum_framesizes @ 000196a0 size=138 ===== */

undefined4 rkisp_enum_framesizes(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_28 [8];
  uint local_20;
  int local_1c;
  
  piVar1 = (int *)video_drvdata();
  iVar5 = piVar1[0x180];
  iVar4 = piVar1[2];
  if ((*param_3 == 0) && (iVar2 = find_fmt(piVar1,param_3[1]), iVar2 != 0)) {
    restrict_rsz_resolution(piVar1,iVar5,auStack_28);
    if (((((char)piVar1[0x146] == '\x02') || (iVar5 = *piVar1, iVar5 == 6)) || (iVar5 - 8U < 4)) ||
       ((iVar5 == 7 && (*(int *)(*(int *)(iVar4 + 0x94) + 0x54) == 0x60)))) {
      param_3[2] = 1;
      param_3[3] = local_20;
      param_3[4] = local_1c;
    }
    else {
      param_3[6] = 0x20;
      param_3[2] = 3;
      param_3[3] = 0x20;
      if (*(uint *)(iVar4 + 0xe54) < local_20) {
        param_3[4] = *(uint *)(iVar4 + 0xe54);
      }
      else {
        param_3[4] = local_20;
      }
      param_3[7] = *(int *)(iVar4 + 0xe58);
      param_3[5] = 8;
      param_3[8] = 8;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffea;
  }
  return uVar3;
}



/* ===== rkisp_s_selection @ 0001972a size=308 ===== */

undefined4 rkisp_s_selection(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  piVar2 = (int *)video_drvdata();
  iVar9 = piVar2[2];
  if ((*(int *)(param_3 + 4) != 0) || (*(int *)(param_3 + 8) != 0)) {
    return 0xffffffea;
  }
  cVar1 = *(char *)(*(int *)(iVar9 + 0x94) + 0x7be);
  iVar6 = *piVar2;
  if (cVar1 == '\0') {
    iVar3 = 2;
  }
  else {
    iVar3 = 4;
  }
  if (iVar6 == 0) {
    if ((char)piVar2[0x146] != '\x02') {
LAB_000197be:
      uVar8 = *(int *)(param_3 + 0xc) + 1U & 0xfffffffe;
      uVar5 = *(int *)(param_3 + 0x14) + -1 + iVar3 & -iVar3;
      *(uint *)(param_3 + 0xc) = uVar8;
      *(uint *)(param_3 + 0x14) = uVar5;
      uVar4 = *(uint *)(param_3 + 0x18);
      uVar11 = *(int *)(iVar9 + 0xe54) - 0x20;
      if (uVar8 <= uVar11) {
        uVar11 = uVar8;
      }
      *(uint *)(param_3 + 0xc) = uVar11;
      uVar8 = *(int *)(iVar9 + 0xe58) - 0x20;
      if (*(uint *)(param_3 + 0x10) <= uVar8) {
        uVar8 = *(uint *)(param_3 + 0x10);
      }
      *(uint *)(param_3 + 0x10) = uVar8;
      uVar10 = *(int *)(iVar9 + 0xe54) - uVar11;
      if (uVar5 < 0x20) {
        uVar5 = 0x20;
      }
      if (uVar5 <= uVar10) {
        uVar10 = uVar5;
      }
      *(uint *)(param_3 + 0x14) = uVar10;
      uVar5 = *(int *)(iVar9 + 0xe58) - uVar8;
      if (uVar4 < 0x20) {
        uVar4 = 0x20;
      }
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
      *(uint *)(param_3 + 0x18) = uVar4;
      if ((cVar1 != '\0') && (uVar10 + uVar11 * 2 != *(int *)(iVar9 + 0xe54))) {
        uVar11 = *(int *)(iVar9 + 0xe54) - uVar10 >> 1 & 0xfffffffe;
        *(uint *)(param_3 + 0xc) = uVar11;
        printk(DAT_00019868,iVar9 + 0xa8,uVar11,uVar8,uVar10,uVar4);
      }
      *(undefined1 *)(piVar2 + 0x19c) = 1;
      goto LAB_00019776;
    }
  }
  else if ((3 < iVar6 - 2U) && (1 < iVar6 - 8U)) goto LAB_000197be;
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(iVar9 + 0xe54);
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(iVar9 + 0xe58);
LAB_00019776:
  iVar6 = *(int *)(param_3 + 0x10);
  iVar3 = *(int *)(param_3 + 0x14);
  iVar7 = *(int *)(param_3 + 0x18);
  piVar2[0x17b] = *(int *)(param_3 + 0xc);
  piVar2[0x17c] = iVar6;
  piVar2[0x17d] = iVar3;
  piVar2[0x17e] = iVar7;
  if (0 < *DAT_00019860) {
    printk(DAT_00019864,iVar9 + 0xa8,*piVar2,piVar2[0x17b],piVar2[0x17c],piVar2[0x17d],piVar2[0x17e]
          );
  }
  return 0;
}



/* ===== rkisp_g_selection @ 0001986c size=60 ===== */

undefined4 rkisp_g_selection(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = video_drvdata();
  if (*(int *)(param_3 + 4) == 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x5f0);
    uVar3 = *(undefined4 *)(iVar1 + 0x5f4);
    uVar4 = *(undefined4 *)(iVar1 + 0x5f8);
    *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(iVar1 + 0x5ec);
    *(undefined4 *)(param_3 + 0x10) = uVar2;
    *(undefined4 *)(param_3 + 0x14) = uVar3;
    *(undefined4 *)(param_3 + 0x18) = uVar4;
    uVar2 = 0;
  }
  else if (*(int *)(param_3 + 4) == 2) {
    iVar1 = *(int *)(iVar1 + 8);
    uVar2 = 0;
    *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(iVar1 + 0xe54);
    uVar3 = *(undefined4 *)(iVar1 + 0xe58);
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined4 *)(param_3 + 0x10) = 0;
    *(undefined4 *)(param_3 + 0x18) = uVar3;
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== rkisp_g_fmt_vid_cap_mplane @ 000198a8 size=24 ===== */

undefined4 rkisp_g_fmt_vid_cap_mplane(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = video_drvdata();
  memcpy((void *)(param_3 + 4),(void *)(iVar1 + 0x52c),0xc0);
  return 0;
}



/* ===== rkisp_fop_release @ 000198c0 size=32 ===== */

int rkisp_fop_release(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = video_drvdata();
  iVar2 = vb2_fop_release(param_1);
  if (iVar2 == 0) {
    v4l2_pipeline_pm_put(iVar1 + 0x1d8);
  }
  return iVar2;
}



/* ===== rkisp_enum_input @ 000198e0 size=32 ===== */

undefined4 rkisp_enum_input(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00019900;
  if (*param_3 == 0) {
    param_3[9] = 2;
    strlcpy(param_3 + 1,uVar1,0x20);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== rkisp_enum_fmt_vid_cap_mplane @ 00019904 size=178 ===== */

undefined4
rkisp_enum_fmt_vid_cap_mplane
          (undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  piVar2 = (int *)video_drvdata();
  cVar1 = *(char *)(piVar2[2] + 0xe48);
  if ((cVar1 == '\x02') || (*piVar2 - 2U < 4)) {
    uVar3 = rkisp_mbus_pixelcode_to_v4l2(*(undefined4 *)(piVar2[2] + 0xe0c));
    if (*param_3 != 0) {
      return 0xffffffea;
    }
    iVar4 = find_fmt(piVar2,uVar3);
    if (iVar4 != 0) {
      param_3[0xb] = uVar3;
      return 0;
    }
    return 0xffffffea;
  }
  if ((uint)((int *)piVar2[0x180])[1] <= *param_3) {
    return 0xffffffea;
  }
  iVar4 = *(int *)piVar2[0x180];
  iVar7 = *param_3 * 0x1c;
  if ((cVar1 == '\0') && (*(char *)(iVar4 + iVar7 + 8) == '\x02')) {
    return 0xffffffea;
  }
  uVar3 = *(uint *)(iVar4 + iVar7);
  bVar9 = uVar3 < DAT_000199b8;
  bVar8 = uVar3 != DAT_000199b8;
  param_3[0xb] = uVar3;
  uVar5 = DAT_000199d4;
  if (bVar8) {
    if (bVar9) {
      uVar5 = DAT_000199cc;
      if (uVar3 == DAT_000199bc) goto LAB_00019980;
      uVar6 = DAT_000199bc + 0x2000000;
      uVar5 = DAT_000199c0;
    }
    else {
      uVar5 = DAT_000199d0;
      if (uVar3 == DAT_000199c4) goto LAB_00019980;
      uVar6 = DAT_000199c4 + 0xeff0001;
      uVar5 = DAT_000199c8;
    }
    if (uVar3 != uVar6) {
      return 0;
    }
  }
LAB_00019980:
  strscpy(param_3 + 3,uVar5,0x20,uVar3,param_4);
  return 0;
}



/* ===== rkisp_querycap @ 000199d8 size=90 ===== */

undefined4 rkisp_querycap(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = param_3;
  iVar1 = video_drvdata();
  piVar4 = *(int **)(*(int *)(iVar1 + 8) + 0xc);
  iVar2 = video_devdata(param_1);
  strlcpy(param_3 + 0x10,iVar2 + 0x2a0,0x20);
  uVar3 = *(uint *)(*(int *)(iVar1 + 8) + 0x97a4) >> 4;
  snprintf(param_3,0x10,DAT_00019a34,*(undefined4 *)piVar4[0xe],uVar3,param_2,pcVar5);
  iVar1 = piVar4[0xb];
  if (iVar1 == 0) {
    iVar1 = *piVar4;
  }
  snprintf(param_3 + 0x30,0x20,DAT_00019a38,iVar1,uVar3,param_2,pcVar5);
  *(undefined4 *)(param_3 + 0x50) = DAT_00019a3c;
  return 0;
}



/* ===== rkisp_stream_fast @ 00019a40 size=172 ===== */

void rkisp_stream_fast(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + -0x5168);
  if ((*(int *)(iVar2 + 0x97a4) == 0x70) && (*(short *)(iVar2 + 0x9a1e) == 1)) {
    iVar3 = **(int **)(iVar2 + 0x318);
    iVar1 = v4l2_pipeline_pm_get(param_1 + -0x4f88);
    if (iVar1 < 0) {
      _dev_err(*(undefined4 *)(iVar2 + 0xc),DAT_00019af0,DAT_00019aec);
      *(undefined1 *)(iVar2 + 0x9a5c) = 0;
    }
    else {
      if (1 < *(int *)(*(int *)(iVar2 + 0x94) + 0xb8)) {
        *(undefined1 *)(*(int *)(iVar2 + 0x94) + 0x7b9) = 0;
      }
      *(undefined1 *)(iVar2 + 0xe038) = 1;
      *(undefined1 *)(iVar2 + 0xe037) = 1;
      (**(code **)(iVar2 + 0x9798))(iVar2 + 0x96dc,param_1 + -0x4f88,1);
      if (((iVar3 != 0) && (iVar2 = *(int *)(*(int *)(iVar3 + 0x68) + 0xc), iVar2 != 0)) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 0x28), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
        if ((*(int *)(DAT_00019af4 + 0xc) != 0) &&
           (UNRECOVERED_JUMPTABLE_00 = *(code **)(*(int *)(DAT_00019af4 + 0xc) + 0x28),
           UNRECOVERED_JUMPTABLE_00 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00019ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)(iVar3,1);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x00019aea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar3,1);
        return;
      }
    }
  }
  return;
}



/* ===== rkisp_buf_done_task @ 00019af8 size=152 ===== */

void rkisp_buf_done_task(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ***pppiVar4;
  int ***pppiVar5;
  int ****ppppiVar6;
  int ***local_28;
  undefined4 *local_24;
  
  disableIRQinterrupts();
  local_28 = (int ***)param_1[0x198];
  local_28[1] = (int **)&local_28;
  local_24 = (undefined4 *)param_1[0x199];
  *local_24 = &local_28;
  param_1[0x198] = param_1 + 0x198;
  param_1[0x199] = param_1 + 0x198;
  uVar2 = DAT_00019b94;
  piVar1 = DAT_00019b90;
  while ((int ****)local_28 != &local_28) {
    pppiVar4 = (int ***)*local_28;
    pppiVar5 = (int ***)local_28[1];
    ppppiVar6 = (int ****)(local_28 + -0xa0);
    pppiVar4[1] = (int **)pppiVar5;
    *pppiVar5 = (int **)pppiVar4;
    *local_28 = (int **)0x100;
    local_28[1] = (int **)0x122;
    if (1 < *piVar1) {
      printk(uVar2,param_1[2] + 0xa8,*param_1,local_28[-0x44],local_28[10]);
    }
    if (*(char *)(param_1 + 0x19a) == '\0') {
      uVar3 = 6;
    }
    else {
      uVar3 = 5;
    }
    vb2_buffer_done(ppppiVar6,uVar3);
  }
  return;
}



/* ===== hdr_stop_dmatx @ 00019b98 size=172 ===== */

void hdr_stop_dmatx(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x9834);
  HintPreloadData(piVar3);
  do {
    ExclusiveAccess(piVar3);
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if ((((iVar2 + -1 == 0) && (*(int *)(param_1 + 0x318) != 0)) &&
      (*(int *)(*(int *)(param_1 + 0x318) + 4) == 5)) &&
     ((-1 < *(int *)(param_1 + 0x99ec) << 0x17 &&
      ((*(uint *)(param_1 + 0x97a4) & 0xffffffef) == 0x40)))) {
    if (((*(byte *)(param_1 + 0x982c) & 0xfa) == 8) || (*(byte *)(param_1 + 0x982c) - 5 < 2)) {
      (**(code **)(*(int *)(param_1 + 0x2214) + 4))();
    }
    if ((*(byte *)(param_1 + 0x982c) - 0xc < 2) || (*(byte *)(param_1 + 0x982c) == 6)) {
      (**(code **)(*(int *)(param_1 + 0x28d4) + 4))();
    }
    if (*(byte *)(param_1 + 0x982c) - 4 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00019c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)(param_1 + 0x2f94) + 4))();
      return;
    }
  }
  return;
}



/* ===== hdr_dqbuf @ 00019c44 size=34 ===== */

void hdr_dqbuf(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = (int *)*param_1;
  bVar2 = param_1 != piVar1;
  if (bVar2) {
    param_1 = (int *)*param_1;
    param_3 = *param_1;
    piVar1 = (int *)param_1[1];
  }
  else {
    param_1 = (int *)0x0;
  }
  if (bVar2) {
    *(int **)(param_3 + 4) = piVar1;
    *piVar1 = param_3;
    *param_1 = 0x100;
    param_1[1] = 0x122;
  }
  return;
}



/* ===== hdr_destroy_buf @ 00019c66 size=156 ===== */

void hdr_destroy_buf(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  int *piVar3;
  int iVar5;
  int iVar6;
  int *piVar4;
  
  if ((((*(int *)(param_1 + 0x5fe4) < 2) && (*(int *)(param_1 + 0x318) != 0)) &&
      (*(int *)(*(int *)(param_1 + 0x318) + 4) == 5)) &&
     (((*(uint *)(param_1 + 0x99ec) & 0x100) == 0 &&
      ((*(uint *)(param_1 + 0x97a4) & 0xffffffef) == 0x40)))) {
    iVar5 = param_1 + 0x9854;
    *(undefined4 *)(param_1 + 0x9834) = 0;
    piVar3 = (int *)(param_1 + 0x986c);
    do {
      piVar4 = piVar3 + 1;
      uVar2 = 0;
      if (*piVar3 != 0) {
        rkisp_free_buffer(param_1);
        *piVar3 = 0;
        uVar2 = extraout_r1;
      }
      iVar6 = 3;
      do {
        iVar1 = hdr_dqbuf(iVar5 + -0x18,uVar2);
        if (iVar1 != 0) {
          rkisp_free_buffer(param_1,iVar1);
        }
        iVar1 = hdr_dqbuf(iVar5);
        uVar2 = 0;
        if (iVar1 != 0) {
          rkisp_free_buffer(param_1);
          uVar2 = extraout_r1_00;
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      iVar5 = iVar5 + 8;
      piVar3 = piVar4;
    } while (piVar4 != (int *)(param_1 + 0x9878));
  }
  return;
}



/* ===== hdr_update_dmatx_buf @ 00019d02 size=440 ===== */

undefined4 hdr_update_dmatx_buf(int param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((((*(int *)(param_1 + 0x318) != 0) && (*(int *)(*(int *)(param_1 + 0x318) + 4) == 5)) &&
      (-1 < *(int *)(param_1 + 0x99ec) << 0x17)) &&
     ((*(uint *)(param_1 + 0x97a4) & 0xffffffef) == 0x40)) {
    iVar3 = *(int *)(param_1 + 8);
    iVar4 = param_1 + 0x1c18;
    do {
      if ((*(int *)(iVar4 + 0x5fc) != 0) &&
         (pcVar2 = *(code **)(*(int *)(iVar4 + 0x5fc) + 0x1c), pcVar2 != (code *)0x0)) {
        (*pcVar2)(iVar4);
      }
      iVar4 = iVar4 + 0x6c0;
    } while (param_1 + 0x3058 != iVar4);
    if (*(int *)(param_1 + 0x8c88) == 0) {
      bVar1 = *(byte *)(param_1 + 0x982f);
      iVar4 = hdr_dqbuf(param_1 + (uint)bVar1 * 8 + 0x9854);
      if (iVar4 == 0) {
        uVar5 = *(undefined4 *)(iVar3 + 0x182c);
        DataSynchronizationBarrier(0xf);
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(undefined4 *)(iVar3 + 0x1870) = uVar5;
      }
      else {
        uVar5 = *(undefined4 *)(iVar4 + 0xc);
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(undefined4 *)(iVar3 + 0x1870) = uVar5;
        *(int *)(param_1 + (bVar1 + 0x261a) * 4 + 4) = iVar4;
      }
      bVar1 = *(byte *)(param_1 + 0x9830);
      iVar4 = hdr_dqbuf(param_1 + (uint)bVar1 * 8 + 0x9854);
      if (iVar4 == 0) {
        uVar5 = *(undefined4 *)(iVar3 + 0x183c);
        DataSynchronizationBarrier(0xf);
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(undefined4 *)(iVar3 + 0x1880) = uVar5;
      }
      else {
        uVar5 = *(undefined4 *)(iVar4 + 0xc);
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(undefined4 *)(iVar3 + 0x1880) = uVar5;
        *(int *)(param_1 + (bVar1 + 0x261a) * 4 + 4) = iVar4;
      }
      bVar1 = *(byte *)(param_1 + 0x9831);
      iVar4 = hdr_dqbuf(param_1 + (uint)bVar1 * 8 + 0x9854);
      if (iVar4 == 0) {
        uVar5 = *(undefined4 *)(iVar3 + 0x184c);
        DataSynchronizationBarrier(0xf);
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(undefined4 *)(iVar3 + 0x1890) = uVar5;
      }
      else {
        uVar5 = *(undefined4 *)(iVar4 + 0xc);
        DataSynchronizationBarrier(0xe);
        arm_heavy_mb();
        *(undefined4 *)(iVar3 + 0x1890) = uVar5;
        *(int *)(param_1 + (bVar1 + 0x261a) * 4 + 4) = iVar4;
      }
    }
    if (0 < *DAT_00019ebc) {
      DataSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      printk(DAT_00019ec0,param_1 + 0xa8,*(undefined4 *)(iVar3 + 0x1c00),
             *(undefined4 *)(iVar3 + 0x1c04),*(undefined4 *)(iVar3 + 0x1c40),
             *(undefined4 *)(iVar3 + 0x1c50),*(undefined4 *)(iVar3 + 0x1c60),
             *(undefined4 *)(iVar3 + 0x1c80));
    }
  }
  return 0;
}



/* ===== hdr_qbuf @ 00019ec4 size=14 ===== */

void hdr_qbuf(int param_1,int *param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != (int *)0x0) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    *(int **)(param_1 + 4) = param_2;
    *param_2 = param_1;
    param_2[1] = (int)puVar1;
    *puVar1 = param_2;
  }
  return;
}



/* ===== hdr_config_dmatx @ 00019ed2 size=804 ===== */

undefined4 hdr_config_dmatx(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  code *pcVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  undefined1 *puVar14;
  uint local_1b8;
  uint local_1b4;
  int local_fc;
  int local_f8;
  int local_f4;
  uint local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [184];
  
  piVar6 = (int *)(param_1 + 0x9834);
  HintPreloadData(piVar6);
  do {
    ExclusiveAccess(piVar6);
    iVar4 = *piVar6;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar4 + 1;
  if (1 < iVar4 + 1) {
    return 0;
  }
  if (*(int *)(param_1 + 0x318) == 0) {
    return 0;
  }
  if (*(int *)(*(int *)(param_1 + 0x318) + 4) != 5) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x99ec) & 0x100) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x97a4) & 0xffffffef) != 0x40) {
    return 0;
  }
  uVar7 = *(byte *)(param_1 + 0x982c) - 4 & 0xff;
  local_f8 = 0;
  if (uVar7 < 10) {
    iVar4 = 1;
    uVar5 = 1 << uVar7;
    if ((uVar5 & 0x31) == 0) {
      if ((uVar5 & 0x302) == 0) {
        if ((uVar5 & 4) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = 3;
        }
      }
      else {
        iVar4 = 2;
      }
    }
    if (uVar7 < 3) {
      if (*(int *)(param_1 + 0x8c88) == 0) {
        local_f4 = 3;
      }
      else {
        local_f4 = 0;
      }
    }
    else {
      local_f4 = 1;
    }
    local_f0 = *(uint *)(param_1 + 0x2158);
    puVar9 = (uint *)(param_1 + 0x9884);
    iVar11 = param_1 + 0x983c;
    puVar14 = (undefined1 *)(param_1 + 0x982f);
    for (iVar10 = 0; iVar10 != iVar4; iVar10 = iVar10 + 1) {
      puVar13 = puVar9 + -3;
      local_ec = param_1 + 0xa8;
      puVar12 = puVar9;
      for (local_fc = 0; local_fc != local_f4; local_fc = local_fc + 1) {
        puVar12[4] = local_f0;
        iVar2 = rkisp_alloc_buffer(param_1,puVar13);
        if (iVar2 < 0) {
          printk(DAT_0001a1f8,param_1 + 0xa8);
          goto LAB_00019fd6;
        }
        hdr_qbuf(iVar11,puVar13);
        if (0 < *DAT_0001a1fc) {
          local_1b8 = *puVar12;
          printk(DAT_0001a200,local_ec,iVar10,local_fc);
        }
        puVar12 = puVar12 + 10;
        puVar13 = puVar13 + 10;
      }
      *puVar14 = (char)iVar10;
      puVar9 = puVar9 + 0x1e;
      iVar11 = iVar11 + 8;
      puVar14 = puVar14 + 1;
    }
  }
  else {
    iVar4 = 0;
  }
  if (*(char *)(param_1 + 0x982c) == '\x04') {
    *(undefined1 *)(param_1 + 0x982f) = 1;
    uVar3 = 2;
  }
  else {
    if (*(char *)(param_1 + 0x982c) != '\x05') goto LAB_0001a1aa;
    *(undefined1 *)(param_1 + 0x982f) = 0;
    uVar3 = 0x102;
  }
  *(undefined2 *)(param_1 + 0x9830) = uVar3;
LAB_0001a1aa:
  if (0 < *DAT_0001a1fc) {
    local_1b4 = (uint)*(byte *)(param_1 + 0x9831);
    local_1b8 = (uint)*(byte *)(param_1 + 0x9830);
    printk(DAT_0001a204,param_1 + 0xa8,iVar4,*(undefined1 *)(param_1 + 0x982f));
  }
LAB_00019fd6:
  memset(&local_e8,0,0xc0);
  if (((*(byte *)(param_1 + 0x982c) & 0xfa) == 8) || (*(byte *)(param_1 + 0x982c) - 5 < 2)) {
    if ((*(undefined4 **)(param_1 + 0x2214) != (undefined4 *)0x0) &&
       (pcVar8 = (code *)**(undefined4 **)(param_1 + 0x2214), pcVar8 != (code *)0x0)) {
      (*pcVar8)(param_1 + 0x1c18);
    }
    if (*(int *)(param_1 + 0x8c88) == 0) {
      memcpy(&local_e8,(void *)(param_1 + 0x2144),0xc0);
      memcpy(&local_1b8,auStack_dc,0xb4);
      rkisp_dmarx_set_fmt(param_1 + 0x7848,local_e8,local_e4,uStack_e0);
      mi_raw_length(param_1 + 0x7848);
    }
  }
  if ((*(byte *)(param_1 + 0x982c) - 0xc < 2) || (*(byte *)(param_1 + 0x982c) == 6)) {
    if ((*(undefined4 **)(param_1 + 0x28d4) != (undefined4 *)0x0) &&
       (pcVar8 = (code *)**(undefined4 **)(param_1 + 0x28d4), pcVar8 != (code *)0x0)) {
      (*pcVar8)(param_1 + 0x22d8);
    }
    if (*(int *)(param_1 + 0x8c88) == 0) {
      memcpy(&local_e8,(void *)(param_1 + 0x2804),0xc0);
      memcpy(&local_1b8,auStack_dc,0xb4);
      rkisp_dmarx_set_fmt(param_1 + 0x7f08,local_e8,local_e4,uStack_e0);
      mi_raw_length(param_1 + 0x7f08);
    }
  }
  if (*(byte *)(param_1 + 0x982c) - 4 < 3) {
    if ((*(undefined4 **)(param_1 + 0x2f94) != (undefined4 *)0x0) &&
       (pcVar8 = (code *)**(undefined4 **)(param_1 + 0x2f94), pcVar8 != (code *)0x0)) {
      (*pcVar8)(param_1 + 0x2998);
    }
    if (*(int *)(param_1 + 0x8c88) == 0) {
      local_f8 = *(int *)(param_1 + 0x303c);
      memcpy(&local_e8,(void *)(param_1 + 0x2ec4),0xc0);
      memcpy(&local_1b8,auStack_dc,0xb4);
      rkisp_dmarx_set_fmt(param_1 + 0x85c8,local_e8,local_e4,uStack_e0);
      (*(code *)**(undefined4 **)(param_1 + 0x8bc4))(param_1 + 0x85c8);
    }
  }
  if ((*(char *)(param_1 + 0x982c) != '\0') && (*(int *)(param_1 + 0x8c88) == 0)) {
    iVar10 = *(int *)(param_1 + 8);
    iVar4 = local_f8 << 2;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(int *)(iVar10 + 0x1c80) = iVar4;
    if ((local_e8 != 0) && (local_e4 != 0)) {
      rkisp_rawrd_set_pic_size(param_1);
    }
  }
  return 0;
}



/* ===== rkisp_config_dmatx_valid_buf @ 0001a208 size=162 ===== */

void rkisp_config_dmatx_valid_buf(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar5 = *(int *)(param_1 + 0x94);
  if ((((*(int *)(iVar5 + 0x764) != 0) && (*(int *)(param_1 + 0x318) != 0)) &&
      (*(int *)(*(int *)(param_1 + 0x318) + 4) == 5)) &&
     (((*(uint *)(param_1 + 0x99ec) & 0x100) == 0 &&
      ((*(uint *)(param_1 + 0x97a4) & 0xffffffef) == 0x40)))) {
    piVar7 = (int *)(iVar5 + 0x58);
    for (uVar3 = 0; uVar3 < *(uint *)(iVar5 + 0xb8); uVar3 = uVar3 + 1) {
      iVar4 = *piVar7;
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x99ec) << 0x1b < 0)) {
        piVar2 = (int *)(iVar4 + 0x1c20);
        do {
          if (((*(char *)((int)piVar2 + 0x663) != '\0') && (piVar2[0x181] == 0)) &&
             (piVar2[0x182] == 0)) {
            uVar1 = *(undefined4 *)(iVar5 + 0x75c);
            iVar6 = *(int *)(*piVar2 + 8);
            DataSynchronizationBarrier(0xe);
            arm_heavy_mb();
            *(undefined4 *)(iVar6 + *(int *)(piVar2[0x17e] + 0x9c)) = uVar1;
          }
          piVar2 = piVar2 + 0x1b0;
        } while (piVar2 != (int *)(iVar4 + 0x5fa0));
      }
      piVar7 = piVar7 + 1;
    }
  }
  return;
}



/* ===== rkisp_fcc_xysubs @ 0001a2aa size=196 ===== */

undefined4 rkisp_fcc_xysubs(uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 != DAT_0001a370) {
    if (param_1 < DAT_0001a370) {
      if (param_1 != DAT_0001a370 + 0xfef31408) {
        if (param_1 < DAT_0001a370 + 0xfef31408) {
          if (param_1 != DAT_0001a370 + 0xfeef0b08) {
            if (param_1 < DAT_0001a370 + 0xfeef0b08) {
              uVar1 = DAT_0001a370 + 0xfe000000;
              goto LAB_0001a2d8;
            }
            if (param_1 != DAT_0001a374) {
              uVar1 = DAT_0001a374 + 0x3f70b;
              goto LAB_0001a2f0;
            }
          }
        }
        else if (param_1 != DAT_0001a378) {
          if (param_1 < DAT_0001a378) {
            uVar1 = DAT_0001a378 - 0x80b;
          }
          else {
            if (param_1 == DAT_0001a37c) goto LAB_0001a36a;
            uVar1 = DAT_0001a37c + 0xb;
          }
LAB_0001a2d8:
          if (param_1 != uVar1) {
            return 0xffffffea;
          }
        }
LAB_0001a36a:
        uVar2 = 2;
LAB_0001a338:
        *param_2 = uVar2;
        goto LAB_0001a2fa;
      }
    }
    else if (param_1 != DAT_0001a380) {
      if (param_1 < DAT_0001a380) {
        if (param_1 == DAT_0001a380 + 0xe0d7fff5) goto LAB_0001a2f4;
        if (param_1 < DAT_0001a380 + 0xe0d7fff5) {
          if (param_1 != DAT_0001a384) {
            return 0xffffffea;
          }
          goto LAB_0001a336;
        }
        if (param_1 == DAT_0001a388) goto LAB_0001a36a;
        uVar1 = DAT_0001a388 + 0x8eeefee;
      }
      else {
        if (param_1 == DAT_0001a38c) {
LAB_0001a336:
          uVar2 = 1;
          goto LAB_0001a338;
        }
        uVar1 = DAT_0001a390;
        if (DAT_0001a38c <= param_1) {
          if (param_1 == DAT_0001a394) goto LAB_0001a2f4;
          uVar1 = DAT_0001a394 + 0xffff;
        }
      }
LAB_0001a2f0:
      if (param_1 != uVar1) {
        return 0xffffffea;
      }
    }
  }
LAB_0001a2f4:
  *param_2 = 2;
  uVar2 = 1;
LAB_0001a2fa:
  *param_3 = uVar2;
  return 0;
}



/* ===== rkisp_set_fmt @ 0001a398 size=1010 ===== */

undefined4 rkisp_set_fmt(uint *param_1,uint *param_2,int param_3)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint *local_6c;
  uint local_64;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [8];
  uint local_30;
  uint local_2c;
  
  local_40 = 1;
  local_3c = 1;
  uVar11 = param_2[2];
  uVar13 = param_1[0x180];
  uVar10 = param_1[2];
  puVar5 = (uint *)find_fmt(param_1,uVar11);
  if (puVar5 == (uint *)0x0) {
    printk(DAT_0001a6cc,uVar10 + 0xa8,param_1 + 0x11e,uVar11,uVar11 >> 8,uVar11 >> 0x10,
           uVar11 >> 0x18);
    return 0xffffffea;
  }
  restrict_rsz_resolution(param_1,uVar13,auStack_38);
  uVar11 = *param_1;
  uVar9 = *param_2;
  if ((uVar11 < 2) || ((uVar11 == 7 && (*(int *)(uVar10 + 0x97a4) != 0x60)))) {
    uVar11 = *(uint *)(uVar13 + 0x10);
    if (uVar11 < uVar9) {
      uVar11 = uVar9;
    }
    if (local_30 <= uVar11) {
      uVar11 = local_30;
    }
    *param_2 = uVar11;
    goto LAB_0001a41e;
  }
  if (((uVar9 == local_30) || (param_2[1] == local_2c)) ||
     ((uVar11 != 10 && ((*(int *)(uVar10 + 0x97a4) != 0x60 || (1 < uVar11 - 6)))))) {
    if (1 < uVar11 - 8) {
      if (uVar11 == 0xb) {
        if (param_1[0x1a8] == 0xffffffff) {
          puVar12 = (uint *)(uVar10 + 0xe98);
          uVar11 = 0;
          do {
            if ((((char)puVar12[0x146] == '\0') && ((char)puVar12[0x19a] != '\0')) &&
               (uVar13 = puVar12[0x150], uVar11 < uVar13)) {
              memcpy(param_2,puVar12 + 0x14b,0xc0);
              param_1[0x1a8] = *puVar12;
              uVar11 = uVar13;
            }
            puVar12 = puVar12 + 0x1b0;
          } while ((uint *)(uVar10 + 0x58d8) != puVar12);
        }
        else {
          memcpy(param_2,(void *)(param_1[0x1a8] * 0x6c0 + uVar10 + 0x13c4),0xc0);
        }
        if (param_1[0x1a8] == 0xffffffff) {
          printk(DAT_0001a6d8,uVar10 + 0xa8);
          return 0xffffffea;
        }
      }
      goto LAB_0001a41e;
    }
    uVar11 = *(uint *)(param_1[0x1a8] * 0x6c0 + uVar10 + 0x13cc);
    if (((param_2[2] == uVar11) && (uVar9 == local_30)) && (param_2[1] == local_2c))
    goto LAB_0001a41e;
    iVar14 = param_1[0x1a8] * 0x6c0;
    printk(DAT_0001a6d4,uVar10 + 0xa8,param_1 + 0x11e,iVar14 + 0x1310 + uVar10,local_30,local_2c,
           uVar11,uVar11 >> 8,uVar11 >> 0x10,uVar11 >> 0x18);
    param_2[2] = *(uint *)(iVar14 + uVar10 + 0x13cc);
  }
  else {
    printk(DAT_0001a6d0,uVar10 + 0xa8,param_1 + 0x11e,uVar9,param_2[1],local_30,local_2c);
  }
  *param_2 = local_30;
  param_2[1] = local_2c;
LAB_0001a41e:
  uVar1 = *(undefined1 *)((int)puVar5 + 10);
  *(undefined1 *)(param_2 + 3) = 1;
  *(undefined1 *)(param_2 + 0x2d) = uVar1;
  *(undefined1 *)((int)param_2 + 0xd) = 0;
  *(undefined1 *)((int)param_2 + 0xe) = 0;
  *(undefined1 *)((int)param_2 + 0xf) = 0;
  *(char *)((int)param_2 + 0xb7) = (char)*(undefined4 *)(param_1[2] + 0xe64);
  rkisp_fcc_xysubs(*puVar5,&local_40,&local_3c);
  uVar4 = local_3c;
  uVar3 = local_40;
  uVar11 = (uint)*(byte *)((int)puVar5 + 9);
  if (uVar11 == 0) {
    uVar11 = (uint)*(byte *)((int)puVar5 + 10);
  }
  local_64 = 0;
  iVar14 = 1;
  local_6c = puVar5 + 5;
  do {
    if (iVar14 == uVar11 + 1) {
      if ((*(char *)((int)puVar5 + 10) == '\x01') || ((char)puVar5[2] == '\x04')) {
        param_2[5] = local_64;
      }
      if (((param_3 == 0) && ((char)param_1[0x19b] == '\0')) && ((char)param_1[0x19a] == '\0')) {
        uVar10 = puVar5[1];
        uVar11 = puVar5[2];
        uVar13 = puVar5[3];
        param_1[0x144] = *puVar5;
        param_1[0x145] = uVar10;
        param_1[0x146] = uVar11;
        param_1[0x147] = uVar13;
        uVar10 = puVar5[5];
        uVar11 = puVar5[6];
        param_1[0x148] = puVar5[4];
        param_1[0x149] = uVar10;
        param_1[0x14a] = uVar11;
        memcpy(param_1 + 0x14b,param_2,0xc0);
        if (*param_1 == 1) {
          uVar10 = __aeabi_uidiv(param_2[6],(byte)puVar5[5] + 7 >> 3);
          param_1[0x1aa] = uVar10;
        }
        else if (*param_1 == 0) {
          *(bool *)(param_1 + 0x1aa) = (char)puVar5[2] == '\x02';
        }
        if (0 < *DAT_0001a79c) {
          printk(DAT_0001a7a4,param_1[2] + 0xa8,DAT_0001a7a0,param_1 + 0x11e,*param_2,param_2[1],
                 param_1[0x14b],param_1[0x14c]);
        }
      }
      return 0;
    }
    cVar2 = (char)puVar5[2];
    uVar13 = *param_2;
    uVar9 = param_2[1];
    if (cVar2 == '\a') {
      uVar13 = uVar13 + 0xf;
      uVar9 = uVar9 + 0xf;
    }
    puVar12 = param_2 + iVar14 * 5;
    if (cVar2 == '\a') {
      uVar13 = uVar13 & 0xfffffff0;
      uVar9 = uVar9 & 0xfffffff0;
    }
    if ((*(uint *)(uVar10 + 0x5ff0) != 0) && (*param_1 == 0)) {
      uVar9 = *(uint *)(uVar10 + 0x5ff0);
    }
    uVar7 = uVar9;
    uVar6 = uVar13;
    if (iVar14 != 1) {
      uVar6 = __aeabi_uidiv(uVar13,uVar3);
      uVar7 = __aeabi_uidiv(uVar9,uVar4);
    }
    uVar8 = *(uint *)(uVar10 + 0x97a4);
    if (uVar8 == 0x40) {
      if ((cVar2 == '\x02') && (*param_1 == 4)) {
        uVar7 = uVar7 + 0x18;
      }
LAB_0001a638:
      if (((param_1[0x1a9] != 0) || (cVar2 != '\x02')) || (*param_1 < 2)) goto LAB_0001a790;
      uVar6 = ((byte)*local_6c * uVar6 >> 3) + 0xff & 0xffffff00;
    }
    else {
      if (uVar8 == 0x50) goto LAB_0001a638;
LAB_0001a790:
      uVar6 = ((int)((byte)*local_6c + 7) >> 3) * uVar6;
    }
    if ((iVar14 != 1) || (puVar12[1] < uVar6)) {
      puVar12[1] = uVar6;
    }
    uVar6 = *(uint *)(uVar10 + 0x97a4);
    if (uVar6 == 0x40) {
      if (*param_1 == 1) {
LAB_0001a67c:
        puVar12[1] = puVar12[1] + 0xf & 0xfffffff0;
      }
    }
    else if (0x5f < uVar6) goto LAB_0001a67c;
    uVar7 = puVar12[1] * uVar7;
    param_2[iVar14 * 5] = uVar7;
    if ((char)puVar5[2] == '\x04') {
      if (iVar14 == 1) {
        uVar13 = uVar7 + 0x3f & 0xffffffc0;
LAB_0001a6b0:
        param_2[iVar14 * 5] = uVar13;
      }
    }
    else if ((char)puVar5[2] == '\a') {
      if (iVar14 == 1) {
        uVar13 = (uVar7 >> 4) + 0xfff & 0xfffff000;
        goto LAB_0001a6b0;
      }
      param_2[iVar14 * 5] = uVar13 * uVar9 + uVar7;
    }
    iVar14 = iVar14 + 1;
    local_64 = local_64 + *puVar12;
    local_6c = (uint *)((int)local_6c + 1);
  } while( true );
}



/* ===== rkisp_try_fmt_vid_cap_mplane @ 0001a7a8 size=18 ===== */

void rkisp_try_fmt_vid_cap_mplane(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = video_drvdata();
  rkisp_set_fmt(uVar1,param_3 + 4,1);
  return;
}



/* ===== rkisp_s_fmt_vid_cap_mplane @ 0001a7ba size=44 ===== */

undefined4 rkisp_s_fmt_vid_cap_mplane(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = video_drvdata();
  if ((*(byte *)(iVar1 + 0x1a8) & 1) == 0) {
    uVar2 = rkisp_set_fmt(iVar1,param_3 + 4);
    return uVar2;
  }
  printk(DAT_0001a7ec,*(int *)(iVar1 + 8) + 0xa8,DAT_0001a7e8);
  return 0xfffffff0;
}



/* ===== rkisp_mbus_code_xysubs @ 0001a7f0 size=42 ===== */

undefined4 rkisp_mbus_code_xysubs(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((param_1 - 0x2008U < 0xb) && ((1 << (param_1 - 0x2008U & 0xff) & 0x781U) != 0)) {
    *param_2 = 2;
    uVar1 = 0;
    *param_3 = 1;
  }
  else {
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== rkisp_stream_frame_start @ 0001a81a size=62 ===== */

undefined4 rkisp_stream_frame_start(int param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    rkisp_dvbm_event(param_1,0x40);
  }
  param_1 = param_1 + 0xe98;
  uVar2 = 0xfffffff6;
  do {
    if ((((1 < uVar2) && (*(char *)(param_1 + 0x668) != '\0')) && (*(int *)(param_1 + 0x5fc) != 0))
       && (pcVar1 = *(code **)(*(int *)(param_1 + 0x5fc) + 0x20), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1,param_2);
    }
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0x6c0;
  } while (uVar2 != 2);
  return 0;
}



/* ===== rkisp_set_stream_def_fmt @ 0001a858 size=104 ===== */

void rkisp_set_stream_def_fmt
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int local_d0;
  
  memset(&local_d8,0,0xc0);
  if (param_5 == 0) {
    param_5 = *(int *)(param_2 * 0x6c0 + param_1 + 0x13a8);
  }
  if (param_5 != 0) {
    iVar1 = param_1 + param_2 * 0x6c0;
    *(undefined4 *)(iVar1 + 0x1484) = 0;
    *(undefined4 *)(iVar1 + 0x1488) = 0;
    *(undefined4 *)(iVar1 + 0x148c) = param_3;
    *(undefined4 *)(iVar1 + 0x1490) = param_4;
    local_d8 = param_3;
    uStack_d4 = param_4;
    local_d0 = param_5;
    rkisp_set_fmt(param_2 * 0x6c0 + 0xe98 + param_1,&local_d8);
  }
  return;
}



/* ===== rkisp_get_tb_stream_info @ 0001a8c0 size=58 ===== */

undefined4 rkisp_get_tb_stream_info(int *param_1,void *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  uVar1 = DAT_0001a8fc;
  if ((*param_1 == 0) && (uVar1 = DAT_0001a900, *(int *)(iVar2 + 0x9a6d) != 0)) {
    memcpy(param_2,(void *)(iVar2 + 0x9a5d),0x68);
    uVar1 = 0;
  }
  else {
    printk(uVar1,iVar2 + 0xa8);
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== rkisp_free_tb_stream_buf @ 0001a904 size=20 ===== */

void rkisp_free_tb_stream_buf(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001a916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0xc98) + 0x18))
            (*(int *)(param_1 + 8) + 0xc30,0x56c3,0);
  return;
}



/* ===== rkisp_ioctl_default @ 0001a918 size=1212 ===== */

undefined4 rkisp_ioctl_default(void)

{
  undefined2 uVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint in_r3;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  short *psVar18;
  uint uVar19;
  uint *in_stack_00000000;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint *local_48;
  undefined4 local_2c [2];
  
  piVar3 = (int *)video_drvdata();
  if (in_stack_00000000 == (uint *)0x0) {
    if (in_r3 != 0x5730) {
      return 0xffffffea;
    }
LAB_0001adc8:
    uVar4 = rkisp_free_tb_stream_buf(piVar3);
    return uVar4;
  }
  if (in_r3 != DAT_0001ab78) {
    if (in_r3 < DAT_0001ab78) {
      if (in_r3 == DAT_0001ab78 - 0xbc0002) {
        if (3 < *piVar3 - 2U) {
          return 0xffffffea;
        }
        if (*in_stack_00000000 != 0) {
          if (*in_stack_00000000 != 2) {
            piVar3[0x1a9] = 6;
            return 0;
          }
          piVar3[0x1a9] = 2;
          return 0;
        }
        piVar3[0x1a9] = 0;
        return 0;
      }
      if (DAT_0001ab78 - 0xbc0002 <= in_r3) {
        if (in_r3 == DAT_0001ab84) {
          uVar11 = *in_stack_00000000;
          if (*piVar3 == 0xb) {
            if ((uVar11 < 2) || (uVar11 == 7)) {
              piVar3[0x1a8] = uVar11;
              return 0;
            }
            iVar12 = piVar3[2] + 0xa8;
            uVar4 = DAT_0001ae0c;
          }
          else {
            iVar12 = piVar3[2] + 0xa8;
            uVar4 = DAT_0001ae08;
          }
        }
        else {
          if (in_r3 != DAT_0001ab84 + 0x3fffb) {
            if (in_r3 != DAT_0001ab84 - 4) {
              return 0xffffffea;
            }
            if (*(int *)(piVar3[2] + 0x97a4) != 0x70) {
              return 0xffffffea;
            }
            uVar4 = rkisp_rockit_fps_set(in_stack_00000000,piVar3);
            return uVar4;
          }
          iVar12 = piVar3[2];
          if (((*(int *)(iVar12 + 0x97a4) == 0x70) && (*(int *)(*(int *)(iVar12 + 0x94) + 0xbc) < 2)
              ) && (*(int *)(piVar3[0x17f] + 0x24) != 0)) {
            *(uint *)(iVar12 + 0x5fec) = *in_stack_00000000;
            uVar4 = (**(code **)(piVar3[0x17f] + 0x24))(piVar3,in_stack_00000000[1]);
            return uVar4;
          }
          iVar12 = iVar12 + 0xa8;
          uVar4 = DAT_0001ae04;
        }
        printk(uVar4,iVar12);
        return 0xffffffea;
      }
      if (in_r3 != 0x5730) {
        if (in_r3 != DAT_0001ab7c) {
          return 0xffffffea;
        }
        iVar12 = piVar3[2];
        if (*(int *)(iVar12 + 0x97a4) != 0x70) {
          return 0xffffffea;
        }
        if (*(int *)(iVar12 + 0x5ff0) == 0) {
          *(bool *)(iVar12 + 0x5ff5) = (char)*in_stack_00000000 != '\0';
        }
        else {
          printk(DAT_0001ab80,iVar12 + 0xa8);
          *(undefined1 *)(iVar12 + 0x5ff5) = 0;
        }
        *(bool *)((int)piVar3 + 0x66e) = *(char *)((int)in_stack_00000000 + 1) != '\0';
        *(undefined1 *)((int)piVar3 + 0x66d) = 1;
        return 0;
      }
      goto LAB_0001adc8;
    }
    if (in_r3 == DAT_0001ab88) {
      iVar12 = piVar3[2];
      if ((*(int *)(iVar12 + 0x97a4) != 0x70) && (*piVar3 != 0)) {
        return 0xffffffea;
      }
      *in_stack_00000000 = *(uint *)(iVar12 + 0x5fec);
      in_stack_00000000[1] = *(uint *)(iVar12 + 0x5ff0);
      return 0;
    }
    if (in_r3 < DAT_0001ab88) {
      if (in_r3 == DAT_0001ab88 - 0x40007) {
        if (3 < *piVar3 - 2U) {
          return 0xffffffea;
        }
        if (piVar3[0x1a9] != 0) {
          if (piVar3[0x1a9] != 2) {
            *in_stack_00000000 = 1;
            return 0;
          }
          *in_stack_00000000 = 2;
          return 0;
        }
        *in_stack_00000000 = 0;
        return 0;
      }
      if (in_r3 == DAT_0001ab88 - 0x3fffd) {
        if (*(int *)(piVar3[2] + 0x97a4) != 0x70) {
          return 0xffffffea;
        }
        uVar4 = rkisp_rockit_fps_get(in_stack_00000000,piVar3);
        return uVar4;
      }
      if (in_r3 != DAT_0001ab88 - 0x60002) {
        return 0xffffffea;
      }
      if (*(int *)(piVar3[2] + 0x97a4) != 0x70) {
        return 0xffffffea;
      }
      *(char *)in_stack_00000000 = *(char *)(piVar3[2] + 0x5ff5);
      *(char *)((int)in_stack_00000000 + 1) = *(char *)((int)piVar3 + 0x66e);
      return 0;
    }
    if (in_r3 == DAT_0001ab8c) {
      uVar4 = rkisp_get_tb_stream_info(piVar3,in_stack_00000000);
      return uVar4;
    }
    if (in_r3 != DAT_0001ab8c + 0x57fff7) {
      if (in_r3 == DAT_0001ab90) {
        iVar12 = piVar3[2];
        local_2c[0] = 0;
        rkisp_dmarx_get_frame(iVar12,local_2c,0,0,1);
        *in_stack_00000000 = piVar3[0x1a6];
        in_stack_00000000[1] = *(uint *)(iVar12 + 0xe8c);
        in_stack_00000000[2] = piVar3[0x1a7];
        *(char *)(in_stack_00000000 + 3) = (char)piVar3[0x19a];
        *(char *)((int)in_stack_00000000 + 0xd) = (char)*piVar3;
        return 0;
      }
      return 0xffffffea;
    }
    iVar12 = piVar3[2];
    uVar4 = DAT_0001ab94;
    if ((((*(uint *)(iVar12 + 0x97a4) & 0xffffffef) == 0x60) && (*piVar3 != 6)) &&
       (1 < *piVar3 - 8U)) {
      disableIRQinterrupts();
      memcpy(in_stack_00000000,(void *)(iVar12 + 0xdf74),0xc0);
      if (*piVar3 == 0) {
        uVar11 = (uint)*(ushort *)((int)in_stack_00000000 + 2);
        uVar5 = (uint)(ushort)*in_stack_00000000;
      }
      else if (*piVar3 == 1) {
        uVar11 = (uint)*(ushort *)((int)in_stack_00000000 + 0x11);
        uVar5 = (uint)*(ushort *)((int)in_stack_00000000 + 0xf);
      }
      else {
        uVar11 = (uint)(ushort)in_stack_00000000[8];
        uVar5 = (uint)*(ushort *)((int)in_stack_00000000 + 0x1e);
      }
      in_stack_00000000[0x2e] = *(uint *)(iVar12 + 0xe54);
      in_stack_00000000[0x2f] = *(uint *)(iVar12 + 0xe58);
      uVar6 = 0;
      do {
        iVar12 = uVar6 * 0xf;
        *(ushort *)((int)in_stack_00000000 + iVar12 + 2) = (ushort)(uVar11 >> (uVar6 & 0xff)) & 1;
        uVar13 = uVar6 & 0xff;
        uVar6 = uVar6 + 1;
        *(ushort *)((int)in_stack_00000000 + iVar12) = (ushort)(uVar5 >> uVar13) & 1;
      } while (uVar6 != 0xc);
      return 0;
    }
LAB_0001aad4:
    printk(DAT_0001ab98,iVar12 + 0xa8,uVar4);
    return 0xffffffea;
  }
  iVar12 = piVar3[2];
  uVar11 = *(uint *)(iVar12 + 0xe54);
  uVar5 = *(uint *)(iVar12 + 0xe58);
  uVar4 = DAT_0001ab9c;
  if (*(int *)(iVar12 + 0x97a4) == 0x60) {
    iVar7 = 8;
  }
  else {
    if (*(int *)(iVar12 + 0x97a4) != 0x70) goto LAB_0001aad4;
    iVar7 = 2;
  }
  if ((*piVar3 == 6) || (*piVar3 - 8U < 2)) goto LAB_0001aad4;
  disableIRQinterrupts();
  *(undefined1 *)(iVar12 + 0xe034) = 1;
  pcVar14 = (char *)(iVar12 + 0xdf78);
  uVar13 = 0;
  local_48 = in_stack_00000000;
  local_54 = 0;
  local_50 = 0;
  uVar6 = -iVar7 & 0xffff;
  do {
    psVar18 = (short *)(uVar13 * 0xf + (int)in_stack_00000000);
    if (psVar18[1] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1 << (uVar13 & 0xff) & 0xffff;
    }
    local_50 = local_50 | uVar8;
    if (*psVar18 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1 << (uVar13 & 0xff) & 0xffff;
    }
    local_54 = local_54 | uVar8;
    if (psVar18[1] != 0) {
      if (*psVar18 != 0) {
        *pcVar14 = (char)local_48[1];
        pcVar14[1] = *(char *)((int)local_48 + 5);
        pcVar14[2] = *(char *)((int)local_48 + 6);
      }
      uVar17 = *(ushort *)((int)psVar18 + 7) & 0xfffffffe;
      uVar8 = (uint)*(ushort *)((int)in_stack_00000000 + uVar13 * 0xf + 9);
      uVar19 = (uint)*(ushort *)((int)in_stack_00000000 + uVar13 * 0xf + 0xb);
      uVar9 = (uint)*(ushort *)((int)in_stack_00000000 + uVar13 * 0xf + 0xd);
      uVar16 = uVar8 & 0xfffffffe;
      uVar15 = uVar19 & uVar6;
      local_4c = uVar6 & uVar9;
      if (((*(ushort *)((int)psVar18 + 7) == uVar17) && (uVar8 == uVar16)) && (uVar19 == uVar15)) {
        bVar2 = false;
        if (uVar9 != local_4c) {
          bVar2 = true;
        }
      }
      else {
        bVar2 = true;
      }
      if (uVar11 < uVar15 + uVar17) {
        uVar15 = uVar6 & uVar11 - uVar17;
        bVar2 = true;
      }
      if (uVar5 < local_4c + uVar16) {
        local_4c = uVar5 - uVar16 & uVar6;
LAB_0001ac86:
        printk(DAT_0001ae00,iVar12 + 0xa8,piVar3 + 0x11e,uVar13,iVar7,uVar17,uVar16,uVar15,local_4c)
        ;
      }
      else if (bVar2) goto LAB_0001ac86;
      iVar10 = uVar13 * 0xf + iVar12;
      *(short *)(iVar10 + 0xdf7b) = (short)uVar17;
      *(short *)(iVar10 + 0xdf7d) = (short)uVar16;
      *(short *)(iVar10 + 0xdf7f) = (short)uVar15;
      *(short *)(iVar10 + 0xdf81) = (short)local_4c;
    }
    uVar13 = uVar13 + 1;
    pcVar14 = pcVar14 + 0xf;
    local_48 = (uint *)((int)local_48 + 0xf);
  } while (uVar13 != 0xc);
  uVar1 = (undefined2)local_50;
  if (*piVar3 == 0) {
    *(undefined2 *)(iVar12 + 0xdf76) = uVar1;
    iVar7 = 0xdf74;
  }
  else {
    if (*piVar3 == 1) {
      *(undefined2 *)(iVar12 + 0xdf85) = uVar1;
      *(short *)(iVar12 + 0xdf83) = (short)local_54;
      goto LAB_0001ad22;
    }
    *(undefined2 *)(iVar12 + 0xdf94) = uVar1;
    iVar7 = 0xdf92;
  }
  *(short *)(iVar12 + iVar7) = (short)local_54;
LAB_0001ad22:
  *(uint *)(iVar12 + 0xe028) = in_stack_00000000[0x2d];
  return 0;
}



/* ===== rkisp_stream_buf_done @ 0001ae10 size=78 ===== */

void rkisp_stream_buf_done(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint in_cpsr;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    disableIRQinterrupts();
    piVar2 = *(int **)(param_1 + 0x664);
    *(int *)(param_1 + 0x664) = param_2 + 0x280;
    *(int *)(param_2 + 0x280) = param_1 + 0x660;
    *(int **)(param_2 + 0x284) = piVar2;
    *piVar2 = param_2 + 0x280;
    disableIRQinterrupts();
    uVar3 = *(uint *)(param_1 + 0x64c);
    uVar1 = uVar3 | 1;
    *(uint *)(param_1 + 0x64c) = uVar1;
    if (-1 < (int)(uVar3 << 0x1f)) {
      __tasklet_schedule(param_1 + 0x648,uVar1,
                         (uint)(byte)(((int)in_cpsr < 0) << 4 | ((in_cpsr >> 0x1e & 1) != 0) << 3 |
                                      ((in_cpsr >> 0x1d & 1) != 0) << 2 |
                                      ((in_cpsr >> 0x1c & 1) != 0) << 1 | (in_cpsr >> 0x1b & 1) != 0
                                     ) << 0x1b);
      return;
    }
  }
  return;
}



/* ===== rkisp_unregister_stream_vdev @ 0001ae5e size=24 ===== */

void rkisp_unregister_stream_vdev(int param_1)

{
  tasklet_kill(param_1 + 0x648);
  video_unregister_device(param_1 + 0x1d8);
  return;
}



/* ===== rkisp_register_stream_vdev @ 0001ae76 size=270 ===== */

int rkisp_register_stream_vdev
              (uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  
  uVar5 = param_1[2];
  puVar7 = param_1 + 0x76;
  __mutex_init(param_1 + 399,DAT_0001af88,DAT_0001af84,param_4,param_1,param_2);
  uVar2 = DAT_0001af90;
  uVar4 = DAT_0001af8c;
  param_1[0x13a] = (uint)(param_1 + 399);
  param_1[0x133] = uVar4;
  param_1[0xaf] = uVar4 + 0x1dc;
  param_1[0x119] = uVar5 + 0x98;
  uVar4 = DAT_0001af94;
  param_1[0x132] = uVar2;
  param_1[0xc2] = (uint)param_1;
  param_1[0xb0] = uVar4;
  param_1[0x128] = 0xffffffff;
  param_1[0x11c] = (uint)(param_1 + 4);
  param_1[0x127] = 0;
  param_1[0x143] = 1;
  iVar3 = __video_register_device(puVar7,0,0xffffffff,1,0);
  if (iVar3 < 0) {
    printk(DAT_0001af98,uVar5 + 0xa8,iVar3);
  }
  else {
    iVar3 = media_entity_pads_init(puVar7,1,param_1 + 0x13c);
    if (-1 < iVar3) {
      uVar4 = *param_1;
      if (uVar4 - 2 < 4) {
        iVar6 = uVar5 + uVar4 * 2;
        iVar3 = uVar5 + 0x8cc4;
        *(undefined1 *)(iVar6 + 0x8e47) = 1;
        *(char *)(iVar6 + 0x8e46) = (char)(1 << (uVar4 - 1 & 0xff));
      }
      else {
        iVar3 = uVar5 + 0xc30;
        uVar4 = 2;
      }
      iVar3 = media_create_pad_link
                        (iVar3,uVar4 & 0xffff,puVar7,0,*(undefined1 *)((int)param_1 + 0x66b));
      if (-1 < iVar3) {
        param_1[0x198] = (uint)(param_1 + 0x198);
        param_1[0x199] = (uint)(param_1 + 0x198);
        tasklet_init(param_1 + 0x192,DAT_0001af9c,param_1);
        param_1 = param_1 + 0x194;
        HintPreloadData(param_1);
        do {
          ExclusiveAccess(param_1);
          bVar1 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar1);
        *param_1 = *param_1 + 1;
        return 0;
      }
    }
    video_unregister_device(puVar7);
  }
  return iVar3;
}



/* ===== rkisp_register_stream_vdevs @ 0001afa0 size=228 ===== */

undefined4 rkisp_register_stream_vdevs(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  
  memset((void *)(param_1 + 0xe90),0,0x5178);
  *(int *)(param_1 + 0xe90) = param_1;
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x5fe4) = 0;
  iVar1 = DAT_0001b084;
  uVar4 = *(uint *)(param_1 + 0x97a4);
  if (uVar4 < 0x31) {
    if (uVar4 == 0x20) {
      *(undefined4 *)(DAT_0001b084 + 8) = 0xcc0;
      uVar2 = 0x990;
    }
    else {
      if (uVar4 != 0x30) goto LAB_0001afdc;
      *(undefined4 *)(DAT_0001b084 + 8) = 0x780;
      uVar2 = 0x438;
    }
LAB_0001afda:
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
  }
  else if (uVar4 != 0x40) {
    if (uVar4 == 0x50) {
      *(undefined4 *)(DAT_0001b084 + 8) = 0x1000;
      uVar2 = 0xc00;
    }
    else {
      if (uVar4 != 0x60) {
        if (uVar4 == 0x70) {
          uVar3 = 0x6c0;
          uVar2 = 0xc00;
          *(undefined4 *)(DAT_0001b084 + 8) = 0xc00;
        }
        else {
          if (uVar4 != 0x80) goto LAB_0001b04e;
          uVar2 = 0x1080;
          uVar3 = 0xc40;
          *(undefined4 *)(DAT_0001b084 + 8) = 0x1080;
        }
        *(undefined4 *)(iVar1 + 0xc) = uVar3;
        *(undefined4 *)(iVar1 + 0xd8) = uVar2;
        *(undefined4 *)(iVar1 + 0xdc) = uVar3;
        uVar2 = rkisp_register_stream_v32(param_1);
        goto LAB_0001b04e;
      }
      bVar5 = *(char *)(*(int *)(param_1 + 0x94) + 0x7be) != '\0';
      if (bVar5) {
        uVar2 = 0x2000;
      }
      else {
        uVar2 = 0x1240;
      }
      *(undefined4 *)(DAT_0001b084 + 8) = uVar2;
      if (bVar5) {
        uVar2 = 0x1800;
      }
      else {
        uVar2 = 0xdb0;
      }
    }
    goto LAB_0001afda;
  }
LAB_0001afdc:
  uVar2 = 0xffffffea;
LAB_0001b04e:
  *(undefined4 *)(param_1 + 0x5ff8) = 0xffffffe0;
  *(int *)(param_1 + 0x5ffc) = param_1 + 0x5ffc;
  uVar3 = DAT_0001b088;
  *(int *)(param_1 + 0x6000) = param_1 + 0x5ffc;
  *(undefined4 *)(param_1 + 0x6004) = uVar3;
  return uVar2;
}



/* ===== rkisp_unregister_stream_vdevs @ 0001b08c size=36 ===== */

void rkisp_unregister_stream_vdevs(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x97a4);
  if ((((0x30 < uVar1) && ((uVar1 & 0xffffffef) != 0x40)) && (uVar1 != 0x60)) &&
     ((uVar1 == 0x70 || (uVar1 == 0x80)))) {
    rkisp_unregister_stream_v32();
    return;
  }
  return;
}



/* ===== rkisp_mi_isr @ 0001b0b0 size=36 ===== */

void rkisp_mi_isr(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x97a4);
  if ((((0x30 < uVar1) && ((uVar1 & 0xffffffef) != 0x40)) && (uVar1 != 0x60)) &&
     ((uVar1 == 0x70 || (uVar1 == 0x80)))) {
    rkisp_mi_v32_isr();
    return;
  }
  return;
}



/* ===== dmarx_stop_mi @ 0001b0d4 size=34 ===== */

void dmarx_stop_mi(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x14f8);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  DataSynchronizationBarrier(0xf);
  *puVar1 = *puVar1 & 0xfffff7ff;
  return;
}



/* ===== rkisp_unite_write @ 0001b0f6 size=46 ===== */

void rkisp_unite_write(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      char param_5)

{
  rkisp_write();
  if (param_5 != '\0') {
    rkisp_next_write(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



/* ===== dmarx_config_mi @ 0001b124 size=216 ===== */

undefined4 dmarx_config_mi(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (0 < *DAT_0001b1fc) {
    printk(DAT_0001b204,*(int *)(param_1 + 8) + 0xa8,DAT_0001b200,*(undefined4 *)(param_1 + 0x52c),
           *(undefined4 *)(param_1 + 0x530),*(undefined4 *)(param_1 + 0x6a8),param_3);
  }
  iVar1 = *(int *)(param_1 + 0x530);
  iVar7 = *(int *)(param_1 + 0x52c);
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 8);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(int *)(iVar4 + *(int *)(*(int *)(param_1 + 0x600) + 0x90)) = iVar1 * iVar7;
  uVar5 = *(undefined4 *)(param_1 + 0x52c);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar3 + 0x14cc) = uVar5;
  uVar5 = *(undefined4 *)(param_1 + 0x6a8);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar3 + 0x14d0) = uVar5;
  puVar6 = (uint *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x14f8);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  DataSynchronizationBarrier(0xf);
  *puVar6 = *puVar6 | 0x800;
  if (*(char *)(param_1 + 0x51b) != '\0') {
    uVar8 = *(uint *)(iVar3 + 0x1548);
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(uint *)(iVar3 + 0x1548) = uVar8 | 4;
  }
  uVar8 = *(uint *)(param_1 + 0x51c);
  uVar2 = *(uint *)(param_1 + 0x520);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  DataSynchronizationBarrier(0xf);
  *(uint *)(iVar3 + 0x1520) = uVar2 | uVar8 | *(uint *)(iVar3 + 0x1520) | 10;
  return 0;
}



/* ===== rkisp_queue_setup @ 0001b208 size=84 ===== */

undefined4 rkisp_queue_setup(int *param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[10];
  iVar3 = *(int *)(iVar2 + 8);
  *param_3 = (uint)*(byte *)(iVar2 + 0x51a);
  for (uVar1 = 0; uVar1 < *(byte *)(iVar2 + 0x51a); uVar1 = uVar1 + 1) {
    param_4[uVar1] = *(undefined4 *)(uVar1 * 0x14 + iVar2 + 0x540);
  }
  if (0 < *DAT_0001b25c) {
    printk(DAT_0001b260,iVar3 + 0xa8,iVar2 + 0x478,*(undefined4 *)(DAT_0001b264 + *param_1 * 4),
           *param_2,*param_4,param_3);
  }
  return 0;
}



/* ===== rkisp_set_fmt @ 0001b268 size=448 ===== */

undefined4 rkisp_set_fmt(int *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  local_30 = 1;
  local_2c[0] = 1;
  iVar8 = 0;
  uVar7 = param_2[2];
  do {
    if (((int *)param_1[0x180])[1] <= iVar8) {
LAB_0001b28e:
      printk(DAT_0001b428,param_1[2] + 0xa8,uVar7,uVar7 >> 8,uVar7 >> 0x10,uVar7 >> 0x18);
      return 0xffffffea;
    }
    iVar12 = *(int *)param_1[0x180];
    piVar11 = (int *)(iVar12 + iVar8 * 0x1c);
    if (uVar7 == *(uint *)(iVar12 + iVar8 * 0x1c)) {
      if (piVar11 != (int *)0x0) {
        uVar1 = *(undefined1 *)((int)piVar11 + 10);
        *(undefined1 *)(param_2 + 3) = 1;
        *(undefined1 *)(param_2 + 0x2d) = uVar1;
        *(undefined1 *)((int)param_2 + 0xd) = 0;
        *(undefined1 *)((int)param_2 + 0xe) = 0;
        *(undefined1 *)((int)param_2 + 0xf) = 0;
        if (*(char *)((int)param_2 + 0xb7) == '\0') {
          *(undefined1 *)((int)param_2 + 0xb7) = 1;
        }
        rkisp_fcc_xysubs(*piVar11,&local_30,local_2c);
        uVar4 = local_2c[0];
        uVar3 = local_30;
        uVar7 = (uint)*(byte *)((int)piVar11 + 9);
        if (uVar7 == 0) {
          uVar7 = (uint)*(byte *)((int)piVar11 + 10);
        }
        uVar13 = 0;
        iVar8 = 0;
        pbVar9 = (byte *)(piVar11 + 5);
        piVar2 = param_2;
        break;
      }
      goto LAB_0001b28e;
    }
    iVar8 = iVar8 + 1;
  } while( true );
LAB_0001b304:
  if (uVar13 == uVar7) {
    if (*(char *)((int)piVar11 + 10) == '\x01') {
      param_2[5] = iVar8;
    }
    if (param_3 == 0) {
      iVar8 = piVar11[1];
      iVar12 = piVar11[2];
      iVar10 = piVar11[3];
      param_1[0x144] = *piVar11;
      param_1[0x145] = iVar8;
      param_1[0x146] = iVar12;
      param_1[0x147] = iVar10;
      iVar8 = piVar11[5];
      iVar12 = piVar11[6];
      param_1[0x148] = piVar11[4];
      param_1[0x149] = iVar8;
      param_1[0x14a] = iVar12;
      memcpy(param_1 + 0x14b,param_2,0xc0);
      iVar8 = __aeabi_uidiv(param_2[6],*(byte *)(piVar11 + 5) + 7 >> 3);
      iVar12 = *DAT_0001b42c;
      param_1[0x1aa] = iVar8;
      if (0 < iVar12) {
        printk(DAT_0001b434,param_1[2] + 0xa8,DAT_0001b430,*param_1,*param_2,param_2[1],
               param_1[0x14b],param_1[0x14c]);
        return 0;
      }
    }
    return 0;
  }
  iVar12 = *param_2;
  iVar10 = param_2[1];
  if (uVar13 != 0) {
    iVar12 = __aeabi_uidiv(iVar12,uVar3);
    iVar10 = __aeabi_uidiv(iVar10,uVar4);
  }
  uVar5 = *(uint *)(param_1[2] + 0x97a4);
  if (uVar5 == 0x40) {
    if ((*param_1 == 3) && ((char)piVar11[2] == '\x02')) {
      iVar10 = iVar10 + 0x18;
    }
LAB_0001b368:
    if ((((char)piVar11[2] != '\x02') || (param_1[0x1a9] != 0)) || (*param_1 == 0))
    goto LAB_0001b3c0;
    uVar5 = (iVar12 * (uint)*pbVar9 >> 3) + 0xff & 0xffffff00;
  }
  else {
    if (0x3f < uVar5) goto LAB_0001b368;
LAB_0001b3c0:
    uVar5 = ((int)(*pbVar9 + 7) >> 3) * iVar12;
  }
  uVar6 = (uint)*(byte *)(param_1[2] + 0xe03a);
  if (1 < uVar6) {
    uVar5 = uVar6 * uVar5;
  }
  if ((uVar13 != 0) || ((uint)piVar2[6] < uVar5)) {
    piVar2[6] = uVar5;
  }
  uVar13 = uVar13 + 1;
  pbVar9 = pbVar9 + 1;
  iVar8 = iVar8 + iVar10 * piVar2[6];
  piVar2[5] = iVar10 * piVar2[6];
  piVar2 = piVar2 + 5;
  goto LAB_0001b304;
}



/* ===== rkisp_ioctl_default @ 0001b438 size=102 ===== */

undefined4 rkisp_ioctl_default(void)

{
  int iVar1;
  int *piVar2;
  int in_r3;
  int *in_stack_00000000;
  
  iVar1 = video_devdata();
  piVar2 = *(int **)(iVar1 + 0x130);
  if (in_r3 == DAT_0001b4a0) {
    if (2 < *piVar2 - 1U) {
      return 0xffffffea;
    }
    if (*in_stack_00000000 == 0) {
      piVar2[0x1a9] = 0;
      return 0;
    }
    if (*in_stack_00000000 == 2) {
      piVar2[0x1a9] = 2;
    }
    else {
      piVar2[0x1a9] = 6;
    }
  }
  else {
    if ((in_r3 != DAT_0001b4a0 + 0x3fffffff) || (2 < *piVar2 - 1U)) {
      return 0xffffffea;
    }
    if (piVar2[0x1a9] == 0) {
      *in_stack_00000000 = 0;
      return 0;
    }
    if (piVar2[0x1a9] == 2) {
      *in_stack_00000000 = 2;
    }
    else {
      *in_stack_00000000 = 1;
    }
  }
  return 0;
}



/* ===== rkisp_buf_queue @ 0001b4a4 size=366 ===== */

void rkisp_buf_queue(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  code *pcVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  void *__src;
  int iVar10;
  
  piVar2 = param_1 + 0xaa;
  piVar8 = *(int **)(*param_1 + 0x28);
  param_1[0xb3] = 0;
  piVar7 = param_1;
  memset(piVar2,0,0x20);
  for (iVar9 = 0; iVar9 < (int)(uint)*(byte *)((int)piVar8 + 0x51a); iVar9 = iVar9 + 1) {
    iVar6 = vb2_plane_vaddr(param_1,iVar9);
    if (((((iVar6 != 0) && (iVar9 == 0)) && (*(int *)(piVar8[2] + 0x97a4) == 0x40)) &&
        ((*(int *)(piVar8[2] + 0x9b1c) == 4 && ((char)piVar8[0x146] == '\x02')))) && (*piVar8 == 3))
    {
      iVar3 = piVar8[0x151];
      iVar10 = 0xc;
      param_2 = iVar3 * -2;
      __src = (void *)(iVar3 * (piVar8[0x14c] + -2) + iVar6);
      pvVar4 = (void *)(iVar3 * 0x18 + (int)__src);
      do {
        pvVar4 = memcpy(pvVar4,__src,iVar3 << 1);
        iVar10 = iVar10 + -1;
        pvVar4 = (void *)((int)pvVar4 + param_2);
      } while (iVar10 != 0);
      pcVar5 = *(code **)(*(int *)(*param_1 + 0x20) + 0x14);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(param_1[0x12]);
      }
    }
    if (*(char *)(*(int *)(piVar8[2] + 0x94) + 0x7b6) == '\0') {
      piVar1 = (int *)vb2_plane_cookie(param_1,iVar9);
      iVar6 = *piVar1;
    }
    else {
      piVar1 = (int *)vb2_plane_cookie(param_1,iVar9);
      iVar6 = *(int *)(*piVar1 + 0xc);
    }
    *piVar2 = iVar6;
    piVar2 = piVar2 + 1;
  }
  if (*(byte *)((int)piVar8 + 0x51a) == 1) {
    piVar2 = param_1 + 0xab;
    for (iVar9 = 0; iVar9 < (int)(*(byte *)((int)piVar8 + 0x519) - 1); iVar9 = iVar9 + 1) {
      if (iVar9 == 0) {
        iVar6 = piVar8[0x14c] * piVar8[0x151] + param_1[0xaa];
      }
      else {
        iVar6 = piVar8[iVar9 * 5 + 0x150] + piVar2[-1];
      }
      *piVar2 = iVar6;
      piVar2 = piVar2 + 1;
    }
  }
  if (1 < *DAT_0001b614) {
    printk(DAT_0001b618,piVar8[2] + 0xa8,*piVar8,param_1[0xaa],piVar7,param_2,param_3);
  }
  disableIRQinterrupts();
  if ((((char)piVar8[0x19a] == '\0') || ((int *)piVar8[0x181] != piVar8 + 0x181)) ||
     (piVar8[0x183] != 0)) {
    piVar7 = (int *)piVar8[0x182];
    piVar8[0x182] = (int)(param_1 + 0xa0);
    param_1[0xa0] = (int)(piVar8 + 0x181);
    param_1[0xa1] = (int)piVar7;
    *piVar7 = (int)(param_1 + 0xa0);
  }
  else {
    piVar8[0x183] = (int)param_1;
    (**(code **)(piVar8[0x17f] + 0x18))(piVar8);
  }
  return;
}



/* ===== dmarx_frame_end @ 0001b61c size=380 ===== */

undefined4 dmarx_frame_end(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  int *piVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  
  disableIRQinterrupts();
  iVar2 = param_1[0x183];
  if (iVar2 != 0) {
    iVar8 = *(int *)(iVar2 + 0x2cc);
    if (iVar8 == 0) {
      vb2_buffer_done(iVar2,5,param_3,param_4,param_1,param_2);
    }
    else {
      iVar2 = param_1[2];
      iVar9 = **(int **)(iVar2 + 0x318);
      if ((*(char *)(iVar8 + 0x27) != '\0') && (*param_1 == 3)) {
        if (*(int *)(iVar2 + 0x9b1c) == 5) {
          uVar3 = 9;
        }
        else if (*(int *)(iVar2 + 0x9b1c) == 6) {
          uVar3 = 0xd;
        }
        else {
          uVar3 = 0;
        }
        *(undefined4 *)(iVar2 + 0x9b1c) = uVar3;
        *(char *)(iVar2 + 0x982c) = (char)*(uint *)(iVar2 + 0x9b1c);
        rkisp_unite_write(iVar2,0x1c00,(*(uint *)(iVar2 + 0x9b1c) & 0xf) << 8,1,
                          *(undefined1 *)(*(int *)(iVar2 + 0x94) + 0x7be));
        cVar1 = *(char *)(*(int *)(iVar2 + 0x94) + 0x7be);
        rkisp_set_bits(iVar2,0x1c3c,0,0x80000000,1);
        if (cVar1 != '\0') {
          rkisp_next_set_bits(iVar2,0x1c3c,0,0x80000000,1);
        }
        cVar1 = *(char *)(*(int *)(iVar2 + 0x94) + 0x7be);
        rkisp_clear_bits(iVar2,0x5bc,0x20,1);
        if (cVar1 != '\0') {
          rkisp_next_clear_bits(iVar2,0x5bc,0x20,1);
        }
        _dev_info(*(undefined4 *)(iVar2 + 0xc),DAT_0001b798,*(undefined4 *)(iVar8 + 0x18),
                  *(undefined4 *)(iVar2 + 0x9b1c));
      }
      *(uint *)(iVar8 + 0x20) =
           (uint)((ulonglong)*(uint *)(iVar2 + 0xe80) * (ulonglong)DAT_0001b79c >> 0x26);
      if (((iVar9 != 0) && (iVar2 = *(int *)(*(int *)(iVar9 + 0x68) + 0xc), iVar2 != 0)) &&
         (pcVar5 = *(code **)(iVar2 + 0x44), pcVar5 != (code *)0x0)) {
        if ((*(int *)(DAT_0001b7a0 + 0xc) == 0) ||
           (pcVar7 = *(code **)(*(int *)(DAT_0001b7a0 + 0xc) + 0x44), pcVar7 == (code *)0x0)) {
          (*pcVar5)(iVar9,iVar8,0);
        }
        else {
          (*pcVar7)(iVar9,iVar8,0);
        }
      }
    }
    param_1[0x183] = 0;
  }
  if ((int *)param_1[0x181] != param_1 + 0x181) {
    piVar6 = (int *)param_1[0x181];
    param_1[0x183] = (int)(piVar6 + -0xa0);
    iVar2 = *piVar6;
    piVar4 = (int *)piVar6[1];
    *(int **)(iVar2 + 4) = piVar4;
    *piVar4 = iVar2;
    *piVar6 = 0x100;
    piVar6[1] = 0x122;
  }
  if (param_1[0x183] != 0) {
    (**(code **)(param_1[0x17f] + 0x18))(param_1);
  }
  return 0;
}



/* ===== dmarx_init @ 0001b7a4 size=474 ===== */

int dmarx_init(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = DAT_0001b980;
  iVar5 = param_2 * 0x6c0;
  iVar4 = param_1 + 0x7180;
  iVar6 = iVar4 + iVar5;
  iVar1 = iVar4 + iVar5 + 0x60c;
  *(int *)(iVar4 + iVar5 + 0x60c) = iVar1;
  *(int *)(iVar6 + 0x610) = iVar1;
  iVar3 = iVar5 + 8 + iVar4;
  __init_waitqueue_head(iVar5 + 0x67c + iVar4,uVar2,DAT_0001b984);
  *(int *)(iVar6 + 8) = param_2;
  *(int *)(iVar6 + 0x10) = param_1;
  *(undefined1 *)(iVar6 + 0x673) = 0;
  iVar1 = DAT_0001b988;
  if (param_2 == 2) {
    strlcpy(param_1 + 0x8380,DAT_0001b9ac,0x20);
    *(int *)(param_1 + 0x8504) = iVar1;
    iVar1 = iVar1 + 0xf8;
    iVar6 = 5000;
  }
  else {
    if (param_2 != 3) {
      strlcpy(param_1 + 0x7cc0,DAT_0001b98c,0x20);
      *(int *)(param_1 + 0x7e44) = iVar1;
      *(int *)(param_1 + 0x7e48) = iVar1 + 0x28;
      goto LAB_0001b814;
    }
    strlcpy(param_1 + 0x8a40,DAT_0001b9b0,0x20);
    *(int *)(param_1 + 0x8bc4) = iVar1;
    iVar1 = iVar1 + 0x1c8;
    iVar6 = 0x1a48;
  }
  *(int *)(iVar4 + iVar6) = iVar1;
LAB_0001b814:
  iVar8 = param_2 * 0x6c0 + iVar4;
  iVar6 = iVar5 + 0x644 + iVar4;
  iVar5 = iVar5 + 0x1e0 + iVar4;
  iVar7 = *(int *)(iVar8 + 0x10);
  __mutex_init(iVar6,DAT_0001b990,DAT_0001b984);
  uVar2 = DAT_0001b994;
  *(int *)(iVar3 + 0x4e8) = iVar6;
  *(int *)(iVar3 + 0x308) = iVar3;
  *(undefined4 *)(iVar3 + 0x4c8) = uVar2;
  iVar1 = DAT_0001b998;
  *(undefined4 *)(iVar3 + 0x4a0) = 0xffffffff;
  *(int *)(iVar3 + 0x38) = iVar3;
  *(int *)(iVar3 + 700) = iVar1;
  *(int *)(iVar3 + 0x4cc) = iVar1 + 0x24;
  uVar2 = DAT_0001b99c;
  *(int *)(iVar3 + 0x464) = iVar7 + 0x98;
  *(undefined4 *)(iVar3 + 0x2c0) = uVar2;
  *(undefined4 *)(iVar3 + 0x49c) = 1;
  *(undefined4 *)(iVar3 + 0x50c) = 2;
  *(undefined4 *)(iVar3 + 0x10) = 10;
  *(undefined4 *)(iVar3 + 0x14) = 0x13;
  *(undefined4 *)(iVar3 + 0x2c) = DAT_0001b9a0;
  uVar2 = *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x94) + 0x778);
  *(int *)(iVar3 + 0x24) = iVar6;
  *(undefined4 *)(iVar3 + 0x30) = uVar2;
  *(undefined4 *)(iVar3 + 0x40) = 0x2d0;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(undefined4 *)(iVar3 + 0x44) = 0x4000;
  *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x94) + 8);
  *(ushort *)(iVar3 + 0x20) = *(ushort *)(iVar3 + 0x20) | 0x201;
  *(undefined4 *)(iVar3 + 0x48) = 4;
  if (*(char *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x94) + 0x7b5) != '\0') {
    *(undefined4 *)(iVar3 + 0x1c) = 0x40;
  }
  vb2_queue_init(iVar3 + 0x10);
  iVar4 = param_2 * 0x6c0 + iVar4;
  *(int *)(iVar3 + 0x470) = iVar3 + 0x10;
  iVar1 = __video_register_device(iVar5,0,0xffffffff,1,**(undefined4 **)(iVar4 + 0x2c4));
  if (iVar1 < 0) {
    printk(DAT_0001b9a8,iVar7 + 0xa8,DAT_0001b9a4,iVar1);
  }
  else {
    iVar1 = media_entity_pads_init(iVar3 + 0x1d8,1,iVar3 + 0x4f0);
    if (iVar1 < 0) {
      video_unregister_device(iVar5);
    }
    else {
      iVar1 = media_create_pad_link(iVar5,0,param_1 + 0xc30,0,*(undefined1 *)(iVar4 + 0x673));
    }
  }
  return iVar1;
}



/* ===== update_rawrd @ 0001b9b4 size=376 ===== */

void update_rawrd(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_2c;
  uint uStack_28;
  uint local_24;
  
  iVar7 = param_1[0x183];
  iVar5 = param_1[2];
  if (iVar7 == 0) {
    if (*(int *)(iVar5 + 0x8c88) == 0) {
      if (*param_1 == 2) {
        iVar7 = 0x183c;
        uVar3 = (uint)*(byte *)(iVar5 + 0x9830);
      }
      else if (*param_1 == 3) {
        iVar7 = 0x184c;
        uVar3 = (uint)*(byte *)(iVar5 + 0x9831);
      }
      else {
        iVar7 = 0x182c;
        uVar3 = (uint)*(byte *)(iVar5 + 0x982f);
      }
      iVar8 = iVar5 + uVar3 * 4;
      iVar2 = *(int *)(iVar5 + 8);
      if (*(int *)(iVar8 + 0x986c) != 0) {
        hdr_qbuf(iVar5 + uVar3 * 8 + 0x983c);
        *(undefined4 *)(iVar8 + 0x986c) = 0;
      }
      iVar5 = hdr_dqbuf(iVar5 + uVar3 * 8 + 0x9854);
      if (iVar5 == 0) {
        uVar6 = *(undefined4 *)(iVar2 + iVar7);
        DataSynchronizationBarrier(0xf);
      }
      else {
        uVar6 = *(undefined4 *)(iVar5 + 0xc);
        *(int *)(iVar8 + 0x986c) = iVar5;
      }
      iVar5 = *(int *)(param_1[2] + 8);
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar5 + *(int *)(param_1[0x180] + 0x9c)) = uVar6;
    }
  }
  else {
    if (*(byte *)(iVar5 + 0xe03a) < 2) {
      iVar2 = 0;
    }
    else {
      iVar2 = __aeabi_uidiv(param_1[0x151]);
      iVar2 = (uint)*(byte *)(iVar5 + 0xe03b) * iVar2;
    }
    iVar2 = *(int *)(iVar7 + 0x2a8) + iVar2;
    rkisp_write(iVar5,*(undefined4 *)(param_1[0x180] + 0x9c),iVar2,0);
    if (*(char *)(*(int *)(iVar5 + 0x94) + 0x7be) != '\0') {
      iVar7 = ((uint)param_1[0x14b] >> 1) - 0x80;
      if (param_1[0x1a9] == 0) {
        uVar3 = (uint)*(byte *)(param_1 + 0x149) * iVar7 >> 3;
      }
      else {
        uVar3 = ((int)(*(byte *)(param_1 + 0x149) + 7) >> 3) * iVar7;
      }
      rkisp_next_write(iVar5,*(undefined4 *)(param_1[0x180] + 0x9c),uVar3 + iVar2,0);
    }
    *(undefined1 *)((int)param_1 + 0x66a) = 0;
    if ((*param_1 == 3) && (uStack_28 = (uint)*(byte *)(param_1 + 0x146), uStack_28 == 0)) {
      iVar7 = param_1[0x183];
      local_3c = *(undefined4 *)(iVar7 + 0x18);
      uStack_38 = *(undefined4 *)(iVar7 + 0x1c);
      local_2c = *(int *)(iVar7 + 0x170);
      if (local_2c == 0) {
        piVar4 = (int *)(iVar5 + 0xe60);
        HintPreloadData(piVar4);
        do {
          ExclusiveAccess(piVar4);
          local_2c = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = local_2c + 1;
      }
      local_34 = local_3c;
      uStack_30 = uStack_38;
      local_24 = uStack_28;
      rkisp_rdbk_trigger_event(iVar5,0,&local_3c);
    }
  }
  return;
}



/* ===== destroy_buf_queue @ 0001bb2c size=114 ===== */

void destroy_buf_queue(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  disableIRQinterrupts();
  iVar2 = *(int *)(param_1 + 0x60c);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x2cc) == 0)) {
    piVar1 = *(int **)(param_1 + 0x608);
    *(int *)(param_1 + 0x608) = iVar2 + 0x280;
    *(int *)(iVar2 + 0x280) = param_1 + 0x604;
    *(int **)(iVar2 + 0x284) = piVar1;
    *piVar1 = iVar2 + 0x280;
  }
  *(undefined4 *)(param_1 + 0x60c) = 0;
  while (param_1 + 0x604 != *(int *)(param_1 + 0x604)) {
    piVar1 = *(int **)(param_1 + 0x604);
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *(int **)(iVar2 + 4) = piVar3;
    *piVar3 = iVar2;
    *piVar1 = 0x100;
    piVar1[1] = 0x122;
    if (piVar1[0x13] == 0) {
      vb2_buffer_done(piVar1 + -0xa0,param_2,iVar2,0,param_4);
    }
  }
  return;
}



/* ===== dmarx_stop_streaming @ 0001bb9e size=222 ===== */

void dmarx_stop_streaming(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_2c [24];
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (0 < *DAT_0001bc7c) {
    printk(DAT_0001bc84,piVar1[2] + 0xa8,DAT_0001bc80,piVar1 + 0x11e,*piVar1);
  }
  if ((char)piVar1[0x19a] != '\0') {
    iVar3 = piVar1[2];
    *(undefined1 *)((int)piVar1 + 0x669) = 1;
    if ((*(int *)(iVar3 + 0x99e0) << 0x16 < 0) && (*(char *)((int)piVar1 + 0x66a) == '\0')) {
      if (*(char *)(*(int *)(iVar3 + 0x94) + 0x7bd) == '\0') {
        _cond_resched();
        if ((char)piVar1[0x19a] != '\0') {
          init_wait_entry(auStack_2c,0);
          iVar2 = 0x5a;
          while( true ) {
            prepare_to_wait_event(piVar1 + 0x19d,auStack_2c,2);
            if ((char)piVar1[0x19a] == '\0') break;
            if (iVar2 == 0) goto LAB_0001bc18;
            iVar2 = schedule_timeout(iVar2);
          }
          if (iVar2 == 0) {
            iVar2 = 1;
          }
LAB_0001bc18:
          finish_wait(piVar1 + 0x19d,auStack_2c);
          if (iVar2 == 0) {
            printk(DAT_0001bc88,iVar3 + 0xa8,*piVar1,0);
          }
        }
      }
    }
    if (*(code **)(piVar1[0x17f] + 4) != (code *)0x0) {
      (**(code **)(piVar1[0x17f] + 4))(piVar1);
    }
    *(undefined2 *)(piVar1 + 0x19a) = 0;
    *(undefined1 *)((int)piVar1 + 0x66a) = 0;
    destroy_buf_queue(piVar1,6);
    if ((*piVar1 == 3) && (iVar3 = piVar1[2], 0x3f < *(uint *)(iVar3 + 0x97a4))) {
      *(undefined4 *)(iVar3 + 0x9afc) = 0;
      *(undefined4 *)(iVar3 + 0x9af8) = 0;
    }
  }
  return;
}



/* ===== dmarx_start_streaming @ 0001bc8c size=138 ===== */

int dmarx_start_streaming(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x28);
  iVar3 = piVar1[2];
  if (0 < *DAT_0001bd18) {
    param_1 = *piVar1;
    printk(DAT_0001bd20,iVar3 + 0xa8,DAT_0001bd1c,piVar1 + 0x11e,param_1,param_2,param_3);
  }
  if ((char)piVar1[0x19a] != '\0') {
    return -0x10;
  }
  if (*(char *)((int)piVar1 + 0x66b) == '\0') {
    iVar2 = -1;
    printk(DAT_0001bd24,iVar3 + 0xa8,piVar1 + 0x11e,0,param_1,param_2,param_3);
  }
  else {
    iVar2 = (**(code **)piVar1[0x17f])(piVar1);
    if (iVar2 == 0) {
      piVar1[0x183] = 0;
      *(undefined1 *)(piVar1 + 0x19a) = 1;
      dmarx_frame_end(piVar1);
      return 0;
    }
    if (-1 < iVar2) {
      return 0;
    }
    printk(DAT_0001bd28,iVar3 + 0xa8,piVar1 + 0x11e);
  }
  destroy_buf_queue(piVar1,3);
  return iVar2;
}



/* ===== rkisp_try_fmt_vid_out_mplane @ 0001bd2c size=24 ===== */

void rkisp_try_fmt_vid_out_mplane(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = video_devdata();
  rkisp_set_fmt(*(undefined4 *)(iVar1 + 0x130),param_3 + 4,1);
  return;
}



/* ===== rkisp_g_fmt_vid_out_mplane @ 0001bd44 size=28 ===== */

undefined4 rkisp_g_fmt_vid_out_mplane(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = video_devdata();
  memcpy((void *)(param_3 + 4),(void *)(*(int *)(iVar1 + 0x130) + 0x52c),0xc0);
  return 0;
}



/* ===== rkisp_enum_fmt_vid_out_mplane @ 0001bd60 size=44 ===== */

undefined4 rkisp_enum_fmt_vid_out_mplane(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = video_devdata();
  piVar3 = *(int **)(*(int *)(iVar1 + 0x130) + 0x600);
  if (*param_3 < (uint)piVar3[1]) {
    uVar2 = 0;
    param_3[0xb] = *(uint *)(*piVar3 + *param_3 * 0x1c);
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== rkisp_s_fmt_vid_out_mplane @ 0001bd8c size=48 ===== */

undefined4 rkisp_s_fmt_vid_out_mplane(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = video_devdata();
  puVar2 = *(undefined4 **)(iVar1 + 0x130);
  if (puVar2[0x61] == 0) {
    uVar3 = rkisp_set_fmt(puVar2,param_3 + 4);
    return uVar3;
  }
  printk(DAT_0001bdc0,puVar2[2] + 0xa8,DAT_0001bdbc,*puVar2);
  return 0xfffffff0;
}



/* ===== rkisp_querycap @ 0001bdc4 size=92 ===== */

undefined4 rkisp_querycap(undefined4 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = param_3;
  iVar1 = video_devdata();
  iVar4 = *(int *)(iVar1 + 0x130);
  piVar3 = *(int **)(*(int *)(iVar4 + 8) + 0xc);
  iVar1 = video_devdata(param_1);
  strlcpy(param_3 + 0x10,iVar1 + 0x2a0,0x20);
  uVar2 = *(uint *)(*(int *)(iVar4 + 8) + 0x97a4) >> 4;
  snprintf(param_3,0x10,DAT_0001be20,*(undefined4 *)piVar3[0xe],uVar2,param_2,pcVar5);
  iVar1 = piVar3[0xb];
  if (iVar1 == 0) {
    iVar1 = *piVar3;
  }
  snprintf(param_3 + 0x30,0x20,DAT_0001be24,iVar1,uVar2,param_2,pcVar5);
  *(undefined4 *)(param_3 + 0x50) = DAT_0001be28;
  return 0;
}



/* ===== update_dmarx @ 0001be2c size=130 ===== */

void update_dmarx(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x60c) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x60c) + 0x2a8);
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 8);
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x600) + 0x9c) + iVar1) = uVar2;
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x60c) + 0x2ac);
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 8);
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar3 + *(int *)(*(int *)(param_1 + 0x600) + 0xa0)) = uVar2;
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x60c) + 0x2b0);
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 8);
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar3 + *(int *)(*(int *)(param_1 + 0x600) + 0xa4)) = uVar2;
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar1 + 0x1524) = 1;
    *(undefined1 *)(param_1 + 0x66a) = 0;
  }
  return;
}



/* ===== rkisp_dmarx_isr @ 0001beae size=86 ===== */

void rkisp_dmarx_isr(int param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_1 << 0x14) {
    return;
  }
  iVar1 = *(int *)(param_2 + 8);
  *(undefined1 *)(param_2 + 0x77f2) = 1;
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar1 + 0x1504) = 0x800;
  if (*(char *)(param_2 + 0x77f1) != '\0') {
    *(undefined2 *)(param_2 + 0x77f0) = 0;
    __wake_up(param_2 + 0x77fc,3,1);
    return;
  }
  dmarx_frame_end(param_2 + 0x7188);
  return;
}



/* ===== rkisp2_rawrd_isr @ 0001bf04 size=88 ===== */

void rkisp2_rawrd_isr(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + 0x7ebc;
  do {
    if ((*(int *)(iVar1 + -0x74) != 0) &&
       ((param_1 & *(uint *)(*(int *)(iVar1 + -0x74) + 0x18)) != 0)) {
      *(undefined1 *)(iVar1 + -10) = 1;
      if (*(char *)(iVar1 + -0xb) == '\0') {
        dmarx_frame_end(iVar1 + -0x674);
      }
      else {
        *(undefined1 *)(iVar1 + -0xb) = 0;
        *(undefined1 *)(iVar1 + -0xc) = 0;
        __wake_up(iVar1,3,1,0);
      }
    }
    iVar1 = iVar1 + 0x6c0;
  } while (iVar1 != param_2 + 0x92fc);
  return;
}



/* ===== rkisp_dmarx_set_fmt @ 0001bf5c size=26 ===== */

void rkisp_dmarx_set_fmt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  rkisp_set_fmt(param_1,&local_c,0);
  return;
}



/* ===== rkisp_rawrd_set_pic_size @ 0001bf76 size=94 ===== */

void rkisp_rawrd_set_pic_size(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x94) + 0x7be);
  if (*(char *)(param_1 + 0xe20) == '\0') {
    iVar4 = 2;
  }
  else {
    iVar4 = 1;
  }
  uVar2 = param_2;
  if (cVar1 != '\0') {
    uVar2 = (param_2 >> 1) + 0x80;
  }
  iVar3 = *(int *)(param_1 + 0xe38) + *(int *)(param_1 + 0xe40);
  if ((((*(int *)(param_1 + 0x97a4) == 0x40) && (*(char *)(param_1 + 0xe20) == '\x02')) &&
      (*(char *)(param_1 + 0xe48) != '\x02')) && (*(int *)(param_1 + 0x9b1c) == 4)) {
    iVar3 = iVar3 + 0x18;
  }
  rkisp_unite_write(param_1,0x1c88,iVar4 * uVar2 | iVar3 << 0x10,0,cVar1,param_2);
  return;
}



/* ===== rawrd_config_mi @ 0001bfd4 size=414 ===== */

undefined4 rawrd_config_mi(undefined4 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = param_1[2];
  uVar1 = *(undefined1 *)(*(int *)(iVar7 + 0x94) + 0x7be);
  uVar2 = rkisp_read(iVar7,0x1c18,1);
  uVar4 = param_1[0x144];
  uVar2 = uVar2 & 0xffffff00;
  if (uVar4 == DAT_0001c174) {
LAB_0001c06e:
    uVar2 = uVar2 | 0x2a;
    goto LAB_0001c072;
  }
  if (uVar4 < DAT_0001c174) {
    if (uVar4 != DAT_0001c178) {
      if (uVar4 < DAT_0001c178) {
        uVar3 = DAT_0001c17c;
        if (uVar4 != DAT_0001c178 + 0xeffeef12) {
LAB_0001c018:
          if (uVar4 != uVar3) goto LAB_0001c168;
        }
      }
      else if (uVar4 != DAT_0001c180) {
        if (uVar4 == DAT_0001c184) goto LAB_0001c06e;
        uVar3 = DAT_0001c184 + 0xfef90600;
        goto LAB_0001c018;
      }
    }
    uVar2 = uVar2 | 0x2b;
  }
  else {
    if (uVar4 == DAT_0001c188) {
LAB_0001c162:
      uVar2 = uVar2 | 0x1e;
      goto LAB_0001c072;
    }
    if (uVar4 < DAT_0001c188) {
      if (uVar4 == DAT_0001c188 + 0xf0f8ecee) goto LAB_0001c06e;
      if (uVar4 == DAT_0001c18c) goto LAB_0001c162;
      uVar3 = DAT_0001c18c + 0xf1e8fbee;
    }
    else {
      if ((uVar4 == DAT_0001c19c) || (uVar4 == DAT_0001c19c + 0xffff)) goto LAB_0001c162;
      uVar3 = DAT_0001c19c - 0x10070f;
    }
    if (uVar4 == uVar3) goto LAB_0001c06e;
LAB_0001c168:
    uVar2 = uVar2 | 0x2c;
  }
LAB_0001c072:
  rkisp_unite_write(iVar7,0x1c80,param_1[0x1a9] << 2,0,uVar1);
  rkisp_unite_write(iVar7,0x1c18,uVar2,0,uVar1);
  rkisp_rawrd_set_pic_size(iVar7,param_1[0x14b],param_1[0x14c]);
  uVar4 = *(uint *)(param_1[0x180] + 0xb8);
  if (uVar4 == 0x1874) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    if ((uVar4 & 0xffffffef) != 0x1884) {
      uVar6 = 1;
    }
  }
  rkisp_write(param_1[2],uVar4,param_1[0x151],uVar6);
  iVar5 = *(int *)(param_1[2] + 0x97a4);
  if ((iVar5 == 0x50) || (iVar5 == 0x60)) {
    rkisp_set_bits(param_1[2],0x1808,0,0x40000000,0);
  }
  if (*(char *)(*(int *)(param_1[2] + 0x94) + 0x7be) != '\0') {
    rkisp_next_write(param_1[2],*(undefined4 *)(param_1[0x180] + 0xb8),param_1[0x151],uVar6);
    rkisp_next_set_bits(param_1[2],0x1808,0,0x40000000,0);
  }
  if (0 < *DAT_0001c190) {
    printk(DAT_0001c198,iVar7 + 0xa8,DAT_0001c194,*param_1,uVar2,param_1[0x14b],param_1[0x14c]);
  }
  return 0;
}



/* ===== rkisp_dmarx_get_frame @ 0001c1a0 size=118 ===== */

void rkisp_dmarx_get_frame
               (int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,char param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x9b1c) - 4U < 3) || (param_2 == (int *)0x0)) {
    disableIRQinterrupts();
    if (param_5 == '\0') {
      iVar5 = *(int *)(param_1 + 0x8cb8);
      uVar1 = *(undefined4 *)(param_1 + 0x8ca8);
      uVar2 = *(undefined4 *)(param_1 + 0x8cac);
      uVar3 = *(undefined4 *)(param_1 + 0x8cb0);
      uVar4 = *(undefined4 *)(param_1 + 0x8cb4);
    }
    else {
      iVar5 = *(int *)(param_1 + 36000);
      uVar1 = *(undefined4 *)(param_1 + 0x8c90);
      uVar2 = *(undefined4 *)(param_1 + 0x8c94);
      uVar3 = *(undefined4 *)(param_1 + 0x8c98);
      uVar4 = *(undefined4 *)(param_1 + 0x8c9c);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar5;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = uVar1;
      param_3[1] = uVar2;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar3;
      param_4[1] = uVar4;
    }
  }
  else {
    *param_2 = *(int *)(param_1 + 0xe60) + -1;
  }
  return;
}



/* ===== rkisp_register_dmarx_vdev @ 0001c216 size=112 ===== */

int rkisp_register_dmarx_vdev(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = memset((void *)(param_1 + 0x7180),0,0x1b40);
  *piVar1 = param_1;
  if (0x3f < *(uint *)(param_1 + 0x97a4)) {
    iVar2 = dmarx_init(param_1,1);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar2 = dmarx_init(param_1,3);
    if (iVar2 < 0) goto LAB_0001c274;
  }
  if (((*(uint *)(param_1 + 0x97a4) & 0xffffffdf) != 0x40) ||
     (iVar2 = dmarx_init(param_1,2), -1 < iVar2)) {
    return 0;
  }
  video_unregister_device(param_1 + 0x87a0);
LAB_0001c274:
  video_unregister_device(param_1 + 0x7a20);
  return iVar2;
}



/* ===== rkisp_unregister_dmarx_vdev @ 0001c286 size=64 ===== */

void rkisp_unregister_dmarx_vdev(int param_1)

{
  if (0x3f < *(uint *)(param_1 + 0x97a4)) {
    video_unregister_device(param_1 + 0x7a20);
    video_unregister_device(param_1 + 0x87a0);
  }
  if ((*(uint *)(param_1 + 0x97a4) & 0xffffffdf) == 0x40) {
    video_unregister_device(param_1 + 0x80e0);
    return;
  }
  return;
}



/* ===== rkisp_csi_s_power @ 0001c2c8 size=4 ===== */

undefined4 rkisp_csi_s_power(void)

{
  return 0;
}



/* ===== rkisp_csi_link_setup @ 0001c2cc size=140 ===== */

undefined4 rkisp_csi_link_setup(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffed;
  }
  else {
    if (*(int *)(param_2 + 0x1c) << 0x1e < 0) {
      uVar2 = (uint)*(ushort *)(param_2 + 0x14);
      piVar4 = *(int **)(param_1 + 0x98);
      uVar5 = uVar2 - 1 & 0xff;
      if ((uVar2 - 2 & 0xff) < 4) {
        iVar6 = uVar5 * 0x6c0 + 0x1558 + *piVar4;
      }
      else {
        iVar6 = 0;
      }
      iVar3 = (int)piVar4 + (short)uVar5 * 2;
      if ((param_4 & 1) == 0) {
        *(undefined1 *)(iVar3 + 0x189) = 0;
        *(undefined1 *)(iVar3 + 0x188) = 0;
      }
      else {
        if (*(char *)(iVar3 + 0x189) != '\0') {
          printk(DAT_0001c358,param_1 + 0x74,uVar2,iVar3,param_4);
          return 0xfffffff0;
        }
        *(undefined1 *)(iVar3 + 0x189) = 1;
        *(char *)(iVar3 + 0x188) = (char)(1 << uVar5);
      }
      if (iVar6 != 0) {
        *(bool *)(iVar6 + 0x66b) = *(char *)((int)piVar4 + uVar5 * 2 + 0x189) != '\0';
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== get_remote_mipi_sensor @ 0001c35c size=94 ===== */

void get_remote_mipi_sensor(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a4 [140];
  
  iVar2 = *(int *)(param_1 + 0xc30);
  iVar1 = iVar2 + 0xd8;
  mutex_lock(iVar1);
  iVar2 = media_graph_walk_init(auStack_a4,iVar2);
  if (iVar2 == 0) {
    media_graph_walk_start(auStack_a4,param_1 + 0xc30);
    do {
      iVar2 = media_graph_walk_next(auStack_a4);
      if (iVar2 == 0) break;
    } while (*(int *)(iVar2 + 0x18) != param_3);
    mutex_unlock(iVar1);
    media_graph_walk_cleanup(auStack_a4);
    *param_2 = iVar2;
  }
  else {
    mutex_unlock(iVar1);
    *param_2 = 0;
  }
  return;
}



/* ===== rkisp_csi_s_stream @ 0001c3ba size=54 ===== */

undefined4 rkisp_csi_s_stream(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x98);
  piVar1[0x66] = 0;
  piVar1[0x67] = 0;
  *(undefined2 *)((int)piVar1 + 0x1a5) = 0;
  *(undefined1 *)((int)piVar1 + 0x1a7) = 0;
  if (*(byte *)(*piVar1 + 0x982c) - 4 < 3) {
    rkisp_write(*piVar1,0x1cf0,param_2 != 0);
  }
  return 0;
}



/* ===== get_remote_subdev @ 0001c3f0 size=22 ===== */

undefined4 get_remote_subdev(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x2c) == 0) || (iVar2 = media_entity_remote_pad(), iVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 0x10);
  }
  return uVar1;
}



/* ===== rkisp_csi_g_mbus_config @ 0001c406 size=72 ===== */

undefined4 rkisp_csi_g_mbus_config(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar4;
  
  if ((param_1 == 0) || (iVar1 = get_remote_subdev(), iVar1 == 0)) {
    uVar2 = 0xffffffed;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
    uVar2 = DAT_0001c454;
    if ((iVar3 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x3c), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      if ((*(int *)(DAT_0001c450 + 0x1c) != 0) &&
         (pcVar4 = *(code **)(*(int *)(DAT_0001c450 + 0x1c) + 0x3c), pcVar4 != (code *)0x0)) {
        UNRECOVERED_JUMPTABLE = pcVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0001c440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(iVar1,param_2,param_3);
      return uVar2;
    }
  }
  return uVar2;
}



/* ===== rkisp_csi_get_set_fmt @ 0001c458 size=74 ===== */

undefined4 rkisp_csi_get_set_fmt(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar4;
  
  if (*(int *)(param_3 + 4) != 0) {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + -1;
  }
  if ((param_1 == 0) || (iVar1 = get_remote_subdev(), iVar1 == 0)) {
    uVar2 = 0xffffffed;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x68) + 0x1c);
    uVar2 = DAT_0001c4a8;
    if ((iVar3 != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0x10), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      if ((*(int *)(DAT_0001c4a4 + 0x1c) != 0) &&
         (pcVar4 = *(code **)(*(int *)(DAT_0001c4a4 + 0x1c) + 0x10), pcVar4 != (code *)0x0)) {
        UNRECOVERED_JUMPTABLE = pcVar4;
      }
                    /* WARNING: Could not recover jumptable at 0x0001c494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)(iVar1,0,param_3);
      return uVar2;
    }
  }
  return uVar2;
}



/* ===== rkisp_unite_set_bits.constprop.1 @ 0001c4ac size=50 ===== */

void rkisp_unite_set_bits_constprop_1
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  rkisp_set_bits(param_1,param_2,0,param_3,1,param_2);
  if (param_4 != 0) {
    rkisp_next_set_bits(param_1,param_2,0,param_3,1);
  }
  return;
}



/* ===== rkisp_csi_get_hdr_cfg @ 0001c4de size=134 ===== */

undefined4 rkisp_csi_get_hdr_cfg(int param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  code *pcVar4;
  code *pcVar5;
  int local_14;
  undefined4 uStack_10;
  
  local_14 = 0;
  uVar3 = *(uint *)(param_1 + 0x99ec);
  uVar1 = DAT_0001c564;
  if (-1 < (int)(uVar3 << 0x1b)) {
    if ((uVar3 & 0x100) == 0) {
      uVar3 = uVar3 & 7;
      uVar2 = (undefined1)uVar3;
      if (uVar3 != 5) {
        if (uVar3 == 7) {
          uVar2 = 6;
        }
        else {
          uVar2 = 4;
        }
      }
      *param_2 = uVar2;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      return 0;
    }
    uVar1 = 0x4001;
  }
  uStack_10 = param_3;
  get_remote_mipi_sensor(param_1,&local_14,uVar1,uVar3,param_1);
  if (local_14 == 0) {
    printk(DAT_0001c56c,param_1 + 0xa8,DAT_0001c568);
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = DAT_0001c578;
    if ((**(int **)(local_14 + 0x68) != 0) &&
       (pcVar4 = *(code **)(**(int **)(local_14 + 0x68) + 0x18), pcVar4 != (code *)0x0)) {
      if ((*DAT_0001c570 == 0) || (pcVar5 = *(code **)(*DAT_0001c570 + 0x18), pcVar5 == (code *)0x0)
         ) {
        uVar1 = (*pcVar4)(local_14,DAT_0001c574,param_2);
      }
      else {
        uVar1 = (*pcVar5)(local_14,DAT_0001c574,param_2);
      }
    }
  }
  return uVar1;
}



/* ===== rkisp_expander_config.part.0 @ 0001c57c size=400 ===== */

void rkisp_expander_config_part_0(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int local_b4 [34];
  int local_2c;
  
  piVar3 = DAT_0001c70c;
  local_2c = *DAT_0001c70c;
  if (param_2 == (int *)0x0) {
    iVar4 = rkisp_csi_get_hdr_cfg(param_1,local_b4);
    if (iVar4 != 0) {
      uVar5 = 0xffffffea;
      goto LAB_0001c6f8;
    }
    param_2 = local_b4;
  }
  if (*param_2 == 7) {
    bVar1 = *(byte *)(param_2 + 5);
    iVar4 = 0;
    if (bVar1 < 0x15) {
      uVar8 = 0;
    }
    else {
      uVar8 = bVar1 - 0x14;
    }
    *(byte *)(param_1 + 0x982e) = bVar1 - (char)uVar8;
    iVar9 = param_2[4];
    for (; iVar9 != iVar4; iVar4 = iVar4 + 1) {
      rkisp_write(param_1,iVar4 * 4 + 0x3248,param_2[iVar4 + 0x12],0);
    }
    uVar6 = *(ushort *)((int)param_2 + 0x26);
    if (0xffe < uVar6) {
      uVar6 = 0xfff;
    }
    rkisp_write(param_1,0x3204,(uint)uVar6 << 0x10,0);
    bVar1 = *(byte *)((int)param_2 + 0x16);
    if (uVar8 != 0) {
      bVar1 = bVar1 >> (uVar8 & 0xff);
    }
    rkisp_write(param_1,0x3224,(uint)bVar1 << 0x10,0);
    uVar10 = 1;
    piVar11 = param_2;
    while( true ) {
      iVar9 = uVar10 * 2;
      uVar7 = (uint)*(ushort *)((int)param_2 + iVar9 + 0x26);
      if (0xffe < uVar7) {
        uVar7 = 0xfff;
      }
      if (iVar4 - 1U <= uVar10) break;
      uVar6 = *(ushort *)((int)param_2 + iVar9 + 0x28);
      if (0xffe < uVar6) {
        uVar6 = 0xfff;
      }
      rkisp_write(param_1,iVar9 + 0x3206,uVar7 | (uint)uVar6 << 0x10,0);
      bVar1 = *(byte *)((int)piVar11 + 0x17);
      bVar2 = *(byte *)(piVar11 + 6);
      if (uVar8 != 0) {
        bVar1 = bVar1 >> (uVar8 & 0xff);
        bVar2 = bVar2 >> (uVar8 & 0xff);
      }
      uVar10 = uVar10 + 2;
      rkisp_write(param_1,iVar9 + 0x3226,(uint)bVar1 | (uint)bVar2 << 0x10,0);
      piVar11 = (int *)((int)piVar11 + 2);
    }
    uVar10 = iVar4 - 1U | 1;
    uVar8 = (uint)(*(byte *)((int)param_2 + uVar10 + 0x16) >> (uVar8 & 0xff));
    for (; uVar10 < 0xf; uVar10 = uVar10 + 2) {
      rkisp_write(param_1,uVar10 * 2 + 0x3206,uVar7 | uVar7 << 0x10,0);
      rkisp_write(param_1,uVar10 * 2 + 0x3226,uVar8 | uVar8 << 0x10,0);
    }
    rkisp_write(param_1,0x3244,uVar8,0);
    if (param_2[4] == 0xc) {
      iVar4 = 1;
    }
    else if (param_2[4] == 0x10) {
      iVar4 = 2;
    }
    else {
      iVar4 = 0;
    }
    rkisp_write(param_1,0x3200,(uint)(byte)(*(char *)((int)param_2 + 0x15) << 4) | iVar4 << 8 | 1,0)
    ;
  }
  uVar5 = 0;
LAB_0001c6f8:
  if (local_2c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}



/* ===== rkisp_expander_config @ 0001c710 size=34 ===== */

undefined4 rkisp_expander_config(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x97a4) == 0x70) {
    if (param_3 != 0) {
      uVar1 = rkisp_expander_config_part_0();
      return uVar1;
    }
    rkisp_write(param_1,0x3200);
  }
  return 0;
}



/* ===== csi_config @ 0001c732 size=1248 ===== */

void csi_config(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_b8;
  undefined1 local_b4 [4];
  undefined1 local_b0;
  int local_2c;
  
  piVar2 = DAT_0001c90c;
  iVar12 = *param_1;
  local_2c = *DAT_0001c90c;
  switch(*(uint *)(*(int *)(iVar12 + 0x318) + 8) & 0xf) {
  case 1:
    iVar13 = 1;
    break;
  case 2:
    iVar13 = 2;
    break;
  default:
    goto switchD_0001c754_caseD_3;
  case 4:
    iVar13 = 3;
    break;
  case 8:
    iVar13 = 4;
  }
  *(undefined4 *)(iVar12 + 0x9838) = 0;
  get_remote_mipi_sensor(iVar12,&local_b8,DAT_0001c910);
  if (local_b8 == 0) {
    uVar4 = 0xff;
    uVar5 = 0;
  }
  else {
    iVar3 = v4l2_ctrl_find(*(undefined4 *)(local_b8 + 0x70),DAT_0001c914);
    if (iVar3 == 0) {
      uVar4 = 0xff;
    }
    else {
      uVar4 = v4l2_ctrl_g_ctrl();
    }
    iVar3 = v4l2_ctrl_find(*(undefined4 *)(local_b8 + 0x70),DAT_0001c918);
    uVar5 = 0;
    if (iVar3 != 0) {
      uVar5 = v4l2_ctrl_g_ctrl();
    }
    *(int *)(iVar12 + 0x9838) = local_b8;
  }
  *(uint *)(iVar12 + 0x9820) = uVar5;
  *(uint *)(iVar12 + 0x981c) = uVar4;
  *(undefined4 *)(iVar12 + 0x9818) = 0;
  if (uVar4 < 4) {
    iVar3 = iVar12 + 0x97a8;
    do {
      iVar11 = __kfifo_alloc(iVar3,0x2000,1,0xa20);
      if (iVar11 != 0) {
        printk(DAT_0001c924,iVar12 + 0xa8,iVar11);
        goto LAB_0001c8b6;
      }
      iVar3 = iVar3 + 0x1c;
    } while (iVar3 != iVar12 + 0x9818);
  }
  iVar13 = iVar13 + -1;
  uVar10 = *(uint *)(iVar12 + 0x97a4) & 0xffffffef;
  if (uVar10 == 0x20) {
    rkisp_write(iVar12,0x7004,iVar13,1);
    rkisp_write(iVar12,0x7008,0x3fff,1);
    rkisp_write(iVar12,0x7018,(short)param_1[0x68],1);
    rkisp_read(iVar12,0x7020,1);
    rkisp_read(iVar12,0x7024,1);
    rkisp_read(iVar12,0x7028,1);
    rkisp_write(iVar12,0x702c,DAT_0001c91c,1);
    rkisp_write(iVar12,0x7030,0x3ffffff,1);
    rkisp_write(iVar12,0x7034,0x1c3f,1);
    if (0 < *DAT_0001c920) {
      uVar6 = rkisp_read(iVar12,0x7004,1);
      uVar7 = rkisp_read(iVar12,0x7018,1);
      uVar8 = rkisp_read(iVar12,0x7034,1);
      printk(DAT_0001c928,iVar12 + 0xa8,uVar6,uVar7,uVar8);
    }
  }
  else if (uVar10 == 0x40) {
    cVar1 = *(char *)(*(int *)(iVar12 + 0x94) + 0x7b4);
    uVar5 = *(uint *)(*(int *)(iVar12 + 0x94) + 0x7a8);
    *(undefined2 *)(iVar12 + 0x982c) = 0;
    memset(local_b4,0,0x88);
    iVar3 = rkisp_csi_get_hdr_cfg(iVar12,local_b4);
    if (iVar3 == 0) {
      *(undefined1 *)(iVar12 + 0x982c) = local_b4[0];
      *(undefined1 *)(iVar12 + 0x982d) = local_b0;
    }
    if ((*(char *)(iVar12 + 0x982c) == '\0') &&
       ((*(int *)(iVar12 + 0x99ec) << 0x1d < 0 ||
        (*(char *)(*(int *)(iVar12 + 0x94) + 0x7b9) == '\0')))) {
      *(undefined1 *)(iVar12 + 0x982c) = 4;
    }
    if (((*(int *)(iVar12 + 0x97a4) == 0x50) && (-1 < *(int *)(iVar12 + 0x99ec) << 0x1d)) &&
       (*(char *)(iVar12 + 0x982c) == '\x05')) {
      *(undefined1 *)(iVar12 + 0x982c) = 9;
    }
    if (*(char *)(*(int *)(iVar12 + 0x94) + 0x7ba) == '\0') {
      rkisp_write(iVar12,0x1c00,
                  (*(byte *)(iVar12 + 0x982d) & 3) << 2 | (*(byte *)(iVar12 + 0x982c) & 0xf) << 8,1)
      ;
    }
    rkisp_write(iVar12,0x1c04,iVar13,1);
    rkisp_write(iVar12,0x1c08,0x3fff,1);
    if (*(char *)(*(int *)(iVar12 + 0x94) + 0x7b9) == '\0') {
      uVar4 = (uint)*(byte *)((int)param_1 + 0x1a3) << 0x18 |
              (uint)*(byte *)((int)param_1 + 0x1a2) << 0x10 |
              (uint)*(byte *)((int)param_1 + 0x1a1) << 8;
      rkisp_set_bits(iVar12,0x1c18,0xffffff00,uVar4,1);
      for (iVar13 = 0; iVar13 < *(int *)(*(int *)(iVar12 + 0x94) + 0xb8); iVar13 = iVar13 + 1) {
        iVar3 = *(int *)(*(int *)(iVar12 + 0x94) + (iVar13 + 0x16) * 4);
        if ((iVar3 == 0) || (*(char *)(iVar3 + 0xe035) != '\0')) {
          rkisp_set_bits(iVar3,0x1c18,0xffffff00,uVar4,0);
        }
      }
    }
    else {
      rkisp_write(iVar12,0x1c18,param_1[0x68],1);
    }
    rkisp_write(iVar12,0x1c1c,(char)param_1[0x69],1);
    rkisp_read(iVar12,0x1c20,1);
    rkisp_write(iVar12,0x1c30,DAT_0001cc44,1);
    rkisp_write(iVar12,0x1c34,DAT_0001cc48,1);
    rkisp_write(iVar12,0x1c38,DAT_0001cc4c,1);
    uVar6 = DAT_0001cc54;
    if (*(int *)(iVar12 + 0x97a4) != 0x40) {
      uVar6 = DAT_0001cc50;
    }
    rkisp_write(iVar12,0x1c3c,uVar6,1);
    if (*(byte *)(iVar12 + 0x982c) < 0xe) {
      uVar4 = 1 << (uint)*(byte *)(iVar12 + 0x982c);
      if ((uVar4 & 0x720) == 0) {
        iVar13 = 0;
        if ((uVar4 & 0x3040) != 0) {
          iVar13 = 9;
        }
      }
      else {
        iVar13 = 5;
      }
    }
    else {
      iVar13 = 0;
    }
    if (((cVar1 != '\0') && ((~uVar5 & 0x8000000) != 0)) && (iVar13 << 0x1f < 0)) {
      printk(DAT_0001cc58,iVar12 + 0xa8);
switchD_0001c754_caseD_3:
      iVar11 = -0x16;
      goto LAB_0001c8b6;
    }
    rkisp_write(iVar12,0x3800,iVar13,0);
    if (0 < *DAT_0001cc5c) {
      uVar6 = rkisp_read(iVar12,0x1c18,1);
      uVar7 = rkisp_read(iVar12,0x1c1c,1);
      printk(DAT_0001cc60,iVar12 + 0xa8,uVar6,uVar7);
    }
  }
  else {
    uVar5 = (uVar4 & 3) << 6 | uVar5 & 0x3f;
    rkisp_write(iVar12,0x1c00,DAT_0001cc64 | iVar13 * 0x1000,1);
    rkisp_write(iVar12,0x1c20,(char)param_1[0x68],1);
    rkisp_write(iVar12,0x1c24,uVar5,1);
    rkisp_write(iVar12,0x1c28,uVar5,1);
    rkisp_write(iVar12,0x1c2c,uVar5,1);
    rkisp_write(iVar12,0x1c30,uVar5,1);
    rkisp_write(iVar12,0x1c14,0xffffffff,1);
    rkisp_write(iVar12,0x1c08,0x3ffffff,1);
    if (0 < *DAT_0001cc5c) {
      uVar6 = rkisp_read(iVar12,0x1c00,1);
      uVar7 = rkisp_read(iVar12,0x1c20,1);
      uVar8 = rkisp_read(iVar12,0x1c04,1);
      uVar9 = rkisp_read(iVar12,0x1c08,1);
      printk(DAT_0001cc68,iVar12 + 0xa8,uVar6,uVar7,uVar8,uVar9);
    }
  }
  iVar11 = 0;
LAB_0001c8b6:
  if (local_2c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar11);
}



/* ===== rkisp_csi_config_patch @ 0001cc6c size=732 ===== */

void rkisp_csi_config_patch(int param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  code *pcVar9;
  int iVar10;
  uint uVar11;
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  uint local_b4;
  uint local_b0;
  undefined1 local_ac [4];
  undefined1 local_a8;
  int local_24;
  
  piVar3 = DAT_0001cf48;
  local_24 = *DAT_0001cf48;
  uVar8 = *(uint *)(param_1 + 0x99ec) & 0x10;
  iVar6 = *(int *)(param_1 + 0x94);
  if (uVar8 == 0) {
    cVar1 = *(char *)(iVar6 + 0x7b4);
    uVar11 = *(uint *)(iVar6 + 0x7a8);
    memset(local_ac,0,0x88);
    iVar6 = rkisp_csi_get_hdr_cfg(param_1,local_ac);
    if (*(int *)(param_1 + 0x99ec) << 0x17 < 0) {
      local_b8 = param_1 + 0x10;
      local_b4 = uVar8;
      local_b0 = uVar8;
      get_remote_mipi_sensor(param_1,&local_c0,0x4001);
      if (local_c0 != 0) {
        *(undefined2 *)(param_1 + 0x982c) = 0;
        if (iVar6 == 0) {
          *(undefined1 *)(param_1 + 0x982c) = local_ac[0];
          *(undefined1 *)(param_1 + 0x982d) = local_a8;
          rkisp_expander_config(param_1,local_ac,1);
        }
        if ((*(char *)(param_1 + 0x982c) == '\0') || (*(char *)(param_1 + 0x982c) == '\a')) {
          *(undefined1 *)(param_1 + 0x982c) = 4;
        }
        if ((*(int *)(param_1 + 0x99ec) == 0x100) && (0x50 < *(uint *)(param_1 + 0x97a4))) {
          local_b4 = uVar8;
          if (*(char *)(param_1 + 0xe037) != '\0') {
            local_b4 = 2;
          }
        }
        else {
          local_b4 = 1;
        }
        if (((local_c0 != 0) && (**(int **)(local_c0 + 0x68) != 0)) &&
           (pcVar7 = *(code **)(**(int **)(local_c0 + 0x68) + 0x18), pcVar7 != (code *)0x0)) {
          if ((*DAT_0001cf4c == 0) ||
             (pcVar9 = *(code **)(*DAT_0001cf4c + 0x18), pcVar9 == (code *)0x0)) {
            (*pcVar7)(local_c0,DAT_0001cf50,&local_b8);
          }
          else {
            (*pcVar9)(local_c0,DAT_0001cf50,&local_b8);
          }
        }
        *(undefined2 *)(param_1 + 0xe03a) = (undefined2)local_b0;
        if ((*(uint *)(param_1 + 0x97a4) < 0x60) || (local_b4 != 0)) {
          if (local_b4 != 2) goto LAB_0001ce30;
          local_bc = 3;
        }
        else {
          if (*(char *)(param_1 + 0x982c) == '\x05') {
            uVar4 = 9;
          }
          else {
            local_ac[0] = 0;
            if (*(char *)(param_1 + 0x982c) != '\x06') goto LAB_0001cee6;
            uVar4 = 0xd;
          }
          *(undefined1 *)(param_1 + 0x982c) = uVar4;
          local_bc = 1;
        }
        if (((local_c0 != 0) && (**(int **)(local_c0 + 0x68) != 0)) &&
           (pcVar7 = *(code **)(**(int **)(local_c0 + 0x68) + 0x18), pcVar7 != (code *)0x0)) {
          if ((*DAT_0001cf4c == 0) ||
             (pcVar9 = *(code **)(*DAT_0001cf4c + 0x18), pcVar9 == (code *)0x0)) {
            (*pcVar7)(local_c0,DAT_0001cf54,&local_bc);
          }
          else {
            (*pcVar9)(local_c0,DAT_0001cf54,&local_bc);
          }
        }
        goto LAB_0001ce30;
      }
    }
    else {
LAB_0001cee6:
      *(undefined1 *)(param_1 + 0x982c) = local_ac[0];
LAB_0001ce30:
      if (*(char *)(*(int *)(param_1 + 0x94) + 0x7ba) == '\0') {
        cVar2 = *(char *)(*(int *)(param_1 + 0x94) + 0x7be);
        iVar10 = (*(byte *)(param_1 + 0x982c) & 0xf) << 8;
        rkisp_write(param_1,0x1c00,iVar10,1);
        if (cVar2 != '\0') {
          rkisp_next_write(param_1,0x1c00,iVar10,1);
        }
      }
      if (*(byte *)(param_1 + 0x982c) < 0xe) {
        uVar8 = 1 << (uint)*(byte *)(param_1 + 0x982c);
        if ((uVar8 & 0x720) == 0) {
          if ((uVar8 & 0x3040) == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = 9;
          }
        }
        else {
          iVar10 = 5;
        }
      }
      else {
        iVar10 = 0;
      }
      if (((cVar1 == '\0') || ((~uVar11 & 0x8000000) == 0)) || (-1 < iVar10 << 0x1f)) {
        cVar1 = *(char *)(*(int *)(param_1 + 0x94) + 0x7be);
        rkisp_write(param_1,0x3800,iVar10,0);
        if (cVar1 != '\0') {
          rkisp_next_write(param_1,0x3800,iVar10,0);
        }
        uVar5 = DAT_0001cf5c;
        if (*(byte *)(param_1 + 0x982c) - 4 < 3) {
          uVar5 = 0xe0000;
        }
        rkisp_unite_set_bits_constprop_1
                  (param_1,0x1c3c,uVar5,*(undefined1 *)(*(int *)(param_1 + 0x94) + 0x7be));
        goto LAB_0001cca2;
      }
      printk(DAT_0001cf58,param_1 + 0xa8);
    }
    iVar6 = -0x16;
  }
  else {
    *(undefined4 *)(iVar6 + 200) = *(undefined4 *)(param_1 + 0x9acc);
    iVar6 = csi_config(param_1 + 0x8cc0);
LAB_0001cca2:
    if (*(byte *)(param_1 + 0x982c) - 4 < 3) {
      rkisp_unite_set_bits_constprop_1
                (param_1,0x1c,4,*(undefined1 *)(*(int *)(param_1 + 0x94) + 0x7be));
    }
    if (0x5f < *(uint *)(param_1 + 0x97a4)) {
      rkisp_unite_set_bits_constprop_1
                (param_1,0x1c,8,*(undefined1 *)(*(int *)(param_1 + 0x94) + 0x7be));
    }
    if (*(int *)(param_1 + 0x97a4) == 0x80) {
      rkisp_unite_set_bits_constprop_1
                (param_1,0x1c,1,*(undefined1 *)(*(int *)(param_1 + 0x94) + 0x7be));
    }
    *(undefined4 *)(param_1 + 0x9b0c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x9b10) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x9b14) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x9b18) = 0xffffffff;
    *(uint *)(param_1 + 0x9b1c) = (uint)*(byte *)(param_1 + 0x982c);
  }
  if (local_24 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar6);
  }
  return;
}



/* ===== rkisp_csi_sof @ 0001cf60 size=54 ===== */

void rkisp_csi_sof(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  
  if (*(byte *)(param_1 + 0x982c) < 0xe) {
    uVar1 = 1 << (uint)*(byte *)(param_1 + 0x982c);
    if ((uVar1 & 0x3040) == 0) {
      if ((uVar1 & 800) != 0) {
        if (param_2 != 0) {
          return;
        }
        goto LAB_0001cf82;
      }
      if (-1 < (int)(uVar1 << 0x1b)) {
        return;
      }
      bVar2 = param_2 == 2;
    }
    else {
      bVar2 = param_2 == 1;
    }
    if (bVar2) {
LAB_0001cf82:
      rkisp_isp_queue_event_sof(param_1 + 0xc30);
      return;
    }
  }
  return;
}



/* ===== rkisp_register_csi_subdev @ 0001cf96 size=192 ===== */

int rkisp_register_csi_subdev(int param_1,int param_2)

{
  char *__src;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  memset((void *)(param_1 + 0x8cc0),0,0x1a8);
  iVar3 = param_1 + 0x8cc4;
  *(int *)(param_1 + 0x8cc0) = param_1;
  v4l2_subdev_init(iVar3,DAT_0001d058);
  __src = DAT_0001d05c;
  *(uint *)(param_1 + 0x8d24) = *(uint *)(param_1 + 0x8d24) | 4;
  *(undefined4 *)(param_1 + 0x8cfc) = DAT_0001d060;
  *(undefined4 *)(param_1 + 0x8cdc) = 0x20000;
  strcpy((char *)(param_1 + 0x8d38),__src);
  *(undefined4 *)(param_1 + 0x8da4) = 5;
  *(undefined4 *)(param_1 + 0x8dc4) = 6;
  *(undefined4 *)(param_1 + 0x8e54) = 2;
  if ((*(uint *)(param_1 + 0x97a4) & 0xffffffef) == 0x40) {
    *(undefined4 *)(param_1 + 0x8e54) = 6;
    *(undefined4 *)(param_1 + 0x8de4) = 2;
    *(undefined4 *)(param_1 + 0x8e04) = 2;
    *(undefined4 *)(param_1 + 0x8e24) = 2;
    *(undefined4 *)(param_1 + 0x8e44) = 2;
  }
  else if (0x5f < *(uint *)(param_1 + 0x97a4)) {
    return 0;
  }
  iVar2 = media_entity_pads_init(iVar3,*(undefined2 *)(param_1 + 0x8e54),param_1 + 0x8d88);
  uVar1 = DAT_0001d064;
  if (-1 < iVar2) {
    *(void **)(param_1 + 0x8d5c) = (void *)(param_1 + 0x8cc0);
    *(undefined4 *)(param_1 + 0x8d1c) = uVar1;
    *(undefined4 *)(param_1 + 0x8d58) = 0x80;
    iVar3 = v4l2_device_register_subdev(param_2,iVar3);
    if (-1 < iVar3) {
      return 0;
    }
    printk(DAT_0001d068,param_2 + 0x10);
    return iVar3;
  }
  return iVar2;
}



/* ===== rkisp_unregister_csi_subdev @ 0001d06c size=10 ===== */

void rkisp_unregister_csi_subdev(int param_1)

{
  v4l2_device_unregister_subdev(param_1 + 0x8cc4);
  return;
}



/* ===== rkisp_proc_write @ 0001d078 size=330 ===== */

uint rkisp_proc_write(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  char *__haystack;
  uint __n;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  char *local_38 [2];
  int local_30;
  int local_2c [2];
  
  iVar1 = PDE_DATA(*(undefined4 *)(param_1 + 0x10));
  __haystack = (char *)vmalloc(param_3 + 1);
  if (__haystack == (char *)0x0) {
    uVar6 = 0xfffffff4;
  }
  else {
    if (-1 < (int)param_3) {
      uVar6 = *(uint *)(((uint)local_38 & 0xffffe000) + 8);
      if (!CARRY4(param_2,param_3) && param_2 + param_3 <= uVar6) {
        uVar6 = 0;
      }
      __n = param_3;
      if (uVar6 == 0) {
        __n = arm_copy_from_user(__haystack,param_2);
      }
      if (__n == 0) {
        if (__haystack[param_3 - 1] == '\n') {
          __haystack[param_3 - 1] = '\0';
        }
        else {
          __haystack[param_3] = '\0';
        }
        local_38[0] = __haystack;
        _dev_info(*(undefined4 *)(iVar1 + 0xc),DAT_0001d1c8,DAT_0001d1c4,param_3);
        pcVar4 = strstr(__haystack,DAT_0001d1cc);
        if (pcVar4 == (char *)0x0) {
          if ((*(uint *)(iVar1 + 0x96d4) & 0x300) != 0) {
            pcVar2 = strchr(__haystack,0x3d);
            pcVar4 = __haystack;
            while (pcVar2 != (char *)0x0) {
              *pcVar2 = '\0';
              iVar5 = kstrtouint(pcVar4,0x10,local_2c);
              if (iVar5 != 0) break;
              pcVar3 = strchr(pcVar2 + 1,0x20);
              if (pcVar3 != (char *)0x0) {
                pcVar4 = pcVar3 + 1;
                *pcVar3 = '\0';
              }
              iVar5 = kstrtouint(pcVar2 + 1,0x10,&local_30);
              if (iVar5 != 0) break;
              if ((*(uint *)(iVar1 + 0x96d4) & 0x200) == 0) {
                rkisp_write(iVar1,local_2c[0],local_30);
              }
              else {
                DataSynchronizationBarrier(0xe);
                arm_heavy_mb();
                *(int *)(*(int *)(*(int *)(iVar1 + 0x94) + 0x10) + local_2c[0]) = local_30;
              }
              pcVar2 = strchr(pcVar4,0x3d);
            }
          }
        }
        else {
          iVar5 = kstrtouint(pcVar4 + 5,0x10,&local_30);
          if ((iVar5 == 0) && (*(int *)(iVar1 + 0x96d4) = local_30, local_30 << 0x1e < 0)) {
            rkisp_proc_dump_mem(iVar1);
          }
        }
        vfree(__haystack);
        return param_3;
      }
      memset(__haystack + (param_3 - __n),0,__n);
    }
    uVar6 = 0xfffffff2;
    vfree(__haystack);
  }
  return uVar6;
}



/* ===== isp_open @ 0001d1d0 size=22 ===== */

void isp_open(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = PDE_DATA();
  single_open(param_2,DAT_0001d1e8,uVar1);
  return;
}



/* ===== isp_show @ 0001d1ec size=3180 ===== */

undefined4 isp_show(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined4 extraout_r3;
  int iVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_3c [24];
  
  iVar18 = *(int *)(param_1 + 0x40);
  piVar20 = *(int **)(iVar18 + 0x318);
  uVar24 = 1;
  uVar25 = 0;
  seq_printf(param_1,DAT_0001d504,iVar18 + 0x10,2,1,0);
  uVar12 = DAT_0001d578;
  for (uVar19 = 0; puVar15 = *(undefined4 **)(iVar18 + 0x94), uVar19 < (uint)puVar15[0x10];
      uVar19 = uVar19 + 1) {
    uVar5 = *(undefined4 *)(*(int *)*puVar15 + uVar19 * 4);
    uVar4 = clk_get_rate(puVar15[uVar19 + 6]);
    seq_printf(param_1,uVar12,uVar5,uVar4,uVar24,uVar25);
  }
  seq_printf(param_1,DAT_0001d50c,DAT_0001d508,*(undefined4 *)(iVar18 + 0x99e8),
             *(undefined4 *)(iVar18 + 0x99e4),uVar25);
  iVar21 = 0;
  if (piVar20 != (int *)0x0) {
    if (piVar20[4] != 0) {
      uVar19 = __aeabi_uidiv(piVar20[5]);
    }
    iVar21 = *piVar20 + 0x74;
  }
  uVar16 = *(uint *)(iVar18 + 0xe38);
  uVar17 = *(uint *)(iVar18 + 0xe34);
  seq_printf(param_1,DAT_0001d510,DAT_0001d514,iVar21,iVar18 + 0xe10,*(undefined4 *)(iVar18 + 0xe3c)
             ,*(undefined4 *)(iVar18 + 0xe40),uVar19,uVar17,uVar16);
  uVar3 = DAT_0001d518;
  if ((int)(*(uint *)(iVar18 + 0x99e0) << 0x16) < 0) {
    uVar1 = *(uint *)(iVar18 + 0x99e0) & 1;
    if (*(byte *)(iVar18 + 0x982c) - 4 < 3) {
      uVar2 = DAT_0001d520;
      if (uVar1 != 0) {
        uVar2 = DAT_0001d51c;
      }
      uVar16 = *(uint *)(iVar18 + 0x9b0c);
      uVar17 = *(uint *)(iVar18 + 0xe8c);
      uVar19 = (uint)((ulonglong)*(uint *)(iVar18 + 0xe80) * (ulonglong)DAT_0001d518 >> 0x32);
      seq_printf(param_1,DAT_0001d528,DAT_0001d524,*(int *)(iVar18 + 0x9b1c) + -3,
                 *(undefined4 *)(iVar18 + 36000),
                 (uint)((ulonglong)(uint)(*(int *)(iVar18 + 0x8c98) - *(int *)(iVar18 + 0x8cb0)) *
                        (ulonglong)DAT_0001d518 >> 0x32),uVar2,uVar19,uVar17,uVar16,
                 *(undefined4 *)(iVar18 + 0x9b10),*(undefined4 *)(iVar18 + 0x9b14),
                 *(undefined4 *)(iVar18 + 0x9b18));
      uVar1 = (uint)*(byte *)(iVar18 + 0xe03d);
      seq_printf(param_1,DAT_0001d52c,*(undefined4 *)(*(int *)(iVar18 + 0x94) + 0xbc),
                 *(undefined1 *)(*(int *)(iVar18 + 0x94) + 0x7b8),*(undefined1 *)(iVar18 + 0xe03c),
                 uVar1);
    }
    else {
      uVar12 = DAT_0001dfdc;
      if (uVar1 == 0) {
        uVar12 = DAT_0001dfd8;
      }
      uVar2 = (uint)((ulonglong)*(uint *)(iVar18 + 0xe84) * (ulonglong)DAT_0001dfe0 >> 0x26);
      uVar1 = (uint)((ulonglong)*(uint *)(iVar18 + 0xe80) * (ulonglong)DAT_0001d518 >> 0x32);
      seq_printf(param_1,DAT_0001dfe8,DAT_0001dfe4,*(undefined4 *)(iVar18 + 0xe88),uVar12,uVar1,
                 uVar2,uVar19,uVar17,uVar16);
    }
    if (*(char *)(iVar18 + 0x8fcd) != '\0') {
      uVar12 = DAT_0001d534;
      if ((*(byte *)(iVar18 + 0x8fc8) & 1) != 0) {
        uVar12 = DAT_0001d530;
      }
      uVar1 = DAT_0001d53c;
      if ((*(byte *)(iVar18 + 0x8fc8) & 2) != 0) {
        uVar1 = DAT_0001d538;
      }
      uVar16 = (uint)((ulonglong)*(uint *)(iVar18 + 0x8f78) * (ulonglong)uVar3 >> 0x32);
      uVar17 = *(uint *)(iVar18 + 0x8f80);
      uVar19 = *(uint *)(iVar18 + 0x8f3c);
      uVar2 = *(uint *)(iVar18 + 0x8f38);
      seq_printf(param_1,DAT_0001d540,DAT_0001d544,*(undefined4 *)(iVar18 + 0x9acc),uVar12,uVar1,
                 uVar2,uVar19,uVar17,uVar16,*(undefined4 *)(iVar18 + 0x8f84));
    }
    uVar24 = DAT_0001d57c;
    uVar12 = DAT_0001d544;
    iVar21 = iVar18 + 0x1310;
    do {
      if (*(char *)(iVar21 + 0x1f0) != '\0') {
        uVar13 = *(uint *)(iVar21 + 0xbc);
        uVar16 = *(uint *)(iVar21 + 0xb8);
        uVar17 = *(uint *)(iVar21 + 0xb4);
        uVar19 = uVar13 >> 0x18;
        uVar2 = uVar13 >> 0x10;
        uVar1 = uVar13 >> 8;
        seq_printf(param_1,uVar24,uVar12,iVar21,uVar13,uVar1,uVar2,uVar19,uVar17,uVar16,
                   *(undefined4 *)(iVar21 + 0x174),*(undefined4 *)(iVar21 + 0x178),
                   *(undefined4 *)(iVar21 + 0x17c),*(undefined4 *)(iVar21 + 0x180),
                   *(undefined4 *)(iVar21 + 0x220),
                   (uint)((ulonglong)*(uint *)(iVar21 + 0x218) * (ulonglong)uVar3 >> 0x32),
                   (uint)((ulonglong)*(uint *)(iVar21 + 0x21c) * (ulonglong)uVar3 >> 0x32),
                   *(undefined4 *)(iVar21 + 0x224));
      }
      uVar25 = DAT_0001d550;
      iVar21 = iVar21 + 0x6c0;
    } while (iVar18 + 0x6410 != iVar21);
    iVar21 = *(int *)(iVar18 + 0x97a4);
    if ((iVar21 == 0x70) || (iVar21 == 0x80)) {
      iVar14 = *(int *)(iVar18 + 0x711c);
      if (iVar21 == 0x70) {
        uVar12 = DAT_0001d54c;
        if (*(int *)(iVar18 + 0x5ff0) != 0) {
          uVar12 = DAT_0001d548;
        }
        seq_printf(param_1,DAT_0001d554,DAT_0001d558,uVar12,*(int *)(iVar18 + 0x5ff0),uVar1,uVar2,
                   uVar19,uVar17,uVar16);
        uVar3 = rkisp_read(iVar18,0x1818,0);
        uVar13 = rkisp_read(iVar18,0x400,0);
        uVar12 = DAT_0001d564;
        uVar17 = (uVar3 & 0x3f) >> 5;
        uVar19 = (uVar3 & 0x1f) >> 4;
        uVar2 = (uVar3 & 7) >> 2;
        uVar1 = (uVar3 & 3) >> 1;
        seq_printf(param_1,DAT_0001d560,DAT_0001d55c,(uVar13 & 0x3f) >> 5,uVar3 & 1,uVar1,uVar2,
                   uVar19,uVar17);
        uVar3 = rkisp_read(iVar18,0x3a00,0);
        uVar24 = uVar25;
        if ((uVar3 & 1) == 0) {
          uVar24 = uVar12;
        }
        seq_printf(param_1,DAT_0001d56c,DAT_0001d568,uVar24,uVar3,uVar1,uVar2,uVar19,uVar17);
        uVar3 = rkisp_read(iVar18,0x2f00,0);
        uVar24 = uVar25;
        if ((uVar3 & 1) == 0) {
          uVar24 = uVar12;
        }
        seq_printf(param_1,DAT_0001d56c,DAT_0001d570,uVar24,uVar3,uVar1,uVar2,uVar19,uVar17);
        uVar3 = rkisp_read(iVar18,0x2600,0);
        uVar24 = uVar25;
        if ((uVar3 & 1) == 0) {
          uVar24 = uVar12;
        }
        seq_printf(param_1,DAT_0001d56c,DAT_0001d574,uVar24,uVar3);
        uVar3 = rkisp_read(iVar18,0x3380,0);
        if ((uVar3 & 1) == 0) {
          uVar25 = uVar12;
        }
        seq_printf(param_1,DAT_0001d8d8,DAT_0001d8d4,uVar25,uVar3);
      }
      uVar12 = DAT_0001d8dc;
      uVar3 = rkisp_read(iVar18,0x400,0);
      uVar24 = DAT_0001d8e0;
      uVar25 = uVar12;
      if ((uVar3 & 0x40) == 0) {
        uVar25 = DAT_0001d8e0;
      }
      seq_printf(param_1,DAT_0001d8d8,DAT_0001d8e4,uVar25,uVar3,uVar1,uVar2,uVar19,uVar17,uVar16);
      uVar25 = uVar12;
      if ((uVar3 & 0x80) == 0) {
        uVar25 = uVar24;
      }
      uVar4 = rkisp_read(iVar18,0x538,0);
      uVar5 = rkisp_read(iVar18,0x53c,0);
      uVar6 = rkisp_read(iVar18,0x530,0);
      uVar7 = rkisp_read(iVar18,0x534,0);
      seq_printf(param_1,DAT_0001d8ec,DAT_0001d8e8,uVar25,uVar3,uVar4,uVar5,uVar6,uVar7);
      uVar19 = rkisp_read(iVar18,0x230,0);
      uVar25 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar25 = uVar24;
      }
      seq_printf(param_1,DAT_0001d8d8,DAT_0001d8f0,uVar25,uVar19,uVar4,uVar5,uVar6,uVar7);
      uVar19 = rkisp_read(iVar18,0x3400,0);
      uVar25 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar25 = uVar24;
      }
      seq_printf(param_1,DAT_0001d8d8,DAT_0001d8f4,uVar25,uVar19,uVar4,uVar5,uVar6,uVar7);
      uVar19 = rkisp_read(iVar18,0x3500,0);
      uVar25 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar25 = uVar24;
      }
      seq_printf(param_1,DAT_0001d8d8,DAT_0001d8f8,uVar25,uVar19);
      uVar19 = rkisp_read(iVar18,0x3000,0);
      uVar25 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar25 = uVar24;
      }
      seq_printf(param_1,DAT_0001d8d8,DAT_0001d8fc,uVar25,uVar19);
      uVar19 = rkisp_read(iVar18,0x2200,0);
      uVar25 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar25 = uVar24;
      }
      seq_printf(param_1,DAT_0001d8d8,DAT_0001d900,uVar25,uVar19);
      uVar19 = rkisp_read(iVar18,0x2500,0);
      uVar25 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar25 = uVar24;
      }
      seq_printf(param_1,DAT_0001d8d8,DAT_0001d904,uVar25,uVar19);
      uVar19 = rkisp_read(iVar18,0x700,0);
      uVar25 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar25 = uVar24;
      }
      seq_printf(param_1,DAT_0001d8d8,DAT_0001d908,uVar25,uVar19);
      uVar19 = rkisp_read(iVar18,0x900,0);
      uVar25 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar25 = uVar24;
      }
      seq_printf(param_1,DAT_0001d8d8,DAT_0001d90c,uVar25,uVar19);
      uVar19 = rkisp_read(iVar18,0x800,0);
      uVar25 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar25 = uVar24;
      }
      seq_printf(param_1,DAT_0001d8d8,DAT_0001d910,uVar25,uVar19);
      uVar19 = rkisp_read(iVar18,0x200,0);
      uVar4 = *(undefined4 *)(DAT_0001d914 + ((uVar19 & 0xf) >> 1) * 4 + 0x14);
      uVar25 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar25 = uVar24;
      }
      seq_printf(param_1,DAT_0001d918,DAT_0001d91c,uVar25,uVar19,uVar4);
      uVar19 = rkisp_read(iVar18,0x3900,0);
      uVar25 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar25 = uVar24;
      }
      seq_printf(param_1,DAT_0001d8d8,DAT_0001d920,uVar25,uVar19,uVar4);
      uVar19 = rkisp_read(iVar18,0x3800,0);
      uVar25 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar25 = uVar24;
      }
      seq_printf(param_1,DAT_0001d8d8,DAT_0001d924,uVar25,uVar19,uVar4);
      uVar19 = rkisp_read(iVar18,0x2c00,0);
      uVar3 = rkisp_read(iVar18,0x2c0c,0);
      if ((uVar19 & 1) == 0) {
        uVar12 = uVar24;
      }
      uVar17 = (uVar19 & 0x3fff) >> 0xd;
      uVar16 = (uVar19 & 3) >> 1;
      uVar24 = DAT_0001dfec;
      if ((-1 < (int)(uVar3 << 0x1b)) && (uVar24 = DAT_0001d92c, (uVar3 & 8) == 0)) {
        uVar24 = DAT_0001d928;
      }
      uVar25 = DAT_0001d930;
      if (*(char *)(iVar14 + 0x57a) == '\0') {
        uVar25 = DAT_0001d94c;
      }
      seq_printf(param_1,DAT_0001d938,DAT_0001d934,uVar12,uVar19,uVar3,uVar16,uVar17,uVar24,uVar25);
      uVar19 = rkisp_read(iVar18,0x2700,0);
      uVar4 = DAT_0001d8e0;
      uVar12 = DAT_0001d8dc;
      uVar5 = DAT_0001d8dc;
      if ((uVar19 & 1) == 0) {
        uVar5 = DAT_0001d8e0;
      }
      seq_printf(param_1,DAT_0001d8d8,DAT_0001d93c,uVar5,uVar19,uVar3,uVar16,uVar17,uVar24,uVar25);
      uVar19 = rkisp_read(iVar18,0x2800,0);
      uVar5 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar5 = uVar4;
      }
      seq_printf(param_1,DAT_0001d8d8,DAT_0001d940,uVar5,uVar19,uVar3,uVar16,uVar17,uVar24,uVar25);
      uVar19 = rkisp_read(iVar18,0x2900,0);
      uVar24 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar24 = uVar4;
      }
      seq_printf(param_1,DAT_0001d8d8,DAT_0001d944,uVar24,uVar19);
      uVar19 = rkisp_read(iVar18,0x3c00,0);
      uVar24 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar24 = uVar4;
      }
      seq_printf(param_1,DAT_0001d8d8,DAT_0001d948,uVar24,uVar19);
      uVar19 = rkisp_read(iVar18,0x3e00,0);
      uVar24 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar24 = uVar4;
      }
      seq_printf(param_1,DAT_0001dc84,DAT_0001dc80,uVar24,uVar19);
      uVar19 = rkisp_read(iVar18,0x3b00,0);
      uVar24 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar24 = uVar4;
      }
      seq_printf(param_1,DAT_0001dc84,DAT_0001dc88,uVar24,uVar19);
      uVar19 = rkisp_read(iVar18,0x400,0);
      uVar3 = rkisp_read(iVar18,0x570,0);
      uVar24 = DAT_0001dc8c;
      if ((uVar19 & 0x6000) == 0) {
        uVar24 = DAT_0001dc90;
      }
      uVar17 = (uVar3 & 0xffffff) >> 0x10;
      uVar16 = (uVar3 & 0x3fffffff) >> 0x18;
      if (uVar17 == 0) {
        uVar17 = 0x80;
      }
      uVar25 = rkisp_read(iVar18,0x574,0);
      uVar5 = rkisp_read(iVar18,0x578,0);
      uVar6 = rkisp_read(iVar18,0x57c,0);
      uVar7 = rkisp_read(iVar18,0x580,0);
      uVar8 = rkisp_read(iVar18,0x584,0);
      uVar9 = rkisp_read(iVar18,0x588,0);
      uVar10 = rkisp_read(iVar18,0x58c,0);
      uVar11 = rkisp_read(iVar18,0x590,0);
      uVar3 = uVar3 & 0x1ff;
      seq_printf(param_1,DAT_0001dc98,DAT_0001dc94,uVar24,uVar19,uVar16,uVar17,uVar3,uVar25,uVar5,
                 uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
      uVar19 = rkisp_read(iVar18,0x3f00,0);
      uVar24 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar24 = uVar4;
      }
      seq_printf(param_1,DAT_0001dc84,DAT_0001dc9c,uVar24,uVar19,uVar16,uVar17,uVar3,uVar25,uVar5,
                 uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
      uVar19 = rkisp_read(iVar18,0x4d00,0);
      uVar24 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar24 = uVar4;
      }
      seq_printf(param_1,DAT_0001dc84,DAT_0001dca0,uVar24,uVar19,uVar16,uVar17,uVar3,uVar25,uVar5,
                 uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
      uVar19 = rkisp_read(iVar18,0x5000,0);
      uVar24 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar24 = uVar4;
      }
      seq_printf(param_1,DAT_0001dc84,DAT_0001dca4,uVar24,uVar19);
      uVar19 = rkisp_read(iVar18,0x4500,0);
      uVar24 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar24 = uVar4;
      }
      seq_printf(param_1,DAT_0001dc84,DAT_0001dca8,uVar24,uVar19);
      uVar19 = rkisp_read(iVar18,0x4600,0);
      uVar24 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar24 = uVar4;
      }
      seq_printf(param_1,DAT_0001dc84,DAT_0001dcac,uVar24,uVar19);
      uVar19 = rkisp_read(iVar18,0x4400,0);
      uVar24 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar24 = uVar4;
      }
      seq_printf(param_1,DAT_0001dc84,DAT_0001dcb0,uVar24,uVar19);
      uVar19 = rkisp_read(iVar18,0x4900,0);
      uVar24 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar24 = uVar4;
      }
      seq_printf(param_1,DAT_0001dc84,DAT_0001dcb4,uVar24,uVar19);
      uVar19 = rkisp_read(iVar18,0x4a00,0);
      uVar24 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar24 = uVar4;
      }
      seq_printf(param_1,DAT_0001dc84,DAT_0001dcb8,uVar24,uVar19);
      uVar19 = rkisp_read(iVar18,0x4800,0);
      uVar24 = uVar12;
      if ((uVar19 & 1) == 0) {
        uVar24 = uVar4;
      }
      seq_printf(param_1,DAT_0001dc84,DAT_0001dcbc,uVar24,uVar19);
      uVar19 = rkisp_read(iVar18,0x404,1);
      uVar24 = uVar12;
      if ((uVar19 & 0x10000000) == 0) {
        uVar24 = uVar4;
      }
      seq_printf(param_1,DAT_0001dc84,DAT_0001dcc0,uVar24,uVar19);
      iVar21 = rkisp_read(iVar18,0x306c,0);
      if (iVar21 == 0) {
        uVar12 = uVar4;
      }
      seq_printf(param_1,DAT_0001dc84,DAT_0001dcc4,uVar12,iVar21);
      uVar19 = rkisp_read(iVar18,0x648,1);
      seq_printf(param_1,DAT_0001dcc8,DAT_0001dccc,uVar19,uVar19 >> 0x1c,
                 (uVar19 & 0xfffffff) >> 0x18,(uVar19 & 0xffffff) >> 0x14,(uVar19 & 0xfffff) >> 0x10
                 ,(uVar19 & 0xffff) >> 0xc,(uVar19 & 0xfff) >> 8,(uVar19 & 0xff) >> 4,uVar19 & 0xf);
      uVar19 = rkisp_read(iVar18,0x64c,1);
      seq_printf(param_1,DAT_0001dcd0,DAT_0001dcd4,uVar19,uVar19 >> 0x1f,
                 (uVar19 & 0x7fffffff) >> 0x1e,(uVar19 & 0x3fffffff) >> 0x10,
                 (uVar19 & 0xffff) >> 0xe,uVar19 & 0x3fff);
      uVar19 = rkisp_read(iVar18,0x650,1);
      uVar16 = (uVar19 & 0x7ffffff) >> 0x1a;
      uVar17 = (uVar19 & 0xfffffff) >> 0x1b;
      seq_printf(param_1,DAT_0001dcd8,DAT_0001dfac,uVar19,uVar19 >> 0x1f,
                 (uVar19 & 0x7fffffff) >> 0x1e,(uVar19 & 0x3fffffff) >> 0x1d,
                 (uVar19 & 0x1fffffff) >> 0x1c,uVar17,uVar16,(uVar19 & 0x3ffffff) >> 0x19,
                 (uVar19 & 0x1ffffff) >> 0x18,(uVar19 & 0xffffff) >> 0x17,
                 (uVar19 & 0x7fffff) >> 0x16,(uVar19 & 0x3fffff) >> 0x15,(uVar19 & 0x1fffff) >> 0x14
                 ,(uVar19 & 0xfffff) >> 0x13,(uVar19 & 0x7ffff) >> 0x12,(uVar19 & 0x3ffff) >> 0x11,
                 (uVar19 & 0x1ffff) >> 0x10,(uVar19 & 0xffff) >> 0xf,(uVar19 & 0x7fff) >> 0xe,
                 (uVar19 & 0x3fff) >> 0xd,(uVar19 & 0x1fff) >> 0xc,(uVar19 & 0xfff) >> 0xb,
                 (uVar19 & 0x7ff) >> 10,(uVar19 & 0x3ff) >> 9,(uVar19 & 0x1ff) >> 8,
                 (uVar19 & 0xff) >> 7,(uVar19 & 0x7f) >> 6,(uVar19 & 0x3f) >> 5,(uVar19 & 0x1f) >> 4
                 ,(uVar19 & 0xf) >> 3,(uVar19 & 7) >> 2,(uVar19 & 3) >> 1,uVar19 & 1);
      uVar3 = rkisp_read(iVar18,0x654,1);
      uVar19 = uVar3 & 1;
      uVar2 = (uVar3 & 3) >> 1;
      uVar1 = (uVar3 & 7) >> 2;
      seq_printf(param_1,DAT_0001dfb0,DAT_0001dfb4,uVar3,(uVar3 & 0xf) >> 3,uVar1,uVar2,uVar19);
    }
    uVar3 = (uint)*(byte *)(*(int *)(iVar18 + 0x94) + 0x7a4);
    uVar12 = DAT_0001dfbc;
    if (*(char *)(*(int *)(iVar18 + 0x94) + 0x7a5) == '\0') {
      uVar12 = DAT_0001dfb8;
    }
    seq_printf(param_1,DAT_0001dfc4,DAT_0001dfc0,uVar12,uVar3,uVar1,uVar2,uVar19,uVar17,uVar16);
    seq_printf(param_1,DAT_0001dfcc,DAT_0001dfc8,*(undefined4 *)(iVar18 + 0x96d4));
    if (*(int *)(iVar18 + 0x96d4) << 0x1f < 0) {
      *(undefined1 *)(iVar18 + 0x96d8) = 1;
      _cond_resched();
      if (*(char *)(iVar18 + 0x96d8) == '\0') {
        iVar21 = 300;
        uVar12 = 0;
      }
      else {
        init_wait_entry(auStack_3c,0);
        iVar21 = 300;
        while (prepare_to_wait_event(iVar18 + 0x96c4,auStack_3c,2),
              *(char *)(iVar18 + 0x96d8) != '\0') {
          if (iVar21 == 0) goto LAB_0001de3c;
          iVar21 = schedule_timeout(iVar21);
        }
        if (iVar21 == 0) {
          iVar21 = 1;
        }
LAB_0001de3c:
        finish_wait(iVar18 + 0x96c4,auStack_3c);
        uVar12 = extraout_r3;
      }
      iVar14 = 0;
      seq_printf(param_1,DAT_0001dfd0,iVar21,uVar12,uVar3);
      do {
        iVar23 = iVar14 + 4;
        iVar22 = iVar14 + 8;
        iVar21 = iVar14 + 0xc;
        if (*(char *)(*(int *)(iVar18 + 0x94) + 0x7be) == '\0') {
          uVar12 = rkisp_read(iVar18,iVar14,1);
          uVar24 = rkisp_read(iVar18,iVar23,1);
          uVar25 = rkisp_read(iVar18,iVar22,1);
          uVar4 = rkisp_read(iVar18,iVar21,1);
          seq_printf(param_1,DAT_0001dfd4,iVar14,uVar12,uVar24,uVar25,uVar4);
        }
        else {
          uVar12 = rkisp_read(iVar18,iVar14,1);
          uVar24 = rkisp_read(iVar18,iVar23,1);
          uVar25 = rkisp_read(iVar18,iVar22,1);
          uVar4 = rkisp_read(iVar18,iVar21,1);
          uVar5 = rkisp_next_read(iVar18,iVar14,1);
          uVar6 = rkisp_next_read(iVar18,iVar23,1);
          uVar7 = rkisp_next_read(iVar18,iVar22,1);
          uVar8 = rkisp_next_read(iVar18,iVar21,1);
          seq_printf(param_1,DAT_0001dff0,iVar14,uVar12,uVar24,uVar25,uVar4,uVar5,uVar6,uVar7,uVar8)
          ;
        }
        iVar14 = iVar14 + 0x10;
      } while (iVar14 != 0x5700);
    }
  }
  return 0;
}



/* ===== rkisp_proc_init @ 0001dff4 size=78 ===== */

undefined4 rkisp_proc_init(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  memset((void *)(param_1 + 0x96c0),0,0x1c);
  iVar1 = proc_create_data(param_1 + 0x10,0,0,DAT_0001e044,param_1,param_2,param_3);
  *(int *)(param_1 + 0x96c0) = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    __init_waitqueue_head(param_1 + 0x96c4,DAT_0001e04c,DAT_0001e048);
    __init_waitqueue_head(param_1 + 0x96cc,DAT_0001e050,DAT_0001e048);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== rkisp_proc_cleanup @ 0001e054 size=30 ===== */

void rkisp_proc_cleanup(int param_1)

{
  if (*(int *)(param_1 + 0x96c0) != 0) {
    remove_proc_entry(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 0x96c0) = 0;
  return;
}



/* ===== list_del @ 0001e074 size=22 ===== */

void list_del(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = (int *)param_1[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *param_1 = 0x100;
  param_1[1] = 0x122;
  return;
}



/* ===== calc_burst_len @ 0001e08a size=184 ===== */

uint calc_burst_len(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_1 + 8);
  uVar2 = *(int *)(param_1 + 0x530) * *(int *)(param_1 + 0x544);
  uVar1 = 0;
  if (*(int *)(param_1 + 0x568) != 0) {
    uVar1 = uVar2 + *(int *)(param_1 + 0x554);
  }
  uVar2 = uVar2 | uVar1;
  if ((uVar2 & 0xff) == 0) {
    uVar6 = 0xa0000;
  }
  else if ((uVar2 & 0x7f) == 0) {
    uVar6 = 0x50000;
  }
  else {
    uVar6 = 0;
  }
  iVar3 = param_1;
  if ((uVar2 & 0x3f) != 0) {
    if (uVar1 == 0) {
      param_2 = 0x40;
    }
    else {
      param_2 = 0x100;
    }
    iVar3 = *(int *)(param_1 + 0x534);
    printk(DAT_0001e144,iVar5 + 0xa8,*(undefined4 *)(param_1 + 0x52c),*(int *)(param_1 + 0x530),
           iVar3,param_2,param_3);
  }
  *(uint *)(param_1 + 0x67c) = uVar6;
  uVar1 = *(uint *)(iVar5 + 0x1514);
  if (*(uint *)(iVar5 + 0x1bd4) <= *(uint *)(iVar5 + 0x1514)) {
    uVar1 = *(uint *)(iVar5 + 0x1bd4);
  }
  if (uVar6 <= uVar1) {
    uVar1 = uVar6;
  }
  if ((int)((uint)*(byte *)(param_1 + 4) << 0x1f) < 0) {
    if (*(int *)(param_1 + 0x52c) == 0) {
      *(undefined4 *)(param_1 + 0x67c) = 0xa0000;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x52c) << 0x1a;
      *(undefined4 *)(param_1 + 0x67c) = 0;
      if (iVar4 != 0) {
        printk(DAT_0001e148,iVar5 + 0xa8,0x40,iVar4,iVar3,param_2,param_3);
      }
    }
    if (*(uint *)(param_1 + 0x67c) <= uVar1) {
      uVar1 = *(uint *)(param_1 + 0x67c);
    }
    *(uint *)(param_1 + 0x67c) = uVar1;
  }
  return uVar1;
}



/* ===== rkisp_queue_setup @ 0001e14c size=146 ===== */

undefined4 rkisp_queue_setup(int *param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  piVar3 = (int *)param_1[10];
  iVar5 = piVar3[2];
  *param_3 = (uint)*(byte *)((int)piVar3 + 0x51a);
  for (uVar4 = 0; uVar4 < *(byte *)((int)piVar3 + 0x51a); uVar4 = uVar4 + 1) {
    iVar1 = *(int *)(iVar5 + 0x5ff0);
    iVar2 = piVar3[0x14c];
    if ((iVar1 != 0) && (*piVar3 == 0)) {
      iVar2 = iVar1;
    }
    iVar1 = piVar3[uVar4 * 5 + 0x150];
    if ((char)piVar3[0x146] == '\0') {
      iVar1 = __aeabi_uidiv();
      iVar1 = (iVar2 + 0xfU & 0xfffffff0) * iVar1;
    }
    param_4[uVar4] = iVar1;
  }
  if (0 < *DAT_0001e1e0) {
    printk(DAT_0001e1e4,iVar5 + 0xa8,piVar3 + 0x11e,*(undefined4 *)(DAT_0001e1e8 + *param_1 * 4),
           *param_2,*param_4,param_3);
  }
  return 0;
}



/* ===== stream_self_update @ 0001e1ec size=56 ===== */

void stream_self_update(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  switch(*param_1) {
  case 0:
    uVar1 = 0x10;
    break;
  case 1:
    uVar1 = 0x20;
    break;
  default:
    goto switchD_0001e1f4_caseD_2;
  case 7:
    uVar1 = 0x40;
    break;
  case 8:
    uVar1 = 0x2000000;
    break;
  case 9:
    uVar1 = 0x4000000;
  }
  rkisp_set_bits(param_1[2],0x1800,DAT_0001e230,uVar1,1,param_2,param_3);
switchD_0001e1f4_caseD_2:
  return;
}



/* ===== rkisp_stream_stop @ 0001e234 size=346 ===== */

void rkisp_stream_stop(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined1 auStack_2c [24];
  
  uVar3 = param_1[2];
  bVar4 = *(byte *)(*(int *)(uVar3 + 0x94) + 0x7bd);
  *(undefined1 *)((int)param_1 + 0x669) = 1;
  *(undefined1 *)((int)param_1 + 0x66f) = 0;
  bVar4 = bVar4 ^ 1;
  if ((*(code **)(param_1[0x17f] + 0xc) != (code *)0x0) &&
     (*(char *)(*(int *)(uVar3 + 0x94) + 0x7b9) != '\0')) {
    (**(code **)(param_1[0x17f] + 0xc))();
  }
  if (*(int *)(uVar3 + 0x9b1c) - 4U < 3) {
    disableIRQinterrupts();
    if ((*(int *)(*(int *)(uVar3 + 0x94) + 0xc0) != *(int *)(uVar3 + 0x9acc)) ||
       (*(char *)(*(int *)(uVar3 + 0x94) + 0x7b8) != '\0')) {
      if (*(code **)(param_1[0x17f] + 0xc) != (code *)0x0) {
        (**(code **)(param_1[0x17f] + 0xc))(param_1);
      }
      bVar4 = 0;
      if (*(char *)(*(int *)(uVar3 + 0x94) + 0x7b9) != '\0') {
        bVar4 = 0;
        stream_self_update(param_1);
      }
    }
    if ((*(int *)(uVar3 + 0x5fe4) == 1) && (bVar4 == 0)) {
      *(undefined4 *)(uVar3 + 0x99e0) = 0x100;
    }
  }
  if (((bVar4 != 0) && (iVar1 = (**(code **)(param_1[0x17f] + 0x14))(param_1), iVar1 == 0)) &&
     (_cond_resched(), (char)param_1[0x19a] != '\0')) {
    init_wait_entry(auStack_2c,0);
    iVar1 = 0x96;
    while (prepare_to_wait_event(param_1 + 0x19d,auStack_2c,2), (char)param_1[0x19a] != '\0') {
      if (iVar1 == 0) goto LAB_0001e30a;
      iVar1 = schedule_timeout(iVar1);
    }
    if (iVar1 == 0) {
      iVar1 = 1;
    }
LAB_0001e30a:
    finish_wait(param_1 + 0x19d,auStack_2c);
    if (iVar1 == 0) {
      printk(DAT_0001e394,uVar3 + 0xa8,DAT_0001e390,*param_1);
    }
  }
  *(undefined2 *)(param_1 + 0x19a) = 0;
  if (*(code **)(param_1[0x17f] + 0xc) != (code *)0x0) {
    (**(code **)(param_1[0x17f] + 0xc))(param_1);
  }
  if ((*param_1 < 2) || (*param_1 == 7)) {
    rkisp_disable_dcrop(param_1,1);
    rkisp_disable_rsz(param_1,1);
  }
  if (*param_1 < 8) {
    uVar2 = (uint)*(char *)(DAT_0001e390 + *param_1 + 0x12);
  }
  else {
    uVar2 = 0;
  }
  *(uint *)(uVar3 + 0x9ad8) = *(uint *)(uVar3 + 0x9ad8) & ~uVar2;
  param_1[0x19f] = 0xa0000;
  *(byte *)(param_1 + 1) = (byte)param_1[1] & 0xfe;
  return;
}



/* ===== mp_enable_mi @ 0001e398 size=88 ===== */

void mp_enable_mi(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x6a0);
  if (*(char *)(param_1 + 0x518) == '\x02') {
    uVar1 = 8;
  }
  else {
    uVar1 = 1;
  }
  rkisp_set_bits(iVar3,0x1400,9,uVar1,0,param_2,param_3);
  iVar4 = iVar4 * 0x6c0;
  iVar2 = iVar3 + iVar4;
  if ((*(char *)(iVar2 + 0x1500) != '\0') && (*(char *)(iVar2 + 0x1507) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001e3ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(iVar2 + 0x1494) + 8))(iVar4 + 0xe98 + iVar3);
    return;
  }
  return;
}



/* ===== sp_enable_mi @ 0001e3f0 size=54 ===== */

void sp_enable_mi(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x518) == '\x01') {
    uVar1 = 0x302;
    if (*(int *)(*(int *)(param_1 + 8) + 0xe64) != 1) {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 2;
  }
  rkisp_set_bits(*(int *)(param_1 + 8),0x1400,0x300,uVar1,0,param_2,param_3);
  return;
}



/* ===== rkisp_stream_config_rsz @ 0001e426 size=154 ===== */

undefined4 rkisp_stream_config_rsz(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [8];
  uint local_50;
  int local_4c;
  undefined1 auStack_48 [8];
  uint local_40;
  int iStack_3c;
  undefined1 auStack_38 [8];
  uint local_30;
  int iStack_2c;
  undefined1 auStack_28 [8];
  uint local_20;
  int local_1c;
  
  piVar1 = DAT_0001e4c0;
  if (*(char *)(param_1[2] + 0xe48) != '\x02') {
    local_30 = param_1[0x14b];
    local_50 = param_1[0x17d];
    iVar2 = param_1[0x14c];
    local_4c = param_1[0x17e];
    local_20 = local_30 >> 1;
    local_40 = local_50 >> 1;
    iStack_3c = local_4c;
    iStack_2c = iVar2;
    local_1c = iVar2;
    if ((local_40 != local_20) || (iVar2 != local_4c)) {
      if (0 < *DAT_0001e4c0) {
        iVar3 = param_1[2] + 0xa8;
        printk(DAT_0001e4c4,iVar3,*param_1,local_50,local_4c,local_30,iVar2);
        if (0 < *piVar1) {
          printk(DAT_0001e4c8,iVar3,local_40,iStack_3c,local_20,local_1c,iVar2);
        }
      }
      rkisp_config_rsz(param_1,auStack_58,auStack_48,auStack_38,auStack_28,param_2);
      return 0;
    }
  }
  rkisp_disable_rsz(param_1,param_2);
  return 0;
}



/* ===== mp_is_stream_stopped @ 0001e4cc size=44 ===== */

bool mp_is_stream_stopped(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0x1474;
  if (*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x94) + 0x7b9) == '\0') {
    uVar2 = 0x1400;
    uVar3 = 9;
  }
  else {
    uVar3 = 0x90000;
  }
  uVar1 = rkisp_read(*(int *)(param_1 + 8),uVar2);
  return (uVar1 & uVar3) == 0;
}



/* ===== mpds_is_stream_stopped @ 0001e4f8 size=72 ===== */

undefined4 mpds_is_stream_stopped(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = 0x1810;
  iVar3 = *(int *)(param_1 + 8);
  if (*(char *)(*(int *)(iVar3 + 0x94) + 0x7b9) == '\0') {
    uVar2 = 0x16a0;
    uVar4 = 1;
  }
  else {
    uVar4 = 0x10000000;
  }
  uVar1 = rkisp_read(iVar3,uVar2);
  if ((*(char *)(iVar3 + 0x1507) == '\0') &&
     (iVar3 = mp_is_stream_stopped(iVar3 + 0xe98), iVar3 != 0)) {
    uVar2 = 1;
  }
  else if ((uVar4 & uVar1) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== bp_is_stream_stopped @ 0001e540 size=44 ===== */

bool bp_is_stream_stopped(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0x1810;
  if (*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x94) + 0x7b9) == '\0') {
    uVar2 = 0x1600;
    uVar3 = 1;
  }
  else {
    uVar3 = 0x100000;
  }
  uVar1 = rkisp_read(*(int *)(param_1 + 8),uVar2);
  return (uVar1 & uVar3) == 0;
}



/* ===== bpds_is_stream_stopped @ 0001e56c size=74 ===== */

undefined4 bpds_is_stream_stopped(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = 0x1810;
  iVar3 = *(int *)(param_1 + 8);
  if (*(char *)(*(int *)(iVar3 + 0x94) + 0x7b9) == '\0') {
    uVar2 = 0x16f0;
    uVar4 = 1;
  }
  else {
    uVar4 = 0x20000000;
  }
  uVar1 = rkisp_read(iVar3,uVar2);
  if ((*(char *)(iVar3 + 0x4447) == '\0') && (iVar3 = bp_is_stream_stopped(), iVar3 != 0)) {
    uVar2 = 1;
  }
  else if ((uVar4 & uVar1) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== sp_is_stream_stopped @ 0001e5b6 size=44 ===== */

bool sp_is_stream_stopped(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0x1474;
  if (*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x94) + 0x7b9) == '\0') {
    uVar2 = 0x1400;
    uVar3 = 2;
  }
  else {
    uVar3 = 0x20000;
  }
  uVar1 = rkisp_read(*(int *)(param_1 + 8),uVar2);
  return (uVar1 & uVar3) == 0;
}



/* ===== rkisp_create_dummy_buf @ 0001e5e2 size=102 ===== */

int rkisp_create_dummy_buf(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[2];
  iVar2 = 0;
  if (*(int *)(iVar3 + 0x5ff0) != 0) {
    if (*param_1 == 0) {
      uVar1 = *(int *)(iVar3 + 0x5fec) * *(int *)(iVar3 + 0x5ff0);
      *(undefined1 *)((int)param_1 + 0x639) = 1;
      iVar2 = uVar1 * 2;
      param_1[0x18c] = iVar2;
      if (param_1[0x148] == 0x100) {
        param_1[0x18c] = iVar2 - ((uVar1 & 0x7fffffff) >> 1);
      }
      iVar2 = rkisp_alloc_buffer(iVar3,param_1 + 0x185,param_3,1,param_4);
      if ((iVar2 == 0) && (iVar2 = rkisp_dvbm_init(param_1), iVar2 < 0)) {
        rkisp_free_buffer(iVar3,param_1 + 0x185);
      }
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* ===== mp_set_wrap @ 0001e648 size=112 ===== */

int mp_set_wrap(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  *(undefined4 *)(iVar3 + 0x5ff0) = param_2;
  if (((*(char *)(iVar3 + 0xe038) != '\0') && (*(char *)(param_1 + 0x668) != '\0')) &&
     (*(int *)(param_1 + 0x628) == 0)) {
    iVar1 = rkisp_create_dummy_buf();
    if (iVar1 != 0) {
      return iVar1;
    }
    (*(code *)**(undefined4 **)(param_1 + 0x5fc))(param_1);
    if (*(char *)(param_1 + 0x66f) != '\0') {
      (**(code **)(*(int *)(param_1 + 0x5fc) + 8))(param_1);
      uVar2 = rkisp_read(iVar3,0x64c,1);
      if ((uVar2 & 0x3fff) == 0) {
        stream_self_update(param_1);
      }
      *(undefined1 *)(param_1 + 0x66f) = 0;
      return 0;
    }
  }
  return 0;
}



/* ===== mp_disable_mi @ 0001e6b8 size=90 ===== */

void mp_disable_mi(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x6a0);
  rkisp_set_bits(iVar2,0x1814,0,1,0,param_2,param_3);
  rkisp_clear_bits(*(undefined4 *)(param_1 + 8),0x1400,9,0);
  if (*(char *)(param_1 + 0x66f) == '\0') {
    iVar3 = iVar3 * 0x6c0;
    iVar1 = iVar2 + iVar3;
    if (*(char *)(iVar1 + 0x1500) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001e70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)(iVar1 + 0x1494) + 0xc))(iVar3 + 0xe98 + iVar2);
      return;
    }
  }
  return;
}



/* ===== ds_disable_mi @ 0001e712 size=18 ===== */

void ds_disable_mi(int param_1)

{
  rkisp_clear_bits(*(undefined4 *)(param_1 + 8),*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xbc),1,
                   0);
  return;
}



/* ===== bp_disable_mi @ 0001e724 size=68 ===== */

void bp_disable_mi(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x6a0);
  rkisp_clear_bits(iVar2,0x1600,1,0);
  if (*(char *)(param_1 + 0x66f) == '\0') {
    iVar3 = iVar3 * 0x6c0;
    iVar1 = iVar2 + iVar3;
    if (*(char *)(iVar1 + 0x1500) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001e764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(int *)(iVar1 + 0x1494) + 0xc))(iVar3 + 0xe98 + iVar2);
      return;
    }
  }
  return;
}



/* ===== sp_disable_mi @ 0001e768 size=14 ===== */

void sp_disable_mi(int param_1)

{
  rkisp_clear_bits(*(undefined4 *)(param_1 + 8),0x1400,2,0);
  return;
}



/* ===== mi_frame_end @ 0001e776 size=432 ===== */

undefined4 mi_frame_end(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*param_1 == 0xb) {
    return 0;
  }
  iVar4 = param_1[2];
  if (*(char *)((int)param_1 + 0x66d) != '\0') {
    *(undefined1 *)((int)param_1 + 0x66d) = 0;
    if (*(char *)(iVar4 + 0x5ff5) == '\0') {
      rkisp_clear_bits(iVar4,0x400,0x20,0,param_1,param_2,param_3);
    }
    else {
      rkisp_set_bits(iVar4,0x400,0,0x20,0);
    }
    switch(*param_1) {
    case 1:
      uVar5 = 2;
      break;
    default:
      if (*(int *)(iVar4 + 0x5ff0) != 0) {
        *(undefined1 *)((int)param_1 + 0x66e) = 0;
        printk(DAT_0001e930,iVar4 + 0xa8);
        goto LAB_0001e810;
      }
      uVar5 = 1;
      break;
    case 7:
      uVar5 = 4;
      break;
    case 8:
      uVar5 = 0x10;
      break;
    case 9:
      uVar5 = 0x20;
    }
    uVar1 = rkisp_read_reg_cache(iVar4,0x1818);
    if (*(char *)((int)param_1 + 0x66e) == '\0') {
      uVar1 = uVar1 & ~uVar5;
    }
    else {
      uVar1 = uVar1 | uVar5;
    }
    rkisp_write(iVar4,0x1818,uVar1,0);
  }
LAB_0001e810:
  iVar3 = param_1[0x183];
  if (iVar3 != 0) {
    if (*(int *)(iVar4 + 0x9ad0) == 0) {
      for (uVar5 = 0; uVar5 < *(byte *)((int)param_1 + 0x51a); uVar5 = uVar5 + 1) {
        if (uVar5 < *(uint *)(iVar3 + 0x10)) {
          *(int *)(iVar3 + 0x54 + uVar5 * 0x20) = param_1[uVar5 * 5 + 0x150];
        }
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        rkisp_rockit_buf_done(param_1);
      }
      else if ((*(char *)(iVar4 + 0x5f40) == '\0') || (*(int *)(iVar4 + 0x5f78) != *param_1)) {
        rkisp_stream_buf_done(param_1,param_1[0x183]);
      }
      else {
        disableIRQinterrupts();
        iVar3 = param_1[0x183];
        piVar2 = *(int **)(iVar4 + 0x5fc4);
        *(int *)(iVar4 + 0x5fc4) = iVar3 + 0x280;
        *(int *)(iVar3 + 0x280) = iVar4 + 0x5fc0;
        *(int **)(iVar3 + 0x284) = piVar2;
        *piVar2 = iVar3 + 0x280;
        iVar3 = completion_done(iVar4 + 0x5fb4);
        if (iVar3 == 0) {
          complete(iVar4 + 0x5fb4);
        }
      }
    }
    else {
      disableIRQinterrupts();
      iVar4 = param_1[0x183];
      piVar2 = (int *)param_1[0x182];
      param_1[0x182] = iVar4 + 0x280;
      *(int **)(iVar4 + 0x280) = param_1 + 0x181;
      *(int **)(iVar4 + 0x284) = piVar2;
      *piVar2 = iVar4 + 0x280;
    }
  }
  disableIRQinterrupts();
  param_1[0x183] = param_1[0x184];
  param_1[0x184] = 0;
  if ((int *)param_1[0x181] != param_1 + 0x181) {
    param_1[0x184] = param_1[0x181] + -0x280;
    list_del();
  }
  (**(code **)(param_1[0x17f] + 0x18))(param_1);
  return 0;
}



/* ===== update_mi @ 0001e934 size=578 ===== */

void update_mi(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r2;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar7 = param_1[2];
  uVar9 = *param_1;
  if (*(int *)(uVar7 + 0x97a4) == 0x80) {
    puVar5 = (uint *)(*(int *)(uVar7 + 0x94) + 0x750);
  }
  else {
    puVar5 = param_1 + 0x185;
  }
  if (param_1[0x184] == 0) {
    if (puVar5[5] == 0) {
      if (*(char *)((int)param_1 + 0x671) == '\0') {
        if (*(char *)((int)param_1 + 0x66f) == '\0') {
          *(undefined1 *)((int)param_1 + 0x66f) = 1;
          (**(code **)(param_1[0x17f] + 0xc))();
          if (param_1[0x183] == 0) {
            stream_self_update(param_1);
          }
        }
      }
      else {
        iVar4 = *(int *)(uVar7 + (*(int *)(uVar7 + 0x9ac8) + 0x9a7) * 0x10 + 5);
        rkisp_write(uVar7,*(undefined4 *)(param_1[0x180] + 0x9c),iVar4,0,param_1,param_2,param_3,
                    param_4);
        rkisp_write(uVar7,*(undefined4 *)(param_1[0x180] + 0xa0),
                    param_1[0x14c] * *(int *)(uVar7 + 0x9a65) + iVar4,0);
        if (*(uint *)(uVar7 + 0x9ac8) < *(int *)(uVar7 + 0x9a6d) - 1U) {
          *(uint *)(uVar7 + 0x9ac8) = *(uint *)(uVar7 + 0x9ac8) + 1;
        }
        *(undefined1 *)((int)param_1 + 0x672) = 1;
      }
    }
    else {
      uVar8 = puVar5[3];
      rkisp_write(uVar7,*(undefined4 *)(param_1[0x180] + 0x9c),uVar8,0,param_1,param_2,param_3,
                  param_4);
      uVar6 = *(uint *)(uVar7 + 0x97a4);
      bVar10 = uVar6 == 0x70;
      iVar4 = extraout_r2;
      if (bVar10) {
        iVar4 = 0x5ff0;
        uVar6 = param_1[0x151];
      }
      if (bVar10) {
        uVar8 = *(int *)(uVar7 + iVar4) * uVar6 + uVar8;
      }
      rkisp_write(uVar7,*(undefined4 *)(param_1[0x180] + 0xa0),uVar8,0);
      if (uVar9 < 2) {
        rkisp_write(uVar7,*(undefined4 *)(param_1[0x180] + 0xa4),uVar8,0);
      }
    }
    goto LAB_0001e9e2;
  }
  rkisp_write(uVar7,*(undefined4 *)(param_1[0x180] + 0x9c),*(undefined4 *)(param_1[0x184] + 0x2a8),0
              ,param_1,param_2,param_3,param_4);
  rkisp_write(uVar7,*(undefined4 *)(param_1[0x180] + 0xa0),*(undefined4 *)(param_1[0x184] + 0x2ac),0
             );
  if (uVar9 < 2) {
    rkisp_write(uVar7,*(undefined4 *)(param_1[0x180] + 0xa4),*(undefined4 *)(param_1[0x184] + 0x2b0)
                ,0);
  }
  if (*(char *)((int)param_1 + 0x66f) != '\0') {
    if (*(char *)(*(int *)(uVar7 + 0x94) + 0x7b9) != '\0') {
      iVar4 = (**(code **)(param_1[0x17f] + 0x14))(param_1);
      if ((iVar4 != 0) && (uVar9 = rkisp_read(uVar7,0x64c,1), (uVar9 & 0x3fff) == 0)) {
        (**(code **)(param_1[0x17f] + 8))(param_1);
        *(undefined1 *)((int)param_1 + 0x66f) = 0;
        stream_self_update(param_1);
        if (param_1[0x183] == 0) {
          uVar9 = param_1[0x184];
          param_1[0x184] = 0;
          param_1[0x183] = uVar9;
        }
      }
      if (*(char *)((int)param_1 + 0x66f) == '\0') goto LAB_0001e9cc;
    }
    (**(code **)(param_1[0x17f] + 8))(param_1);
    *(undefined1 *)((int)param_1 + 0x66f) = 0;
  }
LAB_0001e9cc:
  if (*(char *)(*(int *)(uVar7 + 0x94) + 0x7b9) == '\0') {
    uVar9 = param_1[0x184];
    param_1[0x184] = 0;
    param_1[0x183] = uVar9;
  }
LAB_0001e9e2:
  if (1 < *DAT_0001eb78) {
    uVar9 = *param_1;
    uVar1 = rkisp_read(uVar7,*(undefined4 *)(param_1[0x180] + 0x9c),0);
    uVar2 = rkisp_read(uVar7,*(undefined4 *)(param_1[0x180] + 0xa0),0);
    uVar3 = rkisp_read(uVar7,*(undefined4 *)(param_1[0x180] + 0xb4),1);
    printk(DAT_0001eb80,uVar7 + 0xa8,DAT_0001eb7c,uVar9,uVar1,uVar2,uVar3);
  }
  return;
}



/* ===== ds_enable_mi @ 0001eb84 size=30 ===== */

void ds_enable_mi(int param_1)

{
  rkisp_write(*(undefined4 *)(param_1 + 8),*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xbc),
              *(uint *)(param_1 + 0x51c) | *(uint *)(param_1 + 0x520) | 3,0);
  return;
}



/* ===== bp_enable_mi @ 0001eba2 size=80 ===== */

void bp_enable_mi(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x6a0);
  rkisp_write(iVar2,0x1600,*(uint *)(param_1 + 0x51c) | *(uint *)(param_1 + 0x520) | 3,0);
  iVar3 = iVar3 * 0x6c0;
  iVar1 = iVar2 + iVar3;
  if ((*(char *)(iVar1 + 0x1500) != '\0') && (*(char *)(iVar1 + 0x1507) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001ebee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(iVar1 + 0x1494) + 8))(iVar3 + 0xe98 + iVar2);
    return;
  }
  return;
}



/* ===== mi_frame_end_int_enable @ 0001ebf2 size=58 ===== */

void mi_frame_end_int_enable(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x94);
  piVar1 = (int *)(iVar2 + 0x10);
  if (*(char *)(iVar2 + 0x7be) != '\0') {
    piVar1 = (int *)(iVar2 + 0x14);
  }
  iVar2 = *piVar1;
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  uVar3 = 0;
  if (*(int *)(param_1 + 0x600) != 0) {
    uVar3 = *(uint *)(*(int *)(param_1 + 0x600) + 0x18);
  }
  DataSynchronizationBarrier(0xf);
  *(uint *)(iVar2 + 0x14f8) = uVar3 | *(uint *)(iVar2 + 0x14f8);
  return;
}



/* ===== mp_config_mi @ 0001ec2c size=458 ===== */

undefined4 mp_config_mi(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(iVar3 + 0x5ff0);
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_1 + 0x530);
  }
  else {
    rkisp_clear_bits(iVar3,0x1814,1,0,param_1,param_2,param_3);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x544);
  if (*(int *)(iVar3 + 0x97a4) == 0x70) {
    rkisp_write(iVar3,0x15e8,uVar5,0);
  }
  iVar1 = __aeabi_uidiv(uVar5,*(byte *)(param_1 + 0x524) + 7 >> 3);
  if (*(int *)(iVar3 + 0x97a4) == 0x80) {
    rkisp_write(iVar3,0x15e8,iVar1,0);
  }
  rkisp_write(iVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xc0),iVar1 * iVar4,0);
  rkisp_write(iVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x90),
              iVar4 * *(int *)(param_1 + 0x544),0);
  uVar2 = *(uint *)(param_1 + 0x554);
  if (*(int *)(iVar3 + 0x5ff0) != 0) {
    uVar2 = (uint)(iVar4 * *(int *)(param_1 + 0x544)) >> 1;
  }
  rkisp_write(iVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x94),uVar2,0);
  uVar2 = *(uint *)(param_1 + 0x568);
  if (*(int *)(iVar3 + 0x5ff0) != 0) {
    uVar2 = (uint)(*(int *)(param_1 + 0x544) * iVar4) >> 1;
  }
  rkisp_write(iVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x98),uVar2,0);
  rkisp_set_bits(iVar3,0x1548,1,*(char *)(param_1 + 0x51b) != '\0',0);
  uVar2 = rkisp_read_reg_cache(iVar3,0x18c0);
  iVar4 = *(int *)(param_1 + 0x534);
  if ((((iVar4 == DAT_0001edf8) || (iVar4 == DAT_0001edf8 + 0xff0000)) ||
      (iVar4 == DAT_0001edf8 + -0x900)) ||
     ((iVar4 == DAT_0001edf8 + 0xfef700 || (iVar4 == DAT_0001edf8 + 0xfeff0b)))) {
    uVar2 = uVar2 & 0x7ffffdff | 0x100;
  }
  else {
    uVar2 = uVar2 & 0x7ffffdff | 0x300;
  }
  rkisp_write(iVar3,0x18c0,uVar2,0);
  rkisp_write(iVar3,0x15f8,*(undefined4 *)(param_1 + 0x520),0);
  uVar2 = calc_burst_len(param_1);
  rkisp_set_bits(iVar3,0x1400,0xcf0000,*(uint *)(param_1 + 0x51c) | uVar2 | 0x302000,0);
  mi_frame_end_int_enable(param_1);
  mi_frame_end(param_1);
  rkisp_write(iVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xa8),0,0);
  rkisp_write(iVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xac),0,0);
  rkisp_write(iVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xb0),0,0);
  return 0;
}



/* ===== ds_config_mi @ 0001edfc size=184 ===== */

undefined4 ds_config_mi(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x544);
  rkisp_write(uVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xb8),uVar2,0,param_1,param_2);
  iVar1 = __aeabi_uidiv(uVar2,*(byte *)(param_1 + 0x524) + 7 >> 3);
  rkisp_write(uVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xc0),
              iVar1 * *(int *)(param_1 + 0x530),0);
  rkisp_write(uVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x90),
              *(int *)(param_1 + 0x530) * *(int *)(param_1 + 0x544),0);
  rkisp_write(uVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x94),
              *(undefined4 *)(param_1 + 0x554),0);
  rkisp_set_bits(uVar3,0x1400,0,0x300000,0);
  mi_frame_end_int_enable(param_1);
  mi_frame_end(param_1);
  rkisp_write(uVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xa8),0,0);
  rkisp_write(uVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xac),0,0);
  return 0;
}



/* ===== bp_config_mi @ 0001eeb4 size=238 ===== */

undefined4 bp_config_mi(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 0x544);
  rkisp_write(uVar3,0x1614,uVar4,0,param_1,param_2);
  iVar1 = __aeabi_uidiv(uVar4,*(byte *)(param_1 + 0x524) + 7 >> 3);
  rkisp_write(uVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xc0),
              iVar1 * *(int *)(param_1 + 0x530),0);
  rkisp_write(uVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x90),
              *(int *)(param_1 + 0x530) * *(int *)(param_1 + 0x544),0);
  rkisp_write(uVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x94),
              *(undefined4 *)(param_1 + 0x554),0);
  uVar2 = rkisp_read_reg_cache(uVar3,0x18c0);
  if ((*(int *)(param_1 + 0x534) == DAT_0001efa4) ||
     (*(int *)(param_1 + 0x534) == DAT_0001efa4 + -0x900)) {
    uVar2 = uVar2 & 0x7ffff7ff | 0x100;
  }
  else {
    uVar2 = uVar2 & 0x7ffff7ff | 0x900;
  }
  rkisp_write(uVar3,0x18c0,uVar2,0);
  rkisp_set_bits(uVar3,0x1400,0,0x300000,0);
  mi_frame_end_int_enable(param_1);
  mi_frame_end(param_1);
  rkisp_write(uVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xa8),0,0);
  rkisp_write(uVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xac),0,0);
  return 0;
}



/* ===== sp_config_mi @ 0001efa8 size=382 ===== */

undefined4 sp_config_mi(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 8);
  if (*(int *)(iVar3 + 0xe44) == 0x2008) {
    iVar5 = *(int *)(param_1 + 0x6a8);
    if (*(int *)(param_1 + 0x534) == DAT_0001f12c) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0x8000000;
    }
    rkisp_write(iVar3,0x144c,iVar5,0,param_1,param_2,param_3);
    rkisp_write(iVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xc0),
                iVar5 * *(int *)(param_1 + 0x530),0);
    rkisp_write(iVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x90),
                *(int *)(param_1 + 0x530) * *(int *)(param_1 + 0x544),0);
    rkisp_write(iVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x94),
                *(undefined4 *)(param_1 + 0x554),0);
    rkisp_write(iVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0x98),
                *(undefined4 *)(param_1 + 0x568),0);
    uVar1 = 0;
    if (*(char *)(param_1 + 0x51b) != '\0') {
      uVar1 = 2;
    }
    rkisp_set_bits(iVar3,0x1548,2,uVar1,0);
    uVar2 = rkisp_read_reg_cache(iVar3,0x18c0);
    iVar5 = *(int *)(param_1 + 0x534);
    if ((((iVar5 == DAT_0001f130) || (iVar5 == DAT_0001f130 + 0xff0000)) ||
        (iVar5 == DAT_0001f130 + -0x900)) ||
       ((iVar5 == DAT_0001f130 + 0xfef700 || (iVar5 == DAT_0001f130 + 0xfeff0b)))) {
      uVar2 = uVar2 & 0x7ffffbff | 0x100;
    }
    else {
      uVar2 = uVar2 & 0x7ffffbff | 0x500;
    }
    rkisp_write(iVar3,0x18c0,uVar2,0);
    uVar2 = calc_burst_len(param_1);
    uVar1 = 0;
    rkisp_set_bits(iVar3,0x1400,DAT_0001f134,
                   *(uint *)(param_1 + 0x51c) | *(uint *)(param_1 + 0x520) | uVar2 | uVar4 |
                   0x304000,0);
    mi_frame_end_int_enable(param_1);
    mi_frame_end(param_1);
    rkisp_write(iVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xa8),0,0);
    rkisp_write(iVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xac),0,0);
    rkisp_write(iVar3,*(undefined4 *)(*(int *)(param_1 + 0x600) + 0xb0),0,0);
  }
  else {
    printk(DAT_0001f128,iVar3 + 0xa8);
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



/* ===== luma_frame_readout @ 0001f138 size=306 ===== */

void luma_frame_readout(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte in_Q;
  undefined4 local_24;
  undefined8 local_20;
  
  local_20._0_4_ = 0;
  local_20._4_4_ = 0;
  local_20 = 0;
  *(undefined1 *)(param_1 + 0x66a) = 0;
  iVar5 = *(int *)(param_1 + 8);
  if (*(char *)(param_1 + 0x669) == '\0') {
    disableIRQinterrupts();
    if ((*(int *)(param_1 + 0x60c) == 0) && (*(int *)(param_1 + 0x604) != param_1 + 0x604)) {
      *(int *)(param_1 + 0x60c) = *(int *)(param_1 + 0x604) + -0x280;
      list_del(*(int *)(param_1 + 0x604),(uint)(in_Q | 0xc) << 0x1b);
    }
    uVar2 = DAT_0001f270;
    if (*(int *)(param_1 + 0x60c) == 0) {
LAB_0001f192:
      printk(uVar2,iVar5 + 0xa8,DAT_0001f26c);
      return;
    }
    rkisp_write(iVar5,0x690,1);
    iVar3 = 9;
    rkisp_dmarx_get_frame(iVar5,&local_24,0,&local_20,1);
    do {
      iVar3 = iVar3 + -1;
      uVar2 = DAT_0001f274;
      if (iVar3 == 0) goto LAB_0001f192;
      iVar1 = rkisp_read(iVar5,0x690,1);
    } while (-1 < iVar1);
    uVar4 = *(int *)(param_1 + 0x52c) * *(int *)(param_1 + 0x530);
    puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x60c) + 0x288);
    puVar7 = (undefined4 *)((uVar4 & 0xfffffffc) + (int)puVar6);
    for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
      uVar2 = rkisp_read(iVar5,0x694,1);
      *puVar6 = uVar2;
    }
    if (local_20._4_4_ == 0 && (int)local_20 == 0) {
      local_20 = ktime_get();
    }
    *(undefined8 *)(*(int *)(param_1 + 0x60c) + 0x18) = local_20;
    *(undefined4 *)(*(int *)(param_1 + 0x60c) + 0x170) = local_24;
    if (*(int *)(*(int *)(param_1 + 0x60c) + 0x10) != 0) {
      *(uint *)(*(int *)(param_1 + 0x60c) + 0x54) = uVar4 & 0xfffffffc;
    }
    vb2_buffer_done(*(undefined4 *)(param_1 + 0x60c),5);
    *(undefined4 *)(param_1 + 0x60c) = 0;
  }
  *(undefined1 *)(param_1 + 0x66a) = 1;
  if (*(char *)(param_1 + 0x669) != '\0') {
    *(undefined2 *)(param_1 + 0x668) = 0;
    __wake_up(param_1 + 0x674,3);
  }
  return;
}



/* ===== rkisp_buf_queue @ 0001f278 size=278 ===== */

void rkisp_buf_queue(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  piVar3 = param_1 + 0xaa;
  piVar4 = *(int **)(*param_1 + 0x28);
  iVar7 = piVar4[2];
  memset(piVar3,0,0x20);
  piVar8 = param_1 + 0xa2;
  for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)((int)piVar4 + 0x51a); iVar5 = iVar5 + 1) {
    iVar2 = vb2_plane_vaddr(param_1,iVar5);
    *piVar8 = iVar2;
    if (*(char *)(*(int *)(piVar4[2] + 0x94) + 0x7b6) == '\0') {
      piVar1 = (int *)vb2_plane_cookie(param_1,iVar5);
      iVar2 = *piVar1;
    }
    else {
      piVar1 = (int *)vb2_plane_cookie(param_1,iVar5);
      iVar2 = *(int *)(*piVar1 + 0xc);
    }
    piVar8[8] = iVar2;
    piVar8 = piVar8 + 1;
  }
  if (*(byte *)((int)piVar4 + 0x51a) == 1) {
    for (iVar5 = 0; iVar5 < (int)(*(byte *)((int)piVar4 + 0x519) - 1); iVar5 = iVar5 + 1) {
      iVar2 = piVar4[0x14c];
      if ((*(int *)(iVar7 + 0x5ff0) != 0) && (*piVar4 == 0)) {
        iVar2 = *(int *)(iVar7 + 0x5ff0);
      }
      if (iVar5 == 0) {
        iVar2 = iVar2 * piVar4[0x151];
      }
      else {
        iVar2 = piVar4[iVar5 * 5 + 0x150];
      }
      iVar6 = *piVar3;
      piVar3 = piVar3 + 1;
      *piVar3 = iVar2 + iVar6;
    }
  }
  if (1 < *DAT_0001f390) {
    printk(DAT_0001f394,iVar7 + 0xa8,*piVar4,param_1[0xaa],param_4);
  }
  disableIRQinterrupts();
  if ((((*(char *)(*(int *)(iVar7 + 0x94) + 0x7b9) == '\0') || (*piVar4 - 10U < 2)) ||
      ((char)piVar4[0x19a] == '\0')) || (piVar4[0x184] != 0)) {
    piVar3 = (int *)piVar4[0x182];
    piVar4[0x182] = (int)(param_1 + 0xa0);
    param_1[0xa0] = (int)(piVar4 + 0x181);
    param_1[0xa1] = (int)piVar3;
    *piVar3 = (int)(param_1 + 0xa0);
  }
  else {
    piVar4[0x184] = (int)param_1;
    (**(code **)(piVar4[0x17f] + 0x18))(piVar4);
  }
  return;
}



/* ===== destroy_buf_queue @ 0001f398 size=188 ===== */

void destroy_buf_queue(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  disableIRQinterrupts();
  iVar2 = *(int *)(param_1 + 0x60c);
  iVar3 = param_1 + 0x604;
  if (iVar2 != 0) {
    piVar1 = *(int **)(param_1 + 0x608);
    *(int *)(param_1 + 0x608) = iVar2 + 0x280;
    *(int *)(iVar2 + 0x280) = iVar3;
    *(int **)(iVar2 + 0x284) = piVar1;
    *piVar1 = iVar2 + 0x280;
    if (*(int *)(param_1 + 0x60c) == *(int *)(param_1 + 0x610)) {
      *(undefined4 *)(param_1 + 0x610) = 0;
    }
    *(undefined4 *)(param_1 + 0x60c) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x610);
  if (iVar2 != 0) {
    piVar1 = *(int **)(param_1 + 0x608);
    *(int *)(param_1 + 0x608) = iVar2 + 0x280;
    *(int *)(iVar2 + 0x280) = iVar3;
    *(int **)(iVar2 + 0x284) = piVar1;
    *piVar1 = iVar2 + 0x280;
    *(undefined4 *)(param_1 + 0x610) = 0;
  }
  while (*(int *)(param_1 + 0x604) != iVar3) {
    iVar2 = *(int *)(param_1 + 0x604);
    list_del();
    if (*(int *)(iVar2 + -0x274) != 0) {
      vb2_buffer_done(iVar2 + -0x280,param_2);
    }
  }
  while (*(int *)(param_1 + 0x660) != param_1 + 0x660) {
    iVar2 = *(int *)(param_1 + 0x660);
    list_del();
    if (*(int *)(iVar2 + -0x274) != 0) {
      vb2_buffer_done(iVar2 + -0x280,param_2);
    }
  }
  rkisp_rockit_buf_free(param_1);
  return;
}



/* ===== rkisp_destroy_dummy_buf @ 0001f454 size=38 ===== */

void rkisp_destroy_dummy_buf(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  int iVar1;
  
  iVar1 = param_1[2];
  if ((*(int *)(iVar1 + 0x5ff0) != 0) && (*param_1 == 0)) {
    rkisp_dvbm_deinit();
    rkisp_free_buffer(iVar1,param_1 + 0x185,extraout_r2,param_4);
    return;
  }
  return;
}



/* ===== vir_cpy_image @ 0001f47a size=444 ===== */

void vir_cpy_image(int param_1)

{
  int *piVar1;
  void *__src;
  void *__dest;
  uint uVar2;
  size_t __n;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  bool bVar13;
  byte in_Q;
  byte bVar14;
  uint in_cpsr;
  
  piVar1 = DAT_0001f638;
  iVar5 = *(int *)(param_1 + 0x24);
  cVar9 = '\x01';
  cVar11 = '\0';
  if (0 < *DAT_0001f638) {
    uVar2 = *(uint *)(iVar5 + 8);
    cVar9 = 0xffffff57 < uVar2;
    cVar11 = SCARRY4(uVar2,0xa8);
    printk(DAT_0001f640,uVar2 + 0xa8,DAT_0001f63c);
  }
  *(undefined1 *)(iVar5 + 0x668) = 1;
  disableIRQinterrupts();
  iVar8 = param_1 + 0x1c;
  if (iVar8 == *(int *)(param_1 + 0x1c)) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x1c) + -0x280;
    list_del(*(int *)(param_1 + 0x1c),(uint)(byte)(cVar9 << 2 | cVar11 << 1 | in_Q) << 0x1b);
  }
  do {
    uVar2 = in_cpsr >> 0x1b;
    in_cpsr = in_cpsr & 0xffffff00;
    bVar14 = (uVar2 & 1) != 0;
    if ((iVar6 == 0) && (*(char *)(iVar5 + 0x668) == '\0')) {
      *(undefined1 *)(iVar5 + 0x66a) = 1;
      if (*(char *)(iVar5 + 0x669) != '\0') {
        *(undefined2 *)(iVar5 + 0x668) = 0;
        __wake_up(iVar5 + 0x674,3,1,0);
      }
      if (*piVar1 < 1) {
        return;
      }
      printk(DAT_0001f644,*(int *)(iVar5 + 8) + 0xa8,DAT_0001f63c);
      return;
    }
    if ((*(char *)(iVar5 + 0x669) == '\0') && (*(char *)(iVar5 + 0x668) != '\0')) {
      uVar2 = in_cpsr;
      if (iVar6 == 0) {
        wait_for_completion(param_1 + 0x10);
        uVar2 = in_cpsr;
      }
      *(undefined1 *)(iVar5 + 0x66a) = 0;
      disableIRQinterrupts();
      iVar7 = iVar6;
      if (iVar6 == 0) {
        if (iVar8 != *(int *)(param_1 + 0x1c)) {
          iVar7 = *(int *)(param_1 + 0x1c) + -0x280;
          list_del();
          if (iVar7 != 0) goto LAB_0001f544;
        }
      }
      else {
LAB_0001f544:
        iVar6 = iVar7;
        if ((*(int *)(iVar5 + 0x60c) == 0) && (iVar5 + 0x604 != *(int *)(iVar5 + 0x604))) {
          *(int *)(iVar5 + 0x60c) = *(int *)(iVar5 + 0x604) + -0x280;
          list_del();
        }
      }
      in_cpsr = uVar2 & 0xffffff00;
      bVar14 = (uVar2 >> 0x1b & 1) != 0;
      if (*(int *)(iVar5 + 0x60c) == 0) goto LAB_0001f618;
      cVar9 = iVar6 < 0;
      cVar11 = iVar6 == 0;
      cVar10 = '\x01';
      cVar12 = '\0';
      if (!(bool)cVar11) {
        uVar2 = 0;
        while( true ) {
          uVar3 = (uint)*(byte *)(iVar5 + 0x51a);
          cVar10 = uVar2 <= uVar3;
          cVar12 = SBORROW4(uVar3,uVar2);
          if (!(bool)cVar10 || uVar3 == uVar2) break;
          __n = *(size_t *)(iVar5 + 0x540 + uVar2 * 0x14);
          __src = (void *)vb2_plane_vaddr(iVar6,uVar2);
          __dest = (void *)vb2_plane_vaddr(*(undefined4 *)(iVar5 + 0x60c),uVar2);
          cVar10 = true;
          cVar12 = false;
          if ((__src == (void *)0x0) || (iVar7 = *(int *)(iVar5 + 0x60c), __dest == (void *)0x0))
          break;
          bVar13 = uVar2 < *(uint *)(iVar7 + 0x10);
          if (bVar13) {
            iVar7 = iVar7 + uVar2 * 0x20;
          }
          uVar2 = uVar2 + 1;
          if (bVar13) {
            *(size_t *)(iVar7 + 0x54) = __n;
          }
          memcpy(__dest,__src,__n);
        }
        *(undefined4 *)(*(int *)(iVar5 + 0x60c) + 0x170) = *(undefined4 *)(iVar6 + 0x170);
        iVar7 = *(int *)(iVar5 + 0x60c);
        uVar4 = *(undefined4 *)(iVar6 + 0x1c);
        *(undefined4 *)(iVar7 + 0x18) = *(undefined4 *)(iVar6 + 0x18);
        *(undefined4 *)(iVar7 + 0x1c) = uVar4;
        vb2_buffer_done(*(undefined4 *)(iVar5 + 0x60c),5);
        *(undefined4 *)(iVar5 + 0x60c) = 0;
        goto LAB_0001f606;
      }
    }
    else {
LAB_0001f618:
      cVar10 = '\x01';
      cVar12 = '\0';
      cVar9 = iVar6 < 0;
      cVar11 = iVar6 == 0;
      if (!(bool)cVar11) {
LAB_0001f606:
        cVar11 = '\0';
        cVar9 = '\0';
        vb2_buffer_done(iVar6,5);
      }
    }
    disableIRQinterrupts();
    if (iVar8 == *(int *)(param_1 + 0x1c)) {
      iVar6 = 0;
      if (*(char *)(iVar5 + 0x669) != '\0') {
        *(undefined1 *)(iVar5 + 0x668) = 0;
        iVar6 = 0;
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x1c);
      list_del(iVar6,(uint)(byte)(cVar9 << 4 | cVar11 << 3 | cVar10 << 2 | cVar12 << 1 | bVar14) <<
                     0x1b);
      iVar6 = iVar6 + -0x280;
    }
  } while( true );
}



/* ===== rkisp_stream_config_dcrop.constprop.1 @ 0001f648 size=124 ===== */

undefined4
rkisp_stream_config_dcrop_constprop_1
          (undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int extraout_r3;
  int iVar5;
  
  piVar1 = DAT_0001f6c4;
  iVar5 = param_1[2];
  iVar2 = param_1[0x17d];
  iVar4 = *(int *)(iVar5 + 0xe54);
  if ((((iVar2 == iVar4) && (param_1[0x17e] == *(int *)(iVar5 + 0xe58))) && (param_1[0x17b] == 0))
     && (param_1[0x17c] == 0)) {
    rkisp_disable_dcrop();
    if (0 < *piVar1) {
      printk(DAT_0001f6c8,iVar5 + 0xa8,*param_1);
    }
  }
  else {
    puVar3 = param_1;
    if (0 < *DAT_0001f6c4) {
      param_3 = param_1[0x17e];
      puVar3 = *(undefined4 **)(iVar5 + 0xe58);
      printk(DAT_0001f6cc,iVar5 + 0xa8,*param_1,iVar4,puVar3,iVar2,param_3,param_4);
      iVar4 = extraout_r3;
      param_2 = iVar2;
    }
    rkisp_config_dcrop(param_1,param_1 + 0x17b,0,iVar4,puVar3,param_2,param_3);
  }
  return 0;
}



/* ===== mi_frame_start @ 0001f6d0 size=164 ===== */

undefined4 mi_frame_start(int param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x668) != '\0') {
    if (*(int *)(*(int *)(param_1 + 8) + 0x97a4) == 0x70) {
      rkisp_rockit_buf_done(param_1,1);
      rkisp_rockit_ctrl_fps(param_1);
    }
  }
  disableIRQinterrupts();
  if (*(char *)(param_1 + 0x668) != '\0') {
    if (param_2 == 0) {
      if (*(char *)(param_1 + 0x670) != '\0') {
        rkisp_stream_config_dcrop_constprop_1(param_1);
        rkisp_stream_config_rsz(param_1,0);
        *(undefined1 *)(param_1 + 0x670) = 0;
      }
      if (((*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x94) + 0x7b9) == '\0') &&
          (*(int *)(param_1 + 0x60c) == 0)) && (*(int *)(param_1 + 0x604) != param_1 + 0x604)) {
        *(int *)(param_1 + 0x610) = *(int *)(param_1 + 0x604) + -0x280;
        list_del();
        (**(code **)(*(int *)(param_1 + 0x5fc) + 0x18))(param_1);
      }
    }
    else {
      iVar1 = (**(code **)(*(int *)(param_1 + 0x5fc) + 0x14))(param_1);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x69c) = *(int *)(param_1 + 0x69c) + 1;
      }
    }
  }
  return 0;
}



/* ===== rkisp_stream_start @ 0001f774 size=170 ===== */

int rkisp_stream_start(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  
  if (1 < *param_1 - 8U) {
    iVar4 = param_1[2];
    if ((*(char *)(iVar4 + 0x1500) == '\0') && (*(char *)(iVar4 + 0x1bc0) == '\0')) {
      bVar3 = *(byte *)(iVar4 + 0x4440);
    }
    else {
      bVar3 = 1;
    }
    iVar1 = rkisp_stream_config_dcrop_constprop_1(param_1);
    uVar2 = DAT_0001f820;
    if ((iVar1 < 0) ||
       (iVar1 = rkisp_stream_config_rsz(param_1,bVar3 & 1), uVar2 = DAT_0001f824, iVar1 < 0)) {
      printk(uVar2,iVar4 + 0xa8,iVar1);
      return iVar1;
    }
  }
  iVar4 = param_1[2];
  if (*(code **)(param_1[0x17f] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[0x17f] + 0x10))(param_1);
  }
  if ((*(code **)param_1[0x17f] == (code *)0x0) ||
     (iVar1 = (**(code **)param_1[0x17f])(param_1), iVar1 == 0)) {
    if (*(char *)(*(int *)(iVar4 + 0x94) + 0x7b9) != '\0') {
      stream_self_update(param_1);
    }
    if ((*(code **)(param_1[0x17f] + 8) != (code *)0x0) && (*(char *)((int)param_1 + 0x66f) == '\0')
       ) {
      (**(code **)(param_1[0x17f] + 8))(param_1);
    }
    iVar1 = 0;
    *(undefined1 *)(param_1 + 0x19a) = 1;
  }
  return iVar1;
}



/* ===== stream_data_path @ 0001f828 size=62 ===== */

void stream_data_path(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*param_1 == 0) {
    uVar3 = 5;
  }
  else {
    if (*param_1 != 1) {
      return;
    }
    uVar3 = 8;
  }
  iVar2 = param_1[2];
  cVar1 = *(char *)(*(int *)(iVar2 + 0x94) + 0x7be);
  rkisp_set_bits(iVar2,0x18,0,uVar3,1,param_2,param_3);
  if (cVar1 != '\0') {
    rkisp_next_set_bits(iVar2,0x18,0,uVar3,1);
  }
  return;
}



/* ===== atomic_sub.constprop.3 @ 0001f866 size=24 ===== */

void atomic_sub_constprop_3(int *param_1)

{
  bool bVar1;
  
  HintPreloadData(param_1);
  do {
    ExclusiveAccess(param_1);
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 + -1;
  return;
}



/* ===== luma_frame_end @ 0001f87e size=112 ===== */

undefined4 luma_frame_end(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte in_Q;
  
  if (*(char *)(param_1 + 0x668) != '\0') {
    iVar5 = *(int *)(param_1 + 8);
    iVar1 = rkisp_read(iVar5,0x2700,1,*(char *)(param_1 + 0x668),param_4);
    if (-1 < iVar1) {
      printk(DAT_0001f8f4,iVar5 + 0xa8,DAT_0001f8f0);
      return 0xffffffea;
    }
    uVar3 = *(int *)(iVar5 + 0x9b1c) - 4;
    if (uVar3 < 3) {
      luma_frame_readout(param_1);
    }
    else {
      disableIRQinterrupts();
      uVar4 = *(uint *)(iVar5 + 0x5fd0);
      uVar2 = uVar4 | 1;
      *(uint *)(iVar5 + 0x5fd0) = uVar2;
      if ((uVar4 & 1) == 0) {
        __tasklet_schedule(iVar5 + 0x5fcc,uVar2,
                           (uint)(byte)((*(int *)(iVar5 + 0x9b1c) + -6 < 0) << 4 | (uVar3 == 2) << 3
                                        | (1 < uVar3) << 2 | SBORROW4(uVar3,2) << 1 | in_Q) << 0x1b)
        ;
        return 0;
      }
    }
  }
  return 0;
}



/* ===== tasklet_disable @ 0001f8f8 size=28 ===== */

void tasklet_disable(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  HintPreloadData(piVar2);
  do {
    ExclusiveAccess(piVar2);
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  return;
}



/* ===== rkisp_stream_init @ 0001f914 size=610 ===== */

void rkisp_stream_init(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = param_2 * 0x6c0;
  iVar5 = param_1 + 0xe90;
  iVar8 = param_1 + iVar6;
  iVar2 = iVar5 + iVar6 + 0x60c;
  *(int *)(iVar8 + 0xe98) = param_2;
  iVar7 = iVar6 + 8 + iVar5;
  *(int *)(iVar8 + 0xea0) = param_1;
  *(int *)(iVar5 + iVar6 + 0x60c) = iVar2;
  iVar4 = iVar5 + iVar6 + 0x1e0;
  *(int *)(iVar8 + 0x14a0) = iVar2;
  __init_waitqueue_head(iVar6 + 0x67c + iVar5,DAT_0001fb90,DAT_0001fb8c);
  *(undefined1 *)(iVar8 + 0x1503) = 1;
  switch(param_2) {
  case 1:
    strscpy(param_1 + 0x19d0,DAT_0001fb94,0x20);
    *(undefined4 *)(param_1 + 0x1b54) = DAT_0001fb98;
    puVar3 = DAT_0001fb9c;
    *(undefined4 **)(param_1 + 7000) = DAT_0001fb9c;
    if (*(int *)(param_1 + 0x97a4) == 0x70) {
      *puVar3 = DAT_0001fba0;
      uVar1 = 10;
    }
    else {
      *puVar3 = DAT_0001fba4;
      uVar1 = 0xb;
    }
    goto LAB_0001f9bc;
  default:
    strscpy(iVar6 + 0x480 + iVar5,DAT_0001fbe4,0x20);
    iVar2 = param_2 * 0x6c0 + param_1;
    *(undefined4 *)(iVar2 + 0x1494) = DAT_0001fbe8;
    puVar3 = DAT_0001fbe0;
    *(undefined4 **)(iVar2 + 0x1498) = DAT_0001fbe0;
    *(undefined4 *)(iVar2 + 0x1538) = 8;
    *puVar3 = DAT_0001fbec;
    puVar3 = *(undefined4 **)(iVar2 + 0x1498);
    uVar1 = 7;
LAB_0001f9bc:
    puVar3[1] = uVar1;
    goto LAB_0001fa6c;
  case 7:
    strscpy(param_1 + 0x4250,DAT_0001fba8,0x20);
    iVar2 = DAT_0001fbac;
    *(int *)(param_1 + 0x43d4) = DAT_0001fbac;
    *(int *)(param_1 + 0x43d8) = iVar2 + 0x28;
    iVar2 = 0x4478;
    uVar1 = 9;
    break;
  case 8:
    strscpy(param_1 + 0x4910,DAT_0001fbb8,0x20);
    iVar2 = DAT_0001fbbc;
    *(int *)(param_1 + 0x4a94) = DAT_0001fbbc;
    *(int *)(param_1 + 0x4a98) = iVar2 + 0x28;
    iVar2 = 0x4b38;
    uVar1 = 0;
    break;
  case 9:
    strscpy(param_1 + 0x4fd0,DAT_0001fbb0,0x20);
    iVar2 = DAT_0001fbb4;
    *(int *)(param_1 + 0x5154) = DAT_0001fbb4;
    *(int *)(param_1 + 0x5158) = iVar2 + 0x28;
    iVar2 = 0x51f8;
    uVar1 = 7;
    break;
  case 10:
    strscpy(param_1 + 0x5690,DAT_0001fbc0,0x20);
    uVar1 = DAT_0001fbc8;
    iVar2 = DAT_0001fbc4;
    *(int *)(param_1 + 0x5814) = DAT_0001fbc4;
    *(int *)(param_1 + 0x5818) = iVar2 + 0x28;
    *(undefined4 *)(param_1 + 0x58b8) = 10;
    tasklet_init(param_1 + 0x5fcc,uVar1,iVar7);
    tasklet_disable(param_1 + 0x5fcc);
    goto LAB_0001fa6c;
  case 0xb:
    strscpy(param_1 + 0x5d50,DAT_0001fbdc,0x20);
    *(undefined4 *)(param_1 + 0x5ed4) = 0;
    *(undefined4 **)(param_1 + 0x5ed8) = DAT_0001fbe0;
    iVar2 = 0x5f78;
    uVar1 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + iVar2) = uVar1;
LAB_0001fa6c:
  puVar3 = DAT_0001fbcc;
  *DAT_0001fbcc = DAT_0001fbd0;
  puVar3[1] = DAT_0001fbd4;
  *(undefined4 *)(iVar4 + -0x1c8) = 9;
  *(undefined4 *)(iVar4 + -0x1c4) = 0x13;
  uVar1 = DAT_0001fbd8;
  *(int *)(iVar4 + -0x1a0) = iVar7;
  *(undefined4 *)(iVar4 + -0x1ac) = uVar1;
  iVar2 = param_2 * 0x6c0 + param_1;
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0xea0) + 0x94) + 0x778);
  *(int *)(iVar4 + -0x1b4) = iVar5 + iVar6 + 0x644;
  *(undefined4 *)(iVar4 + -0x1a8) = uVar1;
  *(undefined4 *)(iVar4 + -0x198) = 0x2d0;
  *(undefined4 *)(iVar4 + -0x18c) = 0;
  *(undefined4 *)(iVar4 + -0x194) = 0x2000;
  *(undefined4 *)(iVar4 + -0x1c0) = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0xea0) + 0x94) + 8);
  *(byte *)(iVar4 + -0x1b7) = *(byte *)(iVar4 + -0x1b7) | 2;
  *(byte *)(iVar4 + -0x1b8) = *(byte *)(iVar4 + -0x1b8) | 1;
  if (*(char *)(*(int *)(*(int *)(iVar2 + 0xea0) + 0x94) + 0x7b5) != '\0') {
    *(undefined4 *)(iVar4 + -0x1bc) = 0x40;
  }
  *(undefined4 *)(iVar4 + -400) = 4;
  vb2_queue_init();
  iVar2 = rkisp_register_stream_vdev(iVar7);
  if (-1 < iVar2) {
    param_1 = param_2 * 0x6c0 + param_1;
    *(undefined1 *)(param_1 + 0x1500) = 0;
    *(byte *)(param_1 + 0xe9c) = *(byte *)(param_1 + 0xe9c) & 0xfe;
    *(undefined4 *)(param_1 + 0x1514) = 0xa0000;
    *(undefined4 *)(param_1 + 0x1518) = 0;
  }
  return;
}



/* ===== rkisp_stop_streaming @ 0001fbf0 size=392 ===== */

void rkisp_stop_streaming(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_2c [24];
  
  piVar5 = *(int **)(param_1 + 0x28);
  iVar6 = piVar5[2];
  mutex_lock(*(int *)(iVar6 + 0x94) + 0xdc);
  if (0 < *DAT_0001fd78) {
    printk(DAT_0001fd80,iVar6 + 0xa8,DAT_0001fd7c,piVar5 + 0x11e,*piVar5);
  }
  if ((char)piVar5[0x19a] != '\0') {
    if (*piVar5 - 10U < 2) {
      *(undefined1 *)((int)piVar5 + 0x669) = 1;
      if (*(char *)(*(int *)(iVar6 + 0x94) + 0x7bd) == '\0') {
        _cond_resched();
        if (*(char *)((int)piVar5 + 0x66a) == '\0') {
          init_wait_entry(auStack_2c);
          iVar7 = 0x96;
          while( true ) {
            prepare_to_wait_event(piVar5 + 0x19d,auStack_2c,2);
            if ((*(char *)((int)piVar5 + 0x66a) != '\0') || (iVar7 == 0)) break;
            iVar7 = schedule_timeout(iVar7);
          }
          finish_wait(piVar5 + 0x19d,auStack_2c);
        }
      }
      *(undefined2 *)(piVar5 + 0x19a) = 0;
      destroy_buf_queue(piVar5,6);
      if (*piVar5 != 10) {
        iVar7 = completion_done(iVar6 + 0x5fb4);
        if (iVar7 == 0) {
          complete(iVar6 + 0x5fb4);
          piVar5[0x1a8] = -1;
        }
        goto LAB_0001fcb4;
      }
      piVar1 = (int *)(iVar6 + 0x5fcc);
    }
    else {
      rkisp_stream_stop(piVar5);
      media_pipeline_stop(piVar5 + 0x76);
      iVar7 = (**(code **)(iVar6 + 0x97a0))(iVar6 + 0x96dc,0);
      if (iVar7 < 0) {
        printk(DAT_0001fd88,iVar6 + 0xa8);
      }
      destroy_buf_queue(piVar5,6);
      iVar7 = (**(code **)(iVar6 + 0x979c))(iVar6 + 0x96dc);
      if (iVar7 < 0) {
        printk(DAT_0001fd8c,iVar6 + 0xa8);
      }
      rkisp_destroy_dummy_buf(piVar5);
      atomic_sub_constprop_3(iVar6 + 0x5fe4);
      piVar1 = piVar5 + 0x192;
    }
    tasklet_disable(piVar1);
  }
LAB_0001fcb4:
  mutex_unlock(*(int *)(iVar6 + 0x94) + 0xdc);
  if ((*(char *)(iVar6 + 0xe038) != '\0') && (*piVar5 == 0)) {
    *(undefined1 *)(iVar6 + 0xe037) = 0;
    *(undefined1 *)(iVar6 + 0xe038) = 0;
    iVar7 = **(int **)(iVar6 + 0x318);
    if ((iVar7 != 0) &&
       ((iVar3 = *(int *)(*(int *)(iVar7 + 0x68) + 0xc), iVar3 != 0 &&
        (pcVar4 = *(code **)(iVar3 + 0x28), pcVar4 != (code *)0x0)))) {
      if ((*(int *)(DAT_0001fd84 + 0xc) == 0) ||
         (pcVar2 = *(code **)(*(int *)(DAT_0001fd84 + 0xc) + 0x28), pcVar2 == (code *)0x0)) {
        (*pcVar4)(iVar7,0);
      }
      else {
        (*pcVar2)();
      }
    }
    (**(code **)(iVar6 + 0x979c))(iVar6 + 0x96dc);
    v4l2_pipeline_pm_put(piVar5 + 0x76);
  }
  return;
}



/* ===== rkisp_start_streaming @ 0001fd90 size=682 ===== */

int rkisp_start_streaming(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  piVar6 = *(int **)(param_1 + 0x28);
  iVar5 = piVar6[2];
  iVar7 = param_2;
  mutex_lock(*(int *)(iVar5 + 0x94) + 0xdc);
  if ((((*(char *)(iVar5 + 0xe038) != '\0') && (*(char *)(*(int *)(iVar5 + 0x94) + 0x7b9) == '\0'))
      && (*(int *)(*(int *)(iVar5 + 0x94) + 0xe8) == 0)) && (*(int *)(iVar5 + 0x5fe4) == 0)) {
    rkisp_hw_enum_isp_size();
  }
  if (0 < *DAT_0002003c) {
    param_1 = *piVar6;
    printk(DAT_00020044,iVar5 + 0xa8,DAT_00020040,piVar6 + 0x11e,param_1,iVar7);
  }
  if ((char)piVar6[0x19a] != '\0') {
    mutex_unlock(*(int *)(iVar5 + 0x94) + 0xdc);
    return -0x10;
  }
  iVar8 = *piVar6;
  if (iVar8 == 0xb) {
    if (*(char *)(piVar6[0x1a8] * 0x6c0 + iVar5 + 0x1500) == '\0') {
      printk(DAT_00020058,iVar5 + 0xa8,0x6c0,0,param_1,iVar7);
      iVar7 = -0x16;
      destroy_buf_queue(piVar6,3);
    }
    else {
      *(undefined4 *)(iVar5 + 0x5fa4) = 0xffffffe0;
      *(int *)(iVar5 + 0x5fa8) = iVar5 + 0x5fa8;
      uVar3 = DAT_00020048;
      *(int *)(iVar5 + 0x5fac) = iVar5 + 0x5fa8;
      uVar2 = DAT_0002004c;
      *(undefined4 *)(iVar5 + 0x5fb0) = uVar3;
      *(undefined4 *)(iVar5 + 0x5fb4) = 0;
      __init_swait_queue_head(iVar5 + 0x5fb8,uVar2,DAT_00020050);
      *(int *)(iVar5 + 0x5fc0) = iVar5 + 0x5fc0;
      *(int *)(iVar5 + 0x5fc4) = iVar5 + 0x5fc0;
      *(int **)(iVar5 + 0x5fc8) = piVar6;
      queue_work_on(1,*DAT_00020054,iVar5 + 0x5fa4);
      iVar7 = 0;
    }
    goto LAB_0001fe68;
  }
  memset(piVar6 + 0x1a2,0,0x18);
  if (iVar8 == 10) {
    atomic_sub_constprop_3(iVar5 + 0x5fd4);
    *(undefined1 *)(piVar6 + 0x19a) = 1;
LAB_0001feac:
    mutex_unlock(*(int *)(iVar5 + 0x94) + 0xdc);
    return 0;
  }
  piVar9 = (int *)(iVar5 + 0x5fe4);
  HintPreloadData(piVar9);
  do {
    ExclusiveAccess(piVar9);
    bVar1 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar1);
  *piVar9 = *piVar9 + 1;
  piVar4 = (int *)0x99ec;
  uVar3 = DAT_0002005c;
  if ((*(int *)(iVar5 + 0x99ec) == 0) ||
     (piVar4 = (int *)0x0, *(char *)((int)piVar6 + 0x66b) == '\0')) {
LAB_0001feee:
    printk(uVar3,iVar5 + 0xa8,piVar6 + 0x11e,piVar4,param_1);
LAB_0001ff26:
    iVar7 = -0x16;
  }
  else {
    if ((*piVar6 - 8U < 2) && (*(char *)(iVar5 + piVar6[0x1a8] * 0x6c0 + 0x1500) == '\0')) {
      printk(DAT_00020060,iVar5 + 0xa8,piVar6 + 0x11e,piVar6[0x1a8] * 0x6c0 + 0x1310 + iVar5,param_1
             ,iVar7);
      goto LAB_0001ff26;
    }
    if (((*(int *)(iVar5 + 0x5fe4) == 1) && (*(int *)(iVar5 + 0x99ec) << 0x17 < 0)) &&
       (iVar7 = rkisp_update_sensor_info(iVar5), iVar7 < 0)) {
      printk(DAT_00020064,iVar5 + 0xa8,iVar7);
    }
    else {
      iVar7 = rkisp_create_dummy_buf(piVar6);
      if (-1 < iVar7) {
        if ((((*(int *)(iVar5 + 0x97a4) == 0x70) && (param_2 == 0)) && (piVar6[0x18a] == 0)) &&
           (piVar4 = piVar6 + 0x181, uVar3 = DAT_00020068, (int *)piVar6[0x181] == piVar4))
        goto LAB_0001feee;
        iVar8 = iVar5 + 0x96dc;
        iVar7 = (**(code **)(iVar5 + 0x9798))(iVar8,piVar6 + 0x76,1);
        if (iVar7 < 0) {
          printk(DAT_0002006c,iVar5 + 0xa8,iVar7);
        }
        else {
          iVar7 = rkisp_stream_start(piVar6);
          if (iVar7 < 0) {
            printk(DAT_00020070,iVar5 + 0xa8,piVar6 + 0x11e);
          }
          else {
            iVar7 = (**(code **)(iVar5 + 0x97a0))(iVar8,1);
            if (-1 < iVar7) {
              iVar7 = media_pipeline_start(piVar6 + 0x76,iVar8);
              if (-1 < iVar7) {
                atomic_sub_constprop_3(piVar6 + 0x194);
                goto LAB_0001feac;
              }
              printk(DAT_00020074,iVar5 + 0xa8,iVar7);
              (**(code **)(iVar5 + 0x97a0))(iVar8,0);
            }
            rkisp_stream_stop(piVar6);
          }
          (**(code **)(iVar5 + 0x979c))(iVar8);
        }
        rkisp_destroy_dummy_buf(piVar6);
      }
    }
  }
  destroy_buf_queue(piVar6,3);
  atomic_sub_constprop_3(piVar9);
  *(undefined1 *)(piVar6 + 0x19a) = 0;
LAB_0001fe68:
  mutex_unlock(*(int *)(iVar5 + 0x94) + 0xdc);
  return iVar7;
}



/* ===== rkisp_register_stream_v32 @ 00020078 size=166 ===== */

int rkisp_register_stream_v32(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  
  iVar1 = rkisp_stream_init(param_1,0,param_3,param_4,param_4);
  if (iVar1 < 0) {
    return iVar1;
  }
  iVar1 = rkisp_stream_init(param_1,1);
  if (-1 < iVar1) {
    if (*(int *)(param_1 + 0x97a4) == 0x70) {
      iVar1 = rkisp_stream_init(param_1,7,extraout_r2,0x70,param_4);
      if (-1 < iVar1) {
        iVar1 = rkisp_stream_init(param_1,8);
        if (-1 < iVar1) {
          iVar1 = rkisp_stream_init(param_1,9);
          if (-1 < iVar1) {
            iVar1 = rkisp_stream_init(param_1,10);
            if (-1 < iVar1) {
              rkisp_dvbm_get(param_1);
              rkisp_rockit_dev_init(param_1);
              return 0;
            }
            rkisp_unregister_stream_vdev(param_1 + 0x4b58);
          }
          rkisp_unregister_stream_vdev(param_1 + 0x4498);
        }
        rkisp_unregister_stream_vdev(param_1 + 0x3dd8);
      }
    }
    else {
      iVar1 = rkisp_stream_init(param_1,0xb,extraout_r2,*(int *)(param_1 + 0x97a4),param_4);
      if (-1 < iVar1) {
        return 0;
      }
    }
    rkisp_unregister_stream_vdev(param_1 + 0x1558);
  }
  rkisp_unregister_stream_vdev(param_1 + 0xe98);
  return iVar1;
}



/* ===== rkisp_unregister_stream_v32 @ 0002011e size=96 ===== */

void rkisp_unregister_stream_v32
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  
  rkisp_unregister_stream_vdev(param_1 + 0xe98);
  if (*(int *)(param_1 + 0x97a4) == 0x70) {
    rkisp_unregister_stream_vdev(param_1 + 0x1558);
    rkisp_unregister_stream_vdev(param_1 + 0x3dd8);
    rkisp_unregister_stream_vdev(param_1 + 0x4498);
    rkisp_unregister_stream_vdev(param_1 + 0x4b58);
    rkisp_unregister_stream_vdev(param_1 + 0x5218);
    rkisp_rockit_dev_deinit();
    return;
  }
  rkisp_unregister_stream_vdev(param_1 + 0x58d8,extraout_r1,extraout_r2,param_4);
  return;
}



/* ===== rkisp_mi_v32_isr @ 0002017e size=520 ===== */

void rkisp_mi_v32_isr(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  int local_2c;
  undefined8 local_28;
  
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  if (2 < *DAT_00020388) {
    printk(DAT_0002038c,param_2 + 0xa8,param_1);
  }
  piVar4 = (int *)(param_2 + 0xe98);
  iVar5 = 0;
  do {
    if (((piVar4[0x180] != 0) && ((param_1 & *(uint *)(piVar4[0x180] + 0x18)) != 0)) &&
       (*piVar4 != 0xb)) {
      iVar2 = *(int *)(piVar4[2] + 0x94);
      piVar1 = (int *)(iVar2 + 0x10);
      if (*(char *)(iVar2 + 0x7be) != '\0') {
        piVar1 = (int *)(iVar2 + 0x14);
      }
      iVar2 = *piVar1;
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      uVar3 = 0;
      if (piVar4[0x180] != 0) {
        uVar3 = *(undefined4 *)(piVar4[0x180] + 0x18);
      }
      *(undefined4 *)(iVar2 + 0x1504) = uVar3;
      if (iVar5 == 0) {
        rkisp_dvbm_event(param_2,1);
      }
      rkisp_dmarx_get_frame(param_2,&local_2c,0,&local_28,1);
      lVar6 = local_28;
      if (local_28 == 0) {
        lVar6 = ktime_get();
      }
      if (piVar4[0x183] != 0) {
        *(int *)(piVar4[0x183] + 0x170) = local_2c;
        *(longlong *)(piVar4[0x183] + 0x18) = lVar6;
        local_28 = lVar6;
        lVar6 = ktime_get();
        piVar4[0x1a4] = (int)lVar6 - piVar4[0x1a2];
        piVar4[0x1a5] = (int)lVar6 - *(int *)(param_2 + 0xe70);
        *(longlong *)(piVar4 + 0x1a2) = lVar6;
        piVar4[0x1a6] = local_2c;
      }
      if (*(char *)((int)piVar4 + 0x672) != '\0') {
        if (*(uint *)(param_2 + 0x9a71) < *(uint *)(param_2 + 0x9a6d)) {
          *(uint *)(param_2 + 0x9a71) = *(uint *)(param_2 + 0x9a71) + 1;
        }
        iVar2 = *(int *)(param_2 + 0x9a71);
        *(int *)(param_2 + (iVar2 + 0x9a6) * 0x10 + 9) = local_2c;
        *(longlong *)(param_2 + iVar2 * 0x10 + 0x9a6d) = lVar6;
        *(undefined1 *)((int)piVar4 + 0x672) = 0;
      }
      local_28 = lVar6;
      if (*(char *)((int)piVar4 + 0x669) == '\0') {
        if ((*piVar4 != 0) || (*(int *)(param_2 + 0x5ff0) == 0)) {
          mi_frame_end(piVar4);
        }
      }
      else {
        if (*(char *)(*(int *)(param_2 + 0x94) + 0x7b9) == '\0') {
          *(undefined1 *)((int)piVar4 + 0x669) = 0;
          *(undefined1 *)(piVar4 + 0x19a) = 0;
          (**(code **)(piVar4[0x17f] + 0xc))(piVar4);
        }
        else {
          iVar2 = (**(code **)(piVar4[0x17f] + 0x14))(piVar4);
          if (iVar2 == 0) goto LAB_000202dc;
          *(undefined1 *)((int)piVar4 + 0x669) = 0;
          *(undefined1 *)(piVar4 + 0x19a) = 0;
        }
        __wake_up(piVar4 + 0x19d,3,1,0);
      }
    }
LAB_000202dc:
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 0x1b0;
    if (iVar5 == 0xc) {
      if ((int)(param_1 << 0x1f) < 0) {
        if (*(char *)(param_2 + 0x1500) == '\0') {
          *(uint *)(param_2 + 0x9ad8) = *(uint *)(param_2 + 0x9ad8) & 0xfffffff7;
        }
        rkisp_check_idle(param_2,8);
      }
      if ((int)(param_1 << 0x1e) < 0) {
        if (*(char *)(param_2 + 0x1bc0) == '\0') {
          *(uint *)(param_2 + 0x9ad8) = *(uint *)(param_2 + 0x9ad8) & 0xffffffef;
        }
        rkisp_check_idle(param_2,0x10);
      }
      if ((int)(param_1 << 6) < 0) {
        if (*(char *)(param_2 + 0x4440) == '\0') {
          *(uint *)(param_2 + 0x9ad8) = *(uint *)(param_2 + 0x9ad8) & 0xffffffbf;
        }
        rkisp_check_idle(param_2,0x40);
      }
      return;
    }
  } while( true );
}



/* ===== rkisp_mipi_v32_isr @ 00020390 size=44 ===== */

void rkisp_mipi_v32_isr(void)

{
  uint in_r3;
  int in_stack_00000000;
  
  if ((in_r3 & 0xe0000) != 0) {
    printk(DAT_000203bc,in_stack_00000000 + 0xa8,in_r3);
  }
  if ((int)in_r3 < 0) {
    printk(DAT_000203c0,in_stack_00000000 + 0xa8);
    return;
  }
  return;
}



/* ===== isp_hdrmge_enable @ 000203c4 size=2 ===== */

void isp_hdrmge_enable(void)

{
  return;
}



/* ===== rkisp_get_param_size_v32 @ 000203c6 size=8 ===== */

void rkisp_get_param_size_v32(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0x2b89;
  return;
}



/* ===== rkisp_params_get_meshbuf_inf_v32 @ 000203ce size=108 ===== */

void rkisp_params_get_meshbuf_inf_v32(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8c);
  if (param_2[1] == 0x400 && *param_2 == 0) {
    *(undefined4 *)(iVar1 + 0x164) = 0;
    iVar1 = iVar1 + 0x114;
  }
  else {
    *(undefined4 *)(iVar1 + 0x110) = 0;
    iVar1 = iVar1 + 0xc0;
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
    *(undefined1 *)(param_2 + 5) = 0;
    *(undefined1 *)(param_2 + 3) = 0xff;
    *(undefined1 *)((int)param_2 + 0xd) = 0xff;
    *(undefined1 *)((int)param_2 + 0xe) = 0xff;
    *(undefined1 *)((int)param_2 + 0xf) = 0xff;
    *(undefined1 *)((int)param_2 + 0x15) = 0;
    *(undefined1 *)((int)param_2 + 0x16) = 0;
    *(undefined1 *)((int)param_2 + 0x17) = 0;
  }
  else {
    param_2[3] = *(int *)(iVar1 + 0x20);
    param_2[5] = *(int *)(iVar1 + 0x1c);
  }
  if (*(int *)(iVar1 + 0x3c) == 0) {
    *(undefined1 *)(param_2 + 6) = 0;
    *(undefined1 *)(param_2 + 4) = 0xff;
    *(undefined1 *)((int)param_2 + 0x11) = 0xff;
    *(undefined1 *)((int)param_2 + 0x12) = 0xff;
    *(undefined1 *)((int)param_2 + 0x13) = 0xff;
    *(undefined1 *)((int)param_2 + 0x19) = 0;
    *(undefined1 *)((int)param_2 + 0x1a) = 0;
    *(undefined1 *)((int)param_2 + 0x1b) = 0;
  }
  else {
    param_2[4] = *(int *)(iVar1 + 0x48);
    param_2[6] = *(int *)(iVar1 + 0x44);
  }
  return;
}



/* ===== isp3_param_write @ 0002043a size=20 ===== */

void isp3_param_write(int param_1,undefined4 param_2,undefined4 param_3)

{
  rkisp_write(*(undefined4 *)(param_1 + 0x500),param_3,param_2,0);
  return;
}



/* ===== isp_vsm_enable @ 0002044e size=6 ===== */

void isp_vsm_enable(undefined4 param_1,undefined4 param_2)

{
  isp3_param_write(param_1,param_2,0x3380);
  return;
}



/* ===== isp_vsm_config @ 00020454 size=162 ===== */

void isp_vsm_config(int param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x500) + 0xe54);
  iVar4 = *(int *)(*(int *)(param_1 + 0x500) + 0xe58);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 2),0x3384);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 4),0x3388);
  uVar2 = iVar1 - (uint)*(ushort *)(param_2 + 2);
  if (*(ushort *)(param_2 + 6) <= uVar2) {
    uVar2 = (uint)*(ushort *)(param_2 + 6);
  }
  isp3_param_write(param_1,uVar2 & 0xfffffffe,0x338c);
  uVar5 = iVar4 - (uint)*(ushort *)(param_2 + 4);
  uVar2 = (uVar2 & 0xfffffffe) - 0x30 >> 4;
  if (*(ushort *)(param_2 + 8) <= uVar5) {
    uVar5 = (uint)*(ushort *)(param_2 + 8);
  }
  isp3_param_write(param_1,uVar5 & 0xfffffffe,0x3390);
  uVar3 = (uVar5 & 0xfffffffe) - 0x30 >> 4;
  uVar5 = (uint)*param_2;
  if (uVar2 <= *param_2) {
    uVar5 = uVar2;
  }
  isp3_param_write(param_1,uVar5,0x3394);
  uVar2 = (uint)param_2[1];
  if (uVar3 <= param_2[1]) {
    uVar2 = uVar3;
  }
  isp3_param_write(param_1,uVar2,0x3398);
  return;
}



/* ===== isp_gain_config @ 000204f6 size=34 ===== */

void isp_gain_config(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  isp3_param_write(param_1,*param_2 & 0x3ffff,0x3f04);
  isp3_param_write(param_1,param_2[1],0x3f08,param_4);
  return;
}



/* ===== isp_gic_enable @ 00020518 size=6 ===== */

void isp_gic_enable(undefined4 param_1,undefined4 param_2)

{
  isp3_param_write(param_1,param_2,0x2f00);
  return;
}



/* ===== isp_gic_config @ 0002051e size=282 ===== */

void isp_gic_config(undefined4 param_1,ushort *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = DAT_0002063c;
  uVar1 = DAT_00020638;
  isp3_param_write(param_1,param_2[2] & 0x3ff |
                           DAT_00020638 & (uint)*param_2 << 0x14 |
                           DAT_0002063c & (uint)param_2[1] << 10,0x2f04);
  isp3_param_write(param_1,DAT_00020640 & (uint)param_2[4] << 0xb |
                           param_2[5] & 0x7ff | (uint)param_2[3] << 0x15,0x2f08);
  isp3_param_write(param_1,(uint)(byte)(*(char *)((int)param_2 + 0x11) << 4) |
                           (uint)(byte)param_2[7] << 0x10 | (uint)(byte)param_2[6] << 0x1c |
                           (byte)param_2[9] & 0xf | (*(byte *)((int)param_2 + 0xd) & 0xf) << 0x18 |
                           (uint)(ushort)((ushort)*(byte *)((int)param_2 + 0xf) << 0xc) |
                           ((byte)param_2[8] & 0xf) << 8,0x2f0c);
  iVar4 = 0;
  isp3_param_write(param_1,*(ushort *)((int)param_2 + 0x17) & 0x3ff |
                           uVar1 & (uint)*(ushort *)((int)param_2 + 0x13) << 0x14 |
                           uVar2 & (uint)*(ushort *)((int)param_2 + 0x15) << 10,0x2f10);
  isp3_param_write(param_1,*(ushort *)((int)param_2 + 0x1b) & 0xfff |
                           (*(byte *)((int)param_2 + 0x19) & 3) << 0x1c |
                           ((byte)param_2[0xd] & 0x7f) << 0xc,0x2f14);
  isp3_param_write(param_1,*(ushort *)((int)param_2 + 0x1d) & 0x7fff,0x2f18);
  do {
    iVar3 = iVar4 * 2;
    iVar4 = iVar4 + 2;
    isp3_param_write(param_1,*(undefined4 *)((int)param_2 + iVar3 + 0x1f),iVar3 + 0x2f20);
  } while (iVar4 != 0xe);
  isp3_param_write(param_1,*(undefined2 *)((int)param_2 + 0x3b),0x2f3c,param_4);
  return;
}



/* ===== isp_sdg_config @ 00020644 size=94 ===== */

void isp_sdg_config(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar1 = 0x424;
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x66),0x41c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x6a),0x420);
  iVar2 = 0;
  do {
    puVar3 = (undefined2 *)(param_2 + iVar2 * 2);
    iVar2 = iVar2 + 1;
    isp3_param_write(param_1,*puVar3,iVar1);
    isp3_param_write(param_1,puVar3[0x11],iVar1 + 0x44);
    isp3_param_write(param_1,puVar3[0x22],iVar1 + 0x88);
    iVar1 = iVar1 + 4;
  } while (iVar2 != 0x11);
  return;
}



/* ===== isp3_param_write_direct @ 000206a2 size=20 ===== */

void isp3_param_write_direct(int param_1,undefined4 param_2,undefined4 param_3)

{
  rkisp_write(*(undefined4 *)(param_1 + 0x500),param_3,param_2,1);
  return;
}



/* ===== isp3_param_read_cache @ 000206b6 size=8 ===== */

void isp3_param_read_cache(int param_1)

{
  rkisp_read_reg_cache(*(undefined4 *)(param_1 + 0x500));
  return;
}



/* ===== isp_csm_config @ 000206be size=98 ===== */

void isp_csm_config(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = iVar3 * 4;
    if (iVar3 == 0) {
      uVar1 = (*(ushort *)(param_2 + 1) & 0x3f) << 0x18 | (*(ushort *)(param_2 + 3) & 0xff) << 0x10
              | *(uint *)(param_2 + 5) & 0x1ff;
    }
    else {
      uVar1 = *(uint *)(param_2 + iVar2 + 5) & 0x1ff;
    }
    iVar3 = iVar3 + 1;
    isp3_param_write(param_1,uVar1,iVar2 + 0x570);
  } while (iVar3 != 9);
  uVar1 = isp3_param_read_cache(param_1,0x400);
  isp3_param_write(param_1,uVar1 | 0x6000,0x400);
  return;
}



/* ===== isp_baynr_enable @ 00020720 size=36 ===== */

void isp_baynr_enable(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = isp3_param_read_cache(param_1,0x3a00);
  uVar1 = uVar1 & 0xfffffffe;
  if (param_2 != 0) {
    uVar1 = uVar1 | 1;
  }
  isp3_param_write(param_1,uVar1,0x3a00,param_4);
  return;
}



/* ===== isp_sharp_enable @ 00020744 size=36 ===== */

void isp_sharp_enable(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = isp3_param_read_cache(param_1,0x2900);
  uVar1 = uVar1 & 0xfffffffe;
  if (param_2 != 0) {
    uVar1 = uVar1 | 1;
  }
  isp3_param_write(param_1,uVar1,0x2900,param_4);
  return;
}



/* ===== isp_hdrmge_config @ 00020768 size=336 ===== */

void isp_hdrmge_config(undefined4 param_1,char *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if ((param_3 & 0xfffffffd) == 0) {
    isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 9),*(undefined2 *)(param_2 + 0xb)),
                     0x3808);
    isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0xd),*(undefined2 *)(param_2 + 0xf))
                     ,0x380c);
    isp3_param_write(param_1,param_2[4],0x3810);
    uVar4 = isp3_param_read_cache(param_1,0x3800);
    if (*param_2 == '\0') {
      uVar4 = uVar4 & 0xfffffffd;
    }
    else {
      uVar4 = uVar4 | 2;
    }
    if (param_2[3] == '\0') {
      uVar4 = uVar4 & 0xffffffbf;
    }
    else {
      uVar4 = uVar4 | 0x40;
    }
    isp3_param_write(param_1,uVar4,0x3800);
  }
  uVar4 = DAT_000208b8;
  if (param_3 < 2) {
    uVar5 = *(uint *)(param_2 + 5);
    isp3_param_write(param_1,uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                             (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18,0x3814);
    isp3_param_write(param_1,uVar4 & (uint)*(ushort *)(param_2 + 0x13) << 0xc |
                             *(ushort *)(param_2 + 0x15) & 0x7ff |
                             (uint)*(ushort *)(param_2 + 0x11) << 0x16,0x3818);
    isp3_param_write(param_1,uVar4 & (uint)*(ushort *)(param_2 + 0x19) << 0xc |
                             *(ushort *)(param_2 + 0x1b) & 0x7ff |
                             (uint)*(ushort *)(param_2 + 0x17) << 0x16,0x381c);
    iVar7 = 0;
    do {
      iVar6 = iVar7 + 1;
      isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + iVar7 * 2 + 0x1d),
                                        *(undefined2 *)(param_2 + iVar7 * 2 + 0x3f)),
                       iVar7 * 4 + 0x3820);
      uVar5 = DAT_000208c0;
      uVar4 = DAT_000208bc;
      iVar7 = iVar6;
    } while (iVar6 != 0x11);
    iVar7 = 0;
    do {
      iVar1 = iVar7 * 2;
      iVar2 = iVar7 * 2;
      iVar3 = iVar7 * 2;
      iVar6 = iVar7 * 4;
      iVar7 = iVar7 + 1;
      isp3_param_write(param_1,*(ushort *)(param_2 + iVar3 + 0x61) & 0x3ff |
                               uVar4 & (uint)*(ushort *)(param_2 + iVar1 + 0xa5) << 0x14 |
                               uVar5 & (uint)*(ushort *)(param_2 + iVar2 + 0x83) << 10,
                       iVar6 + 0x3870);
    } while (iVar7 != 0x11);
    isp3_param_write(param_1,*(undefined4 *)(param_2 + 199),0x38b4,param_4);
    return;
  }
  return;
}



/* ===== isp_rawawb_enable @ 000208c4 size=42 ===== */

void isp_rawawb_enable(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = isp3_param_read_cache(param_1,0x5000);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0x7ffffffe;
  }
  else {
    uVar1 = uVar1 & 0x7fffffff | 1;
  }
  isp3_param_write(param_1,uVar1,0x5000,param_4);
  return;
}



/* ===== isp_awbgain_enable @ 000208ee size=38 ===== */

void isp_awbgain_enable(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = isp3_param_read_cache(param_1,0x400);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xffffff7f;
  }
  else {
    uVar1 = uVar1 | 0x80;
  }
  isp3_param_write(param_1,uVar1,0x400,param_4);
  return;
}



/* ===== isp_sdg_enable @ 00020914 size=38 ===== */

void isp_sdg_enable(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = isp3_param_read_cache(param_1,0x400);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xffffffbf;
  }
  else {
    uVar1 = uVar1 | 0x40;
  }
  isp3_param_write(param_1,uVar1,0x400,param_4);
  return;
}



/* ===== isp3_param_read @ 0002093a size=10 ===== */

void isp3_param_read(int param_1,undefined4 param_2)

{
  rkisp_read(*(undefined4 *)(param_1 + 0x500),param_2,0);
  return;
}



/* ===== isp_cgc_config @ 00020944 size=136 ===== */

void isp_cgc_config(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = isp3_param_read_cache(param_1,0x400);
  *(undefined4 *)(param_1 + 0x5e4) = 1;
  uVar1 = uVar1 & 0xcfffffff;
  if (*param_2 != '\0') {
    uVar1 = uVar1 | 0x10000000;
    *(undefined4 *)(param_1 + 0x5e4) = 2;
  }
  if (param_2[1] != '\0') {
    uVar1 = uVar1 | 0x20000000;
  }
  isp3_param_write(param_1,uVar1,0x400);
  uVar1 = isp3_param_read(param_1,0x800);
  if ((int)(uVar1 << 0x1f) < 0) {
    if (*param_2 == '\0') {
      uVar1 = uVar1 | 0xe;
    }
    else {
      uVar1 = uVar1 & 0xfffffff1;
    }
    isp3_param_write(param_1,uVar1,0x800);
  }
  uVar1 = isp3_param_read(param_1,0x200);
  if ((int)(uVar1 << 0x1f) < 0) {
    if (*param_2 == '\0') {
      uVar1 = uVar1 | 0x20;
    }
    else {
      uVar1 = uVar1 & 0xffffffdf;
    }
    isp3_param_write(param_1,uVar1,0x200,param_4);
    return;
  }
  return;
}



/* ===== isp_cac_enable @ 000209cc size=44 ===== */

void isp_cac_enable(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = isp3_param_read(param_1,0x2600);
  uVar1 = uVar1 & 0x7fffffee;
  if (param_2 != 0) {
    uVar1 = uVar1 | 0x83000011;
  }
  isp3_param_write(param_1,uVar1,0x2600,param_4);
  return;
}



/* ===== isp_gain_enable @ 000209f8 size=118 ===== */

void isp_gain_enable(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xa8c);
  uVar1 = isp3_param_read_cache(param_1,0x3f00);
  uVar2 = uVar1;
  if (param_2 != 0) {
    if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
      uVar1 = uVar1 | (uint)*(byte *)(iVar3 + 0x572) << 0x10 |
                      (uint)*(byte *)(iVar3 + 0x576) << 0x14 | (uint)*(byte *)(iVar3 + 0x573) << 0xc
                      | (uint)*(byte *)(iVar3 + 0x574) << 8 | (uint)*(byte *)(iVar3 + 0x577) << 4;
      iVar3 = isp3_param_read(param_1,0x3800);
      if (iVar3 << 0x1f < 0) {
        uVar1 = uVar1 | 2;
      }
      else {
        uVar2 = 0;
        if (uVar1 == 0) goto LAB_00020a60;
      }
    }
    uVar2 = uVar1 | 1;
  }
LAB_00020a60:
  isp3_param_write(param_1,uVar2,0x3f00,param_4);
  return;
}



/* ===== isp_baynr_config @ 00020a6e size=416 ===== */

void isp_baynr_config(undefined4 param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  uVar1 = isp3_param_read(param_1,0x3a00);
  iVar6 = 0;
  if (*param_2 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10000;
  }
  if (param_2[2] == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x100;
  }
  if (param_2[3] == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x10;
  }
  isp3_param_write(param_1,uVar4 | ((byte)param_2[1] & 3) << 0xc | uVar2 | uVar3 | uVar1 & 1,0x3a00)
  ;
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 4),*(undefined2 *)(param_2 + 6)),
                   0x3a04);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 8),0x3a08);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 10),0x3a0c);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 0xe)),
                   0x3a10);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x10),*(undefined2 *)(param_2 + 0x12))
                   ,0x3a14);
  do {
    iVar5 = iVar6 * 2;
    iVar6 = iVar6 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar5 + 0x14),iVar5 + 0x3a18);
  } while (iVar6 != 0x10);
  iVar6 = 0;
  do {
    iVar5 = iVar6 * 2;
    iVar6 = iVar6 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar5 + 0x34),iVar5 + 0x3a38);
  } while (iVar6 != 0x10);
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x58) & 0x3ff |
                           DAT_00020c10 & (uint)*(ushort *)(param_2 + 0x54) << 0x14 |
                           DAT_00020c14 & (uint)*(ushort *)(param_2 + 0x56) << 10,0x3a58);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x5a),*(undefined2 *)(param_2 + 0x5c))
                   ,0x3a5c);
  isp3_param_write(param_1,*(uint *)(param_2 + 0x5e) & 0xfffff,0x3a60);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x62),0x3a64);
  pcVar7 = param_2;
  iVar6 = 0x3a68;
  do {
    iVar5 = iVar6 + 4;
    isp3_param_write(param_1,(uint)(byte)pcVar7[0x68] << 0x10 | (uint)(byte)pcVar7[0x67] << 8 |
                             (uint)(byte)pcVar7[0x66] | (uint)(byte)pcVar7[0x69] << 0x18,iVar6);
    pcVar7 = pcVar7 + 4;
    iVar6 = iVar5;
  } while (iVar5 != 0x3a78);
  iVar6 = 0;
  do {
    iVar5 = iVar6 * 2;
    iVar6 = iVar6 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar5 + 0x76),iVar5 + 0x3a78);
  } while (iVar6 != 0x10);
  return;
}



/* ===== isp_sharp_config @ 00020c18 size=1070 ===== */

void isp_sharp_config(int param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  
  uVar1 = isp3_param_read(param_1,0x2900);
  uVar4 = DAT_00020f78;
  if (*param_2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
  }
  if (param_2[1] == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 4;
  }
  if (param_2[2] == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 8;
  }
  if (param_2[3] == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x10;
  }
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
    if (param_2[4] == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x20;
    }
  }
  else {
    if (param_2[5] == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x40;
    }
    if (param_2[6] == '\0') {
      uVar10 = 0;
    }
    else {
      uVar10 = 0x80;
    }
    uVar2 = uVar2 | uVar10;
  }
  isp3_param_write(param_1,uVar3 | uVar7 | uVar8 | uVar9 | uVar1 & 1 | uVar2,0x2900);
  uVar1 = DAT_00020f7c;
  uVar3 = *(uint *)(param_2 + 7);
  isp3_param_write(param_1,uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8
                           | uVar3 >> 0x18,0x2904);
  isp3_param_write(param_1,(uint)(byte)(param_2[0xc] << 4) |
                           ((byte)param_2[0x11] & 0xf) << 0x18 | ((byte)param_2[0x10] & 0xf) << 0x14
                           | (byte)param_2[0xb] & 0xf | ((byte)param_2[0xf] & 0xf) << 0x10 |
                           (uint)(ushort)((ushort)(byte)param_2[0xe] << 0xc) |
                           ((byte)param_2[0xd] & 0xf) << 8,0x2908);
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x39) & 0x3ff |
                           uVar1 & (uint)*(ushort *)(param_2 + 0x3d) << 0x14 |
                           uVar4 & (uint)*(ushort *)(param_2 + 0x3b) << 10,0x290c);
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x3f) & 0x3ff |
                           uVar1 & (uint)*(ushort *)(param_2 + 0x43) << 0x14 |
                           uVar4 & (uint)*(ushort *)(param_2 + 0x41) << 10,0x2910);
  isp3_param_write(param_1,uVar4 & (uint)*(ushort *)(param_2 + 0x47) << 10 |
                           *(ushort *)(param_2 + 0x45) & 0x3ff,0x2914);
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x49) & 0x3ff |
                           uVar1 & (uint)*(ushort *)(param_2 + 0x4d) << 0x14 |
                           uVar4 & (uint)*(ushort *)(param_2 + 0x4b) << 10,0x2918);
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x4f) & 0x3ff |
                           uVar1 & (uint)*(ushort *)(param_2 + 0x53) << 0x14 |
                           uVar4 & (uint)*(ushort *)(param_2 + 0x51) << 10,0x291c);
  isp3_param_write(param_1,uVar4 & (uint)*(ushort *)(param_2 + 0x57) << 10 |
                           *(ushort *)(param_2 + 0x55) & 0x3ff,0x2920);
  isp3_param_write(param_1,param_2[0x13] & 0xfU | param_2[0x12] << 4,0x2924);
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x59) & 0x3ff |
                           uVar1 & (uint)*(ushort *)(param_2 + 0x5d) << 0x14 |
                           uVar4 & (uint)*(ushort *)(param_2 + 0x5b) << 10,0x2934);
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x5f) & 0x3ff |
                           uVar1 & (uint)*(ushort *)(param_2 + 99) << 0x14 |
                           uVar4 & (uint)*(ushort *)(param_2 + 0x61) << 10,0x2938);
  iVar11 = 0;
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x65) & 0x3ff |
                           uVar4 & (uint)*(ushort *)(param_2 + 0x67) << 10,0x293c);
  isp3_param_write(param_1,(uint)(byte)param_2[0x16] |
                           (uint)(byte)param_2[0x14] << 0x10 | (uint)(byte)param_2[0x15] << 8,0x2940
                  );
  isp3_param_write(param_1,(uint)(byte)param_2[0x19] |
                           (uint)(byte)param_2[0x17] << 0x10 | (uint)(byte)param_2[0x18] << 8,0x2944
                  );
  isp3_param_write(param_1,(uint)(byte)param_2[0x1a] |
                           (uint)(byte)param_2[0x1c] << 0x10 | (uint)(byte)param_2[0x1b] << 8,0x2948
                  );
  isp3_param_write(param_1,(uint)(byte)param_2[0x1d] |
                           (uint)(byte)param_2[0x1f] << 0x10 | (uint)(byte)param_2[0x1e] << 8,0x294c
                  );
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x69) & 0x3ff | (uint)(byte)param_2[0x21] << 0x18 |
                           ((byte)param_2[0x20] & 0xf) << 0x10,0x2950);
  do {
    iVar5 = iVar11 * 2;
    iVar11 = iVar11 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar5 + 0x6b),iVar5 + 0x2954);
  } while (iVar11 != 0xe);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x87),0x2970);
  pcVar12 = param_2;
  iVar11 = 0x2974;
  do {
    iVar5 = iVar11 + 4;
    isp3_param_write(param_1,(uint)(byte)pcVar12[0x24] << 0x10 | (uint)(byte)pcVar12[0x23] << 8 |
                             (uint)(byte)pcVar12[0x22] | (uint)(byte)pcVar12[0x25] << 0x18,iVar11);
    pcVar12 = pcVar12 + 4;
    iVar11 = iVar5;
  } while (iVar5 != 0x2988);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x36),0x2988);
  uVar1 = DAT_00021058;
  uVar4 = DAT_00021054;
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
    uVar6 = 0x298c;
    uVar4 = *(ushort *)(param_2 + 0x8b) & 0x3ff |
            DAT_00020f80 & (uint)*(ushort *)(param_2 + 0x8d) << 0x10 |
            (uint)(ushort)((ushort)(byte)param_2[0x38] << 0xc);
  }
  else {
    isp3_param_write(param_1,*(ushort *)(param_2 + 0x8f) & 0x3ff |
                             DAT_00021058 & (uint)*(ushort *)(param_2 + 0x93) << 0x14 |
                             DAT_00021054 & (uint)*(ushort *)(param_2 + 0x91) << 10,0x2928);
    isp3_param_write(param_1,*(ushort *)(param_2 + 0x95) & 0x3ff |
                             uVar1 & (uint)*(ushort *)(param_2 + 0x99) << 0x14 |
                             uVar4 & (uint)*(ushort *)(param_2 + 0x97) << 10,0x292c);
    isp3_param_write(param_1,uVar4 & (uint)*(ushort *)(param_2 + 0x9d) << 10 |
                             *(ushort *)(param_2 + 0x9b) & 0x3ff,0x2930);
    isp3_param_write(param_1,*(ushort *)(param_2 + 0x9f) & 0x3ff |
                             uVar1 & (uint)*(ushort *)(param_2 + 0xa3) << 0x14 |
                             uVar4 & (uint)*(ushort *)(param_2 + 0xa1) << 10,0x2990);
    isp3_param_write(param_1,*(ushort *)(param_2 + 0xa5) & 0x3ff |
                             uVar1 & (uint)*(ushort *)(param_2 + 0xa9) << 0x14 |
                             uVar4 & (uint)*(ushort *)(param_2 + 0xa7) << 10,0x2994);
    uVar6 = 0x2998;
    uVar4 = *(ushort *)(param_2 + 0xab) & 0x3ff | uVar4 & (uint)*(ushort *)(param_2 + 0xad) << 10;
  }
  isp3_param_write(param_1,uVar4,uVar6);
  return;
}



/* ===== isp_cnr_config @ 0002105c size=466 ===== */

void isp_cnr_config(undefined4 param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = isp3_param_read(param_1,0x3f00);
  uVar2 = isp3_param_read(param_1,0x2800);
  if (param_2[3] == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x100;
  }
  if (param_2[1] == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 4;
  }
  if (*param_2 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = 2;
  }
  uVar7 = *(ushort *)(param_2 + 0x27) & 0x3ff | (uint)(byte)param_2[0x25] << 0x10 |
          (uint)(ushort)((ushort)(byte)param_2[0x26] << 0xc);
  uVar3 = ((byte)param_2[2] & 3) << 4 | uVar3 | uVar4 | uVar5 | uVar2 & 1;
  if (((uVar2 & 1) != 0) && (-1 < iVar1 << 0x1f)) {
    uVar3 = uVar3 | 2;
    uVar7 = *(ushort *)(param_2 + 0x27) & 0x3ff | (uint)(byte)param_2[0x25] << 0x10 | 0x8000;
  }
  isp3_param_write(param_1,uVar3,0x2800);
  isp3_param_write(param_1,uVar7,0x2804);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x29),0x2808);
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x2d) & 0x7ff,0x280c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 4),0x2810);
  isp3_param_write(param_1,((byte)param_2[10] & 0x3f) << 0xc |
                           (byte)param_2[8] & 0xf | (uint)(byte)param_2[9] << 4 |
                           DAT_00021230 & (uint)*(ushort *)(param_2 + 0x2f) << 0x14,0x2814);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0xb),0x2818);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0xd),0x281c);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x11),0x2820);
  isp3_param_write(param_1,DAT_00021234 & (uint)*(ushort *)(param_2 + 0x33) << 0x14 |
                           *(ushort *)(param_2 + 0x31) & 0x7ff | (uint)(byte)param_2[0x13] << 0xc,
                   0x2824);
  isp3_param_write(param_1,DAT_00021238 & (uint)*(ushort *)(param_2 + 0x35) << 8 |
                           (byte)param_2[0x14] & 0x7f | (uint)(byte)param_2[0x15] << 0x18,0x2828);
  isp3_param_write(param_1,DAT_0002123c & (uint)*(ushort *)(param_2 + 0x39) << 0x10 |
                           *(ushort *)(param_2 + 0x37) & 0x1ff,0x282c);
  pcVar6 = param_2;
  iVar1 = 0x2830;
  do {
    iVar8 = iVar1 + 4;
    isp3_param_write(param_1,(uint)(byte)pcVar6[0x18] << 0x10 | (uint)(byte)pcVar6[0x17] << 8 |
                             (uint)(byte)pcVar6[0x16] | (uint)(byte)pcVar6[0x19] << 0x18,iVar1);
    pcVar6 = pcVar6 + 4;
    iVar1 = iVar8;
  } while (iVar8 != 0x283c);
  isp3_param_write(param_1,param_2[0x22],0x283c);
  isp3_param_write(param_1,(uint)(byte)param_2[0x24] | ((byte)param_2[0x23] & 0xf) << 8,0x2840);
  return;
}



/* ===== isp_ynr_config @ 00021240 size=694 ===== */

void isp_ynr_config(int param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  
  uVar1 = isp3_param_read(param_1,0x2700);
  if (*param_2 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x4000000;
  }
  if (param_2[1] == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x1000000;
  }
  iVar10 = 0;
  if (param_2[4] == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x20;
  }
  if (param_2[5] == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x10;
  }
  if (param_2[6] == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 8;
  }
  if (param_2[7] == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = 4;
  }
  if (param_2[8] == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
  }
  isp3_param_write(param_1,uVar6 | ((byte)param_2[2] & 0xf) << 0x14 |
                                   DAT_000214f8 & (uint)*(ushort *)(param_2 + 0x22) << 8 |
                                   (uint)(byte)(param_2[3] << 6) | uVar9 | uVar2 | uVar7 | uVar3 |
                                   uVar4 | uVar5 | uVar1 & 1,0x2700);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x24),0x2704);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x28),0x2708);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2c),0x270c);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x30),*(undefined2 *)(param_2 + 0x32))
                   ,10000);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x34),*(undefined2 *)(param_2 + 0x36))
                   ,0x2714);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x38),*(undefined2 *)(param_2 + 0x3a))
                   ,0x2718);
  isp3_param_write(param_1,(uint)*(ushort *)(param_2 + 0x40) |
                           (uint)*(ushort *)(param_2 + 0x3c) << 0x18 |
                           (*(ushort *)(param_2 + 0x3e) & 0xff) << 0x10,0x271c);
  uVar1 = CONCAT22(*(undefined2 *)(param_2 + 0x42),*(undefined2 *)(param_2 + 0x44));
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x80) {
    uVar1 = uVar1 | ((byte)param_2[0x21] & 0xf) << 0xc;
  }
  isp3_param_write(param_1,uVar1,0x272c);
  isp3_param_write(param_1,(uint)(byte)*(undefined2 *)(param_2 + 0x4a) |
                           (uint)*(ushort *)(param_2 + 0x46) << 0x10 |
                           (uint)(ushort)(*(short *)(param_2 + 0x48) << 8),0x2730);
  isp3_param_write(param_1,(uint)(byte)*(undefined2 *)(param_2 + 0x50) |
                           (uint)*(ushort *)(param_2 + 0x4c) << 0x10 |
                           (uint)(ushort)(*(short *)(param_2 + 0x4e) << 8),0x2734);
  do {
    iVar8 = iVar10 * 2;
    iVar10 = iVar10 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar8 + 0x52),iVar8 + 0x2740);
  } while (iVar10 != 0x10);
  iVar10 = 0;
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x72),0x2760);
  do {
    iVar8 = iVar10 * 2;
    iVar10 = iVar10 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar8 + 0x74),iVar8 + 0x2770);
  } while (iVar10 != 0x10);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x94),0x2790);
  pcVar11 = param_2;
  iVar10 = 0x27d0;
  do {
    iVar8 = iVar10 + 4;
    isp3_param_write(param_1,(uint)(byte)pcVar11[0xb] << 0x10 | (uint)(byte)pcVar11[10] << 8 |
                             (uint)(byte)pcVar11[9] | (uint)(byte)pcVar11[0xc] << 0x18,iVar10);
    pcVar11 = pcVar11 + 4;
    iVar10 = iVar8;
  } while (iVar8 != 0x27e0);
  isp3_param_write(param_1,param_2[0x19],0x27e0);
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x96) & 0x7ff |
                           DAT_000214fc & (uint)*(ushort *)(param_2 + 0x98) << 0x10 |
                           (uint)(ushort)((ushort)(byte)param_2[0x1a] << 0xb),0x27f0);
  isp3_param_write(param_1,(uint)(byte)(param_2[0x1c] << 4) |
                           ((byte)param_2[0x20] & 0xf) << 0x14 | ((byte)param_2[0x1f] & 0xf) << 0x10
                           | (byte)param_2[0x1b] & 0xf |
                           (uint)(ushort)((ushort)(byte)param_2[0x1e] << 0xc) |
                           ((byte)param_2[0x1d] & 0xf) << 8,0x27f4);
  isp3_param_write(param_1,DAT_00021500 & *(int *)(param_2 + 0x9e) << 10 |
                           *(ushort *)(param_2 + 0x9c) & 0x3ff,0x27f8);
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x9a) & 0x7ff,0x27fc);
  return;
}



/* ===== isp_dhaz_config @ 00021504 size=850 ===== */

void isp_dhaz_config(undefined4 param_1,char *param_2)

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
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  
  uVar2 = isp3_param_read(param_1,0x3c00);
  uVar3 = DAT_00021868;
  uVar1 = DAT_00021864;
  if (*param_2 == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = 0x10000000;
  }
  if (param_2[1] == '\0') {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x8000000;
  }
  if (param_2[2] == '\0') {
    uVar12 = 0;
  }
  else {
    uVar12 = 0x4000000;
  }
  if (param_2[3] == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x2000000;
  }
  if (param_2[4] == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x100000;
  }
  if (param_2[5] == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x10000;
  }
  if (param_2[6] == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x1000;
  }
  if (param_2[7] == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x100;
  }
  if (param_2[8] == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x10;
  }
  if (param_2[3] != '\0') {
    iVar14 = 0;
    iVar10 = 0x3ca8;
    do {
      iVar16 = iVar14 + 3;
      isp3_param_write(param_1,*(ushort *)(param_2 + iVar14 * 2 + 0x92) & 0x3ff |
                               uVar1 & (uint)*(ushort *)(param_2 + iVar14 * 2 + 0x94) << 10 |
                               uVar3 & (uint)*(ushort *)(param_2 + iVar14 * 2 + 0x96) << 0x14,iVar10
                      );
      iVar14 = iVar16;
      iVar10 = iVar10 + 4;
    } while (iVar16 != 0x3f);
    isp3_param_write(param_1,*(ushort *)(param_2 + 0x110) & 0x3ff,0x3cfc);
  }
  uVar1 = DAT_00021858;
  isp3_param_write(param_1,uVar13 | uVar11 | uVar12 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9
                           | uVar2 & 1,0x3c00);
  uVar3 = *(uint *)(param_2 + 9);
  isp3_param_write(param_1,uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8
                           | uVar3 >> 0x18,0x3c04);
  isp3_param_write(param_1,(*(ushort *)(param_2 + 0x28) & 0xff) << 0x10 |
                           (*(ushort *)(param_2 + 0x26) & 0xff) << 8 |
                           (uint)(*(ushort *)(param_2 + 0x26) >> 8),0x3c08);
  uVar3 = *(uint *)(param_2 + 0xd);
  isp3_param_write(param_1,uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8
                           | uVar3 >> 0x18,0x3c0c);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x2a),*(undefined2 *)(param_2 + 0x2c))
                   ,0x3c10);
  isp3_param_write(param_1,(byte)param_2[0x2e] & 0x1f |
                           (uint)(byte)param_2[0x2f] << 8 |
                           (uint)*(ushort *)(param_2 + 0x30) << 0x10,0x3c14);
  isp3_param_write(param_1,(uint)CONCAT12(param_2[0x23],*(undefined2 *)(param_2 + 0x24)),0x3c18);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x32),*(undefined2 *)(param_2 + 0x34))
                   ,0x3c1c);
  isp3_param_write(param_1,DAT_0002185c & (uint)*(ushort *)(param_2 + 0x36) << 0x10 |
                           (byte)param_2[0x39] & 0x1f | (uint)(byte)param_2[0x38] << 8,0x3c20);
  isp3_param_write(param_1,(uint)(byte)param_2[0x3c] |
                           ((byte)param_2[0x3d] & 0xf) << 0x18 |
                           DAT_00021860 & (uint)*(ushort *)(param_2 + 0x3a) << 8,0x3c24);
  isp3_param_write(param_1,uVar1 & (uint)*(ushort *)(param_2 + 0x3e) << 0x10 |
                           (*(ushort *)(param_2 + 0x40) & 0xff) << 8 |
                           (uint)(*(ushort *)(param_2 + 0x40) >> 8),0x3c28);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x42),*(undefined2 *)(param_2 + 0x44))
                   ,0x3c2c);
  iVar14 = 0;
  isp3_param_write(param_1,uVar1 & (uint)*(ushort *)(param_2 + 0x46) << 0x10 |
                           (*(ushort *)(param_2 + 0x48) & 0xff) << 8 |
                           (uint)(*(ushort *)(param_2 + 0x48) >> 8),0x3c30);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x4a),*(undefined2 *)(param_2 + 0x4c))
                   ,0x3c34);
  do {
    iVar10 = iVar14 * 2;
    iVar14 = iVar14 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar10 + 0x4e),iVar10 + 0x3c38);
  } while (iVar14 != 0x10);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x6e),0x3c58);
  isp3_param_write(param_1,(uint)(byte)param_2[0x13] |
                           (uint)(byte)param_2[0x11] << 0x10 | (uint)(byte)param_2[0x12] << 8,0x3c5c
                  );
  pcVar15 = param_2;
  iVar14 = 0x3c60;
  do {
    iVar10 = iVar14 + 4;
    isp3_param_write(param_1,(uint)(byte)pcVar15[0x16] << 0x10 | (uint)(byte)pcVar15[0x15] << 8 |
                             (uint)(byte)pcVar15[0x14] | (uint)(byte)pcVar15[0x17] << 0x18,iVar14);
    pcVar15 = pcVar15 + 4;
    iVar14 = iVar10;
  } while (iVar10 != 0x3c6c);
  iVar14 = 0;
  isp3_param_write(param_1,(uint)(byte)param_2[0x20] |
                           (uint)(byte)param_2[0x22] << 0x10 | (uint)(byte)param_2[0x21] << 8,0x3c6c
                  );
  do {
    iVar10 = iVar14 * 2;
    iVar14 = iVar14 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar10 + 0x70),iVar10 + 0x3c70);
    uVar1 = DAT_00021868;
  } while (iVar14 != 0x10);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x90),0x3c90);
  uVar3 = DAT_00021864;
  iVar14 = 2;
  iVar10 = 0x3d90;
  do {
    iVar16 = iVar14 + 3;
    isp3_param_write(param_1,*(ushort *)(param_2 + iVar14 * 2 + 0x10e) & 0x3ff |
                             uVar1 & (uint)*(ushort *)(param_2 + iVar14 * 2 + 0x112) << 0x14 |
                             uVar3 & (uint)*(ushort *)(param_2 + iVar14 * 2 + 0x110) << 10,iVar10);
    iVar14 = iVar16;
    iVar10 = iVar10 + 4;
  } while (iVar16 != 0x11);
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x130) & 0x3ff |
                           uVar3 & (uint)*(ushort *)(param_2 + 0x132) << 10,0x3da4);
  return;
}



/* ===== isp_rawhstbig_enable @ 0002186c size=62 ===== */

void isp_rawhstbig_enable(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_3 == 1) {
    uVar2 = 0x4a00;
  }
  else if (param_3 == 2) {
    uVar2 = 0x4b00;
  }
  else {
    uVar2 = 0x4800;
  }
  uVar1 = isp3_param_read(param_1,uVar2);
  uVar1 = uVar1 & 0x7ffffffe;
  if (param_2 != 0) {
    uVar1 = uVar1 | 1;
  }
  isp3_param_write(param_1,uVar1,uVar2);
  return;
}



/* ===== isp_rawhst3_enable @ 000218aa size=4 ===== */

void isp_rawhst3_enable(undefined4 param_1,undefined4 param_2)

{
  isp_rawhstbig_enable(param_1,param_2,0);
  return;
}



/* ===== isp_rawhst2_enable @ 000218ae size=4 ===== */

void isp_rawhst2_enable(undefined4 param_1,undefined4 param_2)

{
  isp_rawhstbig_enable(param_1,param_2,2);
  return;
}



/* ===== isp_rawhst1_enable @ 000218b2 size=4 ===== */

void isp_rawhst1_enable(undefined4 param_1,undefined4 param_2)

{
  isp_rawhstbig_enable(param_1,param_2,1);
  return;
}



/* ===== isp_rawhstlite_enable @ 000218b6 size=42 ===== */

void isp_rawhstlite_enable(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = isp3_param_read(param_1,0x4900);
  uVar1 = uVar1 & 0x7ffffffe;
  if (param_2 != 0) {
    uVar1 = uVar1 | 1;
  }
  isp3_param_write(param_1,uVar1,0x4900,param_4);
  return;
}



/* ===== isp_rawhstlite_config @ 000218e0 size=222 ===== */

void isp_rawhstlite_config(int param_1,byte *param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = isp3_param_read(param_1,0x4900);
  uVar1 = (param_2[2] & 7) << 8 | (param_2[3] & 7) << 1 | uVar1 & 1;
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
    uVar1 = uVar1 | (*param_2 & 7) << 0x18 | (uint)param_2[1] << 0xc;
  }
  isp3_param_write(param_1,uVar1,0x4900);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 8),0x4908);
  isp3_param_write(param_1,DAT_000219c4 &
                           ((uint)((ulonglong)*(ushort *)(param_2 + 0xe) * (ulonglong)DAT_000219c0
                                  >> 0x22) - 1) * 0x10000 |
                           (uint)((ulonglong)*(ushort *)(param_2 + 0xc) * (ulonglong)DAT_000219c0 >>
                                 0x22) - 1 & 0xfffe,0x4904);
  uVar1 = *(uint *)(param_2 + 4);
  isp3_param_write(param_1,uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8
                           | uVar1 >> 0x18,0x4910);
  pbVar2 = param_2;
  iVar3 = 0x4940;
  do {
    iVar4 = iVar3 + 4;
    isp3_param_write(param_1,(uint)pbVar2[0x12] << 0x10 | (uint)pbVar2[0x11] << 8 |
                             (uint)pbVar2[0x10] | (uint)pbVar2[0x13] << 0x18,iVar3);
    pbVar2 = pbVar2 + 4;
    iVar3 = iVar4;
  } while (iVar4 != 0x4958);
  isp3_param_write(param_1,param_2[0x28],0x4958);
  return;
}



/* ===== isp_rawawb_cfg_sram @ 000219c8 size=116 ===== */

void isp_rawawb_cfg_sram(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (((*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) != 0x70) || (param_3 == 0)) ||
     (iVar1 = isp3_param_read(param_1,0x5000), iVar1 << 0x1f < 0)) {
    iVar1 = param_2;
    do {
      iVar2 = iVar1 + 5;
      isp3_param_write(param_1,(*(byte *)(iVar1 + 0x65) & 0x3f) << 0x18 |
                               (*(byte *)(iVar1 + 0x62) & 0x3f) << 6 |
                               (*(byte *)(iVar1 + 99) & 0x3f) << 0xc |
                               *(byte *)(iVar1 + 0x61) & 0x3f |
                               (*(byte *)(iVar1 + 100) & 0x3f) << 0x12,0x5660);
      iVar1 = iVar2;
    } while (param_2 + 0xe1 != iVar2);
  }
  return;
}



/* ===== isp_rawaebig_enable @ 00021a3c size=64 ===== */

void isp_rawaebig_enable(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_3 == 1) {
    uVar2 = 0x4600;
  }
  else if (param_3 == 2) {
    uVar2 = 0x4700;
  }
  else {
    uVar2 = 0x4400;
  }
  uVar1 = isp3_param_read(param_1,uVar2);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0x7ffffffe;
  }
  else {
    uVar1 = uVar1 & 0x7fffffff | 1;
  }
  isp3_param_write(param_1,uVar1,uVar2);
  return;
}



/* ===== isp_rawae3_enable @ 00021a7c size=4 ===== */

void isp_rawae3_enable(undefined4 param_1,undefined4 param_2)

{
  isp_rawaebig_enable(param_1,param_2,0);
  return;
}



/* ===== isp_rawae2_enable @ 00021a80 size=4 ===== */

void isp_rawae2_enable(undefined4 param_1,undefined4 param_2)

{
  isp_rawaebig_enable(param_1,param_2,2);
  return;
}



/* ===== isp_rawae1_enable @ 00021a84 size=4 ===== */

void isp_rawae1_enable(undefined4 param_1,undefined4 param_2)

{
  isp_rawaebig_enable(param_1,param_2,1);
  return;
}



/* ===== isp_rawaebig_config @ 00021a88 size=400 ===== */

void isp_rawaebig_config(int param_1,byte *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int aiStack_38 [5];
  
  iVar7 = *(int *)(param_1 + 0x500);
  aiStack_38[0] = *DAT_00021c18;
  aiStack_38[1] = DAT_00021c18[1];
  aiStack_38[2] = DAT_00021c18[2];
  aiStack_38[3] = DAT_00021c18[3];
  uVar8 = *(uint *)(iVar7 + 0xe54);
  if (param_3 == 1) {
    iVar5 = 0x4600;
  }
  else if (param_3 == 2) {
    iVar5 = 0x4700;
  }
  else {
    iVar5 = 0x4400;
  }
  uVar3 = isp3_param_read(param_1,iVar5);
  bVar2 = param_2[1];
  uVar3 = (bVar2 & 3) << 1 | uVar3 & 1;
  if (param_2[2] != 0) {
    uVar3 = uVar3 | 0x10;
  }
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
    if (param_2[3] != 0) {
      uVar3 = uVar3 | 0x20;
    }
    if (param_2[4] != 0) {
      uVar3 = uVar3 | 0x40;
    }
    if (param_2[5] != 0) {
      uVar3 = uVar3 | 0x80;
    }
  }
  isp3_param_write(param_1,uVar3,iVar5);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 6),iVar5 + 8);
  iVar9 = aiStack_38[bVar2];
  uVar3 = __aeabi_uidiv(*(undefined2 *)(param_2 + 10),iVar9);
  if (*(char *)(*(int *)(iVar7 + 0x94) + 0x7be) != '\0') {
    uVar8 = (uVar8 >> 1) + 0x80;
  }
  if (uVar8 < uVar3 * iVar9 + *(ushort *)(param_2 + 6) + 1) {
    uVar3 = uVar3 - 1;
  }
  iVar4 = __aeabi_uidiv(*(undefined2 *)(param_2 + 0xc),iVar9);
  iVar6 = iVar5 + 0x14;
  if (*(uint *)(iVar7 + 0xe58) < iVar4 * iVar9 + *(ushort *)(param_2 + 8) + 2) {
    iVar4 = iVar4 + -1;
  }
  if (iVar4 << 0x1f < 0) {
    iVar4 = iVar4 + -1;
  }
  isp3_param_write(param_1,uVar3 & 0xffff | iVar4 << 0x10,iVar5 + 4);
  iVar7 = 0;
  do {
    iVar9 = iVar7 + 1;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar9 * 8 + 6),iVar6);
    iVar5 = iVar6 + -4;
    iVar6 = iVar6 + 8;
    isp3_param_write(param_1,(uint)(ushort)(*(short *)(param_2 + iVar7 * 8 + 0x12) +
                                           *(short *)(param_2 + iVar7 * 8 + 0xe)) |
                             ((uint)*(ushort *)(param_2 + iVar7 * 8 + 0x14) +
                             (uint)*(ushort *)(param_2 + iVar7 * 8 + 0x10)) * 0x10000,iVar5);
    iVar7 = iVar9;
  } while (iVar9 != 4);
  uVar8 = isp3_param_read(param_1,4);
  if (param_3 == 0) {
    uVar3 = (uint)*param_2 << 0x10;
    if (((uVar3 ^ uVar8) & 0x30000) == 0) {
      return;
    }
    uVar1 = 0xfffcffff;
    uVar3 = uVar3 & 0x30000;
  }
  else {
    uVar3 = (uint)*param_2 << 0x16;
    if (((uVar3 ^ uVar8) & 0xc00000) == 0) {
      return;
    }
    uVar1 = 0xff3fffff;
    uVar3 = uVar3 & 0xc00000;
  }
  isp3_param_write(param_1,uVar8 & uVar1 | uVar3,4);
  return;
}



/* ===== isp_rawae3_config @ 00021c1c size=4 ===== */

void isp_rawae3_config(undefined4 param_1,undefined4 param_2)

{
  isp_rawaebig_config(param_1,param_2,0);
  return;
}



/* ===== isp_rawae2_config @ 00021c20 size=4 ===== */

void isp_rawae2_config(undefined4 param_1,undefined4 param_2)

{
  isp_rawaebig_config(param_1,param_2,2);
  return;
}



/* ===== isp_rawae1_config @ 00021c24 size=4 ===== */

void isp_rawae1_config(undefined4 param_1,undefined4 param_2)

{
  isp_rawaebig_config(param_1,param_2,1);
  return;
}



/* ===== isp_rawaelite_enable @ 00021c28 size=44 ===== */

void isp_rawaelite_enable(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = isp3_param_read(param_1,0x4500);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0x7ffffffe;
  }
  else {
    uVar1 = uVar1 & 0x7fffffff | 1;
  }
  isp3_param_write(param_1,uVar1,0x4500,param_4);
  return;
}



/* ===== isp_rawaelite_config @ 00021c54 size=236 ===== */

void isp_rawaelite_config(int param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_28 [3];
  
  iVar4 = *(int *)(param_1 + 0x500);
  local_28[0] = 1;
  local_28[1] = 5;
  uVar6 = *(uint *)(iVar4 + 0xe54);
  local_28[2] = param_3;
  uVar2 = isp3_param_read(param_1,0x4500);
  bVar1 = param_2[1];
  uVar2 = uVar2 & 0xfffffffd;
  if (bVar1 != 0) {
    uVar2 = uVar2 | 2;
  }
  isp3_param_write(param_1,uVar2 & 0x7fffffff,0x4500);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 2),0x4508);
  iVar5 = local_28[bVar1 != 0];
  uVar2 = __aeabi_uidiv(*(undefined2 *)(param_2 + 6),iVar5);
  if (*(char *)(*(int *)(iVar4 + 0x94) + 0x7be) != '\0') {
    uVar6 = (uVar6 >> 1) + 0x80;
  }
  if (uVar6 < uVar2 * iVar5 + *(ushort *)(param_2 + 2) + 1) {
    uVar2 = uVar2 - 1;
  }
  iVar3 = __aeabi_uidiv(*(undefined2 *)(param_2 + 8),iVar5);
  if (*(uint *)(iVar4 + 0xe58) < iVar3 * iVar5 + *(ushort *)(param_2 + 4) + 2) {
    iVar3 = iVar3 + -1;
  }
  if (iVar3 << 0x1f < 0) {
    iVar3 = iVar3 + -1;
  }
  isp3_param_write(param_1,uVar2 & 0xffff | iVar3 << 0x10,0x4504);
  uVar2 = isp3_param_read(param_1,4);
  if ((((uint)*param_2 << 0x16 ^ uVar2) & 0xc00000) != 0) {
    isp3_param_write(param_1,uVar2 & 0xff3fffff | (uint)*param_2 << 0x16 & 0xc00000,4);
    return;
  }
  return;
}



/* ===== isp_rawaf_config @ 00021d40 size=1560 ===== */

void isp_rawaf_config(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint extraout_r1;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  uint uVar20;
  byte bVar21;
  ushort uVar22;
  bool bVar23;
  undefined4 auStack_38 [5];
  
  uVar4 = DAT_0002235c;
  uVar20 = (uint)param_2[1];
  uVar18 = 0;
  if (1 < uVar20) {
    uVar20 = 2;
  }
  for (; uVar18 != uVar20; uVar18 = uVar18 + 1) {
    iVar17 = uVar18 * 8;
    uVar22 = *(ushort *)(param_2 + iVar17 + 0x22);
    uVar7 = (uint)*(ushort *)(param_2 + iVar17 + 0x26);
    uVar8 = (uint)*(ushort *)(param_2 + iVar17 + 0x28);
    uVar6 = (uint)*(ushort *)(param_2 + iVar17 + 0x24);
    if (uVar22 < 2) {
      uVar22 = 2;
    }
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    if (uVar18 == 0) {
      uVar7 = (uint)((ulonglong)uVar7 * (ulonglong)uVar4 >> 0x23) * 0xf & 0xffff;
      uVar8 = (uint)((ulonglong)uVar8 * (ulonglong)uVar4 >> 0x23) * 0xf & 0xffff;
    }
    isp3_param_write(param_1,uVar6 | (uint)uVar22 << 0x10,iVar17 + 0x4d04);
    isp3_param_write(param_1,uVar8 | uVar7 << 0x10,iVar17 + 0x4d08);
  }
  uVar18 = 0;
  pbVar3 = param_2 + 0x32;
  uVar4 = 0;
  do {
    if (pbVar3[5] != 0) {
      uVar18 = uVar18 | 0x8000000 << (uVar4 & 0xff);
    }
    bVar1 = *pbVar3;
    uVar20 = uVar4 + 1;
    pbVar3 = pbVar3 + 1;
    uVar18 = uVar18 | (bVar1 & 0xf) << ((uVar4 & 0x3f) << 2);
    uVar4 = uVar20;
  } while (uVar20 != 5);
  isp3_param_write(param_1,uVar18,0x4d14);
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x80) {
    uVar4 = extraout_r1;
    if (param_2[0x20] != 0) {
      uVar4 = 0x1000;
    }
    if (param_2[0x20] == 0) {
      uVar4 = 0;
    }
    isp3_param_write(param_1,uVar4 | (int)*(short *)(param_2 + 0x1e) & 0x1ffU |
                                     (param_2[0x21] & 7) << 0x10,0x4d18);
  }
  uVar4 = isp3_param_read(param_1,0x4d1c);
  iVar17 = 0;
  isp3_param_write(param_1,(uint)*(ushort *)(param_2 + 0x3c) | uVar4 & 0xffff0000,0x4d1c);
  uVar4 = (param_2[0x41] & 7) << 0x14 | (param_2[0x40] & 7) << 0x10 | param_2[0x3e] & 7 |
          (param_2[0x3f] & 7) << 4;
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x80) {
    uVar4 = uVar4 | (param_2[0x42] & 0xf) << 8;
  }
  isp3_param_write(param_1,uVar4,0x4d20);
  do {
    iVar5 = iVar17 * 2;
    iVar17 = iVar17 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar5 + 0x50),iVar5 + 0x4d34);
  } while (iVar17 != 0x10);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x70),0x4d54);
  uVar4 = (param_2[0x45] & 7) << 8 | param_2[0x43] & 7;
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
    uVar4 = uVar4 | (param_2[0x46] & 7) << 0xc | (param_2[0x44] & 7) << 4;
  }
  isp3_param_write(param_1,uVar4,0x4d24);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x72),0x4d5c);
  iVar17 = 0;
  do {
    iVar5 = iVar17 + 1;
    isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + iVar17 * 2 + 200),
                                      *(undefined2 *)(param_2 + iVar17 * 2 + 0xc2)),
                     iVar17 * 4 + 0x4db0);
    iVar17 = iVar5;
  } while (iVar5 != 3);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x47),0x4dc0);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x4b),0x4dc4);
  isp3_param_write(param_1,param_2[0x4f],0x4dc8);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0xce),0x4dd0);
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x80) {
    isp3_param_write(param_1,*(undefined4 *)(param_2 + 0xd0),0x4dac);
    isp3_param_write(param_1,*(undefined4 *)(param_2 + 0xd4),0x4dbc);
  }
  bVar2 = param_2[7];
  bVar1 = param_2[4];
  bVar21 = param_2[5];
  if (bVar2 == 0) {
    bVar21 = 0;
  }
  uVar4 = isp3_param_read(param_1,0x4d00);
  uVar4 = uVar4 & 1;
  if (param_2[6] != 0) {
    uVar4 = uVar4 | 0x10;
    iVar17 = 0;
    do {
      iVar5 = iVar17 * 2;
      isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar5 + 0x86),iVar5 + 0x4d60);
      isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar5 + 0x92),iVar5 + 0x4d70);
      if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) != 0x80) {
        isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar5 + 0x9e),iVar5 + 0x4d80);
        isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar5 + 0xaa),iVar5 + 0x4d90);
      }
      iVar17 = iVar17 + 2;
    } while (iVar17 != 6);
  }
  if (bVar2 != 0) {
    uVar4 = uVar4 | 0x20;
    iVar17 = 0;
    do {
      uVar18 = (uint)*(ushort *)(param_2 + iVar17 * 2 + 0xb6);
      iVar5 = iVar17 + 1;
      if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
        uVar18 = CONCAT22(*(undefined2 *)(param_2 + iVar17 * 2 + 0xbc),
                          *(ushort *)(param_2 + iVar17 * 2 + 0xb6));
      }
      isp3_param_write(param_1,uVar18,iVar17 * 4 + 0x4da0);
      iVar17 = iVar5;
    } while (iVar5 != 3);
  }
  if (param_2[9] != 0) {
    uVar4 = uVar4 | 0x80;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x76),0x4d6c);
    isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x7e),0x4d8c);
    isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x7a),0x4d7c);
    isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x82),0x4d9c);
  }
  if (param_2[0x15] == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = 0x100000;
  }
  if (param_2[0x14] == 0) {
    uVar20 = 0;
  }
  else {
    uVar20 = 0x80000;
  }
  if (param_2[0x13] == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x40000;
  }
  if (param_2[0x11] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x8000;
  }
  if (param_2[0x10] == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x4000;
  }
  if (param_2[0xf] == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x2000;
  }
  if (param_2[0xe] == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0x1000;
  }
  if (param_2[0xc] == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x400;
  }
  if (param_2[10] == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0x100;
  }
  if (param_2[8] == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0x40;
  }
  if (bVar21 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = 8;
  }
  if (bVar1 == 0) {
    uVar15 = 0;
  }
  else {
    uVar15 = 4;
  }
  if (param_2[3] == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = 2;
  }
  uVar18 = (param_2[0x12] & 3) << 0x10 | uVar18 | uVar20 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 |
           uVar11 | uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar4;
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
    if (param_2[0xd] == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = 0x800;
    }
    bVar23 = param_2[0xb] == 0;
    if (!bVar23) {
      uVar4 = 0x200;
    }
  }
  else {
    if (param_2[0x17] == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = 0x200000;
    }
    if (param_2[0x18] == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0x400000;
    }
    if (param_2[0x19] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x800000;
    }
    if (param_2[0x1a] == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0x1000000;
    }
    if (param_2[0x1b] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = 0x2000000;
    }
    if (param_2[0x1c] == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0x4000000;
    }
    if (param_2[0x1d] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0x8000000;
    }
    bVar23 = param_2[0x16] == 0;
    uVar20 = uVar20 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar4;
    if (!bVar23) {
      uVar4 = 0x20000000;
    }
  }
  if (bVar23) {
    uVar4 = 0;
  }
  isp3_param_write(param_1,uVar18 | uVar20 | uVar4,0x4d00);
  uVar4 = isp3_param_read(param_1,4);
  if (((((uint)*param_2 << 0x12 ^ uVar4) & 0xc0000) != 0) ||
     (((uVar4 & 0x1fffffff) >> 0x1c != (uint)param_2[2] &&
      (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x80)))) {
    uVar18 = (uint)*param_2 << 0x12 & 0xc0000;
    uVar20 = uVar18 | uVar4 & 0xfff3ffff;
    if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x80) {
      if (param_2[2] == 0) {
        uVar20 = uVar18 | uVar4 & 0xeff3ffff;
      }
      else {
        uVar20 = uVar20 | 0x10000000;
      }
    }
    isp3_param_write(param_1,uVar20,4);
  }
  bVar1 = param_2[0xe];
  *(bool *)(param_1 + 0x5e0) = bVar1 != 0;
  if (bVar1 == 0) {
    return;
  }
  auStack_38[0] = *DAT_00022358;
  auStack_38[1] = DAT_00022358[1];
  auStack_38[2] = DAT_00022358[2];
  auStack_38[3] = DAT_00022358[3];
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x80) {
    if (param_2[0x16] == 0) {
      iVar5 = 2;
      iVar17 = 0x4400;
    }
    else {
      iVar5 = 1;
      iVar17 = 0x4500;
    }
  }
  else {
    iVar5 = 2;
    iVar17 = 0x4400;
  }
  uVar4 = isp3_param_read(param_1,iVar17);
  isp3_param_write(param_1,uVar4 & 1 | iVar5 << 1,iVar17);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x22),iVar17 + 8);
  uVar19 = auStack_38[iVar5];
  iVar5 = __aeabi_uidiv(*(undefined2 *)(param_2 + 0x28),uVar19);
  uVar4 = __aeabi_uidiv(*(undefined2 *)(param_2 + 0x26),uVar19);
  isp3_param_write(param_1,iVar5 << 0x10 | uVar4,iVar17 + 4);
  return;
}



/* ===== isp_ie_config @ 00022360 size=172 ===== */

void isp_ie_config(int param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar1 = isp3_param_read(param_1,0x200);
  uVar1 = uVar1 & 0xfffffff1;
  if (*(int *)(param_1 + 0x5e4) == 1) {
    uVar1 = uVar1 | 0x20;
  }
  switch(*param_2) {
  case 3:
    uVar1 = uVar1 | 2;
    goto switchD_00022388_caseD_6;
  case 4:
    uVar1 = uVar1 | 8;
    isp3_param_write(param_1,param_2[2],0x208);
    isp3_param_write(param_1,param_2[3],0x20c);
    uVar3 = 0x210;
    uVar2 = param_2[4];
    break;
  case 5:
    uVar1 = uVar1 | 10;
    isp3_param_write(param_1,param_2[4],0x210);
    isp3_param_write(param_1,param_2[5],0x214);
    uVar3 = 0x218;
    uVar2 = param_2[6];
    break;
  default:
    goto switchD_00022388_caseD_6;
  case 10:
    uVar2 = param_2[1];
    uVar1 = uVar1 | 6;
    uVar3 = 0x204;
    break;
  case 0xf:
    isp3_param_write(param_1,param_2[7],0x21c);
  case 2:
    uVar1 = uVar1 | 4;
    goto switchD_00022388_caseD_6;
  }
  isp3_param_write(param_1,uVar2,uVar3);
switchD_00022388_caseD_6:
  isp3_param_write(param_1,uVar1,0x200);
  return;
}



/* ===== isp_goc_config @ 0002241a size=112 ===== */

void isp_goc_config(undefined4 param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = isp3_param_read(param_1,0x900);
  iVar5 = 0;
  if (*param_2 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 2;
  }
  if (param_2[1] == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
  }
  isp3_param_write(param_1,uVar2 | uVar4 | uVar1 & 1,0x900);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 2),0x904);
  do {
    iVar3 = iVar5 * 2;
    iVar5 = iVar5 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar3 + 4),iVar3 + 0x910);
  } while (iVar5 != 0x30);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 100),0x970);
  return;
}



/* ===== isp_ccm_config @ 0002248a size=300 ===== */

void isp_ccm_config(undefined4 param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = isp3_param_read(param_1,0x700);
  iVar6 = 0;
  if (param_2[2] == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = 8;
  }
  if (param_2[1] == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
  }
  if (*param_2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
  }
  isp3_param_write(param_1,uVar3 | uVar5 | uVar2 | uVar1 & 1,0x700);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 5),0x704);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 9),0x708);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0xd),0x70c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x11),0x710);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x15),0x714);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x19),0x718);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1d),0x71c);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x21),0x720);
  do {
    iVar4 = iVar6 * 2;
    iVar6 = iVar6 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar4 + 0x23),iVar4 + 0x724);
  } while (iVar6 != 0x12);
  isp3_param_write(param_1,param_2[3] & 0xfU | param_2[4] << 4,0x748);
  isp3_param_write(param_1,DAT_000225b8 & (uint)*(ushort *)(param_2 + 0x49) << 0x10 |
                           *(ushort *)(param_2 + 0x47) & 0x7ff,0x74c);
  isp3_param_write(param_1,DAT_000225bc & (uint)*(ushort *)(param_2 + 0x4d) << 0x10 |
                           *(ushort *)(param_2 + 0x4b) & 0x7ff,0x750);
  return;
}



/* ===== isp_debayer_config @ 000225c0 size=552 ===== */

void isp_debayer_config(int param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = isp3_param_read(param_1,0x2500);
  if (*param_2 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10;
  }
  uVar2 = uVar2 | uVar1 & 1;
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
    if (param_2[1] == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x100;
    }
    uVar2 = uVar2 | uVar1;
  }
  isp3_param_write(param_1,uVar2,0x2500);
  isp3_param_write(param_1,(uint)(byte)(param_2[3] << 4) |
                           (uint)(param_2[2] != '\0') | (uint)(byte)param_2[6] << 0x10 |
                           ((byte)param_2[7] & 0x3f) << 0x18 |
                           (uint)(ushort)((ushort)(byte)param_2[5] << 0xc) |
                           ((byte)param_2[4] & 0xf) << 8,0x2504);
  isp3_param_write(param_1,((byte)param_2[9] & 0x1f) << 8 |
                           ((byte)param_2[0xb] & 0x1f) << 0x18 | ((byte)param_2[10] & 0x1f) << 0x10
                           | (byte)param_2[8] & 0x1f,0x2508);
  isp3_param_write(param_1,((byte)param_2[0xd] & 0x1f) << 8 |
                           ((byte)param_2[0xf] & 0x1f) << 0x18 | ((byte)param_2[0xe] & 0x1f) << 0x10
                           | (byte)param_2[0xc] & 0x1f,0x250c);
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x23) & 0xfff |
                           (uint)*(ushort *)(param_2 + 0x21) << 0x10,0x2510);
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x25) & 0x7ff,0x2514);
  uVar1 = DAT_000227e8;
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) != 0x70) {
    return;
  }
  isp3_param_write(param_1,(int)param_2[0x10] | (int)param_2[0x11] << 8 | (int)param_2[0x12] << 0x10
                   ,0x2518);
  isp3_param_write(param_1,(int)param_2[0x13] | (int)param_2[0x14] << 8 | (int)param_2[0x15] << 0x10
                   ,0x251c);
  isp3_param_write(param_1,(int)param_2[0x16] | (int)param_2[0x17] << 8 | (int)param_2[0x18] << 0x10
                   ,0x2520);
  isp3_param_write(param_1,uVar1 & (uint)*(ushort *)(param_2 + 0x29) << 0x10 |
                           *(ushort *)(param_2 + 0x27) & 0x1fff,0x2524);
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x2d) & 0xfff | *(int *)(param_2 + 0x35) << 0xc,
                   0x2528);
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x2f) & 0xfff | *(int *)(param_2 + 0x31) << 0xc,
                   0x252c);
  isp3_param_write(param_1,(uint)(byte)param_2[0x19] |
                           uVar1 & (uint)*(ushort *)(param_2 + 0x2b) << 0x10 |
                           ((byte)param_2[0x1a] & 0x3f) << 8,0x2530);
  isp3_param_write(param_1,(byte)param_2[0x1b] & 0x7f | ((byte)param_2[0x1c] & 0x3f) << 8,0x2534);
  isp3_param_write(param_1,(uint)*(ushort *)(param_2 + 0x1f) |
                           ((byte)param_2[0x1e] & 0x7f) << 0x18 |
                           ((byte)param_2[0x1d] & 0x7f) << 0x10,0x2538);
  return;
}



/* ===== isp_bls_enable @ 000227ec size=40 ===== */

void isp_bls_enable(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = isp3_param_read(param_1,0x3000);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xfffffffe;
  }
  else {
    uVar1 = uVar1 | 1;
  }
  isp3_param_write(param_1,uVar1,0x3000,param_4);
  return;
}



/* ===== isp_bls_config @ 00022814 size=646 ===== */

void isp_bls_config(int param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = isp3_param_read(param_1,0x3000);
  uVar1 = uVar1 & 0x21;
  if (param_2[2] != '\0') {
    iVar4 = *(int *)(param_1 + 0x5e8);
    uVar1 = uVar1 | 0x10;
    iVar2 = (int)*(short *)(param_2 + 0x1c);
    if (iVar4 == 2) {
      isp3_param_write(param_1,iVar2,0x3050);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x1e),0x3054);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x20),0x3048);
      uVar3 = 0x304c;
    }
    else if (iVar4 == 3) {
      isp3_param_write(param_1,iVar2,0x3054);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x1e),0x3050);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x20),0x304c);
      uVar3 = 0x3048;
    }
    else if (iVar4 == 1) {
      isp3_param_write(param_1,iVar2,0x304c);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x1e),0x3048);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x20),0x3054);
      uVar3 = 0x3050;
    }
    else {
      isp3_param_write(param_1,iVar2,0x3048);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x1e),0x304c);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x20),0x3050);
      uVar3 = 0x3054;
    }
    isp3_param_write(param_1,(int)*(short *)(param_2 + 0x22),uVar3);
  }
  if (*param_2 == '\0') {
    iVar4 = *(int *)(param_1 + 0x5e8);
    iVar2 = (int)*(short *)(param_2 + 0x14);
    if (iVar4 == 2) {
      isp3_param_write(param_1,iVar2,0x3030);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x16),0x3034);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x18),0x3028);
      uVar3 = 0x302c;
    }
    else if (iVar4 == 3) {
      isp3_param_write(param_1,iVar2,0x3034);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x16),0x3030);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x18),0x302c);
      uVar3 = 0x3028;
    }
    else if (iVar4 == 1) {
      isp3_param_write(param_1,iVar2,0x302c);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x16),0x3028);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x18),0x3034);
      uVar3 = 0x3030;
    }
    else {
      isp3_param_write(param_1,iVar2,0x3028);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x16),0x302c);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x18),0x3030);
      uVar3 = 0x3034;
    }
    isp3_param_write(param_1,(int)*(short *)(param_2 + 0x1a),uVar3);
  }
  else {
    if ((int)((uint)(byte)param_2[1] << 0x1e) < 0) {
      uVar1 = uVar1 | 8;
      isp3_param_write(param_1,*(undefined2 *)(param_2 + 0xc),0x3018);
      isp3_param_write(param_1,(uint)*(ushort *)(param_2 + 0xc) + (uint)*(ushort *)(param_2 + 0x10),
                       0x301c);
      isp3_param_write(param_1,*(undefined2 *)(param_2 + 0xe),0x3020);
      isp3_param_write(param_1,(uint)*(ushort *)(param_2 + 0xe) + (uint)*(ushort *)(param_2 + 0x12),
                       0x3024);
    }
    if ((int)((uint)(byte)param_2[1] << 0x1f) < 0) {
      uVar1 = uVar1 | 4;
      isp3_param_write(param_1,*(undefined2 *)(param_2 + 4),0x3008);
      isp3_param_write(param_1,(uint)*(ushort *)(param_2 + 4) + (uint)*(ushort *)(param_2 + 8),
                       0x300c);
      isp3_param_write(param_1,*(undefined2 *)(param_2 + 6),0x3010);
      isp3_param_write(param_1,(uint)*(ushort *)(param_2 + 6) + (uint)*(ushort *)(param_2 + 10),
                       0x3014);
    }
    uVar1 = uVar1 | 2;
    isp3_param_write(param_1,param_2[3],0x3004);
  }
  isp3_param_write(param_1,uVar1,0x3000);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x24),0x3068);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x26),0x306c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x28),0x3070);
  return;
}



/* ===== isp_dpcc_enable @ 00022a9a size=52 ===== */

void isp_dpcc_enable(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = isp3_param_read(param_1,0x3400);
  uVar1 = uVar1 & 0xfffffffe;
  if (param_2 != 0) {
    uVar1 = uVar1 | 1;
  }
  isp3_param_write(param_1,uVar1,0x3400);
  isp3_param_write(param_1,uVar1,0x3500);
  return;
}



/* ===== isp_dpcc_config @ 00022ace size=2084 ===== */

void isp_dpcc_config(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  
  uVar3 = isp3_param_read(param_1,0x3400);
  if (*param_2 == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = 4;
  }
  if (param_2[1] == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = 2;
  }
  uVar3 = uVar13 | uVar10 | uVar3 & 1;
  isp3_param_write(param_1,uVar3,0x3400);
  isp3_param_write(param_1,uVar3,0x3500);
  if (param_2[3] == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x10;
  }
  if (param_2[4] == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = 8;
  }
  uVar10 = ((byte)param_2[2] & 3) << 5;
  if (param_2[5] == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 4;
  }
  if (param_2[6] == '\0') {
    uVar11 = 0;
  }
  else {
    uVar11 = 2;
  }
  if (param_2[7] != '\0') {
    uVar10 = uVar10 | 1;
  }
  uVar11 = uVar10 | uVar3 | uVar13 | uVar7 | uVar11;
  isp3_param_write(param_1,uVar11,0x3404);
  isp3_param_write(param_1,uVar11,0x3504);
  if (param_2[8] == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 8;
  }
  if (param_2[9] == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = 4;
  }
  if (param_2[10] == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = 2;
  }
  if (param_2[0xb] != '\0') {
    uVar3 = uVar3 | 1;
  }
  uVar10 = uVar3 | uVar13 | uVar10;
  isp3_param_write(param_1,uVar10,0x3408);
  isp3_param_write(param_1,uVar10,0x3508);
  if (param_2[0xc] == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x2000;
  }
  if (param_2[0xd] == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = 0x1000;
  }
  if (param_2[0xe] == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = 0x800;
  }
  if (param_2[0xf] == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x400;
  }
  if (param_2[0x10] == '\0') {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x200;
  }
  if (param_2[0x11] == '\0') {
    uVar14 = 0;
  }
  else {
    uVar14 = 0x100;
  }
  if (param_2[0x12] == '\0') {
    uVar17 = 0;
  }
  else {
    uVar17 = 0x20;
  }
  if (param_2[0x13] == '\0') {
    uVar15 = 0;
  }
  else {
    uVar15 = 0x10;
  }
  if (param_2[0x14] == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 8;
  }
  if (param_2[0x15] == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = 4;
  }
  if (param_2[0x16] == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 2;
  }
  if (param_2[0x17] != '\0') {
    uVar3 = uVar3 | 1;
  }
  uVar8 = uVar14 | uVar3 | uVar13 | uVar10 | uVar7 | uVar11 | uVar17 | uVar15 | uVar4 | uVar5 |
          uVar8;
  isp3_param_write(param_1,uVar8,0x340c);
  isp3_param_write(param_1,uVar8,0x350c);
  if (param_2[0x18] == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x2000;
  }
  if (param_2[0x19] == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = 0x1000;
  }
  if (param_2[0x1a] == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = 0x800;
  }
  if (param_2[0x1b] == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x400;
  }
  if (param_2[0x1c] == '\0') {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x200;
  }
  if (param_2[0x1d] == '\0') {
    uVar14 = 0;
  }
  else {
    uVar14 = 0x100;
  }
  if (param_2[0x1e] == '\0') {
    uVar17 = 0;
  }
  else {
    uVar17 = 0x20;
  }
  if (param_2[0x1f] == '\0') {
    uVar15 = 0;
  }
  else {
    uVar15 = 0x10;
  }
  if (param_2[0x20] == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 8;
  }
  if (param_2[0x21] == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = 4;
  }
  if (param_2[0x22] == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 2;
  }
  if (param_2[0x23] != '\0') {
    uVar3 = uVar3 | 1;
  }
  uVar8 = uVar14 | uVar3 | uVar13 | uVar10 | uVar7 | uVar11 | uVar17 | uVar15 | uVar4 | uVar5 |
          uVar8;
  isp3_param_write(param_1,uVar8,0x3410);
  isp3_param_write(param_1,uVar8,0x3510);
  if (param_2[0x24] == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x2000;
  }
  if (param_2[0x25] == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = 0x1000;
  }
  if (param_2[0x26] == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = 0x800;
  }
  if (param_2[0x27] == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x400;
  }
  if (param_2[0x28] == '\0') {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x200;
  }
  if (param_2[0x29] == '\0') {
    uVar14 = 0;
  }
  else {
    uVar14 = 0x100;
  }
  if (param_2[0x2a] == '\0') {
    uVar17 = 0;
  }
  else {
    uVar17 = 0x20;
  }
  if (param_2[0x2b] == '\0') {
    uVar15 = 0;
  }
  else {
    uVar15 = 0x10;
  }
  if (param_2[0x2c] == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 8;
  }
  if (param_2[0x2d] == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = 4;
  }
  if (param_2[0x2e] == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 2;
  }
  if (param_2[0x2f] != '\0') {
    uVar3 = uVar3 | 1;
  }
  uVar8 = uVar14 | uVar3 | uVar13 | uVar10 | uVar7 | uVar11 | uVar17 | uVar15 | uVar4 | uVar5 |
          uVar8;
  isp3_param_write(param_1,uVar8,0x3414);
  isp3_param_write(param_1,uVar8,0x3514);
  uVar3 = *(uint *)(param_2 + 0x30);
  uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
  isp3_param_write(param_1,uVar3,0x3418);
  isp3_param_write(param_1,uVar3,0x3518);
  uVar3 = *(uint *)(param_2 + 0x34);
  uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
  isp3_param_write(param_1,uVar3,0x341c);
  isp3_param_write(param_1,uVar3,0x351c);
  uVar12 = *(ushort *)(param_2 + 0x38) << 8 | *(ushort *)(param_2 + 0x38) >> 8;
  isp3_param_write(param_1,uVar12,0x3420);
  isp3_param_write(param_1,uVar12,0x3520);
  uVar12 = *(ushort *)(param_2 + 0x3a) << 8 | *(ushort *)(param_2 + 0x3a) >> 8;
  isp3_param_write(param_1,uVar12,0x3424);
  isp3_param_write(param_1,uVar12,0x3524);
  uVar12 = *(ushort *)(param_2 + 0x3c) << 8 | *(ushort *)(param_2 + 0x3c) >> 8;
  isp3_param_write(param_1,uVar12,0x3428);
  isp3_param_write(param_1,uVar12,0x3528);
  uVar3 = *(uint *)(param_2 + 0x3e);
  uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
  isp3_param_write(param_1,uVar3,0x342c);
  isp3_param_write(param_1,uVar3,0x352c);
  uVar3 = *(uint *)(param_2 + 0x42);
  uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
  isp3_param_write(param_1,uVar3,0x3430);
  isp3_param_write(param_1,uVar3,0x3530);
  uVar12 = *(ushort *)(param_2 + 0x46) << 8 | *(ushort *)(param_2 + 0x46) >> 8;
  isp3_param_write(param_1,uVar12,0x3434);
  isp3_param_write(param_1,uVar12,0x3534);
  uVar12 = *(ushort *)(param_2 + 0x48) << 8 | *(ushort *)(param_2 + 0x48) >> 8;
  isp3_param_write(param_1,uVar12,0x3438);
  isp3_param_write(param_1,uVar12,0x3538);
  uVar12 = *(ushort *)(param_2 + 0x4a) << 8 | *(ushort *)(param_2 + 0x4a) >> 8;
  isp3_param_write(param_1,uVar12,0x343c);
  isp3_param_write(param_1,uVar12,0x353c);
  uVar3 = *(uint *)(param_2 + 0x4c);
  uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
  isp3_param_write(param_1,uVar3,0x3440);
  isp3_param_write(param_1,uVar3,0x3540);
  uVar3 = *(uint *)(param_2 + 0x50);
  uVar3 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18;
  isp3_param_write(param_1,uVar3,0x3444);
  isp3_param_write(param_1,uVar3,0x3544);
  uVar12 = *(ushort *)(param_2 + 0x54) << 8 | *(ushort *)(param_2 + 0x54) >> 8;
  isp3_param_write(param_1,uVar12,0x3448);
  isp3_param_write(param_1,uVar12,0x3548);
  uVar12 = *(ushort *)(param_2 + 0x56) << 8 | *(ushort *)(param_2 + 0x56) >> 8;
  isp3_param_write(param_1,uVar12,0x344c);
  isp3_param_write(param_1,uVar12,0x354c);
  uVar12 = *(ushort *)(param_2 + 0x58) << 8 | *(ushort *)(param_2 + 0x58) >> 8;
  isp3_param_write(param_1,uVar12,0x3450);
  isp3_param_write(param_1,uVar12,0x3550);
  uVar3 = ((byte)param_2[0x5a] & 3) << 10 | ((byte)param_2[0x5b] & 3) << 8 | (byte)param_2[0x5f] & 3
          | (uint)(byte)(param_2[0x5c] << 6) | ((byte)param_2[0x5d] & 3) << 4 |
          ((byte)param_2[0x5e] & 3) << 2;
  isp3_param_write(param_1,uVar3,0x3454);
  isp3_param_write(param_1,uVar3,0x3554);
  uVar3 = ((byte)param_2[0x60] & 3) << 10 | ((byte)param_2[0x61] & 3) << 8 | (byte)param_2[0x65] & 3
          | (uint)(byte)(param_2[0x62] << 6) | ((byte)param_2[99] & 3) << 4 |
          ((byte)param_2[100] & 3) << 2;
  isp3_param_write(param_1,uVar3,0x3458);
  isp3_param_write(param_1,uVar3,0x3558);
  if (param_2[0x66] == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x800;
  }
  if (param_2[0x67] == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = 0x400;
  }
  if (param_2[0x68] == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = 0x200;
  }
  if (param_2[0x69] == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x100;
  }
  if (param_2[0x6a] == '\0') {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x80;
  }
  if (param_2[0x6b] == '\0') {
    uVar14 = 0;
  }
  else {
    uVar14 = 0x40;
  }
  if (param_2[0x6c] == '\0') {
    uVar17 = 0;
  }
  else {
    uVar17 = 0x20;
  }
  if (param_2[0x6d] == '\0') {
    uVar15 = 0;
  }
  else {
    uVar15 = 0x10;
  }
  if (param_2[0x6e] == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 2;
  }
  if (param_2[0x6f] != '\0') {
    uVar3 = uVar3 | 1;
  }
  uVar4 = uVar7 | uVar3 | uVar13 | uVar10 | uVar11 | uVar14 | uVar17 | uVar15 | uVar4;
  isp3_param_write(param_1,uVar4,0x345c);
  isp3_param_write(param_1,uVar4,0x355c);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x70),0x3460);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x70),0x3560);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x72),0x3464);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x72),0x3564);
  uVar1 = *(undefined2 *)(param_2 + 0x74);
  uVar2 = *(undefined2 *)(param_2 + 0x76);
  isp3_param_write(param_1,CONCAT22(uVar1,uVar2),0x3468);
  isp3_param_write(param_1,CONCAT22(uVar1,uVar2),0x3568);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x78),0x346c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x78),0x356c);
  isp3_param_write(param_1,param_2[0x7c],0x3470);
  isp3_param_write(param_1,param_2[0x7c],0x3570);
  uVar3 = 0;
  uVar13 = 0;
  pcVar6 = param_2 + 0x7d;
  do {
    uVar10 = uVar3 & 0xff;
    uVar3 = uVar3 + 1;
    uVar13 = uVar13 | (uint)(*pcVar6 != '\0') << uVar10;
    pcVar6 = pcVar6 + 1;
  } while (uVar3 != 0x10);
  isp3_param_write(param_1,uVar13,0x3474);
  isp3_param_write(param_1,uVar13,0x3574);
  uVar1 = *(undefined2 *)(param_2 + 0x8d);
  uVar2 = *(undefined2 *)(param_2 + 0x8f);
  iVar16 = 0x3484;
  isp3_param_write(param_1,CONCAT22(uVar1,uVar2),0x3478);
  isp3_param_write(param_1,CONCAT22(uVar1,uVar2),0x3578);
  uVar1 = *(undefined2 *)(param_2 + 0x91);
  uVar2 = *(undefined2 *)(param_2 + 0x93);
  isp3_param_write(param_1,CONCAT22(uVar1,uVar2),0x347c);
  isp3_param_write(param_1,CONCAT22(uVar1,uVar2),0x357c);
  uVar1 = *(undefined2 *)(param_2 + 0x95);
  uVar2 = *(undefined2 *)(param_2 + 0x97);
  isp3_param_write(param_1,CONCAT22(uVar1,uVar2),0x3480);
  isp3_param_write(param_1,CONCAT22(uVar1,uVar2),0x3580);
  pcVar6 = param_2 + 0x98;
  do {
    uVar3 = (*(ushort *)(pcVar6 + 1) & 0xff) << 8 | (uint)(*(ushort *)(pcVar6 + 1) >> 8) |
            (uint)(byte)pcVar6[4] << 0x10 | (uint)(byte)pcVar6[3] << 0x18;
    isp3_param_write(param_1,uVar3,iVar16);
    iVar9 = iVar16 + 0x100;
    iVar16 = iVar16 + 4;
    isp3_param_write(param_1,uVar3,iVar9);
    pcVar6 = pcVar6 + 4;
  } while (iVar16 != 0x34a4);
  isp3_param_write(param_1,param_2[0xb9],0x34a4);
  isp3_param_write(param_1,param_2[0xb9],0x35a4,param_4);
  return;
}



/* ===== isp_awbgain_config @ 000232f2 size=168 ===== */

void isp_awbgain_config(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  if (((((*(short *)((int)param_2 + 0xe) != 0) && (*(short *)(param_2 + 3) != 0)) &&
       (*(short *)((int)param_2 + 0x16) != 0)) &&
      ((((*(short *)(param_2 + 5) != 0 && (*(short *)((int)param_2 + 0x1e) != 0)) &&
        ((*(short *)(param_2 + 7) != 0 &&
         ((*(short *)((int)param_2 + 10) != 0 && (*(short *)(param_2 + 2) != 0)))))) &&
       (*(short *)((int)param_2 + 0x12) != 0)))) &&
     (((*(short *)(param_2 + 4) != 0 && (*(short *)((int)param_2 + 0x1a) != 0)) &&
      (*(short *)(param_2 + 6) != 0)))) {
    isp3_param_write(param_1,param_2[2],0x538);
    isp3_param_write(param_1,param_2[3],0x53c);
    isp3_param_write(param_1,param_2[4],0x540);
    isp3_param_write(param_1,param_2[5],0x544);
    isp3_param_write(param_1,param_2[6],0x548);
    isp3_param_write(param_1,param_2[7],0x54c);
    isp3_param_write(param_1,*param_2,0x530);
    isp3_param_write(param_1,param_2[1],0x534,param_4);
    return;
  }
  _dev_err(*(undefined4 *)(*(int *)(param_1 + 0x500) + 0xc),DAT_0002339c,param_3,param_4);
  return;
}



/* ===== isp_cac_config @ 000233a0 size=496 ===== */

void isp_cac_config(int param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar8 = *(int *)(param_1 + 0x500);
  iVar10 = 0;
  iVar9 = *(int *)(param_1 + 0xa8c);
  uVar1 = isp3_param_read(param_1,0x2600);
  if (*param_2 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  if (param_2[1] == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = 8;
  }
  if (param_2[3] == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x80;
  }
  if (param_2[4] == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x200;
  }
  uVar2 = ((byte)param_2[2] & 3) << 5 | uVar2 | uVar5 | uVar6 | uVar7 | uVar1 & 1;
  isp3_param_write(param_1,(uint)(byte)param_2[7] |
                           DAT_00023590 & (uint)*(ushort *)(param_2 + 8) << 8,0x2604);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 10),0x2608);
  do {
    iVar3 = iVar10 * 2;
    iVar10 = iVar10 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar3 + 0xe),iVar3 + 0x260c);
  } while (iVar10 != 0x16);
  isp3_param_write(param_1,(byte)param_2[5] & 0x1f | ((byte)param_2[6] & 0x1f) << 8,0x2638);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x3a),0x263c);
  isp3_param_write(param_1,*(uint *)(param_2 + 0x3e) & 0x1fffff,0x2680);
  isp3_param_write(param_1,*(uint *)(param_2 + 0x42) & 0x1fffff,0x2684);
  isp3_param_write(param_1,*(uint *)(param_2 + 0x46) & 0xfffff,0x2688);
  isp3_param_write(param_1,*(uint *)(param_2 + 0x4a) & 0xfffff,0x268c);
  if ((*(int *)(iVar9 + 0x128) == 0) || (*(int *)(param_2 + 0x56) != *(int *)(iVar9 + 0x134))) {
    if ((*(int *)(iVar9 + 0x150) == 0) || (*(int *)(iVar9 + 0x15c) != *(int *)(param_2 + 0x56))) {
      _dev_err(*(undefined4 *)(iVar8 + 0xc),DAT_00023594);
      return;
    }
    iVar10 = 1;
  }
  else {
    iVar10 = 0;
  }
  iVar3 = iVar9 + iVar10 * 0x28;
  if (*(int *)(iVar3 + 300) != 0) {
    puVar4 = *(undefined1 **)(*(int *)(iVar9 + 0x164) * 0x28 + iVar9 + 300);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4 = *(undefined1 **)(iVar3 + 300);
    *puVar4 = 2;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(int *)(iVar9 + 0x164) = iVar10;
    rkisp_prepare_buffer(iVar8,iVar10 * 0x28 + 0x114 + iVar9);
    isp3_param_write(param_1,*(int *)(puVar4 + 4) + *(int *)(iVar3 + 0x120),0x1930);
    isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x4e),0x1934);
    isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x52),0x1938);
    if ((int)(uVar1 << 0x1f) < 0) {
      uVar2 = uVar2 | 0x83000010;
    }
    isp3_param_write(param_1,uVar2,0x2600);
    return;
  }
  _dev_err(*(undefined4 *)(iVar8 + 0xc),DAT_00023598);
  return;
}



/* ===== isp_ldch_config @ 0002359c size=352 ===== */

void isp_ldch_config(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  
  iVar11 = *(int *)(param_1 + 0x500);
  uVar1 = isp3_param_read(param_1,0x3b00);
  if (param_2[5] == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x80;
  }
  if (param_2[4] == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x40;
  }
  if (param_2[3] == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x10;
  }
  if (param_2[2] == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 8;
  }
  if (param_2[1] == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = 4;
  }
  if (*param_2 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
  }
  isp3_param_write(param_1,uVar6 | uVar9 | uVar7 | uVar3 | uVar4 | uVar5 | uVar1 & 1,0x3b00);
  if (param_2[3] != '\0') {
    pcVar12 = param_2;
    iVar8 = 0x3b04;
    do {
      iVar10 = iVar8 + 4;
      isp3_param_write(param_1,(uint)(byte)pcVar12[8] << 0x10 | (uint)(byte)pcVar12[7] << 8 |
                               (uint)(byte)pcVar12[6] | (uint)(byte)pcVar12[9] << 0x18,iVar8);
      pcVar12 = pcVar12 + 4;
      iVar8 = iVar10;
    } while (iVar10 != 0x3b28);
  }
  iVar10 = *(int *)(param_1 + 0xa8c);
  iVar8 = *(int *)(param_2 + 0x32);
  if ((*(int *)(iVar10 + 0xd4) == 0) || (*(int *)(iVar10 + 0xe0) != iVar8)) {
    if ((*(int *)(iVar10 + 0xfc) == 0) || (*(int *)(iVar10 + 0x108) != iVar8)) {
      _dev_err(*(undefined4 *)(iVar11 + 0xc),DAT_000236fc,iVar8,param_4);
      return;
    }
    iVar14 = 1;
  }
  else {
    iVar14 = 0;
  }
  iVar13 = iVar10 + iVar14 * 0x28;
  if (*(int *)(iVar13 + 0xd8) == 0) {
    _dev_err(*(undefined4 *)(iVar11 + 0xc),DAT_00023700,iVar8,param_4);
    return;
  }
  puVar2 = *(undefined1 **)(*(int *)(iVar10 + 0x110) * 0x28 + iVar10 + 0xd8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2 = *(undefined1 **)(iVar13 + 0xd8);
  *puVar2 = 2;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(int *)(iVar10 + 0x110) = iVar14;
  rkisp_prepare_buffer(iVar11,iVar14 * 0x28 + 0xc0 + iVar10);
  isp3_param_write(param_1,*(int *)(puVar2 + 4) + *(int *)(iVar13 + 0xcc),0x1948);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2a),0x1958);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2e),0x195c,param_4);
  return;
}



/* ===== isp3_param_set_bits @ 00023704 size=22 ===== */

void isp3_param_set_bits(int param_1,undefined4 param_2,undefined4 param_3)

{
  rkisp_set_bits(*(undefined4 *)(param_1 + 0x500),param_2,0,param_3,0,param_2);
  return;
}



/* ===== isp_cnr_enable @ 0002371a size=68 ===== */

void isp_cnr_enable(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = isp3_param_read_cache(param_1,0x2800);
  if (param_2 == 0) {
    if ((uVar1 & 1) != 0) {
      uVar1 = uVar1 & 0xfffffffe;
      goto LAB_0002374e;
    }
  }
  else if ((uVar1 & 1) == 0) {
    uVar1 = uVar1 | 1;
    isp3_param_set_bits(param_1,0x404,0x4000000);
LAB_0002374e:
    isp3_param_write(param_1,uVar1,0x2800,param_4);
    return;
  }
  return;
}



/* ===== isp_ynr_enable @ 0002375e size=68 ===== */

void isp_ynr_enable(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = isp3_param_read_cache(param_1,0x2700);
  if (param_2 == 0) {
    if ((uVar1 & 1) != 0) {
      uVar1 = uVar1 & 0xfffffffe;
      goto LAB_00023792;
    }
  }
  else if ((uVar1 & 1) == 0) {
    uVar1 = uVar1 | 1;
    isp3_param_set_bits(param_1,0x404,0x800000);
LAB_00023792:
    isp3_param_write(param_1,uVar1,0x2700,param_4);
    return;
  }
  return;
}



/* ===== isp_3dlut_config @ 000237a2 size=190 ===== */

void isp_3dlut_config(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0xa8c);
  iVar1 = *(int *)(param_1 + 0x500);
  uVar4 = *(uint *)(iVar5 + 0x68) & 1;
  *(uint *)(iVar5 + 0x68) = *(uint *)(iVar5 + 0x68) + 1;
  uVar2 = DAT_00023864;
  iVar6 = *(int *)(uVar4 * 0x28 + iVar5 + 0x30);
  if (iVar6 == 0) {
    _dev_err(*(undefined4 *)(iVar1 + 0xc),DAT_00023860,uVar4,param_4);
    return;
  }
  for (uVar3 = 0; uVar3 < *(uint *)(param_2 + 1); uVar3 = uVar3 + 1) {
    iVar1 = param_2 + uVar3 * 2;
    *(uint *)(iVar6 + uVar3 * 4) =
         *(ushort *)(iVar1 + 0xb69) & 0x3ff | (uint)*(ushort *)(iVar1 + 5) << 0x16 |
         uVar2 & (uint)*(ushort *)(iVar1 + 0x5b7) << 10;
  }
  rkisp_prepare_buffer(*(undefined4 *)(param_1 + 0x500),uVar4 * 0x28 + 0x18 + iVar5);
  isp3_param_write(param_1,*(undefined4 *)(iVar5 + uVar4 * 0x28 + 0x24),0x1940);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 1),0x1950);
  uVar2 = isp3_param_read(param_1,0x3e00);
  if ((uVar2 & 1) != 0) {
    isp3_param_set_bits(param_1,0x3e04,1);
  }
  isp3_param_write(param_1,uVar2 & 1,0x3e00,param_4);
  return;
}



/* ===== isp3_param_clear_bits @ 00023868 size=10 ===== */

void isp3_param_clear_bits(int param_1,undefined4 param_2,undefined4 param_3)

{
  rkisp_clear_bits(*(undefined4 *)(param_1 + 0x500),param_2,param_3,0);
  return;
}



/* ===== isp_bay3d_enable @ 00023872 size=424 ===== */

void isp_bay3d_enable(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *(int *)(param_1 + 0x500);
  iVar3 = *(int *)(param_1 + 0xa8c);
  uVar1 = isp3_param_read_cache(param_1,0x2c00);
  if (param_2 == 0) {
    if ((uVar1 & 1) == 0) {
      return;
    }
    isp3_param_write(param_1,uVar1 & 0xfffffffe,0x2c00);
    isp3_param_clear_bits(param_1,0x3f00,0x10);
    return;
  }
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (*(int *)(iVar3 + 0x234) == 0) {
    _dev_err(*(undefined4 *)(iVar4 + 0xc),DAT_00023a1c);
    return;
  }
  isp3_param_write(param_1,*(undefined4 *)(iVar3 + 0x23c),0x19a4);
  uVar5 = *(undefined4 *)(iVar3 + 0x22c);
  isp3_param_write(param_1,uVar5,0x19a0);
  isp3_param_write(param_1,uVar5,0x19b0);
  isp3_param_write(param_1,*(undefined4 *)(iVar3 + 0x28c),0x19e4);
  uVar5 = *(undefined4 *)(iVar3 + 0x27c);
  isp3_param_write(param_1,uVar5,0x19e0);
  isp3_param_write(param_1,uVar5,0x19f0);
  if (*(char *)(iVar3 + 0x57a) == '\0') {
    uVar5 = *(undefined4 *)(iVar3 + 0x254);
  }
  else {
    uVar5 = *(undefined4 *)(*(int *)(iVar4 + 0x94) + 0xec);
  }
  isp3_param_write(param_1,uVar5,0x19c0);
  isp3_param_write(param_1,uVar5,0x19d0);
  uVar5 = *(undefined4 *)(iVar3 + 0x214);
  isp3_param_write(param_1,uVar5,0x19c4);
  isp3_param_write(param_1,uVar5,0x19dc);
  uVar5 = *(undefined4 *)(iVar3 + 0x218);
  isp3_param_write(param_1,uVar5,0x19c8);
  isp3_param_write(param_1,uVar5,0x19d4);
  if (*(int *)(iVar4 + 0x97a4) == 0x70) {
    uVar2 = 0x1c;
  }
  else {
    uVar2 = 0x14;
  }
  isp3_param_write(param_1,uVar2 | *(int *)(iVar3 + 0x21c) << 0x10,0x2cc8);
  if (*(int *)(iVar4 + 0x97a4) == 0x70) {
    isp3_param_set_bits(param_1,0x2ce0,DAT_00023a20);
  }
  uVar2 = isp3_param_read_cache(param_1,0x2c0c);
  if (*(char *)(iVar3 + 0x579) == '\0') {
    if ((uVar2 & 0x18) != 0) goto LAB_000239dc;
    uVar2 = uVar2 | 8;
  }
  else {
    if ((uVar2 & 0x18) == 0) goto LAB_000239dc;
    uVar2 = uVar2 & 0xffffffe7;
  }
  isp3_param_write(param_1,uVar2,0x2c0c);
LAB_000239dc:
  isp3_param_write(param_1,uVar1 | 1,0x2c00);
  isp3_param_set_bits(param_1,0x1800,DAT_00023a24);
  isp3_param_set_bits(param_1,0x404,0x8000000);
  return;
}



/* ===== isp_dhaz_enable @ 00023a28 size=86 ===== */

void isp_dhaz_enable(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = isp3_param_read(param_1,0x3c00);
  if (param_2 == 0) {
    if ((uVar1 & 1) != 0) {
      uVar1 = uVar1 & 0xfffffffe;
      isp3_param_clear_bits(param_1,0x3f00,0x10000);
      goto LAB_00023a6e;
    }
  }
  else if ((uVar1 & 1) == 0) {
    uVar1 = uVar1 | 0x80000001;
    isp3_param_set_bits(param_1,0x404,0x2000000);
LAB_00023a6e:
    isp3_param_write(param_1,uVar1,0x3c00,param_4);
    return;
  }
  return;
}



/* ===== isp_hdrdrc_enable @ 00023a7e size=78 ===== */

void isp_hdrdrc_enable(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = isp3_param_read(param_1,0x3900);
  if (param_2 == 0) {
    if ((uVar1 & 1) != 0) {
      isp3_param_clear_bits(param_1,0x3f00,0x1000);
      uVar1 = 0;
      goto LAB_00023abc;
    }
  }
  else if ((uVar1 & 1) == 0) {
    uVar1 = uVar1 | 1;
    isp3_param_set_bits(param_1,0x404,0x1000000);
LAB_00023abc:
    isp3_param_write(param_1,uVar1,0x3900,param_4);
    return;
  }
  return;
}



/* ===== isp_bay3d_config @ 00023acc size=808 ===== */

void isp_bay3d_config(int param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  iVar13 = *(int *)(param_1 + 0xa8c);
  uVar1 = isp3_param_read(param_1,0x2c00);
  if (param_2[0xb] == '\0') {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x1000;
  }
  if (param_2[10] == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x800;
  }
  if (param_2[9] == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x400;
  }
  if (param_2[8] == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = 0x200;
  }
  if (param_2[7] == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x100;
  }
  if (param_2[5] == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x40;
  }
  if (param_2[4] == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x20;
  }
  if (param_2[1] == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = 4;
  }
  if (*param_2 == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = 2;
  }
  uVar1 = uVar11 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar1 & 0x2001;
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
    if (param_2[6] == '\0') {
      uVar11 = 0;
    }
    else {
      uVar11 = 0x80;
    }
    if (param_2[3] == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x10;
    }
    uVar1 = uVar1 | uVar11 | uVar3;
  }
  if ((int)(uVar1 << 0x1f) < 0) {
    if (param_2[0xc] == '\0') {
      uVar11 = 0;
    }
    else {
      uVar11 = 0x2000;
    }
    if ((uVar1 & 0x2000) != uVar11) {
      printk(DAT_00023df4,*(int *)(param_1 + 0x500) + 0xa8);
    }
  }
  else {
    uVar1 = uVar1 & 0xffffdfff;
    if (param_2[0xc] != '\0') {
      uVar1 = uVar1 | 0x2000;
    }
  }
  isp3_param_write(param_1,uVar1,0x2c00);
  if (param_2[0x18] == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x1000;
  }
  if (param_2[0x15] == '\0') {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x100;
  }
  if (param_2[0x14] == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x80;
  }
  if (param_2[0x11] == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x10;
  }
  if (param_2[0x10] == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = 8;
  }
  if (param_2[0xf] == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 4;
  }
  if (param_2[0xd] != '\0') {
    uVar1 = uVar1 | 1;
  }
  uVar3 = uVar1 | uVar11 | uVar3;
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
    if (param_2[0x17] == '\0') {
      uVar11 = 0;
    }
    else {
      uVar11 = 0x800;
    }
    if (param_2[0x13] == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x40;
    }
    if (param_2[0x12] == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x20;
    }
    uVar1 = ((byte)param_2[0x16] & 3) << 9 | uVar11 | uVar7 | uVar1;
    bVar15 = param_2[0xe] == '\0';
    uVar11 = 0;
    if (!bVar15) {
      uVar11 = 2;
    }
  }
  else {
    if (param_2[0x1a] == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x4000;
    }
    bVar15 = param_2[0x19] == '\0';
    uVar11 = 0;
    if (!bVar15) {
      uVar11 = 0x2000;
    }
  }
  if (bVar15) {
    uVar11 = 0;
  }
  uVar7 = uVar1 | uVar11 | uVar3 | uVar4 | uVar5 | uVar6;
  if (*(char *)(iVar13 + 0x579) == '\0') {
    if (uVar4 == 0 && uVar5 == 0) {
      uVar7 = uVar7 | 8;
    }
  }
  else {
    uVar7 = uVar1 | uVar11 | uVar3 | uVar6;
  }
  isp3_param_write(param_1,uVar7,0x2c0c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1f),0x2c04);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0xf9),0x2c08);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x23),0x2c10);
  iVar14 = 0x2c14;
  iVar13 = 0;
  do {
    iVar12 = iVar13 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar13 * 2 + 0x27),iVar14);
    iVar2 = iVar14 + 0x40;
    iVar14 = iVar14 + 4;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar13 * 2 + 0x67),iVar2);
    iVar13 = iVar12;
  } while (iVar12 != 0x10);
  iVar14 = 0x2c34;
  iVar13 = 0;
  do {
    iVar12 = iVar13 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar13 * 2 + 0x47),iVar14);
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar13 * 2 + 0x87),iVar14 + 0x40);
    iVar2 = iVar14 + 0x60;
    iVar14 = iVar14 + 4;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar13 * 2 + 199),iVar2);
    iVar13 = iVar12;
  } while (iVar12 != 0x10);
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x80) {
    isp3_param_write(param_1,(uint)*(ushort *)(param_2 + 0xe7) << 0x10,0x2cb8);
  }
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0xe9),0x2ce4);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0xed),0x2ce8);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0xf1),0x2cec);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0xf5),0x2cf0);
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
    uVar1 = *(uint *)(param_2 + 0x1b);
  }
  else {
    uVar1 = (uint)(byte)param_2[0x1d] << 0x10 | (uint)(byte)param_2[0x1c] << 8 |
            (uint)(byte)param_2[0x1b];
  }
  isp3_param_write(param_1,uVar1,0x2cf4);
  return;
}



/* ===== __isp_isr_meas_config @ 00023df8 size=358 ===== */

void __isp_isr_meas_config(uint param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  iVar4 = *(int *)(param_1 + 0xa84);
  iVar5 = *(int *)(param_1 + 0xa8c);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  iVar1 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x5f0) = uVar2;
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x80) {
    uVar3 = uVar3 & 0xfce7ffff;
  }
  if (param_3 != 2) {
    uVar6 = param_1;
    iVar7 = param_2;
    if (3 < *DAT_00023f60) {
      uVar6 = uVar3;
      printk(DAT_00023f68,*(int *)(param_1 + 0x500) + 0xa8,DAT_00023f64,uVar2,uVar3,iVar1);
      iVar7 = iVar1;
    }
    if ((uVar3 & 0x20000) != 0) {
      (**(code **)(iVar4 + 0x50))
                (param_1,param_2 + 0x1c,uVar3 & 0x20000,*(code **)(iVar4 + 0x50),uVar6,iVar7);
    }
    if (((uVar3 & 0x40000) != 0) &&
       ((*(char *)(param_1 + 0x5e0) == '\0' ||
        (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) != 0x80)))) {
      (**(code **)(iVar4 + 0x58))(param_1,param_2 + 0x41b);
    }
    if ((uVar3 & 0x80000) != 0) {
      (**(code **)(iVar4 + 0x60))(param_1,param_2 + 0x425);
    }
    if ((uVar3 & 0x100000) != 0) {
      (**(code **)(iVar4 + 0x68))(param_1,param_2 + 0x453);
    }
    if (((uVar3 & 0x200000) != 0) &&
       ((*(char *)(param_1 + 0x5e0) == '\0' ||
        (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) != 0x70)))) {
      (**(code **)(iVar4 + 0x70))(param_1,param_2 + 0x481);
    }
    if ((uVar3 & 0x800000) != 0) {
      (**(code **)(iVar4 + 0x80))(param_1,param_2 + 0x4af);
    }
    if ((uVar3 & 0x1000000) != 0) {
      (**(code **)(iVar4 + 0x88))(param_1,param_2 + 0x4d8);
    }
    if ((uVar3 & 0x2000000) != 0) {
      (**(code **)(iVar4 + 0x90))(param_1,param_2 + 0x5ca);
    }
    if ((uVar3 & 0x4000000) != 0) {
      (**(code **)(iVar4 + 0x98))(param_1,param_2 + 0x6bc);
    }
    if (((uVar3 & 0x400000) != 0) ||
       ((*(int *)(iVar5 + 0x208) == 2 && (iVar1 = isp3_param_read(param_1,0x5000), -1 < iVar1 << 8))
       )) {
                    /* WARNING: Could not recover jumptable at 0x00023f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar4 + 0x78))(param_1,param_2 + 0xf4);
      return;
    }
  }
  return;
}



/* ===== __isp_isr_other_config @ 00023f6c size=744 ===== */

void __isp_isr_other_config(uint param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar2 = *(uint *)(param_2 + 0x14);
  puVar1 = *(undefined4 **)(param_1 + 0xa84);
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x80) {
    uVar3 = uVar3 & 0xbfffffff;
    uVar2 = uVar2 & 0xffffdbef;
  }
  if (param_3 == 2) {
    if ((uVar3 & 0x8000000) != 0) {
      (*(code *)puVar1[0x2a])(param_1,param_2 + 0x1483);
    }
    if ((uVar2 & 0x200) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00023fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)puVar1[0x28])(param_1,param_2 + 0x13f5,2);
      return;
    }
  }
  else {
    uVar4 = param_1;
    uVar5 = param_2;
    if (3 < *DAT_00024254) {
      uVar4 = uVar3;
      uVar5 = uVar2;
      printk(DAT_0002425c,*(int *)(param_1 + 0x500) + 0xa8,DAT_00024258,
             *(undefined4 *)(param_2 + 0x18),uVar3,uVar2,param_3);
    }
    if ((uVar3 & 0x10) != 0) {
      (*(code *)puVar1[6])(param_1,param_2 + 0x894,uVar3 & 0x10,(code *)puVar1[6],uVar4,uVar5);
    }
    if ((uVar3 & 1) != 0) {
      (*(code *)*puVar1)(param_1,param_2 + 0x7da);
    }
    if ((uVar3 & 2) != 0) {
      (*(code *)puVar1[2])(param_1,param_2 + 0x7ae);
    }
    if ((uVar3 & 4) != 0) {
      (*(code *)puVar1[4])(param_1,param_2 + 4999);
    }
    if ((uVar3 & 0x20) != 0) {
      (*(code *)puVar1[8])(param_1,param_2 + 0x1225);
    }
    if ((uVar2 & 8) != 0) {
      (*(code *)puVar1[10])(param_1,param_2 + 0x1282);
    }
    if ((uVar3 & 0x100) != 0) {
      (*(code *)puVar1[0xc])(param_1,param_2 + 0x12bb);
    }
    if ((uVar3 & 0x200) != 0) {
      (*(code *)puVar1[0xe])(param_1,param_2 + 0x130a);
    }
    if ((uVar2 & 0x800) != 0) {
      (*(code *)puVar1[0x42])(param_1,param_2 + 0x2b54);
    }
    if ((uVar2 & 0x1000) != 0) {
      (*(code *)puVar1[0x43])(param_1,param_2 + 0x2b7d);
    }
    if ((uVar3 & 0x400) != 0) {
      (*(code *)puVar1[0x10])(param_1,param_2 + 0x1370);
    }
    if ((uVar3 & 0x2000) != 0) {
      (*(code *)puVar1[0x12])(param_1,param_2 + 0x1377);
    }
    if ((uVar3 & 0x8000000) != 0) {
      (*(code *)puVar1[0x2a])(param_1,param_2 + 0x1483,param_3);
    }
    if ((uVar2 & 0x200) != 0) {
      (*(code *)puVar1[0x28])(param_1,param_2 + 0x13f5,param_3);
    }
    if ((uVar3 & 0x40000000) != 0) {
      (*(code *)puVar1[0x2c])(param_1,param_2 + 0x1245);
    }
    if ((uVar3 & 0x80000000) != 0) {
      (*(code *)puVar1[0x2e])(param_1,param_2 + 0x154e);
    }
    if ((uVar2 & 1) != 0) {
      (*(code *)puVar1[0x30])(param_1,param_2 + 0x1682);
    }
    if ((uVar2 & 2) != 0) {
      (*(code *)puVar1[0x32])(param_1,param_2 + 0x279d);
    }
    if ((uVar2 & 0x40) != 0) {
      (*(code *)puVar1[0x34])(param_1,param_2 + 0x2966);
    }
    if ((uVar2 & 0x80) != 0) {
      (*(code *)puVar1[0x36])(param_1,param_2 + 0x2a08);
    }
    if ((uVar2 & 0x100) != 0) {
      (*(code *)puVar1[0x38])(param_1,param_2 + 0x2a43);
    }
    if ((uVar2 & 0x10) != 0) {
      (*(code *)puVar1[0x3a])(param_1,param_2 + 0x27d3);
    }
    if ((uVar2 & 0x20) != 0) {
      (*(code *)puVar1[0x3c])(param_1,param_2 + 0x2869);
    }
    if ((uVar2 & 0x400) != 0) {
      (*(code *)puVar1[0x40])(param_1,param_2 + 0x2af2);
    }
    if ((uVar2 & 4) != 0) {
      (*(code *)puVar1[0x3e])(param_1,param_2 + 0x2b4c);
    }
    if ((uVar2 & 0x2000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0002424c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)puVar1[0x44])(param_1,param_2 + 0x2b7f);
      return;
    }
  }
  return;
}



/* ===== __isp_isr_other_en @ 00024260 size=740 ===== */

void __isp_isr_other_en(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = param_2[1];
  uVar4 = *param_2;
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x80) {
    uVar4 = uVar4 & 0xbfffffff;
    uVar2 = uVar2 & 0xffffdbef;
  }
  if (param_3 != 2) {
    iVar1 = *(int *)(param_1 + 0xa84);
    iVar6 = *(int *)(param_1 + 0xa8c);
    uVar3 = param_2[2];
    uVar5 = param_2[3];
    if (3 < *DAT_00024544) {
      printk(DAT_0002454c,*(int *)(param_1 + 0x500) + 0xa8,DAT_00024548,param_2[6],uVar4,uVar2,uVar3
             ,uVar5);
    }
    if ((uVar4 & 1) != 0) {
      (**(code **)(iVar1 + 4))(param_1,uVar3 & 1);
    }
    if ((uVar4 & 2) != 0) {
      (**(code **)(iVar1 + 0xc))(param_1,(uVar3 & 3) >> 1);
    }
    if ((uVar4 & 4) != 0) {
      (**(code **)(iVar1 + 0x14))(param_1,(uVar3 & 7) >> 2);
    }
    if ((uVar4 & 0x10) != 0) {
      (**(code **)(iVar1 + 0x1c))(param_1,(uVar3 & 0x1f) >> 4);
      *(byte *)(iVar6 + 0x574) = (byte)((uVar3 << 0x1b) >> 0x1f);
    }
    if ((uVar4 & 0x20) != 0) {
      (**(code **)(iVar1 + 0x24))(param_1,(uVar3 & 0x3f) >> 5);
    }
    if ((uVar2 & 8) != 0) {
      (**(code **)(iVar1 + 0x2c))(param_1,(uVar5 & 0xf) >> 3);
    }
    if ((uVar4 & 0x100) != 0) {
      (**(code **)(iVar1 + 0x34))(param_1,(uVar3 & 0x1ff) >> 8);
    }
    if ((uVar4 & 0x200) != 0) {
      (**(code **)(iVar1 + 0x3c))(param_1,(uVar3 & 0x3ff) >> 9);
    }
    if ((uVar4 & 0x400) != 0) {
      (**(code **)(iVar1 + 0x44))(param_1,(uVar3 & 0x7ff) >> 10);
    }
    if ((uVar4 & 0x2000) != 0) {
      (**(code **)(iVar1 + 0x4c))(param_1,(uVar3 & 0x3fff) >> 0xd);
    }
    if ((uVar4 & 0x8000000) != 0) {
      (**(code **)(iVar1 + 0xac))(param_1,(uVar3 & 0xfffffff) >> 0x1b);
      *(byte *)(iVar6 + 0x575) = (byte)((uVar3 << 4) >> 0x1f);
    }
    if ((uVar2 & 0x200) != 0) {
      (**(code **)(iVar1 + 0xa4))(param_1,(uVar5 & 0x3ff) >> 9);
      *(byte *)(iVar6 + 0x573) = (byte)((uVar5 << 0x16) >> 0x1f);
    }
    if ((uVar4 & 0x40000000) != 0) {
      (**(code **)(iVar1 + 0xb4))(param_1,(uVar3 & 0x7fffffff) >> 0x1e);
    }
    if ((uVar4 & 0x80000000) != 0) {
      (**(code **)(iVar1 + 0xbc))(param_1,uVar3 >> 0x1f);
      *(byte *)(iVar6 + 0x572) = (byte)(uVar3 >> 0x1f);
    }
    if ((uVar2 & 1) != 0) {
      (**(code **)(iVar1 + 0xc4))(param_1,uVar5 & 1);
      *(char *)(iVar6 + 0x576) = (char)(uVar5 & 1);
    }
    if ((uVar2 & 2) != 0) {
      (**(code **)(iVar1 + 0xcc))(param_1,(uVar5 & 3) >> 1);
    }
    if ((uVar2 & 0x40) != 0) {
      (**(code **)(iVar1 + 0xd4))(param_1,(uVar5 & 0x7f) >> 6);
    }
    if ((uVar2 & 0x80) != 0) {
      (**(code **)(iVar1 + 0xdc))(param_1,(uVar5 & 0xff) >> 7);
    }
    if ((uVar2 & 0x100) != 0) {
      (**(code **)(iVar1 + 0xe4))(param_1,(uVar5 & 0x1ff) >> 8);
    }
    if ((uVar2 & 0x10) != 0) {
      (**(code **)(iVar1 + 0xec))(param_1,(uVar5 & 0x1f) >> 4);
    }
    if ((uVar2 & 0x20) != 0) {
      (**(code **)(iVar1 + 0xf4))(param_1,(uVar5 & 0x3f) >> 5);
      *(byte *)(iVar6 + 0x577) = (byte)((uVar5 << 0x1a) >> 0x1f);
    }
    if ((uVar2 & 0x400) != 0) {
      (**(code **)(iVar1 + 0x104))(param_1,(uVar5 & 0x7ff) >> 10);
    }
    if (((uVar2 & 4) != 0) ||
       ((*(int *)(iVar6 + 0x208) == 1 && (iVar6 = isp3_param_read(param_1,0x3f00), -1 < iVar6 << 7))
       )) {
      (**(code **)(iVar1 + 0xfc))(param_1,(uVar5 & 7) >> 2);
    }
    if ((uVar2 & 0x2000) != 0) {
      (**(code **)(iVar1 + 0x114))(param_1,(uVar5 & 0x3fff) >> 0xd);
    }
    iVar1 = isp3_param_read_cache(param_1,0x3f00);
    uVar4 = isp3_param_read_cache(param_1,0x2800);
    if ((-1 < iVar1 << 0x1f) && ((int)(uVar4 << 0x1f) < 0)) {
      isp3_param_write(param_1,uVar4 | 2,0x2800);
      uVar4 = isp3_param_read(param_1,0x2804);
      isp3_param_write(param_1,uVar4 & 0x3ff | 0x8000,0x2804);
      return;
    }
  }
  return;
}



/* ===== __isp_isr_meas_en @ 00024550 size=336 ===== */

void __isp_isr_meas_en(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *param_2;
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x80) {
    uVar1 = uVar1 & 0xfce7ffff;
  }
  if (param_3 != 2) {
    iVar3 = *(int *)(param_1 + 0xa84);
    uVar2 = param_2[2];
    if (3 < *DAT_000246a8) {
      printk(DAT_000246a4,*(int *)(param_1 + 0x500) + 0xa8,DAT_000246a0,param_2[6],uVar1,param_2[1],
             uVar2,param_2[3]);
    }
    if ((uVar1 & 0x20000) != 0) {
      (**(code **)(iVar3 + 0x54))(param_1,(uVar2 & 0x3ffff) >> 0x11);
    }
    if (((uVar1 & 0x40000) != 0) &&
       ((*(char *)(param_1 + 0x5e0) == '\0' ||
        (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) != 0x80)))) {
      (**(code **)(iVar3 + 0x5c))(param_1,(uVar2 & 0x7ffff) >> 0x12);
    }
    if ((uVar1 & 0x80000) != 0) {
      (**(code **)(iVar3 + 100))(param_1,(uVar2 & 0xfffff) >> 0x13);
    }
    if ((uVar1 & 0x100000) != 0) {
      (**(code **)(iVar3 + 0x6c))(param_1,(uVar2 & 0x1fffff) >> 0x14);
    }
    if (((uVar1 & 0x200000) != 0) &&
       ((*(char *)(param_1 + 0x5e0) == '\0' ||
        (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) != 0x70)))) {
      (**(code **)(iVar3 + 0x74))(param_1,(uVar2 & 0x3fffff) >> 0x15);
    }
    if ((uVar1 & 0x800000) != 0) {
      (**(code **)(iVar3 + 0x84))(param_1,(uVar2 & 0xffffff) >> 0x17);
    }
    if ((uVar1 & 0x1000000) != 0) {
      (**(code **)(iVar3 + 0x8c))(param_1,(uVar2 & 0x1ffffff) >> 0x18);
    }
    if ((uVar1 & 0x2000000) != 0) {
      (**(code **)(iVar3 + 0x94))(param_1,(uVar2 & 0x3ffffff) >> 0x19);
    }
    if ((uVar1 & 0x4000000) != 0) {
      (**(code **)(iVar3 + 0x9c))(param_1,(uVar2 & 0x7ffffff) >> 0x1a);
    }
    if ((uVar1 & 0x400000) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0002469a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar3 + 0x7c))(param_1,(uVar2 & 0x7fffff) >> 0x16);
      return;
    }
  }
  return;
}



/* ===== rkisp_params_disable_isp_v32 @ 000246ac size=76 ===== */

void rkisp_params_disable_isp_v32
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x50c);
  *(undefined1 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 9) = 0;
  *(undefined1 *)(iVar1 + 10) = 0;
  *(undefined1 *)(iVar1 + 0xb) = 0;
  *(undefined1 *)(iVar1 + 0xc) = 0;
  *(undefined1 *)(iVar1 + 0xd) = 0;
  *(undefined1 *)(iVar1 + 0xe) = 0;
  *(undefined1 *)(iVar1 + 0xf) = 0;
  puVar2 = *(undefined1 **)(param_1 + 0x50c);
  *puVar2 = 0xff;
  puVar2[1] = 0xff;
  puVar2[2] = 0xff;
  puVar2[3] = 0xff;
  puVar2[4] = 0xff;
  puVar2[6] = 0;
  puVar2[5] = 7;
  puVar2[7] = 0;
  __isp_isr_other_en(param_1,*(undefined4 *)(param_1 + 0x50c),0);
  __isp_isr_meas_en(param_1,*(undefined4 *)(param_1 + 0x50c),0,param_4);
  return;
}



/* ===== isp_rawhstbig_cfg_sram @ 000246f8 size=242 ===== */

void isp_rawhstbig_cfg_sram(undefined4 param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  int local_110 [4];
  byte abStack_fd [225];
  int local_1c;
  
  piVar2 = DAT_000247ec;
  local_1c = *DAT_000247ec;
  local_110[0] = *DAT_000247f0;
  local_110[1] = DAT_000247f0[1];
  local_110[2] = DAT_000247f0[2];
  local_110[3] = DAT_000247f0[3];
  if (param_3 == 1) {
    iVar8 = 0x4a00;
  }
  else if (param_3 == 2) {
    iVar8 = 0x4b00;
  }
  else {
    iVar8 = 0x4800;
  }
  if ((param_4 == 0) || (iVar3 = isp3_param_read(param_1,iVar8), iVar3 << 0x1f < 0)) {
    pbVar7 = param_2 + 0x11;
    bVar1 = *param_2;
    memset(abStack_fd,0,0xe1);
    iVar3 = local_110[bVar1];
    for (iVar6 = 0; iVar3 != iVar6; iVar6 = iVar6 + 1) {
      pbVar5 = abStack_fd + iVar6 * 0xf;
      pbVar9 = pbVar7;
      for (iVar4 = 0; iVar3 != iVar4; iVar4 = iVar4 + 1) {
        *pbVar5 = *pbVar9;
        pbVar5 = pbVar5 + 1;
        pbVar9 = pbVar9 + 1;
      }
      pbVar7 = pbVar7 + iVar3;
    }
    iVar3 = 0;
    pbVar7 = abStack_fd;
    do {
      iVar3 = iVar3 + 1;
      isp3_param_write_direct
                (param_1,(pbVar7[4] & 0x3f) << 0x18 |
                         (pbVar7[1] & 0x3f) << 6 | (pbVar7[2] & 0x3f) << 0xc | *pbVar7 & 0x3f |
                         (pbVar7[3] & 0x3f) << 0x12,iVar8 + 0x40);
      pbVar7 = pbVar7 + 5;
    } while (iVar3 != 0x2d);
  }
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== isp_rawhstbig_config @ 000247f4 size=300 ===== */

void isp_rawhstbig_config(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  void *__dest;
  int iVar7;
  undefined4 auStack_38 [5];
  
  iVar6 = *(int *)(param_1 + 0x50c);
  iVar7 = *(int *)(param_1 + 0x500);
  auStack_38[0] = *DAT_00024920;
  auStack_38[1] = DAT_00024920[1];
  auStack_38[2] = DAT_00024920[2];
  auStack_38[3] = DAT_00024920[3];
  if (param_3 == 1) {
    __dest = (void *)(iVar6 + 0x4d8);
    iVar6 = 0x4a00;
  }
  else if (param_3 == 2) {
    __dest = (void *)(iVar6 + 0x5ca);
    iVar6 = 0x4b00;
  }
  else {
    __dest = (void *)(iVar6 + 0x6bc);
    iVar6 = 0x4800;
  }
  bVar1 = *param_2;
  uVar2 = isp3_param_read(param_1,iVar6);
  uVar2 = (param_2[3] & 7) << 8 | (*param_2 & 3) << 0x1c | (param_2[4] & 7) << 1 | uVar2 & 1;
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
    uVar2 = uVar2 | (param_2[1] & 7) << 0x18 | (uint)param_2[2] << 0xc;
  }
  isp3_param_write(param_1,uVar2,iVar6);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 9),iVar6 + 8);
  uVar5 = auStack_38[bVar1];
  iVar3 = __aeabi_uidiv(*(undefined2 *)(param_2 + 0xd),uVar5);
  iVar4 = __aeabi_uidiv(*(undefined2 *)(param_2 + 0xf),uVar5);
  isp3_param_write(param_1,DAT_00024924 & (iVar4 + -1) * 0x10000 | iVar3 - 1U & 0xfffe,iVar6 + 4);
  uVar2 = *(uint *)(param_2 + 5);
  isp3_param_write(param_1,uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8
                           | uVar2 >> 0x18,iVar6 + 0x10);
  if (*(char *)(*(int *)(iVar7 + 0x94) + 0x7b9) != '\0') {
    isp_rawhstbig_cfg_sram(param_1,param_2,param_3,0);
    return;
  }
  memcpy(__dest,param_2,0xf2);
  return;
}



/* ===== isp_rawhst3_config @ 00024928 size=4 ===== */

void isp_rawhst3_config(undefined4 param_1,undefined4 param_2)

{
  isp_rawhstbig_config(param_1,param_2,0);
  return;
}



/* ===== isp_rawhst2_config @ 0002492c size=4 ===== */

void isp_rawhst2_config(undefined4 param_1,undefined4 param_2)

{
  isp_rawhstbig_config(param_1,param_2,2);
  return;
}



/* ===== isp_rawhst1_config @ 00024930 size=4 ===== */

void isp_rawhst1_config(undefined4 param_1,undefined4 param_2)

{
  isp_rawhstbig_config(param_1,param_2,1);
  return;
}



/* ===== rkisp_clear_first_param_v32 @ 00024934 size=14 ===== */

void rkisp_clear_first_param_v32(int param_1)

{
  memset(*(void **)(param_1 + 0x50c),0,0x2b89);
  return;
}



/* ===== isp_rawawb_config @ 00024942 size=3132 ===== */

void isp_rawawb_config(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  iVar12 = *(int *)(param_1 + 0x50c);
  uVar1 = isp3_param_read(param_1,0x3000,param_3,param_4,param_1,param_2,param_3);
  uVar1 = uVar1 & 0xffffffdf;
  if (*param_2 != '\0') {
    iVar9 = *(int *)(param_1 + 0x5e8);
    iVar5 = (int)*(short *)(param_2 + 799);
    if (iVar9 == 2) {
      isp3_param_write(param_1,iVar5,0x3060);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x321),0x3064);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x323),0x3058);
      uVar7 = 0x305c;
    }
    else if (iVar9 == 3) {
      isp3_param_write(param_1,iVar5,0x3064);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x321),0x3060);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x323),0x305c);
      uVar7 = 0x3058;
    }
    else if (iVar9 == 1) {
      isp3_param_write(param_1,iVar5,0x305c);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x321),0x3058);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x323),0x3064);
      uVar7 = 0x3060;
    }
    else {
      isp3_param_write(param_1,iVar5,0x3058);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x321),0x305c);
      isp3_param_write(param_1,(int)*(short *)(param_2 + 0x323),0x3060);
      uVar7 = 0x3064;
    }
    isp3_param_write(param_1,(int)*(short *)(param_2 + 0x325),uVar7);
    uVar1 = uVar1 | 0x20;
  }
  isp3_param_write(param_1,uVar1,0x3000);
  if (param_2[0x148] == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x100;
  }
  if (param_2[0x145] == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = 8;
  }
  if (param_2[0x144] == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
  }
  if (param_2[0x143] == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 2;
  }
  uVar8 = ((byte)param_2[0x146] & 7) << 4 |
          (uint)(param_2[0x142] != '\0') | (uint)*(ushort *)(param_2 + 0x149) << 0x10 | uVar1 |
          uVar13 | uVar2 | uVar8;
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x80) {
    uVar1 = 0x80;
    if (param_2[0x147] == '\0') {
      uVar1 = 0;
    }
    uVar8 = uVar8 | uVar1;
  }
  isp3_param_write(param_1,uVar8,0x5004);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x15b),0x5008);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x15f),0x500c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x14b),0x5010);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x14f),0x5014);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x153),0x5018);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x157),0x501c);
  if (param_2[0x18] == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x10;
  }
  if (param_2[0x17] == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = 8;
  }
  if (param_2[0x16] == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
  }
  if (param_2[0x15] == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 2;
  }
  if (param_2[0x14] != '\0') {
    uVar1 = uVar1 | 1;
  }
  isp3_param_write(param_1,uVar8 | uVar1 | uVar13 | uVar2,0x5020);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2c),0x5024);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x30),0x5028);
  isp3_param_write(param_1,param_2[0x34],0x502c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x35),0x5030);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x39),0x5034);
  isp3_param_write(param_1,(uint)(byte)param_2[0x3d] | (uint)*(ushort *)(param_2 + 0x163) << 0x10,
                   0x5038);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x165),0x503c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x169),0x5040);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x16d),0x5044);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x171),0x5048);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x175),0x504c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2cb),0x5050);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2cf),0x5054);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2d3),0x5058);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2d7),0x505c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x179),0x5060);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x17d),0x5064);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x181),0x5068);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x185),0x506c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2db),0x5070);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2df),0x5074);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2e3),0x5078);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2e7),0x507c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x189),0x5080);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x18d),0x5084);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x191),0x5088);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x195),0x508c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2eb),0x5090);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2ef),0x5094);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2f3),0x5098);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2f7),0x509c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x199),0x50a0);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x19d),0x50a4);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1a1),0x50a8);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1a5),0x50ac);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2fb),0x50b0);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2ff),0x50b4);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x303),0x50b8);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x307),0x50bc);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x253),0x5120);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 599),0x5124);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x25b),0x5128);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x25f),0x512c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x263),0x5130);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x267),0x5134);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x26b),0x5140);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x26f),0x5144);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x273),0x5148);
  isp3_param_write(param_1,(uint)(byte)param_2[0x3e] |
                           (uint)(byte)param_2[0x40] << 0x18 | (uint)(byte)param_2[0x3f] << 0x10,
                   0x514c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x41),0x5150);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x29b),0x5154);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x29f),0x5158);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2a3),0x515c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x277),0x5160);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x27b),0x5164);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x27f),0x5168);
  isp3_param_write(param_1,(uint)(byte)param_2[0x45] |
                           (uint)(byte)param_2[0x47] << 0x18 | (uint)(byte)param_2[0x46] << 0x10,
                   0x516c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x48),0x5170);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2a7),0x5174);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2ab),0x5178);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2af),0x517c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x283),0x5180);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x28d),
                                    *(undefined2 *)(param_2 + 0x287)),0x5184);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x289),
                                    *(undefined2 *)(param_2 + 0x28b)),0x5188);
  isp3_param_write(param_1,(uint)(byte)param_2[0x4c] |
                           (uint)(byte)param_2[0x4e] << 0x18 | (uint)(byte)param_2[0x4d] << 0x10,
                   0x518c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x4f),0x5190);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2b3),0x5194);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2b7),0x5198);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 699),0x519c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x28f),0x51a0);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x293),0x51a4);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x297),0x51a8);
  isp3_param_write(param_1,(uint)(byte)param_2[0x53] |
                           (uint)(byte)param_2[0x55] << 0x18 | (uint)(byte)param_2[0x54] << 0x10,
                   0x51ac);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x56),0x51b0);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2bf),0x51b4);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2c3),0x51b8);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x2c7),0x51bc);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1a9),0x51fc);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x1ad),0x5200);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1af),0x5204);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1b3),21000);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1b7),0x520c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1bb),0x5210);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1bf),0x5214);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1db),0x5218);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1df),0x521c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1c3),0x5228);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1c7),0x522c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1e3),0x5230);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1e7),0x5234);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1cb),0x5240);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1cf),0x5244);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1eb),0x5248);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1ef),0x524c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1d3),0x5258);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1d7),0x525c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 499),0x5260);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x1f7),0x5264);
  if (param_2[0x1a] == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = 4;
  }
  if (param_2[0x1b] == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = 8;
  }
  if (param_2[0x1d] == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x40;
  }
  if (param_2[0x1e] == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x80;
  }
  if (param_2[0x20] == '\0') {
    uVar16 = 0;
  }
  else {
    uVar16 = 0x400;
  }
  if (param_2[0x21] == '\0') {
    uVar15 = 0;
  }
  else {
    uVar15 = 0x800;
  }
  if (param_2[0x23] == '\0') {
    uVar14 = 0;
  }
  else {
    uVar14 = 0x4000;
  }
  if (param_2[0x24] == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x8000;
  }
  if (param_2[0x26] == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x80000;
  }
  if (param_2[0x28] == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = 0x800000;
  }
  if (param_2[0x2a] == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 0x8000000;
  }
  if (param_2[0x2b] == '\0') {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x80000000;
  }
  isp3_param_write(param_1,uVar6 | uVar3 | ((byte)param_2[0x29] & 3) << 0x18 |
                                           ((byte)param_2[0x27] & 3) << 0x14 |
                                           ((byte)param_2[0x1f] & 3) << 8 |
                                           ((byte)param_2[0x1c] & 3) << 4 | (byte)param_2[0x19] & 3
                                           | ((byte)param_2[0x22] & 3) << 0xc |
                                           ((byte)param_2[0x25] & 3) << 0x10 | uVar1 | uVar13 |
                                           uVar2 | uVar8 | uVar16 | uVar15 | uVar14 | uVar10 | uVar4
                           | uVar11,0x52b8);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x1fb),
                                    *(undefined2 *)(param_2 + 0x1fd)),0x52bc);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x1ff),
                                    *(undefined2 *)(param_2 + 0x201)),0x52c0);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x203),
                                    *(undefined2 *)(param_2 + 0x205)),0x52c4);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x207),
                                    *(undefined2 *)(param_2 + 0x209)),0x52c8);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x20b),
                                    *(undefined2 *)(param_2 + 0x20d)),0x52cc);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x20f),
                                    *(undefined2 *)(param_2 + 0x211)),0x52d0);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x213),
                                    *(undefined2 *)(param_2 + 0x215)),0x52d4);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x217),
                                    *(undefined2 *)(param_2 + 0x219)),0x52d8);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x21b),0x52fc);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x21f),0x5300);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x223),0x5304);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x227),0x5308);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x22b),0x530c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x22f),0x5310);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x233),0x5314);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x237),0x5318);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x23b),0x531c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x23f),0x5320);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x243),0x5324);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x247),0x5328);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x24b),0x532c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x24f),0x5330);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x5a),0x5334);
  isp3_param_write(param_1,(uint)(byte)param_2[0x5e] |
                           (uint)(byte)param_2[0x60] << 0x10 | (uint)(byte)param_2[0x5f] << 8,0x5338
                  );
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x500) + 0x94) + 0x7b9) == '\0') {
      memcpy((void *)(iVar12 + 0x155),param_2 + 0x61,0xe1);
    }
    else {
      isp_rawawb_cfg_sram(param_1,param_2,0);
    }
  }
  else {
    iVar12 = 0;
    do {
      iVar9 = iVar12 + 0xc2;
      iVar5 = iVar12 * 4;
      iVar12 = iVar12 + 1;
      isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar9 * 4 + 3),iVar5 + 0x5660);
    } while (iVar12 != 5);
  }
  uVar1 = isp3_param_read_cache(param_1,0x5000);
  if (param_2[0x13] == '\0') {
    uVar13 = 0;
  }
  else {
    uVar13 = 0x10000000;
  }
  if (param_2[0x12] == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x4000000;
  }
  if (param_2[0x11] == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x2000000;
  }
  if (param_2[0x10] == '\0') {
    uVar16 = 0;
  }
  else {
    uVar16 = 0x1000000;
  }
  if (param_2[0xe] == '\0') {
    uVar15 = 0;
  }
  else {
    uVar15 = 0x80000;
  }
  if (param_2[0xd] == '\0') {
    uVar14 = 0;
  }
  else {
    uVar14 = 0x40000;
  }
  if (param_2[0xc] == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x20000;
  }
  if (param_2[0xb] == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x10000;
  }
  if (param_2[6] == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = 8;
  }
  if (param_2[5] == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = 4;
  }
  if (param_2[4] == '\0') {
    uVar11 = 0;
  }
  else {
    uVar11 = 2;
  }
  isp3_param_write(param_1,uVar11 | uVar16 | ((byte)param_2[7] & 7) << 4 |
                                             ((byte)param_2[10] & 7) << 0xd |
                                             ((byte)param_2[0xf] & 7) << 0x14 |
                                             ((byte)param_2[9] & 7) << 10 |
                                             ((byte)param_2[8] & 7) << 7 | uVar13 | uVar2 | uVar8 |
                                    uVar15 | uVar14 | uVar3 | uVar6 | uVar10 | uVar4 |
                           uVar1 & 0x8800001,0x5000);
  uVar13 = ((byte)param_2[3] & 1) << 0x1b |
           ((byte)param_2[1] & 3) << 0x14 | ((byte)param_2[2] & 1) << 0x1a;
  uVar1 = isp3_param_read(param_1,4);
  if ((uVar1 & 0xc300000) == uVar13) {
    return;
  }
  isp3_param_write(param_1,uVar1 & 0xf3cfffff | uVar13,4);
  return;
}



/* ===== rkisp_deinit_mesh_buf @ 0002557e size=52 ===== */

void rkisp_deinit_mesh_buf(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8c);
  if (iVar1 == 0) {
    return;
  }
  if (param_4 == 0x400 && param_3 == 0) {
    iVar1 = iVar1 + 0x114;
  }
  else {
    iVar1 = iVar1 + 0xc0;
  }
  rkisp_free_buffer(*(undefined4 *)(param_1 + 0x500),iVar1);
  rkisp_free_buffer(*(undefined4 *)(param_1 + 0x500),iVar1 + 0x28);
  return;
}



/* ===== rkisp_params_fop_release_v32 @ 000255b2 size=26 ===== */

void rkisp_params_fop_release_v32(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  
  rkisp_deinit_mesh_buf(param_1,param_2,0,2);
  rkisp_deinit_mesh_buf(param_1,extraout_r1,0,0x400);
  return;
}



/* ===== rkisp_params_free_meshbuf_v32 @ 000255cc size=2 ===== */

void rkisp_params_free_meshbuf_v32(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8c);
  if (iVar1 == 0) {
    return;
  }
  if (param_4 == 0x400 && param_3 == 0) {
    iVar1 = iVar1 + 0x114;
  }
  else {
    iVar1 = iVar1 + 0xc0;
  }
  rkisp_free_buffer(*(undefined4 *)(param_1 + 0x500),iVar1);
  rkisp_free_buffer(*(undefined4 *)(param_1 + 0x500),iVar1 + 0x28);
  return;
}



/* ===== rkisp_params_stream_stop_v32 @ 000255ce size=160 ===== */

void rkisp_params_stream_stop_v32
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x500);
  iVar1 = *(int *)(param_1 + 0xa8c);
  rkisp_free_buffer(iVar2,iVar1 + 0x298);
  rkisp_free_buffer(iVar2,iVar1 + 0x220);
  rkisp_free_buffer(iVar2,iVar1 + 0x248);
  rkisp_free_buffer(iVar2,iVar1 + 0x270);
  rkisp_free_buffer(iVar2,iVar1 + 0x6c);
  rkisp_free_buffer(iVar2,iVar1 + 0x94);
  rkisp_free_buffer(iVar2,iVar1 + 0x18);
  rkisp_free_buffer(iVar2,iVar1 + 0x40);
  rkisp_free_buffer(iVar2,iVar2 + 0x661c);
  *(undefined4 *)(iVar1 + 0x208) = 0;
  *(undefined4 *)(iVar1 + 0x20c) = 0;
  *(undefined4 *)(iVar1 + 0x210) = 0xffffffff;
  rkisp_free_buffer(iVar2,iVar1 + 0x168);
  rkisp_free_buffer(iVar2,iVar1 + 400);
  rkisp_free_buffer(iVar2,iVar1 + 0x1b8);
  rkisp_free_buffer(iVar2,iVar1 + 0x1e0,extraout_r2,param_4);
  return;
}



/* ===== rkisp_save_first_param_v32 @ 0002566e size=878 ===== */

void rkisp_save_first_param_v32(int param_1,void *param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  int unaff_r11;
  bool bVar19;
  
  iVar6 = param_1;
  memcpy(*(void **)(param_1 + 0x50c),param_2,*(size_t *)(param_1 + 0x518));
  iVar15 = *(int *)(param_1 + 0x50c);
  iVar11 = *(int *)(param_1 + 0x500);
  iVar10 = *(int *)(param_1 + 0xa8c);
  uVar17 = *(uint *)(iVar15 + 4);
  uVar14 = *(uint *)(iVar15 + 0xc);
  *(undefined4 *)(iVar10 + 0x68) = 0;
  if (*(int *)(iVar10 + 0x2c) == 0) {
    *(undefined1 *)(iVar10 + 0x3c) = 1;
    *(undefined4 *)(iVar10 + 0x34) = 0xb64;
    iVar5 = rkisp_alloc_buffer(iVar11,iVar10 + 0x18);
    iVar12 = 0;
    if (iVar5 == 0) goto LAB_0002569e;
LAB_00025746:
    _dev_err(*(undefined4 *)(iVar11 + 0xc),DAT_000259e0,iVar5);
    goto LAB_00025750;
  }
LAB_0002569e:
  if (*(int *)(iVar10 + 0x54) == 0) {
    iVar12 = 1;
    *(undefined1 *)(iVar10 + 100) = 1;
    *(undefined4 *)(iVar10 + 0x5c) = 0xb64;
    iVar5 = rkisp_alloc_buffer(iVar11,iVar10 + 0x40);
    if (iVar5 != 0) goto LAB_00025746;
  }
  bVar7 = false;
  if (((uVar17 & 0x20) == 0) || ((uVar14 & 0x20) == 0)) {
LAB_000256c8:
    if (*(int *)(iVar11 + 0x97a4) != 0x80) {
      return;
    }
    if ((*(char *)(*(int *)(iVar11 + 0x94) + 0x7c1) == '\0') || (*(int *)(iVar10 + 0x2ac) != 0)) {
LAB_00025968:
      bVar7 = false;
      *(undefined4 *)(iVar10 + 0xbc) = 0;
      *(undefined1 *)(iVar10 + 0x90) = 1;
      *(undefined4 *)(iVar10 + 0x88) = 0x990;
      iVar6 = rkisp_alloc_buffer(iVar11,iVar10 + 0x6c);
      if (iVar6 == 0) {
        *(undefined1 *)(iVar10 + 0xb8) = 1;
        *(undefined4 *)(iVar10 + 0xb0) = 0x990;
        iVar6 = rkisp_alloc_buffer(iVar11,iVar10 + 0x94);
        if (iVar6 == 0) {
          return;
        }
        bVar7 = true;
      }
      _dev_err(*(undefined4 *)(iVar11 + 0xc),DAT_000259f0,iVar6);
      if (*(int *)(iVar10 + 0x2ac) != 0) {
        rkisp_free_buffer(iVar11,iVar10 + 0x298);
      }
      if (bVar7) {
        rkisp_free_buffer(iVar11,iVar10 + 0x6c);
      }
    }
    else {
      *(undefined4 *)(iVar10 + 0x2b4) = 0x1d000;
      iVar6 = rkisp_alloc_buffer(iVar11,iVar10 + 0x298);
      if (iVar6 == 0) goto LAB_00025968;
      _dev_err(*(undefined4 *)(iVar11 + 0xc),DAT_000259dc,iVar6);
    }
    rkisp_free_buffer(iVar11,iVar10 + 0x248);
    rkisp_free_buffer(iVar11,iVar10 + 0x220);
    rkisp_free_buffer(iVar11,iVar10 + 0x270);
  }
  else {
    sVar4 = *(short *)(iVar15 + 0x7d4);
    bVar19 = (*(uint *)(iVar11 + 0x9b1c) & 0xfffffffb) != 0;
    cVar1 = *(char *)(iVar15 + 0x2875);
    cVar2 = *(char *)(iVar15 + 0x2873);
    cVar3 = *(char *)(iVar15 + 0x2878);
    if (bVar19) {
      unaff_r11 = 1;
    }
    if (!bVar19) {
      unaff_r11 = 0;
    }
    uVar17 = *(int *)(iVar11 + 0xe40) + 0xfU & 0xfffffff0;
    uVar18 = *(int *)(iVar11 + 0xe3c) + 0xfU & 0xfffffff0;
    uVar14 = (uint)*(byte *)(iVar15 + 0x2879);
    if (uVar14 == 0) {
      uVar14 = 0x287a;
      bVar7 = *(char *)(iVar15 + 0x287a) == '\0';
    }
    *(bool *)(iVar10 + 0x579) = bVar7;
    uVar13 = uVar18;
    if (cVar3 == '\0') {
      uVar13 = uVar18 << 1;
    }
    if (cVar1 != '\0') {
      uVar13 = uVar13 * 3 >> 2;
    }
    uVar9 = uVar13;
    if (cVar2 == '\0') {
      uVar9 = uVar13 + (uVar18 >> 3);
    }
    if (cVar3 == '\0') {
      uVar16 = 2;
    }
    else {
      uVar16 = 1;
    }
    iVar6 = __aeabi_uidiv(uVar17 * uVar9 * 2,uVar16,cVar3,uVar14,iVar6,param_2,param_3);
    uVar14 = iVar6 + 0xfU & 0xfffffff0;
    if (*(int *)(iVar10 + 0x234) != 0) {
      uVar9 = *(uint *)(iVar10 + 0x23c);
      if (uVar9 < uVar14) {
        rkisp_free_buffer(iVar11,iVar10 + 0x220);
        goto LAB_0002582a;
      }
LAB_00025850:
      if (*(char *)(iVar10 + 0x579) == '\0') {
        uVar8 = 0x10;
      }
      else {
        uVar8 = 0x40;
      }
      iVar6 = __aeabi_uidiv(uVar17 * uVar18,uVar8,uVar9);
      uVar14 = iVar6 * 2 + 0xfU & 0xfffffff0;
      if (*(int *)(iVar10 + 0x284) == 0) {
LAB_00025884:
        *(uint *)(iVar10 + 0x28c) = uVar14;
        iVar6 = rkisp_alloc_buffer(iVar11,iVar10 + 0x270);
        if (iVar6 != 0) {
          rkisp_free_buffer(iVar11,iVar10 + 0x220);
          uVar8 = DAT_000259e8;
          goto LAB_0002583e;
        }
      }
      else if (*(uint *)(iVar10 + 0x28c) < uVar14) {
        rkisp_free_buffer(iVar11,iVar10 + 0x270);
        goto LAB_00025884;
      }
      if (*(int *)(iVar11 + 0x97a4) == 0x70) {
        if (*(char *)(iVar10 + 0x579) == '\0') {
          iVar15 = 0x24;
        }
        else {
          iVar15 = 0x4c;
        }
      }
      else if (*(char *)(iVar10 + 0x579) == '\0') {
        iVar15 = 0x20;
      }
      else {
        iVar15 = 0x40;
      }
      if ((sVar4 != 0) || (unaff_r11 != 0)) {
        uVar13 = uVar13 + (uVar18 >> 3);
      }
      uVar14 = uVar13 * 2 + 0xf & 0xfffffff0;
      iVar6 = __aeabi_uidiv(iVar15 * uVar14,uVar16);
      uVar17 = iVar6 + 0xfU & 0xfffffff0;
      if (*(int *)(iVar10 + 0x25c) == 0) {
LAB_00025908:
        bVar7 = true;
      }
      else {
        if ((*(uint *)(iVar10 + 0x264) < uVar17) ||
           (uVar17 < *(uint *)(*(int *)(iVar11 + 0x94) + 0xf0))) {
          rkisp_free_buffer(iVar11,iVar10 + 0x248);
          goto LAB_00025908;
        }
        bVar7 = false;
      }
      if (*(uint *)(*(int *)(iVar11 + 0x94) + 0xf0) < uVar17) {
        if (bVar7) {
          *(uint *)(iVar10 + 0x264) = uVar17;
          iVar6 = rkisp_alloc_buffer(iVar11,iVar10 + 0x248);
          if (iVar6 != 0) {
            rkisp_free_buffer(iVar11,iVar10 + 0x220);
            rkisp_free_buffer(iVar11,iVar10 + 0x270);
            uVar8 = DAT_000259ec;
            goto LAB_0002583e;
          }
          *(undefined1 *)(iVar10 + 0x57a) = 0;
        }
      }
      else {
        *(undefined1 *)(iVar10 + 0x57a) = 1;
      }
      *(uint *)(iVar10 + 0x214) = uVar17;
      *(uint *)(iVar10 + 0x218) = uVar14;
      *(int *)(iVar10 + 0x21c) = iVar15;
      goto LAB_000256c8;
    }
LAB_0002582a:
    *(uint *)(iVar10 + 0x23c) = uVar14;
    iVar6 = rkisp_alloc_buffer(iVar11,iVar10 + 0x220);
    uVar9 = 0;
    uVar8 = DAT_000259e4;
    if (iVar6 == 0) goto LAB_00025850;
LAB_0002583e:
    _dev_err(*(undefined4 *)(iVar11 + 0xc),uVar8,iVar6);
  }
  iVar12 = 2;
LAB_00025750:
  for (iVar6 = iVar12 * 0x28 + iVar10; iVar6 != iVar10; iVar6 = iVar6 + -0x28) {
    rkisp_free_buffer(iVar11,iVar6 + -0x10);
  }
  return;
}



/* ===== rkisp_params_info2ddr_cfg_v32 @ 000259f4 size=668 ===== */

undefined4 rkisp_params_info2ddr_cfg_v32(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  uint local_38;
  uint local_34;
  
  iVar6 = *(int *)(param_1 + 0x500);
  iVar7 = *param_2;
  if ((*(int *)(iVar6 + 0x97a4) == 0x80) && (iVar7 == 1)) {
    _dev_err(*(undefined4 *)(iVar6 + 0xc),DAT_00025c94,DAT_00025c90);
    return 0xffffffea;
  }
  iVar10 = *(int *)(param_1 + 0xa8c);
  if (*(byte *)((int)param_2 + 5) < 5) {
    if (*(byte *)((int)param_2 + 5) == 0) {
      uVar3 = 1;
      goto LAB_00025a2e;
    }
  }
  else {
    uVar3 = 4;
LAB_00025a2e:
    *(undefined1 *)((int)param_2 + 5) = uVar3;
  }
  bVar1 = *(byte *)((int)param_2 + 5);
  for (uVar4 = 0; uVar4 < bVar1; uVar4 = uVar4 + 1) {
    *(undefined1 *)((int)param_2 + uVar4 * 4 + 6) = 0xff;
    *(undefined1 *)((int)param_2 + uVar4 * 4 + 7) = 0xff;
    *(undefined1 *)(param_2 + uVar4 + 2) = 0xff;
    *(undefined1 *)((int)param_2 + uVar4 * 4 + 9) = 0xff;
  }
  if (iVar7 == 1) {
    uVar4 = (uint)*(byte *)(param_2 + 1);
    local_34 = (uVar4 & 3) << 0x19 | 0x1000000;
    iVar7 = *(int *)((int)param_2 + 0x16);
    if (iVar7 == 0) {
      iVar7 = *(int *)(iVar6 + 0xe3c);
    }
    local_38 = iVar7 + 7U >> 3;
    if (uVar4 == 1) {
      uVar8 = 2;
    }
    else {
      uVar8 = 1;
      if (uVar4 != 2) {
        uVar8 = 4;
      }
    }
    uVar4 = *(uint *)((int)param_2 + 0x1a);
    if (uVar4 == 0) {
      uVar4 = __aeabi_uidiv(*(undefined4 *)(iVar6 + 0xe40),uVar8);
      uVar8 = 0x6000000;
      uVar11 = 0x3f00;
      goto LAB_00025adc;
    }
    uVar8 = 0x6000000;
    uVar11 = 0x3f00;
    uVar5 = local_38;
  }
  else {
    if (iVar7 == 0) {
      rkisp_clear_reg_cache_bits(iVar6,0x5000,0x800000);
      rkisp_clear_reg_cache_bits(iVar6,0x3f00,0x1000000);
      *(int *)(iVar10 + 0x208) = *param_2;
      return 0;
    }
    if (iVar7 != 2) {
      _dev_err(*(undefined4 *)(iVar6 + 0xc),DAT_00025c98,DAT_00025c90,iVar7);
      return 0xffffffea;
    }
    bVar12 = (char)param_2[1] != '\0';
    if (bVar12) {
      local_34 = 0x8800000;
      uVar8 = 8;
    }
    else {
      local_34 = 0x800000;
      uVar8 = 2;
    }
    local_38 = *(uint *)((int)param_2 + 0x16);
    if (!bVar12) {
      uVar8 = 1;
    }
    if (local_38 == 0) {
      local_38 = __aeabi_uidiv(*(int *)(iVar6 + 0xe3c) << 2,uVar8);
    }
    uVar4 = *(uint *)((int)param_2 + 0x1a);
    if (uVar4 == 0) {
      uVar4 = __aeabi_uidiv(*(undefined4 *)(iVar6 + 0xe40),uVar8);
      uVar8 = 0x8000000;
      uVar11 = 0x5000;
LAB_00025adc:
      uVar5 = uVar4;
      if (local_38 == 0) goto LAB_00025ae8;
    }
    else {
      uVar8 = 0x8000000;
      uVar11 = 0x5000;
      uVar5 = local_38;
    }
  }
  if (uVar5 != 0) {
    iVar9 = 0;
    uVar5 = local_38 + 0xf & 0xfffffff0;
    iVar7 = iVar10 + 0x168;
    while( true ) {
      if ((int)(uint)*(byte *)((int)param_2 + 5) <= iVar9) {
        isp3_param_write(param_1,*(undefined4 *)(iVar10 + 0x174),0x1980);
        isp3_param_write(param_1,*(undefined4 *)(iVar10 + 0x184),0x1984);
        isp3_param_write(param_1,uVar5,0x1988);
        if (*(char *)(*(int *)(iVar6 + 0x94) + 0x7b9) != '\0') {
          rkisp_write(iVar6,0x1800,0x200000,1);
        }
        rkisp_set_reg_cache_bits(iVar6,uVar11,uVar8,local_34);
        *(undefined4 *)(iVar10 + 0x210) = 0;
        *(uint *)(iVar10 + 0x20c) = (uint)*(byte *)((int)param_2 + 5);
        *(int *)(iVar10 + 0x208) = *param_2;
        *(uint *)((int)param_2 + 0x1a) = uVar4;
        *(uint *)((int)param_2 + 0x16) = uVar5;
        return 0;
      }
      if (*(int *)(iVar7 + 0x14) != 0) {
        rkisp_free_buffer(iVar6,iVar7);
      }
      *(undefined1 *)(iVar7 + 0x25) = 1;
      *(undefined1 *)(iVar7 + 0x26) = 1;
      *(uint *)(iVar7 + 0x1c) = uVar4 * uVar5;
      *(undefined1 *)(iVar7 + 0x24) = 1;
      iVar2 = rkisp_alloc_buffer(iVar6,iVar7);
      if (iVar2 != 0) break;
      **(undefined4 **)(iVar7 + 0x18) = 0x5aa5;
      iVar2 = iVar9 * 4;
      iVar9 = iVar9 + 1;
      *(undefined4 *)((int)param_2 + iVar2 + 6) = *(undefined4 *)(iVar7 + 0x20);
      iVar7 = iVar7 + 0x28;
    }
    _dev_err(*(undefined4 *)(iVar6 + 0xc),DAT_00025ca0,DAT_00025c90);
    while (iVar7 = iVar9 + -1, iVar9 != 0) {
      rkisp_free_buffer(iVar6,iVar7 * 0x28 + iVar10 + 0x168);
      *(undefined1 *)((int)param_2 + iVar7 * 4 + 6) = 0xff;
      *(undefined1 *)((int)param_2 + iVar7 * 4 + 7) = 0xff;
      *(undefined1 *)(param_2 + iVar9 + 1) = 0xff;
      *(undefined1 *)((int)param_2 + iVar7 * 4 + 9) = 0xff;
      iVar9 = iVar7;
    }
    *(undefined1 *)param_2 = 0;
    *(undefined1 *)((int)param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 2) = 0;
    *(undefined1 *)((int)param_2 + 3) = 0;
    *(undefined1 *)((int)param_2 + 5) = 0;
    return 0xfffffff4;
  }
LAB_00025ae8:
  _dev_err(*(undefined4 *)(iVar6 + 0xc),DAT_00025c9c,DAT_00025c90,local_38,uVar4);
  return 0xffffffea;
}



/* ===== rkisp_params_check_bigmode_v32 @ 00025ca4 size=1314 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined1 rkisp_params_check_bigmode_v32(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined1 uVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  int iVar21;
  undefined1 *puVar22;
  int local_7c;
  uint local_74;
  uint local_6c [5];
  int aiStack_58 [4];
  uint local_48 [4];
  int aiStack_38 [5];
  
  iVar12 = *(int *)(param_1 + 0x500);
  uVar9 = *(undefined4 *)(iVar12 + 0xc);
  iVar13 = *(int *)(iVar12 + 0x94);
  uVar19 = *(uint *)(iVar13 + 0xcc);
  local_74 = *(int *)(iVar13 + 0xd0) * uVar19;
  memset(local_6c + 1,0,0x10);
  memset(aiStack_58,0,0x10);
  uVar7 = DAT_00026038;
  if (*(int *)(iVar12 + 0x97a4) == 0x80) {
    memset(aiStack_58 + 4,0,0x10);
    bVar1 = false;
    puVar17 = (undefined1 *)(iVar12 + 0xe03d);
    iVar18 = 0;
    memset(aiStack_38,0,0x10);
    puVar20 = (uint *)(iVar12 + 0x9acc);
    puVar22 = (undefined1 *)(iVar12 + 0xe03c);
    iVar6 = 0;
    local_7c = 0;
    while (*(char *)(iVar13 + 0x7c1) == '\0') {
      iVar2 = *(int *)(iVar13 + 0xbc);
      if (iVar2 == 3) {
        uVar3 = *puVar20;
        uVar7 = uVar3 & 0xff;
        *puVar17 = (char)uVar3;
        *puVar22 = 2;
        local_6c[0] = *(uint *)(iVar13 + 0xb8);
        iVar16 = iVar13;
        for (iVar2 = 0; iVar2 < (int)local_6c[0]; iVar2 = iVar2 + 1) {
          iVar8 = iVar6;
          if (*(uint *)(iVar16 + 0x70) == 0) {
            if (iVar2 < *(int *)(iVar13 + 0xbc)) {
              aiStack_38[local_7c] = iVar2;
              local_7c = local_7c + 1;
            }
          }
          else if ((0xa80 < *(uint *)(iVar16 + 0x68)) || (0x3f0000 < *(uint *)(iVar16 + 0x70))) {
            iVar8 = iVar6 + 1;
            aiStack_58[iVar6 + 4] = iVar2;
          }
          iVar16 = iVar16 + 0x14;
          iVar6 = iVar8;
        }
        if (iVar6 == 0) {
          if (*(int *)(iVar13 + 0xbc) <= (int)(uVar3 & 0xff)) {
            *(char *)(iVar12 + 0xe03d) = (char)aiStack_38[(uVar3 & 0xff) - *(int *)(iVar13 + 0xbc)];
          }
LAB_00025dc6:
          uVar3 = 0xfa000;
          uVar7 = 0x500;
          goto LAB_00025dce;
        }
        if ((iVar6 == 1) && (*(uint *)(local_48[0] * 0x14 + iVar13 + 0x70) <= DAT_00026034)) {
          if (uVar3 == local_48[0]) {
            *(undefined2 *)(iVar12 + 0xe03c) = 0;
          }
          else {
            uVar19 = uVar7;
            if (uVar7 < 2) {
              uVar19 = 0xe03d;
              uVar3 = 3;
            }
            if (uVar7 < 2) {
              *(char *)(iVar12 + uVar19) = (char)uVar3;
            }
          }
          goto LAB_00025e8e;
        }
LAB_00025e34:
        bVar1 = true;
        *(undefined1 *)(iVar13 + 0x7c1) = 1;
      }
      else {
        if (iVar2 != 4) {
          if (iVar2 != 2) {
            *(undefined2 *)(iVar12 + 0xe03c) = 0;
            uVar19 = *(uint *)(iVar12 + 0xe3c);
            local_74 = *(int *)(iVar12 + 0xe40) * uVar19;
            goto LAB_00025d3a;
          }
          uVar7 = *puVar20;
          *puVar17 = (char)uVar7;
          *puVar22 = 1;
          local_6c[0] = *(uint *)(iVar13 + 0xb8);
          iVar16 = iVar13;
          for (iVar2 = 0; iVar2 < (int)local_6c[0]; iVar2 = iVar2 + 1) {
            uVar3 = *(uint *)(iVar16 + 0x70);
            iVar8 = iVar6;
            if (uVar3 == 0) {
              if (iVar2 < *(int *)(iVar13 + 0xbc)) {
                aiStack_38[local_7c] = iVar2;
                local_7c = local_7c + 1;
              }
            }
            else if ((*(uint *)(iVar16 + 0x68) < 0xf01) && (uVar3 <= DAT_00026034)) {
              if ((0xa80 < *(uint *)(iVar16 + 0x68)) || (0x3f0000 < uVar3)) {
                iVar18 = iVar18 + 1;
              }
            }
            else {
              iVar8 = iVar6 + 1;
              aiStack_58[iVar6 + 4] = iVar2;
            }
            iVar16 = iVar16 + 0x14;
            iVar6 = iVar8;
          }
          if (iVar6 != 0) {
            if (((iVar6 == 2) || (iVar18 != 0)) ||
               (DAT_00026030 < *(uint *)(aiStack_58[iVar6 + 3] * 0x14 + iVar13 + 0x70)))
            goto LAB_00025e34;
            if (uVar7 == local_48[0]) {
              *(undefined2 *)(iVar12 + 0xe03c) = 0;
            }
            else {
LAB_00025f28:
              *(undefined2 *)(iVar12 + 0xe03c) = 0x302;
            }
            goto LAB_00025e8e;
          }
          if (*(int *)(iVar13 + 0xbc) <= (int)(uVar7 & 0xff)) {
            *(char *)(iVar12 + 0xe03d) = (char)aiStack_38[(uVar7 & 0xff) - *(int *)(iVar13 + 0xbc)];
          }
          uVar7 = 0x780;
          uVar3 = DAT_00026038;
          goto LAB_00025dce;
        }
        *puVar17 = (char)*puVar20;
        *puVar22 = 2;
        iVar2 = 0;
        iVar16 = iVar13;
        while( true ) {
          if (*(int *)(iVar13 + 0xb8) <= iVar2) goto LAB_00025dc6;
          if ((0xa80 < *(uint *)(iVar16 + 0x68)) || (0x3f0000 < *(uint *)(iVar16 + 0x70))) break;
          iVar2 = iVar2 + 1;
          iVar16 = iVar16 + 0x14;
        }
        *(undefined1 *)(iVar13 + 0x7c1) = 1;
      }
    }
    *(undefined2 *)(iVar12 + 0xe03c) = 0;
    _dev_info(uVar9,DAT_0002602c,*(undefined4 *)(iVar12 + 0x9acc),*(undefined4 *)(iVar12 + 0xe3c),
              *(undefined4 *)(iVar12 + 0xe40));
LAB_00025d3a:
    uVar7 = 0xa80;
    uVar3 = 0x3f0000;
  }
  else {
    bVar1 = false;
    iVar2 = 0;
    iVar18 = 0;
    iVar6 = 0;
    while (uVar5 = DAT_0002603c, *(char *)(iVar13 + 0x7bf) == '\0') {
      iVar16 = *(int *)(iVar13 + 0xbc);
      if (iVar16 == 3) {
        uVar3 = *(uint *)(iVar12 + 0x9acc);
        uVar10 = uVar3 & 0xff;
        *(char *)(iVar12 + 0xe03d) = (char)uVar3;
        *(undefined1 *)(iVar12 + 0xe03c) = 2;
        iVar21 = *(int *)(iVar13 + 0xb8);
        iVar8 = iVar13;
        for (iVar16 = 0; iVar16 < iVar21; iVar16 = iVar16 + 1) {
          iVar15 = iVar6;
          if (*(uint *)(iVar8 + 0x70) == 0) {
            if (iVar16 < *(int *)(iVar13 + 0xbc)) {
              aiStack_58[iVar18] = iVar16;
              iVar18 = iVar18 + 1;
            }
          }
          else if ((0x500 < *(uint *)(iVar8 + 0x68)) || (0xfa000 < *(uint *)(iVar8 + 0x70))) {
            iVar15 = iVar6 + 1;
            local_6c[iVar6 + 1] = iVar16;
          }
          iVar8 = iVar8 + 0x14;
          iVar6 = iVar15;
        }
        if (iVar6 == 0) {
          if (*(int *)(iVar13 + 0xbc) <= (int)(uVar3 & 0xff)) {
            *(char *)(iVar12 + 0xe03d) = (char)aiStack_58[(uVar3 & 0xff) - *(int *)(iVar13 + 0xbc)];
          }
LAB_00026020:
          uVar3 = 0x3e800;
          uVar7 = 0x280;
          goto LAB_00025dce;
        }
        if ((iVar6 == 1) && (*(uint *)(local_6c[1] * 0x14 + iVar13 + 0x70) <= uVar7)) {
          if (local_6c[1] == uVar3) {
            *(undefined2 *)(iVar12 + 0xe03c) = 1;
          }
          else {
            if (uVar10 < 2) {
              uVar3 = 0xe03d;
              local_6c[1] = 3;
            }
            if (uVar10 < 2) {
              *(char *)(iVar12 + uVar3) = (char)local_6c[1];
            }
          }
          goto LAB_00025e8e;
        }
        iVar16 = local_6c[1] * 0x14 + iVar13;
        uVar4 = *(undefined4 *)(iVar16 + 0x6c);
        uVar11 = *(undefined4 *)(iVar16 + 0x68);
        uVar5 = DAT_000261e8;
        uVar3 = local_6c[1];
LAB_000260c0:
        bVar1 = true;
        _dev_warn(uVar9,uVar5,uVar3,uVar11,uVar4);
        *(undefined1 *)(iVar13 + 0x7bf) = 1;
      }
      else {
        if (iVar16 != 4) {
          if (iVar16 != 2) {
            *(undefined2 *)(iVar12 + 0xe03c) = 0;
            uVar19 = *(uint *)(iVar12 + 0xe3c);
            local_74 = *(int *)(iVar12 + 0xe40) * uVar19;
            goto LAB_00025f8c;
          }
          uVar10 = *(uint *)(iVar12 + 0x9acc);
          *(char *)(iVar12 + 0xe03d) = (char)uVar10;
          *(undefined1 *)(iVar12 + 0xe03c) = 1;
          iVar21 = *(int *)(iVar13 + 0xb8);
          iVar8 = iVar13;
          for (iVar16 = 0; iVar16 < iVar21; iVar16 = iVar16 + 1) {
            uVar3 = *(uint *)(iVar8 + 0x70);
            iVar15 = iVar6;
            if (uVar3 == 0) {
              if (iVar16 < *(int *)(iVar13 + 0xbc)) {
                aiStack_58[iVar18] = iVar16;
                iVar18 = iVar18 + 1;
              }
            }
            else if ((*(uint *)(iVar8 + 0x68) < 0x781) && (uVar3 <= uVar7)) {
              if ((0x500 < *(uint *)(iVar8 + 0x68)) || (0xfa000 < uVar3)) {
                iVar2 = iVar2 + 1;
              }
            }
            else {
              iVar15 = iVar6 + 1;
              local_6c[iVar6 + 1] = iVar16;
            }
            iVar8 = iVar8 + 0x14;
            iVar6 = iVar15;
          }
          if (iVar6 != 0) {
            uVar3 = local_6c[iVar6];
            if (((iVar6 == 2) || (iVar2 != 0)) ||
               (DAT_00026040 < *(uint *)(uVar3 * 0x14 + iVar13 + 0x70))) {
              iVar16 = uVar3 * 0x14 + iVar13;
              uVar4 = *(undefined4 *)(iVar16 + 0x6c);
              uVar11 = *(undefined4 *)(iVar16 + 0x68);
              uVar5 = DAT_00026044;
              goto LAB_000260c0;
            }
            if (uVar10 != local_6c[1]) goto LAB_00025f28;
            *(undefined2 *)(iVar12 + 0xe03c) = 0;
            goto LAB_00025e8e;
          }
          if (*(int *)(iVar13 + 0xbc) <= (int)(uVar10 & 0xff)) {
            *(char *)(iVar12 + 0xe03d) = (char)aiStack_58[(uVar10 & 0xff) - *(int *)(iVar13 + 0xbc)]
            ;
          }
          uVar7 = 0x3c0;
          uVar3 = DAT_000261ec;
          goto LAB_00025dce;
        }
        *(char *)(iVar12 + 0xe03d) = (char)*(undefined4 *)(iVar12 + 0x9acc);
        *(undefined1 *)(iVar12 + 0xe03c) = 2;
        iVar16 = 0;
        iVar8 = iVar13;
        while( true ) {
          if (*(int *)(iVar13 + 0xb8) <= iVar16) goto LAB_00026020;
          if ((0x500 < *(uint *)(iVar8 + 0x68)) || (0xfa000 < *(uint *)(iVar8 + 0x70))) break;
          iVar16 = iVar16 + 1;
          iVar8 = iVar8 + 0x14;
        }
        _dev_warn(uVar9,DAT_000261e4,iVar16,*(uint *)(iVar8 + 0x68),
                  *(undefined4 *)(iVar16 * 0x14 + iVar13 + 0x6c));
        *(undefined1 *)(iVar13 + 0x7bf) = 1;
      }
    }
    *(undefined2 *)(iVar12 + 0xe03c) = 0;
    _dev_warn(uVar9,uVar5);
LAB_00025f8c:
    uVar3 = 0x150000;
    uVar7 = 0x600;
  }
LAB_00025dce:
  if (((bVar1) || (uVar7 < uVar19)) || (uVar3 < local_74)) {
LAB_00025e8e:
    uVar14 = 1;
  }
  else {
    uVar14 = 0;
  }
  *(undefined1 *)(iVar12 + 0xe036) = uVar14;
  return uVar14;
}



/* ===== rkisp_params_first_cfg_v32 @ 000261f0 size=306 ===== */

void rkisp_params_first_cfg_v32(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x500);
  iVar2 = *(int *)(param_1 + 0xa8c);
  iVar4 = param_1;
  rkisp_params_check_bigmode_v32();
  piVar1 = *(int **)(param_1 + 0x50c);
  if ((piVar1[4] == 0 && piVar1[5] == 0) && (*piVar1 == 0 && piVar1[1] == 0)) {
    _dev_warn(*(undefined4 *)(iVar3 + 0xc),DAT_00026324,0,0,iVar4,param_2);
  }
  *(undefined2 *)(iVar2 + 0x572) = 0;
  *(undefined4 *)(iVar2 + 0x574) = 0;
  if (*(char *)(iVar3 + 0xe036) != '\0') {
    rkisp_set_bits(*(undefined4 *)(param_1 + 0x500),0x404,0,0x30000000,0);
  }
  __isp_isr_meas_config(param_1,*(undefined4 *)(param_1 + 0x50c),0);
  __isp_isr_other_config(param_1,*(undefined4 *)(param_1 + 0x50c),0);
  __isp_isr_other_en(param_1,*(undefined4 *)(param_1 + 0x50c),0);
  __isp_isr_meas_en(param_1,*(undefined4 *)(param_1 + 0x50c),0);
  memcpy((void *)(iVar2 + 0x419),(void *)(*(int *)(param_1 + 0x50c) + 0x1483),0xcb);
  memcpy((void *)(iVar2 + 0x4e4),(void *)(*(int *)(param_1 + 0x50c) + 0x13f5),0x8e);
  memcpy((void *)(iVar2 + 0x2c0),(void *)(iVar2 + 0x419),0xcb);
  memcpy((void *)(iVar2 + 0x38b),(void *)(iVar2 + 0x4e4),0x8e);
  if ((*(char *)(*(int *)(iVar3 + 0x94) + 0x7c1) != '\0') && (*(int *)(iVar2 + 0x2ac) != 0)) {
    isp3_param_write(param_1,*(undefined4 *)(iVar2 + 0x2b4),0x1a54);
    isp3_param_write(param_1,*(undefined4 *)(iVar2 + 0x2a4),0x1a50);
    isp3_param_write(param_1,*(undefined4 *)(iVar2 + 0x2a4),0x1a58);
  }
  if ((*(char *)(*(int *)(iVar3 + 0x94) + 0x7b9) != '\0') && (*(int *)(iVar3 + 0x99e0) << 0x16 < 0))
  {
    rkisp_set_bits(iVar3,0x400,0,0x200,1);
  }
  return;
}



/* ===== rkisp_params_set_meshbuf_size_v32 @ 00026328 size=284 ===== */

undefined4
rkisp_params_set_meshbuf_size_v32(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int extraout_r3;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  
  iVar2 = param_2[3];
  iVar5 = param_2[4];
  uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x500) + 0xc);
  iVar4 = *(int *)(param_1 + 0xa8c);
  iVar7 = param_2[5];
  if (iVar4 == 0) {
    _dev_err(uVar8,DAT_00026444);
    uVar8 = 0xffffffea;
  }
  else {
    if (param_2[1] == 0x400 && *param_2 == 0) {
      iVar9 = iVar4 + 0x114;
      *(undefined4 *)(iVar4 + 0x164) = 0;
      iVar2 = (iVar5 + 0x3eU >> 6) * (iVar2 + 0x3eU >> 6) * 0x48;
    }
    else {
      *(undefined4 *)(iVar4 + 0x110) = 0;
      iVar9 = iVar4 + 0xc0;
      uVar6 = (iVar2 + 0xfU >> 4) + 2 >> 1;
      iVar2 = ((iVar5 + 7U >> 3) * uVar6 + uVar6) * 4;
    }
    uVar6 = iVar2 + 0x100fU & 0xfffff000;
    iVar2 = 0;
    if (1 < iVar7 - 1U) {
      iVar7 = 2;
    }
    for (; iVar2 < iVar7; iVar2 = iVar2 + 1) {
      *(undefined1 *)(iVar9 + 0x24) = 1;
      *(undefined1 *)(iVar9 + 0x25) = 1;
      *(undefined1 *)(iVar9 + 0x26) = 1;
      if (*(int *)(iVar9 + 0x14) == 0) {
LAB_000263e2:
        *(uint *)(iVar9 + 0x1c) = uVar6;
        iVar4 = rkisp_alloc_buffer(*(undefined4 *)(param_1 + 0x500),iVar9);
        if (iVar4 != 0) {
          _dev_err(uVar8,DAT_0002644c,DAT_00026448);
          uVar1 = extraout_r1;
LAB_00026412:
          rkisp_deinit_mesh_buf(param_1,uVar1,*param_2,param_2[1]);
          return 0xfffffff4;
        }
        puVar3 = *(undefined1 **)(iVar9 + 0x18);
        iVar4 = 0x10;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0x10;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
      }
      else {
        if (*(uint *)(iVar9 + 0x1c) < uVar6) {
          rkisp_free_buffer(*(undefined4 *)(param_1 + 0x500),iVar9);
          goto LAB_000263e2;
        }
        uVar10 = dma_buf_fd(*(undefined4 *)(iVar9 + 8),0x80000,*(uint *)(iVar9 + 0x1c),iVar4,param_4
                           );
        uVar1 = (undefined4)((ulonglong)uVar10 >> 0x20);
        *(int *)(iVar9 + 0x20) = (int)uVar10;
        iVar4 = extraout_r3;
        if ((int)uVar10 < 0) goto LAB_00026412;
      }
      iVar9 = iVar9 + 0x28;
    }
    uVar8 = 0;
  }
  return uVar8;
}



/* ===== isp_hdrdrc_config @ 00026450 size=404 ===== */

void isp_hdrdrc_config(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == 1) {
    return;
  }
  isp3_param_write(param_1,DAT_000265e4 & (uint)*(ushort *)(param_2 + 2) << 0xe |
                           *(ushort *)(param_2 + 4) & 0x3fff | (uint)*(byte *)(param_2 + 1) << 0x1c,
                   0x3904);
  isp3_param_write(param_1,DAT_000265e8 & (uint)*(ushort *)(param_2 + 6) << 0xc |
                           *(ushort *)(param_2 + 8) & 0xfff | (uint)*(byte *)(param_2 + 10) << 0x18,
                   0x3908);
  isp3_param_write(param_1,(uint)*(byte *)(param_2 + 0xd) |
                           (uint)*(byte *)(param_2 + 0xb) << 0x18 |
                           (uint)*(byte *)(param_2 + 0xc) << 0x10,0x390c);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0xe),0x3910);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x12),*(undefined2 *)(param_2 + 0x14))
                   ,0x3914);
  isp3_param_write(param_1,CONCAT22(*(undefined2 *)(param_2 + 0x16),*(undefined2 *)(param_2 + 0x18))
                   ,0x3918);
  uVar1 = (*(byte *)(param_2 + 0x1c) & 0x1f) << 8 |
          DAT_000265ec & (uint)*(ushort *)(param_2 + 0x1a) << 0x10 |
          *(byte *)(param_2 + 0x1d) & 0x1f;
  if (*(char *)(param_2 + 0x1e) != '\0') {
    uVar1 = uVar1 | 0x80000000;
  }
  isp3_param_write(param_1,uVar1,0x391c);
  iVar3 = 0;
  do {
    iVar2 = iVar3 * 2;
    iVar3 = iVar3 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar2 + 0x28),iVar2 + 0x3920);
  } while (iVar3 != 0x10);
  iVar3 = 0;
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x48),0x3940);
  do {
    iVar2 = iVar3 * 2;
    iVar3 = iVar3 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar2 + 0x4a),iVar2 + 0x3944);
  } while (iVar3 != 0x10);
  iVar3 = 0;
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x6a),0x3964);
  do {
    iVar2 = iVar3 * 2;
    iVar3 = iVar3 + 2;
    isp3_param_write(param_1,*(undefined4 *)(param_2 + iVar2 + 0x6c),iVar2 + 0x3968);
  } while (iVar3 != 0x10);
  isp3_param_write(param_1,*(undefined2 *)(param_2 + 0x8c),0x3988);
  uVar1 = (uint)*(ushort *)(param_2 + 0x20);
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
    uVar1 = (uint)CONCAT12(*(undefined1 *)(param_2 + 0x1f),*(ushort *)(param_2 + 0x20));
  }
  isp3_param_write(param_1,uVar1,0x398c);
  isp3_param_write(param_1,*(ushort *)(param_2 + 0x22) & 0x1fff,0x3990);
  isp3_param_write(param_1,*(undefined4 *)(param_2 + 0x24),0x3994,param_4);
  return;
}



/* ===== isp_rawaf_enable @ 000265f0 size=108 ===== */

void isp_rawaf_enable(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = isp3_param_read(param_1,0x4d00);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0x7ffffffe;
  }
  else {
    uVar1 = uVar1 & 0x7fffffff | 1;
  }
  isp3_param_write(param_1,uVar1,0x4d00);
  if (*(char *)(param_1 + 0x5e0) != '\0') {
    if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x80) {
      uVar2 = 0x4500;
    }
    else {
      uVar2 = 0x4400;
    }
    uVar1 = isp3_param_read(param_1,uVar2);
    if (param_2 == 0) {
      uVar1 = uVar1 & 0x7ffffffe;
    }
    else {
      uVar1 = uVar1 & 0x7fffffff | 1;
    }
    isp3_param_write(param_1,uVar1,uVar2);
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0x5e0) = 0;
    }
  }
  return;
}



/* ===== isp_ldch_enable @ 0002665c size=62 ===== */

void isp_ldch_enable(int param_1,int param_2)

{
  if (param_2 == 0) {
    isp3_param_clear_bits(param_1,0x3b00,1);
    return;
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 0xa8c) + 0x110) * 0x28 + *(int *)(param_1 + 0xa8c) + 0xd8
              ) == 0) {
    _dev_err(*(undefined4 *)(*(int *)(param_1 + 0x500) + 0xc),DAT_0002669c);
    return;
  }
  isp3_param_set_bits(param_1,0x3b00,1);
  return;
}



/* ===== isp_3dlut_enable @ 000266a0 size=96 ===== */

void isp_3dlut_enable(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = isp3_param_read(param_1,0x3e00);
  if ((uVar1 & 1) == param_2) {
    return;
  }
  if ((param_2 != 0) && (*(int *)(*(int *)(param_1 + 0xa8c) + 0x30) != 0)) {
    isp3_param_set_bits();
    isp3_param_set_bits(param_1,0x3e04,1,param_4);
    return;
  }
  isp3_param_clear_bits(param_1,0x3e00,1);
  isp3_param_clear_bits(param_1,0x3e04,1);
  isp3_param_clear_bits(param_1,0x3f00,0x100000,param_4);
  return;
}



/* ===== isp_ie_enable @ 00026700 size=22 ===== */

void isp_ie_enable(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    isp3_param_set_bits(param_1,0x200,0x11);
    return;
  }
  isp3_param_clear_bits(param_1,0x200,1);
  return;
}



/* ===== isp_cproc_enable @ 00026716 size=20 ===== */

void isp_cproc_enable(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    isp3_param_set_bits(param_1,0x800);
    return;
  }
  isp3_param_clear_bits(param_1,0x800,1);
  return;
}



/* ===== isp_cproc_config @ 0002672a size=86 ===== */

void isp_cproc_config(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5e4);
  isp3_param_write(param_1,*(undefined1 *)(param_2 + 3),0x804);
  isp3_param_write(param_1,*(undefined1 *)(param_2 + 6),0x810);
  isp3_param_write(param_1,*(undefined1 *)(param_2 + 5),0x80c);
  isp3_param_write(param_1,*(undefined1 *)(param_2 + 4),0x808);
  if (iVar1 != 1) {
    isp3_param_clear_bits();
    return;
  }
  isp3_param_set_bits(param_1,0x800,0xe);
  return;
}



/* ===== isp_goc_enable @ 00026780 size=20 ===== */

void isp_goc_enable(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    isp3_param_set_bits(param_1,0x900);
    return;
  }
  isp3_param_clear_bits(param_1,0x900,1);
  return;
}



/* ===== isp_ccm_enable @ 00026794 size=20 ===== */

void isp_ccm_enable(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    isp3_param_set_bits(param_1,0x700);
    return;
  }
  isp3_param_clear_bits(param_1,0x700,1);
  return;
}



/* ===== isp_debayer_enable @ 000267a8 size=20 ===== */

void isp_debayer_enable(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    isp3_param_set_bits(param_1,0x2500);
    return;
  }
  isp3_param_clear_bits(param_1,0x2500,1);
  return;
}



/* ===== isp_lsc_matrix_cfg_sram @ 000267bc size=382 ===== */

void isp_lsc_matrix_cfg_sram(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x500);
  if ((param_3 != 0) && (iVar6 = isp3_param_read(param_1,0x2200), -1 < iVar6 << 0x1f)) {
    return;
  }
  uVar2 = rkisp_read(*(undefined4 *)(param_1 + 0x500),0x2268,1);
  uVar1 = DAT_0002693c;
  if (*(char *)(*(int *)(iVar5 + 0x94) + 0x7b9) == '\0') {
    uVar2 = 2;
    uVar3 = 0;
  }
  else if (*(int *)(iVar5 + 0x97a4) == 0x80) {
    uVar2 = 2;
    uVar3 = 0;
  }
  else {
    uVar2 = uVar2 & 2;
    if (uVar2 == 0) {
      uVar3 = 0x99;
    }
    else {
      uVar3 = 0;
    }
  }
  isp3_param_write_direct(param_1,uVar3,0x2204);
  isp3_param_write_direct(param_1,uVar3,0x2208);
  isp3_param_write_direct(param_1,uVar3,0x2210);
  isp3_param_write_direct(param_1,uVar3,0x220c);
  iVar5 = 0x10;
  do {
    iVar6 = iVar5 + -0x10;
    do {
      iVar4 = param_2 + iVar6 * 2;
      iVar6 = iVar6 + 2;
      isp3_param_write_direct
                (param_1,uVar1 & (uint)*(ushort *)(iVar4 + 3) << 0x10 |
                         *(ushort *)(iVar4 + 1) & 0x1fff,0x2214);
      isp3_param_write_direct
                (param_1,uVar1 & (uint)*(ushort *)(iVar4 + 0x247) << 0x10 |
                         *(ushort *)(iVar4 + 0x245) & 0x1fff,0x2218);
      isp3_param_write_direct
                (param_1,uVar1 & (uint)*(ushort *)(iVar4 + 0x48b) << 0x10 |
                         *(ushort *)(iVar4 + 0x489) & 0x1fff,0x2220);
      isp3_param_write_direct
                (param_1,uVar1 & (uint)*(ushort *)(iVar4 + 0x6cf) << 0x10 |
                         *(ushort *)(iVar4 + 0x6cd) & 0x1fff,0x221c);
    } while (iVar5 != iVar6);
    iVar6 = param_2 + iVar5 * 2;
    iVar5 = iVar5 + 0x11;
    isp3_param_write_direct(param_1,*(ushort *)(iVar6 + 1) & 0x1fff,0x2214);
    isp3_param_write_direct(param_1,*(ushort *)(iVar6 + 0x245) & 0x1fff,0x2218);
    isp3_param_write_direct(param_1,*(ushort *)(iVar6 + 0x489) & 0x1fff,0x2220);
    isp3_param_write_direct(param_1,*(ushort *)(iVar6 + 0x6cd) & 0x1fff,0x221c);
  } while (iVar5 != 0x131);
  isp3_param_write_direct(param_1,uVar2 == 0,0x2264);
  return;
}



/* ===== isp_lsc_cfg_sram_task @ 00026940 size=12 ===== */

void isp_lsc_cfg_sram_task(int param_1)

{
  isp_lsc_matrix_cfg_sram(param_1,*(int *)(param_1 + 0x50c) + 0x894,1);
  return;
}



/* ===== isp_lsc_enable @ 0002694c size=144 ===== */

void isp_lsc_enable(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x500);
  iVar4 = *(int *)(param_1 + 0x50c);
  uVar1 = isp3_param_read(param_1,0x2200);
  if ((uVar1 & 1) != param_2) {
    if (param_2 == 0) {
      isp3_param_clear_bits(param_1,0x2200,1);
      isp3_param_clear_bits(param_1,0x3f00,0x100,param_4);
      return;
    }
    uVar2 = DAT_000269dc;
    if ((*(int *)(iVar3 + 0x97a4) == 0x80) && (2 < *(int *)(iVar3 + 0x9b1c) - 4U)) {
      uVar2 = DAT_000269e0;
    }
    isp3_param_set_bits(param_1,0x2200,uVar2);
    if ((*(int *)(iVar3 + 0x97a4) == 0x70) &&
       (*(char *)(*(int *)(*(int *)(param_1 + 0x500) + 0x94) + 0x7b9) != '\0')) {
      isp_lsc_matrix_cfg_sram(param_1,iVar4 + 0x894,0,param_4);
      return;
    }
  }
  return;
}



/* ===== rkisp_params_cfgsram_v32 @ 000269e4 size=76 ===== */

void rkisp_params_cfgsram_v32(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50c);
  isp_lsc_matrix_cfg_sram(param_1,iVar1 + 0x894,1);
  isp_rawhstbig_cfg_sram(param_1,iVar1 + 0x4d8,1);
  isp_rawhstbig_cfg_sram(param_1,iVar1 + 0x5ca,2,1);
  isp_rawhstbig_cfg_sram(param_1,iVar1 + 0x6bc,0,1);
  isp_rawawb_cfg_sram(param_1,iVar1 + 0xf4,1,param_4);
  return;
}



/* ===== isp_lsc_config @ 00026a30 size=750 ===== */

void isp_lsc_config(int param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  byte in_Q;
  undefined1 auStack_38 [20];
  
  iVar10 = *(int *)(param_1 + 0x500);
  iVar6 = *(int *)(param_1 + 0xa8c);
  iVar7 = *(int *)(param_1 + 0x50c);
  uVar1 = isp3_param_read(param_1,0x2200);
  if (*(int *)(iVar10 + 0x97a4) == 0x80) {
    if (*(int *)(iVar10 + 0x9b1c) - 4U < 3) {
      if (*(char *)(*(int *)(iVar10 + 0x94) + 0x7b9) == '\0') {
        memcpy((void *)(iVar7 + 0x894),param_2,0x991);
      }
      else {
        isp_lsc_matrix_cfg_sram(param_1,param_2,0);
      }
    }
    else {
      memset(auStack_38,0,0x10);
      uVar4 = DAT_00026d20;
      iVar7 = *(int *)(param_1 + 0xa8c);
      uVar2 = *(uint *)(iVar7 + 0xbc) & 1;
      *(uint *)(iVar7 + 0xbc) = *(uint *)(iVar7 + 0xbc) + 1;
      iVar6 = 0x11;
      puVar5 = *(uint **)(uVar2 * 0x28 + iVar7 + 0x84);
      do {
        puVar8 = puVar5;
        iVar3 = iVar6 + -0x10;
        do {
          iVar9 = iVar3 + 2;
          *puVar8 = uVar4 & (uint)*(ushort *)(param_2 + iVar3 * 2 + 1) << 0x10 |
                    *(ushort *)(param_2 + iVar3 * 2 + -1) & 0x1fff;
          puVar8[0x99] = uVar4 & (uint)*(ushort *)(param_2 + iVar3 * 2 + 0x245) << 0x10 |
                         *(ushort *)(param_2 + iVar3 * 2 + 0x243) & 0x1fff;
          puVar8[0x132] =
               uVar4 & (uint)*(ushort *)(param_2 + iVar3 * 2 + 0x6cd) << 0x10 |
               *(ushort *)(param_2 + iVar3 * 2 + 0x6cb) & 0x1fff;
          puVar8[0x1cb] =
               uVar4 & (uint)*(ushort *)(param_2 + iVar3 * 2 + 0x489) << 0x10 |
               *(ushort *)(param_2 + iVar3 * 2 + 0x487) & 0x1fff;
          puVar8 = puVar8 + 1;
          iVar3 = iVar9;
        } while (iVar6 != iVar9);
        iVar3 = iVar6 + 0x11;
        puVar5[8] = *(ushort *)(param_2 + iVar6 * 2 + -1) & 0x1fff;
        puVar5[0xa1] = *(ushort *)(param_2 + iVar6 * 2 + 0x243) & 0x1fff;
        puVar5[0x13a] = *(ushort *)(param_2 + iVar6 * 2 + 0x6cb) & 0x1fff;
        puVar5[0x1d3] = *(ushort *)(param_2 + iVar6 * 2 + 0x487) & 0x1fff;
        iVar6 = iVar3;
        puVar5 = puVar5 + 9;
      } while (iVar3 != 0x132);
      iVar6 = uVar2 * 0x28;
      rkisp_prepare_buffer(*(undefined4 *)(param_1 + 0x500),iVar6 + 0x6c + iVar7);
      isp3_param_write(param_1,*(undefined4 *)(iVar7 + iVar6 + 0x78),0x1944);
      isp3_param_write(param_1,0x264,0x1954);
    }
  }
  else {
    memcpy((void *)(iVar7 + 0x894),param_2,0x991);
    if (*(char *)(*(int *)(iVar10 + 0x94) + 0x7b9) != '\0') {
      if ((int)(uVar1 << 0x1f) < 0) {
        disableIRQinterrupts();
        uVar2 = *(uint *)(iVar6 + 4);
        uVar4 = uVar2 | 1;
        *(uint *)(iVar6 + 4) = uVar4;
        if (-1 < (int)(uVar2 << 0x1f)) {
          __tasklet_schedule(iVar6,uVar4,
                             (uint)(byte)((uVar1 << 0x1f == 0) << 3 | 0x10U |
                                          ((uVar1 & 2) != 0) << 2 | in_Q) << 0x1b);
        }
      }
    }
  }
  uVar4 = DAT_00026d24;
  iVar7 = 0x2244;
  iVar6 = 0;
  do {
    isp3_param_write(param_1,*(ushort *)(param_2 + iVar6 * 2 + 0x951) & 0xfff |
                             uVar4 & (uint)*(ushort *)(param_2 + iVar6 * 2 + 0x953) << 0x10,iVar7);
    isp3_param_write(param_1,*(ushort *)(param_2 + iVar6 * 2 + 0x961) & 0xfff |
                             uVar4 & (uint)*(ushort *)(param_2 + iVar6 * 2 + 0x963) << 0x10,
                     iVar7 + 0x4c);
    isp3_param_write(param_1,*(ushort *)(param_2 + iVar6 * 2 + 0x911) & 0xfff |
                             uVar4 & (uint)*(ushort *)(param_2 + iVar6 * 2 + 0x913) << 0x10,
                     iVar7 + -0x20);
    isp3_param_write(param_1,*(ushort *)(param_2 + iVar6 * 2 + 0x921) & 0xfff |
                             uVar4 & (uint)*(ushort *)(param_2 + iVar6 * 2 + 0x923) << 0x10,
                     iVar7 + 0x2c);
    isp3_param_write(param_1,*(ushort *)(param_2 + iVar6 * 2 + 0x971) & 0xfff |
                             uVar4 & (uint)*(ushort *)(param_2 + iVar6 * 2 + 0x973) << 0x10,
                     iVar7 + 0x10);
    isp3_param_write(param_1,*(ushort *)(param_2 + iVar6 * 2 + 0x981) & 0xfff |
                             uVar4 & (uint)*(ushort *)(param_2 + iVar6 * 2 + 0x983) << 0x10,
                     iVar7 + 0x5c);
    isp3_param_write(param_1,*(ushort *)(param_2 + iVar6 * 2 + 0x931) & 0xfff |
                             uVar4 & (uint)*(ushort *)(param_2 + iVar6 * 2 + 0x933) << 0x10,
                     iVar7 + -0x10);
    iVar3 = iVar7 + 0x3c;
    iVar7 = iVar7 + 4;
    isp3_param_write(param_1,*(ushort *)(param_2 + iVar6 * 2 + 0x941) & 0xfff |
                             uVar4 & (uint)*(ushort *)(param_2 + iVar6 * 2 + 0x943) << 0x10,iVar3);
    iVar6 = iVar6 + 2;
  } while (iVar7 != 0x2254);
  if (*param_2 == '\0') {
    uVar1 = uVar1 & 0xfffffffb;
  }
  else {
    uVar1 = uVar1 | 4;
  }
  if ((*(int *)(iVar10 + 0x97a4) == 0x80) && (2 < *(int *)(iVar10 + 0x9b1c) - 4U)) {
    uVar1 = uVar1 | 2;
  }
  isp3_param_write(param_1,uVar1,0x2200);
  return;
}



/* ===== rkisp_params_cfg_v32 @ 00026d28 size=620 ===== */

void rkisp_params_cfg_v32(int param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  
  piVar6 = *(int **)(param_1 + 0xa90);
  iVar3 = *(int *)(*(int *)(param_1 + 0x500) + 0x94);
  if (*(char *)(param_1 + 0x5dc) == '\0') goto LAB_00026f3e;
  while (piVar7 = piVar6, param_1 + 0x504 != *(int *)(param_1 + 0x504)) {
    if (piVar6 != (int *)0x0) goto LAB_00026d66;
    piVar8 = *(int **)(param_1 + 0x504);
    piVar5 = (int *)piVar8[2];
    piVar7 = piVar8 + -0xa0;
    if (param_2 <= (uint)piVar5[6]) {
      if (piVar5[6] != param_2) goto LAB_00026f3c;
      iVar4 = *piVar8;
      piVar6 = (int *)piVar8[1];
      *(int **)(iVar4 + 4) = piVar6;
      *piVar6 = iVar4;
      *piVar8 = 0x100;
      piVar8[1] = 0x122;
      break;
    }
    iVar4 = *piVar8;
    piVar2 = (int *)piVar8[1];
    *(int **)(iVar4 + 4) = piVar2;
    *piVar2 = iVar4;
    *piVar8 = 0x100;
    piVar8[1] = 0x122;
    if (param_1 + 0x504 == *(int *)(param_1 + 0x504)) break;
    if ((*piVar5 != 0 || piVar5[1] != 0) || (piVar5[5] < 0)) {
      __isp_isr_meas_config(param_1,piVar5,param_3);
      __isp_isr_other_config(param_1,piVar5,param_3);
      __isp_isr_other_en(param_1,piVar5,param_3);
      __isp_isr_meas_en(param_1,piVar5,param_3);
      *(undefined1 *)(piVar5 + 4) = 0;
      *(undefined1 *)((int)piVar5 + 0x11) = 0;
      *(undefined1 *)((int)piVar5 + 0x12) = 0;
      *(undefined1 *)((int)piVar5 + 0x13) = 0;
      *(undefined1 *)(piVar5 + 5) = 0;
      *(undefined1 *)((int)piVar5 + 0x15) = 0;
      *(undefined1 *)((int)piVar5 + 0x16) = 0;
      *(undefined1 *)((int)piVar5 + 0x17) = 0;
    }
    if ((piVar5[5] & 0x402U) != 0) {
      iVar4 = *(int *)(param_1 + 0xa8c);
      if (((piVar5[5] & 2U) != 0) &&
         (((puVar1 = *(undefined1 **)(iVar4 + 0xd8), puVar1 != (undefined1 *)0x0 &&
           (*(int *)((int)piVar5 + 0x27cf) == *(int *)(iVar4 + 0xe0))) ||
          ((puVar1 = *(undefined1 **)(iVar4 + 0x100), puVar1 != (undefined1 *)0x0 &&
           (*(int *)((int)piVar5 + 0x27cf) == *(int *)(iVar4 + 0x108))))))) {
        puVar1[1] = 0;
        *puVar1 = 2;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      if (((piVar5[5] & 0x400U) != 0) &&
         (((puVar1 = *(undefined1 **)(iVar4 + 300), puVar1 != (undefined1 *)0x0 &&
           (piVar5[0xad2] == *(int *)(iVar4 + 0x134))) ||
          ((puVar1 = *(undefined1 **)(iVar4 + 0x154), puVar1 != (undefined1 *)0x0 &&
           (*(int *)(iVar4 + 0x15c) == piVar5[0xad2])))))) {
        puVar1[1] = 0;
        *puVar1 = 2;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
    }
    vb2_buffer_done(piVar8 + -0xa0,5);
  }
  piVar6 = piVar7;
  if (piVar7 != (int *)0x0) {
LAB_00026d66:
    iVar4 = piVar6[0xa2];
    __isp_isr_meas_config(param_1,iVar4,param_3);
    __isp_isr_other_config(param_1,iVar4,param_3);
    __isp_isr_other_en(param_1,iVar4,param_3);
    __isp_isr_meas_en(param_1,iVar4,param_3);
    if (*(char *)(iVar3 + 0x7b9) == '\0') {
      if (param_3 != 2) {
        iVar9 = *(int *)(param_1 + 0xa84);
        iVar3 = *(int *)(param_1 + 0xa8c);
        (**(code **)(iVar9 + 0xa8))(param_1,iVar3 + 0x2c0,2);
        (**(code **)(iVar9 + 0xa0))(param_1,iVar3 + 0x38b,2);
        goto LAB_00026f8c;
      }
    }
    else {
LAB_00026f8c:
      if (param_3 == 1) goto LAB_00026f3e;
    }
    iVar3 = *(int *)(param_1 + 0xa8c);
    memcpy((void *)(iVar3 + 0x2c0),(void *)(iVar3 + 0x419),0xcb);
    memcpy((void *)(iVar3 + 0x38b),(void *)(iVar3 + 0x4e4),0x8e);
    memcpy((void *)(iVar3 + 0x419),(void *)(iVar4 + 0x1483),0xcb);
    memcpy((void *)(iVar3 + 0x4e4),(void *)(iVar4 + 0x13f5),0x8e);
    *(undefined1 *)(iVar4 + 0x10) = 0;
    *(undefined1 *)(iVar4 + 0x11) = 0;
    *(undefined1 *)(iVar4 + 0x12) = 0;
    *(undefined1 *)(iVar4 + 0x13) = 0;
    *(undefined1 *)(iVar4 + 0x14) = 0;
    *(undefined1 *)(iVar4 + 0x15) = 0;
    *(undefined1 *)(iVar4 + 0x16) = 0;
    *(undefined1 *)(iVar4 + 0x17) = 0;
    vb2_buffer_done(piVar6,5);
  }
LAB_00026f3c:
  piVar6 = (int *)0x0;
LAB_00026f3e:
  *(int **)(param_1 + 0xa90) = piVar6;
  return;
}



/* ===== rkisp_params_isr_v32 @ 00026f94 size=136 ===== */

void rkisp_params_isr_v32(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_14;
  
  iVar3 = *(int *)(param_1 + 0x500);
  local_14 = param_4;
  rkisp_dmarx_get_frame(iVar3,&local_14,0,0,1,param_2,param_3);
  if (param_2 << 0x19 < 0) {
    if (*(int *)(param_1 + 0xa94) != 0) {
      *(int *)(param_1 + 0xa94) = *(int *)(param_1 + 0xa94) + -1;
    }
    if (*(int *)(param_1 + 0xa90) == 0) {
      return;
    }
    if ((*(int *)(iVar3 + 0x9b1c) - 4U < 3) && (*(int *)(param_1 + 0xa94) == 0)) {
      uVar2 = 2;
      iVar3 = local_14;
      goto LAB_00026fda;
    }
  }
  if (-1 < param_2 << 0x1e) {
    return;
  }
  if ((*(int *)(param_1 + 0xa94) == 0) &&
     (uVar1 = isp3_param_read(param_1,0x404), (uVar1 & 0xf800000) != 0)) {
    isp3_param_clear_bits(param_1,0x404);
  }
  if (*(int *)(iVar3 + 0x9b1c) - 4U < 3) {
    return;
  }
  uVar2 = 0;
  iVar3 = local_14 + 1;
LAB_00026fda:
  rkisp_params_cfg_v32(param_1,iVar3,uVar2);
  return;
}



/* ===== rkisp_init_params_vdev_v32 @ 0002701c size=94 ===== */

undefined4
rkisp_init_params_vdev_v32(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = kmem_cache_alloc(*(undefined4 *)(DAT_0002707c + 0x2c),0xdc0,param_3,DAT_0002707c,param_4);
  if (iVar2 != 0) {
    iVar3 = vmalloc(0x2b89);
    *(int *)(param_1 + 0x50c) = iVar3;
    iVar1 = DAT_00027080;
    if (iVar3 != 0) {
      *(int *)(param_1 + 0xa8c) = iVar2;
      *(int *)(param_1 + 0xa80) = iVar1;
      *(int *)(param_1 + 0xa84) = iVar1 + 0x3c;
      rkisp_clear_first_param_v32(param_1);
      tasklet_init(iVar2,DAT_00027084,param_1);
      *(undefined4 *)(iVar2 + 0x208) = 0;
      *(undefined4 *)(iVar2 + 0x20c) = 0;
      *(undefined4 *)(iVar2 + 0x210) = 0xffffffff;
      return 0;
    }
    kfree(iVar2);
  }
  return 0xfffffff4;
}



/* ===== rkisp_uninit_params_vdev_v32 @ 00027088 size=40 ===== */

void rkisp_uninit_params_vdev_v32(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa8c);
  if (*(int *)(param_1 + 0x50c) != 0) {
    vfree();
  }
  if (iVar1 != 0) {
    tasklet_kill(iVar1);
    kfree(iVar1);
    *(undefined4 *)(param_1 + 0xa8c) = 0;
  }
  return;
}



/* ===== rkisp_stats_rdbk_enable_v32 @ 000270b0 size=16 ===== */

void rkisp_stats_rdbk_enable_v32(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x648) = 0;
    *(undefined4 *)(param_1 + 0x64c) = 0;
  }
  *(char *)(param_1 + 0x646) = (char)param_2;
  return;
}



/* ===== isp3_stats_read @ 000270c0 size=10 ===== */

void isp3_stats_read(int param_1,undefined4 param_2)

{
  rkisp_read(*(undefined4 *)(param_1 + 0x500),param_2,1);
  return;
}



/* ===== rkisp_stats_get_bls_stats @ 000270ca size=258 ===== */

undefined4
rkisp_stats_get_bls_stats(int param_1,undefined2 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_2 != (undefined2 *)0x0) {
    iVar4 = *(int *)(param_1 + 0x500);
    uVar5 = *(undefined4 *)(iVar4 + 0xe2c);
    uVar2 = isp3_stats_read(param_1,0x3000,param_3,param_4,param_4);
    if ((uVar2 & 3) != 0) {
      if (*(int *)(iVar4 + 0x97a4) == 0x70) {
        uVar3 = 0x32e0;
        uVar2 = *(uint *)(param_2 + 0x1970) | 0x8000;
        *(uint *)(param_2 + 0x1970) = uVar2;
        param_2 = param_2 + 0x5fc;
      }
      else {
        uVar2 = *(uint *)(param_2 + 0x760) | 0x8000;
        *(uint *)(param_2 + 0x760) = uVar2;
        uVar3 = extraout_r2;
      }
      switch(uVar5) {
      case 0:
        uVar1 = isp3_stats_read(param_1,0x3038,uVar3,uVar2,param_4);
        *param_2 = uVar1;
        uVar1 = isp3_stats_read(param_1,0x303c);
        param_2[1] = uVar1;
        uVar1 = isp3_stats_read(param_1,0x3040);
        uVar5 = 0x3044;
        param_2[2] = uVar1;
        break;
      case 1:
        uVar1 = isp3_stats_read(param_1,0x303c,uVar3,uVar2,param_4);
        *param_2 = uVar1;
        uVar1 = isp3_stats_read(param_1,0x3038);
        param_2[1] = uVar1;
        uVar1 = isp3_stats_read(param_1,0x3044);
        uVar5 = 0x3040;
        param_2[2] = uVar1;
        break;
      case 2:
        uVar1 = isp3_stats_read(param_1,0x3040,uVar3,uVar2,param_4);
        *param_2 = uVar1;
        uVar1 = isp3_stats_read(param_1,0x3044);
        param_2[1] = uVar1;
        uVar1 = isp3_stats_read(param_1,0x3038);
        uVar5 = 0x303c;
        param_2[2] = uVar1;
        break;
      case 3:
        uVar1 = isp3_stats_read(param_1,0x3044,uVar3,uVar2,param_4);
        *param_2 = uVar1;
        uVar1 = isp3_stats_read(param_1,0x3040);
        param_2[1] = uVar1;
        uVar1 = isp3_stats_read(param_1,0x303c);
        uVar5 = 0x3038;
        param_2[2] = uVar1;
        break;
      default:
        goto switchD_00027106_default;
      }
      uVar1 = isp3_stats_read(param_1,uVar5);
      param_2[3] = uVar1;
    }
  }
switchD_00027106_default:
  return 0;
}



/* ===== rkisp_stats_get_dhaz_stats @ 000271d0 size=162 ===== */

undefined4 rkisp_stats_get_dhaz_stats(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    iVar3 = *(int *)(param_1 + 0x500);
    iVar1 = isp3_stats_read(param_1,0x3c00);
    if (iVar1 << 0x1f < 0) {
      if (*(int *)(iVar3 + 0x97a4) == 0x70) {
        puVar4 = (undefined4 *)(param_2 + 0x2a68);
        *(uint *)(param_2 + 0x32e0) = *(uint *)(param_2 + 0x32e0) | 0x20000;
      }
      else {
        puVar4 = (undefined4 *)(param_2 + 8);
        *(uint *)(param_2 + 0xec0) = *(uint *)(param_2 + 0xec0) | 0x20000;
      }
      uVar2 = isp3_stats_read(param_1,0x3c9c);
      iVar1 = 0;
      *puVar4 = uVar2;
      uVar2 = isp3_stats_read(param_1,0x3d04);
      *(short *)((int)puVar4 + 6) = (short)uVar2;
      *(short *)(puVar4 + 1) = (short)((uint)uVar2 >> 0x10);
      uVar2 = isp3_stats_read(param_1,0x3d08);
      *(short *)((int)puVar4 + 10) = (short)uVar2;
      *(short *)(puVar4 + 2) = (short)((uint)uVar2 >> 0x10);
      do {
        iVar3 = iVar1 * 2;
        iVar1 = iVar1 + 2;
        uVar2 = isp3_stats_read(param_1,iVar3 + 0x3d10);
        *(short *)((int)puVar4 + iVar3 + 0xc) = (short)uVar2;
        *(short *)((int)puVar4 + iVar3 + 0xe) = (short)((uint)uVar2 >> 0x10);
      } while (iVar1 != 0x40);
    }
  }
  return 0;
}



/* ===== rkisp_stats_info2ddr @ 00027272 size=442 ===== */

void rkisp_stats_info2ddr(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar4 = *(int *)(param_1 + 0x500);
  iVar3 = *(int *)(iVar4 + 0x711c);
  iVar6 = *(int *)(iVar3 + 0x210);
  if (*(int *)(iVar3 + 0x208) == 0) {
    if (-1 < iVar6) {
      *(undefined4 *)(iVar3 + 0x210) = 0xffffffff;
      rkisp_clear_bits(iVar4,0x3f00,0x1000000,0);
      rkisp_clear_bits(iVar4,0x5000,0x800000,0);
      return;
    }
    uVar7 = 0x800000;
    iVar5 = 0x5000;
  }
  else {
    if (*(int *)(iVar3 + 0x208) == 1) {
      uVar7 = 0x1000000;
      iVar5 = 0x3f00;
    }
    else {
      uVar7 = 0x800000;
      iVar5 = 0x5000;
    }
    if (-1 < iVar6) {
      rkisp_finish_buffer(iVar4,iVar6 * 0x28 + 0x168 + iVar3,param_3,0x711c,param_1,param_2);
      if ((**(int **)(iVar6 * 0x28 + iVar3 + 0x180) == 0x5aa5) || (param_2 == 0)) {
        if (iVar5 != 0x5000) {
          return;
        }
      }
      else if ((iVar5 != 0x5000) || (iVar1 = rkisp_read(iVar4,0x5000,1), -1 < iVar1 << 2)) {
        uVar2 = *(undefined4 *)(iVar6 * 0x28 + iVar3 + 0x188);
        if (*(int *)(iVar4 + 0x97a4) == 0x70) {
          *(undefined4 *)(param_2 + 0x2afc) = uVar2;
          *(undefined4 *)(param_2 + 11000) = *(undefined4 *)(iVar3 + 0x208);
          *(uint *)(param_2 + 0x32e0) = *(uint *)(param_2 + 0x32e0) | 0x80000;
        }
        else {
          *(undefined4 *)(param_2 + 0x98) = uVar2;
          *(undefined4 *)(param_2 + 0x94) = *(undefined4 *)(iVar3 + 0x208);
          *(uint *)(param_2 + 0xec0) = *(uint *)(param_2 + 0xec0) | 0x80000;
        }
        if (*(int *)(iVar6 * 0x28 + iVar3 + 0x188) == -1) {
          return;
        }
        goto LAB_000273a8;
      }
      iVar3 = rkisp_read(iVar4,0x5000,1);
      if (-1 < iVar3 << 2) {
        return;
      }
      printk(DAT_0002742c,iVar4 + 0xa8,iVar6);
      return;
    }
  }
LAB_000273a8:
  iVar6 = 0;
  while( true ) {
    if (*(int *)(iVar3 + 0x20c) == iVar6) {
      rkisp_clear_bits(iVar4,iVar5,uVar7,0);
      *(undefined4 *)(iVar3 + 0x210) = 0xffffffff;
      return;
    }
    if (**(int **)(iVar3 + 0x180 + iVar6 * 0x28) == 0x5aa5) break;
    iVar6 = iVar6 + 1;
  }
  rkisp_write(iVar4,0x1980,*(undefined4 *)(iVar3 + iVar6 * 0x28 + 0x174),0);
  if (*(char *)(*(int *)(iVar4 + 0x94) + 0x7b9) != '\0') {
    rkisp_write(iVar4,0x1800,0x200000,1);
  }
  if (*(int *)(iVar3 + 0x210) < 0) {
    rkisp_set_bits(iVar4,iVar5,0,uVar7,0);
  }
  *(int *)(iVar3 + 0x210) = iVar6;
  return;
}



/* ===== isp3_module_done @ 00027430 size=30 ===== */

void isp3_module_done(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x500) + 0x94) + 0x10);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar1 + param_2) = param_3;
  return;
}



/* ===== rkisp_stats_get_rawhstbig_meas_ddr @ 0002744e size=110 ===== */

undefined4
rkisp_stats_get_rawhstbig_meas_ddr(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_3 == 1) {
    uVar3 = 0x1000;
    uVar2 = 0x4a00;
  }
  else if (param_3 == 2) {
    uVar3 = 0x2000;
    uVar2 = 0x4b00;
  }
  else {
    uVar3 = 0x4000;
    uVar2 = 0x4800;
  }
  iVar1 = isp3_stats_read(param_1,uVar2,param_3,param_4,param_1,param_2,param_3);
  if (iVar1 < 0) {
    if (param_2 != 0) {
      *(uint *)(param_2 + 0x32e0) = *(uint *)(param_2 + 0x32e0) | uVar3;
    }
    isp3_module_done(param_1,uVar2);
    uVar2 = 0;
  }
  else {
    if (0 < *DAT_000274bc) {
      printk(DAT_000274c4,*(int *)(param_1 + 0x500) + 0xa8,DAT_000274c0,uVar2,iVar1);
    }
    uVar2 = 0xffffffc3;
  }
  return uVar2;
}



/* ===== rkisp_stats_get_rawhst3_meas_ddr @ 000274c8 size=4 ===== */

void rkisp_stats_get_rawhst3_meas_ddr(undefined4 param_1,undefined4 param_2)

{
  rkisp_stats_get_rawhstbig_meas_ddr(param_1,param_2,0);
  return;
}



/* ===== rkisp_stats_get_rawhst2_meas_ddr @ 000274cc size=4 ===== */

void rkisp_stats_get_rawhst2_meas_ddr(undefined4 param_1,undefined4 param_2)

{
  rkisp_stats_get_rawhstbig_meas_ddr(param_1,param_2,2);
  return;
}



/* ===== rkisp_stats_get_rawhst1_meas_ddr @ 000274d0 size=4 ===== */

void rkisp_stats_get_rawhst1_meas_ddr(undefined4 param_1,undefined4 param_2)

{
  rkisp_stats_get_rawhstbig_meas_ddr(param_1,param_2,1);
  return;
}



/* ===== rkisp_stats_get_rawaebig_meas_ddr @ 000274d4 size=258 ===== */

undefined4 rkisp_stats_get_rawaebig_meas_ddr(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar6 = param_2;
  if (param_3 == 1) {
    if (param_2 != 0) {
      iVar6 = param_2 + 0xb98;
    }
    uVar7 = 0x100;
    iVar5 = 0x4600;
  }
  else if (param_3 == 2) {
    if (param_2 != 0) {
      iVar6 = param_2 + 0xbc8;
    }
    uVar7 = 0x200;
    iVar5 = 0x4700;
  }
  else {
    if (param_2 != 0) {
      iVar6 = param_2 + 0xb68;
    }
    uVar7 = 0x400;
    iVar5 = 0x4400;
  }
  iVar1 = isp3_stats_read(param_1,iVar5);
  if (iVar1 < 0) {
    if ((iVar6 != 0) && (*(char *)(param_1 + 0x681) == '\0')) {
      iVar8 = iVar5 + 0x30;
      iVar1 = 0;
      do {
        uVar2 = isp3_stats_read(param_1,iVar8);
        iVar4 = iVar6 + iVar1 * 4;
        *(undefined4 *)(iVar6 + iVar1 * 4) = uVar2;
        uVar2 = isp3_stats_read(param_1,iVar8 + 0x10);
        iVar3 = iVar8 + 0x20;
        iVar1 = iVar1 + 1;
        iVar8 = iVar8 + 4;
        *(undefined4 *)(iVar4 + 0x10) = uVar2;
        uVar2 = isp3_stats_read(param_1,iVar3);
        *(undefined4 *)(iVar4 + 0x20) = uVar2;
      } while (iVar1 != 4);
      *(uint *)(param_2 + 0x32e0) = *(uint *)(param_2 + 0x32e0) | uVar7;
    }
    if ((param_3 == 0) && (*(char *)(param_1 + 0x680) != '\0')) {
      *(undefined1 *)(param_1 + 0x681) = 1;
    }
    else {
      isp3_module_done(param_1,iVar5);
      if (param_3 == 0) {
        *(undefined1 *)(param_1 + 0x681) = 0;
      }
    }
    uVar2 = 0;
  }
  else {
    if (0 < *DAT_000275d8) {
      printk(DAT_000275e0,*(int *)(param_1 + 0x500) + 0xa8,DAT_000275dc,iVar5,iVar1);
    }
    uVar2 = 0xffffffc3;
  }
  return uVar2;
}



/* ===== rkisp_stats_get_rawae3_meas_ddr @ 000275e4 size=4 ===== */

void rkisp_stats_get_rawae3_meas_ddr(undefined4 param_1,undefined4 param_2)

{
  rkisp_stats_get_rawaebig_meas_ddr(param_1,param_2,0);
  return;
}



/* ===== rkisp_stats_get_rawae2_meas_ddr @ 000275e8 size=4 ===== */

void rkisp_stats_get_rawae2_meas_ddr(undefined4 param_1,undefined4 param_2)

{
  rkisp_stats_get_rawaebig_meas_ddr(param_1,param_2,2);
  return;
}



/* ===== rkisp_stats_get_rawae1_meas_ddr @ 000275ec size=4 ===== */

void rkisp_stats_get_rawae1_meas_ddr(undefined4 param_1,undefined4 param_2)

{
  rkisp_stats_get_rawaebig_meas_ddr(param_1,param_2,1);
  return;
}



/* ===== rkisp_stats_get_rawhstlite_meas_ddr @ 000275f0 size=76 ===== */

undefined4
rkisp_stats_get_rawhstlite_meas_ddr(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = isp3_stats_read(param_1,0x4900,param_3,param_4,param_4);
  if (iVar1 < 0) {
    if (param_2 != 0) {
      *(uint *)(param_2 + 0x32e0) = *(uint *)(param_2 + 0x32e0) | 0x800;
    }
    isp3_module_done(param_1,0x4900,iVar1);
    uVar2 = 0;
  }
  else {
    if (0 < *DAT_0002763c) {
      printk(DAT_00027644,*(int *)(param_1 + 0x500) + 0xa8,DAT_00027640);
    }
    uVar2 = 0xffffffc3;
  }
  return uVar2;
}



/* ===== rkisp_stats_get_rawaelite_meas_ddr @ 00027648 size=76 ===== */

undefined4
rkisp_stats_get_rawaelite_meas_ddr(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = isp3_stats_read(param_1,0x4500,param_3,param_4,param_4);
  if (iVar1 < 0) {
    if (param_2 != 0) {
      *(uint *)(param_2 + 0x32e0) = *(uint *)(param_2 + 0x32e0) | 0x80;
    }
    isp3_module_done(param_1,0x4500,iVar1);
    uVar2 = 0;
  }
  else {
    if (0 < *DAT_00027694) {
      printk(DAT_0002769c,*(int *)(param_1 + 0x500) + 0xa8,DAT_00027698);
    }
    uVar2 = 0xffffffc3;
  }
  return uVar2;
}



/* ===== rkisp_stats_get_rawaf_meas_ddr @ 000276a0 size=178 ===== */

undefined4 rkisp_stats_get_rawaf_meas_ddr(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = isp3_stats_read(param_1,0x4d00);
  if (iVar1 < 0) {
    if ((param_2 != 0) && (*(char *)(param_1 + 0x680) == '\0')) {
      *(uint *)(param_2 + 0x32e0) = *(uint *)(param_2 + 0x32e0) | 0x40;
      uVar2 = isp3_stats_read(param_1,0x4d28);
      *(undefined4 *)(param_2 + 0x2a14) = uVar2;
      uVar2 = isp3_stats_read(param_1,0x4d30);
      *(undefined4 *)(param_2 + 0x2a18) = uVar2;
      uVar2 = isp3_stats_read(param_1,0x4d58);
      *(undefined4 *)(param_2 + 0x2a10) = uVar2;
      uVar2 = isp3_stats_read(param_1,0x4dd8);
      *(undefined4 *)(param_2 + 0x2a1c) = uVar2;
    }
    *(undefined1 *)(param_1 + 0x680) = 0;
    if ((iVar1 * 0x80000 < 0) && (iVar3 = isp3_stats_read(param_1,0x3400), iVar3 << 1 < 0)) {
      *(undefined1 *)(param_1 + 0x680) = 1;
    }
    else {
      isp3_module_done(param_1,0x4d00,iVar1);
    }
    uVar2 = 0;
  }
  else {
    if (0 < *DAT_00027754) {
      printk(DAT_0002775c,*(int *)(param_1 + 0x500) + 0xa8,DAT_00027758,iVar1);
    }
    uVar2 = 0xffffffc3;
  }
  return uVar2;
}



/* ===== rkisp_stats_get_rawawb_meas_ddr @ 00027760 size=76 ===== */

undefined4
rkisp_stats_get_rawawb_meas_ddr(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = isp3_stats_read(param_1,0x5000,param_3,param_4,param_4);
  if (iVar1 < 0) {
    if (param_2 != 0) {
      *(uint *)(param_2 + 0x32e0) = *(uint *)(param_2 + 0x32e0) | 0x20;
    }
    isp3_module_done(param_1,0x5000,iVar1);
    uVar2 = 0;
  }
  else {
    if (0 < *DAT_000277ac) {
      printk(DAT_000277b4,*(int *)(param_1 + 0x500) + 0xa8,DAT_000277b0);
    }
    uVar2 = 0xffffffc3;
  }
  return uVar2;
}



/* ===== rkisp_stats_get_vsm_stats @ 000277b8 size=64 ===== */

undefined4 rkisp_stats_get_vsm_stats(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  if ((param_2 != 0) && (iVar2 = isp3_stats_read(param_1,0x3380), iVar2 != 0)) {
    uVar1 = isp3_stats_read(param_1,0x339c);
    *(undefined2 *)(param_2 + 0x2af4) = uVar1;
    uVar1 = isp3_stats_read(param_1,0x33a0);
    *(undefined2 *)(param_2 + 0x2af6) = uVar1;
    *(uint *)(param_2 + 0x32e0) = *(uint *)(param_2 + 0x32e0) | 0x40000;
  }
  return 0;
}



/* ===== rkisp_stats_update_buf @ 000277f8 size=188 ===== */

int rkisp_stats_update_buf(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  
  iVar6 = *(int *)(param_1 + 0x500);
  iVar1 = (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b;
  disableIRQinterrupts();
  if ((*(int *)(param_1 + 0x67c) == 0) && (*(int *)(param_1 + 0x504) != param_1 + 0x504)) {
    piVar5 = *(int **)(param_1 + 0x504);
    iVar3 = *piVar5;
    piVar4 = (int *)piVar5[1];
    *(int **)(iVar3 + 4) = piVar4;
    *piVar4 = iVar3;
    *piVar5 = 0x100;
    piVar5[1] = 0x122;
    *(int **)(param_1 + 0x67c) = piVar5 + -0xa0;
  }
  if (*(int *)(param_1 + 0x67c) == 0) {
    if (*(int *)(param_1 + 0x628) != 0) {
      iVar1 = rkisp_write(iVar6,0x197c,*(undefined4 *)(param_1 + 0x620),0);
      return iVar1;
    }
  }
  else {
    iVar1 = rkisp_write(iVar6,0x197c,*(undefined4 *)(*(int *)(param_1 + 0x67c) + 0x2a8),0,param_1,
                        param_2);
    if (1 < *DAT_000278b4) {
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x67c) + 0x2a8);
      uVar2 = isp3_stats_read(param_1,0x197c);
      iVar1 = printk(DAT_000278bc,iVar6 + 0xa8,DAT_000278b8,uVar7,uVar2);
    }
    if (*(char *)(*(int *)(iVar6 + 0x94) + 0x7b9) == '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0x67c);
      *(undefined4 *)(param_1 + 0x67c) = 0;
      *(undefined4 *)(param_1 + 0x678) = uVar2;
    }
  }
  return iVar1;
}



/* ===== rkisp_stats_send_meas_v32 @ 000278c0 size=2276 ===== */

void * rkisp_stats_send_meas_v32(int param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 uVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  byte in_Q;
  int local_34;
  
  if (param_2[1] << 0x13 < 0) {
    printk(DAT_00027bc8,*(int *)(param_1 + 0x454) + 0x10);
  }
  if (param_2[1] << 0x12 < 0) {
    printk(DAT_00027bcc,*(int *)(param_1 + 0x454) + 0x10);
  }
  if (param_2[2] << 0x17 < 0) {
    printk(DAT_00027bd0,*(int *)(param_1 + 0x454) + 0x10);
  }
  iVar17 = *(int *)(param_1 + 0x500);
  if (*(int *)(iVar17 + 0x97a4) == 0x70) {
    puVar14 = *(undefined4 **)(param_1 + 0x60c);
    if (*(char *)(param_1 + 0x645) == '\0') {
      piVar13 = *(int **)(param_1 + 0x678);
      bVar1 = false;
      if (piVar13 == (int *)0x0) {
        piVar12 = (int *)0x0;
        if (*(int *)(param_1 + 0x628) != 0) {
          rkisp_finish_buffer(iVar17,param_1 + 0x614);
          piVar12 = *(int **)(param_1 + 0x62c);
          bVar1 = true;
          *(undefined1 *)(piVar12 + 0xcb9) = 0xff;
          *(undefined1 *)((int)piVar12 + 0x32e5) = 0xff;
          *(undefined1 *)((int)piVar12 + 0x32e6) = 0xff;
          *(undefined1 *)((int)piVar12 + 0x32e7) = 0xff;
        }
      }
      else {
        piVar12 = (int *)piVar13[0xa2];
      }
      *(undefined4 *)(param_1 + 0x678) = 0;
      if (*(int *)(param_1 + 0x67c) != 0) {
        *(int *)(param_1 + 0x678) = *(int *)(param_1 + 0x67c);
        *(undefined4 *)(param_1 + 0x67c) = 0;
      }
      rkisp_stats_update_buf(param_1);
      local_34 = *param_2;
    }
    else {
      bVar1 = false;
      piVar12 = (int *)0x0;
      local_34 = -1;
      piVar13 = piVar12;
    }
    uVar2 = 0;
    if ((param_2[2] & 0x800U) != 0) {
      uVar2 = (*(code *)*puVar14)(param_1,piVar12);
    }
    if ((param_2[2] << 0x15 < 0) || (*(char *)(param_1 + 0x680) != '\0')) {
      uVar3 = (*(code *)puVar14[1])(param_1,piVar12);
      uVar2 = uVar2 | uVar3;
    }
    if ((param_2[2] << 0x1f < 0) || (*(char *)(param_1 + 0x681) != '\0')) {
      uVar3 = (*(code *)puVar14[8])(param_1,piVar12);
      uVar2 = uVar2 | uVar3;
    }
    if (param_2[2] << 0x1b < 0) {
      uVar3 = (*(code *)puVar14[9])(param_1,piVar12);
      uVar2 = uVar2 | uVar3;
    }
    if (param_2[2] << 0x1e < 0) {
      uVar3 = (*(code *)puVar14[2])(param_1,piVar12);
      uVar2 = uVar2 | uVar3;
    }
    if (param_2[2] << 0x1d < 0) {
      uVar3 = (*(code *)puVar14[4])(param_1,piVar12);
      uVar2 = uVar2 | uVar3;
    }
    if (param_2[2] << 0x1c < 0) {
      uVar3 = (*(code *)puVar14[6])(param_1,piVar12);
      uVar2 = uVar2 | uVar3;
    }
    pvVar4 = (void *)(param_2[2] << 0x1a);
    if ((int)pvVar4 < 0) {
      pvVar4 = (void *)(*(code *)puVar14[3])(param_1,piVar12);
      uVar2 = uVar2 | (uint)pvVar4;
    }
    if (param_2[2] << 0x19 < 0) {
      pvVar4 = (void *)(*(code *)puVar14[5])(param_1,piVar12);
      uVar2 = uVar2 | (uint)pvVar4;
    }
    if (param_2[2] << 0x18 < 0) {
      pvVar4 = (void *)(*(code *)puVar14[7])(param_1,piVar12);
      uVar2 = uVar2 | (uint)pvVar4;
    }
    if (param_2[1] << 0x1e < 0) {
      uVar3 = (*(code *)puVar14[10])(param_1,piVar12);
      uVar5 = (*(code *)puVar14[0xb])(param_1,piVar12);
      pvVar4 = (void *)(*(code *)puVar14[0xc])(param_1,piVar12);
      uVar2 = uVar2 | uVar5 | uVar3 | (uint)pvVar4;
    }
    if ((uVar2 != 0) || ((piVar12 != (int *)0x0 && (piVar12[0xcb8] == 0)))) {
      if (piVar13 == (int *)0x0) {
        return pvVar4;
      }
      disableIRQinterrupts();
      puVar14 = *(undefined4 **)(param_1 + 0x508);
      piVar12 = piVar13 + 0xa0;
      *(int **)(param_1 + 0x508) = piVar12;
      piVar13[0xa0] = param_1 + 0x504;
LAB_00027aac:
      piVar13[0xa1] = (int)puVar14;
      *puVar14 = piVar12;
      return pvVar4;
    }
    if (bVar1) {
      disableIRQinterrupts();
      if (*(int *)(param_1 + 0x504) == param_1 + 0x504) {
        piVar12[0xcb9] = local_34;
        piVar12[0xcba] = *(int *)(iVar17 + 0x6c80);
      }
      else {
        piVar11 = *(int **)(param_1 + 0x504);
        piVar13 = piVar11 + -0xa0;
        iVar8 = *piVar11;
        piVar10 = (int *)piVar11[1];
        *(int **)(iVar8 + 4) = piVar10;
        *piVar10 = iVar8;
        *piVar11 = 0x100;
        piVar11[1] = 0x122;
      }
      if (piVar13 == (int *)0x0) {
        return (void *)((uint)(in_Q | 4) << 0x1b);
      }
      pvVar4 = memcpy((void *)piVar13[0xa2],piVar12,0x32ec);
      piVar12 = (int *)piVar13[0xa2];
    }
    else if (piVar13 == (int *)0x0) {
      return pvVar4;
    }
    if (piVar12 == (int *)0x0) {
      return pvVar4;
    }
    piVar12[0xcb9] = local_34;
    piVar12[0xcba] = *(int *)(iVar17 + 0x6c80);
    *(undefined1 *)(piVar12 + 0xabf) = 0xff;
    *(undefined1 *)((int)piVar12 + 0x2afd) = 0xff;
    *(undefined1 *)((int)piVar12 + 0x2afe) = 0xff;
    *(undefined1 *)((int)piVar12 + 0x2aff) = 0xff;
    *(undefined1 *)(piVar12 + 0xabe) = 0;
    *(undefined1 *)((int)piVar12 + 0x2af9) = 0;
    *(undefined1 *)((int)piVar12 + 0x2afa) = 0;
    *(undefined1 *)((int)piVar12 + 0x2afb) = 0;
    rkisp_stats_info2ddr(param_1,piVar12);
    if (piVar13[4] == 0) goto LAB_00027b6c;
    iVar17 = 0x32ec;
  }
  else {
    local_34 = *param_2;
    pvVar4 = (void *)(param_1 + 0x504);
    if (pvVar4 == *(void **)(param_1 + 0x504)) {
      piVar12 = (int *)0x0;
      piVar13 = piVar12;
    }
    else {
      piVar10 = *(int **)(param_1 + 0x504);
      piVar13 = piVar10 + -0xa0;
      iVar8 = *piVar10;
      piVar12 = (int *)piVar10[1];
      *(int **)(iVar8 + 4) = piVar12;
      *piVar12 = iVar8;
      *piVar10 = 0x100;
      piVar10[1] = 0x122;
      piVar12 = (int *)0x0;
      if (piVar13 != (int *)0x0) {
        piVar12 = (int *)piVar10[2];
        piVar12[0x3b1] = local_34;
        piVar12[0x3b2] = *(int *)(iVar17 + 0x6c80);
        *(undefined1 *)(piVar12 + 0x26) = 0xff;
        *(undefined1 *)((int)piVar12 + 0x99) = 0xff;
        *(undefined1 *)((int)piVar12 + 0x9a) = 0xff;
        *(undefined1 *)((int)piVar12 + 0x9b) = 0xff;
        *(undefined1 *)(piVar12 + 0x25) = 0;
        *(undefined1 *)((int)piVar12 + 0x95) = 0;
        *(undefined1 *)((int)piVar12 + 0x96) = 0;
        *(undefined1 *)((int)piVar12 + 0x97) = 0;
      }
    }
    uVar2 = 0;
    if ((param_2[2] & 0x800U) != 0) {
      iVar17 = isp3_stats_read(param_1,0x5000);
      if (iVar17 < 0) {
        if (piVar12 != (int *)0x0) {
          iVar16 = 0x5340;
          iVar8 = 0;
          do {
            iVar18 = isp3_stats_read(param_1,iVar16);
            piVar12[iVar8 * 8 + 0x37c] = iVar18;
            iVar18 = isp3_stats_read(param_1,iVar16 + 8);
            piVar12[iVar8 * 8 + 0x37d] = iVar18;
            iVar18 = isp3_stats_read(param_1,iVar16 + 0xc);
            piVar12[iVar8 * 8 + 0x37e] = iVar18;
            iVar18 = isp3_stats_read(param_1,iVar16 + 0x10);
            piVar12[iVar8 * 8 + 0x380] = iVar18;
            iVar18 = isp3_stats_read(param_1,iVar16 + 0x18);
            iVar9 = iVar16 + 0x1c;
            iVar16 = iVar16 + 0x30;
            piVar12[iVar8 * 8 + 0x381] = iVar18;
            iVar18 = isp3_stats_read(param_1,iVar9);
            iVar9 = iVar8 + 1;
            piVar12[iVar8 * 8 + 0x382] = iVar18;
            iVar18 = isp3_stats_read(param_1,iVar8 * 4 + 0x5630);
            piVar12[iVar8 * 8 + 0x37f] = iVar18;
            iVar8 = iVar9;
          } while (iVar9 != 4);
          iVar16 = 0x55e0;
          iVar8 = 0;
          do {
            iVar18 = isp3_stats_read(param_1,iVar16);
            iVar15 = iVar8 + 1;
            piVar12[iVar8 * 4 + 0x3a0] = iVar18;
            iVar18 = isp3_stats_read(param_1,iVar16 + 8);
            iVar9 = iVar16 + 0xc;
            iVar16 = iVar16 + 0x10;
            piVar12[iVar8 * 4 + 0x3a1] = iVar18;
            iVar18 = isp3_stats_read(param_1,iVar9);
            piVar12[iVar8 * 4 + 0x3a2] = iVar18;
            iVar8 = iVar15;
          } while (iVar15 != 4);
          iVar8 = 0;
          do {
            iVar16 = iVar8 * 2;
            iVar8 = iVar8 + 2;
            uVar6 = isp3_stats_read(param_1,iVar16 + 0x5620);
            *(short *)((int)piVar12 + iVar16 + 0xe70) = (short)uVar6;
            *(short *)((int)piVar12 + iVar16 + 0xe72) = (short)((uint)uVar6 >> 0x10);
          } while (iVar8 != 8);
          iVar8 = 0;
          do {
            uVar2 = isp3_stats_read(param_1,0x5700);
            iVar16 = iVar8 + 1;
            piVar12[iVar8 + 0x317] = uVar2 & 0x1fffff;
            piVar12[iVar8 + 0x330] = uVar2 >> 0x15;
            uVar2 = isp3_stats_read(param_1,0x5700);
            uVar3 = DAT_00027f48 & uVar2 << 0xb;
            piVar12[iVar8 + 0x349] = (uVar2 & 0x7fffffff) >> 10;
            piVar12[iVar8 + 0x330] = uVar3 | piVar12[iVar8 + 0x330];
            iVar8 = iVar16;
          } while (iVar16 != 0x19);
          iVar8 = 0;
          do {
            uVar2 = isp3_stats_read(param_1,0x5700);
            iVar16 = iVar8 + 1;
            piVar12[iVar8 + 0x362] = uVar2 & 0x3fff;
            piVar12[iVar8 + 0x36f] = (uVar2 & 0x3fffffff) >> 0x10;
            iVar8 = iVar16;
          } while (iVar16 != 0xd);
          piVar12[0x3b0] = piVar12[0x3b0] | 0x20;
        }
        uVar2 = 0;
        isp3_module_done(param_1,0x5000,iVar17);
      }
      else {
        if (0 < *DAT_00027f3c) {
          printk(DAT_00027f44,*(int *)(param_1 + 0x500) + 0xa8,DAT_00027f40,iVar17);
        }
        uVar2 = 0xffffffc3;
      }
    }
    if ((param_2[2] << 0x15 < 0) || (*(char *)(param_1 + 0x680) != '\0')) {
      uVar3 = isp3_stats_read(param_1,0x4d00);
      if ((int)uVar3 < 0) {
        if ((piVar12 != (int *)0x0) && (*(char *)(param_1 + 0x680) == '\0')) {
          iVar17 = isp3_stats_read(param_1,0x4d28);
          piVar12[0x314] = iVar17;
          iVar17 = isp3_stats_read(param_1,0x4d30);
          piVar12[0x315] = iVar17;
          iVar17 = isp3_stats_read(param_1,0x4d58);
          piVar12[0x313] = iVar17;
          iVar17 = isp3_stats_read(param_1,0x4dd8);
          piVar12[0x316] = iVar17;
          iVar17 = 0;
          do {
            iVar8 = isp3_stats_read(param_1,0x4de0);
            iVar16 = iVar17 + 1;
            piVar12[iVar17 + 0x2e1] = iVar8;
            iVar17 = iVar16;
          } while (iVar16 != 0x19);
          iVar17 = 0;
          do {
            iVar8 = isp3_stats_read(param_1,0x4de0);
            iVar16 = iVar17 + 1;
            piVar12[iVar17 + 0x2fa] = iVar8;
            iVar17 = iVar16;
          } while (iVar16 != 0x19);
          piVar12[0x3b0] = piVar12[0x3b0] | 0x40;
        }
        *(undefined1 *)(param_1 + 0x680) = 0;
        if (((uVar3 & 0x1000) == 0) || (iVar17 = isp3_stats_read(param_1,0x3400), -1 < iVar17 << 1))
        {
          isp3_module_done(param_1,0x4d00,uVar3);
        }
        else {
          *(undefined1 *)(param_1 + 0x680) = 1;
        }
        uVar3 = 0;
      }
      else {
        if (0 < *DAT_00027f3c) {
          printk(DAT_00027f44,*(int *)(param_1 + 0x500) + 0xa8,DAT_00027f4c,uVar3);
        }
        uVar3 = 0xffffffc3;
      }
      uVar2 = uVar2 | uVar3;
    }
    if ((param_2[2] << 0x1f < 0) || (*(char *)(param_1 + 0x681) != '\0')) {
      iVar17 = isp3_stats_read(param_1,0x4400);
      if (iVar17 < 0) {
        if ((piVar12 != (int *)0x0) && (*(char *)(param_1 + 0x681) == '\0')) {
          uVar6 = isp3_stats_read(param_1,0x4430);
          *(undefined4 *)((int)piVar12 + 0x132) = uVar6;
          uVar6 = isp3_stats_read(param_1,0x4440);
          *(undefined4 *)((int)piVar12 + 0x136) = uVar6;
          uVar6 = isp3_stats_read(param_1,0x4450);
          *(undefined4 *)((int)piVar12 + 0x13a) = uVar6;
          iVar8 = 0;
          do {
            iVar16 = isp3_stats_read(param_1,0x4480);
            iVar18 = iVar8 + 1;
            *(ushort *)((int)piVar12 + iVar8 * 6 + 0x142) = (ushort)((uint)(iVar16 << 0x14) >> 0x14)
            ;
            *(ushort *)((int)piVar12 + iVar8 * 6 + 0x140) = (ushort)((uint)(iVar16 << 10) >> 0x16);
            *(ushort *)((int)piVar12 + iVar8 * 6 + 0x13e) = (ushort)((uint)iVar16 >> 0x16);
            iVar8 = iVar18;
          } while (iVar18 != 0xe1);
          piVar12[0x3b0] = piVar12[0x3b0] | 0x400;
        }
        if (*(char *)(param_1 + 0x680) == '\0') {
          isp3_module_done(param_1,0x4400,iVar17);
          *(undefined1 *)(param_1 + 0x681) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x681) = 1;
        }
        uVar3 = 0;
      }
      else {
        if (0 < *DAT_00027f3c) {
          printk(DAT_00027f54,*(int *)(param_1 + 0x500) + 0xa8,DAT_00027f50,0x4400,iVar17);
        }
        uVar3 = 0xffffffc3;
      }
      uVar2 = uVar2 | uVar3;
    }
    pvVar7 = (void *)(param_2[2] << 0x1b);
    if ((int)pvVar7 < 0) {
      pvVar7 = (void *)isp3_stats_read(param_1,0x4800);
      if ((int)pvVar7 < 0) {
        if (piVar12 != (int *)0x0) {
          iVar17 = 0;
          do {
            iVar8 = isp3_stats_read(param_1,0x4880);
            iVar16 = iVar17 + 1;
            piVar12[iVar17 + 0x1e1] = iVar8;
            iVar17 = iVar16;
          } while (iVar16 != 0x100);
          piVar12[0x3b0] = piVar12[0x3b0] | 0x4000;
        }
        pvVar7 = (void *)isp3_module_done(param_1,0x4800,pvVar7);
        uVar3 = 0;
      }
      else {
        if (0 < *DAT_000281d0) {
          pvVar7 = (void *)printk(DAT_000281d8,*(int *)(param_1 + 0x500) + 0xa8,DAT_000281d4,0x4800,
                                  pvVar7);
        }
        uVar3 = 0xffffffc3;
      }
      uVar2 = uVar2 | uVar3;
    }
    if (param_2[2] << 0x1e < 0) {
      pvVar7 = (void *)isp3_stats_read(param_1,0x4500);
      if ((int)pvVar7 < 0) {
        if (piVar12 != (int *)0x0) {
          iVar17 = 0;
          do {
            iVar8 = isp3_stats_read(param_1,iVar17 * 4 + 0x4510);
            iVar16 = iVar17 + 1;
            *(ushort *)((int)piVar12 + iVar17 * 6 + 0xa0) = (ushort)((uint)(iVar8 << 0x14) >> 0x14);
            *(ushort *)((int)piVar12 + iVar17 * 6 + 0x9e) = (ushort)((uint)(iVar8 << 10) >> 0x16);
            *(ushort *)((int)piVar12 + iVar17 * 6 + 0x9c) = (ushort)((uint)iVar8 >> 0x16);
            iVar17 = iVar16;
          } while (iVar16 != 0x19);
          piVar12[0x3b0] = piVar12[0x3b0] | 0x80;
        }
        pvVar7 = (void *)isp3_module_done(param_1,0x4500,pvVar7);
        uVar3 = 0;
      }
      else {
        if (0 < *DAT_000281d0) {
          pvVar7 = (void *)printk(DAT_000281e0,*(int *)(param_1 + 0x500) + 0xa8,DAT_000281dc,pvVar7)
          ;
        }
        uVar3 = 0xffffffc3;
      }
      uVar2 = uVar2 | uVar3;
    }
    if (param_2[2] << 0x1a < 0) {
      pvVar7 = (void *)isp3_stats_read(param_1,0x4900);
      if ((int)pvVar7 < 0) {
        if (piVar12 != (int *)0x0) {
          iVar17 = 0;
          do {
            iVar8 = isp3_stats_read(param_1,0x4980);
            iVar16 = iVar17 + 1;
            piVar12[iVar17 + 0x1a1] = iVar8;
            iVar17 = iVar16;
          } while (iVar16 != 0x40);
          piVar12[0x3b0] = piVar12[0x3b0] | 0x800;
        }
        pvVar7 = (void *)isp3_module_done(param_1,0x4900,pvVar7);
        uVar3 = 0;
      }
      else {
        if (0 < *DAT_000281d0) {
          pvVar7 = (void *)printk(DAT_000281e0,*(int *)(param_1 + 0x500) + 0xa8,DAT_000281e4,pvVar7)
          ;
        }
        uVar3 = 0xffffffc3;
      }
      uVar2 = uVar2 | uVar3;
    }
    if (param_2[1] << 0x1e < 0) {
      uVar3 = rkisp_stats_get_bls_stats(param_1,piVar12);
      uVar5 = rkisp_stats_get_dhaz_stats(param_1,piVar12);
      pvVar7 = (void *)(uVar3 | uVar5);
      uVar2 = uVar2 | (uint)pvVar7;
    }
    if (piVar13 == (int *)0x0) {
      return pvVar7;
    }
    if ((uVar2 != 0) || (piVar12[0x3b0] == 0)) {
      disableIRQinterrupts();
      piVar12 = piVar13 + 0xa0;
      puVar14 = *(undefined4 **)(param_1 + 0x508);
      *(int **)(param_1 + 0x508) = piVar12;
      piVar13[0xa0] = (int)pvVar4;
      goto LAB_00027aac;
    }
    rkisp_stats_info2ddr(param_1,piVar12);
    if (piVar13[4] == 0) goto LAB_00027b6c;
    iVar17 = 0xecc;
  }
  piVar13[0x15] = iVar17;
LAB_00027b6c:
  piVar13[0x5c] = local_34;
  iVar17 = param_2[5];
  piVar13[6] = param_2[4];
  piVar13[7] = iVar17;
  pvVar4 = (void *)vb2_buffer_done(piVar13,5);
  return pvVar4;
}



/* ===== rkisp_stats_isr_v32 @ 000281e8 size=200 ===== */

void rkisp_stats_isr_v32(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  uint uStack_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  rkisp_dmarx_get_frame(*(undefined4 *)(param_1 + 0x500),&local_3c,0,0,1);
  uVar1 = isp3_stats_read(param_1,0x5c0);
  uVar4 = DAT_000282b0;
  uVar2 = isp3_stats_read(param_1,0x5d4);
  uVar4 = uVar4 & param_2;
  if (uVar4 != 0) {
    rkisp_write(*(undefined4 *)(param_1 + 0x500),0x5c8,uVar4,1);
    uVar3 = isp3_stats_read(param_1,0x5c4);
    if ((uVar4 & uVar3) != 0) {
      printk(DAT_000282b4,*(int *)(param_1 + 0x454) + 0x10,uVar4 & uVar3,param_2);
    }
  }
  if (uVar2 != 0) {
    rkisp_write(*(undefined4 *)(param_1 + 0x500),0x5dc,uVar2,1);
    uVar4 = isp3_stats_read(param_1,0x5d8);
    if ((uVar2 & uVar4) != 0) {
      printk(DAT_000282b8,*(int *)(param_1 + 0x454) + 0x10,uVar2 & uVar4,param_3);
    }
  }
  if ((int)(param_2 << 0x1e) < 0) {
    local_2c = 0;
    local_34 = uVar1 | param_2;
    local_38 = local_3c;
    uStack_30 = uVar2;
    local_28 = ktime_get();
    rkisp_stats_send_meas_v32(param_1,&local_38);
  }
  return;
}



/* ===== rkisp_stats_first_ddr_config_v32 @ 000282bc size=120 ===== */

void rkisp_stats_first_ddr_config_v32(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  size_t __n;
  
  iVar2 = *(int *)(param_1 + 0x500);
  if (*(char *)(iVar2 + 0xe20) != '\0') {
    __n = *(size_t *)(param_1 + 0x514);
    *(undefined1 *)(param_1 + 0x638) = 1;
    *(size_t *)(param_1 + 0x630) = __n;
    iVar1 = rkisp_alloc_buffer(iVar2,param_1 + 0x614,param_3,1,param_1,param_2);
    if (iVar1 == 0) {
      memset(*(void **)(param_1 + 0x62c),0,__n);
    }
    else {
      printk(DAT_00028334,iVar2 + 0xa8);
    }
    rkisp_stats_update_buf(param_1);
    rkisp_write(iVar2,0x1964,__n,0);
    rkisp_set_bits(iVar2,0x1c,0,0x1000000,0);
    if (*(int *)(param_1 + 0x67c) != 0) {
      *(int *)(param_1 + 0x678) = *(int *)(param_1 + 0x67c);
      *(undefined4 *)(param_1 + 0x67c) = 0;
    }
  }
  return;
}



/* ===== rkisp_stats_next_ddr_config_v32 @ 00028338 size=26 ===== */

void rkisp_stats_next_ddr_config_v32(int param_1)

{
  if ((*(char *)(param_1 + 0x5d8) != '\0') &&
     (*(char *)(*(int *)(*(int *)(param_1 + 0x500) + 0x94) + 0x7b9) != '\0')) {
    rkisp_stats_update_buf();
    return;
  }
  return;
}



/* ===== rkisp_init_stats_vdev_v32 @ 00028352 size=64 ===== */

void rkisp_init_stats_vdev_v32(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x510) = DAT_00028394;
  if (*(int *)(*(int *)(param_1 + 0x500) + 0x97a4) == 0x70) {
    *(undefined4 *)(param_1 + 0x60c) = DAT_00028398;
    *(undefined1 *)(param_1 + 0x644) = 1;
    uVar1 = 0x32ec;
  }
  else {
    *(undefined4 *)(param_1 + 0x60c) = 0;
    *(undefined1 *)(param_1 + 0x644) = 0;
    uVar1 = 0xecc;
  }
  *(undefined4 *)(param_1 + 0x514) = uVar1;
  *(undefined4 *)(param_1 + 0x608) = DAT_0002839c;
  return;
}



/* ===== rkisp_uninit_stats_vdev_v32 @ 000283a0 size=2 ===== */

void rkisp_uninit_stats_vdev_v32(void)

{
  return;
}



/* ===== rkisp_rockit_get_stream @ 000283a8 size=144 ===== */

int rkisp_rockit_get_stream(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  
  iVar4 = *DAT_00028440;
  if (iVar4 == 0) {
    printk(DAT_00028448,DAT_00028444,0x24,DAT_00028440,param_4);
    return 0;
  }
  if (param_1 == 0) {
    uVar3 = 0x28;
    uVar2 = DAT_00028450;
  }
  else {
    iVar7 = *(int *)(iVar4 + 0x14);
    bVar6 = 0;
    do {
      if (iVar7 <= (int)(uint)bVar6) goto LAB_000283f0;
      iVar5 = (uint)bVar6 * 0x368 + iVar4;
      bVar6 = bVar6 + 1;
      iVar1 = strcmp(*(char **)(iVar5 + 0x80),*(char **)(param_1 + 4));
    } while (iVar1 != 0);
    iVar4 = *(int *)(iVar5 + 0x84);
    if (iVar4 != 0) {
      switch(*(undefined4 *)(param_1 + 0x18)) {
      case 0:
        return iVar4 + 0xe98;
      case 1:
        iVar4 = iVar4 + 0x1540;
        break;
      case 2:
        iVar4 = iVar4 + 0x3dc0;
        break;
      case 3:
        iVar4 = iVar4 + 0x4480;
        break;
      case 4:
        return iVar4 + 0x4b58;
      case 5:
        iVar4 = iVar4 + 0x5200;
        break;
      default:
        goto switchD_0002840c_default;
      }
      return iVar4 + 0x18;
    }
LAB_000283f0:
    uVar3 = 0x35;
    uVar2 = DAT_0002844c;
  }
  printk(uVar2,DAT_00028444,uVar3);
switchD_0002840c_default:
  return 0;
}



/* ===== rkisp_rockit_config_stream @ 00028454 size=266 ===== */

undefined4 rkisp_rockit_config_stream(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  piVar1 = (int *)rkisp_rockit_get_stream();
  iVar2 = DAT_00028568;
  if (piVar1 == (int *)0x0) {
    printk(DAT_00028564,DAT_00028560,0x139);
  }
  else {
    *(undefined4 *)(piVar1[2] + 0x5ff0) = param_4;
    piVar1[0x14b] = param_2;
    piVar1[0x14c] = param_3;
    piVar1[0x151] = 0;
    iVar2 = (**(code **)(iVar2 + 8))(piVar1,piVar1 + 0x14b);
    if (-1 < iVar2) {
      if ((*(int *)(piVar1[2] + 0x5ff0) != 0) && (*piVar1 == 0)) {
        rkisp_dvbm_init(piVar1);
      }
      iVar2 = piVar1[0x183];
      piVar3 = piVar1 + 0x181;
      if (iVar2 != 0) {
        piVar4 = (int *)piVar1[0x182];
        piVar1[0x182] = iVar2 + 0x280;
        *(int **)(iVar2 + 0x280) = piVar3;
        *(int **)(iVar2 + 0x284) = piVar4;
        *piVar4 = iVar2 + 0x280;
        piVar1[0x183] = 0;
      }
      iVar2 = piVar1[0x184];
      if (iVar2 != 0) {
        piVar4 = (int *)piVar1[0x182];
        piVar1[0x182] = iVar2 + 0x280;
        *(int **)(iVar2 + 0x280) = piVar3;
        *(int **)(iVar2 + 0x284) = piVar4;
        *piVar4 = iVar2 + 0x280;
        piVar1[0x184] = 0;
      }
      for (piVar4 = (int *)piVar1[0x181]; piVar3 != piVar4; piVar4 = (int *)*piVar4) {
        if (*(char *)((int)piVar1 + 0x51a) == '\x01') {
          piVar6 = piVar4 + 10;
          for (iVar2 = 0; iVar2 < (int)(*(byte *)((int)piVar1 + 0x519) - 1); iVar2 = iVar2 + 1) {
            if (iVar2 == 0) {
              iVar5 = piVar1[0x14c] * piVar1[0x151];
            }
            else {
              iVar5 = piVar1[iVar2 * 5 + 0x150];
            }
            iVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            *piVar6 = iVar5 + iVar7;
          }
        }
      }
      return 0;
    }
    printk(DAT_0002856c,DAT_00028560,0x142,*piVar1);
  }
  return 0xffffffea;
}



/* ===== rkisp_rockit_get_tb_stream_info @ 00028570 size=44 ===== */

undefined4 rkisp_rockit_get_tb_stream_info(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_1 != 0) && (param_2 != 0)) && (iVar1 = rkisp_rockit_get_stream(), iVar1 != 0)) {
    if (*(int *)(param_2 + 0x24) != 0 || *(int *)(param_2 + 0x20) != 0) {
      *(undefined1 *)(iVar1 + 0x671) = 0;
    }
    uVar2 = rkisp_get_tb_stream_info(iVar1,param_2);
    return uVar2;
  }
  return 0xffffffea;
}



/* ===== rkisp_rockit_free_tb_stream_buf @ 0002859c size=24 ===== */

undefined4 rkisp_rockit_free_tb_stream_buf(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (iVar1 = rkisp_rockit_get_stream(), iVar1 != 0)) {
    uVar2 = rkisp_free_tb_stream_buf();
    return uVar2;
  }
  return 0xffffffea;
}



/* ===== rkisp_rockit_function_register @ 000285b4 size=60 ===== */

int rkisp_rockit_function_register(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_000285f0;
  if (*DAT_000285f0 == 0) {
    printk(DAT_000285f8,DAT_000285f4,0x24c,DAT_000285f0,param_4);
    iVar2 = 0;
  }
  else {
    iVar2 = DAT_00028600;
    if (((param_2 != 0) && (iVar2 = param_1, param_2 == 1)) &&
       (*(int *)(*DAT_000285f0 + 0xab8) = param_1, param_1 == 0)) {
      printk(DAT_000285fc,DAT_000285f4,599,piVar1,param_4);
    }
  }
  return iVar2;
}



/* ===== rkisp_rockit_get_ispdev @ 00028604 size=82 ===== */

undefined4
rkisp_rockit_get_ispdev(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = *DAT_00028658;
  if (iVar2 == 0) {
    uVar3 = 0x265;
    uVar1 = DAT_00028660;
  }
  else {
    if (param_1 != (int *)0x0) {
      for (iVar4 = 0; iVar4 < *(int *)(iVar2 + 0x14); iVar4 = iVar4 + 1) {
        param_1[iVar4] = *(int *)(iVar2 + 0x80 + iVar4 * 0x368);
      }
      if (*param_1 != 0) {
        return 0;
      }
      return 0xffffffea;
    }
    uVar3 = 0x26a;
    uVar1 = DAT_00028664;
  }
  printk(uVar1,DAT_0002865c,uVar3,DAT_00028658,param_4);
  return 0xffffffea;
}



/* ===== rkisp_rockit_pause_stream @ 00028668 size=36 ===== */

undefined4 rkisp_rockit_pause_stream(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = rkisp_rockit_get_stream();
  if (iVar1 == 0) {
    printk(DAT_00028690,DAT_0002868c,0x125);
    uVar2 = 0xffffffea;
  }
  else {
    (**(code **)(DAT_00028694 + 4))();
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== rkisp_rockit_resume_stream @ 00028698 size=94 ===== */

undefined4 rkisp_rockit_resume_stream(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)rkisp_rockit_get_stream();
  if (puVar1 == (undefined4 *)0x0) {
    printk(DAT_000286fc,DAT_000286f8,0x16a);
  }
  else {
    *(undefined1 *)(puVar1 + 0x19a) = 1;
    iVar2 = (*(code *)*DAT_00028700)();
    if (-1 < iVar2) {
      if (*(int *)(puVar1[2] + 0x99e0) == 0x100) {
        *(undefined4 *)(puVar1[2] + 0x99e0) = 0x200;
        rkisp_rdbk_trigger_event(puVar1[2],0);
      }
      return 0;
    }
    printk(DAT_00028704,DAT_000286f8,0x171,*puVar1);
  }
  return 0xffffffea;
}



/* ===== rkisp_rockit_buf_queue @ 00028708 size=614 ===== */

undefined4 rkisp_rockit_buf_queue(char *param_1,uint param_2,undefined4 param_3)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  uint extraout_r3;
  char *pcVar10;
  uint *puVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  
  pcVar10 = param_1;
  puVar2 = (uint *)rkisp_rockit_get_stream();
  if (puVar2 == (uint *)0x0) {
    uVar8 = 99;
    uVar12 = DAT_00028974;
    uVar13 = extraout_r3;
LAB_0002871c:
    printk(uVar12,DAT_00028970,uVar8,uVar13,pcVar10,param_2);
  }
  else {
    uVar19 = puVar2[2];
    uVar18 = *puVar2;
    pcVar10 = *(char **)(uVar19 + 0x9acc);
    iVar20 = *(int *)(*(int *)(uVar19 + 0x94) + 0x778);
    if (0xb < uVar18) {
      return 0xffffffea;
    }
    iVar9 = uVar18 * 0x48;
    iVar17 = *DAT_00028978;
    iVar16 = (int)pcVar10 * 0x368;
    *(undefined4 *)(iVar9 + iVar16 + iVar17 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x34) == 0) {
      return 0xffffffea;
    }
    iVar14 = 0;
    puVar5 = (uint *)(iVar9 + 0x9c + iVar16 + iVar17);
    puVar11 = puVar5;
    do {
      if (*puVar11 == *(uint *)(param_1 + 0x10)) {
        *param_1 = '\0';
        goto LAB_0002878c;
      }
      iVar14 = iVar14 + 1;
      puVar11 = puVar11 + 1;
    } while (iVar14 != 5);
    if (*param_1 == '\0') {
LAB_0002878c:
      iVar20 = 0;
      puVar5 = (uint *)(iVar9 + 0x88 + iVar16 + iVar17);
      do {
        uVar15 = *puVar5;
        if (*(uint *)(param_1 + 0x10) == puVar5[5]) break;
        iVar20 = iVar20 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar20 != 5);
    }
    else {
      iVar9 = 0;
      while( true ) {
        uVar13 = *puVar5;
        if (uVar13 == 0) break;
        iVar9 = iVar9 + 1;
        puVar5 = puVar5 + 1;
        if (iVar9 == 5) {
          return 0xffffffea;
        }
      }
      uVar15 = kmem_cache_alloc(*(undefined4 *)(DAT_0002897c + 0x28),0xdc0);
      iVar9 = iVar17 + ((int)pcVar10 * 0xda + uVar18 * 0x12 + iVar9) * 4;
      *(uint *)(iVar9 + 0x88) = uVar15;
      if (uVar15 == 0) {
        uVar8 = 0x81;
        uVar12 = DAT_00028980;
        param_2 = uVar13;
        goto LAB_0002871c;
      }
      *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(param_1 + 0x10);
      puVar6 = *(undefined4 **)(param_1 + 0x34);
      *(undefined4 *)(uVar15 + 0x2d8) = *(undefined4 *)(param_1 + 0x24);
      uVar3 = (**(code **)(iVar20 + 0x1c))
                        (*(undefined4 *)(*(int *)(puVar2[2] + 0x94) + 8),puVar6,*puVar6,uVar13,
                         pcVar10,uVar13,param_3);
      param_2 = uVar13;
      if (0xfffff000 < uVar3) {
        printk(DAT_00028984,DAT_00028970,0x93);
        param_2 = uVar13;
      }
      uVar12 = *(undefined4 *)(param_1 + 0x34);
      *(uint *)(uVar15 + 0x2d4) = uVar3;
      *(undefined4 *)(uVar15 + 0x2d0) = uVar12;
      iVar9 = (**(code **)(iVar20 + 0x24))(uVar3);
      if (iVar9 != 0) {
        printk(DAT_00028988,DAT_00028970,0x9a);
      }
      if (*(char *)(*(int *)(puVar2[2] + 0x94) + 0x7b6) == '\0') {
        puVar6 = (undefined4 *)(**(code **)(iVar20 + 0x30))(uVar3);
        uVar12 = *puVar6;
      }
      else {
        piVar7 = (int *)(**(code **)(iVar20 + 0x30))();
        uVar12 = *(undefined4 *)(*piVar7 + 0xc);
      }
      *(undefined4 *)(uVar15 + 0x2e8) = uVar12;
      piVar7 = (int *)(*(int *)(*(int *)(param_1 + 0x34) + 4) + 0x1c);
      HintPreloadData(piVar7);
      do {
        ExclusiveAccess(piVar7);
        bVar1 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar1);
      *piVar7 = *piVar7 + 1;
    }
    piVar7 = (int *)(uVar15 + 0x2a8);
    piVar4 = piVar7;
    for (iVar20 = 0; iVar20 < (int)(uint)*(byte *)((int)puVar2 + 0x51a); iVar20 = iVar20 + 1) {
      *piVar4 = *(int *)(uVar15 + 0x2e8);
      piVar4 = piVar4 + 1;
    }
    if (*(byte *)((int)puVar2 + 0x51a) == 1) {
      for (iVar20 = 0; iVar20 < (int)(*(byte *)((int)puVar2 + 0x519) - 1); iVar20 = iVar20 + 1) {
        if (iVar20 == 0) {
          uVar13 = puVar2[0x14c] * puVar2[0x151];
        }
        else {
          uVar13 = puVar2[iVar20 * 5 + 0x150];
        }
        iVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        *piVar7 = uVar13 + iVar9;
      }
    }
    if (1 < *DAT_0002898c) {
      printk(DAT_00028990,uVar19 + 0xa8,*puVar2,*(undefined4 *)(uVar15 + 0x2a8),pcVar10,param_2);
    }
    if ((*(char *)(iVar17 + (int)pcVar10 * 0x368 + uVar18 * 0x48 + 200) == '\0') ||
       ((char)puVar2[0x19a] == '\0')) {
      disableIRQinterrupts();
      if ((*(char *)(*(int *)(puVar2[2] + 0x94) + 0x7b9) == '\0') ||
         (((*puVar2 - 10 < 2 || ((char)puVar2[0x19a] == '\0')) || (puVar2[0x184] != 0)))) {
        puVar5 = (uint *)puVar2[0x182];
        puVar2[0x182] = uVar15 + 0x280;
        *(uint **)(uVar15 + 0x280) = puVar2 + 0x181;
        *(uint **)(uVar15 + 0x284) = puVar5;
        *puVar5 = uVar15 + 0x280;
      }
      else {
        puVar2[0x184] = uVar15;
        (**(code **)(puVar2[0x17f] + 0x18))(puVar2);
      }
      return 0;
    }
  }
  return 0xffffffea;
}



/* ===== rkisp_rockit_buf_done @ 00028994 size=358 ===== */

undefined4 rkisp_rockit_buf_done(uint *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_2c;
  undefined8 local_28;
  
  piVar1 = DAT_00028afc;
  uVar8 = param_1[2];
  iVar9 = *(int *)(uVar8 + 0x9acc);
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  local_28 = 0;
  iVar6 = *DAT_00028afc;
  if (((iVar6 == 0) || (*(int *)(iVar6 + 0xab8) == 0)) || (uVar7 = *param_1, 0xb < uVar7)) {
    return 0xffffffea;
  }
  if (param_2 == 0) {
    *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(param_1[0x183] + 0x2d8);
    uVar4 = *(undefined4 *)(param_1[0x183] + 0x1c);
    *(undefined4 *)(iVar6 + 0x68) = *(undefined4 *)(param_1[0x183] + 0x18);
    *(undefined4 *)(iVar6 + 0x6c) = uVar4;
    *(undefined4 *)(iVar6 + 100) = *(undefined4 *)(param_1[0x183] + 0x170);
  }
  else {
    if ((*(int *)(uVar8 + 0x5ff0) == 0) || (uVar7 != 0)) {
      if (*(int *)(uVar7 * 0x48 + iVar9 * 0x368 + iVar6 + 0xb8) == 0) {
        return 0;
      }
      if ((*(char *)(uVar7 * 0x48 + iVar9 * 0x368 + iVar6 + 200) != '\0') || (param_1[0x183] != 0))
      {
        *(undefined1 *)(iVar6 + 2) = 0;
        return 0;
      }
      *(undefined1 *)(iVar6 + 2) = 1;
    }
    else {
      if (*(char *)(iVar9 * 0x368 + iVar6 + 200) != '\0') {
        return 0;
      }
      iVar2 = (**(code **)(param_1[0x17f] + 0x14))();
      if (iVar2 != 0) {
        return 0;
      }
    }
    rkisp_dmarx_get_frame(param_1[2],&local_2c,0,&local_28,1);
    if (local_28._4_4_ == 0 && (int)local_28 == 0) {
      local_28 = ktime_get();
    }
    iVar2 = *piVar1;
    *(undefined8 *)(iVar2 + 0x68) = local_28;
    *(undefined4 *)(iVar2 + 100) = local_2c;
  }
  iVar2 = rkisp_read(uVar8,0x200,1);
  iVar5 = *piVar1;
  *(bool *)(iVar5 + 3) = iVar2 == 0;
  *(uint *)(iVar5 + 0x40) = param_1[0x14c];
  *(uint *)(iVar5 + 0x3c) = param_1[0x14b];
  *(uint *)(iVar5 + 0x50) = param_1[0x14d];
  *(uint *)(iVar5 + 0x44) = param_1[0x14b];
  uVar3 = param_1[0x14c];
  *(uint *)(iVar5 + 4) = uVar8 + 0x10;
  *(uint *)(iVar5 + 0x48) = uVar3;
  uVar4 = *(undefined4 *)(iVar6 + uVar7 * 0x48 + iVar9 * 0x368 + 0xb0);
  *(int *)(iVar5 + 0x1c) = param_2;
  *(undefined4 *)(iVar5 + 0x20) = uVar4;
  *(bool *)(iVar5 + 1) = (uint *)param_1[0x181] == param_1 + 0x181;
  if (*(code **)(iVar5 + 0xab8) != (code *)0x0) {
    (**(code **)(iVar5 + 0xab8))(iVar5);
  }
  return 0;
}



/* ===== rkisp_rockit_buf_free @ 00028b00 size=130 ===== */

undefined4 rkisp_rockit_buf_free(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(*(int *)(param_1[2] + 0x94) + 0x778);
  iVar4 = *DAT_00028b84;
  if ((iVar4 == 0) || (uVar3 = *param_1, 0xb < uVar3)) {
    uVar1 = 0xffffffea;
  }
  else {
    iVar2 = *(int *)(param_1[2] + 0x9acc) * 0x368;
    iVar6 = 5;
    *(undefined1 *)(uVar3 * 0x48 + iVar2 + iVar4 + 200) = 0;
    piVar5 = (int *)(iVar4 + uVar3 * 0x48 + iVar2 + 0x88);
    do {
      iVar4 = *piVar5;
      if (iVar4 != 0) {
        if (*(int *)(iVar4 + 0x2d4) != 0) {
          (**(code **)(iVar7 + 0x28))();
          (**(code **)(iVar7 + 0x20))(*(undefined4 *)(iVar4 + 0x2d4));
          dma_buf_put(*(undefined4 *)(iVar4 + 0x2d0));
        }
        kfree(*piVar5);
        *piVar5 = 0;
        piVar5[5] = 0;
      }
      iVar6 = iVar6 + -1;
      piVar5 = piVar5 + 1;
    } while (iVar6 != 0);
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== rkisp_rockit_dev_init @ 00028b88 size=88 ===== */

void rkisp_rockit_dev_init(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_00028be0;
  if (*DAT_00028be0 == 0) {
    iVar2 = kmem_cache_alloc(*(undefined4 *)(DAT_00028be4 + 0x30),0xdc0,param_3,DAT_00028be4,param_4
                            );
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      return;
    }
  }
  iVar5 = *piVar1;
  iVar2 = *(int *)(*(int *)(param_1 + 0x94) + 0xb8);
  *(int *)(iVar5 + 0x14) = iVar2;
  for (iVar4 = 0; iVar4 < iVar2; iVar4 = iVar4 + 1) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x94) + (iVar4 + 0x16) * 4);
    if (iVar3 != 0) {
      *(int *)(iVar5 + 0x80) = iVar3 + 0x10;
      *(undefined4 *)(iVar5 + 0x84) = *(undefined4 *)(*(int *)(param_1 + 0x94) + (iVar4 + 0x16) * 4)
      ;
    }
    iVar5 = iVar5 + 0x368;
  }
  return;
}



/* ===== rkisp_rockit_dev_deinit @ 00028be8 size=18 ===== */

void rkisp_rockit_dev_deinit(void)

{
  int *piVar1;
  
  piVar1 = DAT_00028bfc;
  if (*DAT_00028bfc != 0) {
    kfree();
    *piVar1 = 0;
  }
  return;
}



/* ===== rkisp_rockit_fps_set @ 00028c00 size=82 ===== */

undefined4 rkisp_rockit_fps_set(undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_2 < 0xc) {
    if (param_1 == (undefined4 *)0x0) {
      printk(DAT_00028c5c,DAT_00028c54,0x1df);
    }
    else if (*DAT_00028c60 != 0) {
      uVar1 = *param_1;
      iVar2 = *DAT_00028c60 + *param_2 * 0x48 + *(int *)(param_2[2] + 0x9acc) * 0x368;
      *(undefined4 *)(iVar2 + 0xb4) = uVar1;
      *(undefined4 *)(iVar2 + 0xb8) = uVar1;
      return 0;
    }
  }
  else {
    printk(DAT_00028c58,DAT_00028c54,0x1da);
  }
  return 0xffffffea;
}



/* ===== rkisp_rockit_fps_get @ 00028c64 size=82 ===== */

undefined4 rkisp_rockit_fps_get(undefined4 *param_1,int *param_2)

{
  if (*param_2 < 0xc) {
    if (param_1 == (undefined4 *)0x0) {
      printk(DAT_00028cc0,DAT_00028cb8,0x1f6);
    }
    else if (*DAT_00028cc4 != 0) {
      *param_1 = *(undefined4 *)
                  (*param_2 * 0x48 + *(int *)(param_2[2] + 0x9acc) * 0x368 + *DAT_00028cc4 + 0xbc);
      return 0;
    }
  }
  else {
    printk(DAT_00028cbc,DAT_00028cb8,0x1f1);
  }
  return 0xffffffea;
}



/* ===== rkisp_rockit_ctrl_fps @ 00028cc8 size=426 ===== */

char rkisp_rockit_ctrl_fps(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  int iVar9;
  undefined1 uVar10;
  int iVar11;
  code *pcVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  bool bVar18;
  longlong lVar19;
  
  uVar4 = DAT_00028e88;
  uVar6 = DAT_00028e84;
  piVar3 = DAT_00028e80;
  iVar14 = *DAT_00028e80;
  if (iVar14 == 0) {
    return '\0';
  }
  uVar13 = *param_1;
  if (0xb < uVar13) {
    return '\0';
  }
  iVar17 = *(int *)(param_1[2] + 0x9acc);
  iVar15 = *(int *)(uVar13 * 0x48 + iVar17 * 0x368 + iVar14 + 0xb8);
  if ((iVar15 == 0) || (cVar1 = (char)param_1[0x19a], cVar1 == '\0')) {
    *(undefined1 *)(iVar14 + iVar17 * 0x368 + uVar13 * 0x48 + 200) = 0;
    return '\0';
  }
  piVar16 = *(int **)(param_1[2] + 0x318);
  if (piVar16 == (int *)0x0) {
    iVar17 = uVar13 * 0x48 + 0x48 + iVar17 * 0x368;
    uVar7 = 0x21b;
    *(undefined1 *)(iVar14 + iVar17 + 0x80) = 0;
LAB_00028d48:
    printk(uVar4,uVar6,uVar7,iVar17,param_1);
  }
  else {
    iVar5 = *piVar16;
    if (((iVar5 != 0) && (iVar11 = *(int *)(*(int *)(iVar5 + 0x68) + 0xc), iVar11 != 0)) &&
       (pcVar12 = *(code **)(iVar11 + 0x30), pcVar12 != (code *)0x0)) {
      if ((*(int *)(DAT_00028e8c + 0xc) == 0) ||
         (pcVar8 = *(code **)(*(int *)(DAT_00028e8c + 0xc) + 0x30), pcVar8 == (code *)0x0)) {
        iVar5 = (*pcVar12)(iVar5,piVar16 + 3,0,pcVar12,param_1,param_2,param_3);
      }
      else {
        iVar5 = (*pcVar8)();
      }
      uVar4 = DAT_00028e90;
      uVar6 = DAT_00028e84;
      if (iVar5 == 0) {
        if (piVar16[4] == 0) {
          uVar7 = 0x229;
          *(undefined1 *)(iVar14 + iVar17 * 0x368 + uVar13 * 0x48 + 200) = 0;
          iVar17 = 0;
          param_1 = (uint *)0x0;
          goto LAB_00028d48;
        }
        iVar5 = __aeabi_uidiv(piVar16[5]);
        piVar3[1] = iVar5;
      }
    }
    iVar5 = piVar3[1];
    if (iVar15 < iVar5) {
      iVar11 = uVar13 + 1;
      if ((iVar5 < 1) || (iVar15 < 1)) {
        iVar17 = iVar11 * 0x48 + iVar17 * 0x368;
        uVar10 = 0;
      }
      else {
        iVar9 = uVar13 * 0x48 + iVar17 * 0x368 + iVar14;
        if (*(int *)(iVar9 + 0xb4) < 0) {
          *(int *)(iVar9 + 0xb4) = iVar5 - iVar15;
        }
        iVar17 = iVar17 * 0x368;
        iVar9 = uVar13 * 0x48 + iVar17 + iVar14;
        iVar15 = iVar15 + *(int *)(iVar9 + 0xb4);
        *(int *)(iVar9 + 0xb4) = iVar15;
        if (iVar5 <= iVar15) {
          *(int *)(iVar9 + 0xb4) = iVar15 - iVar5;
          *(undefined1 *)(iVar14 + iVar11 * 0x48 + iVar17 + 0x80) = 0;
          piVar3[*param_1 + 2] = piVar3[*param_1 + 2] + 1;
          lVar19 = ktime_get();
          lVar2 = lVar19 - *(longlong *)(iVar9 + 0xc0);
          uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
          bVar18 = uVar13 <= DAT_00028e7c;
          if (DAT_00028e7c == uVar13) {
            bVar18 = (uint)lVar2 <= DAT_00028e78;
          }
          if (!bVar18) {
            *(longlong *)(iVar9 + 0xc0) = lVar19;
            *(int *)(iVar9 + 0xbc) = piVar3[*param_1 + 2];
            piVar3[*param_1 + 2] = 0;
            return cVar1;
          }
          return cVar1;
        }
        iVar17 = iVar11 * 0x48 + iVar17;
        uVar10 = 1;
      }
      *(undefined1 *)(iVar14 + iVar17 + 0x80) = uVar10;
      return cVar1;
    }
  }
  return '\0';
}



/* ===== rkisp_dvbm_get @ 00028e94 size=76 ===== */

undefined4 rkisp_dvbm_get(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = DAT_00028ee4;
  iVar2 = of_parse_phandle(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x164),DAT_00028ee0,0,
                           *(int *)(param_1 + 0xc),param_4);
  iVar4 = *(int *)(param_1 + 0x97a4);
  *puVar1 = 0;
  if (iVar4 == 0x70) {
    if ((iVar2 == 0) || (iVar4 = of_device_is_available(), iVar4 == 0)) {
      _dev_warn(*(undefined4 *)(param_1 + 0xc),DAT_00028ee8);
    }
    else {
      uVar3 = of_find_device_by_node(iVar2);
      uVar3 = rk_dvbm_get_port(uVar3,0);
      *puVar1 = uVar3;
    }
  }
  return 0xffffffea;
}



/* ===== rkisp_dvbm_init @ 00028eec size=88 ===== */

undefined4 rkisp_dvbm_init(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  piVar1 = DAT_00028f44;
  if (*DAT_00028f44 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    local_28 = *(int *)(param_1 + 0x544);
    local_34 = *(undefined4 *)(param_1 + 0x620);
    local_24 = local_28 * *(int *)(param_1 + 0x530);
    local_30 = local_28 * *(int *)(*(int *)(param_1 + 8) + 0x5ff0);
    local_2c = 0;
    local_14 = local_24 >> 1;
    local_20 = local_30 + (local_30 >> 1);
    local_1c = local_30;
    local_18 = local_28;
    rk_dvbm_ctrl(*DAT_00028f44,1,auStack_40);
    rk_dvbm_link(*piVar1);
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== rkisp_dvbm_deinit @ 00028f48 size=12 ===== */

void rkisp_dvbm_deinit(void)

{
  if (*DAT_00028f54 != 0) {
    rk_dvbm_unlink();
    return;
  }
  return;
}



/* ===== rkisp_dvbm_event @ 00028f58 size=76 ===== */

undefined4 rkisp_dvbm_event(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 auStack_14 [8];
  
  piVar1 = DAT_00028fa4;
  if (((*DAT_00028fa4 == 0) || (*(int *)(param_1 + 0x97a4) != 0x70)) ||
     (*(int *)(param_1 + 0x5ff0) == 0)) {
LAB_00028f9e:
    uVar2 = 0xffffffea;
  }
  else {
    rkisp_dmarx_get_frame(param_1,auStack_14,0,0,1);
    if (param_2 == 1) {
      uVar2 = 3;
    }
    else {
      if (param_2 != 0x40) goto LAB_00028f9e;
      uVar2 = 2;
    }
    uVar2 = rk_dvbm_ctrl(*piVar1,uVar2,auStack_14);
  }
  return uVar2;
}



/* ===== init_module @ 00028fa8 size=26 ===== */

void init_module(void)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  iVar1 = __platform_driver_register(DAT_00028fc8,DAT_00028fc4);
  if (iVar1 == 0) {
    __platform_driver_register(DAT_00028fcc,DAT_00028fc4,extraout_r2,in_r3);
    return;
  }
  return;
}



/* ===== cleanup_module @ 00028fd0 size=18 ===== */

void cleanup_module(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 in_r3;
  
  platform_driver_unregister(DAT_00028fe4);
  platform_driver_unregister(DAT_00028fe8,extraout_r1,extraout_r2,in_r3);
  return;
}



/* ===== rkisp_plat_probe @ 00028fec size=1096 ===== */

int rkisp_plat_probe(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  uint local_48;
  int local_44;
  
  iVar12 = param_1 + 0x10;
  snprintf(DAT_000292b0,10,DAT_000292ac,2,1,0);
  _dev_info(iVar12,DAT_000292b4,DAT_000292b0);
  piVar2 = (int *)devm_kmalloc(iVar12,0xe040,0xdc0);
  if (piVar2 != (int *)0x0) {
    *(int **)(param_1 + 0x50) = piVar2;
    piVar2[3] = iVar12;
    iVar3 = rkisp_attach_hw();
    if (iVar3 != 0) {
      return iVar3;
    }
    if (*(char *)(piVar2[0x25] + 0x7be) == '\0') {
      uVar7 = 0xc000;
    }
    else {
      uVar7 = 0x18000;
    }
    iVar3 = devm_kmalloc(iVar12,uVar7,0xdc0);
    piVar2[0x24] = iVar3;
    uVar7 = DAT_000292b8;
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(iVar3 + 0x9824) = 0xffffffff;
      uVar4 = devm_gpiod_get(iVar12,uVar7,1);
      if (uVar4 < 0xfffff001) {
        iVar5 = gpiod_to_irq();
        if (iVar5 < 0) {
          _dev_err(iVar12,DAT_000292bc);
          return iVar5;
        }
        _dev_info(iVar12,DAT_000292c0,iVar5);
        iVar6 = devm_request_threaded_irq(iVar12,iVar5,DAT_000292c8,0,0x2081,DAT_000292c4,iVar12);
        if (iVar6 != 0) {
          _dev_err(iVar12,DAT_000292cc,iVar6);
          return iVar6;
        }
        disable_irq(iVar5);
        *(int *)(iVar3 + 0x9824) = iVar5;
        *(uint *)(iVar3 + 0x9828) = uVar4;
        _dev_info(iVar12,DAT_000292d0);
      }
      piVar9 = piVar2 + 4;
      snprintf((char *)(piVar2 + 0x58),0x20,DAT_000292d4,DAT_000292d8,piVar2[0x26b3]);
      if (*(char *)(piVar2[0x25] + 0x7be) == '\0') {
        iVar3 = *(int *)(param_1 + 0x3c);
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x10);
        }
        strscpy(piVar9,iVar3,0x80);
      }
      else {
        snprintf((char *)piVar9,0x80,DAT_000292d4,DAT_00029308,piVar2[0x26b3]);
      }
      strscpy(piVar2 + 0x60,piVar9,0x20);
      iVar5 = piVar2[3];
      iVar3 = of_parse_phandle(*(undefined4 *)(iVar5 + 0x164),DAT_000292dc,0);
      if (iVar3 == 0) {
        _dev_info(iVar5,DAT_000292e0);
      }
      else {
        iVar3 = of_address_to_resource(iVar3,0,&local_48);
        if (iVar3 != 0) {
          _dev_err(iVar5,DAT_0002930c);
          return iVar3;
        }
        piVar2[0x2685] = local_48;
        piVar2[0x2686] = (local_44 + 1) - local_48;
        iVar3 = is_vmalloc_addr(local_48 + 0x7f000000);
        if (iVar3 == 0) {
          iVar6 = dma_map_page_attrs(iVar5,*DAT_00029314 + (local_48 + 0xcf000000 >> 0xc) * 0x20,
                                     local_48 & 0xfff,0x40,0,0);
          piVar2[0x2684] = iVar6;
          iVar3 = 0;
          if (iVar6 == -1) {
            iVar3 = -0xc;
          }
        }
        else {
          iVar3 = -0xc;
          piVar2[0x2684] = -1;
        }
        *(undefined1 *)(piVar2 + 0x2697) = 1;
        _dev_info(iVar5,DAT_00029310,piVar2[0x2685]);
        if (iVar3 != 0) {
          return iVar3;
        }
      }
      __mutex_init(piVar2 + 0x267c,DAT_000292e8,DAT_000292e4);
      __mutex_init(piVar2 + 0x267f,DAT_000292ec,DAT_000292e4);
      piVar2[0x25dc] = 0;
      uVar7 = DAT_000292e4;
      piVar2[0x25dd] = 0;
      __init_waitqueue_head(piVar2 + 0x2682,DAT_000292f0,uVar7);
      piVar2[0x25e6] = DAT_000292f4;
      piVar2[0x25e7] = DAT_000292f8;
      piVar2[0x25e8] = DAT_000292fc;
      if ((piVar2[0x25e9] & 0xffffffefU) == 0x40) {
        piVar2[0x260d] = 0;
        piVar2[0x260f] = (int)(piVar2 + 0x260f);
        piVar2[0x2610] = (int)(piVar2 + 0x260f);
        piVar2[0x2615] = (int)(piVar2 + 0x2615);
        piVar2[0x2616] = (int)(piVar2 + 0x2615);
        piVar2[0x2611] = (int)(piVar2 + 0x2611);
        piVar2[0x2612] = (int)(piVar2 + 0x2611);
        piVar2[0x2617] = (int)(piVar2 + 0x2617);
        piVar2[0x2618] = (int)(piVar2 + 0x2617);
        piVar2[0x2613] = (int)(piVar2 + 0x2613);
        piVar2[0x2614] = (int)(piVar2 + 0x2613);
        piVar2[0x2619] = (int)(piVar2 + 0x2619);
        piVar2[0x261a] = (int)(piVar2 + 0x2619);
      }
      iVar3 = DAT_00029300;
      piVar11 = piVar2 + 0x2a;
      piVar2[0x56] = iVar12;
      piVar2[0xb5] = iVar3;
      piVar8 = piVar2 + 0x56;
      piVar2[0x27] = (int)piVar8;
      piVar10 = piVar2 + 0x26;
      strlcpy(piVar11,piVar9,0x24);
      v4l2_ctrl_handler_init_class(piVar2 + 0x3b,5,0);
      piVar2[0x34] = (int)(piVar2 + 0x3b);
      iVar3 = v4l2_device_register(piVar2[3],piVar10);
      if (iVar3 < 0) {
        printk(DAT_00029304,piVar11,iVar3);
        return iVar3;
      }
      media_device_init(piVar8);
      iVar3 = __media_device_register(piVar8,DAT_000294a0);
      if (iVar3 < 0) {
        printk(DAT_000294a4,piVar11,iVar3);
      }
      else {
        pm_runtime_enable(iVar12);
        iVar3 = rkisp_register_isp_subdev(piVar2,piVar10);
        if (-1 < iVar3) {
          iVar3 = rkisp_register_csi_subdev(piVar2,piVar10);
          if (-1 < iVar3) {
            iVar3 = rkisp_register_stream_vdevs(piVar2);
            if (-1 < iVar3) {
              iVar3 = rkisp_register_dmarx_vdev(piVar2);
              if (-1 < iVar3) {
                iVar3 = rkisp_register_stats_vdev(piVar2 + 0x1802,piVar10,piVar2);
                if (-1 < iVar3) {
                  iVar3 = rkisp_register_params_vdev(piVar2 + 0x19a4,piVar10,piVar2);
                  if (-1 < iVar3) {
                    piVar9 = piVar2 + 0xba;
                    iVar12 = piVar2[3];
                    v4l2_async_notifier_init(piVar9);
                    iVar3 = v4l2_async_notifier_parse_fwnode_endpoints
                                      (iVar12,piVar9,0x24,DAT_000294a8);
                    if (-1 < iVar3) {
                      piVar2[0xba] = DAT_000294ac + 0x14;
                      iVar3 = v4l2_async_notifier_register(piVar10,piVar9);
                      uVar7 = DAT_000294b8;
                      iVar12 = DAT_000294b4;
                      puVar1 = DAT_000294b0;
                      if (-1 < iVar3) {
                        *DAT_000294b0 = 0;
                        of_property_read_variable_u32_array
                                  (*(undefined4 *)(param_1 + 0x174),uVar7,puVar1,1,0);
                        rkisp_proc_init(piVar2);
                        mutex_lock(iVar12);
                        piVar9 = *(int **)(iVar12 + 0x10);
                        *(int **)(iVar12 + 0x10) = piVar2;
                        *piVar2 = iVar12 + 0xc;
                        piVar2[1] = (int)piVar9;
                        *piVar9 = (int)piVar2;
                        mutex_unlock(iVar12);
                        return 0;
                      }
                    }
                    printk(DAT_000294bc,piVar11,iVar3);
                    rkisp_unregister_params_vdev(piVar2 + 0x19a4);
                  }
                  rkisp_unregister_stats_vdev(piVar2 + 0x1802);
                }
                rkisp_unregister_dmarx_vdev(piVar2);
              }
              rkisp_unregister_stream_vdevs(piVar2);
            }
            rkisp_unregister_csi_subdev(piVar2);
          }
          rkisp_unregister_isp_subdev(piVar2);
        }
        printk(DAT_000294c0,piVar11,iVar3);
        media_device_unregister(piVar8);
      }
      v4l2_device_unregister(piVar10);
      return iVar3;
    }
  }
  return -0xc;
}



/* ===== rkisp_proc_dump_mem @ 000294c4 size=420 ===== */

void rkisp_proc_dump_mem(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_r11;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 auStack_140 [20];
  char acStack_12c [256];
  int local_2c;
  
  piVar1 = DAT_00029668;
  local_2c = *DAT_00029668;
  iVar7 = *(int *)(*(int *)(param_1 + 0x94) + 0x778);
  *(undefined1 *)(param_1 + 0x96d8) = 1;
  _cond_resched();
  if (*(char *)(param_1 + 0x96d9) != '\0') {
    init_wait_entry(auStack_140,0);
    iVar6 = 300;
    while( true ) {
      prepare_to_wait_event(param_1 + 0x96cc,auStack_140,2);
      if ((*(char *)(param_1 + 0x96d9) == '\0') || (iVar6 == 0)) break;
      iVar6 = schedule_timeout(iVar6);
    }
    finish_wait(param_1 + 0x96cc,auStack_140);
  }
  if (*(int *)(param_1 + 0x97a4) != 0x60) goto LAB_000295b8;
  iVar8 = *(int *)(param_1 + 0x711c);
  iVar6 = 0;
  if (*(int *)(iVar8 + 0x2cc) != 0) {
    if (*(char *)(iVar8 + 0x2dc) == '\0') {
      uVar2 = (**(code **)(iVar7 + 0x2c))(*(int *)(iVar8 + 0x2cc));
      *(undefined4 *)(iVar8 + 0x2d0) = uVar2;
    }
    iVar6 = *(int *)(iVar8 + 0x2d0);
    local_148 = *(undefined4 *)(iVar8 + 0x2d4);
  }
  iVar5 = 0;
  if (*(int *)(iVar8 + 0x31c) != 0) {
    if (*(char *)(iVar8 + 0x32c) == '\0') {
      uVar2 = (**(code **)(iVar7 + 0x2c))(*(int *)(iVar8 + 0x31c));
      *(undefined4 *)(iVar8 + 800) = uVar2;
    }
    iVar5 = *(int *)(iVar8 + 800);
    local_144 = *(undefined4 *)(iVar8 + 0x324);
  }
  iVar4 = 0;
  if (*(int *)(iVar8 + 0x36c) != 0) {
    if (*(char *)(iVar8 + 0x37c) == '\0') {
      uVar2 = (**(code **)(iVar7 + 0x2c))(*(int *)(iVar8 + 0x36c));
      *(undefined4 *)(iVar8 + 0x370) = uVar2;
    }
    iVar4 = *(int *)(iVar8 + 0x370);
    unaff_r11 = *(undefined4 *)(iVar8 + 0x374);
  }
  if (iVar6 == 0) {
LAB_000295da:
    if (iVar5 != 0) {
      snprintf(acStack_12c,0x100,DAT_00029674,param_1 + 0x10);
      uVar3 = filp_open(acStack_12c,0x42,0x1a4);
      if (0xfffff000 < uVar3) goto LAB_000295ae;
      kernel_write(uVar3,iVar5,local_144,uVar3 + 0x38);
      filp_close(uVar3,0);
    }
    if (iVar4 == 0) goto LAB_000295b8;
    snprintf(acStack_12c,0x100,DAT_00029678,param_1 + 0x10);
    uVar3 = filp_open(acStack_12c,0x42,0x1a4);
    if (uVar3 < 0xfffff001) {
      kernel_write(uVar3,iVar4,unaff_r11,uVar3 + 0x38);
      filp_close(uVar3,0);
      goto LAB_000295b8;
    }
  }
  else {
    snprintf(acStack_12c,0x100,DAT_0002966c,param_1 + 0x10);
    uVar3 = filp_open(acStack_12c,0x42,0x1a4);
    if (uVar3 < 0xfffff001) {
      kernel_write(uVar3,iVar6,local_148,uVar3 + 0x38);
      filp_close(uVar3,0);
      goto LAB_000295da;
    }
  }
LAB_000295ae:
  _dev_err(*(undefined4 *)(param_1 + 0xc),DAT_00029670,acStack_12c);
LAB_000295b8:
  if (local_2c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== <EXTERNAL>::vb2_queue_init @ 00031000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vb2_queue_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::filp_open @ 00031008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void filp_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcpy @ 0003100c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strcpy(char *__dest,char *__src)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::is_vmalloc_addr @ 00031010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void is_vmalloc_addr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::completion_done @ 00031014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void completion_done(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::device_property_present @ 00031018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void device_property_present(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_device_unregister @ 00031020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_device_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_notifier_unregister @ 00031024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_notifier_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_request_threaded_irq @ 00031028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_request_threaded_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vb2_queue_release @ 00031030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vb2_queue_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wait_for_completion_timeout @ 00031034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wait_for_completion_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_kmalloc @ 00031038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_property_read_variable_u32_array @ 0003103c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_property_read_variable_u32_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_driver_unregister @ 00031044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_driver_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_find_device_by_node @ 00031048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_find_device_by_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_irq @ 0003104c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_device_init @ 00031050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_device_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00031058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::complete @ 0003105c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void complete(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_address_to_resource @ 00031060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_address_to_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::queue_work_on @ 00031064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void queue_work_on(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kfifo_in @ 00031070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kfifo_in(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sg_free_table @ 00031078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sg_free_table(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mmiocpy @ 0003107c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mmiocpy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_swait_queue_head @ 00031080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_swait_queue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::finish_wait @ 00031084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void finish_wait(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sg_alloc_table_from_pages @ 00031088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sg_alloc_table_from_pages(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_dvbm_get_port @ 00031090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_dvbm_get_port(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_handler_init_class @ 00031094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_handler_init_class(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_ioremap @ 00031098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_ioremap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::gpiod_to_irq @ 0003109c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void gpiod_to_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 000310a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::reset_control_assert @ 000310a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void reset_control_assert(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kstrtouint @ 000310a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kstrtouint(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree @ 000310ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_entity_remote_pad @ 000310b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_entity_remote_pad(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::enable_irq @ 000310b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void enable_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__media_device_register @ 000310b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __media_device_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_heavy_mb @ 000310c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_heavy_mb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::proc_create_data @ 000310c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void proc_create_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_subdev_init @ 000310cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_subdev_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prepare_to_wait_event @ 000310d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void prepare_to_wait_event(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__wake_up @ 000310d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __wake_up(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_fh_open @ 000310d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_fh_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_resource_byname @ 000310e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_resource_byname(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_set_rate @ 000310e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_set_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_unmap_resource @ 000310e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_unmap_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kfifo_free @ 000310ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kfifo_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_clk_get @ 000310f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_clk_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_create_pad_link @ 000310f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_create_pad_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_driver_string @ 000310f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_driver_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pinctrl_pm_select_default_state @ 000310fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pinctrl_pm_select_default_state(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_device_register_subdev @ 00031100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_device_register_subdev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_reset_control_array_get @ 00031104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_reset_control_array_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_map_page_attrs @ 00031108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_map_page_attrs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_prepare @ 0003110c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::schedule_timeout @ 00031110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void schedule_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_irq_byname @ 00031114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_irq_byname(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00031118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::video_devdata @ 0003111c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void video_devdata(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::syscon_regmap_lookup_by_phandle @ 00031120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void syscon_regmap_lookup_by_phandle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pm_runtime_enable @ 00031124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pm_runtime_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vb2_fop_release @ 00031128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vb2_fop_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::usleep_range @ 0003112c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void usleep_range(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_find @ 00031130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_find(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_property_read_u64 @ 00031134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_property_read_u64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__free_pages @ 00031138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __free_pages(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmem_cache_alloc @ 0003113c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmem_cache_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_info @ 00031140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kvmalloc_node @ 00031148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kvmalloc_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vb2_plane_cookie @ 0003114c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vb2_plane_cookie(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_device_cleanup @ 00031150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_device_cleanup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tasklet_kill @ 00031154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tasklet_kill(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_device_unregister_subdev @ 00031158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_device_unregister_subdev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_subdev_link_validate @ 0003115c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_subdev_link_validate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_wait_entry @ 00031160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_wait_entry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_err @ 0003116c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pinctrl_pm_select_sleep_state @ 00031170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pinctrl_pm_select_sleep_state(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_graph_walk_cleanup @ 0003117c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_graph_walk_cleanup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::tasklet_init @ 00031180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void tasklet_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_resource @ 00031188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 0003118c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::reset_control_deassert @ 00031190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void reset_control_deassert(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_lock @ 00031194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strlcpy @ 00031198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void strlcpy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_cond_resched @ 0003119c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _cond_resched(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__tasklet_schedule @ 000311a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __tasklet_schedule(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_put @ 000311a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vb2_buffer_done @ 000311a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vb2_buffer_done(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vb2_plane_vaddr @ 000311ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vb2_plane_vaddr(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_notifier_register @ 000311b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_notifier_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_fd @ 000311b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_entity_pads_init @ 000311b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_entity_pads_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_graph_walk_next @ 000311bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_graph_walk_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::video_unregister_device @ 000311c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void video_unregister_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_match_node @ 000311c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_match_node(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 000311c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 000311cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmalloc_order @ 000311d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmalloc_order(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_device_is_available @ 000311d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_device_is_available(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_event_subscribe @ 000311d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_event_subscribe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::jiffies_to_msecs @ 000311e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void jiffies_to_msecs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rv1106_sdmmc_get_lock @ 000311e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rv1106_sdmmc_get_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_pipeline_start @ 000311ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_pipeline_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_pipeline_pm_put @ 000311f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_pipeline_pm_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_pipeline_stop @ 000311f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_pipeline_stop(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000311fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_warn @ 00031200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_warn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::wait_for_completion @ 00031204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void wait_for_completion(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 00031208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::PDE_DATA @ 0003120c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void PDE_DATA(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_g_ctrl_int64 @ 00031210 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_g_ctrl_int64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_waitqueue_head @ 00031214 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_waitqueue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_reserved_mem_device_init_by_idx @ 00031218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_reserved_mem_device_init_by_idx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_device_register @ 0003121c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_device_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 00031224 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__platform_driver_register @ 00031228 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __platform_driver_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_notifier_parse_fwnode_endpoints @ 0003122c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_notifier_parse_fwnode_endpoints(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__alloc_pages_nodemask @ 00031230 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __alloc_pages_nodemask(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_get_rate @ 00031238 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_get_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strscpy @ 00031240 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void strscpy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vfree @ 00031244 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_resume @ 00031248 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_resume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 0003124c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_notifier_init @ 00031250 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_notifier_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_copy_from_user @ 00031254 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_copy_from_user(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__video_register_device @ 0003125c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __video_register_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_ioremap_resource @ 00031260 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_ioremap_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_notifier_cleanup @ 00031264 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_notifier_cleanup(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::filp_close @ 0003126c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void filp_close(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_gpiod_get @ 00031270 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_gpiod_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::remove_proc_entry @ 00031274 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void remove_proc_entry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ktime_get @ 00031278 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ktime_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::seq_printf @ 0003127c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void seq_printf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__v4l2_device_register_subdev_nodes @ 00031284 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __v4l2_device_register_subdev_nodes(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_pipeline_pm_get @ 0003128c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_pipeline_pm_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_g_ctrl @ 00031290 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_g_ctrl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_async_notifier_clr_unready_dev @ 00031294 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_async_notifier_clr_unready_dev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_dvbm_ctrl @ 00031298 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_dvbm_ctrl(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_map_resource @ 0003129c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_map_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_ctrl_handler_free @ 000312a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_ctrl_handler_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_disable @ 000312a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_device_unregister @ 000312a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_device_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_graph_walk_start @ 000312b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_graph_walk_start(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regmap_update_bits_base @ 000312b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regmap_update_bits_base(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::media_graph_walk_init @ 000312b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void media_graph_walk_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_unmap_sg_attrs @ 000312c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_unmap_sg_attrs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_parse_phandle @ 000312c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_parse_phandle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_event_queue @ 000312c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_event_queue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_dvbm_unlink @ 000312cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_dvbm_unlink(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kfifo_alloc @ 000312d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kfifo_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kvfree @ 000312dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kvfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::single_open @ 000312e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void single_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_dvbm_link @ 000312e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_dvbm_link(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strchr @ 000312e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strchr(char *__s,int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_disable @ 000312ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vmalloc @ 000312f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_enable @ 000312fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kfifo_out @ 00031300 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kfifo_out(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rv1106_sdmmc_put_lock @ 00031304 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rv1106_sdmmc_put_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_idle @ 00031308 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_idle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::v4l2_event_unsubscribe @ 0003130c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void v4l2_event_unsubscribe(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kernel_write @ 00031314 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kernel_write(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_map_sg_attrs @ 00031318 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_map_sg_attrs(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::disable_irq @ 00031320 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void disable_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_unprepare @ 00031328 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_unprepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


