// rknpu.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== rockchip_monitor_check_rate_volt @ 00010298 size=4 ===== */

undefined4 rockchip_monitor_check_rate_volt(void)

{
  return 0;
}



/* ===== rockchip_monitor_dev_low_temp_adjust @ 0001029c size=4 ===== */

undefined4 rockchip_monitor_dev_low_temp_adjust(void)

{
  return 0;
}



/* ===== rknpu_release @ 000102a0 size=4 ===== */

undefined4 rknpu_release(void)

{
  return 0;
}



/* ===== npu_devfreq_get_cur_freq @ 000102a4 size=12 ===== */

undefined4 npu_devfreq_get_cur_freq(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x15c);
  return 0;
}



/* ===== devfreq_rknpu_ondemand_func @ 000102b0 size=22 ===== */

undefined4 devfreq_rknpu_ondemand_func(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x214) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x200);
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x214) + 0x118);
  }
  *param_2 = uVar1;
  return 0;
}



/* ===== devfreq_rknpu_ondemand_handler @ 000102c6 size=4 ===== */

undefined4 devfreq_rknpu_ondemand_handler(void)

{
  return 0;
}



/* ===== npu_get_static_power @ 000102ca size=4 ===== */

undefined4 npu_get_static_power(void)

{
  return 0;
}



/* ===== pm_runtime_put_sync @ 000102ce size=6 ===== */

void pm_runtime_put_sync(undefined4 param_1)

{
  __pm_runtime_idle(param_1,4);
  return;
}



/* ===== clk_bulk_disable_unprepare @ 000102d4 size=22 ===== */

void clk_bulk_disable_unprepare
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r2;
  
  clk_bulk_disable();
  clk_bulk_unprepare(param_1,param_2,extraout_r2,param_4);
  return;
}



/* ===== rknpu_power_off @ 000102ea size=86 ===== */

undefined4 rknpu_power_off(int param_1)

{
  pm_runtime_put_sync(*(undefined4 *)(param_1 + 0xc));
  if (*(char *)(param_1 + 0x17c) != '\0') {
    ktime_get();
    _cond_resched();
    if (*(int *)(param_1 + 0x178) != 0) {
      pm_runtime_put_sync();
    }
    if (*(int *)(param_1 + 0x174) != 0) {
      pm_runtime_put_sync();
    }
    if (*(int *)(param_1 + 0x170) != 0) {
      pm_runtime_put_sync();
    }
  }
  clk_bulk_disable_unprepare(*(undefined4 *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0xf8));
  if (*(int *)(param_1 + 0x100) != 0) {
    regulator_disable();
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    regulator_disable();
  }
  return 0;
}



/* ===== rknpu_open @ 00010340 size=4 ===== */

void rknpu_open(void)

{
  nonseekable_open();
  return;
}



/* ===== rknpu_runtime_suspend @ 00010344 size=40 ===== */

undefined4
rknpu_runtime_suspend(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar1 = *(int *)(iVar2 + 0x138);
  if ((iVar1 != 0) && (iVar1 = clk_set_rate(iVar1,DAT_0001036c,param_3,param_4,param_4), iVar1 != 0)
     ) {
    _dev_err(param_1,DAT_00010370);
  }
  *(undefined4 *)(iVar2 + 0x154) = 0xffffffff;
  return 0;
}



/* ===== rknpu_devfreq_remove @ 00010374 size=32 ===== */

undefined4 rknpu_devfreq_remove(int param_1)

{
  if (*(int *)(param_1 + 0x114) != 0) {
    devfreq_unregister_opp_notifier(*(undefined4 *)(param_1 + 0xc));
    dev_pm_opp_of_remove_table(*(undefined4 *)(param_1 + 0xc));
    devfreq_remove_governor(DAT_00010394);
  }
  return 0;
}



/* ===== rknpu_remove @ 00010398 size=160 ===== */

undefined4 rknpu_remove(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x50);
  cancel_delayed_work_sync(iVar2 + 0x188);
  destroy_workqueue(*(undefined4 *)(iVar2 + 0x1b4));
  rknpu_debugger_remove(iVar2);
  hrtimer_cancel(iVar2 + 0x1d0);
  for (iVar1 = 0; iVar1 < *(int *)(*(int *)(iVar2 + 0xd0) + 0x30); iVar1 = iVar1 + 1) {
  }
  misc_deregister(iVar2 + 0x10);
  rknpu_devfreq_remove(iVar2);
  mutex_lock(iVar2 + 0x40);
  if (0 < *(int *)(iVar2 + 0x180)) {
    rknpu_power_off(iVar2);
  }
  mutex_unlock(iVar2 + 0x40);
  if (*(char *)(iVar2 + 0x17c) != '\0') {
    if (*(int *)(iVar2 + 0x170) != 0) {
      dev_pm_domain_detach(*(int *)(iVar2 + 0x170),1);
    }
    if (*(int *)(iVar2 + 0x174) != 0) {
      dev_pm_domain_detach(*(int *)(iVar2 + 0x174),1);
    }
    if (*(int *)(iVar2 + 0x178) != 0) {
      dev_pm_domain_detach(*(int *)(iVar2 + 0x178),1);
    }
  }
  __pm_runtime_disable(param_1 + 0x10,1);
  return 0;
}



/* ===== rk3588_npu_set_read_margin @ 00010438 size=106 ===== */

int rk3588_npu_set_read_margin(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint local_24;
  int iStack_20;
  
  local_24 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    if (*(int *)(param_2 + 0xc) == 0) {
      return 0;
    }
    if (*(int *)(param_2 + 0x38) == param_3) {
      return 0;
    }
    if (param_3 == -1) {
      return 0;
    }
    iVar2 = 0;
    iStack_20 = param_3;
    do {
      iVar1 = regmap_read(*(undefined4 *)(param_2 + 0x10),iVar2,&local_24);
      if (iVar1 < 0) {
        _dev_err(param_1,DAT_000104a4,iVar2);
        return iVar1;
      }
      iVar1 = iVar2 + 4;
      local_24 = local_24 & 0xffffffe3;
      regmap_write(*(undefined4 *)(param_2 + 0x10),iVar2,local_24 | param_3 << 2);
      iVar2 = iVar1;
    } while (iVar1 != 0xc);
    *(int *)(param_2 + 0x38) = param_3;
  }
  return 0;
}



/* ===== npu_devfreq_target @ 000104a8 size=104 ===== */

uint npu_devfreq_target(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x40);
  if (*(char *)(DAT_00010510 + 0x30) == '\0') {
    uVar1 = 0xffffffea;
  }
  else {
    uVar1 = devfreq_recommended_opp();
    if (uVar1 < 0xfffff001) {
      uVar2 = dev_pm_opp_get_voltage();
      dev_pm_opp_put(uVar1);
      uVar1 = dev_pm_opp_set_rate(param_1,*param_2);
      if (uVar1 == 0) {
        uVar3 = *param_2;
        *(undefined4 *)(iVar4 + 0x15c) = uVar3;
        if (*(int *)(iVar4 + 0x114) != 0) {
          *(undefined4 *)(*(int *)(iVar4 + 0x114) + 0x20c) = uVar3;
        }
        *(undefined4 *)(iVar4 + 0x160) = uVar2;
        _dev_info(param_1,DAT_00010514,*(undefined4 *)(iVar4 + 0x15c),uVar2);
      }
    }
  }
  return uVar1;
}



/* ===== clk_bulk_prepare_enable @ 00010518 size=38 ===== */

int clk_bulk_prepare_enable(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = clk_bulk_prepare();
  if ((iVar1 == 0) && (iVar1 = clk_bulk_enable(param_1,param_2), iVar1 != 0)) {
    clk_bulk_unprepare(param_1,param_2);
  }
  return iVar1;
}



/* ===== rknpu_runtime_resume @ 0001053e size=106 ===== */

int rknpu_runtime_resume(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x40);
  iVar1 = 0;
  if ((*(int *)(iVar4 + 0x15c) != 0) && (iVar1 = 0, *(int *)(iVar4 + 0x160) != 0)) {
    iVar1 = clk_bulk_prepare_enable(*(undefined4 *)(iVar4 + 0x14c),*(undefined4 *)(iVar4 + 0x134));
    if (iVar1 == 0) {
      if ((*(int *)(iVar4 + 0x124) != 0) &&
         (pcVar3 = *(code **)(*(int *)(iVar4 + 0x124) + 8), pcVar3 != (code *)0x0)) {
        (*pcVar3)(param_1,iVar4 + 0x11c,*(undefined4 *)(iVar4 + 0x158));
      }
      if ((*(int *)(iVar4 + 0x138) != 0) &&
         (iVar2 = clk_set_rate(*(int *)(iVar4 + 0x138),*(undefined4 *)(iVar4 + 0x15c)), iVar2 != 0))
      {
        _dev_err(param_1,DAT_000105ac);
      }
      clk_bulk_disable_unprepare(*(undefined4 *)(iVar4 + 0x14c),*(undefined4 *)(iVar4 + 0x134));
    }
    else {
      _dev_err(param_1,DAT_000105a8);
    }
  }
  return iVar1;
}



/* ===== npu_opp_helper @ 000105b0 size=474 ===== */

int npu_opp_helper(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  undefined4 local_2c [2];
  
  puVar7 = (undefined4 *)param_1[1];
  uVar11 = param_1[7];
  uVar16 = *param_1;
  puVar14 = (undefined4 *)param_1[3];
  iVar13 = *(int *)(uVar11 + 0x40);
  uVar4 = *(undefined4 *)param_1[4];
  iVar15 = iVar13 + 0x11c;
  uVar8 = ((undefined4 *)param_1[4])[1];
  uVar9 = param_1[6];
  uVar10 = param_1[2];
  local_2c[0] = 0xffffffff;
  if ((*(int *)(uVar11 + 0xe8) == 0) ||
     (bVar6 = *(byte *)(uVar11 + 0xdc) & 7, (*(byte *)(uVar11 + 0xdc) & 7) != 0)) {
    bVar12 = true;
    bVar6 = 1;
  }
  else {
    bVar12 = *(int *)(iVar13 + 0x138) == 0;
  }
  iVar1 = clk_bulk_prepare_enable(*(undefined4 *)(iVar13 + 0x14c),*(undefined4 *)(iVar13 + 0x134));
  if (iVar1 < 0) {
    _dev_err(uVar11,DAT_0001078c);
    return iVar1;
  }
  rockchip_get_read_margin(uVar11,iVar15,*puVar14,local_2c);
  if (uVar10 < uVar16) {
    rockchip_set_intermediate_rate(uVar11,iVar15,uVar9,uVar16,uVar10,0,bVar12);
    rockchip_set_read_margin(uVar11,iVar15,local_2c[0],bVar6);
    if ((bVar12 == false) || (iVar1 = clk_set_rate(uVar9,uVar10), iVar1 == 0)) {
      iVar1 = regulator_set_voltage(uVar4,*puVar14,0x7fffffff);
      if (iVar1 == 0) {
        iVar1 = regulator_set_voltage(uVar8,puVar14[4],0x7fffffff);
        if (iVar1 == 0) goto LAB_0001077a;
        uVar5 = puVar14[4];
        uVar3 = DAT_00010790;
      }
      else {
        uVar5 = *puVar14;
        uVar3 = DAT_00010794;
      }
      _dev_err(uVar11,uVar3,uVar5);
      if ((bVar12 != false) && (iVar2 = clk_set_rate(uVar9,uVar16), iVar2 != 0)) {
        _dev_err(uVar11,DAT_0001079c,uVar16);
      }
    }
    else {
LAB_000106ca:
      iVar1 = -0x16;
      _dev_err(uVar11,DAT_00010798,0xffffffea);
    }
    rockchip_get_read_margin(uVar11,iVar15,*puVar7,local_2c);
    rockchip_set_read_margin(uVar11,iVar15,*(undefined4 *)(iVar13 + 0x154),bVar6);
  }
  else {
    rockchip_set_intermediate_rate(uVar11,iVar15,uVar9,uVar16,uVar10,1,bVar12);
    iVar1 = regulator_set_voltage(uVar8,puVar14[4],0x7fffffff);
    if (iVar1 == 0) {
      iVar1 = regulator_set_voltage(uVar4,*puVar14,0x7fffffff);
      if (iVar1 == 0) {
        rockchip_set_read_margin(uVar11,iVar15,local_2c[0],bVar6);
        if ((bVar12 == false) || (iVar1 = clk_set_rate(uVar9,uVar10), iVar1 == 0)) {
LAB_0001077a:
          clk_bulk_disable_unprepare
                    (*(undefined4 *)(iVar13 + 0x14c),*(undefined4 *)(iVar13 + 0x134));
          return 0;
        }
        goto LAB_000106ca;
      }
      uVar5 = *puVar14;
      uVar3 = DAT_00010794;
    }
    else {
      uVar5 = puVar14[4];
      uVar3 = DAT_00010790;
    }
    _dev_err(uVar11,uVar3,uVar5);
  }
  regulator_set_voltage(uVar8,puVar7[4],0x7fffffff);
  regulator_set_voltage(uVar4,*puVar7,0x7fffffff);
  clk_bulk_disable_unprepare(*(undefined4 *)(iVar13 + 0x14c),*(undefined4 *)(iVar13 + 0x134));
  return iVar1;
}



/* ===== rk3588_npu_get_soc_info @ 000107a0 size=108 ===== */

int rk3588_npu_get_soc_info(undefined4 param_1,uint param_2,int *param_3)

{
  int iVar1;
  undefined4 uStack_14;
  
  uStack_14 = param_2 & 0xffffff;
  if (param_3 == (int *)0x0) {
    return 0;
  }
  iVar1 = of_property_match_string(param_2,DAT_00010810,DAT_0001080c,0,param_1);
  if (iVar1 < 0) {
LAB_000107fe:
    if (-1 < *param_3) goto LAB_000107e8;
    iVar1 = 0;
  }
  else {
    iVar1 = rockchip_nvmem_cell_read_u8(param_2,DAT_0001080c,(int)&uStack_14 + 3);
    if (iVar1 != 0) {
      _dev_err(param_1,DAT_00010814);
      return iVar1;
    }
    if (uStack_14._3_1_ == '\r') {
      iVar1 = 1;
    }
    else {
      if (uStack_14._3_1_ != '\n') goto LAB_000107fe;
      iVar1 = 2;
    }
  }
  *param_3 = iVar1;
LAB_000107e8:
  _dev_info(param_1,DAT_00010818,*param_3);
  return 0;
}



