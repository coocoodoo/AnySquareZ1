// rve.ko — Ghidra 12.1.3 decompiler output
// arch=ARM:LE:32:v8 imageBase=00010000

/* ===== rve_ctx_set_debuf_info_cb @ 00010270 size=18 ===== */

void rve_ctx_set_debuf_info_cb(undefined4 param_1,int param_2)

{
  disableIRQinterrupts();
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  return;
}



/* ===== rve_session_free_remove_idr_cb @ 00010282 size=30 ===== */

undefined4 rve_session_free_remove_idr_cb(undefined4 param_1,undefined4 *param_2)

{
  idr_remove(*(int *)(*DAT_000102a0 + 200) + 0xc,*param_2);
  kfree(param_2);
  return 0;
}



/* ===== _copy_to_user @ 000102a4 size=38 ===== */

uint _copy_to_user(uint param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(((uint)&stack0xfffffff8 & 0xffffe000) + 8);
  if (!CARRY4(param_1,param_3) && param_1 + param_3 <= uVar1) {
    uVar1 = 0;
  }
  if (uVar1 == 0) {
    uVar1 = arm_copy_to_user();
    return uVar1;
  }
  return param_3;
}



/* ===== _copy_from_user @ 000102ca size=58 ===== */

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



/* ===== rve_ioctl_cmd_end @ 00010304 size=86 ===== */

int rve_ioctl_cmd_end(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_b8 [28];
  undefined4 local_9c;
  
  iVar1 = _copy_from_user(auStack_b8,param_1,0xa8);
  uVar2 = DAT_0001035c;
  if (iVar1 == 0) {
    if (*DAT_00010360 != 0) {
      printk(DAT_00010364,local_9c);
    }
    iVar1 = rve_job_commit_by_user_ctx(auStack_b8);
    if (iVar1 < 0) {
      printk(DAT_00010368,local_9c);
      return -0xe;
    }
    iVar3 = _copy_to_user(param_1,auStack_b8,0xa8);
    uVar2 = DAT_0001036c;
    if (iVar3 == 0) {
      return iVar1;
    }
  }
  printk(uVar2);
  return -0xe;
}



/* ===== rve_ioctl_cmd_config @ 00010370 size=80 ===== */

int rve_ioctl_cmd_config(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_b0 [28];
  int local_94;
  
  iVar1 = _copy_from_user(auStack_b0,param_1,0xa8);
  if (iVar1 == 0) {
    if (local_94 == 0) {
      printk(DAT_000103c4);
      return -0x16;
    }
    if (*DAT_000103c8 != 0) {
      printk(DAT_000103cc);
    }
    iVar1 = rve_job_config_by_user_ctx(auStack_b0);
    if (-1 < iVar1) {
      return iVar1;
    }
    printk(DAT_000103d0,local_94);
  }
  else {
    printk(DAT_000103c0);
  }
  return -0xe;
}



/* ===== rve_ioctl @ 000103d4 size=290 ===== */

void rve_ioctl(int param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_e0 [40];
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  char acStack_2c [16];
  int local_1c;
  
  piVar1 = DAT_000104f8;
  puVar7 = local_e0;
  puVar2 = local_e0;
  local_1c = *DAT_000104f8;
  iVar3 = *DAT_000104fc;
  if (iVar3 == 0) {
    printk(DAT_00010500);
    iVar3 = -0x13;
    goto LAB_000103f0;
  }
  if (param_2 == DAT_00010504) {
    local_40 = *(int *)(iVar3 + 0x14);
    if (4 < local_40) {
      local_40 = 5;
    }
    if (local_40 != 0) {
      iVar3 = *(int *)(iVar3 + 0x10);
      puVar5 = (undefined4 *)(iVar3 + 0x58);
      do {
        puVar6 = puVar5 + 2;
        uVar4 = puVar5[1];
        *puVar7 = *puVar5;
        puVar7[1] = uVar4;
        puVar7 = puVar7 + 2;
        puVar5 = puVar6;
      } while (puVar6 != (undefined4 *)(iVar3 + 0x78));
    }
    uVar4 = 0xa4;
LAB_00010474:
    iVar3 = _copy_to_user(param_3,puVar2,uVar4);
    if (iVar3 == 0) {
      iVar3 = 1;
      goto LAB_000103f0;
    }
  }
  else {
    if (param_2 < DAT_00010504) {
      if (param_2 == DAT_00010508) {
        local_e0[0] = rve_internal_ctx_alloc_to_get_idr_id(*(undefined4 *)(param_1 + 0x80));
        iVar3 = _copy_to_user(param_3,local_e0,4);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = -0xe;
        }
        goto LAB_000103f0;
      }
      if (param_2 != DAT_0001050c) {
LAB_00010410:
        printk(DAT_00010510);
        iVar3 = -0x16;
        goto LAB_000103f0;
      }
      local_3c = 1;
      uStack_38 = 0;
      local_34 = 4;
      uStack_30 = 0;
      strncpy(acStack_2c,DAT_00010520,0x10);
      uVar4 = 0x20;
      puVar2 = &local_3c;
      goto LAB_00010474;
    }
    if (param_2 == DAT_00010514) {
      iVar3 = rve_ioctl_cmd_end(param_3);
      goto LAB_000103f0;
    }
    if (param_2 == DAT_00010514 + 1) {
      iVar3 = rve_ioctl_cmd_config(param_3);
      goto LAB_000103f0;
    }
    if (param_2 != DAT_00010518) goto LAB_00010410;
    iVar3 = _copy_from_user(local_e0,param_3,4);
    if (iVar3 == 0) {
      if (*DAT_00010524 != 0) {
        printk(DAT_00010528,local_e0[0]);
      }
      iVar3 = rve_job_cancel_by_user_ctx(local_e0[0]);
      if (-1 < iVar3) goto LAB_000103f0;
      printk(DAT_0001052c,local_e0[0]);
    }
    else {
      printk(DAT_0001051c);
    }
  }
  iVar3 = -0xe;
LAB_000103f0:
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}



/* ===== rve_irq_thread @ 00010530 size=116 ===== */

undefined4 rve_irq_thread(undefined4 param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_2 + 0x160);
  *(uint *)(param_2 + 0x160) = uVar3 + 1;
  *(uint *)(param_2 + 0x164) = *(int *)(param_2 + 0x164) + (uint)(0xfffffffe < uVar3);
  piVar1 = DAT_000105a8;
  uVar2 = DAT_000105a4;
  if (*(int *)(param_2 + 0x34) != 0) {
    uVar3 = *(uint *)(*(int *)(param_2 + 4) + 0x18);
    DataSynchronizationBarrier(0xf);
    if (((*DAT_000105a8 != 0) && (printk(DAT_000105ac,uVar3), (uVar3 & 6) != 0)) &&
       ((uVar2 = DAT_000105b0, (int)(uVar3 << 0x1e) < 0 ||
        (uVar2 = DAT_000105b8, (int)(uVar3 << 0x1d) < 0)))) {
      printk(uVar2);
    }
    if ((uVar3 & 0x8011) != 0x8000) {
      rve_job_done(param_2,0);
      return 1;
    }
    uVar2 = DAT_000105b4;
    if (*piVar1 == 0) {
      return 1;
    }
  }
  printk(uVar2);
  return 1;
}



/* ===== rve_drv_probe @ 000105bc size=634 ===== */

int rve_drv_probe(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  uint *puVar14;
  uint *local_30;
  
  piVar7 = DAT_00010878;
  iVar8 = param_1 + 0x10;
  iVar12 = *DAT_00010878;
  if (*(int *)(param_1 + 0x174) != 0) {
    pcVar2 = (char *)dev_driver_string(iVar8);
    iVar3 = strcmp(pcVar2,DAT_00010838);
    if ((iVar3 == 0) && (iVar3 = of_match_device(DAT_00010840,iVar8), iVar3 != 0)) {
      piVar5 = (int *)devm_kmalloc(iVar8,0x168,0xdc0);
      if (piVar5 == (int *)0x0) {
        uVar4 = dev_driver_string(iVar8);
        printk(DAT_00010844,uVar4);
        return -0xc;
      }
      pcVar2 = (char *)dev_driver_string(iVar8);
      uVar4 = DAT_00010848;
      piVar5[0xe] = (int)(piVar5 + 0xe);
      piVar5[0xf] = (int)(piVar5 + 0xe);
      __init_waitqueue_head(piVar5 + 0x10,uVar4,piVar7 + 1);
      iVar6 = strcmp(pcVar2,DAT_00010838);
      if (iVar6 == 0) {
        piVar5[0x12] = DAT_0001084c;
        piVar5[0x1e] = 1;
      }
      *piVar5 = iVar8;
      piVar7 = (int *)platform_get_resource(param_1,0x200,0);
      if (piVar7 == (int *)0x0) {
        printk(DAT_00010850);
        return -6;
      }
      iVar6 = devm_ioremap(iVar8,*piVar7,(piVar7[1] + 1) - *piVar7);
      piVar5[1] = iVar6;
      if (iVar6 == 0) {
        printk(DAT_00010854);
        return -2;
      }
      piVar7 = *(int **)(iVar3 + 0xc0);
      iVar3 = platform_get_irq(param_1,0);
      if (iVar3 < 0) {
        _dev_err(iVar8,DAT_00010858,*(undefined4 *)piVar7[2]);
        return iVar3;
      }
      piVar5[0x15] = iVar3;
      printk(DAT_0001085c,*(undefined4 *)piVar7[2],iVar3);
      uVar10 = *(undefined4 *)(piVar7[2] + 4);
      uVar13 = *(undefined4 *)(piVar7[2] + 8);
      uVar4 = dev_driver_string(iVar8);
      iVar3 = devm_request_threaded_irq(iVar8,iVar3,uVar10,uVar13,0x80,uVar4,piVar5);
      if (iVar3 < 0) {
        printk(DAT_00010864,*(undefined4 *)piVar7[2],iVar3);
        return iVar3;
      }
      puVar11 = (uint *)(piVar5 + 2);
      puVar14 = puVar11;
      for (iVar3 = 0; iVar3 < piVar7[1]; iVar3 = iVar3 + 1) {
        uVar9 = devm_clk_get(iVar8,*(undefined4 *)(*piVar7 + iVar3 * 4));
        if (0xfffff000 < uVar9) {
          printk(DAT_00010868,*(undefined4 *)(*piVar7 + iVar3 * 4));
        }
        *puVar14 = uVar9;
        puVar14 = puVar14 + 1;
      }
      bVar1 = *(byte *)(param_1 + 0x84);
      piVar5[0xc] = piVar7[1];
      *(byte *)(param_1 + 0x84) = bVar1 | 1;
      *(int **)(param_1 + 0x50) = piVar5;
      *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) | 1;
      pm_runtime_enable(iVar8);
      iVar3 = __pm_runtime_resume(*piVar5,4);
      if (iVar3 < 0) {
        printk(DAT_00010860,iVar3);
LAB_0001073e:
        *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) & 0xfe;
        *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) & 0xfe;
        __pm_runtime_disable(iVar8,1);
        return iVar3;
      }
      iVar6 = 0;
      local_30 = puVar11;
      do {
        if (piVar5[0xc] <= iVar6) {
          (**(code **)piVar5[0x12])(piVar5);
          printk(DAT_00010870,iVar6,piVar5 + 0x1a);
          iVar3 = *(int *)(iVar12 + 0x14);
          *(int **)(iVar12 + (iVar3 + 4) * 4) = piVar5;
          *(int *)(iVar12 + 0x14) = iVar3 + 1;
          iVar12 = piVar5[0xc];
          while (iVar12 = iVar12 + -1, -1 < iVar12) {
            uVar9 = puVar11[iVar12];
            if (uVar9 < 0xfffff001) {
              clk_disable(uVar9);
              clk_unprepare(uVar9);
            }
          }
          __pm_runtime_idle(iVar8,4);
          printk(DAT_00010874);
          return 0;
        }
        uVar9 = *local_30;
        if (uVar9 < 0xfffff001) {
          iVar3 = clk_prepare(uVar9);
          if (iVar3 == 0) {
            iVar3 = clk_enable(uVar9);
            if (iVar3 == 0) goto LAB_000107d2;
            clk_unprepare(uVar9);
          }
          if (iVar3 < 0) {
            printk(DAT_0001086c);
            goto LAB_0001073e;
          }
        }
LAB_000107d2:
        iVar6 = iVar6 + 1;
        local_30 = local_30 + 1;
      } while( true );
    }
    uVar4 = dev_driver_string(iVar8);
    _dev_err(iVar8,DAT_0001083c,uVar4);
  }
  return -0x16;
}