/* ===== rk3588_npu_set_soc_info @ 0001081c size=78 ===== */

uint rk3588_npu_set_soc_info
               (int param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int local_18;
  int local_14;
  
  if ((-1 < (int)param_5) &&
     (local_18 = param_1, local_14 = param_2, iVar1 = of_find_property(param_2,DAT_0001086c,0),
     iVar1 != 0)) {
    local_18 = 1 << (param_3 & ~((int)param_3 >> 0x1f) & 0xff);
    local_14 = 1 << (param_5 & 0xff);
    uVar2 = dev_pm_opp_set_supported_hw(param_1,&local_18,2);
    if (0xfffff000 < uVar2) {
      _dev_err(param_1,DAT_00010870);
      return uVar2;
    }
  }
  return 0;
}



/* ===== hrtimer_handler @ 00010874 size=232 ===== */

undefined4 hrtimer_handler(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  longlong lVar14;
  undefined8 uVar15;
  
  lVar14 = ktime_get();
  piVar7 = (int *)(param_1 + -0x168);
  iVar8 = 0;
  while( true ) {
    if (*(int *)(*(int *)(param_1 + -0x100) + 0x30) <= iVar8) break;
    disableIRQinterrupts();
    iVar11 = *piVar7;
    if (iVar11 != 0) {
      uVar3 = lVar14 - *(longlong *)(iVar11 + 0x80);
      uVar2 = uVar3;
      if ((longlong)uVar3 < 0) {
        uVar2 = CONCAT44(-(int)(uVar3 >> 0x20) - (uint)((int)uVar3 != 0),-(int)uVar3);
      }
      uVar4 = (uint)(uVar2 >> 0x20);
      lVar1 = (ulonglong)DAT_00010960 * (uVar2 & 0xffffffff);
      uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
      bVar13 = CARRY4((uint)lVar1,DAT_00010960);
      uVar2 = (ulonglong)DAT_00010964 * (uVar2 & 0xffffffff) +
              (ulonglong)
              CONCAT14(CARRY4(uVar6,DAT_00010964) || CARRY4(uVar6 + DAT_00010964,(uint)bVar13),
                       uVar6 + DAT_00010964 + bVar13);
      uVar6 = (uint)(uVar2 >> 0x20);
      uVar12 = (uint)((ulonglong)DAT_00010960 * (ulonglong)uVar4 + (uVar2 & 0xffffffff) >> 0x20);
      lVar1 = (ulonglong)DAT_00010964 * (ulonglong)uVar4 +
              (ulonglong)CONCAT14(CARRY4(uVar12,uVar6),uVar12 + uVar6);
      uVar4 = (uint)lVar1 >> 9 | (int)((ulonglong)lVar1 >> 0x20) << 0x17;
      if ((longlong)uVar3 < 0) {
        uVar4 = -uVar4;
      }
      piVar7[4] = uVar4 + piVar7[4];
      uVar15 = ktime_get();
      *(undefined8 *)(iVar11 + 0x80) = uVar15;
    }
    piVar7[5] = piVar7[4];
    piVar7[4] = 0;
    iVar8 = iVar8 + 1;
    piVar7 = piVar7 + 10;
  }
  uVar9 = *(undefined4 *)(param_1 + 0x30);
  uVar10 = *(undefined4 *)(param_1 + 0x34);
  uVar15 = (**(code **)(*(int *)(param_1 + 0x24) + 0x1c))();
  uVar5 = (undefined4)((ulonglong)uVar15 >> 0x20);
  hrtimer_forward(param_1,uVar5,(int)uVar15,uVar5,uVar9,uVar10);
  return 1;
}



/* ===== pm_runtime_resume_and_get @ 00010968 size=62 ===== */

int pm_runtime_resume_and_get(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = __pm_runtime_resume(param_1,4,param_3,param_4,param_4);
  iVar3 = 0;
  if (iVar2 < 0) {
    piVar4 = (int *)(param_1 + 0xd4);
    HintPreloadData(piVar4);
    do {
      ExclusiveAccess(piVar4);
      if (*piVar4 == 0) {
        return iVar2;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = *piVar4 + -1;
    iVar3 = iVar2;
  }
  return iVar3;
}



/* ===== rknpu_power_on @ 000109a6 size=156 ===== */

int rknpu_power_on(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  if (((((*(int *)(param_1 + 0x100) != 0) &&
        (iVar1 = regulator_enable(), uVar2 = DAT_00010a44, iVar1 != 0)) ||
       ((*(int *)(param_1 + 0x104) != 0 &&
        (iVar1 = regulator_enable(), uVar2 = DAT_00010a48, iVar1 != 0)))) ||
      (iVar1 = clk_bulk_prepare_enable
                         (*(undefined4 *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0xf8)),
      uVar2 = DAT_00010a4c, iVar1 != 0)) ||
     (((*(char *)(param_1 + 0x17c) != '\0' &&
       (((*(int *)(param_1 + 0x170) != 0 &&
         (iVar1 = pm_runtime_resume_and_get(), uVar2 = DAT_00010a50, iVar1 < 0)) ||
        (((*(int *)(param_1 + 0x174) != 0 &&
          (iVar1 = pm_runtime_resume_and_get(), uVar2 = DAT_00010a54, iVar1 < 0)) ||
         ((*(int *)(param_1 + 0x178) != 0 &&
          (iVar1 = pm_runtime_resume_and_get(), uVar2 = DAT_00010a58, iVar1 < 0)))))))) ||
      (iVar1 = __pm_runtime_resume(uVar3,4), uVar2 = DAT_00010a5c, iVar1 < 0)))) {
    _dev_err(uVar3,uVar2,iVar1);
  }
  return iVar1;
}



/* ===== rockchip_monitor_dev_high_temp_adjust @ 00010a60 size=4 ===== */

undefined4 rockchip_monitor_dev_high_temp_adjust(void)

{
  return 0;
}



/* ===== npu_devfreq_get_dev_status @ 00010a64 size=4 ===== */

undefined4 npu_devfreq_get_dev_status(void)

{
  return 0;
}



/* ===== rknpu_probe @ 00010a68 size=1536 ===== */

uint rknpu_probe(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 extraout_r1;
  undefined4 uVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar11 = param_1 + 0x10;
  uVar10 = DAT_00010d78;
  if ((*(int *)(param_1 + 0x174) == 0) ||
     (iVar1 = of_match_device(DAT_00010d7c,iVar11), uVar10 = DAT_00010d80, iVar1 == 0)) {
LAB_00010a7c:
    _dev_err(iVar11,uVar10);
    return 0xffffffed;
  }
  iVar1 = devm_kmalloc(iVar11,0x220,0xdc0);
  uVar10 = DAT_00010d84;
  if (iVar1 == 0) {
LAB_00010ab0:
    _dev_err(iVar11,uVar10);
    return 0xfffffff4;
  }
  puVar2 = (undefined4 *)of_device_get_match_data(iVar11);
  if (puVar2 == (undefined4 *)0x0) {
    return 0xffffffea;
  }
  *(undefined4 **)(iVar1 + 0xd0) = puVar2;
  *(int *)(iVar1 + 0xc) = iVar11;
  iVar3 = of_parse_phandle(*(undefined4 *)(param_1 + 0x174),DAT_00010d88,0);
  uVar10 = DAT_00010d8c;
  if ((iVar3 == 0) || (iVar3 = of_device_is_available(), uVar10 = DAT_00010d94, iVar3 == 0)) {
    _dev_info(iVar11,uVar10);
    *(undefined1 *)(iVar1 + 0xdc) = 0;
    iVar3 = of_reserved_mem_device_init_by_idx(iVar11,*(undefined4 *)(param_1 + 0x174),0);
    if (iVar3 == 0) {
      _dev_info(iVar11,DAT_00010d90);
    }
  }
  else {
    _dev_info(iVar11,DAT_00010d98);
    *(undefined1 *)(iVar1 + 0xdc) = 1;
  }
  uVar10 = DAT_00010d9c[1];
  *(undefined4 *)(iVar1 + 0x164) = *DAT_00010d9c;
  *(undefined4 *)(iVar1 + 0x168) = uVar10;
  rknpu_reset_get(iVar1);
  iVar3 = devm_clk_bulk_get_all(iVar11,iVar1 + 0xf8);
  *(int *)(iVar1 + 0xfc) = iVar3;
  uVar10 = DAT_00010da0;
  if (iVar3 < 1) goto LAB_00010a7c;
  pcVar4 = (char *)__clk_get_name(*(undefined4 *)(*(int *)(iVar1 + 0xf8) + 4));
  pcVar4 = strstr(pcVar4,DAT_00010da4);
  if (pcVar4 != (char *)0x0) {
    *(undefined4 *)(iVar1 + 0x138) = *(undefined4 *)(*(int *)(iVar1 + 0xf8) + 4);
  }
  uVar5 = devm_regulator_get_optional(iVar11,DAT_00010da8);
  *(uint *)(iVar1 + 0x100) = uVar5;
  if (0xfffff000 < uVar5) {
    uVar10 = DAT_00010dac;
    uVar7 = uVar5;
    if (uVar5 != 0xffffffed) goto LAB_00010b82;
    *(undefined4 *)(iVar1 + 0x100) = 0;
  }
  uVar5 = devm_regulator_get_optional(iVar11,DAT_00010db0);
  *(uint *)(iVar1 + 0x104) = uVar5;
  if (0xfffff000 < uVar5) {
    uVar10 = DAT_00010db4;
    uVar7 = uVar5;
    if (uVar5 != 0xffffffed) goto LAB_00010b82;
    *(undefined4 *)(iVar1 + 0x104) = 0;
  }
  puVar12 = (uint *)(iVar1 + -4);
  __mutex_init(iVar1 + 0x40,DAT_00010dbc,DAT_00010db8);
  __mutex_init(iVar1 + 0x4c,DAT_00010dc0,DAT_00010db8);
  uVar10 = DAT_00010dec;
  iVar13 = iVar1 + 0x58;
  for (iVar3 = 0; uVar9 = DAT_00010db8, iVar3 < (int)puVar2[0xc]; iVar3 = iVar3 + 1) {
    *(int *)iVar13 = iVar13;
    *(int *)(iVar13 + 4) = iVar13;
    __init_waitqueue_head(iVar13 + 8,uVar10,uVar9);
    *(undefined4 *)(iVar13 + 0x18) = 0;
    *(undefined4 *)(iVar13 + 0x1c) = 0;
    piVar6 = (int *)platform_get_resource(param_1,0x200,iVar3);
    if (piVar6 == (int *)0x0) {
      _dev_err(iVar11,DAT_00010dd0);
      return 0xfffffffa;
    }
    uVar5 = devm_ioremap_resource(iVar11,piVar6);
    puVar12[1] = uVar5;
    if (uVar5 == 0xfffffff0) {
      uVar5 = devm_ioremap(iVar11,*piVar6,(piVar6[1] + 1) - *piVar6);
      puVar12[1] = uVar5;
    }
    puVar12 = puVar12 + 1;
    iVar13 = iVar13 + 0x28;
    if (0xfffff000 < *puVar12) {
      _dev_err(iVar11,DAT_00010dd4);
      return *(uint *)(iVar1 + iVar3 * 4);
    }
  }
  if (puVar2[1] != 0) {
    uVar5 = devm_ioremap(iVar11,*puVar2);
    *(uint *)(iVar1 + 0xd4) = uVar5;
    if (0xfffff000 < uVar5) {
      _dev_err(*(undefined4 *)(iVar1 + 0xc),DAT_00010dc4);
      *(undefined4 *)(iVar1 + 0xd4) = 0;
    }
  }
  if (*(int *)(iVar1 + 0x164) == 0) {
    iVar13 = *(int *)(iVar1 + 0xd0);
    iVar3 = platform_get_resource_byname(param_1,0x400,**(undefined4 **)(iVar13 + 0x28));
    if (iVar3 == 0) {
      uVar5 = platform_get_irq(param_1,0);
      if ((int)uVar5 < 0) {
        _dev_err(iVar11,DAT_00010de0);
        return uVar5;
      }
      iVar3 = *(int *)(param_1 + 0x3c);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 0x10);
      }
      uVar5 = devm_request_threaded_irq(iVar11,uVar5,DAT_00010de4,0,0x80,iVar3,iVar1);
      uVar10 = DAT_00010de8;
      uVar7 = uVar5;
      if ((int)uVar5 < 0) goto LAB_00010b82;
    }
    else {
      for (iVar3 = 0; iVar3 < *(int *)(iVar13 + 0x30); iVar3 = iVar3 + 1) {
        iVar14 = iVar3 * 8;
        uVar7 = platform_get_irq_byname
                          (param_1,*(undefined4 *)(*(int *)(iVar13 + 0x28) + iVar3 * 8));
        if ((int)uVar7 < 0) {
          uVar5 = *(uint *)(*(int *)(iVar13 + 0x28) + iVar14);
          uVar10 = DAT_00010dd8;
          goto LAB_00010b82;
        }
        iVar8 = *(int *)(param_1 + 0x3c);
        if (iVar8 == 0) {
          iVar8 = *(int *)(param_1 + 0x10);
        }
        uVar5 = devm_request_threaded_irq
                          (iVar11,uVar7,*(undefined4 *)(*(int *)(iVar13 + 0x28) + iVar14 + 4),0,0x80
                           ,iVar8,iVar1);
        if ((int)uVar5 < 0) {
          _dev_err(iVar11,DAT_00010ddc,*(undefined4 *)(*(int *)(iVar13 + 0x28) + iVar14),uVar5);
          return uVar5;
        }
      }
    }
  }
  else {
    _dev_warn(iVar11,DAT_000110f0);
  }
  *(undefined4 *)(iVar1 + 0x10) = 0xff;
  *(undefined4 *)(iVar1 + 0x14) = DAT_00010da8;
  *(undefined4 *)(iVar1 + 0x18) = DAT_00010dc8;
  uVar5 = misc_register(iVar1 + 0x10);
  uVar10 = DAT_00010dcc;
  uVar7 = uVar5;
  if (uVar5 != 0) {
LAB_00010b82:
    _dev_err(iVar11,uVar10,uVar5);
    return uVar7;
  }
  iVar3 = rk_dma_heap_find(DAT_000110f4);
  *(int *)(iVar1 + 0x38) = iVar3;
  uVar10 = DAT_000110f8;
  if (iVar3 == 0) goto LAB_00010ab0;
  rk_dma_heap_set_dev(iVar11);
  _dev_info(iVar11,DAT_00011100,DAT_00011104,0,8,5,DAT_000110fc);
  *(int *)(param_1 + 0x50) = iVar1;
  pm_runtime_enable(iVar11);
  iVar3 = of_count_phandle_with_args(*(undefined4 *)(param_1 + 0x174),DAT_0001110c,DAT_00011108);
  if (1 < iVar3) {
    uVar5 = dev_pm_domain_attach_by_name(iVar11,DAT_00011110);
    uVar10 = DAT_00011114;
    if (uVar5 < 0xfffff001) {
      *(uint *)(iVar1 + 0x170) = uVar5;
    }
    uVar5 = dev_pm_domain_attach_by_name(iVar11,uVar10);
    uVar10 = DAT_00011118;
    if (uVar5 < 0xfffff001) {
      *(uint *)(iVar1 + 0x174) = uVar5;
    }
    uVar5 = dev_pm_domain_attach_by_name(iVar11,uVar10);
    *(undefined1 *)(iVar1 + 0x17c) = 1;
    if (uVar5 < 0xfffff001) {
      *(uint *)(iVar1 + 0x178) = uVar5;
    }
  }
  uVar5 = rknpu_power_on(iVar1);
  if (uVar5 != 0) goto LAB_00010f32;
  iVar13 = *(int *)(iVar1 + 0xc);
  local_30 = *DAT_0001111c;
  uStack_2c = DAT_0001111c[1];
  iVar3 = of_find_property(*(undefined4 *)(iVar13 + 0x164),DAT_00011120,0);
  if ((iVar3 == 0) ||
     (iVar3 = of_find_property(*(undefined4 *)(iVar13 + 0x164),DAT_00011124,0), iVar3 == 0)) {
    uVar5 = dev_pm_opp_set_regulators(iVar13,&local_30,1);
    if (uVar5 < 0xfffff001) {
LAB_00010ed6:
      iVar14 = iVar1 + 0x11c;
      rockchip_get_opp_data(DAT_0001112c,iVar14);
      iVar3 = rockchip_init_opp_table(iVar13,iVar14,DAT_00011134,DAT_00011130);
      uVar10 = DAT_00011138;
      if (iVar3 == 0) {
        uVar10 = clk_get_rate(*(undefined4 *)(*(int *)(iVar1 + 0xf8) + 4));
        *(undefined4 *)(iVar1 + 0x15c) = uVar10;
        uVar5 = devfreq_recommended_opp(iVar13,iVar1 + 0x15c,0);
        iVar3 = DAT_00011174;
        if (uVar5 < 0xfffff001) {
          dev_pm_opp_put();
          *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(iVar1 + 0x15c);
          iVar8 = devfreq_add_governor(iVar3);
          if (iVar8 == 0) {
            uVar5 = devm_devfreq_add_device(iVar13,iVar3 + 0x4c,DAT_00011150,iVar1);
            *(uint *)(iVar1 + 0x114) = uVar5;
            if (uVar5 < 0xfffff001) {
              devm_devfreq_register_opp_notifier(iVar13,uVar5);
              iVar8 = *(int *)(iVar1 + 0x114);
              *(int *)(iVar3 + 0x48) = iVar14;
              *(undefined4 *)(iVar8 + 0x20c) = *(undefined4 *)(iVar3 + 0x4c);
              iVar14 = *(int *)(iVar1 + 0x114);
              *(undefined1 *)(iVar3 + 0x30) = 1;
              *(undefined4 *)(iVar14 + 0x204) = 1;
              *(undefined4 *)(*(int *)(iVar1 + 0x114) + 0x208) = 1;
              *(undefined4 *)(iVar1 + 0x108) = 0;
              *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar1 + 0x114);
              uVar10 = clk_get_rate(*(undefined4 *)(*(int *)(iVar1 + 0xf8) + 4));
              *(undefined4 *)(iVar1 + 0x15c) = uVar10;
              uVar9 = regulator_get_voltage(*(undefined4 *)(iVar1 + 0x100));
              uVar10 = DAT_00011158;
              *(undefined4 *)(iVar1 + 0x160) = uVar9;
              of_property_read_variable_u32_array
                        (*(undefined4 *)(iVar13 + 0x164),uVar10,iVar3 + 0x7c,1,0);
              *(undefined4 *)(iVar1 + 0x10c) = 0;
              _dev_err(iVar13,DAT_0001115c);
              uVar10 = DAT_00011160;
              if (*(int *)(iVar3 + 0x7c) != 0) {
                uVar5 = of_devfreq_cooling_register_power
                                  (*(undefined4 *)(iVar13 + 0x164),*(undefined4 *)(iVar1 + 0x114),
                                   iVar3 + 0x70);
                *(uint *)(iVar1 + 0x110) = uVar5;
                uVar10 = DAT_00011164;
                if ((uVar5 != 0) && (uVar5 < 0xfffff001)) goto LAB_00010f02;
              }
              goto LAB_00010ef4;
            }
            _dev_err(iVar13,DAT_00011154);
            devfreq_remove_governor(iVar3);
          }
          else {
            _dev_err(iVar13,DAT_0001114c);
          }
        }
        dev_pm_opp_of_remove_table(iVar13);
        *(undefined4 *)(iVar1 + 0x114) = 0;
      }
      else {
LAB_00010ef4:
        _dev_err(iVar13,uVar10);
      }
    }
  }
  else {
    uVar5 = dev_pm_opp_set_regulators(iVar13,&local_30,2);
    if (uVar5 < 0xfffff001) {
      uVar7 = dev_pm_opp_register_set_opp_helper(iVar13,DAT_00011128);
      if (uVar7 < 0xfffff001) goto LAB_00010ed6;
      dev_pm_opp_put_regulators(uVar5);
    }
  }