/* ===== rve_irq_handler @ 0001087c size=72 ===== */

undefined4 rve_irq_handler(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(*(int *)(param_2 + 4) + 0x18);
  DataSynchronizationBarrier(0xf);
  if ((uVar2 & 6) != 0) {
    printk(DAT_000108c4,uVar2,param_3,*(int *)(param_2 + 4),param_4);
    uVar1 = DAT_000108c8;
    if (((int)(uVar2 << 0x1e) < 0) || (uVar1 = DAT_000108cc, (int)(uVar2 << 0x1d) < 0)) {
      printk(uVar1);
    }
    (**(code **)(*(int *)(param_2 + 0x48) + 0xc))(param_2);
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(*(int *)(param_2 + 4) + 4) = 0x30000;
  return 2;
}



/* ===== rve_open @ 000108d0 size=138 ===== */

undefined4 rve_open(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  local_20 = param_1;
  iStack_1c = param_2;
  uStack_18 = param_3;
  puVar1 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(DAT_0001095c + 0xc),0xdc0);
  iVar3 = *(int *)(*DAT_00010960 + 200);
  if (iVar3 == 0) {
    printk(DAT_00010964);
    kfree(puVar1);
  }
  else {
    mutex_lock(iVar3);
    idr_preload(0xcc0);
    local_20 = 0xa20;
    uVar2 = idr_alloc(iVar3 + 0xc,puVar1,1,0);
    *puVar1 = uVar2;
    *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
    mutex_unlock(iVar3);
    puVar1[1] = *(undefined4 *)(*(int *)(((uint)&local_20 & 0xffffe000) + 0xc) + 0x1dc);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 **)(param_2 + 0x80) = puVar1;
      uVar2 = nonseekable_open(param_1,param_2);
      return uVar2;
    }
  }
  return 0xfffffff4;
}



/* ===== hrtimer_handler @ 00010968 size=278 ===== */

undefined4 hrtimer_handler(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  longlong lVar14;
  undefined8 uVar15;
  
  piVar4 = DAT_00010a88;
  iVar7 = *DAT_00010a88;
  lVar14 = ktime_get();
  iVar8 = 0;
  while (iVar8 < *(int *)(iVar7 + 0x14)) {
    iVar9 = *(int *)(iVar7 + (iVar8 + 4) * 4);
    disableIRQinterrupts();
    iVar8 = *(int *)(iVar9 + 0x34);
    if (iVar8 != 0) {
      uVar3 = lVar14 - *(longlong *)(iVar8 + 0x38);
      uVar2 = uVar3;
      if ((longlong)uVar3 < 0) {
        uVar2 = CONCAT44(-(int)(uVar3 >> 0x20) - (uint)((int)uVar3 != 0),-(int)uVar3);
      }
      uVar11 = (uint)(uVar2 >> 0x20);
      lVar1 = (ulonglong)DAT_00010a80 * (uVar2 & 0xffffffff);
      uVar5 = (uint)((ulonglong)lVar1 >> 0x20);
      bVar13 = CARRY4((uint)lVar1,DAT_00010a80);
      uVar2 = (ulonglong)DAT_00010a84 * (uVar2 & 0xffffffff) +
              (ulonglong)
              CONCAT14(CARRY4(uVar5,DAT_00010a84) || CARRY4(uVar5 + DAT_00010a84,(uint)bVar13),
                       uVar5 + DAT_00010a84 + bVar13);
      uVar5 = (uint)(uVar2 >> 0x20);
      uVar12 = (uint)((ulonglong)DAT_00010a80 * (ulonglong)uVar11 + (uVar2 & 0xffffffff) >> 0x20);
      lVar1 = (ulonglong)DAT_00010a84 * (ulonglong)uVar11 +
              (ulonglong)CONCAT14(CARRY4(uVar12,uVar5),uVar12 + uVar5);
      uVar5 = (uint)lVar1 >> 9 | (int)((ulonglong)lVar1 >> 0x20) << 0x17;
      if ((longlong)uVar3 < 0) {
        uVar5 = -uVar5;
      }
      *(uint *)(iVar9 + 0x7c) = uVar5 + *(int *)(iVar9 + 0x7c);
      *(longlong *)(iVar8 + 0x38) = lVar14;
    }
    uVar6 = *(undefined4 *)(iVar9 + 0x7c);
    *(undefined4 *)(iVar9 + 0x154) = 0;
    *(undefined4 *)(iVar9 + 0x158) = 0;
    *(undefined4 *)(iVar9 + 0x15c) = 0;
    *(undefined4 *)(iVar9 + 0x7c) = 0;
    *(undefined4 *)(iVar9 + 0x80) = uVar6;
    iVar8 = iVar9;
    do {
      iVar10 = iVar8 + 0x14;
      if (0 < *(int *)(iVar8 + 0x88)) {
        *(undefined4 *)(iVar8 + 0x8c) = 0;
      }
      iVar8 = iVar10;
    } while (iVar10 != iVar9 + 200);
    disableIRQinterrupts();
    idr_for_each(*(undefined4 *)(*piVar4 + 0xc4),DAT_00010a8c);
    iVar8 = 0xb;
  }
  iVar7 = piVar4[2];
  iVar8 = piVar4[3];
  uVar15 = (**(code **)(*(int *)(param_1 + 0x24) + 0x1c))();
  uVar6 = (undefined4)((ulonglong)uVar15 >> 0x20);
  hrtimer_forward(param_1,uVar6,(int)uVar15,uVar6,iVar7,iVar8);
  return 1;
}



/* ===== rve_release @ 00010a90 size=164 ===== */

undefined4 rve_release(undefined4 param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int local_1c;
  
  piVar2 = DAT_00010b34;
  puVar5 = *(undefined4 **)(param_2 + 0x80);
  uVar6 = *(undefined4 *)(*DAT_00010b34 + 0xc4);
  disableIRQinterrupts();
  local_1c = 0;
  while (iVar3 = idr_get_next(uVar6,&local_1c), iVar3 != 0) {
    if (puVar5 == *(undefined4 **)(iVar3 + 4)) {
      piVar4 = (int *)(iVar3 + 0x3c);
      HintPreloadData(piVar4);
      do {
        ExclusiveAccess(piVar4);
        iVar3 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar3 + -1;
      if (iVar3 == 1) {
        rve_internal_ctx_kref_release();
      }
      else if (iVar3 < 1) {
        refcount_warn_saturate(piVar4,3,iVar3 + -1,iVar3,param_1);
      }
    }
    disableIRQinterrupts();
    local_1c = local_1c + 1;
  }
  rve_job_session_destroy(puVar5);
  iVar3 = *(int *)(*piVar2 + 200);
  mutex_lock(iVar3);
  *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + -1;
  idr_remove(iVar3 + 0xc,*puVar5);
  mutex_unlock(iVar3);
  kfree(puVar5);
  return 0;
}



/* ===== rve_drv_remove @ 00010b38 size=38 ===== */

undefined4 rve_drv_remove(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) & 0xfe;
  bVar1 = *(byte *)(param_1 + 0x8c) & 0xfe;
  *(byte *)(param_1 + 0x8c) = bVar1;
  __pm_runtime_disable(param_1 + 0x10,1,param_3,bVar1,param_4);
  return 0;
}



/* ===== rve_power_enable @ 00010b5e size=134 ===== */

int rve_power_enable(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  iVar2 = 0;
  __pm_runtime_resume(*param_1,4);
  puVar3 = param_1 + 2;
LAB_00010b72:
  do {
    do {
      if ((int)param_1[0xc] <= iVar2) {
        param_1[0x54] = param_1[0x54] + 1;
        return 0;
      }
      puVar4 = puVar3 + 1;
      uVar5 = *puVar3;
      iVar2 = iVar2 + 1;
      puVar3 = puVar4;
    } while (0xfffff000 < uVar5);
    iVar1 = clk_prepare(uVar5);
    if (iVar1 == 0) {
      iVar1 = clk_enable(uVar5);
      if (iVar1 == 0) goto LAB_00010b72;
      clk_unprepare(uVar5);
    }
    if (iVar1 < 0) {
      puVar3 = param_1 + iVar2;
      while (puVar3 != param_1 + 1) {
        puVar4 = puVar3 + -1;
        uVar5 = *puVar3;
        puVar3 = puVar4;
        if (uVar5 < 0xfffff001) {
          clk_disable(uVar5);
          clk_unprepare(uVar5);
        }
      }
      __pm_runtime_suspend(*param_1,4);
      return iVar1;
    }
  } while( true );
}



/* ===== rve_power_disable @ 00010be4 size=64 ===== */

undefined4 rve_power_disable(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_1[0xc];
  while (iVar1 = iVar2 + -1, -1 < iVar1) {
    uVar3 = param_1[iVar2 + 1];
    iVar2 = iVar1;
    if (uVar3 < 0xfffff001) {
      clk_disable(uVar3);
      clk_unprepare(uVar3);
    }
  }
  __pm_runtime_suspend(*param_1,4);
  param_1[0x54] = param_1[0x54] + -1;
  return 0;
}



/* ===== __div64_32 @ 00010c28 size=22 ===== */

undefined4 __div64_32(undefined4 *param_1)

{
  undefined4 extraout_r1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  
  __do_div64(*param_1,param_1[1]);
  *param_1 = extraout_r2;
  param_1[1] = extraout_r3;
  return extraout_r1;
}



/* ===== __arch_xprod_64 @ 00010c3e size=114 ===== */

longlong __arch_xprod_64(uint param_1,uint param_2,uint param_3,uint param_4,char param_5)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_5 == '\0') {
    uVar3 = (uint)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20);
    uVar2 = 0;
    if ((param_1 & 0x80000000) == 0 && (param_2 & 0x80000000) == 0) {
LAB_00010c90:
      return (ulonglong)param_2 * (ulonglong)param_4 +
             ((ulonglong)param_1 * (ulonglong)param_4 +
              (ulonglong)param_2 * (ulonglong)param_3 + (ulonglong)uVar3 >> 0x20);
    }
  }
  else {
    if ((param_1 & 0x80000000) == 0 && (param_2 & 0x80000000) == 0) {
      uVar3 = (uint)((ulonglong)param_1 * (ulonglong)param_3 + CONCAT44(param_2,param_1) >> 0x20);
      goto LAB_00010c90;
    }
    uVar2 = (uint)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20);
    bVar4 = CARRY4((uint)((ulonglong)param_1 * (ulonglong)param_3),param_1);
    uVar3 = uVar2 + param_2 + (uint)bVar4;
    uVar2 = (uint)(CARRY4(uVar2,param_2) || CARRY4(uVar2 + param_2,(uint)bVar4));
  }
  uVar1 = (ulonglong)param_2 * (ulonglong)param_3 + CONCAT44(uVar2,uVar3);
  uVar3 = (uint)(uVar1 >> 0x20);
  uVar2 = (uint)((ulonglong)param_1 * (ulonglong)param_4 + (uVar1 & 0xffffffff) >> 0x20);
  return (ulonglong)param_2 * (ulonglong)param_4 +
         (ulonglong)CONCAT14(CARRY4(uVar2,uVar3),uVar2 + uVar3);
}



/* ===== IS_ERR_OR_NULL @ 00010cb0 size=18 ===== */

bool IS_ERR_OR_NULL(uint param_1)

{
  if (param_1 == 0) {
    return true;
  }
  return 0xfffff000 < param_1;
}



/* ===== rve_internal_ctx_free_remove_idr_cb @ 00010cc2 size=28 ===== */

undefined4 rve_internal_ctx_free_remove_idr_cb(undefined4 param_1,int param_2)

{
  idr_remove(*(undefined4 *)(*DAT_00010ce0 + 0xc4),*(undefined4 *)(param_2 + 0x18));
  kfree(param_2);
  return 0;
}



/* ===== kref_put @ 00010ce4 size=48 ===== */

undefined4 kref_put(int *param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  HintPreloadData(param_1);
  do {
    ExclusiveAccess(param_1);
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2 + -1;
  if (iVar2 == 1) {
    (*param_2)();
    uVar3 = 1;
  }
  else {
    if (iVar2 < 1) {
      refcount_warn_saturate(param_1,3,iVar2 + -1,param_4,param_4);
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== rve_job_free @ 00010d14 size=28 ===== */

void rve_job_free(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    kref_put(*(int *)(param_1 + 0x1c) + 0x24,DAT_00010d30);
  }
  free_pages(param_1,0);
  return;
}



/* ===== ktime_to_us @ 00010d34 size=72 ===== */

ulonglong ktime_to_us(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  
  iVar1 = param_2;
  if (param_2 < 0) {
    bVar2 = param_1 != 0;
    param_1 = -param_1;
    iVar1 = -param_2 - (uint)bVar2;
  }
  uVar3 = __arch_xprod_64(DAT_00010d80,DAT_00010d84,param_1,iVar1,1,param_2,param_3);
  uVar3 = uVar3 >> 9;
  if (param_2 < 0) {
    uVar3 = CONCAT44(-(int)(uVar3 >> 0x20) - (uint)((int)uVar3 != 0),-(int)uVar3);
  }
  return uVar3;
}



/* ===== rve_job_cleanup @ 00010d88 size=50 ===== */

undefined4 rve_job_cleanup(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = ktime_get();
  if (*DAT_00010dbc != 0) {
    lVar1 = lVar1 - *(longlong *)(param_1 + 0x28);
    uVar2 = ktime_to_us((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
    printk(DAT_00010dc0,*(undefined4 *)(param_1 + 0x50),(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  }
  rve_job_free(param_1);
  return 0;
}



/* ===== rve_scheduler_get_pending_job_list @ 00010dc4 size=24 ===== */

int rve_scheduler_get_pending_job_list(int param_1)

{
  int *piVar1;
  
  disableIRQinterrupts();
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 == (int *)(param_1 + 0x38)) {
    piVar1 = (int *)0x0;
  }
  return (int)piVar1;
}



/* ===== rve_scheduler_get_running_job @ 00010ddc size=14 ===== */

undefined4 rve_scheduler_get_running_job(int param_1)

{
  disableIRQinterrupts();
  return *(undefined4 *)(param_1 + 0x34);
}



/* ===== rve_job_get_scheduler @ 00010dea size=4 ===== */

undefined4 rve_job_get_scheduler(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* ===== rve_job_get_internal_ctx @ 00010dee size=4 ===== */

undefined4 rve_job_get_internal_ctx(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* ===== rve_job_session_destroy @ 00010df2 size=98 ===== */

void rve_job_session_destroy(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  piVar2 = DAT_00010e54;
  for (iVar6 = 0; iVar6 < *(int *)(*piVar2 + 0x14); iVar6 = iVar6 + 1) {
    disableIRQinterrupts();
    piVar1 = (int *)(*(int *)(*piVar2 + (iVar6 + 4) * 4) + 0x38);
    piVar3 = (int *)*piVar1;
    piVar7 = (int *)*piVar3;
    while (piVar3 != piVar1) {
      if (piVar3[3] == param_1) {
        iVar4 = *piVar3;
        piVar5 = (int *)piVar3[1];
        *(int **)(iVar4 + 4) = piVar5;
        *piVar5 = iVar4;
        *piVar3 = 0x100;
        piVar3[1] = 0x122;
        rve_job_free();
        disableIRQinterrupts();
      }
      piVar3 = piVar7;
      piVar7 = (int *)*piVar7;
    }
  }
  return;
}



/* ===== rve_internal_ctx_lookup @ 00010e58 size=34 ===== */

int rve_internal_ctx_lookup(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  disableIRQinterrupts();
  iVar1 = idr_find();
  if (iVar1 == 0) {
    printk(DAT_00010e7c,param_2);
  }
  return iVar1;
}



/* ===== rve_job_config_by_user_ctx @ 00010e80 size=204 ===== */

undefined4
rve_job_config_by_user_ctx(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  size_t __n;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = rve_internal_ctx_lookup
                    (*(undefined4 *)(*DAT_00010f4c + 0xc4),*(undefined4 *)(param_1 + 0x1c));
  iVar2 = IS_ERR_OR_NULL();
  if (iVar2 == 0) {
    disableIRQinterrupts();
    if (*(char *)(iVar1 + 0x24) == '\0') {
      *(undefined4 *)(param_1 + 0x18) = 1;
      if (*(int *)(iVar1 + 8) == 0) {
        iVar2 = kmem_cache_alloc(*(undefined4 *)(DAT_00010f58 + 0x20),0xcc0);
        *(int *)(iVar1 + 8) = iVar2;
        if (iVar2 == 0) {
          printk(DAT_00010f5c);
          return 0xfffffff4;
        }
      }
      iVar2 = *(int *)(iVar1 + 8);
      uVar6 = *(int *)(param_1 + 0x18) * 0xe8;
      uVar4 = *(uint *)(param_1 + 8);
      if (-1 < (int)uVar6) {
        uVar5 = *(uint *)(((uint)&uStack_18 & 0xffffe000) + 8);
        if (!CARRY4(uVar4,uVar6) && uVar4 + uVar6 <= uVar5) {
          uVar5 = 0;
        }
        __n = uVar6;
        if (uVar5 == 0) {
          __n = arm_copy_from_user(iVar2,uVar4,uVar6);
        }
        if (__n == 0) {
          *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x24);
          *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
          *(uint *)(iVar1 + 0x2c) = (uint)*(byte *)(param_1 + 0x20);
          *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 0x10);
          return 0;
        }
        memset((void *)(iVar2 + (uVar6 - __n)),0,__n);
      }
      printk(DAT_00010f60);
      kfree(*(undefined4 *)(iVar1 + 8));
    }
    else {
      printk(DAT_00010f54);
    }
    uVar3 = 0xfffffff2;
  }
  else {
    printk(DAT_00010f50,*(undefined4 *)(param_1 + 0x1c));
    uVar3 = 0xffffffea;
  }
  return uVar3;
}



/* ===== rve_job_cancel_by_user_ctx @ 00010f64 size=56 ===== */

undefined4
rve_job_cancel_by_user_ctx
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r3;
  
  rve_internal_ctx_lookup
            (*(undefined4 *)(*DAT_00010f9c + 0xc4),param_1,param_3,*DAT_00010f9c,param_4);
  iVar1 = IS_ERR_OR_NULL();
  if (iVar1 == 0) {
    kref_put(extraout_r3 + 0x3c,DAT_00010fa4);
    uVar2 = 0;
  }
  else {
    printk(DAT_00010fa0,param_1);
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



/* ===== rve_internal_ctx_signal @ 00010fa8 size=158 ===== */

undefined4 rve_internal_ctx_signal(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  uint uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  byte bVar10;
  uint in_cpsr;
  
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    printk(DAT_0001104c,DAT_00011048,0x33f);
    uVar1 = 0xfffffff2;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14);
    iVar2 = IS_ERR_OR_NULL(iVar4);
    if (iVar2 == 0) {
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x10);
      disableIRQinterrupts();
      uVar3 = *(int *)(iVar4 + 0x20) + 1;
      *(uint *)(iVar4 + 0x20) = uVar3;
      bVar10 = (in_cpsr >> 0x1b & 1) != 0;
      cVar8 = *(uint *)(iVar4 + 0xc) <= uVar3;
      cVar9 = SBORROW4(uVar3,*(uint *)(iVar4 + 0xc));
      if ((bool)cVar8) {
        if (*(int *)(iVar4 + 0x38) != 0) {
          dma_fence_signal();
        }
        *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 1;
        cVar7 = '\x01';
        cVar6 = '\0';
        __wake_up(iVar5 + 0x40,3,1,0);
        disableIRQinterrupts();
        *(undefined1 *)(iVar4 + 0x24) = 0;
        *(undefined4 *)(iVar4 + 0x38) = 0;
        if ((*(int *)(param_1 + 0x40) << 0x1e < 0) &&
           (rve_job_cleanup(param_1,extraout_r1,
                            (uint)(byte)(cVar6 << 4 | cVar7 << 3 | cVar8 << 2 | cVar9 << 1 | bVar10)
                            << 0x1b), *(int *)(iVar4 + 0x28) == 0)) {
          kref_put(iVar4 + 0x3c,DAT_00011054);
          return 0;
        }
      }
      uVar1 = 0;
    }
    else {
      printk(DAT_00011050);
      uVar1 = 0xffffffea;
    }
  }
  return uVar1;
}



/* ===== rve_job_next.part.2 @ 00011058 size=192 ===== */

void rve_job_next_part_2(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  char in_NG;
  char in_ZR;
  char in_CY;
  char in_OV;
  byte in_Q;
  uint in_cpsr;
  uint uVar9;
  
  uVar3 = DAT_00011130;
  uVar2 = DAT_0001112c;
  piVar1 = DAT_00011128;
  while( true ) {
    disableIRQinterrupts();
    if ((*(int *)(param_1 + 0x34) != 0) || (*(int **)(param_1 + 0x38) == (int *)(param_1 + 0x38))) {
      return;
    }
    piVar7 = *(int **)(param_1 + 0x38);
    iVar5 = *piVar7;
    piVar6 = (int *)piVar7[1];
    *(int **)(iVar5 + 4) = piVar6;
    *piVar6 = iVar5;
    *piVar7 = (int)piVar7;
    piVar7[1] = (int)piVar7;
    *(int **)(param_1 + 0x34) = piVar7;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    uVar9 = in_cpsr & 0xffffff00;
    iVar8 = piVar7[2];
    iVar5 = rve_power_enable(iVar8,iVar5,
                             (uint)(byte)(in_NG << 4 | in_ZR << 3 | in_CY << 2 | in_OV << 1 | in_Q)
                             << 0x1b);
    if (iVar5 < 0) {
      printk(DAT_00011118);
    }
    else {
      iVar5 = (**(code **)(*(int *)(iVar8 + 0x48) + 8))(piVar7);
      uVar4 = DAT_00011124;
      if ((iVar5 < 0) ||
         (iVar5 = (**(code **)(*(int *)(iVar8 + 0x48) + 4))(piVar7,iVar8), uVar4 = uVar3, iVar5 < 0)
         ) {
        printk(uVar4);
        rve_power_disable(iVar8);
      }
      else if (*piVar1 != 0) {
        printk(uVar2,piVar7[0x11],piVar7[0x12]);
      }
    }
    piVar7[0x13] = iVar5;
    if (-1 < iVar5) break;
    printk(DAT_00011120,DAT_0001111c);
    disableIRQinterrupts();
    *(undefined4 *)(param_1 + 0x34) = 0;
    in_cpsr = uVar9 & 0xffffff00;
    in_Q = (uVar9 >> 0x1b & 1) != 0;
    in_OV = (uVar9 >> 0x1c & 1) != 0;
    in_CY = (uVar9 >> 0x1d & 1) != 0;
    in_ZR = (uVar9 >> 0x1e & 1) != 0;
    in_NG = (int)uVar9 < 0;
    rve_internal_ctx_signal(piVar7);
  }
  return;
}



/* ===== rve_job_finish_and_next @ 00011134 size=96 ===== */

void rve_job_finish_and_next(int param_1,undefined4 param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar5 = ktime_get();
  piVar2 = DAT_00011194;
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  uVar4 = *(undefined4 *)(param_1 + 8);
  if (*piVar2 != 0) {
    lVar1 = lVar5 - *(longlong *)(param_1 + 0x30);
    uVar6 = ktime_to_us((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
    uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
    printk(DAT_00011198,uVar3,(int)uVar6,uVar3);
    lVar5 = lVar5 - *(longlong *)(param_1 + 0x28);
    uVar6 = ktime_to_us((int)lVar5,(int)((ulonglong)lVar5 >> 0x20));
    printk(DAT_0001119c,*(undefined4 *)(param_1 + 0x50),(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  }
  rve_internal_ctx_signal(param_1);
  rve_job_next_part_2(uVar4);
  rve_power_disable(uVar4);
  return;
}



/* ===== rve_job_done @ 000111a0 size=368 ===== */

void rve_job_done(int param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  
  iVar13 = param_1;
  iVar6 = param_2;
  lVar12 = ktime_get();
  disableIRQinterrupts();
  iVar11 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = 0;
  lVar1 = lVar12 - *(longlong *)(iVar11 + 0x38);
  iVar2 = ktime_to_us((int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  iVar4 = 0;
  *(int *)(param_1 + 0x7c) = iVar2 + *(int *)(param_1 + 0x7c);
  iVar7 = *(int *)(iVar11 + 8);
  iVar2 = iVar7;
  while( true ) {
    if (*(int *)(iVar2 + 0x88) == 0) {
      *(undefined4 *)(iVar2 + 0x88) = *(undefined4 *)(iVar11 + 0x50);
    }
    if (*(int *)(iVar2 + 0x88) == *(int *)(iVar11 + 0x50)) break;
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 0x14;
    if (iVar4 == 10) {
      iVar2 = 0;
      uVar8 = 0;
      iVar4 = 0;
      iVar6 = iVar7 + 0x8c;
      do {
        if (iVar4 == 0) {
          uVar8 = *(uint *)(iVar7 + 0x8c);
        }
        else if (*(uint *)(iVar6 + iVar4 * 0x14) < uVar8) {
          iVar2 = iVar4;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 10);
      iVar4 = iVar2 * 0x14 + iVar7;
      *(int *)(iVar4 + 0x88) = *(int *)(iVar11 + 0x50);
      lVar1 = lVar12 - *(longlong *)(iVar11 + 0x30);
      iVar2 = ktime_to_us((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),iVar7,10,iVar13,iVar6,param_3);
      *(int *)(iVar4 + 0x8c) = iVar2 + *(int *)(iVar4 + 0x8c);
LAB_00011206:
      disableIRQinterrupts();
      iVar2 = *(int *)(iVar11 + 0x14);
      uVar10 = *(uint *)(iVar2 + 0x50);
      uVar8 = *(uint *)(iVar2 + 0x54);
      if (uVar8 < uVar10) {
        *(uint *)(iVar2 + 0x54) = uVar10;
      }
      else {
        *(uint *)(iVar2 + 0x54) = uVar8;
      }
      lVar1 = lVar12 - *(longlong *)(iVar11 + 0x30);
      uVar3 = ktime_to_us((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),uVar8,uVar10,iVar13,iVar6,
                          param_3);
      *(undefined4 *)(*(int *)(iVar11 + 0x14) + 0x50) = uVar3;
      iVar2 = *(int *)(iVar11 + 0x14);
      *(int *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + *(int *)(iVar2 + 0x50);
      lVar12 = lVar12 - *(longlong *)(iVar11 + 0x28);
      uVar3 = ktime_to_us((int)lVar12,(int)((ulonglong)lVar12 >> 0x20));
      *(undefined4 *)(*(int *)(iVar11 + 0x14) + 0x4c) = uVar3;
      iVar2 = 0x200;
      puVar9 = (undefined4 *)(*(int *)(iVar11 + 0x10) + 0x44);
      do {
        puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2);
        DataSynchronizationBarrier(0xf);
        iVar2 = iVar2 + 4;
        puVar9 = puVar9 + 1;
        *puVar9 = *puVar5;
      } while (iVar2 != 0x2a0);
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x18);
      DataSynchronizationBarrier(0xf);
      rve_get_monitor_info(iVar11);
      if (*DAT_00011310 != 0) {
        printk(DAT_00011314,uVar3);
      }
      DataSynchronizationBarrier(0xe);
      arm_heavy_mb();
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x10c) = 0;
      rve_job_finish_and_next(iVar11,param_2);
      return;
    }
  }
  iVar7 = iVar4 * 0x14 + iVar7;
  *(int *)(iVar7 + 0x8c) = (*(int *)(iVar11 + 0x30) - (int)lVar12) + *(int *)(iVar7 + 0x8c);
  goto LAB_00011206;
}



/* ===== rve_internal_ctx_kref_release @ 00011318 size=290 ===== */

void rve_internal_ctx_kref_release(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  char cVar8;
  int *unaff_r11;
  int *piVar9;
  longlong lVar10;
  
  lVar10 = ktime_get();
  piVar2 = DAT_0001143c;
  disableIRQinterrupts();
  cVar1 = *(char *)(param_1 + -0x18);
  if ((cVar1 != '\0') && (*(uint *)(param_1 + -0x1c) < *(uint *)(param_1 + -0x30))) {
    cVar8 = '\0';
    for (iVar3 = 0; iVar6 = *piVar2, iVar3 < *(int *)(iVar6 + 0x14); iVar3 = iVar3 + 1) {
      iVar6 = *(int *)(iVar6 + (iVar3 + 4) * 4);
      disableIRQinterrupts();
      piVar7 = *(int **)(iVar6 + 0x38);
      piVar9 = (int *)*piVar7;
      while (piVar7 != (int *)(iVar6 + 0x38)) {
        if (*(int *)(param_1 + -0x24) == *(int *)(piVar7[5] + 0x18)) {
          iVar4 = *piVar7;
          piVar5 = (int *)piVar7[1];
          *(int **)(iVar4 + 4) = piVar5;
          *piVar5 = iVar4;
          *piVar7 = (int)piVar7;
          piVar7[1] = (int)piVar7;
          *(int *)(iVar6 + 0x50) = *(int *)(iVar6 + 0x50) + -1;
          unaff_r11 = piVar7;
        }
        piVar7 = piVar9;
        piVar9 = (int *)*piVar9;
      }
      piVar7 = *(int **)(iVar6 + 0x34);
      if ((piVar7 != (int *)0x0) &&
         (unaff_r11 = piVar7, *(int *)(piVar7[5] + 0x18) == *(int *)(param_1 + -0x24))) {
        *(undefined4 *)(iVar6 + 0x34) = 0;
        iVar4 = ktime_to_us((int)(lVar10 - *(longlong *)(piVar7 + 0xe)),
                            (int)((ulonglong)(lVar10 - *(longlong *)(piVar7 + 0xe)) >> 0x20));
        *(int *)(iVar6 + 0x7c) = iVar4 + *(int *)(iVar6 + 0x7c);
        cVar8 = cVar1;
      }
      if (cVar8 != '\0') {
        printk(DAT_00011440,*(undefined4 *)(iVar6 + 0x78));
        (**(code **)(*(int *)(iVar6 + 0x48) + 0xc))(iVar6);
        rve_job_finish_and_next(unaff_r11,0);
      }
    }
  }
  kfree(*(undefined4 *)(param_1 + -0x34));
  iVar3 = *(int *)(*piVar2 + 0xc4);
  disableIRQinterrupts();
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + -1;
  idr_remove(iVar3,*(undefined4 *)(param_1 + -0x24));
  kfree(param_1 + -0x3c);
  return;
}



/* ===== rve_job_schedule @ 00011444 size=270 ===== */

int rve_job_schedule(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar5 = param_1[2];
  if (iVar5 == 0) {
    printk(DAT_00011564,DAT_00011560,0x17b,param_4,param_1,param_2);
    return 0;
  }
  lVar7 = ktime_get();
  disableIRQinterrupts();
  iVar6 = *(int *)(iVar5 + 0x34);
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x40) << 0x1e < 0)) {
    lVar7 = lVar7 - *(longlong *)(iVar6 + 0x30);
    lVar1 = lVar7;
    if (lVar7 < 0) {
      lVar1 = CONCAT44(-(int)((ulonglong)lVar7 >> 0x20) - (uint)((int)lVar7 != 0),-(int)lVar7);
    }
    uVar8 = __arch_xprod_64(DAT_00011558,DAT_0001155c,(int)lVar1,(int)((ulonglong)lVar1 >> 0x20),0);
    if ((-1 < lVar7) && ((int)((uVar8 >> 0x12) >> 0x20) != 0 || 499 < (uint)(uVar8 >> 0x12))) {
      *(undefined4 *)(iVar5 + 0x34) = 0;
      (**(code **)(*(int *)(iVar5 + 0x48) + 0xc))(iVar5);
      rve_internal_ctx_signal(iVar6);
      rve_power_disable(iVar5);
    }
  }
  disableIRQinterrupts();
  piVar3 = (int *)(iVar5 + 0x38);
  if ((piVar3 != *(int **)(iVar5 + 0x38)) && (param_1[0x11] != 0)) {
    bVar2 = false;
    for (piVar4 = *(int **)(iVar5 + 0x38); piVar3 != piVar4; piVar4 = (int *)*piVar4) {
      if (piVar4[0x11] < param_1[0x11]) {
        if (!bVar2) {
          iVar6 = *piVar4;
          *(int **)(iVar6 + 4) = param_1;
          *param_1 = iVar6;
          param_1[1] = (int)piVar4;
          *piVar4 = (int)param_1;
        }
LAB_00011540:
        piVar4[0x11] = piVar4[0x11] + 1;
        bVar2 = true;
      }
      else if (bVar2) goto LAB_00011540;
    }
    if (bVar2) goto LAB_0001151a;
  }
  piVar4 = *(int **)(iVar5 + 0x3c);
  *(int **)(iVar5 + 0x3c) = param_1;
  *param_1 = (int)piVar3;
  param_1[1] = (int)piVar4;
  *piVar4 = (int)param_1;
LAB_0001151a:
  *(int *)(iVar5 + 0x50) = *(int *)(iVar5 + 0x50) + 1;
  rve_job_next_part_2(iVar5);
  return iVar5;
}



/* ===== rve_job_commit @ 00011568 size=562 ===== */

int rve_job_commit(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [24];
  
  iVar1 = get_zeroed_page(0xcc4);
  if (iVar1 == 0) {
    printk(DAT_0001179c);
    return -0xc;
  }
  *(int *)iVar1 = iVar1;
  *(int *)(iVar1 + 4) = iVar1;
  uVar6 = ktime_get();
  *(undefined8 *)(iVar1 + 0x28) = uVar6;
  *(undefined4 *)(iVar1 + 0x50) =
       *(undefined4 *)(*(int *)(((uint)auStack_30 & 0xffffe000) + 0xc) + 0x1d8);
  *(int *)(iVar1 + 0x10) = param_1[7] * 0xe8 + param_1[2];
  iVar4 = *(int *)(*DAT_000117a0 + 0x10);
  *(int *)(iVar1 + 8) = iVar4;
  uVar3 = *(undefined4 *)(iVar4 + 0x78);
  *(int **)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x48) = uVar3;
  *param_1 = iVar4;
  *(int *)(iVar1 + 0xc) = param_1[1];
  iVar4 = param_1[0xb];
  if (0 < iVar4) {
    if (6 < iVar4) {
      iVar4 = 6;
    }
    *(int *)(iVar1 + 0x44) = iVar4;
  }
  if (param_1[4] != 2) {
    if (param_1[4] != 4) goto LAB_0001163a;
    iVar4 = rve_job_schedule(iVar1);
    if (iVar4 == 0) {
      uVar3 = 0x2e7;
      iVar4 = 0;
      goto LAB_0001166e;
    }
    iVar4 = *(int *)(iVar1 + 0x4c);
    if (iVar4 < 0) {
      printk(DAT_000117c8,DAT_000117b0,0x2ee);
    }
    else {
      iVar5 = *(int *)(iVar1 + 8);
      iVar4 = *(int *)(*(int *)(iVar1 + 0x14) + 0xc);
      _cond_resched();
      iVar4 = iVar4 * 300;
      iVar2 = *(int *)(*(int *)(iVar1 + 0x14) + 0xc);
      if (*(int *)(*(int *)(iVar1 + 0x14) + 0x20) == iVar2) {
        if (iVar4 != 0) {
LAB_0001170c:
          if (iVar4 == -0x200) goto LAB_00011728;
          if (iVar4 == 0) goto LAB_00011714;
        }
        iVar4 = 0;
      }
      else {
        if (iVar4 != 0) {
          iVar4 = iVar2 * 300;
          init_wait_entry(auStack_2c,0);
          while (prepare_to_wait_event(iVar5 + 0x40,auStack_2c,2),
                *(int *)(*(int *)(iVar1 + 0x14) + 0x20) != *(int *)(*(int *)(iVar1 + 0x14) + 0xc)) {
            if (iVar4 == 0) goto LAB_00011790;
            iVar4 = schedule_timeout(iVar4);
          }
          if (iVar4 == 0) {
            iVar4 = 1;
          }
LAB_00011790:
          finish_wait(iVar5 + 0x40,auStack_2c);
          goto LAB_0001170c;
        }
LAB_00011714:
        iVar4 = -0x10;
        printk(DAT_000117d0,DAT_000117cc);
        (**(code **)(*(int *)(iVar5 + 0x48) + 0xc))(iVar5);
      }
LAB_00011728:
      lVar7 = ktime_get();
      if (*DAT_000117d4 != 0) {
        lVar7 = lVar7 - *(longlong *)(iVar1 + 0x30);
        uVar6 = ktime_to_us((int)lVar7,(int)((ulonglong)lVar7 >> 0x20));
        printk(DAT_000117d8,DAT_000117cc,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
      }
      if (iVar4 == 0) goto LAB_00011676;
    }
    disableIRQinterrupts();
    if (iVar1 == *(int *)(*(int *)(iVar1 + 8) + 0x34)) {
      *(undefined4 *)(*(int *)(iVar1 + 8) + 0x34) = 0;
    }
LAB_00011676:
    rve_job_cleanup(iVar1);
    return iVar4;
  }
  *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | 2;
  if ((param_1[0xe] == 0) && (iVar4 = rve_out_fence_alloc(iVar1), iVar4 != 0)) {
LAB_000115f2:
    rve_job_free(iVar1);
  }
  else {
    param_1[0xe] = *(int *)(iVar1 + 0x1c);
    iVar4 = rve_out_fence_get_fd(iVar1);
    param_1[0xc] = iVar4;
    if (iVar4 < 0) {
      printk(DAT_000117a4);
    }
    if (*DAT_000117a8 != 0) {
      printk(DAT_000117ac,param_1[0xd]);
    }
    if (param_1[0xd] < 1) {
      iVar4 = rve_job_schedule(iVar1);
      if (iVar4 == 0) {
        uVar3 = 0x2d6;
        iVar4 = 0;
LAB_0001166e:
        printk(DAT_000117b8,DAT_000117b0,uVar3);
        goto LAB_00011676;
      }
    }
    else {
      iVar2 = rve_get_input_fence();
      if (iVar2 != 0) {
        __close_fd(*(undefined4 *)(*(int *)(((uint)auStack_30 & 0xffffe000) + 0xc) + 0x304),
                   param_1[0xd]);
        iVar4 = dma_fence_get_status(iVar2);
        if (iVar4 == 1) {
          iVar4 = rve_job_schedule(iVar1);
          if (iVar4 != 0) {
            return 1;
          }
          uVar3 = 0x2bf;
          iVar4 = 1;
          goto LAB_0001166e;
        }
        uVar3 = DAT_000117c4;
        if ((iVar4 == 0) &&
           (iVar4 = rve_add_dma_fence_callback(iVar1,iVar2,DAT_000117bc), uVar3 = DAT_000117c0,
           -1 < iVar4)) {
          return iVar4;
        }
        printk(uVar3,DAT_000117b0);
        goto LAB_000115f2;
      }
      printk(DAT_000117b4,DAT_000117b0);
      rve_job_free(iVar1);
    }
LAB_0001163a:
    iVar4 = 0;
  }
  return iVar4;
}



/* ===== rve_job_commit_by_user_ctx @ 000117dc size=218 ===== */

undefined4
rve_job_commit_by_user_ctx(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = rve_internal_ctx_lookup
                    (*(undefined4 *)(*DAT_000118b8 + 0xc4),*(undefined4 *)(param_1 + 0x1c));
  uVar10 = IS_ERR_OR_NULL();
  if ((int)uVar10 == 0) {
    disableIRQinterrupts();
    if (*(char *)(iVar1 + 0x24) == '\0') {
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      *(undefined4 *)(iVar1 + 0x20) = 0;
      *(undefined1 *)(iVar1 + 0x24) = 1;
      *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x28);
      iVar5 = *(int *)(param_1 + 0x24);
      if (iVar5 == 0) {
        iVar5 = 4;
      }
      *(int *)(iVar1 + 0x10) = iVar5;
      uVar9 = 0;
      uVar10 = uVar10 & 0xffffffff00000000;
      while( true ) {
        uVar7 = (undefined4)(uVar10 >> 0x20);
        uVar8 = (undefined4)uVar10;
        if (*(uint *)(iVar1 + 0xc) <= uVar9) break;
        uVar10 = rve_job_commit(iVar1);
        if ((int)uVar10 < 0) {
          printk(DAT_000118c8,uVar9);
          goto LAB_0001181c;
        }
        uVar9 = uVar9 + 1;
        *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
      }
      uVar9 = *(uint *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x30);
      uVar4 = *(int *)(iVar1 + 0xc) * 0xe8;
      if (-1 < (int)uVar4) {
        uVar6 = *(uint *)(((uint)&uStack_18 & 0xffffe000) + 8);
        uVar2 = uVar9 + uVar4;
        uVar3 = uVar2;
        if (!CARRY4(uVar9,uVar4)) {
          uVar3 = (uVar2 - uVar6) - 1;
        }
        uVar11 = CONCAT44(uVar3,uVar4);
        if (!CARRY4(uVar9,uVar4) && uVar2 <= uVar6) {
          uVar6 = 0;
        }
        if (uVar6 == 0) {
          uVar11 = arm_copy_to_user(uVar9,*(undefined4 *)(iVar1 + 8));
        }
        uVar7 = (undefined4)((ulonglong)uVar11 >> 0x20);
        if ((int)uVar11 == 0) {
          if (*(int *)(iVar1 + 0x28) != 0) {
            return uVar8;
          }
          if (*(int *)(iVar1 + 0x10) != 4) {
            return uVar8;
          }
          kref_put(iVar1 + 0x3c,DAT_000118cc);
          return uVar8;
        }
      }
      printk(DAT_000118c4,uVar7);
    }
    else {
      printk(DAT_000118c0);
    }
LAB_0001181c:
    uVar7 = 0xfffffff2;
  }
  else {
    uVar7 = 0xffffffea;
    printk(DAT_000118bc,*(undefined4 *)(param_1 + 0x1c));
  }
  return uVar7;
}



/* ===== rve_job_input_fence_signaled @ 000118d0 size=70 ===== */

void rve_job_input_fence_signaled(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = ktime_get();
  if (*DAT_00011918 != 0) {
    lVar3 = lVar3 - *(longlong *)(*(int *)(param_2 + 0xc) + 0x28);
    uVar4 = ktime_to_us((int)lVar3,(int)((ulonglong)lVar3 >> 0x20));
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    printk(DAT_0001191c,uVar2,(int)uVar4,uVar2);
  }
  iVar1 = rve_job_schedule(*(undefined4 *)(param_2 + 0xc));
  if (iVar1 == 0) {
    printk(DAT_00011924,DAT_00011920,499);
  }
  kfree(param_2);
  return;
}



/* ===== rve_internal_ctx_alloc_to_get_idr_id @ 00011928 size=160 ===== */

undefined4
rve_internal_ctx_alloc_to_get_idr_id(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_000119c8 + 4),0xdc0);
  if (iVar1 == 0) {
    printk(DAT_000119cc);
    uVar2 = 0xfffffff4;
  }
  else {
    iVar4 = *(int *)(*DAT_000119d0 + 0xc4);
    if (iVar4 == 0) {
      printk(DAT_000119d4);
    }
    else {
      idr_preload(0xcc0);
      disableIRQinterrupts();
      local_20 = 0xa20;
      iVar3 = idr_alloc(iVar4,iVar1,1,0);
      *(int *)(iVar1 + 0x18) = iVar3;
      if (-1 < iVar3) {
        *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
        *(undefined4 *)(iVar1 + 0x40) =
             *(undefined4 *)(*(int *)(((uint)&local_20 & 0xffffe000) + 0xc) + 0x1d8);
        uVar2 = ktime_get();
        *(undefined4 *)(iVar1 + 4) = param_1;
        *(undefined4 *)(iVar1 + 0x44) = uVar2;
        *(undefined4 *)(iVar1 + 8) = 0;
        *(undefined4 *)(iVar1 + 0x3c) = 1;
        return *(undefined4 *)(iVar1 + 0x18);
      }
      printk(DAT_000119d8);
    }
    kfree(iVar1);
    uVar2 = 0xfffffff2;
  }
  return uVar2;
}



/* ===== rve_ctx_manager_init @ 000119dc size=50 ===== */

undefined4 rve_ctx_manager_init(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(DAT_00011a10 + 0x14),0xdc0);
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    printk(DAT_00011a14);
    uVar2 = 0xfffffff4;
  }
  else {
    uVar2 = 0;
    *puVar1 = DAT_00011a18;
    puVar1[1] = 0;
    puVar1[2] = 1;
    puVar1[3] = 0;
  }
  return uVar2;
}



/* ===== rve_ctx_manager_remove @ 00011a1c size=44 ===== */

void rve_ctx_manager_remove(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  disableIRQinterrupts();
  idr_for_each(uVar1,DAT_00011a48,uVar1);
  idr_destroy(uVar1);
  kfree(*param_1);
  *param_1 = 0;
  return;
}



/* ===== rve_write @ 00011a50 size=24 ===== */

void rve_write(undefined4 param_1,int param_2,int param_3)

{
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *(undefined4 *)(*(int *)(param_3 + 4) + param_2) = param_1;
  return;
}



/* ===== rve_init_reg @ 00011a68 size=18 ===== */

undefined4 rve_init_reg(void)

{
  if (*DAT_00011a7c != 0) {
    printk(DAT_00011a80);
  }
  return 0;
}



/* ===== rve_dump_read_back_reg @ 00011a84 size=352 ===== */

void rve_dump_read_back_reg(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  char in_CY;
  char in_OV;
  char cVar7;
  byte in_Q;
  undefined4 local_138 [4];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 auStack_118 [12];
  undefined4 auStack_e8 [12];
  undefined4 auStack_b8 [40];
  
  memset(local_138,0,0x20);
  memset(auStack_118,0,0x30);
  memset(auStack_b8,0,0xa0);
  cVar7 = '\x01';
  cVar6 = '\0';
  memset(auStack_e8,0,0x30);
  disableIRQinterrupts();
  iVar4 = 0;
  puVar2 = local_138;
  do {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
    DataSynchronizationBarrier(0xf);
    iVar4 = iVar4 + 4;
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0x20);
  iVar4 = 0x100;
  puVar2 = auStack_118;
  do {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
    DataSynchronizationBarrier(0xf);
    iVar4 = iVar4 + 4;
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0x130);
  iVar4 = 0x200;
  puVar2 = auStack_b8;
  do {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
    DataSynchronizationBarrier(0xf);
    iVar4 = iVar4 + 4;
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0x2a0);
  iVar4 = 0x300;
  puVar2 = auStack_e8;
  do {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + iVar4);
    DataSynchronizationBarrier(0xf);
    iVar4 = iVar4 + 4;
    *puVar2 = *puVar3;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0x330);
  printk(DAT_00011be4,(uint)(byte)(cVar6 << 4 | cVar7 << 3 | in_CY << 2 | in_OV << 1 | in_Q) << 0x1b
        );
  uVar1 = DAT_00011be8;
  printk(DAT_00011be8,0,local_138[0],local_138[1],local_138[2],local_138[3]);
  printk(DAT_00011be8,0x10,local_128,uStack_124,local_120,local_11c);
  printk(DAT_00011bec);
  puVar2 = auStack_118;
  iVar4 = 0x100;
  do {
    iVar5 = iVar4 + 0x10;
    printk(uVar1,iVar4,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    puVar2 = puVar2 + 4;
    iVar4 = iVar5;
  } while (iVar5 != 0x130);
  printk(DAT_00011bf0);
  uVar1 = DAT_00011be8;
  puVar2 = auStack_b8;
  iVar4 = 0x200;
  do {
    iVar5 = iVar4 + 0x10;
    printk(uVar1,iVar4,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    puVar2 = puVar2 + 4;
    iVar4 = iVar5;
  } while (iVar5 != 0x2a0);
  printk(DAT_00011bf4);
  uVar1 = DAT_00011be8;
  puVar2 = auStack_e8;
  iVar4 = 0x300;
  do {
    iVar5 = iVar4 + 0x10;
    printk(uVar1,iVar4,*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    puVar2 = puVar2 + 4;
    iVar4 = iVar5;
  } while (iVar5 != 0x330);
  return;
}



/* ===== rve_soft_reset @ 00011bf8 size=228 ===== */

void rve_soft_reset(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  rve_write(1,0x14,param_1);
  if (*DAT_00011cdc != 0) {
    printk(DAT_00011ce0);
    rve_dump_read_back_reg(param_1);
  }
  piVar1 = DAT_00011ce4;
  if (*DAT_00011ce4 != 0) {
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    printk(DAT_00011ce8,*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),
           *(undefined4 *)(*(int *)(param_1 + 4) + 0xc));
    DataSynchronizationBarrier(0xf);
    printk(DAT_00011cec,*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  }
  uVar4 = DAT_00011d08;
  iVar6 = DAT_00011cf0;
  iVar5 = 0x15;
  while (uVar3 = DAT_00011cf4, iVar2 = DAT_00011cf0, iVar5 = iVar5 + -1, iVar5 != 0) {
    (**(code **)(iVar6 + 4))(uVar4);
  }
  iVar6 = 10000;
  do {
    DataSynchronizationBarrier(0xf);
    if (*(int *)(*(int *)(param_1 + 4) + 0xc) << 0x1e < 0) {
      printk(DAT_00011cf8);
      rve_write(0x30000,0xc,param_1);
      rve_write(0xff0000,0x18,param_1);
      rve_write(0x30000,4,param_1);
      goto LAB_00011c90;
    }
    (**(code **)(iVar2 + 4))(uVar3);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  printk(DAT_00011d04);
LAB_00011c90:
  if (*piVar1 != 0) {
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    printk(DAT_00011cfc,*(undefined4 *)(*(int *)(param_1 + 4) + 0x14),
           *(undefined4 *)(*(int *)(param_1 + 4) + 0xc));
    DataSynchronizationBarrier(0xf);
    printk(DAT_00011d00,*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
    return;
  }
  return;
}



/* ===== rve_set_reg @ 00011d0c size=480 ===== */

undefined4 rve_set_reg(int param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  bool bVar15;
  longlong lVar16;
  
  lVar16 = ktime_get();
  piVar4 = DAT_00011ef8;
  puVar10 = *(undefined4 **)(param_1 + 0x10);
  if (*DAT_00011ef8 != 0) {
    printk(DAT_00011efc);
    uVar7 = DAT_00011f2c;
    puVar13 = puVar10;
    do {
      puVar12 = puVar13 + 4;
      printk(uVar7,*puVar13,puVar13[1],puVar13[2],puVar13[3]);
      puVar13 = puVar12;
    } while (puVar12 != puVar10 + 0x38);
    printk(DAT_00011f00,puVar10[0x38],puVar10[0x39]);
  }
  rve_write(0,0x18,param_2);
  if (*DAT_00011f04 != 0) {
    DataSynchronizationBarrier(0xf);
    DataSynchronizationBarrier(0xf);
    printk(DAT_00011f08,*(undefined4 *)(*(int *)(param_2 + 4) + 0x14),
           *(undefined4 *)(*(int *)(param_2 + 4) + 0xc));
    DataSynchronizationBarrier(0xf);
    printk(DAT_00011f0c,*(undefined4 *)(*(int *)(param_2 + 4) + 0x18));
  }
  if (*DAT_00011f10 != 0) {
    uVar3 = lVar16 - *(longlong *)(param_1 + 0x28);
    iVar8 = (int)(uVar3 >> 0x20);
    uVar2 = uVar3;
    if ((longlong)uVar3 < 0) {
      uVar2 = CONCAT44(-iVar8 - (uint)((int)uVar3 != 0),-(int)uVar3);
    }
    uVar9 = (uint)(uVar2 >> 0x20);
    lVar1 = (ulonglong)DAT_00011ef0 * (uVar2 & 0xffffffff);
    uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
    bVar15 = CARRY4((uint)lVar1,DAT_00011ef0);
    uVar2 = (ulonglong)DAT_00011ef4 * (uVar2 & 0xffffffff) +
            (ulonglong)
            CONCAT14(CARRY4(uVar6,DAT_00011ef4) || CARRY4(uVar6 + DAT_00011ef4,(uint)bVar15),
                     uVar6 + DAT_00011ef4 + bVar15);
    uVar6 = (uint)(uVar2 >> 0x20);
    uVar14 = (uint)((ulonglong)DAT_00011ef0 * (ulonglong)uVar9 + (uVar2 & 0xffffffff) >> 0x20);
    uVar2 = (ulonglong)DAT_00011ef4 * (ulonglong)uVar9 +
            (ulonglong)CONCAT14(CARRY4(uVar14,uVar6),uVar14 + uVar6) >> 9;
    if ((longlong)uVar3 < 0) {
      uVar2 = CONCAT44(-(int)(uVar2 >> 0x20) - (uint)((int)uVar2 != 0),-(int)uVar2);
    }
    printk(DAT_00011f14,iVar8,(int)uVar2,(int)(uVar2 >> 0x20));
  }
  *(longlong *)(param_1 + 0x30) = lVar16;
  *(longlong *)(param_1 + 0x38) = lVar16;
  iVar8 = 0;
  do {
    iVar11 = iVar8 + 4;
    rve_write(*(undefined4 *)((int)puVar10 + iVar8),iVar8,param_2);
    iVar8 = iVar11;
  } while (iVar11 != 0x20);
  iVar8 = 0;
  do {
    if (iVar8 != 2) {
      rve_write(puVar10[iVar8 + 8],iVar8 * 4 + 0x100,param_2);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 10);
  puVar13 = puVar10 + 0x12;
  iVar8 = 0x204;
  do {
    puVar13 = puVar13 + 1;
    iVar11 = iVar8 + 4;
    rve_write(*puVar13,iVar8,param_2);
    iVar8 = iVar11;
  } while (iVar11 != 0x2a0);
  rve_write(0x30000,0x214,param_2);
  rve_write(DAT_00011f18,0x218,param_2);
  rve_write(DAT_00011f1c,0x21c,param_2);
  rve_write(0xff0000,0x18,param_2);
  if (*DAT_00011f20 != 0) {
    rve_write(1,0x280,param_2);
  }
  if (*piVar4 != 0) {
    printk(DAT_00011f24);
    rve_dump_read_back_reg(param_2);
  }
  if (puVar10[0xb] == 1) {
    uVar7 = 0x108;
    uVar5 = puVar10[10];
  }
  else {
    uVar7 = 0x200;
    uVar5 = 1;
  }
  rve_write(uVar5,uVar7,param_2);
  if (*piVar4 != 0) {
    printk(DAT_00011f28);
    rve_dump_read_back_reg(param_2);
  }
  return 0;
}



/* ===== rve_get_version @ 00011f30 size=62 ===== */

undefined4 rve_get_version(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    printk(DAT_00011f70);
    uVar1 = 0xffffffea;
  }
  else {
    uVar2 = **(uint **)(param_1 + 4);
    DataSynchronizationBarrier(0xf);
    uVar3 = (uVar2 & 0xffff) >> 8;
    snprintf((char *)(param_1 + 0x68),0x10,DAT_00011f74,uVar2 >> 0x10,uVar3,uVar2 & 0xff,param_3);
    *(uint *)(param_1 + 0x58) = uVar3;
    *(uint *)(param_1 + 0x5c) = uVar2 & 0xff;
    *(uint *)(param_1 + 100) = uVar2 >> 0x10;
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== rve_get_monitor_info @ 00011f78 size=154 ===== */

void rve_get_monitor_info(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = rve_job_get_scheduler();
  if (*DAT_00012014 != 0) {
    iVar6 = *(int *)(*(int *)(iVar1 + 4) + 0x294);
    DataSynchronizationBarrier(0xf);
    iVar5 = *(int *)(*(int *)(iVar1 + 4) + 0x298);
    DataSynchronizationBarrier(0xf);
    iVar4 = *(int *)(*(int *)(iVar1 + 4) + 0x29c);
    DataSynchronizationBarrier(0xf);
    rve_write(2,0x280,iVar1,*(int *)(iVar1 + 4),param_4);
    disableIRQinterrupts();
    iVar3 = 0x88;
    do {
      iVar2 = iVar1 + iVar3;
      if (*(int *)(iVar1 + iVar3) == *(int *)(param_1 + 0x50)) {
        *(int *)(iVar2 + 8) = iVar6;
        *(int *)(iVar2 + 0xc) = iVar5;
        *(int *)(iVar2 + 0x10) = iVar4;
        break;
      }
      iVar3 = iVar3 + 0x14;
    } while (iVar3 != 0x150);
    if (*DAT_00012018 != 0) {
      printk(DAT_0001201c,iVar6,iVar5,iVar4);
    }
    *(int *)(iVar1 + 0x154) = *(int *)(iVar1 + 0x154) + iVar6;
    *(int *)(iVar1 + 0x158) = *(int *)(iVar1 + 0x158) + iVar5;
    *(int *)(iVar1 + 0x15c) = *(int *)(iVar1 + 0x15c) + iVar4;
  }
  return;
}



/* ===== rve_debugger_write @ 00012020 size=26 ===== */

undefined4 rve_debugger_write(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x80) + 0x40) + 4) + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00012032. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return param_3;
}



/* ===== rve_version_show @ 0001203a size=16 ===== */

undefined4
rve_version_show(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  seq_printf(param_1,DAT_00012054,DAT_0001204c,DAT_00012050,param_4);
  return 0;
}



/* ===== rve_debug_show @ 00012058 size=176 ===== */

undefined4 rve_debug_show(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar7 = DAT_00012110;
  if (DAT_00012108[3] == 0) {
    uVar7 = DAT_0001210c;
  }
  uVar5 = DAT_00012110;
  if (DAT_00012108[2] == 0) {
    uVar5 = DAT_0001210c;
  }
  uVar2 = DAT_00012110;
  if (DAT_00012108[4] == 0) {
    uVar2 = DAT_0001210c;
  }
  uVar6 = DAT_00012110;
  if (DAT_00012108[5] == 0) {
    uVar6 = DAT_0001210c;
  }
  uVar4 = DAT_00012110;
  if (DAT_00012108[6] == 0) {
    uVar4 = DAT_0001210c;
  }
  uVar3 = DAT_00012110;
  if (DAT_00012108[1] == 0) {
    uVar3 = DAT_0001210c;
  }
  uVar1 = DAT_00012110;
  if (*DAT_00012108 == 0) {
    uVar1 = DAT_0001210c;
  }
  seq_printf(param_1,DAT_00012114,uVar1,uVar3,uVar5,uVar7,uVar2,uVar6,uVar4);
  seq_puts(param_1,DAT_00012118);
  seq_puts(param_1,DAT_0001211c);
  seq_puts(param_1,DAT_00012120);
  seq_puts(param_1,DAT_00012124);
  seq_puts(param_1,DAT_00012128);
  seq_puts(param_1,DAT_0001212c);
  seq_puts(param_1,DAT_00012130);
  seq_puts(param_1,DAT_00012134);
  return 0;
}



/* ===== rve_ctx_manager_show @ 00012138 size=202 ===== */

void rve_ctx_manager_show(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  bool bVar16;
  uint in_cpsr;
  int local_2c [2];
  
  iVar11 = *(int *)(*DAT_00012204 + 0xc4);
  seq_puts(param_1,DAT_00012208);
  seq_printf(param_1,DAT_0001220c,*(undefined4 *)(iVar11 + 0x10));
  disableIRQinterrupts();
  local_2c[0] = 0;
  while( true ) {
    iVar6 = idr_get_next(iVar11,local_2c);
    if (iVar6 == 0) break;
    seq_printf(param_1,DAT_00012210,*(undefined4 *)(iVar6 + 0x18));
    uVar1 = in_cpsr >> 0x1b;
    uVar2 = in_cpsr >> 0x1c;
    uVar3 = in_cpsr >> 0x1d;
    uVar4 = in_cpsr >> 0x1e;
    bVar16 = (int)in_cpsr < 0;
    disableIRQinterrupts();
    uVar7 = *(undefined4 *)(iVar6 + 0x50);
    uVar13 = *(undefined4 *)(iVar6 + 0xc);
    uVar14 = *(undefined4 *)(iVar6 + 0x20);
    uVar8 = *(undefined4 *)(iVar6 + 0x48);
    uVar12 = *(undefined4 *)(iVar6 + 0x4c);
    cVar5 = *(char *)(iVar6 + 0x24);
    uVar15 = *(undefined4 *)(iVar6 + 0x40);
    uVar10 = *(undefined4 *)(iVar6 + 0x54);
    in_cpsr = in_cpsr & 0xffffff00;
    seq_printf(param_1,DAT_00012214,
               (uint)(byte)(bVar16 << 4 | ((uVar4 & 1) != 0) << 3 | ((uVar3 & 1) != 0) << 2 |
                            ((uVar2 & 1) != 0) << 1 | (uVar1 & 1) != 0) << 0x1b);
    uVar9 = DAT_0001221c;
    if (cVar5 == '\0') {
      uVar9 = DAT_00012218;
    }
    seq_printf(param_1,DAT_00012220,uVar15,uVar9);
    seq_printf(param_1,DAT_00012224,uVar13,uVar14);
    seq_printf(param_1,DAT_00012228,uVar12,uVar7);
    seq_printf(param_1,DAT_0001222c,uVar8,uVar10);
    seq_printf(param_1,DAT_00012230);
    disableIRQinterrupts();
    local_2c[0] = local_2c[0] + 1;
  }
  return;
}



/* ===== rve_debug_write @ 00012234 size=360 ===== */

void rve_debug_write(undefined4 param_1,uint param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auStack_28 [5];
  char acStack_23 [15];
  int local_14;
  
  piVar1 = DAT_0001239c;
  local_14 = *DAT_0001239c;
  if (param_3 < 0xe) {
    uVar6 = *(uint *)(((uint)auStack_28 & 0xffffe000) + 8);
    if (!CARRY4(param_2,param_3) && param_2 + param_3 <= uVar6) {
      uVar6 = 0;
    }
    uVar3 = param_3;
    if (uVar6 == 0) {
      uVar3 = arm_copy_from_user(acStack_23 + 1);
    }
    if (uVar3 == 0) {
      acStack_23[param_3] = '\0';
      iVar4 = strcmp(acStack_23 + 1,DAT_000123f8);
      uVar2 = DAT_000123fc;
      uVar5 = DAT_000123a0;
      if (iVar4 == 0) {
        if (*DAT_000123a8 == 0) {
          *DAT_000123a8 = 1;
        }
        else {
          *DAT_000123a8 = 0;
          uVar5 = uVar2;
        }
      }
      else {
        iVar4 = strncmp(acStack_23 + 1,DAT_000123a4,3);
        uVar5 = DAT_000123b0;
        if (iVar4 == 0) {
          if (DAT_000123a8[1] == 0) {
            DAT_000123a8[1] = 1;
          }
          else {
            DAT_000123a8[1] = 0;
            uVar5 = DAT_000123ac;
          }
        }
        else {
          iVar4 = strncmp(acStack_23 + 1,DAT_000123b4,4);
          uVar5 = DAT_000123bc;
          if (iVar4 == 0) {
            if (DAT_000123a8[2] == 0) {
              DAT_000123a8[2] = 1;
            }
            else {
              DAT_000123a8[2] = 0;
              uVar5 = DAT_000123b8;
            }
          }
          else {
            iVar4 = strncmp(acStack_23 + 1,DAT_000123c0,5);
            uVar5 = DAT_000123c8;
            if (iVar4 == 0) {
              if (DAT_000123a8[4] == 0) {
                DAT_000123a8[4] = 1;
              }
              else {
                DAT_000123a8[4] = 0;
                uVar5 = DAT_000123c4;
              }
            }
            else {
              iVar4 = strncmp(acStack_23 + 1,DAT_000123cc,4);
              uVar5 = DAT_000123d4;
              if (iVar4 == 0) {
                if (DAT_000123a8[5] == 0) {
                  DAT_000123a8[5] = 1;
                }
                else {
                  DAT_000123a8[5] = 0;
                  uVar5 = DAT_000123d0;
                }
              }
              else {
                iVar4 = strncmp(acStack_23 + 1,DAT_000123d8,3);
                uVar5 = DAT_000123e0;
                if (iVar4 == 0) {
                  if (DAT_000123a8[3] == 0) {
                    DAT_000123a8[3] = 1;
                  }
                  else {
                    DAT_000123a8[3] = 0;
                    uVar5 = DAT_000123dc;
                  }
                }
                else {
                  iVar4 = strncmp(acStack_23 + 1,DAT_000123e4,3);
                  uVar5 = DAT_000123ec;
                  if (iVar4 == 0) {
                    if (DAT_000123a8[6] == 0) {
                      DAT_000123a8[6] = 1;
                    }
                    else {
                      DAT_000123a8[6] = 0;
                      uVar5 = DAT_000123e8;
                    }
                  }
                  else {
                    iVar4 = strncmp(acStack_23 + 1,DAT_000123f0,3);
                    uVar5 = DAT_000123f4;
                    if (iVar4 != 0) goto LAB_0001238c;
                  }
                }
              }
            }
          }
        }
      }
      printk(uVar5);
    }
    else {
      param_3 = 0xfffffff2;
    }
  }
  else {
    param_3 = 0xffffffea;
  }
LAB_0001238c:
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_3);
  }
  return;
}



/* ===== rve_procfs_remove_files @ 00012400 size=94 ===== */

undefined4 rve_procfs_remove_files(undefined4 *param_1)

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



/* ===== rve_procfs_open @ 0001245e size=24 ===== */

void rve_procfs_open(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = PDE_DATA();
  single_open(param_2,*(undefined4 *)(*(int *)(iVar1 + 4) + 4),iVar1);
  return;
}



/* ===== rve_scheduler_show @ 00012476 size=156 ===== */

undefined4 rve_scheduler_show(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte in_Q;
  uint in_cpsr;
  uint uVar14;
  
  uVar3 = DAT_0001251c;
  piVar2 = DAT_00012514;
  seq_printf(param_1,DAT_00012518,*(undefined4 *)(*DAT_00012514 + 0x14),*DAT_00012514,param_1,
             param_2,param_3);
  seq_printf(param_1,DAT_00012520);
  for (uVar9 = 0; (int)uVar9 < *(int *)(*piVar2 + 0x14); uVar9 = uVar9 + 1) {
    iVar7 = uVar9 + 4;
    puVar8 = *(undefined4 **)(*piVar2 + iVar7 * 4);
    bVar1 = (iVar7 < 0) << 4 | (iVar7 == 0) << 3 | (0xfffffffb < uVar9) << 2 | SCARRY4(uVar9,4) << 1
            | in_Q;
    disableIRQinterrupts();
    uVar4 = puVar8[0x58];
    uVar6 = puVar8[0x59];
    uVar13 = puVar8[0x54];
    uVar11 = puVar8[0x55];
    uVar12 = puVar8[0x56];
    uVar10 = puVar8[0x57];
    uVar14 = in_cpsr & 0xffffff00;
    in_Q = (in_cpsr >> 0x1b & 1) != 0;
    uVar5 = dev_driver_string(*puVar8,uVar6,(uint)bVar1 << 0x1b);
    seq_printf(param_1,DAT_00012524,uVar9,uVar5,uVar4,uVar6,param_3);
    seq_printf(param_1,DAT_00012528);
    seq_printf(param_1,uVar3,uVar13);
    seq_printf(param_1,DAT_0001252c,uVar4,uVar6);
    seq_printf(param_1,DAT_00012530,uVar11,uVar12);
    seq_printf(param_1,DAT_00012534,uVar10);
    in_cpsr = uVar14;
  }
  return 0;
}



/* ===== rve_load_show @ 00012538 size=236 ===== */

undefined4 rve_load_show(undefined4 param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  uint local_30;
  
  piVar4 = DAT_00012630;
  seq_printf(param_1,DAT_00012634,*(undefined4 *)(*DAT_00012630 + 0x14));
  seq_printf(param_1,DAT_00012638);
  puVar7 = *(undefined4 **)(*piVar4 + 0x10);
  uVar5 = dev_driver_string(*puVar7);
  seq_printf(param_1,DAT_0001263c,uVar5);
  uVar5 = DAT_0001265c;
  uVar3 = DAT_0001262c;
  uVar2 = DAT_00012628;
  disableIRQinterrupts();
  seq_printf(param_1,DAT_00012648,
             (uint)((ulonglong)((uint)(puVar7[0x20] * DAT_00012640) >> 9) * (ulonglong)DAT_00012644
                   >> 0x27));
  seq_printf(param_1,DAT_0001264c);
  puVar8 = puVar7;
  do {
    puVar9 = puVar8 + 5;
    lVar1 = (ulonglong)uVar2 * (ulonglong)(uint)puVar8[0x23];
    uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
    bVar10 = CARRY4((uint)lVar1,uVar2);
    seq_printf(param_1,DAT_00012650,puVar8[0x22],DAT_00012650,
               (uint)((ulonglong)uVar3 * (ulonglong)(uint)puVar8[0x23] +
                      (ulonglong)
                      CONCAT14(CARRY4(uVar6,uVar3) || CARRY4(uVar6 + uVar3,(uint)bVar10),
                               uVar6 + uVar3 + (uint)bVar10) >> 0x29),0);
    seq_printf(param_1,uVar5,puVar8[0x24]);
    seq_printf(param_1,DAT_00012654,puVar8[0x25]);
    seq_printf(param_1,DAT_00012658,puVar8[0x26]);
    puVar8 = puVar9;
  } while (puVar9 != puVar7 + 0x32);
  return 0;
}



/* ===== rve_procfs_remove @ 00012660 size=18 ===== */

undefined4 rve_procfs_remove(void)

{
  rve_procfs_remove_files(*(undefined4 *)(*DAT_00012674 + 0xcc));
  return 0;
}



/* ===== rve_procfs_init @ 00012678 size=206 ===== */

undefined4 rve_procfs_init(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  puVar7 = *(uint **)(*DAT_00012748 + 0xcc);
  uVar2 = proc_mkdir(DAT_0001274c,0,param_3,*DAT_00012748,param_1,param_2,param_3);
  *puVar7 = uVar2;
  uVar3 = DAT_00012768;
  iVar1 = DAT_00012764;
  if ((uVar2 == 0) || (0xfffff000 < uVar2)) {
    printk(DAT_00012750,DAT_0001274c);
    uVar3 = 0xfffffffb;
    *puVar7 = 0;
  }
  else {
    iVar9 = 0;
    puVar8 = DAT_00012754;
    do {
      puVar4 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(iVar1 + 0x14),0xcc0);
      if (puVar4 == (undefined4 *)0x0) {
        printk(DAT_00012758,DAT_0001274c,*puVar8);
LAB_000126d6:
        rve_procfs_remove_files(puVar7);
        printk(DAT_0001275c);
        rve_procfs_remove();
        return 0xffffffff;
      }
      *puVar4 = puVar7;
      puVar4[1] = puVar8;
      iVar5 = proc_create_data(*puVar8,0x8124,uVar2,uVar3,puVar4);
      if (iVar5 == 0) {
        printk(DAT_00012760,DAT_0001274c,*puVar8);
        kfree(puVar4);
        goto LAB_000126d6;
      }
      puVar4[2] = iVar5;
      iVar9 = iVar9 + 1;
      puVar8 = puVar8 + 4;
      mutex_lock(puVar7 + 3);
      puVar6 = (undefined4 *)puVar7[2];
      puVar7[2] = (uint)(puVar4 + 3);
      puVar4[3] = puVar7 + 1;
      puVar4[4] = puVar6;
      *puVar6 = puVar4 + 3;
      mutex_unlock(puVar7 + 3);
    } while (iVar9 != 5);
    uVar3 = 0;
  }
  return uVar3;
}



/* ===== rve_fence_get_name @ 0001276c size=4 ===== */

undefined4 rve_fence_get_name(void)

{
  return DAT_00012770;
}



/* ===== rve_fence_context_alloc @ 00012774 size=36 ===== */

undefined4 * rve_fence_context_alloc(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)kmem_cache_alloc(*(undefined4 *)(DAT_00012798 + 0xc),0xdc0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0xfffffff4;
  }
  else {
    uVar2 = dma_fence_context_alloc(1);
    *puVar1 = uVar2;
  }
  return puVar1;
}