LAB_00010f02:
  *(undefined4 *)(iVar1 + 0x21c) = 3000;
  iVar3 = alloc_workqueue(DAT_00011144,DAT_0001113c,1,DAT_00011140);
  *(int *)(iVar1 + 0x1b4) = iVar3;
  if (iVar3 != 0) {
    *(undefined4 *)(iVar1 + 0x188) = 0xffffffe0;
    *(int *)(iVar1 + 0x18c) = iVar1 + 0x18c;
    *(int *)(iVar1 + 400) = iVar1 + 0x18c;
    uVar10 = DAT_0001116c;
    *(undefined4 *)(iVar1 + 0x194) = DAT_00011168;
    init_timer_key(iVar1 + 0x198,uVar10,0x280000,0,0);
    rknpu_power_off(iVar1);
    *(undefined4 *)(iVar1 + 0x180) = 0;
    *(undefined4 *)(iVar1 + 0x184) = 0;
    rknpu_debugger_init(iVar1);
    uVar10 = DAT_000110ec;
    *(undefined4 *)(iVar1 + 0x200) = DAT_000110e8;
    *(undefined4 *)(iVar1 + 0x204) = uVar10;
    hrtimer_init(iVar1 + 0x1d0,1);
    *(undefined4 *)(iVar1 + 0x1f0) = DAT_00011170;
    hrtimer_start_range_ns
              (iVar1 + 0x1d0,extraout_r1,*(undefined4 *)(iVar1 + 0x200),
               *(undefined4 *)(iVar1 + 0x204),0,0,1);
    return 0;
  }
  _dev_err(iVar11,DAT_00011148);
  rknpu_devfreq_remove(iVar1);
  uVar5 = 0xfffffff4;
LAB_00010f32:
  misc_deregister(iVar1 + 0x10);
  return uVar5;
}



/* ===== rknpu_power_off_delay_work @ 00011178 size=80 ===== */

void rknpu_power_off_delay_work(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  mutex_lock(param_1 + -0x148);
  piVar5 = (int *)(param_1 + -8);
  iVar4 = *(int *)(param_1 + -8);
  do {
    iVar3 = iVar4 + -1;
    if (iVar3 < 0) goto LAB_000111ba;
    HintPreloadData(piVar5);
    do {
      ExclusiveAccess(piVar5);
      iVar2 = *piVar5;
      bVar6 = false;
      if (iVar2 == iVar4) {
        bVar1 = (bool)hasExclusiveAccess(piVar5);
        bVar6 = true;
        if (bVar1) {
          bVar6 = false;
          *piVar5 = iVar3;
        }
      }
    } while (bVar6);
    bVar6 = iVar4 != iVar2;
    iVar4 = iVar2;
  } while (bVar6);
  if (iVar3 == 0) {
    rknpu_power_off(param_1 + -0x188);
  }
LAB_000111ba:
  mutex_unlock(param_1 + -0x148);
  return;
}



/* ===== rknpu_power_get @ 000111c8 size=74 ===== */

undefined4 rknpu_power_get(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  
  cancel_delayed_work(param_1 + 0x188);
  mutex_lock(param_1 + 0x40);
  piVar4 = (int *)(param_1 + 0x180);
  HintPreloadData(piVar4);
  do {
    ExclusiveAccess(piVar4);
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + 1;
  if (iVar3 + 1 == 1) {
    uVar2 = rknpu_power_on(param_1);
  }
  else {
    uVar2 = 0;
  }
  mutex_unlock(param_1 + 0x40);
  return uVar2;
}



/* ===== rknpu_ioctl @ 00011212 size=582 ===== */

/* WARNING: Type propagation algorithm not settling */

undefined4 rknpu_ioctl(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  size_t __n;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  bool bVar14;
  int local_20 [2];
  
  iVar12 = *(int *)(param_1 + 0x80);
  iVar10 = iVar12 + -0x10;
  local_20[0] = param_1;
  local_20[1] = param_2;
  rknpu_power_get(iVar10);
  if (param_2 == DAT_000114b8) {
    uVar11 = rknpu_mem_sync_ioctl(iVar10,param_3);
    goto LAB_0001124c;
  }
  if (DAT_000114b8 <= param_2) {
    if (param_2 == DAT_000114bc) {
      uVar11 = rknpu_mem_create_ioctl(iVar10,param_3);
      goto LAB_0001124c;
    }
    if (param_2 == DAT_000114c0) {
      uVar11 = rknpu_submit_ioctl(iVar10,param_3);
      goto LAB_0001124c;
    }
LAB_00011248:
    uVar11 = 0xffffffea;
    goto LAB_0001124c;
  }
  if (param_2 != DAT_000114b8 - 0x180005) {
    if (param_2 == DAT_000114b8 - 0x100001) {
      uVar11 = rknpu_mem_destroy_ioctl(iVar10,param_3);
      goto LAB_0001124c;
    }
    goto LAB_00011248;
  }
  uVar6 = *(uint *)(((uint)local_20 & 0xffffe000) + 8);
  if (param_3 < 0xfffffff8 && param_3 + 8 <= uVar6) {
    uVar6 = 0;
  }
  __n = 8;
  if ((uVar6 != 0) || (__n = arm_copy_from_user(local_20,param_3), __n != 0)) {
    memset((void *)((8 - __n) + (int)local_20),0,__n);
    uVar2 = DAT_000114c8;
    goto LAB_000112de;
  }
  switch(local_20[0]) {
  case 0:
    uVar11 = rknpu_get_hw_version(iVar10,local_20 + 1);
    break;
  case 1:
    local_20[1] = 0x325;
    goto LAB_00011328;
  case 2:
    local_20[1] = clk_get_rate(*(undefined4 *)(*(int *)(iVar12 + 0xe8) + 4));
    goto LAB_00011328;
  default:
    uVar11 = 0xffffffea;
    break;
  case 4:
    local_20[1] = regulator_get_voltage(*(undefined4 *)(iVar12 + 0xf0));
    goto LAB_00011328;
  case 6:
    uVar11 = rknpu_soft_reset(iVar10);
    break;
  case 7:
    piVar8 = (int *)0x0;
    piVar9 = local_20 + 1;
    piVar5 = (int *)0x0;
    goto LAB_00011344;
  case 8:
    uVar7 = 0;
    uVar4 = 0;
    uVar6 = local_20[1];
    goto LAB_00011352;
  case 9:
    piVar8 = (int *)0x0;
    piVar5 = local_20 + 1;
    piVar9 = (int *)0x0;
    goto LAB_00011344;
  case 10:
    uVar7 = 0;
    uVar6 = 0;
    uVar4 = local_20[1];
    goto LAB_00011352;
  case 0xb:
    piVar9 = (int *)0x0;
    piVar8 = local_20 + 1;
    piVar5 = piVar9;
LAB_00011344:
    uVar11 = rknpu_get_bw_priority(iVar10,piVar9,piVar5,piVar8);
    break;
  case 0xc:
    uVar6 = 0;
    uVar4 = 0;
    uVar7 = local_20[1];
LAB_00011352:
    uVar11 = rknpu_set_bw_priority(iVar10,uVar6,uVar4,uVar7);
    break;
  case 0xd:
    uVar11 = rknpu_clear_rw_amount(iVar10);
    break;
  case 0xe:
    piVar8 = (int *)0x0;
    piVar9 = local_20 + 1;
    piVar5 = (int *)0x0;
    goto LAB_00011388;
  case 0xf:
    piVar8 = (int *)0x0;
    piVar5 = local_20 + 1;
    piVar9 = (int *)0x0;
    goto LAB_00011388;
  case 0x10:
    piVar9 = (int *)0x0;
    piVar8 = local_20 + 1;
    piVar5 = piVar9;
LAB_00011388:
    uVar11 = rknpu_get_rw_amount(iVar10,piVar9,piVar5,piVar8);
    break;
  case 0x11:
    uVar11 = rknpu_get_total_rw_amount(iVar10,local_20 + 1);
    break;
  case 0x12:
    local_20[1] = (int)*(byte *)(iVar12 + 0xcc);
    goto LAB_00011328;
  case 0x13:
    set_user_nice(*(undefined4 *)(((uint)local_20 & 0xffffe000) + 0xc),local_20[1]);
    goto LAB_00011328;
  case 0x16:
    iVar10 = *(int *)(iVar12 + 0x208);
    if (iVar10 != 0) {
      iVar3 = *(int *)(iVar10 + 0x14);
      goto LAB_000113cc;
    }
LAB_000113d2:
    uVar11 = 0;
    local_20[1] = 0;
    break;
  case 0x17:
    iVar10 = *(int *)(iVar12 + 0x208);
    if (iVar10 == 0) goto LAB_000113d2;
    iVar3 = *(int *)(iVar10 + 0x18);
LAB_000113cc:
    local_20[1] = iVar3 * *(int *)(iVar10 + 0x10);
LAB_00011328:
    uVar11 = 0;
  }
  uVar6 = *(uint *)(((uint)local_20 & 0xffffe000) + 8);
  if (param_3 < 0xfffffff8 && param_3 + 8 <= uVar6) {
    uVar6 = 0;
  }
  uVar2 = DAT_000114cc;
  if ((uVar6 != 0) ||
     (iVar10 = arm_copy_to_user(param_3,local_20,8), uVar2 = DAT_000114cc, iVar10 != 0)) {
LAB_000112de:
    printk(uVar2,DAT_000114c4);
    uVar11 = 0xfffffff2;
  }
LAB_0001124c:
  mutex_lock(iVar12 + 0x30);
  if (*(int *)(iVar12 + 0x170) == 1) {
    uVar13 = *(undefined4 *)(iVar12 + 0x1a4);
    uVar2 = __msecs_to_jiffies(*(undefined4 *)(iVar12 + 0x20c));
    queue_delayed_work_on(1,uVar13,iVar12 + 0x178,uVar2);
  }
  else {
    piVar9 = (int *)(iVar12 + 0x170);
    iVar10 = *(int *)(iVar12 + 0x170);
    do {
      if (iVar10 + -1 < 0) break;
      HintPreloadData(piVar9);
      do {
        ExclusiveAccess(piVar9);
        iVar3 = *piVar9;
        bVar14 = false;
        if (iVar3 == iVar10) {
          bVar1 = (bool)hasExclusiveAccess(piVar9);
          bVar14 = true;
          if (bVar1) {
            bVar14 = false;
            *piVar9 = iVar10 + -1;
          }
        }
      } while (bVar14);
      bVar14 = iVar10 != iVar3;
      iVar10 = iVar3;
    } while (bVar14);
  }
  mutex_unlock(iVar12 + 0x30);
  return uVar11;
}



/* ===== rknpu_power_put @ 000114d0 size=86 ===== */

undefined4 rknpu_power_put(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  bool bVar7;
  
  mutex_lock(param_1 + 0x40);
  piVar5 = (int *)(param_1 + 0x180);
  iVar4 = *(int *)(param_1 + 0x180);
  do {
    iVar3 = iVar4 + -1;
    if (iVar3 < 0) goto LAB_000114ea;
    HintPreloadData(piVar5);
    do {
      ExclusiveAccess(piVar5);
      iVar2 = *piVar5;
      bVar7 = false;
      if (iVar2 == iVar4) {
        bVar1 = (bool)hasExclusiveAccess(piVar5);
        bVar7 = true;
        if (bVar1) {
          bVar7 = false;
          *piVar5 = iVar3;
        }
      }
    } while (bVar7);
    bVar7 = iVar4 != iVar2;
    iVar4 = iVar2;
  } while (bVar7);
  if (iVar3 == 0) {
    uVar6 = rknpu_power_off(param_1);
  }
  else {
LAB_000114ea:
    uVar6 = 0;
  }
  mutex_unlock(param_1 + 0x40);
  return uVar6;
}



/* ===== init_module @ 00011526 size=8 ===== */

void init_module(void)

{
  __platform_driver_register(DAT_00011534,DAT_00011530);
  return;
}



/* ===== cleanup_module @ 00011538 size=6 ===== */

void cleanup_module(void)

{
  platform_driver_unregister(DAT_00011540);
  return;
}



/* ===== rknpu_reset_get @ 00011544 size=138 ===== */

uint rknpu_reset_get(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = 0;
  puVar3 = (uint *)(param_1 + 0xe0);
  while( true ) {
    if (*(int *)(*(int *)(param_1 + 0xd0) + 0x34) <= iVar2) {
      return 0;
    }
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    uVar5 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xd0) + 0x2c) + iVar2 * 8);
    uVar1 = __devm_reset_control_get(uVar4,uVar5,0,0,0,1,param_3);
    if (0xfffff000 < uVar1) break;
    *puVar3 = uVar1;
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    uVar5 = *(undefined4 *)(iVar2 * 8 + *(int *)(*(int *)(param_1 + 0xd0) + 0x2c) + 4);
    uVar1 = __devm_reset_control_get(uVar4,uVar5,0,0,0,1,param_3);
    if (0xfffff000 < uVar1) break;
    puVar3[3] = uVar1;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  _dev_err(uVar4,DAT_000115d0,uVar5,uVar1);
  return uVar1;
}