/* ===== rve_fence_context_free @ 0001279c size=4 ===== */

void rve_fence_context_free(void)

{
  kfree();
  return;
}



/* ===== rve_out_fence_alloc @ 000127a0 size=70 ===== */

undefined4 rve_out_fence_alloc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)*DAT_000127e8;
  iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_000127ec + 0x18),0xdc0);
  uVar2 = DAT_000127f0;
  if (iVar1 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    iVar3 = puVar4[1] + 1;
    puVar4[1] = iVar3;
    dma_fence_init(iVar1,uVar2,param_1 + 0x24,iVar3,*puVar4,0,iVar3,0);
    uVar2 = 0;
    *(int *)(param_1 + 0x1c) = iVar1;
  }
  return uVar2;
}



/* ===== rve_out_fence_get_fd @ 000127f4 size=52 ===== */

int rve_out_fence_get_fd(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = -0x16;
  }
  else {
    iVar1 = get_unused_fd_flags(0x80000);
    if (-1 < iVar1) {
      puVar2 = (undefined4 *)sync_file_create(*(undefined4 *)(param_1 + 0x1c));
      if (puVar2 == (undefined4 *)0x0) {
        iVar1 = -0xc;
      }
      else {
        fd_install(iVar1,*puVar2);
      }
    }
  }
  return iVar1;
}