/* ===== rknpu_soft_reset @ 000115d4 size=194 ===== */

uint rknpu_soft_reset(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  if (*(int *)(param_1 + 0x168) == 0) {
    iVar2 = mutex_trylock(param_1 + 0x4c);
    uVar6 = 0;
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x16c) = 1;
      iVar7 = param_1 + 0x60;
      msleep(100);
      for (iVar2 = 0; iVar2 < *(int *)(*(int *)(param_1 + 0xd0) + 0x30); iVar2 = iVar2 + 1) {
        __wake_up(iVar7,3,1,0);
        iVar7 = iVar7 + 0x28;
      }
      printk(DAT_0001169c);
      uVar1 = DAT_000116a8;
      iVar7 = DAT_000116a4;
      uVar6 = 0xffffffea;
      puVar8 = (undefined4 *)(param_1 + 0xe0);
      for (iVar2 = 0; iVar2 < *(int *)(*(int *)(param_1 + 0xd0) + 0x34); iVar2 = iVar2 + 1) {
        uVar3 = rknpu_reset_assert(*puVar8);
        uVar4 = rknpu_reset_assert(puVar8[3]);
        (**(code **)(iVar7 + 4))(uVar1);
        uVar5 = rknpu_reset_deassert(*puVar8);
        uVar6 = rknpu_reset_deassert(puVar8[3]);
        uVar6 = uVar3 | uVar4 | uVar5 | uVar6;
        puVar8 = puVar8 + 1;
      }
      if (uVar6 == 0) {
        *(undefined1 *)(param_1 + 0x16c) = 0;
      }
      else {
        _dev_err(*(undefined4 *)(param_1 + 0xc),DAT_000116a0,uVar6);
      }
      mutex_unlock(param_1 + 0x4c);
    }
  }
  else {
    uVar6 = 0;
    printk(DAT_00011698);
  }
  return uVar6;
}



/* ===== rknn_get_task_number @ 000116ac size=30 ===== */

undefined4 rknn_get_task_number(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x70) != 2) {
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    if (*(int *)(param_1 + 0x70) == 3) {
      uVar1 = *(undefined4 *)(iVar2 + param_2 * 8 + 0x54);
    }
    return uVar1;
  }
  return *(undefined4 *)(iVar2 + param_2 * 8 + 0x44);
}



/* ===== rknpu_job_commit @ 000116ca size=366 ===== */

undefined4 rknpu_job_commit(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  
  piVar6 = (int *)param_1[0xf];
  iVar8 = *(int *)(*param_1 + param_2 * 4);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(iVar8 + 0x10) = 1;
  if (*piVar6 << 0x1f < 0) {
    puVar13 = (uint *)param_1[0xf];
    iVar3 = *param_1;
    uVar4 = *puVar13;
    uVar9 = puVar13[2];
    uVar7 = puVar13[3];
    iVar5 = *(int *)(iVar3 + 0xd0);
    uVar2 = puVar13[6];
    iVar10 = uVar9 + uVar7 + -1;
    iVar11 = *(int *)(iVar3 + param_2 * 4);
    iVar8 = *(int *)(iVar5 + 0x10);
    uVar1 = *(uint *)(iVar5 + 0x14);
    if (uVar2 != 0) {
      if (1 < *(int *)(iVar5 + 0x30)) {
        iVar5 = 0;
        iVar12 = param_2 * 0x10000000 + 0xe;
        do {
          if (param_2 == iVar5) {
            DataSynchronizationBarrier(0xe);
            arm_heavy_mb();
            *(int *)(iVar11 + 0x1004) = iVar12;
            DataSynchronizationBarrier(0xe);
            arm_heavy_mb();
            *(int *)(iVar11 + 0x3004) = iVar12;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(*(int *)(iVar3 + 0xd0) + 0x30));
        iVar3 = param_1[0x1c];
        if ((iVar3 == 1) || (iVar3 == 2)) {
          uVar9 = puVar13[param_2 * 2 + 0x10];
          uVar7 = puVar13[param_2 * 2 + 0x11];
        }
        else {
          if (iVar3 != 3) goto LAB_00011786;
          uVar9 = puVar13[param_2 * 2 + 0x14];
          uVar7 = puVar13[param_2 * 2 + 0x15];
        }
        iVar10 = uVar9 + uVar7 + -1;
      }
LAB_00011786:
      iVar3 = *(int *)(uVar2 + 8);
      iVar5 = uVar9 * 0x28 + iVar3;
      iVar3 = iVar10 * 0x28 + iVar3;
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar11 + 0x10) = *(undefined4 *)(iVar5 + 0x20);
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      iVar8 = __aeabi_uidiv(*(int *)(iVar5 + 0x18) + iVar8 + 3,iVar8);
      *(int *)(iVar11 + 0x14) = iVar8 + -1;
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar11 + 0x20) = *(undefined4 *)(iVar3 + 0xc);
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar11 + 0x24) = *(undefined4 *)(iVar5 + 0xc);
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(uint *)(iVar11 + 0x30) = uVar7 | ((uVar4 & 7) >> 2 | 6) << (uVar1 & 0xff);
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(uint *)(iVar11 + 0x34) = puVar13[10];
      param_1[0x11] = iVar5;
      param_1[0x12] = iVar3;
      param_1[param_2 + 0x13] = *(int *)(iVar3 + 0xc);
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar11 + 8) = 1;
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar11 + 8) = 0;
      return 0;
    }
  }
  return 0xffffffea;
}



/* ===== ktime_divns @ 00011838 size=4 ===== */

void ktime_divns(void)

{
  __ktime_divns();
  return;
}



/* ===== rknpu_job_free @ 0001183c size=76 ===== */

void rknpu_job_free(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 100) != 0) {
    piVar2 = (int *)(*(int *)(param_1 + 100) + 0x24);
    HintPreloadData(piVar2);
    do {
      ExclusiveAccess(piVar2);
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      dma_fence_release();
    }
    else if (iVar3 < 1) {
      refcount_warn_saturate(piVar2,3);
    }
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    kfree(*(undefined4 *)(param_1 + 0x3c));
  }
  kfree(param_1);
  return;
}



/* ===== rknpu_job_cleanup_work @ 00011888 size=4 ===== */

void rknpu_job_cleanup_work(int param_1)

{
  rknpu_job_free(param_1 + -0x1c);
  return;
}



/* ===== rknpu_job_next.part.1 @ 0001188c size=152 ===== */

void rknpu_job_next_part_1(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r2;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  
  disableIRQinterrupts();
  iVar1 = param_1 + param_2 * 0x28;
  if ((*(int *)(iVar1 + 0x68) == 0) && (*(int *)(iVar1 + 0x58) != param_2 * 0x28 + 0x58 + param_1))
  {
    piVar2 = *(int **)(iVar1 + 0x58);
    piVar3 = piVar2 + param_2 * -2 + -1;
    piVar4 = (int *)piVar2[1];
    iVar5 = *piVar2;
    *(int **)(iVar5 + 4) = piVar4;
    *piVar4 = iVar5;
    *piVar2 = (int)piVar2;
    piVar2[1] = (int)piVar2;
    *(undefined1 *)((int)piVar3 + param_2 + 0x2c) = 0;
    *(int **)(iVar1 + 0x68) = piVar3;
    piVar3[0x1d] = piVar3[0x1d] + -1;
    uVar6 = ktime_get();
    *(undefined8 *)(piVar3 + 0x20) = uVar6;
    if (piVar3[0x1d] == 0) {
      if (*(int *)(piVar3[0xf] + 0x38) << 0x1f < 0) {
        iVar1 = rknpu_job_commit(piVar3);
        piVar3[0xe] = iVar1;
      }
      iVar1 = *(int *)(piVar3[0xf] + 0x38) << 0x1e;
      if (iVar1 < 0) {
        iVar1 = rknpu_job_commit(piVar3,1,iVar1,*(int *)(piVar3[0xf] + 0x38),param_4);
        piVar3[0xe] = iVar1;
        iVar1 = extraout_r2;
      }
      iVar5 = *(int *)(piVar3[0xf] + 0x38) << 0x1d;
      if (iVar5 < 0) {
        iVar1 = rknpu_job_commit(piVar3,2,iVar1,iVar5,param_4);
        piVar3[0xe] = iVar1;
      }
    }
  }
  return;
}



/* ===== rknpu_irq_handler.constprop.3 @ 00011924 size=398 ===== */