/* ===== rve_get_input_fence @ 00012828 size=20 ===== */

int rve_get_input_fence(void)

{
  int iVar1;
  
  iVar1 = sync_file_get_fence();
  if (iVar1 == 0) {
    printk(DAT_0001283c);
  }
  return iVar1;
}



/* ===== rve_wait_input_fence @ 00012840 size=70 ===== */

uint rve_wait_input_fence(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  
  uVar2 = dma_fence_wait_timeout(param_1,1,0x7fffffff,param_4,param_4);
  if (param_1 != 0) {
    piVar3 = (int *)(param_1 + 0x24);
    HintPreloadData(piVar3);
    do {
      ExclusiveAccess(piVar3);
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      dma_fence_release();
    }
    else if (iVar4 < 1) {
      refcount_warn_saturate(piVar3,3);
    }
  }
  return uVar2 & (int)uVar2 >> 0x1f;
}



/* ===== rve_add_dma_fence_callback @ 00012886 size=90 ===== */

int rve_add_dma_fence_callback
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = kmem_cache_alloc(*(undefined4 *)(DAT_000128e0 + 0x10),0xcc0,param_3,DAT_000128e0,param_4);
  if (iVar1 == 0) {
    iVar2 = -0xc;
    printk(DAT_000128e8,DAT_000128e4);
  }
  else {
    *(undefined4 *)(iVar1 + 0xc) = param_1;
    iVar2 = dma_fence_add_callback(param_2,iVar1,param_3);
    if (iVar2 == -2) {
      printk(DAT_000128ec);
    }
    else {
      if (iVar2 != -0x16) {
        return iVar2;
      }
      printk(DAT_000128f0,DAT_000128e4,0xffffffea);
    }
    kfree(iVar1);
  }
  return iVar2;
}