undefined4 rknpu_irq_handler_constprop_3(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  longlong lVar6;
  
  iVar5 = *(int *)(param_1 + param_2 * 4);
  disableIRQinterrupts();
  iVar2 = param_2 * 0x28 + param_1;
  piVar4 = *(int **)(iVar2 + 0x68);
  if (piVar4 == (int *)0x0) {
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb(param_1,param_2,
                 (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b,
                 iVar2,param_1);
    *(undefined4 *)(iVar5 + 0x24) = DAT_00011ab4;
  }
  else {
    *(undefined1 *)((int)piVar4 + param_2 + 0x2f) = 1;
    uVar1 = *(uint *)(iVar5 + 0x28);
    DataSynchronizationBarrier(0xf);
    uVar3 = 0;
    if ((uVar1 & 3) != 0) {
      uVar3 = 3;
    }
    if ((uVar1 & 0xc) != 0) {
      uVar3 = uVar3 | 0xc;
    }
    if ((uVar1 & 0x30) != 0) {
      uVar3 = uVar3 | 0x30;
    }
    if ((uVar1 & 0xc0) != 0) {
      uVar3 = uVar3 | 0xc0;
    }
    if ((uVar1 & 0x300) != 0) {
      uVar3 = uVar3 | 0x300;
    }
    piVar4[param_2 + 0x16] = uVar1;
    if ((uVar1 & 0xc00) != 0) {
      uVar3 = uVar3 | 0xc00;
    }
    if (piVar4[param_2 + 0x13] != uVar3) {
      DataSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xf);
      printk(DAT_00011ab8,uVar1,*(undefined4 *)(iVar5 + 0x2c),piVar4[param_2 + 0x13],
             *(uint *)(*(int *)(*(int *)(param_1 + 0xd0) + 0x1c) + iVar5) &
             *(uint *)(*(int *)(param_1 + 0xd0) + 0x18),param_2,param_3);
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar5 + 0x24) = DAT_00011ab4;
      return 1;
    }
    DataSynchronizationBarrier(0xe);
    arm_heavy_mb();
    *(undefined4 *)(iVar5 + 0x24) = DAT_00011ab4;
    param_1 = *piVar4;
    lVar6 = ktime_get();
    disableIRQinterrupts();
    iVar5 = param_2 * 0x28 + param_1;
    *(undefined4 *)(iVar5 + 0x68) = 0;
    uVar3 = rknn_get_task_number(piVar4,param_2);
    uVar1 = *(uint *)(iVar5 + 0x70);
    *(uint *)(iVar5 + 0x70) = uVar1 - uVar3;
    *(uint *)(iVar5 + 0x74) =
         (*(int *)(iVar5 + 0x74) - ((int)uVar3 >> 0x1f)) - (uint)(uVar1 < uVar3);
    piVar4[0x1e] = piVar4[0x1e] + -1;
    iVar2 = ktime_divns((int)(lVar6 - *(longlong *)(piVar4 + 0x20)),
                        (int)((ulonglong)(lVar6 - *(longlong *)(piVar4 + 0x20)) >> 0x20),1000,0);
    *(int *)(iVar5 + 0x78) = iVar2 + *(int *)(iVar5 + 0x78);
    if (piVar4[0x1e] == 0) {
      iVar2 = piVar4[0x1c];
      piVar4[0xd] = piVar4[0xd] | 1;
      piVar4[0xe] = 0;
      if (piVar4[0x19] != 0) {
        dma_fence_signal();
      }
      if (piVar4[0xd] << 0x1e < 0) {
        queue_work_on(1,*DAT_00011abc,piVar4 + 7);
      }
      iVar5 = param_1;
      if (iVar2 < 2) {
        iVar5 = param_2 * 0x28 + param_1;
      }
      __wake_up(iVar5 + 0x60,3,1,0);
    }
  }
  if (*(char *)(param_1 + 0x16c) == '\0') {
    rknpu_job_next_part_1(param_1,param_2);
  }
  return 1;
}



/* ===== rknpu_job_schedule @ 00011ac0 size=304 ===== */

void rknpu_job_schedule(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  
  iVar8 = *param_1;
  if ((*(uint *)(param_1[0xf] + 0x38) & 7) == 0) {
    iVar4 = *(int *)(iVar8 + 0x74);
    iVar2 = *(int *)(iVar8 + 0x9c);
    bVar12 = *(uint *)(iVar8 + 0x98) < *(uint *)(iVar8 + 0x70);
    bVar13 = SBORROW4(iVar2,iVar4) != SBORROW4(iVar2 - iVar4,(uint)bVar12);
    bVar12 = (int)((iVar2 - iVar4) - (uint)bVar12) < 0;
    uVar1 = *(uint *)(iVar8 + 0xc0);
    iVar2 = *(int *)(iVar8 + 0xc4);
    uVar9 = (uint)(bVar12 != bVar13);
    iVar11 = uVar9 * 0x28 + iVar8;
    uVar7 = (uint)(bVar12 == bVar13);
    iVar4 = *(int *)(iVar11 + 0x74);
    bVar12 = uVar1 < *(uint *)(iVar11 + 0x70);
    if ((int)((iVar2 - iVar4) - (uint)bVar12) < 0 ==
        (SBORROW4(iVar2,iVar4) != SBORROW4(iVar2 - iVar4,(uint)bVar12))) {
      iVar4 = uVar7 * 0x28 + iVar8;
      iVar11 = *(int *)(iVar4 + 0x74);
      bVar12 = uVar1 < *(uint *)(iVar4 + 0x70);
      uVar1 = uVar9;
      if ((int)((iVar2 - iVar11) - (uint)bVar12) < 0 ==
          (SBORROW4(iVar2,iVar11) != SBORROW4(iVar2 - iVar11,(uint)bVar12))) {
        uVar9 = uVar7;
        uVar7 = 2;
      }
      else {
        uVar9 = 2;
      }
    }
    else {
      uVar1 = 2;
    }
    uVar5 = uVar1;
    if (((*(int *)(uVar1 * 0x28 + iVar8 + 0x68) != 0) &&
        (uVar5 = uVar9, *(int *)(uVar9 * 0x28 + iVar8 + 0x68) != 0)) &&
       (uVar5 = uVar1, *(int *)(uVar7 * 0x28 + iVar8 + 0x68) == 0)) {
      uVar5 = uVar7;
    }
    *(int *)(param_1[0xf] + 0x38) = (int)*(char *)(DAT_00011bf0 + uVar5);
    param_1[0x1c] = 1;
    param_1[0x1d] = 1;
    param_1[0x1e] = 1;
  }
  disableIRQinterrupts();
  iVar2 = iVar8 + 0x58;
  piVar10 = param_1;
  for (uVar9 = 0; iVar4 = DAT_00011bf0, (int)uVar9 < *(int *)(*(int *)(iVar8 + 0xd0) + 0x30);
      uVar9 = uVar9 + 1) {
    if (uVar9 < 3) {
      uVar7 = (uint)*(char *)(uVar9 + DAT_00011bf0);
    }
    else {
      uVar7 = 0;
    }
    if ((uVar7 & *(uint *)(param_1[0xf] + 0x38)) != 0) {
      piVar3 = *(int **)(iVar2 + 4);
      piVar6 = piVar10 + 1;
      *(int **)(iVar2 + 4) = piVar6;
      piVar10[1] = iVar2;
      piVar10[2] = (int)piVar3;
      *piVar3 = (int)piVar6;
      uVar7 = rknn_get_task_number(param_1,uVar9,piVar3,piVar6,param_4);
      uVar1 = *(uint *)(iVar2 + 0x18);
      *(uint *)(iVar2 + 0x18) = uVar1 + uVar7;
      *(uint *)(iVar2 + 0x1c) =
           *(int *)(iVar2 + 0x1c) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar1,uVar7);
      *(undefined1 *)((int)param_1 + uVar9 + 0x2c) = 1;
    }
    piVar10 = piVar10 + 2;
    iVar2 = iVar2 + 0x28;
  }
  for (uVar9 = 0; (int)uVar9 < *(int *)(*(int *)(iVar8 + 0xd0) + 0x30); uVar9 = uVar9 + 1) {
    if (uVar9 < 3) {
      uVar7 = (uint)*(char *)(uVar9 + iVar4);
    }
    else {
      uVar7 = 0;
    }
    if (((uVar7 & *(uint *)(param_1[0xf] + 0x38)) != 0) && (*(char *)(iVar8 + 0x16c) == '\0')) {
      rknpu_job_next_part_1(iVar8,uVar9);
    }
  }
  return;
}



/* ===== rknpu_job_abort @ 00011bf4 size=316 ===== */

void rknpu_job_abort(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  iVar5 = *param_1;
  uVar2 = *(uint *)(param_1[0xf] + 0x38);
  if ((int)(uVar2 << 0x1f) < 0) {
    iVar3 = 0;
  }
  else if ((int)(uVar2 << 0x1e) < 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
    if ((uVar2 & 4) != 0) {
      iVar3 = 2;
    }
  }
  iVar10 = *(int *)(iVar5 + iVar3 * 4);
  msleep(100);
  puVar6 = (uint *)(iVar5 + 0x70);
  for (uVar2 = 0; (int)uVar2 < *(int *)(*(int *)(iVar5 + 0xd0) + 0x30); uVar2 = uVar2 + 1) {
    if (uVar2 < 3) {
      uVar11 = (uint)*(char *)(uVar2 + DAT_00011d34);
    }
    else {
      uVar11 = 0;
    }
    if ((((uVar11 & *(uint *)(param_1[0xf] + 0x38)) != 0) &&
        (disableIRQinterrupts(), (int *)puVar6[-2] == param_1)) &&
       (*(char *)((int)param_1 + uVar2 + 0x2f) == '\0')) {
      puVar6[-2] = 0;
      uVar11 = rknn_get_task_number(param_1,uVar2);
      uVar1 = *puVar6;
      *puVar6 = uVar1 - uVar11;
      puVar6[1] = (puVar6[1] - ((int)uVar11 >> 0x1f)) - (uint)(uVar1 < uVar11);
    }
    puVar6 = puVar6 + 10;
  }
  iVar4 = param_1[0xd];
  iVar7 = param_1[0xe];
  if (iVar7 == -0x6e) {
    uVar8 = *(undefined4 *)(iVar10 + 0x28);
    DataSynchronizationBarrier(0xf);
    uVar9 = *(undefined4 *)(iVar10 + 0x2c);
    DataSynchronizationBarrier(0xf);
    iVar3 = param_1[iVar3 + 0x13];
    uVar11 = *(uint *)(iVar10 + *(int *)(*(int *)(iVar5 + 0xd0) + 0x1c));
    DataSynchronizationBarrier(0xf);
    uVar2 = *(uint *)(*(int *)(iVar5 + 0xd0) + 0x18);
    uVar12 = ktime_get();
    uVar12 = ktime_divns((uint)uVar12 - param_1[0x1a],
                         ((int)((ulonglong)uVar12 >> 0x20) - param_1[0x1b]) -
                         (uint)((uint)uVar12 < (uint)param_1[0x1a]),1000,0);
    printk(DAT_00011d30,iVar4,uVar8,uVar9,iVar3,uVar11 & uVar2,uVar12);
    rknpu_soft_reset(iVar5);
  }
  else {
    lVar13 = ktime_get();
    ktime_divns((int)(lVar13 - *(longlong *)(param_1 + 0x1a)),
                (int)((ulonglong)(lVar13 - *(longlong *)(param_1 + 0x1a)) >> 0x20),1000,0);
    printk(DAT_00011d38,iVar4,iVar7);
  }
  rknpu_job_free(param_1);
  return;
}



/* ===== rknpu_core0_irq_handler @ 00011d3c size=6 ===== */

void rknpu_core0_irq_handler(undefined4 param_1,undefined4 param_2)

{
  rknpu_irq_handler_constprop_3(param_2,0);
  return;
}



/* ===== rknpu_core1_irq_handler @ 00011d42 size=6 ===== */

void rknpu_core1_irq_handler(undefined4 param_1,undefined4 param_2)

{
  rknpu_irq_handler_constprop_3(param_2,1);
  return;
}



/* ===== rknpu_core2_irq_handler @ 00011d48 size=6 ===== */

void rknpu_core2_irq_handler(undefined4 param_1,undefined4 param_2)

{
  rknpu_irq_handler_constprop_3(param_2,2);
  return;
}



/* ===== rknpu_submit_ioctl @ 00011d4e size=1084 ===== */

int rknpu_submit_ioctl(int param_1,uint param_2)

{
  undefined4 uVar1;
  int *piVar2;
  void *__dest;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  size_t __n;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_c0;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  undefined1 auStack_a4 [20];
  uint local_90 [4];
  undefined4 local_80;
  uint local_58;
  undefined1 auStack_28 [4];
  
  uVar9 = *(uint *)(((uint)&local_c0 & 0xffffe000) + 8);
  if (param_2 < 0xffffff98 && param_2 + 0x68 <= uVar9) {
    uVar9 = 0;
  }
  __n = 0x68;
  if ((uVar9 != 0) || (__n = arm_copy_from_user(local_90), iVar12 = DAT_00012068, __n != 0)) {
    memset((void *)((0x68 - __n) + (int)local_90),0,__n);
    uVar1 = DAT_00012064;
    goto LAB_00011d94;
  }
  if (local_90[3] == 0) {
    printk(DAT_000121b8);
LAB_000121b0:
    iVar12 = -0x16;
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0xd0) + 0x30) == 1) {
      local_58 = 1;
    }
    piVar2 = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_00012068 + 8),0xdc0);
    if (piVar2 == (int *)0x0) {
LAB_00011e1e:
      iVar12 = -0xc;
      printk(DAT_00012070);
      goto LAB_00011e28;
    }
    uVar14 = ktime_get();
    *piVar2 = param_1;
    *(undefined8 *)(piVar2 + 0x1a) = uVar14;
    iVar5 = (-((int)(local_58 << 0x1d) >> 0x1f) - ((int)(local_58 << 0x1e) >> 0x1f)) +
            (local_58 & 1);
    piVar2[0x1c] = iVar5;
    piVar2[0x1d] = iVar5;
    piVar2[0x1e] = iVar5;
    if ((local_90[0] & 2) == 0) {
      piVar2[0xf] = (int)local_90;
      *(undefined1 *)(piVar2 + 0x10) = 0;
    }
    else {
      __dest = (void *)kmem_cache_alloc(*(undefined4 *)(iVar12 + 0x1c),0xdc0);
      piVar2[0xf] = (int)__dest;
      if (__dest == (void *)0x0) {
        kfree(piVar2);
        goto LAB_00011e1e;
      }
      memcpy(__dest,local_90,0x68);
      *(undefined1 *)(piVar2 + 0x10) = 1;
      piVar2[7] = -0x20;
      piVar2[8] = (int)(piVar2 + 8);
      piVar2[9] = (int)(piVar2 + 8);
      piVar2[10] = DAT_00012078;
    }
    if (((int)(local_90[0] << 0x1c) < 0) || ((local_90[0] & 0x10) != 0)) {
      printk(DAT_0001206c);
      rknpu_job_free(piVar2);
      goto LAB_000121b0;
    }
    if ((local_90[0] & 2) == 0) {
      rknpu_job_schedule(piVar2);
      if ((int)(local_90[0] << 0x1f) < 0) {
        piVar13 = (int *)piVar2[0xf];
        iVar5 = *piVar2;
        uVar9 = piVar13[0xe];
        iVar12 = 0;
        if (-1 < (int)(uVar9 << 0x1f)) {
          if ((int)(uVar9 << 0x1e) < 0) {
            iVar12 = 1;
          }
          else {
            iVar12 = 0;
            if ((uVar9 & 4) != 0) {
              iVar12 = 2;
            }
          }
        }
        iVar7 = 3;
        local_b4 = (int)piVar2 + iVar12;
        iVar11 = iVar12 * 0x28 + iVar5 + 0x60;
        do {
          iVar4 = __msecs_to_jiffies(piVar13[1]);
          _cond_resched();
          if ((piVar2[0xd] << 0x1f < 0) || (*(byte *)(iVar5 + 0x16c) != 0)) {
            if (iVar4 == 0) {
              iVar4 = 1;
            }
          }
          else if (iVar4 != 0) {
            local_b0 = (uint)*(byte *)(iVar5 + 0x16c);
            iVar4 = __msecs_to_jiffies(piVar13[1]);
            init_wait_entry(auStack_a4,local_b0);
            while ((prepare_to_wait_event(iVar11,auStack_a4,2), -1 < piVar2[0xd] << 0x1f &&
                   (*(char *)(iVar5 + 0x16c) == '\0'))) {
              if (iVar4 == 0) goto LAB_00012198;
              iVar4 = schedule_timeout(iVar4);
            }
            if (iVar4 == 0) {
              iVar4 = 1;
            }
LAB_00012198:
            finish_wait(iVar11,auStack_a4);
          }
          iVar7 = iVar7 + -1;
          if ((iVar7 == 0) || (iVar4 != 0)) {
            if (*(char *)(local_b4 + 0x2c) != '\0') {
              disableIRQinterrupts();
              uVar9 = rknn_get_task_number(piVar2,iVar12);
              iVar5 = iVar12 * 0x28 + iVar5;
              uVar10 = *(uint *)(iVar5 + 0x70);
              *(uint *)(iVar5 + 0x70) = uVar10 - uVar9;
              *(uint *)(iVar5 + 0x74) =
                   (*(int *)(iVar5 + 0x74) - ((int)uVar9 >> 0x1f)) - (uint)(uVar10 < uVar9);
              if (piVar2[0x1c] == 1) {
                iVar5 = piVar2[iVar12 * 2 + 1];
                piVar13 = (int *)piVar2[iVar12 * 2 + 2];
                *(int **)(iVar5 + 4) = piVar13;
                *piVar13 = iVar5;
                piVar2[iVar12 * 2 + 1] = (int)(piVar2 + iVar12 * 2 + 1);
                piVar2[iVar12 * 2 + 2] = (int)(piVar2 + iVar12 * 2 + 1);
                *(undefined1 *)(local_b4 + 0x2c) = 0;
              }
              else if (1 < (uint)piVar2[0x1c]) {
                piVar3 = piVar2 + 1;
                piVar13 = piVar2 + 0xb;
                do {
                  piVar8 = (int *)((int)piVar13 + 1);
                  if ((char)*piVar13 != '\0') {
                    iVar12 = *piVar3;
                    piVar6 = (int *)piVar3[1];
                    *(int **)(iVar12 + 4) = piVar6;
                    *piVar6 = iVar12;
                    *piVar3 = (int)piVar3;
                    piVar3[1] = (int)piVar3;
                    *(char *)piVar13 = '\0';
                  }
                  piVar3 = piVar3 + 2;
                  piVar13 = piVar8;
                } while ((char *)((-0x2c - (int)piVar2) + (int)piVar8) < (char *)piVar2[0x1c]);
              }
              goto LAB_000120de;
            }
            break;
          }
        } while (*(char *)(local_b4 + 0x2c) != '\0');
        if (piVar2[0x12] == 0) {
LAB_000120de:
          if (-1 < iVar4) {
LAB_000120e2:
            iVar4 = -0x16;
          }
        }
        else {
          *(int *)(piVar2[0x12] + 0x14) = piVar2[iVar12 + 0x16];
          if (iVar4 < 1) {
            piVar13[4] = 0;
            if (*piVar13 << 0x1f < 0) {
              DataSynchronizationBarrier(0xf);
              piVar13[4] = *(uint *)(*(int *)(iVar5 + 0xd0) + 0x18) &
                           *(uint *)(*(int *)(iVar5 + iVar12 * 4) +
                                    *(int *)(*(int *)(iVar5 + 0xd0) + 0x1c));
            }
            iVar5 = piVar13[4];
            iVar12 = *piVar13;
            uVar14 = ktime_get();
            local_c0 = ktime_divns((uint)uVar14 - piVar2[0x1a],
                                   ((int)((ulonglong)uVar14 >> 0x20) - piVar2[0x1b]) -
                                   (uint)((uint)uVar14 < (uint)piVar2[0x1a]),1000,0);
            printk(DAT_00012088,iVar5,iVar12,iVar4);
            if (iVar4 == 0) {
              iVar4 = -0x6e;
            }
          }
          else {
            if (-1 < piVar2[0xd] << 0x1f) goto LAB_000120e2;
            iVar4 = 0;
            piVar13[4] = piVar13[3];
          }
        }
        piVar2[0xe] = iVar4;
      }
      iVar12 = piVar2[0xe];
      local_80 = *(undefined4 *)(piVar2[0xf] + 0x10);
      if (iVar12 != 0) goto LAB_00011ea8;
      rknpu_job_free(piVar2);
    }
    else {
      piVar13 = (int *)(param_1 + 0x58);
      piVar2[0xd] = piVar2[0xd] | 2;
      local_b4 = *(uint *)(piVar2[0xf] + 0x38);
      uVar14 = ktime_get();
      local_ac = (uint)uVar14;
      for (uVar9 = 0; (int)uVar9 < *(int *)(*(int *)(param_1 + 0xd0) + 0x30); uVar9 = uVar9 + 1) {
        if (uVar9 < 3) {
          uVar10 = (uint)*(char *)(uVar9 + DAT_0001207c);
        }
        else {
          uVar10 = 0;
        }
        if (((local_b4 & uVar10) != 0) && (iVar12 = piVar13[4], iVar12 != 0)) {
          local_b0 = *(uint *)(iVar12 + 0x6c);
          uVar15 = ktime_divns(local_ac - *(uint *)(iVar12 + 0x68),
                               ((int)((ulonglong)uVar14 >> 0x20) - local_b0) -
                               (uint)(local_ac < *(uint *)(iVar12 + 0x68)),DAT_00012080,0);
          if ((int)(uint)((uint)uVar15 < *(uint *)(*(int *)(iVar12 + 0x3c) + 4)) <=
              (int)((ulonglong)uVar15 >> 0x20)) {
            rknpu_soft_reset(param_1);
            disableIRQinterrupts();
            piVar13[4] = 0;
            local_b0 = uVar9 * 0x28 + param_1;
            do {
              queue_work_on(1,*DAT_00012084,iVar12 + 0x1c);
              disableIRQinterrupts();
              if (*(int **)(local_b0 + 0x58) == piVar13) {
                iVar12 = 0;
              }
              else {
                iVar7 = *piVar13;
                iVar12 = iVar7 + uVar9 * -8 + -4;
                iVar5 = iVar12 + uVar9 * 8;
                iVar11 = *(int *)(iVar5 + 4);
                piVar3 = *(int **)(iVar5 + 8);
                *(int **)(iVar11 + 4) = piVar3;
                *piVar3 = iVar11;
                *(int *)iVar7 = iVar7;
                *(int *)(iVar5 + 8) = iVar7;
                *(undefined1 *)(iVar12 + uVar9 + 0x2c) = 0;
              }
            } while (iVar12 != 0);
          }
        }
        piVar13 = piVar13 + 10;
      }
      rknpu_job_schedule(piVar2);
      iVar12 = piVar2[0xe];
      if (iVar12 != 0) {
LAB_00011ea8:
        rknpu_job_abort(piVar2);
      }
    }
  }
LAB_00011e28:
  uVar9 = *(uint *)(((uint)&local_c0 & 0xffffe000) + 8);
  if (param_2 < 0xffffff98 && param_2 + 0x68 <= uVar9) {
    uVar9 = 0;
  }
  uVar1 = DAT_00012074;
  if (uVar9 == 0) {
    iVar5 = arm_copy_to_user(param_2,local_90,0x68);
    uVar1 = DAT_00012074;
    if (iVar5 == 0) {
      return iVar12;
    }
  }
LAB_00011d94:
  printk(uVar1,DAT_00012060);
  return -0xe;
}



/* ===== rknpu_get_hw_version @ 000121bc size=32 ===== */

undefined4 rknpu_get_hw_version(undefined4 *param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    *param_2 = *(int *)*param_1 + (((int *)*param_1)[1] & 0xffffU);
    return 0;
  }
  return 0xffffffea;
}



/* ===== rknpu_get_bw_priority @ 000121dc size=60 ===== */

undefined4
rknpu_get_bw_priority(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xd4);
  if (*(int *)(*(int *)(param_1 + 0xd0) + 0x24) == 0) {
    printk(DAT_00012218);
  }
  else {
    if (puVar1 == (undefined4 *)0x0) {
      return 0xffffffea;
    }
    if (param_2 != (undefined4 *)0x0) {
      DataSynchronizationBarrier(0xf);
      *param_2 = *puVar1;
    }
    if (param_3 != (undefined4 *)0x0) {
      DataSynchronizationBarrier(0xf);
      *param_3 = puVar1[2];
    }
    if (param_4 != (undefined4 *)0x0) {
      DataSynchronizationBarrier(0xf);
      *param_4 = puVar1[3];
    }
  }
  return 0;
}



/* ===== rknpu_set_bw_priority @ 0001221c size=78 ===== */

undefined4 rknpu_set_bw_priority(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xd4);
  if (*(int *)(*(int *)(param_1 + 0xd0) + 0x24) == 0) {
    printk(DAT_0001226c);
  }
  else {
    if (piVar1 == (int *)0x0) {
      return 0xffffffea;
    }
    if (param_2 != 0) {
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *piVar1 = param_2;
    }
    if (param_3 != 0) {
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      piVar1[2] = param_3;
    }
    if (param_4 != 0) {
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      piVar1[3] = param_4;
    }
  }
  return 0;
}



/* ===== rknpu_clear_rw_amount @ 00012270 size=120 ===== */

undefined4 rknpu_clear_rw_amount(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_1;
  if (*(int *)(param_1[0x34] + 0x24) == 0) {
    printk(DAT_000122e8);
  }
  else {
    puVar1 = (undefined4 *)(iVar2 + 0x8010);
    if (*(int *)(param_1[0x34] + 0x20) == 0) {
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *puVar1 = DAT_000122ec;
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *puVar1 = 0x101;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0x10);
      DataSynchronizationBarrier(0xf);
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar2 + 0x10) = 1;
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *puVar1 = DAT_000122ec;
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *puVar1 = 0x101;
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(iVar2 + 0x10) = uVar3;
    }
  }
  return 0;
}



/* ===== rknpu_get_rw_amount @ 000122f0 size=78 ===== */

undefined4 rknpu_get_rw_amount(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  iVar1 = *(int *)(param_1[0x34] + 0x10);
  if (*(int *)(param_1[0x34] + 0x24) == 0) {
    printk(DAT_00012340);
  }
  else {
    if (param_2 != (int *)0x0) {
      DataSynchronizationBarrier(0xf);
      *param_2 = iVar1 * *(int *)(iVar2 + 0x8034);
    }
    if (param_3 != (int *)0x0) {
      DataSynchronizationBarrier(0xf);
      *param_3 = iVar1 * *(int *)(iVar2 + 0x8038);
    }
    if (param_4 != (int *)0x0) {
      DataSynchronizationBarrier(0xf);
      *param_4 = iVar1 * *(int *)(iVar2 + 0x803c);
    }
  }
  return 0;
}



/* ===== rknpu_get_total_rw_amount @ 00012344 size=62 ===== */

undefined4 rknpu_get_total_rw_amount(int param_1,int *param_2)

{
  undefined4 uVar1;
  int local_1c;
  int iStack_18;
  int local_14 [2];
  
  local_1c = 0;
  iStack_18 = 0;
  local_14[0] = 0;
  if (*(int *)(*(int *)(param_1 + 0xd0) + 0x24) == 0) {
    printk(DAT_00012384);
    uVar1 = 0;
  }
  else {
    uVar1 = rknpu_get_rw_amount(param_1,&local_1c,&iStack_18,local_14);
    if (param_2 != (int *)0x0) {
      *param_2 = local_1c + iStack_18 + local_14[0];
    }
  }
  return uVar1;
}



/* ===== rknpu_debugger_write @ 00012388 size=26 ===== */

undefined4 rknpu_debugger_write(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x80) + 0x40) + 4) + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001239a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return param_3;
}



/* ===== _copy_from_user @ 000123a2 size=58 ===== */

size_t _copy_from_user(int param_1,uint param_2,uint param_3)

{
  size_t __n;
  uint uVar1;
  
  uVar1 = *(uint *)(((uint)&stack0xfffffff0 & 0xffffe000) + 8);
  if (!CARRY4(param_2,param_3) && param_2 + param_3 <= uVar1) {
    uVar1 = 0;
  }
  __n = param_3;
  if (uVar1 == 0) {
    __n = arm_copy_from_user();
  }
  if (__n != 0) {
    memset((void *)((param_3 - __n) + param_1),0,__n);
  }
  return __n;
}



/* ===== rknpu_reset_set @ 000123dc size=130 ===== */