/* ===== init_module @ 000128f8 size=302 ===== */

int init_module(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = DAT_00012a34;
  iVar4 = DAT_00012a30;
  iVar2 = kmem_cache_alloc(*(undefined4 *)(DAT_00012a30 + 0x20),0xdc0,param_3,param_4,param_1,
                           param_2,param_3,param_4);
  *piVar1 = iVar2;
  if (iVar2 == 0) {
    iVar6 = -0xc;
    printk(DAT_00012a38);
  }
  else {
    __mutex_init(iVar2 + 4,DAT_00012a3c,piVar1 + 4);
    iVar2 = *piVar1;
    if (iVar2 != -0x48) {
      memset((void *)(iVar2 + 0x4c),0,0x74);
      *(undefined4 *)(iVar2 + 0x48) = DAT_00012a40;
    }
    iVar2 = __platform_driver_register(DAT_00012a48,DAT_00012a44);
    uVar3 = DAT_00012a4c;
    iVar6 = iVar2;
    if (iVar2 == 0) {
      puVar5 = (undefined4 *)*piVar1;
      uVar3 = rve_fence_context_alloc();
      *puVar5 = uVar3;
      if (0xfffff000 < *(uint *)*piVar1) {
        printk(DAT_00012a50);
        return *(int *)*piVar1;
      }
      iVar6 = misc_register(DAT_00012a54);
      uVar3 = DAT_00012a58;
      iVar2 = iVar6;
      if (iVar6 == 0) {
        rve_ctx_manager_init(*piVar1 + 0xc4);
        iVar7 = *piVar1;
        iVar2 = kmem_cache_alloc(*(undefined4 *)(iVar4 + 0x14),0xdc0);
        *(int *)(iVar7 + 200) = iVar2;
        if (iVar2 == 0) {
          printk(DAT_00012a5c);
        }
        else {
          __mutex_init(iVar2,DAT_00012a74,DAT_00012a60);
          *(undefined4 *)(iVar2 + 0xc) = DAT_00012a78;
          *(undefined4 *)(iVar2 + 0x10) = 0;
          *(undefined4 *)(iVar2 + 0x14) = 1;
          *(undefined4 *)(iVar2 + 0x18) = 0;
        }
        uVar3 = DAT_00012a60;
        iVar2 = DAT_00012a2c;
        piVar1[2] = DAT_00012a28;
        piVar1[3] = iVar2;
        hrtimer_init(uVar3,1);
        uVar3 = DAT_00012a60;
        piVar1[0xc] = DAT_00012a64;
        hrtimer_start_range_ns(uVar3,extraout_r1,piVar1[2],piVar1[3],0,0,1);
        iVar2 = *piVar1;
        iVar4 = kmem_cache_alloc(*(undefined4 *)(iVar4 + 0x14),0xdc0);
        *(int *)(iVar2 + 0xcc) = iVar4;
        if (iVar4 == 0) {
          printk(DAT_00012a68);
          uVar3 = DAT_00012a70;
          iVar2 = DAT_00012a6c;
        }
        else {
          __mutex_init(iVar4 + 0xc,DAT_00012a80,DAT_00012a7c);
          *(int *)(iVar4 + 4) = iVar4 + 4;
          *(int *)(iVar4 + 8) = iVar4 + 4;
          rve_procfs_init();
          uVar3 = DAT_00012a70;
          iVar2 = DAT_00012a6c;
        }
      }
    }
    printk(uVar3,iVar2);
  }
  return iVar6;
}