void rknpu_reset_set(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  int local_14;
  
  piVar1 = DAT_00012460;
  local_14 = *DAT_00012460;
  iVar3 = **(int **)(*(int *)(param_1 + 0x80) + 0x40);
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  if (param_3 < 8) {
    iVar2 = _copy_from_user(&uStack_1c);
    if (iVar2 == 0) {
      *(undefined1 *)((int)&uStack_20 + param_3 + 3) = 0;
      iVar2 = strcmp((char *)&uStack_1c,DAT_00012464);
      if ((iVar2 == 0) && (0 < *(int *)(iVar3 + -0x38))) {
        rknpu_soft_reset();
      }
      else {
        iVar2 = strcmp((char *)&uStack_1c,DAT_00012468);
        if (iVar2 == 0) {
          *(undefined4 *)(iVar3 + -0x50) = 0;
        }
        else {
          iVar2 = strcmp((char *)&uStack_1c,DAT_0001246c);
          if (iVar2 == 0) {
            *(undefined4 *)(iVar3 + -0x50) = 1;
          }
        }
      }
    }
    else {
      param_3 = 0xfffffff2;
    }
  }
  else {
    param_3 = 0xffffffea;
  }
  if (local_14 == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_3);
}



/* ===== rknpu_reset_show @ 00012470 size=26 ===== */

undefined4 rknpu_reset_show(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(**(int **)(param_1 + 0x40) + -0x50);
  uVar1 = DAT_00012490;
  if (iVar2 == 0) {
    uVar1 = DAT_0001248c;
  }
  seq_puts(param_1,uVar1,param_3,iVar2,param_4);
  return 0;
}



/* ===== rknpu_power_show @ 00012494 size=30 ===== */

undefined4 rknpu_power_show(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(**(int **)(param_1 + 0x40) + -0x38);
  uVar1 = DAT_000124b4;
  if (iVar2 < 1) {
    uVar1 = DAT_000124b8;
  }
  seq_puts(param_1,uVar1,param_3,iVar2,param_4);
  return 0;
}



/* ===== rknpu_power_put_delay_set @ 000124bc size=108 ===== */

void rknpu_power_put_delay_set(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_28;
  undefined1 auStack_24 [16];
  int local_14;
  
  piVar1 = DAT_00012528;
  local_14 = *DAT_00012528;
  iVar4 = **(int **)(*(int *)(param_1 + 0x80) + 0x40);
  local_28 = 0;
  if (param_3 < 0x10) {
    iVar3 = _copy_from_user(auStack_24);
    if (iVar3 == 0) {
      auStack_24[param_3 - 1] = 0;
      iVar3 = _kstrtoul(auStack_24,10,&local_28);
      uVar2 = DAT_00012530;
      if (iVar3 == 0) {
        *(undefined4 *)(iVar4 + 100) = local_28;
        printk(uVar2);
        goto LAB_00012512;
      }
      printk(DAT_0001252c,auStack_24);
    }
    param_3 = 0xfffffff2;
  }
  else {
    param_3 = 0xffffffea;
  }
LAB_00012512:
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_3);
  }
  return;
}



/* ===== rknpu_power_put_delay_show @ 00012534 size=18 ===== */

undefined4
rknpu_power_put_delay_show(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  seq_printf(param_1,DAT_00012548,*(undefined4 *)(**(int **)(param_1 + 0x40) + 100),
             **(int **)(param_1 + 0x40),param_4);
  return 0;
}



/* ===== rknpu_version_show @ 0001254c size=28 ===== */

undefined4 rknpu_version_show(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  seq_printf(param_1,DAT_00012568,DAT_0001256c,0,8,5,param_3);
  return 0;
}



/* ===== rknpu_volt_show @ 00012570 size=30 ===== */

undefined4 rknpu_volt_show(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = regulator_get_voltage(*(undefined4 *)(**(int **)(param_1 + 0x40) + -0xb8));
  seq_printf(param_1,DAT_00012590,uVar1);
  return 0;
}



/* ===== rknpu_freq_set @ 00012594 size=170 ===== */

void rknpu_freq_set(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  undefined1 auStack_24 [16];
  int local_14;
  
  piVar1 = DAT_00012640;
  local_14 = *DAT_00012640;
  iVar3 = **(int **)(*(int *)(param_1 + 0x80) + 0x40);
  local_28 = 0;
  if (param_3 < 0x10) {
    iVar2 = _copy_from_user(auStack_24);
    if (iVar2 == 0) {
      auStack_24[param_3 - 1] = 0;
      iVar2 = _kstrtoul(auStack_24,10,&local_28);
      if (iVar2 == 0) {
        if (*(int *)(iVar3 + -0xa4) != 0) {
          rknpu_power_get(iVar3 + -0x1b8);
          iVar2 = clk_get_rate(*(undefined4 *)(*(int *)(iVar3 + -0xc0) + 4));
          if (local_28 != iVar2) {
            *(int *)(iVar3 + -0xa0) = local_28;
            mutex_lock(*(int *)(iVar3 + -0xa4) + 8);
            update_devfreq(*(undefined4 *)(iVar3 + -0xa4));
            mutex_unlock(*(int *)(iVar3 + -0xa4) + 8);
          }
          rknpu_power_put(iVar3 + -0x1b8);
          goto LAB_000125c2;
        }
      }
      else {
        printk(DAT_00012644,auStack_24);
      }
    }
    param_3 = 0xfffffff2;
  }
  else {
    param_3 = 0xffffffea;
  }
LAB_000125c2:
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_3);
  }
  return;
}



/* ===== rknpu_freq_show @ 00012648 size=50 ===== */

undefined4 rknpu_freq_show(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = **(int **)(param_1 + 0x40);
  iVar3 = iVar2 + -0x1b8;
  rknpu_power_get(iVar3);
  uVar1 = clk_get_rate(*(undefined4 *)(*(int *)(iVar2 + -0xc0) + 4));
  rknpu_power_put(iVar3);
  seq_printf(param_1,DAT_0001267c,uVar1);
  return 0;
}



/* ===== rknpu_procfs_open @ 00012680 size=24 ===== */

void rknpu_procfs_open(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = PDE_DATA();
  single_open(param_2,*(undefined4 *)(*(int *)(iVar1 + 4) + 4),iVar1);
  return;
}



/* ===== rknpu_procfs_remove_files @ 00012698 size=94 ===== */

undefined4 rknpu_procfs_remove_files(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  mutex_lock(param_1 + 3);
  piVar4 = *(int **)param_1[1];
  piVar2 = (int *)param_1[1];
  while (piVar1 = piVar4, param_1 + 1 != piVar2) {
    if (piVar2[-1] != 0) {
      iVar3 = *piVar2;
      piVar4 = (int *)piVar2[1];
      *(int **)(iVar3 + 4) = piVar4;
      *piVar4 = iVar3;
      *piVar2 = 0x100;
      piVar2[1] = 0x122;
      kfree();
    }
    piVar4 = (int *)*piVar1;
    piVar2 = piVar1;
  }
  proc_remove(*param_1);
  *param_1 = 0;
  mutex_unlock(param_1 + 3);
  return 0;
}



/* ===== rknpu_load_show @ 000126f6 size=144 ===== */

undefined4 rknpu_load_show(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = DAT_0001278c;
  uVar1 = DAT_00012788;
  iVar6 = 0;
  iVar7 = **(int **)(param_1 + 0x40);
  seq_puts(param_1,DAT_00012790,param_3,*(int **)(param_1 + 0x40),param_4);
  while (iVar5 = *(int *)(*(int *)(iVar7 + -0xe8) + 0x30), iVar6 < iVar5) {
    if (iVar5 != 1) {
      seq_printf(param_1,DAT_00012798,iVar6);
    }
    disableIRQinterrupts();
    uVar4 = *(uint *)(iVar7 + -0x13c + iVar6 * 0x28);
    iVar6 = iVar6 + 1;
    uVar3 = DAT_0001279c;
    if (*(int *)(*(int *)(iVar7 + -0xe8) + 0x30) < 2) {
      uVar3 = DAT_000127a0;
    }
    seq_printf(param_1,uVar3,
               (uint)((ulonglong)uVar2 * (ulonglong)uVar4 +
                      ((ulonglong)uVar1 * (ulonglong)uVar4 >> 0x20) >> 0x20) >> 0xb);
  }
  seq_puts(param_1,DAT_00012794);
  return 0;
}



/* ===== rknpu_power_set @ 000127a4 size=244 ===== */

void rknpu_power_set(int param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  char acStack_25 [9];
  int local_1c;
  
  piVar2 = DAT_00012898;
  local_1c = *DAT_00012898;
  iVar6 = **(int **)(*(int *)(param_1 + 0x80) + 0x40);
  if (param_3 < 8) {
    iVar3 = _copy_from_user(acStack_25 + 1);
    if (iVar3 == 0) {
      acStack_25[param_3] = '\0';
      iVar3 = strcmp(acStack_25 + 1,DAT_0001289c);
      if (iVar3 == 0) {
        piVar5 = (int *)(iVar6 + -0x34);
        HintPreloadData(piVar5);
        do {
          ExclusiveAccess(piVar5);
          bVar8 = (bool)hasExclusiveAccess(piVar5);
        } while (!bVar8);
        *piVar5 = *piVar5 + 1;
        rknpu_power_get(iVar6 + -0x1b8);
        uVar4 = DAT_000128a0;
      }
      else {
        iVar3 = strcmp(acStack_25 + 1,DAT_000128a4);
        uVar4 = DAT_000128a8;
        if (iVar3 == 0) {
          if (0 < *(int *)(iVar6 + -0x38)) {
            piVar5 = (int *)(iVar6 + -0x34);
            iVar3 = *(int *)(iVar6 + -0x34);
            do {
              if (iVar3 + -1 < 0) goto LAB_00012888;
              HintPreloadData(piVar5);
              do {
                ExclusiveAccess(piVar5);
                iVar7 = *piVar5;
                bVar8 = false;
                if (iVar7 == iVar3) {
                  bVar1 = (bool)hasExclusiveAccess(piVar5);
                  bVar8 = true;
                  if (bVar1) {
                    bVar8 = false;
                    *piVar5 = iVar3 + -1;
                  }
                }
              } while (bVar8);
              bVar8 = iVar3 != iVar7;
              iVar3 = iVar7;
            } while (bVar8);
            piVar5 = (int *)(iVar6 + -0x38);
            HintPreloadData(piVar5);
            do {
              ExclusiveAccess(piVar5);
              bVar8 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar8);
            *piVar5 = *piVar5 - *(int *)(iVar6 + -0x34);
            *(undefined4 *)(iVar6 + -0x34) = 0;
            rknpu_power_put(iVar6 + -0x1b8);
          }
LAB_00012888:
          uVar4 = DAT_000128ac;
          if (0 < *(int *)(iVar6 + -0x38)) goto LAB_00012804;
        }
      }
      printk(uVar4);
    }
    else {
      param_3 = 0xfffffff2;
    }
  }
  else {
    param_3 = 0xffffffea;
  }
LAB_00012804:
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_3);
}



/* ===== rknpu_debugger_init @ 000128b0 size=218 ===== */