/* ===== cleanup_module @ 00012a84 size=128 ===== */

void cleanup_module(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar1 = DAT_00012b04;
  iVar4 = *DAT_00012b04;
  rve_procfs_remove();
  kfree(*(undefined4 *)(iVar4 + 0xcc));
  iVar2 = *piVar1;
  *(undefined4 *)(iVar4 + 0xcc) = 0;
  rve_ctx_manager_remove(iVar2 + 0xc4);
  iVar4 = *piVar1;
  iVar2 = *(int *)(iVar4 + 200);
  mutex_lock(iVar2);
  idr_for_each(iVar2 + 0xc,DAT_00012b08,iVar2);
  idr_destroy(iVar2 + 0xc);
  mutex_unlock(iVar2);
  kfree(*(undefined4 *)(iVar4 + 200));
  puVar3 = (undefined4 *)*piVar1;
  *(undefined4 *)(iVar4 + 200) = 0;
  rve_fence_context_free(*puVar3);
  iVar2 = DAT_00012b0c;
  hrtimer_cancel(piVar1 + 4);
  platform_driver_unregister(iVar2);
  misc_deregister(iVar2 + 0x68);
  kfree(*piVar1);
  return;
}



/* ===== <EXTERNAL>::misc_deregister @ 00015000 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void misc_deregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_request_threaded_irq @ 00015004 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_request_threaded_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_find @ 00015008 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_find(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_kmalloc @ 0001500c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_kmalloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_driver_unregister @ 00015010 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_driver_unregister(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_irq @ 00015014 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_irq(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::snprintf @ 00015018 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::finish_wait @ 00015024 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void finish_wait(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_ioremap @ 00015028 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_ioremap(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hrtimer_init @ 0001502c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hrtimer_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::fd_install @ 00015030 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void fd_install(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kfree @ 00015034 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kfree(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_heavy_mb @ 0001503c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_heavy_mb(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::proc_create_data @ 00015040 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void proc_create_data(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::prepare_to_wait_event @ 00015044 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void prepare_to_wait_event(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__wake_up @ 00015048 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __wake_up(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_fence_add_callback @ 0001504c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_fence_add_callback(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::free_pages @ 00015050 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void free_pages(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::devm_clk_get @ 00015054 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void devm_clk_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_fence_wait_timeout @ 00015058 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_fence_wait_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dev_driver_string @ 0001505c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dev_driver_string(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_prepare @ 00015060 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_prepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::schedule_timeout @ 00015064 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void schedule_timeout(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__stack_chk_fail @ 00015068 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::refcount_warn_saturate @ 0001506c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void refcount_warn_saturate(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::pm_runtime_enable @ 00015070 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void pm_runtime_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_get_next @ 00015074 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_get_next(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::kmem_cache_alloc @ 00015078 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void kmem_cache_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_remove @ 0001507c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_remove(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__do_div64 @ 00015080 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __do_div64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::init_wait_entry @ 00015084 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void init_wait_entry(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::of_match_device @ 00015088 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void of_match_device(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_dev_err @ 0001508c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _dev_err(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_fence_context_alloc @ 00015090 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_fence_context_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_alloc @ 00015098 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_alloc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_fence_signal @ 0001509c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_fence_signal(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::platform_get_resource @ 000150a0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void platform_get_resource(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_preload @ 000150a4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_preload(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__close_fd @ 000150a8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __close_fd(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_lock @ 000150ac size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_lock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncmp @ 000150b0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strncmp(char *__s1,char *__s2,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strncpy @ 000150b4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::_cond_resched @ 000150b8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void _cond_resched(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::printk @ 000150bc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void printk(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__mutex_init @ 000150c0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __mutex_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_fence_init @ 000150c4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_fence_init(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_destroy @ 000150c8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_destroy(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::proc_mkdir @ 000150cc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void proc_mkdir(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::memset @ 000150d0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hrtimer_start_range_ns @ 000150d4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hrtimer_start_range_ns(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::misc_register @ 000150d8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void misc_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::PDE_DATA @ 000150dc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void PDE_DATA(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__init_waitqueue_head @ 000150e0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __init_waitqueue_head(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::proc_remove @ 000150e4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void proc_remove(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::strcmp @ 000150e8 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int strcmp(char *__s1,char *__s2)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_copy_to_user @ 000150ec size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_copy_to_user(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::nonseekable_open @ 000150f0 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void nonseekable_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__platform_driver_register @ 000150f4 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __platform_driver_register(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::idr_for_each @ 000150fc size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void idr_for_each(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_resume @ 00015100 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_resume(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::mutex_unlock @ 00015104 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void mutex_unlock(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::arm_copy_from_user @ 00015108 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void arm_copy_from_user(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::get_unused_fd_flags @ 0001510c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void get_unused_fd_flags(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::ktime_get @ 00015110 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void ktime_get(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::seq_printf @ 00015114 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void seq_printf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_disable @ 00015118 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hrtimer_cancel @ 0001511c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hrtimer_cancel(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::seq_puts @ 00015120 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void seq_puts(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_fence_get_status @ 00015128 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_fence_get_status(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::hrtimer_forward @ 0001512c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void hrtimer_forward(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_suspend @ 00015130 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_suspend(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::dma_fence_release @ 00015134 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void dma_fence_release(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::single_open @ 0001513c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void single_open(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_disable @ 00015140 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_disable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_enable @ 00015144 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_enable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sync_file_get_fence @ 00015148 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sync_file_get_fence(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::get_zeroed_page @ 0001514c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void get_zeroed_page(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::__pm_runtime_idle @ 00015150 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void __pm_runtime_idle(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::sync_file_create @ 00015158 size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void sync_file_create(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== <EXTERNAL>::clk_unprepare @ 0001515c size=1 ===== */

/* WARNING: Control flow encountered bad instruction data */

void clk_unprepare(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