undefined4 rknpu_debugger_init(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = param_1 + 0x1c4;
  __mutex_init(iVar8,DAT_00012990,DAT_0001298c,param_4,param_1,param_2,param_3);
  iVar9 = param_1 + 0x1bc;
  *(int *)(param_1 + 0x1bc) = iVar9;
  *(int *)(param_1 + 0x1c0) = iVar9;
  iVar6 = param_1 + 0x1b8;
  uVar1 = proc_mkdir(DAT_00012994,0);
  *(uint *)(param_1 + 0x1b8) = uVar1;
  if ((uVar1 == 0) || (0xfffff000 < uVar1)) {
    printk(DAT_00012998,DAT_00012994);
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  else {
    iVar7 = 0;
    puVar5 = DAT_0001299c;
    do {
      piVar2 = (int *)kmem_cache_alloc(*(undefined4 *)(DAT_000129a0 + 0x14),0xcc0);
      if (piVar2 == (int *)0x0) {
        printk(DAT_000129a4,DAT_00012994,*puVar5);
LAB_00012920:
        rknpu_procfs_remove_files(iVar6);
        printk(DAT_000129a8);
        rknpu_procfs_remove_files(iVar6);
        return 0;
      }
      *piVar2 = iVar6;
      piVar2[1] = (int)puVar5;
      iVar3 = proc_create_data(*puVar5,0x8124,uVar1,DAT_000129ac,piVar2);
      if (iVar3 == 0) {
        printk(DAT_000129b0,DAT_00012994,*puVar5);
        kfree(piVar2);
        goto LAB_00012920;
      }
      piVar2[2] = iVar3;
      mutex_lock(iVar8);
      piVar4 = *(int **)(param_1 + 0x1c0);
      *(int **)(param_1 + 0x1c0) = piVar2 + 3;
      iVar7 = iVar7 + 1;
      piVar2[3] = iVar9;
      piVar2[4] = (int)piVar4;
      puVar5 = puVar5 + 4;
      *piVar4 = (int)(piVar2 + 3);
      mutex_unlock(iVar8);
    } while (iVar7 != 7);
  }
  return 0;
}



/* ===== rknpu_debugger_remove @ 000129b4 size=14 ===== */

undefined4 rknpu_debugger_remove(int param_1)

{
  rknpu_procfs_remove_files(param_1 + 0x1b8);
  return 0;
}



/* ===== _copy_from_user @ 000129c4 size=58 ===== */

size_t _copy_from_user(int param_1,uint param_2,uint param_3)

{
  size_t __n;
  uint uVar1;
  
  uVar1 = *(uint *)(((uint)&stack0xfffffff0 & 0xffffe000) + 8);
  if (!CARRY4(param_2,param_3) && param_2 + param_3 <= uVar1) {
    uVar1 = 0;
  }
  __n = param_3;
  if ((uVar1 != 0) || (__n = arm_copy_from_user(), __n != 0)) {
    memset((void *)((param_3 - __n) + param_1),0,__n);
  }
  return __n;
}



/* ===== rknpu_mem_create_ioctl @ 000129fe size=514 ===== */

int * rknpu_mem_create_ioctl(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  uint unaff_r11;
  int local_60 [2];
  uint local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  uint local_48;
  undefined4 uStack_44;
  int local_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  
  iVar1 = _copy_from_user(&local_50,param_2,0x28);
  if (iVar1 != 0) {
    printk(DAT_00012c04,DAT_00012c00);
    return (int *)0xfffffff2;
  }
  if ((local_4c & 1) != 0) {
    printk(DAT_00012c08,DAT_00012c00);
    return (int *)0xffffffea;
  }
  iVar2 = kmem_cache_alloc(*(undefined4 *)(DAT_00012c0c + 0x14),0xdc0);
  iVar1 = local_50;
  if (iVar2 == 0) {
    return (int *)0xfffffff4;
  }
  if (local_50 == 0) {
    local_60[0] = (*(int **)(param_1 + 0xc))[0xb];
    if (local_60[0] == 0) {
      local_60[0] = **(int **)(param_1 + 0xc);
    }
    piVar3 = (int *)rk_dma_heap_buffer_alloc
                              (*(undefined4 *)(param_1 + 0x38),local_48,DAT_00012c10,0);
    if ((int *)0xfffff000 < piVar3) goto LAB_00012a66;
    *(int **)(iVar2 + 0x18) = piVar3;
    *(undefined4 *)(iVar2 + 0x1c) = 1;
    iVar1 = dma_buf_fd(piVar3,DAT_00012c10);
    if (-1 < iVar1) goto LAB_00012a72;
    piVar4 = (int *)0xfffffff2;
  }
  else {
    piVar3 = (int *)dma_buf_get(local_50);
    if ((int *)0xfffff000 < piVar3) goto LAB_00012a66;
    *(int **)(iVar2 + 0x18) = piVar3;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
LAB_00012a72:
    piVar4 = (int *)dma_buf_attach(piVar3,*(undefined4 *)(param_1 + 0xc));
    if (piVar4 < (int *)0xfffff001) {
      piVar5 = (int *)dma_buf_map_attachment(piVar4,0);
      if (piVar5 < (int *)0xfffff001) {
        puVar6 = (uint *)*piVar5;
        for (uVar10 = 0; uVar10 < (uint)piVar5[2]; uVar10 = uVar10 + 1) {
          unaff_r11 = puVar6[3];
          local_54 = *puVar6 & 0xfffffffc;
          local_58 = puVar6[2];
          puVar6 = (uint *)sg_next();
        }
        local_58 = local_58 >> 0xc;
        iVar7 = __kmalloc(local_58 << 5,0xcc0);
        if (iVar7 == 0) {
          piVar9 = (int *)0xfffffff4;
        }
        else {
          for (uVar10 = 0; uVar10 != local_58; uVar10 = uVar10 + 1) {
            *(uint *)(iVar7 + uVar10 * 4) = local_54 + uVar10 * 0x20;
          }
          iVar8 = vmap(iVar7,uVar10,4,*DAT_00012c14 | 0x200);
          *(int *)(iVar2 + 8) = iVar8;
          if (iVar8 == 0) {
            piVar9 = (int *)0xfffffff4;
          }
          else {
            *(uint *)(iVar2 + 0xc) = unaff_r11;
            uStack_3c = 0;
            uStack_34 = 0;
            local_48 = local_48 + 0xfff & 0xfffff000;
            uStack_44 = 0;
            *(uint *)(iVar2 + 4) = local_48;
            *(int **)(iVar2 + 0x14) = piVar5;
            uVar10 = *(uint *)(((uint)local_60 & 0xffffe000) + 8);
            if (param_2 < 0xffffffd8 && param_2 + 0x28 <= uVar10) {
              uVar10 = 0;
            }
            local_50 = iVar1;
            local_40 = iVar2;
            local_38 = unaff_r11;
            if ((uVar10 == 0) && (iVar1 = arm_copy_to_user(param_2,&local_50,0x28), iVar1 == 0)) {
              kfree(iVar7);
              dma_buf_unmap_attachment(piVar4,piVar5,0);
              dma_buf_detach(piVar3,piVar4);
              return (int *)0x0;
            }
            piVar9 = (int *)0xfffffff2;
            printk(DAT_00012c18,DAT_00012c00);
            vunmap(*(undefined4 *)(iVar2 + 8));
            *(undefined4 *)(iVar2 + 8) = 0;
          }
          kfree(iVar7);
        }
        dma_buf_unmap_attachment(piVar4,piVar5,0);
        dma_buf_detach(piVar3,piVar4);
        piVar4 = piVar9;
      }
      else {
        dma_buf_detach(piVar3,piVar4);
        piVar4 = piVar5;
      }
    }
  }
  if (*(int *)(iVar2 + 0x1c) == 0) {
    dma_buf_put(piVar3);
    piVar3 = piVar4;
  }
  else {
    rk_dma_heap_buffer_free();
    piVar3 = piVar4;
  }
LAB_00012a66:
  kfree(iVar2);
  return piVar3;
}



/* ===== rknpu_mem_destroy_ioctl @ 00012c1c size=62 ===== */

undefined4
rknpu_mem_destroy_ioctl(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18;
  undefined4 uStack_14;
  
  uStack_20 = param_1;
  uStack_1c = param_2;
  local_18 = param_3;
  uStack_14 = param_4;
  iVar2 = _copy_from_user(&uStack_20,param_2,0x10);
  iVar1 = local_18;
  if (iVar2 == 0) {
    uVar3 = *(undefined4 *)(local_18 + 0x18);
    vunmap(*(undefined4 *)(local_18 + 8));
    *(undefined4 *)(iVar1 + 8) = 0;
    if (*(int *)(iVar1 + 0x1c) == 0) {
      dma_buf_put(uVar3);
    }
    kfree(iVar1);
    uVar3 = 0;
  }
  else {
    printk(DAT_00012c60,DAT_00012c5c);
    uVar3 = 0xfffffff2;
  }
  return uVar3;
}



/* ===== rknpu_mem_sync_ioctl @ 00012c64 size=80 ===== */

undefined4 rknpu_mem_sync_ioctl(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_30 [2];
  int local_28;
  undefined4 local_20;
  undefined4 local_18;
  
  iVar1 = _copy_from_user(local_30,param_2,0x20);
  if (iVar1 == 0) {
    iVar1 = *(int *)(local_28 + 0x18);
    if ((int)(local_30[0] << 0x1f) < 0) {
      (**(code **)(*(int *)(iVar1 + 0x10) + 0x2c))(iVar1,1,local_20,local_18);
    }
    uVar2 = 0;
    if ((local_30[0] & 2) != 0) {
      (**(code **)(*(int *)(iVar1 + 0x10) + 0x24))(iVar1,2,local_20,local_18);
      uVar2 = 0;
    }
  }
  else {
    printk(DAT_00012cb8,DAT_00012cb4);
    uVar2 = 0xfffffff2;
  }
  return uVar2;
}



/* ===== rknpu_reset_assert @ 00012cbc size=34 ===== */

int rknpu_reset_assert(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = reset_control_assert();
    if (iVar1 < 0) {
      printk(DAT_00012ce0,iVar1);
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== rknpu_reset_deassert @ 00012ce4 size=34 ===== */

int rknpu_reset_deassert(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = reset_control_deassert();
    if (iVar1 < 0) {
      printk(DAT_00012d08,iVar1);
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* ===== <EXTERNAL>::regulator_enable @ 00015000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regulator_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__clk_get_name @ 00015004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __clk_get_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::misc_deregister @ 00015008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void misc_deregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::alloc_workqueue @ 0001500c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void alloc_workqueue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regmap_write @ 00015010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regmap_write(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_request_threaded_irq @ 00015014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_request_threaded_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_kmalloc @ 00015018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_pm_opp_put_regulators @ 0001501c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_pm_opp_put_regulators(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_property_read_variable_u32_array @ 00015020 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_property_read_variable_u32_array(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__msecs_to_jiffies @ 00015024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __msecs_to_jiffies(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_dma_heap_buffer_alloc @ 00015028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_dma_heap_buffer_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_driver_unregister @ 0001502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_driver_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_irq @ 00015030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_property_match_string @ 00015034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_property_match_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devfreq_remove_governor @ 00015038 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devfreq_remove_governor(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::queue_work_on @ 0001503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void queue_work_on(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_devfreq_cooling_register_power @ 00015040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_devfreq_cooling_register_power(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::finish_wait @ 0001504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void finish_wait(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::set_user_nice @ 00015054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void set_user_nice(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_ioremap @ 00015058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_ioremap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hrtimer_init @ 0001505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hrtimer_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devfreq_recommended_opp @ 00015060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devfreq_recommended_opp(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_bulk_disable @ 00015064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_bulk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_devfreq_register_opp_notifier @ 00015068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_devfreq_register_opp_notifier(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::reset_control_assert @ 0001506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void reset_control_assert(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memcpy @ 00015070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memcpy(void *__dest,void *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vunmap @ 00015074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vunmap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree @ 00015078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_bulk_unprepare @ 0001507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_bulk_unprepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rockchip_set_read_margin @ 00015084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rockchip_set_read_margin(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_heavy_mb @ 00015088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_heavy_mb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::proc_create_data @ 0001508c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void proc_create_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prepare_to_wait_event @ 00015090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void prepare_to_wait_event(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__wake_up @ 00015094 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __wake_up(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_resource_byname @ 00015098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_resource_byname(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_set_rate @ 0001509c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_set_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_attach @ 000150a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_attach(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rockchip_init_opp_table @ 000150a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rockchip_init_opp_table(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_regulator_get_optional @ 000150a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_regulator_get_optional(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_pm_domain_attach_by_name @ 000150ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_pm_domain_attach_by_name(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regulator_get_voltage @ 000150b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regulator_get_voltage(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_pm_opp_of_remove_table @ 000150b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_pm_opp_of_remove_table(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_kstrtoul @ 000150b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _kstrtoul(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::schedule_timeout @ 000150bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void schedule_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_irq_byname @ 000150c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_irq_byname(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 000150c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::refcount_warn_saturate @ 000150c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void refcount_warn_saturate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::queue_delayed_work_on @ 000150cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void queue_delayed_work_on(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rockchip_get_opp_data @ 000150d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rockchip_get_opp_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pm_runtime_enable @ 000150d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pm_runtime_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_dma_heap_find @ 000150d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_dma_heap_find(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_pm_opp_put @ 000150dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_pm_opp_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_map_attachment @ 000150e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_map_attachment(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmem_cache_alloc @ 000150e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmem_cache_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_info @ 000150e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_info(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_pm_domain_detach @ 000150ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_pm_domain_detach(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_dma_heap_buffer_free @ 000150f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_dma_heap_buffer_free(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rk_dma_heap_set_dev @ 000150f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rk_dma_heap_set_dev(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_bulk_enable @ 000150f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_bulk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_wait_entry @ 000150fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_wait_entry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_match_device @ 00015100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_match_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_err @ 00015104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_pm_opp_set_regulators @ 00015108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_pm_opp_set_regulators(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::update_devfreq @ 0001510c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void update_devfreq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_unmap_attachment @ 00015110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_unmap_attachment(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_fence_signal @ 00015118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_fence_signal(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_resource @ 0001511c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strstr @ 00015120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strstr(char *__haystack,char *__needle)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::reset_control_deassert @ 00015124 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void reset_control_deassert(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::destroy_workqueue @ 00015128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void destroy_workqueue(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_pm_opp_set_rate @ 0001512c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_pm_opp_set_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_lock @ 00015130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_get @ 00015134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rockchip_set_intermediate_rate @ 00015138 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rockchip_set_intermediate_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_cond_resched @ 0001513c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _cond_resched(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_put @ 00015140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_put(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_fd @ 00015144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::vmap @ 00015148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void vmap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_find_property @ 0001514c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_find_property(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devfreq_unregister_opp_notifier @ 00015150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devfreq_unregister_opp_notifier(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 00015154 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 00015158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_device_is_available @ 0001515c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_device_is_available(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::proc_mkdir @ 00015160 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void proc_mkdir(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cancel_delayed_work @ 00015164 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cancel_delayed_work(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 00015168 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_warn @ 0001516c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_warn(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hrtimer_start_range_ns @ 00015170 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hrtimer_start_range_ns(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::misc_register @ 00015174 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void misc_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__aeabi_uidiv @ 00015178 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __aeabi_uidiv(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::PDE_DATA @ 0001517c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void PDE_DATA(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_waitqueue_head @ 00015180 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_waitqueue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_reserved_mem_device_init_by_idx @ 00015184 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_reserved_mem_device_init_by_idx(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::proc_remove @ 00015188 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void proc_remove(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 0001518c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_trylock @ 00015190 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_trylock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_copy_to_user @ 00015194 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_copy_to_user(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nonseekable_open @ 00015198 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void nonseekable_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__platform_driver_register @ 0001519c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __platform_driver_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__devm_reset_control_get @ 000151a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __devm_reset_control_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_get_rate @ 000151a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_get_rate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rockchip_get_read_margin @ 000151ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rockchip_get_read_margin(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::rockchip_nvmem_cell_read_u8 @ 000151b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void rockchip_nvmem_cell_read_u8(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regmap_read @ 000151b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regmap_read(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_resume @ 000151b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_resume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 000151bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::cancel_delayed_work_sync @ 000151c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void cancel_delayed_work_sync(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_copy_from_user @ 000151c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_copy_from_user(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_timer_key @ 000151c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_timer_key(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_ioremap_resource @ 000151cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_ioremap_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sg_next @ 000151d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sg_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_devfreq_add_device @ 000151d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_devfreq_add_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ktime_get @ 000151d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ktime_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::seq_printf @ 000151dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void seq_printf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_clk_bulk_get_all @ 000151e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_clk_bulk_get_all(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__ktime_divns @ 000151e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __ktime_divns(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hrtimer_cancel @ 000151ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hrtimer_cancel(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_buf_detach @ 000151f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_buf_detach(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_pm_opp_register_set_opp_helper @ 000151f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_pm_opp_register_set_opp_helper(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::seq_puts @ 000151f8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void seq_puts(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_count_phandle_with_args @ 00015200 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_count_phandle_with_args(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regulator_disable @ 00015204 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regulator_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_bulk_prepare @ 00015208 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_bulk_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hrtimer_forward @ 0001520c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hrtimer_forward(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_parse_phandle @ 00015210 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_parse_phandle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_pm_opp_get_voltage @ 00015214 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_pm_opp_get_voltage(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devfreq_add_governor @ 00015218 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devfreq_add_governor(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_fence_release @ 0001521c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_fence_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_pm_opp_set_supported_hw @ 00015224 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_pm_opp_set_supported_hw(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::single_open @ 0001522c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void single_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_device_get_match_data @ 00015230 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_device_get_match_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_disable @ 00015234 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::regulator_set_voltage @ 00015238 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void regulator_set_voltage(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_idle @ 0001523c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_idle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::msleep @ 00015240 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void msleep(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__kmalloc @ 00015244 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


